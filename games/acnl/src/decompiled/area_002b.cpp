// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"
#include "search/search_cand_core.hpp"

#include <bit>

using guest::gptr;

// f_002b101c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b101c {

inline constexpr guest::Function<0x0026fe3c, u32(u32, u32, u32, u32)> call_0026fe3c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_002b101c(gptr<BsMenuItemSelect> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    arg0->word_28 = 0x8f1604;  // (from the original)
    arg0->word_0 = 0x8f1598;  // (from the original)
    arg0->word_9308 = 0x8ee228;  // (from the original)
    arg0->word_96a0 = 0x8ef284;  // (from the original)
    arg0->word_9784 = 0x8ef2c8;  // (from the original)
    call_002f76ac(r0 + 0x97b8u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    u32 r0_2 = call_002f770c(r0 + 0x96a0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 - 0x398u) = 0x8f18f4;  // (from the original)
    u32 r0_4 = call_00567ef0(r0_2 - 0x248u, 0x8f18f4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_005bf744(r0_4 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_6 - 0x954u) = 0x8f8b4c;  // (from the original)
    u32 r0_8 = call_0056988c(r0_6 - 0x44u, 0x8f8b4cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_0056988c(r0_8 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_0056988c(r0_10 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_0056988c(r0_12 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_00567ef0(r0_14 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_005bf744(r0_16 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_005e3194(r0_18 - 0xd0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_005e3194(r0_20 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_24 = call_005e3194(r0_22 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_26 = call_005e3194(r0_24 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_28 = call_005e3194(r0_26 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_30 = call_005d703c(r0_28 - 0x100u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_30 - 0x514u) = 0x8f47a0;  // (from the original)
    u32 r0_32 = call_005e3194(r0_30 - 0xf8u, 0x8f47a0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_34 = call_0056988c(r0_32 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_36 = call_0056988c(r0_34 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_38 = call_005bf744(r0_36 - 0x15cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_40 = call_00567ef0(r0_38 - 0x24cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_42 = call_0026fe3c(r0_40 - 0x848cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_19 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return call_006aaa30(r0_42 - 0x60u, r1_19);  // (from the original)
}

}  // namespace d_002b101c
GUEST_EXPORT(0x002b101c, d_002b101c::f_002b101c);

// f_002b1c08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b1c08 {

struct __attribute__((packed)) Local_002b1c08_r4_2 {
    u32 word_0;
    u8 unknown_4[0xe0];  // (not used here)
    u32 word_e4;
};
GUEST_OFFSET(Local_002b1c08_r4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002b1c08_r4_2, word_e4, 0xe4);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_002b1c08(gptr<BsMenuMailSelect> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 -= 8;
    u32 r2_1 = 0x8f1684u;  // (from the original)
    arg0->word_0 = 0x8f1618;  // (from the original)
    arg0->word_28 = r2_1;
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_00567ef0(r0 + 0x4060u, 0x8f1618u, r2_1, r3);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x4f0u) = 0x8f47a0;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_005e3194(r0_2 - 0xd4u, 0x8f47a0u, r2_2, r3_1);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_6 = call_0056988c(r0_4 - 0x28u, r1_1, r2_3, r3_2);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_8 = call_0056988c(r0_6 - 0x28u, r1_2, r2_4, r3_3);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_10 = call_005bf744(r0_8 - 0x15cu, r1_3, r2_5, r3_4);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_12 = call_00567ef0(r0_10 - 0x24cu, r1_4, r2_6, r3_5);  // (from the original)
    u32 r4_1 = r0_12 + 0xfffff0fcu;  // (from the original)
    *gptr<u32>(r4_1) = 0x8ee228;  // (from the original)
    gptr<Local_002b1c08_r4_2> r4_2 = gptr<Local_002b1c08_r4_2>(r4_1 + 0x398u);  // (from the original)
    r4_2->word_e4 = 0x8ef2c8;  // (from the original)
    r4_2->word_0 = 0x8ef284;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r4_2.addr() + 0x118u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_14 = call_002f770c(r4_2.addr(), r1_5, r2_7, r3_6);
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    *gptr<u32>(r0_14 - 0x398u) = 0x8f18f4;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_16 = call_00567ef0(r0_14 - 0x248u, 0x8f18f4u, r2_8, r3_7);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_18 = call_005bf744(r0_16 - 0x14cu, r1_6, r2_9, r3_8);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    u32 ea_1 = r0_18 - 0x11cu;  // (from the original)
    *gptr<u32>(ea_1) = 0x8f08ac;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_19 = call_002f7710(ea_1, r1_7, r2_10, r3_9);
    u32 r2_11 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    *gptr<u32>(r0_19 - 0x950u) = 0x8f8b4c;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_21 = call_0056988c(r0_19 - 0x40u, 0x8f8b4cu, r2_11, r3_10);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_12 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_23 = call_0056988c(r0_21 - 0x28u, r1_8, r2_12, r3_11);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_13 = guest::cpu()->r[2];
    u32 r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_25 = call_0056988c(r0_23 - 0x28u, r1_9, r2_13, r3_12);  // (from the original)
    u32 r1_10 = guest::cpu()->r[1];
    u32 r2_14 = guest::cpu()->r[2];
    u32 r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_27 = call_0056988c(r0_25 - 0x28u, r1_10, r2_14, r3_13);  // (from the original)
    u32 r1_11 = guest::cpu()->r[1];
    u32 r2_15 = guest::cpu()->r[2];
    u32 r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_29 = call_00567ef0(r0_27 - 0x248u, r1_11, r2_15, r3_14);  // (from the original)
    u32 r1_12 = guest::cpu()->r[1];
    u32 r2_16 = guest::cpu()->r[2];
    u32 r3_15 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_31 = call_005bf744(r0_29 - 0x14cu, r1_12, r2_16, r3_15);  // (from the original)
    u32 r1_13 = guest::cpu()->r[1];
    u32 r2_17 = guest::cpu()->r[2];
    u32 r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_33 = call_005e3194(r0_31 - 0xd0u, r1_13, r2_17, r3_16);  // (from the original)
    u32 r1_14 = guest::cpu()->r[1];
    u32 r2_18 = guest::cpu()->r[2];
    u32 r3_17 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_35 = call_005e3194(r0_33 - 0xc4u, r1_14, r2_18, r3_17);  // (from the original)
    u32 r1_15 = guest::cpu()->r[1];
    u32 r2_19 = guest::cpu()->r[2];
    u32 r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_37 = call_005e3194(r0_35 - 0xc4u, r1_15, r2_19, r3_18);  // (from the original)
    u32 r1_16 = guest::cpu()->r[1];
    u32 r2_20 = guest::cpu()->r[2];
    u32 r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_39 = call_005e3194(r0_37 - 0xc4u, r1_16, r2_20, r3_19);  // (from the original)
    u32 r1_17 = guest::cpu()->r[1];
    u32 r2_21 = guest::cpu()->r[2];
    u32 r3_20 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_41 = call_005e3194(r0_39 - 0xc4u, r1_17, r2_21, r3_20);  // (from the original)
    u32 r1_18 = guest::cpu()->r[1];
    u32 r2_22 = guest::cpu()->r[2];
    u32 r3_21 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_43 = call_005d703c(r0_41 - 0x100u, r1_18, r2_22, r3_21);  // (from the original)
    u32 r0_44 = r0_43 - 0x2200u;  // (from the original)
    u32 r2_23 = 0x8f4814u;  // (from the original)
    *gptr<u32>(r0_44) = 0x8f47ec;  // (from the original)
    *gptr<u32>(0x213cu + r0_44) = r2_23;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_46 = call_0056988c(r0_44 + 0x21b0u, 0x8f47ecu, r2_23, 0x213cu);  // (from the original)
    u32 r1_19 = guest::cpu()->r[1];
    u32 r2_24 = guest::cpu()->r[2];
    u32 r3_22 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_48 = call_0056988c(r0_46 - 0x28u, r1_19, r2_24, r3_22);  // (from the original)
    u32 r1_20 = guest::cpu()->r[1];
    u32 r2_25 = guest::cpu()->r[2];
    u32 r3_23 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_50 = call_0056988c(r0_48 - 0x28u, r1_20, r2_25, r3_23);  // (from the original)
    u32 r2_26 = guest::cpu()->r[2];
    u32 r3_24 = guest::cpu()->r[3];
    u32 r0_51 = r0_50 - 0x2160u;  // (from the original)
    *gptr<u32>(r0_51) = 0x8f4828;  // (from the original)
    u32 r0_52 = r0_51 + 0x201cu;  // (from the original)
    *gptr<u32>(r0_52) = 0x8f08ac;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_53 = call_002f7710(r0_52, 0x8f4828u, r2_26, r3_24);  // (from the original)
    u32 r3_25 = guest::cpu()->r[3];
    u32 r1_21 = 0x8ee258u;  // (from the original)
    *gptr<u32>(r0_53 - 0x134u) = r1_21;  // (from the original)
    *gptr<u32>(r0_53 - 0x140u) = 0x8ee248;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_55 = call_0056988c(r0_53 - 0x2cu, r1_21, 0x8ee248u, r3_25);  // (from the original)
    u32 r1_22 = guest::cpu()->r[1];
    u32 r2_27 = guest::cpu()->r[2];
    u32 r3_26 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_57 = call_0056988c(r0_55 - 0x28u, r1_22, r2_27, r3_26);  // (from the original)
    u32 r1_23 = guest::cpu()->r[1];
    u32 r2_28 = guest::cpu()->r[2];
    u32 r3_27 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_59 = call_0056988c(r0_57 - 0x28u, r1_23, r2_28, r3_27);  // (from the original)
    u32 r1_24 = guest::cpu()->r[1];
    u32 r2_29 = guest::cpu()->r[2];
    u32 r3_28 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_61 = call_0056988c(r0_59 - 0x28u, r1_24, r2_29, r3_28);  // (from the original)
    u32 r1_25 = guest::cpu()->r[1];
    u32 r2_30 = guest::cpu()->r[2];
    u32 r3_29 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_63 = call_0056988c(r0_61 - 0x28u, r1_25, r2_30, r3_29);  // (from the original)
    u32 r1_26 = guest::cpu()->r[1];
    u32 r2_31 = guest::cpu()->r[2];
    u32 r3_30 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_65 = call_0056988c(r0_63 - 0x28u, r1_26, r2_31, r3_30);  // (from the original)
    u32 r1_27 = guest::cpu()->r[1];
    u32 r2_32 = guest::cpu()->r[2];
    u32 r3_31 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_67 = call_0056988c(r0_65 - 0x2cu, r1_27, r2_32, r3_31);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_67 - 0x1b28u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    u32 r1_28 = guest::cpu()->r[1];
    u32 r2_33 = guest::cpu()->r[2];
    u32 r3_32 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_70 = call_0056988c((r0_67 - 0x1efcu) + 0x3a8u, r1_28, r2_33, r3_32);  // (from the original)
    u32 r1_29 = guest::cpu()->r[1];
    u32 r2_34 = guest::cpu()->r[2];
    u32 r3_33 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_72 = call_005bf744(r0_70 - 0x150u, r1_29, r2_34, r3_33);  // (from the original)
    u32 r1_30 = guest::cpu()->r[1];
    u32 r2_35 = guest::cpu()->r[2];
    u32 r3_34 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_74 = call_00567ef0(r0_72 - 0x248u, r1_30, r2_35, r3_34);  // (from the original)
    u32 r1_31 = guest::cpu()->r[1];
    r13 += 8;
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_74 - 0x5cu, r1_31);  // (from the original)
}

}  // namespace d_002b1c08
GUEST_EXPORT(0x002b1c08, d_002b1c08::f_002b1c08);

// f_002b1ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b1ea0 {

struct __attribute__((packed)) Local_002b1ea0_r0_1 {
    u32 word_0;
    u8 unknown_4[0x1];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Local_002b1ea0_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002b1ea0_r0_1, byte_5, 0x5);  // (from the original)

inline constexpr guest::Function<0x00220274, u32(u32, u32, u32, u32)> call_00220274;  // (from the original)
inline constexpr guest::Function<0x00220338, u32(u32, u32, u32, u32)> call_00220338;  // (from the original)
inline constexpr guest::Function<0x002210c4, u32(u32, u32, u32, u32)> call_002210c4;  // (from the original)
inline constexpr guest::Function<0x0022468c, u32(u32, u32, u32, u32)> call_0022468c;  // (from the original)

u32 f_002b1ea0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1 = 0;
    u32 r9 = guest::cpu()->r[9];
    gptr<Local_002b1ea0_r0_1> r0_1 = gptr<Local_002b1ea0_r0_1>(0u);
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    *frame.at<u32>(0) = r3;
    u32 r4 = 0u;
    u32 r8 = r0 + 0xa7cu;  // (from the original)
    u32 r7 = r0 + 0xbe68u;  // (from the original)
    r3 = *gptr<u32>(0xe798u + r0);  // (from the original)
    u32 r2 = 0xe798u | u32(s32(0xe798u) >> 0xb);  // (from the original)
    u32 r1_1 = *gptr<u32>(r2 + r0);
    u32 r5 = (r3 << 3) - r3;
    u32 r6 = r5 + 7u;
    if (s32(r6) > s32(r1_1)) {
        r6 = r1_1;
    }
    u32 res_1 = r5 - r6;
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r5 ^ r6) & (r5 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 != vf_1) {
        r9 = 1u;
    }
    if (nf_1 == vf_1) {
        goto L_2b1f58;
    }
L_2b1ee4:;
    r0_1 = gptr<Local_002b1ea0_r0_1>(r7 + (r5 << 3) + 0x1cd8u);  // (from the original)
    r1_2 = r0_1->byte_5;
    if (r1_2 == 0) {
        goto L_2b1f90;
    }
    if (r1_2 == 0xau) {  // (from the original)
        goto L_2b1fc0;
    }
    r1_3 = *gptr<u8>(r8 + (r0_1->word_0 * 0xc5u << 2) + 0x2d84u);  // (from the original)
    r0_2 = call_00220274(r8, r1_3, r2, r3);
    *frame.at<u32>(0) = r9;
    r0 = call_0022468c(r7, r4, r5, r0_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2b1f40:;
    r5 += 1u;
    res_2 = r5 - r6;
    r4 += 1u;
    if (res_2 >> 0x1f != ((r5 ^ r6) & (r5 ^ res_2)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_2b1ee4;
    }
    if (s32(r4) >= 7) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_2b1f58:;
    r5 = 0u;
    do {
        u32 r0_3 = call_00220274(r8, 0xau, r2, r3);  // (from the original)
        *frame.at<u32>(0) = r5;
        r0 = call_0022468c(r7, r4, 0x1bu, r0_3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 7);
    guest::cpu()->r[1] = r1;
    return r0;
L_2b1f90:;
    r1_4 = r0_1->word_0;
    r0_4 = call_00220338(r8, r1_4, r2, r3);
    *frame.at<u32>(0) = r9;
    r0 = call_0022468c(r7, r4, r5, r0_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_2b1f40;
L_2b1fc0:;
    u32 r0_5 = call_002210c4(r8, r1_2, r2, r3);
    *frame.at<u32>(0) = r9;
    r0 = call_0022468c(r7, r4, r5, r0_5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_2b1f40;
}

}  // namespace d_002b1ea0
GUEST_EXPORT_FRAMED(0x002b1ea0, d_002b1ea0::f_002b1ea0, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_002b2924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b2924 {

struct __attribute__((packed)) Object_002b2924_0 {
    u8 unknown_0[0xd5cc];  // (not used here)
    u32 word_d5cc;
    u8 unknown_d5d0[0x11cc];  // (not used here)
    u32 word_e79c;
};
GUEST_OFFSET(Object_002b2924_0, word_d5cc, 0xd5cc);  // (from the original)
GUEST_OFFSET(Object_002b2924_0, word_e79c, 0xe79c);  // (from the original)

struct __attribute__((packed)) Local_002b2924_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002b2924_r0_1, byte_b7, 0xb7);  // (from the original)

inline constexpr guest::Function<0x00223e38, u32(u32, u32, u32, u32)> call_00223e38;  // (from the original)
inline constexpr guest::Function<0x00224204, u32(u32, u32, u32, u32)> call_00224204;  // (from the original)
inline constexpr guest::Function<0x002b1ea0, u32(u32, u32, u32, u32)> call_002b1ea0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x006a923c, u32(u32, u32, u32, u32)> call_006a923c;  // (from the original)

u32 f_002b2924(gptr<Object_002b2924_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = r3;  // (from the original)
    r13 -= 0x20;  // (from the original)
    u32 r4 = 0u;
    u32 r8 = r0;
    u32 r5 = 0u;
    arg0->word_e79c = 0;
    u32 r9 = r8 + 0xbe68u;  // (from the original)
    u32 r6 = r8 + 0xa7cu;  // (from the original)
    gptr<Local_002b2924_r0_1> r0_1 = gptr<Local_002b2924_r0_1>(arg0->word_d5cc);
    u32 r1 = u32(r0_1->byte_b7) & 0xfeu | 1u;  // (from the original)
    r0_1->byte_b7 = u8(r1);
    do {
        u32 r7_1 = r6 + (r4 * 0xc5u << 2);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_006a923c(r7_1 + 4u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0 && s32(r5) < 0x1c) {  // (from the original)
            *gptr<u32>(r13) = u32(*gptr<u8>(r7_1 + 0x26cu));  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_3 = call_00224204(r9, r5, r4, 0u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xe);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_002f74c8(r0_3, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0xa4u) {  // (from the original)
        goto L_2b2a68;
    } else {
        r4 = 0u;
    }
    do {
        u32 r7_2 = r6 + (r4 * 0xc5u << 2);  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_6 = call_006a923c(r7_2 + 0x2b1cu, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_6 != 0 && s32(r5) < 0x1c) {  // (from the original)
            *gptr<u32>(r13) = u32(*gptr<u8>(r7_2 + 0x2d84u));  // (from the original)
            guest::cpu()->r[13] = r13;
            call_00224204(r9, r5, r4, 2u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    r0_7 = r8 + 0xb6e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_006a923c(r0_7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0 || s32(r5) >= 0x1c) {  // (from the original)
        goto L_2b2a68;
    }
    *gptr<u32>(r13) = 0xe;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00224204(r9, r5, 0u, 0xau);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2b2a68:;
    guest::cpu()->r[13] = r13;
    call_00223e38(r9, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 ea_1 = r13;
    r13 += 0x20;  // (from the original)
    u32 r3_1 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    return call_002b1ea0(r8, r1_1, r2_1, r3_1);
}

}  // namespace d_002b2924
GUEST_EXPORT(0x002b2924, d_002b2924::f_002b2924);

// f_002b315c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b315c {

inline guest::global<u32, 0x002b32a0> global_002b32a0;  // (from the original)
inline constexpr guest::Function<0x00220274, u32(u32, u32, u32, u32)> call_00220274;  // (from the original)
inline constexpr guest::Function<0x002204c0, u32(u32, u32, u32, u32)> call_002204c0;  // (from the original)
inline constexpr guest::Function<0x002210c4, u32(u32, u32, u32, u32)> call_002210c4;  // (from the original)
inline constexpr guest::Function<0x00221904, u32(u32, u32, u32, u32)> call_00221904;  // (from the original)
inline constexpr guest::Function<0x0031e570, u32(u32)> call_0031e570;  // (from the original)
inline constexpr guest::Function<0x0031e594, u32(u32, u32, u32, u32)> call_0031e594;  // (from the original)

u32 f_002b315c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = r0 + 0xa7cu;  // (from the original)
    u32 r0_2 = call_00221904(r0_1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    float S0_1 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 zf_1 = r2 == 0;
    *gptr<u8>(r0 + 0x586u) = u8(r2);  // (from the original)
    u32 r6_1 = r0 + 0x58cu;  // (from the original)
    if (!zf_1) {
        S0_1 = std::bit_cast<float>(*global_002b32a0);
        u32 res_1 = r1 - 4u;
        u32 r0_3 = *gptr<u32>(0xbe34u + r0);  // (from the original)
        *frame.at<u32>(0) = std::bit_cast<u32>(S0_1);
        *frame.at<u32>(4) = std::bit_cast<u32>(S0_1);
        *frame.at<u32>(8) = std::bit_cast<u32>(S0_1);
        if (res_1 >> 0x1f != ((r1 ^ 4u) & (r1 ^ res_1)) >> 0x1f) {  // (from the original)
            u32 r0_4 = r0_1 + (r0_3 * 0xc5u << 2);  // (from the original)
            u32 r4_1 = *gptr<u32>(0x2e2cu + r0_4);  // (from the original)
            u32 r1_2 = *gptr<u8>(r0_4 + 0x2d84u);  // (from the original)
            guest::cpu()->s[0] = S0_1;
            u32 r0_5 = call_00220274(r0_1, r1_2, r2_1, r3_1);
            call_0031e594(r6_1, r0_5, r4_1, frame.at(0).addr());
            S0_1 = guest::cpu()->s[0];
            return r0_2;
        }
        if (r1 != 5u) {
            if (s32(r1) >= 6) {
                guest::cpu()->s[0] = S0_1;
                return r0_2;
            }
            u32 r0_6 = r0_1 + (r0_3 * 0xc5u << 2);  // (from the original)
            u32 r4_2 = *gptr<u32>(0x4cf4u + r0_6);  // (from the original)
            u32 r1_3 = *gptr<u8>(r0_6 + 0x4c4cu);  // (from the original)
            guest::cpu()->s[0] = S0_1;
            u32 r0_7 = call_002204c0(r0_1, r1_3, r2_1, r3_1);
            call_0031e594(r6_1, r0_7, r4_2, frame.at(0).addr());
            S0_1 = guest::cpu()->s[0];
            return r0_2;
        }
        guest::cpu()->s[0] = S0_1;
        u32 r0_8 = call_002210c4(r0_1, r1_1, r2_1, r3_1);
        u32 r2_2 = *gptr<u32>(r0 + 0xb9f0u);  // (from the original)
        call_0031e594(r6_1, r0_8, r2_2, frame.at(0).addr());
        S0_1 = guest::cpu()->s[0];
        return r0_2;
    }
    if (s32(r1) < 6) {
        guest::cpu()->s[0] = S0_1;
        call_0031e570(r6_1);
        S0_1 = guest::cpu()->s[0];
    }
    guest::cpu()->s[0] = S0_1;
    return r0_2;
}

}  // namespace d_002b315c
GUEST_EXPORT_FRAMED(0x002b315c, d_002b315c::f_002b315c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002b39d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b39d0 {

inline constexpr guest::Function<0x00220be0, u32(u32, u32, u32, u32)> call_00220be0;  // (from the original)
inline constexpr guest::Function<0x00223cec, u32(u32, u32, u32)> call_00223cec;  // (from the original)
inline constexpr guest::Function<0x0031e570, u32(u32, u32)> call_0031e570;  // (from the original)

void f_002b39d0(u32 r0, u32 r1, u32 r2) {
    call_00220be0(r0 + 0xa7cu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0 + 0x583u) = 0;  // (from the original)
    u32 r1_1 = *gptr<u32>(r0 + 0x574u);  // (from the original)
    u32 r6_1 = ~0u;
    if (r1_1 + 1u != 0) {
        call_00223cec(r0 + 0xbe68u, r1_1, 0u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        *gptr<u32>(r0 + 0x574u) = r6_1;  // (from the original)
    }
    if (u32(*gptr<u8>(r0 + 0x586u)) == 0) {  // (from the original)
        if (u32(*gptr<u8>(r0 + 0xa78u)) == 1u) {  // (from the original)
            call_0031e570(r0 + 0x58cu, r1_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
        }
    }
    *gptr<u32>(r0 + 0x57cu) = r6_1;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_002b39d0
GUEST_EXPORT_FRAMED(0x002b39d0, d_002b39d0::f_002b39d0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002b3a50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b3a50 {

inline constexpr guest::Function<0x0022328c, u32(u32, u32, u32, u32)> call_0022328c;  // (from the original)
inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> call_00521ae0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_002b3a50(gptr<BsMenuMapVillage> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = 0x8f1698;  // (from the original)
    arg0->word_14 = 0x8f16e0;  // (from the original)
    arg0->word_be68 = 0x8edfb0;  // (from the original)
    call_002f76ac(r0 + 0xe16cu, 0x2b6ef8u, 0xe0u, 7u);  // (from the original)
    u32 r0_2 = (r0 + 0xbe68u) + 0x2220u;  // (from the original)
    u32 r0_3 = call_002f7710(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f76ac(r0_3 - 0x1c0u, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    u32 r0_5 = (r0_3 - 0x2220u) + 0x1f7cu;  // (from the original)
    u32 r0_6 = call_002f7710(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = call_002b6ef8(r0_6 - 0xe0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_002f7710(r0_8 - 0xe4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_3 = r0_10 - 0x1db8u;  // (from the original)
    call_002f76ac(r0_10 - 0x71cu, 0x6ab304u, 0xe4u, 7u);  // (from the original)
    call_002f76ac(r4_3 + 0x110u, 0x60e704u, 0x314u, 7u);  // (from the original)
    call_002f76ac(r4_3 + 0xcu, 0x56988cu, 0x28u, 6u);  // (from the original)
    u32 r0_15 = call_0022328c(r4_3 - 0xb3ecu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_15 - 0x4f0u) = 0x8f47a0;  // (from the original)
    u32 r0_17 = call_005e3194(r0_15 - 0xd4u, 0x8f47a0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_19 = call_0056988c(r0_17 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_21 = call_0056988c(r0_19 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_23 = call_005bf744(r0_21 - 0x15cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_25 = call_00567ef0(r0_23 - 0x24cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_27 = call_0056988c(r0_25 - 0x70u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_29 = call_0056988c(r0_27 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_31 = call_00567ef0(r0_29 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_33 = call_005bf744(r0_31 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_35 = call_005bf744(r0_33 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_15 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return call_00521ae0(r0_35 - 0x38u, r1_15);  // (from the original)
}

}  // namespace d_002b3a50
GUEST_EXPORT(0x002b3a50, d_002b3a50::f_002b3a50);

// f_002b47a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b47a8 {

struct __attribute__((packed)) Local_002b47a8_r4_2 {
    u32 word_0;
    u8 unknown_4[0xe0];  // (not used here)
    u32 word_e4;
};
GUEST_OFFSET(Local_002b47a8_r4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002b47a8_r4_2, word_e4, 0xe4);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_002b47a8(gptr<BsMenuSendMailMe> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 -= 8;
    u32 r2_1 = 0x8f1760u;  // (from the original)
    arg0->word_0 = 0x8f16f4;  // (from the original)
    arg0->word_28 = r2_1;
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_00567ef0(r0 + 0x4060u, 0x8f16f4u, r2_1, r3);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x4f0u) = 0x8f47a0;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_005e3194(r0_2 - 0xd4u, 0x8f47a0u, r2_2, r3_1);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_6 = call_0056988c(r0_4 - 0x28u, r1_1, r2_3, r3_2);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_8 = call_0056988c(r0_6 - 0x28u, r1_2, r2_4, r3_3);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_10 = call_005bf744(r0_8 - 0x15cu, r1_3, r2_5, r3_4);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_12 = call_00567ef0(r0_10 - 0x24cu, r1_4, r2_6, r3_5);  // (from the original)
    u32 r4_1 = r0_12 + 0xfffff0fcu;  // (from the original)
    *gptr<u32>(r4_1) = 0x8ee228;  // (from the original)
    gptr<Local_002b47a8_r4_2> r4_2 = gptr<Local_002b47a8_r4_2>(r4_1 + 0x398u);  // (from the original)
    r4_2->word_e4 = 0x8ef2c8;  // (from the original)
    r4_2->word_0 = 0x8ef284;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r4_2.addr() + 0x118u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_14 = call_002f770c(r4_2.addr(), r1_5, r2_7, r3_6);
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    *gptr<u32>(r0_14 - 0x398u) = 0x8f18f4;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_16 = call_00567ef0(r0_14 - 0x248u, 0x8f18f4u, r2_8, r3_7);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_18 = call_005bf744(r0_16 - 0x14cu, r1_6, r2_9, r3_8);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    u32 ea_1 = r0_18 - 0x11cu;  // (from the original)
    *gptr<u32>(ea_1) = 0x8f08ac;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_19 = call_002f7710(ea_1, r1_7, r2_10, r3_9);
    u32 r2_11 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    *gptr<u32>(r0_19 - 0x950u) = 0x8f8b4c;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_21 = call_0056988c(r0_19 - 0x40u, 0x8f8b4cu, r2_11, r3_10);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_12 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_23 = call_0056988c(r0_21 - 0x28u, r1_8, r2_12, r3_11);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_13 = guest::cpu()->r[2];
    u32 r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_25 = call_0056988c(r0_23 - 0x28u, r1_9, r2_13, r3_12);  // (from the original)
    u32 r1_10 = guest::cpu()->r[1];
    u32 r2_14 = guest::cpu()->r[2];
    u32 r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_27 = call_0056988c(r0_25 - 0x28u, r1_10, r2_14, r3_13);  // (from the original)
    u32 r1_11 = guest::cpu()->r[1];
    u32 r2_15 = guest::cpu()->r[2];
    u32 r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_29 = call_00567ef0(r0_27 - 0x248u, r1_11, r2_15, r3_14);  // (from the original)
    u32 r1_12 = guest::cpu()->r[1];
    u32 r2_16 = guest::cpu()->r[2];
    u32 r3_15 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_31 = call_005bf744(r0_29 - 0x14cu, r1_12, r2_16, r3_15);  // (from the original)
    u32 r1_13 = guest::cpu()->r[1];
    u32 r2_17 = guest::cpu()->r[2];
    u32 r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_33 = call_005e3194(r0_31 - 0xd0u, r1_13, r2_17, r3_16);  // (from the original)
    u32 r1_14 = guest::cpu()->r[1];
    u32 r2_18 = guest::cpu()->r[2];
    u32 r3_17 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_35 = call_005e3194(r0_33 - 0xc4u, r1_14, r2_18, r3_17);  // (from the original)
    u32 r1_15 = guest::cpu()->r[1];
    u32 r2_19 = guest::cpu()->r[2];
    u32 r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_37 = call_005e3194(r0_35 - 0xc4u, r1_15, r2_19, r3_18);  // (from the original)
    u32 r1_16 = guest::cpu()->r[1];
    u32 r2_20 = guest::cpu()->r[2];
    u32 r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_39 = call_005e3194(r0_37 - 0xc4u, r1_16, r2_20, r3_19);  // (from the original)
    u32 r1_17 = guest::cpu()->r[1];
    u32 r2_21 = guest::cpu()->r[2];
    u32 r3_20 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_41 = call_005e3194(r0_39 - 0xc4u, r1_17, r2_21, r3_20);  // (from the original)
    u32 r1_18 = guest::cpu()->r[1];
    u32 r2_22 = guest::cpu()->r[2];
    u32 r3_21 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_43 = call_005d703c(r0_41 - 0x100u, r1_18, r2_22, r3_21);  // (from the original)
    u32 r0_44 = r0_43 - 0x2200u;  // (from the original)
    u32 r2_23 = 0x8f4814u;  // (from the original)
    *gptr<u32>(r0_44) = 0x8f47ec;  // (from the original)
    *gptr<u32>(0x213cu + r0_44) = r2_23;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_46 = call_0056988c(r0_44 + 0x21b0u, 0x8f47ecu, r2_23, 0x213cu);  // (from the original)
    u32 r1_19 = guest::cpu()->r[1];
    u32 r2_24 = guest::cpu()->r[2];
    u32 r3_22 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_48 = call_0056988c(r0_46 - 0x28u, r1_19, r2_24, r3_22);  // (from the original)
    u32 r1_20 = guest::cpu()->r[1];
    u32 r2_25 = guest::cpu()->r[2];
    u32 r3_23 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_50 = call_0056988c(r0_48 - 0x28u, r1_20, r2_25, r3_23);  // (from the original)
    u32 r2_26 = guest::cpu()->r[2];
    u32 r3_24 = guest::cpu()->r[3];
    u32 r0_51 = r0_50 - 0x2160u;  // (from the original)
    *gptr<u32>(r0_51) = 0x8f4828;  // (from the original)
    u32 r0_52 = r0_51 + 0x201cu;  // (from the original)
    *gptr<u32>(r0_52) = 0x8f08ac;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_53 = call_002f7710(r0_52, 0x8f4828u, r2_26, r3_24);  // (from the original)
    u32 r3_25 = guest::cpu()->r[3];
    u32 r1_21 = 0x8ee258u;  // (from the original)
    *gptr<u32>(r0_53 - 0x134u) = r1_21;  // (from the original)
    *gptr<u32>(r0_53 - 0x140u) = 0x8ee248;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_55 = call_0056988c(r0_53 - 0x2cu, r1_21, 0x8ee248u, r3_25);  // (from the original)
    u32 r1_22 = guest::cpu()->r[1];
    u32 r2_27 = guest::cpu()->r[2];
    u32 r3_26 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_57 = call_0056988c(r0_55 - 0x28u, r1_22, r2_27, r3_26);  // (from the original)
    u32 r1_23 = guest::cpu()->r[1];
    u32 r2_28 = guest::cpu()->r[2];
    u32 r3_27 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_59 = call_0056988c(r0_57 - 0x28u, r1_23, r2_28, r3_27);  // (from the original)
    u32 r1_24 = guest::cpu()->r[1];
    u32 r2_29 = guest::cpu()->r[2];
    u32 r3_28 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_61 = call_0056988c(r0_59 - 0x28u, r1_24, r2_29, r3_28);  // (from the original)
    u32 r1_25 = guest::cpu()->r[1];
    u32 r2_30 = guest::cpu()->r[2];
    u32 r3_29 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_63 = call_0056988c(r0_61 - 0x28u, r1_25, r2_30, r3_29);  // (from the original)
    u32 r1_26 = guest::cpu()->r[1];
    u32 r2_31 = guest::cpu()->r[2];
    u32 r3_30 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_65 = call_0056988c(r0_63 - 0x28u, r1_26, r2_31, r3_30);  // (from the original)
    u32 r1_27 = guest::cpu()->r[1];
    u32 r2_32 = guest::cpu()->r[2];
    u32 r3_31 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_67 = call_0056988c(r0_65 - 0x2cu, r1_27, r2_32, r3_31);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_67 - 0x1b28u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    u32 r1_28 = guest::cpu()->r[1];
    u32 r2_33 = guest::cpu()->r[2];
    u32 r3_32 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_70 = call_0056988c((r0_67 - 0x1efcu) + 0x3a8u, r1_28, r2_33, r3_32);  // (from the original)
    u32 r1_29 = guest::cpu()->r[1];
    u32 r2_34 = guest::cpu()->r[2];
    u32 r3_33 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_72 = call_005bf744(r0_70 - 0x150u, r1_29, r2_34, r3_33);  // (from the original)
    u32 r1_30 = guest::cpu()->r[1];
    u32 r2_35 = guest::cpu()->r[2];
    u32 r3_34 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_74 = call_00567ef0(r0_72 - 0x248u, r1_30, r2_35, r3_34);  // (from the original)
    u32 r1_31 = guest::cpu()->r[1];
    r13 += 8;
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_74 - 0x5cu, r1_31);  // (from the original)
}

}  // namespace d_002b47a8
GUEST_EXPORT(0x002b47a8, d_002b47a8::f_002b47a8);

// f_002b4bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b4bc4 {

struct __attribute__((packed)) Local_002b4bc4_r12_1 {
    u8 unknown_0[0x61c];  // (not used here)
    u32 word_61c;
};
GUEST_OFFSET(Local_002b4bc4_r12_1, word_61c, 0x61c);  // (from the original)

struct __attribute__((packed)) Local_002b4bc4_r1_16 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002b4bc4_r1_16, byte_b7, 0xb7);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002ccc70, u32(u32, u32, u32)> call_002ccc70;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00312a4c, u32(u32, u32, u32, u32)> call_00312a4c;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32, u32)> call_00312ca0;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32, u32, u32)> call_005d6cc0;  // (from the original)
inline constexpr guest::Function<0x005d6d28, u32(u32, u32, u32, u32)> call_005d6d28;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005e3238, u32(u32, u32, u32, u32)> call_005e3238;  // (from the original)
inline constexpr guest::Function<0x005ea520, u32(u32, u32, u32, u32)> call_005ea520;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x0076ecd0, u32(u32, u32, u32, u32)> call_0076ecd0;  // (from the original)
inline constexpr guest::Function<0x0076ed5c, u32(u32, u32, u32, u32)> call_0076ed5c;  // (from the original)
inline constexpr guest::Function<0x0076edb4, u32(u32, u32, u32, u32)> call_0076edb4;  // (from the original)

u32 f_002b4bc4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x324);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r2_9 = 0;
    u32 r3_12 = 0;
    u32 r0_16 = 0;
    u32 r2_10 = 0;
    u32 r3_13 = 0;
    u32 r0_17 = 0;
    u32 r3_14 = 0;
    u32 r0_18 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r0_19 = 0;
    u32 r2_11 = 0;
    u32 r3_15 = 0;
    u32 r0_20 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r3_16 = 0;
    u32 r0_21 = 0;
    u32 r1_13 = 0;
    u32 r0_22 = 0;
    u32 r1_14 = 0;
    u32 r2_13 = 0;
    u32 r3_17 = 0;
    u32 r0_23 = 0;
    u32 r2_14 = 0;
    u32 r3_18 = 0;
    u32 r1_15 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r2_15 = 0;
    u32 r0_26 = 0;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r0_2 = call_005ea520(r0 + 0x1894u, r1, r2, r3);  // (from the original)
    u32 r0_3 = r4 + 0x62cu;  // (from the original)
    call_005d6cc0(r0_3, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005d6d28(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = call_003083bc(frame.at(4).addr(), frame.at(0x1c).addr(), 0x15eu, guest::cpu()->r[3]);  // (from the original)
    u32 r7 = 0x909f50u;  // (from the original)
    *gptr<u32>(r0_5) = r7;
    u32 r0_7 = call_005f4bfc(r0_5 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f825c(r0_7 + 0xcu, 0x2bcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    u32 r11 = 0u;
    r0 = (r0_7 - 0xcu) + 0x16u;  // (from the original)
    r1 = 0xafu;  // (from the original)
    do {
        u32 r3_6 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_6);
        r3_7 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_7);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    u32 r10 = 0x95c714u;  // (from the original)
    u32 r6 = r4 + 0x54c8u;  // (from the original)
    u32 r0_10 = call_0076ed5c(*gptr<u32>(r10), *gptr<u32>(r6), r2, r3_7);
    call_00312a4c(*global_0095debc, frame.at(4).addr(), 0x2b4e38u, r0_10);  // (from the original)
    u32 r0_12 = r4 + 0x72cu;  // (from the original)
    call_005d6cc0(r0_12, frame.at(4).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005d6d28(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = call_0076edb4(*gptr<u32>(r10), *gptr<u32>(r6), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    *frame.at<u32>(0x31c) = r4 + 0x5498u;  // (from the original)
    if (r0_14 == 0) {
        goto L_2b4dec;
    }
    r0_15 = frame.at(0x2d8).addr();  // (from the original)
    call_00312bd0(r0_15, guest::cpu()->r[1], r2_8, r3_11);
    r2_9 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_16 = frame.at(0x2d8).addr();  // (from the original)
    call_005e3238(r0_16, r0_14, r2_9, r3_12);
    r2_10 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_17 = *global_0095decc;
    call_005ea8f8(r0_17, 0u, r2_10, r3_13);
    r3_14 = guest::cpu()->r[3];
    r0_18 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_10 = frame.at(0x2d8).addr();  // (from the original)
    call_00312ca0(r0_18, r1_10, 0u, r3_14);
    *frame.at<u32>(0) = r11;
    r1_11 = *frame.at<u32>(0x31c);  // (from the original)
    r0_19 = *global_0095decc;
    call_005ea964(r0_19, r1_11, 0x2b4e54u, 0xbeu);  // (from the original)
    r2_11 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_20 = *global_0095decc;
    call_005ea8dc(r0_20, 0u, r2_11, r3_15);
    r1_12 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_21 = frame.at(0x2d8).addr();  // (from the original)
    call_00312cb0(r0_21, r1_12, r2_12, r3_16);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2b4d2c:;
    r1_13 = *frame.at<u32>(0x31c);  // (from the original)
    r0_22 = r4 + 0x8f0u;  // (from the original)
    call_005e2e50(r0_22, r1_13, r2, r3);
    r1_14 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_23 = r4 + 0x8f0u;  // (from the original)
    call_005e2f94(r0_23, r1_14, r2_13, r3_17);
    r2_14 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r1_15 = *gptr<u32>(r6);
    r0_24 = *gptr<u32>(r10);
    r0_25 = call_0076ecd0(r0_24, r1_15, r2_14, r3_18);
    r2 = guest::cpu()->r[2];
    r3 = r0_25;
    r0 = 0u;
    do {
        u32 cf_1 = r0 >= r3;
        gptr<Local_002b4bc4_r12_1> r12_1 = gptr<Local_002b4bc4_r12_1>(r4 + (r0 << 2));
        if (!cf_1) {
            r2 = 1u;
        }
        gptr<Local_002b4bc4_r1_16> r1_16 = gptr<Local_002b4bc4_r1_16>(r12_1->word_61c);
        if (cf_1) {
            r2 = 0u;
        }
        u32 zf_1 = r2 == 0;
        r2 |= (u32(r1_16->byte_b7) & 0xfeu);  // (from the original)
        r1_16->byte_b7 = u8(r2);
        if (!zf_1) {
            r2 = r5 == 0 ? 0u : 0xffu;  // (from the original)
            *gptr<u8>(r12_1->word_61c + 0xb4u) = u8(r2);  // (from the original)
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < 2u);
    r2_15 = *gptr<u32>(r6) + 1u == 0 ? 1u : 0u;
    r0_26 = r4 + 0xd4cu;  // (from the original)
    call_002ccc70(r0_26, 1u, r2_15);
    *gptr<u8>(r4 + 0x502u) = 1;  // (from the original)
    *frame.at<u32>(4) = r7;
    return frame.at(4).addr();
L_2b4dec:;
    call_005ea8f8(*global_0095decc, 0u, r2_8, r3_11);
    *frame.at<u32>(0) = r11;
    call_005ea964(*global_0095decc, *frame.at<u32>(0x31c), 0x2b4e54u, 0xbfu);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_2b4d2c;
}

}  // namespace d_002b4bc4
GUEST_EXPORT_FRAMED(0x002b4bc4, d_002b4bc4::f_002b4bc4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002b5e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b5e64 {

struct __attribute__((packed)) Local_002b5e64_ea_1 {
    u32 word_0;
    u8 unknown_4[0x394];  // (not used here)
    u32 word_398;
    u8 unknown_39c[0xe0];  // (not used here)
    u32 word_47c;
};
GUEST_OFFSET(Local_002b5e64_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002b5e64_ea_1, word_398, 0x398);  // (from the original)
GUEST_OFFSET(Local_002b5e64_ea_1, word_47c, 0x47c);  // (from the original)

inline constexpr guest::Function<0x001aca90, u32(u32, u32, u32, u32)> call_001aca90;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_002b5e64(gptr<BsMenuTourSelect> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 -= 8;
    arg0->word_28 = 0x8f17e0;  // (from the original)
    arg0->word_0 = 0x8f1774;  // (from the original)
    arg0->word_5498 = 0x909968;  // (from the original)
    arg0->word_5460 = 0x909b28;  // (from the original)
    u32 r0_1 = r0 + 0x5460u;  // (from the original)
    arg0->word_1894 = 0x90350c;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_1 - 0x2900u, 0x81e5d8u, 0xa4u, 0x40u);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_3 = call_001aca90(r0_1 - 0x3bccu, r1_1, r2_1, r3_1);  // (from the original)
    gptr<Local_002b5e64_ea_1> ea_1 = gptr<Local_002b5e64_ea_1>(r0_3 - 0xee0u);  // (from the original)
    ea_1->word_0 = 0x8ee228;  // (from the original)
    ea_1->word_47c = 0x8ef2c8;  // (from the original)
    ea_1->word_398 = 0x8ef284;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(ea_1.addr() + 0x4b0u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_5 = call_002f770c(ea_1.addr() + 0x398u, r1_2, r2_2, r3_2);  // (from the original)
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r0_5 - 0x398u) = 0x8f18f4;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_7 = call_00567ef0(r0_5 - 0x248u, 0x8f18f4u, r2_3, r3_3);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_9 = call_005bf744(r0_7 - 0x14cu, r1_3, r2_4, r3_4);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_11 = call_005e3194(r0_9 - 0xc8u, r1_4, r2_5, r3_5);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_13 = call_005e3194(r0_11 - 0xc4u, r1_5, r2_6, r3_6);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_15 = call_005d703c(r0_13 - 0x100u, r1_6, r2_7, r3_7);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_17 = call_005d703c(r0_15 - 0x100u, r1_7, r2_8, r3_8);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_19 = call_0056988c(r0_17 - 0x38u, r1_8, r2_9, r3_9);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_21 = call_0056988c(r0_19 - 0x28u, r1_9, r2_10, r3_10);  // (from the original)
    u32 r1_10 = guest::cpu()->r[1];
    u32 r2_11 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_23 = call_0056988c(r0_21 - 0x28u, r1_10, r2_11, r3_11);  // (from the original)
    u32 r1_11 = guest::cpu()->r[1];
    u32 r2_12 = guest::cpu()->r[2];
    u32 r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_25 = call_0056988c(r0_23 - 0x28u, r1_11, r2_12, r3_12);  // (from the original)
    u32 r1_12 = guest::cpu()->r[1];
    u32 r2_13 = guest::cpu()->r[2];
    u32 r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_27 = call_0056988c(r0_25 - 0x28u, r1_12, r2_13, r3_13);  // (from the original)
    u32 r1_13 = guest::cpu()->r[1];
    u32 r2_14 = guest::cpu()->r[2];
    u32 r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_29 = call_0056988c(r0_27 - 0x28u, r1_13, r2_14, r3_14);  // (from the original)
    u32 r1_14 = guest::cpu()->r[1];
    u32 r2_15 = guest::cpu()->r[2];
    u32 r3_15 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_31 = call_005bf744(r0_29 - 0x14cu, r1_14, r2_15, r3_15);  // (from the original)
    u32 r1_15 = guest::cpu()->r[1];
    u32 r2_16 = guest::cpu()->r[2];
    u32 r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_33 = call_005bf744(r0_31 - 0x14cu, r1_15, r2_16, r3_16);  // (from the original)
    u32 r1_16 = guest::cpu()->r[1];
    u32 r2_17 = guest::cpu()->r[2];
    u32 r3_17 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_35 = call_00567ef0(r0_33 - 0x248u, r1_16, r2_17, r3_17);  // (from the original)
    u32 r1_17 = guest::cpu()->r[1];
    r13 += 8;
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_35 - 0x4cu, r1_17);  // (from the original)
}

}  // namespace d_002b5e64
GUEST_EXPORT(0x002b5e64, d_002b5e64::f_002b5e64);

// f_002b64f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b64f8 {

inline guest::global<u32, 0x009981f4> global_009981f4;  // (from the original)
inline constexpr guest::Function<0x005b1a08, u32(u32, u32)> call_005b1a08;  // (from the original)
inline constexpr guest::Function<0x00755ac4, u32(u32, u32, u32, u32)> call_00755ac4;  // (from the original)
inline constexpr guest::Function<0x00755ad4, u32(u32, u32)> call_00755ad4;  // (from the original)

u32 f_002b64f8(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_00755ac4(0x950814u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_3 = call_005b1a08(frame.at(0).addr(), 0x950814u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        u32 r5 = r0_3;
        u32 r6 = 0u;
        u32 r4 = *global_009981f4;
        if (r4 == 0) {
            goto L_2b6560;
        }
        do {
            u32 r0_4 = call_00755ad4(r5, r4 + 0xcu);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (r0_4 != 0) {
                r6 = r4 + 0x14u;  // (from the original)
                goto L_2b6560;
            }
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
L_2b6560:;
        r0_1 = r6;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002b64f8
GUEST_EXPORT_FRAMED(0x002b64f8, d_002b64f8::f_002b64f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002b6ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b6ef8 {

inline constexpr guest::Function<0x00569774, u32(u32, u32, u32, u32)> call_00569774;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32)> call_0056988c;  // (from the original)

u32 f_002b6ef8(gptr<ButtonActionNode_rec> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0x8f183c;  // (from the original)
    call_00569774(r0 + 0x20u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00569774(r0 + 0x48u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00569774(r0 + 0x70u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00569774(r0 + 0x98u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_0056988c(r0 + 0x98u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_8 = call_0056988c(r0_6 - 0x28u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_10 = call_0056988c(r0_8 - 0x28u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_12 = call_0056988c(r0_10 - 0x28u, guest::cpu()->r[1]);  // (from the original)
    return r0_12 - 0x20u;  // (from the original)
}

}  // namespace d_002b6ef8
GUEST_EXPORT_FRAMED(0x002b6ef8, d_002b6ef8::f_002b6ef8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002b7598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7598 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

void f_002b7598(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_2 = call_00568c10(r0 + 0x270u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_001323bc(r0_2);
    guest::cpu()->r[13] += 8u;
    call_00569e6c(r0_3, r0 + 0x270u, 1u);  // (from the original)
    return;
}

}  // namespace d_002b7598
GUEST_EXPORT(0x002b7598, d_002b7598::f_002b7598);

// f_002b75bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b75bc {

inline guest::global<u32, 0x0087a114> global_0087a114;  // (from the original)
inline guest::global<u32, 0x0087a118> global_0087a118;  // (from the original)
inline constexpr guest::Function<0x00818b78, u32(u32, u32, u32)> call_00818b78;  // (from the original)

u32 f_002b75bc() {
    call_00818b78(guest::cpu()->r[0], *global_0087a114, *global_0087a118);
    return guest::cpu()->r[0];
}

}  // namespace d_002b75bc
GUEST_EXPORT_FRAMED(0x002b75bc, d_002b75bc::f_002b75bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_002b75d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b75d4 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32)> call_002cd0e0;  // (from the original)

u32 f_002b75d4(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    call_00132364(r0 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002cd0e0(r0 + 0x40cu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001323b4(r0 + 0x270u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002b75d4
GUEST_EXPORT(0x002b75d4, d_002b75d4::f_002b75d4);

// f_002b7910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7910 {

inline guest::global<u32, 0x0087a11c> global_0087a11c;  // (from the original)
inline guest::global<u32, 0x0087a120> global_0087a120;  // (from the original)
inline constexpr guest::Function<0x00818b78, u32(u32, u32, u32)> call_00818b78;  // (from the original)

u32 f_002b7910() {
    call_00818b78(guest::cpu()->r[0], *global_0087a11c, *global_0087a120);
    return guest::cpu()->r[0];
}

}  // namespace d_002b7910
GUEST_EXPORT_FRAMED(0x002b7910, d_002b7910::f_002b7910, 0x4010);  // pushes {r4, lr} first, as the original

// f_002b7928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7928 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> call_00567e24;  // (from the original)

u32 f_002b7928(u32 r0) {
    return call_00567e24(r0 + 0x28u, 0x87a1ecu);  // (from the original)
}

}  // namespace d_002b7928
GUEST_EXPORT(0x002b7928, d_002b7928::f_002b7928);

// f_002b7938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7938 {

inline guest::global<u32, 0x0087a134> global_0087a134;  // (from the original)
inline guest::global<u32, 0x0087a138> global_0087a138;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32, u32)> call_002cd444;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002b7938(gptr<ChangeRentalBase> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_0087a138;
    arg0->word_c = *global_0087a134;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = 0x8f18d0;  // (from the original)
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    u32 r0_2 = call_001207d8((r0 + 0x24u) + 4u, 0x8f18d0u, r2_1, r0 + 0xcu);  // (from the original)
    u32 r0_4 = call_00125e3c(r0_2 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_00125aec(r0_4 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_00125aec(r0_6 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_9 = r0_8 + 0x28u;  // (from the original)
    u32 r0_10 = call_002cd444(r0_9, r0_9 + 0x118u, 1u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_10 + 0xe4u) = 0x8ef270;  // (from the original)
    *gptr<u32>(r0_10) = 0x8ef22c;  // (from the original)
    u32 r0_12 = call_00301d0c(r0_10 + 0x118u, 0x2e0994u, 0x518u, 1u);  // (from the original)
    u32 r0_13 = r0_12 - 0x524u;  // (from the original)
    *gptr<u32>(r0_13 + 0xa3cu) = 0;  // (from the original)
    return r0_13;
}

}  // namespace d_002b7938
GUEST_EXPORT_FRAMED(0x002b7938, d_002b7938::f_002b7938, 0x4010);  // pushes {r4, lr} first, as the original

// f_002b79e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b79e8 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_002b79e8(gptr<ChangeRentalBase> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0x8f18d0;  // (from the original)
    arg0->word_40c = 0x8ef22c;  // (from the original)
    arg0->word_4f0 = 0x8ef270;  // (from the original)
    call_002f76ac(r0 + 0x524u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    u32 r0_2 = call_002f770c(r0 + 0x40cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = call_0056988c(r0_2 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_0056988c(r0_4 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_005bf744(r0_6 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00567ef0(r0_8 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_10 - 0x28u;  // (from the original)
}

}  // namespace d_002b79e8
GUEST_EXPORT_FRAMED(0x002b79e8, d_002b79e8::f_002b79e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002b7cb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7cb0 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_002b7cb0(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_2 = call_00568c10(r0 + 4u, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_001323bc(r0_2);
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_3, r0 + 4u, 1u);
}

}  // namespace d_002b7cb0
GUEST_EXPORT(0x002b7cb0, d_002b7cb0::f_002b7cb0);

// f_002b7cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7cd4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> call_00567e24;  // (from the original)

u32 f_002b7cd4(u32 r0) {
    return call_00567e24(r0 + 0x150u, 0x2b7ce0u);  // (from the original)
}

}  // namespace d_002b7cd4
GUEST_EXPORT(0x002b7cd4, d_002b7cd4::f_002b7cd4);

// f_002b7fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7fa0 {


u32 f_002b7fa0() {
    u32 r4 = 0x952aecu;  // (from the original)
    u32 r12 = 0u;
    u32 r1 = 1u;
    do {
        u32 r0 = 0u;
        u32 r2 = *gptr<u8>(r4 + r12);
        do {
            if ((r2 & lsl_r(r1, r0 & 0xff)) == 0) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return r0 + (r12 << 3);
            }
            if ((r2 & lsl_r(r1, r0 + 1u & 0xff)) == 0) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return r0 + (r12 << 3) + 1u;
            }
            r0 += 2u;
            guest::preempt();
        } while (r0 < 8u);
        r12 += 1u;
        guest::preempt();
    } while (r12 < 4u);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002b7fa0
GUEST_EXPORT_FRAMED(0x002b7fa0, d_002b7fa0::f_002b7fa0, 0x10);  // pushes {r4} first, as the original

// f_002b8044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b8044 {

struct __attribute__((packed)) Object_002b8044_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002b8044_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002b8044_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002b8044_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002b8044_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002b8044_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x002b7fa0, u32(u32)> call_002b7fa0;  // (from the original)

void f_002b8044(gptr<Object_002b8044_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    arg0->word_10 = r0_1;
    arg0->word_c = r3;
    arg0->word_0 = r1;
    arg0->word_4 = r2;
    u32 r0_2 = call_002b7fa0(r0_1);
    arg0->word_8 = r0_2;
    return;
}

}  // namespace d_002b8044
GUEST_EXPORT_FRAMED(0x002b8044, d_002b8044::f_002b8044, 0x4010);  // pushes {r4, lr} first, as the original

// f_002b8898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b8898 {

inline guest::global<u32, 0x00953230> global_00953230;  // (from the original)

u32 f_002b8898() {
    *global_00953230 = 0;
    guest::cpu()->r[1] = 0x953230u;  // (from the original)
    return 0u;
}

}  // namespace d_002b8898
GUEST_EXPORT(0x002b8898, d_002b8898::f_002b8898);

// f_002b8e84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b8e84 {

struct __attribute__((packed)) Object_002b8e84_0 {
    u8 unknown_0[0x298];  // (not used here)
    u32 word_298;
};
GUEST_OFFSET(Object_002b8e84_0, word_298, 0x298);  // (from the original)

struct __attribute__((packed)) Local_002b8e84_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002b8e84_r0_1, byte_b7, 0xb7);  // (from the original)

inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;  // (from the original)

void f_002b8e84(gptr<Object_002b8e84_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4c);  // the original's stack frame
    u32 r0 = arg0.addr();
    gptr<Local_002b8e84_r0_1> r0_1 = gptr<Local_002b8e84_r0_1>(arg0->word_298);
    u32 r1_1 = u32(r0_1->byte_b7) & 0xfeu | 1u;  // (from the original)
    r0_1->byte_b7 = u8(r1_1);
    call_00312bd0(frame.at(4).addr(), r1_1, r2, r3);
    *frame.at<u32>(0) = 4;
    call_00312c4c(frame.at(4).addr(), r1, 2u, 0xau);  // (from the original)
    call_005e2e50(r0 + 0x2a4u, frame.at(4).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2f94(r0 + 0x2a4u);  // (from the original)
    call_00312cb0(frame.at(4).addr());
    return;
}

}  // namespace d_002b8e84
GUEST_EXPORT_FRAMED(0x002b8e84, d_002b8e84::f_002b8e84, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002b940c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b940c {


void f_002b940c(gptr<ItemDragIconNode> arg0, u32 r1) {
    u32 zf_1 = r1 == 0;
    if (zf_1) {
        r1 = 0x1000403u;  // (from the original)
    }
    arg0->word_d0 = 0x10003f6;  // (from the original)
    arg0->byte_db = 1;
    if (!zf_1) {
        r1 = 0x10003f7u;  // (from the original)
    }
    arg0->byte_dc = 1;
    arg0->word_cc = r1;
    arg0->byte_da = 1;
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002b940c
GUEST_EXPORT(0x002b940c, d_002b940c::f_002b940c);

// f_002b9aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b9aa4 {

struct __attribute__((packed)) Object_002b9aa4_0 {
    u8 unknown_0[0x4cf];  // (not used here)
    u8 byte_4cf;
};
GUEST_OFFSET(Object_002b9aa4_0, byte_4cf, 0x4cf);  // (from the original)

inline constexpr guest::Function<0x0056878c, u32(u32, u32)> call_0056878c;  // (from the original)

u32 f_002b9aa4(gptr<Object_002b9aa4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    arg0->byte_4cf = u8(r1);
    u32 r0_2 = call_0056878c(r0 + 0x270u, 0x8794e4u);  // (from the original)
    u32 r0_3 = u32(arg0->byte_4cf) | u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_2 + 0xb7u) = u8(r0_3);  // (from the original)
    guest::cpu()->r[1] = r0_2;
    return r0_3;
}

}  // namespace d_002b9aa4
GUEST_EXPORT_FRAMED(0x002b9aa4, d_002b9aa4::f_002b9aa4, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ba3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ba3cc {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

void f_002ba3cc(u32 r0) {
    u32 r0_1 = r0 + 0xdcu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    u32 r0_2 = call_001323bc(r0_1);
    guest::cpu()->r[13] += 8u;
    call_00569e6c(r0_2, r0_1 + 0x270u, 1u);  // (from the original)
    return;
}

}  // namespace d_002ba3cc
GUEST_EXPORT(0x002ba3cc, d_002ba3cc::f_002ba3cc);

// f_002ba788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ba788 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> call_00567e24;  // (from the original)

u32 f_002ba788(u32 r0) {
    u32 r0_2 = call_00567e24(r0 + 0x24u, 0x2ba7acu);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r1_1 = 1u;
        *gptr<u8>(r0 + 0x4e0u) = u8(r1_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_002ba788
GUEST_EXPORT_FRAMED(0x002ba788, d_002ba788::f_002ba788, 0x4010);  // pushes {r4, lr} first, as the original

// f_002bab00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bab00 {

struct __attribute__((packed)) Local_002bab00_r0_13 {
    u8 unknown_0[0x4a8];  // (not used here)
    u32 word_4a8;
    u32 word_4ac;
    u32 word_4b0;
    u32 word_4b4;
    u32 word_4b8;
    u8 unknown_4bc[0x8];  // (not used here)
    u32 word_4c4;
    u32 word_4c8;
    u8 byte_4cc;
    u8 byte_4cd;
    u8 byte_4ce;
    u8 byte_4cf;
    u8 byte_4d0;
    u8 unknown_4d1[0xf];  // (not used here)
    u8 byte_4e0;
    u8 byte_4e1;
    u8 byte_4e2;
    u8 byte_4e3;
    u8 byte_4e4;
};
GUEST_OFFSET(Local_002bab00_r0_13, word_4a8, 0x4a8);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, word_4ac, 0x4ac);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, word_4b0, 0x4b0);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, word_4b4, 0x4b4);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, word_4b8, 0x4b8);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, word_4c4, 0x4c4);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, word_4c8, 0x4c8);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, byte_4cc, 0x4cc);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, byte_4cd, 0x4cd);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, byte_4ce, 0x4ce);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, byte_4cf, 0x4cf);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, byte_4d0, 0x4d0);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, byte_4e0, 0x4e0);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, byte_4e1, 0x4e1);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, byte_4e2, 0x4e2);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, byte_4e3, 0x4e3);  // (from the original)
GUEST_OFFSET(Local_002bab00_r0_13, byte_4e4, 0x4e4);  // (from the original)

struct __attribute__((packed)) Local_002bab00_r2_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002bab00_r2_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002bab00_r2_7, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00879434> global_00879434;  // (from the original)
inline guest::global<u32, 0x00879438> global_00879438;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0033f0d8, u32(u32, u32, u32, u32)> call_0033f0d8;  // (from the original)

u32 f_002bab00(gptr<ItemSelectWindow> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_00879438;
    arg0->word_c = *global_00879434;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = 0x8f19cc;  // (from the original)
    arg0->word_20 = 0;
    u32 r0_2 = call_001207d8(r0 + 0x24u, 0x8f19ccu, r2_1, r0 + 0xcu);  // (from the original)
    u32 ea_1 = r0_2 + 0x248u;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_4 = call_00125e3c(ea_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 ea_2 = r0_4 + 0x194u;  // (from the original)
    *gptr<u32>(ea_2) = 0;
    u32 r0_6 = call_00125aec(ea_2 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = call_00125aec(r0_6 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00125aec(r0_8 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_00125aec(r0_10 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_002bab00_r0_13> r0_13 = gptr<Local_002bab00_r0_13>(r0_12 - 0x480u);  // (from the original)
    r0_13->word_4a8 = 0;
    r0_13->word_4ac = 0;
    r0_13->word_4b0 = 0;
    gptr<Local_002bab00_r2_7> r2_7 = gptr<Local_002bab00_r2_7>(r0_13.addr() + 0x4bcu);  // (from the original)
    r0_13->word_4b4 = 0;
    u32 r1_6 = ~0u;
    r0_13->word_4b8 = 0;
    r2_7->word_0 = r1_6;
    r2_7->word_4 = 0;
    r0_13->word_4c8 = r1_6;
    r0_13->word_4c4 = 0;
    r0_13->byte_4cc = 0;
    r0_13->byte_4cd = 0;
    r0_13->byte_4ce = 0;
    r0_13->byte_4cf = 0;
    r0_13->byte_4d0 = 0;
    r0_13->byte_4e0 = 0;
    r0_13->byte_4e1 = 0;
    r0_13->byte_4e2 = 1;
    r0_13->byte_4e3 = 1;
    r0_13->byte_4e4 = 0;
    *gptr<u16>(0x4e6u + r0_13.addr()) = 0;  // (from the original)
    u32 r0_15 = call_0033f0d8(r0_13.addr() + 0x4e8u, 0x4e6u, r2_7.addr(), guest::cpu()->r[3]);  // (from the original)
    u32 r0_17 = call_00301d0c(r0_15 + 0xe8u, 0x2b6de0u, 0xe0u, 6u);  // (from the original)
    return r0_17 - 0x5d0u;  // (from the original)
}

}  // namespace d_002bab00
GUEST_EXPORT_FRAMED(0x002bab00, d_002bab00::f_002bab00, 0x4010);  // pushes {r4, lr} first, as the original

// f_002bc0b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bc0b4 {

inline constexpr guest::Function<0x0023bbe4, u32(u32, u32, u32, u32)> call_0023bbe4;  // (from the original)

u32 f_002bc0b4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r0_1 = call_0023bbe4(r0, r1, r2, r3);
    u32 r1_1 = 0x8f1c2cu;  // (from the original)
    *gptr<u32>(r0_1 + 0x7cu) = r1_1;  // (from the original)
    *gptr<u32>(r0_1 + 0x104u) = 0;  // (from the original)
    *gptr<u32>(r0_1) = 0x8f1b04;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002bc0b4
GUEST_EXPORT_FRAMED(0x002bc0b4, d_002bc0b4::f_002bc0b4, 0x4010);  // pushes {r4, lr} first, as the original

// f_002bc8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bc8e8 {

inline constexpr guest::Function<0x00275a58, u32(u32, u32)> call_00275a58;  // (from the original)

void f_002bc8e8(gptr<SearchCandGrid> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    call_00275a58(r0, r2 * u32(arg0->width_14) + r1);
    return;
}

}  // namespace d_002bc8e8
GUEST_EXPORT(0x002bc8e8, d_002bc8e8::f_002bc8e8);

// f_002bc928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bc928 {


void f_002bc928(gptr<SoPaCaWindowBase> arg0) {
    arg0->word_0 = 0x8f1d40;  // (from the original)
    arg0->byte_4 = 0;
    arg0->byte_5 = 0;
    return;
}

}  // namespace d_002bc928
GUEST_EXPORT(0x002bc928, d_002bc928::f_002bc928);

// f_002bc94c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bc94c {

struct __attribute__((packed)) Object_002bc94c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_002bc94c_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002bc94c_r7_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_002bc94c_r7_1, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x001332d4, u32(u32, u32, u32, u32)> call_001332d4;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00138f30, u32(u32)> call_00138f30;  // (from the original)
inline constexpr guest::Function<0x00321a80, u32(u32, u32, u32)> call_00321a80;  // (from the original)

u32 f_002bc94c(gptr<Object_002bc94c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r9_1 = r1;
    if (r2 >= 6u) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    gptr<Local_002bc94c_r7_1> r7_1 = gptr<Local_002bc94c_r7_1>(r0 + (r2 << 2));
    if (r7_1->word_14 == 0) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    u32 r0_2 = call_001332d4(*gptr<u32>(arg0->word_10 + 0x144u) + 0xcu, r1, ~0u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_2bc998;
    }
    return ~0u;
L_2bc998:;
    u32 r6_1 = r7_1->word_14;
    u32 r8_1 = r6_1 + 4u;
    call_00135748(r8_1);
    u32 r0_5 = call_00138f30(r6_1 + 0x10u);  // (from the original)
    call_001357ec(r8_1);
    call_00321a80(r0 + (r2 + (r2 << 1) << 3) + 0x2cu, r7_1->word_14, r9_1);  // (from the original)
    return r0_5;
}

}  // namespace d_002bc94c
GUEST_EXPORT_FRAMED(0x002bc94c, d_002bc94c::f_002bc94c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_002bcb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bcb60 {

struct __attribute__((packed)) Local_002bcb60_r7_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0xa8];  // (not used here)
    u32 word_c0;
};
GUEST_OFFSET(Local_002bcb60_r7_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002bcb60_r7_1, word_c0, 0xc0);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x0013b6e0, u32(u32, u32)> call_0013b6e0;  // (from the original)
inline constexpr guest::Function<0x0013c0e8, u32(u32, u32)> call_0013c0e8;  // (from the original)
inline constexpr guest::Function<0x00767084, u32(u32, u32, u32, u32)> call_00767084;  // (from the original)

void f_002bcb60(u32 r0, u32 r1) {
    gptr<Local_002bcb60_r7_1> r7_1 = gptr<Local_002bcb60_r7_1>(0u);
    u32 r5 = r0;
    u32 r0_2 = call_00767084(*global_0094d080, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0 && u32(*gptr<u8>(r5 + 0xbcu)) != 0) {  // (from the original)
        u32 r4 = 0u;
        u32 r8 = 1u;
        u32 r9 = ~0u;
        do {
            u32 r0_3 = *gptr<u8>(r5 + 0xbcu);  // (from the original)
            u32 r6_1 = lsl_r(r8, r4 & 0xff);  // (from the original)
            if ((r0_3 & r6_1) == 0) {
                goto L_2bcbec;
            }
            r7_1 = gptr<Local_002bcb60_r7_1>(r5 + (r4 << 2));
            r1 = r7_1->word_14;
            if (r1 != 0) {
                u32 r0_5 = call_0013c0e8(r5 + (r4 + (r4 << 1) << 3) + 0x2cu, r1);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_5 != 0) {
                    goto L_2bcbec;
                }
                call_0013b6e0(r7_1->word_14, r7_1->word_c0);
                r1 = guest::cpu()->r[1];
                r0_3 = *gptr<u8>(r5 + 0xbcu);  // (from the original)
            }
            *gptr<u8>(r5 + 0xbcu) = u8(r0_3 ^ r6_1);  // (from the original)
            r7_1->word_c0 = r9;
L_2bcbec:;
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 6);
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002bcb60
GUEST_EXPORT_FRAMED(0x002bcb60, d_002bcb60::f_002bcb60, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_002bcd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bcd40 {

struct __attribute__((packed)) Object_002bcd40_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_002bcd40_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002bcd40_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002bcd40_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002bcd40_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002bcd40_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x001b0544, u32(u32, u32)> call_001b0544;  // (from the original)
inline constexpr guest::Function<0x004bf4bc, u32(u32, u32)> call_004bf4bc;  // (from the original)

u32 f_002bcd40(gptr<Object_002bcd40_0> arg0, u32 r1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S2_1 = 0;
    u32 fpsr_1 = 0;
    u32 cf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = arg0->word_14;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    if (s32(arg0->word_10) <= 0) {
        goto L_2bcd9c;
    }
    S1 = std::bit_cast<float>(arg0->word_4);
    S2_1 = std::bit_cast<float>(arg0->word_8);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1);  // (from the original)
    cf_1 = fpsr_1 >> 0x1d & 1;  // (from the original)
    if (!cf_1) {
        cf_1 = (fpsr_1 & 0xfffffffu | vfp_cmpf(S1, S0)) >> 0x1d & 1;  // (from the original)
    }
    if (cf_1) {
        goto L_2bcd9c;
    }
    S1 = std::bit_cast<float>(vcvt_sz_f((S0 - S1) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1)))) / (S0 - S2_1)));
    r1 = std::bit_cast<u32>(S1);
L_2bcd9c:;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_001b0544(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    float S1_1 = guest::cpu()->s[1];
    u32 r0_2 = arg0->word_18;
    if (r0_2 != 0) {
        float S1_2 = std::bit_cast<float>(*gptr<u32>(r0_2));
        float S0_1 = std::bit_cast<float>(arg0->word_4);
        u32 r0_3 = arg0->word_14;
        guest::cpu()->r[13] += 8u;
        float S0_2 = S0_1 * S1_2;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return call_004bf4bc(r0_3, r1_1);
    }
    u32 r0_4 = arg0->word_14;
    float S0_3 = std::bit_cast<float>(arg0->word_4);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_1;
    return call_004bf4bc(r0_4, r1_1);
}

}  // namespace d_002bcd40
GUEST_EXPORT(0x002bcd40, d_002bcd40::f_002bcd40);

// f_002bcde0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bcde0 {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)

u32 f_002bcde0(gptr<SoundObjFieldObj> arg0) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_34) != 0) {
        return r0;
    }
    arg0->byte_39 = 0;
    return call_0020a4cc(r0, guest::cpu()->r[1], guest::cpu()->r[2], 0u);
}

}  // namespace d_002bcde0
GUEST_EXPORT(0x002bcde0, d_002bcde0::f_002bcde0);

// f_002bcdfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bcdfc {

struct __attribute__((packed)) Object_002bcdfc_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x27];  // (not used here)
    u8 byte_5c;
    u8 unknown_5d[0x3];  // (not used here)
    u32 word_60;
    u32 word_64;
    u32 word_68;
};
GUEST_OFFSET(Object_002bcdfc_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002bcdfc_0, byte_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_002bcdfc_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_002bcdfc_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_002bcdfc_0, word_68, 0x68);  // (from the original)

struct __attribute__((packed)) Local_002bcdfc_r0_1 {
    u8 unknown_0[0xd11];  // (not used here)
    u8 byte_d11;
    u8 unknown_d12[0x2];  // (not used here)
    u32 word_d14;
    u32 word_d18;
};
GUEST_OFFSET(Local_002bcdfc_r0_1, byte_d11, 0xd11);  // (from the original)
GUEST_OFFSET(Local_002bcdfc_r0_1, word_d14, 0xd14);  // (from the original)
GUEST_OFFSET(Local_002bcdfc_r0_1, word_d18, 0xd18);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x006b4aa8, u32(u32, u32, u32, u32)> call_006b4aa8;  // (from the original)
inline constexpr guest::Function<0x00820098, u32(u32, u32, u32, u32)> call_00820098;  // (from the original)

u32 f_002bcdfc(gptr<Object_002bcdfc_0> arg0, u32 r1, u32 r2, float S0, float S1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r6_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    gptr<Local_002bcdfc_r0_1> r0_1 = gptr<Local_002bcdfc_r0_1>(u32(arg0->byte_34));
    u32 r7_1 = r1;
    if (r0_1.addr() == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1.addr();
    }
    r0_1 = gptr<Local_002bcdfc_r0_1>(*global_0094d080);
    r1 = r0_1->byte_d11;
    if (r1 != 0) {
        if (r1 == 1u || r1 == 2u) {
            goto L_2bce84;
        }
        if (r1 != 3u) {
            guest::cpu()->r[1] = r1;
            return r0_1.addr();
        }
        r1_1 = r0_1->word_d18;
        r6_1 = s32(r1_1 + (r1_1 >> 0x1f)) >> 1;  // (from the original)
        if (s32(r0_1->word_d14) < s32(r6_1)) {
            goto L_2bcedc;
        }
        goto L_2bce90;
    }
    call_00820098(r0, r7_1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0_1 = gptr<Local_002bcdfc_r0_1>(u32(arg0->byte_5c));
    if (r0_1.addr() != 0) {
        r0_1 = gptr<Local_002bcdfc_r0_1>(0u);
        arg0->byte_5c = u8(r0_1.addr());
    }
    return r0_1.addr();
L_2bce84:;
    if (u32(arg0->byte_5c) == 0) {
        goto L_2bcea8;
    }
L_2bce90:;
    r2_1 = r0 + 0x60u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_00820098(r0, r7_1, r2_1, guest::cpu()->r[3]);
    return r0_2;
L_2bcea8:;
    arg0->word_60 = *gptr<u32>(r2);
    arg0->word_64 = *gptr<u32>(r2 + 4u);
    arg0->word_68 = *gptr<u32>(r2 + 8u);
    arg0->byte_5c = 1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_3 = call_00820098(r0, r7_1, r2, guest::cpu()->r[3]);
    return r0_3;
L_2bcedc:;
    float S1_3 = std::bit_cast<float>(*gptr<u32>(r2));
    float S0_3 = std::bit_cast<float>(arg0->word_60);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    call_006b4aa8(r6_1, r1_1, 0u, guest::cpu()->r[3]);
    float S0_4 = guest::cpu()->s[0];
    *frame.at<u32>(0) = std::bit_cast<u32>(S0_4);
    float S1_4 = std::bit_cast<float>(*gptr<u32>(r2 + 4u));
    float S0_5 = std::bit_cast<float>(arg0->word_64);
    u32 r1_4 = *gptr<u32>(*global_0094d080 + 0xd18u);  // (from the original)
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_4;
    call_006b4aa8(r6_1, r1_4, 0u, guest::cpu()->r[3]);
    float S0_6 = guest::cpu()->s[0];
    *frame.at<u32>(4) = std::bit_cast<u32>(S0_6);
    float S1_5 = std::bit_cast<float>(*gptr<u32>(r2 + 8u));
    float S0_7 = std::bit_cast<float>(arg0->word_68);
    u32 r1_5 = *gptr<u32>(*global_0094d080 + 0xd18u);  // (from the original)
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_5;
    call_006b4aa8(r6_1, r1_5, 0u, guest::cpu()->r[3]);
    float S0_8 = guest::cpu()->s[0];
    *frame.at<u32>(8) = std::bit_cast<u32>(S0_8);
    guest::cpu()->s[0] = S0_8;
    u32 r0_4 = call_00820098(r0, r7_1, frame.at(0).addr(), guest::cpu()->r[3]);
    return r0_4;
}

}  // namespace d_002bcdfc
GUEST_EXPORT_FRAMED(0x002bcdfc, d_002bcdfc::f_002bcdfc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002bcfd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bcfd8 {

struct __attribute__((packed)) Local_002bcfd8_ea_1 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x54];  // (not used here)
    u8 byte_5c;
    u8 unknown_5d[0x3];  // (not used here)
    u32 word_60;
    u32 word_64;
    u32 word_68;
};
GUEST_OFFSET(Local_002bcfd8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002bcfd8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002bcfd8_ea_1, byte_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Local_002bcfd8_ea_1, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Local_002bcfd8_ea_1, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Local_002bcfd8_ea_1, word_68, 0x68);  // (from the original)

inline guest::global<u32, 0x002bd048> global_002bd048;  // (from the original)
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002bcfd8(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = call_0020af18(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8f8d88;  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0x44u, 0x131800u, 4u, 1u);  // (from the original)
    u32 r0_5 = call_00301d0c(r0_3 + 4u, 0x1287a8u, 0x14u, 1u);  // (from the original)
    float S0_3 = std::bit_cast<float>(*global_002bd048);
    gptr<Local_002bcfd8_ea_1> ea_1 = gptr<Local_002bcfd8_ea_1>(r0_5 - 0x48u);  // (from the original)
    ea_1->word_0 = 0x8f1d8c;  // (from the original)
    ea_1->byte_5c = 0;
    ea_1->word_60 = std::bit_cast<u32>(S0_3);
    ea_1->word_64 = std::bit_cast<u32>(S0_3);
    ea_1->word_68 = std::bit_cast<u32>(S0_3);
    ea_1->word_4 = 7;
    guest::cpu()->s[0] = S0_3;
    return ea_1.addr();
}

}  // namespace d_002bcfd8
GUEST_EXPORT_FRAMED(0x002bcfd8, d_002bcfd8::f_002bcfd8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002be4a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002be4a4 {

inline constexpr guest::Function<0x0020b838, u32(u32, u32, u32, u32)> call_0020b838;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32)> call_002fe940;  // (from the original)

void f_002be4a4(u32 r0, u32 r1, u32 r2) {
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r9 = r2;
    u32 r4 = 0u;
    u32 r8 = r1 + 0x55a6u;  // (from the original)
    do {
        u32 r0_1 = r5 + (r4 * 0x14bu << 4) + 0x1428u;  // (from the original)
        u32 r0_2 = call_002fbd54(r0_1, r1, r2, guest::cpu()->r[3]);
        if (r0_2 != 0) {
            u32 r0_3 = call_002fe940(r0_1, r8, guest::cpu()->r[2]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_3 == 0) {
                goto L_2be520;
            }
        }
        r0_4 = r5 + (r4 * 0x14bu << 4);  // (from the original)
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        r0_5 = r0_4 + 8u;
        call_0020b838(r0_5, r7, r9, guest::cpu()->r[3]);
        return;
L_2be520:;
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x20u);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002be4a4
GUEST_EXPORT(0x002be4a4, d_002be4a4::f_002be4a4);

// f_002be534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002be534 {

inline constexpr guest::Function<0x0020b9b0, u32(u32, u32, u32, u32)> call_0020b9b0;  // (from the original)

u32 f_002be534(u32 r0) {
    u32 r0_2 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        u32 r0_1 = r5 + (r4 * 0x14bu << 4) + 8u;  // (from the original)
        r0_2 = call_0020b9b0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x20u);  // (from the original)
    return r0_2;
}

}  // namespace d_002be534
GUEST_EXPORT_FRAMED(0x002be534, d_002be534::f_002be534, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002be76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002be76c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_002be76c(u32 r0) {
    call_002f76ac(r0 + 8u, 0x613e48u, 0x14b0u, 0x20u);  // (from the original)
    return r0;
}

}  // namespace d_002be76c
GUEST_EXPORT_FRAMED(0x002be76c, d_002be76c::f_002be76c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002be798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002be798 {

inline constexpr guest::Function<0x0071fd0c, u32(u32, u32, u32, u32)> call_0071fd0c;  // (from the original)

u32 f_002be798(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r7 = 0u;
    u32 r9 = r1;
    u32 r8 = r7;
    u32 r4 = r7;
    do {
        u32 r5_1 = r6 + (r4 * 0xfbbu << 3);  // (from the original)
        if ((u32(*gptr<u8>(0x7dd6u + r5_1)) & 1u) == 0 || u32(*gptr<u8>(0x7dd7u + r5_1)) != 4u) {  // (from the original)
            goto L_2be804;
        }
        if (r7 != 0) {
            u32 r0_1 = call_0071fd0c(r5_1, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_1 == 0) {
                goto L_2be804;
            }
        }
        r7 = r5_1;
        r8 = r4;
L_2be804:;
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    if (r9 != 0) {
        *gptr<u32>(r9) = r8;
    }
    return r7;
}

}  // namespace d_002be798
GUEST_EXPORT_FRAMED(0x002be798, d_002be798::f_002be798, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_002be82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002be82c {

inline constexpr guest::Function<0x002d4174, u32(u32, u32, u32, u32)> call_002d4174;  // (from the original)

void f_002be82c(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r4 = 0u;
    do {
        call_002d4174(r5 + (r4 * 0xfbbu << 3), r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_002be82c
GUEST_EXPORT_FRAMED(0x002be82c, d_002be82c::f_002be82c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002be864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002be864 {

inline constexpr guest::Function<0x002d4198, u32(u32, u32, u32, u32)> call_002d4198;  // (from the original)

u32 f_002be864(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r4 = 0u;
    do {
        r0_2 = call_002d4198(r5 + (r4 * 0xfbbu << 3), r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_002be864
GUEST_EXPORT_FRAMED(0x002be864, d_002be864::f_002be864, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002be89c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002be89c {

inline constexpr guest::Function<0x002d4100, u32(u32)> call_002d4100;  // (from the original)
inline constexpr guest::Function<0x00725984, u32(u32, u32, u32, u32)> call_00725984;  // (from the original)

u32 f_002be89c(u32 r0) {
    u32 r0_1 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        u32 r6_1 = r5 + (r4 * 0xfbbu << 3);  // (from the original)
        r0_1 = *gptr<u8>(0x7dd6u + r6_1);  // (from the original)
        if ((r0_1 & 1u) != 0) {
            r0_1 = call_00725984(r6_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_1 == 0) {
                r0_1 = call_002d4100(r6_1);
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    return r0_1;
}

}  // namespace d_002be89c
GUEST_EXPORT_FRAMED(0x002be89c, d_002be89c::f_002be89c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002be8f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002be8f0 {

inline constexpr guest::Function<0x002d41c8, u32(u32, u32, u32, u32)> call_002d41c8;  // (from the original)

void f_002be8f0(u32 r0) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        call_002d41c8(r5 + (r4 * 0xfbbu << 3), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    return;
}

}  // namespace d_002be8f0
GUEST_EXPORT_FRAMED(0x002be8f0, d_002be8f0::f_002be8f0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002bea00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bea00 {

struct __attribute__((packed)) Object_002bea00_0 {
    u8 unknown_0[0x17be08];  // (not used here)
    u32 word_17be08;
};
GUEST_OFFSET(Object_002bea00_0, word_17be08, 0x17be08);  // (from the original)

inline constexpr guest::Function<0x002bea50, u32(u32, u32, u32, u32)> call_002bea50;  // (from the original)
inline constexpr guest::Function<0x002d3fc0, u32(u32, u32, u32, u32)> call_002d3fc0;  // (from the original)

void f_002bea00(gptr<Object_002bea00_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = r3;  // (from the original)
    r13 -= 0x10;  // (from the original)
    u32 r1_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    u32 r3_1 = arg0->word_17be08 + 1u;
    arg0->word_17be08 = r3_1;
    *gptr<u32>(r13) = r1_1;
    guest::cpu()->r[13] = r13;
    call_002d3fc0(r1, r2, r3, r3_1);
    u32 r2_1 = guest::cpu()->r[2];
    u32 ea_1 = r13;
    r13 += 0x10;  // (from the original)
    u32 r3_2 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    call_002bea50(r0, r1, r2_1, r3_2);
    return;
}

}  // namespace d_002bea00
GUEST_EXPORT(0x002bea00, d_002bea00::f_002bea00);

// f_002beb4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002beb4c {

struct __attribute__((packed)) Object_002beb4c_0 {
    u8 unknown_0[0x17be08];  // (not used here)
    u32 word_17be08;
};
GUEST_OFFSET(Object_002beb4c_0, word_17be08, 0x17be08);  // (from the original)

inline constexpr guest::Function<0x002bea50, u32(u32, u32, u32, u32)> call_002bea50;  // (from the original)
inline constexpr guest::Function<0x002d406c, u32(u32, u32, u32, u32)> call_002d406c;  // (from the original)

void f_002beb4c(gptr<Object_002beb4c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r3_1 = arg0->word_17be08 + 1u;
    arg0->word_17be08 = r3_1;
    call_002d406c(r1, r2, r3, r3_1);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    call_002bea50(r0, r1, r2_1, r3_2);
    return;
}

}  // namespace d_002beb4c
GUEST_EXPORT(0x002beb4c, d_002beb4c::f_002beb4c);

// f_002beb90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002beb90 {

struct __attribute__((packed)) Local_002beb90_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Local_002beb90_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_1, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_002beb90_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Local_002beb90_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_2, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_002beb90_ea_2, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x002be798, u32(u32, u32, u32, u32)> call_002be798;  // (from the original)
inline constexpr guest::Function<0x0071fd0c, u32(u32, u32, u32, u32)> call_0071fd0c;  // (from the original)

u32 f_002beb90(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_002beb90_ea_1> ea_1 = gptr<Local_002beb90_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r10;
    ea_1->word_20 = r11;
    ea_1->word_24 = r14;
    r7 = 0u;
    r6 = r0;
    r10 = r1;
    r11 = r2;
    r8 = r7;
    r9 = r7;
    r4 = r7;
    do {
        u32 r0_2 = call_002be798(r6 + (r4 * 0xfbbu << 7) + 0x2588u, frame.at(0).addr(), r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_2bec00;
        }
        if (r7 != 0) {
            u32 r0_3 = call_0071fd0c(r0_2, r7, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_3 == 0) {
                goto L_2bec00;
            }
        }
        r9 = *frame.at<u32>(0);
        r7 = r0_2;
        r8 = r4;
L_2bec00:;
        r4 += 1u;
        guest::preempt();
    } while (r4 < 3u);
    if (r10 != 0) {
        *gptr<u8>(r10) = u8(r8);
    }
    if (r11 != 0) {
        *gptr<u32>(r11) = r9;
    }
    gptr<Local_002beb90_ea_2> ea_2 = gptr<Local_002beb90_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_4;
    u32 r5_1 = ea_2->word_8;
    u32 r6_1 = ea_2->word_c;
    u32 r7_1 = ea_2->word_10;
    u32 r8_1 = ea_2->word_14;
    u32 r9_1 = ea_2->word_18;
    u32 r10_1 = ea_2->word_1c;
    u32 r11_1 = ea_2->word_20;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return r7;
}

}  // namespace d_002beb90
GUEST_EXPORT(0x002beb90, d_002beb90::f_002beb90);

// f_002becec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002becec {

inline constexpr guest::Function<0x002be89c, u32(u32, u32, u32, u32)> call_002be89c;  // (from the original)

u32 f_002becec(u32 r0) {
    u32 r0_2 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        u32 r0_1 = r5 + (r4 * 0xfbbu << 7) + 0x2588u;  // (from the original)
        r0_2 = call_002be89c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 += 1u;
        guest::preempt();
    } while (r4 < 3u);
    return r0_2;
}

}  // namespace d_002becec
GUEST_EXPORT_FRAMED(0x002becec, d_002becec::f_002becec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002bed58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bed58 {

inline constexpr guest::Function<0x002be8f0, u32(u32, u32, u32, u32)> call_002be8f0;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32)> call_003052f0;  // (from the original)

void f_002bed58(u32 r0) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        call_002be8f0(r5 + (r4 * 0xfbbu << 7) + 0x2588u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (r4 < 3u);
    r4 = 0u;
    u32 r7 = r4;
    do {
        u32 r6_1 = r5 + (r4 + (r4 << 1) << 4) + 4u;
        call_003052f0(r6_1);
        r4 += 1u;
        *gptr<u16>(r6_1 + 0x2eu) = u16(r7);  // (from the original)
        guest::preempt();
    } while (r4 < 0xc8u);  // (from the original)
    *gptr<u32>(0x17be0cu + r5) = r7;  // (from the original)
    *gptr<u32>(r5 - 0xffe841f8u) = r7;  // (from the original)
    return;
}

}  // namespace d_002bed58
GUEST_EXPORT_FRAMED(0x002bed58, d_002bed58::f_002bed58, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002bee04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bee04 {

inline constexpr guest::Function<0x002be93c, u32(u32, u32, u32, u32)> call_002be93c;  // (from the original)

u32 f_002bee04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = r0;
    u32 r8 = r1;
    u32 r6 = r2;
    u32 r7 = r3;
    u32 r4 = 0u;
    do {
        u32 r0_2 = call_002be93c(r5 + (r4 * 0xfbbu << 7) + 0x2588u, r8, r7, r3);  // (from the original)
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            if (r6 != 0) {
                *gptr<u8>(r6) = u8(r4);
            }
            return r0_2;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 3u);
    return 0u;
}

}  // namespace d_002bee04
GUEST_EXPORT_FRAMED(0x002bee04, d_002bee04::f_002bee04, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002bee6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bee6c {

struct __attribute__((packed)) Object_002bee6c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002bee6c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002be8f0, u32(u32, u32, u32, u32)> call_002be8f0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)

u32 f_002bee6c(gptr<Object_002bee6c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r7 = 0u;
    arg0->word_0 = r7;
    u32 r0_2 = call_00301d0c(r0 + 4u, 0x24a588u, 0x30u, 0xc8u);  // (from the original)
    u32 r0_4 = call_00301d0c(r0_2 + 0x2584u, 0x2be9c0u, 0x7dd80u, 3u);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r5 = r0_4 - 0x2588u;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r1_1 = r4 * 0xfbbu;  // (from the original)
        call_002be8f0(r5 + (r1_1 << 7) + 0x2588u, r1_1, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 3u);
    r4 = 0u;
    do {
        u32 r1_2 = r4 + (r4 << 1);
        u32 r6_1 = r5 + (r1_2 << 4) + 4u;
        call_003052f0(r6_1, r1_2, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        *gptr<u16>(r6_1 + 0x2eu) = u16(r7);  // (from the original)
        guest::preempt();
    } while (r4 < 0xc8u);  // (from the original)
    *gptr<u32>(0x17be0cu + r5) = r7;  // (from the original)
    *gptr<u32>(r5 - 0xffe841f8u) = r7;  // (from the original)
    guest::cpu()->r[1] = 0xffe841f8u;  // (from the original)
    return r5;
}

}  // namespace d_002bee6c
GUEST_EXPORT_FRAMED(0x002bee6c, d_002bee6c::f_002bee6c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002bef2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bef2c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_002bef2c(u32 r0) {
    call_002f76ac(r0 + 0x2588u, 0x2be9d8u, 0x7dd80u, 3u);  // (from the original)
    return r0;
}

}  // namespace d_002bef2c
GUEST_EXPORT_FRAMED(0x002bef2c, d_002bef2c::f_002bef2c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002bf2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bf2c4 {

struct __attribute__((packed)) Object_002bf2c4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x9f2];  // (not used here)
    u16 half_a02;
};
GUEST_OFFSET(Object_002bf2c4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002bf2c4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002bf2c4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002bf2c4_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002bf2c4_1, half_a02, 0xa02);  // (from the original)

struct __attribute__((packed)) Local_002bf2c4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002bf2c4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002bf2c4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002bf2c4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002bf2c4_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_002bf2c4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002bf2c4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002bf2c4_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002bf2c4_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002bf2c4_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_002bf2c4_ea_45 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002bf2c4_ea_45, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002bf2c4_ea_45, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002bf2c4_ea_45, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002bf2c4_ea_45, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

void f_002bf2c4(u32 r0, gptr<Object_002bf2c4_1> arg1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return;
    }
    gptr<Local_002bf2c4_ea_1> ea_1 = gptr<Local_002bf2c4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    u32 r2_1 = arg1->word_4;
    u32 r3_1 = arg1->word_8;
    u32 r12_1 = arg1->word_c;
    gptr<Local_002bf2c4_ea_2> ea_2 = gptr<Local_002bf2c4_ea_2>(r0 + (r2 << 4) + 8u);
    ea_2->word_0 = arg1->word_0;
    ea_2->word_4 = r2_1;
    ea_2->word_8 = r3_1;
    ea_2->word_c = r12_1;
    u32 r0_1 = (r2 << 6) - r2;
    call_002fbb30(r0 + (r0_1 + (r0_1 << 2) << 3) + 0x48u, r1 + 0x10u, 0x9d8u, r3_1);  // (from the original)
    u32 r2_2 = *gptr<u32>(r1 + 0xa28u);  // (from the original)
    u32 r0_3 = r0 + (r2 << 2);
    *gptr<u32>(0x28a4u + r0_3) = r2_2;  // (from the original)
    u32 r2_3 = *gptr<u32>(r1 + 0xa2cu);  // (from the original)
    u32 r1_2 = 0x28a4u | u32(s32(0x28a4u) >> 9);  // (from the original)
    *gptr<u32>(r1_2 + r0_3) = r2_3;
    u32 r2_4 = *gptr<u32>(r1 + 0xa30u);  // (from the original)
    u32 r1_3 = r1_2 + 0x10u;  // (from the original)
    *gptr<u32>(r1_3 + r0_3) = r2_4;
    *gptr<u32>((r1_3 | u32(s32(r1_3) >> 9)) + r0_3) = *gptr<u32>(r1 + 0xa34u);  // (from the original)
    *gptr<u32>(r0_3 + 0x28e4u) = *gptr<u32>(r1 + 0xa38u);  // (from the original)
    u32 r1_5 = *gptr<u32>(r1 + 0x9e8u);  // (from the original)
    u32 r0_4 = r2 + (r2 << 3) + r0 + 0x2700u;  // (from the original)
    *gptr<u32>(r0_4 + 0xa8u) = r1_5;  // (from the original)
    *gptr<u32>(r0_4 + 0xacu) = *gptr<u32>(r1 + 0x9ecu);  // (from the original)
    *gptr<u8>(r0_4 + 0xb0u) = u8(u32(*gptr<u8>(r1 + 0x9f0u)));  // (from the original)
    u32 r0_5 = r2 + (r2 << 3);
    u32 r3_2 = *gptr<u32>(r1 + 0x9f2u);  // (from the original)
    u32 r0_6 = r0 + (r0_5 + (r0_5 << 1) << 1);
    u32 r1_7 = r0_6 + 0x2700u;  // (from the original)
    *gptr<u32>(r1_7 + 0xccu) = r3_2;  // (from the original)
    u32 r3_3 = *gptr<u32>(r1 + 0x9f6u);  // (from the original)
    u32 r0_7 = r0_6 + 0x27f0u;  // (from the original)
    *gptr<u32>(r1_7 + 0xd0u) = r3_3;  // (from the original)
    *gptr<u32>(r1_7 + 0xd4u) = *gptr<u32>(r1 + 0x9fau);  // (from the original)
    *gptr<u32>(r1_7 + 0xd8u) = *gptr<u32>(r1 + 0x9feu);  // (from the original)
    *gptr<u16>(r1_7 + 0xdcu) = u16(u32(arg1->half_a02));  // (from the original)
    u32 r3_6 = *gptr<u32>(r1 + 0xa04u);  // (from the original)
    u32 r2_6 = r1 + 0xa00u;  // (from the original)
    *gptr<u32>(r1_7 + 0xdeu) = r3_6;  // (from the original)
    *gptr<u32>(r1_7 + 0xe2u) = *gptr<u32>(r1 + 0xa08u);  // (from the original)
    *gptr<u32>(r1_7 + 0xe6u) = *gptr<u32>(r1 + 0xa0cu);  // (from the original)
    *gptr<u32>(r1_7 + 0xeau) = *gptr<u32>(r1 + 0xa10u);  // (from the original)
    u32 r3_10 = *gptr<u16>(r2_6 + 0x14u);  // (from the original)
    *gptr<u16>(r1_7 + 0xeeu) = u16(r3_10);  // (from the original)
    *gptr<u32>(r0_7) = *gptr<u32>(r1 + 0xa16u);  // (from the original)
    *gptr<u32>(r0_7 + 4u) = *gptr<u32>(r1 + 0xa1au);  // (from the original)
    *gptr<u32>(r0_7 + 8u) = *gptr<u32>(r1 + 0xa1eu);  // (from the original)
    *gptr<u32>(r0_7 + 0xcu) = *gptr<u32>(r2_6 + 0x22u);  // (from the original)
    u32 r1_12 = *gptr<u16>(r2_6 + 0x26u);  // (from the original)
    *gptr<u16>(r0_7 + 0x10u) = u16(r1_12);  // (from the original)
    gptr<Local_002bf2c4_ea_45> ea_45 = gptr<Local_002bf2c4_ea_45>(frame.at(0).addr());
    u32 r4_1 = ea_45->word_0;
    u32 r5_1 = ea_45->word_4;
    u32 r6_1 = ea_45->word_8;
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return;
}

}  // namespace d_002bf2c4
GUEST_EXPORT(0x002bf2c4, d_002bf2c4::f_002bf2c4);

// f_002bf468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bf468 {

struct __attribute__((packed)) Object_002bf468_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
};
GUEST_OFFSET(Object_002bf468_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_44, 0x44);  // (from the original)

struct __attribute__((packed)) Local_002bf468_r0_2 {
    u8 unknown_0[0x3a8];  // (not used here)
    u32 word_3a8;
    u32 word_3ac;
    u32 word_3b0;
    u32 word_3b4;
    u32 word_3b8;
    u32 word_3bc;
    u32 word_3c0;
    u32 word_3c4;
    u32 word_3c8;
};
GUEST_OFFSET(Local_002bf468_r0_2, word_3a8, 0x3a8);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_2, word_3ac, 0x3ac);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_2, word_3b0, 0x3b0);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_2, word_3b4, 0x3b4);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_2, word_3b8, 0x3b8);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_2, word_3bc, 0x3bc);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_2, word_3c0, 0x3c0);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_2, word_3c4, 0x3c4);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_2, word_3c8, 0x3c8);  // (from the original)

struct __attribute__((packed)) Local_002bf468_r0_4 {
    u8 unknown_0[0xa4];  // (not used here)
    u32 word_a4;
    u32 word_a8;
    u32 word_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
    u32 word_d8;
    u32 word_dc;
    u32 word_e0;
    u32 word_e4;
    u32 word_e8;
    u32 word_ec;
    u32 word_f0;
};
GUEST_OFFSET(Local_002bf468_r0_4, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_ac, 0xac);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_b4, 0xb4);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_d4, 0xd4);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_d8, 0xd8);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_dc, 0xdc);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_e0, 0xe0);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_e4, 0xe4);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_e8, 0xe8);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_ec, 0xec);  // (from the original)
GUEST_OFFSET(Local_002bf468_r0_4, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> call_0047ea68;  // (from the original)

void f_002bf468(gptr<Object_002bf468_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_4 = 4;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    arg0->word_30 = 0;
    arg0->word_34 = 0;
    arg0->word_38 = 0;
    arg0->word_3c = 0;
    arg0->word_40 = 0;
    arg0->word_44 = 0;
    call_002f825c(r0 + 0x48u, 0x2760u);  // (from the original)
    gptr<Local_002bf468_r0_2> r0_2 = gptr<Local_002bf468_r0_2>(r0 + 0x2400u);  // (from the original)
    r0_2->word_3a8 = 0;
    r0_2->word_3ac = 0;
    r0_2->word_3b0 = 0;
    r0_2->word_3b4 = 0;
    r0_2->word_3b8 = 0;
    r0_2->word_3bc = 0;
    r0_2->word_3c0 = 0;
    r0_2->word_3c4 = 0;
    r0_2->word_3c8 = 0;
    call_002f825c(r0 + 0x27ccu, 0xd8u);  // (from the original)
    gptr<Local_002bf468_r0_4> r0_4 = gptr<Local_002bf468_r0_4>(r0 + 0x2800u);  // (from the original)
    r0_4->word_a4 = 0;
    r0_4->word_a8 = 0;
    r0_4->word_ac = 0;
    r0_4->word_b0 = 0;
    r0_4->word_b4 = 0;
    r0_4->word_b8 = 0;
    r0_4->word_bc = 0;
    r0_4->word_c0 = 0;
    r0_4->word_c4 = 0;
    r0_4->word_c8 = 0;
    r0_4->word_cc = 0;
    r0_4->word_d0 = 0;
    r0_4->word_d4 = 0;
    r0_4->word_d8 = 0;
    r0_4->word_dc = 0;
    r0_4->word_e0 = 0;
    r0_4->word_e4 = 0;
    r0_4->word_e8 = 0;
    r0_4->word_ec = 0;
    r0_4->word_f0 = 0;
    u32 r0_6 = call_0047ea68(r0 + 4u, 0x28f0u, 0u);  // (from the original)
    arg0->word_0 = r0_6;
    return;
}

}  // namespace d_002bf468
GUEST_EXPORT_FRAMED(0x002bf468, d_002bf468::f_002bf468, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002bf574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bf574 {

struct __attribute__((packed)) Local_002bf574_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002bf574_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002bf574_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002bf574_r0_4 {
    u8 unknown_0[0x3a8];  // (not used here)
    u32 word_3a8;
    u32 word_3ac;
    u32 word_3b0;
    u32 word_3b4;
    u32 word_3b8;
    u32 word_3bc;
    u32 word_3c0;
    u32 word_3c4;
    u32 word_3c8;
};
GUEST_OFFSET(Local_002bf574_r0_4, word_3a8, 0x3a8);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_4, word_3ac, 0x3ac);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_4, word_3b0, 0x3b0);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_4, word_3b4, 0x3b4);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_4, word_3b8, 0x3b8);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_4, word_3bc, 0x3bc);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_4, word_3c0, 0x3c0);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_4, word_3c4, 0x3c4);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_4, word_3c8, 0x3c8);  // (from the original)

struct __attribute__((packed)) Local_002bf574_r0_6 {
    u8 unknown_0[0xa4];  // (not used here)
    u32 word_a4;
    u32 word_a8;
    u32 word_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
    u32 word_d8;
    u32 word_dc;
    u32 word_e0;
    u32 word_e4;
    u32 word_e8;
    u32 word_ec;
    u32 word_f0;
};
GUEST_OFFSET(Local_002bf574_r0_6, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_ac, 0xac);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_b4, 0xb4);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_d4, 0xd4);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_d8, 0xd8);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_dc, 0xdc);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_e0, 0xe0);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_e4, 0xe4);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_e8, 0xe8);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_ec, 0xec);  // (from the original)
GUEST_OFFSET(Local_002bf574_r0_6, word_f0, 0xf0);  // (from the original)

struct __attribute__((packed)) Local_002bf574_r4_1 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
};
GUEST_OFFSET(Local_002bf574_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Local_002bf574_r4_1, word_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32)> call_0047ea68;  // (from the original)

u32 f_002bf574(u32 r0) {
    u32 r0_2 = call_00301d0c(r0 + 8u, 0x2bf040u, 0x10u, 4u);  // (from the original)
    gptr<Local_002bf574_r4_1> r4_1 = gptr<Local_002bf574_r4_1>(r0_2 - 8u);
    gptr<Local_002bf574_ea_1> ea_1 = gptr<Local_002bf574_ea_1>(r4_1.addr() + 4u);
    ea_1->word_0 = 4;
    ea_1->word_4 = 0;
    r4_1->word_c = 0;
    r4_1->word_10 = 0;
    r4_1->word_14 = 0;
    r4_1->word_18 = 0;
    r4_1->word_1c = 0;
    r4_1->word_20 = 0;
    r4_1->word_24 = 0;
    r4_1->word_28 = 0;
    r4_1->word_2c = 0;
    r4_1->word_30 = 0;
    r4_1->word_34 = 0;
    r4_1->word_38 = 0;
    r4_1->word_3c = 0;
    r4_1->word_40 = 0;
    r4_1->word_44 = 0;
    call_002f825c(r4_1.addr() + 0x48u, 0x2760u);  // (from the original)
    gptr<Local_002bf574_r0_4> r0_4 = gptr<Local_002bf574_r0_4>(r4_1.addr() + 0x2400u);  // (from the original)
    r0_4->word_3a8 = 0;
    r0_4->word_3ac = 0;
    r0_4->word_3b0 = 0;
    r0_4->word_3b4 = 0;
    r0_4->word_3b8 = 0;
    r0_4->word_3bc = 0;
    r0_4->word_3c0 = 0;
    r0_4->word_3c4 = 0;
    r0_4->word_3c8 = 0;
    call_002f825c(r4_1.addr() + 0x27ccu, 0xd8u);  // (from the original)
    gptr<Local_002bf574_r0_6> r0_6 = gptr<Local_002bf574_r0_6>(r4_1.addr() + 0x2800u);  // (from the original)
    r0_6->word_a4 = 0;
    r0_6->word_a8 = 0;
    r0_6->word_ac = 0;
    r0_6->word_b0 = 0;
    r0_6->word_b4 = 0;
    r0_6->word_b8 = 0;
    r0_6->word_bc = 0;
    r0_6->word_c0 = 0;
    r0_6->word_c4 = 0;
    r0_6->word_c8 = 0;
    r0_6->word_cc = 0;
    r0_6->word_d0 = 0;
    r0_6->word_d4 = 0;
    r0_6->word_d8 = 0;
    r0_6->word_dc = 0;
    r0_6->word_e0 = 0;
    r0_6->word_e4 = 0;
    r0_6->word_e8 = 0;
    r0_6->word_ec = 0;
    r0_6->word_f0 = 0;
    u32 r0_8 = call_0047ea68(r4_1.addr() + 4u, 0x28f0u, 0u);  // (from the original)
    r4_1->word_0 = r0_8;
    return r4_1.addr();
}

}  // namespace d_002bf574
GUEST_EXPORT_FRAMED(0x002bf574, d_002bf574::f_002bf574, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002bfe9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bfe9c {

struct __attribute__((packed)) Local_002bfe9c_r4_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_002bfe9c_r4_1, byte_26e, 0x26e);  // (from the original)
GUEST_OFFSET(Local_002bfe9c_r4_1, byte_26f, 0x26f);  // (from the original)
GUEST_OFFSET(Local_002bfe9c_r4_1, byte_270, 0x270);  // (from the original)
GUEST_OFFSET(Local_002bfe9c_r4_1, byte_271, 0x271);  // (from the original)
GUEST_OFFSET(Local_002bfe9c_r4_1, byte_272, 0x272);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> call_00758104;  // (from the original)

void f_002bfe9c(u32 r0, u32 r1, u32 r2) {
    u32 r1_2 = 0;
    u32 r6 = r0;
    u32 r5 = r1;
    u32 r4 = 0u;
    do {
        u32 r1_1 = r4 + (r4 << 2);
        u32 r0_2 = call_00758104(r6 + (r1_1 << 7), r1_1, r2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_2 != 0) {
            if (r4 + 1u == 0) {
                return;
            }
            gptr<Local_002bfe9c_r4_1> r4_1 = gptr<Local_002bfe9c_r4_1>(r6 + (r4 + (r4 << 2) << 7));
            call_002fbb30(r4_1.addr(), r5, 0x31u);  // (from the original)
            call_002fbb30(r4_1.addr() + 0x34u, r5 + 0x34u, 0x31u);  // (from the original)
            call_002fbb30(r4_1.addr() + 0x68u, r5 + 0x68u, 0x42u);  // (from the original)
            call_002f8574(r4_1.addr() + 0xaau, r5 + 0xaau, 0x182u);  // (from the original)
            call_002fbb30(r4_1.addr() + 0x22cu, r5 + 0x22cu, 0x42u);  // (from the original)
            r4_1->byte_26e = u8(u32(*gptr<u8>(r5 + 0x26eu)));  // (from the original)
            r4_1->byte_26f = u8(u32(*gptr<u8>(r5 + 0x26fu)));  // (from the original)
            r4_1->byte_270 = u8(u32(*gptr<u8>(r5 + 0x270u)));  // (from the original)
            r4_1->byte_271 = u8(u32(*gptr<u8>(r5 + 0x271u)));  // (from the original)
            r4_1->byte_272 = u8(u32(*gptr<u8>(r5 + 0x272u)));  // (from the original)
            call_002fc8e8(r4_1.addr() + 0x274u, r5 + 0x274u);  // (from the original)
            call_00311c70(r4_1.addr() + 0x278u, r5 + 0x278u);  // (from the original)
            return;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_002bfe9c
GUEST_EXPORT_FRAMED(0x002bfe9c, d_002bfe9c::f_002bfe9c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
