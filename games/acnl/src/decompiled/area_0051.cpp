// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00510878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00510878 {

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x00377160, u32(u32, u32, u32, u32)> call_00377160;  // (from the original)
inline constexpr guest::Function<0x00489ec8, u32(u32, u32, u32, u32)> call_00489ec8;  // (from the original)
inline constexpr guest::Function<0x0050cd1c, u32(u32, u32, u32, u32)> call_0050cd1c;  // (from the original)
inline constexpr guest::Function<0x00515d1c, u32(u32, u32, u32, u32)> call_00515d1c;  // (from the original)

u32 f_00510878(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = call_00515d1c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    if (r0 != 0) {
        goto L_5108ec;
    }
    r0 = *gptr<u32>(r4 + 0x38u);  // (from the original)
    r5 = 0u;
    if (r0 == 0) {
        r0 = call_00489ec8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = call_0050cd1c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u8>(r4 + 0x40u) = u8(r5);  // (from the original)
        *gptr<u8>(r4 + 0x41u) = u8(r5);  // (from the original)
    }
    r0 = u32(*gptr<u8>(r4 + 0x40u));  // (from the original)
    if (r0 != 0) {
        goto L_5108ec;
    }
    *gptr<u32>(0x96b92cu) = u32(r5);  // (from the original)
    r0 = 0x96b930u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    r0 = call_00377160(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0x28u) = u8(r5);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    if (r0 != 0) {
        r0 = call_002ffb64(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r4 + 0x24u) = u32(r5);  // (from the original)
    }
    *gptr<u32>(r4 + 0x1cu) = u32(r5);  // (from the original)
L_5108ec:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_00510878
GUEST_EXPORT(0x00510878, d_00510878::f_00510878);

// f_0051139c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051139c {

inline constexpr guest::Function<0x0044af48, u32(u32, u32, u32, u32)> call_0044af48;  // (from the original)
inline constexpr guest::Function<0x0044c1ac, u32(u32, u32, u32, u32)> call_0044c1ac;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32, u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x00733aac, u32(u32, u32, u32, u32)> call_00733aac;  // (from the original)
inline constexpr guest::Function<0x00733b4c, u32(u32, u32, u32, u32)> call_00733b4c;  // (from the original)

u32 f_0051139c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r6 = 0x974a64u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r1;
    *gptr<u32>(r13 + 4u) = u32(0xe7e3ffffu);  // (from the original)
    *gptr<u32>(*gptr<u32>(r6) + 0x60u) = u32(0x515344u);  // (from the original)
    r0 = *gptr<u32>(r6);
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0044af48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(r0);
    res = r0 & 0x80000000u;  // (from the original)
    r5 = 0u;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_5113ec;
    }
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_0044c1ac(r0, r1, r2, r3);
    goto L_511414;
L_5113ec:;
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_00733b4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_511438;
    }
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_00733aac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r0);
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_51144c;
    }
L_511414:;
    r3 = 0u;
    r2 = r13 + 4u;
    r1 = 3u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0051207c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_511438:;
    guest::cpu()->r[13] = r13;
    r0 = call_004ddc34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_5113ec;
L_51144c:;
    r0 = 1u;
    *gptr<u8>(r4 + 0x6bu) = u8(r0);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051139c
GUEST_EXPORT(0x0051139c, d_0051139c::f_0051139c);

// f_00511468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00511468 {

inline constexpr guest::Function<0x0044b7d8, u32(u32, u32, u32, u32)> call_0044b7d8;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32, u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x00733b84, u32(u32, u32, u32, u32)> call_00733b84;  // (from the original)
inline constexpr guest::Function<0x00733c20, u32(u32, u32, u32, u32)> call_00733c20;  // (from the original)

u32 f_00511468(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r5 = 0x974a64u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r0 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0044b7d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(r0);
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_5114d8;
    }
L_51148c:;
    r0 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_00733c20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = *gptr<u32>(r5);
        guest::cpu()->r[13] = r13;
        r0 = call_00733b84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r13 + 4u) = u32(r0);
        res = r0 & 0x80000000u;  // (from the original)
        if (res >> 0x1f) {  // (from the original)
            goto L_5114d8;
        }
        r0 = 1u;
        *gptr<u8>(r4 + 0x6au) = u8(r0);  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_004ddc34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_51148c;
L_5114d8:;
    r0 = 0u;
    r3 = r0;
    *gptr<u32>(r13) = u32(r0);
    r2 = r13 + 4u;
    r1 = 3u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0051207c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00511468
GUEST_EXPORT(0x00511468, d_00511468::f_00511468);

// f_00511504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00511504 {

inline constexpr guest::Function<0x0050ee4c, u32(u32, u32, u32, u32)> call_0050ee4c;  // (from the original)

u32 f_00511504(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0050ee4c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00511504
GUEST_EXPORT(0x00511504, d_00511504::f_00511504);

// f_00511a04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00511a04 {

inline constexpr guest::Function<0x0044b868, u32(u32, u32, u32, u32)> call_0044b868;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32, u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x00733bbc, u32(u32, u32, u32, u32)> call_00733bbc;  // (from the original)
inline constexpr guest::Function<0x00733c50, u32(u32, u32, u32, u32)> call_00733c50;  // (from the original)

u32 f_00511a04(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r5 = 0x974a64u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r0 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0044b868(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(r0);
    res = r0 & 0x80000000u;  // (from the original)
    r6 = 0u;
    if (res >> 0x1f) {  // (from the original)
        goto L_511a60;
    }
L_511a2c:;
    r0 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_00733c50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_511a84;
    }
    r0 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_00733bbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0 = r0 & 0x80000000u;  // (from the original)
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 1u;
        *gptr<u8>(r4 + 0x6au) = u8(r6);  // (from the original)
        goto L_511a7c;
    }
L_511a60:;
    r3 = 0u;
    r2 = r13 + 4u;
    r1 = 3u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_0051207c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
L_511a7c:;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_511a84:;
    guest::cpu()->r[13] = r13;
    r0 = call_004ddc34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_511a2c;
}

}  // namespace d_00511a04
GUEST_EXPORT(0x00511a04, d_00511a04::f_00511a04);

// f_0051207c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051207c {

inline constexpr guest::Function<0x004133a0, u32(u32, u32, u32, u32)> call_004133a0;  // (from the original)
inline constexpr guest::Function<0x00413478, u32(u32, u32, u32, u32)> call_00413478;  // (from the original)
inline constexpr guest::Function<0x004137d8, u32(u32, u32, u32, u32)> call_004137d8;  // (from the original)
inline constexpr guest::Function<0x0072f380, u32(u32, u32, u32, u32)> call_0072f380;  // (from the original)
inline constexpr guest::Function<0x0072f3a4, u32(u32, u32, u32, u32)> call_0072f3a4;  // (from the original)

u32 f_0051207c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r5 = r1;
    r7 = r2;
    r0 = r2;
    r0 = call_00413478(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r4 = 0u;
        goto L_5120b0;
    }
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 2u;
    }
    if (zf) {
        r4 = 1u;
    } else {
        r4 = 3u;
    }
L_5120b0:;
    if (r4 != r5) {
        r4 = r5;
    }
    r0 = r7;
    r0 = call_004133a0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 3u;
    if (!zf) {
        zf = r0 == 0;
    }
    if (zf) {
        goto L_512104;
    }
    r5 = *gptr<u32>(0x974a58u);  // (from the original)
    if (r5 == 0) {
        goto L_51210c;
    }
    r0 = r5;
    r0 = call_0072f380(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_512104;
    }
    r0 = r5;
    r0 = call_0072f3a4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_51210c;
    }
L_512104:;
    r0 = 0u;
    goto L_512114;
L_51210c:;
    r0 = r7;
    r0 = call_004137d8(r0, r1, r2, guest::cpu()->r[3]);
L_512114:;
    r2 = *gptr<u32>(r6 + 0x54u);  // (from the original)
    r1 = r0;
    if (r2 != 0) {
        r0 = r4;
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return guest::call_address<u32>(r2, r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051207c
GUEST_EXPORT(0x0051207c, d_0051207c::f_0051207c);

// f_005122a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005122a8 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0041f11c, u32(u32, u32, u32, u32)> call_0041f11c;  // (from the original)
inline constexpr guest::Function<0x0041f184, u32(u32, u32, u32, u32)> call_0041f184;  // (from the original)
inline constexpr guest::Function<0x0041fc80, u32(u32, u32, u32, u32)> call_0041fc80;  // (from the original)
inline constexpr guest::Function<0x0041fd0c, u32(u32, u32, u32, u32)> call_0041fd0c;  // (from the original)
inline constexpr guest::Function<0x0044c1ec, u32(u32, u32, u32, u32)> call_0044c1ec;  // (from the original)
inline constexpr guest::Function<0x0051139c, u32(u32, u32, u32, u32)> call_0051139c;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> call_005124b8;  // (from the original)
inline constexpr guest::Function<0x0072f038, u32(u32, u32, u32, u32)> call_0072f038;  // (from the original)
inline constexpr guest::Function<0x0072f26c, u32(u32, u32, u32, u32)> call_0072f26c;  // (from the original)
inline constexpr guest::Function<0x0072f300, u32(u32, u32, u32, u32)> call_0072f300;  // (from the original)

u32 f_005122a8(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x38;  // (from the original)
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
    *gptr<u32>(ea + 0x30) = u32(r12);  // (from the original)
    *gptr<u32>(ea + 0x34) = u32(r14);  // (from the original)
    r13 = r13 - 0x458u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r3;
    r8 = 0u;
    r3 = 0x2710u;  // (from the original)
    ea = r13 + 0x3f0u;  // (from the original)
    *gptr<u8>(ea) = u8(1u);
    ea = r13 + 0x3f4u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    r0 = 0x3e8u;  // (from the original)
    ea = r13 + 0x3f8u;  // (from the original)
    *gptr<u8>(ea) = u8(r8);
    ea = r13 + 0x3fcu;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r13 + 0x408u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r13 + 0x400u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(~0u);
    r2 = r13 + 0x3f0u;  // (from the original)
    *gptr<u32>(r13 + 0x40cu) = u32(r0);  // (from the original)
    r1 = r2;
    r0 = r4;
    *gptr<u8>(r13 + 0x410u) = u8(r8);  // (from the original)
    *gptr<u32>(r13 + 0x414u) = u32(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005124b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = 0x974a64u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        r0 = *gptr<u32>(r10);
        if (r0 != 0) {
            guest::cpu()->r[13] = r13;
            r0 = call_0044c1ec(r0, r1, r2, r3);
        }
        *gptr<u8>(r4 + 0x69u) = u8(r8);  // (from the original)
        *gptr<u8>(r4 + 0x68u) = u8(r8);  // (from the original)
        r3 = 0u;
        r2 = r13 + 4u;
        r1 = 3u;
        r0 = r4;
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_0051207c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_512490;
    }
    *gptr<u32>(r13 + 0x214u) = u32(r8);  // (from the original)
    r9 = r13 + 0x210u;  // (from the original)
    r1 = 0xffu;  // (from the original)
    r0 = r13 + 0x218u;  // (from the original)
    *gptr<u32>(r13 + 0x318u) = u32(r8);  // (from the original)
    *gptr<u32>(r13 + 0x3e8u) = u32(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x31du;  // (from the original)
    r1 = 0xc8u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r7 = 0x974a58u;  // (from the original)
    r11 = 4u;
    *gptr<u8>(r13 + 0x210u) = u8(r5 + 8u);  // (from the original)
    r2 = 0u;
    *gptr<u8>(r13 + 0x31cu) = u8(0xbu);  // (from the original)
    *gptr<u8>(r13 + 0x211u) = u8(r11);  // (from the original)
    if (r5 == 0) {
        goto L_51245c;
    }
    r1 = 0x198eu;  // (from the original)
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0072f26c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
L_5123ac:;
    *gptr<u32>(r13 + 0x214u) = u32(r0);  // (from the original)
    r1 = 0x87be2fu;  // (from the original)
    r2 = 0x21u;  // (from the original)
    r0 = r9 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x318u) = u32(0x21u);  // (from the original)
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0072f300(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= r6) {
        r0 = *gptr<u32>(r13);
        r1 = *gptr<u32>(r13 + 0x428u);  // (from the original)
        r2 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002f8574(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r13 + 0x3e8u) = u32(r6);  // (from the original)
    }
    r5 = r13 + 8u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0041f184(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r9;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0041f11c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x87be50u;  // (from the original)
    r2 = 0x14u;  // (from the original)
    r0 = r5;
    *gptr<u16>(r13 + 0xeu) = u16(r11);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0041fc80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0051139c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_512474;
    }
    *gptr<u8>(r4 + 0x6au) = u8(1u);  // (from the original)
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0072f038(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0041fd0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x430u;  // (from the original)
    r0 = 0u;
    ea = r13;
    r13 = r13 + 0x28;  // (from the original)
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
L_51245c:;
    r1 = 0x198du;  // (from the original)
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0072f26c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_5123ac;
L_512474:;
    r0 = *gptr<u32>(r10);
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0044c1ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    *gptr<u8>(r4 + 0x69u) = u8(r8);  // (from the original)
    r0 = r5;
    *gptr<u8>(r4 + 0x68u) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0041fd0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_512490:;
    r13 = r13 + 0x430u;  // (from the original)
    r0 = 0x80000006u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x28;  // (from the original)
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

}  // namespace d_005122a8
GUEST_EXPORT(0x005122a8, d_005122a8::f_005122a8);

// f_005124b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005124b8 {

struct __attribute__((packed)) Object_005124b8_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
    u8 unknown_6a[0x2];  // (not used here)
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
};
GUEST_OFFSET(Object_005124b8_0, byte_69, 0x69);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_88, 0x88);  // (from the original)

struct __attribute__((packed)) Object_005124b8_1 {
    u8 byte_0;
    u8 unknown_1[0xb];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x10];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_005124b8_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005124b8_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005124b8_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005124b8_1, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x0044c5e8, u32(u32, u32, u32, u32)> call_0044c5e8;  // (from the original)

u32 f_005124b8(gptr<Object_005124b8_0> arg0, gptr<Object_005124b8_1> arg1, float S0, float S1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    r5 = r0;
    r13 = r13 - 0x60u;  // (from the original)
    r4 = r1;
    if (u32(arg0->byte_69) != 0) {
        r0 = 0u;
        goto L_512544;
    }
    S0 = std::bit_cast<float>(arg0->word_6c);
    S1 = std::bit_cast<float>(arg0->word_70);
    S2 = std::bit_cast<float>(arg0->word_74);
    S3 = std::bit_cast<float>(arg0->word_78);
    S4 = std::bit_cast<float>(arg0->word_7c);
    S5 = std::bit_cast<float>(arg0->word_80);
    S6 = std::bit_cast<float>(arg0->word_84);
    S7 = std::bit_cast<float>(arg0->word_88);
    r6 = 0u;
    r7 = r13;
    r3 = 0x7d0u;  // (from the original)
    r2 = 0x7530u;  // (from the original)
    r0 = r7;
    ea = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(ea + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(ea + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    r1 = 0x512550u;  // (from the original)
    arg1->word_24 = u32(r13 + 0x28u);  // (from the original)
    arg1->byte_0 = u8(r6);
    arg1->word_c = u32(r2);
    arg1->word_10 = u32(r3);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_003081b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    *gptr<u8>(r13 + 0x22u) = u8(4u);  // (from the original)
    *gptr<u8>(r13 + 0x23u) = u8(r6);  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r7);
    r1 = r4;
    r0 = *gptr<u32>(0x974a64u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_0044c5e8(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r0 & 0x80000000u;  // (from the original)
    res = r1;
    if (res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = 1u;
        *gptr<u8>(r5 + 0x69u) = u8(r1);  // (from the original)
    }
L_512544:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005124b8
GUEST_EXPORT(0x005124b8, d_005124b8::f_005124b8);

// f_00512940: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00512940 {

inline constexpr guest::Function<0x00510b68, u32(u32, u32, u32, u32)> call_00510b68;  // (from the original)

u32 f_00512940(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00510b68(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 0x6au) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00512940
GUEST_EXPORT(0x00512940, d_00512940::f_00512940);

// f_00512a98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00512a98 {

inline constexpr guest::Function<0x0044b700, u32(u32, u32, u32, u32)> call_0044b700;  // (from the original)
inline constexpr guest::Function<0x0044c1ac, u32(u32, u32, u32, u32)> call_0044c1ac;  // (from the original)
inline constexpr guest::Function<0x0044c1ec, u32(u32, u32, u32, u32)> call_0044c1ec;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32, u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> call_005124b8;  // (from the original)
inline constexpr guest::Function<0x00733b7c, u32(u32, u32, u32, u32)> call_00733b7c;  // (from the original)
inline constexpr guest::Function<0x00733bf0, u32(u32, u32, u32, u32)> call_00733bf0;  // (from the original)

u32 f_00512a98(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r8 = 0u;
    r6 = r2;
    r9 = 1u;
    r3 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0xe7e3ffffu);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0x2710u);  // (from the original)
    r0 = 0x3e8u;  // (from the original)
    r2 = ~0u;
    *gptr<u8>(r13 + 8u) = u8(r9);
    *gptr<u32>(r13 + 0xcu) = u32(r8);  // (from the original)
    *gptr<u8>(r13 + 0x10u) = u8(r8);  // (from the original)
    *gptr<u32>(r3) = u32(r0);
    *gptr<u32>(r3 + 4) = u32(r2);
    *gptr<u32>(r3 + 8) = u32(r8);
    r1 = r13 + 8u;
    *gptr<u32>(r13 + 0x24u) = u32(r0);  // (from the original)
    r0 = r4;
    *gptr<u8>(r13 + 0x28u) = u8(r8);  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005124b8(r0, r1, r2, r3);
    r7 = 0x974a64u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_512b40;
    }
    r3 = 0u;
    r2 = r13 + 4u;
    r1 = 3u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_0051207c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    if (r0 == 0) {
        goto L_512c4c;
    }
L_512b2c:;
    guest::cpu()->r[13] = r13;
    r0 = call_0044c1ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_512c4c;
L_512b40:;
    *gptr<u32>(*gptr<u32>(r7) + 0x60u) = u32(0x515344u);  // (from the original)
    r0 = *gptr<u32>(r7);
    r3 = 1u;
    r2 = r6;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0044b700(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(r0);
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_512b9c;
    }
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0044c1ac(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r13 + 4u;
    r1 = 3u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_0051207c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    if (r0 == 0) {
        goto L_512c4c;
    }
    guest::preempt();
    goto L_512b2c;
L_512b9c:;
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00733bf0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_512c60;
    }
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_00733b7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 & 0x80000000u;  // (from the original)
    res = r1;
    *gptr<u32>(r13 + 4u) = u32(r0);
    if (res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 1u;
        *gptr<u8>(r4 + 0x6bu) = u8(r9);  // (from the original)
        goto L_512c58;
    }
    r1 = 0xd8a148e5u;  // (from the original)
    zf = r0 == r1;
    if (!zf) {
        r1 = r1 + 0xeu;  // (from the original)
        zf = r0 == r1;
    }
    if (!zf) {
        r1 = 0xd8a148e0u;  // (from the original)
        zf = r0 == r1;
    }
    if (zf) {
        goto L_512c40;
    }
    zf = r0 == 0xe0e14826u;  // (from the original)
    if (!zf) {
        zf = r0 == 0xe0a14827u;  // (from the original)
    }
    if (zf) {
        goto L_512c28;
    }
    r1 = 0xd8a14825u;  // (from the original)
    zf = r0 == r1;
    if (!zf) {
        zf = r0 == r1 + 0xd2u;  // (from the original)
    }
    if (zf) {
        goto L_512c28;
    }
    r1 = 0xf8a148c4u;  // (from the original)
    zf = r0 == r1;
    if (!zf) {
        r1 = 0xd8a14903u;  // (from the original)
        zf = r0 == r1;
    }
    if (!zf) {
        goto L_512c40;
    }
L_512c28:;
    r3 = 0u;
    r2 = r13 + 4u;
    r1 = 3u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_0051207c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_512c40:;
    r0 = *gptr<u32>(r7);
    if (r0 != 0) {
        guest::preempt();
        goto L_512b2c;
    }
L_512c4c:;
    *gptr<u8>(r4 + 0x69u) = u8(r8);  // (from the original)
    r0 = 0u;
    *gptr<u8>(r4 + 0x68u) = u8(r8);  // (from the original)
L_512c58:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_512c60:;
    guest::cpu()->r[13] = r13;
    r0 = call_004ddc34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_512b9c;
}

}  // namespace d_00512a98
GUEST_EXPORT(0x00512a98, d_00512a98::f_00512a98);

// f_00512d88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00512d88 {

inline constexpr guest::Function<0x00426900, u32(u32, u32, u32, u32)> call_00426900;  // (from the original)
inline constexpr guest::Function<0x0048a908, u32(u32, u32, u32, u32)> call_0048a908;  // (from the original)
inline constexpr guest::Function<0x0072ef34, u32(u32, u32, u32, u32)> call_0072ef34;  // (from the original)
inline constexpr guest::Function<0x007344dc, u32(u32, u32, u32, u32)> call_007344dc;  // (from the original)

u32 f_00512d88(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r0 = 0x974a6cu;  // (from the original)
    r13 = r13 - 0x60u;  // (from the original)
    r4 = r3;
    r5 = *gptr<u32>(r0);
    r6 = r1;
    r7 = r2;
    r8 = 0u;
    if (r5 == 0) {
        goto L_512e48;
    }
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00426900(r0, r1, r2, r3);
    r3 = r7;
    r2 = r6;
    r1 = r13 + 0x28u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007344dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r5 = 0x900484u;  // (from the original)
    res = r0 & 0x80000000u;  // (from the original)
    r7 = r13 + 0x28u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_512e3c;
    }
    r2 = r7;
    r6 = r13 + 0x40u;  // (from the original)
    r0 = *gptr<u32>(0x974a58u);  // (from the original)
    if (r0 == 0) {
        goto L_512e3c;
    }
    r1 = r13;
    *gptr<u8>(r13) = u8(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_0072ef34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_512e3c;
    }
    r2 = 1u;
    r1 = r13 + 2u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0048a908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_512e3c;
    }
    ea = r13 + 0x40u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    *gptr<u32>(r4) = u32(*gptr<u32>(ea));
    *gptr<u32>(r4 + 4) = u32(r1);
    *gptr<u32>(r13 + 0x28u) = u32(r5);  // (from the original)
    r0 = r7 + 4u;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_512e3c:;
    *gptr<u32>(r13 + 0x28u) = u32(r5);  // (from the original)
    r0 = r7 + 4u;
L_512e48:;
    *gptr<u32>(r4) = u32(r8);
    *gptr<u32>(r4 + 4u) = u32(r8);
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00512d88
GUEST_EXPORT(0x00512d88, d_00512d88::f_00512d88);

// f_00512e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00512e64 {

inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> call_003d0cbc;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x005148a4, u32(u32, u32, u32, u32)> call_005148a4;  // (from the original)

u32 f_00512e64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    if (r1 == 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003d0cbc(r0, r1, r2, r3);
    r3 = 0u;
    *gptr<u32>(r13) = u32(r0);
    r2 = r3;
    r1 = 0x66u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005148a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003d0d6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00512e64
GUEST_EXPORT(0x00512e64, d_00512e64::f_00512e64);

// f_005132e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005132e8 {

inline constexpr guest::Function<0x00403828, u32(u32, u32, u32, u32)> call_00403828;  // (from the original)
inline constexpr guest::Function<0x00403838, u32(u32, u32, u32, u32)> call_00403838;  // (from the original)
inline constexpr guest::Function<0x0040aca8, u32(u32, u32, u32, u32)> call_0040aca8;  // (from the original)
inline constexpr guest::Function<0x0040acc4, u32(u32, u32, u32, u32)> call_0040acc4;  // (from the original)
inline constexpr guest::Function<0x0040ad14, u32(u32, u32, u32, u32)> call_0040ad14;  // (from the original)
inline constexpr guest::Function<0x0040ad30, u32(u32, u32, u32, u32)> call_0040ad30;  // (from the original)
inline constexpr guest::Function<0x0040ad4c, u32(u32, u32, u32, u32)> call_0040ad4c;  // (from the original)
inline constexpr guest::Function<0x0040ad68, u32(u32, u32, u32, u32)> call_0040ad68;  // (from the original)
inline constexpr guest::Function<0x0040ad88, u32(u32, u32, u32, u32)> call_0040ad88;  // (from the original)
inline constexpr guest::Function<0x0040b620, u32(u32, u32, u32, u32)> call_0040b620;  // (from the original)
inline constexpr guest::Function<0x0044badc, u32(u32, u32, u32, u32)> call_0044badc;  // (from the original)
inline constexpr guest::Function<0x0044f0f4, u32(u32, u32, u32, u32)> call_0044f0f4;  // (from the original)
inline constexpr guest::Function<0x0045ee4c, u32(u32, u32, u32, u32)> call_0045ee4c;  // (from the original)
inline constexpr guest::Function<0x00512a98, u32(u32, u32, u32, u32)> call_00512a98;  // (from the original)
inline constexpr guest::Function<0x00733cf0, u32(u32, u32, u32, u32)> call_00733cf0;  // (from the original)

u32 f_005132e8(u32 r0, u32 r1, u32 r2) {
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
    r13 = r13 - 0xf00u;  // (from the original)
    r4 = r0;
    r7 = r13;
    r6 = r1;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00403838(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u16>(r13 + 4u) = u16(1u);
    *gptr<u16>(r13 + 6u) = u16(4u);
    *gptr<u8>(r7 + 0x430u) = u8(0u);  // (from the original)
    r2 = 8u;
    r1 = 3u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 2u;
    r1 = 4u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r2 = *gptr<u32>(r4 + 0x60u);  // (from the original)
    r1 = 5u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r10 = 0xbbau;  // (from the original)
    *gptr<u32>(r7 + 8u) = u32(r10);
    *gptr<u8>(r7 + 0xcu) = u8(0u);  // (from the original)
    r2 = r6;
    r1 = 1u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r8 = 0x953660u;  // (from the original)
    r9 = 8u;
    r1 = 3u;
    r2 = r9 | u32(*gptr<u8>(r8)) << 5;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 1u;
    r1 = 2u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r13 + 0x4c0u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040b620(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8ff6bcu;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    *gptr<u8>(r0 + 4u) = u8(2u);
    r1 = r10;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040aca8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 1u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040ad88(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 4u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040ad68(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040ad4c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r5 + 0x9d4u) = u8(0u);  // (from the original)
    r1 = 1u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040ad14(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 1u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040ad30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 3u;
    r2 = r9 | u32(*gptr<u8>(r8)) << 5;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040acc4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 2u;
    r1 = 4u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040acc4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = *gptr<u32>(r4 + 0x60u);  // (from the original)
    r1 = 5u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040acc4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 1u;
    r1 = 2u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040acc4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r6;
    r1 = 1u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0040acc4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r5;
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00512a98(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r6 = 0x974a64u;  // (from the original)
        ea = r6;
        r0 = *gptr<u32>(ea);
        ea = r4 + 0x1cu;  // (from the original)
        *gptr<u32>(ea) = u32(*gptr<u32>(r0 + (u32(*gptr<u8>(r0 + 0xb5u)) << 2) + 0xc4u));  // (from the original)
        ea = r0 + 0x7cu;  // (from the original)
        r1 = *gptr<u32>(ea);
        r2 = *gptr<u32>(ea + 4);
        r0 = *gptr<u32>(0x974a6cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0044f0f4(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r4 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0045ee4c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = *gptr<u32>(r4 + 0x18u);  // (from the original)
        zf = r0 == 0;
        if (!zf) {
            r0 = *gptr<u32>(r6);
            zf = r0 == 0;
        }
        if (zf) {
            goto L_5134fc;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_00733cf0(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            goto L_5134fc;
        }
        goto L_51350c;
    }
    r0 = 0u;
    r13 = r13 + 0xf00u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5134fc:;
    r0 = *gptr<u32>(r6);
    if (r0 != 0) {
        r1 = 0x1f4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0044badc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
L_51350c:;
    r0 = 1u;
    r13 = r13 + 0xf00u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005132e8
GUEST_EXPORT(0x005132e8, d_005132e8::f_005132e8);

// f_00513e6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00513e6c {

inline constexpr guest::Function<0x00415b1c, u32(u32, u32, u32, u32)> call_00415b1c;  // (from the original)

u32 f_00513e6c(u32 r0, u32 r1, u32 r2) {
    u32 zf = 0;
    zf = r1 == 0;
    if (!zf) {
        zf = r2 == 0;
    }
    if (zf) {
        return r0;
    }
    if (u32(r2 >= 0xb8u) && !u32(r2 == 0xb8u)) {  // (from the original)
        r2 = 0xb8u;  // (from the original)
    }
    r0 = *gptr<u32>(0x974a58u);  // (from the original)
    return call_00415b1c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00513e6c
GUEST_EXPORT(0x00513e6c, d_00513e6c::f_00513e6c);

// f_00514264: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00514264 {

inline constexpr guest::Function<0x0044badc, u32(u32, u32, u32, u32)> call_0044badc;  // (from the original)
inline constexpr guest::Function<0x0044f0f4, u32(u32, u32, u32, u32)> call_0044f0f4;  // (from the original)
inline constexpr guest::Function<0x0045ee4c, u32(u32, u32, u32, u32)> call_0045ee4c;  // (from the original)
inline constexpr guest::Function<0x00510738, u32(u32, u32, u32, u32)> call_00510738;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)

u32 f_00514264(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00510738(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    if (!(res >> 0x1f)) {  // (from the original)
        r5 = 0x974a64u;  // (from the original)
        ea = r5;
        ea = *gptr<u32>(ea) + 0x7cu;  // (from the original)
        r1 = *gptr<u32>(ea);
        r2 = *gptr<u32>(ea + 4);
        r0 = *gptr<u32>(0x974a6cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0044f0f4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0045ee4c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = *gptr<u32>(r5);
        if (r0 != 0) {
            r1 = 0x1f4u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0044badc(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = 0xd8a148f4u;  // (from the original)
    r1 = 0u;
    zf = r0 == r2;
    if (!zf) {
        zf = r0 == r2 - 0xfu;  // (from the original)
    }
    if (zf) {
        r0 = 0x80000002u;  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = 0xd8a148f3u;  // (from the original)
    zf = r0 == r2;
    if (!zf) {
        zf = r0 == (r2 | r2 >> 0x18);  // (from the original)
    }
    if (zf) {
        r0 = 0x80000001u;  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 == 0xd8a148e0u) {  // (from the original)
        r0 = 0x80000003u;  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13) = u32(r1);
    r3 = 0u;
    r2 = r13 + 4u;
    r1 = 3u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0051207c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0x80000006u;  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00514264
GUEST_EXPORT(0x00514264, d_00514264::f_00514264);

// f_0051433c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051433c {

inline constexpr guest::Function<0x00403828, u32(u32, u32, u32, u32)> call_00403828;  // (from the original)
inline constexpr guest::Function<0x00403838, u32(u32, u32, u32, u32)> call_00403838;  // (from the original)
inline constexpr guest::Function<0x00514acc, u32(u32, u32, u32, u32)> call_00514acc;  // (from the original)

u32 f_0051433c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x4d0u;  // (from the original)
    r5 = r0;
    r6 = r13;
    r4 = r1;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00403838(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u16>(r13 + 4u) = u16(1u);
    *gptr<u16>(r13 + 6u) = u16(4u);
    *gptr<u8>(r6 + 0x430u) = u8(0u);  // (from the original)
    r2 = 8u;
    r1 = 3u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 2u;
    r1 = 4u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r2 = *gptr<u32>(r5 + 0x60u);  // (from the original)
    r1 = 5u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r6 + 8u) = u32(0xbbau);  // (from the original)
    *gptr<u8>(r6 + 0xcu) = u8(0u);  // (from the original)
    r2 = r4;
    r1 = 1u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 8u | u32(*gptr<u8>(0x953660u)) << 5;  // (from the original)
    r1 = 3u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 2u;
    r1 = r2;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00403828(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00514acc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        r13 = r13 + 0x4d0u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    r13 = r13 + 0x4d0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051433c
GUEST_EXPORT(0x0051433c, d_0051433c::f_0051433c);

// f_00514524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00514524 {

struct __attribute__((packed)) Object_00514524_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_00514524_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x00400fd8, u32(u32, u32, u32, u32)> call_00400fd8;  // (from the original)
inline constexpr guest::Function<0x004394b8, u32(u32, u32, u32, u32)> call_004394b8;  // (from the original)
inline constexpr guest::Function<0x00514264, u32(u32, u32, u32, u32)> call_00514264;  // (from the original)

u32 f_00514524(gptr<Object_00514524_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x80u;  // (from the original)
    r4 = r0;
    arg0->word_1c = u32(r1);
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00400fd8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r13 + 0x6cu) = u32(r5);  // (from the original)
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00514264(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_004394b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00514524
GUEST_EXPORT(0x00514524, d_00514524::f_00514524);

// f_00514acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00514acc {

inline constexpr guest::Function<0x0044c1ec, u32(u32, u32, u32, u32)> call_0044c1ec;  // (from the original)
inline constexpr guest::Function<0x0044f0f4, u32(u32, u32, u32, u32)> call_0044f0f4;  // (from the original)
inline constexpr guest::Function<0x0045ee4c, u32(u32, u32, u32, u32)> call_0045ee4c;  // (from the original)
inline constexpr guest::Function<0x0051139c, u32(u32, u32, u32, u32)> call_0051139c;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> call_005124b8;  // (from the original)

u32 f_00514acc(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x48u;  // (from the original)
    r5 = r1;
    r2 = 0x2710u;  // (from the original)
    r6 = 0u;
    ea = r13 + 8u;
    *gptr<u8>(ea) = u8(1u);
    r4 = r0;
    r0 = 0x3e8u;  // (from the original)
    r3 = ~0u;
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r3);
    *gptr<u32>(ea + 8) = u32(r6);
    r1 = r13 + 8u;
    *gptr<u32>(r13 + 0x24u) = u32(r0);  // (from the original)
    r0 = r4;
    *gptr<u8>(r13 + 0x28u) = u8(r6);  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005124b8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x974a64u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_514b68;
    }
    r3 = 0u;
    r2 = r13 + 4u;
    r1 = 3u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_0051207c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    if (r0 == 0) {
        goto L_514bc4;
    }
L_514b54:;
    guest::cpu()->r[13] = r13;
    r0 = call_0044c1ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_514bc4;
L_514b68:;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0051139c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r0 = *gptr<u32>(r7);
    if (!zf) {
        ea = r4 + 0x1cu;  // (from the original)
        *gptr<u32>(ea) = u32(*gptr<u32>(r0 + (u32(*gptr<u8>(r0 + 0xb5u)) << 2) + 0xc4u));  // (from the original)
        ea = r0 + 0x7cu;  // (from the original)
        r1 = *gptr<u32>(ea);
        r2 = *gptr<u32>(ea + 4);
        r0 = *gptr<u32>(0x974a6cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0044f0f4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0045ee4c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
        r13 = r13 + 0x48u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 != 0) {
        guest::preempt();
        goto L_514b54;
    }
L_514bc4:;
    *gptr<u8>(r4 + 0x69u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x68u) = u8(r6);  // (from the original)
    r0 = 0u;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00514acc
GUEST_EXPORT(0x00514acc, d_00514acc::f_00514acc);

// f_00514c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00514c3c {

inline constexpr guest::Function<0x0044b0fc, u32(u32, u32, u32, u32)> call_0044b0fc;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32, u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x00733b14, u32(u32, u32, u32, u32)> call_00733b14;  // (from the original)
inline constexpr guest::Function<0x00733b8c, u32(u32, u32, u32, u32)> call_00733b8c;  // (from the original)

u32 f_00514c3c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r5 = 0x974a64u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r1 = 2u;
    r2 = 1u;
    r0 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0044b0fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(r0);
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_514c98;
    }
L_514c68:;
    r0 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_00733b8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_514cc0;
    }
    r0 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_00733b14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0 = r0 & 0x80000000u;  // (from the original)
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 1u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_514c98:;
    r5 = 0u;
    r3 = r5;
    r2 = r13 + 4u;
    r1 = 3u;
    r0 = r4;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0051207c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_514cc0:;
    guest::cpu()->r[13] = r13;
    r0 = call_004ddc34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_514c68;
}

}  // namespace d_00514c3c
GUEST_EXPORT(0x00514c3c, d_00514c3c::f_00514c3c);

// f_00515148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00515148 {

struct __attribute__((packed)) Object_00515148_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00515148_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> call_003d0cbc;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x00510b68, u32(u32, u32, u32, u32)> call_00510b68;  // (from the original)
inline constexpr guest::Function<0x005148a4, u32(u32, u32, u32, u32)> call_005148a4;  // (from the original)
inline constexpr guest::Function<0x00733cf0, u32(u32, u32, u32, u32)> call_00733cf0;  // (from the original)

u32 f_00515148(gptr<Object_00515148_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = 0u;
    if (arg0->word_18 == 0) {
        goto L_5151ac;
    }
    r0 = *gptr<u32>(0x974a64u);  // (from the original)
    if (r0 == 0) {
        goto L_5151ac;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00733cf0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5151ac;
    }
    r1 = 0x5151d4u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003d0cbc(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r0);
    r2 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
    r3 = 0x8020000u;  // (from the original)
    r1 = 0x65u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005148a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003d0d6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5151ac:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00510b68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0x28eu;  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x6au) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x8eu) = u16(r5);  // (from the original)
    *gptr<u16>(r0 + r4) = u16(r5);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00515148
GUEST_EXPORT(0x00515148, d_00515148::f_00515148);

// f_005152d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005152d4 {

inline constexpr guest::Function<0x0044badc, u32(u32, u32, u32, u32)> call_0044badc;  // (from the original)

u32 f_005152d4(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x974a64u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x7d0u;  // (from the original)
    return call_0044badc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005152d4
GUEST_EXPORT(0x005152d4, d_005152d4::f_005152d4);

// f_005152f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005152f4 {

inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> call_003d0cbc;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x005148a4, u32(u32, u32, u32, u32)> call_005148a4;  // (from the original)

u32 f_005152f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r6 = r0;
    r4 = r1;
    r5 = r2;
    r1 = r3;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003d0cbc(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r0);
    r3 = r5;
    r2 = r4;
    r1 = 0x67u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005148a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_003d0d6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005152f4
GUEST_EXPORT(0x005152f4, d_005152f4::f_005152f4);

// f_00515cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00515cdc {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00426174, u32(u32, u32, u32, u32)> call_00426174;  // (from the original)
inline constexpr guest::Function<0x0050f7a0, u32(u32, u32, u32, u32)> call_0050f7a0;  // (from the original)
inline constexpr guest::Function<0x005118d4, u32(u32, u32, u32, u32)> call_005118d4;  // (from the original)

u32 f_00515cdc(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0050f7a0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r0 = call_005118d4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x290u;  // (from the original)
    r4 = r0;
    r0 = call_00135740(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(0x974a14u);  // (from the original)
    if (r0 != 0) {
        r0 = call_00426174(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_00137e84(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00515cdc
GUEST_EXPORT(0x00515cdc, d_00515cdc::f_00515cdc);

// f_005164c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005164c0 {

struct __attribute__((packed)) Object_005164c0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(Object_005164c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, byte_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x003bd7f0, u32(u32, u32, u32, u32)> call_003bd7f0;  // (from the original)

u32 f_005164c0(gptr<Object_005164c0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    arg0->word_0 = u32(r4);
    r2 = 0x903610u;  // (from the original)
    arg0->word_4 = u32(r4);
    arg0->word_8 = u32(r4);
    arg0->byte_c = u8(r4);
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    arg0->word_18 = u32(r4);
    arg0->word_1c = u32(r4);
    arg0->word_20 = u32(r4);
    arg0->word_24 = u32(r4);
    arg0->byte_28 = u8(r4);
    r0 = r0 + 0x2cu;  // (from the original)
    r0 = call_003bd7f0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r0) = u32(0x9035fcu);  // (from the original)
    r1 = r0 + 0x1d4u;  // (from the original)
    r0 = r0 - 0x2cu;  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x40u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x41u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x42u) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x50u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x54u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x58u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x5cu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x60u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x64u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x68u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x69u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x6au) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x6bu) = u8(r4);  // (from the original)
    r0 = r0 + 0x290u;  // (from the original)
    *gptr<u16>(r1 + 0x8eu) = u16(r4);  // (from the original)
    r0 = call_0012bfec(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 - 0x290u;  // (from the original)
    *gptr<u32>(0x953664u) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(0x952c9cu);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u16>(r0 + 0x8eu) = u16(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005164c0
GUEST_EXPORT(0x005164c0, d_005164c0::f_005164c0);

// f_0051659c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051659c {

struct __attribute__((packed)) Object_0051659c_0 {
    u8 unknown_0[0x2d0];  // (not used here)
    u8 byte_2d0;
};
GUEST_OFFSET(Object_0051659c_0, byte_2d0, 0x2d0);  // (from the original)

inline constexpr guest::Function<0x0050e1d0, u32(u32, u32, u32, u32)> call_0050e1d0;  // (from the original)

u32 f_0051659c(gptr<Object_0051659c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r0;
    if (u32(arg0->byte_2d0) != 0) {
        r0 = 1u;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0050e1d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r4 + 0x54u;  // (from the original)
    *gptr<u32>(ea) = u32(0x5168e0u);  // (from the original)
    ea = r4 + 0x58u;  // (from the original)
    *gptr<u32>(ea) = u32(0x516844u);  // (from the original)
    ea = r4 + 0x5cu;  // (from the original)
    *gptr<u32>(ea) = u32(0x516954u);  // (from the original)
    ea = r4 + 0x60u;  // (from the original)
    *gptr<u32>(ea) = u32(0x5167e8u);  // (from the original)
    ea = r4 + 0x64u;  // (from the original)
    *gptr<u32>(ea) = u32(0x516914u);  // (from the original)
    ea = r4 + 0x68u;  // (from the original)
    *gptr<u32>(ea) = u32(0x517a1cu);  // (from the original)
    ea = 0x87bdbcu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    ea = r4 + 0x2c8u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r1 = 0x953658u;  // (from the original)
    *gptr<u8>(r4 + 0x2d0u) = u8(1u);  // (from the original)
    *gptr<u32>(r1) = u32(0u);
    r0 = 1u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051659c
GUEST_EXPORT(0x0051659c, d_0051659c::f_0051659c);

// f_005166a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005166a8 {

struct __attribute__((packed)) Object_005166a8_0 {
    u8 unknown_0[0x2d0];  // (not used here)
    u8 byte_2d0;
    u8 unknown_2d1[0xb];  // (not used here)
    u32 word_2dc;
    u32 word_2e0;
    u8 unknown_2e4[0x4];  // (not used here)
    u32 word_2e8;
    u32 word_2ec;
    u32 word_2f0;
    u8 unknown_2f4[0x4];  // (not used here)
    u32 word_2f8;
    u32 word_2fc;
    u32 word_300;
    u8 unknown_304[0x4];  // (not used here)
    u32 word_308;
    u32 word_30c;
    u32 word_310;
    u8 unknown_314[0x4];  // (not used here)
    u32 word_318;
    u32 word_31c;
    u32 word_320;
};
GUEST_OFFSET(Object_005166a8_0, byte_2d0, 0x2d0);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2dc, 0x2dc);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2e0, 0x2e0);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2e8, 0x2e8);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2ec, 0x2ec);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2f0, 0x2f0);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2f8, 0x2f8);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2fc, 0x2fc);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_300, 0x300);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_308, 0x308);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_30c, 0x30c);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_310, 0x310);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_318, 0x318);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_31c, 0x31c);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_320, 0x320);  // (from the original)

struct __attribute__((packed)) Object_005166a8_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x4];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x4];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u8 unknown_44[0x4];  // (not used here)
    u32 word_48;
    u32 word_4c;
};
GUEST_OFFSET(Object_005166a8_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_4c, 0x4c);  // (from the original)

inline constexpr guest::Function<0x00131530, u32(u32, u32, u32, u32)> call_00131530;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00137878, u32(u32, u32, u32, u32)> call_00137878;  // (from the original)
inline constexpr guest::Function<0x00137a0c, u32(u32, u32, u32, u32)> call_00137a0c;  // (from the original)
inline constexpr guest::Function<0x00747094, u32(u32, u32, u32, u32)> call_00747094;  // (from the original)
inline constexpr guest::Function<0x007472b0, u32(u32, u32, u32, u32)> call_007472b0;  // (from the original)

u32 f_005166a8(gptr<Object_005166a8_0> arg0, gptr<Object_005166a8_1> arg1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r6 = r2;
    r5 = r1;
    if (u32(arg0->byte_2d0) != 0) {
        r3 = arg0->word_2ec;
        arg1->word_8 = u32(arg0->word_2e8);
        arg1->word_c = u32(r3);
        arg1->word_10 = u32(arg0->word_2f0);
        r3 = arg0->word_2fc;
        arg1->word_18 = u32(arg0->word_2f8);
        arg1->word_1c = u32(r3);
        arg1->word_20 = u32(arg0->word_300);
        r3 = arg0->word_30c;
        arg1->word_28 = u32(arg0->word_308);
        arg1->word_2c = u32(r3);
        arg1->word_30 = u32(arg0->word_310);
        r2 = arg0->word_318;
        r3 = arg0->word_31c;
        arg1->word_38 = u32(r2);
        arg1->word_3c = u32(r3);
        arg1->word_40 = u32(arg0->word_320);
        r1 = arg0->word_2e0;
        arg1->word_48 = u32(arg0->word_2dc);
        arg1->word_4c = u32(r1);
        r1 = r4 + 0xcu;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_007472b0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        ea = r13;
        r0 = *gptr<u32>(ea);
        r1 = *gptr<u32>(ea + 4);
        ea = r5 + 0x50u;  // (from the original)
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r1);
        *gptr<u8>(r5 + 0x60u) = u8(u32(*gptr<u8>(r4 + 0x328u)));  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00135748(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (u32(*gptr<u8>(r4 + 0x2bcu)) == 0) {  // (from the original)
            goto L_51679c;
        }
        if (*gptr<u32>(r4 + 0x2b8u) == 0) {  // (from the original)
            goto L_516784;
        }
        goto L_51679c;
    }
    r0 = r1;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00137878(r0, r1, r2, r3);
L_516784:;
    r1 = r4 + 0x2bcu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00131530(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x2bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00137a0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_51679c:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r5 + 0x58u) = u32(*gptr<u32>(r4 + 0x28u));  // (from the original)
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00747094(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r5) = u32(r0);
    *gptr<u32>(r5 + 4) = u32(r1);
    *gptr<u8>(r5 + 0x61u) = u8(0u);  // (from the original)
    if (u32(*gptr<u8>(r4 + 0x34u)) != 0) {  // (from the original)
        *gptr<u8>(r5 + 0x61u) = u8(1u);  // (from the original)
    }
    r0 = *gptr<u32>(0x953658u);  // (from the original)
    *gptr<u32>(r5 + 0x5cu) = u32(r0);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005166a8
GUEST_EXPORT(0x005166a8, d_005166a8::f_005166a8);

// f_005182f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005182f4 {

struct __attribute__((packed)) Object_005182f4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005182f4_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005164c0, u32(u32, u32, u32, u32)> call_005164c0;  // (from the original)
inline constexpr guest::Function<0x0051b0e4, u32(u32, u32, u32, u32)> call_0051b0e4;  // (from the original)

u32 f_005182f4(gptr<Object_005182f4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r5 = r1;
    r7 = 0u;
    r6 = r2;
    r4 = r0;
    arg0->word_0 = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0012f154(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005164c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0x2acu;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0051b0e4(r0, r1, r2, r3);
    r0 = r0 - 0x2bcu;  // (from the original)
    r8 = r0 + 0x2dcu;  // (from the original)
    ea = r0 + 0x2d4u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    r3 = 4u;
    r2 = *gptr<u32>(0x953678u + 4);  // (from the original)
    r0 = r0 + 0x2e8u;  // (from the original)
    *gptr<u32>(r8) = u32(*gptr<u32>(0x953678u));  // (from the original)
    *gptr<u32>(r8 + 4) = u32(r2);
    r2 = 0x10u;  // (from the original)
    r1 = 0x51b084u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = 0x953658u;  // (from the original)
    r0 = r0 - 0x2e8u;  // (from the original)
    r12 = ~2u;
    r9 = ~0u;
    ea = r0 + 0x328u;  // (from the original)
    *gptr<u8>(ea) = u8(r7);
    ea = r0 + 0x329u;  // (from the original)
    *gptr<u8>(ea) = u8(r7);
    ea = r2 + 4u;
    *gptr<u32>(ea) = u32(r0);
    ea = r0 + 0x2ecu;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r0 + 0x2e8u;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    ea = r0 + 0x2f0u;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    ea = r0 + 0x300u;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    ea = r0 + 0x2f8u;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    *gptr<u32>(ea + 4) = u32(r9);
    ea = r0 + 0x308u;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    *gptr<u32>(ea + 4) = u32(r9);
    *gptr<u32>(ea + 8) = u32(r7);
    ea = r0 + 0x320u;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    ea = r0 + 0x318u;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    *gptr<u32>(ea + 4) = u32(r9);
    ea = 0x87bdb4u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    ea = r0 + 0x2c8u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r3);
    *gptr<u8>(r0 + 0x2d0u) = u8(r7);  // (from the original)
    *gptr<u32>(r2) = u32(r7);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005182f4
GUEST_EXPORT(0x005182f4, d_005182f4::f_005182f4);

// f_005183e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005183e0 {

struct __attribute__((packed)) Object_005183e0_0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x12c];  // (not used here)
    u8 byte_155;
};
GUEST_OFFSET(Object_005183e0_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005183e0_0, byte_155, 0x155);  // (from the original)

inline constexpr guest::Function<0x0013133c, u32(u32, u32, u32, u32)> call_0013133c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0051659c, u32(u32, u32, u32, u32)> call_0051659c;  // (from the original)
inline constexpr guest::Function<0x005182f4, u32(u32, u32, u32, u32)> call_005182f4;  // (from the original)
inline constexpr guest::Function<0x00518574, u32(u32, u32, u32, u32)> call_00518574;  // (from the original)

u32 f_005183e0(gptr<Object_005183e0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    if (u32(arg0->byte_155) != 0) {
        r0 = 0u;
        goto L_518460;
    }
    if (u32(arg0->byte_28) != 0) {
        r0 = 1u;
        goto L_518460;
    }
    r6 = r1;
    r5 = r2;
    r2 = 4u;
    r1 = *gptr<u32>(0x952c9cu);  // (from the original)
    r0 = 0x330u;  // (from the original)
    r0 = call_002fd108(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r5;
    r1 = r6;
    r0 = call_005182f4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x1cu) = u32(r0);  // (from the original)
    r0 = call_0051659c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r5 = 0u;
        goto L_51845c;
    }
    r0 = r4;
    r0 = call_0013133c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 1u;
    r0 = r4;
    *gptr<u8>(r4 + 0x28u) = u8(r5);  // (from the original)
    r0 = call_00518574(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_51845c:;
    r0 = r5;
L_518460:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005183e0
GUEST_EXPORT(0x005183e0, d_005183e0::f_005183e0);

// f_00518468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518468 {

struct __attribute__((packed)) Object_00518468_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518468_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518468(gptr<Object_00518468_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = *gptr<u32>(r13 + 0x34u);  // (from the original)
    r12 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    zf = (arg0->word_150 & 4u) == 0;
    if (!zf) {
        zf = (r2 | r3) == 0;
    }
    if (zf) {
        r2 = 6u;
        r1 = 0x1eu;  // (from the original)
        r0 = r0 + 0x144u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0051b094(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 0u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0u;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4u) = u32(r1);
    *gptr<u32>(r13 + 8u) = u32(r1);
    *gptr<u32>(r13 + 0x14u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    *gptr<u32>(r13 + 0x20u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r1);  // (from the original)
    *gptr<u8>(r13 + 8u) = u8(r12);
    r2 = r13;
    r1 = 0x1eu;  // (from the original)
    *gptr<u8>(r13 + 9u) = u8(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00131470(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00518468
GUEST_EXPORT(0x00518468, d_00518468::f_00518468);

// f_005184f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005184f0 {

struct __attribute__((packed)) Object_005184f0_0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x127];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_005184f0_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005184f0_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_005184f0(gptr<Object_005184f0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x38u;  // (from the original)
    ea = r13 + 0x38u;  // (from the original)
    r5 = *gptr<u32>(ea);
    r12 = *gptr<u32>(ea + 4);
    r4 = u32(arg0->byte_28);
    if (r4 != 2u) {
        goto L_518558;
    }
    r4 = arg0->word_150;
    if ((r4 & 1u) == 0) {
        goto L_518558;
    }
    r4 = 0u;
    *gptr<u32>(r13 + 0xcu) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r4);  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    *gptr<u32>(r13 + 8) = u32(r3);
    r2 = r13;
    *gptr<u8>(r13 + 0xdu) = u8(r5);  // (from the original)
    r1 = 4u;
    *gptr<u8>(r13 + 0xcu) = u8(r12);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00131470(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_518558:;
    r2 = 6u;
    r1 = 4u;
    r0 = r0 + 0x144u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0051b094(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005184f0
GUEST_EXPORT(0x005184f0, d_005184f0::f_005184f0);

// f_0051868c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051868c {

struct __attribute__((packed)) Object_0051868c_0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x7];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x11f];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_0051868c_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0051868c_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0051868c_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_0051868c(gptr<Object_0051868c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_28);
    r12 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    if (r0 == 3u) {
        r0 = 1u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r0 != 2u) {
        goto L_5186cc;
    }
    if ((arg0->word_150 & 1u) == 0) {
        goto L_5186cc;
    }
    if (u32(arg0->byte_30) == 0) {
        goto L_5186e8;
    }
    goto L_5186fc;
L_5186cc:;
    r2 = 6u;
    r1 = 3u;
    r0 = r4 + 0x144u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0051b094(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5186e8:;
    if (r2 < 0x5cu) {  // (from the original)
        goto L_5186fc;
    }
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5186fc:;
    r0 = 0u;
    *gptr<u32>(r13 + 8u) = u32(r0);
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r0);  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    *gptr<u16>(r13 + 8u) = u16(r3);
    r2 = r13;
    r1 = 3u;
    r0 = r4;
    *gptr<u8>(r13 + 0xau) = u8(r12);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00131470(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = 3u;
        *gptr<u8>(r4 + 0x28u) = u8(r1);  // (from the original)
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051868c
GUEST_EXPORT(0x0051868c, d_0051868c::f_0051868c);

// f_00518750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518750 {

struct __attribute__((packed)) Object_00518750_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518750_0, word_150, 0x150);  // (from the original)

struct __attribute__((packed)) Object_00518750_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_00518750_2, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518750(gptr<Object_00518750_0> arg0, u32 r1, gptr<Object_00518750_2> arg2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    float S0 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x38u));  // (from the original)
    if ((arg0->word_150 & 4u) == 0) {
        goto L_518828;
    }
    r12 = 0u;
    *gptr<u32>(r13) = u32(r12);
    *gptr<u32>(r13 + 4u) = u32(r12);
    *gptr<u32>(r13 + 0x10u) = u32(r12);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r12);  // (from the original)
    r6 = r12;
    *gptr<u32>(r13 + 0x14u) = u32(r12);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r12);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r12);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r12);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r1);
    zf = r3 == 8u;
    cf = r3 >= 8u;
    *gptr<u32>(r13) = u32(r6);
    *gptr<u32>(r13 + 4) = u32(r12);
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    if (cf && !zf) {
        r3 = 8u;
    }
    if (!cf || zf) {
        zf = r3 == 0;
    }
    r4 = r13;
    *gptr<u8>(r13 + 0x10u) = u8(r5);  // (from the original)
    if (zf) {
        goto L_5187fc;
    }
    r1 = r2 - 2u;
    r2 = r4 + 0x10u;  // (from the original)
    if ((r3 & 1u) != 0) {
        ea = r1 + 2u;
        r1 = ea;
        r2 = r2 + 2u;
        *gptr<u16>(r13 + 0x12u) = u16(u32(arg2->half_0));  // (from the original)
    }
    res = r3 >> 1;
    r12 = res;
    if (res == 0) {
        goto L_5187f4;
    }
    do {
L_5187dc:;
        ea = r1 + 2u;
        r5 = u32(*gptr<u16>(ea));
        res = r12 - 1u;
        r12 = res;
        ea = r2 + 2u;
        *gptr<u16>(ea) = u16(r5);
        ea = r1 + 4u;
        r1 = ea;
        r5 = u32(*gptr<u16>(ea));
        ea = r2 + 4u;
        *gptr<u16>(ea) = u16(r5);
        r2 = ea;
        guest::preempt();
    } while (res != 0);
L_5187f4:;
    if (r3 >= 8u) {
        goto L_518814;
    }
L_5187fc:;
    r1 = 0xffffu;  // (from the original)
    do {
L_518800:;
        r2 = r4 + (r3 << 1);
        r3 = r3 + 1u;
        *gptr<u16>(r2 + 0x12u) = u16(r1);  // (from the original)
        guest::preempt();
    } while (r3 < 8u);
L_518814:;
    r2 = r4;
    r1 = 0x1bu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00131470(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_518828:;
    r2 = 6u;
    r1 = 0x1bu;  // (from the original)
    r0 = r0 + 0x144u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0051b094(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = 0u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00518750
GUEST_EXPORT(0x00518750, d_00518750::f_00518750);

// f_00518848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518848 {

struct __attribute__((packed)) Object_00518848_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518848_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518848(gptr<Object_00518848_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r12 = *gptr<u32>(r13 + 0x34u);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x30u));  // (from the original)
    zf = (arg0->word_150 & 4u) == 0;
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 0x38u));  // (from the original)
    if (!zf) {
        zf = (r2 | r3) == 0;
    }
    if (zf) {
        r2 = 6u;
        r1 = 0x1bu;  // (from the original)
        r0 = r0 + 0x144u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0051b094(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0 = 0u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = 0u;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4u) = u32(r1);
    *gptr<u32>(r13 + 0x14u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    *gptr<u32>(r13 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r1);  // (from the original)
    r1 = r13 + 8u;
    r3 = 3u;
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    r2 = r13 + 0x14u;  // (from the original)
    r1 = 0xffffu;  // (from the original)
    *gptr<u16>(r13 + 0x12u) = u16(r12);  // (from the original)
    *gptr<u16>(r13 + 0x14u) = u16(r1);  // (from the original)
    do {
L_5188cc:;
        ea = r2 + 2u;
        *gptr<u16>(ea) = u16(r1);
        res = r3 - 1u;
        r3 = res;
        ea = r2 + 4u;
        *gptr<u16>(ea) = u16(r1);
        r2 = ea;
        guest::preempt();
    } while (res != 0);
    r2 = r13;
    r1 = 0x1bu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00131470(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00518848
GUEST_EXPORT(0x00518848, d_00518848::f_00518848);

// f_005189e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005189e4 {

struct __attribute__((packed)) Object_005189e4_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_005189e4_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_005189e4(gptr<Object_005189e4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = arg0->word_150;
    r12 = *gptr<u32>(r13 + 0x34u);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x30u));  // (from the original)
    if ((r4 & 4u) != 0) {
        r4 = 0u;
        *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 0x18u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 0x1cu) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 0x20u) = u32(r4);  // (from the original)
        *gptr<u32>(r13 + 0x24u) = u32(r4);  // (from the original)
        *gptr<u32>(r13) = u32(r1);
        *gptr<u32>(r13 + 4) = u32(r2);
        *gptr<u32>(r13 + 8) = u32(r3);
        r2 = r13;
        *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        r1 = 0x19u;  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(r12);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_00131470(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r2 = 6u;
    r1 = 0x19u;  // (from the original)
    r0 = r0 + 0x144u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0051b094(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005189e4
GUEST_EXPORT(0x005189e4, d_005189e4::f_005189e4);

// f_00518c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518c3c {

struct __attribute__((packed)) Object_00518c3c_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518c3c_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518c3c(gptr<Object_00518c3c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x30u));  // (from the original)
    if ((arg0->word_150 & 4u) != 0) {
        r12 = 0u;
        *gptr<u32>(r13 + 0xcu) = u32(r12);  // (from the original)
        *gptr<u32>(r13 + 0x14u) = u32(r12);  // (from the original)
        *gptr<u32>(r13 + 0x18u) = u32(r12);  // (from the original)
        *gptr<u32>(r13 + 0x1cu) = u32(r12);  // (from the original)
        *gptr<u32>(r13 + 0x20u) = u32(r12);  // (from the original)
        *gptr<u32>(r13 + 0x24u) = u32(r12);  // (from the original)
        *gptr<u32>(r13) = u32(r1);
        *gptr<u32>(r13 + 4) = u32(r2);
        *gptr<u32>(r13 + 8) = u32(r3);
        r2 = r13;
        *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        r1 = 0x1fu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_00131470(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r2 = 6u;
    r1 = 0x1fu;  // (from the original)
    r0 = r0 + 0x144u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0051b094(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00518c3c
GUEST_EXPORT(0x00518c3c, d_00518c3c::f_00518c3c);

// f_00518ca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518ca8 {

struct __attribute__((packed)) Object_00518ca8_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518ca8_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518ca8(gptr<Object_00518ca8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r1 = r13 + 0x34u;  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r13 + 0x30u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    if ((arg0->word_150 & 4u) != 0) {
        r1 = 0u;
        *gptr<u32>(r13 + 4u) = u32(r1);
        *gptr<u32>(r13) = u32(r1);
        *gptr<u32>(r13 + 0x18u) = u32(r1);  // (from the original)
        *gptr<u32>(r13 + 0x1cu) = u32(r1);  // (from the original)
        *gptr<u32>(r13 + 0x20u) = u32(r1);  // (from the original)
        *gptr<u32>(r13 + 0x24u) = u32(r1);  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S3));
        r1 = r13 + 0xcu;  // (from the original)
        *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
        *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
        r1 = 0x1cu;  // (from the original)
        *gptr<u32>(r13) = u32(r2);
        *gptr<u32>(r13 + 4) = u32(r3);
        r2 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        r0 = call_00131470(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2 = 6u;
    r1 = 0x1cu;  // (from the original)
    r0 = r0 + 0x144u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0051b094(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00518ca8
GUEST_EXPORT(0x00518ca8, d_00518ca8::f_00518ca8);

// f_00518edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518edc {

struct __attribute__((packed)) Object_00518edc_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518edc_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518edc(gptr<Object_00518edc_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r12 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x34u));  // (from the original)
    if ((arg0->word_150 & 4u) != 0) {
        res = r2 | r3;
        if (res != 0) {
            goto L_518f38;
        }
        r2 = 6u;
        r1 = 0x1du;  // (from the original)
        r0 = r0 + 0x144u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0051b094(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0 = 1u;
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r2 = 6u;
    r1 = 0x1du;  // (from the original)
    r0 = r0 + 0x144u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0051b094(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
L_518f38:;
    r1 = 0u;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4u) = u32(r1);
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r1);  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    *gptr<u32>(r13 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r1);  // (from the original)
    *gptr<u16>(r13 + 0xcu) = u16(r12);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    r2 = r13;
    r1 = 0x1du;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00131470(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00518edc
GUEST_EXPORT(0x00518edc, d_00518edc::f_00518edc);

// f_005196cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005196cc {

struct __attribute__((packed)) Object_005196cc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005196cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x00137878, u32(u32, u32, u32, u32)> call_00137878;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0051b0e4, u32(u32, u32, u32, u32)> call_0051b0e4;  // (from the original)

u32 f_005196cc(gptr<Object_005196cc_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = 0u;
    ea = 0x87bdf4u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    arg0->word_8 = u32(*gptr<u32>(ea));
    arg0->word_c = u32(r1);
    arg0->word_0 = u32(0x905ea4u);  // (from the original)
    arg0->word_4 = u32(r4);
    r0 = r4 + 0x10u;  // (from the original)
    arg0->word_10 = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0012f154(r0, r1, r2, r3);
    *gptr<u32>(r4 + 0x1cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x28u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x30u) = u8(r5);  // (from the original)
    *gptr<u32>(r4 + 0x38u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x3cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x40u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x44u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x48u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x4cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x50u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x54u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x58u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x5cu) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x60u) = u8(r5);  // (from the original)
    r1 = 0x51b084u;  // (from the original)
    r3 = 4u;
    r2 = 0x10u;  // (from the original)
    r0 = r4 + 0x70u;  // (from the original)
    *gptr<u8>(r4 + 0x61u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r0 - 8u;
    r0 = ~2u;
    r1 = ~0u;
    ea = r4 + 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r2 = r4 + 0x50u;  // (from the original)
    *gptr<u32>(r2) = u32(r0);
    *gptr<u32>(r2 + 4) = u32(r1);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00137878(r0, r1, r2, r3);
    r1 = 0x51b084u;  // (from the original)
    r3 = 4u;
    r2 = 0x10u;  // (from the original)
    r0 = r4 + 0x70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r0 - 8u;
    r0 = ~2u;
    r1 = ~0u;
    ea = r4 + 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r2 = r4 + 0x50u;  // (from the original)
    *gptr<u32>(r2) = u32(r0);
    *gptr<u32>(r2 + 4) = u32(r1);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00137878(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0051b0e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0051b0e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x144u;  // (from the original)
    *gptr<u32>(r0 + 0x150u) = u32(r5);  // (from the original)
    *gptr<u8>(r0 + 0x154u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x155u) = u8(r5);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005196cc
GUEST_EXPORT(0x005196cc, d_005196cc::f_005196cc);

// f_005197dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005197dc {

inline constexpr guest::Function<0x0013138c, u32(u32, u32, u32, u32)> call_0013138c;  // (from the original)

u32 f_005197dc(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0013138c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_005197dc
GUEST_EXPORT(0x005197dc, d_005197dc::f_005197dc);

// f_005197f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005197f0 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aa80, u32(u32, u32, u32, u32)> call_0046aa80;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)

u32 f_005197f0(u32 r0, u32 r1) {
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0046a174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 & 0x80000000u;  // (from the original)
    nf = r0 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        r0 = 0u;
    }
    if (nf != vf) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0046aa80(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r1 = r0 & 0x80000000u;  // (from the original)
    return call_0046eaf0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005197f0
GUEST_EXPORT(0x005197f0, d_005197f0::f_005197f0);

// f_0051981c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051981c {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x00519cc0, u32(u32, u32, u32, u32)> call_00519cc0;  // (from the original)

u32 f_0051981c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a174(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    r0 = res;
    if (res >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = r5;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00519cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0046eaf0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051981c
GUEST_EXPORT(0x0051981c, d_0051981c::f_0051981c);

// f_0051984c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051984c {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x00519fc0, u32(u32, u32, u32, u32)> call_00519fc0;  // (from the original)

u32 f_0051984c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a174(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    r0 = res;
    if (res >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00519fc0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0046eaf0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051984c
GUEST_EXPORT(0x0051984c, d_0051984c::f_0051984c);

// f_00519874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519874 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aa14, u32(u32, u32, u32, u32)> call_0046aa14;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)

u32 f_00519874(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a174(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    r5 = 0u;
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0046aa14(r0, r1, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        r1 = r0 & 0x80000000u;  // (from the original)
        nf = r1 >> 0x1f;  // (from the original)
        vf = 0u;
        if (nf == vf) {
            r4 = u32(s32(s8(*gptr<u8>(r13))));
        }
        if (nf != vf) {
            r4 = r5;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_0046eaf0(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4 ^ 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00519874
GUEST_EXPORT(0x00519874, d_00519874::f_00519874);

// f_005198b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005198b0 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32, u32)> call_0046aad8;  // (from the original)
inline constexpr guest::Function<0x0046b320, u32(u32, u32, u32, u32)> call_0046b320;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)

u32 f_005198b0(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = 0u;
    r0 = call_0046a174(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_51990c;
    }
    r0 = 0u;
    r0 = call_0046aad8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        r1 = 0xc8a0f842u;  // (from the original)
        if (r0 != r1) {
            goto L_519904;
        }
        r2 = 0u;
        r1 = r6;
        r0 = r5;
        r0 = call_0046b320(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        res = r0 & 0x80000000u;  // (from the original)
        r1 = res;
        if (res >> 0x1f) {  // (from the original)
            goto L_519904;
        }
    }
    r4 = 1u;
L_519904:;
    r0 = call_0046eaf0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_51990c:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005198b0
GUEST_EXPORT(0x005198b0, d_005198b0::f_005198b0);

// f_00519960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519960 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32, u32)> call_0046aad8;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)

u32 f_00519960(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r0 = call_0046a174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    nf = (r0 & 0x80000000u) >> 0x1f;  // (from the original)
    vf = 0u;
    r5 = 0u;
    if (nf == vf) {
        r4 = 1u;
        r0 = 0u;
        r0 = call_0046aad8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0 & 0x80000000u;  // (from the original)
        if (r1 >> 0x1f != 0u) {  // (from the original)
            r4 = r5;
        }
        r0 = call_0046eaf0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00519960
GUEST_EXPORT(0x00519960, d_00519960::f_00519960);

// f_005199a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005199a0 {

inline constexpr guest::Function<0x0046a134, u32(u32, u32, u32, u32)> call_0046a134;  // (from the original)
inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046bb74, u32(u32, u32, u32, u32)> call_0046bb74;  // (from the original)
inline constexpr guest::Function<0x0046beec, u32(u32, u32, u32, u32)> call_0046beec;  // (from the original)
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> call_0046c1ec;  // (from the original)
inline constexpr guest::Function<0x0046c214, u32(u32, u32, u32, u32)> call_0046c214;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)

u32 f_005199a0(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0 & 0x80000000u;  // (from the original)
    r6 = 0u;
    if (res >> 0x1f) {  // (from the original)
        goto L_519a5c;
    }
    r4 = 1u;
    r0 = r13;
    if (r5 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0046c1ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r5;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0046bb74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        res = r0 & 0x80000000u;  // (from the original)
        r0 = r13;
        if (res >> 0x1f) {  // (from the original)
            goto L_519a50;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_0046beec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        zf = r0 == 0;
        r0 = r13;
        if (!zf) {
            r4 = r6;
            goto L_519a54;
        }
        goto L_519a54;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0046a134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0046beec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    r0 = r13;
    if (zf) {
        goto L_519a68;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0046c214(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_519a50:;
    r4 = r6;
L_519a54:;
    guest::cpu()->r[13] = r13;
    r0 = call_0046eaf0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_519a5c:;
    r0 = r4;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_519a68:;
    guest::cpu()->r[13] = r13;
    r0 = call_0046c214(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_519a54;
}

}  // namespace d_005199a0
GUEST_EXPORT(0x005199a0, d_005199a0::f_005199a0);

// f_00519a7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519a7c {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046a2c0, u32(u32, u32, u32, u32)> call_0046a2c0;  // (from the original)
inline constexpr guest::Function<0x0046a424, u32(u32, u32, u32, u32)> call_0046a424;  // (from the original)
inline constexpr guest::Function<0x0046a45c, u32(u32, u32, u32, u32)> call_0046a45c;  // (from the original)
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32, u32)> call_0046aad8;  // (from the original)
inline constexpr guest::Function<0x0046b3b0, u32(u32, u32, u32, u32)> call_0046b3b0;  // (from the original)
inline constexpr guest::Function<0x0046b4c4, u32(u32, u32, u32, u32)> call_0046b4c4;  // (from the original)
inline constexpr guest::Function<0x0046bb74, u32(u32, u32, u32, u32)> call_0046bb74;  // (from the original)
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> call_0046c1ec;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x00519e3c, u32(u32, u32, u32, u32)> call_00519e3c;  // (from the original)
inline constexpr guest::Function<0x00519ed0, u32(u32, u32, u32, u32)> call_00519ed0;  // (from the original)

u32 f_00519a7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x830u;  // (from the original)
    r4 = r0;
    r5 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a174(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_519bd0;
    }
    r0 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046aad8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        goto L_519bc8;
    }
    r8 = r13 + 0x800u;  // (from the original)
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00519e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_519bc4;
    }
    r6 = r13 + 0x7d8u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0046c1ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4);
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0046bb74(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        r0 = r6;
        goto L_519bc8;
    }
    r7 = r13 + 0x7ecu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a45c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    ea = r4 + 8u;
    r2 = *gptr<u32>(ea + 4);
    r1 = *gptr<u32>(ea) * 0xe10u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a424(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_519b48;
    }
L_519b28:;
    r0 = r6;
    goto L_519bc8;
L_519b48:;
    r9 = r13;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0046b4c4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4 + 4u);
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0046b3b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_0046a2c0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
        goto L_519b28;
    }
    r3 = r9;
    r2 = r7;
    r1 = r6;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00519ed0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a2c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    if (r4 == 0) {
        goto L_519bc8;
    }
L_519bc4:;
    r5 = 1u;
L_519bc8:;
    guest::cpu()->r[13] = r13;
    r0 = call_0046eaf0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_519bd0:;
    r0 = r5;
    r13 = r13 + 0x830u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00519a7c
GUEST_EXPORT(0x00519a7c, d_00519a7c::f_00519a7c);

// f_00519bdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519bdc {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aa80, u32(u32, u32, u32, u32)> call_0046aa80;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)

u32 f_00519bdc(u32 r0, u32 r1) {
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0046a174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 & 0x80000000u;  // (from the original)
    nf = r0 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        r0 = 1u;
    }
    if (nf != vf) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0046aa80(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r1 = r0 & 0x80000000u;  // (from the original)
    return call_0046eaf0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00519bdc
GUEST_EXPORT(0x00519bdc, d_00519bdc::f_00519bdc);

// f_00519c08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519c08 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32, u32)> call_0046aad8;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x0051a044, u32(u32, u32, u32, u32)> call_0051a044;  // (from the original)

u32 f_00519c08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a174(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_0046aad8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        res = r0 & 0x80000000u;  // (from the original)
        r1 = res;
        if (!(res >> 0x1f)) {  // (from the original)
            r2 = r6;
            r1 = r5;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_0051a044(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = r0;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_0046eaf0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00519c08
GUEST_EXPORT(0x00519c08, d_00519c08::f_00519c08);

// f_00519c58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519c58 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32, u32)> call_0046aad8;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x00519e3c, u32(u32, u32, u32, u32)> call_00519e3c;  // (from the original)
inline constexpr guest::Function<0x0051a2c4, u32(u32, u32, u32, u32)> call_0051a2c4;  // (from the original)

u32 f_00519c58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r4 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a174(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_519cb8;
    }
    r0 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046aad8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        goto L_519cb0;
    }
    r1 = *gptr<u32>(r5);
    r2 = *gptr<u32>(r5 + 8u);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00519e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r1 = r5;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0051a2c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_519cb0;
        }
    }
    r4 = 1u;
L_519cb0:;
    guest::cpu()->r[13] = r13;
    r0 = call_0046eaf0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_519cb8:;
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00519c58
GUEST_EXPORT(0x00519c58, d_00519c58::f_00519c58);

// f_00519cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519cc0 {

struct __attribute__((packed)) Object_00519cc0_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u16 half_8;
};
GUEST_OFFSET(Object_00519cc0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00519cc0_1, half_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)
inline constexpr guest::Function<0x0046a7bc, u32(u32, u32, u32, u32)> call_0046a7bc;  // (from the original)
inline constexpr guest::Function<0x0046a7cc, u32(u32, u32, u32, u32)> call_0046a7cc;  // (from the original)
inline constexpr guest::Function<0x0046a7f8, u32(u32, u32, u32, u32)> call_0046a7f8;  // (from the original)
inline constexpr guest::Function<0x0046b218, u32(u32, u32, u32, u32)> call_0046b218;  // (from the original)
inline constexpr guest::Function<0x0046c21c, u32(u32, u32, u32, u32)> call_0046c21c;  // (from the original)
inline constexpr guest::Function<0x0046c23c, u32(u32, u32, u32, u32)> call_0046c23c;  // (from the original)
inline constexpr guest::Function<0x0046c380, u32(u32, u32, u32, u32)> call_0046c380;  // (from the original)
inline constexpr guest::Function<0x0046c44c, u32(u32, u32, u32, u32)> call_0046c44c;  // (from the original)
inline constexpr guest::Function<0x0046c570, u32(u32, u32, u32, u32)> call_0046c570;  // (from the original)
inline constexpr guest::Function<0x0046c8a0, u32(u32, u32, u32, u32)> call_0046c8a0;  // (from the original)

u32 f_00519cc0(u32 r0, gptr<Object_00519cc0_1> arg1, u32 r2, u32 r3) {
    u32 b = 0;
    u32 res = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r1;
    r13 = r13 - 0x98u;  // (from the original)
    r1 = arg1->word_0;
    r7 = r2;
    if (r1 == 0) {
        goto L_519e08;
    }
    r2 = 4u;
    r0 = u32(arg1->half_8) << 2;
    guest::cpu()->r[13] = r13;
    r0 = call_00131280(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r1 = r0;
    r2 = u32(*gptr<u16>(r4 + 8u));
    r0 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0046a7f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0046a7bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4 + 4u);
    r1 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0046b218(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    b = r0 >> 0x1f;  // (from the original)
    zf = b == 0;
    r1 = b;
    if (!zf) {
        r1 = 0xd840f845u;  // (from the original)
    }
    r4 = 0u;
    if (!zf) {
        zf = r0 == r1;
    }
    if (!zf) {
        goto L_519df4;
    }
    r1 = 0u;
    r6 = u32(*gptr<u16>(r13 + 0x6cu));  // (from the original)
    r2 = r1;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_0046c8a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x28u) = u32(r4);  // (from the original)
    *gptr<u16>(r0 + 0x2cu) = u16(r4);  // (from the original)
    r4 = 0u;
    if (!u32(r6 >= 0u) || u32(r6 == 0)) {
        goto L_519dec;
    }
L_519d5c:;
    r5 = r13;
    r1 = r4;
    r0 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0046a7cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r5 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046c21c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_519dd4;
    }
    r3 = 0x20u;  // (from the original)
    r2 = r13 + 0x48u;  // (from the original)
    r1 = 6u;
    r0 = r5 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046c380(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_519dd4;
    }
    r1 = r5;
    *gptr<u16>(r13 + 0x34u) = u16(*gptr<u32>(r13 + 0x54u));  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(*gptr<u32>(r13 + 0x58u));  // (from the original)
    r0 = r5 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046c44c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_519dd4;
    }
    if (r7 == 0) {
        goto L_519e10;
    }
L_519dd4:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046c570(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_519ddc:;
    r4 = uxth(r4 + 1u);
    if (r4 < r6) {
        guest::preempt();
        goto L_519d5c;
    }
L_519dec:;
L_519df4:;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002f88b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x68u;  // (from the original)
L_519e08:;
    r13 = r13 + 0x98u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_519e10:;
    r1 = r13 + 0x44u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046c23c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_519ddc;
    }
    if (u32(*gptr<u8>(r13 + 0x44u)) == 0) {  // (from the original)
        guest::preempt();
        goto L_519ddc;
    }
    guest::preempt();
    goto L_519dd4;
}

}  // namespace d_00519cc0
GUEST_EXPORT(0x00519cc0, d_00519cc0::f_00519cc0);

// f_00519e3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519e3c {

inline constexpr guest::Function<0x0046bb74, u32(u32, u32, u32, u32)> call_0046bb74;  // (from the original)
inline constexpr guest::Function<0x0046bcc4, u32(u32, u32, u32, u32)> call_0046bcc4;  // (from the original)
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> call_0046c1ec;  // (from the original)

u32 f_00519e3c(u32 r0_unused, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r1;
    r4 = r2;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0046c1ec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0046bb74(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_519eb0;
    }
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0046bcc4(r0, r1, r2, guest::cpu()->r[3]);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = 1u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0xd8e0f81au;  // (from the original)
    zf = r0 == r1;
    if (!zf) {
        r1 = 0xc8a0f832u;  // (from the original)
        zf = r0 == r1;
    }
    if (zf) {
        goto L_519eb0;
    }
    r1 = 0xc8a0f833u;  // (from the original)
    if (r0 != r1) {
        r1 = r1 - 8u;
    }
L_519eb0:;
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00519e3c
GUEST_EXPORT(0x00519e3c, d_00519e3c::f_00519e3c);

// f_00519ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519ed0 {

inline constexpr guest::Function<0x0046a82c, u32(u32, u32, u32, u32)> call_0046a82c;  // (from the original)
inline constexpr guest::Function<0x0046bf88, u32(u32, u32, u32, u32)> call_0046bf88;  // (from the original)

u32 f_00519ed0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r1;
    r1 = r2;
    r0 = 0u;
    r2 = r3;
    r3 = r0;
    *gptr<u32>(r13) = u32(r0);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a82c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0xc8a0f82bu;  // (from the original)
    r5 = 0xd8e0f81au;  // (from the original)
    res = r0 & 0x80000000u;  // (from the original)
    r2 = res;
    if (res >> 0x1f) {  // (from the original)
        zf = r0 == r1 + 0xbu;  // (from the original)
        if (!zf) {
            zf = r0 == r1 + 0x17u;  // (from the original)
        }
        if (zf) {
            goto L_519f9c;
        }
        zf = r0 == r1;
        if (!zf) {
            zf = r0 == r5;
        }
        if (zf) {
            goto L_519f9c;
        }
        r1 = 0xd8e0f801u;  // (from the original)
        zf = r0 == r1;
        if (!zf) {
            r1 = r1 + 1u;
            zf = r0 == r1;
        }
        if (zf) {
            goto L_519f9c;
        }
        r1 = 0xd8e0f81fu;  // (from the original)
        zf = r0 == r1;
        if (!zf) {
            r1 = r1 + 9u;
            zf = r0 == r1;
        }
        if (zf) {
            goto L_519f9c;
        }
        r1 = 0xd8e0f826u;  // (from the original)
        zf = r0 == r1;
        if (!zf) {
            r1 = r1 - 6u;
            zf = r0 == r1;
        }
        if (zf) {
            goto L_519f9c;
        }
        r1 = 0xd8e0f821u;  // (from the original)
        zf = r0 == r1;
        if (!zf) {
            r1 = r1 - 4u;
            zf = r0 == r1;
        }
        if (zf) {
            goto L_519f9c;
        }
        r1 = 0xd8e0f827u;  // (from the original)
        if (r0 != r1) {
            r1 = r1 + 0x9au;  // (from the original)
        }
        goto L_519f9c;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0046bf88(r0, r1, r2, r3);
    r1 = r0 & 0x80000000u;  // (from the original)
    res = r1;
    if (res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 1u;
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_519f9c:;
    r0 = 0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00519ed0
GUEST_EXPORT(0x00519ed0, d_00519ed0::f_00519ed0);

// f_00519fc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519fc0 {

inline constexpr guest::Function<0x0046b174, u32(u32, u32, u32, u32)> call_0046b174;  // (from the original)
inline constexpr guest::Function<0x0046bb74, u32(u32, u32, u32, u32)> call_0046bb74;  // (from the original)
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> call_0046c1ec;  // (from the original)

u32 f_00519fc0(u32 r0_unused, u32 r1) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0046c1ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0046bb74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0046b174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = 1u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0xd8e0f81au;  // (from the original)
    zf = r0 == r1;
    if (!zf) {
        r1 = 0xc8a0f832u;  // (from the original)
        zf = r0 == r1;
    }
    if (!zf) {
        r1 = 0xc8a0f833u;  // (from the original)
    }
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00519fc0
GUEST_EXPORT(0x00519fc0, d_00519fc0::f_00519fc0);

// f_0051a2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051a2c4 {

inline constexpr guest::Function<0x0046a2c8, u32(u32, u32, u32, u32)> call_0046a2c8;  // (from the original)
inline constexpr guest::Function<0x0046a424, u32(u32, u32, u32, u32)> call_0046a424;  // (from the original)
inline constexpr guest::Function<0x0046a45c, u32(u32, u32, u32, u32)> call_0046a45c;  // (from the original)
inline constexpr guest::Function<0x0046b8ac, u32(u32, u32, u32, u32)> call_0046b8ac;  // (from the original)
inline constexpr guest::Function<0x0046baec, u32(u32, u32, u32, u32)> call_0046baec;  // (from the original)
inline constexpr guest::Function<0x0046bb48, u32(u32, u32, u32, u32)> call_0046bb48;  // (from the original)
inline constexpr guest::Function<0x0046bb70, u32(u32, u32, u32, u32)> call_0046bb70;  // (from the original)
inline constexpr guest::Function<0x0046bb74, u32(u32, u32, u32, u32)> call_0046bb74;  // (from the original)
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> call_0046c1ec;  // (from the original)
inline constexpr guest::Function<0x00519ed0, u32(u32, u32, u32, u32)> call_00519ed0;  // (from the original)

u32 f_0051a2c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x828u;  // (from the original)
    r6 = r0;
    r5 = r13 + 0x7ecu;  // (from the original)
    r4 = r1;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0046c1ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0046bb74(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_51a30c;
    }
L_51a2f8:;
    r0 = 0u;
    r13 = r13 + 0x828u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_51a30c:;
    r8 = r13 + 0x7d8u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a45c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    ea = r4 + 4u;
    r2 = *gptr<u32>(ea + 4);
    r1 = *gptr<u32>(ea) * 0xe10u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a424(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_51a36c;
    }
    *gptr<u8>(r13 + 0x804u) = u8(0u);  // (from the original)
    r3 = 1u;
    r2 = r13 + 0x804u;  // (from the original)
    r1 = 5u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a2c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_51a380;
    }
L_51a36c:;
    guest::preempt();
    goto L_51a2f8;
L_51a380:;
    r7 = r13;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0046bb48(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r4 + 0xcu;  // (from the original)
    r0 = r7;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0046b8ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0046baec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        res = r0 & 0x80000000u;  // (from the original)
        if (!(res >> 0x1f)) {  // (from the original)
            goto L_51a3d0;
        }
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0046bb70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_51a36c;
L_51a3d0:;
    r3 = r7;
    r2 = r8;
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00519ed0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0046bb70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x828u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051a2c4
GUEST_EXPORT(0x0051a2c4, d_0051a2c4::f_0051a2c4);

// f_0051a740: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051a740 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x0051a414, u32(u32, u32, u32, u32)> call_0051a414;  // (from the original)

u32 f_0051a740(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0046a174(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        r2 = r6;
        r1 = r5;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0051a414(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_0046eaf0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051a740
GUEST_EXPORT(0x0051a740, d_0051a740::f_0051a740);

// f_0051a874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051a874 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x0035153c, u32(u32, u32, u32, u32)> call_0035153c;  // (from the original)
inline constexpr guest::Function<0x0047ec00, u32(u32, u32, u32, u32)> call_0047ec00;  // (from the original)

u32 f_0051a874(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x14;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r14);  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r3;
    r6 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r3 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r7 = r2;
    if (r6 == 0) {
        r0 = 0u;
        goto L_51a8f8;
    }
    r5 = 0u;
    r2 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0047ec00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_51a8f4;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(r0);
    r3 = r13 + 4u;
    r2 = r6;
    r1 = r13;
    r0 = r7;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0035153c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        goto L_51a8f4;
    }
    r0 = *gptr<u32>(r13);
    if (u32(r0 >= r4) && !u32(r0 == r4)) {
        *gptr<u32>(r13) = u32(r4);
    }
    r5 = *gptr<u32>(r13);
    r1 = r7 + (r5 << 1);
    *gptr<u16>(r1) = u16(0u);
L_51a8f4:;
    r0 = r5;
L_51a8f8:;
    r13 = r13 + 0xcu;  // (from the original)
    ea = r13;
    r13 = r13 + 0x14;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051a874
GUEST_EXPORT(0x0051a874, d_0051a874::f_0051a874);

// f_0051a9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051a9f0 {

inline constexpr guest::Function<0x00351528, u32(u32, u32, u32, u32)> call_00351528;  // (from the original)
inline constexpr guest::Function<0x0047edb8, u32(u32, u32, u32, u32)> call_0047edb8;  // (from the original)

u32 f_0051a9f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r7 = r2;
    r5 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r4 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    r8 = r3;
    if (r5 == 0) {
        r0 = 0u;
        goto L_51aa7c;
    }
    r2 = r0;
    *gptr<u32>(r13 + 4u) = u32(r1);
    r6 = 0u;
    r3 = r13 + 4u;
    r1 = r13;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00351528(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        r3 = r13 + 8u;
        r2 = r8;
        if (*gptr<u32>(r13) >= r4) {
            *gptr<u32>(r13) = u32(r4 - 1u);
        }
        *gptr<u8>(r5 + *gptr<u32>(r13)) = u8(0u);
        r1 = r7;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0047edb8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if ((r0 & 0x80000000u) >> 0x1f == 0u) {  // (from the original)
            r6 = *gptr<u32>(r13 + 8u);
        }
    }
    r0 = r6;
L_51aa7c:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051a9f0
GUEST_EXPORT(0x0051a9f0, d_0051a9f0::f_0051a9f0);

// f_0051aa84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051aa84 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)

u32 f_0051aa84(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r7 = r0 + 0xa8u;  // (from the original)
    r4 = r1;
    r0 = r7;
    r0 = call_00135748(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r4 + 0xcu;  // (from the original)
    r0 = r6;
    r0 = call_00135748(r0, r1, r2, r3);
    r0 = 0u;
    r3 = r4 + 0x18u;  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(r0);  // (from the original)
    r1 = ~2u;
    r2 = ~0u;
    *gptr<u32>(r4 + 0x24u) = u32(r0);  // (from the original)
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r2);
    *gptr<u8>(r4 + 0x28u) = u8(r0);  // (from the original)
    r0 = r6;
    r0 = call_001357ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r5 + 0x90u;  // (from the original)
    r0 = call_0013f134(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r7;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_001357ec(r0, r1, r2, r3);
}

}  // namespace d_0051aa84
GUEST_EXPORT(0x0051aa84, d_0051aa84::f_0051aa84);

// f_0051ad60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051ad60 {

struct __attribute__((packed)) Object_0051ad60_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0051ad60_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0051ad60_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)

u32 f_0051ad60(u32 r0, gptr<Object_0051ad60_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r4 = r0;
    r8 = r1;
    r6 = r2;
    r7 = r3;
    r3 = ~2u;
    r2 = ~0u;
    r1 = arg1->word_0 ^ r3;
    zf = (arg1->word_4 ^ r2 | r1) == 0;
    if (!zf) {
        zf = r6 == 0;
    }
    if (!zf) {
        zf = r7 == 0;
    }
    if (zf) {
        goto L_51adfc;
    }
    r9 = r4 + 0xa8u;  // (from the original)
    r0 = r9;
    r0 = call_00135748(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = *gptr<u32>(r4 + 0x94u);  // (from the original)
    r0 = r9;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r5 == 0) {
        goto L_51adfc;
    }
    r1 = *gptr<u32>(r8 + 4);
    r2 = r5 + 0x18u;  // (from the original)
    *gptr<u32>(r2) = u32(*gptr<u32>(r8));
    *gptr<u32>(r2 + 4) = u32(r1);
    *gptr<u32>(r2 + 8) = u32(r6);
    *gptr<u32>(r2 + 0xc) = u32(r7);  // (from the original)
    r6 = r4 + 0xa8u;  // (from the original)
    r0 = r6;
    r0 = call_00135748(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4 + 0x90u;  // (from the original)
    r0 = call_0013f000(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4 + 0x9cu;  // (from the original)
    r0 = call_0013f134(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_51adfc:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051ad60
GUEST_EXPORT(0x0051ad60, d_0051ad60::f_0051ad60);

// f_0051ae04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051ae04 {

inline constexpr guest::Function<0x00125e08, u32(u32, u32, u32, u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0051ae04(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r3 = 3u;
    r1 = 0x51ab9cu;  // (from the original)
    r2 = 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e08(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 - 0x9cu;  // (from the original)
    r1 = 0u;
    ea = r0 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_0012f154(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_51ae3c:;
        r1 = r5 + (r4 + (r4 << 1) << 4);
        r0 = r5 + 0x90u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0013f134(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(3u));
    r0 = r5;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051ae04
GUEST_EXPORT(0x0051ae04, d_0051ae04::f_0051ae04);

// f_0051b048: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051b048 {

inline constexpr guest::Function<0x0047f3a0, u32(u32, u32, u32, u32)> call_0047f3a0;  // (from the original)

u32 f_0051b048() {
    return call_0047f3a0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0051b048
GUEST_EXPORT(0x0051b048, d_0051b048::f_0051b048);

// f_0051b04c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051b04c {


u32 f_0051b04c() {
    u32 r0 = 0;
    r0 = u32(s32(s8(*gptr<u8>(0x953644u)))) ^ 1u;  // (from the original)
    return r0;
}

}  // namespace d_0051b04c
GUEST_EXPORT(0x0051b04c, d_0051b04c::f_0051b04c);

// f_0051b060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051b060 {

inline constexpr guest::Function<0x0047f3a0, u32(u32, u32, u32, u32)> call_0047f3a0;  // (from the original)

u32 f_0051b060(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0047f3a0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x953644u;  // (from the original)
    r0 = 1u;
    *gptr<u8>(r1) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051b060
GUEST_EXPORT(0x0051b060, d_0051b060::f_0051b060);

// f_0051b728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051b728 {


u32 f_0051b728() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 4u;
    r4 = 0x87c084u;  // (from the original)
    r12 = 0xa827e8u;  // (from the original)
    r1 = *gptr<u32>(r4);
    r3 = *gptr<u32>(r12 + 0xcu);  // (from the original)
    r0 = *gptr<u32>(r4 + 4u);
    r2 = *gptr<u32>(r12 + 0x10u);  // (from the original)
    if (r3 == r1) {
        if (r3 == 0) {
            r1 = r2 | r0;
            if ((r1 & 1u) == 0) {
                r13 = r13 + 4u;
                r0 = 1u;
                guest::cpu()->r[1] = r1;
                guest::cpu()->r[13] = r13;
                return r0;
            }
        }
        if (r2 == r0) {
            r13 = r13 + 4u;
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    ea = r4 + 8u;
    r1 = *gptr<u32>(ea);
    r0 = *gptr<u32>(ea + 4u);
    if (r3 == r1) {
        if (r3 == 0) {
            r1 = r2 | r0;
            if ((r1 & 1u) == 0) {
                r13 = r13 + 4u;
                r0 = 1u;
                guest::cpu()->r[1] = r1;
                guest::cpu()->r[13] = r13;
                return r0;
            }
        }
        if (r2 == r0) {
            r13 = r13 + 4u;
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
    }
    *gptr<u8>(r12 + 0x3a0u) = u8(1u);  // (from the original)
    r13 = r13 + 4u;
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051b728
GUEST_EXPORT(0x0051b728, d_0051b728::f_0051b728);

// f_0051b87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051b87c {

struct __attribute__((packed)) Object_0051b87c_0 {
    u8 unknown_0[0xb0];  // (not used here)
    u8 byte_b0;
};
GUEST_OFFSET(Object_0051b87c_0, byte_b0, 0xb0);  // (from the original)

inline constexpr guest::Function<0x003da354, u32(u32, u32, u32, u32)> call_003da354;  // (from the original)
inline constexpr guest::Function<0x005cecfc, u32(u32, u32, u32, u32)> call_005cecfc;  // (from the original)

u32 f_0051b87c(gptr<Object_0051b87c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_b0);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 + 0xb4u;  // (from the original)
    r0 = call_003da354(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4 + 0x218u);  // (from the original)
    r0 = 0u;
    *gptr<u32>(r4 + 0x378u) = u32(r1);  // (from the original)
    *gptr<u8>(r4 + 0xb0u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_005cecfc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0051b87c
GUEST_EXPORT(0x0051b87c, d_0051b87c::f_0051b87c);

// f_0051bbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051bbbc {

inline constexpr guest::Function<0x0011d258, u32(u32, u32, u32, u32)> call_0011d258;  // (from the original)
inline constexpr guest::Function<0x003da4ac, u32(u32, u32, u32, u32)> call_003da4ac;  // (from the original)
inline constexpr guest::Function<0x003da4cc, u32(u32, u32, u32, u32)> call_003da4cc;  // (from the original)

u32 f_0051bbbc(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_003da4ac(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_51bc40;
    }
    r5 = 0xa827e8u;  // (from the original)
    if (r4 == 3u) {
        guest::cpu()->r[13] = r13;
        r0 = call_0011d258(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 0) {
            goto L_51bc40;
        }
        r0 = r5 + 0xb4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003da4cc(r0, r1, r2, guest::cpu()->r[3]);
    }
    r0 = 0x87c084u;  // (from the original)
    r2 = *gptr<u32>(r5 + 0xcu);  // (from the original)
    r1 = *gptr<u32>(r0);
    r0 = *gptr<u32>(r0 + 4u);
    if (r2 != r1) {
        goto L_51bc40;
    }
    if (r2 == 0) {
        if (((*gptr<u32>(r5 + 0x10u) | r0) & 1u) == 0) {  // (from the original)
            goto L_51bc2c;
        }
    }
    r1 = *gptr<u32>(r5 + 0x10u);  // (from the original)
    if (r1 != r0) {
        goto L_51bc40;
    }
L_51bc2c:;
    r1 = 1u;
    ea = r5 + 0xb0u;  // (from the original)
    *gptr<u8>(ea) = u8(r1);
    ea = r5 + 0xb4u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ~0u;
    *gptr<u32>(ea + 0x2c4u) = u32(r0);  // (from the original)
L_51bc40:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051bbbc
GUEST_EXPORT(0x0051bbbc, d_0051bbbc::f_0051bbbc);

// f_0051bc4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051bc4c {

inline constexpr guest::Function<0x0081bf98, u32(u32, u32, u32, u32)> call_0081bf98;  // (from the original)

u32 f_0051bc4c() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r0 = 0x87c084u;  // (from the original)
    r13 = r13 - 8;
    r4 = 0xa827e8u;  // (from the original)
    ea = r0 + 8u;
    r3 = *gptr<u32>(ea);
    ea = r0 + 0x20u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r12 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    if (r12 != r3) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    if (r12 == 0) {
        if (((r3 | r0) & 1u) == 0) {
            goto L_51bc9c;
        }
    }
    if (r3 != r0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_51bc9c:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0081bf98(r0, r1, r2, r3);
    r0 = 1u;
    r1 = 0u;
    ea = r4 + 0xa0u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051bc4c
GUEST_EXPORT(0x0051bc4c, d_0051bc4c::f_0051bc4c);

// f_0051c170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051c170 {

struct __attribute__((packed)) Object_0051c170_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 byte_24;
};
GUEST_OFFSET(Object_0051c170_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0051c170_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0051c170_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0051c170_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0051c170_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0051c170_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0051c170_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0051c170_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0051c170_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0051c170_0, byte_24, 0x24);  // (from the original)


void f_0051c170(gptr<Object_0051c170_0> arg0, u32 r1) {
    u32 r3 = 0;
    u32 r12 = 0;
    float S0 = 0;
    float S1 = 0;
    r12 = 0x87c114u;  // (from the original)
    r3 = 0u;
    arg0->word_0 = u32(0x903690u);  // (from the original)
    arg0->word_4 = u32(r3);
    arg0->word_8 = u32(r3);
    S0 = std::bit_cast<float>(*gptr<u32>(r12));
    S1 = std::bit_cast<float>(*gptr<u32>(r12 + 4));
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    arg0->word_18 = u32(std::bit_cast<u32>(S1));
    arg0->word_1c = u32(r3);
    arg0->word_c = u32(0x9036a0u);  // (from the original)
    arg0->word_20 = u32(r3);
    arg0->byte_24 = u8(r3);
    arg0->word_10 = u32(r1);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0051c170
GUEST_EXPORT(0x0051c170, d_0051c170::f_0051c170);

// f_0051ca20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051ca20 {

inline constexpr guest::Function<0x00308e80, u32(u32, u32, u32, u32)> call_00308e80;  // (from the original)

u32 f_0051ca20(u32 r0) {
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_00308e80(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    zf = r0 == 0x26u;  // (from the original)
    if (!zf) {
        zf = r0 == 0xau;  // (from the original)
    }
    if (zf) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0051ca20
GUEST_EXPORT(0x0051ca20, d_0051ca20::f_0051ca20);

// f_0051cbdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051cbdc {

struct __attribute__((packed)) Object_0051cbdc_0 {
    u8 unknown_0[0x9a8];  // (not used here)
    u8 byte_9a8;
    u8 unknown_9a9[0x3];  // (not used here)
    u16 half_9ac;
};
GUEST_OFFSET(Object_0051cbdc_0, byte_9a8, 0x9a8);  // (from the original)
GUEST_OFFSET(Object_0051cbdc_0, half_9ac, 0x9ac);  // (from the original)


u32 f_0051cbdc(gptr<Object_0051cbdc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x18fu;  // (from the original)
    if (u32(arg0->byte_9a8) == 0) {
        r1 = u32(arg0->half_9ac);
    }
    r0 = r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051cbdc
GUEST_EXPORT(0x0051cbdc, d_0051cbdc::f_0051cbdc);

// f_0051ccc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051ccc0 {


u32 f_0051ccc0(u32 r0) {
    u32 r1 = 0;
    u32 cf = 0;
    cf = r0 >= 8u;
    r1 = r0;
    r0 = 0xa83108u;  // (from the original)
    if (!cf) {
        r1 = r1 + (r1 << 1);
        r0 = r0 + (r1 << 4);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051ccc0
GUEST_EXPORT(0x0051ccc0, d_0051ccc0::f_0051ccc0);

// f_0051cd48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051cd48 {

inline constexpr guest::Function<0x00111611, u32(u32, u32, u32, u32)> call_00111610;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)

u32 f_0051cd48(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_002fb310(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0 + 4u;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0 + 0x62138u;  // (from the original)
    r0 = r4;
    r0 = call_00111610(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051cd48
GUEST_EXPORT(0x0051cd48, d_0051cd48::f_0051cd48);

// f_0051d168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d168 {

inline constexpr guest::Function<0x0051f9cc, u32(u32, u32, u32, u32)> call_0051f9cc;  // (from the original)

u32 f_0051d168(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0051f9cc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 >= 0xc8u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (r0 >= 0x3du) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 2u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0051d168
GUEST_EXPORT(0x0051d168, d_0051d168::f_0051d168);

// f_0051d18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d18c {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x0051f9cc, u32(u32, u32, u32, u32)> call_0051f9cc;  // (from the original)

u32 f_0051d18c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r6 = r0 + 0x292a4u;  // (from the original)
    r1 = r4;
    r0 = r6;
    r0 = call_003009a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r1 = r5;
    r0 = r6;
    r0 = call_003009a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r4 == 0;
    if (!zf) {
        zf = r0 == 0;
    }
    if (!zf) {
        r1 = r0;
        r0 = r4;
        r0 = call_0051f9cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 >= 0xc8u) {  // (from the original)
            r0 = 0u;
            goto L_51d1f4;
        }
        if (r0 >= 0x3du) {  // (from the original)
            r0 = 1u;
            goto L_51d1f4;
        }
    }
    r0 = 2u;
L_51d1f4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051d18c
GUEST_EXPORT(0x0051d18c, d_0051d18c::f_0051d18c);

// f_0051d264: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d264 {


u32 f_0051d264() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = *gptr<u32>(0x95386cu);  // (from the original)
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    *gptr<u8>(r1 + 0x9au) = u8(0xffu);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r0 + 0x8f88u));  // (from the original)
    res = r0 << 0x19;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r0 >> 7;
    if (res != 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 << 0x1a;  // (from the original)
    if (0xau != r0 >> 0x1c) {  // (from the original)
        r0 = r0 >> 0x1c;  // (from the original)
        *gptr<u8>(r1 + 0x9au) = u8(r0);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051d264
GUEST_EXPORT(0x0051d264, d_0051d264::f_0051d264);

// f_0051d710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d710 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0051e7d4, u32(u32, u32, u32, u32)> call_0051e7d4;  // (from the original)

u32 f_0051d710(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r1;
    r7 = r0;
    r6 = 0xa82b90u;  // (from the original)
    r5 = r6 + (r1 + (r4 << 3) + (r4 << 4) << 1);
    if (r1 >= 4u) {
        r0 = r6;
    } else {
        r0 = r5;
    }
    r1 = 0x32u;  // (from the original)
    r0 = call_00301444(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r6;
    if (r4 < 4u) {
        r0 = r5;
    }
    r2 = 0x32u;  // (from the original)
    r1 = r7;
    r0 = call_002f8574(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r4 != 0) {
        r0 = r6;
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        r1 = 2u;
        return call_0051e7d4(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051d710
GUEST_EXPORT(0x0051d710, d_0051d710::f_0051d710);

// f_0051d7f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d7f0 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0051e7d4, u32(u32, u32, u32, u32)> call_0051e7d4;  // (from the original)

u32 f_0051d7f0(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0xa82b90u;  // (from the original)
    r0 = r5;
    if (r4 < 4u) {
        r2 = r4 + (r4 << 3);
        r0 = r5 + (r2 + (r4 << 4) << 1);
    }
    r1 = 0x32u;  // (from the original)
    r0 = call_00301444(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r4 != 0) {
        r0 = r5;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r1 = 3u;
        return call_0051e7d4(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051d7f0
GUEST_EXPORT(0x0051d7f0, d_0051d7f0::f_0051d7f0);

// f_0051d8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d8e8 {


u32 f_0051d8e8(u32 r0) {
    u32 r1 = 0;
    u32 cf = 0;
    cf = r0 >= 0x30u;  // (from the original)
    r1 = r0;
    r0 = 0xa83288u;  // (from the original)
    if (!cf) {
        r0 = r0 + (r1 << 2);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051d8e8
GUEST_EXPORT(0x0051d8e8, d_0051d8e8::f_0051d8e8);

// f_0051dd50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051dd50 {

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)

u32 f_0051dd50() {
    u32 r1 = 0;
    r1 = 0xa83394u;  // (from the original)
    return call_002fb430(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0051dd50
GUEST_EXPORT(0x0051dd50, d_0051dd50::f_0051dd50);

// f_0051dfe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051dfe4 {

struct __attribute__((packed)) Object_0051dfe4_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_0051dfe4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0051dfe4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0051dfe4_0, byte_8, 0x8);  // (from the original)


void f_0051dfe4(gptr<Object_0051dfe4_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->byte_8 = u8(7u);
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0051dfe4
GUEST_EXPORT(0x0051dfe4, d_0051dfe4::f_0051dfe4);

// f_0051dffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051dffc {

struct __attribute__((packed)) Object_0051dffc_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x1];  // (not used here)
    u16 half_a;
    u8 byte_c;
};
GUEST_OFFSET(Object_0051dffc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0051dffc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0051dffc_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0051dffc_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_0051dffc_0, byte_c, 0xc);  // (from the original)


void f_0051dffc(gptr<Object_0051dffc_0> arg0) {
    u32 r2 = 0;
    r2 = 0u;
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r2);
    arg0->byte_8 = u8(r2);
    arg0->half_a = u16(r2);
    arg0->byte_c = u8(r2);
    return;
}

}  // namespace d_0051dffc
GUEST_EXPORT(0x0051dffc, d_0051dffc::f_0051dffc);

// f_0051e018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051e018 {

inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;  // (from the original)

u32 f_0051e018(u32 r0) {
    r0 = r0 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_002e6944(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x1cu;  // (from the original)
    return r0;
}

}  // namespace d_0051e018
GUEST_EXPORT(0x0051e018, d_0051e018::f_0051e018);

// f_0051f568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051f568 {

struct __attribute__((packed)) Object_0051f568_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0051f568_0, byte_0, 0x0);  // (from the original)


void f_0051f568(gptr<Object_0051f568_0> arg0, u32 r1) {
    u32 res = 0;
    r1 = r1 + u32(arg0->byte_0);
    res = r1;
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = 0u;
        arg0->byte_0 = u8(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r1 >= 0x20u) {  // (from the original)
        r1 = 0x20u;  // (from the original)
    }
    arg0->byte_0 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0051f568
GUEST_EXPORT(0x0051f568, d_0051f568::f_0051f568);

// f_0051f58c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051f58c {

struct __attribute__((packed)) Object_0051f58c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0051f58c_0, byte_0, 0x0);  // (from the original)


void f_0051f58c(gptr<Object_0051f58c_0> arg0) {
    u32 r1 = 0;
    r1 = u32(arg0->byte_0) >> 1;
    if (u32(r1 >= 0x20u) && !u32(r1 == 0x20u)) {  // (from the original)
        r1 = 0x20u;  // (from the original)
    }
    arg0->byte_0 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0051f58c
GUEST_EXPORT(0x0051f58c, d_0051f58c::f_0051f58c);

// f_0051f84c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051f84c {

struct __attribute__((packed)) Object_0051f84c_0 {
    u8 unknown_0[0x9a8];  // (not used here)
    u8 byte_9a8;
};
GUEST_OFFSET(Object_0051f84c_0, byte_9a8, 0x9a8);  // (from the original)

inline constexpr guest::Function<0x0071b8d0, u32(u32, u32, u32, u32)> call_0071b8d0;  // (from the original)

u32 f_0051f84c(gptr<Object_0051f84c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    ea = r0 + 0x9a8u;  // (from the original)
    r0 = ea;
    r1 = u32(arg0->byte_9a8);
    if (r1 != 0) {
        r0 = 0u;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0071b8d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 < 8u) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051f84c
GUEST_EXPORT(0x0051f84c, d_0051f84c::f_0051f84c);

// f_0051fb04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051fb04 {

inline constexpr guest::Function<0x001198e9, u32(u32, u32, u32, u32)> call_001198e8;  // (from the original)
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32, u32, u32)> call_0011a1c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0051f9cc, u32(u32, u32, u32, u32)> call_0051f9cc;  // (from the original)
inline constexpr guest::Function<0x00565c10, u32(u32, u32, u32, u32)> call_00565c10;  // (from the original)

u32 f_0051fb04(u32 r0, u32 r1, float S0) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r0 = r0 + 0x292a4u;  // (from the original)
    r1 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_003009a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    r14 = *gptr<u32>(ea + 4);
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r6 = r0;
    if (r0 == 0) {
        goto L_51fb88;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301e20(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_51fb88;
    }
    r7 = ~0u;
    r9 = r7;
    r8 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r10 = r0 + 0x292a4u;  // (from the original)
    r4 = 0u;
L_51fb5c:;
    r1 = r4;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_003009a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    zf = r0 == 0;
    r5 = r0;
    if (!zf) {
        zf = r6 == r5;
    }
    if (zf) {
        goto L_51fc00;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0011a1c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_51fb90;
    }
    goto L_51fc00;
L_51fb88:;
    r0 = ~0u;
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
    guest::cpu()->s[0] = S0;
    return r0;
L_51fb90:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001198e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 != 0) {
        goto L_51fc00;
    }
    r0 = 0u;
    r1 = r5;
    if (r6 != 0) {
        r0 = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0051f9cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    if (!(!u32(r7 >= r0) || u32(r7 == r0))) {
        r7 = r0;
        r9 = r4;
        r8 = 0u;
        goto L_51fc00;
    }
    if (r7 + 1u == 0) {
        goto L_51fc00;
    }
    if (r0 != r7) {
        goto L_51fc00;
    }
    r8 = r8 + 1u;
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(r8)));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00565c10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (s32(std::bit_cast<u32>(S0)) < s32(0x3f800000u)) {  // (from the original)
        r9 = r4;
    }
L_51fc00:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_51fb5c;
    }
    r0 = r9;
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
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0051fb04
GUEST_EXPORT(0x0051fb04, d_0051fb04::f_0051fb04);

// f_0051fc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051fc14 {

inline constexpr guest::Function<0x0051ff28, u32(u32, u32, u32, u32)> call_0051ff28;  // (from the original)
inline constexpr guest::Function<0x00520ce8, u32(u32, u32, u32, u32)> call_00520ce8;  // (from the original)

u32 f_0051fc14(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r2;
    r6 = r0;
    r0 = r1;
    r4 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00520ce8(r0, r1, r2, r3);
    r1 = r0;
    r3 = r5;
    r2 = 0u;
    r0 = r6;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0051ff28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0051fc14
GUEST_EXPORT(0x0051fc14, d_0051fc14::f_0051fc14);
