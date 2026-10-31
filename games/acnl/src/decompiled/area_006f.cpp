// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/grid_rect.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_006f09d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f09d4 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00767a44, u32(u32, u32, u32, u32)> call_00767a44;  // (from the original)
inline constexpr guest::Function<0x007703e0, u32(u32, u32, u32, u32)> call_007703e0;  // (from the original)

u32 f_006f09d4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r0;
    r6 = r1;
    r1 = 0u;
    r2 = r1;
L_6f09e8:;
    r0 = *gptr<u32>(r5 + (r2 << 2));
    if (r0 == 0) {
        goto L_6f0a04;
    }
    do {
L_6f09f4:;
        if ((r0 & 1u) != 0) {
            r1 = r1 + 1u;
        }
        res = r0 >> 1;
        r0 = res;
        guest::preempt();
    } while (res != 0);
L_6f0a04:;
    r2 = r2 + 1u;
    if (r2 < 0xbau) {  // (from the original)
        guest::preempt();
        goto L_6f09e8;
    }
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007703e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0x172bu;  // (from the original)
    r7 = r0;
    r4 = 0u;
    r9 = 1u;
L_6f0a34:;
    r1 = uxth(r4 + 0x2000u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00767a44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f0a8c;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fccdc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == r6) {
        goto L_6f0a8c;
    }
    if (u32(r4 >= r8) && !u32(r4 == r8)) {
        goto L_6f0a8c;
    }
    r0 = r4 >> 5;
    r2 = *gptr<u32>(r5 + (r0 << 2)) & ~lsl_r(r9, r4 & 0x1fu);  // (from the original)
    *gptr<u32>(r5 + (r0 << 2)) = u32(r2);
L_6f0a8c:;
    r4 = r4 + 1u;
    if (r4 < r8) {
        guest::preempt();
        goto L_6f0a34;
    }
    r2 = 0u;
    r3 = r5;
    r1 = r2;
L_6f0aac:;
    r0 = *gptr<u32>(r3 + (r1 << 2));
    if (r0 == 0) {
        goto L_6f0ac8;
    }
    do {
L_6f0ab8:;
        if ((r0 & 1u) != 0) {
            r2 = r2 + 1u;
        }
        res = r0 >> 1;
        r0 = res;
        guest::preempt();
    } while (res != 0);
L_6f0ac8:;
    r1 = r1 + 1u;
    if (r1 < 0xbau) {  // (from the original)
        guest::preempt();
        goto L_6f0aac;
    }
    if (r2 != 0) {
        r0 = 1u;
        goto L_6f0b00;
    }
    if (!(u32(r7 >= r8) && !u32(r7 == r8))) {
        r0 = r7 >> 5;
        r1 = *gptr<u32>(r5 + (r0 << 2)) | lsl_r(r9, r7 & 0x1fu);  // (from the original)
        *gptr<u32>(r3 + (r0 << 2)) = u32(r1);
    }
    r0 = 0u;
L_6f0b00:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f09d4
GUEST_EXPORT(0x006f09d4, d_006f09d4::f_006f09d4);

// f_006f14b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f14b0 {

inline constexpr guest::Function<0x0025591c, u32(u32, u32, u32, u32)> call_0025591c;  // (from the original)
inline constexpr guest::Function<0x002ad1fc, u32(u32, u32, u32, u32)> call_002ad1fc;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)

u32 f_006f14b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4 = r1;
    r8 = r0;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_005359fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0;
    r0 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    zf = r4 == 0x24u;  // (from the original)
    r9 = 0x372au;  // (from the original)
    r10 = 1u;
    r4 = uxth(r0);
    r7 = r4;
    if (zf) {
        goto L_6f1550;
    }
    r5 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        goto L_6f154c;
    }
L_6f14ec:;
    r1 = uxth(r4);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0025591c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f1534;
    }
    r0 = r7 + r5;
    if (u32(r0 >= r9) && !u32(r0 == r9)) {
        goto L_6f1534;
    }
    r1 = r0 - 0x2000u;  // (from the original)
    r0 = r1 >> 5;
    r1 = r1 & 0x1fu;  // (from the original)
    r2 = *gptr<u32>(r8 + (r0 << 2)) | lsl_r(r10, r1 & 0xff);  // (from the original)
    *gptr<u32>(r8 + (r0 << 2)) = u32(r2);
L_6f1534:;
    r4 = r4 + 1u;
    r0 = r13;
    r5 = r5 + 1u;
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_6f14ec;
    }
L_6f154c:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f1550:;
    r5 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        guest::preempt();
        goto L_6f154c;
    }
L_6f155c:;
    r1 = uxth(r4);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002ad1fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f15a4;
    }
    r0 = r7 + r5;
    if (u32(r0 >= r9) && !u32(r0 == r9)) {
        goto L_6f15a4;
    }
    r0 = r0 - 0x2000u;  // (from the original)
    r1 = r0 >> 5;
    r2 = *gptr<u32>(r8 + (r1 << 2)) | lsl_r(r10, r0 & 0x1fu);  // (from the original)
    *gptr<u32>(r8 + (r1 << 2)) = u32(r2);
L_6f15a4:;
    r4 = r4 + 1u;
    r0 = r13;
    r5 = r5 + 1u;
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_6f155c;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f14b0
GUEST_EXPORT(0x006f14b0, d_006f14b0::f_006f14b0);

// f_006f15c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f15c4 {

inline constexpr guest::Function<0x001b1b40, u32(u32, u32, u32, u32)> call_001b1b40;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x0070b510, u32(u32, u32, u32, u32)> call_0070b510;  // (from the original)
inline constexpr guest::Function<0x0070b574, u32(u32, u32, u32, u32)> call_0070b574;  // (from the original)
inline constexpr guest::Function<0x0070b65c, u32(u32, u32, u32, u32)> call_0070b65c;  // (from the original)
inline constexpr guest::Function<0x0070b694, u32(u32, u32, u32, u32)> call_0070b694;  // (from the original)
inline constexpr guest::Function<0x0070b6d0, u32(u32, u32, u32, u32)> call_0070b6d0;  // (from the original)
inline constexpr guest::Function<0x0070b70c, u32(u32, u32, u32, u32)> call_0070b70c;  // (from the original)

u32 f_006f15c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    u32 cf = 0;
    ea = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x48u;  // (from the original)
    r5 = r2;
    r9 = r0;
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005359fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = *gptr<u32>(r0 + 4);
    r1 = uxth(*gptr<u32>(r0));
    r10 = r1;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r0 + 0x6214eu));  // (from the original)
    r1 = *gptr<u32>(r13 + 0x20u) - 1u;  // (from the original)
    if ((r1 & r0 >> 4) == 0) {
        r7 = 1u;
    } else {
        r7 = 0u;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 + 0x621ccu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001b1b40(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b65c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = r0;
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b694(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r0);
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b6d0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b70c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    if (r5 == 2u) {
        goto L_6f16a0;
    }
    zf = r6 == 0;
    cf = r6 >= 0u;
    if (cf && !zf) {
        r8 = 0x372au;  // (from the original)
    }
    r5 = 0u;
    if (!cf || zf) {
        goto L_6f19d0;
    }
L_6f1688:;
    r0 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    if (r0 >= 0xb9u) {  // (from the original)
        goto L_6f187c;
    }
    if (r0 != 0x14u) {  // (from the original)
        goto L_6f187c;
    }
    goto L_6f1868;
L_6f16a0:;
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b574(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r5 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        goto L_6f19d0;
    }
L_6f16bc:;
    r1 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    r0 = r1;
    if (r1 >= 0xb9u) {  // (from the original)
        r1 = 0u;
    }
    if (r1 == r8) {
        goto L_6f1854;
    }
    if (r0 >= 0xb9u) {  // (from the original)
        goto L_6f16f8;
    }
    if (r0 != 0x14u) {  // (from the original)
        goto L_6f16f8;
    }
    if (r7 != 0) {
        goto L_6f170c;
    }
    r1 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
    if ((r1 & 1u) == 0) {
        goto L_6f170c;
    }
L_6f16f8:;
    if (r0 >= 0xb9u) {  // (from the original)
        goto L_6f1768;
    }
    if (r0 != 0x15u) {  // (from the original)
        goto L_6f1768;
    }
    goto L_6f1754;
L_6f170c:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= r11) {
        goto L_6f1854;
    }
    r2 = 0x372au;  // (from the original)
    r1 = r10 + r5;
    r0 = r9;
    if (r2 < r1) {
        goto L_6f1854;
    }
    r2 = r1 - 0x2000u;  // (from the original)
    r1 = r2 >> 5;
    r2 = *gptr<u32>(r0 + (r1 << 2)) | lsl_r(1u, r2 & 0x1fu);  // (from the original)
    *gptr<u32>(r9 + (r1 << 2)) = u32(r2);
    goto L_6f1854;
L_6f1754:;
    if (r7 != 0) {
        goto L_6f177c;
    }
    r1 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
    if ((r1 & 1u) == 0) {
        goto L_6f177c;
    }
L_6f1768:;
    if (r0 >= 0xb9u) {  // (from the original)
        goto L_6f17bc;
    }
    if (r0 != 0x16u) {  // (from the original)
        goto L_6f17bc;
    }
    goto L_6f17a8;
L_6f177c:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= *gptr<u32>(r13 + 8u)) {
        goto L_6f1854;
    }
    r2 = 0x372au;  // (from the original)
    r1 = r10 + r5;
    r0 = r9;
    if (r2 >= r1) {
        goto L_6f1838;
    }
    goto L_6f1854;
L_6f17a8:;
    if (r7 != 0) {
        goto L_6f17d0;
    }
    r1 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
    if ((r1 & 1u) == 0) {
        goto L_6f17d0;
    }
L_6f17bc:;
    if (r0 >= 0xb9u) {  // (from the original)
        goto L_6f1854;
    }
    if (r0 != 0x17u) {  // (from the original)
        goto L_6f1854;
    }
    goto L_6f17fc;
L_6f17d0:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= *gptr<u32>(r13 + 0x10u)) {  // (from the original)
        goto L_6f1854;
    }
    r2 = 0x372au;  // (from the original)
    r1 = r10 + r5;
    r0 = r9;
    if (r2 >= r1) {
        goto L_6f1838;
    }
    goto L_6f1854;
L_6f17fc:;
    if (r7 == 0) {
        if ((u32(*gptr<u8>(r4 + 0x1bu)) & 1u) != 0) {  // (from the original)
            goto L_6f1854;
        }
    }
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= *gptr<u32>(r13 + 0xcu)) {  // (from the original)
        goto L_6f1854;
    }
    r2 = 0x372au;  // (from the original)
    r1 = r10 + r5;
    r0 = r9;
    if (r2 < r1) {
        goto L_6f1854;
    }
L_6f1838:;
    r3 = r1 - 0x2000u;  // (from the original)
    r1 = r3 >> 5;
    r2 = *gptr<u32>(r0 + (r1 << 2)) | lsl_r(1u, r3 & 0x1fu);  // (from the original)
    *gptr<u32>(r9 + (r1 << 2)) = u32(r2);
L_6f1854:;
    r5 = r5 + 1u;
    r4 = r4 + 0x1eu;  // (from the original)
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_6f16bc;
    }
    goto L_6f19d0;
L_6f1868:;
    if (r7 != 0) {
        goto L_6f1890;
    }
    r1 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
    if ((r1 & 1u) == 0) {
        goto L_6f1890;
    }
L_6f187c:;
    if (r0 >= 0xb9u) {  // (from the original)
        goto L_6f18c8;
    }
    if (r0 != 0x15u) {  // (from the original)
        goto L_6f18c8;
    }
    goto L_6f18b4;
L_6f1890:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= r11) {
        goto L_6f19c0;
    }
    r0 = r10 + r5;
    if (r8 >= r0) {
        goto L_6f18fc;
    }
    goto L_6f19c0;
L_6f18b4:;
    if (r7 != 0) {
        goto L_6f18dc;
    }
    r1 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
    if ((r1 & 1u) == 0) {
        goto L_6f18dc;
    }
L_6f18c8:;
    if (r0 >= 0xb9u) {  // (from the original)
        goto L_6f1930;
    }
    if (r0 != 0x16u) {  // (from the original)
        goto L_6f1930;
    }
    goto L_6f191c;
L_6f18dc:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 8u);
    if (r0 >= r1) {
        goto L_6f19c0;
    }
    r0 = r10 + r5;
    if (r8 < r0) {
        goto L_6f19c0;
    }
L_6f18fc:;
    r0 = r0 - 0x2000u;  // (from the original)
    r1 = 1u;
    r12 = r0 >> 5;
    r2 = *gptr<u32>(r9 + (r12 << 2));
    *gptr<u32>(r9 + (r12 << 2)) = u32(r2 | lsl_r(r1, r0 & 0x1fu));  // (from the original)
    goto L_6f19c0;
L_6f191c:;
    if (r7 != 0) {
        goto L_6f1944;
    }
    r1 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
    if ((r1 & 1u) == 0) {
        goto L_6f1944;
    }
L_6f1930:;
    if (r0 >= 0xb9u) {  // (from the original)
        goto L_6f19c0;
    }
    if (r0 != 0x17u) {  // (from the original)
        goto L_6f19c0;
    }
    goto L_6f196c;
L_6f1944:;
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    if (r0 >= r1) {
        goto L_6f19c0;
    }
    r1 = r10 + r5;
    r0 = r9;
    if (r8 >= r1) {
        goto L_6f19a4;
    }
    goto L_6f19c0;
L_6f196c:;
    if (r7 == 0) {
        if ((u32(*gptr<u8>(r4 + 0x1bu)) & 1u) != 0) {  // (from the original)
            goto L_6f19c0;
        }
    }
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (r0 >= r1) {
        goto L_6f19c0;
    }
    r1 = r10 + r5;
    r0 = r9;
    if (r8 < r1) {
        goto L_6f19c0;
    }
L_6f19a4:;
    r3 = r1 - 0x2000u;  // (from the original)
    r1 = r3 >> 5;
    r2 = *gptr<u32>(r0 + (r1 << 2)) | lsl_r(1u, r3 & 0x1fu);  // (from the original)
    *gptr<u32>(r9 + (r1 << 2)) = u32(r2);
L_6f19c0:;
    r5 = r5 + 1u;
    r4 = r4 + 0x1eu;  // (from the original)
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_6f1688;
    }
L_6f19d0:;
    r2 = 0u;
    r1 = r2;
L_6f19d8:;
    r0 = *gptr<u32>(r9 + (r1 << 2));
    if (r0 == 0) {
        goto L_6f19f4;
    }
    do {
L_6f19e4:;
        if ((r0 & 1u) != 0) {
            r2 = r2 + 1u;
        }
        res = r0 >> 1;
        r0 = res;
        guest::preempt();
    } while (res != 0);
L_6f19f4:;
    r1 = r1 + 1u;
    if (r1 < 0xbau) {  // (from the original)
        guest::preempt();
        goto L_6f19d8;
    }
    if (r2 != 0) {
        r13 = r13 + 0x24u;  // (from the original)
        r0 = 1u;
        ea = r13;
        r13 = r13 + 0x24;  // (from the original)
        r4 = *gptr<u32>(ea);
        r5 = *gptr<u32>(ea + 4);
        r6 = *gptr<u32>(ea + 8);
        r7 = *gptr<u32>(ea + 0xc);  // (from the original)
        r8 = *gptr<u32>(ea + 0x10);  // (from the original)
        r9 = *gptr<u32>(ea + 0x14);  // (from the original)
        r10 = *gptr<u32>(ea + 0x18);  // (from the original)
        r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        guest::cpu()->r[11] = r11;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b510(r0, r1, r2, r3);
    r2 = r0;
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r3 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9c8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r2;
L_6f1a50:;
    r0 = *gptr<u32>(r9 + (r1 << 2));
    if (r0 == 0) {
        goto L_6f1a6c;
    }
    do {
L_6f1a5c:;
        if ((r0 & 1u) != 0) {
            r2 = r2 + 1u;
        }
        res = r0 >> 1;
        r0 = res;
        guest::preempt();
    } while (res != 0);
L_6f1a6c:;
    r1 = r1 + 1u;
    if (r1 < 0xbau) {  // (from the original)
        guest::preempt();
        goto L_6f1a50;
    }
    if (r2 != 0) {
        goto L_6f1ac4;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6f1ac4;
    }
    r1 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        goto L_6f1ac4;
    }
    if (r7 != 0) {
        goto L_6f1ae4;
    }
    do {
L_6f1aa8:;
        if ((u32(*gptr<u8>(r0 + 0x1bu)) & 1u) == 0) {  // (from the original)
            goto L_6f1ae4;
        }
        r1 = r1 + 1u;
        r0 = r0 + 0x1eu;  // (from the original)
        guest::preempt();
    } while (u32(r6 >= r1) && !u32(r6 == r1));
L_6f1ac4:;
    r13 = r13 + 0x24u;  // (from the original)
    r0 = 0u;
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f1ae4:;
    r0 = r10 + r1;
    r1 = 0x372au;  // (from the original)
    if (u32(r0 >= r1) && !u32(r0 == r1)) {
        guest::preempt();
        goto L_6f1ac4;
    }
    r1 = r0 - 0x2000u;  // (from the original)
    r0 = r1 >> 5;
    r1 = *gptr<u32>(r9 + (r0 << 2)) | lsl_r(1u, r1 & 0x1fu);  // (from the original)
    *gptr<u32>(r9 + (r0 << 2)) = u32(r1);
    guest::preempt();
    goto L_6f1ac4;
}

}  // namespace d_006f15c4
GUEST_EXPORT(0x006f15c4, d_006f15c4::f_006f15c4);

// f_006f1cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f1cfc {

inline constexpr guest::Function<0x0025591c, u32(u32, u32, u32, u32)> call_0025591c;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x007692f0, u32(u32, u32, u32, u32)> call_007692f0;  // (from the original)

u32 f_006f1cfc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r7 = r0;
    r9 = r1;
    r0 = 0x27u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005359fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = *gptr<u32>(r0 + 4);
    r10 = 0x372au;  // (from the original)
    r11 = 1u;
    r4 = uxth(*gptr<u32>(r0));
    r8 = r4;
    if (r9 == 3u) {
        goto L_6f1dec;
    }
    r5 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        goto L_6f1dac;
    }
L_6f1d38:;
    r1 = uxth(r4);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0025591c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f1d94;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007692f0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r9) {
        goto L_6f1d94;
    }
    r0 = r8 + r5;
    if (u32(r0 >= r10) && !u32(r0 == r10)) {
        goto L_6f1d94;
    }
    r1 = r0 - 0x2000u;  // (from the original)
    r0 = r1 >> 5;
    r2 = *gptr<u32>(r7 + (r0 << 2)) | lsl_r(r11, r1 & 0x1fu);  // (from the original)
    *gptr<u32>(r7 + (r0 << 2)) = u32(r2);
L_6f1d94:;
    r4 = r4 + 1u;
    r5 = r5 + 1u;
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_6f1d38;
    }
L_6f1dac:;
    r2 = 0u;
    r1 = r2;
L_6f1db4:;
    r0 = *gptr<u32>(r7 + (r1 << 2));
    if (r0 == 0) {
        goto L_6f1dd0;
    }
    do {
L_6f1dc0:;
        if ((r0 & 1u) != 0) {
            r2 = r2 + 1u;
        }
        res = r0 >> 1;
        r0 = res;
        guest::preempt();
    } while (res != 0);
L_6f1dd0:;
    r1 = r1 + 1u;
    if (r1 < 0xbau) {  // (from the original)
        guest::preempt();
        goto L_6f1db4;
    }
    if (r2 == 0) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f1dec:;
    r5 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        guest::preempt();
        goto L_6f1dac;
    }
L_6f1df8:;
    r1 = uxth(r4);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0025591c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f1e40;
    }
    r0 = r8 + r5;
    if (u32(r0 >= r10) && !u32(r0 == r10)) {
        goto L_6f1e40;
    }
    r1 = r0 - 0x2000u;  // (from the original)
    r0 = r1 >> 5;
    r2 = *gptr<u32>(r7 + (r0 << 2)) | lsl_r(r11, r1 & 0x1fu);  // (from the original)
    *gptr<u32>(r7 + (r0 << 2)) = u32(r2);
L_6f1e40:;
    r4 = r4 + 1u;
    r5 = r5 + 1u;
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_6f1df8;
    }
    guest::preempt();
    goto L_6f1dac;
}

}  // namespace d_006f1cfc
GUEST_EXPORT(0x006f1cfc, d_006f1cfc::f_006f1cfc);

// f_006f1f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f1f14 {

inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;  // (from the original)

u32 f_006f1f14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r6 = r1;
    r8 = r0;
    ea = r13 + 0x20u;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r7 = r2;
    r9 = 0u;
    if (r3 != 0) {
        r3 = r2;
        r2 = r1;
        r1 = 5u;
        *gptr<u32>(r13) = u32(r9);
        guest::cpu()->r[13] = r13;
        r0 = call_006f2908(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    if (r4 != 0) {
        r3 = r7;
        r2 = r6;
        r1 = 3u;
        r0 = r8;
        *gptr<u32>(r13) = u32(r9);
        guest::cpu()->r[13] = r13;
        r0 = call_006f2908(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    if (r5 != 0) {
        r3 = r7;
        r2 = r6;
        r1 = 4u;
        r0 = r8;
        *gptr<u32>(r13) = u32(r9);
        guest::cpu()->r[13] = r13;
        r0 = call_006f2908(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f1f14
GUEST_EXPORT(0x006f1f14, d_006f1f14::f_006f1f14);

// f_006f2178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f2178 {

inline constexpr guest::Function<0x002ad1fc, u32(u32, u32, u32, u32)> call_002ad1fc;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x00769bc4, u32(u32, u32, u32, u32)> call_00769bc4;  // (from the original)

u32 f_006f2178(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r7 = r0;
    r9 = r1;
    r0 = 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005359fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = *gptr<u32>(r0 + 4);
    r10 = 0x372au;  // (from the original)
    r11 = 1u;
    r4 = uxth(*gptr<u32>(r0));
    r8 = r4;
    if (r9 == 6u) {
        goto L_6f2268;
    }
    r5 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        goto L_6f2228;
    }
L_6f21b4:;
    r1 = uxth(r4);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002ad1fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f2210;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00769bc4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r9) {
        goto L_6f2210;
    }
    r0 = r8 + r5;
    if (u32(r0 >= r10) && !u32(r0 == r10)) {
        goto L_6f2210;
    }
    r1 = r0 - 0x2000u;  // (from the original)
    r0 = r1 >> 5;
    r2 = *gptr<u32>(r7 + (r0 << 2)) | lsl_r(r11, r1 & 0x1fu);  // (from the original)
    *gptr<u32>(r7 + (r0 << 2)) = u32(r2);
L_6f2210:;
    r4 = r4 + 1u;
    r5 = r5 + 1u;
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_6f21b4;
    }
L_6f2228:;
    r2 = 0u;
    r1 = r2;
L_6f2230:;
    r0 = *gptr<u32>(r7 + (r1 << 2));
    if (r0 == 0) {
        goto L_6f224c;
    }
    do {
L_6f223c:;
        if ((r0 & 1u) != 0) {
            r2 = r2 + 1u;
        }
        res = r0 >> 1;
        r0 = res;
        guest::preempt();
    } while (res != 0);
L_6f224c:;
    r1 = r1 + 1u;
    if (r1 < 0xbau) {  // (from the original)
        guest::preempt();
        goto L_6f2230;
    }
    if (r2 == 0) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f2268:;
    r5 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        guest::preempt();
        goto L_6f2228;
    }
L_6f2274:;
    r1 = uxth(r4);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002ad1fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f22bc;
    }
    r0 = r8 + r5;
    if (u32(r0 >= r10) && !u32(r0 == r10)) {
        goto L_6f22bc;
    }
    r1 = r0 - 0x2000u;  // (from the original)
    r0 = r1 >> 5;
    r2 = *gptr<u32>(r7 + (r0 << 2)) | lsl_r(r11, r1 & 0x1fu);  // (from the original)
    *gptr<u32>(r7 + (r0 << 2)) = u32(r2);
L_6f22bc:;
    r4 = r4 + 1u;
    r5 = r5 + 1u;
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_6f2274;
    }
    guest::preempt();
    goto L_6f2228;
}

}  // namespace d_006f2178
GUEST_EXPORT(0x006f2178, d_006f2178::f_006f2178);

// f_006f2908: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f2908 {

inline constexpr guest::Function<0x001b1b40, u32(u32, u32, u32, u32)> call_001b1b40;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x006f15c4, u32(u32, u32, u32, u32)> call_006f15c4;  // (from the original)
inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;  // (from the original)
inline constexpr guest::Function<0x006f2c1c, u32(u32, u32, u32, u32)> call_006f2c1c;  // (from the original)
inline constexpr guest::Function<0x0070b49c, u32(u32, u32, u32, u32)> call_0070b49c;  // (from the original)
inline constexpr guest::Function<0x0070b510, u32(u32, u32, u32, u32)> call_0070b510;  // (from the original)
inline constexpr guest::Function<0x0070b574, u32(u32, u32, u32, u32)> call_0070b574;  // (from the original)
inline constexpr guest::Function<0x0070b5e8, u32(u32, u32, u32, u32)> call_0070b5e8;  // (from the original)
inline constexpr guest::Function<0x007485d0, u32(u32, u32, u32, u32)> call_007485d0;  // (from the original)

u32 f_006f2908(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x30u;  // (from the original)
    zf = r2 == 2u;
    r7 = r2;
    if (!zf) {
        zf = r7 == 1u;
    }
    r5 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r10 = r0;
    r4 = r1;
    r11 = r3;
    if (!zf) {
        if (r7 == 4u) {
            goto L_6f29a0;
        }
        if (r7 == 3u) {
            goto L_6f29d0;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0 + 0x621ccu;  // (from the original)
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_001b1b40(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r7 == 5u) {
            goto L_6f2a54;
        }
        if (r7 == 6u) {
            goto L_6f2a6c;
        }
        if (r7 == 7u) {
            goto L_6f2a84;
        }
        if (r7 == 8u) {
            goto L_6f2a9c;
        }
        goto L_6f2aac;
    }
    zf = r3 == 0;
    r3 = r5;
    if (zf) {
        goto L_6f2990;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006f2c1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_6f2988:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f2990:;
    guest::cpu()->r[13] = r13;
    r0 = call_006f15c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f29a0:;
    r2 = 5u;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = r11;
    r2 = 6u;
    r1 = r4;
    r0 = r10;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    goto L_6f29f4;
L_6f29d0:;
    r0 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6f2a14;
    }
    if (r0 == 1u) {
        goto L_6f2a34;
    }
    if (r0 != 2u) {
        guest::preempt();
        goto L_6f2988;
    }
L_6f29f4:;
    r3 = r11;
    r2 = 7u;
    r1 = r4;
    r0 = r10;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f2a14:;
    r3 = r11;
    r2 = 5u;
    r1 = r4;
    r0 = r10;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f2a34:;
    r3 = r11;
    r2 = 6u;
    r1 = r4;
    r0 = r10;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f2a54:;
    r1 = r4;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b510(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_6f2aa8;
L_6f2a6c:;
    r1 = r4;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b5e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_6f2aa8;
L_6f2a84:;
    r1 = r4;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b49c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_6f2aa8;
L_6f2a9c:;
    r1 = r4;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_6f2aa8:;
    r7 = r0;
L_6f2aac:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005359fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = *gptr<u32>(r0 + 4);
    r1 = uxth(*gptr<u32>(r0));
    r9 = r1;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r3 = 0x372au;  // (from the original)
    r2 = 1u;
    r1 = r5 - 1u;
    if ((r1 & u32(*gptr<u8>(r0 + 0x6214eu)) >> 4) == 0) {  // (from the original)
        r8 = 1u;
    } else {
        r8 = 0u;
    }
    if (r11 == 0) {
        goto L_6f2b90;
    }
    zf = r6 == 0;
    cf = r6 >= 0u;
    r5 = 0u;
    if (cf && !zf) {
        r11 = r3;
    }
    if (!cf || zf) {
        goto L_6f2bf8;
    }
L_6f2b18:;
    r0 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    if (r0 >= 0xb9u) {  // (from the original)
        r0 = 0u;
    }
    if (r0 != r7) {
        goto L_6f2b7c;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007485d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_6f2b7c;
    }
    if (r8 == 0) {
        if ((u32(*gptr<u8>(r4 + 0x1bu)) & 1u) != 0) {  // (from the original)
            goto L_6f2b7c;
        }
    }
    r0 = r9 + r5;
    if (u32(r0 >= r11) && !u32(r0 == r11)) {
        goto L_6f2b7c;
    }
    r0 = r0 - 0x2000u;  // (from the original)
    r1 = r0 >> 5;
    r3 = *gptr<u32>(r10 + (r1 << 2));
    r2 = r3 | lsl_r(1u, r0 & 0x1fu);  // (from the original)
    *gptr<u32>(r10 + (r1 << 2)) = u32(r2);
L_6f2b7c:;
    r5 = r5 + 1u;
    r4 = r4 + 0x1eu;  // (from the original)
    if (u32(r6 >= r5) && !u32(r6 == r5)) {
        guest::preempt();
        goto L_6f2b18;
    }
    goto L_6f2bf8;
L_6f2b90:;
    r0 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        goto L_6f2bf8;
    }
L_6f2b9c:;
    r1 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    if (r1 >= 0xb9u) {  // (from the original)
        r1 = 0u;
    }
    if (r1 != r7) {
        goto L_6f2be8;
    }
    if (r8 == 0) {
        r1 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
        if ((r1 & 1u) != 0) {
            goto L_6f2be8;
        }
    }
    r1 = r9 + r0;
    if (u32(r1 >= r3) && !u32(r1 == r3)) {
        goto L_6f2be8;
    }
    r1 = r1 - 0x2000u;  // (from the original)
    r12 = r1 >> 5;
    r1 = r1 & 0x1fu;  // (from the original)
    *gptr<u32>(r10 + (r12 << 2)) = u32(*gptr<u32>(r10 + (r12 << 2)) | lsl_r(r2, r1 & 0xff));  // (from the original)
L_6f2be8:;
    r0 = r0 + 1u;
    r4 = r4 + 0x1eu;  // (from the original)
    if (u32(r6 >= r0) && !u32(r6 == r0)) {
        guest::preempt();
        goto L_6f2b9c;
    }
L_6f2bf8:;
    r0 = r13 + 4u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f2908
GUEST_EXPORT(0x006f2908, d_006f2908::f_006f2908);

// f_006f432c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f432c {


u32 f_006f432c(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    res = r1 - 0x23u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r1 ^ 0x23u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    r3 = 1u;
    guest::cpu()->r[13] -= 8u;
    if (zf) {
        goto L_6f4504;
    }
    if (!(!zf && nf == vf)) {
        res = r1 - 0x1eu;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r1 ^ 0x1eu) & (r1 ^ res)) >> 0x1f;  // (from the original)
        if (zf) {
            goto L_6f4430;
        }
        if (!(!zf && nf == vf)) {
            if (r1 == 5u) {
                goto L_6f43b4;
            }
            if (r1 != 0xdu) {  // (from the original)
                goto L_6f43a4;
            }
            goto L_6f43e0;
        }
        if (r1 == 0x1fu) {  // (from the original)
            goto L_6f4464;
        }
        if (r1 != 0x20u) {  // (from the original)
            goto L_6f43a4;
        }
        goto L_6f44b4;
    }
    res = r1 - 0x2eu;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r1 ^ 0x2eu) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        goto L_6f45bc;
    }
    if (!(!zf && nf == vf)) {
        if (r1 == 0x28u) {  // (from the original)
            goto L_6f4538;
        }
        if (r1 != 0x2cu) {  // (from the original)
            goto L_6f43a4;
        }
        goto L_6f4588;
    }
    if (r1 == 0x32u) {  // (from the original)
        goto L_6f460c;
    }
    if (r1 == 0x38u) {  // (from the original)
        goto L_6f4640;
    }
L_6f43a4:;
    r3 = 0u;
L_6f43a8:;
    guest::cpu()->r[13] += 8u;
    r0 = r3;
    guest::cpu()->r[1] = r1;
    return r0;
L_6f43b4:;
    r12 = u32(*gptr<u8>(r0));
    r1 = r2 + (r12 >> 5);
    if (!(!u32(r1 >= 4u) || u32(r1 == 4u))) {
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 4u;
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r1 = r12 & ~0xe0u | r1 << 5;  // (from the original)
    *gptr<u8>(r0) = u8(r1);
    guest::preempt();
    goto L_6f43a8;
L_6f43e0:;
    r12 = u32(*gptr<u8>(r0 + 1u));
    r1 = (r12 >> 7) + ((u32(*gptr<u8>(r0 + 2u)) & 0xfu) << 1) + r2;  // (from the original)
    if (!(!u32(r1 >= 0x14u) || u32(r1 == 0x14u))) {  // (from the original)
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 0x14u;  // (from the original)
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r5 = r1 & 0x1eu;  // (from the original)
    r1 = r12 & ~0x80u | r1 << 7;  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 2u)) & ~0xfu | r5 >> 1;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(r1);
    *gptr<u8>(r0 + 2u) = u8(r2);
    guest::preempt();
    goto L_6f43a8;
L_6f4430:;
    r12 = u32(*gptr<u8>(r0 + 4u));
    r1 = r2 + (r12 << 0x19 >> 0x1d);  // (from the original)
    if (!(!u32(r1 >= 4u) || u32(r1 == 4u))) {
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 4u;
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r1 = r12 & ~0x70u | (r1 & 7u) << 4;  // (from the original)
    *gptr<u8>(r0 + 4u) = u8(r1);
    guest::preempt();
    goto L_6f43a8;
L_6f4464:;
    r12 = u32(*gptr<u8>(r0 + 4u));
    r1 = (r12 >> 7) + ((u32(*gptr<u8>(r0 + 5u)) & 7u) << 1) + r2;
    if (!(!u32(r1 >= 0xfu) || u32(r1 == 0xfu))) {  // (from the original)
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 0xfu;  // (from the original)
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r4 = r1 & 0xeu;  // (from the original)
    r1 = r12 & ~0x80u | r1 << 7;  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 5u)) & ~7u | r4 >> 1;
    *gptr<u8>(r0 + 4u) = u8(r1);
    *gptr<u8>(r0 + 5u) = u8(r2);
    guest::preempt();
    goto L_6f43a8;
L_6f44b4:;
    r12 = u32(*gptr<u8>(r0 + 5u));
    r1 = (r12 >> 3) + ((u32(*gptr<u8>(r0 + 6u)) & 1u) << 5) + r2;
    if (!(!u32(r1 >= 0x3fu) || u32(r1 == 0x3fu))) {  // (from the original)
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 0x3fu;  // (from the original)
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r5 = r1 & 0x20u;  // (from the original)
    r1 = r12 & ~0xf8u | r1 << 3;  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 6u)) & ~1u | r5 >> 5;
    *gptr<u8>(r0 + 5u) = u8(r1);
    *gptr<u8>(r0 + 6u) = u8(r2);
    guest::preempt();
    goto L_6f43a8;
L_6f4504:;
    r12 = u32(*gptr<u8>(r0 + 6u));
    r1 = r2 + (r12 << 0x19 >> 0x1c);  // (from the original)
    if (!(!u32(r1 >= 0xau) || u32(r1 == 0xau))) {  // (from the original)
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 0xau;  // (from the original)
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r1 = r12 & ~0x78u | (r1 & 0xfu) << 3;  // (from the original)
    *gptr<u8>(r0 + 6u) = u8(r1);
    guest::preempt();
    goto L_6f43a8;
L_6f4538:;
    r12 = u32(*gptr<u8>(r0 + 7u));
    r1 = (r12 >> 3) + ((u32(*gptr<u8>(r0 + 8u)) & 0x1fu) << 5) + r2;  // (from the original)
    if (!(!u32(r1 >= 0x3e8u) || u32(r1 == 0x3e8u))) {  // (from the original)
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 0x3e8u;  // (from the original)
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r5 = r1 & 0x3e0u;  // (from the original)
    r1 = r12 & ~0xf8u | r1 << 3;  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 8u)) & ~0x1fu | r5 >> 5;  // (from the original)
    *gptr<u8>(r0 + 7u) = u8(r1);
    *gptr<u8>(r0 + 8u) = u8(r2);
    guest::preempt();
    goto L_6f43a8;
L_6f4588:;
    r12 = u32(*gptr<u8>(r0 + 9u));
    r1 = (r12 & 7u) + r2;
    if (!(!u32(r1 >= 7u) || u32(r1 == 7u))) {
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 7u;
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r1 = r12 & ~7u | r1 & 7u;
    *gptr<u8>(r0 + 9u) = u8(r1);
    guest::preempt();
    goto L_6f43a8;
L_6f45bc:;
    r12 = u32(*gptr<u8>(r0 + 9u));
    r1 = (r12 >> 4) + ((u32(*gptr<u8>(r0 + 0xau)) & 0x3fu) << 4) + r2;  // (from the original)
    if (!(!u32(r1 >= 0x3e8u) || u32(r1 == 0x3e8u))) {  // (from the original)
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 0x3e8u;  // (from the original)
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r5 = r1 & 0x3f0u;  // (from the original)
    r1 = r12 & ~0xf0u | r1 << 4;  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 0xau)) & ~0x3fu | r5 >> 4;  // (from the original)
    *gptr<u8>(r0 + 9u) = u8(r1);
    *gptr<u8>(r0 + 0xau) = u8(r2);  // (from the original)
    guest::preempt();
    goto L_6f43a8;
L_6f460c:;
    r12 = u32(*gptr<u8>(r0 + 0xbu));  // (from the original)
    r1 = r2 + (r12 << 0x1c >> 0x1d);  // (from the original)
    if (!(!u32(r1 >= 7u) || u32(r1 == 7u))) {
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 7u;
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r1 = r12 & ~0xeu | (r1 & 7u) << 1;  // (from the original)
    *gptr<u8>(r0 + 0xbu) = u8(r1);  // (from the original)
    guest::preempt();
    goto L_6f43a8;
L_6f4640:;
    r12 = u32(*gptr<u8>(r0 + 0xcu));  // (from the original)
    r1 = r2 + (r12 << 0x19 >> 0x1a);  // (from the original)
    if (!(!u32(r1 >= 0x32u) || u32(r1 == 0x32u))) {  // (from the original)
        nf = r2 >> 0x1f;  // (from the original)
        zf = r2 == 0;
        vf = 0u;
        if (!zf && nf == vf) {
            r1 = 0x32u;  // (from the original)
        }
        if (zf || nf != vf) {
            r1 = 0u;
        }
    }
    r1 = r12 & ~0x7eu | (r1 & 0x3fu) << 1;  // (from the original)
    *gptr<u8>(r0 + 0xcu) = u8(r1);  // (from the original)
    guest::preempt();
    goto L_6f43a8;
}

}  // namespace d_006f432c
GUEST_EXPORT(0x006f432c, d_006f432c::f_006f432c);

// f_006f4f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f4f48 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x005cc024, u32(u32, u32, u32, u32)> call_005cc024;  // (from the original)
inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> call_00758104;  // (from the original)
inline constexpr guest::Function<0x007595bc, u32(u32, u32, u32, u32)> call_007595bc;  // (from the original)

u32 f_006f4f48(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r0 = r0 + 0x1900u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00758104(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_6f5070;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0 + 8u));
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    r1 = r13;
    r0 = r6 + 0x1b80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007595bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 + 1u == 0) {
        goto L_6f5070;
    } else {
        r4 = 0u;
    }
L_6f4f90:;
    r1 = r4 + (r4 << 2);
    r0 = r6 + (r1 << 7);
    guest::cpu()->r[13] = r13;
    r0 = call_00758104(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6f5078;
    }
    if (r4 + 1u == 0) {
        goto L_6f5070;
    }
    r5 = r6 + 0x1900u;  // (from the original)
    r4 = r6 + (r4 + (r4 << 2) << 7);
    r2 = 0x31u;  // (from the original)
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x31u;  // (from the original)
    r1 = r5 + 0x34u;  // (from the original)
    r0 = r4 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r5 + 0x68u;  // (from the original)
    r0 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x182u;  // (from the original)
    r1 = r5 + 0xaau;  // (from the original)
    r0 = r4 + 0xaau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r5 + 0x22cu;  // (from the original)
    r0 = r4 + 0x22cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5 + 0x274u;  // (from the original)
    *gptr<u8>(r4 + 0x26eu) = u8(u32(*gptr<u8>(r5 + 0x26eu)));  // (from the original)
    *gptr<u8>(r4 + 0x26fu) = u8(u32(*gptr<u8>(r5 + 0x26fu)));  // (from the original)
    *gptr<u8>(r4 + 0x270u) = u8(u32(*gptr<u8>(r5 + 0x270u)));  // (from the original)
    *gptr<u8>(r4 + 0x271u) = u8(u32(*gptr<u8>(r5 + 0x271u)));  // (from the original)
    *gptr<u8>(r4 + 0x272u) = u8(u32(*gptr<u8>(r5 + 0x272u)));  // (from the original)
    r0 = r4 + 0x274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5 + 0x278u;  // (from the original)
    r0 = r4 + 0x278u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00311c70(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005cc024(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r6 + 0x1900u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r6 + 0x1b80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00303cdc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_6f5070:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f5078:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6f4f90;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f4f48
GUEST_EXPORT(0x006f4f48, d_006f4f48::f_006f4f48);

// f_006f5090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5090 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)

u32 f_006f5090(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 + 0x1900u;  // (from the original)
    r4 = r1;
    r2 = 0x31u;  // (from the original)
    r0 = r5;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x31u;  // (from the original)
    r1 = r4 + 0x34u;  // (from the original)
    r0 = r5 + 0x34u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x68u;  // (from the original)
    r0 = r5 + 0x68u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x182u;  // (from the original)
    r1 = r4 + 0xaau;  // (from the original)
    r0 = r5 + 0xaau;  // (from the original)
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x22cu;  // (from the original)
    r0 = r5 + 0x22cu;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x274u;  // (from the original)
    *gptr<u8>(r5 + 0x26eu) = u8(u32(*gptr<u8>(r4 + 0x26eu)));  // (from the original)
    *gptr<u8>(r5 + 0x26fu) = u8(u32(*gptr<u8>(r4 + 0x26fu)));  // (from the original)
    *gptr<u8>(r5 + 0x270u) = u8(u32(*gptr<u8>(r4 + 0x270u)));  // (from the original)
    *gptr<u8>(r5 + 0x271u) = u8(u32(*gptr<u8>(r4 + 0x271u)));  // (from the original)
    *gptr<u8>(r5 + 0x272u) = u8(u32(*gptr<u8>(r4 + 0x272u)));  // (from the original)
    r0 = r5 + 0x274u;  // (from the original)
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4 + 0x278u;  // (from the original)
    r0 = r5 + 0x278u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00311c70(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006f5090
GUEST_EXPORT(0x006f5090, d_006f5090::f_006f5090);

// f_006f5130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5130 {

inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

u32 f_006f5130(u32 r0) {
    r0 = r0 + 0x1b80u;  // (from the original)
    return call_005cddb4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006f5130
GUEST_EXPORT(0x006f5130, d_006f5130::f_006f5130);

// f_006f5138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5138 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x005cc024, u32(u32, u32, u32, u32)> call_005cc024;  // (from the original)

u32 f_006f5138(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r2;
    r5 = r0 + (r1 + (r1 << 2) << 7);
    r6 = r3;
    r2 = 0x31u;  // (from the original)
    r1 = r4;
    r0 = r5;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x31u;  // (from the original)
    r1 = r4 + 0x34u;  // (from the original)
    r0 = r5 + 0x34u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x68u;  // (from the original)
    r0 = r5 + 0x68u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x182u;  // (from the original)
    r1 = r4 + 0xaau;  // (from the original)
    r0 = r5 + 0xaau;  // (from the original)
    r0 = call_002f8574(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x42u;  // (from the original)
    r1 = r4 + 0x22cu;  // (from the original)
    r0 = r5 + 0x22cu;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0x274u;  // (from the original)
    *gptr<u8>(r5 + 0x26eu) = u8(u32(*gptr<u8>(r4 + 0x26eu)));  // (from the original)
    *gptr<u8>(r5 + 0x26fu) = u8(u32(*gptr<u8>(r4 + 0x26fu)));  // (from the original)
    *gptr<u8>(r5 + 0x270u) = u8(u32(*gptr<u8>(r4 + 0x270u)));  // (from the original)
    *gptr<u8>(r5 + 0x271u) = u8(u32(*gptr<u8>(r4 + 0x271u)));  // (from the original)
    *gptr<u8>(r5 + 0x272u) = u8(u32(*gptr<u8>(r4 + 0x272u)));  // (from the original)
    r0 = r5 + 0x274u;  // (from the original)
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0x278u;  // (from the original)
    r0 = r5 + 0x278u;  // (from the original)
    r0 = call_00311c70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r6 == 0) {
        r0 = r5;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_005cc024(r0, r1, r2, r3);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006f5138
GUEST_EXPORT(0x006f5138, d_006f5138::f_006f5138);

// f_006f51f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f51f8 {


u32 f_006f51f8(u32 r0, u32 r1) {
    r1 = r1 + (r1 << 2);
    r0 = r0 + (r1 << 7);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006f51f8
GUEST_EXPORT(0x006f51f8, d_006f51f8::f_006f51f8);

// f_006f536c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f536c {

inline constexpr guest::Function<0x007234f8, u32(u32, u32, u32, u32)> call_007234f8;  // (from the original)
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;  // (from the original)

u32 f_006f536c(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    r1 = 0x428u;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 + 0xd5cu;  // (from the original)
    r4 = u32(s32(s8(*gptr<u8>(r1 + r0))));
    r0 = r5;
    r0 = call_007237e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6f53b8;
    }
L_6f5390:;
    r0 = r5;
    r0 = call_007234f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0xau) {  // (from the original)
        r4 = 0u;
        goto L_6f53b0;
    }
    if (r0 == 0xbu) {  // (from the original)
        r4 = sxtb(r4 - 1u);
    }
L_6f53b0:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6f53b8:;
    r1 = 0x2f635cu;  // (from the original)
    zf = *gptr<u32>(r5 + 0xb8u) == r1;  // (from the original)
    if (zf) {
        zf = *gptr<u32>(r5 + 0xbcu) == 0;  // (from the original)
    }
    if (!zf) {
        guest::preempt();
        goto L_6f53b0;
    }
    guest::preempt();
    goto L_6f5390;
}

}  // namespace d_006f536c
GUEST_EXPORT(0x006f536c, d_006f536c::f_006f536c);

// f_006f56bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f56bc {

struct __attribute__((packed)) Object_006f56bc_0 {
    u8 unknown_0[0x40e];  // (not used here)
    u8 byte_40e;
    u8 unknown_40f[0x19];  // (not used here)
    u8 byte_428;
    u8 byte_429;
};
GUEST_OFFSET(Object_006f56bc_0, byte_40e, 0x40e);  // (from the original)
GUEST_OFFSET(Object_006f56bc_0, byte_428, 0x428);  // (from the original)
GUEST_OFFSET(Object_006f56bc_0, byte_429, 0x429);  // (from the original)


void f_006f56bc(gptr<Object_006f56bc_0> arg0, u32 r1) {
    arg0->byte_40e = u8(1u);
    arg0->byte_429 = u8(r1);
    arg0->byte_428 = u8(0u);
    return;
}

}  // namespace d_006f56bc
GUEST_EXPORT(0x006f56bc, d_006f56bc::f_006f56bc);

// f_006f56d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f56d4 {

struct __attribute__((packed)) Object_006f56d4_0 {
    u8 unknown_0[0x410];  // (not used here)
    u8 byte_410;
    u8 unknown_411[0xa1f];  // (not used here)
    u32 word_e30;
};
GUEST_OFFSET(Object_006f56d4_0, byte_410, 0x410);  // (from the original)
GUEST_OFFSET(Object_006f56d4_0, word_e30, 0xe30);  // (from the original)


void f_006f56d4(gptr<Object_006f56d4_0> arg0) {
    u32 r1 = 0;
    r1 = 1u;
    arg0->word_e30 = u32(arg0->word_e30 | 8u);
    arg0->byte_410 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006f56d4
GUEST_EXPORT(0x006f56d4, d_006f56d4::f_006f56d4);

// f_006f58e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f58e0 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_006f58e0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x26cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006f58e0
GUEST_EXPORT(0x006f58e0, d_006f58e0::f_006f58e0);

// f_006f5b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5b24 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)

u32 f_006f5b24(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x24u;  // (from the original)
    r0 = call_00132364(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x26cu;  // (from the original)
    r0 = call_001323b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006f5b24
GUEST_EXPORT(0x006f5b24, d_006f5b24::f_006f5b24);

// f_006f5c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5c7c {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_006f5c7c(u32 r0) {
    u32 r1 = 0;
    r1 = 0x6f5c88u;  // (from the original)
    r0 = r0 + 0x24u;  // (from the original)
    return call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006f5c7c
GUEST_EXPORT(0x006f5c7c, d_006f5c7c::f_006f5c7c);

// f_006f6810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f6810 {

struct __attribute__((packed)) Object_006f6810_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f6810_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f6810_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f6810_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_006f6810_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f6810_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f6810_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f6810_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_006f6810_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f6810_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f6810_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f6810_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0056a378, u32(u32, u32, u32, u32)> call_0056a378;  // (from the original)

u32 f_006f6810(u32 r0, gptr<Object_006f6810_1> arg1, gptr<Object_006f6810_2> arg2, gptr<Object_006f6810_3> arg3) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r3 = arg3.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    float S8 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = r13;
    S0 = std::bit_cast<float>(arg2->word_0);
    S1 = std::bit_cast<float>(arg2->word_4);
    S2 = std::bit_cast<float>(arg2->word_8);
    S3 = S0 - std::bit_cast<float>(arg1->word_0);
    S5 = S2 - std::bit_cast<float>(arg1->word_8);
    S4 = S1 - std::bit_cast<float>(arg1->word_4);
    S0 = std::bit_cast<float>(arg3->word_0) - S0;
    S2 = std::bit_cast<float>(arg3->word_8) - S2;
    S1 = std::bit_cast<float>(arg3->word_4) - S1;
    S7 = S5 * S0 - S3 * S2;
    S8 = S4 * S2 - S5 * S1;
    S6 = S3 * S1 - S4 * S0;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S8));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S7));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S6));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    guest::cpu()->s[8] = S8;
    r0 = call_0056a378(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S1 = ((std::bit_cast<float>(*gptr<u32>(r5)) - std::bit_cast<float>(*gptr<u32>(r4))) * std::bit_cast<float>(*gptr<u32>(r13)) + (std::bit_cast<float>(*gptr<u32>(r5 + 8u)) - std::bit_cast<float>(*gptr<u32>(r4 + 8u))) * std::bit_cast<float>(*gptr<u32>(r13 + 8u))) / std::bit_cast<float>(*gptr<u32>(r13 + 4u));
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 4u)) - S1;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006f6810
GUEST_EXPORT(0x006f6810, d_006f6810::f_006f6810);

// f_006f7d34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7d34 {

struct __attribute__((packed)) Object_006f7d34_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_006f7d34_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f7d34_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006f7d34_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006f7d34_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006f7d34_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006f7d34_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Object_006f7d34_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f7d34_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f7d34_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f7d34_1, word_8, 0x8);  // (from the original)


void f_006f7d34(gptr<Object_006f7d34_0> arg0, gptr<Object_006f7d34_1> arg1, float S0, float S1, float S2) {
    float S3 = 0;
    S3 = std::bit_cast<float>(*gptr<u32>(0x6f7d88u));  // (from the original)
    S0 = S0 * S3;
    S1 = S1 * S3;
    arg0->word_8 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_0) - S0));
    arg0->word_c = u32(arg1->word_4);
    arg0->word_10 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_8) - S1));
    arg0->word_14 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_0) + S0));
    arg0->word_18 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4) + S2));
    S0 = std::bit_cast<float>(arg1->word_8) + S1;
    arg0->word_1c = u32(std::bit_cast<u32>(S0));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_006f7d34
GUEST_EXPORT(0x006f7d34, d_006f7d34::f_006f7d34);

// f_006f7dc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7dc0 {

struct __attribute__((packed)) Object_006f7dc0_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_006f7dc0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f7dc0_0, byte_4, 0x4);  // (from the original)


void f_006f7dc0(gptr<Object_006f7dc0_0> arg0) {
    u32 r1 = 0;
    arg0->byte_4 = u8(1u);
    r1 = 0x90b154u;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006f7dc0
GUEST_EXPORT(0x006f7dc0, d_006f7dc0::f_006f7dc0);

// f_006f7e04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7e04 {

struct __attribute__((packed)) Object_006f7e04_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_006f7e04_0, word_c, 0xc);  // (from the original)


void f_006f7e04(gptr<Object_006f7e04_0> arg0, u32 r1) {
    arg0->word_c = u32(r1);
    return;
}

}  // namespace d_006f7e04
GUEST_EXPORT(0x006f7e04, d_006f7e04::f_006f7e04);

// f_006f7e40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7e40 {

struct __attribute__((packed)) Object_006f7e40_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_006f7e40_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f7e40_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f7e40_0, word_c, 0xc);  // (from the original)


u32 f_006f7e40(gptr<Object_006f7e40_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    r0 = r0 + 4u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r2);
    arg0->word_c = u32(r3);
    return r0;
}

}  // namespace d_006f7e40
GUEST_EXPORT(0x006f7e40, d_006f7e40::f_006f7e40);

// f_006f7e4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7e4c {

struct __attribute__((packed)) Object_006f7e4c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_006f7e4c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f7e4c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f7e4c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f7e4c_0, word_c, 0xc);  // (from the original)


void f_006f7e4c(gptr<Object_006f7e4c_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_4 = u32(r1);
    arg0->word_0 = u32(0x90b168u);  // (from the original)
    arg0->word_8 = u32(r2);
    arg0->word_c = u32(r3);
    return;
}

}  // namespace d_006f7e4c
GUEST_EXPORT(0x006f7e4c, d_006f7e4c::f_006f7e4c);

// f_006f7e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7e64 {

struct __attribute__((packed)) Object_006f7e64_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_006f7e64_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f7e64_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f7e64_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f7e64_0, word_c, 0xc);  // (from the original)


void f_006f7e64(gptr<Object_006f7e64_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_0 = u32(0x90b168u);  // (from the original)
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006f7e64
GUEST_EXPORT(0x006f7e64, d_006f7e64::f_006f7e64);

// f_006f80dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f80dc {

struct __attribute__((packed)) Object_006f80dc_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_006f80dc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f80dc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006f80dc_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_006f80dc_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f80dc_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f80dc_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f80dc_1, word_8, 0x8);  // (from the original)


u32 f_006f80dc(gptr<Object_006f80dc_0> arg0, gptr<Object_006f80dc_1> arg1) {
    u32 r0 = arg0.addr();
    float S0 = 0;
    float S1 = 0;
    r0 = r0 + 8u;
    arg0->word_8 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_8) + std::bit_cast<float>(arg1->word_0)));
    arg0->word_c = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_c) + std::bit_cast<float>(arg1->word_4)));
    S1 = std::bit_cast<float>(arg1->word_8);
    S0 = std::bit_cast<float>(arg0->word_10) + S1;
    arg0->word_10 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006f80dc
GUEST_EXPORT(0x006f80dc, d_006f80dc::f_006f80dc);

// f_006f8114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8114 {

struct __attribute__((packed)) Object_006f8114_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_006f8114_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f8114_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006f8114_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006f8114_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Object_006f8114_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f8114_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f8114_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f8114_1, word_8, 0x8);  // (from the original)


void f_006f8114(gptr<Object_006f8114_0> arg0, gptr<Object_006f8114_1> arg1, float S0) {
    u32 r1 = arg1.addr();
    arg0->word_8 = u32(arg1->word_0);
    arg0->word_c = u32(arg1->word_4);
    r1 = arg1->word_8;
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006f8114
GUEST_EXPORT(0x006f8114, d_006f8114::f_006f8114);

// f_006f8134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8134 {

struct __attribute__((packed)) Object_006f8134_0 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_006f8134_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f8134_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f8134_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f8134_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006f8134_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006f8134_0, word_14, 0x14);  // (from the original)


void f_006f8134(gptr<Object_006f8134_0> arg0, gptr<Float3> arg1, float S0) {
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    arg0->byte_4 = u8(0u);
    arg0->word_0 = u32(0x90b178u);  // (from the original)
    S1 = arg1->v[0];
    S2 = arg1->v[1];
    S3 = arg1->v[2];
    arg0->word_8 = u32(std::bit_cast<u32>(S1));
    arg0->word_c = u32(std::bit_cast<u32>(S2));
    arg0->word_10 = u32(std::bit_cast<u32>(S3));
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_006f8134
GUEST_EXPORT(0x006f8134, d_006f8134::f_006f8134);

// f_006f81f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f81f0 {

struct __attribute__((packed)) Object_006f81f0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_006f81f0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f81f0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006f81f0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006f81f0_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006f81f0_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006f81f0_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006f81f0_0, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Object_006f81f0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f81f0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f81f0_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f81f0_2, word_8, 0x8);  // (from the original)


void f_006f81f0(gptr<Object_006f81f0_0> arg0, gptr<Float4> arg1, gptr<Object_006f81f0_2> arg2, float S0) {
    u32 r1 = arg1.addr();
    arg0->word_8 = u32(std::bit_cast<u32>(arg1->v[0]));
    arg0->word_c = u32(std::bit_cast<u32>(arg1->v[1]));
    r1 = std::bit_cast<u32>(arg1->v[2]);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(arg2->word_0);
    arg0->word_18 = u32(arg2->word_4);
    arg0->word_1c = u32(arg2->word_8);
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006f81f0
GUEST_EXPORT(0x006f81f0, d_006f81f0::f_006f81f0);

// f_006f8228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8228 {

struct __attribute__((packed)) Object_006f8228_0 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x1b];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_006f8228_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f8228_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f8228_0, word_20, 0x20);  // (from the original)


void f_006f8228(gptr<Object_006f8228_0> arg0) {
    u32 r1 = 0;
    float S0 = 0;
    arg0->byte_4 = u8(3u);
    r1 = 0x90b18cu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6f8248u));  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_006f8228
GUEST_EXPORT(0x006f8228, d_006f8228::f_006f8228);

// f_006f8368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8368 {

struct __attribute__((packed)) Object_006f8368_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_006f8368_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f8368_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006f8368_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_006f8368_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f8368_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f8368_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f8368_1, word_8, 0x8);  // (from the original)


u32 f_006f8368(gptr<Object_006f8368_0> arg0, gptr<Object_006f8368_1> arg1) {
    u32 r0 = arg0.addr();
    float S0 = 0;
    float S1 = 0;
    r0 = r0 + 8u;
    arg0->word_8 = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_8) + std::bit_cast<float>(arg1->word_0)));
    arg0->word_c = u32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_c) + std::bit_cast<float>(arg1->word_4)));
    S1 = std::bit_cast<float>(arg1->word_8);
    S0 = std::bit_cast<float>(arg0->word_10) + S1;
    arg0->word_10 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006f8368
GUEST_EXPORT(0x006f8368, d_006f8368::f_006f8368);

// f_006f83a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f83a8 {

struct __attribute__((packed)) Object_006f83a8_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_006f83a8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f83a8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006f83a8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006f83a8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006f83a8_0, word_18, 0x18);  // (from the original)


u32 f_006f83a8(gptr<Object_006f83a8_0> arg0, gptr<GridRect> arg1, float S0, float S1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    arg0->word_8 = u32(u32(arg1->min.x));
    arg0->word_c = u32(u32(arg1->min.y));
    r1 = u32(arg1->max.x);
    ea = r0 + 0x10u;  // (from the original)
    arg0->word_10 = u32(r1);
    r0 = ea + 4u;
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    arg0->word_18 = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006f83a8
GUEST_EXPORT(0x006f83a8, d_006f83a8::f_006f83a8);

// f_006f83cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f83cc {

struct __attribute__((packed)) Object_006f83cc_0 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_006f83cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f83cc_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f83cc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f83cc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006f83cc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006f83cc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006f83cc_0, word_18, 0x18);  // (from the original)


void f_006f83cc(gptr<Object_006f83cc_0> arg0, gptr<Float3> arg1, float S0, float S1) {
    float S3 = 0;
    float S4 = 0;
    arg0->byte_4 = u8(2u);
    arg0->word_0 = u32(0x90b1a0u);  // (from the original)
    S3 = arg1->v[1];
    S4 = arg1->v[2];
    arg0->word_8 = u32(std::bit_cast<u32>(arg1->v[0]));
    arg0->word_c = u32(std::bit_cast<u32>(S3));
    arg0->word_10 = u32(std::bit_cast<u32>(S4));
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    arg0->word_18 = u32(std::bit_cast<u32>(S1));
    return;
}

}  // namespace d_006f83cc
GUEST_EXPORT(0x006f83cc, d_006f83cc::f_006f83cc);

// f_006f83f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f83f8 {

struct __attribute__((packed)) Object_006f83f8_0 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0xf];  // (not used here)
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_006f83f8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f83f8_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f83f8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006f83f8_0, word_18, 0x18);  // (from the original)


void f_006f83f8(gptr<Object_006f83f8_0> arg0) {
    u32 r1 = 0;
    float S0 = 0;
    arg0->byte_4 = u8(2u);
    r1 = 0x90b1a0u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6f841cu));  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    arg0->word_18 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_006f83f8
GUEST_EXPORT(0x006f83f8, d_006f83f8::f_006f83f8);

// f_006f8540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8540 {

struct __attribute__((packed)) Object_006f8540_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_006f8540_0, word_0, 0x0);  // (from the original)


u32 f_006f8540(gptr<Object_006f8540_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 4u;
    r0 = arg0->word_0 << 0xe;  // (from the original)
    *gptr<u16>(r13) = u16(r0);
    r0 = uxth(r0);
    r13 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f8540
GUEST_EXPORT(0x006f8540, d_006f8540::f_006f8540);

// f_006f8c24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8c24 {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00317ee0, u32(u32, u32, u32, u32)> call_00317ee0;  // (from the original)
inline constexpr guest::Function<0x005b48a4, u32(u32, u32, u32, u32)> call_005b48a4;  // (from the original)
inline constexpr guest::Function<0x006cbb08, u32(u32, u32, u32, u32)> call_006cbb08;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)

u32 f_006f8c24(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_006f9638(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 - 2u < 0x18u) {  // (from the original)
        r1 = 0x95276cu;  // (from the original)
        r4 = u32(*gptr<u8>(r1 + r0));
        r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r4;
        guest::cpu()->r[13] += 8u;
        r0 = r0 + 0x5d880u;  // (from the original)
        return call_00317ee0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = r4;
    r0 = 0x4000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_005b48a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_006cbb08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r0 + 0x10u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006f8c24
GUEST_EXPORT(0x006f8c24, d_006f8c24::f_006f8c24);

// f_006f8eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8eb8 {

inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)

u32 f_006f8eb8(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    ea = r13;
    *gptr<u32>(ea) = u32(0x12u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(0xau);  // (from the original)
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(0x12u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(0xbu);  // (from the original)
    r2 = r13 + 8u;
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f8eb8
GUEST_EXPORT(0x006f8eb8, d_006f8eb8::f_006f8eb8);

// f_006f9230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9230 {

inline constexpr guest::Function<0x006c8760, u32(u32, u32, u32, u32)> call_006c8760;  // (from the original)

u32 f_006f9230(gptr<Float3> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    float S8 = 0;
    float S9 = 0;
    float S10 = 0;
    r13 = r13 - 0x88u;  // (from the original)
    S2 = arg0->v[0];
    r1 = r13 + 0x18u;  // (from the original)
    S4 = S0 * std::bit_cast<float>(*gptr<u32>(0x6f932cu));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S2));
    S1 = arg0->v[1];
    S9 = S2 + S0;
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S1));
    S3 = arg0->v[2];
    S7 = S2 - S0;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S3));
    S10 = S3 + S0;
    S8 = S3 - S0;
    S5 = S3 + S4;
    S0 = S2 + S4;
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S2));  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    S6 = S3 - S4;
    S4 = S2 - S4;
    r4 = 0u;
    *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S10));  // (from the original)
    r5 = r13;
    *gptr<u32>(r13 + 0x20u) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(std::bit_cast<u32>(S9));  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    r1 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(std::bit_cast<u32>(S2));  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    r1 = r13 + 0x5cu;  // (from the original)
    *gptr<u32>(r13 + 0x40u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 0x44u) = u32(std::bit_cast<u32>(S8));  // (from the original)
    *gptr<u32>(r13 + 0x48u) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r13 + 0x4cu) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 0x58u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 0x64u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 0x68u) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S4));
    r1 = r13 + 0x50u;  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S6));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S7));
    do {
L_6f92e0:;
        r3 = r13 + 0x6cu;  // (from the original)
        r0 = r5 + (r4 + (r4 << 1) << 2);
        r1 = *gptr<u32>(r0);
        r2 = *gptr<u32>(r0 + 4);
        *gptr<u32>(r13 + 0x74u) = u32(*gptr<u32>(r0 + 8u));  // (from the original)
        *gptr<u32>(r3) = u32(r1);
        *gptr<u32>(r3 + 4) = u32(r2);
        r1 = 0u;
        r0 = r13 + 0x6cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        guest::cpu()->s[8] = S8;
        guest::cpu()->s[9] = S9;
        guest::cpu()->s[10] = S10;
        r0 = call_006c8760(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        S7 = guest::cpu()->s[7];
        S8 = guest::cpu()->s[8];
        S9 = guest::cpu()->s[9];
        S10 = guest::cpu()->s[10];
        if (r0 == 0) {
            r13 = r13 + 0x88u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 9u);
    r0 = 1u;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006f9230
GUEST_EXPORT(0x006f9230, d_006f9230::f_006f9230);

// f_006f9330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9330 {

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0060d12c, u32(u32, u32, u32, u32)> call_0060d12c;  // (from the original)
inline constexpr guest::Function<0x0060d240, u32(u32, u32, u32, u32)> call_0060d240;  // (from the original)
inline constexpr guest::Function<0x0060d264, u32(u32, u32, u32, u32)> call_0060d264;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x007667a8, u32(u32, u32, u32, u32)> call_007667a8;  // (from the original)

u32 f_006f9330(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r2 = r1;
    r13 = r13 - 0x48u;  // (from the original)
    r1 = r0;
    ea = r13 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r4 = 0x20u;  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r6 = r13 + 0x20u;  // (from the original)
    if (r0 != 0) {
        r1 = r6;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052edfc(r0, r1, r2, r3);
        r3 = r13 + 0x10u;  // (from the original)
        r0 = r5;
        r1 = *gptr<u32>(r3);
        r2 = *gptr<u32>(r3 + 4);
        guest::cpu()->r[13] = r13;
        r0 = call_0075291c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        if (r0 != 0) {
            r1 = r6;
            r0 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0052ed04(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0060d240(r0, r1, r2, r3);
            ea = r13 + 0x18u;  // (from the original)
            r2 = *gptr<u32>(ea);
            r3 = *gptr<u32>(ea + 4);
            r1 = r13 + 0x28u;  // (from the original)
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_007667a8(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r4;
            r0 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0060d12c(r0, r1, r2, r3);
            r3 = r13 + 0x28u;  // (from the original)
            ea = r13 + 0x18u;  // (from the original)
            r1 = *gptr<u32>(ea);
            r2 = *gptr<u32>(ea + 4);
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_0060d264(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
    }
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        r1 = r13 + 0x20u;  // (from the original)
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_0052edfc(r0, r1, r2, r3);
        r3 = r13 + 8u;
        r0 = r4;
        r1 = *gptr<u32>(r3);
        r2 = *gptr<u32>(r3 + 4);
        guest::cpu()->r[13] = r13;
        r0 = call_0075291c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        if (r0 != 0) {
            r1 = r13 + 0x20u;  // (from the original)
            r0 = r13 + 0x10u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0052ed04(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0060d240(r0, r1, r2, r3);
            ea = r13 + 0x10u;  // (from the original)
            r2 = *gptr<u32>(ea);
            r3 = *gptr<u32>(ea + 4);
            r1 = r13 + 0x28u;  // (from the original)
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_007667a8(r0, r1, r2, r3);
            *gptr<u8>(r13 + 0x30u) = u8(2u);  // (from the original)
            r3 = r13 + 0x28u;  // (from the original)
            ea = r13 + 0x10u;  // (from the original)
            r1 = *gptr<u32>(ea);
            r2 = *gptr<u32>(ea + 4);
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_0060d264(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
    }
    r0 = r13 + 0x20u;  // (from the original)
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f9330
GUEST_EXPORT(0x006f9330, d_006f9330::f_006f9330);

// f_006f9494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9494 {


u32 f_006f9494(u32 r0) {
    u32 r1 = 0;
    r1 = 0x952718u;  // (from the original)
    r0 = u32(*gptr<u8>(r1 + r0));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006f9494
GUEST_EXPORT(0x006f9494, d_006f9494::f_006f9494);

// f_006f94a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f94a4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x006f973c, u32(u32, u32, u32, u32)> call_006f973c;  // (from the original)
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32, u32)> call_0075db98;  // (from the original)

u32 f_006f94a4(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r7 = r0 + 0x53480u;  // (from the original)
    r5 = 0u;
L_6f94c8:;
    r4 = 0u;
    do {
L_6f94cc:;
        r2 = r5;
        r1 = r4;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0075db98(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r8 = r0;
        if (u32(*gptr<u16>(r0)) == 0x9bu) {  // (from the original)
            goto L_6f9528;
        }
        r0 = u32(*gptr<u16>(r8));
        if (r0 == 0xa5u) {  // (from the original)
            goto L_6f9528;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 7u);
    r5 = r5 + 1u;
    if (r5 < 6u) {
        guest::preempt();
        goto L_6f94c8;
    }
    r13 = r13 + 0x10u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[13] = r13;
    return r0;
L_6f9528:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006f973c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    ea = r13;
    r0 = *gptr<u32>(ea);
    ea = r6;
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 4u;
    r0 = *gptr<u32>(ea);
    ea = r6 + 4u;
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 8u;
    r0 = *gptr<u32>(ea);
    ea = r6 + 8u;
    *gptr<u32>(ea) = u32(r0);
    r13 = r13 + 0x10u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f94a4
GUEST_EXPORT(0x006f94a4, d_006f94a4::f_006f94a4);

// f_006f9550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9550 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)

u32 f_006f9550(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fb328(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (u32(*gptr<u8>(r0 + 0x53480u)) == 1u) {  // (from the original)
        r0 = 0x9fu;  // (from the original)
    } else {
        r0 = 0xa0u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006f9550
GUEST_EXPORT(0x006f9550, d_006f9550::f_006f9550);

// f_006f9580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9580 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)

u32 f_006f9580(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 9u;
    if (u32(*gptr<u8>(r0 + 0x53400u)) != 0) {  // (from the original)
        ea = r13;
        *gptr<u32>(ea) = u32(6u);
        *gptr<u32>(ea + 4) = u32(r2);
        ea = r13 + 8u;
        *gptr<u32>(ea) = u32(6u);
        *gptr<u32>(ea + 4) = u32(0xau);  // (from the original)
        r2 = r13 + 8u;
        r1 = r13;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0052f200(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13;
    *gptr<u32>(ea) = u32(0x3au);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(0x3au);  // (from the original)
    *gptr<u32>(ea + 4) = u32(0xau);  // (from the original)
    r2 = r13 + 8u;
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f9580
GUEST_EXPORT(0x006f9580, d_006f9580::f_006f9580);

// f_006f973c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f973c {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x006a5e04, u32(u32, u32, u32, u32)> call_006a5e04;  // (from the original)
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32, u32)> call_0075db98;  // (from the original)

u32 f_006f973c(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    ea = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r14);  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r7 = r0 + 0x53480u;  // (from the original)
    r5 = 0u;
L_6f9760:;
    r4 = 0u;
    do {
L_6f9764:;
        r2 = r5;
        r1 = r4;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_0075db98(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        r8 = r0;
        r0 = u32(*gptr<u16>(r0));
        if (r0 == 0x9bu) {  // (from the original)
            goto L_6f97c0;
        }
        r0 = u32(*gptr<u16>(r8));
        if (r0 == 0xa5u) {  // (from the original)
            goto L_6f97c0;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 7u);
    r5 = r5 + 1u;
    if (r5 < 6u) {
        guest::preempt();
        goto L_6f9760;
    }
    r13 = r13 + 0xcu;  // (from the original)
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_6f97c0:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r9 = 0x85f2c0u;  // (from the original)
    r7 = r0 + 0x53480u;  // (from the original)
    r5 = 0u;
L_6f97d8:;
    r4 = 0u;
L_6f97dc:;
    r2 = r5;
    r1 = r4;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0075db98(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r8 = r0;
    if (u32(*gptr<u16>(r0)) != 0x9bu) {  // (from the original)
        r0 = u32(*gptr<u16>(r8));
        if (r0 == 0xa5u) {  // (from the original)
            goto L_6f9878;
        }
        r4 = r4 + 1u;
        if (r4 < 7u) {
            guest::preempt();
            goto L_6f97dc;
        }
        r5 = r5 + 1u;
        if (r5 < 6u) {
            guest::preempt();
            goto L_6f97d8;
        }
        r13 = r13 + 0xcu;  // (from the original)
        ea = r13;
        r13 = r13 + 0x1c;  // (from the original)
        r4 = *gptr<u32>(ea);
        r5 = *gptr<u32>(ea + 4);
        r6 = *gptr<u32>(ea + 8);
        r7 = *gptr<u32>(ea + 0xc);  // (from the original)
        r8 = *gptr<u32>(ea + 0x10);  // (from the original)
        r9 = *gptr<u32>(ea + 0x14);  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2 = r5;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006a5e04(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S1 = std::bit_cast<float>(*gptr<u32>(r9));
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 8u)) + S1;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    ea = r13;
    r0 = *gptr<u32>(ea);
    ea = r6;
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 4u;
    r0 = *gptr<u32>(ea);
    ea = r6 + 4u;
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 8u;
    r0 = *gptr<u32>(ea);
    ea = r6 + 8u;
    *gptr<u32>(ea) = u32(r0);
    r13 = r13 + 0xcu;  // (from the original)
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_6f9878:;
    r2 = r5;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_006a5e04(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = std::bit_cast<float>(*gptr<u32>(r13)) + std::bit_cast<float>(*gptr<u32>(0x85f2b4u));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 8u)) + std::bit_cast<float>(*gptr<u32>(r9));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r6) = u32(std::bit_cast<u32>(S0));
    ea = r13 + 4u;
    r0 = *gptr<u32>(ea);
    ea = r6 + 4u;
    *gptr<u32>(ea) = u32(r0);
    ea = r13 + 8u;
    r0 = *gptr<u32>(ea);
    ea = r6 + 8u;
    *gptr<u32>(ea) = u32(r0);
    r13 = r13 + 0xcu;  // (from the original)
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006f973c
GUEST_EXPORT(0x006f973c, d_006f973c::f_006f973c);

// f_006f9900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9900 {

inline constexpr guest::Function<0x002fccc4, u32(u32, u32, u32, u32)> call_002fccc4;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059da08, u32(u32, u32, u32, u32)> call_0059da08;  // (from the original)
inline constexpr guest::Function<0x0059daa0, u32(u32, u32, u32, u32)> call_0059daa0;  // (from the original)

u32 f_006f9900(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
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
    r5 = r0;
    r0 = r2;
    r6 = r1;
    r2 = r1;
    r3 = 0u;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_6f9974;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fccc4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f9974;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd010(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f9974;
    }
    res = u32(*gptr<u8>(r0 + 0xfu)) << 0x1c;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_6f9974;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0059daa0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f9974;
    }
    r1 = r6;
    r0 = r5;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r14 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    return call_0059da08(r0, r1, r2, r3);
L_6f9974:;
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

}  // namespace d_006f9900
GUEST_EXPORT(0x006f9900, d_006f9900::f_006f9900);

// f_006f9978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9978 {

struct __attribute__((packed)) Object_006f9978_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_006f9978_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x00317eac, u32(u32, u32, u32, u32)> call_00317eac;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x005cdfd0, u32(u32, u32, u32, u32)> call_005cdfd0;  // (from the original)
inline constexpr guest::Function<0x006a2c2c, u32(u32, u32, u32, u32)> call_006a2c2c;  // (from the original)
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> call_006a6e90;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_006f9978(gptr<Object_006f9978_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x88u;  // (from the original)
    r9 = r0;
    r0 = arg0->word_28;
    if (r0 == 0) {
        goto L_6f9c00;
    }
    r3 = 0x80u;  // (from the original)
    r2 = r3;
    ea = r13 + 0x50u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    r0 = r9;
    r4 = r0;
    r1 = r0;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0057bb98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = r0;
    r1 = r0;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f9bd4;
    } else {
        r8 = 0u;
    }
L_6f9a00:;
    r4 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r2 = r4;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f9bb4;
    }
    r4 = u32(*gptr<u16>(r0));
    r5 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r2 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (u32(r4 >= 0x168u) && !u32(r4 == 0x168u)) {  // (from the original)
        goto L_6f9bb4;
    }
    if (r7 == 0) {
        goto L_6f9bb4;
    }
    *gptr<u32>(r13 + 0x60u) = u32(r8);  // (from the original)
    *gptr<u32>(r13 + 0x64u) = u32(r8);  // (from the original)
    r4 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r3 = r4;
    r1 = r13 + 0x64u;  // (from the original)
    r0 = r13 + 0x60u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    *gptr<u32>(r13 + 4u) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_006a6e90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r10;
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f9bac;
    }
L_6f9acc:;
    r4 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    r2 = r4;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0075d608(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r4 = *gptr<u32>(r13 + 0x4cu) + *gptr<u32>(r13 + 0x64u);  // (from the original)
    r2 = r4;
    r1 = *gptr<u32>(r13 + 0x60u) + *gptr<u32>(r13 + 0x48u);  // (from the original)
    r0 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317eac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r5 = 0u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005cdfd0(r0, r1, r2, r3);
    res = r4;
    r1 = r0;
    if (res >> 0x1f != (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        r4 = r5;
        goto L_6f9b50;
    }
    if (s32(r1) < s32(r4)) {
        r4 = r0;
    }
L_6f9b50:;
    r6 = *gptr<u32>(r13 + 0x4cu) + *gptr<u32>(r13 + 0x64u);  // (from the original)
    r3 = r4 & 0xffu;  // (from the original)
    r2 = r6;
    r1 = *gptr<u32>(r13 + 0x60u) + *gptr<u32>(r13 + 0x48u);  // (from the original)
    r0 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a2c2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_6f9acc;
    }
L_6f9bac:;
L_6f9bb4:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_6f9a00;
    }
L_6f9bd4:;
    r0 = r13 + 0x50u;  // (from the original)
L_6f9c00:;
    r13 = r13 + 0x68u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f9978
GUEST_EXPORT(0x006f9978, d_006f9978::f_006f9978);

// f_006f9df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9df4 {

inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fccc4, u32(u32, u32, u32, u32)> call_002fccc4;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059daa0, u32(u32, u32, u32, u32)> call_0059daa0;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)

u32 f_006f9df4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r2;
    r7 = r1;
    r2 = r1;
    r6 = r0;
    r1 = r0;
    r3 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_6f9e8c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fccc4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6f9e8c;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd010(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6f9e8c;
    }
    res = u32(*gptr<u8>(r0 + 0xfu)) << 0x1c;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_6f9e8c;
    }
    *gptr<u32>(r13) = u32(0u);
    r1 = 0x95bfdcu;  // (from the original)
    r3 = r7;
    r2 = r6;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0059daa0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6f9e8c;
    }
    r1 = r7;
    r0 = r6;
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3 = *gptr<u32>(ea);
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r6 = *gptr<u32>(ea + 0xc);  // (from the original)
    r7 = *gptr<u32>(ea + 0x10);  // (from the original)
    r14 = *gptr<u32>(ea + 0x14);  // (from the original)
    r2 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    return call_0059e65c(r0, r1, r2, r3);
L_6f9e8c:;
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r6 = *gptr<u32>(ea + 0xc);  // (from the original)
    r7 = *gptr<u32>(ea + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006f9df4
GUEST_EXPORT(0x006f9df4, d_006f9df4::f_006f9df4);

// f_006fa0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa0a0 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x004e0cec, u32(u32, u32, u32, u32)> call_004e0cec;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;  // (from the original)
inline constexpr guest::Function<0x0076a028, u32(u32, u32, u32, u32)> call_0076a028;  // (from the original)

u32 f_006fa0a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r6 = r1;
    r8 = r0;
    r7 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r4 = r0;
    if (r0 == 0) {
        goto L_6fa154;
    }
    r3 = 0u;
    r2 = r7;
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_6fa154;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0x3bu) {  // (from the original)
        goto L_6fa154;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076a028(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0u;
        r2 = r0;
        *gptr<u32>(r13) = u32(r0);
        r3 = r4;
        r1 = r7;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_004e0cec(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r1 = r0;
        r0 = r8;
        ea = r13;
        r13 = r13 + 0x20;  // (from the original)
        r3 = *gptr<u32>(ea);
        guest::cpu()->r[13] = r13;
        return call_002fc934(r0, r1, r2, r3);
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00768174(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            goto L_6fa154;
        }
    }
    r1 = r5;
    r0 = r8;
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    return call_002fc934(r0, r1, r2, r3);
L_6fa154:;
    r0 = r8;
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3 = *gptr<u32>(ea);
    r1 = 0x95bfdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fc934(r0, r1, r2, r3);
}

}  // namespace d_006fa0a0
GUEST_EXPORT(0x006fa0a0, d_006fa0a0::f_006fa0a0);

// f_006fa1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa1fc {

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32, u32)> call_00605618;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_006fa1fc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x98u;  // (from the original)
    r7 = r0;
    r8 = r1;
    r0 = 0x1fu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6fa3c4;
    }
    r1 = r0;
    r0 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f224(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r13;
    r9 = r13 + 0x50u;  // (from the original)
    r0 = 0x1fu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = r0;
    r1 = r9;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r6 = r13 + 0x20u;  // (from the original)
    r1 = r9;
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(*gptr<u32>(r13 + 0x40u));  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32(*gptr<u32>(r13 + 0x44u));  // (from the original)
    r1 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0c0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6 + 8u;
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r13 + 0x20u));  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(*gptr<u32>(r13 + 0x24u));  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0c0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6fa31c;
    }
L_6fa2a8:;
    r0 = r13 + 0x18u;  // (from the original)
    if (r4 == 0) {
        goto L_6fa2fc;
    }
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6fa2fc;
    }
    r0 = u32(*gptr<u16>(r0));
    guest::cpu()->r[13] = r13;
    r0 = call_00605618(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 5u;
    }
    if (zf) {
        goto L_6fa3cc;
    }
    zf = r0 == 7u;
    if (!zf) {
        zf = r0 == 0x61u;  // (from the original)
    }
    if (zf) {
        goto L_6fa3cc;
    }
L_6fa2fc:;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::preempt();
        goto L_6fa2a8;
    }
L_6fa31c:;
    r0 = r5 + 8u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x30u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r13 + 0x34u));  // (from the original)
    r1 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0c0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
L_6fa34c:;
    r1 = r13 + 0x50u;  // (from the original)
    r0 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x68u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        *gptr<u32>(r7) = u32(*gptr<u32>(r13 + 8u));
        *gptr<u32>(r8) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    }
    r0 = r13 + 0x50u;  // (from the original)
L_6fa3c4:;
    r13 = r13 + 0x98u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6fa3cc:;
    r1 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r13 + 0x14u));  // (from the original)
    r0 = r5 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0c0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_6fa34c;
}

}  // namespace d_006fa1fc
GUEST_EXPORT(0x006fa1fc, d_006fa1fc::f_006fa1fc);

// f_006fa430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa430 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x006a6bc8, u32(u32, u32, u32, u32)> call_006a6bc8;  // (from the original)
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32, u32)> call_0075db98;  // (from the original)

u32 f_006fa430(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r7 = r0 + 0x53480u;  // (from the original)
    r5 = 0u;
L_6fa450:;
    r4 = 0u;
    do {
L_6fa454:;
        r2 = r5;
        r1 = r4;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0075db98(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r8 = r0;
        r0 = u32(*gptr<u16>(r0));
        if (r0 == 0x9bu) {  // (from the original)
            goto L_6fa4ac;
        }
        r0 = u32(*gptr<u16>(r8));
        if (r0 == 0xa5u) {  // (from the original)
            goto L_6fa4ac;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 7u);
    r5 = r5 + 1u;
    if (r5 < 6u) {
        guest::preempt();
        goto L_6fa450;
    }
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[13] = r13;
    return r0;
L_6fa4ac:;
    guest::cpu()->r[13] = r13;
    r0 = call_006a6bc8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0);
    r2 = r0;
    r0 = *gptr<u32>(r0 + 4u);
    r2 = *gptr<u32>(r2 + 8u);
    *gptr<u32>(r6) = u32(r1);
    ea = r6 + 4u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006fa430
GUEST_EXPORT(0x006fa430, d_006fa430::f_006fa430);

// f_006fa4d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa4d0 {

inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)

u32 f_006fa4d0(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    ea = r13;
    *gptr<u32>(ea) = u32(0x2bu);  // (from the original)
    *gptr<u32>(ea + 4) = u32(0xau);  // (from the original)
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(0x2bu);  // (from the original)
    *gptr<u32>(ea + 4) = u32(0xcu);  // (from the original)
    r2 = r13 + 8u;
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006fa4d0
GUEST_EXPORT(0x006fa4d0, d_006fa4d0::f_006fa4d0);

// f_006fa524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa524 {

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32, u32)> call_00605618;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_006fa524(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x98u;  // (from the original)
    r7 = r0;
    r8 = r1;
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6fa6e0;
    }
    r1 = r0;
    r0 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f224(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r13;
    r9 = r13 + 0x50u;  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = r0;
    r1 = r9;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r6 = r13 + 0x20u;  // (from the original)
    r1 = r9;
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(*gptr<u32>(r13 + 0x40u));  // (from the original)
    r2 = *gptr<u32>(r13 + 0x44u);  // (from the original)
    r0 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r13 + 0x34u) = u32(r2);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0c0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6 + 8u;
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r13 + 0x20u));  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(*gptr<u32>(r13 + 0x24u));  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0c0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6fa638;
    }
L_6fa5d0:;
    r0 = r13 + 0x18u;  // (from the original)
    if (r4 == 0) {
        goto L_6fa618;
    }
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6fa618;
    }
    r0 = u32(*gptr<u16>(r0));
    guest::cpu()->r[13] = r13;
    r0 = call_00605618(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 1u) {
        goto L_6fa6e8;
    }
L_6fa618:;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::preempt();
        goto L_6fa5d0;
    }
L_6fa638:;
    r0 = r5 + 8u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x30u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r13 + 0x34u));  // (from the original)
    r1 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0c0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
L_6fa668:;
    r1 = r13 + 0x50u;  // (from the original)
    r0 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x68u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        *gptr<u32>(r7) = u32(*gptr<u32>(r13 + 8u));
        *gptr<u32>(r8) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    }
    r0 = r13 + 0x50u;  // (from the original)
L_6fa6e0:;
    r13 = r13 + 0x98u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6fa6e8:;
    r1 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r13 + 0x14u));  // (from the original)
    r0 = r5 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0c0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    guest::preempt();
    goto L_6fa668;
}

}  // namespace d_006fa524
GUEST_EXPORT(0x006fa524, d_006fa524::f_006fa524);

// f_006fa728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa728 {


u32 f_006fa728(u32 r0) {
    u32 r1 = 0;
    r1 = 0x95276cu;  // (from the original)
    r0 = u32(*gptr<u8>(r1 + r0));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006fa728
GUEST_EXPORT(0x006fa728, d_006fa728::f_006fa728);

// f_006fa738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa738 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)

u32 f_006fa738(u32 r0_unused, u32 r1, u32 r2) {
    if (r2 == 0) {
        r1 = 0x85f7f8u;  // (from the original)
        r2 = 0x10u;  // (from the original)
        return call_00134544(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
    }
    if (r2 != 1u) {
        guest::cpu()->r[1] = r1;
        return guest::cpu()->r[0];
    }
    r1 = 0x85f808u;  // (from the original)
    r2 = 0x10u;  // (from the original)
    return call_00134544(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006fa738
GUEST_EXPORT(0x006fa738, d_006fa738::f_006fa738);

// f_006fa76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa76c {

inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> call_006a6e90;  // (from the original)
inline constexpr guest::Function<0x006fa524, u32(u32, u32, u32, u32)> call_006fa524;  // (from the original)

u32 f_006fa76c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r7 = r0;
    r6 = r1;
    r4 = 8u;
    r5 = 6u;
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_006fa524(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    r1 = r6;
    r0 = r7;
    ea = r13 + 8u;
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_006a6e90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006fa76c
GUEST_EXPORT(0x006fa76c, d_006fa76c::f_006fa76c);

// f_006faa70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006faa70 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0052f188, u32(u32, u32, u32, u32)> call_0052f188;  // (from the original)
inline constexpr guest::Function<0x006a6bc8, u32(u32, u32, u32, u32)> call_006a6bc8;  // (from the original)

u32 f_006faa70(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_006a6bc8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    r2 = r0;
    *gptr<u32>(r13 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r1);  // (from the original)
    r1 = r13 + 0x14u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
    ea = r13 + 0x14u;  // (from the original)
    r2 = *gptr<u32>(ea) - 4u;
    ea = r13 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea) - 3u;
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r13 + 0x14u;  // (from the original)
    r2 = *gptr<u32>(ea) + 4u;
    ea = r13 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea) + 3u;
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r2 = r13 + 8u;
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f188(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006faa70
GUEST_EXPORT(0x006faa70, d_006faa70::f_006faa70);

// f_006fac2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fac2c {

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;  // (from the original)
inline constexpr guest::Function<0x00317eac, u32(u32, u32, u32, u32)> call_00317eac;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x005cdfd0, u32(u32, u32, u32, u32)> call_005cdfd0;  // (from the original)
inline constexpr guest::Function<0x006a2c2c, u32(u32, u32, u32, u32)> call_006a2c2c;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_006fac2c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x40u;  // (from the original)
    r7 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6fad74;
    }
    r0 = *gptr<u32>(r0 + 0x28u);  // (from the original)
    if (r0 == 0) {
        goto L_6fad74;
    }
    r3 = 0x80u;  // (from the original)
    r2 = r3;
    ea = r13 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    r1 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fad54;
    }
L_6fac9c:;
    r4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1 = *gptr<u32>(r13 + 8u);
    r2 = r4;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00317eac(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r5 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = *gptr<u32>(r13 + 8u);
    r2 = r7;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00315788(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005cdfd0(r0, r1, r2, r3);
    res = r4;
    if (res >> 0x1f != (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        r4 = r5;
        goto L_6fad08;
    }
    if (s32(r0) < s32(r4)) {
        r4 = r0;
    }
L_6fad08:;
    r6 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1 = *gptr<u32>(r13 + 8u);
    r3 = r4 & 0xffu;  // (from the original)
    r2 = r6;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a2c2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_6fac9c;
    }
L_6fad54:;
    r0 = r13 + 0x20u;  // (from the original)
L_6fad74:;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006fac2c
GUEST_EXPORT(0x006fac2c, d_006fac2c::f_006fac2c);

// f_006fad7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fad7c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x005b48a4, u32(u32, u32, u32, u32)> call_005b48a4;  // (from the original)
inline constexpr guest::Function<0x006bc388, u32(u32, u32, u32, u32)> call_006bc388;  // (from the original)
inline constexpr guest::Function<0x006cbb08, u32(u32, u32, u32, u32)> call_006cbb08;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)

u32 f_006fad7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r0;
    r0 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r5 = 0u;
        *gptr<u32>(r13) = u32(*gptr<u32>(0x85f7a4u));  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_006f9638(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0 - 2u;
        if (r1 < 0x18u) {  // (from the original)
            r1 = 0x95276cu;  // (from the original)
            r0 = u32(*gptr<u8>(r1 + r0));
            if (r0 < 4u) {
                r5 = u32(*gptr<u8>(r13 + r0));
            }
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r5;
        r0 = r0 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb7e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r4;
    r0 = 0x2000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fae4c;
    }
    r0 = r4 - 0x56u;  // (from the original)
    r5 = r0 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xfff951c8u;  // (from the original)
    r1 = r5;
    r0 = r0 - r2;
    guest::cpu()->r[13] = r13;
    r0 = call_006bc388(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(s32(s8(*gptr<u8>(r0))));
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_6fae4c;
    }
    r4 = r0 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r3 = *gptr<u32>(ea);
    r0 = r0 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002fb7e8(r0, r1, r2, r3);
L_6fae4c:;
    r1 = r4;
    r0 = 0x4000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_005b48a4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_006cbb08(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 = r0 + 0x1238u;  // (from the original)
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r0 = 0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006fad7c
GUEST_EXPORT(0x006fad7c, d_006fad7c::f_006fad7c);

// f_006fae98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fae98 {

inline constexpr guest::Function<0x0030512c, u32(u32, u32, u32, u32)> call_0030512c;  // (from the original)
inline constexpr guest::Function<0x006fa7ac, u32(u32, u32, u32, u32)> call_006fa7ac;  // (from the original)

u32 f_006fae98(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r0;
    r0 = call_0030512c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r4 != 3u) {
        if (r4 == 4u) {
            goto L_6faef4;
        }
        if (r4 == 5u) {
            goto L_6faf0c;
        }
        if (r4 == 2u) {
            goto L_6faf24;
        }
        if (r4 == 1u) {
            goto L_6faf3c;
        }
        r0 = r5;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_006fa7ac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = 0x85f822u;  // (from the original)
    r0 = u32(*gptr<u16>(r1 + (u32(*gptr<u8>(r0 + 0x1eu)) << 1)));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6faef4:;
    r1 = 0x85f82cu;  // (from the original)
    r0 = u32(*gptr<u16>(r1 + (u32(*gptr<u8>(r0 + 0x1eu)) << 1)));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6faf0c:;
    r1 = 0x85f836u;  // (from the original)
    r0 = u32(*gptr<u16>(r1 + (u32(*gptr<u8>(r0 + 0x1eu)) << 1)));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6faf24:;
    r1 = 0x85f840u;  // (from the original)
    r0 = u32(*gptr<u16>(r1 + (u32(*gptr<u8>(r0 + 0x1eu)) << 1)));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6faf3c:;
    r1 = 0x85f84au;  // (from the original)
    r0 = u32(*gptr<u16>(r1 + (u32(*gptr<u8>(r0 + 0x1eu)) << 1)));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006fae98
GUEST_EXPORT(0x006fae98, d_006fae98::f_006fae98);

// f_006faf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006faf68 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0052f188, u32(u32, u32, u32, u32)> call_0052f188;  // (from the original)
inline constexpr guest::Function<0x0052f248, u32(u32, u32, u32, u32)> call_0052f248;  // (from the original)
inline constexpr guest::Function<0x006a6bc8, u32(u32, u32, u32, u32)> call_006a6bc8;  // (from the original)
inline constexpr guest::Function<0x007482d0, u32(u32, u32, u32, u32)> call_007482d0;  // (from the original)

u32 f_006faf68(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x48u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f248(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006a6bc8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    r2 = r0;
    *gptr<u32>(r13 + 0x28u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(r1);  // (from the original)
    r1 = r13 + 0x2cu;  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
    ea = r13 + 0x2cu;  // (from the original)
    r2 = *gptr<u32>(ea) - 4u;
    ea = r13 + 0x28u;  // (from the original)
    r1 = *gptr<u32>(ea) - 3u;
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r13 + 0x2cu;  // (from the original)
    r2 = *gptr<u32>(ea) + 4u;
    ea = r13 + 0x28u;  // (from the original)
    r1 = *gptr<u32>(ea) + 3u;
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r2 = r13 + 0x18u;  // (from the original)
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f188(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r6;
    r0 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    *gptr<u32>(r0 + 4) = u32(r2);
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007482d0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006faf68
GUEST_EXPORT(0x006faf68, d_006faf68::f_006faf68);

// f_006fb0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb0cc {


u32 f_006fb0cc(u32 r0) {
    u32 r1 = 0;
    r1 = 0x952742u;  // (from the original)
    r0 = u32(*gptr<u8>(r1 + r0));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006fb0cc
GUEST_EXPORT(0x006fb0cc, d_006fb0cc::f_006fb0cc);

// f_006fb27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb27c {


u32 f_006fb27c(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = 2u;
    if (r0 == 0) {
        goto L_6fb2a8;
    }
    if (r0 == 1u) {
        r2 = 8u;
        goto L_6fb2a8;
    }
    if (r0 == 2u) {
        r2 = 0xeu;  // (from the original)
        goto L_6fb2a8;
    }
    if (r0 == 3u) {
        r2 = 0x14u;  // (from the original)
    }
L_6fb2a8:;
    if (r1 < 6u) {
        r2 = r2 + r1 & 0xffu;  // (from the original)
    }
    r0 = u32(*gptr<u8>(0x952718u + r2));  // (from the original)
    return r0;
}

}  // namespace d_006fb27c
GUEST_EXPORT(0x006fb27c, d_006fb27c::f_006fb27c);

// f_006fb3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb3f4 {


u32 f_006fb3f4(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 zf = 0;
    zf = r0 == 0;
    r2 = r0;
    r0 = 2u;
    if (zf) {
        goto L_6fb420;
    }
    if (r2 == 1u) {
        r0 = 8u;
        goto L_6fb420;
    }
    if (r2 == 2u) {
        r0 = 0xeu;  // (from the original)
        goto L_6fb420;
    }
    if (r2 == 3u) {
        r0 = 0x14u;  // (from the original)
    }
L_6fb420:;
    if (r1 < 6u) {
        r0 = r0 + r1 & 0xffu;  // (from the original)
    }
    return r0;
}

}  // namespace d_006fb3f4
GUEST_EXPORT(0x006fb3f4, d_006fb3f4::f_006fb3f4);

// f_006fb430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb430 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0052f188, u32(u32, u32, u32, u32)> call_0052f188;  // (from the original)
inline constexpr guest::Function<0x006a6bc8, u32(u32, u32, u32, u32)> call_006a6bc8;  // (from the original)

u32 f_006fb430(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_006a6bc8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    r2 = r0;
    *gptr<u32>(r13 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r1);  // (from the original)
    r1 = r13 + 0x14u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
    ea = r13 + 0x14u;  // (from the original)
    r2 = *gptr<u32>(ea) - 5u;
    ea = r13 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea) - 1u;
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r13 + 0x14u;  // (from the original)
    r2 = *gptr<u32>(ea) + 5u;
    ea = r13 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea) + 1u;
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r2 = r13 + 8u;
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f188(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006fb430
GUEST_EXPORT(0x006fb430, d_006fb430::f_006fb430);

// f_006fb4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb4bc {

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059da08, u32(u32, u32, u32, u32)> call_0059da08;  // (from the original)
inline constexpr guest::Function<0x0059daa0, u32(u32, u32, u32, u32)> call_0059daa0;  // (from the original)

u32 f_006fb4bc(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
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
    r4 = r0;
    r0 = r2;
    r5 = r1;
    r2 = r1;
    r3 = 0u;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fb508;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0059daa0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fb508;
    }
    r1 = r5;
    r0 = r4;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r14 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    return call_0059da08(r0, r1, r2, r3);
L_6fb508:;
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

}  // namespace d_006fb4bc
GUEST_EXPORT(0x006fb4bc, d_006fb4bc::f_006fb4bc);

// f_006fb50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb50c {

inline constexpr guest::Function<0x001b2114, u32(u32, u32, u32, u32)> call_001b2114;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059daa0, u32(u32, u32, u32, u32)> call_0059daa0;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x005ba02c, u32(u32, u32, u32, u32)> call_005ba02c;  // (from the original)
inline constexpr guest::Function<0x0076ad64, u32(u32, u32, u32, u32)> call_0076ad64;  // (from the original)

u32 f_006fb50c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r2;
    r7 = r1;
    r2 = r1;
    r6 = r0;
    r1 = r0;
    r3 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_6fb5f8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_6fb5f8;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0x7au) {  // (from the original)
        goto L_6fb5bc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r3 = 0x62162u;  // (from the original)
    r2 = 1u;
    r1 = r5;
    r0 = r0 + r3;
    guest::cpu()->r[13] = r13;
    r0 = call_001b2114(r0, r1, r2, r3);
L_6fb574:;
    *gptr<u32>(r13) = u32(0u);
    r1 = 0x95bfdcu;  // (from the original)
    r3 = r7;
    r2 = r6;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0059daa0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6fb5f8;
    }
    r1 = r7;
    r0 = r6;
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3 = *gptr<u32>(ea);
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r6 = *gptr<u32>(ea + 0xc);  // (from the original)
    r7 = *gptr<u32>(ea + 0x10);  // (from the original)
    r14 = *gptr<u32>(ea + 0x14);  // (from the original)
    r2 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    return call_0059e65c(r0, r1, r2, r3);
L_6fb5bc:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076ad64(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r0 + 0x1744cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ba02c(r0, r1, r2, r3);
    guest::preempt();
    goto L_6fb574;
L_6fb5f8:;
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r6 = *gptr<u32>(ea + 0xc);  // (from the original)
    r7 = *gptr<u32>(ea + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006fb50c
GUEST_EXPORT(0x006fb50c, d_006fb50c::f_006fb50c);

// f_006fb604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb604 {

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059daa0, u32(u32, u32, u32, u32)> call_0059daa0;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)

u32 f_006fb604(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
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
    r4 = r0;
    r0 = r2;
    r5 = r1;
    r2 = r1;
    r3 = 0u;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fb654;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0059daa0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fb654;
    }
    r1 = r5;
    r0 = r4;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r14 = *gptr<u32>(ea + 0xc);  // (from the original)
    r2 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    return call_0059e65c(r0, r1, r2, r3);
L_6fb654:;
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

}  // namespace d_006fb604
GUEST_EXPORT(0x006fb604, d_006fb604::f_006fb604);

// f_006fc854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fc854 {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;  // (from the original)
inline constexpr guest::Function<0x00748724, u32(u32, u32, u32, u32)> call_00748724;  // (from the original)
inline constexpr guest::Function<0x0076f9b4, u32(u32, u32, u32, u32)> call_0076f9b4;  // (from the original)

u32 f_006fc854(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
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
    ea = r13 - 0x30;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r14);  // (from the original)
    r13 = r13 - 0x320u;  // (from the original)
    r5 = r2;
    r10 = r0;
    r11 = 0x2e6u;  // (from the original)
    r0 = r13;
    r1 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r8 = 0u;
    r9 = 1u;
L_6fc87c:;
    r4 = 0u;
L_6fc880:;
    r0 = *gptr<u32>(r13 + 0x2f4u);  // (from the original)
    r3 = 0u;
    r2 = r4;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00720358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fc8f0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00748724(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_6fc8f0;
    }
    r7 = r13;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fc8f0;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r0 = r0 - 0x2000u;  // (from the original)
    *gptr<u8>(r7 + (r0 >> 3)) = u8(u32(*gptr<u8>(r7 + (r0 >> 3))) | lsl_r(r9, r0 & 7u));
L_6fc8f0:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6fc880;
    }
    r8 = r8 + 1u;
    if (r8 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6fc87c;
    }
    r8 = 0u;
L_6fc90c:;
    r4 = 0u;
L_6fc910:;
    r0 = *gptr<u32>(r13 + 0x2f4u);  // (from the original)
    r3 = 1u;
    r2 = r4;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00720358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fc980;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00748724(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_6fc980;
    }
    r7 = r13;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fc980;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2000u;  // (from the original)
    r2 = r0 & 7u;
    r1 = u32(*gptr<u8>(r7 + (r0 >> 3))) | lsl_r(r9, r2 & 0xff);  // (from the original)
    *gptr<u8>(r7 + (r0 >> 3)) = u8(r1);
L_6fc980:;
    r4 = r4 + 1u;
    if (r4 < 8u) {
        guest::preempt();
        goto L_6fc910;
    }
    r8 = r8 + 1u;
    if (r8 < 8u) {
        guest::preempt();
        goto L_6fc90c;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076f9b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (!u32(r0 >= 1u) || u32(r0 == 1u)) {
        goto L_6fcb1c;
    }
    r0 = r13;
    r1 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0x29dfu;  // (from the original)
    r8 = 0x30cbu;  // (from the original)
L_6fc9c0:;
    r0 = r13 + 0x2e8u;  // (from the original)
    r1 = uxth(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fca2c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00748724(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_6fca2c;
    }
    r11 = r13 + 0x2e8u;  // (from the original)
    r6 = r13;
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fca2c;
    }
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2000u;  // (from the original)
    r2 = r0 & 7u;
    *gptr<u8>(r6 + (r0 >> 3)) = u8(u32(*gptr<u8>(r6 + (r0 >> 3))) | lsl_r(r9, r2 & 0xff));  // (from the original)
L_6fca2c:;
    r4 = r4 + 1u;
    if (!u32(r4 >= r8) || u32(r4 == r8)) {
        guest::preempt();
        goto L_6fc9c0;
    }
    r4 = 0x3130u;  // (from the original)
    r11 = r4 | u32(s32(r4) >> 7);
L_6fca48:;
    r1 = uxth(r4);
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fcab4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00748724(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_6fcab4;
    }
    r8 = r13 + 0x2e8u;  // (from the original)
    r6 = r13;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fcab4;
    }
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6b8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2000u;  // (from the original)
    r2 = r0 & 7u;
    r1 = u32(*gptr<u8>(r6 + (r0 >> 3))) | lsl_r(r9, r2 & 0xff);  // (from the original)
    *gptr<u8>(r6 + (r0 >> 3)) = u8(r1);
L_6fcab4:;
    r4 = r4 + 1u;
    if (!u32(r4 >= r11) || u32(r4 == r11)) {
        guest::preempt();
        goto L_6fca48;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076f9b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fcb1c;
    }
    if (r0 != r7) {
        goto L_6fcb1c;
    }
    r1 = u32(*gptr<u8>(r10 + 0x31u));  // (from the original)
    r2 = (r7 << 7) - (r7 + (r7 << 1));
    r0 = *gptr<u32>(r10 + 0x10u) + (r2 << 3);  // (from the original)
    *gptr<u32>(r10 + 0x10u) = u32(r0);  // (from the original)
    if (r1 != 0x67u) {  // (from the original)
        r0 = 0x64u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002ff6f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (s32(r0) >= s32(0x28u)) {  // (from the original)
            goto L_6fcb1c;
        }
    }
    *gptr<u8>(r10 + 0x31u) = u8(r5);  // (from the original)
L_6fcb1c:;
    r13 = r13 + 0x2fcu;  // (from the original)
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006fc854
GUEST_EXPORT(0x006fc854, d_006fc854::f_006fc854);

// f_006fd258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fd258 {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;  // (from the original)

u32 f_006fd258(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r10 = r0;
    r11 = r1;
    r9 = 0u;
L_6fd268:;
    r8 = 0u;
    r7 = r8;
    r5 = u32(*gptr<u8>(0x865950u + r9));  // (from the original)
L_6fd278:;
    r4 = 0u;
L_6fd27c:;
    r3 = 0u;
    r2 = r4;
    r1 = r7;
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_00720358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fd2e8;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fd2e8;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    if (r0 == 0) {
        goto L_6fd2e8;
    }
    r0 = u32(*gptr<u8>(r0 + 0x19u)) & 0xfu;  // (from the original)
    if (r0 >= 0xeu) {  // (from the original)
        r0 = 0u;
    }
    if (r0 == r5) {
        r8 = r8 + 1u;
    }
L_6fd2e8:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6fd27c;
    }
    r7 = r7 + 1u;
    if (r7 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6fd278;
    }
    r7 = 0u;
L_6fd304:;
    r4 = 0u;
L_6fd308:;
    r3 = 1u;
    r2 = r4;
    r1 = r7;
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_00720358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fd374;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6fd374;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6fd374;
    }
    r0 = u32(*gptr<u8>(r0 + 0x19u)) & 0xfu;  // (from the original)
    if (r0 >= 0xeu) {  // (from the original)
        r0 = 0u;
    }
    if (r0 == r5) {
        r8 = r8 + 1u;
    }
L_6fd374:;
    r4 = r4 + 1u;
    if (r4 < 8u) {
        guest::preempt();
        goto L_6fd308;
    }
    r7 = r7 + 1u;
    if (r7 < 8u) {
        guest::preempt();
        goto L_6fd304;
    }
    if (r8 >= 3u) {
        r1 = *gptr<u32>(r10 + 0x14u);  // (from the original)
        r0 = r8 + (r8 << 3) + (r8 << 4);
        *gptr<u8>(r10 + 0x34u) = u8(r5);  // (from the original)
        r1 = r1 + (r0 << 3);
        *gptr<u32>(r10 + 0x14u) = u32(r1);  // (from the original)
    }
    r9 = r9 + 1u;
    if (r9 < 5u) {
        guest::preempt();
        goto L_6fd268;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006fd258
GUEST_EXPORT(0x006fd258, d_006fd258::f_006fd258);

// f_006fef38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fef38 {

inline constexpr guest::Function<0x001def90, u32(u32, u32, u32, u32)> call_001def90;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x0030512c, u32(u32, u32, u32, u32)> call_0030512c;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32, u32, u32)> call_0030fbb4;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x006fc144, u32(u32, u32, u32, u32)> call_006fc144;  // (from the original)
inline constexpr guest::Function<0x006ff188, u32(u32, u32, u32, u32)> call_006ff188;  // (from the original)
inline constexpr guest::Function<0x0070eebc, u32(u32, u32, u32, u32)> call_0070eebc;  // (from the original)
inline constexpr guest::Function<0x007166a4, u32(u32, u32, u32, u32)> call_007166a4;  // (from the original)
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;  // (from the original)

u32 f_006fef38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0u;
    r11 = r0 + 0x20u;  // (from the original)
    r9 = r7;
    r10 = r13 + 0x14u;  // (from the original)
L_6fef54:;
    r5 = r7 & 0xffu;  // (from the original)
    r1 = r5;
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb7e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r0 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ff170;
    }
    res = u32(*gptr<u8>(0x5711u + r4)) << 0x1c;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_6ff170;
    }
    r4 = r4 + 0x56c4u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001def90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0070eebc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r1 = r5;
    r0 = r4;
    if (zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_006fc144(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        guest::cpu()->r[13] = r13;
        r0 = call_006ff188(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r8 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r0 + 0x5d900u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030fbb4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = u32(*gptr<u8>(r8 + 0x17u));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0030512c(r0, r1, r2, r3);
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    r3 = r13 + 0x18u;  // (from the original)
    r2 = r13 + 0x28u;  // (from the original)
    r1 = r13 + 0x24u;  // (from the original)
    r0 = r4;
    *gptr<u32>(r13 + 4u) = u32(r9);
    *gptr<u32>(r13) = u32(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_007166a4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r6 = 0u;
    if (r5 >= *gptr<u32>(r13 + 0x18u)) {  // (from the original)
        goto L_6ff0f0;
    }
L_6ff038:;
    r4 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    if (r4 >= *gptr<u32>(r13 + 0x14u)) {  // (from the original)
        goto L_6ff0e0;
    }
L_6ff048:;
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r3 = 0u;
    r2 = r4;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00720358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x2cu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ff0d0;
    }
    r0 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ff0d0;
    }
    r0 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ff0d0;
    }
    r0 = u32(*gptr<u8>(r0 + 0x17u)) & 0xfu;  // (from the original)
    if (r0 >= 5u) {
        goto L_6ff0cc;
    }
    if (r0 == 0) {
        goto L_6ff0cc;
    }
    if (r0 == 1u) {
        r6 = r6 + 2u;
        goto L_6ff0d0;
    }
    if (r0 == 2u) {
        r6 = r6 + 4u;
    }
    goto L_6ff0d0;
L_6ff0cc:;
    r6 = r6 + 1u;
L_6ff0d0:;
    r4 = r4 + 1u;
    if (r4 < *gptr<u32>(r13 + 0x14u)) {  // (from the original)
        guest::preempt();
        goto L_6ff048;
    }
L_6ff0e0:;
    r5 = r5 + 1u;
    if (r5 < *gptr<u32>(r13 + 0x18u)) {  // (from the original)
        guest::preempt();
        goto L_6ff038;
    }
L_6ff0f0:;
    r4 = 0u;
    r0 = u32(*gptr<u8>(*gptr<u32>(r13 + 0xcu) + 0x1eu));  // (from the original)
    if (r6 != 0) {
        r4 = 1u;
    }
    if (r0 != 2u) {
        if (r0 == 3u) {
            goto L_6ff134;
        }
        if (r0 != 4u) {
            goto L_6ff164;
        }
        goto L_6ff148;
    }
    if (r6 >= 0xau) {  // (from the original)
        goto L_6ff150;
    }
    if (r6 >= 4u) {
        goto L_6ff160;
    }
    goto L_6ff164;
L_6ff134:;
    if (r6 >= 0x11u) {  // (from the original)
        goto L_6ff150;
    }
    if (r6 >= 9u) {
        goto L_6ff160;
    }
    goto L_6ff164;
L_6ff148:;
    if (r6 < 0x21u) {  // (from the original)
        goto L_6ff158;
    }
L_6ff150:;
    r4 = 3u;
    goto L_6ff164;
L_6ff158:;
    if (r6 < 0x11u) {  // (from the original)
        goto L_6ff164;
    }
L_6ff160:;
    r4 = 2u;
L_6ff164:;
    r1 = r4;
    r0 = r8;
    *gptr<u8>(r0 + 0x16u) = u8(r1);  // (from the original)
L_6ff170:;
    r7 = r7 + 1u;
    if (r7 < 4u) {
        guest::preempt();
        goto L_6fef54;
    }
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006fef38
GUEST_EXPORT(0x006fef38, d_006fef38::f_006fef38);

// f_006ff640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ff640 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x00303110, u32(u32, u32, u32, u32)> call_00303110;  // (from the original)
inline constexpr guest::Function<0x00303138, u32(u32, u32, u32, u32)> call_00303138;  // (from the original)
inline constexpr guest::Function<0x003031c8, u32(u32, u32, u32, u32)> call_003031c8;  // (from the original)
inline constexpr guest::Function<0x003031f0, u32(u32, u32, u32, u32)> call_003031f0;  // (from the original)
inline constexpr guest::Function<0x00303770, u32(u32, u32, u32, u32)> call_00303770;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x006ba62c, u32(u32, u32, u32, u32)> call_006ba62c;  // (from the original)
inline constexpr guest::Function<0x0070f010, u32(u32, u32, u32, u32)> call_0070f010;  // (from the original)
inline constexpr guest::Function<0x0070f034, u32(u32, u32, u32, u32)> call_0070f034;  // (from the original)
inline constexpr guest::Function<0x0071c124, u32(u32, u32, u32, u32)> call_0071c124;  // (from the original)
inline constexpr guest::Function<0x0072031c, u32(u32, u32, u32, u32)> call_0072031c;  // (from the original)
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;  // (from the original)
inline constexpr guest::Function<0x007203f0, u32(u32, u32, u32, u32)> call_007203f0;  // (from the original)
inline constexpr guest::Function<0x007485b4, u32(u32, u32, u32, u32)> call_007485b4;  // (from the original)
inline constexpr guest::Function<0x00768fac, u32(u32, u32, u32, u32)> call_00768fac;  // (from the original)
inline constexpr guest::Function<0x00769cc0, u32(u32, u32, u32, u32)> call_00769cc0;  // (from the original)

u32 f_006ff640(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r0;
    r6 = 0u;
    r9 = r1;
    r8 = r2;
L_6ff654:;
    r4 = 0u;
L_6ff658:;
    r3 = 0u;
    r2 = r4;
    r1 = r6;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00720358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00768fac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r0 = r7;
    if (zf) {
        goto L_6ff924;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00769cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00303770(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ff998;
    }
    r1 = r7;
    r0 = r0 + 0x5544u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071c124(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_003031f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r7;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006ba62c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005361a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_007485b4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = *gptr<u32>(r5);
            *gptr<u32>(r5) = u32(r0 + r1);
        }
    }
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_003031c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r7;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006ba62c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005361a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_007485b4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = *gptr<u32>(r5);
            *gptr<u32>(r5) = u32(r0 + r1);
        }
    }
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_00303110(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r7;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006ba62c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005361a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_007485b4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = *gptr<u32>(r5);
            *gptr<u32>(r5) = u32(r0 + r1);
        }
    }
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_00303138(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r7;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006ba62c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005361a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_007485b4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = *gptr<u32>(r5);
            *gptr<u32>(r5) = u32(r0 + r1);
        }
    }
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0070f010(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r7;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006ba62c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005361a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_007485b4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = *gptr<u32>(r5);
            *gptr<u32>(r5) = u32(r0 + r1);
        }
    }
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0070f034(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ff998;
    }
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006ba62c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ff990;
    }
L_6ff90c:;
    guest::cpu()->r[13] = r13;
    r0 = call_007485b4(r0, r1, r2, r3);
    *gptr<u32>(r5) = u32(r0 + *gptr<u32>(r5));
    goto L_6ff990;
L_6ff924:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ff998;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ff998;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ff998;
    }
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006ba62c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_6ff90c;
    }
L_6ff990:;
L_6ff998:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6ff658;
    }
    r6 = r6 + 1u;
    if (r6 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6ff654;
    }
    r6 = 0u;
L_6ff9b4:;
    r4 = 0u;
L_6ff9b8:;
    r3 = 1u;
    r2 = r4;
    r1 = r6;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00720358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ffa54;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ffa54;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ffa54;
    }
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006ba62c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_007485b4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r5);
        *gptr<u32>(r5) = u32(r0 + r1);
    }
L_6ffa54:;
    r4 = r4 + 1u;
    if (r4 < 8u) {
        guest::preempt();
        goto L_6ff9b8;
    }
    r6 = r6 + 1u;
    if (r6 < 8u) {
        guest::preempt();
        goto L_6ff9b4;
    }
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0072031c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r4;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006ba62c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005361a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_007485b4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = *gptr<u32>(r5);
            *gptr<u32>(r5) = u32(r0 + r1);
        }
    }
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_007203f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r4;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006ba62c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_005361a8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_007485b4(r0, r1, r2, r3);
            r1 = *gptr<u32>(r5);
            *gptr<u32>(r5) = u32(r0 + r1);
        }
        r0 = r13;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006ff640
GUEST_EXPORT(0x006ff640, d_006ff640::f_006ff640);

// f_006ffb40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ffb40 {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0030512c, u32(u32, u32, u32, u32)> call_0030512c;  // (from the original)
inline constexpr guest::Function<0x00305158, u32(u32, u32, u32, u32)> call_00305158;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;  // (from the original)
inline constexpr guest::Function<0x00748724, u32(u32, u32, u32, u32)> call_00748724;  // (from the original)

u32 f_006ffb40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
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
    ea = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0xa0u;  // (from the original)
    r9 = r1;
    r11 = r0;
    r10 = r3;
    r0 = r13;
    r1 = 0x67u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0u;
    r8 = r0;
    *gptr<u8>(r13 + 0x67u) = u8(r0);  // (from the original)
L_6ffb6c:;
    r0 = *gptr<u32>(r13 + 0x74u);  // (from the original)
    r1 = r8 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030512c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x68u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00305158(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ffc90;
    }
    if (r8 == 2u) {
        r8 = 3u;
        guest::preempt();
        goto L_6ffb6c;
    } else {
        r7 = 0u;
    }
L_6ffba0:;
    r4 = 0u;
L_6ffba4:;
    r0 = *gptr<u32>(r13 + 0x68u);  // (from the original)
    r3 = 0u;
    r2 = r4;
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00720358(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ffc78;
    }
    r5 = r13;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ffc78;
    }
    r1 = u32(*gptr<u8>(r0 + 0x19u));  // (from the original)
    r6 = r1 & 0xfu;  // (from the original)
    if (r6 >= 0xeu) {  // (from the original)
        r6 = 0u;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00748724(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r6 != 0) {
        if (r6 == 1u) {
            goto L_6ffc48;
        }
        if (r6 == 2u) {
            goto L_6ffc60;
        }
        if (r6 == 3u) {
            goto L_6ffcbc;
        }
        if (r6 == 4u) {
            goto L_6ffcd4;
        }
        goto L_6ffc78;
    }
    *gptr<u8>(r5 + r0) = u8(u32(*gptr<u8>(r5 + r0)) | 1u);
    *gptr<u8>(r13 + 0x67u) = u8(u32(*gptr<u8>(r13 + 0x67u)) | 1u);  // (from the original)
    goto L_6ffc78;
L_6ffc48:;
    *gptr<u8>(r5 + r0) = u8(u32(*gptr<u8>(r5 + r0)) | 2u);
    r0 = u32(*gptr<u8>(r13 + 0x67u)) | 2u;  // (from the original)
    goto L_6ffc74;
L_6ffc60:;
    *gptr<u8>(r5 + r0) = u8(u32(*gptr<u8>(r5 + r0)) | 4u);
    r0 = u32(*gptr<u8>(r13 + 0x67u)) | 4u;  // (from the original)
L_6ffc74:;
    *gptr<u8>(r13 + 0x67u) = u8(r0);  // (from the original)
L_6ffc78:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6ffba4;
    }
    r7 = r7 + 1u;
    if (r7 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6ffba0;
    }
L_6ffc90:;
    r8 = r8 + 1u;
    if (r8 < 6u) {
        guest::preempt();
        goto L_6ffb6c;
    }
    *gptr<u8>(r9) = u8(0x67u);  // (from the original)
    r0 = u32(*gptr<u8>(r13 + 0x67u));  // (from the original)
    r1 = r13;
    if (r0 != 0x1fu) {  // (from the original)
        r1 = 0u;
        goto L_6ffd68;
    }
    goto L_6ffcec;
L_6ffcbc:;
    *gptr<u8>(r5 + r0) = u8(u32(*gptr<u8>(r5 + r0)) | 8u);
    r0 = u32(*gptr<u8>(r13 + 0x67u)) | 8u;  // (from the original)
    guest::preempt();
    goto L_6ffc74;
L_6ffcd4:;
    *gptr<u8>(r5 + r0) = u8(u32(*gptr<u8>(r5 + r0)) | 0x10u);  // (from the original)
    r0 = u32(*gptr<u8>(r13 + 0x67u)) | 0x10u;  // (from the original)
    guest::preempt();
    goto L_6ffc74;
L_6ffcec:;
    r0 = 0u;
    if (r10 == 0) {
        goto L_6ffd34;
    }
L_6ffcf8:;
    if (u32(*gptr<u8>(r1 + r0)) != 0x1fu) {  // (from the original)
        goto L_6ffd14;
    }
    if (r0 == 0x65u) {  // (from the original)
        goto L_6ffd14;
    }
    r1 = 0x249f0u;  // (from the original)
    goto L_6ffd4c;
L_6ffd14:;
    r0 = r0 + 1u & 0xffu;  // (from the original)
    if (r0 < 0x67u) {  // (from the original)
        guest::preempt();
        goto L_6ffcf8;
    }
    if (r10 != 0) {
        r1 = 0x186a0u;  // (from the original)
        goto L_6ffd68;
    }
    goto L_6ffd64;
L_6ffd34:;
    if (u32(*gptr<u8>(r1 + r0)) != 0x1fu) {  // (from the original)
        goto L_6ffd54;
    }
    if (r0 == 0x65u) {  // (from the original)
        goto L_6ffd54;
    }
    r1 = 0x1388u;  // (from the original)
L_6ffd4c:;
    *gptr<u8>(r9) = u8(r0);
    goto L_6ffd68;
L_6ffd54:;
    r0 = r0 + 1u & 0xffu;  // (from the original)
    if (r0 < 0x67u) {  // (from the original)
        guest::preempt();
        goto L_6ffd34;
    }
L_6ffd64:;
    r1 = 0x9c4u;  // (from the original)
L_6ffd68:;
    ea = r11;
    *gptr<u32>(ea) = u32(r1);
    r13 = r13 + 0x7cu;  // (from the original)
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006ffb40
GUEST_EXPORT(0x006ffb40, d_006ffb40::f_006ffb40);
