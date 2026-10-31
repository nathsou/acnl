// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00580fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00580fd0 {

struct __attribute__((packed)) Object_00580fd0_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x78];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(Object_00580fd0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00580fd0_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00580fd0_0, word_a4, 0xa4);  // (from the original)

inline constexpr guest::Function<0x003170d0, u32(u32, u32, u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_00580fd0(gptr<Object_00580fd0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0x8f799cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r1 = r2 + 0x6cu;  // (from the original)
    arg0->word_28 = u32(r1);
    r3 = r2 + 0x170u;  // (from the original)
    arg0->word_0 = u32(r2);
    arg0->word_a4 = u32(r3);
    r0 = r0 + 0xebcu;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x288u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xa4u;  // (from the original)
    r0 = call_003170d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x28u;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_00580fd0
GUEST_EXPORT(0x00580fd0, d_00580fd0::f_00580fd0);

// f_00581050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00581050 {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005814d0, u32(u32, u32, u32, u32)> call_005814d0;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x006138a4, u32(u32, u32, u32, u32)> call_006138a4;  // (from the original)

u32 f_00581050(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_005814d0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_58109c;
    }
    r2 = 0x80u;  // (from the original)
    r1 = r5;
    r0 = 0x4000u;  // (from the original)
    r0 = call_002fd108(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_58109c;
    }
    r0 = call_006138a4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x28u) = u32(*gptr<u32>(r4 + 0x2cu));  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_58109c:;
    r0 = r4;
    r0 = call_005817f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00581050
GUEST_EXPORT(0x00581050, d_00581050::f_00581050);

// f_005810ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005810ac {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0057bc20, u32(u32, u32, u32, u32)> call_0057bc20;  // (from the original)
inline constexpr guest::Function<0x005814d0, u32(u32, u32, u32, u32)> call_005814d0;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x006efd40, u32(u32, u32, u32, u32)> call_006efd40;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)

u32 f_005810ac(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r13 = r13 - 0x58u;  // (from the original)
    r4 = r0;
    r6 = r2;
    r7 = r3;
    r1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r5 = *gptr<u32>(r13 + 0x58u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005814d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5812c0;
    }
    r9 = r6 * r7;
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 1u;
    zf = r0 == 0;
    cf = r0 >= 0u;
    r7 = 0u;
    if (cf && !zf) {
        r11 = r0;
        r10 = r9 << 0xa;  // (from the original)
    }
    if (!cf || zf) {
        goto L_5811f8;
    }
L_5810fc:;
    r1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r6 = r9;
    r2 = 4u;
    r0 = r10 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00131280(r0, r1, r2, r3);
    r0 = r0 + 8u;
    ea = r0 - 8u;
    *gptr<u32>(ea) = u32(0x400u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r6);
    r5 = r4 + 0x30u;  // (from the original)
    r1 = 0x6efd9cu;  // (from the original)
    if (r7 < 2u) {
        r5 = r5 + (r7 << 2);
    }
    r3 = r6;
    r2 = 0x400u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r5) = u32(r0);
    r0 = r4 + 0x30u;  // (from the original)
    if (r7 < 2u) {
        r0 = r0 + (r7 << 2);
    }
    if (*gptr<u32>(r0) == 0) {
        goto L_5812d4;
    }
    r1 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5811e4;
    } else {
        r8 = r4 + 0x30u + (r7 << 2);  // (from the original)
    }
    do {
L_581180:;
        r5 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1 = r13 + 0x18u;  // (from the original)
        r0 = r4;
        r6 = *gptr<u32>(r1 + 4u);
        guest::cpu()->r[13] = r13;
        r0 = call_007482bc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r6 * r0 + r5;
        r0 = r4 + 0x30u;  // (from the original)
        if (r7 < 2u) {
            r0 = r8;
        }
        r0 = *gptr<u32>(r0) + (r1 << 0xa);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006efd40(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0 != 0);
L_5811e4:;
    r7 = r7 + 1u;
    if (r7 < r11) {
        guest::preempt();
        goto L_5810fc;
    }
L_5811f8:;
    r1 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5812a0;
    }
    do {
L_58121c:;
        r8 = 0u;
        r7 = r8;
        r5 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1 = r13 + 0x18u;  // (from the original)
        r0 = r4;
        r6 = *gptr<u32>(r1 + 4u);
        guest::cpu()->r[13] = r13;
        r0 = call_007482bc(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r1 = r6 * r0 + r5;
        r0 = *gptr<u32>(r4 + 0x30u);  // (from the original)
        if (r0 != 0) {
            r8 = r0 + (r1 << 0xa);  // (from the original)
        }
        r0 = *gptr<u32>(r4 + 0x34u);  // (from the original)
        if (r0 != 0) {
            r7 = r0 + (r1 << 0xa);  // (from the original)
        }
        r2 = r7;
        r0 = *gptr<u32>(r4 + 0x20u) + (r1 + (r1 << 1) << 2);  // (from the original)
        r1 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_0057bc20(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0 != 0);
L_5812a0:;
    r13 = r13 + 0x34u;  // (from the original)
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
L_5812c0:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005817f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_5812dc;
L_5812d4:;
L_5812dc:;
    r13 = r13 + 0x34u;  // (from the original)
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
}

}  // namespace d_005810ac
GUEST_EXPORT(0x005810ac, d_005810ac::f_005810ac);

// f_005812ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005812ec {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005810ac, u32(u32, u32, u32, u32)> call_005810ac;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x006138a4, u32(u32, u32, u32, u32)> call_006138a4;  // (from the original)

u32 f_005812ec(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005810ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_581344;
    }
    r2 = 0x80u;  // (from the original)
    r1 = r5;
    r0 = 0x4000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_581344;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006138a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x28u) = u32(*gptr<u32>(r4 + 0x2cu));  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_581344:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005817f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005812ec
GUEST_EXPORT(0x005812ec, d_005812ec::f_005812ec);

// f_00581354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00581354 {

inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> call_0057bce0;  // (from the original)
inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)
inline constexpr guest::Function<0x007482d0, u32(u32, u32, u32, u32)> call_007482d0;  // (from the original)

u32 f_00581354(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x48u;  // (from the original)
    r4 = r0;
    r9 = 0u;
    r5 = r1;
    r8 = r3;
    *gptr<u32>(r13) = u32(r2);
    r3 = r13 + 0x10u;  // (from the original)
    r2 = r13 + 0xcu;  // (from the original)
    r1 = r13 + 8u;
    r0 = r13 + 4u;
    *gptr<u32>(r13 + 4u) = u32(r9);
    *gptr<u32>(r13 + 8u) = u32(r9);
    *gptr<u32>(r13 + 0xcu) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a69ec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r10 = r5;
    ea = r13 + 0xcu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r11 = *gptr<u32>(ea + 4);
    ea = r13 + 4u;
    r5 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    r2 = r6;
    *gptr<u32>(r0) = u32(r5);
    *gptr<u32>(r0 + 4) = u32(r2);
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007482d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    zf = r7 == 0;
    if (!zf) {
        zf = *gptr<u32>(r4 + 0x20u) == 0;  // (from the original)
    }
    if (zf) {
        goto L_58141c;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007482bc(r0, r1, r2, r3);
    r0 = r6 * r0 + r5;
    r1 = *gptr<u32>(r4 + 0x20u);  // (from the original)
    res = r1 + (r0 + (r0 << 1) << 2);
    r0 = res;
    if (res == 0) {
        goto L_58141c;
    }
    *gptr<u32>(r13) = u32(r8);
    r2 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r3 = r11;
    r1 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0057bce0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_58141c:;
    r0 = r9;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00581354
GUEST_EXPORT(0x00581354, d_00581354::f_00581354);

// f_005814d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005814d0 {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0052f284, u32(u32, u32, u32, u32)> call_0052f284;  // (from the original)
inline constexpr guest::Function<0x0057bd78, u32(u32, u32, u32, u32)> call_0057bd78;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x006a97a0, u32(u32, u32, u32, u32)> call_006a97a0;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)

u32 f_005814d0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r5 = r2;
    r13 = r13 - 0x68u;  // (from the original)
    r4 = r0;
    r10 = r1;
    r6 = r3;
    r2 = r3 - 1u;
    r1 = r5 - 1u;
    r0 = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f074(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r7;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f284(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r9 = 0u;
    r0 = ~0u;
    r2 = r0 + (r6 << 4);
    r1 = r0 + (r5 << 4);
    r0 = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f074(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r7;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f284(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r7 = r5 * r6;
    r2 = 4u;
    r1 = r10;
    r0 = (r7 + (r7 << 1) << 2) + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00131280(r0, r1, r2, r3);
    r0 = r0 + 8u;
    r8 = r0 - 8u;
    r1 = 0xcu;  // (from the original)
    *gptr<u32>(r8) = u32(r1);
    *gptr<u32>(r8 + 4) = u32(r7);
    r2 = r1;
    r1 = 0x57bdb0u;  // (from the original)
    r3 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    if (r0 == 0) {
        goto L_581774;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007482bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_58166c;
    }
    do {
L_5815f0:;
        r5 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1 = r13 + 0x18u;  // (from the original)
        r0 = r4;
        r6 = *gptr<u32>(r1 + 4u);
        guest::cpu()->r[13] = r13;
        r0 = call_007482bc(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r5 = r6 * r0 + r5;
        r6 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r2 = r6;
        r0 = r8 + (r5 + (r5 << 1) << 2);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bd78(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_58177c;
        }
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0 != 0);
L_58166c:;
    r2 = 4u;
    r1 = r10;
    r0 = r7 * 0xa1cu + 8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00131280(r0, r1, r2, r3);
    r2 = 0xa1cu;  // (from the original)
    r1 = 0x6a9834u;  // (from the original)
    r3 = r7;
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + 4) = u32(r7);
    r0 = r0 + 8;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 == 0) {
        goto L_581790;
    }
    r1 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_581750;
    }
    do {
L_5816d0:;
        r5 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1 = r13 + 0x18u;  // (from the original)
        r0 = r4;
        r6 = *gptr<u32>(r1 + 4u);
        guest::cpu()->r[13] = r13;
        r0 = call_007482bc(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r5 = r6 * r0 + r5;
        r6 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r2 = r6;
        r0 = r7 + (r5 * 0x287u << 2);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006a97a0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_58177c;
        }
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0 != 0);
L_581750:;
    ea = r4 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r4 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = ea + 4u;
    *gptr<u32>(ea) = u32(r7);
    *gptr<u32>(ea + 0x10u) = u32(r9);  // (from the original)
    r0 = 1u;
L_581774:;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_58177c:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005817f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_581790:;
    r0 = 0u;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005814d0
GUEST_EXPORT(0x005814d0, d_005814d0::f_005814d0);

// f_005817f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005817f0 {

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x00307889, u32(u32, u32, u32, u32)> call_00307888;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0057bd94, u32(u32, u32, u32, u32)> call_0057bd94;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)

u32 f_005817f0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_007482bc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r7 = 0u;
    if (*gptr<u32>(r4 + 0x20u) == 0) {  // (from the original)
        goto L_5818b0;
    }
    r1 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_581898;
    }
    do {
L_58183c:;
        r5 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1 = r13 + 0x18u;  // (from the original)
        r0 = r4;
        r6 = *gptr<u32>(r1 + 4u);
        guest::cpu()->r[13] = r13;
        r0 = call_007482bc(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r0 = r6 * r0 + r5;
        r1 = *gptr<u32>(r4 + 0x20u);  // (from the original)
        r0 = r1 + (r0 + (r0 << 1) << 2);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bd94(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r13;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        guest::preempt();
    } while (r0 != 0);
L_581898:;
    r1 = 0x57bdc0u;  // (from the original)
    r0 = *gptr<u32>(r4 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00307888(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x20u) = u32(r7);  // (from the original)
L_5818b0:;
    if (*gptr<u32>(r4 + 0x24u) == 0) {  // (from the original)
        goto L_581958;
    }
    r1 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_581940;
    }
    do {
L_5818e0:;
        r5 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1 = r13 + 0x18u;  // (from the original)
        r0 = r4;
        r6 = *gptr<u32>(r1 + 4u);
        guest::cpu()->r[13] = r13;
        r0 = call_007482bc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = 0x287u;  // (from the original)
        r2 = *gptr<u32>(r4 + 0x24u);  // (from the original)
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r13;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        guest::preempt();
    } while (r0 != 0);
L_581940:;
    r1 = 0x6a987cu;  // (from the original)
    r0 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00307888(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x24u) = u32(r7);  // (from the original)
L_581958:;
    r5 = 0u;
    do {
L_58195c:;
        r0 = r4 + 0x30u;  // (from the original)
        if (r5 < 2u) {
            r0 = r0 + (r5 << 2);
        }
        if (!(*gptr<u32>(r0) == 0)) {
            r0 = r4 + 0x30u;  // (from the original)
            if (r5 < 2u) {
                r0 = r0 + (r5 << 2);
            }
            r1 = 0x138b98u;  // (from the original)
            r0 = *gptr<u32>(r0);
            guest::cpu()->r[13] = r13;
            r0 = call_00307888(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r0 = r4 + 0x30u;  // (from the original)
            if (r5 < 2u) {
                r0 = r0 + (r5 << 2);
            }
            *gptr<u32>(r0) = u32(r7);
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(2u));
    r0 = *gptr<u32>(r4 + 0x2cu);  // (from the original)
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002ffb64(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r4 + 0x2cu) = u32(r7);  // (from the original)
    }
    *gptr<u32>(r4 + 0x28u) = u32(r7);  // (from the original)
    r0 = r13;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005817f0
GUEST_EXPORT(0x005817f0, d_005817f0::f_005817f0);

// f_00581a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00581a18 {

inline constexpr guest::Function<0x0052f280, u32(u32, u32, u32, u32)> call_0052f280;  // (from the original)

u32 f_00581a18(u32 r0) {
    return call_0052f280(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00581a18
GUEST_EXPORT(0x00581a18, d_00581a18::f_00581a18);

// f_005822c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005822c4 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x004f147c, u32(u32, u32, u32, u32)> call_004f147c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)
inline constexpr guest::Function<0x007e91bc, u32(u32, u32, u32, u32)> call_007e91bc;  // (from the original)

u32 f_005822c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005673c8(r0, r1, r2, r3);
    r4 = r0 + 8u;
    r3 = 2u;
    r2 = 8u;
    *gptr<u32>(r4) = u32(0x8f7434u);  // (from the original)
    r1 = 0x5673c8u;  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 4u;
    r8 = 0u;
    *gptr<u32>(r0 + 0x14u) = u32(r8);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r8);  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r8);  // (from the original)
    r9 = 0x7ffeu;  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r8);  // (from the original)
    *gptr<u8>(r0 + 0x24u) = u8(r8);  // (from the original)
    *gptr<u32>(r0) = u32(0x8ed5e4u);  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    r1 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    *gptr<u32>(r0 + 4u) = u32(r8);
    r3 = 0xc8u;  // (from the original)
    *gptr<u32>(r0 + 8u) = u32(r8);
    *gptr<u8>(r0 + 0xcu) = u8(r3);  // (from the original)
    *gptr<u8>(r0 + 0xdu) = u8(r3);  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(r8);  // (from the original)
    r1 = 0x7e9240u;  // (from the original)
    r3 = 2u;
    r2 = 0x10u;  // (from the original)
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0 - 0x3cu;  // (from the original)
    *gptr<u8>(r0 + 0x20u) = u8(r8);  // (from the original)
    r0 = r7 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007e91bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r7 + 0x3au) = u8(1u);  // (from the original)
    *gptr<u8>(r7 + 0x38u) = u8(r8);  // (from the original)
    r6 = 0u;
    *gptr<u8>(r7 + 0x39u) = u8(r8);  // (from the original)
    do {
L_58237c:;
        r5 = r7 + (r6 << 4) + 0x3cu;  // (from the original)
        r1 = r9;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r4 = ((0xc8u | r4 & ~0xffu) & ~0xff00u | 0xc8u << 8 & 0xff00u) & ~0xff0000u | r8 << 0x10 & 0xff0000u;  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r8);
        *gptr<u32>(r5 + 8u) = u32(r8);
        *gptr<u8>(r5 + 0xcu) = u8(r4);  // (from the original)
        r6 = r6 + 1u;
        r2 = r4 << 8 >> 0x18;  // (from the original)
        *gptr<u8>(r5 + 0xdu) = u8(r4 << 0x10 >> 0x18);  // (from the original)
        *gptr<u8>(r5 + 0xeu) = u8(r2);  // (from the original)
        guest::preempt();
    } while (r6 < 2u);
    *gptr<u8>(r7 + 0x5cu) = u8(r8);  // (from the original)
    r1 = 0x5371e0u;  // (from the original)
    *gptr<u32>(r7) = u32(0x8f0a58u);  // (from the original)
    r3 = 2u;
    r2 = 0x114u;  // (from the original)
    r0 = r7 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8fab0cu;  // (from the original)
    *gptr<u32>(r0 - 0x60u) = u32(r1);  // (from the original)
    r0 = r0 + 0x22cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004f147c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x294u;  // (from the original)
    *gptr<u8>(r0 + 0x2acu) = u8(r8);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005822c4
GUEST_EXPORT(0x005822c4, d_005822c4::f_005822c4);

// f_005826d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005826d0 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_005826d0(u32 r0, u32 r1_unused, u32 r2) {
    if (r2 >= 2u) {
        return r0;
    }
    r0 = r0 + (r2 << 5);
    r2 = 0x20u;  // (from the original)
    return call_002f8574(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_005826d0
GUEST_EXPORT(0x005826d0, d_005826d0::f_005826d0);

// f_005826e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005826e8 {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005b4358, u32(u32, u32, u32, u32)> call_005b4358;  // (from the original)
inline constexpr guest::Function<0x005b449c, u32(u32, u32, u32, u32)> call_005b449c;  // (from the original)
inline constexpr guest::Function<0x005b4954, u32(u32, u32, u32, u32)> call_005b4954;  // (from the original)
inline constexpr guest::Function<0x006cb9fc, u32(u32, u32, u32, u32)> call_006cb9fc;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x006fb030, u32(u32, u32, u32, u32)> call_006fb030;  // (from the original)

u32 f_005826e8(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = r0;
    r0 = 0x80u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r1 = r4;
        r0 = 0x2000u;  // (from the original)
        r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_582730;
        }
    }
    r0 = r4;
    r0 = call_006f9c08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r0 + 0x22u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_582730:;
    r1 = 0u;
    r0 = r4;
    r0 = call_005b4358(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r4 - 0xa1u;  // (from the original)
        if (r0 >= 2u) {
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        } else {
            r1 = 0xad4af4u;  // (from the original)
        }
        r0 = r1 + (r0 << 6);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = 0x40u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    if (r0 != 0) {
        r0 = 0x40u;  // (from the original)
        r0 = call_005b449c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 < 0xau) {  // (from the original)
            r1 = 0xad4b74u;  // (from the original)
            r0 = r1 + (r0 << 6);
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x4000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r4;
        r0 = call_006fb030(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 < 6u) {
            r1 = 0xad4e34u;  // (from the original)
            r0 = r1 + (r0 << 6);
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r4 == 0x25u) {  // (from the original)
        r0 = 0xad4df4u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = 0x400000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0xad4fb4u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r4 == 0x55u) {  // (from the original)
        r0 = 0xad4ff4u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r4 != 0x46u) {  // (from the original)
        if (r4 == 0x2bu) {  // (from the original)
            r0 = 0xad5074u;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r4 == 0x3eu) {  // (from the original)
            r0 = 0xad50b4u;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r4 == 0x3fu) {  // (from the original)
            r0 = 0xad50f4u;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r4 == 0x40u) {  // (from the original)
            r0 = 0xad5134u;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r4 == 0x42u) {  // (from the original)
            r0 = 0xad5174u;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r4 == 0x67u) {  // (from the original)
            r0 = 0xad51b4u;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    } else {
        r0 = call_006cb9fc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 = 0xad5034u;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = call_006e0b2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_005b4954(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 - 0x81u;  // (from the original)
    if (r0 < 6u) {
        r1 = 0xad51f4u;  // (from the original)
        r0 = r1 + (r0 << 6);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005826e8
GUEST_EXPORT(0x005826e8, d_005826e8::f_005826e8);

// f_005828cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005828cc {


u32 f_005828cc() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r2 = 0xad5074u;  // (from the original)
    r0 = 0xffffu;  // (from the original)
    r12 = r2 + 0x40u;  // (from the original)
    if (r2 >= r12) {
        goto L_582908;
    }
L_5828e0:;
    r3 = r2 + 0x20u;  // (from the original)
    r1 = r2;
    if (r2 >= r3) {
        goto L_5828fc;
    }
    do {
L_5828f0:;
        *gptr<u16>(r1) = u16(r0);
        r1 = r1 + 2u;
        guest::preempt();
    } while (r1 < r3);
L_5828fc:;
    r2 = r2 + 0x20u;  // (from the original)
    if (r2 < r12) {
        guest::preempt();
        goto L_5828e0;
    }
L_582908:;
    r1 = 0xad50b4u;  // (from the original)
    r12 = r1 + 0x40u;  // (from the original)
    if (r1 >= r12) {
        goto L_582940;
    }
L_582918:;
    r3 = r1 + 0x20u;  // (from the original)
    r2 = r1;
    if (r1 >= r3) {
        goto L_582934;
    }
    do {
L_582928:;
        *gptr<u16>(r2) = u16(r0);
        r2 = r2 + 2u;
        guest::preempt();
    } while (r2 < r3);
L_582934:;
    r1 = r1 + 0x20u;  // (from the original)
    if (r1 < r12) {
        guest::preempt();
        goto L_582918;
    }
L_582940:;
    r1 = 0xad50f4u;  // (from the original)
    r12 = r1 + 0x40u;  // (from the original)
    if (r1 >= r12) {
        goto L_582978;
    }
L_582950:;
    r3 = r1 + 0x20u;  // (from the original)
    r2 = r1;
    if (r1 >= r3) {
        goto L_58296c;
    }
    do {
L_582960:;
        *gptr<u16>(r2) = u16(r0);
        r2 = r2 + 2u;
        guest::preempt();
    } while (r2 < r3);
L_58296c:;
    r1 = r1 + 0x20u;  // (from the original)
    if (r1 < r12) {
        guest::preempt();
        goto L_582950;
    }
L_582978:;
    r1 = 0xad5134u;  // (from the original)
    r12 = r1 + 0x40u;  // (from the original)
    if (r1 >= r12) {
        goto L_5829b0;
    }
L_582988:;
    r3 = r1 + 0x20u;  // (from the original)
    r2 = r1;
    if (r1 >= r3) {
        goto L_5829a4;
    }
    do {
L_582998:;
        *gptr<u16>(r2) = u16(r0);
        r2 = r2 + 2u;
        guest::preempt();
    } while (r2 < r3);
L_5829a4:;
    r1 = r1 + 0x20u;  // (from the original)
    if (r1 < r12) {
        guest::preempt();
        goto L_582988;
    }
L_5829b0:;
    r1 = 0xad5174u;  // (from the original)
    r12 = r1 + 0x40u;  // (from the original)
    if (r1 >= r12) {
        goto L_5829e8;
    }
L_5829c0:;
    r3 = r1 + 0x20u;  // (from the original)
    r2 = r1;
    if (r1 >= r3) {
        goto L_5829dc;
    }
    do {
L_5829d0:;
        *gptr<u16>(r2) = u16(r0);
        r2 = r2 + 2u;
        guest::preempt();
    } while (r2 < r3);
L_5829dc:;
    r1 = r1 + 0x20u;  // (from the original)
    if (r1 < r12) {
        guest::preempt();
        goto L_5829c0;
    }
L_5829e8:;
    r2 = 0xad51b4u;  // (from the original)
    r12 = r2 + 0x40u;  // (from the original)
    if (r2 >= r12) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_5829f8:;
    r3 = r2 + 0x20u;  // (from the original)
    r1 = r2;
    if (r2 >= r3) {
        goto L_582a14;
    }
    do {
L_582a08:;
        *gptr<u16>(r1) = u16(r0);
        r1 = r1 + 2u;
        guest::preempt();
    } while (r1 < r3);
L_582a14:;
    r2 = r2 + 0x20u;  // (from the original)
    if (r2 < r12) {
        guest::preempt();
        goto L_5829f8;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005828cc
GUEST_EXPORT(0x005828cc, d_005828cc::f_005828cc);

// f_00582aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582aa4 {


u32 f_00582aa4(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r12 = r0 + 0x40u;  // (from the original)
    if (r0 >= r12) {
        guest::cpu()->r[1] = r1;
        return r0;
    } else {
        r3 = 0xffffu;  // (from the original)
    }
L_582ab4:;
    r2 = r0 + 0x20u;  // (from the original)
    r1 = r0;
    if (r0 >= r2) {
        goto L_582ad0;
    }
    do {
L_582ac4:;
        *gptr<u16>(r1) = u16(r3);
        r1 = r1 + 2u;
        guest::preempt();
    } while (r1 < r2);
L_582ad0:;
    r0 = r0 + 0x20u;  // (from the original)
    if (r0 < r12) {
        guest::preempt();
        goto L_582ab4;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00582aa4
GUEST_EXPORT(0x00582aa4, d_00582aa4::f_00582aa4);

// f_00582ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582ae4 {


u32 f_00582ae4(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = r0 + 0x20u;  // (from the original)
    if (r0 >= r1) {
        guest::cpu()->r[1] = r1;
        return r0;
    } else {
        r2 = 0xffffu;  // (from the original)
    }
    do {
L_582af4:;
        *gptr<u16>(r0) = u16(r2);
        r0 = r0 + 2u;
        guest::preempt();
    } while (r0 < r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00582ae4
GUEST_EXPORT(0x00582ae4, d_00582ae4::f_00582ae4);

// f_00582b1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582b1c {

inline constexpr guest::Function<0x005826e8, u32(u32, u32, u32, u32)> call_005826e8;  // (from the original)

u32 f_00582b1c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = r3;
    r0 = call_005826e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = r5 & 0xfu;  // (from the original)
        r0 = lsr_r(u32(*gptr<u16>(r0 + ((r6 & 1u) << 5) + (r1 << 1))), r4 & 0xfu) & 1u;  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00582b1c
GUEST_EXPORT(0x00582b1c, d_00582b1c::f_00582b1c);

// f_00582c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582c9c {

inline constexpr guest::Function<0x00152dc8, u32(u32, u32, u32, u32)> call_00152dc8;  // (from the original)

u32 f_00582c9c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    r2 = r1;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0u;
    r0 = call_00152dc8(r0, r1, r2, guest::cpu()->r[3]);
    zf = r0 == 0;
    r1 = r0;
    r0 = 1u;
    if (zf) {
        *gptr<u8>(r4 + 0xa8u) = u8(r0);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00582c9c
GUEST_EXPORT(0x00582c9c, d_00582c9c::f_00582c9c);

// f_00582d40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582d40 {

struct __attribute__((packed)) Object_00582d40_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
};
GUEST_OFFSET(Object_00582d40_0, byte_a8, 0xa8);  // (from the original)

inline constexpr guest::Function<0x00152770, u32(u32, u32, u32, u32)> call_00152770;  // (from the original)
inline constexpr guest::Function<0x00153758, u32(u32, u32, u32, u32)> call_00153758;  // (from the original)
inline constexpr guest::Function<0x00153a68, u32(u32, u32, u32, u32)> call_00153a68;  // (from the original)
inline constexpr guest::Function<0x004df800, u32(u32, u32, u32, u32)> call_004df800;  // (from the original)

u32 f_00582d40(gptr<Object_00582d40_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_a8);
    if (r0 != 2u) {
        r0 = 1u;
        goto L_582da8;
    }
    r0 = call_004df800(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r2 = 0u;
    r1 = r4;
    r0 = call_00153a68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        zf = r0 == 5u;
    }
    if (zf) {
        r3 = 0u;
        r2 = r3;
        r1 = r6;
        r0 = r4;
        r0 = call_00153758(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        r1 = 0u;
        r0 = r6;
        r0 = call_00152770(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r5 == 0) {
            goto L_582dac;
        }
    }
    r0 = 0u;
L_582da8:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_582dac:;
    r0 = 1u;
    *gptr<u8>(r4 + 0xa8u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00582d40
GUEST_EXPORT(0x00582d40, d_00582d40::f_00582d40);

// f_00582e4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582e4c {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002d31ec, u32(u32, u32, u32, u32)> call_002d31ec;  // (from the original)

u32 f_00582e4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r0;
    r4 = r2;
    r5 = r3;
    r7 = r1;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5894(r0, r1, r2, r3);
    r3 = r13 + 8u;
    r2 = r7;
    r1 = r6;
    r0 = *gptr<u32>(0x94d080u);  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r5);
    r0 = r0 + 0xbc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d31ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00582e4c
GUEST_EXPORT(0x00582e4c, d_00582e4c::f_00582e4c);

// f_00582f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f18 {


u32 f_00582f18() {
    u32 r0 = 0;
    if (u32(*gptr<u8>(*gptr<u32>(0x94ccb8u) + 0x10u)) == 2u) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_00582f18
GUEST_EXPORT(0x00582f18, d_00582f18::f_00582f18);

// f_00582f38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f38 {


u32 f_00582f38() {
    u32 r0 = 0;
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(0x94ccb8u) + 0x1ebfu))));  // (from the original)
    return r0;
}

}  // namespace d_00582f38
GUEST_EXPORT(0x00582f38, d_00582f38::f_00582f38);

// f_00582f50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f50 {


u32 f_00582f50() {
    u32 r0 = 0;
    r0 = u32(s32(s16(*gptr<u16>(*gptr<u32>(0x94ccb8u) + 0x12u))));  // (from the original)
    return r0;
}

}  // namespace d_00582f50
GUEST_EXPORT(0x00582f50, d_00582f50::f_00582f50);

// f_00582f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f64 {


u32 f_00582f64() {
    u32 r0 = 0;
    r0 = u32(s32(s16(*gptr<u16>(*gptr<u32>(0x94ccb8u) + 0x1eb6u))));  // (from the original)
    return r0;
}

}  // namespace d_00582f64
GUEST_EXPORT(0x00582f64, d_00582f64::f_00582f64);

// f_00582fa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582fa4 {


u32 f_00582fa4() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(0x94ccb8u) + 0x18u);  // (from the original)
    return r0;
}

}  // namespace d_00582fa4
GUEST_EXPORT(0x00582fa4, d_00582fa4::f_00582fa4);

// f_00582ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582ffc {

inline constexpr guest::Function<0x0032ae24, u32(u32, u32, u32, u32)> call_0032ae24;  // (from the original)

u32 f_00582ffc(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = *gptr<u32>(0x952c3cu);  // (from the original)
    r0 = call_0032ae24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x94e438u;  // (from the original)
    r0 = 1u;
    *gptr<u8>(r1) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00582ffc
GUEST_EXPORT(0x00582ffc, d_00582ffc::f_00582ffc);

// f_00583024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583024 {

inline constexpr guest::Function<0x00123528, u32(u32, u32, u32, u32)> call_00123528;  // (from the original)

u32 f_00583024(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_00123528(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x94e438u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r1) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00583024
GUEST_EXPORT(0x00583024, d_00583024::f_00583024);

// f_00583040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583040 {

inline constexpr guest::Function<0x0032ae8c, u32(u32, u32, u32, u32)> call_0032ae8c;  // (from the original)

u32 f_00583040() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94ccb8u);  // (from the original)
    return call_0032ae8c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00583040
GUEST_EXPORT(0x00583040, d_00583040::f_00583040);

// f_00583050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583050 {

inline constexpr guest::Function<0x0032af5c, u32(u32, u32, u32, u32)> call_0032af5c;  // (from the original)

u32 f_00583050() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94ccb8u);  // (from the original)
    return call_0032af5c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00583050
GUEST_EXPORT(0x00583050, d_00583050::f_00583050);

// f_005830a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005830a0 {


u32 f_005830a0() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(*gptr<u32>(0x94ccb8u) + 0x10u));  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_005830a0
GUEST_EXPORT(0x005830a0, d_005830a0::f_005830a0);

// f_005830d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005830d0 {

inline constexpr guest::Function<0x0032b774, u32(u32, u32, u32, u32)> call_0032b774;  // (from the original)

u32 f_005830d0() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94ccb8u);  // (from the original)
    return call_0032b774(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005830d0
GUEST_EXPORT(0x005830d0, d_005830d0::f_005830d0);

// f_005830f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005830f8 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0027680c, u32(u32, u32, u32, u32)> call_0027680c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00767084, u32(u32, u32, u32, u32)> call_00767084;  // (from the original)
inline constexpr guest::Function<0x0076c6e4, u32(u32, u32, u32, u32)> call_0076c6e4;  // (from the original)

u32 f_005830f8(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x6e21au;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c6e4(r0, r1, r2, guest::cpu()->r[3]);
    r5 = 0x94d080u;  // (from the original)
    r1 = r13;
    r0 = *gptr<u32>(r5) + 0x68cu;  // (from the original)
    if (u32(*gptr<u8>(r0 + 0x30u)) != 0) {  // (from the original)
        goto L_58318c;
    }
    r0 = *gptr<u32>(r0 + 0xc0u);  // (from the original)
    res = r0;
    if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_58318c;
    }
    r0 = 0x986a80u;  // (from the original)
    r2 = 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00134544(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r4;
    r4 = *gptr<u32>(r5);
    r5 = 0x986a80u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00767084(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_58318c;
    }
    r0 = u32(*gptr<u8>(r4 + 0xc5du));  // (from the original)
    if (r0 != 0) {
        goto L_58318c;
    }
    r2 = r5;
    r1 = r6;
    r0 = r4 + 0x68cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0027680c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_58318c:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005830f8
GUEST_EXPORT(0x005830f8, d_005830f8::f_005830f8);

// f_005831a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005831a0 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0027680c, u32(u32, u32, u32, u32)> call_0027680c;  // (from the original)
inline constexpr guest::Function<0x00767084, u32(u32, u32, u32, u32)> call_00767084;  // (from the original)
inline constexpr guest::Function<0x0076c6e4, u32(u32, u32, u32, u32)> call_0076c6e4;  // (from the original)

u32 f_005831a0(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r0 = r1;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c6e4(r0, r1, r2, guest::cpu()->r[3]);
    r4 = 0x94d080u;  // (from the original)
    r1 = r13;
    r0 = *gptr<u32>(r4) + 0x68cu;  // (from the original)
    if (u32(*gptr<u8>(r0 + 0x30u)) != 0) {  // (from the original)
        goto L_583228;
    }
    r0 = *gptr<u32>(r0 + 0xc0u);  // (from the original)
    res = r0;
    if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_583228;
    }
    r0 = 0x986a80u;  // (from the original)
    r2 = 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00134544(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = *gptr<u32>(r4);
    r6 = 0x986a80u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00767084(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_583228;
    }
    r0 = u32(*gptr<u8>(r4 + 0xc5du));  // (from the original)
    if (r0 != 0) {
        goto L_583228;
    }
    r2 = r6;
    r1 = r5;
    r0 = r4 + 0x68cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0027680c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_583228:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005831a0
GUEST_EXPORT(0x005831a0, d_005831a0::f_005831a0);

// f_00583238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583238 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0027680c, u32(u32, u32, u32, u32)> call_0027680c;  // (from the original)
inline constexpr guest::Function<0x00767084, u32(u32, u32, u32, u32)> call_00767084;  // (from the original)

u32 f_00583238(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x94d080u;  // (from the original)
    r0 = *gptr<u32>(r5) + 0x68cu;  // (from the original)
    if (u32(*gptr<u8>(r0 + 0x30u)) != 0) {  // (from the original)
        goto L_5832b4;
    }
    r0 = *gptr<u32>(r0 + 0xc0u);  // (from the original)
    res = r0;
    if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5832b4;
    }
    r0 = 0x986a80u;  // (from the original)
    r2 = 0x10u;  // (from the original)
    r0 = call_00134544(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r4;
    r4 = *gptr<u32>(r5);
    r5 = 0x986a80u;  // (from the original)
    r0 = r4;
    r0 = call_00767084(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_5832b4;
    }
    r0 = u32(*gptr<u8>(r4 + 0xc5du));  // (from the original)
    if (r0 != 0) {
        goto L_5832b4;
    }
    r2 = r5;
    r1 = r6;
    r0 = r4 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0 = r0 + 0x28cu;  // (from the original)
    return call_0027680c(r0, r1, r2, guest::cpu()->r[3]);
L_5832b4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00583238
GUEST_EXPORT(0x00583238, d_00583238::f_00583238);

// f_005832c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005832c0 {

inline constexpr guest::Function<0x001d5348, u32(u32, u32, u32, u32)> call_001d5348;  // (from the original)

u32 f_005832c0(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = r0;
    r2 = *gptr<u32>(0x94d080u);  // (from the original)
    r0 = r2 + 0x754u;  // (from the original)
    return call_001d5348(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_005832c0
GUEST_EXPORT(0x005832c0, d_005832c0::f_005832c0);

// f_0058332c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058332c {


u32 f_0058332c() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(*gptr<u32>(0x94d080u) + 0x768u));  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_0058332c
GUEST_EXPORT(0x0058332c, d_0058332c::f_0058332c);

// f_00583348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583348 {


u32 f_00583348() {
    u32 r0 = 0;
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(0x94d080u) + 0x600u))));  // (from the original)
    return r0;
}

}  // namespace d_00583348
GUEST_EXPORT(0x00583348, d_00583348::f_00583348);

// f_005833b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005833b0 {

inline constexpr guest::Function<0x006b2104, u32(u32, u32, u32, u32)> call_006b2104;  // (from the original)

u32 f_005833b0(u32 r0) {
    u32 r1 = 0;
    r1 = r0;
    r0 = *gptr<u32>(0x94d080u);  // (from the original)
    return call_006b2104(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005833b0
GUEST_EXPORT(0x005833b0, d_005833b0::f_005833b0);

// f_005833e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005833e4 {

inline constexpr guest::Function<0x001d7610, u32(u32, u32, u32, u32)> call_001d7610;  // (from the original)

u32 f_005833e4() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94d080u) + 0x754u;  // (from the original)
    return call_001d7610(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005833e4
GUEST_EXPORT(0x005833e4, d_005833e4::f_005833e4);

// f_00583474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583474 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002d3404, u32(u32, u32, u32, u32)> call_002d3404;  // (from the original)

u32 f_00583474(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5894(r0, r1, r2, r3);
    r3 = r5;
    r2 = r13;
    r1 = r4;
    r0 = *gptr<u32>(0x94d080u) + 0xbc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d3404(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00583474
GUEST_EXPORT(0x00583474, d_00583474::f_00583474);

// f_005834e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005834e0 {


u32 f_005834e0(u32 r0) {
    u32 r1 = 0;
    goto L_5834e0;
L_2e6d1c:;
    if (r1 >= 6u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 != 0) {
        *gptr<u32>(r0 + 0x2cu) = u32(r1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
L_5834e0:;
    r1 = r0;
    r0 = *gptr<u32>(0x94d080u) + 0x594u;  // (from the original)
    guest::preempt();
    goto L_2e6d1c;
}

}  // namespace d_005834e0
GUEST_EXPORT(0x005834e0, d_005834e0::f_005834e0);

// f_005834fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005834fc {


u32 f_005834fc(u32 r0, u32 r1) {
    u32 r2 = 0;
    goto L_5834fc;
L_5834fc:;
    r2 = r1;
    r1 = r0;
    r0 = *gptr<u32>(0x94d080u) + 0xb00u;  // (from the original)
    r0 = r0 + 0xc0u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005834fc
GUEST_EXPORT(0x005834fc, d_005834fc::f_005834fc);

// f_00583578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583578 {

inline constexpr guest::Function<0x004db540, u32(u32, u32, u32, u32)> call_004db540;  // (from the original)
inline constexpr guest::Function<0x00767084, u32(u32, u32, u32, u32)> call_00767084;  // (from the original)

u32 f_00583578(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    goto L_583578;
L_583578:;
    guest::cpu()->r[13] -= 8u;
    r4 = *gptr<u32>(0x94d080u);  // (from the original)
    r0 = r4;
    r0 = call_00767084(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r4 + 0xc5du));  // (from the original)
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0x28cu;  // (from the original)
    r1 = 0x1000f84u;  // (from the original)
    r2 = 0u;
    r0 = r0 + 0x6cu;  // (from the original)
    return call_004db540(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00583578
GUEST_EXPORT(0x00583578, d_00583578::f_00583578);

// f_00583640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583640 {


void f_00583640(u32 r0) {
    u32 r1 = 0;
    r1 = 0x94e424u;  // (from the original)
    *gptr<u32>(r1 + 8u) = u32(r0);
    *gptr<u8>(r1) = u8(1u);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00583640
GUEST_EXPORT(0x00583640, d_00583640::f_00583640);

// f_00583658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583658 {

inline constexpr guest::Function<0x001d5e0c, u32(u32, u32, u32, u32)> call_001d5e0c;  // (from the original)

u32 f_00583658() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94d080u) + 0x754u;  // (from the original)
    return call_001d5e0c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00583658
GUEST_EXPORT(0x00583658, d_00583658::f_00583658);

// f_00583670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583670 {


u32 f_00583670(u32 r0) {
    u32 r1 = 0;
    goto L_583670;
L_1d5e74:;
    if (r1 < 3u) {
        *gptr<u8>(r0 + 0x58u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
L_583670:;
    r1 = r0;
    r0 = *gptr<u32>(0x94d080u) + 0x754u;  // (from the original)
    guest::preempt();
    goto L_1d5e74;
}

}  // namespace d_00583670
GUEST_EXPORT(0x00583670, d_00583670::f_00583670);

// f_00583704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583704 {


u32 f_00583704() {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = *gptr<u32>(0x94d080u) + 0x68cu;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0x30u));  // (from the original)
    if (r1 != 0) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r0 + 0xc0u);  // (from the original)
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00583704
GUEST_EXPORT(0x00583704, d_00583704::f_00583704);

// f_00583790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583790 {


u32 f_00583790() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(0x94d080u) + 0x6c0u);  // (from the original)
    return r0;
}

}  // namespace d_00583790
GUEST_EXPORT(0x00583790, d_00583790::f_00583790);

// f_005837b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005837b8 {


u32 f_005837b8() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(0x94d080u) + 0x788u);  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_005837b8
GUEST_EXPORT(0x005837b8, d_005837b8::f_005837b8);

// f_00583824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583824 {

inline constexpr guest::Function<0x001d6868, u32(u32, u32, u32, u32)> call_001d6868;  // (from the original)

u32 f_00583824() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94d080u) + 0x754u;  // (from the original)
    return call_001d6868(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00583824
GUEST_EXPORT(0x00583824, d_00583824::f_00583824);

// f_0058383c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058383c {


u32 f_0058383c() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(*gptr<u32>(0x94d080u) + 0x708u));  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_0058383c
GUEST_EXPORT(0x0058383c, d_0058383c::f_0058383c);

// f_00583890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583890 {


void f_00583890(u32 r0) {
    u32 r1 = 0;
    r1 = 0x94e424u;  // (from the original)
    *gptr<u16>(r1 + 2u) = u16(r0);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00583890
GUEST_EXPORT(0x00583890, d_00583890::f_00583890);

// f_005838d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005838d4 {


u32 f_005838d4() {
    u32 r0 = 0;
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(0x94d080u) + 0x836u))));  // (from the original)
    return r0;
}

}  // namespace d_005838d4
GUEST_EXPORT(0x005838d4, d_005838d4::f_005838d4);

// f_0058394c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058394c {

inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x0058660c, u32(u32, u32, u32, u32)> call_0058660c;  // (from the original)
inline constexpr guest::Function<0x00766f1c, u32(u32, u32, u32, u32)> call_00766f1c;  // (from the original)

u32 f_0058394c(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    zf = r0 == 0x27u;  // (from the original)
    r4 = r0;
    if (!zf) {
        zf = r4 == 0x9du;  // (from the original)
    }
    if (!zf) {
        zf = r4 == 0x9eu;  // (from the original)
    }
    if (zf) {
        goto L_5839b0;
    }
    r5 = 0x94d080u;  // (from the original)
    r1 = r4;
    r0 = *gptr<u32>(r5);
    r0 = call_00766f1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5839b8;
    }
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 == 0) {
        goto L_5839f4;
    }
    res = u32(*gptr<u8>(0x5701u + r0)) << 0x1e;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_5839b0;
    }
    res = u32(*gptr<u8>(r0 + 0x572bu)) >> 7;  // (from the original)
    if (res == 0) {
        goto L_5839f4;
    }
L_5839b0:;
    r0 = 0u;
L_5839b4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5839b8:;
    r0 = call_0058660c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u16>(r0 + 0xeu));  // (from the original)
    if ((r0 & 0x40u) != 0) {  // (from the original)
        guest::preempt();
        goto L_5839b0;
    }
    r0 = call_00305f2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 3u) {
        guest::preempt();
        goto L_5839b0;
    }
    r0 = *gptr<u32>(r5);
    r1 = r4;
    r0 = call_00766f1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_5839b4;
    }
L_5839f4:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058394c
GUEST_EXPORT(0x0058394c, d_0058394c::f_0058394c);

// f_00583a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583a08 {


void f_00583a08(u32 r0) {
    u32 r1 = 0;
    r1 = 0x94e424u;  // (from the original)
    *gptr<u16>(r1 + 4u) = u16(r0);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00583a08
GUEST_EXPORT(0x00583a08, d_00583a08::f_00583a08);

// f_00583a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583a18 {

inline constexpr guest::Function<0x0027689c, u32(u32, u32, u32, u32)> call_0027689c;  // (from the original)

u32 f_00583a18(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1 = r0;
    r3 = *gptr<u32>(0x94d080u);  // (from the original)
    r2 = r13 + 4u;
    r0 = r3 + 0x68cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0027689c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8u;
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00583a18
GUEST_EXPORT(0x00583a18, d_00583a18::f_00583a18);

// f_00583b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583b8c {


u32 f_00583b8c() {
    u32 r0 = 0;
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(0x94d080u) + 0x835u))));  // (from the original)
    return r0;
}

}  // namespace d_00583b8c
GUEST_EXPORT(0x00583b8c, d_00583b8c::f_00583b8c);

// f_00583ca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583ca8 {


u32 f_00583ca8() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(*gptr<u32>(0x94cd08u) + 0x90u));  // (from the original)
    return r0;
}

}  // namespace d_00583ca8
GUEST_EXPORT(0x00583ca8, d_00583ca8::f_00583ca8);

// f_00583dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583dc4 {


u32 f_00583dc4() {
    u32 r0 = 0;
    float S0 = 0;
    r0 = *gptr<u32>(0x94cd08u);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x94u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00583dc4
GUEST_EXPORT(0x00583dc4, d_00583dc4::f_00583dc4);

// f_005840f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005840f8 {

inline constexpr guest::Function<0x0058440c, u32(u32, u32, u32, u32)> call_0058440c;  // (from the original)
inline constexpr guest::Function<0x0058b060, u32(u32, u32, u32, u32)> call_0058b060;  // (from the original)

u32 f_005840f8() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x94e484u;  // (from the original)
    if (u32(*gptr<u8>(r4)) != 0) {
        r0 = 0x989bd8u;  // (from the original)
        r0 = call_0058b060(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = 0x98a018u;  // (from the original)
    r0 = call_0058440c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 2u) = u8(r0);
    *gptr<u8>(r4 + 3u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_005840f8
GUEST_EXPORT(0x005840f8, d_005840f8::f_005840f8);

// f_00584150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00584150 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32, u32, u32)> call_00309bd4;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)
inline constexpr guest::Function<0x003188f0, u32(u32, u32, u32, u32)> call_003188f0;  // (from the original)
inline constexpr guest::Function<0x00589480, u32(u32, u32, u32, u32)> call_00589480;  // (from the original)
inline constexpr guest::Function<0x00589678, u32(u32, u32, u32, u32)> call_00589678;  // (from the original)
inline constexpr guest::Function<0x00589698, u32(u32, u32, u32, u32)> call_00589698;  // (from the original)

u32 f_00584150(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = 0x94e4a4u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00589678(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4) = u8(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_00589698(r0, r1, r2, r3);
    r3 = 0u;
    *gptr<u8>(r4 + 1u) = u8(r0);
    r2 = r3;
    r1 = 0x2du;  // (from the original)
    r0 = 0x3bu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00589480(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5841b8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_003188f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 7u) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fb378(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = 7u;
        guest::cpu()->r[13] = r13;
        r0 = call_00309bd4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r0 = 0u;
            goto L_5841b8;
        }
    }
    r0 = 1u;
L_5841b8:;
    *gptr<u8>(r4 + 2u) = u8(r0);
    r6 = 0u;
    *gptr<u8>(r4 + 3u) = u8(r6);
    *gptr<u8>(r4 + 4u) = u8(r6);
    *gptr<u32>(r13 + 0xcu) = u32(0x584210u);  // (from the original)
    r1 = 0x9047f8u;  // (from the original)
    r4 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(r1);
    r0 = *gptr<u32>(0x975338u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003045a8(r0, r1, r2, r3);
    r2 = r0;
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r6);
    r3 = r4;
    r1 = 0x400u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00584150
GUEST_EXPORT(0x00584150, d_00584150::f_00584150);

// f_00584250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00584250 {


u32 f_00584250() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x98a074u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r0 + 0x14u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x16u) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00584250
GUEST_EXPORT(0x00584250, d_00584250::f_00584250);

// f_00584d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00584d78 {

struct __attribute__((packed)) Object_00584d78_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_00584d78_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00584d78_0, byte_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)

u32 f_00584d78(gptr<Object_00584d78_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r1 = u32(arg0->byte_c);
    if (r1 != 0x2cu) {  // (from the original)
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
    r4 = arg0->word_8;
    r0 = u32(*gptr<u8>(r4 + 0x20u));  // (from the original)
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_00584074(r0, r1, r2, r3);
        r2 = 0xcu;  // (from the original)
        r1 = ~0u;
        ea = r13;
        *gptr<u32>(ea) = u32(r2);
        r5 = 0u;
        r2 = r2 - (r1 << 0x18);  // (from the original)
        ea = r13 + 4u;
        *gptr<u32>(ea) = u32(r1);
        *gptr<u32>(ea + 4) = u32(r5);
        r3 = 5u;
        r1 = 3u;
        guest::cpu()->r[13] = r13;
        r0 = call_0058bc7c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
        *gptr<u8>(r4 + 0x1fu) = u8(r5);  // (from the original)
        *gptr<u8>(r4 + 0x1eu) = u8(r0);  // (from the original)
        *gptr<u8>(r4 + 0x22u) = u8(r0);  // (from the original)
    }
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

}  // namespace d_00584d78
GUEST_EXPORT(0x00584d78, d_00584d78::f_00584d78);

// f_00585410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00585410 {

inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_00585410(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005673c8(r0, guest::cpu()->r[1], r2, r3);
    *gptr<u32>(r0 + 8u) = u32(0u);
    *gptr<u8>(r0 + 0xcu) = u8(0x39u);  // (from the original)
    *gptr<u16>(r0 + 0xeu) = u16(4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00585410
GUEST_EXPORT(0x00585410, d_00585410::f_00585410);

// f_00588d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00588d54 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058c514, u32(u32, u32, u32, u32)> call_0058c514;  // (from the original)
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32, u32, u32)> call_0058c5f0;  // (from the original)
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;  // (from the original)
inline constexpr guest::Function<0x00753088, u32(u32, u32, u32, u32)> call_00753088;  // (from the original)

u32 f_00588d54(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 1u) {
        goto L_588dac;
    }
    r1 = 0u;
    r0 = 4u;
    r0 = call_005c2ce0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_588dac;
    }
    r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x2eu;  // (from the original)
    r0 = call_00753088(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = 0x94e490u;  // (from the original)
    if (r0 == 0) {
        goto L_588dd0;
    }
    r0 = *gptr<u32>(r4);
    if (u32(*gptr<u8>(r5 + 1u)) == 0) {
        goto L_588db0;
    }
    r1 = 0x44d40000u;  // (from the original)
    if (s32(r0) < s32(r1)) {
        goto L_588dbc;
    }
L_588dac:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_588db0:;
    r1 = 0x43e00000u;  // (from the original)
    if (s32(r0) <= s32(r1)) {
        guest::preempt();
        goto L_588dac;
    }
L_588dbc:;
    r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r1 = 0x2eu;  // (from the original)
    return call_0058c5f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_588dd0:;
    r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x2fu;  // (from the original)
    r0 = call_00753088(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    zf = r0 == 0;
    r1 = 0x43d00000u;  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 1u));
    if (zf) {
        goto L_588e2c;
    }
    zf = r0 == 0;
    r0 = *gptr<u32>(r4);
    if (!zf) {
        res = r0 - r1;
        if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r1) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            goto L_588e18;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x44cb0000u;  // (from the original)
    if (s32(r0) >= s32(r1)) {
        guest::preempt();
        goto L_588dac;
    }
L_588e18:;
    r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r1 = 0x2fu;  // (from the original)
    return call_0058c5f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_588e2c:;
    zf = r0 == 0;
    r0 = *gptr<u32>(r4);
    if (!zf) {
        r1 = 0x44d80000u;  // (from the original)
        res = r0 - r1;
        if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r1) & (r0 ^ res)) >> 0x1f) {  // (from the original)
            goto L_588e50;
        }
        goto L_588e64;
    }
    if (s32(r0) >= s32(r1)) {
        goto L_588e74;
    }
L_588e50:;
    r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r1 = 0x2eu;  // (from the original)
    return call_0058c514(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_588e64:;
    r1 = 0x43b00000u;  // (from the original)
    res = r1 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ r0) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_588e80;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_588e74:;
    r1 = 0x44d30000u;  // (from the original)
    if (s32(r1) >= s32(r0)) {
        guest::preempt();
        goto L_588dac;
    }
L_588e80:;
    r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r1 = 0x2fu;  // (from the original)
    return call_0058c514(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00588d54
GUEST_EXPORT(0x00588d54, d_00588d54::f_00588d54);

// f_005897b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005897b0 {

inline constexpr guest::Function<0x0058332c, u32(u32, u32, u32, u32)> call_0058332c;  // (from the original)

u32 f_005897b0(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0058332c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 ^ 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_005897b0
GUEST_EXPORT(0x005897b0, d_005897b0::f_005897b0);

// f_005897c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005897c0 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> call_0058aee8;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)
inline constexpr guest::Function<0x0058c514, u32(u32, u32, u32, u32)> call_0058c514;  // (from the original)
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32, u32, u32)> call_0058c5f0;  // (from the original)
inline constexpr guest::Function<0x0058c90c, u32(u32, u32, u32, u32)> call_0058c90c;  // (from the original)

u32 f_005897c0(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r0 = 0x94e4a9u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 0x18u;  // (from the original)
    r4 = 0u;
    *gptr<u8>(r0 + 1u) = u8(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4u) = u32(r4);
    r2 = 0u;
    r3 = *gptr<u32>(0x84558cu);  // (from the original)
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_0058aee8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r4);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(~0u);
    *gptr<u32>(ea + 4) = u32(r4);
    r3 = 0x14u;  // (from the original)
    r2 = 0u;
    r1 = 0x11u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0058bc7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00584134(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0058c5f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00584134(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x11u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0058c514(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00584134(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 0x10u;  // (from the original)
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    r14 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    return call_0058c90c(r0, r1, r2, r3);
}

}  // namespace d_005897c0
GUEST_EXPORT(0x005897c0, d_005897c0::f_005897c0);

// f_005899ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005899ac {

inline constexpr guest::Function<0x005838d4, u32(u32, u32, u32, u32)> call_005838d4;  // (from the original)

u32 f_005899ac() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x94e4a9u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r1 = u32(s32(s8(*gptr<u8>(r0))));
    r0 = u32(s32(s8(*gptr<u8>(r0 + 1u))));
    if ((r0 & r1) == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_005838d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
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

}  // namespace d_005899ac
GUEST_EXPORT(0x005899ac, d_005899ac::f_005899ac);

// f_005899e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005899e0 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> call_0058aee8;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)

u32 f_005899e0(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r0 = 0x94e4a9u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 0x18u;  // (from the original)
    r4 = 0u;
    *gptr<u8>(r0 + 1u) = u8(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    r2 = 0u;
    *gptr<u32>(r13) = u32(*gptr<u32>(0x845584u));  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r4);
    r3 = *gptr<u32>(0x845580u);  // (from the original)
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_0058aee8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r4);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(~0u);
    *gptr<u32>(ea + 4) = u32(r4);
    r3 = 0x14u;  // (from the original)
    r2 = 0u;
    r1 = 0x11u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0058bc7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005899e0
GUEST_EXPORT(0x005899e0, d_005899e0::f_005899e0);

// f_00589a5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589a5c {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;  // (from the original)

u32 f_00589a5c(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r0 = 0x94e4a9u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 1u;
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    *gptr<u8>(r0 + 1u) = u8(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    r2 = 0u;
    ea = 0x84557cu;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    r14 = *gptr<u32>(ea + 4);
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    return call_0058bc3c(r0, r1, r2, r3);
}

}  // namespace d_00589a5c
GUEST_EXPORT(0x00589a5c, d_00589a5c::f_00589a5c);

// f_00589ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589ad4 {

inline constexpr guest::Function<0x00583b8c, u32(u32, u32, u32, u32)> call_00583b8c;  // (from the original)

u32 f_00589ad4() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x94e4a9u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r1 = u32(s32(s8(*gptr<u8>(r0))));
    r0 = u32(s32(s8(*gptr<u8>(r0 + 1u))));
    if ((r0 & r1) == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00583b8c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
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

}  // namespace d_00589ad4
GUEST_EXPORT(0x00589ad4, d_00589ad4::f_00589ad4);

// f_00589da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589da8 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32, u32, u32)> call_00309bd4;  // (from the original)
inline constexpr guest::Function<0x003188f0, u32(u32, u32, u32, u32)> call_003188f0;  // (from the original)
inline constexpr guest::Function<0x00342cb8, u32(u32, u32, u32, u32)> call_00342cb8;  // (from the original)
inline constexpr guest::Function<0x0058383c, u32(u32, u32, u32, u32)> call_0058383c;  // (from the original)
inline constexpr guest::Function<0x00589480, u32(u32, u32, u32, u32)> call_00589480;  // (from the original)
inline constexpr guest::Function<0x00589678, u32(u32, u32, u32, u32)> call_00589678;  // (from the original)
inline constexpr guest::Function<0x00589698, u32(u32, u32, u32, u32)> call_00589698;  // (from the original)

u32 f_00589da8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    goto L_589da8;
L_589da8:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(*gptr<u8>(r0 + 3u));
    r5 = r1;
    r6 = r2;
    if (r0 != 0) {
        goto L_589e30;
    }
    if (r5 == 0) {
        goto L_589e30;
    }
    r0 = call_00589678(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4) = u8(r0);
    r0 = call_00589698(r0, r1, r2, r3);
    r3 = 0u;
    *gptr<u8>(r4 + 1u) = u8(r0);
    r2 = r3;
    r1 = 0x2du;  // (from the original)
    r0 = 0x3bu;  // (from the original)
    r0 = call_00589480(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = call_003188f0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 7u) {
            goto L_589e54;
        }
        r0 = call_002fb378(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = 7u;
        r0 = call_00309bd4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_589e54;
        }
    }
    r2 = 0u;
L_589e20:;
    r0 = 0u;
    *gptr<u8>(r4 + 2u) = u8(r2);
    *gptr<u8>(r4 + 3u) = u8(r0);
    *gptr<u8>(r4 + 4u) = u8(r0);
L_589e30:;
    res = r5 | r6;
    r0 = res;
    *gptr<u8>(r4 + 3u) = u8(r5);
    if (res != 0) {
        goto L_589e5c;
    }
    r0 = call_0058383c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_589e5c;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r1 = 0x14u;  // (from the original)
    r0 = *gptr<u32>(0x94d080u) + 0x6f8u;  // (from the original)
    return call_00342cb8(r0, r1, r2, r3);
L_589e54:;
    r2 = 1u;
    guest::preempt();
    goto L_589e20;
L_589e5c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00589da8
GUEST_EXPORT(0x00589da8, d_00589da8::f_00589da8);

// f_00589f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589f74 {

struct __attribute__((packed)) Object_00589f74_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_00589f74_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)
inline constexpr guest::Function<0x0058c514, u32(u32, u32, u32, u32)> call_0058c514;  // (from the original)

u32 f_00589f74(gptr<Object_00589f74_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    if (r1 == 0) {
        r0 = 0x10000beu;  // (from the original)
    } else {
        r0 = 0x10000bfu;  // (from the original)
    }
    r13 = r13 - 0x18u;  // (from the original)
    arg0->word_10 = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    r1 = ~0u;
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(0u);
    r3 = 5u;
    r2 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r1 = 6u;
    guest::cpu()->r[13] = r13;
    r0 = call_0058bc7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00584134(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x15u;  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0058c514(r0, r1, r2, r3);
}

}  // namespace d_00589f74
GUEST_EXPORT(0x00589f74, d_00589f74::f_00589f74);

// f_0058a018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a018 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)

u32 f_0058a018(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00584074(guest::cpu()->r[0], r1, r2, r3);
    r1 = ~0u;
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(0u);
    r3 = 5u;
    r2 = 0x100009cu;  // (from the original)
    r1 = 3u;
    guest::cpu()->r[13] = r13;
    call_0058bc7c(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0058a018
GUEST_EXPORT(0x0058a018, d_0058a018::f_0058a018);

// f_0058a1d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a1d8 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)

u32 f_0058a1d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    r1 = ~0u;
    r5 = 0u;
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r5);
    r3 = 5u;
    r2 = 0x100026au;  // (from the original)
    r1 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_0058bc7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x14u) = u8(r5);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058a1d8
GUEST_EXPORT(0x0058a1d8, d_0058a1d8::f_0058a1d8);

// f_0058a294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a294 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bb2c, u32(u32, u32, u32, u32)> call_0058bb2c;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)

u32 f_0058a294(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r1 = 6u;
    guest::cpu()->r[13] = r13;
    r0 = call_0058bb2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(~0u);
    *gptr<u32>(r13 + 8u) = u32(r1);
    r2 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r3 = 5u;
    r1 = 6u;
    guest::cpu()->r[13] = r13;
    r0 = call_0058bc7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058a294
GUEST_EXPORT(0x0058a294, d_0058a294::f_0058a294);

// f_0058a3c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a3c4 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)

u32 f_0058a3c4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00584074(guest::cpu()->r[0], r1, r2, r3);
    r1 = ~0u;
    ea = r13;
    *gptr<u32>(ea) = u32(r1);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(0u);
    r3 = 5u;
    r2 = 0x100009eu;  // (from the original)
    r1 = 2u;
    guest::cpu()->r[13] = r13;
    call_0058bc7c(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0058a3c4
GUEST_EXPORT(0x0058a3c4, d_0058a3c4::f_0058a3c4);

// f_0058a400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a400 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;  // (from the original)

u32 f_0058a400(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    call_00584074(guest::cpu()->r[0], r1, r2, r3);
    r3 = r4;
    r2 = 0x100009cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = 3u;
    return call_0058bc3c(guest::cpu()->r[0], r1, r2, r3);
}

}  // namespace d_0058a400
GUEST_EXPORT(0x0058a400, d_0058a400::f_0058a400);

// f_0058a56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a56c {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> call_0058aee8;  // (from the original)
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32, u32, u32)> call_0058c5f0;  // (from the original)

u32 f_0058a56c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r0;
    r4 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00584074(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(r4);
    r2 = *gptr<u32>(r5 + 0x10u);  // (from the original)
    r3 = 5u;
    r1 = 6u;
    guest::cpu()->r[13] = r13;
    r0 = call_0058aee8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00584134(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x15u;  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0058c5f0(r0, r1, r2, r3);
}

}  // namespace d_0058a56c
GUEST_EXPORT(0x0058a56c, d_0058a56c::f_0058a56c);

// f_0058a608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a608 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;  // (from the original)

u32 f_0058a608(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_00584074(r0, r1, r2, r3);
    r2 = 0x100026au;  // (from the original)
    r3 = r5;
    r1 = 3u;
    r0 = call_0058bc3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    *gptr<u8>(r4 + 0x14u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058a608
GUEST_EXPORT(0x0058a608, d_0058a608::f_0058a608);

// f_0058a72c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a72c {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;  // (from the original)

u32 f_0058a72c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    call_00584074(guest::cpu()->r[0], r1, r2, r3);
    r3 = r4;
    r2 = 0x100009eu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = 2u;
    return call_0058bc3c(guest::cpu()->r[0], r1, r2, r3);
}

}  // namespace d_0058a72c
GUEST_EXPORT(0x0058a72c, d_0058a72c::f_0058a72c);

// f_0058a7f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a7f4 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;  // (from the original)

u32 f_0058a7f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00584074(r0, r1, r2, r3);
    r2 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    r3 = 0u;
    r1 = 6u;
    return call_0058bc3c(r0, r1, r2, r3);
}

}  // namespace d_0058a7f4
GUEST_EXPORT(0x0058a7f4, d_0058a7f4::f_0058a7f4);

// f_0058a880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a880 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bb2c, u32(u32, u32, u32, u32)> call_0058bb2c;  // (from the original)

u32 f_0058a880(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00584074(r0, r1, r2, guest::cpu()->r[3]);
    r2 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = 6u;
    return call_0058bb2c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0058a880
GUEST_EXPORT(0x0058a880, d_0058a880::f_0058a880);

// f_0058a96c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a96c {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> call_0058aee8;  // (from the original)
inline constexpr guest::Function<0x0058b618, u32(u32, u32, u32, u32)> call_0058b618;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x0060be28, u32(u32, u32, u32, u32)> call_0060be28;  // (from the original)

u32 f_0058a96c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00584074(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r5 = 0u;
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r5);
    r6 = 0x8458dcu;  // (from the original)
    r3 = 5u;
    r2 = *gptr<u32>(r6 + (*gptr<u32>(r4 + 4u) << 4) + (*gptr<u32>(r4 + 0xcu) << 2));  // (from the original)
    r1 = 0x13u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0058aee8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r4 + 0xcu) + 2u);  // (from the original)
    r0 = 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0060be28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x10004b1u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x58aa18u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0058d3b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00584074(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(~0u);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(r13) = u32(5u);
    *gptr<u32>(r13 + 0x10u) = u32(r5);  // (from the original)
    r3 = 0x12u;  // (from the original)
    r2 = *gptr<u32>(r6 + (*gptr<u32>(r4 + 4u) << 4) + (*gptr<u32>(r4 + 0xcu) << 2));  // (from the original)
    r1 = 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0058b618(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = 1u;
    *gptr<u8>(r4 + 1u) = u8(r0);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0058a96c
GUEST_EXPORT(0x0058a96c, d_0058a96c::f_0058a96c);

// f_0058aa20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058aa20 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bb2c, u32(u32, u32, u32, u32)> call_0058bb2c;  // (from the original)

u32 f_0058aa20(u32 r0_unused, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    call_00584074(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r2 = 0u;
    r1 = 5u;
    return call_0058bb2c(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0058aa20
GUEST_EXPORT(0x0058aa20, d_0058aa20::f_0058aa20);

// f_0058ad84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ad84 {

inline constexpr guest::Function<0x005852f4, u32(u32, u32, u32, u32)> call_005852f4;  // (from the original)
inline constexpr guest::Function<0x00589534, u32(u32, u32, u32, u32)> call_00589534;  // (from the original)
inline constexpr guest::Function<0x0058b764, u32(u32, u32, u32, u32)> call_0058b764;  // (from the original)
inline constexpr guest::Function<0x0058c90c, u32(u32, u32, u32, u32)> call_0058c90c;  // (from the original)
inline constexpr guest::Function<0x005c5df8, u32(u32, u32, u32, u32)> call_005c5df8;  // (from the original)

u32 f_0058ad84() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    goto L_58ad84;
L_58ad84:;
    guest::cpu()->r[13] -= 8u;
    r4 = 0x94e484u;  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 1u));
    if (r0 == 0) {
        r0 = call_005c5df8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u8>(r4 + 1u) = u8(r0);
    }
    r0 = call_00589534(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0x989bd8u;  // (from the original)
    r0 = call_0058b764(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0x98a018u;  // (from the original)
    r0 = call_005852f4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0x98a030u;  // (from the original)
    r0 = call_0058c90c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0x989bc0u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0058ad84
GUEST_EXPORT(0x0058ad84, d_0058ad84::f_0058ad84);

// f_0058b06c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b06c {

struct __attribute__((packed)) Object_0058b06c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_0058b06c_0, byte_4, 0x4);  // (from the original)


u32 f_0058b06c(gptr<Object_0058b06c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = u32(arg0->byte_4);
    if (r1 == 0x1du) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    } else {
        r1 = 1u;
    }
    do {
L_58b07c:;
        r2 = r0 + (r1 + (r1 << 3) << 2);
        if (u32(*gptr<u8>(r2 + 4u)) == 0x1du) {  // (from the original)
            r1 = r1 + (r1 << 3);
            r0 = r0 + (r1 << 2);
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (u32(*gptr<u8>(r2 + 0x28u)) == 0x1du) {  // (from the original)
            r1 = r1 + (r1 << 3);
            r0 = r0 + (r1 << 2) + 0x24u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (s32(r1) < s32(0x1du));  // (from the original)
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058b06c
GUEST_EXPORT(0x0058b06c, d_0058b06c::f_0058b06c);

// f_0058b27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b27c {

inline constexpr guest::Function<0x0058b280, u32(u32, u32, u32, u32)> call_0058b280;  // (from the original)

u32 f_0058b27c(u32 r0) {
    return call_0058b280(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058b27c
GUEST_EXPORT(0x0058b27c, d_0058b27c::f_0058b27c);

// f_0058b618: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b618 {

inline constexpr guest::Function<0x0058af50, u32(u32, u32, u32, u32)> call_0058af50;  // (from the original)
inline constexpr guest::Function<0x0058b06c, u32(u32, u32, u32, u32)> call_0058b06c;  // (from the original)

u32 f_0058b618(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r1 = r13 + 0x18u;  // (from the original)
    r7 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r8 = r0;
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    r5 = r2;
    r6 = r3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0058b06c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = r0;
    if (r0 != 0) {
        r0 = 0u;
        *gptr<u32>(r1) = u32(r0);
        *gptr<u8>(r1 + 0x1cu) = u8(r0);  // (from the original)
        *gptr<u8>(r1 + 0x1fu) = u8(r0);  // (from the original)
        *gptr<u8>(r1 + 0x22u) = u8(r0);  // (from the original)
        *gptr<u8>(r1 + 4u) = u8(r4);
        *gptr<u32>(r1 + 8u) = u32(r5);
        *gptr<u32>(r1 + 0x14u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r1 + 0x18u) = u32(std::bit_cast<u32>(S3));  // (from the original)
        r2 = r1 + 0xcu;  // (from the original)
        *gptr<u32>(r2) = u32(std::bit_cast<u32>(S1));
        *gptr<u32>(r2 + 4) = u32(std::bit_cast<u32>(S2));
        r2 = 1u;
        *gptr<u8>(r1 + 0x23u) = u8(r6);  // (from the original)
        *gptr<u8>(r1 + 0x21u) = u8(r7);  // (from the original)
        *gptr<u8>(r1 + 0x20u) = u8(r2);  // (from the original)
        *gptr<u8>(r1 + 0x1eu) = u8(r0);  // (from the original)
        r0 = r8;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        r0 = call_0058af50(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0 = 1u;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0058b618
GUEST_EXPORT(0x0058b618, d_0058b618::f_0058b618);

// f_0058b6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b6fc {

inline constexpr guest::Function<0x00583640, u32(u32, u32, u32, u32)> call_00583640;  // (from the original)
inline constexpr guest::Function<0x0058af50, u32(u32, u32, u32, u32)> call_0058af50;  // (from the original)
inline constexpr guest::Function<0x0058b06c, u32(u32, u32, u32, u32)> call_0058b06c;  // (from the original)

u32 f_0058b6fc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r2;
    r6 = r0;
    r0 = call_0058b06c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    if (r0 != 0) {
        r0 = 0u;
        *gptr<u32>(r1) = u32(r0);
        *gptr<u8>(r1 + 0x1cu) = u8(r0);  // (from the original)
        *gptr<u8>(r1 + 0x1fu) = u8(r0);  // (from the original)
        *gptr<u8>(r1 + 0x20u) = u8(r0);  // (from the original)
        *gptr<u8>(r1 + 0x21u) = u8(r0);  // (from the original)
        *gptr<u8>(r1 + 0x22u) = u8(r0);  // (from the original)
        r2 = 0x1bu;  // (from the original)
        *gptr<u32>(r1 + 0xcu) = u32(r5);  // (from the original)
        *gptr<u8>(r1 + 4u) = u8(r2);
        *gptr<u32>(r1 + 0x10u) = u32(~0u);  // (from the original)
        r0 = r6;
        *gptr<u32>(r1 + 8u) = u32(r4);
        r0 = call_0058af50(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r4;
        r0 = call_00583640(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058b6fc
GUEST_EXPORT(0x0058b6fc, d_0058b6fc::f_0058b6fc);

// f_0058bb2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058bb2c {

struct __attribute__((packed)) Object_0058bb2c_0 {
    u8 unknown_0[0x414];  // (not used here)
    u32 word_414;
};
GUEST_OFFSET(Object_0058bb2c_0, word_414, 0x414);  // (from the original)

inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058acfc, u32(u32, u32, u32, u32)> call_0058acfc;  // (from the original)
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32, u32, u32)> call_0058c5f0;  // (from the original)

u32 f_0058bb2c(gptr<Object_0058bb2c_0> arg0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x18;  // (from the original)
    r4 = 0u;
    r5 = r4;
    r3 = arg0->word_414;
    r6 = r4;
L_58bb40:;
    r12 = r1;
L_58bb44:;
    if (r3 == 0) {
        goto L_58bb88;
    }
    r7 = u32(*gptr<u8>(r3 + 4u));
    zf = r7 == r12;
    if (u32(r7 >= r12) && !zf) {
        goto L_58bb88;
    }
    if (zf) {
        r8 = *gptr<u32>(r3 + 8u);
        zf = r8 == r2;
    }
    if (!zf) {
        r3 = *gptr<u32>(r3);
        guest::preempt();
        goto L_58bb44;
    }
    if (r3 == 0) {
        goto L_58bb88;
    }
    ea = r3 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r3 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u8>(r3 + 0x1fu) = u8(1u);  // (from the original)
    r3 = *gptr<u32>(r3);
    guest::preempt();
    goto L_58bb40;
L_58bb88:;
    r5 = r12;
    r6 = 0u;
    r4 = r0 + 0x41cu;  // (from the original)
    if (u32(*gptr<u8>(r0 + 0x428u)) != r5) {  // (from the original)
        goto L_58bbcc;
    }
    if (u32(*gptr<u8>(r4 + 4u)) == 1u) {
        goto L_58bbcc;
    }
    r2 = 0u;
    r1 = r2;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0058acfc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4) = u32(r6);
    *gptr<u8>(r4 + 4u) = u8(8u);
L_58bbcc:;
    if (*gptr<u32>(r4 + 0x10u) == r5) {  // (from the original)
        *gptr<u8>(r4 + 0x15u) = u8(r6);  // (from the original)
    }
    r0 = u32(*gptr<u8>(r4 + 0x1cu));  // (from the original)
    if (r0 != r5) {
        goto L_58bc18;
    }
    r0 = u32(*gptr<u8>(r4 + 0x1du));  // (from the original)
    if (r0 == 0) {
        goto L_58bc18;
    }
    r2 = 1u;
    r1 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0058acfc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x1du) = u8(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00584134(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r4 + 0x1eu));  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0058c5f0(r0, r1, r2, r3);
L_58bc18:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058bb2c
GUEST_EXPORT(0x0058bb2c, d_0058bb2c::f_0058bb2c);

// f_0058bc7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058bc7c {

inline constexpr guest::Function<0x00582de4, u32(u32, u32, u32, u32)> call_00582de4;  // (from the original)
inline constexpr guest::Function<0x00583640, u32(u32, u32, u32, u32)> call_00583640;  // (from the original)
inline constexpr guest::Function<0x00583658, u32(u32, u32, u32, u32)> call_00583658;  // (from the original)
inline constexpr guest::Function<0x0058af50, u32(u32, u32, u32, u32)> call_0058af50;  // (from the original)
inline constexpr guest::Function<0x0058b06c, u32(u32, u32, u32, u32)> call_0058b06c;  // (from the original)

u32 f_0058bc7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r6 = r1;
    r1 = r13 + 0x20u;  // (from the original)
    r9 = r0;
    r7 = r2;
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    r8 = r3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0058b06c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r4 = r0;
    if (r0 == 0) {
        goto L_58bd24;
    }
    r5 = 0u;
    *gptr<u32>(r4) = u32(r5);
    *gptr<u8>(r4 + 0x1cu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x1fu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x20u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x21u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x22u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 4u) = u8(r6);
    *gptr<u32>(r4 + 8u) = u32(r7);
    *gptr<u32>(r4 + 0x14u) = u32(r8);  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(std::bit_cast<u32>(S2));  // (from the original)
    r1 = r4 + 0xcu;  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    r1 = r4;
    *gptr<u8>(r4 + 0x1eu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x23u) = u8(0x32u);  // (from the original)
    r0 = r9;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0058af50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    zf = r6 == 3u;
    if (!zf) {
        zf = r6 == 2u;
    }
    r0 = 1u;
    if (!zf) {
        zf = r6 == 4u;
    }
    *gptr<u8>(r4 + 0x22u) = u8(r0);  // (from the original)
    if (zf) {
        goto L_58bd28;
    }
    if (r6 == 1u) {
        goto L_58bd3c;
    }
    if (r6 == 0x18u) {  // (from the original)
        r0 = r7;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_00582de4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    } else {
        *gptr<u8>(r4 + 0x22u) = u8(r5);  // (from the original)
    }
L_58bd20:;
    r0 = 1u;
L_58bd24:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_58bd28:;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00583640(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    guest::preempt();
    goto L_58bd20;
L_58bd3c:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00583658(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    guest::preempt();
    goto L_58bd20;
}

}  // namespace d_0058bc7c
GUEST_EXPORT(0x0058bc7c, d_0058bc7c::f_0058bc7c);

// f_0058be00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058be00 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0058be00(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x58c478u;  // (from the original)
    r3 = 0x1du;  // (from the original)
    r2 = 0x24u;  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = 0u;
    ea = r0 + 0x414u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    r1 = r0;
    ea = r0 + 0x418u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x41cu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    r0 = ea;
    *gptr<u8>(r0 + 4u) = u8(1u);
    *gptr<u8>(r0 + 0x15u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x1du) = u8(r2);  // (from the original)
    r0 = r1;
    *gptr<u8>(r1 + 0x43cu) = u8(r2);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058be00
GUEST_EXPORT(0x0058be00, d_0058be00::f_0058be00);

// f_0058be48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058be48 {

inline constexpr guest::Function<0x00292d28, u32(u32, u32, u32, u32)> call_00292d28;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32, u32, u32)> call_00309bd4;  // (from the original)
inline constexpr guest::Function<0x0030ba54, u32(u32, u32, u32, u32)> call_0030ba54;  // (from the original)
inline constexpr guest::Function<0x003188f0, u32(u32, u32, u32, u32)> call_003188f0;  // (from the original)
inline constexpr guest::Function<0x0058e090, u32(u32, u32, u32, u32)> call_0058e090;  // (from the original)

u32 f_0058be48(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = call_00305f2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 3u) {
        goto L_58c014;
    }
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = r0;
    r0 = call_003188f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    r0 = call_00292d28(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r4;
        goto L_58bec4;
    }
    if (u32(*gptr<u8>(r4 + 0x13u)) != 0) {  // (from the original)
        goto L_58bec0;
    }
    if (u32(*gptr<u8>(r4 + 0x14u)) == 0) {  // (from the original)
        goto L_58beb4;
    }
    if (u32(*gptr<u8>(0x950708u)) != 1u) {  // (from the original)
        goto L_58beb4;
    }
    if (u32(*gptr<u8>(0x95070du)) == 0) {  // (from the original)
        goto L_58bec0;
    }
L_58beb4:;
    r0 = u32(*gptr<u8>(r4 + 0x15u));  // (from the original)
    if (r0 == 0) {
        goto L_58bec8;
    }
L_58bec0:;
    r0 = r4 + 0xcu;  // (from the original)
L_58bec4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_58bec8:;
    if (r5 == 7u) {
        r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = 7u;
        r0 = call_00309bd4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 = r4 + 0x20u;  // (from the original)
            guest::preempt();
            goto L_58bec4;
        }
    }
    r0 = u32(*gptr<u8>(r6 + 4u));
    zf = r0 == 1u;
    if (zf) {
        r0 = u32(*gptr<u8>(r6 + 5u));
        zf = r0 == 1u;
    }
    if (zf) {
        r0 = u32(s32(s8(*gptr<u8>(r6 + 7u))));
        if (s32(r0) < s32(6u)) {
            r0 = r4 + 0x30u;  // (from the original)
            guest::preempt();
            goto L_58bec4;
        }
    }
    r0 = call_0030ba54(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0xfu) {  // (from the original)
        r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = 0xfu;  // (from the original)
        r0 = call_00309bd4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 = r4 + 0x40u;  // (from the original)
            guest::preempt();
            goto L_58bec4;
        }
    }
    if (r5 != 8u) {
        if (r5 == 2u) {
            goto L_58bfa4;
        }
        if (r5 == 5u) {
            goto L_58bfc8;
        }
        if (r5 == 4u) {
            r0 = r4 + 0x64u;  // (from the original)
            guest::preempt();
            goto L_58bec4;
        }
        if (r5 == 9u) {
            r0 = r4 + 0x6cu;  // (from the original)
            guest::preempt();
            goto L_58bec4;
        }
        if (r5 == 0xau) {  // (from the original)
            r0 = r4 + 0x78u;  // (from the original)
            guest::preempt();
            goto L_58bec4;
        }
        goto L_58c014;
    }
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 8u;
    r0 = call_00309bd4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r4 + 0x18u;  // (from the original)
        guest::preempt();
        goto L_58bec4;
    }
    goto L_58c014;
L_58bfa4:;
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 2u;
    r0 = call_00309bd4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = r4 + 0x48u;  // (from the original)
        guest::preempt();
        goto L_58bec4;
    }
    goto L_58c014;
L_58bfc8:;
    r0 = u32(*gptr<u8>(r4 + 0x5cu));  // (from the original)
    if (r0 != 0) {
        goto L_58c00c;
    }
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 5u;
    r0 = call_0058e090(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_58c00c;
    }
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 5u;
    r0 = call_00309bd4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_58c014;
    }
L_58c00c:;
    r0 = r4 + 0x50u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_58c014:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058be48
GUEST_EXPORT(0x0058be48, d_0058be48::f_0058be48);

// f_0058c08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c08c {

struct __attribute__((packed)) Object_0058c08c_0 {
    u32 word_0;
    u8 unknown_4[0x1];  // (not used here)
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x1];  // (not used here)
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x1];  // (not used here)
    u8 byte_17;
    u32 word_18;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 unknown_1f[0x1];  // (not used here)
    u32 word_20;
    u8 unknown_24[0x1];  // (not used here)
    u8 byte_25;
    u8 byte_26;
    u8 unknown_27[0x9];  // (not used here)
    u32 word_30;
    u8 unknown_34[0x1];  // (not used here)
    u8 byte_35;
    u8 byte_36;
    u8 unknown_37[0x9];  // (not used here)
    u32 word_40;
    u8 unknown_44[0x1];  // (not used here)
    u8 byte_45;
    u8 byte_46;
    u8 unknown_47[0x1];  // (not used here)
    u32 word_48;
    u8 unknown_4c[0x1];  // (not used here)
    u8 byte_4d;
    u8 byte_4e;
    u8 unknown_4f[0x1];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x1];  // (not used here)
    u8 byte_55;
    u8 byte_56;
    u8 unknown_57[0x1];  // (not used here)
    u32 word_58;
    u8 byte_5c;
    u8 unknown_5d[0x7];  // (not used here)
    u32 word_64;
    u8 unknown_68[0x1];  // (not used here)
    u8 byte_69;
    u8 byte_6a;
    u8 unknown_6b[0x1];  // (not used here)
    u32 word_6c;
    u8 unknown_70[0x1];  // (not used here)
    u8 byte_71;
    u8 byte_72;
    u8 unknown_73[0x5];  // (not used here)
    u32 word_78;
    u8 unknown_7c[0x1];  // (not used here)
    u8 byte_7d;
    u8 byte_7e;
};
GUEST_OFFSET(Object_0058c08c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_13, 0x13);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_17, 0x17);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_25, 0x25);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_35, 0x35);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_36, 0x36);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_45, 0x45);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_46, 0x46);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_4d, 0x4d);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_4e, 0x4e);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_55, 0x55);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_56, 0x56);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_69, 0x69);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_6a, 0x6a);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_71, 0x71);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_72, 0x72);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_7d, 0x7d);  // (from the original)
GUEST_OFFSET(Object_0058c08c_0, byte_7e, 0x7e);  // (from the original)


void f_0058c08c(gptr<Object_0058c08c_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->byte_5 = u8(r1);
    arg0->byte_6 = u8(r1);
    arg0->word_0 = u32(0x9066d8u);  // (from the original)
    arg0->byte_7 = u8(r1);
    arg0->byte_8 = u8(r1);
    arg0->byte_11 = u8(r1);
    arg0->byte_12 = u8(r1);
    arg0->word_c = u32(0x9062f0u);  // (from the original)
    arg0->byte_13 = u8(r1);
    arg0->byte_14 = u8(r1);
    arg0->byte_15 = u8(r1);
    arg0->byte_17 = u8(r1);
    arg0->byte_1d = u8(r1);
    arg0->byte_1e = u8(r1);
    arg0->word_18 = u32(0x906a00u);  // (from the original)
    arg0->byte_25 = u8(r1);
    arg0->byte_26 = u8(r1);
    arg0->word_20 = u32(0x9069b8u);  // (from the original)
    arg0->byte_35 = u8(r1);
    arg0->byte_36 = u8(r1);
    arg0->word_30 = u32(0x9063c8u);  // (from the original)
    arg0->byte_45 = u8(r1);
    arg0->byte_46 = u8(r1);
    arg0->word_40 = u32(0x906ebcu);  // (from the original)
    arg0->byte_4d = u8(r1);
    arg0->byte_4e = u8(r1);
    arg0->word_48 = u32(0x906a48u);  // (from the original)
    arg0->byte_55 = u8(r1);
    arg0->byte_56 = u8(r1);
    arg0->word_58 = u32(0x100026du);  // (from the original)
    arg0->word_50 = u32(0x906380u);  // (from the original)
    arg0->byte_5c = u8(r1);
    arg0->byte_69 = u8(r1);
    arg0->byte_6a = u8(r1);
    arg0->word_64 = u32(0x906410u);  // (from the original)
    arg0->byte_71 = u8(r1);
    arg0->byte_72 = u8(r1);
    arg0->word_6c = u32(0x906690u);  // (from the original)
    arg0->byte_7d = u8(r1);
    arg0->byte_7e = u8(r1);
    r1 = 0x906338u;  // (from the original)
    arg0->word_78 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0058c08c
GUEST_EXPORT(0x0058c08c, d_0058c08c::f_0058c08c);

// f_0058c4cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c4cc {

struct __attribute__((packed)) Object_0058c4cc_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_0058c4cc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0058c4cc_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x002faa30, u32(u32, u32, u32, u32)> call_002faa30;  // (from the original)

u32 f_0058c4cc(gptr<Object_0058c4cc_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r3 = 0u;
    r2 = r1;
    r5 = arg0->word_20;
    r6 = arg0->word_24;
    r0 = 1u;
    r1 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_002faa30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 | r5;
    r1 = r1 | r6;
    ea = r4 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058c4cc
GUEST_EXPORT(0x0058c4cc, d_0058c4cc::f_0058c4cc);

// f_0058c704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c704 {

struct __attribute__((packed)) Object_0058c704_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_0058c704_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0058c704_0, word_1c, 0x1c);  // (from the original)


u32 f_0058c704(gptr<Object_0058c704_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = 0x845f30u;  // (from the original)
    r0 = r0 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(r2) & arg0->word_18;
    r2 = *gptr<u32>(r2 + 4u) & arg0->word_1c;
    arg0->word_18 = u32(r1);
    arg0->word_1c = u32(r2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058c704
GUEST_EXPORT(0x0058c704, d_0058c704::f_0058c704);

// f_0058c90c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c90c {

inline constexpr guest::Function<0x0058c730, u32(u32, u32, u32, u32)> call_0058c730;  // (from the original)

u32 f_0058c90c(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0058c730(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x94e4b0u;  // (from the original)
    r0 = 1u;
    *gptr<u32>(r1) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058c90c
GUEST_EXPORT(0x0058c90c, d_0058c90c::f_0058c90c);

// f_0058c9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c9e0 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00582e38, u32(u32, u32, u32, u32)> call_00582e38;  // (from the original)
inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_0058c9e0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x94e488u;  // (from the original)
    r0 = 1u;
    *gptr<u8>(r4) = u8(r0);
    r0 = call_0062f03c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r4 + 1u));
    if (r1 == r0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u8>(r4 + 1u) = u8(r0);
    r0 = call_002fb378(r0, r1, r2, r3);
    r2 = *gptr<u32>(r0 + 4);
    r3 = *gptr<u32>(r0 + 8);
    *gptr<u32>(0x98a068u) = u32(*gptr<u32>(r0));  // (from the original)
    *gptr<u32>(0x98a068u + 4) = u32(r2);  // (from the original)
    *gptr<u32>(0x98a068u + 8) = u32(r3);  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 1u));
    r0 = u32(*gptr<u8>(0x84539bu + r1));  // (from the original)
    *gptr<u8>(r4 + 2u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return call_00582e38(r0, r1, r2, r3);
}

}  // namespace d_0058c9e0
GUEST_EXPORT(0x0058c9e0, d_0058c9e0::f_0058c9e0);

// f_0058cb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb20 {


u32 f_0058cb20() {
    u32 r0 = 0;
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(0x94d090u) + 0x63du))));  // (from the original)
    return r0;
}

}  // namespace d_0058cb20
GUEST_EXPORT(0x0058cb20, d_0058cb20::f_0058cb20);

// f_0058cb38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb38 {

inline constexpr guest::Function<0x001d9578, u32(u32, u32, u32, u32)> call_001d9578;  // (from the original)

u32 f_0058cb38(u32 r0) {
    u32 r1 = 0;
    r1 = r0;
    r0 = *gptr<u32>(0x94d090u);  // (from the original)
    return call_001d9578(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cb38
GUEST_EXPORT(0x0058cb38, d_0058cb38::f_0058cb38);

// f_0058cb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb60 {

inline constexpr guest::Function<0x001d960c, u32(u32, u32, u32, u32)> call_001d960c;  // (from the original)

u32 f_0058cb60(u32 r0) {
    u32 r1 = 0;
    r1 = r0;
    r0 = *gptr<u32>(0x94d090u);  // (from the original)
    return call_001d960c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cb60
GUEST_EXPORT(0x0058cb60, d_0058cb60::f_0058cb60);

// f_0058cb74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb74 {

inline constexpr guest::Function<0x0033e248, u32(u32, u32, u32, u32)> call_0033e248;  // (from the original)

u32 f_0058cb74() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    goto L_58cb74;
L_1d9690:;
    r1 = u32(*gptr<u8>(r0 + 0x15u));  // (from the original)
    if (r1 != 2u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    ea = r0 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r0 = ea + 0x24u;  // (from the original)
    return call_0033e248(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_58cb74:;
    r0 = *gptr<u32>(0x94d090u);  // (from the original)
    guest::preempt();
    goto L_1d9690;
}

}  // namespace d_0058cb74
GUEST_EXPORT(0x0058cb74, d_0058cb74::f_0058cb74);

// f_0058cb84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb84 {


u32 f_0058cb84(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    goto L_58cb84;
L_33e360:;
    r0 = r0 + 0x34u;  // (from the original)
    ea = r0;
    if (u32(*gptr<u8>(ea)) != 5u) {
        r0 = r0 + 0x5e0u;  // (from the original)
        *gptr<u32>(r0) = u32(r1);
        *gptr<u32>(r0 + 4) = u32(r2);
    }
    guest::cpu()->r[1] = r1;
    return r0;
L_58cb84:;
    r2 = r1;
    r1 = r0;
    r0 = *gptr<u32>(0x94d090u);  // (from the original)
    guest::preempt();
    goto L_33e360;
}

}  // namespace d_0058cb84
GUEST_EXPORT(0x0058cb84, d_0058cb84::f_0058cb84);

// f_0058cb9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb9c {


u32 f_0058cb9c() {
    u32 r0 = 0;
    if (u32(*gptr<u8>(*gptr<u32>(0x94d090u) + 0x34u)) >= 2u) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_0058cb9c
GUEST_EXPORT(0x0058cb9c, d_0058cb9c::f_0058cb9c);

// f_0058cbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbbc {


u32 f_0058cbbc() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(0x94d090u) + 0x38u) & 0xffu;  // (from the original)
    return r0;
}

}  // namespace d_0058cbbc
GUEST_EXPORT(0x0058cbbc, d_0058cbbc::f_0058cbbc);

// f_0058cbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbd4 {

inline constexpr guest::Function<0x001d982c, u32(u32, u32, u32, u32)> call_001d982c;  // (from the original)

u32 f_0058cbd4() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94d090u);  // (from the original)
    return call_001d982c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cbd4
GUEST_EXPORT(0x0058cbd4, d_0058cbd4::f_0058cbd4);

// f_0058cbe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbe4 {

inline constexpr guest::Function<0x001d987c, u32(u32, u32, u32, u32)> call_001d987c;  // (from the original)

u32 f_0058cbe4() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94d090u);  // (from the original)
    return call_001d987c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cbe4
GUEST_EXPORT(0x0058cbe4, d_0058cbe4::f_0058cbe4);

// f_0058cbf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbf4 {

inline constexpr guest::Function<0x001d9934, u32(u32, u32, u32, u32)> call_001d9934;  // (from the original)

u32 f_0058cbf4() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94d090u);  // (from the original)
    return call_001d9934(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cbf4
GUEST_EXPORT(0x0058cbf4, d_0058cbf4::f_0058cbf4);

// f_0058cc04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cc04 {

inline constexpr guest::Function<0x001d99ec, u32(u32, u32, u32, u32)> call_001d99ec;  // (from the original)

u32 f_0058cc04() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94d090u);  // (from the original)
    return call_001d99ec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cc04
GUEST_EXPORT(0x0058cc04, d_0058cc04::f_0058cc04);

// f_0058ce80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ce80 {

inline constexpr guest::Function<0x00122f70, u32(u32, u32, u32, u32)> call_00122f70;  // (from the original)
inline constexpr guest::Function<0x0058d2d4, u32(u32, u32, u32, u32)> call_0058d2d4;  // (from the original)

u32 f_0058ce80(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0058d2d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r0 = 0x94e446u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    *gptr<u8>(r0) = u8(r1);
    return call_00122f70(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058ce80
GUEST_EXPORT(0x0058ce80, d_0058ce80::f_0058ce80);

// f_0058ceb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ceb4 {

inline constexpr guest::Function<0x001dae5c, u32(u32, u32, u32, u32)> call_001dae5c;  // (from the original)

u32 f_0058ceb4() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(0x94e446u));  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    r0 = *gptr<u32>(0x94d550u);  // (from the original)
    return call_001dae5c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058ceb4
GUEST_EXPORT(0x0058ceb4, d_0058ceb4::f_0058ceb4);

// f_0058cf80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cf80 {


u32 f_0058cf80() {
    u32 r0 = 0;
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(0x94d06cu) + 0x10u))));  // (from the original)
    return r0;
}

}  // namespace d_0058cf80
GUEST_EXPORT(0x0058cf80, d_0058cf80::f_0058cf80);

// f_0058d090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d090 {


u32 f_0058d090() {
    u32 r0 = 0;
    float S0 = 0;
    r0 = *gptr<u32>(0x94d06cu) + 0x2000u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x3bcu));  // (from the original)
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0058d090
GUEST_EXPORT(0x0058d090, d_0058d090::f_0058d090);

// f_0058d0bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d0bc {


u32 f_0058d0bc() {
    u32 r0 = 0;
    float S0 = 0;
    r0 = *gptr<u32>(0x94d06cu) + 0x2000u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 0x3b8u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0058d0bc
GUEST_EXPORT(0x0058d0bc, d_0058d0bc::f_0058d0bc);

// f_0058d174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d174 {


u32 f_0058d174() {
    u32 r0 = 0;
    r0 = u32(s32(s16(*gptr<u16>(*gptr<u32>(0x94d06cu) + 0x22b0u))));  // (from the original)
    return r0;
}

}  // namespace d_0058d174
GUEST_EXPORT(0x0058d174, d_0058d174::f_0058d174);

// f_0058d220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d220 {

inline constexpr guest::Function<0x00321cd4, u32(u32, u32, u32, u32)> call_00321cd4;  // (from the original)

u32 f_0058d220() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(0x94e445u));  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    r0 = *gptr<u32>(0x94d548u);  // (from the original)
    return call_00321cd4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058d220
GUEST_EXPORT(0x0058d220, d_0058d220::f_0058d220);

// f_0058d248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d248 {

inline constexpr guest::Function<0x00321ff0, u32(u32, u32, u32, u32)> call_00321ff0;  // (from the original)

u32 f_0058d248(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = *gptr<u32>(0x952c3cu);  // (from the original)
    r0 = call_00321ff0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x94e445u;  // (from the original)
    r0 = 1u;
    *gptr<u8>(r1) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058d248
GUEST_EXPORT(0x0058d248, d_0058d248::f_0058d248);

// f_0058d270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d270 {

inline constexpr guest::Function<0x001234e0, u32(u32, u32, u32, u32)> call_001234e0;  // (from the original)

u32 f_0058d270() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x94e445u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r1) = u8(r0);
    return call_001234e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058d270
GUEST_EXPORT(0x0058d270, d_0058d270::f_0058d270);

// f_0058d2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d2ac {

inline constexpr guest::Function<0x00246cb8, u32(u32, u32, u32, u32)> call_00246cb8;  // (from the original)

u32 f_0058d2ac(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = *gptr<u32>(0x952c3cu);  // (from the original)
    r0 = call_00246cb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x94e444u;  // (from the original)
    r0 = 1u;
    *gptr<u8>(r1) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058d2ac
GUEST_EXPORT(0x0058d2ac, d_0058d2ac::f_0058d2ac);

// f_0058d2d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d2d4 {

inline constexpr guest::Function<0x00123020, u32(u32, u32, u32, u32)> call_00123020;  // (from the original)

u32 f_0058d2d4() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x94e444u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r1) = u8(r0);
    return call_00123020(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058d2d4
GUEST_EXPORT(0x0058d2d4, d_0058d2d4::f_0058d2d4);

// f_0058d3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d3b4 {

inline constexpr guest::Function<0x006b4c38, u32(u32, u32, u32, u32)> call_006b4c38;  // (from the original)

u32 f_0058d3b4(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = r0;
    guest::cpu()->r[13] -= 8u;
    r4 = 0x94e424u;  // (from the original)
    r2 = u32(s32(s16(*gptr<u16>(r4 + 4u))));
    r0 = *gptr<u32>(0x94d080u);  // (from the original)
    r0 = call_006b4c38(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = ~0u;
    *gptr<u16>(r4 + 4u) = u16(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058d3b4
GUEST_EXPORT(0x0058d3b4, d_0058d3b4::f_0058d3b4);

// f_0058d3e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d3e4 {

inline constexpr guest::Function<0x006b4c38, u32(u32, u32, u32, u32)> call_006b4c38;  // (from the original)

u32 f_0058d3e4(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = r1;
    r1 = r0;
    r0 = *gptr<u32>(0x94d080u);  // (from the original)
    return call_006b4c38(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0058d3e4
GUEST_EXPORT(0x0058d3e4, d_0058d3e4::f_0058d3e4);

// f_0058d3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d3fc {

inline constexpr guest::Function<0x001d7a10, u32(u32, u32, u32, u32)> call_001d7a10;  // (from the original)

u32 f_0058d3fc(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = r0;
    r2 = *gptr<u32>(0x94d080u);  // (from the original)
    r0 = r2 + 0x754u;  // (from the original)
    return call_001d7a10(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0058d3fc
GUEST_EXPORT(0x0058d3fc, d_0058d3fc::f_0058d3fc);

// f_0058d440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d440 {

inline constexpr guest::Function<0x001d7b84, u32(u32, u32, u32, u32)> call_001d7b84;  // (from the original)

u32 f_0058d440(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x94e424u;  // (from the original)
    r1 = r0;
    r3 = *gptr<u32>(0x94d080u);  // (from the original)
    r2 = u32(s32(s16(*gptr<u16>(r4 + 2u))));
    r0 = r3 + 0x754u;  // (from the original)
    r0 = call_001d7b84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = ~0u;
    *gptr<u16>(r4 + 2u) = u16(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058d440
GUEST_EXPORT(0x0058d440, d_0058d440::f_0058d440);

// f_0058d498: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d498 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002d3068, u32(u32, u32, u32, u32)> call_002d3068;  // (from the original)

u32 f_0058d498(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r4 = r2;
    r6 = r1;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5894(r0, r1, r2, r3);
    r3 = r13 + 4u;
    r2 = r6;
    r1 = r5;
    r0 = *gptr<u32>(0x94d080u);  // (from the original)
    *gptr<u32>(r13) = u32(r4);
    r0 = r0 + 0xbc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d3068(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058d498
GUEST_EXPORT(0x0058d498, d_0058d498::f_0058d498);

// f_0058d52c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d52c {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0076c6e4, u32(u32, u32, u32, u32)> call_0076c6e4;  // (from the original)

u32 f_0058d52c(u32 r0, u32 r1, u32 r2) {
    goto L_58d52c;
L_276bac:;
    *gptr<u32>(r0 + 0xacu) = u32(*gptr<u32>(r1));  // (from the original)
    *gptr<u32>(r0 + 0xb0u) = u32(*gptr<u32>(r1 + 4u));  // (from the original)
    *gptr<u32>(r0 + 0xb4u) = u32(*gptr<u32>(r1 + 8u));  // (from the original)
    r1 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    *gptr<u32>(r0 + 0xb8u) = u32(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_58d52c:;
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x6e21au;  // (from the original)
    r1 = 0x986a60u;  // (from the original)
    r0 = r0 + 0x80u + r2;  // (from the original)
    r0 = call_0076c6e4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x986a60u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = *gptr<u32>(0x94d080u) + 0x68cu;  // (from the original)
    guest::preempt();
    goto L_276bac;
}

}  // namespace d_0058d52c
GUEST_EXPORT(0x0058d52c, d_0058d52c::f_0058d52c);

// f_0058d654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d654 {

inline constexpr guest::Function<0x00582efc, u32(u32, u32, u32, u32)> call_00582efc;  // (from the original)
inline constexpr guest::Function<0x005840f8, u32(u32, u32, u32, u32)> call_005840f8;  // (from the original)

u32 f_0058d654() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0x94e43bu;  // (from the original)
    r0 = u32(*gptr<u8>(r4));
    if (r0 == 0) {
        goto L_58d6a4;
    }
    r0 = u32(*gptr<u8>(r4 + 4u));
    if (r0 != 0) {
        goto L_58d6a4;
    }
    r0 = u32(*gptr<u8>(r4 + 1u));
    if (r0 == 0) {
        goto L_58d6a4;
    }
    r5 = 0u;
    *gptr<u8>(r4 + 1u) = u8(r5);
    r0 = u32(*gptr<u8>(r4 + 6u));
    if (r0 != 0) {
        r0 = call_00582efc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = call_005840f8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4 + 6u) = u8(r5);
    *gptr<u8>(r4 + 5u) = u8(r5);
L_58d6a4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0058d654
GUEST_EXPORT(0x0058d654, d_0058d654::f_0058d654);

// f_0058d6ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d6ac {

inline constexpr guest::Function<0x005838c4, u32(u32, u32, u32, u32)> call_005838c4;  // (from the original)

u32 f_0058d6ac(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005838c4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 ^ 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0058d6ac
GUEST_EXPORT(0x0058d6ac, d_0058d6ac::f_0058d6ac);

// f_0058d6bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d6bc {

inline constexpr guest::Function<0x00582efc, u32(u32, u32, u32, u32)> call_00582efc;  // (from the original)
inline constexpr guest::Function<0x005837e4, u32(u32, u32, u32, u32)> call_005837e4;  // (from the original)
inline constexpr guest::Function<0x005840f8, u32(u32, u32, u32, u32)> call_005840f8;  // (from the original)
inline constexpr guest::Function<0x00585438, u32(u32, u32, u32, u32)> call_00585438;  // (from the original)
inline constexpr guest::Function<0x005b4120, u32(u32, u32, u32, u32)> call_005b4120;  // (from the original)

u32 f_0058d6bc(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0x94e43bu;  // (from the original)
    r0 = u32(*gptr<u8>(r5));
    if (r0 == 0) {
        goto L_58d748;
    }
    r0 = u32(*gptr<u8>(r5 + 4u));
    if (r0 != 0) {
        goto L_58d748;
    }
    r0 = u32(*gptr<u8>(r5 + 2u));
    if (r0 != 0) {
        goto L_58d748;
    }
    *gptr<u8>(r5 + 2u) = u8(1u);
    r0 = u32(*gptr<u8>(r5 + 1u));
    if (r0 != 0) {
        r4 = 0u;
        *gptr<u8>(r5 + 1u) = u8(r4);
        r0 = u32(*gptr<u8>(r5 + 6u));
        if (r0 != 0) {
            r0 = call_00582efc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        r0 = call_005840f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r5 + 6u) = u8(r4);
        *gptr<u8>(r5 + 5u) = u8(r4);
    }
    r0 = call_005b4120(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (u32(*gptr<u8>(r5 + 6u)) != 0) {
        r0 = r4;
        r0 = call_005837e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = u32(s32(s8(*gptr<u8>(r5 + 6u))));
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00585438(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_58d748:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058d6bc
GUEST_EXPORT(0x0058d6bc, d_0058d6bc::f_0058d6bc);

// f_0058d750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d750 {

inline constexpr guest::Function<0x00585690, u32(u32, u32, u32, u32)> call_00585690;  // (from the original)
inline constexpr guest::Function<0x0058ca3c, u32(u32, u32, u32, u32)> call_0058ca3c;  // (from the original)
inline constexpr guest::Function<0x0058d488, u32(u32, u32, u32, u32)> call_0058d488;  // (from the original)
inline constexpr guest::Function<0x005b4120, u32(u32, u32, u32, u32)> call_005b4120;  // (from the original)

u32 f_0058d750() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0x94e43bu;  // (from the original)
    r0 = u32(*gptr<u8>(r5));
    if (r0 == 0) {
        goto L_58d7b4;
    }
    r0 = u32(*gptr<u8>(r5 + 4u));
    if (r0 != 0) {
        goto L_58d7b4;
    }
    r0 = u32(*gptr<u8>(r5 + 2u));
    if (r0 == 0) {
        goto L_58d7b4;
    }
    r6 = 0u;
    *gptr<u8>(r5 + 2u) = u8(r6);
    r0 = call_005b4120(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r0 = u32(*gptr<u8>(r5 + 6u));
    if (r0 != 0) {
        r0 = call_0058d488(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = r4;
        r0 = call_0058ca3c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4;
    r0 = call_00585690(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r5 + 3u) = u8(r6);
L_58d7b4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0058d750
GUEST_EXPORT(0x0058d750, d_0058d750::f_0058d750);

// f_0058d7bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d7bc {

inline constexpr guest::Function<0x00584080, u32(u32, u32, u32, u32)> call_00584080;  // (from the original)
inline constexpr guest::Function<0x0058d478, u32(u32, u32, u32, u32)> call_0058d478;  // (from the original)

u32 f_0058d7bc() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x94e43bu;  // (from the original)
    r0 = u32(*gptr<u8>(r4));
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0058d478(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00584080(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    *gptr<u8>(r4) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0058d7bc
GUEST_EXPORT(0x0058d7bc, d_0058d7bc::f_0058d7bc);

// f_0058d884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d884 {

inline constexpr guest::Function<0x002fe2e0, u32(u32, u32, u32, u32)> call_002fe2e0;  // (from the original)
inline constexpr guest::Function<0x0058ad84, u32(u32, u32, u32, u32)> call_0058ad84;  // (from the original)
inline constexpr guest::Function<0x0058ca50, u32(u32, u32, u32, u32)> call_0058ca50;  // (from the original)
inline constexpr guest::Function<0x0058ceb4, u32(u32, u32, u32, u32)> call_0058ceb4;  // (from the original)
inline constexpr guest::Function<0x0058cf04, u32(u32, u32, u32, u32)> call_0058cf04;  // (from the original)
inline constexpr guest::Function<0x0058d2e8, u32(u32, u32, u32, u32)> call_0058d2e8;  // (from the original)

u32 f_0058d884(u32 r0_unused, u32 r1) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r0 = *gptr<u32>(0x94d080u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x94e43bu;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = u32(*gptr<u8>(r0 + 4u));
    if (r0 != 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe2e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_0058cf04(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_0058d2e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_0058ceb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_0058ad84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    r14 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    return call_0058ca50(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058d884
GUEST_EXPORT(0x0058d884, d_0058d884::f_0058d884);

// f_0058d8dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d8dc {

struct __attribute__((packed)) Object_0058d8dc_0 {
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
GUEST_OFFSET(Object_0058d8dc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0058d8dc_0, word_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)

u32 f_0058d8dc(gptr<Object_0058d8dc_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 nf = 0;
    u32 vf = 0;
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r3 = r4 + 0xcu;  // (from the original)
    r1 = arg0->word_4;
    r2 = arg0->word_8;
    arg0->word_c = u32(arg0->word_0);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r2);
    arg0->word_1c = u32(arg0->word_18);
    arg0->word_24 = u32(arg0->word_20);
    arg0->word_2c = u32(arg0->word_28);
    arg0->word_34 = u32(arg0->word_30);
    arg0->word_3c = u32(arg0->word_38);
    r0 = arg0->word_40;
    arg0->word_44 = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r0 + 8u));
    *gptr<u32>(r4) = u32(r1);
    *gptr<u32>(r4 + 4) = u32(r2);
    r0 = u32(s32(s8(*gptr<u8>(r4 + 7u))));
    r1 = u32(s32(s8(*gptr<u8>(r4 + 8u))));
    r2 = u32(s32(s8(*gptr<u8>(r4 + 9u))));
    nf = r0 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        nf = r1 >> 0x1f;  // (from the original)
        vf = 0u;
    }
    if (nf != vf) {
        goto L_58d9c0;
    }
    res = r2;
    if (res >> 0x1f != (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        goto L_58d9c0;
    }
    r3 = 0x67u;  // (from the original)
    r12 = u32(s32(s16(r1)) * s32(s16(r3)));
    r5 = u32(s32(s16(r2)) * s32(s16(r3)));
    r3 = u32(s32(s16(r0)) * s32(s16(r3)));
    r14 = u32(s32(r12) >> 0xa) - u32(s32(r12) >> 0x1f);  // (from the original)
    r12 = u32(s32(r5) >> 0xa) - u32(s32(r5) >> 0x1f);  // (from the original)
    r3 = u32(s32(r3) >> 0xa) - u32(s32(r3) >> 0x1f);  // (from the original)
    r5 = 0u - r3;
    ea = r4 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r6 = 0u - r14;
    r0 = r0 + (r5 + (r5 << 2) << 1);
    ea = ea + 8u;
    *gptr<u32>(ea) = u32(r0);
    r8 = 0u - r12;
    ea = ea + 8u;
    *gptr<u32>(ea) = u32(r14);
    r4 = ea;
    r1 = r1 + (r6 + (r6 << 2) << 1);
    *gptr<u32>(r4 + 8u) = u32(r1);
    *gptr<u32>(r4 + 0x10u) = u32(r12);  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(r2 + (r8 + (r8 << 2) << 1));  // (from the original)
L_58d9c0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058d8dc
GUEST_EXPORT(0x0058d8dc, d_0058d8dc::f_0058d8dc);

// f_0058d9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d9c4 {

struct __attribute__((packed)) Object_0058d9c4_0 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
    u32 word_4c;
};
GUEST_OFFSET(Object_0058d9c4_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0058d9c4_0, word_4c, 0x4c);  // (from the original)


void f_0058d9c4(gptr<Object_0058d9c4_0> arg0) {
    u32 res = 0;
    u32 r1 = 0;
    res = arg0->word_48 - 1u;
    r1 = res;
    arg0->word_48 = u32(r1);
    if (res == 0) {
        arg0->word_48 = u32(0x1eu);  // (from the original)
        r1 = 0xffu;  // (from the original)
        arg0->word_4c = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = r1 - 1u;
    if (!u32(r1 >= 0xbu) || u32(r1 == 0xbu)) {  // (from the original)
        r1 = 0u;
        arg0->word_4c = u32(r1);
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = 0xffu;  // (from the original)
    arg0->word_4c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0058d9c4
GUEST_EXPORT(0x0058d9c4, d_0058d9c4::f_0058d9c4);

// f_0058d9f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d9f8 {

struct __attribute__((packed)) Object_0058d9f8_0 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
};
GUEST_OFFSET(Object_0058d9f8_0, word_48, 0x48);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)

u32 f_0058d9f8(gptr<Object_0058d9f8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0x1eu;  // (from the original)
    arg0->word_48 = u32(r0);
    r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r0 + 8u));
    *gptr<u32>(r4) = u32(r1);
    *gptr<u32>(r4 + 4) = u32(r2);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058d9f8
GUEST_EXPORT(0x0058d9f8, d_0058d9f8::f_0058d9f8);

// f_0058dc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058dc54 {

struct __attribute__((packed)) Object_0058dc54_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x60];  // (not used here)
    u8 byte_6c;
};
GUEST_OFFSET(Object_0058dc54_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058dc54_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058dc54_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058dc54_0, byte_6c, 0x6c);  // (from the original)


void f_0058dc54(gptr<Object_0058dc54_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = ~0u;
    r1 = 0u;
    arg0->word_0 = u32(r2);
    arg0->word_8 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->byte_6c = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0058dc54
GUEST_EXPORT(0x0058dc54, d_0058dc54::f_0058dc54);

// f_0058e1ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e1ac {

struct __attribute__((packed)) Object_0058e1ac_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
};
GUEST_OFFSET(Object_0058e1ac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_0, half_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Object_0058e1ac_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
};
GUEST_OFFSET(Object_0058e1ac_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0058e1ac_1, half_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_0058e1ac(gptr<Object_0058e1ac_0> arg0, gptr<Object_0058e1ac_1> arg1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r2;
    r4 = r0;
    r5 = r1;
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_4 = u32(0u);
    r1 = r1 + 0x1eu;  // (from the original)
    r0 = r0 + 0x1eu;  // (from the original)
    arg0->word_8 = u32(arg1->word_8);
    arg0->word_c = u32(arg1->word_c);
    r3 = arg1->word_14;
    arg0->word_10 = u32(arg1->word_10);
    arg0->word_14 = u32(r3);
    arg0->word_18 = u32(arg1->word_18);
    r2 = u32(arg1->half_1c);
    arg0->half_1c = u16(r2);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_007795ec(r0, r1, r2, r3);
    r5 = r5 + 0x24u;  // (from the original)
    r1 = r4 + 0x24u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r5));
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r5 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r5 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r5 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r5 + 0x14));  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r1 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r1 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r1 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r4) = u32(0x90788cu);  // (from the original)
    r0 = r4;
    *gptr<u32>(r4 + 0x3cu) = u32(r6);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0058e1ac
GUEST_EXPORT(0x0058e1ac, d_0058e1ac::f_0058e1ac);

// f_0058e3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e3cc {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> call_00314278;  // (from the original)

u32 f_0058e3cc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = 0x9524d4u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    zf = r0 == 0;
    if (!zf) {
        r0 = u32(*gptr<u8>(r4 + 2u));
        zf = r0 == 0;
    }
    if (zf) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r3 = r13 + 8u;
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r0 + 8u));  // (from the original)
    r0 = r13 + 8u;
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_00308efc(r0, r1, r2, r3);
    ea = 0x9b39fcu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    ea = r13;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    ea = 0x9b39f8u;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r13 + 8u;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    r0 = call_00314278(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 2u) = u8(r0);
    if (r0 != 0) {
        r0 = 1u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058e3cc
GUEST_EXPORT(0x0058e3cc, d_0058e3cc::f_0058e3cc);

// f_0058e508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e508 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fd41c, u32(u32, u32, u32, u32)> call_002fd41c;  // (from the original)
inline constexpr guest::Function<0x002fd5c4, u32(u32, u32, u32, u32)> call_002fd5c4;  // (from the original)
inline constexpr guest::Function<0x00301400, u32(u32, u32, u32, u32)> call_00301400;  // (from the original)
inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)
inline constexpr guest::Function<0x00301da8, u32(u32, u32, u32, u32)> call_00301da8;  // (from the original)
inline constexpr guest::Function<0x00302204, u32(u32, u32, u32, u32)> call_00302204;  // (from the original)
inline constexpr guest::Function<0x0058e6e8, u32(u32, u32, u32, u32)> call_0058e6e8;  // (from the original)

u32 f_0058e508(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = u32(*gptr<u8>(0x5701u + r0)) << 0x1e;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_58e6d0;
    }
    res = u32(*gptr<u8>(0x570au + r0)) >> 7;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_58e6d0;
    }
    res = u32(*gptr<u8>(r0 + 0x5700u)) << 0x1b;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_58e6d0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = 0x717e8u;  // (from the original)
    r5 = r0 + r1;
    zf = u32(*gptr<u16>(r5)) == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r5 + 2u)) == 0;
    }
    if (!zf) {
        zf = u32(*gptr<u8>(r5 + 3u)) == 0;
    }
    if (zf) {
        goto L_58e6d0;
    }
    r3 = u32(*gptr<u8>(r4 + 5u));
    r2 = u32(*gptr<u8>(r4 + 4u));
    r1 = uxth(*gptr<u32>(r4));
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00301400(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_58e6d0;
    }
    r0 = *gptr<u32>(r4);
    r1 = u32(*gptr<u16>(r5));
    if (s32(r1) >= s32(r0)) {
        goto L_58e6d0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00302204(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb96c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    if (r0 == 0) {
        goto L_58e6d0;
    }
    *gptr<u16>(r13) = u16(r5);
    *gptr<u8>(r13 + 2u) = u8(r5);
    r1 = 1u;
    r0 = r13;
    *gptr<u8>(r13 + 3u) = u8(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0058e6e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_58e6d0;
    }
    r3 = u32(*gptr<u8>(r4 + 5u));
    r2 = u32(*gptr<u8>(r4 + 4u));
    r1 = uxth(*gptr<u32>(r4));
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00301400(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_58e6d0;
    }
    r1 = *gptr<u32>(r4);
    res = r1 - u32(*gptr<u16>(r13));
    if (res == 0) {
        goto L_58e6d0;
    }
    *gptr<u16>(r13 + 0x28u) = u16(r5);  // (from the original)
    *gptr<u8>(r13 + 0x2au) = u8(r5);  // (from the original)
    *gptr<u8>(r13 + 0x2bu) = u8(r5);  // (from the original)
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_00301da8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 ^ 1u;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0058e6e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r5);
    *gptr<u32>(r13 + 8u) = u32(r5);
    *gptr<u32>(r13 + 0xcu) = u32(r5);  // (from the original)
    r1 = *gptr<u32>(r4);
    r3 = u32(*gptr<u8>(r13 + 0x2bu));  // (from the original)
    r2 = u32(*gptr<u8>(r13 + 0x2au));  // (from the original)
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd5c4(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r5);
    *gptr<u32>(r13 + 8u) = u32(r5);
    *gptr<u32>(r13 + 0xcu) = u32(r5);  // (from the original)
    r1 = *gptr<u32>(r4);
    r3 = u32(*gptr<u8>(r13 + 0x2bu));  // (from the original)
    r2 = u32(*gptr<u8>(r13 + 0x2au));  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd5c4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 6u;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003014b4(r0, r1, r2, r3);
    ea = r13 + 0x20u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = *gptr<u32>(r4);
    r1 = *gptr<u32>(r4 + 4);
    r2 = *gptr<u32>(r4 + 8);
    guest::cpu()->r[13] = r13;
    r0 = call_002fd41c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_58e6d0;
    }
    ea = r4 + 4u;
    r1 = *gptr<u32>(ea + 4);
    r5 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = *gptr<u32>(r5);
    r1 = *gptr<u32>(r5 + 4);
    r2 = *gptr<u32>(r5 + 8);
    r3 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002fd41c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
L_58e6d0:;
    r0 = 0u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058e508
GUEST_EXPORT(0x0058e508, d_0058e508::f_0058e508);

// f_0058e854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e854 {

struct __attribute__((packed)) Object_0058e854_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0058e854_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058e854_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058e854_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058e854_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_0058e854(gptr<Object_0058e854_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
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
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x68u;  // (from the original)
    r5 = 0xffffu;  // (from the original)
    ea = r13 + 0x40u;  // (from the original)
    *gptr<u16>(ea) = u16(0x600u);  // (from the original)
    ea = r13 + 0x42u;  // (from the original)
    *gptr<u16>(ea) = u16(0u);
    ea = r13 + 4u;
    *gptr<u16>(ea) = u16(r5);
    ea = r13 + 0x44u;  // (from the original)
    *gptr<u16>(ea) = u16(r5);
    ea = r13 + 0x46u;  // (from the original)
    *gptr<u16>(ea) = u16(r5);
    ea = r13 + 8u;
    *gptr<u8>(ea) = u8(2u);
    r9 = 0u;
    ea = r13 + 6u;
    *gptr<u8>(ea) = u8(3u);
    ea = r13 + 0x34u;  // (from the original)
    *gptr<u16>(ea) = u16(0x600u);  // (from the original)
    r6 = r13 + 4u;
    r5 = r9;
    ea = r13 + 0x38u;  // (from the original)
    *gptr<u8>(ea) = u8(1u);
    r10 = uxth(r9 | r5) | r9 << 0x10;  // (from the original)
    ea = r13 + 0x36u;  // (from the original)
    *gptr<u16>(ea) = u16(r9);
    r9 = uxth(r9 | r5) | r9 << 0x10;  // (from the original)
    r4 = r0;
    r8 = (r11 >> 0x10 << 0x10 | r5) & ~0xff0000u | r5 << 0x10 & 0xff0000u;  // (from the original)
    ea = r13 + 7u;
    *gptr<u8>(ea) = u8(0x25u);  // (from the original)
    arg0->word_4 = u32(r5);
    r3 = 0x58e97cu;  // (from the original)
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_8 = u32(0x58e968u);  // (from the original)
    arg0->word_c = u32(r3);
    r2 = r13 + 0x40u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    r7 = r13 + 0x34u;  // (from the original)
    r1 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_003081b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18u;  // (from the original)
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x1eu;  // (from the original)
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    ea = r4 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4;
    *gptr<u32>(ea) = u32(0x9078a0u);  // (from the original)
    ea = r4 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r4 + 0x34u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r4 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r10);
    r0 = r4;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058e854
GUEST_EXPORT(0x0058e854, d_0058e854::f_0058e854);

// f_0058e98c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e98c {

struct __attribute__((packed)) Object_0058e98c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0058e98c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058e98c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058e98c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058e98c_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_0058e98c(gptr<Object_0058e98c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
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
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x68u;  // (from the original)
    r5 = 0xffffu;  // (from the original)
    ea = r13 + 0x40u;  // (from the original)
    *gptr<u16>(ea) = u16(0x600u);  // (from the original)
    ea = r13 + 0x42u;  // (from the original)
    *gptr<u16>(ea) = u16(0u);
    ea = r13 + 4u;
    *gptr<u16>(ea) = u16(r5);
    ea = r13 + 0x44u;  // (from the original)
    *gptr<u16>(ea) = u16(r5);
    ea = r13 + 0x46u;  // (from the original)
    *gptr<u16>(ea) = u16(r5);
    r6 = 2u;
    r9 = 0u;
    ea = r13 + 6u;
    *gptr<u8>(ea) = u8(r6);
    ea = r13 + 8u;
    *gptr<u8>(ea) = u8(r6);
    ea = r13 + 0x34u;  // (from the original)
    *gptr<u16>(ea) = u16(0x600u);  // (from the original)
    r6 = r13 + 4u;
    r5 = r9;
    ea = r13 + 0x38u;  // (from the original)
    *gptr<u8>(ea) = u8(1u);
    r10 = uxth(r9 | r5) | r9 << 0x10;  // (from the original)
    ea = r13 + 0x36u;  // (from the original)
    *gptr<u16>(ea) = u16(r9);
    r9 = uxth(r9 | r5) | r9 << 0x10;  // (from the original)
    r4 = r0;
    r8 = (r11 >> 0x10 << 0x10 | r5) & ~0xff0000u | r5 << 0x10 & 0xff0000u;  // (from the original)
    ea = r13 + 7u;
    *gptr<u8>(ea) = u8(0x24u);  // (from the original)
    arg0->word_4 = u32(r5);
    r3 = 0x58eaacu;  // (from the original)
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_8 = u32(0x58ea9cu);  // (from the original)
    arg0->word_c = u32(r3);
    r2 = r13 + 0x40u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    r7 = r13 + 0x34u;  // (from the original)
    r1 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_003081b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18u;  // (from the original)
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x1eu;  // (from the original)
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    ea = r4 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4;
    *gptr<u32>(ea) = u32(0x9078b4u);  // (from the original)
    ea = r4 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r4 + 0x34u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r4 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r10);
    r0 = r4;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058e98c
GUEST_EXPORT(0x0058e98c, d_0058e98c::f_0058e98c);

// f_0058ead4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ead4 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> call_00314278;  // (from the original)

u32 f_0058ead4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = 0x9524d4u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    if (u32(*gptr<u8>(r4)) != 0) {
        r0 = 1u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = u32(*gptr<u8>(r4 + 2u));
    if (r0 == 0) {
        r0 = 1u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r3 = r13 + 8u;
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r0 + 8u));  // (from the original)
    r0 = r13 + 8u;
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_00308efc(r0, r1, r2, r3);
    ea = 0x9b39fcu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    ea = r13;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    ea = 0x9b39f8u;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r13 + 8u;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    r0 = call_00314278(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 2u) = u8(r0);
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058ead4
GUEST_EXPORT(0x0058ead4, d_0058ead4::f_0058ead4);

// f_0058eb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058eb60 {


u32 f_0058eb60() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x9524e0u);  // (from the original)
    if (r0 != 0) {
        r0 = u32(s32(s8(*gptr<u8>(r0 + 0x3au))));  // (from the original)
    }
    return r0;
}

}  // namespace d_0058eb60
GUEST_EXPORT(0x0058eb60, d_0058eb60::f_0058eb60);

// f_0058ebd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ebd8 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00753a50, u32(u32, u32, u32, u32)> call_00753a50;  // (from the original)

u32 f_0058ebd8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x9524d4u;  // (from the original)
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fb378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00753a50(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058ebd8
GUEST_EXPORT(0x0058ebd8, d_0058ebd8::f_0058ebd8);

// f_0058ed38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ed38 {

struct __attribute__((packed)) Object_0058ed38_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
};
GUEST_OFFSET(Object_0058ed38_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058ed38_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058ed38_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058ed38_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0058ed38_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0058ed38_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0058ed38_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0058ed38_0, half_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Object_0058ed38_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
};
GUEST_OFFSET(Object_0058ed38_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058ed38_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0058ed38_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0058ed38_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0058ed38_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0058ed38_1, half_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_0058ed38(gptr<Object_0058ed38_0> arg0, gptr<Object_0058ed38_1> arg1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_4 = u32(0u);
    r6 = r2;
    r2 = r4 + 0x1eu;  // (from the original)
    arg0->word_8 = u32(arg1->word_8);
    r1 = r1 + 0x1eu;  // (from the original)
    arg0->word_c = u32(arg1->word_c);
    r3 = arg1->word_14;
    arg0->word_10 = u32(arg1->word_10);
    arg0->word_14 = u32(r3);
    arg0->word_18 = u32(arg1->word_18);
    arg0->half_1c = u16(u32(arg1->half_1c));
    r0 = r2;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_007795ec(r0, r1, r2, r3);
    r5 = r5 + 0x24u;  // (from the original)
    r1 = r4 + 0x24u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r5));
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r5 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r5 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r5 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r5 + 0x14));  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r1 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r1 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r1 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r4) = u32(0x9078c8u);  // (from the original)
    *gptr<u32>(r4 + 0x3cu) = u32(*gptr<u32>(r6));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0058ed38
GUEST_EXPORT(0x0058ed38, d_0058ed38::f_0058ed38);

// f_0058edc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058edc4 {

struct __attribute__((packed)) Object_0058edc4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0058edc4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058edc4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058edc4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058edc4_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_0058edc4(gptr<Object_0058edc4_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
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
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x68u;  // (from the original)
    r1 = 0x600u;  // (from the original)
    r6 = 2u;
    r5 = 0xffffu;  // (from the original)
    ea = r13 + 0x40u;  // (from the original)
    *gptr<u16>(ea) = u16(r1);
    ea = r13 + 0x42u;  // (from the original)
    *gptr<u16>(ea) = u16(r1);
    ea = r13 + 4u;
    *gptr<u16>(ea) = u16(r5);
    ea = r13 + 0x44u;  // (from the original)
    *gptr<u16>(ea) = u16(r5);
    ea = r13 + 0x46u;  // (from the original)
    *gptr<u16>(ea) = u16(r5);
    r9 = 0u;
    ea = r13 + 6u;
    *gptr<u8>(ea) = u8(r6);
    ea = r13 + 8u;
    *gptr<u8>(ea) = u8(r6);
    ea = r13 + 0x34u;  // (from the original)
    *gptr<u16>(ea) = u16(0x600u);  // (from the original)
    r6 = r13 + 4u;
    r5 = r9;
    ea = r13 + 0x38u;  // (from the original)
    *gptr<u8>(ea) = u8(1u);
    r10 = uxth(r9 | r5) | r9 << 0x10;  // (from the original)
    ea = r13 + 0x36u;  // (from the original)
    *gptr<u16>(ea) = u16(r9);
    r9 = uxth(r9 | r5) | r9 << 0x10;  // (from the original)
    r4 = r0;
    r8 = (r11 >> 0x10 << 0x10 | r5) & ~0xff0000u | r5 << 0x10 & 0xff0000u;  // (from the original)
    ea = r13 + 7u;
    *gptr<u8>(ea) = u8(0x23u);  // (from the original)
    arg0->word_4 = u32(r5);
    r3 = 0x58eed0u;  // (from the original)
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_8 = u32(0x58eed0u);  // (from the original)
    arg0->word_c = u32(r3);
    r2 = r13 + 0x40u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    r7 = r13 + 0x34u;  // (from the original)
    r1 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_003081b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18u;  // (from the original)
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x1eu;  // (from the original)
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    ea = r4 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4;
    *gptr<u32>(ea) = u32(0x9078dcu);  // (from the original)
    ea = r4 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r4 + 0x34u;  // (from the original)
    *gptr<u32>(ea) = u32(r9);
    ea = r4 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r10);
    r0 = r4;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058edc4
GUEST_EXPORT(0x0058edc4, d_0058edc4::f_0058edc4);

// f_0058eef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058eef8 {


u32 f_0058eef8() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(0x9524e0u) + 0x2cu);  // (from the original)
    return r0;
}

}  // namespace d_0058eef8
GUEST_EXPORT(0x0058eef8, d_0058eef8::f_0058eef8);

// f_0058ef28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ef28 {


u32 f_0058ef28() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(0x9524e0u) + 0x28u);  // (from the original)
    return r0;
}

}  // namespace d_0058ef28
GUEST_EXPORT(0x0058ef28, d_0058ef28::f_0058ef28);

// f_0058efc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058efc8 {


u32 f_0058efc8() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(0x9524e0u) + 0x24u);  // (from the original)
    return r0;
}

}  // namespace d_0058efc8
GUEST_EXPORT(0x0058efc8, d_0058efc8::f_0058efc8);

// f_0058f388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f388 {

struct __attribute__((packed)) Object_0058f388_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 byte_16;
};
GUEST_OFFSET(Object_0058f388_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058f388_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058f388_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058f388_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0058f388_0, half_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_0058f388_0, half_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0058f388_0, half_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_0058f388_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0058f388_0, byte_16, 0x16);  // (from the original)


void f_0058f388(gptr<Object_0058f388_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x14;  // (from the original)
    ea = r13 + 0x24u;  // (from the original)
    r8 = *gptr<u32>(ea);
    ea = r13 + 0x28u;  // (from the original)
    r12 = *gptr<u32>(ea);
    ea = r13 + 0x14u;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    ea = r13 + 0x1cu;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r3);
    arg0->half_c = u16(r4);
    arg0->half_e = u16(r5);
    arg0->half_10 = u16(r6);
    arg0->half_12 = u16(r7);
    arg0->half_14 = u16(r8);
    arg0->byte_16 = u8(r12);
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_0058f388
GUEST_EXPORT(0x0058f388, d_0058f388::f_0058f388);

// f_0058f3c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f3c0 {

struct __attribute__((packed)) Object_0058f3c0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 byte_16;
};
GUEST_OFFSET(Object_0058f3c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058f3c0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058f3c0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058f3c0_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0058f3c0_0, half_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_0058f3c0_0, half_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0058f3c0_0, half_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_0058f3c0_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0058f3c0_0, byte_16, 0x16);  // (from the original)


void f_0058f3c0(gptr<Object_0058f3c0_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->half_c = u16(r1);
    arg0->half_e = u16(r1);
    arg0->half_10 = u16(r1);
    arg0->half_12 = u16(r1);
    arg0->half_14 = u16(r1);
    arg0->byte_16 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0058f3c0
GUEST_EXPORT(0x0058f3c0, d_0058f3c0::f_0058f3c0);

// f_0058f3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f3ec {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_0058f3ec(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    goto L_58f3ec;
L_58f3ec:;
    guest::cpu()->r[13] -= 8u;
    r0 = call_00305f2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 3u) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (0u != 0) {
        guest::cpu()->r[13] += 8u;
        r0 = uxth(*gptr<u32>(0x9b3a28u));  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r4 = 1u;
    r0 = u32(*gptr<u8>(0x95bf80u));  // (from the original)
    if (r0 != 0) {
        r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 0x6214eu;  // (from the original)
        r0 = uxth(lsl_r(r4, u32(*gptr<u8>(r0 + 0x80u + r1)) & 0xfu));  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_005d46dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = uxth(lsl_r(r4, r0 & 0xff));  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058f3ec
GUEST_EXPORT(0x0058f3ec, d_0058f3ec::f_0058f3ec);

// f_0058f464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f464 {

struct __attribute__((packed)) Object_0058f464_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0058f464_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058f464_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058f464_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058f464_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_0058f464(gptr<Object_0058f464_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = r1;
    r1 = r3;
    ea = r13 + 0x18u;  // (from the original)
    r5 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    r7 = *gptr<u32>(ea + 8);
    r8 = 0u;
    r3 = 0x9078f0u;  // (from the original)
    arg0->word_8 = u32(r0);
    arg0->word_c = u32(r2);
    r0 = r4 + 0x10u;  // (from the original)
    arg0->word_0 = u32(r3);
    arg0->word_4 = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_003081b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18u;  // (from the original)
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x1eu;  // (from the original)
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ec(r0, r1, r2, r3);
    ea = r7;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = *gptr<u32>(ea + 0xc);  // (from the original)
    r5 = *gptr<u32>(ea + 0x10);  // (from the original)
    r12 = *gptr<u32>(ea + 0x14);  // (from the original)
    ea = r4 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r12);  // (from the original)
    r0 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058f464
GUEST_EXPORT(0x0058f464, d_0058f464::f_0058f464);

// f_0058f4cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f4cc {

struct __attribute__((packed)) Object_0058f4cc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
};
GUEST_OFFSET(Object_0058f4cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_0, half_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Object_0058f4cc_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
};
GUEST_OFFSET(Object_0058f4cc_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0058f4cc_1, half_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_0058f4cc(gptr<Object_0058f4cc_0> arg0, gptr<Object_0058f4cc_1> arg1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_4 = u32(0u);
    r6 = r2;
    r2 = r4 + 0x1eu;  // (from the original)
    arg0->word_8 = u32(arg1->word_8);
    r1 = r1 + 0x1eu;  // (from the original)
    arg0->word_c = u32(arg1->word_c);
    r3 = arg1->word_14;
    arg0->word_10 = u32(arg1->word_10);
    arg0->word_14 = u32(r3);
    arg0->word_18 = u32(arg1->word_18);
    arg0->half_1c = u16(u32(arg1->half_1c));
    r0 = r2;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_007795ec(r0, r1, r2, r3);
    r5 = r5 + 0x24u;  // (from the original)
    r1 = r4 + 0x24u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r5));
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r5 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r5 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r5 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r5 + 0x14));  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r1 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r1 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r1 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r4) = u32(0x907904u);  // (from the original)
    *gptr<u16>(r4 + 0x3cu) = u16(u32(*gptr<u16>(r6)));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0058f4cc
GUEST_EXPORT(0x0058f4cc, d_0058f4cc::f_0058f4cc);

// f_0058f718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f718 {

struct __attribute__((packed)) Object_0058f718_0 {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0x1c];  // (not used here)
    u32 word_68;
    u8 unknown_6c[0xaf];  // (not used here)
    u8 byte_11b;
};
GUEST_OFFSET(Object_0058f718_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0058f718_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0058f718_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0058f718_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_0058f718_0, byte_11b, 0x11b);  // (from the original)

inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> call_007207d8;  // (from the original)

u32 f_0058f718(gptr<Object_0058f718_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = 0x94ee4cu;  // (from the original)
    arg0->word_68 = u32(arg0->word_68 | 0x50u);  // (from the original)
    arg0->byte_11b = u8(0xc8u);  // (from the original)
    r4 = 0u;
    r1 = arg0->word_44;
    r2 = arg0->word_48;
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(arg0->word_40);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r5 = *gptr<u32>(r7 + 0x10u);  // (from the original)
    do {
L_58f754:;
        r2 = r5 + (r4 + (r4 << 1) << 3);
        r0 = r2 + 0xcu;  // (from the original)
        r1 = *gptr<u32>(r2 + 0xcu);  // (from the original)
        if (r1 == 0) {
            goto L_58f7a4;
        }
        r3 = *gptr<u32>(r0 + 4u);
        if (r3 != *gptr<u32>(r1 + 0xcu)) {  // (from the original)
            goto L_58f7a4;
        }
        r0 = r2;
        guest::cpu()->r[13] = r13;
        r0 = call_007207d8(r0, r1, r2, r3);
        if (r0 == 0) {
            goto L_58f7a4;
        }
        r4 = sxtb(r4 + 1u);
        guest::preempt();
    } while (r4 < 0x14u);  // (from the original)
    r4 = ~0u;
L_58f7a4:;
    r0 = *gptr<u32>(r6 + 0x68u);  // (from the original)
    r1 = 0xf8u;  // (from the original)
    *gptr<u8>(r6 + 0x11fu) = u8(r4);  // (from the original)
    if ((r0 & 0x80u) != 0) {  // (from the original)
        r1 = 0xf9u;  // (from the original)
    }
    if (r4 + 1u == 0) {
        goto L_58f7fc;
    }
    r0 = *gptr<u32>(r7 + 0x10u);  // (from the original)
    res = r4;
    if (res >> 0x1f == (r4 & (r4 ^ res)) >> 0x1f) {  // (from the original)
        if (r4 < 0x14u) {  // (from the original)
            r0 = r0 + (r4 + (r4 << 1) << 3);
            goto L_58f7e0;
        }
    }
    r0 = 0u;
L_58f7e0:;
    *gptr<u32>(r13) = u32(0xae5664u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(1u);
    *gptr<u32>(r13 + 8) = u32(0u);
    r2 = r13 + 0xcu;  // (from the original)
    r3 = 0x975beeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002073dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_58f7fc:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058f718
GUEST_EXPORT(0x0058f718, d_0058f718::f_0058f718);

// f_0058f81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f81c {

inline constexpr guest::Function<0x002fccc4, u32(u32, u32, u32, u32)> call_002fccc4;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002fcd1c, u32(u32, u32, u32, u32)> call_002fcd1c;  // (from the original)
inline constexpr guest::Function<0x002fcf7c, u32(u32, u32, u32, u32)> call_002fcf7c;  // (from the original)
inline constexpr guest::Function<0x002fd000, u32(u32, u32, u32, u32)> call_002fd000;  // (from the original)
inline constexpr guest::Function<0x006b9d78, u32(u32, u32, u32, u32)> call_006b9d78;  // (from the original)
inline constexpr guest::Function<0x006b9de8, u32(u32, u32, u32, u32)> call_006b9de8;  // (from the original)
inline constexpr guest::Function<0x00768dc4, u32(u32, u32, u32, u32)> call_00768dc4;  // (from the original)

u32 f_0058f81c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r0 + 0x64u;  // (from the original)
    r0 = call_002fccc4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_58f880;
    }
    r0 = r4 + 0x64u;  // (from the original)
    r0 = call_002fccdc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    r0 = call_002fcd1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = *gptr<u32>(r4 + 0x68u) | 0x600u | 2u;  // (from the original)
        goto L_58f938;
    }
    r0 = r5;
    r0 = call_006b9de8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_58f884;
    }
    r0 = *gptr<u32>(r4 + 0x68u) | 0x600u | 1u;  // (from the original)
    *gptr<u32>(r4 + 0x68u) = u32(r0);  // (from the original)
L_58f880:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_58f884:;
    r0 = r5;
    r0 = call_002fcf7c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = 0u;
    if (r0 != 0) {
        goto L_58f8c0;
    }
    if (r5 == 0x13u) {  // (from the original)
        goto L_58f8c0;
    }
    if (r5 == 9u) {
        goto L_58f92c;
    }
    r0 = r5;
    r0 = call_006b9d78(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_58f8f8;
    }
    goto L_58f92c;
L_58f8c0:;
    r0 = r4 + 0x64u;  // (from the original)
    r0 = call_002fd000(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        *gptr<u32>(r4 + 0x68u) = u32(*gptr<u32>(r4 + 0x68u) | 0x10u);  // (from the original)
    }
    *gptr<u8>(r4 + 0x11cu) = u8(r6);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x68u) | 8u;  // (from the original)
    *gptr<u32>(r4 + 0x68u) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x11bu) = u8(r6);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_58f8f8:;
    zf = r5 == 0x12u;  // (from the original)
    if (!zf) {
        zf = r5 == 1u;
    }
    if (zf) {
        goto L_58f92c;
    }
    r1 = 1u;
    r0 = r4 + 0x64u;  // (from the original)
    r0 = call_00768dc4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_58f880;
    }
    r0 = *gptr<u32>(r4 + 0x68u) | 0x400u;  // (from the original)
    *gptr<u32>(r4 + 0x68u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_58f92c:;
    *gptr<u8>(r4 + 0x11cu) = u8(r6);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x68u) | 8u;  // (from the original)
L_58f938:;
    *gptr<u32>(r4 + 0x68u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058f81c
GUEST_EXPORT(0x0058f81c, d_0058f81c::f_0058f81c);

// f_0058f948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f948 {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00582e4c, u32(u32, u32, u32, u32)> call_00582e4c;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;  // (from the original)
inline constexpr guest::Function<0x0076c628, u32(u32, u32, u32, u32)> call_0076c628;  // (from the original)

u32 f_0058f948(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r0 + 0x64u;  // (from the original)
    if (r1 != 0) {
        r0 = call_00768174(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 = 0x100055du;  // (from the original)
        if (r0 == 0) {
            goto L_58f9d8;
        }
        goto L_58fa58;
    }
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r4 + 0x64u;  // (from the original)
        r0 = call_0076c628(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0x2du) {  // (from the original)
            goto L_58fa88;
        }
        r0 = r4 + 0x64u;  // (from the original)
        r0 = call_0076c628(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0x2cu) {  // (from the original)
            goto L_58fa88;
        }
        r0 = r4 + 0x64u;  // (from the original)
        r0 = call_0076c628(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0x2fu) {  // (from the original)
            goto L_58fa88;
        }
    }
    r2 = r4;
    r1 = r4 + 0x40u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 1u;
    r0 = 0x100055eu;  // (from the original)
    return call_00582e4c(r0, r1, r2, r3);
L_58f9d8:;
    r0 = r4 + 0x64u;  // (from the original)
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_58fa88;
    }
    r0 = r4 + 0x64u;  // (from the original)
    r0 = call_0076c628(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r4 + 0x64u;  // (from the original)
    r0 = call_002fcb34(r0, r1, r2, r3);
    if (r5 != 0x2du) {  // (from the original)
        if (r5 == 0x2cu) {  // (from the original)
            goto L_58fa38;
        }
        if (r0 == 0x3du) {  // (from the original)
            goto L_58fa50;
        }
        goto L_58fa58;
    }
    r2 = r4;
    r1 = r4 + 0x40u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 1u;
    r0 = 0x1000560u;  // (from the original)
    return call_00582e4c(r0, r1, r2, r3);
L_58fa38:;
    r2 = r4;
    r1 = r4 + 0x40u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 1u;
    r0 = 0x1000561u;  // (from the original)
    return call_00582e4c(r0, r1, r2, r3);
L_58fa50:;
    if (r5 == 0x2fu) {  // (from the original)
        goto L_58fa70;
    }
L_58fa58:;
    r0 = r6;
    r2 = r4;
    r1 = r4 + 0x40u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 1u;
    return call_00582e4c(r0, r1, r2, r3);
L_58fa70:;
    r2 = r4;
    r1 = r4 + 0x40u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 1u;
    r0 = 0x100055fu;  // (from the original)
    return call_00582e4c(r0, r1, r2, r3);
L_58fa88:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0058f948
GUEST_EXPORT(0x0058f948, d_0058f948::f_0058f948);

// f_0058fc38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058fc38 {

struct __attribute__((packed)) Object_0058fc38_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_0058fc38_0, word_68, 0x68);  // (from the original)

inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> call_004e0cb0;  // (from the original)
inline constexpr guest::Function<0x004e958c, u32(u32, u32, u32, u32)> call_004e958c;  // (from the original)
inline constexpr guest::Function<0x004ea048, u32(u32, u32, u32, u32)> call_004ea048;  // (from the original)
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;  // (from the original)
inline constexpr guest::Function<0x007519b4, u32(u32, u32, u32, u32)> call_007519b4;  // (from the original)

u32 f_0058fc38(gptr<Object_0058fc38_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 8;
    r4 = r0;
    r0 = arg0->word_68;
    if (r1 != 0) {
        r0 = r0 | 0x400000u;  // (from the original)
        arg0->word_68 = u32(r0);
        guest::cpu()->r[13] = r13;
        r0 = call_004e0cb0(r0, r1, r2, r3);
        r3 = 0u;
        ea = r4 + 0x28u;  // (from the original)
        r1 = *gptr<u32>(ea);
        r2 = *gptr<u32>(ea + 4);
        guest::cpu()->r[13] = r13;
        r0 = call_007457e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r4 + 0x30u) = u32(r0);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_004ea048(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r4 + 0x30u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_004e958c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_007519b4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        zf = r0 == 0;
        r0 = *gptr<u32>(r4 + 0x68u);  // (from the original)
        if (zf) {
            r0 = r0 & ~0x8000000u;  // (from the original)
        } else {
            r0 = r0 | 0x8000000u;  // (from the original)
        }
        *gptr<u32>(r4 + 0x68u) = u32(r0);  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r4 + 0x68u) = u32(r0 & ~0x8400000u);  // (from the original)
    r0 = ~0u;
    *gptr<u32>(r4 + 0x30u) = u32(r0);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058fc38
GUEST_EXPORT(0x0058fc38, d_0058fc38::f_0058fc38);

// f_0058fcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058fcb0 {

inline constexpr guest::Function<0x00123678, u32(u32, u32, u32, u32)> call_00123678;  // (from the original)
inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> call_001277dc;  // (from the original)
inline constexpr guest::Function<0x001279b4, u32(u32, u32, u32, u32)> call_001279b4;  // (from the original)
inline constexpr guest::Function<0x0012d5bc, u32(u32, u32, u32, u32)> call_0012d5bc;  // (from the original)
inline constexpr guest::Function<0x0034adac, u32(u32, u32, u32, u32)> call_0034adac;  // (from the original)
inline constexpr guest::Function<0x00726438, u32(u32, u32, u32, u32)> call_00726438;  // (from the original)
inline constexpr guest::Function<0x00726490, u32(u32, u32, u32, u32)> call_00726490;  // (from the original)
inline constexpr guest::Function<0x00727dc8, u32(u32, u32, u32, u32)> call_00727dc8;  // (from the original)

u32 f_0058fcb0(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xb0u;  // (from the original)
    r4 = r0;
    r1 = 5u;
    r0 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0034adac(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00123678(r0, r1, r2, guest::cpu()->r[3]);
    r0 = *gptr<u32>(r4 + 0x68u);  // (from the original)
    r4 = u32(*gptr<u8>(r4 + 0x120u));  // (from the original)
    if ((r0 & 0x80000u) != 0) {  // (from the original)
        *gptr<u8>(r13 + 0x88u) = u8(8u);  // (from the original)
        *gptr<u8>(r13 + 0x8cu) = u8(3u);  // (from the original)
        *gptr<u8>(r13 + 0x8du) = u8(0xdu);  // (from the original)
        *gptr<u8>(r13 + 0x8eu) = u8(0xfu);  // (from the original)
    }
    *gptr<u8>(r13 + 0x91u) = u8(1u);  // (from the original)
    *gptr<u8>(r13 + 0x95u) = u8(0xfu);  // (from the original)
    r1 = 1u;
    *gptr<u8>(r13 + 0x96u) = u8(0xeu);  // (from the original)
    *gptr<u8>(r13 + 0x30u) = u8(r1);  // (from the original)
    r2 = 0x10u;  // (from the original)
    *gptr<u8>(r13 + 0x31u) = u8(r2);  // (from the original)
    *gptr<u8>(r13 + 0x32u) = u8(6u);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(r1);
    *gptr<u8>(r13) = u8(r1);
    *gptr<u8>(r13 + 6u) = u8(0u);
    r1 = r13 + 0x80u;  // (from the original)
    r0 = 0x208u;  // (from the original)
    *gptr<u8>(r13 + 0x9du) = u8(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001277dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r13 + 0x80u);  // (from the original)
    r6 = r13;
    r5 = r1;
    if (r4 < 0x80u) {  // (from the original)
        r0 = 0u;
        r2 = r0;
        *gptr<u8>(r13 + 0x55u) = u8(r0);  // (from the original)
        r0 = r6 + 0x54u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00726490(r0, r1, r2, guest::cpu()->r[3]);
        *gptr<u32>(r13 + 0x80u) = u32(r0);  // (from the original)
    }
    r1 = *gptr<u32>(r13 + 0x80u);  // (from the original)
    r2 = 0u;
    r0 = r6 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00726438(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    *gptr<u32>(r13 + 0x80u) = u32(r0);  // (from the original)
    r2 = 1u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0012d5bc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    *gptr<u32>(r13 + 0x80u) = u32(r0);  // (from the original)
    r0 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00727dc8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r13 + 0x80u) = u32(r0);  // (from the original)
    r0 = r0 - r5 & ~3u;
    guest::cpu()->r[13] = r13;
    r0 = call_001279b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0xb0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058fcb0
GUEST_EXPORT(0x0058fcb0, d_0058fcb0::f_0058fcb0);

// f_0058fde0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058fde0 {

struct __attribute__((packed)) Object_0058fde0_0 {
    u8 unknown_0[0x74];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Object_0058fde0_0, word_74, 0x74);  // (from the original)


void f_0058fde0(gptr<Object_0058fde0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    ea = r13 + 0x10u;  // (from the original)
    r12 = *gptr<u32>(ea);
    ea = r13 + 0x14u;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r1 = r1 & 0xffu | (r2 & 0xffu) << 8 | (r3 & 0xffu) << 0x10;  // (from the original)
    arg0->word_74 = u32(r1);
    if (r12 != 0) {
        r1 = r1 | 0x1000000u;  // (from the original)
        arg0->word_74 = u32(r1);
    }
    if (r4 != 0) {
        r1 = r1 | 0x2000000u;  // (from the original)
        arg0->word_74 = u32(r1);
    }
    if (r5 == 0) {
        r1 = r1 | 0x4000000u;  // (from the original)
        arg0->word_74 = u32(r1);
    }
    if (r3 + 1u == 0) {
        r1 = r1 | 0x8000000u;  // (from the original)
        arg0->word_74 = u32(r1);
    }
    if (r6 != 0) {
        r1 = r1 | 0x10000000u;  // (from the original)
        arg0->word_74 = u32(r1);
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_0058fde0
GUEST_EXPORT(0x0058fde0, d_0058fde0::f_0058fde0);

// f_0058fe4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058fe4c {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32, u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x002fccc4, u32(u32, u32, u32, u32)> call_002fccc4;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;  // (from the original)

u32 f_0058fe4c(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r0 = r0 + 0x64u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_002fcb9c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0 != 0) {
        goto L_58ff3c;
    }
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_002fccc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r7 = 0u;
    if (r0 == 0) {
        goto L_58ff48;
    }
    r0 = 0x94ee4cu;  // (from the original)
    r6 = r4 + 0x64u;  // (from the original)
    r1 = u32(s32(s8(*gptr<u8>(r0 + 3u))));
    r5 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    r0 = 0u - r1;
    if ((r0 & r5) == 0) {
        goto L_58ff3c;
    }
    r0 = r6;
    guest::cpu()->s[0] = S0;
    r0 = call_002fccc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_58ff3c;
    }
    r0 = r6;
    guest::cpu()->s[0] = S0;
    r0 = call_002fd010(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = u32(*gptr<u8>(r0 + 0xcu));  // (from the original)
    if (r0 >= 0x87u) {  // (from the original)
        r0 = r7;
        goto L_58fedc;
    }
    if (r0 == 0) {
        goto L_58ff3c;
    }
    r1 = *gptr<u32>(r5 + 0x414u);  // (from the original)
    if (r1 == 0) {
        r0 = 0u;
    } else {
        r0 = r1 + (r0 + (r0 << 1) + (r0 << 3) << 1);
    }
L_58fedc:;
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    if (!zf) {
        r1 = u32(s32(s8(*gptr<u8>(r0))));
        nf = r1 >> 0x1f;  // (from the original)
        zf = r1 == 0;
        vf = 0u;
    }
    if (zf || nf != vf) {
        goto L_58ff3c;
    }
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    *gptr<u32>(r4 + 0x1cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = *gptr<u32>(r4 + 0x68u) | 0x4000u;  // (from the original)
    *gptr<u32>(r4 + 0x68u) = u32(r1);  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(r0 + 1u))));
    if (r0 != 0) {
        if (r0 == 1u) {
            r0 = 2u;
            goto L_58ff40;
        }
        if (r0 == 2u) {
            r0 = 3u;
            goto L_58ff40;
        }
        if (r0 == 3u) {
            r0 = 4u;
            *gptr<u8>(r4 + 0x122u) = u8(r0);  // (from the original)
            goto L_58ff3c;
        }
    }
    *gptr<u8>(r4 + 0x122u) = u8(r7);  // (from the original)
L_58ff3c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
L_58ff40:;
    *gptr<u8>(r4 + 0x122u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
L_58ff48:;
    r0 = r4 + 0x64u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_002fcb10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        r0 = r4 + 0x64u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00768174(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0 == 0) {
            guest::preempt();
            goto L_58ff3c;
        }
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x58ff90u));  // (from the original)
    r0 = *gptr<u32>(r4 + 0x68u) | 0x4000u;  // (from the original)
    *gptr<u32>(r4 + 0x68u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r4 + 0x122u) = u8(r7);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0058fe4c
GUEST_EXPORT(0x0058fe4c, d_0058fe4c::f_0058fe4c);
