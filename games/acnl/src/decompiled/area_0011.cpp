// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00110cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00110cdc {


u32 f_00110cdc() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x95c218u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r1 + 1u) = u8(r0);
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 res = 0;
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r6 = r0;
    r0 = 2u;
    r13 = r13 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fdf10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1110fc;
    }
    r0 = 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fdf10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1110fc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00308d44(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4u);
    r0 = *gptr<u32>(r0 + 8u);
    *gptr<u32>(r13 + 0x14u) = u32(r1);  // (from the original)
    r1 = 1u;
    *gptr<u32>(r13 + 0x1cu) = u32(r0);  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r2);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00308d48(r0, r1, r2, r3);
    r1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x18u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1);
    r0 = *gptr<u32>(r4);
    r1 = *gptr<u32>(r4 + 4);
    r2 = *gptr<u32>(r4 + 8);
    r4 = r4 + 0xc;  // (from the original)
    r3 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb4a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1110fc;
    }
    r0 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030feb4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030ff24(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r7 = 1u;
L_1110ae:;
    r0 = *gptr<u32>(r13 + 8u);
    cf = r0 >= r4;
    if (!cf || u32(r0 == r4)) {
        goto L_1110ea;
    }
    sco = cf;
    res = lsl_rc(r7, r4 & 0xff, &sco);  // (from the original)
    r5 = res;
    r1 = r4;
    if ((*gptr<u32>(r13 + 0xcu) & r5) == 0) {  // (from the original)
        goto L_1110ea;
    }
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe450(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        if (u32(*gptr<u8>(r0 + 0x24u)) == 0x21u) {  // (from the original)
            goto L_1110ea;
        }
    }
    r0 = *gptr<u32>(r13 + 8u);
    if (!u32(r0 >= r4) || u32(r0 == r4)) {
        goto L_1110ea;
    }
    if ((*gptr<u32>(r13 + 0xcu) & r5) == 0) {  // (from the original)
        goto L_1110ea;
    }
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r13 + 0xcu) & ~r5);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r13 + 0x10u) - 1u);  // (from the original)
L_1110ea:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_1110ae;
    }
    r1 = r13 + 8u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_003100dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0031014c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_1110fc:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r5 = r0;
    res = 0u;
    r1 = res;
    *gptr<u32>(r13) = u32(r1);
    res = r5 + 0x19760u;  // (from the original)
    r7 = res;
    res = 3u;
    r0 = u32(s32(s8(*gptr<u8>(r7 + res))));
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1118f8;
    }
    if (r0 >= 0xau) {  // (from the original)
        goto L_1118ca;
    }
    r1 = 0x2518u;  // (from the original)
    res = r0 * r1 + r5;
    r4 = res;
    if (res == 0) {
        goto L_1118f2;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1118f2;
    }
L_1118b6:;
    if (r4 == 0) {
        goto L_1118f2;
    }
    res = 0x25u;  // (from the original)
    res = *gptr<u32>(r4 + (res << 8) + 0x10u) << 0x15 >> 0x1e;  // (from the original)
    r0 = res;
    if (res != 0) {
        goto L_1118e0;
    }
    goto L_1118ce;
L_1118ca:;
    r4 = 0u;
    guest::preempt();
    goto L_1118b6;
L_1118ce:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x1976cu;  // (from the original)
    r1 = r4;
    r0 = r0 + r2;
    guest::cpu()->r[13] = r13;
    r0 = call_00310cf8(r0, r1, r2, r3);
L_1118e0:;
    r3 = 1u;
    r1 = u32(s32(s8(*gptr<u8>(r7 + 3u))));
    r2 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0031108c(r0, r1, r2, r3);
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
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_00301e20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            res = 0x25u;  // (from the original)
            r0 = *gptr<u32>(r6 + (res << 8) + 0x10u);  // (from the original)
            res = r0 << 0x1f;  // (from the original)
            r1 = res;
            if (!(res == 0)) {
                res = r0 << 0x1e;  // (from the original)
                if (!(res >> 0x1f)) {  // (from the original)
                    goto L_11192e;
                }
            }
            r0 = r6;
            guest::cpu()->r[13] = r13;
            r0 = call_0031118c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 != 0) {
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
    res = r4 * r1 + r5;
    r6 = res;
    if (res == 0) {
        goto L_11199a;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11199a;
    }
L_111946:;
    if (r6 == 0) {
        goto L_11199a;
    }
    res = 0x25u;  // (from the original)
    res = *gptr<u32>(r6 + (res << 8) + 0x10u) << 0x15 >> 0x1e;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = 1u;
        *gptr<u8>(r7) = u8(r0);
        *gptr<u8>(r7 + 1u) = u8(0u);
    }
    r1 = u32(s32(s8(*gptr<u8>(r7))));
    if (s32(r1) < s32(1u)) {
        goto L_11199a;
    }
    if (r0 == 0) {
        goto L_111972;
    }
    goto L_111984;
L_11196e:;
    r6 = 0u;
    guest::preempt();
    goto L_111946;
L_111972:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x1976cu;  // (from the original)
    r1 = r6;
    r0 = r0 + r2;
    guest::cpu()->r[13] = r13;
    r0 = call_00310cf8(r0, r1, r2, r3);
L_111984:;
    *gptr<u8>(r7 + 2u) = u8(~0u);
    r3 = 0u;
    r2 = r6;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0031108c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11199a:;
    r0 = *gptr<u32>(r13);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2518u;  // (from the original)
    r1 = 0x113d15u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x172f4u;  // (from the original)
    r0 = r0 + r1;
    r0 = call_00309444(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xfffe8d0cu;  // (from the original)
    r1 = 0x173a0u;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_003113b8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xfffe8c60u;  // (from the original)
    r1 = 0x173c6u;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_003113b8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xfffe8c3au;  // (from the original)
    r1 = 0x173ecu;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00309448(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xfffe8c14u;  // (from the original)
    r1 = 0x17448u;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_0030944c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xfffe8bb8u;  // (from the original)
    r1 = 0x1764au;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00309450(r0, r1, r2, r3);
    r3 = 0x10u;  // (from the original)
    r2 = 0xf2u;  // (from the original)
    r1 = 0x113fe5u;  // (from the original)
    r0 = r0 + 0x5cu;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0xf66u;  // (from the original)
    r0 = r0 - 0x30u + r5;  // (from the original)
    r0 = call_0031143c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = u32(0) - r5;
    r4 = r0 + r6;
    r0 = r4;
    r0 = call_00308354(r0, r1, r2, r3);
    r3 = 0x10u;  // (from the original)
    r1 = 0x113fe5u;  // (from the original)
    r2 = 0xf2u;  // (from the original)
    r0 = r4 + 0xfacu;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x30u + r5;  // (from the original)
    r0 = call_0031143c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 + r6;
    r0 = r4;
    r0 = call_00308354(r0, r1, r2, r3);
    r3 = 0x10u;  // (from the original)
    r0 = r4 + 0xf7eu;  // (from the original)
    r1 = 0x1141d1u;  // (from the original)
    r2 = 0xcu;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = call_0030c598(r0, r1, r2, r3);
    r3 = 0x10u;  // (from the original)
    r0 = r4 + 0xc0u;  // (from the original)
    r1 = 0x1141d1u;  // (from the original)
    r2 = 0xcu;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = call_0030c598(r0, r1, r2, r3);
    r1 = 0x612d0cu;  // (from the original)
    r3 = 4u;
    r0 = r4 + 0xfffe69d0u;  // (from the original)
    r4 = 0x196f2u;  // (from the original)
    r2 = 2u;
    r0 = r0 + r4;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(0) - r4;
    r4 = r0 + r1;
    r0 = r4;
    r0 = call_00310a30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00111d48
GUEST_EXPORT(0x00111d49, d_00111d48::f_00111d48);

// f_00111f4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00111f4c {


u32 f_00111f4c(u32 r0, u32 r1) {
    u32 res = 0;
    u32 sco = 0;
    u32 r2 = 0;
    u32 cf = 0;
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 >= 0x18fu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = r0 >> 3;
    r0 = r0 << 0x1d >> 0x1d;  // (from the original)
    cf = r2 >= 0x32u;  // (from the original)
    if (cf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    sco = cf;
    res = lsr_rc(u32(*gptr<u8>(r1 + r2)), r0 & 0xff, &sco);  // (from the original)
    r1 = res;
    r0 = r1 << 0x1f >> 0x1f;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x4eu;  // (from the original)
    r0 = call_003094f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00308e80(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0x26u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    r0 = call_002fe8a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = 0x57u;  // (from the original)
    r1 = res << 8;
    res = u32(*gptr<u8>(r0 + r1 + 1u)) >> 1 << 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x70e60u;  // (from the original)
    r1 = r4;
    r0 = r0 + 0x80u + r2;  // (from the original)
    r0 = call_003095b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00111f94
GUEST_EXPORT(0x00111f95, d_00111f94::f_00111f94);

// f_00111ff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00111ff0 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003095a4, u32(u32, u32, u32, u32)> call_003095a4;  // (from the original)
inline constexpr guest::Function<0x003095a8, u32(u32, u32, u32, u32)> call_003095a8;  // (from the original)

u32 f_00111ff0(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x621d0u;  // (from the original)
    res = r0 + 0x80u + r1;  // (from the original)
    r4 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_003095a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_003095a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u8>(r4 + 0x14u);  // (from the original)
    if (r0 == 1u) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 == 2u) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 == 3u) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 == 4u) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_11215c;
    }
    r0 = call_00308e80(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0x26u) {  // (from the original)
        goto L_11215c;
    }
    r0 = 0u;
    r0 = call_002fe8a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_11215c;
    }
    res = 0x57u;  // (from the original)
    r0 = r0 + (res << 8);
    res = u32(*gptr<u8>(r0 + 1u)) >> 1 << 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_11215c;
    }
    res = u32(*gptr<u8>(r0 + 4u)) >> 1 << 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_11215c;
    }
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = 0x621d0u;  // (from the original)
    r1 = 0x4650u;  // (from the original)
    res = r0 + 0x80u + r5 + r1;  // (from the original)
    r4 = res;
    if (res == 0) {
        goto L_11215c;
    }
    r0 = r4;
    r0 = call_00309384(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_11215c;
    }
    r0 = r4;
    r0 = call_0030946c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_11215c;
    }
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8c04u;  // (from the original)
    res = r0 + 0x80u + r5 + r1;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_11215c;
    }
    r1 = 0x2002u;  // (from the original)
    if (u32(*gptr<u16>(r0 + 0xeu)) != r1) {  // (from the original)
        goto L_112160;
    }
L_11215c:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_112160:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x621d0u;  // (from the original)
    r1 = 0x4494u;  // (from the original)
    res = r0 + 0x80u + r2 + r1;  // (from the original)
    r4 = res;
    if (res == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_0030984c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_00309850(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u8>(r4 + 0x10u);  // (from the original)
    if (r0 != 4u) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00309854(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0xbu;  // (from the original)
    r0 = call_00309bd4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00112298
GUEST_EXPORT(0x00112299, d_00112298::f_00112298);

// f_0011253c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011253c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)
inline constexpr guest::Function<0x00310a31, u32(u32, u32, u32, u32)> call_00310a30;  // (from the original)

u32 f_0011253c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r0;
    r1 = 0x22bccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00310a30(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r7 = r4 + 0x1976cu;  // (from the original)
    r5 = 0u;
L_112552:;
    r1 = 0x4a30u;  // (from the original)
    r4 = 0u;
    r6 = r5 * r1 + r7;
    do {
L_11255c:;
        r0 = r6 + 0x2518u * r4;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00308d4c(r0, r1, guest::cpu()->r[2], r3);
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
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    r13 = ea;
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00111d48(r0, r1, r2, r3);
    r2 = 0x2518u;  // (from the original)
    r0 = r0 + 0x19768u;  // (from the original)
    r1 = 0x113d15u;  // (from the original)
    r3 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    r7 = r0;
L_1125a0:;
    r1 = 0x4a30u;  // (from the original)
    r4 = 0u;
    r6 = r5 * r1 + r7;
    do {
L_1125aa:;
        r0 = r6 + 0x2518u * r4;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00308d4c(r0, r1, r2, r3);
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
    r1 = 0x22bccu;  // (from the original)
    r0 = r7 + 0xfffe6894u;  // (from the original)
    r4 = r0;
    *gptr<u32>(r13) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00310a30(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r4 + 0x1976cu;  // (from the original)
    r5 = 0u;
L_1125da:;
    r1 = 0x4a30u;  // (from the original)
    r4 = 0u;
    r6 = r5 * r1 + r7;
    do {
L_1125e4:;
        r0 = r6 + 0x2518u * r4;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00308d4c(r0, r1, r2, r3);
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
    r0 = *gptr<u32>(r13);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    if (r0 == 0) {
        return r0;
    }
    r0 = u32(arg0->byte_1f) << 0x1c >> 0x1f;  // (from the original)
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r7 = r3;
    r5 = r0;
    r4 = r1;
    r6 = r2;
    if (r1 >= 0x10u) {  // (from the original)
        goto L_112d94;
    }
    if (s32(r4) >= s32(0xcu)) {  // (from the original)
        r1 = r4 - 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003120a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_112d68;
    }
    res = r4 - 0xau;  // (from the original)
    zf = res == 0;
    if (res >> 0x1f == ((r4 ^ 0xau) & (r4 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r2;
        if (!zf) {
            guest::cpu()->r[13] = r13;
            r0 = call_00312178(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            goto L_112d68;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_00312184(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_112d68;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00312190(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_112d68:;
    if (r7 == 0) {
        goto L_112d94;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xau;  // (from the original)
    r1 = r0 + 0x292a4u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00308970(r0, r1, r2, r3);
    r1 = r0;
    r3 = r4;
    r2 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0031224c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 4u;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00312274(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_112d94:;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r0;
    r1 = r4 + (0x25u << 8);  // (from the original)
    *gptr<u8>(r1 + 0x14u) = u8(~0u);  // (from the original)
    r0 = r4 + 0x2210u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x1810u;  // (from the original)
    r7 = 0x7dbu;  // (from the original)
    r5 = 0u;
    do {
L_112dba:;
        r0 = (5u << 7) * r5 + r4 + r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002ff408(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r0 = r5 << 0x18;  // (from the original)
        r5 = r5 + 1u;
        res = r0 >> 0x17;  // (from the original)
        r2 = res;
        res = 0x49u;  // (from the original)
        r1 = r2 + r4;
        r0 = r1 + (res << 7);
        res = r5 - 4u;
        *gptr<u16>(r0 + 0x12u) = u16(r7);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r5 ^ 4u) & (r5 ^ res)) >> 0x1f);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_003122bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031237c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    if (r0 == 0) {
        return r0;
    }
    r0 = arg0->byte_4;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r0;
    r0 = r2;
    r6 = r1;
    r5 = r3;
    if (r2 == 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_003091e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_003091ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r7 = r0;
    if (r0 == 0) {
        goto L_112fce;
    }
    r3 = r5;
    r1 = r6;
    r2 = r7 + 0x55a6u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00311f7c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    res = r0;
    r1 = res;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_112fce;
    }
    r2 = 1u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00312434(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_112fce:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    if (r0 == 0) {
        return r0;
    }
    r0 = arg0->byte_6;
    return r0;
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
    if (r0 == 0) {
        return r0;
    }
    r0 = arg0->byte_7;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 tpc = 0;
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = ea - 8u;
    r4 = r0;
    r1 = *gptr<u32>(r13 + 0xcu) + 0x55a6u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00309f84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 != 0) {
        goto L_113060;
    }
    r7 = 0x8eeu;  // (from the original)
    do {
L_11300c:;
        r1 = r5 * 0xf2u;  // (from the original)
        r0 = r1 + r4 + r7;
        guest::cpu()->r[13] = r13;
        r0 = call_002fbd54(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_113066;
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x10u);  // (from the original)
L_113024:;
    r5 = r4 + r7;
    r0 = 0x106335u;  // (from the original)
    r2 = r4 + 0x180eu;  // (from the original)
    r6 = r2;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_003085bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 < 0x10u) {  // (from the original)
        goto L_113042;
    }
    r0 = 0x106209u;  // (from the original)
    r1 = r5;
    r2 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_003085bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_113042:;
    if (r0 >= 0x10u) {  // (from the original)
        goto L_11306e;
    }
    res = 0xf2u;  // (from the original)
    r1 = res;
    res = r0 * r1 + r4 + r7;
    r5 = res;
    if (res == 0) {
        goto L_113060;
    }
    r0 = 0u;
    r3 = r0;
    *gptr<u32>(r13) = u32(r0);
    r2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00308728(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_113060:;
    r13 = r13 + 0x14u;  // (from the original)
    r0 = r5;
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x310u;  // (from the original)
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r2 = *gptr<u32>(r0 + 4u);
    r1 = *gptr<u32>(r0);
    r0 = *gptr<u32>(r0 + 8u);
    *gptr<u32>(r13 + 4u) = u32(r2);
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 8u) = u32(r0);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00308efc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00312af8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r6 = 0x8eau;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r7 + r6);  // (from the original)
    if (r0 == 0) {
        goto L_113256;
    }
    if (u32(*gptr<u8>(r13 + 4u)) != 0xcu) {  // (from the original)
        goto L_113256;
    }
    res = 5u;
    r1 = r13;
    r0 = u32(s32(s8(*gptr<u8>(r1 + res))));
    res = r0 - 0x18u;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 0x18u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_113256;
    }
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = *gptr<u32>(r13);
        r1 = *gptr<u16>(r7 + (0x49u << 7) + 0x10u);  // (from the original)
        if (r1 == r0) {
            goto L_113250;
        }
    }
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00309eb0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x29220u;  // (from the original)
    r5 = r0 + 0x80u + r1 + 4u;  // (from the original)
    r4 = 0u;
L_1131ea:;
    if (r4 >= 0xau) {  // (from the original)
        goto L_11321a;
    }
    r1 = 0x2518u;  // (from the original)
    res = r4 * r1 + r5;
    r6 = res;
    if (res == 0) {
        goto L_113226;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_113226;
    }
L_113202:;
    if (r6 == 0) {
        goto L_113226;
    }
    if (r6 == r7) {
        goto L_113226;
    }
    r0 = r6 + 0x8eau;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_11321e;
    }
    goto L_113226;
L_11321a:;
    r6 = 0u;
    guest::preempt();
    goto L_113202;
L_11321e:;
    r1 = r6;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_113226:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_1131ea;
    }
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fea2c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r13);
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00309eb4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8fc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_113250:;
    r13 = r13 + 0x310u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_113256:;
    r1 = 0x95bfdcu;  // (from the original)
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x310u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r1;
    r6 = r0;
    r5 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xau;  // (from the original)
    r1 = r0 + 0x292a4u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00308970(r0, r1, r2, r3);
    r1 = r0;
    r3 = r5;
    r2 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0031224c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 4u;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00312274(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001133f8
GUEST_EXPORT(0x001133f9, d_001133f8::f_001133f8);

// f_00113430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113430 {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)

u32 f_00113430(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = 0u;
    r5 = r0;
    r6 = 0x1810u;  // (from the original)
    r7 = 0x7dbu;  // (from the original)
    do {
L_11343a:;
        r0 = (5u << 7) * r4 + r5 + r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002ff408(r0, r1, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        r0 = r4 << 0x18;  // (from the original)
        r4 = r4 + 1u;
        res = r0 >> 0x17;  // (from the original)
        r1 = res;
        res = 0x49u;  // (from the original)
        r1 = r1 + r5;
        r0 = r1 + (res << 7);
        res = r4 - 4u;
        *gptr<u16>(r0 + 0x12u) = u16(r7);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ 4u) & (r4 ^ res)) >> 0x1f);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    res = 0x25u;  // (from the original)
    r13 = r13 - 0x60u;  // (from the original)
    r4 = r1;
    res = *gptr<u32>(r6 + (res << 8) + 0x10u) << 0xd;  // (from the original)
    r0 = res;
    if (res >> 0x1f) {  // (from the original)
        goto L_1135a4;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e64(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0xa83aecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301e6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r4 == 0) {
        goto L_1135a6;
    }
    if (r7 == 0) {
        goto L_1135a6;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0030a014(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f6e64(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030a018(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f6e8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_003083d4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f6e64(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00300768(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f6e8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r7 == 0) {
        goto L_1135c6;
    }
    *gptr<u32>(r13 + 0x2cu) = u32(r5);  // (from the original)
    do {
L_113502:;
        r2 = r5;
        r1 = r6;
        r0 = r13 + 0x44u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0030b5a4(r0, r1, r2, r3);
        r3 = r13 + 0x44u;  // (from the original)
        r2 = r13 + 0x2cu;  // (from the original)
        r1 = r6;
        r0 = r13 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(r4);
        guest::cpu()->r[13] = r13;
        r0 = call_00312b2c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = r13 + 0x40u;  // (from the original)
        r1 = r5;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_00312190(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f777c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x44u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f777c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(0xau));  // (from the original)
    r5 = 0u;
    do {
L_113538:;
        r2 = r5;
        r1 = r6;
        r0 = r13 + 0x44u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003107d4(r0, r1, r2, r3);
        r3 = r13 + 0x44u;  // (from the original)
        r2 = r13 + 0x2cu;  // (from the original)
        r1 = r6;
        r0 = r13 + 0x40u;  // (from the original)
        *gptr<u32>(r13) = u32(r4);
        guest::cpu()->r[13] = r13;
        r0 = call_00312b2c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = r13 + 0x40u;  // (from the original)
        r1 = r5;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_003120a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f777c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x44u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002f777c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(4u));
    r1 = r6;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003107bc(r0, r1, r2, r3);
    r3 = r13 + 0x28u;  // (from the original)
    r2 = r13 + 0x2cu;  // (from the original)
    r1 = r6;
    r0 = r13 + 4u;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00312b2c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00312184(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_003107c8(r0, r1, r2, r3);
    r3 = r13 + 4u;
    r2 = r13 + 0x2cu;  // (from the original)
    goto L_1135a8;
L_1135a4:;
    goto L_1135d2;
L_1135a6:;
    goto L_1135cc;
L_1135a8:;
    r1 = r6;
    r0 = r13 + 0x28u;  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00312b2c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x28u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00312178(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1135c6:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00307c50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1135cc:;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0030a1a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_1135d2:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    r0 = 0u;
    return r0;
}

}  // namespace d_00113828
GUEST_EXPORT(0x00113829, d_00113828::f_00113828);

// f_001138a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001138a4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32, u32)> call_00308970;  // (from the original)

u32 f_001138a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 cf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = call_002fb328(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xau;  // (from the original)
    r1 = r0 + 0x292a4u;  // (from the original)
    r0 = r5;
    r0 = call_00308970(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 < 0xau) {  // (from the original)
        cf = r0 >> 0x1f & 1;  // (from the original)
        r1 = r0 << 1;
        r0 = 0xad555cu;  // (from the original)
        res = 1u;
        sco = cf;
        res = lsl_rc(res, r4 & 0xff, &sco);  // (from the original)
        *gptr<u16>(r0 + r1) = u16(u32(*gptr<u16>(r0 + r1)) | res);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001138a4
GUEST_EXPORT(0x001138a5, d_001138a4::f_001138a4);

// f_001138dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001138dc {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_001138dc() {
    u32 r2 = 0;
    r2 = 0x2518u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    call_002fbb30(guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_001138dc
GUEST_EXPORT(0x001138dd, d_001138dc::f_001138dc);

// f_001138ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001138ec {

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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x50u;  // (from the original)
    r5 = r1;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00308d4c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u16>(r5 + 0x2cu);  // (from the original)
    *gptr<u16>(r13 + 0x2cu) = u16(r1);  // (from the original)
    r0 = 0xa8349cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00311744(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x30u) = u32(r0);  // (from the original)
    r1 = *gptr<u16>(r13 + 0x2cu);  // (from the original)
    r0 = 0xa83aecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301e6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    if (r0 == 0) {
        goto L_1139c2;
    }
    if (r6 == 0) {
        goto L_1139c2;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r7 = 0x62138u;  // (from the original)
    r3 = r0 + 0x80u + r7;  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(u32(*gptr<u8>(r6 + 0x1cu)) >> 4);  // (from the original)
    r2 = r13 + 0xcu;  // (from the original)
    r1 = r13 + 0x2cu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00308380(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 + 0x80u + r7;  // (from the original)
    r0 = r4 + (0x45u << 5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030f52c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r2 = 0x58u;  // (from the original)
    r0 = r4 + 0x249au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 3u;
    r1 = r4 + (0x25u << 8);  // (from the original)
    *gptr<u8>(r1 + 8u) = u8(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0x250au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030f56c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xbu;  // (from the original)
    r1 = r13 + 0x14u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_003083d4(r0, r1, r2, r3);
    r3 = r0;
    r2 = 0x88eedcu;  // (from the original)
    r1 = r13;
    r0 = *gptr<u32>(0x95debcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00312a40(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00308450(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0030846c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003084c8(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
    }
    r1 = r5 + 0x30u;  // (from the original)
    r2 = 0x79u << 5;  // (from the original)
    r0 = r4 + 0x8eeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003084cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_1139c2:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r1;
    r6 = r0;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_113cf0;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r7 = 0x8c6u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    r5 = r6 + r7;
    r4 = 0u;
    do {
L_113cc2:;
        r1 = *gptr<u32>(r13);
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb84(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            if (r4 >= 4u) {
                goto L_113cf0;
            }
            r1 = 0x95bfdcu;  // (from the original)
            r0 = (r4 << 2) + r6 + r7;
            guest::cpu()->r[13] = r13;
            r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            r0 = r6;
            guest::cpu()->r[13] = r13;
            r0 = call_00313160(r0, r1, guest::cpu()->r[2], r3);
            r1 = guest::cpu()->r[1];
            r0 = 1u;
            r13 = r13 + 0x18;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r4 = r4 + 1u;
        r5 = r5 + 4u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
L_113cf0:;
    r0 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00113ca4
GUEST_EXPORT(0x00113ca5, d_00113ca4::f_00113ca4);

// f_00113cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00113cfc {


u32 f_00113cfc(u32 r0, u32 r1) {
    u32 r2 = 0;
    if (r1 >= 4u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = r1 << 2;
    r1 = 0x8c6u;  // (from the original)
    r0 = r2 + r0 + r1;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    r0 = r0 + 0x30u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_001b4980(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8b6u;  // (from the original)
    r0 = r0 - 0x30u + r1;  // (from the original)
    r0 = call_0030a480(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xfffff74au;  // (from the original)
    r1 = 0x8beu;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00313414(r0, r1, r2, r3);
    r4 = 0x8c6u;  // (from the original)
    r3 = 4u;
    r1 = 0x2fc20cu;  // (from the original)
    r0 = r0 + 0xfffff742u + r4;  // (from the original)
    r2 = r3;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = u32(0) - r4;
    r4 = 0x8d6u;  // (from the original)
    r0 = r0 + r1;
    r3 = 4u;
    r1 = 0x2fc20cu;  // (from the original)
    r0 = r0 + r4;
    r2 = r3;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x8e6u;  // (from the original)
    r2 = u32(0) - r4;
    r0 = r0 + r2 + r1;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xfffff71au;  // (from the original)
    r1 = 0x8eau;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r4 = 0x8eeu;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r1 = 0x113fe5u;  // (from the original)
    r2 = 0xf2u;  // (from the original)
    r0 = r0 + 0xfffff716u + r4;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = u32(0) - r4;
    r4 = 0x1810u;  // (from the original)
    r0 = r0 + r1;
    r1 = 0x2ff368u;  // (from the original)
    r3 = 4u;
    r2 = 5u << 7;
    r0 = r0 + r4;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x2210u;  // (from the original)
    r2 = u32(0) - r4;
    r0 = r0 + r2 + r1;
    r0 = call_002ff368(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffffddf0u;  // (from the original)
    r1 = 0x2490u;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_0030a484(r0, r1, r2, r3);
    r4 = 0x2492u;  // (from the original)
    r3 = 4u;
    r1 = 0x612d0cu;  // (from the original)
    r2 = 2u;
    r0 = r0 + 0xffffdb70u + r4;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x249au;  // (from the original)
    r0 = r0 + (u32(0) - r4) + r1;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffffdb66u;  // (from the original)
    r1 = 0x250au;  // (from the original)
    r0 = r0 - 0x50u + r2 + r1;  // (from the original)
    r0 = call_00301e94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xffffdaf6u;  // (from the original)
    r4 = r0 + r1;
    r0 = r4;
    r0 = call_00308d4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r0 = r0 + 0xb6u;  // (from the original)
    r4 = r1;
    r1 = 1u;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_001df5e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = 0x29220u;  // (from the original)
    r2 = 0xau;  // (from the original)
    r1 = r0 + 0x80u + r5 + 4u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00308970(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00313440(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0 + 0x80u + r5 + 4u;  // (from the original)
    r2 = 0xau;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00308970(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r7 == r0) {
        r1 = 1u;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_001df668(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 tpc = 0;
    ea = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u32>(ea + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r14);  // (from the original)
    r13 = ea - 0xcu;  // (from the original)
    r5 = r0;
    r0 = (u32(arg0->byte_b6) << 0x1a >> 0x1d) + 1u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    if (!(!u32(r0 >= 3u) || u32(r0 == 3u))) {
        r0 = 3u;
        *gptr<u32>(r13) = u32(r0);
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r7 = 0x8eeu;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r13 + 4u) = u32(r0 + 4u);
L_113f46:;
    r0 = *gptr<u32>(r13 + 4u);
    if (r6 >= 0xau) {  // (from the original)
        goto L_113f6a;
    }
    r2 = 0x2518u;  // (from the original)
    r1 = r6 * r2;
    res = r1 + r0;
    r4 = res;
    if (res == 0) {
        goto L_113fc0;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r0, r1, r2, r3);
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
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r5 = *gptr<u32>(r13);
    r6 = 1u;
    if (r0 == 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_003091e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_003091ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r7 = r0;
    if (r0 == 0) {
        goto L_113fb6;
    }
    r3 = r6;
    r1 = r5;
    r2 = r7 + 0x55a6u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00311f7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_113fb6;
    }
    r1 = r0;
    r2 = 1u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00312434(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_113fb6:;
    r13 = r13 + 0x14u;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
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
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 tpc = 0;
    ea = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r14);  // (from the original)
    r13 = ea - 0xcu;  // (from the original)
    r4 = r2;
    r6 = r0;
    r5 = r3;
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0031118c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = *gptr<u16>(*gptr<u32>(r13 + 0x10u) + 0x2cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00313a40(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_11413e;
        }
    }
    if (r4 >= 2u) {
        goto L_11413e;
    }
    if (r5 >= 2u) {
        goto L_11413e;
    }
    r2 = 0x2518u;  // (from the original)
    r7 = r2;
    r0 = 0x4a30u * r4 + r6 + r5 * r2;  // (from the original)
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r4 != 1u) {
        goto L_114120;
    }
    if (r5 != 1u) {
        goto L_114120;
    }
    r4 = 0x4a30u + r6 + r7;  // (from the original)
    r1 = r5 - 2u;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u8>(r4 + (0x25u << 8) + 0x14u) = u8(r1);  // (from the original)
    r4 = *gptr<u32>(r13);
    r0 = r4 + 0x2210u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x1810u;  // (from the original)
    r7 = 0x7dbu;  // (from the original)
    r5 = 0u;
    do {
L_1140f2:;
        r0 = (5u << 7) * r5 + r4 + r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002ff408(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r5 << 0x18;  // (from the original)
        r5 = r5 + 1u;
        res = r0 >> 0x17;  // (from the original)
        r1 = res;
        res = 0x49u;  // (from the original)
        r1 = r1 + r4;
        r0 = r1 + (res << 7);
        res = r5 - 4u;
        *gptr<u16>(r0 + 0x12u) = u16(r7);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r5 ^ 4u) & (r5 ^ res)) >> 0x1f);  // (from the original)
    r0 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0 = call_003122bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0 = call_0031237c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_114120:;
    r1 = 0x45u << 5;  // (from the original)
    r0 = *gptr<u8>(*gptr<u32>(r13 + 0x10u) + r1 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030a62c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00301484(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r4 == r0) {
        goto L_11413e;
    }
    r0 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_003122bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_11413e:;
    r13 = r13 + 0x1cu;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00114088
GUEST_EXPORT(0x00114089, d_00114088::f_00114088);

// f_00114160: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114160 {

inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)

u32 f_00114160(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 tpc = 0;
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
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = ea;
    r4 = 0x4a30u;  // (from the original)
    r3 = u32(s32(r4) >> 1);
    r1 = r1 * r4;
    r2 = r2 * r3;
    r0 = r1 + r0 + r2;
    guest::cpu()->r[13] = r13;
    r0 = call_00308d4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = *gptr<u32>(r13);
    tpc = *gptr<u32>(r13 + 4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r6 = r1;
    r5 = r0;
    r4 = r2;
    r1 = arg1->word_4;
    r13 = r13 - 0x30u;  // (from the original)
    r2 = arg1->word_8;
    r3 = r13 + 8u;
    *gptr<u32>(r3) = u32(arg1->word_0);
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r3 = r13 + 0x14u;  // (from the original)
    r1 = arg2->word_4;
    r2 = arg2->word_8;
    *gptr<u32>(r3) = u32(arg2->word_0);
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r3 = r3 + 0xc;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00314258(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00314258(r0, r1, r2, r3);
    r1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x18u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1);
    ea = r13 + 8u;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00314278(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8b78u;  // (from the original)
    r5 = r5 + r1;
    if (r0 == 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_003142e0(r0, r1, r2, r3);
    }
    r0 = *gptr<u32>(r4 + 4u);
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r4 + 8u));
    *gptr<u32>(r13) = u32(r0);
    r0 = *gptr<u32>(r6);
    r1 = *gptr<u32>(r6 + 4);
    r2 = *gptr<u32>(r6 + 8);
    r6 = r6 + 0xc;  // (from the original)
    r3 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb4a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_003142e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_001e546c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4 + 0x4494u;  // (from the original)
    r0 = call_0010b3b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4 + 0x44e0u;  // (from the original)
    r0 = call_0010a840(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4 + 0x45ccu;  // (from the original)
    r0 = call_00108b88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4 + 0x8a6cu;  // (from the original)
    r0 = call_0010af72(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = r4 + 0x45fcu;  // (from the original)
        r0 = call_0020d27c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = r5;
    r0 = r4 + 0x4650u;  // (from the original)
    r0 = call_0010abc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4 + 0x8a7eu;  // (from the original)
    r0 = call_0010b6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4 + 0x8b32u;  // (from the original)
    r0 = call_0010a44c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4 + 0x8b60u;  // (from the original)
    r0 = call_0010b448(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001146fc
GUEST_EXPORT(0x001146fd, d_001146fc::f_001146fc);

// f_001147a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001147a8 {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> call_002faedc;  // (from the original)
inline constexpr guest::Function<0x002fea95, u32(u32, u32, u32, u32)> call_002fea94;  // (from the original)

u32 f_001147a8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r1 = r13;
    *gptr<u8>(r1) = u8(r0);
    r0 = 0x105ccdu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002faedc(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r0 = 0x105ccdu;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fea94(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00308340(r0, r1, r2, r3);
    r1 = 1u;
    r3 = 0u;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4u) = u32(r1);
    r2 = r3;
    r1 = 0x66u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b4d7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0032cef4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_006e08b4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_006bced4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        r0 = r4 + 0x6b8cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00303660(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_002fd068(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_006b8cb8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_002fd068(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_006b7380(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005c5bb8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(0x1148c5u, r0, r1, r2, r3);  // (from the original)
}

}  // namespace d_00114810
GUEST_EXPORT(0x00114810, d_00114810::f_00114810);

// f_00114ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114ae0 {

inline constexpr guest::Function<0x002fd649, u32(u32, u32, u32, u32)> call_002fd648;  // (from the original)

u32 f_00114ae0(u32 r0) {
    u32 r1 = 0;
    r1 = r0;
    r0 = 0x10617du;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fd648(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00114ae0
GUEST_EXPORT(0x00114ae1, d_00114ae0::f_00114ae0);

// f_00114af0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114af0 {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> call_002faedc;  // (from the original)

u32 f_00114af0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    *gptr<u16>(r13) = u16(0u);
    r0 = 0x105bf5u;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002faedc(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u16>(r13);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00114af0
GUEST_EXPORT(0x00114af1, d_00114af0::f_00114af0);

// f_00114b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114b28 {

inline constexpr guest::Function<0x002faf8d, u32(u32, u32, u32, u32)> call_002faf8c;  // (from the original)

u32 f_00114b28(u32 r0_unused, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = 0;
    r0 = 0xa14b1cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_002faf8c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0xa14b1cu;  // (from the original)
    r0 = *gptr<u32>(r2 + 8u);
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        goto L_114b42;
    }
    if (s32(r0) < s32(0x64u)) {  // (from the original)
        goto L_114b42;
    }
    r0 = 0x64u;  // (from the original)
L_114b42:;
    r1 = *gptr<u32>(r2 + 0xcu);  // (from the original)
    res = r1;
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = 0u;
        goto L_114b52;
    }
    if (s32(r1) < s32(0x64u)) {  // (from the original)
        goto L_114b52;
    }
    r1 = 0x64u;  // (from the original)
L_114b52:;
    r1 = r0 + r1;
    r0 = *gptr<u32>(r2 + 0x10u);  // (from the original)
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        r0 = r1 + r0;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (s32(r0) < s32(0x64u)) {  // (from the original)
        r0 = r1 + r0;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x64u;  // (from the original)
    r0 = r1 + r0;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00114b28
GUEST_EXPORT(0x00114b29, d_00114b28::f_00114b28);

// f_00114bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114bd0 {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> call_002faedc;  // (from the original)

u32 f_00114bd0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    *gptr<u16>(r13) = u16(0u);
    r0 = 0x105e15u;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002faedc(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u16>(r13);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00114bd0
GUEST_EXPORT(0x00114bd1, d_00114bd0::f_00114bd0);

// f_00114c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114c70 {

inline constexpr guest::Function<0x00314c75, u32(u32, u32, u32, u32)> call_00314c74;  // (from the original)

u32 f_00114c70() {
    u32 r0 = 0;
    r0 = 0x105c31u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00314c74(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00114c70
GUEST_EXPORT(0x00114c71, d_00114c70::f_00114c70);

// f_00114c80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114c80 {

inline constexpr guest::Function<0x00314c75, u32(u32, u32, u32, u32)> call_00314c74;  // (from the original)

u32 f_00114c80() {
    u32 r0 = 0;
    r0 = 0x105d05u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00314c74(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00114c80
GUEST_EXPORT(0x00114c81, d_00114c80::f_00114c80);

// f_00114c90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114c90 {


void f_00114c90(u32 r0) {
    u32 r1 = 0;
    r1 = 0x952b9cu;  // (from the original)
    *gptr<u8>(r1) = u8(r0);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00114c90
GUEST_EXPORT(0x00114c91, d_00114c90::f_00114c90);

// f_00114c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114c9c {

inline constexpr guest::Function<0x002ffc8d, u32(u32, u32, u32, u32)> call_002ffc8c;  // (from the original)
inline constexpr guest::Function<0x00314ce4, u32(u32, u32, u32, u32)> call_00314ce4;  // (from the original)

u32 f_00114c9c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r1 = r0;
    r0 = 0x952bdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00314ce4(r0, r1, r2, r3);
    r4 = 0u;
    r6 = 2u;
L_114caa:;
    r5 = 0u;
    do {
L_114cac:;
        r3 = 2u;
        r2 = r4 + 1u;
        r1 = r5 + 1u;
        r0 = 0x1eu;  // (from the original)
        *gptr<u32>(r13) = u32(r6);
        guest::cpu()->r[13] = r13;
        r0 = call_002ffc8c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(2u));
    r4 = r4 + 1u;
    if (s32(r4) < s32(2u)) {
        guest::preempt();
        goto L_114caa;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x60u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0030ac60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4u);
    r0 = *gptr<u32>(r0 + 8u);
    *gptr<u32>(r13 + 0x20u) = u32(r1);  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r0);  // (from the original)
    r0 = r13;
    *gptr<u32>(r13 + 0x24u) = u32(r2);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312acc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00314cec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r3 = r13 + 0x14u;  // (from the original)
    ea = r13 + 0x40u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r3) = u32(r0);
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r3 = r3 + 0xc;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030ac64(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x621b2u;  // (from the original)
    r1 = r0 + 0x80u + r6;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003081b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_114de8;
    }
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r3 = r13 + 8u;
    ea = r13 + 0x40u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r3 = r3 + 0xc;  // (from the original)
L_114d68:;
    r2 = 1u;
    r1 = r13 + 8u;
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd4b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r1 = 0x2239u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd844(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r5 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030af68(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00107538(r0, r1, r2, r3);
    r3 = r13 + 8u;
    r2 = r13 + 0x14u;  // (from the original)
    r1 = r7;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00103e38(r0, r1, r2, r3);
    r3 = r13 + 8u;
    r2 = r13 + 0x14u;  // (from the original)
    r1 = r7;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00106400(r0, r1, r2, r3);
    r3 = r13 + 8u;
    r2 = r13 + 0x14u;  // (from the original)
    r1 = r7;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00103a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_001083fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r5 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030af6c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = r13 + 0x14u;  // (from the original)
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312acc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + r6;
    r1 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003081b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x62120u;  // (from the original)
    r0 = r0 + r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0020d904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0030af70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0030af74(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_114de8:;
    r3 = r13 + 8u;
    ea = r13 + 0x14u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r4 = 1u;
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r3 = r3 + 0xc;  // (from the original)
    guest::preempt();
    goto L_114d68;
}

}  // namespace d_00114d00
GUEST_EXPORT(0x00114d01, d_00114d00::f_00114d00);

// f_00114e00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114e00 {

inline constexpr guest::Function<0x00314ce4, u32(u32, u32, u32, u32)> call_00314ce4;  // (from the original)

u32 f_00114e00(u32 r0) {
    u32 r1 = 0;
    r1 = r0;
    r0 = 0x952bdcu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00314ce4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00114e00
GUEST_EXPORT(0x00114e01, d_00114e00::f_00114e00);

// f_00114e10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00114e10 {

inline constexpr guest::Function<0x002fc25c, u32(u32, u32, u32, u32)> call_002fc25c;  // (from the original)
inline constexpr guest::Function<0x002ffc18, u32(u32, u32, u32, u32)> call_002ffc18;  // (from the original)
inline constexpr guest::Function<0x002ffc8d, u32(u32, u32, u32, u32)> call_002ffc8c;  // (from the original)

u32 f_00114e10(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r0 = *gptr<u32>(0x952ba0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc25c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r7 = 0u;
    r6 = r0;
    r5 = r7;
L_114e20:;
    r4 = 0u;
    do {
L_114e22:;
        r2 = 1u;
        r1 = r5 + 1u;
        r0 = r4 + 1u;
        guest::cpu()->r[13] = r13;
        r0 = call_002ffc18(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            if (!(r7 != r6)) {
                r2 = r5;
                r5 = 3u;
                r3 = 1u;
                r2 = r2 + 1u;
                r1 = r4 + 1u;
                r0 = r3;
                *gptr<u32>(r13) = u32(r5);
                guest::cpu()->r[13] = r13;
                r0 = call_002ffc8c(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r0 = 2u;
                guest::cpu()->r[13] = r13;
                r0 = call_002fc25c(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r4 = r0 + 1u;
                r0 = 2u;
                guest::cpu()->r[13] = r13;
                r0 = call_002fc25c(r0, r1, r2, r3);
                r1 = r0 + 1u;
                r3 = 1u;
                r0 = 0x1eu;  // (from the original)
                r2 = r4;
                *gptr<u32>(r13) = u32(r5);
                guest::cpu()->r[13] = r13;
                r0 = call_002ffc8c(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r13 = r13 + 0x18;  // (from the original)
                guest::cpu()->r[1] = r1;
                guest::cpu()->r[13] = r13;
                return r0;
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
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00114e10
GUEST_EXPORT(0x00114e11, d_00114e10::f_00114e10);

// f_00116cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00116cdc {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> call_002faedc;  // (from the original)
inline constexpr guest::Function<0x002fea95, u32(u32, u32, u32, u32)> call_002fea94;  // (from the original)

u32 f_00116cdc() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x105971u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_002faedc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0x105971u;  // (from the original)
    r1 = 0u;
    r0 = call_002fea94(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_00114d00(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r6 = 0x55a6u;  // (from the original)
    r7 = 0x5498u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r13) = u32(r0 + 0x20u);  // (from the original)
L_116d0a:;
    r0 = *gptr<u32>(r13);
    r1 = uxtb(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb7e8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_116d26;
    }
    r0 = r5 + r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_116d26;
    }
    r0 = r5 + r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0030bd90(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_116d26:;
    r4 = r4 + 1u;
    if (r4 < 4u) {
        guest::preempt();
        goto L_116d0a;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_003082bc(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00308238(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00116cf4
GUEST_EXPORT(0x00116cf5, d_00116cf4::f_00116cf4);

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
    guest::cpu()->r[13] -= 8u;
    r0 = call_0030c398(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_00308340(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_0030c39c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x20u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = 1u << 0x1c;  // (from the original)
        r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_1176aa;
        }
    }
    r0 = call_0030c3a0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_1176aa:;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 1u << 9;
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0030c3a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r4 = r4 + 0x80u;  // (from the original)
    r5 = 1u;
    r0 = *gptr<u8>(r4 + 0x19u);  // (from the original)
    if (r0 != 0) {
        goto L_117706;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x94f354u;  // (from the original)
    r2 = u32(s32(s8(*gptr<u8>(r1))));
    r0 = sxtb(*gptr<u32>(r0 + 8u));
    if (r2 != r0) {
        *gptr<u8>(r1) = u8(r0);
        guest::cpu()->r[13] = r13;
        r0 = call_0030560c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 3u) {
            goto L_117738;
        }
    }
    r0 = *gptr<u8>(r4 + 0x19u);  // (from the original)
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_117706:;
    r1 = 0u;
    r0 = 0xeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003170f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 1u << 0xb;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_0030c3a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 0u;
    if (r0 == 0x1eu) {  // (from the original)
        goto L_11778c;
    }
    if (r0 != 1u) {
        goto L_117782;
    }
    goto L_11773c;
L_117738:;
    *gptr<u8>(r4 + 0x19u) = u8(r5);  // (from the original)
    guest::preempt();
    goto L_117706;
L_11773c:;
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030c3ac(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_11778c;
    }
    r2 = r0 + 0x14u;  // (from the original)
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00307374(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_11778c;
    }
    r2 = *gptr<u32>(r13 + 4u);
    r1 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_11778c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030c3b0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_0030c3b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0xbu) {  // (from the original)
        goto L_11778c;
    }
    if (r0 == 0xcu) {  // (from the original)
        goto L_11778c;
    }
    if (r0 == 0xdu) {  // (from the original)
        goto L_11778c;
    }
    if (r0 == 0x10u) {  // (from the original)
        goto L_11778c;
    }
L_117782:;
    *gptr<u8>(r4 + 0x19u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00114e10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11778c:;
    *gptr<u8>(r4 + 0x19u) = u8(r5);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001176c4
GUEST_EXPORT(0x001176c5, d_001176c4::f_001176c4);

// f_00117808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00117808 {


u32 f_00117808(u32 r0) {
    u32 r1 = 0;
    r1 = 0x95029cu;  // (from the original)
    r0 = *gptr<u32>(r1 + (r0 << 2));
    guest::cpu()->r[1] = r1;
    return r0;
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
    guest::cpu()->r[13] -= 8u;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x80u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 1u;
    r2 = 0x57u << 8;  // (from the original)
    r0 = r0 + r2;
    r0 = call_001e23f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x52f280u;  // (from the original)
    r3 = 2u;
    arg0->word_0 = u32(0x8f8960u);  // (from the original)
    r2 = 0x10u;  // (from the original)
    r0 = r4 + 0xf0f4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x317d8cu;  // (from the original)
    r3 = 2u;
    r2 = 0x4cu;  // (from the original)
    r0 = r4 + 0xf02cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xefe0u;  // (from the original)
    r0 = call_00317d8c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff1020u;  // (from the original)
    r1 = 0xef94u;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317d8c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff106cu;  // (from the original)
    r1 = 0xeb14u;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317dec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff14ecu;  // (from the original)
    r1 = 0xea0cu;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317e2c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff15f4u;  // (from the original)
    r1 = 0xea04u;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317dec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff15fcu;  // (from the original)
    r1 = 0xe8fcu;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317e2c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff1704u;  // (from the original)
    r1 = 0xe8f4u;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317dec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff170cu;  // (from the original)
    r1 = 0xe7ecu;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317e2c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff1814u;  // (from the original)
    r1 = 0xe7e4u;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317dec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff181cu;  // (from the original)
    r1 = 0xe6dcu;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317e2c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff1924u;  // (from the original)
    r1 = 0xe6d4u;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317dec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xffff192cu;  // (from the original)
    r1 = 0xe5ccu;  // (from the original)
    r0 = r0 + r2 + r1;
    r0 = call_00317e2c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x72f0u;  // (from the original)
    r0 = r0 + 0xffff1a34u + r1;  // (from the original)
    r0 = call_0030c860(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xffff8d10u;  // (from the original)
    r0 = r0 + r1 + 0x14u;  // (from the original)
    r0 = call_0030c864(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14u;  // (from the original)
    r0 = call_003171b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00118164
GUEST_EXPORT(0x00118165, d_00118164::f_00118164);

// f_0011872a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011872a {

inline constexpr guest::Function<0x00318540, u32(u32, u32, u32, u32)> call_00318540;  // (from the original)

u32 f_0011872a(u32 r0) {
    u32 r1 = 0;
    r1 = 0x40u;  // (from the original)
    r0 = r0 + 0x1aau;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00318540(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011872a
GUEST_EXPORT(0x0011872b, d_0011872a::f_0011872a);

// f_00118738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118738 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0030f56c, u32(u32, u32, u32, u32)> call_0030f56c;  // (from the original)

u32 f_00118738(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r1 = 0x1acu;  // (from the original)
    r4 = r0;
    r0 = call_00301444(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u16>(0x1aau + r4) = u16(1u);  // (from the original)
    r0 = r4 + 0x1a6u;  // (from the original)
    r1 = r5;
    r0 = call_0030f56c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00118738
GUEST_EXPORT(0x00118739, d_00118738::f_00118738);

// f_0011875c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011875c {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_0011875c() {
    u32 r1 = 0;
    r1 = 0x1acu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    call_00301444(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return guest::cpu()->r[0];
}

}  // namespace d_0011875c
GUEST_EXPORT(0x0011875d, d_0011875c::f_0011875c);

// f_00118770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118770 {

inline constexpr guest::Function<0x00318540, u32(u32, u32, u32, u32)> call_00318540;  // (from the original)

u32 f_00118770(u32 r0, u32 r1) {
    u32 res = 0;
    u32 sco = 0;
    u32 r2 = 0;
    u32 cf = guest::cpu()->cf;
    res = 2u;
    sco = cf;
    res = lsl_rc(res, r1 & 0xff, &sco);  // (from the original)
    r2 = res;
    r1 = uxth(r2);
    guest::cpu()->r[13] -= 8u;
    if (r1 == 2u) {
        goto L_118788;
    }
    if (r1 == 4u) {
        goto L_118788;
    }
    if (r1 == 8u) {
        goto L_118788;
    }
    if (r1 != 0x10u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_118788:;
    r0 = r0 + 0x1aau;  // (from the original)
    r0 = call_00318540(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00118770
GUEST_EXPORT(0x00118771, d_00118770::f_00118770);

// f_00118792: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118792 {

inline constexpr guest::Function<0x0030cc28, u32(u32, u32, u32, u32)> call_0030cc28;  // (from the original)

u32 f_00118792(u32 r0_unused, u32 r1) {
    r1 = r1 + 0x24u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    call_0030cc28(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
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
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x8ae0u;  // (from the original)
    r3 = r2;
    r2 = r1;
    r1 = r0;
    r0 = r0 + r4;
    r0 = call_0024a8bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00303cdc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r0 = call_00118a94(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00118a64
GUEST_EXPORT(0x00118a65, d_00118a64::f_00118a64);

// f_00118a74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118a74 {

inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)

u32 f_00118a74(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00303cdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0x34u;  // (from the original)
    r1 = ~0u;
    *gptr<u8>(r4 + 8u) = u8(r1);
    *gptr<u8>(r4 + 9u) = u8(r0);
    *gptr<u8>(r4 + 0xau) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = 1u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0030ce54(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_118afe;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 3u) {
        goto L_118afe;
    }
    r5 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_118b06;
    }
    r1 = r4;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r3 = r13;
    ea = r13 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r3 = r3 + 0xc;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00308efc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = *gptr<u32>(r0 + 4u);
    r1 = *gptr<u32>(r0);
    r0 = *gptr<u32>(r0 + 8u);
    *gptr<u32>(r13 + 0x10u) = u32(r2);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00308efc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = r13;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd4b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 1u) {
        goto L_118b04;
    }
    goto L_118b06;
L_118afe:;
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_118b04:;
    r5 = 0u;
L_118b06:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0030ce58(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r3 = r13 + 4u;
    ea = r13 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r3 = r3 + 0xc;  // (from the original)
    if (r5 != 0) {
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00318568(r0, r1, r2, r3);
    } else {
        r0 = *gptr<u8>(r4 + 0xau);  // (from the original)
    }
    r1 = 1u;
    *gptr<u8>(r4 + 9u) = u8(r0);
    r0 = 0u;
    r3 = r0;
    r2 = r0;
    *gptr<u32>(r13) = u32(r0);
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312ab8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00318568(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0xau) = u8(r0);  // (from the original)
    r0 = *gptr<u8>(r4 + 9u);
    if (!u32(r0 >= 4u) || u32(r0 == 4u)) {
        r1 = r4;
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb430(r0, r1, r2, r3);
        r3 = r13;
        ea = r13 + 0xcu;  // (from the original)
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(ea + 8);
        *gptr<u32>(r3) = u32(*gptr<u32>(ea));
        *gptr<u32>(r3 + 4) = u32(r1);
        *gptr<u32>(r3 + 8) = u32(r2);
        r3 = r3 + 0xc;  // (from the original)
        r1 = 0u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0030ce5c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    } else {
        r0 = ~0u;
    }
    *gptr<u8>(r4 + 8u) = u8(r0);
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00118a94
GUEST_EXPORT(0x00118a95, d_00118a94::f_00118a94);

// f_00118b70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118b70 {


u32 f_00118b70(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = r0;
    r0 = 0u;
    do {
L_118b74:;
        res = 0xffu;  // (from the original)
        res = u32(*gptr<u16>((res + 0xadu) * r0 + r2 + 0x1aau)) << 0x1f >> 0x1f;  // (from the original)
        r1 = res;
        if (res == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(0xfu));  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00118b70
GUEST_EXPORT(0x00118b71, d_00118b70::f_00118b70);

// f_00118e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118e94 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)

u32 f_00118e94(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 tpc = 0;
    ea = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u32>(ea + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r14);  // (from the original)
    r13 = ea - 4u;
    r5 = 0u;
    r7 = 0x2518u;  // (from the original)
    r6 = 0x25u << 8;  // (from the original)
    r4 = r0;
L_118ea2:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_118ec6;
    }
    r0 = *gptr<u32>(r4 + r6 + 0x10u);  // (from the original)
    res = r0 << 0x1e >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_118ec6;
    }
    r1 = *gptr<u32>(r13 + 8u);
    if (r1 != 0) {
        if ((r0 & 1u) != 0u) {
            goto L_118ed6;
        }
        goto L_118ec6;
    }
    if ((r0 & 1u) == 0u) {
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
    r0 = ~0u;
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
L_118ed6:;
    r13 = r13 + 0xcu;  // (from the original)
    r0 = r5;
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00118e94
GUEST_EXPORT(0x00118e95, d_00118e94::f_00118e94);

// f_00118f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118f18 {

inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x00318d8c, u32(u32, u32, u32, u32)> call_00318d8c;  // (from the original)

u32 f_00118f18(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r1;
    if (r1 >= 3u) {
        goto L_118f38;
    }
    r1 = 0x173ecu;  // (from the original)
    r5 = r0 + r1;
    r0 = r5 + 0x46u;  // (from the original)
    r4 = r0;
    r0 = call_00309ef0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_118f38;
    }
    if (u32(*gptr<u8>(r4 + 8u)) == 0x12u) {  // (from the original)
        goto L_118f3e;
    }
L_118f38:;
    r0 = ~0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_118f3e:;
    r1 = r6;
    r0 = r5;
    r0 = call_00318d8c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00118f18
GUEST_EXPORT(0x00118f19, d_00118f18::f_00118f18);

// f_00118fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118fb4 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0031118c, u32(u32, u32, u32, u32)> call_0031118c;  // (from the original)

u32 f_00118fb4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r5 = 0u;
    r7 = 0x2518u;  // (from the original)
    r6 = 0x25u << 8;  // (from the original)
    r4 = r0;
L_118fc0:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_118fe4;
    }
    r0 = *gptr<u32>(r4 + r6 + 0x10u);  // (from the original)
    res = r0 << 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        res = r0 << 0x1e;  // (from the original)
        if (!(res >> 0x1f)) {  // (from the original)
            goto L_118fe0;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031118c(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_118fe4;
    }
L_118fe0:;
    r0 = r5;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_118fe4:;
    r5 = r5 + 1u;
    r4 = r4 + r7;
    if (s32(r5) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_118fc0;
    }
    r0 = ~0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00118fb4
GUEST_EXPORT(0x00118fb5, d_00118fb4::f_00118fb4);

// f_00118ff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00118ff8 {

inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0030b829, u32(u32, u32, u32, u32)> call_0030b828;  // (from the original)

u32 f_00118ff8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_0030b6c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_11902e;
    }
    if (r5 == 0) {
        goto L_11902c;
    }
    r1 = *gptr<u32>(r5 + (1u << 0xc) + 0x28u);  // (from the original)
    if (r1 == 0) {
        goto L_11902c;
    }
    r0 = r4;
    r0 = call_0030b828(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0xeu) {  // (from the original)
        goto L_119030;
    }
    if (r0 == 0xfu) {  // (from the original)
        goto L_119030;
    }
    if (r0 == 0x10u) {  // (from the original)
        goto L_119034;
    }
    if (r0 == 0x11u) {  // (from the original)
        goto L_119034;
    }
L_11902c:;
    r0 = 0u;
L_11902e:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_119030:;
    r0 = 0x173a0u;  // (from the original)
    goto L_119036;
L_119034:;
    r0 = 0x173c6u;  // (from the original)
L_119036:;
    r0 = r4 + r0;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 cf = 0;
    u32 tpc = 0;
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = ea;
    r4 = r0;
    r5 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0029b868(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
L_11917a:;
    if (r6 >= 0xau) {  // (from the original)
        goto L_119218;
    }
    r1 = 0x2518u;  // (from the original)
    res = r6 * r1 + r4;
    r7 = res;
    if (res == 0) {
        goto L_1191ba;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1191ba;
    }
L_119192:;
    if (r7 == 0) {
        goto L_1191ba;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1191ba;
    }
    r0 = *gptr<u16>(r7 + 0x2cu);  // (from the original)
    r1 = 0x18fu;  // (from the original)
    if (r0 >= r1) {
        goto L_1191ba;
    }
    r1 = r0 >> 3;
    r3 = r0 << 0x1d;  // (from the original)
    cf = r3 >> 0x1c & 1;  // (from the original)
    r3 = r3 >> 0x1d;  // (from the original)
    res = 1u;
    sco = cf;
    res = lsl_rc(res, r3 & 0xff, &sco);  // (from the original)
    r2 = u32(*gptr<u8>(r5 + r1)) | res;
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
    r6 = r4 + 0x17676u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = *gptr<u16>(r6 + 0x2cu);  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0029b840(r0, r1, r2, r3);
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
    r2 = *gptr<u16>(r1 + 0x16u);  // (from the original)
    if (r2 == r6) {
        goto L_11920e;
    }
    r1 = 0x18fu;  // (from the original)
    if (r2 >= r1) {
        goto L_11920e;
    }
    r1 = r2 >> 3;
    r7 = r2 << 0x1d;  // (from the original)
    res = 1u;
    sco = r7 >> 0x1c & 1;  // (from the original)
    res = lsl_rc(res, r7 >> 0x1d & 0xff, &sco);  // (from the original)
    r2 = res | u32(*gptr<u8>(r5 + r1));
    *gptr<u8>(r5 + r1) = u8(r2);
L_11920e:;
    r0 = r0 + 1u;
    if (r0 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_1191e2;
    }
L_119214:;
    r13 = r13 + 0xcu;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
L_119218:;
    r7 = 0u;
    guest::preempt();
    goto L_119192;
}

}  // namespace d_0011916c
GUEST_EXPORT(0x0011916d, d_0011916c::f_0011916c);

// f_00119254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119254 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)

u32 f_00119254(u32 r0) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r4 + 0x17676u;  // (from the original)
    r0 = call_00301e20(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    res = *gptr<u32>(r4 + 0x172f0u) << 0x1b;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00119254
GUEST_EXPORT(0x00119255, d_00119254::f_00119254);

// f_00119308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119308 {

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x0030aa59, u32(u32, u32, u32, u32)> call_0030aa58;  // (from the original)

u32 f_00119308(u32 r0, u32 r1_unused, u32 r2) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res = r0 + 0x19760u;  // (from the original)
    r5 = res;
    res = 1u;
    r1 = u32(s32(s8(*gptr<u8>(r5 + res))));
    res = r1;
    if (res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = r1;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r4 = 0u;
    r1 = u32(s32(s8(*gptr<u8>(r5 + 2u))));
    if (r1 < 0xau) {  // (from the original)
        r2 = 0x2518u;  // (from the original)
        r1 = r1 * r2;
        res = r1 + r0;
        r4 = res;
        if (res == 0) {
            goto L_119346;
        }
        r0 = r4;
        r0 = call_002fe470(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            goto L_119346;
        }
    }
    r0 = r4;
    if (r4 == 0) {
        goto L_119346;
    }
    r0 = call_0030aa58(r0, r1, r2, guest::cpu()->r[3]);
    if (r0 == 0) {
        goto L_11934c;
    }
    r0 = 0xau;  // (from the original)
    goto L_11934e;
L_119346:;
    r0 = ~0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_11934c:;
    r0 = 7u;
L_11934e:;
    r1 = u32(s32(s8(*gptr<u8>(r5))));
    r0 = r0 - r1;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00119308
GUEST_EXPORT(0x00119309, d_00119308::f_00119308);

// f_00119388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119388 {

inline constexpr guest::Function<0x001199ad, u32(u32, u32, u32, u32)> call_001199ac;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00318fbc, u32(u32, u32, u32, u32)> call_00318fbc;  // (from the original)

u32 f_00119388(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r4 = 0u;
    r13 = r13 - 0x60u;  // (from the original)
    r7 = 0x24e0u;  // (from the original)
    r6 = r0;
    do {
L_119392:;
        r0 = 0x2518u * r4 + r6;  // (from the original)
        r5 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_00301e20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r1 = 0x48u;  // (from the original)
            r2 = u32(s32(s8(*gptr<u8>(r5 + r7 + 0x10u))));  // (from the original)
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_00318fbc(r0, r1, r2, r3);
            r3 = 0u;
            r2 = r3;
            r1 = r13;
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_001199ac(r0, r1, r2, r3);
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
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312acc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00314cec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x18u;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r3 = r13;
    ea = r13 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r3 = r3 + 0xc;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00308efc(r0, r1, r2, r3);
    r4 = 0u;
    do {
L_119432:;
        r3 = 1u;
        r0 = *gptr<u32>(r13);
        r1 = *gptr<u32>(r13 + 4);
        r2 = *gptr<u32>(r13 + 8);
        guest::cpu()->r[13] = r13;
        r0 = call_0030d9ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r0 = 1u;
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r1 = 1u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_003014b4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r0 = 0u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00119404
GUEST_EXPORT(0x00119405, d_00119404::f_00119404);

// f_0011945c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011945c {

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00309971, u32(u32, u32, u32, u32)> call_00309970;  // (from the original)
inline constexpr guest::Function<0x0030befc, u32(u32, u32, u32, u32)> call_0030befc;  // (from the original)

u32 f_0011945c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    res = 1u;
    r5 = res;
    res = 0u;
    r6 = res;
    r4 = r0;
    res = r1;
    r0 = r1;
    if (res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1194a8;
    }
    r5 = 0u;
L_11946c:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0030befc(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0xau) {  // (from the original)
        goto L_11949a;
    }
    r1 = 0x2518u;  // (from the original)
    res = r0 * r1 + r4;
    r7 = res;
    if (res == 0) {
        goto L_11949e;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11949e;
    }
    r0 = r7;
L_11948a:;
    if (r0 == 0) {
        goto L_11949e;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00309970(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11949e;
    }
    r0 = 1u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    r0 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1194a8:;
    guest::cpu()->r[13] = r13;
    r0 = call_0030befc(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 >= 0xau) {  // (from the original)
        goto L_1194d4;
    }
    r1 = 0x2518u;  // (from the original)
    res = r0 * r1 + r4;
    r4 = res;
    if (res == 0) {
        goto L_1194d8;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1194d8;
    }
    r0 = r4;
L_1194c4:;
    if (r0 == 0) {
        goto L_1194d8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00309970(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_1194d8;
    }
    r0 = r5;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1194d4:;
    r0 = r6;
    guest::preempt();
    goto L_1194c4;
L_1194d8:;
    r0 = r6;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011945c
GUEST_EXPORT(0x0011945d, d_0011945c::f_0011945c);

// f_001194e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001194e0 {

inline constexpr guest::Function<0x0030befc, u32(u32, u32, u32, u32)> call_0030befc;  // (from the original)

u32 f_001194e0(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = r1;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0030befc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001194e0
GUEST_EXPORT(0x001194e1, d_001194e0::f_001194e0);

// f_001194ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001194ec {

inline constexpr guest::Function<0x00309a45, u32(u32, u32, u32, u32)> call_00309a44;  // (from the original)
inline constexpr guest::Function<0x0030e430, u32(u32, u32, u32, u32)> call_0030e430;  // (from the original)

u32 f_001194ec(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r5 = 0u;
    r6 = r0;
    r7 = 0x25u << 8;  // (from the original)
L_1194f6:;
    r1 = 0u;
    r0 = 0x2518u * r5 + r6;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00309a44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_119522;
    }
    r0 = r4;
    r1 = *gptr<u32>(r4 + r7 + 0x10u);  // (from the original)
    res = r1 << 0x1e >> 0x1f;  // (from the original)
    r2 = res;
    if (res != 0) {
        res = r1 << 0x1f >> 0x1f;  // (from the original)
        r1 = res;
        if (res == 0) {
            goto L_119522;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030e430(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11952c;
    }
L_119522:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_1194f6;
    }
    r0 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11952c:;
    r0 = 1u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 tpc = 0;
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = ea;
    r7 = r2;
    r5 = r0 + 0x17448u;  // (from the original)
    if (r2 == 0) {
        goto L_119582;
    }
    r1 = *gptr<u32>(r13 + 4u);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0030d9f0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    res = r0 + 1u;
    r1 = res;
    if (res != 0) {
        goto L_1195a6;
    }
    r4 = 0u;
L_11954e:;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0031917c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0030d9f4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_11957a;
    }
    r1 = *gptr<u32>(r13 + 4u);
    r0 = r6 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00318da0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_11957a;
    }
    r1 = r7;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0030d9f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    res = r0 + 1u;
    if (res != 0) {
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
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0031917c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00309ef0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_1195aa;
    }
    r1 = *gptr<u32>(r13 + 4u);
    r0 = r6 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00318da0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_1195aa;
    }
L_1195a4:;
    r0 = r4;
L_1195a6:;
    r13 = r13 + 0xcu;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
L_1195aa:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(8u)) {
        guest::preempt();
        goto L_119584;
    }
L_1195b0:;
    r13 = r13 + 0xcu;  // (from the original)
    r0 = ~0u;
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    r7 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00119534
GUEST_EXPORT(0x00119535, d_00119534::f_00119534);

// f_001195bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001195bc {


u32 f_001195bc(u32 r0, u32 r1) {
    u32 r2 = 0;
    if (r1 >= 0x10u) {  // (from the original)
        r0 = 0xffffu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = r1 << 1;
    r1 = 0x17640u;  // (from the original)
    r0 = *gptr<u16>(r2 + r0 + r1 + 0x16u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001195bc
GUEST_EXPORT(0x001195bd, d_001195bc::f_001195bc);

// f_00119898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119898 {

inline constexpr guest::Function<0x00311a34, u32(u32, u32, u32, u32)> call_00311a34;  // (from the original)

u32 f_00119898(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r6 = r0;
    r7 = 0x8eeu;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    r5 = r0 + r7;
    r4 = 0u;
    do {
L_1198a4:;
        r1 = *gptr<u32>(r13);
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00311a34(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            if (r4 >= 0x10u) {  // (from the original)
                goto L_1198c6;
            }
            r0 = r4 * 0xf2u + r6 + r7;  // (from the original)
            r13 = r13 + 0x18;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r4 = r4 + 1u;
        r5 = r5 + 0xf2u;  // (from the original)
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
L_1198c6:;
    r0 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00119898
GUEST_EXPORT(0x00119899, d_00119898::f_00119898);

// f_00119fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00119fe4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fe4c0, u32(u32, u32, u32, u32)> call_002fe4c0;  // (from the original)

u32 f_00119fe4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe4c0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r6 = 0x6214fu;  // (from the original)
    r7 = 0x88ee28u;  // (from the original)
    res = u32(*gptr<u8>(r0 + 0x80u + r6)) >> 1 << 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        if (r5 != 0) {
            r1 = 0x88ee68u;  // (from the original)
            r0 = r4 << 2;
            goto L_11a032;
        }
        r0 = *gptr<u32>(r7 + (r4 << 3));
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    if ((u32(*gptr<u8>(r0 + 0x80u + r6)) >> 2 & 1u) == 0u) {  // (from the original)
        goto L_11a036;
    }
    if (r5 != 0) {
        r0 = *gptr<u32>((r4 << 3) + r7 + 4u);
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0x88ee88u;  // (from the original)
    r0 = r4 << 2;
L_11a032:;
    r0 = *gptr<u32>(r1 + r0);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11a036:;
    r1 = r5 << 2;
    r0 = *gptr<u32>((r4 << 3) + r7 + r1);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_003091e0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_003091ec(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11a772;
    }
    r6 = 0x55a6u;  // (from the original)
    r1 = r0 + r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00309eb8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11a770;
    }
    res = u32(*gptr<u8>(r0 + 0xbcu)) >> 7;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_11a770;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r4 = r0 + 0x292a4u;  // (from the original)
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b828(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0xeu) {  // (from the original)
        goto L_11a724;
    }
    if (r0 == 0xfu) {  // (from the original)
        goto L_11a724;
    }
    if (r0 == 0x10u) {  // (from the original)
        goto L_11a728;
    }
    if (r0 != 0x11u) {  // (from the original)
        goto L_11a72e;
    }
    goto L_11a728;
L_11a724:;
    r0 = 0x173a0u;  // (from the original)
    goto L_11a72a;
L_11a728:;
    r0 = 0x173c6u;  // (from the original)
L_11a72a:;
    res = r4 + r0;
    if (res != 0) {
        goto L_11a770;
    }
L_11a72e:;
    r0 = r5 + (0x25u << 8);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    r0 = *gptr<u8>(r0 + 0xfu);  // (from the original)
    if (r0 != 0) {
        if (r0 != 1u) {
            goto L_11a770;
        }
    }
    r7 = 0x8d6cu;  // (from the original)
    r4 = 0u;
L_11a744:;
    r0 = uxtb(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00303770(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_11a774;
    }
    r0 = r5 + r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11a774;
    }
    r0 = r5 + r7;
    r1 = *gptr<u8>(r0 + 8u);
    if (r1 != 5u) {
        goto L_11a774;
    }
    if (u32(*gptr<u8>(r0 + 9u)) == 0) {
        goto L_11a774;
    }
    res = *gptr<u32>(*gptr<u32>(r13) + 0x10u) << 0x1d >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_11a774;
    }
L_11a770:;
    r0 = 0u;
L_11a772:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11a774:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_11a744;
    }
    r0 = 1u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011a6d8
GUEST_EXPORT(0x0011a6d9, d_0011a6d8::f_0011a6d8);

// f_0011b37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b37c {


u32 f_0011b37c(u32 r0, u32 r1) {
    u32 r2 = 0;
    if (r1 >= 4u) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = r1 << 2;
    r1 = 0x8c6u;  // (from the original)
    r0 = r2 + r0 + r1;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r3 = 0;
    r2 = (u32(arg0->byte_b9) >> 1) + (u32(arg0->byte_ba) << 0x1f >> 0x18);  // (from the original)
    r1 = 0x88ec60u;  // (from the original)
    r0 = 0u;
    do {
L_11b3e6:;
        r3 = *gptr<u8>(r1 + r0);
        if (!(u32(r3 >= r2) && !u32(r3 == r2))) {
            r0 = uxtb(r0);
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r3 = *gptr<u8>(r1 + r0 + 1u);
        if (!(u32(r3 >= r2) && !u32(r3 == r2))) {
            r0 = uxtb(r0 + 1u);
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(6u));
    r0 = 5u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011b3d4
GUEST_EXPORT(0x0011b3d5, d_0011b3d4::f_0011b3d4);

// f_0011b40c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b40c {


u32 f_0011b40c(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    r3 = 0x4a30u;  // (from the original)
    r1 = r1 * r3;
    r0 = r1 + r0 + r2 * u32(s32(r3) >> 1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011b40c
GUEST_EXPORT(0x0011b40d, d_0011b40c::f_0011b40c);

// f_0011b51e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b51e {

inline constexpr guest::Function<0x0031b25c, u32(u32, u32, u32, u32)> call_0031b25c;  // (from the original)

u32 f_0011b51e(u32 r0_unused, u32 r1) {
    r1 = r1 + 0x12u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    call_0031b25c(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
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
    u32 r0 = arg0.addr();
    r0 = u32(arg0->half_1aa) << 0x19 >> 0x1f;  // (from the original)
    return r0;
}

}  // namespace d_0011b530
GUEST_EXPORT(0x0011b531, d_0011b530::f_0011b530);

// f_0011b53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b53c {


u32 f_0011b53c(u32 r0, u32 r1) {
    u32 res = 0;
    u32 sco = 0;
    u32 cf = guest::cpu()->cf;
    res = 2u;
    sco = cf;
    res = lsl_rc(res, r1 & 0xff, &sco);  // (from the original)
    r1 = uxth(res);
    if (r1 == 2u) {
        goto L_11b552;
    }
    if (r1 == 4u) {
        goto L_11b552;
    }
    if (r1 == 8u) {
        goto L_11b552;
    }
    if (r1 != 0x10u) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_11b552:;
    res = u32(*gptr<u16>(r0 + 0x1aau)) & r1;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011b53c
GUEST_EXPORT(0x0011b53d, d_0011b53c::f_0011b53c);

// f_0011b560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b560 {

inline constexpr guest::Function<0x0030e42c, u32(u32, u32, u32, u32)> call_0030e42c;  // (from the original)

u32 f_0011b560(u32 r0_unused, u32 r1) {
    r1 = r1 + 0x24u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    call_0030e42c(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
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
    u32 r0 = arg0.addr();
    r0 = u32(arg0->half_1aa) << 0x1a >> 0x1f;  // (from the original)
    return r0;
}

}  // namespace d_0011b56a
GUEST_EXPORT(0x0011b56b, d_0011b56a::f_0011b56a);

// f_0011b576: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b576 {

inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x0030ead0, u32(u32, u32, u32, u32)> call_0030ead0;  // (from the original)

u32 f_0011b576(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r5 = 0u;
    r6 = 0x21u;  // (from the original)
    r7 = r0;
    r4 = r5;
L_11b580:;
    r1 = r4;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0030ead0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11b59a;
    }
    r5 = r5 + 1u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f4(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_11b59a;
    }
    r6 = r4;
L_11b59a:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0x21u)) {  // (from the original)
        guest::preempt();
        goto L_11b580;
    }
    r0 = r6;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    r13 = ea;
    r5 = r1;
    r7 = r2;
    r1 = arg0->word_0;
    r4 = ~0u;
    r2 = 6u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b3b2(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r5);
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001063dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    res = r0 + 1u;
    r0 = res;
    if (res == 0) {
        goto L_11b810;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0031b578(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r0 + 4u);
    r4 = *gptr<u32>(r0);
    r5 = r0;
    r0 = r4 + (r1 << 3);
L_11b7f8:;
    if (r0 != r4) {
        goto L_11b81a;
    }
    r1 = r1 + 1u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0011c220(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = *gptr<u32>(r5) + (*gptr<u32>(r5 + 4u) << 3) - 8u;
    goto L_11b824;
L_11b810:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b3ea(r0, r1, r2, r3);
    r0 = r4;
    r1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11b81a:;
    res = *gptr<u32>(r4) + 1u;
    r2 = res;
    if (res == 0) {
        goto L_11b824;
    }
    r4 = r4 + 8u;
    guest::preempt();
    goto L_11b7f8;
L_11b824:;
    r1 = r7;
    r0 = r4 + 4u;
    *gptr<u32>(r4) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_0031b5b8(r0, r1, r2, r3);
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
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r0 = call_0031b578(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = *gptr<u32>(r0 + 4u);
    if (s32(r0) <= s32(r5)) {
        goto L_11b870;
    }
    r5 = r5 << 3;
    r0 = *gptr<u32>(*gptr<u32>(r4) + r5);
    res = r0 + 1u;
    r1 = res;
    if (res == 0) {
        goto L_11b870;
    }
    r0 = call_00106940(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r4) + r5;
    r1 = ~0u;
    *gptr<u32>(r0) = u32(r1);
    r0 = call_0031b5ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = *gptr<u32>(r4) + r5 + 4u;
    r0 = call_0031b5b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_11b870:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011b836
GUEST_EXPORT(0x0011b837, d_0011b836::f_0011b836);

// f_0011b872: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b872 {

inline constexpr guest::Function<0x0031b579, u32(u32, u32, u32, u32)> call_0031b578;  // (from the original)
inline constexpr guest::Function<0x0031b5ed, u32(u32, u32, u32, u32)> call_0031b5ec;  // (from the original)

u32 f_0011b872(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r0 = call_0031b578(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + 4u);
    if (s32(r1) > s32(r4)) {
        r1 = r4 << 3;
        r0 = *gptr<u32>(r0) + r1 + 4u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0031b5ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011b872
GUEST_EXPORT(0x0011b873, d_0011b872::f_0011b872);

// f_0011b890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011b890 {

inline constexpr guest::Function<0x001063bd, u32(u32, u32, u32, u32)> call_001063bc;  // (from the original)
inline constexpr guest::Function<0x0031b579, u32(u32, u32, u32, u32)> call_0031b578;  // (from the original)

u32 f_0011b890(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r2;
    r6 = r1;
    r5 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b578(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0 + 4u);
    if (s32(r1) <= s32(r6)) {
        goto L_11b8c2;
    }
    r0 = *gptr<u32>(*gptr<u32>(r0) + (r6 << 3));
    res = r0 + 1u;
    r1 = res;
    if (res == 0) {
        goto L_11b8c2;
    }
    *gptr<u32>(r13) = u32(0u);
    r2 = r5;
    r1 = r4;
    r3 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001063bc(r0, r1, r2, r3);
    r1 = r13;
    if (r0 != r1) {
        goto L_11b8c4;
    }
L_11b8c2:;
    r0 = 0u;
L_11b8c4:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    r13 = ea;
    r4 = r1;
    r5 = r0;
    if (*gptr<u32>(arg1->word_0 + 0x18u) == 0) {  // (from the original)
        goto L_11bab6;
    }
    r2 = r13;
    r1 = *gptr<u32>(arg1->word_0 + 0x18u);  // (from the original)
L_11baae:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00307650(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    r13 = ea;
    r1 = 0x11bb98u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa90c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11bb8e;
    }
    r0 = r4;
    r1 = 0x11bb9cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fa90c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11bb8e;
    }
    r0 = 1u << 9;
    guest::cpu()->r[13] = r13;
    r0 = call_003075cc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r2 = 2u;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b3b2(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r6 = 0x10u;  // (from the original)
    r5 = 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7a10(r0, r1, r2, r3);
    r3 = r0;
L_11bb16:;
    res = 0u;
    r1 = res;
    r0 = *gptr<u8>(*gptr<u32>(r3) + r4);
    res = r0 << 0x1f >> 0x1f;  // (from the original)
    if (res != 0) {
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
    r2 = r0 << 2 ^ r0;
    r0 = 0x80u;  // (from the original)
    if ((r2 & r0) != 0) {
        r1 = r1 | r0 << 1;
    }
    r0 = r4 << 1;
    r4 = r4 + 1u;
    *gptr<u16>(r7 + r0) = u16(r1);
    res = r4 - 0x100u;  // (from the original)
    if (res != 0) {
        guest::preempt();
        goto L_11bb16;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b3ea(r0, r1, r2, r3);
    r0 = r7;
    r1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11bb8e:;
    r0 = 0x8c8680u;  // (from the original)
    r1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    r13 = ea;
    r5 = r2;
    r6 = r0;
    r4 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0011badc(r0, r1, r2, r3);
    r1 = r0;
    r3 = r5;
    r2 = 0u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0031ba1c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0) = u32(0x90b570u);  // (from the original)
    r6 = r0;
    if (*gptr<u32>(r0 + 0x14u) == 0x8c8680u) {  // (from the original)
        goto L_11bcc6;
    }
    *gptr<u8>(r6 + 0x18u) = u8(1u);  // (from the original)
    r2 = 2u;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b3b2(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r5 = 0xffu;  // (from the original)
L_11bbe2:;
    r2 = r4 << 0x18 >> 0x18;  // (from the original)
    r1 = 0x10u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_11bc06;
    }
    goto L_11bc0c;
L_11bbf4:;
    r2 = r5 << 0x18 >> 0x18;  // (from the original)
    r1 = 0x10u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_11bc12;
    }
    r5 = r5 - 1u;
L_11bc06:;
    if (u32(r5 >= r4) && !u32(r5 == r4)) {
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
    r0 = r4 - 0x61u;  // (from the original)
    if (u32(r0 >= 0x19u) && !u32(r0 == 0x19u)) {  // (from the original)
        goto L_11bc4c;
    }
    r2 = r4 << 0x18 >> 0x18;  // (from the original)
    r1 = 0x10u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11bc4c;
    }
    r0 = r4 - 0x20u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0);
    r2 = r0 << 0x18 >> 0x18;  // (from the original)
    r1 = 8u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11bc4c;
    }
    r0 = *gptr<u32>(r13 + 8u);
    goto L_11bc4e;
L_11bc4c:;
    r0 = r4;
L_11bc4e:;
    *gptr<u8>(r7) = u8(r0);
    r7 = r7 + 1u;
    r4 = r4 + 1u;
L_11bc54:;
    if (!u32(r4 >= r5) || u32(r4 == r5)) {
        guest::preempt();
        goto L_11bc1a;
    }
    r4 = 0u;
    r5 = 0xffu;  // (from the original)
L_11bc5c:;
    r2 = r4 << 0x18 >> 0x18;  // (from the original)
    r1 = 8u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_11bc80;
    }
    goto L_11bc86;
L_11bc6e:;
    r2 = r5 << 0x18 >> 0x18;  // (from the original)
    r1 = 8u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_11bc8c;
    }
    r5 = r5 - 1u;
L_11bc80:;
    if (u32(r5 >= r4) && !u32(r5 == r4)) {
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
    r0 = r4 - 0x41u;  // (from the original)
    if (u32(r0 >= 0x19u) && !u32(r0 == 0x19u)) {  // (from the original)
        goto L_11bcc8;
    }
    r2 = r4 << 0x18 >> 0x18;  // (from the original)
    r1 = 8u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11bcc8;
    }
    r0 = r4 + 0x20u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0);
    r2 = r0 << 0x18 >> 0x18;  // (from the original)
    r1 = 0x10u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b758(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11bcc8;
    }
    r0 = *gptr<u32>(r13 + 8u);
    goto L_11bcca;
L_11bcc6:;
    goto L_11bcda;
L_11bcc8:;
    r0 = r4;
L_11bcca:;
    *gptr<u8>(r7) = u8(r0);
    r7 = r7 + 1u;
    r4 = r4 + 1u;
L_11bcd0:;
    if (!u32(r4 >= r5) || u32(r4 == r5)) {
        guest::preempt();
        goto L_11bc94;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0031b3ea(r0, r1, r2, r3);
L_11bcda:;
    r0 = r6;
    r1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r13 = ea;
    r3 = r2;
    r4 = 0u;
    r7 = r2;
    r6 = r0;
    r5 = r1;
    r2 = r1;
    r1 = r4;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0010bfbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        goto L_11bd32;
    }
    res = r5;
    if (res >> 0x1f == (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
        if (r5 < 0x17u) {  // (from the original)
            goto L_11bd20;
        }
    }
    r5 = 0u;
L_11bd20:;
    r2 = *gptr<u32>(0x8c8428u + (r5 << 2));  // (from the original)
    r1 = 0u;
    r3 = r7;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00307760(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
L_11bd32:;
    r0 = *gptr<u32>(r6 + 4u);
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fa9d0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fa9d0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r5 + r0 + 1u;
        guest::cpu()->r[13] = r13;
        r0 = call_003075cc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r6 + 4u);
        guest::cpu()->r[13] = r13;
        r0 = call_00307990(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_001019c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        r0 = *gptr<u32>(r6 + 4u);
        guest::cpu()->r[13] = r13;
        r0 = call_002f88b8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002f88b8(r0, r1, r2, r3);
        r4 = r5;
    }
    *gptr<u32>(r6 + 4u) = u32(r4);
    goto L_11bd7a;
L_11bd7a:;
    r0 = r6;
    r1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011bcfc
GUEST_EXPORT(0x0011bcfd, d_0011bcfc::f_0011bcfc);

// f_0011bd84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bd84 {

inline constexpr guest::Function<0x0011c00d, u32(u32, u32, u32, u32)> call_0011c00c;  // (from the original)

u32 f_0011bd84(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0011c00c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0) = u32(0x90b5a4u);  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 4u) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_0 = u32(0x90b5e8u);  // (from the original)
    r0 = r4 + 0x14u;  // (from the original)
    r0 = call_003076c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x14u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = ~0u;
    arg0->word_0 = u32(r0);
    r0 = call_0031b5ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r4 + 4u;
    r0 = call_0011bf9a(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 4u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = arg1.addr();
    r1 = arg1->word_0;
    arg0->word_0 = u32(r1);
    *gptr<u32>(r1 + 0x1cu) = u32(*gptr<u32>(r1 + 0x1cu) + 1u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0011bf9a
GUEST_EXPORT(0x0011bf9b, d_0011bf9a::f_0011bf9a);

// f_0011bfa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bfa8 {

inline constexpr guest::Function<0x0031bebd, u32(u32, u32, u32, u32)> call_0031bebc;  // (from the original)

u32 f_0011bfa8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0x981fc8u;  // (from the original)
    r0 = *gptr<u32>(r4);
    if (r0 == 0) {
        r0 = call_0031bebc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = *gptr<u32>(r4);
    *gptr<u32>(r5) = u32(r1);
    *gptr<u32>(r1 + 0x1cu) = u32(*gptr<u32>(r1 + 0x1cu) + 1u);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011bfa8
GUEST_EXPORT(0x0011bfa9, d_0011bfa8::f_0011bfa8);

// f_0011bfe2: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bfe2 {

inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_003076c8;  // (from the original)

u32 f_0011bfe2(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x10u;  // (from the original)
    r0 = call_003076c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0011bfe2
GUEST_EXPORT(0x0011bfe3, d_0011bfe2::f_0011bfe2);

// f_0011bffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011bffc {

inline constexpr guest::Function<0x0010c235, u32(u32, u32, u32, u32)> call_0010c234;  // (from the original)

u32 f_0011bffc(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x10u;  // (from the original)
    r0 = call_0010c234(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
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
    u32 r1 = 0;
    r1 = 0x90b6a4u;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0011c00c
GUEST_EXPORT(0x0011c00d, d_0011c00c::f_0011c00c);

// f_0011c0fa: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c0fa {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0011c0fa(u32 arg0_value) {
    u32 r0 = arg0_value;
    u32 r2 = 0;
    u32 r3 = 0;
    gptr<u8> arg0 = gptr<u8>(arg0_value);
    guest::cpu()->r[13] -= 8u;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r2 = *gptr<u32>(arg0.addr() + 0xfffffff8u);  // (from the original)
    r3 = *gptr<u32>(arg0.addr() + 0xfffffffcu);  // (from the original)
    r0 = call_002f76ac(r0, guest::cpu()->r[1], r2, r3);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0011c0fa
GUEST_EXPORT(0x0011c0fb, d_0011c0fa::f_0011c0fa);

// f_0011c120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c120 {

inline constexpr guest::Function<0x0011c02d, u32(u32, u32, u32, u32)> call_0011c02c;  // (from the original)

u32 f_0011c120(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    r13 = ea;
    r5 = 0u;
    r7 = r13;
    r6 = 0x2f88b8u;  // (from the original)
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    *gptr<u32>(r7) = u32(r4);
    *gptr<u32>(r7 + 4) = u32(r5);
    *gptr<u32>(r7 + 8) = u32(r6);
    r7 = r7 + 0xc;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0011c02c(guest::cpu()->r[0], r1, r2, r3);
    r1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
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
    u32 r0 = arg0.addr();
    r1 = r1 << 2;
    r0 = arg0->word_0 + r1;
    guest::cpu()->r[1] = r1;
    return r0;
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
    r5 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0011bdf0(r0, r1, r2, r3);
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r3 = 0x11be0bu;  // (from the original)
    r2 = 0x11bdf1u;  // (from the original)
    r1 = r7;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00307838(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0);
    r4 = *gptr<u32>(r5 + 4u);
    if (r4 >= r7) {
        r4 = r7;
    }
    r6 = *gptr<u32>(r5);
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r4 << 3);  // (from the original)
    for (;;) {
L_11c260:;
        if (!(*gptr<u32>(r5) + *gptr<u32>(r13 + 0x14u) != r6)) {  // (from the original)
            break;
        }
L_11c250:;
        r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0031c1c8(r0, r1, r2, r3);
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
        r0 = (r4 << 3) + *gptr<u32>(r13 + 8u);
        r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        r4 = r4 + 1u;
        guest::cpu()->r[13] = r13;
        r0 = call_0031c1c8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    }
    r1 = 0x11be0bu;  // (from the original)
    r0 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_00307888(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r5 + 4u) = u32(r7);
    r4 = *gptr<u32>(r13 + 8u);
    r0 = r13 + 4u;
    *gptr<u32>(r5) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0031b854(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011c220
GUEST_EXPORT(0x0011c221, d_0011c220::f_0011c220);

// f_0011c464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c464 {

inline constexpr guest::Function<0x0031c311, u32(u32, u32, u32, u32)> call_0031c310;  // (from the original)
inline constexpr guest::Function<0x0031c31d, u32(u32, u32, u32, u32)> call_0031c31c;  // (from the original)

u32 f_0011c464(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 tpc = 0;
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r2 = r1 >> 3;
    r13 = ea - 8u;
    r6 = r0;
    r5 = r3;
    r4 = (r1 >> 1) + r1 + r2;
    r1 = r1 + 0x20u;  // (from the original)
    if (!(!u32(r1 >= r4) || u32(r1 == r4))) {
        r4 = r1;
    }
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0031c310(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r0);
    r2 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0031c31c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0xcu;  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r6 = *gptr<u32>(r13 + 8);
    tpc = *gptr<u32>(r13 + 0xc);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011c464
GUEST_EXPORT(0x0011c465, d_0011c464::f_0011c464);

// f_0011c614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011c614 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x0031c3a9, u32(u32, u32, u32, u32)> call_0031c3a8;  // (from the original)
inline constexpr guest::Function<0x0031c771, u32(u32, u32, u32, u32)> call_0031c770;  // (from the original)

u32 f_0011c614(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r4 = r0;
    r5 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r3 = r5;
        r2 = *gptr<u32>(*gptr<u32>(r4) + 0xfffffffcu);  // (from the original)
        *gptr<u32>(r13) = u32(r0);
        r1 = 0u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0031c770(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r4) - 0xcu;  // (from the original)
    r1 = *gptr<u32>(r0) + 1u;
    if (r1 == 1u) {
        goto L_11c652;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031c3a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(0xaf7f3cu);  // (from the original)
L_11c64e:;
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11c652:;
    r1 = 0u;
    *gptr<u32>(r0 + 8u) = u32(r1);
    r0 = *gptr<u32>(r4);
    *gptr<u8>(r13) = u8(r1);
    *gptr<u8>(r0) = u8(r1);
    guest::preempt();
    goto L_11c64e;
}

}  // namespace d_0011c614
GUEST_EXPORT(0x0011c615, d_0011c614::f_0011c614);

// f_0011cb18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cb18 {

inline constexpr guest::Function<0x0011d7ec, u32(u32, u32, u32, u32)> call_0011d7ec;  // (from the original)
inline constexpr guest::Function<0x00142104, u32(u32, u32, u32, u32)> call_00142104;  // (from the original)
inline constexpr guest::Function<0x002f91d4, u32(u32, u32, u32, u32)> call_002f91d4;  // (from the original)

u32 f_0011cb18() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r1 = 0x4000027u;  // (from the original)
    r0 = 0u;
    r0 = call_002f91d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r1 = 0u;
    r0 = r1;
    r0 = call_00142104(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u32>(r4 + 4u) = u32(r0 + 1u);
    r0 = r1;
    r0 = call_0011d7ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    guest::cpu()->r[13] -= 8u;
    r0 = call_0011df2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    r0 = call_0011d2c4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    r0 = call_0011cc54(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_0011de98(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0011cb6c
GUEST_EXPORT(0x0011cb6c, d_0011cb6c::f_0011cb6c);

// f_0011cb8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cb8c {

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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0011d0e0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = 0x953374u;  // (from the original)
    *gptr<u32>(r4) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_0011d0f0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 4u) = u32(r0);
    r1 = *gptr<u32>(r4);
    r0 = r1 - r0;
    *gptr<u32>(r4 + 8u) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_0011d258(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x31b8000u;  // (from the original)
    if (r0 != 0) {
        r0 = r1;
        guest::cpu()->r[13] = r13;
        r0 = call_0011d144(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r13) = u32(r0);
        *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r4 + 8u) + 0xfce48000u >> 0xc << 0xc);  // (from the original)
    } else {
        r0 = r1;
        guest::cpu()->r[13] = r13;
        r0 = call_0011d144(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r13) = u32(r0);
        *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r4 + 8u) + 0xfce48000u >> 0xc << 0xc);  // (from the original)
    }
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0011d048(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0011d038(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = 0x8000000u;  // (from the original)
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0011d224(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = 0x2000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0011d2fc(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0011d0e0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0011f290(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0013e154(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r3 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    return call_0011d038(r0, r1, guest::cpu()->r[2], r3);
}

}  // namespace d_0011cb8c
GUEST_EXPORT(0x0011cb8c, d_0011cb8c::f_0011cb8c);

// f_0011cc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cc54 {

inline constexpr guest::Function<0x0011dff4, u32(u32, u32, u32, u32)> call_0011dff4;  // (from the original)
inline constexpr guest::Function<0x0011e170, u32(u32, u32, u32, u32)> call_0011e170;  // (from the original)
inline constexpr guest::Function<0x0011e1a4, u32(u32, u32, u32, u32)> call_0011e1a4;  // (from the original)
inline constexpr guest::Function<0x0011e378, u32(u32, u32, u32, u32)> call_0011e378;  // (from the original)
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> call_0012a518;  // (from the original)
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> call_0012ab78;  // (from the original)

u32 f_0011cc54(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0011e170(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r4 = r4 & ~7u;
    *gptr<u8>(0x974ab3u) = u8(1u);  // (from the original)
    r0 = 0xadfa4cu;  // (from the original)
    r1 = 0x100u;  // (from the original)
    r0 = call_0011dff4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0xfu;  // (from the original)
    r1 = r4;
    r0 = 0x300u;  // (from the original)
    r0 = call_0011e1a4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r4 = 0u;
    r0 = call_0012a518(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4;
    r0 = call_0011e378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_0012ab78(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011cc54
GUEST_EXPORT(0x0011cc54, d_0011cc54::f_0011cc54);

// f_0011cfa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cfa8 {

inline constexpr guest::Function<0x0011e838, u32(u32, u32, u32, u32)> call_0011e838;  // (from the original)

u32 f_0011cfa8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0011e838(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u32>(r0) = u32(0x8ee848u);  // (from the original)
    *gptr<u8>(r0 + 0x168u) = u8(1u);  // (from the original)
    *gptr<u8>(r0 + 0x169u) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x16cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x170u) = u32(r1);  // (from the original)
    r1 = 0x9529c8u;  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011cfa8
GUEST_EXPORT(0x0011cfa8, d_0011cfa8::f_0011cfa8);

// f_0011cfe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011cfe4 {

inline constexpr guest::Function<0x0011ddb0, u32(u32, u32, u32, u32)> call_0011ddb0;  // (from the original)
inline constexpr guest::Function<0x0011de28, u32(u32, u32, u32, u32)> call_0011de28;  // (from the original)

u32 f_0011cfe4(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_0011de28(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = 0x974f00u;  // (from the original)
    r0 = r0 + (r0 << 2) << 1;
    r1 = u32(s32(r0) >> 0x1f);  // (from the original)
    ea = r4 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_0011ddb0(r0, r1, r2, guest::cpu()->r[3]);
    zf = r0 == 0;
    r0 = 1u;
    if (!zf) {
        *gptr<u8>(r4 + 1u) = u8(r0);
    }
    r1 = u32(*gptr<u8>(r4 + 1u));
    if (r1 != 0) {
        *gptr<u8>(r4) = u8(r0);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = *gptr<u32>(r4 + 0x1cu) | *gptr<u32>(r4 + 0x18u);  // (from the original)
    r1 = res;
    if (res == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u8>(r4) = u8(r0);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011cfe4
GUEST_EXPORT(0x0011cfe4, d_0011cfe4::f_0011cfe4);

// f_0011d048: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d048 {

inline constexpr guest::Function<0x0011d834, u32(u32, u32, u32, u32)> call_0011d834;  // (from the original)

u32 f_0011d048(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    res = r0 << 0x14;  // (from the original)
    zf = res == 0;
    r0 = res;
    if (!zf) {
        r0 = 0xe0e01bf2u;  // (from the original)
    }
    r13 = r13 - 0x18u;  // (from the original)
    if (!zf) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r5 = 0x974f54u;  // (from the original)
    r0 = *gptr<u32>(r5 + 8u);
    if (!u32(r4 >= r0) || u32(r4 == r0)) {
        goto L_11d0a4;
    }
    r2 = 3u;
    r1 = r0 + 0x8000000u;  // (from the original)
    r3 = r4 - r0;
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4u) = u32(r2);
    r2 = 0u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0011d834(r0, r1, r2, r3);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_11d098:;
    *gptr<u32>(r5 + 8u) = u32(r4);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11d0a4:;
    r12 = 0u;
    r3 = r0 - r4;
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r12);
    r1 = r4 + 0x8000000u;  // (from the original)
    r2 = r12;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0011d834(r0, r1, r2, r3);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        guest::preempt();
        goto L_11d098;
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
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r2 = 0xe0e01bf2u;  // (from the original)
    res = r0 << 0x14;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    if (res == 0) {
        r5 = 0x974f54u;  // (from the original)
        r0 = *gptr<u32>(r5 + 4u);
        r1 = *gptr<u32>(r5);
        if (!u32(r4 >= r0) || u32(r4 == r0)) {
            goto L_11d1e4;
        }
        if (r0 == 0) {
            goto L_11d194;
        }
        if (((r0 | r4) & 0xfffffu) == 0u) {  // (from the original)
            goto L_11d194;
        }
    }
    r0 = r2;
L_11d18c:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11d194:;
    zf = r0 == 0;
    r3 = r4 - r0;
    if (!zf) {
        r1 = r1 + r0;
    }
    r2 = 3u;
    *gptr<u32>(r13) = u32(r2 + 0x10000u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r2);
    if (zf) {
        r1 = 0u;
    }
    r2 = 0u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0011d834(r0, r1, r2, r3);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_11d18c;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 == 0) {
        r1 = *gptr<u32>(r13 + 8u);
        *gptr<u32>(r5) = u32(r1);
    }
L_11d1d8:;
    *gptr<u32>(r5 + 4u) = u32(r4);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_11d1e4:;
    r6 = 0u;
    r3 = r0 - r4;
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r6);
    r1 = r1 + r4;
    r2 = r6;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0011d834(r0, r1, r2, r3);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_11d18c;
    }
    if (r4 == 0) {
        *gptr<u32>(r5) = u32(r6);
    }
    guest::preempt();
    goto L_11d1d8;
}

}  // namespace d_0011d144
GUEST_EXPORT(0x0011d144, d_0011d144::f_0011d144);

// f_0011d258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d258 {

inline constexpr guest::Function<0x0011e180, u32(u32, u32, u32, u32)> call_0011e180;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_0011d258(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = 0x974f48u;  // (from the original)
    if ((*gptr<u32>(r4 + 4u) & 1u) != 0) {
        goto L_11d2b0;
    }
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_11d2b0;
    }
    r1 = 0x400024bu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0011e180(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_00134250(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = u32(*gptr<u8>(r13));
    if (r0 != 0) {
        r0 = 1u;
    }
    *gptr<u8>(r4) = u8(r0);
L_11d2b0:;
    r0 = u32(s32(s8(*gptr<u8>(r4))));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011d258
GUEST_EXPORT(0x0011d258, d_0011d258::f_0011d258);

// f_0011d2d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d2d4 {

inline constexpr guest::Function<0x0011f8d4, u32(u32, u32, u32, u32)> call_0011f8d4;  // (from the original)
inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32, u32)> call_0012f598;  // (from the original)

u32 f_0011d2d4(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0011f8d4(r0, r1, r2, guest::cpu()->r[3]);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x11d2ecu;  // (from the original)
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_0012f598(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0011d2d4
GUEST_EXPORT(0x0011d2d4, d_0011d2d4::f_0011d2d4);

// f_0011d350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d350 {

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
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    goto L_11d350;
L_11d350:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1 = 0x3cd800u;  // (from the original)
    r0 = 0xa1867cu;  // (from the original)
    r0 = call_0011da44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0xa1867cu;  // (from the original)
    r0 = call_00100400(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = *gptr<u32>(0x975338u);  // (from the original)
    r0 = call_003045a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    r6 = 0u;
    r0 = r4;
    r0 = call_00100048(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_0010018c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_001002e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_00100214(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_00100448(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_00100528(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_001003bc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_001004dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(0x952c68u);  // (from the original)
    r0 = call_001005c0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_00100490(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_00100574(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_001001d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_001000c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_0010032c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_00100104(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_001002a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_00100148(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0xbb800u;  // (from the original)
    r1 = r5;
    r0 = call_0011eaac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r0 = call_00100088(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_00100378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(0x100261u, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0011d350
GUEST_EXPORT(0x0011d350, d_0011d350::f_0011d350);

// f_0011d458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d458 {

inline constexpr guest::Function<0x0011d258, u32(u32, u32, u32, u32)> call_0011d258;  // (from the original)

u32 f_0011d458() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0xa78000u;  // (from the original)
    r0 = *gptr<u32>(0x953378u);  // (from the original)
    return call_0011d258(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r2 = arg1->word_4;
    r3 = 4u;
    arg0->word_0 = u32(arg1->word_0);
    arg0->word_4 = u32(r2);
    r0 = r0 + 8;
    r2 = 0x14u;  // (from the original)
    r1 = 0x11e460u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0u;
    ea = r0 + 0x50u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x54u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x58u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x5cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x60u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x64u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x68u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = ea + 4u;
    *gptr<u32>(ea) = u32(~0u);
    r0 = ea - 0x74u;  // (from the original)
    *gptr<u8>(r0 + 0x78u) = u8(1u);  // (from the original)
    *gptr<u32>(r0 + 0x7cu) = u32(r1);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r1 = 0;
    r1 = 0x3000000u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(0u);
    guest::cpu()->r[1] = r1;
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
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(~0u);
    guest::cpu()->r[1] = r1;
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
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(arg0->word_0 + 0x14u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011d4fc
GUEST_EXPORT(0x0011d4fc, d_0011d4fc::f_0011d4fc);

// f_0011d61c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d61c {

inline constexpr guest::Function<0x0011dc88, u32(u32, u32, u32, u32)> call_0011dc88;  // (from the original)
inline constexpr guest::Function<0x0011fad0, u32(u32, u32, u32, u32)> call_0011fad0;  // (from the original)

u32 f_0011d61c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0011fad0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = 0x95721cu;  // (from the original)
    *gptr<u8>(r4) = u8(r0);
    r0 = call_0011dc88(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 2u;
    }
    *gptr<u8>(r4 + 1u) = u8(r0);
    if (zf) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    zf = r0 == 5u;
    if (!zf) {
        zf = r0 == 9u;
    }
    if (zf) {
        guest::cpu()->r[13] += 8u;
        return r0;
    } else {
        r0 = 1u;
        *gptr<u8>(r4 + 1u) = u8(r0);
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0011d61c
GUEST_EXPORT(0x0011d61c, d_0011d61c::f_0011d61c);

// f_0011d65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d65c {


u32 f_0011d65c() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x951670u;  // (from the original)
    r0 = 0u;
    *gptr<u32>(r1) = u32(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011d65c
GUEST_EXPORT(0x0011d65c, d_0011d65c::f_0011d65c);

// f_0011d670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d670 {

inline constexpr guest::Function<0x0011e8cc, u32(u32, u32, u32, u32)> call_0011e8cc;  // (from the original)
inline constexpr guest::Function<0x00121824, u32(u32, u32, u32, u32)> call_00121824;  // (from the original)
inline constexpr guest::Function<0x00121860, u32(u32, u32, u32, u32)> call_00121860;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)

u32 f_0011d670(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = 0x9047f8u;  // (from the original)
    r4 = 0u;
    r2 = r0;
    *gptr<u32>(r13 + 0xcu) = u32(0x11d788u);  // (from the original)
    r0 = 0x6af000u;  // (from the original)
    r1 = r13 + 8u;
    r3 = 1u;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 8u) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_002f6e78(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r1 = r0;
    r2 = 4u;
    r0 = 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x90abc0u;  // (from the original)
    *gptr<u8>(r0 + 4u) = u8(r4);
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 0xcu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r4);  // (from the original)
    r4 = r0;
    *gptr<u32>(r0 + 8u) = u32(r6);
    r0 = 0x20000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00121860(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = 0x20000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00121824(r0, r1, r2, r3);
    r1 = r0 - r6;
    *gptr<u32>(r13 + 0xcu) = u32(0x11d7a0u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r5);
    r2 = r13 + 8u;
    r3 = 0x7800u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r4 + 8u));
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0011e8cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    r0 = 0x30000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00121860(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = 0x30000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00121824(r0, r1, r2, r3);
    r1 = r0 - r6;
    *gptr<u32>(r13 + 0xcu) = u32(0x11d7acu);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r5);
    r2 = r13 + 8u;
    r3 = 0x7800u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r4 + 8u));
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0011e8cc(r0, r1, r2, r3);
    *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(*gptr<u32>(r4 + 8u));  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(*gptr<u32>(r4 + 0xcu));  // (from the original)
    r1 = 0x952b8cu;  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(r0);  // (from the original)
    r0 = r4;
    *gptr<u32>(r1) = u32(r4);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011d670
GUEST_EXPORT(0x0011d670, d_0011d670::f_0011d670);

// f_0011d7bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011d7bc {

inline constexpr guest::Function<0x0011db9c, u32(u32, u32, u32, u32)> call_0011db9c;  // (from the original)
inline constexpr guest::Function<0x0011dc5c, u32(u32, u32, u32, u32)> call_0011dc5c;  // (from the original)
inline constexpr guest::Function<0x0011dedc, u32(u32, u32, u32, u32)> call_0011dedc;  // (from the original)

u32 f_0011d7bc(u32 r0, u32 r1) {
    u32 res = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0011dedc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_0011dc5c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x952ad8u;  // (from the original)
    r0 = call_0011db9c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0 & 0x80000000u;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x952ad8u;  // (from the original)
    r0 = 0u;
    *gptr<u16>(r1) = u16(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r0 = 0;
    u32 r1 = arg1.addr();
    guest::cpu()->r[13] -= 8u;
    if (r1 == 0) {
        r0 = 0x944408u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (u32(arg1->byte_0) == 0) {
        r0 = 0x944408u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0x944400u;  // (from the original)
    r0 = call_002fa90c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0x944408u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    return r0;
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

inline constexpr guest::Function<0x00128cc4, u32(u32, u32, u32, u32)> call_00128cc4;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)

u32 f_0011da44(gptr<Object_0011da44_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(*gptr<u8>(0x974f60u));  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = arg0->word_8;
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r1 + 0xfffu;  // (from the original)
    r1 = r4;
    r2 = r0 >> 0xc;  // (from the original)
    r0 = 0xae0f64u;  // (from the original)
    r2 = r2 << 0xc;  // (from the original)
    r3 = 0u;
    r0 = call_00128cc4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 0xd8601837u;  // (from the original)
        r0 = call_0012f204(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = 0u;
    *gptr<u8>(r4 + 0x10u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011da44
GUEST_EXPORT(0x0011da44, d_0011da44::f_0011da44);

// f_0011daac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011daac {

inline constexpr guest::Function<0x0011f00c, u32(u32, u32, u32, u32)> call_0011f00c;  // (from the original)

u32 f_0011daac(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = 0x97dff8u;  // (from the original)
    r0 = *gptr<u32>(r4);
    if (r0 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13) = u32(0u);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0011f00c(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r0 = r0 & 0x80000000u;  // (from the original)
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = *gptr<u32>(r13);
        *gptr<u32>(r4) = u32(r0);
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011daac
GUEST_EXPORT(0x0011daac, d_0011daac::f_0011daac);

// f_0011db88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011db88 {


u32 f_0011db88() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = guest::cpu()->tls;
    r1 = 0x974f64u;  // (from the original)
    *gptr<u32>(r1 + 4u) = u32(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011db88
GUEST_EXPORT(0x0011db88, d_0011db88::f_0011db88);

// f_0011db9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011db9c {

inline constexpr guest::Function<0x0011f220, u32(u32, u32, u32, u32)> call_0011f220;  // (from the original)
inline constexpr guest::Function<0x0011f31c, u32(u32, u32, u32, u32)> call_0011f31c;  // (from the original)
inline constexpr guest::Function<0x0011f6e8, u32(u32, u32, u32, u32)> call_0011f6e8;  // (from the original)
inline constexpr guest::Function<0x001239e8, u32(u32, u32, u32, u32)> call_001239e8;  // (from the original)

u32 f_0011db9c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    r5 = r0;
    r0 = 0u;
    r1 = 0x8fab74u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0);
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r0);  // (from the original)
    r0 = *gptr<u32>(r1);
    r2 = r13;
    *gptr<u32>(r13) = u32(r0);
    r3 = *gptr<u32>(r0 - 0x30u);  // (from the original)
    *gptr<u32>(r13 + r3) = u32(*gptr<u32>(r1 + 0x20u));  // (from the original)
    r0 = *gptr<u32>(r1 + 0x24u);  // (from the original)
    r1 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_0011f6e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0011f31c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001239e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u16>(r5) = u16(u32(*gptr<u16>(r13 + 0x20u)));  // (from the original)
    if (r4 != 0) {
        r4 = 0x11464u;  // (from the original)
        r1 = 0u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0011f220(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = r4;
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r4 = 0u;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0011f220(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011db9c
GUEST_EXPORT(0x0011db9c, d_0011db9c::f_0011db9c);

// f_0011dc5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011dc5c {

inline constexpr guest::Function<0x0011f2e4, u32(u32, u32, u32, u32)> call_0011f2e4;  // (from the original)
inline constexpr guest::Function<0x00123ae8, u32(u32, u32, u32, u32)> call_00123ae8;  // (from the original)

u32 f_0011dc5c() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x974f76u;  // (from the original)
    r0 = u32(*gptr<u8>(r4));
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0011f2e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00123ae8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    *gptr<u8>(r4) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0011dc5c
GUEST_EXPORT(0x0011dc5c, d_0011dc5c::f_0011dc5c);

// f_0011dedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011dedc {

inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> call_00129da0;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_0011dedc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = *gptr<u32>(0x8a275cu);  // (from the original)
    if (*gptr<u32>(0x97e004u) != 0) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r2 = r0;
    r0 = 0x97e004u;  // (from the original)
    r3 = 0u;
    r1 = r4;
    r0 = call_00129da0(r0, r1, r2, r3);
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011dedc
GUEST_EXPORT(0x0011dedc, d_0011dedc::f_0011dedc);

// f_0011df2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011df2c {

inline constexpr guest::Function<0x0011fca0, u32(u32, u32, u32, u32)> call_0011fca0;  // (from the original)
inline constexpr guest::Function<0x00128e80, u32(u32, u32, u32, u32)> call_00128e80;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)

u32 f_0011df2c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x48u;  // (from the original)
    r6 = 0u;
    r4 = 0xaed620u;  // (from the original)
    r0 = r13;
    *gptr<u32>(r13) = u32(r6);
    r5 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0011fca0(r0, r1, r2, r3);
    r1 = r0 & 0x80000000u;  // (from the original)
    res = r1;
    if (res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = *gptr<u32>(r13);
        *gptr<u32>(r5) = u32(r1);
    }
    r5 = r0;
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = r4 + 0x10u;  // (from the original)
        ea = r13 + 0x20u;  // (from the original)
        *gptr<u32>(ea) = u32(4u);
        r7 = 0x11fba4u;  // (from the original)
        ea = r13 + 0x24u;  // (from the original)
        *gptr<u32>(ea) = u32(0x122600u);  // (from the original)
        r3 = r4 + 0x228u;  // (from the original)
        ea = r13 + 0x1cu;  // (from the original)
        *gptr<u32>(ea) = u32(r7);
        ea = r13 + 0x28u;  // (from the original)
        *gptr<u32>(ea) = u32(0x12261cu);  // (from the original)
        r4 = 0x122610u;  // (from the original)
        r2 = 0x11f2e0u;  // (from the original)
        ea = r13 + 0x2cu;  // (from the original)
        *gptr<u32>(ea) = u32(r4);
        ea = r13;
        *gptr<u32>(ea) = u32(r3);
        *gptr<u32>(ea + 4) = u32(0x5109d500u);  // (from the original)
        r3 = r13 + 0x1cu;  // (from the original)
        ea = r13 + 8u;
        *gptr<u32>(ea) = u32(~1u);
        *gptr<u32>(ea + 4) = u32(r6);
        r1 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00128e80(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        res = r0 >> 0x1f;  // (from the original)
        r1 = res;
        if (res != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_0012f204(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
    }
    r0 = r5;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011df2c
GUEST_EXPORT(0x0011df2c, d_0011df2c::f_0011df2c);

// f_0011dff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011dff4 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_0011dff4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r7 = 0xaed620u;  // (from the original)
    r5 = r7 + 0x1cu;  // (from the original)
    r0 = r5;
    r0 = call_00135748(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r7 + 0x18u;  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r6);  // (from the original)
    r0 = *gptr<u32>(r2);
    if (r4 == 0) {
        r1 = 0u;
    } else {
        r1 = r4 + 4u;
    }
    if (r0 == 0) {
        goto L_11e05c;
    }
    *gptr<u32>(r1 + 4u) = u32(r0);
    *gptr<u32>(*gptr<u32>(r0) + 4u) = u32(r1);
    r2 = *gptr<u32>(r0);
    *gptr<u32>(r1) = u32(r2);
    *gptr<u32>(r0) = u32(r1);
L_11e048:;
    r4 = 0u;
    r0 = r5;
    r0 = call_001357ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_11e05c:;
    zf = r4 == 0;
    if (zf) {
        r0 = 0u;
    } else {
        r0 = r4 + 4u;
    }
    *gptr<u32>(r4 + 8u) = u32(r0);
    *gptr<u32>(r4 + 4u) = u32(r0);
    if (zf) {
        r0 = 0u;
    } else {
        r0 = r4 + 4u;
    }
    *gptr<u32>(r2) = u32(r0);
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0012a518(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r0 = call_00120158(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r0 = call_0012ab78(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0011e180
GUEST_EXPORT(0x0011e180, d_0011e180::f_0011e180);

// f_0011e340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e340 {

inline constexpr guest::Function<0x00120198, u32(u32, u32, u32, u32)> call_00120198;  // (from the original)
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> call_0012a518;  // (from the original)
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> call_0012ab78;  // (from the original)

u32 f_0011e340(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    r1 = r0;
    r0 = 1u;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_0012a518(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4;
    r0 = call_00120198(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = call_0012ab78(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011e340
GUEST_EXPORT(0x0011e340, d_0011e340::f_0011e340);

// f_0011e3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e3b4 {

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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_0011fcf0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0012a518(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0011fd10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_001201d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x11e3dcu;  // (from the original)
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_001292e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0012ab78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00124284(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0011fd10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if ((r0 & 0x20u) != 0) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x62u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012a17c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0011fec8(r0, r1, r2, r3);
    ea = 0x974ac8u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r12 = *gptr<u32>(ea + 4);
    ea = r13;
    *gptr<u32>(ea) = u32(0u);
    r3 = r13 + 0x10u;  // (from the original)
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r12);
    r1 = r0;
    r2 = 0x1000u;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0012a5a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_0012009c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0011fea4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0011feb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0011fed4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011e3b4
GUEST_EXPORT(0x0011e3b4, d_0011e3b4::f_0011e3b4);

// f_0011e484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e484 {

inline constexpr guest::Function<0x0012051c, u32(u32, u32, u32, u32)> call_0012051c;  // (from the original)
inline constexpr guest::Function<0x00123678, u32(u32, u32, u32, u32)> call_00123678;  // (from the original)

u32 f_0011e484(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_0012051c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x903f04u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00123678(r0, r1, r2, r3);
    r0 = r0 - 0x34u;  // (from the original)
    r2 = 0u;
    r3 = 0x140u;  // (from the original)
    ea = r0 + 0xb4u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    r12 = 0xf0u;  // (from the original)
    ea = r0 + 0xc0u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r0 + 0xb8u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r12);
    ea = r0 + 0xc4u;  // (from the original)
    *gptr<u8>(ea) = u8(1u);
    ea = r0 + 0xc8u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0xd4u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(0x100u);  // (from the original)
    r1 = r0 + 0xccu;  // (from the original)
    *gptr<u32>(r0 + 0xdcu) = u32(r3);  // (from the original)
    *gptr<u32>(r1) = u32(r2);
    *gptr<u32>(r1 + 4) = u32(r12);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011e484
GUEST_EXPORT(0x0011e484, d_0011e484::f_0011e484);

// f_0011e5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e5d8 {

inline constexpr guest::Function<0x00121140, u32(u32, u32, u32, u32)> call_00121140;  // (from the original)
inline constexpr guest::Function<0x0012140c, u32(u32, u32, u32, u32)> call_0012140c;  // (from the original)
inline constexpr guest::Function<0x001215b8, u32(u32, u32, u32, u32)> call_001215b8;  // (from the original)

u32 f_0011e5d8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    r1 = r13;
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_001215b8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0 = call_00121140(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0012140c(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r13);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r5 = r1;
    r6 = r0;
    ea = r13 + 0x20u;  // (from the original)
    r7 = *gptr<u32>(ea);
    r8 = *gptr<u32>(ea + 4);
    r9 = *gptr<u32>(ea + 8);
    r1 = r0;
    r4 = r2;
    r10 = r3;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001216ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00121110(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    if (!u32(r5 >= 0u) || u32(r5 == 0)) {
        goto L_11e758;
    }
    do {
L_11e730:;
        r0 = *gptr<u32>(r6 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        r0 = call_00121304(r0, r1, r2, r3);
        r3 = r9;
        r2 = r8;
        r1 = r7;
        r0 = r10;
        guest::cpu()->r[13] = r13;
        r0 = call_001214f4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (u32(r5 >= r4) && !u32(r5 == r4));
L_11e758:;
    r0 = r5;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011e6f4
GUEST_EXPORT(0x0011e6f4, d_0011e6f4::f_0011e6f4);

// f_0011e760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e760 {

inline constexpr guest::Function<0x001218b0, u32(u32, u32, u32, u32)> call_001218b0;  // (from the original)

u32 f_0011e760(u32 r0) {
    u32 r1 = 0;
    guest::cpu()->r[13] -= 8u;
    *gptr<u32>(0x9752ecu) = u32(r0);  // (from the original)
    r1 = 0x120464u;  // (from the original)
    r0 = 0x12049cu;  // (from the original)
    r0 = call_001218b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0u;
    r2 = 0x9055b4u;  // (from the original)
    arg0->byte_4 = u8(r0);
    arg0->word_c = u32(r0);
    arg0->word_8 = u32(r1);
    arg0->word_0 = u32(r2);
    arg0->word_10 = u32(r0);
    arg0->word_1c = u32(r0);
    arg0->word_20 = u32(r0);
    r0 = 0x20000u;  // (from the original)
    r0 = call_00121860(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    r0 = 0x30000u;  // (from the original)
    r0 = call_00121860(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
    r0 = 0x20000u;  // (from the original)
    r0 = call_00121824(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x14u) = u32(r0);  // (from the original)
    r0 = 0x30000u;  // (from the original)
    r0 = call_00121824(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x18u) = u32(r0);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0011e790
GUEST_EXPORT(0x0011e790, d_0011e790::f_0011e790);

// f_0011e81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e81c {

inline constexpr guest::Function<0x00122554, u32(u32, u32, u32, u32)> call_00122554;  // (from the original)

u32 f_0011e81c(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    if (r1 == 0) {
        r0 = 0x700u;  // (from the original)
        return call_00122554(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = 0x702u;  // (from the original)
    return call_00122554(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011e81c
GUEST_EXPORT(0x0011e81c, d_0011e81c::f_0011e81c);

// f_0011e838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011e838 {

inline constexpr guest::Function<0x001204d4, u32(u32, u32, u32, u32)> call_001204d4;  // (from the original)

u32 f_0011e838(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_001204d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x905858u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011e838
GUEST_EXPORT(0x0011e838, d_0011e838::f_0011e838);

// f_0011ea30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011ea30 {

inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)

u32 f_0011ea30(u32 r0_unused, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r2);  // (from the original)
    r12 = r1;
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    r1 = r13 + 8u;
    r3 = 1u;
    r2 = r12;
    guest::cpu()->r[13] = r13;
    call_002f6e78(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0011ea30
GUEST_EXPORT(0x0011ea30, d_0011ea30::f_0011ea30);

// f_0011eaac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011eaac {

inline constexpr guest::Function<0x0011ea30, u32(u32, u32, u32, u32)> call_0011ea30;  // (from the original)
inline constexpr guest::Function<0x00120840, u32(u32, u32, u32, u32)> call_00120840;  // (from the original)
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32, u32, u32)> call_0012ca6c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)

u32 f_0011eaac(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r3 = 0x80u;  // (from the original)
    r2 = 0x11eae8u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_0011ea30(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r0;
    r2 = 4u;
    r0 = 8u;
    r0 = call_002fd108(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_00120840(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(0x95bf7cu) = u32(r0);  // (from the original)
    r1 = r4;
    guest::cpu()->r[13] += 8u;
    return call_0012ca6c(r0, r1, r2, r3);
}

}  // namespace d_0011eaac
GUEST_EXPORT(0x0011eaac, d_0011eaac::f_0011eaac);

// f_0011eafc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011eafc {


u32 f_0011eafc() {
    u32 r0 = 0;
    if (u32(*gptr<u8>(0x94e3a8u)) >= 2u) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_0011eafc
GUEST_EXPORT(0x0011eafc, d_0011eafc::f_0011eafc);

// f_0011eea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011eea8 {

inline constexpr guest::Function<0x00121030, u32(u32, u32, u32, u32)> call_00121030;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_0011eea8(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x94e4b4u;  // (from the original)
    r0 = *gptr<u32>(r6 + 4u);
    if (r0 == 0) {
        r0 = 0xa18u;  // (from the original)
        r2 = 4u;
        r1 = r5;
        r0 = call_00131280(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r0;
        res = r0 + 0x24u;  // (from the original)
        r0 = res;
        if (res != 0) {
            r1 = r5;
            r2 = 3u;
            r0 = call_001320cc(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r1 = 0x90b0e8u;  // (from the original)
            *gptr<u32>(r0) = u32(r1);
        }
        *gptr<u32>(r6 + 8u) = u32(r0);
        if (r4 == 0) {
            r0 = 0u;
        } else {
            r0 = r4;
            r0 = call_00121030(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        *gptr<u32>(r6 + 4u) = u32(r0);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011eea8
GUEST_EXPORT(0x0011eea8, d_0011eea8::f_0011eea8);

// f_0011ef40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011ef40 {


u32 f_0011ef40(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = *gptr<u32>(0xadf95cu);  // (from the original)
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 1u;
    if (r0 + 1u == 0) {
        *gptr<u8>(r1 + 0x3cu) = u8(r2);  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r1 + 0x18u);  // (from the original)
    r0 = ~0x1au + ((r0 << 3) - r0 << 2);  // (from the original)
    *gptr<u8>(r1 + r0) = u8(r2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011ef40
GUEST_EXPORT(0x0011ef40, d_0011ef40::f_0011ef40);

// f_0011ef7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011ef7c {


void f_0011ef7c(u32 r0) {
    u32 r1 = 0;
    r1 = *gptr<u32>(0xadf95cu);  // (from the original)
    if (r1 != 0) {
        *gptr<u32>(r1 + 0x38u) = u32(r0);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
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

inline constexpr guest::Function<0x00128cc4, u32(u32, u32, u32, u32)> call_00128cc4;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)

u32 f_0011ef94(gptr<Object_0011ef94_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = 0u;
    arg0->word_0 = u32(r5);
    arg0->word_4 = u32(r5);
    arg0->word_8 = u32(r5);
    arg0->word_c = u32(r5);
    r4 = r0;
    arg0->byte_10 = u8(r5);
    r0 = u32(*gptr<u8>(0x974f60u));  // (from the original)
    if (r0 != 0) {
        r0 = r1 + 0xfffu;  // (from the original)
        r1 = r4;
        r2 = r0 >> 0xc;  // (from the original)
        r0 = 0xae0f64u;  // (from the original)
        r2 = r2 << 0xc;  // (from the original)
        r3 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_00128cc4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            r0 = 0xd8601837u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0012f204(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        *gptr<u8>(r4 + 0x10u) = u8(r5);  // (from the original)
    }
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r6 = 0u;
    ea = r0 + 0x650u;  // (from the original)
    arg0->word_650 = u32(r6);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_0012f154(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x65cu) = u32(r6);  // (from the original)
    r1 = 1u;
    r5 = r4 + 0x65cu;  // (from the original)
    r0 = r13;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_00127cf8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    if (res == 0) {
        r2 = *gptr<u32>(r13);
        r0 = 0u;
        *gptr<u32>(r5) = u32(r2);
    }
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0012f204(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
    }
    r0 = 0u;
    *gptr<u32>(r5 + 4u) = u32(r0);
    *gptr<u8>(r5 + 8u) = u8(r6);
    r1 = 0x64u;  // (from the original)
    *gptr<u32>(r5 + 0xcu) = u32(r6);  // (from the original)
    do {
L_11f0b4:;
        r2 = r4 + (r0 << 4);
        r12 = 0u;
        *gptr<u32>(r2 + 0x10u) = u32(r6);  // (from the original)
        *gptr<u32>(r2 + 0x18u) = u32(r12);  // (from the original)
        res = r1 - 1u;
        r1 = res;
        r0 = r0 + 1u;
        *gptr<u32>(r2 + 0x1cu) = u32(r12);  // (from the original)
        guest::preempt();
    } while (res != 0);
    r0 = u32(*gptr<u8>(r4 + 0x664u));  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_00124f94(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        res = r0 & 0x80000000u;  // (from the original)
        r2 = res;
        *gptr<u32>(r4 + 0x660u) = u32(r0);  // (from the original)
        if (res >> 0x1f) {  // (from the original)
            goto L_11f11c;
        }
        r1 = 1u;
        r0 = 0x80u;  // (from the original)
        *gptr<u8>(r4 + 0x664u) = u8(r1);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001251b0(r0, r1, r2, r3);
    }
    r3 = 0x64u;  // (from the original)
    r2 = 0u;
    r1 = r4 + 0x668u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125110(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x660u) = u32(r0);  // (from the original)
L_11f11c:;
    r0 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r0 + 8u;
    r0 = arg0->word_8;
    res = r0 & ~1u;
    r1 = res;
    if (res != 0) {
        if ((r0 & 1u) != 0) {
            r0 = call_00134250(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        r0 = *gptr<u32>(r4) & ~1u;
        r0 = call_0012ede8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r4) = u32(0u);
    }
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011f220
GUEST_EXPORT(0x0011f220, d_0011f220::f_0011f220);

// f_0011f2e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011f2e4 {

inline constexpr guest::Function<0x00123590, u32(u32, u32, u32, u32)> call_00123590;  // (from the original)
inline constexpr guest::Function<0x00129270, u32(u32, u32, u32, u32)> call_00129270;  // (from the original)

u32 f_0011f2e4(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = 0xf000000bu;  // (from the original)
    r0 = *gptr<u32>(0x97dffcu);  // (from the original)
    r0 = call_00123590(r0, r1, r2, guest::cpu()->r[3]);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x11f308u;  // (from the original)
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_00129270(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0011f2e4
GUEST_EXPORT(0x0011f2e4, d_0011f2e4::f_0011f2e4);

// f_0011f880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011f880 {

inline constexpr guest::Function<0x00123ca8, u32(u32, u32, u32, u32)> call_00123ca8;  // (from the original)
inline constexpr guest::Function<0x00129040, u32(u32, u32, u32, u32)> call_00129040;  // (from the original)

u32 f_0011f880(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = r1;
    r1 = r4;
    r0 = *gptr<u32>(0x8a27acu);  // (from the original)
    r0 = call_00123ca8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 & 0x80000000u;  // (from the original)
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u32>(0x974f7cu) = u32(r4);  // (from the original)
    if (*gptr<u32>(r4 + 0x14u) != 0) {  // (from the original)
        r0 = 1u;
        r0 = call_00129040(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011f880
GUEST_EXPORT(0x0011f880, d_0011f880::f_0011f880);

// f_0011f8d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011f8d4 {

inline constexpr guest::Function<0x001290f0, u32(u32, u32, u32, u32)> call_001290f0;  // (from the original)
inline constexpr guest::Function<0x00129c7c, u32(u32, u32, u32, u32)> call_00129c7c;  // (from the original)
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> call_00129da0;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_0011f8d4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0 = call_001290f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = call_00135748(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x97d810u;  // (from the original)
    if (*gptr<u32>(r5 + 8u) != 0) {
        goto L_11f97c;
    }
    r0 = 0x8b233cu;  // (from the original)
    r7 = 0x97d81cu;  // (from the original)
    r8 = *gptr<u32>(r0 + 4u);
    r0 = call_00129c7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = call_00134250(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r6 = 0xd92103fbu;  // (from the original)
    if (*gptr<u32>(r7) == 0) {
        goto L_11f950;
    } else {
        r0 = 0xd8a103f9u;  // (from the original)
    }
L_11f920:;
    r7 = r0;
    r0 = r0 & 0x80000000u;  // (from the original)
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        *gptr<u8>(r5) = u8(1u);
        goto L_11f97c;
    }
    if (r7 != r6) {
        goto L_11f97c;
    }
    r0 = r4;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r7;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_11f950:;
    r0 = r8;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r2 = r0;
    r3 = 0u;
    r1 = r8;
    r0 = r7;
    r0 = call_00129da0(r0, r1, r2, r3);
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
    r5 = 0u;
    r0 = r4;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011f8d4
GUEST_EXPORT(0x0011f8d4, d_0011f8d4::f_0011f8d4);

// f_0011fa68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fa68 {

inline constexpr guest::Function<0x0011f8d4, u32(u32, u32, u32, u32)> call_0011f8d4;  // (from the original)
inline constexpr guest::Function<0x00123e40, u32(u32, u32, u32, u32)> call_00123e40;  // (from the original)
inline constexpr guest::Function<0x00123ee8, u32(u32, u32, u32, u32)> call_00123ee8;  // (from the original)

u32 f_0011fa68(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0011f8d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0 & 0x80000000u;  // (from the original)
    res = r1;
    r0 = 0u;
    if (res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        *gptr<u8>(r4) = u8(r0);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00123e40(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0 & 0x80000000u;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        *gptr<u8>(r4) = u8(1u);
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00123ee8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 & 0x80000000u;  // (from the original)
    nf = r0 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        r0 = 2u;
        *gptr<u8>(r4) = u8(r0);
    }
    if (nf != vf) {
        r0 = 0xd90103eau;  // (from the original)
    }
    if (nf == vf) {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011fa68
GUEST_EXPORT(0x0011fa68, d_0011fa68::f_0011fa68);

// f_0011fad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fad4 {

inline constexpr guest::Function<0x00123fe4, u32(u32, u32, u32, u32)> call_00123fe4;  // (from the original)

u32 f_0011fad4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u8>(r13) = u8(0u);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00123fe4(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r0 = u32(*gptr<u8>(r13));
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0011fad4
GUEST_EXPORT(0x0011fad4, d_0011fad4::f_0011fad4);

// f_0011faf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011faf0 {

inline constexpr guest::Function<0x00124068, u32(u32, u32, u32, u32)> call_00124068;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)

u32 f_0011faf0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r3 = uxth(r3);
    r0 = r0 + 0x18u;  // (from the original)
    r0 = call_00124068(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = call_00134250(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    }
    r0 = 0u;
    *gptr<u32>(r4 + 0x54u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0011faf0
GUEST_EXPORT(0x0011faf0, d_0011faf0::f_0011faf0);

// f_0011fb18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fb18 {

inline constexpr guest::Function<0x00129c7c, u32(u32, u32, u32, u32)> call_00129c7c;  // (from the original)
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> call_00129da0;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_0011fb18(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0xae0f38u;  // (from the original)
    r0 = r4;
    r0 = call_00135748(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x974f38u;  // (from the original)
    r0 = *gptr<u32>(r5);
    if (r0 != 0) {
        goto L_11fb74;
    }
    r0 = call_00129c7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x8a24c0u;  // (from the original)
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r2 = r0;
    r1 = 0x8a24c0u;  // (from the original)
    r0 = 0x97d8c8u;  // (from the original)
    r3 = 0u;
    r0 = call_00129da0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_11fb74;
    }
    r5 = r0;
    r0 = r4;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_11fb74:;
    *gptr<u32>(r5) = u32(*gptr<u32>(r5) + 1u);
    r5 = 0u;
    r0 = r4;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011fb18
GUEST_EXPORT(0x0011fb18, d_0011fb18::f_0011fb18);

// f_0011fcf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fcf0 {

inline constexpr guest::Function<0x00124c4c, u32(u32, u32, u32, u32)> call_00124c4c;  // (from the original)

u32 f_0011fcf0(u32 r0) {
    u32 r1 = 0;
    u32 zf = 0;
    zf = r0 == 0;
    r0 = 0x974b00u;  // (from the original)
    r1 = 1u;
    *gptr<u8>(r0) = u8(r1);
    if (zf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_00124c4c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011fcf0
GUEST_EXPORT(0x0011fcf0, d_0011fcf0::f_0011fcf0);

// f_0011fd20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fd20 {


u32 f_0011fd20() {
    u32 r0 = 0;
    if ((*gptr<u32>(0x974af0u) & 7u) == 6u) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_0011fd20
GUEST_EXPORT(0x0011fd20, d_0011fd20::f_0011fd20);

// f_0011fd60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fd60 {

inline constexpr guest::Function<0x0012a1e4, u32(u32, u32, u32, u32)> call_0012a1e4;  // (from the original)
inline constexpr guest::Function<0x0012ae20, u32(u32, u32, u32, u32)> call_0012ae20;  // (from the original)

u32 f_0011fd60(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (r0 == 0) {
        r0 = 3u;
        goto L_11fd90;
    }
    if (r4 == 1u) {
        r0 = 2u;
        goto L_11fd90;
    }
    if (r0 != 2u) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    r0 = 1u;
    return call_0012a1e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
L_11fd90:;
    r0 = call_0012a1e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_0012ae20(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011fd60
GUEST_EXPORT(0x0011fd60, d_0011fd60::f_0011fd60);

// f_0011fda4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0011fda4 {

inline constexpr guest::Function<0x00124c20, u32(u32, u32, u32, u32)> call_00124c20;  // (from the original)

u32 f_0011fda4() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x124318u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_00124c20(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0x974b00u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x50u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x54u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x58u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x5cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x60u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x64u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x68u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x6cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x70u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x74u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x78u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x7cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x88u) = u32(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011fda4
GUEST_EXPORT(0x0011fda4, d_0011fda4::f_0011fda4);
