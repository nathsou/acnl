// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/grid_rect.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006f09d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f09d4 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00767a44, u32(u32, u32, u32, u32)> call_00767a44;  // (from the original)
inline constexpr guest::Function<0x007703e0, u32(u32, u32, u32, u32)> call_007703e0;  // (from the original)

void f_006f09d4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r5 = r0;
    u32 r6 = r1;
    r1 = 0u;
    u32 r2 = r1;
    do {
        r0 = *gptr<u32>(r5 + (r2 << 2));
        if (r0 != 0) {
            do {
                if ((r0 & 1u) != 0) {
                    r1 += 1u;
                }
                r0 >>= 1;
                guest::preempt();
            } while (r0 != 0);
        }
        r2 += 1u;
        guest::preempt();
    } while (r2 < 0xbau);  // (from the original)
    u32 r0_1 = call_002ff6f8(r1, r1, r2, r3);
    u32 r0_2 = call_007703e0(r5, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r8 = 0x172bu;  // (from the original)
    u32 r7 = r0_2;
    u32 r4 = 0u;
    u32 r9 = 1u;
    do {
        call_002fcbb0(frame.at(0).addr(), uxth(r4 + 0x2000u), r2, r3);  // (from the original)
        u32 r1_2 = frame.at(0).addr();
        u32 r0_4 = call_00767a44(r1_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            u32 r0_6 = call_002fccdc(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_6 != r6 && r4 <= r8) {
                u32 r0_7 = r4 >> 5;
                r2 = *gptr<u32>(r5 + (r0_7 << 2)) & ~(r9 << (r4 & 0x1fu));  // (from the original)
                *gptr<u32>(r5 + (r0_7 << 2)) = r2;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < r8);
    r2 = 0u;
    r3 = r5;
    r1 = r2;
    do {
        r0 = *gptr<u32>(r3 + (r1 << 2));
        if (r0 != 0) {
            do {
                if ((r0 & 1u) != 0) {
                    r2 += 1u;
                }
                r0 >>= 1;
                guest::preempt();
            } while (r0 != 0);
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < 0xbau);  // (from the original)
    if (r2 == 0 && r7 <= r8) {
        u32 r0_8 = r7 >> 5;
        r1 = *gptr<u32>(r5 + (r0_8 << 2)) | r9 << (r7 & 0x1fu);  // (from the original)
        *gptr<u32>(r3 + (r0_8 << 2)) = r1;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006f09d4
GUEST_EXPORT_FRAMED(0x006f09d4, d_006f09d4::f_006f09d4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006f14b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f14b0 {

inline constexpr guest::Function<0x0025591c, u32(u32, u32, u32, u32)> call_0025591c;  // (from the original)
inline constexpr guest::Function<0x002ad1fc, u32(u32, u32, u32, u32)> call_002ad1fc;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)

void f_006f14b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r5 = 0;
    *frame.at<u32>(0) = r3;
    u32 r8 = r0;
    u32 r0_1 = call_005359fc(r1, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = *gptr<u32>(r0_1 + 4);
    u32 zf_1 = r1 == 0x24u;  // (from the original)
    u32 r9 = 0x372au;  // (from the original)
    u32 r10 = 1u;
    u32 r4 = uxth(*gptr<u32>(r0_1));
    u32 r7 = r4;
    if (zf_1) {
        goto L_6f1550;
    }
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            call_002fcbb0(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_4 = call_0025591c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                u32 r0_5 = r7 + r5;
                if (r0_5 <= r9) {
                    u32 r1_3 = r0_5 - 0x2000u;  // (from the original)
                    u32 r0_6 = r1_3 >> 5;
                    r2 = *gptr<u32>(r8 + (r0_6 << 2)) | r10 << (r1_3 & 0x1fu);  // (from the original)
                    *gptr<u32>(r8 + (r0_6 << 2)) = r2;
                }
            }
            r4 += 1u;
            r5 += 1u;
            guest::preempt();
        } while (r6 > r5);
    }
    return;
L_6f1550:;
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            call_002fcbb0(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_9 = call_002ad1fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_9 != 0) {
                u32 r0_10 = r7 + r5;
                if (r0_10 <= r9) {
                    u32 r0_11 = r0_10 - 0x2000u;  // (from the original)
                    u32 r1_6 = r0_11 >> 5;
                    r2 = *gptr<u32>(r8 + (r1_6 << 2)) | r10 << (r0_11 & 0x1fu);  // (from the original)
                    *gptr<u32>(r8 + (r1_6 << 2)) = r2;
                }
            }
            r4 += 1u;
            r5 += 1u;
            guest::preempt();
        } while (r6 > r5);
        return;
    }
}

}  // namespace d_006f14b0
GUEST_EXPORT_FRAMED(0x006f14b0, d_006f14b0::f_006f14b0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006f15c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f15c4 {

struct __attribute__((packed)) Local_006f15c4_ea_1 {
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
};
GUEST_OFFSET(Local_006f15c4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_1, word_30, 0x30);  // (from the original)

struct __attribute__((packed)) Local_006f15c4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_006f15c4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_2, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_006f15c4_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_006f15c4_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_3, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006f15c4_ea_3, word_20, 0x20);  // (from the original)

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
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_18 = 0;
    u32 r1_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_22 = 0;
    u32 r1_12 = 0;
    u32 r2_10 = 0;
    u32 r1_13 = 0;
    u32 r0_23 = 0;
    u32 r1_14 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r12_1 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    gptr<Local_006f15c4_ea_3> ea_3 = gptr<Local_006f15c4_ea_3>(0u);
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_2 = 0;
    u32 r10_2 = 0;
    u32 r11_2 = 0;
    gptr<Local_006f15c4_ea_1> ea_1 = gptr<Local_006f15c4_ea_1>(frame.at(0x14).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    u32 r5_1 = r2;
    r9 = r0;
    u32 r0_2 = call_005359fc(*frame.at<u32>(0x18), r1, r2, r3);  // (from the original)
    r6 = *gptr<u32>(r0_2 + 4);
    u32 r1_1 = uxth(*gptr<u32>(r0_2));
    r10 = r1_1;
    call_002fcbb0(frame.at(4).addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = call_005361a8(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0_5;
    u32 r0_6 = call_002fae84(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = *gptr<u8>(r0_6 + 0x6214eu);  // (from the original)
    u32 r1_4 = *frame.at<u32>(0x20) - 1u;  // (from the original)
    r7 = (r1_4 & r0_7 >> 4) == 0 ? 1u : 0u;
    u32 r0_8 = call_002fae84(r0_7, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001b1b40(frame.at(0).addr(), r0_8 + 0x621ccu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_11 = call_0070b65c(frame.at(0).addr(), *frame.at<u32>(0x18), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r11 = r0_11;
    u32 r0_13 = call_0070b694(frame.at(0).addr(), *frame.at<u32>(0x18), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(8) = r0_13;
    u32 r0_15 = call_0070b6d0(frame.at(0).addr(), *frame.at<u32>(0x18), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0x10) = r0_15;  // (from the original)
    u32 r0_17 = call_0070b70c(frame.at(0).addr(), *frame.at<u32>(0x18), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *frame.at<u32>(0xc) = r0_17;  // (from the original)
    if (r5_1 == 2u) {
        goto L_6f16a0;
    }
    zf_1 = r6 == 0;
    cf_1 = r6 >= 0u;
    if (cf_1 && !zf_1) {
        r8 = 0x372au;  // (from the original)
    }
    r5 = 0u;
    if (!cf_1 || zf_1) {
        goto L_6f19d0;
    }
L_6f1688:;
    r0_18 = *gptr<u8>(r4 + 0xdu);  // (from the original)
    if (r0_18 >= 0xb9u || r0_18 != 0x14u) {  // (from the original)
        goto L_6f187c;
    }
    goto L_6f1868;
L_6f16a0:;
    r1_10 = *frame.at<u32>(0x18);  // (from the original)
    r0_19 = frame.at(0).addr();
    r0_20 = call_0070b574(r0_19, r1_10, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0_20;
    r5 = 0u;
    if (r6 < 0u || r6 == 0) {
        goto L_6f19d0;
    }
    do {
        u32 r1_11 = *gptr<u8>(r4 + 0xdu);  // (from the original)
        u32 r0_21 = r1_11;
        if (r1_11 >= 0xb9u) {  // (from the original)
            r1_11 = 0u;
        }
        if (r1_11 != r8) {
            if (r0_21 < 0xb9u && r0_21 == 0x14u) {  // (from the original)
                if (r7 != 0) {
                    goto L_6f170c;
                }
                r1_11 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
                if ((r1_11 & 1u) == 0) {
                    goto L_6f170c;
                }
            }
            if (r0_21 >= 0xb9u || r0_21 != 0x15u) {  // (from the original)
                goto L_6f1768;
            }
            goto L_6f1754;
L_6f170c:;
            r0_22 = call_002ff6f8(0x64u, r1_11, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_22 >= r11) {
                goto L_6f1854;
            }
            r2 = 0x372au;  // (from the original)
            r1_12 = r10 + r5;
            if (r2 < r1_12) {
                goto L_6f1854;
            }
            r2_10 = r1_12 - 0x2000u;  // (from the original)
            r1_13 = r2_10 >> 5;
            r2 = *gptr<u32>(r9 + (r1_13 << 2)) | 1u << (r2_10 & 0x1fu);  // (from the original)
            *gptr<u32>(r9 + (r1_13 << 2)) = r2;
            goto L_6f1854;
L_6f1754:;
            if (r7 != 0) {
                goto L_6f177c;
            }
            r1_11 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
            if ((r1_11 & 1u) == 0) {
                goto L_6f177c;
            }
L_6f1768:;
            if (r0_21 >= 0xb9u || r0_21 != 0x16u) {  // (from the original)
                goto L_6f17bc;
            }
            goto L_6f17a8;
L_6f177c:;
            r0_23 = call_002ff6f8(0x64u, r1_11, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_23 >= *frame.at<u32>(8)) {
                goto L_6f1854;
            }
            r2 = 0x372au;  // (from the original)
            r1_14 = r10 + r5;
            r0_24 = r9;
            if (r2 >= r1_14) {
                goto L_6f1838;
            }
            goto L_6f1854;
L_6f17a8:;
            if (r7 != 0) {
                goto L_6f17d0;
            }
            r1_11 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
            if ((r1_11 & 1u) == 0) {
                goto L_6f17d0;
            }
L_6f17bc:;
            if (r0_21 >= 0xb9u || r0_21 != 0x17u) {  // (from the original)
                goto L_6f1854;
            }
            goto L_6f17fc;
L_6f17d0:;
            r0_25 = call_002ff6f8(0x64u, r1_11, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_25 >= *frame.at<u32>(0x10)) {  // (from the original)
                goto L_6f1854;
            }
            r2 = 0x372au;  // (from the original)
            r1_14 = r10 + r5;
            r0_24 = r9;
            if (r2 >= r1_14) {
                goto L_6f1838;
            }
            goto L_6f1854;
L_6f17fc:;
            if (r7 == 0 && (u32(*gptr<u8>(r4 + 0x1bu)) & 1u) != 0) {  // (from the original)
                goto L_6f1854;
            }
            r0_26 = call_002ff6f8(0x64u, r1_11, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_26 >= *frame.at<u32>(0xc)) {  // (from the original)
                goto L_6f1854;
            }
            r2 = 0x372au;  // (from the original)
            r1_14 = r10 + r5;
            r0_24 = r9;
            if (r2 < r1_14) {
                goto L_6f1854;
            }
L_6f1838:;
            r3 = r1_14 - 0x2000u;  // (from the original)
            u32 r1_15 = r3 >> 5;
            r2 = *gptr<u32>(r0_24 + (r1_15 << 2)) | 1u << (r3 & 0x1fu);  // (from the original)
            *gptr<u32>(r9 + (r1_15 << 2)) = r2;
        }
L_6f1854:;
        r5 += 1u;
        r4 += 0x1eu;  // (from the original)
        guest::preempt();
    } while (r6 > r5);
    goto L_6f19d0;
L_6f1868:;
    if (r7 != 0) {
        goto L_6f1890;
    }
    r1 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
    if ((r1 & 1u) == 0) {
        goto L_6f1890;
    }
L_6f187c:;
    if (r0_18 >= 0xb9u || r0_18 != 0x15u) {  // (from the original)
        goto L_6f18c8;
    }
    goto L_6f18b4;
L_6f1890:;
    r0_27 = call_002ff6f8(0x64u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_27 >= r11) {
        goto L_6f19c0;
    }
    r0_28 = r10 + r5;
    if (r8 >= r0_28) {
        goto L_6f18fc;
    }
    goto L_6f19c0;
L_6f18b4:;
    if (r7 != 0) {
        goto L_6f18dc;
    }
    r1 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
    if ((r1 & 1u) == 0) {
        goto L_6f18dc;
    }
L_6f18c8:;
    if (r0_18 >= 0xb9u || r0_18 != 0x16u) {  // (from the original)
        goto L_6f1930;
    }
    goto L_6f191c;
L_6f18dc:;
    r0_29 = call_002ff6f8(0x64u, r1, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *frame.at<u32>(8);
    if (r0_29 >= r1) {
        goto L_6f19c0;
    }
    r0_28 = r10 + r5;
    if (r8 < r0_28) {
        goto L_6f19c0;
    }
L_6f18fc:;
    r0_30 = r0_28 - 0x2000u;  // (from the original)
    r1 = 1u;
    r12_1 = r0_30 >> 5;
    r2 = *gptr<u32>(r9 + (r12_1 << 2));
    *gptr<u32>(r9 + (r12_1 << 2)) = r2 | r1 << (r0_30 & 0x1fu);  // (from the original)
    goto L_6f19c0;
L_6f191c:;
    if (r7 != 0) {
        goto L_6f1944;
    }
    r1 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
    if ((r1 & 1u) == 0) {
        goto L_6f1944;
    }
L_6f1930:;
    if (r0_18 >= 0xb9u || r0_18 != 0x17u) {  // (from the original)
        goto L_6f19c0;
    }
    goto L_6f196c;
L_6f1944:;
    r0_31 = call_002ff6f8(0x64u, r1, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *frame.at<u32>(0x10);  // (from the original)
    if (r0_31 >= r1) {
        goto L_6f19c0;
    }
    r1 = r10 + r5;
    r0_32 = r9;
    if (r8 >= r1) {
        goto L_6f19a4;
    }
    goto L_6f19c0;
L_6f196c:;
    if (r7 == 0 && (u32(*gptr<u8>(r4 + 0x1bu)) & 1u) != 0) {  // (from the original)
        goto L_6f19c0;
    }
    r0_33 = call_002ff6f8(0x64u, r1, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *frame.at<u32>(0xc);  // (from the original)
    if (r0_33 >= r1) {
        goto L_6f19c0;
    }
    r1 = r10 + r5;
    r0_32 = r9;
    if (r8 < r1) {
        goto L_6f19c0;
    }
L_6f19a4:;
    r3 = r1 - 0x2000u;  // (from the original)
    r1 = r3 >> 5;
    r2 = *gptr<u32>(r0_32 + (r1 << 2)) | 1u << (r3 & 0x1fu);  // (from the original)
    *gptr<u32>(r9 + (r1 << 2)) = r2;
L_6f19c0:;
    r5 += 1u;
    r4 += 0x1eu;  // (from the original)
    if (r6 > r5) {
        guest::preempt();
        goto L_6f1688;
    }
L_6f19d0:;
    r2 = 0u;
    r1 = r2;
    do {
        r0 = *gptr<u32>(r9 + (r1 << 2));
        if (r0 != 0) {
            do {
                if ((r0 & 1u) != 0) {
                    r2 += 1u;
                }
                r0 >>= 1;
                guest::preempt();
            } while (r0 != 0);
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < 0xbau);  // (from the original)
    if (r2 != 0) {
        gptr<Local_006f15c4_ea_2> ea_2 = gptr<Local_006f15c4_ea_2>(frame.at(0x24).addr());  // (from the original)
        u32 r4_1 = ea_2->word_0;
        u32 r5_2 = ea_2->word_4;
        u32 r6_1 = ea_2->word_8;
        u32 r7_1 = ea_2->word_c;
        u32 r8_1 = ea_2->word_10;
        u32 r9_1 = ea_2->word_14;
        u32 r10_1 = ea_2->word_18;
        u32 r11_1 = ea_2->word_1c;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7_1;
        guest::cpu()->r[8] = r8_1;
        guest::cpu()->r[9] = r9_1;
        guest::cpu()->r[10] = r10_1;
        guest::cpu()->r[11] = r11_1;
        return 1u;
    }
    u32 r0_35 = call_0070b510(frame.at(0).addr(), *frame.at<u32>(0x18), r2, r3);  // (from the original)
    call_002fe9c8(r9, *frame.at<u32>(0x18), r0_35, *frame.at<u32>(0x20));  // (from the original)
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r2;
    do {
        r0 = *gptr<u32>(r9 + (r1 << 2));
        if (r0 != 0) {
            do {
                if ((r0 & 1u) != 0) {
                    r2 += 1u;
                }
                r0 >>= 1;
                guest::preempt();
            } while (r0 != 0);
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < 0xbau);  // (from the original)
    if (r2 == 0) {
        r0 = call_005361a8(frame.at(4).addr(), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r1 = 0u;
            if (r6 >= 0u && r6 != 0) {
                if (r7 != 0) {
                    goto L_6f1ae4;
                }
                do {
                    if ((u32(*gptr<u8>(r0 + 0x1bu)) & 1u) == 0) {  // (from the original)
                        goto L_6f1ae4;
                    }
                    r1 += 1u;
                    r0 += 0x1eu;  // (from the original)
                    guest::preempt();
                } while (r6 > r1);
            }
        }
    }
L_6f1ac4:;
    ea_3 = gptr<Local_006f15c4_ea_3>(frame.at(0x24).addr());  // (from the original)
    r4_2 = ea_3->word_0;
    r5_3 = ea_3->word_4;
    r6_2 = ea_3->word_8;
    r7_2 = ea_3->word_c;
    r8_2 = ea_3->word_10;
    r9_2 = ea_3->word_14;
    r10_2 = ea_3->word_18;
    r11_2 = ea_3->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    return 0u;
L_6f1ae4:;
    u32 r0_37 = r10 + r1;
    r1 = 0x372au;  // (from the original)
    if (r0_37 > r1) {
        guest::preempt();
        goto L_6f1ac4;
    }
    u32 r1_18 = r0_37 - 0x2000u;  // (from the original)
    u32 r0_38 = r1_18 >> 5;
    r1 = *gptr<u32>(r9 + (r0_38 << 2)) | 1u << (r1_18 & 0x1fu);  // (from the original)
    *gptr<u32>(r9 + (r0_38 << 2)) = r1;
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
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r5 = 0;
    *frame.at<u32>(0) = r3;
    u32 r7 = r0;
    u32 r9 = r1;
    u32 r0_1 = call_005359fc(0x27u, r1, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = *gptr<u32>(r0_1 + 4);
    u32 r10 = 0x372au;  // (from the original)
    u32 r11 = 1u;
    u32 r4 = uxth(*gptr<u32>(r0_1));
    u32 r8 = r4;
    if (r9 == 3u) {
        goto L_6f1dec;
    }
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            call_002fcbb0(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_4 = call_0025591c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                u32 r0_6 = call_007692f0(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_6 == r9) {
                    u32 r0_7 = r8 + r5;
                    if (r0_7 <= r10) {
                        u32 r1_4 = r0_7 - 0x2000u;  // (from the original)
                        u32 r0_8 = r1_4 >> 5;
                        r2 = *gptr<u32>(r7 + (r0_8 << 2)) | r11 << (r1_4 & 0x1fu);  // (from the original)
                        *gptr<u32>(r7 + (r0_8 << 2)) = r2;
                    }
                }
            }
            r4 += 1u;
            r5 += 1u;
            guest::preempt();
        } while (r6 > r5);
    }
L_6f1dac:;
    r2 = 0u;
    r1 = r2;
    do {
        r0 = *gptr<u32>(r7 + (r1 << 2));
        if (r0 != 0) {
            do {
                if ((r0 & 1u) != 0) {
                    r2 += 1u;
                }
                r0 >>= 1;
                guest::preempt();
            } while (r0 != 0);
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < 0xbau);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r2 == 0 ? 0u : 1u;
L_6f1dec:;
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            call_002fcbb0(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_12 = call_0025591c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 != 0) {
                u32 r0_13 = r8 + r5;
                if (r0_13 <= r10) {
                    u32 r1_7 = r0_13 - 0x2000u;  // (from the original)
                    u32 r0_14 = r1_7 >> 5;
                    r2 = *gptr<u32>(r7 + (r0_14 << 2)) | r11 << (r1_7 & 0x1fu);  // (from the original)
                    *gptr<u32>(r7 + (r0_14 << 2)) = r2;
                }
            }
            r4 += 1u;
            r5 += 1u;
            guest::preempt();
        } while (r6 > r5);
        guest::preempt();
        goto L_6f1dac;
    }
    guest::preempt();
    goto L_6f1dac;
}

}  // namespace d_006f1cfc
GUEST_EXPORT_FRAMED(0x006f1cfc, d_006f1cfc::f_006f1cfc, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006f1f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f1f14 {

struct __attribute__((packed)) Local_006f1f14_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f1f14_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f1f14_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;  // (from the original)

u32 f_006f1f14(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r6_1 = r1;
    u32 r8_1 = r0;
    gptr<Local_006f1f14_ea_1> ea_1 = gptr<Local_006f1f14_ea_1>(frame.at(0x20).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    if (r3 != 0) {
        *frame.at<u32>(0) = 0;
        r0 = call_006f2908(r0, 5u, r1, r2);
        r1 = guest::cpu()->r[1];
    }
    if (r4_1 != 0) {
        *frame.at<u32>(0) = 0;
        r0 = call_006f2908(r8_1, 3u, r6_1, r2);
        r1 = guest::cpu()->r[1];
    }
    if (r5_1 != 0) {
        *frame.at<u32>(0) = 0;
        r0 = call_006f2908(r8_1, 4u, r6_1, r2);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006f1f14
GUEST_EXPORT_FRAMED(0x006f1f14, d_006f1f14::f_006f1f14, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006f2178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f2178 {

inline constexpr guest::Function<0x002ad1fc, u32(u32, u32, u32, u32)> call_002ad1fc;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x00769bc4, u32(u32, u32, u32, u32)> call_00769bc4;  // (from the original)

u32 f_006f2178(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r5 = 0;
    *frame.at<u32>(0) = r3;
    u32 r7 = r0;
    u32 r9 = r1;
    u32 r0_1 = call_005359fc(0x24u, r1, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = *gptr<u32>(r0_1 + 4);
    u32 r10 = 0x372au;  // (from the original)
    u32 r11 = 1u;
    u32 r4 = uxth(*gptr<u32>(r0_1));
    u32 r8 = r4;
    if (r9 == 6u) {
        goto L_6f2268;
    }
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            call_002fcbb0(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_4 = call_002ad1fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                u32 r0_6 = call_00769bc4(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_6 == r9) {
                    u32 r0_7 = r8 + r5;
                    if (r0_7 <= r10) {
                        u32 r1_4 = r0_7 - 0x2000u;  // (from the original)
                        u32 r0_8 = r1_4 >> 5;
                        r2 = *gptr<u32>(r7 + (r0_8 << 2)) | r11 << (r1_4 & 0x1fu);  // (from the original)
                        *gptr<u32>(r7 + (r0_8 << 2)) = r2;
                    }
                }
            }
            r4 += 1u;
            r5 += 1u;
            guest::preempt();
        } while (r6 > r5);
    }
L_6f2228:;
    r2 = 0u;
    r1 = r2;
    do {
        r0 = *gptr<u32>(r7 + (r1 << 2));
        if (r0 != 0) {
            do {
                if ((r0 & 1u) != 0) {
                    r2 += 1u;
                }
                r0 >>= 1;
                guest::preempt();
            } while (r0 != 0);
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < 0xbau);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r2 == 0 ? 0u : 1u;
L_6f2268:;
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            call_002fcbb0(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_12 = call_002ad1fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 != 0) {
                u32 r0_13 = r8 + r5;
                if (r0_13 <= r10) {
                    u32 r1_7 = r0_13 - 0x2000u;  // (from the original)
                    u32 r0_14 = r1_7 >> 5;
                    r2 = *gptr<u32>(r7 + (r0_14 << 2)) | r11 << (r1_7 & 0x1fu);  // (from the original)
                    *gptr<u32>(r7 + (r0_14 << 2)) = r2;
                }
            }
            r4 += 1u;
            r5 += 1u;
            guest::preempt();
        } while (r6 > r5);
        guest::preempt();
        goto L_6f2228;
    }
    guest::preempt();
    goto L_6f2228;
}

}  // namespace d_006f2178
GUEST_EXPORT_FRAMED(0x006f2178, d_006f2178::f_006f2178, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

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
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 zf_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 zf_1 = r2 == 2u;
    u32 r7 = r2;
    if (!zf_1) {
        zf_1 = r7 == 1u;
    }
    u32 r5_1 = *frame.at<u32>(0x30);  // (from the original)
    u32 r10 = r0;
    u32 r4_1 = r1;
    u32 r11 = r3;
    if (!zf_1) {
        if (r7 == 4u) {
            goto L_6f29a0;
        }
        if (r7 == 3u) {
            goto L_6f29d0;
        }
        u32 r0_1 = call_002fae84(r0, r1, r2, r3);
        call_001b1b40(frame.at(4).addr(), r0_1 + 0x621ccu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
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
    zf_2 = r3 == 0;
    if (zf_2) {
        goto L_6f2990;
    }
    r0 = call_006f2c1c(r0, r1, r2, r5_1);
    r1 = guest::cpu()->r[1];
    return r0;
L_6f2990:;
    r0_3 = call_006f15c4(r0, r1, r2, r5_1);
    return r0_3;
L_6f29a0:;
    *frame.at<u32>(0) = r5_1;
    call_006f2908(r0, r1, 5u, r3);
    *frame.at<u32>(0) = r5_1;
    call_006f2908(r10, r4_1, 6u, r11);
    goto L_6f29f4;
L_6f29d0:;
    r0 = call_002ff6f8(3u, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6f2a14;
    }
    if (r0 == 1u) {
        goto L_6f2a34;
    }
    if (r0 != 2u) {
        return r0;
    }
L_6f29f4:;
    *frame.at<u32>(0) = r5_1;
    r0_4 = call_006f2908(r10, r4_1, 7u, r11);
    return r0_4;
L_6f2a14:;
    *frame.at<u32>(0) = r5_1;
    r0_5 = call_006f2908(r10, r4_1, 5u, r11);
    return r0_5;
L_6f2a34:;
    *frame.at<u32>(0) = r5_1;
    r0_6 = call_006f2908(r10, r4_1, 6u, r11);
    return r0_6;
L_6f2a54:;
    r0_7 = frame.at(4).addr();
    r0_8 = call_0070b510(r0_7, r4_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    goto L_6f2aa8;
L_6f2a6c:;
    r0_9 = frame.at(4).addr();
    r0_8 = call_0070b5e8(r0_9, r4_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    goto L_6f2aa8;
L_6f2a84:;
    r0_10 = frame.at(4).addr();
    r0_8 = call_0070b49c(r0_10, r4_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    goto L_6f2aa8;
L_6f2a9c:;
    r0_11 = frame.at(4).addr();
    r0_8 = call_0070b574(r0_11, r4_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_6f2aa8:;
    r7 = r0_8;
L_6f2aac:;
    u32 r0_12 = call_005359fc(r4_1, r1_2, r2_2, r3_2);
    u32 r6 = *gptr<u32>(r0_12 + 4);
    u32 r1_7 = uxth(*gptr<u32>(r0_12));
    u32 r9 = r1_7;
    call_002fcbb0(frame.at(8).addr(), r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_15 = call_005361a8(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4 = r0_15;
    u32 r0_16 = call_002fae84(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = 0x372au;  // (from the original)
    r2 = 1u;
    r1 = r5_1 - 1u;
    u32 r8 = (r1 & u32(*gptr<u8>(r0_16 + 0x6214eu)) >> 4) == 0 ? 1u : 0u;  // (from the original)
    if (r11 != 0) {
        u32 zf_3 = r6 == 0;
        u32 cf_1 = r6 >= 0u;
        u32 r5 = 0u;
        if (cf_1 && !zf_3) {
            r11 = r3;
        }
        if (!!cf_1 && !zf_3) {
            do {
                u32 r0_17 = *gptr<u8>(r4 + 0xdu);  // (from the original)
                if (r0_17 >= 0xb9u) {  // (from the original)
                    r0_17 = 0u;
                }
                if (r0_17 == r7) {
                    u32 r0_18 = call_007485d0(r4, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_18 == 0) {
                        if (r8 == 0 && (u32(*gptr<u8>(r4 + 0x1bu)) & 1u) != 0) {  // (from the original)
                            goto L_6f2b7c;
                        }
                        u32 r0_19 = r9 + r5;
                        if (r0_19 <= r11) {
                            u32 r0_20 = r0_19 - 0x2000u;  // (from the original)
                            r1 = r0_20 >> 5;
                            r3 = *gptr<u32>(r10 + (r1 << 2));
                            r2 = r3 | 1u << (r0_20 & 0x1fu);  // (from the original)
                            *gptr<u32>(r10 + (r1 << 2)) = r2;
                        }
                    }
                }
L_6f2b7c:;
                r5 += 1u;
                r4 += 0x1eu;  // (from the original)
                guest::preempt();
            } while (r6 > r5);
        }
    } else {
        r0 = 0u;
        if (r6 >= 0u && r6 != 0) {
            do {
                r1 = *gptr<u8>(r4 + 0xdu);  // (from the original)
                if (r1 >= 0xb9u) {  // (from the original)
                    r1 = 0u;
                }
                if (r1 == r7) {
                    if (r8 == 0) {
                        r1 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
                        if ((r1 & 1u) != 0) {
                            goto L_6f2be8;
                        }
                    }
                    r1 = r9 + r0;
                    if (r1 <= r3) {
                        u32 r1_10 = r1 - 0x2000u;  // (from the original)
                        u32 r12_1 = r1_10 >> 5;
                        r1 = r1_10 & 0x1fu;  // (from the original)
                        *gptr<u32>(r10 + (r12_1 << 2)) = *gptr<u32>(r10 + (r12_1 << 2)) | lsl_r(r2, r1 & 0xff);  // (from the original)
                    }
                }
L_6f2be8:;
                r0 += 1u;
                r4 += 0x1eu;  // (from the original)
                guest::preempt();
            } while (r6 > r0);
        }
    }
    guest::cpu()->r[1] = r1;
    return frame.at(4).addr();
}

}  // namespace d_006f2908
GUEST_EXPORT_FRAMED(0x006f2908, d_006f2908::f_006f2908, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006f432c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f432c {

struct __attribute__((packed)) Object_006f432c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 byte_c;
};
GUEST_OFFSET(Object_006f432c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_b, 0xb);  // (from the original)
GUEST_OFFSET(Object_006f432c_0, byte_c, 0xc);  // (from the original)


void f_006f432c(gptr<Object_006f432c_0> arg0, u32 r1, u32 r2) {
    u32 res_3 = 0;
    u32 nf_3 = 0;
    u32 zf_3 = 0;
    u32 vf_3 = 0;
    u32 r12_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r12_2 = 0;
    u32 r1_3 = 0;
    u32 r5_1 = 0;
    u32 r1_4 = 0;
    u32 r2_1 = 0;
    u32 r12_3 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r12_4 = 0;
    u32 r1_7 = 0;
    u32 r4_1 = 0;
    u32 r1_8 = 0;
    u32 r2_2 = 0;
    u32 r12_6 = 0;
    u32 r1_11 = 0;
    u32 r1_12 = 0;
    u32 r12_7 = 0;
    u32 r1_13 = 0;
    u32 r5_3 = 0;
    u32 r1_14 = 0;
    u32 r2_4 = 0;
    u32 r12_8 = 0;
    u32 r1_15 = 0;
    u32 r1_16 = 0;
    u32 r12_9 = 0;
    u32 r1_17 = 0;
    u32 r5_4 = 0;
    u32 r1_18 = 0;
    u32 r2_5 = 0;
    u32 r12_10 = 0;
    u32 r1_19 = 0;
    u32 r1_20 = 0;
    u32 res_1 = r1 - 0x23u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        if (!!zf_1 || (res_1 >> 0x1f) != (((r1 ^ 0x23u) & (r1 ^ res_1)) >> 0x1f)) {  // (from the original)
            u32 res_2 = r1 - 0x1eu;  // (from the original)
            u32 zf_2 = res_2 == 0;
            if (zf_2) {
                goto L_6f4430;
            }
            if (!!zf_2 || (res_2 >> 0x1f) != (((r1 ^ 0x1eu) & (r1 ^ res_2)) >> 0x1f)) {  // (from the original)
                if (r1 == 5u) {
                    goto L_6f43b4;
                }
                if (r1 != 0xdu) {  // (from the original)
                    guest::cpu()->r[1] = r1;
                    return;
                }
                goto L_6f43e0;
            }
            if (r1 == 0x1fu) {  // (from the original)
                goto L_6f4464;
            }
            if (r1 != 0x20u) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return;
            }
            goto L_6f44b4;
        }
        res_3 = r1 - 0x2eu;  // (from the original)
        nf_3 = res_3 >> 0x1f;  // (from the original)
        zf_3 = res_3 == 0;
        vf_3 = ((r1 ^ 0x2eu) & (r1 ^ res_3)) >> 0x1f;  // (from the original)
        if (zf_3) {
            goto L_6f45bc;
        }
        if (!!zf_3 || nf_3 != vf_3) {
            if (r1 == 0x28u) {  // (from the original)
                goto L_6f4538;
            }
            if (r1 != 0x2cu) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return;
            }
            goto L_6f4588;
        }
        if (r1 == 0x32u) {  // (from the original)
            goto L_6f460c;
        }
        if (r1 == 0x38u) {  // (from the original)
            goto L_6f4640;
        }
        guest::cpu()->r[1] = r1;
        return;
L_6f43b4:;
        r12_1 = arg0->byte_0;
        r1_1 = r2 + (r12_1 >> 5);
        if (r1_1 > 4u) {
            u32 nf_4 = r2 >> 0x1f;  // (from the original)
            u32 zf_4 = r2 == 0;
            if (!zf_4 && nf_4 == 0u) {
                r1_1 = 4u;
            }
            if (zf_4 || nf_4 != 0u) {
                r1_1 = 0u;
            }
        }
        r1_2 = r12_1 & ~0xe0u | r1_1 << 5;  // (from the original)
        arg0->byte_0 = u8(r1_2);
        guest::cpu()->r[1] = r1_2;
        return;
L_6f43e0:;
        r12_2 = arg0->byte_1;
        r1_3 = (r12_2 >> 7) + ((u32(arg0->byte_2) & 0xfu) << 1) + r2;  // (from the original)
        if (r1_3 > 0x14u) {  // (from the original)
            u32 nf_5 = r2 >> 0x1f;  // (from the original)
            u32 zf_5 = r2 == 0;
            if (!zf_5 && nf_5 == 0u) {
                r1_3 = 0x14u;  // (from the original)
            }
            if (zf_5 || nf_5 != 0u) {
                r1_3 = 0u;
            }
        }
        r5_1 = r1_3 & 0x1eu;  // (from the original)
        r1_4 = r12_2 & ~0x80u | r1_3 << 7;  // (from the original)
        r2_1 = u32(arg0->byte_2) & ~0xfu | r5_1 >> 1;  // (from the original)
        arg0->byte_1 = u8(r1_4);
        arg0->byte_2 = u8(r2_1);
        guest::cpu()->r[1] = r1_4;
        return;
L_6f4430:;
        r12_3 = arg0->byte_4;
        r1_5 = r2 + (r12_3 >> 4u & 7u);
        if (r1_5 > 4u) {
            u32 nf_6 = r2 >> 0x1f;  // (from the original)
            u32 zf_6 = r2 == 0;
            if (!zf_6 && nf_6 == 0u) {
                r1_5 = 4u;
            }
            if (zf_6 || nf_6 != 0u) {
                r1_5 = 0u;
            }
        }
        r1_6 = r12_3 & ~0x70u | (r1_5 & 7u) << 4;  // (from the original)
        arg0->byte_4 = u8(r1_6);
        guest::cpu()->r[1] = r1_6;
        return;
L_6f4464:;
        r12_4 = arg0->byte_4;
        r1_7 = (r12_4 >> 7) + ((u32(arg0->byte_5) & 7u) << 1) + r2;
        if (r1_7 > 0xfu) {  // (from the original)
            u32 nf_7 = r2 >> 0x1f;  // (from the original)
            u32 zf_7 = r2 == 0;
            if (!zf_7 && nf_7 == 0u) {
                r1_7 = 0xfu;  // (from the original)
            }
            if (zf_7 || nf_7 != 0u) {
                r1_7 = 0u;
            }
        }
        r4_1 = r1_7 & 0xeu;  // (from the original)
        r1_8 = r12_4 & ~0x80u | r1_7 << 7;  // (from the original)
        r2_2 = u32(arg0->byte_5) & ~7u | r4_1 >> 1;
        arg0->byte_4 = u8(r1_8);
        arg0->byte_5 = u8(r2_2);
        guest::cpu()->r[1] = r1_8;
        return;
L_6f44b4:;
        u32 r12_5 = arg0->byte_5;
        u32 r1_9 = (r12_5 >> 3) + ((u32(arg0->byte_6) & 1u) << 5) + r2;
        if (r1_9 > 0x3fu) {  // (from the original)
            u32 nf_8 = r2 >> 0x1f;  // (from the original)
            u32 zf_8 = r2 == 0;
            if (!zf_8 && nf_8 == 0u) {
                r1_9 = 0x3fu;  // (from the original)
            }
            if (zf_8 || nf_8 != 0u) {
                r1_9 = 0u;
            }
        }
        u32 r1_10 = r12_5 & ~0xf8u | r1_9 << 3;  // (from the original)
        u32 r2_3 = u32(arg0->byte_6) & ~1u | (r1_9 & 0x20u) >> 5;  // (from the original)
        arg0->byte_5 = u8(r1_10);
        arg0->byte_6 = u8(r2_3);
        guest::cpu()->r[1] = r1_10;
        return;
    }
    r12_6 = arg0->byte_6;
    r1_11 = r2 + (r12_6 >> 3u & 0xfu);  // (from the original)
    if (r1_11 > 0xau) {  // (from the original)
        u32 nf_9 = r2 >> 0x1f;  // (from the original)
        u32 zf_9 = r2 == 0;
        if (!zf_9 && nf_9 == 0u) {
            r1_11 = 0xau;  // (from the original)
        }
        if (zf_9 || nf_9 != 0u) {
            r1_11 = 0u;
        }
    }
    r1_12 = r12_6 & ~0x78u | (r1_11 & 0xfu) << 3;  // (from the original)
    arg0->byte_6 = u8(r1_12);
    guest::cpu()->r[1] = r1_12;
    return;
L_6f4538:;
    r12_7 = arg0->byte_7;
    r1_13 = (r12_7 >> 3) + ((u32(arg0->byte_8) & 0x1fu) << 5) + r2;  // (from the original)
    if (r1_13 > 0x3e8u) {  // (from the original)
        u32 nf_10 = r2 >> 0x1f;  // (from the original)
        u32 zf_10 = r2 == 0;
        if (!zf_10 && nf_10 == 0u) {
            r1_13 = 0x3e8u;  // (from the original)
        }
        if (zf_10 || nf_10 != 0u) {
            r1_13 = 0u;
        }
    }
    r5_3 = r1_13 & 0x3e0u;  // (from the original)
    r1_14 = r12_7 & ~0xf8u | r1_13 << 3;  // (from the original)
    r2_4 = u32(arg0->byte_8) & ~0x1fu | r5_3 >> 5;  // (from the original)
    arg0->byte_7 = u8(r1_14);
    arg0->byte_8 = u8(r2_4);
    guest::cpu()->r[1] = r1_14;
    return;
L_6f4588:;
    r12_8 = arg0->byte_9;
    r1_15 = (r12_8 & 7u) + r2;
    if (r1_15 > 7u) {
        u32 nf_11 = r2 >> 0x1f;  // (from the original)
        u32 zf_11 = r2 == 0;
        if (!zf_11 && nf_11 == 0u) {
            r1_15 = 7u;
        }
        if (zf_11 || nf_11 != 0u) {
            r1_15 = 0u;
        }
    }
    r1_16 = r12_8 & ~7u | r1_15 & 7u;
    arg0->byte_9 = u8(r1_16);
    guest::cpu()->r[1] = r1_16;
    return;
L_6f45bc:;
    r12_9 = arg0->byte_9;
    r1_17 = (r12_9 >> 4) + ((u32(arg0->byte_a) & 0x3fu) << 4) + r2;  // (from the original)
    if (r1_17 > 0x3e8u) {  // (from the original)
        u32 nf_12 = r2 >> 0x1f;  // (from the original)
        u32 zf_12 = r2 == 0;
        if (!zf_12 && nf_12 == 0u) {
            r1_17 = 0x3e8u;  // (from the original)
        }
        if (zf_12 || nf_12 != 0u) {
            r1_17 = 0u;
        }
    }
    r5_4 = r1_17 & 0x3f0u;  // (from the original)
    r1_18 = r12_9 & ~0xf0u | r1_17 << 4;  // (from the original)
    r2_5 = u32(arg0->byte_a) & ~0x3fu | r5_4 >> 4;  // (from the original)
    arg0->byte_9 = u8(r1_18);
    arg0->byte_a = u8(r2_5);
    guest::cpu()->r[1] = r1_18;
    return;
L_6f460c:;
    r12_10 = arg0->byte_b;
    r1_19 = r2 + (r12_10 >> 1u & 7u);
    if (r1_19 > 7u) {
        u32 nf_13 = r2 >> 0x1f;  // (from the original)
        u32 zf_13 = r2 == 0;
        if (!zf_13 && nf_13 == 0u) {
            r1_19 = 7u;
        }
        if (zf_13 || nf_13 != 0u) {
            r1_19 = 0u;
        }
    }
    r1_20 = r12_10 & ~0xeu | (r1_19 & 7u) << 1;  // (from the original)
    arg0->byte_b = u8(r1_20);
    guest::cpu()->r[1] = r1_20;
    return;
L_6f4640:;
    u32 r12_11 = arg0->byte_c;
    u32 r1_21 = r2 + (r12_11 >> 1u & 0x3fu);  // (from the original)
    if (r1_21 > 0x32u) {  // (from the original)
        u32 nf_14 = r2 >> 0x1f;  // (from the original)
        u32 zf_14 = r2 == 0;
        if (!zf_14 && nf_14 == 0u) {
            r1_21 = 0x32u;  // (from the original)
        }
        if (zf_14 || nf_14 != 0u) {
            r1_21 = 0u;
        }
    }
    u32 r1_22 = r12_11 & ~0x7eu | (r1_21 & 0x3fu) << 1;  // (from the original)
    arg0->byte_c = u8(r1_22);
    guest::cpu()->r[1] = r1_22;
}

}  // namespace d_006f432c
GUEST_EXPORT_FRAMED(0x006f432c, d_006f432c::f_006f432c, 0x30);  // pushes {r4, r5} first, as the original

// f_006f4f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f4f48 {

struct __attribute__((packed)) Local_006f4f48_r4_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_006f4f48_r4_1, byte_26e, 0x26e);  // (from the original)
GUEST_OFFSET(Local_006f4f48_r4_1, byte_26f, 0x26f);  // (from the original)
GUEST_OFFSET(Local_006f4f48_r4_1, byte_270, 0x270);  // (from the original)
GUEST_OFFSET(Local_006f4f48_r4_1, byte_271, 0x271);  // (from the original)
GUEST_OFFSET(Local_006f4f48_r4_1, byte_272, 0x272);  // (from the original)

struct __attribute__((packed)) Local_006f4f48_r5_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_006f4f48_r5_1, byte_26e, 0x26e);  // (from the original)
GUEST_OFFSET(Local_006f4f48_r5_1, byte_26f, 0x26f);  // (from the original)
GUEST_OFFSET(Local_006f4f48_r5_1, byte_270, 0x270);  // (from the original)
GUEST_OFFSET(Local_006f4f48_r5_1, byte_271, 0x271);  // (from the original)
GUEST_OFFSET(Local_006f4f48_r5_1, byte_272, 0x272);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x005cc024, u32(u32, u32, u32)> call_005cc024;  // (from the original)
inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> call_00758104;  // (from the original)
inline constexpr guest::Function<0x007595bc, u32(u32, u32, u32)> call_007595bc;  // (from the original)

u32 f_006f4f48(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = 0;
    u32 r6 = r0;
    u32 r0_2 = call_00758104(r0 + 0x1900u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        return r0_2;
    }
    u32 r0_3 = call_002fb378(r0_2, r1_1, r2_1);
    u32 r1_2 = *gptr<u32>(r0_3);
    u32 r2_2 = *gptr<u32>(r0_3 + 4);
    *frame.at<u32>(8) = *gptr<u32>(r0_3 + 8u);
    *frame.at<u32>(0) = r1_2;
    *frame.at<u32>(4) = r2_2;
    r0_2 = call_007595bc(r6 + 0x1b80u, frame.at(0).addr(), r2_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_2 + 1u == 0) {
        return r0_2;
    } else {
        r4 = 0u;
    }
L_6f4f90:;
    u32 r1_4 = r4 + (r4 << 2);
    r0_2 = call_00758104(r6 + (r1_4 << 7), r1_4, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_6f5078;
    }
    if (r4 + 1u != 0) {
        gptr<Local_006f4f48_r5_1> r5_1 = gptr<Local_006f4f48_r5_1>(r6 + 0x1900u);  // (from the original)
        gptr<Local_006f4f48_r4_1> r4_1 = gptr<Local_006f4f48_r4_1>(r6 + (r4 + (r4 << 2) << 7));
        call_002fbb30(r4_1.addr(), r5_1.addr(), 0x31u);  // (from the original)
        call_002fbb30(r4_1.addr() + 0x34u, r5_1.addr() + 0x34u, 0x31u);  // (from the original)
        call_002fbb30(r4_1.addr() + 0x68u, r5_1.addr() + 0x68u, 0x42u);  // (from the original)
        call_002f8574(r4_1.addr() + 0xaau, r5_1.addr() + 0xaau, 0x182u);  // (from the original)
        call_002fbb30(r4_1.addr() + 0x22cu, r5_1.addr() + 0x22cu, 0x42u);  // (from the original)
        r4_1->byte_26e = u8(u32(r5_1->byte_26e));
        r4_1->byte_26f = u8(u32(r5_1->byte_26f));
        r4_1->byte_270 = u8(u32(r5_1->byte_270));
        r4_1->byte_271 = u8(u32(r5_1->byte_271));
        r4_1->byte_272 = u8(u32(r5_1->byte_272));
        call_002fc8e8(r4_1.addr() + 0x274u, r5_1.addr() + 0x274u, guest::cpu()->r[2]);  // (from the original)
        call_00311c70(r4_1.addr() + 0x278u, r5_1.addr() + 0x278u, guest::cpu()->r[2]);  // (from the original)
        call_005cc024(r4_1.addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
        call_002ff408(r6 + 0x1900u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
        r0_2 = call_00303cdc(r6 + 0x1b80u, guest::cpu()->r[1]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
L_6f5078:;
    r4 += 1u;
    if (r4 >= 0xau) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    guest::preempt();
    goto L_6f4f90;
}

}  // namespace d_006f4f48
GUEST_EXPORT_FRAMED(0x006f4f48, d_006f4f48::f_006f4f48, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006f5090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5090 {

struct __attribute__((packed)) Local_006f5090_r5_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_006f5090_r5_1, byte_26e, 0x26e);  // (from the original)
GUEST_OFFSET(Local_006f5090_r5_1, byte_26f, 0x26f);  // (from the original)
GUEST_OFFSET(Local_006f5090_r5_1, byte_270, 0x270);  // (from the original)
GUEST_OFFSET(Local_006f5090_r5_1, byte_271, 0x271);  // (from the original)
GUEST_OFFSET(Local_006f5090_r5_1, byte_272, 0x272);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> call_00311c70;  // (from the original)

void f_006f5090(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006f5090_r5_1> r5_1 = gptr<Local_006f5090_r5_1>(r0 + 0x1900u);  // (from the original)
    call_002fbb30(r5_1.addr(), r1, 0x31u, guest::cpu()->r[3]);  // (from the original)
    call_002fbb30(r5_1.addr() + 0x34u, r1 + 0x34u, 0x31u, guest::cpu()->r[3]);  // (from the original)
    call_002fbb30(r5_1.addr() + 0x68u, r1 + 0x68u, 0x42u, guest::cpu()->r[3]);  // (from the original)
    call_002f8574(r5_1.addr() + 0xaau, r1 + 0xaau, 0x182u);  // (from the original)
    call_002fbb30(r5_1.addr() + 0x22cu, r1 + 0x22cu, 0x42u, guest::cpu()->r[3]);  // (from the original)
    r5_1->byte_26e = u8(u32(*gptr<u8>(r1 + 0x26eu)));  // (from the original)
    r5_1->byte_26f = u8(u32(*gptr<u8>(r1 + 0x26fu)));  // (from the original)
    r5_1->byte_270 = u8(u32(*gptr<u8>(r1 + 0x270u)));  // (from the original)
    r5_1->byte_271 = u8(u32(*gptr<u8>(r1 + 0x271u)));  // (from the original)
    r5_1->byte_272 = u8(u32(*gptr<u8>(r1 + 0x272u)));  // (from the original)
    call_002fc8e8(r5_1.addr() + 0x274u, r1 + 0x274u);  // (from the original)
    frame.release();
    call_00311c70(r5_1.addr() + 0x278u, r1 + 0x278u);  // (from the original)
    return;
}

}  // namespace d_006f5090
GUEST_EXPORT(0x006f5090, d_006f5090::f_006f5090);

// f_006f5130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5130 {

inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> call_005cddb4;  // (from the original)

void f_006f5130(u32 r0) {
    call_005cddb4(r0 + 0x1b80u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_006f5130
GUEST_EXPORT(0x006f5130, d_006f5130::f_006f5130);

// f_006f5138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5138 {

struct __attribute__((packed)) Local_006f5138_r5_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_006f5138_r5_1, byte_26e, 0x26e);  // (from the original)
GUEST_OFFSET(Local_006f5138_r5_1, byte_26f, 0x26f);  // (from the original)
GUEST_OFFSET(Local_006f5138_r5_1, byte_270, 0x270);  // (from the original)
GUEST_OFFSET(Local_006f5138_r5_1, byte_271, 0x271);  // (from the original)
GUEST_OFFSET(Local_006f5138_r5_1, byte_272, 0x272);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x005cc024, u32(u32, u32)> call_005cc024;  // (from the original)

void f_006f5138(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006f5138_r5_1> r5_1 = gptr<Local_006f5138_r5_1>(r0 + (r1 + (r1 << 2) << 7));
    call_002fbb30(r5_1.addr(), r2, 0x31u, r3);  // (from the original)
    call_002fbb30(r5_1.addr() + 0x34u, r2 + 0x34u, 0x31u, guest::cpu()->r[3]);  // (from the original)
    call_002fbb30(r5_1.addr() + 0x68u, r2 + 0x68u, 0x42u, guest::cpu()->r[3]);  // (from the original)
    call_002f8574(r5_1.addr() + 0xaau, r2 + 0xaau, 0x182u, guest::cpu()->r[3]);  // (from the original)
    call_002fbb30(r5_1.addr() + 0x22cu, r2 + 0x22cu, 0x42u, guest::cpu()->r[3]);  // (from the original)
    r5_1->byte_26e = u8(u32(*gptr<u8>(r2 + 0x26eu)));  // (from the original)
    r5_1->byte_26f = u8(u32(*gptr<u8>(r2 + 0x26fu)));  // (from the original)
    r5_1->byte_270 = u8(u32(*gptr<u8>(r2 + 0x270u)));  // (from the original)
    r5_1->byte_271 = u8(u32(*gptr<u8>(r2 + 0x271u)));  // (from the original)
    r5_1->byte_272 = u8(u32(*gptr<u8>(r2 + 0x272u)));  // (from the original)
    call_002fc8e8(r5_1.addr() + 0x274u, r2 + 0x274u);  // (from the original)
    call_00311c70(r5_1.addr() + 0x278u, r2 + 0x278u);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    if (r3 == 0) {
        frame.release();
        call_005cc024(r5_1.addr(), r1_7);
        return;
    }
    guest::cpu()->r[1] = r1_7;
}

}  // namespace d_006f5138
GUEST_EXPORT(0x006f5138, d_006f5138::f_006f5138);

// f_006f51f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f51f8 {


u32 f_006f51f8(u32 r0, u32 r1) {
    return r0 + (r1 + (r1 << 2) << 7);
}

}  // namespace d_006f51f8
GUEST_EXPORT(0x006f51f8, d_006f51f8::f_006f51f8);

// f_006f5204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5204 {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32)> call_00303cdc;  // (from the original)

void f_006f5204(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        call_002ff408(r5 + (r4 + (r4 << 2) << 7), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    call_002ff408(r5 + 0x1900u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    call_00303cdc(r5 + 0x1b80u, guest::cpu()->r[1]);  // (from the original)
    return;
}

}  // namespace d_006f5204
GUEST_EXPORT(0x006f5204, d_006f5204::f_006f5204);

// f_006f536c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f536c {

inline constexpr guest::Function<0x007234f8, u32(u32, u32)> call_007234f8;  // (from the original)
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;  // (from the original)

u32 f_006f536c(u32 r0) {
    u32 r0_2 = 0;
    u32 r5 = r0 + 0xd5cu;  // (from the original)
    u32 r4 = *gptr<s8>(0x428u + r0);  // (from the original)
    u32 r0_1 = call_007237e0(r5, 0x428u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_6f53b8;
    }
L_6f5390:;
    r0_2 = call_007234f8(r5, r1);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0xau) {  // (from the original)
        r4 = 0u;
    } else if (r0_2 == 0xbu) {  // (from the original)
        r4 = sxtb(r4 - 1u);
    }
    return r4;
L_6f53b8:;
    r1 = 0x2f635cu;  // (from the original)
    if (*gptr<u32>(r5 + 0xb8u) == r1 && *gptr<u32>(r5 + 0xbcu) == 0) {  // (from the original)
        guest::preempt();
        goto L_6f5390;
    }
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_006f536c
GUEST_EXPORT_FRAMED(0x006f536c, d_006f536c::f_006f536c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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
    arg0->byte_40e = 1;
    arg0->byte_429 = u8(r1);
    arg0->byte_428 = 0;
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
    arg0->word_e30 = arg0->word_e30 | 8u;
    arg0->byte_410 = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_006f56d4
GUEST_EXPORT(0x006f56d4, d_006f56d4::f_006f56d4);

// f_006f58e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f58e0 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

void f_006f58e0(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_001323bc(r0);
    frame.release();
    call_00569e6c(r0_1, r0 + 0x26cu, 1u);  // (from the original)
    return;
}

}  // namespace d_006f58e0
GUEST_EXPORT(0x006f58e0, d_006f58e0::f_006f58e0);

// f_006f5b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5b24 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32)> call_001323b4;  // (from the original)

void f_006f5b24(u32 r0) {
    call_00132364(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_001323b4(r0 + 0x26cu);  // (from the original)
}

}  // namespace d_006f5b24
GUEST_EXPORT_FRAMED(0x006f5b24, d_006f5b24::f_006f5b24, 0x4010);  // pushes {r4, lr} first, as the original

// f_006f5c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5c7c {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> call_00567e24;  // (from the original)

u32 f_006f5c7c(u32 r0) {
    return call_00567e24(r0 + 0x24u, 0x6f5c88u);  // (from the original)
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

inline constexpr guest::Function<0x0056a378, u32(u32, u32)> call_0056a378;  // (from the original)

u32 f_006f6810(u32 r0, gptr<Object_006f6810_1> arg1, gptr<Object_006f6810_2> arg2, gptr<Object_006f6810_3> arg3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    float S0_1 = std::bit_cast<float>(arg2->word_0);
    float S1_1 = std::bit_cast<float>(arg2->word_4);
    float S2_1 = std::bit_cast<float>(arg2->word_8);
    float S3_1 = S0_1 - std::bit_cast<float>(arg1->word_0);
    float S5_1 = S2_1 - std::bit_cast<float>(arg1->word_8);
    float S4_1 = S1_1 - std::bit_cast<float>(arg1->word_4);
    float S0_2 = std::bit_cast<float>(arg3->word_0) - S0_1;
    float S2_2 = std::bit_cast<float>(arg3->word_8) - S2_1;
    float S1_2 = std::bit_cast<float>(arg3->word_4) - S1_1;
    *frame.at<u32>(0) = std::bit_cast<u32>(S4_1 * S2_2 - S5_1 * S1_2);
    *frame.at<u32>(4) = std::bit_cast<u32>(S5_1 * S0_2 - S3_1 * S2_2);
    *frame.at<u32>(8) = std::bit_cast<u32>(S3_1 * S1_2 - S4_1 * S0_2);
    u32 r0_2 = call_0056a378(frame.at(0).addr(), arg1.addr());
    float S1_3 = ((std::bit_cast<float>(*gptr<u32>(r0)) - std::bit_cast<float>(arg1->word_0)) * std::bit_cast<float>(*frame.at<u32>(0)) + (std::bit_cast<float>(*gptr<u32>(r0 + 8u)) - std::bit_cast<float>(arg1->word_8)) * std::bit_cast<float>(*frame.at<u32>(8))) / std::bit_cast<float>(*frame.at<u32>(4));
    float S0_3 = std::bit_cast<float>(arg1->word_4) - S1_3;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return r0_2;
}

}  // namespace d_006f6810
GUEST_EXPORT_FRAMED(0x006f6810, d_006f6810::f_006f6810, 0x4030);  // pushes {r4, r5, lr} first, as the original

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

inline guest::global<u32, 0x006f7d88> global_006f7d88;  // (from the original)

void f_006f7d34(gptr<Object_006f7d34_0> arg0, gptr<Object_006f7d34_1> arg1, float S0, float S1, float S2) {
    float S3_1 = std::bit_cast<float>(*global_006f7d88);
    float S0_1 = S0 * S3_1;
    float S1_1 = S1 * S3_1;
    arg0->word_8 = std::bit_cast<u32>(std::bit_cast<float>(arg1->word_0) - S0_1);
    arg0->word_c = arg1->word_4;
    arg0->word_10 = std::bit_cast<u32>(std::bit_cast<float>(arg1->word_8) - S1_1);
    arg0->word_14 = std::bit_cast<u32>(std::bit_cast<float>(arg1->word_0) + S0_1);
    arg0->word_18 = std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4) + S2);
    float S0_2 = std::bit_cast<float>(arg1->word_8) + S1_1;
    arg0->word_1c = std::bit_cast<u32>(S0_2);
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006f7d34
GUEST_EXPORT(0x006f7d34, d_006f7d34::f_006f7d34);

// f_006f7dc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7dc0 {


void f_006f7dc0(gptr<collision__AABB> arg0) {
    arg0->byte_4 = 1;
    arg0->word_0 = 0x90b154;  // (from the original)
    guest::cpu()->r[1] = 0x90b154u;  // (from the original)
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
    arg0->word_c = r1;
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
    arg0->word_4 = r1;
    arg0->word_8 = r2;
    arg0->word_c = r3;
    return arg0.addr() + 4u;
}

}  // namespace d_006f7e40
GUEST_EXPORT(0x006f7e40, d_006f7e40::f_006f7e40);

// f_006f7e4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7e4c {


void f_006f7e4c(gptr<collision__World__Body> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_4 = r1;
    arg0->word_0 = 0x90b168;  // (from the original)
    arg0->word_8 = r2;
    arg0->word_c = r3;
}

}  // namespace d_006f7e4c
GUEST_EXPORT(0x006f7e4c, d_006f7e4c::f_006f7e4c);

// f_006f7e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7e64 {


void f_006f7e64(gptr<collision__World__Body> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = 0x90b168;  // (from the original)
    arg0->word_8 = 0;
    arg0->word_c = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_006f7e64
GUEST_EXPORT(0x006f7e64, d_006f7e64::f_006f7e64);

// f_006f8054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8054 {

struct __attribute__((packed)) Object_006f8054_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_006f8054_0, word_4, 0x4);  // (from the original)


void f_006f8054(gptr<Object_006f8054_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r1 = 0u;
    u32 r3 = r1;
    u32 r2 = r1;
    arg0->word_4 = r1;
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u32>((r0 + (r3 << 2)) + 8u) = r1;
        res_1 = r2 - 0x64u;  // (from the original)
        r3 = r3_1 + 1u;
        *gptr<u32>((r0 + (r3_1 << 2)) + 8u) = r1;
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ 0x64u) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006f8054
GUEST_EXPORT_FRAMED(0x006f8054, d_006f8054::f_006f8054, 0x10);  // pushes {r4} first, as the original

// f_006f8094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8094 {

struct __attribute__((packed)) Object_006f8094_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_006f8094_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f8094_0, word_4, 0x4);  // (from the original)


void f_006f8094(gptr<Object_006f8094_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r1 = 0u;
    arg0->word_0 = r1;
    u32 r3 = r1;
    u32 r2 = r1;
    arg0->word_4 = r1;
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u32>((r0 + (r3 << 2)) + 8u) = r1;
        res_1 = r2 - 0x64u;  // (from the original)
        r3 = r3_1 + 1u;
        *gptr<u32>((r0 + (r3_1 << 2)) + 8u) = r1;
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ 0x64u) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006f8094
GUEST_EXPORT_FRAMED(0x006f8094, d_006f8094::f_006f8094, 0x10);  // pushes {r4} first, as the original

// f_006f80dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f80dc {

struct __attribute__((packed)) Object_006f80dc_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f80dc_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f80dc_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f80dc_1, word_8, 0x8);  // (from the original)


u32 f_006f80dc(gptr<collision__Sphere> arg0, gptr<Object_006f80dc_1> arg1) {
    arg0->word_8 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_8) + std::bit_cast<float>(arg1->word_0));
    arg0->word_c = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_c) + std::bit_cast<float>(arg1->word_4));
    float S1_1 = std::bit_cast<float>(arg1->word_8);
    float S0_1 = std::bit_cast<float>(arg0->word_10) + S1_1;
    arg0->word_10 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return arg0.addr() + 8u;
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
    arg0->word_8 = arg1->word_0;
    arg0->word_c = arg1->word_4;
    u32 r1_1 = arg1->word_8;
    arg0->word_10 = r1_1;
    arg0->word_14 = std::bit_cast<u32>(S0);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006f8114
GUEST_EXPORT(0x006f8114, d_006f8114::f_006f8114);

// f_006f8134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8134 {


void f_006f8134(gptr<collision__Sphere> arg0, gptr<Float3> arg1, float S0) {
    arg0->byte_4 = 0;
    arg0->word_0 = 0x90b178;  // (from the original)
    float S1_1 = arg1->v[0];
    float S2_1 = arg1->v[1];
    float S3_1 = arg1->v[2];
    arg0->word_8 = std::bit_cast<u32>(S1_1);
    arg0->word_c = std::bit_cast<u32>(S2_1);
    arg0->word_10 = std::bit_cast<u32>(S3_1);
    arg0->word_14 = std::bit_cast<u32>(S0);
    guest::cpu()->s[1] = S1_1;
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
    arg0->word_8 = std::bit_cast<u32>(arg1->v[0]);
    arg0->word_c = std::bit_cast<u32>(arg1->v[1]);
    arg0->word_10 = std::bit_cast<u32>(arg1->v[2]);
    arg0->word_14 = arg2->word_0;
    arg0->word_18 = arg2->word_4;
    arg0->word_1c = arg2->word_8;
    arg0->word_20 = std::bit_cast<u32>(S0);
}

}  // namespace d_006f81f0
GUEST_EXPORT(0x006f81f0, d_006f81f0::f_006f81f0);

// f_006f8228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8228 {

inline guest::global<u32, 0x006f8248> global_006f8248;  // (from the original)

void f_006f8228(gptr<collision__Capsule> arg0) {
    arg0->byte_4 = 3;
    float S0_1 = std::bit_cast<float>(*global_006f8248);
    arg0->word_0 = 0x90b18c;  // (from the original)
    arg0->word_20 = std::bit_cast<u32>(S0_1);
}

}  // namespace d_006f8228
GUEST_EXPORT(0x006f8228, d_006f8228::f_006f8228);

// f_006f8368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8368 {

struct __attribute__((packed)) Object_006f8368_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f8368_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006f8368_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006f8368_1, word_8, 0x8);  // (from the original)


u32 f_006f8368(gptr<collision__Cylinder> arg0, gptr<Object_006f8368_1> arg1) {
    arg0->word_8 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_8) + std::bit_cast<float>(arg1->word_0));
    arg0->word_c = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_c) + std::bit_cast<float>(arg1->word_4));
    float S1_1 = std::bit_cast<float>(arg1->word_8);
    float S0_1 = std::bit_cast<float>(arg0->word_10) + S1_1;
    arg0->word_10 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return arg0.addr() + 8u;
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
    arg0->word_8 = u32(arg1->min.x);
    arg0->word_c = u32(arg1->min.y);
    u32 r1_1 = u32(arg1->max.x);
    arg0->word_10 = r1_1;
    arg0->word_14 = std::bit_cast<u32>(S0);
    arg0->word_18 = std::bit_cast<u32>(S1);
    guest::cpu()->r[1] = r1_1;
    return (arg0.addr() + 0x10u) + 4u;  // (from the original)
}

}  // namespace d_006f83a8
GUEST_EXPORT(0x006f83a8, d_006f83a8::f_006f83a8);

// f_006f83cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f83cc {


void f_006f83cc(gptr<collision__Cylinder> arg0, gptr<Float3> arg1, float S0, float S1) {
    arg0->byte_4 = 2;
    arg0->word_0 = 0x90b1a0;  // (from the original)
    float S3_1 = arg1->v[1];
    float S4_1 = arg1->v[2];
    arg0->word_8 = std::bit_cast<u32>(arg1->v[0]);
    arg0->word_c = std::bit_cast<u32>(S3_1);
    arg0->word_10 = std::bit_cast<u32>(S4_1);
    arg0->word_14 = std::bit_cast<u32>(S0);
    arg0->word_18 = std::bit_cast<u32>(S1);
}

}  // namespace d_006f83cc
GUEST_EXPORT(0x006f83cc, d_006f83cc::f_006f83cc);

// f_006f83f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f83f8 {

inline guest::global<u32, 0x006f841c> global_006f841c;  // (from the original)

void f_006f83f8(gptr<collision__Cylinder> arg0) {
    arg0->byte_4 = 2;
    float S0_1 = std::bit_cast<float>(*global_006f841c);
    arg0->word_0 = 0x90b1a0;  // (from the original)
    arg0->word_14 = std::bit_cast<u32>(S0_1);
    arg0->word_18 = std::bit_cast<u32>(S0_1);
    guest::cpu()->r[1] = 0x90b1a0u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
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
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_1 = arg0->word_0 << 0xe;  // (from the original)
    *frame.at<u16>(0) = u16(r0_1);
    return uxth(r0_1);
}

}  // namespace d_006f8540
GUEST_EXPORT(0x006f8540, d_006f8540::f_006f8540);

// f_006f8c24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8c24 {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00317ee0, u32(u32, u32)> call_00317ee0;  // (from the original)
inline constexpr guest::Function<0x005b48a4, u32(u32, u32)> call_005b48a4;  // (from the original)
inline constexpr guest::Function<0x006cbb08, u32(u32, u32)> call_006cbb08;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)

u32 f_006f8c24(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_006f9638(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 - 2u < 0x18u) {  // (from the original)
        u32 r4_1 = *gptr<u8>(0x95276cu + r0_1);  // (from the original)
        u32 r0_2 = call_002fae84(r0_1);
        frame.release();
        return call_00317ee0(r0_2 + 0x5d880u, r4_1);  // (from the original)
    }
    u32 r0_4 = call_002f74e0(0x4000u, r0);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        return 0u;
    }
    u32 r0_5 = call_005b48a4(r0_4, r1_1);
    u32 r0_6 = call_006cbb08(r0_5, guest::cpu()->r[1]);
    if (r0_6 != 0) {
        return r0_6 + 0x10u;  // (from the original)
    }
    return 0u;
}

}  // namespace d_006f8c24
GUEST_EXPORT(0x006f8c24, d_006f8c24::f_006f8c24);

// f_006f8eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8eb8 {

struct __attribute__((packed)) Local_006f8eb8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f8eb8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f8eb8_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f8eb8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f8eb8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f8eb8_ea_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;  // (from the original)

void f_006f8eb8(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006f8eb8_ea_1> ea_1 = gptr<Local_006f8eb8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = 0x12;  // (from the original)
    ea_1->word_4 = 0xa;  // (from the original)
    gptr<Local_006f8eb8_ea_2> ea_2 = gptr<Local_006f8eb8_ea_2>(frame.at(8).addr());
    ea_2->word_0 = 0x12;  // (from the original)
    ea_2->word_4 = 0xb;  // (from the original)
    call_0052f200(r0, frame.at(0).addr(), frame.at(8).addr());
}

}  // namespace d_006f8eb8
GUEST_EXPORT_FRAMED(0x006f8eb8, d_006f8eb8::f_006f8eb8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006f9230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9230 {

struct __attribute__((packed)) Local_006f9230_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006f9230_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9230_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f9230_r0_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_006f9230_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9230_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9230_r1_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9230_r1_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9230_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9230_r1_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9230_r1_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9230_r1_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9230_r1_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9230_r1_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9230_r1_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9230_r1_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9230_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9230_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9230_r3_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x006f932c> global_006f932c;  // (from the original)
inline constexpr guest::Function<0x006c8760, u32(u32, u32, u32, u32)> call_006c8760;  // (from the original)

u32 f_006f9230(gptr<Float3> arg0, float S0) {
    guest::StackFrame frame(0x7c);  // the original's stack frame
    u32 r1_6 = 0;
    float S2 = arg0->v[0];
    gptr<Local_006f9230_r1_1> r1_1 = gptr<Local_006f9230_r1_1>(frame.at(0x18).addr());  // (from the original)
    float S4_1 = S0 * std::bit_cast<float>(*global_006f932c);
    *frame.at<u32>(0) = std::bit_cast<u32>(S2);
    float S1 = arg0->v[1];
    float S9 = S2 + S0;
    *frame.at<u32>(4) = std::bit_cast<u32>(S1);
    float S3 = arg0->v[2];
    float S7 = S2 - S0;
    *frame.at<u32>(8) = std::bit_cast<u32>(S3);
    float S10 = S3 + S0;
    float S8 = S3 - S0;
    float S5 = S3 + S4_1;
    S0 = S2 + S4_1;
    *frame.at<u32>(0xc) = std::bit_cast<u32>(S2);  // (from the original)
    *frame.at<u32>(0x10) = std::bit_cast<u32>(S1);  // (from the original)
    float S6 = S3 - S4_1;
    float S4 = S2 - S4_1;
    u32 r4 = 0u;
    *frame.at<u32>(0x14) = std::bit_cast<u32>(S10);  // (from the original)
    u32 r5 = frame.at(0).addr();
    *frame.at<u32>(0x20) = std::bit_cast<u32>(S5);  // (from the original)
    *frame.at<u32>(0x24) = std::bit_cast<u32>(S9);  // (from the original)
    r1_1->word_0 = std::bit_cast<u32>(S0);
    r1_1->word_4 = std::bit_cast<u32>(S1);
    gptr<Local_006f9230_r1_2> r1_2 = gptr<Local_006f9230_r1_2>(frame.at(0x30).addr());  // (from the original)
    *frame.at<u32>(0x28) = std::bit_cast<u32>(S1);  // (from the original)
    *frame.at<u32>(0x2c) = std::bit_cast<u32>(S3);  // (from the original)
    *frame.at<u32>(0x38) = std::bit_cast<u32>(S6);  // (from the original)
    *frame.at<u32>(0x3c) = std::bit_cast<u32>(S2);  // (from the original)
    r1_2->word_0 = std::bit_cast<u32>(S0);
    r1_2->word_4 = std::bit_cast<u32>(S1);
    gptr<Local_006f9230_r1_3> r1_3 = gptr<Local_006f9230_r1_3>(frame.at(0x5c).addr());  // (from the original)
    *frame.at<u32>(0x40) = std::bit_cast<u32>(S1);  // (from the original)
    *frame.at<u32>(0x44) = std::bit_cast<u32>(S8);  // (from the original)
    *frame.at<u32>(0x48) = std::bit_cast<u32>(S4);  // (from the original)
    *frame.at<u32>(0x4c) = std::bit_cast<u32>(S1);  // (from the original)
    *frame.at<u32>(0x58) = std::bit_cast<u32>(S1);  // (from the original)
    *frame.at<u32>(0x64) = std::bit_cast<u32>(S1);  // (from the original)
    *frame.at<u32>(0x68) = std::bit_cast<u32>(S5);  // (from the original)
    r1_3->word_0 = std::bit_cast<u32>(S3);
    r1_3->word_4 = std::bit_cast<u32>(S4);
    gptr<Local_006f9230_r1_4> r1_4 = gptr<Local_006f9230_r1_4>(frame.at(0x50).addr());  // (from the original)
    r1_4->word_0 = std::bit_cast<u32>(S6);
    r1_4->word_4 = std::bit_cast<u32>(S7);
    do {
        gptr<Local_006f9230_r3_1> r3_1 = gptr<Local_006f9230_r3_1>(frame.at(0x6c).addr());  // (from the original)
        gptr<Local_006f9230_r0_1> r0_1 = gptr<Local_006f9230_r0_1>(r5 + (r4 + (r4 << 1) << 2));
        u32 r1_5 = r0_1->word_0;
        u32 r2_1 = r0_1->word_4;
        *frame.at<u32>(0x74) = r0_1->word_8;  // (from the original)
        r3_1->word_0 = r1_5;
        r3_1->word_4 = r2_1;
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
        u32 r0_3 = call_006c8760(frame.at(0x6c).addr(), 0u, r2_1, r3_1.addr());  // (from the original)
        r1_6 = guest::cpu()->r[1];
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
        if (r0_3 == 0) {
            return r0_3;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 9u);
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 1u;
}

}  // namespace d_006f9230
GUEST_EXPORT_FRAMED(0x006f9230, d_006f9230::f_006f9230, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006f9330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9330 {

struct __attribute__((packed)) Local_006f9330_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9330_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9330_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9330_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9330_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9330_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9330_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9330_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9330_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9330_ea_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9330_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9330_ea_6, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9330_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9330_ea_7, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0060d12c, u32(u32, u32)> call_0060d12c;  // (from the original)
inline constexpr guest::Function<0x0060d240, u32(u32)> call_0060d240;  // (from the original)
inline constexpr guest::Function<0x0060d264, u32(u32, u32, u32, u32)> call_0060d264;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x007667a8, u32(u32, u32, u32, u32)> call_007667a8;  // (from the original)

u32 f_006f9330(u32 r0, u32 r1) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    gptr<Local_006f9330_ea_1> ea_1 = gptr<Local_006f9330_ea_1>(frame.at(0x20).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    u32 r0_1 = call_002fe7cc(1u, r0);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r6_1 = frame.at(0x20).addr();  // (from the original)
    if (r0_1 != 0) {
        call_0052edfc(frame.at(0x10).addr(), r6_1);  // (from the original)
        gptr<Local_006f9330_ea_2> ea_2 = gptr<Local_006f9330_ea_2>(frame.at(0x10).addr());  // (from the original)
        u32 r0_3 = call_0075291c(r0_1, ea_2->word_0, ea_2->word_4);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            call_0052ed04(frame.at(0x18).addr(), r6_1);  // (from the original)
            call_0060d240(frame.at(0x28).addr());  // (from the original)
            gptr<Local_006f9330_ea_3> ea_3 = gptr<Local_006f9330_ea_3>(frame.at(0x18).addr());  // (from the original)
            call_007667a8(r0_3, frame.at(0x28).addr(), ea_3->word_0, ea_3->word_4);  // (from the original)
            call_0060d12c(frame.at(0x28).addr(), 0x20u);  // (from the original)
            gptr<Local_006f9330_ea_4> ea_4 = gptr<Local_006f9330_ea_4>(frame.at(0x18).addr());  // (from the original)
            call_0060d264(r0_3, ea_4->word_0, ea_4->word_4, frame.at(0x28).addr());  // (from the original)
            r1_1 = guest::cpu()->r[1];
        }
    }
    u32 r0_7 = call_002fe7cc(1u, r1_1);
    u32 r1_5 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        call_0052edfc(frame.at(8).addr(), frame.at(0x20).addr());  // (from the original)
        gptr<Local_006f9330_ea_5> ea_5 = gptr<Local_006f9330_ea_5>(frame.at(8).addr());
        u32 r0_9 = call_0075291c(r0_7, ea_5->word_0, ea_5->word_4);
        r1_5 = guest::cpu()->r[1];
        if (r0_9 != 0) {
            call_0052ed04(frame.at(0x10).addr(), frame.at(0x20).addr());  // (from the original)
            call_0060d240(frame.at(0x28).addr());  // (from the original)
            gptr<Local_006f9330_ea_6> ea_6 = gptr<Local_006f9330_ea_6>(frame.at(0x10).addr());  // (from the original)
            call_007667a8(r0_9, frame.at(0x28).addr(), ea_6->word_0, ea_6->word_4);  // (from the original)
            *frame.at<u8>(0x30) = 2;  // (from the original)
            gptr<Local_006f9330_ea_7> ea_7 = gptr<Local_006f9330_ea_7>(frame.at(0x10).addr());  // (from the original)
            call_0060d264(r0_9, ea_7->word_0, ea_7->word_4, frame.at(0x28).addr());  // (from the original)
            r1_5 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_5;
    return frame.at(0x20).addr();  // (from the original)
}

}  // namespace d_006f9330
GUEST_EXPORT_FRAMED(0x006f9330, d_006f9330::f_006f9330, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006f9494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9494 {


u32 f_006f9494(u32 r0) {
    u32 r0_1 = *gptr<u8>(0x952718u + r0);  // (from the original)
    guest::cpu()->r[1] = 0x952718u;  // (from the original)
    return r0_1;
}

}  // namespace d_006f9494
GUEST_EXPORT(0x006f9494, d_006f9494::f_006f9494);

// f_006f94a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f94a4 {

struct __attribute__((packed)) Local_006f94a4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006f94a4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006f94a4_ea_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006f94a4_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_7, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_7, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_7, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_7, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_7, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006f94a4_ea_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006f94a4_ea_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_8, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_8, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_8, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_8, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f94a4_ea_8, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x006f973c, u32(u32, u32, u32)> call_006f973c;  // (from the original)
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> call_0075db98;  // (from the original)

void f_006f94a4(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        return;
    }
    gptr<Local_006f94a4_ea_1> ea_1 = gptr<Local_006f94a4_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r14;
    r6 = r0;
    u32 r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r7 = r0_1 + 0x53480u;  // (from the original)
    r5 = 0u;
    do {
        r4 = 0u;
        do {
            u32 r0_2 = call_0075db98(r7, r4, r5);
            if (*gptr<u16>(r0_2) == 0x9bu || *gptr<u16>(r0_2) == 0xa5u) {  // (from the original)
                call_006f973c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
                *gptr<u32>(r6) = *frame.at<u32>(0);
                *gptr<u32>(r6 + 4u) = *frame.at<u32>(4);
                *gptr<u32>(r6 + 8u) = *frame.at<u32>(8);
                gptr<Local_006f94a4_ea_7> ea_7 = gptr<Local_006f94a4_ea_7>(frame.at(0x10).addr());  // (from the original)
                u32 r4_1 = ea_7->word_0;
                u32 r5_1 = ea_7->word_4;
                u32 r6_1 = ea_7->word_8;
                u32 r7_1 = ea_7->word_c;
                u32 r8_1 = ea_7->word_10;
                guest::cpu()->r[4] = r4_1;
                guest::cpu()->r[5] = r5_1;
                guest::cpu()->r[6] = r6_1;
                guest::cpu()->r[7] = r7_1;
                guest::cpu()->r[8] = r8_1;
                return;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 7u);
        r5 += 1u;
        guest::preempt();
    } while (r5 < 6u);
    gptr<Local_006f94a4_ea_8> ea_8 = gptr<Local_006f94a4_ea_8>(frame.at(0x10).addr());  // (from the original)
    u32 r4_2 = ea_8->word_0;
    u32 r5_2 = ea_8->word_4;
    u32 r6_2 = ea_8->word_8;
    u32 r7_2 = ea_8->word_c;
    u32 r8_2 = ea_8->word_10;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
}

}  // namespace d_006f94a4
GUEST_EXPORT(0x006f94a4, d_006f94a4::f_006f94a4);

// f_006f9550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9550 {

inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;  // (from the original)

u32 f_006f9550(u32 r0) {
    u32 r0_1 = call_002fb328(r0);
    return *gptr<u8>(r0_1 + 0x53480u) == 1u ? 0x9fu : 0xa0u;  // (from the original)
}

}  // namespace d_006f9550
GUEST_EXPORT_FRAMED(0x006f9550, d_006f9550::f_006f9550, 0x4010);  // pushes {r4, lr} first, as the original

// f_006f9580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9580 {

struct __attribute__((packed)) Local_006f9580_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9580_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9580_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9580_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9580_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9580_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9580_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9580_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9580_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006f9580_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9580_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9580_ea_4, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;  // (from the original)

void f_006f9580(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_002fae84(r0);
    if (*gptr<u8>(r0_1 + 0x53400u) != 0) {  // (from the original)
        gptr<Local_006f9580_ea_1> ea_1 = gptr<Local_006f9580_ea_1>(frame.at(0).addr());
        ea_1->word_0 = 6;
        ea_1->word_4 = 9;
        gptr<Local_006f9580_ea_2> ea_2 = gptr<Local_006f9580_ea_2>(frame.at(8).addr());
        ea_2->word_0 = 6;
        ea_2->word_4 = 0xa;  // (from the original)
        call_0052f200(r0, frame.at(0).addr(), frame.at(8).addr());
        return;
    }
    gptr<Local_006f9580_ea_3> ea_3 = gptr<Local_006f9580_ea_3>(frame.at(0).addr());
    ea_3->word_0 = 0x3a;  // (from the original)
    ea_3->word_4 = 9;
    gptr<Local_006f9580_ea_4> ea_4 = gptr<Local_006f9580_ea_4>(frame.at(8).addr());
    ea_4->word_0 = 0x3a;  // (from the original)
    ea_4->word_4 = 0xa;  // (from the original)
    call_0052f200(r0, frame.at(0).addr(), frame.at(8).addr());
}

}  // namespace d_006f9580
GUEST_EXPORT_FRAMED(0x006f9580, d_006f9580::f_006f9580, 0x4010);  // pushes {r4, lr} first, as the original

// f_006f973c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f973c {

struct __attribute__((packed)) Local_006f973c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_006f973c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_1, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_006f973c_ea_14 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_006f973c_ea_14, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_14, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_14, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_14, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_14, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_14, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_14, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_006f973c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_006f973c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_2, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_006f973c_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_006f973c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_3, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_006f973c_ea_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_006f973c_ea_9, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_9, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_9, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_9, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_9, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_9, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006f973c_ea_9, word_18, 0x18);  // (from the original)

inline guest::global<u32, 0x0085f2b4> global_0085f2b4;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x006a5e04, u32(u32, u32, u32)> call_006a5e04;  // (from the original)
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> call_0075db98;  // (from the original)

void f_006f973c(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_6 = 0;
    u32 ea_4 = 0;
    u32 r0_7 = 0;
    u32 ea_5 = 0;
    u32 r0_8 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 r0_9 = 0;
    u32 ea_8 = 0;
    gptr<Local_006f973c_ea_9> ea_9 = gptr<Local_006f973c_ea_9>(0u);
    u32 r4_3 = 0;
    u32 r5_3 = 0;
    u32 r6_3 = 0;
    u32 r7_3 = 0;
    u32 r8_3 = 0;
    u32 r9_3 = 0;
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        return;
    }
    gptr<Local_006f973c_ea_1> ea_1 = gptr<Local_006f973c_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r14;
    r6 = r0;
    u32 r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r7 = r0_1 + 0x53480u;  // (from the original)
    r5 = 0u;
L_6f9760:;
    r4 = 0u;
L_6f9764:;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    u32 r0_2 = call_0075db98(r7, r4, r5);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    u32 r0_3 = *gptr<u16>(r0_2);
    if (r0_3 != 0x9bu) {  // (from the original)
        r0_3 = *gptr<u16>(r0_2);
        if (r0_3 != 0xa5u) {  // (from the original)
            r4 += 1u;
            if (r4 < 7u) {
                guest::preempt();
                goto L_6f9764;
            }
            r5 += 1u;
            if (r5 < 6u) {
                guest::preempt();
                goto L_6f9760;
            }
            gptr<Local_006f973c_ea_2> ea_2 = gptr<Local_006f973c_ea_2>(frame.at(0xc).addr());  // (from the original)
            u32 r4_1 = ea_2->word_0;
            u32 r5_1 = ea_2->word_4;
            u32 r6_1 = ea_2->word_8;
            u32 r7_1 = ea_2->word_c;
            u32 r8_1 = ea_2->word_10;
            u32 r9_1 = ea_2->word_14;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_1;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            guest::cpu()->r[8] = r8_1;
            guest::cpu()->r[9] = r9_1;
            return;
        }
    }
    u32 r0_4 = call_002fb328(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r9 = 0x85f2c0u;  // (from the original)
    r7 = r0_4 + 0x53480u;  // (from the original)
    r5 = 0u;
L_6f97d8:;
    r4 = 0u;
L_6f97dc:;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    u32 r0_5 = call_0075db98(r7, r4, r5);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (*gptr<u16>(r0_5) != 0x9bu) {  // (from the original)
        if (*gptr<u16>(r0_5) == 0xa5u) {  // (from the original)
            goto L_6f9878;
        }
        r4 += 1u;
        if (r4 < 7u) {
            guest::preempt();
            goto L_6f97dc;
        }
        r5 += 1u;
        if (r5 < 6u) {
            guest::preempt();
            goto L_6f97d8;
        }
        gptr<Local_006f973c_ea_3> ea_3 = gptr<Local_006f973c_ea_3>(frame.at(0xc).addr());  // (from the original)
        u32 r4_2 = ea_3->word_0;
        u32 r5_2 = ea_3->word_4;
        u32 r6_2 = ea_3->word_8;
        u32 r7_2 = ea_3->word_c;
        u32 r8_2 = ea_3->word_10;
        u32 r9_2 = ea_3->word_14;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_2;
        guest::cpu()->r[8] = r8_2;
        guest::cpu()->r[9] = r9_2;
        return;
    }
    r0_6 = frame.at(0).addr();
    call_006a5e04(r0_6, r4, r5);
    *frame.at<u32>(8) = std::bit_cast<u32>(std::bit_cast<float>(*frame.at<u32>(8)) + std::bit_cast<float>(*gptr<u32>(r9)));
    ea_4 = frame.at(0).addr();
    r0_7 = *gptr<u32>(ea_4);
    *gptr<u32>(r6) = r0_7;
    ea_5 = frame.at(4).addr();
    r0_8 = *gptr<u32>(ea_5);
    ea_6 = r6 + 4u;
    *gptr<u32>(ea_6) = r0_8;
    ea_7 = frame.at(8).addr();
    r0_9 = *gptr<u32>(ea_7);
    ea_8 = r6 + 8u;
    *gptr<u32>(ea_8) = r0_9;
    ea_9 = gptr<Local_006f973c_ea_9>(frame.at(0xc).addr());  // (from the original)
    r4_3 = ea_9->word_0;
    r5_3 = ea_9->word_4;
    r6_3 = ea_9->word_8;
    r7_3 = ea_9->word_c;
    r8_3 = ea_9->word_10;
    r9_3 = ea_9->word_14;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_3;
    return;
L_6f9878:;
    call_006a5e04(frame.at(0).addr(), r4, r5);
    float S0_1 = std::bit_cast<float>(*frame.at<u32>(0)) + std::bit_cast<float>(*global_0085f2b4);
    *frame.at<u32>(0) = std::bit_cast<u32>(S0_1);
    *frame.at<u32>(8) = std::bit_cast<u32>(std::bit_cast<float>(*frame.at<u32>(8)) + std::bit_cast<float>(*gptr<u32>(r9)));
    *gptr<u32>(r6) = std::bit_cast<u32>(S0_1);
    *gptr<u32>(r6 + 4u) = *frame.at<u32>(4);
    *gptr<u32>(r6 + 8u) = *frame.at<u32>(8);
    gptr<Local_006f973c_ea_14> ea_14 = gptr<Local_006f973c_ea_14>(frame.at(0xc).addr());  // (from the original)
    u32 r4_4 = ea_14->word_0;
    u32 r5_4 = ea_14->word_4;
    u32 r6_4 = ea_14->word_8;
    u32 r7_4 = ea_14->word_c;
    u32 r8_4 = ea_14->word_10;
    u32 r9_4 = ea_14->word_14;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_4;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_4;
    guest::cpu()->r[8] = r8_4;
    guest::cpu()->r[9] = r9_4;
}

}  // namespace d_006f973c
GUEST_EXPORT(0x006f973c, d_006f973c::f_006f973c);

// f_006f9900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9900 {

struct __attribute__((packed)) Local_006f9900_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006f9900_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9900_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f9900_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f9900_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_006f9900_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006f9900_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9900_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f9900_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f9900_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_006f9900_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006f9900_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9900_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f9900_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f9900_ea_3, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002fccc4, u32(u32, u32, u32, u32)> call_002fccc4;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059da08, u32(u32, u32)> call_0059da08;  // (from the original)
inline constexpr guest::Function<0x0059daa0, u32(u32, u32, u32, u32)> call_0059daa0;  // (from the original)

void f_006f9900(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return;
    }
    gptr<Local_006f9900_ea_1> ea_1 = gptr<Local_006f9900_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    u32 r0_1 = call_002feb00(r2, r0, r1, 0u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_002fccc4(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_3 = call_002fd010(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                u32 r0_4 = u32(*gptr<u8>(r0_3 + 0xfu)) << 0x1c;  // (from the original)
                if (r0_4 >> 0x1f) {  // (from the original)
                    u32 r0_5 = call_0059daa0(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_5 != 0) {
                        gptr<Local_006f9900_ea_2> ea_2 = gptr<Local_006f9900_ea_2>(frame.at(0).addr());
                        u32 r4_1 = ea_2->word_0;
                        u32 r5_1 = ea_2->word_4;
                        u32 r6_1 = ea_2->word_8;
                        r14 = ea_2->word_c;
                        guest::cpu()->r[4] = r4_1;
                        guest::cpu()->r[5] = r5_1;
                        guest::cpu()->r[6] = r6_1;
                        frame.release();
                        call_0059da08(r0, r1);
                        return;
                    }
                }
            }
        }
    }
    gptr<Local_006f9900_ea_3> ea_3 = gptr<Local_006f9900_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
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

struct __attribute__((packed)) Local_006f9978_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_006f9978_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_006f9978_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006f9978_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_006f9978_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_006f9978_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006f9978_ea_3, word_1c, 0x1c);  // (from the original)

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

void f_006f9978(gptr<Object_006f9978_0> arg0, u32 r1) {
    guest::StackFrame frame(0x88);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_22 = 0;
    u32 r0_25 = 0;
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        return;
    }
    gptr<Local_006f9978_ea_1> ea_1 = gptr<Local_006f9978_ea_1>(frame.at(0x68).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r14;
    r9 = r0;
    u32 r0_1 = arg0->word_28;
    if (r0_1 != 0) {
        gptr<Local_006f9978_ea_2> ea_2 = gptr<Local_006f9978_ea_2>(frame.at(0x50).addr());  // (from the original)
        ea_2->word_0 = r0_1;
        ea_2->word_4 = 0x80;  // (from the original)
        ea_2->word_8 = 0x80;  // (from the original)
        u32 r0_3 = call_0074824c(frame.at(0x20).addr(), r9, 0x80u, 0x80u);  // (from the original)
        u32 r0_4 = call_0057bb98(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r10 = r0_4;
        call_0074824c(frame.at(0x30).addr(), r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_00748284(frame.at(8).addr(), r9, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_8 = call_007481ec(frame.at(8).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r3 = guest::cpu()->r[3];
        if (r0_8 == 0) {
            goto L_6f9bd4;
        } else {
            r8 = 0u;
        }
        do {
            u32 r0_9 = call_00317148(r9, *frame.at<u32>(0x10), *frame.at<u32>(0x14), r3);  // (from the original)
            u32 r1_4 = guest::cpu()->r[1];
            u32 r2_5 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_9 != 0) {
                u32 r4_2 = *gptr<u16>(r0_9);
                u32 r0_10 = call_0075291c(r9, *frame.at<u32>(0x10), *frame.at<u32>(0x14), r3);  // (from the original)
                r1_4 = guest::cpu()->r[1];
                r2_5 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r7 = r0_10;
                if (r4_2 <= 0x168u && r7 != 0) {  // (from the original)
                    *frame.at<u32>(0x60) = r8;  // (from the original)
                    *frame.at<u32>(0x64) = r8;  // (from the original)
                    u32 r4_3 = *frame.at<u32>(0x14);  // (from the original)
                    u32 r2_6 = *frame.at<u32>(0x10);  // (from the original)
                    *frame.at<u32>(0) = r8;
                    *frame.at<u32>(4) = r8;
                    call_006a6e90(frame.at(0x60).addr(), frame.at(0x64).addr(), r2_6, r4_3);  // (from the original)
                    call_00748284(frame.at(0x40).addr(), r10, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    u32 r0_13 = frame.at(0x40).addr();  // (from the original)
                    u32 r0_14 = call_007481ec(r0_13, frame.at(0x30).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    r1_4 = guest::cpu()->r[1];
                    r2_5 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_14 != 0) {
                        do {
                            u32 r0_15 = call_0075d608(r7, *frame.at<u32>(0x48), *frame.at<u32>(0x4c), r3);  // (from the original)
                            u32 r4_5 = *frame.at<u32>(0x4c) + *frame.at<u32>(0x64);  // (from the original)
                            u32 r1_9 = *frame.at<u32>(0x60) + *frame.at<u32>(0x48);  // (from the original)
                            u32 r0_17 = call_00317eac(frame.at(0x50).addr(), r1_9, r4_5, guest::cpu()->r[3]);  // (from the original)
                            u32 r4_6 = r0_17;
                            u32 r0_18 = call_005cdfd0(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                            if (r4_6 >> 0x1f != (r4_6 & (r4_6 ^ r4_6)) >> 0x1f) {  // (from the original)
                                r4_6 = 0u;
                            } else if (s32(r0_18) < s32(r4_6)) {
                                r4_6 = r0_18;
                            }
                            u32 r6_1 = *frame.at<u32>(0x4c) + *frame.at<u32>(0x64);  // (from the original)
                            call_006a2c2c(frame.at(0x50).addr(), *frame.at<u32>(0x60) + *frame.at<u32>(0x48), r6_1, r4_6 & 0xffu);  // (from the original)
                            call_0052f144(frame.at(0x40).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                            r0_22 = call_007481ec(frame.at(0x40).addr(), frame.at(0x30).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                            r1_4 = guest::cpu()->r[1];
                            r2_5 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            guest::preempt();
                        } while (r0_22 != 0);
                    }
                }
            }
            call_0052f144(frame.at(8).addr(), r1_4, r2_5, r3);
            r0_25 = call_007481ec(frame.at(8).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_25 != 0);
L_6f9bd4:;
    }
    gptr<Local_006f9978_ea_3> ea_3 = gptr<Local_006f9978_ea_3>(frame.at(0x68).addr());  // (from the original)
    u32 r4_7 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_1 = ea_3->word_c;
    u32 r8_1 = ea_3->word_10;
    u32 r9_1 = ea_3->word_14;
    u32 r10_1 = ea_3->word_18;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_7;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
}

}  // namespace d_006f9978
GUEST_EXPORT(0x006f9978, d_006f9978::f_006f9978);

// f_006f9d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9d38 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> call_0075db98;  // (from the original)

u32 f_006f9d38(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    u32 r6 = r0_1 + 0x53480u;  // (from the original)
    u32 r5 = 0u;
    do {
        u32 r4 = 0u;
        do {
            u32 r0_2 = call_0075db98(r6, r4, r5);
            r1_1 = guest::cpu()->r[1];
            if (*gptr<u16>(r0_2) == 0x9bu || *gptr<u16>(r0_2) == 0xa5u) {  // (from the original)
                return 1u;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 7u);
        r5 += 1u;
        guest::preempt();
    } while (r5 < 6u);
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_006f9d38
GUEST_EXPORT_FRAMED(0x006f9d38, d_006f9d38::f_006f9d38, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006f9df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9df4 {

struct __attribute__((packed)) Local_006f9df4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006f9df4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006f9df4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006f9df4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_2, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006f9df4_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006f9df4_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006f9df4_ea_3, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fccc4, u32(u32, u32, u32, u32)> call_002fccc4;  // (from the original)
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> call_002fd010;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059daa0, u32(u32, u32, u32, u32)> call_0059daa0;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)

void f_006f9df4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        return;
    }
    gptr<Local_006f9df4_ea_1> ea_1 = gptr<Local_006f9df4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_1 = call_002feb00(r2, r0, r1, 0u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_002fccc4(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_3 = call_002fd010(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                if (u32(*gptr<u8>(r0_3 + 0xfu)) & 8u) {  // (from the original)
                    *frame.at<u32>(0) = 0;
                    u32 r0_4 = call_002fc994(r2, 0x95bfdcu, r0, r1);  // (from the original)
                    u32 r0_5 = call_0059daa0(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_5 != 0) {
                        gptr<Local_006f9df4_ea_2> ea_2 = gptr<Local_006f9df4_ea_2>(frame.at(0).addr());
                        u32 r3_4 = ea_2->word_0;
                        u32 r4_1 = ea_2->word_4;
                        u32 r5_1 = ea_2->word_8;
                        u32 r6_1 = ea_2->word_c;
                        u32 r7_1 = ea_2->word_10;
                        r14 = ea_2->word_14;
                        guest::cpu()->r[4] = r4_1;
                        guest::cpu()->r[5] = r5_1;
                        guest::cpu()->r[6] = r6_1;
                        guest::cpu()->r[7] = r7_1;
                        frame.release();
                        call_0059e65c(r0, r1, 1u, r3_4);
                        return;
                    }
                }
            }
        }
    }
    gptr<Local_006f9df4_ea_3> ea_3 = gptr<Local_006f9df4_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_4;
    u32 r5_2 = ea_3->word_8;
    u32 r6_2 = ea_3->word_c;
    u32 r7_2 = ea_3->word_10;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
}

}  // namespace d_006f9df4
GUEST_EXPORT(0x006f9df4, d_006f9df4::f_006f9df4);

// f_006f9f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9f34 {

inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x00605628, u32(u32, u32, u32, u32)> call_00605628;  // (from the original)
inline constexpr guest::Function<0x0060d0a4, u32(u32, u32, u32, u32)> call_0060d0a4;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_006f9f34(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r8 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r9 = r0;
    u32 r0_1 = call_00317148(r0, 0u, 1u, r3);
    u32 zf_1 = r0_1 == 0;
    u32 r0_2 = 0x169u;  // (from the original)
    if (!zf_1) {
        r0_2 = *gptr<u16>(r0_1);
    }
    u32 r0_3 = call_00605628(r0_2, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0xeu) {  // (from the original)
        r7 = 1u;
        r8 = 0u;
    } else {
        r7 = 5u;
        r8 = 0xfu;  // (from the original)
    }
    u32 r5 = 0u;
    do {
        u32 r0_4 = call_0075291c(r9, r7, r5, r3);
        r3 = guest::cpu()->r[3];
        r6 = r0_4;
        if (r0_4 == 0) {
            goto L_6f9ff8;
        } else {
            r4 = 0u;
        }
        do {
            u32 r0_5 = call_0075d608(r6, r8, r4, r3);
            r3 = guest::cpu()->r[3];
            if (r0_5 != 0x14u) {  // (from the original)
                if (r0_5 == 0x16u) {  // (from the original)
                    goto L_6f9fd8;
                }
                goto L_6f9fec;
            }
            call_0060d0a4(r6, r8, r4, 0x32u);  // (from the original)
            r3 = guest::cpu()->r[3];
            goto L_6f9fec;
L_6f9fd8:;
            call_0060d0a4(r6, r8, r4, 0x80u);  // (from the original)
            r3 = guest::cpu()->r[3];
L_6f9fec:;
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0x10);  // (from the original)
L_6f9ff8:;
        r5 += 1u;
        guest::preempt();
    } while (r5 < 6u);
    r5 = 0u;
    do {
        r0_6 = call_0075291c(r9, r5, 1u, r3);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r6 = r0_6;
        if (r0_6 == 0) {
            goto L_6fa08c;
        } else {
            r4 = 0u;
        }
        do {
            r0_6 = call_0075d608(r6, r4, 0u, r3);
            r1_1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (r0_6 != 0x14u) {  // (from the original)
                if (r0_6 == 0x16u) {  // (from the original)
                    goto L_6fa06c;
                }
                goto L_6fa080;
            }
            r0_6 = call_0060d0a4(r6, r4, 0u, 0x32u);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            goto L_6fa080;
L_6fa06c:;
            r0_6 = call_0060d0a4(r6, r4, 0u, 0x80u);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
L_6fa080:;
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0x10);  // (from the original)
L_6fa08c:;
        r5 += 1u;
        guest::preempt();
    } while (r5 < 7u);
    guest::cpu()->r[1] = r1_1;
    return r0_6;
}

}  // namespace d_006f9f34
GUEST_EXPORT_FRAMED(0x006f9f34, d_006f9f34::f_006f9f34, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006fa0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa0a0 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb10, u32(u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x004e0cec, u32(u32, u32, u32, u32)> call_004e0cec;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32)> call_00768174;  // (from the original)
inline constexpr guest::Function<0x0076a028, u32(u32, u32, u32, u32)> call_0076a028;  // (from the original)

void f_006fa0a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = call_002feb00(r0_1, r1, r2, 0u);
        if (r0_2 != 0) {
            u32 r0_3 = call_002fcb34(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_3 != 0x3bu) {  // (from the original)
                u32 r0_4 = call_0076a028(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_4 != 0) {
                    *frame.at<u32>(0) = 0;
                    u32 r0_5 = call_004e0cec(r1, r2, 0u, r0_1);
                    frame.release();
                    call_002fc934(r0, r0_5);
                    return;
                }
                u32 r0_6 = call_002fcb10(r0_2);
                if (r0_6 == 0) {
                    u32 r0_7 = call_00768174(r0_2);
                    if (r0_7 == 0) {
                        frame.release();
                        call_002fc934(r0, 0x95bfdcu);
                        return;  // (from the original)
                    }
                }
                frame.release();
                call_002fc934(r0, r0_2);
                return;
            }
        }
    }
    frame.release();
    call_002fc934(r0, 0x95bfdcu);
    return;  // (from the original)
}

}  // namespace d_006fa0a0
GUEST_EXPORT(0x006fa0a0, d_006fa0a0::f_006fa0a0);

// f_006fa1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa1fc {

struct __attribute__((packed)) Local_006fa1fc_r0_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa1fc_r0_10, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fa1fc_r0_10, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32)> call_00605618;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32)> call_00748284;  // (from the original)

u32 f_006fa1fc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x7c);  // the original's stack frame
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r0_18 = 0;
    u32 r1_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r7 = r0;
    u32 r8 = r1;
    u32 r0_1 = call_002fe7cc(0x1fu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        return r0_1;
    }
    call_0052f224(frame.at(0x50).addr(), r0_1, r2_1);  // (from the original)
    u32 r5 = frame.at(0).addr();
    u32 r9_1 = frame.at(0x50).addr();  // (from the original)
    u32 r0_3 = call_002fe7cc(0x1fu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4 = r0_3;
    call_00748284(frame.at(0x20).addr(), r9_1, guest::cpu()->r[2]);  // (from the original)
    call_0074824c(frame.at(0x40).addr(), r9_1, guest::cpu()->r[2]);  // (from the original)
    *frame.at<u32>(0x30) = *frame.at<u32>(0x40);  // (from the original)
    *frame.at<u32>(0x34) = *frame.at<u32>(0x44);  // (from the original)
    call_0052f0c0(frame.at(0x38).addr(), frame.at(0x48).addr(), guest::cpu()->r[2]);  // (from the original)
    *frame.at<u32>(0x10) = *frame.at<u32>(0x20);  // (from the original)
    *frame.at<u32>(0x14) = *frame.at<u32>(0x24);  // (from the original)
    call_0052f0c0(frame.at(0x18).addr(), frame.at(0x20).addr() + 8u, guest::cpu()->r[2]);  // (from the original)
    u32 r0_9 = call_007481ec(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_9 != 0) {
        do {
            gptr<Local_006fa1fc_r0_10> r0_10 = gptr<Local_006fa1fc_r0_10>(frame.at(0x18).addr());  // (from the original)
            if (r4 != 0) {
                u32 r0_11 = call_00317148(r4, r0_10->word_0, r0_10->word_4);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_11 != 0) {
                    u32 r0_12 = *gptr<u16>(r0_11);
                    u32 r0_13 = call_00605618(r0_12, r1, r2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_13 == 1u || r0_13 == 5u || r0_13 == 7u || r0_13 == 0x61u) {  // (from the original)
                        goto L_6fa3cc;
                    }
                }
            }
            call_0052f144(frame.at(0x10).addr(), r1, r2);  // (from the original)
            r0_16 = call_007481ec(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_16 != 0);
    }
    r0_17 = r5 + 8u;
    *frame.at<u32>(0) = *frame.at<u32>(0x30);  // (from the original)
    *frame.at<u32>(4) = *frame.at<u32>(0x34);  // (from the original)
    r1_8 = frame.at(0x38).addr();  // (from the original)
    call_0052f0c0(r0_17, r1_8, r2);
L_6fa34c:;
    r1_9 = frame.at(0x50).addr();  // (from the original)
    r0_18 = frame.at(0x68).addr();  // (from the original)
    call_0074824c(r0_18, r1_9, r2);
    r1_10 = frame.at(0x68).addr();  // (from the original)
    r0_19 = frame.at(0).addr();
    r0_20 = call_007481ec(r0_19, r1_10, r2);
    r1_1 = guest::cpu()->r[1];
    if (r0_20 != 0) {
        *gptr<u32>(r7) = *frame.at<u32>(8);
        *gptr<u32>(r8) = *frame.at<u32>(0xc);  // (from the original)
    }
    return frame.at(0x50).addr();  // (from the original)
L_6fa3cc:;
    *frame.at<u32>(0) = *frame.at<u32>(0x10);  // (from the original)
    *frame.at<u32>(4) = *frame.at<u32>(0x14);  // (from the original)
    call_0052f0c0(r5 + 8u, frame.at(0x18).addr(), r2);  // (from the original)
    guest::preempt();
    goto L_6fa34c;
}

}  // namespace d_006fa1fc
GUEST_EXPORT_FRAMED(0x006fa1fc, d_006fa1fc::f_006fa1fc, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006fa430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa430 {

struct __attribute__((packed)) Local_006fa430_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006fa430_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006fa430_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006fa430_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_2, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006fa430_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa430_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006fa430_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006fa430_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_4, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_4, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_4, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006fa430_ea_4, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x006a6bc8, u32(u32)> call_006a6bc8;  // (from the original)
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> call_0075db98;  // (from the original)

void f_006fa430(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        return;
    }
    gptr<Local_006fa430_ea_1> ea_1 = gptr<Local_006fa430_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r14;
    r6 = r0;
    u32 r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r7 = r0_1 + 0x53480u;  // (from the original)
    r5 = 0u;
L_6fa450:;
    r4 = 0u;
L_6fa454:;
    u32 r0_2 = call_0075db98(r7, r4, r5);
    u32 r0_3 = *gptr<u16>(r0_2);
    if (r0_3 != 0x9bu) {  // (from the original)
        r0_3 = *gptr<u16>(r0_2);
        if (r0_3 != 0xa5u) {  // (from the original)
            r4 += 1u;
            if (r4 < 7u) {
                guest::preempt();
                goto L_6fa454;
            }
            r5 += 1u;
            if (r5 < 6u) {
                guest::preempt();
                goto L_6fa450;
            }
            gptr<Local_006fa430_ea_2> ea_2 = gptr<Local_006fa430_ea_2>(frame.at(0).addr());
            u32 r4_1 = ea_2->word_0;
            u32 r5_1 = ea_2->word_4;
            u32 r6_1 = ea_2->word_8;
            u32 r7_1 = ea_2->word_c;
            u32 r8_1 = ea_2->word_10;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_1;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            guest::cpu()->r[8] = r8_1;
            return;
        }
    }
    u32 r0_4 = call_006a6bc8(r0_3);
    u32 r1_1 = *gptr<u32>(r0_4);
    u32 r0_5 = *gptr<u32>(r0_4 + 4u);
    u32 r2_1 = *gptr<u32>(r0_4 + 8u);
    *gptr<u32>(r6) = r1_1;
    gptr<Local_006fa430_ea_3> ea_3 = gptr<Local_006fa430_ea_3>(r6 + 4u);
    ea_3->word_0 = r0_5;
    ea_3->word_4 = r2_1;
    gptr<Local_006fa430_ea_4> ea_4 = gptr<Local_006fa430_ea_4>(frame.at(0).addr());
    u32 r4_2 = ea_4->word_0;
    u32 r5_2 = ea_4->word_4;
    u32 r6_2 = ea_4->word_8;
    u32 r7_2 = ea_4->word_c;
    u32 r8_2 = ea_4->word_10;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
}

}  // namespace d_006fa430
GUEST_EXPORT(0x006fa430, d_006fa430::f_006fa430);

// f_006fa4d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa4d0 {

struct __attribute__((packed)) Local_006fa4d0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa4d0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fa4d0_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006fa4d0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa4d0_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fa4d0_ea_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;  // (from the original)

u32 f_006fa4d0(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006fa4d0_ea_1> ea_1 = gptr<Local_006fa4d0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = 0x2b;  // (from the original)
    ea_1->word_4 = 0xa;  // (from the original)
    gptr<Local_006fa4d0_ea_2> ea_2 = gptr<Local_006fa4d0_ea_2>(frame.at(8).addr());
    ea_2->word_0 = 0x2b;  // (from the original)
    ea_2->word_4 = 0xc;  // (from the original)
    call_0052f200(r0, frame.at(0).addr(), frame.at(8).addr());
    return frame.at(0).addr();
}

}  // namespace d_006fa4d0
GUEST_EXPORT_FRAMED(0x006fa4d0, d_006fa4d0::f_006fa4d0, 0x4010);  // pushes {r4, lr} first, as the original

// f_006fa524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa524 {

struct __attribute__((packed)) Local_006fa524_r0_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa524_r0_10, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fa524_r0_10, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32)> call_00605618;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32)> call_00748284;  // (from the original)

u32 f_006fa524(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x7c);  // the original's stack frame
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r0_18 = 0;
    u32 r1_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r7 = r0;
    u32 r8 = r1;
    u32 r0_1 = call_002fe7cc(1u, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        return r0_1;
    }
    call_0052f224(frame.at(0x50).addr(), r0_1, r2_1);  // (from the original)
    u32 r5 = frame.at(0).addr();
    u32 r9_1 = frame.at(0x50).addr();  // (from the original)
    u32 r0_3 = call_002fe7cc(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4 = r0_3;
    call_00748284(frame.at(0x20).addr(), r9_1, guest::cpu()->r[2]);  // (from the original)
    call_0074824c(frame.at(0x40).addr(), r9_1, guest::cpu()->r[2]);  // (from the original)
    *frame.at<u32>(0x30) = *frame.at<u32>(0x40);  // (from the original)
    u32 r2_5 = *frame.at<u32>(0x44);  // (from the original)
    *frame.at<u32>(0x34) = r2_5;  // (from the original)
    call_0052f0c0(frame.at(0x38).addr(), frame.at(0x48).addr(), r2_5);  // (from the original)
    *frame.at<u32>(0x10) = *frame.at<u32>(0x20);  // (from the original)
    *frame.at<u32>(0x14) = *frame.at<u32>(0x24);  // (from the original)
    call_0052f0c0(frame.at(0x18).addr(), frame.at(0x20).addr() + 8u, guest::cpu()->r[2]);  // (from the original)
    u32 r0_9 = call_007481ec(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_9 != 0) {
        do {
            gptr<Local_006fa524_r0_10> r0_10 = gptr<Local_006fa524_r0_10>(frame.at(0x18).addr());  // (from the original)
            if (r4 != 0) {
                u32 r0_11 = call_00317148(r4, r0_10->word_0, r0_10->word_4);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_11 != 0) {
                    u32 r0_12 = *gptr<u16>(r0_11);
                    u32 r0_13 = call_00605618(r0_12, r1, r2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_13 == 1u) {
                        goto L_6fa6e8;
                    }
                }
            }
            call_0052f144(frame.at(0x10).addr(), r1, r2);  // (from the original)
            r0_16 = call_007481ec(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_16 != 0);
    }
    r0_17 = r5 + 8u;
    *frame.at<u32>(0) = *frame.at<u32>(0x30);  // (from the original)
    *frame.at<u32>(4) = *frame.at<u32>(0x34);  // (from the original)
    r1_8 = frame.at(0x38).addr();  // (from the original)
    call_0052f0c0(r0_17, r1_8, r2);
L_6fa668:;
    r1_9 = frame.at(0x50).addr();  // (from the original)
    r0_18 = frame.at(0x68).addr();  // (from the original)
    call_0074824c(r0_18, r1_9, r2);
    r1_10 = frame.at(0x68).addr();  // (from the original)
    r0_19 = frame.at(0).addr();
    r0_20 = call_007481ec(r0_19, r1_10, r2);
    r1_1 = guest::cpu()->r[1];
    if (r0_20 != 0) {
        *gptr<u32>(r7) = *frame.at<u32>(8);
        *gptr<u32>(r8) = *frame.at<u32>(0xc);  // (from the original)
    }
    return frame.at(0x50).addr();  // (from the original)
L_6fa6e8:;
    *frame.at<u32>(0) = *frame.at<u32>(0x10);  // (from the original)
    *frame.at<u32>(4) = *frame.at<u32>(0x14);  // (from the original)
    call_0052f0c0(r5 + 8u, frame.at(0x18).addr(), r2);  // (from the original)
    guest::preempt();
    goto L_6fa668;
}

}  // namespace d_006fa524
GUEST_EXPORT_FRAMED(0x006fa524, d_006fa524::f_006fa524, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006fa728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa728 {


u32 f_006fa728(u32 r0) {
    u32 r0_1 = *gptr<u8>(0x95276cu + r0);  // (from the original)
    guest::cpu()->r[1] = 0x95276cu;  // (from the original)
    return r0_1;
}

}  // namespace d_006fa728
GUEST_EXPORT(0x006fa728, d_006fa728::f_006fa728);

// f_006fa738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa738 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)

void f_006fa738(u32 r0_unused, u32 r1, u32 r2) {
    if (r2 == 0) {
        call_00134544(guest::cpu()->r[0], 0x85f7f8u, 0x10u, guest::cpu()->r[3]);
        return;  // (from the original)
    }
    if (r2 != 1u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    call_00134544(guest::cpu()->r[0], 0x85f808u, 0x10u, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_006fa738
GUEST_EXPORT(0x006fa738, d_006fa738::f_006fa738);

// f_006fa76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa76c {

struct __attribute__((packed)) Local_006fa76c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa76c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fa76c_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006fa76c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa76c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fa76c_ea_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> call_006a6e90;  // (from the original)
inline constexpr guest::Function<0x006fa524, u32(u32, u32, u32, u32)> call_006fa524;  // (from the original)

u32 f_006fa76c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    call_006fa524(frame.at(8).addr(), frame.at(0xc).addr(), r2, r3);  // (from the original)
    gptr<Local_006fa76c_ea_1> ea_1 = gptr<Local_006fa76c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = 8;
    ea_1->word_4 = 6;
    gptr<Local_006fa76c_ea_2> ea_2 = gptr<Local_006fa76c_ea_2>(frame.at(8).addr());
    u32 r0_2 = call_006a6e90(r0, r1, ea_2->word_0, ea_2->word_4);
    return r0_2;
}

}  // namespace d_006fa76c
GUEST_EXPORT_FRAMED(0x006fa76c, d_006fa76c::f_006fa76c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006faa70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006faa70 {

struct __attribute__((packed)) Local_006faa70_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faa70_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006faa70_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006faa70_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faa70_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006faa70_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006faa70_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faa70_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006faa70_ea_7, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006faa70_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faa70_ea_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006faa70_ea_8, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0052f188, u32(u32, u32, u32)> call_0052f188;  // (from the original)
inline constexpr guest::Function<0x006a6bc8, u32(u32, u32, u32, u32)> call_006a6bc8;  // (from the original)

void f_006faa70(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        return;
    }
    gptr<Local_006faa70_ea_1> ea_1 = gptr<Local_006faa70_ea_1>(frame.at(0x18).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    u32 r0_1 = call_006a6bc8(r0, r1, r2, guest::cpu()->r[3]);
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    call_003171b4(frame.at(0x10).addr(), frame.at(0x14).addr(), r0_1);  // (from the original)
    u32 r2_1 = *frame.at<u32>(0x14) - 4u;  // (from the original)
    u32 r1_2 = *frame.at<u32>(0x10) - 3u;  // (from the original)
    gptr<Local_006faa70_ea_4> ea_4 = gptr<Local_006faa70_ea_4>(frame.at(0).addr());
    ea_4->word_0 = r1_2;
    ea_4->word_4 = r2_1;
    u32 r2_2 = *frame.at<u32>(0x14) + 4u;  // (from the original)
    u32 r1_3 = *frame.at<u32>(0x10) + 3u;  // (from the original)
    gptr<Local_006faa70_ea_7> ea_7 = gptr<Local_006faa70_ea_7>(frame.at(8).addr());
    ea_7->word_0 = r1_3;
    ea_7->word_4 = r2_2;
    call_0052f188(r0, frame.at(0).addr(), frame.at(8).addr());
    gptr<Local_006faa70_ea_8> ea_8 = gptr<Local_006faa70_ea_8>(frame.at(0x18).addr());  // (from the original)
    u32 r4_1 = ea_8->word_0;
    guest::cpu()->r[4] = r4_1;
}

}  // namespace d_006faa70
GUEST_EXPORT(0x006faa70, d_006faa70::f_006faa70);

// f_006fac2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fac2c {

struct __attribute__((packed)) Local_006fac2c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006fac2c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fac2c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fac2c_ea_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;  // (from the original)
inline constexpr guest::Function<0x00317eac, u32(u32, u32, u32, u32)> call_00317eac;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x005cdfd0, u32(u32, u32, u32, u32)> call_005cdfd0;  // (from the original)
inline constexpr guest::Function<0x006a2c2c, u32(u32, u32, u32, u32)> call_006a2c2c;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

void f_006fac2c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2c);  // the original's stack frame
    u32 r0_15 = 0;
    u32 r7 = r1;
    u32 r0_1 = call_002fe7cc(r1, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x28u);  // (from the original)
        if (r0_2 != 0) {
            gptr<Local_006fac2c_ea_1> ea_1 = gptr<Local_006fac2c_ea_1>(frame.at(0x20).addr());  // (from the original)
            ea_1->word_0 = r0_2;
            ea_1->word_4 = 0x80;  // (from the original)
            ea_1->word_8 = 0x80;  // (from the original)
            call_0074824c(frame.at(0x10).addr(), r0, 0x80u, 0x80u);  // (from the original)
            call_00748284(frame.at(0).addr(), r0, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_6 = call_007481ec(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r0_6 != 0) {
                do {
                    u32 r0_8 = call_00317eac(frame.at(0x20).addr(), *frame.at<u32>(8), *frame.at<u32>(0xc), r3);  // (from the original)
                    u32 r4_2 = r0_8;
                    u32 r0_10 = call_00315788(*frame.at<u32>(8), *frame.at<u32>(0xc), r7, guest::cpu()->r[3]);  // (from the original)
                    u32 r0_11 = call_005cdfd0(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    if (s32(r4_2) < 0) {
                        r4_2 = 0u;
                    } else if (s32(r0_11) < s32(r4_2)) {
                        r4_2 = r0_11;
                    }
                    call_006a2c2c(frame.at(0x20).addr(), *frame.at<u32>(8), *frame.at<u32>(0xc), r4_2 & 0xffu);  // (from the original)
                    call_0052f144(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r0_15 = call_007481ec(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    r3 = guest::cpu()->r[3];
                    guest::preempt();
                } while (r0_15 != 0);
            }
        }
    }
}

}  // namespace d_006fac2c
GUEST_EXPORT_FRAMED(0x006fac2c, d_006fac2c::f_006fac2c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006fad7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fad7c {

inline guest::global<u32, 0x0085f7a4> global_0085f7a4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x005b48a4, u32(u32, u32)> call_005b48a4;  // (from the original)
inline constexpr guest::Function<0x006bc388, u32(u32, u32)> call_006bc388;  // (from the original)
inline constexpr guest::Function<0x006cbb08, u32(u32, u32)> call_006cbb08;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)

u32 f_006fad7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_002f74e0(0x80u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        u32 r5_1 = 0u;
        *frame.at<u32>(0) = *global_0085f7a4;
        u32 r0_3 = call_006f9638(r0_1, guest::cpu()->r[1], r2_2, r3_2);
        if ((r0_3 - 2u) < 0x18u) {  // (from the original)
            r0_3 = *gptr<u8>(0x95276cu + r0_3);  // (from the original)
            if (r0_3 < 4u) {
                r5_1 = *gptr<u8>(frame.at(0).addr() + r0_3);
            }
        }
        u32 r0_4 = call_002fae84(r0_3);
        u32 r0_6 = call_002fb7e8(r0_4 + 0x20u, r5_1);  // (from the original)
        return r0_6;
    }
    u32 r0_7 = call_002f74e0(0x2000u, r0_1, r2_2, r3_2);  // (from the original)
    if (r0_7 != 0) {
        u32 r0_8 = r0_1 - 0x56u;  // (from the original)
        u32 r0_9 = call_002fae84(r0_8);
        r2_2 = 0xfff951c8u;  // (from the original)
        u32 r0_11 = call_006bc388(r0_9 - r2_2, r0_8 & 0xffu);  // (from the original)
        u32 r0_12 = *gptr<s8>(r0_11);
        if (s32(r0_12) >= 0) {
            u32 r0_13 = call_002fae84(r0_12);
            frame.release();
            return call_002fb7e8(r0_13 + 0x20u, r0_12 & 0xffu);  // (from the original)
        }
    }
    u32 r0_15 = call_002f74e0(0x4000u, r0_1, r2_2, r3_2);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    if (r0_15 != 0) {
        u32 r0_16 = call_005b48a4(r0_15, r1_4);
        u32 r0_17 = call_006cbb08(r0_16, guest::cpu()->r[1]);
        r1_4 = guest::cpu()->r[1];
        if (r0_17 != 0) {
            return r0_17 + 0x1238u;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_006fad7c
GUEST_EXPORT(0x006fad7c, d_006fad7c::f_006fad7c);

// f_006fae98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fae98 {

inline constexpr guest::Function<0x0030512c, u32(u32, u32, u32, u32)> call_0030512c;  // (from the original)
inline constexpr guest::Function<0x006fa7ac, u32(u32, u32, u32, u32)> call_006fa7ac;  // (from the original)

u32 f_006fae98(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_0030512c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r1 != 3u) {
        if (r1 == 4u) {
            return *gptr<u16>(0x85f82cu + (u32(*gptr<u8>(r0_1 + 0x1eu)) << 1));  // (from the original)
        }
        if (r1 == 5u) {
            return *gptr<u16>(0x85f836u + (u32(*gptr<u8>(r0_1 + 0x1eu)) << 1));  // (from the original)
        }
        if (r1 == 2u) {
            return *gptr<u16>(0x85f840u + (u32(*gptr<u8>(r0_1 + 0x1eu)) << 1));  // (from the original)
        }
        if (r1 == 1u) {
            return *gptr<u16>(0x85f84au + (u32(*gptr<u8>(r0_1 + 0x1eu)) << 1));  // (from the original)
        }
        frame.release();
        return call_006fa7ac(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return *gptr<u16>(0x85f822u + (u32(*gptr<u8>(r0_1 + 0x1eu)) << 1));  // (from the original)
}

}  // namespace d_006fae98
GUEST_EXPORT(0x006fae98, d_006fae98::f_006fae98);

// f_006faf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006faf68 {

struct __attribute__((packed)) Local_006faf68_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faf68_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006faf68_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006faf68_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faf68_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006faf68_ea_6, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006faf68_r0_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faf68_r0_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006faf68_r0_5, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0052f188, u32(u32, u32, u32)> call_0052f188;  // (from the original)
inline constexpr guest::Function<0x0052f248, u32(u32, u32, u32, u32)> call_0052f248;  // (from the original)
inline constexpr guest::Function<0x006a6bc8, u32(u32, u32, u32)> call_006a6bc8;  // (from the original)
inline constexpr guest::Function<0x007482d0, u32(u32, u32)> call_007482d0;  // (from the original)

u32 f_006faf68(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    u32 r0_2 = call_0052f248(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_006a6bc8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
    *frame.at<u32>(0x28) = 0;  // (from the original)
    *frame.at<u32>(0x2c) = 0;  // (from the original)
    call_003171b4(frame.at(0x28).addr(), frame.at(0x2c).addr(), r0_3);  // (from the original)
    u32 r2_2 = *frame.at<u32>(0x2c) - 4u;  // (from the original)
    u32 r1_3 = *frame.at<u32>(0x28) - 3u;  // (from the original)
    gptr<Local_006faf68_ea_3> ea_3 = gptr<Local_006faf68_ea_3>(frame.at(0x10).addr());  // (from the original)
    ea_3->word_0 = r1_3;
    ea_3->word_4 = r2_2;
    u32 r2_3 = *frame.at<u32>(0x2c) + 4u;  // (from the original)
    u32 r1_4 = *frame.at<u32>(0x28) + 3u;  // (from the original)
    gptr<Local_006faf68_ea_6> ea_6 = gptr<Local_006faf68_ea_6>(frame.at(0x18).addr());  // (from the original)
    ea_6->word_0 = r1_4;
    ea_6->word_4 = r2_3;
    call_0052f188(frame.at(0).addr(), frame.at(0x10).addr(), frame.at(0x18).addr());  // (from the original)
    gptr<Local_006faf68_r0_5> r0_5 = gptr<Local_006faf68_r0_5>(frame.at(0x20).addr());  // (from the original)
    r0_5->word_0 = r0;
    r0_5->word_4 = r1;
    u32 r0_7 = call_007482d0(frame.at(0).addr(), r0_5.addr());
    return r0_7;
}

}  // namespace d_006faf68
GUEST_EXPORT_FRAMED(0x006faf68, d_006faf68::f_006faf68, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006fb0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb0cc {


u32 f_006fb0cc(u32 r0) {
    u32 r0_1 = *gptr<u8>(0x952742u + r0);  // (from the original)
    guest::cpu()->r[1] = 0x952742u;  // (from the original)
    return r0_1;
}

}  // namespace d_006fb0cc
GUEST_EXPORT(0x006fb0cc, d_006fb0cc::f_006fb0cc);

// f_006fb27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb27c {


u32 f_006fb27c(u32 r0, u32 r1) {
    u32 r2_1 = 2u;
    if (r0 != 0) {
        if (r0 == 1u) {
            r2_1 = 8u;
        } else if (r0 == 2u) {
            r2_1 = 0xeu;  // (from the original)
        } else if (r0 == 3u) {
            r2_1 = 0x14u;  // (from the original)
        }
    }
    if (r1 < 6u) {
        r2_1 = r2_1 + r1 & 0xffu;  // (from the original)
    }
    return *gptr<u8>(0x952718u + r2_1);  // (from the original)
}

}  // namespace d_006fb27c
GUEST_EXPORT(0x006fb27c, d_006fb27c::f_006fb27c);

// f_006fb3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb3f4 {


u32 f_006fb3f4(u32 r0, u32 r1) {
    u32 zf_1 = r0 == 0;
    u32 r0_1 = 2u;
    if (!zf_1) {
        if (r0 == 1u) {
            r0_1 = 8u;
        } else if (r0 == 2u) {
            r0_1 = 0xeu;  // (from the original)
        } else if (r0 == 3u) {
            r0_1 = 0x14u;  // (from the original)
        }
    }
    if (r1 < 6u) {
        r0_1 = r0_1 + r1 & 0xffu;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006fb3f4
GUEST_EXPORT(0x006fb3f4, d_006fb3f4::f_006fb3f4);

// f_006fb430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb430 {

struct __attribute__((packed)) Local_006fb430_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fb430_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb430_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006fb430_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fb430_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb430_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006fb430_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fb430_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb430_ea_7, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006fb430_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fb430_ea_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb430_ea_8, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0052f188, u32(u32, u32, u32)> call_0052f188;  // (from the original)
inline constexpr guest::Function<0x006a6bc8, u32(u32, u32, u32, u32)> call_006a6bc8;  // (from the original)

void f_006fb430(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        return;
    }
    gptr<Local_006fb430_ea_1> ea_1 = gptr<Local_006fb430_ea_1>(frame.at(0x18).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    u32 r0_1 = call_006a6bc8(r0, r1, r2, guest::cpu()->r[3]);
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    call_003171b4(frame.at(0x10).addr(), frame.at(0x14).addr(), r0_1);  // (from the original)
    u32 r2_1 = *frame.at<u32>(0x14) - 5u;  // (from the original)
    u32 r1_2 = *frame.at<u32>(0x10) - 1u;  // (from the original)
    gptr<Local_006fb430_ea_4> ea_4 = gptr<Local_006fb430_ea_4>(frame.at(0).addr());
    ea_4->word_0 = r1_2;
    ea_4->word_4 = r2_1;
    u32 r2_2 = *frame.at<u32>(0x14) + 5u;  // (from the original)
    u32 r1_3 = *frame.at<u32>(0x10) + 1u;  // (from the original)
    gptr<Local_006fb430_ea_7> ea_7 = gptr<Local_006fb430_ea_7>(frame.at(8).addr());
    ea_7->word_0 = r1_3;
    ea_7->word_4 = r2_2;
    call_0052f188(r0, frame.at(0).addr(), frame.at(8).addr());
    gptr<Local_006fb430_ea_8> ea_8 = gptr<Local_006fb430_ea_8>(frame.at(0x18).addr());  // (from the original)
    guest::cpu()->r[4] = ea_8->word_0;
}

}  // namespace d_006fb430
GUEST_EXPORT(0x006fb430, d_006fb430::f_006fb430);

// f_006fb4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb4bc {

struct __attribute__((packed)) Local_006fb4bc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006fb4bc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb4bc_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fb4bc_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fb4bc_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_006fb4bc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006fb4bc_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb4bc_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fb4bc_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fb4bc_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_006fb4bc_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006fb4bc_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb4bc_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fb4bc_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fb4bc_ea_3, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059da08, u32(u32, u32)> call_0059da08;  // (from the original)
inline constexpr guest::Function<0x0059daa0, u32(u32, u32, u32, u32)> call_0059daa0;  // (from the original)

void f_006fb4bc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return;
    }
    gptr<Local_006fb4bc_ea_1> ea_1 = gptr<Local_006fb4bc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    u32 r0_1 = call_002feb00(r2, r0, r1, 0u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_0059daa0(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            gptr<Local_006fb4bc_ea_2> ea_2 = gptr<Local_006fb4bc_ea_2>(frame.at(0).addr());
            u32 r4_1 = ea_2->word_0;
            u32 r5_1 = ea_2->word_4;
            u32 r6_1 = ea_2->word_8;
            r14 = ea_2->word_c;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_1;
            guest::cpu()->r[6] = r6_1;
            frame.release();
            call_0059da08(r0, r1);
            return;
        }
    }
    gptr<Local_006fb4bc_ea_3> ea_3 = gptr<Local_006fb4bc_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
}

}  // namespace d_006fb4bc
GUEST_EXPORT(0x006fb4bc, d_006fb4bc::f_006fb4bc);

// f_006fb50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb50c {

struct __attribute__((packed)) Local_006fb50c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006fb50c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006fb50c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006fb50c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_2, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006fb50c_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006fb50c_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006fb50c_ea_3, word_14, 0x14);  // (from the original)

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
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    gptr<Local_006fb50c_ea_2> ea_2 = gptr<Local_006fb50c_ea_2>(0u);
    u32 r3_5 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    gptr<Local_006fb50c_ea_3> ea_3 = gptr<Local_006fb50c_ea_3>(0u);
    u32 r4_2 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    if (r2 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        return r0;
    }
    gptr<Local_006fb50c_ea_1> ea_1 = gptr<Local_006fb50c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    r4 = r2;
    r7 = r1;
    r6 = r0;
    u32 r0_1 = call_002feb00(r4, r0, r1, 0u);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r5_1 = r0_1;
    if (r0_1 != 0) {
        r0_1 = call_002fcaf4(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            u32 r0_2 = call_002fcb34(r5_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r1_2 = guest::cpu()->r[1];
            u32 r2_3 = guest::cpu()->r[2];
            u32 r3_3 = guest::cpu()->r[3];
            if (r0_2 == 0x7au) {  // (from the original)
                goto L_6fb5bc;
            }
            r0_3 = call_002fae84(r0_2, r1_2, r2_3, r3_3);
            r0_4 = r0_3 + 0x62162u;  // (from the original)
            call_001b2114(r0_4, r5_1, 1u, 0x62162u);  // (from the original)
L_6fb574:;
            *frame.at<u32>(0) = 0;
            r0_5 = call_002fc994(r4, 0x95bfdcu, r6, r7);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            r2_4 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            r0_1 = call_0059daa0(r0_5, r1_3, r2_4, r3_4);
            r1_1 = guest::cpu()->r[1];
            if (r0_1 == 0) {
                ea_3 = gptr<Local_006fb50c_ea_3>(frame.at(0).addr());
                r4_2 = ea_3->word_4;
                r5_3 = ea_3->word_8;
                r6_2 = ea_3->word_c;
                r7_2 = ea_3->word_10;
                guest::cpu()->r[4] = r4_2;
                guest::cpu()->r[5] = r5_3;
                guest::cpu()->r[6] = r6_2;
                guest::cpu()->r[7] = r7_2;
                return r0_1;
            }
            ea_2 = gptr<Local_006fb50c_ea_2>(frame.at(0).addr());
            r3_5 = ea_2->word_0;
            r4_1 = ea_2->word_4;
            r5_2 = ea_2->word_8;
            r6_1 = ea_2->word_c;
            r7_1 = ea_2->word_10;
            r14 = ea_2->word_14;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_2;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            frame.release();
            return call_0059e65c(r6, r7, 1u, r3_5);
L_6fb5bc:;
            u32 r0_6 = call_0076ad64(r5_1, r1_2, r2_3, r3_3);
            u32 r0_7 = call_002fae84(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_8 = call_002fb310(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            call_005ba02c(r0_8 + 0x1744cu, r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            guest::preempt();
            goto L_6fb574;
        }
    }
    ea_3 = gptr<Local_006fb50c_ea_3>(frame.at(0).addr());
    r4_2 = ea_3->word_4;
    r5_3 = ea_3->word_8;
    r6_2 = ea_3->word_c;
    r7_2 = ea_3->word_10;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    return r0_1;
}

}  // namespace d_006fb50c
GUEST_EXPORT(0x006fb50c, d_006fb50c::f_006fb50c);

// f_006fb604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb604 {

struct __attribute__((packed)) Local_006fb604_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006fb604_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb604_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fb604_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fb604_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_006fb604_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006fb604_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb604_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fb604_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fb604_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_006fb604_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006fb604_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fb604_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fb604_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fb604_ea_3, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059daa0, u32(u32, u32, u32, u32)> call_0059daa0;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)

void f_006fb604(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return;
    }
    gptr<Local_006fb604_ea_1> ea_1 = gptr<Local_006fb604_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    u32 r0_1 = call_002feb00(r2, r0, r1, 0u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_0059daa0(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        u32 r3_2 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            gptr<Local_006fb604_ea_2> ea_2 = gptr<Local_006fb604_ea_2>(frame.at(0).addr());
            u32 r4_1 = ea_2->word_0;
            u32 r5_1 = ea_2->word_4;
            u32 r6_1 = ea_2->word_8;
            r14 = ea_2->word_c;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_1;
            guest::cpu()->r[6] = r6_1;
            frame.release();
            call_0059e65c(r0, r1, 1u, r3_2);
            return;
        }
    }
    gptr<Local_006fb604_ea_3> ea_3 = gptr<Local_006fb604_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
}

}  // namespace d_006fb604
GUEST_EXPORT(0x006fb604, d_006fb604::f_006fb604);

// f_006fc854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fc854 {

struct __attribute__((packed)) Local_006fc854_ea_1 {
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
};
GUEST_OFFSET(Local_006fc854_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_1, word_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Local_006fc854_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_006fc854_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006fc854_ea_2, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;  // (from the original)
inline constexpr guest::Function<0x00748724, u32(u32, u32, u32, u32)> call_00748724;  // (from the original)
inline constexpr guest::Function<0x0076f9b4, u32(u32, u32, u32, u32)> call_0076f9b4;  // (from the original)

void f_006fc854(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x320);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_14 = 0;
    gptr<Local_006fc854_ea_1> ea_1 = gptr<Local_006fc854_ea_1>(frame.at(0x2f0).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r8;
    ea_1->word_20 = r9;
    ea_1->word_24 = r10;
    ea_1->word_28 = r11;
    ea_1->word_2c = r14;
    r5 = r2;
    r10 = r0;
    r11 = 0x2e6u;  // (from the original)
    call_00301444(frame.at(0).addr(), r11, r2, r3);
    r8 = 0u;
    r9 = 1u;
    do {
        r4 = 0u;
        do {
            u32 r0_3 = call_00720358(*frame.at<u32>(0x2f4), r8, r4, 0u);  // (from the original)
            u32 r0_4 = call_005361a8(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_4 != 0) {
                u32 r0_5 = call_00748724(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_5 == r5) {
                    u32 r7_1 = frame.at(0).addr();
                    u32 r0_6 = call_002fcb10(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    if (r0_6 != 0) {
                        u32 r0_7 = call_0030b6b8(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        u32 r0_8 = r0_7 - 0x2000u;  // (from the original)
                        *gptr<u8>(r7_1 + (r0_8 >> 3)) = u8(u32(*gptr<u8>(r7_1 + (r0_8 >> 3))) | r9 << (r0_8 & 7u));
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0xau);  // (from the original)
        r8 += 1u;
        guest::preempt();
    } while (r8 < 0xau);  // (from the original)
    r8 = 0u;
    do {
        r4 = 0u;
        do {
            u32 r0_10 = call_00720358(*frame.at<u32>(0x2f4), r8, r4, 1u);  // (from the original)
            u32 r0_11 = call_005361a8(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_6 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
            r3_6 = guest::cpu()->r[3];
            if (r0_11 != 0) {
                u32 r0_12 = call_00748724(r0_11, r1_6, r2_6, r3_6);
                r1_6 = guest::cpu()->r[1];
                r2_6 = guest::cpu()->r[2];
                r3_6 = guest::cpu()->r[3];
                if (r0_12 == r5) {
                    u32 r7_2 = frame.at(0).addr();
                    u32 r0_13 = call_002fcb10(r0_10, r1_6, r2_6, r3_6);
                    r1_6 = guest::cpu()->r[1];
                    r2_6 = guest::cpu()->r[2];
                    r3_6 = guest::cpu()->r[3];
                    if (r0_13 != 0) {
                        u32 r0_14 = call_0030b6b8(r0_10, r1_6, r2_6, r3_6);
                        r3_6 = guest::cpu()->r[3];
                        u32 r0_15 = r0_14 - 0x2000u;  // (from the original)
                        r2_6 = r0_15 & 7u;
                        r1_6 = u32(*gptr<u8>(r7_2 + (r0_15 >> 3))) | lsl_r(r9, r2_6 & 0xff);  // (from the original)
                        *gptr<u8>(r7_2 + (r0_15 >> 3)) = u8(r1_6);
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 8u);
        r8 += 1u;
        guest::preempt();
    } while (r8 < 8u);
    u32 r0_17 = call_0076f9b4(frame.at(0).addr(), r1_6, r2_6, r3_6);
    r7 = r0_17;
    if (r0_17 > 1u) {
        call_00301444(frame.at(0).addr(), r11, guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = 0x29dfu;  // (from the original)
        r8 = 0x30cbu;  // (from the original)
        do {
            call_002fcbb0(frame.at(0x2e8).addr(), uxth(r4), r2, r3);  // (from the original)
            u32 r0_21 = call_005361a8(frame.at(0x2e8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_21 != 0) {
                u32 r0_22 = call_00748724(r0_21, guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_22 == r5) {
                    u32 r11_1 = frame.at(0x2e8).addr();  // (from the original)
                    u32 r6_1 = frame.at(0).addr();
                    u32 r0_23 = call_002fcb10(r11_1, guest::cpu()->r[1], r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_23 != 0) {
                        u32 r0_24 = call_0030b6b8(r11_1, guest::cpu()->r[1], r2, r3);
                        r3 = guest::cpu()->r[3];
                        u32 r0_25 = r0_24 - 0x2000u;  // (from the original)
                        r2 = r0_25 & 7u;
                        *gptr<u8>(r6_1 + (r0_25 >> 3)) = u8(u32(*gptr<u8>(r6_1 + (r0_25 >> 3))) | lsl_r(r9, r2 & 0xff));  // (from the original)
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 <= r8);
        r4 = 0x3130u;  // (from the original)
        r11 = r4 | u32(s32(r4) >> 7);
        do {
            call_002fcbb0(frame.at(0x2e8).addr(), uxth(r4), r2, r3);  // (from the original)
            u32 r0_28 = call_005361a8(frame.at(0x2e8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_14 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_28 != 0) {
                u32 r0_29 = call_00748724(r0_28, r1_14, r2, r3);
                r1_14 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_29 == r5) {
                    u32 r8_1 = frame.at(0x2e8).addr();  // (from the original)
                    u32 r6_2 = frame.at(0).addr();
                    u32 r0_30 = call_002fcb10(r8_1, r1_14, r2, r3);
                    r1_14 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_30 != 0) {
                        u32 r0_31 = call_0030b6b8(r8_1, r1_14, r2, r3);
                        r3 = guest::cpu()->r[3];
                        u32 r0_32 = r0_31 - 0x2000u;  // (from the original)
                        r2 = r0_32 & 7u;
                        *gptr<u8>(r6_2 + (r0_32 >> 3)) = u8(u32(*gptr<u8>(r6_2 + (r0_32 >> 3))) | lsl_r(r9, r2 & 0xff));  // (from the original)
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 <= r11);
        u32 r0_34 = call_0076f9b4(frame.at(0).addr(), r1_14, r2, r3);
        if (r0_34 != 0 && r0_34 == r7) {
            u32 zf_1 = *gptr<u8>(r10 + 0x31u) == 0x67u;  // (from the original)
            *gptr<u32>(r10 + 0x10u) = *gptr<u32>(r10 + 0x10u) + ((r7 << 7) - (r7 + (r7 << 1)) << 3);  // (from the original)
            if (!zf_1) {
                u32 r0_35 = call_002ff6f8(0x64u);  // (from the original)
                if (s32(r0_35) >= 0x28) {  // (from the original)
                    goto L_6fcb1c;
                }
            }
            *gptr<u8>(r10 + 0x31u) = u8(r5);  // (from the original)
        }
    }
L_6fcb1c:;
    gptr<Local_006fc854_ea_2> ea_2 = gptr<Local_006fc854_ea_2>(frame.at(0x2fc).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_3 = ea_2->word_8;
    u32 r7_3 = ea_2->word_c;
    u32 r8_2 = ea_2->word_10;
    u32 r9_1 = ea_2->word_14;
    u32 r10_1 = ea_2->word_18;
    u32 r11_2 = ea_2->word_1c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_2;
}

}  // namespace d_006fc854
GUEST_EXPORT(0x006fc854, d_006fc854::f_006fc854);

// f_006fd258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fd258 {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;  // (from the original)

void f_006fd258(u32 r0, u32 r1) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r4 = 0;
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r10 = r0;
    u32 r11 = r1;
    u32 r9 = 0u;
    do {
        u32 r8 = 0u;
        u32 r7 = r8;
        u32 r5 = *gptr<u8>(0x865950u + r9);  // (from the original)
        do {
            r4 = 0u;
            do {
                u32 r0_1 = call_00720358(r11, r7, r4, 0u);
                u32 r0_2 = call_002fcb10(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_2 != 0) {
                    u32 r0_3 = call_0030b654(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    if (r0_3 != 0) {
                        u32 r0_4 = call_005361a8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        if (r0_4 != 0) {
                            u32 r0_5 = u32(*gptr<u8>(r0_4 + 0x19u)) & 0xfu;  // (from the original)
                            if (r0_5 >= 0xeu) {  // (from the original)
                                r0_5 = 0u;
                            }
                            if (r0_5 == r5) {
                                r8 += 1u;
                            }
                        }
                    }
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0xau);  // (from the original)
            r7 += 1u;
            guest::preempt();
        } while (r7 < 0xau);  // (from the original)
        r7 = 0u;
        do {
            r4 = 0u;
            do {
                u32 r0_6 = call_00720358(r11, r7, r4, 1u);
                u32 r0_7 = call_002fcb10(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_7 != 0) {
                    u32 r0_8 = call_0030b654(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    if (r0_8 != 0) {
                        u32 r0_9 = call_005361a8(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        if (r0_9 != 0) {
                            u32 r0_10 = u32(*gptr<u8>(r0_9 + 0x19u)) & 0xfu;  // (from the original)
                            if (r0_10 >= 0xeu) {  // (from the original)
                                r0_10 = 0u;
                            }
                            if (r0_10 == r5) {
                                r8 += 1u;
                            }
                        }
                    }
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 8u);
            r7 += 1u;
            guest::preempt();
        } while (r7 < 8u);
        if (r8 >= 3u) {
            u32 r1_7 = *gptr<u32>(r10 + 0x14u);  // (from the original)
            *gptr<u8>(r10 + 0x34u) = u8(r5);  // (from the original)
            *gptr<u32>(r10 + 0x14u) = r1_7 + (r8 + (r8 << 3) + (r8 << 4) << 3);  // (from the original)
        }
        r9 += 1u;
        guest::preempt();
    } while (r9 < 5u);
}

}  // namespace d_006fd258
GUEST_EXPORT_FRAMED(0x006fd258, d_006fd258::f_006fd258, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

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
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_1 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0u;
    u32 r11 = r0_1 + 0x20u;  // (from the original)
    u32 r9 = r7;
    u32 r10 = frame.at(0x14).addr();  // (from the original)
    do {
        u32 r5_1 = r7 & 0xffu;  // (from the original)
        u32 r0_2 = call_002fb7e8(r11, r5_1, r2, r3);
        r0_4 = call_002fbd54(r0_2 + 0x55a6u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            r0_4 = u32(*gptr<u8>(0x5711u + r0_2)) << 0x1c;  // (from the original)
            if (r0_4 >> 0x1f) {  // (from the original)
                u32 r4_1 = r0_2 + 0x56c4u;  // (from the original)
                call_001def90(r4_1, r1_2, r2, r3);
                u32 r0_5 = call_0070eebc(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r2_3 = guest::cpu()->r[2];
                u32 r3_3 = guest::cpu()->r[3];
                u32 zf_1 = r0_5 == 0;
                if (zf_1) {
                    r0_6 = call_006fc144(r4_1, r5_1, r2_3, r3_3);
                    r1_4 = guest::cpu()->r[1];
                    r2_4 = guest::cpu()->r[2];
                    r3_4 = guest::cpu()->r[3];
                } else {
                    r0_6 = call_006ff188(r4_1, r5_1, r2_3, r3_3);
                    r1_4 = guest::cpu()->r[1];
                    r2_4 = guest::cpu()->r[2];
                    r3_4 = guest::cpu()->r[3];
                }
                u32 r8 = r4_1;
                u32 r0_7 = call_002fb328(r0_6, r1_4, r2_4, r3_4);
                u32 r0_9 = call_0030fbb4(r0_7 + 0x5d900u, r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                u32 r1_5 = *gptr<u8>(r8 + 0x17u);  // (from the original)
                u32 r0_10 = call_0030512c(r0_9, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
                *frame.at<u32>(0xc) = r0_10;  // (from the original)
                *frame.at<u32>(4) = r9;
                *frame.at<u32>(0) = r10;
                call_007166a4(r0_9, frame.at(0x24).addr(), frame.at(0x28).addr(), frame.at(0x18).addr());  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 r5 = *frame.at<u32>(0x24);  // (from the original)
                u32 r6 = 0u;
                if (r5 < *frame.at<u32>(0x18)) {  // (from the original)
                    do {
                        u32 r4 = *frame.at<u32>(0x28);  // (from the original)
                        if (r4 < *frame.at<u32>(0x14)) {  // (from the original)
                            do {
                                u32 r0_12 = call_00720358(*frame.at<u32>(0xc), r5, r4, 0u);  // (from the original)
                                *frame.at<u32>(0x2c) = r0_12;  // (from the original)
                                u32 r0_13 = call_002fcb10(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (r0_13 != 0) {
                                    u32 r0_15 = call_0030b654(*frame.at<u32>(0x2c), guest::cpu()->r[1], r2, r3);  // (from the original)
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    if (r0_15 != 0) {
                                        u32 r0_17 = call_005361a8(*frame.at<u32>(0x2c), guest::cpu()->r[1], r2, r3);  // (from the original)
                                        r2 = guest::cpu()->r[2];
                                        r3 = guest::cpu()->r[3];
                                        if (r0_17 != 0) {
                                            u32 r0_18 = u32(*gptr<u8>(r0_17 + 0x17u)) & 0xfu;  // (from the original)
                                            if (r0_18 < 5u && r0_18 != 0) {
                                                if (r0_18 == 1u) {
                                                    r6 += 2u;
                                                } else if (r0_18 == 2u) {
                                                    r6 += 4u;
                                                }
                                            } else {
                                                r6 += 1u;
                                            }
                                        }
                                    }
                                }
                                r4 += 1u;
                                guest::preempt();
                            } while (r4 < *frame.at<u32>(0x14));  // (from the original)
                        }
                        r5 += 1u;
                        guest::preempt();
                    } while (r5 < *frame.at<u32>(0x18));  // (from the original)
                }
                u32 r4_2 = 0u;
                u32 r0_19 = *gptr<u8>(*frame.at<u32>(0xc) + 0x1eu);  // (from the original)
                if (r6 != 0) {
                    r4_2 = 1u;
                }
                if (r0_19 != 2u) {
                    if (r0_19 == 3u) {
                        goto L_6ff134;
                    }
                    if (r0_19 != 4u) {
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
                r4_2 = 3u;
                goto L_6ff164;
L_6ff158:;
                if (r6 < 0x11u) {  // (from the original)
                    goto L_6ff164;
                }
L_6ff160:;
                r4_2 = 2u;
L_6ff164:;
                r1_2 = r4_2;
                r0_4 = r8;
                *gptr<u8>(r0_4 + 0x16u) = u8(r1_2);  // (from the original)
            }
        }
        r7 += 1u;
        guest::preempt();
    } while (r7 < 4u);
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_006fef38
GUEST_EXPORT_FRAMED(0x006fef38, d_006fef38::f_006fef38, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

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
inline constexpr guest::Function<0x0072031c, u32(u32)> call_0072031c;  // (from the original)
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;  // (from the original)
inline constexpr guest::Function<0x007203f0, u32(u32)> call_007203f0;  // (from the original)
inline constexpr guest::Function<0x007485b4, u32(u32, u32, u32, u32)> call_007485b4;  // (from the original)
inline constexpr guest::Function<0x00768fac, u32(u32, u32, u32, u32)> call_00768fac;  // (from the original)
inline constexpr guest::Function<0x00769cc0, u32(u32, u32, u32, u32)> call_00769cc0;  // (from the original)

void f_006ff640(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r4 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_15 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_21 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_22 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_28 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_29 = 0;
    u32 r1_18 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_35 = 0;
    u32 r1_21 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_36 = 0;
    u32 r1_22 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 r0_42 = 0;
    u32 r1_25 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    u32 r0_43 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    u32 r0_44 = 0;
    u32 r1_26 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    u32 r0_45 = 0;
    u32 r1_27 = 0;
    u32 r2_29 = 0;
    u32 r3_29 = 0;
    u32 r0_46 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r1_28 = 0;
    u32 r2_30 = 0;
    u32 r3_30 = 0;
    u32 r0_49 = 0;
    u32 r1_29 = 0;
    u32 r2_31 = 0;
    u32 r3_31 = 0;
    u32 r0_50 = 0;
    u32 r2_32 = 0;
    u32 r3_32 = 0;
    u32 r0_51 = 0;
    u32 r1_30 = 0;
    u32 r2_33 = 0;
    u32 r3_33 = 0;
    u32 r0_52 = 0;
    u32 r1_31 = 0;
    u32 r2_34 = 0;
    u32 r3_34 = 0;
    u32 r0_53 = 0;
    u32 r1_33 = 0;
    u32 r2_36 = 0;
    u32 r3_36 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = r0;
    u32 r6 = 0u;
    u32 r9 = r1;
    u32 r8 = r2;
    do {
        r4 = 0u;
        do {
            u32 r0_1 = call_00720358(r9, r6, r4, 0u);
            u32 r0_2 = call_00768fac(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r1_2 = guest::cpu()->r[1];
            u32 r2_2 = guest::cpu()->r[2];
            u32 r3_2 = guest::cpu()->r[3];
            u32 zf_1 = r0_2 == 0;
            if (zf_1) {
                goto L_6ff924;
            }
            r0_3 = call_00769cc0(r0_1, r1_2, r2_2, r3_2);
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
            r0_4 = call_00303770(r8, r1_3, r2_3, r3_3);
            r2_4 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            if (r0_4 == 0) {
                goto L_6ff998;
            }
            r0_5 = r0_4 + 0x5544u;  // (from the original)
            r0_6 = call_0071c124(r0_5, r0_3, r2_4, r3_4);
            r1_4 = guest::cpu()->r[1];
            r2_5 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
            r0_7 = call_003031f0(r0_6, r1_4, r2_5, r3_5);
            r1_5 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
            r3_6 = guest::cpu()->r[3];
            r0_8 = call_002fcb10(r0_7, r1_5, r2_6, r3_6);
            r1_6 = guest::cpu()->r[1];
            r2_7 = guest::cpu()->r[2];
            r3_7 = guest::cpu()->r[3];
            if (r0_8 != 0) {
                call_002fc934(frame.at(0).addr(), r0_7, r2_7, r3_7);
                call_006ba62c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_12 = call_005361a8(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_6 = guest::cpu()->r[1];
                r2_7 = guest::cpu()->r[2];
                r3_7 = guest::cpu()->r[3];
                if (r0_12 != 0) {
                    u32 r0_13 = call_007485b4(r0_12, r1_6, r2_7, r3_7);
                    r2_7 = guest::cpu()->r[2];
                    r3_7 = guest::cpu()->r[3];
                    r1_6 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_13 + r1_6;
                }
            }
            r0_14 = call_003031c8(r0_6, r1_6, r2_7, r3_7);
            r1_9 = guest::cpu()->r[1];
            r2_10 = guest::cpu()->r[2];
            r3_10 = guest::cpu()->r[3];
            r0_15 = call_002fcb10(r0_14, r1_9, r2_10, r3_10);
            r1_10 = guest::cpu()->r[1];
            r2_11 = guest::cpu()->r[2];
            r3_11 = guest::cpu()->r[3];
            if (r0_15 != 0) {
                call_002fc934(frame.at(0).addr(), r0_14, r2_11, r3_11);
                call_006ba62c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_19 = call_005361a8(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_10 = guest::cpu()->r[1];
                r2_11 = guest::cpu()->r[2];
                r3_11 = guest::cpu()->r[3];
                if (r0_19 != 0) {
                    u32 r0_20 = call_007485b4(r0_19, r1_10, r2_11, r3_11);
                    r2_11 = guest::cpu()->r[2];
                    r3_11 = guest::cpu()->r[3];
                    r1_10 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_20 + r1_10;
                }
            }
            r0_21 = call_00303110(r0_6, r1_10, r2_11, r3_11);
            r1_13 = guest::cpu()->r[1];
            r2_14 = guest::cpu()->r[2];
            r3_14 = guest::cpu()->r[3];
            r0_22 = call_002fcb10(r0_21, r1_13, r2_14, r3_14);
            r1_14 = guest::cpu()->r[1];
            r2_15 = guest::cpu()->r[2];
            r3_15 = guest::cpu()->r[3];
            if (r0_22 != 0) {
                call_002fc934(frame.at(0).addr(), r0_21, r2_15, r3_15);
                call_006ba62c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_26 = call_005361a8(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_14 = guest::cpu()->r[1];
                r2_15 = guest::cpu()->r[2];
                r3_15 = guest::cpu()->r[3];
                if (r0_26 != 0) {
                    u32 r0_27 = call_007485b4(r0_26, r1_14, r2_15, r3_15);
                    r2_15 = guest::cpu()->r[2];
                    r3_15 = guest::cpu()->r[3];
                    r1_14 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_27 + r1_14;
                }
            }
            r0_28 = call_00303138(r0_6, r1_14, r2_15, r3_15);
            r1_17 = guest::cpu()->r[1];
            r2_18 = guest::cpu()->r[2];
            r3_18 = guest::cpu()->r[3];
            r0_29 = call_002fcb10(r0_28, r1_17, r2_18, r3_18);
            r1_18 = guest::cpu()->r[1];
            r2_19 = guest::cpu()->r[2];
            r3_19 = guest::cpu()->r[3];
            if (r0_29 != 0) {
                call_002fc934(frame.at(0).addr(), r0_28, r2_19, r3_19);
                call_006ba62c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_33 = call_005361a8(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_18 = guest::cpu()->r[1];
                r2_19 = guest::cpu()->r[2];
                r3_19 = guest::cpu()->r[3];
                if (r0_33 != 0) {
                    u32 r0_34 = call_007485b4(r0_33, r1_18, r2_19, r3_19);
                    r2_19 = guest::cpu()->r[2];
                    r3_19 = guest::cpu()->r[3];
                    r1_18 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_34 + r1_18;
                }
            }
            r0_35 = call_0070f010(r0_6, r1_18, r2_19, r3_19);
            r1_21 = guest::cpu()->r[1];
            r2_22 = guest::cpu()->r[2];
            r3_22 = guest::cpu()->r[3];
            r0_36 = call_002fcb10(r0_35, r1_21, r2_22, r3_22);
            r1_22 = guest::cpu()->r[1];
            r2_23 = guest::cpu()->r[2];
            r3_23 = guest::cpu()->r[3];
            if (r0_36 != 0) {
                call_002fc934(frame.at(0).addr(), r0_35, r2_23, r3_23);
                call_006ba62c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_40 = call_005361a8(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_22 = guest::cpu()->r[1];
                r2_23 = guest::cpu()->r[2];
                r3_23 = guest::cpu()->r[3];
                if (r0_40 != 0) {
                    u32 r0_41 = call_007485b4(r0_40, r1_22, r2_23, r3_23);
                    r2_23 = guest::cpu()->r[2];
                    r3_23 = guest::cpu()->r[3];
                    r1_22 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_41 + r1_22;
                }
            }
            r0_42 = call_0070f034(r0_6, r1_22, r2_23, r3_23);
            r1_25 = guest::cpu()->r[1];
            r2_26 = guest::cpu()->r[2];
            r3_26 = guest::cpu()->r[3];
            r0_43 = call_002fcb10(r0_42, r1_25, r2_26, r3_26);
            r2_27 = guest::cpu()->r[2];
            r3_27 = guest::cpu()->r[3];
            if (r0_43 == 0) {
                goto L_6ff998;
            }
            r0_44 = frame.at(0).addr();
            call_002fc934(r0_44, r0_42, r2_27, r3_27);
            r1_26 = guest::cpu()->r[1];
            r2_28 = guest::cpu()->r[2];
            r3_28 = guest::cpu()->r[3];
            r0_45 = frame.at(0).addr();
            call_006ba62c(r0_45, r1_26, r2_28, r3_28);
            r1_27 = guest::cpu()->r[1];
            r2_29 = guest::cpu()->r[2];
            r3_29 = guest::cpu()->r[3];
            r0_46 = frame.at(0).addr();
            r0 = call_005361a8(r0_46, r1_27, r2_29, r3_29);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                goto L_6ff990;
            }
L_6ff90c:;
            r0_47 = call_007485b4(r0, r1, r2, r3);
            *gptr<u32>(r5) = r0_47 + *gptr<u32>(r5);
            goto L_6ff990;
L_6ff924:;
            r0_48 = call_002fcb10(r0_1, r1_2, r2_2, r3_2);
            r1_28 = guest::cpu()->r[1];
            r2_30 = guest::cpu()->r[2];
            r3_30 = guest::cpu()->r[3];
            if (r0_48 == 0) {
                goto L_6ff998;
            }
            r0_49 = call_0030b654(r0_1, r1_28, r2_30, r3_30);
            r1_29 = guest::cpu()->r[1];
            r2_31 = guest::cpu()->r[2];
            r3_31 = guest::cpu()->r[3];
            if (r0_49 == 0) {
                goto L_6ff998;
            }
            r0_50 = call_002fcb10(r0_1, r1_29, r2_31, r3_31);
            r2_32 = guest::cpu()->r[2];
            r3_32 = guest::cpu()->r[3];
            if (r0_50 == 0) {
                goto L_6ff998;
            }
            r0_51 = frame.at(0).addr();
            call_002fc934(r0_51, r0_1, r2_32, r3_32);
            r1_30 = guest::cpu()->r[1];
            r2_33 = guest::cpu()->r[2];
            r3_33 = guest::cpu()->r[3];
            r0_52 = frame.at(0).addr();
            call_006ba62c(r0_52, r1_30, r2_33, r3_33);
            r1_31 = guest::cpu()->r[1];
            r2_34 = guest::cpu()->r[2];
            r3_34 = guest::cpu()->r[3];
            r0_53 = frame.at(0).addr();
            r0 = call_005361a8(r0_53, r1_31, r2_34, r3_34);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 != 0) {
                guest::preempt();
                goto L_6ff90c;
            }
L_6ff990:;
L_6ff998:;
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0xau);  // (from the original)
        r6 += 1u;
        guest::preempt();
    } while (r6 < 0xau);  // (from the original)
    r6 = 0u;
    do {
        r4 = 0u;
        do {
            u32 r0_54 = call_00720358(r9, r6, r4, 1u);
            u32 r0_55 = call_002fcb10(r0_54, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_33 = guest::cpu()->r[1];
            r2_36 = guest::cpu()->r[2];
            r3_36 = guest::cpu()->r[3];
            if (r0_55 != 0) {
                u32 r0_56 = call_0030b654(r0_54, r1_33, r2_36, r3_36);
                r1_33 = guest::cpu()->r[1];
                r2_36 = guest::cpu()->r[2];
                r3_36 = guest::cpu()->r[3];
                if (r0_56 != 0) {
                    u32 r0_57 = call_002fcb10(r0_54, r1_33, r2_36, r3_36);
                    r2_36 = guest::cpu()->r[2];
                    r3_36 = guest::cpu()->r[3];
                    if (r0_57 != 0) {
                        call_002fc934(frame.at(0).addr(), r0_54, r2_36, r3_36);
                        call_006ba62c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        u32 r0_61 = call_005361a8(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        r1_33 = guest::cpu()->r[1];
                        r2_36 = guest::cpu()->r[2];
                        r3_36 = guest::cpu()->r[3];
                        if (r0_61 != 0) {
                            u32 r0_62 = call_007485b4(r0_61, r1_33, r2_36, r3_36);
                            *gptr<u32>(r5) = r0_62 + *gptr<u32>(r5);
                        }
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 8u);
        r6 += 1u;
        guest::preempt();
    } while (r6 < 8u);
    u32 r0_63 = call_0072031c(r9);
    u32 r0_64 = call_002fcb10(r0_63, r1_33, r2_36, r3_36);
    if (r0_64 != 0) {
        r1_33 = r0_63;
        call_002fc934(frame.at(0).addr(), r1_33, r2_36, r3_36);
        call_006ba62c(frame.at(0).addr(), r1_33, r2_36, r3_36);
        u32 r0_68 = call_005361a8(frame.at(0).addr(), r1_33, r2_36, r3_36);
        if (r0_68 != 0) {
            u32 r0_69 = call_007485b4(r0_68, r1_33, r2_36, r3_36);
            *gptr<u32>(r5) = r0_69 + *gptr<u32>(r5);
        }
    }
    u32 r0_70 = call_007203f0(r9);
    u32 r0_71 = call_002fcb10(r0_70, r1_33, r2_36, r3_36);
    if (r0_71 != 0) {
        call_002fc934(frame.at(0).addr(), r0_70, r2_36, r3_36);
        call_006ba62c(frame.at(0).addr(), r0_70, r2_36, r3_36);
        u32 r0_75 = call_005361a8(frame.at(0).addr(), r0_70, r2_36, r3_36);
        if (r0_75 != 0) {
            u32 r0_76 = call_007485b4(r0_75, r0_70, r2_36, r3_36);
            *gptr<u32>(r5) = r0_76 + *gptr<u32>(r5);
        }
    }
}

}  // namespace d_006ff640
GUEST_EXPORT_FRAMED(0x006ff640, d_006ff640::f_006ff640, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006ffb40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ffb40 {

struct __attribute__((packed)) Local_006ffb40_ea_1 {
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
};
GUEST_OFFSET(Local_006ffb40_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_1, word_30, 0x30);  // (from the original)

struct __attribute__((packed)) Local_006ffb40_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_006ffb40_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006ffb40_ea_2, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0030512c, u32(u32, u32, u32, u32)> call_0030512c;  // (from the original)
inline constexpr guest::Function<0x00305158, u32(u32, u32, u32, u32)> call_00305158;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;  // (from the original)
inline constexpr guest::Function<0x00748724, u32(u32, u32, u32, u32)> call_00748724;  // (from the original)

void f_006ffb40(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xa0);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r5_1 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r6_1 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    gptr<Local_006ffb40_ea_1> ea_1 = gptr<Local_006ffb40_ea_1>(frame.at(0x6c).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    r9 = r1;
    r11 = r0;
    r10 = r3;
    call_00301444(frame.at(0).addr(), 0x67u, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    *frame.at<u8>(0x67) = 0;  // (from the original)
L_6ffb6c:;
    u32 r0_3 = call_0030512c(*frame.at<u32>(0x74), r8 & 0xffu, r2, r3);  // (from the original)
    *frame.at<u32>(0x68) = r0_3;  // (from the original)
    u32 r0_4 = call_00305158(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
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
    r0_5 = *frame.at<u32>(0x68);  // (from the original)
    r0_6 = call_00720358(r0_5, r7, r4, 0u);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_7 = call_002fcb10(r0_6, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_6ffc78;
    }
    r5_1 = frame.at(0).addr();
    r0_8 = call_005361a8(r0_6, r1_4, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_6ffc78;
    }
    r1_5 = *gptr<u8>(r0_8 + 0x19u);  // (from the original)
    r6_1 = r1_5 & 0xfu;  // (from the original)
    if (r6_1 >= 0xeu) {  // (from the original)
        r6_1 = 0u;
    }
    r0_9 = call_00748724(r0_8, r1_5, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r6_1 != 0) {
        if (r6_1 == 1u) {
            goto L_6ffc48;
        }
        if (r6_1 == 2u) {
            goto L_6ffc60;
        }
        if (r6_1 == 3u) {
            goto L_6ffcbc;
        }
        if (r6_1 == 4u) {
            goto L_6ffcd4;
        }
        goto L_6ffc78;
    }
    *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 1u);
    *frame.at<u8>(0x67) = u8(u32(*frame.at<u8>(0x67)) | 1u);  // (from the original)
    goto L_6ffc78;
L_6ffc48:;
    *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 2u);
    r0 = u32(*frame.at<u8>(0x67)) | 2u;  // (from the original)
    goto L_6ffc74;
L_6ffc60:;
    *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 4u);
    r0 = u32(*frame.at<u8>(0x67)) | 4u;  // (from the original)
L_6ffc74:;
    *frame.at<u8>(0x67) = u8(r0);  // (from the original)
L_6ffc78:;
    r4 += 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6ffba4;
    }
    r7 += 1u;
    if (r7 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6ffba0;
    }
L_6ffc90:;
    r8 += 1u;
    if (r8 < 6u) {
        guest::preempt();
        goto L_6ffb6c;
    }
    *gptr<u8>(r9) = 0x67;  // (from the original)
    r1 = frame.at(0).addr();
    if (*frame.at<u8>(0x67) != 0x1fu) {  // (from the original)
        r1_6 = 0u;
        goto L_6ffd68;
    }
    goto L_6ffcec;
L_6ffcbc:;
    *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 8u);
    r0 = u32(*frame.at<u8>(0x67)) | 8u;  // (from the original)
    guest::preempt();
    goto L_6ffc74;
L_6ffcd4:;
    *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 0x10u);  // (from the original)
    r0 = u32(*frame.at<u8>(0x67)) | 0x10u;  // (from the original)
    guest::preempt();
    goto L_6ffc74;
L_6ffcec:;
    r0 = 0u;
    if (r10 != 0) {
        do {
            if (*gptr<u8>(r1 + r0) == 0x1fu && r0 != 0x65u) {  // (from the original)
                r1_6 = 0x249f0u;  // (from the original)
                goto L_6ffd4c;
            }
            r0 = r0 + 1u & 0xffu;  // (from the original)
            guest::preempt();
        } while (r0 < 0x67u);  // (from the original)
        if (r10 != 0) {
            r1_6 = 0x186a0u;  // (from the original)
            goto L_6ffd68;
        }
        goto L_6ffd64;
    }
L_6ffd34:;
    if (*gptr<u8>(r1 + r0) != 0x1fu || r0 == 0x65u) {  // (from the original)
        goto L_6ffd54;
    }
    r1_6 = 0x1388u;  // (from the original)
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
    r1_6 = 0x9c4u;  // (from the original)
L_6ffd68:;
    *gptr<u32>(r11) = r1_6;
    gptr<Local_006ffb40_ea_2> ea_2 = gptr<Local_006ffb40_ea_2>(frame.at(0x7c).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_2 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    u32 r9_1 = ea_2->word_14;
    u32 r10_1 = ea_2->word_18;
    u32 r11_1 = ea_2->word_1c;
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
}

}  // namespace d_006ffb40
GUEST_EXPORT(0x006ffb40, d_006ffb40::f_006ffb40);

// f_006ffd84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ffd84 {

struct __attribute__((packed)) Local_006ffd84_r1_4 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(Local_006ffd84_r1_4, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ffd84_r1_4, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_006ffd84_r1_4, half_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f86c0, u32(u32, u32)> call_002f86c0;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x00301df4, u32(u32, u32, u32)> call_00301df4;  // (from the original)

u32 f_006ffd84(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r5 = 0u;
    u32 r7 = 0x952c16u;  // (from the original)
    u32 r8 = r7 + 6u;
    *gptr<u16>(r7) = 0;
    *gptr<u16>(r7 + 2u) = 0;
    *gptr<u16>(r7 + 4u) = 0;
    *gptr<u16>(r8) = 0;
    u32 r9 = r8 + 6u;
    *gptr<u16>(r8 + 2u) = 0;
    *gptr<u16>(r8 + 4u) = 0;
    *gptr<u16>(r9) = 0;
    *gptr<u16>(r9 + 2u) = 0;
    *gptr<u16>(r9 + 4u) = 0;
    u32 r0_1 = call_002fb328(0u, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r10 = 0xa14b30u;  // (from the original)
    u32 r6 = r0_1 + 0xa0u;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r0_2 = call_00301df4(r6, r4 & 0xffu, r2);  // (from the original)
        r0_4 = call_002fbd54(r0_2 + 0x55a6u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_4 != 0) {
            gptr<Local_006ffd84_r1_4> r1_4 = gptr<Local_006ffd84_r1_4>(r10 + (r4 + (r4 << 1) << 1));
            r5 += 1u;
            u32 r0_5 = r1_4->half_0;
            *gptr<u16>(r8) = u16(u32(*gptr<u16>(r8)) + r0_5);
            if (*gptr<u16>(r7) < r0_5) {
                *gptr<u16>(r7) = u16(r0_5);
            }
            u32 r0_6 = r1_4->half_2;
            *gptr<u16>(r8 + 2u) = u16(u32(*gptr<u16>(r8 + 2u)) + r0_6);
            r2 = *gptr<u16>(r7 + 2u);
            if (r2 < r0_6) {
                *gptr<u16>(r7 + 2u) = u16(r0_6);
            }
            r0_4 = r1_4->half_4;
            *gptr<u16>(r8 + 4u) = u16(u32(*gptr<u16>(r8 + 4u)) + r0_4);
            r1_3 = *gptr<u16>(r7 + 4u);
            if (r1_3 < r0_4) {
                *gptr<u16>(r7 + 4u) = u16(r0_4);
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    if (r5 != 0) {
        u32 r0_7 = *gptr<u16>(r8);
        u32 r0_8 = call_002f86c0(r0_7, r5);
        *gptr<u16>(r9) = u16(r0_8);
        u32 r0_9 = *gptr<u16>(r8 + 2u);
        u32 r0_10 = call_002f86c0(r0_9, r5);
        *gptr<u16>(r9 + 2u) = u16(r0_10);
        u32 r0_11 = *gptr<u16>(r8 + 4u);
        r0_4 = call_002f86c0(r0_11, r5);
        r1_3 = guest::cpu()->r[1];
        *gptr<u16>(r9 + 4u) = u16(r0_4);
    }
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_006ffd84
GUEST_EXPORT_FRAMED(0x006ffd84, d_006ffd84::f_006ffd84, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original
