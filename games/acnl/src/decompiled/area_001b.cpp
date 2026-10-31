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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_001c55b0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x8eb3f8u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x9e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001324a8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x8ebb18u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r0 + 0xcu) = u32(r4);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    ea = r0 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7604(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 - 0xa00u;  // (from the original)
    r1 = 0x1b0314u;  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xae8u) = u32(~0u);  // (from the original)
    *gptr<u32>(r0 + 0xae4u) = u32(r4);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    r0 = 0xac3a14u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_001bcbb8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r0 = 0xac4e40u;  // (from the original)
    r0 = call_001bd6f0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r4 & r0;
    r0 = 0xac8c6cu;  // (from the original)
    r0 = call_001bc684(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r4 & r0;
    r0 = 0xacfa98u;  // (from the original)
    r0 = call_001bdedc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r4 & r0;
    r0 = 0xacfdc4u;  // (from the original)
    r0 = call_001be284(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r4 & r0;
    r0 = 0xad0ff0u;  // (from the original)
    r0 = call_001bc1fc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 & r4;
    guest::cpu()->r[13] += 8u;
    return r0;
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
    u32 r0 = 0;
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
    u32 cf = 0;
    r13 = r13 - 0x24;  // (from the original)
    r13 = r13 - 0x24u;  // (from the original)
    r10 = 0xc800u;  // (from the original)
    r5 = 0xac3a14u;  // (from the original)
    r0 = 0x140cu;  // (from the original)
    r11 = 0x952c54u;  // (from the original)
    r4 = *gptr<u32>(r0 + r5);
    r9 = *gptr<u32>(r11);
    zf = r4 == 0;
    if (zf) {
        goto L_1b1350;
    }
    do {
L_1b1330:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b1350:;
    r0 = 0x1424u;  // (from the original)
    r4 = *gptr<u32>(r0 + r5);
    zf = r4 == 0;
    if (zf) {
        goto L_1b1380;
    }
    do {
L_1b1360:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b1380:;
    r0 = r5 + 0x1400u;  // (from the original)
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x1400u;  // (from the original)
    r0 = r0 + 0x14u;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x1000u;  // (from the original)
    r0 = r0 + 0x420u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b13ac:;
        r0 = r5 + (r4 << 8);
        r1 = r0 + 8u;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0013f134(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf = r4 >= 0x14u;  // (from the original)
        guest::preempt();
    } while (!cf);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002f747c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x9047f8u;  // (from the original)
    zf = r9 == 0;
    r7 = 0u;
    r8 = 1u;
    if (!zf) {
        r0 = 0x88e3d4u;  // (from the original)
        r3 = r13 + 8u;
        r2 = r9;
        *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
        r1 = r10;
        r0 = r5;
        *gptr<u32>(r13 + 8u) = u32(r6);
        *gptr<u32>(r13 + 4u) = u32(r7);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_0031758c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xac4e40u;  // (from the original)
    r0 = 0x3e0cu;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x26c00u;  // (from the original)
    r4 = *gptr<u32>(r0 + r5);
    zf = r4 == 0;
    if (zf) {
        goto L_1b1448;
    }
    do {
L_1b1428:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b1448:;
    r0 = 0x3e24u;  // (from the original)
    r4 = *gptr<u32>(r0 + r5);
    zf = r4 == 0;
    if (zf) {
        goto L_1b1478;
    }
    do {
L_1b1458:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b1478:;
    r0 = r5 + 0x3c00u;  // (from the original)
    r0 = r0 + 0x208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x3c00u;  // (from the original)
    r0 = r0 + 0x214u;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x3000u;  // (from the original)
    r0 = r0 + 0xe20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b14a4:;
        r0 = r5 + (r4 << 8);
        r1 = r0 + 8u;
        r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0013f134(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf = r4 >= 0x3eu;  // (from the original)
        guest::preempt();
    } while (!cf);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002f747c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r9 == 0;
    if (!zf) {
        r0 = 0x88e3d4u;  // (from the original)
        r3 = r13 + 0x10u;  // (from the original)
        r2 = r9;
        *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
        r1 = r10;
        r0 = r5;
        *gptr<u32>(r13 + 0x10u) = u32(r6);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r7);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_0031758c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xac8c6cu;  // (from the original)
    r0 = 0x6e0cu;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x44c00u;  // (from the original)
    r4 = *gptr<u32>(r0 + r5);
    zf = r4 == 0;
    if (zf) {
        goto L_1b1538;
    }
    do {
L_1b1518:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b1538:;
    r0 = 0x6e24u;  // (from the original)
    r4 = *gptr<u32>(r0 + r5);
    zf = r4 == 0;
    if (zf) {
        goto L_1b1568;
    }
    do {
L_1b1548:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b1568:;
    r0 = r5 + 0x6c00u;  // (from the original)
    r0 = r0 + 0x208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x6c00u;  // (from the original)
    r0 = r0 + 0x214u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x6000u;  // (from the original)
    r0 = r0 + 0xe20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b1594:;
        r0 = r5 + (r4 << 8);
        r1 = r0 + 8u;
        r0 = *gptr<u32>(r13 + 8u);
        guest::cpu()->r[13] = r13;
        r0 = call_0013f134(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf = r4 >= 0x6eu;  // (from the original)
        guest::preempt();
    } while (!cf);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002f747c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r9 == 0;
    if (!zf) {
        r0 = 0x88e3d4u;  // (from the original)
        r3 = r13 + 8u;
        r2 = r9;
        *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
        r1 = r10;
        r0 = r5;
        *gptr<u32>(r13 + 8u) = u32(r6);
        *gptr<u32>(r13 + 4u) = u32(r7);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_0031758c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xacfa98u;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x1e00u;  // (from the original)
    r4 = *gptr<u32>(r5 + 0x30cu);  // (from the original)
    zf = r4 == 0;
    if (zf) {
        goto L_1b1624;
    }
    do {
L_1b1604:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b1624:;
    r4 = *gptr<u32>(r5 + 0x324u);  // (from the original)
    zf = r4 == 0;
    if (zf) {
        goto L_1b1650;
    }
    do {
L_1b1630:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b1650:;
    r0 = r5 + 0x308u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x314u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x320u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b1674:;
        r0 = r5 + (r4 << 8);
        r1 = r0 + 8u;
        r0 = r5 + 0x314u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0013f134(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf = r4 >= 3u;
        guest::preempt();
    } while (!cf);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002f747c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r9 == 0;
    if (!zf) {
        r0 = 0x88e3d4u;  // (from the original)
        r3 = r13 + 0x10u;  // (from the original)
        r2 = r9;
        *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
        r1 = r10;
        r0 = r5;
        *gptr<u32>(r13 + 0x10u) = u32(r6);  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r7);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_0031758c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xacfdc4u;  // (from the original)
    r9 = *gptr<u32>(r11);
    r0 = 0xbe00u;  // (from the original)
    r10 = r5 + 0x1000u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r0);  // (from the original)
    r4 = *gptr<u32>(r10 + 0x20cu);  // (from the original)
    zf = r4 == 0;
    if (zf) {
        goto L_1b170c;
    }
    do {
L_1b16ec:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b170c:;
    r4 = *gptr<u32>(r10 + 0x224u);  // (from the original)
    zf = r4 == 0;
    if (zf) {
        goto L_1b1738;
    }
    do {
L_1b1718:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b1738:;
    r0 = r5 + 0x1000u;  // (from the original)
    r0 = r0 + 0x208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x1000u;  // (from the original)
    r0 = r0 + 0x214u;  // (from the original)
    r10 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x1000u;  // (from the original)
    r0 = r0 + 0x220u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b1764:;
        r0 = r5 + (r4 << 8);
        r1 = r0 + 8u;
        r0 = r10;
        guest::cpu()->r[13] = r13;
        r0 = call_0013f134(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf = r4 >= 0x12u;  // (from the original)
        guest::preempt();
    } while (!cf);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002f747c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r9 == 0;
    if (!zf) {
        r0 = 0x88e3d4u;  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r7);
        r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
        r3 = r13 + 8u;
        r2 = r9;
        r0 = r5;
        *gptr<u32>(r13 + 8u) = u32(r6);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_0031758c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xad0ff0u;  // (from the original)
    r0 = 0x1f0cu;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x12200u;  // (from the original)
    r4 = *gptr<u32>(r0 + r5);
    zf = r4 == 0;
    if (zf) {
        goto L_1b17f8;
    }
    do {
L_1b17d8:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b17f8:;
    r0 = 0x1f24u;  // (from the original)
    r4 = *gptr<u32>(r0 + r5);
    zf = r4 == 0;
    if (zf) {
        goto L_1b1828;
    }
    do {
L_1b1808:;
        r0 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b19f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00138744(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        zf = r4 == 0;
        guest::preempt();
    } while (!zf);
L_1b1828:;
    r0 = r5 + 0x1c00u;  // (from the original)
    r0 = r0 + 0x308u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x1c00u;  // (from the original)
    r0 = r0 + 0x314u;  // (from the original)
    r11 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x1000u;  // (from the original)
    r0 = r0 + 0xf20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132478(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b1854:;
        r0 = r5 + (r4 << 8);
        r1 = r0 + 8u;
        r0 = r11;
        guest::cpu()->r[13] = r13;
        r0 = call_0013f134(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        cf = r4 >= 0x1fu;  // (from the original)
        guest::preempt();
    } while (!cf);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002f747c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r9 == 0;
    if (!zf) {
        r0 = 0x88e3d4u;  // (from the original)
        r3 = r13 + 8u;
        r2 = r9;
        *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
        r1 = r10;
        r0 = r5;
        *gptr<u32>(r13 + 8u) = u32(r6);
        *gptr<u32>(r13 + 4u) = u32(r7);
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_0031758c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x24u;  // (from the original)
    r13 = r13 + 0x24;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
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
    r3 = ~0u;
    r0 = r4 + 4u;
    r2 = r3;
    r1 = 0x28cu;  // (from the original)
    r0 = call_003193e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4);
    if (r1 != r0) {
        goto L_1b1998;
    }
    r1 = 0u;
    r0 = r4 + 0x10u;  // (from the original)
    r0 = call_007586b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1b1998;
    } else {
        r4 = 1u;
    }
    r0 = r6;
    r1 = r5;
    r2 = 0x290u;  // (from the original)
    r0 = call_00134544(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_1b199c;
L_1b1988:;
    r1 = *gptr<u32>(r4 + 8u);
    r0 = *gptr<u32>(r6 + 8u);
    if (u32(r1 >= r0) && !u32(r1 == r0)) {
        guest::preempt();
        goto L_1b1934;
    }
L_1b1998:;
    r4 = 0u;
L_1b199c:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    arg0->word_0 = u32(r4);
    arg0->word_4 = u32(r4);
    arg0->word_8 = u32(r4);
    arg0->byte_c = u8(r4);
    r0 = r0 + 0x10u;  // (from the original)
    r0 = call_002ff368(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x10u;  // (from the original)
    *gptr<u16>(r0 + 0xdu) = u16(r4);  // (from the original)
    *gptr<u8>(r0 + 0xfu) = u8(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
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
    u32 r2 = 0;
    u32 zf = 0;
    r2 = arg0->word_8 + r1;
    arg0->word_8 = u32(r2);
    r1 = u32(arg0->byte_2);
    zf = r1 == 2u;
    if (!zf) {
        zf = r1 == 1u;
    }
    if (!zf) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = arg0->word_4;
    zf = r1 == 0;
    if (!zf) {
        zf = r2 == 0;
    }
    if (zf) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (!u32(r1 >= r2) || u32(r1 == r2)) {
        r1 = 2u;
        arg0->byte_2 = u8(r1);
    }
    guest::cpu()->r[1] = r1;
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
    u32 r1 = 0;
    r1 = u32(arg0->byte_2);
    if (r1 == 2u) {
        r1 = 4u;
        arg0->byte_2 = u8(r1);
    }
    guest::cpu()->r[1] = r1;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0u;
    arg0->byte_0 = u8(r0);
    arg0->byte_1 = u8(r0);
    arg0->byte_2 = u8(r0);
    arg0->word_4 = u32(r0);
    arg0->word_8 = u32(r0);
    r0 = r4 + 0xcu;  // (from the original)
    r0 = call_0024ea1c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
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
    u32 r1 = arg1.addr();
    arg0->byte_0 = u8(u32(arg1->byte_0));
    arg0->byte_1 = u8(u32(arg1->byte_1));
    r1 = u32(arg1->byte_2);
    arg0->byte_2 = u8(r1);
    guest::cpu()->r[1] = r1;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    res = r1;
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
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
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r1;
    r5 = r0;
    r6 = r2;
    r1 = 0x95bfdcu;  // (from the original)
    r7 = r3;
    r0 = r0 + (r4 << 2);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + r4;
    r8 = 0u;
    *gptr<u8>(r0 + 0x40u) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = 0x95bfdcu;  // (from the original)
        r3 = r7;
        r2 = r6;
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_002fc994(r0, r1, r2, r3);
        r1 = r7;
        r0 = r6;
        ea = r13;
        r13 = r13 + 0x20;  // (from the original)
        r3 = *gptr<u32>(ea);
        r4 = *gptr<u32>(ea + 4);
        r5 = *gptr<u32>(ea + 8);
        r6 = *gptr<u32>(ea + 0xc);  // (from the original)
        r7 = *gptr<u32>(ea + 0x10);  // (from the original)
        r8 = *gptr<u32>(ea + 0x14);  // (from the original)
        r9 = *gptr<u32>(ea + 0x18);  // (from the original)
        r14 = *gptr<u32>(ea + 0x1c);  // (from the original)
        r2 = 1u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        return call_0059e65c(r0, r1, r2, r3);
    }
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r6 = *gptr<u32>(ea + 0xc);  // (from the original)
    r7 = *gptr<u32>(ea + 0x10);  // (from the original)
    r8 = *gptr<u32>(ea + 0x14);  // (from the original)
    r9 = *gptr<u32>(ea + 0x18);  // (from the original)
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
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    r6 = 0u;
    r13 = r13 - 0x318u;  // (from the original)
    r5 = r0;
    r4 = r6;
    do {
L_1b1c84:;
        r0 = r5 + (r4 << 2);
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, r3);
    r2 = 5u;
    r3 = 0u;
    r1 = r2;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe9c8(r0, r1, r2, r3);
    r1 = 0x2fc20cu;  // (from the original)
    r3 = 3u;
    r2 = 4u;
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13;
    r1 = 3u;
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003004c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r6 - 3u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r6 ^ 3u) & (r6 ^ res)) >> 0x1f;  // (from the original)
    r7 = 0u;
    if (nf != vf) {
        r10 = r13 + 0x2e8u;  // (from the original)
    }
    if (nf == vf) {
        goto L_1b1d68;
    }
L_1b1cf0:;
    r8 = r10 + (r7 << 2);
    r9 = 0u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0x95u) {  // (from the original)
        goto L_1b1d58;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001b1b5c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_1b1d18:;
        r0 = r5 + (r4 << 2);
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r3 = r9;
            r2 = r8;
            r1 = r4;
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_001b21f4(r0, r1, r2, r3);
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
    res = r6 - 3u;
    r7 = r7 + 1u;
    if (res >> 0x1f != ((r6 ^ 3u) & (r6 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_1b1cf0;
    }
L_1b1d68:;
    r1 = 0x2f777cu;  // (from the original)
    r3 = 3u;
    r2 = 4u;
    r0 = r13 + 0x2e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x318u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b1c70
GUEST_EXPORT(0x001b1c70, d_001b1c70::f_001b1c70);

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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r0;
    r4 = r1;
    r7 = r3;
    r8 = r2;
    r1 = r2;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe53c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006b9914(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0x4eu) {  // (from the original)
        if (r4 >= 0x10u) {  // (from the original)
            goto L_1b232c;
        }
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00768174(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r6 + r4;
        r6 = r6 + (r4 << 2);
        if (r0 == 0) {
            goto L_1b22b8;
        }
        r1 = r13;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_006b9924(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r5 + 0x40u) = u8(r7);  // (from the original)
        r0 = 1u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x1764au;  // (from the original)
    r0 = r0 + 4u + r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0030c578(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_1b232c;
L_1b22b8:;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00768cc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1b232c;
    }
    r1 = r13;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0x2bu;  // (from the original)
    r4 = r0;
    r0 = r13 + 4u;
    if (!zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_006b9924(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r4 == 0x27u;  // (from the original)
        if (!zf) {
            zf = r4 == 0x24u;  // (from the original)
        }
        if (zf) {
            goto L_1b2324;
        }
        if (r4 == 0x3fu) {  // (from the original)
            goto L_1b2354;
        }
        goto L_1b2378;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1b2340;
    }
L_1b2324:;
L_1b232c:;
    r0 = 0u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1b2340:;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006b9924(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_1b2378;
L_1b2354:;
    r1 = r13 + 4u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_006b9c98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1b2378:;
    r1 = r13 + 4u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r5 + 0x40u) = u8(r7);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b21f4
GUEST_EXPORT(0x001b21f4, d_001b21f4::f_001b21f4);

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
    u32 ea = 0;
    u32 res = 0;
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
    r13 = r13 - 0x410u;  // (from the original)
    r7 = 0u;
    r4 = r0;
    r9 = r13 + 0x288u;  // (from the original)
    arg0->byte_c7 = u8(r7);
    arg0->byte_c6 = u8(r7);
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0022e08c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
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
    r0 = r10 + 0x274u;  // (from the original)
    *gptr<u32>(r13 + 0x5cu) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x60u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x64u) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x68u) = u32(r7);  // (from the original)
    *gptr<u8>(r13 + 0x6cu) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xfffffd8cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0022e05c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r8 = r13 + 0x3c0u;  // (from the original)
    r0 = r8;
    r11 = 4u;
    r2 = 9u;
    r1 = r13 + 0x3d8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = 0x8906ecu;  // (from the original)
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 4u;
    do {
L_1b24e8:;
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        res = r2 - 1u;
        r2 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r5;
    r1 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_0056d374(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0022e070(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00300a64(r0, r1, r2, r3);
    *gptr<u32>(r13 + 0x3c0u) = u32(r6);  // (from the original)
    r2 = 0x88e890u;  // (from the original)
    r3 = 3u;
    r5 = r10;
    r1 = r10;
    r0 = r9;
    *gptr<u32>(r13) = u32(r7);
    *gptr<u32>(r13 + 4u) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0022d74c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x42u;  // (from the original)
    r1 = r5 + 0x22cu;  // (from the original)
    r0 = r4 + 0x84u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0x38u)) == 6u) {  // (from the original)
        r0 = r4 + 0x42u;  // (from the original)
        *gptr<u8>(r4 + 0xc7u) = u8(u32(*gptr<u8>(r13 + 0x276u)));  // (from the original)
    } else {
        *gptr<u8>(r4 + 0xc6u) = u8(u32(*gptr<u8>(r13 + 0x276u)));  // (from the original)
        r0 = r4;
    }
    r2 = 0x42u;  // (from the original)
    r1 = r5 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = 0u;
    if (r0 != 0) {
        r1 = r0 + 0x55a6u;  // (from the original)
    }
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r1);
    r2 = 0x88e890u;  // (from the original)
    r3 = 4u;
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0022d74c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x42u;  // (from the original)
    r1 = r5 + 0x22cu;  // (from the original)
    r0 = r4 + 0x84u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r13 + 0x276u));  // (from the original)
    r2 = 0x42u;  // (from the original)
    if (u32(*gptr<u8>(r13 + 0x38u)) == 6u) {  // (from the original)
        *gptr<u8>(r4 + 0xc7u) = u8(r1);  // (from the original)
        r0 = r4 + 0x42u;  // (from the original)
    } else {
        *gptr<u8>(r4 + 0xc6u) = u8(r1);  // (from the original)
        r0 = r4;
    }
    r1 = r5 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0022e048(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0022e138(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x410u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b23f0
GUEST_EXPORT(0x001b23f0, d_001b23f0::f_001b23f0);

// f_001b264c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b264c {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_001b264c(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0xc8u;  // (from the original)
    r0 = call_00301444(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0xffu;  // (from the original)
    *gptr<u8>(r4 + 0xc7u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0xc6u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b264c
GUEST_EXPORT(0x001b264c, d_001b264c::f_001b264c);

// f_001b266c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b266c {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_001b266c(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0xc8u;  // (from the original)
    r0 = call_00301444(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0xffu;  // (from the original)
    *gptr<u8>(r4 + 0xc7u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0xc6u) = u8(r0);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b266c
GUEST_EXPORT(0x001b266c, d_001b266c::f_001b266c);

// f_001b2690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2690 {

inline constexpr guest::Function<0x0024dbc0, u32(u32, u32, u32, u32)> call_0024dbc0;  // (from the original)
inline constexpr guest::Function<0x006bd910, u32(u32, u32, u32, u32)> call_006bd910;  // (from the original)

u32 f_001b2690(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0u;
    r0 = r0 + 8u;
    r0 = call_006bd910(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0 = r4 + 0xa488u;  // (from the original)
    r0 = call_0024dbc0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    *gptr<u8>(r4 + 0xc8b0u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b2690
GUEST_EXPORT(0x001b2690, d_001b2690::f_001b2690);

// f_001b2a5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2a5c {

inline constexpr guest::Function<0x00134fa4, u32(u32, u32, u32, u32)> call_00134fa4;  // (from the original)
inline constexpr guest::Function<0x00138a00, u32(u32, u32, u32, u32)> call_00138a00;  // (from the original)
inline constexpr guest::Function<0x00138a1c, u32(u32, u32, u32, u32)> call_00138a1c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_001b2a5c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = r0 + 0xbc50u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
    r4 = r0 - 0xbc50u;  // (from the original)
    r0 = r0 - 0x5a0u;  // (from the original)
    r3 = 0x168u;  // (from the original)
    r2 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xa488u;  // (from the original)
    r0 = call_00134fa4(r0, r1, r2, r3);
    r0 = r0 - 6u;
    r4 = r0;
    r1 = 0x138b90u;  // (from the original)
    r3 = 3u;
    r2 = 6u;
    r0 = r0 - 0x12u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r4 = r4 - 0xe76u;  // (from the original)
    r1 = 0x2f77e8u;  // (from the original)
    r3 = 5u;
    r2 = 0x280u;  // (from the original)
    r0 = r4;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r4 = r4 - 0x9604u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
    r0 = r4 + 0x92f0u;  // (from the original)
    r3 = 0xb4u;  // (from the original)
    r2 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r0 = r4 + 0x8fd0u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
    r4 = r0 - 0x8fd0u;  // (from the original)
    r0 = r0 - 0x28u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8d84u;  // (from the original)
    r0 = call_00138a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    r0 = call_00138a00(r0, r1, r2, r3);
    r0 = r0 - 0x20u;  // (from the original)
    r1 = 0x2f77e8u;  // (from the original)
    r4 = r0 - 0x8d4cu;  // (from the original)
    r0 = r0 - 0x1d44u;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x280u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r0 = r4 + 0x7000u;  // (from the original)
    r4 = r0 - 0xf0u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
    r0 = r0 - 0x50u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x2f777cu;  // (from the original)
    r3 = 0x28u;  // (from the original)
    r2 = 4u;
    r0 = r4;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r4 = r4 - 0x6f10u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
    r0 = r4 + 0x6bd0u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r0 = r4 + 0x56f0u;  // (from the original)
    r1 = 0x2f7744u;  // (from the original)
    r4 = r0 - 0x56f0u;  // (from the original)
    r0 = r0 - 0x1acu;  // (from the original)
    r3 = 4u;
    r2 = 0x18u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0xfffffff8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b2a5c
GUEST_EXPORT(0x001b2a5c, d_001b2a5c::f_001b2a5c);

// f_001b3174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3174 {


u32 f_001b3174(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + r1;
    r1 = u32(*gptr<u16>(0x95c010u + (r2 << 1)));  // (from the original)
    if ((r1 & 0xfu) == 0) {  // (from the original)
        *gptr<u8>(r0 + 0x58u) = u8(r2);  // (from the original)
    } else {
        r1 = 0u;
        *gptr<u8>(r0 + 0x58u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b3174
GUEST_EXPORT(0x001b3174, d_001b3174::f_001b3174);

// f_001b31a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b31a4 {

inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)

u32 f_001b31a4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 v = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0012ca50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(0x975338u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003045a8(r0, r1, r2, r3);
    r4 = r0;
    r2 = r0;
    r3 = 0u;
    r1 = 0x1b328cu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00125b38(r0, r1, r2, r3);
    r3 = 0x95c010u;  // (from the original)
    r0 = *gptr<u32>(r13 + 4u);
    r1 = 0u;
    do {
L_1b31e4:;
        r12 = r3 + (r1 << 1);
        v = *gptr<u8>(r0);
        r0 = r0 + 1u;
        r2 = v;
        r1 = r1 + 1u;
        v = *gptr<u8>(r0);
        r0 = r0 + 1u;
        r5 = v;
        r2 = r2 | r5 << 8;
        *gptr<u16>(r12) = u16(r2);
        guest::preempt();
    } while (r1 < 0x100u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0013864c(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r4;
    r1 = 0x1b32a8u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00125b38(r0, r1, r2, r3);
    r2 = 0xad53a4u;  // (from the original)
    r1 = *gptr<u32>(r13 + 4u);
    r0 = 0u;
    do {
L_1b322c:;
        r3 = r1;
        v = *gptr<u32>(r1);
        r1 = r1 + 0xfu;  // (from the original)
        r4 = (r0 << 4) - r0 + r2;
        r0 = r0 + 1u;
        *gptr<u32>(r4) = u32(v);
        *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r3 + 4u));
        *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r3 + 8u));
        *gptr<u16>(r4 + 0xcu) = u16(u32(*gptr<u16>(r3 + 0xcu)));  // (from the original)
        r3 = u32(*gptr<u8>(r3 + 0xeu));  // (from the original)
        *gptr<u8>(r4 + 0xeu) = u8(r3);  // (from the original)
        guest::preempt();
    } while (r0 < 0xcu);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0013864c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0013bb80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b31a4
GUEST_EXPORT(0x001b31a4, d_001b31a4::f_001b31a4);

// f_001b32c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b32c8 {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_001b32c8(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r2 = 0xccu;  // (from the original)
    r1 = 0x800u;  // (from the original)
    r0 = r0 + 0x6cu;  // (from the original)
    r0 = call_0013fac4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x26cu;  // (from the original)
    r1 = r5;
    r0 = r4;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    *gptr<u8>(r4 + 0x86cu) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b32c8
GUEST_EXPORT(0x001b32c8, d_001b32c8::f_001b32c8);

// f_001b3300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3300 {

inline constexpr guest::Function<0x001b3340, u32(u32, u32, u32, u32)> call_001b3340;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)

u32 f_001b3300(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r2;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4c14(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r5;
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001b3340(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0xcu;  // (from the original)
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
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
    r13 = r13 - 0x50u;  // (from the original)
    r7 = r0;
    r6 = 0x95c010u;  // (from the original)
    if (u32(arg0->byte_69) == 8u) {
        r8 = 0u;
        goto L_1b33bc;
    }
    r1 = r13 + 8u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b7e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r5 = 0u;
    if (!u32(r0 >= 0u) || u32(r0 == 0)) {
        goto L_1b3508;
    }
L_1b337c:;
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r4 = 0u;
    if (!u32(r0 >= 0u) || u32(r0 == 0)) {
        goto L_1b34f8;
    }
L_1b338c:;
    if (u32(*gptr<u8>(r13 + 0x18u)) == 0) {  // (from the original)
        goto L_1b3478;
    }
    r2 = r5;
    r1 = *gptr<u32>(r13 + 0x14u) - r4 - 1u;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070d904(r0, r1, r2, r3);
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
            r2 = *gptr<u32>(r6 + 4u) + r5;
            r0 = *gptr<u32>(r13 + 0x24u);  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0070d904(r0, r1, r2, r3);
            r0 = r0 & 0xfu;  // (from the original)
            if (r0 >= 0xfu) {  // (from the original)
                r0 = 0xcu;  // (from the original)
            }
            r10 = r0 & 0xfu;  // (from the original)
            r11 = r4 & 0x1fu;  // (from the original)
            *gptr<u32>(r13) = u32(r8 & 3u);
            r3 = r5 & 0x1fu;  // (from the original)
            r2 = r11;
            r1 = r10;
            r0 = r7;
            guest::cpu()->r[13] = r13;
            r0 = call_001b488c(r0, r1, r2, r3);
            r3 = r9;
            r2 = r11;
            r1 = u32(*gptr<u16>(0x95c010u + (u32(*gptr<u8>(r7 + r10 + 0x58u)) << 1)));  // (from the original)
            r0 = r7;
            guest::cpu()->r[13] = r13;
            r0 = call_006aaa58(r0, r1, r2, r3);
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
L_1b3478:;
    r0 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r2 = r4;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0070d904(r0, r1, r2, r3);
L_1b3488:;
    r0 = r0 & 0xfu;  // (from the original)
    if (r0 >= 0xfu) {  // (from the original)
        r0 = 0xcu;  // (from the original)
    }
    r8 = r0 & 0xfu;  // (from the original)
    r0 = *gptr<u32>(r13 + 0xcu) & 3u;  // (from the original)
    r3 = *gptr<u32>(r13 + 8u) + r4 & 0x1fu;  // (from the original)
    r9 = r5 & 0x1fu;  // (from the original)
    r10 = r3 + (r0 << 5);
    *gptr<u32>(r13) = u32(r0);
    r2 = r9;
    r1 = r8;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_001b488c(r0, r1, r2, r3);
    r3 = r10;
    r2 = r9;
    r1 = u32(*gptr<u16>(r6 + (u32(*gptr<u8>(r7 + r8 + 0x58u)) << 1)));  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_006aaa58(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r4 = r4 + 1u;
    if (u32(r0 >= r4) && !u32(r0 == r4)) {
        guest::preempt();
        goto L_1b338c;
    }
L_1b34f8:;
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r5 = r5 + 1u;
    if (u32(r0 >= r5) && !u32(r0 == r5)) {
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
        r0 = *gptr<u32>(r13 + 0x24u);  // (from the original)
        r2 = r4 + 0x20u;  // (from the original)
        r1 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0070d904(r0, r1, r2, r3);
        r0 = r0 & 0xfu;  // (from the original)
        if (r0 >= 0xfu) {  // (from the original)
            r0 = 0xcu;  // (from the original)
        }
        r3 = *gptr<u32>(r13 + 0x1cu) + r4 & 0x1fu;  // (from the original)
        r8 = r0 & 0xfu;  // (from the original)
        r9 = r5 & 0x1fu;  // (from the original)
        *gptr<u32>(r13) = u32(3u);
        r10 = r3 + 0x60u;  // (from the original)
        r2 = r9;
        r1 = r8;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_001b488c(r0, r1, r2, r3);
        r3 = r10;
        r2 = r9;
        r1 = u32(*gptr<u16>(r6 + (u32(*gptr<u8>(r7 + r8 + 0x58u)) << 1)));  // (from the original)
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_006aaa58(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
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

}  // namespace d_001b3340
GUEST_EXPORT(0x001b3340, d_001b3340::f_001b3340);

// f_001b35b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b35b0 {

inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> call_001c4bc8;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)

u32 f_001b35b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r6 = r2;
    r7 = r3;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4c14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(r13 + 8u) == 0x20u) {  // (from the original)
        goto L_1b3610;
    }
    r0 = u32(*gptr<u8>(r5 + 0x69u));  // (from the original)
    cf = r0 >= 0xcu;  // (from the original)
    if (!cf) {
        cf = r0 >= 9u;
    }
    if (cf) {
        goto L_1b361c;
    }
L_1b35f0:;
    r3 = r6;
    r2 = r4;
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4bc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
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
    r3 = r6;
    r2 = r4;
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4bc8(r0, r1, r2, r3);
    r3 = r6;
    r2 = r4 + 0x20u;  // (from the original)
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4bc8(r0, r1, r2, r3);
    r3 = r6;
    r2 = r4 + 0x40u;  // (from the original)
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4bc8(r0, r1, r2, r3);
    r3 = r6;
    r2 = r4 + 0x60u;  // (from the original)
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001c4bc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_1b3674:;
    r0 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b35b0
GUEST_EXPORT(0x001b35b0, d_001b35b0::f_001b35b0);

// f_001b3a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a20 {


u32 f_001b3a20(u32 r0, u32 r1) {
    r0 = r0 + (r1 << 4) & 0xffu;  // (from the original)
    r1 = u32(*gptr<u16>(0x95c010u + (r0 << 1)));  // (from the original)
    if ((r1 & 0xfu) != 0) {  // (from the original)
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b3a20
GUEST_EXPORT(0x001b3a20, d_001b3a20::f_001b3a20);

// f_001b3a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a44 {


u32 f_001b3a44(u32 r0, u32 r1) {
    u32 cf = 0;
    cf = r0 >= 0xcu;  // (from the original)
    if (!cf) {
        cf = r1 >= 0xfu;  // (from the original)
    }
    if (cf) {
        r0 = 0u;
        return r0;
    }
    r0 = u32(*gptr<u8>((r0 << 4) - r0 + 0xad53a4u + r1));  // (from the original)
    return r0;
}

}  // namespace d_001b3a44
GUEST_EXPORT(0x001b3a44, d_001b3a44::f_001b3a44);

// f_001b3d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3d08 {


u32 f_001b3d08(u32 r0, u32 r1) {
    u32 zf = 0;
    zf = r1 == 0;
    r1 = u32(*gptr<u16>(0x95c010u + (r0 << 1)));  // (from the original)
    if (zf) {
        r0 = 0u;
    } else {
        r0 = 0xfu;  // (from the original)
    }
    r0 = r0 | r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b3d08
GUEST_EXPORT(0x001b3d08, d_001b3d08::f_001b3d08);

// f_001b3d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3d2c {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)

u32 f_001b3d2c(u32 r0) {
    u32 r1 = 0;
    r1 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + 0x55a6u;  // (from the original)
    r0 = r0 + 0x2au;  // (from the original)
    return call_001b4a8c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001b3d2c
GUEST_EXPORT(0x001b3d2c, d_001b3d2c::f_001b3d2c);

// f_001b488c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b488c {


u32 f_001b488c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 4u;
    r2 = r2 & 0x1fu;  // (from the original)
    r12 = (*gptr<u32>(r13 + 4u) << 0x1e >> 0x17) + ((r3 & 0x1fu) << 2);  // (from the original)
    r3 = r2 << 0x1d;  // (from the original)
    r2 = r0 + (r12 + (r2 >> 3) << 2);
    r0 = r3 >> 0x1b;  // (from the original)
    r1 = lsl_r(r1 & 0xfu, r0 & 0xff);  // (from the original)
    r0 = *gptr<u32>(r2 + 0x6cu) & ~lsl_r(0xfu, r0 & 0xff) | r1;  // (from the original)
    *gptr<u32>(r2 + 0x6cu) = u32(r0);  // (from the original)
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b488c
GUEST_EXPORT(0x001b488c, d_001b488c::f_001b488c);

// f_001b48dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b48dc {

inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> call_002fe940;  // (from the original)
inline constexpr guest::Function<0x0030f52c, u32(u32, u32, u32, u32)> call_0030f52c;  // (from the original)

u32 f_001b48dc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r2;
    r0 = r0 + 0x2au;  // (from the original)
    r0 = call_002fe940(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = r5;
        r0 = r4 + 0x40u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0030f52c(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r4 = r0;
    r2 = 0x870u;  // (from the original)
    r1 = r5;
    r0 = r4;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 0u;
    *gptr<u8>(r4 + 0x86cu) = u8(r5);  // (from the original)
    r0 = call_002fc900(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_1b4968;
    }
    r0 = call_00305f44(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_1b4968;
    }
    r0 = r4;
    r0 = call_006aac60(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 << 0x14 >> 0x1c == 0) {  // (from the original)
        r1 = 1u;
        *gptr<u8>(r4 + 0x86cu) = u8(r1);  // (from the original)
    }
L_1b4968:;
    r0 = r4;
    r0 = call_001b2c7c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    *gptr<u16>(r4 + 0x28u) = u16(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
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
    u32 r1 = 0;
    r1 = 0u;
    arg0->byte_67 = u8(1u);
    arg0->byte_68 = u8(r1);
    arg0->byte_69 = u8(4u);
    arg0->byte_86c = u8(r1);
    guest::cpu()->r[1] = r1;
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
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r6 = r1;
    r2 = 0x870u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0u;
    *gptr<u8>(r4 + 0x86cu) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1b49fc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1b49fc;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006aac60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 << 0x14 >> 0x1c == 0) {  // (from the original)
        r1 = 1u;
        *gptr<u8>(r4 + 0x86cu) = u8(r1);  // (from the original)
    }
L_1b49fc:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006ab0b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006aac60(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_006aaf98(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1b4a68;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_006aac60(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xffffu;  // (from the original)
    zf = r5 == r1;
    if (!zf) {
        zf = r0 == r1;
    }
    if (zf) {
        goto L_1b4a68;
    } else {
        *gptr<u16>(r13) = u16(r5);
        *gptr<u16>(r13 + 2u) = u16(r0);
    }
    r3 = 4u;
    r2 = r13;
    r1 = r3;
    r0 = 0x6du;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1b4a68:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001b2c7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    *gptr<u16>(r4 + 0x28u) = u16(r7);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b49b0
GUEST_EXPORT(0x001b49b0, d_001b49b0::f_001b49b0);

// f_001b4a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b4a8c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_001b4a8c() {
    u32 r2 = 0;
    r2 = 0x2eu;  // (from the original)
    return call_002f8574(guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
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
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0 + 0x2cu;  // (from the original)
    arg0->word_16 = u32(arg1->word_0);
    arg0->word_1a = u32(arg1->word_4);
    arg0->word_1e = u32(arg1->word_8);
    arg0->word_22 = u32(arg1->word_c);
    r2 = arg1->word_10;
    arg0->word_26 = u32(r2);
    r1 = u32(arg1->half_14);
    arg0->half_2a = u16(r1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0035072c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4) = u8(*gptr<u32>(r13) >> 0x18);  // (from the original)
    r0 = *gptr<u32>(r13) >> 0x10;  // (from the original)
    *gptr<u8>(r4 + 1u) = u8(r0);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b4b20
GUEST_EXPORT(0x001b4b20, d_001b4b20::f_001b4b20);

// f_001b545c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b545c {


u32 f_001b545c(u32 r0) {
    u32 r1 = 0;
    r1 = 0x18fu;  // (from the original)
    if (r0 >= r1) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
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
    ea = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r14);  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0 + r2;
    r5 = r1;
    ea = r13 + 0x28u;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    r9 = 0x2083u;  // (from the original)
    r8 = r3;
    r3 = r13 + 4u;
    r12 = r2;
    if (u32(*gptr<u8>(r4 + 8u)) != 0) {
        r1 = r9;
        r0 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r1 = r0 + (r12 << 2);
        r0 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (u32(*gptr<u8>(r4 + 8u)) == 0) {
        r0 = 1u;
        *gptr<u8>(r4 + 8u) = u8(r0);
    } else {
        goto L_1b55a4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != r5) {
        goto L_1b55a4;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_00303acc(r0, r1, r2, r3);
        r3 = r7;
        if (r0 != 0) {
            r2 = 2u;
            r1 = r6;
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_004e9a78(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            goto L_1b55a4;
        }
        r2 = 1u;
        r1 = r6;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_004e9a78(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_1b55a4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_1b55a4;
    }
    r1 = r9;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r1 = r0;
    r3 = r6;
    r2 = r8;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = r6;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0059e65c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_1b55a4:;
    r0 = r13 + 4u;
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
    return r0;
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
    u32 cf = 0;
    r4 = r0;
    r13 = r13 - 0x650u;  // (from the original)
    r1 = r4 - 0x2000u;  // (from the original)
    cf = r4 >= 0x18fu;  // (from the original)
    r0 = r4 - 0x1000u;  // (from the original)
    if (cf) {
        cf = r0 >= 0x10u;  // (from the original)
    }
    if (cf) {
        if (r1 >= 0x11u) {  // (from the original)
            r0 = 0u;
            goto L_1b5674;
        }
    }
    if (r0 < 0x10u) {  // (from the original)
        r6 = 0x982268u;  // (from the original)
        r5 = r0;
        r0 = *gptr<u32>(r6);
        if (r0 == 0) {
            goto L_1b5628;
        }
        goto L_1b566c;
    }
    if (r1 >= 0x11u) {  // (from the original)
        goto L_1b567c;
    }
    r6 = 0x9821f4u;  // (from the original)
    r5 = r1;
    r0 = *gptr<u32>(r6);
    if (r0 == 0) {
        goto L_1b56a8;
    }
    goto L_1b566c;
L_1b5628:;
    guest::cpu()->r[13] = r13;
    r0 = call_005603f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (*gptr<u32>(r6) != 0) {
        goto L_1b5664;
    }
    r1 = 0x9821f8u;  // (from the original)
    r0 = 0xaf7f84u;  // (from the original)
    r2 = 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056029c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = 0xaf7f84u;  // (from the original)
    goto L_1b56dc;
L_1b5664:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00137e84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_1b566c:;
    r0 = *gptr<u32>(*gptr<u32>(r6) + (r5 << 2));
L_1b5674:;
    r13 = r13 + 0x650u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1b567c:;
    r5 = r13;
    r2 = 0x63cu;  // (from the original)
    r1 = 0xa83afcu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r5 + (r4 << 2));
    r0 = r1 + 0xau;  // (from the original)
    *gptr<u8>(r1 + 0xfu) = u8(0u);  // (from the original)
    r13 = r13 + 0x650u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1b56a8:;
    guest::cpu()->r[13] = r13;
    r0 = call_005603f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (*gptr<u32>(r6) != 0) {
        guest::preempt();
        goto L_1b5664;
    }
    r1 = 0x982180u;  // (from the original)
    r0 = 0xaf7f40u;  // (from the original)
    r2 = 0x11u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056029c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = 0xaf7f40u;  // (from the original)
L_1b56dc:;
    *gptr<u32>(r6) = u32(r0);
    guest::preempt();
    goto L_1b5664;
}

}  // namespace d_001b55b8
GUEST_EXPORT(0x001b55b8, d_001b55b8::f_001b55b8);

// f_001b5d74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5d74 {

inline constexpr guest::Function<0x001b55b8, u32(u32, u32, u32, u32)> call_001b55b8;  // (from the original)

u32 f_001b5d74(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    res = r0 - 0x2010u;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = *gptr<u32>(0x95c360u);  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_001b55b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001b5d74
GUEST_EXPORT(0x001b5d74, d_001b5d74::f_001b5d74);

// f_001b5d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5d94 {


u32 f_001b5d94(u32 r0) {
    u32 r1 = 0;
    u32 cf = 0;
    r1 = 0x18fu;  // (from the original)
    cf = r0 >= r1;
    if (cf) {
        r1 = r0 - 0x1000u;  // (from the original)
        cf = r1 >= 0x10u;  // (from the original)
    }
    if (!cf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 - 0x2000u >= 0x11u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x10u;  // (from the original)
    arg0->byte_0 = u8(0xffu);  // (from the original)
    r0 = r4 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_002d4f3c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x304u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003059f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0xb74u;  // (from the original)
    r1 = 0x22u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x23c6u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x2460u;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r13;
    r0 = r4 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_002d4d30(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r13 + 4u;
    r0 = r4 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_002d5184(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b5f7c
GUEST_EXPORT(0x001b5f7c, d_001b5f7c::f_001b5f7c);

// f_001b625c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b625c {

inline constexpr guest::Function<0x001b6278, u32(u32, u32, u32, u32)> call_001b6278;  // (from the original)

u32 f_001b625c(u32 r0_unused, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    if (s32(r1) >= s32(0xau)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return guest::cpu()->r[0];
    }
    r2 = r1;
    r3 = 0u;
    r1 = 1u;
    return call_001b6278(guest::cpu()->r[0], r1, r2, r3);
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0u;
    arg0->byte_0 = u8(r1);
    r2 = ~0u;
    arg0->byte_1 = u8(r1);
    arg0->half_2 = u16(r2);
    arg0->half_4 = u16(r2);
    r3 = 0xc8u;  // (from the original)
    arg0->byte_e = u8(r1);
    arg0->byte_f = u8(r3);
    arg0->byte_18 = u8(r1);
    arg0->byte_19 = u8(r3);
    guest::cpu()->r[1] = r1;
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
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0xad56e0u;  // (from the original)
    if (u32(*gptr<u8>(r1 + 0x1au)) != 0) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r1 + 0x1bu));  // (from the original)
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(arg0->byte_18);
    if (!u32(r0 >= 0xfu) || u32(r0 == 0xfu)) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b7530
GUEST_EXPORT(0x001b7530, d_001b7530::f_001b7530);

// f_001b7568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7568 {

inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)
inline constexpr guest::Function<0x00768738, u32(u32, u32, u32, u32)> call_00768738;  // (from the original)
inline constexpr guest::Function<0x0076e80c, u32(u32, u32, u32, u32)> call_0076e80c;  // (from the original)

u32 f_001b7568(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0 + (r1 << 2);
    r8 = 0x95c6d0u;  // (from the original)
    r6 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r5 = r2;
    r7 = r3;
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(r8) + 0x1cu))));  // (from the original)
    r0 = call_006c4280(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 1u) {
        goto L_1b75c8;
    }
    zf = r0 == 2u;
    if (!zf) {
        zf = r0 == 3u;
    }
    if (!zf) {
        zf = r0 == 0xau;  // (from the original)
    }
    if (zf) {
        goto L_1b7600;
    }
    *gptr<u32>(r4 + 0x10u) = u32(*gptr<u32>(r4 + 0x10u) + r5);  // (from the original)
L_1b75b4:;
    if (*gptr<u32>(r4 + 0x10u) == r6) {  // (from the original)
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_1b75c8:;
    r1 = r7;
    *gptr<u32>(r4 + 0x10u) = u32(*gptr<u32>(r4 + 0x10u) + r5);  // (from the original)
    r0 = *gptr<u32>(r8) + 0x10u;  // (from the original)
    r0 = call_0076e80c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_1b75b4;
    }
    *gptr<u32>(r4 + 0x20u) = u32(*gptr<u32>(r4 + 0x20u) + r5);  // (from the original)
    guest::preempt();
    goto L_1b75b4;
L_1b7600:;
    r0 = *gptr<u32>(r8) + 0x10u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xdu));  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_1b7644;
        }
        if (r1 != 2u) {
            guest::preempt();
            goto L_1b75b4;
        }
        r1 = r7;
        r0 = call_0076e80c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::preempt();
            goto L_1b75b4;
        }
    }
    r0 = *gptr<u32>(r4 + 0x10u) + r5;  // (from the original)
    goto L_1b767c;
L_1b7644:;
    r0 = r7;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = (r5 << 7) - (r5 + (r5 << 1));
        r0 = *gptr<u32>(r4 + 0x10u) + (r1 << 3);  // (from the original)
        goto L_1b767c;
    }
    r0 = r7;
    r0 = call_00768738(r0, r1, r2, r3);
    r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r0 = r0 * r5 + r1;
L_1b767c:;
    *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
    guest::preempt();
    goto L_1b75b4;
}

}  // namespace d_001b7568
GUEST_EXPORT(0x001b7568, d_001b7568::f_001b7568);

// f_001b7688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7688 {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_001b7688(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x95c71cu;  // (from the original)
    if (*gptr<u32>(r6) != 0) {
        goto L_1b76dc;
    }
    r2 = 4u;
    r1 = r5;
    r0 = 0x3cu;  // (from the original)
    r0 = call_00131280(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        *gptr<u32>(r6 + 4u) = u32(r4);
        r4 = 0u;
        goto L_1b76d8;
    }
    r1 = r5;
    r2 = 3u;
    r0 = call_001320cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x8f9a24u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r6 + 4u) = u32(r0);
L_1b76d8:;
    *gptr<u32>(r6) = u32(r4);
L_1b76dc:;
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b7688
GUEST_EXPORT(0x001b7688, d_001b7688::f_001b7688);

// f_001b7b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7b90 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x004e4510, u32(u32, u32, u32, u32)> call_004e4510;  // (from the original)
inline constexpr guest::Function<0x005b49e0, u32(u32, u32, u32, u32)> call_005b49e0;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00625690, u32(u32, u32, u32, u32)> call_00625690;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)

u32 f_001b7b90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = *gptr<u32>(0x95c6d0u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(s32(s8(*gptr<u8>(r0 + 0x1cu))));  // (from the original)
    r0 = call_006c4280(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 9u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_005b49e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x81u;  // (from the original)
    r4 = r4 + u32(s32(r0 + (r0 >> 0x1f)) >> 1);  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0x34u));  // (from the original)
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_004e4510(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    *gptr<u8>(r4 + 0x34u) = u8(r0);  // (from the original)
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00625690(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (!u32(r0 >= 1u) || u32(r0 == 1u)) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = 0u;
    guest::cpu()->r[13] += 8u;
    r2 = r3;
    r1 = 4u;
    r0 = 0x45u;  // (from the original)
    return call_006249b0(r0, r1, r2, r3);
}

}  // namespace d_001b7b90
GUEST_EXPORT(0x001b7b90, d_001b7b90::f_001b7b90);

// f_001b88c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b88c0 {

inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> call_00135520;  // (from the original)

u32 f_001b88c0(u32 r0_unused, u32 r1) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = 0x951480u;  // (from the original)
    r0 = *gptr<u32>(r4 + 8u) - 1u;
    res = r0;
    *gptr<u32>(r4 + 8u) = u32(r0);
    if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x8575c8u;  // (from the original)
    r0 = call_00135520(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0 & 0x80000000u;  // (from the original)
    nf = r1 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf != vf) {
        r1 = r0 & 0x3fc00u;  // (from the original)
    }
    r0 = 0u;
    if (nf != vf) {
        r1 = r1 >> 0xa;  // (from the original)
    }
    *gptr<u8>(r4 + 1u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b88c0
GUEST_EXPORT(0x001b88c0, d_001b88c0::f_001b88c0);

// f_001b8a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b8a08 {

struct __attribute__((packed)) Object_001b8a08_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001b8a08_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32, u32)> call_0012f598;  // (from the original)

u32 f_001b8a08(gptr<Object_001b8a08_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_0;
    r1 = r0 & 0x80000000u;  // (from the original)
    res = r1;
    if (res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = (r0 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1 != 0x11u) {  // (from the original)
        goto L_1b8a50;
    }
    r0 = r0 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0) < s32(0x64u)) {  // (from the original)
        goto L_1b8a50;
    }
    if (s32(r0) <= s32(0xb3u)) {  // (from the original)
        r0 = 5u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_1b8a50:;
    r0 = *gptr<u32>(r4);
    r1 = (r0 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1 != 0x11u) {  // (from the original)
        goto L_1b8a7c;
    }
    r0 = r0 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0) < s32(0xb4u)) {  // (from the original)
        goto L_1b8a7c;
    }
    if (s32(r0) <= s32(0xc7u)) {  // (from the original)
        r0 = 8u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_1b8a7c:;
    r0 = *gptr<u32>(r4);
    if ((r0 & 0x3fc00u) >> 0xa != 0x11u) {  // (from the original)
        goto L_1b8ab0;
    }
    r1 = 0x186u;  // (from the original)
    r0 = r0 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0) < s32(r1)) {
        goto L_1b8ab0;
    }
    if (s32(r0) < s32(0x190u)) {  // (from the original)
        r0 = 3u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_1b8ab0:;
    r0 = *gptr<u32>(r4);
    if ((r0 & 0x3fc00u) >> 0xa != 0x11u) {  // (from the original)
        goto L_1b8b24;
    }
    r0 = r0 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0) < s32(0xe6u)) {  // (from the original)
        goto L_1b8b24;
    }
    if (s32(r0) >= s32(0x154u)) {  // (from the original)
        goto L_1b8b24;
    }
    r0 = *gptr<u32>(r4);
    r1 = (r0 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1 != 0x11u) {  // (from the original)
        r0 = 8u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 << 0x16 >> 0x16;  // (from the original)
    res = r0 - 0x118u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ 0x118u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf == vf) {
        r1 = 0x14eu;  // (from the original)
        res = r1 - r0;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r1 ^ r0) & (r1 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf != vf) {
        r0 = 8u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x1b8b10u;  // (from the original)
    r0 = *gptr<u32>(r4);
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res != 0) {
        r0 = call_0012f598(r0, r1, r2, guest::cpu()->r[3]);
    }
    goto L_1b8b54;
L_1b8b24:;
    r0 = *gptr<u32>(r4);
    r1 = (r0 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1 != 0x11u) {  // (from the original)
        goto L_1b8b54;
    }
    r0 = r0 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0) < s32(0xc8u)) {  // (from the original)
        goto L_1b8b54;
    }
    if (s32(r0) <= s32(0xdbu)) {  // (from the original)
        r0 = 4u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_1b8b54:;
    r1 = 0x1b8b5cu;  // (from the original)
    r0 = *gptr<u32>(r4);
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res != 0) {
        r0 = call_0012f598(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = 8u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b8a08
GUEST_EXPORT(0x001b8a08, d_001b8a08::f_001b8a08);

// f_001b9400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9400 {

inline constexpr guest::Function<0x001b8e44, u32(u32, u32, u32, u32)> call_001b8e44;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00345bc4, u32(u32, u32, u32, u32)> call_00345bc4;  // (from the original)
inline constexpr guest::Function<0x003463a4, u32(u32, u32, u32, u32)> call_003463a4;  // (from the original)
inline constexpr guest::Function<0x005ca648, u32(u32, u32, u32, u32)> call_005ca648;  // (from the original)
inline constexpr guest::Function<0x005cad0c, u32(u32, u32, u32, u32)> call_005cad0c;  // (from the original)

u32 f_001b9400(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_005ca648(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_005cad0c(r0, r1, r2, r3);
        r2 = r0;
        r1 = 0u;
        *gptr<u32>(r13) = u32(r1);
        r3 = 8u;
        r0 = *gptr<u32>(0x95bf70u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001b8e44(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 1u) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    r0 = 0x951480u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 != 1u) {
        goto L_1b9498;
    }
    r0 = u32(*gptr<u8>(r0 + 1u));
    if (r0 == 0) {
        goto L_1b9498;
    }
    if (r4 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fb328(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = *gptr<u32>(r0);
        r3 = *gptr<u32>(r0 + 4);
        r0 = 0x1b94a8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003463a4(r0, r1, r2, r3);
    } else {
        r0 = 0x1b94a8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00345bc4(r0, r1, r2, r3);
    }
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_1b9498;
    }
    r1 = r0 & 0x3fc00u;  // (from the original)
    r0 = 8u;
    r1 = r1 >> 0xa;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1b9498:;
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b9400
GUEST_EXPORT(0x001b9400, d_001b9400::f_001b9400);

// f_001b95f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b95f8 {

inline constexpr guest::Function<0x001b85c0, u32(u32, u32, u32, u32)> call_001b85c0;  // (from the original)
inline constexpr guest::Function<0x001b88c0, u32(u32, u32, u32, u32)> call_001b88c0;  // (from the original)
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;  // (from the original)
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32, u32)> call_0053dffc;  // (from the original)

u32 f_001b95f8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r1;
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r0;
    if (r1 != 0) {
        r2 = 0u;
        r1 = r2;
        r0 = r2;
        guest::cpu()->r[13] = r13;
        r0 = call_001b9254(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 1u) {
            r0 = 0u;
            goto L_1b9690;
        }
    }
    r5 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_001b85c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r2 = r13;
        *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
        *gptr<u32>(r13 + 4) = u32(r6);
        r1 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0053dffc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 0) {
            r5 = u32(s32(s8(*gptr<u8>(r13 + 0x10u))));  // (from the original)
        }
    }
    if (r4 == 0) {
        goto L_1b968c;
    }
    r0 = u32(*gptr<u8>(0x951480u));  // (from the original)
    if (r0 != 0) {
        if (r0 == 1u) {
            guest::cpu()->r[13] = r13;
            r0 = call_001b88c0(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        goto L_1b968c;
    }
L_1b968c:;
    r0 = r5;
L_1b9690:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001b95f8
GUEST_EXPORT(0x001b95f8, d_001b95f8::f_001b95f8);

// f_001b96a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b96a0 {

inline constexpr guest::Function<0x001b8b74, u32(u32, u32, u32, u32)> call_001b8b74;  // (from the original)
inline constexpr guest::Function<0x005cad0c, u32(u32, u32, u32, u32)> call_005cad0c;  // (from the original)

u32 f_001b96a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005cad0c(r0, r1, r2, r3);
    r2 = r0;
    r3 = *gptr<u32>(0x88e5bcu);  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(0x95bf70u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001b8b74(r0, r1, r2, r3);
}

}  // namespace d_001b96a0
GUEST_EXPORT(0x001b96a0, d_001b96a0::f_001b96a0);

// f_001b9a88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9a88 {


u32 f_001b9a88(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = ((r0 & 0x40u) >> 6) + ((r0 & 0x80u) >> 7);  // (from the original)
    r1 = ((r0 & 0x10u) >> 4) + ((r0 & 0x20u) >> 5);  // (from the original)
    r3 = ((r0 & 4u) >> 2) + ((r0 & 8u) >> 3);
    r2 = r2 + (r2 << 3);
    r1 = r1 + (r1 << 3) + (r2 + (r2 << 1)) + (r3 + (r3 << 1));
    r0 = (r0 & 1u) + ((r0 & 2u) >> 1) + r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b9a88
GUEST_EXPORT(0x001b9a88, d_001b9a88::f_001b9a88);

// f_001b9ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9ae4 {

inline constexpr guest::Function<0x001b9a88, u32(u32, u32, u32, u32)> call_001b9a88;  // (from the original)

u32 f_001b9ae4(u32 r0, u32 r1) {
    u32 res = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    res = r0 - 0xeu;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ 0xeu) & (r0 ^ res)) >> 0x1f;  // (from the original)
    guest::cpu()->r[13] -= 4u;
    if (zf) {
        goto L_1b9b98;
    }
    if (!(!zf && nf == vf)) {
        if (r0 == 0xbu) {  // (from the original)
            goto L_1b9b2c;
        }
        if (r0 == 0xcu) {  // (from the original)
            goto L_1b9b58;
        }
        if (r0 != 0xdu) {  // (from the original)
            r0 = 0x9fu;  // (from the original)
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1;
            return r0;
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
        r0 = 0x9fu;  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    goto L_1b9bf8;
L_1b9b2c:;
    r0 = r1;
    r0 = call_001b9a88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 < 0x1bu) {  // (from the original)
        r1 = 0x865168u;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x9fu;  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
L_1b9b58:;
    r0 = r1;
    r0 = call_001b9a88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 0x1bu) {  // (from the original)
        r0 = 0xa6u;  // (from the original)
    } else {
        r1 = 0x86519eu;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
L_1b9b78:;
    r0 = r1;
    r0 = call_001b9a88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 0x1bu) {  // (from the original)
        r0 = 0xacu;  // (from the original)
    } else {
        r1 = 0x8651d4u;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
L_1b9b98:;
    r0 = r1;
    r0 = call_001b9a88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 0x51u) {  // (from the original)
        r0 = 0xb2u;  // (from the original)
    } else {
        r1 = 0x86520au;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
L_1b9bb8:;
    r0 = r1;
    r0 = call_001b9a88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 9u) {
        r0 = 0xbbu;  // (from the original)
    } else {
        r1 = 0x8652acu;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
L_1b9bd8:;
    r0 = r1;
    r0 = call_001b9a88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 0x1bu) {  // (from the original)
        r0 = 0xbeu;  // (from the original)
    } else {
        r1 = 0x8652beu;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
L_1b9bf8:;
    r0 = r1;
    r0 = call_001b9a88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 >= 0x1bu) {  // (from the original)
        r0 = 0xc4u;  // (from the original)
    } else {
        r1 = 0x8652f4u;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b9ae4
GUEST_EXPORT(0x001b9ae4, d_001b9ae4::f_001b9ae4);

// f_001b9c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c34 {


u32 f_001b9c34(u32 r0, u32 r1) {
    r0 = r0 - 0xbeu;  // (from the original)
    if (r0 >= 6u) {
        r0 = 0u;
    } else {
        r1 = 0x865360u;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b9c34
GUEST_EXPORT(0x001b9c34, d_001b9c34::f_001b9c34);

// f_001b9c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c54 {


u32 f_001b9c54(u32 r0, u32 r1) {
    r0 = r0 - 0xb2u;  // (from the original)
    if (r0 >= 8u) {
        r0 = 0u;
    } else {
        r1 = 0x865350u;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b9c54
GUEST_EXPORT(0x001b9c54, d_001b9c54::f_001b9c54);

// f_001b9c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c74 {


u32 f_001b9c74(u32 r0, u32 r1) {
    r0 = r0 - 0xa6u;  // (from the original)
    if (r0 >= 6u) {
        r0 = 0u;
    } else {
        r1 = 0x865338u;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b9c74
GUEST_EXPORT(0x001b9c74, d_001b9c74::f_001b9c74);

// f_001b9c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c94 {


u32 f_001b9c94(u32 r0, u32 r1) {
    r0 = r0 - 0x9fu;  // (from the original)
    if (r0 >= 7u) {
        r0 = 0u;
    } else {
        r1 = 0x86532au;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b9c94
GUEST_EXPORT(0x001b9c94, d_001b9c94::f_001b9c94);

// f_001b9cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cb4 {


u32 f_001b9cb4(u32 r0, u32 r1) {
    r0 = r0 - 0xacu;  // (from the original)
    if (r0 >= 6u) {
        r0 = 0u;
    } else {
        r1 = 0x865344u;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b9cb4
GUEST_EXPORT(0x001b9cb4, d_001b9cb4::f_001b9cb4);

// f_001b9cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cd4 {


u32 f_001b9cd4(u32 r0, u32 r1) {
    r0 = r0 - 0xc4u;  // (from the original)
    if (r0 >= 4u) {
        r0 = 0u;
    } else {
        r1 = 0x865160u;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b9cd4
GUEST_EXPORT(0x001b9cd4, d_001b9cd4::f_001b9cd4);

// f_001b9cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cf4 {


u32 f_001b9cf4(u32 r0, u32 r1) {
    r0 = r0 - 0xbbu;  // (from the original)
    if (r0 >= 3u) {
        r0 = 0u;
    } else {
        r1 = 0x86515au;  // (from the original)
        r0 = u32(*gptr<u16>(r1 + (r0 << 1)));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001b9cf4
GUEST_EXPORT(0x001b9cf4, d_001b9cf4::f_001b9cf4);

// f_001ba7c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ba7c0 {

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
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x148u;  // (from the original)
    r8 = 0x8c9f1cu;  // (from the original)
    r1 = 0x100u;  // (from the original)
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r1);
    r2 = u32(*gptr<u8>(r8));
    r4 = 0x9048b0u;  // (from the original)
    *gptr<u8>(r1 + (r13 + 0xbu)) = u8(r2);  // (from the original)
    r0 = u32(*gptr<u8>(r8));
    r1 = r13;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u8>(r13 + 0xcu) = u8(r0);  // (from the original)
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r1 = 0x1baa00u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00544f18(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r5 = 0xa18590u;  // (from the original)
    r6 = r13;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0012ca50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0056a4a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r7 = 0x952cacu;  // (from the original)
    if (r0 == 0) {
        goto L_1ba868;
    }
    r2 = *gptr<u32>(r7);
    r3 = 0x20u;  // (from the original)
    r1 = r6;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_005bf790(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    if (r0 == 0) {
        goto L_1ba868;
    }
    r0 = *gptr<u32>(r13 + 0x114u);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14));  // (from the original)
    r0 = r13 + 0x110u;  // (from the original)
    *gptr<u32>(r5) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r5 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r5 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r5 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r5 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r5 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0013864c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
L_1ba868:;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0013bb80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r1 = 0x100u;  // (from the original)
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r1);
    r2 = u32(*gptr<u8>(r8));
    *gptr<u8>(r1 + (r13 + 0xbu)) = u8(r2);  // (from the original)
    r0 = u32(*gptr<u8>(r8));
    r1 = r13;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u8>(r13 + 0xcu) = u8(r0);  // (from the original)
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r1 = 0x1baa1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00544f18(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r6 = 0xa185a8u;  // (from the original)
    r5 = r13;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0012ca50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0056a4a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    if (r0 == 0) {
        goto L_1ba928;
    }
    r2 = *gptr<u32>(r7);
    r3 = 0x20u;  // (from the original)
    r1 = r5;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_005bf790(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    if (r0 == 0) {
        goto L_1ba928;
    }
    r1 = *gptr<u32>(r13 + 0x114u);  // (from the original)
    r2 = 0x3cu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0013864c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
L_1ba928:;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0013bb80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r1 = 0x100u;  // (from the original)
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r1);
    r2 = u32(*gptr<u8>(r8));
    *gptr<u8>(r1 + (r13 + 0xbu)) = u8(r2);  // (from the original)
    r0 = u32(*gptr<u8>(r8));
    r1 = r13;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u8>(r13 + 0xcu) = u8(r0);  // (from the original)
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r1 = 0x1baa34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00544f18(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r5 = 0xa185e4u;  // (from the original)
    r4 = r13;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0012ca50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0056a4a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    if (r0 == 0) {
        goto L_1ba9e8;
    }
    r2 = *gptr<u32>(r7);
    r3 = 0x20u;  // (from the original)
    r1 = r4;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_005bf790(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    if (r0 == 0) {
        goto L_1ba9e8;
    }
    r1 = *gptr<u32>(r13 + 0x114u);  // (from the original)
    r2 = 0x38u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0013864c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
L_1ba9e8:;
    r0 = r13 + 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0013bb80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x148u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001ba7c0
GUEST_EXPORT(0x001ba7c0, d_001ba7c0::f_001ba7c0);

// f_001baa4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baa4c {

inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001baa4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0012ca50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0056a4a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1baab4;
    }
    r3 = 0x20u;  // (from the original)
    r1 = r5;
    r2 = *gptr<u32>(0x952cacu);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005bf790(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1baab4;
    }
    r1 = *gptr<u32>(r13 + 4u);
    r2 = 0x78u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0013864c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1baab4:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0013bb80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x14u;  // (from the original)
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001baa4c
GUEST_EXPORT(0x001baa4c, d_001baa4c::f_001baa4c);

// f_001baac8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baac8 {

inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001baac8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0012ca50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0056a4a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    if (r0 == 0) {
        goto L_1bab2c;
    }
    r3 = 0x20u;  // (from the original)
    r1 = r5;
    r2 = *gptr<u32>(0x952cacu);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_005bf790(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    if (r0 == 0) {
        goto L_1bab2c;
    }
    r0 = *gptr<u32>(r13 + 4u);
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14));  // (from the original)
    r0 = r13;
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r4 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r4 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r4 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r4 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0013864c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
L_1bab2c:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0013bb80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x14u;  // (from the original)
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001baac8
GUEST_EXPORT(0x001baac8, d_001baac8::f_001baac8);

// f_001bab40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bab40 {

inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001bab40(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0012ca50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0056a4a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1baba8;
    }
    r3 = 0x20u;  // (from the original)
    r1 = r5;
    r2 = *gptr<u32>(0x952cacu);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005bf790(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1baba8;
    }
    r1 = *gptr<u32>(r13 + 4u);
    r2 = 0x3cu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0013864c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1baba8:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0013bb80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x14u;  // (from the original)
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001bab40
GUEST_EXPORT(0x001bab40, d_001bab40::f_001bab40);

// f_001babbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001babbc {

inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001babbc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0012ca50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0056a4a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1bac24;
    }
    r3 = 0x20u;  // (from the original)
    r1 = r5;
    r2 = *gptr<u32>(0x952cacu);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005bf790(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1bac24;
    }
    r1 = *gptr<u32>(r13 + 4u);
    r2 = 0x38u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0013864c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1bac24:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0013bb80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x14u;  // (from the original)
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
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


void f_001bac38(gptr<Object_001bac38_0> arg0) {
    u32 r1 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    r1 = 0xa18590u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 0x14));  // (from the original)
    arg0->word_0 = u32(std::bit_cast<u32>(S0));
    arg0->word_4 = u32(std::bit_cast<u32>(S1));
    arg0->word_8 = u32(std::bit_cast<u32>(S2));
    arg0->word_c = u32(std::bit_cast<u32>(S3));
    arg0->word_10 = u32(std::bit_cast<u32>(S4));
    arg0->word_14 = u32(std::bit_cast<u32>(S5));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
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
    u32 r1 = 0;
    u32 r2 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    r1 = 0xa18590u;  // (from the original)
    r2 = r1 + 0x18u;  // (from the original)
    r1 = r1 + 0x38u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r2 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r2 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r2 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r2 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r2 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r2 + 0x1c));  // (from the original)
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r2))));
    arg0->word_4 = u32(std::bit_cast<u32>(S1));
    arg0->word_8 = u32(std::bit_cast<u32>(S2));
    arg0->word_c = u32(std::bit_cast<u32>(S3));
    arg0->word_10 = u32(std::bit_cast<u32>(S4));
    arg0->word_14 = u32(std::bit_cast<u32>(S5));
    arg0->word_18 = u32(std::bit_cast<u32>(S6));
    arg0->word_1c = u32(std::bit_cast<u32>(S7));
    r0 = r0 + 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r1 + 0x18));  // (from the original)
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    arg0->word_24 = u32(std::bit_cast<u32>(S1));
    arg0->word_28 = u32(std::bit_cast<u32>(S2));
    arg0->word_2c = u32(std::bit_cast<u32>(S3));
    arg0->word_30 = u32(std::bit_cast<u32>(S4));
    arg0->word_34 = u32(std::bit_cast<u32>(S5));
    arg0->word_38 = u32(std::bit_cast<u32>(S6));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    r1 = 0xa18590u;  // (from the original)
    r2 = r1 + 0x54u;  // (from the original)
    r1 = r1 + 0x74u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r2 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r2 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r2 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r2 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r2 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r2 + 0x1c));  // (from the original)
    arg0->word_0 = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r2))));
    arg0->word_4 = u32(std::bit_cast<u32>(S1));
    arg0->word_8 = u32(std::bit_cast<u32>(S2));
    arg0->word_c = u32(std::bit_cast<u32>(S3));
    arg0->word_10 = u32(std::bit_cast<u32>(S4));
    arg0->word_14 = u32(std::bit_cast<u32>(S5));
    arg0->word_18 = u32(std::bit_cast<u32>(S6));
    arg0->word_1c = u32(std::bit_cast<u32>(S7));
    r0 = r0 + 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 0x14));  // (from the original)
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    arg0->word_24 = u32(std::bit_cast<u32>(S1));
    arg0->word_28 = u32(std::bit_cast<u32>(S2));
    arg0->word_2c = u32(std::bit_cast<u32>(S3));
    arg0->word_30 = u32(std::bit_cast<u32>(S4));
    arg0->word_34 = u32(std::bit_cast<u32>(S5));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001bac74
GUEST_EXPORT(0x001bac74, d_001bac74::f_001bac74);

// f_001bac9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac9c {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_001bac9c(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0xa21f6cu;  // (from the original)
    r1 = 0x20u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00301444(r0, r1, r2, guest::cpu()->r[3]);
    r0 = 0x953602u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = ~0u;
    r1 = 0x20u;  // (from the original)
    return call_0013fac4(r0, r1, r2, guest::cpu()->r[3]);
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
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = call_00758128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1bad84;
    }
    r0 = r4;
    r0 = call_007580d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_1bad8c;
    }
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xa0u;  // (from the original)
    r1 = r5;
    r0 = call_0071a0b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1bad84;
    } else {
        r6 = 0u;
    }
    r0 = r4;
    r0 = call_007580d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        r5 = r6;
        goto L_1bad58;
    }
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 + 0xa0u;  // (from the original)
    r1 = r5;
    r0 = r6;
    r0 = call_0071a0b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r6;
    r0 = call_00309fbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
L_1bad58:;
    r0 = call_002fb918(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = call_001df274(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = call_00770934(r0, r1, r2, r3);
    res = r0;
    r1 = res;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1badc0;
    }
L_1bad84:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_1bad8c:;
    r0 = r4;
    r0 = call_00758070(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        guest::preempt();
        goto L_1bad84;
    }
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r0 + 0x292a4u;  // (from the original)
    r0 = call_00118c9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_1bad84;
L_1badc0:;
    r3 = 0u;
    r2 = r4;
    r0 = r5;
    r0 = call_006f5138(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001bace0
GUEST_EXPORT(0x001bace0, d_001bace0::f_001bace0);

// f_001baf6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baf6c {

inline constexpr guest::Function<0x001e4348, u32(u32, u32, u32, u32)> call_001e4348;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x007105d4, u32(u32, u32, u32, u32)> call_007105d4;  // (from the original)

u32 f_001baf6c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = call_002fb918(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0 + 0xa4f8u;  // (from the original)
    r0 = r4;
    r0 = call_007105d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    if (r0 + 1u == 0) {
        r0 = 0u;
        goto L_1bafa8;
    }
    r2 = r5;
    r0 = r4;
    r0 = call_001e4348(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
L_1bafa8:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001baf6c
GUEST_EXPORT(0x001baf6c, d_001baf6c::f_001baf6c);

// f_001bb0c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb0c4 {

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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1bb1bc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1bb1bc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x20000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1bb1bc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb918(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_001df3d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_006f4f48(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = *gptr<u32>(r0);
    r5 = *gptr<u32>(r0 + 4);
    r6 = *gptr<u32>(r0 + 8);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb918(r0, r1, r2, r3);
    ea = r0 + 0x16cf8u;  // (from the original)
    r3 = *gptr<u32>(ea + 4);
    r0 = r0 + 0xa4f8u;  // (from the original)
    *gptr<u32>(0x953fa4u) = u32(*gptr<u32>(ea));  // (from the original)
    *gptr<u32>(0x953fa4u + 4) = u32(r3);  // (from the original)
    r3 = r6;
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001e4214(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1bb1bc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb918(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 + 0xa4f8u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_001e442c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    r5 = res;
    r4 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1bb1b0;
    }
    do {
L_1bb174:;
        r1 = r4;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_00710614(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_001bbc30(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r1 = r4;
            r0 = r6;
            guest::cpu()->r[13] = r13;
            r0 = call_002ff3fc(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
L_1bb1b0:;
    r0 = r6;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001e442c(r0, r1, r2, r3);
L_1bb1bc:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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

inline constexpr guest::Function<0x0056cbe8, u32(u32, u32, u32, u32)> call_0056cbe8;  // (from the original)
inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x0056ce84, u32(u32, u32, u32, u32)> call_0056ce84;  // (from the original)
inline constexpr guest::Function<0x0056cedc, u32(u32, u32, u32, u32)> call_0056cedc;  // (from the original)

u32 f_001bb304(gptr<Object_001bb304_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    guest::cpu()->r[13] -= 8u;
    r2 = arg0->word_4;
    r3 = arg0->word_8;
    r0 = 0xaaf6a4u;  // (from the original)
    *gptr<u32>(r0) = u32(arg0->word_0);
    *gptr<u32>(r0 + 4) = u32(r2);
    *gptr<u32>(r0 + 8) = u32(r3);
    r1 = 6u;
    r0 = call_0056cce4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xaaf6a4u;  // (from the original)
    r1 = 0u;
    r0 = call_0056ce84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xaaf6a4u;  // (from the original)
    r1 = 0u;
    r0 = call_0056cedc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xaaf6a4u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = 0u;
    return call_0056cbe8(r0, r1, r2, r3);
}

}  // namespace d_001bb304
GUEST_EXPORT(0x001bb304, d_001bb304::f_001bb304);

// f_001bb354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb354 {

inline constexpr guest::Function<0x001bbc30, u32(u32, u32, u32, u32)> call_001bbc30;  // (from the original)
inline constexpr guest::Function<0x001e4214, u32(u32, u32, u32, u32)> call_001e4214;  // (from the original)
inline constexpr guest::Function<0x001e442c, u32(u32, u32, u32, u32)> call_001e442c;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x002ff3fc, u32(u32, u32, u32, u32)> call_002ff3fc;  // (from the original)
inline constexpr guest::Function<0x00710614, u32(u32, u32, u32, u32)> call_00710614;  // (from the original)

u32 f_001bb354(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb918(r0, r1, r2, r3);
    ea = r0 + 0x16cf8u;  // (from the original)
    r3 = *gptr<u32>(ea + 4);
    r0 = r0 + 0xa4f8u;  // (from the original)
    *gptr<u32>(0x953fa4u) = u32(*gptr<u32>(ea));  // (from the original)
    *gptr<u32>(0x953fa4u + 4) = u32(r3);  // (from the original)
    r3 = r6;
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001e4214(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1bb404;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb918(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 + 0xa4f8u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_001e442c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    r5 = res;
    r4 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1bb3f8;
    }
    do {
L_1bb3bc:;
        r1 = r4;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_00710614(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_001bbc30(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r1 = r4;
            r0 = r6;
            guest::cpu()->r[13] = r13;
            r0 = call_002ff3fc(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
L_1bb3f8:;
    r0 = r6;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001e442c(r0, r1, r2, r3);
L_1bb404:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001bb354
GUEST_EXPORT(0x001bb354, d_001bb354::f_001bb354);

// f_001bbbe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bbbe8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0070eed0, u32(u32, u32, u32, u32)> call_0070eed0;  // (from the original)
inline constexpr guest::Function<0x00770934, u32(u32, u32, u32, u32)> call_00770934;  // (from the original)

u32 f_001bbbe8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 + 0x71900u;  // (from the original)
    r1 = r4;
    r0 = call_0070eed0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_00770934(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 + 1u == 0) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r0 = call_00758128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1bbde4;
    }
    r0 = r4;
    r0 = call_007580d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r6 = 1u;
    if (r0 != 0) {
        r0 = call_002fb328(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r0 + 0xa0u;  // (from the original)
        r1 = r5;
        r0 = call_0071a0b0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_1bbde4;
        } else {
            r8 = 0u;
        }
        r0 = r4;
        r0 = call_00758128(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_1bbda8;
        }
        goto L_1bbd00;
    }
    r0 = r4;
    r0 = call_00758070(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_1bbde4;
    }
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r0 + 0x292a4u;  // (from the original)
    r0 = call_00118c9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 + 1u == 0) {
        goto L_1bbde4;
    }
    r0 = r4;
    r0 = call_00758070(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 != 0) {
        r0 = call_002fae84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = call_002fb310(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r0 + 4u;
        r1 = r5;
        r0 = call_0010cadc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r1 = r4;
            r0 = call_001127ac(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
    }
    r0 = r6;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_1bbd00:;
    r0 = r4;
    r0 = call_007580d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_1bbdb0;
    }
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xa0u;  // (from the original)
    r1 = r5;
    r0 = call_0071a0b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1bbda8;
    }
    r0 = r4;
    r0 = call_007580d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        r5 = r8;
        goto L_1bbd68;
    }
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0 + 0xa0u;  // (from the original)
    r1 = r5;
    r0 = r7;
    r0 = call_0071a0b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r7;
    r0 = call_00309fbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
L_1bbd68:;
    r0 = call_002fb918(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = call_001df274(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = call_00770934(r0, r1, r2, r3);
    res = r0;
    r1 = res;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1bbda8;
    }
    r3 = 0u;
    r2 = r4;
    r0 = r5;
    r0 = call_006f5138(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r8 = r6;
L_1bbda8:;
    r0 = r8;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_1bbdb0:;
    r0 = r4;
    r0 = call_00758070(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        guest::preempt();
        goto L_1bbda8;
    }
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r0 + 0x292a4u;  // (from the original)
    r0 = call_00118c9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_1bbda8;
L_1bbde4:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001bbc30
GUEST_EXPORT(0x001bbc30, d_001bbc30::f_001bbc30);

// f_001bfa48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bfa48 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x00535ab0, u32(u32, u32, u32, u32)> call_00535ab0;  // (from the original)
inline constexpr guest::Function<0x0068efc8, u32(u32, u32, u32, u32)> call_0068efc8;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)

u32 f_001bfa48(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    zf = r0 == 0x30u;  // (from the original)
    ea = r4 + 0x28cu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    if (!zf) {
        zf = r0 == 0x31u;  // (from the original)
    }
    r0 = r13;
    if (zf) {
        goto L_1bfac0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00535ab0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_1bfa74:;
    r0 = r4 + 0x276u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00303acc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        S1 = std::bit_cast<float>(*gptr<u32>(0x94ddbcu));  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(r13 + 4u)) + S1;
        *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    }
    r0 = *gptr<u32>(r4 + 0xf0u);  // (from the original)
    if (r0 == 0) {
        r1 = 0u;
    } else {
        r1 = r0 + 0x14u;  // (from the original)
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0068efc8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_1bfac0:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006a6dbc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    guest::preempt();
    goto L_1bfa74;
}

}  // namespace d_001bfa48
GUEST_EXPORT(0x001bfa48, d_001bfa48::f_001bfa48);
