// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "core/grid_rect.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006f09d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random item from the set bits of the item bit set, of the wanted type.
namespace d_006f09d4 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x00767a44, u32(u32, u32)> Item__display_variant;
inline constexpr guest::Function<0x007703e0, u32(u32, u32)> ItemBitSet__index_of_nth_set_bit;

struct __attribute__((packed)) PickRandomSetItemFrame {
    u32 word_0;
};
GUEST_OFFSET(PickRandomSetItemFrame, word_0, 0x0);
GUEST_SIZE(PickRandomSetItemFrame, 0x4);

void pick_random_set_item(u32 r0, u32 k, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<PickRandomSetItemFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = r0;
    u32 r6 = k;
    k = 0u;
    u32 i = k;
    do {
        r0 = gptr<u32>(r5)[i];
        if (r0 != 0) {
            do {
                if ((r0 & 1u) != 0) {
                    k += 1u;
                }
                r0 >>= 1;
                guest::preempt();
            } while (r0 != 0);
        }
        i += 1u;
        guest::preempt();
    } while (i < 0xbau);
    u32 random = random_below(k, k, i, r3);
    u32 r0_2 = ItemBitSet__index_of_nth_set_bit(r5, random);
    i = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r8 = 0x172bu;
    u32 r7 = r0_2;
    u32 j = 0u;
    u32 r9 = 1u;
    do {
        construct_item(frame.at(0).addr(), uxth(j + 0x2000u), i, r3);
        u32 r1_2 = frame.at(0).addr();
        u32 r0_4 = Item__display_variant(r1_2, r1_2);
        i = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            u32 r0_6 = indexed_item_type(frame.at(0).addr(), guest::cpu()->r[1], i, r3);
            i = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_6 != r6 && j <= r8) {
                u32 r0_7 = j >> 5;
                i = gptr<u32>(r5)[r0_7] & ~(r9 << (j & 0x1fu));
                *gptr<u32>(r5 + (r0_7 << 2)) = i;
            }
        }
        j += 1u;
        guest::preempt();
    } while (j < r8);
    i = 0u;
    r3 = r5;
    k = i;
    do {
        r0 = gptr<u32>(r3)[k];
        if (r0 != 0) {
            do {
                if ((r0 & 1u) != 0) {
                    i += 1u;
                }
                r0 >>= 1;
                guest::preempt();
            } while (r0 != 0);
        }
        k += 1u;
        guest::preempt();
    } while (k < 0xbau);
    if (i == 0 && r7 <= r8) {
        u32 r0_8 = r7 >> 5;
        k = gptr<u32>(r5)[r0_8] | r9 << (r7 & 0x1fu);
        *gptr<u32>(r3 + (r0_8 << 2)) = k;
    }
    guest::cpu()->r[1] = k;
}

}  // namespace d_006f09d4
GUEST_EXPORT_FRAMED(0x006f09d4, d_006f09d4::pick_random_set_item, 0x43f0);  // pushes {j, r5, r6, r7, r8, r9, lr} first, as the original

// f_006f14b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the bits of the category's items that pass its check (the insect flag for insects).
namespace d_006f14b0 {

struct __attribute__((packed)) Info {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Info, word_0, 0x0);
GUEST_OFFSET(Info, word_4, 0x4);

inline constexpr guest::Function<0x0025591c, u32(u32)> Item__fish_info;
inline constexpr guest::Function<0x002ad1fc, u32(u32)> Item__insect_flag;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> category_info;

struct __attribute__((packed)) ItemBitSetAddCategoryFlaggedFrame {
    u32 word_0;
};
GUEST_OFFSET(ItemBitSetAddCategoryFlaggedFrame, word_0, 0x0);
GUEST_SIZE(ItemBitSetAddCategoryFlaggedFrame, 0x4);

void ItemBitSet__add_category_flagged(u32 item_bit_set, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemBitSetAddCategoryFlaggedFrame> frame;  // the original's stack frame
    u32 i = 0;
    frame->word_0 = r3;
    u32 r8 = item_bit_set;
    gptr<Info> info = gptr<Info>(category_info(r1, r1, r2, r3));
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = info->word_4;
    u32 r9 = 0x372au;
    u32 r10 = 1u;
    u32 r4 = uxth(info->word_0);
    u32 r7 = r4;
    if (r1 == 0x24u) {
        i = 0u;
        if (r6 >= 0u && r6 != 0) {
            do {
                construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
                u32 r0_4 = Item__insect_flag(frame.at(0).addr());
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_4 != 0) {
                    u32 r0_5 = r7 + i;
                    if (r0_5 <= r9) {
                        u32 r0_6 = r0_5 - 0x2000u;
                        u32 r1_3 = r0_6 >> 5;
                        r2 = gptr<u32>(r8)[r1_3] | r10 << (r0_6 & 0x1fu);
                        *gptr<u32>(r8 + (r1_3 << 2)) = r2;
                    }
                }
                r4 += 1u;
                i += 1u;
                guest::preempt();
            } while (r6 > i);
            return;
        }
    } else {
        i = 0u;
        if (r6 >= 0u && r6 != 0) {
            do {
                construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
                u32 fish_info_2 = Item__fish_info(frame.at(0).addr());
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (fish_info_2 != 0) {
                    u32 r0_10 = r7 + i;
                    if (r0_10 <= r9) {
                        u32 r0_11 = r0_10 - 0x2000u >> 5;
                        r2 = gptr<u32>(r8)[r0_11] | r10 << (r0_10 - 0x2000u & 0x1fu);
                        *gptr<u32>(r8 + (r0_11 << 2)) = r2;
                    }
                }
                r4 += 1u;
                i += 1u;
                guest::preempt();
            } while (r6 > i);
        }
    }
}

}  // namespace d_006f14b0
GUEST_EXPORT_FRAMED(0x006f14b0, d_006f14b0::ItemBitSet__add_category_flagged, 0x4ff0);  // pushes {r4, i, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006f15c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the candidate item set from the trait bytes and picks an item.
namespace d_006f15c4 {

struct __attribute__((packed)) Local_006f15c4_ea_1 {
    u32 item_set;
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
GUEST_OFFSET(Local_006f15c4_ea_1, item_set, 0x0);
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

struct __attribute__((packed)) Info {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Info, word_0, 0x0);
GUEST_OFFSET(Info, word_4, 0x4);

inline constexpr guest::Function<0x001b1b40, u32(u32, u32)> copy_3_bytes;
inline constexpr guest::Function<0x002fae84, u32(u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> category_info;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x0070b510, u32(u32, u32, u32, u32)> TraitBytes__first_field_0;
inline constexpr guest::Function<0x0070b574, u32(u32, u32, u32, u32)> TraitBytes__first_field_3;
inline constexpr guest::Function<0x0070b65c, u32(u32, u32)> TraitBytes__field_3_value;
inline constexpr guest::Function<0x0070b694, u32(u32, u32)> TraitBytes__field_2_value;
inline constexpr guest::Function<0x0070b6d0, u32(u32, u32)> TraitBytes__field_1_value;
inline constexpr guest::Function<0x0070b70c, u32(u32, u32)> TraitBytes__field_0_value;

struct __attribute__((packed)) PickItemByTraitsFrame {
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
GUEST_OFFSET(PickItemByTraitsFrame, word_8, 0x8);
GUEST_OFFSET(PickItemByTraitsFrame, word_c, 0xc);
GUEST_OFFSET(PickItemByTraitsFrame, word_10, 0x10);
GUEST_OFFSET(PickItemByTraitsFrame, word_18, 0x18);
GUEST_OFFSET(PickItemByTraitsFrame, word_20, 0x20);
GUEST_SIZE(PickItemByTraitsFrame, 0x48);

u32 pick_item_by_traits(u32 item_set, u32 j, u32 r2, u32 r3) {
    guest::StackFrameOf<PickItemByTraitsFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 i = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_18 = 0;
    u32 r1_10 = 0;
    u32 trait_bytes = 0;
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
    gptr<Local_006f15c4_ea_1> ea_1 = gptr<Local_006f15c4_ea_1>(frame.at(0x14).addr());
    ea_1->item_set = item_set;
    ea_1->word_4 = j;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = i;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    u32 r5_1 = r2;
    r9 = item_set;
    gptr<Info> info = gptr<Info>(category_info(frame->word_18, j, r2, r3));
    r6 = info->word_4;
    u32 r1_1 = uxth(info->word_0);
    r10 = r1_1;
    construct_item(frame.at(4).addr(), r1_1);
    u32 item_data = Item__data(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = item_data;
    u32 data_base = get_data_base(item_data, guest::cpu()->r[1]);
    u32 r0_7 = *gptr<u8>(data_base + 0x6214eu);
    u32 r1_4 = frame->word_20 - 1u;
    r7 = (r1_4 & r0_7 >> 4) == 0;
    u32 data_base_2 = get_data_base(r0_7, r1_4);
    copy_3_bytes(frame.at(0).addr(), data_base_2 + 0x621ccu);
    r11 = TraitBytes__field_3_value(frame.at(0).addr(), frame->word_18);
    frame->word_8 = TraitBytes__field_2_value(frame.at(0).addr(), frame->word_18);
    frame->word_10 = TraitBytes__field_1_value(frame.at(0).addr(), frame->word_18);
    u32 r0_17 = TraitBytes__field_0_value(frame.at(0).addr(), frame->word_18);
    j = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    frame->word_c = r0_17;
    if (r5_1 == 2u) {
        goto L_6f16a0;
    }
    i = 0u;
    if (r6 >= 0u && r6 != 0) {
        r8 = 0x372au;
    } else {
        goto L_6f19d0;
    }
L_6f1688:;
    r0_18 = *gptr<u8>(r4 + 0xdu);
    if (r0_18 >= 0xb9u || r0_18 != 0x14u) {
        goto L_6f187c;
    }
    goto L_6f1868;
L_6f16a0:;
    r1_10 = frame->word_18;
    trait_bytes = frame.at(0).addr();
    r0_20 = TraitBytes__first_field_3(trait_bytes, r1_10, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0_20;
    i = 0u;
    if (r6 < 0u || r6 == 0) {
        goto L_6f19d0;
    }
    do {
        u32 r1_11 = *gptr<u8>(r4 + 0xdu);
        u32 r0_21 = r1_11;
        if (r1_11 >= 0xb9u) {
            r1_11 = 0u;
        }
        if (r1_11 != r8) {
            if (r0_21 < 0xb9u && r0_21 == 0x14u) {
                if (r7 != 0) {
                    goto L_6f170c;
                }
                r1_11 = *gptr<u8>(r4 + 0x1bu);
                if ((r1_11 & 1u) == 0) {
                    goto L_6f170c;
                }
            }
            if (r0_21 >= 0xb9u || r0_21 != 0x15u) {
                goto L_6f1768;
            }
            goto L_6f1754;
L_6f170c:;
            r0_22 = random_below(0x64u, r1_11, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_22 >= r11) {
                goto L_6f1854;
            }
            r2 = 0x372au;
            r1_12 = r10 + i;
            if (r2 < r1_12) {
                goto L_6f1854;
            }
            r1_13 = r1_12 - 0x2000u >> 5;
            r2 = gptr<u32>(r9)[r1_13] | 1u << (r1_12 - 0x2000u & 0x1fu);
            *gptr<u32>(r9 + (r1_13 << 2)) = r2;
            goto L_6f1854;
L_6f1754:;
            if (r7 != 0) {
                goto L_6f177c;
            }
            r1_11 = *gptr<u8>(r4 + 0x1bu);
            if ((r1_11 & 1u) == 0) {
                goto L_6f177c;
            }
L_6f1768:;
            if (r0_21 >= 0xb9u || r0_21 != 0x16u) {
                goto L_6f17bc;
            }
            goto L_6f17a8;
L_6f177c:;
            r0_23 = random_below(0x64u, r1_11, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_23 >= frame->word_8) {
                goto L_6f1854;
            }
            r2 = 0x372au;
            r1_14 = r10 + i;
            r0_24 = r9;
            if (r2 >= r1_14) {
                goto L_6f1838;
            }
            goto L_6f1854;
L_6f17a8:;
            if (r7 != 0) {
                goto L_6f17d0;
            }
            r1_11 = *gptr<u8>(r4 + 0x1bu);
            if ((r1_11 & 1u) == 0) {
                goto L_6f17d0;
            }
L_6f17bc:;
            if (r0_21 >= 0xb9u || r0_21 != 0x17u) {
                goto L_6f1854;
            }
            goto L_6f17fc;
L_6f17d0:;
            r0_25 = random_below(0x64u, r1_11, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_25 >= frame->word_10) {
                goto L_6f1854;
            }
            r2 = 0x372au;
            r1_14 = r10 + i;
            r0_24 = r9;
            if (r2 >= r1_14) {
                goto L_6f1838;
            }
            goto L_6f1854;
L_6f17fc:;
            if (r7 == 0 && (u32(*gptr<u8>(r4 + 0x1bu)) & 1u) != 0) {
                goto L_6f1854;
            }
            r0_26 = random_below(0x64u, r1_11, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_26 >= frame->word_c) {
                goto L_6f1854;
            }
            r2 = 0x372au;
            r1_14 = r10 + i;
            r0_24 = r9;
            if (r2 < r1_14) {
                goto L_6f1854;
            }
L_6f1838:;
            r3 = r1_14 - 0x2000u;
            u32 r1_15 = r3 >> 5;
            r2 = gptr<u32>(r0_24)[r1_15] | 1u << (r3 & 0x1fu);
            *gptr<u32>(r9 + (r1_15 << 2)) = r2;
        }
L_6f1854:;
        i += 1u;
        r4 += 0x1eu;
        guest::preempt();
    } while (r6 > i);
    goto L_6f19d0;
L_6f1868:;
    if (r7 != 0) {
        goto L_6f1890;
    }
    j = *gptr<u8>(r4 + 0x1bu);
    if ((j & 1u) == 0) {
        goto L_6f1890;
    }
L_6f187c:;
    if (r0_18 >= 0xb9u || r0_18 != 0x15u) {
        goto L_6f18c8;
    }
    goto L_6f18b4;
L_6f1890:;
    r0_27 = random_below(0x64u, j, r2, r3);
    j = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_27 >= r11) {
        goto L_6f19c0;
    }
    r0_28 = r10 + i;
    if (r8 >= r0_28) {
        r0_30 = r0_28 - 0x2000u;
        j = 1u;
        r12_1 = r0_30 >> 5;
        r2 = gptr<u32>(r9)[r12_1];
        *gptr<u32>(r9 + (r12_1 << 2)) = r2 | j << (r0_30 & 0x1fu);
        goto L_6f19c0;
    }
    goto L_6f19c0;
L_6f18b4:;
    if (r7 != 0) {
        goto L_6f18dc;
    }
    j = *gptr<u8>(r4 + 0x1bu);
    if ((j & 1u) == 0) {
        goto L_6f18dc;
    }
L_6f18c8:;
    if (r0_18 >= 0xb9u || r0_18 != 0x16u) {
        goto L_6f1930;
    }
    goto L_6f191c;
L_6f18dc:;
    r0_29 = random_below(0x64u, j, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    j = frame->word_8;
    if (r0_29 >= j) {
        goto L_6f19c0;
    }
    r0_28 = r10 + i;
    if (r8 < r0_28) {
        goto L_6f19c0;
    }
    r0_30 = r0_28 - 0x2000u;
    j = 1u;
    r12_1 = r0_30 >> 5;
    r2 = gptr<u32>(r9)[r12_1];
    *gptr<u32>(r9 + (r12_1 << 2)) = r2 | j << (r0_30 & 0x1fu);
    goto L_6f19c0;
L_6f191c:;
    if (r7 != 0) {
        goto L_6f1944;
    }
    j = *gptr<u8>(r4 + 0x1bu);
    if ((j & 1u) == 0) {
        goto L_6f1944;
    }
L_6f1930:;
    if (r0_18 >= 0xb9u || r0_18 != 0x17u) {
        goto L_6f19c0;
    }
    goto L_6f196c;
L_6f1944:;
    r0_31 = random_below(0x64u, j, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    j = frame->word_10;
    if (r0_31 >= j) {
        goto L_6f19c0;
    }
    j = r10 + i;
    r0_32 = r9;
    if (r8 >= j) {
        goto L_6f19a4;
    }
    goto L_6f19c0;
L_6f196c:;
    if (r7 == 0 && (u32(*gptr<u8>(r4 + 0x1bu)) & 1u) != 0) {
        goto L_6f19c0;
    }
    r0_33 = random_below(0x64u, j, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    j = frame->word_c;
    if (r0_33 >= j) {
        goto L_6f19c0;
    }
    j = r10 + i;
    r0_32 = r9;
    if (r8 < j) {
        goto L_6f19c0;
    }
L_6f19a4:;
    r3 = j - 0x2000u;
    j = r3 >> 5;
    r2 = gptr<u32>(r0_32)[j] | 1u << (r3 & 0x1fu);
    *gptr<u32>(r9 + (j << 2)) = r2;
L_6f19c0:;
    i += 1u;
    r4 += 0x1eu;
    if (r6 > i) {
        guest::preempt();
        goto L_6f1688;
    }
L_6f19d0:;
    r2 = 0u;
    j = r2;
    do {
        item_set = gptr<u32>(r9)[j];
        if (item_set != 0) {
            do {
                if ((item_set & 1u) != 0) {
                    r2 += 1u;
                }
                item_set >>= 1;
                guest::preempt();
            } while (item_set != 0);
        }
        j += 1u;
        guest::preempt();
    } while (j < 0xbau);
    if (r2 != 0) {
        gptr<Local_006f15c4_ea_2> ea_2 = gptr<Local_006f15c4_ea_2>(frame.at(0x24).addr());
        u32 r4_1 = ea_2->word_0;
        u32 r5_2 = ea_2->word_4;
        u32 r6_1 = ea_2->word_8;
        u32 r7_1 = ea_2->word_c;
        u32 r8_1 = ea_2->word_10;
        u32 r9_1 = ea_2->word_14;
        u32 r10_1 = ea_2->word_18;
        u32 r11_1 = ea_2->word_1c;
        guest::cpu()->r[1] = j;
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
    u32 r0_35 = TraitBytes__first_field_0(frame.at(0).addr(), frame->word_18, r2, r3);
    ItemSet__add_group_without_flags(r9, frame->word_18, r0_35, frame->word_20);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    j = r2;
    do {
        item_set = gptr<u32>(r9)[j];
        if (item_set != 0) {
            do {
                if ((item_set & 1u) != 0) {
                    r2 += 1u;
                }
                item_set >>= 1;
                guest::preempt();
            } while (item_set != 0);
        }
        j += 1u;
        guest::preempt();
    } while (j < 0xbau);
    if (r2 == 0) {
        item_set = Item__data(frame.at(4).addr(), j, r2, r3);
        j = guest::cpu()->r[1];
        if (item_set != 0) {
            j = 0u;
            if (r6 >= 0u && r6 != 0) {
                if (r7 != 0) {
                    goto L_6f1ae4;
                }
                do {
                    if ((u32(*gptr<u8>(item_set + 0x1bu)) & 1u) == 0) {
                        goto L_6f1ae4;
                    }
                    j += 1u;
                    item_set += 0x1eu;
                    guest::preempt();
                } while (r6 > j);
            }
        }
    }
L_6f1ac4:;
    ea_3 = gptr<Local_006f15c4_ea_3>(frame.at(0x24).addr());
    r4_2 = ea_3->word_0;
    r5_3 = ea_3->word_4;
    r6_2 = ea_3->word_8;
    r7_2 = ea_3->word_c;
    r8_2 = ea_3->word_10;
    r9_2 = ea_3->word_14;
    r10_2 = ea_3->word_18;
    r11_2 = ea_3->word_1c;
    guest::cpu()->r[1] = j;
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
    u32 r0_37 = r10 + j;
    j = 0x372au;
    if (r0_37 > j) {
        guest::preempt();
        goto L_6f1ac4;
    }
    u32 r0_38 = r0_37 - 0x2000u >> 5;
    j = gptr<u32>(r9)[r0_38] | 1u << (r0_37 - 0x2000u & 0x1fu);
    *gptr<u32>(r9 + (r0_38 << 2)) = j;
    guest::preempt();
    goto L_6f1ac4;
}

}  // namespace d_006f15c4
GUEST_EXPORT(0x006f15c4, d_006f15c4::pick_item_by_traits);

// f_006f1cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the items of the category (by its sections for category 0x27) that pass the check.
namespace d_006f1cfc {

struct __attribute__((packed)) Info {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Info, word_0, 0x0);
GUEST_OFFSET(Info, word_4, 0x4);

inline constexpr guest::Function<0x0025591c, u32(u32)> Item__fish_info;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> category_info;
inline constexpr guest::Function<0x007692f0, u32(u32, u32, u32, u32)> Item__section_in_category_27;

struct __attribute__((packed)) ItemBitSetCountCategory27Frame {
    u32 word_0;
};
GUEST_OFFSET(ItemBitSetCountCategory27Frame, word_0, 0x0);
GUEST_SIZE(ItemBitSetCountCategory27Frame, 0x4);

u32 ItemBitSet__count_category_27(u32 item_bit_set, u32 j, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemBitSetCountCategory27Frame> frame;  // the original's stack frame
    u32 i = 0;
    frame->word_0 = r3;
    u32 r7 = item_bit_set;
    u32 r9 = j;
    gptr<Info> info = gptr<Info>(category_info(0x27u, j, r2, r3));
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = info->word_4;
    u32 r10 = 0x372au;
    u32 r11 = 1u;
    u32 r4 = uxth(info->word_0);
    u32 r8 = r4;
    if (r9 == 3u) {
        goto L_6f1dec;
    }
    i = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 fish_info_3 = Item__fish_info(frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (fish_info_3 != 0) {
                u32 r0_6 = Item__section_in_category_27(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_6 == r9) {
                    u32 r0_7 = r8 + i;
                    if (r0_7 <= r10) {
                        u32 r0_8 = r0_7 - 0x2000u >> 5;
                        r2 = gptr<u32>(r7)[r0_8] | r11 << (r0_7 - 0x2000u & 0x1fu);
                        *gptr<u32>(r7 + (r0_8 << 2)) = r2;
                    }
                }
            }
            r4 += 1u;
            i += 1u;
            guest::preempt();
        } while (r6 > i);
    }
L_6f1dac:;
    r2 = 0u;
    j = r2;
    do {
        item_bit_set = gptr<u32>(r7)[j];
        if (item_bit_set != 0) {
            do {
                if ((item_bit_set & 1u) != 0) {
                    r2 += 1u;
                }
                item_bit_set >>= 1;
                guest::preempt();
            } while (item_bit_set != 0);
        }
        j += 1u;
        guest::preempt();
    } while (j < 0xbau);
    guest::cpu()->r[1] = j;
    return r2 != 0;
L_6f1dec:;
    i = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 fish_info_4 = Item__fish_info(frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (fish_info_4 != 0) {
                u32 r0_13 = r8 + i;
                if (r0_13 <= r10) {
                    u32 r0_14 = r0_13 - 0x2000u >> 5;
                    r2 = gptr<u32>(r7)[r0_14] | r11 << (r0_13 - 0x2000u & 0x1fu);
                    *gptr<u32>(r7 + (r0_14 << 2)) = r2;
                }
            }
            r4 += 1u;
            i += 1u;
            guest::preempt();
        } while (r6 > i);
        guest::preempt();
        goto L_6f1dac;
    }
    guest::preempt();
    goto L_6f1dac;
}

}  // namespace d_006f1cfc
GUEST_EXPORT_FRAMED(0x006f1cfc, d_006f1cfc::ItemBitSet__count_category_27, 0x4ff0);  // pushes {r4, i, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006f1f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds group 5 (when r3), 3 and 4 (when the stack arguments say so) of `index` to the set.
namespace d_006f1f14 {

struct __attribute__((packed)) Local_006f1f14_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006f1f14_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006f1f14_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> ItemSet__add_group;

struct __attribute__((packed)) ItemSetAddGroupsFrame {
    u32 word_0;
};
GUEST_OFFSET(ItemSetAddGroupsFrame, word_0, 0x0);
GUEST_SIZE(ItemSetAddGroupsFrame, 0x4);

u32 ItemSet__add_groups(u32 item_set, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemSetAddGroupsFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 index = r1;
    u32 set = item_set;
    gptr<Local_006f1f14_ea_1> ea_1 = gptr<Local_006f1f14_ea_1>(frame.at(0x20).addr());
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    if (r3 != 0) {
        frame->word_0 = 0;
        item_set = ItemSet__add_group(item_set, 5u, r1, r2);
        r1 = guest::cpu()->r[1];
    }
    if (r4_1 != 0) {
        frame->word_0 = 0;
        item_set = ItemSet__add_group(set, 3u, index, r2);
        r1 = guest::cpu()->r[1];
    }
    if (r5_1 != 0) {
        frame->word_0 = 0;
        item_set = ItemSet__add_group(set, 4u, index, r2);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return item_set;
}

}  // namespace d_006f1f14
GUEST_EXPORT_FRAMED(0x006f1f14, d_006f1f14::ItemSet__add_groups, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006f2178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the insects that pass the check.
namespace d_006f2178 {

struct __attribute__((packed)) Info {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Info, word_0, 0x0);
GUEST_OFFSET(Info, word_4, 0x4);

inline constexpr guest::Function<0x002ad1fc, u32(u32)> Item__insect_flag;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> category_info;
inline constexpr guest::Function<0x00769bc4, u32(u32, u32, u32, u32)> Item__group_value;

struct __attribute__((packed)) ItemBitSetCountInsectsFrame {
    u32 word_0;
};
GUEST_OFFSET(ItemBitSetCountInsectsFrame, word_0, 0x0);
GUEST_SIZE(ItemBitSetCountInsectsFrame, 0x4);

u32 ItemBitSet__count_insects(u32 item_bit_set, u32 j, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemBitSetCountInsectsFrame> frame;  // the original's stack frame
    u32 i = 0;
    frame->word_0 = r3;
    u32 r7 = item_bit_set;
    u32 r9 = j;
    gptr<Info> info = gptr<Info>(category_info(0x24u, j, r2, r3));
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = info->word_4;
    u32 r10 = 0x372au;
    u32 r11 = 1u;
    u32 r4 = uxth(info->word_0);
    u32 r8 = r4;
    if (r9 == 6u) {
        goto L_6f2268;
    }
    i = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_4 = Item__insect_flag(frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                u32 r0_6 = Item__group_value(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_6 == r9) {
                    u32 r0_7 = r8 + i;
                    if (r0_7 <= r10) {
                        u32 r0_8 = r0_7 - 0x2000u >> 5;
                        r2 = gptr<u32>(r7)[r0_8] | r11 << (r0_7 - 0x2000u & 0x1fu);
                        *gptr<u32>(r7 + (r0_8 << 2)) = r2;
                    }
                }
            }
            r4 += 1u;
            i += 1u;
            guest::preempt();
        } while (r6 > i);
    }
L_6f2228:;
    r2 = 0u;
    j = r2;
    do {
        item_bit_set = gptr<u32>(r7)[j];
        if (item_bit_set != 0) {
            do {
                if ((item_bit_set & 1u) != 0) {
                    r2 += 1u;
                }
                item_bit_set >>= 1;
                guest::preempt();
            } while (item_bit_set != 0);
        }
        j += 1u;
        guest::preempt();
    } while (j < 0xbau);
    guest::cpu()->r[1] = j;
    return r2 != 0;
L_6f2268:;
    i = 0u;
    if (r6 >= 0u && r6 != 0) {
        do {
            construct_item(frame.at(0).addr(), uxth(r4), r2, r3);
            u32 r0_12 = Item__insect_flag(frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 != 0) {
                u32 r0_13 = r8 + i;
                if (r0_13 <= r10) {
                    u32 r0_14 = r0_13 - 0x2000u >> 5;
                    r2 = gptr<u32>(r7)[r0_14] | r11 << (r0_13 - 0x2000u & 0x1fu);
                    *gptr<u32>(r7 + (r0_14 << 2)) = r2;
                }
            }
            r4 += 1u;
            i += 1u;
            guest::preempt();
        } while (r6 > i);
        guest::preempt();
        goto L_6f2228;
    }
    guest::preempt();
    goto L_6f2228;
}

}  // namespace d_006f2178
GUEST_EXPORT_FRAMED(0x006f2178, d_006f2178::ItemBitSet__count_insects, 0x4ff0);  // pushes {r4, i, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006f2908: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds items of a group to an item set: picks items of the group's category by their traits, at random.
namespace d_006f2908 {

struct __attribute__((packed)) Info {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Info, word_0, 0x0);
GUEST_OFFSET(Info, word_4, 0x4);

inline constexpr guest::Function<0x001b1b40, u32(u32, u32)> copy_3_bytes;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x005359fc, u32(u32)> category_info;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x006f15c4, u32(u32, u32, u32, u32)> pick_item_by_traits;
inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_ItemSet__add_group;
inline constexpr guest::Function<0x006f2c1c, u32(u32, u32, u32, u32)> ItemSet__find_in_category;
inline constexpr guest::Function<0x0070b49c, u32(u32, u32)> TraitBytes__first_field_2;
inline constexpr guest::Function<0x0070b510, u32(u32, u32)> TraitBytes__first_field_0;
inline constexpr guest::Function<0x0070b574, u32(u32, u32)> TraitBytes__first_field_3;
inline constexpr guest::Function<0x0070b5e8, u32(u32, u32)> TraitBytes__first_field_1;
inline constexpr guest::Function<0x007485d0, u32(u32, u32, u32, u32)> ItemData__flag_1c_bit3;

struct __attribute__((packed)) ItemSetAddGroupFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(ItemSetAddGroupFrame, word_0, 0x0);
GUEST_SIZE(ItemSetAddGroupFrame, 0xc);

u32 ItemSet__add_group(u32 item_set, u32 j, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemSetAddGroupFrame> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 r0_7 = 0;
    u32 zf_2 = 0;
    u32 r0_12 = 0;
    u32 zf_1 = r2 == 2u;
    u32 r7 = r2;
    if (!zf_1) {
        zf_1 = r7 == 1u;
    }
    u32 r5_1 = *frame.at<u32>(0x30);
    u32 r10 = item_set;
    u32 r11_1 = r3;
    if (!zf_1) {
        if (r7 == 4u) {
            frame->word_0 = r5_1;
            call_ItemSet__add_group(item_set, j, 5u, r3);
            frame->word_0 = r5_1;
            call_ItemSet__add_group(r10, j, 6u, r11_1);
            goto L_6f29f4;
        }
        if (r7 == 3u) {
            r0_1 = random_below(3u, j, r2, r3);
            if (r0_1 == 0) {
                frame->word_0 = r5_1;
                return call_ItemSet__add_group(r10, j, 5u, r11_1);
            }
            if (r0_1 == 1u) {
                frame->word_0 = r5_1;
                return call_ItemSet__add_group(r10, j, 6u, r11_1);
            }
            if (r0_1 != 2u) {
                return r0_1;
            }
            goto L_6f29f4;
        }
        u32 data_base = get_data_base(item_set, j, r2, r3);
        copy_3_bytes(frame.at(4).addr(), data_base + 0x621ccu);
        if (r7 == 5u) {
            r0_7 = TraitBytes__first_field_0(frame.at(4).addr(), j);
            goto L_6f2aa8;
        }
        if (r7 == 6u) {
            r0_7 = TraitBytes__first_field_1(frame.at(4).addr(), j);
            goto L_6f2aa8;
        }
        if (r7 == 7u) {
            r0_7 = TraitBytes__first_field_2(frame.at(4).addr(), j);
            goto L_6f2aa8;
        }
        if (r7 == 8u) {
            r0_7 = TraitBytes__first_field_3(frame.at(4).addr(), j);
            goto L_6f2aa8;
        }
        goto L_6f2aac;
    }
    zf_2 = r3 == 0;
    if (zf_2) {
        return pick_item_by_traits(item_set, j, r2, r5_1);
    }
    r0_1 = ItemSet__find_in_category(item_set, j, r2, r5_1);
    return r0_1;
L_6f29f4:;
    frame->word_0 = r5_1;
    r0_12 = call_ItemSet__add_group(r10, j, 7u, r11_1);
    return r0_12;
L_6f2aa8:;
    r7 = r0_7;
L_6f2aac:;
    gptr<Info> info = gptr<Info>(category_info(j));
    u32 r6 = info->word_4;
    u32 r1_8 = uxth(info->word_0);
    u32 r9 = r1_8;
    construct_item(frame.at(8).addr(), r1_8);
    u32 item_data = Item__data(frame.at(8).addr());
    u32 r4 = item_data;
    u32 data_base_2 = get_data_base(item_data, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = 0x372au;
    r2 = 1u;
    j = r5_1 - 1u;
    u32 r8 = (j & u32(*gptr<u8>(data_base_2 + 0x6214eu)) >> 4) == 0;
    if (r11_1 != 0) {
        u32 i = 0u;
        if (r6 >= 0u && r6 != 0) {
            u32 r11 = r3;
            do {
                u32 r0_18 = *gptr<u8>(r4 + 0xdu);
                if (r0_18 >= 0xb9u) {
                    r0_18 = 0u;
                }
                if (r0_18 == r7) {
                    u32 r0_19 = ItemData__flag_1c_bit3(r4, j, r2, r3);
                    j = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_19 == 0 && (r8 != 0 || (u32(*gptr<u8>(r4 + 0x1bu)) & 1u) == 0)) {
                        u32 r0_20 = r9 + i;
                        if (r0_20 <= r11) {
                            u32 r0_21 = r0_20 - 0x2000u;
                            j = r0_21 >> 5;
                            r3 = gptr<u32>(r10)[j];
                            r2 = r3 | 1u << (r0_21 & 0x1fu);
                            *gptr<u32>(r10 + (j << 2)) = r2;
                        }
                    }
                }
                i += 1u;
                r4 += 0x1eu;
                guest::preempt();
            } while (r6 > i);
        }
    } else {
        item_set = 0u;
        if (r6 >= 0u && r6 != 0) {
            do {
                j = *gptr<u8>(r4 + 0xdu);
                if (j >= 0xb9u) {
                    j = 0u;
                }
                if (j == r7) {
                    if (r8 == 0) {
                        j = *gptr<u8>(r4 + 0x1bu);
                        if ((j & 1u) != 0) {
                            goto L_6f2be8;
                        }
                    }
                    j = r9 + item_set;
                    if (j <= r3) {
                        u32 r1_11 = j - 0x2000u;
                        u32 r12_1 = r1_11 >> 5;
                        j = r1_11 & 0x1fu;
                        *gptr<u32>(r10 + (r12_1 << 2)) = gptr<u32>(r10)[r12_1] | lsl_r(r2, j & 0xff);
                    }
                }
L_6f2be8:;
                item_set += 1u;
                r4 += 0x1eu;
                guest::preempt();
            } while (r6 > item_set);
        }
    }
    guest::cpu()->r[1] = j;
    return frame.at(4).addr();
}

}  // namespace d_006f2908
GUEST_EXPORT_FRAMED(0x006f2908, d_006f2908::ItemSet__add_group, 0x4ff0);  // pushes {r4, i, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006f432c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Decodes the record's packed bit fields.
namespace d_006f432c {

struct __attribute__((packed)) DecodeRecordBitsArg0 {
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
GUEST_OFFSET(DecodeRecordBitsArg0, byte_0, 0x0);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_1, 0x1);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_2, 0x2);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_4, 0x4);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_5, 0x5);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_6, 0x6);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_7, 0x7);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_8, 0x8);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_9, 0x9);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_a, 0xa);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_b, 0xb);
GUEST_OFFSET(DecodeRecordBitsArg0, byte_c, 0xc);


void decode_record_bits(gptr<DecodeRecordBitsArg0> arg0, u32 r1, u32 r2) {
    u32 res_1 = r1 - 0x23u;
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        if (zf_1 || (res_1 >> 0x1f) != (((r1 ^ 0x23u) & (r1 ^ res_1)) >> 0x1f)) {
            u32 res_2 = r1 - 0x1eu;
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
                u32 r1_2 = r12_1 & ~0x70u | (r1_1 & 7u) << 4;
                arg0->byte_4 = u8(r1_2);
                guest::cpu()->r[1] = r1_2;
                return;
            }
            if (zf_2 || (res_2 >> 0x1f) != (((r1 ^ 0x1eu) & (r1 ^ res_2)) >> 0x1f)) {
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
                    u32 r1_4 = r12_2 & ~0xe0u | r1_3 << 5;
                    arg0->byte_0 = u8(r1_4);
                    guest::cpu()->r[1] = r1_4;
                    return;
                }
                if (r1 != 0xdu) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                u32 r12_3 = arg0->byte_1;
                u32 r1_5 = (r12_3 >> 7) + ((u32(arg0->byte_2) & 0xfu) << 1) + r2;
                if (r1_5 > 0x14u) {
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_5 = 0x14u;
                    }
                    if (s32(r2) <= 0) {
                        r1_5 = 0u;
                    }
                }
                u32 r1_6 = r12_3 & ~0x80u | r1_5 << 7;
                u32 r2_1 = u32(arg0->byte_2) & ~0xfu | (r1_5 & 0x1eu) >> 1;
                arg0->byte_1 = u8(r1_6);
                arg0->byte_2 = u8(r2_1);
                guest::cpu()->r[1] = r1_6;
                return;
            }
            if (r1 == 0x1fu) {
                u32 r12_4 = arg0->byte_4;
                u32 r1_7 = (r12_4 >> 7) + ((u32(arg0->byte_5) & 7u) << 1) + r2;
                if (r1_7 > 0xfu) {
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_7 = 0xfu;
                    }
                    if (s32(r2) <= 0) {
                        r1_7 = 0u;
                    }
                }
                u32 r1_8 = r12_4 & ~0x80u | r1_7 << 7;
                u32 r2_2 = u32(arg0->byte_5) & ~7u | (r1_7 & 0xeu) >> 1;
                arg0->byte_4 = u8(r1_8);
                arg0->byte_5 = u8(r2_2);
                guest::cpu()->r[1] = r1_8;
                return;
            }
            if (r1 != 0x20u) {
                guest::cpu()->r[1] = r1;
                return;
            }
        } else {
            u32 res_3 = r1 - 0x2eu;
            u32 zf_3 = res_3 == 0;
            if (zf_3) {
                u32 r12_5 = arg0->byte_9;
                u32 r1_9 = (r12_5 >> 4) + ((u32(arg0->byte_a) & 0x3fu) << 4) + r2;
                if (r1_9 > 0x3e8u) {
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_9 = 0x3e8u;
                    }
                    if (s32(r2) <= 0) {
                        r1_9 = 0u;
                    }
                }
                u32 r1_10 = r12_5 & ~0xf0u | r1_9 << 4;
                u32 r2_3 = u32(arg0->byte_a) & ~0x3fu | (r1_9 & 0x3f0u) >> 4;
                arg0->byte_9 = u8(r1_10);
                arg0->byte_a = u8(r2_3);
                guest::cpu()->r[1] = r1_10;
                return;
            }
            if (zf_3 || (res_3 >> 0x1f) != (((r1 ^ 0x2eu) & (r1 ^ res_3)) >> 0x1f)) {
                if (r1 == 0x28u) {
                    u32 r12_6 = arg0->byte_7;
                    u32 r1_11 = (r12_6 >> 3) + ((u32(arg0->byte_8) & 0x1fu) << 5) + r2;
                    if (r1_11 > 0x3e8u) {
                        if (r2 != 0 && s32(r2) >= 0) {
                            r1_11 = 0x3e8u;
                        }
                        if (s32(r2) <= 0) {
                            r1_11 = 0u;
                        }
                    }
                    u32 r1_12 = r12_6 & ~0xf8u | r1_11 << 3;
                    u32 r2_4 = u32(arg0->byte_8) & ~0x1fu | (r1_11 & 0x3e0u) >> 5;
                    arg0->byte_7 = u8(r1_12);
                    arg0->byte_8 = u8(r2_4);
                    guest::cpu()->r[1] = r1_12;
                    return;
                }
                if (r1 != 0x2cu) {
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
            if (r1 == 0x32u) {
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
                u32 r1_16 = r12_8 & ~0xeu | (r1_15 & 7u) << 1;
                arg0->byte_b = u8(r1_16);
                guest::cpu()->r[1] = r1_16;
                return;
            }
            if (r1 == 0x38u) {
                u32 r12_9 = arg0->byte_c;
                u32 r1_17 = r2 + (r12_9 >> 1u & 0x3fu);
                if (r1_17 > 0x32u) {
                    if (r2 != 0 && s32(r2) >= 0) {
                        r1_17 = 0x32u;
                    }
                    if (s32(r2) <= 0) {
                        r1_17 = 0u;
                    }
                }
                u32 r1_18 = r12_9 & ~0x7eu | (r1_17 & 0x3fu) << 1;
                arg0->byte_c = u8(r1_18);
                guest::cpu()->r[1] = r1_18;
                return;
            }
            guest::cpu()->r[1] = r1;
            return;
        }
        u32 r12_10 = arg0->byte_5;
        u32 r1_19 = (r12_10 >> 3) + ((u32(arg0->byte_6) & 1u) << 5) + r2;
        if (r1_19 > 0x3fu) {
            if (r2 != 0 && s32(r2) >= 0) {
                r1_19 = 0x3fu;
            }
            if (s32(r2) <= 0) {
                r1_19 = 0u;
            }
        }
        u32 r1_20 = r12_10 & ~0xf8u | r1_19 << 3;
        u32 r2_5 = u32(arg0->byte_6) & ~1u | (r1_19 & 0x20u) >> 5;
        arg0->byte_5 = u8(r1_20);
        arg0->byte_6 = u8(r2_5);
        guest::cpu()->r[1] = r1_20;
        return;
    }
    u32 r12_11 = arg0->byte_6;
    u32 r1_21 = r2 + (r12_11 >> 3u & 0xfu);
    if (r1_21 > 0xau) {
        if (r2 != 0 && s32(r2) >= 0) {
            r1_21 = 0xau;
        }
        if (s32(r2) <= 0) {
            r1_21 = 0u;
        }
    }
    u32 r1_22 = r12_11 & ~0x78u | (r1_21 & 0xfu) << 3;
    arg0->byte_6 = u8(r1_22);
    guest::cpu()->r[1] = r1_22;
}

}  // namespace d_006f432c
GUEST_EXPORT_FRAMED(0x006f432c, d_006f432c::decode_record_bits, 0x30);  // pushes {r4, r5} first, as the original

// f_006f4f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the pending letter (+0x1900) is due, moves it into the first free of the 10 letters and clears it.
namespace d_006f4f48 {

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

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
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002ff408, u32(u32)> Letter__clear;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;
inline constexpr guest::Function<0x005cc024, u32(u32)> normalize_flags_270;
inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> byte_270_low_bits_clear;
inline constexpr guest::Function<0x007595bc, u32(u32, u32, u32)> compare_time_stamp_to_stored;

struct __attribute__((packed)) MailboxDeliverPendingFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(MailboxDeliverPendingFrame, word_0, 0x0);
GUEST_OFFSET(MailboxDeliverPendingFrame, word_4, 0x4);
GUEST_OFFSET(MailboxDeliverPendingFrame, word_8, 0x8);
GUEST_SIZE(MailboxDeliverPendingFrame, 0x10);

u32 Mailbox__deliver_pending(u32 mailbox, u32 r1, u32 r2) {
    guest::StackFrameOf<MailboxDeliverPendingFrame> frame;  // the original's stack frame
    u32 r6 = mailbox;
    u32 r0_2 = byte_270_low_bits_clear(mailbox + 0x1900u, r1, r2, guest::cpu()->r[3]);
    if (r0_2 == 0) {
        gptr<Now> now_2 = gptr<Now>(game_time_now(r0_2));
        u32 r1_2 = now_2->word_0;
        u32 r2_2 = now_2->word_4;
        frame->word_8 = now_2->word_8;
        frame->word_0 = r1_2;
        frame->word_4 = r2_2;
        r0_2 = compare_time_stamp_to_stored(r6 + 0x1b80u, frame.at(0).addr(), r2_2);
        r2 = guest::cpu()->r[2];
        if (!(r0_2 + 1u == 0)) {
            u32 r4 = 0u;
L_6f4f90:;
            u32 r1_4 = r4 + (r4 << 2);
            r0_2 = byte_270_low_bits_clear(r6 + (r1_4 << 7), r1_4, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            if (r0_2 == 0) {
                r4 += 1u;
                if (r4 >= 0xau) {
                    return r0_2;
                }
                guest::preempt();
                goto L_6f4f90;
            }
            if (r4 + 1u != 0) {
                gptr<Local_006f4f48_r5_1> r5_1 = gptr<Local_006f4f48_r5_1>(r6 + 0x1900u);
                gptr<Local_006f4f48_r4_1> r4_1 = gptr<Local_006f4f48_r4_1>(r6 + (r4 + (r4 << 2) << 7));
                copy_aligned_bytes(r4_1.addr(), r5_1.addr(), 0x31u);
                copy_aligned_bytes(r4_1.addr() + 0x34u, r5_1.addr() + 0x34u, 0x31u);
                copy_aligned_bytes(r4_1.addr() + 0x68u, r5_1.addr() + 0x68u, 0x42u);
                copy_bytes_at_any_alignment(r4_1.addr() + 0xaau, r5_1.addr() + 0xaau, 0x182u);
                copy_aligned_bytes(r4_1.addr() + 0x22cu, r5_1.addr() + 0x22cu, 0x42u);
                r4_1->byte_26e = r5_1->byte_26e;
                r4_1->byte_26f = r5_1->byte_26f;
                r4_1->byte_270 = r5_1->byte_270;
                r4_1->byte_271 = r5_1->byte_271;
                r4_1->byte_272 = r5_1->byte_272;
                Item__copy(r4_1.addr() + 0x274u, r5_1.addr() + 0x274u);
                copy_8_bytes_returning_destination(r4_1.addr() + 0x278u, r5_1.addr() + 0x278u);
                normalize_flags_270(r4_1.addr());
                Letter__clear(r6 + 0x1900u);
                r0_2 = clear_inner(r6 + 0x1b80u);
            }
        }
    }
    return r0_2;
}

}  // namespace d_006f4f48
GUEST_EXPORT_FRAMED(0x006f4f48, d_006f4f48::Mailbox__deliver_pending, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006f5090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the letter into the pending slot (+0x1900).
namespace d_006f5090 {

struct __attribute__((packed)) Mailbox {
    u8 unknown_0[0x1b6e];  // (not used here)
    u8 byte_1b6e;
    u8 byte_1b6f;
    u8 byte_1b70;
    u8 byte_1b71;
    u8 byte_1b72;
};
GUEST_OFFSET(Mailbox, byte_1b6e, 0x1b6e);
GUEST_OFFSET(Mailbox, byte_1b6f, 0x1b6f);
GUEST_OFFSET(Mailbox, byte_1b70, 0x1b70);
GUEST_OFFSET(Mailbox, byte_1b71, 0x1b71);
GUEST_OFFSET(Mailbox, byte_1b72, 0x1b72);

struct __attribute__((packed)) MailboxSetPendingArg1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(MailboxSetPendingArg1, byte_26e, 0x26e);
GUEST_OFFSET(MailboxSetPendingArg1, byte_26f, 0x26f);
GUEST_OFFSET(MailboxSetPendingArg1, byte_270, 0x270);
GUEST_OFFSET(MailboxSetPendingArg1, byte_271, 0x271);
GUEST_OFFSET(MailboxSetPendingArg1, byte_272, 0x272);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;

void Mailbox__set_pending(gptr<Mailbox> mailbox, gptr<MailboxSetPendingArg1> arg1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = mailbox.addr() + 0x1900u;
    copy_aligned_bytes(r5_1, arg1.addr(), 0x31u, guest::cpu()->r[3]);
    copy_aligned_bytes(r5_1 + 0x34u, arg1.addr() + 0x34u, 0x31u, guest::cpu()->r[3]);
    copy_aligned_bytes(r5_1 + 0x68u, arg1.addr() + 0x68u, 0x42u, guest::cpu()->r[3]);
    copy_bytes_at_any_alignment(r5_1 + 0xaau, arg1.addr() + 0xaau, 0x182u);
    copy_aligned_bytes(r5_1 + 0x22cu, arg1.addr() + 0x22cu, 0x42u, guest::cpu()->r[3]);
    mailbox->byte_1b6e = arg1->byte_26e;
    mailbox->byte_1b6f = arg1->byte_26f;
    mailbox->byte_1b70 = arg1->byte_270;
    mailbox->byte_1b71 = arg1->byte_271;
    mailbox->byte_1b72 = arg1->byte_272;
    Item__copy(r5_1 + 0x274u, arg1.addr() + 0x274u);
    frame.release();
    copy_8_bytes_returning_destination(r5_1 + 0x278u, arg1.addr() + 0x278u);
    return;
}

}  // namespace d_006f5090
GUEST_EXPORT(0x006f5090, d_006f5090::Mailbox__set_pending);

// f_006f5130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the pending letter's due time (+0x1b80).
namespace d_006f5130 {

inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

void Mailbox__stamp_pending(u32 mailbox) {
    GameTime__set_time_stamp(mailbox + 0x1b80u, guest::cpu()->r[1]);
}

}  // namespace d_006f5130
GUEST_EXPORT(0x006f5130, d_006f5130::Mailbox__stamp_pending);

// f_006f5138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the letter into slot `index` (0x280 bytes each), normalizing its flags unless asked not to.
namespace d_006f5138 {

struct __attribute__((packed)) MailboxStoreLetterArg2 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(MailboxStoreLetterArg2, byte_26e, 0x26e);
GUEST_OFFSET(MailboxStoreLetterArg2, byte_26f, 0x26f);
GUEST_OFFSET(MailboxStoreLetterArg2, byte_270, 0x270);
GUEST_OFFSET(MailboxStoreLetterArg2, byte_271, 0x271);
GUEST_OFFSET(MailboxStoreLetterArg2, byte_272, 0x272);

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
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;
inline constexpr guest::Function<0x005cc024, u32(u32, u32)> normalize_flags_270;

void Mailbox__store_letter(u32 mailbox, u32 r1, gptr<MailboxStoreLetterArg2> arg2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006f5138_r5_1> r5_1 = gptr<Local_006f5138_r5_1>(mailbox + r1 * 0x280u);
    copy_aligned_bytes(r5_1.addr(), arg2.addr(), 0x31u, r3);
    copy_aligned_bytes(r5_1.addr() + 0x34u, arg2.addr() + 0x34u, 0x31u, guest::cpu()->r[3]);
    copy_aligned_bytes(r5_1.addr() + 0x68u, arg2.addr() + 0x68u, 0x42u, guest::cpu()->r[3]);
    copy_bytes_at_any_alignment(r5_1.addr() + 0xaau, arg2.addr() + 0xaau, 0x182u);
    copy_aligned_bytes(r5_1.addr() + 0x22cu, arg2.addr() + 0x22cu, 0x42u, guest::cpu()->r[3]);
    r5_1->byte_26e = arg2->byte_26e;
    r5_1->byte_26f = arg2->byte_26f;
    r5_1->byte_270 = arg2->byte_270;
    r5_1->byte_271 = arg2->byte_271;
    r5_1->byte_272 = arg2->byte_272;
    Item__copy(r5_1.addr() + 0x274u, arg2.addr() + 0x274u);
    copy_8_bytes_returning_destination(r5_1.addr() + 0x278u, arg2.addr() + 0x278u);
    if (r3 == 0) {
        frame.release();
        normalize_flags_270(r5_1.addr(), guest::cpu()->r[1]);
        return;
    }
}

}  // namespace d_006f5138
GUEST_EXPORT(0x006f5138, d_006f5138::Mailbox__store_letter);

// f_006f51f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of letter `index` (0x280 bytes each).
namespace d_006f51f8 {


u32 Mailbox__letter_at(u32 mailbox, u32 r1) {
    return mailbox + r1 * 0x280u;
}

}  // namespace d_006f51f8
GUEST_EXPORT(0x006f51f8, d_006f51f8::Mailbox__letter_at);

// f_006f5204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 10 letters, the pending letter and its due time.
namespace d_006f5204 {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> Letter__clear;
inline constexpr guest::Function<0x00303cdc, u32(u32, u32)> clear_inner;

void Mailbox__clear(u32 mailbox) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5 = mailbox;
    u32 i = 0u;
    do {
        Letter__clear(r5 + i * 0x280u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        i += 1u;
        guest::preempt();
    } while (i < 0xau);
    Letter__clear(r5 + 0x1900u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    clear_inner(r5 + 0x1b80u, guest::cpu()->r[1]);
    return;
}

}  // namespace d_006f5204
GUEST_EXPORT(0x006f5204, d_006f5204::Mailbox__clear);

// f_006f536c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The current digit of the number key (+0x428), reset by key 10 and moved back by key 11.
namespace d_006f536c {

inline constexpr guest::Function<0x007234f8, u32(u32, u32)> ScrollBar__drag_value;
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> sub_is_ready;

u32 NumberKey__current_digit(u32 number_key) {
    u32 r0_2 = 0;
    u32 r5 = number_key + 0xd5cu;
    u32 r4 = *gptr<s8>(number_key + 0x428u);
    u32 r0_1 = sub_is_ready(r5, 0x428u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_6f53b8;
    }
L_6f5390:;
    r0_2 = ScrollBar__drag_value(r5, r1);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0xau) {
        r4 = 0u;
    } else if (r0_2 == 0xbu) {
        r4 = sxtb(r4 - 1u);
    }
    return r4;
L_6f53b8:;
    r1 = 0x2f635cu;
    if (*gptr<u32>(r5 + 0xb8u) == r1 && *gptr<u32>(r5 + 0xbcu) == 0) {
        guest::preempt();
        goto L_6f5390;
    }
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_006f536c
GUEST_EXPORT_FRAMED(0x006f536c, d_006f536c::NumberKey__current_digit, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006f56bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the number key with its digit count and the first digit.
namespace d_006f56bc {

struct __attribute__((packed)) NumberKey {
    u8 unknown_0[0x40e];  // (not used here)
    u8 byte_40e;
    u8 unknown_40f[0x19];  // (not used here)
    u8 byte_428;
    u8 byte_429;
};
GUEST_OFFSET(NumberKey, byte_40e, 0x40e);
GUEST_OFFSET(NumberKey, byte_428, 0x428);
GUEST_OFFSET(NumberKey, byte_429, 0x429);


void NumberKey__start(gptr<NumberKey> number_key, u32 r1) {
    number_key->byte_40e = 1;
    number_key->byte_429 = u8(r1);
    number_key->byte_428 = 0;
}

}  // namespace d_006f56bc
GUEST_EXPORT(0x006f56bc, d_006f56bc::NumberKey__start);

// f_006f56d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the number key confirmed.
namespace d_006f56d4 {

struct __attribute__((packed)) NumberKey {
    u8 unknown_0[0x410];  // (not used here)
    u8 byte_410;
    u8 unknown_411[0xa1f];  // (not used here)
    u32 word_e30;
};
GUEST_OFFSET(NumberKey, byte_410, 0x410);
GUEST_OFFSET(NumberKey, word_e30, 0xe30);


void NumberKey__confirm(gptr<NumberKey> number_key) {
    number_key->word_e30 = number_key->word_e30 | 8u;
    number_key->byte_410 = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_006f56d4
GUEST_EXPORT(0x006f56d4, d_006f56d4::NumberKey__confirm);

// f_006f58e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Attaches the layout at +0x26c.
namespace d_006f58e0 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

void NumberKey__attach_layout(u32 number_key) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(number_key);
    frame.release();
    LayoutRenderer__draw_on_screen(r0_1, number_key + 0x26cu, 1u);
    return;
}

}  // namespace d_006f58e0
GUEST_EXPORT(0x006f58e0, d_006f58e0::NumberKey__attach_layout);

// f_006f5b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the number key's layout parts and layout.
namespace d_006f5b24 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32)> layout_at_10_virtual_8;

void NumberKey__release(u32 number_key) {
    release_layout_parts(number_key + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    layout_at_10_virtual_8(number_key + 0x26cu);
}

}  // namespace d_006f5b24
GUEST_EXPORT_FRAMED(0x006f5b24, d_006f5b24::NumberKey__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_006f5c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the number key's layout archive.
namespace d_006f5c7c {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> load_layout_archive;

u32 NumberKey__load_layout(u32 number_key) {
    return load_layout_archive(number_key + 0x24u, 0x6f5c88u);
}

}  // namespace d_006f5c7c
GUEST_EXPORT(0x006f5c7c, d_006f5c7c::NumberKey__load_layout);

// f_006f6810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The height at the position on the plane of the triangle (its normal into the frame).
namespace d_006f6810 {

struct __attribute__((packed)) TriangleHeightAtArg1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(TriangleHeightAtArg1, float_0, 0x0);
GUEST_OFFSET(TriangleHeightAtArg1, float_4, 0x4);
GUEST_OFFSET(TriangleHeightAtArg1, float_8, 0x8);

struct __attribute__((packed)) TriangleHeightAtArg2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(TriangleHeightAtArg2, float_0, 0x0);
GUEST_OFFSET(TriangleHeightAtArg2, float_4, 0x4);
GUEST_OFFSET(TriangleHeightAtArg2, float_8, 0x8);

struct __attribute__((packed)) TriangleHeightAtArg3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(TriangleHeightAtArg3, float_0, 0x0);
GUEST_OFFSET(TriangleHeightAtArg3, float_4, 0x4);
GUEST_OFFSET(TriangleHeightAtArg3, float_8, 0x8);

inline constexpr guest::Function<0x0056a378, u32(u32, u32)> normalize;

struct __attribute__((packed)) TriangleHeightAtFrame {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(TriangleHeightAtFrame, float_0, 0x0);
GUEST_OFFSET(TriangleHeightAtFrame, float_4, 0x4);
GUEST_OFFSET(TriangleHeightAtFrame, float_8, 0x8);
GUEST_SIZE(TriangleHeightAtFrame, 0xc);

u32 triangle_height_at(gptr<Float3> arg0, gptr<TriangleHeightAtArg1> arg1, gptr<TriangleHeightAtArg2> arg2, gptr<TriangleHeightAtArg3> arg3) {
    guest::StackFrameOf<TriangleHeightAtFrame> frame;  // the original's stack frame
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
GUEST_EXPORT_FRAMED(0x006f6810, d_006f6810::triangle_height_at, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006f7d34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the box (+8 to +0x1c) centered on the point with the width, depth and height.
namespace d_006f7d34 {

struct __attribute__((packed)) Box {
    u8 unknown_0[0x8];  // (not used here)
    float float_8;
    u32 word_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Box, float_8, 0x8);
GUEST_OFFSET(Box, word_c, 0xc);
GUEST_OFFSET(Box, float_10, 0x10);
GUEST_OFFSET(Box, float_14, 0x14);
GUEST_OFFSET(Box, float_18, 0x18);
GUEST_OFFSET(Box, float_1c, 0x1c);

struct __attribute__((packed)) BoxFromCenterSizeArg1 {
    float float_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(BoxFromCenterSizeArg1, float_0, 0x0);
GUEST_OFFSET(BoxFromCenterSizeArg1, word_4, 0x4);
GUEST_OFFSET(BoxFromCenterSizeArg1, float_8, 0x8);


void Box__from_center_size(gptr<Box> box, gptr<BoxFromCenterSizeArg1> arg1, float S0, float S1, float S2) {
    float S3_1 = 0.5f;
    float S0_1 = S0 * S3_1;
    float S1_1 = S1 * S3_1;
    box->float_8 = arg1->float_0 - S0_1;
    box->word_c = arg1->word_4;
    box->float_10 = arg1->float_8 - S1_1;
    box->float_14 = arg1->float_0 + S0_1;
    box->float_18 = std::bit_cast<float>(arg1->word_4) + S2;
    float S0_2 = arg1->float_8 + S1_1;
    box->float_1c = S0_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006f7d34
GUEST_EXPORT(0x006f7d34, d_006f7d34::Box__from_center_size);

// f_006f7dc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a collision axis-aligned box (shape kind 1).
namespace d_006f7dc0 {

inline constexpr u32 vtable_collision__AABB = 0x0090b154u;

void collision__AABB__AABB(gptr<collision__AABB> aabb) {
    aabb->byte_4 = 1;
    aabb->vtable = vtable_collision__AABB;
    guest::cpu()->r[1] = vtable_collision__AABB;
}

}  // namespace d_006f7dc0
GUEST_EXPORT(0x006f7dc0, d_006f7dc0::collision__AABB__AABB);

// f_006f7e04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the word at +0xc.
namespace d_006f7e04 {

struct __attribute__((packed)) SetWordCArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(SetWordCArg0, word_c, 0xc);


void set_word_c(gptr<SetWordCArg0> arg0, u32 r1) {
    arg0->word_c = r1;
}

}  // namespace d_006f7e04
GUEST_EXPORT(0x006f7e04, d_006f7e04::set_word_c);

// f_006f7e40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the triangle reference's triangle, kind and mask.
namespace d_006f7e40 {

struct __attribute__((packed)) CollisionTriangleRef {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(CollisionTriangleRef, word_4, 0x4);
GUEST_OFFSET(CollisionTriangleRef, word_8, 0x8);
GUEST_OFFSET(CollisionTriangleRef, word_c, 0xc);


u32 CollisionTriangleRef__set(gptr<CollisionTriangleRef> collision_triangle_ref, u32 r1, u32 r2, u32 r3) {
    collision_triangle_ref->word_4 = r1;
    collision_triangle_ref->word_8 = r2;
    collision_triangle_ref->word_c = r3;
    return collision_triangle_ref.addr() + 4u;
}

}  // namespace d_006f7e40
GUEST_EXPORT(0x006f7e40, d_006f7e40::CollisionTriangleRef__set);

// f_006f7e4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a collision world body for a shape (arg 1), an owner (arg 2) and a mask (arg 3).
namespace d_006f7e4c {

inline constexpr u32 vtable_collision__World__Body = 0x0090b168u;

void collision__World__Body__Body_006f7e4c(gptr<collision__World__Body> body, u32 r1, u32 r2, u32 r3) {
    body->word_4 = r1;
    body->vtable = vtable_collision__World__Body;
    body->word_8 = r2;
    body->word_c = r3;
}

}  // namespace d_006f7e4c
GUEST_EXPORT(0x006f7e4c, d_006f7e4c::collision__World__Body__Body_006f7e4c);

// f_006f7e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a collision world's body: no shape, no owner.
namespace d_006f7e64 {

inline constexpr u32 vtable_collision__World__Body = 0x0090b168u;

void collision__World__Body__Body_006f7e64(gptr<collision__World__Body> body) {
    body->word_4 = 0;
    body->vtable = vtable_collision__World__Body;
    body->word_8 = 0;
    body->word_c = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_006f7e64
GUEST_EXPORT(0x006f7e64, d_006f7e64::collision__World__Body__Body_006f7e64);

// f_006f8054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the count and the 100 entries (+8).
namespace d_006f8054 {

struct __attribute__((packed)) PtrList50 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(PtrList50, word_4, 0x4);


void PtrList50__clear(gptr<PtrList50> ptr_list50) {
    u32 r0 = ptr_list50.addr();
    u32 r1 = 0u;
    u32 r3 = r1;
    u32 r2 = r1;
    ptr_list50->word_4 = r1;
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u32>((r0 + (r3 << 2)) + 8u) = r1;
        r3 = r3_1 + 1u;
        *gptr<u32>((r0 + (r3_1 << 2)) + 8u) = r1;
        guest::preempt();
    } while (s32(r2) < 0x64);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006f8054
GUEST_EXPORT_FRAMED(0x006f8054, d_006f8054::PtrList50__clear, 0x10);  // pushes {r4} first, as the original

// f_006f8094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the list's two words and its 100 entries.
namespace d_006f8094 {

struct __attribute__((packed)) PtrList50 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(PtrList50, word_0, 0x0);
GUEST_OFFSET(PtrList50, word_4, 0x4);


void PtrList50__construct(gptr<PtrList50> ptr_list50) {
    u32 r0 = ptr_list50.addr();
    u32 r1 = 0u;
    ptr_list50->word_0 = r1;
    u32 r3 = r1;
    u32 r2 = r1;
    ptr_list50->word_4 = r1;
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u32>((r0 + (r3 << 2)) + 8u) = r1;
        r3 = r3_1 + 1u;
        *gptr<u32>((r0 + (r3_1 << 2)) + 8u) = r1;
        guest::preempt();
    } while (s32(r2) < 0x64);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006f8094
GUEST_EXPORT_FRAMED(0x006f8094, d_006f8094::PtrList50__construct, 0x10);  // pushes {r4} first, as the original

// f_006f80dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves a collision sphere's center by an offset (arg 1); returns the center.
namespace d_006f80dc {

struct __attribute__((packed)) SphereTranslateArg1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(SphereTranslateArg1, float_0, 0x0);
GUEST_OFFSET(SphereTranslateArg1, float_4, 0x4);
GUEST_OFFSET(SphereTranslateArg1, float_8, 0x8);


u32 Sphere__translate(gptr<collision__Sphere> sphere, gptr<SphereTranslateArg1> arg1) {
    sphere->float_8 = sphere->float_8 + arg1->float_0;
    sphere->float_c = sphere->float_c + arg1->float_4;
    float S1_1 = arg1->float_8;
    float S0_1 = sphere->float_10 + S1_1;
    sphere->float_10 = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return sphere.addr() + 8u;
}

}  // namespace d_006f80dc
GUEST_EXPORT(0x006f80dc, d_006f80dc::Sphere__translate);

// f_006f8114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the sphere's center (+8) and radius (+0x14).
namespace d_006f8114 {

struct __attribute__((packed)) Sphere {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    float float_14;
};
GUEST_OFFSET(Sphere, word_8, 0x8);
GUEST_OFFSET(Sphere, word_c, 0xc);
GUEST_OFFSET(Sphere, word_10, 0x10);
GUEST_OFFSET(Sphere, float_14, 0x14);

struct __attribute__((packed)) SphereSetArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SphereSetArg1, word_0, 0x0);
GUEST_OFFSET(SphereSetArg1, word_4, 0x4);
GUEST_OFFSET(SphereSetArg1, word_8, 0x8);


void Sphere__set(gptr<Sphere> sphere, gptr<SphereSetArg1> arg1, float S0) {
    sphere->word_8 = arg1->word_0;
    sphere->word_c = arg1->word_4;
    u32 r1_1 = arg1->word_8;
    sphere->word_10 = r1_1;
    sphere->float_14 = S0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006f8114
GUEST_EXPORT(0x006f8114, d_006f8114::Sphere__set);

// f_006f8134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a collision sphere at a center (arg 1) with a radius (S0).
namespace d_006f8134 {

inline constexpr u32 vtable_collision__Sphere = 0x0090b178u;

void collision__Sphere__Sphere_006f8134(gptr<collision__Sphere> sphere, gptr<Float3> arg1, float S0) {
    sphere->byte_4 = 0;
    sphere->vtable = vtable_collision__Sphere;
    float S1_1 = arg1->v[0];
    float S2_1 = arg1->v[1];
    float S3_1 = arg1->v[2];
    sphere->float_8 = S1_1;
    sphere->float_c = S2_1;
    sphere->float_10 = S3_1;
    sphere->float_14 = S0;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006f8134
GUEST_EXPORT(0x006f8134, d_006f8134::collision__Sphere__Sphere_006f8134);

// f_006f81f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the capsule's two ends (+8, +0x14) and radius (+0x20).
namespace d_006f81f0 {

struct __attribute__((packed)) Capsule {
    u8 unknown_0[0x8];  // (not used here)
    float float_8;
    float float_c;
    float float_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    float float_20;
};
GUEST_OFFSET(Capsule, float_8, 0x8);
GUEST_OFFSET(Capsule, float_c, 0xc);
GUEST_OFFSET(Capsule, float_10, 0x10);
GUEST_OFFSET(Capsule, word_14, 0x14);
GUEST_OFFSET(Capsule, word_18, 0x18);
GUEST_OFFSET(Capsule, word_1c, 0x1c);
GUEST_OFFSET(Capsule, float_20, 0x20);

struct __attribute__((packed)) CapsuleSetArg2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(CapsuleSetArg2, word_0, 0x0);
GUEST_OFFSET(CapsuleSetArg2, word_4, 0x4);
GUEST_OFFSET(CapsuleSetArg2, word_8, 0x8);


void Capsule__set(gptr<Capsule> capsule, gptr<Float4> float4, gptr<CapsuleSetArg2> arg2, float S0) {
    capsule->float_8 = float4->v[0];
    capsule->float_c = float4->v[1];
    capsule->float_10 = float4->v[2];
    capsule->word_14 = arg2->word_0;
    capsule->word_18 = arg2->word_4;
    capsule->word_1c = arg2->word_8;
    capsule->float_20 = S0;
}

}  // namespace d_006f81f0
GUEST_EXPORT(0x006f81f0, d_006f81f0::Capsule__set);

// f_006f8228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a collision capsule (shape kind 3) with no radius.
namespace d_006f8228 {

inline constexpr u32 vtable_collision__Capsule = 0x0090b18cu;

void collision__Capsule__Capsule(gptr<collision__Capsule> capsule) {
    capsule->byte_4 = 3;
    float S0_1 = 0.0f;
    capsule->vtable = vtable_collision__Capsule;
    capsule->float_20 = S0_1;
}

}  // namespace d_006f8228
GUEST_EXPORT(0x006f8228, d_006f8228::collision__Capsule__Capsule);

// f_006f8368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves a collision cylinder's center by an offset (arg 1); returns the center.
namespace d_006f8368 {

struct __attribute__((packed)) CylinderTranslateArg1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(CylinderTranslateArg1, float_0, 0x0);
GUEST_OFFSET(CylinderTranslateArg1, float_4, 0x4);
GUEST_OFFSET(CylinderTranslateArg1, float_8, 0x8);


u32 Cylinder__translate(gptr<collision__Cylinder> cylinder, gptr<CylinderTranslateArg1> arg1) {
    cylinder->float_8 = cylinder->float_8 + arg1->float_0;
    cylinder->float_c = cylinder->float_c + arg1->float_4;
    float S1_1 = arg1->float_8;
    float S0_1 = cylinder->float_10 + S1_1;
    cylinder->float_10 = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return cylinder.addr() + 8u;
}

}  // namespace d_006f8368
GUEST_EXPORT(0x006f8368, d_006f8368::Cylinder__translate);

// f_006f83a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the cylinder's base from the rectangle's corner and its radius and height.
namespace d_006f83a8 {

struct __attribute__((packed)) Cylinder {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    float float_14;
    float float_18;
};
GUEST_OFFSET(Cylinder, word_8, 0x8);
GUEST_OFFSET(Cylinder, word_c, 0xc);
GUEST_OFFSET(Cylinder, word_10, 0x10);
GUEST_OFFSET(Cylinder, float_14, 0x14);
GUEST_OFFSET(Cylinder, float_18, 0x18);


u32 Cylinder__set_from_rect(gptr<Cylinder> cylinder, gptr<GridRect> grid_rect, float S0, float S1) {
    cylinder->word_8 = u32(grid_rect->min.x);
    cylinder->word_c = u32(grid_rect->min.y);
    u32 r1_1 = u32(grid_rect->max.x);
    cylinder->word_10 = r1_1;
    cylinder->float_14 = S0;
    cylinder->float_18 = S1;
    guest::cpu()->r[1] = r1_1;
    return (cylinder.addr() + 0x10u) + 4u;
}

}  // namespace d_006f83a8
GUEST_EXPORT(0x006f83a8, d_006f83a8::Cylinder__set_from_rect);

// f_006f83cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a collision cylinder at a center (arg 1) with a radius (S0) and height (S1).
namespace d_006f83cc {

inline constexpr u32 vtable_collision__Cylinder = 0x0090b1a0u;

void collision__Cylinder__Cylinder_006f83cc(gptr<collision__Cylinder> cylinder, gptr<Float3> arg1, float S0, float S1) {
    cylinder->byte_4 = 2;
    cylinder->vtable = vtable_collision__Cylinder;
    float S3_1 = arg1->v[1];
    float S4_1 = arg1->v[2];
    cylinder->float_8 = std::bit_cast<float>(u32(std::bit_cast<u32>(arg1->v[0])));
    cylinder->float_c = S3_1;
    cylinder->float_10 = S4_1;
    cylinder->float_14 = S0;
    cylinder->float_18 = S1;
}

}  // namespace d_006f83cc
GUEST_EXPORT(0x006f83cc, d_006f83cc::collision__Cylinder__Cylinder_006f83cc);

// f_006f83f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a collision cylinder (shape kind 2) with no radius or height.
namespace d_006f83f8 {

inline constexpr u32 vtable_collision__Cylinder = 0x0090b1a0u;

void collision__Cylinder__Cylinder_006f83f8(gptr<collision__Cylinder> cylinder) {
    cylinder->byte_4 = 2;
    float S0_1 = 0.0f;
    cylinder->vtable = vtable_collision__Cylinder;
    cylinder->float_14 = S0_1;
    cylinder->float_18 = S0_1;
    guest::cpu()->r[1] = vtable_collision__Cylinder;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_006f83f8
GUEST_EXPORT(0x006f83f8, d_006f83f8::collision__Cylinder__Cylinder_006f83f8);

// f_006f8540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word shifted left by 14, as a half.
namespace d_006f8540 {

struct __attribute__((packed)) PackedLow18BitsToHalfArg0 {
    u32 word_0;
};
GUEST_OFFSET(PackedLow18BitsToHalfArg0, word_0, 0x0);


struct __attribute__((packed)) PackedLow18BitsToHalfFrame {
    u16 half_0;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(PackedLow18BitsToHalfFrame, half_0, 0x0);
GUEST_SIZE(PackedLow18BitsToHalfFrame, 0x4);

u32 packed_low_18_bits_to_half(gptr<PackedLow18BitsToHalfArg0> arg0) {
    guest::StackFrameOf<PackedLow18BitsToHalfFrame> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_0 << 0xe;
    frame->half_0 = u16(r0_1);
    return uxth(r0_1);
}

}  // namespace d_006f8540
GUEST_EXPORT(0x006f8540, d_006f8540::packed_low_18_bits_to_half);

// f_006f8c24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The room record of `mode`: a house room (positions 2 to 25), or the record of the flagged structure; null otherwise.
namespace d_006f8c24 {

inline constexpr u32 scene_room_records_address = 0x0095276cu;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x00317ee0, u32(u32, u32)> record_4648_address;
inline constexpr guest::Function<0x005b48a4, u32(u32)> read_u8_0x00957326_;
inline constexpr guest::Function<0x006cbb08, u32(u32)> structure_record_slot;
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> list_position_of_mode;

u32 room_record_of_mode(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 position = list_position_of_mode(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (position - 2u < 0x18u) {
        u32 r4_1 = *gptr<u8>(position + scene_room_records_address);
        u32 data_base = get_data_base(position);
        frame.release();
        return record_4648_address(data_base + 0x5d880u, r4_1);
    }
    u32 scene_flagged_2 = scene_has_flags(0x4000u, r0);
    if (scene_flagged_2 == 0) {
        return 0u;
    }
    u32 r0_6 = structure_record_slot(read_u8_0x00957326_(scene_flagged_2));
    if (r0_6 != 0) {
        return r0_6 + 0x10u;
    }
    return 0u;
}

}  // namespace d_006f8c24
GUEST_EXPORT(0x006f8c24, d_006f8c24::room_record_of_mode);

// f_006f8eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the rectangle from (0x12, 0xa) to (0x12, 0xb).
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

void rect_18_10_to_18_11(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006f8eb8_ea_1> ea_1 = gptr<Local_006f8eb8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = 0x12;
    ea_1->word_4 = 0xa;
    gptr<Local_006f8eb8_ea_2> ea_2 = gptr<Local_006f8eb8_ea_2>(frame.at(8).addr());
    ea_2->word_0 = 0x12;
    ea_2->word_4 = 0xb;
    construct_word_quad_from_pairs(r0, frame.at(0).addr(), frame.at(8).addr());
}

}  // namespace d_006f8eb8
GUEST_EXPORT_FRAMED(0x006f8eb8, d_006f8eb8::rect_18_10_to_18_11, 0x4010);  // pushes {r4, lr} first, as the original

// f_006f9230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Looks for a flagged item kind around the position.
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

inline constexpr guest::Function<0x006c8760, u32(u32, u32, u32, u32)> item_kind_95d91e_is_set_at;

struct __attribute__((packed)) FindFlaggedItemNearFrame {
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
GUEST_OFFSET(FindFlaggedItemNearFrame, float_0, 0x0);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_4, 0x4);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_8, 0x8);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_c, 0xc);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_10, 0x10);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_14, 0x14);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_20, 0x20);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_24, 0x24);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_28, 0x28);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_2c, 0x2c);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_38, 0x38);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_3c, 0x3c);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_40, 0x40);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_44, 0x44);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_48, 0x48);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_4c, 0x4c);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_58, 0x58);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_64, 0x64);
GUEST_OFFSET(FindFlaggedItemNearFrame, float_68, 0x68);
GUEST_OFFSET(FindFlaggedItemNearFrame, word_74, 0x74);
GUEST_SIZE(FindFlaggedItemNearFrame, 0x7c);

u32 find_flagged_item_near(gptr<Float3> arg0, float S0) {
    guest::StackFrameOf<FindFlaggedItemNearFrame> frame;  // the original's stack frame
    float S2 = arg0->v[0];
    gptr<Local_006f9230_r1_1> r1_1 = gptr<Local_006f9230_r1_1>(frame.at(0x18).addr());
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
    u32 i = 0u;
    frame->float_14 = S10;
    u32 r5 = frame.at(0).addr();
    frame->float_20 = S5;
    frame->float_24 = S9;
    r1_1->float_0 = S0;
    r1_1->float_4 = S1;
    gptr<Local_006f9230_r1_2> r1_2 = gptr<Local_006f9230_r1_2>(frame.at(0x30).addr());
    frame->float_28 = S1;
    frame->float_2c = S3;
    frame->float_38 = S6;
    frame->float_3c = S2;
    r1_2->float_0 = S0;
    r1_2->float_4 = S1;
    gptr<Local_006f9230_r1_3> r1_3 = gptr<Local_006f9230_r1_3>(frame.at(0x5c).addr());
    frame->float_40 = S1;
    frame->float_44 = S8;
    frame->float_48 = S4;
    frame->float_4c = S1;
    frame->float_58 = S1;
    frame->float_64 = S1;
    frame->float_68 = S5;
    r1_3->float_0 = S3;
    r1_3->float_4 = S4;
    gptr<Local_006f9230_r1_4> r1_4 = gptr<Local_006f9230_r1_4>(frame.at(0x50).addr());
    r1_4->float_0 = S6;
    r1_4->float_4 = S7;
    do {
        gptr<Local_006f9230_r3_1> r3_1 = gptr<Local_006f9230_r3_1>(frame.at(0x6c).addr());
        gptr<Local_006f9230_r0_1> r0_1 = gptr<Local_006f9230_r0_1>(r5 + i * 0xcu);
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
        u32 r0_3 = item_kind_95d91e_is_set_at(frame.at(0x6c).addr(), 0u, r2_1, r3_1.addr());
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
        i += 1u;
        guest::preempt();
    } while (i < 9u);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 1u;
}

}  // namespace d_006f9230
GUEST_EXPORT_FRAMED(0x006f9230, d_006f9230::find_flagged_item_near, 0x4030);  // pushes {i, r5, lr} first, as the original

// f_006f9330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the tile of the cell in both maps (marking the second with state 2).
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

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32)> read_map_table;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0060d12c, u32(u32, u32)> Color4x555__brighten;
inline constexpr guest::Function<0x0060d240, u32(u32)> Cell__clear;
inline constexpr guest::Function<0x0060d264, u32(u32, u32, u32, u32)> ColorGrid16__set;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x007667a8, u32(u32, u32, u32, u32)> Grid__copy_tile;

struct __attribute__((packed)) RefreshTilesAtCellFrame {
    u8 unknown_0[0x30];  // (not read or written by name)
    u8 byte_30;
    u8 unknown_31[0x7];  // (not read or written by name)
};
GUEST_OFFSET(RefreshTilesAtCellFrame, byte_30, 0x30);
GUEST_SIZE(RefreshTilesAtCellFrame, 0x38);

u32 refresh_tiles_at_cell(u32 r0, u32 r1) {
    guest::StackFrameOf<RefreshTilesAtCellFrame> frame;  // the original's stack frame
    gptr<Local_006f9330_ea_1> ea_1 = gptr<Local_006f9330_ea_1>(frame.at(0x20).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    u32 map_3 = read_map_table(1u, r0);
    u32 tile = frame.at(0x20).addr();
    if (map_3 != 0) {
        block_of_cell(frame.at(0x10).addr(), tile);
        gptr<Local_006f9330_ea_2> ea_2 = gptr<Local_006f9330_ea_2>(frame.at(0x10).addr());
        u32 large_cell = GridMap__large_cell_at(map_3, ea_2->word_0, ea_2->word_4);
        if (large_cell != 0) {
            GridPoint__set_tile_in_block(frame.at(0x18).addr(), tile);
            Cell__clear(frame.at(0x28).addr());
            gptr<Local_006f9330_ea_3> ea_3 = gptr<Local_006f9330_ea_3>(frame.at(0x18).addr());
            Grid__copy_tile(large_cell, frame.at(0x28).addr(), ea_3->word_0, ea_3->word_4);
            Color4x555__brighten(frame.at(0x28).addr(), 0x20u);
            gptr<Local_006f9330_ea_4> ea_4 = gptr<Local_006f9330_ea_4>(frame.at(0x18).addr());
            ColorGrid16__set(large_cell, ea_4->word_0, ea_4->word_4, frame.at(0x28).addr());
        }
    }
    u32 map_4 = read_map_table(1u, guest::cpu()->r[1]);
    if (map_4 != 0) {
        block_of_cell(frame.at(8).addr(), frame.at(0x20).addr());
        gptr<Local_006f9330_ea_5> ea_5 = gptr<Local_006f9330_ea_5>(frame.at(8).addr());
        u32 large_cell_2 = GridMap__large_cell_at(map_4, ea_5->word_0, ea_5->word_4);
        if (large_cell_2 != 0) {
            GridPoint__set_tile_in_block(frame.at(0x10).addr(), frame.at(0x20).addr());
            Cell__clear(frame.at(0x28).addr());
            gptr<Local_006f9330_ea_6> ea_6 = gptr<Local_006f9330_ea_6>(frame.at(0x10).addr());
            Grid__copy_tile(large_cell_2, frame.at(0x28).addr(), ea_6->word_0, ea_6->word_4);
            frame->byte_30 = 2;
            gptr<Local_006f9330_ea_7> ea_7 = gptr<Local_006f9330_ea_7>(frame.at(0x10).addr());
            ColorGrid16__set(large_cell_2, ea_7->word_0, ea_7->word_4, frame.at(0x28).addr());
        }
    }
    return frame.at(0x20).addr();
}

}  // namespace d_006f9330
GUEST_EXPORT_FRAMED(0x006f9330, d_006f9330::refresh_tiles_at_cell, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006f9494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte `index` of a constant table.
namespace d_006f9494 {

inline constexpr u32 room_layer_bytes_address = 0x00952718u;

u32 byte_table_6f94a0_at(u32 r0) {
    u32 r0_1 = *gptr<u8>(r0 + room_layer_bytes_address);
    guest::cpu()->r[1] = room_layer_bytes_address;
    return r0_1;
}

}  // namespace d_006f9494
GUEST_EXPORT(0x006f9494, d_006f9494::byte_table_6f94a0_at);

// f_006f94a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position of the first acre (of the 7 x 6 town) of kind 0x9b or 0xa5.
namespace d_006f94a4 {

struct __attribute__((packed)) Local_006f94a4_r0_2 {
    u16 half_0;
};
GUEST_OFFSET(Local_006f94a4_r0_2, half_0, 0x0);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x006f973c, u32(u32)> acre_center_position;
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> tile_address_0075db98;

struct __attribute__((packed)) FindSpecialAcrePositionFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(FindSpecialAcrePositionFrame, word_0, 0x0);
GUEST_OFFSET(FindSpecialAcrePositionFrame, word_4, 0x4);
GUEST_OFFSET(FindSpecialAcrePositionFrame, word_8, 0x8);
GUEST_SIZE(FindSpecialAcrePositionFrame, 0x10);

void find_special_acre_position(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<FindSpecialAcrePositionFrame> frame;  // the original's stack frame
    if (r0 == 0) {
        return;
    }
    u32 r6 = r0;
    u32 save_data = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    u32 r7 = save_data + 0x53480u;
    u32 j = 0u;
    do {
        u32 i = 0u;
        do {
            gptr<Local_006f94a4_r0_2> r0_2 = gptr<Local_006f94a4_r0_2>(tile_address_0075db98(r7, i, j));
            if (r0_2->half_0 == 0x9bu || r0_2->half_0 == 0xa5u) {
                acre_center_position(frame.at(0).addr());
                *gptr<u32>(r6) = frame->word_0;
                *gptr<u32>(r6 + 4u) = frame->word_4;
                *gptr<u32>(r6 + 8u) = frame->word_8;
                return;
            }
            i += 1u;
            guest::preempt();
        } while (i < 7u);
        j += 1u;
        guest::preempt();
    } while (j < 6u);
}

}  // namespace d_006f94a4
GUEST_EXPORT_FRAMED(0x006f94a4, d_006f94a4::find_special_acre_position, 0x41f0);  // pushes {i, j, r6, r7, r8, lr} first, as the original

// f_006f9550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The acre kind of the town's side: 0x9f for mode 1, else 0xa0.
namespace d_006f9550 {

inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;

u32 town_side_acre_kind(u32 r0) {
    u32 save_data = get_save_data(r0);
    return *gptr<u8>(save_data + 0x53480u) == 1u ? 0x9fu : 0xa0u;
}

}  // namespace d_006f9550
GUEST_EXPORT_FRAMED(0x006f9550, d_006f9550::town_side_acre_kind, 0x4010);  // pushes {r4, lr} first, as the original

// f_006f9580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The rectangle of the town's entrance, on the side the town's layout (save +0x53400) puts it.
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

void town_entrance_rect(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 data_base = get_data_base(r0);
    if (*gptr<u8>(data_base + 0x53400u) != 0) {
        gptr<Local_006f9580_ea_1> ea_1 = gptr<Local_006f9580_ea_1>(frame.at(0).addr());
        ea_1->word_0 = 6;
        ea_1->word_4 = 9;
        gptr<Local_006f9580_ea_2> ea_2 = gptr<Local_006f9580_ea_2>(frame.at(8).addr());
        ea_2->word_0 = 6;
        ea_2->word_4 = 0xa;
        construct_word_quad_from_pairs(r0, frame.at(0).addr(), frame.at(8).addr());
        return;
    }
    gptr<Local_006f9580_ea_3> ea_3 = gptr<Local_006f9580_ea_3>(frame.at(0).addr());
    ea_3->word_0 = 0x3a;
    ea_3->word_4 = 9;
    gptr<Local_006f9580_ea_4> ea_4 = gptr<Local_006f9580_ea_4>(frame.at(8).addr());
    ea_4->word_0 = 0x3a;
    ea_4->word_4 = 0xa;
    construct_word_quad_from_pairs(r0, frame.at(0).addr(), frame.at(8).addr());
}

}  // namespace d_006f9580
GUEST_EXPORT_FRAMED(0x006f9580, d_006f9580::town_entrance_rect, 0x4010);  // pushes {r4, lr} first, as the original

// f_006f973c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The world position of the acre's center.
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

struct __attribute__((packed)) AcreCenterPositionFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(AcreCenterPositionFrame, word_0, 0x0);
GUEST_OFFSET(AcreCenterPositionFrame, word_4, 0x4);
GUEST_OFFSET(AcreCenterPositionFrame, word_8, 0x8);
GUEST_SIZE(AcreCenterPositionFrame, 0xc);

void acre_center_position(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2) {
    guest::StackFrameOf<AcreCenterPositionFrame> frame;  // the original's stack frame
    if (r0 == 0) {
        return;
    }
    u32 r6 = r0;
    u32 save_data = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    u32 r7 = save_data + 0x53480u;
    u32 j = 0u;
L_6f9760:;
    u32 i = 0u;
L_6f9764:;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    gptr<Local_006f973c_r0_2> r0_2 = gptr<Local_006f973c_r0_2>(tile_address_0075db98(r7, i, j));
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    u32 r0_3 = r0_2->half_0;
    if (r0_3 != 0x9bu) {
        r0_3 = r0_2->half_0;
        if (r0_3 != 0xa5u) {
            i += 1u;
            if (i < 7u) {
                guest::preempt();
                goto L_6f9764;
            }
            j += 1u;
            if (j < 6u) {
                guest::preempt();
                goto L_6f9760;
            }
            return;
        }
    }
    u32 save_data_2 = get_save_data(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    u32 r9 = 0x85f2c0u;
    r7 = save_data_2 + 0x53480u;
    j = 0u;
    do {
        i = 0u;
        do {
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            gptr<Local_006f973c_r0_5> r0_5 = gptr<Local_006f973c_r0_5>(tile_address_0075db98(r7, i, j));
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            if (r0_5->half_0 == 0x9bu) {
                block_corner_position(frame.at(0).addr(), i, j);
                frame->word_8 = std::bit_cast<u32>(std::bit_cast<float>(frame->word_8) + std::bit_cast<float>(*gptr<u32>(r9)));
                *gptr<u32>(r6) = frame->word_0;
                *gptr<u32>(r6 + 4u) = frame->word_4;
                *gptr<u32>(r6 + 8u) = frame->word_8;
                return;
            }
            if (r0_5->half_0 == 0xa5u) {
                block_corner_position(frame.at(0).addr(), i, j);
                float S0_1 = std::bit_cast<float>(frame->word_0) + 512.0f;
                frame->word_0 = std::bit_cast<u32>(S0_1);
                frame->word_8 = std::bit_cast<u32>(std::bit_cast<float>(frame->word_8) + std::bit_cast<float>(*gptr<u32>(r9)));
                *gptr<u32>(r6) = std::bit_cast<u32>(S0_1);
                *gptr<u32>(r6 + 4u) = frame->word_4;
                *gptr<u32>(r6 + 8u) = frame->word_8;
                return;
            }
            i += 1u;
            guest::preempt();
        } while (i < 7u);
        j += 1u;
        guest::preempt();
    } while (j < 6u);
}

}  // namespace d_006f973c
GUEST_EXPORT_FRAMED(0x006f973c, d_006f973c::acre_center_position, 0x43f0);  // pushes {i, j, r6, r7, r8, r9, lr} first, as the original

// f_006f9900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Triggers the event of the item at the position when its map object has the event flag.
namespace d_006f9900 {

inline constexpr guest::Function<0x002fccc4, u32(u32)> item_number_is_indexed;
inline constexpr guest::Function<0x002fd010, u32(u32)> map_object_entry;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059da08, u32(u32, u32)> FieldItems__remove_at;
inline constexpr guest::Function<0x0059daa0, u32(u32)> table_holder_word_set;

void trigger_item_event_at(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r2 == 0) {
        return;
    }
    u32 item = GridMap__process_world_position(r2, r0, r1, 0u);
    if (item != 0) {
        if (item_number_is_indexed(item) != 0) {
            u32 r0_3 = map_object_entry(item);
            if (r0_3 != 0) {
                u32 r0_4 = u32(*gptr<u8>(r0_3 + 0xfu)) << 0x1c;
                if (s32(r0_4) < 0) {
                    if (table_holder_word_set(r0_4) != 0) {
                        frame.release();
                        FieldItems__remove_at(r0, r1);
                        return;
                    }
                }
            }
        }
    }
}

}  // namespace d_006f9900
GUEST_EXPORT(0x006f9900, d_006f9900::trigger_item_event_at);

// f_006f9978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Visits the cells of the block, checking their terrain.
namespace d_006f9978 {

struct __attribute__((packed)) ScanCellTerrainArg0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(ScanCellTerrainArg0, word_28, 0x28);

struct __attribute__((packed)) Local_006f9978_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006f9978_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006f9978_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006f9978_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x00317eac, u32(u32, u32, u32)> get_u8_cell;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0057bb98, u32(u32)> block_cell_rect;
inline constexpr guest::Function<0x005cdfd0, u32(u32)> terrain_byte_890554;
inline constexpr guest::Function<0x006a2c2c, u32(u32, u32, u32, u32)> ByteMap__set;
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> position_of_block;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

struct __attribute__((packed)) ScanCellTerrainFrame {
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
GUEST_OFFSET(ScanCellTerrainFrame, word_0, 0x0);
GUEST_OFFSET(ScanCellTerrainFrame, word_4, 0x4);
GUEST_OFFSET(ScanCellTerrainFrame, word_10, 0x10);
GUEST_OFFSET(ScanCellTerrainFrame, word_14, 0x14);
GUEST_OFFSET(ScanCellTerrainFrame, word_48, 0x48);
GUEST_OFFSET(ScanCellTerrainFrame, word_4c, 0x4c);
GUEST_OFFSET(ScanCellTerrainFrame, word_60, 0x60);
GUEST_OFFSET(ScanCellTerrainFrame, word_64, 0x64);
GUEST_SIZE(ScanCellTerrainFrame, 0x68);

void scan_cell_terrain(gptr<ScanCellTerrainArg0> arg0, u32 r1) {
    guest::StackFrameOf<ScanCellTerrainFrame> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_22 = 0;
    u32 r0_25 = 0;
    if (r0 == 0) {
        return;
    }
    u32 r9 = r0;
    u32 r0_1 = arg0->word_28;
    if (r0_1 != 0) {
        gptr<Local_006f9978_ea_1> ea_1 = gptr<Local_006f9978_ea_1>(frame.at(0x50).addr());
        ea_1->word_0 = r0_1;
        ea_1->word_4 = 0x80;
        ea_1->word_8 = 0x80;
        u32 r0_4 = block_cell_rect(make_end_grid_rect_iterator(frame.at(0x20).addr(), r9, 0x80u, 0x80u));
        u32 r10 = r0_4;
        make_end_grid_rect_iterator(frame.at(0x30).addr(), r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        construct_grid_rect_iterator(frame.at(8).addr(), r9);
        u32 r0_8 = key_records_differ(frame.at(8).addr(), frame.at(0x20).addr());
        r1 = guest::cpu()->r[1];
        u32 r3 = guest::cpu()->r[3];
        if (r0_8 != 0) {
            u32 r8 = 0u;
            do {
                u32 cell = CellGrid__cell_at(r9, frame->word_10, frame->word_14, r3);
                r3 = guest::cpu()->r[3];
                if (cell != 0) {
                    u32 r4_2 = *gptr<u16>(cell);
                    u32 large_cell = GridMap__large_cell_at(r9, frame->word_10, frame->word_14, r3);
                    r3 = guest::cpu()->r[3];
                    u32 r7 = large_cell;
                    if (r4_2 <= 0x168u && r7 != 0) {
                        frame->word_60 = r8;
                        frame->word_64 = r8;
                        u32 r4_3 = frame->word_14;
                        u32 r2_6 = frame->word_10;
                        frame->word_0 = r8;
                        frame->word_4 = r8;
                        position_of_block(frame.at(0x60).addr(), frame.at(0x64).addr(), r2_6, r4_3);
                        construct_grid_rect_iterator(frame.at(0x40).addr(), r10);
                        u32 r0_14 = key_records_differ(frame.at(0x40).addr(), frame.at(0x30).addr());
                        r3 = guest::cpu()->r[3];
                        if (r0_14 != 0) {
                            do {
                                u32 terrain = GridCellLarge__terrain_at(r7, frame->word_48, frame->word_4c, r3);
                                u32 r4_5 = frame->word_4c + frame->word_64;
                                u32 r4_6 = get_u8_cell(frame.at(0x50).addr(), frame->word_60 + frame->word_48, r4_5);
                                u32 r0_18 = terrain_byte_890554(terrain);
                                if (s32(r4_6) < 0) {
                                    r4_6 = 0u;
                                } else if (s32(r0_18) < s32(r4_6)) {
                                    r4_6 = r0_18;
                                }
                                u32 r6_1 = frame->word_4c + frame->word_64;
                                ByteMap__set(frame.at(0x50).addr(), frame->word_60 + frame->word_48, r6_1, r4_6 & 0xffu);
                                WrappingCursor__advance(frame.at(0x40).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                                r0_22 = key_records_differ(frame.at(0x40).addr(), frame.at(0x30).addr());
                                r3 = guest::cpu()->r[3];
                                guest::preempt();
                            } while (r0_22 != 0);
                        }
                    }
                }
                WrappingCursor__advance(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
                r0_25 = key_records_differ(frame.at(8).addr(), frame.at(0x20).addr());
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_25 != 0);
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006f9978
GUEST_EXPORT_FRAMED(0x006f9978, d_006f9978::scan_cell_terrain, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006f9d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when an acre of the 7 x 6 town is of kind 0x9b or 0xa5.
namespace d_006f9d38 {

struct __attribute__((packed)) Local_006f9d38_r0_2 {
    u16 half_0;
};
GUEST_OFFSET(Local_006f9d38_r0_2, half_0, 0x0);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32)> tile_address_0075db98;

u32 town_has_special_acre(u32 r0, u32 r1, u32 r2) {
    u32 save_data = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    u32 r6 = save_data + 0x53480u;
    u32 j = 0u;
    do {
        u32 i = 0u;
        do {
            gptr<Local_006f9d38_r0_2> r0_2 = gptr<Local_006f9d38_r0_2>(tile_address_0075db98(r6, i, j));
            if (r0_2->half_0 == 0x9bu || r0_2->half_0 == 0xa5u) {
                return 1u;
            }
            i += 1u;
            guest::preempt();
        } while (i < 7u);
        j += 1u;
        guest::preempt();
    } while (j < 6u);
    return 0u;
}

}  // namespace d_006f9d38
GUEST_EXPORT_FRAMED(0x006f9d38, d_006f9d38::town_has_special_acre, 0x41f0);  // pushes {i, j, r6, r7, r8, lr} first, as the original

// f_006f9df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the item at the position when its map object has the event flag, clearing the tile.
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
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> clear_field_tile;

struct __attribute__((packed)) RemoveEventItemAtFrame {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(RemoveEventItemAtFrame, word_0, 0x0);
GUEST_SIZE(RemoveEventItemAtFrame, 0x18);

void remove_event_item_at(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<RemoveEventItemAtFrame> frame;  // the original's stack frame
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
    u32 item = GridMap__process_world_position(r2, r0, r1, 0u);
    if (item != 0) {
        if (item_number_is_indexed(item) != 0) {
            u32 r0_3 = map_object_entry(item);
            if (r0_3 != 0) {
                if (s32(u32(*gptr<u8>(r0_3 + 0xfu)) << 0x1c) < 0) {
                    frame->word_0 = 0;
                    if (table_holder_word_set(GridMap__place_item_at_world(r2, empty_item_address, r0, r1)) != 0) {
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
                        clear_field_tile(r0, r1, 1u, r3_4);
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
GUEST_EXPORT(0x006f9df4, d_006f9df4::remove_event_item_at);

// f_006f9f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the cells of the block by their terrain (cell byte 8).
namespace d_006f9f34 {

inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x00605628, u32(u32, u32)> table_94ebd1_at;
inline constexpr guest::Function<0x0060d0a4, u32(u32, u32, u32, u32)> set_cell_byte_08;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

u32 mark_cells_by_terrain(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 i = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r8 = 0;
    u32 r0_6 = 0;
    u32 r9 = r0;
    u32 cell = CellGrid__cell_at(r0, 0u, 1u, r3);
    u32 r0_2 = 0x169u;
    if (cell != 0) {
        r0_2 = *gptr<u16>(cell);
    }
    u32 r0_3 = table_94ebd1_at(r0_2, cell);
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0xeu) {
        r7 = 1u;
        r8 = 0u;
    } else {
        r7 = 5u;
        r8 = 0xfu;
    }
    u32 j = 0u;
    do {
        u32 large_cell = GridMap__large_cell_at(r9, r7, j, r3);
        r3 = guest::cpu()->r[3];
        r6 = large_cell;
        if (large_cell != 0) {
            i = 0u;
            do {
                u32 terrain = GridCellLarge__terrain_at(r6, r8, i, r3);
                r3 = guest::cpu()->r[3];
                if (terrain != 0x14u) {
                    if (terrain == 0x16u) {
                        set_cell_byte_08(r6, r8, i, 0x80u);
                        r3 = guest::cpu()->r[3];
                    }
                } else {
                    set_cell_byte_08(r6, r8, i, 0x32u);
                    r3 = guest::cpu()->r[3];
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < 0x10);
        }
        j += 1u;
        guest::preempt();
    } while (j < 6u);
    j = 0u;
    do {
        r0_6 = GridMap__large_cell_at(r9, j, 1u, r3);
        r3 = guest::cpu()->r[3];
        r6 = r0_6;
        if (r0_6 != 0) {
            i = 0u;
            do {
                r0_6 = GridCellLarge__terrain_at(r6, i, 0u, r3);
                r3 = guest::cpu()->r[3];
                if (r0_6 != 0x14u) {
                    if (r0_6 == 0x16u) {
                        r0_6 = set_cell_byte_08(r6, i, 0u, 0x80u);
                        r3 = guest::cpu()->r[3];
                    }
                } else {
                    r0_6 = set_cell_byte_08(r6, i, 0u, 0x32u);
                    r3 = guest::cpu()->r[3];
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < 0x10);
        }
        j += 1u;
        guest::preempt();
    } while (j < 7u);
    return r0_6;
}

}  // namespace d_006f9f34
GUEST_EXPORT_FRAMED(0x006f9f34, d_006f9f34::mark_cells_by_terrain, 0x47f0);  // pushes {i, j, r6, r7, r8, r9, r10, lr} first, as the original

// f_006fa0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item shown at the position: the covering item for markers, the item itself for real items, else empty.
namespace d_006fa0a0 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x004e0cec, u32(u32, u32, u32, u32)> item_covering_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x00768174, u32(u32)> Item__is_kind_2;
inline constexpr guest::Function<0x0076a028, u32(u32)> Item__is_marker_or_has_kind_11;

struct __attribute__((packed)) ItemShownAtFrame {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(ItemShownAtFrame, word_0, 0x0);
GUEST_SIZE(ItemShownAtFrame, 0x20);

void item_shown_at(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemShownAtFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 map_table = get_map_table(r0, r1, r2, r3);
    if (map_table != 0) {
        u32 item = GridMap__process_world_position(map_table, r1, r2, 0u);
        if (item != 0) {
            u32 category = Item__category(item);
            if (category != 0x3bu) {
                if (Item__is_marker_or_has_kind_11(item) != 0) {
                    frame->word_0 = 0;
                    u32 item_2 = item_covering_tile(r1, r2, 0u, map_table);
                    frame.release();
                    Item__copy_b(r0, item_2);
                    return;
                }
                u32 is_item = Item__is_item(item);
                if (is_item == 0) {
                    if (Item__is_kind_2(item) == 0) {
                        frame.release();
                        Item__copy_b(r0, empty_item_address);
                        return;
                    }
                }
                frame.release();
                Item__copy_b(r0, item);
                return;
            }
        }
    }
    frame.release();
    Item__copy_b(r0, empty_item_address);
    return;
}

}  // namespace d_006fa0a0
GUEST_EXPORT(0x006fa0a0, d_006fa0a0::item_shown_at);

// f_006fa1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the first free cell of the rectangle.
namespace d_006fa1fc {

struct __attribute__((packed)) Local_006fa1fc_r0_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa1fc_r0_10, word_0, 0x0);
GUEST_OFFSET(Local_006fa1fc_r0_10, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f224, u32(u32, u32)> copy_word_quad;
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32)> table_94ea68_at;
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) FindFreeCellInRectFrame {
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
GUEST_OFFSET(FindFreeCellInRectFrame, word_0, 0x0);
GUEST_OFFSET(FindFreeCellInRectFrame, word_4, 0x4);
GUEST_OFFSET(FindFreeCellInRectFrame, word_8, 0x8);
GUEST_OFFSET(FindFreeCellInRectFrame, word_c, 0xc);
GUEST_OFFSET(FindFreeCellInRectFrame, word_10, 0x10);
GUEST_OFFSET(FindFreeCellInRectFrame, word_14, 0x14);
GUEST_OFFSET(FindFreeCellInRectFrame, word_20, 0x20);
GUEST_OFFSET(FindFreeCellInRectFrame, word_24, 0x24);
GUEST_OFFSET(FindFreeCellInRectFrame, word_30, 0x30);
GUEST_OFFSET(FindFreeCellInRectFrame, word_34, 0x34);
GUEST_OFFSET(FindFreeCellInRectFrame, word_40, 0x40);
GUEST_OFFSET(FindFreeCellInRectFrame, word_44, 0x44);
GUEST_SIZE(FindFreeCellInRectFrame, 0x7c);

u32 find_free_cell_in_rect(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<FindFreeCellInRectFrame> frame;  // the original's stack frame
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r7 = r0;
    u32 r8 = r1;
    u32 map_3 = read_map_table(0x1fu, r1, r2, guest::cpu()->r[3]);
    if (map_3 != 0) {
        copy_word_quad(frame.at(0x50).addr(), map_3);
        u32 r5 = frame.at(0).addr();
        u32 r9_1 = frame.at(0x50).addr();
        u32 map_4 = read_map_table(0x1fu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r4 = map_4;
        construct_grid_rect_iterator(frame.at(0x20).addr(), r9_1);
        make_end_grid_rect_iterator(frame.at(0x40).addr(), r9_1, guest::cpu()->r[2]);
        frame->word_30 = frame->word_40;
        frame->word_34 = frame->word_44;
        copy_construct_word_pair(frame.at(0x38).addr(), frame.at(0x48).addr(), guest::cpu()->r[2]);
        frame->word_10 = frame->word_20;
        frame->word_14 = frame->word_24;
        copy_construct_word_pair(frame.at(0x18).addr(), frame.at(0x20).addr() + 8u, guest::cpu()->r[2]);
        u32 r0_9 = key_records_differ(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_9 != 0) {
            do {
                gptr<Local_006fa1fc_r0_10> r0_10 = gptr<Local_006fa1fc_r0_10>(frame.at(0x18).addr());
                if (r4 != 0) {
                    u32 cell = CellGrid__cell_at(r4, r0_10->word_0, r0_10->word_4);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (cell != 0) {
                        u32 r0_12 = *gptr<u16>(cell);
                        u32 r0_13 = table_94ea68_at(r0_12, r1, r2);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_13 == 1u || r0_13 == 5u || r0_13 == 7u || r0_13 == 0x61u) {
                            frame->word_0 = frame->word_10;
                            frame->word_4 = frame->word_14;
                            copy_construct_word_pair(r5 + 8u, frame.at(0x18).addr(), r2);
                            goto L_6fa34c;
                        }
                    }
                }
                WrappingCursor__advance(frame.at(0x10).addr(), r1, r2);
                r0_17 = key_records_differ(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                guest::preempt();
            } while (r0_17 != 0);
        }
        r0_18 = r5 + 8u;
        frame->word_0 = frame->word_30;
        frame->word_4 = frame->word_34;
        r1_9 = frame.at(0x38).addr();
        copy_construct_word_pair(r0_18, r1_9, r2);
L_6fa34c:;
        make_end_grid_rect_iterator(frame.at(0x68).addr(), frame.at(0x50).addr(), r2);
        if (key_records_differ(frame.at(0).addr(), frame.at(0x68).addr(), r2) != 0) {
            *gptr<u32>(r7) = frame->word_8;
            *gptr<u32>(r8) = frame->word_c;
        }
        map_3 = frame.at(0x50).addr();
    }
    return map_3;
}

}  // namespace d_006fa1fc
GUEST_EXPORT_FRAMED(0x006fa1fc, d_006fa1fc::find_free_cell_in_rect, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006fa430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The spawn position (0x9b4acc) when the town has an acre of kind 0x9b or 0xa5.
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

void special_acre_spawn_position(u32 r0, u32 r1, u32 r2) {
    if (r0 == 0) {
        return;
    }
    u32 r6 = r0;
    u32 save_data = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    u32 r7 = save_data + 0x53480u;
    u32 r5 = 0u;
L_6fa450:;
    u32 r4 = 0u;
L_6fa454:;
    gptr<Local_006fa430_r0_2> r0_2 = gptr<Local_006fa430_r0_2>(tile_address_0075db98(r7, r4, r5));
    u32 r0_3 = r0_2->half_0;
    if (r0_3 != 0x9bu) {
        r0_3 = r0_2->half_0;
        if (r0_3 != 0xa5u) {
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
GUEST_EXPORT_FRAMED(0x006fa430, d_006fa430::special_acre_spawn_position, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006fa4d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the rectangle from (0x2b, 0xa) to (0x2b, 0xc).
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

u32 rect_43_10_to_43_12(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006fa4d0_ea_1> ea_1 = gptr<Local_006fa4d0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = 0x2b;
    ea_1->word_4 = 0xa;
    gptr<Local_006fa4d0_ea_2> ea_2 = gptr<Local_006fa4d0_ea_2>(frame.at(8).addr());
    ea_2->word_0 = 0x2b;
    ea_2->word_4 = 0xc;
    construct_word_quad_from_pairs(r0, frame.at(0).addr(), frame.at(8).addr());
    return frame.at(0).addr();
}

}  // namespace d_006fa4d0
GUEST_EXPORT_FRAMED(0x006fa4d0, d_006fa4d0::rect_43_10_to_43_12, 0x4010);  // pushes {r4, lr} first, as the original

// f_006fa524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the first free cell of the rectangle (second rule set).
namespace d_006fa524 {

struct __attribute__((packed)) Local_006fa524_r0_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006fa524_r0_10, word_0, 0x0);
GUEST_OFFSET(Local_006fa524_r0_10, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f224, u32(u32, u32)> copy_word_quad;
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32)> table_94ea68_at;
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) FindFreeCellInRectBFrame {
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
GUEST_OFFSET(FindFreeCellInRectBFrame, word_0, 0x0);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_4, 0x4);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_8, 0x8);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_c, 0xc);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_10, 0x10);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_14, 0x14);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_20, 0x20);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_24, 0x24);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_30, 0x30);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_34, 0x34);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_40, 0x40);
GUEST_OFFSET(FindFreeCellInRectBFrame, word_44, 0x44);
GUEST_SIZE(FindFreeCellInRectBFrame, 0x7c);

u32 find_free_cell_in_rect_b(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<FindFreeCellInRectBFrame> frame;  // the original's stack frame
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r7 = r0;
    u32 r8 = r1;
    u32 map_3 = read_map_table(1u, r1, r2, guest::cpu()->r[3]);
    if (map_3 != 0) {
        copy_word_quad(frame.at(0x50).addr(), map_3);
        u32 r5 = frame.at(0).addr();
        u32 r9_1 = frame.at(0x50).addr();
        u32 map_4 = read_map_table(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r4 = map_4;
        construct_grid_rect_iterator(frame.at(0x20).addr(), r9_1);
        make_end_grid_rect_iterator(frame.at(0x40).addr(), r9_1, guest::cpu()->r[2]);
        frame->word_30 = frame->word_40;
        u32 r2_5 = frame->word_44;
        frame->word_34 = r2_5;
        copy_construct_word_pair(frame.at(0x38).addr(), frame.at(0x48).addr(), r2_5);
        frame->word_10 = frame->word_20;
        frame->word_14 = frame->word_24;
        copy_construct_word_pair(frame.at(0x18).addr(), frame.at(0x20).addr() + 8u, guest::cpu()->r[2]);
        u32 r0_9 = key_records_differ(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_9 != 0) {
            do {
                gptr<Local_006fa524_r0_10> r0_10 = gptr<Local_006fa524_r0_10>(frame.at(0x18).addr());
                if (r4 != 0) {
                    u32 cell = CellGrid__cell_at(r4, r0_10->word_0, r0_10->word_4);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (cell != 0) {
                        u32 r0_12 = *gptr<u16>(cell);
                        u32 r0_13 = table_94ea68_at(r0_12, r1, r2);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_13 == 1u) {
                            frame->word_0 = frame->word_10;
                            frame->word_4 = frame->word_14;
                            copy_construct_word_pair(r5 + 8u, frame.at(0x18).addr(), r2);
                            goto L_6fa668;
                        }
                    }
                }
                WrappingCursor__advance(frame.at(0x10).addr(), r1, r2);
                r0_17 = key_records_differ(frame.at(0x10).addr(), frame.at(0x30).addr(), guest::cpu()->r[2]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                guest::preempt();
            } while (r0_17 != 0);
        }
        r0_18 = r5 + 8u;
        frame->word_0 = frame->word_30;
        frame->word_4 = frame->word_34;
        r1_9 = frame.at(0x38).addr();
        copy_construct_word_pair(r0_18, r1_9, r2);
L_6fa668:;
        make_end_grid_rect_iterator(frame.at(0x68).addr(), frame.at(0x50).addr(), r2);
        if (key_records_differ(frame.at(0).addr(), frame.at(0x68).addr(), r2) != 0) {
            *gptr<u32>(r7) = frame->word_8;
            *gptr<u32>(r8) = frame->word_c;
        }
        map_3 = frame.at(0x50).addr();
    }
    return map_3;
}

}  // namespace d_006fa524
GUEST_EXPORT_FRAMED(0x006fa524, d_006fa524::find_free_cell_in_rect_b, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006fa728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte `index` of the table at 0x95276c.
namespace d_006fa728 {

inline constexpr u32 scene_room_records_address = 0x0095276cu;

u32 scene_room_record_byte(u32 r0) {
    u32 r0_1 = *gptr<u8>(r0 + scene_room_records_address);
    guest::cpu()->r[1] = scene_room_records_address;
    return r0_1;
}

}  // namespace d_006fa728
GUEST_EXPORT(0x006fa728, d_006fa728::scene_room_record_byte);

// f_006fa738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies one of the two default 16-byte records (0x85f7f8, 0x85f808) by the kind.
namespace d_006fa738 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;

void copy_default_rect(u32 r0_unused, u32 r1, u32 r2) {
    if (r2 == 0) {
        copy_bytes_small_sizes_first(guest::cpu()->r[0], 0x85f7f8u, 0x10u, guest::cpu()->r[3]);
        return;
    }
    if (r2 != 1u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    copy_bytes_small_sizes_first(guest::cpu()->r[0], 0x85f808u, 0x10u, guest::cpu()->r[3]);
    return;
}

}  // namespace d_006fa738
GUEST_EXPORT(0x006fa738, d_006fa738::copy_default_rect);

// f_006fa76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The world position of the first free cell (in an 8 x 6 block).
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
inline constexpr guest::Function<0x006fa524, u32(u32, u32, u32, u32)> find_free_cell_in_rect_b;

u32 free_cell_position(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    find_free_cell_in_rect_b(frame.at(8).addr(), frame.at(0xc).addr(), r2, r3);
    gptr<Local_006fa76c_ea_1> ea_1 = gptr<Local_006fa76c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = 8;
    ea_1->word_4 = 6;
    gptr<Local_006fa76c_ea_2> ea_2 = gptr<Local_006fa76c_ea_2>(frame.at(8).addr());
    position_of_block(r0, r1, ea_2->word_0, ea_2->word_4);
    return r0;
}

}  // namespace d_006fa76c
GUEST_EXPORT_FRAMED(0x006fa76c, d_006fa76c::free_cell_position, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006faa70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the 7 x 9 rectangle around the spawn position's cell.
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

struct __attribute__((packed)) RectAroundSpawnFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(RectAroundSpawnFrame, word_10, 0x10);
GUEST_OFFSET(RectAroundSpawnFrame, word_14, 0x14);
GUEST_SIZE(RectAroundSpawnFrame, 0x18);

void rect_around_spawn(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<RectAroundSpawnFrame> frame;  // the original's stack frame
    if (r0 == 0) {
        return;
    }
    u32 r0_1 = return_constant_0x9b4acc_(r0, r1, r2, guest::cpu()->r[3]);
    frame->word_10 = 0;
    frame->word_14 = 0;
    position_to_cell(frame.at(0x10).addr(), frame.at(0x14).addr(), r0_1);
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
GUEST_EXPORT_FRAMED(0x006faa70, d_006faa70::rect_around_spawn, 0x4010);  // pushes {r4, lr} first, as the original

// f_006fac2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clamps each value of the map's 128 x 128 height grid to the terrain's limit.
namespace d_006fac2c {

struct __attribute__((packed)) Local_006fac2c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006fac2c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006fac2c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006fac2c_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32)> terrain_at_world;
inline constexpr guest::Function<0x00317eac, u32(u32, u32, u32, u32)> get_u8_cell;
inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x005cdfd0, u32(u32)> terrain_byte_890554;
inline constexpr guest::Function<0x006a2c2c, u32(u32, u32, u32, u32)> ByteMap__set;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) ClampHeightMapToTerrainFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(ClampHeightMapToTerrainFrame, word_8, 0x8);
GUEST_OFFSET(ClampHeightMapToTerrainFrame, word_c, 0xc);
GUEST_SIZE(ClampHeightMapToTerrainFrame, 0x2c);

void clamp_height_map_to_terrain(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ClampHeightMapToTerrainFrame> frame;  // the original's stack frame
    u32 r0_15 = 0;
    u32 r7 = r1;
    u32 map_2 = read_map_table(r1, r1, r2, r3);
    if (map_2 != 0) {
        u32 r0_2 = *gptr<u32>(map_2 + 0x28u);
        if (r0_2 != 0) {
            gptr<Local_006fac2c_ea_1> ea_1 = gptr<Local_006fac2c_ea_1>(frame.at(0x20).addr());
            ea_1->word_0 = r0_2;
            ea_1->word_4 = 0x80;
            ea_1->word_8 = 0x80;
            make_end_grid_rect_iterator(frame.at(0x10).addr(), r0, 0x80u, 0x80u);
            construct_grid_rect_iterator(frame.at(0).addr(), r0);
            u32 r0_6 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());
            r3 = guest::cpu()->r[3];
            if (r0_6 != 0) {
                do {
                    u32 r4_2 = get_u8_cell(frame.at(0x20).addr(), frame->word_8, frame->word_c, r3);
                    u32 r0_11 = terrain_byte_890554(terrain_at_world(frame->word_8, frame->word_c, r7));
                    if (s32(r4_2) < 0) {
                        r4_2 = 0u;
                    } else if (s32(r0_11) < s32(r4_2)) {
                        r4_2 = r0_11;
                    }
                    ByteMap__set(frame.at(0x20).addr(), frame->word_8, frame->word_c, r4_2 & 0xffu);
                    WrappingCursor__advance(frame.at(0).addr());
                    r0_15 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());
                    r3 = guest::cpu()->r[3];
                    guest::preempt();
                } while (r0_15 != 0);
            }
        }
    }
}

}  // namespace d_006fac2c
GUEST_EXPORT_FRAMED(0x006fac2c, d_006fac2c::clamp_height_map_to_terrain, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006fad7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The owner of the current scene: the player of the house room, the player of the flagged page, or the flagged
// structure's record; null otherwise.
namespace d_006fad7c {

inline constexpr u32 scene_room_records_address = 0x0095276cu;
inline guest::global<u32, 0x0085f7a4> global_0085f7a4;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> player_at;
inline constexpr guest::Function<0x005b48a4, u32(u32)> read_u8_0x00957326_;
inline constexpr guest::Function<0x006bc388, u32(u32, u32)> page_address;
inline constexpr guest::Function<0x006cbb08, u32(u32)> structure_record_slot;
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32)> list_position_of_mode;

struct __attribute__((packed)) OwnerOfSceneFrame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(OwnerOfSceneFrame, word_0, 0x0);
GUEST_SIZE(OwnerOfSceneFrame, 0x10);

u32 owner_of_scene(u32 scene_flagged_2, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OwnerOfSceneFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 scene_2 = current_scene_id(scene_flagged_2, r1, r2, r3);
    u32 scene_flagged_4 = scene_has_flags(0x80u, scene_2, guest::cpu()->r[2]);
    u32 r2_2 = guest::cpu()->r[2];
    if (scene_flagged_4 != 0) {
        u32 r5_1 = 0u;
        frame->word_0 = *global_0085f7a4;
        u32 position = list_position_of_mode(scene_2, guest::cpu()->r[1], r2_2);
        if (position - 2u < 0x18u) {
            position = *gptr<u8>(position + scene_room_records_address);
            if (position < 4u) {
                r5_1 = *gptr<u8>(frame.at(0).addr() + position);
            }
        }
        u32 data_base = get_data_base(position);
        u32 player = player_at(data_base + 0x20u, r5_1);
        return player;
    }
    u32 scene_flagged_5 = scene_has_flags(0x2000u, scene_2, r2_2);
    if (scene_flagged_5 != 0) {
        u32 r0_8 = scene_2 - 0x56u;
        u32 data_base_2 = get_data_base(r0_8);
        r2_2 = 0xfff951c8u;
        u32 r0_11 = page_address(data_base_2 - r2_2, r0_8 & 0xffu);
        u32 r0_12 = *gptr<s8>(r0_11);
        if (s32(r0_12) >= 0) {
            u32 data_base_3 = get_data_base(r0_12);
            frame.release();
            return player_at(data_base_3 + 0x20u, r0_12 & 0xffu);
        }
    }
    u32 scene_flagged_6 = scene_has_flags(0x4000u, scene_2, r2_2);
    if (scene_flagged_6 != 0) {
        u32 r0_17 = structure_record_slot(read_u8_0x00957326_(scene_flagged_6));
        if (r0_17 != 0) {
            return r0_17 + 0x1238u;
        }
    }
    return 0u;
}

}  // namespace d_006fad7c
GUEST_EXPORT(0x006fad7c, d_006fad7c::owner_of_scene);

// f_006fae98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The room size id of the record's size (+0x1e) for the room kind (1 to 5, from its table); other kinds use the
// default rule.
namespace d_006fae98 {

struct __attribute__((packed)) Local_006fae98_r0_1 {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
};
GUEST_OFFSET(Local_006fae98_r0_1, byte_1e, 0x1e);

inline constexpr guest::Function<0x0030512c, u32(u32, u32, u32, u32)> record_302_address_0030512c;
inline constexpr guest::Function<0x006fa7ac, u32(u32, u32, u32, u32)> Record302__state;

u32 room_size_of_kind(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006fae98_r0_1> r0_1 = gptr<Local_006fae98_r0_1>(record_302_address_0030512c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    if (r1 != 3u) {
        if (r1 == 4u) {
            return gptr<u16>(0x85f82cu)[u32(r0_1->byte_1e)];
        }
        if (r1 == 5u) {
            return gptr<u16>(0x85f836u)[u32(r0_1->byte_1e)];
        }
        if (r1 == 2u) {
            return gptr<u16>(0x85f840u)[u32(r0_1->byte_1e)];
        }
        if (r1 == 1u) {
            return gptr<u16>(0x85f84au)[u32(r0_1->byte_1e)];
        }
        frame.release();
        return Record302__state(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return gptr<u16>(0x85f822u)[u32(r0_1->byte_1e)];
}

}  // namespace d_006fae98
GUEST_EXPORT(0x006fae98, d_006fae98::room_size_of_kind);

// f_006faf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the cell is in the 7 x 9 rectangle around the spawn position's cell.
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

struct __attribute__((packed)) CellIsNearSpawnFrame {
    u8 unknown_0[0x28];  // (not read or written by name)
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x8];  // (not read or written by name)
};
GUEST_OFFSET(CellIsNearSpawnFrame, word_28, 0x28);
GUEST_OFFSET(CellIsNearSpawnFrame, word_2c, 0x2c);
GUEST_SIZE(CellIsNearSpawnFrame, 0x38);

u32 cell_is_near_spawn(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<CellIsNearSpawnFrame> frame;  // the original's stack frame
    u32 r0_1 = frame.at(0).addr();
    construct_word_quad_zero(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = return_constant_0x9b4acc_(r0_1);
    frame->word_28 = 0;
    frame->word_2c = 0;
    position_to_cell(frame.at(0x28).addr(), frame.at(0x2c).addr(), r0_2);
    u32 r2_2 = frame->word_2c - 4u;
    u32 r1_3 = frame->word_28 - 3u;
    gptr<Local_006faf68_ea_3> ea_3 = gptr<Local_006faf68_ea_3>(frame.at(0x10).addr());
    ea_3->word_0 = r1_3;
    ea_3->word_4 = r2_2;
    u32 r2_3 = frame->word_2c + 4u;
    u32 r1_4 = frame->word_28 + 3u;
    gptr<Local_006faf68_ea_6> ea_6 = gptr<Local_006faf68_ea_6>(frame.at(0x18).addr());
    ea_6->word_0 = r1_4;
    ea_6->word_4 = r2_3;
    construct_word_quad_from_pairs_copy(frame.at(0).addr(), frame.at(0x10).addr(), frame.at(0x18).addr());
    gptr<Local_006faf68_r0_4> r0_4 = gptr<Local_006faf68_r0_4>(frame.at(0x20).addr());
    r0_4->word_0 = r0;
    r0_4->word_4 = r1;
    return GridRect__contains(frame.at(0).addr(), r0_4.addr());
}

}  // namespace d_006faf68
GUEST_EXPORT_FRAMED(0x006faf68, d_006faf68::cell_is_near_spawn, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006fb0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte `index` of the table at 0x952742.
namespace d_006fb0cc {

inline constexpr u32 byte_952742_address = 0x00952742u;

u32 byte_of_952742(u32 r0) {
    u32 r0_1 = *gptr<u8>(r0 + byte_952742_address);
    guest::cpu()->r[1] = byte_952742_address;
    return r0_1;
}

}  // namespace d_006fb0cc
GUEST_EXPORT(0x006fb0cc, d_006fb0cc::byte_of_952742);

// f_006fb27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The byte of room `room` (0 to 3) and layer `layer` (below 6) in the table at 0x952718.
namespace d_006fb27c {

inline constexpr u32 room_layer_bytes_address = 0x00952718u;

u32 room_layer_byte(u32 r0, u32 r1) {
    u32 r2_1 = 2u;
    if (r0 != 0) {
        if (r0 == 1u) {
            r2_1 = 8u;
        } else if (r0 == 2u) {
            r2_1 = 0xeu;
        } else if (r0 == 3u) {
            r2_1 = 0x14u;
        }
    }
    if (r1 < 6u) {
        r2_1 = r2_1 + r1 & 0xffu;
    }
    return *gptr<u8>(r2_1 + room_layer_bytes_address);
}

}  // namespace d_006fb27c
GUEST_EXPORT(0x006fb27c, d_006fb27c::room_layer_byte);

// f_006fb3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of room `room` (0 to 3) and layer `layer` (below 6) in the room tables.
namespace d_006fb3f4 {


u32 room_layer_index(u32 r0, u32 r1) {
    u32 r0_1 = 2u;
    if (r0 != 0) {
        if (r0 == 1u) {
            r0_1 = 8u;
        } else if (r0 == 2u) {
            r0_1 = 0xeu;
        } else if (r0 == 3u) {
            r0_1 = 0x14u;
        }
    }
    if (r1 < 6u) {
        r0_1 = r0_1 + r1 & 0xffu;
    }
    return r0_1;
}

}  // namespace d_006fb3f4
GUEST_EXPORT(0x006fb3f4, d_006fb3f4::room_layer_index);

// f_006fb430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the 3 x 11 rectangle around the spawn position's cell.
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

struct __attribute__((packed)) Rect3x11AroundSpawnFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Rect3x11AroundSpawnFrame, word_10, 0x10);
GUEST_OFFSET(Rect3x11AroundSpawnFrame, word_14, 0x14);
GUEST_SIZE(Rect3x11AroundSpawnFrame, 0x18);

void rect_3x11_around_spawn(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Rect3x11AroundSpawnFrame> frame;  // the original's stack frame
    if (r0 == 0) {
        return;
    }
    u32 r0_1 = return_constant_0x9b4acc_(r0, r1, r2, guest::cpu()->r[3]);
    frame->word_10 = 0;
    frame->word_14 = 0;
    position_to_cell(frame.at(0x10).addr(), frame.at(0x14).addr(), r0_1);
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
GUEST_EXPORT_FRAMED(0x006fb430, d_006fb430::rect_3x11_around_spawn, 0x4010);  // pushes {r4, lr} first, as the original

// f_006fb4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Triggers the event of the item at the position when its table holder is set.
namespace d_006fb4bc {

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059da08, u32(u32, u32)> FieldItems__remove_at;
inline constexpr guest::Function<0x0059daa0, u32(u32)> table_holder_word_set;

void trigger_table_item_event_at(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r2 == 0) {
        return;
    }
    u32 item = GridMap__process_world_position(r2, r0, r1, 0u);
    if (item != 0) {
        if (table_holder_word_set(item) != 0) {
            frame.release();
            FieldItems__remove_at(r0, r1);
            return;
        }
    }
}

}  // namespace d_006fb4bc
GUEST_EXPORT(0x006fb4bc, d_006fb4bc::trigger_table_item_event_at);

// f_006fb50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks the item at the position up into the 16 item slots (by its category), clearing the tile.
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
inline constexpr guest::Function<0x001b2114, u32(u32, u32, u32, u32)> ItemSlots16__store;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059daa0, u32(u32)> table_holder_word_set;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x005ba02c, u32(u32, u32)> HouseRooms__room_is_built;
inline constexpr guest::Function<0x0076ad64, u32(u32)> Item__flag_value;

struct __attribute__((packed)) PickUpItemIntoSlotsFrame {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(PickUpItemIntoSlotsFrame, word_0, 0x0);
GUEST_SIZE(PickUpItemIntoSlotsFrame, 0x18);

u32 pick_up_item_into_slots(u32 r0, u32 r1, u32 map_10, u32 r3) {
    guest::StackFrameOf<PickUpItemIntoSlotsFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    if (map_10 == 0) {
        return r0;
    }
    gptr<Local_006fb50c_ea_1> ea_1 = gptr<Local_006fb50c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 item_3 = GridMap__process_world_position(map_10, r0, r1, 0u);
    u32 item = item_3;
    if (item_3 != 0) {
        item_3 = Item__is_empty(item_3);
        if (item_3 == 0) {
            u32 category = Item__category(item);
            if (category == 0x7au) {
                u32 r0_3 = Item__flag_value(item);
                u32 data_base = get_data_base(r0_3);
                u32 records = slot_records_of(data_base);
                HouseRooms__room_is_built(records + 0x1744cu, r0_3);
            } else {
                u32 data_base_2 = get_data_base(category);
                ItemSlots16__store(data_base_2 + 0x62162u, item, 1u, 0x62162u);
            }
            frame->word_0 = 0;
            item_3 = table_holder_word_set(GridMap__place_item_at_world(map_10, empty_item_address, r0, r1));
            if (item_3 != 0) {
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
                return clear_field_tile(r0, r1, 1u, r3_8);
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
    return item_3;
}

}  // namespace d_006fb50c
GUEST_EXPORT(0x006fb50c, d_006fb50c::pick_up_item_into_slots);

// f_006fb604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the tile at the position when its item's table holder is set.
namespace d_006fb604 {

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059daa0, u32(u32)> table_holder_word_set;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> clear_field_tile;

void clear_table_item_tile_at(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r2 == 0) {
        return;
    }
    u32 item = GridMap__process_world_position(r2, r0, r1, 0u);
    if (item != 0) {
        if (table_holder_word_set(item) != 0) {
            frame.release();
            clear_field_tile(r0, r1, 1u, guest::cpu()->r[3]);
            return;
        }
    }
}

}  // namespace d_006fb604
GUEST_EXPORT(0x006fb604, d_006fb604::clear_table_item_tile_at);

// f_006fc854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scatters random items of the groups over the grid cells.
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
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> grid_cell_address;
inline constexpr guest::Function<0x00748724, u32(u32, u32, u32, u32)> ItemData__group;
inline constexpr guest::Function<0x0076f9b4, u32(u32, u32, u32, u32)> ItemBitSet__count_items;

struct __attribute__((packed)) ScatterItemsInGridFrame {
    u8 unknown_0[0x2f4];  // (not read or written by name)
    u32 word_2f4;
    u8 unknown_2f8[0x28];  // (not read or written by name)
};
GUEST_OFFSET(ScatterItemsInGridFrame, word_2f4, 0x2f4);
GUEST_SIZE(ScatterItemsInGridFrame, 0x320);

void scatter_items_in_grid(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ScatterItemsInGridFrame> frame;  // the original's stack frame
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 j = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    gptr<Local_006fc854_ea_1> ea_1 = gptr<Local_006fc854_ea_1>(frame.at(0x2f0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = i;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = j;
    ea_1->word_20 = r9;
    ea_1->word_24 = r10;
    ea_1->word_28 = r11;
    ea_1->word_2c = r14;
    r5 = r2;
    r10 = r0;
    r11 = 0x2e6u;
    clear(frame.at(0).addr(), r11, r2, r3);
    j = 0u;
    r9 = 1u;
    do {
        i = 0u;
        do {
            u32 cell_3 = grid_cell_address(frame->word_2f4, j, i, 0u);
            u32 item_data = Item__data(cell_3);
            if (item_data != 0) {
                if (ItemData__group(item_data, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) == r5) {
                    u32 r7_1 = frame.at(0).addr();
                    u32 is_item = Item__is_item(cell_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    if (is_item != 0) {
                        u32 number = Item__number(cell_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        *gptr<u8>(r7_1 + (number - 0x2000u >> 3)) = u8(u32(*gptr<u8>(r7_1 + (number - 0x2000u >> 3))) | r9 << (number - 0x2000u & 7u));
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (i < 0xau);
        j += 1u;
        guest::preempt();
    } while (j < 0xau);
    j = 0u;
    do {
        i = 0u;
        do {
            u32 cell_4 = grid_cell_address(frame->word_2f4, j, i, 1u);
            u32 item_data_2 = Item__data(cell_4);
            r1_6 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
            if (item_data_2 != 0) {
                u32 r0_12 = ItemData__group(item_data_2, r1_6, r2_6, guest::cpu()->r[3]);
                r1_6 = guest::cpu()->r[1];
                r2_6 = guest::cpu()->r[2];
                if (r0_12 == r5) {
                    u32 r7_2 = frame.at(0).addr();
                    u32 is_item_2 = Item__is_item(cell_4, r1_6, r2_6, guest::cpu()->r[3]);
                    r1_6 = guest::cpu()->r[1];
                    r2_6 = guest::cpu()->r[2];
                    if (is_item_2 != 0) {
                        u32 number_2 = Item__number(cell_4, r1_6, r2_6, guest::cpu()->r[3]);
                        r2_6 = number_2 - 0x2000u & 7u;
                        r1_6 = u32(*gptr<u8>(r7_2 + (number_2 - 0x2000u >> 3))) | lsl_r(r9, r2_6 & 0xff);
                        *gptr<u8>(r7_2 + (number_2 - 0x2000u >> 3)) = u8(r1_6);
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (i < 8u);
        j += 1u;
        guest::preempt();
    } while (j < 8u);
    u32 r0_17 = ItemBitSet__count_items(frame.at(0).addr(), r1_6, r2_6, guest::cpu()->r[3]);
    r7 = r0_17;
    if (r0_17 > 1u) {
        clear(frame.at(0).addr(), r11, guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i = 0x29dfu;
        j = 0x30cbu;
        do {
            construct_item(frame.at(0x2e8).addr(), uxth(i), r2, r3);
            u32 item_data_3 = Item__data(frame.at(0x2e8).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (item_data_3 != 0) {
                u32 r0_22 = ItemData__group(item_data_3, guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_22 == r5) {
                    u32 r11_1 = frame.at(0x2e8).addr();
                    u32 r6_1 = frame.at(0).addr();
                    u32 is_item_3 = Item__is_item(r11_1, guest::cpu()->r[1], r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (is_item_3 != 0) {
                        u32 number_3 = Item__number(r11_1, guest::cpu()->r[1], r2, r3);
                        r3 = guest::cpu()->r[3];
                        r2 = number_3 - 0x2000u & 7u;
                        *gptr<u8>(r6_1 + (number_3 - 0x2000u >> 3)) = u8(u32(*gptr<u8>(r6_1 + (number_3 - 0x2000u >> 3))) | lsl_r(r9, r2 & 0xff));
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (i <= j);
        i = 0x3130u;
        r11 = i | u32(s32(i) >> 7);
        do {
            construct_item(frame.at(0x2e8).addr(), uxth(i), r2, r3);
            u32 item_data_4 = Item__data(frame.at(0x2e8).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (item_data_4 != 0) {
                u32 r0_29 = ItemData__group(item_data_4, guest::cpu()->r[1], r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_29 == r5) {
                    u32 r8_1 = frame.at(0x2e8).addr();
                    u32 r6_2 = frame.at(0).addr();
                    u32 is_item_4 = Item__is_item(r8_1, guest::cpu()->r[1], r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (is_item_4 != 0) {
                        u32 number_4 = Item__number(r8_1, guest::cpu()->r[1], r2, r3);
                        r3 = guest::cpu()->r[3];
                        r2 = number_4 - 0x2000u & 7u;
                        *gptr<u8>(r6_2 + (number_4 - 0x2000u >> 3)) = u8(u32(*gptr<u8>(r6_2 + (number_4 - 0x2000u >> 3))) | lsl_r(r9, r2 & 0xff));
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (i <= r11);
        u32 r0_34 = ItemBitSet__count_items(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
        if (r0_34 != 0 && r0_34 == r7) {
            u32 zf_1 = *gptr<u8>(r10 + 0x31u) == 0x67u;
            *gptr<u32>(r10 + 0x10u) = *gptr<u32>(r10 + 0x10u) + ((r7 << 7) - r7 * 3u << 3);
            if (!zf_1) {
                u32 random = random_below(0x64u);
                if (s32(random) >= 0x28) {
                    goto L_6fcb1c;
                }
            }
            *gptr<u8>(r10 + 0x31u) = u8(r5);
        }
    }
L_6fcb1c:;
    gptr<Local_006fc854_ea_2> ea_2 = gptr<Local_006fc854_ea_2>(frame.at(0x2fc).addr());
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
GUEST_EXPORT(0x006fc854, d_006fc854::scatter_items_in_grid);

// f_006fd258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Visits the grid cells' items, checking their data.
namespace d_006fd258 {

inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> grid_cell_address;

void count_grid_items(u32 r0, u32 r1) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 i = 0;
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;
    u32 r10 = r0;
    u32 r11 = r1;
    u32 k = 0u;
    do {
        u32 r8 = 0u;
        u32 j = r8;
        u32 r5 = *gptr<u8>(k + 0x865950u);
        do {
            i = 0u;
            do {
                u32 cell_3 = grid_cell_address(r11, j, i, 0u);
                u32 is_item = Item__is_item(cell_3);
                if (is_item != 0) {
                    if (item_has_valid_data(cell_3) != 0) {
                        u32 item_data = Item__data(cell_3);
                        if (item_data != 0) {
                            u32 r0_5 = u32(*gptr<u8>(item_data + 0x19u)) & 0xfu;
                            if (r0_5 >= 0xeu) {
                                r0_5 = 0u;
                            }
                            if (r0_5 == r5) {
                                r8 += 1u;
                            }
                        }
                    }
                }
                i += 1u;
                guest::preempt();
            } while (i < 0xau);
            j += 1u;
            guest::preempt();
        } while (j < 0xau);
        j = 0u;
        do {
            i = 0u;
            do {
                u32 cell_4 = grid_cell_address(r11, j, i, 1u);
                u32 is_item_2 = Item__is_item(cell_4);
                if (is_item_2 != 0) {
                    if (item_has_valid_data(cell_4) != 0) {
                        u32 item_data_2 = Item__data(cell_4);
                        if (item_data_2 != 0) {
                            u32 r0_10 = u32(*gptr<u8>(item_data_2 + 0x19u)) & 0xfu;
                            if (r0_10 >= 0xeu) {
                                r0_10 = 0u;
                            }
                            if (r0_10 == r5) {
                                r8 += 1u;
                            }
                        }
                    }
                }
                i += 1u;
                guest::preempt();
            } while (i < 8u);
            j += 1u;
            guest::preempt();
        } while (j < 8u);
        if (r8 >= 3u) {
            u32 r1_7 = *gptr<u32>(r10 + 0x14u);
            *gptr<u8>(r10 + 0x34u) = u8(r5);
            *gptr<u32>(r10 + 0x14u) = r1_7 + (r8 * 9u + (r8 << 4) << 3);
        }
        k += 1u;
        guest::preempt();
    } while (k < 5u);
}

}  // namespace d_006fd258
GUEST_EXPORT_FRAMED(0x006fd258, d_006fd258::count_grid_items, 0x4ff0);  // pushes {i, r5, r6, j, r8, k, r10, r11, lr} first, as the original

// f_006fef38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the room's cells with the owner's items.
namespace d_006fef38 {

inline constexpr guest::Function<0x001def90, u32(u32, u32, u32, u32)> RoomScore__clear_items;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> player_at;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x0030512c, u32(u32, u32)> record_302_address_0030512c;
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> item_has_valid_data;
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32)> block_or_first;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x006fc144, u32(u32, u32)> Town__plan_plots;
inline constexpr guest::Function<0x006ff188, u32(u32, u32)> Villager__plan_move_in;
inline constexpr guest::Function<0x0070eebc, u32(u32)> byte_14_below_8;
inline constexpr guest::Function<0x007166a4, u32(u32, u32, u32, u32)> Records6__get;
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> grid_cell_address;

struct __attribute__((packed)) FillRoomItemsFrame {
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
    u32 cell;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(FillRoomItemsFrame, word_0, 0x0);
GUEST_OFFSET(FillRoomItemsFrame, word_4, 0x4);
GUEST_OFFSET(FillRoomItemsFrame, word_c, 0xc);
GUEST_OFFSET(FillRoomItemsFrame, word_14, 0x14);
GUEST_OFFSET(FillRoomItemsFrame, word_18, 0x18);
GUEST_OFFSET(FillRoomItemsFrame, word_24, 0x24);
GUEST_OFFSET(FillRoomItemsFrame, word_28, 0x28);
GUEST_OFFSET(FillRoomItemsFrame, cell, 0x2c);
GUEST_SIZE(FillRoomItemsFrame, 0x34);

u32 fill_room_items(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FillRoomItemsFrame> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 data_base = get_data_base(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 k = 0u;
    u32 r11 = data_base + 0x20u;
    u32 r9 = k;
    u32 r10 = frame.at(0x14).addr();
    do {
        u32 r5_1 = k & 0xffu;
        u32 player = player_at(r11, r5_1, r2, r3);
        r0_4 = PersonalId__is_set(player + 0x55a6u);
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            r0_4 = u32(*gptr<u8>(player + 0x5711u)) << 0x1c;
            if (s32(r0_4) < 0) {
                u32 room_score = player + 0x56c4u;
                RoomScore__clear_items(room_score, r1_2, r2, r3);
                if (byte_14_below_8(room_score) == 0) {
                    r0_6 = Town__plan_plots(room_score, r5_1);
                } else {
                    r0_6 = Villager__plan_move_in(room_score, r5_1);
                }
                u32 r8 = room_score;
                u32 save_data = get_save_data(r0_6);
                u32 r0_9 = block_or_first(save_data + 0x5d900u, r5_1);
                u32 r1_5 = *gptr<u8>(r8 + 0x17u);
                frame->word_c = record_302_address_0030512c(r0_9, r1_5);
                frame->word_4 = r9;
                frame->word_0 = r10;
                Records6__get(r0_9, frame.at(0x24).addr(), frame.at(0x28).addr(), frame.at(0x18).addr());
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 j = frame->word_24;
                u32 r6 = 0u;
                if (j < frame->word_18) {
                    do {
                        u32 i = frame->word_28;
                        if (i < frame->word_14) {
                            do {
                                u32 cell_2 = grid_cell_address(frame->word_c, j, i, 0u);
                                frame->cell = cell_2;
                                u32 is_item = Item__is_item(cell_2);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (is_item != 0) {
                                    u32 r0_15 = item_has_valid_data(frame->cell, guest::cpu()->r[1], r2, r3);
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    if (r0_15 != 0) {
                                        u32 item_data = Item__data(frame->cell, guest::cpu()->r[1], r2, r3);
                                        r2 = guest::cpu()->r[2];
                                        r3 = guest::cpu()->r[3];
                                        if (item_data != 0) {
                                            u32 r0_18 = u32(*gptr<u8>(item_data + 0x17u)) & 0xfu;
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
                                i += 1u;
                                guest::preempt();
                            } while (i < frame->word_14);
                        }
                        j += 1u;
                        guest::preempt();
                    } while (j < frame->word_18);
                }
                u32 r4_2 = 0u;
                u32 r0_19 = *gptr<u8>(frame->word_c + 0x1eu);
                if (r6 != 0) {
                    r4_2 = 1u;
                }
                if (r0_19 != 2u) {
                    if (r0_19 == 3u) {
                        if (r6 >= 0x11u) {
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
                    if (r6 >= 0xau) {
                        r4_2 = 3u;
                        goto L_6ff164;
                    }
                    if (r6 >= 4u) {
                        goto L_6ff160;
                    }
                    goto L_6ff164;
                }
                if (r6 < 0x21u) {
                    if (r6 < 0x11u) {
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
                *gptr<u8>(r0_4 + 0x16u) = u8(r1_2);
            }
        }
        k += 1u;
        guest::preempt();
    } while (k < 4u);
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_006fef38
GUEST_EXPORT_FRAMED(0x006fef38, d_006fef38::fill_room_items, 0x4ff0);  // pushes {i, j, r6, k, r8, r9, r10, r11, lr} first, as the original

// f_006ff640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the room's items to their current forms.
namespace d_006ff640 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
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
inline constexpr guest::Function<0x0071c124, u32(u32, u32)> entry_24_at;
inline constexpr guest::Function<0x0072031c, u32(u32)> member_address_0x2f2_;
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> grid_cell_address;
inline constexpr guest::Function<0x007203f0, u32(u32)> member_address_0x2f6_;
inline constexpr guest::Function<0x007485b4, u32(u32, u32)> rule_value;
inline constexpr guest::Function<0x00768fac, u32(u32)> Item__is_id_30cc_to_30d1;
inline constexpr guest::Function<0x00769cc0, u32(u32)> Item__variant_of_30cc_set;

struct __attribute__((packed)) ConvertRoomItemsFrame {
    u32 word_0;
};
GUEST_OFFSET(ConvertRoomItemsFrame, word_0, 0x0);
GUEST_SIZE(ConvertRoomItemsFrame, 0x4);

void convert_room_items(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ConvertRoomItemsFrame> frame;  // the original's stack frame
    u32 i = 0;
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
    u32 j = 0u;
    u32 r9 = r1;
    u32 r8 = r2;
    do {
        i = 0u;
        do {
            u32 cell_3 = grid_cell_address(r9, j, i, 0u);
            if (Item__is_id_30cc_to_30d1(cell_3) == 0) {
                u32 is_item = Item__is_item(cell_3, guest::cpu()->r[1]);
                if (is_item == 0) {
                    goto L_6ff998;
                }
                if (item_has_valid_data(cell_3, guest::cpu()->r[1]) == 0) {
                    goto L_6ff998;
                }
                u32 is_item_2 = Item__is_item(cell_3, guest::cpu()->r[1]);
                if (is_item_2 == 0) {
                    goto L_6ff998;
                }
                Item__copy_b(frame.at(0).addr(), cell_3);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                r0_9 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                if (r0_9 != 0) {
                    goto L_6ff90c;
                }
                goto L_6ff990;
            }
            r0_10 = Item__variant_of_30cc_set(cell_3);
            r0_11 = player_record_for_slot(r8);
            if (r0_11 == 0) {
                goto L_6ff998;
            }
            r0_13 = entry_24_at(r0_11 + 0x5544u, r0_10);
            r0_14 = item_if_class_1(r0_13);
            r0_15 = Item__is_item(r0_14, guest::cpu()->r[1]);
            r1_11 = guest::cpu()->r[1];
            if (r0_15 != 0) {
                Item__copy_b(frame.at(0).addr(), r0_14);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                u32 item_data = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                r1_11 = guest::cpu()->r[1];
                if (item_data != 0) {
                    u32 r0_20 = rule_value(item_data, r1_11);
                    r1_11 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_20 + r1_11;
                }
            }
            r0_21 = slot_1_if_class_2_003031c8(r0_13, r1_11);
            r0_22 = Item__is_item(r0_21, guest::cpu()->r[1]);
            r1_15 = guest::cpu()->r[1];
            if (r0_22 != 0) {
                Item__copy_b(frame.at(0).addr(), r0_21);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                u32 item_data_2 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                r1_15 = guest::cpu()->r[1];
                if (item_data_2 != 0) {
                    u32 r0_27 = rule_value(item_data_2, r1_15);
                    r1_15 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_27 + r1_15;
                }
            }
            r0_28 = slot_2_if_class_3_00303110(r0_13, r1_15);
            r0_29 = Item__is_item(r0_28, guest::cpu()->r[1]);
            r1_19 = guest::cpu()->r[1];
            if (r0_29 != 0) {
                Item__copy_b(frame.at(0).addr(), r0_28);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                u32 item_data_3 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                r1_19 = guest::cpu()->r[1];
                if (item_data_3 != 0) {
                    u32 r0_34 = rule_value(item_data_3, r1_19);
                    r1_19 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_34 + r1_19;
                }
            }
            r0_35 = slot_3_if_class_4(r0_13, r1_19);
            r0_36 = Item__is_item(r0_35, guest::cpu()->r[1]);
            r1_23 = guest::cpu()->r[1];
            if (r0_36 != 0) {
                Item__copy_b(frame.at(0).addr(), r0_35);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                u32 item_data_4 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                r1_23 = guest::cpu()->r[1];
                if (item_data_4 != 0) {
                    u32 r0_41 = rule_value(item_data_4, r1_23);
                    r1_23 = *gptr<u32>(r5);
                    *gptr<u32>(r5) = r0_41 + r1_23;
                }
            }
            r0_42 = slots_slot_5_if_class_6(r0_13, r1_23);
            r0_43 = Item__is_item(r0_42, guest::cpu()->r[1]);
            r1_27 = guest::cpu()->r[1];
            if (r0_43 != 0) {
                Item__copy_b(frame.at(0).addr(), r0_42);
                convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                u32 item_data_5 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                r1_27 = guest::cpu()->r[1];
                if (item_data_5 != 0) {
                    u32 r0_48 = rule_value(item_data_5, r1_27);
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
            Item__copy_b(r0_51, r0_49);
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
            i += 1u;
            guest::preempt();
        } while (i < 0xau);
        j += 1u;
        guest::preempt();
    } while (j < 0xau);
    j = 0u;
    do {
        i = 0u;
        do {
            u32 cell_4 = grid_cell_address(r9, j, i, 1u);
            u32 is_item_3 = Item__is_item(cell_4, guest::cpu()->r[1]);
            r1_34 = guest::cpu()->r[1];
            if (is_item_3 != 0) {
                u32 r0_57 = item_has_valid_data(cell_4, r1_34);
                r1_34 = guest::cpu()->r[1];
                if (r0_57 != 0) {
                    u32 is_item_4 = Item__is_item(cell_4, r1_34);
                    if (is_item_4 != 0) {
                        Item__copy_b(frame.at(0).addr(), cell_4);
                        convert_to_earlier_form(frame.at(0).addr(), guest::cpu()->r[1]);
                        u32 item_data_6 = Item__data(frame.at(0).addr(), guest::cpu()->r[1]);
                        r1_34 = guest::cpu()->r[1];
                        if (item_data_6 != 0) {
                            u32 r0_63 = rule_value(item_data_6, r1_34);
                            *gptr<u32>(r5) = r0_63 + *gptr<u32>(r5);
                        }
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (i < 8u);
        j += 1u;
        guest::preempt();
    } while (j < 8u);
    u32 r0_64 = member_address_0x2f2_(r9);
    u32 is_item_5 = Item__is_item(r0_64, r1_34);
    if (is_item_5 != 0) {
        r1_34 = r0_64;
        Item__copy_b(frame.at(0).addr(), r1_34);
        convert_to_earlier_form(frame.at(0).addr(), r1_34);
        u32 item_data_7 = Item__data(frame.at(0).addr(), r1_34);
        if (item_data_7 != 0) {
            u32 r0_70 = rule_value(item_data_7, r1_34);
            *gptr<u32>(r5) = r0_70 + *gptr<u32>(r5);
        }
    }
    u32 r0_71 = member_address_0x2f6_(r9);
    u32 is_item_6 = Item__is_item(r0_71, r1_34);
    if (is_item_6 != 0) {
        Item__copy_b(frame.at(0).addr(), r0_71);
        convert_to_earlier_form(frame.at(0).addr(), r0_71);
        u32 item_data_8 = Item__data(frame.at(0).addr(), r0_71);
        if (item_data_8 != 0) {
            u32 r0_77 = rule_value(item_data_8, r0_71);
            *gptr<u32>(r5) = r0_77 + *gptr<u32>(r5);
        }
    }
}

}  // namespace d_006ff640
GUEST_EXPORT_FRAMED(0x006ff640, d_006ff640::convert_room_items, 0x4ff0);  // pushes {i, r5, j, r7, r8, r9, r10, r11, lr} first, as the original

// f_006ffb40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the room's items against its size.
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
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> grid_cell_address;
inline constexpr guest::Function<0x00748724, u32(u32, u32, u32, u32)> ItemData__group;

struct __attribute__((packed)) CheckRoomItemsFrame {
    u8 unknown_0[0x67];  // (not read or written by name)
    u8 byte_67;
    u32 word_68;
    u8 unknown_6c[0x8];  // (not read or written by name)
    u32 word_74;
    u8 unknown_78[0x28];  // (not read or written by name)
};
GUEST_OFFSET(CheckRoomItemsFrame, byte_67, 0x67);
GUEST_OFFSET(CheckRoomItemsFrame, word_68, 0x68);
GUEST_OFFSET(CheckRoomItemsFrame, word_74, 0x74);
GUEST_SIZE(CheckRoomItemsFrame, 0xa0);

void check_room_items(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CheckRoomItemsFrame> frame;  // the original's stack frame
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 j = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    gptr<Local_006ffb40_ea_1> ea_1 = gptr<Local_006ffb40_ea_1>(frame.at(0x6c).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = i;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = j;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    r9 = r1;
    r11 = r0;
    r10 = r3;
    clear(frame.at(0).addr(), 0x67u, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    frame->byte_67 = 0;
L_6ffb6c:;
    u32 r0_3 = record_302_address_0030512c(frame->word_74, r8 & 0xffu, r2, r3);
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
            j = 0u;
        }
        do {
            i = 0u;
            do {
                u32 cell_2 = grid_cell_address(frame->word_68, j, i, 0u);
                u32 is_item = Item__is_item(cell_2);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (is_item != 0) {
                    u32 r5_1 = frame.at(0).addr();
                    u32 item_data = Item__data(cell_2, guest::cpu()->r[1], r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (item_data != 0) {
                        u32 r1_5 = *gptr<u8>(item_data + 0x19u);
                        u32 r6_1 = r1_5 & 0xfu;
                        if (r6_1 >= 0xeu) {
                            r6_1 = 0u;
                        }
                        u32 r0_9 = ItemData__group(item_data, r1_5, r2, r3);
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
                                *gptr<u8>(r5_1 + r0_9) = u8(u32(*gptr<u8>(r5_1 + r0_9)) | 0x10u);
                                r0_10 = u32(frame->byte_67) | 0x10u;
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
                i += 1u;
                guest::preempt();
            } while (i < 0xau);
            j += 1u;
            guest::preempt();
        } while (j < 0xau);
    }
    r8 += 1u;
    if (r8 >= 6u) {
        *gptr<u8>(r9) = 0x67;
        r1 = frame.at(0).addr();
        if (frame->byte_67 != 0x1fu) {
            r1_6 = 0u;
        } else {
            r0 = 0u;
            if (r10 != 0) {
                do {
                    if (*gptr<u8>(r1 + r0) == 0x1fu && r0 != 0x65u) {
                        r1_6 = 0x249f0u;
                        *gptr<u8>(r9) = u8(r0);
                        goto L_6ffd68;
                    }
                    r0 = r0 + 1u & 0xffu;
                    guest::preempt();
                } while (r0 < 0x67u);
                if (r10 != 0) {
                    r1_6 = 0x186a0u;
                    goto L_6ffd68;
                }
                goto L_6ffd64;
            }
L_6ffd34:;
            if (*gptr<u8>(r1 + r0) != 0x1fu || r0 == 0x65u) {
                r0 = r0 + 1u & 0xffu;
                if (r0 < 0x67u) {
                    guest::preempt();
                    goto L_6ffd34;
                }
                goto L_6ffd64;
            }
            r1_6 = 0x1388u;
            *gptr<u8>(r9) = u8(r0);
            goto L_6ffd68;
L_6ffd64:;
            r1_6 = 0x9c4u;
        }
L_6ffd68:;
        *gptr<u32>(r11) = r1_6;
        gptr<Local_006ffb40_ea_2> ea_2 = gptr<Local_006ffb40_ea_2>(frame.at(0x7c).addr());
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
GUEST_EXPORT(0x006ffb40, d_006ffb40::check_room_items);

// f_006ffd84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the flags of the players at 0x952c16.
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
inline constexpr guest::Function<0x002f86c0, u32(u32, u32)> udiv;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;
inline constexpr guest::Function<0x00301df4, u32(u32, u32, u32)> player_in_array;

u32 refresh_player_flags_952c16(u32 r0_unused, u32 r1, u32 r2) {
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
    u32 save_data = get_save_data(0u, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r10 = global_00a14b30_address;
    u32 r6 = save_data + 0xa0u;
    u32 i = 0u;
    do {
        r0_4 = PersonalId__is_set(player_in_array(r6, i & 0xffu, r2) + 0x55a6u);
        r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_4 != 0) {
            gptr<Local_006ffd84_r1_4> r1_4 = gptr<Local_006ffd84_r1_4>(r10 + i * 6u);
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
        i += 1u;
        guest::preempt();
    } while (i < 4u);
    if (r5 != 0) {
        u32 r0_7 = *gptr<u16>(r8);
        u32 quotient_3 = udiv(r0_7, r5);
        *gptr<u16>(r9) = u16(quotient_3);
        u32 r0_9 = *gptr<u16>(r8 + 2u);
        u32 quotient_4 = udiv(r0_9, r5);
        *gptr<u16>(r9 + 2u) = u16(quotient_4);
        u32 r0_11 = *gptr<u16>(r8 + 4u);
        r0_4 = udiv(r0_11, r5);
        r1_3 = guest::cpu()->r[1];
        *gptr<u16>(r9 + 4u) = u16(r0_4);
    }
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_006ffd84
GUEST_EXPORT_FRAMED(0x006ffd84, d_006ffd84::refresh_player_flags_952c16, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original
