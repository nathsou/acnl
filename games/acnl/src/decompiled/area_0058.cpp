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
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_9 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_17 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = 0x8f799cu + 0x6cu;  // (from the original)
    arg0->word_28 = u32(r1_1);
    r3_1 = 0x8f799cu + 0x170u;  // (from the original)
    arg0->word_0 = u32(0x8f799cu);  // (from the original)
    arg0->word_a4 = u32(r3_1);
    r0_1 = r0 + 0xebcu;  // (from the original)
    r0_2 = call_00567ef0(r0_1, r1_1, 0x8f799cu, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x248u;  // (from the original)
    r0_4 = call_00567ef0(r0_3, r1_2, r2_1, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x248u;  // (from the original)
    r0_6 = call_00567ef0(r0_5, r1_3, r2_2, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x248u;  // (from the original)
    r0_8 = call_00567ef0(r0_7, r1_4, r2_3, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x248u;  // (from the original)
    r0_10 = call_00567ef0(r0_9, r1_5, r2_4, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x288u;  // (from the original)
    r0_12 = call_00567ef0(r0_11, r1_6, r2_5, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x248u;  // (from the original)
    r0_14 = call_00567ef0(r0_13, r1_7, r2_6, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0xa4u;  // (from the original)
    r0_16 = call_003170d0(r0_15, r1_8, r2_7, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_17 = r0_16 - 0x28u;  // (from the original)
    return call_006aaa30(r0_17, r1_9, r2_8, r3_9);
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_005814d0(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_58109c;
    }
    r0_2 = call_002fd108(0x4000u, r1, 0x80u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    *gptr<u32>(r0 + 0x2cu) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        goto L_58109c;
    }
    call_006138a4(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0x28u) = u32(*gptr<u32>(r0 + 0x2cu));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
L_58109c:;
    call_005817f0(r0, r1_1, r2_1, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 0u;
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
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 ea_2 = 0;
    u32 r5_2 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r5_3 = 0;
    u32 r1_6 = 0;
    u32 r6_1 = 0;
    u32 r0_12 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_8 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_15 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_9 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_11 = 0;
    u32 r8_1 = 0;
    u32 r7_1 = 0;
    u32 r5_4 = 0;
    u32 r1_12 = 0;
    u32 r6_2 = 0;
    u32 r0_21 = 0;
    u32 r3_8 = 0;
    u32 r1_13 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_14 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_25 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r1_15 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 ea_3 = 0;
    u32 r4_1 = 0;
    u32 r5_5 = 0;
    u32 r6_3 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    u32 ea_4 = 0;
    u32 r4_2 = 0;
    u32 r5_6 = 0;
    u32 r6_4 = 0;
    u32 r7_3 = 0;
    u32 r8_3 = 0;
    u32 r9_2 = 0;
    u32 r10_2 = 0;
    u32 r11_2 = 0;
    ea_1 = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x58u;  // (from the original)
    r4 = r0;
    r1_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x58u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005814d0(r0, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_5812c0;
    }
    r9 = r2 * r3;
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_2, r4, r2_1, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0_3 = r5_1 + 1u;
    zf_1 = r0_3 == 0;
    cf_1 = r0_3 >= 0u;
    r7 = 0u;
    if (cf_1 && !zf_1) {
        r11 = r0_3;
        r10 = r9 << 0xa;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        goto L_5811f8;
    }
L_5810fc:;
    r1_3 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r0_4 = r10 + 8u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00131280(r0_4, r1_3, 4u, r3);
    r0_6 = r0_5 + 8u;
    ea_2 = r0_6 - 8u;
    *gptr<u32>(ea_2) = u32(0x400u);  // (from the original)
    *gptr<u32>(ea_2 + 4) = u32(r9);
    r5_2 = r4 + 0x30u;  // (from the original)
    if (r7 < 2u) {
        r5_2 = r5_2 + (r7 << 2);
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_00301d0c(r0_6, 0x6efd9cu, 0x400u, r9);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r5_2) = u32(r0_7);
    r0_8 = r4 + 0x30u;  // (from the original)
    if (r7 < 2u) {
        r0_8 = r0_8 + (r7 << 2);
    }
    if (*gptr<u32>(r0_8) == 0) {
        goto L_5812d4;
    }
    r0_9 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_9, r4, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_5 = r13;
    r0_10 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_007481ec(r0_10, r1_5, r2_3, r3_3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_5811e4;
    } else {
        r8 = r4 + 0x30u + (r7 << 2);  // (from the original)
    }
    do {
L_581180:;
        r5_3 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1_6 = r13 + 0x18u;  // (from the original)
        r6_1 = *gptr<u32>(r1_6 + 4u);
        guest::cpu()->r[13] = r13;
        r0_12 = call_007482bc(r4, r1_6, r2, r3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r1_7 = r6_1 * r0_12 + r5_3;
        r0_13 = r4 + 0x30u;  // (from the original)
        if (r7 < 2u) {
            r0_13 = r8;
        }
        r0_14 = *gptr<u32>(r0_13) + (r1_7 << 0xa);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_006efd40(r0_14, r1_7, r2_4, r3_4);
        r1_8 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r0_15 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052f144(r0_15, r1_8, r2_5, r3_5);
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r1_9 = r13;
        r0_16 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_17 = call_007481ec(r0_16, r1_9, r2_6, r3_6);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_17 != 0);
L_5811e4:;
    r7 = r7 + 1u;
    if (r7 < r11) {
        guest::preempt();
        goto L_5810fc;
    }
L_5811f8:;
    r0_18 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_18, r4, r2, r3);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_10 = r13;
    r0_19 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_007481ec(r0_19, r1_10, r2_7, r3_7);
    r1_11 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_20 == 0) {
        goto L_5812a0;
    }
    do {
L_58121c:;
        r8_1 = 0u;
        r7_1 = r8_1;
        r5_4 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1_12 = r13 + 0x18u;  // (from the original)
        r6_2 = *gptr<u32>(r1_12 + 4u);
        guest::cpu()->r[13] = r13;
        r0_21 = call_007482bc(r4, r1_12, r2, r3);
        r3_8 = guest::cpu()->r[3];
        r1_13 = r6_2 * r0_21 + r5_4;
        r0_22 = *gptr<u32>(r4 + 0x30u);  // (from the original)
        if (r0_22 != 0) {
            r8_1 = r0_22 + (r1_13 << 0xa);  // (from the original)
        }
        r0_23 = *gptr<u32>(r4 + 0x34u);  // (from the original)
        if (r0_23 != 0) {
            r7_1 = r0_23 + (r1_13 << 0xa);  // (from the original)
        }
        r0_24 = *gptr<u32>(r4 + 0x20u) + (r1_13 + (r1_13 << 1) << 2);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0057bc20(r0_24, r8_1, r7_1, r3_8);
        r1_14 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        r0_25 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052f144(r0_25, r1_14, r2_8, r3_9);
        r2_9 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        r1_15 = r13;
        r0_26 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_27 = call_007481ec(r0_26, r1_15, r2_9, r3_10);
        r1_11 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_27 != 0);
L_5812a0:;
    r13 = r13 + 0x34u;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_1 = *gptr<u32>(ea_3);
    r5_5 = *gptr<u32>(ea_3 + 4);
    r6_3 = *gptr<u32>(ea_3 + 8);
    r7_2 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_2 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_3 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_3 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_5;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_5812c0:;
    guest::cpu()->r[13] = r13;
    call_005817f0(r4, r1_2, r2_1, r3_1);
    r1_4 = guest::cpu()->r[1];
    goto L_5812dc;
L_5812d4:;
L_5812dc:;
    r13 = r13 + 0x34u;  // (from the original)
    ea_4 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_2 = *gptr<u32>(ea_4);
    r5_6 = *gptr<u32>(ea_4 + 4);
    r6_4 = *gptr<u32>(ea_4 + 8);
    r7_3 = *gptr<u32>(ea_4 + 0xc);  // (from the original)
    r8_3 = *gptr<u32>(ea_4 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_4 + 0x14);  // (from the original)
    r10_2 = *gptr<u32>(ea_4 + 0x18);  // (from the original)
    r11_2 = *gptr<u32>(ea_4 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_6;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005810ac(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_581344;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fd108(0x4000u, r1, 0x80u, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x2cu) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        goto L_581344;
    }
    guest::cpu()->r[13] = r13;
    call_006138a4(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0x28u) = u32(*gptr<u32>(r0 + 0x2cu));  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
L_581344:;
    guest::cpu()->r[13] = r13;
    call_005817f0(r0, r1_1, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r3_2 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r11_1 = 0;
    u32 ea_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_1 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x48u;  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    r3_1 = r13 + 0x10u;  // (from the original)
    r2_1 = r13 + 0xcu;  // (from the original)
    r1_1 = r13 + 8u;
    r0_1 = r13 + 4u;
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a69ec(r0_1, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    ea_1 = r13 + 0xcu;  // (from the original)
    r0_2 = *gptr<u32>(ea_1);
    r11_1 = *gptr<u32>(ea_1 + 4);
    ea_2 = r13 + 4u;
    r5_1 = *gptr<u32>(ea_2);
    r6_1 = *gptr<u32>(ea_2 + 4);
    *gptr<u32>(r13 + 0x14u) = u32(r0_2);  // (from the original)
    r0_3 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r0_3) = u32(r5_1);
    *gptr<u32>(r0_3 + 4) = u32(r6_1);
    guest::cpu()->r[13] = r13;
    r0_4 = call_007482d0(r0, r0_3, r6_1, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    zf_1 = r0_4 == 0;
    if (!zf_1) {
        zf_1 = *gptr<u32>(r0 + 0x20u) == 0;  // (from the original)
    }
    if (zf_1) {
        goto L_58141c;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_007482bc(r0, r1_2, r2_2, r3_3);
    r0_6 = r6_1 * r0_5 + r5_1;
    r1_2 = *gptr<u32>(r0 + 0x20u);  // (from the original)
    res_1 = r1_2 + (r0_6 + (r0_6 << 1) << 2);
    if (res_1 == 0) {
        goto L_58141c;
    }
    *gptr<u32>(r13) = u32(r3);
    r2_3 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_0057bce0(res_1, r1, r2_3, r11_1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_58141c:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r8_1 = 0;
    u32 r0_14 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r2_6 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r2_7 = 0;
    u32 r3_9 = 0;
    u32 r0_16 = 0;
    u32 r2_8 = 0;
    u32 r3_10 = 0;
    u32 r1_4 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r5_1 = 0;
    u32 r1_5 = 0;
    u32 r6_1 = 0;
    u32 r0_19 = 0;
    u32 r3_11 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r1_6 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_12 = 0;
    u32 r0_22 = 0;
    u32 r2_10 = 0;
    u32 r3_13 = 0;
    u32 r1_8 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_14 = 0;
    u32 r0_29 = 0;
    u32 r2_12 = 0;
    u32 r3_15 = 0;
    u32 r1_10 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r5_3 = 0;
    u32 r1_11 = 0;
    u32 r6_3 = 0;
    u32 r0_32 = 0;
    u32 r3_16 = 0;
    u32 r5_4 = 0;
    u32 r6_4 = 0;
    u32 r1_12 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r2_13 = 0;
    u32 r3_17 = 0;
    u32 r1_13 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    r4 = r0;
    r10 = r1;
    r2_1 = r3 - 1u;
    r1_1 = r2 - 1u;
    r0_1 = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r0_1) = u32(r1_1);
    *gptr<u32>(r0_1 + 4) = u32(r2_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0052f074(r0_1, r1_1, r2_1, r3);
    r3_1 = guest::cpu()->r[3];
    r0_3 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0052f200(r0_3, r0_2, r0_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0052f284(r4, r0_4, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r9 = 0u;
    r0_5 = ~0u;
    r2_3 = r0_5 + (r3 << 4);
    r1_2 = r0_5 + (r2 << 4);
    r0_6 = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r0_6) = u32(r1_2);
    *gptr<u32>(r0_6 + 4) = u32(r2_3);
    guest::cpu()->r[13] = r13;
    r0_7 = call_0052f074(r0_6, r1_2, r2_3, r3_3);
    r3_4 = guest::cpu()->r[3];
    r0_8 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_0052f200(r0_8, r0_7, r0_6, r3_4);
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f284(r0_10, r0_9, r2_4, r3_5);
    r3_6 = guest::cpu()->r[3];
    r7 = r2 * r3;
    r0_11 = (r7 + (r7 << 1) << 2) + 8u;
    guest::cpu()->r[13] = r13;
    r0_12 = call_00131280(r0_11, r10, 4u, r3_6);
    r0_13 = r0_12 + 8u;
    r8_1 = r0_13 - 8u;
    *gptr<u32>(r8_1) = u32(0xcu);  // (from the original)
    *gptr<u32>(r8_1 + 4) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0_14 = call_00301d0c(r0_13, 0x57bdb0u, 0xcu, r7);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r8 = r0_14;
    if (r0_14 == 0) {
        goto L_581774;
    }
    guest::cpu()->r[13] = r13;
    call_007482bc(r4, r1_3, r2_5, r3_7);
    r2_6 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_15 = r13;
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_15, r4, r2_6, r3_8);
    r2_7 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_16 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_16, r4, r2_7, r3_9);
    r2_8 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r1_4 = r13;
    r0_17 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_007481ec(r0_17, r1_4, r2_8, r3_10);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_18 == 0) {
        goto L_58166c;
    }
    do {
L_5815f0:;
        r5_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1_5 = r13 + 0x18u;  // (from the original)
        r6_1 = *gptr<u32>(r1_5 + 4u);
        guest::cpu()->r[13] = r13;
        r0_19 = call_007482bc(r4, r1_5, r2, r3);
        r3_11 = guest::cpu()->r[3];
        r5_2 = r6_1 * r0_19 + r5_1;
        r6_2 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        r1_6 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r0_20 = r8 + (r5_2 + (r5_2 << 1) << 2);
        guest::cpu()->r[13] = r13;
        r0_21 = call_0057bd78(r0_20, r1_6, r6_2, r3_11);
        r1_7 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        if (r0_21 == 0) {
            goto L_58177c;
        }
        r0_22 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052f144(r0_22, r1_7, r2_9, r3_12);
        r2_10 = guest::cpu()->r[2];
        r3_13 = guest::cpu()->r[3];
        r1_8 = r13;
        r0_23 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_24 = call_007481ec(r0_23, r1_8, r2_10, r3_13);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_24 != 0);
L_58166c:;
    r0_25 = r7 * 0xa1cu + 8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_00131280(r0_25, r10, 4u, r3);
    *gptr<u32>(r0_26) = u32(0xa1cu);  // (from the original)
    *gptr<u32>(r0_26 + 4) = u32(r7);
    r0_27 = r0_26 + 8;
    guest::cpu()->r[13] = r13;
    r0_28 = call_00301d0c(r0_27, 0x6a9834u, 0xa1cu, r7);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r7 = r0_28;
    if (r0_28 == 0) {
        goto L_581790;
    }
    r0_29 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_29, r4, r2_11, r3_14);
    r2_12 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r1_10 = r13;
    r0_30 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_31 = call_007481ec(r0_30, r1_10, r2_12, r3_15);
    r1_3 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_31 == 0) {
        goto L_581750;
    }
    do {
L_5816d0:;
        r5_3 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1_11 = r13 + 0x18u;  // (from the original)
        r6_3 = *gptr<u32>(r1_11 + 4u);
        guest::cpu()->r[13] = r13;
        r0_32 = call_007482bc(r4, r1_11, r2, r3);
        r3_16 = guest::cpu()->r[3];
        r5_4 = r6_3 * r0_32 + r5_3;
        r6_4 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        r1_12 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r0_33 = r7 + (r5_4 * 0x287u << 2);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_34 = call_006a97a0(r0_33, r1_12, r6_4, r3_16);
        r1_7 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        if (r0_34 == 0) {
            goto L_58177c;
        }
        r0_35 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052f144(r0_35, r1_7, r2_9, r3_12);
        r2_13 = guest::cpu()->r[2];
        r3_17 = guest::cpu()->r[3];
        r1_13 = r13;
        r0_36 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_37 = call_007481ec(r0_36, r1_13, r2_13, r3_17);
        r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_37 != 0);
L_581750:;
    ea_1 = r4 + 0x30u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r9);
    ea_2 = r4 + 0x20u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r8);
    ea_3 = ea_2 + 4u;
    *gptr<u32>(ea_3) = u32(r7);
    *gptr<u32>(ea_3 + 0x10u) = u32(r9);  // (from the original)
    r0_14 = 1u;
L_581774:;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_14;
L_58177c:;
    guest::cpu()->r[13] = r13;
    call_005817f0(r4, r1_7, r2_9, r3_12);
    r1_9 = guest::cpu()->r[1];
L_581790:;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    u32 r6_1 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_6 = 0;
    u32 r1_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r5_2 = 0;
    u32 r1_7 = 0;
    u32 r6_2 = 0;
    u32 r2_7 = 0;
    u32 r0_15 = 0;
    u32 r2_8 = 0;
    u32 r1_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    call_007482bc(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_1, r4, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r7 = 0u;
    if (*gptr<u32>(r4 + 0x20u) == 0) {  // (from the original)
        goto L_5818b0;
    }
    r0_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_2, r4, r2, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r1_1 = r13;
    r0_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_007481ec(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        goto L_581898;
    }
    do {
L_58183c:;
        r5_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1_2 = r13 + 0x18u;  // (from the original)
        r6_1 = *gptr<u32>(r1_2 + 4u);
        guest::cpu()->r[13] = r13;
        r0_5 = call_007482bc(r4, r1_2, r2, guest::cpu()->r[3]);
        r2_3 = guest::cpu()->r[2];
        r0_6 = r6_1 * r0_5 + r5_1;
        r1_3 = *gptr<u32>(r4 + 0x20u);  // (from the original)
        r0_7 = r1_3 + (r0_6 + (r0_6 << 1) << 2);
        guest::cpu()->r[13] = r13;
        call_0057bd94(r0_7, r1_3, r2_3, guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r0_8 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052f144(r0_8, r1_4, r2_4, guest::cpu()->r[3]);
        r2_5 = guest::cpu()->r[2];
        r1_5 = r13;
        r0_9 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_10 = call_007481ec(r0_9, r1_5, r2_5, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        guest::preempt();
    } while (r0_10 != 0);
L_581898:;
    r0_11 = *gptr<u32>(r4 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00307888(r0_11, 0x57bdc0u, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x20u) = u32(r7);  // (from the original)
L_5818b0:;
    if (*gptr<u32>(r4 + 0x24u) == 0) {  // (from the original)
        goto L_581958;
    }
    r0_12 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_12, r4, r2, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    r1_6 = r13;
    r0_13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_007481ec(r0_13, r1_6, r2_6, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0_14 == 0) {
        goto L_581940;
    }
    do {
L_5818e0:;
        r5_2 = *gptr<u32>(r13 + 0x18u);  // (from the original)
        r1_7 = r13 + 0x18u;  // (from the original)
        r6_2 = *gptr<u32>(r1_7 + 4u);
        guest::cpu()->r[13] = r13;
        call_007482bc(r4, r1_7, r2, guest::cpu()->r[3]);
        r2_7 = *gptr<u32>(r4 + 0x24u);  // (from the original)
        r0_15 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052f144(r0_15, 0x287u, r2_7, guest::cpu()->r[3]);  // (from the original)
        r2_8 = guest::cpu()->r[2];
        r1_8 = r13;
        r0_16 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_17 = call_007481ec(r0_16, r1_8, r2_8, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        guest::preempt();
    } while (r0_17 != 0);
L_581940:;
    r0_18 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00307888(r0_18, 0x6a987cu, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x24u) = u32(r7);  // (from the original)
L_581958:;
    r5 = 0u;
    do {
L_58195c:;
        r0_19 = r4 + 0x30u;  // (from the original)
        if (r5 < 2u) {
            r0_19 = r0_19 + (r5 << 2);
        }
        if (!(*gptr<u32>(r0_19) == 0)) {
            r0_20 = r4 + 0x30u;  // (from the original)
            if (r5 < 2u) {
                r0_20 = r0_20 + (r5 << 2);
            }
            r0_21 = *gptr<u32>(r0_20);
            guest::cpu()->r[13] = r13;
            call_00307888(r0_21, 0x138b98u, r2, guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r0_22 = r4 + 0x30u;  // (from the original)
            if (r5 < 2u) {
                r0_22 = r0_22 + (r5 << 2);
            }
            *gptr<u32>(r0_22) = u32(r7);
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(2u));
    r0_23 = *gptr<u32>(r4 + 0x2cu);  // (from the original)
    if (r0_23 != 0) {
        guest::cpu()->r[13] = r13;
        call_002ffb64(r0_23, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r4 + 0x2cu) = u32(r7);  // (from the original)
    }
    *gptr<u32>(r4 + 0x28u) = u32(r7);  // (from the original)
    r0_24 = r13;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_24;
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
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_9 = 0;
    u32 r5_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_2 = 0;
    u32 r0_16 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005673c8(r0, r1, r2, r3);
    r4 = r0_1 + 8u;
    *gptr<u32>(r4) = u32(0x8f7434u);  // (from the original)
    r0_2 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00301d0c(r0_2, 0x5673c8u, 8u, 2u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = r0_3 - 4u;
    r8 = 0u;
    *gptr<u32>(r0_4 + 0x14u) = u32(r8);  // (from the original)
    *gptr<u32>(r0_4 + 0x1cu) = u32(r8);  // (from the original)
    *gptr<u32>(r0_4 + 0x18u) = u32(r8);  // (from the original)
    r9 = 0x7ffeu;  // (from the original)
    *gptr<u32>(r0_4 + 0x20u) = u32(r8);  // (from the original)
    *gptr<u8>(r0_4 + 0x24u) = u8(r8);  // (from the original)
    *gptr<u32>(r0_4) = u32(0x8ed5e4u);  // (from the original)
    r0_5 = r0_4 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcbb0(r0_5, r9, r2_1, r3_1);
    *gptr<u32>(r0_6 + 4u) = u32(r8);
    *gptr<u32>(r0_6 + 8u) = u32(r8);
    *gptr<u8>(r0_6 + 0xcu) = u8(0xc8u);  // (from the original)
    *gptr<u8>(r0_6 + 0xdu) = u8(0xc8u);  // (from the original)
    *gptr<u8>(r0_6 + 0xeu) = u8(r8);  // (from the original)
    r0_7 = r0_6 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00301d0c(r0_7, 0x7e9240u, 0x10u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r7 = r0_8 - 0x3cu;  // (from the original)
    *gptr<u8>(r0_8 + 0x20u) = u8(r8);  // (from the original)
    r0_9 = r7 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007e91bc(r0_9, r1_1, r2_2, r3_2);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r7 + 0x3au) = u8(1u);  // (from the original)
    *gptr<u8>(r7 + 0x38u) = u8(r8);  // (from the original)
    r6 = 0u;
    *gptr<u8>(r7 + 0x39u) = u8(r8);  // (from the original)
    do {
L_58237c:;
        r5_1 = r7 + (r6 << 4) + 0x3cu;  // (from the original)
        r0_10 = r13;
        guest::cpu()->r[13] = r13;
        r0_11 = call_002fcbb0(r0_10, r9, r2, r3);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r5_1, r0_11, r2_3, r3_3);
        r3 = guest::cpu()->r[3];
        r4 = ((0xc8u | r4 & ~0xffu) & ~0xff00u | 0xc8u << 8 & 0xff00u) & ~0xff0000u | r8 << 0x10 & 0xff0000u;  // (from the original)
        *gptr<u32>(r5_1 + 4u) = u32(r8);
        *gptr<u32>(r5_1 + 8u) = u32(r8);
        *gptr<u8>(r5_1 + 0xcu) = u8(r4);  // (from the original)
        r6 = r6 + 1u;
        r2 = r4 << 8 >> 0x18;  // (from the original)
        *gptr<u8>(r5_1 + 0xdu) = u8(r4 << 0x10 >> 0x18);  // (from the original)
        *gptr<u8>(r5_1 + 0xeu) = u8(r2);  // (from the original)
        guest::preempt();
    } while (r6 < 2u);
    *gptr<u8>(r7 + 0x5cu) = u8(r8);  // (from the original)
    *gptr<u32>(r7) = u32(0x8f0a58u);  // (from the original)
    r0_12 = r7 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00301d0c(r0_12, 0x5371e0u, 0x114u, 2u);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    *gptr<u32>(r0_13 - 0x60u) = u32(0x8fab0cu);  // (from the original)
    r0_14 = r0_13 + 0x22cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_004f147c(r0_14, 0x8fab0cu, r2_4, r3_4);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_16 = r0_15 - 0x294u;  // (from the original)
    *gptr<u8>(r0_16 + 0x2acu) = u8(r8);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_16;
}

}  // namespace d_005822c4
GUEST_EXPORT(0x005822c4, d_005822c4::f_005822c4);

// f_00582464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582464 {

inline constexpr guest::Function<0x005826e8, u32(u32, u32, u32, u32)> call_005826e8;  // (from the original)
inline constexpr guest::Function<0x005828cc, u32(u32, u32, u32, u32)> call_005828cc;  // (from the original)

u32 f_00582464(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 cf = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_2 = 0;
    u32 zf_2 = 0;
    u32 cf_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r5 = 0xffffu;  // (from the original)
L_582470:;
    if (r4 >= 0xau) {  // (from the original)
        goto L_5824bc;
    }
    r0_1 = r4 + 0x1bu & 0xffu;  // (from the original)
    r0 = call_005826e8(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf_1 = r0 == 0;
    cf_1 = r0 >= 0u;
    if (!zf_1) {
        r3 = r0 + 0x40u;  // (from the original)
        zf_1 = r3 == r0;
        cf_1 = r3 >= r0;
    }
    if (!cf_1 || zf_1) {
        goto L_5824bc;
    }
L_582494:;
    r1 = r0;
    r2 = r0 + 0x20u;  // (from the original)
    if (r2 <= r1) {
        goto L_5824b0;
    }
    do {
L_5824a4:;
        *gptr<u16>(r1) = u16(r5);
        r1 = r1 + 2u;
        guest::preempt();
    } while (r2 > r1);
L_5824b0:;
    r0 = r0 + 0x20u;  // (from the original)
    if (r0 < r3) {
        guest::preempt();
        goto L_582494;
    }
L_5824bc:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_582470;
    }
    r4 = 0u;
    goto L_5824d8;
L_5824d0:;
    if (cf) {
        goto L_58251c;
    }
L_5824d8:;
    r0_2 = r4 + 0xa1u & 0xffu;  // (from the original)
    r0 = call_005826e8(r0_2, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf_2 = r0 == 0;
    cf_2 = r0 >= 0u;
    if (!zf_2) {
        r3 = r0 + 0x40u;  // (from the original)
        zf_2 = r3 == r0;
        cf_2 = r3 >= r0;
    }
    if (!cf_2 || zf_2) {
        goto L_58251c;
    }
L_5824f4:;
    r2 = r0 + 0x20u;  // (from the original)
    r1 = r0;
    if (r2 <= r0) {
        goto L_582510;
    }
    do {
L_582504:;
        *gptr<u16>(r1) = u16(r5);
        r1 = r1 + 2u;
        guest::preempt();
    } while (r2 > r1);
L_582510:;
    r0 = r0 + 0x20u;  // (from the original)
    if (r0 < r3) {
        guest::preempt();
        goto L_5824f4;
    }
L_58251c:;
    r4 = r4 + 1u;
    cf = r4 >= 2u;
    if (!cf) {
        guest::preempt();
        goto L_5824d0;
    }
    r1 = 0xad4df4u;  // (from the original)
    r3 = r1 + 0x40u;  // (from the original)
    if (r1 >= r3) {
        goto L_582560;
    }
L_582538:;
    r2 = r1 + 0x20u;  // (from the original)
    r0 = r1;
    if (r1 >= r2) {
        goto L_582554;
    }
    do {
L_582548:;
        *gptr<u16>(r0) = u16(r5);
        r0 = r0 + 2u;
        guest::preempt();
    } while (r0 < r2);
L_582554:;
    r1 = r1 + 0x20u;  // (from the original)
    if (r1 < r3) {
        guest::preempt();
        goto L_582538;
    }
L_582560:;
    r12 = 0xad4e34u;  // (from the original)
    r3 = 0u;
    goto L_582574;
L_58256c:;
    if (cf) {
        goto L_5825ac;
    }
L_582574:;
    r1 = r12 + (r3 << 6);
    r4 = r1 + 0x40u;  // (from the original)
    if (r1 >= r4) {
        goto L_5825ac;
    }
L_582584:;
    r2 = r1 + 0x20u;  // (from the original)
    r0 = r1;
    if (r1 >= r2) {
        goto L_5825a0;
    }
    do {
L_582594:;
        *gptr<u16>(r0) = u16(r5);
        r0 = r0 + 2u;
        guest::preempt();
    } while (r0 < r2);
L_5825a0:;
    r1 = r1 + 0x20u;  // (from the original)
    if (r1 < r4) {
        guest::preempt();
        goto L_582584;
    }
L_5825ac:;
    r3 = r3 + 1u;
    cf = r3 >= 6u;
    if (!cf) {
        guest::preempt();
        goto L_58256c;
    }
    r1 = 0xad4fb4u;  // (from the original)
    r3 = r1 + 0x40u;  // (from the original)
    if (r1 >= r3) {
        goto L_5825f0;
    }
L_5825c8:;
    r2 = r1 + 0x20u;  // (from the original)
    r0 = r1;
    if (r1 >= r2) {
        goto L_5825e4;
    }
    do {
L_5825d8:;
        *gptr<u16>(r0) = u16(r5);
        r0 = r0 + 2u;
        guest::preempt();
    } while (r0 < r2);
L_5825e4:;
    r1 = r1 + 0x20u;  // (from the original)
    if (r1 < r3) {
        guest::preempt();
        goto L_5825c8;
    }
L_5825f0:;
    r1 = 0xad4ff4u;  // (from the original)
    r3 = r1 + 0x40u;  // (from the original)
    if (r1 >= r3) {
        goto L_582628;
    }
L_582600:;
    r2 = r1 + 0x20u;  // (from the original)
    r0 = r1;
    if (r1 >= r2) {
        goto L_58261c;
    }
    do {
L_582610:;
        *gptr<u16>(r0) = u16(r5);
        r0 = r0 + 2u;
        guest::preempt();
    } while (r0 < r2);
L_58261c:;
    r1 = r1 + 0x20u;  // (from the original)
    if (r1 < r3) {
        guest::preempt();
        goto L_582600;
    }
L_582628:;
    r12 = 0xad51f4u;  // (from the original)
    r3 = 0u;
L_582630:;
    r0 = r12 + (r3 << 6);
    r4 = r0 + 0x40u;  // (from the original)
    if (r0 >= r4) {
        goto L_582668;
    }
L_582640:;
    r2 = r0 + 0x20u;  // (from the original)
    r1 = r0;
    if (r0 >= r2) {
        goto L_58265c;
    }
    do {
L_582650:;
        *gptr<u16>(r1) = u16(r5);
        r1 = r1 + 2u;
        guest::preempt();
    } while (r1 < r2);
L_58265c:;
    r0 = r0 + 0x20u;  // (from the original)
    if (r0 < r4) {
        guest::preempt();
        goto L_582640;
    }
L_582668:;
    r3 = r3 + 1u;
    if (r3 < 6u) {
        guest::preempt();
        goto L_582630;
    }
    r0 = call_005828cc(r0, r1, r2, r3);
    r1 = 0xad5034u;  // (from the original)
    r3 = r1 + 0x40u;  // (from the original)
    if (r1 >= r3) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_582688:;
    r2 = r1 + 0x20u;  // (from the original)
    r0 = r1;
    if (r1 >= r2) {
        goto L_5826a4;
    }
    do {
L_582698:;
        *gptr<u16>(r0) = u16(r5);
        r0 = r0 + 2u;
        guest::preempt();
    } while (r0 < r2);
L_5826a4:;
    r1 = r1 + 0x20u;  // (from the original)
    if (r1 < r3) {
        guest::preempt();
        goto L_582688;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00582464
GUEST_EXPORT(0x00582464, d_00582464::f_00582464);

// f_005826d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005826d0 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_005826d0(u32 r0, u32 r1_unused, u32 r2) {
    u32 r0_1 = 0;
    if (r2 >= 2u) {
        return r0;
    }
    r0_1 = r0 + (r2 << 5);
    return call_002f8574(r0_1, guest::cpu()->r[1], 0x20u, guest::cpu()->r[3]);  // (from the original)
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r0_16 = 0;
    u32 r1_9 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74e0(0x80u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r0_2 = call_002f74e0(0x2000u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_582730;
        }
    }
    r0_3 = call_006f9c08(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r0_4 = r0_3 + 0x22u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_4;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
L_582730:;
    r0_5 = call_005b4358(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        r0_6 = r0 - 0xa1u;  // (from the original)
        if (r0_6 >= 2u) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_3;
            return 0u;
        } else {
        }
        r0_7 = 0xad4af4u + (r0_6 << 6);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0xad4af4u;  // (from the original)
        return r0_7;
    }
    r0_8 = call_002f74e0(0x40u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_8 != 0) {
        r0_9 = call_005b449c(0x40u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_4 = guest::cpu()->r[1];
        if (r0_9 < 0xau) {  // (from the original)
            r0_10 = 0xad4b74u + (r0_9 << 6);  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = 0xad4b74u;  // (from the original)
            return r0_10;
        }
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    r0_11 = call_002f74e0(0x4000u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    if (r0_11 != 0) {
        r0_12 = call_006fb030(r0, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
        if (r0_12 < 6u) {
            r0_13 = 0xad4e34u + (r0_12 << 6);  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = 0xad4e34u;  // (from the original)
            return r0_13;
        }
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return 0u;
    }
    if (r0 == 0x25u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 0xad4df4u;  // (from the original)
    }
    r0_14 = call_002f74e0(0x400000u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    if (r0_14 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_7;
        return 0xad4fb4u;  // (from the original)
    }
    if (r0 == 0x55u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_7;
        return 0xad4ff4u;  // (from the original)
    }
    if (r0 != 0x46u) {  // (from the original)
        if (r0 == 0x2bu) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_7;
            return 0xad5074u;  // (from the original)
        }
        if (r0 == 0x3eu) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_7;
            return 0xad50b4u;  // (from the original)
        }
        if (r0 == 0x3fu) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_7;
            return 0xad50f4u;  // (from the original)
        }
        if (r0 == 0x40u) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_7;
            return 0xad5134u;  // (from the original)
        }
        if (r0 == 0x42u) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_7;
            return 0xad5174u;  // (from the original)
        }
        if (r0 == 0x67u) {  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_7;
            return 0xad51b4u;  // (from the original)
        }
    } else {
        r0_14 = call_006cb9fc(r0_14, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
        if (r0_14 != 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_7;
            return 0xad5034u;  // (from the original)
        }
    }
    r0_15 = call_006e0b2c(r0_14, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    if (r0_15 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_8;
        return 0u;
    }
    r0_16 = call_005b4954(r0, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    if (r0_16 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_9;
        return 0u;
    }
    r0_17 = r0 - 0x81u;  // (from the original)
    if (r0_17 < 6u) {
        r0_18 = 0xad51f4u + (r0_17 << 6);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0xad51f4u;  // (from the original)
        return r0_18;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_9;
    return 0u;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_005826e8(r3, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r1_1 = r1 & 0xfu;  // (from the original)
        r0_1 = lsr_r(u32(*gptr<u16>(r0_1 + ((r2 & 1u) << 5) + (r1_1 << 1))), r0 & 0xfu) & 1u;  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00582b1c
GUEST_EXPORT(0x00582b1c, d_00582b1c::f_00582b1c);

// f_00582c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582c9c {

inline constexpr guest::Function<0x00152dc8, u32(u32, u32, u32, u32)> call_00152dc8;  // (from the original)

u32 f_00582c9c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00152dc8(r0, 0u, r1, guest::cpu()->r[3]);
    zf_1 = r0_1 == 0;
    if (zf_1) {
        *gptr<u8>(r0 + 0xa8u) = u8(1u);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r0_1;
    return 1u;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_a8);
    if (r0_1 != 2u) {
        r0_2 = 1u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    r0_3 = call_004df800(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r0_4 = call_00153a68(r0_3, r0, 0u, r3_1);
    r1 = guest::cpu()->r[1];
    zf_1 = r0_4 == 0;
    if (!zf_1) {
        zf_1 = r0_4 == 5u;
    }
    if (zf_1) {
        r0_5 = call_00153758(r0, r0_3, 0u, 0u);
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        call_00152770(r0_3, 0u, r2_1, r3_2);
        r1 = guest::cpu()->r[1];
        if (r0_5 == 0) {
            goto L_582dac;
        }
    }
    r0_2 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
L_582dac:;
    *gptr<u8>(r0 + 0xa8u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00582d40
GUEST_EXPORT(0x00582d40, d_00582d40::f_00582d40);

// f_00582e4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582e4c {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002d31ec, u32(u32, u32, u32, u32)> call_002d31ec;  // (from the original)

u32 f_00582e4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_001e5894(r0_1, r1, r2, r3);
    r3_1 = r13 + 8u;
    r0_2 = *global_0094d080;
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    r0_3 = r0_2 + 0xbc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002d31ec(r0_3, r0, r1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_00582e4c
GUEST_EXPORT(0x00582e4c, d_00582e4c::f_00582e4c);

// f_00582f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f18 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;  // (from the original)

u32 f_00582f18() {
    u32 r0_1 = 0;
    if (u32(*gptr<u8>(*global_0094ccb8 + 0x10u)) == 2u) {  // (from the original)
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_00582f18
GUEST_EXPORT(0x00582f18, d_00582f18::f_00582f18);

// f_00582f38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f38 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;  // (from the original)

u32 f_00582f38() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(s8(*gptr<u8>(*global_0094ccb8 + 0x1ebfu))));  // (from the original)
    return r0_1;
}

}  // namespace d_00582f38
GUEST_EXPORT(0x00582f38, d_00582f38::f_00582f38);

// f_00582f50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f50 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;  // (from the original)

u32 f_00582f50() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(s16(*gptr<u16>(*global_0094ccb8 + 0x12u))));  // (from the original)
    return r0_1;
}

}  // namespace d_00582f50
GUEST_EXPORT(0x00582f50, d_00582f50::f_00582f50);

// f_00582f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f64 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;  // (from the original)

u32 f_00582f64() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(s16(*gptr<u16>(*global_0094ccb8 + 0x1eb6u))));  // (from the original)
    return r0_1;
}

}  // namespace d_00582f64
GUEST_EXPORT(0x00582f64, d_00582f64::f_00582f64);

// f_00582fa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582fa4 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;  // (from the original)

u32 f_00582fa4() {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(*global_0094ccb8 + 0x18u);  // (from the original)
    return r0_1;
}

}  // namespace d_00582fa4
GUEST_EXPORT(0x00582fa4, d_00582fa4::f_00582fa4);

// f_00582ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582ffc {

inline guest::global<u8, 0x0094e438> global_0094e438;  // (from the original)
inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline constexpr guest::Function<0x0032ae24, u32(u32, u32, u32, u32)> call_0032ae24;  // (from the original)

u32 f_00582ffc(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_00952c3c;
    call_0032ae24(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e438 = u8(1u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x94e438u;  // (from the original)
    return 1u;
}

}  // namespace d_00582ffc
GUEST_EXPORT(0x00582ffc, d_00582ffc::f_00582ffc);

// f_00583024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583024 {

inline guest::global<u8, 0x0094e438> global_0094e438;  // (from the original)
inline constexpr guest::Function<0x00123528, u32(u32, u32, u32, u32)> call_00123528;  // (from the original)

u32 f_00583024(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    call_00123528(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e438 = u8(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x94e438u;  // (from the original)
    return 0u;
}

}  // namespace d_00583024
GUEST_EXPORT(0x00583024, d_00583024::f_00583024);

// f_00583040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583040 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;  // (from the original)
inline constexpr guest::Function<0x0032ae8c, u32(u32, u32, u32, u32)> call_0032ae8c;  // (from the original)

u32 f_00583040() {
    u32 r0_1 = 0;
    r0_1 = *global_0094ccb8;
    return call_0032ae8c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00583040
GUEST_EXPORT(0x00583040, d_00583040::f_00583040);

// f_00583050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583050 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;  // (from the original)
inline constexpr guest::Function<0x0032af5c, u32(u32, u32, u32, u32)> call_0032af5c;  // (from the original)

u32 f_00583050() {
    u32 r0_1 = 0;
    r0_1 = *global_0094ccb8;
    return call_0032af5c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00583050
GUEST_EXPORT(0x00583050, d_00583050::f_00583050);

// f_005830a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005830a0 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;  // (from the original)

u32 f_005830a0() {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(*global_0094ccb8 + 0x10u));  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_005830a0
GUEST_EXPORT(0x005830a0, d_005830a0::f_005830a0);

// f_005830d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005830d0 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;  // (from the original)
inline constexpr guest::Function<0x0032b774, u32(u32, u32, u32, u32)> call_0032b774;  // (from the original)

u32 f_005830d0() {
    u32 r0_1 = 0;
    r0_1 = *global_0094ccb8;
    return call_0032b774(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005830d0
GUEST_EXPORT(0x005830d0, d_005830d0::f_005830d0);

// f_005830f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005830f8 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0027680c, u32(u32, u32, u32, u32)> call_0027680c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00767084, u32(u32, u32, u32, u32)> call_00767084;  // (from the original)
inline constexpr guest::Function<0x0076c6e4, u32(u32, u32, u32, u32)> call_0076c6e4;  // (from the original)

u32 f_005830f8(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r4_1 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_1 + 0x6e21au;  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0076c6e4(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = r13;
    r0_3 = *global_0094d080 + 0x68cu;  // (from the original)
    if (u32(*gptr<u8>(r0_3 + 0x30u)) != 0) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_3 = *gptr<u32>(r0_3 + 0xc0u);  // (from the original)
    if (r0_3 != 0 && r0_3 >> 0x1f == (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    call_00134544(0x986a80u, r1_2, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r4_1 = *global_0094d080;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00767084(r4_1, r1_3, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_3 = u32(*gptr<u8>(r4_1 + 0xc5du));  // (from the original)
    if (r0_3 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_4 = r4_1 + 0x68cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0027680c(r0_4, r0, 0x986a80u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005830f8
GUEST_EXPORT(0x005830f8, d_005830f8::f_005830f8);

// f_005831a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005831a0 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0027680c, u32(u32, u32, u32, u32)> call_0027680c;  // (from the original)
inline constexpr guest::Function<0x00767084, u32(u32, u32, u32, u32)> call_00767084;  // (from the original)
inline constexpr guest::Function<0x0076c6e4, u32(u32, u32, u32, u32)> call_0076c6e4;  // (from the original)

u32 f_005831a0(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0076c6e4(r1, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = r13;
    r0_1 = *global_0094d080 + 0x68cu;  // (from the original)
    if (u32(*gptr<u8>(r0_1 + 0x30u)) != 0) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_1 = *gptr<u32>(r0_1 + 0xc0u);  // (from the original)
    if (r0_1 != 0 && r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    call_00134544(0x986a80u, r1_2, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r4_1 = *global_0094d080;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00767084(r4_1, r1_3, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_1 = u32(*gptr<u8>(r4_1 + 0xc5du));  // (from the original)
    if (r0_1 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r4_1 + 0x68cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0027680c(r0_2, r0, 0x986a80u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005831a0
GUEST_EXPORT(0x005831a0, d_005831a0::f_005831a0);

// f_00583238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583238 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x0027680c, u32(u32, u32, u32, u32)> call_0027680c;  // (from the original)
inline constexpr guest::Function<0x00767084, u32(u32, u32, u32, u32)> call_00767084;  // (from the original)

u32 f_00583238(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *global_0094d080 + 0x68cu;  // (from the original)
    if (u32(*gptr<u8>(r0_1 + 0x30u)) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = *gptr<u32>(r0_1 + 0xc0u);  // (from the original)
    if (r0_1 != 0 && r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    call_00134544(0x986a80u, r1, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r4_1 = *global_0094d080;
    r0_1 = call_00767084(r4_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = u32(*gptr<u8>(r4_1 + 0xc5du));  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = r4_1 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_3 = r0_2 + 0x28cu;  // (from the original)
    return call_0027680c(r0_3, r0, 0x986a80u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00583238
GUEST_EXPORT(0x00583238, d_00583238::f_00583238);

// f_005832c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005832c0 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x001d5348, u32(u32, u32, u32, u32)> call_001d5348;  // (from the original)

u32 f_005832c0(u32 r0) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    r2_1 = *global_0094d080;
    r0_1 = r2_1 + 0x754u;  // (from the original)
    return call_001d5348(r0_1, r0, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005832c0
GUEST_EXPORT(0x005832c0, d_005832c0::f_005832c0);

// f_0058332c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058332c {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

u32 f_0058332c() {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(*global_0094d080 + 0x768u));  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0058332c
GUEST_EXPORT(0x0058332c, d_0058332c::f_0058332c);

// f_00583348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583348 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

u32 f_00583348() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(s8(*gptr<u8>(*global_0094d080 + 0x600u))));  // (from the original)
    return r0_1;
}

}  // namespace d_00583348
GUEST_EXPORT(0x00583348, d_00583348::f_00583348);

// f_005833b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005833b0 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x006b2104, u32(u32, u32, u32, u32)> call_006b2104;  // (from the original)

u32 f_005833b0(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *global_0094d080;
    return call_006b2104(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005833b0
GUEST_EXPORT(0x005833b0, d_005833b0::f_005833b0);

// f_005833e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005833e4 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x001d7610, u32(u32, u32, u32, u32)> call_001d7610;  // (from the original)

u32 f_005833e4() {
    u32 r0_1 = 0;
    r0_1 = *global_0094d080 + 0x754u;  // (from the original)
    return call_001d7610(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005833e4
GUEST_EXPORT(0x005833e4, d_005833e4::f_005833e4);

// f_00583474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583474 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002d3404, u32(u32, u32, u32, u32)> call_002d3404;  // (from the original)

u32 f_00583474(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_001e5894(r0_1, r0, r2, r3);
    r2_1 = r13;
    r0_2 = *global_0094d080 + 0xbc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002d3404(r0_2, r0, r2_1, r1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00583474
GUEST_EXPORT(0x00583474, d_00583474::f_00583474);

// f_005834e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005834e0 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

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
    r0 = *global_0094d080 + 0x594u;  // (from the original)
    guest::preempt();
    goto L_2e6d1c;
}

}  // namespace d_005834e0
GUEST_EXPORT(0x005834e0, d_005834e0::f_005834e0);

// f_005834fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005834fc {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

u32 f_005834fc(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    goto L_5834fc;
L_5834fc:;
    r0_2 = *global_0094d080 + 0xb00u;  // (from the original)
    r0_3 = r0_2 + 0xc0u;  // (from the original)
    *gptr<u32>(r0_3) = u32(r0);
    *gptr<u32>(r0_3 + 4) = u32(r1);
    guest::cpu()->r[1] = r0;
    return r0_3;
}

}  // namespace d_005834fc
GUEST_EXPORT(0x005834fc, d_005834fc::f_005834fc);

// f_00583578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583578 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x004db540, u32(u32, u32, u32, u32)> call_004db540;  // (from the original)
inline constexpr guest::Function<0x00767084, u32(u32, u32, u32, u32)> call_00767084;  // (from the original)

u32 f_00583578(u32 r0_unused, u32 r1, u32 r2) {
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    goto L_583578;
L_583578:;
    guest::cpu()->r[13] -= 8u;
    r4_1 = *global_0094d080;
    r0_2 = call_00767084(r4_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r0_3 = u32(*gptr<u8>(r4_1 + 0xc5du));  // (from the original)
    if (r0_3 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    r0_4 = r4_1 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0_5 = r0_4 + 0x28cu;  // (from the original)
    r0_6 = r0_5 + 0x6cu;  // (from the original)
    return call_004db540(r0_6, 0x1000f84u, 0u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00583578
GUEST_EXPORT(0x00583578, d_00583578::f_00583578);

// f_00583640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583640 {

inline guest::global<u8, 0x0094e424> global_0094e424;  // (from the original)

void f_00583640(u32 r0) {
    *gptr<u32>(0x94e424u + 8u) = u32(r0);  // (from the original)
    *global_0094e424 = u8(1u);
    guest::cpu()->r[1] = 0x94e424u;  // (from the original)
    return;
}

}  // namespace d_00583640
GUEST_EXPORT(0x00583640, d_00583640::f_00583640);

// f_00583658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583658 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x001d5e0c, u32(u32, u32, u32, u32)> call_001d5e0c;  // (from the original)

u32 f_00583658() {
    u32 r0_1 = 0;
    r0_1 = *global_0094d080 + 0x754u;  // (from the original)
    return call_001d5e0c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00583658
GUEST_EXPORT(0x00583658, d_00583658::f_00583658);

// f_00583670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583670 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

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
    r0 = *global_0094d080 + 0x754u;  // (from the original)
    guest::preempt();
    goto L_1d5e74;
}

}  // namespace d_00583670
GUEST_EXPORT(0x00583670, d_00583670::f_00583670);

// f_00583704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583704 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

u32 f_00583704() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    r0_1 = *global_0094d080 + 0x68cu;  // (from the original)
    r1_1 = u32(*gptr<u8>(r0_1 + 0x30u));  // (from the original)
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_2 = *gptr<u32>(r0_1 + 0xc0u);  // (from the original)
    if (r0_2 == 0 || r0_2 >> 0x1f != (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00583704
GUEST_EXPORT(0x00583704, d_00583704::f_00583704);

// f_00583790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583790 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

u32 f_00583790() {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(*global_0094d080 + 0x6c0u);  // (from the original)
    return r0_1;
}

}  // namespace d_00583790
GUEST_EXPORT(0x00583790, d_00583790::f_00583790);

// f_005837b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005837b8 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

u32 f_005837b8() {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(*global_0094d080 + 0x788u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_005837b8
GUEST_EXPORT(0x005837b8, d_005837b8::f_005837b8);

// f_00583824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583824 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x001d6868, u32(u32, u32, u32, u32)> call_001d6868;  // (from the original)

u32 f_00583824() {
    u32 r0_1 = 0;
    r0_1 = *global_0094d080 + 0x754u;  // (from the original)
    return call_001d6868(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00583824
GUEST_EXPORT(0x00583824, d_00583824::f_00583824);

// f_0058383c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058383c {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

u32 f_0058383c() {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(*global_0094d080 + 0x708u));  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0058383c
GUEST_EXPORT(0x0058383c, d_0058383c::f_0058383c);

// f_00583890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583890 {


void f_00583890(u32 r0) {
    *gptr<u16>(0x94e424u + 2u) = u16(r0);  // (from the original)
    guest::cpu()->r[1] = 0x94e424u;  // (from the original)
    return;
}

}  // namespace d_00583890
GUEST_EXPORT(0x00583890, d_00583890::f_00583890);

// f_005838d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005838d4 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

u32 f_005838d4() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(s8(*gptr<u8>(*global_0094d080 + 0x836u))));  // (from the original)
    return r0_1;
}

}  // namespace d_005838d4
GUEST_EXPORT(0x005838d4, d_005838d4::f_005838d4);

// f_0058394c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058394c {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x0058660c, u32(u32, u32, u32, u32)> call_0058660c;  // (from the original)
inline constexpr guest::Function<0x00766f1c, u32(u32, u32, u32, u32)> call_00766f1c;  // (from the original)

u32 f_0058394c(u32 r0, u32 r1) {
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    zf_1 = r0 == 0x27u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0 == 0x9du;  // (from the original)
    }
    if (!zf_1) {
        zf_1 = r0 == 0x9eu;  // (from the original)
    }
    if (zf_1) {
        goto L_5839b0;
    }
    r0_1 = *global_0094d080;
    r0_2 = call_00766f1c(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_5839b8;
    }
    r0_3 = *global_00aaf14c;
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    res_1 = u32(*gptr<u8>(0x5701u + r0_3)) << 0x1e;  // (from the original)
    r1 = res_1;
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_5839b0;
    }
    res_2 = u32(*gptr<u8>(r0_3 + 0x572bu)) >> 7;  // (from the original)
    if (res_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
L_5839b0:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5839b8:;
    r0_4 = call_0058660c(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0_5 = u32(*gptr<u16>(r0_4 + 0xeu));  // (from the original)
    if ((r0_5 & 0x40u) != 0) {  // (from the original)
        guest::preempt();
        goto L_5839b0;
    }
    r0_6 = call_00305f2c(r0_5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_6 == 3u) {
        guest::preempt();
        goto L_5839b0;
    }
    r0_7 = *global_0094d080;
    r0 = call_00766f1c(r0_7, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0058394c
GUEST_EXPORT(0x0058394c, d_0058394c::f_0058394c);

// f_00583a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583a08 {


void f_00583a08(u32 r0) {
    *gptr<u16>(0x94e424u + 4u) = u16(r0);  // (from the original)
    guest::cpu()->r[1] = 0x94e424u;  // (from the original)
    return;
}

}  // namespace d_00583a08
GUEST_EXPORT(0x00583a08, d_00583a08::f_00583a08);

// f_00583a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583a18 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x0027689c, u32(u32, u32, u32, u32)> call_0027689c;  // (from the original)

u32 f_00583a18(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r4);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r3_1 = *global_0094d080;
    r2_1 = r13 + 4u;
    r0_1 = r3_1 + 0x68cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0027689c(r0_1, r0, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 8u;
    ea_2 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_2);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00583a18
GUEST_EXPORT(0x00583a18, d_00583a18::f_00583a18);

// f_00583b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583b8c {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

u32 f_00583b8c() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(s8(*gptr<u8>(*global_0094d080 + 0x835u))));  // (from the original)
    return r0_1;
}

}  // namespace d_00583b8c
GUEST_EXPORT(0x00583b8c, d_00583b8c::f_00583b8c);

// f_00583ca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583ca8 {

inline guest::global<u32, 0x0094cd08> global_0094cd08;  // (from the original)

u32 f_00583ca8() {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(*global_0094cd08 + 0x90u));  // (from the original)
    return r0_1;
}

}  // namespace d_00583ca8
GUEST_EXPORT(0x00583ca8, d_00583ca8::f_00583ca8);

// f_00583dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583dc4 {

inline guest::global<u32, 0x0094cd08> global_0094cd08;  // (from the original)

u32 f_00583dc4() {
    u32 r0_1 = 0;
    float S0_1 = 0;
    r0_1 = *global_0094cd08;
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x94u));  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_00583dc4
GUEST_EXPORT(0x00583dc4, d_00583dc4::f_00583dc4);

// f_005840f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005840f8 {

inline guest::global<u8, 0x0094e484> global_0094e484;  // (from the original)
inline constexpr guest::Function<0x0058440c, u32(u32, u32, u32, u32)> call_0058440c;  // (from the original)
inline constexpr guest::Function<0x0058b060, u32(u32, u32, u32, u32)> call_0058b060;  // (from the original)

u32 f_005840f8() {
    guest::cpu()->r[13] -= 8u;
    if (u32(*global_0094e484) != 0) {
        call_0058b060(0x989bd8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    call_0058440c(0x98a018u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(0x94e484u + 2u) = u8(0u);  // (from the original)
    *gptr<u8>(0x94e484u + 3u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_005840f8
GUEST_EXPORT(0x005840f8, d_005840f8::f_005840f8);

// f_00584150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00584150 {

inline guest::global<u8, 0x0094e4a4> global_0094e4a4;  // (from the original)
inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32, u32, u32)> call_00309bd4;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)
inline constexpr guest::Function<0x003188f0, u32(u32, u32, u32, u32)> call_003188f0;  // (from the original)
inline constexpr guest::Function<0x00589480, u32(u32, u32, u32, u32)> call_00589480;  // (from the original)
inline constexpr guest::Function<0x00589678, u32(u32, u32, u32, u32)> call_00589678;  // (from the original)
inline constexpr guest::Function<0x00589698, u32(u32, u32, u32, u32)> call_00589698;  // (from the original)

u32 f_00584150(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r4_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00589678(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *global_0094e4a4 = u8(r0_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00589698(r0_1, r1_1, r2_1, r3_1);
    *gptr<u8>(0x94e4a4u + 1u) = u8(r0_2);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00589480(0x3bu, 0x2du, 0u, 0u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_5841b8;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_003188f0(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 7u) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_002fb378(r0_4, r1_3, r2_2, r3_2);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_6 = call_00309bd4(7u, r0_5, r2_3, r3_3);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            r0_3 = 0u;
            goto L_5841b8;
        }
    }
    r0_3 = 1u;
L_5841b8:;
    *gptr<u8>(0x94e4a4u + 2u) = u8(r0_3);  // (from the original)
    *gptr<u8>(0x94e4a4u + 3u) = u8(0u);  // (from the original)
    *gptr<u8>(0x94e4a4u + 4u) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x584210u);  // (from the original)
    r4_1 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    r0_7 = *global_00975338;
    guest::cpu()->r[13] = r13;
    r0_8 = call_003045a8(r0_7, 0x9047f8u, r2_2, r3_2);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_9 = call_0031758c(r0, 0x400u, r0_8, r4_1);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_00584150
GUEST_EXPORT(0x00584150, d_00584150::f_00584150);

// f_00584250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00584250 {


u32 f_00584250() {
    *gptr<u8>(0x98a074u + 0x14u) = u8(0u);  // (from the original)
    *gptr<u8>(0x98a074u + 0x16u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 0x98a074u;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    r1_1 = u32(arg0->byte_c);
    if (r1_1 != 0x2cu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
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
    r4_1 = arg0->word_8;
    r0_1 = u32(*gptr<u8>(r4_1 + 0x20u));  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_00584074(r0_1, r1_1, r2, r3);
        r1_2 = ~0u;
        ea_2 = r13;
        *gptr<u32>(ea_2) = u32(0xcu);  // (from the original)
        r2_1 = 0xcu - (r1_2 << 0x18);  // (from the original)
        ea_3 = r13 + 4u;
        *gptr<u32>(ea_3) = u32(r1_2);
        *gptr<u32>(ea_3 + 4) = u32(0u);
        guest::cpu()->r[13] = r13;
        call_0058bc7c(r0_2, 3u, r2_1, 5u);
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
        *gptr<u8>(r4_1 + 0x1fu) = u8(0u);  // (from the original)
        *gptr<u8>(r4_1 + 0x1eu) = u8(r0_1);  // (from the original)
        *gptr<u8>(r4_1 + 0x22u) = u8(r0_1);  // (from the original)
    }
    r13 = r13 + 0xcu;  // (from the original)
    ea_4 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_2 = *gptr<u32>(ea_4);
    r5_1 = *gptr<u32>(ea_4 + 4);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00584d78
GUEST_EXPORT(0x00584d78, d_00584d78::f_00584d78);

// f_00585410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00585410 {

inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_00585410(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005673c8(r0, guest::cpu()->r[1], r2, r3);
    *gptr<u32>(r0_1 + 8u) = u32(0u);
    *gptr<u8>(r0_1 + 0xcu) = u8(0x39u);  // (from the original)
    *gptr<u16>(r0_1 + 0xeu) = u16(4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_1;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    u32 r0_6 = 0;
    u32 zf_2 = 0;
    u32 r0_7 = 0;
    u32 zf_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 1u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_005c2ce0(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_1 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_00753088(r0_1, 0x2eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_588dd0;
    }
    r0 = *gptr<u32>(r0);
    if (u32(*gptr<u8>(0x94e490u + 1u)) == 0) {  // (from the original)
        goto L_588db0;
    }
    r1 = 0x44d40000u;  // (from the original)
    if (s32(r0) < s32(r1)) {
        goto L_588dbc;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_588db0:;
    r1 = 0x43e00000u;  // (from the original)
    if (s32(r0) <= s32(r1)) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_588dbc:;
    r0_3 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0058c5f0(r0_3, 0x2eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
L_588dd0:;
    r0_4 = call_00584134(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = call_00753088(r0_4, 0x2fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    zf_1 = r0_5 == 0;
    r1 = 0x43d00000u;  // (from the original)
    r0_6 = u32(*gptr<u8>(0x94e490u + 1u));  // (from the original)
    if (zf_1) {
        goto L_588e2c;
    }
    zf_2 = r0_6 == 0;
    r0 = *gptr<u32>(r0);
    if (!zf_2) {
        if (s32(r0) > s32(r1)) {
            goto L_588e18;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x44cb0000u;  // (from the original)
    if (s32(r0) >= s32(r1)) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_588e18:;
    r0_7 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0058c5f0(r0_7, 0x2fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
L_588e2c:;
    zf_3 = r0_6 == 0;
    r0 = *gptr<u32>(r0);
    if (!zf_3) {
        r1 = 0x44d80000u;  // (from the original)
        if (s32(r0) > s32(r1)) {
            goto L_588e50;
        }
        goto L_588e64;
    }
    if (s32(r0) >= s32(r1)) {
        goto L_588e74;
    }
L_588e50:;
    r0_8 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0058c514(r0_8, 0x2eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
L_588e64:;
    r1 = 0x43b00000u;  // (from the original)
    if (s32(r1) > s32(r0)) {
        goto L_588e80;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_588e74:;
    r1 = 0x44d30000u;  // (from the original)
    if (s32(r1) >= s32(r0)) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_588e80:;
    r0_9 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0058c514(r0_9, 0x2fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00588d54
GUEST_EXPORT(0x00588d54, d_00588d54::f_00588d54);

// f_005897b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005897b0 {

inline constexpr guest::Function<0x0058332c, u32(u32, u32, u32, u32)> call_0058332c;  // (from the original)

u32 f_005897b0(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0058332c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 ^ 1u;
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_005897b0
GUEST_EXPORT(0x005897b0, d_005897b0::f_005897b0);

// f_005897c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005897c0 {

inline guest::global<u32, 0x0084558c> global_0084558c;  // (from the original)
inline guest::global<u8, 0x0094e4a9> global_0094e4a9;  // (from the original)
inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> call_0058aee8;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)
inline constexpr guest::Function<0x0058c514, u32(u32, u32, u32, u32)> call_0058c514;  // (from the original)
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32, u32, u32)> call_0058c5f0;  // (from the original)
inline constexpr guest::Function<0x0058c90c, u32(u32, u32, u32, u32)> call_0058c90c;  // (from the original)

u32 f_005897c0(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 ea_4 = 0;
    u32 r4_1 = 0;
    r1_1 = u32(*global_0094e4a9);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return 0x94e4a9u;  // (from the original)
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u8>(0x94e4a9u + 1u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00584074(0x94e4a9u, r1_1, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    r3_1 = *global_0084558c;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0058aee8(r0_1, 1u, 0u, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00584074(r0_2, r1_2, r2_1, r3_2);
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r13 + 4u;
    *gptr<u32>(ea_3) = u32(~0u);
    *gptr<u32>(ea_3 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_0058bc7c(r0_3, 0x11u, 0u, 0x14u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00584134(r0_4, r1_3, r2_2, r3_3);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_0058c5f0(r0_5, 0x10u, r2_3, r3_4);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_00584134(r0_6, r1_4, r2_4, r3_5);
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_0058c514(r0_7, 0x11u, r2_5, r3_6);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_00584134(r0_8, r1_5, r2_6, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r13 = r13 + 0x10u;  // (from the original)
    ea_4 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_4);
    r14 = *gptr<u32>(ea_4 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    return call_0058c90c(r0_9, r1_6, r2_7, r3_8);
}

}  // namespace d_005897c0
GUEST_EXPORT(0x005897c0, d_005897c0::f_005897c0);

// f_005899ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005899ac {

inline guest::global<u8, 0x0094e4a9> global_0094e4a9;  // (from the original)
inline constexpr guest::Function<0x005838d4, u32(u32, u32, u32, u32)> call_005838d4;  // (from the original)

u32 f_005899ac() {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = u32(s32(s8(*global_0094e4a9)));
    r0_1 = u32(s32(s8(*gptr<u8>(0x94e4a9u + 1u))));  // (from the original)
    if ((r0_1 & r1_1) == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = call_005838d4(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005899ac
GUEST_EXPORT(0x005899ac, d_005899ac::f_005899ac);

// f_005899e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005899e0 {

inline guest::global<u32, 0x00845580> global_00845580;  // (from the original)
inline guest::global<u32, 0x00845584> global_00845584;  // (from the original)
inline guest::global<u8, 0x0094e4a9> global_0094e4a9;  // (from the original)
inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> call_0058aee8;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)

u32 f_005899e0(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 ea_4 = 0;
    u32 r4_1 = 0;
    r1_1 = u32(*global_0094e4a9);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return 0x94e4a9u;  // (from the original)
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u8>(0x94e4a9u + 1u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00584074(0x94e4a9u, r1_1, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(*global_00845584);
    *gptr<u32>(r13 + 4) = u32(0u);
    r3_1 = *global_00845580;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0058aee8(r0_1, 1u, 0u, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00584074(r0_2, r1_2, r2_1, r3_2);
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r13 + 4u;
    *gptr<u32>(ea_3) = u32(~0u);
    *gptr<u32>(ea_3 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_0058bc7c(r0_3, 0x11u, 0u, 0x14u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    ea_4 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_4);
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_005899e0
GUEST_EXPORT(0x005899e0, d_005899e0::f_005899e0);

// f_00589a5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589a5c {

inline guest::global<u32, 0x0084557c> global_0084557c;  // (from the original)
inline guest::global<u8, 0x0094e4a9> global_0094e4a9;  // (from the original)
inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;  // (from the original)

u32 f_00589a5c(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    r1_1 = u32(*global_0094e4a9);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return 0x94e4a9u;  // (from the original)
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 8;
    *gptr<u8>(0x94e4a9u + 1u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00584074(0x94e4a9u, 1u, r2, r3);  // (from the original)
    r3_1 = *global_0084557c;
    ea_2 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_2);
    r14 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    return call_0058bc3c(r0_1, 1u, 0u, r3_1);
}

}  // namespace d_00589a5c
GUEST_EXPORT(0x00589a5c, d_00589a5c::f_00589a5c);

// f_00589ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589ad4 {

inline guest::global<u8, 0x0094e4a9> global_0094e4a9;  // (from the original)
inline constexpr guest::Function<0x00583b8c, u32(u32, u32, u32, u32)> call_00583b8c;  // (from the original)

u32 f_00589ad4() {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = u32(s32(s8(*global_0094e4a9)));
    r0_1 = u32(s32(s8(*gptr<u8>(0x94e4a9u + 1u))));  // (from the original)
    if ((r0_1 & r1_1) == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = call_00583b8c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00589ad4
GUEST_EXPORT(0x00589ad4, d_00589ad4::f_00589ad4);

// f_00589da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589da8 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32, u32, u32)> call_00309bd4;  // (from the original)
inline constexpr guest::Function<0x003188f0, u32(u32, u32, u32, u32)> call_003188f0;  // (from the original)
inline constexpr guest::Function<0x00342cb8, u32(u32, u32, u32, u32)> call_00342cb8;  // (from the original)
inline constexpr guest::Function<0x0058383c, u32(u32, u32, u32, u32)> call_0058383c;  // (from the original)
inline constexpr guest::Function<0x00589480, u32(u32, u32, u32, u32)> call_00589480;  // (from the original)
inline constexpr guest::Function<0x00589678, u32(u32, u32, u32, u32)> call_00589678;  // (from the original)
inline constexpr guest::Function<0x00589698, u32(u32, u32, u32, u32)> call_00589698;  // (from the original)

u32 f_00589da8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 res_1 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_3 = 0;
    u32 r0_10 = 0;
    goto L_589da8;
L_589da8:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0_2 = u32(*gptr<u8>(r0 + 3u));
    r5 = r1;
    r6 = r2;
    if (r0_2 != 0) {
        goto L_589e30;
    }
    if (r5 == 0) {
        goto L_589e30;
    }
    r0_3 = call_00589678(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r4) = u8(r0_3);
    r0_4 = call_00589698(r0_3, r1_1, r2_1, r3_1);
    *gptr<u8>(r4 + 1u) = u8(r0_4);
    r0_5 = call_00589480(0x3bu, 0x2du, 0u, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        r0_6 = call_003188f0(r0_5, r1, r2_2, r3);
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_6 != 7u) {
            goto L_589e54;
        }
        r0_7 = call_002fb378(r0_6, r1, r2_3, r3);
        r2_4 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_8 = call_00309bd4(7u, r0_7, r2_4, r3_2);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_8 == 0) {
            goto L_589e54;
        }
    }
    r2 = 0u;
L_589e20:;
    *gptr<u8>(r4 + 2u) = u8(r2);
    *gptr<u8>(r4 + 3u) = u8(0u);
    *gptr<u8>(r4 + 4u) = u8(0u);
L_589e30:;
    res_1 = r5 | r6;
    r0_9 = res_1;
    *gptr<u8>(r4 + 3u) = u8(r5);
    if (res_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_9;
    }
    r0_9 = call_0058383c(r0_9, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_9;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_10 = *global_0094d080 + 0x6f8u;  // (from the original)
    return call_00342cb8(r0_10, 0x14u, r2_5, r3_3);  // (from the original)
L_589e54:;
    r2 = 1u;
    guest::preempt();
    goto L_589e20;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    if (r1 == 0) {
        r0_1 = 0x10000beu;  // (from the original)
    } else {
        r0_1 = 0x10000bfu;  // (from the original)
    }
    r13 = r13 - 0x18u;  // (from the original)
    arg0->word_10 = u32(r0_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00584074(r0_1, r1, r2, r3);
    r1_1 = ~0u;
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r1_1);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r1_1);
    *gptr<u32>(ea_2 + 4) = u32(0u);
    r2_1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0058bc7c(r0_2, 6u, r2_1, 5u);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_00584134(r0_3, r1_2, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0058c514(r0_4, 0x15u, r2_3, r3_2);  // (from the original)
}

}  // namespace d_00589f74
GUEST_EXPORT(0x00589f74, d_00589f74::f_00589f74);

// f_0058a018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a018 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)

u32 f_0058a018(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00584074(guest::cpu()->r[0], r1, r2, r3);
    r1_1 = ~0u;
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r1_1);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r1_1);
    *gptr<u32>(ea_2 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_0058bc7c(guest::cpu()->r[0], 3u, 0x100009cu, 5u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00584074(r0, r1, r2, r3);
    r1_1 = ~0u;
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r1_1);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r1_1);
    *gptr<u32>(ea_2 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0058bc7c(r0_1, 3u, 0x100026au, 5u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x14u) = u8(0u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0058a1d8
GUEST_EXPORT(0x0058a1d8, d_0058a1d8::f_0058a1d8);

// f_0058a294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a294 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bb2c, u32(u32, u32, u32, u32)> call_0058bb2c;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)

u32 f_0058a294(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00584074(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r2_1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0058bb2c(r0_1, 6u, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00584074(r0_2, r1_1, r2_2, r3_2);
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4) = u32(~0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    r2_3 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0058bc7c(r0_3, 6u, r2_3, 5u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0058a294
GUEST_EXPORT(0x0058a294, d_0058a294::f_0058a294);

// f_0058a3c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a3c4 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;  // (from the original)

u32 f_0058a3c4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00584074(guest::cpu()->r[0], r1, r2, r3);
    r1_1 = ~0u;
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r1_1);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r1_1);
    *gptr<u32>(ea_2 + 4) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_0058bc7c(guest::cpu()->r[0], 2u, 0x100009eu, 5u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
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
    guest::cpu()->r[13] -= 8u;
    call_00584074(guest::cpu()->r[0], r1, r2, r3);
    guest::cpu()->r[13] += 8u;
    return call_0058bc3c(guest::cpu()->r[0], 3u, 0x100009cu, r1);  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00584074(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(r1);
    r2_1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0058aee8(r0_1, 6u, r2_1, 5u);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00584134(r0_2, r1_1, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0058c5f0(r0_3, 0x15u, r2_3, r3_2);  // (from the original)
}

}  // namespace d_0058a56c
GUEST_EXPORT(0x0058a56c, d_0058a56c::f_0058a56c);

// f_0058a608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a608 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;  // (from the original)

u32 f_0058a608(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00584074(r0, r1, r2, r3);
    call_0058bc3c(r0_1, 3u, 0x100026au, r1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x14u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0058a608
GUEST_EXPORT(0x0058a608, d_0058a608::f_0058a608);

// f_0058a72c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a72c {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;  // (from the original)

u32 f_0058a72c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    call_00584074(guest::cpu()->r[0], r1, r2, r3);
    guest::cpu()->r[13] += 8u;
    return call_0058bc3c(guest::cpu()->r[0], 2u, 0x100009eu, r1);  // (from the original)
}

}  // namespace d_0058a72c
GUEST_EXPORT(0x0058a72c, d_0058a72c::f_0058a72c);

// f_0058a7f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a7f4 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;  // (from the original)

u32 f_0058a7f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00584074(r0, r1, r2, r3);
    r2_1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0058bc3c(r0_1, 6u, r2_1, 0u);
}

}  // namespace d_0058a7f4
GUEST_EXPORT(0x0058a7f4, d_0058a7f4::f_0058a7f4);

// f_0058a880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a880 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058bb2c, u32(u32, u32, u32, u32)> call_0058bb2c;  // (from the original)

u32 f_0058a880(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00584074(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0058bb2c(r0_1, 6u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0058a880
GUEST_EXPORT(0x0058a880, d_0058a880::f_0058a880);

// f_0058a96c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a96c {

inline guest::global<u32, 0x0058aa18> global_0058aa18;  // (from the original)
inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> call_00584074;  // (from the original)
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> call_0058aee8;  // (from the original)
inline constexpr guest::Function<0x0058b618, u32(u32, u32, u32, u32)> call_0058b618;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x0060be28, u32(u32, u32, u32, u32)> call_0060be28;  // (from the original)

u32 f_0058a96c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    u32 r0_3 = 0;
    float S0_5 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_5 = 0;
    u32 r1_4 = 0;
    float S0_6 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_00584074(r0, r1, r2, r3);
    S0_1 = guest::cpu()->s[0];
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    r2_1 = *gptr<u32>(0x8458dcu + (*gptr<u32>(r0 + 4u) << 4) + (*gptr<u32>(r0 + 0xcu) << 2));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_0058aee8(r0_1, 0x13u, r2_1, 5u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r0 + 0xcu) + 2u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    call_0060be28(0x1cu, r1_1, r2_2, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = std::bit_cast<float>(*global_0058aa18);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_2 = call_0058d3b4(0x10004b1u, r1_2, r2_3, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    r0_3 = call_00584074(r0_2, r1_3, r2_4, r3_3);
    S0_5 = guest::cpu()->s[0];
    ea_1 = r13 + 4u;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r13 + 8u;
    *gptr<u32>(ea_2) = u32(~0u);
    *gptr<u32>(ea_2 + 4) = u32(0u);
    *gptr<u32>(r13) = u32(5u);
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    r2_5 = *gptr<u32>(0x8458dcu + (*gptr<u32>(r0 + 4u) << 4) + (*gptr<u32>(r0 + 0xcu) << 2));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    call_0058b618(r0_3, 0x14u, r2_5, 0x12u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    S0_6 = guest::cpu()->s[0];
    *gptr<u8>(r0 + 1u) = u8(1u);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    return 1u;
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
    return call_0058bb2c(guest::cpu()->r[0], 5u, 0u, guest::cpu()->r[3]);
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
    u32 r0_1 = 0;
    goto L_58ad84;
L_58ad84:;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(*gptr<u8>(0x94e484u + 1u));  // (from the original)
    if (r0_1 == 0) {
        r0_1 = call_005c5df8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u8>(0x94e484u + 1u) = u8(r0_1);  // (from the original)
    }
    call_00589534(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0058b764(0x989bd8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005852f4(0x98a018u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0058c90c(0x98a030u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 0x989bc0u;  // (from the original)
}

}  // namespace d_0058ad84
GUEST_EXPORT(0x0058ad84, d_0058ad84::f_0058ad84);

// f_0058aea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058aea0 {

struct __attribute__((packed)) Object_0058aea0_0 {
    u8 unknown_0[0x414];  // (not used here)
    u32 word_414;
};
GUEST_OFFSET(Object_0058aea0_0, word_414, 0x414);  // (from the original)


u32 f_0058aea0(gptr<Object_0058aea0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4_1 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 4u;
    r0 = arg0->word_414;
    r3 = 1u;
L_58aeac:;
    if (r0 == 0) {
        guest::cpu()->r[13] += 4u;
        return r0;
    }
    r4_1 = u32(*gptr<u8>(r0 + 4u));
    zf_1 = r4_1 == r1;
    if (r4_1 >= r1 && !zf_1) {
        guest::cpu()->r[13] += 4u;
        return r0;
    }
    if (zf_1) {
        zf_1 = *gptr<u32>(r0 + 8u) == r2;
    }
    if (!zf_1) {
        r0 = *gptr<u32>(r0);
        guest::preempt();
        goto L_58aeac;
    }
    if (r0 != 0) {
        *gptr<u8>(r0 + 0x1fu) = u8(r3);  // (from the original)
        r0 = *gptr<u32>(r0);
        guest::preempt();
        goto L_58aeac;
    }
    guest::cpu()->r[13] += 4u;
    return r0;
}

}  // namespace d_0058aea0
GUEST_EXPORT(0x0058aea0, d_0058aea0::f_0058aea0);

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
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    r1_1 = u32(arg0->byte_4);
    if (r1_1 == 0x1du) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    } else {
        r1 = 1u;
    }
    do {
L_58b07c:;
        r2_1 = r0 + (r1 + (r1 << 3) << 2);
        if (u32(*gptr<u8>(r2_1 + 4u)) == 0x1du) {  // (from the original)
            r1_2 = r1 + (r1 << 3);
            r0_1 = r0 + (r1_2 << 2);
            guest::cpu()->r[1] = r1_2;
            return r0_1;
        }
        if (u32(*gptr<u8>(r2_1 + 0x28u)) == 0x1du) {  // (from the original)
            r1_3 = r1 + (r1 << 3);
            r0_2 = r0 + (r1_3 << 2) + 0x24u;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            return r0_2;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (s32(r1) < s32(0x1du));  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r7_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r1_1 = r13 + 0x18u;  // (from the original)
    r7_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0xc));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    r0_1 = call_0058b06c(r0, r1_1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    r1_2 = r0_1;
    if (r0_1 != 0) {
        *gptr<u32>(r1_2) = u32(0u);
        *gptr<u8>(r1_2 + 0x1cu) = u8(0u);  // (from the original)
        *gptr<u8>(r1_2 + 0x1fu) = u8(0u);  // (from the original)
        *gptr<u8>(r1_2 + 0x22u) = u8(0u);  // (from the original)
        *gptr<u8>(r1_2 + 4u) = u8(r1);
        *gptr<u32>(r1_2 + 8u) = u32(r2);
        *gptr<u32>(r1_2 + 0x14u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
        *gptr<u32>(r1_2 + 0x18u) = u32(std::bit_cast<u32>(S3_2));  // (from the original)
        r2_1 = r1_2 + 0xcu;  // (from the original)
        *gptr<u32>(r2_1) = u32(std::bit_cast<u32>(S1_2));
        *gptr<u32>(r2_1 + 4) = u32(std::bit_cast<u32>(S2_2));
        *gptr<u8>(r1_2 + 0x23u) = u8(r3);  // (from the original)
        *gptr<u8>(r1_2 + 0x21u) = u8(r7_1);  // (from the original)
        *gptr<u8>(r1_2 + 0x20u) = u8(1u);  // (from the original)
        *gptr<u8>(r1_2 + 0x1eu) = u8(0u);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        guest::cpu()->s[3] = S3_2;
        call_0058af50(r0, r1_2, 1u, r3_1);
        r1_2 = guest::cpu()->r[1];
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        r0_1 = 1u;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_1;
}

}  // namespace d_0058b618
GUEST_EXPORT(0x0058b618, d_0058b618::f_0058b618);

// f_0058b694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b694 {

struct __attribute__((packed)) Object_0058b694_0 {
    u8 unknown_0[0x414];  // (not used here)
    u32 word_414;
};
GUEST_OFFSET(Object_0058b694_0, word_414, 0x414);  // (from the original)


u32 f_0058b694(gptr<Object_0058b694_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 4u;
    r0 = arg0->word_414;
    r4 = 1u;
    goto L_58b6e0;
L_58b6a4:;
    if (u32(*gptr<u8>(r0 + 0x20u)) == 0) {  // (from the original)
        goto L_58b6dc;
    }
    if (r3 != r1) {
        goto L_58b6dc;
    }
    if (u32(*gptr<u8>(r0 + 0x23u)) != r2) {  // (from the original)
        goto L_58b6dc;
    }
    if (r0 != 0) {
        *gptr<u8>(r0 + 0x1fu) = u8(r4);  // (from the original)
        r0 = *gptr<u32>(r0);
        goto L_58b6e0;
    }
    guest::cpu()->r[13] += 4u;
    return r0;
L_58b6dc:;
    r0 = *gptr<u32>(r0);
L_58b6e0:;
    if (r0 == 0) {
        guest::cpu()->r[13] += 4u;
        return r0;
    }
    r3 = u32(*gptr<u8>(r0 + 4u));
    if (r3 <= r1) {
        guest::preempt();
        goto L_58b6a4;
    }
    guest::cpu()->r[13] += 4u;
    return r0;
}

}  // namespace d_0058b694
GUEST_EXPORT(0x0058b694, d_0058b694::f_0058b694);

// f_0058b6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b6fc {

inline constexpr guest::Function<0x00583640, u32(u32, u32, u32, u32)> call_00583640;  // (from the original)
inline constexpr guest::Function<0x0058af50, u32(u32, u32, u32, u32)> call_0058af50;  // (from the original)
inline constexpr guest::Function<0x0058b06c, u32(u32, u32, u32, u32)> call_0058b06c;  // (from the original)

u32 f_0058b6fc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_0058b06c(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = r0_1;
    if (r0_1 != 0) {
        *gptr<u32>(r1_1) = u32(0u);
        *gptr<u8>(r1_1 + 0x1cu) = u8(0u);  // (from the original)
        *gptr<u8>(r1_1 + 0x1fu) = u8(0u);  // (from the original)
        *gptr<u8>(r1_1 + 0x20u) = u8(0u);  // (from the original)
        *gptr<u8>(r1_1 + 0x21u) = u8(0u);  // (from the original)
        *gptr<u8>(r1_1 + 0x22u) = u8(0u);  // (from the original)
        *gptr<u32>(r1_1 + 0xcu) = u32(r2);  // (from the original)
        *gptr<u8>(r1_1 + 4u) = u8(0x1bu);  // (from the original)
        *gptr<u32>(r1_1 + 0x10u) = u32(~0u);  // (from the original)
        *gptr<u32>(r1_1 + 8u) = u32(r1);
        call_0058af50(r0, r1_1, 0x1bu, guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        call_00583640(r1, r1_2, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r7_1 = 0;
    u32 zf_1 = 0;
    u32 r8_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
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
    r7_1 = u32(*gptr<u8>(r3 + 4u));
    zf_1 = r7_1 == r12;
    if (r7_1 >= r12 && !zf_1) {
        goto L_58bb88;
    }
    if (zf_1) {
        r8_1 = *gptr<u32>(r3 + 8u);
        zf_1 = r8_1 == r2;
    }
    if (!zf_1) {
        r3 = *gptr<u32>(r3);
        guest::preempt();
        goto L_58bb44;
    }
    if (r3 == 0) {
        goto L_58bb88;
    }
    ea_1 = r3 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r6);
    ea_2 = r3 + 0x14u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r4);
    *gptr<u32>(ea_2 + 4) = u32(r5);
    *gptr<u8>(r3 + 0x1fu) = u8(1u);  // (from the original)
    r3 = *gptr<u32>(r3);
    guest::preempt();
    goto L_58bb40;
L_58bb88:;
    r4_1 = r0 + 0x41cu;  // (from the original)
    if (u32(*gptr<u8>(r0 + 0x428u)) != r12) {  // (from the original)
        goto L_58bbcc;
    }
    if (u32(*gptr<u8>(r4_1 + 4u)) == 1u) {
        goto L_58bbcc;
    }
    guest::cpu()->r[13] = r13;
    call_0058acfc(r4_1, 0u, 0u, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4_1) = u32(0u);
    *gptr<u8>(r4_1 + 4u) = u8(8u);
L_58bbcc:;
    if (*gptr<u32>(r4_1 + 0x10u) == r12) {  // (from the original)
        *gptr<u8>(r4_1 + 0x15u) = u8(0u);  // (from the original)
    }
    r0_1 = u32(*gptr<u8>(r4_1 + 0x1cu));  // (from the original)
    if (r0_1 != r12) {
        goto L_58bc18;
    }
    r0_1 = u32(*gptr<u8>(r4_1 + 0x1du));  // (from the original)
    if (r0_1 == 0) {
        goto L_58bc18;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0058acfc(r4_1, 0u, 1u, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r4_1 + 0x1du) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00584134(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = u32(*gptr<u8>(r4_1 + 0x1eu));  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0058c5f0(r0_3, r1_2, r2_2, r3_2);
L_58bc18:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0058bb2c
GUEST_EXPORT(0x0058bb2c, d_0058bb2c::f_0058bb2c);

// f_0058bc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058bc3c {

struct __attribute__((packed)) Object_0058bc3c_0 {
    u8 unknown_0[0x414];  // (not used here)
    u32 word_414;
};
GUEST_OFFSET(Object_0058bc3c_0, word_414, 0x414);  // (from the original)


u32 f_0058bc3c(gptr<Object_0058bc3c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 4u;
    r0 = arg0->word_414;
    if (r0 == 0) {
        guest::cpu()->r[13] += 4u;
        return r0;
    }
    do {
L_58bc4c:;
        r12_1 = u32(*gptr<u8>(r0 + 4u));
        zf_1 = r12_1 == r1;
        cf_1 = r12_1 >= r1;
        if (zf_1) {
            r4_1 = *gptr<u32>(r0 + 8u);
            zf_1 = r4_1 == r2;
            cf_1 = r4_1 >= r2;
        }
        if (zf_1) {
            *gptr<u32>(r0 + 0xcu) = u32(r3);  // (from the original)
        } else {
            zf_1 = r12_1 == r1;
            cf_1 = r12_1 >= r1;
        }
        if (cf_1 && !zf_1) {
            guest::cpu()->r[13] += 4u;
            return r0;
        }
        r0 = *gptr<u32>(r0);
        guest::preempt();
    } while (r0 != 0);
    guest::cpu()->r[13] += 4u;
    return r0;
}

}  // namespace d_0058bc3c
GUEST_EXPORT(0x0058bc3c, d_0058bc3c::f_0058bc3c);

// f_0058bc7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058bc7c {

inline constexpr guest::Function<0x00582de4, u32(u32, u32, u32, u32)> call_00582de4;  // (from the original)
inline constexpr guest::Function<0x00583640, u32(u32, u32, u32, u32)> call_00583640;  // (from the original)
inline constexpr guest::Function<0x00583658, u32(u32, u32, u32, u32)> call_00583658;  // (from the original)
inline constexpr guest::Function<0x0058af50, u32(u32, u32, u32, u32)> call_0058af50;  // (from the original)
inline constexpr guest::Function<0x0058b06c, u32(u32, u32, u32, u32)> call_0058b06c;  // (from the original)

u32 f_0058bc7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S2_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S2_3 = 0;
    u32 zf_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r6_1 = r1;
    r1_1 = r13 + 0x20u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 8));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_1 = call_0058b06c(r0, r1_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    if (r0_1 == 0) {
        goto L_58bd24;
    }
    *gptr<u32>(r0_1) = u32(0u);
    *gptr<u8>(r0_1 + 0x1cu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x1fu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x20u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x21u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x22u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 4u) = u8(r6_1);
    *gptr<u32>(r0_1 + 8u) = u32(r2);
    *gptr<u32>(r0_1 + 0x14u) = u32(r3);  // (from the original)
    *gptr<u32>(r0_1 + 0x18u) = u32(std::bit_cast<u32>(S2_2));  // (from the original)
    r1_2 = r0_1 + 0xcu;  // (from the original)
    *gptr<u32>(r1_2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1_2 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u8>(r0_1 + 0x1eu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x23u) = u8(0x32u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_2;
    call_0058af50(r0, r0_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    zf_1 = r6_1 == 3u;
    if (!zf_1) {
        zf_1 = r6_1 == 2u;
    }
    if (!zf_1) {
        zf_1 = r6_1 == 4u;
    }
    *gptr<u8>(r0_1 + 0x22u) = u8(1u);  // (from the original)
    if (zf_1) {
        goto L_58bd28;
    }
    if (r6_1 == 1u) {
        goto L_58bd3c;
    }
    if (r6_1 == 0x18u) {  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2_3;
        call_00582de4(r2, r1, r2_2, r3_2);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    } else {
        *gptr<u8>(r0_1 + 0x22u) = u8(0u);  // (from the original)
    }
L_58bd20:;
    r0_1 = 1u;
L_58bd24:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
L_58bd28:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_3;
    call_00583640(r2, r1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    guest::preempt();
    goto L_58bd20;
L_58bd3c:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_3;
    call_00583658(1u, r1, r2_2, r3_2);
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301d0c(r0, 0x58c478u, 0x24u, 0x1du);  // (from the original)
    ea_1 = r0_1 + 0x414u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_1 + 0x418u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r0_1 + 0x41cu;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u8>(ea_3 + 4u) = u8(1u);
    *gptr<u8>(ea_3 + 0x15u) = u8(0u);  // (from the original)
    *gptr<u8>(ea_3 + 0x1du) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x43cu) = u8(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r0_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0058be00
GUEST_EXPORT(0x0058be00, d_0058be00::f_0058be00);

// f_0058be48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058be48 {

inline guest::global<u8, 0x00950708> global_00950708;  // (from the original)
inline guest::global<u8, 0x0095070d> global_0095070d;  // (from the original)
inline constexpr guest::Function<0x00292d28, u32(u32, u32, u32, u32)> call_00292d28;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32, u32, u32)> call_00309bd4;  // (from the original)
inline constexpr guest::Function<0x0030ba54, u32(u32, u32, u32, u32)> call_0030ba54;  // (from the original)
inline constexpr guest::Function<0x003188f0, u32(u32, u32, u32, u32)> call_003188f0;  // (from the original)
inline constexpr guest::Function<0x0058e090, u32(u32, u32, u32, u32)> call_0058e090;  // (from the original)

u32 f_0058be48(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 zf_1 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00305f2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 3u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_2 = call_002fb378(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_3 = call_003188f0(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_4 = call_00292d28(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        r0 = r0;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (u32(*gptr<u8>(r0 + 0x13u)) != 0) {  // (from the original)
        goto L_58bec0;
    }
    if (u32(*gptr<u8>(r0 + 0x14u)) == 0) {  // (from the original)
        goto L_58beb4;
    }
    if (u32(*global_00950708) != 1u) {
        goto L_58beb4;
    }
    if (u32(*global_0095070d) == 0) {
        goto L_58bec0;
    }
L_58beb4:;
    r0_5 = u32(*gptr<u8>(r0 + 0x15u));  // (from the original)
    if (r0_5 == 0) {
        goto L_58bec8;
    }
L_58bec0:;
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_58bec8:;
    if (r0_3 == 7u) {
        r0_6 = call_002fb378(r0_5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_7 = call_00309bd4(7u, r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            r0 = r0 + 0x20u;  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0_8 = u32(*gptr<u8>(r0_2 + 4u));
    zf_1 = r0_8 == 1u;
    if (zf_1) {
        r0_8 = u32(*gptr<u8>(r0_2 + 5u));
        zf_1 = r0_8 == 1u;
    }
    if (zf_1) {
        r0_8 = u32(s32(s8(*gptr<u8>(r0_2 + 7u))));
        if (s32(r0_8) < s32(6u)) {
            r0 = r0 + 0x30u;  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0_9 = call_0030ba54(r0_8, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_9 == 0xfu) {  // (from the original)
        r0_10 = call_002fb378(r0_9, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_9 = call_00309bd4(0xfu, r0_10, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_9 != 0) {
            r0 = r0 + 0x40u;  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (r0_3 != 8u) {
        if (r0_3 == 2u) {
            goto L_58bfa4;
        }
        if (r0_3 == 5u) {
            goto L_58bfc8;
        }
        if (r0_3 == 4u) {
            r0 = r0 + 0x64u;  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r0_3 == 9u) {
            r0 = r0 + 0x6cu;  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r0_3 == 0xau) {  // (from the original)
            r0 = r0 + 0x78u;  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_11 = call_002fb378(r0_9, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_12 = call_00309bd4(8u, r0_11, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_12 != 0) {
        r0 = r0 + 0x18u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_58bfa4:;
    r0_13 = call_002fb378(r0_9, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_14 = call_00309bd4(2u, r0_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_14 != 0) {
        r0 = r0 + 0x48u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_58bfc8:;
    r0_15 = u32(*gptr<u8>(r0 + 0x5cu));  // (from the original)
    if (r0_15 != 0) {
        r0_20 = r0 + 0x50u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_20;
    }
    r0_16 = call_002fb378(r0_15, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_17 = call_0058e090(5u, r0_16, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_17 != 0) {
        r0_20 = r0 + 0x50u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_20;
    }
    r0_18 = call_002fb378(r0_17, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_19 = call_00309bd4(5u, r0_18, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_19 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_20 = r0 + 0x50u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_20;
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
    arg0->byte_5 = u8(0u);
    arg0->byte_6 = u8(0u);
    arg0->word_0 = u32(0x9066d8u);  // (from the original)
    arg0->byte_7 = u8(0u);
    arg0->byte_8 = u8(0u);
    arg0->byte_11 = u8(0u);
    arg0->byte_12 = u8(0u);
    arg0->word_c = u32(0x9062f0u);  // (from the original)
    arg0->byte_13 = u8(0u);
    arg0->byte_14 = u8(0u);
    arg0->byte_15 = u8(0u);
    arg0->byte_17 = u8(0u);
    arg0->byte_1d = u8(0u);
    arg0->byte_1e = u8(0u);
    arg0->word_18 = u32(0x906a00u);  // (from the original)
    arg0->byte_25 = u8(0u);
    arg0->byte_26 = u8(0u);
    arg0->word_20 = u32(0x9069b8u);  // (from the original)
    arg0->byte_35 = u8(0u);
    arg0->byte_36 = u8(0u);
    arg0->word_30 = u32(0x9063c8u);  // (from the original)
    arg0->byte_45 = u8(0u);
    arg0->byte_46 = u8(0u);
    arg0->word_40 = u32(0x906ebcu);  // (from the original)
    arg0->byte_4d = u8(0u);
    arg0->byte_4e = u8(0u);
    arg0->word_48 = u32(0x906a48u);  // (from the original)
    arg0->byte_55 = u8(0u);
    arg0->byte_56 = u8(0u);
    arg0->word_58 = u32(0x100026du);  // (from the original)
    arg0->word_50 = u32(0x906380u);  // (from the original)
    arg0->byte_5c = u8(0u);
    arg0->byte_69 = u8(0u);
    arg0->byte_6a = u8(0u);
    arg0->word_64 = u32(0x906410u);  // (from the original)
    arg0->byte_71 = u8(0u);
    arg0->byte_72 = u8(0u);
    arg0->word_6c = u32(0x906690u);  // (from the original)
    arg0->byte_7d = u8(0u);
    arg0->byte_7e = u8(0u);
    arg0->word_78 = u32(0x906338u);  // (from the original)
    guest::cpu()->r[1] = 0x906338u;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r5_1 = arg0->word_20;
    r6_1 = arg0->word_24;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002faa30(1u, 0u, r1, 0u);
    r1_1 = guest::cpu()->r[1];
    r0_2 = r0_1 | r5_1;
    r1_2 = r1_1 | r6_1;
    ea_1 = r0 + 0x20u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0_2);
    *gptr<u32>(ea_1 + 4) = u32(r1_2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
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

inline guest::global<u32, 0x00845f30> global_00845f30;  // (from the original)

u32 f_0058c704(gptr<Object_0058c704_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    r0_1 = r0 + 0x18u;  // (from the original)
    r1_1 = *global_00845f30 & arg0->word_18;
    r2_1 = *gptr<u32>(0x845f30u + 4u) & arg0->word_1c;  // (from the original)
    arg0->word_18 = u32(r1_1);
    arg0->word_1c = u32(r2_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0058c704
GUEST_EXPORT(0x0058c704, d_0058c704::f_0058c704);

// f_0058c90c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c90c {

inline guest::global<u32, 0x0094e4b0> global_0094e4b0;  // (from the original)
inline constexpr guest::Function<0x0058c730, u32(u32, u32, u32, u32)> call_0058c730;  // (from the original)

u32 f_0058c90c(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    call_0058c730(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e4b0 = u32(1u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x94e4b0u;  // (from the original)
    return 1u;
}

}  // namespace d_0058c90c
GUEST_EXPORT(0x0058c90c, d_0058c90c::f_0058c90c);

// f_0058c9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c9e0 {

inline guest::global<u8, 0x0094e488> global_0094e488;  // (from the original)
inline guest::global<u32, 0x0098a068> global_0098a068;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00582e38, u32(u32, u32, u32, u32)> call_00582e38;  // (from the original)
inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_0058c9e0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    *global_0094e488 = u8(1u);
    r0_1 = call_0062f03c(1u, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = u32(*gptr<u8>(0x94e488u + 1u));  // (from the original)
    if (r1_1 == r0_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    *gptr<u8>(0x94e488u + 1u) = u8(r0_1);  // (from the original)
    r0_2 = call_002fb378(r0_1, r1_1, r2_1, r3_1);
    r2_2 = *gptr<u32>(r0_2 + 4);
    r3_2 = *gptr<u32>(r0_2 + 8);
    *global_0098a068 = u32(*gptr<u32>(r0_2));
    *gptr<u32>(0x98a068u + 4) = u32(r2_2);  // (from the original)
    *gptr<u32>(0x98a068u + 8) = u32(r3_2);  // (from the original)
    r1_2 = u32(*gptr<u8>(0x94e488u + 1u));  // (from the original)
    r0_3 = u32(*gptr<u8>(0x84539bu + r1_2));  // (from the original)
    *gptr<u8>(0x94e488u + 2u) = u8(r0_3);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00582e38(r0_3, r1_2, r2_2, r3_2);
}

}  // namespace d_0058c9e0
GUEST_EXPORT(0x0058c9e0, d_0058c9e0::f_0058c9e0);

// f_0058cb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb20 {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)

u32 f_0058cb20() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(s8(*gptr<u8>(*global_0094d090 + 0x63du))));  // (from the original)
    return r0_1;
}

}  // namespace d_0058cb20
GUEST_EXPORT(0x0058cb20, d_0058cb20::f_0058cb20);

// f_0058cb38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb38 {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)
inline constexpr guest::Function<0x001d9578, u32(u32, u32, u32, u32)> call_001d9578;  // (from the original)

u32 f_0058cb38(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *global_0094d090;
    return call_001d9578(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cb38
GUEST_EXPORT(0x0058cb38, d_0058cb38::f_0058cb38);

// f_0058cb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb60 {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)
inline constexpr guest::Function<0x001d960c, u32(u32, u32, u32, u32)> call_001d960c;  // (from the original)

u32 f_0058cb60(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *global_0094d090;
    return call_001d960c(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cb60
GUEST_EXPORT(0x0058cb60, d_0058cb60::f_0058cb60);

// f_0058cb74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb74 {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)
inline constexpr guest::Function<0x0033e248, u32(u32, u32, u32, u32)> call_0033e248;  // (from the original)

u32 f_0058cb74() {
    u32 r0 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    goto L_58cb74;
L_1d9690:;
    r1_1 = u32(*gptr<u8>(r0 + 0x15u));  // (from the original)
    if (r1_1 != 2u) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    ea_1 = r0 + 0x10u;  // (from the original)
    r1_2 = *gptr<u32>(ea_1);
    r0_1 = ea_1 + 0x24u;  // (from the original)
    return call_0033e248(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
L_58cb74:;
    r0 = *global_0094d090;
    guest::preempt();
    goto L_1d9690;
}

}  // namespace d_0058cb74
GUEST_EXPORT(0x0058cb74, d_0058cb74::f_0058cb74);

// f_0058cb84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb84 {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)

u32 f_0058cb84(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r0_1 = 0;
    goto L_58cb84;
L_33e360:;
    r0_1 = r0 + 0x34u;  // (from the original)
    if (u32(*gptr<u8>(r0_1)) != 5u) {
        r0_1 = r0_1 + 0x5e0u;  // (from the original)
        *gptr<u32>(r0_1) = u32(r1);
        *gptr<u32>(r0_1 + 4) = u32(r2);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
L_58cb84:;
    r2 = r1;
    r1 = r0;
    r0 = *global_0094d090;
    guest::preempt();
    goto L_33e360;
}

}  // namespace d_0058cb84
GUEST_EXPORT(0x0058cb84, d_0058cb84::f_0058cb84);

// f_0058cb9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb9c {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)

u32 f_0058cb9c() {
    u32 r0_1 = 0;
    if (u32(*gptr<u8>(*global_0094d090 + 0x34u)) >= 2u) {  // (from the original)
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0058cb9c
GUEST_EXPORT(0x0058cb9c, d_0058cb9c::f_0058cb9c);

// f_0058cbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbbc {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)

u32 f_0058cbbc() {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(*global_0094d090 + 0x38u) & 0xffu;  // (from the original)
    return r0_1;
}

}  // namespace d_0058cbbc
GUEST_EXPORT(0x0058cbbc, d_0058cbbc::f_0058cbbc);

// f_0058cbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbd4 {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)
inline constexpr guest::Function<0x001d982c, u32(u32, u32, u32, u32)> call_001d982c;  // (from the original)

u32 f_0058cbd4() {
    u32 r0_1 = 0;
    r0_1 = *global_0094d090;
    return call_001d982c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cbd4
GUEST_EXPORT(0x0058cbd4, d_0058cbd4::f_0058cbd4);

// f_0058cbe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbe4 {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)
inline constexpr guest::Function<0x001d987c, u32(u32, u32, u32, u32)> call_001d987c;  // (from the original)

u32 f_0058cbe4() {
    u32 r0_1 = 0;
    r0_1 = *global_0094d090;
    return call_001d987c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cbe4
GUEST_EXPORT(0x0058cbe4, d_0058cbe4::f_0058cbe4);

// f_0058cbf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbf4 {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)
inline constexpr guest::Function<0x001d9934, u32(u32, u32, u32, u32)> call_001d9934;  // (from the original)

u32 f_0058cbf4() {
    u32 r0_1 = 0;
    r0_1 = *global_0094d090;
    return call_001d9934(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cbf4
GUEST_EXPORT(0x0058cbf4, d_0058cbf4::f_0058cbf4);

// f_0058cc04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cc04 {

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)
inline constexpr guest::Function<0x001d99ec, u32(u32, u32, u32, u32)> call_001d99ec;  // (from the original)

u32 f_0058cc04() {
    u32 r0_1 = 0;
    r0_1 = *global_0094d090;
    return call_001d99ec(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cc04
GUEST_EXPORT(0x0058cc04, d_0058cc04::f_0058cc04);

// f_0058ce80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ce80 {

inline guest::global<u8, 0x0094e446> global_0094e446;  // (from the original)
inline constexpr guest::Function<0x00122f70, u32(u32, u32, u32, u32)> call_00122f70;  // (from the original)
inline constexpr guest::Function<0x0058d2d4, u32(u32, u32, u32, u32)> call_0058d2d4;  // (from the original)

u32 f_0058ce80(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_0058d2d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r1_1 = u32(*global_0094e446);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0x94e446u;  // (from the original)
    }
    *global_0094e446 = u8(0u);
    return call_00122f70(0x94e446u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0058ce80
GUEST_EXPORT(0x0058ce80, d_0058ce80::f_0058ce80);

// f_0058ceb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ceb4 {

inline guest::global<u32, 0x0094d550> global_0094d550;  // (from the original)
inline guest::global<u8, 0x0094e446> global_0094e446;  // (from the original)
inline constexpr guest::Function<0x001dae5c, u32(u32, u32, u32, u32)> call_001dae5c;  // (from the original)

u32 f_0058ceb4() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = u32(*global_0094e446);
    if (r0_1 == 0) {
        return r0_1;
    }
    r0_2 = *global_0094d550;
    return call_001dae5c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058ceb4
GUEST_EXPORT(0x0058ceb4, d_0058ceb4::f_0058ceb4);

// f_0058cf80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cf80 {

inline guest::global<u32, 0x0094d06c> global_0094d06c;  // (from the original)

u32 f_0058cf80() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(s8(*gptr<u8>(*global_0094d06c + 0x10u))));  // (from the original)
    return r0_1;
}

}  // namespace d_0058cf80
GUEST_EXPORT(0x0058cf80, d_0058cf80::f_0058cf80);

// f_0058d090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d090 {

inline guest::global<u32, 0x0094d06c> global_0094d06c;  // (from the original)

u32 f_0058d090() {
    u32 r0_1 = 0;
    float S0_1 = 0;
    r0_1 = *global_0094d06c + 0x2000u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x3bcu));  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_0058d090
GUEST_EXPORT(0x0058d090, d_0058d090::f_0058d090);

// f_0058d0bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d0bc {

inline guest::global<u32, 0x0094d06c> global_0094d06c;  // (from the original)

u32 f_0058d0bc() {
    u32 r0_1 = 0;
    float S0_1 = 0;
    r0_1 = *global_0094d06c + 0x2000u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x3b8u));  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_0058d0bc
GUEST_EXPORT(0x0058d0bc, d_0058d0bc::f_0058d0bc);

// f_0058d174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d174 {

inline guest::global<u32, 0x0094d06c> global_0094d06c;  // (from the original)

u32 f_0058d174() {
    u32 r0_1 = 0;
    r0_1 = u32(s32(s16(*gptr<u16>(*global_0094d06c + 0x22b0u))));  // (from the original)
    return r0_1;
}

}  // namespace d_0058d174
GUEST_EXPORT(0x0058d174, d_0058d174::f_0058d174);

// f_0058d220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d220 {

inline guest::global<u32, 0x0094d548> global_0094d548;  // (from the original)
inline guest::global<u8, 0x0094e445> global_0094e445;  // (from the original)
inline constexpr guest::Function<0x00321cd4, u32(u32, u32, u32, u32)> call_00321cd4;  // (from the original)

u32 f_0058d220() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = u32(*global_0094e445);
    if (r0_1 == 0) {
        return r0_1;
    }
    r0_2 = *global_0094d548;
    return call_00321cd4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058d220
GUEST_EXPORT(0x0058d220, d_0058d220::f_0058d220);

// f_0058d248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d248 {

inline guest::global<u8, 0x0094e445> global_0094e445;  // (from the original)
inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline constexpr guest::Function<0x00321ff0, u32(u32, u32, u32, u32)> call_00321ff0;  // (from the original)

u32 f_0058d248(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_00952c3c;
    call_00321ff0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e445 = u8(1u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x94e445u;  // (from the original)
    return 1u;
}

}  // namespace d_0058d248
GUEST_EXPORT(0x0058d248, d_0058d248::f_0058d248);

// f_0058d270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d270 {

inline guest::global<u8, 0x0094e445> global_0094e445;  // (from the original)
inline constexpr guest::Function<0x001234e0, u32(u32, u32, u32, u32)> call_001234e0;  // (from the original)

u32 f_0058d270() {
    *global_0094e445 = u8(0u);
    return call_001234e0(0u, 0x94e445u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0058d270
GUEST_EXPORT(0x0058d270, d_0058d270::f_0058d270);

// f_0058d2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d2ac {

inline guest::global<u8, 0x0094e444> global_0094e444;  // (from the original)
inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline constexpr guest::Function<0x00246cb8, u32(u32, u32, u32, u32)> call_00246cb8;  // (from the original)

u32 f_0058d2ac(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_00952c3c;
    call_00246cb8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e444 = u8(1u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x94e444u;  // (from the original)
    return 1u;
}

}  // namespace d_0058d2ac
GUEST_EXPORT(0x0058d2ac, d_0058d2ac::f_0058d2ac);

// f_0058d2d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d2d4 {

inline guest::global<u8, 0x0094e444> global_0094e444;  // (from the original)
inline constexpr guest::Function<0x00123020, u32(u32, u32, u32, u32)> call_00123020;  // (from the original)

u32 f_0058d2d4() {
    *global_0094e444 = u8(0u);
    return call_00123020(0u, 0x94e444u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0058d2d4
GUEST_EXPORT(0x0058d2d4, d_0058d2d4::f_0058d2d4);

// f_0058d3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d3b4 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x006b4c38, u32(u32, u32, u32, u32)> call_006b4c38;  // (from the original)

u32 f_0058d3b4(u32 r0) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = u32(s32(s16(*gptr<u16>(0x94e424u + 4u))));  // (from the original)
    r0_1 = *global_0094d080;
    call_006b4c38(r0_1, r0, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = ~0u;
    *gptr<u16>(0x94e424u + 4u) = u16(r0_2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0058d3b4
GUEST_EXPORT(0x0058d3b4, d_0058d3b4::f_0058d3b4);

// f_0058d3e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d3e4 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x006b4c38, u32(u32, u32, u32, u32)> call_006b4c38;  // (from the original)

u32 f_0058d3e4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = *global_0094d080;
    return call_006b4c38(r0_1, r0, r1, guest::cpu()->r[3]);
}

}  // namespace d_0058d3e4
GUEST_EXPORT(0x0058d3e4, d_0058d3e4::f_0058d3e4);

// f_0058d3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d3fc {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x001d7a10, u32(u32, u32, u32, u32)> call_001d7a10;  // (from the original)

u32 f_0058d3fc(u32 r0) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    r2_1 = *global_0094d080;
    r0_1 = r2_1 + 0x754u;  // (from the original)
    return call_001d7a10(r0_1, r0, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0058d3fc
GUEST_EXPORT(0x0058d3fc, d_0058d3fc::f_0058d3fc);

// f_0058d440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d440 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x001d7b84, u32(u32, u32, u32, u32)> call_001d7b84;  // (from the original)

u32 f_0058d440(u32 r0) {
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r3_1 = *global_0094d080;
    r2_1 = u32(s32(s16(*gptr<u16>(0x94e424u + 2u))));  // (from the original)
    r0_1 = r3_1 + 0x754u;  // (from the original)
    call_001d7b84(r0_1, r0, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r0_2 = ~0u;
    *gptr<u16>(0x94e424u + 2u) = u16(r0_2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0058d440
GUEST_EXPORT(0x0058d440, d_0058d440::f_0058d440);

// f_0058d498: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d498 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x002d3068, u32(u32, u32, u32, u32)> call_002d3068;  // (from the original)

u32 f_0058d498(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_001e5894(r0_1, r1, r2, r3);
    r3_1 = r13 + 4u;
    r0_2 = *global_0094d080;
    *gptr<u32>(r13) = u32(r2);
    r0_3 = r0_2 + 0xbc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002d3068(r0_3, r0, r1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0058d498
GUEST_EXPORT(0x0058d498, d_0058d498::f_0058d498);

// f_0058d52c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d52c {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0076c6e4, u32(u32, u32, u32, u32)> call_0076c6e4;  // (from the original)

u32 f_0058d52c(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    goto L_58d52c;
L_58d52c:;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r0_2 = r0_1 + 0x80u + 0x6e21au;  // (from the original)
    call_0076c6e4(r0_2, 0x986a60u, 0x6e21au, guest::cpu()->r[3]);  // (from the original)
    r1 = 0x986a60u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = *global_0094d080 + 0x68cu;  // (from the original)
    *gptr<u32>(r0 + 0xacu) = u32(*gptr<u32>(r1));  // (from the original)
    *gptr<u32>(r0 + 0xb0u) = u32(*gptr<u32>(r1 + 4u));  // (from the original)
    *gptr<u32>(r0 + 0xb4u) = u32(*gptr<u32>(r1 + 8u));  // (from the original)
    r1_1 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    *gptr<u32>(r0 + 0xb8u) = u32(r1_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0058d52c
GUEST_EXPORT(0x0058d52c, d_0058d52c::f_0058d52c);

// f_0058d654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d654 {

inline guest::global<u8, 0x0094e43b> global_0094e43b;  // (from the original)
inline constexpr guest::Function<0x00582efc, u32(u32, u32, u32, u32)> call_00582efc;  // (from the original)
inline constexpr guest::Function<0x005840f8, u32(u32, u32, u32, u32)> call_005840f8;  // (from the original)

u32 f_0058d654() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(*global_0094e43b);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    r0_1 = u32(*gptr<u8>(0x94e43bu + 4u));  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    r0_1 = u32(*gptr<u8>(0x94e43bu + 1u));  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    *gptr<u8>(0x94e43bu + 1u) = u8(0u);  // (from the original)
    r0_2 = u32(*gptr<u8>(0x94e43bu + 6u));  // (from the original)
    if (r0_2 != 0) {
        r0_2 = call_00582efc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_1 = call_005840f8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(0x94e43bu + 6u) = u8(0u);  // (from the original)
    *gptr<u8>(0x94e43bu + 5u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_0058d654
GUEST_EXPORT(0x0058d654, d_0058d654::f_0058d654);

// f_0058d6ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d6ac {

inline constexpr guest::Function<0x005838c4, u32(u32, u32, u32, u32)> call_005838c4;  // (from the original)

u32 f_0058d6ac(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005838c4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 ^ 1u;
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0058d6ac
GUEST_EXPORT(0x0058d6ac, d_0058d6ac::f_0058d6ac);

// f_0058d6bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d6bc {

inline guest::global<u8, 0x0094e43b> global_0094e43b;  // (from the original)
inline constexpr guest::Function<0x00582efc, u32(u32, u32, u32, u32)> call_00582efc;  // (from the original)
inline constexpr guest::Function<0x005837e4, u32(u32, u32, u32, u32)> call_005837e4;  // (from the original)
inline constexpr guest::Function<0x005840f8, u32(u32, u32, u32, u32)> call_005840f8;  // (from the original)
inline constexpr guest::Function<0x00585438, u32(u32, u32, u32, u32)> call_00585438;  // (from the original)
inline constexpr guest::Function<0x005b4120, u32(u32, u32, u32, u32)> call_005b4120;  // (from the original)

u32 f_0058d6bc(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(*global_0094e43b);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = u32(*gptr<u8>(0x94e43bu + 4u));  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = u32(*gptr<u8>(0x94e43bu + 2u));  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u8>(0x94e43bu + 2u) = u8(1u);  // (from the original)
    r0_2 = u32(*gptr<u8>(0x94e43bu + 1u));  // (from the original)
    if (r0_2 != 0) {
        *gptr<u8>(0x94e43bu + 1u) = u8(0u);  // (from the original)
        r0_3 = u32(*gptr<u8>(0x94e43bu + 6u));  // (from the original)
        if (r0_3 != 0) {
            r0_3 = call_00582efc(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        r0_2 = call_005840f8(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(0x94e43bu + 6u) = u8(0u);  // (from the original)
        *gptr<u8>(0x94e43bu + 5u) = u8(0u);  // (from the original)
    }
    r0_4 = call_005b4120(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (u32(*gptr<u8>(0x94e43bu + 6u)) != 0) {  // (from the original)
        call_005837e4(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1_2 = u32(s32(s8(*gptr<u8>(0x94e43bu + 6u))));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00585438(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058d6bc
GUEST_EXPORT(0x0058d6bc, d_0058d6bc::f_0058d6bc);

// f_0058d750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d750 {

inline guest::global<u8, 0x0094e43b> global_0094e43b;  // (from the original)
inline constexpr guest::Function<0x00585690, u32(u32, u32, u32, u32)> call_00585690;  // (from the original)
inline constexpr guest::Function<0x0058ca3c, u32(u32, u32, u32, u32)> call_0058ca3c;  // (from the original)
inline constexpr guest::Function<0x0058d488, u32(u32, u32, u32, u32)> call_0058d488;  // (from the original)
inline constexpr guest::Function<0x005b4120, u32(u32, u32, u32, u32)> call_005b4120;  // (from the original)

u32 f_0058d750() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(*global_0094e43b);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    r0_1 = u32(*gptr<u8>(0x94e43bu + 4u));  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    r0_1 = u32(*gptr<u8>(0x94e43bu + 2u));  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    *gptr<u8>(0x94e43bu + 2u) = u8(0u);  // (from the original)
    r0_2 = call_005b4120(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = u32(*gptr<u8>(0x94e43bu + 6u));  // (from the original)
    if (r0_3 != 0) {
        call_0058d488(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_0058ca3c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_1 = call_00585690(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(0x94e43bu + 3u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_0058d750
GUEST_EXPORT(0x0058d750, d_0058d750::f_0058d750);

// f_0058d7bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d7bc {

inline guest::global<u8, 0x0094e43b> global_0094e43b;  // (from the original)
inline constexpr guest::Function<0x00584080, u32(u32, u32, u32, u32)> call_00584080;  // (from the original)
inline constexpr guest::Function<0x0058d478, u32(u32, u32, u32, u32)> call_0058d478;  // (from the original)

u32 f_0058d7bc() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(*global_0094e43b);
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    r0_2 = call_0058d478(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00584080(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e43b = u8(1u);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0058d7bc
GUEST_EXPORT(0x0058d7bc, d_0058d7bc::f_0058d7bc);

// f_0058d884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d884 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline guest::global<u8, 0x0094e43b> global_0094e43b;  // (from the original)
inline constexpr guest::Function<0x002fe2e0, u32(u32, u32, u32, u32)> call_002fe2e0;  // (from the original)
inline constexpr guest::Function<0x0058ad84, u32(u32, u32, u32, u32)> call_0058ad84;  // (from the original)
inline constexpr guest::Function<0x0058ca50, u32(u32, u32, u32, u32)> call_0058ca50;  // (from the original)
inline constexpr guest::Function<0x0058ceb4, u32(u32, u32, u32, u32)> call_0058ceb4;  // (from the original)
inline constexpr guest::Function<0x0058cf04, u32(u32, u32, u32, u32)> call_0058cf04;  // (from the original)
inline constexpr guest::Function<0x0058d2e8, u32(u32, u32, u32, u32)> call_0058d2e8;  // (from the original)

u32 f_0058d884(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    r0_1 = *global_0094d080;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r1_1 = u32(*global_0094e43b);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return 0x94e43bu;  // (from the original)
    }
    r0_2 = u32(*gptr<u8>(0x94e43bu + 4u));  // (from the original)
    if (r0_2 != 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fe2e0(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_4 = call_0058cf04(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_5 = call_0058d2e8(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_6 = call_0058ceb4(r0_5, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_7 = call_0058ad84(r0_6, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    ea_2 = r13;
    r13 = r13 + 8;
    r4_1 = *gptr<u32>(ea_2);
    r14 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    return call_0058ca50(r0_7, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r12_1 = 0;
    u32 r5_1 = 0;
    u32 r3_2 = 0;
    u32 r12_2 = 0;
    u32 r3_3 = 0;
    u32 r5_2 = 0;
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 ea_2 = 0;
    u32 r8_1 = 0;
    u32 ea_3 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r3_1 = r0 + 0xcu;  // (from the original)
    r1_1 = arg0->word_4;
    r2_1 = arg0->word_8;
    arg0->word_c = u32(arg0->word_0);
    arg0->word_10 = u32(r1_1);
    arg0->word_14 = u32(r2_1);
    arg0->word_1c = u32(arg0->word_18);
    arg0->word_24 = u32(arg0->word_20);
    arg0->word_2c = u32(arg0->word_28);
    arg0->word_34 = u32(arg0->word_30);
    arg0->word_3c = u32(arg0->word_38);
    r0_1 = arg0->word_40;
    arg0->word_44 = u32(r0_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb378(r0_1, r1_1, r2_1, r3_1);
    r1_2 = *gptr<u32>(r0_2);
    r2_2 = *gptr<u32>(r0_2 + 4);
    *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r0_2 + 8u));
    *gptr<u32>(r0) = u32(r1_2);
    *gptr<u32>(r0 + 4) = u32(r2_2);
    r0_3 = u32(s32(s8(*gptr<u8>(r0 + 7u))));
    r1_3 = u32(s32(s8(*gptr<u8>(r0 + 8u))));
    r2_3 = u32(s32(s8(*gptr<u8>(r0 + 9u))));
    nf_1 = r0_3 >> 0x1f;  // (from the original)
    vf_1 = 0u;
    if (nf_1 == vf_1) {
        nf_1 = r1_3 >> 0x1f;  // (from the original)
        vf_1 = 0u;
    }
    if (nf_1 != vf_1) {
        goto L_58d9c0;
    }
    if (r2_3 >> 0x1f != (r2_3 & (r2_3 ^ r2_3)) >> 0x1f) {  // (from the original)
        goto L_58d9c0;
    }
    r12_1 = u32(s32(s16(r1_3)) * s32(s16(0x67u)));  // (from the original)
    r5_1 = u32(s32(s16(r2_3)) * s32(s16(0x67u)));  // (from the original)
    r3_2 = u32(s32(s16(r0_3)) * s32(s16(0x67u)));  // (from the original)
    r14 = u32(s32(r12_1) >> 0xa) - u32(s32(r12_1) >> 0x1f);  // (from the original)
    r12_2 = u32(s32(r5_1) >> 0xa) - u32(s32(r5_1) >> 0x1f);  // (from the original)
    r3_3 = u32(s32(r3_2) >> 0xa) - u32(s32(r3_2) >> 0x1f);  // (from the original)
    r5_2 = 0u - r3_3;
    ea_1 = r0 + 0x18u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3_3);
    r6_1 = 0u - r14;
    r0_3 = r0_3 + (r5_2 + (r5_2 << 2) << 1);
    ea_2 = ea_1 + 8u;
    *gptr<u32>(ea_2) = u32(r0_3);
    r8_1 = 0u - r12_2;
    ea_3 = ea_2 + 8u;
    *gptr<u32>(ea_3) = u32(r14);
    r1_3 = r1_3 + (r6_1 + (r6_1 << 2) << 1);
    *gptr<u32>(ea_3 + 8u) = u32(r1_3);
    *gptr<u32>(ea_3 + 0x10u) = u32(r12_2);  // (from the original)
    *gptr<u32>(ea_3 + 0x18u) = u32(r2_3 + (r8_1 + (r8_1 << 2) << 1));  // (from the original)
L_58d9c0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
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
    u32 res_1 = 0;
    res_1 = arg0->word_48 - 1u;
    arg0->word_48 = u32(res_1);
    if (res_1 == 0) {
        arg0->word_48 = u32(0x1eu);  // (from the original)
        arg0->word_4c = u32(0xffu);  // (from the original)
        guest::cpu()->r[1] = 0xffu;  // (from the original)
        return;
    }
    if (res_1 - 1u <= 0xbu) {  // (from the original)
        arg0->word_4c = u32(0u);
        guest::cpu()->r[1] = 0u;
        return;
    }
    arg0->word_4c = u32(0xffu);  // (from the original)
    guest::cpu()->r[1] = 0xffu;  // (from the original)
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_48 = u32(0x1eu);  // (from the original)
    r0_1 = call_002fb378(0x1eu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = *gptr<u32>(r0_1);
    r2_1 = *gptr<u32>(r0_1 + 4);
    *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r0_1 + 8u));
    *gptr<u32>(r0) = u32(r1_1);
    *gptr<u32>(r0 + 4) = u32(r2_1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
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
    u32 r2_1 = 0;
    r2_1 = ~0u;
    arg0->word_0 = u32(r2_1);
    arg0->word_8 = u32(0u);
    arg0->word_4 = u32(r2_1);
    arg0->byte_6c = u8(0u);
    guest::cpu()->r[1] = 0u;
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
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_4 = u32(0u);
    r1_1 = r1 + 0x1eu;  // (from the original)
    r0_1 = r0 + 0x1eu;  // (from the original)
    arg0->word_8 = u32(arg1->word_8);
    arg0->word_c = u32(arg1->word_c);
    r3_1 = arg1->word_14;
    arg0->word_10 = u32(arg1->word_10);
    arg0->word_14 = u32(r3_1);
    arg0->word_18 = u32(arg1->word_18);
    r2_1 = u32(arg1->half_1c);
    arg0->half_1c = u16(r2_1);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    call_007795ec(r0_1, r1_1, r2_1, r3_1);
    r5_1 = r1 + 0x24u;  // (from the original)
    r1_2 = r0 + 0x24u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r5_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 0x14));  // (from the original)
    *gptr<u32>(r1_2) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r1_2 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r1_2 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r1_2 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r1_2 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r1_2 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r0) = u32(0x90788cu);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r2);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0;
}

}  // namespace d_0058e1ac
GUEST_EXPORT(0x0058e1ac, d_0058e1ac::f_0058e1ac);

// f_0058e2e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e2e4 {

inline guest::global<u32, 0x0085e6ac> global_0085e6ac;  // (from the original)
inline guest::global<u32, 0x0085e6b0> global_0085e6b0;  // (from the original)
inline guest::global<u32, 0x009524dc> global_009524dc;  // (from the original)

u32 f_0058e2e4(u32 r0) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r12 = *global_0085e6ac;
    r4 = *global_0085e6b0;
    r2 = *global_009524dc;
    if (r2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    do {
L_58e304:;
        r3_1 = u32(*gptr<u8>(r2 + 0x1bu));  // (from the original)
        if (!(r3_1 != r0)) {
            r0_1 = r2 + u32(s32(r4) >> 1);
            if ((r4 & 1u) == 0) {
                guest::cpu()->r[13] += 8u;
                return guest::call_address<u32>(r12, r0_1, guest::cpu()->r[1], r2, r3_1);
            }
            r2_1 = *gptr<u32>(r0_1);
            r12_1 = *gptr<u32>(r2_1 + r12);
            guest::cpu()->r[13] += 8u;
            return guest::call_address<u32>(r12_1, r0_1, guest::cpu()->r[1], r2_1, r3_1);
        }
        r2 = *gptr<u32>(r2 + 4u);
        guest::preempt();
    } while (r2 != 0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0058e2e4
GUEST_EXPORT(0x0058e2e4, d_0058e2e4::f_0058e2e4);

// f_0058e3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e3cc {

inline guest::global<u32, 0x009b39f8> global_009b39f8;  // (from the original)
inline guest::global<u32, 0x009b39fc> global_009b39fc;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> call_00314278;  // (from the original)

u32 f_0058e3cc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 r3_2 = 0;
    u32 ea_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = *gptr<u32>(0x9524d4u + 0xcu);  // (from the original)
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        r0_1 = u32(*gptr<u8>(0x9524d4u + 2u));  // (from the original)
        zf_1 = r0_1 == 0;
    }
    if (zf_1) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb378(r0_1, r1, r2, r3);
    r1_1 = *gptr<u32>(r0_2);
    r2_1 = *gptr<u32>(r0_2 + 4);
    r3_1 = r13 + 8u;
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r0_2 + 8u));  // (from the original)
    r0_3 = r13 + 8u;
    *gptr<u32>(r3_1) = u32(r1_1);
    *gptr<u32>(r3_1 + 4) = u32(r2_1);
    guest::cpu()->r[13] = r13;
    call_00308efc(r0_3, r1_1, r2_1, r3_1);
    r0_4 = *global_009b39fc;
    r1_2 = *gptr<u32>(0x9b39fcu + 4);  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r0_4);
    *gptr<u32>(ea_1 + 4) = u32(r1_2);
    r3_2 = *global_009b39f8;
    ea_2 = r13 + 8u;
    r0_5 = *gptr<u32>(ea_2);
    r1_3 = *gptr<u32>(ea_2 + 4);
    r2_2 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00314278(r0_5, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    *gptr<u8>(0x9524d4u + 2u) = u8(r0_6);  // (from the original)
    if (r0_6 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 zf_1 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_7 = 0;
    u32 r2_7 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 res_4 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r1_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r3_10 = 0;
    u32 r2_10 = 0;
    u32 r0_17 = 0;
    u32 r1_10 = 0;
    u32 r3_11 = 0;
    u32 r2_11 = 0;
    u32 r0_18 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_19 = 0;
    u32 ea_1 = 0;
    u32 r1_11 = 0;
    u32 r3_13 = 0;
    u32 r0_20 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r0_21 = 0;
    u32 ea_2 = 0;
    u32 r1_13 = 0;
    u32 r5_2 = 0;
    u32 r0_22 = 0;
    u32 r1_14 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_23 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_1 = u32(*gptr<u8>(0x5701u + r0_1)) << 0x1e;  // (from the original)
    r1_2 = res_1;
    if (!(res_1 >> 0x1f)) {  // (from the original)
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    res_2 = u32(*gptr<u8>(0x570au + r0_1)) >> 7;  // (from the original)
    r1_2 = res_2;
    if (res_2 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    res_3 = u32(*gptr<u8>(r0_1 + 0x5700u)) << 0x1b;  // (from the original)
    if (!(res_3 >> 0x1f)) {  // (from the original)
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(res_3, r1_2, r2_1, r3_1);
    r1_2 = 0x717e8u;  // (from the original)
    r5_1 = r0_2 + r1_2;
    zf_1 = u32(*gptr<u16>(r5_1)) == 0;
    if (!zf_1) {
        zf_1 = u32(*gptr<u8>(r5_1 + 2u)) == 0;
    }
    if (!zf_1) {
        zf_1 = u32(*gptr<u8>(r5_1 + 3u)) == 0;
    }
    if (zf_1) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r3_2 = u32(*gptr<u8>(r0 + 5u));
    r2_2 = u32(*gptr<u8>(r0 + 4u));
    r1_3 = uxth(*gptr<u32>(r0));
    guest::cpu()->r[13] = r13;
    r0_3 = call_00301400(r5_1, r1_3, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 >> 0x1f == (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_4 = *gptr<u32>(r0);
    r1_2 = u32(*gptr<u16>(r5_1));
    if (s32(r1_2) >= s32(r0_4)) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fae84(r0_4, r1_2, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_6 = r0_5 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_00302204(r0_6, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fb96c(r0_7, r1_5, r2_5, r3_5);
    r1_2 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u16>(r13) = u16(0u);
    *gptr<u8>(r13 + 2u) = u8(0u);
    r0_9 = r13;
    *gptr<u8>(r13 + 3u) = u8(0u);
    guest::cpu()->r[13] = r13;
    r0_10 = call_0058e6e8(r0_9, 1u, r2_6, r3_6);
    r1_2 = guest::cpu()->r[1];
    if (r0_10 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r3_7 = u32(*gptr<u8>(r0 + 5u));
    r2_7 = u32(*gptr<u8>(r0 + 4u));
    r1_6 = uxth(*gptr<u32>(r0));
    r0_11 = r13;
    guest::cpu()->r[13] = r13;
    r0_12 = call_00301400(r0_11, r1_6, r2_7, r3_7);
    r1_2 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_12 >> 0x1f == (r0_12 & (r0_12 ^ r0_12)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r1_2 = *gptr<u32>(r0);
    res_4 = r1_2 - u32(*gptr<u16>(r13));
    if (res_4 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u16>(r13 + 0x28u) = u16(0u);  // (from the original)
    *gptr<u8>(r13 + 0x2au) = u8(0u);  // (from the original)
    *gptr<u8>(r13 + 0x2bu) = u8(0u);  // (from the original)
    r0_13 = *gptr<u32>(r0);
    guest::cpu()->r[13] = r13;
    r0_14 = call_00301da8(r0_13, r1_2, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r1_7 = r0_14 ^ 1u;
    r0_15 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_0058e6e8(r0_15, r1_7, r2_9, r3_9);
    r1_8 = guest::cpu()->r[1];
    if (r0_16 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_8;
        guest::cpu()->r[13] = r13;
        return r0_16;
    }
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    r1_9 = *gptr<u32>(r0);
    r3_10 = u32(*gptr<u8>(r13 + 0x2bu));  // (from the original)
    r2_10 = u32(*gptr<u8>(r13 + 0x2au));  // (from the original)
    r0_17 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fd5c4(r0_17, r1_9, r2_10, r3_10);
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    r1_10 = *gptr<u32>(r0);
    r3_11 = u32(*gptr<u8>(r13 + 0x2bu));  // (from the original)
    r2_11 = u32(*gptr<u8>(r13 + 0x2au));  // (from the original)
    r0_18 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fd5c4(r0_18, r1_10, r2_11, r3_11);
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_19 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003014b4(r0_19, 6u, r2_12, r3_12);
    ea_1 = r13 + 0x20u;  // (from the original)
    r1_11 = *gptr<u32>(ea_1 + 4);
    r3_13 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r13 + 4) = u32(r1_11);
    r0_20 = *gptr<u32>(r0);
    r1_12 = *gptr<u32>(r0 + 4);
    r2_13 = *gptr<u32>(r0 + 8);
    guest::cpu()->r[13] = r13;
    r0_21 = call_002fd41c(r0_20, r1_12, r2_13, r3_13);
    r1_2 = guest::cpu()->r[1];
    if (r0_21 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    ea_2 = r0 + 4u;
    r1_13 = *gptr<u32>(ea_2 + 4);
    r5_2 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(ea_2));
    *gptr<u32>(r13 + 4) = u32(r1_13);
    r0_22 = *gptr<u32>(r5_2);
    r1_14 = *gptr<u32>(r5_2 + 4);
    r2_14 = *gptr<u32>(r5_2 + 8);
    r3_14 = *gptr<u32>(r0);
    guest::cpu()->r[13] = r13;
    r0_23 = call_002fd41c(r0_22, r1_14, r2_14, r3_14);
    r1_2 = guest::cpu()->r[1];
    if (r0_23 != 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
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
    u32 r0 = arg0.addr();
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r6_1 = 0;
    u32 ea_9 = 0;
    u32 r10_1 = 0;
    u32 ea_10 = 0;
    u32 r9_1 = 0;
    u32 r8_1 = 0;
    u32 ea_11 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r7_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 ea_14 = 0;
    u32 ea_15 = 0;
    u32 ea_16 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    ea_1 = r13 + 0x40u;  // (from the original)
    *gptr<u16>(ea_1) = u16(0x600u);  // (from the original)
    ea_2 = r13 + 0x42u;  // (from the original)
    *gptr<u16>(ea_2) = u16(0u);
    ea_3 = r13 + 4u;
    *gptr<u16>(ea_3) = u16(0xffffu);  // (from the original)
    ea_4 = r13 + 0x44u;  // (from the original)
    *gptr<u16>(ea_4) = u16(0xffffu);  // (from the original)
    ea_5 = r13 + 0x46u;  // (from the original)
    *gptr<u16>(ea_5) = u16(0xffffu);  // (from the original)
    ea_6 = r13 + 8u;
    *gptr<u8>(ea_6) = u8(2u);
    ea_7 = r13 + 6u;
    *gptr<u8>(ea_7) = u8(3u);
    ea_8 = r13 + 0x34u;  // (from the original)
    *gptr<u16>(ea_8) = u16(0x600u);  // (from the original)
    r6_1 = r13 + 4u;
    ea_9 = r13 + 0x38u;  // (from the original)
    *gptr<u8>(ea_9) = u8(1u);
    r10_1 = uxth(0u | 0u) | 0u << 0x10;  // (from the original)
    ea_10 = r13 + 0x36u;  // (from the original)
    *gptr<u16>(ea_10) = u16(0u);
    r9_1 = uxth(0u | 0u) | 0u << 0x10;  // (from the original)
    r8_1 = (r11 >> 0x10 << 0x10 | 0u) & ~0xff0000u | 0u << 0x10 & 0xff0000u;  // (from the original)
    ea_11 = r13 + 7u;
    *gptr<u8>(ea_11) = u8(0x25u);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_8 = u32(0x58e968u);  // (from the original)
    arg0->word_c = u32(0x58e97cu);  // (from the original)
    r2_1 = r13 + 0x40u;  // (from the original)
    r0_1 = r0 + 0x10u;  // (from the original)
    r7_1 = r13 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003081b4(r0_1, r2_1, r2_1, 0x58e97cu);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007795ec(r0_2, r6_1, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007795ec(r0_3, r7_1, r2_3, r3_2);
    r1_1 = guest::cpu()->r[1];
    ea_12 = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea_12) = u32(0u);
    *gptr<u32>(r0) = u32(0x9078a0u);  // (from the original)
    ea_13 = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea_13) = u32(0u);
    ea_14 = r0 + 0x38u;  // (from the original)
    *gptr<u32>(ea_14) = u32(r8_1);
    ea_15 = r0 + 0x34u;  // (from the original)
    *gptr<u32>(ea_15) = u32(r9_1);
    ea_16 = r0 + 0x2cu;  // (from the original)
    *gptr<u32>(ea_16) = u32(0u);
    *gptr<u32>(ea_16 + 4) = u32(r10_1);
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
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
    u32 r0 = arg0.addr();
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r6_1 = 0;
    u32 ea_9 = 0;
    u32 r10_1 = 0;
    u32 ea_10 = 0;
    u32 r9_1 = 0;
    u32 r8_1 = 0;
    u32 ea_11 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r7_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 ea_14 = 0;
    u32 ea_15 = 0;
    u32 ea_16 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    ea_1 = r13 + 0x40u;  // (from the original)
    *gptr<u16>(ea_1) = u16(0x600u);  // (from the original)
    ea_2 = r13 + 0x42u;  // (from the original)
    *gptr<u16>(ea_2) = u16(0u);
    ea_3 = r13 + 4u;
    *gptr<u16>(ea_3) = u16(0xffffu);  // (from the original)
    ea_4 = r13 + 0x44u;  // (from the original)
    *gptr<u16>(ea_4) = u16(0xffffu);  // (from the original)
    ea_5 = r13 + 0x46u;  // (from the original)
    *gptr<u16>(ea_5) = u16(0xffffu);  // (from the original)
    ea_6 = r13 + 6u;
    *gptr<u8>(ea_6) = u8(2u);
    ea_7 = r13 + 8u;
    *gptr<u8>(ea_7) = u8(2u);
    ea_8 = r13 + 0x34u;  // (from the original)
    *gptr<u16>(ea_8) = u16(0x600u);  // (from the original)
    r6_1 = r13 + 4u;
    ea_9 = r13 + 0x38u;  // (from the original)
    *gptr<u8>(ea_9) = u8(1u);
    r10_1 = uxth(0u | 0u) | 0u << 0x10;  // (from the original)
    ea_10 = r13 + 0x36u;  // (from the original)
    *gptr<u16>(ea_10) = u16(0u);
    r9_1 = uxth(0u | 0u) | 0u << 0x10;  // (from the original)
    r8_1 = (r11 >> 0x10 << 0x10 | 0u) & ~0xff0000u | 0u << 0x10 & 0xff0000u;  // (from the original)
    ea_11 = r13 + 7u;
    *gptr<u8>(ea_11) = u8(0x24u);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_8 = u32(0x58ea9cu);  // (from the original)
    arg0->word_c = u32(0x58eaacu);  // (from the original)
    r2_1 = r13 + 0x40u;  // (from the original)
    r0_1 = r0 + 0x10u;  // (from the original)
    r7_1 = r13 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003081b4(r0_1, r2_1, r2_1, 0x58eaacu);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007795ec(r0_2, r6_1, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007795ec(r0_3, r7_1, r2_3, r3_2);
    r1_1 = guest::cpu()->r[1];
    ea_12 = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea_12) = u32(0u);
    *gptr<u32>(r0) = u32(0x9078b4u);  // (from the original)
    ea_13 = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea_13) = u32(0u);
    ea_14 = r0 + 0x38u;  // (from the original)
    *gptr<u32>(ea_14) = u32(r8_1);
    ea_15 = r0 + 0x34u;  // (from the original)
    *gptr<u32>(ea_15) = u32(r9_1);
    ea_16 = r0 + 0x2cu;  // (from the original)
    *gptr<u32>(ea_16) = u32(0u);
    *gptr<u32>(ea_16 + 4) = u32(r10_1);
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058e98c
GUEST_EXPORT(0x0058e98c, d_0058e98c::f_0058e98c);

// f_0058ead4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ead4 {

inline guest::global<u8, 0x009524d4> global_009524d4;  // (from the original)
inline guest::global<u32, 0x009b39f8> global_009b39f8;  // (from the original)
inline guest::global<u32, 0x009b39fc> global_009b39fc;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> call_00314278;  // (from the original)

u32 f_0058ead4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 r3_2 = 0;
    u32 ea_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    if (u32(*global_009524d4) != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r0_1 = u32(*gptr<u8>(0x9524d4u + 2u));  // (from the original)
    if (r0_1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb378(r0_1, r1, r2, r3);
    r1_1 = *gptr<u32>(r0_2);
    r2_1 = *gptr<u32>(r0_2 + 4);
    r3_1 = r13 + 8u;
    *gptr<u32>(r13 + 0x10u) = u32(*gptr<u32>(r0_2 + 8u));  // (from the original)
    r0_3 = r13 + 8u;
    *gptr<u32>(r3_1) = u32(r1_1);
    *gptr<u32>(r3_1 + 4) = u32(r2_1);
    guest::cpu()->r[13] = r13;
    call_00308efc(r0_3, r1_1, r2_1, r3_1);
    r0_4 = *global_009b39fc;
    r1_2 = *gptr<u32>(0x9b39fcu + 4);  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(r0_4);
    *gptr<u32>(ea_1 + 4) = u32(r1_2);
    r3_2 = *global_009b39f8;
    ea_2 = r13 + 8u;
    r0_5 = *gptr<u32>(ea_2);
    r1_3 = *gptr<u32>(ea_2 + 4);
    r2_2 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00314278(r0_5, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    *gptr<u8>(0x9524d4u + 2u) = u8(r0_6);  // (from the original)
    if (r0_6 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0058ead4
GUEST_EXPORT(0x0058ead4, d_0058ead4::f_0058ead4);

// f_0058eb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058eb60 {

inline guest::global<u32, 0x009524e0> global_009524e0;  // (from the original)

u32 f_0058eb60() {
    u32 r0_1 = 0;
    r0_1 = *global_009524e0;
    if (r0_1 != 0) {
        r0_1 = u32(s32(s8(*gptr<u8>(r0_1 + 0x3au))));  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0058eb60
GUEST_EXPORT(0x0058eb60, d_0058eb60::f_0058eb60);

// f_0058ebd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ebd8 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00753a50, u32(u32, u32, u32, u32)> call_00753a50;  // (from the original)

u32 f_0058ebd8(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *gptr<u32>(0x9524d4u + 0xcu);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_002fb378(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = *gptr<u32>(0x9524d4u + 0xcu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00753a50(r0_3, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058ebd8
GUEST_EXPORT(0x0058ebd8, d_0058ebd8::f_0058ebd8);

// f_0058ec08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ec08 {

inline guest::global<u32, 0x0085e6a4> global_0085e6a4;  // (from the original)
inline guest::global<u32, 0x0085e6a8> global_0085e6a8;  // (from the original)
inline guest::global<u32, 0x009524dc> global_009524dc;  // (from the original)

u32 f_0058ec08(u32 r0) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r12 = *global_0085e6a4;
    r4 = *global_0085e6a8;
    r2 = *global_009524dc;
    if (r2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    do {
L_58ec28:;
        r3_1 = u32(*gptr<u8>(r2 + 0x1bu));  // (from the original)
        if (!(r3_1 != r0)) {
            r0_1 = r2 + u32(s32(r4) >> 1);
            if ((r4 & 1u) == 0) {
                guest::cpu()->r[13] += 8u;
                return guest::call_address<u32>(r12, r0_1, guest::cpu()->r[1], r2, r3_1);
            }
            r2_1 = *gptr<u32>(r0_1);
            r12_1 = *gptr<u32>(r2_1 + r12);
            guest::cpu()->r[13] += 8u;
            return guest::call_address<u32>(r12_1, r0_1, guest::cpu()->r[1], r2_1, r3_1);
        }
        r2 = *gptr<u32>(r2 + 4u);
        guest::preempt();
    } while (r2 != 0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0058ec08
GUEST_EXPORT(0x0058ec08, d_0058ec08::f_0058ec08);

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
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_4 = u32(0u);
    r2_1 = r0 + 0x1eu;  // (from the original)
    arg0->word_8 = u32(arg1->word_8);
    r1_1 = r1 + 0x1eu;  // (from the original)
    arg0->word_c = u32(arg1->word_c);
    r3_1 = arg1->word_14;
    arg0->word_10 = u32(arg1->word_10);
    arg0->word_14 = u32(r3_1);
    arg0->word_18 = u32(arg1->word_18);
    arg0->half_1c = u16(u32(arg1->half_1c));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    call_007795ec(r2_1, r1_1, r2_1, r3_1);
    r5_1 = r1 + 0x24u;  // (from the original)
    r1_2 = r0 + 0x24u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r5_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 0x14));  // (from the original)
    *gptr<u32>(r1_2) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r1_2 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r1_2 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r1_2 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r1_2 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r1_2 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r0) = u32(0x9078c8u);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(*gptr<u32>(r2));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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
    u32 r0 = arg0.addr();
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r6_1 = 0;
    u32 ea_9 = 0;
    u32 r10_1 = 0;
    u32 ea_10 = 0;
    u32 r9_1 = 0;
    u32 r8_1 = 0;
    u32 ea_11 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r7_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 ea_14 = 0;
    u32 ea_15 = 0;
    u32 ea_16 = 0;
    r13 = r13 - 0x68u;  // (from the original)
    ea_1 = r13 + 0x40u;  // (from the original)
    *gptr<u16>(ea_1) = u16(0x600u);  // (from the original)
    ea_2 = r13 + 0x42u;  // (from the original)
    *gptr<u16>(ea_2) = u16(0x600u);  // (from the original)
    ea_3 = r13 + 4u;
    *gptr<u16>(ea_3) = u16(0xffffu);  // (from the original)
    ea_4 = r13 + 0x44u;  // (from the original)
    *gptr<u16>(ea_4) = u16(0xffffu);  // (from the original)
    ea_5 = r13 + 0x46u;  // (from the original)
    *gptr<u16>(ea_5) = u16(0xffffu);  // (from the original)
    ea_6 = r13 + 6u;
    *gptr<u8>(ea_6) = u8(2u);
    ea_7 = r13 + 8u;
    *gptr<u8>(ea_7) = u8(2u);
    ea_8 = r13 + 0x34u;  // (from the original)
    *gptr<u16>(ea_8) = u16(0x600u);  // (from the original)
    r6_1 = r13 + 4u;
    ea_9 = r13 + 0x38u;  // (from the original)
    *gptr<u8>(ea_9) = u8(1u);
    r10_1 = uxth(0u | 0u) | 0u << 0x10;  // (from the original)
    ea_10 = r13 + 0x36u;  // (from the original)
    *gptr<u16>(ea_10) = u16(0u);
    r9_1 = uxth(0u | 0u) | 0u << 0x10;  // (from the original)
    r8_1 = (r11 >> 0x10 << 0x10 | 0u) & ~0xff0000u | 0u << 0x10 & 0xff0000u;  // (from the original)
    ea_11 = r13 + 7u;
    *gptr<u8>(ea_11) = u8(0x23u);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_8 = u32(0x58eed0u);  // (from the original)
    arg0->word_c = u32(0x58eed0u);  // (from the original)
    r2_1 = r13 + 0x40u;  // (from the original)
    r0_1 = r0 + 0x10u;  // (from the original)
    r7_1 = r13 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003081b4(r0_1, r2_1, r2_1, 0x58eed0u);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007795ec(r0_2, r6_1, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007795ec(r0_3, r7_1, r2_3, r3_2);
    r1_1 = guest::cpu()->r[1];
    ea_12 = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea_12) = u32(0u);
    *gptr<u32>(r0) = u32(0x9078dcu);  // (from the original)
    ea_13 = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea_13) = u32(0u);
    ea_14 = r0 + 0x38u;  // (from the original)
    *gptr<u32>(ea_14) = u32(r8_1);
    ea_15 = r0 + 0x34u;  // (from the original)
    *gptr<u32>(ea_15) = u32(r9_1);
    ea_16 = r0 + 0x2cu;  // (from the original)
    *gptr<u32>(ea_16) = u32(0u);
    *gptr<u32>(ea_16 + 4) = u32(r10_1);
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0058edc4
GUEST_EXPORT(0x0058edc4, d_0058edc4::f_0058edc4);

// f_0058eef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058eef8 {

inline guest::global<u32, 0x009524e0> global_009524e0;  // (from the original)

u32 f_0058eef8() {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(*global_009524e0 + 0x2cu);  // (from the original)
    return r0_1;
}

}  // namespace d_0058eef8
GUEST_EXPORT(0x0058eef8, d_0058eef8::f_0058eef8);

// f_0058ef28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ef28 {

inline guest::global<u32, 0x009524e0> global_009524e0;  // (from the original)

u32 f_0058ef28() {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(*global_009524e0 + 0x28u);  // (from the original)
    return r0_1;
}

}  // namespace d_0058ef28
GUEST_EXPORT(0x0058ef28, d_0058ef28::f_0058ef28);

// f_0058efc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058efc8 {

inline guest::global<u32, 0x009524e0> global_009524e0;  // (from the original)

u32 f_0058efc8() {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(*global_009524e0 + 0x24u);  // (from the original)
    return r0_1;
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
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r8_1 = 0;
    u32 ea_2 = 0;
    u32 r12_1 = 0;
    u32 ea_3 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 ea_4 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    r13 = r13 - 0x14;  // (from the original)
    ea_1 = r13 + 0x24u;  // (from the original)
    r8_1 = *gptr<u32>(ea_1);
    ea_2 = r13 + 0x28u;  // (from the original)
    r12_1 = *gptr<u32>(ea_2);
    ea_3 = r13 + 0x14u;  // (from the original)
    r4_1 = *gptr<u32>(ea_3);
    r5_1 = *gptr<u32>(ea_3 + 4);
    ea_4 = r13 + 0x1cu;  // (from the original)
    r6_1 = *gptr<u32>(ea_4);
    r7_1 = *gptr<u32>(ea_4 + 4);
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r3);
    arg0->half_c = u16(r4_1);
    arg0->half_e = u16(r5_1);
    arg0->half_10 = u16(r6_1);
    arg0->half_12 = u16(r7_1);
    arg0->half_14 = u16(r8_1);
    arg0->byte_16 = u8(r12_1);
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
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->half_c = u16(0u);
    arg0->half_e = u16(0u);
    arg0->half_10 = u16(0u);
    arg0->half_12 = u16(0u);
    arg0->half_14 = u16(0u);
    arg0->byte_16 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0058f3c0
GUEST_EXPORT(0x0058f3c0, d_0058f3c0::f_0058f3c0);

// f_0058f3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f3ec {

inline guest::global<u8, 0x0095bf80> global_0095bf80;  // (from the original)
inline guest::global<u32, 0x009b3a28> global_009b3a28;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_0058f3ec(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    goto L_58f3ec;
L_58f3ec:;
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_00305f2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 3u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (0u != 0) {
        guest::cpu()->r[13] += 8u;
        r0_3 = uxth(*global_009b3a28);
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    r0_4 = u32(*global_0095bf80);
    if (r0_4 != 0) {
        r0_5 = call_002fb328(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_6 = uxth(lsl_r(1u, u32(*gptr<u8>(r0_5 + 0x80u + 0x6214eu)) & 0xfu));  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0x6214eu;  // (from the original)
        return r0_6;
    }
    r0_7 = call_005d46dc(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_8 = uxth(lsl_r(1u, r0_7 & 0xff));  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_8;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r5_2 = 0;
    u32 r12_1 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0x18;  // (from the original)
    ea_1 = r13 + 0x18u;  // (from the original)
    r5_1 = *gptr<u32>(ea_1);
    r6_1 = *gptr<u32>(ea_1 + 4);
    r7_1 = *gptr<u32>(ea_1 + 8);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r2);
    r0_1 = r0 + 0x10u;  // (from the original)
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_4 = u32(0u);
    guest::cpu()->r[13] = r13;
    call_003081b4(r0_1, r3, r2, 0x9078f0u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007795ec(r0_2, r5_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_007795ec(r0_3, r6_1, r2_2, r3_2);
    r0_4 = *gptr<u32>(r7_1);
    r1_1 = *gptr<u32>(r7_1 + 4);
    r2_3 = *gptr<u32>(r7_1 + 8);
    r3_3 = *gptr<u32>(r7_1 + 0xc);  // (from the original)
    r5_2 = *gptr<u32>(r7_1 + 0x10);  // (from the original)
    r12_1 = *gptr<u32>(r7_1 + 0x14);  // (from the original)
    ea_2 = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r0_4);
    *gptr<u32>(ea_2 + 4) = u32(r1_1);
    *gptr<u32>(ea_2 + 8) = u32(r2_3);
    *gptr<u32>(ea_2 + 0xc) = u32(r3_3);  // (from the original)
    *gptr<u32>(ea_2 + 0x10) = u32(r5_2);  // (from the original)
    *gptr<u32>(ea_2 + 0x14) = u32(r12_1);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
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
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0x9078f0u);  // (from the original)
    arg0->word_4 = u32(0u);
    r2_1 = r0 + 0x1eu;  // (from the original)
    arg0->word_8 = u32(arg1->word_8);
    r1_1 = r1 + 0x1eu;  // (from the original)
    arg0->word_c = u32(arg1->word_c);
    r3_1 = arg1->word_14;
    arg0->word_10 = u32(arg1->word_10);
    arg0->word_14 = u32(r3_1);
    arg0->word_18 = u32(arg1->word_18);
    arg0->half_1c = u16(u32(arg1->half_1c));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    call_007795ec(r2_1, r1_1, r2_1, r3_1);
    r5_1 = r1 + 0x24u;  // (from the original)
    r1_2 = r0 + 0x24u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r5_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 0x14));  // (from the original)
    *gptr<u32>(r1_2) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r1_2 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r1_2 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r1_2 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r1_2 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r1_2 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r0) = u32(0x907904u);  // (from the original)
    *gptr<u16>(r0 + 0x3cu) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    r6 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r7 = 0x94ee4cu;  // (from the original)
    arg0->word_68 = u32(arg0->word_68 | 0x50u);  // (from the original)
    arg0->byte_11b = u8(0xc8u);  // (from the original)
    r4 = 0u;
    r1_1 = arg0->word_44;
    r2_1 = arg0->word_48;
    ea_1 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = u32(arg0->word_40);
    *gptr<u32>(ea_1 + 4) = u32(r1_1);
    *gptr<u32>(ea_1 + 8) = u32(r2_1);
    r5 = *gptr<u32>(r7 + 0x10u);  // (from the original)
    do {
L_58f754:;
        r2_2 = r5 + (r4 + (r4 << 1) << 3);
        r0_1 = r2_2 + 0xcu;  // (from the original)
        r1_2 = *gptr<u32>(r2_2 + 0xcu);  // (from the original)
        if (r1_2 == 0) {
            goto L_58f7a4;
        }
        r3_1 = *gptr<u32>(r0_1 + 4u);
        if (r3_1 != *gptr<u32>(r1_2 + 0xcu)) {  // (from the original)
            goto L_58f7a4;
        }
        guest::cpu()->r[13] = r13;
        r0_2 = call_007207d8(r2_2, r1_2, r2_2, r3_1);
        if (r0_2 == 0) {
            goto L_58f7a4;
        }
        r4 = sxtb(r4 + 1u);
        guest::preempt();
    } while (r4 < 0x14u);  // (from the original)
    r4 = ~0u;
L_58f7a4:;
    r0_3 = *gptr<u32>(r6 + 0x68u);  // (from the original)
    r1_3 = 0xf8u;  // (from the original)
    *gptr<u8>(r6 + 0x11fu) = u8(r4);  // (from the original)
    if ((r0_3 & 0x80u) != 0) {  // (from the original)
        r1_3 = 0xf9u;  // (from the original)
    }
    if (r4 + 1u == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_4 = *gptr<u32>(r7 + 0x10u);  // (from the original)
    if (r4 >> 0x1f == (r4 & (r4 ^ r4)) >> 0x1f) {  // (from the original)
        if (r4 < 0x14u) {  // (from the original)
            r0_5 = r0_4 + (r4 + (r4 << 1) << 3);
            goto L_58f7e0;
        }
    }
    r0_5 = 0u;
L_58f7e0:;
    *gptr<u32>(r13) = u32(0xae5664u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(1u);
    *gptr<u32>(r13 + 8) = u32(0u);
    r2_3 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002073dc(r0_5, r1_3, r2_3, 0x975beeu);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
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
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 r0_11 = 0;
    u32 zf_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0;
    r0_1 = r0 + 0x64u;  // (from the original)
    r0 = call_002fccc4(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_2 = r4_1 + 0x64u;  // (from the original)
    r0_3 = call_002fccdc(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_4 = call_002fcd1c(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        r0_5 = *gptr<u32>(r4_1 + 0x68u) | 0x600u | 2u;  // (from the original)
        *gptr<u32>(r4_1 + 0x68u) = u32(r0_5);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_5;
    }
    r0_6 = call_006b9de8(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        goto L_58f884;
    }
    r0 = *gptr<u32>(r4_1 + 0x68u) | 0x600u | 1u;  // (from the original)
    *gptr<u32>(r4_1 + 0x68u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_58f884:;
    r0_7 = call_002fcf7c(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        goto L_58f8c0;
    }
    if (r0_3 == 0x13u) {  // (from the original)
        goto L_58f8c0;
    }
    if (r0_3 == 9u) {
        goto L_58f92c;
    }
    r0_8 = call_006b9d78(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        goto L_58f8f8;
    }
    goto L_58f92c;
L_58f8c0:;
    r0_9 = r4_1 + 0x64u;  // (from the original)
    r0_10 = call_002fd000(r0_9, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_10 != 0) {
        *gptr<u32>(r4_1 + 0x68u) = u32(*gptr<u32>(r4_1 + 0x68u) | 0x10u);  // (from the original)
    }
    *gptr<u8>(r4_1 + 0x11cu) = u8(0u);  // (from the original)
    r0_11 = *gptr<u32>(r4_1 + 0x68u) | 8u;  // (from the original)
    *gptr<u32>(r4_1 + 0x68u) = u32(r0_11);  // (from the original)
    *gptr<u8>(r4_1 + 0x11bu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_11;
L_58f8f8:;
    zf_1 = r0_3 == 0x12u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_3 == 1u;
    }
    if (zf_1) {
        goto L_58f92c;
    }
    r0_12 = r4_1 + 0x64u;  // (from the original)
    r0 = call_00768dc4(r0_12, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0_13 = *gptr<u32>(r4_1 + 0x68u) | 0x400u;  // (from the original)
    *gptr<u32>(r4_1 + 0x68u) = u32(r0_13);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_13;
L_58f92c:;
    *gptr<u8>(r4_1 + 0x11cu) = u8(0u);  // (from the original)
    r0_5 = *gptr<u32>(r4_1 + 0x68u) | 8u;  // (from the original)
    *gptr<u32>(r4_1 + 0x68u) = u32(r0_5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_5;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
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
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x64u;  // (from the original)
    if (r1 != 0) {
        r0_2 = call_00768174(r0_1, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_58f9d8;
        }
        goto L_58fa58;
    }
    r0_3 = call_002fcb10(r0_1, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r0_4 = r0 + 0x64u;  // (from the original)
        r0_5 = call_0076c628(r0_4, r1_2, r2_2, r3_2);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_5 == 0x2du) {  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            return r0_5;
        }
        r0_6 = r0 + 0x64u;  // (from the original)
        r0_5 = call_0076c628(r0_6, r1_3, r2_3, r3_3);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_5 == 0x2cu) {  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            return r0_5;
        }
        r0_7 = r0 + 0x64u;  // (from the original)
        r0_5 = call_0076c628(r0_7, r1_3, r2_4, r3_4);
        r1_3 = guest::cpu()->r[1];
        if (r0_5 == 0x2fu) {  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            return r0_5;
        }
    }
    r1_4 = r0 + 0x40u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00582e4c(0x100055eu, r1_4, r0, 1u);  // (from the original)
L_58f9d8:;
    r0_8 = r0 + 0x64u;  // (from the original)
    r0_5 = call_002fcb10(r0_8, r1_1, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return r0_5;
    }
    r0_9 = r0 + 0x64u;  // (from the original)
    r0_10 = call_0076c628(r0_9, r1_3, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = r0 + 0x64u;  // (from the original)
    r0_12 = call_002fcb34(r0_11, r1_5, r2_6, r3_6);
    if (r0_10 != 0x2du) {  // (from the original)
        if (r0_10 == 0x2cu) {  // (from the original)
            goto L_58fa38;
        }
        if (r0_12 == 0x3du) {  // (from the original)
            goto L_58fa50;
        }
        goto L_58fa58;
    }
    r1_6 = r0 + 0x40u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00582e4c(0x1000560u, r1_6, r0, 1u);  // (from the original)
L_58fa38:;
    r1_7 = r0 + 0x40u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00582e4c(0x1000561u, r1_7, r0, 1u);  // (from the original)
L_58fa50:;
    if (r0_10 == 0x2fu) {  // (from the original)
        goto L_58fa70;
    }
L_58fa58:;
    r1_8 = r0 + 0x40u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00582e4c(0x100055du, r1_8, r0, 1u);  // (from the original)
L_58fa70:;
    r1_9 = r0 + 0x40u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00582e4c(0x100055fu, r1_9, r0, 1u);  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 zf_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 8;
    r0_1 = arg0->word_68;
    if (r1 != 0) {
        r0_2 = r0_1 | 0x400000u;  // (from the original)
        arg0->word_68 = u32(r0_2);
        guest::cpu()->r[13] = r13;
        r0_3 = call_004e0cb0(r0_2, r1, r2, r3);
        ea_1 = r0 + 0x28u;  // (from the original)
        r1_1 = *gptr<u32>(ea_1);
        r2_1 = *gptr<u32>(ea_1 + 4);
        guest::cpu()->r[13] = r13;
        r0_4 = call_007457e8(r0_3, r1_1, r2_1, 0u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        *gptr<u32>(r0 + 0x30u) = u32(r0_4);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_5 = call_004ea048(r0_4, r1_2, r2_2, r3_1);
        r2_3 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r1_3 = *gptr<u32>(r0 + 0x30u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_004e958c(r0_5, r1_3, r2_3, r3_2);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_6 == 0) {
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1_4;
            guest::cpu()->r[13] = r13;
            return r0_6;
        }
        guest::cpu()->r[13] = r13;
        r0_7 = call_007519b4(r0_6, r1_4, r2_4, r3_3);
        r1_5 = guest::cpu()->r[1];
        zf_1 = r0_7 == 0;
        r0_8 = *gptr<u32>(r0 + 0x68u);  // (from the original)
        if (zf_1) {
            r0_9 = r0_8 & ~0x8000000u;  // (from the original)
        } else {
            r0_9 = r0_8 | 0x8000000u;  // (from the original)
        }
        *gptr<u32>(r0 + 0x68u) = u32(r0_9);  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    *gptr<u32>(r0 + 0x68u) = u32(r0_1 & ~0x8400000u);  // (from the original)
    r0_10 = ~0u;
    *gptr<u32>(r0 + 0x30u) = u32(r0_10);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_10;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    r13 = r13 - 0xb0u;  // (from the original)
    r0_1 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0034adac(r0_1, 5u, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_00123678(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r0_3 = *gptr<u32>(r0 + 0x68u);  // (from the original)
    r4_1 = u32(*gptr<u8>(r0 + 0x120u));  // (from the original)
    if ((r0_3 & 0x80000u) != 0) {  // (from the original)
        *gptr<u8>(r13 + 0x88u) = u8(8u);  // (from the original)
        *gptr<u8>(r13 + 0x8cu) = u8(3u);  // (from the original)
        *gptr<u8>(r13 + 0x8du) = u8(0xdu);  // (from the original)
        *gptr<u8>(r13 + 0x8eu) = u8(0xfu);  // (from the original)
    }
    *gptr<u8>(r13 + 0x91u) = u8(1u);  // (from the original)
    *gptr<u8>(r13 + 0x95u) = u8(0xfu);  // (from the original)
    *gptr<u8>(r13 + 0x96u) = u8(0xeu);  // (from the original)
    *gptr<u8>(r13 + 0x30u) = u8(1u);  // (from the original)
    *gptr<u8>(r13 + 0x31u) = u8(0x10u);  // (from the original)
    *gptr<u8>(r13 + 0x32u) = u8(6u);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(1u);
    *gptr<u8>(r13) = u8(1u);
    *gptr<u8>(r13 + 6u) = u8(0u);
    r1_2 = r13 + 0x80u;  // (from the original)
    *gptr<u8>(r13 + 0x9du) = u8(r4_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001277dc(0x208u, r1_2, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = *gptr<u32>(r13 + 0x80u);  // (from the original)
    r6_1 = r13;
    if (r4_1 < 0x80u) {  // (from the original)
        *gptr<u8>(r13 + 0x55u) = u8(0u);  // (from the original)
        r0_4 = r6_1 + 0x54u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_5 = call_00726490(r0_4, r1_3, 0u, guest::cpu()->r[3]);
        *gptr<u32>(r13 + 0x80u) = u32(r0_5);  // (from the original)
    }
    r1_4 = *gptr<u32>(r13 + 0x80u);  // (from the original)
    r0_6 = r6_1 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_00726438(r0_6, r1_4, 0u, guest::cpu()->r[3]);
    *gptr<u32>(r13 + 0x80u) = u32(r0_7);  // (from the original)
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    r0_9 = call_0012d5bc(r0_8, r0_7, 1u, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    *gptr<u32>(r13 + 0x80u) = u32(r0_9);  // (from the original)
    r0_10 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_00727dc8(r0_10, r0_9, r2_2, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    *gptr<u32>(r13 + 0x80u) = u32(r0_11);  // (from the original)
    r0_12 = r0_11 - r1_3 & ~3u;
    guest::cpu()->r[13] = r13;
    r0_13 = call_001279b4(r0_12, r1_5, r2_3, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0xb0u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_13;
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
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r12_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    ea_1 = r13 + 0x10u;  // (from the original)
    r12_1 = *gptr<u32>(ea_1);
    ea_2 = r13 + 0x14u;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r1_1 = r1 & 0xffu | (r2 & 0xffu) << 8 | (r3 & 0xffu) << 0x10;  // (from the original)
    arg0->word_74 = u32(r1_1);
    if (r12_1 != 0) {
        r1_1 = r1_1 | 0x1000000u;  // (from the original)
        arg0->word_74 = u32(r1_1);
    }
    if (r4_1 != 0) {
        r1_1 = r1_1 | 0x2000000u;  // (from the original)
        arg0->word_74 = u32(r1_1);
    }
    if (r5_1 == 0) {
        r1_1 = r1_1 | 0x4000000u;  // (from the original)
        arg0->word_74 = u32(r1_1);
    }
    if (r3 + 1u == 0) {
        r1_1 = r1_1 | 0x8000000u;  // (from the original)
        arg0->word_74 = u32(r1_1);
    }
    if (r6_1 != 0) {
        r1_1 = r1_1 | 0x10000000u;  // (from the original)
        arg0->word_74 = u32(r1_1);
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_0058fde0
GUEST_EXPORT(0x0058fde0, d_0058fde0::f_0058fde0);

// f_0058fe4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058fe4c {

inline guest::global<u32, 0x0058ff90> global_0058ff90;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32, u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x002fccc4, u32(u32, u32, u32, u32)> call_002fccc4;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;  // (from the original)

u32 f_0058fe4c(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    float S0_1 = 0;
    u32 r0_8 = 0;
    float S0_2 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4_1 = r0;
    r0_1 = r0 + 0x64u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_002fcb9c(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0 != 0) {
        goto L_58ff3c;
    }
    r0_2 = r4_1 + 0x64u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_3 = call_002fccc4(r0_2, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0_3 == 0) {
        goto L_58ff48;
    }
    r6_1 = r4_1 + 0x64u;  // (from the original)
    r1 = u32(s32(s8(*gptr<u8>(0x94ee4cu + 3u))));  // (from the original)
    r5_1 = *gptr<u32>(0x94ee4cu + 0x14u);  // (from the original)
    r0 = 0u - r1;
    if ((r0 & r5_1) == 0) {
        goto L_58ff3c;
    }
    guest::cpu()->s[0] = S0;
    r0 = call_002fccc4(r6_1, r1, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_58ff3c;
    }
    guest::cpu()->s[0] = S0;
    r0_4 = call_002fd010(r6_1, r1, r2_3, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = u32(*gptr<u8>(r0_4 + 0xcu));  // (from the original)
    if (r0 >= 0x87u) {  // (from the original)
        r0 = 0u;
        goto L_58fedc;
    }
    if (r0 == 0) {
        goto L_58ff3c;
    }
    r1 = *gptr<u32>(r5_1 + 0x414u);  // (from the original)
    if (r1 == 0) {
        r0 = 0u;
    } else {
        r0 = r1 + (r0 + (r0 << 1) + (r0 << 3) << 1);
    }
L_58fedc:;
    nf_1 = r0 >> 0x1f;  // (from the original)
    zf_1 = r0 == 0;
    vf_1 = 0u;
    if (!zf_1) {
        r1 = u32(s32(s8(*gptr<u8>(r0))));
        nf_1 = r1 >> 0x1f;  // (from the original)
        zf_1 = r1 == 0;
        vf_1 = 0u;
    }
    if (zf_1 || nf_1 != vf_1) {
        goto L_58ff3c;
    }
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    *gptr<u32>(r4_1 + 0x1cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = *gptr<u32>(r4_1 + 0x68u) | 0x4000u;  // (from the original)
    *gptr<u32>(r4_1 + 0x68u) = u32(r1);  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(r0 + 1u))));
    if (r0 != 0) {
        if (r0 == 1u) {
            r0_5 = 2u;
            goto L_58ff40;
        }
        if (r0 == 2u) {
            r0_5 = 3u;
            goto L_58ff40;
        }
        if (r0 == 3u) {
            r0 = 4u;
            *gptr<u8>(r4_1 + 0x122u) = u8(r0);  // (from the original)
            goto L_58ff3c;
        }
    }
    *gptr<u8>(r4_1 + 0x122u) = u8(0u);  // (from the original)
L_58ff3c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
L_58ff40:;
    *gptr<u8>(r4_1 + 0x122u) = u8(r0_5);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_5;
L_58ff48:;
    r0_6 = r4_1 + 0x64u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_7 = call_002fcb10(r0_6, r1_1, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    S0_1 = guest::cpu()->s[0];
    if (r0_7 == 0) {
        r0_8 = r4_1 + 0x64u;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        r0 = call_00768174(r0_8, r1, r2_4, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0 == 0) {
            guest::preempt();
            goto L_58ff3c;
        }
    }
    S0_2 = std::bit_cast<float>(*global_0058ff90);
    r0_9 = *gptr<u32>(r4_1 + 0x68u) | 0x4000u;  // (from the original)
    *gptr<u32>(r4_1 + 0x68u) = u32(r0_9);  // (from the original)
    *gptr<u32>(r4_1 + 0x1cu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u8>(r4_1 + 0x122u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
    return r0_9;
}

}  // namespace d_0058fe4c
GUEST_EXPORT(0x0058fe4c, d_0058fe4c::f_0058fe4c);
