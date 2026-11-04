// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00240080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the function at 0x7206e0 on structure list `index` (below 4, from 0xab7de4) when it exists.
namespace d_00240080 {

inline constexpr u32 structure_lists_address = 0x00ab7de4u;
inline constexpr guest::Function<0x007206e0, u32(u32, u32, u32)> CellMap__set;

u32 StructureLists__call_on_list(u32 structure_lists, u32 r1, u32 r2) {
    u32 r0_1 = structure_lists_address;
    if (r2 < 4u) {
        r0_1 += (r2 << 2);
    }
    u32 r0_2 = *gptr<u32>(r0_1);
    if (r0_2 == 0) {
        return r0_2;
    }
    return CellMap__set(r0_2, structure_lists, r1);
}

}  // namespace d_00240080
GUEST_EXPORT(0x00240080, d_00240080::StructureLists__call_on_list);

// f_002404b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the construction site (save +0x6e2a4) is set (or finished) and is in block (x, y) for the structure kind.
namespace d_002404b0 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x003026e8, u32(u32)> low_byte_of_id;
inline constexpr guest::Function<0x0070b334, u32(u32)> Range__is_valid;

u32 construction_site_is(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = 0u;
    u32 save_data = get_save_data(r0, r1);
    u32 r0_2 = *gptr<u8>(save_data + 0x6e2a6u);
    if (r0_2 != 1u) {
        u32 save_data_2 = get_save_data(r0_2, guest::cpu()->r[1]);
        r0_2 = Range__is_valid(save_data_2 + 0x6e2a4u);
        if (r0_2 == 0) {
            return r4_1;
        }
    }
    u32 save_data_3 = get_save_data(r0_2, guest::cpu()->r[1]);
    u32 r0_6 = *gptr<u8>(save_data_3 + 0x6e2b2u);
    if (r0_6 == r0) {
        u32 save_data_4 = get_save_data(r0_6, guest::cpu()->r[1]);
        u32 r0_8 = *gptr<u8>(save_data_4 + 0x6e2b3u);
        if (r0_8 == r1) {
            u32 save_data_5 = get_save_data(r0_8, guest::cpu()->r[1]);
            u32 low_byte = low_byte_of_id(save_data_5 + 0x6e2b0u);
            if (low_byte == r2) {
                r4_1 = 1u;
            }
        }
    }
    return r4_1;
}

}  // namespace d_002404b0
GUEST_EXPORT_FRAMED(0x002404b0, d_002404b0::construction_site_is, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0024088c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the structure matching the record in the main list (0xab7df4) and removes it.
namespace d_0024088c {

inline constexpr u32 structure_lists_b_address = 0x00ab7df4u;
inline guest::global<u32, 0x00ab7df4> structure_lists_b;
inline constexpr guest::Function<0x00241870, u32(u32, u32)> RealEstate__place_plots;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> handles_differ;
inline constexpr guest::Function<0x007c7740, u32(u32, u32, u32, u32)> List24__find_kind_or_default;

struct __attribute__((packed)) StructureListRemoveMatchingFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x54];  // (not read or written by name)
};
GUEST_OFFSET(StructureListRemoveMatchingFrame, word_8, 0x8);
GUEST_OFFSET(StructureListRemoveMatchingFrame, word_c, 0xc);
GUEST_SIZE(StructureListRemoveMatchingFrame, 0x64);

void StructureList__remove_matching(u32 structure_list, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<StructureListRemoveMatchingFrame> frame;  // the original's stack frame
    u32 list = *structure_lists_b;
    ListCursor__end(frame.at(0x30).addr(), list, r2, r3);
    ListCursor__begin(frame.at(0x18).addr(), list);
    List24__find_kind_or_default(frame.at(0).addr(), frame.at(0x18).addr(), frame.at(0x30).addr(), structure_list);
    ListCursor__end(frame.at(0x48).addr(), list, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (handles_differ(frame.at(0).addr(), frame.at(0x48).addr()) == 0) {
        return;
    }
    RealEstate__place_plots(frame->word_8, frame->word_c);
}

}  // namespace d_0024088c
GUEST_EXPORT_FRAMED(0x0024088c, d_0024088c::StructureList__remove_matching, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00240c80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places structures at random free spots.
namespace d_00240c80 {

inline constexpr u32 random_structure_params_address = 0x00957216u;
inline constexpr guest::Function<0x001dba70, u32(u32, u32, u32, u32)> StructurePlacement__mark_rects;
inline constexpr guest::Function<0x001dbc04, u32(u32, u32, u32, u32)> StructurePlacement__mark_rects_b;
inline constexpr guest::Function<0x001dc87c, u32(u32, u32, u32, u32)> StructurePlacement__find_rects;
inline constexpr guest::Function<0x001dcb90, u32(u32, u32, u32, u32)> StructurePlacement__find_rects_b;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> Xorshift128__next_0055cb58;

void place_random_structures(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = 0;
    if (r0 < 0u || r0 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r8 = 0x51eb851fu;
    u32 r6 = 8u;
    goto L_240d7c;
L_240d6c:;
    r4 += 1u;
L_240d70:;
    if (r4 < r5) {
        r6 = r4 + 8u & 0xffu;
        if (r4 > 2u) {
            u32 r0_1 = Xorshift128__next_0055cb58(r7, r1, r2, r3);
            u64 res_1 = u64(r8) * r0_1;
            u32 r3_1 = res_1;
            if (r0_1 + ((u32(res_1 >> 0x20) >> 5) * ~0x18u << 2) >= 0x28u) {
                u32 rects = StructurePlacement__find_rects(random_structure_params_address, r6, r7, r3_1);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (rects != 0) {
                    guest::preempt();
                    goto L_240d6c;
                }
            } else {
                u32 r0_3 = StructurePlacement__mark_rects_b(random_structure_params_address, r6, r7, r3_1);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_3 != 0) {
                    guest::preempt();
                    goto L_240d6c;
                }
                u32 rects_b = StructurePlacement__find_rects_b(random_structure_params_address, r6, r7, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (rects_b != 0) {
                    guest::preempt();
                    goto L_240d6c;
                }
            }
            StructurePlacement__mark_rects(random_structure_params_address, r6, r7, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        } else {
            if (r4 == 0) {
                goto L_240d7c;
            }
            if (r4 == 1u) {
                u32 rects_2 = StructurePlacement__find_rects(random_structure_params_address, r6, r7, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (rects_2 == 0) {
                    StructurePlacement__mark_rects(random_structure_params_address, r6, r7, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 = 2u;
                guest::preempt();
                goto L_240d70;
            }
            u32 r0_6 = StructurePlacement__mark_rects(random_structure_params_address, r6, r7, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_6 == 0) {
                guest::preempt();
                goto L_240d70;
            }
        }
        guest::preempt();
        goto L_240d6c;
    }
    return;
L_240d7c:;
    u32 rects_3 = StructurePlacement__find_rects(random_structure_params_address, r6, r7, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (rects_3 == 0) {
        StructurePlacement__mark_rects(random_structure_params_address, r6, r7, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r4 = 1u;
    guest::preempt();
    goto L_240d70;
}

}  // namespace d_00240c80
GUEST_EXPORT_FRAMED(0x00240c80, d_00240c80::place_random_structures, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00240de4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the placed structure of the kind in the structure list.
namespace d_00240de4 {

struct __attribute__((packed)) Local_00240de4_r0_5 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_00240de4_r0_5, byte_8, 0x8);

inline constexpr u32 structure_lists_b_address = 0x00ab7df4u;
inline guest::global<u32, 0x00ab7df4> structure_lists_b;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32)> ListCursor__next;
inline constexpr guest::Function<0x005ca4b4, u32(u32)> object_name_is_fobj;
inline constexpr guest::Function<0x006cba30, u32(u32, u32)> first_placed_structure_of_4_a;
inline constexpr guest::Function<0x006cbbe4, u32(u32)> first_placed_structure_of_4_b;
inline constexpr guest::Function<0x006cc934, u32(u32, u32)> byte_88bd38_is_f;

struct __attribute__((packed)) StructureListFindPlacedFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x27];  // (not read or written by name)
};
GUEST_OFFSET(StructureListFindPlacedFrame, byte_10, 0x10);
GUEST_SIZE(StructureListFindPlacedFrame, 0x38);

u32 StructureList__find_placed() {
    guest::StackFrameOf<StructureListFindPlacedFrame> frame;  // the original's stack frame
    u32 r0_13 = 0;
    u32 r0_22 = 0;
    u32 r5 = 0u;
    u32 list = *structure_lists_b;
    ListCursor__end(frame.at(0x18).addr(), list, guest::cpu()->r[2], guest::cpu()->r[3]);
    ListCursor__begin(frame.at(0).addr(), list);
    u32 r0_4 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
    u32 r1 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        do {
            gptr<Local_00240de4_r0_5> r0_5 = gptr<Local_00240de4_r0_5>(frame.at(8).addr());
            u32 r0_6 = r0_5->byte_8;
            if (byte_88bd38_is_f(r0_6, r1) == 0) {
                u32 r0_8 = r0_5->byte_8;
                if (object_name_is_fobj(r0_8) == 0) {
                    u32 r0_10 = r0_5->byte_8;
                    u32 zf_1 = r0_10 - 0x4eu == 0;
                    if (!zf_1) {
                        if (zf_1 || s32(r0_10) < 0x4e) {
                            if (r0_10 != 0x4cu && r0_10 != 0x4du) {
                                goto L_240e88;
                            }
                        } else if (r0_10 != 0x4fu && r0_10 != 0x5fu) {
                            goto L_240e88;
                        }
                    }
                }
                r5 += 1u;
            }
L_240e88:;
            ListCursor__next(frame.at(0).addr());
            r0_13 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
            r1 = guest::cpu()->r[1];
            guest::preempt();
        } while (r0_13 != 0);
    }
    u32 r4 = r5;
    r5 = 0u;
    ListCursor__end(frame.at(0x18).addr(), list, guest::cpu()->r[2], guest::cpu()->r[3]);
    ListCursor__begin(frame.at(0).addr(), list);
    u32 r0_17 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
    r1 = guest::cpu()->r[1];
    if (r0_17 != 0) {
        do {
            u32 r0_18 = frame->byte_10;
            if (byte_88bd38_is_f(r0_18, r1) != 0) {
                r5 += 1u;
            }
            ListCursor__next(frame.at(0).addr());
            r0_22 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
            r1 = guest::cpu()->r[1];
            guest::preempt();
        } while (r0_22 != 0);
    }
    u32 r0_23 = frame.at(0x18).addr();
    if (r5 > 1u) {
        r0_23 = r4 + r5;
        r4 = r0_23 - 1u;
    }
    u32 r0_24 = first_placed_structure_of_4_a(r0_23, r1);
    if (r0_24 != 0x50u) {
        r4 += 1u;
    }
    u32 r0_25 = first_placed_structure_of_4_b(r0_24);
    if (r0_25 != 0x54u) {
        r4 += 1u;
    }
    u32 save_data = get_save_data(r0_25, guest::cpu()->r[1]);
    u32 r0_27 = save_data + 0x62250u;
    u32 res_2 = r0_27 + 0x8b52u;
    u32 zf_2 = res_2 == 0;
    if (!zf_2) {
        zf_2 = *gptr<u8>(res_2) == 0;
    }
    if (!zf_2) {
        r4 += 1u;
    }
    u32 zf_3 = r0_27 + 0x8b54u == 0;
    u32 r1_8 = r0_27 + 0x8b54u;
    if (!zf_3) {
        r1_8 = *gptr<u8>(r1_8);
        zf_3 = r1_8 == 0;
    }
    if (!zf_3) {
        r4 += 1u;
    }
    u32 r0_28 = r0_27 + 0x8a6cu;
    if (r0_28 != 0) {
        r0_28 = *gptr<u8>(r0_28);
        if (r0_28 == 1u) {
            r4 += 1u;
        }
    }
    u32 save_data_2 = get_save_data(r0_28, r1_8);
    if (*gptr<u8>(save_data_2 + 0x6e2a6u) == 1u) {
        r4 -= 1u;
    }
    return r4;
}

}  // namespace d_00240de4
GUEST_EXPORT_FRAMED(0x00240de4, d_00240de4::StructureList__find_placed, 0x4070);  // pushes {r4, r5, list, lr} first, as the original

// f_002412fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the structures of list `index` (below 14) in block (x, y), not counting the field objects.
namespace d_002412fc {

struct __attribute__((packed)) Local_002412fc_r0_5 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Local_002412fc_r0_5, word_0, 0x0);
GUEST_OFFSET(Local_002412fc_r0_5, word_4, 0x4);
GUEST_OFFSET(Local_002412fc_r0_5, byte_8, 0x8);

inline constexpr u32 structure_lists_b_address = 0x00ab7df4u;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32)> ListCursor__next;
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32, u32, u32)> object_name_is_fobj;
inline constexpr guest::Function<0x006a6c78, u32(u32, u32, u32, u32)> blocks_of_position;

struct __attribute__((packed)) StructureListCountInBlockFrame {
    u8 unknown_0[0x18];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x28];  // (not read or written by name)
};
GUEST_OFFSET(StructureListCountInBlockFrame, word_18, 0x18);
GUEST_OFFSET(StructureListCountInBlockFrame, word_1c, 0x1c);
GUEST_SIZE(StructureListCountInBlockFrame, 0x48);

u32 StructureList__count_in_block(u32 structure_list, u32 r1, u32 r2) {
    guest::StackFrameOf<StructureListCountInBlockFrame> frame;  // the original's stack frame
    u32 r0_11 = 0;
    u32 r3_1 = structure_lists_b_address;
    u32 r5 = structure_list;
    u32 r7 = r1;
    if (r2 < 0xeu) {
        r3_1 += (r2 << 2);
    }
    u32 r6 = 0u;
    u32 list = *gptr<u32>(r3_1);
    ListCursor__end(frame.at(0x28).addr(), list, r2, r3_1);
    ListCursor__begin(frame.at(0).addr(), list);
    u32 r0_4 = handles_differ(frame.at(0).addr(), frame.at(0x28).addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        u32 r8 = 0u;
        do {
            gptr<Local_002412fc_r0_5> r0_5 = gptr<Local_002412fc_r0_5>(frame.at(8).addr());
            u32 r0_6 = r0_5->byte_8;
            if (object_name_is_fobj(r0_6, r1, r2, r3) == 0) {
                frame->word_18 = r8;
                frame->word_1c = r8;
                blocks_of_position(frame.at(0x18).addr(), frame.at(0x1c).addr(), r0_5->word_0, r0_5->word_4);
                if (r5 == frame->word_18 && r7 == frame->word_1c) {
                    r6 += 1u;
                }
            }
            ListCursor__next(frame.at(0).addr());
            r0_11 = handles_differ(frame.at(0).addr(), frame.at(0x28).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_11 != 0);
    }
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_002412fc
GUEST_EXPORT_FRAMED(0x002412fc, d_002412fc::StructureList__count_in_block, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002413e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The structure kind at the position (clamped to 0xfc).
namespace d_002413e0 {

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> GridLayer__query_cell;

struct __attribute__((packed)) StructureKindAtFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(StructureKindAtFrame, word_8, 0x8);
GUEST_SIZE(StructureKindAtFrame, 0x14);

u32 structure_kind_at(u32 r0, u32 r1) {
    guest::StackFrameOf<StructureKindAtFrame> frame;  // the original's stack frame
    GridLayer__query_cell(frame.at(0).addr(), r0, r1, 1u);
    u32 r0_2 = frame->word_8 & 0xffu;
    if (r0_2 >= 0xfcu) {
        r0_2 = 0xfcu;
    }
    return r0_2;
}

}  // namespace d_002413e0
GUEST_EXPORT_FRAMED(0x002413e0, d_002413e0::structure_kind_at, 0x4000);  // pushes {lr} first, as the original

// f_00241cf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the kind is one of the 8 at 0x887460.
namespace d_00241cf0 {


u32 kind_in_list_887460(u32 r0) {
    u32 r2 = 0x887460u;
    u32 r1 = 0u;
    do {
        if (*gptr<u8>(r2 + r1) == r0 || *gptr<u8>(r2 + r1 + 1u) == r0) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 8u);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00241cf0
GUEST_EXPORT(0x00241cf0, d_00241cf0::kind_in_list_887460);

// f_00242004: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 7 of the object at 0xab7e04.
namespace d_00242004 {

inline constexpr u32 structure_list_object_address = 0x00ab7e04u;
inline guest::global<u32, 0x00ab7e04> structure_list_object;

void call_virtual_7_of_ab7e04() {
    u32 r0_1 = *structure_list_object;
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);
    // virtual function 7 of r0_1
    guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00242004
GUEST_EXPORT(0x00242004, d_00242004::call_virtual_7_of_ab7e04);

// f_0024201c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the structure of the kind at the position: registers it, marks its cells and, when it is the construction
// site's, finishes the site.
namespace d_0024201c {

struct __attribute__((packed)) Local_0024201c_r0_1 {
    u32 map_structures;
    u32 word_4;
};
GUEST_OFFSET(Local_0024201c_r0_1, map_structures, 0x0);
GUEST_OFFSET(Local_0024201c_r0_1, word_4, 0x4);

inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x003026e8, u32(u32)> low_byte_of_id;
inline constexpr guest::Function<0x00527a2c, u32(u32, u32, u32, u32)> MapStructures__mark_block_cells_a;
inline constexpr guest::Function<0x00527c34, u32(u32, u32, u32, u32)> Map__generate_block;
inline constexpr guest::Function<0x005cda44, u32(u32, u32, u32, u32)> SlotList56__add;
inline constexpr guest::Function<0x006cc934, u32(u32)> byte_88bd38_is_f;
inline constexpr guest::Function<0x006f9330, u32(u32, u32)> refresh_tiles_at_cell;
inline constexpr guest::Function<0x0070b3a4, u32(u32)> field_equals_2_u8_0x4_70b3a4;

struct __attribute__((packed)) MapStructuresAddFrame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(MapStructuresAddFrame, word_0, 0x0);
GUEST_SIZE(MapStructuresAddFrame, 0x10);

u32 MapStructures__add(u32 map_structures, u32 r1, u32 r2) {
    guest::StackFrameOf<MapStructuresAddFrame> frame;  // the original's stack frame
    gptr<Local_0024201c_r0_1> r0_1 = gptr<Local_0024201c_r0_1>(frame.at(8).addr());
    r0_1->map_structures = map_structures;
    r0_1->word_4 = r1;
    Map__generate_block(r0_1.addr(), r2, 1u, 1u);
    u32 data_base = get_data_base(frame.at(8).addr());
    frame->word_0 = SlotList56__add(data_base + 0x4be00u, r2, map_structures, r1);
    MapStructures__mark_block_cells_a(1u, map_structures, r1, r2);
    u32 r0_6 = byte_88bd38_is_f(r2);
    if (r0_6 != 0) {
        u32 save_data = get_save_data(r0_6);
        r0_6 = *gptr<u8>(save_data + 0x6e2a6u);
        if (r0_6 != 0) {
            u32 save_data_2 = get_save_data(r0_6);
            r0_6 = field_equals_2_u8_0x4_70b3a4(save_data_2 + 0x6e2a4u);
            if (r0_6 == 0) {
                u32 save_data_3 = get_save_data(r0_6);
                r0_6 = low_byte_of_id(save_data_3 + 0x6e2b0u);
                if (r0_6 == r2) {
                    u32 save_data_4 = get_save_data(r0_6);
                    r0_6 = *gptr<u8>(save_data_4 + 0x6e2b2u);
                    if (r0_6 == map_structures) {
                        u32 save_data_5 = get_save_data(r0_6);
                        r0_6 = *gptr<u8>(save_data_5 + 0x6e2b3u);
                        if (r0_6 == r1) {
                            u32 save_data_6 = get_save_data(r0_6);
                            u32 r0_15 = *gptr<s8>(save_data_6 + 0x6e2a4u);
                            u32 save_data_7 = get_save_data(r0_15);
                            r0_6 = refresh_tiles_at_cell(map_structures + r0_15, u32(*gptr<s8>(save_data_7 + 0x6e2a5u)) + r1);
                        }
                    }
                }
            }
        }
    }
    return r0_6;
}

}  // namespace d_0024201c
GUEST_EXPORT_FRAMED(0x0024201c, d_0024201c::MapStructures__add, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00242744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the structures of each of the 0xfc kinds (into 0xab7e2c), not counting the one under construction.
namespace d_00242744 {

inline constexpr u32 structure_lists_b_address = 0x00ab7df4u;
inline constexpr u32 structure_kind_counts_address = 0x00ab7e2cu;
inline guest::global<u32, 0x00ab7df4> structure_lists_b;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x003026e8, u32(u32)> low_byte_of_id;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32, u32)> ListCursor__next;
inline constexpr guest::Function<0x0070b334, u32(u32)> Range__is_valid;

struct __attribute__((packed)) CountStructuresByKindFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x1f];  // (not read or written by name)
};
GUEST_OFFSET(CountStructuresByKindFrame, byte_10, 0x10);
GUEST_SIZE(CountStructuresByKindFrame, 0x30);

u32 count_structures_by_kind() {
    guest::StackFrameOf<CountStructuresByKindFrame> frame;  // the original's stack frame
    u32 r1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    clear_aligned(structure_kind_counts_address, 0xfdu, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 i = 0u;
    u32 r8 = structure_kind_counts_address;
    u32 list = *structure_lists_b;
    do {
        u32 r5 = i & 0xffu;
        u32 r4 = 0u;
        ListCursor__end(frame.at(0x18).addr(), list);
        ListCursor__begin(frame.at(0).addr(), list);
        u32 r0_4 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            do {
                if (r5 == frame->byte_10) {
                    r4 += 1u;
                }
                ListCursor__next(frame.at(0).addr(), r1);
                r0_7 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
                r1 = guest::cpu()->r[1];
                guest::preempt();
            } while (r0_7 != 0);
        }
        r0_8 = frame.at(0x18).addr();
        *gptr<u8>(r8 + i) = u8(r4);
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xfc);
    u32 save_data = get_save_data(r0_8, r1);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r0_10 = *gptr<u8>(save_data + 0x6e2a6u);
    if (r0_10 != 1u) {
        u32 save_data_2 = get_save_data(r0_10, r1_3);
        r0_10 = Range__is_valid(save_data_2 + 0x6e2a4u);
        r1_3 = guest::cpu()->r[1];
        if (r0_10 == 0) {
            return r0_10;
        }
    }
    u32 save_data_3 = get_save_data(r0_10, r1_3);
    r0_10 = low_byte_of_id(save_data_3 + 0x6e2b0u);
    r1_3 = guest::cpu()->r[1];
    if (r0_10 < 0xfcu) {
        r1_3 = *gptr<u8>(r8 + r0_10);
        if (r1_3 != 0) {
            r1_3 -= 1u;
            *gptr<u8>(r8 + r0_10) = u8(r1_3);
        }
    }
    guest::cpu()->r[1] = r1_3;
    return r0_10;
}

}  // namespace d_00242744
GUEST_EXPORT_FRAMED(0x00242744, d_00242744::count_structures_by_kind, 0x41f0);  // pushes {r4, r5, i, list, r8, lr} first, as the original

// f_00242cc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the cells of every structure in the list at 0xab7e00.
namespace d_00242cc4 {

struct __attribute__((packed)) Local_00242cc4_r0_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00242cc4_r0_5, word_0, 0x0);
GUEST_OFFSET(Local_00242cc4_r0_5, word_4, 0x4);

inline constexpr u32 structure_list_cells_address = 0x00ab7e00u;
inline guest::global<u32, 0x00ab7e00> structure_list_cells;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32)> ListCursor__next;
inline constexpr guest::Function<0x00527c34, u32(u32, u32, u32, u32)> Map__generate_block;

struct __attribute__((packed)) StructureListRefreshCellsFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x2b];  // (not read or written by name)
};
GUEST_OFFSET(StructureListRefreshCellsFrame, word_8, 0x8);
GUEST_OFFSET(StructureListRefreshCellsFrame, word_c, 0xc);
GUEST_OFFSET(StructureListRefreshCellsFrame, byte_10, 0x10);
GUEST_SIZE(StructureListRefreshCellsFrame, 0x3c);

void StructureList__refresh_cells(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<StructureListRefreshCellsFrame> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 list = *structure_list_cells;
    ListCursor__end(frame.at(0x18).addr(), list, r2, r3);
    ListCursor__begin(frame.at(0).addr(), list);
    if (handles_differ(frame.at(0).addr(), frame.at(0x18).addr()) == 0) {
        return;
    }
    do {
        u32 r4_2 = frame->byte_10;
        u32 r5_1 = frame->word_c;
        gptr<Local_00242cc4_r0_5> r0_5 = gptr<Local_00242cc4_r0_5>(frame.at(0x30).addr());
        r0_5->word_0 = frame->word_8;
        r0_5->word_4 = r5_1;
        Map__generate_block(r0_5.addr(), r4_2, 0x1eu, 0u);
        ListCursor__next(frame.at(0).addr());
        r0_8 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
        guest::preempt();
    } while (r0_8 != 0);
}

}  // namespace d_00242cc4
GUEST_EXPORT_FRAMED(0x00242cc4, d_00242cc4::StructureList__refresh_cells, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002443b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Damps the velocity (by 0.995), eases the position toward the target (by the blend +0x38), keeps the height, clamps
// the distance to 2900 and fills the listener record.
namespace d_002443b8 {

struct __attribute__((packed)) SoundListener {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    float float_10;
    float float_14;
    float float_18;
    u8 unknown_1c[0xc];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0xc];  // (not used here)
    float float_38;
    u8 unknown_3c[0x4];  // (not used here)
    u32 word_40;
    u8 byte_44;
};
GUEST_OFFSET(SoundListener, word_4, 0x4);
GUEST_OFFSET(SoundListener, word_8, 0x8);
GUEST_OFFSET(SoundListener, word_c, 0xc);
GUEST_OFFSET(SoundListener, float_10, 0x10);
GUEST_OFFSET(SoundListener, float_14, 0x14);
GUEST_OFFSET(SoundListener, float_18, 0x18);
GUEST_OFFSET(SoundListener, word_28, 0x28);
GUEST_OFFSET(SoundListener, float_38, 0x38);
GUEST_OFFSET(SoundListener, word_40, 0x40);
GUEST_OFFSET(SoundListener, byte_44, 0x44);

struct __attribute__((packed)) SoundListenerUpdatePositionArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u16 half_18;
    u16 half_1a;
    u32 word_1c;
};
GUEST_OFFSET(SoundListenerUpdatePositionArg1, word_0, 0x0);
GUEST_OFFSET(SoundListenerUpdatePositionArg1, word_4, 0x4);
GUEST_OFFSET(SoundListenerUpdatePositionArg1, word_8, 0x8);
GUEST_OFFSET(SoundListenerUpdatePositionArg1, word_c, 0xc);
GUEST_OFFSET(SoundListenerUpdatePositionArg1, word_10, 0x10);
GUEST_OFFSET(SoundListenerUpdatePositionArg1, word_14, 0x14);
GUEST_OFFSET(SoundListenerUpdatePositionArg1, half_18, 0x18);
GUEST_OFFSET(SoundListenerUpdatePositionArg1, half_1a, 0x1a);
GUEST_OFFSET(SoundListenerUpdatePositionArg1, word_1c, 0x1c);

struct __attribute__((packed)) Local_002443b8_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_002443b8_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_002443b8_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_002443b8_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_002443b8_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
    u16 half_12;
};
GUEST_OFFSET(Local_002443b8_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_002443b8_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_002443b8_r0_4, word_8, 0x8);
GUEST_OFFSET(Local_002443b8_r0_4, word_c, 0xc);
GUEST_OFFSET(Local_002443b8_r0_4, half_10, 0x10);
GUEST_OFFSET(Local_002443b8_r0_4, half_12, 0x12);

inline constexpr guest::Function<0x0014f378, u32(u32, u32, u32)> Vec3__add;
inline constexpr guest::Function<0x006e225c, u32(u32, u32, u32, u32)> entry_20;

u32 SoundListener__update_position(gptr<SoundListener> sound_listener, gptr<SoundListenerUpdatePositionArg1> arg1, u32 r2_unused, u32 r3) {
    float S0_1 = 0.995f;
    sound_listener->float_10 = sound_listener->float_10 * S0_1;
    sound_listener->float_14 = sound_listener->float_14 * S0_1;
    sound_listener->float_18 = sound_listener->float_18 * S0_1;
    float S1_1 = sound_listener->float_38;
    float S0_2 = 1.0f - S1_1;
    gptr<Local_002443b8_r0_1> r0_1 = gptr<Local_002443b8_r0_1>(sound_listener->word_40 + 0x14u);
    float S6_1 = r0_1->float_0 * S1_1;
    float S5_1 = std::bit_cast<float>(sound_listener->word_4) * S0_2;
    float S2_1 = std::bit_cast<float>(sound_listener->word_8) * S0_2;
    float S3_1 = r0_1->float_8 * S1_1;
    float S4_1 = r0_1->float_4 * S1_1;
    float S1_2 = S5_1 + S6_1;
    float S0_3 = std::bit_cast<float>(sound_listener->word_c) * S0_2 + S3_1;
    float S2_2 = S2_1 + S4_1;
    sound_listener->word_c = std::bit_cast<u32>(S0_3);
    sound_listener->word_4 = std::bit_cast<u32>(S1_2);
    sound_listener->word_8 = std::bit_cast<u32>(S2_2);
    u32 r0_2 = std::bit_cast<u32>(S0_3);
    u32 r1_1 = sound_listener->word_28;
    if (r0_2 != 0x45354000u && s32(r0_2) >= s32(0x45354000u)) {
        S0_3 = 2900.0f;
    }
    sound_listener->word_8 = r1_1;
    sound_listener->word_c = std::bit_cast<u32>(S0_3);
    u32 r0_3 = sound_listener->byte_44;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    gptr<Local_002443b8_r0_4> r0_4 = gptr<Local_002443b8_r0_4>(entry_20(r0_3, r1_1, 0x45354000u, r3));
    arg1->word_0 = sound_listener->word_4;
    arg1->word_4 = sound_listener->word_8;
    arg1->word_8 = sound_listener->word_c;
    Vec3__add(arg1.addr(), arg1.addr(), sound_listener.addr() + 0x10u);
    u32 r1_2 = r0_4->word_4;
    u32 r2_2 = r0_4->word_8;
    arg1->word_c = r0_4->word_0;
    arg1->word_10 = r1_2;
    arg1->word_14 = r2_2;
    arg1->half_18 = r0_4->half_10;
    u32 r1_3 = r0_4->half_12;
    arg1->half_1a = u16(r1_3);
    u32 r0_5 = r0_4->word_c;
    arg1->word_1c = r0_5;
    guest::cpu()->r[1] = r1_3;
    return r0_5;
}

}  // namespace d_002443b8
GUEST_EXPORT_FRAMED(0x002443b8, d_002443b8::SoundListener__update_position, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00244a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the gyroid sound manager on the stage heap once and registers the object with it.
namespace d_00244a00 {

struct __attribute__((packed)) SoundHaniwaMgr {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(SoundHaniwaMgr, byte_14, 0x14);
GUEST_OFFSET(SoundHaniwaMgr, word_18, 0x18);

inline constexpr u32 sound_haniwa_mgr_instance_address = 0x0094cff4u;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u32, 0x0094cff4> sound_haniwa_mgr_instance;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x001662e8, u32(u32)> Season__is_spring_or_autumn;
inline constexpr guest::Function<0x002763bc, u32(u32, u32, u32)> SoundSource__set_mode;
inline constexpr guest::Function<0x0027646c, u32(u32, u32, u32, u32)> SoundHaniwaMgr__create_instance;

void SoundHaniwaMgr__attach(gptr<SoundHaniwaMgr> sound_haniwa_mgr, u32 r1, u32 r2) {
    if (sound_haniwa_mgr->byte_14 != 0) {
        return;
    }
    u32 singleton_disposer = *stage_heap;
    if (singleton_disposer == 0) {
        return;
    }
    SoundHaniwaMgr__create_instance(singleton_disposer, r1, r2, guest::cpu()->r[3]);
    u32 sound_source = *sound_haniwa_mgr_instance;
    SoundSource__set_mode(sound_source, 1u, sound_haniwa_mgr.addr());
    sound_haniwa_mgr->word_18 = Season__is_spring_or_autumn(sound_source);
    sound_haniwa_mgr->byte_14 = 1;
}

}  // namespace d_00244a00
GUEST_EXPORT_FRAMED(0x00244a00, d_00244a00::SoundHaniwaMgr__attach, 0x4010);  // pushes {r4, lr} first, as the original

// f_00244b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the singleton on a heap (arg 0), with its disposer, unless it exists.
namespace d_00244b48 {

inline constexpr u32 vtable_SoundDJPlayer__SingletonDisposer_ = 0x008fa35cu;
inline guest::global<u32, 0x0094cd08> sound_dj_player_instance;
inline guest::global<u32, 0x0094cd0c> global_0094cd0c;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> IDisposer__construct_in_heap;
inline constexpr guest::Function<0x00246774, u32(u32, u32)> SoundDJPlayer__SoundDJPlayer;

void SoundDJPlayer__create_instance(u32 singleton_disposer, u32 r1) {
    u32 r0_3 = 0;
    if (*sound_dj_player_instance == 0) {
        u32 block_2 = allocate_on_heap_entry(0xccu, singleton_disposer, 4u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        u32 i_disposer = block_2 + 4u;
        if (i_disposer != 0) {
            i_disposer = IDisposer__construct_in_heap(i_disposer, singleton_disposer, 3u);
            r1 = vtable_SoundDJPlayer__SingletonDisposer_;
            *gptr<u32>(i_disposer) = r1;
        }
        *global_0094cd0c = i_disposer;
        if (block_2 == 0) {
            r0_3 = 0u;
        } else {
            r0_3 = SoundDJPlayer__SoundDJPlayer(block_2, r1);
            r1 = guest::cpu()->r[1];
        }
        *sound_dj_player_instance = r0_3;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00244b48
GUEST_EXPORT_FRAMED(0x00244b48, d_00244b48::SoundDJPlayer__create_instance, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00244bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts (or stops) the sound object's sound in the sound system and updates the object.
namespace d_00244bb4 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x002e7d20, u32(u32, u32, u32, u32)> SoundHandle__update_volume;
inline constexpr guest::Function<0x006b4170, u32(u32, u32, u32, u32)> SoundSystem__start_object_sound;
inline constexpr guest::Function<0x006b41a4, u32(u32, u32, u32, u32)> SoundSystem__start_object_sound_with;

void SoundSystem__set_object_sound(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *sound_system;
    if (r3 != 0) {
        u32 r1_1 = r1;
        if (r1_1 != 0) {
            r1_1 = r1 + 4u;
        }
        SoundSystem__start_object_sound_with(r0_1, r1_1, guest::cpu()->r[2], r3);
        frame.release();
        SoundHandle__update_volume(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    SoundSystem__start_object_sound(r0_1, r1 == 0 ? 0u : r1 + 4u, guest::cpu()->r[2], r3);
    frame.release();
    SoundHandle__update_volume(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00244bb4
GUEST_EXPORT(0x00244bb4, d_00244bb4::SoundSystem__set_object_sound);

// f_002454f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the song's playback info from its table entry and tune values (under the info's lock).
namespace d_002454f8 {

struct __attribute__((packed)) SoundKkInfo {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
    u8 unknown_1d[0x5f];  // (not used here)
    u32 word_7c;
};
GUEST_OFFSET(SoundKkInfo, byte_1c, 0x1c);
GUEST_OFFSET(SoundKkInfo, word_7c, 0x7c);

inline constexpr u32 sound_kk_info_instance_address = 0x0094d004u;
inline constexpr u32 kk_song_info_address = 0x00982848u;
inline guest::global<u32, 0x0094d004> sound_kk_info_instance;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00135740, u32(u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x0032be18, u32(u32, u32, u32, u32)> tune_table_value;
inline constexpr guest::Function<0x004c765c, u32(u32, u32, u32, u32)> SoundArchive__load_group;
inline constexpr guest::Function<0x0070ebdc, u32(u32, u32)> Clothing__slot_of_kind;
inline constexpr guest::Function<0x0070eca8, u32(u32, u32, u32, u32)> table_83a980_byte_5;

struct __attribute__((packed)) SoundKKInfoBuildSongFrame {
    u8 unknown_0[0x20];  // (not read or written by name)
    u32 word_20;
    u8 unknown_24[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SoundKKInfoBuildSongFrame, word_20, 0x20);
GUEST_SIZE(SoundKKInfoBuildSongFrame, 0x28);

void SoundKKInfo__build_song(gptr<SoundKkInfo> sound_kk_info, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<SoundKKInfoBuildSongFrame> frame;  // the original's stack frame
    u32 r0 = sound_kk_info.addr();
    u32 r12 = guest::cpu()->r[12];
    frame->word_20 = r12;
    u32 r5 = r0;
    u32 r6_1 = *sound_kk_info_instance;
    u32 r0_1 = table_83a980_byte_5(r6_1, u32(sound_kk_info->byte_1c) & 0x7fu, r2, r3);
    u32 slot = Clothing__slot_of_kind(r6_1, r0_1);
    u32 r7 = slot;
    if (r0_1 >= 0xcu) {
        r7 = sxth(slot + 3u);
    }
    if (r7 != 6u && s32(r7) >= 6) {
        r7 = sxth(r7 - 0xcu);
    }
    u32 r6 = *sound_system + 0x738u;
    if (r6 != 0) {
        u32 r9 = kk_song_info_address;
        lock_member_lock(kk_song_info_address);
        u32 r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (sound_kk_info->word_7c != 0) {
            u32 r10 = 0x2710u;
            u32 i = 0u;
            u32 r11 = i - r10;
            u32 r8 = r7 - r10;
            do {
                u32 r1_4 = *gptr<u8>(r6 + i);
                if (r1_4 != 0xdu) {
                    if (r1_4 == 0xeu || r1_4 == 0xfu || r1_4 == r10) {
                        r3 = r10;
                        goto L_2455c0;
                    }
                    if (r1_4 != r11) {
                        r3 = sxth(tune_table_value(0u, r1_4, r2, r3) + r7);
                        goto L_2455c0;
                    }
                }
                r3 = sxth(r8);
L_2455c0:;
                u32 r0_4 = *gptr<u32>(r5 + 0x7cu);
                r2 = i;
                r1_3 = 0xfu;
                if (r0_4 != 0) {
                    SoundArchive__load_group(r0_4, r1_3, r2, r3);
                    r1_3 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < 0x10);
        }
        frame.release();
        unlock_member_lock(r9, r1_3);
        return;
    }
}

}  // namespace d_002454f8
GUEST_EXPORT(0x002454f8, d_002454f8::SoundKKInfo__build_song);

// f_002458e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the player's counters and sets its beat length (900 / tempo, rounded up).
namespace d_002458e4 {


void SoundDJPlayer__reset_timing(gptr<SoundDJPlayer> sound_dj_player) {
    sound_dj_player->word_b0 = 0;
    sound_dj_player->word_8c = 0;
    sound_dj_player->word_b4 = 0;
    sound_dj_player->half_b8 = 0;
    float S0_1 = 900.0f / float(*gptr<s16>((sound_dj_player->word_18 << 1) + 0x8391dau));
    float S2_1 = 0.0f;
    u32 r1_1 = vcvt_sz_f(S0_1);
    float S1_1 = float(s32(r1_1));
    if (S1_1 == S0_1) {
        sound_dj_player->word_bc = r1_1;
        sound_dj_player->float_94 = S2_1;
        sound_dj_player->float_98 = S2_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    if (S2_1 <= S0_1) {
        r1_1 += 1u;
    }
    sound_dj_player->word_bc = r1_1;
    sound_dj_player->float_94 = S2_1;
    sound_dj_player->float_98 = S2_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_002458e4
GUEST_EXPORT(0x002458e4, d_002458e4::SoundDJPlayer__reset_timing);

// f_00246774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the DJ sound player: nothing playing.
namespace d_00246774 {

struct __attribute__((packed)) Local_00246774_r0_3 {
    u8 unknown_0[0x70];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0x3];  // (not used here)
    u32 sound_handle_bind_seq_vtable;
    u32 word_78;
    u32 word_7c;
    u8 byte_80;
    u8 byte_81;
    u8 byte_82;
    u8 byte_83;
    u16 half_84;
    u8 unknown_86[0x2];  // (not used here)
    u32 word_88;
    u32 word_8c;
    u8 byte_90;
    u8 byte_91;
    u8 unknown_92[0x2];  // (not used here)
    float float_94;
    float float_98;
    float float_9c;
    float float_a0;
    u32 word_a4;
    u32 word_a8;
    u16 half_ac;
    u8 unknown_ae[0x2];  // (not used here)
    u32 word_b0;
    u32 word_b4;
    u16 half_b8;
    u8 unknown_ba[0x2];  // (not used here)
    u32 word_bc;
    u8 byte_c0;
    u8 unknown_c1[0x1];  // (not used here)
    u16 half_c2;
    u8 byte_c4;
    u8 byte_c5;
    u8 unknown_c6[0x2];  // (not used here)
    u32 word_c8;
};
GUEST_OFFSET(Local_00246774_r0_3, byte_70, 0x70);
GUEST_OFFSET(Local_00246774_r0_3, sound_handle_bind_seq_vtable, 0x74);
GUEST_OFFSET(Local_00246774_r0_3, word_78, 0x78);
GUEST_OFFSET(Local_00246774_r0_3, word_7c, 0x7c);
GUEST_OFFSET(Local_00246774_r0_3, byte_80, 0x80);
GUEST_OFFSET(Local_00246774_r0_3, byte_81, 0x81);
GUEST_OFFSET(Local_00246774_r0_3, byte_82, 0x82);
GUEST_OFFSET(Local_00246774_r0_3, byte_83, 0x83);
GUEST_OFFSET(Local_00246774_r0_3, half_84, 0x84);
GUEST_OFFSET(Local_00246774_r0_3, word_88, 0x88);
GUEST_OFFSET(Local_00246774_r0_3, word_8c, 0x8c);
GUEST_OFFSET(Local_00246774_r0_3, byte_90, 0x90);
GUEST_OFFSET(Local_00246774_r0_3, byte_91, 0x91);
GUEST_OFFSET(Local_00246774_r0_3, float_94, 0x94);
GUEST_OFFSET(Local_00246774_r0_3, float_98, 0x98);
GUEST_OFFSET(Local_00246774_r0_3, float_9c, 0x9c);
GUEST_OFFSET(Local_00246774_r0_3, float_a0, 0xa0);
GUEST_OFFSET(Local_00246774_r0_3, word_a4, 0xa4);
GUEST_OFFSET(Local_00246774_r0_3, word_a8, 0xa8);
GUEST_OFFSET(Local_00246774_r0_3, half_ac, 0xac);
GUEST_OFFSET(Local_00246774_r0_3, word_b0, 0xb0);
GUEST_OFFSET(Local_00246774_r0_3, word_b4, 0xb4);
GUEST_OFFSET(Local_00246774_r0_3, half_b8, 0xb8);
GUEST_OFFSET(Local_00246774_r0_3, word_bc, 0xbc);
GUEST_OFFSET(Local_00246774_r0_3, byte_c0, 0xc0);
GUEST_OFFSET(Local_00246774_r0_3, half_c2, 0xc2);
GUEST_OFFSET(Local_00246774_r0_3, byte_c4, 0xc4);
GUEST_OFFSET(Local_00246774_r0_3, byte_c5, 0xc5);
GUEST_OFFSET(Local_00246774_r0_3, word_c8, 0xc8);

inline constexpr u32 vtable_SoundDJPlayer = 0x008ee76cu;
inline constexpr u32 vtable_SoundHandleBindSeq = 0x008f3a54u;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundDJPlayer__SoundDJPlayer(gptr<SoundDJPlayer> sound_dj_player, float S0) {
    sound_dj_player->vtable = vtable_SoundDJPlayer;
    sound_dj_player->byte_14 = 0;
    sound_dj_player->byte_15 = 0;
    sound_dj_player->word_18 = 0;
    sound_dj_player->byte_1c = 0xff;
    sound_dj_player->byte_1d = 0xff;
    u32 ea_1 = sound_dj_player.addr() + 0x20u;
    sound_dj_player->word_20 = 0;
    sound_dj_player->word_24 = 0;
    sound_dj_player->word_28 = 0;
    sound_dj_player->word_2c = 0;
    if (ea_1 + 0x10u != 0) {
        sound_dj_player->word_20 = ea_1 + 0x10u;
        sound_dj_player->word_24 = 0x1e;
    }
    sound_dj_player->word_50 = 0;
    sound_dj_player->byte_54 = 0;
    sound_dj_player->byte_55 = 1;
    u32 r0_2 = for_each_element(ea_1 + 0x38u, 0x2e7db0u, 0xcu, 2u);
    gptr<Local_00246774_r0_3> r0_3 = gptr<Local_00246774_r0_3>(r0_2 - 0x58u);
    float S0_1 = 0.0f;
    r0_3->byte_70 = 0;
    r0_3->sound_handle_bind_seq_vtable = vtable_SoundHandleBindSeq;
    r0_3->word_78 = 0;
    r0_3->word_7c = 0;
    r0_3->byte_80 = 0;
    r0_3->byte_81 = 0;
    r0_3->byte_82 = 0;
    r0_3->byte_83 = 0;
    r0_3->half_84 = 0;
    r0_3->word_88 = 0;
    r0_3->word_8c = 0;
    r0_3->byte_90 = 0;
    r0_3->byte_91 = 0;
    r0_3->float_94 = S0_1;
    r0_3->float_98 = S0_1;
    r0_3->float_9c = S0_1;
    r0_3->float_a0 = S0_1;
    r0_3->word_a4 = 0;
    r0_3->word_a8 = 0;
    r0_3->half_ac = u16(~0u);
    r0_3->word_b0 = 0;
    r0_3->word_b4 = 0;
    r0_3->half_b8 = 0;
    r0_3->word_bc = 0;
    r0_3->byte_c0 = 0;
    r0_3->half_c2 = 0;
    r0_3->byte_c4 = 0;
    r0_3->byte_c5 = 0;
    r0_3->word_c8 = 2;
    guest::cpu()->r[1] = 2u;
    guest::cpu()->s[0] = S0_1;
    return r0_3.addr();
}

}  // namespace d_00246774
GUEST_EXPORT_FRAMED(0x00246774, d_00246774::SoundDJPlayer__SoundDJPlayer, 0x4010);  // pushes {r4, lr} first, as the original

// f_00246934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a river's sound object (kind 7): registers it with the river sound manager.
namespace d_00246934 {

inline constexpr u32 sound_river_mgr_instance_address = 0x0094d540u;
inline guest::global<u32, 0x0094d540> sound_river_mgr_instance;
inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> SoundObjBase__virtual_2;
inline constexpr guest::Function<0x00246df4, u32(u32, u32, u32, u32)> SlotTable60__add;

u32 SoundObjRiver__start(gptr<SoundObjRiver> sound_obj_river, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 started = sound_obj_river->started;
    if (started == 0) {
        started = *sound_river_mgr_instance;
        if (started != 0) {
            u32 sound_handle = SlotTable60__add(started, sound_obj_river.addr(), r2, r3);
            sound_obj_river->sound_handle = sound_handle;
            sound_obj_river->byte_48 = 0;
            sound_obj_river->kind = 7;
            sound_obj_river->byte_35 = 1;
            sound_obj_river->byte_37 = 0;
            sound_obj_river->byte_39 = 0;
            frame.release();
            return SoundObjBase__virtual_2(sound_obj_river.addr(), r1, r2, 7u);
        }
    }
    guest::cpu()->r[1] = r1;
    return started;
}

}  // namespace d_00246934
GUEST_EXPORT(0x00246934, d_00246934::SoundObjRiver__start);

// f_00246b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops a river's sound object: the river sound manager forgets it, then the base stops.
namespace d_00246b90 {

inline constexpr u32 sound_river_mgr_instance_address = 0x0094d540u;
inline guest::global<u32, 0x0094d540> sound_river_mgr_instance;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> SoundObjBase__stop;
inline constexpr guest::Function<0x00246f34, u32(u32, u32)> SlotTable60__remove;

u32 SoundObjRiver__stop(gptr<SoundObjRiver> sound_obj_river, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 started = sound_obj_river->started;
    if (started == 0) {
        return started;
    }
    u32 sound_handle = sound_obj_river->sound_handle;
    if (sound_handle + 1u == 0) {
        frame.release();
        return SoundObjBase__stop(sound_obj_river.addr(), sound_handle);
    }
    u32 slot_table = *sound_river_mgr_instance;
    if (slot_table != 0) {
        SlotTable60__remove(slot_table, sound_handle);
        sound_handle = guest::cpu()->r[1];
    }
    frame.release();
    return SoundObjBase__stop(sound_obj_river.addr(), sound_handle);
}

}  // namespace d_00246b90
GUEST_EXPORT(0x00246b90, d_00246b90::SoundObjRiver__stop);

// f_00246bd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a river's sound object: a sound object base with no handle, distances 2000.
namespace d_00246bd4 {

inline constexpr u32 vtable_SoundObjRiver = 0x008ee798u;
inline constexpr guest::Function<0x0020af18, u32(u32)> SoundObjBase__SoundObjBase;

u32 SoundObjRiver__SoundObjRiver(gptr<SoundObjRiver> sound_obj_river) {
    SoundObjBase__SoundObjBase(sound_obj_river.addr());
    sound_obj_river->sound_handle = ~0u;
    sound_obj_river->vtable = vtable_SoundObjRiver;
    float S0_1 = 2000.0f;
    sound_obj_river->byte_48 = 0;
    sound_obj_river->byte_49 = 0;
    sound_obj_river->float_4c = S0_1;
    sound_obj_river->float_50 = S0_1;
    sound_obj_river->float_54 = S0_1;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return sound_obj_river.addr();
}

}  // namespace d_00246bd4
GUEST_EXPORT_FRAMED(0x00246bd4, d_00246bd4::SoundObjRiver__SoundObjRiver, 0x4010);  // pushes {r4, lr} first, as the original

// f_00246c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a river's sound object: the river sound manager forgets it, and the base stops.
namespace d_00246c68 {

inline constexpr u32 vtable_SoundObjRiver = 0x008ee798u;
inline constexpr u32 sound_river_mgr_instance_address = 0x0094d540u;
inline guest::global<u32, 0x0094d540> sound_river_mgr_instance;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> SoundObjBase__stop;
inline constexpr guest::Function<0x00246f34, u32(u32, u32)> SlotTable60__remove;

u32 SoundObjRiver__destructor(gptr<SoundObjRiver> sound_obj_river, u32 r1) {
    sound_obj_river->vtable = vtable_SoundObjRiver;
    if (sound_obj_river->started == 0) {
        return sound_obj_river.addr();
    }
    u32 sound_handle = sound_obj_river->sound_handle;
    if (sound_handle + 1u != 0) {
        u32 slot_table = *sound_river_mgr_instance;
        if (slot_table != 0) {
            SlotTable60__remove(slot_table, sound_handle);
            sound_handle = guest::cpu()->r[1];
        }
    }
    SoundObjBase__stop(sound_obj_river.addr(), sound_handle);
    return sound_obj_river.addr();
}

}  // namespace d_00246c68
GUEST_EXPORT_FRAMED(0x00246c68, d_00246c68::SoundObjRiver__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00246cb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the singleton on a heap (arg 0), with its disposer, unless it exists.
namespace d_00246cb8 {

inline constexpr u32 vtable_SoundRiverMgr__SingletonDisposer_ = 0x008fa36cu;
inline constexpr u32 sound_river_mgr_instance_address = 0x0094d540u;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> IDisposer__construct_in_heap;

void SoundRiverMgr__create_instance(u32 singleton_disposer, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r6 = sound_river_mgr_instance_address;
    if (*gptr<u32>(r6) == 0) {
        u32 block_2 = allocate_on_heap_entry(0x108u, singleton_disposer, 4u, r3);
        u32 r4 = block_2;
        if (block_2 == 0) {
            *gptr<u32>(r6 + 4u) = r4;
            r4 = 0u;
        } else {
            IDisposer__construct_in_heap(block_2, singleton_disposer, 3u);
            *gptr<u32>(block_2) = vtable_SoundRiverMgr__SingletonDisposer_;
            *gptr<u32>(r6 + 4u) = block_2;
            singleton_disposer = 0u;
            *gptr<u32>(r4 + 0x10u) = singleton_disposer;
            u32 r2 = singleton_disposer;
            u32 r1 = singleton_disposer;
            *gptr<u32>(r4 + 0x104u) = singleton_disposer;
            do {
                u32 r2_1 = r2 + 1u;
                r1 += 2u;
                *gptr<u32>((r4 + (r2 << 2)) + 0x14u) = singleton_disposer;
                r2 = r2_1 + 1u;
                *gptr<u32>((r4 + (r2_1 << 2)) + 0x14u) = singleton_disposer;
                guest::preempt();
            } while (r1 < 0x3cu);
        }
        *gptr<u32>(r6) = r4;
    }
}

}  // namespace d_00246cb8
GUEST_EXPORT_FRAMED(0x00246cb8, d_00246cb8::SoundRiverMgr__create_instance, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00246df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the object in the first free of the 60 slots (+0x14) and counts it; 0x3d when full or null.
namespace d_00246df4 {

struct __attribute__((packed)) SlotTable60 {
    u8 unknown_0[0x104];  // (not used here)
    u32 word_104;
};
GUEST_OFFSET(SlotTable60, word_104, 0x104);


u32 SlotTable60__add(gptr<SlotTable60> slot_table, u32 sound_obj_river) {
    u32 i = slot_table.addr();
    u32 r2 = i;
    if (slot_table->word_104 >= 0x3cu) {
        return 0x3du;
    }
    if (sound_obj_river == 0) {
        return 0x3du;
    } else {
        i = 0u;
    }
    do {
        if (*gptr<u32>(r2 + (i << 2) + 0x14u) == 0) {
            *gptr<u32>(r2 + (i << 2) + 0x14u) = sound_obj_river;
            *gptr<u32>(r2 + 0x104u) = *gptr<u32>(r2 + 0x104u) + 1u;
            return i;
        }
        i += 1u;
        guest::preempt();
    } while (i < 0x3cu);
    return 0x3du;
}

}  // namespace d_00246df4
GUEST_EXPORT(0x00246df4, d_00246df4::SlotTable60__add);

// f_00246f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees slot `index` (below 60) and uncounts it.
namespace d_00246f34 {

struct __attribute__((packed)) SlotTable60 {
    u8 unknown_0[0x104];  // (not used here)
    u32 word_104;
};
GUEST_OFFSET(SlotTable60, word_104, 0x104);

struct __attribute__((packed)) Local_00246f34_r1_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_00246f34_r1_1, word_14, 0x14);


void SlotTable60__remove(gptr<SlotTable60> slot_table, u32 sound_handle) {
    if (sound_handle >= 0x3cu) {
        guest::cpu()->r[1] = sound_handle;
        return;
    }
    gptr<Local_00246f34_r1_1> r1_1 = gptr<Local_00246f34_r1_1>(slot_table.addr() + (sound_handle << 2));
    if (r1_1->word_14 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    r1_1->word_14 = 0;
    u32 r1_2 = slot_table->word_104 - 1u;
    slot_table->word_104 = r1_2;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_00246f34
GUEST_EXPORT(0x00246f34, d_00246f34::SlotTable60__remove);

// f_00246f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the furniture sound object (with the shared parameters) unless it already runs.
namespace d_00246f64 {

struct __attribute__((packed)) SoundObjFurnitureHolder {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
};
GUEST_OFFSET(SoundObjFurnitureHolder, byte_38, 0x38);

struct __attribute__((packed)) Local_00246f64_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00246f64_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00246f64_ea_1, word_4, 0x4);

inline constexpr u32 furniture_holder_sound_address = 0x009841c8u;
inline constexpr guest::Function<0x002d1f40, u32(u32, u32, u32, u32)> SoundObjFurniture__start;

struct __attribute__((packed)) SoundObjFurnitureHolderStartFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SoundObjFurnitureHolderStartFrame, word_0, 0x0);
GUEST_SIZE(SoundObjFurnitureHolderStartFrame, 0x8);

void SoundObjFurnitureHolder__start(gptr<SoundObjFurnitureHolder> sound_obj_furniture_holder, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SoundObjFurnitureHolderStartFrame> frame;  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    if (sound_obj_furniture_holder->byte_38 != 0) {
        return;
    }
    gptr<Local_00246f64_ea_1> ea_1 = gptr<Local_00246f64_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r14;
    frame->word_0 = 0;
    SoundObjFurniture__start(sound_obj_furniture_holder.addr() + 4u, furniture_holder_sound_address, furniture_holder_sound_address, 0u);
    u32 ea_2 = frame.at(0).addr();
}

}  // namespace d_00246f64
GUEST_EXPORT(0x00246f64, d_00246f64::SoundObjFurnitureHolder__start);

// f_00247240: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// While running, skips a pending frame (+0x94) or updates the furniture sound with its id.
namespace d_00247240 {

struct __attribute__((packed)) SoundObjFurnitureHolder {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
    u8 unknown_39[0x3f];  // (not used here)
    u32 word_78;
    u8 unknown_7c[0x18];  // (not used here)
    u8 byte_94;
};
GUEST_OFFSET(SoundObjFurnitureHolder, byte_38, 0x38);
GUEST_OFFSET(SoundObjFurnitureHolder, word_78, 0x78);
GUEST_OFFSET(SoundObjFurnitureHolder, byte_94, 0x94);

inline constexpr u32 sound_furniture_mgr_instance_address = 0x0094cfecu;
inline guest::global<u32, 0x0094cfec> sound_furniture_mgr_instance;
inline constexpr guest::Function<0x002d1858, u32(u32, u32, u32, u32)> SoundFurnitureMgr__stop_slot;

void SoundObjFurnitureHolder__update(gptr<SoundObjFurnitureHolder> sound_obj_furniture_holder) {
    if (sound_obj_furniture_holder->byte_38 == 0) {
        return;
    }
    if (sound_obj_furniture_holder->byte_94 != 0) {
        sound_obj_furniture_holder->byte_94 = 0;
        return;
    }
    SoundFurnitureMgr__stop_slot(*sound_furniture_mgr_instance, sound_obj_furniture_holder->word_78, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00247240
GUEST_EXPORT(0x00247240, d_00247240::SoundObjFurnitureHolder__update);

// f_0024727c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the furniture sound object while running.
namespace d_0024727c {

struct __attribute__((packed)) SoundObjFurnitureHolder {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
};
GUEST_OFFSET(SoundObjFurnitureHolder, byte_38, 0x38);

inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> SoundObjFurniture__stop;

void SoundObjFurnitureHolder__stop(gptr<SoundObjFurnitureHolder> sound_obj_furniture_holder) {
    u32 r1_1 = sound_obj_furniture_holder->byte_38;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    SoundObjFurniture__stop(sound_obj_furniture_holder.addr() + 4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0024727c
GUEST_EXPORT(0x0024727c, d_0024727c::SoundObjFurnitureHolder__stop);

// f_00247294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the holder and its sound object.
namespace d_00247294 {

struct __attribute__((packed)) SoundObjFurnitureHolder {
    u32 word_0;
};
GUEST_OFFSET(SoundObjFurnitureHolder, word_0, 0x0);

inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> SoundObjFurniture__construct;

u32 SoundObjFurnitureHolder__construct(gptr<SoundObjFurnitureHolder> sound_obj_furniture_holder) {
    sound_obj_furniture_holder->word_0 = 0;
    u32 r0_3 = SoundObjFurniture__construct(sound_obj_furniture_holder.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) - 4u;
    *gptr<u8>(r0_3 + 0x94u) = 0;
    return r0_3;
}

}  // namespace d_00247294
GUEST_EXPORT_FRAMED(0x00247294, d_00247294::SoundObjFurnitureHolder__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_002472b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops and destroys the sound object and detaches the holder.
namespace d_002472b0 {

struct __attribute__((packed)) SoundObjFurnitureHolder {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
};
GUEST_OFFSET(SoundObjFurnitureHolder, byte_38, 0x38);

inline constexpr guest::Function<0x00136cc8, u32(u32)> detach_from_parent;
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> SoundObjFurniture__stop;
inline constexpr guest::Function<0x002d2b90, u32(u32, u32, u32, u32)> SoundObjFurniture__destructor;

u32 SoundObjFurnitureHolder__destroy(gptr<SoundObjFurnitureHolder> sound_obj_furniture_holder) {
    if (sound_obj_furniture_holder->byte_38 != 0) {
        SoundObjFurniture__stop(sound_obj_furniture_holder.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    u32 r0_3 = SoundObjFurniture__destructor(sound_obj_furniture_holder.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    detach_from_parent(r0_3 - 4u);
    return r0_3 - 4u;
}

}  // namespace d_002472b0
GUEST_EXPORT_FRAMED(0x002472b0, d_002472b0::SoundObjFurnitureHolder__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_00248cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the rectangle of map kind `kind` from its table entry (position and size bytes).
namespace d_00248cd4 {

struct __attribute__((packed)) Local_00248cd4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248cd4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00248cd4_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00248cd4_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248cd4_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00248cd4_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00248cd4_r0_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_00248cd4_r0_1, byte_0, 0x0);
GUEST_OFFSET(Local_00248cd4_r0_1, byte_1, 0x1);

inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x005ca234, u32(u32)> entry_address_88b948;

void map_kind_rect(u32 r0, u32 r1) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    gptr<Local_00248cd4_r0_1> r0_1 = gptr<Local_00248cd4_r0_1>(entry_address_88b948(r1));
    u32 r2_1 = s8(r0_1->byte_1);
    gptr<Local_00248cd4_ea_1> ea_1 = gptr<Local_00248cd4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = u32(s8(r0_1->byte_0));
    ea_1->word_4 = r2_1;
    u32 r2_2 = *gptr<s8>(r0_1.addr() + 3u);
    u32 r1_1 = *gptr<s8>(r0_1.addr() + 2u);
    gptr<Local_00248cd4_ea_4> ea_4 = gptr<Local_00248cd4_ea_4>(frame.at(8).addr());
    ea_4->word_0 = r1_1;
    ea_4->word_4 = r2_2;
    construct_word_quad_from_pairs(r0, frame.at(0).addr(), frame.at(8).addr());
}

}  // namespace d_00248cd4
GUEST_EXPORT_FRAMED(0x00248cd4, d_00248cd4::map_kind_rect, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00248d34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The point in front of the structure's door (one or two cells below its reported point, by its kind); true.
namespace d_00248d34 {

inline constexpr guest::Function<0x0052ee54, u32(u32, u32, u32, u32)> get_reported_point;
inline constexpr guest::Function<0x006cac2c, u32(u32, u32)> value_is_in_table_e4ec;
inline constexpr guest::Function<0x006cac70, u32(u32, u32)> value_is_4c_or_4d;
inline constexpr guest::Function<0x006cacdc, u32(u32)> value_is_0_to_3;

struct __attribute__((packed)) StructureDoorPointFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(StructureDoorPointFrame, word_0, 0x0);
GUEST_OFFSET(StructureDoorPointFrame, word_4, 0x4);
GUEST_SIZE(StructureDoorPointFrame, 0x8);

u32 structure_door_point(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StructureDoorPointFrame> frame;  // the original's stack frame
    u32 r5 = r0;
    u32 r6 = r1;
    get_reported_point(frame.at(0).addr(), r2, r2, r3);
    u32 r0_2 = value_is_0_to_3(r3);
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0 = frame->word_4 - 2u;
        frame->word_4 = r0;
        *gptr<u32>(r5) = frame->word_0;
        *gptr<u32>(r6) = frame->word_4;
        return 1u;
    }
    u32 r0_3 = value_is_in_table_e4ec(r3, r1);
    r1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r0 = frame->word_4 - 2u;
        frame->word_4 = r0;
        *gptr<u32>(r5) = frame->word_0;
        *gptr<u32>(r6) = frame->word_4;
        return 1u;
    }
    u32 r0_4 = value_is_4c_or_4d(r3, r1);
    r1 = guest::cpu()->r[1];
    if (r0_4 != 0 || r3 == 0x4eu) {
        r0 = frame->word_4 - 2u;
        frame->word_4 = r0;
        *gptr<u32>(r5) = frame->word_0;
        *gptr<u32>(r6) = frame->word_4;
        return 1u;
    }
    if (r3 == 0xc6u) {
        r0 = frame->word_4 - 2u;
    } else {
        r0 = frame->word_4 - 1u;
    }
    frame->word_4 = r0;
    *gptr<u32>(r5) = frame->word_0;
    *gptr<u32>(r6) = frame->word_4;
    return 1u;
}

}  // namespace d_00248d34
GUEST_EXPORT_FRAMED(0x00248d34, d_00248d34::structure_door_point, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00248dd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the cells under the structure's rectangle against the map (first rule set).
namespace d_00248dd0 {

struct __attribute__((packed)) StructurePlacement {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(StructurePlacement, byte_10, 0x10);

struct __attribute__((packed)) Local_00248dd0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248dd0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00248dd0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00248dd0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248dd0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00248dd0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_00248dd0_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248dd0_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00248dd0_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_00248dd0_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248dd0_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00248dd0_r4_1, word_4, 0x4);

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> GridLayer__query_cell;
inline constexpr guest::Function<0x00240010, u32(u32, u32, u32, u32)> structure_lists_word;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> byte_88bd38_is_f;
inline constexpr guest::Function<0x007206b8, u32(u32, u32, u32, u32)> CellMap__is_set;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) StructurePlacementCheckCellsAFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x30];  // (not read or written by name)
    u32 word_40;
    u8 unknown_44[0x10];  // (not read or written by name)
};
GUEST_OFFSET(StructurePlacementCheckCellsAFrame, word_8, 0x8);
GUEST_OFFSET(StructurePlacementCheckCellsAFrame, word_c, 0xc);
GUEST_OFFSET(StructurePlacementCheckCellsAFrame, word_40, 0x40);
GUEST_SIZE(StructurePlacementCheckCellsAFrame, 0x54);

u32 StructurePlacement__check_cells_a(gptr<StructurePlacement> structure_placement, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<StructurePlacementCheckCellsAFrame> frame;  // the original's stack frame
    u32 r0 = structure_placement.addr();
    u32 r0_17 = 0;
    u32 r6 = r0;
    u32 r1_1 = r0 & ~0xffu;
    u32 r0_1 = structure_placement->byte_10;
    u32 r7 = r1_1 | r0_1;
    u32 r5 = structure_lists_word(r0_1, r1_1, r2, r3);
    construct_grid_rect_iterator(frame.at(0).addr(), r6);
    make_end_grid_rect_iterator(frame.at(0x20).addr(), r6);
    u32 r0_6 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        do {
            gptr<Local_00248dd0_r4_1> r4_1 = gptr<Local_00248dd0_r4_1>(frame.at(8).addr());
            if (r5 != 0) {
                u32 r0_7 = CellMap__is_set(r5, r4_1->word_0, r4_1->word_4, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    GridLayer__query_cell(frame.at(0x30).addr(), r4_1->word_0, r4_1->word_4, r7 & 0xffu);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r0_9 = *frame.at<u32>(0x38) & 0xffu;
                    if (r0_9 < 0xfcu) {
                        u32 r0_10 = byte_88bd38_is_f(r0_9, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_10 != 0) {
                            if (*gptr<u32>(r6 + 0x20u) != 0) {
                                grid_point_subtract(frame.at(0x18).addr(), frame.at(8).addr(), r6 + 0x24u, r3);
                                gptr<Local_00248dd0_ea_1> ea_1 = gptr<Local_00248dd0_ea_1>(frame.at(0x18).addr());
                                u32 r2_7 = ea_1->word_4 * 0xa0u;
                                Cell__copy_from(frame.at(0x30).addr(), r2_7 + ea_1->word_0 * 0xau + *gptr<u32>(r6 + 0x20u), r2_7);
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (*frame.at<u8>(0x38) == 0) {
                                    goto L_248f5c;
                                }
                                u32 r4_2 = frame->word_c;
                                u32 r1_7 = frame->word_8;
                                u32 r3_6 = *gptr<u8>(r6 + 0x10u);
                                GridLayer__query_cell(frame.at(0x40).addr(), r1_7, r4_2, r3_6);
                                r1 = frame->word_40;
                                gptr<Local_00248dd0_ea_3> ea_3 = gptr<Local_00248dd0_ea_3>(frame.at(0x44).addr());
                                u32 r0_14 = ea_3->word_0;
                                u32 r2_8 = ea_3->word_4 & 0xffu;
                                if (r2_8 < 0xfcu) {
                                    *gptr<u8>(r6 + 0x12u) = u8(r2_8);
                                    gptr<Local_00248dd0_ea_5> ea_5 = gptr<Local_00248dd0_ea_5>(r6 + 0x14u);
                                    ea_5->word_0 = r1;
                                    ea_5->word_4 = r0_14;
                                }
                            }
                            guest::cpu()->r[1] = r1;
                            return 1u;
L_248f5c:;
                        }
                    }
                }
            }
            WrappingCursor__advance(frame.at(0).addr(), r1, r2, r3);
            r0_17 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_17 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00248dd0
GUEST_EXPORT_FRAMED(0x00248dd0, d_00248dd0::StructurePlacement__check_cells_a, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00248fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when a cell of the rectangle (in the top blocks) is blocked in the structure's cell layout.
namespace d_00248fb0 {

struct __attribute__((packed)) StructurePlacement {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(StructurePlacement, byte_11, 0x11);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) StructurePlacementHasBlockedCellFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x14];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x18];  // (not read or written by name)
    u8 byte_38;
    u8 unknown_39[0x3];  // (not read or written by name)
};
GUEST_OFFSET(StructurePlacementHasBlockedCellFrame, word_0, 0x0);
GUEST_OFFSET(StructurePlacementHasBlockedCellFrame, word_4, 0x4);
GUEST_OFFSET(StructurePlacementHasBlockedCellFrame, word_1c, 0x1c);
GUEST_OFFSET(StructurePlacementHasBlockedCellFrame, byte_38, 0x38);
GUEST_SIZE(StructurePlacementHasBlockedCellFrame, 0x3c);

u32 StructurePlacement__has_blocked_cell(gptr<StructurePlacement> structure_placement, u32 r1, u32 r2) {
    guest::StackFrameOf<StructurePlacementHasBlockedCellFrame> frame;  // the original's stack frame
    u32 r0 = structure_placement.addr();
    u32 r0_13 = 0;
    u32 r5 = r0;
    u32 r0_1 = structure_placement->byte_11;
    u32 map_2 = read_map_table(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r4 = map_2;
    construct_grid_rect_iterator(frame.at(8).addr(), r5);
    make_end_grid_rect_iterator(frame.at(0x20).addr(), r5);
    u32 r0_6 = key_records_differ(frame.at(8).addr(), frame.at(0x20).addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_6 != 0) {
        do {
            if (r4 != 0) {
                block_of_cell(frame.at(0x18).addr(), frame.at(0x10).addr(), r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (s32(frame->word_1c) <= 0) {
                    if (*gptr<u32>(r5 + 0x20u) != 0) {
                        grid_point_subtract(frame.at(0).addr(), frame.at(0x10).addr(), r5 + 0x24u);
                        u32 r2_5 = *gptr<u32>(r5 + 0x20u);
                        Cell__copy_from(frame.at(0x30).addr(), frame->word_4 * 0xa0u + frame->word_0 * 0xau + r2_5, r2_5);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (frame->byte_38 == 0) {
                            goto L_2490bc;
                        }
                    }
                    guest::cpu()->r[1] = r1;
                    return 1u;
L_2490bc:;
                }
            }
            WrappingCursor__advance(frame.at(8).addr(), r1, r2);
            r0_13 = key_records_differ(frame.at(8).addr(), frame.at(0x20).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_13 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00248fb0
GUEST_EXPORT_FRAMED(0x00248fb0, d_00248fb0::StructurePlacement__has_blocked_cell, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0024910c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the structure (a field or special object) is the active construction site's, at the same place.
namespace d_0024910c {

struct __attribute__((packed)) StructurePlacement {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(StructurePlacement, byte_12, 0x12);
GUEST_OFFSET(StructurePlacement, word_14, 0x14);
GUEST_OFFSET(StructurePlacement, word_18, 0x18);

inline constexpr guest::Function<0x003026cc, u32(u32)> town_byte_6e2b0;
inline constexpr guest::Function<0x0030ce60, u32(u32)> return_constant_0x957214_;
inline constexpr guest::Function<0x00314bc4, u32(u32)> save_state_6e2a6_is_active;
inline constexpr guest::Function<0x005ca4b4, u32(u32)> object_name_is_fobj;
inline constexpr guest::Function<0x005ca530, u32(u32)> map_structure_is_sobj;
inline constexpr guest::Function<0x0071831c, u32(u32)> town_byte_6e2b2;
inline constexpr guest::Function<0x00718340, u32(u32)> town_byte_6e2b3;

u32 StructurePlacement__is_construction_site(gptr<StructurePlacement> structure_placement) {
    u32 r0_1 = structure_placement->byte_12;
    u32 r0_2 = object_name_is_fobj(r0_1);
    if (r0_2 == 0) {
        u32 r0_3 = structure_placement->byte_12;
        r0_2 = map_structure_is_sobj(r0_3);
        if (r0_2 == 0) {
            return 0u;
        }
    }
    u32 r0_4 = return_constant_0x957214_(r0_2);
    if (save_state_6e2a6_is_active(r0_4) != 0) {
        u32 r0_6 = town_byte_6e2b0(r0_4);
        if (r0_6 == structure_placement->byte_12) {
            u32 r0_7 = town_byte_6e2b2(r0_4);
            if (r0_7 == structure_placement->word_14) {
                u32 r0_8 = town_byte_6e2b3(r0_4);
                if (r0_8 == structure_placement->word_18) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_0024910c
GUEST_EXPORT_FRAMED(0x0024910c, d_0024910c::StructurePlacement__is_construction_site, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024919c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the terrain and tiles under the structure's rectangle.
namespace d_0024919c {

struct __attribute__((packed)) StructurePlacement {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(StructurePlacement, byte_10, 0x10);

struct __attribute__((packed)) Local_0024919c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0024919c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0024919c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0024919c_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0024919c_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0024919c_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0024919c_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0024919c_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_0024919c_r3_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_r3_14, word_0, 0x0);
GUEST_OFFSET(Local_0024919c_r3_14, word_4, 0x4);

struct __attribute__((packed)) Local_0024919c_r3_15 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_r3_15, word_0, 0x0);
GUEST_OFFSET(Local_0024919c_r3_15, word_4, 0x4);

struct __attribute__((packed)) Local_0024919c_r3_17 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_r3_17, word_0, 0x0);
GUEST_OFFSET(Local_0024919c_r3_17, word_4, 0x4);

struct __attribute__((packed)) Local_0024919c_r3_18 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_r3_18, word_0, 0x0);
GUEST_OFFSET(Local_0024919c_r3_18, word_4, 0x4);

struct __attribute__((packed)) Local_0024919c_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_0024919c_r5_1, word_4, 0x4);

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> GridLayer__query_cell;
inline constexpr guest::Function<0x00240010, u32(u32, u32, u32, u32)> structure_lists_word;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0052f0f0, u32(u32, u32)> assign_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x005ca52c, u32(u32, u32, u32, u32)> scene_name_matches;
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32, u32)> table_94ea68_at;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x006cba30, u32(u32, u32, u32, u32)> first_placed_structure_of_4_a;
inline constexpr guest::Function<0x006cbbe4, u32(u32, u32, u32, u32)> first_placed_structure_of_4_b;
inline constexpr guest::Function<0x007206b8, u32(u32, u32, u32, u32)> CellMap__is_set;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

struct __attribute__((packed)) StructurePlacementCheckTerrainFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x8];  // (not read or written by name)
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x14];  // (not read or written by name)
    u8 byte_3c;
    u8 unknown_3d[0x1b];  // (not read or written by name)
    u32 word_58;
    u8 unknown_5c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(StructurePlacementCheckTerrainFrame, word_0, 0x0);
GUEST_OFFSET(StructurePlacementCheckTerrainFrame, word_4, 0x4);
GUEST_OFFSET(StructurePlacementCheckTerrainFrame, word_8, 0x8);
GUEST_OFFSET(StructurePlacementCheckTerrainFrame, word_c, 0xc);
GUEST_OFFSET(StructurePlacementCheckTerrainFrame, word_10, 0x10);
GUEST_OFFSET(StructurePlacementCheckTerrainFrame, word_14, 0x14);
GUEST_OFFSET(StructurePlacementCheckTerrainFrame, word_20, 0x20);
GUEST_OFFSET(StructurePlacementCheckTerrainFrame, word_24, 0x24);
GUEST_OFFSET(StructurePlacementCheckTerrainFrame, byte_3c, 0x3c);
GUEST_OFFSET(StructurePlacementCheckTerrainFrame, word_58, 0x58);
GUEST_SIZE(StructurePlacementCheckTerrainFrame, 0x68);

u32 StructurePlacement__check_terrain(gptr<StructurePlacement> structure_placement, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<StructurePlacementCheckTerrainFrame> frame;  // the original's stack frame
    u32 r0 = structure_placement.addr();
    u32 r9 = 0;
    u32 r10 = 0;
    u32 r0_18 = 0;
    u32 r0_30 = 0;
    gptr<Local_0024919c_r3_14> r3_14 = gptr<Local_0024919c_r3_14>(0u);
    u32 r1_12 = 0;
    u32 r2_16 = 0;
    u32 r0_31 = 0;
    u32 r0_34 = 0;
    u32 r0_43 = 0;
    gptr<Local_0024919c_r3_18> r3_18 = gptr<Local_0024919c_r3_18>(0u);
    u32 r1_19 = 0;
    u32 r2_21 = 0;
    u32 r0_44 = 0;
    u32 r4 = r0;
    u32 r1_1 = r0 & ~0xffu;
    u32 r0_1 = structure_placement->byte_10;
    u32 r7 = r1_1 | r0_1;
    u32 r6 = structure_lists_word(r0_1, r1_1, r2, r3);
    construct_grid_rect_iterator(frame.at(0).addr(), r4);
    make_end_grid_rect_iterator(frame.at(0x10).addr(), r4);
    u32 r0_6 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        do {
            gptr<Local_0024919c_r5_1> r5_1 = gptr<Local_0024919c_r5_1>(frame.at(8).addr());
            if (r6 != 0) {
                u32 r0_7 = CellMap__is_set(r6, r5_1->word_0, r5_1->word_4, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    GridLayer__query_cell(frame.at(0x30).addr(), r5_1->word_0, r5_1->word_4, r7 & 0xffu);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r0_9 = *frame.at<u32>(0x38) & 0xffu;
                    if (r0_9 < 0xfcu) {
                        u32 r0_10 = scene_name_matches(r0_9, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_10 != 0) {
                            if (*gptr<u32>(r4 + 0x20u) == 0) {
                                return 1u;
                            }
                            grid_point_subtract(frame.at(0x28).addr(), frame.at(8).addr(), r4 + 0x24u, r3);
                            gptr<Local_0024919c_ea_1> ea_1 = gptr<Local_0024919c_ea_1>(frame.at(0x28).addr());
                            u32 r2_7 = *gptr<u32>(r4 + 0x20u);
                            Cell__copy_from(frame.at(0x30).addr(), ea_1->word_4 * 0xa0u + ea_1->word_0 * 0xau + r2_7, r2_7);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (*frame.at<u8>(0x38) != 0) {
                                u32 r5_2 = frame->word_c;
                                u32 r1_7 = frame->word_8;
                                u32 r3_6 = *gptr<u8>(r4 + 0x10u);
                                GridLayer__query_cell(frame.at(0x50).addr(), r1_7, r5_2, r3_6);
                                u32 r0_14 = frame->word_58;
                                gptr<Local_0024919c_ea_3> ea_3 = gptr<Local_0024919c_ea_3>(frame.at(0x50).addr());
                                r1 = ea_3->word_0;
                                u32 r2_8 = ea_3->word_4;
                                u32 r0_15 = r0_14 & 0xffu;
                                if (r0_15 < 0xfcu) {
                                    *gptr<u8>(r4 + 0x12u) = u8(r0_15);
                                    gptr<Local_0024919c_ea_4> ea_4 = gptr<Local_0024919c_ea_4>(r4 + 0x14u);
                                    ea_4->word_0 = r1;
                                    ea_4->word_4 = r2_8;
                                }
                                guest::cpu()->r[1] = r1;
                                return 1u;
                            }
                        }
                    }
                }
            }
            WrappingCursor__advance(frame.at(0).addr(), r1, r2, r3);
            r0_18 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_18 != 0);
    }
    u32 r0_19 = *gptr<u8>(r4 + 0x11u);
    u32 map_3 = read_map_table(r0_19, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r7 = map_3;
    if (map_3 == 0) {
        return 0u;
    }
    u32 r0_21 = *gptr<u8>(r4 + 0x11u);
    u32 map_4 = read_map_table(r0_21, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5 = map_4;
    construct_grid_rect_iterator(frame.at(0x20).addr(), r4);
    frame->word_0 = frame->word_20;
    frame->word_4 = frame->word_24;
    assign_word_pair(frame.at(0).addr() + 8u, frame.at(0x28).addr());
    make_end_grid_rect_iterator(frame.at(0x20).addr(), r4);
    frame->word_10 = frame->word_20;
    frame->word_14 = frame->word_24;
    assign_word_pair(frame.at(0x10).addr() + 8u, frame.at(0x28).addr());
    u32 r0_28 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_28 == 0) {
        return 0u;
    } else {
        r9 = 0x59u;
        r10 = 0x58u;
    }
L_2493e4:;
    u32 tile = frame.at(8).addr();
    if (r5 == 0) {
        goto L_24969c;
    }
    r0_30 = frame.at(0x48).addr();
    block_of_cell(r0_30, tile, r2, r3);
    r3_14 = gptr<Local_0024919c_r3_14>(frame.at(0x48).addr());
    r1_12 = r3_14->word_0;
    r2_16 = r3_14->word_4;
    r0_31 = GridMap__large_cell_at(r5, r1_12, r2_16, r3_14.addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_31 != 0) {
        GridPoint__set_tile_in_block(frame.at(0x40).addr(), tile, r2, r3);
        gptr<Local_0024919c_r3_15> r3_15 = gptr<Local_0024919c_r3_15>(frame.at(0x40).addr());
        u32 terrain = GridCellLarge__terrain_at(r0_31, r3_15->word_0, r3_15->word_4, r3_15.addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 zf_1 = terrain - 0x9du == 0;
        if (zf_1) {
            goto L_249498;
        }
        if (!zf_1 && s32(terrain) >= 0x9d) {
            if (terrain != 0x9eu && terrain != 0x9fu) {
                goto L_249458;
            }
            goto L_249498;
        }
        if (terrain == 0x11u || terrain == 0x9cu) {
            goto L_249498;
        }
L_249458:;
    }
    goto L_24969c;
L_249498:;
    r0_34 = frame.at(0).addr();
    if (*gptr<u32>(r4 + 0x20u) != 0) {
        grid_point_subtract(frame.at(0x58).addr(), r0_34 + 8u, r4 + 0x24u, r3);
        gptr<Local_0024919c_ea_5> ea_5 = gptr<Local_0024919c_ea_5>(frame.at(0x58).addr());
        u32 r2_19 = ea_5->word_4 * 0xa0u;
        Cell__copy_from(frame.at(0x34).addr(), r2_19 + ea_5->word_0 * 0xau + *gptr<u32>(r4 + 0x20u), r2_19);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (frame->byte_3c != 0) {
            block_of_cell(frame.at(0x60).addr(), frame.at(8).addr(), r2, r3);
            gptr<Local_0024919c_r3_17> r3_17 = gptr<Local_0024919c_r3_17>(frame.at(0x60).addr());
            u32 cell = CellGrid__cell_at(r7, r3_17->word_0, r3_17->word_4, r3_17.addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (cell != 0) {
                u32 r0_39 = *gptr<u16>(cell);
                u32 r0_40 = table_94ea68_at(r0_39, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_40 == 1u) {
                    *gptr<u8>(r4 + 0x12u) = u8(r9);
                    return 1u;
                }
                if (r0_40 == 2u) {
                    u32 r0_41 = first_placed_structure_of_4_a(r0_40, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    *gptr<u8>(r4 + 0x12u) = u8(r0_41);
                    return 1u;
                }
                if (r0_40 == 3u) {
                    *gptr<u8>(r4 + 0x12u) = u8(r10);
                    guest::cpu()->r[1] = r1;
                    return 1u;
                }
                if (r0_40 == 4u) {
                    u32 r0_42 = first_placed_structure_of_4_b(r0_40, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    *gptr<u8>(r4 + 0x12u) = u8(r0_42);
                    return 1u;
                }
            }
        }
        goto L_24969c;
    }
    r0_43 = frame.at(0x38).addr();
    block_of_cell(r0_43, r0_34 + 8u, r2, r3);
    r3_18 = gptr<Local_0024919c_r3_18>(frame.at(0x38).addr());
    r1_19 = r3_18->word_0;
    r2_21 = r3_18->word_4;
    r0_44 = CellGrid__cell_at(r7, r1_19, r2_21, r3_18.addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_44 != 0) {
        u32 r0_45 = *gptr<u16>(r0_44);
        u32 r0_46 = table_94ea68_at(r0_45, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_46 == 1u) {
            *gptr<u8>(r4 + 0x12u) = u8(r9);
            return 1u;
        }
        if (r0_46 == 2u) {
            u32 r0_47 = first_placed_structure_of_4_a(r0_46, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            *gptr<u8>(r4 + 0x12u) = u8(r0_47);
            return 1u;
        }
        if (r0_46 == 3u) {
            *gptr<u8>(r4 + 0x12u) = u8(r10);
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        if (r0_46 == 4u) {
            u32 r0_48 = first_placed_structure_of_4_b(r0_46, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            *gptr<u8>(r4 + 0x12u) = u8(r0_48);
            return 1u;
        }
    }
L_24969c:;
    WrappingCursor__advance(frame.at(0).addr(), r1, r2, r3);
    u32 r0_51 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_51 != 0) {
        guest::preempt();
        goto L_2493e4;
    }
    return 0u;
}

}  // namespace d_0024919c
GUEST_EXPORT_FRAMED(0x0024919c, d_0024919c::StructurePlacement__check_terrain, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00249eec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the cells under the structure's rectangle against the map (second rule set).
namespace d_00249eec {

struct __attribute__((packed)) StructurePlacement {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(StructurePlacement, byte_10, 0x10);

struct __attribute__((packed)) Local_00249eec_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00249eec_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00249eec_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00249eec_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00249eec_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00249eec_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_00249eec_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00249eec_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00249eec_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_00249eec_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00249eec_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00249eec_r4_1, word_4, 0x4);

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> GridLayer__query_cell;
inline constexpr guest::Function<0x00240010, u32(u32, u32, u32, u32)> structure_lists_word;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x006cbb94, u32(u32, u32, u32, u32)> slot_is_local_main;
inline constexpr guest::Function<0x007206b8, u32(u32, u32, u32, u32)> CellMap__is_set;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) StructurePlacementCheckCellsBFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x30];  // (not read or written by name)
    u32 word_40;
    u8 unknown_44[0x10];  // (not read or written by name)
};
GUEST_OFFSET(StructurePlacementCheckCellsBFrame, word_8, 0x8);
GUEST_OFFSET(StructurePlacementCheckCellsBFrame, word_c, 0xc);
GUEST_OFFSET(StructurePlacementCheckCellsBFrame, word_40, 0x40);
GUEST_SIZE(StructurePlacementCheckCellsBFrame, 0x54);

u32 StructurePlacement__check_cells_b(gptr<StructurePlacement> structure_placement, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<StructurePlacementCheckCellsBFrame> frame;  // the original's stack frame
    u32 r0 = structure_placement.addr();
    u32 r0_17 = 0;
    u32 r6 = r0;
    u32 r1_1 = r0 & ~0xffu;
    u32 r0_1 = structure_placement->byte_10;
    u32 r7 = r1_1 | r0_1;
    u32 r5 = structure_lists_word(r0_1, r1_1, r2, r3);
    construct_grid_rect_iterator(frame.at(0).addr(), r6);
    make_end_grid_rect_iterator(frame.at(0x20).addr(), r6);
    u32 r0_6 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        do {
            gptr<Local_00249eec_r4_1> r4_1 = gptr<Local_00249eec_r4_1>(frame.at(8).addr());
            if (r5 != 0) {
                u32 r0_7 = CellMap__is_set(r5, r4_1->word_0, r4_1->word_4, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    GridLayer__query_cell(frame.at(0x30).addr(), r4_1->word_0, r4_1->word_4, r7 & 0xffu);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r0_9 = *frame.at<u32>(0x38) & 0xffu;
                    if (r0_9 < 0xfcu) {
                        u32 r0_10 = slot_is_local_main(r0_9, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_10 != 0) {
                            if (*gptr<u32>(r6 + 0x20u) != 0) {
                                grid_point_subtract(frame.at(0x18).addr(), frame.at(8).addr(), r6 + 0x24u, r3);
                                gptr<Local_00249eec_ea_1> ea_1 = gptr<Local_00249eec_ea_1>(frame.at(0x18).addr());
                                u32 r2_7 = ea_1->word_4 * 0xa0u;
                                Cell__copy_from(frame.at(0x30).addr(), r2_7 + ea_1->word_0 * 0xau + *gptr<u32>(r6 + 0x20u), r2_7);
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (*frame.at<u8>(0x38) == 0) {
                                    goto L_24a078;
                                }
                                u32 r4_2 = frame->word_c;
                                u32 r1_7 = frame->word_8;
                                u32 r3_6 = *gptr<u8>(r6 + 0x10u);
                                GridLayer__query_cell(frame.at(0x40).addr(), r1_7, r4_2, r3_6);
                                r1 = frame->word_40;
                                gptr<Local_00249eec_ea_3> ea_3 = gptr<Local_00249eec_ea_3>(frame.at(0x44).addr());
                                u32 r0_14 = ea_3->word_0;
                                u32 r2_8 = ea_3->word_4 & 0xffu;
                                if (r2_8 < 0xfcu) {
                                    *gptr<u8>(r6 + 0x12u) = u8(r2_8);
                                    gptr<Local_00249eec_ea_5> ea_5 = gptr<Local_00249eec_ea_5>(r6 + 0x14u);
                                    ea_5->word_0 = r1;
                                    ea_5->word_4 = r0_14;
                                }
                            }
                            guest::cpu()->r[1] = r1;
                            return 1u;
L_24a078:;
                        }
                    }
                }
            }
            WrappingCursor__advance(frame.at(0).addr(), r1, r2, r3);
            r0_17 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_17 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00249eec
GUEST_EXPORT_FRAMED(0x00249eec, d_00249eec::StructurePlacement__check_cells_b, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0024a0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the cells under the structure's rectangle against the map (third rule set).
namespace d_0024a0cc {

struct __attribute__((packed)) StructurePlacement {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(StructurePlacement, byte_10, 0x10);

struct __attribute__((packed)) Local_0024a0cc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0024a0cc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0024a0cc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0024a0cc_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0024a0cc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024a0cc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0024a0cc_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0024a0cc_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024a0cc_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_0024a0cc_r4_1, word_4, 0x4);

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> GridLayer__query_cell;
inline constexpr guest::Function<0x00240010, u32(u32, u32, u32, u32)> structure_lists_word;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x005ca4f0, u32(u32, u32, u32, u32)> map_structure_is_hobj;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x006cbb94, u32(u32, u32, u32, u32)> slot_is_local_main;
inline constexpr guest::Function<0x007206b8, u32(u32, u32, u32, u32)> CellMap__is_set;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) StructurePlacementCheckCellsCFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x8];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x34];  // (not read or written by name)
};
GUEST_OFFSET(StructurePlacementCheckCellsCFrame, word_8, 0x8);
GUEST_OFFSET(StructurePlacementCheckCellsCFrame, word_c, 0xc);
GUEST_OFFSET(StructurePlacementCheckCellsCFrame, word_18, 0x18);
GUEST_OFFSET(StructurePlacementCheckCellsCFrame, word_1c, 0x1c);
GUEST_SIZE(StructurePlacementCheckCellsCFrame, 0x54);

u32 StructurePlacement__check_cells_c(gptr<StructurePlacement> structure_placement, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<StructurePlacementCheckCellsCFrame> frame;  // the original's stack frame
    u32 r0 = structure_placement.addr();
    u32 r0_17 = 0;
    u32 r6 = r0;
    u32 r1_1 = r0 & ~0xffu;
    u32 r0_1 = structure_placement->byte_10;
    u32 r7 = r1_1 | r0_1;
    u32 r5 = structure_lists_word(r0_1, r1_1, r2, r3);
    construct_grid_rect_iterator(frame.at(0).addr(), r6);
    make_end_grid_rect_iterator(frame.at(0x20).addr(), r6);
    u32 r0_6 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        do {
            gptr<Local_0024a0cc_r4_1> r4_1 = gptr<Local_0024a0cc_r4_1>(frame.at(8).addr());
            if (r5 != 0) {
                u32 r0_7 = CellMap__is_set(r5, r4_1->word_0, r4_1->word_4, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    GridLayer__query_cell(frame.at(0x30).addr(), r4_1->word_0, r4_1->word_4, r7 & 0xffu);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r4_2 = *frame.at<u32>(0x38) & 0xffu;
                    if (r4_2 < 0xfcu) {
                        u32 r0_9 = map_structure_is_hobj(r4_2, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_9 != 0) {
                            u32 r0_10 = slot_is_local_main(r4_2, r1, r2, r3);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0_10 == 0) {
                                if (*gptr<u32>(r6 + 0x20u) != 0) {
                                    grid_point_subtract(frame.at(0x18).addr(), frame.at(8).addr(), r6 + 0x24u, r3);
                                    u32 r2_7 = *gptr<u32>(r6 + 0x20u);
                                    Cell__copy_from(frame.at(0x30).addr(), frame->word_1c * 0xa0u + frame->word_18 * 0xau + r2_7, r2_7);
                                    r1 = guest::cpu()->r[1];
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    if (*frame.at<u8>(0x38) == 0) {
                                        goto L_24a264;
                                    }
                                    u32 r4_3 = frame->word_c;
                                    u32 r1_7 = frame->word_8;
                                    u32 r3_6 = *gptr<u8>(r6 + 0x10u);
                                    GridLayer__query_cell(frame.at(0x40).addr(), r1_7, r4_3, r3_6);
                                    gptr<Local_0024a0cc_ea_1> ea_1 = gptr<Local_0024a0cc_ea_1>(frame.at(0x40).addr());
                                    u32 r0_14 = ea_1->word_0;
                                    r1 = ea_1->word_4;
                                    u32 r2_8 = ea_1->word_8 & 0xffu;
                                    if (r2_8 < 0xfcu) {
                                        *gptr<u8>(r6 + 0x12u) = u8(r2_8);
                                        gptr<Local_0024a0cc_ea_2> ea_2 = gptr<Local_0024a0cc_ea_2>(r6 + 0x14u);
                                        ea_2->word_0 = r0_14;
                                        ea_2->word_4 = r1;
                                    }
                                }
                                guest::cpu()->r[1] = r1;
                                return 1u;
L_24a264:;
                            }
                        }
                    }
                }
            }
            WrappingCursor__advance(frame.at(0).addr(), r1, r2, r3);
            r0_17 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_17 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0024a0cc
GUEST_EXPORT_FRAMED(0x0024a0cc, d_0024a0cc::StructurePlacement__check_cells_c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0024a528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the record's constants and clears its bytes and word.
namespace d_0024a528 {

struct __attribute__((packed)) Record10 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 byte_b;
    u32 word_c;
};
GUEST_OFFSET(Record10, byte_a, 0xa);
GUEST_OFFSET(Record10, byte_b, 0xb);
GUEST_OFFSET(Record10, word_c, 0xc);

inline constexpr guest::Function<0x00615328, u32(u32)> store_constants_779548_veneer;

void Record10__clear(gptr<Record10> record10) {
    store_constants_779548_veneer(record10.addr());
    record10->byte_a = 0;
    record10->byte_b = 0;
    record10->word_c = 0;
}

}  // namespace d_0024a528
GUEST_EXPORT_FRAMED(0x0024a528, d_0024a528::Record10__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024a548: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the record's constants and clears its bytes and word.
namespace d_0024a548 {

struct __attribute__((packed)) Record10 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 byte_b;
    u32 word_c;
};
GUEST_OFFSET(Record10, byte_a, 0xa);
GUEST_OFFSET(Record10, byte_b, 0xb);
GUEST_OFFSET(Record10, word_c, 0xc);

inline constexpr guest::Function<0x00615328, u32(u32)> store_constants_779548_veneer;

u32 Record10__construct(gptr<Record10> record10) {
    store_constants_779548_veneer(record10.addr());
    record10->byte_a = 0;
    record10->byte_b = 0;
    record10->word_c = 0;
    return record10.addr();
}

}  // namespace d_0024a548
GUEST_EXPORT_FRAMED(0x0024a548, d_0024a548::Record10__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024a56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the 0x320-byte block.
namespace d_0024a56c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

u32 clear_320_bytes(u32 r0) {
    clear_aligned(r0, 0x320u);
    return r0;
}

}  // namespace d_0024a56c
GUEST_EXPORT_FRAMED(0x0024a56c, d_0024a56c::clear_320_bytes, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024a684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies 0xba words.
namespace d_0024a684 {


void copy_186_words(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        u32 r4_1 = r0 + (r2 << 2);
        *gptr<u32>(r0 + (r2 << 2)) = gptr<u32>(r1)[r2];
        u32 r3_1 = *gptr<u32>(r1 + (r2 << 2) + 4u);
        r2 += 2u;
        *gptr<u32>(r4_1 + 4u) = r3_1;
        guest::preempt();
    } while (r2 < 0xbau);
}

}  // namespace d_0024a684
GUEST_EXPORT_FRAMED(0x0024a684, d_0024a684::copy_186_words, 0x10);  // pushes {r4} first, as the original

// f_0024a6b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the seen bit (bit 1) of badge `index`.
namespace d_0024a6b8 {

struct __attribute__((packed)) Local_0024a6b8_r0_1 {
    u8 unknown_0[0x1b4];  // (not used here)
    u8 byte_1b4;
};
GUEST_OFFSET(Local_0024a6b8_r0_1, byte_1b4, 0x1b4);


void BadgeCounters__mark_seen(u32 badge_counters, u32 r1) {
    gptr<Local_0024a6b8_r0_1> r0_1 = gptr<Local_0024a6b8_r0_1>(badge_counters + r1);
    u32 r1_1 = r0_1->byte_1b4;
    if ((r1_1 & 2u) == 0) {
        r0_1->byte_1b4 = u8(r1_1 | 2u);
    }
}

}  // namespace d_0024a6b8
GUEST_EXPORT(0x0024a6b8, d_0024a6b8::BadgeCounters__mark_seen);

// f_0024a6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the badges whose counters reached their goal and sums their points by tier (capped at 99999).
namespace d_0024a6d0 {

struct __attribute__((packed)) Local_0024a6d0_r0_2 {
    u8 unknown_0[0x1b4];  // (not used here)
    u8 byte_1b4;
};
GUEST_OFFSET(Local_0024a6d0_r0_2, byte_1b4, 0x1b4);

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> counter_kind_info;
inline constexpr guest::Function<0x002fd068, u32(u32, u32)> get_counter_block;
inline constexpr guest::Function<0x006b8a00, u32(u32, u32)> ClampedCounters__add_to_current_split_76_;

u32 BadgeCounters__total_points(u32 badge_counters, u32 r1) {
    u32 r6 = badge_counters;
    u32 r9 = 0u;
    u32 r10 = 0x1869fu;
    u32 i = r9;
    do {
        u32 r5_1 = i & 0xffu;
        if (r5_1 != 0) {
            u32 r0_1 = counter_kind_info(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = *gptr<u32>(r6 + (r5_1 << 2) + 0x1cu);
            if (*gptr<u32>(r0_1 + 0xcu) <= r1) {
                gptr<Local_0024a6d0_r0_2> r0_2 = gptr<Local_0024a6d0_r0_2>(r6 + r5_1);
                r1 = r0_2->byte_1b4;
                if ((r1 & 1u) == 0) {
                    u32 r1_1 = r1 | 1u;
                    r0_2->byte_1b4 = u8(r1_1);
                    if ((r1_1 & 4u) == 0) {
                        u32 r1_2 = r1_1 | 4u;
                        r0_2->byte_1b4 = u8(r1_2);
                        u32 counter_block = get_counter_block(r0_2.addr(), r1_2);
                        ClampedCounters__add_to_current_split_76_(counter_block, 1u);
                        r1_1 = guest::cpu()->r[1];
                    }
                    u32 r0_4 = counter_kind_info(r5_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    u32 r0_5 = *gptr<u32>(r0_4 + 4u);
                    if (r0_5 == 0) {
                        r0_5 = 2u;
                    } else {
                        u32 zf_1 = r0_5 == 1u;
                        if (zf_1) {
                            r0_5 = 3u;
                        } else {
                            zf_1 = r0_5 == 2u;
                        }
                        if (!zf_1) {
                            r0_5 = r0_5 == 3u;
                        }
                    }
                    r9 += r0_5;
                    if (r9 > r10) {
                        r9 = r10;
                    }
                }
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0x66);
    return r9;
}

}  // namespace d_0024a6d0
GUEST_EXPORT_FRAMED(0x0024a6d0, d_0024a6d0::BadgeCounters__total_points, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0024a7d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the badge counters (+0x1c), their flags (+0x1b4) and records.
namespace d_0024a7d4 {

struct __attribute__((packed)) BadgeCounters {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0xe];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
    u8 unknown_1b[0x201];  // (not used here)
    u32 word_21c;
    u32 word_220;
    u32 word_224;
    u32 word_228;
    u32 word_22c;
    u32 word_230;
    u32 word_234;
    u32 word_238;
};
GUEST_OFFSET(BadgeCounters, byte_8, 0x8);
GUEST_OFFSET(BadgeCounters, byte_9, 0x9);
GUEST_OFFSET(BadgeCounters, byte_18, 0x18);
GUEST_OFFSET(BadgeCounters, byte_19, 0x19);
GUEST_OFFSET(BadgeCounters, byte_1a, 0x1a);
GUEST_OFFSET(BadgeCounters, word_21c, 0x21c);
GUEST_OFFSET(BadgeCounters, word_220, 0x220);
GUEST_OFFSET(BadgeCounters, word_224, 0x224);
GUEST_OFFSET(BadgeCounters, word_228, 0x228);
GUEST_OFFSET(BadgeCounters, word_22c, 0x22c);
GUEST_OFFSET(BadgeCounters, word_230, 0x230);
GUEST_OFFSET(BadgeCounters, word_234, 0x234);
GUEST_OFFSET(BadgeCounters, word_238, 0x238);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x00779598, u32(u32)> store_constants_779598;

void BadgeCounters__clear(gptr<BadgeCounters> badge_counters) {
    clear_inner(badge_counters.addr());
    clear_aligned(badge_counters.addr() + 0x1cu, 0x198u);
    clear_aligned(badge_counters.addr() + 0x1b4u, 0x66u);
    badge_counters->byte_8 = 0;
    badge_counters->byte_9 = 0;
    store_constants_779598(badge_counters.addr() + 0xau);
    store_constants_779598(badge_counters.addr() + 0x11u);
    badge_counters->byte_18 = 0x65;
    badge_counters->word_21c = 0;
    badge_counters->word_220 = 0;
    badge_counters->word_224 = 0;
    badge_counters->word_228 = 0;
    badge_counters->word_22c = 0;
    badge_counters->word_230 = 0;
    badge_counters->word_234 = 0;
    badge_counters->word_238 = 0;
    badge_counters->byte_19 = 0;
    badge_counters->byte_1a = 0;
}

}  // namespace d_0024a7d4
GUEST_EXPORT_FRAMED(0x0024a7d4, d_0024a7d4::BadgeCounters__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024a848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the badge counters (+0x1c), their flags (+0x1b4) and records.
namespace d_0024a848 {

struct __attribute__((packed)) BadgeCounters {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0xe];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
    u8 unknown_1b[0x201];  // (not used here)
    u32 word_21c;
    u32 word_220;
    u32 word_224;
    u32 word_228;
    u32 word_22c;
    u32 word_230;
    u32 word_234;
    u32 word_238;
};
GUEST_OFFSET(BadgeCounters, byte_8, 0x8);
GUEST_OFFSET(BadgeCounters, byte_9, 0x9);
GUEST_OFFSET(BadgeCounters, byte_18, 0x18);
GUEST_OFFSET(BadgeCounters, byte_19, 0x19);
GUEST_OFFSET(BadgeCounters, byte_1a, 0x1a);
GUEST_OFFSET(BadgeCounters, word_21c, 0x21c);
GUEST_OFFSET(BadgeCounters, word_220, 0x220);
GUEST_OFFSET(BadgeCounters, word_224, 0x224);
GUEST_OFFSET(BadgeCounters, word_228, 0x228);
GUEST_OFFSET(BadgeCounters, word_22c, 0x22c);
GUEST_OFFSET(BadgeCounters, word_230, 0x230);
GUEST_OFFSET(BadgeCounters, word_234, 0x234);
GUEST_OFFSET(BadgeCounters, word_238, 0x238);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x00779598, u32(u32)> store_constants_779598;

void BadgeCounters__construct(gptr<BadgeCounters> badge_counters) {
    clear_inner(badge_counters.addr());
    clear_aligned(badge_counters.addr() + 0x1cu, 0x198u);
    clear_aligned(badge_counters.addr() + 0x1b4u, 0x66u);
    badge_counters->byte_8 = 0;
    badge_counters->byte_9 = 0;
    store_constants_779598(badge_counters.addr() + 0xau);
    store_constants_779598(badge_counters.addr() + 0x11u);
    badge_counters->byte_18 = 0x65;
    badge_counters->word_21c = 0;
    badge_counters->word_220 = 0;
    badge_counters->word_224 = 0;
    badge_counters->word_228 = 0;
    badge_counters->word_22c = 0;
    badge_counters->word_230 = 0;
    badge_counters->word_234 = 0;
    badge_counters->word_238 = 0;
    badge_counters->byte_19 = 0;
    badge_counters->byte_1a = 0;
}

}  // namespace d_0024a848
GUEST_EXPORT_FRAMED(0x0024a848, d_0024a848::BadgeCounters__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024b448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds an amount (arg 2, negative subtracts) to a player counter (arg 1), kept encrypted and capped by the
// counter's kind; not while the net session is in mode 3.
namespace d_0024b448 {

struct __attribute__((packed)) Local_0024b448_r5_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0024b448_r5_1, word_1c, 0x1c);

inline constexpr guest::Function<0x0029b88c, u32(u32)> counter_kind_info;
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x00303660, u32(u32)> EncryptedInt__get;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x00613c8c, u32(u32, u32, u32)> EncryptedInt__add;
inline constexpr guest::Function<0x00613d38, u32(u32, u32)> EncryptedInt__subtract;
inline constexpr guest::Function<0x007159b0, u32(u32, u32, u32)> player_counter_for_weekday;

u32 add_to_player_counter(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r7 = r0;
    u32 r4 = r1;
    u32 r6 = r2;
    u32 r0_1 = read_global_object_byte(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0_1 != 3u) {
        u32 r5 = 0u;
L_24b46c:;
        if (r4 != 2u) {
            u32 player_counter = player_counter_for_weekday(r7, r5, r2);
            r2 = guest::cpu()->r[2];
            if (player_counter != r4) {
                r5 += 1u;
                if (s32(r5) >= 4) {
                    return player_counter;
                }
                guest::preempt();
                goto L_24b46c;
            }
        }
        gptr<Local_0024b448_r5_1> r5_1 = gptr<Local_0024b448_r5_1>(r7 + (r4 << 2));
        EncryptedInt__set(frame.at(0).addr(), r5_1->word_1c, r2);
        if (s32(r6) >= 0) {
            u32 r0_4 = counter_kind_info(r4);
            EncryptedInt__add(frame.at(0).addr(), r6, *gptr<u32>(r0_4 + 0xcu));
        } else {
            EncryptedInt__subtract(frame.at(0).addr(), r6);
        }
        r0_1 = EncryptedInt__get(frame.at(0).addr());
        r5_1->word_1c = r0_1;
    }
    return r0_1;
}

}  // namespace d_0024b448
GUEST_EXPORT_FRAMED(0x0024b448, d_0024b448::add_to_player_counter, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0024b500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds to the badge counter of the kind (clamped to its maximum).
namespace d_0024b500 {

inline constexpr guest::Function<0x0029b88c, u32(u32)> counter_kind_info;
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x00303660, u32(u32)> EncryptedInt__get;
inline constexpr guest::Function<0x00613c8c, u32(u32, u32, u32)> EncryptedInt__add;
inline constexpr guest::Function<0x007159b0, u32(u32, u32, u32, u32)> player_counter_for_weekday;

void BadgeCounters__add(u32 badge_counters, u32 i, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r5 = badge_counters;
    u32 r4 = i;
    u32 r7 = 0x11u;
    u32 j = 0u;
    do {
        u32 player_counter = player_counter_for_weekday(r5, j, r2, guest::cpu()->r[3]);
        i = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (player_counter == r7) {
            u32 r8 = r5 + (r7 << 2);
            j = *gptr<u32>(r8 + 0x1cu);
            if (s32(j) < 3) {
                if (s32(j) <= 0) {
                    badge_counters = 0u;
                } else {
                    badge_counters = j & 1u;
                    i = 0u;
                    if (s32(badge_counters) > 0) {
                        do {
                            r2 = *gptr<u32>(r5 + (i << 2) + 0x21cu);
                            if (r2 == r4) {
                                guest::cpu()->r[1] = i;
                                return;
                            }
                            i += 1u;
                            guest::preempt();
                        } while (s32(badge_counters) > s32(i));
                    }
                }
                if (s32(badge_counters) < s32(j)) {
                    do {
                        i = r5 + (badge_counters << 2);
                        r2 = *gptr<u32>(i + 0x21cu);
                        u32 zf_1 = r2 == r4;
                        if (!zf_1) {
                            i = *gptr<u32>(i + 0x220u);
                            zf_1 = i == r4;
                        }
                        if (zf_1) {
                            guest::cpu()->r[1] = i;
                            return;
                        }
                        badge_counters += 2u;
                        guest::preempt();
                    } while (s32(j) > s32(badge_counters));
                }
                EncryptedInt__set(frame.at(0).addr(), j, r2);
                u32 r0_3 = counter_kind_info(r7);
                EncryptedInt__add(frame.at(0).addr(), 1u, *gptr<u32>(r0_3 + 0xcu));
                u32 r0_6 = EncryptedInt__get(frame.at(0).addr());
                i = r5 + (j << 2);
                *gptr<u32>(r8 + 0x1cu) = r0_6;
                *gptr<u32>(i + 0x21cu) = r4;
            }
            guest::cpu()->r[1] = i;
            return;
        }
        j += 1u;
        guest::preempt();
    } while (s32(j) < 4);
    guest::cpu()->r[1] = i;
}

}  // namespace d_0024b500
GUEST_EXPORT_FRAMED(0x0024b500, d_0024b500::BadgeCounters__add, 0x41f0);  // pushes {r4, r5, j, r7, r8, lr} first, as the original

// f_0024b600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the counted bit (bit 2) of badge `index` once, counting it in the current split.
namespace d_0024b600 {

struct __attribute__((packed)) Local_0024b600_r0_1 {
    u8 unknown_0[0x1b4];  // (not used here)
    u8 byte_1b4;
};
GUEST_OFFSET(Local_0024b600_r0_1, byte_1b4, 0x1b4);

inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x006b8a00, u32(u32, u32)> ClampedCounters__add_to_current_split_76_;

void BadgeCounters__mark_counted(u32 badge_counters, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_0024b600_r0_1> r0_1 = gptr<Local_0024b600_r0_1>(badge_counters + r1);
    u32 r1_1 = r0_1->byte_1b4;
    if ((r1_1 & 4u) != 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    r0_1->byte_1b4 = u8(r1_1 | 4u);
    u32 counter_block = get_counter_block(r0_1.addr());
    frame.release();
    ClampedCounters__add_to_current_split_76_(counter_block, 1u);
    return;
}

}  // namespace d_0024b600
GUEST_EXPORT(0x0024b600, d_0024b600::BadgeCounters__mark_counted);

// f_0024b630: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the id for counter 0x12 when it is not among the up to 5 ids already counted (+0x228).
namespace d_0024b630 {

struct __attribute__((packed)) Local_0024b630_r1_1 {
    u8 unknown_0[0x228];  // (not used here)
    u32 word_228;
    u32 word_22c;
};
GUEST_OFFSET(Local_0024b630_r1_1, word_228, 0x228);
GUEST_OFFSET(Local_0024b630_r1_1, word_22c, 0x22c);

inline constexpr guest::Function<0x0029b88c, u32(u32)> counter_kind_info;
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x00303660, u32(u32)> EncryptedInt__get;
inline constexpr guest::Function<0x00613c8c, u32(u32, u32, u32)> EncryptedInt__add;
inline constexpr guest::Function<0x007159b0, u32(u32, u32, u32, u32)> player_counter_for_weekday;

void BadgeCounters__add_unique_18(u32 badge_counters, u32 i, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r5 = badge_counters;
    u32 r4 = i;
    u32 r7 = 0x12u;
    u32 j = 0u;
    do {
        u32 player_counter = player_counter_for_weekday(r5, j, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        if (player_counter == r7) {
            u32 r8 = r5 + (r7 << 2);
            j = *gptr<u32>(r8 + 0x1cu);
            if (s32(j) < 5) {
                if (s32(j) <= 0) {
                    badge_counters = 0u;
                } else {
                    badge_counters = j & 1u;
                    i = 0u;
                    if (s32(badge_counters) > 0) {
                        do {
                            r2 = *gptr<u32>(r5 + (i << 2) + 0x228u);
                            if (r2 == r4) {
                                return;
                            }
                            i += 1u;
                            guest::preempt();
                        } while (s32(badge_counters) > s32(i));
                    }
                }
                if (s32(badge_counters) < s32(j)) {
                    do {
                        gptr<Local_0024b630_r1_1> r1_1 = gptr<Local_0024b630_r1_1>(r5 + (badge_counters << 2));
                        r2 = r1_1->word_228;
                        if (r2 == r4 || r1_1->word_22c == r4) {
                            return;
                        }
                        badge_counters += 2u;
                        guest::preempt();
                    } while (s32(j) > s32(badge_counters));
                }
                EncryptedInt__set(frame.at(0).addr(), j, r2);
                u32 r0_3 = counter_kind_info(r7);
                EncryptedInt__add(frame.at(0).addr(), 1u, *gptr<u32>(r0_3 + 0xcu));
                *gptr<u32>(r8 + 0x1cu) = EncryptedInt__get(frame.at(0).addr());
                *gptr<u32>(r5 + (j << 2) + 0x228u) = r4;
            }
            return;
        }
        j += 1u;
        guest::preempt();
    } while (s32(j) < 4);
}

}  // namespace d_0024b630
GUEST_EXPORT_FRAMED(0x0024b630, d_0024b630::BadgeCounters__add_unique_18, 0x41f0);  // pushes {r4, r5, j, r7, r8, lr} first, as the original

// f_0024b730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the time stamp invalid and clears the badge counters, their flags and records.
namespace d_0024b730 {

struct __attribute__((packed)) BadgeCounters {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0xe];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
    u8 unknown_1b[0x201];  // (not used here)
    u32 word_21c;
    u32 word_220;
    u32 word_224;
    u32 word_228;
    u32 word_22c;
    u32 word_230;
    u32 word_234;
    u32 word_238;
};
GUEST_OFFSET(BadgeCounters, byte_8, 0x8);
GUEST_OFFSET(BadgeCounters, byte_9, 0x9);
GUEST_OFFSET(BadgeCounters, byte_18, 0x18);
GUEST_OFFSET(BadgeCounters, byte_19, 0x19);
GUEST_OFFSET(BadgeCounters, byte_1a, 0x1a);
GUEST_OFFSET(BadgeCounters, word_21c, 0x21c);
GUEST_OFFSET(BadgeCounters, word_220, 0x220);
GUEST_OFFSET(BadgeCounters, word_224, 0x224);
GUEST_OFFSET(BadgeCounters, word_228, 0x228);
GUEST_OFFSET(BadgeCounters, word_22c, 0x22c);
GUEST_OFFSET(BadgeCounters, word_230, 0x230);
GUEST_OFFSET(BadgeCounters, word_234, 0x234);
GUEST_OFFSET(BadgeCounters, word_238, 0x238);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;
inline constexpr guest::Function<0x00779598, u32(u32)> store_constants_779598;

u32 BadgeCounters__construct_with_time(gptr<BadgeCounters> badge_counters, u32 r1) {
    game_time_set(badge_counters.addr(), r1, ~0u, ~0x80000000u);
    clear_inner(badge_counters.addr());
    clear_aligned(badge_counters.addr() + 0x1cu, 0x198u);
    clear_aligned(badge_counters.addr() + 0x1b4u, 0x66u);
    badge_counters->byte_8 = 0;
    badge_counters->byte_9 = 0;
    store_constants_779598(badge_counters.addr() + 0xau);
    store_constants_779598(badge_counters.addr() + 0x11u);
    badge_counters->byte_18 = 0x65;
    badge_counters->word_21c = 0;
    badge_counters->word_220 = 0;
    badge_counters->word_224 = 0;
    badge_counters->word_228 = 0;
    badge_counters->word_22c = 0;
    badge_counters->word_230 = 0;
    badge_counters->word_234 = 0;
    badge_counters->word_238 = 0;
    badge_counters->byte_19 = 0;
    badge_counters->byte_1a = 0;
    return badge_counters.addr();
}

}  // namespace d_0024b730
GUEST_EXPORT_FRAMED(0x0024b730, d_0024b730::BadgeCounters__construct_with_time, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024b97c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 24 encrypted counters, the six words and the two encrypted totals, all zero.
namespace d_0024b97c {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> EncryptedInt__set;

u32 EncryptedTally24__construct(u32 encrypted_tally24) {
    u32 r0_1 = for_each_element(encrypted_tally24, 0x613dc0u, 8u, 0x18u);
    u32 r5 = r0_1;
    EncryptedInt__set(r0_1 + 0xd8u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r6 = 0u;
    EncryptedInt__set(r5 + 0xe0u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 i = 0u;
    do {
        EncryptedInt__set(r5 + (i << 3), 0u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0x18);
    *gptr<u32>(r5 + 0xc0u) = r6;
    *gptr<u32>(r5 + 0xc4u) = r6;
    *gptr<u32>(r5 + 0xc8u) = r6;
    *gptr<u32>(r5 + 0xccu) = r6;
    *gptr<u32>(r5 + 0xd0u) = r6;
    *gptr<u32>(r5 + 0xd4u) = r6;
    EncryptedInt__set(r5 + 0xd8u, 0u, r2, r3);
    EncryptedInt__set(r5 + 0xe0u, 0u, r2, r3);
    return r5;
}

}  // namespace d_0024b97c
GUEST_EXPORT_FRAMED(0x0024b97c, d_0024b97c::EncryptedTally24__construct, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0024c4dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Value `index` (below 25) of the search candidates, unless masked out (+0x4c); 0 otherwise.
namespace d_0024c4dc {

struct __attribute__((packed)) SearchCand {
    u8 unknown_0[0x4c];  // (not used here)
    u32 word_4c;
};
GUEST_OFFSET(SearchCand, word_4c, 0x4c);

inline constexpr guest::Function<0x0024c71c, u32(u32, u32, u32, u32)> SearchCand_50___SearchCand;

u32 candidate_value_below_25(gptr<SearchCand> search_cand, u32 r1) {
    guest::StackFrame frame(0x68);  // the original's stack frame
    u32 r2 = 0;
    if (r1 >= 0x19u) {
        return 0u;
    }
    if ((search_cand->word_4c & lsl_r(1u, r1 & 0xff)) != 0) {
        return 0u;
    }
    SearchCand_50___SearchCand(search_cand.addr(), frame.at(0).addr(), r2, guest::cpu()->r[3]);
    return gptr<u32>(frame.at(0).addr())[r1];
}

}  // namespace d_0024c4dc
GUEST_EXPORT_FRAMED(0x0024c4dc, d_0024c4dc::candidate_value_below_25, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024c53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Search candidates of kind 5, checked against the items a player (arg 1) holds.
namespace d_0024c53c {

struct __attribute__((packed)) SearchCand5SearchCandArg1 {
    u8 unknown_0[0x5712];  // (not used here)
    u8 byte_5712;
};
GUEST_OFFSET(SearchCand5SearchCandArg1, byte_5712, 0x5712);

inline constexpr u32 vtable_SearchCand_5_ = 0x008eb364u;
inline constexpr guest::Function<0x00306e7c, u32(u32, u32)> SearchCandCore__mark_all;
inline constexpr guest::Function<0x00306f60, u32(u32)> SearchCandCore__pick_random_marked;
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> construct_search_cand_core;
inline constexpr guest::Function<0x0030716c, u32(u32, u32)> SearchCandCore__unmark;
inline constexpr guest::Function<0x007701f8, u32(u32, u32, u32)> contains_item_for;

u32 SearchCand_5___SearchCand(u32 r0, gptr<SearchCand5SearchCandArg1> arg1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r0_4 = 0;
    u32 r6 = r0;
    u32 r0_1 = frame.at(0).addr();
    construct_search_cand_core(r0_1, 5u, frame.at(0x14).addr(), guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = vtable_SearchCand_5_;
    SearchCandCore__mark_all(frame.at(0).addr(), vtable_SearchCand_5_);
    if (r1 != 0) {
        if ((u32(arg1->byte_5712) >> 7) != 0) {
            u32 i = 1u;
            u32 r5 = r1 + 0x6c20u;
            do {
                u32 contains_item = contains_item_for(r5, 8u, i);
                if (contains_item != 0) {
                    goto L_24c634;
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < 9);
        }
    }
    r0_4 = u32(*gptr<u8>(r6 + 0xcu)) & 7u;
    if (r0_4 != 0) {
        if (r0_4 == 1u) {
            SearchCandCore__unmark(frame.at(0).addr(), 1u);
            SearchCandCore__unmark(frame.at(0).addr(), 4u);
        } else if (r0_4 == 3u) {
            SearchCandCore__unmark(frame.at(0).addr(), 3u);
            SearchCandCore__unmark(frame.at(0).addr(), 4u);
        }
    } else {
        SearchCandCore__unmark(frame.at(0).addr(), 0u);
    }
L_24c634:;
    u32 r0_11 = SearchCandCore__pick_random_marked(frame.at(0).addr());
    u32 r1_2 = u32(*gptr<u8>(r6 + 0xcu)) & 0x47u;
    u32 r0_12 = r1_2 | r0_11 << 3;
    *gptr<u8>(r6 + 0xcu) = u8(r0_12);
    guest::cpu()->r[1] = r1_2;
    return r0_12;
}

}  // namespace d_0024c53c
GUEST_EXPORT_FRAMED(0x0024c53c, d_0024c53c::SearchCand_5___SearchCand, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0024c71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024c71c {

struct __attribute__((packed)) SearchCand_50_ {
    u8 unknown_0[0x50];  // (not used here)
    u8 byte_50;
};
GUEST_OFFSET(SearchCand_50_, byte_50, 0x50);

struct __attribute__((packed)) Local_0024c71c_r1_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_0024c71c_r1_2, word_0, 0x0);

inline constexpr u32 vtable_SearchCand_50__rec = 0x008eb358u;
inline constexpr guest::Function<0x00306e7c, u32(u32, u32)> SearchCandCore__mark_all;
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> construct_search_cand_core;
inline constexpr guest::Function<0x0030716c, u32(u32, u32)> SearchCandCore__unmark;
inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32)> init_array_header;
inline constexpr guest::Function<0x00718e78, u32(u32, u32, u32, u32)> RandomRange__pick;

struct __attribute__((packed)) SearchCand50SearchCandFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xf4];  // (not read or written by name)
    u32 word_100;
};
GUEST_OFFSET(SearchCand50SearchCandFrame, word_0, 0x0);
GUEST_OFFSET(SearchCand50SearchCandFrame, word_4, 0x4);
GUEST_OFFSET(SearchCand50SearchCandFrame, word_8, 0x8);
GUEST_OFFSET(SearchCand50SearchCandFrame, word_100, 0x100);
GUEST_SIZE(SearchCand50SearchCandFrame, 0x104);

u32 SearchCand_50___SearchCand(gptr<SearchCand_50_> search_cand, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SearchCand50SearchCandFrame> frame;  // the original's stack frame
    u32 k = search_cand.addr();
    u32 r12 = 0;
    gptr<Local_0024c71c_r1_2> r1_2 = gptr<Local_0024c71c_r1_2>(0u);
    u32 r8 = k;
    u32 r9 = r1;
    u32 r0_1 = frame.at(0xd8).addr();
    construct_search_cand_core(r0_1, 0x32u, frame.at(0xec).addr(), r3);
    *gptr<u32>(r0_1) = vtable_SearchCand_50__rec;
    SearchCandCore__mark_all(frame.at(0xd8).addr(), vtable_SearchCand_50__rec);
    frame->word_100 = u32(search_cand->byte_50);
    u32 r10 = 0u;
    frame->word_0 = r10;
    frame->word_4 = r10;
    frame->word_8 = r10;
    init_array_header(frame.at(0).addr(), 0x19u, frame.at(0xc).addr());
    u32 r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 j = 0u;
    u32 r11 = frame.at(0x70).addr();
    do {
        u32 i = 0u;
        u32 r5 = j * 5u;
        do {
            u32 r0_5 = RandomRange__pick(frame.at(0xd8).addr(), frame.at(0x100).addr(), r2, r3);
            SearchCandCore__unmark(frame.at(0xd8).addr(), r0_5);
            r3 = guest::cpu()->r[3];
            r12 = guest::cpu()->r[12];
            u32 r0_7 = r5 + i;
            *gptr<u32>(r11 + (r0_7 << 2)) = r0_5 + 1u;
            r2 = frame->word_4;
            if (s32(frame->word_0) < s32(r2)) {
                r2 = frame->word_0;
                *gptr<u32>(frame->word_8 + (r2 << 2)) = r11 + (r0_7 << 2);
                frame->word_0 = frame->word_0 + 1u;
            }
            i += 1u;
            guest::preempt();
        } while (i < 5u);
        j += 1u;
        guest::preempt();
    } while (j < 5u);
    k = 0u;
    r2 = 1u;
    do {
        if ((*gptr<u32>(r8 + 0x4cu) & lsl_r(r2, k & 0xff)) != 0) {
            r1_2 = gptr<Local_0024c71c_r1_2>(k >= 0x19u ? r9 : r9 + (k << 2));
            r1_2->word_0 = r10;
        } else {
            u32 r3_4 = frame->word_0;
            r1_2 = gptr<Local_0024c71c_r1_2>(k >= 0x19u ? r9 : r9 + (k << 2));
            u32 zf_1 = r3_4 == k;
            u32 cf_1 = r3_4 >= k;
            if (r3_4 > k) {
                r12 = frame->word_8;
            } else {
                r3_4 = 0u;
            }
            if (cf_1 && !zf_1) {
                r3_4 = gptr<u32>(r12)[k];
            }
            r1_2->word_0 = *gptr<u32>(r3_4);
        }
        k += 1u;
        guest::preempt();
    } while (k < 0x19u);
    guest::cpu()->r[1] = r1_2.addr();
    return k;
}

}  // namespace d_0024c71c
GUEST_EXPORT_FRAMED(0x0024c71c, d_0024c71c::SearchCand_50___SearchCand, 0x4ff0);  // pushes {i, r5, r6, j, r8, r9, r10, r11, lr} first, as the original

// f_0024c858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the schedule: a random count (1 to 10), its 7 entries (kind 0xf), the current day and state 5.
namespace d_0024c858 {

struct __attribute__((packed)) PlayerSchedule {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
    u8 unknown_a[0x2];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(PlayerSchedule, byte_9, 0x9);
GUEST_OFFSET(PlayerSchedule, byte_c, 0xc);

struct __attribute__((packed)) Local_0024c858_r3_3 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_0024c858_r3_3, byte_12, 0x12);
GUEST_OFFSET(Local_0024c858_r3_3, half_14, 0x14);

inline constexpr guest::Function<0x0024c53c, u32(u32, u32)> SearchCand_5___SearchCand;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x00779638, u32(u32, u32)> fill_4_bytes;

void PlayerSchedule__reset(gptr<PlayerSchedule> player_schedule, u32 r1, u32 r2, u32 r3) {
    u32 r0 = player_schedule.addr();
    u32 res_1 = 0;
    u32 r4 = r0;
    u32 random = random_below(0xau, r1, r2, r3);
    u32 r6 = 0u;
    player_schedule->byte_c = u8(r6);
    player_schedule->byte_9 = u8(random + 1u);
    SearchCand_5___SearchCand(r4, r6);
    u32 r5 = 0xffu;
    fill_4_bytes(r4 + 0xdu, r5);
    r0 = 0u;
    r2 = 7u;
    r1 = 0xfu;
    do {
        gptr<Local_0024c858_r3_3> r3_3 = gptr<Local_0024c858_r3_3>(r4 + (r0 << 2));
        res_1 = r2 - 1u;
        r2 = res_1;
        r3_3->byte_12 = u8(r1);
        r0 += 1u;
        r3_3->half_14 = u16(r6);
        guest::preempt();
    } while (res_1 != 0);
    u32 now_2 = game_time_now(r0);
    *gptr<u16>(r4 + 0x30u) = u16(*gptr<u32>(now_2));
    *gptr<u8>(r4 + 0x3cu) = u8(r5);
    *gptr<u8>(r4 + 0x58u) = 5;
    guest::cpu()->r[1] = 5u;
}

}  // namespace d_0024c858
GUEST_EXPORT_FRAMED(0x0024c858, d_0024c858::PlayerSchedule__reset, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024c8d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the player's record at +0x8a3c and its references.
namespace d_0024c8d4 {

struct __attribute__((packed)) PlayerRecord8a3c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u16 half_a;
    u8 byte_c;
    u32 word_d;
    u8 byte_11;
};
GUEST_OFFSET(PlayerRecord8a3c, word_0, 0x0);
GUEST_OFFSET(PlayerRecord8a3c, byte_8, 0x8);
GUEST_OFFSET(PlayerRecord8a3c, byte_9, 0x9);
GUEST_OFFSET(PlayerRecord8a3c, half_a, 0xa);
GUEST_OFFSET(PlayerRecord8a3c, byte_c, 0xc);
GUEST_OFFSET(PlayerRecord8a3c, word_d, 0xd);
GUEST_OFFSET(PlayerRecord8a3c, byte_11, 0x11);

struct __attribute__((packed)) Local_0024c8d4_r1_1 {
    u8 unknown_0[0x59];  // (not used here)
    u8 byte_59;
};
GUEST_OFFSET(Local_0024c8d4_r1_1, byte_59, 0x59);

struct __attribute__((packed)) Local_0024c8d4_r2_1 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_0024c8d4_r2_1, byte_12, 0x12);
GUEST_OFFSET(Local_0024c8d4_r2_1, half_14, 0x14);

inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;

void PlayerRecord8a3c__clear(gptr<PlayerRecord8a3c> player_record8a3c) {
    u32 r0 = player_record8a3c.addr();
    u32 res_1 = 0;
    u32 cf_1 = 0;
    u32 r4 = r0;
    u32 r5 = 0u;
    player_record8a3c->word_0 = r5;
    player_record8a3c->byte_8 = u8(r5);
    player_record8a3c->half_a = u16(r5);
    player_record8a3c->byte_9 = u8(r5);
    player_record8a3c->byte_c = 0xff;
    player_record8a3c->byte_11 = u8(r5);
    r0 = r5;
    u32 r1 = 7u;
    player_record8a3c->word_d = r5;
    do {
        gptr<Local_0024c8d4_r2_1> r2_1 = gptr<Local_0024c8d4_r2_1>(r4 + (r0 << 2));
        res_1 = r1 - 1u;
        r1 = res_1;
        r2_1->byte_12 = u8(r5);
        r0 += 1u;
        r2_1->half_14 = u16(r5);
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 + 0x2fu) = u8(r5);
    *gptr<u8>(r4 + 0x2eu) = u8(r5);
    *gptr<u32>(r4 + 0x34u) = r5;
    *gptr<u8>(r4 + 0x38u) = u8(r5);
    *gptr<u8>(r4 + 0x39u) = u8(r5);
    *gptr<u16>(r4 + 0x3au) = u16(r5);
    *gptr<u8>(r4 + 0x3cu) = u8(r5);
    *gptr<u8>(r4 + 0x3du) = u8(r5);
    *gptr<u16>(r4 + 0x3eu) = u16(r5);
    *gptr<u8>(r4 + 0x40u) = u8(r5);
    *gptr<u8>(r4 + 0x41u) = u8(r5);
    *gptr<u16>(r4 + 0x42u) = u16(r5);
    *gptr<u8>(r4 + 0x44u) = u8(r5);
    *gptr<u8>(r4 + 0x45u) = u8(r5);
    *gptr<u16>(r4 + 0x48u) = u16(r5);
    *gptr<u32>(r4 + 0x4cu) = r5;
    *gptr<u16>(r4 + 0x4au) = u16(r5);
    *gptr<u8>(r4 + 0x51u) = u8(r5);
    *gptr<u16>(r4 + 0x52u) = u16(r5);
    *gptr<u8>(r4 + 0x54u) = u8(r5);
    *gptr<u8>(r4 + 0x55u) = u8(r5);
    *gptr<u8>(r4 + 0x56u) = u8(u32(*gptr<u8>(r4 + 0x56u)) & ~0xfu);
    *gptr<u8>(r4 + 0x57u) = u8(r5);
    r0 = 0u;
    *gptr<u8>(r4 + 0x58u) = u8(r5);
    do {
        gptr<Local_0024c8d4_r1_1> r1_1 = gptr<Local_0024c8d4_r1_1>(r4 + r0);
        r1_1->byte_59 = u8(u32(r1_1->byte_59) & ~0xfu);
        do {
            r0 += 1u;
            cf_1 = r0 >= 0xeu;
            if (s32(r0) >= 0xe) {
                *gptr<u8>(r4 + 0x67u) = u8(r5);
                *gptr<u8>(r4 + 0x68u) = u8(r5);
                *gptr<u8>(r4 + 0x69u) = u8(r5);
                PlayerRef__clear(r4 + 0x6au);
                *gptr<u8>(r4 + 0x80u) = u8(u32(*gptr<u8>(r4 + 0x80u)) & ~7u);
                *gptr<u8>(r4 + 0x81u) = u8(u32(*gptr<u8>(r4 + 0x81u)) & ~1u);
                *gptr<u8>(r4 + 0x82u) = u8(r5);
                *gptr<u8>(r4 + 0x84u) = u8(r5);
                *gptr<u8>(r4 + 0x85u) = u8(r5);
                *gptr<u8>(r4 + 0x86u) = u8(r5);
                *gptr<u8>(r4 + 0x87u) = u8(r5);
                return;
            }
            guest::preempt();
        } while (cf_1);
        guest::preempt();
    } while (1);
}

}  // namespace d_0024c8d4
GUEST_EXPORT_FRAMED(0x0024c8d4, d_0024c8d4::PlayerRecord8a3c__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024d778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the schedule and its references, with a random count.
namespace d_0024d778 {

struct __attribute__((packed)) PlayerSchedule {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u16 half_a;
    u8 byte_c;
    u32 word_d;
    u8 byte_11;
};
GUEST_OFFSET(PlayerSchedule, word_0, 0x0);
GUEST_OFFSET(PlayerSchedule, byte_8, 0x8);
GUEST_OFFSET(PlayerSchedule, byte_9, 0x9);
GUEST_OFFSET(PlayerSchedule, half_a, 0xa);
GUEST_OFFSET(PlayerSchedule, byte_c, 0xc);
GUEST_OFFSET(PlayerSchedule, word_d, 0xd);
GUEST_OFFSET(PlayerSchedule, byte_11, 0x11);

struct __attribute__((packed)) Local_0024d778_r1_2 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_0024d778_r1_2, byte_12, 0x12);
GUEST_OFFSET(Local_0024d778_r1_2, half_14, 0x14);

struct __attribute__((packed)) Local_0024d778_r2_1 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_0024d778_r2_1, byte_12, 0x12);
GUEST_OFFSET(Local_0024d778_r2_1, half_14, 0x14);

inline constexpr guest::Function<0x0024c53c, u32(u32, u32)> SearchCand_5___SearchCand;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> PlayerRef__clear;
inline constexpr guest::Function<0x00779638, u32(u32, u32)> fill_4_bytes;

void PlayerSchedule__clear(gptr<PlayerSchedule> player_schedule, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = player_schedule.addr();
    u32 res_1 = 0;
    u32 cf_1 = 0;
    u32 res_2 = 0;
    u32 r5 = 0u;
    player_schedule->word_0 = r5;
    player_schedule->byte_8 = u8(r5);
    player_schedule->half_a = u16(r5);
    u32 r6 = 0xffu;
    player_schedule->byte_9 = u8(r5);
    player_schedule->byte_c = u8(r6);
    player_schedule->byte_11 = u8(r5);
    u32 r4 = r0;
    player_schedule->word_d = r5;
    u32 r1 = r5;
    r0 = 7u;
    do {
        gptr<Local_0024d778_r2_1> r2_1 = gptr<Local_0024d778_r2_1>(r4 + (r1 << 2));
        res_1 = r0 - 1u;
        r0 = res_1;
        r2_1->byte_12 = u8(r5);
        r1 += 1u;
        r2_1->half_14 = u16(r5);
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 + 0x2fu) = u8(r5);
    *gptr<u8>(r4 + 0x2eu) = u8(r5);
    *gptr<u32>(r4 + 0x34u) = r5;
    *gptr<u8>(r4 + 0x38u) = u8(r5);
    *gptr<u8>(r4 + 0x39u) = u8(r5);
    *gptr<u16>(r4 + 0x3au) = u16(r5);
    *gptr<u8>(r4 + 0x3cu) = u8(r5);
    *gptr<u8>(r4 + 0x3du) = u8(r5);
    *gptr<u16>(r4 + 0x3eu) = u16(r5);
    *gptr<u8>(r4 + 0x40u) = u8(r5);
    *gptr<u8>(r4 + 0x41u) = u8(r5);
    *gptr<u16>(r4 + 0x42u) = u16(r5);
    *gptr<u8>(r4 + 0x44u) = u8(r5);
    *gptr<u8>(r4 + 0x45u) = u8(r5);
    *gptr<u16>(r4 + 0x48u) = u16(r5);
    *gptr<u32>(r4 + 0x4cu) = r5;
    *gptr<u16>(r4 + 0x4au) = u16(r5);
    *gptr<u8>(r4 + 0x51u) = u8(r5);
    *gptr<u16>(r4 + 0x52u) = u16(r5);
    *gptr<u8>(r4 + 0x54u) = u8(r5);
    *gptr<u8>(r4 + 0x55u) = u8(r5);
    *gptr<u8>(r4 + 0x56u) = u8(u32(*gptr<u8>(r4 + 0x56u)) & ~0xfu);
    *gptr<u8>(r4 + 0x57u) = u8(r5);
    r0 = 0u;
    *gptr<u8>(r4 + 0x58u) = u8(r5);
    do {
        r1 = r4 + r0;
        u32 r2 = u32(*gptr<u8>(r1 + 0x59u)) & ~0xfu;
        *gptr<u8>(r1 + 0x59u) = u8(r2);
        do {
            r0 += 1u;
            cf_1 = r0 >= 0xeu;
            if (s32(r0) >= 0xe) {
                *gptr<u8>(r4 + 0x67u) = u8(r5);
                *gptr<u8>(r4 + 0x68u) = u8(r5);
                *gptr<u8>(r4 + 0x69u) = u8(r5);
                PlayerRef__clear(r4 + 0x6au, r1, r2, r3);
                *gptr<u8>(r4 + 0x80u) = u8(u32(*gptr<u8>(r4 + 0x80u)) & ~7u);
                *gptr<u8>(r4 + 0x81u) = u8(u32(*gptr<u8>(r4 + 0x81u)) & ~1u);
                *gptr<u8>(r4 + 0x82u) = u8(r5);
                *gptr<u8>(r4 + 0x86u) = u8(r5);
                *gptr<u8>(r4 + 0x87u) = u8(r5);
                u32 random = random_below(0xau);
                *gptr<u8>(r4 + 9u) = u8(random + 1u);
                *gptr<u8>(r4 + 0xcu) = u8(r5);
                SearchCand_5___SearchCand(r4, 0u);
                fill_4_bytes(r4 + 0xdu, r6);
                r0 = 0u;
                r2 = 7u;
                r3 = 0xfu;
                do {
                    gptr<Local_0024d778_r1_2> r1_2 = gptr<Local_0024d778_r1_2>(r4 + (r0 << 2));
                    res_2 = r2 - 1u;
                    r2 = res_2;
                    r1_2->byte_12 = u8(r3);
                    r0 += 1u;
                    r1_2->half_14 = u16(r5);
                    guest::preempt();
                } while (res_2 != 0);
                u32 now_2 = game_time_now(r0);
                *gptr<u16>(r4 + 0x30u) = u16(*gptr<u32>(now_2));
                *gptr<u8>(r4 + 0x3cu) = u8(r6);
                *gptr<u8>(r4 + 0x58u) = 5;
                guest::cpu()->r[1] = 5u;
                return;
            }
            guest::preempt();
        } while (cf_1);
        guest::preempt();
    } while (1);
}

}  // namespace d_0024d778
GUEST_EXPORT_FRAMED(0x0024d778, d_0024d778::PlayerSchedule__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024d8fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the record and its references.
namespace d_0024d8fc {

struct __attribute__((packed)) PlayerRecord42 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u16 half_a;
    u8 byte_c;
    u32 word_d;
    u8 byte_11;
    u8 unknown_12[0x1c];  // (not used here)
    u8 byte_2e;
    u8 byte_2f;
    u16 half_30;
    u16 half_32;
    u32 word_34;
    u8 byte_38;
    u8 byte_39;
    u16 half_3a;
    u8 byte_3c;
    u8 byte_3d;
    u16 half_3e;
    u8 byte_40;
    u8 byte_41;
    u16 half_42;
    u8 byte_44;
    u8 byte_45;
    u16 half_46;
    u16 half_48;
    u16 half_4a;
    u32 word_4c;
    u8 byte_50;
    u8 byte_51;
    u16 half_52;
    u8 byte_54;
    u8 byte_55;
    u8 byte_56;
    u8 byte_57;
    u8 byte_58;
    u8 unknown_59[0xe];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
    u8 unknown_6a[0x16];  // (not used here)
    u8 byte_80;
    u8 byte_81;
    u8 byte_82;
    u8 unknown_83[0x1];  // (not used here)
    u8 byte_84;
    u8 byte_85;
    u8 byte_86;
    u8 byte_87;
};
GUEST_OFFSET(PlayerRecord42, word_0, 0x0);
GUEST_OFFSET(PlayerRecord42, word_4, 0x4);
GUEST_OFFSET(PlayerRecord42, byte_8, 0x8);
GUEST_OFFSET(PlayerRecord42, byte_9, 0x9);
GUEST_OFFSET(PlayerRecord42, half_a, 0xa);
GUEST_OFFSET(PlayerRecord42, byte_c, 0xc);
GUEST_OFFSET(PlayerRecord42, word_d, 0xd);
GUEST_OFFSET(PlayerRecord42, byte_11, 0x11);
GUEST_OFFSET(PlayerRecord42, byte_2e, 0x2e);
GUEST_OFFSET(PlayerRecord42, byte_2f, 0x2f);
GUEST_OFFSET(PlayerRecord42, half_30, 0x30);
GUEST_OFFSET(PlayerRecord42, half_32, 0x32);
GUEST_OFFSET(PlayerRecord42, word_34, 0x34);
GUEST_OFFSET(PlayerRecord42, byte_38, 0x38);
GUEST_OFFSET(PlayerRecord42, byte_39, 0x39);
GUEST_OFFSET(PlayerRecord42, half_3a, 0x3a);
GUEST_OFFSET(PlayerRecord42, byte_3c, 0x3c);
GUEST_OFFSET(PlayerRecord42, byte_3d, 0x3d);
GUEST_OFFSET(PlayerRecord42, half_3e, 0x3e);
GUEST_OFFSET(PlayerRecord42, byte_40, 0x40);
GUEST_OFFSET(PlayerRecord42, byte_41, 0x41);
GUEST_OFFSET(PlayerRecord42, half_42, 0x42);
GUEST_OFFSET(PlayerRecord42, byte_44, 0x44);
GUEST_OFFSET(PlayerRecord42, byte_45, 0x45);
GUEST_OFFSET(PlayerRecord42, half_46, 0x46);
GUEST_OFFSET(PlayerRecord42, half_48, 0x48);
GUEST_OFFSET(PlayerRecord42, half_4a, 0x4a);
GUEST_OFFSET(PlayerRecord42, word_4c, 0x4c);
GUEST_OFFSET(PlayerRecord42, byte_50, 0x50);
GUEST_OFFSET(PlayerRecord42, byte_51, 0x51);
GUEST_OFFSET(PlayerRecord42, half_52, 0x52);
GUEST_OFFSET(PlayerRecord42, byte_54, 0x54);
GUEST_OFFSET(PlayerRecord42, byte_55, 0x55);
GUEST_OFFSET(PlayerRecord42, byte_56, 0x56);
GUEST_OFFSET(PlayerRecord42, byte_57, 0x57);
GUEST_OFFSET(PlayerRecord42, byte_58, 0x58);
GUEST_OFFSET(PlayerRecord42, byte_67, 0x67);
GUEST_OFFSET(PlayerRecord42, byte_68, 0x68);
GUEST_OFFSET(PlayerRecord42, byte_69, 0x69);
GUEST_OFFSET(PlayerRecord42, byte_80, 0x80);
GUEST_OFFSET(PlayerRecord42, byte_81, 0x81);
GUEST_OFFSET(PlayerRecord42, byte_82, 0x82);
GUEST_OFFSET(PlayerRecord42, byte_84, 0x84);
GUEST_OFFSET(PlayerRecord42, byte_85, 0x85);
GUEST_OFFSET(PlayerRecord42, byte_86, 0x86);
GUEST_OFFSET(PlayerRecord42, byte_87, 0x87);

struct __attribute__((packed)) Local_0024d8fc_r3_1 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_0024d8fc_r3_1, byte_12, 0x12);
GUEST_OFFSET(Local_0024d8fc_r3_1, half_14, 0x14);

inline constexpr guest::Function<0x0030589c, u32(u32, u32)> PlayerRef__clear;

u32 PlayerRecord42__clear(gptr<PlayerRecord42> player_record42) {
    u32 r0 = player_record42.addr();
    u32 res_1 = 0;
    u32 cf_1 = 0;
    u32 r4 = r0;
    r0 = 0u;
    player_record42->word_0 = r0;
    player_record42->word_4 = r0;
    player_record42->byte_8 = u8(r0);
    player_record42->byte_9 = 0x80;
    player_record42->half_a = u16(r0);
    player_record42->byte_c = 0xff;
    player_record42->byte_11 = u8(r0);
    player_record42->byte_2e = u8(r0);
    player_record42->byte_2f = u8(r0);
    player_record42->half_30 = u16(r0);
    player_record42->half_32 = u16(r0);
    player_record42->word_34 = r0;
    player_record42->byte_38 = u8(r0);
    player_record42->byte_39 = u8(r0);
    player_record42->half_3a = u16(r0);
    player_record42->byte_3c = 0xff;
    player_record42->byte_3d = u8(r0);
    player_record42->half_3e = u16(r0);
    player_record42->byte_40 = u8(r0);
    player_record42->byte_41 = 1;
    player_record42->half_42 = u16(r0);
    player_record42->byte_44 = u8(r0);
    player_record42->byte_45 = u8(r0);
    player_record42->half_46 = u16(r0);
    player_record42->half_48 = u16(r0);
    player_record42->half_4a = u16(r0);
    player_record42->word_4c = r0;
    player_record42->byte_50 = u8(r0);
    player_record42->byte_51 = u8(r0);
    player_record42->half_52 = u16(r0);
    player_record42->byte_54 = u8(r0);
    player_record42->byte_55 = u8(r0);
    player_record42->byte_56 = u8(r0);
    player_record42->byte_57 = u8(r0);
    player_record42->byte_58 = 5;
    player_record42->byte_67 = u8(r0);
    player_record42->byte_68 = u8(r0);
    player_record42->byte_69 = u8(r0);
    player_record42->byte_80 = u8(r0);
    player_record42->byte_81 = u8(r0);
    player_record42->byte_82 = u8(r0);
    player_record42->byte_84 = u8(r0);
    player_record42->byte_85 = u8(r0);
    player_record42->byte_86 = u8(r0);
    player_record42->byte_87 = u8(r0);
    u32 r2 = 0u;
    u32 r1 = 7u;
    player_record42->word_d = r0;
    do {
        gptr<Local_0024d8fc_r3_1> r3_1 = gptr<Local_0024d8fc_r3_1>(r4 + (r2 << 2));
        res_1 = r1 - 1u;
        r1 = res_1;
        r3_1->byte_12 = u8(r0);
        r2 += 1u;
        r3_1->half_14 = u16(r0);
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u16>(r4 + 0x52u) = u16(r0);
    *gptr<u8>(r4 + 0x54u) = u8(r0);
    *gptr<u8>(r4 + 0x55u) = u8(r0);
    r0 = 0u;
    do {
        r1 = r4 + r0;
        *gptr<u8>(r1 + 0x59u) = u8(u32(*gptr<u8>(r1 + 0x59u)) & ~0xfu);
        do {
            r0 += 1u;
            cf_1 = r0 >= 0xeu;
            if (s32(r0) >= 0xe) {
                PlayerRef__clear(r4 + 0x6au, r1);
                return r4;
            }
            guest::preempt();
        } while (cf_1);
        guest::preempt();
    } while (1);
}

}  // namespace d_0024d8fc
GUEST_EXPORT_FRAMED(0x0024d8fc, d_0024d8fc::PlayerRecord42__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024dbb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a 0x1228-byte entry.
namespace d_0024dbb0 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;

u32 copy_1228_bytes() {
    return copy_bytes_small_sizes_first(guest::cpu()->r[0], guest::cpu()->r[1], 0x1228u, guest::cpu()->r[3]);
}

}  // namespace d_0024dbb0
GUEST_EXPORT(0x0024dbb0, d_0024dbb0::copy_1228_bytes);

// f_0024dbc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the 0x1228-byte entry for its index: its options and its 6 outfits (default items of the index from
// 0x95c2d8).
namespace d_0024dbc0 {

struct __attribute__((packed)) Local_0024dbc0_r0_8 {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Local_0024dbc0_r0_8, half_0, 0x0);
GUEST_OFFSET(Local_0024dbc0_r0_8, byte_2, 0x2);

inline constexpr u32 global_0095c2d8_address = 0x0095c2d8u;
inline constexpr guest::Function<0x002d4d30, u32(u32, u32)> RoomLayout__set_wallpaper;
inline constexpr guest::Function<0x002d4f3c, u32(u32, u32, u32)> RoomLayout__clear;
inline constexpr guest::Function<0x002d5184, u32(u32, u32)> RoomLayout__set_floor;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x0032cc68, u32(u32, u32, u32, u32)> OptionBytes2__reset_b;

void Block1228__reset(u32 block1228, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r6 = block1228;
    OptionBytes2__reset_b(block1228, r1, r2, guest::cpu()->r[3]);
    r2 = global_0095c2d8_address;
    u32 r0_1 = r1 * 3u;
    u32 i = 0u;
    r1 = r2 + 0x30u;
    u32 r8 = r2 + (r0_1 << 2);
    u32 r7 = r1 + (r0_1 << 2);
    do {
        u32 r5_1 = r6 + (i * 0x81u + (i << 8) << 1);
        RoomLayout__clear(r5_1 + 0x18u, r1, r2);
        u32 r1_1 = gptr<u16>(r8)[i];
        construct_item(frame.at(0).addr(), r1_1);
        RoomLayout__set_wallpaper(r5_1 + 0x18u, frame.at(0).addr());
        u32 r1_3 = gptr<u16>(r7)[i];
        construct_item(frame.at(4).addr(), r1_3);
        RoomLayout__set_floor(r5_1 + 0x18u, frame.at(4).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        i += 1u;
        guest::preempt();
    } while (i < 6u);
    *gptr<u8>(r6 + 0x36u) = 0;
    gptr<Local_0024dbc0_r0_8> r0_8 = gptr<Local_0024dbc0_r0_8>((r6 + 0x1000u) + 0x224u);
    r0_8->half_0 = 0;
    r0_8->byte_2 = 0x1e;
    guest::cpu()->r[1] = 0x1eu;
}

}  // namespace d_0024dbc0
GUEST_EXPORT_FRAMED(0x0024dbc0, d_0024dbc0::Block1228__reset, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_0024dcc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the entry's options, its 6 outfits and its trailing record.
namespace d_0024dcc0 {

inline constexpr guest::Function<0x001de8fc, u32(u32)> store_constants_1de8fc;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0032ccb0, u32(u32, u32, u32, u32)> OptionBytes2__OptionBytes2;

u32 Block1228__construct(u32 block1228, u32 r1, u32 r2, u32 r3) {
    OptionBytes2__OptionBytes2(block1228, r1, r2, r3);
    u32 r0_2 = for_each_element(block1228 + 0x18u, 0x2d5278u, 0x302u, 6u);
    store_constants_1de8fc(r0_2 + 0x120cu);
    return r0_2 - 0x18u;
}

}  // namespace d_0024dcc0
GUEST_EXPORT_FRAMED(0x0024dcc0, d_0024dcc0::Block1228__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024dcf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the 0x28 bytes and sets the last byte to 0xff.
namespace d_0024dcf8 {

struct __attribute__((packed)) Record29b {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Record29b, byte_28, 0x28);

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

void Record29b__clear(gptr<Record29b> record29b) {
    clear(record29b.addr(), 0x28u);
    record29b->byte_28 = 0xff;
}

}  // namespace d_0024dcf8
GUEST_EXPORT_FRAMED(0x0024dcf8, d_0024dcf8::Record29b__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024dd14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the 0x28 bytes and sets the last byte to 0xff.
namespace d_0024dd14 {

struct __attribute__((packed)) Record29b {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Record29b, byte_28, 0x28);

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

void Record29b__construct(gptr<Record29b> record29b) {
    clear(record29b.addr(), 0x28u);
    record29b->byte_28 = 0xff;
}

}  // namespace d_0024dd14
GUEST_EXPORT_FRAMED(0x0024dd14, d_0024dd14::Record29b__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024dda0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Swaps two bytes of the array.
namespace d_0024dda0 {


void swap_bytes(u32 r0, u32 r1, u32 r2) {
    u32 r3_1 = *gptr<u8>(r0 + r1);
    *gptr<u8>(r0 + r1) = *gptr<u8>(r0 + r2);
    *gptr<u8>(r0 + r2) = u8(r3_1);
}

}  // namespace d_0024dda0
GUEST_EXPORT(0x0024dda0, d_0024dda0::swap_bytes);

// f_0024ddb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the id in the first free (0xffff) of the 6 id slots (+4).
namespace d_0024ddb4 {


u32 IdSlots6__add(u32 id_slots6, u32 r1) {
    u32 r3 = 0xffffu;
    u32 i = 0u;
    do {
        if (*gptr<u16>(id_slots6 + (i << 1) + 4u) == r3) {
            u32 r0_1 = id_slots6 + (i << 1);
            *gptr<u16>(r0_1 + 4u) = u16(r1);
            return r0_1;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 6);
    return id_slots6;
}

}  // namespace d_0024ddb4
GUEST_EXPORT(0x0024ddb4, d_0024ddb4::IdSlots6__add);

// f_0024ddec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees the 6 id slots.
namespace d_0024ddec {


void IdSlots6__clear(u32 id_slots6) {
    u32 r3 = 0xffffu;
    u32 r2 = 0u;
    u32 r1 = r2;
    do {
        u32 r2_1 = r2 + 1u;
        r1 += 2u;
        *gptr<u16>((id_slots6 + (r2 << 1)) + 4u) = u16(r3);
        r2 = r2_1 + 1u;
        *gptr<u16>((id_slots6 + (r2_1 << 1)) + 4u) = u16(r3);
        guest::preempt();
    } while (s32(r1) < 6);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0024ddec
GUEST_EXPORT_FRAMED(0x0024ddec, d_0024ddec::IdSlots6__clear, 0x10);  // pushes {r4} first, as the original

// f_0024dea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the state byte; state 1 also updates the town's record and sets bit 4 of the flag at +0x62152.
namespace d_0024dea8 {

struct __attribute__((packed)) Local_0024dea8_r0_5 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Local_0024dea8_r0_5, byte_3, 0x3);

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x003035a4, u32(u32, u32)> TourResult__clear_score;

void set_state_and_flag_6214f(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = r1;
    if (r1 != 0 && r4_1 == 1u) {
        u32 data_base = get_data_base(r0, r1, r2, guest::cpu()->r[3]);
        u32 r0_3 = TourResult__clear_score(data_base + 0x7170cu, 5u);
        u32 data_base_2 = get_data_base(r0_3, 5u, r2, guest::cpu()->r[3]);
        gptr<Local_0024dea8_r0_5> r0_5 = gptr<Local_0024dea8_r0_5>(data_base_2 + 0x6214fu);
        r1 = u32(r0_5->byte_3) | 0x10u;
        r0_5->byte_3 = u8(r1);
    }
    *gptr<u8>(r0) = u8(r4_1);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0024dea8
GUEST_EXPORT_FRAMED(0x0024dea8, d_0024dea8::set_state_and_flag_6214f, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024defc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears sale slot `index` (below 4): its item, seller and price, marking it free.
namespace d_0024defc {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;

u32 SaleSlots4__clear(u32 sale_slots4, u32 r1, u32 r2) {
    if (r2 >= 4u) {
        return sale_slots4;
    }
    Item__copy(sale_slots4 + (r2 << 2), empty_item_address);
    clear_identity_with_flags(sale_slots4 + (r2 * 7u + (r2 << 4) << 1) + 0x14u);
    EncryptedInt__set(sale_slots4 + (r2 << 3) + 0xccu, 0u);
    u32 r1_1 = sale_slots4 + r2;
    *gptr<u8>(r1_1 + 0x10u) = 1;
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0024defc
GUEST_EXPORT_FRAMED(0x0024defc, d_0024defc::SaleSlots4__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024df54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the current player's item up for sale in the slot with its price.
namespace d_0024df54 {

struct __attribute__((packed)) Local_0024df54_ea_1 {
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
};
GUEST_OFFSET(Local_0024df54_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0024df54_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0024df54_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0024df54_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0024df54_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0024df54_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0024df54_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0024df54_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0024df54_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_0024df54_ea_1, word_24, 0x24);

struct __attribute__((packed)) Local_0024df54_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Local_0024df54_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0024df54_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0024df54_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_0024df54_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_0024df54_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_0024df54_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_0024df54_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_0024df54_ea_2, word_20, 0x20);
GUEST_OFFSET(Local_0024df54_ea_2, word_24, 0x24);

struct __attribute__((packed)) Local_0024df54_r0_12 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u16 half_14;
};
GUEST_OFFSET(Local_0024df54_r0_12, word_0, 0x0);
GUEST_OFFSET(Local_0024df54_r0_12, word_4, 0x4);
GUEST_OFFSET(Local_0024df54_r0_12, word_8, 0x8);
GUEST_OFFSET(Local_0024df54_r0_12, word_c, 0xc);
GUEST_OFFSET(Local_0024df54_r0_12, word_10, 0x10);
GUEST_OFFSET(Local_0024df54_r0_12, half_14, 0x14);

struct __attribute__((packed)) Local_0024df54_r0_2 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Local_0024df54_r0_2, byte_10, 0x10);

struct __attribute__((packed)) Local_0024df54_r1_3 {
    u8 unknown_0[0x38];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u16 half_4c;
};
GUEST_OFFSET(Local_0024df54_r1_3, word_38, 0x38);
GUEST_OFFSET(Local_0024df54_r1_3, word_3c, 0x3c);
GUEST_OFFSET(Local_0024df54_r1_3, word_40, 0x40);
GUEST_OFFSET(Local_0024df54_r1_3, word_44, 0x44);
GUEST_OFFSET(Local_0024df54_r1_3, word_48, 0x48);
GUEST_OFFSET(Local_0024df54_r1_3, half_4c, 0x4c);

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fe940, u32(u32, u32)> PersonalId__equals;
inline constexpr guest::Function<0x004e39c4, u32(u32, u32)> mark_furniture_at_in_scene_0x35;
inline constexpr guest::Function<0x006bb8c0, u32(u32, u32)> Item__set_flags_value_if_category_54_59;

u32 SaleSlots4__put(u32 sale_slots4, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 4u) {
        return sale_slots4;
    }
    gptr<Local_0024df54_ea_1> ea_1 = gptr<Local_0024df54_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r10;
    ea_1->word_20 = r11;
    ea_1->word_24 = r14;
    u32 r7_1 = sale_slots4 + (r2 << 2);
    u32 r8_1 = *frame.at<u32>(0x30);
    u32 r9_1 = *frame.at<u32>(0x28);
    Item__copy_b(frame.at(0).addr(), r7_1, r2, r3);
    gptr<Local_0024df54_r0_2> r0_2 = gptr<Local_0024df54_r0_2>(sale_slots4 + r2);
    u32 r1_1 = r0_2->byte_10;
    if (r1_1 == 0) {
        r0_2->byte_10 = 1;
        copy_46_bytes(sale_slots4 + ((r2 << 3) - r2 + (r2 << 4) << 1) + 0x14u, r8_1);
        u32 r0_4 = *current_player_data;
        if (r0_4 != 0) {
            u32 r0_6 = PersonalId__equals(r0_4 + 0x55a6u, r8_1);
            if (r0_6 != 0) {
                u32 player = get_current_player(r0_6);
                u32 data_base = get_data_base(Item__copy(player + 0x8f0eu, frame.at(0).addr()));
                u32 player_2 = get_current_player(data_base);
                gptr<Local_0024df54_r1_3> r1_3 = gptr<Local_0024df54_r1_3>(data_base + 0x62100u);
                gptr<Local_0024df54_r0_12> r0_12 = gptr<Local_0024df54_r0_12>(player_2 + 0x8f12u);
                r0_12->word_0 = r1_3->word_38;
                r0_12->word_4 = r1_3->word_3c;
                r0_12->word_8 = r1_3->word_40;
                r0_12->word_c = r1_3->word_44;
                r0_12->word_10 = r1_3->word_48;
                r0_12->half_14 = r1_3->half_4c;
            }
        }
        u32 scene_2 = current_scene_id(Item__set_flags_value_if_category_54_59(r7_1, 1u));
        r1_1 = guest::cpu()->r[1];
        if (scene_2 == r1) {
            mark_furniture_at_in_scene_0x35(r3, r9_1);
            r1_1 = guest::cpu()->r[1];
        }
    }
    gptr<Local_0024df54_ea_2> ea_2 = gptr<Local_0024df54_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_4;
    u32 r5_1 = ea_2->word_8;
    u32 r6_1 = ea_2->word_c;
    u32 r7_2 = ea_2->word_10;
    u32 r8_2 = ea_2->word_14;
    u32 r9_2 = ea_2->word_18;
    u32 r10_1 = ea_2->word_1c;
    u32 r11_1 = ea_2->word_20;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return frame.at(0).addr();
}

}  // namespace d_0024df54
GUEST_EXPORT(0x0024df54, d_0024df54::SaleSlots4__put);

// f_0024e500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears every sale slot of player `index` (its item, price and pattern) and the player's total.
namespace d_0024e500 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x003059f8, u32(u32)> Pattern__clear;

struct __attribute__((packed)) SaleSlots8ClearPlayerFrame {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(SaleSlots8ClearPlayerFrame, word_0, 0x0);
GUEST_SIZE(SaleSlots8ClearPlayerFrame, 0x20);

void SaleSlots8__clear_player(u32 sale_slots8, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SaleSlots8ClearPlayerFrame> frame;  // the original's stack frame
    u32 r0_1 = 0;
    frame->word_0 = r3;
    u32 r5 = sale_slots8;
    u32 r6 = r1;
    u32 i = 0u;
    u32 r8 = 0x2085u;
    u32 r7 = ~0u;
    do {
        if (i < 8u) {
            r0_1 = *gptr<s8>(r5 + i + 0x34u);
            if (s32(r0_1) >= 0 && s32(r0_1) < 4) {
                goto L_24e53c;
            }
        }
        r0_1 = r7;
L_24e53c:;
        if (r0_1 == r6) {
            u32 r0_2 = frame.at(0).addr();
            construct_item(r0_2, r8, r2, r3);
            u32 r2_1 = r5 + (i << 2) + 0x14u;
            Item__copy(r2_1, r0_2, r2_1);
            *gptr<u8>(r5 + i + 0x34u) = u8(r7);
            EncryptedInt__set(r5 + (i << 3) + 0x3cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
            Pattern__clear(r5 + i * 0xfu * 0x90u + 0x7cu);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 8);
    frame.release();
    EncryptedInt__set((r5 + (r6 << 3)) + 0x43fcu, 0u, r2, r3);
    return;
}

}  // namespace d_0024e500
GUEST_EXPORT(0x0024e500, d_0024e500::SaleSlots8__clear_player);

// f_0024e8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears every sale slot of villager `index` (owners 4 and up): its item, price and pattern.
namespace d_0024e8cc {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x003059f8, u32(u32)> Pattern__clear;

struct __attribute__((packed)) SaleSlots8ClearVillagerFrame {
    u32 word_0;
};
GUEST_OFFSET(SaleSlots8ClearVillagerFrame, word_0, 0x0);
GUEST_SIZE(SaleSlots8ClearVillagerFrame, 0x4);

void SaleSlots8__clear_villager(u32 sale_slots8, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SaleSlots8ClearVillagerFrame> frame;  // the original's stack frame
    u32 r0_2 = 0;
    frame->word_0 = r3;
    u32 r5 = sale_slots8 + 0x4650u;
    u32 r6 = r1;
    u32 i = 0u;
    u32 r8 = 0x2085u;
    u32 r7 = ~0u;
    do {
        if (i < 8u) {
            u32 r0_1 = *gptr<s8>(r5 + i + 0x34u);
            u32 nf_1 = r0_1 >> 0x1f;
            u32 vf_1 = (r0_1 & (r0_1 ^ r0_1)) >> 0x1f;
            if (nf_1 == vf_1) {
                nf_1 = r0_1 - 4u >> 0x1f;
                vf_1 = ((r0_1 ^ 4u) & (r0_1 ^ r0_1 - 4u)) >> 0x1f;
            }
            if (nf_1 == vf_1) {
                r0_2 = r0_1 - 4u;
                goto L_24e914;
            }
        }
        r0_2 = r7;
L_24e914:;
        if (r0_2 == r6) {
            u32 r0_3 = frame.at(0).addr();
            construct_item(r0_3, r8, r2, r3);
            u32 r2_1 = r5 + (i << 2) + 0x14u;
            Item__copy(r2_1, r0_3, r2_1);
            *gptr<u8>(r5 + i + 0x34u) = u8(r7);
            EncryptedInt__set(r5 + (i << 3) + 0x3cu, 0u);
            Pattern__clear(r5 + i * 0xfu * 0x90u + 0x7cu);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 8);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0024e8cc
GUEST_EXPORT_FRAMED(0x0024e8cc, d_0024e8cc::SaleSlots8__clear_villager, 0x43f0);  // pushes {i, r5, r6, r7, r8, r9, lr} first, as the original

// f_0024ee14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records which area kind (0xfa or 0xfb, by the town's mode at save +0x53480) the current player's cell is in, with
// its cell (0x985df0).
namespace d_0024ee14 {

inline guest::global<u32, 0x00985df0> player_area_value_a;
inline guest::global<u32, 0x00985df4> player_area_value_b;
inline guest::global<u8, 0x00985df8> player_area_kind;
inline guest::global<u32, 0x00985dfc> player_area_value_c;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x006cbcbc, u32(u32, u32, u32, u32)> current_player_without_flag_1;
inline constexpr guest::Function<0x006fa430, u32(u32, u32, u32, u32)> special_acre_spawn_position;

struct __attribute__((packed)) UpdatePlayerAreaKindFrame {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(UpdatePlayerAreaKindFrame, word_c, 0xc);
GUEST_OFFSET(UpdatePlayerAreaKindFrame, word_10, 0x10);
GUEST_SIZE(UpdatePlayerAreaKindFrame, 0x14);

u32 update_player_area_kind(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrameOf<UpdatePlayerAreaKindFrame> frame;  // the original's stack frame
    u32 r0_1 = *player_area_kind;
    if (r0_1 < 0xfcu) {
        *player_area_value_a = 0;
        r0_1 = 0xfcu;
        *player_area_value_b = 0;
        r2 = ~0u;
        *player_area_kind = u8(r0_1);
        *player_area_value_c = r2;
    }
    if (r1 == 0) {
        u32 r0_2 = current_player_without_flag_1(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_2 == 0) {
            return r0_2;
        }
    }
    u32 r0_3 = *player_area_kind;
    if (r0_3 < 0xfcu) {
        u32 save_data = get_save_data(r0_3, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 zf_1 = *gptr<u8>(save_data + 0x53480u) == 1u;
        u32 r0_5 = *player_area_kind;
        if (zf_1) {
            if (r0_5 == 0xfau) {
                return r0_5;
            }
        } else if (r0_5 == 0xfbu) {
            return r0_5;
        }
    }
    special_acre_spawn_position(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r2_1 = frame.at(0).addr();
    u32 r1_1 = frame.at(0x10).addr();
    frame->word_c = 0;
    frame->word_10 = 0;
    u32 r0_8 = position_to_cell(frame.at(0xc).addr(), r1_1, r2_1);
    u32 save_data_2 = get_save_data(r0_8, r1_1, r2_1, guest::cpu()->r[3]);
    if (*gptr<u8>(save_data_2 + 0x53480u) != 1u) {
        *player_area_value_a = frame->word_c;
        u32 r1_2 = frame->word_10;
        *player_area_value_b = r1_2;
        *player_area_kind = 0xfb;
        *player_area_value_c = 0;
        guest::cpu()->r[1] = r1_2;
        return 0xfbu;
    }
    *player_area_value_a = frame->word_c;
    u32 r1_3 = frame->word_10;
    *player_area_value_b = r1_3;
    *player_area_kind = 0xfa;
    *player_area_value_c = 0;
    guest::cpu()->r[1] = r1_3;
    return 0xfau;
}

}  // namespace d_0024ee14
GUEST_EXPORT_FRAMED(0x0024ee14, d_0024ee14::update_player_area_kind, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0024ef38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the village special book: clears the player area values.
namespace d_0024ef38 {

inline constexpr u32 vtable_VillageSpBook = 0x008ee8e8u;
inline guest::global<u32, 0x00985df0> player_area_value_a;
inline guest::global<u32, 0x00985df4> player_area_value_b;
inline guest::global<u8, 0x00985df8> player_area_kind;
inline guest::global<u32, 0x00985dfc> player_area_value_c;

void VillageSpBook__VillageSpBook(gptr<VillageSpBook> village_sp_book) {
    village_sp_book->vtable = vtable_VillageSpBook;
    *player_area_value_a = 0;
    *player_area_value_b = 0;
    *player_area_kind = 0xfc;
    *player_area_value_c = ~0u;
}

}  // namespace d_0024ef38
GUEST_EXPORT(0x0024ef38, d_0024ef38::VillageSpBook__VillageSpBook);

// f_0024f010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the category 0x48 items of the letter id from the player's 4 letter slots, refreshing their views when
// asked.
namespace d_0024f010 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 letter_item_params_address = 0x009845b8u;
inline constexpr guest::Function<0x0014f92c, u32(u32, u32, u32)> import_thunk_14f92c;
inline constexpr guest::Function<0x002a7190, u32(u32, u32, u32)> PlayerOutfits4__outfit_at;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x00303110, u32(u32, u32, u32)> slot_2_if_class_3_00303110;
inline constexpr guest::Function<0x003031f0, u32(u32)> item_if_class_1;
inline constexpr guest::Function<0x0076aa40, u32(u32)> item_category_is_48;
inline constexpr guest::Function<0x0076bac4, u32(u32)> Item__size_kind;

void Player__remove_letter_items(u32 player, u32 r1, u32 r2) {
    u32 r6 = r1;
    u32 r7 = r2;
    u32 player_3 = player_for_slot(player, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r10 = letter_item_params_address;
    u32 i = 0u;
    u32 player_outfits4 = player_3 + 0x5544u;
    do {
        u32 outfit_2 = PlayerOutfits4__outfit_at(player_outfits4, i, r2);
        u32 r5_1 = 0u;
        if (item_category_is_48(item_if_class_1(outfit_2)) != 0) {
            u32 size_kind_2 = Item__size_kind(item_if_class_1(outfit_2));
            if (size_kind_2 == r6) {
                Item__copy(outfit_2, empty_item_address, guest::cpu()->r[2]);
                r5_1 = 1u;
            }
        }
        u32 r0_8 = item_category_is_48(slot_2_if_class_3_00303110(outfit_2, guest::cpu()->r[1], guest::cpu()->r[2]));
        r2 = guest::cpu()->r[2];
        if (r0_8 != 0) {
            r0_8 = Item__size_kind(slot_2_if_class_3_00303110(outfit_2, guest::cpu()->r[1], r2));
            r2 = guest::cpu()->r[2];
            if (r0_8 == r6) {
                r0_8 = Item__copy(outfit_2 + 8u, empty_item_address, r2);
                r2 = guest::cpu()->r[2];
                r5_1 = 1u;
            }
        }
        u32 zf_1 = (r7 & r5_1) == 0;
        if (!zf_1) {
            r0_8 = gptr<u32>(r10)[i];
            zf_1 = r0_8 == 0;
        }
        if (!zf_1) {
            import_thunk_14f92c(r0_8, guest::cpu()->r[1], r2);
            r2 = guest::cpu()->r[2];
        }
        i += 1u;
        guest::preempt();
    } while (i < 4u);
}

}  // namespace d_0024f010
GUEST_EXPORT_FRAMED(0x0024f010, d_0024f010::Player__remove_letter_items, 0x47f0);  // pushes {i, r5, r6, r7, r8, player_outfits4, r10, lr} first, as the original

// f_0024f238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// An insect's pre-execute step: the actor's, then its flight when flying.
namespace d_0024f238 {

inline constexpr guest::Function<0x0057b990, u32(u32, u32, u32, u32)> Actor__pre_execute;
inline constexpr guest::Function<0x006b0d98, u32(u32)> InsectFlight__update;

u32 AcInsectCommon__pre_execute(gptr<AcInsectCommon> ac_insect_common) {
    u32 r0_1 = Actor__pre_execute(ac_insect_common.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    if (ac_insect_common->byte_110 != 0) {
        InsectFlight__update(ac_insect_common.addr() + 0xccu);
    }
    return 1u;
}

}  // namespace d_0024f238
GUEST_EXPORT_FRAMED(0x0024f238, d_0024f238::AcInsectCommon__pre_execute, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024f400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the actor sound object from its parameters, with its listener and cleared fade.
namespace d_0024f400 {

struct __attribute__((packed)) SoundObjActor {
    u32 word_0;
    u8 unknown_4[0xc5];  // (not used here)
    u8 byte_c9;
    u8 unknown_ca[0x46];  // (not used here)
    u8 byte_110;
    u8 unknown_111[0x3];  // (not used here)
    float float_114;
    float float_118;
    u8 byte_11c;
};
GUEST_OFFSET(SoundObjActor, word_0, 0x0);
GUEST_OFFSET(SoundObjActor, byte_c9, 0xc9);
GUEST_OFFSET(SoundObjActor, byte_110, 0x110);
GUEST_OFFSET(SoundObjActor, float_114, 0x114);
GUEST_OFFSET(SoundObjActor, float_118, 0x118);
GUEST_OFFSET(SoundObjActor, byte_11c, 0x11c);

struct __attribute__((packed)) SoundObjActorConstructArg1 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(SoundObjActorConstructArg1, word_0, 0x0);
GUEST_OFFSET(SoundObjActorConstructArg1, word_c, 0xc);

inline constexpr guest::Function<0x001f4fec, u32(u32, u32, u32, u32)> ActorBase__construct;
inline constexpr guest::Function<0x002d59d4, u32(u32, u32)> SoundObjInsectFish__construct_derived;
inline constexpr guest::Function<0x006b1468, u32(u32, u32, u32)> SoundListener__construct;

u32 SoundObjActor__construct(gptr<SoundObjActor> sound_obj_actor, gptr<SoundObjActorConstructArg1> arg1, u32 r2, float S0) {
    ActorBase__construct(sound_obj_actor.addr(), arg1.addr() + 4u, r2, guest::cpu()->r[3]);
    u32 r1_2 = arg1->word_0;
    sound_obj_actor->word_0 = r1_2;
    u32 r1_3 = *gptr<u32>(r1_2 - 0xcu);
    u32 r2_1 = arg1->word_c;
    *gptr<u32>(sound_obj_actor.addr() + r1_3) = r2_1;
    sound_obj_actor->byte_c9 = 0;
    SoundListener__construct(sound_obj_actor.addr() + 0xccu, r1_3, r2_1);
    float S0_2 = 0.0f;
    sound_obj_actor->byte_110 = 1;
    sound_obj_actor->float_114 = S0_2;
    sound_obj_actor->float_118 = S0_2;
    sound_obj_actor->byte_11c = 0;
    guest::cpu()->s[0] = S0_2;
    return SoundObjInsectFish__construct_derived(sound_obj_actor.addr() + 0x120u, 1u) - 0x120u;
}

}  // namespace d_0024f400
GUEST_EXPORT_FRAMED(0x0024f400, d_0024f400::SoundObjActor__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024f70c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls handler `index` of the table at 0x8452f8.
namespace d_0024f70c {


u32 call_handler_8452f8(u32 r0_unused, u32 r1) {
    u32 r1_1 = gptr<u32>(0x8452f8u)[r1];
    return guest::call_address<u32>(r1_1, guest::cpu()->r[0], r1_1, 0x8452f8u, guest::cpu()->r[3]);
}

}  // namespace d_0024f70c
GUEST_EXPORT(0x0024f70c, d_0024f70c::call_handler_8452f8);

// f_0024fbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the sound at the position (converted by the camera) and marks it playing.
namespace d_0024fbd4 {

struct __attribute__((packed)) SoundObjPlayerPlayAtArg0 {
    u8 unknown_0[0xc4];  // (not used here)
    u8 byte_c4;
};
GUEST_OFFSET(SoundObjPlayerPlayAtArg0, byte_c4, 0xc4);

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> camera_transform_point;
inline constexpr guest::Function<0x00277d98, u32(u32, u32, u32)> SoundObjPlayer__start;

void SoundObjPlayer__play_at(gptr<SoundObjPlayerPlayAtArg0> sound_obj_player, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    camera_transform_point(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    SoundObjPlayer__start(sound_obj_player.addr(), r1, frame.at(0).addr());
    sound_obj_player->byte_c4 = 1;
}

}  // namespace d_0024fbd4
GUEST_EXPORT_FRAMED(0x0024fbd4, d_0024fbd4::SoundObjPlayer__play_at, 0x4030);  // pushes {r4, r5, lr} first, as the original
