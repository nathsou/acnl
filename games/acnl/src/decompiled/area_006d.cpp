// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_006d12d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d12d0 {

struct __attribute__((packed)) Object_006d12d0_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x240c];  // (not used here)
    u32 word_2438;
    u8 unknown_243c[0x394];  // (not used here)
    u32 word_27d0;
    u8 unknown_27d4[0xe0];  // (not used here)
    u32 word_28b4;
};
GUEST_OFFSET(Object_006d12d0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006d12d0_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006d12d0_0, word_2438, 0x2438);  // (from the original)
GUEST_OFFSET(Object_006d12d0_0, word_27d0, 0x27d0);  // (from the original)
GUEST_OFFSET(Object_006d12d0_0, word_28b4, 0x28b4);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_006d12d0(gptr<Object_006d12d0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 ea_1 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r4_2 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_10 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_13 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_14 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_15 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_16 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_17 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_18 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_19 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_20 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_21 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 r0_47 = 0;
    r13 = r13 - 8;
    arg0->word_28 = u32(0x8f924cu + 0x6cu);  // (from the original)
    arg0->word_0 = u32(0x8f924cu);  // (from the original)
    r4_1 = r0 + 0x27d0u;  // (from the original)
    arg0->word_2438 = u32(0x8ee228u);  // (from the original)
    r0_1 = r0 + 0x28e8u;  // (from the original)
    arg0->word_27d0 = u32(0x8ef284u);  // (from the original)
    arg0->word_28b4 = u32(0x8ef284u + 0x44u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_1, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f770c(r4_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 - 0x398u) = u32(0x8f18f4u);  // (from the original)
    r0_3 = r0_2 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00567ef0(r0_3, 0x8f18f4u, r2_2, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_005bf744(r0_5, r1_2, r2_3, r3_3);
    ea_1 = r0_6 + 0xffffe73cu;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8f978cu);  // (from the original)
    r0_7 = ea_1 + 0xe40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_7, 0x2b6ef8u, 0xe0u, 0xcu);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = ea_1 + 0xd5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_002f7710(r0_8, r1_3, r2_4, r3_4);
    r4_2 = r0_9 - 0xd5cu;  // (from the original)
    r0_10 = r0_9 - 0x930u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_10, 0x6eed5cu, 0xc4u, 0xcu);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r4_2 + 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0056988c(r0_11, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_0056988c(r0_13, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_005bf744(r0_15, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_00567ef0(r0_17, r1_7, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    *gptr<u32>(r0_18 - 0xb50u) = u32(0x8f8ee4u);  // (from the original)
    r0_19 = r0_18 - 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_005e3194(r0_19, 0x8f8ee4u, r2_9, r3_9);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_005e3194(r0_21, r1_8, r2_10, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_23 = r0_22 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_005e3194(r0_23, r1_9, r2_11, r3_11);
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_005e3194(r0_25, r1_10, r2_12, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_005e3194(r0_27, r1_11, r2_13, r3_13);
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_30 = call_005e3194(r0_29, r1_12, r2_14, r3_14);
    r1_13 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_32 = call_005e3194(r0_31, r1_13, r2_15, r3_15);
    r1_14 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_33 = r0_32 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_34 = call_005e3194(r0_33, r1_14, r2_16, r3_16);
    r1_15 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_35 = r0_34 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_36 = call_005e3194(r0_35, r1_15, r2_17, r3_17);
    r1_16 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_37 = r0_36 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_38 = call_0056988c(r0_37, r1_16, r2_18, r3_18);
    r1_17 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_39 = r0_38 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_40 = call_0056988c(r0_39, r1_17, r2_19, r3_19);
    r1_18 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_41 = r0_40 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_42 = call_0056988c(r0_41, r1_18, r2_20, r3_20);
    r1_19 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_43 = r0_42 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_44 = call_005bf744(r0_43, r1_19, r2_21, r3_21);
    r1_20 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_45 = r0_44 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_46 = call_00567ef0(r0_45, r1_20, r2_22, r3_22);
    r1_21 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0_47 = r0_46 - 0x70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_47, r1_21, r2_23, r3_23);
}

}  // namespace d_006d12d0
GUEST_EXPORT(0x006d12d0, d_006d12d0::f_006d12d0);

// f_006d1bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d1bc8 {

inline guest::global<u32, 0x0014fe00> global_0014fe00;  // (from the original)
inline guest::global<u32, 0x0094fc2c> global_0094fc2c;  // (from the original)

u32 f_006d1bc8(u32 r0) {
    u32 r0_1 = 0;
    goto L_6d1bc8;
L_6d1bc8:;
    if (u32(*gptr<u8>(r0 + 0x40u)) != 2u) {  // (from the original)
        return 1u;
    }
    r0_1 = *global_0094fc2c;
    if (r0_1 == 0) {
        return r0_1;
    }
    return guest::call_address<u32>(*global_0014fe00, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d1bc8
GUEST_EXPORT(0x006d1bc8, d_006d1bc8::f_006d1bc8);

// f_006d1ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d1ce4 {

inline guest::global<u32, 0x0094fd3c> global_0094fd3c;  // (from the original)
inline constexpr guest::Function<0x006d40d4, u32(u32, u32, u32, u32)> call_006d40d4;  // (from the original)

u32 f_006d1ce4() {
    u32 r0_1 = 0;
    r0_1 = *global_0094fd3c;
    return call_006d40d4(r0_1, 8u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d1ce4
GUEST_EXPORT(0x006d1ce4, d_006d1ce4::f_006d1ce4);

// f_006d1cf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d1cf8 {

inline constexpr guest::Function<0x00138920, u32(u32, u32, u32, u32)> call_00138920;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)

u32 f_006d1cf8(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00138920(0x98c4fcu, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    call_0013f134(0x98c4fcu, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = u32(*gptr<u8>(0x94fd0cu + 2u));  // (from the original)
    if (r1_2 == 3u) {
        r1_2 = 1u;
        *gptr<u8>(0x94fd0cu + 2u) = u8(r1_2);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0x94fd0cu;  // (from the original)
}

}  // namespace d_006d1cf8
GUEST_EXPORT(0x006d1cf8, d_006d1cf8::f_006d1cf8);

// f_006d2528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2528 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)

u32 f_006d2528(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    res_1 = r0 - 0x14u;  // (from the original)
    *gptr<u32>(0x94fd0cu + 0x44u) = u32(r0);  // (from the original)
    if (res_1 >> 0x1f == ((r0 ^ 0x14u) & (r0 ^ res_1)) >> 0x1f) {  // (from the original)
        *gptr<u8>(0x94fd0cu + 1u) = u8(0u);  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r4_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r1_1 = *gptr<u32>(0x94fd0cu + 0x44u);  // (from the original)
    r0_2 = r0_1 + 0x6bd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00724424(r0_2, r1_1, 0u, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc934(r4_1, r0_3, r2_1, r3_2);
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(0x94fd0cu + 1u) = u8(1u);  // (from the original)
    r0_4 = r13;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_006d2528
GUEST_EXPORT(0x006d2528, d_006d2528::f_006d2528);

// f_006d2584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2584 {

inline guest::global<u32, 0x0094fd58> global_0094fd58;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)

u32 f_006d2584(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    guest::cpu()->r[13] -= 8u;
    if ((*global_0094fd58 & 0x400u) != 0) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = call_003170f8(5u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_2 = call_003170f8(6u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r0_3 = call_003170f8(0u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    r0_4 = call_003170f8(3u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    r0_5 = call_003170f8(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 1u;
    }
    r0_6 = call_003170f8(9u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return 1u;
    }
    r0_7 = call_003170f8(0xau, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_7;
        return 1u;
    }
    r0_8 = call_003170f8(0xbu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_8;
        return 1u;
    }
    r0_9 = call_003170f8(0xcu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_9;
        return r0_9;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_9;
    return 1u;
}

}  // namespace d_006d2584
GUEST_EXPORT(0x006d2584, d_006d2584::f_006d2584);

// f_006d2750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2750 {

inline guest::global<u32, 0x0098c508> global_0098c508;  // (from the original)

u32 f_006d2750() {
    *global_0098c508 = u32(0x248u);  // (from the original)
    *gptr<u32>(0x98c508u + 4u) = u32(0x248u);  // (from the original)
    *gptr<u32>(0x98c508u + 8u) = u32(0x248u);  // (from the original)
    guest::cpu()->r[1] = 0x248u;  // (from the original)
    return 0x98c508u;  // (from the original)
}

}  // namespace d_006d2750
GUEST_EXPORT(0x006d2750, d_006d2750::f_006d2750);

// f_006d276c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d276c {

inline guest::global<u32, 0x0094fd38> global_0094fd38;  // (from the original)

u32 f_006d276c() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(*global_0094fd38) >> 0x10);  // (from the original)
    return r0_1;
}

}  // namespace d_006d276c
GUEST_EXPORT(0x006d276c, d_006d276c::f_006d276c);

// f_006d2800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2800 {

inline guest::global<u32, 0x0098c500> global_0098c500;  // (from the original)
inline constexpr guest::Function<0x00138920, u32(u32, u32, u32, u32)> call_00138920;  // (from the original)
inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32, u32, u32)> call_0058c5f0;  // (from the original)

u32 f_006d2800(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00138920(0x98c4fcu, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    call_0013f000(0x98c4fcu, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_2 = *global_0098c500;
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    r0_3 = u32(*gptr<u8>(0x94fd0cu + 4u));  // (from the original)
    if (r0_3 == 0) {
        r0_4 = call_00584134(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_5 = call_0058c5f0(r0_4, 0x21u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r0_6 = call_00584134(r0_5, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_7 = call_0058c5f0(r0_6, 0x1fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_4 = guest::cpu()->r[1];
        r0_8 = call_00584134(r0_7, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_0058c5f0(r0_8, 0x1eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
    }
    r0_9 = *gptr<u32>(0x94fd0cu + 0x30u);  // (from the original)
    if (r0_9 != 0) {
        r1_2 = 0u;
        *gptr<u8>(r0_9 + 0x208u) = u8(r1_2);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_9;
}

}  // namespace d_006d2800
GUEST_EXPORT(0x006d2800, d_006d2800::f_006d2800);

// f_006d2e34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2e34 {

struct __attribute__((packed)) Object_006d2e34_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006d2e34_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006d2e34_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006d2e34_0, word_8, 0x8);  // (from the original)


void f_006d2e34(gptr<Object_006d2e34_0> arg0) {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    r2_1 = 0x98c34cu + 0x208u;  // (from the original)
    r1_1 = *gptr<u32>(0x98c34cu + 0x210u);  // (from the original)
    r2_2 = *gptr<u32>(r2_1);
    r3_1 = *gptr<u32>(r2_1 + 4);
    arg0->word_8 = u32(r1_1);
    arg0->word_0 = u32(r2_2);
    arg0->word_4 = u32(r3_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_006d2e34
GUEST_EXPORT(0x006d2e34, d_006d2e34::f_006d2e34);

// f_006d2e98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2e98 {

inline guest::global<u32, 0x0098c508> global_0098c508;  // (from the original)

u32 f_006d2e98() {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = *global_0098c508;
    r0_1 = 1u;
    if (r1_1 == 0x248u) {  // (from the original)
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006d2e98
GUEST_EXPORT(0x006d2e98, d_006d2e98::f_006d2e98);

// f_006d2f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2f24 {

inline guest::global<u8, 0x0094fd2b> global_0094fd2b;  // (from the original)
inline constexpr guest::Function<0x00195488, u32(u32, u32, u32, u32)> call_00195488;  // (from the original)
inline constexpr guest::Function<0x006d1ffc, u32(u32, u32, u32, u32)> call_006d1ffc;  // (from the original)

u32 f_006d2f24(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_006d1ffc(0x7bu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        *global_0094fd2b = u8(2u);
        call_00195488(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006d2f24
GUEST_EXPORT(0x006d2f24, d_006d2f24::f_006d2f24);

// f_006d3020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d3020 {

inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006bb230, u32(u32, u32, u32, u32)> call_006bb230;  // (from the original)
inline constexpr guest::Function<0x006bb76c, u32(u32, u32, u32, u32)> call_006bb76c;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)

u32 f_006d3020(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0x6bd0u;  // (from the original)
    r1_1 = *gptr<u32>(0x94fd0cu + 0x44u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00724424(r4_1, r1_1, 0u, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_3, r0_2, r2_1, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_006bb76c(r0_4, r1_2, r2_2, r3_3);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_6d3098;
    }
    r0_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_006bb230(r0_6, r0_5, r2_3, r3_4);
    *gptr<u32>(r13) = u32(1u);
    r1_3 = *gptr<u32>(0x94fd0cu + 0x44u);  // (from the original)
    r2_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002bf9cc(r4_1, r1_3, r2_4, 0u);
    r1 = guest::cpu()->r[1];
    r0_7 = r13 + 4u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_6d3098:;
    r1_4 = *gptr<u32>(0x94fd0cu + 0x44u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    call_002bf9cc(r4_1, r1_4, 0x95bfdcu, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0_7 = r13 + 4u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_006d3020
GUEST_EXPORT(0x006d3020, d_006d3020::f_006d3020);

// f_006d30c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d30c4 {

struct __attribute__((packed)) Object_006d30c4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006d30c4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006d30c4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006d30c4_0, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0098c554> global_0098c554;  // (from the original)

u32 f_006d30c4(gptr<Object_006d30c4_0> arg0) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    r1_1 = arg0->word_0;
    r2_1 = arg0->word_4;
    r3_1 = arg0->word_8;
    *global_0098c554 = u32(r1_1);
    *gptr<u32>(0x98c554u + 4) = u32(r2_1);  // (from the original)
    *gptr<u32>(0x98c554u + 8) = u32(r3_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0x98c554u;  // (from the original)
}

}  // namespace d_006d30c4
GUEST_EXPORT(0x006d30c4, d_006d30c4::f_006d30c4);

// f_006d3340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d3340 {

inline guest::global<u16, 0x0094fd34> global_0094fd34;  // (from the original)

u32 f_006d3340() {
    u32 sco = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 cf = guest::cpu()->cf;
    u32 b_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 4u;
    r0 = 0u;
    r1 = r0;
    r3 = u32(*global_0094fd34);
    r2 = 0x10u;  // (from the original)
    r12 = 1u;
    do {
L_6d335c:;
        sco = cf;
        b_1 = lsl_rc(r12, r1 & 0xff, &sco);  // (from the original)
        if ((r3 & b_1) != 0) {
            r0 = r0 + 1u;
        }
        res_1 = r2 - 1u;
        cf = r2 >= 1u;
        r2 = res_1;
        r1 = r1 + 1u;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006d3340
GUEST_EXPORT(0x006d3340, d_006d3340::f_006d3340);

// f_006d337c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d337c {

inline guest::global<u32, 0x0094fd38> global_0094fd38;  // (from the original)

u32 f_006d337c() {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    r0_1 = *global_0094fd38;
    res_1 = r0_1 << 0x10 >> 0x10;  // (from the original)
    if (res_1 == 0) {
        r0_2 = 1u;
    } else {
        r0_2 = uxth(r0_1);
    }
    guest::cpu()->r[1] = res_1;
    return r0_2;
}

}  // namespace d_006d337c
GUEST_EXPORT(0x006d337c, d_006d337c::f_006d337c);

// f_006d3738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d3738 {

inline guest::global<u32, 0x006d3788> global_006d3788;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x006d1ffc, u32(u32, u32, u32, u32)> call_006d1ffc;  // (from the original)

u32 f_006d3738(u32 r0, float S0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 zf_1 = 0;
    u32 r4_1 = 0;
    float S0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    *gptr<u32>(*gptr<u32>(0x94fd0cu + 0x30u) + 0x204u) = u32(r0);  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_1 = call_006d1ffc(0x47u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    zf_1 = r0_1 == 0;
    r4_1 = r0_1;
    if (zf_1) {
        r0_1 = *gptr<u32>(0x94fd0cu + 0x30u);  // (from the original)
    }
    if (zf_1) {
        *gptr<u32>(r0_1 + 0x204u) = u32(0u);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r4_1;
    }
    S0_2 = std::bit_cast<float>(*global_006d3788);
    guest::cpu()->s[0] = S0_2;
    call_0058d3b4(0x100045eu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    *gptr<u8>(0x94fd0cu + 0x15u) = u8(0u);  // (from the original)
    *gptr<u8>(0x94fd0cu + 0x16u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    return r4_1;
}

}  // namespace d_006d3738
GUEST_EXPORT(0x006d3738, d_006d3738::f_006d3738);

// f_006d37e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d37e4 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x006b6d6c, u32(u32, u32, u32, u32)> call_006b6d6c;  // (from the original)
inline constexpr guest::Function<0x006b73f4, u32(u32, u32, u32, u32)> call_006b73f4;  // (from the original)
inline constexpr guest::Function<0x0076c590, u32(u32, u32, u32, u32)> call_0076c590;  // (from the original)

u32 f_006d37e4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_0076c590(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = call_002fd068(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_1 = call_002fcb34(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0x36u) {  // (from the original)
        zf_1 = r0_1 == 0x37u;  // (from the original)
        if (!zf_1) {
            zf_1 = r0_1 == 0x38u;  // (from the original)
        }
        if (!zf_1) {
            zf_1 = r0_1 == 0x92u;  // (from the original)
        }
        if (!zf_1) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_006b73f4(r0_2, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_006b6d6c(r0_2, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d37e4
GUEST_EXPORT(0x006d37e4, d_006d37e4::f_006d37e4);

// f_006d39a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d39a8 {

inline guest::global<u32, 0x0098c500> global_0098c500;  // (from the original)

u32 f_006d39a8(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0u;
    r4 = *global_0098c500;
    if (r4 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r5;
    } else {
        r6 = 0x88735au;  // (from the original)
    }
    do {
L_6d39c4:;
        r1 = u32(*gptr<u16>(r6));
        if (!(u32(*gptr<u16>(*gptr<u32>(r4 + 0xcu) + 0xcu)) != r1)) {  // (from the original)
            r5 = 1u;
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r5;
        }
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_006d39a8
GUEST_EXPORT(0x006d39a8, d_006d39a8::f_006d39a8);

// f_006d40d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d40d4 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x0075e058, u32(u32, u32, u32, u32)> call_0075e058;  // (from the original)

u32 f_006d40d4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_005ce6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if ((r1 & 8u) == 0) {
        goto L_6d415c;
    }
    r0_3 = call_002f74c8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = call_002f74e0(0x80000u, r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        r0_5 = call_002f74c8(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_6 = call_002f74e0(0x100000u, r0_5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_6 == 0) {
            goto L_6d4150;
        }
    }
    r0_7 = *global_0095362c;
    if (r0_7 == 0) {
        goto L_6d4150;
    }
    r0_8 = r0_7 + 0x1e4u;  // (from the original)
    r0_9 = call_0075e058(r0_8, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_9 != 0) {
        goto L_6d4168;
    }
L_6d4150:;
    if (u32(*gptr<u8>(r0 + 0x208u)) != 0) {  // (from the original)
        goto L_6d4168;
    }
L_6d415c:;
    res_1 = *gptr<u32>(r0 + 0x48u) & r1;  // (from the original)
    r0_2 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
L_6d4168:;
    r0_2 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_006d40d4
GUEST_EXPORT(0x006d40d4, d_006d40d4::f_006d40d4);

// f_006d4724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d4724 {

inline guest::global<u8, 0x0094fd60> global_0094fd60;  // (from the original)
inline constexpr guest::Function<0x002f86c0, u32(u32, u32, u32, u32)> call_002f86c0;  // (from the original)

u32 f_006d4724(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f86c0(r0, 0x3e8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *global_0094fd60 = u8(r0_1);
    r0_2 = call_002f86c0(r1_1, 0x64u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(0x94fd60u + 1u) = u8(r0_2);  // (from the original)
    r0_3 = call_002f86c0(r1_2, 0xau, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    *gptr<u8>(0x94fd60u + 2u) = u8(r0_3);  // (from the original)
    *gptr<u8>(0x94fd60u + 3u) = u8(r1_3);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_3;
}

}  // namespace d_006d4724
GUEST_EXPORT(0x006d4724, d_006d4724::f_006d4724);

// f_006d5364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d5364 {

struct __attribute__((packed)) Object_006d5364_0 {
    u8 unknown_0[0x548];  // (not used here)
    u32 word_548;
};
GUEST_OFFSET(Object_006d5364_0, word_548, 0x548);  // (from the original)

inline constexpr guest::Function<0x002f67ac, u32(u32, u32, u32, u32)> call_002f67ac;  // (from the original)

u32 f_006d5364(gptr<Object_006d5364_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    if (arg0->word_548 != 0) {
        r0_1 = r0 + 0x494u;  // (from the original)
        call_002f67ac(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_2 = *gptr<u32>(r0 + 0x6ccu);  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    r0_3 = r0 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0_4 = r0_3 + 0x218u;  // (from the original)
    return call_002f67ac(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d5364
GUEST_EXPORT(0x006d5364, d_006d5364::f_006d5364);

// f_006d5df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d5df4 {

struct __attribute__((packed)) Object_006d5df4_0 {
    u8 unknown_0[0x19b2];  // (not used here)
    u16 half_19b2;
};
GUEST_OFFSET(Object_006d5df4_0, half_19b2, 0x19b2);  // (from the original)

inline constexpr guest::Function<0x002dfbf0, u32(u32, u32, u32, u32)> call_002dfbf0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> call_00569544;  // (from the original)
inline constexpr guest::Function<0x0074fdd0, u32(u32, u32, u32, u32)> call_0074fdd0;  // (from the original)

u32 f_006d5df4(gptr<Object_006d5df4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r7_1 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 zf_1 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r1_8 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6_1 = r0 + 0x19b2u;  // (from the original)
    r1_1 = u32(arg0->half_19b2);
    r8_1 = lsl_r(1u, r1 & 0xff);  // (from the original)
    if ((r1_1 & r8_1) != 0) {
        r0_1 = r0 + 0x3f4u;  // (from the original)
        r0_2 = call_0074fdd0(r0_1, r1_1, r2, r3);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_6d5eb8;
        }
        r7_1 = r0 + (r1 << 2);
        r1_3 = r0 + 0x3f4u;  // (from the original)
        r2_2 = *gptr<u32>(0x1920u + r7_1);  // (from the original)
        r0_3 = r0 + 0x280u;  // (from the original)
        call_00568984(r0_3, r1_3, r2_2, 0u);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_4 = r0 + (r1 + (r1 << 5) + (r1 << 6) << 2) + 0x79cu;  // (from the original)
        call_002dfbf0(r0_4, r1_4, r2_3, r3_2);
        r0_5 = *gptr<u32>(r7_1 + 0x194cu);  // (from the original)
        *gptr<u8>(r0_5 + 0xb7u) = u8(u32(*gptr<u8>(r0_5 + 0xb7u)) & 0xfeu);  // (from the original)
        r0_6 = u32(*gptr<u16>(r6_1)) & ~uxth(r8_1);
        *gptr<u16>(r6_1) = u16(r0_6);
        if ((r0_6 & 0x400u) == 0) {  // (from the original)
            r1_5 = 1u;
        } else {
            r1_5 = 0u;
        }
        r0_7 = r0 + 0x19b0u;  // (from the original)
        zf_1 = r1_5 == 0;
        r1_6 = u32(*gptr<u16>(r0_7));
        if (zf_1) {
            r1_1 = r1_6 & ~2u;
        } else {
            r1_1 = r1_6 | 2u;
        }
        *gptr<u16>(r0_7) = u16(r1_1);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
L_6d5eb8:;
    r0_8 = r0 + 0x3f4u;  // (from the original)
    call_00569544(r0_8, r1_2, r2_1, r3_1);
    r1_7 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_9 = r0 + 0x280u;  // (from the original)
    call_00568c10(r0_9, r1_7, r2_4, r3_3);
    r1_8 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    return 0u;
}

}  // namespace d_006d5df4
GUEST_EXPORT(0x006d5df4, d_006d5df4::f_006d5df4);

// f_006d6404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d6404 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_006d6404(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r0_9 = 0;
    u32 r2_9 = 0;
    u32 r0_10 = 0;
    u32 r2_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_11 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_5 = 0;
    u32 r5_1 = 0;
    u32 r0_15 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0x73u) {  // (from the original)
        goto L_6d64c8;
    }
    r0_2 = call_002f74c8(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 == 0x74u) {  // (from the original)
        goto L_6d64c8;
    }
    r4_1 = 0u;
    r0_3 = call_002f74c8(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r0_4 = call_002f74e0(0x40000u, r0_3, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        r4_1 = 1u;
    }
    r0_5 = call_002f74c8(r0_4, r1_2, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    r0_6 = call_002f74e0(0x100000u, r0_5, r2_5, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    if (r0_6 != 0) {
        r4_1 = 1u;
    }
    r0_7 = call_002f74c8(r0_6, r1_3, r2_6, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    r0_8 = call_002f74e0(0x20000u, r0_7, r2_7, guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    if (r0_8 != 0) {
        r4_1 = 1u;
    }
    r0_9 = call_002f74c8(r0_8, r1_4, r2_8, guest::cpu()->r[3]);
    r2_9 = guest::cpu()->r[2];
    r0_10 = call_002f74e0(0x80000u, r0_9, r2_9, guest::cpu()->r[3]);  // (from the original)
    r2_10 = guest::cpu()->r[2];
    if (r0_10 != 0) {
        r4_1 = 1u;
    }
    r0_11 = r0 + 0x280u;  // (from the original)
    r0_12 = call_0056878c(r0_11, 0x853a90u, r2_10, guest::cpu()->r[3]);  // (from the original)
    r2_11 = guest::cpu()->r[2];
    *gptr<u8>(r0_12 + 0xb7u) = u8(u32(*gptr<u8>(r0_12 + 0xb7u)) & 0xfeu | r4_1);  // (from the original)
    r0_13 = r0 + 0x280u;  // (from the original)
    r0_14 = call_0056878c(r0_13, 0x853a84u, r2_11, guest::cpu()->r[3]);  // (from the original)
    r1_5 = r4_1 ^ 1u | u32(*gptr<u8>(r0_14 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_14 + 0xb7u) = u8(r1_5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    return r0_14;
L_6d64c8:;
    r5_1 = r0 + 0x19b4u;  // (from the original)
    r0_15 = u32(*gptr<u16>(r5_1)) & ~1u;
    *gptr<u16>(r5_1) = u16(r0_15);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_15;
}

}  // namespace d_006d6404
GUEST_EXPORT(0x006d6404, d_006d6404::f_006d6404);

// f_006d7354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d7354 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006d6500, u32(u32, u32, u32, u32)> call_006d6500;  // (from the original)
inline constexpr guest::Function<0x0075f020, u32(u32, u32, u32, u32)> call_0075f020;  // (from the original)

u32 f_006d7354(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    u32 r0_6 = 0;
    u32 r5_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4 = 0u;
    r10 = 1u;
    r11 = r0;
    r9 = 0x95362cu;  // (from the original)
    r8 = 0x94ddf8u;  // (from the original)
    r6 = r0 + 0x1900u;  // (from the original)
    r7 = r0 + 0x19b4u;  // (from the original)
    goto L_6d738c;
L_6d737c:;
    if (r4 == 8u) {
        goto L_6d7398;
    }
    if (r4 == 9u) {
        goto L_6d742c;
    }
L_6d738c:;
    r1 = u32(*gptr<u16>(r7));
    r0 = r1 | lsl_r(r10, r4 & 0xff);  // (from the original)
    goto L_6d74a4;
L_6d7398:;
    r5_1 = *gptr<u32>(r9) + 0x7874u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0075f020(r5_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        goto L_6d74a8;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0075f020(r5_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_002fc900(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            goto L_6d74a8;
        }
    } else {
        guest::cpu()->r[13] = r13;
        r0_4 = call_0075f020(r5_1, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            goto L_6d74a8;
        }
    }
    r0_5 = u32(s32(s8(*gptr<u8>(r6 + 0x1bu))));  // (from the original)
    zf_1 = r0_5 == 0xau;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_5 + 1u == 0;
    }
    if (!zf_1) {
        if (r0_5 != 8u) {
            r4 = 9u;
            guest::preempt();
            goto L_6d737c;
        }
    }
    *gptr<u16>(r7) = u16(u32(*gptr<u16>(r7)) | 0x100u);  // (from the original)
    goto L_6d74a8;
L_6d742c:;
    r0_6 = *gptr<u32>(r9);
    r5_2 = r0_6 + 0x7874u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_002f74c8(r0_6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_7 != 0x67u) {  // (from the original)
        goto L_6d74a8;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_0075f020(r5_2, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        goto L_6d74a8;
    }
    r0_9 = u32(*gptr<u8>(r8));
    if (r0_9 == 1u) {
        guest::cpu()->r[13] = r13;
        r0_10 = call_00305f44(r0_9, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = u32(*gptr<u8>(r8 + 2u));
        if (r0_10 == r1) {
            goto L_6d74a8;
        }
    }
    r0_11 = u32(s32(s8(*gptr<u8>(r6 + 0x1bu))));  // (from the original)
    zf_2 = r0_11 == 0xau;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_11 + 1u == 0;
    }
    if (!zf_2) {
        zf_3 = r0_11 == 5u;
        if (!zf_3) {
            zf_3 = r0_11 == 9u;
        }
        if (!zf_3) {
            r4 = 0xau;  // (from the original)
            guest::preempt();
            goto L_6d737c;
        }
    }
    r0 = u32(*gptr<u16>(r7)) | 0x200u;  // (from the original)
L_6d74a4:;
    *gptr<u16>(r7) = u16(r0);
L_6d74a8:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xbu)) {  // (from the original)
        guest::preempt();
        goto L_6d737c;
    }
    *gptr<u16>(r7) = u16(u32(*gptr<u16>(r7)) & ~0x400u);  // (from the original)
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006d6500(r11, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d7354
GUEST_EXPORT(0x006d7354, d_006d7354::f_006d7354);

// f_006d78bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d78bc {

struct __attribute__((packed)) Object_006d78bc_0 {
    u8 unknown_0[0x568];  // (not used here)
    u32 word_568;
    u8 unknown_56c[0x180];  // (not used here)
    u32 word_6ec;
};
GUEST_OFFSET(Object_006d78bc_0, word_568, 0x568);  // (from the original)
GUEST_OFFSET(Object_006d78bc_0, word_6ec, 0x6ec);  // (from the original)

inline constexpr guest::Function<0x006d6a8c, u32(u32, u32, u32, u32)> call_006d6a8c;  // (from the original)

u32 f_006d78bc(gptr<Object_006d78bc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 1u;
    r1 = 0u;
    arg0->word_568 = u32(arg0->word_568 | 8u);
    arg0->word_6ec = u32(arg0->word_6ec | 8u);
    r0 = r4 + 0x19b4u;  // (from the original)
    do {
L_6d78ec:;
        r3_1 = lsl_r(r2, r1 & 0xff);  // (from the original)
        r1 = r1 + 1u;
        res_1 = r1 - 0xbu;  // (from the original)
        r3_2 = r3_1 | u32(*gptr<u16>(r0));
        *gptr<u16>(r0) = u16(r3_2);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r1 ^ 0xbu) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
    r1_1 = uxth(r3_2) & ~0x400u;  // (from the original)
    *gptr<u16>(r0) = u16(r1_1);
    call_006d6a8c(r4, r1_1, r2, r3_2);
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x1916u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_006d78bc
GUEST_EXPORT(0x006d78bc, d_006d78bc::f_006d78bc);

// f_006d860c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d860c {

inline guest::global<u32, 0x006d8714> global_006d8714;  // (from the original)
inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x0075e650, u32(u32, u32, u32, u32)> call_0075e650;  // (from the original)
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> call_0075f0b0;  // (from the original)

u32 f_006d860c(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    float S0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r0_7 = 0;
    float S0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r0_10 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r6 = 1u;
    r0_1 = *global_0095362c + 0x7874u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_2 = call_0075f0b0(r0_1, 3u, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    zf_1 = r0_2 == 0;
    r0_3 = *global_0095362c;
    r4 = 0u;
    if (zf_1) {
        r6 = 0u;
    }
    r7 = r0_3 + 0x3594u;  // (from the original)
    r8 = r4;
L_6d864c:;
    guest::cpu()->s[0] = S0;
    r0_4 = call_0075e650(r7, r4, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0_4 == 0) {
        r4 = r4 + 1u;
        if (r4 < 0x20u) {  // (from the original)
            guest::preempt();
            goto L_6d864c;
        }
        r6 = 0u;
    }
    r4_1 = r5 + 0x1980u;  // (from the original)
    res_1 = u32(*gptr<u8>(*gptr<u32>(r4_1) + 0xb7u)) & 1u;  // (from the original)
    r0_5 = res_1;
    if (res_1 != 0) {
        r0_5 = 1u;
    }
    if (r0_5 == r6) {
        goto L_6d870c;
    }
    if (r6 != 0) {
        goto L_6d86ec;
    }
    if (u32(*gptr<u8>(r5 + 0x460u)) != 1u) {  // (from the original)
        goto L_6d86ec;
    }
    r0_6 = r5 + 0x444u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_006d8714);
    guest::cpu()->s[0] = S0_1;
    call_005697e0(r0_6, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_7 = r5 + 0x280u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_00568c10(r0_7, r1_2, r2_1, r3_1);
    S0_3 = guest::cpu()->s[0];
    r2_2 = *gptr<u32>(0x1990u + r5);  // (from the original)
    r0_8 = r5 + 0x280u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    call_00568984(r0_8, r0_6, r2_2, 0u);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u8>(0x1915u + r5) = u8(r8);  // (from the original)
    *gptr<u32>(0x1915u + 0x8fu + r5) = u32(r8);  // (from the original)
L_6d86ec:;
    r0_9 = *gptr<u32>(r4_1);
    r1_3 = u32(*gptr<u8>(r0_9 + 0xb7u)) & 0xfeu | r6;  // (from the original)
    *gptr<u8>(r0_9 + 0xb7u) = u8(r1_3);  // (from the original)
    r0_10 = r5 + 0x280u;  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_00568c10(r0_10, r1_3, r2, r3);
L_6d870c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    return r0_5;
}

}  // namespace d_006d860c
GUEST_EXPORT(0x006d860c, d_006d860c::f_006d860c);

// f_006d8d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d8d48 {

struct __attribute__((packed)) Object_006d8d48_0 {
    u8 unknown_0[0x568];  // (not used here)
    u32 word_568;
    u8 unknown_56c[0x180];  // (not used here)
    u32 word_6ec;
};
GUEST_OFFSET(Object_006d8d48_0, word_568, 0x568);  // (from the original)
GUEST_OFFSET(Object_006d8d48_0, word_6ec, 0x6ec);  // (from the original)


void f_006d8d48(gptr<Object_006d8d48_0> arg0, u32 r1) {
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    zf_1 = r1 == 0;
    r1_1 = arg0->word_568;
    r2_1 = arg0->word_6ec;
    if (zf_1) {
        r1_2 = r1_1 & ~8u;
    } else {
        r1_2 = r1_1 | 8u;
    }
    arg0->word_568 = u32(r1_2);
    if (zf_1) {
        r1_3 = r2_1 & ~8u;
    } else {
        r1_3 = r2_1 | 8u;
    }
    arg0->word_6ec = u32(r1_3);
    guest::cpu()->r[1] = r1_3;
    return;
}

}  // namespace d_006d8d48
GUEST_EXPORT(0x006d8d48, d_006d8d48::f_006d8d48);

// f_006d8f68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d8f68 {

struct __attribute__((packed)) Object_006d8f68_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_006d8f68_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006d8f68_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32, u32, u32)> call_00521ae0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_006d8f68(gptr<Object_006d8f68_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_15 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_16 = 0;
    u32 r2_17 = 0;
    u32 r3_16 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_17 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r1_18 = 0;
    u32 r2_19 = 0;
    u32 r3_18 = 0;
    u32 r0_38 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r2_1 = 0x8f9384u + 0x48u;  // (from the original)
    arg0->word_0 = u32(0x8f9384u);  // (from the original)
    arg0->word_14 = u32(r2_1);
    r0_1 = r0 + 0x1848u;  // (from the original)
    r0_2 = call_005e3194(r0_1, 0x8f9384u, r2_1, r3);  // (from the original)
    r4_1 = r0_2 - 0x1848u;  // (from the original)
    r0_3 = r0_2 - 0x10acu;  // (from the original)
    call_002f76ac(r0_3, 0x2e00e0u, 0x184u, 0xbu);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = r4_1 + 0x774u;  // (from the original)
    *gptr<u32>(r4_1 + 0x618u) = u32(0x8f5084u);  // (from the original)
    r0_5 = call_0056988c(r0_4, r1_1, r2_2, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = r0_5 - 0x28u;  // (from the original)
    r0_7 = call_0056988c(r0_6, r1_2, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_8 = r0_7 - 0x28u;  // (from the original)
    r0_9 = call_0056988c(r0_8, r1_3, r2_4, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_10 = r0_9 - 0x28u;  // (from the original)
    r0_11 = call_0056988c(r0_10, r1_4, r2_5, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0xe4u;  // (from the original)
    r0_13 = call_002f7710(r0_12, r1_5, r2_6, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    *gptr<u32>(r0_13 - 0x184u) = u32(0x8f5084u);  // (from the original)
    r0_14 = r0_13 - 0x28u;  // (from the original)
    r0_15 = call_0056988c(r0_14, r1_6, r2_7, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x28u;  // (from the original)
    r0_17 = call_0056988c(r0_16, r1_7, r2_8, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x28u;  // (from the original)
    r0_19 = call_0056988c(r0_18, r1_8, r2_9, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x28u;  // (from the original)
    r0_21 = call_0056988c(r0_20, r1_9, r2_10, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0xe4u;  // (from the original)
    r0_23 = call_002f7710(r0_22, r1_10, r2_11, r3_10);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x28u;  // (from the original)
    r0_25 = call_0056988c(r0_24, r1_11, r2_12, r3_11);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x28u;  // (from the original)
    r0_27 = call_0056988c(r0_26, r1_12, r2_13, r3_12);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x28u;  // (from the original)
    r0_29 = call_0056988c(r0_28, r1_13, r2_14, r3_13);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_30 = r0_29 - 0x28u;  // (from the original)
    r0_31 = call_0056988c(r0_30, r1_14, r2_15, r3_14);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_32 = r0_31 - 0x28u;  // (from the original)
    r0_33 = call_0056988c(r0_32, r1_15, r2_16, r3_15);
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_34 = r0_33 - 0x14cu;  // (from the original)
    r0_35 = call_005bf744(r0_34, r1_16, r2_17, r3_16);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x248u;  // (from the original)
    r0_37 = call_00567ef0(r0_36, r1_17, r2_18, r3_17);
    r1_18 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_38 = r0_37 - 0x38u;  // (from the original)
    return call_00521ae0(r0_38, r1_18, r2_19, r3_18);
}

}  // namespace d_006d8f68
GUEST_EXPORT(0x006d8f68, d_006d8f68::f_006d8f68);

// f_006d926c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d926c {

inline guest::global<u32, 0x0095063c> global_0095063c;  // (from the original)

u32 f_006d926c(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    r0_1 = *global_0095063c;
    if (r0_1 == 0) {
        return 3u;
    }
    ea_1 = r0_1 + 0x2cu;  // (from the original)
    if (u32(*gptr<u8>(ea_1)) != r1) {
        return 3u;
    }
    r0_2 = u32(*gptr<u8>(ea_1 + 1u)) & 0xfu;  // (from the original)
    zf_1 = r0_2 == 4u;
    if (!zf_1) {
        zf_1 = r0_2 == 5u;
    }
    if (!zf_1) {
        zf_1 = r0_2 == 0;
    }
    if (!zf_1) {
        return r0_2;
    }
    return 3u;
}

}  // namespace d_006d926c
GUEST_EXPORT(0x006d926c, d_006d926c::f_006d926c);

// f_006d96c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d96c0 {

inline guest::global<u32, 0x0095063c> global_0095063c;  // (from the original)
inline constexpr guest::Function<0x001f5e5c, u32(u32, u32, u32, u32)> call_001f5e5c;  // (from the original)

u32 f_006d96c0(u32 r0) {
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r3_1 = *global_0095063c;
    if (r3_1 == 0) {
        return 0u;
    }
    r2_1 = *gptr<u32>(r3_1 + (r0 << 3) + 0x34u);  // (from the original)
    if (r2_1 != 0) {
        r0_1 = r2_1 + 0x14u;  // (from the original)
        return r0_1;
    }
    r0_2 = *gptr<u32>(r3_1 + (r0 << 2) + 0x1cu);  // (from the original)
    return call_001f5e5c(r0_2, guest::cpu()->r[1], r2_1, r3_1);
}

}  // namespace d_006d96c0
GUEST_EXPORT(0x006d96c0, d_006d96c0::f_006d96c0);

// f_006d9748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9748 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x006d9e38, u32(u32, u32, u32, u32)> call_006d9e38;  // (from the original)

u32 f_006d9748(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_002fcb34(r3, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    zf_1 = r0_1 == 0x27u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_1 == 0x28u;  // (from the original)
    }
    if (!zf_1) {
        r0_2 = 0u;
        goto L_6d978c;
    }
    call_006d9e38(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r0_2 = 1u;
L_6d978c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_006d9748
GUEST_EXPORT(0x006d9748, d_006d9748::f_006d9748);

// f_006d99fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d99fc {

inline guest::global<u32, 0x0095063c> global_0095063c;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_006d99fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = *global_0095063c;
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = *gptr<u32>(r0_1 + (r0 << 2) + 0x1cu);  // (from the original)
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1 = u32(*gptr<u8>(r0_2 + 0x248u));  // (from the original)
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    *gptr<u8>(r0_2 + 0x248u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00300904(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_00305f44(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 != r0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    *gptr<u8>(r13) = u8(0u);
    *gptr<u8>(r13 + 1u) = u8(0u);
    *gptr<u8>(r13 + 2u) = u8(0u);
    r2_2 = r13;
    *gptr<u8>(r13 + 3u) = u8(0u);
    guest::cpu()->r[13] = r13;
    r0_5 = call_006249b0(0x3du, 4u, r2_2, 4u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_006d99fc
GUEST_EXPORT(0x006d99fc, d_006d99fc::f_006d99fc);

// f_006d9a78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9a78 {

struct __attribute__((packed)) Object_006d9a78_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_006d9a78_0, byte_1ac, 0x1ac);  // (from the original)

inline guest::global<u32, 0x0095063c> global_0095063c;  // (from the original)

u32 f_006d9a78(gptr<Object_006d9a78_0> arg0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    r0_1 = u32(arg0->byte_1ac);
    r1_1 = *global_0095063c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = *gptr<u32>(r1_1 + (r0_1 << 2) + 0x1cu);  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if (u32(*gptr<u8>(r0_2 + 0x248u)) == 3u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_006d9a78
GUEST_EXPORT(0x006d9a78, d_006d9a78::f_006d9a78);

// f_006d9abc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9abc {

inline guest::global<u32, 0x0095063c> global_0095063c;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006d9058, u32(u32, u32, u32, u32)> call_006d9058;  // (from the original)
inline constexpr guest::Function<0x006d9864, u32(u32, u32, u32, u32)> call_006d9864;  // (from the original)

u32 f_006d9abc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 zf_5 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *global_0095063c;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    r0_1 = call_002fcb34(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    zf_1 = r0_1 == 0x24u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_1 == 0x26u;  // (from the original)
    }
    if (zf_1) {
        goto L_6d9b48;
    }
    zf_2 = r0_1 == 0x25u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_1 == 0x98u;  // (from the original)
    }
    if (!zf_2) {
        zf_2 = r0_1 == 0x9au;  // (from the original)
    }
    if (zf_2) {
        goto L_6d9b48;
    }
    zf_3 = r0_1 == 0x27u;  // (from the original)
    if (!zf_3) {
        zf_3 = r0_1 == 0x28u;  // (from the original)
    }
    if (!zf_3) {
        zf_4 = r0_1 == 0x66u;  // (from the original)
        if (!zf_4) {
            zf_4 = r0_1 == 0x65u;  // (from the original)
        }
        if (!zf_4) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return r0_1;
        }
    }
    r0_2 = call_00300904(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    zf_5 = r0_2 == 0;
    r4_1 = *gptr<u32>(*global_0095063c + (r1 << 2) + 0x1cu);  // (from the original)
    r0_3 = r4_1 + 0x20cu;  // (from the original)
    if (zf_5) {
        goto L_6d9b68;
    }
    r0_1 = call_002fcb34(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_1 == 0x27u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    r0_4 = r4_1 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002fcb34(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
L_6d9b48:;
    r0_1 = call_006d9058(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_1 == 0x3fu) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_006d9864(r1, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
L_6d9b68:;
    r0_1 = call_002fcb34(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_1 == 0x27u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    r0_4 = r4_1 + 0x20cu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002fcb34(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d9abc
GUEST_EXPORT(0x006d9abc, d_006d9abc::f_006d9abc);

// f_006d9b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9b90 {

struct __attribute__((packed)) Object_006d9b90_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_006d9b90_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006d9b90_1, byte_1, 0x1);  // (from the original)

inline guest::global<u32, 0x0095063c> global_0095063c;  // (from the original)
inline constexpr guest::Function<0x001f6844, u32(u32, u32, u32, u32)> call_001f6844;  // (from the original)
inline constexpr guest::Function<0x006162e0, u32(u32, u32, u32, u32)> call_006162e0;  // (from the original)
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> call_006c5ef8;  // (from the original)

u32 f_006d9b90(u32 r0, gptr<Object_006d9b90_1> arg1, u32 r2_unused, u32 r3, float S0, float S1) {
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S1_1 = 0;
    u32 r0_3 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    float S0_3 = 0;
    float S1_2 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r3_2 = 0;
    float S0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r0_1 = *global_0095063c;
    if (r0_1 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r0_1 = *gptr<u32>(r0_1 + (r0 << 2) + 0x1cu);  // (from the original)
    if (r0_1 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r6_1 = (u32(arg1->byte_0) >> 2) + ((u32(arg1->byte_1) & 1u) << 6);
    r0_2 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_006162e0(r0_2, r6_1, 0u, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S1_1 = guest::cpu()->s[1];
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>((u32(*gptr<u8>(r1 + 1u)) >> 1) + ((u32(*gptr<u8>(r1 + 2u)) & 7u) << 7) << 2)))));
    r0_3 = r13 + 4u;
    S0_1 = float(std::bit_cast<u32>(std::bit_cast<float>((u32(*gptr<u8>(r1 + 2u)) >> 3) + ((u32(*gptr<u8>(r1 + 3u)) & 0x1fu) << 5) << 2)));  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_006c5ef8(r0_3, 0u, r2_1, r3_1);
    S0_2 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_2));
    r0_4 = 0x68cu + (r6_1 + (r6_1 << 2) << 2) + *gptr<u32>(*gptr<u32>(0x95063cu + 4u) + 0x14u);  // (from the original)
    r2_2 = r0_4 + 4u;
    S0_3 = std::bit_cast<float>(*gptr<u32>(r2_2));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r2_2 + 4));
    r2_3 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r0_4));  // (from the original)
    *gptr<u32>(r2_3) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r2_3 + 4) = u32(std::bit_cast<u32>(S1_2));
    r2_4 = r13 + 4u;
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    r3_2 = u32(s32(s16(*gptr<u16>(r0_4 + 0x10u))));  // (from the original)
    S0_4 = std::bit_cast<float>(*gptr<u32>(r0_4 + 0xcu));  // (from the original)
    r0_5 = *gptr<u32>(*global_0095063c + (r0 << 2) + 0x1cu);  // (from the original)
    r1_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    call_001f6844(r0_5, r1_1, r2_4, r3_2);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0_1 = r13 + 0x1cu;  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_006d9b90
GUEST_EXPORT(0x006d9b90, d_006d9b90::f_006d9b90);

// f_006d9cac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9cac {

inline guest::global<u32, 0x0095063c> global_0095063c;  // (from the original)
inline constexpr guest::Function<0x001f6844, u32(u32, u32, u32, u32)> call_001f6844;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006d9058, u32(u32, u32, u32, u32)> call_006d9058;  // (from the original)

u32 f_006d9cac(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S2_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    float S1_1 = 0;
    float S2_2 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_2 = 0;
    float S2_3 = 0;
    u32 r0_5 = 0;
    float S1_3 = 0;
    float S2_4 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    float S0_2 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    float S1_4 = 0;
    float S2_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S2_6 = 0;
    u32 r0_8 = 0;
    float S1_5 = 0;
    float S2_7 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    float S0_4 = 0;
    u32 r0_12 = 0;
    u32 r2_6 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r5_1 = r1;
    r0_1 = *global_0095063c;
    if (r0_1 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_2 = call_00305f44(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    r1 = *global_0095063c;
    r0_1 = *gptr<u32>(r1 + (r0_2 << 2) + 0x1cu);  // (from the original)
    if (r0_1 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_1;
    r0_3 = call_006d9058(r0, r1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    if (r0_3 >= 0x6bu) {  // (from the original)
        r0_3 = 0u;
    }
    S1_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 4));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r5_1 + 8));
    r0_4 = 0x68cu + (r0_3 + (r0_3 << 2) << 2);  // (from the original)
    r2_2 = *gptr<u32>(*gptr<u32>(0x95063cu + 4u) + 0x14u);  // (from the original)
    r1_1 = r13 + 4u;
    *gptr<u32>(r1_1) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r5_1))));
    *gptr<u32>(r1_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r1_1 + 8) = u32(std::bit_cast<u32>(S2_2));
    r4_1 = r2_2 + r0_4;
    r1_2 = r13 + 0x10u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r4_1));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r4_1 + 4));
    S2_3 = std::bit_cast<float>(*gptr<u32>(r4_1 + 8));
    *gptr<u32>(r1_2) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r1_2 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r1_2 + 8) = u32(std::bit_cast<u32>(S2_3));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_3;
    r0_5 = call_00305f44(r0_4, r1_2, r2_2, r3_2);
    S1_3 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    r2_3 = r13 + 4u;
    r0_6 = *gptr<u32>(*global_0095063c + (r0_5 << 2) + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    r3_3 = u32(s32(s16(*gptr<u16>(r4_1 + 0x10u))));  // (from the original)
    S0_2 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0xcu));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_4;
    r0_7 = call_001f6844(r0_6, r0, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_5;
    r0_1 = call_00300904(r0_7, r1_3, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    if (r0_1 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    *gptr<u8>(r13) = u8(0u);
    *gptr<u8>(r13 + 1u) = u8(0u);
    *gptr<u8>(r13 + 2u) = u8(0u);
    *gptr<u8>(r13 + 3u) = u8(0u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_6;
    r0_8 = call_006d9058(r0, r1, r2_5, r3_5);
    S1_5 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    *gptr<u8>(r13) = u8((u32(*gptr<u8>(r13)) & ~3u | 1u) & ~0xfcu | r0_8 << 2);  // (from the original)
    r0_9 = u32(*gptr<u8>(r13 + 1u)) & ~1u | (r0_8 & 0x40u) >> 6;  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(r0_9);
    r1_4 = r0_9 & ~0xfeu;  // (from the original)
    r0_10 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(*gptr<u32>(r5_1)))));
    *gptr<u8>(r13 + 1u) = u8(r1_4 | 0xfeu & r0_10 >> 1);  // (from the original)
    r0_11 = u32(*gptr<u8>(r13 + 2u)) & ~7u | (0x380u & r0_10 >> 2) >> 7;  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(r0_11);
    r1_5 = r0_11 & ~0xf8u;  // (from the original)
    S0_4 = std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(*gptr<u32>(r5_1 + 8u))));
    r0_12 = std::bit_cast<u32>(S0_4);
    *gptr<u8>(r13 + 2u) = u8(r1_5 | 0xf8u & r0_12 << 1);  // (from the original)
    *gptr<u8>(r13 + 3u) = u8(u32(*gptr<u8>(r13 + 3u)) & ~0x1fu | (0x3e0u & r0_12 >> 2) >> 5);  // (from the original)
    r2_6 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_7;
    r0_1 = call_006249b0(0x3du, 4u, r2_6, 4u);  // (from the original)
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_006d9cac
GUEST_EXPORT(0x006d9cac, d_006d9cac::f_006d9cac);

// f_006d9f38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9f38 {

inline guest::global<u32, 0x0094f524> global_0094f524;  // (from the original)
inline guest::global<u32, 0x0095063c> global_0095063c;  // (from the original)
inline constexpr guest::Function<0x002abf60, u32(u32, u32, u32, u32)> call_002abf60;  // (from the original)
inline constexpr guest::Function<0x002c2d58, u32(u32, u32, u32, u32)> call_002c2d58;  // (from the original)
inline constexpr guest::Function<0x002c2fd4, u32(u32, u32, u32, u32)> call_002c2fd4;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006da030, u32(u32, u32, u32, u32)> call_006da030;  // (from the original)

u32 f_006d9f38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r6_1 = 0;
    u32 zf_1 = 0;
    u32 r6_2 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 ea_1 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r4_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0061a7a0(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_6da010;
    }
    r1_1 = r2;
    r4_1 = 0u;
    r0_2 = *global_0094f524;
    if (r0_2 == 0) {
        goto L_6d9fd4;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002abf60(r0_2, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r6_1 = *gptr<u32>(r0_3);
        zf_1 = r6_1 == 0;
        if (!zf_1) {
            r0_3 = u32(*gptr<u8>(r6_1 + 0x1c8u));  // (from the original)
            zf_1 = r0_3 == 2u;
        }
        if (zf_1) {
            goto L_6d9fd4;
        } else {
            r4_1 = r6_1;
        }
    }
    if (r4_1 == 0) {
        goto L_6d9fd4;
    }
    r6_2 = *global_0095063c;
    guest::cpu()->r[13] = r13;
    r0_4 = call_00305f44(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    ea_1 = r6_2 + (r0_4 << 3) + 0x34u;  // (from the original)
    r0_5 = *gptr<u32>(ea_1);
    if (r0_5 != 0) {
        guest::cpu()->r[13] = r13;
        call_002c2fd4(r0_5, ea_1, r2_2, r3_2);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    call_002c2d58(r4_1, ea_1, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r0_6 = *global_0095063c;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006da030(r0_6, r4_1, r1, r3_3);
L_6d9fd4:;
    r4_2 = *global_0095063c;
    r0_7 = u32(*gptr<u8>(r1 + 1u)) & ~0xfu | 3u;  // (from the original)
    *gptr<u8>(r1 + 1u) = u8(r0_7);
    guest::cpu()->r[13] = r13;
    r0_8 = call_00305f44(r0_7, r1_1, r2_1, r3_1);
    r1_2 = u32(*gptr<u8>(r1 + 1u)) << 0x1a;  // (from the original)
    if (r0_8 == r1_2 >> 0x1e) {  // (from the original)
        r1_2 = u32(*gptr<u8>(r4_2 + 0x2du)) & ~0xfu | 3u;  // (from the original)
        *gptr<u8>(r4_2 + 0x2du) = u8(r1_2);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_8;
L_6da010:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006249b0(0x3bu, 5u, r1, 2u);  // (from the original)
}

}  // namespace d_006d9f38
GUEST_EXPORT(0x006d9f38, d_006d9f38::f_006d9f38);

// f_006dab3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dab3c {

struct __attribute__((packed)) Object_006dab3c_0 {
    u8 unknown_0[0x67cc];  // (not used here)
    u32 word_67cc;
    u8 unknown_67d0[0x4];  // (not used here)
    u32 word_67d4;
};
GUEST_OFFSET(Object_006dab3c_0, word_67cc, 0x67cc);  // (from the original)
GUEST_OFFSET(Object_006dab3c_0, word_67d4, 0x67d4);  // (from the original)


u32 f_006dab3c(gptr<Object_006dab3c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r2_1 = 0;
    r0_1 = r0 + 0x67ccu;  // (from the original)
    r3_1 = arg0->word_67cc;
    zf_1 = r3_1 == r2;
    cf_1 = r3_1 >= r2;
    if (cf_1 && !zf_1) {
        r0_1 = *gptr<u32>(arg0->word_67d4 + (r2 << 2));
    }
    if (!cf_1 || zf_1) {
        r0_1 = 0u;
    }
    r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x9cu);  // (from the original)
    return guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, r3_1);
}

}  // namespace d_006dab3c
GUEST_EXPORT(0x006dab3c, d_006dab3c::f_006dab3c);

// f_006dabd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dabd8 {

inline constexpr guest::Function<0x0014fafc, u32(u32, u32, u32, u32)> call_0014fafc;  // (from the original)
inline constexpr guest::Function<0x00240080, u32(u32, u32, u32, u32)> call_00240080;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fca6c, u32(u32, u32, u32, u32)> call_002fca6c;  // (from the original)
inline constexpr guest::Function<0x005ca27c, u32(u32, u32, u32, u32)> call_005ca27c;  // (from the original)
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32, u32, u32)> call_005ca4b4;  // (from the original)

u32 f_006dabd8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 v_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r0_10 = 0;
    u32 r2_3 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4_1 = r1;
    r7 = r0;
    r0_1 = call_002fca6c(r4_1, r2, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_6dad2c;
    }
    r0_2 = call_00240080(r4_1, r2, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0_2;
    if (r0_2 + 1u == 0) {
        goto L_6dad2c;
    }
    r0_3 = r7 + 0x68c0u;  // (from the original)
    r5 = *gptr<u32>(r0_3 + 8u);
    r6 = r5 + (*gptr<u32>(r0_3) << 2);
    if (r5 == r6) {
        goto L_6dac70;
    }
    do {
L_6dac38:;
        r0_4 = *gptr<u32>(r5);
        r1_1 = *gptr<u32>(r0_4 + 0x80u);  // (from the original)
        if (!(r1_1 != r4)) {
            r0_5 = call_0014fafc(r0_4, r1_1, r2, guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            r0_6 = call_005ca4b4(r0_5, r1_2, r2_1, guest::cpu()->r[3]);
            r1_3 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_6 != 0) {
                goto L_6dad18;
            }
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r6);
L_6dac70:;
    r0_7 = r7 + 0x67a8u;  // (from the original)
    v_1 = *gptr<u32>(r0_7);
    r0_8 = r0_7 + 8u;
    r1_3 = v_1;
    r5 = *gptr<u32>(r0_8);
    r6 = r5 + (r1_3 << 2);
    if (r5 == r6) {
        goto L_6dacc4;
    }
    do {
L_6dac8c:;
        r0_8 = *gptr<u32>(r5);
        r1_3 = *gptr<u32>(r0_8 + 0x80u);  // (from the original)
        if (!(r1_3 != r4)) {
            r0_9 = call_0014fafc(r0_8, r1_3, r2, guest::cpu()->r[3]);
            r1_4 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r0_8 = call_005ca27c(r0_9, r1_4, r2_2, guest::cpu()->r[3]);
            r1_3 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_8 == 0xau) {  // (from the original)
                goto L_6dad18;
            }
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r6);
L_6dacc4:;
    r0_10 = call_002f74c8(r0_8, r1_3, r2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r0_11 = call_002f74e0(0x10000000u, r0_10, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_11 == 0) {
        goto L_6dad2c;
    }
    r1_5 = r7 + 0x6a6cu;  // (from the original)
    r0 = *gptr<u32>(r1_5 + 8u);
    r1 = r0 + (*gptr<u32>(r1_5) << 2);
    if (r0 == r1) {
        goto L_6dad2c;
    }
L_6dad00:;
    if (*gptr<u32>(*gptr<u32>(r0) + 0x80u) != r4) {  // (from the original)
        goto L_6dad20;
    }
    r0_12 = *gptr<u32>(r0);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_12;
L_6dad18:;
    r0_13 = *gptr<u32>(r5);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_13;
L_6dad20:;
    r0 = r0 + 4u;
    if (r0 != r1) {
        guest::preempt();
        goto L_6dad00;
    }
L_6dad2c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006dabd8
GUEST_EXPORT(0x006dabd8, d_006dabd8::f_006dabd8);

// f_006dc224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dc224 {

inline guest::global<u32, 0x0014fe38> global_0014fe38;  // (from the original)

u32 f_006dc224(u32 r0) {
    u32 r0_1 = 0;
    goto L_6dc224;
L_6dc224:;
    r0_1 = *gptr<u32>(r0 + 0x6b4cu);  // (from the original)
    if (r0_1 == 0) {
        return r0_1;
    }
    return guest::call_address<u32>(*global_0014fe38, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dc224
GUEST_EXPORT(0x006dc224, d_006dc224::f_006dc224);

// f_006dc8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dc8cc {

inline guest::global<u32, 0x00854660> global_00854660;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_006dc8cc() {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_3 = 0;
    u32 r0_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_00854660);
    S1_1 = std::bit_cast<float>(*gptr<u32>(0x854660u + 4));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(0x854660u + 8));  // (from the original)
    S3_1 = std::bit_cast<float>(*gptr<u32>(0x854660u + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(0x854660u + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(0x854660u + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(0x854660u + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(0x854660u + 0x1c));  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(ea_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(ea_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(ea_1 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(std::bit_cast<u32>(S7_1));  // (from the original)
    ea_2 = 0x854660u + 0x20u;  // (from the original)
    r0_1 = *gptr<u32>(ea_2);
    r1_1 = *gptr<u32>(ea_2 + 4);
    ea_3 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(ea_3) = u32(r0_1);
    *gptr<u32>(ea_3 + 4) = u32(r1_1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    r0_2 = call_002fae84(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r0_3 = *gptr<u32>(r13 + ((u32(*gptr<u8>(r0_2 + 0x6214eu)) & 0xfu) << 2));  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = 0x6214eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_3;
}

}  // namespace d_006dc8cc
GUEST_EXPORT(0x006dc8cc, d_006dc8cc::f_006dc8cc);

// f_006dcaf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcaf8 {


u32 f_006dcaf8(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(0x997c70u + r0)) & 0xfu;  // (from the original)
    guest::cpu()->r[1] = 0x997c70u;  // (from the original)
    return r0_1;
}

}  // namespace d_006dcaf8
GUEST_EXPORT(0x006dcaf8, d_006dcaf8::f_006dcaf8);

// f_006dcc94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcc94 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003082bc, u32(u32, u32, u32, u32)> call_003082bc;  // (from the original)

u32 f_006dcc94(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    call_003082bc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return call_002f825c(0x997c70u, 0x12u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006dcc94
GUEST_EXPORT(0x006dcc94, d_006dcc94::f_006dcc94);

// f_006dcd28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcd28 {

inline guest::global<u32, 0x0014fe40> global_0014fe40;  // (from the original)

u32 f_006dcd28(u32 r0) {
    u32 r0_1 = 0;
    goto L_6dcd28;
L_6dcd28:;
    r0_1 = *gptr<u32>(r0 + 0x6b4cu);  // (from the original)
    if (r0_1 == 0) {
        return r0_1;
    }
    return guest::call_address<u32>(*global_0014fe40, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dcd28
GUEST_EXPORT(0x006dcd28, d_006dcd28::f_006dcd28);

// f_006dcd50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcd50 {

inline guest::global<u32, 0x00854688> global_00854688;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;  // (from the original)

u32 f_006dcd50() {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    u32 r0_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_00854688);
    S1_1 = std::bit_cast<float>(*gptr<u32>(0x854688u + 4));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(0x854688u + 8));  // (from the original)
    S3_1 = std::bit_cast<float>(*gptr<u32>(0x854688u + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(0x854688u + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(0x854688u + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(0x854688u + 0x18));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r13 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    r0_1 = call_002fb328(0x854688u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    r4_1 = r0_1 + 0x62250u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    r0_2 = call_007111b4(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        r0_3 = *gptr<u32>(r13 + (u32(*gptr<u8>(r4_1 + 0x14u)) << 2));  // (from the original)
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return r0_3;
    }
    r0_4 = u32(*gptr<u8>(r4_1 + 0x15u));  // (from the original)
    zf_1 = r0_4 == 2u;
    cf_1 = r0_4 >= 2u;
    if (!cf_1 || zf_1) {
        r0_4 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    }
    if (cf_1 && !zf_1) {
        r0_4 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return r0_4;
}

}  // namespace d_006dcd50
GUEST_EXPORT(0x006dcd50, d_006dcd50::f_006dcd50);

// f_006dd0c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd0c8 {

inline guest::global<u32, 0x0014fe50> global_0014fe50;  // (from the original)

u32 f_006dd0c8(u32 r0) {
    u32 r0_1 = 0;
    goto L_6dd0c8;
L_6dd0c8:;
    r0_1 = *gptr<u32>(r0 + 0x6b4cu);  // (from the original)
    if (r0_1 == 0) {
        return r0_1;
    }
    return guest::call_address<u32>(*global_0014fe50, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dd0c8
GUEST_EXPORT(0x006dd0c8, d_006dd0c8::f_006dd0c8);

// f_006dd294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd294 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0071c358, u32(u32, u32, u32, u32)> call_0071c358;  // (from the original)

u32 f_006dd294() {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = 0x854660u + 0x50u;  // (from the original)
    r4_1 = *gptr<u32>(0x854660u + 0x64u);  // (from the original)
    r0_2 = *gptr<u32>(r0_1);
    r1_1 = *gptr<u32>(r0_1 + 4);
    r2_1 = *gptr<u32>(r0_1 + 8);
    r3_1 = *gptr<u32>(r0_1 + 0xc);  // (from the original)
    r12_1 = *gptr<u32>(r0_1 + 0x10);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r4_1);  // (from the original)
    *gptr<u32>(r13) = u32(r0_2);
    *gptr<u32>(r13 + 4) = u32(r1_1);
    *gptr<u32>(r13 + 8) = u32(r2_1);
    *gptr<u32>(r13 + 0xc) = u32(r3_1);  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(r12_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb328(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_2 = r0_3 + 0x666e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0071c358(r4_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    zf_1 = r0_4 == 0;
    r0_5 = u32(*gptr<u8>(r4_2 + 0x10u));  // (from the original)
    if (zf_1) {
        r0_6 = *gptr<u32>(r13 + (r0_5 << 2));
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    if (r0_5 == 1u) {
        r0_7 = *gptr<u32>(r13 + 4u);
    } else {
        r0_7 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_006dd294
GUEST_EXPORT(0x006dd294, d_006dd294::f_006dd294);

// f_006dd2f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd2f8 {

inline guest::global<u32, 0x008546a4> global_008546a4;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)

u32 f_006dd2f8() {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r0_1 = *global_008546a4;
    r1_1 = *gptr<u32>(0x8546a4u + 4);  // (from the original)
    r2_1 = *gptr<u32>(0x8546a4u + 8);  // (from the original)
    *gptr<u32>(r13) = u32(r0_1);
    *gptr<u32>(r13 + 4) = u32(r1_1);
    *gptr<u32>(r13 + 8) = u32(r2_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb328(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(r13 + (u32(*gptr<u8>(r0_2 + 0x6682cu)) << 2));  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006dd2f8
GUEST_EXPORT(0x006dd2f8, d_006dd2f8::f_006dd2f8);

// f_006dd334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd334 {

inline constexpr guest::Function<0x00779548, u32(u32, u32, u32, u32)> call_00779548;  // (from the original)

u32 f_006dd334() {
    return call_00779548(0x997c70u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006dd334
GUEST_EXPORT(0x006dd334, d_006dd334::f_006dd334);

// f_006dd7b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd7b4 {

inline guest::global<u32, 0x008546c8> global_008546c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)

u32 f_006dd7b4() {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r0_1 = *global_008546c8;
    r1_1 = *gptr<u32>(0x8546c8u + 4);  // (from the original)
    r2_1 = *gptr<u32>(0x8546c8u + 8);  // (from the original)
    *gptr<u32>(r13) = u32(r0_1);
    *gptr<u32>(r13 + 4) = u32(r1_1);
    *gptr<u32>(r13 + 8) = u32(r2_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb328(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(r13 + (u32(*gptr<u8>(r0_2 + 0x6adb4u)) << 2));  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006dd7b4
GUEST_EXPORT(0x006dd7b4, d_006dd7b4::f_006dd7b4);

// f_006dd7e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd7e8 {

inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)

u32 f_006dd7e8(u32 r0, u32 r1) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 3u) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r4_1 = r0 + (r1 << 4);
    r0_1 = u32(*gptr<u8>(0x6b60u + r4_1));  // (from the original)
    r0_2 = call_006cc934(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0_3 = r4_1 + 0x6b64u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        return r0_3;
    }
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_006dd7e8
GUEST_EXPORT(0x006dd7e8, d_006dd7e8::f_006dd7e8);

// f_006de398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006de398 {

inline constexpr guest::Function<0x0014fe74, u32(u32, u32, u32, u32)> call_0014fe74;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)

u32 f_006de398(u32 r0, u32 r1, float S0, float S1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_17 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r2_1 = 0;
    u32 r0_18 = 0;
    u32 r1_5 = 0;
    u32 r7_1 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_21 = 0;
    u32 res_2 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_25 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    u32 r2_2 = 0;
    u32 r0_26 = 0;
    u32 r1_7 = 0;
    u32 r7_2 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 res_3 = 0;
    u32 nf_2 = 0;
    u32 vf_2 = 0;
    u32 r0_29 = 0;
    u32 res_4 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    u32 r1_8 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r10_1 = 0;
    u32 v_1 = 0;
    u32 r10_2 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    u32 r1_9 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r10 = r0;
    r8 = r1;
    r1_1 = r13 + 0xcu;  // (from the original)
    r0_1 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_003171b4(r0_1, r1_1, r1, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0_2 = r10 + 0x6758u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    r1 = *gptr<u32>(r0_2);
    r4 = 0x2710u;  // (from the original)
    r5 = *gptr<u32>(r0_2 + 8u);
    r6 = 0u;
    r7 = r5 + (r1 << 2);
    if (r5 == r7) {
        goto L_6de44c;
    }
    do {
L_6de3f0:;
        r0_3 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_4 = call_0014fe74(r0_3, r1, r2, guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        r1_2 = r13 + 4u;
        r0_5 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_003171b4(r0_5, r1_2, r0_4, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        r0_6 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        if (r0_6 >> 0x1f != (r0_6 & (r0_6 ^ r0_6)) >> 0x1f) {  // (from the original)
            r0_6 = 0u - r0_6;
        }
        r1 = r2 - *gptr<u32>(r13 + 4u);
        if (r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
            r1 = 0u - r1;
        }
        r0_7 = r0_6 + r1;
        if (s32(r0_7) < s32(r4)) {
            r6 = *gptr<u32>(r5);
            r4 = r0_7;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r7);
L_6de44c:;
    r0_8 = r10 + 0x6774u;  // (from the original)
    r1 = *gptr<u32>(r0_8);
    r5 = *gptr<u32>(r0_8 + 8u);
    r7 = r5 + (r1 << 2);
    if (r5 == r7) {
        goto L_6de4c4;
    }
    do {
L_6de468:;
        r0_9 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_10 = call_0014fe74(r0_9, r1, r2, guest::cpu()->r[3]);
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        r1_3 = r13 + 4u;
        r0_11 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        call_003171b4(r0_11, r1_3, r0_10, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = *gptr<u32>(r13 + 4u);
        r0_12 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        if (r0_12 >> 0x1f != (r0_12 & (r0_12 ^ r0_12)) >> 0x1f) {  // (from the original)
            r0_12 = 0u - r0_12;
        }
        r1 = *gptr<u32>(r13 + 0xcu) - r2;  // (from the original)
        if (r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
            r1 = 0u - r1;
        }
        r0_13 = r0_12 + r1;
        if (s32(r0_13) < s32(r4)) {
            r6 = *gptr<u32>(r5);
            r4 = r0_13;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r7);
L_6de4c4:;
    r0_14 = r10 + 0x68c0u;  // (from the original)
    r1 = *gptr<u32>(r0_14);
    r5 = *gptr<u32>(r0_14 + 8u);
    r9 = r5 + (r1 << 2);
    if (r5 == r9) {
        goto L_6de55c;
    }
    do {
L_6de4e0:;
        r0_15 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_16 = call_0014fe74(r0_15, r1, r2, guest::cpu()->r[3]);
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        r1_4 = r13 + 4u;
        r0_17 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        call_003171b4(r0_17, r1_4, r0_16, guest::cpu()->r[3]);
        S0_4 = guest::cpu()->s[0];
        S1_4 = guest::cpu()->s[1];
        r2_1 = *gptr<u32>(r13 + 4u);
        r0_18 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        if (r0_18 >> 0x1f != (r0_18 & (r0_18 ^ r0_18)) >> 0x1f) {  // (from the original)
            r0_18 = 0u - r0_18;
        }
        r1_5 = *gptr<u32>(r13 + 0xcu) - r2_1;  // (from the original)
        if (r1_5 >> 0x1f != (r1_5 & (r1_5 ^ r1_5)) >> 0x1f) {  // (from the original)
            r1_5 = 0u - r1_5;
        }
        r7_1 = r0_18 + r1_5;
        r0_19 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        r0_20 = call_0014fe74(r0_19, r1_5, r2_1, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S1 = std::bit_cast<float>(*gptr<u32>(r0_20 + 4u));
        res_1 = r7_1 - r4;
        nf_1 = res_1 >> 0x1f;  // (from the original)
        vf_1 = ((r7_1 ^ r4) & (r7_1 ^ res_1)) >> 0x1f;  // (from the original)
        S0 = fabsf(S1 - std::bit_cast<float>(*gptr<u32>(r8 + 4u)));
        if (nf_1 != vf_1) {
            r0_21 = std::bit_cast<u32>(S0);
            res_2 = r0_21 - 0x42000000u;  // (from the original)
            nf_1 = res_2 >> 0x1f;  // (from the original)
            vf_1 = ((r0_21 ^ 0x42000000u) & (r0_21 ^ res_2)) >> 0x1f;  // (from the original)
        }
        if (nf_1 != vf_1) {
            r6 = *gptr<u32>(r5);
            r4 = r7_1;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r9);
L_6de55c:;
    r0_22 = r10 + 0x67ccu;  // (from the original)
    r1 = *gptr<u32>(r0_22);
    r5 = *gptr<u32>(r0_22 + 8u);
    r9 = r5 + (r1 << 2);
    if (r5 == r9) {
        goto L_6de5f4;
    }
    do {
L_6de578:;
        r0_23 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_24 = call_0014fe74(r0_23, r1, r2, guest::cpu()->r[3]);
        S0_5 = guest::cpu()->s[0];
        S1_5 = guest::cpu()->s[1];
        r1_6 = r13 + 4u;
        r0_25 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_5;
        call_003171b4(r0_25, r1_6, r0_24, guest::cpu()->r[3]);
        S0_6 = guest::cpu()->s[0];
        S1_6 = guest::cpu()->s[1];
        r2_2 = *gptr<u32>(r13 + 4u);
        r0_26 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        if (r0_26 >> 0x1f != (r0_26 & (r0_26 ^ r0_26)) >> 0x1f) {  // (from the original)
            r0_26 = 0u - r0_26;
        }
        r1_7 = *gptr<u32>(r13 + 0xcu) - r2_2;  // (from the original)
        if (r1_7 >> 0x1f != (r1_7 & (r1_7 ^ r1_7)) >> 0x1f) {  // (from the original)
            r1_7 = 0u - r1_7;
        }
        r7_2 = r0_26 + r1_7;
        r0_27 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_6;
        r0_28 = call_0014fe74(r0_27, r1_7, r2_2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S1 = std::bit_cast<float>(*gptr<u32>(r8 + 4u));
        res_3 = r7_2 - r4;
        nf_2 = res_3 >> 0x1f;  // (from the original)
        vf_2 = ((r7_2 ^ r4) & (r7_2 ^ res_3)) >> 0x1f;  // (from the original)
        S0 = fabsf(std::bit_cast<float>(*gptr<u32>(r0_28 + 4u)) - S1);
        if (nf_2 != vf_2) {
            r0_29 = std::bit_cast<u32>(S0);
            res_4 = r0_29 - 0x42000000u;  // (from the original)
            nf_2 = res_4 >> 0x1f;  // (from the original)
            vf_2 = ((r0_29 ^ 0x42000000u) & (r0_29 ^ res_4)) >> 0x1f;  // (from the original)
        }
        if (nf_2 != vf_2) {
            r6 = *gptr<u32>(r5);
            r4 = r7_2;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r9);
L_6de5f4:;
    r0_30 = r10 + 0x67a8u;  // (from the original)
    r1 = *gptr<u32>(r0_30);
    r5 = *gptr<u32>(r0_30 + 8u);
    r7 = r5 + (r1 << 2);
    if (r5 == r7) {
        goto L_6de66c;
    }
    do {
L_6de610:;
        r0_31 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_32 = call_0014fe74(r0_31, r1, r2, guest::cpu()->r[3]);
        S0_7 = guest::cpu()->s[0];
        S1_7 = guest::cpu()->s[1];
        r1_8 = r13 + 4u;
        r0_33 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_7;
        guest::cpu()->s[1] = S1_7;
        call_003171b4(r0_33, r1_8, r0_32, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = *gptr<u32>(r13 + 4u);
        r0_34 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        if (r0_34 >> 0x1f != (r0_34 & (r0_34 ^ r0_34)) >> 0x1f) {  // (from the original)
            r0_34 = 0u - r0_34;
        }
        r1 = *gptr<u32>(r13 + 0xcu) - r2;  // (from the original)
        if (r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
            r1 = 0u - r1;
        }
        r0_35 = r0_34 + r1;
        if (s32(r0_35) < s32(r4)) {
            r6 = *gptr<u32>(r5);
            r4 = r0_35;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r7);
L_6de66c:;
    r10_1 = r10 + 0x6a6cu;  // (from the original)
    v_1 = *gptr<u32>(r10_1);
    r10_2 = r10_1 + 8u;
    r5 = *gptr<u32>(r10_2);
    r7 = r5 + (v_1 << 2);
    if (r5 == r7) {
        goto L_6de6e4;
    }
    do {
L_6de688:;
        r0_36 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_37 = call_0014fe74(r0_36, r1, r2, guest::cpu()->r[3]);
        S0_8 = guest::cpu()->s[0];
        S1_8 = guest::cpu()->s[1];
        r1_9 = r13 + 4u;
        r0_38 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_8;
        guest::cpu()->s[1] = S1_8;
        call_003171b4(r0_38, r1_9, r0_37, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r2 = *gptr<u32>(r13 + 4u);
        r0_39 = *gptr<u32>(r13 + 8u) - *gptr<u32>(r13);
        if (r0_39 >> 0x1f != (r0_39 & (r0_39 ^ r0_39)) >> 0x1f) {  // (from the original)
            r0_39 = 0u - r0_39;
        }
        r1 = *gptr<u32>(r13 + 0xcu) - r2;  // (from the original)
        if (r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
            r1 = 0u - r1;
        }
        r0_40 = r0_39 + r1;
        if (s32(r0_40) < s32(r4)) {
            r6 = *gptr<u32>(r5);
            r4 = r0_40;
        }
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 != r7);
L_6de6e4:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r6;
}

}  // namespace d_006de398
GUEST_EXPORT(0x006de398, d_006de398::f_006de398);

// f_006dfe10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dfe10 {

inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x004e24e4, u32(u32, u32, u32, u32)> call_004e24e4;  // (from the original)
inline constexpr guest::Function<0x004e24f4, u32(u32, u32, u32, u32)> call_004e24f4;  // (from the original)
inline constexpr guest::Function<0x005b4340, u32(u32, u32, u32, u32)> call_005b4340;  // (from the original)

u32 f_006dfe10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_8 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    r13 = r13 - 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_004e24e4(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_004e24f4(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_3 = *global_00950148;
    if (r0_3 != 0) {
        *gptr<u32>(r13 + 4u) = u32(0u);
        *gptr<u32>(r13) = u32(0x90af48u);  // (from the original)
        r0_4 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0_5 = call_00301d0c(r0_4, 0x3040fcu, 0xcu, 0xau);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r1_2 = 0u;
        *gptr<u32>(r0_5 + 0x78u) = u32(r1_2);  // (from the original)
        r0_3 = *gptr<u32>(r13 + 0x80u);  // (from the original)
        if (r0_3 != 0 && r0_3 >> 0x1f == (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
            r13 = r13 + 0x88u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002f74c8(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_005b4340(r0_6, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    res_1 = r0_7 - 2u;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0_7 ^ 2u) & (r0_7 ^ res_1)) >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r0_8 = 0xcu;  // (from the original)
        goto L_6dfed0;
    }
    if (nf_1 != vf_1) {
        if (r0_7 == 0) {
            r0_8 = 0xau;  // (from the original)
            goto L_6dfed0;
        }
        if (r0_7 == 1u) {
            r0_8 = 0xbu;  // (from the original)
            goto L_6dfed0;
        }
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    if (r0_7 == 3u) {
        r0_8 = 0xdu;  // (from the original)
        goto L_6dfed0;
    }
    if (r0_7 == 0x84u) {  // (from the original)
        r0_8 = 0xeu;  // (from the original)
    } else {
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
L_6dfed0:;
    r1 = 0u;
    res_2 = u32(*gptr<u8>(0x997c70u + r0_8)) >> 4;  // (from the original)
    r0 = res_2;
    if (res_2 == 0) {
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    do {
L_6dfee4:;
        if ((r0 & 1u) != 0) {
            r1 = r1 + 1u;
        }
        res_3 = r0 >> 1;
        r0 = res_3;
        guest::preempt();
    } while (res_3 != 0);
    if (r1 > 1u) {
        r13 = r13 + 0x88u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_006dfe10
GUEST_EXPORT(0x006dfe10, d_006dfe10::f_006dfe10);
