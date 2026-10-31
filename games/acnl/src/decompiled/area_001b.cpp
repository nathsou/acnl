// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_001b02c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b02c0 {

inline constexpr guest::Function<0x001324a8, u32(u32, u32, u32, u32)> call_001324a8;  // (from the original)
inline constexpr guest::Function<0x001c55b0, u32(u32, u32, u32, u32)> call_001c55b0;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)

u32 f_001b02c0(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_001c55b0(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    *gptr<u32>(r0_1) = u32(0x8eb3f8u);  // (from the original)
    r0_2 = r0_1 + 0x9e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_001324a8(r0_2, 0x8eb3f8u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    *gptr<u32>(r0_3 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3) = u32(0x8ebb18u);  // (from the original)
    ea_1 = r0_3 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    r0_4 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f7604(r0_4, 0x8ebb18u, r2_2, guest::cpu()->r[3]);  // (from the original)
    r0_6 = r0_5 - 0xa00u;  // (from the original)
    *gptr<u32>(r0_6 + 0x24u) = u32(0x1b0314u);  // (from the original)
    *gptr<u32>(r0_6 + 0xae8u) = u32(~0u);  // (from the original)
    *gptr<u32>(r0_6 + 0xae4u) = u32(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0x1b0314u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_001b02c0
GUEST_EXPORT(0x001b02c0, d_001b02c0::f_001b02c0);

// f_001b1010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1010 {

inline constexpr guest::Function<0x001bc1fc, u32(u32, u32, u32, u32)> call_001bc1fc;  // (from the original)
inline constexpr guest::Function<0x001bc684, u32(u32, u32, u32, u32)> call_001bc684;  // (from the original)
inline constexpr guest::Function<0x001bcbb8, u32(u32, u32, u32, u32)> call_001bcbb8;  // (from the original)
inline constexpr guest::Function<0x001bd6f0, u32(u32, u32, u32, u32)> call_001bd6f0;  // (from the original)
inline constexpr guest::Function<0x001bdedc, u32(u32, u32, u32, u32)> call_001bdedc;  // (from the original)
inline constexpr guest::Function<0x001be284, u32(u32, u32, u32, u32)> call_001be284;  // (from the original)

u32 f_001b1010() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r4_2 = 0;
    u32 r0_4 = 0;
    u32 r4_3 = 0;
    u32 r0_5 = 0;
    u32 r4_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001bcbb8(0xac3a14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_2 = call_001bd6f0(0xac4e40u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r4_1 = r0_1 & r0_2;
    r0_3 = call_001bc684(0xac8c6cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r4_2 = r4_1 & r0_3;
    r0_4 = call_001bdedc(0xacfa98u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r4_3 = r4_2 & r0_4;
    r0_5 = call_001be284(0xacfdc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r4_4 = r4_3 & r0_5;
    r0_6 = call_001bc1fc(0xad0ff0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_7 = r0_6 & r4_4;
    guest::cpu()->r[13] += 8u;
    return r0_7;
}

}  // namespace d_001b1010
GUEST_EXPORT(0x001b1010, d_001b1010::f_001b1010);

// f_001b1308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1308 {

inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> call_00132478;  // (from the original)
inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> call_005b19f8;  // (from the original)

u32 f_001b1308(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 zf_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 cf_1 = 0;
    u32 zf_5 = 0;
    u32 r3_5 = 0;
    u32 zf_6 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 zf_7 = 0;
    u32 zf_8 = 0;
    u32 r0_14 = 0;
    u32 r1_8 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 zf_9 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_10 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r0_23 = 0;
    u32 r1_12 = 0;
    u32 cf_2 = 0;
    u32 zf_10 = 0;
    u32 r3_10 = 0;
    u32 zf_11 = 0;
    u32 r0_24 = 0;
    u32 r1_13 = 0;
    u32 r2_9 = 0;
    u32 r3_11 = 0;
    u32 r0_25 = 0;
    u32 zf_12 = 0;
    u32 zf_13 = 0;
    u32 r0_26 = 0;
    u32 r1_14 = 0;
    u32 r2_10 = 0;
    u32 r3_12 = 0;
    u32 r0_27 = 0;
    u32 zf_14 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_15 = 0;
    u32 r2_11 = 0;
    u32 r3_13 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_16 = 0;
    u32 r2_12 = 0;
    u32 r3_14 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_17 = 0;
    u32 r0_35 = 0;
    u32 r1_18 = 0;
    u32 cf_3 = 0;
    u32 zf_15 = 0;
    u32 r3_15 = 0;
    u32 zf_16 = 0;
    u32 r0_36 = 0;
    u32 r1_19 = 0;
    u32 r2_13 = 0;
    u32 r3_16 = 0;
    u32 r0_37 = 0;
    u32 zf_17 = 0;
    u32 zf_18 = 0;
    u32 r0_38 = 0;
    u32 r1_20 = 0;
    u32 r2_14 = 0;
    u32 r3_17 = 0;
    u32 r0_39 = 0;
    u32 zf_19 = 0;
    u32 r0_40 = 0;
    u32 r1_21 = 0;
    u32 r2_15 = 0;
    u32 r3_18 = 0;
    u32 r0_41 = 0;
    u32 r1_22 = 0;
    u32 r2_16 = 0;
    u32 r3_19 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_23 = 0;
    u32 r0_44 = 0;
    u32 r1_24 = 0;
    u32 cf_4 = 0;
    u32 zf_20 = 0;
    u32 r3_20 = 0;
    u32 zf_21 = 0;
    u32 r0_45 = 0;
    u32 r1_25 = 0;
    u32 r2_17 = 0;
    u32 r3_21 = 0;
    u32 r0_46 = 0;
    u32 zf_22 = 0;
    u32 zf_23 = 0;
    u32 r0_47 = 0;
    u32 r1_26 = 0;
    u32 r2_18 = 0;
    u32 r3_22 = 0;
    u32 r0_48 = 0;
    u32 zf_24 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r1_27 = 0;
    u32 r2_19 = 0;
    u32 r3_23 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r1_28 = 0;
    u32 r2_20 = 0;
    u32 r3_24 = 0;
    u32 r0_53 = 0;
    u32 r0_54 = 0;
    u32 r0_55 = 0;
    u32 r1_29 = 0;
    u32 r1_30 = 0;
    u32 cf_5 = 0;
    u32 zf_25 = 0;
    u32 r1_31 = 0;
    u32 r3_25 = 0;
    u32 zf_26 = 0;
    u32 r0_56 = 0;
    u32 r1_32 = 0;
    u32 r2_21 = 0;
    u32 r3_26 = 0;
    u32 r0_57 = 0;
    u32 zf_27 = 0;
    u32 zf_28 = 0;
    u32 r0_58 = 0;
    u32 r1_33 = 0;
    u32 r2_22 = 0;
    u32 r3_27 = 0;
    u32 r0_59 = 0;
    u32 zf_29 = 0;
    u32 r0_60 = 0;
    u32 r0_61 = 0;
    u32 r1_34 = 0;
    u32 r2_23 = 0;
    u32 r3_28 = 0;
    u32 r0_62 = 0;
    u32 r0_63 = 0;
    u32 r1_35 = 0;
    u32 r2_24 = 0;
    u32 r3_29 = 0;
    u32 r0_64 = 0;
    u32 r0_65 = 0;
    u32 r0_66 = 0;
    u32 r1_36 = 0;
    u32 r1_37 = 0;
    u32 cf_6 = 0;
    u32 r0_67 = 0;
    u32 r1_38 = 0;
    u32 zf_30 = 0;
    u32 r3_30 = 0;
    r13 = r13 - 0x24;  // (from the original)
    r13 = r13 - 0x24u;  // (from the original)
    r10 = 0xc800u;  // (from the original)
    r5 = 0xac3a14u;  // (from the original)
    r11 = 0x952c54u;  // (from the original)
    r4 = *gptr<u32>(0x140cu + r5);  // (from the original)
    r9 = *gptr<u32>(r11);
    zf_1 = r4 == 0;
    if (zf_1) {
        goto L_1b1350;
    }
    do {
L_1b1330:;
        r0_1 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_1, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_2 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_2, r1_1, r2_1, r3_1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_2 = r4 == 0;
        guest::preempt();
    } while (!zf_2);
L_1b1350:;
    r4 = *gptr<u32>(0x1424u + r5);  // (from the original)
    zf_3 = r4 == 0;
    if (zf_3) {
        goto L_1b1380;
    }
    do {
L_1b1360:;
        r0_3 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_3, r1, r2, r3);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_4 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_4, r1_2, r2_2, r3_2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_4 = r4 == 0;
        guest::preempt();
    } while (!zf_4);
L_1b1380:;
    r0_5 = r5 + 0x1400u;  // (from the original)
    r0_6 = r0_5 + 8u;
    guest::cpu()->r[13] = r13;
    call_00132478(r0_6, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r5 + 0x1400u;  // (from the original)
    r0_8 = r0_7 + 0x14u;  // (from the original)
    r6 = r0_8;
    guest::cpu()->r[13] = r13;
    call_00132478(r0_8, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r5 + 0x1000u;  // (from the original)
    r0_10 = r0_9 + 0x420u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_10, r1_4, r2_4, r3_4);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b13ac:;
        r0_11 = r5 + (r4 << 8);
        r1_5 = r0_11 + 8u;
        guest::cpu()->r[13] = r13;
        call_0013f134(r6, r1_5, r2, r3);
        r1_6 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf_1 = r4 >= 0x14u;  // (from the original)
        guest::preempt();
    } while (!cf_1);
    guest::cpu()->r[13] = r13;
    call_002f747c(r5, r1_6, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x9047f8u;  // (from the original)
    zf_5 = r9 == 0;
    r7 = 0u;
    r8 = 1u;
    if (!zf_5) {
        r3_5 = r13 + 8u;
        *gptr<u32>(r13 + 0xcu) = u32(0x88e3d4u);  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(r6);
        *gptr<u32>(r13 + 4u) = u32(r7);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        call_0031758c(r5, r10, r9, r3_5);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xac4e40u;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x26c00u;  // (from the original)
    r4 = *gptr<u32>(0x3e0cu + r5);  // (from the original)
    zf_6 = r4 == 0;
    if (zf_6) {
        goto L_1b1448;
    }
    do {
L_1b1428:;
        r0_12 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_12, r1, r2, r3);
        r1_7 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_13 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_13, r1_7, r2_5, r3_6);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_7 = r4 == 0;
        guest::preempt();
    } while (!zf_7);
L_1b1448:;
    r4 = *gptr<u32>(0x3e24u + r5);  // (from the original)
    zf_8 = r4 == 0;
    if (zf_8) {
        goto L_1b1478;
    }
    do {
L_1b1458:;
        r0_14 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_14, r1, r2, r3);
        r1_8 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r0_15 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_15, r1_8, r2_6, r3_7);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_9 = r4 == 0;
        guest::preempt();
    } while (!zf_9);
L_1b1478:;
    r0_16 = r5 + 0x3c00u;  // (from the original)
    r0_17 = r0_16 + 0x208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_17, r1, r2, r3);
    r1_9 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_18 = r5 + 0x3c00u;  // (from the original)
    r0_19 = r0_18 + 0x214u;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0_19);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_19, r1_9, r2_7, r3_8);
    r1_10 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r5 + 0x3000u;  // (from the original)
    r0_21 = r0_20 + 0xe20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_21, r1_10, r2_8, r3_9);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b14a4:;
        r0_22 = r5 + (r4 << 8);
        r1_11 = r0_22 + 8u;
        r0_23 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0013f134(r0_23, r1_11, r2, r3);
        r1_12 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf_2 = r4 >= 0x3eu;  // (from the original)
        guest::preempt();
    } while (!cf_2);
    guest::cpu()->r[13] = r13;
    call_002f747c(r5, r1_12, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf_10 = r9 == 0;
    if (!zf_10) {
        r3_10 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(r13 + 0x14u) = u32(0x88e3d4u);  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(r6);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r7);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        call_0031758c(r5, r10, r9, r3_10);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xac8c6cu;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x44c00u;  // (from the original)
    r4 = *gptr<u32>(0x6e0cu + r5);  // (from the original)
    zf_11 = r4 == 0;
    if (zf_11) {
        goto L_1b1538;
    }
    do {
L_1b1518:;
        r0_24 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_24, r1, r2, r3);
        r1_13 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
        r0_25 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_25, r1_13, r2_9, r3_11);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_12 = r4 == 0;
        guest::preempt();
    } while (!zf_12);
L_1b1538:;
    r4 = *gptr<u32>(0x6e24u + r5);  // (from the original)
    zf_13 = r4 == 0;
    if (zf_13) {
        goto L_1b1568;
    }
    do {
L_1b1548:;
        r0_26 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_26, r1, r2, r3);
        r1_14 = guest::cpu()->r[1];
        r2_10 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        r0_27 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_27, r1_14, r2_10, r3_12);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_14 = r4 == 0;
        guest::preempt();
    } while (!zf_14);
L_1b1568:;
    r0_28 = r5 + 0x6c00u;  // (from the original)
    r0_29 = r0_28 + 0x208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_29, r1, r2, r3);
    r1_15 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_30 = r5 + 0x6c00u;  // (from the original)
    r0_31 = r0_30 + 0x214u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0_31);
    guest::cpu()->r[13] = r13;
    call_00132478(r0_31, r1_15, r2_11, r3_13);
    r1_16 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_32 = r5 + 0x6000u;  // (from the original)
    r0_33 = r0_32 + 0xe20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_33, r1_16, r2_12, r3_14);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b1594:;
        r0_34 = r5 + (r4 << 8);
        r1_17 = r0_34 + 8u;
        r0_35 = *gptr<u32>(r13 + 8u);
        guest::cpu()->r[13] = r13;
        call_0013f134(r0_35, r1_17, r2, r3);
        r1_18 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf_3 = r4 >= 0x6eu;  // (from the original)
        guest::preempt();
    } while (!cf_3);
    guest::cpu()->r[13] = r13;
    call_002f747c(r5, r1_18, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf_15 = r9 == 0;
    if (!zf_15) {
        r3_15 = r13 + 8u;
        *gptr<u32>(r13 + 0xcu) = u32(0x88e3d4u);  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(r6);
        *gptr<u32>(r13 + 4u) = u32(r7);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        call_0031758c(r5, r10, r9, r3_15);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xacfa98u;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x1e00u;  // (from the original)
    r4 = *gptr<u32>(r5 + 0x30cu);  // (from the original)
    zf_16 = r4 == 0;
    if (zf_16) {
        goto L_1b1624;
    }
    do {
L_1b1604:;
        r0_36 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_36, r1, r2, r3);
        r1_19 = guest::cpu()->r[1];
        r2_13 = guest::cpu()->r[2];
        r3_16 = guest::cpu()->r[3];
        r0_37 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_37, r1_19, r2_13, r3_16);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_17 = r4 == 0;
        guest::preempt();
    } while (!zf_17);
L_1b1624:;
    r4 = *gptr<u32>(r5 + 0x324u);  // (from the original)
    zf_18 = r4 == 0;
    if (zf_18) {
        goto L_1b1650;
    }
    do {
L_1b1630:;
        r0_38 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_38, r1, r2, r3);
        r1_20 = guest::cpu()->r[1];
        r2_14 = guest::cpu()->r[2];
        r3_17 = guest::cpu()->r[3];
        r0_39 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_39, r1_20, r2_14, r3_17);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_19 = r4 == 0;
        guest::preempt();
    } while (!zf_19);
L_1b1650:;
    r0_40 = r5 + 0x308u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_40, r1, r2, r3);
    r1_21 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_41 = r5 + 0x314u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_41, r1_21, r2_15, r3_18);
    r1_22 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_42 = r5 + 0x320u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_42, r1_22, r2_16, r3_19);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b1674:;
        r0_43 = r5 + (r4 << 8);
        r1_23 = r0_43 + 8u;
        r0_44 = r5 + 0x314u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0013f134(r0_44, r1_23, r2, r3);
        r1_24 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf_4 = r4 >= 3u;
        guest::preempt();
    } while (!cf_4);
    guest::cpu()->r[13] = r13;
    call_002f747c(r5, r1_24, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf_20 = r9 == 0;
    if (!zf_20) {
        r3_20 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(r13 + 0x14u) = u32(0x88e3d4u);  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(r6);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r7);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        call_0031758c(r5, r10, r9, r3_20);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xacfdc4u;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = r5 + 0x1000u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0xbe00u);  // (from the original)
    r4 = *gptr<u32>(r10 + 0x20cu);  // (from the original)
    zf_21 = r4 == 0;
    if (zf_21) {
        goto L_1b170c;
    }
    do {
L_1b16ec:;
        r0_45 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_45, r1, r2, r3);
        r1_25 = guest::cpu()->r[1];
        r2_17 = guest::cpu()->r[2];
        r3_21 = guest::cpu()->r[3];
        r0_46 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_46, r1_25, r2_17, r3_21);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_22 = r4 == 0;
        guest::preempt();
    } while (!zf_22);
L_1b170c:;
    r4 = *gptr<u32>(r10 + 0x224u);  // (from the original)
    zf_23 = r4 == 0;
    if (zf_23) {
        goto L_1b1738;
    }
    do {
L_1b1718:;
        r0_47 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_47, r1, r2, r3);
        r1_26 = guest::cpu()->r[1];
        r2_18 = guest::cpu()->r[2];
        r3_22 = guest::cpu()->r[3];
        r0_48 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_48, r1_26, r2_18, r3_22);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_24 = r4 == 0;
        guest::preempt();
    } while (!zf_24);
L_1b1738:;
    r0_49 = r5 + 0x1000u;  // (from the original)
    r0_50 = r0_49 + 0x208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_50, r1, r2, r3);
    r1_27 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_51 = r5 + 0x1000u;  // (from the original)
    r0_52 = r0_51 + 0x214u;  // (from the original)
    r10 = r0_52;
    guest::cpu()->r[13] = r13;
    call_00132478(r0_52, r1_27, r2_19, r3_23);
    r1_28 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_53 = r5 + 0x1000u;  // (from the original)
    r0_54 = r0_53 + 0x220u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_54, r1_28, r2_20, r3_24);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b1764:;
        r0_55 = r5 + (r4 << 8);
        r1_29 = r0_55 + 8u;
        guest::cpu()->r[13] = r13;
        call_0013f134(r10, r1_29, r2, r3);
        r1_30 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf_5 = r4 >= 0x12u;  // (from the original)
        guest::preempt();
    } while (!cf_5);
    guest::cpu()->r[13] = r13;
    call_002f747c(r5, r1_30, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf_25 = r9 == 0;
    if (!zf_25) {
        *gptr<u32>(r13 + 4u) = u32(r7);
        r1_31 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        *gptr<u32>(r13 + 0xcu) = u32(0x88e3d4u);  // (from the original)
        r3_25 = r13 + 8u;
        *gptr<u32>(r13 + 8u) = u32(r6);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        call_0031758c(r5, r1_31, r9, r3_25);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xad0ff0u;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x12200u;  // (from the original)
    r4 = *gptr<u32>(0x1f0cu + r5);  // (from the original)
    zf_26 = r4 == 0;
    if (zf_26) {
        goto L_1b17f8;
    }
    do {
L_1b17d8:;
        r0_56 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_56, r1, r2, r3);
        r1_32 = guest::cpu()->r[1];
        r2_21 = guest::cpu()->r[2];
        r3_26 = guest::cpu()->r[3];
        r0_57 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_57, r1_32, r2_21, r3_26);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_27 = r4 == 0;
        guest::preempt();
    } while (!zf_27);
L_1b17f8:;
    r4 = *gptr<u32>(0x1f24u + r5);  // (from the original)
    zf_28 = r4 == 0;
    if (zf_28) {
        goto L_1b1828;
    }
    do {
L_1b1808:;
        r0_58 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_58, r1, r2, r3);
        r1_33 = guest::cpu()->r[1];
        r2_22 = guest::cpu()->r[2];
        r3_27 = guest::cpu()->r[3];
        r0_59 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00138744(r0_59, r1_33, r2_22, r3_27);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf_29 = r4 == 0;
        guest::preempt();
    } while (!zf_29);
L_1b1828:;
    r0_60 = r5 + 0x1c00u;  // (from the original)
    r0_61 = r0_60 + 0x308u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_61, r1, r2, r3);
    r1_34 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    r0_62 = r5 + 0x1c00u;  // (from the original)
    r0_63 = r0_62 + 0x314u;  // (from the original)
    r11 = r0_63;
    guest::cpu()->r[13] = r13;
    call_00132478(r0_63, r1_34, r2_23, r3_28);
    r1_35 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_64 = r5 + 0x1000u;  // (from the original)
    r0_65 = r0_64 + 0xf20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_65, r1_35, r2_24, r3_29);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b1854:;
        r0_66 = r5 + (r4 << 8);
        r1_36 = r0_66 + 8u;
        guest::cpu()->r[13] = r13;
        call_0013f134(r11, r1_36, r2, r3);
        r1_37 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf_6 = r4 >= 0x1fu;  // (from the original)
        guest::preempt();
    } while (!cf_6);
    guest::cpu()->r[13] = r13;
    r0_67 = call_002f747c(r5, r1_37, r2, r3);
    r1_38 = guest::cpu()->r[1];
    zf_30 = r9 == 0;
    if (!zf_30) {
        r3_30 = r13 + 8u;
        *gptr<u32>(r13 + 0xcu) = u32(0x88e3d4u);  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(r6);
        *gptr<u32>(r13 + 4u) = u32(r7);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0_67 = call_0031758c(r5, r10, r9, r3_30);
        r1_38 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x24u;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1_38;
    guest::cpu()->r[13] = r13;
    return r0_67;
}

}  // namespace d_001b1308
GUEST_EXPORT(0x001b1308, d_001b1308::f_001b1308);

// f_001b1900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1900 {

struct __attribute__((packed)) Object_001b1900_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001b1900_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_001b1900_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001b1900_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b1900_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x007586b4, u32(u32, u32, u32, u32)> call_007586b4;  // (from the original)

u32 f_001b1900(gptr<Object_001b1900_0> arg0, gptr<Object_001b1900_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r5 = r1;
    r4 = r1;
    if (arg1->word_4 != 3u) {
        goto L_1b1998;
    }
    if (arg0->word_4 == 3u) {
        goto L_1b1988;
    }
    if (arg1->word_8 == 0) {
        goto L_1b1998;
    }
L_1b1934:;
    r3_1 = ~0u;
    r0_1 = r4 + 4u;
    r0_2 = call_003193e8(r0_1, 0x28cu, r3_1, r3_1);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4);
    if (r1 != r0_2) {
        goto L_1b1998;
    }
    r0_3 = r4 + 0x10u;  // (from the original)
    r0_4 = call_007586b4(r0_3, 0u, r2_1, r3_2);
    r1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_1b1998;
    } else {
        r4_1 = 1u;
    }
    call_00134544(r6, r5, 0x290u, r3_3);  // (from the original)
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r4_1;
L_1b1988:;
    r1 = *gptr<u32>(r4 + 8u);
    if (r1 > *gptr<u32>(r6 + 8u)) {
        guest::preempt();
        goto L_1b1934;
    }
L_1b1998:;
    r4_1 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r4_1;
}

}  // namespace d_001b1900
GUEST_EXPORT(0x001b1900, d_001b1900::f_001b1900);

// f_001b19ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b19ac {

struct __attribute__((packed)) Object_001b19ac_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_001b19ac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b19ac_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b19ac_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001b19ac_0, byte_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)

u32 f_001b19ac(gptr<Object_001b19ac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->byte_c = u8(0u);
    r0_1 = r0 + 0x10u;  // (from the original)
    r0_2 = call_002ff368(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 - 0x10u;  // (from the original)
    *gptr<u16>(r0_3 + 0xdu) = u16(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0xfu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_001b19ac
GUEST_EXPORT(0x001b19ac, d_001b19ac::f_001b19ac);

// f_001b19dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b19dc {

struct __attribute__((packed)) Object_001b19dc_0 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001b19dc_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_001b19dc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b19dc_0, word_8, 0x8);  // (from the original)


void f_001b19dc(gptr<Object_001b19dc_0> arg0, u32 r1) {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 zf_2 = 0;
    r2_1 = arg0->word_8 + r1;
    arg0->word_8 = u32(r2_1);
    r1_1 = u32(arg0->byte_2);
    zf_1 = r1_1 == 2u;
    if (!zf_1) {
        zf_1 = r1_1 == 1u;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    r1_2 = arg0->word_4;
    zf_2 = r1_2 == 0;
    if (!zf_2) {
        zf_2 = r2_1 == 0;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    if (r1_2 <= r2_1) {
        r1_2 = 2u;
        arg0->byte_2 = u8(r1_2);
    }
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_001b19dc
GUEST_EXPORT(0x001b19dc, d_001b19dc::f_001b19dc);

// f_001b1a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1a18 {

struct __attribute__((packed)) Object_001b1a18_0 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
};
GUEST_OFFSET(Object_001b1a18_0, byte_2, 0x2);  // (from the original)


void f_001b1a18(gptr<Object_001b1a18_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_2);
    if (r1_1 == 2u) {
        r1_1 = 4u;
        arg0->byte_2 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001b1a18
GUEST_EXPORT(0x001b1a18, d_001b1a18::f_001b1a18);

// f_001b1a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1a2c {

struct __attribute__((packed)) Object_001b1a2c_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_001b1a2c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b1a2c_0, byte_1, 0x1);  // (from the original)


void f_001b1a2c(gptr<Object_001b1a2c_0> arg0, u32 r1, u32 r2) {
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r2);
    return;
}

}  // namespace d_001b1a2c
GUEST_EXPORT(0x001b1a2c, d_001b1a2c::f_001b1a2c);

// f_001b1a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1a44 {

struct __attribute__((packed)) Object_001b1a44_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001b1a44_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b1a44_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_001b1a44_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_001b1a44_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b1a44_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> call_0024ea1c;  // (from the original)

u32 f_001b1a44(gptr<Object_001b1a44_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_0 = u8(0u);
    arg0->byte_1 = u8(0u);
    arg0->byte_2 = u8(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    r0_1 = r0 + 0xcu;  // (from the original)
    call_0024ea1c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001b1a44
GUEST_EXPORT(0x001b1a44, d_001b1a44::f_001b1a44);

// f_001b1b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1b40 {

struct __attribute__((packed)) Object_001b1b40_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_001b1b40_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b1b40_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_001b1b40_0, byte_2, 0x2);  // (from the original)

struct __attribute__((packed)) Object_001b1b40_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_001b1b40_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b1b40_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_001b1b40_1, byte_2, 0x2);  // (from the original)


void f_001b1b40(gptr<Object_001b1b40_0> arg0, gptr<Object_001b1b40_1> arg1) {
    u32 r1_1 = 0;
    arg0->byte_0 = u8(u32(arg1->byte_0));
    arg0->byte_1 = u8(u32(arg1->byte_1));
    r1_1 = u32(arg1->byte_2);
    arg0->byte_2 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001b1b40
GUEST_EXPORT(0x001b1b40, d_001b1b40::f_001b1b40);

// f_001b1bf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1bf8 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_001b1bf8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 ea_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_2 = 0;
    if (r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r1 >= 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r0_1 = r0 + (r1 << 2);
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_1, 0x95bfdcu, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + r1;
    *gptr<u8>(r0_2 + 0x40u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_006a5e34(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        call_002fc994(r0_3, 0x95bfdcu, r2, r3);  // (from the original)
        ea_2 = r13;
        r13 = r13 + 0x20;  // (from the original)
        r3_2 = *gptr<u32>(ea_2);
        r4_1 = *gptr<u32>(ea_2 + 4);
        r5_1 = *gptr<u32>(ea_2 + 8);
        r6_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
        r7_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
        r8_1 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
        r9_1 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
        r14 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7_1;
        guest::cpu()->r[8] = r8_1;
        guest::cpu()->r[9] = r9_1;
        return call_0059e65c(r2, r3, 1u, r3_2);
    }
    ea_3 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4_2 = *gptr<u32>(ea_3 + 4);
    r5_2 = *gptr<u32>(ea_3 + 8);
    r6_2 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r7_2 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r8_2 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    r9_2 = *gptr<u32>(ea_3 + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_001b1bf8
GUEST_EXPORT(0x001b1bf8, d_001b1bf8::f_001b1bf8);

// f_001b1c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1c70 {

inline constexpr guest::Function<0x001b1b5c, u32(u32, u32, u32, u32)> call_001b1b5c;  // (from the original)
inline constexpr guest::Function<0x001b21f4, u32(u32, u32, u32, u32)> call_001b21f4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_001b1c70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 res_2 = 0;
    u32 r0_10 = 0;
    u32 r1_1 = 0;
    u32 r0_11 = 0;
    r6 = 0u;
    r13 = r13 - 0x318u;  // (from the original)
    r5 = r0;
    r4 = r6;
    do {
L_1b1c84:;
        r0_1 = r5 + (r4 << 2);
        guest::cpu()->r[13] = r13;
        r0_2 = call_002fcaf4(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_3, r1, r2, r3);
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_4, 5u, 5u, 0u);
    r0_5 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301d0c(r0_5, 0x2fc20cu, 4u, 3u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r2_1 = r13;
    r0_6 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_6, 3u, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res_1 = r6 - 3u;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r6 ^ 3u) & (r6 ^ res_1)) >> 0x1f;  // (from the original)
    r7 = 0u;
    if (nf_1 != vf_1) {
        r10 = r13 + 0x2e8u;  // (from the original)
    }
    if (nf_1 == vf_1) {
        goto L_1b1d68;
    }
L_1b1cf0:;
    r8 = r10 + (r7 << 2);
    r9 = 0u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fcb34(r8, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 == 0x95u) {  // (from the original)
        goto L_1b1d58;
    }
    guest::cpu()->r[13] = r13;
    call_001b1b5c(r5, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b1d18:;
        r0_8 = r5 + (r4 << 2);
        guest::cpu()->r[13] = r13;
        r0_9 = call_002fcaf4(r0_8, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_9 == 0)) {
            guest::cpu()->r[13] = r13;
            call_001b21f4(r5, r4, r8, r9);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            goto L_1b1d58;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
L_1b1d58:;
    r6 = r6 + 1u;
    res_2 = r6 - 3u;
    r7 = r7 + 1u;
    if (res_2 >> 0x1f != ((r6 ^ 3u) & (r6 ^ res_2)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_1b1cf0;
    }
L_1b1d68:;
    r0_10 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_10, 0x2f777cu, 4u, 3u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_11 = r13;
    r13 = r13 + 0x318u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_001b1c70
GUEST_EXPORT(0x001b1c70, d_001b1c70::f_001b1c70);

// f_001b2114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2114 {

inline constexpr guest::Function<0x001b1b5c, u32(u32, u32, u32, u32)> call_001b1b5c;  // (from the original)
inline constexpr guest::Function<0x001b21f4, u32(u32, u32, u32, u32)> call_001b21f4;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)

u32 f_001b2114(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r7 = r2;
    r6 = r1;
    r0_1 = call_002fcb34(r1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0x95u) {  // (from the original)
        r0_2 = 1u;
        goto L_1b2180;
    }
    call_001b1b5c(r5, r1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b2144:;
        r0_3 = r5 + (r4 << 2);
        r0_4 = call_002fcaf4(r0_3, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_4 == 0)) {
            guest::cpu()->r[13] += 0x18u;  // (from the original)
            return call_001b21f4(r5, r4, r6, r7);
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r0_2 = 0u;
L_1b2180:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b2114
GUEST_EXPORT(0x001b2114, d_001b2114::f_001b2114);

// f_001b21f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b21f4 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32, u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x002fe53c, u32(u32, u32, u32, u32)> call_002fe53c;  // (from the original)
inline constexpr guest::Function<0x0030c578, u32(u32, u32, u32, u32)> call_0030c578;  // (from the original)
inline constexpr guest::Function<0x006b9914, u32(u32, u32, u32, u32)> call_006b9914;  // (from the original)
inline constexpr guest::Function<0x006b9924, u32(u32, u32, u32, u32)> call_006b9924;  // (from the original)
inline constexpr guest::Function<0x006b9c98, u32(u32, u32, u32, u32)> call_006b9c98;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;  // (from the original)
inline constexpr guest::Function<0x00768cc8, u32(u32, u32, u32, u32)> call_00768cc8;  // (from the original)

u32 f_001b21f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_7 = 0;
    u32 r0_7 = 0;
    u32 r1_8 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_9 = 0;
    u32 r0_11 = 0;
    u32 r1_10 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_11 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 zf_1 = 0;
    u32 r0_14 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 zf_2 = 0;
    u32 r0_15 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_16 = 0;
    u32 r1_12 = 0;
    u32 r0_17 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r1_13 = 0;
    u32 r0_18 = 0;
    u32 r1_14 = 0;
    u32 r1_15 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_1, r2, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fe53c(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r0_4 = r13;
        guest::cpu()->r[13] = r13;
        call_006b9914(r0_4, r1_2, r2_2, r3_2);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fcb34(r2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 != 0x4eu) {  // (from the original)
        if (r1 >= 0x10u) {  // (from the original)
            goto L_1b232c;
        }
        guest::cpu()->r[13] = r13;
        r0_6 = call_00768174(r2, r1_3, r2_3, r3_3);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r5_1 = r0 + r1;
        r6_1 = r0 + (r1 << 2);
        if (r0_6 == 0) {
            goto L_1b22b8;
        }
        r1_5 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r6_1, r1_5, r2_4, r3_4);
        r1_6 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_006b9924(r6_1, r1_6, r2_5, r3_5);
        r1_7 = guest::cpu()->r[1];
        *gptr<u8>(r5_1 + 0x40u) = u8(r3);  // (from the original)
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_7;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fae84(r0_5, r1_3, r2_3, r3_3);
    r1_8 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fb310(r0_7, r1_8, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_9 = r0_8 + 4u + 0x1764au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030c578(r0_9, 0x1764au, r2_7, r3_7);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    goto L_1b232c;
L_1b22b8:;
    guest::cpu()->r[13] = r13;
    r0_10 = call_00768cc8(r2, r1_4, r2_4, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_1b232c;
    }
    r1_9 = r13;
    r0_11 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_11, r1_9, r2_8, r3_8);
    r1_10 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_12 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fcb34(r0_12, r1_10, r2_9, r3_9);
    r1_11 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    zf_1 = r0_13 == 0x2bu;  // (from the original)
    r0_14 = r13 + 4u;
    if (!zf_1) {
        guest::cpu()->r[13] = r13;
        call_006b9924(r0_14, r1_11, r2_10, r3_10);
        r1_3 = guest::cpu()->r[1];
        r2_11 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
        zf_2 = r0_13 == 0x27u;  // (from the original)
        if (!zf_2) {
            zf_2 = r0_13 == 0x24u;  // (from the original)
        }
        if (zf_2) {
            goto L_1b2324;
        }
        if (r0_13 == 0x3fu) {  // (from the original)
            goto L_1b2354;
        }
        goto L_1b2378;
    }
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fcb9c(r0_14, r1_11, r2_10, r3_10);
    r1_3 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_1b2340;
    }
L_1b2324:;
L_1b232c:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 0u;
L_1b2340:;
    r0_16 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_006b9924(r0_16, r1_3, r2_12, r3_12);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    goto L_1b2378;
L_1b2354:;
    r1_12 = r13 + 4u;
    r0_17 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_006b9c98(r0_17, r1_12, r2_11, r3_11);
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r1_13 = r13 + 8u;
    r0_18 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_18, r1_13, r2_13, r3_13);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
L_1b2378:;
    r1_14 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6_1, r1_14, r2_11, r3_11);
    r1_15 = guest::cpu()->r[1];
    *gptr<u8>(r5_1 + 0x40u) = u8(r3);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_15;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_001b21f4
GUEST_EXPORT(0x001b21f4, d_001b21f4::f_001b21f4);

// f_001b23ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b23ac {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_001b23ac(u32 r0) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00301d0c(r0, 0x2fc20cu, 4u, 0x10u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_1;
    r4 = 0u;
    do {
L_1b23c8:;
        r0_2 = r5 + (r4 << 2);
        call_002fc8e8(r0_2, 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r5;
}

}  // namespace d_001b23ac
GUEST_EXPORT(0x001b23ac, d_001b23ac::f_001b23ac);

// f_001b23f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b23f0 {

struct __attribute__((packed)) Object_001b23f0_0 {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(Object_001b23f0_0, byte_c6, 0xc6);  // (from the original)
GUEST_OFFSET(Object_001b23f0_0, byte_c7, 0xc7);  // (from the original)

inline constexpr guest::Function<0x0022d74c, u32(u32, u32, u32, u32)> call_0022d74c;  // (from the original)
inline constexpr guest::Function<0x0022e048, u32(u32, u32, u32, u32)> call_0022e048;  // (from the original)
inline constexpr guest::Function<0x0022e05c, u32(u32, u32, u32, u32)> call_0022e05c;  // (from the original)
inline constexpr guest::Function<0x0022e070, u32(u32, u32, u32, u32)> call_0022e070;  // (from the original)
inline constexpr guest::Function<0x0022e08c, u32(u32, u32, u32, u32)> call_0022e08c;  // (from the original)
inline constexpr guest::Function<0x0022e138, u32(u32, u32, u32, u32)> call_0022e138;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32, u32)> call_00300a64;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d374, u32(u32, u32, u32, u32)> call_0056d374;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_001b23f0(gptr<Object_001b23f0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r3_7 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_8 = 0;
    u32 ea_2 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_9 = 0;
    u32 r0_8 = 0;
    u32 r3_10 = 0;
    u32 r3_11 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r3_12 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    u32 r2_7 = 0;
    u32 r3_13 = 0;
    u32 r0_12 = 0;
    u32 r1_10 = 0;
    u32 r3_14 = 0;
    u32 r1_11 = 0;
    u32 r0_13 = 0;
    u32 r3_15 = 0;
    u32 r1_12 = 0;
    u32 r0_14 = 0;
    u32 r1_13 = 0;
    u32 r1_14 = 0;
    u32 r2_8 = 0;
    u32 r3_16 = 0;
    u32 r1_15 = 0;
    u32 r2_9 = 0;
    u32 r3_17 = 0;
    u32 r0_15 = 0;
    u32 r1_16 = 0;
    r13 = r13 - 0x410u;  // (from the original)
    r7 = 0u;
    r4 = r0;
    r9 = r13 + 0x288u;  // (from the original)
    arg0->byte_c7 = u8(r7);
    arg0->byte_c6 = u8(r7);
    guest::cpu()->r[13] = r13;
    call_0022e08c(r9, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r7);
    *gptr<u32>(r13 + 0xcu) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32(r7);  // (from the original)
    *gptr<u8>(r13 + 0x38u) = u8(r7);  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x40u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(r7);  // (from the original)
    r10 = r13 + 8u;
    *gptr<u32>(r13 + 0x48u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x4cu) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x50u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x54u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x58u) = u32(r7);  // (from the original)
    r0_1 = r10 + 0x274u;  // (from the original)
    *gptr<u32>(r13 + 0x5cu) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x60u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x64u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x68u) = u32(r7);  // (from the original)
    *gptr<u8>(r13 + 0x6cu) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fc20c(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0xfffffd8cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff408(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0022e05c(r9, r1_3, r2_3, r3_3);
    r3_4 = guest::cpu()->r[3];
    r8 = r13 + 0x3c0u;  // (from the original)
    r11 = 4u;
    r1_4 = r13 + 0x3d8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_003083bc(r8, r1_4, 9u, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r6 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0_4) = u32(r6);
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_005f4bfc(r0_5, r1_5, r2_4, r3_5);
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r5 = r0_6 - 0xcu;  // (from the original)
    r0_7 = r0_6 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_7, 0x12u, r2_5, r3_6);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 4u;
    do {
L_1b24e8:;
        r3_7 = u32(*gptr<u16>(r1));
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_7);
        r3_8 = u32(*gptr<u16>(r1));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_8);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[13] = r13;
    call_0056d374(r5, r11, r2, r3_8);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_0022e070(r9, r1_6, r2_6, r3_9);
    r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00300a64(r0_8, r8, 0u, r3_10);
    *gptr<u32>(r13 + 0x3c0u) = u32(r6);  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    *gptr<u32>(r13 + 4u) = u32(r7);
    guest::cpu()->r[13] = r13;
    call_0022d74c(r9, r10, 0x88e890u, 3u);  // (from the original)
    r3_11 = guest::cpu()->r[3];
    r1_7 = r10 + 0x22cu;  // (from the original)
    r0_9 = r4 + 0x84u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_9, r1_7, 0x42u, r3_11);  // (from the original)
    r3_12 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0x38u)) == 6u) {  // (from the original)
        r0_10 = r4 + 0x42u;  // (from the original)
        *gptr<u8>(r4 + 0xc7u) = u8(u32(*gptr<u8>(r13 + 0x276u)));  // (from the original)
    } else {
        *gptr<u8>(r4 + 0xc6u) = u8(u32(*gptr<u8>(r13 + 0x276u)));  // (from the original)
        r0_10 = r4;
    }
    r1_8 = r10 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002f8574(r0_10, r1_8, 0x42u, r3_12);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fb94c(r0_11, r1_9, r2_7, r3_13);
    r1_10 = 0u;
    if (r0_12 != 0) {
        r1_10 = r0_12 + 0x55a6u;  // (from the original)
    }
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r1_10);
    guest::cpu()->r[13] = r13;
    call_0022d74c(r9, r10, 0x88e890u, 4u);  // (from the original)
    r3_14 = guest::cpu()->r[3];
    r1_11 = r10 + 0x22cu;  // (from the original)
    r0_13 = r4 + 0x84u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_13, r1_11, 0x42u, r3_14);  // (from the original)
    r3_15 = guest::cpu()->r[3];
    r1_12 = u32(*gptr<u8>(r13 + 0x276u));  // (from the original)
    if (u32(*gptr<u8>(r13 + 0x38u)) == 6u) {  // (from the original)
        *gptr<u8>(r4 + 0xc7u) = u8(r1_12);  // (from the original)
        r0_14 = r4 + 0x42u;  // (from the original)
    } else {
        *gptr<u8>(r4 + 0xc6u) = u8(r1_12);  // (from the original)
        r0_14 = r4;
    }
    r1_13 = r10 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_14, r1_13, 0x42u, r3_15);  // (from the original)
    r1_14 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0022e048(r9, r1_14, r2_8, r3_16);
    r1_15 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_15 = call_0022e138(r9, r1_15, r2_9, r3_17);
    r1_16 = guest::cpu()->r[1];
    r13 = r13 + 0x410u;  // (from the original)
    guest::cpu()->r[1] = r1_16;
    guest::cpu()->r[13] = r13;
    return r0_15;
}

}  // namespace d_001b23f0
GUEST_EXPORT(0x001b23f0, d_001b23f0::f_001b23f0);

// f_001b264c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b264c {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_001b264c(u32 r0) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00301444(r0, 0xc8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0xc7u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xc6u) = u8(0xffu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0xffu;  // (from the original)
}

}  // namespace d_001b264c
GUEST_EXPORT(0x001b264c, d_001b264c::f_001b264c);

// f_001b266c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b266c {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_001b266c(u32 r0) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00301444(r0, 0xc8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0xc7u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xc6u) = u8(0xffu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_001b266c
GUEST_EXPORT(0x001b266c, d_001b266c::f_001b266c);

// f_001b2690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2690 {

inline constexpr guest::Function<0x0024dbc0, u32(u32, u32, u32, u32)> call_0024dbc0;  // (from the original)
inline constexpr guest::Function<0x006bd910, u32(u32, u32, u32, u32)> call_006bd910;  // (from the original)

u32 f_001b2690(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 8u;
    call_006bd910(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0xa488u;  // (from the original)
    call_0024dbc0(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0xc8b0u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001b2690
GUEST_EXPORT(0x001b2690, d_001b2690::f_001b2690);

// f_001b26c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b26c8 {

inline constexpr guest::Function<0x001b266c, u32(u32, u32, u32, u32)> call_001b266c;  // (from the original)
inline constexpr guest::Function<0x0020bec8, u32(u32, u32, u32, u32)> call_0020bec8;  // (from the original)
inline constexpr guest::Function<0x0020cbf0, u32(u32, u32, u32, u32)> call_0020cbf0;  // (from the original)
inline constexpr guest::Function<0x0024a56c, u32(u32, u32, u32, u32)> call_0024a56c;  // (from the original)
inline constexpr guest::Function<0x0024a5ec, u32(u32, u32, u32, u32)> call_0024a5ec;  // (from the original)
inline constexpr guest::Function<0x0024b730, u32(u32, u32, u32, u32)> call_0024b730;  // (from the original)
inline constexpr guest::Function<0x0024d8fc, u32(u32, u32, u32, u32)> call_0024d8fc;  // (from the original)
inline constexpr guest::Function<0x0024dcc0, u32(u32, u32, u32, u32)> call_0024dcc0;  // (from the original)
inline constexpr guest::Function<0x0029b870, u32(u32, u32, u32, u32)> call_0029b870;  // (from the original)
inline constexpr guest::Function<0x002beff0, u32(u32, u32, u32, u32)> call_002beff0;  // (from the original)
inline constexpr guest::Function<0x002c0048, u32(u32, u32, u32, u32)> call_002c0048;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x00303b10, u32(u32, u32, u32, u32)> call_00303b10;  // (from the original)
inline constexpr guest::Function<0x003328ec, u32(u32, u32, u32, u32)> call_003328ec;  // (from the original)
inline constexpr guest::Function<0x005bb9f0, u32(u32, u32, u32, u32)> call_005bb9f0;  // (from the original)
inline constexpr guest::Function<0x005bd01c, u32(u32, u32, u32, u32)> call_005bd01c;  // (from the original)
inline constexpr guest::Function<0x005bd234, u32(u32, u32, u32, u32)> call_005bd234;  // (from the original)
inline constexpr guest::Function<0x005bd3fc, u32(u32, u32, u32, u32)> call_005bd3fc;  // (from the original)
inline constexpr guest::Function<0x005bdaa0, u32(u32, u32, u32, u32)> call_005bdaa0;  // (from the original)
inline constexpr guest::Function<0x005be19c, u32(u32, u32, u32, u32)> call_005be19c;  // (from the original)
inline constexpr guest::Function<0x005be8c0, u32(u32, u32, u32, u32)> call_005be8c0;  // (from the original)

u32 f_001b26c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_1 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_2 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_3 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_4 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r12_1 = 0;
    u32 r2_10 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_5 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_27 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_28 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r0_29 = 0;
    u32 r2_16 = 0;
    u32 r3_15 = 0;
    u32 r0_30 = 0;
    u32 r2_17 = 0;
    u32 r3_16 = 0;
    u32 r0_31 = 0;
    u32 r1_6 = 0;
    u32 r2_18 = 0;
    u32 r3_17 = 0;
    u32 r1_7 = 0;
    u32 r2_19 = 0;
    u32 r3_18 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_8 = 0;
    u32 r2_20 = 0;
    u32 r3_19 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_9 = 0;
    u32 r2_21 = 0;
    u32 r3_20 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r1_10 = 0;
    u32 r2_22 = 0;
    u32 r3_21 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r1_11 = 0;
    u32 r2_23 = 0;
    u32 r3_22 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r1_12 = 0;
    u32 r2_24 = 0;
    u32 r3_23 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_13 = 0;
    u32 r2_25 = 0;
    u32 r3_24 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r1_14 = 0;
    u32 r2_26 = 0;
    u32 r3_25 = 0;
    u32 r0_46 = 0;
    u32 r0_47 = 0;
    u32 r1_15 = 0;
    u32 r2_27 = 0;
    u32 r3_26 = 0;
    u32 r0_48 = 0;
    u32 r0_49 = 0;
    u32 r1_16 = 0;
    u32 r2_28 = 0;
    u32 r3_27 = 0;
    u32 r0_50 = 0;
    u32 r0_51 = 0;
    u32 r2_29 = 0;
    u32 r3_28 = 0;
    u32 r5_3 = 0;
    u32 r4_2 = 0;
    u32 r1_17 = 0;
    u32 r2_30 = 0;
    u32 r3_29 = 0;
    u32 r0_52 = 0;
    u32 r0_53 = 0;
    u32 r1_18 = 0;
    u32 r2_31 = 0;
    u32 r3_30 = 0;
    u32 r0_54 = 0;
    u32 r0_55 = 0;
    u32 r0_56 = 0;
    u32 r0_57 = 0;
    u32 r1_19 = 0;
    u32 r2_32 = 0;
    u32 r3_31 = 0;
    u32 r0_58 = 0;
    u32 r0_59 = 0;
    u32 r2_33 = 0;
    u32 r3_32 = 0;
    u32 r4_3 = 0;
    u32 r0_60 = 0;
    u32 r2_34 = 0;
    u32 r3_33 = 0;
    u32 r0_61 = 0;
    u32 r0_62 = 0;
    u32 r0_63 = 0;
    u32 r1_20 = 0;
    u32 r2_35 = 0;
    u32 r3_34 = 0;
    u32 r0_64 = 0;
    u32 r0_65 = 0;
    u32 r1_21 = 0;
    u32 r2_36 = 0;
    u32 r3_35 = 0;
    u32 r0_66 = 0;
    u32 r0_67 = 0;
    u32 r0_68 = 0;
    u32 r0_69 = 0;
    u32 r1_22 = 0;
    u32 r2_37 = 0;
    u32 r3_36 = 0;
    u32 r0_70 = 0;
    u32 r0_71 = 0;
    u32 r0_72 = 0;
    u32 r1_23 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 8u;
    r0_2 = call_0020cbf0(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x6b8cu;  // (from the original)
    call_00303534(r0_3, 0u, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r6 = 0u;
    r0_4 = r0_2 + 0x6b94u;  // (from the original)
    call_00303534(r0_4, r6, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_2 + 0x6b9cu;  // (from the original)
    call_00303534(r0_5, 0u, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_6 = r0_2 + 0x6ba4u;  // (from the original)
    call_00303534(r0_6, 0u, r2_4, r3_4);
    r0_7 = r0_2 + 0x6bd0u;  // (from the original)
    r0_8 = call_00301d0c(r0_7, 0x2fc20cu, 4u, 0x10u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0x50u;  // (from the original)
    call_0024a5ec(r0_9, r1_1, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_10 = r0_8 + 0x338u;  // (from the original)
    call_00303534(r0_10, 0u, r2_6, r3_6);
    r0_11 = r0_8 + 0x340u;  // (from the original)
    r0_12 = call_00301d0c(r0_11, 0x2fc20cu, 4u, 0x28u);  // (from the original)
    r0_13 = r0_12 + 0xa0u;  // (from the original)
    r0_14 = call_00301d0c(r0_13, 0x2fc20cu, 4u, 0x10u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 + 0x50u;  // (from the original)
    r0_16 = call_002fc20c(r0_15, r1_2, r2_7, r3_7);
    r1_3 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r0_16 + 4u;
    r0_18 = call_002fc20c(r0_17, r1_3, r2_8, r3_8);
    r0_19 = r0_18 + 4u;
    r0_20 = call_00301d0c(r0_19, 0x2ff368u, 0x280u, 0xau);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_21 = r0_20 + 0x1900u;  // (from the original)
    r0_22 = call_001b266c(r0_21, r1_4, r2_9, r3_9);
    r3 = 0xffffu;  // (from the original)
    r0 = r0_22 + 0xf2u;  // (from the original)
    r2 = 0u;
    r1 = r2;
    do {
L_1b27bc:;
        r12_1 = r0 + (r2 << 1);
        r2_10 = r2 + 1u;
        r1 = r1 + 2u;
        r5_1 = r0 + (r2_10 << 1);
        *gptr<u16>(r12_1) = u16(r3);
        res_1 = r1 - 0x20u;  // (from the original)
        r2 = r2_10 + 1u;
        *gptr<u16>(r5_1) = u16(r3);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r1 ^ 0x20u) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
    r0_23 = r0 + 0x42u;  // (from the original)
    r0_24 = call_0024d8fc(r0_23, r1, r2, r3);
    r1_5 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_25 = r0_24 + 0xa4u;  // (from the original)
    r0_26 = call_0024b730(r0_25, r1_5, r2_11, r3_10);
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r4_1 = r0_26 + 0x23cu;  // (from the original)
    r5_2 = r0_26 - 0x8ae0u;  // (from the original)
    call_00303534(r4_1, 0u, r2_12, r3_11);
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_27 = r4_1 + 8u;
    call_00303534(r0_27, 0u, r2_13, r3_12);
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_28 = r4_1 + 0x10u;  // (from the original)
    call_00303534(r0_28, 0u, r2_14, r3_13);
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_29 = r4_1 + 0x18u;  // (from the original)
    call_00303534(r0_29, 0u, r2_15, r3_14);
    r2_16 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_30 = r4_1 + 0x20u;  // (from the original)
    call_00303534(r0_30, 0u, r2_16, r3_15);
    r2_17 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_31 = r4_1 + 0x28u;  // (from the original)
    call_00303534(r0_31, 0u, r2_17, r3_16);
    r1_6 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    call_002beff0(r4_1, r1_6, r2_18, r3_17);
    r1_7 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_32 = r5_2 + 0x8d4cu;  // (from the original)
    r0_33 = call_005bd234(r0_32, r1_7, r2_19, r3_18);
    r1_8 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_34 = r0_33 + 0x10u;  // (from the original)
    r0_35 = call_005bd3fc(r0_34, r1_8, r2_20, r3_19);
    r1_9 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_36 = r0_35 + 0x10u;  // (from the original)
    r0_37 = call_005bdaa0(r0_36, r1_9, r2_21, r3_20);
    r1_10 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_38 = r0_37 + 0x18u;  // (from the original)
    r0_39 = call_005be19c(r0_38, r1_10, r2_22, r3_21);
    r1_11 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_40 = r0_39 + 0x76u;  // (from the original)
    r0_41 = call_005bb9f0(r0_40, r1_11, r2_23, r3_22);
    r1_12 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_42 = r0_41 + 0xeu;  // (from the original)
    r0_43 = call_005bd01c(r0_42, r1_12, r2_24, r3_23);
    r1_13 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_44 = r0_43 + 0xb6u;  // (from the original)
    r0_45 = call_005be8c0(r0_44, r1_13, r2_25, r3_24);
    r1_14 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_46 = r0_45 + 0x22u;  // (from the original)
    r0_47 = call_0020bec8(r0_46, r1_14, r2_26, r3_25);
    r1_15 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    r0_48 = r0_47 + 0x2au;  // (from the original)
    r0_49 = call_002fc20c(r0_48, r1_15, r2_27, r3_26);
    r1_16 = guest::cpu()->r[1];
    r2_28 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r0_50 = r0_49 + 4u;
    r0_51 = call_002fc20c(r0_50, r1_16, r2_28, r3_27);
    r2_29 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    r5_3 = r0_51 + 0x69u;  // (from the original)
    *gptr<u16>(r0_51 + 0x1cu) = u16(0x7dbu);  // (from the original)
    *gptr<u16>(r0_51 + 0x1eu) = u16(0x7dbu);  // (from the original)
    *gptr<u16>(r0_51 + 0x20u) = u16(r6);  // (from the original)
    *gptr<u8>(r0_51 + 0x22u) = u8(r6);  // (from the original)
    *gptr<u8>(r0_51 + 0x23u) = u8(r6);  // (from the original)
    r4_2 = r0_51 - 0x8f0eu;  // (from the original)
    call_00301444(r5_3, 0x22u, r2_29, r3_28);  // (from the original)
    r1_17 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    call_002c0048(r5_3, r1_17, r2_30, r3_29);
    r4 = r4_2 + 0x8f99u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r4) = u8(r6);
    goto L_1b2938;
L_1b291c:;
    if (r0 == 0) {
        goto L_1b2938;
    }
    if (r0 == 1u) {
        goto L_1b2948;
    }
    if (r0 != 2u) {
        goto L_1b2964;
    }
    goto L_1b2958;
L_1b2938:;
    *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~1u);
    goto L_1b2964;
L_1b2948:;
    *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~2u);
    goto L_1b2964;
L_1b2958:;
    *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~4u);
L_1b2964:;
    r0 = r0 + 1u;
    if (s32(r0) < s32(3u)) {
        guest::preempt();
        goto L_1b291c;
    }
    r0_52 = r4 + 0xfu;  // (from the original)
    r0_53 = call_00301d0c(r0_52, 0x2fc20cu, 4u, 0xau);  // (from the original)
    r1_18 = guest::cpu()->r[1];
    r2_31 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    r0_54 = r0_53 + 0x28u;  // (from the original)
    r0_55 = call_0024a56c(r0_54, r1_18, r2_31, r3_30);
    r0_56 = r0_55 + 0x320u;  // (from the original)
    r0_57 = call_00301d0c(r0_56, 0x2fc20cu, 4u, 0xb4u);  // (from the original)
    r1_19 = guest::cpu()->r[1];
    r2_32 = guest::cpu()->r[2];
    r3_31 = guest::cpu()->r[3];
    r0_58 = r0_57 + 0x314u;  // (from the original)
    r0_59 = call_003328ec(r0_58, r1_19, r2_32, r3_31);
    r2_33 = guest::cpu()->r[2];
    r3_32 = guest::cpu()->r[3];
    r4_3 = r0_59 - 0x9604u;  // (from the original)
    r0_60 = r0_59 + 0xde0u;  // (from the original)
    call_00301444(r0_60, 0x40u, r2_33, r3_32);  // (from the original)
    r2_34 = guest::cpu()->r[2];
    r3_33 = guest::cpu()->r[3];
    r0_61 = r4_3 + 0xa424u;  // (from the original)
    call_00301444(r0_61, 0x40u, r2_34, r3_33);  // (from the original)
    r0_62 = r4_3 + 0xa468u;  // (from the original)
    r0_63 = call_00301d0c(r0_62, 0x6bd060u, 6u, 3u);  // (from the original)
    r1_20 = guest::cpu()->r[1];
    r2_35 = guest::cpu()->r[2];
    r3_34 = guest::cpu()->r[3];
    r0_64 = r0_63 + 0x12u;  // (from the original)
    r0_65 = call_00303b10(r0_64, r1_20, r2_35, r3_34);
    r1_21 = guest::cpu()->r[1];
    r2_36 = guest::cpu()->r[2];
    r3_35 = guest::cpu()->r[3];
    r0_66 = r0_65 + 6u;
    r0_67 = call_0024dcc0(r0_66, r1_21, r2_36, r3_35);
    r0_68 = r0_67 + 0x1228u;  // (from the original)
    r0_69 = call_00301d0c(r0_68, 0x2fc20cu, 4u, 0x168u);  // (from the original)
    r1_22 = guest::cpu()->r[1];
    r2_37 = guest::cpu()->r[2];
    r3_36 = guest::cpu()->r[3];
    r0_70 = r0_69 + 0x5a0u;  // (from the original)
    r0_71 = call_0029b870(r0_70, r1_22, r2_37, r3_36);
    r0_72 = r0_71 - 0xbc50u;  // (from the original)
    r1_23 = r0_72 + 0xbc84u;  // (from the original)
    *gptr<u16>(r1_23) = u16(r6);
    *gptr<u8>(r1_23 + 2u) = u8(r6);
    *gptr<u8>(r1_23 + 3u) = u8(r6);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_23;
    return r0_72;
}

}  // namespace d_001b26c8
GUEST_EXPORT(0x001b26c8, d_001b26c8::f_001b26c8);

// f_001b2a5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2a5c {

inline constexpr guest::Function<0x00134fa4, u32(u32, u32, u32, u32)> call_00134fa4;  // (from the original)
inline constexpr guest::Function<0x00138a00, u32(u32, u32, u32, u32)> call_00138a00;  // (from the original)
inline constexpr guest::Function<0x00138a1c, u32(u32, u32, u32, u32)> call_00138a1c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_001b2a5c(u32 r0) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r4_2 = 0;
    u32 r4_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r4_4 = 0;
    u32 r0_9 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r4_5 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r4_6 = 0;
    u32 r0_17 = 0;
    u32 r4_7 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r4_8 = 0;
    u32 r0_20 = 0;
    u32 r1_4 = 0;
    u32 r0_21 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0xbc50u;  // (from the original)
    r4_1 = r0_1 - 0xbc50u;  // (from the original)
    r0_2 = r0_1 - 0x5a0u;  // (from the original)
    call_002f76ac(r0_2, 0x2f777cu, 4u, 0x168u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r4_1 + 0xa488u;  // (from the original)
    r0_4 = call_00134fa4(r0_3, r1_1, r2_1, r3_1);
    r0_5 = r0_4 - 6u;
    r0_6 = r0_5 - 0x12u;  // (from the original)
    call_002f76ac(r0_6, 0x138b90u, 6u, 3u);  // (from the original)
    r4_2 = r0_5 - 0xe76u;  // (from the original)
    call_002f76ac(r4_2, 0x2f77e8u, 0x280u, 5u);  // (from the original)
    r4_3 = r4_2 - 0x9604u;  // (from the original)
    r0_7 = r4_3 + 0x92f0u;  // (from the original)
    call_002f76ac(r0_7, 0x2f777cu, 4u, 0xb4u);  // (from the original)
    r0_8 = r4_3 + 0x8fd0u;  // (from the original)
    r4_4 = r0_8 - 0x8fd0u;  // (from the original)
    r0_9 = r0_8 - 0x28u;  // (from the original)
    call_002f76ac(r0_9, 0x2f777cu, 4u, 0xau);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_10 = r4_4 + 0x8d84u;  // (from the original)
    r0_11 = call_00138a1c(r0_10, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0x18u;  // (from the original)
    r0_13 = call_00138a00(r0_12, r1_3, r2_3, r3_3);
    r0_14 = r0_13 - 0x20u;  // (from the original)
    r4_5 = r0_14 - 0x8d4cu;  // (from the original)
    r0_15 = r0_14 - 0x1d44u;  // (from the original)
    call_002f76ac(r0_15, 0x2f77e8u, 0x280u, 0xau);  // (from the original)
    r0_16 = r4_5 + 0x7000u;  // (from the original)
    r4_6 = r0_16 - 0xf0u;  // (from the original)
    r0_17 = r0_16 - 0x50u;  // (from the original)
    call_002f76ac(r0_17, 0x2f777cu, 4u, 0x10u);  // (from the original)
    call_002f76ac(r4_6, 0x2f777cu, 4u, 0x28u);  // (from the original)
    r4_7 = r4_6 - 0x6f10u;  // (from the original)
    r0_18 = r4_7 + 0x6bd0u;  // (from the original)
    call_002f76ac(r0_18, 0x2f777cu, 4u, 0x10u);  // (from the original)
    r0_19 = r4_7 + 0x56f0u;  // (from the original)
    r4_8 = r0_19 - 0x56f0u;  // (from the original)
    r0_20 = r0_19 - 0x1acu;  // (from the original)
    call_002f76ac(r0_20, 0x2f7744u, 0x18u, 4u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r0_21 = r4_8 + 0xfffffff8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return r0_21;
}

}  // namespace d_001b2a5c
GUEST_EXPORT(0x001b2a5c, d_001b2a5c::f_001b2a5c);

// f_001b3174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3174 {


u32 f_001b3174(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    if (r1 >= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = r0 + r1;
    r1_1 = u32(*gptr<u16>(0x95c010u + (r2 << 1)));  // (from the original)
    if ((r1_1 & 0xfu) == 0) {  // (from the original)
        *gptr<u8>(r0_1 + 0x58u) = u8(r2);  // (from the original)
    } else {
        r1_1 = 0u;
        *gptr<u8>(r0_1 + 0x58u) = u8(r1_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001b3174
GUEST_EXPORT(0x001b3174, d_001b3174::f_001b3174);

// f_001b31a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b31a4 {

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)

u32 f_001b31a4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r12_1 = 0;
    u32 v_1 = 0;
    u32 r0_5 = 0;
    u32 v_2 = 0;
    u32 r2_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_2 = 0;
    u32 v_3 = 0;
    u32 r4_1 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0012ca50(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = *global_00975338;
    guest::cpu()->r[13] = r13;
    r0_3 = call_003045a8(r0_2, r1_1, r2_1, r3_1);
    r4 = r0_3;
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_00125b38(r0_4, 0x1b328cu, r0_3, 0u);  // (from the original)
    r3 = 0x95c010u;  // (from the original)
    r0 = *gptr<u32>(r13 + 4u);
    r1 = 0u;
    do {
L_1b31e4:;
        r12_1 = r3 + (r1 << 1);
        v_1 = *gptr<u8>(r0);
        r0_5 = r0 + 1u;
        r1 = r1 + 1u;
        v_2 = *gptr<u8>(r0_5);
        r0 = r0_5 + 1u;
        r2_2 = v_1 | v_2 << 8;
        *gptr<u16>(r12_1) = u16(r2_2);
        guest::preempt();
    } while (r1 < 0x100u);  // (from the original)
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_0013864c(r0_6, r1, r2_2, r3);
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    call_00125b38(r0_7, 0x1b32a8u, r4, 0u);  // (from the original)
    r2 = 0xad53a4u;  // (from the original)
    r1 = *gptr<u32>(r13 + 4u);
    r0 = 0u;
    do {
L_1b322c:;
        r3_2 = r1;
        v_3 = *gptr<u32>(r1);
        r1 = r1 + 0xfu;  // (from the original)
        r4_1 = (r0 << 4) - r0 + r2;
        r0 = r0 + 1u;
        *gptr<u32>(r4_1) = u32(v_3);
        *gptr<u32>(r4_1 + 4u) = u32(*gptr<u32>(r3_2 + 4u));
        *gptr<u32>(r4_1 + 8u) = u32(*gptr<u32>(r3_2 + 8u));
        *gptr<u16>(r4_1 + 0xcu) = u16(u32(*gptr<u16>(r3_2 + 0xcu)));  // (from the original)
        r3_3 = u32(*gptr<u8>(r3_2 + 0xeu));  // (from the original)
        *gptr<u8>(r4_1 + 0xeu) = u8(r3_3);  // (from the original)
        guest::preempt();
    } while (r0 < 0xcu);  // (from the original)
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_0013864c(r0_8, r1, r2, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_0013bb80(r0_9, r1_2, r2_3, r3_4);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_001b31a4
GUEST_EXPORT(0x001b31a4, d_001b31a4::f_001b31a4);

// f_001b32c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b32c8 {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_001b32c8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x6cu;  // (from the original)
    call_0013fac4(r0_1, 0x800u, 0xccu, guest::cpu()->r[3]);  // (from the original)
    call_002fbb30(r0, r1, 0x26cu, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x86cu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001b32c8
GUEST_EXPORT(0x001b32c8, d_001b32c8::f_001b32c8);

// f_001b3300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3300 {

inline constexpr guest::Function<0x001b3340, u32(u32, u32, u32, u32)> call_001b3340;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)

u32 f_001b3300(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001c4c14(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001b3340(r0, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_2 = r13;
    r13 = r13 + 0xcu;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_001b3300
GUEST_EXPORT(0x001b3300, d_001b3300::f_001b3300);

// f_001b3340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3340 {

struct __attribute__((packed)) Object_001b3340_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_001b3340_0, byte_69, 0x69);  // (from the original)

inline constexpr guest::Function<0x001b488c, u32(u32, u32, u32, u32)> call_001b488c;  // (from the original)
inline constexpr guest::Function<0x006aaa58, u32(u32, u32, u32, u32)> call_006aaa58;  // (from the original)
inline constexpr guest::Function<0x0070b7e8, u32(u32, u32, u32, u32)> call_0070b7e8;  // (from the original)
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> call_0070d904;  // (from the original)

u32 f_001b3340(gptr<Object_001b3340_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_2 = 0;
    u32 r11_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r8_2 = 0;
    u32 r0_10 = 0;
    u32 r3_2 = 0;
    u32 r9_2 = 0;
    u32 r10_3 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 r2_2 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r3_3 = 0;
    u32 r8_3 = 0;
    u32 r9_3 = 0;
    u32 r10_4 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_4 = 0;
    u32 r9_4 = 0;
    u32 r10_5 = 0;
    u32 r11_3 = 0;
    ea_1 = r13 - 0x30;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x2c) = u32(r14);  // (from the original)
    r13 = r13 - 0x50u;  // (from the original)
    r7 = r0;
    r6 = 0x95c010u;  // (from the original)
    if (u32(arg0->byte_69) == 8u) {
        r8 = 0u;
        goto L_1b33bc;
    }
    r1_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_0070b7e8(r7, r1_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r5 = 0u;
    if (r0_1 < 0u || r0_1 == 0) {
        goto L_1b3508;
    }
L_1b337c:;
    r0_2 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r4 = 0u;
    if (r0_2 < 0u || r0_2 == 0) {
        goto L_1b34f8;
    }
L_1b338c:;
    if (u32(*gptr<u8>(r13 + 0x18u)) == 0) {  // (from the original)
        goto L_1b3478;
    }
    r1_2 = *gptr<u32>(r13 + 0x14u) - r4 - 1u;  // (from the original)
    r0_3 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0070d904(r0_3, r1_2, r5, r3);
    goto L_1b3488;
L_1b33bc:;
    r5 = 0u;
    r6 = 0x88ebe0u + (r8 << 3);  // (from the original)
L_1b33c8:;
    r4 = 0u;
    r9 = (r5 & 0x1fu) + ((r8 & 3u) << 5);  // (from the original)
    do {
L_1b33d8:;
        r0 = *gptr<u32>(r6);
        r1 = r0 + r4;
        if (!(r1 >= 0x34u)) {  // (from the original)
            r2_1 = *gptr<u32>(r6 + 4u) + r5;
            r0_5 = *gptr<u32>(r13 + 0x24u);  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_6 = call_0070d904(r0_5, r1, r2_1, r3);
            r0_7 = r0_6 & 0xfu;  // (from the original)
            if (r0_7 >= 0xfu) {  // (from the original)
                r0_7 = 0xcu;  // (from the original)
            }
            r10_1 = r0_7 & 0xfu;  // (from the original)
            r11_1 = r4 & 0x1fu;  // (from the original)
            *gptr<u32>(r13) = u32(r8 & 3u);
            r3_1 = r5 & 0x1fu;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_001b488c(r7, r10_1, r11_1, r3_1);
            r1_3 = u32(*gptr<u16>(0x95c010u + (u32(*gptr<u8>(r7 + r10_1 + 0x58u)) << 1)));  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_006aaa58(r7, r1_3, r11_1, r9);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x20u);  // (from the original)
    r5 = r5 + 1u;
    if (r5 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_1b33c8;
    }
    r8 = r8 + 1u;
    if (r8 < 4u) {
        guest::preempt();
        goto L_1b33bc;
    }
L_1b3470:;
    r13 = r13 + 0x2cu;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_2 + 0x18);  // (from the original)
    r11_2 = *gptr<u32>(ea_2 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    guest::cpu()->r[13] = r13;
    return r0;
L_1b3478:;
    r0_8 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0070d904(r0_8, r5, r4, r3);
L_1b3488:;
    r0_9 = r0_4 & 0xfu;  // (from the original)
    if (r0_9 >= 0xfu) {  // (from the original)
        r0_9 = 0xcu;  // (from the original)
    }
    r8_2 = r0_9 & 0xfu;  // (from the original)
    r0_10 = *gptr<u32>(r13 + 0xcu) & 3u;  // (from the original)
    r3_2 = *gptr<u32>(r13 + 8u) + r4 & 0x1fu;  // (from the original)
    r9_2 = r5 & 0x1fu;  // (from the original)
    r10_3 = r3_2 + (r0_10 << 5);
    *gptr<u32>(r13) = u32(r0_10);
    guest::cpu()->r[13] = r13;
    call_001b488c(r7, r8_2, r9_2, r3_2);
    r1_4 = u32(*gptr<u16>(r6 + (u32(*gptr<u8>(r7 + r8_2 + 0x58u)) << 1)));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006aaa58(r7, r1_4, r9_2, r10_3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
    if (*gptr<u32>(r13 + 0x14u) > r4) {  // (from the original)
        guest::preempt();
        goto L_1b338c;
    }
L_1b34f8:;
    r5 = r5 + 1u;
    if (*gptr<u32>(r13 + 0x10u) > r5) {  // (from the original)
        guest::preempt();
        goto L_1b337c;
    }
L_1b3508:;
    r0 = u32(*gptr<u8>(r13 + 0x19u));  // (from the original)
    if (r0 == 0) {
        guest::preempt();
        goto L_1b3470;
    } else {
        r5 = 0u;
    }
L_1b3518:;
    r4 = 0u;
    do {
L_1b351c:;
        r0_11 = *gptr<u32>(r13 + 0x24u);  // (from the original)
        r2_2 = r4 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_12 = call_0070d904(r0_11, r5, r2_2, r3);
        r0_13 = r0_12 & 0xfu;  // (from the original)
        if (r0_13 >= 0xfu) {  // (from the original)
            r0_13 = 0xcu;  // (from the original)
        }
        r3_3 = *gptr<u32>(r13 + 0x1cu) + r4 & 0x1fu;  // (from the original)
        r8_3 = r0_13 & 0xfu;  // (from the original)
        r9_3 = r5 & 0x1fu;  // (from the original)
        *gptr<u32>(r13) = u32(3u);
        r10_4 = r3_3 + 0x60u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001b488c(r7, r8_3, r9_3, r3_3);
        r1_5 = u32(*gptr<u16>(r6 + (u32(*gptr<u8>(r7 + r8_3 + 0x58u)) << 1)));  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_14 = call_006aaa58(r7, r1_5, r9_3, r10_4);
        r1_6 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r5 = r5 + 1u;
    if (r5 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_1b3518;
    }
    r13 = r13 + 0x2cu;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_2 = *gptr<u32>(ea_3 + 4);
    r6_2 = *gptr<u32>(ea_3 + 8);
    r7_2 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_4 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_4 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    r10_5 = *gptr<u32>(ea_3 + 0x18);  // (from the original)
    r11_3 = *gptr<u32>(ea_3 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_4;
    guest::cpu()->r[9] = r9_4;
    guest::cpu()->r[10] = r10_5;
    guest::cpu()->r[11] = r11_3;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_001b3340
GUEST_EXPORT(0x001b3340, d_001b3340::f_001b3340);

// f_001b35b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b35b0 {

inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> call_001c4bc8;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)

u32 f_001b35b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 cf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r6 = r2;
    r7 = r3;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001c4c14(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (*gptr<u32>(r13 + 8u) == 0x20u) {  // (from the original)
        goto L_1b3610;
    }
    r0_2 = u32(*gptr<u8>(r0 + 0x69u));  // (from the original)
    cf_1 = r0_2 >= 0xcu;  // (from the original)
    if (!cf_1) {
        cf_1 = r0_2 >= 9u;
    }
    if (cf_1) {
        goto L_1b361c;
    }
L_1b35f0:;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_001c4bc8(r0_3, r7, r4, r6);
    r1_1 = guest::cpu()->r[1];
    goto L_1b3674;
L_1b3610:;
    if (r4 >= 0x20u) {  // (from the original)
        goto L_1b3674;
    }
    guest::preempt();
    goto L_1b35f0;
L_1b361c:;
    if (r4 >= 0x20u) {  // (from the original)
        goto L_1b3674;
    }
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_001c4bc8(r0_4, r7, r4, r6);
    r2_1 = r4 + 0x20u;  // (from the original)
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_001c4bc8(r0_5, r7, r2_1, r6);
    r2_2 = r4 + 0x40u;  // (from the original)
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_001c4bc8(r0_6, r7, r2_2, r6);
    r2_3 = r4 + 0x60u;  // (from the original)
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    call_001c4bc8(r0_7, r7, r2_3, r6);
    r1_1 = guest::cpu()->r[1];
L_1b3674:;
    r0_8 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_001b35b0
GUEST_EXPORT(0x001b35b0, d_001b35b0::f_001b35b0);

// f_001b3a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a20 {


u32 f_001b3a20(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = r0 + (r1 << 4) & 0xffu;  // (from the original)
    r1_1 = u32(*gptr<u16>(0x95c010u + (r0_1 << 1)));  // (from the original)
    if ((r1_1 & 0xfu) != 0) {  // (from the original)
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001b3a20
GUEST_EXPORT(0x001b3a20, d_001b3a20::f_001b3a20);

// f_001b3a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a44 {


u32 f_001b3a44(u32 r0, u32 r1) {
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    cf_1 = r0 >= 0xcu;  // (from the original)
    if (!cf_1) {
        cf_1 = r1 >= 0xfu;  // (from the original)
    }
    if (cf_1) {
        return 0u;
    }
    r0_1 = u32(*gptr<u8>((r0 << 4) - r0 + 0xad53a4u + r1));  // (from the original)
    return r0_1;
}

}  // namespace d_001b3a44
GUEST_EXPORT(0x001b3a44, d_001b3a44::f_001b3a44);

// f_001b3a6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a6c {


void f_001b3a6c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 cf_1 = 0;
    u32 r4_1 = 0;
    r3 = (r1 << 4) - r1;
    r2 = 0u;
    r12 = 0xad53a4u + r3;  // (from the original)
    guest::cpu()->r[13] -= 4u;
    do {
L_1b3a80:;
        cf_1 = r1 >= 0xcu;  // (from the original)
        if (!cf_1) {
            cf_1 = r2 >= 0xfu;  // (from the original)
        }
        if (!cf_1) {
            r3 = u32(*gptr<u8>(r12 + r2));
        }
        r4_1 = r0 + r2;
        if (cf_1) {
            r3 = 0u;
        }
        r2 = r2 + 1u;
        *gptr<u8>(r4_1 + 0x58u) = u8(r3);  // (from the original)
        guest::preempt();
    } while (r2 < 0xfu);  // (from the original)
    guest::cpu()->r[13] += 4u;
    return;
}

}  // namespace d_001b3a6c
GUEST_EXPORT(0x001b3a6c, d_001b3a6c::f_001b3a6c);

// f_001b3ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3ab0 {

struct __attribute__((packed)) Object_001b3ab0_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_001b3ab0_0, byte_69, 0x69);  // (from the original)


void f_001b3ab0(gptr<Object_001b3ab0_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 sco = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 cf_1 = 0;
    u32 zf_1 = 0;
    u32 cf_2 = 0;
    u32 b_1 = 0;
    u32 r3_1 = 0;
    u32 b_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r5_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r5_2 = 0;
    u32 r2_4 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 r12_1 = 0;
    u32 r6_1 = 0;
    u32 r12_2 = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r8 = 0xfu;  // (from the original)
    r1_1 = u32(arg0->byte_69);
    if (r1_1 != 8u) {
        if (r1_1 - 6u <= 1u) {
            goto L_1b3bb0;
        }
        cf_1 = r1_1 >= 0xcu;  // (from the original)
        if (!cf_1) {
            cf_1 = r1_1 >= 9u;
        }
        if (cf_1) {
            goto L_1b3bb0;
        }
        zf_1 = r1_1 == 4u;
        if (!zf_1) {
            zf_1 = r1_1 == 3u;
        }
        if (!zf_1) {
            zf_1 = r1_1 == 5u;
        }
        if (zf_1) {
            r3 = 0u;
            r9 = 0x180u;  // (from the original)
            goto L_1b3c20;
        }
        goto L_1b3c70;
    }
    r9 = 0x88e9c8u;  // (from the original)
    r11 = 1u;
    *gptr<u32>(r13) = u32(0u);
L_1b3b08:;
    r10 = 0x88e8c0u + (*gptr<u32>(r13) << 1);  // (from the original)
    r2 = 0u;
    r14 = *gptr<u32>(r13) << 0x1e >> 0x17;  // (from the original)
L_1b3b24:;
    r1 = 0u;
    r5 = r14 + ((r2 & 0x1fu) << 2);  // (from the original)
L_1b3b30:;
    cf_2 = u32(*gptr<u8>(r10)) + r1 >= 0x34u;  // (from the original)
    if (!cf_2) {
        b_1 = r1 << 5;
        r3_1 = *gptr<u32>(r9 + (r2 + b_1 << 2));
        sco = cf_2;
        b_2 = lsl_rc(r11, r1 & 0xff, &sco);  // (from the original)
        if ((r3_1 & b_2) == 0) {
            goto L_1b3b80;
        }
    }
    r3_2 = r1 & 0x1fu;  // (from the original)
    r4_1 = r0 + (r5 + (r3_2 >> 3) << 2);
    r3_3 = r3_2 << 0x1d >> 0x1b;  // (from the original)
    *gptr<u32>(r4_1 + 0x6cu) = u32(lsl_r(0xcu, r3_3 & 0xff) | *gptr<u32>(r4_1 + 0x6cu) & ~lsl_r(r8, r3_3 & 0xff));  // (from the original)
L_1b3b80:;
    r1 = r1 + 1u;
    if (r1 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_1b3b30;
    }
    r2 = r2 + 1u;
    if (r2 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_1b3b24;
    }
    r1_2 = *gptr<u32>(r13) + 1u;
    *gptr<u32>(r13) = u32(r1_2);
    if (r1_2 < 4u) {
        guest::preempt();
        goto L_1b3b08;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return;
L_1b3bb0:;
    r9 = 1u;
L_1b3bb4:;
    r3 = 0u;
    r10 = r9 << 0x1e >> 0x17;  // (from the original)
L_1b3bc0:;
    r1 = 0u;
    r4 = r10 + ((r3 & 0x1fu) << 2);  // (from the original)
    do {
L_1b3bcc:;
        r2_1 = r1 & 0x1fu;  // (from the original)
        r5_1 = r0 + (r4 + (r2_1 >> 3) << 2);
        r2_2 = r2_1 << 0x1d >> 0x1b;  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r5_1 + 0x6cu) = u32(*gptr<u32>(r5_1 + 0x6cu) & ~lsl_r(r8, r2_2 & 0xff) | lsl_r(0xcu, r2_2 & 0xff));  // (from the original)
        guest::preempt();
    } while (r1 < 0x20u);  // (from the original)
    r3 = r3 + 1u;
    if (r3 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_1b3bc0;
    }
    r9 = r9 + 1u;
    if (r9 < 4u) {
        guest::preempt();
        goto L_1b3bb4;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
L_1b3c20:;
    r1 = 0u;
    r12 = r9 + ((r3 & 0x1fu) << 2);  // (from the original)
    do {
L_1b3c2c:;
        r2_3 = r1 & 0x1fu;  // (from the original)
        r5_2 = r0 + (r12 + (r2_3 >> 3) << 2);
        r2_4 = r2_3 << 0x1d >> 0x1b;  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r5_2 + 0x6cu) = u32(*gptr<u32>(r5_2 + 0x6cu) & ~lsl_r(r8, r2_4 & 0xff) | lsl_r(0xcu, r2_4 & 0xff));  // (from the original)
        guest::preempt();
    } while (r1 < 0x20u);  // (from the original)
    r3 = r3 + 1u;
    if (r3 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_1b3c20;
    }
L_1b3c70:;
    r1 = u32(arg0->byte_69);
    r2 = 0x20u;  // (from the original)
    zf_2 = r1 == 2u;
    if (!zf_2) {
        zf_2 = r1 == 5u;
    }
    if (zf_2) {
        r2 = 0u;
        goto L_1b3c9c;
    }
    zf_3 = r1 == 1u;
    if (!zf_3) {
        zf_3 = r1 == 4u;
    }
    if (zf_3) {
        r2 = 0x10u;  // (from the original)
    } else {
        r3 = 0u;
        goto L_1b3cf0;
    }
L_1b3c9c:;
    r3 = 0u;
L_1b3ca0:;
    r1 = r2;
    if (r2 >= 0x20u) {  // (from the original)
        goto L_1b3cf0;
    }
    r4 = 0x100u + ((r3 & 0x1fu) << 2);  // (from the original)
    do {
L_1b3cb8:;
        r12_1 = r1 & 0x1fu;  // (from the original)
        r6_1 = r0 + (r4 + (r12_1 >> 3) << 2);
        r12_2 = r12_1 << 0x1d >> 0x1b;  // (from the original)
        r1 = r1 + 1u;
        *gptr<u32>(r6_1 + 0x6cu) = u32(*gptr<u32>(r6_1 + 0x6cu) & ~lsl_r(r8, r12_2 & 0xff) | lsl_r(0xcu, r12_2 & 0xff));  // (from the original)
        guest::preempt();
    } while (r1 < 0x20u);  // (from the original)
L_1b3cf0:;
    r3 = r3 + 1u;
    if (r3 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_1b3ca0;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_001b3ab0
GUEST_EXPORT(0x001b3ab0, d_001b3ab0::f_001b3ab0);

// f_001b3d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3d08 {


u32 f_001b3d08(u32 r0, u32 r1) {
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    zf_1 = r1 == 0;
    r1_1 = u32(*gptr<u16>(0x95c010u + (r0 << 1)));  // (from the original)
    if (zf_1) {
        r0_1 = 0u;
    } else {
        r0_1 = 0xfu;  // (from the original)
    }
    r0_2 = r0_1 | r1_1;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001b3d08
GUEST_EXPORT(0x001b3d08, d_001b3d08::f_001b3d08);

// f_001b3d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3d2c {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)

u32 f_001b3d2c(u32 r0) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    r1_1 = *global_00aaf14c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r1_2 = r1_1 + 0x55a6u;  // (from the original)
    r0_1 = r0 + 0x2au;  // (from the original)
    return call_001b4a8c(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001b3d2c
GUEST_EXPORT(0x001b3d2c, d_001b3d2c::f_001b3d2c);

// f_001b488c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b488c {


u32 f_001b488c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 4u;
    r2_1 = r2 & 0x1fu;  // (from the original)
    r12_1 = (*gptr<u32>(r13 + 4u) << 0x1e >> 0x17) + ((r3 & 0x1fu) << 2);  // (from the original)
    r3_1 = r2_1 << 0x1d;  // (from the original)
    r2_2 = r0 + (r12_1 + (r2_1 >> 3) << 2);
    r0_1 = r3_1 >> 0x1b;  // (from the original)
    r1_1 = lsl_r(r1 & 0xfu, r0_1 & 0xff);  // (from the original)
    r0_2 = *gptr<u32>(r2_2 + 0x6cu) & ~lsl_r(0xfu, r0_1 & 0xff) | r1_1;  // (from the original)
    *gptr<u32>(r2_2 + 0x6cu) = u32(r0_2);  // (from the original)
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_001b488c
GUEST_EXPORT(0x001b488c, d_001b488c::f_001b488c);

// f_001b48dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b48dc {

inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> call_002fe940;  // (from the original)
inline constexpr guest::Function<0x0030f52c, u32(u32, u32, u32, u32)> call_0030f52c;  // (from the original)

u32 f_001b48dc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x2au;  // (from the original)
    r0_2 = call_002fe940(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        r0_3 = r0 + 0x40u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0030f52c(r0_3, r2, r2_1, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001b48dc
GUEST_EXPORT(0x001b48dc, d_001b48dc::f_001b48dc);

// f_001b490c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b490c {

inline constexpr guest::Function<0x001b2c7c, u32(u32, u32, u32, u32)> call_001b2c7c;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006aac60, u32(u32, u32, u32, u32)> call_006aac60;  // (from the original)

u32 f_001b490c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fbb30(r0, r1, 0x870u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    *gptr<u8>(r0 + 0x86cu) = u8(0u);  // (from the original)
    r0_2 = call_002fc900(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_1b4968;
    }
    r0_3 = call_00305f44(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_1b4968;
    }
    r0_4 = call_006aac60(r0, r1_2, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_4 << 0x14 >> 0x1c == 0) {  // (from the original)
        r1_2 = 1u;
        *gptr<u8>(r0 + 0x86cu) = u8(r1_2);  // (from the original)
    }
L_1b4968:;
    call_001b2c7c(r0, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    *gptr<u16>(r0 + 0x28u) = u16(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0;
}

}  // namespace d_001b490c
GUEST_EXPORT(0x001b490c, d_001b490c::f_001b490c);

// f_001b4980: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b4980 {

struct __attribute__((packed)) Object_001b4980_0 {
    u8 unknown_0[0x67];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
    u8 unknown_6a[0x802];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Object_001b4980_0, byte_67, 0x67);  // (from the original)
GUEST_OFFSET(Object_001b4980_0, byte_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_001b4980_0, byte_69, 0x69);  // (from the original)
GUEST_OFFSET(Object_001b4980_0, byte_86c, 0x86c);  // (from the original)


void f_001b4980(gptr<Object_001b4980_0> arg0) {
    arg0->byte_67 = u8(1u);
    arg0->byte_68 = u8(0u);
    arg0->byte_69 = u8(4u);
    arg0->byte_86c = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_001b4980
GUEST_EXPORT(0x001b4980, d_001b4980::f_001b4980);

// f_001b49b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b49b0 {

inline constexpr guest::Function<0x001b2c7c, u32(u32, u32, u32, u32)> call_001b2c7c;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006aac60, u32(u32, u32, u32, u32)> call_006aac60;  // (from the original)
inline constexpr guest::Function<0x006aaf98, u32(u32, u32, u32, u32)> call_006aaf98;  // (from the original)
inline constexpr guest::Function<0x006ab0b0, u32(u32, u32, u32, u32)> call_006ab0b0;  // (from the original)

u32 f_001b49b0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
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
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 zf_1 = 0;
    u32 r2_7 = 0;
    u32 r1_6 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fbb30(r0, r1, 0x870u, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0x86cu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fc900(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1b49fc;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_00305f44(r0_2, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_1b49fc;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_006aac60(r0, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 << 0x14 >> 0x1c == 0) {  // (from the original)
        r1_2 = 1u;
        *gptr<u8>(r0 + 0x86cu) = u8(r1_2);  // (from the original)
    }
L_1b49fc:;
    guest::cpu()->r[13] = r13;
    call_006ab0b0(r0, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_006aac60(r0, r1_3, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_006aaf98(r0_5, 0u, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fc900(r0_6, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_1b4a68;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_006aac60(r1, r1_5, r2_6, r3_6);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_5 = 0xffffu;  // (from the original)
    zf_1 = r0_5 == r1_5;
    if (!zf_1) {
        zf_1 = r0_8 == r1_5;
    }
    if (zf_1) {
        goto L_1b4a68;
    } else {
        *gptr<u16>(r13) = u16(r0_5);
        *gptr<u16>(r13 + 2u) = u16(r0_8);
    }
    r2_7 = r13;
    guest::cpu()->r[13] = r13;
    call_006249b0(0x6du, 4u, r2_7, 4u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
L_1b4a68:;
    guest::cpu()->r[13] = r13;
    call_001b2c7c(r0, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    *gptr<u16>(r0 + 0x28u) = u16(0u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b49b0
GUEST_EXPORT(0x001b49b0, d_001b49b0::f_001b49b0);

// f_001b4a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b4a8c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_001b4a8c() {
    return call_002f8574(guest::cpu()->r[0], guest::cpu()->r[1], 0x2eu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001b4a8c
GUEST_EXPORT(0x001b4a8c, d_001b4a8c::f_001b4a8c);

// f_001b4b20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b4b20 {

struct __attribute__((packed)) Object_001b4b20_0 {
    u8 unknown_0[0x16];  // (not used here)
    u32 word_16;
    u32 word_1a;
    u32 word_1e;
    u32 word_22;
    u32 word_26;
    u16 half_2a;
};
GUEST_OFFSET(Object_001b4b20_0, word_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_001b4b20_0, word_1a, 0x1a);  // (from the original)
GUEST_OFFSET(Object_001b4b20_0, word_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_001b4b20_0, word_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_001b4b20_0, word_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_001b4b20_0, half_2a, 0x2a);  // (from the original)

struct __attribute__((packed)) Object_001b4b20_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u16 half_14;
};
GUEST_OFFSET(Object_001b4b20_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b4b20_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b4b20_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001b4b20_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001b4b20_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001b4b20_1, half_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0035072c, u32(u32, u32, u32, u32)> call_0035072c;  // (from the original)

u32 f_001b4b20(gptr<Object_001b4b20_0> arg0, gptr<Object_001b4b20_1> arg1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4_1 = r0 + 0x2cu;  // (from the original)
    arg0->word_16 = u32(arg1->word_0);
    arg0->word_1a = u32(arg1->word_4);
    arg0->word_1e = u32(arg1->word_8);
    arg0->word_22 = u32(arg1->word_c);
    r2_1 = arg1->word_10;
    arg0->word_26 = u32(r2_1);
    r1_1 = u32(arg1->half_14);
    arg0->half_2a = u16(r1_1);
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0035072c(r0_1, r1_1, r2_1, r3);
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(r4_1) = u8(*gptr<u32>(r13) >> 0x18);  // (from the original)
    r0_2 = *gptr<u32>(r13) >> 0x10;  // (from the original)
    *gptr<u8>(r4_1 + 1u) = u8(r0_2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_001b4b20
GUEST_EXPORT(0x001b4b20, d_001b4b20::f_001b4b20);

// f_001b545c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b545c {


u32 f_001b545c(u32 r0) {
    u32 r0_1 = 0;
    if (r0 >= 0x18fu) {  // (from the original)
        r0_1 = 0u;
    } else {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = 0x18fu;  // (from the original)
    return r0_1;
}

}  // namespace d_001b545c
GUEST_EXPORT(0x001b545c, d_001b545c::f_001b545c);

// f_001b5474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5474 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_001b5474(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 ea_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    if (r2 >= 2u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r4_1 = r0 + r2;
    ea_2 = r13 + 0x28u;  // (from the original)
    r6_1 = *gptr<u32>(ea_2);
    r7_1 = *gptr<u32>(ea_2 + 4);
    r3_1 = r13 + 4u;
    if (u32(*gptr<u8>(r4_1 + 8u)) != 0) {
        guest::cpu()->r[13] = r13;
        call_002fcbb0(r3_1, 0x2083u, r2, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else {
        r1_2 = r0 + (r2 << 2);
        guest::cpu()->r[13] = r13;
        call_002fc934(r3_1, r1_2, r2, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    if (u32(*gptr<u8>(r4_1 + 8u)) == 0) {
        *gptr<u8>(r4_1 + 8u) = u8(1u);
    } else {
        goto L_1b55a4;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(1u, r1_1, r2_1, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 != r1) {
        goto L_1b55a4;
    }
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030b654(r0_2, r1_1, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r0_4 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_5 = call_00303acc(r0_4, r1_3, r2_3, r3_4);
        if (r0_5 != 0) {
            guest::cpu()->r[13] = r13;
            call_004e9a78(r3, r6_1, 2u, r7_1);
            r1_1 = guest::cpu()->r[1];
            goto L_1b55a4;
        }
        guest::cpu()->r[13] = r13;
        call_004e9a78(r3, r6_1, 1u, r7_1);
        r1_1 = guest::cpu()->r[1];
        goto L_1b55a4;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_006a5e34(r0_3, r1_3, r2_3, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_1b55a4;
    }
    r0_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcbb0(r0_7, 0x2083u, r2_4, r3_5);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_6, r0_8, r3, r6_1);
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0059e65c(r3, r6_1, 1u, r3_6);
    r1_1 = guest::cpu()->r[1];
L_1b55a4:;
    r0_9 = r13 + 4u;
    r13 = r13 + 0xcu;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_1 = *gptr<u32>(ea_3 + 4);
    r6_2 = *gptr<u32>(ea_3 + 8);
    r7_2 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_001b5474
GUEST_EXPORT(0x001b5474, d_001b5474::f_001b5474);

// f_001b55b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b55b8 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x0056029c, u32(u32, u32, u32, u32)> call_0056029c;  // (from the original)
inline constexpr guest::Function<0x005603f0, u32(u32, u32, u32, u32)> call_005603f0;  // (from the original)

u32 f_001b55b8(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 cf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    u32 r5_1 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    r13 = r13 - 0x650u;  // (from the original)
    r1_1 = r0 - 0x2000u;  // (from the original)
    cf_1 = r0 >= 0x18fu;  // (from the original)
    r0_1 = r0 - 0x1000u;  // (from the original)
    if (cf_1) {
        cf_1 = r0_1 >= 0x10u;  // (from the original)
    }
    if (cf_1) {
        if (r1_1 >= 0x11u) {  // (from the original)
            r0_2 = 0u;
            r13 = r13 + 0x650u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_2;
        }
    }
    if (r0_1 < 0x10u) {  // (from the original)
        r6 = 0x982268u;  // (from the original)
        r5 = r0_1;
        r0_3 = *gptr<u32>(r6);
        if (r0_3 == 0) {
            goto L_1b5628;
        }
        goto L_1b566c;
    }
    if (r1_1 >= 0x11u) {  // (from the original)
        goto L_1b567c;
    }
    r6 = 0x9821f4u;  // (from the original)
    r5 = r1_1;
    r0_4 = *gptr<u32>(r6);
    if (r0_4 == 0) {
        goto L_1b56a8;
    }
    goto L_1b566c;
L_1b5628:;
    guest::cpu()->r[13] = r13;
    r0_5 = call_005603f0(r0_3, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r4 = r0_5;
    guest::cpu()->r[13] = r13;
    call_00135740(r0_5, r1_2, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (*gptr<u32>(r6) != 0) {
        goto L_1b5664;
    }
    guest::cpu()->r[13] = r13;
    call_0056029c(0xaf7f84u, 0x9821f8u, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0_6 = 0xaf7f84u;  // (from the original)
    goto L_1b56dc;
L_1b5664:;
    guest::cpu()->r[13] = r13;
    call_00137e84(r4, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
L_1b566c:;
    r0_2 = *gptr<u32>(*gptr<u32>(r6) + (r5 << 2));
    r13 = r13 + 0x650u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
L_1b567c:;
    r5_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fbb30(r5_1, 0xa83afcu, 0x63cu, guest::cpu()->r[3]);  // (from the original)
    r1_3 = *gptr<u32>(r5_1 + (r0 << 2));
    r0_7 = r1_3 + 0xau;  // (from the original)
    *gptr<u8>(r1_3 + 0xfu) = u8(0u);  // (from the original)
    r13 = r13 + 0x650u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_1b56a8:;
    guest::cpu()->r[13] = r13;
    r0_8 = call_005603f0(r0_4, r1_1, r2, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r4 = r0_8;
    guest::cpu()->r[13] = r13;
    call_00135740(r0_8, r1_4, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (*gptr<u32>(r6) != 0) {
        guest::preempt();
        goto L_1b5664;
    }
    guest::cpu()->r[13] = r13;
    call_0056029c(0xaf7f40u, 0x982180u, 0x11u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0_6 = 0xaf7f40u;  // (from the original)
L_1b56dc:;
    *gptr<u32>(r6) = u32(r0_6);
    guest::preempt();
    goto L_1b5664;
}

}  // namespace d_001b55b8
GUEST_EXPORT(0x001b55b8, d_001b55b8::f_001b55b8);

// f_001b5d74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5d74 {

inline guest::global<u32, 0x0095c360> global_0095c360;  // (from the original)
inline constexpr guest::Function<0x001b55b8, u32(u32, u32, u32, u32)> call_001b55b8;  // (from the original)

u32 f_001b5d74(u32 r0) {
    u32 res_1 = 0;
    u32 r0_1 = 0;
    res_1 = r0 - 0x2010u;  // (from the original)
    if (res_1 == 0) {
        r0_1 = *global_0095c360;
        guest::cpu()->r[1] = res_1;
        return r0_1;
    }
    return call_001b55b8(r0, res_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001b5d74
GUEST_EXPORT(0x001b5d74, d_001b5d74::f_001b5d74);

// f_001b5d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5d94 {


u32 f_001b5d94(u32 r0) {
    u32 r1_1 = 0;
    u32 cf_1 = 0;
    r1_1 = 0x18fu;  // (from the original)
    cf_1 = r0 >= r1_1;
    if (cf_1) {
        r1_1 = r0 - 0x1000u;  // (from the original)
        cf_1 = r1_1 >= 0x10u;  // (from the original)
    }
    if (!cf_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (r0 - 0x2000u >= 0x11u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_001b5d94
GUEST_EXPORT(0x001b5d94, d_001b5d94::f_001b5d94);

// f_001b5f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5f7c {

struct __attribute__((packed)) Object_001b5f7c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_001b5f7c_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002d4d30, u32(u32, u32, u32, u32)> call_002d4d30;  // (from the original)
inline constexpr guest::Function<0x002d4f3c, u32(u32, u32, u32, u32)> call_002d4f3c;  // (from the original)
inline constexpr guest::Function<0x002d5184, u32(u32, u32, u32, u32)> call_002d5184;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)

u32 f_001b5f7c(gptr<Object_001b5f7c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    arg0->byte_0 = u8(0xffu);  // (from the original)
    r0_1 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    call_002d4f3c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = r0 + 0x304u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003059f8(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0 + 0xb74u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301444(r0_3, 0x22u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_4, 0x23c6u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_5, 0x2460u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = r13;
    r0_6 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    call_002d4d30(r0_6, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = r13 + 4u;
    r0_7 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    call_002d5184(r0_7, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_8 = r13;
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_001b5f7c
GUEST_EXPORT(0x001b5f7c, d_001b5f7c::f_001b5f7c);

// f_001b625c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b625c {

inline constexpr guest::Function<0x001b6278, u32(u32, u32, u32, u32)> call_001b6278;  // (from the original)

u32 f_001b625c(u32 r0_unused, u32 r1) {
    if (s32(r1) >= s32(0xau)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return guest::cpu()->r[0];
    }
    return call_001b6278(guest::cpu()->r[0], 1u, r1, 0u);
}

}  // namespace d_001b625c
GUEST_EXPORT(0x001b625c, d_001b625c::f_001b625c);

// f_001b732c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b732c {

struct __attribute__((packed)) Object_001b732c_0 {
    u8 byte_0;
    u8 byte_1;
    u16 half_2;
    u16 half_4;
    u8 unknown_6[0x8];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 unknown_10[0x8];  // (not used here)
    u8 byte_18;
    u8 byte_19;
};
GUEST_OFFSET(Object_001b732c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, byte_f, 0xf);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, byte_19, 0x19);  // (from the original)


void f_001b732c(gptr<Object_001b732c_0> arg0) {
    u32 r2_1 = 0;
    arg0->byte_0 = u8(0u);
    r2_1 = ~0u;
    arg0->byte_1 = u8(0u);
    arg0->half_2 = u16(r2_1);
    arg0->half_4 = u16(r2_1);
    arg0->byte_e = u8(0u);
    arg0->byte_f = u8(0xc8u);  // (from the original)
    arg0->byte_18 = u8(0u);
    arg0->byte_19 = u8(0xc8u);  // (from the original)
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_001b732c
GUEST_EXPORT(0x001b732c, d_001b732c::f_001b732c);

// f_001b7530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7530 {

struct __attribute__((packed)) Object_001b7530_0 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_001b7530_0, byte_18, 0x18);  // (from the original)


u32 f_001b7530(gptr<Object_001b7530_0> arg0) {
    u32 r1_1 = 0;
    if (u32(*gptr<u8>(0xad56e0u + 0x1au)) != 0) {  // (from the original)
        guest::cpu()->r[1] = 0xad56e0u;  // (from the original)
        return 0u;
    }
    r1_1 = u32(*gptr<u8>(0xad56e0u + 0x1bu));  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (u32(arg0->byte_18) <= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001b7530
GUEST_EXPORT(0x001b7530, d_001b7530::f_001b7530);

// f_001b7568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7568 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)
inline constexpr guest::Function<0x00768738, u32(u32, u32, u32, u32)> call_00768738;  // (from the original)
inline constexpr guest::Function<0x0076e80c, u32(u32, u32, u32, u32)> call_0076e80c;  // (from the original)

u32 f_001b7568(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_10 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0 + (r1 << 2);
    r6 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r0_1 = u32(s32(s8(*gptr<u8>(*global_0095c6d0 + 0x1cu))));  // (from the original)
    r0_2 = call_006c4280(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 1u) {
        goto L_1b75c8;
    }
    zf_1 = r0_2 == 2u;
    if (!zf_1) {
        zf_1 = r0_2 == 3u;
    }
    if (!zf_1) {
        zf_1 = r0_2 == 0xau;  // (from the original)
    }
    if (zf_1) {
        goto L_1b7600;
    }
    *gptr<u32>(r4 + 0x10u) = u32(*gptr<u32>(r4 + 0x10u) + r2);  // (from the original)
L_1b75b4:;
    if (*gptr<u32>(r4 + 0x10u) == r6) {  // (from the original)
        r0_3 = 0u;
    } else {
        r0_3 = 1u;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_3;
L_1b75c8:;
    *gptr<u32>(r4 + 0x10u) = u32(*gptr<u32>(r4 + 0x10u) + r2);  // (from the original)
    r0_4 = *global_0095c6d0 + 0x10u;  // (from the original)
    r0_5 = call_0076e80c(r0_4, r3, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        guest::preempt();
        goto L_1b75b4;
    }
    *gptr<u32>(r4 + 0x20u) = u32(*gptr<u32>(r4 + 0x20u) + r2);  // (from the original)
    guest::preempt();
    goto L_1b75b4;
L_1b7600:;
    r0_6 = *global_0095c6d0 + 0x10u;  // (from the original)
    r1 = u32(*gptr<u8>(r0_6 + 0xdu));  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_1b7644;
        }
        if (r1 != 2u) {
            guest::preempt();
            goto L_1b75b4;
        }
        r0_7 = call_0076e80c(r0_6, r3, r2_1, r3_1);
        r1 = guest::cpu()->r[1];
        if (r0_7 == 0) {
            guest::preempt();
            goto L_1b75b4;
        }
    }
    r0_8 = *gptr<u32>(r4 + 0x10u) + r2;  // (from the original)
    goto L_1b767c;
L_1b7644:;
    r0_9 = call_002fcaf4(r3, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        r1 = (r2 << 7) - (r2 + (r2 << 1));
        r0_8 = *gptr<u32>(r4 + 0x10u) + (r1 << 3);  // (from the original)
        goto L_1b767c;
    }
    r0_10 = call_00768738(r3, r1_1, r2_2, r3_2);
    r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r0_8 = r0_10 * r2 + r1;
L_1b767c:;
    *gptr<u32>(r4 + 0x10u) = u32(r0_8);  // (from the original)
    guest::preempt();
    goto L_1b75b4;
}

}  // namespace d_001b7568
GUEST_EXPORT(0x001b7568, d_001b7568::f_001b7568);

// f_001b7688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7688 {

inline guest::global<u32, 0x0095c71c> global_0095c71c;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_001b7688(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (*global_0095c71c != 0) {
        r0_3 = *global_0095c71c;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_3;
    }
    r0_1 = call_00131280(0x3cu, r0, 4u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r4_1 = r0_1;
    if (r0_1 == 0) {
        *gptr<u32>(0x95c71cu + 4u) = u32(r4_1);  // (from the original)
        r4_1 = 0u;
        goto L_1b76d8;
    }
    r0_2 = call_001320cc(r0_1, r0, 3u, guest::cpu()->r[3]);
    r1 = 0x8f9a24u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r1);
    *gptr<u32>(0x95c71cu + 4u) = u32(r0_2);  // (from the original)
L_1b76d8:;
    *global_0095c71c = u32(r4_1);
    r0_3 = *global_0095c71c;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_001b7688
GUEST_EXPORT(0x001b7688, d_001b7688::f_001b7688);

// f_001b7b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7b90 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x004e4510, u32(u32, u32, u32, u32)> call_004e4510;  // (from the original)
inline constexpr guest::Function<0x005b49e0, u32(u32, u32, u32, u32)> call_005b49e0;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00625690, u32(u32, u32, u32, u32)> call_00625690;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)

u32 f_001b7b90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r4_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_0095c6d0;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = u32(s32(s8(*gptr<u8>(r0_1 + 0x1cu))));  // (from the original)
    r0_3 = call_006c4280(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 != 9u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    r0_4 = call_002f74c8(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = call_005b49e0(r0_4, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return r0_5;
    }
    r0_6 = call_002f74c8(r0_5, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x81u;  // (from the original)
    r4_1 = r0 + u32(s32(r0_7 + (r0_7 >> 0x1f)) >> 1);  // (from the original)
    r0_8 = u32(*gptr<u8>(r4_1 + 0x34u));  // (from the original)
    if (r0_8 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return r0_8;
    }
    r0_9 = call_002f74c8(r0_8, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = call_004e4510(r0_9, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return r0_10;
    }
    *gptr<u8>(r4_1 + 0x34u) = u8(1u);  // (from the original)
    r0_11 = call_00300904(1u, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_7;
        return r0_11;
    }
    r0_12 = call_00625690(r0_11, r1_7, r2_7, r3_7);
    r1_8 = guest::cpu()->r[1];
    if (r0_12 <= 1u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_8;
        return r0_12;
    }
    guest::cpu()->r[13] += 8u;
    return call_006249b0(0x45u, 4u, 0u, 0u);  // (from the original)
}

}  // namespace d_001b7b90
GUEST_EXPORT(0x001b7b90, d_001b7b90::f_001b7b90);

// f_001b88c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b88c0 {

inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> call_00135520;  // (from the original)

u32 f_001b88c0(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *gptr<u32>(0x951480u + 8u) - 1u;  // (from the original)
    *gptr<u32>(0x951480u + 8u) = u32(r0_1);  // (from the original)
    if (r0_1 != 0 && r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_00135520(0x8575c8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_2 & 0x80000000u;  // (from the original)
    nf_1 = r1_1 >> 0x1f;  // (from the original)
    if (nf_1 != 0u) {
        r1_1 = r0_2 & 0x3fc00u;  // (from the original)
    }
    if (nf_1 != 0u) {
        r1_1 = r1_1 >> 0xa;  // (from the original)
    }
    *gptr<u8>(0x951480u + 1u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001b88c0
GUEST_EXPORT(0x001b88c0, d_001b88c0::f_001b88c0);

// f_001b8978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b8978 {

inline guest::global<u8, 0x00951480> global_00951480;  // (from the original)
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32, u32)> call_001b8008;  // (from the original)
inline constexpr guest::Function<0x001b88c0, u32(u32, u32, u32, u32)> call_001b88c0;  // (from the original)
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)

u32 f_001b8978(u32 r0_unused, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_002ff8b0(4u, r1, r2, guest::cpu()->r[3]);
    r5 = r0_1;
    r0_2 = call_001b9254(0u, 0u, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf_1 = r0_2 == 1u;
    if (zf_1) {
        r7 = 0x9514b0u;  // (from the original)
    }
    r6 = r0_2;
    if (zf_1) {
        r4 = 0u;
    } else {
        goto L_1b89fc;
    }
    do {
L_1b89ac:;
        r0_3 = *gptr<u32>(*gptr<u32>(r7 + (r4 << 2)) + (r5 << 2));
        r0_4 = call_001b8008(r0_3, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_4 != 1u) {
            r6 = r0_4;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(3u));
    r0_5 = u32(*global_00951480);
    if (r0_5 != 0) {
        if (r0_5 == 1u) {
            call_001b88c0(r0_5, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
    }
    r0_2 = r6;
L_1b89fc:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b8978
GUEST_EXPORT(0x001b8978, d_001b8978::f_001b8978);

// f_001b8a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b8a08 {

struct __attribute__((packed)) Object_001b8a08_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001b8a08_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32, u32)> call_0012f598;  // (from the original)

u32 f_001b8a08(gptr<Object_001b8a08_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 res_2 = 0;
    u32 r0_11 = 0;
    u32 res_3 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r0_14 = 0;
    u32 res_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_0;
    r1_1 = r0_1 & 0x80000000u;  // (from the original)
    if (r1_1 >> 0x1f == (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r1_2 = (r0_1 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_2 != 0x11u) {  // (from the original)
        goto L_1b8a50;
    }
    r0_2 = r0_1 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0_2) < s32(0x64u)) {  // (from the original)
        goto L_1b8a50;
    }
    if (s32(r0_2) <= s32(0xb3u)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 5u;
    }
L_1b8a50:;
    r0_3 = *gptr<u32>(r0);
    r1_3 = (r0_3 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_3 != 0x11u) {  // (from the original)
        goto L_1b8a7c;
    }
    r0_4 = r0_3 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0_4) < s32(0xb4u)) {  // (from the original)
        goto L_1b8a7c;
    }
    if (s32(r0_4) <= s32(0xc7u)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 8u;
    }
L_1b8a7c:;
    r0_5 = *gptr<u32>(r0);
    if ((r0_5 & 0x3fc00u) >> 0xa != 0x11u) {  // (from the original)
        goto L_1b8ab0;
    }
    r0_6 = r0_5 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0_6) < s32(0x186u)) {  // (from the original)
        goto L_1b8ab0;
    }
    if (s32(r0_6) < s32(0x190u)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0x186u;  // (from the original)
        return 3u;
    }
L_1b8ab0:;
    r0_7 = *gptr<u32>(r0);
    if ((r0_7 & 0x3fc00u) >> 0xa != 0x11u) {  // (from the original)
        goto L_1b8b24;
    }
    r0_8 = r0_7 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0_8) < s32(0xe6u)) {  // (from the original)
        goto L_1b8b24;
    }
    if (s32(r0_8) >= s32(0x154u)) {  // (from the original)
        goto L_1b8b24;
    }
    r0_9 = *gptr<u32>(r0);
    r1_4 = (r0_9 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_4 != 0x11u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 8u;
    }
    r0_10 = r0_9 << 0x16 >> 0x16;  // (from the original)
    res_1 = r0_10 - 0x118u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0_10 ^ 0x118u) & (r0_10 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r1_4 = 0x14eu;  // (from the original)
        res_2 = r1_4 - r0_10;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        vf_1 = ((r1_4 ^ r0_10) & (r1_4 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 8u;
    }
    r0_11 = *gptr<u32>(r0);
    res_3 = r0_11 >> 0x1f;  // (from the original)
    if (res_3 != 0) {
        call_0012f598(r0_11, 0x1b8b10u, res_3, guest::cpu()->r[3]);  // (from the original)
    }
    goto L_1b8b54;
L_1b8b24:;
    r0_12 = *gptr<u32>(r0);
    r1_5 = (r0_12 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_5 != 0x11u) {  // (from the original)
        goto L_1b8b54;
    }
    r0_13 = r0_12 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0_13) < s32(0xc8u)) {  // (from the original)
        goto L_1b8b54;
    }
    if (s32(r0_13) <= s32(0xdbu)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 4u;
    }
L_1b8b54:;
    r1_6 = 0x1b8b5cu;  // (from the original)
    r0_14 = *gptr<u32>(r0);
    res_4 = r0_14 >> 0x1f;  // (from the original)
    if (res_4 != 0) {
        call_0012f598(r0_14, r1_6, res_4, guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_6;
    return 8u;
}

}  // namespace d_001b8a08
GUEST_EXPORT(0x001b8a08, d_001b8a08::f_001b8a08);

// f_001b9400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9400 {

inline guest::global<u8, 0x00951480> global_00951480;  // (from the original)
inline guest::global<u32, 0x0095bf70> global_0095bf70;  // (from the original)
inline constexpr guest::Function<0x001b8e44, u32(u32, u32, u32, u32)> call_001b8e44;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00345bc4, u32(u32, u32, u32, u32)> call_00345bc4;  // (from the original)
inline constexpr guest::Function<0x003463a4, u32(u32, u32, u32, u32)> call_003463a4;  // (from the original)
inline constexpr guest::Function<0x005ca648, u32(u32, u32, u32, u32)> call_005ca648;  // (from the original)
inline constexpr guest::Function<0x005cad0c, u32(u32, u32, u32, u32)> call_005cad0c;  // (from the original)

u32 f_001b9400(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    u32 res_1 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_005ca648(r0, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_2 = call_005cad0c(r0_1, r1_1, r2_1, r3_1);
        *gptr<u32>(r13) = u32(0u);
        r0_3 = *global_0095bf70;
        guest::cpu()->r[13] = r13;
        r0_4 = call_001b8e44(r0_3, 0u, r0_2, 8u);
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 1u) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return r0_4;
        }
    }
    r1_3 = u32(*global_00951480);
    if (r1_3 != 1u) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r0_5 = u32(*gptr<u8>(0x951480u + 1u));  // (from the original)
    if (r0_5 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0_6 = call_002fb328(r0_5, r1_3, r2, r3);
        r1_4 = guest::cpu()->r[1];
        r2_2 = *gptr<u32>(r0_6);
        r3_2 = *gptr<u32>(r0_6 + 4);
        guest::cpu()->r[13] = r13;
        r0_7 = call_003463a4(0x1b94a8u, r1_4, r2_2, r3_2);  // (from the original)
    } else {
        guest::cpu()->r[13] = r13;
        r0_7 = call_00345bc4(0x1b94a8u, r1_3, r2, r3);  // (from the original)
    }
    res_1 = r0_7 & 0x80000000u;  // (from the original)
    r1_3 = res_1;
    if (!(res_1 >> 0x1f)) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r1_5 = r0_7 & 0x3fc00u;  // (from the original)
    r1_6 = r1_5 >> 0xa;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return 8u;
}

}  // namespace d_001b9400
GUEST_EXPORT(0x001b9400, d_001b9400::f_001b9400);

// f_001b94b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b94b0 {

inline guest::global<u8, 0x009500e0> global_009500e0;  // (from the original)
inline guest::global<u8, 0x009500e1> global_009500e1;  // (from the original)
inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32, u32)> call_0012f598;  // (from the original)
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32, u32)> call_001b8008;  // (from the original)
inline constexpr guest::Function<0x001b88c0, u32(u32, u32, u32, u32)> call_001b88c0;  // (from the original)
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;  // (from the original)
inline constexpr guest::Function<0x001b94b0, u32(u32, u32, u32, u32)> call_001b94b0;  // (from the original)
inline constexpr guest::Function<0x00345c20, u32(u32, u32, u32, u32)> call_00345c20;  // (from the original)

u32 f_001b94b0(u32 r0_unused, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r8 = 0x951480u;  // (from the original)
    r0_1 = u32(*gptr<u8>(r8));
    if (r0_1 == 2u) {
        *gptr<u8>(r8) = u8(1u);
        goto L_1b94e0;
    }
    if (r0_1 == 0) {
        r6 = 1u;
        goto L_1b952c;
    }
    if (r0_1 != 1u) {
        goto L_1b9514;
    }
L_1b94e0:;
    r0_2 = u32(*gptr<u8>(r8 + 1u));
    if (r0_2 != 0) {
        call_001b88c0(r0_2, r1, r2, guest::cpu()->r[3]);
    }
    r0_3 = call_00345c20(0x10u, 1u, 1u, guest::cpu()->r[3]);  // (from the original)
    res_1 = r0_3 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_1b9514;
    }
    res_2 = r0_3 >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        call_0012f598(r0_3, 0x1b9510u, res_2, guest::cpu()->r[3]);  // (from the original)
    }
L_1b9514:;
    *global_009500e0 = u8(0u);
    *global_009500e1 = u8(0u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = 0x9500e1u;  // (from the original)
    return 0u;
L_1b952c:;
    r0_4 = call_001b9254(0u, 0u, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_4 == 1u) {
        r5 = 0x951494u;  // (from the original)
        r4 = 0u;
        goto L_1b9560;
    }
    if (r0_4 == 3u) {
        call_001b94b0(r0_4, r1, r2, guest::cpu()->r[3]);
    }
    guest::preempt();
    goto L_1b9514;
L_1b9560:;
    r0_5 = *gptr<u32>(r5 + (r4 << 2));
    call_001b8008(r0_5, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r4 + 1u;
    if (s32(r4) < s32(7u)) {
        guest::preempt();
        goto L_1b9560;
    }
    r7 = 0x9514b0u;  // (from the original)
    r5 = 0u;
L_1b957c:;
    r4 = 0u;
    do {
L_1b9580:;
        r0_6 = *gptr<u32>(*gptr<u32>(r7 + (r4 << 2)) + (r5 << 2));
        call_001b8008(r0_6, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(3u));
    r5 = r5 + 1u;
    if (s32(r5) < s32(4u)) {
        guest::preempt();
        goto L_1b957c;
    }
    if (r6 == 0) {
        guest::preempt();
        goto L_1b9514;
    }
    r0_7 = u32(*gptr<u8>(r8));
    if (r0_7 != 0) {
        if (r0_7 == 1u) {
            call_001b88c0(r0_7, r1, r2, guest::cpu()->r[3]);
        }
        guest::preempt();
        goto L_1b9514;
    }
    guest::preempt();
    goto L_1b9514;
}

}  // namespace d_001b94b0
GUEST_EXPORT(0x001b94b0, d_001b94b0::f_001b94b0);

// f_001b95f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b95f8 {

inline guest::global<u8, 0x00951480> global_00951480;  // (from the original)
inline constexpr guest::Function<0x001b85c0, u32(u32, u32, u32, u32)> call_001b85c0;  // (from the original)
inline constexpr guest::Function<0x001b88c0, u32(u32, u32, u32, u32)> call_001b88c0;  // (from the original)
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;  // (from the original)
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32, u32)> call_0053dffc;  // (from the original)

u32 f_001b95f8(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r4_1 = r1;
    r13 = r13 - 0x28u;  // (from the original)
    r6_1 = r0;
    if (r1 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_001b9254(0u, 0u, 0u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 1u) {
            r0_1 = 0u;
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
    }
    r5_1 = 0u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_001b85c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        r2_2 = r13;
        *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
        *gptr<u32>(r13 + 4) = u32(r6_1);
        r1_1 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_0053dffc(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        if (r0_3 != 0) {
            r5_1 = u32(s32(s8(*gptr<u8>(r13 + 0x10u))));  // (from the original)
        }
    }
    if (r4_1 == 0) {
        goto L_1b968c;
    }
    r0_4 = u32(*global_00951480);
    if (r0_4 != 0) {
        if (r0_4 == 1u) {
            guest::cpu()->r[13] = r13;
            call_001b88c0(r0_4, r1, r2_1, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        goto L_1b968c;
    }
L_1b968c:;
    r0_1 = r5_1;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_001b95f8
GUEST_EXPORT(0x001b95f8, d_001b95f8::f_001b95f8);

// f_001b96a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b96a0 {

inline guest::global<u32, 0x0088e5bc> global_0088e5bc;  // (from the original)
inline guest::global<u32, 0x0095bf70> global_0095bf70;  // (from the original)
inline constexpr guest::Function<0x001b8b74, u32(u32, u32, u32, u32)> call_001b8b74;  // (from the original)
inline constexpr guest::Function<0x005cad0c, u32(u32, u32, u32, u32)> call_005cad0c;  // (from the original)

u32 f_001b96a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005cad0c(r0, r1, r2, r3);
    r3_1 = *global_0088e5bc;
    r0_2 = *global_0095bf70;
    guest::cpu()->r[13] += 8u;
    return call_001b8b74(r0_2, 0u, r0_1, r3_1);
}

}  // namespace d_001b96a0
GUEST_EXPORT(0x001b96a0, d_001b96a0::f_001b96a0);

// f_001b97dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b97dc {

inline guest::global<u8, 0x00951480> global_00951480;  // (from the original)
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32, u32)> call_001b8008;  // (from the original)
inline constexpr guest::Function<0x001b88c0, u32(u32, u32, u32, u32)> call_001b88c0;  // (from the original)
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;  // (from the original)
inline constexpr guest::Function<0x001b94b0, u32(u32, u32, u32, u32)> call_001b94b0;  // (from the original)

u32 f_001b97dc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = 1u;
    r7 = r0;
    if (r0 == 0) {
        goto L_1b981c;
    }
    r0_1 = call_001b9254(0u, 0u, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0_1;
    if (r0_1 == 1u) {
        goto L_1b981c;
    }
    if (r6 == 3u) {
        call_001b94b0(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0_1 = 1u;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_1b981c:;
    r5 = 0x951494u;  // (from the original)
    r4 = 0u;
    do {
L_1b9824:;
        r0_2 = *gptr<u32>(r5 + (r4 << 2));
        r0_3 = call_001b8008(r0_2, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_3 != 1u) {
            r6 = r0_3;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(7u));
    r8 = 0x9514b0u;  // (from the original)
    r5 = 0u;
L_1b9848:;
    r4 = 0u;
    do {
L_1b984c:;
        r0_4 = *gptr<u32>(*gptr<u32>(r8 + (r4 << 2)) + (r5 << 2));
        r0_5 = call_001b8008(r0_4, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_5 != 1u) {
            r6 = r0_5;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(3u));
    r5 = r5 + 1u;
    if (s32(r5) < s32(4u)) {
        guest::preempt();
        goto L_1b9848;
    }
    if (r7 == 0) {
        goto L_1b98ac;
    }
    r0_6 = u32(*global_00951480);
    if (r0_6 != 0) {
        if (r0_6 == 1u) {
            call_001b88c0(r0_6, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        goto L_1b98ac;
    }
L_1b98ac:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_001b97dc
GUEST_EXPORT(0x001b97dc, d_001b97dc::f_001b97dc);

// f_001b9a88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9a88 {


u32 f_001b9a88(u32 r0) {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    r2_1 = ((r0 & 0x40u) >> 6) + ((r0 & 0x80u) >> 7);  // (from the original)
    r1_1 = ((r0 & 0x10u) >> 4) + ((r0 & 0x20u) >> 5);  // (from the original)
    r3_1 = ((r0 & 4u) >> 2) + ((r0 & 8u) >> 3);
    r2_2 = r2_1 + (r2_1 << 3);
    r1_2 = r1_1 + (r1_1 << 3) + (r2_2 + (r2_2 << 1)) + (r3_1 + (r3_1 << 1));
    r0_1 = (r0 & 1u) + ((r0 & 2u) >> 1) + r1_2;
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_001b9a88
GUEST_EXPORT(0x001b9a88, d_001b9a88::f_001b9a88);

// f_001b9ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9ae4 {

inline constexpr guest::Function<0x001b9a88, u32(u32, u32, u32, u32)> call_001b9a88;  // (from the original)

u32 f_001b9ae4(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r0_15 = 0;
    res_1 = r0 - 0xeu;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r0 ^ 0xeu) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    guest::cpu()->r[13] -= 4u;
    if (zf_1) {
        goto L_1b9b98;
    }
    if (!!zf_1 || nf_1 != vf_1) {
        if (r0 == 0xbu) {  // (from the original)
            goto L_1b9b2c;
        }
        if (r0 == 0xcu) {  // (from the original)
            goto L_1b9b58;
        }
        if (r0 != 0xdu) {  // (from the original)
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1;
            return 0x9fu;  // (from the original)
        }
        goto L_1b9b78;
    }
    if (r0 == 0x10u) {  // (from the original)
        goto L_1b9bb8;
    }
    if (r0 == 0x1bu) {  // (from the original)
        goto L_1b9bd8;
    }
    if (r0 != 0x1cu) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return 0x9fu;  // (from the original)
    }
    goto L_1b9bf8;
L_1b9b2c:;
    r0_1 = call_001b9a88(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 < 0x1bu) {  // (from the original)
        r0_2 = u32(*gptr<u16>(0x865168u + (r0_1 << 1)));  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = 0x865168u;  // (from the original)
        return r0_2;
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_1;
    return 0x9fu;  // (from the original)
L_1b9b58:;
    r0_4 = call_001b9a88(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 >= 0x1bu) {  // (from the original)
        r0_5 = 0xa6u;  // (from the original)
    } else {
        r1_2 = 0x86519eu;  // (from the original)
        r0_5 = u32(*gptr<u16>(r1_2 + (r0_4 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_2;
    return r0_5;
L_1b9b78:;
    r0_6 = call_001b9a88(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_6 >= 0x1bu) {  // (from the original)
        r0_7 = 0xacu;  // (from the original)
    } else {
        r1_3 = 0x8651d4u;  // (from the original)
        r0_7 = u32(*gptr<u16>(r1_3 + (r0_6 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_3;
    return r0_7;
L_1b9b98:;
    r0_8 = call_001b9a88(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_8 >= 0x51u) {  // (from the original)
        r0_9 = 0xb2u;  // (from the original)
    } else {
        r1_4 = 0x86520au;  // (from the original)
        r0_9 = u32(*gptr<u16>(r1_4 + (r0_8 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_4;
    return r0_9;
L_1b9bb8:;
    r0_10 = call_001b9a88(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_10 >= 9u) {
        r0_11 = 0xbbu;  // (from the original)
    } else {
        r1_5 = 0x8652acu;  // (from the original)
        r0_11 = u32(*gptr<u16>(r1_5 + (r0_10 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_5;
    return r0_11;
L_1b9bd8:;
    r0_12 = call_001b9a88(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_12 >= 0x1bu) {  // (from the original)
        r0_13 = 0xbeu;  // (from the original)
    } else {
        r1_6 = 0x8652beu;  // (from the original)
        r0_13 = u32(*gptr<u16>(r1_6 + (r0_12 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_6;
    return r0_13;
L_1b9bf8:;
    r0_14 = call_001b9a88(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    if (r0_14 >= 0x1bu) {  // (from the original)
        r0_15 = 0xc4u;  // (from the original)
    } else {
        r1_7 = 0x8652f4u;  // (from the original)
        r0_15 = u32(*gptr<u16>(r1_7 + (r0_14 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_7;
    return r0_15;
}

}  // namespace d_001b9ae4
GUEST_EXPORT(0x001b9ae4, d_001b9ae4::f_001b9ae4);

// f_001b9c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c34 {


u32 f_001b9c34(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 - 0xbeu;  // (from the original)
    if (r0_1 >= 6u) {
        r0_2 = 0u;
    } else {
        r1 = 0x865360u;  // (from the original)
        r0_2 = u32(*gptr<u16>(r1 + (r0_1 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b9c34
GUEST_EXPORT(0x001b9c34, d_001b9c34::f_001b9c34);

// f_001b9c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c54 {


u32 f_001b9c54(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 - 0xb2u;  // (from the original)
    if (r0_1 >= 8u) {
        r0_2 = 0u;
    } else {
        r1 = 0x865350u;  // (from the original)
        r0_2 = u32(*gptr<u16>(r1 + (r0_1 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b9c54
GUEST_EXPORT(0x001b9c54, d_001b9c54::f_001b9c54);

// f_001b9c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c74 {


u32 f_001b9c74(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 - 0xa6u;  // (from the original)
    if (r0_1 >= 6u) {
        r0_2 = 0u;
    } else {
        r1 = 0x865338u;  // (from the original)
        r0_2 = u32(*gptr<u16>(r1 + (r0_1 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b9c74
GUEST_EXPORT(0x001b9c74, d_001b9c74::f_001b9c74);

// f_001b9c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c94 {


u32 f_001b9c94(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 - 0x9fu;  // (from the original)
    if (r0_1 >= 7u) {
        r0_2 = 0u;
    } else {
        r1 = 0x86532au;  // (from the original)
        r0_2 = u32(*gptr<u16>(r1 + (r0_1 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b9c94
GUEST_EXPORT(0x001b9c94, d_001b9c94::f_001b9c94);

// f_001b9cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cb4 {


u32 f_001b9cb4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 - 0xacu;  // (from the original)
    if (r0_1 >= 6u) {
        r0_2 = 0u;
    } else {
        r1 = 0x865344u;  // (from the original)
        r0_2 = u32(*gptr<u16>(r1 + (r0_1 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b9cb4
GUEST_EXPORT(0x001b9cb4, d_001b9cb4::f_001b9cb4);

// f_001b9cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cd4 {


u32 f_001b9cd4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 - 0xc4u;  // (from the original)
    if (r0_1 >= 4u) {
        r0_2 = 0u;
    } else {
        r1 = 0x865160u;  // (from the original)
        r0_2 = u32(*gptr<u16>(r1 + (r0_1 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b9cd4
GUEST_EXPORT(0x001b9cd4, d_001b9cd4::f_001b9cd4);

// f_001b9cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cf4 {


u32 f_001b9cf4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r0 - 0xbbu;  // (from the original)
    if (r0_1 >= 3u) {
        r0_2 = 0u;
    } else {
        r1 = 0x86515au;  // (from the original)
        r0_2 = u32(*gptr<u16>(r1 + (r0_1 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b9cf4
GUEST_EXPORT(0x001b9cf4, d_001b9cf4::f_001b9cf4);

// f_001b9d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9d14 {

inline constexpr guest::Function<0x002fc25c, u32(u32, u32, u32, u32)> call_002fc25c;  // (from the original)

u32 f_001b9d14(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = 0u;
    r8 = r0;
    r9 = r1;
    r10 = 0x9528b8u;  // (from the original)
    r4 = r6;
    r5 = r6;
    do {
L_1b9d30:;
        r0_1 = lsr_r(r9, r4 & 0xff);  // (from the original)
        r1_1 = lsr_r(r8, r4 & 0xff);  // (from the original)
        r2_1 = r0_1 & 1u;
        r3_1 = r1_1 & 1u;
        r0_2 = r2_1 + ((r0_1 & 2u) >> 1);
        r1_2 = r3_1 + ((r1_1 & 2u) >> 1);
        r7_1 = r1_2 + (r0_2 + (r0_2 << 1));
        r0_3 = call_002fc25c(4u, r1_2, r2_1, r3_1);
        r1_3 = r4 + 2u;
        r5 = r5 + 1u;
        r0_4 = lsl_r(u32(*gptr<u8>(*gptr<u32>(r10 + (r7_1 << 2)) + r0_3)), r4 & 0xff) | r6;  // (from the original)
        r4 = uxth(r1_3);
        r6 = uxth(r0_4);
        guest::preempt();
    } while (r5 < 4u);
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r6;
}

}  // namespace d_001b9d14
GUEST_EXPORT(0x001b9d14, d_001b9d14::f_001b9d14);

// f_001ba7c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ba7c0 {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline guest::global<u32, 0x00a18590> global_00a18590;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001ba7c0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    u32 r6_1 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    float S4_4 = 0;
    float S5_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    float S3_5 = 0;
    float S4_5 = 0;
    float S5_5 = 0;
    u32 r2_7 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    float S3_6 = 0;
    float S4_6 = 0;
    float S5_6 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_6 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    float S2_7 = 0;
    float S3_7 = 0;
    float S4_7 = 0;
    float S5_7 = 0;
    u32 ea_2 = 0;
    u32 r2_8 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_9 = 0;
    u32 r3_7 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    float S2_8 = 0;
    float S3_8 = 0;
    float S4_8 = 0;
    float S5_8 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_8 = 0;
    float S0_9 = 0;
    float S1_9 = 0;
    float S2_9 = 0;
    float S3_9 = 0;
    float S4_9 = 0;
    float S5_9 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r3_9 = 0;
    float S0_10 = 0;
    float S1_10 = 0;
    float S2_10 = 0;
    float S3_10 = 0;
    float S4_10 = 0;
    float S5_10 = 0;
    u32 r5_1 = 0;
    u32 r0_16 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r3_10 = 0;
    float S0_11 = 0;
    float S1_11 = 0;
    float S2_11 = 0;
    float S3_11 = 0;
    float S4_11 = 0;
    float S5_11 = 0;
    u32 r0_17 = 0;
    u32 r1_10 = 0;
    u32 r2_13 = 0;
    u32 r3_11 = 0;
    float S0_12 = 0;
    float S1_12 = 0;
    float S2_12 = 0;
    float S3_12 = 0;
    float S4_12 = 0;
    float S5_12 = 0;
    u32 r2_14 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_11 = 0;
    u32 r1_12 = 0;
    u32 r2_15 = 0;
    u32 r3_12 = 0;
    float S0_13 = 0;
    float S1_13 = 0;
    float S2_13 = 0;
    float S3_13 = 0;
    float S4_13 = 0;
    float S5_13 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r3_13 = 0;
    float S0_14 = 0;
    float S1_14 = 0;
    float S2_14 = 0;
    float S3_14 = 0;
    float S4_14 = 0;
    float S5_14 = 0;
    u32 ea_3 = 0;
    u32 r2_16 = 0;
    u32 r0_22 = 0;
    u32 r1_13 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r2_17 = 0;
    u32 r3_14 = 0;
    float S0_15 = 0;
    float S1_15 = 0;
    float S2_15 = 0;
    float S3_15 = 0;
    float S4_15 = 0;
    float S5_15 = 0;
    u32 r0_25 = 0;
    u32 r1_14 = 0;
    u32 r2_18 = 0;
    u32 r3_15 = 0;
    float S0_16 = 0;
    float S1_16 = 0;
    float S2_16 = 0;
    float S3_16 = 0;
    float S4_16 = 0;
    float S5_16 = 0;
    u32 r1_15 = 0;
    u32 r2_19 = 0;
    u32 r3_16 = 0;
    float S0_17 = 0;
    float S1_17 = 0;
    float S2_17 = 0;
    float S3_17 = 0;
    float S4_17 = 0;
    float S5_17 = 0;
    u32 r4_1 = 0;
    u32 r0_26 = 0;
    u32 r1_16 = 0;
    u32 r2_20 = 0;
    u32 r3_17 = 0;
    float S0_18 = 0;
    float S1_18 = 0;
    float S2_18 = 0;
    float S3_18 = 0;
    float S4_18 = 0;
    float S5_18 = 0;
    u32 r0_27 = 0;
    u32 r1_17 = 0;
    u32 r2_21 = 0;
    u32 r3_18 = 0;
    float S0_19 = 0;
    float S1_19 = 0;
    float S2_19 = 0;
    float S3_19 = 0;
    float S4_19 = 0;
    float S5_19 = 0;
    u32 r2_22 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_18 = 0;
    u32 r1_19 = 0;
    u32 r2_23 = 0;
    u32 r3_19 = 0;
    float S0_20 = 0;
    float S1_20 = 0;
    float S2_20 = 0;
    float S3_20 = 0;
    float S4_20 = 0;
    float S5_20 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_20 = 0;
    float S0_21 = 0;
    float S1_21 = 0;
    r13 = r13 - 0x148u;  // (from the original)
    ea_1 = r13 + 4u;
    *gptr<u32>(ea_1) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0x100u);  // (from the original)
    r2_1 = u32(*global_008c9f1c);
    *gptr<u8>(0x100u + (r13 + 0xbu)) = u8(r2_1);  // (from the original)
    r0_1 = u32(*global_008c9f1c);
    r1_1 = r13;
    *gptr<u32>(r13) = u32(0x9048b0u);  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(r0_1);  // (from the original)
    r0_2 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0_3 = call_0054a644(r0_2, r1_1, r2_1, r3);
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    S4_1 = guest::cpu()->s[4];
    S5_1 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    r0_4 = call_00544fec(r0_3, 0x1baa00u, r2_2, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    call_00544f18(r0_4, r1_2, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    r6_1 = r13;
    r0_5 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    call_0012ca50(r0_5, r1_3, r2_4, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    S4_4 = guest::cpu()->s[4];
    S5_4 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    guest::cpu()->s[4] = S4_4;
    guest::cpu()->s[5] = S5_4;
    r0_6 = call_0056a4a4(r6_1, r1_4, r2_5, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    S4_5 = guest::cpu()->s[4];
    S5_5 = guest::cpu()->s[5];
    if (r0_6 == 0) {
        goto L_1ba868;
    }
    r2_7 = *global_00952cac;
    r0_7 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    r0_8 = call_005bf790(r0_7, r6_1, r2_7, 0x20u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    S4_5 = guest::cpu()->s[4];
    S5_5 = guest::cpu()->s[5];
    if (r0_8 == 0) {
        goto L_1ba868;
    }
    r0_9 = *gptr<u32>(r13 + 0x114u);  // (from the original)
    S0_6 = std::bit_cast<float>(*gptr<u32>(r0_9));
    S1_6 = std::bit_cast<float>(*gptr<u32>(r0_9 + 4));
    S2_6 = std::bit_cast<float>(*gptr<u32>(r0_9 + 8));
    S3_6 = std::bit_cast<float>(*gptr<u32>(r0_9 + 0xc));  // (from the original)
    S4_6 = std::bit_cast<float>(*gptr<u32>(r0_9 + 0x10));  // (from the original)
    S5_6 = std::bit_cast<float>(*gptr<u32>(r0_9 + 0x14));  // (from the original)
    r0_10 = r13 + 0x110u;  // (from the original)
    *global_00a18590 = u32(std::bit_cast<u32>(S0_6));
    *gptr<u32>(0xa18590u + 4) = u32(std::bit_cast<u32>(S1_6));  // (from the original)
    *gptr<u32>(0xa18590u + 8) = u32(std::bit_cast<u32>(S2_6));  // (from the original)
    *gptr<u32>(0xa18590u + 0xc) = u32(std::bit_cast<u32>(S3_6));  // (from the original)
    *gptr<u32>(0xa18590u + 0x10) = u32(std::bit_cast<u32>(S4_6));  // (from the original)
    *gptr<u32>(0xa18590u + 0x14) = u32(std::bit_cast<u32>(S5_6));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_6;
    guest::cpu()->s[3] = S3_6;
    guest::cpu()->s[4] = S4_6;
    guest::cpu()->s[5] = S5_6;
    call_0013864c(r0_10, r1_5, r2_6, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    S4_5 = guest::cpu()->s[4];
    S5_5 = guest::cpu()->s[5];
L_1ba868:;
    r0_11 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    call_0013bb80(r0_11, r1_5, r2_6, r3_5);
    r3_6 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    S3_7 = guest::cpu()->s[3];
    S4_7 = guest::cpu()->s[4];
    S5_7 = guest::cpu()->s[5];
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea_2 + 4) = u32(0x100u);  // (from the original)
    r2_8 = u32(*global_008c9f1c);
    *gptr<u8>(0x100u + (r13 + 0xbu)) = u8(r2_8);  // (from the original)
    r0_12 = u32(*global_008c9f1c);
    r1_6 = r13;
    *gptr<u32>(r13) = u32(0x9048b0u);  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(r0_12);  // (from the original)
    r0_13 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    guest::cpu()->s[2] = S2_7;
    guest::cpu()->s[3] = S3_7;
    guest::cpu()->s[4] = S4_7;
    guest::cpu()->s[5] = S5_7;
    r0_14 = call_0054a644(r0_13, r1_6, r2_8, r3_6);
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    S2_8 = guest::cpu()->s[2];
    S3_8 = guest::cpu()->s[3];
    S4_8 = guest::cpu()->s[4];
    S5_8 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    guest::cpu()->s[2] = S2_8;
    guest::cpu()->s[3] = S3_8;
    guest::cpu()->s[4] = S4_8;
    guest::cpu()->s[5] = S5_8;
    r0_15 = call_00544fec(r0_14, 0x1baa1cu, r2_9, r3_7);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    S1_9 = guest::cpu()->s[1];
    S2_9 = guest::cpu()->s[2];
    S3_9 = guest::cpu()->s[3];
    S4_9 = guest::cpu()->s[4];
    S5_9 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    guest::cpu()->s[1] = S1_9;
    guest::cpu()->s[2] = S2_9;
    guest::cpu()->s[3] = S3_9;
    guest::cpu()->s[4] = S4_9;
    guest::cpu()->s[5] = S5_9;
    call_00544f18(r0_15, r1_7, r2_10, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
    S1_10 = guest::cpu()->s[1];
    S2_10 = guest::cpu()->s[2];
    S3_10 = guest::cpu()->s[3];
    S4_10 = guest::cpu()->s[4];
    S5_10 = guest::cpu()->s[5];
    r5_1 = r13;
    r0_16 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    guest::cpu()->s[1] = S1_10;
    guest::cpu()->s[2] = S2_10;
    guest::cpu()->s[3] = S3_10;
    guest::cpu()->s[4] = S4_10;
    guest::cpu()->s[5] = S5_10;
    call_0012ca50(r0_16, r1_8, r2_11, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    S0_11 = guest::cpu()->s[0];
    S1_11 = guest::cpu()->s[1];
    S2_11 = guest::cpu()->s[2];
    S3_11 = guest::cpu()->s[3];
    S4_11 = guest::cpu()->s[4];
    S5_11 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    guest::cpu()->s[1] = S1_11;
    guest::cpu()->s[2] = S2_11;
    guest::cpu()->s[3] = S3_11;
    guest::cpu()->s[4] = S4_11;
    guest::cpu()->s[5] = S5_11;
    r0_17 = call_0056a4a4(r5_1, r1_9, r2_12, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    S1_12 = guest::cpu()->s[1];
    S2_12 = guest::cpu()->s[2];
    S3_12 = guest::cpu()->s[3];
    S4_12 = guest::cpu()->s[4];
    S5_12 = guest::cpu()->s[5];
    if (r0_17 == 0) {
        goto L_1ba928;
    }
    r2_14 = *global_00952cac;
    r0_18 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    guest::cpu()->s[1] = S1_12;
    guest::cpu()->s[2] = S2_12;
    guest::cpu()->s[3] = S3_12;
    guest::cpu()->s[4] = S4_12;
    guest::cpu()->s[5] = S5_12;
    r0_19 = call_005bf790(r0_18, r5_1, r2_14, 0x20u);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    S1_12 = guest::cpu()->s[1];
    S2_12 = guest::cpu()->s[2];
    S3_12 = guest::cpu()->s[3];
    S4_12 = guest::cpu()->s[4];
    S5_12 = guest::cpu()->s[5];
    if (r0_19 == 0) {
        goto L_1ba928;
    }
    r1_11 = *gptr<u32>(r13 + 0x114u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    guest::cpu()->s[1] = S1_12;
    guest::cpu()->s[2] = S2_12;
    guest::cpu()->s[3] = S3_12;
    guest::cpu()->s[4] = S4_12;
    guest::cpu()->s[5] = S5_12;
    call_002f8574(0xa185a8u, r1_11, 0x3cu, r3_11);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    S0_13 = guest::cpu()->s[0];
    S1_13 = guest::cpu()->s[1];
    S2_13 = guest::cpu()->s[2];
    S3_13 = guest::cpu()->s[3];
    S4_13 = guest::cpu()->s[4];
    S5_13 = guest::cpu()->s[5];
    r0_20 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_13;
    guest::cpu()->s[1] = S1_13;
    guest::cpu()->s[2] = S2_13;
    guest::cpu()->s[3] = S3_13;
    guest::cpu()->s[4] = S4_13;
    guest::cpu()->s[5] = S5_13;
    call_0013864c(r0_20, r1_12, r2_15, r3_12);
    r1_10 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    S1_12 = guest::cpu()->s[1];
    S2_12 = guest::cpu()->s[2];
    S3_12 = guest::cpu()->s[3];
    S4_12 = guest::cpu()->s[4];
    S5_12 = guest::cpu()->s[5];
L_1ba928:;
    r0_21 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    guest::cpu()->s[1] = S1_12;
    guest::cpu()->s[2] = S2_12;
    guest::cpu()->s[3] = S3_12;
    guest::cpu()->s[4] = S4_12;
    guest::cpu()->s[5] = S5_12;
    call_0013bb80(r0_21, r1_10, r2_13, r3_11);
    r3_13 = guest::cpu()->r[3];
    S0_14 = guest::cpu()->s[0];
    S1_14 = guest::cpu()->s[1];
    S2_14 = guest::cpu()->s[2];
    S3_14 = guest::cpu()->s[3];
    S4_14 = guest::cpu()->s[4];
    S5_14 = guest::cpu()->s[5];
    ea_3 = r13 + 4u;
    *gptr<u32>(ea_3) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea_3 + 4) = u32(0x100u);  // (from the original)
    r2_16 = u32(*global_008c9f1c);
    *gptr<u8>(0x100u + (r13 + 0xbu)) = u8(r2_16);  // (from the original)
    r0_22 = u32(*global_008c9f1c);
    r1_13 = r13;
    *gptr<u32>(r13) = u32(0x9048b0u);  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(r0_22);  // (from the original)
    r0_23 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_14;
    guest::cpu()->s[1] = S1_14;
    guest::cpu()->s[2] = S2_14;
    guest::cpu()->s[3] = S3_14;
    guest::cpu()->s[4] = S4_14;
    guest::cpu()->s[5] = S5_14;
    r0_24 = call_0054a644(r0_23, r1_13, r2_16, r3_13);
    r2_17 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    S0_15 = guest::cpu()->s[0];
    S1_15 = guest::cpu()->s[1];
    S2_15 = guest::cpu()->s[2];
    S3_15 = guest::cpu()->s[3];
    S4_15 = guest::cpu()->s[4];
    S5_15 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_15;
    guest::cpu()->s[1] = S1_15;
    guest::cpu()->s[2] = S2_15;
    guest::cpu()->s[3] = S3_15;
    guest::cpu()->s[4] = S4_15;
    guest::cpu()->s[5] = S5_15;
    r0_25 = call_00544fec(r0_24, 0x1baa34u, r2_17, r3_14);  // (from the original)
    r1_14 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    S0_16 = guest::cpu()->s[0];
    S1_16 = guest::cpu()->s[1];
    S2_16 = guest::cpu()->s[2];
    S3_16 = guest::cpu()->s[3];
    S4_16 = guest::cpu()->s[4];
    S5_16 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_16;
    guest::cpu()->s[1] = S1_16;
    guest::cpu()->s[2] = S2_16;
    guest::cpu()->s[3] = S3_16;
    guest::cpu()->s[4] = S4_16;
    guest::cpu()->s[5] = S5_16;
    call_00544f18(r0_25, r1_14, r2_18, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    S0_17 = guest::cpu()->s[0];
    S1_17 = guest::cpu()->s[1];
    S2_17 = guest::cpu()->s[2];
    S3_17 = guest::cpu()->s[3];
    S4_17 = guest::cpu()->s[4];
    S5_17 = guest::cpu()->s[5];
    r4_1 = r13;
    r0_26 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_17;
    guest::cpu()->s[1] = S1_17;
    guest::cpu()->s[2] = S2_17;
    guest::cpu()->s[3] = S3_17;
    guest::cpu()->s[4] = S4_17;
    guest::cpu()->s[5] = S5_17;
    call_0012ca50(r0_26, r1_15, r2_19, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    S0_18 = guest::cpu()->s[0];
    S1_18 = guest::cpu()->s[1];
    S2_18 = guest::cpu()->s[2];
    S3_18 = guest::cpu()->s[3];
    S4_18 = guest::cpu()->s[4];
    S5_18 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_18;
    guest::cpu()->s[1] = S1_18;
    guest::cpu()->s[2] = S2_18;
    guest::cpu()->s[3] = S3_18;
    guest::cpu()->s[4] = S4_18;
    guest::cpu()->s[5] = S5_18;
    r0_27 = call_0056a4a4(r4_1, r1_16, r2_20, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    S0_19 = guest::cpu()->s[0];
    S1_19 = guest::cpu()->s[1];
    S2_19 = guest::cpu()->s[2];
    S3_19 = guest::cpu()->s[3];
    S4_19 = guest::cpu()->s[4];
    S5_19 = guest::cpu()->s[5];
    if (r0_27 == 0) {
        goto L_1ba9e8;
    }
    r2_22 = *global_00952cac;
    r0_28 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_19;
    guest::cpu()->s[1] = S1_19;
    guest::cpu()->s[2] = S2_19;
    guest::cpu()->s[3] = S3_19;
    guest::cpu()->s[4] = S4_19;
    guest::cpu()->s[5] = S5_19;
    r0_29 = call_005bf790(r0_28, r4_1, r2_22, 0x20u);  // (from the original)
    r1_17 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    S0_19 = guest::cpu()->s[0];
    S1_19 = guest::cpu()->s[1];
    S2_19 = guest::cpu()->s[2];
    S3_19 = guest::cpu()->s[3];
    S4_19 = guest::cpu()->s[4];
    S5_19 = guest::cpu()->s[5];
    if (r0_29 == 0) {
        goto L_1ba9e8;
    }
    r1_18 = *gptr<u32>(r13 + 0x114u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_19;
    guest::cpu()->s[1] = S1_19;
    guest::cpu()->s[2] = S2_19;
    guest::cpu()->s[3] = S3_19;
    guest::cpu()->s[4] = S4_19;
    guest::cpu()->s[5] = S5_19;
    call_002f8574(0xa185e4u, r1_18, 0x38u, r3_18);  // (from the original)
    r1_19 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    S0_20 = guest::cpu()->s[0];
    S1_20 = guest::cpu()->s[1];
    S2_20 = guest::cpu()->s[2];
    S3_20 = guest::cpu()->s[3];
    S4_20 = guest::cpu()->s[4];
    S5_20 = guest::cpu()->s[5];
    r0_30 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_20;
    guest::cpu()->s[1] = S1_20;
    guest::cpu()->s[2] = S2_20;
    guest::cpu()->s[3] = S3_20;
    guest::cpu()->s[4] = S4_20;
    guest::cpu()->s[5] = S5_20;
    call_0013864c(r0_30, r1_19, r2_23, r3_19);
    r1_17 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    S0_19 = guest::cpu()->s[0];
    S1_19 = guest::cpu()->s[1];
    S2_19 = guest::cpu()->s[2];
    S3_19 = guest::cpu()->s[3];
    S4_19 = guest::cpu()->s[4];
    S5_19 = guest::cpu()->s[5];
L_1ba9e8:;
    r0_31 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_19;
    guest::cpu()->s[1] = S1_19;
    guest::cpu()->s[2] = S2_19;
    guest::cpu()->s[3] = S3_19;
    guest::cpu()->s[4] = S4_19;
    guest::cpu()->s[5] = S5_19;
    r0_32 = call_0013bb80(r0_31, r1_17, r2_21, r3_18);
    r1_20 = guest::cpu()->r[1];
    S0_21 = guest::cpu()->s[0];
    S1_21 = guest::cpu()->s[1];
    r13 = r13 + 0x148u;  // (from the original)
    guest::cpu()->r[1] = r1_20;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_21;
    guest::cpu()->s[1] = S1_21;
    return r0_32;
}

}  // namespace d_001ba7c0
GUEST_EXPORT(0x001ba7c0, d_001ba7c0::f_001ba7c0);

// f_001baa4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baa4c {

inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001baa4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0012ca50(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056a4a4(r1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1baab4;
    }
    r2_3 = *global_00952cac;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_005bf790(r0_3, r1, r2_3, 0x20u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_1baab4;
    }
    r1_3 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    call_002f8574(r0, r1_3, 0x78u, r3_2);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_0013864c(r0_5, r1_4, r2_4, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_1baab4:;
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0013bb80(r0_6, r1_2, r2_2, r3_2);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x14u;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_001baa4c
GUEST_EXPORT(0x001baa4c, d_001baa4c::f_001baa4c);

// f_001baac8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baac8 {

inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001baac8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    call_0012ca50(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    S4_1 = guest::cpu()->s[4];
    S5_1 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    r0_2 = call_0056a4a4(r1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    if (r0_2 == 0) {
        goto L_1bab2c;
    }
    r2_3 = *global_00952cac;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    r0_4 = call_005bf790(r0_3, r1, r2_3, 0x20u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    if (r0_4 == 0) {
        goto L_1bab2c;
    }
    r0_5 = *gptr<u32>(r13 + 4u);
    S0_3 = std::bit_cast<float>(*gptr<u32>(r0_5));
    S1_3 = std::bit_cast<float>(*gptr<u32>(r0_5 + 4));
    S2_3 = std::bit_cast<float>(*gptr<u32>(r0_5 + 8));
    S3_3 = std::bit_cast<float>(*gptr<u32>(r0_5 + 0xc));  // (from the original)
    S4_3 = std::bit_cast<float>(*gptr<u32>(r0_5 + 0x10));  // (from the original)
    S5_3 = std::bit_cast<float>(*gptr<u32>(r0_5 + 0x14));  // (from the original)
    r0_6 = r13;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1_3));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2_3));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S3_3));  // (from the original)
    *gptr<u32>(r0 + 0x10) = u32(std::bit_cast<u32>(S4_3));  // (from the original)
    *gptr<u32>(r0 + 0x14) = u32(std::bit_cast<u32>(S5_3));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    call_0013864c(r0_6, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
L_1bab2c:;
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    r0_8 = call_0013bb80(r0_7, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    r13 = r13 + 0x14u;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return r0_8;
}

}  // namespace d_001baac8
GUEST_EXPORT(0x001baac8, d_001baac8::f_001baac8);

// f_001bab40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bab40 {

inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001bab40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0012ca50(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056a4a4(r1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1baba8;
    }
    r2_3 = *global_00952cac;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_005bf790(r0_3, r1, r2_3, 0x20u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_1baba8;
    }
    r1_3 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    call_002f8574(r0, r1_3, 0x3cu, r3_2);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_0013864c(r0_5, r1_4, r2_4, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_1baba8:;
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0013bb80(r0_6, r1_2, r2_2, r3_2);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x14u;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_001bab40
GUEST_EXPORT(0x001bab40, d_001bab40::f_001bab40);

// f_001babbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001babbc {

inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001babbc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0012ca50(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056a4a4(r1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1bac24;
    }
    r2_3 = *global_00952cac;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_005bf790(r0_3, r1, r2_3, 0x20u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_1bac24;
    }
    r1_3 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    call_002f8574(r0, r1_3, 0x38u, r3_2);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_0013864c(r0_5, r1_4, r2_4, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_1bac24:;
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0013bb80(r0_6, r1_2, r2_2, r3_2);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x14u;  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_001babbc
GUEST_EXPORT(0x001babbc, d_001babbc::f_001babbc);

// f_001bac38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac38 {

struct __attribute__((packed)) Object_001bac38_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_001bac38_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001bac38_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001bac38_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001bac38_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001bac38_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001bac38_0, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x00a18590> global_00a18590;  // (from the original)

void f_001bac38(gptr<Object_001bac38_0> arg0) {
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    S0_1 = std::bit_cast<float>(*global_00a18590);
    S1_1 = std::bit_cast<float>(*gptr<u32>(0xa18590u + 4));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(0xa18590u + 8));  // (from the original)
    S3_1 = std::bit_cast<float>(*gptr<u32>(0xa18590u + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(0xa18590u + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(0xa18590u + 0x14));  // (from the original)
    arg0->word_0 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_4 = u32(std::bit_cast<u32>(S1_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_c = u32(std::bit_cast<u32>(S3_1));
    arg0->word_10 = u32(std::bit_cast<u32>(S4_1));
    arg0->word_14 = u32(std::bit_cast<u32>(S5_1));
    guest::cpu()->r[1] = 0xa18590u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_001bac38
GUEST_EXPORT(0x001bac38, d_001bac38::f_001bac38);

// f_001bac4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac4c {

struct __attribute__((packed)) Object_001bac4c_0 {
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
};
GUEST_OFFSET(Object_001bac4c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_38, 0x38);  // (from the original)


u32 f_001bac4c(gptr<Object_001bac4c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    r2_1 = 0xa18590u + 0x18u;  // (from the original)
    r1_1 = 0xa18590u + 0x38u;  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x1c));  // (from the original)
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r2_1))));
    arg0->word_4 = u32(std::bit_cast<u32>(S1_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_c = u32(std::bit_cast<u32>(S3_1));
    arg0->word_10 = u32(std::bit_cast<u32>(S4_1));
    arg0->word_14 = u32(std::bit_cast<u32>(S5_1));
    arg0->word_18 = u32(std::bit_cast<u32>(S6_1));
    arg0->word_1c = u32(std::bit_cast<u32>(S7_1));
    r0_1 = r0 + 0x20u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 8));
    S3_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0xc));  // (from the original)
    S4_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x10));  // (from the original)
    S5_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x14));  // (from the original)
    S6_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x18));  // (from the original)
    arg0->word_20 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_24 = u32(std::bit_cast<u32>(S1_2));
    arg0->word_28 = u32(std::bit_cast<u32>(S2_2));
    arg0->word_2c = u32(std::bit_cast<u32>(S3_2));
    arg0->word_30 = u32(std::bit_cast<u32>(S4_2));
    arg0->word_34 = u32(std::bit_cast<u32>(S5_2));
    arg0->word_38 = u32(std::bit_cast<u32>(S6_2));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return r0_1;
}

}  // namespace d_001bac4c
GUEST_EXPORT(0x001bac4c, d_001bac4c::f_001bac4c);

// f_001bac74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac74 {

struct __attribute__((packed)) Object_001bac74_0 {
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
};
GUEST_OFFSET(Object_001bac74_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_34, 0x34);  // (from the original)


u32 f_001bac74(gptr<Object_001bac74_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    r2_1 = 0xa18590u + 0x54u;  // (from the original)
    r1_1 = 0xa18590u + 0x74u;  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r2_1 + 0x1c));  // (from the original)
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r2_1))));
    arg0->word_4 = u32(std::bit_cast<u32>(S1_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_c = u32(std::bit_cast<u32>(S3_1));
    arg0->word_10 = u32(std::bit_cast<u32>(S4_1));
    arg0->word_14 = u32(std::bit_cast<u32>(S5_1));
    arg0->word_18 = u32(std::bit_cast<u32>(S6_1));
    arg0->word_1c = u32(std::bit_cast<u32>(S7_1));
    r0_1 = r0 + 0x20u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 8));
    S3_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0xc));  // (from the original)
    S4_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x10));  // (from the original)
    S5_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x14));  // (from the original)
    arg0->word_20 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_24 = u32(std::bit_cast<u32>(S1_2));
    arg0->word_28 = u32(std::bit_cast<u32>(S2_2));
    arg0->word_2c = u32(std::bit_cast<u32>(S3_2));
    arg0->word_30 = u32(std::bit_cast<u32>(S4_2));
    arg0->word_34 = u32(std::bit_cast<u32>(S5_2));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return r0_1;
}

}  // namespace d_001bac74
GUEST_EXPORT(0x001bac74, d_001bac74::f_001bac74);

// f_001bac9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac9c {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_001bac9c(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00301444(0xa21f6cu, 0x20u, r2, guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2_1 = ~0u;
    return call_0013fac4(0x953602u, 0x20u, r2_1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001bac9c
GUEST_EXPORT(0x001bac9c, d_001bac9c::f_001bac9c);

// f_001bace0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bace0 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32, u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x001df274, u32(u32, u32, u32, u32)> call_001df274;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)
inline constexpr guest::Function<0x006f5138, u32(u32, u32, u32, u32)> call_006f5138;  // (from the original)
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32, u32, u32)> call_0071a0b0;  // (from the original)
inline constexpr guest::Function<0x00758070, u32(u32, u32, u32, u32)> call_00758070;  // (from the original)
inline constexpr guest::Function<0x007580d0, u32(u32, u32, u32, u32)> call_007580d0;  // (from the original)
inline constexpr guest::Function<0x00758128, u32(u32, u32, u32, u32)> call_00758128;  // (from the original)
inline constexpr guest::Function<0x00770934, u32(u32, u32, u32, u32)> call_00770934;  // (from the original)

u32 f_001bace0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r5_1 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r6_1 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_13 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_14 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00758128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_2 = call_007580d0(r0, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1bad8c;
    }
    r0_3 = call_002fb328(r0_2, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = r0_3 + 0xa0u;  // (from the original)
    r0_5 = call_0071a0b0(r0_4, r0_2, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    } else {
    }
    r0_6 = call_007580d0(r0, r1, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        r5_1 = 0u;
        goto L_1bad58;
    }
    r0_7 = call_002fb328(r0_6, r1_2, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r6_1 = r0_7 + 0xa0u;  // (from the original)
    r0_8 = call_0071a0b0(r6_1, r0_6, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_6 = call_00309fbc(r6_1, r0_8, r2_7, r3_7);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r5_1 = r0_6;
L_1bad58:;
    r0_9 = call_002fb918(r0_6, r1_2, r2_5, r3_5);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_10 = call_001df274(r0_9, r5_1, r2_8, r3_8);
    r1_3 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_11 = call_00770934(r0_10, r1_3, r2_9, r3_9);
    r1 = r0_11;
    if (r0_11 >> 0x1f == (r0_11 & (r0_11 ^ r0_11)) >> 0x1f) {  // (from the original)
        goto L_1badc0;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_1bad8c:;
    r0_12 = call_00758070(r0, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_13 = call_002fb328(r0_12, r1, r2_10, r3_10);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_14 = r0_13 + 0x292a4u;  // (from the original)
    call_00118c9c(r0_14, r0_12, r2_11, r3_11);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_1badc0:;
    call_006f5138(r0_10, r1, r0, 0u);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return 1u;
}

}  // namespace d_001bace0
GUEST_EXPORT(0x001bace0, d_001bace0::f_001bace0);

// f_001baf6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baf6c {

inline constexpr guest::Function<0x001e4348, u32(u32, u32, u32, u32)> call_001e4348;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x007105d4, u32(u32, u32, u32, u32)> call_007105d4;  // (from the original)

u32 f_001baf6c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fb918(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r4_1 = r0_1 + 0xa4f8u;  // (from the original)
    r0_2 = call_007105d4(r4_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = r0_2;
    if (r0_2 + 1u == 0) {
        r0_3 = 0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
    call_001e4348(r4_1, r1_2, r0, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_001baf6c
GUEST_EXPORT(0x001baf6c, d_001baf6c::f_001baf6c);

// f_001bb0c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb0c4 {

inline guest::global<u32, 0x00953fa4> global_00953fa4;  // (from the original)
inline constexpr guest::Function<0x001bbc30, u32(u32, u32, u32, u32)> call_001bbc30;  // (from the original)
inline constexpr guest::Function<0x001df3d4, u32(u32, u32, u32, u32)> call_001df3d4;  // (from the original)
inline constexpr guest::Function<0x001e4214, u32(u32, u32, u32, u32)> call_001e4214;  // (from the original)
inline constexpr guest::Function<0x001e442c, u32(u32, u32, u32, u32)> call_001e442c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x002ff3fc, u32(u32, u32, u32, u32)> call_002ff3fc;  // (from the original)
inline constexpr guest::Function<0x006f4f48, u32(u32, u32, u32, u32)> call_006f4f48;  // (from the original)
inline constexpr guest::Function<0x00710614, u32(u32, u32, u32, u32)> call_00710614;  // (from the original)

u32 f_001bb0c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_7 = 0;
    u32 ea_1 = 0;
    u32 r3_9 = 0;
    u32 r0_8 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    u32 r0_12 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x10u, r0_1, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fc900(r0_2, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74c8(r0_2, r1_1, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(0x20000u, r0_3, r2_4, r3_4);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb918(r0_2, r1_1, r2_5, r3_5);
    r1_2 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_001df3d4(r0_4, r1_2, r2_6, r3_6);
    r1_3 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_006f4f48(r0_5, r1_3, r2_7, r3_7);
        r1_3 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fb378(r0_5, r1_3, r2_7, r3_7);
    r1_4 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r4_1 = *gptr<u32>(r0_6);
    r5_1 = *gptr<u32>(r0_6 + 4);
    r6_1 = *gptr<u32>(r0_6 + 8);
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb918(r0_6, r1_4, r2_8, r3_8);
    ea_1 = r0_7 + 0x16cf8u;  // (from the original)
    r3_9 = *gptr<u32>(ea_1 + 4);
    r0_8 = r0_7 + 0xa4f8u;  // (from the original)
    *global_00953fa4 = u32(*gptr<u32>(ea_1));
    *gptr<u32>(0x953fa4u + 4) = u32(r3_9);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_001e4214(r0_8, r4_1, r5_1, r6_1);
    r1_1 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fb918(r0_2, r1_1, r2_9, r3_10);
    r1_5 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r6 = r0_9 + 0xa4f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_001e442c(r6, r1_5, r2_10, r3_11);
    r1_6 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_10;
    r4 = 0u;
    if (r0_10 == 0 || r0_10 >> 0x1f != (r0_10 & (r0_10 ^ r0_10)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_001e442c(r6, r1_6, r2, r3);
    }
    do {
L_1bb174:;
        guest::cpu()->r[13] = r13;
        r0_11 = call_00710614(r6, r4, r2, r3);
        r1_7 = guest::cpu()->r[1];
        r2_11 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_12 = call_001bbc30(r0_11, r1_7, r2_11, r3_12);
        r1_6 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_12 == 0)) {
            guest::cpu()->r[13] = r13;
            call_002ff3fc(r6, r4, r2, r3);
            r1_6 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001e442c(r6, r1_6, r2, r3);
}

}  // namespace d_001bb0c4
GUEST_EXPORT(0x001bb0c4, d_001bb0c4::f_001bb0c4);

// f_001bb304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb304 {

struct __attribute__((packed)) Object_001bb304_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001bb304_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001bb304_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001bb304_0, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00aaf6a4> global_00aaf6a4;  // (from the original)
inline constexpr guest::Function<0x0056cbe8, u32(u32, u32, u32, u32)> call_0056cbe8;  // (from the original)
inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x0056ce84, u32(u32, u32, u32, u32)> call_0056ce84;  // (from the original)
inline constexpr guest::Function<0x0056cedc, u32(u32, u32, u32, u32)> call_0056cedc;  // (from the original)

u32 f_001bb304(gptr<Object_001bb304_0> arg0) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = arg0->word_4;
    r3_1 = arg0->word_8;
    *global_00aaf6a4 = u32(arg0->word_0);
    *gptr<u32>(0xaaf6a4u + 4) = u32(r2_1);  // (from the original)
    *gptr<u32>(0xaaf6a4u + 8) = u32(r3_1);  // (from the original)
    call_0056cce4(0xaaf6a4u, 6u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    call_0056ce84(0xaaf6a4u, 0u, r2_2, r3_2);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    call_0056cedc(0xaaf6a4u, 0u, r2_3, r3_3);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    return call_0056cbe8(0xaaf6a4u, 0u, r2_4, r3_4);  // (from the original)
}

}  // namespace d_001bb304
GUEST_EXPORT(0x001bb304, d_001bb304::f_001bb304);

// f_001bb354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb354 {

inline guest::global<u32, 0x00953fa4> global_00953fa4;  // (from the original)
inline constexpr guest::Function<0x001bbc30, u32(u32, u32, u32, u32)> call_001bbc30;  // (from the original)
inline constexpr guest::Function<0x001e4214, u32(u32, u32, u32, u32)> call_001e4214;  // (from the original)
inline constexpr guest::Function<0x001e442c, u32(u32, u32, u32, u32)> call_001e442c;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x002ff3fc, u32(u32, u32, u32, u32)> call_002ff3fc;  // (from the original)
inline constexpr guest::Function<0x00710614, u32(u32, u32, u32, u32)> call_00710614;  // (from the original)

u32 f_001bb354(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb918(r0, r1, r2, r3);
    ea_1 = r0_1 + 0x16cf8u;  // (from the original)
    r3_1 = *gptr<u32>(ea_1 + 4);
    r0_2 = r0_1 + 0xa4f8u;  // (from the original)
    *global_00953fa4 = u32(*gptr<u32>(ea_1));
    *gptr<u32>(0x953fa4u + 4) = u32(r3_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_001e4214(r0_2, r0, r1, r2);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb918(r0_3, r1_1, r2_1, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r6 = r0_4 + 0xa4f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_001e442c(r6, r1_2, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_5;
    r4 = 0u;
    if (r0_5 == 0 || r0_5 >> 0x1f != (r0_5 & (r0_5 ^ r0_5)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_001e442c(r6, r1_3, r2, r3);
    }
    do {
L_1bb3bc:;
        guest::cpu()->r[13] = r13;
        r0_6 = call_00710614(r6, r4, r2, r3);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_7 = call_001bbc30(r0_6, r1_4, r2_3, r3_4);
        r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_7 == 0)) {
            guest::cpu()->r[13] = r13;
            call_002ff3fc(r6, r4, r2, r3);
            r1_3 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001e442c(r6, r1_3, r2, r3);
}

}  // namespace d_001bb354
GUEST_EXPORT(0x001bb354, d_001bb354::f_001bb354);

// f_001bbbe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bbbe8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0070eed0, u32(u32, u32, u32, u32)> call_0070eed0;  // (from the original)
inline constexpr guest::Function<0x00770934, u32(u32, u32, u32, u32)> call_00770934;  // (from the original)

u32 f_001bbbe8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 + 0x71900u;  // (from the original)
    r0_3 = call_0070eed0(r0_2, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_4 = call_00770934(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 + 1u == 0) {
        r0_5 = 0u;
    } else {
        r0_5 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_001bbbe8
GUEST_EXPORT(0x001bbbe8, d_001bbbe8::f_001bbbe8);

// f_001bbc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bbc30 {

inline constexpr guest::Function<0x0010cadd, u32(u32, u32, u32, u32)> call_0010cadc;  // (from the original)
inline constexpr guest::Function<0x001127ac, u32(u32, u32, u32, u32)> call_001127ac;  // (from the original)
inline constexpr guest::Function<0x00118c9d, u32(u32, u32, u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x001df274, u32(u32, u32, u32, u32)> call_001df274;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)
inline constexpr guest::Function<0x006f5138, u32(u32, u32, u32, u32)> call_006f5138;  // (from the original)
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32, u32, u32)> call_0071a0b0;  // (from the original)
inline constexpr guest::Function<0x00758070, u32(u32, u32, u32, u32)> call_00758070;  // (from the original)
inline constexpr guest::Function<0x007580d0, u32(u32, u32, u32, u32)> call_007580d0;  // (from the original)
inline constexpr guest::Function<0x00758128, u32(u32, u32, u32, u32)> call_00758128;  // (from the original)
inline constexpr guest::Function<0x00770934, u32(u32, u32, u32, u32)> call_00770934;  // (from the original)

u32 f_001bbc30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_13 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_16 = 0;
    u32 r1_5 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_17 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_20 = 0;
    u32 r1_6 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r5_1 = 0;
    u32 r0_21 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r7_1 = 0;
    u32 r0_22 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_23 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_24 = 0;
    u32 r1_7 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_27 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_28 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_00758128(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        goto L_1bbde4;
    }
    r0_2 = call_007580d0(r0, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r0_3 = call_002fb328(r0_2, r1_2, r2_2, r3_2);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_4 = r0_3 + 0xa0u;  // (from the original)
        r0_5 = call_0071a0b0(r0_4, r0_2, r2_3, r3_3);
        r1_1 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_5 == 0) {
            goto L_1bbde4;
        } else {
            r8 = 0u;
        }
        r0_6 = call_00758128(r0, r1_1, r2_4, r3_4);
        r1 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            goto L_1bbda8;
        }
        goto L_1bbd00;
    }
    r0_7 = call_00758070(r0, r1_2, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_1bbde4;
    }
    r0_8 = call_002fb328(r0_7, r1_1, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0x292a4u;  // (from the original)
    r0_10 = call_00118c9c(r0_9, r0_7, r2_7, r3_7);
    r1_1 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_10 + 1u == 0) {
        goto L_1bbde4;
    }
    r0_11 = call_00758070(r0, r1_1, r2_8, r3_8);
    r1_3 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    if (r0_11 != 0) {
        r0_12 = call_002fae84(r0_11, r1_3, r2_9, r3_9);
        r1_4 = guest::cpu()->r[1];
        r2_10 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        r0_13 = call_002fb310(r0_12, r1_4, r2_10, r3_10);
        r2_11 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
        r0_14 = r0_13 + 4u;
        r0_15 = call_0010cadc(r0_14, r0_11, r2_11, r3_11);
        r1_3 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        if (r0_15 != 0) {
            call_001127ac(r0_15, r0, r2_12, r3_12);
            r1_3 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 1u;
L_1bbd00:;
    r0_16 = call_007580d0(r0, r1, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    if (r0_16 == 0) {
        goto L_1bbdb0;
    }
    r0_17 = call_002fb328(r0_16, r1_5, r2_13, r3_13);
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_18 = r0_17 + 0xa0u;  // (from the original)
    r0_19 = call_0071a0b0(r0_18, r0_16, r2_14, r3_14);
    r1 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    if (r0_19 == 0) {
        goto L_1bbda8;
    }
    r0_20 = call_007580d0(r0, r1, r2_15, r3_15);
    r1_6 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    if (r0_20 == 0) {
        r5_1 = r8;
        goto L_1bbd68;
    }
    r0_21 = call_002fb328(r0_20, r1_6, r2_16, r3_16);
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r7_1 = r0_21 + 0xa0u;  // (from the original)
    r0_22 = call_0071a0b0(r7_1, r0_20, r2_17, r3_17);
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_20 = call_00309fbc(r7_1, r0_22, r2_18, r3_18);
    r1_6 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r5_1 = r0_20;
L_1bbd68:;
    r0_23 = call_002fb918(r0_20, r1_6, r2_16, r3_16);
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_24 = call_001df274(r0_23, r5_1, r2_19, r3_19);
    r1_7 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_25 = call_00770934(r0_24, r1_7, r2_20, r3_20);
    r1 = r0_25;
    if (r0_25 >> 0x1f != (r0_25 & (r0_25 ^ r0_25)) >> 0x1f) {  // (from the original)
        goto L_1bbda8;
    }
    call_006f5138(r0_24, r1, r0, 0u);
    r1 = guest::cpu()->r[1];
    r8 = 1u;
L_1bbda8:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r8;
L_1bbdb0:;
    r0_26 = call_00758070(r0, r1_5, r2_13, r3_13);
    r1 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    if (r0_26 == 0) {
        guest::preempt();
        goto L_1bbda8;
    }
    r0_27 = call_002fb328(r0_26, r1, r2_21, r3_21);
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_28 = r0_27 + 0x292a4u;  // (from the original)
    call_00118c9c(r0_28, r0_26, r2_22, r3_22);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_1bbda8;
L_1bbde4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_001bbc30
GUEST_EXPORT(0x001bbc30, d_001bbc30::f_001bbc30);

// f_001bfa48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bfa48 {

inline guest::global<u32, 0x0094ddbc> global_0094ddbc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x00535ab0, u32(u32, u32, u32, u32)> call_00535ab0;  // (from the original)
inline constexpr guest::Function<0x0068efc8, u32(u32, u32, u32, u32)> call_0068efc8;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

u32 f_001bfa48(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 zf_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    zf_1 = r0_1 == 0x30u;  // (from the original)
    ea_1 = r4 + 0x28cu;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r2_1 = *gptr<u32>(ea_1 + 4);
    if (!zf_1) {
        zf_1 = r0_1 == 0x31u;  // (from the original)
    }
    r0_2 = r13;
    if (zf_1) {
        goto L_1bfac0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_00535ab0(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_1bfa74:;
    r0_3 = r4 + 0x276u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_4 = call_00303acc(r0_3, r1, r2, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_4 != 0) {
        S1_2 = std::bit_cast<float>(*global_0094ddbc);
        S0_2 = std::bit_cast<float>(*gptr<u32>(r13 + 4u)) + S1_2;
        *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_2));
    }
    r0_5 = *gptr<u32>(r4 + 0xf0u);  // (from the original)
    if (r0_5 == 0) {
        r1_2 = 0u;
    } else {
        r1_2 = r0_5 + 0x14u;  // (from the original)
    }
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_7 = call_0068efc8(r0_6, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return r0_7;
L_1bfac0:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_006a6dbc(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    guest::preempt();
    goto L_1bfa74;
}

}  // namespace d_001bfa48
GUEST_EXPORT(0x001bfa48, d_001bfa48::f_001bfa48);
