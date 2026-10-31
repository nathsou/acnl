// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00110cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00110cdc {


u32 f_00110cdc() {
    *gptr<u8>(0x95c218u + 1u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 0x95c218u;  // (from the original)
    return 0u;
}

}  // namespace d_00110cdc
GUEST_EXPORT(0x00110cdd, d_00110cdc::f_00110cdc);

// f_00111050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00111050 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;  // (from the original)
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> call_002fdf10;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x00308d44, u32(u32, u32, u32, u32)> call_00308d44;  // (from the original)
inline constexpr guest::Function<0x00308d48, u32(u32, u32, u32, u32)> call_00308d48;  // (from the original)
inline constexpr guest::Function<0x0030feb4, u32(u32, u32, u32, u32)> call_0030feb4;  // (from the original)
inline constexpr guest::Function<0x0030ff25, u32(u32, u32, u32, u32)> call_0030ff24;  // (from the original)
inline constexpr guest::Function<0x003100dd, u32(u32, u32, u32, u32)> call_003100dc;  // (from the original)
inline constexpr guest::Function<0x0031014c, u32(u32, u32, u32, u32)> call_0031014c;  // (from the original)

u32 f_00111050(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r3_4 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r4_1 = 0;
    u32 r3_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    r6 = r0;
    r13 = r13 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fdf10(2u, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fdf10(0x24u, r1_1, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb378(r0_1, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00308d44(r0_2, r1_2, r2_3, r3_3);
    r3_4 = guest::cpu()->r[3];
    r1_3 = *gptr<u32>(r0_3);
    r2_4 = *gptr<u32>(r0_3 + 4u);
    r0_4 = *gptr<u32>(r0_3 + 8u);
    *gptr<u32>(r13 + 0x14u) = u32(r1_3);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r0_4);  // (from the original)
    r0_5 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r2_4);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00308d48(r0_5, 1u, r2_4, r3_4);
    r1_4 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x18u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1_4);
    r0_6 = *gptr<u32>(r0_2);
    r1_5 = *gptr<u32>(r0_2 + 4);
    r2_5 = *gptr<u32>(r0_2 + 8);
    r4_1 = r0_2 + 0xc;  // (from the original)
    r3_5 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb4a0(r0_6, r1_5, r2_5, r3_5);
    r1_1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    call_0030feb4(0u, r1_1, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_0030ff24(r0_7, r6, r2_7, r3_7);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r7 = 1u;
L_1110ae:;
    r0_8 = *gptr<u32>(r13 + 8u);
    cf_1 = r0_8 >= r4;
    if (!cf_1 || r0_8 == r4) {
        goto L_1110ea;
    }
    sco = cf_1;
    res_1 = lsl_rc(r7, r4 & 0xff, &sco);  // (from the original)
    if ((*gptr<u32>(r13 + 0xcu) & res_1) == 0) {  // (from the original)
        goto L_1110ea;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fe450(r4, r4, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        if (u32(*gptr<u8>(r0_9 + 0x24u)) == 0x21u) {  // (from the original)
            goto L_1110ea;
        }
    }
    if (*gptr<u32>(r13 + 8u) <= r4) {
        goto L_1110ea;
    }
    if ((*gptr<u32>(r13 + 0xcu) & res_1) == 0) {  // (from the original)
        goto L_1110ea;
    }
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r13 + 0xcu) & ~res_1);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r13 + 0x10u) - 1u);  // (from the original)
L_1110ea:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_1110ae;
    }
    r1_6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_003100dc(r6, r1_6, r2, r3);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_1 = call_0031014c(r0_10, r1_7, r2_8, r3_8);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00111050
GUEST_EXPORT(0x00111051, d_00111050::f_00111050);

// f_0011188c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011188c {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00310cf9, u32(u32, u32, u32, u32)> call_00310cf8;  // (from the original)
inline constexpr guest::Function<0x0031108d, u32(u32, u32, u32, u32)> call_0031108c;  // (from the original)
inline constexpr guest::Function<0x0031118c, u32(u32, u32, u32, u32)> call_0031118c;  // (from the original)

u32 f_0011188c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    u32 res_3 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 res_4 = 0;
    u32 res_5 = 0;
    u32 r0_8 = 0;
    u32 res_6 = 0;
    u32 r0_9 = 0;
    u32 res_7 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_12 = 0;
    u32 r3_4 = 0;
    u32 r0_13 = 0;
    u32 r1_4 = 0;
    u32 r0_14 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r5 = r0;
    r1 = 0u;
    *gptr<u32>(r13) = u32(r1);
    res_1 = r5 + 0x19760u;  // (from the original)
    r7 = res_1;
    r0_1 = u32(s32(s8(*gptr<u8>(r7 + 3u))));
    if (r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_1118f8;
    }
    if (r0_1 >= 0xau) {  // (from the original)
        goto L_1118ca;
    }
    r1 = 0x2518u;  // (from the original)
    res_2 = r0_1 * r1 + r5;
    r4 = res_2;
    if (res_2 == 0) {
        goto L_1118f2;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe470(r4, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1118f2;
    }
L_1118b6:;
    if (r4 == 0) {
        goto L_1118f2;
    }
    res_3 = *gptr<u32>(r4 + (0x25u << 8) + 0x10u) << 0x15 >> 0x1e;  // (from the original)
    if (res_3 != 0) {
        goto L_1118e0;
    }
    goto L_1118ce;
L_1118ca:;
    r4 = 0u;
    guest::preempt();
    goto L_1118b6;
L_1118ce:;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fae84(res_3, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb310(r0_3, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x1976cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00310cf8(r0_5, r4, 0x1976cu, r3_2);  // (from the original)
L_1118e0:;
    r1_2 = u32(s32(s8(*gptr<u8>(r7 + 3u))));
    guest::cpu()->r[13] = r13;
    call_0031108c(r5, r1_2, r4, 1u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(1u);
L_1118f2:;
    *gptr<u8>(r7 + 3u) = u8(~0u);
L_1118f8:;
    r4 = 0u;
    r6 = r5;
    do {
L_1118fc:;
        guest::cpu()->r[13] = r13;
        r0_6 = call_00301e20(r6, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_6 == 0)) {
            r0_7 = *gptr<u32>(r6 + (0x25u << 8) + 0x10u);  // (from the original)
            res_4 = r0_7 << 0x1f;  // (from the original)
            r1 = res_4;
            if (!(res_4 == 0)) {
                res_5 = r0_7 << 0x1e;  // (from the original)
                if (!(res_5 >> 0x1f)) {  // (from the original)
                    goto L_11192e;
                }
            }
            guest::cpu()->r[13] = r13;
            r0_8 = call_0031118c(r6, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_8 != 0) {
                goto L_11192e;
            }
        }
        r4 = r4 + 1u;
        r6 = r6 + 0x2518u;  // (from the original)
        guest::preempt();
    } while (s32(r4) < s32(0xau));  // (from the original)
    r4 = ~0u;
L_11192e:;
    if (r4 >= 0xau) {  // (from the original)
        goto L_11196e;
    }
    r1 = 0x2518u;  // (from the original)
    res_6 = r4 * r1 + r5;
    r6 = res_6;
    if (res_6 == 0) {
        goto L_11199a;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fe470(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_11199a;
    }
L_111946:;
    if (r6 == 0) {
        goto L_11199a;
    }
    res_7 = *gptr<u32>(r6 + (0x25u << 8) + 0x10u) << 0x15 >> 0x1e;  // (from the original)
    r0_10 = res_7;
    if (res_7 != 0) {
        r0_10 = 1u;
        *gptr<u8>(r7) = u8(r0_10);
        *gptr<u8>(r7 + 1u) = u8(0u);
    }
    r1 = u32(s32(s8(*gptr<u8>(r7))));
    if (s32(r1) < s32(1u)) {
        goto L_11199a;
    }
    if (r0_10 == 0) {
        goto L_111972;
    }
    goto L_111984;
L_11196e:;
    r6 = 0u;
    guest::preempt();
    goto L_111946;
L_111972:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fae84(r0_10, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fb310(r0_11, r1_3, r2_2, r3_3);
    r3_4 = guest::cpu()->r[3];
    r0_13 = r0_12 + 0x1976cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00310cf8(r0_13, r6, 0x1976cu, r3_4);  // (from the original)
L_111984:;
    *gptr<u8>(r7 + 2u) = u8(~0u);
    guest::cpu()->r[13] = r13;
    call_0031108c(r5, r4, r6, 0u);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
L_11199a:;
    r0_14 = *gptr<u32>(r13);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_0011188c
GUEST_EXPORT(0x0011188d, d_0011188c::f_0011188c);

// f_00111d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00111d48 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00308355, u32(u32, u32, u32, u32)> call_00308354;  // (from the original)
inline constexpr guest::Function<0x00309444, u32(u32, u32, u32, u32)> call_00309444;  // (from the original)
inline constexpr guest::Function<0x00309448, u32(u32, u32, u32, u32)> call_00309448;  // (from the original)
inline constexpr guest::Function<0x0030944c, u32(u32, u32, u32, u32)> call_0030944c;  // (from the original)
inline constexpr guest::Function<0x00309450, u32(u32, u32, u32, u32)> call_00309450;  // (from the original)
inline constexpr guest::Function<0x0030c599, u32(u32, u32, u32, u32)> call_0030c598;  // (from the original)
inline constexpr guest::Function<0x00310a31, u32(u32, u32, u32, u32)> call_00310a30;  // (from the original)
inline constexpr guest::Function<0x003113b8, u32(u32, u32, u32, u32)> call_003113b8;  // (from the original)
inline constexpr guest::Function<0x0031143c, u32(u32, u32, u32, u32)> call_0031143c;  // (from the original)

u32 f_00111d48(u32 r0) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_8 = 0;
    u32 r6_1 = 0;
    u32 r4_1 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_10 = 0;
    u32 r4_2 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_11 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_12 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r2_8 = 0;
    u32 r3_13 = 0;
    u32 r1_7 = 0;
    u32 r4_3 = 0;
    u32 r1_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00301d0c(r0, 0x113d15u, 0x2518u, 0xau);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 + 0x172f4u;  // (from the original)
    r0_3 = call_00309444(r0_2, 0x172f4u, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r0_4 = r0_3 + 0xfffe8d0cu + 0x173a0u;  // (from the original)
    r0_5 = call_003113b8(r0_4, 0x173a0u, 0xfffe8d0cu, r3_2);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r0_6 = r0_5 + 0xfffe8c60u + 0x173c6u;  // (from the original)
    r0_7 = call_003113b8(r0_6, 0x173c6u, 0xfffe8c60u, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_8 = r0_7 + 0xfffe8c3au + 0x173ecu;  // (from the original)
    r0_9 = call_00309448(r0_8, 0x173ecu, 0xfffe8c3au, r3_4);  // (from the original)
    r3_5 = guest::cpu()->r[3];
    r0_10 = r0_9 + 0xfffe8c14u + 0x17448u;  // (from the original)
    r0_11 = call_0030944c(r0_10, 0x17448u, 0xfffe8c14u, r3_5);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r0_12 = r0_11 + 0xfffe8bb8u + 0x1764au;  // (from the original)
    r0_13 = call_00309450(r0_12, 0x1764au, 0xfffe8bb8u, r3_6);  // (from the original)
    r0_14 = r0_13 + 0x5cu;  // (from the original)
    r0_15 = call_00301d0c(r0_14, 0x113fe5u, 0xf2u, 0x10u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x30u + 0xf66u;  // (from the original)
    r0_17 = call_0031143c(r0_16, r1_1, r2_2, r3_7);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r6_1 = u32(0) - 0xf66u;  // (from the original)
    r4_1 = r0_17 + r6_1;
    call_00308354(r4_1, r1_2, r2_3, r3_8);
    r0_18 = r4_1 + 0xfacu;  // (from the original)
    r0_19 = call_00301d0c(r0_18, 0x113fe5u, 0xf2u, 0x10u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x30u + 0xf66u;  // (from the original)
    r0_21 = call_0031143c(r0_20, r1_3, r2_4, r3_9);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r4_2 = r0_21 + r6_1;
    call_00308354(r4_2, r1_4, r2_5, r3_10);
    r0_22 = r4_2 + 0xf7eu;  // (from the original)
    r0_23 = call_00301d0c(r0_22, 0x1141d1u, 0xcu, 0x10u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    call_0030c598(r0_23, r1_5, r2_6, r3_11);
    r0_24 = r0_23 + 0xc0u;  // (from the original)
    r0_25 = call_00301d0c(r0_24, 0x1141d1u, 0xcu, 0x10u);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    call_0030c598(r0_25, r1_6, r2_7, r3_12);
    r0_26 = r0_25 + 0xfffe69d0u;  // (from the original)
    r0_27 = r0_26 + 0x196f2u;  // (from the original)
    r0_28 = call_00301d0c(r0_27, 0x612d0cu, 2u, 4u);  // (from the original)
    r2_8 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r1_7 = u32(0) - 0x196f2u;  // (from the original)
    r4_3 = r0_28 + r1_7;
    call_00310a30(r4_3, r1_7, r2_8, r3_13);
    r1_8 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    return r4_3;
}

}  // namespace d_00111d48
GUEST_EXPORT(0x00111d49, d_00111d48::f_00111d48);

// f_00111f4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00111f4c {


u32 f_00111f4c(u32 r0, u32 r1) {
    u32 sco = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if (r0 >= 0x18fu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r2_1 = r0 >> 3;
    r0_1 = r0 << 0x1d >> 0x1d;  // (from the original)
    cf_1 = r2_1 >= 0x32u;  // (from the original)
    if (cf_1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    sco = cf_1;
    res_1 = lsr_rc(u32(*gptr<u8>(r1 + r2_1)), r0_1 & 0xff, &sco);  // (from the original)
    r0_2 = res_1 << 0x1f >> 0x1f;  // (from the original)
    guest::cpu()->r[1] = res_1;
    return r0_2;
}

}  // namespace d_00111f4c
GUEST_EXPORT(0x00111f4d, d_00111f4c::f_00111f4c);

// f_00111f94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00111f94 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00308e80, u32(u32, u32, u32, u32)> call_00308e80;  // (from the original)
inline constexpr guest::Function<0x003094f0, u32(u32, u32, u32, u32)> call_003094f0;  // (from the original)
inline constexpr guest::Function<0x003095b4, u32(u32, u32, u32, u32)> call_003095b4;  // (from the original)

u32 f_00111f94(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r1_5 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = call_003094f0(0x4eu, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    r0_3 = call_00308e80(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_3 != 0x26u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    r0_4 = call_002fe8a8(0u, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    r1_5 = 0x57u << 8;  // (from the original)
    res_1 = u32(*gptr<u8>(r0_4 + r1_5 + 1u)) >> 1 << 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 0u;
    }
    r0_5 = call_002fb378(res_1, r1_5, r2_4, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_6 = call_002fb328(r0_5, r1_6, r2_5, guest::cpu()->r[3]);
    r0_7 = r0_6 + 0x80u + 0x70e60u;  // (from the original)
    r0_8 = call_003095b4(r0_7, r0_5, 0x70e60u, guest::cpu()->r[3]);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_7;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_7;
    return 0u;
}

}  // namespace d_00111f94
GUEST_EXPORT(0x00111f95, d_00111f94::f_00111f94);

// f_00111ff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00111ff0 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003095a4, u32(u32, u32, u32, u32)> call_003095a4;  // (from the original)
inline constexpr guest::Function<0x003095a8, u32(u32, u32, u32, u32)> call_003095a8;  // (from the original)

u32 f_00111ff0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    res_1 = r0_1 + 0x80u + 0x621d0u;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0x621d0u;  // (from the original)
        return 0u;
    }
    r0_2 = call_003095a4(res_1, 0x621d0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_3 = call_003095a8(res_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r0_4 = *gptr<u8>(res_1 + 0x14u);  // (from the original)
    if (r0_4 == 1u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r0_4 == 2u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r0_4 == 3u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r0_4 == 4u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00111ff0
GUEST_EXPORT(0x00111ff1, d_00111ff0::f_00111ff0);

// f_001120f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001120f0 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00308e80, u32(u32, u32, u32, u32)> call_00308e80;  // (from the original)
inline constexpr guest::Function<0x00309384, u32(u32, u32, u32, u32)> call_00309384;  // (from the original)
inline constexpr guest::Function<0x0030946c, u32(u32, u32, u32, u32)> call_0030946c;  // (from the original)

u32 f_001120f0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_5 = 0;
    u32 res_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 res_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = call_00308e80(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0x26u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_3 = call_002fe8a8(0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_4 = r0_3 + (0x57u << 8);  // (from the original)
    res_1 = u32(*gptr<u8>(r0_4 + 1u)) >> 1 << 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    res_2 = u32(*gptr<u8>(r0_4 + 4u)) >> 1 << 0x1f;  // (from the original)
    if (res_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_5 = call_002fb328(res_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = 0x4650u;  // (from the original)
    res_3 = r0_5 + 0x80u + 0x621d0u + r1_1;  // (from the original)
    if (res_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_6 = call_00309384(res_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_7 = call_0030946c(res_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_8 = call_002fb328(r0_7, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = 0x8c04u;  // (from the original)
    res_4 = r0_8 + 0x80u + 0x621d0u + r1_1;  // (from the original)
    if (res_4 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_1 = 0x2002u;  // (from the original)
    if (u32(*gptr<u16>(res_4 + 0xeu)) != r1_1) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001120f0
GUEST_EXPORT(0x001120f1, d_001120f0::f_001120f0);

// f_00112298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00112298 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x0030984c, u32(u32, u32, u32, u32)> call_0030984c;  // (from the original)
inline constexpr guest::Function<0x00309850, u32(u32, u32, u32, u32)> call_00309850;  // (from the original)
inline constexpr guest::Function<0x00309854, u32(u32, u32, u32, u32)> call_00309854;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32, u32, u32)> call_00309bd4;  // (from the original)

u32 f_00112298(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    res_1 = r0_1 + 0x80u + 0x621d0u + 0x4494u;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0x4494u;  // (from the original)
        return 0u;
    }
    r0_2 = call_0030984c(res_1, 0x4494u, 0x621d0u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_3 = call_00309850(res_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r0_4 = *gptr<u8>(res_1 + 0x10u);  // (from the original)
    if (r0_4 != 4u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r0_5 = call_00309854(r0_4, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_5 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    r0_6 = call_002fb378(r0_5, r1_3, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r0_7 = call_00309bd4(0xbu, r0_6, r2_4, guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_00112298
GUEST_EXPORT(0x00112299, d_00112298::f_00112298);

// f_0011253c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011253c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)
inline constexpr guest::Function<0x00310a31, u32(u32, u32, u32, u32)> call_00310a30;  // (from the original)

u32 f_0011253c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    call_002f825c(r0, 0x22bccu, guest::cpu()->r[2], r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    call_00310a30(r0_1, r1_1, guest::cpu()->r[2], r3_1);
    r3 = guest::cpu()->r[3];
    r7 = r0 + 0x1976cu;  // (from the original)
    r5 = 0u;
L_112552:;
    r1 = 0x4a30u;  // (from the original)
    r4 = 0u;
    r6 = r5 * r1 + r7;
    do {
L_11255c:;
        r0_2 = r6 + 0x2518u * r4;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_00308d4c(r0_2, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r5 = r5 + 1u;
    if (s32(r5) < s32(2u)) {
        guest::preempt();
        goto L_112552;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0011253c
GUEST_EXPORT(0x0011253d, d_0011253c::f_0011253c);

// f_00112584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00112584 {

inline constexpr guest::Function<0x00111d49, u32(u32, u32, u32, u32)> call_00111d48;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)
inline constexpr guest::Function<0x00310a31, u32(u32, u32, u32, u32)> call_00310a30;  // (from the original)

u32 f_00112584(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    r13 = ea_1;
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00111d48(r0_1, r1, r2, r3);
    r0_3 = r0_2 + 0x19768u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00301d0c(r0_3, 0x113d15u, 0x2518u, 4u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    r7 = r0_4;
L_1125a0:;
    r1 = 0x4a30u;  // (from the original)
    r4 = 0u;
    r6 = r5 * r1 + r7;
    do {
L_1125aa:;
        r0_5 = r6 + 0x2518u * r4;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00308d4c(r0_5, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r5 = r5 + 1u;
    if (s32(r5) < s32(2u)) {
        guest::preempt();
        goto L_1125a0;
    }
    r0_6 = r7 + 0xfffe6894u;  // (from the original)
    *gptr<u32>(r13) = u32(r0_6);
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_6, 0x22bccu, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_7 = r0_6 + 4u;
    guest::cpu()->r[13] = r13;
    call_00310a30(r0_7, r1_1, r2_1, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0_6 + 0x1976cu;  // (from the original)
    r5 = 0u;
L_1125da:;
    r1 = 0x4a30u;  // (from the original)
    r4 = 0u;
    r6 = r5 * r1 + r7;
    do {
L_1125e4:;
        r0_8 = r6 + 0x2518u * r4;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00308d4c(r0_8, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r5 = r5 + 1u;
    if (s32(r5) < s32(2u)) {
        guest::preempt();
        goto L_1125da;
    }
    r0_9 = *gptr<u32>(r13);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_00112584
GUEST_EXPORT(0x00112585, d_00112584::f_00112584);

// f_00112714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00112714 {


u32 f_00112714() {
    return guest::call_address<u32>(0x11271du, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00112714
GUEST_EXPORT(0x00112714, d_00112714::f_00112714);

// f_0011279e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011279e {

struct __attribute__((packed)) Object_0011279e_0 {
    u8 unknown_0[0x1f];  // (not used here)
    u8 byte_1f;
};
GUEST_OFFSET(Object_0011279e_0, byte_1f, 0x1f);  // (from the original)


u32 f_0011279e(gptr<Object_0011279e_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    if (r0 == 0) {
        return r0;
    }
    r0_1 = u32(arg0->byte_1f) << 0x1c >> 0x1f;  // (from the original)
    return r0_1;
}

}  // namespace d_0011279e
GUEST_EXPORT(0x0011279f, d_0011279e::f_0011279e);

// f_001127ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001127ac {


u32 f_001127ac() {
    return guest::call_address<u32>(0x1127b5u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001127ac
GUEST_EXPORT(0x001127ac, d_001127ac::f_001127ac);

// f_00112d34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00112d34 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32, u32)> call_00308970;  // (from the original)
inline constexpr guest::Function<0x003120a9, u32(u32, u32, u32, u32)> call_003120a8;  // (from the original)
inline constexpr guest::Function<0x00312178, u32(u32, u32, u32, u32)> call_00312178;  // (from the original)
inline constexpr guest::Function<0x00312184, u32(u32, u32, u32, u32)> call_00312184;  // (from the original)
inline constexpr guest::Function<0x00312191, u32(u32, u32, u32, u32)> call_00312190;  // (from the original)
inline constexpr guest::Function<0x0031224c, u32(u32, u32, u32, u32)> call_0031224c;  // (from the original)
inline constexpr guest::Function<0x00312274, u32(u32, u32, u32, u32)> call_00312274;  // (from the original)

u32 f_00112d34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r5_1 = r0;
    r4_1 = r1;
    if (r1 >= 0x10u) {  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (s32(r4_1) >= s32(0xcu)) {  // (from the original)
        r1_1 = r4_1 - 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003120a8(r0, r1_1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        goto L_112d68;
    }
    res_1 = r4_1 - 0xau;  // (from the original)
    zf_1 = res_1 == 0;
    if (res_1 >> 0x1f == ((r4_1 ^ 0xau) & (r4_1 ^ res_1)) >> 0x1f) {  // (from the original)
        if (!zf_1) {
            guest::cpu()->r[13] = r13;
            r0 = call_00312178(r0, r2, r2, r3);
            r1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            goto L_112d68;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_00312184(r0, r2, r2, r3);
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        goto L_112d68;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00312190(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
L_112d68:;
    if (r3 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(r0, r1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r1_2 = r0_1 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00308970(r5_1, r1_2, 0xau, r3_2);  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_0031224c(r0_3, r0_2, r2, r4_1);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00312274(4u, r1_3, r2_2, r3_3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00112d34
GUEST_EXPORT(0x00112d35, d_00112d34::f_00112d34);

// f_00112d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00112d9c {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x003122bd, u32(u32, u32, u32, u32)> call_003122bc;  // (from the original)
inline constexpr guest::Function<0x0031237d, u32(u32, u32, u32, u32)> call_0031237c;  // (from the original)

u32 f_00112d9c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 res_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r4 = r0;
    r1_1 = r4 + (0x25u << 8);  // (from the original)
    *gptr<u8>(r1_1 + 0x14u) = u8(~0u);  // (from the original)
    r0_1 = r4 + 0x2210u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff408(r0_1, r1_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x1810u;  // (from the original)
    r7 = 0x7dbu;  // (from the original)
    r5 = 0u;
    do {
L_112dba:;
        r0_2 = (5u << 7) * r5 + r4 + r6;
        guest::cpu()->r[13] = r13;
        call_002ff408(r0_2, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r0_3 = r5 << 0x18;  // (from the original)
        r5 = r5 + 1u;
        res_1 = r0_3 >> 0x17;  // (from the original)
        r2 = res_1;
        r1 = r2 + r4;
        r0_4 = r1 + (0x49u << 7);  // (from the original)
        res_2 = r5 - 4u;
        *gptr<u16>(r0_4 + 0x12u) = u16(r7);  // (from the original)
        guest::preempt();
    } while (res_2 >> 0x1f != ((r5 ^ 4u) & (r5 ^ res_2)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003122bc(r4, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_0031237c(r4, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00112d9c
GUEST_EXPORT(0x00112d9d, d_00112d9c::f_00112d9c);

// f_00112df8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00112df8 {

struct __attribute__((packed)) Object_00112df8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_00112df8_0, byte_4, 0x4);  // (from the original)


u32 f_00112df8(gptr<Object_00112df8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    if (r0 == 0) {
        return r0;
    }
    r0_1 = arg0->byte_4;
    return r0_1;
}

}  // namespace d_00112df8
GUEST_EXPORT(0x00112df9, d_00112df8::f_00112df8);

// f_00112f9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00112f9c {

inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32, u32)> call_003091e0;  // (from the original)
inline constexpr guest::Function<0x003091ec, u32(u32, u32, u32, u32)> call_003091ec;  // (from the original)
inline constexpr guest::Function<0x00311f7d, u32(u32, u32, u32, u32)> call_00311f7c;  // (from the original)
inline constexpr guest::Function<0x00312434, u32(u32, u32, u32, u32)> call_00312434;  // (from the original)

u32 f_00112f9c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r7_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r0_1 = r2;
    r6_1 = r1;
    if (r2 == 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_003091e0(r0_1, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_1 = call_003091ec(r0_2, r1_1, r2_1, r3_1);
        r1 = guest::cpu()->r[1];
    }
    r7_1 = r0_1;
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r2_2 = r7_1 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00311f7c(r0, r6_1, r2_2, r3);
    r3_2 = guest::cpu()->r[3];
    r1 = r0_1;
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00312434(r7_1, r1, 1u, r3_2);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00112f9c
GUEST_EXPORT(0x00112f9d, d_00112f9c::f_00112f9c);

// f_00112fe2: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00112fe2 {

struct __attribute__((packed)) Object_00112fe2_0 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Object_00112fe2_0, byte_6, 0x6);  // (from the original)


u32 f_00112fe2(gptr<Object_00112fe2_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    if (r0 == 0) {
        return r0;
    }
    r0_1 = arg0->byte_6;
    return r0_1;
}

}  // namespace d_00112fe2
GUEST_EXPORT(0x00112fe3, d_00112fe2::f_00112fe2);

// f_00112fea: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00112fea {

struct __attribute__((packed)) Object_00112fea_0 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Object_00112fea_0, byte_7, 0x7);  // (from the original)


u32 f_00112fea(gptr<Object_00112fea_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    if (r0 == 0) {
        return r0;
    }
    r0_1 = arg0->byte_7;
    return r0_1;
}

}  // namespace d_00112fea
GUEST_EXPORT(0x00112feb, d_00112fea::f_00112fea);

// f_00112ff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00112ff4 {

inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x003085bd, u32(u32, u32, u32, u32)> call_003085bc;  // (from the original)
inline constexpr guest::Function<0x00308729, u32(u32, u32, u32, u32)> call_00308728;  // (from the original)
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32, u32)> call_00309f84;  // (from the original)

u32 f_00112ff4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1 - 8u;
    r4 = r0;
    r1_1 = *gptr<u32>(r13 + 0xcu) + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00309f84(r4, r1_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_1;
    if (r0_1 != 0) {
        goto L_113060;
    }
    r7 = 0x8eeu;  // (from the original)
    do {
L_11300c:;
        r1_2 = r5 * 0xf2u;  // (from the original)
        r0_2 = r1_2 + r4 + r7;
        guest::cpu()->r[13] = r13;
        r0_3 = call_002fbd54(r0_2, r1_2, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_113066;
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x10u);  // (from the original)
L_113024:;
    r5_1 = r4 + r7;
    r2_1 = r4 + 0x180eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003085bc(0x106335u, r5_1, r2_1, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0 < 0x10u) {  // (from the original)
        goto L_113042;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_003085bc(0x106209u, r5_1, r2_1, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
L_113042:;
    if (r0 >= 0x10u) {  // (from the original)
        goto L_11306e;
    }
    r1 = 0xf2u;  // (from the original)
    res_1 = r0 * r1 + r4 + r7;
    r5 = res_1;
    if (res_1 == 0) {
        goto L_113060;
    }
    *gptr<u32>(r13) = u32(0u);
    r2_2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r1_3 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00308728(r5, r1_3, r2_2, 0u);
    r1 = guest::cpu()->r[1];
L_113060:;
    r13 = r13 + 0x14u;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r5;
L_113066:;
    r0 = r5;
    if (r5 >= 0x10u) {  // (from the original)
        guest::preempt();
        goto L_113024;
    }
    guest::preempt();
    goto L_113042;
L_11306e:;
    r5 = 0u;
    guest::preempt();
    goto L_113060;
}

}  // namespace d_00112ff4
GUEST_EXPORT(0x00112ff5, d_00112ff4::f_00112ff4);

// f_001130cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001130cc {


u32 f_001130cc(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r0 = r0 + 0x8eeu;  // (from the original)
    r5 = 0xfdu;  // (from the original)
    r6 = 0xfbu;  // (from the original)
    r7 = 0xf7u;  // (from the original)
    do {
L_1130da:;
        r1_1 = r0 + 0xb6u;  // (from the original)
        r0 = r0 + 0xf2u;  // (from the original)
        r4 = r4 + 1u;
        r3_1 = u32(*gptr<u8>(r1_1 + 6u)) & r5 & r7;
        *gptr<u8>(r1_1 + 2u) = u8(u32(*gptr<u8>(r1_1 + 2u)) & r5 & r6);
        res_1 = r4 - 0x10u;  // (from the original)
        *gptr<u8>(r1_1 + 6u) = u8(r3_1);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 0x10u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_001130cc
GUEST_EXPORT(0x001130cd, d_001130cc::f_001130cc);

// f_00113178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113178 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x002fe9dc, u32(u32, u32, u32, u32)> call_002fe9dc;  // (from the original)
inline constexpr guest::Function<0x002fea2c, u32(u32, u32, u32, u32)> call_002fea2c;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x00309eb0, u32(u32, u32, u32, u32)> call_00309eb0;  // (from the original)
inline constexpr guest::Function<0x00309eb4, u32(u32, u32, u32, u32)> call_00309eb4;  // (from the original)
inline constexpr guest::Function<0x00312af9, u32(u32, u32, u32, u32)> call_00312af8;  // (from the original)

u32 f_00113178(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_11 = 0;
    u32 res_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r0_16 = 0;
    u32 r2_7 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r2_8 = 0;
    u32 r0_18 = 0;
    u32 r2_9 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r2_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_12 = 0;
    r13 = r13 - 0x310u;  // (from the original)
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = *gptr<u32>(r0_1 + 4u);
    r1_1 = *gptr<u32>(r0_1);
    r0_2 = *gptr<u32>(r0_1 + 8u);
    *gptr<u32>(r13 + 4u) = u32(r2_1);
    *gptr<u32>(r13) = u32(r1_1);
    *gptr<u32>(r13 + 8u) = u32(r0_2);
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00308efc(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_4 = call_00312af8(r7, r1_2, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    *gptr<u32>(r13 + 0xcu) = u32(r7 + 0x8eau);  // (from the original)
    if (r0_4 == 0) {
        goto L_113256;
    }
    if (u32(*gptr<u8>(r13 + 4u)) != 0xcu) {  // (from the original)
        goto L_113256;
    }
    r1_3 = r13;
    if (s32(u32(s32(s8(*gptr<u8>(r1_3 + 5u))))) > s32(0x18u)) {  // (from the original)
        goto L_113256;
    }
    r0_5 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcaf4(r0_5, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_6 == 0) {
        r0_7 = *gptr<u32>(r13);
        r1_4 = *gptr<u16>(r7 + (0x49u << 7) + 0x10u);  // (from the original)
        if (r1_4 == r0_7) {
            r13 = r13 + 0x310u;  // (from the original)
            guest::cpu()->r[1] = r1_4;
            guest::cpu()->r[13] = r13;
            return r0_7;
        }
    }
    r0_8 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_8, r1_4, r2_4, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_9 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00309eb0(r0_9, r1_5, r2_5, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fb328(r0_10, r1_6, r2_6, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x29220u;  // (from the original)
    r5 = r0_11 + 0x80u + r1 + 4u;  // (from the original)
    r4 = 0u;
L_1131ea:;
    if (r4 >= 0xau) {  // (from the original)
        goto L_11321a;
    }
    r1 = 0x2518u;  // (from the original)
    res_1 = r4 * r1 + r5;
    r6 = res_1;
    if (res_1 == 0) {
        goto L_113226;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fe470(r6, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_12 == 0) {
        goto L_113226;
    }
L_113202:;
    if (r6 == 0) {
        goto L_113226;
    }
    if (r6 == r7) {
        goto L_113226;
    }
    r0_13 = r6 + 0x8eau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_002fcaf4(r0_13, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_14 == 0) {
        goto L_11321e;
    }
    goto L_113226;
L_11321a:;
    r6 = 0u;
    guest::preempt();
    goto L_113202;
L_11321e:;
    r0_15 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fe9dc(r0_15, r0_13, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_113226:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_1131ea;
    }
    r1_7 = r13 + 0x10u;  // (from the original)
    r0_16 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fea2c(r0_16, r1_7, r2, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    r0_17 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1_8 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_17, r1_8, r2_7, guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r0_18 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_18, r1_9, r2_8, guest::cpu()->r[3]);
    r2_9 = guest::cpu()->r[2];
    r1_10 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    call_00309eb4(r7, r1_10, r2_9, guest::cpu()->r[3]);
    r1_11 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r0_19 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fc8fc(r0_19, r1_11, r2_10, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x310u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_113256:;
    r0_20 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_002fc8e8(r0_20, 0x95bfdcu, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r13 = r13 + 0x310u;  // (from the original)
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[13] = r13;
    return r0_21;
}

}  // namespace d_00113178
GUEST_EXPORT(0x00113179, d_00113178::f_00113178);

// f_001133f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001133f8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32, u32)> call_00308970;  // (from the original)
inline constexpr guest::Function<0x0031224c, u32(u32, u32, u32, u32)> call_0031224c;  // (from the original)
inline constexpr guest::Function<0x00312274, u32(u32, u32, u32, u32)> call_00312274;  // (from the original)

u32 f_001133f8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r1_1 = r0_1 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00308970(r0, r1_1, 0xau, r3_1);  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_0031224c(r0_3, r0_2, r1, r2);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_00312274(4u, r1_2, r2_1, r3_2);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_001133f8
GUEST_EXPORT(0x001133f9, d_001133f8::f_001133f8);

// f_00113430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113430 {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)

u32 f_00113430(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 res_2 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r4 = 0u;
    r5 = r0;
    r6 = 0x1810u;  // (from the original)
    r7 = 0x7dbu;  // (from the original)
    do {
L_11343a:;
        r0_1 = (5u << 7) * r4 + r5 + r6;
        guest::cpu()->r[13] = r13;
        call_002ff408(r0_1, r1, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        r0_2 = r4 << 0x18;  // (from the original)
        r4 = r4 + 1u;
        res_1 = r0_2 >> 0x17;  // (from the original)
        r1 = res_1 + r5;
        r0_3 = r1 + (0x49u << 7);  // (from the original)
        res_2 = r4 - 4u;
        *gptr<u16>(r0_3 + 0x12u) = u16(r7);  // (from the original)
        guest::preempt();
    } while (res_2 >> 0x1f != ((r4 ^ 4u) & (r4 ^ res_2)) >> 0x1f);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00113430
GUEST_EXPORT(0x00113431, d_00113430::f_00113430);

// f_00113494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113494 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)
inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x00300768, u32(u32, u32, u32, u32)> call_00300768;  // (from the original)
inline constexpr guest::Function<0x00301e64, u32(u32, u32, u32, u32)> call_00301e64;  // (from the original)
inline constexpr guest::Function<0x00301e6c, u32(u32, u32, u32, u32)> call_00301e6c;  // (from the original)
inline constexpr guest::Function<0x00307c50, u32(u32, u32, u32, u32)> call_00307c50;  // (from the original)
inline constexpr guest::Function<0x003083d4, u32(u32, u32, u32, u32)> call_003083d4;  // (from the original)
inline constexpr guest::Function<0x0030a014, u32(u32, u32, u32, u32)> call_0030a014;  // (from the original)
inline constexpr guest::Function<0x0030a018, u32(u32, u32, u32, u32)> call_0030a018;  // (from the original)
inline constexpr guest::Function<0x0030a1a0, u32(u32, u32, u32, u32)> call_0030a1a0;  // (from the original)
inline constexpr guest::Function<0x0030b5a5, u32(u32, u32, u32, u32)> call_0030b5a4;  // (from the original)
inline constexpr guest::Function<0x003107bc, u32(u32, u32, u32, u32)> call_003107bc;  // (from the original)
inline constexpr guest::Function<0x003107c8, u32(u32, u32, u32, u32)> call_003107c8;  // (from the original)
inline constexpr guest::Function<0x003107d5, u32(u32, u32, u32, u32)> call_003107d4;  // (from the original)
inline constexpr guest::Function<0x003120a9, u32(u32, u32, u32, u32)> call_003120a8;  // (from the original)
inline constexpr guest::Function<0x00312178, u32(u32, u32, u32, u32)> call_00312178;  // (from the original)
inline constexpr guest::Function<0x00312184, u32(u32, u32, u32, u32)> call_00312184;  // (from the original)
inline constexpr guest::Function<0x00312191, u32(u32, u32, u32, u32)> call_00312190;  // (from the original)
inline constexpr guest::Function<0x00312b2d, u32(u32, u32, u32, u32)> call_00312b2c;  // (from the original)

u32 f_00113494(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_4 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_14 = 0;
    u32 r1_5 = 0;
    u32 r2_10 = 0;
    u32 r0_15 = 0;
    u32 r3_10 = 0;
    u32 r2_11 = 0;
    u32 r0_16 = 0;
    u32 r3_11 = 0;
    u32 r2_12 = 0;
    u32 r1_6 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r3_14 = 0;
    u32 r2_15 = 0;
    u32 r0_20 = 0;
    u32 r3_15 = 0;
    u32 r2_16 = 0;
    u32 r1_8 = 0;
    u32 r2_17 = 0;
    u32 r3_16 = 0;
    u32 r0_21 = 0;
    u32 r1_9 = 0;
    u32 r2_18 = 0;
    u32 r3_17 = 0;
    u32 r0_22 = 0;
    u32 r2_19 = 0;
    u32 r0_23 = 0;
    u32 r3_18 = 0;
    u32 r2_20 = 0;
    u32 r0_24 = 0;
    u32 r2_21 = 0;
    u32 r3_19 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r2_22 = 0;
    u32 r3_20 = 0;
    u32 r0_25 = 0;
    u32 r1_12 = 0;
    u32 r2_23 = 0;
    u32 r3_21 = 0;
    u32 r0_26 = 0;
    u32 r2_24 = 0;
    u32 r3_22 = 0;
    u32 r0_27 = 0;
    u32 r3_23 = 0;
    u32 r2_25 = 0;
    u32 r0_28 = 0;
    u32 r2_26 = 0;
    u32 r3_24 = 0;
    u32 r1_13 = 0;
    u32 r1_14 = 0;
    u32 r2_27 = 0;
    u32 r3_25 = 0;
    u32 r0_29 = 0;
    u32 r1_15 = 0;
    u32 r2_28 = 0;
    u32 r3_26 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    r6 = r0;
    r13 = r13 - 0x60u;  // (from the original)
    r4 = r1;
    res_1 = *gptr<u32>(r6 + (0x25u << 8) + 0x10u) << 0xd;  // (from the original)
    r0_1 = res_1;
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_1135a4;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301e64(r6, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00301e6c(0xa83aecu, r0_2, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r4 == 0) {
        goto L_1135a6;
    }
    if (r0_3 == 0) {
        goto L_1135a6;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_0030a014(r4, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_002f6e64(r0_5, r0_4, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_0030a018(r0_7, r0_6, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_8, r1_2, r2_5, r3_5);
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r5 = 0u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_003083d4(r0_3, r1_3, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_10 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002f6e64(r0_10, r0_9, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_12 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_13 = call_00300768(r0_12, r0_11, r2_8, r3_8);
    r1_4 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_14 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_14, r1_4, r2_9, r3_9);
    r1_5 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_13 == 0) {
        goto L_1135c6;
    }
    *gptr<u32>(r13 + 0x2cu) = u32(r5);  // (from the original)
    do {
L_113502:;
        r0_15 = r13 + 0x44u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030b5a4(r0_15, r6, r5, r3);
        r3_10 = r13 + 0x44u;  // (from the original)
        r2_11 = r13 + 0x2cu;  // (from the original)
        r0_16 = r13 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(r4);
        guest::cpu()->r[13] = r13;
        call_00312b2c(r0_16, r6, r2_11, r3_10);
        r3_11 = guest::cpu()->r[3];
        r2_12 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00312190(r6, r5, r2_12, r3_11);
        r1_6 = guest::cpu()->r[1];
        r2_13 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        r0_17 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_17, r1_6, r2_13, r3_12);
        r1_7 = guest::cpu()->r[1];
        r2_14 = guest::cpu()->r[2];
        r3_13 = guest::cpu()->r[3];
        r0_18 = r13 + 0x44u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_18, r1_7, r2_14, r3_13);
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(0xau));  // (from the original)
    r5 = 0u;
    do {
L_113538:;
        r0_19 = r13 + 0x44u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003107d4(r0_19, r6, r5, r3);
        r3_14 = r13 + 0x44u;  // (from the original)
        r2_15 = r13 + 0x2cu;  // (from the original)
        r0_20 = r13 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(r4);
        guest::cpu()->r[13] = r13;
        call_00312b2c(r0_20, r6, r2_15, r3_14);
        r3_15 = guest::cpu()->r[3];
        r2_16 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003120a8(r6, r5, r2_16, r3_15);
        r1_8 = guest::cpu()->r[1];
        r2_17 = guest::cpu()->r[2];
        r3_16 = guest::cpu()->r[3];
        r0_21 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_21, r1_8, r2_17, r3_16);
        r1_9 = guest::cpu()->r[1];
        r2_18 = guest::cpu()->r[2];
        r3_17 = guest::cpu()->r[3];
        r0_22 = r13 + 0x44u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_22, r1_9, r2_18, r3_17);
        r2_19 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(4u));
    r0_23 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003107bc(r0_23, r6, r2_19, r3);
    r3_18 = r13 + 0x28u;  // (from the original)
    r2_20 = r13 + 0x2cu;  // (from the original)
    r0_24 = r13 + 4u;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    call_00312b2c(r0_24, r6, r2_20, r3_18);
    r2_21 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r1_10 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312184(r6, r1_10, r2_21, r3_19);
    r1_11 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_25 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_25, r1_11, r2_22, r3_20);
    r1_12 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_26 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_26, r1_12, r2_23, r3_21);
    r2_24 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_27 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_003107c8(r0_27, r6, r2_24, r3_22);
    r3_23 = r13 + 4u;
    r2_25 = r13 + 0x2cu;  // (from the original)
    goto L_1135a8;
L_1135a4:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_1135a6:;
    goto L_1135cc;
L_1135a8:;
    r0_28 = r13 + 0x28u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    call_00312b2c(r0_28, r6, r2_25, r3_23);
    r2_26 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r1_13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00312178(r6, r1_13, r2_26, r3_24);
    r1_14 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_29 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_29, r1_14, r2_27, r3_25);
    r1_15 = guest::cpu()->r[1];
    r2_28 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    r0_30 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_30, r1_15, r2_28, r3_26);
    r1_5 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1135c6:;
    r0_31 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00307c50(r0_31, r1_5, r2_10, r3);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_1135cc:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0030a1a0(r6, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00113494
GUEST_EXPORT(0x00113495, d_00113494::f_00113494);

// f_00113828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113828 {

inline constexpr guest::Function<0x00113831, u32(u32, u32, u32, u32)> call_00113830;  // (from the original)

u32 f_00113828(u32 r0, u32 r1) {
    if (r1 != 0) {
        return call_00113830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return 0u;
}

}  // namespace d_00113828
GUEST_EXPORT(0x00113829, d_00113828::f_00113828);

// f_001138a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001138a4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32, u32)> call_00308970;  // (from the original)

u32 f_001138a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 cf_1 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fb328(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r1_1 = r0_1 + 0x292a4u;  // (from the original)
    r0_2 = call_00308970(r0, r1_1, 0xau, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_2 < 0xau) {  // (from the original)
        cf_1 = r0_2 >> 0x1f & 1;  // (from the original)
        r1_2 = r0_2 << 1;
        r0_2 = 0xad555cu;  // (from the original)
        sco = cf_1;
        res_1 = lsl_rc(1u, r1 & 0xff, &sco);  // (from the original)
        *gptr<u16>(r0_2 + r1_2) = u16(u32(*gptr<u16>(r0_2 + r1_2)) | res_1);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_001138a4
GUEST_EXPORT(0x001138a5, d_001138a4::f_001138a4);

// f_001138dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001138dc {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_001138dc() {
    guest::cpu()->r[13] -= 8u;
    call_002fbb30(guest::cpu()->r[0], guest::cpu()->r[1], 0x2518u, guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_001138dc
GUEST_EXPORT(0x001138dd, d_001138dc::f_001138dc);

// f_001138ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001138ec {

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00301e6c, u32(u32, u32, u32, u32)> call_00301e6c;  // (from the original)
inline constexpr guest::Function<0x00308380, u32(u32, u32, u32, u32)> call_00308380;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x003083d4, u32(u32, u32, u32, u32)> call_003083d4;  // (from the original)
inline constexpr guest::Function<0x003083e4, u32(u32, u32, u32, u32)> call_003083e4;  // (from the original)
inline constexpr guest::Function<0x00308450, u32(u32, u32, u32, u32)> call_00308450;  // (from the original)
inline constexpr guest::Function<0x0030846c, u32(u32, u32, u32, u32)> call_0030846c;  // (from the original)
inline constexpr guest::Function<0x003084c8, u32(u32, u32, u32, u32)> call_003084c8;  // (from the original)
inline constexpr guest::Function<0x003084cc, u32(u32, u32, u32, u32)> call_003084cc;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)
inline constexpr guest::Function<0x0030f52c, u32(u32, u32, u32, u32)> call_0030f52c;  // (from the original)
inline constexpr guest::Function<0x0030f56c, u32(u32, u32, u32, u32)> call_0030f56c;  // (from the original)
inline constexpr guest::Function<0x00311744, u32(u32, u32, u32, u32)> call_00311744;  // (from the original)
inline constexpr guest::Function<0x00312a40, u32(u32, u32, u32, u32)> call_00312a40;  // (from the original)

u32 f_001138ec(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r0_7 = 0;
    u32 r3_7 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r1_8 = 0;
    u32 r0_9 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_10 = 0;
    u32 r3_10 = 0;
    u32 r1_9 = 0;
    u32 r0_11 = 0;
    u32 r1_10 = 0;
    u32 r2_9 = 0;
    u32 r3_11 = 0;
    u32 r0_12 = 0;
    u32 r1_11 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_12 = 0;
    u32 r2_10 = 0;
    u32 r3_12 = 0;
    u32 r0_15 = 0;
    u32 r2_11 = 0;
    u32 r3_13 = 0;
    u32 r0_16 = 0;
    u32 r2_12 = 0;
    u32 r3_14 = 0;
    u32 r1_13 = 0;
    u32 r0_17 = 0;
    u32 r1_14 = 0;
    u32 r2_13 = 0;
    u32 r3_15 = 0;
    u32 r0_18 = 0;
    u32 r1_15 = 0;
    u32 r2_14 = 0;
    u32 r0_19 = 0;
    u32 r1_16 = 0;
    u32 r2_15 = 0;
    u32 r3_16 = 0;
    u32 r0_20 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00308d4c(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = *gptr<u16>(r1 + 0x2cu);  // (from the original)
    *gptr<u16>(r13 + 0x2cu) = u16(r1_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00311744(0xa8349cu, r1_1, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x30u) = u32(r0_1);  // (from the original)
    r1_2 = *gptr<u16>(r13 + 0x2cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301e6c(0xa83aecu, r1_2, r2_2, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_3 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    if (r0_3 == 0) {
        r13 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    if (r0_2 == 0) {
        r13 = r13 + 0x50u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb328(r0_3, r1_3, r2_3, r3_3);
    r3_4 = r0_4 + 0x80u + 0x62138u;  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(u32(*gptr<u8>(r0_2 + 0x1cu)) >> 4);  // (from the original)
    r2_4 = r13 + 0xcu;  // (from the original)
    r1_4 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00308380(r0, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fb328(r0_5, r1_5, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_6 = r0_6 + 0x80u + 0x62138u;  // (from the original)
    r0_7 = r0 + (0x45u << 5);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030f52c(r0_7, r1_6, r2_6, r3_6);
    r3_7 = guest::cpu()->r[3];
    r1_7 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r0_8 = r0 + 0x249au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_8, r1_7, 0x58u, r3_7);  // (from the original)
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r1_8 = r0 + (0x25u << 8);  // (from the original)
    *gptr<u8>(r1_8 + 8u) = u8(3u);
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fb378(3u, r1_8, r2_7, r3_8);
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_10 = r0 + 0x250au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030f56c(r0_10, r0_9, r2_8, r3_9);
    r3_10 = guest::cpu()->r[3];
    r1_9 = r13 + 0x14u;  // (from the original)
    r0_11 = r13;
    guest::cpu()->r[13] = r13;
    call_003083bc(r0_11, r1_9, 0xbu, r3_10);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_12 = call_003083d4(r0_2, r1_10, r2_9, r3_11);
    r1_11 = r13;
    r0_13 = *global_0095debc;
    guest::cpu()->r[13] = r13;
    r0_14 = call_003083e4(r0_13, r1_11, 0x88eedcu, r0_12);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    if (r0_14 != 0) {
        guest::cpu()->r[13] = r13;
        r0_15 = call_00312a40(r0, r1_12, r2_10, r3_12);
        r2_11 = guest::cpu()->r[2];
        r3_13 = guest::cpu()->r[3];
        r0_16 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00308450(r0_16, r0_15, r2_11, r3_13);
        r2_12 = guest::cpu()->r[2];
        r3_14 = guest::cpu()->r[3];
        r1_13 = r13;
        r0_17 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030846c(r0_17, r1_13, r2_12, r3_14);
        r1_14 = guest::cpu()->r[1];
        r2_13 = guest::cpu()->r[2];
        r3_15 = guest::cpu()->r[3];
        r0_18 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003084c8(r0_18, r1_14, r2_13, r3_15);
        r3_12 = guest::cpu()->r[3];
    }
    r1_15 = r1 + 0x30u;  // (from the original)
    r2_14 = 0x79u << 5;  // (from the original)
    r0_19 = r0 + 0x8eeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_19, r1_15, r2_14, r3_12);
    r1_16 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_20 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_003084cc(r0_20, r1_16, r2_15, r3_16);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_001138ec
GUEST_EXPORT(0x001138ed, d_001138ec::f_001138ec);

// f_001139f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001139f4 {


u32 f_001139f4() {
    return guest::call_address<u32>(0x1139fdu, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001139f4
GUEST_EXPORT(0x001139f4, d_001139f4::f_001139f4);

// f_00113ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113ca4 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x00313161, u32(u32, u32, u32, u32)> call_00313160;  // (from the original)

u32 f_00113ca4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r3_2 = 0;
    u32 r1_4 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fcaf4(r1, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        goto L_113cf0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0030b6b8(r1, r1_1, guest::cpu()->r[2], r3_1);
    r3 = guest::cpu()->r[3];
    r7 = 0x8c6u;  // (from the original)
    *gptr<u32>(r13) = u32(r0_2);
    r5 = r6 + r7;
    r4 = 0u;
    do {
L_113cc2:;
        r1_2 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        r0_3 = call_002fcb84(r5, r1_2, guest::cpu()->r[2], r3);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0_3 == 0)) {
            if (r4 >= 4u) {
                goto L_113cf0;
            }
            r0_4 = (r4 << 2) + r6 + r7;
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r0_4, 0x95bfdcu, guest::cpu()->r[2], r3);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            r3_2 = guest::cpu()->r[3];
            guest::cpu()->r[13] = r13;
            call_00313160(r6, r1_3, guest::cpu()->r[2], r3_2);
            r1_4 = guest::cpu()->r[1];
            r13 = r13 + 0x18;  // (from the original)
            guest::cpu()->r[1] = r1_4;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        r4 = r4 + 1u;
        r5 = r5 + 4u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
L_113cf0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00113ca4
GUEST_EXPORT(0x00113ca5, d_00113ca4::f_00113ca4);

// f_00113cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113cfc {


u32 f_00113cfc(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r2_1 = r1 << 2;
    r0_1 = r2_1 + r0 + 0x8c6u;  // (from the original)
    guest::cpu()->r[1] = 0x8c6u;  // (from the original)
    return r0_1;
}

}  // namespace d_00113cfc
GUEST_EXPORT(0x00113cfd, d_00113cfc::f_00113cfc);

// f_00113d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113d14 {

inline constexpr guest::Function<0x001b4980, u32(u32, u32, u32, u32)> call_001b4980;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00301e94, u32(u32, u32, u32, u32)> call_00301e94;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)
inline constexpr guest::Function<0x0030a480, u32(u32, u32, u32, u32)> call_0030a480;  // (from the original)
inline constexpr guest::Function<0x0030a484, u32(u32, u32, u32, u32)> call_0030a484;  // (from the original)
inline constexpr guest::Function<0x00313414, u32(u32, u32, u32, u32)> call_00313414;  // (from the original)

u32 f_00113d14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_1 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_3 = 0;
    u32 r2_2 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r3_4 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_2 = 0;
    u32 r0_18 = 0;
    u32 r2_3 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r3_5 = 0;
    u32 r2_4 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r3_6 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_8 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_4 = 0;
    u32 r2_7 = 0;
    u32 r3_9 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_5 = 0;
    u32 r2_8 = 0;
    u32 r3_10 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_6 = 0;
    u32 r2_9 = 0;
    u32 r3_11 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_12 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r3_13 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r3_14 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_10 = 0;
    u32 r2_13 = 0;
    u32 r3_15 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_11 = 0;
    u32 r2_14 = 0;
    u32 r3_16 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_12 = 0;
    u32 r2_15 = 0;
    u32 r3_17 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r1_13 = 0;
    u32 r2_16 = 0;
    u32 r3_18 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r1_14 = 0;
    u32 r2_17 = 0;
    u32 r3_19 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r1_15 = 0;
    u32 r2_18 = 0;
    u32 r3_20 = 0;
    u32 r0_53 = 0;
    u32 r0_54 = 0;
    u32 r1_16 = 0;
    u32 r2_19 = 0;
    u32 r3_21 = 0;
    u32 r0_55 = 0;
    u32 r0_56 = 0;
    u32 r1_17 = 0;
    u32 r2_20 = 0;
    u32 r3_22 = 0;
    u32 r0_57 = 0;
    u32 r0_58 = 0;
    u32 r1_18 = 0;
    u32 r2_21 = 0;
    u32 r3_23 = 0;
    u32 r0_59 = 0;
    u32 r0_60 = 0;
    u32 r1_19 = 0;
    u32 r2_22 = 0;
    u32 r3_24 = 0;
    u32 r0_61 = 0;
    u32 r0_62 = 0;
    u32 r1_20 = 0;
    u32 r2_23 = 0;
    u32 r3_25 = 0;
    u32 r0_63 = 0;
    u32 r0_64 = 0;
    u32 r1_21 = 0;
    u32 r2_24 = 0;
    u32 r3_26 = 0;
    u32 r0_65 = 0;
    u32 r0_66 = 0;
    u32 r1_22 = 0;
    u32 r2_25 = 0;
    u32 r3_27 = 0;
    u32 r0_67 = 0;
    u32 r0_68 = 0;
    u32 r3_28 = 0;
    u32 r0_69 = 0;
    u32 r0_70 = 0;
    u32 r2_26 = 0;
    u32 r3_29 = 0;
    u32 r4_1 = 0;
    u32 r1_23 = 0;
    r0_1 = r0 + 0x30u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_001b4980(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x30u + 0x8b6u;  // (from the original)
    r0_4 = call_0030a480(r0_3, 0x8b6u, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0xfffff74au + 0x8beu;  // (from the original)
    r0_6 = call_00313414(r0_5, 0x8beu, 0xfffff74au, r3_2);  // (from the original)
    r0_7 = r0_6 + 0xfffff742u + 0x8c6u;  // (from the original)
    r0_8 = call_00301d0c(r0_7, 0x2fc20cu, 4u, 4u);  // (from the original)
    r1_1 = u32(0) - 0x8c6u;  // (from the original)
    r0_9 = r0_8 + r1_1;
    r0_10 = r0_9 + 0x8d6u;  // (from the original)
    r0_11 = call_00301d0c(r0_10, 0x2fc20cu, 4u, 4u);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r2_2 = u32(0) - 0x8d6u;  // (from the original)
    r0_12 = r0_11 + r2_2 + 0x8e6u;  // (from the original)
    r0_13 = call_002fc20c(r0_12, 0x8e6u, r2_2, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_14 = r0_13 + 0xfffff71au + 0x8eau;  // (from the original)
    r0_15 = call_002fc20c(r0_14, 0x8eau, 0xfffff71au, r3_4);  // (from the original)
    r0_16 = r0_15 + 0xfffff716u + 0x8eeu;  // (from the original)
    r0_17 = call_00301d0c(r0_16, 0x113fe5u, 0xf2u, 0x10u);  // (from the original)
    r1_2 = u32(0) - 0x8eeu;  // (from the original)
    r0_18 = r0_17 + r1_2;
    r2_3 = 5u << 7;
    r0_19 = r0_18 + 0x1810u;  // (from the original)
    r0_20 = call_00301d0c(r0_19, 0x2ff368u, r2_3, 4u);  // (from the original)
    r3_5 = guest::cpu()->r[3];
    r2_4 = u32(0) - 0x1810u;  // (from the original)
    r0_21 = r0_20 + r2_4 + 0x2210u;  // (from the original)
    r0_22 = call_002ff368(r0_21, 0x2210u, r2_4, r3_5);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r0_23 = r0_22 + 0xffffddf0u + 0x2490u;  // (from the original)
    r0_24 = call_0030a484(r0_23, 0x2490u, 0xffffddf0u, r3_6);  // (from the original)
    r0_25 = r0_24 + 0xffffdb70u + 0x2492u;  // (from the original)
    r0_26 = call_00301d0c(r0_25, 0x612d0cu, 2u, 4u);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_27 = r0_26 + (u32(0) - 0x2492u) + 0x249au;  // (from the original)
    r0_28 = call_002fc20c(r0_27, 0x249au, r2_5, r3_7);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_29 = r0_28 + 4u;
    r0_30 = call_002fc20c(r0_29, r1_3, r2_6, r3_8);
    r1_4 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_31 = r0_30 + 4u;
    r0_32 = call_002fc20c(r0_31, r1_4, r2_7, r3_9);
    r1_5 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_33 = r0_32 + 4u;
    r0_34 = call_002fc20c(r0_33, r1_5, r2_8, r3_10);
    r1_6 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_35 = r0_34 + 4u;
    r0_36 = call_002fc20c(r0_35, r1_6, r2_9, r3_11);
    r1_7 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_37 = r0_36 + 4u;
    r0_38 = call_002fc20c(r0_37, r1_7, r2_10, r3_12);
    r1_8 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_39 = r0_38 + 4u;
    r0_40 = call_002fc20c(r0_39, r1_8, r2_11, r3_13);
    r1_9 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_41 = r0_40 + 4u;
    r0_42 = call_002fc20c(r0_41, r1_9, r2_12, r3_14);
    r1_10 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_43 = r0_42 + 4u;
    r0_44 = call_002fc20c(r0_43, r1_10, r2_13, r3_15);
    r1_11 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_45 = r0_44 + 4u;
    r0_46 = call_002fc20c(r0_45, r1_11, r2_14, r3_16);
    r1_12 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_47 = r0_46 + 4u;
    r0_48 = call_002fc20c(r0_47, r1_12, r2_15, r3_17);
    r1_13 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_49 = r0_48 + 4u;
    r0_50 = call_002fc20c(r0_49, r1_13, r2_16, r3_18);
    r1_14 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_51 = r0_50 + 4u;
    r0_52 = call_002fc20c(r0_51, r1_14, r2_17, r3_19);
    r1_15 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_53 = r0_52 + 4u;
    r0_54 = call_002fc20c(r0_53, r1_15, r2_18, r3_20);
    r1_16 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_55 = r0_54 + 4u;
    r0_56 = call_002fc20c(r0_55, r1_16, r2_19, r3_21);
    r1_17 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_57 = r0_56 + 4u;
    r0_58 = call_002fc20c(r0_57, r1_17, r2_20, r3_22);
    r1_18 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_59 = r0_58 + 4u;
    r0_60 = call_002fc20c(r0_59, r1_18, r2_21, r3_23);
    r1_19 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_61 = r0_60 + 4u;
    r0_62 = call_002fc20c(r0_61, r1_19, r2_22, r3_24);
    r1_20 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_63 = r0_62 + 4u;
    r0_64 = call_002fc20c(r0_63, r1_20, r2_23, r3_25);
    r1_21 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    r0_65 = r0_64 + 4u;
    r0_66 = call_002fc20c(r0_65, r1_21, r2_24, r3_26);
    r1_22 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r0_67 = r0_66 + 4u;
    r0_68 = call_002fc20c(r0_67, r1_22, r2_25, r3_27);
    r3_28 = guest::cpu()->r[3];
    r0_69 = r0_68 - 0x50u + 0xffffdb66u + 0x250au;  // (from the original)
    r0_70 = call_00301e94(r0_69, 0x250au, 0xffffdb66u, r3_28);  // (from the original)
    r2_26 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r4_1 = r0_70 + 0xffffdaf6u;  // (from the original)
    call_00308d4c(r4_1, 0xffffdaf6u, r2_26, r3_29);  // (from the original)
    r1_23 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_23;
    return r4_1;
}

}  // namespace d_00113d14
GUEST_EXPORT(0x00113d15, d_00113d14::f_00113d14);

// f_00113ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113ecc {

inline constexpr guest::Function<0x001df5e8, u32(u32, u32, u32, u32)> call_001df5e8;  // (from the original)
inline constexpr guest::Function<0x001df668, u32(u32, u32, u32, u32)> call_001df668;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32, u32)> call_00308970;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32, u32, u32, u32)> call_00313440;  // (from the original)

u32 f_00113ecc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r0_1 = r0 + 0xb6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_001df5e8(r0_1, 1u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb328(r0_2, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r1_2 = r0_3 + 0x80u + 0x29220u + 4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00308970(r1, r1_2, 0xau, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f74c8(r0_4, r1_3, r2_2, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_00313440(r0_5, r1_4, r2_3, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb328(r0_6, r1_5, r2_4, r3_5);
    r3_6 = guest::cpu()->r[3];
    r1_6 = r0_7 + 0x80u + 0x29220u + 4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00308970(r1, r1_6, 0xau, r3_6);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_6 == r0_8) {
        guest::cpu()->r[13] = r13;
        r0_8 = call_001df668(r0_1, 1u, r2_5, r3_7);
        r1_7 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_00113ecc
GUEST_EXPORT(0x00113ecd, d_00113ecc::f_00113ecc);

// f_00113f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113f1c {

struct __attribute__((packed)) Object_00113f1c_0 {
    u8 unknown_0[0xb6];  // (not used here)
    u8 byte_b6;
};
GUEST_OFFSET(Object_00113f1c_0, byte_b6, 0xb6);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32, u32)> call_003091e0;  // (from the original)
inline constexpr guest::Function<0x003091ec, u32(u32, u32, u32, u32)> call_003091ec;  // (from the original)
inline constexpr guest::Function<0x00311f7d, u32(u32, u32, u32, u32)> call_00311f7c;  // (from the original)
inline constexpr guest::Function<0x00312434, u32(u32, u32, u32, u32)> call_00312434;  // (from the original)

u32 f_00113f1c(gptr<Object_00113f1c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r7_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 tpc_1 = 0;
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 r7_3 = 0;
    u32 tpc_2 = 0;
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r4);
    *gptr<u32>(ea_1 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r13 = ea_1 - 0xcu;  // (from the original)
    r5 = r0;
    r0_1 = (u32(arg0->byte_b6) << 0x1a >> 0x1d) + 1u;  // (from the original)
    *gptr<u32>(r13) = u32(r0_1);
    if (r0_1 > 3u) {
        r0_1 = 3u;
        *gptr<u32>(r13) = u32(r0_1);
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb310(r0_2, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r7 = 0x8eeu;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r13 + 4u) = u32(r0_3 + 4u);
L_113f46:;
    r0 = *gptr<u32>(r13 + 4u);
    if (r6 >= 0xau) {  // (from the original)
        goto L_113f6a;
    }
    r1 = r6 * 0x2518u;  // (from the original)
    res_1 = r1 + r0;
    r4 = res_1;
    if (res_1 == 0) {
        goto L_113fc0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r4, r1, 0x2518u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_113fc0;
    }
L_113f60:;
    if (r4 == 0) {
        goto L_113fc0;
    }
    r0 = 0u;
    r1 = r0;
    goto L_113f74;
L_113f6a:;
    r4 = 0u;
    guest::preempt();
    goto L_113f60;
L_113f6e:;
    r1 = r0;
    if (r0 >= 0x10u) {  // (from the original)
        goto L_113f7e;
    }
L_113f74:;
    r2 = 0xf2u;  // (from the original)
    r1 = r1 * r2 + r4 + r7;
    goto L_113f80;
L_113f7e:;
    r1 = 0u;
L_113f80:;
    if (r1 != r5) {
        goto L_113fba;
    }
    r0_4 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r5_1 = *gptr<u32>(r13);
    if (r0_4 == 0) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_003091e0(r0_4, r1, r2, r3);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_4 = call_003091ec(r0_5, r1_2, r2_2, r3_2);
        r1 = guest::cpu()->r[1];
    }
    r7_1 = r0_4;
    if (r0_4 == 0) {
        goto L_113fb6;
    }
    r2_3 = r7_1 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00311f7c(r4, r5_1, r2_3, 1u);
    r1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0 || r0_4 >> 0x1f != (r0_4 & (r0_4 ^ r0_4)) >> 0x1f) {  // (from the original)
        goto L_113fb6;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_00312434(r7_1, r0_4, 1u, r3_3);
    r1 = guest::cpu()->r[1];
L_113fb6:;
    r13 = r13 + 0x14u;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_113fba:;
    r0 = r0 + 1u;
    if (r0 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_113f6e;
    }
L_113fc0:;
    r6 = r6 + 1u;
    if (s32(r6) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_113f46;
    }
    r13 = r13 + 0x14u;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_3 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_3 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_2 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00113f1c
GUEST_EXPORT(0x00113f1d, d_00113f1c::f_00113f1c);

// f_00114088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114088 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00301484, u32(u32, u32, u32, u32)> call_00301484;  // (from the original)
inline constexpr guest::Function<0x0030a62c, u32(u32, u32, u32, u32)> call_0030a62c;  // (from the original)
inline constexpr guest::Function<0x0031118c, u32(u32, u32, u32, u32)> call_0031118c;  // (from the original)
inline constexpr guest::Function<0x003122bd, u32(u32, u32, u32, u32)> call_003122bc;  // (from the original)
inline constexpr guest::Function<0x0031237d, u32(u32, u32, u32, u32)> call_0031237c;  // (from the original)
inline constexpr guest::Function<0x00313a40, u32(u32, u32, u32, u32)> call_00313a40;  // (from the original)

u32 f_00114088(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 res_1 = 0;
    u32 r0_8 = 0;
    u32 res_2 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_13 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r13 = ea_1 - 0xcu;  // (from the original)
    r0_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0031118c(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r0_3 = *gptr<u16>(*gptr<u32>(r13 + 0x10u) + 0x2cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_00313a40(r0_3, r1_1, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        r3_1 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_11413e;
        }
    }
    if (r2 >= 2u) {
        goto L_11413e;
    }
    if (r3 >= 2u) {
        goto L_11413e;
    }
    r0_4 = 0x4a30u * r2 + r0 + r3 * 0x2518u;  // (from the original)
    r1_2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0_4);
    guest::cpu()->r[13] = r13;
    call_002fbb30(r0_4, r1_2, 0x2518u, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r2 != 1u) {
        goto L_114120;
    }
    if (r3 != 1u) {
        goto L_114120;
    }
    r4_1 = 0x4a30u + r0 + 0x2518u;  // (from the original)
    r1_3 = r3 - 2u;
    *gptr<u32>(r13) = u32(r4_1);
    *gptr<u8>(r4_1 + (0x25u << 8) + 0x14u) = u8(r1_3);  // (from the original)
    r4 = *gptr<u32>(r13);
    r0_5 = r4 + 0x2210u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff408(r0_5, r1_3, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x1810u;  // (from the original)
    r7 = 0x7dbu;  // (from the original)
    r5 = 0u;
    do {
L_1140f2:;
        r0_6 = (5u << 7) * r5 + r4 + r6;
        guest::cpu()->r[13] = r13;
        call_002ff408(r0_6, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_7 = r5 << 0x18;  // (from the original)
        r5 = r5 + 1u;
        res_1 = r0_7 >> 0x17;  // (from the original)
        r1 = res_1 + r4;
        r0_8 = r1 + (0x49u << 7);  // (from the original)
        res_2 = r5 - 4u;
        *gptr<u16>(r0_8 + 0x12u) = u16(r7);  // (from the original)
        guest::preempt();
    } while (res_2 >> 0x1f != ((r5 ^ 4u) & (r5 ^ res_2)) >> 0x1f);  // (from the original)
    r0_9 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    call_003122bc(r0_9, r1, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_10 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    call_0031237c(r0_10, r1_4, r2_3, r3_3);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_114120:;
    r1_5 = 0x45u << 5;  // (from the original)
    r0_11 = *gptr<u8>(*gptr<u32>(r13 + 0x10u) + r1_5 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0030a62c(r0_11, r1_5, r2_2, r3_2);
    r1_6 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301484(r0_12, r1_6, r2_4, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_12 == r0_2) {
        goto L_11413e;
    }
    r0_13 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_003122bc(r0_13, r1_1, r2_5, r3_5);
    r1_1 = guest::cpu()->r[1];
L_11413e:;
    r13 = r13 + 0x1cu;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00114088
GUEST_EXPORT(0x00114089, d_00114088::f_00114088);

// f_00114160: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114160 {

inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)

u32 f_00114160(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 tpc_1 = 0;
    if (r1 >= 2u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r2 >= 2u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = ea_1;
    r3_1 = u32(s32(0x4a30u) >> 1);  // (from the original)
    r1_1 = r1 * 0x4a30u;  // (from the original)
    r2_1 = r2 * r3_1;
    r0_1 = r1_1 + r0 + r2_1;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00308d4c(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r4_1 = *gptr<u32>(r13);
    tpc_1 = *gptr<u32>(r13 + 4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00114160
GUEST_EXPORT(0x00114161, d_00114160::f_00114160);

// f_00114184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114184 {


u32 f_00114184() {
    return guest::call_address<u32>(0x11418du, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00114184
GUEST_EXPORT(0x00114184, d_00114184::f_00114184);

// f_00114694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114694 {

struct __attribute__((packed)) Object_00114694_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00114694_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00114694_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00114694_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00114694_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00114694_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00114694_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00114694_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;  // (from the original)
inline constexpr guest::Function<0x00314258, u32(u32, u32, u32, u32)> call_00314258;  // (from the original)
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> call_00314278;  // (from the original)
inline constexpr guest::Function<0x003142e0, u32(u32, u32, u32, u32)> call_003142e0;  // (from the original)

u32 f_00114694(u32 r0, gptr<Object_00114694_1> arg1, gptr<Object_00114694_2> arg2) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r6_1 = 0;
    u32 r3_7 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    r1_1 = arg1->word_4;
    r13 = r13 - 0x30u;  // (from the original)
    r2_1 = arg1->word_8;
    r3_1 = r13 + 8u;
    *gptr<u32>(r3_1) = u32(arg1->word_0);
    *gptr<u32>(r3_1 + 4) = u32(r1_1);
    *gptr<u32>(r3_1 + 8) = u32(r2_1);
    r3_2 = r13 + 0x14u;  // (from the original)
    r1_2 = arg2->word_4;
    r2_2 = arg2->word_8;
    *gptr<u32>(r3_2) = u32(arg2->word_0);
    *gptr<u32>(r3_2 + 4) = u32(r1_2);
    *gptr<u32>(r3_2 + 8) = u32(r2_2);
    r3_3 = r3_2 + 0xc;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00314258(r0_1, r1_2, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_2 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00314258(r0_2, r1_3, r2_3, r3_4);
    r1_4 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x18u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1_4);
    ea_1 = r13 + 8u;
    r0_3 = *gptr<u32>(ea_1);
    r1_5 = *gptr<u32>(ea_1 + 4);
    r2_4 = *gptr<u32>(ea_1 + 8);
    r3_5 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00314278(r0_3, r1_5, r2_4, r3_5);
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r5_1 = r0 + 0x8b78u;  // (from the original)
    if (r0_4 == 0) {
        guest::cpu()->r[13] = r13;
        call_003142e0(r5_1, 0x8b78u, r2_5, r3_6);  // (from the original)
    }
    r0_5 = *gptr<u32>(r2 + 4u);
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r2 + 8u));
    *gptr<u32>(r13) = u32(r0_5);
    r0_6 = *gptr<u32>(r1);
    r1_6 = *gptr<u32>(r1 + 4);
    r2_6 = *gptr<u32>(r1 + 8);
    r6_1 = r1 + 0xc;  // (from the original)
    r3_7 = *gptr<u32>(r2);
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb4a0(r0_6, r1_6, r2_6, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        guest::cpu()->r[13] = r13;
        r0_7 = call_003142e0(r5_1, r1_7, r2_7, r3_8);
        r1_7 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_00114694
GUEST_EXPORT(0x00114695, d_00114694::f_00114694);

// f_001146fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001146fc {

inline constexpr guest::Function<0x00108b89, u32(u32, u32, u32, u32)> call_00108b88;  // (from the original)
inline constexpr guest::Function<0x0010a44d, u32(u32, u32, u32, u32)> call_0010a44c;  // (from the original)
inline constexpr guest::Function<0x0010a841, u32(u32, u32, u32, u32)> call_0010a840;  // (from the original)
inline constexpr guest::Function<0x0010abc9, u32(u32, u32, u32, u32)> call_0010abc8;  // (from the original)
inline constexpr guest::Function<0x0010af73, u32(u32, u32, u32, u32)> call_0010af72;  // (from the original)
inline constexpr guest::Function<0x0010b3b1, u32(u32, u32, u32, u32)> call_0010b3b0;  // (from the original)
inline constexpr guest::Function<0x0010b449, u32(u32, u32, u32, u32)> call_0010b448;  // (from the original)
inline constexpr guest::Function<0x0010b6dd, u32(u32, u32, u32, u32)> call_0010b6dc;  // (from the original)
inline constexpr guest::Function<0x001e546c, u32(u32, u32, u32, u32)> call_001e546c;  // (from the original)
inline constexpr guest::Function<0x0020d27c, u32(u32, u32, u32, u32)> call_0020d27c;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)

u32 f_001146fc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_001e546c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = r0 + 0x4494u;  // (from the original)
    call_0010b3b0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x44e0u;  // (from the original)
    call_0010a840(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0 + 0x45ccu;  // (from the original)
    call_00108b88(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = r0 + 0x8a6cu;  // (from the original)
    r0_5 = call_0010af72(r0_4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_6 = call_00300904(r0_5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        r0_7 = r0 + 0x45fcu;  // (from the original)
        call_0020d27c(r0_7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_8 = r0 + 0x4650u;  // (from the original)
    call_0010abc8(r0_8, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_9 = r0 + 0x8a7eu;  // (from the original)
    call_0010b6dc(r0_9, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_10 = r0 + 0x8b32u;  // (from the original)
    call_0010a44c(r0_10, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_11 = r0 + 0x8b60u;  // (from the original)
    r0_12 = call_0010b448(r0_11, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_12;
}

}  // namespace d_001146fc
GUEST_EXPORT(0x001146fd, d_001146fc::f_001146fc);

// f_001147a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001147a8 {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> call_002faedc;  // (from the original)
inline constexpr guest::Function<0x002fea95, u32(u32, u32, u32, u32)> call_002fea94;  // (from the original)

u32 f_001147a8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r1_1 = r13;
    *gptr<u8>(r1_1) = u8(r0);
    guest::cpu()->r[13] = r13;
    call_002faedc(0x105ccdu, r1_1, guest::cpu()->r[2], r3);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fea94(0x105ccdu, r1_2, guest::cpu()->r[2], r3_1);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_001147a8
GUEST_EXPORT(0x001147a9, d_001147a8::f_001147a8);

// f_00114810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114810 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32, u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0032cef4, u32(u32, u32, u32, u32)> call_0032cef4;  // (from the original)
inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> call_005b4d7c;  // (from the original)
inline constexpr guest::Function<0x005c5bb8, u32(u32, u32, u32, u32)> call_005c5bb8;  // (from the original)
inline constexpr guest::Function<0x006b7380, u32(u32, u32, u32, u32)> call_006b7380;  // (from the original)
inline constexpr guest::Function<0x006b8cb8, u32(u32, u32, u32, u32)> call_006b8cb8;  // (from the original)
inline constexpr guest::Function<0x006bced4, u32(u32, u32, u32, u32)> call_006bced4;  // (from the original)
inline constexpr guest::Function<0x006e08b4, u32(u32, u32, u32, u32)> call_006e08b4;  // (from the original)

u32 f_00114810(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00308340(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4u) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_005b4d7c(r0_1, 0x66u, 0u, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030b6c4(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        guest::cpu()->r[13] = r13;
        call_0032cef4(r0_3, r1_2, r2_2, r3_2);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_3 = call_006e08b4(0u, r1_3, r2_3, r3_3);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb94c(r0_3, r1_2, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_006bced4(r0_4, r1_4, r2_4, r3_4);
        r1_5 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r0_6 = r0_4 + 0x6b8cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_7 = call_00303660(r0_6, r1_5, r2_5, r3_5);
        r1_6 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_8 = call_002fd068(r0_7, r1_6, r2_6, r3_6);
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_9 = call_006b8cb8(r0_8, r0_7, r2_7, r3_7);
        r1_7 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_10 = call_002fd068(r0_9, r1_7, r2_8, r3_8);
        r2_9 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_4 = call_006b7380(r0_10, r0_5, r2_9, r3_9);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_005c5bb8(r0_4, r1_4, r2_4, r3_4);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(0x1148c5u, r0_11, r1_8, r2_10, r3_10);  // (from the original)
}

}  // namespace d_00114810
GUEST_EXPORT(0x00114810, d_00114810::f_00114810);

// f_00114ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114ae0 {

inline constexpr guest::Function<0x002fd649, u32(u32, u32, u32, u32)> call_002fd648;  // (from the original)

u32 f_00114ae0(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fd648(0x10617du, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00114ae0
GUEST_EXPORT(0x00114ae1, d_00114ae0::f_00114ae0);

// f_00114af0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114af0 {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> call_002faedc;  // (from the original)

u32 f_00114af0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    *gptr<u16>(r13) = u16(0u);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002faedc(0x105bf5u, r1_1, guest::cpu()->r[2], r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_1 = *gptr<u16>(r13);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00114af0
GUEST_EXPORT(0x00114af1, d_00114af0::f_00114af0);

// f_00114b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114b28 {

inline constexpr guest::Function<0x002faf8d, u32(u32, u32, u32, u32)> call_002faf8c;  // (from the original)

u32 f_00114b28(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    call_002faf8c(0xa14b1cu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r0_1 = *gptr<u32>(0xa14b1cu + 8u);  // (from the original)
    if (r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        r0_1 = 0u;
        goto L_114b42;
    }
    if (s32(r0_1) < s32(0x64u)) {  // (from the original)
        goto L_114b42;
    }
    r0_1 = 0x64u;  // (from the original)
L_114b42:;
    r1_1 = *gptr<u32>(0xa14b1cu + 0xcu);  // (from the original)
    if (r1_1 >> 0x1f != (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        r1_1 = 0u;
        goto L_114b52;
    }
    if (s32(r1_1) < s32(0x64u)) {  // (from the original)
        goto L_114b52;
    }
    r1_1 = 0x64u;  // (from the original)
L_114b52:;
    r1_2 = r0_1 + r1_1;
    r0_2 = *gptr<u32>(0xa14b1cu + 0x10u);  // (from the original)
    if (r0_2 >> 0x1f != (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
        r0_3 = r1_2 + 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
    if (s32(r0_2) < s32(0x64u)) {  // (from the original)
        r0_4 = r1_2 + r0_2;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_4;
    }
    r0_5 = r1_2 + 0x64u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_00114b28
GUEST_EXPORT(0x00114b29, d_00114b28::f_00114b28);

// f_00114bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114bd0 {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> call_002faedc;  // (from the original)

u32 f_00114bd0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    *gptr<u16>(r13) = u16(0u);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002faedc(0x105e15u, r1_1, guest::cpu()->r[2], r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_1 = *gptr<u16>(r13);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00114bd0
GUEST_EXPORT(0x00114bd1, d_00114bd0::f_00114bd0);

// f_00114c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114c70 {

inline constexpr guest::Function<0x00314c75, u32(u32, u32, u32, u32)> call_00314c74;  // (from the original)

u32 f_00114c70() {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00314c74(0x105c31u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_00114c70
GUEST_EXPORT(0x00114c71, d_00114c70::f_00114c70);

// f_00114c80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114c80 {

inline constexpr guest::Function<0x00314c75, u32(u32, u32, u32, u32)> call_00314c74;  // (from the original)

u32 f_00114c80() {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00314c74(0x105d05u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_00114c80
GUEST_EXPORT(0x00114c81, d_00114c80::f_00114c80);

// f_00114c90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114c90 {

inline guest::global<u8, 0x00952b9c> global_00952b9c;  // (from the original)

void f_00114c90(u32 r0) {
    *global_00952b9c = u8(r0);
    guest::cpu()->r[1] = 0x952b9cu;  // (from the original)
    return;
}

}  // namespace d_00114c90
GUEST_EXPORT(0x00114c91, d_00114c90::f_00114c90);

// f_00114c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114c9c {

inline constexpr guest::Function<0x002ffc8d, u32(u32, u32, u32, u32)> call_002ffc8c;  // (from the original)
inline constexpr guest::Function<0x00314ce4, u32(u32, u32, u32, u32)> call_00314ce4;  // (from the original)

u32 f_00114c9c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    call_00314ce4(0x952bdcu, r0, r2, r3);  // (from the original)
    r4 = 0u;
    r6 = 2u;
L_114caa:;
    r5 = 0u;
    do {
L_114cac:;
        r2_1 = r4 + 1u;
        r1_1 = r5 + 1u;
        *gptr<u32>(r13) = u32(r6);
        guest::cpu()->r[13] = r13;
        r0_1 = call_002ffc8c(0x1eu, r1_1, r2_1, 2u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(2u));
    r4 = r4 + 1u;
    if (s32(r4) < s32(2u)) {
        guest::preempt();
        goto L_114caa;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00114c9c
GUEST_EXPORT(0x00114c9d, d_00114c9c::f_00114c9c);

// f_00114d00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114d00 {

inline constexpr guest::Function<0x00103a1d, u32(u32, u32, u32, u32)> call_00103a1c;  // (from the original)
inline constexpr guest::Function<0x00103e39, u32(u32, u32, u32, u32)> call_00103e38;  // (from the original)
inline constexpr guest::Function<0x00106401, u32(u32, u32, u32, u32)> call_00106400;  // (from the original)
inline constexpr guest::Function<0x00107539, u32(u32, u32, u32, u32)> call_00107538;  // (from the original)
inline constexpr guest::Function<0x001083fd, u32(u32, u32, u32, u32)> call_001083fc;  // (from the original)
inline constexpr guest::Function<0x0020d904, u32(u32, u32, u32, u32)> call_0020d904;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32, u32)> call_002fd4b4;  // (from the original)
inline constexpr guest::Function<0x002fd844, u32(u32, u32, u32, u32)> call_002fd844;  // (from the original)
inline constexpr guest::Function<0x003081b0, u32(u32, u32, u32, u32)> call_003081b0;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x0030ac60, u32(u32, u32, u32, u32)> call_0030ac60;  // (from the original)
inline constexpr guest::Function<0x0030ac64, u32(u32, u32, u32, u32)> call_0030ac64;  // (from the original)
inline constexpr guest::Function<0x0030af68, u32(u32, u32, u32, u32)> call_0030af68;  // (from the original)
inline constexpr guest::Function<0x0030af6c, u32(u32, u32, u32, u32)> call_0030af6c;  // (from the original)
inline constexpr guest::Function<0x0030af70, u32(u32, u32, u32, u32)> call_0030af70;  // (from the original)
inline constexpr guest::Function<0x0030af74, u32(u32, u32, u32, u32)> call_0030af74;  // (from the original)
inline constexpr guest::Function<0x00312acc, u32(u32, u32, u32, u32)> call_00312acc;  // (from the original)
inline constexpr guest::Function<0x00314cec, u32(u32, u32, u32, u32)> call_00314cec;  // (from the original)

u32 f_00114d00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r3_5 = 0;
    u32 ea_1 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r1_8 = 0;
    u32 r0_10 = 0;
    u32 r1_9 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r1_10 = 0;
    u32 r0_13 = 0;
    u32 r3_11 = 0;
    u32 ea_2 = 0;
    u32 r1_11 = 0;
    u32 r2_10 = 0;
    u32 r1_12 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_13 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    u32 r3_14 = 0;
    u32 r2_13 = 0;
    u32 r3_15 = 0;
    u32 r2_14 = 0;
    u32 r3_16 = 0;
    u32 r2_15 = 0;
    u32 r0_18 = 0;
    u32 r1_14 = 0;
    u32 r2_16 = 0;
    u32 r3_17 = 0;
    u32 r0_19 = 0;
    u32 r1_15 = 0;
    u32 r2_17 = 0;
    u32 r3_18 = 0;
    u32 r1_16 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_19 = 0;
    u32 r0_22 = 0;
    u32 r2_19 = 0;
    u32 r3_20 = 0;
    u32 r0_23 = 0;
    u32 r1_18 = 0;
    u32 r0_24 = 0;
    u32 r1_19 = 0;
    u32 r2_20 = 0;
    u32 r3_21 = 0;
    u32 r0_25 = 0;
    u32 r2_21 = 0;
    u32 r3_22 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_20 = 0;
    u32 r2_22 = 0;
    u32 r3_23 = 0;
    u32 r0_28 = 0;
    u32 r1_21 = 0;
    u32 r2_23 = 0;
    u32 r3_24 = 0;
    u32 r0_29 = 0;
    u32 r1_22 = 0;
    u32 r3_25 = 0;
    u32 ea_3 = 0;
    u32 r1_23 = 0;
    u32 r2_24 = 0;
    r13 = r13 - 0x60u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0030ac60(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb378(r0_1, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r1_2 = *gptr<u32>(r0_2);
    r2_2 = *gptr<u32>(r0_2 + 4u);
    r0_3 = *gptr<u32>(r0_2 + 8u);
    *gptr<u32>(r13 + 0x20u) = u32(r1_2);  // (from the original)
    r1_3 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r0_3);  // (from the original)
    r0_4 = r13;
    *gptr<u32>(r13 + 0x24u) = u32(r2_2);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00312acc(r0_4, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_00314cec(r0_5, r1_4, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_5 = r13;
    r0_6 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_6, r1_5, r2_4, r3_4);
    r3_5 = r13 + 0x14u;  // (from the original)
    ea_1 = r13 + 0x40u;  // (from the original)
    r0_7 = *gptr<u32>(ea_1);
    r1_6 = *gptr<u32>(ea_1 + 4);
    r2_5 = *gptr<u32>(ea_1 + 8);
    *gptr<u32>(r3_5) = u32(r0_7);
    *gptr<u32>(r3_5 + 4) = u32(r1_6);
    *gptr<u32>(r3_5 + 8) = u32(r2_5);
    r3_6 = r3_5 + 0xc;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0030ac64(r0_7, r1_6, r2_5, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fb328(r0_8, r1_7, r2_6, r3_7);
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r6 = 0x621b2u;  // (from the original)
    r1_8 = r0_9 + 0x80u + r6;  // (from the original)
    r0_10 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003081b4(r0_10, r1_8, r2_7, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r4 = 0u;
    r0_11 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fb338(r0_11, r1_9, r2_8, r3_9);
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        goto L_114de8;
    }
    r1_10 = r13 + 0x30u;  // (from the original)
    r0_13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_13, r1_10, r2_9, r3_10);
    r3_11 = r13 + 8u;
    ea_2 = r13 + 0x40u;  // (from the original)
    r1_11 = *gptr<u32>(ea_2 + 4);
    r2_10 = *gptr<u32>(ea_2 + 8);
    *gptr<u32>(r3_11) = u32(*gptr<u32>(ea_2));
    *gptr<u32>(r3_11 + 4) = u32(r1_11);
    *gptr<u32>(r3_11 + 8) = u32(r2_10);
    r3 = r3_11 + 0xc;  // (from the original)
L_114d68:;
    r1_12 = r13 + 8u;
    r0_14 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fd4b4(r0_14, r1_12, 1u, r3);
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_16 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_17 = call_002fd844(r0_16, 0x2239u, r2_11, r3_12);  // (from the original)
    r1_13 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    if (r5 != 0) {
        guest::cpu()->r[13] = r13;
        r0_17 = call_0030af68(r0_17, r1_13, r2_12, r3_13);
        r1_13 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        r3_13 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    call_00107538(r0_17, r1_13, r2_12, r3_13);
    r3_14 = r13 + 8u;
    r2_13 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    call_00103e38(r5, r0_15, r2_13, r3_14);
    r3_15 = r13 + 8u;
    r2_14 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    call_00106400(r5, r0_15, r2_14, r3_15);
    r3_16 = r13 + 8u;
    r2_15 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_00103a1c(r5, r0_15, r2_15, r3_16);
    r1_14 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_19 = call_001083fc(r0_18, r1_14, r2_16, r3_17);
    r1_15 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    if (r5 != 0) {
        guest::cpu()->r[13] = r13;
        call_0030af6c(r0_19, r1_15, r2_17, r3_18);
        r2_17 = guest::cpu()->r[2];
        r3_18 = guest::cpu()->r[3];
    }
    r1_16 = r13 + 0x14u;  // (from the original)
    r0_20 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_00312acc(r0_20, r1_16, r2_17, r3_18);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_22 = call_002fae84(r0_21, r1_17, r2_18, r3_19);
    r2_19 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_23 = r0_22 + r6;
    r1_18 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_003081b0(r0_23, r1_18, r2_19, r3_20);
    r1_19 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_25 = call_002fae84(r0_24, r1_19, r2_20, r3_21);
    r2_21 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_26 = r0_25 + 0x62120u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_27 = call_0020d904(r0_26, 0x62120u, r2_21, r3_22);  // (from the original)
    r1_20 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_28 = call_0030af70(r0_27, r1_20, r2_22, r3_23);
    r1_21 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_29 = call_0030af74(r0_28, r1_21, r2_23, r3_24);
    r1_22 = guest::cpu()->r[1];
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1_22;
    guest::cpu()->r[13] = r13;
    return r0_29;
L_114de8:;
    r3_25 = r13 + 8u;
    ea_3 = r13 + 0x14u;  // (from the original)
    r1_23 = *gptr<u32>(ea_3 + 4);
    r2_24 = *gptr<u32>(ea_3 + 8);
    r4 = 1u;
    *gptr<u32>(r3_25) = u32(*gptr<u32>(ea_3));
    *gptr<u32>(r3_25 + 4) = u32(r1_23);
    *gptr<u32>(r3_25 + 8) = u32(r2_24);
    r3 = r3_25 + 0xc;  // (from the original)
    guest::preempt();
    goto L_114d68;
}

}  // namespace d_00114d00
GUEST_EXPORT(0x00114d01, d_00114d00::f_00114d00);

// f_00114e00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114e00 {

inline constexpr guest::Function<0x00314ce4, u32(u32, u32, u32, u32)> call_00314ce4;  // (from the original)

u32 f_00114e00(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00314ce4(0x952bdcu, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00114e00
GUEST_EXPORT(0x00114e01, d_00114e00::f_00114e00);

// f_00114e10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114e10 {

inline guest::global<u32, 0x00952ba0> global_00952ba0;  // (from the original)
inline constexpr guest::Function<0x002fc25c, u32(u32, u32, u32, u32)> call_002fc25c;  // (from the original)
inline constexpr guest::Function<0x002ffc18, u32(u32, u32, u32, u32)> call_002ffc18;  // (from the original)
inline constexpr guest::Function<0x002ffc8d, u32(u32, u32, u32, u32)> call_002ffc8c;  // (from the original)

u32 f_00114e10(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r0_1 = *global_00952ba0;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fc25c(r0_1, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r7 = 0u;
    r6 = r0_2;
    r5 = r7;
L_114e20:;
    r4 = 0u;
    do {
L_114e22:;
        r1_1 = r5 + 1u;
        r0_3 = r4 + 1u;
        guest::cpu()->r[13] = r13;
        r0_4 = call_002ffc18(r0_3, r1_1, 1u, r3);
        r1_2 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0_4 == 0)) {
            if (!(r7 != r6)) {
                r2_1 = r5 + 1u;
                r1_3 = r4 + 1u;
                *gptr<u32>(r13) = u32(3u);
                guest::cpu()->r[13] = r13;
                call_002ffc8c(1u, r1_3, r2_1, 1u);
                r1_4 = guest::cpu()->r[1];
                r2_2 = guest::cpu()->r[2];
                r3_1 = guest::cpu()->r[3];
                guest::cpu()->r[13] = r13;
                r0_5 = call_002fc25c(2u, r1_4, r2_2, r3_1);
                r1_5 = guest::cpu()->r[1];
                r2_3 = guest::cpu()->r[2];
                r3_2 = guest::cpu()->r[3];
                r4_1 = r0_5 + 1u;
                guest::cpu()->r[13] = r13;
                r0_6 = call_002fc25c(2u, r1_5, r2_3, r3_2);
                r1_6 = r0_6 + 1u;
                *gptr<u32>(r13) = u32(3u);
                guest::cpu()->r[13] = r13;
                r0_7 = call_002ffc8c(0x1eu, r1_6, r4_1, 1u);  // (from the original)
                r1_7 = guest::cpu()->r[1];
                r13 = r13 + 0x18;  // (from the original)
                guest::cpu()->r[1] = r1_7;
                guest::cpu()->r[13] = r13;
                return r0_7;
            }
            r7 = r7 + 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 5u);
    r5 = r5 + 1u;
    if (r5 < 4u) {
        guest::preempt();
        goto L_114e20;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_00114e10
GUEST_EXPORT(0x00114e11, d_00114e10::f_00114e10);

// f_00116cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00116cdc {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> call_002faedc;  // (from the original)
inline constexpr guest::Function<0x002fea95, u32(u32, u32, u32, u32)> call_002fea94;  // (from the original)

u32 f_00116cdc() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_002faedc(0x105971u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_1 = call_002fea94(0x105971u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00116cdc
GUEST_EXPORT(0x00116cdd, d_00116cdc::f_00116cdc);

// f_00116cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00116cf4 {

inline constexpr guest::Function<0x00114d01, u32(u32, u32, u32, u32)> call_00114d00;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x00308238, u32(u32, u32, u32, u32)> call_00308238;  // (from the original)
inline constexpr guest::Function<0x003082bc, u32(u32, u32, u32, u32)> call_003082bc;  // (from the original)
inline constexpr guest::Function<0x0030bd90, u32(u32, u32, u32, u32)> call_0030bd90;  // (from the original)

u32 f_00116cf4(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00114d00(1u, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(r0_1, r1_1, guest::cpu()->r[2], r3_1);
    r3 = guest::cpu()->r[3];
    r6 = 0x55a6u;  // (from the original)
    r7 = 0x5498u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r13) = u32(r0_2 + 0x20u);  // (from the original)
L_116d0a:;
    r0_3 = *gptr<u32>(r13);
    r1_2 = uxtb(r4);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb7e8(r0_3, r1_2, guest::cpu()->r[2], r3);
    r1_3 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r5_1 = r0_4;
    if (r0_4 == 0) {
        goto L_116d26;
    }
    r0_5 = r5_1 + r6;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fbd54(r0_5, r1_3, guest::cpu()->r[2], r3);
    r1_3 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_116d26;
    }
    r0_6 = r5_1 + r7;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0030bd90(r0_6, r1_3, guest::cpu()->r[2], r3);
    r1_3 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_116d26:;
    r4 = r4 + 1u;
    if (r4 < 4u) {
        guest::preempt();
        goto L_116d0a;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_003082bc(r0_4, r1_3, guest::cpu()->r[2], r3);
    r1_4 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_00308238(r0_7, r1_4, guest::cpu()->r[2], r3_2);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_00116cf4
GUEST_EXPORT(0x00116cf5, d_00116cf4::f_00116cf4);

// f_00116ebe: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00116ebe {

struct __attribute__((packed)) Object_00116ebe_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00116ebe_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00116ebe_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00116ebe_0, word_8, 0x8);  // (from the original)


void f_00116ebe(gptr<Object_00116ebe_0> arg0, u32 r1, u32 r2) {
    u32 sco = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 cf = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 res_4 = 0;
    u32 res_5 = 0;
    u32 res_6 = 0;
    u32 res_7 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r3 = 0u;
    r6 = 1u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r3);
    if (r1 != 0 && r1 >> 0x1f == (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        r4 = r1 << 0x1f >> 0x1f;  // (from the original)
        cf = r4 >= 0u;
        if (r4 != 0 && r4 >> 0x1f == (r4 & (r4 ^ r4)) >> 0x1f) {  // (from the original)
            goto L_116eda;
        }
        goto L_116eee;
    }
    r4 = 0u;
    goto L_116eee;
L_116eda:;
    sco = cf;
    res_1 = lsl_rc(r6, r3 & 0xff, &sco);  // (from the original)
    if ((res_1 & r2) != 0) {
        arg0->word_8 = u32(arg0->word_8 + 1u);
    }
    r3 = r3 + 1u;
    res_2 = r3 - r4;
    cf = r3 >= r4;
    if (res_2 >> 0x1f != ((r3 ^ r4) & (r3 ^ res_2)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_116eda;
    }
L_116eee:;
    res_3 = r4 - r1;
    cf = r4 >= r1;
    if (res_3 >> 0x1f == ((r4 ^ r1) & (r4 ^ res_3)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return;
    }
    do {
L_116ef2:;
        sco = cf;
        res_4 = lsl_rc(r6, r4 & 0xff, &sco);  // (from the original)
        if (!((res_4 & r2) == 0)) {
            arg0->word_8 = u32(arg0->word_8 + 1u);
        }
        res_5 = r4 + 1u;
        sco = u32(res_5 < r4);
        res_6 = lsl_rc(r6, res_5 & 0xff, &sco);  // (from the original)
        if (!((res_6 & r2) == 0)) {
            arg0->word_8 = u32(arg0->word_8 + 1u);
        }
        r4 = r4 + 2u;
        res_7 = r4 - r1;
        cf = r4 >= r1;
        guest::preempt();
    } while (res_7 >> 0x1f != ((r4 ^ r1) & (r4 ^ res_7)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    return;
}

}  // namespace d_00116ebe
GUEST_EXPORT(0x00116ebf, d_00116ebe::f_00116ebe);

// f_00116f2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00116f2c {

inline constexpr guest::Function<0x0030be88, u32(u32, u32, u32, u32)> call_0030be88;  // (from the original)

u32 f_00116f2c() {
    guest::cpu()->r[13] -= 8u;
    call_0030be88(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_00116f2c
GUEST_EXPORT(0x00116f2d, d_00116f2c::f_00116f2c);

// f_00117674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00117674 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x0030c398, u32(u32, u32, u32, u32)> call_0030c398;  // (from the original)
inline constexpr guest::Function<0x0030c39c, u32(u32, u32, u32, u32)> call_0030c39c;  // (from the original)
inline constexpr guest::Function<0x0030c3a0, u32(u32, u32, u32, u32)> call_0030c3a0;  // (from the original)
inline constexpr guest::Function<0x0030c3a4, u32(u32, u32, u32, u32)> call_0030c3a4;  // (from the original)

u32 f_00117674(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0030c398(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = call_00308340(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = call_0030c39c(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_4 = call_002f74c8(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = call_002f74e0(0x20u, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        r0_6 = call_002f74c8(r0_5, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_7 = 1u << 0x1c;  // (from the original)
        r0_5 = call_002f74e0(r0_7, r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        if (r0_5 == 0) {
            goto L_1176aa;
        }
    }
    r0_8 = call_0030c3a0(r0_5, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_5;
    return r0_8;
L_1176aa:;
    r0_9 = call_002f74c8(r0_5, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_10 = 1u << 9;
    r0_11 = call_002f74e0(r0_10, r0_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_11 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return r0_11;
    }
    r0_12 = call_0030c3a4(r0_11, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_7;
    return r0_12;
}

}  // namespace d_00117674
GUEST_EXPORT(0x00117675, d_00117674::f_00117674);

// f_001176c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001176c4 {

inline constexpr guest::Function<0x00114e11, u32(u32, u32, u32, u32)> call_00114e10;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0030560c, u32(u32, u32, u32, u32)> call_0030560c;  // (from the original)
inline constexpr guest::Function<0x00307374, u32(u32, u32, u32, u32)> call_00307374;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0030c3a8, u32(u32, u32, u32, u32)> call_0030c3a8;  // (from the original)
inline constexpr guest::Function<0x0030c3ac, u32(u32, u32, u32, u32)> call_0030c3ac;  // (from the original)
inline constexpr guest::Function<0x0030c3b0, u32(u32, u32, u32, u32)> call_0030c3b0;  // (from the original)
inline constexpr guest::Function<0x0030c3b4, u32(u32, u32, u32, u32)> call_0030c3b4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)

u32 f_001176c4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r0_9 = 0;
    u32 r2_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r2_6 = 0;
    u32 r1_7 = 0;
    u32 r0_14 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r2_8 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r0_15 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r0_16 = 0;
    u32 r1_11 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fc900(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_0030b6c4(r0_1, r1_1, r2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_2 == 0) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_2;
        }
    }
    r4 = r0 + 0x80u;  // (from the original)
    r0_3 = *gptr<u8>(r4 + 0x19u);  // (from the original)
    if (r0_3 != 0) {
        goto L_117706;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb378(r0_3, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = 0x94f354u;  // (from the original)
    r2 = u32(s32(s8(*gptr<u8>(r1_2))));
    r0_5 = sxtb(*gptr<u32>(r0_4 + 8u));
    if (r2 != r0_5) {
        *gptr<u8>(r1_2) = u8(r0_5);
        guest::cpu()->r[13] = r13;
        r0_6 = call_0030560c(r0_5, r1_2, r2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_6 == 3u) {
            goto L_117738;
        }
    }
    r0_7 = *gptr<u8>(r4 + 0x19u);  // (from the original)
    if (r0_7 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_7;
    }
L_117706:;
    guest::cpu()->r[13] = r13;
    r0_8 = call_003170f8(0xeu, 0u, r2, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_8 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002f74c8(r0_8, r1_3, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r0_10 = 1u << 0xb;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002f74e0(r0_10, r0_9, r2_2, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_11 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_11;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_002f74c8(r0_11, r1_4, r2_3, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_13 = call_0030c3a8(r0_12, r1_5, r2_4, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_13 == 0x1eu) {  // (from the original)
        *gptr<u8>(r4 + 0x19u) = u8(0u);  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_13;
    }
    if (r0_13 != 1u) {
        goto L_117782;
    }
    goto L_11773c;
L_117738:;
    *gptr<u8>(r4 + 0x19u) = u8(1u);  // (from the original)
    guest::preempt();
    goto L_117706;
L_11773c:;
    guest::cpu()->r[13] = r13;
    r0_13 = call_0030c3ac(4u, 0u, r2_5, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_13 == 0) {
        *gptr<u8>(r4 + 0x19u) = u8(0u);  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_13;
    }
    r2_6 = r0_13 + 0x14u;  // (from the original)
    r1_7 = r13 + 4u;
    r0_14 = r13;
    guest::cpu()->r[13] = r13;
    call_00307374(r0_14, r1_7, r2_6, guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fe7cc(1u, r1_8, r2_7, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_13 == 0) {
        *gptr<u8>(r4 + 0x19u) = u8(0u);  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_13;
    }
    r2_8 = *gptr<u32>(r13 + 4u);
    r1_9 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_13 = call_00317148(r0_13, r1_9, r2_8, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    if (r0_13 == 0) {
        *gptr<u8>(r4 + 0x19u) = u8(0u);  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_13;
    }
    guest::cpu()->r[13] = r13;
    r0_15 = call_0030c3b0(r0_13, r1_6, r2_9, guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_13 = call_0030c3b4(r0_15, r1_10, r2_10, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_13 == 0xbu) {  // (from the original)
        *gptr<u8>(r4 + 0x19u) = u8(0u);  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_13;
    }
    if (r0_13 == 0xcu) {  // (from the original)
        *gptr<u8>(r4 + 0x19u) = u8(0u);  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_13;
    }
    if (r0_13 == 0xdu) {  // (from the original)
        *gptr<u8>(r4 + 0x19u) = u8(0u);  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_13;
    }
    if (r0_13 == 0x10u) {  // (from the original)
        *gptr<u8>(r4 + 0x19u) = u8(0u);  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_13;
    }
L_117782:;
    *gptr<u8>(r4 + 0x19u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00114e10(r0_13, r1_6, r2_5, guest::cpu()->r[3]);
    r1_11 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    return r0_16;
}

}  // namespace d_001176c4
GUEST_EXPORT(0x001176c5, d_001176c4::f_001176c4);

// f_00117808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00117808 {


u32 f_00117808(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(0x95029cu + (r0 << 2));  // (from the original)
    guest::cpu()->r[1] = 0x95029cu;  // (from the original)
    return r0_1;
}

}  // namespace d_00117808
GUEST_EXPORT(0x00117809, d_00117808::f_00117808);

// f_00117ac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00117ac0 {

inline constexpr guest::Function<0x001e23f0, u32(u32, u32, u32, u32)> call_001e23f0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_00117ac0(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = call_002f74e0(0x80u, r0_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_3 = call_002fb94c(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
    r2_3 = 0x57u << 8;  // (from the original)
    r0_4 = r0_3 + r2_3;
    r0_5 = call_001e23f0(r0_4, 1u, r2_3, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_5;
}

}  // namespace d_00117ac0
GUEST_EXPORT(0x00117ac1, d_00117ac0::f_00117ac0);

// f_00118164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118164 {

struct __attribute__((packed)) Object_00118164_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00118164_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0030c860, u32(u32, u32, u32, u32)> call_0030c860;  // (from the original)
inline constexpr guest::Function<0x0030c864, u32(u32, u32, u32, u32)> call_0030c864;  // (from the original)
inline constexpr guest::Function<0x003171b0, u32(u32, u32, u32, u32)> call_003171b0;  // (from the original)
inline constexpr guest::Function<0x00317d8c, u32(u32, u32, u32, u32)> call_00317d8c;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;  // (from the original)

u32 f_00118164(gptr<Object_00118164_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r3_9 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r3_10 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r3_11 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r3_12 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r2_2 = 0;
    u32 r3_13 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r2_3 = 0;
    u32 r3_14 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_15 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8f8960u);  // (from the original)
    r0_1 = r0 + 0xf0f4u;  // (from the original)
    call_002f76ac(r0_1, 0x52f280u, 0x10u, 2u);  // (from the original)
    r0_2 = r0 + 0xf02cu;  // (from the original)
    call_002f76ac(r0_2, 0x317d8cu, 0x4cu, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0 + 0xefe0u;  // (from the original)
    r0_4 = call_00317d8c(r0_3, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0xffff1020u + 0xef94u;  // (from the original)
    r0_6 = call_00317d8c(r0_5, 0xef94u, 0xffff1020u, r3_2);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0xffff106cu + 0xeb14u;  // (from the original)
    r0_8 = call_00317dec(r0_7, 0xeb14u, 0xffff106cu, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0xffff14ecu + 0xea0cu;  // (from the original)
    r0_10 = call_00317e2c(r0_9, 0xea0cu, 0xffff14ecu, r3_4);  // (from the original)
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 + 0xffff15f4u + 0xea04u;  // (from the original)
    r0_12 = call_00317dec(r0_11, 0xea04u, 0xffff15f4u, r3_5);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 + 0xffff15fcu + 0xe8fcu;  // (from the original)
    r0_14 = call_00317e2c(r0_13, 0xe8fcu, 0xffff15fcu, r3_6);  // (from the original)
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 + 0xffff1704u + 0xe8f4u;  // (from the original)
    r0_16 = call_00317dec(r0_15, 0xe8f4u, 0xffff1704u, r3_7);  // (from the original)
    r3_8 = guest::cpu()->r[3];
    r0_17 = r0_16 + 0xffff170cu + 0xe7ecu;  // (from the original)
    r0_18 = call_00317e2c(r0_17, 0xe7ecu, 0xffff170cu, r3_8);  // (from the original)
    r3_9 = guest::cpu()->r[3];
    r0_19 = r0_18 + 0xffff1814u + 0xe7e4u;  // (from the original)
    r0_20 = call_00317dec(r0_19, 0xe7e4u, 0xffff1814u, r3_9);  // (from the original)
    r3_10 = guest::cpu()->r[3];
    r0_21 = r0_20 + 0xffff181cu + 0xe6dcu;  // (from the original)
    r0_22 = call_00317e2c(r0_21, 0xe6dcu, 0xffff181cu, r3_10);  // (from the original)
    r3_11 = guest::cpu()->r[3];
    r0_23 = r0_22 + 0xffff1924u + 0xe6d4u;  // (from the original)
    r0_24 = call_00317dec(r0_23, 0xe6d4u, 0xffff1924u, r3_11);  // (from the original)
    r3_12 = guest::cpu()->r[3];
    r0_25 = r0_24 + 0xffff192cu + 0xe5ccu;  // (from the original)
    r0_26 = call_00317e2c(r0_25, 0xe5ccu, 0xffff192cu, r3_12);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_27 = r0_26 + 0xffff1a34u + 0x72f0u;  // (from the original)
    r0_28 = call_0030c860(r0_27, 0x72f0u, r2_2, r3_13);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_29 = r0_28 + 0xffff8d10u + 0x14u;  // (from the original)
    r0_30 = call_0030c864(r0_29, 0xffff8d10u, r2_3, r3_14);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0x14u;  // (from the original)
    r0_32 = call_003171b0(r0_31, r1_2, r2_4, r3_15);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_32;
}

}  // namespace d_00118164
GUEST_EXPORT(0x00118165, d_00118164::f_00118164);

// f_0011872a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011872a {

inline constexpr guest::Function<0x00318540, u32(u32, u32, u32, u32)> call_00318540;  // (from the original)

u32 f_0011872a(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r0_1 = r0 + 0x1aau;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_00318540(r0_1, 0x40u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0011872a
GUEST_EXPORT(0x0011872b, d_0011872a::f_0011872a);

// f_00118738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118738 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0030f56c, u32(u32, u32, u32, u32)> call_0030f56c;  // (from the original)

u32 f_00118738(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_00301444(r0, 0x1acu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u16>(0x1aau + r0) = u16(1u);  // (from the original)
    r0_1 = r0 + 0x1a6u;  // (from the original)
    r0_2 = call_0030f56c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00118738
GUEST_EXPORT(0x00118739, d_00118738::f_00118738);

// f_0011875c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011875c {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_0011875c() {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00301444(guest::cpu()->r[0], 0x1acu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return guest::cpu()->r[0];
}

}  // namespace d_0011875c
GUEST_EXPORT(0x0011875d, d_0011875c::f_0011875c);

// f_00118770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118770 {

inline constexpr guest::Function<0x00318540, u32(u32, u32, u32, u32)> call_00318540;  // (from the original)

u32 f_00118770(u32 r0, u32 r1) {
    u32 sco = 0;
    u32 cf = guest::cpu()->cf;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    sco = cf;
    res_1 = lsl_rc(2u, r1 & 0xff, &sco);  // (from the original)
    r1_1 = uxth(res_1);
    guest::cpu()->r[13] -= 8u;
    if (r1_1 == 2u) {
        goto L_118788;
    }
    if (r1_1 == 4u) {
        goto L_118788;
    }
    if (r1_1 == 8u) {
        goto L_118788;
    }
    if (r1_1 != 0x10u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
L_118788:;
    r0_1 = r0 + 0x1aau;  // (from the original)
    r0_2 = call_00318540(r0_1, r1_1, res_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_00118770
GUEST_EXPORT(0x00118771, d_00118770::f_00118770);

// f_00118792: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118792 {

inline constexpr guest::Function<0x0030cc28, u32(u32, u32, u32, u32)> call_0030cc28;  // (from the original)

u32 f_00118792(u32 r0_unused, u32 r1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r1_1 = r1 + 0x24u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    call_0030cc28(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_00118792
GUEST_EXPORT(0x00118793, d_00118792::f_00118792);

// f_0011879c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011879c {


u32 f_0011879c() {
    return guest::call_address<u32>(0x1187a5u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0011879c
GUEST_EXPORT(0x0011879c, d_0011879c::f_0011879c);

// f_001187b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001187b4 {

inline constexpr guest::Function<0x0024a8bc, u32(u32, u32, u32, u32)> call_0024a8bc;  // (from the original)

u32 f_001187b4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x8ae0u;  // (from the original)
    r0_2 = call_0024a8bc(r0_1, r0, r1, r2);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001187b4
GUEST_EXPORT(0x001187b5, d_001187b4::f_001187b4);

// f_00118a5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118a5c {

inline constexpr guest::Function<0x0030ce50, u32(u32, u32, u32, u32)> call_0030ce50;  // (from the original)

u32 f_00118a5c() {
    guest::cpu()->r[13] -= 8u;
    call_0030ce50(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_00118a5c
GUEST_EXPORT(0x00118a5d, d_00118a5c::f_00118a5c);

// f_00118a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118a64 {

inline constexpr guest::Function<0x00118a95, u32(u32, u32, u32, u32)> call_00118a94;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)

u32 f_00118a64(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00303cdc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = call_00118a94(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_00118a64
GUEST_EXPORT(0x00118a65, d_00118a64::f_00118a64);

// f_00118a74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118a74 {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)

u32 f_00118a74(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00303cdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = ~0u;
    *gptr<u8>(r0 + 8u) = u8(r1_1);
    *gptr<u8>(r0 + 9u) = u8(0x34u);  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(0x34u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0x34u;  // (from the original)
}

}  // namespace d_00118a74
GUEST_EXPORT(0x00118a75, d_00118a74::f_00118a74);

// f_00118a94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118a94 {

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32, u32)> call_002fd4b4;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x0030ce54, u32(u32, u32, u32, u32)> call_0030ce54;  // (from the original)
inline constexpr guest::Function<0x0030ce58, u32(u32, u32, u32, u32)> call_0030ce58;  // (from the original)
inline constexpr guest::Function<0x0030ce5c, u32(u32, u32, u32, u32)> call_0030ce5c;  // (from the original)
inline constexpr guest::Function<0x00312ab8, u32(u32, u32, u32, u32)> call_00312ab8;  // (from the original)
inline constexpr guest::Function<0x00318568, u32(u32, u32, u32, u32)> call_00318568;  // (from the original)

u32 f_00118a94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r3_4 = 0;
    u32 ea_1 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r3_7 = 0;
    u32 r2_6 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r3_8 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r3_9 = 0;
    u32 r0_12 = 0;
    u32 r3_10 = 0;
    u32 ea_2 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_11 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_12 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_13 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r3_14 = 0;
    u32 ea_3 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_15 = 0;
    u32 r0_20 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb338(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_0030ce54(r0, 1u, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            r13 = r13 + 0x30u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00305f2c(r0_1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 3u) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r5_1 = 1u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb338(r0, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_118b06;
    }
    r0_4 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_4, r0, r2_3, r3_3);
    r3_4 = r13;
    ea_1 = r13 + 0x18u;  // (from the original)
    r1_3 = *gptr<u32>(ea_1 + 4);
    r2_4 = *gptr<u32>(ea_1 + 8);
    *gptr<u32>(r3_4) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r3_4 + 4) = u32(r1_3);
    *gptr<u32>(r3_4 + 8) = u32(r2_4);
    r3_5 = r3_4 + 0xc;  // (from the original)
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_6 = call_00308efc(r0_5, r1_3, r2_4, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb378(r0_6, r1_4, r2_5, r3_6);
    r3_7 = guest::cpu()->r[3];
    r2_6 = *gptr<u32>(r0_7 + 4u);
    r1_5 = *gptr<u32>(r0_7);
    r0_8 = *gptr<u32>(r0_7 + 8u);
    *gptr<u32>(r13 + 0x10u) = u32(r2_6);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r1_5);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r0_8);  // (from the original)
    r0_9 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00308efc(r0_9, r1_5, r2_6, r3_7);
    r3_8 = guest::cpu()->r[3];
    r1_6 = r13;
    r0_10 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fd4b4(r0_10, r1_6, 1u, r3_8);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_11 == 1u) {
        goto L_118b04;
    }
    goto L_118b06;
L_118b04:;
    r5_1 = 0u;
L_118b06:;
    guest::cpu()->r[13] = r13;
    call_0030ce58(r0, r1_2, r2_3, r3_3);
    r2_7 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_12 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_12, r0, r2_7, r3_9);
    r3_10 = r13 + 4u;
    ea_2 = r13 + 0x10u;  // (from the original)
    r1_7 = *gptr<u32>(ea_2 + 4);
    r2_8 = *gptr<u32>(ea_2 + 8);
    *gptr<u32>(r3_10) = u32(*gptr<u32>(ea_2));
    *gptr<u32>(r3_10 + 4) = u32(r1_7);
    *gptr<u32>(r3_10 + 8) = u32(r2_8);
    r3_11 = r3_10 + 0xc;  // (from the original)
    if (r5_1 != 0) {
        r0_13 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_14 = call_00318568(r0_13, r1_7, r2_8, r3_11);
    } else {
        r0_14 = *gptr<u8>(r0 + 0xau);  // (from the original)
    }
    *gptr<u8>(r0 + 9u) = u8(r0_14);
    *gptr<u32>(r13) = u32(0u);
    r0_15 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312ab8(r0_15, 1u, 0u, 0u);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_16 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_17 = call_00318568(r0_16, r1_8, r2_9, r3_12);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xau) = u8(r0_17);  // (from the original)
    if (u32(*gptr<u8>(r0 + 9u)) > 4u) {
        r0_18 = ~0u;
    } else {
        r0_19 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fb430(r0_19, r0, r2_10, r3_13);
        r3_14 = r13;
        ea_3 = r13 + 0xcu;  // (from the original)
        r1_10 = *gptr<u32>(ea_3 + 4);
        r2_11 = *gptr<u32>(ea_3 + 8);
        *gptr<u32>(r3_14) = u32(*gptr<u32>(ea_3));
        *gptr<u32>(r3_14 + 4) = u32(r1_10);
        *gptr<u32>(r3_14 + 8) = u32(r2_11);
        r3_15 = r3_14 + 0xc;  // (from the original)
        r0_20 = r13;
        guest::cpu()->r[13] = r13;
        r0_18 = call_0030ce5c(r0_20, 0u, r2_11, r3_15);
        r1_9 = guest::cpu()->r[1];
    }
    *gptr<u8>(r0 + 8u) = u8(r0_18);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00118a94
GUEST_EXPORT(0x00118a95, d_00118a94::f_00118a94);

// f_00118b70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118b70 {


u32 f_00118b70(u32 r0) {
    u32 r2 = 0;
    u32 res_1 = 0;
    r2 = r0;
    r0 = 0u;
    do {
L_118b74:;
        res_1 = u32(*gptr<u16>((0xffu + 0xadu) * r0 + r2 + 0x1aau)) << 0x1f >> 0x1f;  // (from the original)
        if (res_1 == 0) {
            guest::cpu()->r[1] = res_1;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(0xfu));  // (from the original)
    guest::cpu()->r[1] = res_1;
    return r0;
}

}  // namespace d_00118b70
GUEST_EXPORT(0x00118b71, d_00118b70::f_00118b70);

// f_00118e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118e94 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)

u32 f_00118e94(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_2 = 0;
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r4);
    *gptr<u32>(ea_1 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r13 = ea_1 - 4u;
    r5 = 0u;
    r7 = 0x2518u;  // (from the original)
    r6 = 0x25u << 8;  // (from the original)
    r4 = r0;
L_118ea2:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301e20(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_118ec6;
    }
    r0_2 = *gptr<u32>(r4 + r6 + 0x10u);  // (from the original)
    res_1 = r0_2 << 0x1e >> 0x1f;  // (from the original)
    r1 = res_1;
    if (res_1 == 0) {
        goto L_118ec6;
    }
    r1 = *gptr<u32>(r13 + 8u);
    if (r1 != 0) {
        if ((r0_2 & 1u) != 0u) {
            goto L_118ed6;
        }
        goto L_118ec6;
    }
    if ((r0_2 & 1u) == 0u) {
        goto L_118ed6;
    }
L_118ec6:;
    r5 = r5 + 1u;
    r4 = r4 + r7;
    if (s32(r5) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_118ea2;
    }
    r13 = r13 + 0xcu;  // (from the original)
    r0_3 = ~0u;
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
L_118ed6:;
    r13 = r13 + 0xcu;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_2 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r5;
}

}  // namespace d_00118e94
GUEST_EXPORT(0x00118e95, d_00118e94::f_00118e94);

// f_00118f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118f18 {

inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x00318d8c, u32(u32, u32, u32, u32)> call_00318d8c;  // (from the original)

u32 f_00118f18(u32 r0, u32 r1) {
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6_1 = r1;
    if (r1 >= 3u) {
        r0_3 = ~0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_3;
    }
    r5_1 = r0 + 0x173ecu;  // (from the original)
    r0_1 = r5_1 + 0x46u;  // (from the original)
    r0_2 = call_00309ef0(r0_1, 0x173ecu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r0_3 = ~0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_3;
    }
    if (u32(*gptr<u8>(r0_1 + 8u)) == 0x12u) {  // (from the original)
        goto L_118f3e;
    }
    r0_3 = ~0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_3;
L_118f3e:;
    r0_4 = call_00318d8c(r5_1, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_00118f18
GUEST_EXPORT(0x00118f19, d_00118f18::f_00118f18);

// f_00118f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118f7c {


u32 f_00118f7c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    r2 = 0x17640u;  // (from the original)
    r1 = 0xffffu;  // (from the original)
    r3 = r0;
    r0 = 0u;
    guest::cpu()->r[13] -= 8u;
    do {
L_118f86:;
        r4_1 = (r0 << 1) + r3 + r2;
        if (u32(*gptr<u16>(r4_1 + 0x16u)) == r1) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (!(u32(*gptr<u16>(r4_1 + 0x18u)) != r1)) {  // (from the original)
            r0_1 = r0 + 1u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(0x10u));  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 0x10u;  // (from the original)
}

}  // namespace d_00118f7c
GUEST_EXPORT(0x00118f7d, d_00118f7c::f_00118f7c);

// f_00118fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118fb4 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0031118c, u32(u32, u32, u32, u32)> call_0031118c;  // (from the original)

u32 f_00118fb4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r5 = 0u;
    r7 = 0x2518u;  // (from the original)
    r6 = 0x25u << 8;  // (from the original)
    r4 = r0;
L_118fc0:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301e20(r4, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_118fe4;
    }
    r0_2 = *gptr<u32>(r4 + r6 + 0x10u);  // (from the original)
    res_1 = r0_2 << 0x1f;  // (from the original)
    r1 = res_1;
    if (res_1 != 0) {
        res_2 = r0_2 << 0x1e;  // (from the original)
        if (!(res_2 >> 0x1f)) {  // (from the original)
            goto L_118fe0;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0031118c(r4, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_118fe4;
    }
L_118fe0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r5;
L_118fe4:;
    r5 = r5 + 1u;
    r4 = r4 + r7;
    if (s32(r5) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_118fc0;
    }
    r0_4 = ~0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_00118fb4
GUEST_EXPORT(0x00118fb5, d_00118fb4::f_00118fb4);

// f_00118ff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118ff8 {

inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0030b829, u32(u32, u32, u32, u32)> call_0030b828;  // (from the original)

u32 f_00118ff8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_0030b6c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    if (r1 == 0) {
        goto L_11902c;
    }
    r1_1 = *gptr<u32>(r1 + (1u << 0xc) + 0x28u);  // (from the original)
    if (r1_1 == 0) {
        goto L_11902c;
    }
    r0_2 = call_0030b828(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0xeu) {  // (from the original)
        goto L_119030;
    }
    if (r0_2 == 0xfu) {  // (from the original)
        goto L_119030;
    }
    if (r0_2 == 0x10u) {  // (from the original)
        goto L_119034;
    }
    if (r0_2 == 0x11u) {  // (from the original)
        goto L_119034;
    }
L_11902c:;
    r0_1 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
L_119030:;
    r0_3 = 0x173a0u;  // (from the original)
    r0_4 = r0 + r0_3;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
L_119034:;
    r0_3 = 0x173c6u;  // (from the original)
    r0_4 = r0 + r0_3;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_00118ff8
GUEST_EXPORT(0x00118ff9, d_00118ff8::f_00118ff8);

// f_0011916c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011916c {

inline constexpr guest::Function<0x0029b840, u32(u32, u32, u32, u32)> call_0029b840;  // (from the original)
inline constexpr guest::Function<0x0029b868, u32(u32, u32, u32, u32)> call_0029b868;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)

u32 f_0011916c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 cf_1 = 0;
    u32 res_2 = 0;
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r7_1 = 0;
    u32 res_3 = 0;
    u32 r2_3 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1;
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    call_0029b868(r1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
L_11917a:;
    if (r6 >= 0xau) {  // (from the original)
        goto L_119218;
    }
    r1 = 0x2518u;  // (from the original)
    res_1 = r6 * r1 + r4;
    r7 = res_1;
    if (res_1 == 0) {
        goto L_1191ba;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe470(r7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_1191ba;
    }
L_119192:;
    if (r7 == 0) {
        goto L_1191ba;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301e20(r7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1191ba;
    }
    r0_3 = *gptr<u16>(r7 + 0x2cu);  // (from the original)
    r1 = 0x18fu;  // (from the original)
    if (r0_3 >= r1) {
        goto L_1191ba;
    }
    r1 = r0_3 >> 3;
    r3_1 = r0_3 << 0x1d;  // (from the original)
    cf_1 = r3_1 >> 0x1c & 1;  // (from the original)
    r3 = r3_1 >> 0x1d;  // (from the original)
    sco = cf_1;
    res_2 = lsl_rc(1u, r3 & 0xff, &sco);  // (from the original)
    r2 = u32(*gptr<u8>(r5 + r1)) | res_2;
    *gptr<u8>(r5 + r1) = u8(r2);
L_1191ba:;
    r6 = r6 + 1u;
    if (s32(r6) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_11917a;
    }
    r0 = *gptr<u32>(r13 + 8u);
    if (r0 != 0) {
        goto L_119214;
    }
    r6_1 = r4 + 0x17676u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00301e20(r6_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        r1_1 = *gptr<u16>(r6_1 + 0x2cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0029b840(r5, r1_1, r2_1, r3_2);
        r1 = guest::cpu()->r[1];
    }
    r3 = 0x17640u;  // (from the original)
    r6 = 0xffffu;  // (from the original)
    r0 = 0u;
L_1191e2:;
    if (r0 >= 0x10u) {  // (from the original)
        goto L_11920e;
    }
    r1 = (r0 << 1) + r4 + r3;
    r2_2 = *gptr<u16>(r1 + 0x16u);  // (from the original)
    if (r2_2 == r6) {
        goto L_11920e;
    }
    r1 = 0x18fu;  // (from the original)
    if (r2_2 >= r1) {
        goto L_11920e;
    }
    r1 = r2_2 >> 3;
    r7_1 = r2_2 << 0x1d;  // (from the original)
    sco = r7_1 >> 0x1c & 1;  // (from the original)
    res_3 = lsl_rc(1u, r7_1 >> 0x1d & 0xff, &sco);  // (from the original)
    r2_3 = res_3 | u32(*gptr<u8>(r5 + r1));
    *gptr<u8>(r5 + r1) = u8(r2_3);
L_11920e:;
    r0 = r0 + 1u;
    if (r0 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_1191e2;
    }
L_119214:;
    r13 = r13 + 0xcu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0;
L_119218:;
    r7 = 0u;
    guest::preempt();
    goto L_119192;
}

}  // namespace d_0011916c
GUEST_EXPORT(0x0011916d, d_0011916c::f_0011916c);

// f_0011922c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011922c {

inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x00309958, u32(u32, u32, u32, u32)> call_00309958;  // (from the original)

u32 f_0011922c(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
L_119230:;
    r0_1 = call_002fe450(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_119248;
    }
    r0_2 = call_00309958(r0_1, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_119248;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r4;
L_119248:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_119230;
    }
    r0_3 = ~0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_0011922c
GUEST_EXPORT(0x0011922d, d_0011922c::f_0011922c);

// f_00119254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119254 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)

u32 f_00119254(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x17676u;  // (from the original)
    r0_2 = call_00301e20(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    res_1 = *gptr<u32>(r0 + 0x172f0u) << 0x1b;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_00119254
GUEST_EXPORT(0x00119255, d_00119254::f_00119254);

// f_00119308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119308 {

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x0030aa59, u32(u32, u32, u32, u32)> call_0030aa58;  // (from the original)

u32 f_00119308(u32 r0, u32 r1_unused, u32 r2) {
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    u32 res_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res_1 = r0 + 0x19760u;  // (from the original)
    r1_1 = u32(s32(s8(*gptr<u8>(res_1 + 1u))));
    if (r1_1 >> 0x1f == (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r1_1;
    }
    r4_1 = 0u;
    r1_2 = u32(s32(s8(*gptr<u8>(res_1 + 2u))));
    if (r1_2 < 0xau) {  // (from the original)
        r1_2 = r1_2 * 0x2518u;  // (from the original)
        res_2 = r1_2 + r0;
        r4_1 = res_2;
        if (res_2 == 0) {
            r0_4 = ~0u;
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return r0_4;
        }
        r0_1 = call_002fe470(r4_1, r1_2, 0x2518u, guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_1 == 0) {
            r0_4 = ~0u;
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return r0_4;
        }
    }
    if (r4_1 == 0) {
        r0_4 = ~0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_4;
    }
    r0_2 = call_0030aa58(r4_1, r1_2, r2, guest::cpu()->r[3]);
    if (r0_2 == 0) {
        goto L_11934c;
    }
    r0_3 = 0xau;  // (from the original)
    goto L_11934e;
L_11934c:;
    r0_3 = 7u;
L_11934e:;
    r1_3 = u32(s32(s8(*gptr<u8>(res_1))));
    r0_5 = r0_3 - r1_3;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_5;
}

}  // namespace d_00119308
GUEST_EXPORT(0x00119309, d_00119308::f_00119308);

// f_00119360: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119360 {

inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x00309958, u32(u32, u32, u32, u32)> call_00309958;  // (from the original)

u32 f_00119360(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
L_119364:;
    r0_1 = call_002fe450(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_11937c;
    }
    r0_2 = call_00309958(r0_1, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_11937c;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r4;
L_11937c:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_119364;
    }
    r0_3 = ~0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_00119360
GUEST_EXPORT(0x00119361, d_00119360::f_00119360);

// f_00119388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119388 {

inline constexpr guest::Function<0x001199ad, u32(u32, u32, u32, u32)> call_001199ac;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00318fbc, u32(u32, u32, u32, u32)> call_00318fbc;  // (from the original)

u32 f_00119388(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    r4 = 0u;
    r13 = r13 - 0x60u;  // (from the original)
    r7 = 0x24e0u;  // (from the original)
    r6 = r0;
    do {
L_119392:;
        r0_1 = 0x2518u * r4 + r6;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_00301e20(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_2 == 0)) {
            r2_1 = u32(s32(s8(*gptr<u8>(r0_1 + r7 + 0x10u))));  // (from the original)
            r0_3 = r13;
            guest::cpu()->r[13] = r13;
            call_00318fbc(r0_3, 0x48u, r2_1, r3);  // (from the original)
            r1_1 = r13;
            guest::cpu()->r[13] = r13;
            r0_2 = call_001199ac(r0_1, r1_1, 0u, 0u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xau));  // (from the original)
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00119388
GUEST_EXPORT(0x00119389, d_00119388::f_00119388);

// f_00119404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119404 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x0030d9ec, u32(u32, u32, u32, u32)> call_0030d9ec;  // (from the original)
inline constexpr guest::Function<0x00312acc, u32(u32, u32, u32, u32)> call_00312acc;  // (from the original)
inline constexpr guest::Function<0x00314cec, u32(u32, u32, u32, u32)> call_00314cec;  // (from the original)

u32 f_00119404(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
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
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r3_4 = 0;
    u32 ea_1 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00312acc(r0_2, r0_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00314cec(r0_3, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_2 = r13 + 0x18u;  // (from the original)
    r0_4 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_4, r1_2, r2_3, r3_3);
    r3_4 = r13;
    ea_1 = r13 + 0xcu;  // (from the original)
    r1_3 = *gptr<u32>(ea_1 + 4);
    r2_4 = *gptr<u32>(ea_1 + 8);
    *gptr<u32>(r3_4) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r3_4 + 4) = u32(r1_3);
    *gptr<u32>(r3_4 + 8) = u32(r2_4);
    r3_5 = r3_4 + 0xc;  // (from the original)
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_00308efc(r0_5, r1_3, r2_4, r3_5);
    r4 = 0u;
    do {
L_119432:;
        r0_6 = *gptr<u32>(r13);
        r1_4 = *gptr<u32>(r13 + 4);
        r2_5 = *gptr<u32>(r13 + 8);
        guest::cpu()->r[13] = r13;
        r0_7 = call_0030d9ec(r0_6, r1_4, r2_5, 1u);
        r1_5 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        if (!(r0_7 == 0)) {
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1_5;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        r0_8 = r13;
        guest::cpu()->r[13] = r13;
        call_003014b4(r0_8, 1u, r2_6, r3_6);
        r1_6 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00119404
GUEST_EXPORT(0x00119405, d_00119404::f_00119404);

// f_0011945c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011945c {

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00309971, u32(u32, u32, u32, u32)> call_00309970;  // (from the original)
inline constexpr guest::Function<0x0030befc, u32(u32, u32, u32, u32)> call_0030befc;  // (from the original)

u32 f_0011945c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 res_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r5 = 1u;
    r6 = 0u;
    r4 = r0;
    if (r1 >> 0x1f == (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        goto L_1194a8;
    }
    r5 = 0u;
L_11946c:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0030befc(r5, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_1 >= 0xau) {  // (from the original)
        goto L_11949a;
    }
    r1 = 0x2518u;  // (from the original)
    res_1 = r0_1 * r1 + r4;
    if (res_1 == 0) {
        goto L_11949e;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe470(res_1, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_11949e;
    }
    r0 = res_1;
L_11948a:;
    if (r0 == 0) {
        goto L_11949e;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_00309970(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_11949e;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_11949a:;
    r0 = r6;
    guest::preempt();
    goto L_11948a;
L_11949e:;
    r5 = r5 + 1u;
    if (r5 < 2u) {
        guest::preempt();
        goto L_11946c;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_1194a8:;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0030befc(r1, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_4 >= 0xau) {  // (from the original)
        goto L_1194d4;
    }
    r1 = 0x2518u;  // (from the original)
    res_2 = r0_4 * r1 + r4;
    if (res_2 == 0) {
        goto L_1194d8;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fe470(res_2, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_1194d8;
    }
    r0 = res_2;
L_1194c4:;
    if (r0 == 0) {
        goto L_1194d8;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_00309970(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        goto L_1194d8;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r5;
L_1194d4:;
    r0 = r6;
    guest::preempt();
    goto L_1194c4;
L_1194d8:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r6;
}

}  // namespace d_0011945c
GUEST_EXPORT(0x0011945d, d_0011945c::f_0011945c);

// f_001194e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001194e0 {

inline constexpr guest::Function<0x0030befc, u32(u32, u32, u32, u32)> call_0030befc;  // (from the original)

u32 f_001194e0(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0030befc(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_001194e0
GUEST_EXPORT(0x001194e1, d_001194e0::f_001194e0);

// f_001194ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001194ec {

inline constexpr guest::Function<0x00309a45, u32(u32, u32, u32, u32)> call_00309a44;  // (from the original)
inline constexpr guest::Function<0x0030e430, u32(u32, u32, u32, u32)> call_0030e430;  // (from the original)

u32 f_001194ec(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r5 = 0u;
    r6 = r0;
    r7 = 0x25u << 8;  // (from the original)
L_1194f6:;
    r0_1 = 0x2518u * r5 + r6;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00309a44(r0_1, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_119522;
    }
    r1_1 = *gptr<u32>(r0_1 + r7 + 0x10u);  // (from the original)
    res_1 = r1_1 << 0x1e >> 0x1f;  // (from the original)
    r2 = res_1;
    if (res_1 != 0) {
        res_2 = r1_1 << 0x1f >> 0x1f;  // (from the original)
        r1_1 = res_2;
        if (res_2 == 0) {
            goto L_119522;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030e430(r0_1, r1_1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_11952c;
    }
L_119522:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_1194f6;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_11952c:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_001194ec
GUEST_EXPORT(0x001194ed, d_001194ec::f_001194ec);

// f_00119534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119534 {

inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0030d9f0, u32(u32, u32, u32, u32)> call_0030d9f0;  // (from the original)
inline constexpr guest::Function<0x0030d9f4, u32(u32, u32, u32, u32)> call_0030d9f4;  // (from the original)
inline constexpr guest::Function<0x0030d9f8, u32(u32, u32, u32, u32)> call_0030d9f8;  // (from the original)
inline constexpr guest::Function<0x00318da0, u32(u32, u32, u32, u32)> call_00318da0;  // (from the original)
inline constexpr guest::Function<0x0031917c, u32(u32, u32, u32, u32)> call_0031917c;  // (from the original)

u32 f_00119534(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_2 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    u32 r0_11 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_2 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1;
    r7 = r2;
    r5 = r0 + 0x17448u;  // (from the original)
    if (r2 == 0) {
        goto L_119582;
    }
    r1_1 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_0030d9f0(r5, r1_1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    res_1 = r0_1 + 1u;
    r1_2 = res_1;
    if (res_1 != 0) {
        goto L_1195a6;
    }
    r4 = 0u;
L_11954e:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0031917c(r5, r4, r2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030d9f4(r0_2, r1_3, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_11957a;
    }
    r1_4 = *gptr<u32>(r13 + 4u);
    r0_4 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00318da0(r0_4, r1_4, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_5 == 0) {
        goto L_11957a;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_0030d9f8(r0_2, r7, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    res_2 = r0_6 + 1u;
    if (res_2 != 0) {
        goto L_1195a4;
    }
L_11957a:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(8u)) {
        guest::preempt();
        goto L_11954e;
    }
    goto L_1195b0;
L_119582:;
    r4 = 0u;
L_119584:;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0031917c(r5, r4, r2, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_8 = call_00309ef0(r0_7, r1_5, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_8 == 0) {
        goto L_1195aa;
    }
    r1_6 = *gptr<u32>(r13 + 4u);
    r0_9 = r0_7 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00318da0(r0_9, r1_6, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_10 == 0) {
        goto L_1195aa;
    }
L_1195a4:;
    r0_1 = r4;
L_1195a6:;
    r13 = r13 + 0xcu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_1195aa:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(8u)) {
        guest::preempt();
        goto L_119584;
    }
L_1195b0:;
    r13 = r13 + 0xcu;  // (from the original)
    r0_11 = ~0u;
    r4_2 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_2 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_00119534
GUEST_EXPORT(0x00119535, d_00119534::f_00119534);

// f_001195bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001195bc {


u32 f_001195bc(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    if (r1 >= 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0xffffu;  // (from the original)
    }
    r2_1 = r1 << 1;
    r0_1 = *gptr<u16>(r2_1 + r0 + 0x17640u + 0x16u);  // (from the original)
    guest::cpu()->r[1] = 0x17640u;  // (from the original)
    return r0_1;
}

}  // namespace d_001195bc
GUEST_EXPORT(0x001195bd, d_001195bc::f_001195bc);

// f_00119898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119898 {

inline constexpr guest::Function<0x00311a34, u32(u32, u32, u32, u32)> call_00311a34;  // (from the original)

u32 f_00119898(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r6 = r0;
    r7 = 0x8eeu;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    r5 = r0 + r7;
    r4 = 0u;
    do {
L_1198a4:;
        r1_1 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        r0_1 = call_00311a34(r5, r1_1, guest::cpu()->r[2], r3);
        r1_2 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0_1 == 0)) {
            if (r4 >= 0x10u) {  // (from the original)
                goto L_1198c6;
            }
            r0_2 = r4 * 0xf2u + r6 + r7;  // (from the original)
            r13 = r13 + 0x18;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return r0_2;
        }
        r4 = r4 + 1u;
        r5 = r5 + 0xf2u;  // (from the original)
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
L_1198c6:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00119898
GUEST_EXPORT(0x00119899, d_00119898::f_00119898);

// f_00119fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119fe4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fe4c0, u32(u32, u32, u32, u32)> call_002fe4c0;  // (from the original)

u32 f_00119fe4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe4c0(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb328(r0_1, r1_1, guest::cpu()->r[2], r3_1);
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    res_1 = u32(*gptr<u8>(r0_2 + 0x80u + 0x6214fu)) >> 1 << 0x1f;  // (from the original)
    if (res_1 != 0) {
        if (r1 != 0) {
            r1_3 = 0x88ee68u;  // (from the original)
            r0_3 = r0_1 << 2;
            goto L_11a032;
        }
        r0_4 = *gptr<u32>(0x88ee28u + (r0_1 << 3));  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fb328(res_1, r1_2, guest::cpu()->r[2], r3_2);
    r1_4 = guest::cpu()->r[1];
    if ((u32(*gptr<u8>(r0_5 + 0x80u + 0x6214fu)) >> 2 & 1u) == 0u) {  // (from the original)
        goto L_11a036;
    }
    if (r1 != 0) {
        r0_6 = *gptr<u32>((r0_1 << 3) + 0x88ee28u + 4u);  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    r1_3 = 0x88ee88u;  // (from the original)
    r0_3 = r0_1 << 2;
L_11a032:;
    r0_7 = *gptr<u32>(r1_3 + r0_3);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_11a036:;
    r1_5 = r1 << 2;
    r0_8 = *gptr<u32>((r0_1 << 3) + 0x88ee28u + r1_5);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_8;
}

}  // namespace d_00119fe4
GUEST_EXPORT(0x00119fe5, d_00119fe4::f_00119fe4);

// f_0011a6d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011a6d8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x00303770, u32(u32, u32, u32, u32)> call_00303770;  // (from the original)
inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32, u32)> call_003091e0;  // (from the original)
inline constexpr guest::Function<0x003091ec, u32(u32, u32, u32, u32)> call_003091ec;  // (from the original)
inline constexpr guest::Function<0x00309eb9, u32(u32, u32, u32, u32)> call_00309eb8;  // (from the original)
inline constexpr guest::Function<0x0030b829, u32(u32, u32, u32, u32)> call_0030b828;  // (from the original)

u32 f_0011a6d8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r3_4 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 res_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_003091e0(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_003091ec(r0_1, r1_1, guest::cpu()->r[2], r3_1);
    r1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r6 = 0x55a6u;  // (from the original)
    r1_2 = r0_2 + r6;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00309eb8(r0, r1_2, guest::cpu()->r[2], r3_2);
    r1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_11a770;
    }
    res_1 = u32(*gptr<u8>(r0_3 + 0xbcu)) >> 7;  // (from the original)
    if (res_1 == 0) {
        goto L_11a770;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb328(res_1, r1, guest::cpu()->r[2], r3_3);
    r3_4 = guest::cpu()->r[3];
    r4_1 = r0_4 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0030b828(r4_1, r0, guest::cpu()->r[2], r3_4);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_5 == 0xeu) {  // (from the original)
        goto L_11a724;
    }
    if (r0_5 == 0xfu) {  // (from the original)
        goto L_11a724;
    }
    if (r0_5 == 0x10u) {  // (from the original)
        goto L_11a728;
    }
    if (r0_5 != 0x11u) {  // (from the original)
        goto L_11a72e;
    }
    goto L_11a728;
L_11a724:;
    r0_6 = 0x173a0u;  // (from the original)
    goto L_11a72a;
L_11a728:;
    r0_6 = 0x173c6u;  // (from the original)
L_11a72a:;
    res_2 = r4_1 + r0_6;
    if (res_2 != 0) {
        goto L_11a770;
    }
L_11a72e:;
    r0_7 = r0 + (0x25u << 8);  // (from the original)
    *gptr<u32>(r13) = u32(r0_7);
    r0_8 = *gptr<u8>(r0_7 + 0xfu);  // (from the original)
    if (r0_8 != 0) {
        if (r0_8 != 1u) {
            goto L_11a770;
        }
    }
    r7 = 0x8d6cu;  // (from the original)
    r4 = 0u;
L_11a744:;
    r0_9 = uxtb(r4);
    guest::cpu()->r[13] = r13;
    r0_10 = call_00303770(r0_9, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_11a774;
    }
    r0_11 = r0_10 + r6;
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fbd54(r0_11, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        goto L_11a774;
    }
    r0_13 = r0_10 + r7;
    r1 = *gptr<u8>(r0_13 + 8u);
    if (r1 != 5u) {
        goto L_11a774;
    }
    if (u32(*gptr<u8>(r0_13 + 9u)) == 0) {
        goto L_11a774;
    }
    res_3 = *gptr<u32>(*gptr<u32>(r13) + 0x10u) << 0x1d >> 0x1f;  // (from the original)
    if (res_3 == 0) {
        goto L_11a774;
    }
L_11a770:;
    r0_2 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
L_11a774:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_11a744;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0011a6d8
GUEST_EXPORT(0x0011a6d9, d_0011a6d8::f_0011a6d8);

// f_0011b37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b37c {


u32 f_0011b37c(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r2_1 = r1 << 2;
    r0_1 = r2_1 + r0 + 0x8c6u;  // (from the original)
    guest::cpu()->r[1] = 0x8c6u;  // (from the original)
    return r0_1;
}

}  // namespace d_0011b37c
GUEST_EXPORT(0x0011b37d, d_0011b37c::f_0011b37c);

// f_0011b3d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b3d4 {

struct __attribute__((packed)) Object_0011b3d4_0 {
    u8 unknown_0[0xb9];  // (not used here)
    u8 byte_b9;
    u8 byte_ba;
};
GUEST_OFFSET(Object_0011b3d4_0, byte_b9, 0xb9);  // (from the original)
GUEST_OFFSET(Object_0011b3d4_0, byte_ba, 0xba);  // (from the original)


u32 f_0011b3d4(gptr<Object_0011b3d4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r2 = (u32(arg0->byte_b9) >> 1) + (u32(arg0->byte_ba) << 0x1f >> 0x18);  // (from the original)
    r1 = 0x88ec60u;  // (from the original)
    r0 = 0u;
    do {
L_11b3e6:;
        if (!(u32(*gptr<u8>(r1 + r0)) > r2)) {
            r0_1 = uxtb(r0);
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        if (!(u32(*gptr<u8>(r1 + r0 + 1u)) > r2)) {
            r0_2 = uxtb(r0 + 1u);
            guest::cpu()->r[1] = r1;
            return r0_2;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(6u));
    guest::cpu()->r[1] = r1;
    return 5u;
}

}  // namespace d_0011b3d4
GUEST_EXPORT(0x0011b3d5, d_0011b3d4::f_0011b3d4);

// f_0011b40c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b40c {


u32 f_0011b40c(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = r1 * 0x4a30u;  // (from the original)
    r0_1 = r1_1 + r0 + r2 * u32(s32(0x4a30u) >> 1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0011b40c
GUEST_EXPORT(0x0011b40d, d_0011b40c::f_0011b40c);

// f_0011b48c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b48c {

struct __attribute__((packed)) Object_0011b48c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0011b48c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0011b48c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0011b48c_0, word_8, 0x8);  // (from the original)


u32 f_0011b48c(gptr<Object_0011b48c_0> arg0, u32 r1) {
    u32 sco = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 cf = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    if (arg0->word_8 <= r1) {
        r0_1 = ~0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r4 = arg0->word_0;
    r0 = 0u;
    cf = r4 >= 0u;
    if (r4 == 0 || r4 >> 0x1f != (r4 & (r4 ^ r4)) >> 0x1f) {  // (from the original)
        r0_1 = ~0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r2 = arg0->word_4;
    r3 = 1u;
    do {
L_11b4a2:;
        sco = cf;
        res_1 = lsl_rc(r3, r0 & 0xff, &sco);  // (from the original)
        if (!((r2 & res_1) == 0)) {
            if (r1 == 0) {
                guest::cpu()->r[13] += 8u;
                guest::cpu()->r[1] = r1;
                return r0;
            }
            r1 = r1 - 1u;
        }
        r0 = r0 + 1u;
        res_2 = r4 - r0;
        cf = r4 >= r0;
        guest::preempt();
    } while (res_2 != 0 && res_2 >> 0x1f == ((r4 ^ r0) & (r4 ^ res_2)) >> 0x1f);  // (from the original)
    r0_1 = ~0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0011b48c
GUEST_EXPORT(0x0011b48d, d_0011b48c::f_0011b48c);

// f_0011b4be: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b4be {

struct __attribute__((packed)) Object_0011b4be_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0011b4be_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0030e424, u32(u32, u32, u32, u32)> call_0030e424;  // (from the original)

u32 f_0011b4be(gptr<Object_0011b4be_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r0 = arg0.addr();
    u32 r5 = guest::cpu()->r[5];
    u32 cf = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0;
    r0_1 = r1;
    r1 = arg0->word_8;
    if (r1 == 0) {
        goto L_11b4f0;
    }
    r0_2 = call_0030e424(r0_1, r1, r2, r3);
    r5 = *gptr<u32>(r4_1);
    r1 = r0_2;
    r0 = 0u;
    cf = r5 >= 0u;
    if (r5 == 0 || r5 >> 0x1f != (r5 & (r5 ^ r5)) >> 0x1f) {  // (from the original)
        goto L_11b4f0;
    }
    r2 = *gptr<u32>(r4_1 + 4u);
    r3 = 1u;
    do {
L_11b4dc:;
        sco = cf;
        res_1 = lsl_rc(r3, r0 & 0xff, &sco);  // (from the original)
        if (!((r2 & res_1) == 0)) {
            if (r1 == 0) {
                guest::cpu()->r[13] += 0x10u;  // (from the original)
                guest::cpu()->r[1] = r1;
                return r0;
            }
            r1 = r1 - 1u;
        }
        r0 = r0 + 1u;
        res_2 = r5 - r0;
        cf = r5 >= r0;
        guest::preempt();
    } while (res_2 != 0 && res_2 >> 0x1f == ((r5 ^ r0) & (r5 ^ res_2)) >> 0x1f);  // (from the original)
L_11b4f0:;
    r0 = ~0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011b4be
GUEST_EXPORT(0x0011b4bf, d_0011b4be::f_0011b4be);

// f_0011b51e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b51e {

inline constexpr guest::Function<0x0031b25c, u32(u32, u32, u32, u32)> call_0031b25c;  // (from the original)

u32 f_0011b51e(u32 r0_unused, u32 r1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r1_1 = r1 + 0x12u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    call_0031b25c(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_0011b51e
GUEST_EXPORT(0x0011b51f, d_0011b51e::f_0011b51e);

// f_0011b528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b528 {

inline constexpr guest::Function<0x0031b25c, u32(u32, u32, u32, u32)> call_0031b25c;  // (from the original)

u32 f_0011b528() {
    guest::cpu()->r[13] -= 8u;
    call_0031b25c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_0011b528
GUEST_EXPORT(0x0011b529, d_0011b528::f_0011b528);

// f_0011b530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b530 {

struct __attribute__((packed)) Object_0011b530_0 {
    u8 unknown_0[0x1aa];  // (not used here)
    u16 half_1aa;
};
GUEST_OFFSET(Object_0011b530_0, half_1aa, 0x1aa);  // (from the original)


u32 f_0011b530(gptr<Object_0011b530_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = u32(arg0->half_1aa) << 0x19 >> 0x1f;  // (from the original)
    return r0_1;
}

}  // namespace d_0011b530
GUEST_EXPORT(0x0011b531, d_0011b530::f_0011b530);

// f_0011b53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b53c {


u32 f_0011b53c(u32 r0, u32 r1) {
    u32 sco = 0;
    u32 cf = guest::cpu()->cf;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 res_2 = 0;
    sco = cf;
    res_1 = lsl_rc(2u, r1 & 0xff, &sco);  // (from the original)
    r1_1 = uxth(res_1);
    if (r1_1 == 2u) {
        goto L_11b552;
    }
    if (r1_1 == 4u) {
        goto L_11b552;
    }
    if (r1_1 == 8u) {
        goto L_11b552;
    }
    if (r1_1 != 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
L_11b552:;
    res_2 = u32(*gptr<u16>(r0 + 0x1aau)) & r1_1;  // (from the original)
    if (res_2 == 0) {
        guest::cpu()->r[1] = r1_1;
        return res_2;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0011b53c
GUEST_EXPORT(0x0011b53d, d_0011b53c::f_0011b53c);

// f_0011b560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b560 {

inline constexpr guest::Function<0x0030e42c, u32(u32, u32, u32, u32)> call_0030e42c;  // (from the original)

u32 f_0011b560(u32 r0_unused, u32 r1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r1_1 = r1 + 0x24u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    call_0030e42c(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_0011b560
GUEST_EXPORT(0x0011b561, d_0011b560::f_0011b560);

// f_0011b56a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b56a {

struct __attribute__((packed)) Object_0011b56a_0 {
    u8 unknown_0[0x1aa];  // (not used here)
    u16 half_1aa;
};
GUEST_OFFSET(Object_0011b56a_0, half_1aa, 0x1aa);  // (from the original)


u32 f_0011b56a(gptr<Object_0011b56a_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = u32(arg0->half_1aa) << 0x1a >> 0x1f;  // (from the original)
    return r0_1;
}

}  // namespace d_0011b56a
GUEST_EXPORT(0x0011b56b, d_0011b56a::f_0011b56a);

// f_0011b576: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b576 {

inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x0030ead0, u32(u32, u32, u32, u32)> call_0030ead0;  // (from the original)

u32 f_0011b576(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r5 = 0u;
    r6 = 0x21u;  // (from the original)
    r7 = r0;
    r4 = r5;
L_11b580:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0030ead0(r7, r4, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_11b59a;
    }
    r5 = r5 + 1u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002ff6f4(r5, r1_1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_11b59a;
    }
    r6 = r4;
L_11b59a:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0x21u)) {  // (from the original)
        guest::preempt();
        goto L_11b580;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r6;
}

}  // namespace d_0011b576
GUEST_EXPORT(0x0011b577, d_0011b576::f_0011b576);

// f_0011b7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b7c8 {

struct __attribute__((packed)) Object_0011b7c8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011b7c8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001063dd, u32(u32, u32, u32, u32)> call_001063dc;  // (from the original)
inline constexpr guest::Function<0x0011c221, u32(u32, u32, u32, u32)> call_0011c220;  // (from the original)
inline constexpr guest::Function<0x0031b3b3, u32(u32, u32, u32, u32)> call_0031b3b2;  // (from the original)
inline constexpr guest::Function<0x0031b3eb, u32(u32, u32, u32, u32)> call_0031b3ea;  // (from the original)
inline constexpr guest::Function<0x0031b579, u32(u32, u32, u32, u32)> call_0031b578;  // (from the original)
inline constexpr guest::Function<0x0031b5b9, u32(u32, u32, u32, u32)> call_0031b5b8;  // (from the original)

u32 f_0011b7c8(gptr<Object_0011b7c8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 res_2 = 0;
    u32 r0_6 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1);
    *gptr<u32>(ea_1 + 4) = u32(r2);
    *gptr<u32>(ea_1 + 8) = u32(r3);
    r13 = ea_1;
    r7 = r2;
    r1_1 = arg0->word_0;
    r4 = ~0u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0031b3b2(r0_1, r1_1, 6u, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = *gptr<u32>(r1);
    guest::cpu()->r[13] = r13;
    r0_3 = call_001063dc(r0_2, r4, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0_3;
    res_1 = r0_3 + 1u;
    if (res_1 == 0) {
        goto L_11b810;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_0031b578(res_1, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r0_4 + 4u);
    r4 = *gptr<u32>(r0_4);
    r5 = r0_4;
    r0 = r4 + (r1 << 3);
L_11b7f8:;
    if (r0 != r4) {
        goto L_11b81a;
    }
    r1_2 = r1 + 1u;
    guest::cpu()->r[13] = r13;
    call_0011c220(r5, r1_2, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = *gptr<u32>(r5) + (*gptr<u32>(r5 + 4u) << 3) - 8u;
    goto L_11b824;
L_11b810:;
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_0031b3ea(r0_5, r1, r2, r3);
    r1_3 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r4;
L_11b81a:;
    res_2 = *gptr<u32>(r4) + 1u;
    r2 = res_2;
    if (res_2 == 0) {
        goto L_11b824;
    }
    r4 = r4 + 8u;
    guest::preempt();
    goto L_11b7f8;
L_11b824:;
    r0_6 = r4 + 4u;
    *gptr<u32>(r4) = u32(r6);
    guest::cpu()->r[13] = r13;
    call_0031b5b8(r0_6, r7, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = u32(s32(r4 - *gptr<u32>(r5)) >> 3);
    guest::preempt();
    goto L_11b810;
}

}  // namespace d_0011b7c8
GUEST_EXPORT(0x0011b7c9, d_0011b7c8::f_0011b7c8);

// f_0011b836: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b836 {

inline constexpr guest::Function<0x00106941, u32(u32, u32, u32, u32)> call_00106940;  // (from the original)
inline constexpr guest::Function<0x0031b579, u32(u32, u32, u32, u32)> call_0031b578;  // (from the original)
inline constexpr guest::Function<0x0031b5b9, u32(u32, u32, u32, u32)> call_0031b5b8;  // (from the original)
inline constexpr guest::Function<0x0031b5ed, u32(u32, u32, u32, u32)> call_0031b5ec;  // (from the original)

u32 f_0011b836(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_0031b578(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = *gptr<u32>(r0_1 + 4u);
    if (s32(r0_2) <= s32(r1)) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r5_1 = r1 << 3;
    r0_2 = *gptr<u32>(*gptr<u32>(r0_1) + r5_1);
    res_1 = r0_2 + 1u;
    r1_1 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    call_00106940(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = *gptr<u32>(r0_1) + r5_1;
    r1_2 = ~0u;
    *gptr<u32>(r0_3) = u32(r1_2);
    r0_4 = call_0031b5ec(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = *gptr<u32>(r0_1) + r5_1 + 4u;
    r0_2 = call_0031b5b8(r0_5, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0011b836
GUEST_EXPORT(0x0011b837, d_0011b836::f_0011b836);

// f_0011b872: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b872 {

inline constexpr guest::Function<0x0031b579, u32(u32, u32, u32, u32)> call_0031b578;  // (from the original)
inline constexpr guest::Function<0x0031b5ed, u32(u32, u32, u32, u32)> call_0031b5ec;  // (from the original)

u32 f_0011b872(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0031b578(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = *gptr<u32>(r0_1 + 4u);
    if (s32(r1_1) > s32(r1)) {
        r1_2 = r1 << 3;
        r0_2 = *gptr<u32>(r0_1) + r1_2 + 4u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    r0_3 = call_0031b5ec(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_3;
}

}  // namespace d_0011b872
GUEST_EXPORT(0x0011b873, d_0011b872::f_0011b872);

// f_0011b890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b890 {

inline constexpr guest::Function<0x001063bd, u32(u32, u32, u32, u32)> call_001063bc;  // (from the original)
inline constexpr guest::Function<0x0031b579, u32(u32, u32, u32, u32)> call_0031b578;  // (from the original)

u32 f_0011b890(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0031b578(r0, r1, r2, r3);
    r1_1 = *gptr<u32>(r0_1 + 4u);
    if (s32(r1_1) <= s32(r1)) {
        goto L_11b8c2;
    }
    r0_2 = *gptr<u32>(*gptr<u32>(r0_1) + (r1 << 3));
    res_1 = r0_2 + 1u;
    r1_1 = res_1;
    if (res_1 == 0) {
        goto L_11b8c2;
    }
    *gptr<u32>(r13) = u32(0u);
    r3_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_001063bc(r0_2, r2, r3, r3_1);
    r1_1 = r13;
    if (r0_3 != r1_1) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
L_11b8c2:;
    r0_3 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0011b890
GUEST_EXPORT(0x0011b891, d_0011b890::f_0011b890);

// f_0011ba94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011ba94 {

struct __attribute__((packed)) Object_0011ba94_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011ba94_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00307651, u32(u32, u32, u32, u32)> call_00307650;  // (from the original)

u32 f_0011ba94(u32 r0, gptr<Object_0011ba94_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r2);
    *gptr<u32>(ea_1 + 4) = u32(r3);
    r13 = ea_1;
    r5 = r0;
    if (*gptr<u32>(arg1->word_0 + 0x18u) == 0) {  // (from the original)
        goto L_11bab6;
    }
    r2 = r13;
    r1 = *gptr<u32>(arg1->word_0 + 0x18u);  // (from the original)
L_11baae:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00307650(r5, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_11bab6:;
    r2 = r13 + 4u;
    r1 = 0x11bac4u;  // (from the original)
    guest::preempt();
    goto L_11baae;
}

}  // namespace d_0011ba94
GUEST_EXPORT(0x0011ba95, d_0011ba94::f_0011ba94);

// f_0011badc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011badc {

inline constexpr guest::Function<0x002f7a10, u32(u32, u32, u32, u32)> call_002f7a10;  // (from the original)
inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)
inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> call_003075cc;  // (from the original)
inline constexpr guest::Function<0x0031b3b3, u32(u32, u32, u32, u32)> call_0031b3b2;  // (from the original)
inline constexpr guest::Function<0x0031b3eb, u32(u32, u32, u32, u32)> call_0031b3ea;  // (from the original)

u32 f_0011badc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 res_1 = 0;
    u32 r2_4 = 0;
    u32 r0_8 = 0;
    u32 res_2 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1);
    *gptr<u32>(ea_1 + 4) = u32(r2);
    *gptr<u32>(ea_1 + 8) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fa90c(r0, 0x11bb98u, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_11bb8e;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fa90c(r0, 0x11bb9cu, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_11bb8e;
    }
    r0_3 = 1u << 9;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003075cc(r0_3, r1_1, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r7 = r0_4;
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0031b3b2(r0_5, r0, 2u, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r4 = 0u;
    r6 = 0x10u;  // (from the original)
    r5 = 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_002f7a10(r0_6, r1_2, r2_3, r3_4);
    r3 = r0_7;
L_11bb16:;
    r1 = 0u;
    r0 = *gptr<u8>(*gptr<u32>(r3) + r4);
    res_1 = r0 << 0x1f >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r1 = 1u;
    }
    if ((r0 & 0x3eu) != 0) {  // (from the original)
        r1 = r1 | 2u;
    }
    if ((r0 & r5) != 0) {
        r1 = r1 | 4u;
    }
    if ((r0 & r6) != 0) {
        r1 = r1 | 8u;
    }
    if ((r0 & 8u) != 0) {
        r1 = r1 | r6;
    }
    if ((r0 & 0x98u) != 0) {  // (from the original)
        r1 = r1 | 0x20u;  // (from the original)
    }
    if (r0 == 0x20u) {  // (from the original)
        goto L_11bb92;
    }
    r2 = 0u;
L_11bb5a:;
    if (r2 != 0) {
        r1 = r1 | r5;
    }
    if ((r0 & 2u) != 0) {
        r1 = r1 | 0x80u;  // (from the original)
    }
    r2_4 = r0 << 2 ^ r0;
    if ((r2_4 & 0x80u) != 0) {  // (from the original)
        r1 = r1 | 0x80u << 1;  // (from the original)
    }
    r0_8 = r4 << 1;
    r4 = r4 + 1u;
    *gptr<u16>(r7 + r0_8) = u16(r1);
    res_2 = r4 - 0x100u;  // (from the original)
    if (res_2 != 0) {
        guest::preempt();
        goto L_11bb16;
    }
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    call_0031b3ea(r0_9, r1, r2_4, r3);
    r1_3 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r7;
L_11bb8e:;
    r1_4 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 0x8c8680u;  // (from the original)
L_11bb92:;
    r2 = 1u;
    guest::preempt();
    goto L_11bb5a;
}

}  // namespace d_0011badc
GUEST_EXPORT(0x0011badd, d_0011badc::f_0011badc);

// f_0011bba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bba8 {

inline constexpr guest::Function<0x0011badd, u32(u32, u32, u32, u32)> call_0011badc;  // (from the original)
inline constexpr guest::Function<0x0031b3b3, u32(u32, u32, u32, u32)> call_0031b3b2;  // (from the original)
inline constexpr guest::Function<0x0031b3eb, u32(u32, u32, u32, u32)> call_0031b3ea;  // (from the original)
inline constexpr guest::Function<0x0031b759, u32(u32, u32, u32, u32)> call_0031b758;  // (from the original)
inline constexpr guest::Function<0x0031ba1d, u32(u32, u32, u32, u32)> call_0031ba1c;  // (from the original)

u32 f_0011bba8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_8 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1);
    *gptr<u32>(ea_1 + 4) = u32(r2);
    *gptr<u32>(ea_1 + 8) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0011badc(r1, r1, r2, r3);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0031ba1c(r0, r0_1, 0u, r2);
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_2) = u32(0x90b570u);  // (from the original)
    r6 = r0_2;
    if (*gptr<u32>(r0_2 + 0x14u) == 0x8c8680u) {  // (from the original)
        goto L_11bcc6;
    }
    *gptr<u8>(r6 + 0x18u) = u8(1u);  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_0031b3b2(r0_3, r1, 2u, r3_1);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r5 = 0xffu;  // (from the original)
L_11bbe2:;
    r2_1 = r4 << 0x18 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0031b758(r6, 0x10u, r2_1, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        goto L_11bc06;
    }
    goto L_11bc0c;
L_11bbf4:;
    r2_2 = r5 << 0x18 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0031b758(r6, 0x10u, r2_2, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        goto L_11bc12;
    }
    r5 = r5 - 1u;
L_11bc06:;
    if (r5 > r4) {
        guest::preempt();
        goto L_11bbf4;
    }
    goto L_11bc12;
L_11bc0c:;
    r4 = r4 + 1u;
    if (r4 < r5) {
        guest::preempt();
        goto L_11bbe2;
    }
L_11bc12:;
    *gptr<u32>(r6 + 0x20u) = u32(r5);  // (from the original)
    *gptr<u32>(r6 + 0x1cu) = u32(r4);  // (from the original)
    r7 = *gptr<u32>(r6 + 0x2cu);  // (from the original)
    goto L_11bc54;
L_11bc1a:;
    if (r4 - 0x61u > 0x19u) {  // (from the original)
        goto L_11bc4c;
    }
    r2_3 = r4 << 0x18 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0031b758(r6, 0x10u, r2_3, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_11bc4c;
    }
    r0_7 = r4 - 0x20u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0_7);
    r2_4 = r0_7 << 0x18 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0031b758(r6, 8u, r2_4, r3);
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_11bc4c;
    }
    r0_9 = *gptr<u32>(r13 + 8u);
    goto L_11bc4e;
L_11bc4c:;
    r0_9 = r4;
L_11bc4e:;
    *gptr<u8>(r7) = u8(r0_9);
    r7 = r7 + 1u;
    r4 = r4 + 1u;
L_11bc54:;
    if (r4 <= r5) {
        guest::preempt();
        goto L_11bc1a;
    }
    r4 = 0u;
    r5 = 0xffu;  // (from the original)
L_11bc5c:;
    r2_5 = r4 << 0x18 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_0031b758(r6, 8u, r2_5, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        goto L_11bc80;
    }
    goto L_11bc86;
L_11bc6e:;
    r2_6 = r5 << 0x18 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_0031b758(r6, 8u, r2_6, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_11 != 0) {
        goto L_11bc8c;
    }
    r5 = r5 - 1u;
L_11bc80:;
    if (r5 > r4) {
        guest::preempt();
        goto L_11bc6e;
    }
    goto L_11bc8c;
L_11bc86:;
    r4 = r4 + 1u;
    if (r4 < r5) {
        guest::preempt();
        goto L_11bc5c;
    }
L_11bc8c:;
    *gptr<u32>(r6 + 0x28u) = u32(r5);  // (from the original)
    *gptr<u32>(r6 + 0x24u) = u32(r4);  // (from the original)
    r7 = *gptr<u32>(r6 + 0x30u);  // (from the original)
    goto L_11bcd0;
L_11bc94:;
    if (r4 - 0x41u > 0x19u) {  // (from the original)
        goto L_11bcc8;
    }
    r2_7 = r4 << 0x18 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0031b758(r6, 8u, r2_7, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        goto L_11bcc8;
    }
    r0_13 = r4 + 0x20u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0_13);
    r2_8 = r0_13 << 0x18 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_0031b758(r6, 0x10u, r2_8, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_14 == 0) {
        goto L_11bcc8;
    }
    r0_15 = *gptr<u32>(r13 + 8u);
    goto L_11bcca;
L_11bcc6:;
    goto L_11bcda;
L_11bcc8:;
    r0_15 = r4;
L_11bcca:;
    *gptr<u8>(r7) = u8(r0_15);
    r7 = r7 + 1u;
    r4 = r4 + 1u;
L_11bcd0:;
    if (r4 <= r5) {
        guest::preempt();
        goto L_11bc94;
    }
    r0_16 = r13;
    guest::cpu()->r[13] = r13;
    call_0031b3ea(r0_16, r1, r2, r3);
L_11bcda:;
    r1_1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r6;
}

}  // namespace d_0011bba8
GUEST_EXPORT(0x0011bba9, d_0011bba8::f_0011bba8);

// f_0011bcfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bcfc {

inline constexpr guest::Function<0x001019c5, u32(u32, u32, u32, u32)> call_001019c4;  // (from the original)
inline constexpr guest::Function<0x0010bfbd, u32(u32, u32, u32, u32)> call_0010bfbc;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> call_003075cc;  // (from the original)
inline constexpr guest::Function<0x00307761, u32(u32, u32, u32, u32)> call_00307760;  // (from the original)
inline constexpr guest::Function<0x00307990, u32(u32, u32, u32, u32)> call_00307990;  // (from the original)

u32 f_0011bcfc(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r1_7 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    r13 = ea_1;
    r5_1 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0010bfbc(0u, 0u, r1, r2);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1;
    if (r0_1 != 0) {
        goto L_11bd32;
    }
    if (r5_1 >> 0x1f == (r5_1 & (r5_1 ^ r5_1)) >> 0x1f) {  // (from the original)
        if (r5_1 < 0x17u) {  // (from the original)
            goto L_11bd20;
        }
    }
    r5_1 = 0u;
L_11bd20:;
    r2_2 = *gptr<u32>(0x8c8428u + (r5_1 << 2));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00307760(0u, 0u, r2_2, r2);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_2;
L_11bd32:;
    r0_3 = *gptr<u32>(r0 + 4u);
    if (r0_3 != 0) {
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fa9d0(r0_3, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_5 = call_002fa9d0(r4_1, r1_2, r2_3, r3_2);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_6 = r0_4 + r0_5 + 1u;
        guest::cpu()->r[13] = r13;
        r0_7 = call_003075cc(r0_6, r1_3, r2_4, r3_3);
        r2_5 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r1_4 = *gptr<u32>(r0 + 4u);
        guest::cpu()->r[13] = r13;
        r0_8 = call_00307990(r0_7, r1_4, r2_5, r3_4);
        r2_6 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_9 = call_001019c4(r0_8, r4_1, r2_6, r3_5);
        r1_5 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_10 = *gptr<u32>(r0 + 4u);
        guest::cpu()->r[13] = r13;
        call_002f88b8(r0_10, r1_5, r2_7, r3_6);
        r1_6 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_002f88b8(r4_1, r1_6, r2_8, r3_7);
        r4_1 = r0_9;
    }
    *gptr<u32>(r0 + 4u) = u32(r4_1);
    goto L_11bd7a;
L_11bd7a:;
    r1_7 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011bcfc
GUEST_EXPORT(0x0011bcfd, d_0011bcfc::f_0011bcfc);

// f_0011bd84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bd84 {

inline constexpr guest::Function<0x0011c00d, u32(u32, u32, u32, u32)> call_0011c00c;  // (from the original)

u32 f_0011bd84(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0011c00c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x90b5a4u);  // (from the original)
    *gptr<u32>(r0_1 + 4u) = u32(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_0011bd84
GUEST_EXPORT(0x0011bd85, d_0011bd84::f_0011bd84);

// f_0011bdd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bdd8 {

struct __attribute__((packed)) Object_0011bdd8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011bdd8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_003076c8;  // (from the original)

u32 f_0011bdd8(gptr<Object_0011bdd8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x90b5e8u);  // (from the original)
    r0_1 = r0 + 0x14u;  // (from the original)
    r0_2 = call_003076c8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 - 0x14u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_0011bdd8
GUEST_EXPORT(0x0011bdd9, d_0011bdd8::f_0011bdd8);

// f_0011bdf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bdf0 {

struct __attribute__((packed)) Object_0011bdf0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011bdf0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0011bf9b, u32(u32, u32, u32, u32)> call_0011bf9a;  // (from the original)
inline constexpr guest::Function<0x0031b5ed, u32(u32, u32, u32, u32)> call_0031b5ec;  // (from the original)

u32 f_0011bdf0(gptr<Object_0011bdf0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = ~0u;
    arg0->word_0 = u32(r0_1);
    r0_2 = call_0031b5ec(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0 + 4u;
    r0_4 = call_0011bf9a(r0_3, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_5 = r0_4 - 4u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_0011bdf0
GUEST_EXPORT(0x0011bdf1, d_0011bdf0::f_0011bdf0);

// f_0011bf9a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bf9a {

struct __attribute__((packed)) Object_0011bf9a_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011bf9a_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0011bf9a_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011bf9a_1, word_0, 0x0);  // (from the original)


void f_0011bf9a(gptr<Object_0011bf9a_0> arg0, gptr<Object_0011bf9a_1> arg1) {
    u32 r1_1 = 0;
    r1_1 = arg1->word_0;
    arg0->word_0 = u32(r1_1);
    *gptr<u32>(r1_1 + 0x1cu) = u32(*gptr<u32>(r1_1 + 0x1cu) + 1u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0011bf9a
GUEST_EXPORT(0x0011bf9b, d_0011bf9a::f_0011bf9a);

// f_0011bfa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bfa8 {

inline guest::global<u32, 0x00981fc8> global_00981fc8;  // (from the original)
inline constexpr guest::Function<0x0031bebd, u32(u32, u32, u32, u32)> call_0031bebc;  // (from the original)

u32 f_0011bfa8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *global_00981fc8;
    if (r0_1 == 0) {
        call_0031bebc(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1_1 = *global_00981fc8;
    *gptr<u32>(r0) = u32(r1_1);
    *gptr<u32>(r1_1 + 0x1cu) = u32(*gptr<u32>(r1_1 + 0x1cu) + 1u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0011bfa8
GUEST_EXPORT(0x0011bfa9, d_0011bfa8::f_0011bfa8);

// f_0011bfe2: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bfe2 {

inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_003076c8;  // (from the original)

u32 f_0011bfe2(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x10u;  // (from the original)
    r0_2 = call_003076c8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_0011bfe2
GUEST_EXPORT(0x0011bfe3, d_0011bfe2::f_0011bfe2);

// f_0011bffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bffc {

inline constexpr guest::Function<0x0010c235, u32(u32, u32, u32, u32)> call_0010c234;  // (from the original)

u32 f_0011bffc(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x10u;  // (from the original)
    r0_2 = call_0010c234(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_0011bffc
GUEST_EXPORT(0x0011bffd, d_0011bffc::f_0011bffc);

// f_0011c00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c00c {

struct __attribute__((packed)) Object_0011c00c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011c00c_0, word_0, 0x0);  // (from the original)


void f_0011c00c(gptr<Object_0011c00c_0> arg0) {
    arg0->word_0 = u32(0x90b6a4u);  // (from the original)
    guest::cpu()->r[1] = 0x90b6a4u;  // (from the original)
    return;
}

}  // namespace d_0011c00c
GUEST_EXPORT(0x0011c00d, d_0011c00c::f_0011c00c);

// f_0011c0fa: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c0fa {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0011c0fa(u32 arg0_value) {
    u32 r0 = arg0_value;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    gptr<u8> arg0 = gptr<u8>(arg0_value);
    guest::cpu()->r[13] -= 8u;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r2_1 = *gptr<u32>(arg0.addr() + 0xfffffff8u);  // (from the original)
    r3_1 = *gptr<u32>(arg0.addr() + 0xfffffffcu);  // (from the original)
    r0_1 = call_002f76ac(r0, guest::cpu()->r[1], r2_1, r3_1);
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_0011c0fa
GUEST_EXPORT(0x0011c0fb, d_0011c0fa::f_0011c0fa);

// f_0011c120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c120 {

inline constexpr guest::Function<0x0011c02d, u32(u32, u32, u32, u32)> call_0011c02c;  // (from the original)

u32 f_0011c120(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r7_1 = 0;
    u32 r4_1 = 0;
    u32 r7_2 = 0;
    u32 r1_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1);
    *gptr<u32>(ea_1 + 4) = u32(r2);
    *gptr<u32>(ea_1 + 8) = u32(r3);
    r13 = ea_1;
    r7_1 = r13;
    r4_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    *gptr<u32>(r7_1) = u32(r4_1);
    *gptr<u32>(r7_1 + 4) = u32(0u);
    *gptr<u32>(r7_1 + 8) = u32(0x2f88b8u);  // (from the original)
    r7_2 = r7_1 + 0xc;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0011c02c(guest::cpu()->r[0], r1, r2, r3);
    r1_1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0011c120
GUEST_EXPORT(0x0011c121, d_0011c120::f_0011c120);

// f_0011c218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c218 {

struct __attribute__((packed)) Object_0011c218_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011c218_0, word_0, 0x0);  // (from the original)


u32 f_0011c218(gptr<Object_0011c218_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = r1 << 2;
    r0_1 = arg0->word_0 + r1_1;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0011c218
GUEST_EXPORT(0x0011c219, d_0011c218::f_0011c218);

// f_0011c220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c220 {

inline constexpr guest::Function<0x0011bdf1, u32(u32, u32, u32, u32)> call_0011bdf0;  // (from the original)
inline constexpr guest::Function<0x00307839, u32(u32, u32, u32, u32)> call_00307838;  // (from the original)
inline constexpr guest::Function<0x00307889, u32(u32, u32, u32, u32)> call_00307888;  // (from the original)
inline constexpr guest::Function<0x0031b855, u32(u32, u32, u32, u32)> call_0031b854;  // (from the original)
inline constexpr guest::Function<0x0031c1c9, u32(u32, u32, u32, u32)> call_0031c1c8;  // (from the original)

u32 f_0011c220(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    r5 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = r1;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0011bdf0(r0_1, r1, r2, r3);
    *gptr<u32>(r13 + 0x10u) = u32(r0_2);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00307838(8u, r7, 0x11bdf1u, 0x11be0bu);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0_3);
    r4 = *gptr<u32>(r5 + 4u);
    if (r4 >= r7) {
        r4 = r7;
    }
    r6 = *gptr<u32>(r5);
    *gptr<u32>(r13 + 0xcu) = u32(r0_3);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r4 << 3);  // (from the original)
    for (;;) {
L_11c260:;
        if (!(*gptr<u32>(r5) + *gptr<u32>(r13 + 0x14u) != r6)) {  // (from the original)
            break;
        }
L_11c250:;
        r0_4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0031c1c8(r0_4, r6, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 = r6 + 8u;
        *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r13 + 0xcu) + 8u);  // (from the original)
        guest::preempt();
    }
    for (;;) {
L_11c27a:;
        if (!(r4 < r7)) {
            break;
        }
L_11c26c:;
        r0_5 = (r4 << 3) + *gptr<u32>(r13 + 8u);
        r1_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        r4 = r4 + 1u;
        guest::cpu()->r[13] = r13;
        call_0031c1c8(r0_5, r1_1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    }
    r0_6 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    call_00307888(r0_6, 0x11be0bu, r2, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r5 + 4u) = u32(r7);
    r4_1 = *gptr<u32>(r13 + 8u);
    r0_7 = r13 + 4u;
    *gptr<u32>(r5) = u32(r4_1);
    guest::cpu()->r[13] = r13;
    call_0031b854(r0_7, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_0011c220
GUEST_EXPORT(0x0011c221, d_0011c220::f_0011c220);

// f_0011c464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c464 {

inline constexpr guest::Function<0x0031c311, u32(u32, u32, u32, u32)> call_0031c310;  // (from the original)
inline constexpr guest::Function<0x0031c31d, u32(u32, u32, u32, u32)> call_0031c31c;  // (from the original)

u32 f_0011c464(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r2_1 = r1 >> 3;
    r13 = ea_1 - 8u;
    r4_1 = (r1 >> 1) + r1 + r2_1;
    r1_1 = r1 + 0x20u;  // (from the original)
    if (r1_1 > r4_1) {
        r4_1 = r1_1;
    }
    r1_2 = r13 + 0x10u;  // (from the original)
    r0_1 = r13;
    *gptr<u32>(r13) = u32(r4_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0031c310(r0_1, r1_2, r2_1, r3);
    r3_1 = guest::cpu()->r[3];
    r1_3 = *gptr<u32>(r0_2);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0031c31c(r0, r1_3, r3, r3_1);
    r1_4 = guest::cpu()->r[1];
    r0_4 = r0_3 + 0xcu;  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    tpc_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0011c464
GUEST_EXPORT(0x0011c465, d_0011c464::f_0011c464);

// f_0011c614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c614 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x0031c3a9, u32(u32, u32, u32, u32)> call_0031c3a8;  // (from the original)
inline constexpr guest::Function<0x0031c771, u32(u32, u32, u32, u32)> call_0031c770;  // (from the original)

u32 f_0011c614(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fa9d0(r1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r2_2 = *gptr<u32>(*gptr<u32>(r4) + 0xfffffffcu);  // (from the original)
        *gptr<u32>(r13) = u32(r0_1);
        guest::cpu()->r[13] = r13;
        r0_2 = call_0031c770(r4, 0u, r2_2, r1);
        r1_1 = guest::cpu()->r[1];
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_3 = *gptr<u32>(r4) - 0xcu;  // (from the original)
    r1_2 = *gptr<u32>(r0_3) + 1u;
    if (r1_2 == 1u) {
        goto L_11c652;
    }
    guest::cpu()->r[13] = r13;
    call_0031c3a8(r4, r1_2, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(0xaf7f3cu);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
L_11c652:;
    r1 = 0u;
    *gptr<u32>(r0_3 + 8u) = u32(r1);
    r0_4 = *gptr<u32>(r4);
    *gptr<u8>(r13) = u8(r1);
    *gptr<u8>(r0_4) = u8(r1);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0011c614
GUEST_EXPORT(0x0011c615, d_0011c614::f_0011c614);

// f_0011cb18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cb18 {

inline constexpr guest::Function<0x0011d7ec, u32(u32, u32, u32, u32)> call_0011d7ec;  // (from the original)
inline constexpr guest::Function<0x00142104, u32(u32, u32, u32, u32)> call_00142104;  // (from the original)
inline constexpr guest::Function<0x002f91d4, u32(u32, u32, u32, u32)> call_002f91d4;  // (from the original)

u32 f_0011cb18() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f91d4(0u, 0x4000027u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_2 = call_00142104(0u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1 + 4u) = u32(r0_2 + 1u);
    r0_3 = call_0011d7ec(0u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r0_1 + 0xcu) = u32(r0_3);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_0011cb18
GUEST_EXPORT(0x0011cb18, d_0011cb18::f_0011cb18);

// f_0011cb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cb6c {

inline constexpr guest::Function<0x0011cc54, u32(u32, u32, u32, u32)> call_0011cc54;  // (from the original)
inline constexpr guest::Function<0x0011d2c4, u32(u32, u32, u32, u32)> call_0011d2c4;  // (from the original)
inline constexpr guest::Function<0x0011de98, u32(u32, u32, u32, u32)> call_0011de98;  // (from the original)
inline constexpr guest::Function<0x0011df2c, u32(u32, u32, u32, u32)> call_0011df2c;  // (from the original)

u32 f_0011cb6c(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    call_0011df2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0011d2c4(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = call_0011cc54(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_0011de98(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0011cb6c
GUEST_EXPORT(0x0011cb6c, d_0011cb6c::f_0011cb6c);

// f_0011cb8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cb8c {

inline guest::global<u32, 0x00953374> global_00953374;  // (from the original)
inline constexpr guest::Function<0x0011d038, u32(u32, u32, u32, u32)> call_0011d038;  // (from the original)
inline constexpr guest::Function<0x0011d048, u32(u32, u32, u32, u32)> call_0011d048;  // (from the original)
inline constexpr guest::Function<0x0011d0e0, u32(u32, u32, u32, u32)> call_0011d0e0;  // (from the original)
inline constexpr guest::Function<0x0011d0f0, u32(u32, u32, u32, u32)> call_0011d0f0;  // (from the original)
inline constexpr guest::Function<0x0011d144, u32(u32, u32, u32, u32)> call_0011d144;  // (from the original)
inline constexpr guest::Function<0x0011d224, u32(u32, u32, u32, u32)> call_0011d224;  // (from the original)
inline constexpr guest::Function<0x0011d258, u32(u32, u32, u32, u32)> call_0011d258;  // (from the original)
inline constexpr guest::Function<0x0011d2fc, u32(u32, u32, u32, u32)> call_0011d2fc;  // (from the original)
inline constexpr guest::Function<0x0011f290, u32(u32, u32, u32, u32)> call_0011f290;  // (from the original)
inline constexpr guest::Function<0x0013e154, u32(u32, u32, u32, u32)> call_0013e154;  // (from the original)

u32 f_0011cb8c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r3_6 = 0;
    u32 r1_5 = 0;
    u32 r3_7 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r3_8 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r3_9 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 r3_10 = 0;
    u32 r0_13 = 0;
    u32 r1_9 = 0;
    u32 ea_1 = 0;
    u32 r3_11 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0011d0e0(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    *global_00953374 = u32(r0_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0011d0f0(r0_1, r1_1, guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(0x953374u + 4u) = u32(r0_2);  // (from the original)
    r1_2 = *global_00953374;
    r0_3 = r1_2 - r0_2;
    *gptr<u32>(0x953374u + 8u) = u32(r0_3);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0011d258(r0_3, r1_2, guest::cpu()->r[2], r3_2);
    r3_3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_0011d144(0x31b8000u, 0x31b8000u, guest::cpu()->r[2], r3_3);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r3_4 = guest::cpu()->r[3];
        *gptr<u32>(r13) = u32(r0_5);
        *gptr<u32>(0x953374u + 0xcu) = u32(*gptr<u32>(0x953374u + 8u) + 0xfce48000u >> 0xc << 0xc);  // (from the original)
    } else {
        guest::cpu()->r[13] = r13;
        r0_6 = call_0011d144(0x31b8000u, 0x31b8000u, guest::cpu()->r[2], r3_3);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r3_4 = guest::cpu()->r[3];
        *gptr<u32>(r13) = u32(r0_6);
        *gptr<u32>(0x953374u + 0xcu) = u32(*gptr<u32>(0x953374u + 8u) + 0xfce48000u >> 0xc << 0xc);  // (from the original)
    }
    r0_7 = *gptr<u32>(0x953374u + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0011d048(r0_7, r1_3, guest::cpu()->r[2], r3_4);
    r1_4 = guest::cpu()->r[1];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_0011d038(r0_8, r1_4, guest::cpu()->r[2], r3_5);
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0011d224(0x8000000u, r0_9, guest::cpu()->r[2], r3_6);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_10 = call_0011d2fc(0x2000u, r1_5, guest::cpu()->r[2], r3_7);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_11 = call_0011d0e0(r0_10, r1_6, guest::cpu()->r[2], r3_8);
    r1_7 = guest::cpu()->r[1];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_12 = call_0011f290(r0_11, r1_7, guest::cpu()->r[2], r3_9);
    r1_8 = guest::cpu()->r[1];
    r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_13 = call_0013e154(r0_12, r1_8, guest::cpu()->r[2], r3_10);
    r1_9 = guest::cpu()->r[1];
    ea_1 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r3_11 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    return call_0011d038(r0_13, r1_9, guest::cpu()->r[2], r3_11);
}

}  // namespace d_0011cb8c
GUEST_EXPORT(0x0011cb8c, d_0011cb8c::f_0011cb8c);

// f_0011cc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cc54 {

inline guest::global<u8, 0x00974ab3> global_00974ab3;  // (from the original)
inline constexpr guest::Function<0x0011dff4, u32(u32, u32, u32, u32)> call_0011dff4;  // (from the original)
inline constexpr guest::Function<0x0011e170, u32(u32, u32, u32, u32)> call_0011e170;  // (from the original)
inline constexpr guest::Function<0x0011e1a4, u32(u32, u32, u32, u32)> call_0011e1a4;  // (from the original)
inline constexpr guest::Function<0x0011e378, u32(u32, u32, u32, u32)> call_0011e378;  // (from the original)
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> call_0012a518;  // (from the original)
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> call_0012ab78;  // (from the original)

u32 f_0011cc54(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0011e170(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r4_1 = r0 & ~7u;
    *global_00974ab3 = u8(1u);
    call_0011dff4(0xadfa4cu, 0x100u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r0_2 = call_0011e1a4(0x300u, r4_1, 0xfu, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    res_1 = r0_2 & 0x80000000u;  // (from the original)
    if (res_1 >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return r0_2;
    }
    call_0012a518(r0_2, res_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_3 = call_0011e378(0u, r1_2, r2_3, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    call_0012ab78(r0_3, r1_3, r2_4, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_0011cc54
GUEST_EXPORT(0x0011cc54, d_0011cc54::f_0011cc54);

// f_0011cfa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cfa8 {

inline guest::global<u32, 0x009529c8> global_009529c8;  // (from the original)
inline constexpr guest::Function<0x0011e838, u32(u32, u32, u32, u32)> call_0011e838;  // (from the original)

u32 f_0011cfa8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0011e838(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = u32(0x8ee848u);  // (from the original)
    *gptr<u8>(r0_1 + 0x168u) = u8(1u);  // (from the original)
    *gptr<u8>(r0_1 + 0x169u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x16cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x170u) = u32(0u);  // (from the original)
    *global_009529c8 = u32(r0_1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x9529c8u;  // (from the original)
    return r0_1;
}

}  // namespace d_0011cfa8
GUEST_EXPORT(0x0011cfa8, d_0011cfa8::f_0011cfa8);

// f_0011cfe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cfe4 {

inline guest::global<u8, 0x00974f00> global_00974f00;  // (from the original)
inline constexpr guest::Function<0x0011ddb0, u32(u32, u32, u32, u32)> call_0011ddb0;  // (from the original)
inline constexpr guest::Function<0x0011de28, u32(u32, u32, u32, u32)> call_0011de28;  // (from the original)

u32 f_0011cfe4(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0011de28(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_1 + (r0_1 << 2) << 1;
    r1_1 = u32(s32(r0_2) >> 0x1f);  // (from the original)
    ea_1 = 0x974f00u + 0x18u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0_2);
    *gptr<u32>(ea_1 + 4) = u32(r1_1);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0011ddb0(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    zf_1 = r0_3 == 0;
    if (!zf_1) {
        *gptr<u8>(0x974f00u + 1u) = u8(1u);  // (from the original)
    }
    r1_2 = u32(*gptr<u8>(0x974f00u + 1u));  // (from the original)
    if (r1_2 != 0) {
        *global_00974f00 = u8(1u);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    res_1 = *gptr<u32>(0x974f00u + 0x1cu) | *gptr<u32>(0x974f00u + 0x18u);  // (from the original)
    if (res_1 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *global_00974f00 = u8(1u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = res_1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0011cfe4
GUEST_EXPORT(0x0011cfe4, d_0011cfe4::f_0011cfe4);

// f_0011d048: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d048 {

inline constexpr guest::Function<0x0011d834, u32(u32, u32, u32, u32)> call_0011d834;  // (from the original)

u32 f_0011d048(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 res_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 res_3 = 0;
    r4 = r0;
    res_1 = r0 << 0x14;  // (from the original)
    zf_1 = res_1 == 0;
    r0_1 = res_1;
    if (!zf_1) {
        r0_1 = 0xe0e01bf2u;  // (from the original)
    }
    r13 = r13 - 0x18u;  // (from the original)
    if (!zf_1) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r5 = 0x974f54u;  // (from the original)
    r0_2 = *gptr<u32>(r5 + 8u);
    if (r4 <= r0_2) {
        goto L_11d0a4;
    }
    r1_1 = r0_2 + 0x8000000u;  // (from the original)
    r3_1 = r4 - r0_2;
    *gptr<u32>(r13) = u32(3u);
    *gptr<u32>(r13 + 4u) = u32(3u);
    r0_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0011d834(r0_3, r1_1, 0u, r3_1);
    res_2 = r0 & 0x80000000u;  // (from the original)
    r1 = res_2;
    if (res_2 >> 0x1f) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r5 + 8u) = u32(r4);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11d0a4:;
    r3_2 = r0_2 - r4;
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r1_2 = r4 + 0x8000000u;  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0011d834(r0_4, r1_2, 0u, r3_2);
    res_3 = r0 & 0x80000000u;  // (from the original)
    r1 = res_3;
    if (!(res_3 >> 0x1f)) {  // (from the original)
        *gptr<u32>(r5 + 8u) = u32(r4);
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011d048
GUEST_EXPORT(0x0011d048, d_0011d048::f_0011d048);

// f_0011d144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d144 {

inline constexpr guest::Function<0x0011d834, u32(u32, u32, u32, u32)> call_0011d834;  // (from the original)

u32 f_0011d144(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 res_3 = 0;
    r4 = r0;
    res_1 = r0 << 0x14;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    if (res_1 == 0) {
        r5 = 0x974f54u;  // (from the original)
        r0_1 = *gptr<u32>(r5 + 4u);
        r1 = *gptr<u32>(r5);
        if (r4 <= r0_1) {
            goto L_11d1e4;
        }
        if (r0_1 == 0) {
            goto L_11d194;
        }
        if (((r0_1 | r4) & 0xfffffu) == 0u) {  // (from the original)
            goto L_11d194;
        }
    }
    r0 = 0xe0e01bf2u;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11d194:;
    zf_1 = r0_1 == 0;
    r3_1 = r4 - r0_1;
    if (!zf_1) {
        r1 = r1 + r0_1;
    }
    *gptr<u32>(r13) = u32(3u + 0x10000u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(3u);
    if (zf_1) {
        r1 = 0u;
    }
    r0_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0011d834(r0_2, r1, 0u, r3_1);
    res_2 = r0 & 0x80000000u;  // (from the original)
    r1 = res_2;
    if (res_2 >> 0x1f) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 == 0) {
        r1 = *gptr<u32>(r13 + 8u);
        *gptr<u32>(r5) = u32(r1);
    }
    *gptr<u32>(r5 + 4u) = u32(r4);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11d1e4:;
    r3_2 = r0_1 - r4;
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r1_1 = r1 + r4;
    r0_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0011d834(r0_3, r1_1, 0u, r3_2);
    res_3 = r0 & 0x80000000u;  // (from the original)
    r1 = res_3;
    if (res_3 >> 0x1f) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r4 == 0) {
        *gptr<u32>(r5) = u32(0u);
    }
    *gptr<u32>(r5 + 4u) = u32(r4);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011d144
GUEST_EXPORT(0x0011d144, d_0011d144::f_0011d144);

// f_0011d258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d258 {

inline guest::global<u8, 0x00974f48> global_00974f48;  // (from the original)
inline constexpr guest::Function<0x0011e180, u32(u32, u32, u32, u32)> call_0011e180;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_0011d258(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    if ((*gptr<u32>(0x974f48u + 4u) & 1u) != 0) {  // (from the original)
        r0_6 = u32(s32(s8(*global_00974f48)));
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    r0_1 = 0x974f48u + 4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe7dc(r0_1, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r0_6 = u32(s32(s8(*global_00974f48)));
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0011e180(r0_3, 0x400024bu, guest::cpu()->r[2], r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    res_1 = r0_4 >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_00134250(res_1, r1, guest::cpu()->r[2], r3_2);
        r1 = guest::cpu()->r[1];
    }
    r0_5 = u32(*gptr<u8>(r13));
    if (r0_5 != 0) {
        r0_5 = 1u;
    }
    *global_00974f48 = u8(r0_5);
    r0_6 = u32(s32(s8(*global_00974f48)));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_0011d258
GUEST_EXPORT(0x0011d258, d_0011d258::f_0011d258);

// f_0011d2d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d2d4 {

inline constexpr guest::Function<0x0011f8d4, u32(u32, u32, u32, u32)> call_0011f8d4;  // (from the original)
inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32, u32)> call_0012f598;  // (from the original)

u32 f_0011d2d4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0011f8d4(r0, r1, r2, guest::cpu()->r[3]);
    res_1 = r0_1 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return r0_1;
    }
    res_2 = r0_1 >> 0x1f;  // (from the original)
    if (res_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0x11d2ecu;  // (from the original)
        return r0_1;
    }
    guest::cpu()->r[13] += 8u;
    return call_0012f598(r0_1, 0x11d2ecu, res_2, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0011d2d4
GUEST_EXPORT(0x0011d2d4, d_0011d2d4::f_0011d2d4);

// f_0011d350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d350 {

inline guest::global<u32, 0x00952c68> global_00952c68;  // (from the original)
inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x00100049, u32(u32, u32, u32, u32)> call_00100048;  // (from the original)
inline constexpr guest::Function<0x00100089, u32(u32, u32, u32, u32)> call_00100088;  // (from the original)
inline constexpr guest::Function<0x001000c5, u32(u32, u32, u32, u32)> call_001000c4;  // (from the original)
inline constexpr guest::Function<0x00100105, u32(u32, u32, u32, u32)> call_00100104;  // (from the original)
inline constexpr guest::Function<0x00100149, u32(u32, u32, u32, u32)> call_00100148;  // (from the original)
inline constexpr guest::Function<0x0010018d, u32(u32, u32, u32, u32)> call_0010018c;  // (from the original)
inline constexpr guest::Function<0x001001d1, u32(u32, u32, u32, u32)> call_001001d0;  // (from the original)
inline constexpr guest::Function<0x00100215, u32(u32, u32, u32, u32)> call_00100214;  // (from the original)
inline constexpr guest::Function<0x001002a5, u32(u32, u32, u32, u32)> call_001002a4;  // (from the original)
inline constexpr guest::Function<0x001002e9, u32(u32, u32, u32, u32)> call_001002e8;  // (from the original)
inline constexpr guest::Function<0x0010032d, u32(u32, u32, u32, u32)> call_0010032c;  // (from the original)
inline constexpr guest::Function<0x00100379, u32(u32, u32, u32, u32)> call_00100378;  // (from the original)
inline constexpr guest::Function<0x001003bd, u32(u32, u32, u32, u32)> call_001003bc;  // (from the original)
inline constexpr guest::Function<0x00100401, u32(u32, u32, u32, u32)> call_00100400;  // (from the original)
inline constexpr guest::Function<0x00100449, u32(u32, u32, u32, u32)> call_00100448;  // (from the original)
inline constexpr guest::Function<0x00100491, u32(u32, u32, u32, u32)> call_00100490;  // (from the original)
inline constexpr guest::Function<0x001004dd, u32(u32, u32, u32, u32)> call_001004dc;  // (from the original)
inline constexpr guest::Function<0x00100529, u32(u32, u32, u32, u32)> call_00100528;  // (from the original)
inline constexpr guest::Function<0x00100575, u32(u32, u32, u32, u32)> call_00100574;  // (from the original)
inline constexpr guest::Function<0x001005c1, u32(u32, u32, u32, u32)> call_001005c0;  // (from the original)
inline constexpr guest::Function<0x0011da44, u32(u32, u32, u32, u32)> call_0011da44;  // (from the original)
inline constexpr guest::Function<0x0011eaac, u32(u32, u32, u32, u32)> call_0011eaac;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)

u32 f_0011d350() {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r0_4 = 0;
    u32 r1_12 = 0;
    u32 r1_13 = 0;
    u32 r1_14 = 0;
    u32 r1_15 = 0;
    u32 r1_16 = 0;
    u32 r1_17 = 0;
    u32 r1_18 = 0;
    u32 r1_19 = 0;
    u32 r1_20 = 0;
    u32 r1_21 = 0;
    u32 r1_22 = 0;
    goto L_11d350;
L_11d350:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_0011da44(0xa1867cu, 0x3cd800u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_1 = call_00100400(0xa1867cu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_2 = *global_00975338;
    r0_3 = call_003045a8(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    call_00100048(r0_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    call_0010018c(r0_3, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    call_001002e8(r0_3, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    call_00100214(r0_3, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    call_00100448(r0_3, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    call_00100528(r0_3, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    call_001003bc(r0_3, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    call_001004dc(r0_3, r1_10, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_11 = guest::cpu()->r[1];
    r0_4 = *global_00952c68;
    call_001005c0(r0_4, r1_11, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_12 = guest::cpu()->r[1];
    call_00100490(r0_3, r1_12, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_13 = guest::cpu()->r[1];
    call_00100574(r0_3, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_14 = guest::cpu()->r[1];
    call_001001d0(r0_3, r1_14, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_15 = guest::cpu()->r[1];
    call_001000c4(r0_3, r1_15, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_16 = guest::cpu()->r[1];
    call_0010032c(r0_3, r1_16, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_17 = guest::cpu()->r[1];
    call_00100104(r0_3, r1_17, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_18 = guest::cpu()->r[1];
    call_001002a4(r0_3, r1_18, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_19 = guest::cpu()->r[1];
    call_00100148(r0_3, r1_19, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0011eaac(0xbb800u, r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_20 = guest::cpu()->r[1];
    call_00100088(r0_1, r1_20, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_21 = guest::cpu()->r[1];
    call_00100378(r0_3, r1_21, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_22 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(0x100261u, r0_3, r1_22, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0011d350
GUEST_EXPORT(0x0011d350, d_0011d350::f_0011d350);

// f_0011d458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d458 {

inline guest::global<u32, 0x00953378> global_00953378;  // (from the original)
inline constexpr guest::Function<0x0011d258, u32(u32, u32, u32, u32)> call_0011d258;  // (from the original)

u32 f_0011d458() {
    u32 r0_1 = 0;
    r0_1 = *global_00953378;
    return call_0011d258(r0_1, 0xa78000u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0011d458
GUEST_EXPORT(0x0011d458, d_0011d458::f_0011d458);

// f_0011d480: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d480 {

struct __attribute__((packed)) Object_0011d480_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0011d480_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0011d480_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0011d480_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0011d480_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0011d480_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0011d480(gptr<Object_0011d480_0> arg0, gptr<Object_0011d480_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 8;
    r2_1 = arg1->word_4;
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_4 = u32(r2_1);
    r0_1 = r0 + 8;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301d0c(r0_1, 0x11e460u, 0x14u, 4u);  // (from the original)
    ea_1 = r0_2 + 0x50u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_2 + 0x54u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r0_2 + 0x58u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r0_2 + 0x5cu;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r0_2 + 0x60u;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r0_2 + 0x64u;  // (from the original)
    *gptr<u32>(ea_6) = u32(0u);
    ea_7 = r0_2 + 0x68u;  // (from the original)
    *gptr<u32>(ea_7) = u32(0u);
    ea_8 = ea_7 + 4u;
    *gptr<u32>(ea_8) = u32(~0u);
    r0_3 = ea_8 - 0x74u;  // (from the original)
    *gptr<u8>(r0_3 + 0x78u) = u8(1u);  // (from the original)
    *gptr<u32>(r0_3 + 0x7cu) = u32(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0011d480
GUEST_EXPORT(0x0011d480, d_0011d480::f_0011d480);

// f_0011d4dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d4dc {

struct __attribute__((packed)) Object_0011d4dc_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0011d4dc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0011d4dc_0, word_4, 0x4);  // (from the original)


void f_0011d4dc(gptr<Object_0011d4dc_0> arg0) {
    arg0->word_0 = u32(0x3000000u);  // (from the original)
    arg0->word_4 = u32(0u);
    guest::cpu()->r[1] = 0x3000000u;  // (from the original)
    return;
}

}  // namespace d_0011d4dc
GUEST_EXPORT(0x0011d4dc, d_0011d4dc::f_0011d4dc);

// f_0011d4ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d4ec {

struct __attribute__((packed)) Object_0011d4ec_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0011d4ec_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0011d4ec_0, word_4, 0x4);  // (from the original)


void f_0011d4ec(gptr<Object_0011d4ec_0> arg0) {
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(~0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0011d4ec
GUEST_EXPORT(0x0011d4ec, d_0011d4ec::f_0011d4ec);

// f_0011d4fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d4fc {

struct __attribute__((packed)) Object_0011d4fc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011d4fc_0, word_0, 0x0);  // (from the original)


u32 f_0011d4fc(gptr<Object_0011d4fc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1_1 = *gptr<u32>(arg0->word_0 + 0x14u);  // (from the original)
    return guest::call_address<u32>(r1_1, r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011d4fc
GUEST_EXPORT(0x0011d4fc, d_0011d4fc::f_0011d4fc);

// f_0011d538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d538 {

inline constexpr guest::Function<0x0011e3b4, u32(u32, u32, u32, u32)> call_0011e3b4;  // (from the original)
inline constexpr guest::Function<0x0011eafc, u32(u32, u32, u32, u32)> call_0011eafc;  // (from the original)
inline constexpr guest::Function<0x0011eb18, u32(u32, u32, u32, u32)> call_0011eb18;  // (from the original)
inline constexpr guest::Function<0x0011edd8, u32(u32, u32, u32, u32)> call_0011edd8;  // (from the original)
inline constexpr guest::Function<0x001242a0, u32(u32, u32, u32, u32)> call_001242a0;  // (from the original)
inline constexpr guest::Function<0x001242b4, u32(u32, u32, u32, u32)> call_001242b4;  // (from the original)
inline constexpr guest::Function<0x001242c8, u32(u32, u32, u32, u32)> call_001242c8;  // (from the original)
inline constexpr guest::Function<0x00124304, u32(u32, u32, u32, u32)> call_00124304;  // (from the original)
inline constexpr guest::Function<0x00124c88, u32(u32, u32, u32, u32)> call_00124c88;  // (from the original)
inline constexpr guest::Function<0x00127d1c, u32(u32, u32, u32, u32)> call_00127d1c;  // (from the original)
inline constexpr guest::Function<0x00128b54, u32(u32, u32, u32, u32)> call_00128b54;  // (from the original)
inline constexpr guest::Function<0x0014f794, u32(u32, u32, u32, u32)> call_0014f794;  // (from the original)
inline constexpr guest::Function<0x0014f79c, u32(u32, u32, u32, u32)> call_0014f79c;  // (from the original)

u32 f_0011d538(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00128b54(0x94e3bcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_001242b4(0x11d87cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_001242a0(0x11d870u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00124304(0x11d8a0u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_1 = call_0011e3b4(1u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_2 = call_00124c88(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r0_2 = call_001242c8(r0_2, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_3;
            return r0_2;
        }
    }
    r0_3 = call_0011eafc(r0_2, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_11d5c8;
    }
    r0 = call_0011eb18(r0_3, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 2u) {
        goto L_11d5c0;
    }
L_11d5ac:;
    r0 = call_0014f794(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_11d5ec;
    }
L_11d5c0:;
    call_0014f79c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_11d5c8:;
    if (u32(*gptr<u8>(0x94e3acu + 1u)) == 0) {  // (from the original)
        *gptr<u8>(0x94e3acu + 1u) = u8(1u);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return call_0011edd8(0xac1930u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
L_11d5ec:;
    r0 = call_00127d1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_11d5ac;
}

}  // namespace d_0011d538
GUEST_EXPORT(0x0011d538, d_0011d538::f_0011d538);

// f_0011d61c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d61c {

inline guest::global<u8, 0x0095721c> global_0095721c;  // (from the original)
inline constexpr guest::Function<0x0011dc88, u32(u32, u32, u32, u32)> call_0011dc88;  // (from the original)
inline constexpr guest::Function<0x0011fad0, u32(u32, u32, u32, u32)> call_0011fad0;  // (from the original)

u32 f_0011d61c(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0011fad0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0095721c = u8(r0_1);
    r0_2 = call_0011dc88(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    zf_1 = r0_2 == 1u;
    if (!zf_1) {
        zf_1 = r0_2 == 2u;
    }
    *gptr<u8>(0x95721cu + 1u) = u8(r0_2);  // (from the original)
    if (zf_1) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    zf_2 = r0_2 == 5u;
    if (!zf_2) {
        zf_2 = r0_2 == 9u;
    }
    if (zf_2) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    } else {
        *gptr<u8>(0x95721cu + 1u) = u8(1u);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0011d61c
GUEST_EXPORT(0x0011d61c, d_0011d61c::f_0011d61c);

// f_0011d65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d65c {

inline guest::global<u32, 0x00951670> global_00951670;  // (from the original)

u32 f_0011d65c() {
    *global_00951670 = u32(0u);
    guest::cpu()->r[1] = 0x951670u;  // (from the original)
    return 0u;
}

}  // namespace d_0011d65c
GUEST_EXPORT(0x0011d65c, d_0011d65c::f_0011d65c);

// f_0011d670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d670 {

inline guest::global<u32, 0x00952b8c> global_00952b8c;  // (from the original)
inline constexpr guest::Function<0x0011e8cc, u32(u32, u32, u32, u32)> call_0011e8cc;  // (from the original)
inline constexpr guest::Function<0x00121824, u32(u32, u32, u32, u32)> call_00121824;  // (from the original)
inline constexpr guest::Function<0x00121860, u32(u32, u32, u32, u32)> call_00121860;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)

u32 f_0011d670(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x11d788u);  // (from the original)
    r1_1 = r13 + 8u;
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f6e78(0x6af000u, r1_1, r0, 1u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fd108(0x20u, r0_1, 4u, r3_1);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(r0_2 + 4u) = u8(0u);
    *gptr<u32>(r0_2) = u32(0x90abc0u);  // (from the original)
    *gptr<u32>(r0_2 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2 + 8u) = u32(r0_1);
    guest::cpu()->r[13] = r13;
    r0_3 = call_00121860(0x20000u, 0x90abc0u, r2_1, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_00121824(0x20000u, r1_2, r2_2, r3_3);  // (from the original)
    r1_3 = r0_4 - r0_3;
    *gptr<u32>(r13 + 0xcu) = u32(0x11d7a0u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    r2_3 = r13 + 8u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r0_2 + 8u));
    guest::cpu()->r[13] = r13;
    r0_5 = call_0011e8cc(r0_3, r1_3, r2_3, 0x7800u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    *gptr<u32>(r0_2 + 0xcu) = u32(r0_5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00121860(0x30000u, r1_4, r2_4, r3_4);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_00121824(0x30000u, r1_5, r2_5, r3_5);  // (from the original)
    r1_6 = r0_7 - r0_6;
    *gptr<u32>(r13 + 0xcu) = u32(0x11d7acu);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    r2_6 = r13 + 8u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r0_2 + 8u));
    guest::cpu()->r[13] = r13;
    r0_8 = call_0011e8cc(r0_6, r1_6, r2_6, 0x7800u);  // (from the original)
    *gptr<u32>(r0_2 + 0x10u) = u32(r0_8);  // (from the original)
    *gptr<u32>(r0_2 + 0x14u) = u32(*gptr<u32>(r0_2 + 8u));  // (from the original)
    *gptr<u32>(r0_2 + 0x18u) = u32(*gptr<u32>(r0_2 + 0xcu));  // (from the original)
    *gptr<u32>(r0_2 + 0x1cu) = u32(r0_8);  // (from the original)
    *global_00952b8c = u32(r0_2);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = 0x952b8cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0011d670
GUEST_EXPORT(0x0011d670, d_0011d670::f_0011d670);

// f_0011d7bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d7bc {

inline guest::global<u16, 0x00952ad8> global_00952ad8;  // (from the original)
inline constexpr guest::Function<0x0011db9c, u32(u32, u32, u32, u32)> call_0011db9c;  // (from the original)
inline constexpr guest::Function<0x0011dc5c, u32(u32, u32, u32, u32)> call_0011dc5c;  // (from the original)
inline constexpr guest::Function<0x0011dedc, u32(u32, u32, u32, u32)> call_0011dedc;  // (from the original)

u32 f_0011d7bc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0011dedc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    call_0011dc5c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_2 = call_0011db9c(0x952ad8u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    res_1 = r0_2 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return res_1;
    }
    *global_00952ad8 = u16(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x952ad8u;  // (from the original)
    return 0u;
}

}  // namespace d_0011d7bc
GUEST_EXPORT(0x0011d7bc, d_0011d7bc::f_0011d7bc);

// f_0011d7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d7ec {

struct __attribute__((packed)) Object_0011d7ec_1 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0011d7ec_1, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_0011d7ec(u32 r0_unused, gptr<Object_0011d7ec_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0x944408u;  // (from the original)
    }
    if (u32(arg1->byte_0) == 0) {
        guest::cpu()->r[13] += 8u;
        return 0x944408u;  // (from the original)
    }
    r0_1 = call_002fa90c(0x944400u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0x944408u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_0011d7ec
GUEST_EXPORT(0x0011d7ec, d_0011d7ec::f_0011d7ec);

// f_0011da44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011da44 {

struct __attribute__((packed)) Object_0011da44_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0011da44_0, word_8, 0x8);  // (from the original)

inline guest::global<u8, 0x00974f60> global_00974f60;  // (from the original)
inline constexpr guest::Function<0x00128cc4, u32(u32, u32, u32, u32)> call_00128cc4;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)

u32 f_0011da44(gptr<Object_0011da44_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(*global_00974f60);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = arg0->word_8;
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    r0_3 = r1 + 0xfffu;  // (from the original)
    r2_1 = r0_3 >> 0xc;  // (from the original)
    r2_2 = r2_1 << 0xc;  // (from the original)
    r0_4 = call_00128cc4(0xae0f64u, r0, r2_2, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        call_0012f204(0xd8601837u, r1_1, r2_3, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    *gptr<u8>(r0 + 0x10u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0011da44
GUEST_EXPORT(0x0011da44, d_0011da44::f_0011da44);

// f_0011daac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011daac {

inline guest::global<u32, 0x0097dff8> global_0097dff8;  // (from the original)
inline constexpr guest::Function<0x0011f00c, u32(u32, u32, u32, u32)> call_0011f00c;  // (from the original)

u32 f_0011daac(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = *global_0097dff8;
    if (r0_1 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    *gptr<u32>(r13) = u32(0u);
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0011f00c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r0_4 = r0_3 & 0x80000000u;  // (from the original)
    if (r0_4 >> 0x1f == (r0_4 & (r0_4 ^ r0_4)) >> 0x1f) {  // (from the original)
        r0_4 = *gptr<u32>(r13);
        *global_0097dff8 = u32(r0_4);
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0011daac
GUEST_EXPORT(0x0011daac, d_0011daac::f_0011daac);

// f_0011db88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011db88 {


u32 f_0011db88() {
    u32 r0_1 = 0;
    r0_1 = guest::cpu()->tls;
    *gptr<u32>(0x974f64u + 4u) = u32(r0_1);  // (from the original)
    guest::cpu()->r[1] = 0x974f64u;  // (from the original)
    return r0_1;
}

}  // namespace d_0011db88
GUEST_EXPORT(0x0011db88, d_0011db88::f_0011db88);

// f_0011db9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011db9c {

inline guest::global<u32, 0x008fab74> global_008fab74;  // (from the original)
inline constexpr guest::Function<0x0011f220, u32(u32, u32, u32, u32)> call_0011f220;  // (from the original)
inline constexpr guest::Function<0x0011f31c, u32(u32, u32, u32, u32)> call_0011f31c;  // (from the original)
inline constexpr guest::Function<0x0011f6e8, u32(u32, u32, u32, u32)> call_0011f6e8;  // (from the original)
inline constexpr guest::Function<0x001239e8, u32(u32, u32, u32, u32)> call_001239e8;  // (from the original)

u32 f_0011db9c(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x40u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    r0_1 = *global_008fab74;
    r2_1 = r13;
    *gptr<u32>(r13) = u32(r0_1);
    r3_1 = *gptr<u32>(r0_1 - 0x30u);  // (from the original)
    *gptr<u32>(r13 + r3_1) = u32(*gptr<u32>(0x8fab74u + 0x20u));  // (from the original)
    r0_2 = *gptr<u32>(0x8fab74u + 0x24u);  // (from the original)
    r1_1 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0_2);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0011f6e8(r2_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0011f31c(r0_4, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_3 = r13 + 0x1cu;  // (from the original)
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_001239e8(r0_5, r1_3, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    *gptr<u16>(r0) = u16(u32(*gptr<u16>(r13 + 0x20u)));  // (from the original)
    if (r0_3 != 0) {
        r0_6 = r13;
        guest::cpu()->r[13] = r13;
        call_0011f220(r0_6, 0u, r2_4, r3_4);
        r1_4 = guest::cpu()->r[1];
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return 0x11464u;  // (from the original)
    }
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    call_0011f220(r0_7, 0u, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0011db9c
GUEST_EXPORT(0x0011db9c, d_0011db9c::f_0011db9c);

// f_0011dc5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011dc5c {

inline guest::global<u8, 0x00974f76> global_00974f76;  // (from the original)
inline constexpr guest::Function<0x0011f2e4, u32(u32, u32, u32, u32)> call_0011f2e4;  // (from the original)
inline constexpr guest::Function<0x00123ae8, u32(u32, u32, u32, u32)> call_00123ae8;  // (from the original)

u32 f_0011dc5c() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(*global_00974f76);
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    r0_2 = call_0011f2e4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00123ae8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_00974f76 = u8(1u);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0011dc5c
GUEST_EXPORT(0x0011dc5c, d_0011dc5c::f_0011dc5c);

// f_0011dedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011dedc {

inline guest::global<u32, 0x008a275c> global_008a275c;  // (from the original)
inline guest::global<u32, 0x0097e004> global_0097e004;  // (from the original)
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> call_00129da0;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_0011dedc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = *global_008a275c;
    if (*global_0097e004 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = call_002fa9d0(r4_1, r1, r2, r3);
    r0_2 = call_00129da0(0x97e004u, r4_1, r0_1, 0u);  // (from the original)
    res_1 = r0_2 >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = res_1;
    return 0u;
}

}  // namespace d_0011dedc
GUEST_EXPORT(0x0011dedc, d_0011dedc::f_0011dedc);

// f_0011df2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011df2c {

inline constexpr guest::Function<0x0011fca0, u32(u32, u32, u32, u32)> call_0011fca0;  // (from the original)
inline constexpr guest::Function<0x00128e80, u32(u32, u32, u32, u32)> call_00128e80;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)

u32 f_0011df2c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r3_1 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r3_2 = 0;
    u32 ea_7 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_3 = 0;
    u32 res_2 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    r0_1 = r13;
    *gptr<u32>(r13) = u32(0u);
    r5_1 = 0xaed620u + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0011fca0(r0_1, r1, r2, r3);
    r1_1 = r0_2 & 0x80000000u;  // (from the original)
    if (r1_1 >> 0x1f == (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        r1_1 = *gptr<u32>(r13);
        *gptr<u32>(r5_1) = u32(r1_1);
    }
    res_1 = r0_2 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        r0_3 = 0xaed620u + 0x10u;  // (from the original)
        ea_1 = r13 + 0x20u;  // (from the original)
        *gptr<u32>(ea_1) = u32(4u);
        ea_2 = r13 + 0x24u;  // (from the original)
        *gptr<u32>(ea_2) = u32(0x122600u);  // (from the original)
        r3_1 = 0xaed620u + 0x228u;  // (from the original)
        ea_3 = r13 + 0x1cu;  // (from the original)
        *gptr<u32>(ea_3) = u32(0x11fba4u);  // (from the original)
        ea_4 = r13 + 0x28u;  // (from the original)
        *gptr<u32>(ea_4) = u32(0x12261cu);  // (from the original)
        ea_5 = r13 + 0x2cu;  // (from the original)
        *gptr<u32>(ea_5) = u32(0x122610u);  // (from the original)
        ea_6 = r13;
        *gptr<u32>(ea_6) = u32(r3_1);
        *gptr<u32>(ea_6 + 4) = u32(0x5109d500u);  // (from the original)
        r3_2 = r13 + 0x1cu;  // (from the original)
        ea_7 = r13 + 8u;
        *gptr<u32>(ea_7) = u32(~1u);
        *gptr<u32>(ea_7 + 4) = u32(0u);
        r1_2 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_00128e80(r0_3, r1_2, 0x11f2e0u, r3_2);  // (from the original)
        r2_1 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        res_2 = r0_4 >> 0x1f;  // (from the original)
        r1_1 = res_2;
        if (res_2 != 0) {
            guest::cpu()->r[13] = r13;
            call_0012f204(r0_4, r1_1, r2_1, r3_3);
            r1_1 = guest::cpu()->r[1];
        }
    }
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0011df2c
GUEST_EXPORT(0x0011df2c, d_0011df2c::f_0011df2c);

// f_0011dff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011dff4 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_0011dff4(u32 r0, u32 r1, u32 r2) {
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = 0xaed620u + 0x1cu;  // (from the original)
    call_00135748(r5, r1, r2, guest::cpu()->r[3]);
    r2 = 0xaed620u + 0x18u;  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(r1);  // (from the original)
    r0_1 = *gptr<u32>(r2);
    if (r0 == 0) {
        r1 = 0u;
    } else {
        r1 = r0 + 4u;
    }
    if (r0_1 == 0) {
        goto L_11e05c;
    }
    *gptr<u32>(r1 + 4u) = u32(r0_1);
    *gptr<u32>(*gptr<u32>(r0_1) + 4u) = u32(r1);
    r2 = *gptr<u32>(r0_1);
    *gptr<u32>(r1) = u32(r2);
    *gptr<u32>(r0_1) = u32(r1);
L_11e048:;
    call_001357ec(r5, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
L_11e05c:;
    zf_1 = r0 == 0;
    if (zf_1) {
        r0_2 = 0u;
    } else {
        r0_2 = r0 + 4u;
    }
    *gptr<u32>(r0 + 8u) = u32(r0_2);
    *gptr<u32>(r0 + 4u) = u32(r0_2);
    if (zf_1) {
        r0_3 = 0u;
    } else {
        r0_3 = r0 + 4u;
    }
    *gptr<u32>(r2) = u32(r0_3);
    guest::preempt();
    goto L_11e048;
}

}  // namespace d_0011dff4
GUEST_EXPORT(0x0011dff4, d_0011dff4::f_0011dff4);

// f_0011e180: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e180 {

inline constexpr guest::Function<0x00120158, u32(u32, u32, u32, u32)> call_00120158;  // (from the original)
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> call_0012a518;  // (from the original)
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> call_0012ab78;  // (from the original)

u32 f_0011e180(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_0012a518(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = call_00120158(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0012ab78(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_0011e180
GUEST_EXPORT(0x0011e180, d_0011e180::f_0011e180);

// f_0011e340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e340 {

inline constexpr guest::Function<0x00120198, u32(u32, u32, u32, u32)> call_00120198;  // (from the original)
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> call_0012a518;  // (from the original)
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> call_0012ab78;  // (from the original)

u32 f_0011e340(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_0012a518(1u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = call_00120198(1u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    call_0012ab78(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_0011e340
GUEST_EXPORT(0x0011e340, d_0011e340::f_0011e340);

// f_0011e3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e3b4 {

inline guest::global<u32, 0x00974ac8> global_00974ac8;  // (from the original)
inline constexpr guest::Function<0x0011fcf0, u32(u32, u32, u32, u32)> call_0011fcf0;  // (from the original)
inline constexpr guest::Function<0x0011fd10, u32(u32, u32, u32, u32)> call_0011fd10;  // (from the original)
inline constexpr guest::Function<0x0011fea4, u32(u32, u32, u32, u32)> call_0011fea4;  // (from the original)
inline constexpr guest::Function<0x0011feb4, u32(u32, u32, u32, u32)> call_0011feb4;  // (from the original)
inline constexpr guest::Function<0x0011fec8, u32(u32, u32, u32, u32)> call_0011fec8;  // (from the original)
inline constexpr guest::Function<0x0011fed4, u32(u32, u32, u32, u32)> call_0011fed4;  // (from the original)
inline constexpr guest::Function<0x0012009c, u32(u32, u32, u32, u32)> call_0012009c;  // (from the original)
inline constexpr guest::Function<0x001201d0, u32(u32, u32, u32, u32)> call_001201d0;  // (from the original)
inline constexpr guest::Function<0x00124284, u32(u32, u32, u32, u32)> call_00124284;  // (from the original)
inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32, u32)> call_001292e8;  // (from the original)
inline constexpr guest::Function<0x0012a17c, u32(u32, u32, u32, u32)> call_0012a17c;  // (from the original)
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> call_0012a518;  // (from the original)
inline constexpr guest::Function<0x0012a5a0, u32(u32, u32, u32, u32)> call_0012a5a0;  // (from the original)
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> call_0012ab78;  // (from the original)

u32 f_0011e3b4(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 res_1 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r2_8 = 0;
    u32 r12_1 = 0;
    u32 ea_1 = 0;
    u32 r3_8 = 0;
    u32 ea_2 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_14 = 0;
    u32 r1_12 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0011fcf0(0u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_0012a518(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_0011fd10(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_001201d0(r0_2, r1_2, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r1_3 = 0x11e3dcu;  // (from the original)
    res_1 = r0_3 >> 0x1f;  // (from the original)
    r2_3 = res_1;
    if (res_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_001292e8(r0_3, r1_3, r2_3, r3_3);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_0012ab78(r0_3, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00124284(r0_4, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_0011fd10(r0_5, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if ((r0_6 & 0x20u) != 0) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_0012a17c(0x62u, r1_6, r2_6, r3_6);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_0011fec8(r0_7, r1_7, r2_7, r3_7);
    r2_8 = *global_00974ac8;
    r12_1 = *gptr<u32>(0x974ac8u + 4);  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(0u);
    r3_8 = r13 + 0x10u;  // (from the original)
    ea_2 = r13 + 8u;
    *gptr<u32>(ea_2) = u32(r2_8);
    *gptr<u32>(ea_2 + 4) = u32(r12_1);
    r0_9 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_0012a5a0(r0_9, r0_8, 0x1000u, r3_8);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_11 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    call_0012009c(r0_11, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_12 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0011fea4(r0_12, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0011feb4(r0_13, r1_10, r2_11, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_14 = call_0011fed4(r0_10, r1_11, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_0011e3b4
GUEST_EXPORT(0x0011e3b4, d_0011e3b4::f_0011e3b4);

// f_0011e484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e484 {

inline constexpr guest::Function<0x0012051c, u32(u32, u32, u32, u32)> call_0012051c;  // (from the original)
inline constexpr guest::Function<0x00123678, u32(u32, u32, u32, u32)> call_00123678;  // (from the original)

u32 f_0011e484(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0012051c(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x903f04u);  // (from the original)
    r0_2 = r0_1 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00123678(r0_2, 0x903f04u, r2_1, r3_1);  // (from the original)
    r0_4 = r0_3 - 0x34u;  // (from the original)
    ea_1 = r0_4 + 0xb4u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_4 + 0xc0u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0x140u);  // (from the original)
    ea_3 = r0_4 + 0xb8u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(ea_3 + 4) = u32(0xf0u);  // (from the original)
    ea_4 = r0_4 + 0xc4u;  // (from the original)
    *gptr<u8>(ea_4) = u8(1u);
    ea_5 = r0_4 + 0xc8u;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r0_4 + 0xd4u;  // (from the original)
    *gptr<u32>(ea_6) = u32(0x140u);  // (from the original)
    *gptr<u32>(ea_6 + 4) = u32(0x100u);  // (from the original)
    r1_1 = r0_4 + 0xccu;  // (from the original)
    *gptr<u32>(r0_4 + 0xdcu) = u32(0x140u);  // (from the original)
    *gptr<u32>(r1_1) = u32(0u);
    *gptr<u32>(r1_1 + 4) = u32(0xf0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0011e484
GUEST_EXPORT(0x0011e484, d_0011e484::f_0011e484);

// f_0011e5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e5d8 {

inline constexpr guest::Function<0x00121140, u32(u32, u32, u32, u32)> call_00121140;  // (from the original)
inline constexpr guest::Function<0x0012140c, u32(u32, u32, u32, u32)> call_0012140c;  // (from the original)
inline constexpr guest::Function<0x001215b8, u32(u32, u32, u32, u32)> call_001215b8;  // (from the original)

u32 f_0011e5d8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001215b8(1u, r1_1, guest::cpu()->r[2], r3);
    r1_2 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    r0_1 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    call_00121140(r0_1, r1_2, guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0012140c(r0, r1, guest::cpu()->r[2], r3_2);
    r1_3 = guest::cpu()->r[1];
    r0_2 = *gptr<u32>(r13);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0011e5d8
GUEST_EXPORT(0x0011e5d8, d_0011e5d8::f_0011e5d8);

// f_0011e6f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e6f4 {

inline constexpr guest::Function<0x00121110, u32(u32, u32, u32, u32)> call_00121110;  // (from the original)
inline constexpr guest::Function<0x00121304, u32(u32, u32, u32, u32)> call_00121304;  // (from the original)
inline constexpr guest::Function<0x001214f4, u32(u32, u32, u32, u32)> call_001214f4;  // (from the original)
inline constexpr guest::Function<0x001216ec, u32(u32, u32, u32, u32)> call_001216ec;  // (from the original)

u32 f_0011e6f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r5 = r1;
    r6 = r0;
    ea_1 = r13 + 0x20u;  // (from the original)
    r7 = *gptr<u32>(ea_1);
    r8 = *gptr<u32>(ea_1 + 4);
    r9 = *gptr<u32>(ea_1 + 8);
    r10 = r3;
    guest::cpu()->r[13] = r13;
    call_001216ec(r5, r0, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00121110(r2, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    if (r5 < 0u || r5 == 0) {
        goto L_11e758;
    }
    do {
L_11e730:;
        r0_1 = *gptr<u32>(r6 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        call_00121304(r0_1, r1, r2, r3);
        guest::cpu()->r[13] = r13;
        call_001214f4(r10, r7, r8, r9);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r5 > r4);
L_11e758:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r5;
}

}  // namespace d_0011e6f4
GUEST_EXPORT(0x0011e6f4, d_0011e6f4::f_0011e6f4);

// f_0011e760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e760 {

inline guest::global<u32, 0x009752ec> global_009752ec;  // (from the original)
inline constexpr guest::Function<0x001218b0, u32(u32, u32, u32, u32)> call_001218b0;  // (from the original)

u32 f_0011e760(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    *global_009752ec = u32(r0);
    r0_1 = call_001218b0(0x12049cu, 0x120464u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0011e760
GUEST_EXPORT(0x0011e760, d_0011e760::f_0011e760);

// f_0011e790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e790 {

struct __attribute__((packed)) Object_0011e790_0 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0011e790_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0011e790_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0011e790_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0011e790_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0011e790_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0011e790_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0011e790_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x00121824, u32(u32, u32, u32, u32)> call_00121824;  // (from the original)
inline constexpr guest::Function<0x00121860, u32(u32, u32, u32, u32)> call_00121860;  // (from the original)

u32 f_0011e790(gptr<Object_0011e790_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_4 = u8(0u);
    arg0->word_c = u32(0u);
    arg0->word_8 = u32(r1);
    arg0->word_0 = u32(0x9055b4u);  // (from the original)
    arg0->word_10 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    r0_1 = call_00121860(0x20000u, r1, 0x9055b4u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    *gptr<u32>(r0 + 0xcu) = u32(r0_1);  // (from the original)
    r0_2 = call_00121860(0x30000u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    *gptr<u32>(r0 + 0x10u) = u32(r0_2);  // (from the original)
    r0_3 = call_00121824(0x20000u, r1_2, r2_2, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    *gptr<u32>(r0 + 0x14u) = u32(r0_3);  // (from the original)
    r0_4 = call_00121824(0x30000u, r1_3, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0x18u) = u32(r0_4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0011e790
GUEST_EXPORT(0x0011e790, d_0011e790::f_0011e790);

// f_0011e81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e81c {

inline constexpr guest::Function<0x00122554, u32(u32, u32, u32, u32)> call_00122554;  // (from the original)

u32 f_0011e81c(u32 r0_unused, u32 r1) {
    if (r1 == 0) {
        return call_00122554(0x700u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    return call_00122554(0x702u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0011e81c
GUEST_EXPORT(0x0011e81c, d_0011e81c::f_0011e81c);

// f_0011e838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e838 {

inline constexpr guest::Function<0x001204d4, u32(u32, u32, u32, u32)> call_001204d4;  // (from the original)

u32 f_0011e838(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001204d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x905858u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x905858u;  // (from the original)
    return r0_1;
}

}  // namespace d_0011e838
GUEST_EXPORT(0x0011e838, d_0011e838::f_0011e838);

// f_0011ea30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011ea30 {

inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)

u32 f_0011ea30(u32 r0_unused, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r2);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    r1_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e78(guest::cpu()->r[0], r1_1, r1, 1u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0011ea30
GUEST_EXPORT(0x0011ea30, d_0011ea30::f_0011ea30);

// f_0011eaac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011eaac {

inline guest::global<u32, 0x0095bf7c> global_0095bf7c;  // (from the original)
inline constexpr guest::Function<0x0011ea30, u32(u32, u32, u32, u32)> call_0011ea30;  // (from the original)
inline constexpr guest::Function<0x00120840, u32(u32, u32, u32, u32)> call_00120840;  // (from the original)
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)

u32 f_0011eaac(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0011ea30(r0, r1, 0x11eae8u, 0x80u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_002fd108(8u, r0_1, 4u, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = call_00120840(r0_2, r1_1, r2_1, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *global_0095bf7c = u32(r0_3);
    guest::cpu()->r[13] += 8u;
    return call_0012ca6c(r0_3, r0_1, r2_2, r3_3);
}

}  // namespace d_0011eaac
GUEST_EXPORT(0x0011eaac, d_0011eaac::f_0011eaac);

// f_0011eafc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011eafc {

inline guest::global<u8, 0x0094e3a8> global_0094e3a8;  // (from the original)

u32 f_0011eafc() {
    u32 r0_1 = 0;
    if (u32(*global_0094e3a8) >= 2u) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0011eafc
GUEST_EXPORT(0x0011eafc, d_0011eafc::f_0011eafc);

// f_0011eea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011eea8 {

inline constexpr guest::Function<0x00121030, u32(u32, u32, u32, u32)> call_00121030;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_0011eea8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *gptr<u32>(0x94e4b4u + 4u);  // (from the original)
    if (r0_1 == 0) {
        r0_2 = call_00131280(0xa18u, r0, 4u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        res_1 = r0_2 + 0x24u;  // (from the original)
        r0_3 = res_1;
        if (res_1 != 0) {
            r0_3 = call_001320cc(r0_3, r0, 3u, guest::cpu()->r[3]);
            r2_1 = guest::cpu()->r[2];
            r1 = 0x90b0e8u;  // (from the original)
            *gptr<u32>(r0_3) = u32(r1);
        }
        *gptr<u32>(0x94e4b4u + 8u) = u32(r0_3);  // (from the original)
        if (r0_2 == 0) {
            r0_1 = 0u;
        } else {
            r0_1 = call_00121030(r0_2, r1, r2_1, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        *gptr<u32>(0x94e4b4u + 4u) = u32(r0_1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0011eea8
GUEST_EXPORT(0x0011eea8, d_0011eea8::f_0011eea8);

// f_0011ef40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011ef40 {

inline guest::global<u32, 0x00adf95c> global_00adf95c;  // (from the original)

u32 f_0011ef40(u32 r0) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    r1_1 = *global_00adf95c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    if (r0 + 1u == 0) {
        *gptr<u8>(r1_1 + 0x3cu) = u8(1u);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r1_2 = *gptr<u32>(r1_1 + 0x18u);  // (from the original)
    r0_1 = ~0x1au + ((r0 << 3) - r0 << 2);  // (from the original)
    *gptr<u8>(r1_2 + r0_1) = u8(1u);
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_0011ef40
GUEST_EXPORT(0x0011ef40, d_0011ef40::f_0011ef40);

// f_0011ef7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011ef7c {

inline guest::global<u32, 0x00adf95c> global_00adf95c;  // (from the original)

void f_0011ef7c(u32 r0) {
    u32 r1_1 = 0;
    r1_1 = *global_00adf95c;
    if (r1_1 != 0) {
        *gptr<u32>(r1_1 + 0x38u) = u32(r0);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0011ef7c
GUEST_EXPORT(0x0011ef7c, d_0011ef7c::f_0011ef7c);

// f_0011ef94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011ef94 {

struct __attribute__((packed)) Object_0011ef94_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
};
GUEST_OFFSET(Object_0011ef94_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0011ef94_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0011ef94_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0011ef94_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0011ef94_0, byte_10, 0x10);  // (from the original)

inline guest::global<u8, 0x00974f60> global_00974f60;  // (from the original)
inline constexpr guest::Function<0x00128cc4, u32(u32, u32, u32, u32)> call_00128cc4;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)

u32 f_0011ef94(gptr<Object_0011ef94_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->byte_10 = u8(0u);
    r0_1 = u32(*global_00974f60);
    if (r0_1 != 0) {
        r0_2 = r1 + 0xfffu;  // (from the original)
        r2_1 = r0_2 >> 0xc;  // (from the original)
        r2_2 = r2_1 << 0xc;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_1 = call_00128cc4(0xae0f64u, r0, r2_2, 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            guest::cpu()->r[13] = r13;
            r0_1 = call_0012f204(0xd8601837u, r1, r2_3, r3_1);  // (from the original)
            r1 = guest::cpu()->r[1];
        }
        *gptr<u8>(r0 + 0x10u) = u8(0u);  // (from the original)
    }
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0011ef94
GUEST_EXPORT(0x0011ef94, d_0011ef94::f_0011ef94);

// f_0011f054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011f054 {

struct __attribute__((packed)) Object_0011f054_0 {
    u8 unknown_0[0x650];  // (not used here)
    u32 word_650;
};
GUEST_OFFSET(Object_0011f054_0, word_650, 0x650);  // (from the original)

inline constexpr guest::Function<0x00124f94, u32(u32, u32, u32, u32)> call_00124f94;  // (from the original)
inline constexpr guest::Function<0x00125110, u32(u32, u32, u32, u32)> call_00125110;  // (from the original)
inline constexpr guest::Function<0x001251b0, u32(u32, u32, u32, u32)> call_001251b0;  // (from the original)
inline constexpr guest::Function<0x00127cf8, u32(u32, u32, u32, u32)> call_00127cf8;  // (from the original)
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)

u32 f_0011f054(gptr<Object_0011f054_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r2_3 = 0;
    u32 res_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r3_2 = 0;
    u32 res_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r6 = 0u;
    ea_1 = r0 + 0x650u;  // (from the original)
    arg0->word_650 = u32(r6);
    guest::cpu()->r[13] = r13;
    call_0012f154(ea_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x65cu) = u32(r6);  // (from the original)
    r5_1 = r4 + 0x65cu;  // (from the original)
    r0_1 = r13;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00127cf8(r0_1, 1u, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res_1 = r0_2 >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r2_2 = *gptr<u32>(r13);
        r0_2 = 0u;
        *gptr<u32>(r5_1) = u32(r2_2);
    }
    res_2 = r0_2 >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        guest::cpu()->r[13] = r13;
        call_0012f204(r0_2, res_2, r2_2, r3);
        r3 = guest::cpu()->r[3];
    }
    r0 = 0u;
    *gptr<u32>(r5_1 + 4u) = u32(r0);
    *gptr<u8>(r5_1 + 8u) = u8(r6);
    r1 = 0x64u;  // (from the original)
    *gptr<u32>(r5_1 + 0xcu) = u32(r6);  // (from the original)
    do {
L_11f0b4:;
        r2_3 = r4 + (r0 << 4);
        *gptr<u32>(r2_3 + 0x10u) = u32(r6);  // (from the original)
        *gptr<u32>(r2_3 + 0x18u) = u32(0u);  // (from the original)
        res_3 = r1 - 1u;
        r1 = res_3;
        r0 = r0 + 1u;
        *gptr<u32>(r2_3 + 0x1cu) = u32(0u);  // (from the original)
        guest::preempt();
    } while (res_3 != 0);
    r0_3 = u32(*gptr<u8>(r4 + 0x664u));  // (from the original)
    if (r0_3 == 0) {
        guest::cpu()->r[13] = r13;
        r0_4 = call_00124f94(r0_3, r1, r2_3, r3);
        r1_1 = guest::cpu()->r[1];
        r3_2 = guest::cpu()->r[3];
        res_4 = r0_4 & 0x80000000u;  // (from the original)
        *gptr<u32>(r4 + 0x660u) = u32(r0_4);  // (from the original)
        if (res_4 >> 0x1f) {  // (from the original)
            goto L_11f11c;
        }
        *gptr<u8>(r4 + 0x664u) = u8(1u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001251b0(0x80u, 1u, res_4, r3_2);  // (from the original)
    }
    r1_2 = r4 + 0x668u;  // (from the original)
    r0_5 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00125110(r0_5, r1_2, 0u, 0x64u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x660u) = u32(r0_6);  // (from the original)
L_11f11c:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0011f054
GUEST_EXPORT(0x0011f054, d_0011f054::f_0011f054);

// f_0011f220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011f220 {

struct __attribute__((packed)) Object_0011f220_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0011f220_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0012ede8, u32(u32, u32, u32, u32)> call_0012ede8;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)

u32 f_0011f220(gptr<Object_0011f220_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0 + 8u;
    r0_1 = arg0->word_8;
    res_1 = r0_1 & ~1u;
    r1_1 = res_1;
    if (res_1 != 0) {
        if ((r0_1 & 1u) != 0) {
            call_00134250(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        r0_2 = *gptr<u32>(r4_1) & ~1u;
        call_0012ede8(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        *gptr<u32>(r4_1) = u32(0u);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0011f220
GUEST_EXPORT(0x0011f220, d_0011f220::f_0011f220);

// f_0011f25c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011f25c {

struct __attribute__((packed)) Object_0011f25c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011f25c_0, word_0, 0x0);  // (from the original)


void f_0011f25c(gptr<Object_0011f25c_0> arg0) {
    u32 r1 = 0;
    r1 = 1u;
    do {
L_11f260:;
        arg0->word_0 = u32(r1);
        guest::preempt();
    } while (u32(0) != 0);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0011f25c
GUEST_EXPORT(0x0011f25c, d_0011f25c::f_0011f25c);

// f_0011f274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011f274 {

struct __attribute__((packed)) Object_0011f274_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0011f274_0, word_0, 0x0);  // (from the original)


void f_0011f274(gptr<Object_0011f274_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    do {
L_11f27c:;
        arg0->word_0 = u32(r1);
        guest::preempt();
    } while (u32(0) != 0);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0011f274
GUEST_EXPORT(0x0011f274, d_0011f274::f_0011f274);

// f_0011f2e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011f2e4 {

inline guest::global<u32, 0x0097dffc> global_0097dffc;  // (from the original)
inline constexpr guest::Function<0x00123590, u32(u32, u32, u32, u32)> call_00123590;  // (from the original)
inline constexpr guest::Function<0x00129270, u32(u32, u32, u32, u32)> call_00129270;  // (from the original)

u32 f_0011f2e4(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_0097dffc;
    r0_2 = call_00123590(r0_1, 0xf000000bu, r2, guest::cpu()->r[3]);  // (from the original)
    res_1 = r0_2 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return r0_2;
    }
    res_2 = r0_2 >> 0x1f;  // (from the original)
    if (res_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0x11f308u;  // (from the original)
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    return call_00129270(r0_2, 0x11f308u, res_2, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0011f2e4
GUEST_EXPORT(0x0011f2e4, d_0011f2e4::f_0011f2e4);

// f_0011f880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011f880 {

inline guest::global<u32, 0x008a27ac> global_008a27ac;  // (from the original)
inline guest::global<u32, 0x00974f7c> global_00974f7c;  // (from the original)
inline constexpr guest::Function<0x00123ca8, u32(u32, u32, u32, u32)> call_00123ca8;  // (from the original)
inline constexpr guest::Function<0x00129040, u32(u32, u32, u32, u32)> call_00129040;  // (from the original)

u32 f_0011f880(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_008a27ac;
    r0_2 = call_00123ca8(r0_1, r0, r1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_3 = r0_2 & 0x80000000u;  // (from the original)
    if (r0_3 >> 0x1f != (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    *global_00974f7c = u32(r0);
    if (*gptr<u32>(r0 + 0x14u) != 0) {  // (from the original)
        call_00129040(1u, r1_1, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0011f880
GUEST_EXPORT(0x0011f880, d_0011f880::f_0011f880);

// f_0011f8d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011f8d4 {

inline guest::global<u32, 0x0097d81c> global_0097d81c;  // (from the original)
inline constexpr guest::Function<0x001290f0, u32(u32, u32, u32, u32)> call_001290f0;  // (from the original)
inline constexpr guest::Function<0x00129c7c, u32(u32, u32, u32, u32)> call_00129c7c;  // (from the original)
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> call_00129da0;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_0011f8d4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r8_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_001290f0(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4 = r0_1;
    call_00135748(r0_1, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x97d810u;  // (from the original)
    if (*gptr<u32>(r5 + 8u) != 0) {
        goto L_11f97c;
    }
    r8_1 = *gptr<u32>(0x8b233cu + 4u);  // (from the original)
    r0_2 = call_00129c7c(0x8b233cu, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res_1 = r0_2 >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        call_00134250(res_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r6 = 0xd92103fbu;  // (from the original)
    if (*global_0097d81c == 0) {
        goto L_11f950;
    } else {
        r0 = 0xd8a103f9u;  // (from the original)
    }
L_11f920:;
    r0_3 = r0 & 0x80000000u;  // (from the original)
    if (r0_3 >> 0x1f == (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        *gptr<u8>(r5) = u8(1u);
        goto L_11f97c;
    }
    if (r0 != r6) {
        goto L_11f97c;
    }
    call_001357ec(r4, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0;
L_11f950:;
    r0_4 = call_002fa9d0(r8_1, r1, r2, r3);
    r0 = call_00129da0(0x97d81cu, r8_1, r0_4, 0u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 & 0x80000000u;  // (from the original)
    if (r1 >> 0x1f != 0u) {  // (from the original)
        r0 = r6;
    }
    guest::preempt();
    goto L_11f920;
L_11f97c:;
    *gptr<u32>(r5 + 8u) = u32(*gptr<u32>(r5 + 8u) + 1u);
    call_001357ec(r4, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_0011f8d4
GUEST_EXPORT(0x0011f8d4, d_0011f8d4::f_0011f8d4);

// f_0011fa68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fa68 {

inline constexpr guest::Function<0x0011f8d4, u32(u32, u32, u32, u32)> call_0011f8d4;  // (from the original)
inline constexpr guest::Function<0x00123e40, u32(u32, u32, u32, u32)> call_00123e40;  // (from the original)
inline constexpr guest::Function<0x00123ee8, u32(u32, u32, u32, u32)> call_00123ee8;  // (from the original)

u32 f_0011fa68(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 nf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0011f8d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = r0_1 & 0x80000000u;  // (from the original)
    if (r1_1 >> 0x1f == (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        *gptr<u8>(r0) = u8(0u);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = call_00123e40(0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    res_1 = r0_2 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        *gptr<u8>(r0) = u8(1u);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    r0_3 = call_00123ee8(res_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_4 = r0_3 & 0x80000000u;  // (from the original)
    nf_1 = r0_4 >> 0x1f;  // (from the original)
    if (nf_1 == 0u) {
        r0_4 = 2u;
        *gptr<u8>(r0) = u8(r0_4);
    }
    if (nf_1 != 0u) {
        r0_4 = 0xd90103eau;  // (from the original)
    }
    if (nf_1 == 0u) {
        r0_4 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_0011fa68
GUEST_EXPORT(0x0011fa68, d_0011fa68::f_0011fa68);

// f_0011fad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fad4 {

inline constexpr guest::Function<0x00123fe4, u32(u32, u32, u32, u32)> call_00123fe4;  // (from the original)

u32 f_0011fad4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u8>(r13) = u8(0u);
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00123fe4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r0_2 = u32(*gptr<u8>(r13));
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0011fad4
GUEST_EXPORT(0x0011fad4, d_0011fad4::f_0011fad4);

// f_0011faf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011faf0 {

inline constexpr guest::Function<0x00124068, u32(u32, u32, u32, u32)> call_00124068;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)

u32 f_0011faf0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r3_1 = uxth(r3);
    r0_1 = r0 + 0x18u;  // (from the original)
    r0_2 = call_00124068(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        call_00134250(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], r3_2);
    }
    *gptr<u32>(r0 + 0x54u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_0011faf0
GUEST_EXPORT(0x0011faf0, d_0011faf0::f_0011faf0);

// f_0011fb18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fb18 {

inline guest::global<u32, 0x00974f38> global_00974f38;  // (from the original)
inline constexpr guest::Function<0x00129c7c, u32(u32, u32, u32, u32)> call_00129c7c;  // (from the original)
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> call_00129da0;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_0011fb18(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_00135748(0xae0f38u, r1, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = *global_00974f38;
    if (r0_1 != 0) {
        goto L_11fb74;
    }
    call_00129c7c(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = call_002fa9d0(0x8a24c0u, r1_2, r2_2, r3_2);  // (from the original)
    r0_3 = call_00129da0(0x97d8c8u, 0x8a24c0u, r0_2, 0u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    res_1 = r0_3 >> 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 == 0) {
        goto L_11fb74;
    }
    call_001357ec(0xae0f38u, r1_1, r2_1, r3_1);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_3;
L_11fb74:;
    *global_00974f38 = u32(*global_00974f38 + 1u);
    call_001357ec(0xae0f38u, r1_1, r2_1, r3_1);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_0011fb18
GUEST_EXPORT(0x0011fb18, d_0011fb18::f_0011fb18);

// f_0011fcf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fcf0 {

inline guest::global<u8, 0x00974b00> global_00974b00;  // (from the original)
inline constexpr guest::Function<0x00124c4c, u32(u32, u32, u32, u32)> call_00124c4c;  // (from the original)

u32 f_0011fcf0(u32 r0) {
    u32 zf_1 = 0;
    zf_1 = r0 == 0;
    *global_00974b00 = u8(1u);
    if (zf_1) {
        guest::cpu()->r[1] = 1u;
        return 0x974b00u;  // (from the original)
    }
    return call_00124c4c(0x974b00u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0011fcf0
GUEST_EXPORT(0x0011fcf0, d_0011fcf0::f_0011fcf0);

// f_0011fd20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fd20 {

inline guest::global<u32, 0x00974af0> global_00974af0;  // (from the original)

u32 f_0011fd20() {
    u32 r0_1 = 0;
    if ((*global_00974af0 & 7u) == 6u) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0011fd20
GUEST_EXPORT(0x0011fd20, d_0011fd20::f_0011fd20);

// f_0011fd60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fd60 {

inline constexpr guest::Function<0x0012a1e4, u32(u32, u32, u32, u32)> call_0012a1e4;  // (from the original)
inline constexpr guest::Function<0x0012ae20, u32(u32, u32, u32, u32)> call_0012ae20;  // (from the original)

u32 f_0011fd60(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 == 0) {
        r0_1 = 3u;
        goto L_11fd90;
    }
    if (r0 == 1u) {
        r0_1 = 2u;
        goto L_11fd90;
    }
    if (r0 != 2u) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_0012a1e4(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
L_11fd90:;
    call_0012a1e4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return call_0012ae20(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011fd60
GUEST_EXPORT(0x0011fd60, d_0011fd60::f_0011fd60);

// f_0011fda4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fda4 {

inline constexpr guest::Function<0x00124c20, u32(u32, u32, u32, u32)> call_00124c20;  // (from the original)

u32 f_0011fda4() {
    guest::cpu()->r[13] -= 8u;
    call_00124c20(0x124318u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(0x974b00u + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x4cu) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x50u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x54u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x58u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x5cu) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x20u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x60u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x64u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x28u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x68u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x6cu) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x70u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x34u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x74u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x38u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x78u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x3cu) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x7cu) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x48u) = u32(0u);  // (from the original)
    *gptr<u32>(0x974b00u + 0x88u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return 0x974b00u;  // (from the original)
}

}  // namespace d_0011fda4
GUEST_EXPORT(0x0011fda4, d_0011fda4::f_0011fda4);
