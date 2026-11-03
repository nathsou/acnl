// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/grid_rect.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006f09d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f09d4 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x00767a44, u32(u32, u32)> call_00767a44;
inline constexpr guest::Function<0x007703e0, u32(u32, u32)> ItemBitSet__index_of_nth_set_bit;

struct __attribute__((packed)) Frame_006f09d4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006f09d4, word_0, 0x0);
GUEST_SIZE(Frame_006f09d4, 0x4);

void f_006f09d4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_006f09d4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = r0;
    u32 r6 = r1;
    r1 = 0u;
    u32 r2 = r1;
    do {
        r0 = gptr<u32>(r5)[r2];
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
    u32 r0_1 = random_below(r1, r1, r2, r3);
    u32 r0_2 = ItemBitSet__index_of_nth_set_bit(r5, r0_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r8 = 0x172bu;  // (from the original)
    u32 r7 = r0_2;
    u32 r4 = 0u;
    u32 r9 = 1u;
    do {
        construct_item(frame.at(0).addr(), uxth(r4 + 0x2000u), r2, r3);  // (from the original)
        u32 r1_2 = frame.at(0).addr();
        u32 r0_4 = call_00767a44(r1_2, r1_2);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            u32 r0_6 = indexed_item_type(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_6 != r6 && r4 <= r8) {
                u32 r0_7 = r4 >> 5;
                r2 = gptr<u32>(r5)[r0_7] & ~(r9 << (r4 & 0x1fu));  // (from the original)
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
        r0 = gptr<u32>(r3)[r1];
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
        r1 = gptr<u32>(r5)[r0_8] | r9 << (r7 & 0x1fu);  // (from the original)
        *gptr<u32>(r3 + (r0_8 << 2)) = r1;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006f09d4
GUEST_EXPORT_FRAMED(0x006f09d4, d_006f09d4::f_006f09d4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006f14b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f14b0 {

struct __attribute__((packed)) Local_006f14b0_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f14b0_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_006f14b0_r0_1, word_4, 0x4);

inline constexpr guest::Function<0x0025591c, u32(u32)> call_0025591c;
inline constexpr guest::Function<0x002ad1fc, u32(u32)> call_002ad1fc;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> category_info;

struct __attribute__((packed)) Frame_006f14b0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006f14b0, word_0, 0x0);
GUEST_SIZE(Frame_006f14b0, 0x4);

void f_006f14b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006f14b0> frame;  // the original's stack frame
    u32 r5 = 0;
    frame->word_0 = r3;
    u32 r8 = r0;
    gptr<Local_006f14b0_r0_1> r0_1 = gptr<Local_006f14b0_r0_1>(category_info(r1, r1, r2, r3));
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = r0_1->word_4;
    u32 r9 = 0x372au;  // (from the original)
    u32 r10 = 1u;
    u32 r4 = uxth(r0_1->word_0);
    u32 r7 = r4;
    if (r1 == 0x24u) {  // (from the original)
        r5 = 0u;
        if (r6 >= 0u && r6 != 0) {
            do {
                construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
                u32 r0_4 = call_002ad1fc(frame.at(0).addr());
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_4 != 0) {
                    u32 r0_5 = r7 + r5;
                    if (r0_5 <= r9) {
                        u32 r0_6 = r0_5 - 0x2000u;  // (from the original)
                        u32 r1_3 = r0_6 >> 5;
                        r2 = gptr<u32>(r8)[r1_3] | r10 << (r0_6 & 0x1fu);  // (from the original)
                        *gptr<u32>(r8 + (r1_3 << 2)) = r2;
                    }
                }
                r4 += 1u;
                r5 += 1u;
                guest::preempt();
            } while (r6 > r5);
            return;
        }
    } else {
        r5 = 0u;
        if (r6 >= 0u && r6 != 0) {
            do {
                construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
                u32 r0_9 = call_0025591c(frame.at(0).addr());
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_9 != 0) {
                    u32 r0_10 = r7 + r5;
                    if (r0_10 <= r9) {
                        u32 r0_11 = r0_10 - 0x2000u >> 5;  // (from the original)
                        r2 = gptr<u32>(r8)[r0_11] | r10 << (r0_10 - 0x2000u & 0x1fu);  // (from the original)
                        *gptr<u32>(r8 + (r0_11 << 2)) = r2;
                    }
                }
                r4 += 1u;
                r5 += 1u;
                guest::preempt();
            } while (r6 > r5);
        }
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
GUEST_OFFSET(Local_006f15c4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006f15c4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006f15c4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006f15c4_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006f15c4_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006f15c4_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_006f15c4_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_006f15c4_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_006f15c4_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_006f15c4_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_006f15c4_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_006f15c4_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_006f15c4_ea_1, word_30, 0x30);

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
GUEST_OFFSET(Local_006f15c4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006f15c4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006f15c4_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006f15c4_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_006f15c4_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_006f15c4_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_006f15c4_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_006f15c4_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_006f15c4_ea_2, word_20, 0x20);

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
GUEST_OFFSET(Local_006f15c4_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006f15c4_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_006f15c4_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_006f15c4_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_006f15c4_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_006f15c4_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_006f15c4_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_006f15c4_ea_3, word_1c, 0x1c);
GUEST_OFFSET(Local_006f15c4_ea_3, word_20, 0x20);

struct __attribute__((packed)) Local_006f15c4_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f15c4_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_006f15c4_r0_2, word_4, 0x4);

inline constexpr guest::Function<0x001b1b40, u32(u32, u32)> copy_3_bytes;
inline constexpr guest::Function<0x002fae84, u32(u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> category_info;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x0070b510, u32(u32, u32, u32, u32)> call_0070b510;
inline constexpr guest::Function<0x0070b574, u32(u32, u32, u32, u32)> call_0070b574;
inline constexpr guest::Function<0x0070b65c, u32(u32, u32)> call_0070b65c;
inline constexpr guest::Function<0x0070b694, u32(u32, u32)> call_0070b694;
inline constexpr guest::Function<0x0070b6d0, u32(u32, u32)> call_0070b6d0;
inline constexpr guest::Function<0x0070b70c, u32(u32, u32)> call_0070b70c;

struct __attribute__((packed)) Frame_006f15c4 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
    u32 word_20;
    u8 unknown_24[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006f15c4, word_8, 0x8);
GUEST_OFFSET(Frame_006f15c4, word_c, 0xc);
GUEST_OFFSET(Frame_006f15c4, word_10, 0x10);
GUEST_OFFSET(Frame_006f15c4, word_18, 0x18);
GUEST_OFFSET(Frame_006f15c4, word_20, 0x20);
GUEST_SIZE(Frame_006f15c4, 0x48);

u32 f_006f15c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006f15c4> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_18 = 0;
    u32 r1_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_22 = 0;
    u32 r1_12 = 0;
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
    gptr<Local_006f15c4_r0_2> r0_2 = gptr<Local_006f15c4_r0_2>(category_info(frame->word_18, r1, r2, r3));
    r6 = r0_2->word_4;
    u32 r1_1 = uxth(r0_2->word_0);
    r10 = r1_1;
    construct_item(frame.at(4).addr(), r1_1);
    u32 r0_5 = Item__data(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0_5;
    u32 r0_6 = get_data_base(r0_5, guest::cpu()->r[1]);
    u32 r0_7 = *gptr<u8>(r0_6 + 0x6214eu);  // (from the original)
    u32 r1_4 = frame->word_20 - 1u;
    r7 = (r1_4 & r0_7 >> 4) == 0;
    u32 r0_8 = get_data_base(r0_7, r1_4);
    copy_3_bytes(frame.at(0).addr(), r0_8 + 0x621ccu);  // (from the original)
    u32 r0_11 = call_0070b65c(frame.at(0).addr(), frame->word_18);
    r11 = r0_11;
    u32 r0_13 = call_0070b694(frame.at(0).addr(), frame->word_18);
    frame->word_8 = r0_13;
    u32 r0_15 = call_0070b6d0(frame.at(0).addr(), frame->word_18);
    frame->word_10 = r0_15;
    u32 r0_17 = call_0070b70c(frame.at(0).addr(), frame->word_18);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    frame->word_c = r0_17;
    if (r5_1 == 2u) {
        goto L_6f16a0;
    }
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        r8 = 0x372au;  // (from the original)
    } else {
        goto L_6f19d0;
    }
L_6f1688:;
    r0_18 = *gptr<u8>(r4 + 0xdu);  // (from the original)
    if (r0_18 >= 0xb9u || r0_18 != 0x14u) {  // (from the original)
        goto L_6f187c;
    }
    goto L_6f1868;
L_6f16a0:;
    r1_10 = frame->word_18;
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
            r0_22 = random_below(0x64u, r1_11, r2, r3);  // (from the original)
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
            r1_13 = r1_12 - 0x2000u >> 5;  // (from the original)
            r2 = gptr<u32>(r9)[r1_13] | 1u << (r1_12 - 0x2000u & 0x1fu);  // (from the original)
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
            r0_23 = random_below(0x64u, r1_11, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_23 >= frame->word_8) {
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
            r0_25 = random_below(0x64u, r1_11, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_25 >= frame->word_10) {
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
            r0_26 = random_below(0x64u, r1_11, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_26 >= frame->word_c) {
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
            r2 = gptr<u32>(r0_24)[r1_15] | 1u << (r3 & 0x1fu);  // (from the original)
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
    r0_27 = random_below(0x64u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_27 >= r11) {
        goto L_6f19c0;
    }
    r0_28 = r10 + r5;
    if (r8 >= r0_28) {
        r0_30 = r0_28 - 0x2000u;  // (from the original)
        r1 = 1u;
        r12_1 = r0_30 >> 5;
        r2 = gptr<u32>(r9)[r12_1];
        *gptr<u32>(r9 + (r12_1 << 2)) = r2 | r1 << (r0_30 & 0x1fu);  // (from the original)
        goto L_6f19c0;
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
    r0_29 = random_below(0x64u, r1, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = frame->word_8;
    if (r0_29 >= r1) {
        goto L_6f19c0;
    }
    r0_28 = r10 + r5;
    if (r8 < r0_28) {
        goto L_6f19c0;
    }
    r0_30 = r0_28 - 0x2000u;  // (from the original)
    r1 = 1u;
    r12_1 = r0_30 >> 5;
    r2 = gptr<u32>(r9)[r12_1];
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
    r0_31 = random_below(0x64u, r1, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = frame->word_10;
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
    r0_33 = random_below(0x64u, r1, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = frame->word_c;
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
    r2 = gptr<u32>(r0_32)[r1] | 1u << (r3 & 0x1fu);  // (from the original)
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
        r0 = gptr<u32>(r9)[r1];
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
    u32 r0_35 = call_0070b510(frame.at(0).addr(), frame->word_18, r2, r3);
    call_002fe9c8(r9, frame->word_18, r0_35, frame->word_20);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r2;
    do {
        r0 = gptr<u32>(r9)[r1];
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
        r0 = Item__data(frame.at(4).addr(), r1, r2, r3);
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
    u32 r0_38 = r0_37 - 0x2000u >> 5;  // (from the original)
    r1 = gptr<u32>(r9)[r0_38] | 1u << (r0_37 - 0x2000u & 0x1fu);  // (from the original)
    *gptr<u32>(r9 + (r0_38 << 2)) = r1;
    guest::preempt();
    goto L_6f1ac4;
}

}  // namespace d_006f15c4
GUEST_EXPORT(0x006f15c4, d_006f15c4::f_006f15c4);

// f_006f1cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f1cfc {

struct __attribute__((packed)) Local_006f1cfc_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f1cfc_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_006f1cfc_r0_1, word_4, 0x4);

inline constexpr guest::Function<0x0025591c, u32(u32)> call_0025591c;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> category_info;
inline constexpr guest::Function<0x007692f0, u32(u32, u32, u32, u32)> Item__section_in_category_27;

struct __attribute__((packed)) Frame_006f1cfc {
    u32 word_0;
};
GUEST_OFFSET(Frame_006f1cfc, word_0, 0x0);
GUEST_SIZE(Frame_006f1cfc, 0x4);

u32 f_006f1cfc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006f1cfc> frame;  // the original's stack frame
    u32 r5 = 0;
    frame->word_0 = r3;
    u32 r7 = r0;
    u32 r9 = r1;
    gptr<Local_006f1cfc_r0_1> r0_1 = gptr<Local_006f1cfc_r0_1>(category_info(0x27u, r1, r2, r3));  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = r0_1->word_4;
    u32 r10 = 0x372au;  // (from the original)
    u32 r11 = 1u;
    u32 r4 = uxth(r0_1->word_0);
    u32 r8 = r4;
    if (r9 == 3u) {
        goto L_6f1dec;
    }
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_4 = call_0025591c(frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                u32 r0_6 = Item__section_in_category_27(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_6 == r9) {
                    u32 r0_7 = r8 + r5;
                    if (r0_7 <= r10) {
                        u32 r0_8 = r0_7 - 0x2000u >> 5;  // (from the original)
                        r2 = gptr<u32>(r7)[r0_8] | r11 << (r0_7 - 0x2000u & 0x1fu);  // (from the original)
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
        r0 = gptr<u32>(r7)[r1];
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
    return r2 != 0;
L_6f1dec:;
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_12 = call_0025591c(frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 != 0) {
                u32 r0_13 = r8 + r5;
                if (r0_13 <= r10) {
                    u32 r0_14 = r0_13 - 0x2000u >> 5;  // (from the original)
                    r2 = gptr<u32>(r7)[r0_14] | r11 << (r0_13 - 0x2000u & 0x1fu);  // (from the original)
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
GUEST_OFFSET(Local_006f1f14_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006f1f14_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;

struct __attribute__((packed)) Frame_006f1f14 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006f1f14, word_0, 0x0);
GUEST_SIZE(Frame_006f1f14, 0x4);

u32 f_006f1f14(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006f1f14> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6_1 = r1;
    u32 r8_1 = r0;
    gptr<Local_006f1f14_ea_1> ea_1 = gptr<Local_006f1f14_ea_1>(frame.at(0x20).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    if (r3 != 0) {
        frame->word_0 = 0;
        r0 = call_006f2908(r0, 5u, r1, r2);
        r1 = guest::cpu()->r[1];
    }
    if (r4_1 != 0) {
        frame->word_0 = 0;
        r0 = call_006f2908(r8_1, 3u, r6_1, r2);
        r1 = guest::cpu()->r[1];
    }
    if (r5_1 != 0) {
        frame->word_0 = 0;
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

struct __attribute__((packed)) Local_006f2178_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f2178_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_006f2178_r0_1, word_4, 0x4);

inline constexpr guest::Function<0x002ad1fc, u32(u32)> call_002ad1fc;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> category_info;
inline constexpr guest::Function<0x00769bc4, u32(u32, u32, u32, u32)> call_00769bc4;

struct __attribute__((packed)) Frame_006f2178 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006f2178, word_0, 0x0);
GUEST_SIZE(Frame_006f2178, 0x4);

u32 f_006f2178(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006f2178> frame;  // the original's stack frame
    u32 r5 = 0;
    frame->word_0 = r3;
    u32 r7 = r0;
    u32 r9 = r1;
    gptr<Local_006f2178_r0_1> r0_1 = gptr<Local_006f2178_r0_1>(category_info(0x24u, r1, r2, r3));  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = r0_1->word_4;
    u32 r10 = 0x372au;  // (from the original)
    u32 r11 = 1u;
    u32 r4 = uxth(r0_1->word_0);
    u32 r8 = r4;
    if (r9 == 6u) {
        goto L_6f2268;
    }
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_4 = call_002ad1fc(frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                u32 r0_6 = call_00769bc4(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_6 == r9) {
                    u32 r0_7 = r8 + r5;
                    if (r0_7 <= r10) {
                        u32 r0_8 = r0_7 - 0x2000u >> 5;  // (from the original)
                        r2 = gptr<u32>(r7)[r0_8] | r11 << (r0_7 - 0x2000u & 0x1fu);  // (from the original)
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
        r0 = gptr<u32>(r7)[r1];
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
    return r2 != 0;
L_6f2268:;
    r5 = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_12 = call_002ad1fc(frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 != 0) {
                u32 r0_13 = r8 + r5;
                if (r0_13 <= r10) {
                    u32 r0_14 = r0_13 - 0x2000u >> 5;  // (from the original)
                    r2 = gptr<u32>(r7)[r0_14] | r11 << (r0_13 - 0x2000u & 0x1fu);  // (from the original)
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

struct __attribute__((packed)) Local_006f2908_r0_13 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f2908_r0_13, word_0, 0x0);
GUEST_OFFSET(Local_006f2908_r0_13, word_4, 0x4);

inline constexpr guest::Function<0x001b1b40, u32(u32, u32)> copy_3_bytes;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x005359fc, u32(u32)> category_info;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x006f15c4, u32(u32, u32, u32, u32)> call_006f15c4;
inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;
inline constexpr guest::Function<0x006f2c1c, u32(u32, u32, u32, u32)> call_006f2c1c;
inline constexpr guest::Function<0x0070b49c, u32(u32, u32)> call_0070b49c;
inline constexpr guest::Function<0x0070b510, u32(u32, u32)> call_0070b510;
inline constexpr guest::Function<0x0070b574, u32(u32, u32)> call_0070b574;
inline constexpr guest::Function<0x0070b5e8, u32(u32, u32)> call_0070b5e8;
inline constexpr guest::Function<0x007485d0, u32(u32, u32, u32, u32)> ItemData__flag_1c_bit3;

struct __attribute__((packed)) Frame_006f2908 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006f2908, word_0, 0x0);
GUEST_SIZE(Frame_006f2908, 0xc);

u32 f_006f2908(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006f2908> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 r0_7 = 0;
    u32 zf_2 = 0;
    u32 r0_12 = 0;
    u32 zf_1 = r2 == 2u;
    u32 r7 = r2;
    if (!zf_1) {
        zf_1 = r7 == 1u;
    }
    u32 r5_1 = *frame.at<u32>(0x30);  // (from the original)
    u32 r10 = r0;
    u32 r11_1 = r3;
    if (!zf_1) {
        if (r7 == 4u) {
            frame->word_0 = r5_1;
            call_006f2908(r0, r1, 5u, r3);
            frame->word_0 = r5_1;
            call_006f2908(r10, r1, 6u, r11_1);
            goto L_6f29f4;
        }
        if (r7 == 3u) {
            r0_1 = random_below(3u, r1, r2, r3);
            if (r0_1 == 0) {
                frame->word_0 = r5_1;
                u32 r0_2 = call_006f2908(r10, r1, 5u, r11_1);
                return r0_2;
            }
            if (r0_1 == 1u) {
                frame->word_0 = r5_1;
                u32 r0_3 = call_006f2908(r10, r1, 6u, r11_1);
                return r0_3;
            }
            if (r0_1 != 2u) {
                return r0_1;
            }
            goto L_6f29f4;
        }
        u32 r0_4 = get_data_base(r0, r1, r2, r3);
        copy_3_bytes(frame.at(4).addr(), r0_4 + 0x621ccu);  // (from the original)
        if (r7 == 5u) {
            r0_7 = call_0070b510(frame.at(4).addr(), r1);
            goto L_6f2aa8;
        }
        if (r7 == 6u) {
            r0_7 = call_0070b5e8(frame.at(4).addr(), r1);
            goto L_6f2aa8;
        }
        if (r7 == 7u) {
            r0_7 = call_0070b49c(frame.at(4).addr(), r1);
            goto L_6f2aa8;
        }
        if (r7 == 8u) {
            r0_7 = call_0070b574(frame.at(4).addr(), r1);
            goto L_6f2aa8;
        }
        goto L_6f2aac;
    }
    zf_2 = r3 == 0;
    if (zf_2) {
        u32 r0_11 = call_006f15c4(r0, r1, r2, r5_1);
        return r0_11;
    }
    r0_1 = call_006f2c1c(r0, r1, r2, r5_1);
    return r0_1;
L_6f29f4:;
    frame->word_0 = r5_1;
    r0_12 = call_006f2908(r10, r1, 7u, r11_1);
    return r0_12;
L_6f2aa8:;
    r7 = r0_7;
L_6f2aac:;
    gptr<Local_006f2908_r0_13> r0_13 = gptr<Local_006f2908_r0_13>(category_info(r1));
    u32 r6 = r0_13->word_4;
    u32 r1_8 = uxth(r0_13->word_0);
    u32 r9 = r1_8;
    construct_item(frame.at(8).addr(), r1_8);
    u32 r0_16 = Item__data(frame.at(8).addr());
    u32 r4 = r0_16;
    u32 r0_17 = get_data_base(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = 0x372au;  // (from the original)
    r2 = 1u;
    r1 = r5_1 - 1u;
    u32 r8 = (r1 & u32(*gptr<u8>(r0_17 + 0x6214eu)) >> 4) == 0;  // (from the original)
    if (r11_1 != 0) {
        u32 r5 = 0u;
        if (r6 >= 0u && r6 != 0) {
            u32 r11 = r3;
            do {
                u32 r0_18 = *gptr<u8>(r4 + 0xdu);  // (from the original)
                if (r0_18 >= 0xb9u) {  // (from the original)
                    r0_18 = 0u;
                }
                if (r0_18 == r7) {
                    u32 r0_19 = ItemData__flag_1c_bit3(r4, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_19 == 0 && (r8 != 0 || (u32(*gptr<u8>(r4 + 0x1bu)) & 1u) == 0)) {  // (from the original)
                        u32 r0_20 = r9 + r5;
                        if (r0_20 <= r11) {
                            u32 r0_21 = r0_20 - 0x2000u;  // (from the original)
                            r1 = r0_21 >> 5;
                            r3 = gptr<u32>(r10)[r1];
                            r2 = r3 | 1u << (r0_21 & 0x1fu);  // (from the original)
                            *gptr<u32>(r10 + (r1 << 2)) = r2;
                        }
                    }
                }
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
                        u32 r1_11 = r1 - 0x2000u;  // (from the original)
                        u32 r12_1 = r1_11 >> 5;
                        r1 = r1_11 & 0x1fu;  // (from the original)
                        *gptr<u32>(r10 + (r12_1 << 2)) = gptr<u32>(r10)[r12_1] | lsl_r(r2, r1 & 0xff);  // (from the original)
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
GUEST_OFFSET(Object_006f432c_0, byte_0, 0x0);
GUEST_OFFSET(Object_006f432c_0, byte_1, 0x1);
GUEST_OFFSET(Object_006f432c_0, byte_2, 0x2);
GUEST_OFFSET(Object_006f432c_0, byte_4, 0x4);
GUEST_OFFSET(Object_006f432c_0, byte_5, 0x5);
GUEST_OFFSET(Object_006f432c_0, byte_6, 0x6);
GUEST_OFFSET(Object_006f432c_0, byte_7, 0x7);
GUEST_OFFSET(Object_006f432c_0, byte_8, 0x8);
GUEST_OFFSET(Object_006f432c_0, byte_9, 0x9);
GUEST_OFFSET(Object_006f432c_0, byte_a, 0xa);
GUEST_OFFSET(Object_006f432c_0, byte_b, 0xb);
GUEST_OFFSET(Object_006f432c_0, byte_c, 0xc);


void f_006f432c(gptr<Object_006f432c_0> arg0, u32 r1, u32 r2) {
    u32 res_1 = r1 - 0x23u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        if (zf_1 || (res_1 >> 0x1f) != (((r1 ^ 0x23u) & (r1 ^ res_1)) >> 0x1f)) {  // (from the original)
            u32 res_2 = r1 - 0x1eu;  // (from the original)
            u32 zf_2 = res_2 == 0;
            if (zf_2) {
                u32 r12_1 = arg0->byte_4;
                u32 r1_1 = r2 + (r12_1 >> 4u & 7u);
                if (r1_1 > 4u) {
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_1 = 4u;
                    }
                    if (s32(r2) <= 0) {
                        r1_1 = 0u;
                    }
                }
                u32 r1_2 = r12_1 & ~0x70u | (r1_1 & 7u) << 4;  // (from the original)
                arg0->byte_4 = u8(r1_2);
                guest::cpu()->r[1] = r1_2;
                return;
            }
            if (zf_2 || (res_2 >> 0x1f) != (((r1 ^ 0x1eu) & (r1 ^ res_2)) >> 0x1f)) {  // (from the original)
                if (r1 == 5u) {
                    u32 r12_2 = arg0->byte_0;
                    u32 r1_3 = r2 + (r12_2 >> 5);
                    if (r1_3 > 4u) {
                        if (r2 != 0 && s32(r2) >= 0) {
                            r1_3 = 4u;
                        }
                        if (s32(r2) <= 0) {
                            r1_3 = 0u;
                        }
                    }
                    u32 r1_4 = r12_2 & ~0xe0u | r1_3 << 5;  // (from the original)
                    arg0->byte_0 = u8(r1_4);
                    guest::cpu()->r[1] = r1_4;
                    return;
                }
                if (r1 != 0xdu) {  // (from the original)
                    guest::cpu()->r[1] = r1;
                    return;
                }
                u32 r12_3 = arg0->byte_1;
                u32 r1_5 = (r12_3 >> 7) + ((u32(arg0->byte_2) & 0xfu) << 1) + r2;  // (from the original)
                if (r1_5 > 0x14u) {  // (from the original)
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_5 = 0x14u;  // (from the original)
                    }
                    if (s32(r2) <= 0) {
                        r1_5 = 0u;
                    }
                }
                u32 r1_6 = r12_3 & ~0x80u | r1_5 << 7;  // (from the original)
                u32 r2_1 = u32(arg0->byte_2) & ~0xfu | (r1_5 & 0x1eu) >> 1;  // (from the original)
                arg0->byte_1 = u8(r1_6);
                arg0->byte_2 = u8(r2_1);
                guest::cpu()->r[1] = r1_6;
                return;
            }
            if (r1 == 0x1fu) {  // (from the original)
                u32 r12_4 = arg0->byte_4;
                u32 r1_7 = (r12_4 >> 7) + ((u32(arg0->byte_5) & 7u) << 1) + r2;
                if (r1_7 > 0xfu) {  // (from the original)
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_7 = 0xfu;  // (from the original)
                    }
                    if (s32(r2) <= 0) {
                        r1_7 = 0u;
                    }
                }
                u32 r1_8 = r12_4 & ~0x80u | r1_7 << 7;  // (from the original)
                u32 r2_2 = u32(arg0->byte_5) & ~7u | (r1_7 & 0xeu) >> 1;  // (from the original)
                arg0->byte_4 = u8(r1_8);
                arg0->byte_5 = u8(r2_2);
                guest::cpu()->r[1] = r1_8;
                return;
            }
            if (r1 != 0x20u) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return;
            }
        } else {
            u32 res_3 = r1 - 0x2eu;  // (from the original)
            u32 zf_3 = res_3 == 0;
            if (zf_3) {
                u32 r12_5 = arg0->byte_9;
                u32 r1_9 = (r12_5 >> 4) + ((u32(arg0->byte_a) & 0x3fu) << 4) + r2;  // (from the original)
                if (r1_9 > 0x3e8u) {  // (from the original)
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_9 = 0x3e8u;  // (from the original)
                    }
                    if (s32(r2) <= 0) {
                        r1_9 = 0u;
                    }
                }
                u32 r1_10 = r12_5 & ~0xf0u | r1_9 << 4;  // (from the original)
                u32 r2_3 = u32(arg0->byte_a) & ~0x3fu | (r1_9 & 0x3f0u) >> 4;  // (from the original)
                arg0->byte_9 = u8(r1_10);
                arg0->byte_a = u8(r2_3);
                guest::cpu()->r[1] = r1_10;
                return;
            }
            if (zf_3 || (res_3 >> 0x1f) != (((r1 ^ 0x2eu) & (r1 ^ res_3)) >> 0x1f)) {  // (from the original)
                if (r1 == 0x28u) {  // (from the original)
                    u32 r12_6 = arg0->byte_7;
                    u32 r1_11 = (r12_6 >> 3) + ((u32(arg0->byte_8) & 0x1fu) << 5) + r2;  // (from the original)
                    if (r1_11 > 0x3e8u) {  // (from the original)
                        if (r2 != 0 && s32(r2) >= 0) {
                            r1_11 = 0x3e8u;  // (from the original)
                        }
                        if (s32(r2) <= 0) {
                            r1_11 = 0u;
                        }
                    }
                    u32 r1_12 = r12_6 & ~0xf8u | r1_11 << 3;  // (from the original)
                    u32 r2_4 = u32(arg0->byte_8) & ~0x1fu | (r1_11 & 0x3e0u) >> 5;  // (from the original)
                    arg0->byte_7 = u8(r1_12);
                    arg0->byte_8 = u8(r2_4);
                    guest::cpu()->r[1] = r1_12;
                    return;
                }
                if (r1 != 0x2cu) {  // (from the original)
                    guest::cpu()->r[1] = r1;
                    return;
                }
                u32 r12_7 = arg0->byte_9;
                u32 r1_13 = (r12_7 & 7u) + r2;
                if (r1_13 > 7u) {
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_13 = 7u;
                    }
                    if (s32(r2) <= 0) {
                        r1_13 = 0u;
                    }
                }
                u32 r1_14 = r12_7 & ~7u | r1_13 & 7u;
                arg0->byte_9 = u8(r1_14);
                guest::cpu()->r[1] = r1_14;
                return;
            }
            if (r1 == 0x32u) {  // (from the original)
                u32 r12_8 = arg0->byte_b;
                u32 r1_15 = r2 + (r12_8 >> 1u & 7u);
                if (r1_15 > 7u) {
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_15 = 7u;
                    }
                    if (s32(r2) <= 0) {
                        r1_15 = 0u;
                    }
                }
                u32 r1_16 = r12_8 & ~0xeu | (r1_15 & 7u) << 1;  // (from the original)
                arg0->byte_b = u8(r1_16);
                guest::cpu()->r[1] = r1_16;
                return;
            }
            if (r1 == 0x38u) {  // (from the original)
                u32 r12_9 = arg0->byte_c;
                u32 r1_17 = r2 + (r12_9 >> 1u & 0x3fu);  // (from the original)
                if (r1_17 > 0x32u) {  // (from the original)
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_17 = 0x32u;  // (from the original)
                    }
                    if (s32(r2) <= 0) {
                        r1_17 = 0u;
                    }
                }
                u32 r1_18 = r12_9 & ~0x7eu | (r1_17 & 0x3fu) << 1;  // (from the original)
                arg0->byte_c = u8(r1_18);
                guest::cpu()->r[1] = r1_18;
                return;
            }
            guest::cpu()->r[1] = r1;
            return;
        }
        u32 r12_10 = arg0->byte_5;
        u32 r1_19 = (r12_10 >> 3) + ((u32(arg0->byte_6) & 1u) << 5) + r2;
        if (r1_19 > 0x3fu) {  // (from the original)
            if (r2 != 0 && s32(r2) >= 0) {
                r1_19 = 0x3fu;  // (from the original)
            }
            if (s32(r2) <= 0) {
                r1_19 = 0u;
            }
        }
        u32 r1_20 = r12_10 & ~0xf8u | r1_19 << 3;  // (from the original)
        u32 r2_5 = u32(arg0->byte_6) & ~1u | (r1_19 & 0x20u) >> 5;  // (from the original)
        arg0->byte_5 = u8(r1_20);
        arg0->byte_6 = u8(r2_5);
        guest::cpu()->r[1] = r1_20;
        return;
    }
    u32 r12_11 = arg0->byte_6;
    u32 r1_21 = r2 + (r12_11 >> 3u & 0xfu);  // (from the original)
    if (r1_21 > 0xau) {  // (from the original)
        if (r2 != 0 && s32(r2) >= 0) {
            r1_21 = 0xau;  // (from the original)
        }
        if (s32(r2) <= 0) {
            r1_21 = 0u;
        }
    }
    u32 r1_22 = r12_11 & ~0x78u | (r1_21 & 0xfu) << 3;  // (from the original)
    arg0->byte_6 = u8(r1_22);
    guest::cpu()->r[1] = r1_22;
}

}  // namespace d_006f432c
GUEST_EXPORT_FRAMED(0x006f432c, d_006f432c::f_006f432c, 0x30);  // pushes {r4, r5} first, as the original

// f_006f4f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f4f48 {

struct __attribute__((packed)) Local_006f4f48_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006f4f48_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_006f4f48_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_006f4f48_r0_3, word_8, 0x8);

struct __attribute__((packed)) Local_006f4f48_r4_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_006f4f48_r4_1, byte_26e, 0x26e);
GUEST_OFFSET(Local_006f4f48_r4_1, byte_26f, 0x26f);
GUEST_OFFSET(Local_006f4f48_r4_1, byte_270, 0x270);
GUEST_OFFSET(Local_006f4f48_r4_1, byte_271, 0x271);
GUEST_OFFSET(Local_006f4f48_r4_1, byte_272, 0x272);

struct __attribute__((packed)) Local_006f4f48_r5_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_006f4f48_r5_1, byte_26e, 0x26e);
GUEST_OFFSET(Local_006f4f48_r5_1, byte_26f, 0x26f);
GUEST_OFFSET(Local_006f4f48_r5_1, byte_270, 0x270);
GUEST_OFFSET(Local_006f4f48_r5_1, byte_271, 0x271);
GUEST_OFFSET(Local_006f4f48_r5_1, byte_272, 0x272);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002ff408, u32(u32)> call_002ff408;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;
inline constexpr guest::Function<0x005cc024, u32(u32)> normalize_flags_270;
inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> byte_270_low_bits_clear;
inline constexpr guest::Function<0x007595bc, u32(u32, u32, u32)> compare_time_stamp_to_stored;

struct __attribute__((packed)) Frame_006f4f48 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006f4f48, word_0, 0x0);
GUEST_OFFSET(Frame_006f4f48, word_4, 0x4);
GUEST_OFFSET(Frame_006f4f48, word_8, 0x8);
GUEST_SIZE(Frame_006f4f48, 0x10);

u32 f_006f4f48(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006f4f48> frame;  // the original's stack frame
    u32 r6 = r0;
    u32 r0_2 = byte_270_low_bits_clear(r0 + 0x1900u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0) {
        gptr<Local_006f4f48_r0_3> r0_3 = gptr<Local_006f4f48_r0_3>(return_constant_0xad56b0_(r0_2));
        u32 r1_2 = r0_3->word_0;
        u32 r2_2 = r0_3->word_4;
        frame->word_8 = r0_3->word_8;
        frame->word_0 = r1_2;
        frame->word_4 = r2_2;
        r0_2 = compare_time_stamp_to_stored(r6 + 0x1b80u, frame.at(0).addr(), r2_2);  // (from the original)
        r2 = guest::cpu()->r[2];
        if (!(r0_2 + 1u == 0)) {
            u32 r4 = 0u;
L_6f4f90:;
            u32 r1_4 = r4 + (r4 << 2);
            r0_2 = byte_270_low_bits_clear(r6 + (r1_4 << 7), r1_4, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            if (r0_2 == 0) {
                r4 += 1u;
                if (r4 >= 0xau) {  // (from the original)
                    return r0_2;
                }
                guest::preempt();
                goto L_6f4f90;
            }
            if (r4 + 1u != 0) {
                gptr<Local_006f4f48_r5_1> r5_1 = gptr<Local_006f4f48_r5_1>(r6 + 0x1900u);  // (from the original)
                gptr<Local_006f4f48_r4_1> r4_1 = gptr<Local_006f4f48_r4_1>(r6 + (r4 + (r4 << 2) << 7));
                copy_aligned_bytes(r4_1.addr(), r5_1.addr(), 0x31u);  // (from the original)
                copy_aligned_bytes(r4_1.addr() + 0x34u, r5_1.addr() + 0x34u, 0x31u);  // (from the original)
                copy_aligned_bytes(r4_1.addr() + 0x68u, r5_1.addr() + 0x68u, 0x42u);  // (from the original)
                copy_bytes_at_any_alignment(r4_1.addr() + 0xaau, r5_1.addr() + 0xaau, 0x182u);  // (from the original)
                copy_aligned_bytes(r4_1.addr() + 0x22cu, r5_1.addr() + 0x22cu, 0x42u);  // (from the original)
                r4_1->byte_26e = r5_1->byte_26e;
                r4_1->byte_26f = r5_1->byte_26f;
                r4_1->byte_270 = r5_1->byte_270;
                r4_1->byte_271 = r5_1->byte_271;
                r4_1->byte_272 = r5_1->byte_272;
                copy_item_002fc8e8(r4_1.addr() + 0x274u, r5_1.addr() + 0x274u);  // (from the original)
                copy_8_bytes_returning_destination(r4_1.addr() + 0x278u, r5_1.addr() + 0x278u);  // (from the original)
                normalize_flags_270(r4_1.addr());
                call_002ff408(r6 + 0x1900u);  // (from the original)
                r0_2 = clear_inner(r6 + 0x1b80u);  // (from the original)
            }
        }
    }
    return r0_2;
}

}  // namespace d_006f4f48
GUEST_EXPORT_FRAMED(0x006f4f48, d_006f4f48::f_006f4f48, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006f5090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5090 {

struct __attribute__((packed)) Object_006f5090_0 {
    u8 unknown_0[0x1b6e];  // (not used here)
    u8 byte_1b6e;
    u8 byte_1b6f;
    u8 byte_1b70;
    u8 byte_1b71;
    u8 byte_1b72;
};
GUEST_OFFSET(Object_006f5090_0, byte_1b6e, 0x1b6e);
GUEST_OFFSET(Object_006f5090_0, byte_1b6f, 0x1b6f);
GUEST_OFFSET(Object_006f5090_0, byte_1b70, 0x1b70);
GUEST_OFFSET(Object_006f5090_0, byte_1b71, 0x1b71);
GUEST_OFFSET(Object_006f5090_0, byte_1b72, 0x1b72);

struct __attribute__((packed)) Object_006f5090_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Object_006f5090_1, byte_26e, 0x26e);
GUEST_OFFSET(Object_006f5090_1, byte_26f, 0x26f);
GUEST_OFFSET(Object_006f5090_1, byte_270, 0x270);
GUEST_OFFSET(Object_006f5090_1, byte_271, 0x271);
GUEST_OFFSET(Object_006f5090_1, byte_272, 0x272);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;

void f_006f5090(gptr<Object_006f5090_0> arg0, gptr<Object_006f5090_1> arg1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = arg0.addr() + 0x1900u;  // (from the original)
    copy_aligned_bytes(r5_1, arg1.addr(), 0x31u, guest::cpu()->r[3]);  // (from the original)
    copy_aligned_bytes(r5_1 + 0x34u, arg1.addr() + 0x34u, 0x31u, guest::cpu()->r[3]);  // (from the original)
    copy_aligned_bytes(r5_1 + 0x68u, arg1.addr() + 0x68u, 0x42u, guest::cpu()->r[3]);  // (from the original)
    copy_bytes_at_any_alignment(r5_1 + 0xaau, arg1.addr() + 0xaau, 0x182u);  // (from the original)
    copy_aligned_bytes(r5_1 + 0x22cu, arg1.addr() + 0x22cu, 0x42u, guest::cpu()->r[3]);  // (from the original)
    arg0->byte_1b6e = arg1->byte_26e;
    arg0->byte_1b6f = arg1->byte_26f;
    arg0->byte_1b70 = arg1->byte_270;
    arg0->byte_1b71 = arg1->byte_271;
    arg0->byte_1b72 = arg1->byte_272;
    copy_item_002fc8e8(r5_1 + 0x274u, arg1.addr() + 0x274u);  // (from the original)
    frame.release();
    copy_8_bytes_returning_destination(r5_1 + 0x278u, arg1.addr() + 0x278u);
    return;  // (from the original)
}

}  // namespace d_006f5090
GUEST_EXPORT(0x006f5090, d_006f5090::f_006f5090);

// f_006f5130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5130 {

inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

void f_006f5130(u32 r0) {
    GameTime__set_time_stamp(r0 + 0x1b80u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_006f5130
GUEST_EXPORT(0x006f5130, d_006f5130::f_006f5130);

// f_006f5138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5138 {

struct __attribute__((packed)) Object_006f5138_2 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Object_006f5138_2, byte_26e, 0x26e);
GUEST_OFFSET(Object_006f5138_2, byte_26f, 0x26f);
GUEST_OFFSET(Object_006f5138_2, byte_270, 0x270);
GUEST_OFFSET(Object_006f5138_2, byte_271, 0x271);
GUEST_OFFSET(Object_006f5138_2, byte_272, 0x272);

struct __attribute__((packed)) Local_006f5138_r5_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_006f5138_r5_1, byte_26e, 0x26e);
GUEST_OFFSET(Local_006f5138_r5_1, byte_26f, 0x26f);
GUEST_OFFSET(Local_006f5138_r5_1, byte_270, 0x270);
GUEST_OFFSET(Local_006f5138_r5_1, byte_271, 0x271);
GUEST_OFFSET(Local_006f5138_r5_1, byte_272, 0x272);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;
inline constexpr guest::Function<0x005cc024, u32(u32, u32)> normalize_flags_270;

void f_006f5138(u32 r0, u32 r1, gptr<Object_006f5138_2> arg2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006f5138_r5_1> r5_1 = gptr<Local_006f5138_r5_1>(r0 + (r1 + (r1 << 2) << 7));
    copy_aligned_bytes(r5_1.addr(), arg2.addr(), 0x31u, r3);  // (from the original)
    copy_aligned_bytes(r5_1.addr() + 0x34u, arg2.addr() + 0x34u, 0x31u, guest::cpu()->r[3]);  // (from the original)
    copy_aligned_bytes(r5_1.addr() + 0x68u, arg2.addr() + 0x68u, 0x42u, guest::cpu()->r[3]);  // (from the original)
    copy_bytes_at_any_alignment(r5_1.addr() + 0xaau, arg2.addr() + 0xaau, 0x182u);  // (from the original)
    copy_aligned_bytes(r5_1.addr() + 0x22cu, arg2.addr() + 0x22cu, 0x42u, guest::cpu()->r[3]);  // (from the original)
    r5_1->byte_26e = arg2->byte_26e;
    r5_1->byte_26f = arg2->byte_26f;
    r5_1->byte_270 = arg2->byte_270;
    r5_1->byte_271 = arg2->byte_271;
    r5_1->byte_272 = arg2->byte_272;
    copy_item_002fc8e8(r5_1.addr() + 0x274u, arg2.addr() + 0x274u);  // (from the original)
    copy_8_bytes_returning_destination(r5_1.addr() + 0x278u, arg2.addr() + 0x278u);  // (from the original)
    if (r3 == 0) {
        frame.release();
        normalize_flags_270(r5_1.addr(), guest::cpu()->r[1]);
        return;
    }
}

}  // namespace d_006f5138
GUEST_EXPORT(0x006f5138, d_006f5138::f_006f5138);

// f_006f51f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f51f8 {


u32 f_006f51f8(u32 r0, u32 r1) {
    return r0 + r1 * 0x280u;  // (from the original)
}

}  // namespace d_006f51f8
GUEST_EXPORT(0x006f51f8, d_006f51f8::f_006f51f8);

// f_006f5204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5204 {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;
inline constexpr guest::Function<0x00303cdc, u32(u32, u32)> clear_inner;

void f_006f5204(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        call_002ff408(r5 + r4 * 0x280u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    call_002ff408(r5 + 0x1900u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    clear_inner(r5 + 0x1b80u, guest::cpu()->r[1]);  // (from the original)
    return;
}

}  // namespace d_006f5204
GUEST_EXPORT(0x006f5204, d_006f5204::f_006f5204);

// f_006f536c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f536c {

inline constexpr guest::Function<0x007234f8, u32(u32, u32)> call_007234f8;
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> sub_is_ready;

u32 f_006f536c(u32 r0) {
    u32 r0_2 = 0;
    u32 r5 = r0 + 0xd5cu;  // (from the original)
    u32 r4 = *gptr<s8>(r0 + 0x428u);  // (from the original)
    u32 r0_1 = sub_is_ready(r5, 0x428u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
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
GUEST_OFFSET(Object_006f56bc_0, byte_40e, 0x40e);
GUEST_OFFSET(Object_006f56bc_0, byte_428, 0x428);
GUEST_OFFSET(Object_006f56bc_0, byte_429, 0x429);


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
GUEST_OFFSET(Object_006f56d4_0, byte_410, 0x410);
GUEST_OFFSET(Object_006f56d4_0, word_e30, 0xe30);


void f_006f56d4(gptr<Object_006f56d4_0> arg0) {
    arg0->word_e30 = arg0->word_e30 | 8u;
    arg0->byte_410 = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_006f56d4
GUEST_EXPORT(0x006f56d4, d_006f56d4::f_006f56d4);

// f_006f58e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f58e0 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

void f_006f58e0(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(r0);
    frame.release();
    call_00569e6c(r0_1, r0 + 0x26cu, 1u);
    return;  // (from the original)
}

}  // namespace d_006f58e0
GUEST_EXPORT(0x006f58e0, d_006f58e0::f_006f58e0);

// f_006f5b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5b24 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;
inline constexpr guest::Function<0x001323b4, u32(u32)> call_001323b4;

void f_006f5b24(u32 r0) {
    call_00132364(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_001323b4(r0 + 0x26cu);  // (from the original)
}

}  // namespace d_006f5b24
GUEST_EXPORT_FRAMED(0x006f5b24, d_006f5b24::f_006f5b24, 0x4010);  // pushes {r4, lr} first, as the original

// f_006f5c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f5c7c {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> load_layout_archive;

u32 f_006f5c7c(u32 r0) {
    return load_layout_archive(r0 + 0x24u, 0x6f5c88u);  // (from the original)
}

}  // namespace d_006f5c7c
GUEST_EXPORT(0x006f5c7c, d_006f5c7c::f_006f5c7c);

// f_006f6810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f6810 {

struct __attribute__((packed)) Object_006f6810_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_006f6810_1, float_0, 0x0);
GUEST_OFFSET(Object_006f6810_1, float_4, 0x4);
GUEST_OFFSET(Object_006f6810_1, float_8, 0x8);

struct __attribute__((packed)) Object_006f6810_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_006f6810_2, float_0, 0x0);
GUEST_OFFSET(Object_006f6810_2, float_4, 0x4);
GUEST_OFFSET(Object_006f6810_2, float_8, 0x8);

struct __attribute__((packed)) Object_006f6810_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_006f6810_3, float_0, 0x0);
GUEST_OFFSET(Object_006f6810_3, float_4, 0x4);
GUEST_OFFSET(Object_006f6810_3, float_8, 0x8);

inline constexpr guest::Function<0x0056a378, u32(u32, u32)> normalize;

struct __attribute__((packed)) Frame_006f6810 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Frame_006f6810, float_0, 0x0);
GUEST_OFFSET(Frame_006f6810, float_4, 0x4);
GUEST_OFFSET(Frame_006f6810, float_8, 0x8);
GUEST_SIZE(Frame_006f6810, 0xc);

u32 f_006f6810(gptr<Float3> arg0, gptr<Object_006f6810_1> arg1, gptr<Object_006f6810_2> arg2, gptr<Object_006f6810_3> arg3) {
    guest::StackFrameOf<Frame_006f6810> frame;  // the original's stack frame
    u32 r0_1 = frame.at(0).addr();
    float S0_1 = arg2->float_0;
    float S1_1 = arg2->float_4;
    float S2_1 = arg2->float_8;
    float S3_1 = S0_1 - arg1->float_0;
    float S5_1 = S2_1 - arg1->float_8;
    float S4_1 = S1_1 - arg1->float_4;
    float S0_2 = arg3->float_0 - S0_1;
    float S2_2 = arg3->float_8 - S2_1;
    float S1_2 = arg3->float_4 - S1_1;
    frame->float_0 = S4_1 * S2_2 - S5_1 * S1_2;
    frame->float_4 = S5_1 * S0_2 - S3_1 * S2_2;
    frame->float_8 = S3_1 * S1_2 - S4_1 * S0_2;
    normalize(r0_1, arg1.addr());
    float S1_3 = ((arg0->v[0] - arg1->float_0) * frame->float_0 + (arg0->v[2] - arg1->float_8) * frame->float_8) / frame->float_4;
    float S0_3 = arg1->float_4 - S1_3;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return r0_1;
}

}  // namespace d_006f6810
GUEST_EXPORT_FRAMED(0x006f6810, d_006f6810::f_006f6810, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006f7d34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7d34 {

struct __attribute__((packed)) Object_006f7d34_0 {
    u8 unknown_0[0x8];  // (not used here)
    float float_8;
    u32 word_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Object_006f7d34_0, float_8, 0x8);
GUEST_OFFSET(Object_006f7d34_0, word_c, 0xc);
GUEST_OFFSET(Object_006f7d34_0, float_10, 0x10);
GUEST_OFFSET(Object_006f7d34_0, float_14, 0x14);
GUEST_OFFSET(Object_006f7d34_0, float_18, 0x18);
GUEST_OFFSET(Object_006f7d34_0, float_1c, 0x1c);

struct __attribute__((packed)) Object_006f7d34_1 {
    float float_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(Object_006f7d34_1, float_0, 0x0);
GUEST_OFFSET(Object_006f7d34_1, word_4, 0x4);
GUEST_OFFSET(Object_006f7d34_1, float_8, 0x8);


void f_006f7d34(gptr<Object_006f7d34_0> arg0, gptr<Object_006f7d34_1> arg1, float S0, float S1, float S2) {
    float S3_1 = 0.5f;
    float S0_1 = S0 * S3_1;
    float S1_1 = S1 * S3_1;
    arg0->float_8 = arg1->float_0 - S0_1;
    arg0->word_c = arg1->word_4;
    arg0->float_10 = arg1->float_8 - S1_1;
    arg0->float_14 = arg1->float_0 + S0_1;
    arg0->float_18 = std::bit_cast<float>(arg1->word_4) + S2;
    float S0_2 = arg1->float_8 + S1_1;
    arg0->float_1c = S0_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006f7d34
GUEST_EXPORT(0x006f7d34, d_006f7d34::f_006f7d34);

// f_006f7dc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7dc0 {

inline constexpr u32 vtable_collision__AABB = 0x0090b154u;

void collision__AABB__AABB(gptr<collision__AABB> arg0) {
    arg0->byte_4 = 1;
    arg0->word_0 = vtable_collision__AABB;
    guest::cpu()->r[1] = vtable_collision__AABB;
}

}  // namespace d_006f7dc0
GUEST_EXPORT(0x006f7dc0, d_006f7dc0::collision__AABB__AABB);

// f_006f7e04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7e04 {

struct __attribute__((packed)) Object_006f7e04_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_006f7e04_0, word_c, 0xc);


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
GUEST_OFFSET(Object_006f7e40_0, word_4, 0x4);
GUEST_OFFSET(Object_006f7e40_0, word_8, 0x8);
GUEST_OFFSET(Object_006f7e40_0, word_c, 0xc);


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

inline constexpr u32 vtable_collision__World__Body = 0x0090b168u;

void collision__World__Body__Body_006f7e4c(gptr<collision__World__Body> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_4 = r1;
    arg0->word_0 = vtable_collision__World__Body;
    arg0->word_8 = r2;
    arg0->word_c = r3;
}

}  // namespace d_006f7e4c
GUEST_EXPORT(0x006f7e4c, d_006f7e4c::collision__World__Body__Body_006f7e4c);

// f_006f7e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f7e64 {

inline constexpr u32 vtable_collision__World__Body = 0x0090b168u;

void collision__World__Body__Body_006f7e64(gptr<collision__World__Body> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = vtable_collision__World__Body;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_006f7e64
GUEST_EXPORT(0x006f7e64, d_006f7e64::collision__World__Body__Body_006f7e64);

// f_006f8054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8054 {

struct __attribute__((packed)) Object_006f8054_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_006f8054_0, word_4, 0x4);


void f_006f8054(gptr<Object_006f8054_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0u;
    u32 r3 = r1;
    u32 r2 = r1;
    arg0->word_4 = r1;
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u32>((r0 + (r3 << 2)) + 8u) = r1;
        r3 = r3_1 + 1u;
        *gptr<u32>((r0 + (r3_1 << 2)) + 8u) = r1;
        guest::preempt();
    } while (s32(r2) < 0x64);  // (from the original)
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
GUEST_OFFSET(Object_006f8094_0, word_0, 0x0);
GUEST_OFFSET(Object_006f8094_0, word_4, 0x4);


void f_006f8094(gptr<Object_006f8094_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0u;
    arg0->word_0 = r1;
    u32 r3 = r1;
    u32 r2 = r1;
    arg0->word_4 = r1;
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u32>((r0 + (r3 << 2)) + 8u) = r1;
        r3 = r3_1 + 1u;
        *gptr<u32>((r0 + (r3_1 << 2)) + 8u) = r1;
        guest::preempt();
    } while (s32(r2) < 0x64);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006f8094
GUEST_EXPORT_FRAMED(0x006f8094, d_006f8094::f_006f8094, 0x10);  // pushes {r4} first, as the original

// f_006f80dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f80dc {

struct __attribute__((packed)) Object_006f80dc_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_006f80dc_1, float_0, 0x0);
GUEST_OFFSET(Object_006f80dc_1, float_4, 0x4);
GUEST_OFFSET(Object_006f80dc_1, float_8, 0x8);


u32 collision__Sphere__virtual_2(gptr<collision__Sphere> arg0, gptr<Object_006f80dc_1> arg1) {
    arg0->float_8 = arg0->float_8 + arg1->float_0;
    arg0->float_c = arg0->float_c + arg1->float_4;
    float S1_1 = arg1->float_8;
    float S0_1 = arg0->float_10 + S1_1;
    arg0->float_10 = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return arg0.addr() + 8u;
}

}  // namespace d_006f80dc
GUEST_EXPORT(0x006f80dc, d_006f80dc::collision__Sphere__virtual_2);

// f_006f8114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8114 {

struct __attribute__((packed)) Object_006f8114_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    float float_14;
};
GUEST_OFFSET(Object_006f8114_0, word_8, 0x8);
GUEST_OFFSET(Object_006f8114_0, word_c, 0xc);
GUEST_OFFSET(Object_006f8114_0, word_10, 0x10);
GUEST_OFFSET(Object_006f8114_0, float_14, 0x14);

struct __attribute__((packed)) Object_006f8114_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f8114_1, word_0, 0x0);
GUEST_OFFSET(Object_006f8114_1, word_4, 0x4);
GUEST_OFFSET(Object_006f8114_1, word_8, 0x8);


void f_006f8114(gptr<Object_006f8114_0> arg0, gptr<Object_006f8114_1> arg1, float S0) {
    arg0->word_8 = arg1->word_0;
    arg0->word_c = arg1->word_4;
    u32 r1_1 = arg1->word_8;
    arg0->word_10 = r1_1;
    arg0->float_14 = S0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006f8114
GUEST_EXPORT(0x006f8114, d_006f8114::f_006f8114);

// f_006f8134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8134 {

inline constexpr u32 vtable_collision__Sphere = 0x0090b178u;

void collision__Sphere__Sphere_006f8134(gptr<collision__Sphere> arg0, gptr<Float3> arg1, float S0) {
    arg0->byte_4 = 0;
    arg0->word_0 = vtable_collision__Sphere;
    float S1_1 = arg1->v[0];
    float S2_1 = arg1->v[1];
    float S3_1 = arg1->v[2];
    arg0->float_8 = S1_1;
    arg0->float_c = S2_1;
    arg0->float_10 = S3_1;
    arg0->float_14 = S0;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006f8134
GUEST_EXPORT(0x006f8134, d_006f8134::collision__Sphere__Sphere_006f8134);

// f_006f81f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f81f0 {

struct __attribute__((packed)) Object_006f81f0_0 {
    u8 unknown_0[0x8];  // (not used here)
    float float_8;
    float float_c;
    float float_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    float float_20;
};
GUEST_OFFSET(Object_006f81f0_0, float_8, 0x8);
GUEST_OFFSET(Object_006f81f0_0, float_c, 0xc);
GUEST_OFFSET(Object_006f81f0_0, float_10, 0x10);
GUEST_OFFSET(Object_006f81f0_0, word_14, 0x14);
GUEST_OFFSET(Object_006f81f0_0, word_18, 0x18);
GUEST_OFFSET(Object_006f81f0_0, word_1c, 0x1c);
GUEST_OFFSET(Object_006f81f0_0, float_20, 0x20);

struct __attribute__((packed)) Object_006f81f0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006f81f0_2, word_0, 0x0);
GUEST_OFFSET(Object_006f81f0_2, word_4, 0x4);
GUEST_OFFSET(Object_006f81f0_2, word_8, 0x8);


void f_006f81f0(gptr<Object_006f81f0_0> arg0, gptr<Float4> arg1, gptr<Object_006f81f0_2> arg2, float S0) {
    arg0->float_8 = arg1->v[0];
    arg0->float_c = arg1->v[1];
    arg0->float_10 = arg1->v[2];
    arg0->word_14 = arg2->word_0;
    arg0->word_18 = arg2->word_4;
    arg0->word_1c = arg2->word_8;
    arg0->float_20 = S0;
}

}  // namespace d_006f81f0
GUEST_EXPORT(0x006f81f0, d_006f81f0::f_006f81f0);

// f_006f8228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8228 {

inline constexpr u32 vtable_collision__Capsule = 0x0090b18cu;

void collision__Capsule__Capsule(gptr<collision__Capsule> arg0) {
    arg0->byte_4 = 3;
    float S0_1 = 0.0f;
    arg0->word_0 = vtable_collision__Capsule;
    arg0->float_20 = S0_1;
}

}  // namespace d_006f8228
GUEST_EXPORT(0x006f8228, d_006f8228::collision__Capsule__Capsule);

// f_006f8368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8368 {

struct __attribute__((packed)) Object_006f8368_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_006f8368_1, float_0, 0x0);
GUEST_OFFSET(Object_006f8368_1, float_4, 0x4);
GUEST_OFFSET(Object_006f8368_1, float_8, 0x8);


u32 collision__Cylinder__virtual_2(gptr<collision__Cylinder> arg0, gptr<Object_006f8368_1> arg1) {
    arg0->float_8 = arg0->float_8 + arg1->float_0;
    arg0->float_c = arg0->float_c + arg1->float_4;
    float S1_1 = arg1->float_8;
    float S0_1 = arg0->float_10 + S1_1;
    arg0->float_10 = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return arg0.addr() + 8u;
}

}  // namespace d_006f8368
GUEST_EXPORT(0x006f8368, d_006f8368::collision__Cylinder__virtual_2);

// f_006f83a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f83a8 {

struct __attribute__((packed)) Object_006f83a8_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    float float_14;
    float float_18;
};
GUEST_OFFSET(Object_006f83a8_0, word_8, 0x8);
GUEST_OFFSET(Object_006f83a8_0, word_c, 0xc);
GUEST_OFFSET(Object_006f83a8_0, word_10, 0x10);
GUEST_OFFSET(Object_006f83a8_0, float_14, 0x14);
GUEST_OFFSET(Object_006f83a8_0, float_18, 0x18);


u32 f_006f83a8(gptr<Object_006f83a8_0> arg0, gptr<GridRect> arg1, float S0, float S1) {
    arg0->word_8 = u32(arg1->min.x);
    arg0->word_c = u32(arg1->min.y);
    u32 r1_1 = u32(arg1->max.x);
    arg0->word_10 = r1_1;
    arg0->float_14 = S0;
    arg0->float_18 = S1;
    guest::cpu()->r[1] = r1_1;
    return (arg0.addr() + 0x10u) + 4u;  // (from the original)
}

}  // namespace d_006f83a8
GUEST_EXPORT(0x006f83a8, d_006f83a8::f_006f83a8);

// f_006f83cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f83cc {

inline constexpr u32 vtable_collision__Cylinder = 0x0090b1a0u;

void collision__Cylinder__Cylinder_006f83cc(gptr<collision__Cylinder> arg0, gptr<Float3> arg1, float S0, float S1) {
    arg0->byte_4 = 2;
    arg0->word_0 = vtable_collision__Cylinder;
    float S3_1 = arg1->v[1];
    float S4_1 = arg1->v[2];
    arg0->float_8 = std::bit_cast<float>(u32(std::bit_cast<u32>(arg1->v[0])));
    arg0->float_c = S3_1;
    arg0->float_10 = S4_1;
    arg0->float_14 = S0;
    arg0->float_18 = S1;
}

}  // namespace d_006f83cc
GUEST_EXPORT(0x006f83cc, d_006f83cc::collision__Cylinder__Cylinder_006f83cc);

// f_006f83f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f83f8 {

inline constexpr u32 vtable_collision__Cylinder = 0x0090b1a0u;

void collision__Cylinder__Cylinder_006f83f8(gptr<collision__Cylinder> arg0) {
    arg0->byte_4 = 2;
    float S0_1 = 0.0f;
    arg0->word_0 = vtable_collision__Cylinder;
    arg0->float_14 = S0_1;
    arg0->float_18 = S0_1;
    guest::cpu()->r[1] = vtable_collision__Cylinder;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_006f83f8
GUEST_EXPORT(0x006f83f8, d_006f83f8::collision__Cylinder__Cylinder_006f83f8);

// f_006f8540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8540 {

struct __attribute__((packed)) Object_006f8540_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_006f8540_0, word_0, 0x0);


struct __attribute__((packed)) Frame_006f8540 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006f8540, half_0, 0x0);
GUEST_SIZE(Frame_006f8540, 0x4);

u32 f_006f8540(gptr<Object_006f8540_0> arg0) {
    guest::StackFrameOf<Frame_006f8540> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_0 << 0xe;  // (from the original)
    frame->half_0 = u16(r0_1);
    return uxth(r0_1);
}

}  // namespace d_006f8540
GUEST_EXPORT(0x006f8540, d_006f8540::f_006f8540);

// f_006f8c24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f8c24 {

inline constexpr u32 global_0095276c_address = 0x0095276cu;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x00317ee0, u32(u32, u32)> record_4648_address;
inline constexpr guest::Function<0x005b48a4, u32(u32)> read_u8_0x00957326_;
inline constexpr guest::Function<0x006cbb08, u32(u32)> call_006cbb08;
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> list_position_of_mode;

u32 f_006f8c24(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = list_position_of_mode(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 - 2u < 0x18u) {  // (from the original)
        u32 r4_1 = *gptr<u8>(r0_1 + global_0095276c_address);
        u32 r0_2 = get_data_base(r0_1);
        frame.release();
        return record_4648_address(r0_2 + 0x5d880u, r4_1);  // (from the original)
    }
    u32 r0_4 = table_entry_has_all_bits(0x4000u, r0);  // (from the original)
    if (r0_4 == 0) {
        return 0u;
    }
    u32 r0_5 = read_u8_0x00957326_(r0_4);
    u32 r0_6 = call_006cbb08(r0_5);
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
GUEST_OFFSET(Local_006f8eb8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006f8eb8_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006f8eb8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f8eb8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006f8eb8_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;

void f_006f8eb8(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006f8eb8_ea_1> ea_1 = gptr<Local_006f8eb8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = 0x12;  // (from the original)
    ea_1->word_4 = 0xa;  // (from the original)
    gptr<Local_006f8eb8_ea_2> ea_2 = gptr<Local_006f8eb8_ea_2>(frame.at(8).addr());
    ea_2->word_0 = 0x12;  // (from the original)
    ea_2->word_4 = 0xb;  // (from the original)
    construct_word_quad_from_pairs(r0, frame.at(0).addr(), frame.at(8).addr());
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
GUEST_OFFSET(Local_006f9230_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_006f9230_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_006f9230_r0_1, word_8, 0x8);

struct __attribute__((packed)) Local_006f9230_r1_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006f9230_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_006f9230_r1_1, float_4, 0x4);

struct __attribute__((packed)) Local_006f9230_r1_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006f9230_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_006f9230_r1_2, float_4, 0x4);

struct __attribute__((packed)) Local_006f9230_r1_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006f9230_r1_3, float_0, 0x0);
GUEST_OFFSET(Local_006f9230_r1_3, float_4, 0x4);

struct __attribute__((packed)) Local_006f9230_r1_4 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006f9230_r1_4, float_0, 0x0);
GUEST_OFFSET(Local_006f9230_r1_4, float_4, 0x4);

struct __attribute__((packed)) Local_006f9230_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9230_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_006f9230_r3_1, word_4, 0x4);

inline constexpr guest::Function<0x006c8760, u32(u32, u32, u32, u32)> call_006c8760;

struct __attribute__((packed)) Frame_006f9230 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    u8 unknown_18[0x8];  // (not read or written by name)
    float float_20;
    float float_24;
    float float_28;
    float float_2c;
    u8 unknown_30[0x8];  // (not read or written by name)
    float float_38;
    float float_3c;
    float float_40;
    float float_44;
    float float_48;
    float float_4c;
    u8 unknown_50[0x8];  // (not read or written by name)
    float float_58;
    u8 unknown_5c[0x8];  // (not read or written by name)
    float float_64;
    float float_68;
    u8 unknown_6c[0x8];  // (not read or written by name)
    u32 word_74;
    u8 unknown_78[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006f9230, float_0, 0x0);
GUEST_OFFSET(Frame_006f9230, float_4, 0x4);
GUEST_OFFSET(Frame_006f9230, float_8, 0x8);
GUEST_OFFSET(Frame_006f9230, float_c, 0xc);
GUEST_OFFSET(Frame_006f9230, float_10, 0x10);
GUEST_OFFSET(Frame_006f9230, float_14, 0x14);
GUEST_OFFSET(Frame_006f9230, float_20, 0x20);
GUEST_OFFSET(Frame_006f9230, float_24, 0x24);
GUEST_OFFSET(Frame_006f9230, float_28, 0x28);
GUEST_OFFSET(Frame_006f9230, float_2c, 0x2c);
GUEST_OFFSET(Frame_006f9230, float_38, 0x38);
GUEST_OFFSET(Frame_006f9230, float_3c, 0x3c);
GUEST_OFFSET(Frame_006f9230, float_40, 0x40);
GUEST_OFFSET(Frame_006f9230, float_44, 0x44);
GUEST_OFFSET(Frame_006f9230, float_48, 0x48);
GUEST_OFFSET(Frame_006f9230, float_4c, 0x4c);
GUEST_OFFSET(Frame_006f9230, float_58, 0x58);
GUEST_OFFSET(Frame_006f9230, float_64, 0x64);
GUEST_OFFSET(Frame_006f9230, float_68, 0x68);
GUEST_OFFSET(Frame_006f9230, word_74, 0x74);
GUEST_SIZE(Frame_006f9230, 0x7c);

u32 f_006f9230(gptr<Float3> arg0, float S0) {
    guest::StackFrameOf<Frame_006f9230> frame;  // the original's stack frame
    float S2 = arg0->v[0];
    gptr<Local_006f9230_r1_1> r1_1 = gptr<Local_006f9230_r1_1>(frame.at(0x18).addr());  // (from the original)
    float S4_1 = S0 * 0.70710677f;
    frame->float_0 = S2;
    float S1 = arg0->v[1];
    float S9 = S2 + S0;
    frame->float_4 = S1;
    float S3 = arg0->v[2];
    float S7 = S2 - S0;
    frame->float_8 = S3;
    float S10 = S3 + S0;
    float S8 = S3 - S0;
    float S5 = S3 + S4_1;
    S0 = S2 + S4_1;
    frame->float_c = S2;
    frame->float_10 = S1;
    float S6 = S3 - S4_1;
    float S4 = S2 - S4_1;
    u32 r4 = 0u;
    frame->float_14 = S10;
    u32 r5 = frame.at(0).addr();
    frame->float_20 = S5;
    frame->float_24 = S9;
    r1_1->float_0 = S0;
    r1_1->float_4 = S1;
    gptr<Local_006f9230_r1_2> r1_2 = gptr<Local_006f9230_r1_2>(frame.at(0x30).addr());  // (from the original)
    frame->float_28 = S1;
    frame->float_2c = S3;
    frame->float_38 = S6;
    frame->float_3c = S2;
    r1_2->float_0 = S0;
    r1_2->float_4 = S1;
    gptr<Local_006f9230_r1_3> r1_3 = gptr<Local_006f9230_r1_3>(frame.at(0x5c).addr());  // (from the original)
    frame->float_40 = S1;
    frame->float_44 = S8;
    frame->float_48 = S4;
    frame->float_4c = S1;
    frame->float_58 = S1;
    frame->float_64 = S1;
    frame->float_68 = S5;
    r1_3->float_0 = S3;
    r1_3->float_4 = S4;
    gptr<Local_006f9230_r1_4> r1_4 = gptr<Local_006f9230_r1_4>(frame.at(0x50).addr());  // (from the original)
    r1_4->float_0 = S6;
    r1_4->float_4 = S7;
    do {
        gptr<Local_006f9230_r3_1> r3_1 = gptr<Local_006f9230_r3_1>(frame.at(0x6c).addr());  // (from the original)
        gptr<Local_006f9230_r0_1> r0_1 = gptr<Local_006f9230_r0_1>(r5 + r4 * 0xcu);  // (from the original)
        u32 r1_5 = r0_1->word_0;
        u32 r2_1 = r0_1->word_4;
        frame->word_74 = r0_1->word_8;
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
GUEST_OFFSET(Local_006f9330_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006f9330_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006f9330_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006f9330_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_006f9330_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006f9330_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_006f9330_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006f9330_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_006f9330_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_006f9330_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_006f9330_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_006f9330_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_006f9330_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9330_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_006f9330_ea_7, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32)> read_table_9b4a24;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0060d12c, u32(u32, u32)> call_0060d12c;
inline constexpr guest::Function<0x0060d240, u32(u32)> Cell__clear;
inline constexpr guest::Function<0x0060d264, u32(u32, u32, u32, u32)> call_0060d264;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x007667a8, u32(u32, u32, u32, u32)> call_007667a8;

struct __attribute__((packed)) Frame_006f9330 {
    u8 unknown_0[0x30];  // (not read or written by name)
    u8 byte_30;
    u8 unknown_31[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006f9330, byte_30, 0x30);
GUEST_SIZE(Frame_006f9330, 0x38);

u32 f_006f9330(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_006f9330> frame;  // the original's stack frame
    gptr<Local_006f9330_ea_1> ea_1 = gptr<Local_006f9330_ea_1>(frame.at(0x20).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    u32 r0_1 = read_table_9b4a24(1u, r0);
    u32 r6_1 = frame.at(0x20).addr();  // (from the original)
    if (r0_1 != 0) {
        block_of_cell(frame.at(0x10).addr(), r6_1);  // (from the original)
        gptr<Local_006f9330_ea_2> ea_2 = gptr<Local_006f9330_ea_2>(frame.at(0x10).addr());  // (from the original)
        u32 r0_3 = GridMap__large_cell_at(r0_1, ea_2->word_0, ea_2->word_4);
        if (r0_3 != 0) {
            GridPoint__set_tile_in_block(frame.at(0x18).addr(), r6_1);  // (from the original)
            Cell__clear(frame.at(0x28).addr());  // (from the original)
            gptr<Local_006f9330_ea_3> ea_3 = gptr<Local_006f9330_ea_3>(frame.at(0x18).addr());  // (from the original)
            call_007667a8(r0_3, frame.at(0x28).addr(), ea_3->word_0, ea_3->word_4);  // (from the original)
            call_0060d12c(frame.at(0x28).addr(), 0x20u);  // (from the original)
            gptr<Local_006f9330_ea_4> ea_4 = gptr<Local_006f9330_ea_4>(frame.at(0x18).addr());  // (from the original)
            call_0060d264(r0_3, ea_4->word_0, ea_4->word_4, frame.at(0x28).addr());  // (from the original)
        }
    }
    u32 r0_7 = read_table_9b4a24(1u, guest::cpu()->r[1]);
    if (r0_7 != 0) {
        block_of_cell(frame.at(8).addr(), frame.at(0x20).addr());  // (from the original)
        gptr<Local_006f9330_ea_5> ea_5 = gptr<Local_006f9330_ea_5>(frame.at(8).addr());
        u32 r0_9 = GridMap__large_cell_at(r0_7, ea_5->word_0, ea_5->word_4);
        if (r0_9 != 0) {
            GridPoint__set_tile_in_block(frame.at(0x10).addr(), frame.at(0x20).addr());  // (from the original)
            Cell__clear(frame.at(0x28).addr());  // (from the original)
            gptr<Local_006f9330_ea_6> ea_6 = gptr<Local_006f9330_ea_6>(frame.at(0x10).addr());  // (from the original)
            call_007667a8(r0_9, frame.at(0x28).addr(), ea_6->word_0, ea_6->word_4);  // (from the original)
            frame->byte_30 = 2;
            gptr<Local_006f9330_ea_7> ea_7 = gptr<Local_006f9330_ea_7>(frame.at(0x10).addr());  // (from the original)
            call_0060d264(r0_9, ea_7->word_0, ea_7->word_4, frame.at(0x28).addr());  // (from the original)
        }
    }
    return frame.at(0x20).addr();  // (from the original)
}

}  // namespace d_006f9330
GUEST_EXPORT_FRAMED(0x006f9330, d_006f9330::f_006f9330, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006f9494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9494 {

inline constexpr u32 global_00952718_address = 0x00952718u;

u32 f_006f9494(u32 r0) {
    u32 r0_1 = *gptr<u8>(r0 + global_00952718_address);
    guest::cpu()->r[1] = global_00952718_address;
    return r0_1;
}

}  // namespace d_006f9494
GUEST_EXPORT(0x006f9494, d_006f9494::f_006f9494);

// f_006f94a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f94a4 {

struct __attribute__((packed)) Local_006f94a4_r0_2 {
    u16 half_0;
};
GUEST_OFFSET(Local_006f94a4_r0_2, half_0, 0x0);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x006f973c, u32(u32)> call_006f973c;
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> tile_address_0075db98;

struct __attribute__((packed)) Frame_006f94a4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006f94a4, word_0, 0x0);
GUEST_OFFSET(Frame_006f94a4, word_4, 0x4);
GUEST_OFFSET(Frame_006f94a4, word_8, 0x8);
GUEST_SIZE(Frame_006f94a4, 0x10);

void f_006f94a4(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006f94a4> frame;  // the original's stack frame
    if (r0 == 0) {
        return;
    }
    u32 r6 = r0;
    u32 r0_1 = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    u32 r7 = r0_1 + 0x53480u;  // (from the original)
    u32 r5 = 0u;
    do {
        u32 r4 = 0u;
        do {
            gptr<Local_006f94a4_r0_2> r0_2 = gptr<Local_006f94a4_r0_2>(tile_address_0075db98(r7, r4, r5));
            if (r0_2->half_0 == 0x9bu || r0_2->half_0 == 0xa5u) {  // (from the original)
                call_006f973c(frame.at(0).addr());
                *gptr<u32>(r6) = frame->word_0;
                *gptr<u32>(r6 + 4u) = frame->word_4;
                *gptr<u32>(r6 + 8u) = frame->word_8;
                return;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 7u);
        r5 += 1u;
        guest::preempt();
    } while (r5 < 6u);
}

}  // namespace d_006f94a4
GUEST_EXPORT_FRAMED(0x006f94a4, d_006f94a4::f_006f94a4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006f9550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9550 {

inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;

u32 f_006f9550(u32 r0) {
    u32 r0_1 = get_save_data(r0);
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
GUEST_OFFSET(Local_006f9580_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006f9580_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006f9580_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9580_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006f9580_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_006f9580_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9580_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006f9580_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_006f9580_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f9580_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006f9580_ea_4, word_4, 0x4);

inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;

void f_006f9580(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = get_data_base(r0);
    if (*gptr<u8>(r0_1 + 0x53400u) != 0) {  // (from the original)
        gptr<Local_006f9580_ea_1> ea_1 = gptr<Local_006f9580_ea_1>(frame.at(0).addr());
        ea_1->word_0 = 6;
        ea_1->word_4 = 9;
        gptr<Local_006f9580_ea_2> ea_2 = gptr<Local_006f9580_ea_2>(frame.at(8).addr());
        ea_2->word_0 = 6;
        ea_2->word_4 = 0xa;  // (from the original)
        construct_word_quad_from_pairs(r0, frame.at(0).addr(), frame.at(8).addr());
        return;
    }
    gptr<Local_006f9580_ea_3> ea_3 = gptr<Local_006f9580_ea_3>(frame.at(0).addr());
    ea_3->word_0 = 0x3a;  // (from the original)
    ea_3->word_4 = 9;
    gptr<Local_006f9580_ea_4> ea_4 = gptr<Local_006f9580_ea_4>(frame.at(8).addr());
    ea_4->word_0 = 0x3a;  // (from the original)
    ea_4->word_4 = 0xa;  // (from the original)
    construct_word_quad_from_pairs(r0, frame.at(0).addr(), frame.at(8).addr());
}

}  // namespace d_006f9580
GUEST_EXPORT_FRAMED(0x006f9580, d_006f9580::f_006f9580, 0x4010);  // pushes {r4, lr} first, as the original

// f_006f973c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f973c {

struct __attribute__((packed)) Local_006f973c_r0_2 {
    u16 half_0;
};
GUEST_OFFSET(Local_006f973c_r0_2, half_0, 0x0);

struct __attribute__((packed)) Local_006f973c_r0_5 {
    u16 half_0;
};
GUEST_OFFSET(Local_006f973c_r0_5, half_0, 0x0);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x006a5e04, u32(u32, u32, u32)> block_corner_position;
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> tile_address_0075db98;

struct __attribute__((packed)) Frame_006f973c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_006f973c, word_0, 0x0);
GUEST_OFFSET(Frame_006f973c, word_4, 0x4);
GUEST_OFFSET(Frame_006f973c, word_8, 0x8);
GUEST_SIZE(Frame_006f973c, 0xc);

void f_006f973c(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_006f973c> frame;  // the original's stack frame
    if (r0 == 0) {
        return;
    }
    u32 r6 = r0;
    u32 r0_1 = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    u32 r7 = r0_1 + 0x53480u;  // (from the original)
    u32 r5 = 0u;
L_6f9760:;
    u32 r4 = 0u;
L_6f9764:;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    gptr<Local_006f973c_r0_2> r0_2 = gptr<Local_006f973c_r0_2>(tile_address_0075db98(r7, r4, r5));
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    u32 r0_3 = r0_2->half_0;
    if (r0_3 != 0x9bu) {  // (from the original)
        r0_3 = r0_2->half_0;
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
            return;
        }
    }
    u32 r0_4 = get_save_data(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    u32 r9 = 0x85f2c0u;  // (from the original)
    r7 = r0_4 + 0x53480u;  // (from the original)
    r5 = 0u;
    do {
        r4 = 0u;
        do {
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            gptr<Local_006f973c_r0_5> r0_5 = gptr<Local_006f973c_r0_5>(tile_address_0075db98(r7, r4, r5));
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            if (r0_5->half_0 == 0x9bu) {  // (from the original)
                block_corner_position(frame.at(0).addr(), r4, r5);
                frame->word_8 = std::bit_cast<u32>(std::bit_cast<float>(frame->word_8) + std::bit_cast<float>(*gptr<u32>(r9)));
                *gptr<u32>(r6) = frame->word_0;
                *gptr<u32>(r6 + 4u) = frame->word_4;
                *gptr<u32>(r6 + 8u) = frame->word_8;
                return;
            }
            if (r0_5->half_0 == 0xa5u) {  // (from the original)
                block_corner_position(frame.at(0).addr(), r4, r5);
                float S0_1 = std::bit_cast<float>(frame->word_0) + 512.0f;
                frame->word_0 = std::bit_cast<u32>(S0_1);
                frame->word_8 = std::bit_cast<u32>(std::bit_cast<float>(frame->word_8) + std::bit_cast<float>(*gptr<u32>(r9)));
                *gptr<u32>(r6) = std::bit_cast<u32>(S0_1);
                *gptr<u32>(r6 + 4u) = frame->word_4;
                *gptr<u32>(r6 + 8u) = frame->word_8;
                return;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 7u);
        r5 += 1u;
        guest::preempt();
    } while (r5 < 6u);
}

}  // namespace d_006f973c
GUEST_EXPORT_FRAMED(0x006f973c, d_006f973c::f_006f973c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006f9900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9900 {

inline constexpr guest::Function<0x002fccc4, u32(u32)> item_number_is_indexed;
inline constexpr guest::Function<0x002fd010, u32(u32)> map_object_entry;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059da08, u32(u32, u32)> call_0059da08;
inline constexpr guest::Function<0x0059daa0, u32(u32)> table_holder_word_set;

void f_006f9900(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r2 == 0) {
        return;
    }
    u32 r0_1 = GridMap__process_world_position(r2, r0, r1, 0u);
    if (r0_1 != 0) {
        u32 r0_2 = item_number_is_indexed(r0_1);
        if (r0_2 != 0) {
            u32 r0_3 = map_object_entry(r0_1);
            if (r0_3 != 0) {
                u32 r0_4 = u32(*gptr<u8>(r0_3 + 0xfu)) << 0x1c;  // (from the original)
                if (s32(r0_4) < 0) {
                    u32 r0_5 = table_holder_word_set(r0_4);
                    if (r0_5 != 0) {
                        frame.release();
                        call_0059da08(r0, r1);
                        return;
                    }
                }
            }
        }
    }
}

}  // namespace d_006f9900
GUEST_EXPORT(0x006f9900, d_006f9900::f_006f9900);

// f_006f9978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9978 {

struct __attribute__((packed)) Object_006f9978_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_006f9978_0, word_28, 0x28);

struct __attribute__((packed)) Local_006f9978_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006f9978_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006f9978_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006f9978_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x00317eac, u32(u32, u32, u32)> call_00317eac;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0057bb98, u32(u32)> block_cell_rect;
inline constexpr guest::Function<0x005cdfd0, u32(u32)> call_005cdfd0;
inline constexpr guest::Function<0x006a2c2c, u32(u32, u32, u32, u32)> call_006a2c2c;
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> position_of_block;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

struct __attribute__((packed)) Frame_006f9978 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x30];  // (not read or written by name)
    u32 word_48;
    u32 word_4c;
    u8 unknown_50[0x10];  // (not read or written by name)
    u32 word_60;
    u32 word_64;
};
GUEST_OFFSET(Frame_006f9978, word_0, 0x0);
GUEST_OFFSET(Frame_006f9978, word_4, 0x4);
GUEST_OFFSET(Frame_006f9978, word_10, 0x10);
GUEST_OFFSET(Frame_006f9978, word_14, 0x14);
GUEST_OFFSET(Frame_006f9978, word_48, 0x48);
GUEST_OFFSET(Frame_006f9978, word_4c, 0x4c);
GUEST_OFFSET(Frame_006f9978, word_60, 0x60);
GUEST_OFFSET(Frame_006f9978, word_64, 0x64);
GUEST_SIZE(Frame_006f9978, 0x68);

void f_006f9978(gptr<Object_006f9978_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_006f9978> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_22 = 0;
    u32 r0_25 = 0;
    if (r0 == 0) {
        return;
    }
    u32 r9 = r0;
    u32 r0_1 = arg0->word_28;
    if (r0_1 != 0) {
        gptr<Local_006f9978_ea_1> ea_1 = gptr<Local_006f9978_ea_1>(frame.at(0x50).addr());  // (from the original)
        ea_1->word_0 = r0_1;
        ea_1->word_4 = 0x80;  // (from the original)
        ea_1->word_8 = 0x80;  // (from the original)
        u32 r0_3 = make_end_grid_rect_iterator(frame.at(0x20).addr(), r9, 0x80u, 0x80u);  // (from the original)
        u32 r0_4 = block_cell_rect(r0_3);
        u32 r10 = r0_4;
        make_end_grid_rect_iterator(frame.at(0x30).addr(), r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        construct_grid_rect_iterator(frame.at(8).addr(), r9);
        u32 r0_8 = key_records_differ(frame.at(8).addr(), frame.at(0x20).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r3 = guest::cpu()->r[3];
        if (r0_8 != 0) {
            u32 r8 = 0u;
            do {
                u32 r0_9 = CellGrid__cell_at(r9, frame->word_10, frame->word_14, r3);
                r3 = guest::cpu()->r[3];
                if (r0_9 != 0) {
                    u32 r4_2 = *gptr<u16>(r0_9);
                    u32 r0_10 = GridMap__large_cell_at(r9, frame->word_10, frame->word_14, r3);
                    r3 = guest::cpu()->r[3];
                    u32 r7 = r0_10;
                    if (r4_2 <= 0x168u && r7 != 0) {  // (from the original)
                        frame->word_60 = r8;
                        frame->word_64 = r8;
                        u32 r4_3 = frame->word_14;
                        u32 r2_6 = frame->word_10;
                        frame->word_0 = r8;
                        frame->word_4 = r8;
                        position_of_block(frame.at(0x60).addr(), frame.at(0x64).addr(), r2_6, r4_3);  // (from the original)
                        construct_grid_rect_iterator(frame.at(0x40).addr(), r10);  // (from the original)
                        u32 r0_14 = key_records_differ(frame.at(0x40).addr(), frame.at(0x30).addr());  // (from the original)
                        r3 = guest::cpu()->r[3];
                        if (r0_14 != 0) {
                            do {
                                u32 r0_15 = GridCellLarge__terrain_at(r7, frame->word_48, frame->word_4c, r3);
                                u32 r4_5 = frame->word_4c + frame->word_64;
                                u32 r0_17 = call_00317eac(frame.at(0x50).addr(), frame->word_60 + frame->word_48, r4_5);  // (from the original)
                                u32 r4_6 = r0_17;
                                u32 r0_18 = call_005cdfd0(r0_15);
                                if (s32(r4_6) < 0) {
                                    r4_6 = 0u;
                                } else if (s32(r0_18) < s32(r4_6)) {
                                    r4_6 = r0_18;
                                }
                                u32 r6_1 = frame->word_4c + frame->word_64;
                                call_006a2c2c(frame.at(0x50).addr(), frame->word_60 + frame->word_48, r6_1, r4_6 & 0xffu);  // (from the original)
                                WrappingCursor__advance(frame.at(0x40).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                                r0_22 = key_records_differ(frame.at(0x40).addr(), frame.at(0x30).addr());  // (from the original)
                                r3 = guest::cpu()->r[3];
                                guest::preempt();
                            } while (r0_22 != 0);
                        }
                    }
                }
                WrappingCursor__advance(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
                r0_25 = key_records_differ(frame.at(8).addr(), frame.at(0x20).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_25 != 0);
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006f9978
GUEST_EXPORT_FRAMED(0x006f9978, d_006f9978::f_006f9978, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006f9d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9d38 {

struct __attribute__((packed)) Local_006f9d38_r0_2 {
    u16 half_0;
};
GUEST_OFFSET(Local_006f9d38_r0_2, half_0, 0x0);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> tile_address_0075db98;

u32 f_006f9d38(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    u32 r6 = r0_1 + 0x53480u;  // (from the original)
    u32 r5 = 0u;
    do {
        u32 r4 = 0u;
        do {
            gptr<Local_006f9d38_r0_2> r0_2 = gptr<Local_006f9d38_r0_2>(tile_address_0075db98(r6, r4, r5));
            if (r0_2->half_0 == 0x9bu || r0_2->half_0 == 0xa5u) {  // (from the original)
                return 1u;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 7u);
        r5 += 1u;
        guest::preempt();
    } while (r5 < 6u);
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
GUEST_OFFSET(Local_006f9df4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006f9df4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006f9df4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006f9df4_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006f9df4_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006f9df4_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_006f9df4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006f9df4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006f9df4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006f9df4_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006f9df4_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_006f9df4_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_006f9df4_ea_2, word_14, 0x14);

struct __attribute__((packed)) Local_006f9df4_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006f9df4_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_006f9df4_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_006f9df4_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_006f9df4_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_006f9df4_ea_3, word_14, 0x14);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fccc4, u32(u32)> item_number_is_indexed;
inline constexpr guest::Function<0x002fd010, u32(u32)> map_object_entry;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059daa0, u32(u32)> table_holder_word_set;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;

struct __attribute__((packed)) Frame_006f9df4 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006f9df4, word_0, 0x0);
GUEST_SIZE(Frame_006f9df4, 0x18);

void f_006f9df4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006f9df4> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
        return;
    }
    gptr<Local_006f9df4_ea_1> ea_1 = gptr<Local_006f9df4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_1 = GridMap__process_world_position(r2, r0, r1, 0u);
    if (r0_1 != 0) {
        u32 r0_2 = item_number_is_indexed(r0_1);
        if (r0_2 != 0) {
            u32 r0_3 = map_object_entry(r0_1);
            if (r0_3 != 0) {
                if (s32(u32(*gptr<u8>(r0_3 + 0xfu)) << 0x1c) < 0) {  // (from the original)
                    frame->word_0 = 0;
                    u32 r0_4 = GridMap__place_item_at_world(r2, empty_item_address, r0, r1);
                    u32 r0_5 = table_holder_word_set(r0_4);
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
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
}

}  // namespace d_006f9df4
GUEST_EXPORT(0x006f9df4, d_006f9df4::f_006f9df4);

// f_006f9f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006f9f34 {

inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x00605628, u32(u32, u32)> call_00605628;
inline constexpr guest::Function<0x0060d0a4, u32(u32, u32, u32, u32)> set_cell_byte_08;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

u32 f_006f9f34(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r8 = 0;
    u32 r0_6 = 0;
    u32 r9 = r0;
    u32 r0_1 = CellGrid__cell_at(r0, 0u, 1u, r3);
    u32 r0_2 = 0x169u;  // (from the original)
    if (r0_1 != 0) {
        r0_2 = *gptr<u16>(r0_1);
    }
    u32 r0_3 = call_00605628(r0_2, r0_1);
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
        u32 r0_4 = GridMap__large_cell_at(r9, r7, r5, r3);
        r3 = guest::cpu()->r[3];
        r6 = r0_4;
        if (r0_4 != 0) {
            r4 = 0u;
            do {
                u32 r0_5 = GridCellLarge__terrain_at(r6, r8, r4, r3);
                r3 = guest::cpu()->r[3];
                if (r0_5 != 0x14u) {  // (from the original)
                    if (r0_5 == 0x16u) {  // (from the original)
                        set_cell_byte_08(r6, r8, r4, 0x80u);  // (from the original)
                        r3 = guest::cpu()->r[3];
                    }
                } else {
                    set_cell_byte_08(r6, r8, r4, 0x32u);  // (from the original)
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 0x10);  // (from the original)
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 6u);
    r5 = 0u;
    do {
        r0_6 = GridMap__large_cell_at(r9, r5, 1u, r3);
        r3 = guest::cpu()->r[3];
        r6 = r0_6;
        if (r0_6 != 0) {
            r4 = 0u;
            do {
                r0_6 = GridCellLarge__terrain_at(r6, r4, 0u, r3);
                r3 = guest::cpu()->r[3];
                if (r0_6 != 0x14u) {  // (from the original)
                    if (r0_6 == 0x16u) {  // (from the original)
                        r0_6 = set_cell_byte_08(r6, r4, 0u, 0x80u);  // (from the original)
                        r3 = guest::cpu()->r[3];
                    }
                } else {
                    r0_6 = set_cell_byte_08(r6, r4, 0u, 0x32u);  // (from the original)
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 0x10);  // (from the original)
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 7u);
    return r0_6;
}

}  // namespace d_006f9f34
GUEST_EXPORT_FRAMED(0x006f9f34, d_006f9f34::f_006f9f34, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006fa0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa0a0 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x004e0cec, u32(u32, u32, u32, u32)> item_covering_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_object_009b4a24;
inline constexpr guest::Function<0x00768174, u32(u32)> Item__is_kind_2;
inline constexpr guest::Function<0x0076a028, u32(u32)> Item__is_marker_or_has_kind_11;

struct __attribute__((packed)) Frame_006fa0a0 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006fa0a0, word_0, 0x0);
GUEST_SIZE(Frame_006fa0a0, 0x20);

void f_006fa0a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006fa0a0> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = get_object_009b4a24(r0, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = GridMap__process_world_position(r0_1, r1, r2, 0u);
        if (r0_2 != 0) {
            u32 r0_3 = Item__category(r0_2);
            if (r0_3 != 0x3bu) {  // (from the original)
                u32 r0_4 = Item__is_marker_or_has_kind_11(r0_2);
                if (r0_4 != 0) {
                    frame->word_0 = 0;
                    u32 r0_5 = item_covering_tile(r1, r2, 0u, r0_1);
                    frame.release();
                    copy_item_002fc934(r0, r0_5);
                    return;
                }
                u32 r0_6 = Item__is_item(r0_2);
                if (r0_6 == 0) {
                    u32 r0_7 = Item__is_kind_2(r0_2);
                    if (r0_7 == 0) {
                        frame.release();
                        copy_item_002fc934(r0, empty_item_address);
                        return;
                    }
                }
                frame.release();
                copy_item_002fc934(r0, r0_2);
                return;
            }
        }
    }
    frame.release();
    copy_item_002fc934(r0, empty_item_address);
    return;
}

}  // namespace d_006fa0a0
GUEST_EXPORT(0x006fa0a0, d_006fa0a0::f_006fa0a0);

// f_006fa1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa1fc {

struct __attribute__((packed)) Local_006fa1fc_r0_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa1fc_r0_10, word_0, 0x0);
GUEST_OFFSET(Local_006fa1fc_r0_10, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_table_9b4a24;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f224, u32(u32, u32)> copy_word_quad;
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32)> call_00605618;
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_006fa1fc {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x8];  // (not read or written by name)
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x8];  // (not read or written by name)
    u32 word_30;
    u32 word_34;
    u8 unknown_38[0x8];  // (not read or written by name)
    u32 word_40;
    u32 word_44;
    u8 unknown_48[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006fa1fc, word_0, 0x0);
GUEST_OFFSET(Frame_006fa1fc, word_4, 0x4);
GUEST_OFFSET(Frame_006fa1fc, word_8, 0x8);
GUEST_OFFSET(Frame_006fa1fc, word_c, 0xc);
GUEST_OFFSET(Frame_006fa1fc, word_10, 0x10);
GUEST_OFFSET(Frame_006fa1fc, word_14, 0x14);
GUEST_OFFSET(Frame_006fa1fc, word_20, 0x20);
GUEST_OFFSET(Frame_006fa1fc, word_24, 0x24);
GUEST_OFFSET(Frame_006fa1fc, word_30, 0x30);
GUEST_OFFSET(Frame_006fa1fc, word_34, 0x34);
GUEST_OFFSET(Frame_006fa1fc, word_40, 0x40);
GUEST_OFFSET(Frame_006fa1fc, word_44, 0x44);
GUEST_SIZE(Frame_006fa1fc, 0x7c);

u32 f_006fa1fc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006fa1fc> frame;  // the original's stack frame
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r7 = r0;
    u32 r8 = r1;
    u32 r0_1 = read_table_9b4a24(0x1fu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (r0_1 != 0) {
        copy_word_quad(frame.at(0x50).addr(), r0_1);  // (from the original)
        u32 r5 = frame.at(0).addr();
        u32 r9_1 = frame.at(0x50).addr();  // (from the original)
        u32 r0_3 = read_table_9b4a24(0x1fu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r4 = r0_3;
        construct_grid_rect_iterator(frame.at(0x20).addr(), r9_1);  // (from the original)
        make_end_grid_rect_iterator(frame.at(0x40).addr(), r9_1, guest::cpu()->r[2]);  // (from the original)
        frame->word_30 = frame->word_40;
        frame->word_34 = frame->word_44;
        copy_construct_word_pair(frame.at(0x38).addr(), frame.at(0x48).addr(), guest::cpu()->r[2]);  // (from the original)
        frame->word_10 = frame->word_20;
        frame->word_14 = frame->word_24;
        copy_construct_word_pair(frame.at(0x18).addr(), frame.at(0x20).addr() + 8u, guest::cpu()->r[2]);  // (from the original)
        u32 r0_9 = key_records_differ(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_9 != 0) {
            do {
                gptr<Local_006fa1fc_r0_10> r0_10 = gptr<Local_006fa1fc_r0_10>(frame.at(0x18).addr());  // (from the original)
                if (r4 != 0) {
                    u32 r0_11 = CellGrid__cell_at(r4, r0_10->word_0, r0_10->word_4);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_11 != 0) {
                        u32 r0_12 = *gptr<u16>(r0_11);
                        u32 r0_13 = call_00605618(r0_12, r1, r2);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_13 == 1u || r0_13 == 5u || r0_13 == 7u || r0_13 == 0x61u) {  // (from the original)
                            frame->word_0 = frame->word_10;
                            frame->word_4 = frame->word_14;
                            copy_construct_word_pair(r5 + 8u, frame.at(0x18).addr(), r2);  // (from the original)
                            goto L_6fa34c;
                        }
                    }
                }
                WrappingCursor__advance(frame.at(0x10).addr(), r1, r2);  // (from the original)
                r0_17 = key_records_differ(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                guest::preempt();
            } while (r0_17 != 0);
        }
        r0_18 = r5 + 8u;
        frame->word_0 = frame->word_30;
        frame->word_4 = frame->word_34;
        r1_9 = frame.at(0x38).addr();  // (from the original)
        copy_construct_word_pair(r0_18, r1_9, r2);
L_6fa34c:;
        make_end_grid_rect_iterator(frame.at(0x68).addr(), frame.at(0x50).addr(), r2);  // (from the original)
        u32 r0_21 = key_records_differ(frame.at(0).addr(), frame.at(0x68).addr(), r2);  // (from the original)
        if (r0_21 != 0) {
            *gptr<u32>(r7) = frame->word_8;
            *gptr<u32>(r8) = frame->word_c;
        }
        r0_1 = frame.at(0x50).addr();  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006fa1fc
GUEST_EXPORT_FRAMED(0x006fa1fc, d_006fa1fc::f_006fa1fc, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006fa430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa430 {

struct __attribute__((packed)) Local_006fa430_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa430_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006fa430_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006fa430_r0_2 {
    u16 half_0;
};
GUEST_OFFSET(Local_006fa430_r0_2, half_0, 0x0);

struct __attribute__((packed)) Local_006fa430_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006fa430_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_006fa430_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_006fa430_r0_4, word_8, 0x8);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x006a6bc8, u32(u32)> return_constant_0x9b4acc_;
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> tile_address_0075db98;

void f_006fa430(u32 r0, u32 r1, u32 r2) {
    if (r0 == 0) {
        return;
    }
    u32 r6 = r0;
    u32 r0_1 = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    u32 r7 = r0_1 + 0x53480u;  // (from the original)
    u32 r5 = 0u;
L_6fa450:;
    u32 r4 = 0u;
L_6fa454:;
    gptr<Local_006fa430_r0_2> r0_2 = gptr<Local_006fa430_r0_2>(tile_address_0075db98(r7, r4, r5));
    u32 r0_3 = r0_2->half_0;
    if (r0_3 != 0x9bu) {  // (from the original)
        r0_3 = r0_2->half_0;
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
            return;
        }
    }
    gptr<Local_006fa430_r0_4> r0_4 = gptr<Local_006fa430_r0_4>(return_constant_0x9b4acc_(r0_3));
    u32 r1_1 = r0_4->word_0;
    u32 r0_5 = r0_4->word_4;
    u32 r2_1 = r0_4->word_8;
    *gptr<u32>(r6) = r1_1;
    gptr<Local_006fa430_ea_1> ea_1 = gptr<Local_006fa430_ea_1>(r6 + 4u);
    ea_1->word_0 = r0_5;
    ea_1->word_4 = r2_1;
}

}  // namespace d_006fa430
GUEST_EXPORT_FRAMED(0x006fa430, d_006fa430::f_006fa430, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006fa4d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa4d0 {

struct __attribute__((packed)) Local_006fa4d0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa4d0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006fa4d0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006fa4d0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa4d0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006fa4d0_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;

u32 f_006fa4d0(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006fa4d0_ea_1> ea_1 = gptr<Local_006fa4d0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = 0x2b;  // (from the original)
    ea_1->word_4 = 0xa;  // (from the original)
    gptr<Local_006fa4d0_ea_2> ea_2 = gptr<Local_006fa4d0_ea_2>(frame.at(8).addr());
    ea_2->word_0 = 0x2b;  // (from the original)
    ea_2->word_4 = 0xc;  // (from the original)
    construct_word_quad_from_pairs(r0, frame.at(0).addr(), frame.at(8).addr());
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
GUEST_OFFSET(Local_006fa524_r0_10, word_0, 0x0);
GUEST_OFFSET(Local_006fa524_r0_10, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_table_9b4a24;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f224, u32(u32, u32)> copy_word_quad;
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32)> call_00605618;
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_006fa524 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x8];  // (not read or written by name)
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x8];  // (not read or written by name)
    u32 word_30;
    u32 word_34;
    u8 unknown_38[0x8];  // (not read or written by name)
    u32 word_40;
    u32 word_44;
    u8 unknown_48[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006fa524, word_0, 0x0);
GUEST_OFFSET(Frame_006fa524, word_4, 0x4);
GUEST_OFFSET(Frame_006fa524, word_8, 0x8);
GUEST_OFFSET(Frame_006fa524, word_c, 0xc);
GUEST_OFFSET(Frame_006fa524, word_10, 0x10);
GUEST_OFFSET(Frame_006fa524, word_14, 0x14);
GUEST_OFFSET(Frame_006fa524, word_20, 0x20);
GUEST_OFFSET(Frame_006fa524, word_24, 0x24);
GUEST_OFFSET(Frame_006fa524, word_30, 0x30);
GUEST_OFFSET(Frame_006fa524, word_34, 0x34);
GUEST_OFFSET(Frame_006fa524, word_40, 0x40);
GUEST_OFFSET(Frame_006fa524, word_44, 0x44);
GUEST_SIZE(Frame_006fa524, 0x7c);

u32 f_006fa524(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006fa524> frame;  // the original's stack frame
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r7 = r0;
    u32 r8 = r1;
    u32 r0_1 = read_table_9b4a24(1u, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        copy_word_quad(frame.at(0x50).addr(), r0_1);  // (from the original)
        u32 r5 = frame.at(0).addr();
        u32 r9_1 = frame.at(0x50).addr();  // (from the original)
        u32 r0_3 = read_table_9b4a24(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r4 = r0_3;
        construct_grid_rect_iterator(frame.at(0x20).addr(), r9_1);  // (from the original)
        make_end_grid_rect_iterator(frame.at(0x40).addr(), r9_1, guest::cpu()->r[2]);  // (from the original)
        frame->word_30 = frame->word_40;
        u32 r2_5 = frame->word_44;
        frame->word_34 = r2_5;
        copy_construct_word_pair(frame.at(0x38).addr(), frame.at(0x48).addr(), r2_5);  // (from the original)
        frame->word_10 = frame->word_20;
        frame->word_14 = frame->word_24;
        copy_construct_word_pair(frame.at(0x18).addr(), frame.at(0x20).addr() + 8u, guest::cpu()->r[2]);  // (from the original)
        u32 r0_9 = key_records_differ(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_9 != 0) {
            do {
                gptr<Local_006fa524_r0_10> r0_10 = gptr<Local_006fa524_r0_10>(frame.at(0x18).addr());  // (from the original)
                if (r4 != 0) {
                    u32 r0_11 = CellGrid__cell_at(r4, r0_10->word_0, r0_10->word_4);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_11 != 0) {
                        u32 r0_12 = *gptr<u16>(r0_11);
                        u32 r0_13 = call_00605618(r0_12, r1, r2);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_13 == 1u) {
                            frame->word_0 = frame->word_10;
                            frame->word_4 = frame->word_14;
                            copy_construct_word_pair(r5 + 8u, frame.at(0x18).addr(), r2);  // (from the original)
                            goto L_6fa668;
                        }
                    }
                }
                WrappingCursor__advance(frame.at(0x10).addr(), r1, r2);  // (from the original)
                r0_17 = key_records_differ(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                guest::preempt();
            } while (r0_17 != 0);
        }
        r0_18 = r5 + 8u;
        frame->word_0 = frame->word_30;
        frame->word_4 = frame->word_34;
        r1_9 = frame.at(0x38).addr();  // (from the original)
        copy_construct_word_pair(r0_18, r1_9, r2);
L_6fa668:;
        make_end_grid_rect_iterator(frame.at(0x68).addr(), frame.at(0x50).addr(), r2);  // (from the original)
        u32 r0_21 = key_records_differ(frame.at(0).addr(), frame.at(0x68).addr(), r2);  // (from the original)
        if (r0_21 != 0) {
            *gptr<u32>(r7) = frame->word_8;
            *gptr<u32>(r8) = frame->word_c;
        }
        r0_1 = frame.at(0x50).addr();  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006fa524
GUEST_EXPORT_FRAMED(0x006fa524, d_006fa524::f_006fa524, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006fa728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa728 {

inline constexpr u32 global_0095276c_address = 0x0095276cu;

u32 f_006fa728(u32 r0) {
    u32 r0_1 = *gptr<u8>(r0 + global_0095276c_address);
    guest::cpu()->r[1] = global_0095276c_address;
    return r0_1;
}

}  // namespace d_006fa728
GUEST_EXPORT(0x006fa728, d_006fa728::f_006fa728);

// f_006fa738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fa738 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;

void f_006fa738(u32 r0_unused, u32 r1, u32 r2) {
    if (r2 == 0) {
        copy_bytes_small_sizes_first(guest::cpu()->r[0], 0x85f7f8u, 0x10u, guest::cpu()->r[3]);
        return;  // (from the original)
    }
    if (r2 != 1u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    copy_bytes_small_sizes_first(guest::cpu()->r[0], 0x85f808u, 0x10u, guest::cpu()->r[3]);
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
GUEST_OFFSET(Local_006fa76c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006fa76c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006fa76c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa76c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006fa76c_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> position_of_block;
inline constexpr guest::Function<0x006fa524, u32(u32, u32, u32, u32)> call_006fa524;

u32 f_006fa76c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    call_006fa524(frame.at(8).addr(), frame.at(0xc).addr(), r2, r3);  // (from the original)
    gptr<Local_006fa76c_ea_1> ea_1 = gptr<Local_006fa76c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = 8;
    ea_1->word_4 = 6;
    gptr<Local_006fa76c_ea_2> ea_2 = gptr<Local_006fa76c_ea_2>(frame.at(8).addr());
    position_of_block(r0, r1, ea_2->word_0, ea_2->word_4);
    return r0;
}

}  // namespace d_006fa76c
GUEST_EXPORT_FRAMED(0x006fa76c, d_006fa76c::f_006fa76c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006faa70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006faa70 {

struct __attribute__((packed)) Local_006faa70_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faa70_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006faa70_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_006faa70_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faa70_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_006faa70_ea_6, word_4, 0x4);

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x0052f188, u32(u32, u32, u32)> construct_word_quad_from_pairs_copy;
inline constexpr guest::Function<0x006a6bc8, u32(u32, u32, u32, u32)> return_constant_0x9b4acc_;

struct __attribute__((packed)) Frame_006faa70 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Frame_006faa70, word_10, 0x10);
GUEST_OFFSET(Frame_006faa70, word_14, 0x14);
GUEST_SIZE(Frame_006faa70, 0x18);

void f_006faa70(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006faa70> frame;  // the original's stack frame
    if (r0 == 0) {
        return;
    }
    u32 r0_1 = return_constant_0x9b4acc_(r0, r1, r2, guest::cpu()->r[3]);
    frame->word_10 = 0;
    frame->word_14 = 0;
    position_to_cell(frame.at(0x10).addr(), frame.at(0x14).addr(), r0_1);  // (from the original)
    u32 r2_1 = frame->word_14 - 4u;
    u32 r1_2 = frame->word_10 - 3u;
    gptr<Local_006faa70_ea_3> ea_3 = gptr<Local_006faa70_ea_3>(frame.at(0).addr());
    ea_3->word_0 = r1_2;
    ea_3->word_4 = r2_1;
    u32 r2_2 = frame->word_14 + 4u;
    u32 r1_3 = frame->word_10 + 3u;
    gptr<Local_006faa70_ea_6> ea_6 = gptr<Local_006faa70_ea_6>(frame.at(8).addr());
    ea_6->word_0 = r1_3;
    ea_6->word_4 = r2_2;
    construct_word_quad_from_pairs_copy(r0, frame.at(0).addr(), frame.at(8).addr());
}

}  // namespace d_006faa70
GUEST_EXPORT_FRAMED(0x006faa70, d_006faa70::f_006faa70, 0x4010);  // pushes {r4, lr} first, as the original

// f_006fac2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fac2c {

struct __attribute__((packed)) Local_006fac2c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006fac2c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006fac2c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006fac2c_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_table_9b4a24;
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32)> terrain_at_world;
inline constexpr guest::Function<0x00317eac, u32(u32, u32, u32, u32)> call_00317eac;
inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x005cdfd0, u32(u32)> call_005cdfd0;
inline constexpr guest::Function<0x006a2c2c, u32(u32, u32, u32, u32)> call_006a2c2c;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_006fac2c {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006fac2c, word_8, 0x8);
GUEST_OFFSET(Frame_006fac2c, word_c, 0xc);
GUEST_SIZE(Frame_006fac2c, 0x2c);

void f_006fac2c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006fac2c> frame;  // the original's stack frame
    u32 r0_15 = 0;
    u32 r7 = r1;
    u32 r0_1 = read_table_9b4a24(r1, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x28u);  // (from the original)
        if (r0_2 != 0) {
            gptr<Local_006fac2c_ea_1> ea_1 = gptr<Local_006fac2c_ea_1>(frame.at(0x20).addr());  // (from the original)
            ea_1->word_0 = r0_2;
            ea_1->word_4 = 0x80;  // (from the original)
            ea_1->word_8 = 0x80;  // (from the original)
            make_end_grid_rect_iterator(frame.at(0x10).addr(), r0, 0x80u, 0x80u);  // (from the original)
            construct_grid_rect_iterator(frame.at(0).addr(), r0);
            u32 r0_6 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r0_6 != 0) {
                do {
                    u32 r0_8 = call_00317eac(frame.at(0x20).addr(), frame->word_8, frame->word_c, r3);  // (from the original)
                    u32 r4_2 = r0_8;
                    u32 r0_10 = terrain_at_world(frame->word_8, frame->word_c, r7);
                    u32 r0_11 = call_005cdfd0(r0_10);
                    if (s32(r4_2) < 0) {
                        r4_2 = 0u;
                    } else if (s32(r0_11) < s32(r4_2)) {
                        r4_2 = r0_11;
                    }
                    call_006a2c2c(frame.at(0x20).addr(), frame->word_8, frame->word_c, r4_2 & 0xffu);  // (from the original)
                    WrappingCursor__advance(frame.at(0).addr());
                    r0_15 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
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

inline constexpr u32 global_0095276c_address = 0x0095276cu;
inline guest::global<u32, 0x0085f7a4> global_0085f7a4;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> player_at;
inline constexpr guest::Function<0x005b48a4, u32(u32)> read_u8_0x00957326_;
inline constexpr guest::Function<0x006bc388, u32(u32, u32)> page_address;
inline constexpr guest::Function<0x006cbb08, u32(u32)> call_006cbb08;
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32)> list_position_of_mode;

struct __attribute__((packed)) Frame_006fad7c {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006fad7c, word_0, 0x0);
GUEST_SIZE(Frame_006fad7c, 0x10);

u32 f_006fad7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006fad7c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    u32 r0_2 = table_entry_has_all_bits(0x80u, r0_1, guest::cpu()->r[2]);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        u32 r5_1 = 0u;
        frame->word_0 = *global_0085f7a4;
        u32 r0_3 = list_position_of_mode(r0_1, guest::cpu()->r[1], r2_2);
        if (r0_3 - 2u < 0x18u) {  // (from the original)
            r0_3 = *gptr<u8>(r0_3 + global_0095276c_address);
            if (r0_3 < 4u) {
                r5_1 = *gptr<u8>(frame.at(0).addr() + r0_3);
            }
        }
        u32 r0_4 = get_data_base(r0_3);
        u32 r0_6 = player_at(r0_4 + 0x20u, r5_1);  // (from the original)
        return r0_6;
    }
    u32 r0_7 = table_entry_has_all_bits(0x2000u, r0_1, r2_2);  // (from the original)
    if (r0_7 != 0) {
        u32 r0_8 = r0_1 - 0x56u;  // (from the original)
        u32 r0_9 = get_data_base(r0_8);
        r2_2 = 0xfff951c8u;  // (from the original)
        u32 r0_11 = page_address(r0_9 - r2_2, r0_8 & 0xffu);  // (from the original)
        u32 r0_12 = *gptr<s8>(r0_11);
        if (s32(r0_12) >= 0) {
            u32 r0_13 = get_data_base(r0_12);
            frame.release();
            return player_at(r0_13 + 0x20u, r0_12 & 0xffu);  // (from the original)
        }
    }
    u32 r0_15 = table_entry_has_all_bits(0x4000u, r0_1, r2_2);  // (from the original)
    if (r0_15 != 0) {
        u32 r0_16 = read_u8_0x00957326_(r0_15);
        u32 r0_17 = call_006cbb08(r0_16);
        if (r0_17 != 0) {
            return r0_17 + 0x1238u;  // (from the original)
        }
    }
    return 0u;
}

}  // namespace d_006fad7c
GUEST_EXPORT(0x006fad7c, d_006fad7c::f_006fad7c);

// f_006fae98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fae98 {

struct __attribute__((packed)) Local_006fae98_r0_1 {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
};
GUEST_OFFSET(Local_006fae98_r0_1, byte_1e, 0x1e);

inline constexpr guest::Function<0x0030512c, u32(u32, u32, u32, u32)> record_302_address_0030512c;
inline constexpr guest::Function<0x006fa7ac, u32(u32, u32, u32, u32)> call_006fa7ac;

u32 f_006fae98(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006fae98_r0_1> r0_1 = gptr<Local_006fae98_r0_1>(record_302_address_0030512c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    if (r1 != 3u) {
        if (r1 == 4u) {
            return gptr<u16>(0x85f82cu)[u32(r0_1->byte_1e)];  // (from the original)
        }
        if (r1 == 5u) {
            return gptr<u16>(0x85f836u)[u32(r0_1->byte_1e)];  // (from the original)
        }
        if (r1 == 2u) {
            return gptr<u16>(0x85f840u)[u32(r0_1->byte_1e)];  // (from the original)
        }
        if (r1 == 1u) {
            return gptr<u16>(0x85f84au)[u32(r0_1->byte_1e)];  // (from the original)
        }
        frame.release();
        return call_006fa7ac(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return gptr<u16>(0x85f822u)[u32(r0_1->byte_1e)];  // (from the original)
}

}  // namespace d_006fae98
GUEST_EXPORT(0x006fae98, d_006fae98::f_006fae98);

// f_006faf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006faf68 {

struct __attribute__((packed)) Local_006faf68_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faf68_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006faf68_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_006faf68_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faf68_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_006faf68_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_006faf68_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006faf68_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_006faf68_r0_4, word_4, 0x4);

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x0052f188, u32(u32, u32, u32)> construct_word_quad_from_pairs_copy;
inline constexpr guest::Function<0x0052f248, u32(u32, u32, u32, u32)> construct_word_quad_zero;
inline constexpr guest::Function<0x006a6bc8, u32(u32)> return_constant_0x9b4acc_;
inline constexpr guest::Function<0x007482d0, u32(u32, u32)> GridRect__contains;

struct __attribute__((packed)) Frame_006faf68 {
    u8 unknown_0[0x28];  // (not read or written by name)
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006faf68, word_28, 0x28);
GUEST_OFFSET(Frame_006faf68, word_2c, 0x2c);
GUEST_SIZE(Frame_006faf68, 0x38);

u32 f_006faf68(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006faf68> frame;  // the original's stack frame
    u32 r0_1 = frame.at(0).addr();
    construct_word_quad_zero(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = return_constant_0x9b4acc_(r0_1);
    frame->word_28 = 0;
    frame->word_2c = 0;
    position_to_cell(frame.at(0x28).addr(), frame.at(0x2c).addr(), r0_2);  // (from the original)
    u32 r2_2 = frame->word_2c - 4u;
    u32 r1_3 = frame->word_28 - 3u;
    gptr<Local_006faf68_ea_3> ea_3 = gptr<Local_006faf68_ea_3>(frame.at(0x10).addr());  // (from the original)
    ea_3->word_0 = r1_3;
    ea_3->word_4 = r2_2;
    u32 r2_3 = frame->word_2c + 4u;
    u32 r1_4 = frame->word_28 + 3u;
    gptr<Local_006faf68_ea_6> ea_6 = gptr<Local_006faf68_ea_6>(frame.at(0x18).addr());  // (from the original)
    ea_6->word_0 = r1_4;
    ea_6->word_4 = r2_3;
    construct_word_quad_from_pairs_copy(frame.at(0).addr(), frame.at(0x10).addr(), frame.at(0x18).addr());  // (from the original)
    gptr<Local_006faf68_r0_4> r0_4 = gptr<Local_006faf68_r0_4>(frame.at(0x20).addr());  // (from the original)
    r0_4->word_0 = r0;
    r0_4->word_4 = r1;
    u32 r0_6 = GridRect__contains(frame.at(0).addr(), r0_4.addr());
    return r0_6;
}

}  // namespace d_006faf68
GUEST_EXPORT_FRAMED(0x006faf68, d_006faf68::f_006faf68, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006fb0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb0cc {

inline constexpr u32 global_00952742_address = 0x00952742u;

u32 f_006fb0cc(u32 r0) {
    u32 r0_1 = *gptr<u8>(r0 + global_00952742_address);
    guest::cpu()->r[1] = global_00952742_address;
    return r0_1;
}

}  // namespace d_006fb0cc
GUEST_EXPORT(0x006fb0cc, d_006fb0cc::f_006fb0cc);

// f_006fb27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb27c {

inline constexpr u32 global_00952718_address = 0x00952718u;

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
    return *gptr<u8>(r2_1 + global_00952718_address);
}

}  // namespace d_006fb27c
GUEST_EXPORT(0x006fb27c, d_006fb27c::f_006fb27c);

// f_006fb3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb3f4 {


u32 f_006fb3f4(u32 r0, u32 r1) {
    u32 r0_1 = 2u;
    if (r0 != 0) {
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

struct __attribute__((packed)) Local_006fb430_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fb430_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006fb430_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_006fb430_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fb430_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_006fb430_ea_6, word_4, 0x4);

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x0052f188, u32(u32, u32, u32)> construct_word_quad_from_pairs_copy;
inline constexpr guest::Function<0x006a6bc8, u32(u32, u32, u32, u32)> return_constant_0x9b4acc_;

struct __attribute__((packed)) Frame_006fb430 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Frame_006fb430, word_10, 0x10);
GUEST_OFFSET(Frame_006fb430, word_14, 0x14);
GUEST_SIZE(Frame_006fb430, 0x18);

void f_006fb430(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006fb430> frame;  // the original's stack frame
    if (r0 == 0) {
        return;
    }
    u32 r0_1 = return_constant_0x9b4acc_(r0, r1, r2, guest::cpu()->r[3]);
    frame->word_10 = 0;
    frame->word_14 = 0;
    position_to_cell(frame.at(0x10).addr(), frame.at(0x14).addr(), r0_1);  // (from the original)
    u32 r2_1 = frame->word_14 - 5u;
    u32 r1_2 = frame->word_10 - 1u;
    gptr<Local_006fb430_ea_3> ea_3 = gptr<Local_006fb430_ea_3>(frame.at(0).addr());
    ea_3->word_0 = r1_2;
    ea_3->word_4 = r2_1;
    u32 r2_2 = frame->word_14 + 5u;
    u32 r1_3 = frame->word_10 + 1u;
    gptr<Local_006fb430_ea_6> ea_6 = gptr<Local_006fb430_ea_6>(frame.at(8).addr());
    ea_6->word_0 = r1_3;
    ea_6->word_4 = r2_2;
    construct_word_quad_from_pairs_copy(r0, frame.at(0).addr(), frame.at(8).addr());
}

}  // namespace d_006fb430
GUEST_EXPORT_FRAMED(0x006fb430, d_006fb430::f_006fb430, 0x4010);  // pushes {r4, lr} first, as the original

// f_006fb4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fb4bc {

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059da08, u32(u32, u32)> call_0059da08;
inline constexpr guest::Function<0x0059daa0, u32(u32)> table_holder_word_set;

void f_006fb4bc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r2 == 0) {
        return;
    }
    u32 r0_1 = GridMap__process_world_position(r2, r0, r1, 0u);
    if (r0_1 != 0) {
        u32 r0_2 = table_holder_word_set(r0_1);
        if (r0_2 != 0) {
            frame.release();
            call_0059da08(r0, r1);
            return;
        }
    }
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
GUEST_OFFSET(Local_006fb50c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006fb50c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006fb50c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006fb50c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006fb50c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006fb50c_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_006fb50c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006fb50c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006fb50c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006fb50c_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006fb50c_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_006fb50c_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_006fb50c_ea_2, word_14, 0x14);

struct __attribute__((packed)) Local_006fb50c_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006fb50c_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_006fb50c_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_006fb50c_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_006fb50c_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_006fb50c_ea_3, word_14, 0x14);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x001b2114, u32(u32, u32, u32, u32)> call_001b2114;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059daa0, u32(u32)> table_holder_word_set;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;
inline constexpr guest::Function<0x005ba02c, u32(u32, u32)> call_005ba02c;
inline constexpr guest::Function<0x0076ad64, u32(u32)> call_0076ad64;

struct __attribute__((packed)) Frame_006fb50c {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006fb50c, word_0, 0x0);
GUEST_SIZE(Frame_006fb50c, 0x18);

u32 f_006fb50c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006fb50c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    if (r2 == 0) {
        return r0;
    }
    gptr<Local_006fb50c_ea_1> ea_1 = gptr<Local_006fb50c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_1 = GridMap__process_world_position(r2, r0, r1, 0u);
    u32 r5_1 = r0_1;
    if (r0_1 != 0) {
        r0_1 = Item__is_empty(r0_1);
        if (r0_1 == 0) {
            u32 r0_2 = Item__category(r5_1);
            if (r0_2 == 0x7au) {  // (from the original)
                u32 r0_3 = call_0076ad64(r5_1);
                u32 r0_4 = get_data_base(r0_3);
                u32 r0_5 = slot_records_of(r0_4);
                call_005ba02c(r0_5 + 0x1744cu, r0_3);  // (from the original)
            } else {
                u32 r0_7 = get_data_base(r0_2);
                call_001b2114(r0_7 + 0x62162u, r5_1, 1u, 0x62162u);  // (from the original)
            }
            frame->word_0 = 0;
            u32 r0_9 = GridMap__place_item_at_world(r2, empty_item_address, r0, r1);
            r0_1 = table_holder_word_set(r0_9);
            if (r0_1 != 0) {
                gptr<Local_006fb50c_ea_2> ea_2 = gptr<Local_006fb50c_ea_2>(frame.at(0).addr());
                u32 r3_8 = ea_2->word_0;
                u32 r4_1 = ea_2->word_4;
                u32 r5_2 = ea_2->word_8;
                u32 r6_1 = ea_2->word_c;
                u32 r7_1 = ea_2->word_10;
                r14 = ea_2->word_14;
                guest::cpu()->r[4] = r4_1;
                guest::cpu()->r[5] = r5_2;
                guest::cpu()->r[6] = r6_1;
                guest::cpu()->r[7] = r7_1;
                frame.release();
                return call_0059e65c(r0, r1, 1u, r3_8);
            }
        }
    }
    gptr<Local_006fb50c_ea_3> ea_3 = gptr<Local_006fb50c_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_4;
    u32 r5_3 = ea_3->word_8;
    u32 r6_2 = ea_3->word_c;
    u32 r7_2 = ea_3->word_10;
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

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059daa0, u32(u32)> table_holder_word_set;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;

void f_006fb604(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r2 == 0) {
        return;
    }
    u32 r0_1 = GridMap__process_world_position(r2, r0, r1, 0u);
    if (r0_1 != 0) {
        u32 r0_2 = table_holder_word_set(r0_1);
        if (r0_2 != 0) {
            frame.release();
            call_0059e65c(r0, r1, 1u, guest::cpu()->r[3]);
            return;
        }
    }
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
GUEST_OFFSET(Local_006fc854_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006fc854_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006fc854_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006fc854_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006fc854_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006fc854_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_006fc854_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_006fc854_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_006fc854_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_006fc854_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_006fc854_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_006fc854_ea_1, word_2c, 0x2c);

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
GUEST_OFFSET(Local_006fc854_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006fc854_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006fc854_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006fc854_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_006fc854_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_006fc854_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_006fc854_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_006fc854_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_006fc854_ea_2, word_20, 0x20);

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> Item__is_item;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> Item__number;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;
inline constexpr guest::Function<0x00748724, u32(u32, u32, u32, u32)> ItemData__group;
inline constexpr guest::Function<0x0076f9b4, u32(u32, u32, u32, u32)> ItemBitSet__count_items;

struct __attribute__((packed)) Frame_006fc854 {
    u8 unknown_0[0x2f4];  // (not read or written by name)
    u32 word_2f4;
    u8 unknown_2f8[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006fc854, word_2f4, 0x2f4);
GUEST_SIZE(Frame_006fc854, 0x320);

void f_006fc854(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006fc854> frame;  // the original's stack frame
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
    clear(frame.at(0).addr(), r11, r2, r3);
    r8 = 0u;
    r9 = 1u;
    do {
        r4 = 0u;
        do {
            u32 r0_3 = call_00720358(frame->word_2f4, r8, r4, 0u);
            u32 r0_4 = Item__data(r0_3);
            if (r0_4 != 0) {
                u32 r0_5 = ItemData__group(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_5 == r5) {
                    u32 r7_1 = frame.at(0).addr();
                    u32 r0_6 = Item__is_item(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    if (r0_6 != 0) {
                        u32 r0_7 = Item__number(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        *gptr<u8>(r7_1 + (r0_7 - 0x2000u >> 3)) = u8(u32(*gptr<u8>(r7_1 + (r0_7 - 0x2000u >> 3))) | r9 << (r0_7 - 0x2000u & 7u));  // (from the original)
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
            u32 r0_10 = call_00720358(frame->word_2f4, r8, r4, 1u);
            u32 r0_11 = Item__data(r0_10);
            r1_6 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
            if (r0_11 != 0) {
                u32 r0_12 = ItemData__group(r0_11, r1_6, r2_6, guest::cpu()->r[3]);
                r1_6 = guest::cpu()->r[1];
                r2_6 = guest::cpu()->r[2];
                if (r0_12 == r5) {
                    u32 r7_2 = frame.at(0).addr();
                    u32 r0_13 = Item__is_item(r0_10, r1_6, r2_6, guest::cpu()->r[3]);
                    r1_6 = guest::cpu()->r[1];
                    r2_6 = guest::cpu()->r[2];
                    if (r0_13 != 0) {
                        u32 r0_14 = Item__number(r0_10, r1_6, r2_6, guest::cpu()->r[3]);
                        r2_6 = r0_14 - 0x2000u & 7u;  // (from the original)
                        r1_6 = u32(*gptr<u8>(r7_2 + (r0_14 - 0x2000u >> 3))) | lsl_r(r9, r2_6 & 0xff);  // (from the original)
                        *gptr<u8>(r7_2 + (r0_14 - 0x2000u >> 3)) = u8(r1_6);  // (from the original)
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 8u);
        r8 += 1u;
        guest::preempt();
    } while (r8 < 8u);
    u32 r0_17 = ItemBitSet__count_items(frame.at(0).addr(), r1_6, r2_6, guest::cpu()->r[3]);
    r7 = r0_17;
    if (r0_17 > 1u) {
        clear(frame.at(0).addr(), r11, guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = 0x29dfu;  // (from the original)
        r8 = 0x30cbu;  // (from the original)
        do {
            construct_item(frame.at(0x2e8).addr(), uxth(r4), r2, r3);  // (from the original)
            u32 r0_21 = Item__data(frame.at(0x2e8).addr());  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_21 != 0) {
                u32 r0_22 = ItemData__group(r0_21, guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_22 == r5) {
                    u32 r11_1 = frame.at(0x2e8).addr();  // (from the original)
                    u32 r6_1 = frame.at(0).addr();
                    u32 r0_23 = Item__is_item(r11_1, guest::cpu()->r[1], r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_23 != 0) {
                        u32 r0_24 = Item__number(r11_1, guest::cpu()->r[1], r2, r3);
                        r3 = guest::cpu()->r[3];
                        r2 = r0_24 - 0x2000u & 7u;  // (from the original)
                        *gptr<u8>(r6_1 + (r0_24 - 0x2000u >> 3)) = u8(u32(*gptr<u8>(r6_1 + (r0_24 - 0x2000u >> 3))) | lsl_r(r9, r2 & 0xff));  // (from the original)
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 <= r8);
        r4 = 0x3130u;  // (from the original)
        r11 = r4 | u32(s32(r4) >> 7);
        do {
            construct_item(frame.at(0x2e8).addr(), uxth(r4), r2, r3);  // (from the original)
            u32 r0_28 = Item__data(frame.at(0x2e8).addr());  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_28 != 0) {
                u32 r0_29 = ItemData__group(r0_28, guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_29 == r5) {
                    u32 r8_1 = frame.at(0x2e8).addr();  // (from the original)
                    u32 r6_2 = frame.at(0).addr();
                    u32 r0_30 = Item__is_item(r8_1, guest::cpu()->r[1], r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_30 != 0) {
                        u32 r0_31 = Item__number(r8_1, guest::cpu()->r[1], r2, r3);
                        r3 = guest::cpu()->r[3];
                        r2 = r0_31 - 0x2000u & 7u;  // (from the original)
                        *gptr<u8>(r6_2 + (r0_31 - 0x2000u >> 3)) = u8(u32(*gptr<u8>(r6_2 + (r0_31 - 0x2000u >> 3))) | lsl_r(r9, r2 & 0xff));  // (from the original)
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 <= r11);
        u32 r0_34 = ItemBitSet__count_items(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
        if (r0_34 != 0 && r0_34 == r7) {
            u32 zf_1 = *gptr<u8>(r10 + 0x31u) == 0x67u;  // (from the original)
            *gptr<u32>(r10 + 0x10u) = *gptr<u32>(r10 + 0x10u) + ((r7 << 7) - r7 * 3u << 3);  // (from the original)
            if (!zf_1) {
                u32 r0_35 = random_below(0x64u);  // (from the original)
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

inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;

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
        u32 r5 = *gptr<u8>(r9 + 0x865950u);  // (from the original)
        do {
            r4 = 0u;
            do {
                u32 r0_1 = call_00720358(r11, r7, r4, 0u);
                u32 r0_2 = Item__is_item(r0_1);
                if (r0_2 != 0) {
                    u32 r0_3 = item_has_valid_data(r0_1);
                    if (r0_3 != 0) {
                        u32 r0_4 = Item__data(r0_1);
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
                u32 r0_7 = Item__is_item(r0_6);
                if (r0_7 != 0) {
                    u32 r0_8 = item_has_valid_data(r0_6);
                    if (r0_8 != 0) {
                        u32 r0_9 = Item__data(r0_6);
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
            *gptr<u32>(r10 + 0x14u) = r1_7 + (r8 * 9u + (r8 << 4) << 3);  // (from the original)
        }
        r9 += 1u;
        guest::preempt();
    } while (r9 < 5u);
}

}  // namespace d_006fd258
GUEST_EXPORT_FRAMED(0x006fd258, d_006fd258::f_006fd258, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006fef38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006fef38 {

inline constexpr guest::Function<0x001def90, u32(u32, u32, u32, u32)> call_001def90;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> player_at;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x0030512c, u32(u32, u32)> record_302_address_0030512c;
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> item_has_valid_data;
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32)> block_or_first;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x006fc144, u32(u32, u32)> call_006fc144;
inline constexpr guest::Function<0x006ff188, u32(u32, u32)> call_006ff188;
inline constexpr guest::Function<0x0070eebc, u32(u32)> byte_14_below_8;
inline constexpr guest::Function<0x007166a4, u32(u32, u32, u32, u32)> call_007166a4;
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;

struct __attribute__((packed)) Frame_006fef38 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006fef38, word_0, 0x0);
GUEST_OFFSET(Frame_006fef38, word_4, 0x4);
GUEST_OFFSET(Frame_006fef38, word_c, 0xc);
GUEST_OFFSET(Frame_006fef38, word_14, 0x14);
GUEST_OFFSET(Frame_006fef38, word_18, 0x18);
GUEST_OFFSET(Frame_006fef38, word_24, 0x24);
GUEST_OFFSET(Frame_006fef38, word_28, 0x28);
GUEST_OFFSET(Frame_006fef38, word_2c, 0x2c);
GUEST_SIZE(Frame_006fef38, 0x34);

u32 f_006fef38(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006fef38> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_1 = get_data_base(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0u;
    u32 r11 = r0_1 + 0x20u;  // (from the original)
    u32 r9 = r7;
    u32 r10 = frame.at(0x14).addr();  // (from the original)
    do {
        u32 r5_1 = r7 & 0xffu;  // (from the original)
        u32 r0_2 = player_at(r11, r5_1, r2, r3);
        r0_4 = PersonalId__is_set(r0_2 + 0x55a6u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            r0_4 = u32(*gptr<u8>(r0_2 + 0x5711u)) << 0x1c;  // (from the original)
            if (s32(r0_4) < 0) {
                u32 r4_1 = r0_2 + 0x56c4u;  // (from the original)
                call_001def90(r4_1, r1_2, r2, r3);
                u32 r0_5 = byte_14_below_8(r4_1);
                if (r0_5 == 0) {
                    r0_6 = call_006fc144(r4_1, r5_1);
                } else {
                    r0_6 = call_006ff188(r4_1, r5_1);
                }
                u32 r8 = r4_1;
                u32 r0_7 = get_save_data(r0_6);
                u32 r0_9 = block_or_first(r0_7 + 0x5d900u, r5_1);  // (from the original)
                u32 r1_5 = *gptr<u8>(r8 + 0x17u);  // (from the original)
                u32 r0_10 = record_302_address_0030512c(r0_9, r1_5);
                frame->word_c = r0_10;
                frame->word_4 = r9;
                frame->word_0 = r10;
                call_007166a4(r0_9, frame.at(0x24).addr(), frame.at(0x28).addr(), frame.at(0x18).addr());  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 r5 = frame->word_24;
                u32 r6 = 0u;
                if (r5 < frame->word_18) {
                    do {
                        u32 r4 = frame->word_28;
                        if (r4 < frame->word_14) {
                            do {
                                u32 r0_12 = call_00720358(frame->word_c, r5, r4, 0u);
                                frame->word_2c = r0_12;
                                u32 r0_13 = Item__is_item(r0_12);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (r0_13 != 0) {
                                    u32 r0_15 = item_has_valid_data(frame->word_2c, guest::cpu()->r[1], r2, r3);
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    if (r0_15 != 0) {
                                        u32 r0_17 = Item__data(frame->word_2c, guest::cpu()->r[1], r2, r3);
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
                            } while (r4 < frame->word_14);
                        }
                        r5 += 1u;
                        guest::preempt();
                    } while (r5 < frame->word_18);
                }
                u32 r4_2 = 0u;
                u32 r0_19 = *gptr<u8>(frame->word_c + 0x1eu);  // (from the original)
                if (r6 != 0) {
                    r4_2 = 1u;
                }
                if (r0_19 != 2u) {
                    if (r0_19 == 3u) {
                        if (r6 >= 0x11u) {  // (from the original)
                            r4_2 = 3u;
                            goto L_6ff164;
                        }
                        if (r6 >= 9u) {
                            goto L_6ff160;
                        }
                        goto L_6ff164;
                    }
                    if (r0_19 != 4u) {
                        goto L_6ff164;
                    }
                } else {
                    if (r6 >= 0xau) {  // (from the original)
                        r4_2 = 3u;
                        goto L_6ff164;
                    }
                    if (r6 >= 4u) {
                        goto L_6ff160;
                    }
                    goto L_6ff164;
                }
                if (r6 < 0x21u) {  // (from the original)
                    if (r6 < 0x11u) {  // (from the original)
                        goto L_6ff164;
                    }
                    goto L_6ff160;
                }
                r4_2 = 3u;
                goto L_6ff164;
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

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcb10, u32(u32, u32)> Item__is_item;
inline constexpr guest::Function<0x00303110, u32(u32, u32)> slot_2_if_class_3_00303110;
inline constexpr guest::Function<0x00303138, u32(u32, u32)> slot_3_if_class_4;
inline constexpr guest::Function<0x003031c8, u32(u32, u32)> slot_1_if_class_2_003031c8;
inline constexpr guest::Function<0x003031f0, u32(u32)> item_if_class_1;
inline constexpr guest::Function<0x00303770, u32(u32)> player_record_for_slot;
inline constexpr guest::Function<0x0030b654, u32(u32, u32)> item_has_valid_data;
inline constexpr guest::Function<0x005361a8, u32(u32, u32)> Item__data;
inline constexpr guest::Function<0x006ba62c, u32(u32, u32)> convert_to_earlier_form;
inline constexpr guest::Function<0x0070f010, u32(u32, u32)> slots_slot_5_if_class_6;
inline constexpr guest::Function<0x0070f034, u32(u32, u32)> slots_slot_4_if_class_5;
inline constexpr guest::Function<0x0071c124, u32(u32, u32)> call_0071c124;
inline constexpr guest::Function<0x0072031c, u32(u32)> member_address_0x2f2_;
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;
inline constexpr guest::Function<0x007203f0, u32(u32)> member_address_0x2f6_;
inline constexpr guest::Function<0x007485b4, u32(u32, u32)> rule_value;
inline constexpr guest::Function<0x00768fac, u32(u32)> call_00768fac;
inline constexpr guest::Function<0x00769cc0, u32(u32)> call_00769cc0;

struct __attribute__((packed)) Frame_006ff640 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006ff640, word_0, 0x0);
GUEST_SIZE(Frame_006ff640, 0x4);

void f_006ff640(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006ff640> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_11 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_15 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_19 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_23 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_27 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r0_53 = 0;
    u32 r0_54 = 0;
    u32 r1_34 = 0;
    frame->word_0 = r3;
    u32 r5 = r0;
    u32 r6 = 0u;
    u32 r9 = r1;
    u32 r8 = r2;
    do {
        r4 = 0u;
        do {
            u32 r0_1 = call_00720358(r9, r6, r4, 0u);
            u32 r0_2 = call_00768fac(r0_1);
            if (r0_2 == 0) {
                u32 r0_3 = Item__is_item(r0_1, guest::cpu()->r[1]);
                if (r0_3 == 0) {
                    goto L_6ff998;
                }
                u32 r0_4 = item_has_valid_data(r0_1, guest::cpu()->r[1]);
                if (r0_4 == 0) {
                    goto L_6ff998;
                }
                u32 r0_5 = Item__is_item(r0_1, guest::cpu()->r[1]);
                if (r0_5 == 0) {
                    goto L_6ff998;
                }
                copy_item_002fc934(frame.at(0).addr(), r0_1);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                r0_9 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                if (r0_9 != 0) {
                    goto L_6ff90c;
                }
                goto L_6ff990;
            }
            r0_10 = call_00769cc0(r0_1);
            r0_11 = player_record_for_slot(r8);
            if (r0_11 == 0) {
                goto L_6ff998;
            }
            r0_13 = call_0071c124(r0_11 + 0x5544u, r0_10);  // (from the original)
            r0_14 = item_if_class_1(r0_13);
            r0_15 = Item__is_item(r0_14, guest::cpu()->r[1]);
            r1_11 = guest::cpu()->r[1];
            if (r0_15 != 0) {
                copy_item_002fc934(frame.at(0).addr(), r0_14);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                u32 r0_19 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                r1_11 = guest::cpu()->r[1];
                if (r0_19 != 0) {
                    u32 r0_20 = rule_value(r0_19, r1_11);
                    r1_11 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_20 + r1_11;
                }
            }
            r0_21 = slot_1_if_class_2_003031c8(r0_13, r1_11);
            r0_22 = Item__is_item(r0_21, guest::cpu()->r[1]);
            r1_15 = guest::cpu()->r[1];
            if (r0_22 != 0) {
                copy_item_002fc934(frame.at(0).addr(), r0_21);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                u32 r0_26 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                r1_15 = guest::cpu()->r[1];
                if (r0_26 != 0) {
                    u32 r0_27 = rule_value(r0_26, r1_15);
                    r1_15 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_27 + r1_15;
                }
            }
            r0_28 = slot_2_if_class_3_00303110(r0_13, r1_15);
            r0_29 = Item__is_item(r0_28, guest::cpu()->r[1]);
            r1_19 = guest::cpu()->r[1];
            if (r0_29 != 0) {
                copy_item_002fc934(frame.at(0).addr(), r0_28);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                u32 r0_33 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                r1_19 = guest::cpu()->r[1];
                if (r0_33 != 0) {
                    u32 r0_34 = rule_value(r0_33, r1_19);
                    r1_19 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_34 + r1_19;
                }
            }
            r0_35 = slot_3_if_class_4(r0_13, r1_19);
            r0_36 = Item__is_item(r0_35, guest::cpu()->r[1]);
            r1_23 = guest::cpu()->r[1];
            if (r0_36 != 0) {
                copy_item_002fc934(frame.at(0).addr(), r0_35);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                u32 r0_40 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                r1_23 = guest::cpu()->r[1];
                if (r0_40 != 0) {
                    u32 r0_41 = rule_value(r0_40, r1_23);
                    r1_23 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_41 + r1_23;
                }
            }
            r0_42 = slots_slot_5_if_class_6(r0_13, r1_23);
            r0_43 = Item__is_item(r0_42, guest::cpu()->r[1]);
            r1_27 = guest::cpu()->r[1];
            if (r0_43 != 0) {
                copy_item_002fc934(frame.at(0).addr(), r0_42);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                u32 r0_47 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                r1_27 = guest::cpu()->r[1];
                if (r0_47 != 0) {
                    u32 r0_48 = rule_value(r0_47, r1_27);
                    r1_27 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_48 + r1_27;
                }
            }
            r0_49 = slots_slot_4_if_class_5(r0_13, r1_27);
            r0_50 = Item__is_item(r0_49, guest::cpu()->r[1]);
            if (r0_50 == 0) {
                goto L_6ff998;
            }
            r0_51 = frame.at(0).addr();
            copy_item_002fc934(r0_51, r0_49);
            r0_52 = frame.at(0).addr();
            convert_to_earlier_form(r0_52, guest::cpu()->r[1]);
            r0_53 = frame.at(0).addr();
            r0_9 = Item__data(r0_53, guest::cpu()->r[1]);
            if (r0_9 == 0) {
                goto L_6ff990;
            }
L_6ff90c:;
            r0_54 = rule_value(r0_9, guest::cpu()->r[1]);
            *gptr<u32>(r5) = r0_54 + *gptr<u32>(r5);
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
            u32 r0_55 = call_00720358(r9, r6, r4, 1u);
            u32 r0_56 = Item__is_item(r0_55, guest::cpu()->r[1]);
            r1_34 = guest::cpu()->r[1];
            if (r0_56 != 0) {
                u32 r0_57 = item_has_valid_data(r0_55, r1_34);
                r1_34 = guest::cpu()->r[1];
                if (r0_57 != 0) {
                    u32 r0_58 = Item__is_item(r0_55, r1_34);
                    if (r0_58 != 0) {
                        copy_item_002fc934(frame.at(0).addr(), r0_55);
                        convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                        u32 r0_62 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                        r1_34 = guest::cpu()->r[1];
                        if (r0_62 != 0) {
                            u32 r0_63 = rule_value(r0_62, r1_34);
                            *gptr<u32>(r5) = r0_63 + *gptr<u32>(r5);
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
    u32 r0_64 = member_address_0x2f2_(r9);
    u32 r0_65 = Item__is_item(r0_64, r1_34);
    if (r0_65 != 0) {
        r1_34 = r0_64;
        copy_item_002fc934(frame.at(0).addr(), r1_34);
        convert_to_earlier_form(frame.at(0).addr(), r1_34);
        u32 r0_69 = Item__data(frame.at(0).addr(), r1_34);
        if (r0_69 != 0) {
            u32 r0_70 = rule_value(r0_69, r1_34);
            *gptr<u32>(r5) = r0_70 + *gptr<u32>(r5);
        }
    }
    u32 r0_71 = member_address_0x2f6_(r9);
    u32 r0_72 = Item__is_item(r0_71, r1_34);
    if (r0_72 != 0) {
        copy_item_002fc934(frame.at(0).addr(), r0_71);
        convert_to_earlier_form(frame.at(0).addr(), r0_71);
        u32 r0_76 = Item__data(frame.at(0).addr(), r0_71);
        if (r0_76 != 0) {
            u32 r0_77 = rule_value(r0_76, r0_71);
            *gptr<u32>(r5) = r0_77 + *gptr<u32>(r5);
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
GUEST_OFFSET(Local_006ffb40_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006ffb40_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006ffb40_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006ffb40_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006ffb40_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006ffb40_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_006ffb40_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_006ffb40_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_006ffb40_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_006ffb40_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_006ffb40_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_006ffb40_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_006ffb40_ea_1, word_30, 0x30);

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
GUEST_OFFSET(Local_006ffb40_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006ffb40_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006ffb40_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006ffb40_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_006ffb40_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_006ffb40_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_006ffb40_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_006ffb40_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_006ffb40_ea_2, word_20, 0x20);

inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;
inline constexpr guest::Function<0x0030512c, u32(u32, u32, u32, u32)> record_302_address_0030512c;
inline constexpr guest::Function<0x00305158, u32(u32)> field_differs_1e_u8_0x1_305158;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;
inline constexpr guest::Function<0x00748724, u32(u32, u32, u32, u32)> ItemData__group;

struct __attribute__((packed)) Frame_006ffb40 {
    u8 unknown_0[0x67];  // (not read or written by name)
    u8 byte_67;
    u32 word_68;
    u8 unknown_6c[0x8];  // (not read or written by name)
    u32 word_74;
    u8 unknown_78[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006ffb40, byte_67, 0x67);
GUEST_OFFSET(Frame_006ffb40, word_68, 0x68);
GUEST_OFFSET(Frame_006ffb40, word_74, 0x74);
GUEST_SIZE(Frame_006ffb40, 0xa0);

void f_006ffb40(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006ffb40> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_10 = 0;
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
    clear(frame.at(0).addr(), 0x67u, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    frame->byte_67 = 0;
L_6ffb6c:;
    u32 r0_3 = record_302_address_0030512c(frame->word_74, r8 & 0xffu, r2, r3);  // (from the original)
    frame->word_68 = r0_3;
    u32 r0_4 = field_differs_1e_u8_0x1_305158(r0_3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        if (r8 == 2u) {
            r8 = 3u;
            guest::preempt();
            goto L_6ffb6c;
        } else {
            r7 = 0u;
        }
        do {
            r4 = 0u;
            do {
                u32 r0_6 = call_00720358(frame->word_68, r7, r4, 0u);
                u32 r0_7 = Item__is_item(r0_6);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    u32 r5_1 = frame.at(0).addr();
                    u32 r0_8 = Item__data(r0_6, guest::cpu()->r[1], r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_8 != 0) {
                        u32 r1_5 = *gptr<u8>(r0_8 + 0x19u);  // (from the original)
                        u32 r6_1 = r1_5 & 0xfu;  // (from the original)
                        if (r6_1 >= 0xeu) {  // (from the original)
                            r6_1 = 0u;
                        }
                        u32 r0_9 = ItemData__group(r0_8, r1_5, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r6_1 != 0) {
                            if (r6_1 == 1u) {
                                *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 2u);
                                r0_10 = u32(frame->byte_67) | 2u;
                                goto L_6ffc74;
                            }
                            if (r6_1 == 2u) {
                                *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 4u);
                                r0_10 = u32(frame->byte_67) | 4u;
                                goto L_6ffc74;
                            }
                            if (r6_1 == 3u) {
                                *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 8u);
                                r0_10 = u32(frame->byte_67) | 8u;
                                goto L_6ffc74;
                            }
                            if (r6_1 == 4u) {
                                *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 0x10u);  // (from the original)
                                r0_10 = u32(frame->byte_67) | 0x10u;  // (from the original)
                                goto L_6ffc74;
                            }
                            goto L_6ffc78;
                        }
                        *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 1u);
                        frame->byte_67 = u8(u32(frame->byte_67) | 1u);
                        goto L_6ffc78;
L_6ffc74:;
                        frame->byte_67 = u8(r0_10);
                    }
                }
L_6ffc78:;
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0xau);  // (from the original)
            r7 += 1u;
            guest::preempt();
        } while (r7 < 0xau);  // (from the original)
    }
    r8 += 1u;
    if (r8 >= 6u) {
        *gptr<u8>(r9) = 0x67;  // (from the original)
        r1 = frame.at(0).addr();
        if (frame->byte_67 != 0x1fu) {  // (from the original)
            r1_6 = 0u;
        } else {
            r0 = 0u;
            if (r10 != 0) {
                do {
                    if (*gptr<u8>(r1 + r0) == 0x1fu && r0 != 0x65u) {  // (from the original)
                        r1_6 = 0x249f0u;  // (from the original)
                        *gptr<u8>(r9) = u8(r0);
                        goto L_6ffd68;
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
                r0 = r0 + 1u & 0xffu;  // (from the original)
                if (r0 < 0x67u) {  // (from the original)
                    guest::preempt();
                    goto L_6ffd34;
                }
                goto L_6ffd64;
            }
            r1_6 = 0x1388u;  // (from the original)
            *gptr<u8>(r9) = u8(r0);
            goto L_6ffd68;
L_6ffd64:;
            r1_6 = 0x9c4u;  // (from the original)
        }
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
        return;
    }
    guest::preempt();
    goto L_6ffb6c;
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
GUEST_OFFSET(Local_006ffd84_r1_4, half_0, 0x0);
GUEST_OFFSET(Local_006ffd84_r1_4, half_2, 0x2);
GUEST_OFFSET(Local_006ffd84_r1_4, half_4, 0x4);

inline constexpr u32 global_00952c16_address = 0x00952c16u;
inline constexpr u32 global_00a14b30_address = 0x00a14b30u;
inline constexpr guest::Function<0x002f86c0, u32(u32, u32)> call_002f86c0;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;
inline constexpr guest::Function<0x00301df4, u32(u32, u32, u32)> player_in_array;

u32 f_006ffd84(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r5 = 0u;
    u32 r7 = global_00952c16_address;
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
    u32 r0_1 = get_save_data(0u, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r10 = global_00a14b30_address;
    u32 r6 = r0_1 + 0xa0u;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r0_2 = player_in_array(r6, r4 & 0xffu, r2);  // (from the original)
        r0_4 = PersonalId__is_set(r0_2 + 0x55a6u);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_4 != 0) {
            gptr<Local_006ffd84_r1_4> r1_4 = gptr<Local_006ffd84_r1_4>(r10 + r4 * 6u);
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
