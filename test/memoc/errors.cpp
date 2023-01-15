#include <gtest/gtest.h>

#include <stdexcept>
#include <regex>
#include <sstream>

#include <memoc/errors.h>

TEST(Errors_test, core_expect_not_throwing_exception_when_condition_is_true)
{
    EXPECT_NO_THROW(MEMOC_THROW_IF_FALSE(0 == 0, std::runtime_error));
}

TEST(Errors_test, core_except_throws_specified_exception_when_condition_fails)
{
    EXPECT_THROW(MEMOC_THROW_IF_FALSE(0 == 1, std::runtime_error), std::runtime_error);
}

TEST(Errors_test, core_expect_throws_an_exception_with_specific_description)
{
    try {
        MEMOC_THROW_IF_FALSE(0 == 1, std::runtime_error, "some message with optional %d value", 0);
        FAIL();
    }
    catch (const std::runtime_error& ex) {
        const std::regex re("^'.+' failed on '.+' at line:[0-9]+@.+@.+ with message: .+$");
        EXPECT_TRUE(std::regex_match(ex.what(), re));
    }
}

TEST(Errors_cpp_test, core_expect_not_throwing_exception_when_condition_is_true)
{
#ifdef __unix__
    EXPECT_NO_THROW((MEMOCPP_THROW_IF_FALSE(0 == 0, std::runtime_error)));
#elif defined(_WIN32) || defined(_WIN64)
    EXPECT_NO_THROW(MEMOCPP_THROW_IF_FALSE(0 == 0, std::runtime_error));
#endif
}

TEST(Errors_cpp_test, core_except_throws_specified_exception_when_condition_fails)
{
#ifdef __unix__
    EXPECT_THROW((MEMOCPP_THROW_IF_FALSE(0 == 1, std::runtime_error)), std::runtime_error);
#elif defined(_WIN32) || defined(_WIN64)
    EXPECT_THROW(MEMOCPP_THROW_IF_FALSE(0 == 1, std::runtime_error), std::runtime_error);
#endif
}

TEST(Errors_cpp_test, core_expect_throws_an_exception_with_specific_description)
{
    try {
        MEMOCPP_THROW_IF_FALSE(0 == 1, std::runtime_error, << "some message with optional " << 0 << " value");
        FAIL();
    }
    catch (const std::runtime_error& ex) {
        const std::regex re("^'.+' failed on '.+' at line:[0-9]+@.+@.+ with message: .+$");
        EXPECT_TRUE(std::regex_match(ex.what(), re));
    }
}

TEST(Expected_test, can_have_either_value_or_error_of_any_types)
{
    using namespace memoc;

    enum class Errors {
        division_by_zero
    };

    auto divide = [](int a, int b) -> Expected<int, Errors> {
        if (b == 0) {
            return Errors::division_by_zero;
        }
        return a / b;
    };

    {
        auto result = divide(2, 1);
        EXPECT_TRUE(result);
        EXPECT_EQ(2, result.value());
        EXPECT_THROW(result.error(), std::runtime_error);
        EXPECT_EQ(2, result.value_or(-1));
    }

    {
        auto result = divide(2, 0);
        EXPECT_FALSE(result);
        EXPECT_EQ(Errors::division_by_zero, result.error());
        EXPECT_THROW(result.value(), std::runtime_error);
        EXPECT_EQ(-1, result.value_or(-1));
    }
}

TEST(Expected_test, can_be_copied)
{
    using namespace memoc;

    {
        Expected<int, double> result = 1;
        Expected<int, double> copied_result(result);

        EXPECT_TRUE(result);
        EXPECT_EQ(1, result.value());

        EXPECT_TRUE(copied_result);
        EXPECT_EQ(1, copied_result.value());
        
        copied_result = result;

        EXPECT_TRUE(copied_result);
        EXPECT_EQ(1, copied_result.value());
    }

    {
        Expected<int, double> result = 1.1;
        Expected<int, double> copied_result(result);

        EXPECT_FALSE(result);
        EXPECT_EQ(1.1, result.error());

        EXPECT_FALSE(copied_result);
        EXPECT_EQ(1.1, copied_result.error());

        copied_result = result;

        EXPECT_FALSE(copied_result);
        EXPECT_EQ(1.1, copied_result.error());
    }
}

TEST(Expected_test, can_be_moved)
{
    using namespace memoc;

    {
        Expected<int, double> result = 1;
        Expected<int, double> moved_result(std::move(result));

        EXPECT_TRUE(moved_result);
        EXPECT_EQ(1, moved_result.value());
        EXPECT_THROW(moved_result.error(), std::runtime_error);

        Expected<int, double> other_result = 2;
        moved_result = std::move(other_result);

        EXPECT_TRUE(moved_result);
        EXPECT_EQ(2, moved_result.value());
        EXPECT_THROW(moved_result.error(), std::runtime_error);
    }

    {
        Expected<int, double> result = 1.1;
        Expected<int, double> moved_result(result);

        EXPECT_FALSE(moved_result);
        EXPECT_EQ(1.1, moved_result.error());
        EXPECT_THROW(moved_result.value(), std::runtime_error);

        Expected<int, double> other_result = 2.2;
        moved_result = other_result;

        EXPECT_FALSE(moved_result);
        EXPECT_EQ(2.2, moved_result.error());
        EXPECT_THROW(moved_result.value(), std::runtime_error);
    }
}

TEST(Expected_test, have_monadic_oprations)
{
    using namespace memoc;

    enum class Errors {
        division_by_zero,
        division_failed
    };

    enum class Other_errors {
        division_by_zero,
        division_failed
    };

    auto divide = [](double a, double b) -> Expected<double, Errors> {
        if (b == 0) {
            return Errors::division_by_zero;
        }
        return a / b;
    };

    auto increment = [](double a) { return a + 1; };
    auto to_int = [](double a) { return static_cast<int>(a); };

    auto same = [](Errors) { return Errors::division_failed; };
    auto seem = [](Errors a) { return static_cast<Other_errors>(a); };

    {
        auto result = divide(2, 4)
            .and_then(increment)
            .and_then(to_int);

        EXPECT_TRUE(result);
        EXPECT_EQ(1, result.value());
    }

    {
        auto result = divide(2, 0)
            .or_else(same)
            .or_else(seem);

        EXPECT_FALSE(result);
        EXPECT_EQ(Other_errors::division_failed, result.error());
    }

    std::stringstream ss{};
    auto report_value = [&ss](double a) { ss << "result = " << a; };
    auto report_failure = [&ss](Errors) { ss << "operation failed: "; };
    auto report_reason = [&ss](Errors) { ss << "division by zero"; };

    {
        ss.str("");

        auto result = divide(2, 4)
            .and_then(increment)
            .and_then(report_value)
            .or_else(report_failure)
            .or_else(report_reason);

        EXPECT_TRUE(result);
        EXPECT_EQ(1.5, result.value());

        EXPECT_EQ("result = 1.5", ss.str());
    }

    {
        ss.str("");

        auto result = divide(2, 0)
            .and_then(increment)
            .and_then(report_value)
            .or_else(report_failure)
            .or_else(report_reason);

        EXPECT_FALSE(result);
        EXPECT_EQ(Errors::division_by_zero, result.error());

        EXPECT_EQ("operation failed: division by zero", ss.str());
    }
}

TEST(Optional_test, can_have_either_value_or_not)
{
    using namespace memoc;

    auto whole_divide = [](int a, int b) -> Optional<int> {
        if (a % b != 0) {
            return {};
        }
        return a / b;
    };

    {
        auto result = whole_divide(4, 2);
        EXPECT_TRUE(result);
        EXPECT_EQ(2, result.value());
        EXPECT_EQ(2, result.value_or(-1));
    }

    {
        auto result = whole_divide(3, 2);
        EXPECT_FALSE(result);
        EXPECT_THROW(result.value(), std::runtime_error);
        EXPECT_EQ(-1, result.value_or(-1));
    }
}
