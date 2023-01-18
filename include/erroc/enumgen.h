#ifndef ERROC_ENUMGEN_H
#define ERROC_ENUMGEN_H

#include <erroc/errors.h>

#define EXPAND(X) X
#define FIRSTARG(X, ...) (X)
#define RESTARGS(X, ...) (__VA_ARGS__)
#define FOREACH_1(MACRO, LIST) MACRO LIST
#define FOREACH_2(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_1(M, RESTARGS LIST)
#define FOREACH_3(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_2(M, RESTARGS LIST)
#define FOREACH_4(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_3(M, RESTARGS LIST)
#define FOREACH_5(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_4(M, RESTARGS LIST)
#define FOREACH_6(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_5(M, RESTARGS LIST)
#define FOREACH_7(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_6(M, RESTARGS LIST)
#define FOREACH_8(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_7(M, RESTARGS LIST)
#define FOREACH_9(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_8(M, RESTARGS LIST)
#define FOREACH_10(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_9(M, RESTARGS LIST)
#define FOREACH_11(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_10(M, RESTARGS LIST)
#define FOREACH_12(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_11(M, RESTARGS LIST)
#define FOREACH_13(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_12(M, RESTARGS LIST)
#define FOREACH_14(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_13(M, RESTARGS LIST)
#define FOREACH_15(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_14(M, RESTARGS LIST)
#define FOREACH_16(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_15(M, RESTARGS LIST)
#define FOREACH_17(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_16(M, RESTARGS LIST)
#define FOREACH_18(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_17(M, RESTARGS LIST)
#define FOREACH_19(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_18(M, RESTARGS LIST)
#define FOREACH_20(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_19(M, RESTARGS LIST)
#define FOREACH_21(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_20(M, RESTARGS LIST)
#define FOREACH_22(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_21(M, RESTARGS LIST)
#define FOREACH_23(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_22(M, RESTARGS LIST)
#define FOREACH_24(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_23(M, RESTARGS LIST)
#define FOREACH_25(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_24(M, RESTARGS LIST)
#define FOREACH_26(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_25(M, RESTARGS LIST)
#define FOREACH_27(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_26(M, RESTARGS LIST)
#define FOREACH_28(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_27(M, RESTARGS LIST)
#define FOREACH_29(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_28(M, RESTARGS LIST)
#define FOREACH_30(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_29(M, RESTARGS LIST)
#define FOREACH_31(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_30(M, RESTARGS LIST)
#define FOREACH_32(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_31(M, RESTARGS LIST)
#define FOREACH_33(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_32(M, RESTARGS LIST)
#define FOREACH_34(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_33(M, RESTARGS LIST)
#define FOREACH_35(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_34(M, RESTARGS LIST)
#define FOREACH_36(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_35(M, RESTARGS LIST)
#define FOREACH_37(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_36(M, RESTARGS LIST)
#define FOREACH_38(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_37(M, RESTARGS LIST)
#define FOREACH_39(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_38(M, RESTARGS LIST)
#define FOREACH_40(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_39(M, RESTARGS LIST)
#define FOREACH_41(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_40(M, RESTARGS LIST)
#define FOREACH_42(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_41(M, RESTARGS LIST)
#define FOREACH_43(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_42(M, RESTARGS LIST)
#define FOREACH_44(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_43(M, RESTARGS LIST)
#define FOREACH_45(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_44(M, RESTARGS LIST)
#define FOREACH_46(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_45(M, RESTARGS LIST)
#define FOREACH_47(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_46(M, RESTARGS LIST)
#define FOREACH_48(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_47(M, RESTARGS LIST)
#define FOREACH_49(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_48(M, RESTARGS LIST)
#define FOREACH_50(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_49(M, RESTARGS LIST)
#define FOREACH_51(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_50(M, RESTARGS LIST)
#define FOREACH_52(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_51(M, RESTARGS LIST)
#define FOREACH_53(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_52(M, RESTARGS LIST)
#define FOREACH_54(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_53(M, RESTARGS LIST)
#define FOREACH_55(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_54(M, RESTARGS LIST)
#define FOREACH_56(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_55(M, RESTARGS LIST)
#define FOREACH_57(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_56(M, RESTARGS LIST)
#define FOREACH_58(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_57(M, RESTARGS LIST)
#define FOREACH_59(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_58(M, RESTARGS LIST)
#define FOREACH_60(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_59(M, RESTARGS LIST)
#define FOREACH_61(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_60(M, RESTARGS LIST)
#define FOREACH_62(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_61(M, RESTARGS LIST)
#define FOREACH_63(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_62(M, RESTARGS LIST)
#define FOREACH_64(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_63(M, RESTARGS LIST)
#define FOREACH_65(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_64(M, RESTARGS LIST)
#define FOREACH_66(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_65(M, RESTARGS LIST)
#define FOREACH_67(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_66(M, RESTARGS LIST)
#define FOREACH_68(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_67(M, RESTARGS LIST)
#define FOREACH_69(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_68(M, RESTARGS LIST)
#define FOREACH_70(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_69(M, RESTARGS LIST)
#define FOREACH_71(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_70(M, RESTARGS LIST)
#define FOREACH_72(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_71(M, RESTARGS LIST)
#define FOREACH_73(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_72(M, RESTARGS LIST)
#define FOREACH_74(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_73(M, RESTARGS LIST)
#define FOREACH_75(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_74(M, RESTARGS LIST)
#define FOREACH_76(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_75(M, RESTARGS LIST)
#define FOREACH_77(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_76(M, RESTARGS LIST)
#define FOREACH_78(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_77(M, RESTARGS LIST)
#define FOREACH_79(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_78(M, RESTARGS LIST)
#define FOREACH_80(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_79(M, RESTARGS LIST)
#define FOREACH_81(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_80(M, RESTARGS LIST)
#define FOREACH_82(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_81(M, RESTARGS LIST)
#define FOREACH_83(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_82(M, RESTARGS LIST)
#define FOREACH_84(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_83(M, RESTARGS LIST)
#define FOREACH_85(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_84(M, RESTARGS LIST)
#define FOREACH_86(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_85(M, RESTARGS LIST)
#define FOREACH_87(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_86(M, RESTARGS LIST)
#define FOREACH_88(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_87(M, RESTARGS LIST)
#define FOREACH_89(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_88(M, RESTARGS LIST)
#define FOREACH_90(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_89(M, RESTARGS LIST)
#define FOREACH_91(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_90(M, RESTARGS LIST)
#define FOREACH_92(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_91(M, RESTARGS LIST)
#define FOREACH_93(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_92(M, RESTARGS LIST)
#define FOREACH_94(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_93(M, RESTARGS LIST)
#define FOREACH_95(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_94(M, RESTARGS LIST)
#define FOREACH_96(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_95(M, RESTARGS LIST)
#define FOREACH_97(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_96(M, RESTARGS LIST)
#define FOREACH_98(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_97(M, RESTARGS LIST)
#define FOREACH_99(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_98(M, RESTARGS LIST)
#define FOREACH_100(M, LIST) EXPAND(M FIRSTARG LIST) FOREACH_99(M, RESTARGS LIST)

#define FOREACH__(N, M, LIST) FOREACH_##N(M, LIST)
#define FOREACH_(N, M, LIST) FOREACH__(N, M, LIST)

#define FOREACH(MACRO, LIST) FOREACH_(_VA_NARGS LIST, MACRO, LIST)

#define STRINGIFY_WITH_DELIMETER(X) #X,

/**
* @note Maximum enum fields allowed is according to the macro FOREACH_<max_size>.
* @note Generates 'enum class <name>' and 'const char* <name>_as_strings[]'.
*/
#define GENERATE_ENUM(name, ...) \
    enum class name { __VA_ARGS__, size }; \
    const char* name##_as_strings[static_cast<int>(name::size)] { FOREACH(STRINGIFY_WITH_DELIMETER, (__VA_ARGS__)) }; \
    const char* enum_to_string(name code) { return name##_as_strings[static_cast<int>(code)]; }

#define EXPORT_ENUM(name,ns) \
    using ns::name; \
    using ns::enum_to_string;

#endif // ERROC_ENUMGEN_H
