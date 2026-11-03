// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00200a6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200a6c {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) Frame_00200a6c {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00200a6c, object_0_vtable, 0x0);
GUEST_OFFSET(Frame_00200a6c, word_4, 0x4);
GUEST_SIZE(Frame_00200a6c, 0xc);

u32 sead__SafeStringBase_char___SafeStringBase_00200a6c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00200a6c> frame;  // the original's stack frame
    u32 zf_1 = r1 == 0;
    if (!zf_1) {
        zf_1 = r2 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    frame->word_4 = r1;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char_;
    u32 r0_1 = load_split_start(r0, frame.at(0).addr(), r2, 0u);
    return r0_1;
}

}  // namespace d_00200a6c
GUEST_EXPORT_FRAMED(0x00200a6c, d_00200a6c::sead__SafeStringBase_char___SafeStringBase_00200a6c, 0x4000);  // pushes {lr} first, as the original

// f_00200ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200ab0 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> destroy_load_split_base_part;

void destroy_load_split_base_part_veneer() {
    destroy_load_split_base_part(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00200ab0
GUEST_EXPORT(0x00200ab0, d_00200ab0::destroy_load_split_base_part_veneer);

// f_00200ab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the item layout entries (6 bytes each) of variant `index` of the table (+0xd0) into the buffer when it fits;
// their count, or 0.
namespace d_00200ab4 {

struct __attribute__((packed)) ItemLayoutTable {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
};
GUEST_OFFSET(ItemLayoutTable, word_d0, 0xd0);

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;

u32 ItemLayoutTable__read_entries(gptr<ItemLayoutTable> item_layout_table, u32 r1, u32 r2, u32 r3) {
    u32 r0 = item_layout_table.addr();
    u32 res_2 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    if (item_layout_table->word_d0 != 0) {
        u32 r12_1 = item_layout_table->word_d0;
        r0 = 0u;
        u32 r4 = *gptr<u8>(r12_1 + r3 + 2u);
        r1 = u32(*gptr<u16>(item_layout_table->word_d0)) + 2u;
        u32 r8 = (r4 + (r4 << 1)) << 1;
        if (r3 != 0) {
            u32 r12 = r12_1 + 1u;
            if ((r3 & 1u) != 0) {
                u32 ea_2 = r12 + 1u;
                r12 = ea_2;
                r0 = *gptr<u8>(ea_2);
            }
            u32 res_1 = r3 >> 1;
            r3 = res_1;
            u32 r5 = 0u;
            if (res_1 != 0) {
                do {
                    u32 r9_1 = *gptr<u8>(r12 + 1u);
                    u32 ea_4 = r12 + 2u;
                    r12 = ea_4;
                    u32 r10_1 = *gptr<u8>(ea_4);
                    res_2 = r3 - 1u;
                    r3 = res_2;
                    r0 += r9_1;
                    r5 += r10_1;
                    guest::preempt();
                } while (res_2 != 0);
            }
            r0 += r5;
        }
        u32 r3_1 = r4 + (r4 << 1);
        if (r2 >= r3_1 << 1) {
            copy_bytes_small_sizes_first(r7, *gptr<u32>(r6 + 0xd0u) + (r1 + (r0 + (r0 << 1) << 1)), r8, r3_1);  // (from the original)
            return r4;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00200ab4
GUEST_EXPORT_FRAMED(0x00200ab4, d_00200ab4::ItemLayoutTable__read_entries, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00200b64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200b64 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> destroy_load_split_base_part;
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> destroy_load_split;

u32 destroy_node_member(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    destroy_load_split_base_part(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return destroy_load_split(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00200b64
GUEST_EXPORT(0x00200b64, d_00200b64::destroy_node_member);

// f_00200b7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200b7c {

struct __attribute__((packed)) FieldBuilder {
    u32 vtable;
    u32 word_4;
};
GUEST_OFFSET(FieldBuilder, vtable, 0x0);
GUEST_OFFSET(FieldBuilder, word_4, 0x4);

inline constexpr u32 vtable_FieldBuilder = 0x008ed678u;

void FieldBuilder__FieldBuilder(gptr<FieldBuilder> field_builder, u32 r1) {
    field_builder->word_4 = r1;
    field_builder->vtable = vtable_FieldBuilder;
}

}  // namespace d_00200b7c
GUEST_EXPORT(0x00200b7c, d_00200b7c::FieldBuilder__FieldBuilder);

// f_00200b9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the items of the cell's layout variant (up to 0x600 bytes of entries) in the cell, keeping their top bits.
namespace d_00200b9c {

struct __attribute__((packed)) CellItems {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(CellItems, word_0, 0x0);
GUEST_OFFSET(CellItems, word_4, 0x4);

struct __attribute__((packed)) Object_00200b9c_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00200b9c_1, word_0, 0x0);
GUEST_OFFSET(Object_00200b9c_1, word_4, 0x4);

struct __attribute__((packed)) Local_00200b9c_r6_1 {
    u8 unknown_0[0x8];  // (not used here)
    u16 half_8;
    u16 half_a;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Local_00200b9c_r6_1, half_8, 0x8);
GUEST_OFFSET(Local_00200b9c_r6_1, half_a, 0xa);
GUEST_OFFSET(Local_00200b9c_r6_1, byte_c, 0xc);
GUEST_OFFSET(Local_00200b9c_r6_1, byte_d, 0xd);

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> ItemLayoutTable__read_entries;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x003117dc, u32(u32, u32, u32)> copy_item_with_top_bits;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> GridCellSmall__place_item;
inline constexpr guest::Function<0x00712600, u32(u32)> field_nonzero_712600;

struct __attribute__((packed)) Frame_00200b9c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 cell;
};
GUEST_OFFSET(Frame_00200b9c, word_0, 0x0);
GUEST_OFFSET(Frame_00200b9c, cell, 0x8);
GUEST_SIZE(Frame_00200b9c, 0xc);

void CellItems__place_from_layout(gptr<CellItems> cell_items, gptr<Object_00200b9c_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00200b9c> frame;  // the original's stack frame
    u32 r0 = cell_items.addr();
    u32 r1 = arg1.addr();
    u32 r5 = r0;
    u32 r0_1 = cell_items->word_0;
    if (r0_1 != 0) {
        u32 cell_2 = CellGrid__cell_at(r0_1, arg1->word_0, arg1->word_4, r3);
        frame->cell = cell_2;
        u32 r0_4 = field_nonzero_712600(cell_items->word_4);
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r3_2 = *gptr<u16>(frame->cell);
            u32 r0_6 = ItemLayoutTable__read_entries(cell_items->word_4, r5 + 8u, 0x600u, r3_2);  // (from the original)
            r1 = guest::cpu()->r[1];
            u32 r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 r7 = r0_6;
            u32 r4 = 0u;
            if (r0_6 >= 0u && r0_6 != 0) {
                u32 r11 = 0u;
                do {
                    gptr<Local_00200b9c_r6_1> r6_1 = gptr<Local_00200b9c_r6_1>(r5 + r4 * 6u);
                    u32 r8_1 = r6_1->half_8;
                    u32 r10_1 = r6_1->byte_c;
                    u32 r9_1 = r6_1->byte_d;
                    construct_item(frame.at(4).addr(), r8_1, r2, r3);
                    u32 r0_9 = item_has_valid_data(frame.at(4).addr());
                    if (r0_9 != 0) {
                        u32 r6_2 = u32(r6_1->half_a) >> 0xe;  // (from the original)
                        u32 r0_10 = frame.at(0).addr();
                        construct_item(r0_10, r8_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                        copy_item_with_top_bits(frame.at(4).addr(), r0_10, r6_2);
                    }
                    u32 r0_12 = frame->cell;
                    frame->word_0 = r11;
                    GridCellSmall__place_item(r0_12, frame.at(4).addr(), r10_1, r9_1);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < r7);
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00200b9c
GUEST_EXPORT_FRAMED(0x00200b9c, d_00200b9c::CellItems__place_from_layout, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00200ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the large cell's 0xa00-byte block from the shared layout of the cell's id.
namespace d_00200ca0 {

struct __attribute__((packed)) LargeCell {
    u32 word_0;
};
GUEST_OFFSET(LargeCell, word_0, 0x0);

struct __attribute__((packed)) Object_00200ca0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00200ca0_1, word_0, 0x0);
GUEST_OFFSET(Object_00200ca0_1, word_4, 0x4);

inline constexpr guest::Function<0x001c1fcc, u32(u32, u32)> SharedLayouts__block_of_id;
inline constexpr guest::Function<0x00304530, u32(u32)> shared_load_splits;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32, u32)> load_block_a00;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;

void LargeCell__load_from_layout(gptr<LargeCell> large_cell, gptr<Object_00200ca0_1> arg1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = large_cell->word_0;
    if (r0_1 != 0) {
        u32 cell_2 = CellGrid__cell_at(r0_1, arg1->word_0, arg1->word_4, guest::cpu()->r[3]);
        u32 large_cell_2 = GridMap__large_cell_at(large_cell->word_0, arg1->word_0, arg1->word_4);
        if (large_cell_2 != 0) {
            u32 r0_5 = *gptr<u16>(cell_2);
            u32 shared_layouts = shared_load_splits(r0_5);
            u32 block_2 = SharedLayouts__block_of_id(shared_layouts, r0_5);
            if (block_2 != 0) {
                frame.release();
                load_block_a00(large_cell_2, block_2, 0xa00u, guest::cpu()->r[3]);
                return;  // (from the original)
            }
        }
    }
}

}  // namespace d_00200ca0
GUEST_EXPORT(0x00200ca0, d_00200ca0::LargeCell__load_from_layout);

// f_00201ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Empties both layers of every tile of the cell.
namespace d_00201ea0 {

struct __attribute__((packed)) CellItems {
    u32 word_0;
};
GUEST_OFFSET(CellItems, word_0, 0x0);

struct __attribute__((packed)) Object_00201ea0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00201ea0_1, word_0, 0x0);
GUEST_OFFSET(Object_00201ea0_1, word_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0057bb98, u32(u32)> block_cell_rect;
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> GridCellSmall__place_item;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_00201ea0 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00201ea0, word_0, 0x0);
GUEST_OFFSET(Frame_00201ea0, word_10, 0x10);
GUEST_OFFSET(Frame_00201ea0, word_14, 0x14);
GUEST_SIZE(Frame_00201ea0, 0x2c);

void CellItems__clear(gptr<CellItems> cell_items, gptr<Object_00201ea0_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00201ea0> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 r0_1 = cell_items->word_0;
    if (r0_1 != 0) {
        u32 cell_2 = CellGrid__cell_at(r0_1, arg1->word_0, arg1->word_4, r3);
        u32 r5 = cell_2;
        if (cell_2 != 0) {
            u32 r0_3 = block_cell_rect(cell_2);
            make_end_grid_rect_iterator(frame.at(0x18).addr(), r0_3);  // (from the original)
            construct_grid_rect_iterator(frame.at(8).addr(), r0_3);
            u32 r0_7 = key_records_differ(frame.at(8).addr(), frame.at(0x18).addr());  // (from the original)
            if (r0_7 != 0) {
                u32 r6 = 0u;
                u32 r7 = 1u;
                do {
                    u32 r4_1 = frame->word_14;
                    u32 r2_6 = frame->word_10;
                    frame->word_0 = r6;
                    GridCellSmall__place_item(r5, empty_item_address, r2_6, r4_1);
                    u32 r4_2 = frame->word_14;
                    u32 r2_7 = frame->word_10;
                    frame->word_0 = r7;
                    GridCellSmall__place_item(r5, empty_item_address, r2_7, r4_2);
                    WrappingCursor__advance(frame.at(8).addr());
                    r0_10 = key_records_differ(frame.at(8).addr(), frame.at(0x18).addr());  // (from the original)
                    guest::preempt();
                } while (r0_10 != 0);
            }
        }
    }
}

}  // namespace d_00201ea0
GUEST_EXPORT_FRAMED(0x00201ea0, d_00201ea0::CellItems__clear, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00201fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates a grid rectangle and builds it (the 0x5814d0 builder); destroys it and gives null on failure.
namespace d_00201fa0 {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x005814d0, u32(u32, u32, u32, u32)> BlockMap__build_cells;
inline constexpr guest::Function<0x005817f0, u32(u32)> GridRect__visit_cells;
inline constexpr guest::Function<0x005819ec, u32(u32)> construct_quad_pair;

u32 create_grid_map_5814d0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 block = allocate_on_heap(0x38u, r0, 4u, r3);  // (from the original)
    u32 r0_2 = construct_quad_pair(block);
    if (r0_2 != 0) {
        u32 r0_3 = BlockMap__build_cells(r0_2, r0, r1, r2);
        r0_2 = r0_2;
        if (r0_3 == 0) {
            GridRect__visit_cells(r0_2);
            r0_2 = 0u;
        }
    }
    return r0_2;
}

}  // namespace d_00201fa0
GUEST_EXPORT_FRAMED(0x00201fa0, d_00201fa0::create_grid_map_5814d0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002021d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the tiles next to the kinds 0x21 and 0x20 in the 7 x 6 grid with 0x3d and 0x47.
namespace d_002021d4 {

struct __attribute__((packed)) Local_002021d4_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002021d4_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_002021d4_r0_2, word_4, 0x4);

inline constexpr u32 tile_tables_ready_address = 0x009825ecu;
inline constexpr u32 town_generator_grid_address = 0x00af8484u;
inline guest::global<u32, 0x009825ec> tile_tables_ready;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32)> zero_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_002021d4 {
    u8 unknown_0[0x18];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002021d4, word_18, 0x18);
GUEST_OFFSET(Frame_002021d4, word_1c, 0x1c);
GUEST_SIZE(Frame_002021d4, 0x24);

void mark_cliff_edges(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_002021d4> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 r4 = r0;
    if ((*tile_tables_ready & 1u) == 0) {
        u32 first_time = static_guard_acquire(tile_tables_ready_address, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        if (first_time != 0) {
            gptr<Local_002021d4_r0_2> r0_2 = gptr<Local_002021d4_r0_2>(frame.at(0x10).addr());  // (from the original)
            r0_2->word_0 = 6;
            r0_2->word_4 = 5;
            u32 r0_3 = zero_word_pair(r0_2.addr(), 6u, 5u);
            construct_word_quad_from_pairs(town_generator_grid_address, r0_3, r0_2.addr());
            r2 = 0x100000u;  // (from the original)
        }
    }
    make_end_grid_rect_iterator(frame.at(0).addr(), town_generator_grid_address, r2, guest::cpu()->r[3]);
    construct_grid_rect_iterator(frame.at(0x10).addr(), town_generator_grid_address);  // (from the original)
    u32 r0_7 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_7 != 0) {
        u32 r5 = 0x3du;  // (from the original)
        u32 r6 = 0x47u;  // (from the original)
        do {
            if (*gptr<u8>(frame->word_18 + (frame->word_1c * 7u + r4)) == 0x21u) {  // (from the original)
                *gptr<u8>(frame->word_18 + r4 + (frame->word_1c * 7u + 1u)) = u8(r5);
            }
            if (*gptr<u8>(frame->word_18 + (frame->word_1c * 7u + r4)) == 0x20u) {  // (from the original)
                *gptr<u8>((frame->word_18 + r4) + (frame->word_1c * 7u - 1u)) = u8(r6);
            }
            WrappingCursor__advance(frame.at(0x10).addr(), r1, r2);  // (from the original)
            r0_10 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_10 != 0);
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002021d4
GUEST_EXPORT_FRAMED(0x002021d4, d_002021d4::mark_cliff_edges, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00202370: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places random tiles of the kind in the 7 x 6 grid.
namespace d_00202370 {

struct __attribute__((packed)) Local_00202370_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00202370_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_00202370_r0_2, word_4, 0x4);

inline constexpr u32 tile_tables_ready_address = 0x009825ecu;
inline constexpr u32 town_generator_grid_address = 0x00af8484u;
inline guest::global<u32, 0x009825ec> tile_tables_ready;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> zero_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_00202370 {
    u8 unknown_0[0x18];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Frame_00202370, word_18, 0x18);
GUEST_OFFSET(Frame_00202370, word_1c, 0x1c);
GUEST_SIZE(Frame_00202370, 0x20);

void place_random_tiles_in_grid(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00202370> frame;  // the original's stack frame
    u32 r0_11 = 0;
    u32 r0_20 = 0;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r9 = r2;
    u32 r8 = r3;
    if ((*tile_tables_ready & 1u) == 0) {
        u32 first_time = static_guard_acquire(tile_tables_ready_address, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (first_time != 0) {
            gptr<Local_00202370_r0_2> r0_2 = gptr<Local_00202370_r0_2>(frame.at(0x10).addr());  // (from the original)
            r0_2->word_0 = 6;
            r0_2->word_4 = 5;
            u32 r0_3 = zero_word_pair(r0_2.addr(), 6u, 5u, r3);
            construct_word_quad_from_pairs(town_generator_grid_address, r0_3, r0_2.addr());
            r3 = guest::cpu()->r[3];
            r2 = 0x100000u;  // (from the original)
        }
    }
    u32 r10 = town_generator_grid_address;
    make_end_grid_rect_iterator(frame.at(0).addr(), r10, r2, r3);
    u32 r6 = 0u;
    construct_grid_rect_iterator(frame.at(0x10).addr(), r10);  // (from the original)
    u32 r0_7 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        do {
            u32 r7_1 = frame->word_18;
            u32 r0_8 = frame->word_1c;
            if (*gptr<u8>(r7_1 + ((r0_8 << 3) - r0_8 + r4)) == r5) {
                r6 += 1u;
            }
            WrappingCursor__advance(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
            r0_11 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_11 != 0);
    }
    u32 r7 = 0u;
    u32 r0_12 = Xorshift128__next_0055cb58(r8, r1, r2, r3);
    r6 = u64(r0_12) * r6 >> 0x20;  // (from the original)
    construct_grid_rect_iterator(frame.at(0x10).addr(), r10);  // (from the original)
    u32 r0_15 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_15 != 0) {
        do {
            u32 r8_1 = frame->word_18;
            u32 r0_16 = frame->word_1c;
            if (*gptr<u8>(r8_1 + ((r0_16 << 3) - r0_16 + r4)) == r5) {
                if (r7 != r6) {
                    r7 += 1u;
                } else {
                    u32 r0_17 = frame->word_1c;
                    *gptr<u8>(frame->word_18 + ((r0_17 << 3) - r0_17 + r4)) = u8(r9);
                    break;
                }
            }
            WrappingCursor__advance(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
            r0_20 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_20 != 0);
    }
}

}  // namespace d_00202370
GUEST_EXPORT_FRAMED(0x00202370, d_00202370::place_random_tiles_in_grid, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_002025bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates a grid rectangle and builds it with its buffer; destroys it and gives null on failure.
namespace d_002025bc {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x00581050, u32(u32, u32, u32, u32)> GridMap__create_with_buffer;
inline constexpr guest::Function<0x005817f0, u32(u32)> GridRect__visit_cells;
inline constexpr guest::Function<0x005819ec, u32(u32)> construct_quad_pair;

u32 create_grid_map_with_buffer(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 block = allocate_on_heap(0x38u, r0, 4u, r3);  // (from the original)
    u32 r0_2 = construct_quad_pair(block);
    if (r0_2 != 0) {
        u32 r0_3 = GridMap__create_with_buffer(r0_2, r0, r1, r2);
        r0_2 = r0_2;
        if (r0_3 == 0) {
            GridRect__visit_cells(r0_2);
            r0_2 = 0u;
        }
    }
    return r0_2;
}

}  // namespace d_002025bc
GUEST_EXPORT_FRAMED(0x002025bc, d_002025bc::create_grid_map_with_buffer, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002026e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates a grid rectangle and builds it (the 0x5810ac builder); destroys it and gives null on failure.
namespace d_002026e4 {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x005810ac, u32(u32, u32, u32, u32)> BlockMap__build_items;
inline constexpr guest::Function<0x005817f0, u32(u32)> GridRect__visit_cells;
inline constexpr guest::Function<0x005819ec, u32(u32)> construct_quad_pair;

struct __attribute__((packed)) Frame_002026e4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_002026e4, word_0, 0x0);
GUEST_SIZE(Frame_002026e4, 0x4);

u32 create_grid_map_5810ac(u32 grid_map, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002026e4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 block = allocate_on_heap(0x38u, grid_map, 4u, r3);  // (from the original)
    u32 r0_2 = construct_quad_pair(block);
    if (r0_2 != 0) {
        frame->word_0 = r3;
        u32 r0_3 = BlockMap__build_items(r0_2, grid_map, r1, r2);
        r0_2 = r0_2;
        if (r0_3 == 0) {
            GridRect__visit_cells(r0_2);
            r0_2 = 0u;
        }
    }
    return r0_2;
}

}  // namespace d_002026e4
GUEST_EXPORT_FRAMED(0x002026e4, d_002026e4::create_grid_map_5810ac, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00203170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates a grid rectangle and builds it with its second buffer kind; destroys it and gives null on failure.
namespace d_00203170 {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x005812ec, u32(u32, u32, u32, u32)> GridMap__create_with_buffer_2;
inline constexpr guest::Function<0x005817f0, u32(u32)> GridRect__visit_cells;
inline constexpr guest::Function<0x005819ec, u32(u32)> construct_quad_pair;

struct __attribute__((packed)) Frame_00203170 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00203170, word_0, 0x0);
GUEST_SIZE(Frame_00203170, 0x4);

u32 create_grid_map_with_buffer_2(u32 grid_map, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00203170> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 block = allocate_on_heap(0x38u, grid_map, 4u, r3);  // (from the original)
    u32 r0_2 = construct_quad_pair(block);
    if (r0_2 != 0) {
        frame->word_0 = r3;
        u32 r0_3 = GridMap__create_with_buffer_2(r0_2, grid_map, r1, r2);
        r0_2 = r0_2;
        if (r0_3 == 0) {
            GridRect__visit_cells(r0_2);
            r0_2 = 0u;
        }
    }
    return r0_2;
}

}  // namespace d_00203170
GUEST_EXPORT_FRAMED(0x00203170, d_00203170::create_grid_map_with_buffer_2, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0020350c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the archive accessor, the layout and its four animations.
namespace d_0020350c {

struct __attribute__((packed)) Local_0020350c_r0_8 {
    u8 unknown_0[0x434];  // (not used here)
    u32 word_434;
    u32 word_438;
};
GUEST_OFFSET(Local_0020350c_r0_8, word_434, 0x434);
GUEST_OFFSET(Local_0020350c_r0_8, word_438, 0x438);

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x0012c984, u32(u32)> ssys__ma__lyt__Layout__Layout;

u32 LayoutWithAnims4__construct(u32 layout_with_anims4, u32 r1) {
    u32 r0_1 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(layout_with_anims4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = ssys__ma__lyt__Layout__Layout(r0_1 + 0x248u);  // (from the original)
    u32 r0_4 = r0_3 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_4);
    u32 r0_5 = r0_4 + 0x28u;  // (from the original)
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;  // (from the original)
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;  // (from the original)
    construct_layout_animation(r0_7);
    gptr<Local_0020350c_r0_8> r0_8 = gptr<Local_0020350c_r0_8>(r0_7 - 0x40cu);  // (from the original)
    r0_8->word_434 = 0;
    r0_8->word_438 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_8.addr();
}

}  // namespace d_0020350c
GUEST_EXPORT_FRAMED(0x0020350c, d_0020350c::LayoutWithAnims4__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_00203558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The 0x20-byte record of the scene of `mode` in the table at 0xa822e8 (houses by owner and room, then the other
// flagged scene kinds); null for other scenes.
namespace d_00203558 {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x005b449c, u32(u32, u32)> scene_index_among_flagged;
inline constexpr guest::Function<0x006fa40c, u32(u32)> owner_of_mode;
inline constexpr guest::Function<0x006fb030, u32(u32)> room_of_mode;

u32 scene_record_20_of_mode(u32 scene, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1_2 = 0;
    u32 scene_flagged = scene_has_flags(0x80u, scene, r2, r3);  // (from the original)
    if (scene_flagged != 0) {
        u32 owner_2 = owner_of_mode(scene);
        u32 room_2 = room_of_mode(scene);
        u32 r0_4 = room_2 + owner_2 * 6u;
        u64 t_1 = 0ull + ~0u + u32(r0_4 >= 0x18u);  // (from the original)
        r1_2 = t_1;
        if (!u32(t_1 >> 0x20)) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return (r0_4 << 5) + 0xa82000u + 0x2e8u;  // (from the original)
        }
    } else {
        u32 scene_flagged_2 = scene_has_flags(0x2000u, scene, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (scene_flagged_2 != 0) {
            u32 r0_7 = scene_index_among_flagged(0x2000u, scene);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            if (r0_7 < 4u) {
                return (r0_7 << 5) + 0xa82000u + 0x5e8u;  // (from the original)
            }
        } else {
            u32 scene_flagged_3 = scene_has_flags(0x40u, scene, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (scene_flagged_3 != 0) {
                u32 r0_9 = scene_index_among_flagged(0x40u, scene);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                if (r0_9 < 0xau) {  // (from the original)
                    return (r0_9 << 5) + 0xa82000u + 0x668u;  // (from the original)
                }
            } else {
                u32 scene_flagged_4 = scene_has_flags(0x20000000u, scene, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                if (scene_flagged_4 != 0) {
                    u32 r0_11 = scene_index_among_flagged(0x20000000u, scene);  // (from the original)
                    r1_2 = guest::cpu()->r[1];
                    if (r0_11 < 2u) {
                        return (r0_11 << 5) + 0xa82000u + 0x7a8u;  // (from the original)
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00203558
GUEST_EXPORT_FRAMED(0x00203558, d_00203558::scene_record_20_of_mode, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00203660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The 0x10-byte record of the scene of `mode` in the table at 0xa82008 (houses by owner and room, then the other
// flagged scene kinds); null for other scenes.
namespace d_00203660 {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x005b449c, u32(u32, u32)> scene_index_among_flagged;
inline constexpr guest::Function<0x006fa40c, u32(u32)> owner_of_mode;
inline constexpr guest::Function<0x006fb030, u32(u32)> room_of_mode;

u32 scene_record_10_of_mode(u32 scene, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1_2 = 0;
    u32 scene_flagged = scene_has_flags(0x80u, scene, r2, r3);  // (from the original)
    if (scene_flagged != 0) {
        u32 owner_2 = owner_of_mode(scene);
        u32 room_3 = room_of_mode(scene);
        u32 r0_4 = room_3 + owner_2 * 6u;
        u64 t_1 = 0ull + ~0u + u32(r0_4 >= 0x18u);  // (from the original)
        r1_2 = t_1;
        if (!u32(t_1 >> 0x20)) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return (r0_4 << 4) + 0xa82000u + 8u;  // (from the original)
        }
    } else {
        u32 scene_flagged_2 = scene_has_flags(0x40u, scene, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (scene_flagged_2 != 0) {
            u32 r0_7 = scene_index_among_flagged(0x40u, scene);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            if (r0_7 < 0xau) {  // (from the original)
                return (r0_7 << 4) + 0xa82000u + 0x1c8u;  // (from the original)
            }
        } else {
            u32 scene_flagged_3 = scene_has_flags(0x2000u, scene, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (scene_flagged_3 != 0) {
                u32 r0_9 = scene_index_among_flagged(0x2000u, scene);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                if (r0_9 < 4u) {
                    return (r0_9 << 4) + 0xa82000u + 0x188u;  // (from the original)
                }
            } else {
                u32 scene_flagged_4 = scene_has_flags(0x4000u, scene, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                if (scene_flagged_4 != 0) {
                    u32 room_4 = room_of_mode(scene);
                    r1_2 = guest::cpu()->r[1];
                    if (room_4 < 6u) {
                        return (room_4 << 4) + 0xa82000u + 0x268u;  // (from the original)
                    }
                } else {
                    u32 scene_flagged_5 = scene_has_flags(0x20000000u, scene, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    r1_2 = guest::cpu()->r[1];
                    if (scene_flagged_5 != 0) {
                        u32 r0_13 = scene_index_among_flagged(0x20000000u, scene);  // (from the original)
                        r1_2 = guest::cpu()->r[1];
                        if (r0_13 < 2u) {
                            return (r0_13 << 4) + 0xa82000u + 0x2c8u;  // (from the original)
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00203660
GUEST_EXPORT_FRAMED(0x00203660, d_00203660::scene_record_10_of_mode, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020378c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the scene record's fields.
namespace d_0020378c {

struct __attribute__((packed)) Object_0020378c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0020378c_0, word_0, 0x0);

struct __attribute__((packed)) Object_0020378c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0020378c_1, word_4, 0x4);


void copy_scene_record(gptr<Object_0020378c_0> arg0, gptr<Object_0020378c_1> arg1) {
    u32 r1_1 = arg1->word_4;
    u32 r2_1 = (r1_1 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x268u) {  // (from the original)
        arg0->word_0 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x90u) {  // (from the original)
        arg0->word_0 = 1;
        guest::cpu()->r[1] = 1u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x290u) {  // (from the original)
        arg0->word_0 = 2;
        guest::cpu()->r[1] = 2u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x280u) {  // (from the original)
        arg0->word_0 = 3;
        guest::cpu()->r[1] = 3u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x288u) {  // (from the original)
        arg0->word_0 = 4;
        guest::cpu()->r[1] = 4u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x270u) {  // (from the original)
        arg0->word_0 = 5;
        guest::cpu()->r[1] = 5u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x210u) {  // (from the original)
        arg0->word_0 = 6;
        guest::cpu()->r[1] = 6u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x218u) {  // (from the original)
        arg0->word_0 = 7;
        guest::cpu()->r[1] = 7u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x238u) {  // (from the original)
        arg0->word_0 = 8;
        guest::cpu()->r[1] = 8u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x118u) {  // (from the original)
        arg0->word_0 = 9;
        guest::cpu()->r[1] = 9u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x120u) {  // (from the original)
        arg0->word_0 = 0xa;  // (from the original)
        guest::cpu()->r[1] = 0xau;  // (from the original)
        return;
    }
    if (r2_1 == 0x61u) {  // (from the original)
        u32 r3_1 = r1_1 & 0x3ffu;  // (from the original)
        if (s32(r3_1) >= 0x208 && s32(r3_1) < 0x210) {  // (from the original)
            arg0->word_0 = 0xb;  // (from the original)
            guest::cpu()->r[1] = 0xbu;  // (from the original)
            return;
        }
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x250u) {  // (from the original)
        arg0->word_0 = 0xc;  // (from the original)
        guest::cpu()->r[1] = 0xcu;  // (from the original)
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x240u) {  // (from the original)
        arg0->word_0 = 0xd;  // (from the original)
        guest::cpu()->r[1] = 0xdu;  // (from the original)
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x148u) {  // (from the original)
        arg0->word_0 = 0xf;  // (from the original)
        guest::cpu()->r[1] = 0xfu;  // (from the original)
        return;
    }
    if (r2_1 != 0x61u) {  // (from the original)
        arg0->word_0 = 0x10;  // (from the original)
        guest::cpu()->r[1] = 0x10u;  // (from the original)
        return;
    }
    u32 r1_2 = r1_1 & 0x3ffu;  // (from the original)
    if (s32(r1_2) < 0x100) {  // (from the original)
        arg0->word_0 = 0x10;  // (from the original)
        guest::cpu()->r[1] = 0x10u;  // (from the original)
        return;
    }
    if (s32(r1_2) < 0x140) {  // (from the original)
        arg0->word_0 = 0xe;  // (from the original)
        guest::cpu()->r[1] = 0xeu;  // (from the original)
        return;
    }
    arg0->word_0 = 0x10;  // (from the original)
    guest::cpu()->r[1] = 0x10u;  // (from the original)
}

}  // namespace d_0020378c
GUEST_EXPORT(0x0020378c, d_0020378c::copy_scene_record);

// f_00203948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The load state of the first idle scene handler (0 when another runs, 1 when done, else 2 or 3); marks the scene busy
// for new flags.
namespace d_00203948 {

inline constexpr u32 scene_state_address = 0x00a827e8u;
inline constexpr u32 scene_load_state_a_address = 0x00a827f4u;
inline constexpr u32 scene_load_state_b_address = 0x00a827f8u;
inline guest::global<u32, 0x0087c07c> global_0087c07c;
inline guest::global<u32, 0x0087c080> global_0087c080;
inline guest::global<u8, 0x00953684> scene_load_requested;
inline guest::global<u32, 0x00a827f4> scene_load_state_a;
inline guest::global<u32, 0x00a827f8> scene_load_state_b;
inline guest::global<u32, 0x00a82888> scene_idle_state;
inline guest::global<u8, 0x00a82b88> scene_load_done;

u32 scene_load_state(u32 r0) {
    if ((r0 & ~u32(s8(*scene_load_requested))) != 0) {
        *scene_load_done = 1;
        *scene_load_requested = 1;
    }
    u32 r12_1 = *scene_load_state_a;
    u32 r2_1 = *global_0087c07c;
    u32 r0_1 = *global_0087c080;
    if (r12_1 != r2_1) {
        guest::cpu()->r[1] = scene_state_address;
        return 0u;
    }
    u32 r2_2 = *scene_load_state_b;
    if ((r12_1 != 0 || ((r2_2 | r0_1) & 1u) != 0) && r2_2 != r0_1) {
        guest::cpu()->r[1] = scene_state_address;
        return 0u;
    }
    if (*scene_idle_state == 2u) {
        guest::cpu()->r[1] = scene_state_address;
        return 1u;
    }
    u32 r0_2 = *scene_load_requested == 0 ? 2u : 3u;
    guest::cpu()->r[1] = scene_state_address;
    return r0_2;
}

}  // namespace d_00203948
GUEST_EXPORT(0x00203948, d_00203948::scene_load_state);

// f_00203bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// From the third idle handler, requests scene change 3; true when it did.
namespace d_00203bd0 {

inline constexpr u32 scene_load_state_a_address = 0x00a827f4u;
inline constexpr u32 scene_load_state_b_address = 0x00a827f8u;
inline guest::global<u32, 0x0087c074> global_0087c074;
inline guest::global<u32, 0x0087c078> global_0087c078;
inline guest::global<u32, 0x00a827f4> scene_load_state_a;
inline guest::global<u32, 0x00a827f8> scene_load_state_b;
inline constexpr guest::Function<0x0051bbbc, u32(u32, u32, u32, u32)> request_scene_change;

u32 request_scene_change_from_idle() {
    u32 r1_1 = *global_0087c074;
    u32 r2_1 = *scene_load_state_a;
    u32 r0_1 = *global_0087c078;
    if (r2_1 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = *scene_load_state_b;
    if (r2_1 == 0) {
        r2_1 = r1_2 | r0_1;
        if ((r2_1 & 1u) == 0) {
            goto L_203c14;
        }
    }
    if (r1_2 != r0_1) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
L_203c14:;
    request_scene_change(3u, r1_2, r2_1, guest::cpu()->r[3]);
    return 1u;
}

}  // namespace d_00203bd0
GUEST_EXPORT_FRAMED(0x00203bd0, d_00203bd0::request_scene_change_from_idle, 0x4010);  // pushes {r4, lr} first, as the original

// f_00203c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the scene from the second idle handler and clears the scene flags (0x953684).
namespace d_00203c34 {

inline constexpr u32 scene_load_requested_address = 0x00953684u;
inline guest::global<u8, 0x00953684> scene_load_requested;
inline constexpr guest::Function<0x0051bc4c, u32(u32)> start_scene_from_second_idle;

u32 start_scene_and_clear_flags() {
    u32 r0 = 0;
    start_scene_from_second_idle(r0);
    *scene_load_requested = 0;
    guest::cpu()->r[1] = scene_load_requested_address;
    return 0u;
}

}  // namespace d_00203c34
GUEST_EXPORT_FRAMED(0x00203c34, d_00203c34::start_scene_and_clear_flags, 0x4010);  // pushes {r4, lr} first, as the original

// f_00203c50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when no scene change is requested (0xa82898).
namespace d_00203c50 {

inline guest::global<u8, 0x00a82898> scene_change_requested;

u32 scene_change_not_requested() {
    return *scene_change_requested == 0;
}

}  // namespace d_00203c50
GUEST_EXPORT(0x00203c50, d_00203c50::scene_change_not_requested);

// f_00203c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203c6c {

inline constexpr guest::Function<0x0013451c, u32(u32, u32, u32, u32)> Matrix34__copy_from;
inline constexpr guest::Function<0x0014ef20, u32(u32, u32, u32)> multiply;
inline constexpr guest::Function<0x001ab07c, u32(u32, u32, u32)> NpcModel__update_head;
inline constexpr guest::Function<0x004ee4c8, u32(u32, u32)> TransformNode__update_transform;

struct __attribute__((packed)) Frame_00203c6c {
    u8 unknown_0[0x30];  // (not read or written by name)
    float float_30;
    float float_34;
    float float_38;
    float float_3c;
    float float_40;
    float float_44;
    float float_48;
    float float_4c;
    float float_50;
    float float_54;
    float float_58;
    float float_5c;
};
GUEST_OFFSET(Frame_00203c6c, float_30, 0x30);
GUEST_OFFSET(Frame_00203c6c, float_34, 0x34);
GUEST_OFFSET(Frame_00203c6c, float_38, 0x38);
GUEST_OFFSET(Frame_00203c6c, float_3c, 0x3c);
GUEST_OFFSET(Frame_00203c6c, float_40, 0x40);
GUEST_OFFSET(Frame_00203c6c, float_44, 0x44);
GUEST_OFFSET(Frame_00203c6c, float_48, 0x48);
GUEST_OFFSET(Frame_00203c6c, float_4c, 0x4c);
GUEST_OFFSET(Frame_00203c6c, float_50, 0x50);
GUEST_OFFSET(Frame_00203c6c, float_54, 0x54);
GUEST_OFFSET(Frame_00203c6c, float_58, 0x58);
GUEST_OFFSET(Frame_00203c6c, float_5c, 0x5c);
GUEST_SIZE(Frame_00203c6c, 0x60);

u32 AcNpcSpJonny__MyModel__virtual_9(gptr<NpcModelBase> npc_model_base, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<Frame_00203c6c> frame;  // the original's stack frame
    Matrix34__copy_from(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    float S3_1 = 1.0f;
    u32 r0_2 = frame.at(0).addr();
    float S0_1 = npc_model_base->float_344;
    float S1_1 = npc_model_base->float_348;
    float S2_1 = npc_model_base->float_34c;
    frame->float_30 = S3_1;
    float S1_2 = S1_1 * S0_1;
    float S2_2 = S2_1 * S0_1;
    float S0_2 = 0.0f;
    frame->float_34 = S0_2;
    frame->float_38 = S0_2;
    frame->float_40 = S0_2;
    frame->float_44 = S3_1;
    frame->float_48 = S0_2;
    frame->float_50 = S0_2;
    frame->float_54 = S0_2;
    frame->float_58 = S3_1;
    frame->float_3c = S0_2;
    frame->float_4c = S1_2;
    frame->float_5c = S2_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_1;
    multiply(r0_2, r0_2, frame.at(0x30).addr());  // (from the original)
    NpcModel__update_head(npc_model_base.addr() + 0x284u, npc_model_base.addr(), frame.at(0).addr());  // (from the original)
    u32 r0_5 = TransformNode__update_transform(npc_model_base.addr() + 0x78u, frame.at(0).addr());  // (from the original)
    return r0_5;
}

}  // namespace d_00203c6c
GUEST_EXPORT_FRAMED(0x00203c6c, d_00203c6c::AcNpcSpJonny__MyModel__virtual_9, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020407c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Binds the texture of the model's resource file (by name) to the material of the model (by name); false when either
// is missing.
namespace d_0020407c {

struct __attribute__((packed)) Model {
    u8 unknown_0[0x164];  // (not used here)
    u32 word_164;
    u8 unknown_168[0x116];  // (not used here)
    u16 half_27e;
};
GUEST_OFFSET(Model, word_164, 0x164);
GUEST_OFFSET(Model, half_27e, 0x27e);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32)> string_length;
inline constexpr guest::Function<0x00317cc8, u32(u32, u32, u32, u32)> ResFile__dict_entry;
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32)> Model__set_visible_if_any;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> ResDic__find;

struct __attribute__((packed)) Frame_0020407c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0020407c, word_0, 0x0);
GUEST_SIZE(Frame_0020407c, 0x4);

u32 Model__bind_texture_by_name(gptr<Model> model, u32 name, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0020407c> frame;  // the original's stack frame
    u32 r0 = model.addr();
    u32 r4_1 = 0;
    u32 r0_10 = 0;
    frame->word_0 = r3;
    u32 r1_1 = model->half_27e;
    u32 r0_2 = ResFile__dict_entry(r0 + 0x164u, r1_1, r2, r3);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 ea_1 = model->word_164 + 0x28u;  // (from the original)
        r1_2 = *gptr<u32>(ea_1);
        u32 r0_3 = r1_2 == 0 ? 0u : ea_1 + r1_2;
        frame->word_0 = r0_3;
        if (r0_3 != 0 && r3 != 0) {
            u32 length_3 = string_length(r3, r1_2);
            u32 entry_4 = ResDic__find(frame.at(0).addr(), r3, length_3);
            r1_2 = guest::cpu()->r[1];
            if (entry_4 != 0) {
                u32 ea_2 = entry_4 + 0xcu;  // (from the original)
                r1_2 = *gptr<u32>(ea_2);
                r4_1 = r1_2 == 0 ? 0u : r1_2 + ea_2;
                goto L_204114;
            }
        }
        r4_1 = 0u;
L_204114:;
        u32 ea_3 = r0_2 + 0xc0u;  // (from the original)
        u32 r0_6 = *gptr<u32>(ea_3);
        u32 r0_7 = r0_6 == 0 ? 0u : r0_6 + ea_3;
        frame->word_0 = r0_7;
        if (r0_7 != 0 && name != 0) {
            u32 length_4 = string_length(name, r1_2);
            u32 entry_5 = ResDic__find(frame.at(0).addr(), name, length_4);
            r1_2 = guest::cpu()->r[1];
            if (entry_5 != 0) {
                u32 ea_4 = entry_5 + 0xcu;  // (from the original)
                r1_2 = *gptr<u32>(ea_4);
                r0_10 = r1_2 == 0 ? 0u : ea_4 + r1_2;
                goto L_204178;
            }
        }
        r0_10 = 0u;
L_204178:;
        if (r0_10 == 0 || r4_1 == 0) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        Model__set_visible_if_any(r0_10, r2, r4_1);
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0020407c
GUEST_EXPORT_FRAMED(0x0020407c, d_0020407c::Model__bind_texture_by_name, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00204568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the object and clears bit 7 of +0x280.
namespace d_00204568 {

struct __attribute__((packed)) Object_00204568_0 {
    u8 unknown_0[0x280];  // (not used here)
    u8 byte_280;
};
GUEST_OFFSET(Object_00204568_0, byte_280, 0x280);

inline constexpr guest::Function<0x00203d04, u32(u32, u32, u32, u32)> NpcBase__reset_model;

u32 refresh_and_clear_flag_80(gptr<Object_00204568_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_1 = NpcBase__reset_model(arg0.addr(), guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    arg0->byte_280 = u8(u32(arg0->byte_280) & ~0x80u);  // (from the original)
    return r0_1;
}

}  // namespace d_00204568
GUEST_EXPORT_FRAMED(0x00204568, d_00204568::refresh_and_clear_flag_80, 0x4010);  // pushes {r4, lr} first, as the original

// f_00204584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the object and clears bit 6 of +0x280.
namespace d_00204584 {

struct __attribute__((packed)) Object_00204584_0 {
    u8 unknown_0[0x280];  // (not used here)
    u8 byte_280;
};
GUEST_OFFSET(Object_00204584_0, byte_280, 0x280);

inline constexpr guest::Function<0x00203d04, u32(u32, u32, u32, u32)> NpcBase__reset_model;

void refresh_and_clear_flag_40(gptr<Object_00204584_0> arg0, u32 r1_unused, u32 r2) {
    NpcBase__reset_model(arg0.addr(), guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    arg0->byte_280 = u8(u32(arg0->byte_280) & ~0x40u);  // (from the original)
}

}  // namespace d_00204584
GUEST_EXPORT_FRAMED(0x00204584, d_00204584::refresh_and_clear_flag_40, 0x4010);  // pushes {r4, lr} first, as the original

// f_002045a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the object and clears bit 5 of +0x280.
namespace d_002045a0 {

struct __attribute__((packed)) Object_002045a0_0 {
    u8 unknown_0[0x280];  // (not used here)
    u8 byte_280;
};
GUEST_OFFSET(Object_002045a0_0, byte_280, 0x280);

inline constexpr guest::Function<0x00203d04, u32(u32, u32, u32, u32)> NpcBase__reset_model;

void refresh_and_clear_flag_20(gptr<Object_002045a0_0> arg0, u32 r1_unused, u32 r2) {
    NpcBase__reset_model(arg0.addr(), guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    arg0->byte_280 = u8(u32(arg0->byte_280) & ~0x20u);  // (from the original)
}

}  // namespace d_002045a0
GUEST_EXPORT_FRAMED(0x002045a0, d_002045a0::refresh_and_clear_flag_20, 0x4010);  // pushes {r4, lr} first, as the original

// f_002068b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends network message 0x40 with the NPC's slot, the main object and the time (the longest wait of the stations plus
// 300) and tells the NPC manager.
namespace d_002068b8 {

struct __attribute__((packed)) Object_002068b8_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_002068b8_1, byte_0, 0x0);
GUEST_OFFSET(Object_002068b8_1, byte_1, 0x1);

inline constexpr u32 npc_manager_address = 0x00950148u;
inline constexpr u32 request_pool_address = 0x00a22020u;
inline guest::global<u32, 0x00950148> npc_manager;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x00624ee8, u32(u32, u32, u32, u32)> NetPlayers__slot_veneer;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> station_is_waited_for;
inline constexpr guest::Function<0x0069858c, u32(u32, u32, u32)> ObjectList__set_npc_deadline;
inline constexpr guest::Function<0x00746f24, u32(u32, u32, u32, u32)> RequestPool__current_time;

struct __attribute__((packed)) Frame_002068b8 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 unknown_7[0x5];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002068b8, byte_0, 0x0);
GUEST_OFFSET(Frame_002068b8, byte_1, 0x1);
GUEST_OFFSET(Frame_002068b8, byte_2, 0x2);
GUEST_OFFSET(Frame_002068b8, byte_3, 0x3);
GUEST_OFFSET(Frame_002068b8, byte_4, 0x4);
GUEST_OFFSET(Frame_002068b8, byte_5, 0x5);
GUEST_OFFSET(Frame_002068b8, byte_6, 0x6);
GUEST_SIZE(Frame_002068b8, 0xc);

u32 send_npc_schedule_message(u32 r0_unused, gptr<Object_002068b8_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002068b8> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r7 = 0u;
    u32 r0_1 = arg1->byte_0;
    u32 r1_1 = arg1->byte_1;
    frame->byte_2 = u8(r7);
    frame->byte_3 = u8(r7);
    u32 r6 = (r0_1 >> 5) + (r1_1 << 3) & 0xffu;  // (from the original)
    u32 r0_2 = 0xau | r6 << 5;  // (from the original)
    frame->byte_4 = u8(r7);
    u32 r1_2 = r7 | (r6 & 0xf8u) >> 3;  // (from the original)
    frame->byte_5 = u8(r7);
    frame->byte_0 = u8(r0_2);
    frame->byte_6 = u8(r7);
    frame->byte_1 = u8(r1_2);
    u32 r0_3 = current_net_station(r0_2, r1_2, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = 0u;
    u32 r4 = r5;
    r1 = u32(frame->byte_1) & ~0xe0u;  // (from the original)
    frame->byte_1 = u8(r1 | r0_3 << 5);
    do {
        u32 r0_5 = station_is_waited_for(r4 & 0xffu, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            u32 r0_7 = NetPlayers__slot_veneer(r4 & 0xffu, r1, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_7 > r5) {
                r5 = r0_7;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    u32 now = RequestPool__current_time(request_pool_address, r1, r2, r3);
    u32 r4_1 = now + r5 + 0x12cu;  // (from the original)
    frame->byte_4 = u8(r7 | r4_1 >> 8);
    frame->byte_5 = u8(r7 | r4_1 >> 0x10);  // (from the original)
    frame->byte_6 = u8(r7 | r4_1 >> 0x18);  // (from the original)
    frame->byte_3 = u8(r4_1);
    send_message(0x40u, 4u, frame.at(0).addr(), 7u);  // (from the original)
    u32 object_list = *npc_manager;
    if (object_list != 0) {
        object_list = ObjectList__set_npc_deadline(object_list, r6, r4_1);
    }
    return object_list;
}

}  // namespace d_002068b8
GUEST_EXPORT_FRAMED(0x002068b8, d_002068b8::send_npc_schedule_message, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00206f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the item button: its control, its item pane and position, animation targets and sounds.
namespace d_00206f7c {

struct __attribute__((packed)) ItemButton {
    u8 unknown_0[0x17c];  // (not used here)
    u32 word_17c;
    u8 unknown_180[0xcc];  // (not used here)
    u32 word_24c;
    u32 word_250;
    u8 unknown_254[0x6];  // (not used here)
    u8 byte_25a;
    u8 byte_25b;
    u8 byte_25c;
    u8 unknown_25d[0xd3];  // (not used here)
    u16 half_330;
    u8 unknown_332[0x2];  // (not used here)
    u32 word_334;
};
GUEST_OFFSET(ItemButton, word_17c, 0x17c);
GUEST_OFFSET(ItemButton, word_24c, 0x24c);
GUEST_OFFSET(ItemButton, word_250, 0x250);
GUEST_OFFSET(ItemButton, byte_25a, 0x25a);
GUEST_OFFSET(ItemButton, byte_25b, 0x25b);
GUEST_OFFSET(ItemButton, byte_25c, 0x25c);
GUEST_OFFSET(ItemButton, half_330, 0x330);
GUEST_OFFSET(ItemButton, word_334, 0x334);

struct __attribute__((packed)) Local_00206f7c_r2_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00206f7c_r2_2, float_0, 0x0);
GUEST_OFFSET(Local_00206f7c_r2_2, float_4, 0x4);

struct __attribute__((packed)) Local_00206f7c_r3_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Local_00206f7c_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_00206f7c_r3_1, float_4, 0x4);
GUEST_OFFSET(Local_00206f7c_r3_1, float_8, 0x8);
GUEST_OFFSET(Local_00206f7c_r3_1, float_c, 0xc);
GUEST_OFFSET(Local_00206f7c_r3_1, float_10, 0x10);
GUEST_OFFSET(Local_00206f7c_r3_1, float_14, 0x14);

struct __attribute__((packed)) Local_00206f7c_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00206f7c_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_00206f7c_r3_2, word_4, 0x4);

inline guest::global<u32, 0x0088750c> global_0088750c;
inline guest::global<u32, 0x00887510> global_00887510;
inline guest::global<u32, 0x00887514> global_00887514;
inline guest::global<u32, 0x00887518> global_00887518;
inline guest::global<u32, 0x0088751c> global_0088751c;
inline guest::global<u32, 0x00887520> global_00887520;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> Model__set_flag_10;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> copy_four_animation_targets;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

struct __attribute__((packed)) Frame_00206f7c {
    u32 child;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x20];  // (not read or written by name)
    u32 word_3c;
};
GUEST_OFFSET(Frame_00206f7c, child, 0x0);
GUEST_OFFSET(Frame_00206f7c, word_4, 0x4);
GUEST_OFFSET(Frame_00206f7c, word_8, 0x8);
GUEST_OFFSET(Frame_00206f7c, word_c, 0xc);
GUEST_OFFSET(Frame_00206f7c, word_10, 0x10);
GUEST_OFFSET(Frame_00206f7c, word_14, 0x14);
GUEST_OFFSET(Frame_00206f7c, word_18, 0x18);
GUEST_OFFSET(Frame_00206f7c, word_3c, 0x3c);
GUEST_SIZE(Frame_00206f7c, 0x40);

void ItemButton__setup(gptr<ItemButton> item_button, u32 r1) {
    guest::StackFrameOf<Frame_00206f7c> frame;  // the original's stack frame
    float S0_1 = 0.0f;
    float S1_1 = std::bit_cast<float>(*global_0088750c);
    float S2_1 = std::bit_cast<float>(*global_00887510);
    float S3_1 = std::bit_cast<float>(*global_00887514);
    float S4_1 = std::bit_cast<float>(*global_00887518);
    float S5_1 = std::bit_cast<float>(*global_0088751c);
    gptr<Local_00206f7c_r3_1> r3_1 = gptr<Local_00206f7c_r3_1>(frame.at(0x24).addr());  // (from the original)
    r3_1->float_0 = S0_1;
    r3_1->float_4 = S1_1;
    r3_1->float_8 = S2_1;
    r3_1->float_c = S3_1;
    r3_1->float_10 = S4_1;
    r3_1->float_14 = S5_1;
    gptr<Local_00206f7c_r3_2> r3_2 = gptr<Local_00206f7c_r3_2>(frame.at(0x1c).addr());  // (from the original)
    frame->word_3c = *global_00887520;
    r3_2->word_0 = r1;
    r3_2->word_4 = item_button.addr() + 4u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    ButtonActionControl__setup(item_button.addr() + 0x260u, frame.at(0x1c).addr(), 0u, r3_2.addr());  // (from the original)
    float S0_2 = 0.0f;
    item_button->word_334 = item_button->word_334 | 0x40u;  // (from the original)
    frame->child = 0;
    frame->word_4 = 0;
    float S1_2 = -60.0f;
    gptr<Local_00206f7c_r2_2> r2_2 = gptr<Local_00206f7c_r2_2>(frame.at(8).addr());
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    r2_2->float_0 = S0_2;
    r2_2->float_4 = S1_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    u32 child_2 = LayoutObjectWithChild__forward_to_child(item_button.addr() + 4u, 0x887574u);  // (from the original)
    frame->child = child_2;
    u32 r0_4 = item_button->word_17c;
    frame->word_10 = 0;
    frame->word_4 = r0_4;
    frame->word_14 = 0;
    set_node_values(item_button.addr() + 0x180u, frame.at(0).addr());  // (from the original)
    copy_four_animation_targets(item_button.addr() + 0x260u, item_button.addr() + 0x180u, 1u);  // (from the original)
    Model__set_flag_10(item_button.addr() + 0x260u, 0u);  // (from the original)
    item_button->word_250 = 0x10003f6;  // (from the original)
    item_button->byte_25b = 1;
    item_button->byte_25c = 1;
    item_button->word_24c = 0x1000403;  // (from the original)
    item_button->byte_25a = 1;
    item_button->half_330 = 3;
}

}  // namespace d_00206f7c
GUEST_EXPORT_FRAMED(0x00206f7c, d_00206f7c::ItemButton__setup, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00207168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the function at 0x207190 with a record holding the half.
namespace d_00207168 {

inline constexpr guest::Function<0x00207190, u32(u32, u32, u32, u32)> Effect__spawn_at;

struct __attribute__((packed)) Frame_00207168 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u8 unknown_6[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00207168, half_0, 0x0);
GUEST_OFFSET(Frame_00207168, half_2, 0x2);
GUEST_OFFSET(Frame_00207168, half_4, 0x4);
GUEST_SIZE(Frame_00207168, 0x8);

u32 call_207190_with_half(u32 r0_unused, u32 r1_unused, u32 r2) {
    guest::StackFrameOf<Frame_00207168> frame;  // the original's stack frame
    frame->half_0 = 0;
    frame->half_2 = u16(r2);
    frame->half_4 = 0;
    Effect__spawn_at(guest::cpu()->r[0], guest::cpu()->r[1], frame.at(0).addr(), guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_00207168
GUEST_EXPORT_FRAMED(0x00207168, d_00207168::call_207190_with_half, 0x4010);  // pushes {r4, lr} first, as the original

// f_00207330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the particle system (0x24 bytes) into 0x957308; true when it did.
namespace d_00207330 {

inline guest::global<u32, 0x00957308> particle_system;
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> allocate;
inline constexpr guest::Function<0x00207b1c, u32(u32)> SeadParticle__SeadParticle;

u32 create_particle_system(u32 r0_unused, u32 r1) {
    u32 block_2 = allocate(0x24u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (block_2 != 0) {
        block_2 = SeadParticle__SeadParticle(block_2);
    }
    *particle_system = block_2;
    return block_2 != 0;
}

}  // namespace d_00207330
GUEST_EXPORT_FRAMED(0x00207330, d_00207330::create_particle_system, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020758c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns the effect through a temporary particle handle.
namespace d_0020758c {

inline constexpr guest::Function<0x00207750, u32(u32, u32, u32, u32)> EffectHandle__spawn;
inline constexpr guest::Function<0x002e6944, u32(u32)> SeadParticleHandle__destructor;
inline constexpr guest::Function<0x003166a8, u32(u32, u32, u32, u32)> construct_sead_particle_handle;

u32 spawn_effect_temp(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    construct_sead_particle_handle(frame.at(0).addr(), r1, r2, r3);
    u32 r0_3 = EffectHandle__spawn(frame.at(0).addr(), r0, r2, r1);
    SeadParticleHandle__destructor(frame.at(0).addr());
    return r0_3;
}

}  // namespace d_0020758c
GUEST_EXPORT_FRAMED(0x0020758c, d_0020758c::spawn_effect_temp, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020763c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020763c {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_4, 0x4);
GUEST_OFFSET(sead__SafeStringBase_char_, word_c, 0xc);

struct __attribute__((packed)) Local_0020763c_ea_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0020763c_ea_11, word_0, 0x0);
GUEST_OFFSET(Local_0020763c_ea_11, word_4, 0x4);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline constexpr u32 file_device_mgr_instance_address = 0x009752e0u;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline guest::global<u32, 0x00957310> global_00957310;
inline guest::global<u32, 0x009752e0> file_device_mgr_instance;
inline constexpr guest::Function<0x001316b8, u32(u32, u32, u32, u32)> FileDevice__virtual_10_if_mounted;
inline constexpr guest::Function<0x0054ee94, u32(u32, u32, u32, u32)> EffectSystem__load_resource;

struct __attribute__((packed)) Frame_0020763c {
    u32 word_0;
    u32 word_4;
    u32 object_8_vtable;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x8];  // (not read or written by name)
    u32 word_20;
    u8 byte_24;
    u8 byte_25;
    u8 unknown_26[0x2];  // (not read or written by name)
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 unknown_31[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0020763c, word_0, 0x0);
GUEST_OFFSET(Frame_0020763c, word_4, 0x4);
GUEST_OFFSET(Frame_0020763c, object_8_vtable, 0x8);
GUEST_OFFSET(Frame_0020763c, word_c, 0xc);
GUEST_OFFSET(Frame_0020763c, word_10, 0x10);
GUEST_OFFSET(Frame_0020763c, word_14, 0x14);
GUEST_OFFSET(Frame_0020763c, word_20, 0x20);
GUEST_OFFSET(Frame_0020763c, byte_24, 0x24);
GUEST_OFFSET(Frame_0020763c, byte_25, 0x25);
GUEST_OFFSET(Frame_0020763c, word_28, 0x28);
GUEST_OFFSET(Frame_0020763c, word_2c, 0x2c);
GUEST_OFFSET(Frame_0020763c, byte_30, 0x30);
GUEST_SIZE(Frame_0020763c, 0x38);

void sead__SafeStringBase_char___SafeStringBase_0020763c(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0020763c> frame;  // the original's stack frame
    frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_c = 0x8c9f1c;  // (from the original)
    frame->byte_24 = 1;
    frame->word_20 = 0;
    frame->byte_25 = 1;
    frame->word_28 = 0;
    frame->word_2c = 0;
    frame->byte_30 = 0;
    u32 r0_1 = *stage_heap;
    gptr<Local_0020763c_ea_11> ea_11 = gptr<Local_0020763c_ea_11>(frame.at(0x18).addr());  // (from the original)
    ea_11->word_0 = r0_1;
    ea_11->word_4 = 0x80;  // (from the original)
    frame->word_c = *global_00957310;
    u32 r0_3 = FileDevice__virtual_10_if_mounted(*gptr<u32>(*file_device_mgr_instance + 0x1cu), frame.at(8).addr(), r2, r3);  // (from the original)
    safe_string_base_char->word_c = r0_3;
    frame->word_0 = 0;
    frame->word_4 = 0;
    EffectSystem__load_resource(safe_string_base_char->word_4, *stage_heap, r0_3, 1u);
}

}  // namespace d_0020763c
GUEST_EXPORT_FRAMED(0x0020763c, d_0020763c::sead__SafeStringBase_char___SafeStringBase_0020763c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00207710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the emitter set (+4) and frees its buffer (+0xc).
namespace d_00207710 {

struct __attribute__((packed)) ParticleSet {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(ParticleSet, word_4, 0x4);
GUEST_OFFSET(ParticleSet, word_c, 0xc);

inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x0054ee44, u32(u32, u32, u32, u32)> EffectSystem__release_resource;

void ParticleSet__release(gptr<ParticleSet> particle_set) {
    EffectSystem__release_resource(particle_set->word_4, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = particle_set->word_c;
    if (r0_2 == 0) {
        return;
    }
    free_memory(r0_2);
    particle_set->word_c = 0;
}

}  // namespace d_00207710
GUEST_EXPORT_FRAMED(0x00207710, d_00207710::ParticleSet__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_00207750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the handle and spawns effect `id` with the group and draw kind (from the priority), rotating it in scenes
// that need it; true when spawned.
namespace d_00207750 {

inline constexpr u32 particle_system_address = 0x00957308u;
inline guest::global<u32, 0x00957308> particle_system;
inline constexpr guest::Function<0x002e61cc, u32(u32)> EffectHandle__set_rotation;
inline constexpr guest::Function<0x002e64bc, u32(u32, u32, u32, u32)> EffectHandle__reset;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0054fbb0, u32(u32, u32, u32, u32)> EffectSystem__create_emitter_set;
inline constexpr guest::Function<0x0072072c, u32(u32, u32)> EffectHandle__is_running;

struct __attribute__((packed)) Frame_00207750 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_00207750, word_0, 0x0);
GUEST_OFFSET(Frame_00207750, word_4, 0x4);
GUEST_OFFSET(Frame_00207750, word_8, 0x8);
GUEST_SIZE(Frame_00207750, 0xc);

u32 EffectHandle__spawn(u32 effect_handle, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00207750> frame;  // the original's stack frame
    u32 r4_1 = r2;
    EffectHandle__reset(effect_handle, r1, r2, r3);
    u32 r0_1 = 0u;
    if (r4_1 == 3u || r4_1 == 4u) {
        r0_1 = 1u;
    } else if (s32(r4_1) >= 5) {
        r0_1 = 2u;
        r4_1 = 0u;
    }
    u32 r12_1 = *gptr<u32>(*particle_system + 4u);
    frame->word_0 = r0_1;
    frame->word_4 = r4_1 & 0xffu;  // (from the original)
    frame->word_8 = ~0u;
    u32 r0_2 = EffectSystem__create_emitter_set(r12_1, effect_handle + 0xcu, r3, r1);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = EffectHandle__is_running(effect_handle, 0u);
        if (r0_3 != 0) {
            u32 scene = current_scene_id(r0_3);
            u32 scene_flagged = scene_has_flags(4u, scene);
            if (scene_flagged != 0) {
                EffectHandle__set_rotation(effect_handle);
            }
        }
    }
    return r0_2;
}

}  // namespace d_00207750
GUEST_EXPORT_FRAMED(0x00207750, d_00207750::EffectHandle__spawn, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0020968c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the window's layout parts (when loaded) and layout, and its list (when not).
namespace d_0020968c {

struct __attribute__((packed)) Object_0020968c_0 {
    u8 unknown_0[0x4fc];  // (not used here)
    u32 word_4fc;
};
GUEST_OFFSET(Object_0020968c_0, word_4fc, 0x4fc);

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x002cd0e0, u32(u32)> ButtonList__update_all;

u32 release_window_layouts_4fc(gptr<Object_0020968c_0> arg0) {
    if (arg0->word_4fc == 1u) {
        release_layout_parts(arg0.addr() + 0x170u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    layout_at_10_virtual_8(arg0.addr() + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (arg0->word_4fc == 0) {
        ButtonList__update_all(arg0.addr() + 0xb60u);  // (from the original)
    }
    return 1u;
}

}  // namespace d_0020968c
GUEST_EXPORT_FRAMED(0x0020968c, d_0020968c::release_window_layouts_4fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00209770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00209770 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_00abe0b8_address = 0x00abe0b8u;
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> layout_allocator_8;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) Frame_00209770 {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00209770, object_0_vtable, 0x0);
GUEST_OFFSET(Frame_00209770, word_4, 0x4);
GUEST_SIZE(Frame_00209770, 0xc);

u32 load_select_window_layout(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00209770> frame;  // the original's stack frame
    u32 r0_1 = layout_allocator_8(r0, r1, r2, r3);
    frame->word_4 = 0x2097a8;  // (from the original)
    frame->object_0_vtable = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = load_split_start(global_00abe0b8_address, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), 0x80u);  // (from the original)
    return r0_2;
}

}  // namespace d_00209770
GUEST_EXPORT_FRAMED(0x00209770, d_00209770::load_select_window_layout, 0x4000);  // pushes {lr} first, as the original

// f_00209c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00209c98 {

struct __attribute__((packed)) Local_00209c98_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00209c98_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00209c98_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00209c98_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00209c98_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_00209c98_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_00209c98_r0_12 {
    u32 vtable;
    u8 unknown_4[0xe0];  // (not used here)
    u32 control1_button_vtable;
};
GUEST_OFFSET(Local_00209c98_r0_12, vtable, 0x0);
GUEST_OFFSET(Local_00209c98_r0_12, control1_button_vtable, 0xe4);

struct __attribute__((packed)) Local_00209c98_r0_8 {
    u8 unknown_0[0x510];  // (not used here)
    u32 word_510;
    u8 byte_514;
    u8 unknown_515[0x1b];  // (not used here)
    u8 byte_530;
};
GUEST_OFFSET(Local_00209c98_r0_8, word_510, 0x510);
GUEST_OFFSET(Local_00209c98_r0_8, byte_514, 0x514);
GUEST_OFFSET(Local_00209c98_r0_8, byte_530, 0x530);

struct __attribute__((packed)) Local_00209c98_r1_5 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00209c98_r1_5, float_0, 0x0);
GUEST_OFFSET(Local_00209c98_r1_5, float_4, 0x4);

struct __attribute__((packed)) Local_00209c98_r1_6 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00209c98_r1_6, float_0, 0x0);
GUEST_OFFSET(Local_00209c98_r1_6, float_4, 0x4);

struct __attribute__((packed)) Local_00209c98_r1_9 {
    u8 unknown_0[0x190];  // (not used here)
    u8 byte_190;
    u8 byte_191;
    u8 byte_192;
    u8 byte_193;
    u32 word_194;
};
GUEST_OFFSET(Local_00209c98_r1_9, byte_190, 0x190);
GUEST_OFFSET(Local_00209c98_r1_9, byte_191, 0x191);
GUEST_OFFSET(Local_00209c98_r1_9, byte_192, 0x192);
GUEST_OFFSET(Local_00209c98_r1_9, byte_193, 0x193);
GUEST_OFFSET(Local_00209c98_r1_9, word_194, 0x194);

inline constexpr u32 vtable_SelectWindow = 0x008ed7e0u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline guest::global<u32, 0x008877e4> global_008877e4;
inline guest::global<u32, 0x008877e8> global_008877e8;
inline constexpr guest::Function<0x001207d8, u32(u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32)> construct_control_button_base;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0033f0d8, u32(u32, u32)> construct_button_action_control_choice;

u32 SelectWindow__SelectWindow(gptr<SelectWindow> select_window, float S0) {
    select_window->word_4 = 0;
    select_window->byte_8 = 0;
    u32 r2_1 = *global_008877e8;
    select_window->word_c = *global_008877e4;
    select_window->word_10 = r2_1;
    select_window->word_14 = 0;
    select_window->byte_18 = 0;
    select_window->word_1c = 0;
    select_window->vtable = vtable_SelectWindow;
    select_window->word_20 = 0;
    u32 r0_2 = Layout__Layout(select_window.addr() + 0x24u, vtable_SelectWindow, r2_1, select_window.addr() + 0xcu);  // (from the original)
    u32 r0_4 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_2 + 0x14cu);  // (from the original)
    u32 r0_5 = r0_4 + 0x248u;  // (from the original)
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;  // (from the original)
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;  // (from the original)
    construct_layout_animation(r0_7);
    gptr<Local_00209c98_r0_8> r0_8 = gptr<Local_00209c98_r0_8>(r0_7 - 0x408u);  // (from the original)
    *gptr<u32>(r0_8.addr() + 0x430u) = 0;  // (from the original)
    *gptr<u32>(r0_8.addr() + 0x434u) = 0;  // (from the original)
    u32 r5_1 = ~0u;
    *gptr<u32>(r0_8.addr() + 0x438u) = 0;  // (from the original)
    gptr<Local_00209c98_ea_4> ea_4 = gptr<Local_00209c98_ea_4>(r0_8.addr() + 0x4fcu);  // (from the original)
    ea_4->word_0 = 0;
    ea_4->word_4 = r5_1;
    *gptr<u32>(r0_8.addr() + 0x504u) = r5_1;  // (from the original)
    gptr<Local_00209c98_ea_6> ea_6 = gptr<Local_00209c98_ea_6>(r0_8.addr() + 0x508u);  // (from the original)
    ea_6->word_0 = 0;
    ea_6->word_4 = r5_1;
    float S0_5 = 0.0f;
    gptr<Local_00209c98_r1_5> r1_5 = gptr<Local_00209c98_r1_5>(r0_8.addr() + 0x518u);  // (from the original)
    r0_8->word_510 = r5_1;
    r0_8->byte_514 = 0;
    r1_5->float_0 = S0_5;
    r1_5->float_4 = S0_5;
    gptr<Local_00209c98_r1_6> r1_6 = gptr<Local_00209c98_r1_6>(r0_8.addr() + 0x520u);  // (from the original)
    r1_6->float_0 = S0_5;
    r1_6->float_4 = S0_5;
    u32 r1_7 = r0_8.addr() + 0x400u;  // (from the original)
    r0_8->byte_530 = 0;
    *gptr<u32>(r1_7 + 0x134u) = std::bit_cast<u32>(S0_5);  // (from the original)
    u32 r0_9 = r0_8.addr() + 0x538u;  // (from the original)
    guest::cpu()->s[0] = S0_5;
    construct_button_action_control_choice(r0_9, r1_7);
    u32 r0_11 = for_each_element(r0_9 + 0xe8u, 0x2b6de0u, 0xe0u, 6u);  // (from the original)
    gptr<Local_00209c98_r0_12> r0_12 = gptr<Local_00209c98_r0_12>(r0_11 + 0x540u);  // (from the original)
    construct_control_button_base(r0_12.addr(), r0_12.addr() + 0x118u, 1u);  // (from the original)
    r0_12->control1_button_vtable = vtable_Control1Button_at_e4;
    r0_12->vtable = vtable_Control1Button;
    u32 r0_14 = for_each_element(r0_12.addr() + 0x118u, 0x2e0994u, 0x518u, 1u);  // (from the original)
    u32 r0_15 = r0_14 - 0xc78u;  // (from the original)
    gptr<Local_00209c98_r1_9> r1_9 = gptr<Local_00209c98_r1_9>(r0_15 + 0x1000u);  // (from the original)
    r1_9->byte_190 = 0;
    r1_9->byte_191 = 0;
    r1_9->byte_192 = 0;
    r1_9->byte_193 = 0;
    r1_9->word_194 = r5_1;
    guest::cpu()->r[1] = r1_9.addr();
    return r0_15;
}

}  // namespace d_00209c98
GUEST_EXPORT_FRAMED(0x00209c98, d_00209c98::SelectWindow__SelectWindow, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00209f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts a frame (up to 300) and, while the target (+0x1470) is farther than the threshold, gives its position; clears
// it when near.
namespace d_00209f40 {

struct __attribute__((packed)) Object_00209f40_0 {
    u8 unknown_0[0x1470];  // (not used here)
    u32 word_1470;
    u32 word_1474;
    u32 word_1478;
    u8 byte_147c;
    u8 unknown_147d[0x3];  // (not used here)
    u32 word_1480;
};
GUEST_OFFSET(Object_00209f40_0, word_1470, 0x1470);
GUEST_OFFSET(Object_00209f40_0, word_1474, 0x1474);
GUEST_OFFSET(Object_00209f40_0, word_1478, 0x1478);
GUEST_OFFSET(Object_00209f40_0, byte_147c, 0x147c);
GUEST_OFFSET(Object_00209f40_0, word_1480, 0x1480);

struct __attribute__((packed)) Object_00209f40_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00209f40_1, word_0, 0x0);
GUEST_OFFSET(Object_00209f40_1, word_4, 0x4);
GUEST_OFFSET(Object_00209f40_1, word_8, 0x8);

struct __attribute__((packed)) Object_00209f40_2 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_00209f40_2, float_0, 0x0);
GUEST_OFFSET(Object_00209f40_2, float_8, 0x8);

inline guest::global<u32, 0x0095731c> global_0095731c;

u32 pending_target_still_far(gptr<Object_00209f40_0> arg0, gptr<Object_00209f40_1> arg1, gptr<Object_00209f40_2> arg2, float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r3_1 = arg0->word_1480 + 1u;
    arg0->word_1480 = r3_1;
    if (s32(r3_1) >= 0x12c || arg0->byte_147c == 0) {  // (from the original)
        return 0u;
    }
    float S0_1 = std::bit_cast<float>(arg0->word_1470) - arg2->float_0;
    float S1_1 = std::bit_cast<float>(arg0->word_1478) - arg2->float_8;
    float S0_2 = S0_1 * S0_1 + S1_1 * S1_1;
    float S1_2 = std::bit_cast<float>(*global_0095731c);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(sqrtf(S0_2), S1_2);  // (from the original)
    if (!(sqrtf(S0_2) > S1_2)) {
        arg0->byte_147c = 0;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return 0u;
    }
    arg1->word_0 = arg0->word_1470;
    arg1->word_4 = arg0->word_1474;
    arg1->word_8 = arg0->word_1478;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_00209f40
GUEST_EXPORT(0x00209f40, d_00209f40::pending_target_still_far);

// f_0020a35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020a35c {

struct __attribute__((packed)) Object_0020a35c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0020a35c_0, word_4, 0x4);
GUEST_OFFSET(Object_0020a35c_0, word_8, 0x8);
GUEST_OFFSET(Object_0020a35c_0, word_c, 0xc);
GUEST_OFFSET(Object_0020a35c_0, word_10, 0x10);
GUEST_OFFSET(Object_0020a35c_0, word_14, 0x14);
GUEST_OFFSET(Object_0020a35c_0, word_18, 0x18);
GUEST_OFFSET(Object_0020a35c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0020a35c_0, word_20, 0x20);

struct __attribute__((packed)) Local_0020a35c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0020a35c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0020a35c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0020a35c_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0020a35c_r0_4 {
    u32 vtable;
    u8 unknown_4[0x1c];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Local_0020a35c_r0_4, vtable, 0x0);
GUEST_OFFSET(Local_0020a35c_r0_4, word_20, 0x20);
GUEST_OFFSET(Local_0020a35c_r0_4, word_24, 0x24);
GUEST_OFFSET(Local_0020a35c_r0_4, word_28, 0x28);

inline constexpr u32 vtable_RoadSearchCand_16__16__IRootLocateZero___Cand = 0x008fa3b4u;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32)> construct_search_cand_core;

u32 IRootLocateZero___Cand__Cand_0020a35c(gptr<Object_0020a35c_0> arg0, u32 r1) {
    u32 r0_1 = arg0.addr() + 4u;
    arg0->word_4 = 0x10;  // (from the original)
    arg0->word_10 = r0_1 + 0x20u;  // (from the original)
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_8 = 0x10;  // (from the original)
    arg0->word_c = 0x100;  // (from the original)
    u32 r4_1 = r0_1 + 0x18u;  // (from the original)
    arg0->word_1c = 0;
    arg0->word_20 = r0_1 + 0x1420u;  // (from the original)
    u32 r0_3 = for_each_element(r0_1 + 0x20u, 0x274724u, 0x14u, 0x100u);  // (from the original)
    gptr<Local_0020a35c_r0_4> r0_4 = gptr<Local_0020a35c_r0_4>(r0_3 + 0x1400u);  // (from the original)
    construct_search_cand_core(r0_4.addr(), 0x100u, r0_4.addr() + 0x2cu);  // (from the original)
    gptr<Local_0020a35c_ea_1> ea_1 = gptr<Local_0020a35c_ea_1>(r0_4.addr() + 0x14u);  // (from the original)
    ea_1->word_0 = 0x10;  // (from the original)
    ea_1->word_4 = 0x10;  // (from the original)
    ea_1->word_8 = 0;
    r0_4->vtable = vtable_RoadSearchCand_16__16__IRootLocateZero___Cand;
    r0_4->word_20 = 0;
    r0_4->word_24 = 0;
    r0_4->word_28 = 0;
    u32 r0_5 = r0_4.addr() - 0x1424u;  // (from the original)
    *gptr<u32>(r0_5) = r1;
    *gptr<u8>(r0_5 + 0x147cu) = 0;  // (from the original)
    *gptr<u32>(r0_5 + 0x1480u) = 0;  // (from the original)
    return r0_5;
}

}  // namespace d_0020a35c
GUEST_EXPORT_FRAMED(0x0020a35c, d_0020a35c::IRootLocateZero___Cand__Cand_0020a35c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0020a418: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020a418 {


void SoundFaderEx__virtual_3(gptr<SoundFaderEx> sound_fader_ex, float S0_unused, float S1) {
    u32 r1_1 = sound_fader_ex->word_14;
    if (s32(r1_1) > 0) {
        float S0_1 = std::bit_cast<float>(sound_fader_ex->word_4);
        sound_fader_ex->word_14 = r1_1 - 1u;
        guest::cpu()->r[1] = r1_1 - 1u;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r1_3 = sound_fader_ex->res;
    u32 res_1 = r1_3;
    u32 vf_1 = (r1_3 & (r1_3 ^ res_1)) >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r1_3 = ~0u;
        sound_fader_ex->res = r1_3;
    }
    if (res_1 == 0 || res_1 >> 0x1f != vf_1) {  // (from the original)
        float S0_2 = std::bit_cast<float>(sound_fader_ex->word_4);
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->s[0] = S0_2;
        return;
    }
    u32 res_2 = r1_3 - 1u;
    sound_fader_ex->res = res_2;
    if (res_2 == 0) {
        u32 r1_4 = sound_fader_ex->word_8;
        sound_fader_ex->word_4 = r1_4;
        float S0_3 = std::bit_cast<float>(sound_fader_ex->word_4);
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0_3;
        return;
    }
    float S1_1 = sound_fader_ex->float_c;
    sound_fader_ex->word_4 = std::bit_cast<u32>(std::bit_cast<float>(sound_fader_ex->word_4) + S1_1);
    float S0_4 = std::bit_cast<float>(sound_fader_ex->word_4);
    guest::cpu()->r[1] = res_2;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0020a418
GUEST_EXPORT(0x0020a418, d_0020a418::SoundFaderEx__virtual_3);

// f_0020a474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts fading the value to the target over `frames` (immediately for 0), then holding for `hold` frames.
namespace d_0020a474 {

struct __attribute__((packed)) FloatFade {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    float float_8;
    float float_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(FloatFade, float_4, 0x4);
GUEST_OFFSET(FloatFade, float_8, 0x8);
GUEST_OFFSET(FloatFade, float_c, 0xc);
GUEST_OFFSET(FloatFade, word_10, 0x10);
GUEST_OFFSET(FloatFade, word_14, 0x14);


void FloatFade__start(gptr<FloatFade> float_fade, u32 r1, u32 r2, float S0, float S1) {
    if (s32(r1) < 0) {
        r1 = 0u;
    }
    float_fade->float_8 = S0;
    if (r1 == 0) {
        r1 = ~0u;
        float_fade->float_4 = S0;
        float_fade->word_10 = r1;
    } else {
        float S2_1 = float_fade->float_4;
        float_fade->word_10 = r1;
        S0 = S0 - S2_1;
        S1 = float(s32(r1));
        float_fade->float_c = S0 / S1;
    }
    if (s32(r2) < 0) {
        r2 = 0u;
    }
    float_fade->word_14 = r2;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_0020a474
GUEST_EXPORT(0x0020a474, d_0020a474::FloatFade__start);

// f_0020a64c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the sound kind (below 14, +0x3c) and counts the change (+0x40).
namespace d_0020a64c {


void SoundObjFieldObj__set_kind(gptr<SoundObjFieldObj> sound_obj_field_obj, u32 r1) {
    if (r1 >= 0xeu || sound_obj_field_obj->word_3c == r1) {  // (from the original)
        return;
    }
    u32 r2_1 = sound_obj_field_obj->word_40;
    sound_obj_field_obj->word_3c = r1;
    sound_obj_field_obj->word_40 = r2_1 + 1u;
}

}  // namespace d_0020a64c
GUEST_EXPORT(0x0020a64c, d_0020a64c::SoundObjFieldObj__set_kind);

// f_0020acb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the kind at +0x3c to 0xb.
namespace d_0020acb0 {

struct __attribute__((packed)) Object_0020acb0_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0020acb0_0, word_3c, 0x3c);


void set_kind_3c_b(gptr<Object_0020acb0_0> arg0) {
    arg0->word_3c = 0xb;  // (from the original)
    guest::cpu()->r[1] = 0xbu;  // (from the original)
}

}  // namespace d_0020acb0
GUEST_EXPORT(0x0020acb0, d_0020acb0::set_kind_3c_b);

// f_0020acc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flag at +0x37 and calls virtual 6 when it changes.
namespace d_0020acc0 {

struct __attribute__((packed)) SoundObj {
    u32 word_0;
    u8 unknown_4[0x33];  // (not used here)
    u8 byte_37;
};
GUEST_OFFSET(SoundObj, word_0, 0x0);
GUEST_OFFSET(SoundObj, byte_37, 0x37);


u32 SoundObj__set_flag_37(gptr<SoundObj> sound_obj, u32 r1) {
    u32 r2_1 = s8(sound_obj->byte_37);
    if (r2_1 == r1) {
        guest::cpu()->r[1] = r1;
        return sound_obj.addr();
    }
    sound_obj->byte_37 = u8(r1);
    u32 r1_1 = *gptr<u32>(sound_obj->word_0 + 0x18u);  // (from the original)
    // virtual function 6 of sound_obj.addr()
    return guest::call_address<u32>(r1_1, sound_obj.addr(), r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0020acc0
GUEST_EXPORT(0x0020acc0, d_0020acc0::SoundObj__set_flag_37);

// f_0020ace8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flag at +0x36 and calls virtual 6 when it changes.
namespace d_0020ace8 {

struct __attribute__((packed)) SoundObj {
    u32 word_0;
    u8 unknown_4[0x32];  // (not used here)
    u8 byte_36;
};
GUEST_OFFSET(SoundObj, word_0, 0x0);
GUEST_OFFSET(SoundObj, byte_36, 0x36);


void SoundObj__set_flag_36(gptr<SoundObj> sound_obj, u32 r1) {
    u32 r2_1 = s8(sound_obj->byte_36);
    if (r2_1 == r1) {
        return;
    }
    sound_obj->byte_36 = u8(r1);
    u32 r1_1 = *gptr<u32>(sound_obj->word_0 + 0x18u);  // (from the original)
    // virtual function 6 of sound_obj.addr()
    guest::call_address<u32>(r1_1, sound_obj.addr(), r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0020ace8
GUEST_EXPORT(0x0020ace8, d_0020ace8::SoundObj__set_flag_36);

// f_0020ada8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the sounds 0x100067a to 0x100067d, sets the flag (+0x39) when the sound system's level is above 40 or missing.
namespace d_0020ada8 {

struct __attribute__((packed)) SoundObj {
    u8 unknown_0[0x39];  // (not used here)
    u8 byte_39;
};
GUEST_OFFSET(SoundObj, byte_39, 0x39);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;

void SoundObj__update_for_sound(gptr<SoundObj> sound_obj, u32 r1) {
    u32 res_1 = r1 + 0xfefff986u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = res_1 == 1u;
    }
    if (!zf_1 && res_1 != 2u && res_1 != 3u) {
        guest::cpu()->r[1] = res_1;
        return;
    }
    u32 r1_1 = *gptr<u32>(*sound_system + 0xcf8u);  // (from the original)
    if (r1_1 == 0) {
        sound_obj->byte_39 = 1;
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = *gptr<u32>(r1_1 + 4u);
    if (s32(r1_2) <= s32(0x42200000u)) {  // (from the original)
        sound_obj->byte_39 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    sound_obj->byte_39 = 1;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0020ada8
GUEST_EXPORT(0x0020ada8, d_0020ada8::SoundObj__update_for_sound);

// f_0020ae0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flag at +0x39 and calls virtual 6 when it changes.
namespace d_0020ae0c {

struct __attribute__((packed)) SoundObj {
    u32 word_0;
    u8 unknown_4[0x35];  // (not used here)
    u8 byte_39;
};
GUEST_OFFSET(SoundObj, word_0, 0x0);
GUEST_OFFSET(SoundObj, byte_39, 0x39);


u32 SoundObj__set_flag_39(gptr<SoundObj> sound_obj, u32 r1) {
    u32 r2_1 = s8(sound_obj->byte_39);
    if (r2_1 == r1) {
        guest::cpu()->r[1] = r1;
        return sound_obj.addr();
    }
    sound_obj->byte_39 = u8(r1);
    u32 r1_1 = *gptr<u32>(sound_obj->word_0 + 0x18u);  // (from the original)
    // virtual function 6 of sound_obj.addr()
    return guest::call_address<u32>(r1_1, sound_obj.addr(), r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0020ae0c
GUEST_EXPORT(0x0020ae0c, d_0020ae0c::SoundObj__set_flag_39);

// f_0020ae2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ae2c {

struct __attribute__((packed)) Object_0020ae2c_2 {
    u32 word_0;
    float float_4;
};
GUEST_OFFSET(Object_0020ae2c_2, word_0, 0x0);
GUEST_OFFSET(Object_0020ae2c_2, float_4, 0x4);

struct __attribute__((packed)) Object_0020ae2c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0020ae2c_1, word_4, 0x4);

inline constexpr u32 sound_obj_params_address = 0x0094d0d8u;

void SoundObjBase__virtual_4(gptr<SoundObjBase> sound_obj_base, gptr<Object_0020ae2c_1> r1, gptr<Object_0020ae2c_2> arg2) {
    float S0_1 = arg2->float_4;
    float S1_1 = 0.0f;
    float S2_1 = std::bit_cast<float>(*gptr<u32>(sound_obj_base->word_3c * 0x1cu + sound_obj_params_address + 0x18u));  // (from the original)
    sound_obj_base->float_8 = std::bit_cast<float>(u32(arg2->word_0));
    float S0_2 = S0_1 + S2_1;
    if (S0_2 >= S1_1) {
        sound_obj_base->float_c = S0_2;
        u32 r1_1 = r1->word_4;
        sound_obj_base->word_10 = r1_1;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    float S1_2 = sound_obj_base->float_30;
    float S0_3 = S1_2 * S0_2;
    sound_obj_base->float_c = S0_3;
    u32 r1_2 = r1->word_4;
    sound_obj_base->word_10 = r1_2;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_0020ae2c
GUEST_EXPORT(0x0020ae2c, d_0020ae2c::SoundObjBase__virtual_4);

// f_0020aedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020aedc {

inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x001d7b90, u32(u32, u32)> SoundSystem__forget_object;

u32 stop_base(gptr<SoundObjBase> sound_obj_base, u32 r1) {
    u32 r0_1 = sound_obj_base->byte_34;
    if (r0_1 == 0) {
        return r0_1;
    }
    SoundSystem__forget_object(*sound_system + 0x754u, sound_obj_base.addr());  // (from the original)
    sound_obj_base->byte_34 = 0;
    return 0u;
}

}  // namespace d_0020aedc
GUEST_EXPORT_FRAMED(0x0020aedc, d_0020aedc::stop_base, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020af18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020af18 {

inline constexpr u32 vtable_SoundObjBase = 0x008ed810u;
inline guest::global<u32, 0x0020afa8> global_0020afa8;

void SoundObjBase__SoundObjBase(gptr<SoundObjBase> sound_obj_base) {
    sound_obj_base->word_4 = 8;
    float S0_1 = 2000.0f;
    sound_obj_base->vtable = vtable_SoundObjBase;
    sound_obj_base->float_8 = S0_1;
    sound_obj_base->float_c = S0_1;
    float S1_1 = 1.0f;
    float S0_2 = 0.0f;
    sound_obj_base->word_10 = *global_0020afa8;
    sound_obj_base->float_14 = S1_1;
    sound_obj_base->float_18 = S0_2;
    sound_obj_base->float_1c = S0_2;
    sound_obj_base->float_20 = S0_2;
    sound_obj_base->float_24 = S1_1;
    float S0_3 = -1.0f;
    sound_obj_base->word_28 = 0;
    sound_obj_base->float_2c = S0_3;
    sound_obj_base->float_30 = S1_1;
    sound_obj_base->byte_34 = 0;
    sound_obj_base->byte_35 = 0;
    sound_obj_base->byte_36 = 0;
    sound_obj_base->byte_37 = 1;
    sound_obj_base->byte_38 = 0;
    sound_obj_base->byte_39 = 1;
    sound_obj_base->word_40 = 0;
    sound_obj_base->word_3c = 3;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0020af18
GUEST_EXPORT(0x0020af18, d_0020af18::SoundObjBase__SoundObjBase);

// f_0020afb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020afb8 {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> SoundObjBase__virtual_2;

u32 SoundObjFall__virtual_2(gptr<SoundObjFall> sound_obj_fall) {
    sound_obj_fall->word_3c = 5;
    sound_obj_fall->byte_35 = 1;
    sound_obj_fall->byte_37 = 0;
    u32 r0_1 = sound_obj_fall->byte_34;
    if (r0_1 == 0) {
        sound_obj_fall->byte_39 = 0;
        r0_1 = SoundObjBase__virtual_2(sound_obj_fall.addr(), guest::cpu()->r[1], guest::cpu()->r[2], 0u);
        sound_obj_fall->word_5c = 0x1000786;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0020afb8
GUEST_EXPORT_FRAMED(0x0020afb8, d_0020afb8::SoundObjFall__virtual_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020b0d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b0d4 {

struct __attribute__((packed)) Object_0020b0d4_2 {
    float float_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0020b0d4_2, float_0, 0x0);
GUEST_OFFSET(Object_0020b0d4_2, word_4, 0x4);
GUEST_OFFSET(Object_0020b0d4_2, word_8, 0x8);

struct __attribute__((packed)) Local_0020b0d4_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    u8 unknown_8[0x10];  // (not used here)
    float float_18;
};
GUEST_OFFSET(Local_0020b0d4_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_0020b0d4_r0_1, float_18, 0x18);

struct __attribute__((packed)) Local_0020b0d4_r0_2 {
    u8 unknown_0[0xd11];  // (not used here)
    u8 byte_d11;
    u8 unknown_d12[0x2];  // (not used here)
    u32 word_d14;
    u32 word_d18;
};
GUEST_OFFSET(Local_0020b0d4_r0_2, byte_d11, 0xd11);
GUEST_OFFSET(Local_0020b0d4_r0_2, word_d14, 0xd14);
GUEST_OFFSET(Local_0020b0d4_r0_2, word_d18, 0xd18);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline constexpr u32 sound_obj_params_address = 0x0094d0d8u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x006b4aa8, u32(u32, u32, u32, u32)> lerp_by_range;
inline constexpr guest::Function<0x0081fe54, u32(u32, u32, u32, u32)> SoundObj_1___virtual_9;
inline constexpr guest::Function<0x00820098, u32(u32, u32, u32, u32)> SoundObj_1___virtual_4;

struct __attribute__((packed)) Frame_0020b0d4 {
    float float_0;
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0020b0d4, float_0, 0x0);
GUEST_OFFSET(Frame_0020b0d4, float_4, 0x4);
GUEST_OFFSET(Frame_0020b0d4, float_8, 0x8);
GUEST_SIZE(Frame_0020b0d4, 0x10);

u32 SoundObjFall__virtual_4(gptr<SoundObjHold> sound_obj_hold, u32 r1, gptr<Object_0020b0d4_2> arg2, float S0, float S1) {
    guest::StackFrameOf<Frame_0020b0d4> frame;  // the original's stack frame
    u32 r0 = sound_obj_hold.addr();
    u32 r2 = arg2.addr();
    gptr<Local_0020b0d4_r0_1> r0_1 = gptr<Local_0020b0d4_r0_1>(u32(sound_obj_hold->byte_34));
    u32 r7_1 = r1;
    u32 zf_1 = r0_1.addr() == 0;
    if (!zf_1) {
        r0_1 = gptr<Local_0020b0d4_r0_1>(sound_obj_hold->word_5c);
        zf_1 = r0_1.addr() + 1u == 0;
    }
    if (!zf_1) {
        u32 r1_1 = sound_obj_hold->word_3c;
        S1 = arg2->float_0;
        r1 = (r1_1 << 3) - r1_1;
        S0 = fabsf(S1);
        r0_1 = gptr<Local_0020b0d4_r0_1>((r1 << 2) + sound_obj_params_address);
        float S2_1 = r0_1->float_4;
        if (!(S0 > S2_1)) {
            float S3_1 = r0_1->float_18;
            S0 = fabsf(std::bit_cast<float>(arg2->word_4) + S3_1);
            if (!(S0 > S2_1)) {
                gptr<Local_0020b0d4_r0_2> r0_2 = gptr<Local_0020b0d4_r0_2>(*sound_system);
                u32 r1_2 = r0_2->byte_d11;
                if (r1_2 != 0) {
                    if (r1_2 == 1u || r1_2 == 2u) {
                        if (sound_obj_hold->byte_60 != 0) {
                            goto L_20b254;
                        }
                        sound_obj_hold->float_64 = S1;
                        sound_obj_hold->float_68 = std::bit_cast<float>(u32(arg2->word_4));
                        sound_obj_hold->float_6c = std::bit_cast<float>(u32(arg2->word_8));
                        sound_obj_hold->byte_60 = 1;
                        guest::cpu()->s[0] = S0;
                        guest::cpu()->s[1] = S1;
                        guest::cpu()->s[2] = S2_1;
                        guest::cpu()->s[3] = S3_1;
                        SoundObj_1___virtual_4(r0, r7_1, r2, guest::cpu()->r[3]);
                        S0 = guest::cpu()->s[0];
                        S1 = guest::cpu()->s[1];
                        S2_1 = guest::cpu()->s[2];
                        S3_1 = guest::cpu()->s[3];
                        goto L_20b264;
                    }
                    if (r1_2 == 3u) {
                        u32 r1_3 = r0_2->word_d18;
                        u32 r6_1 = s32(r1_3 + (r1_3 >> 0x1f)) >> 1;  // (from the original)
                        if (s32(r0_2->word_d14) < s32(r6_1)) {
                            float S0_1 = sound_obj_hold->float_64;
                            guest::cpu()->s[0] = S0_1;
                            guest::cpu()->s[1] = S1;
                            guest::cpu()->s[2] = S2_1;
                            guest::cpu()->s[3] = S3_1;
                            lerp_by_range(r6_1, r1_3, 0u, guest::cpu()->r[3]);
                            float S0_2 = guest::cpu()->s[0];
                            frame->float_0 = S0_2;
                            float S0_3 = sound_obj_hold->float_68;
                            float S1_1 = std::bit_cast<float>(arg2->word_4);
                            u32 r1_4 = *gptr<u32>(*sound_system + 0xd18u);  // (from the original)
                            guest::cpu()->s[0] = S0_3;
                            guest::cpu()->s[1] = S1_1;
                            lerp_by_range(r6_1, r1_4, 0u, guest::cpu()->r[3]);
                            float S0_4 = guest::cpu()->s[0];
                            frame->float_4 = S0_4;
                            float S1_2 = std::bit_cast<float>(arg2->word_8);
                            float S0_5 = sound_obj_hold->float_6c;
                            u32 r1_5 = *gptr<u32>(*sound_system + 0xd18u);  // (from the original)
                            guest::cpu()->s[0] = S0_5;
                            guest::cpu()->s[1] = S1_2;
                            lerp_by_range(r6_1, r1_5, 0u, guest::cpu()->r[3]);
                            float S0_6 = guest::cpu()->s[0];
                            frame->float_8 = S0_6;
                            r2 = frame.at(0).addr();
                            guest::cpu()->s[0] = S0_6;
                            SoundObj_1___virtual_4(r0, r7_1, r2, guest::cpu()->r[3]);
                            S0 = guest::cpu()->s[0];
                            S1 = guest::cpu()->s[1];
                            S2_1 = guest::cpu()->s[2];
                            S3_1 = guest::cpu()->s[3];
                            goto L_20b264;
                        }
                        goto L_20b254;
                    }
                    goto L_20b264;
                }
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2_1;
                guest::cpu()->s[3] = S3_1;
                SoundObj_1___virtual_4(r0, r7_1, r2, guest::cpu()->r[3]);
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2_1 = guest::cpu()->s[2];
                S3_1 = guest::cpu()->s[3];
                if (sound_obj_hold->byte_60 != 0) {
                    sound_obj_hold->byte_60 = 0;
                }
                goto L_20b264;
L_20b254:;
                r2 = r0 + 0x64u;  // (from the original)
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2_1;
                guest::cpu()->s[3] = S3_1;
                SoundObj_1___virtual_4(r0, r7_1, r2, guest::cpu()->r[3]);
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2_1 = guest::cpu()->s[2];
                S3_1 = guest::cpu()->s[3];
L_20b264:;
                u32 r1_6 = sound_obj_hold->word_5c;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2_1;
                guest::cpu()->s[3] = S3_1;
                r0_1 = gptr<Local_0020b0d4_r0_1>(SoundObj_1___virtual_9(r0, r1_6, r2, guest::cpu()->r[3]));
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1.addr();
}

}  // namespace d_0020b0d4
GUEST_EXPORT_FRAMED(0x0020b0d4, d_0020b0d4::SoundObjFall__virtual_4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0020b280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b280 {

struct __attribute__((packed)) Local_0020b280_r0_4 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Local_0020b280_r0_4, word_14, 0x14);
GUEST_OFFSET(Local_0020b280_r0_4, byte_18, 0x18);

struct __attribute__((packed)) Local_0020b280_r0_5 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0020b280_r0_5, float_0, 0x0);
GUEST_OFFSET(Local_0020b280_r0_5, float_4, 0x4);
GUEST_OFFSET(Local_0020b280_r0_5, float_8, 0x8);

inline constexpr u32 vtable_SoundObjHold = 0x008ed874u;
inline constexpr u32 vtable_SoundObj_1_ = 0x008f8d88u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> SoundObjBase__SoundObjBase;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundObj_1___SoundObj_0020b280(gptr<SoundObj_1_> sound_obj, u32 r1, u32 r2, u32 r3, float S0) {
    SoundObjBase__SoundObjBase(sound_obj.addr(), r1, r2, r3);
    sound_obj->vtable = vtable_SoundObj_1_;
    u32 r0_2 = for_each_element(sound_obj.addr() + 0x44u, 0x131800u, 4u, 1u);  // (from the original)
    gptr<Local_0020b280_r0_4> r0_4 = gptr<Local_0020b280_r0_4>(for_each_element(r0_2 + 4u, 0x1287a8u, 0x14u, 1u));  // (from the original)
    r0_4->word_14 = ~0u;
    *gptr<u32>(r0_4.addr() - 0x48u) = vtable_SoundObjHold;  // (from the original)
    u32 r1_1 = r0_4.addr() - 0x48u;  // (from the original)
    r0_4->byte_18 = 0;
    float S0_3 = 2000.0f;
    gptr<Local_0020b280_r0_5> r0_5 = gptr<Local_0020b280_r0_5>(r0_4.addr() + 0x1cu);  // (from the original)
    r0_5->float_0 = S0_3;
    r0_5->float_4 = S0_3;
    r0_5->float_8 = S0_3;
    *gptr<u32>(r1_1 + 4u) = 5;
    guest::cpu()->s[0] = S0_3;
    return r1_1;
}

}  // namespace d_0020b280
GUEST_EXPORT_FRAMED(0x0020b280, d_0020b280::SoundObj_1___SoundObj_0020b280, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020b3ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b3ac {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> SoundObjBase__virtual_2;

u32 SoundObjPond__virtual_2(gptr<SoundObjPond> sound_obj_pond) {
    sound_obj_pond->word_3c = 6;
    sound_obj_pond->byte_35 = 1;
    u32 r0_1 = sound_obj_pond->byte_34;
    if (r0_1 == 0) {
        sound_obj_pond->byte_39 = 0;
        r0_1 = SoundObjBase__virtual_2(sound_obj_pond.addr(), guest::cpu()->r[1], guest::cpu()->r[2], 1u);
        sound_obj_pond->word_5c = 0x1000787;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0020b3ac
GUEST_EXPORT_FRAMED(0x0020b3ac, d_0020b3ac::SoundObjPond__virtual_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020b494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the object and sets its speed to 6.
namespace d_0020b494 {

inline constexpr guest::Function<0x0047e100, u32(u32, u32, u32, u32)> Ndm__suspend;
inline constexpr guest::Function<0x0047e224, u32(u32, u32, u32, u32)> Thread__sleep_seconds;

void start_with_speed_6(u32 r0, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Ndm__suspend(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    float S0_1 = 6.0f;
    guest::cpu()->s[0] = S0_1;
    frame.release();
    Thread__sleep_seconds(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0020b494
GUEST_EXPORT(0x0020b494, d_0020b494::start_with_speed_6);

// f_0020b9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 0x14b0-byte block: its base, identity, records and its two time bytes (from the earliest time).
namespace d_0020b9b0 {

struct __attribute__((packed)) Block14b0 {
    u8 unknown_0[0x1404];  // (not used here)
    u32 word_1404;
    u32 word_1408;
    u32 word_140c;
    u8 unknown_1410[0x56];  // (not used here)
    u8 byte_1466;
    u8 byte_1467;
    u16 half_1468;
    u8 byte_146a;
    u8 byte_146b;
    u8 unknown_146c[0x42];  // (not used here)
    u8 byte_14ae;
};
GUEST_OFFSET(Block14b0, word_1404, 0x1404);
GUEST_OFFSET(Block14b0, word_1408, 0x1408);
GUEST_OFFSET(Block14b0, word_140c, 0x140c);
GUEST_OFFSET(Block14b0, byte_1466, 0x1466);
GUEST_OFFSET(Block14b0, byte_1467, 0x1467);
GUEST_OFFSET(Block14b0, half_1468, 0x1468);
GUEST_OFFSET(Block14b0, byte_146a, 0x146a);
GUEST_OFFSET(Block14b0, byte_146b, 0x146b);
GUEST_OFFSET(Block14b0, byte_14ae, 0x14ae);

inline constexpr guest::Function<0x002d39a8, u32(u32)> Record18__clear_2;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0056bb88, u32(u32)> construct_earliest_time_0056bb88;
inline constexpr guest::Function<0x00613e08, u32(u32, u32, u32, u32)> Block1404__clear;
inline constexpr guest::Function<0x006efcdc, u32(u32)> TimedValue__clear;

struct __attribute__((packed)) Frame_0020b9b0 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0020b9b0, word_4, 0x4);
GUEST_SIZE(Frame_0020b9b0, 0x10);

u32 Block14b0__clear(gptr<Block14b0> block14b0) {
    guest::StackFrameOf<Frame_0020b9b0> frame;  // the original's stack frame
    Block1404__clear(block14b0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    block14b0->word_1404 = 0;
    block14b0->word_1408 = 0;
    block14b0->word_140c = 0;
    TimedValue__clear(block14b0.addr() + 0x1410u);  // (from the original)
    clear_identity_with_flags(block14b0.addr() + 0x1420u);  // (from the original)
    Record18__clear_2(block14b0.addr() + 0x144eu);  // (from the original)
    u32 r5_1 = block14b0.addr() + 0x1466u;  // (from the original)
    construct_earliest_time_0056bb88(frame.at(0).addr());
    block14b0->byte_1466 = u8(frame->word_4);
    construct_earliest_time_0056bb88(frame.at(0).addr());
    block14b0->byte_1467 = u8(u32(s32(frame->word_4 << 0x10) >> 0x18));  // (from the original)
    block14b0->half_1468 = 0;
    block14b0->byte_146a = 0;
    block14b0->byte_146b = 0;
    block14b0->byte_14ae = 0;
    return block14b0.addr() + 0x1468u;  // (from the original)
}

}  // namespace d_0020b9b0
GUEST_EXPORT_FRAMED(0x0020b9b0, d_0020b9b0::Block14b0__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020bb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bb20 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32)> clear_number_pair;

u32 clear_number_pair_veneer() {
    return clear_number_pair(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0020bb20
GUEST_EXPORT(0x0020bb20, d_0020bb20::clear_number_pair_veneer);

// f_0020bb24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the number pair.
namespace d_0020bb24 {

inline constexpr guest::Function<0x0024ea1c, u32(u32)> clear_number_pair;

u32 NumberPair__construct(u32 number_pair) {
    clear_number_pair(number_pair);
    return number_pair;
}

}  // namespace d_0020bb24
GUEST_EXPORT_FRAMED(0x0020bb24, d_0020bb24::NumberPair__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020bb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bit `index` (below 6) of the bits at +0x28.
namespace d_0020bb3c {

struct __attribute__((packed)) Local_0020bb3c_r0_1 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Local_0020bb3c_r0_1, byte_28, 0x28);


u32 clear_bit_below_6_at_28(u32 r0, u32 r1) {
    if (r1 >= 6u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    gptr<Local_0020bb3c_r0_1> r0_1 = gptr<Local_0020bb3c_r0_1>(r0 + (r1 >> 3));
    u32 r1_1 = u32(r0_1->byte_28) & ~(1u << (r1 & 7u));
    r0_1->byte_28 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1.addr();
}

}  // namespace d_0020bb3c
GUEST_EXPORT(0x0020bb3c, d_0020bb3c::clear_bit_below_6_at_28);

// f_0020bb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The variant (2 * index or the next) chosen by the bit pair at 6 + 2 * index, taking it; random when both are free.
namespace d_0020bb60 {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32)> BitPair__state;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> random_below;

u32 pick_variant_from_bits_6(u32 bit_pair, u32 r1) {
    u32 r0_1 = BitPair__state(bit_pair, (r1 << 1) + 6u, 1u);
    u32 r0_2 = r1 << 1;
    if (r0_1 == 1u) {
        guest::cpu()->r[1] = r0_1;
        return r0_2;
    }
    if (r0_1 == 2u) {
        guest::cpu()->r[1] = r0_1;
        return r0_2 + 1u;
    }
    if (r0_1 != 3u) {
        guest::cpu()->r[1] = r0_1;
        return r0_2;
    }
    u32 random_2 = random_below(2u, r0_1);
    return random_2 + (r1 << 1);
}

}  // namespace d_0020bb60
GUEST_EXPORT_FRAMED(0x0020bb60, d_0020bb60::pick_variant_from_bits_6, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020bbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The variant (2 * index or the next) chosen by the bit pair at 2 * index, taking it; random when both are free.
namespace d_0020bbac {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32)> BitPair__state;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;

u32 pick_variant_from_bits_0(u32 bit_pair, u32 r1) {
    u32 r5_1 = r1 << 1;
    u32 r0_1 = BitPair__state(bit_pair, r5_1, 1u);
    if (r0_1 != 1u) {
        if (r0_1 == 2u) {
            return r5_1 + 1u;
        }
        if (r0_1 == 3u) {
            u32 random_2 = random_below(2u);
            return random_2 + (r1 << 1);
        }
    }
    return r5_1;
}

}  // namespace d_0020bbac
GUEST_EXPORT_FRAMED(0x0020bbac, d_0020bbac::pick_variant_from_bits_0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020bc68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The variant chosen by the bit pair at 0x20 + 2 * index (without taking it); -1 when neither is free.
namespace d_0020bc68 {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32)> BitPair__state;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;

u32 pick_variant_from_bits_22(u32 bit_pair, u32 r1) {
    u32 r4_1 = r1 - 1u;
    u32 r0_1 = BitPair__state(bit_pair, (r4_1 << 1) + 0x22u, 0u);  // (from the original)
    if (r0_1 == 1u) {
        return r4_1 << 1;
    }
    if (r0_1 == 2u) {
        return (r4_1 << 1) + 1u;
    }
    if (r0_1 != 3u) {
        return ~0u;
    }
    u32 random_2 = random_below(2u);
    return random_2 + (r4_1 << 1);
}

}  // namespace d_0020bc68
GUEST_EXPORT_FRAMED(0x0020bc68, d_0020bc68::pick_variant_from_bits_22, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020bcb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The variant (2 * index or the next) chosen by the bit pair at 0x10 + 2 * index, taking it; random when both are
// free.
namespace d_0020bcb8 {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32)> BitPair__state;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> random_below;

u32 pick_variant_from_bits_10(u32 bit_pair, u32 r1) {
    u32 r0_1 = BitPair__state(bit_pair, (r1 << 1) + 0x10u, 1u);  // (from the original)
    u32 r0_2 = r1 << 1;
    if (r0_1 == 1u) {
        guest::cpu()->r[1] = r0_1;
        return r0_2;
    }
    if (r0_1 == 2u) {
        guest::cpu()->r[1] = r0_1;
        return r0_2 + 1u;
    }
    if (r0_1 != 3u) {
        guest::cpu()->r[1] = r0_1;
        return r0_2;
    }
    u32 random_2 = random_below(2u, r0_1);
    return random_2 + (r1 << 1);
}

}  // namespace d_0020bcb8
GUEST_EXPORT_FRAMED(0x0020bcb8, d_0020bcb8::pick_variant_from_bits_10, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020bd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The state of the two bits at `index` of the 0x6c-bit set (+0x1a): 1 or 2 for the free one, 3 when both are free
// (marking both taken when asked), 0 when neither.
namespace d_0020bd70 {

struct __attribute__((packed)) Local_0020bd70_r0_1 {
    u8 unknown_0[0x1a];  // (not used here)
    u8 byte_1a;
};
GUEST_OFFSET(Local_0020bd70_r0_1, byte_1a, 0x1a);

struct __attribute__((packed)) Local_0020bd70_r12_1 {
    u8 unknown_0[0x1a];  // (not used here)
    u8 byte_1a;
};
GUEST_OFFSET(Local_0020bd70_r12_1, byte_1a, 0x1a);


u32 BitPair__state(u32 bit_pair, u32 r1, u32 r2) {
    u32 r4_1 = 1u << (r1 & 7u);
    u32 r3_1 = 3u;
    gptr<Local_0020bd70_r12_1> r12_1 = gptr<Local_0020bd70_r12_1>(bit_pair + (r1 >> 3));
    if (r1 < 0x6cu) {  // (from the original)
        if ((u32(r12_1->byte_1a) & r4_1) != 0) {
            r3_1 = 2u;
        }
    } else {
        r3_1 = 2u;
    }
    u32 r6_1 = r1 + 1u;
    u32 r5_1 = 1u << (r6_1 & 7u);
    gptr<Local_0020bd70_r0_1> r0_1 = gptr<Local_0020bd70_r0_1>(bit_pair + (r6_1 >> 3));
    if (r6_1 >= 0x6cu || (u32(r0_1->byte_1a) & r5_1) != 0) {  // (from the original)
        r3_1 &= 1u;
        if (r2 != 0 && r3_1 == 0) {
            if (r1 < 0x6cu) {  // (from the original)
                r12_1->byte_1a = u8(u32(r12_1->byte_1a) & ~r4_1);
            }
            r1 += 1u;
            if (r1 < 0x6cu) {  // (from the original)
                r1 = u32(r0_1->byte_1a) & ~r5_1;
                r0_1->byte_1a = u8(r1);
            }
            r3_1 = 3u;
        }
    }
    guest::cpu()->r[1] = r1;
    return r3_1 & 3u;
}

}  // namespace d_0020bd70
GUEST_EXPORT_FRAMED(0x0020bd70, d_0020bd70::BitPair__state, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0020be1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the 0x29-byte record.
namespace d_0020be1c {

struct __attribute__((packed)) Record29 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u16 half_18;
    u32 word_1a;
    u32 word_1e;
    u32 word_22;
    u16 half_26;
    u8 byte_28;
};
GUEST_OFFSET(Record29, half_0, 0x0);
GUEST_OFFSET(Record29, byte_2, 0x2);
GUEST_OFFSET(Record29, byte_3, 0x3);
GUEST_OFFSET(Record29, word_4, 0x4);
GUEST_OFFSET(Record29, word_8, 0x8);
GUEST_OFFSET(Record29, word_c, 0xc);
GUEST_OFFSET(Record29, word_10, 0x10);
GUEST_OFFSET(Record29, word_14, 0x14);
GUEST_OFFSET(Record29, half_18, 0x18);
GUEST_OFFSET(Record29, word_1a, 0x1a);
GUEST_OFFSET(Record29, word_1e, 0x1e);
GUEST_OFFSET(Record29, word_22, 0x22);
GUEST_OFFSET(Record29, half_26, 0x26);
GUEST_OFFSET(Record29, byte_28, 0x28);


void Record29__clear(gptr<Record29> record29) {
    record29->half_0 = 0;
    record29->byte_2 = 0;
    record29->byte_3 = 0;
    record29->word_4 = 0;
    record29->word_8 = 0;
    record29->word_c = 0;
    record29->word_10 = 0;
    record29->word_14 = 0;
    record29->half_18 = 0;
    record29->word_1a = 0;
    record29->word_1e = 0;
    record29->word_22 = 0;
    record29->half_26 = 0;
    record29->byte_28 = 0;
}

}  // namespace d_0020be1c
GUEST_EXPORT(0x0020be1c, d_0020be1c::Record29__clear);

// f_0020bec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the 0x29-byte record.
namespace d_0020bec8 {

struct __attribute__((packed)) Record29 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u16 half_18;
    u32 word_1a;
    u32 word_1e;
    u32 word_22;
    u16 half_26;
    u8 byte_28;
};
GUEST_OFFSET(Record29, half_0, 0x0);
GUEST_OFFSET(Record29, byte_2, 0x2);
GUEST_OFFSET(Record29, byte_3, 0x3);
GUEST_OFFSET(Record29, word_4, 0x4);
GUEST_OFFSET(Record29, word_8, 0x8);
GUEST_OFFSET(Record29, word_c, 0xc);
GUEST_OFFSET(Record29, word_10, 0x10);
GUEST_OFFSET(Record29, word_14, 0x14);
GUEST_OFFSET(Record29, half_18, 0x18);
GUEST_OFFSET(Record29, word_1a, 0x1a);
GUEST_OFFSET(Record29, word_1e, 0x1e);
GUEST_OFFSET(Record29, word_22, 0x22);
GUEST_OFFSET(Record29, half_26, 0x26);
GUEST_OFFSET(Record29, byte_28, 0x28);


void Record29__construct(gptr<Record29> record29) {
    record29->half_0 = 0;
    record29->byte_2 = 0;
    record29->byte_3 = 0;
    record29->word_4 = 0;
    record29->word_8 = 0;
    record29->word_c = 0;
    record29->word_10 = 0;
    record29->word_14 = 0;
    record29->half_18 = 0;
    record29->word_1a = 0;
    record29->word_1e = 0;
    record29->word_22 = 0;
    record29->half_26 = 0;
    record29->byte_28 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0020bec8
GUEST_EXPORT(0x0020bec8, d_0020bec8::Record29__construct);

// f_0020bf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the flag (+0x86c) of each of the 10 patterns.
namespace d_0020bf68 {


void PatternSet10__clear_flags(u32 pattern_set10) {
    u32 r2 = 0u;
    u32 r1 = r2;
    u32 r3 = r2;
    do {
        u32 r12_1 = (r2 << 4) - r2;
        u32 r2_1 = r2 + 1u;
        u32 r4_1 = (r2_1 << 4) - r2_1;
        r1 += 2u;
        *gptr<u8>(pattern_set10 + (r12_1 + (r12_1 << 3) << 4) + 0x86cu) = u8(r3);  // (from the original)
        r2 = r2_1 + 1u;
        *gptr<u8>(pattern_set10 + (r4_1 + (r4_1 << 3) << 4) + 0x86cu) = u8(r3);  // (from the original)
        guest::preempt();
    } while (r1 < 0xau);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0020bf68
GUEST_EXPORT_FRAMED(0x0020bf68, d_0020bf68::PatternSet10__clear_flags, 0x10);  // pushes {r4} first, as the original

// f_0020bfb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 10 patterns and their order bytes (+0x5460).
namespace d_0020bfb4 {

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> sead__FixedSafeString_30___FixedSafeString_001b3f24;

void PatternSet10__construct(u32 pattern_set10) {
    u32 r1_1 = 0;
    u32 r5 = pattern_set10;
    u32 r4 = 0u;
    do {
        sead__FixedSafeString_30___FixedSafeString_001b3f24(r5 + r4 * 0xfu * 0x90u, 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_2 = r4;
        r1_1 = r5 + r4 + 0x5460u;  // (from the original)
        r4 += 1u;
        *gptr<u8>(r1_1) = u8(r0_2);
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0020bfb4
GUEST_EXPORT_FRAMED(0x0020bfb4, d_0020bfb4::PatternSet10__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020c03c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the pattern matching the id.
namespace d_0020c03c {

struct __attribute__((packed)) PatternSet10 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x5702];  // (not used here)
    u8 byte_570b;
};
GUEST_OFFSET(PatternSet10, byte_8, 0x8);
GUEST_OFFSET(PatternSet10, byte_570b, 0x570b);

struct __attribute__((packed)) Local_0020c03c_r0_1 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Local_0020c03c_r0_1, byte_b, 0xb);

struct __attribute__((packed)) Local_0020c03c_r0_2 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Local_0020c03c_r0_2, byte_b, 0xb);

struct __attribute__((packed)) Local_0020c03c_r0_3 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Local_0020c03c_r0_3, byte_b, 0xb);

struct __attribute__((packed)) Local_0020c03c_r1_2 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_0020c03c_r1_2, byte_4, 0x4);


u32 PatternSet10__find(gptr<PatternSet10> pattern_set10, u32 r1) {
    u32 r0 = pattern_set10.addr();
    gptr<Local_0020c03c_r1_2> r1_2 = gptr<Local_0020c03c_r1_2>(0u);
    u32 r2_3 = 0;
    u32 res_2 = 0;
    u32 r2_6 = 0;
    u32 r2_7 = 0;
    gptr<Local_0020c03c_r0_2> r0_2 = gptr<Local_0020c03c_r0_2>(0u);
    u32 r1_3 = 0;
    u32 zf_1 = r1 == 0;
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (zf_1 || (r1 >> 0x1f) != 0u) {  // (from the original)
        if (s32(u32(*gptr<u8>(r0 + 0x570bu)) << 0x1e) >= 0) {  // (from the original)
            gptr<Local_0020c03c_r0_1> r0_1 = gptr<Local_0020c03c_r0_1>(r0 + 0x5700u);  // (from the original)
            u32 r1_1 = u32(r0_1->byte_b) & ~2u;
            r0_1->byte_b = u8(r1_1);
            guest::cpu()->r[1] = r1_1;
            return r0_1.addr();
        }
        r1_2 = gptr<Local_0020c03c_r1_2>(r0 + 4u);
        u32 r2_2 = u32(pattern_set10->byte_8) + 2u;
        if (s32(r2_2) < 0) {
            r2_3 = 0u;
            goto L_20c100;
        }
        if (s32(r2_2) > 0xf) {  // (from the original)
            r2_3 = 0xfu;  // (from the original)
            goto L_20c100;
        }
        r2_3 = r2_2 & 0xffu;  // (from the original)
        if (r2_3 <= 0xfu) {  // (from the original)
            goto L_20c100;
        }
        r1_2->byte_4 = 0xf;  // (from the original)
        r0_2 = gptr<Local_0020c03c_r0_2>(r0 + 0x5700u);  // (from the original)
        r1_3 = u32(r0_2->byte_b) & ~2u;
        r0_2->byte_b = u8(r1_3);
        guest::cpu()->r[1] = r1_3;
        return r0_2.addr();
    }
    res_2 = u32(pattern_set10->byte_570b) << 0x1e;  // (from the original)
    if (s32(res_2) >= 0) {
        r1_2 = gptr<Local_0020c03c_r1_2>(r0 + 4u);
        u32 r2_5 = (0u - r1) + u32(pattern_set10->byte_8);
        if (s32(r2_5) < 0) {
            r2_3 = 0u;
            goto L_20c100;
        }
        if (s32(r2_5) > 0xf) {  // (from the original)
            r2_3 = 0xfu;  // (from the original)
            goto L_20c100;
        }
        r2_3 = r2_5 & 0xffu;  // (from the original)
        if (r2_3 > 0xfu) {  // (from the original)
            r1_2->byte_4 = 0xf;  // (from the original)
            r0_2 = gptr<Local_0020c03c_r0_2>(r0 + 0x5700u);  // (from the original)
            r1_3 = u32(r0_2->byte_b) & ~2u;
            r0_2->byte_b = u8(r1_3);
            guest::cpu()->r[1] = r1_3;
            return r0_2.addr();
        }
        goto L_20c100;
    }
    r2_6 = 3u - r1;
    r1_2 = gptr<Local_0020c03c_r1_2>(r0 + 4u);
    r2_7 = r2_6 + u32(pattern_set10->byte_8);
    if (s32(r2_7) >= 0) {
        if (s32(r2_7) <= 0xf) {  // (from the original)
            r2_3 = r2_7 & 0xffu;  // (from the original)
            if (r2_3 > 0xfu) {  // (from the original)
                r1_2->byte_4 = 0xf;  // (from the original)
                r0_2 = gptr<Local_0020c03c_r0_2>(r0 + 0x5700u);  // (from the original)
                r1_3 = u32(r0_2->byte_b) & ~2u;
                r0_2->byte_b = u8(r1_3);
                guest::cpu()->r[1] = r1_3;
                return r0_2.addr();
            }
            goto L_20c100;
        }
        r2_3 = 0xfu;  // (from the original)
        goto L_20c100;
    }
    r2_3 = 0u;
    goto L_20c100;
L_20c100:;
    r1_2->byte_4 = u8(r2_3);
    gptr<Local_0020c03c_r0_3> r0_3 = gptr<Local_0020c03c_r0_3>(r0 + 0x5700u);  // (from the original)
    u32 r1_4 = u32(r0_3->byte_b) & ~2u;
    r0_3->byte_b = u8(r1_4);
    guest::cpu()->r[1] = r1_4;
    return r0_3.addr();
}

}  // namespace d_0020c03c
GUEST_EXPORT(0x0020c03c, d_0020c03c::PatternSet10__find);

// f_0020c118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the 0x6b88-byte main part of a player.
namespace d_0020c118 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

void copy_player_main_part() {
    copy_aligned_bytes(guest::cpu()->r[0], guest::cpu()->r[1], 0x6b88u, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0020c118
GUEST_EXPORT(0x0020c118, d_0020c118::copy_player_main_part);

// f_0020c124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// With a 10% chance, adds a friendship point.
namespace d_0020c124 {

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> random_below;
inline constexpr guest::Function<0x00312434, u32(u32, u32, u32)> VillagerMemory__add_friendship;

void maybe_add_friendship(u32 villager_memory, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 random_2 = random_below(0x64u, r1);  // (from the original)
    if (s32(random_2) >= 0xa) {  // (from the original)
        return;
    }
    frame.release();
    VillagerMemory__add_friendship(villager_memory, 1u, 0u);
    return;
}

}  // namespace d_0020c124
GUEST_EXPORT(0x0020c124, d_0020c124::maybe_add_friendship);

// f_0020c158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// With a 10% chance, adds a friendship point; true when it changed.
namespace d_0020c158 {

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> random_below;
inline constexpr guest::Function<0x00312434, u32(u32, u32, u32)> VillagerMemory__add_friendship;

u32 maybe_add_friendship_result(u32 villager_memory, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 random_2 = random_below(0x64u, r1);  // (from the original)
    if (s32(random_2) >= 0xa) {  // (from the original)
        return 0u;
    }
    frame.release();
    return VillagerMemory__add_friendship(villager_memory, 1u, 0u);
}

}  // namespace d_0020c158
GUEST_EXPORT(0x0020c158, d_0020c158::maybe_add_friendship_result);

// f_0020c500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the player's 0x6b88-byte main part: identity, items, counters, its 300 records and blocks.
namespace d_0020c500 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 unknown_9[0x21];  // (not used here)
    u8 byte_2a;
};
GUEST_OFFSET(Player, byte_4, 0x4);
GUEST_OFFSET(Player, byte_5, 0x5);
GUEST_OFFSET(Player, byte_6, 0x6);
GUEST_OFFSET(Player, byte_7, 0x7);
GUEST_OFFSET(Player, byte_8, 0x8);
GUEST_OFFSET(Player, byte_2a, 0x2a);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x001df0b0, u32(u32)> RoomScore__construct;
inline constexpr guest::Function<0x001e0370, u32(u32, u32)> TownEvent__apply_kind;
inline constexpr guest::Function<0x0024b7f8, u32(u32)> CounterTable__clear_0024b7f8;
inline constexpr guest::Function<0x002a71b4, u32(u32)> PlayerOutfits4__clear;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x00582dc4, u32(u32, u32)> store_byte_constant_pack_0xa8_00582dc4;
inline constexpr guest::Function<0x00613e08, u32(u32)> Block1404__clear;
inline constexpr guest::Function<0x006efcdc, u32(u32, u32)> TimedValue__clear;

void Player__clear_main_part(gptr<Player> player) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = player.addr();
    u32 r5 = r0;
    clear_aligned(r0, 0x6b88u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_identity_with_flags(r5 + 0x55a6u);  // (from the original)
    u32 r4_1 = r5 + 0xau;  // (from the original)
    Item__copy(r4_1, empty_item_address);
    Item__copy(r4_1 + 4u, empty_item_address);
    Item__copy(r4_1 + 8u, empty_item_address);
    Item__copy(r4_1 + 0xcu, empty_item_address);  // (from the original)
    Item__copy(r4_1 + 0x10u, empty_item_address);  // (from the original)
    Item__copy(r4_1 + 0x14u, empty_item_address);  // (from the original)
    Item__copy(r4_1 + 0x18u, empty_item_address);  // (from the original)
    Item__copy(r4_1 + 0x1cu, empty_item_address);  // (from the original)
    player->byte_2a = 1;
    player->byte_6 = 0;
    player->byte_4 = 0;
    player->byte_8 = 2;
    player->byte_5 = 0;
    player->byte_7 = 0;
    store_byte_constant_pack_0xa8_00582dc4((r5 + 4u) + 0x5494u, 2u);  // (from the original)
    CounterTable__clear_0024b7f8(r5 + 0x55dcu);  // (from the original)
    u32 r6 = r5 + 0x5700u;  // (from the original)
    u32 r4 = 0u;
    do {
        TownEvent__apply_kind(r6, r4);
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x12c);  // (from the original)
    Block1404__clear(r5 + 0x5734u);  // (from the original)
    PlayerOutfits4__clear(r5 + 0x5544u);  // (from the original)
    RoomScore__construct(r5 + 0x56c4u);  // (from the original)
    frame.release();
    TimedValue__clear((r5 + 0x5000u) + 0x6f0u, guest::cpu()->r[1]);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_0020c500
GUEST_EXPORT(0x0020c500, d_0020c500::Player__clear_main_part);

// f_0020cbf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the player's 0x6b88-byte main part: its 8 items, patterns, records, times, counters and blocks.
namespace d_0020cbf0 {

struct __attribute__((packed)) Player {
    u32 word_0;
    u8 unknown_4[0x26];  // (not used here)
    u8 byte_2a;
};
GUEST_OFFSET(Player, word_0, 0x0);
GUEST_OFFSET(Player, byte_2a, 0x2a);

struct __attribute__((packed)) Local_0020cbf0_r5_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0020cbf0_r5_1, byte_0, 0x0);
GUEST_OFFSET(Local_0020cbf0_r5_1, byte_1, 0x1);

struct __attribute__((packed)) Local_0020cbf0_r5_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_0020cbf0_r5_2, half_0, 0x0);
GUEST_OFFSET(Local_0020cbf0_r5_2, byte_2, 0x2);
GUEST_OFFSET(Local_0020cbf0_r5_2, byte_3, 0x3);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x001e0370, u32(u32, u32, u32, u32)> TownEvent__apply_kind;
inline constexpr guest::Function<0x0020c024, u32(u32)> Patterns10__construct;
inline constexpr guest::Function<0x0024b97c, u32(u32)> EncryptedTally24__construct;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0056bb88, u32(u32)> construct_earliest_time_0056bb88;
inline constexpr guest::Function<0x00582db8, u32(u32)> store_byte_constant_pack_0xa8_00582db8;
inline constexpr guest::Function<0x00613e24, u32(u32)> Block1404__construct;
inline constexpr guest::Function<0x006efd24, u32(u32)> TimedValue__construct;

struct __attribute__((packed)) Frame_0020cbf0 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0020cbf0, word_4, 0x4);
GUEST_SIZE(Frame_0020cbf0, 0x10);

u32 Player__construct_main_part(gptr<Player> player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0020cbf0> frame;  // the original's stack frame
    u32 r0 = player.addr();
    u32 r6 = 0u;
    player->word_0 = r6;
    u32 r0_1 = r0 + 0xau;  // (from the original)
    construct_empty_item(r0_1, r1, r2, r3);
    construct_empty_item(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    construct_empty_item(r0_1 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    construct_empty_item(r0_1 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    construct_empty_item(r0_1 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    construct_empty_item(r0_1 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    construct_empty_item(r0_1 + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    construct_empty_item(r0_1 + 0x1cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    Item__copy(r0_1, empty_item_address);
    Item__copy(r0_1 + 4u, empty_item_address);
    Item__copy(r0_1 + 8u, empty_item_address);
    Item__copy(r0_1 + 0xcu, empty_item_address);  // (from the original)
    Item__copy(r0_1 + 0x10u, empty_item_address);  // (from the original)
    Item__copy(r0_1 + 0x14u, empty_item_address);  // (from the original)
    Item__copy(r0_1 + 0x18u, empty_item_address);  // (from the original)
    Item__copy(r0_1 + 0x1cu, empty_item_address);  // (from the original)
    player->byte_2a = 1;
    u32 r0_17 = Patterns10__construct(r0_1 + 0x22u);  // (from the original)
    store_byte_constant_pack_0xa8_00582db8(r0_17 + 0x546cu);  // (from the original)
    u32 r0_20 = for_each_element(r0_17 + 0x5518u, 0x1df4c4u, 0x18u, 4u);  // (from the original)
    gptr<Local_0020cbf0_r5_1> r5_1 = gptr<Local_0020cbf0_r5_1>(r0_20 + 0x90u);  // (from the original)
    construct_earliest_time_0056bb88(frame.at(0).addr());
    r5_1->byte_0 = u8(frame->word_4);
    construct_earliest_time_0056bb88(frame.at(0).addr());
    r5_1->byte_1 = u8(u32(s32(frame->word_4 << 0x10) >> 0x18));  // (from the original)
    gptr<Local_0020cbf0_r5_2> r5_2 = gptr<Local_0020cbf0_r5_2>(r0_20 + 0x92u);  // (from the original)
    r5_2->half_0 = u16(r6);
    r5_2->byte_2 = u8(r6);
    r5_2->byte_3 = u8(r6);
    u32 r0_25 = EncryptedTally24__construct(r0_20 + 0x98u);  // (from the original)
    TimedValue__construct(r0_25 + 0x114u);  // (from the original)
    u32 r5 = r0_25 + 0x124u;  // (from the original)
    clear(r5, 0x34u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        TownEvent__apply_kind(r5, r4, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x12c);  // (from the original)
    u32 block1404 = r5 + 0x34u;  // (from the original)
    Block1404__construct(block1404);
    *gptr<u8>(block1404 + 0x1446u) = u8(r6);  // (from the original)
    *gptr<u8>((0x6b7au | u32(s32(0x6b7au) >> 5)) + (block1404 - 0x5734u)) = u8(r6);  // (from the original)
    guest::cpu()->r[1] = 0x6b7au;  // (from the original)
    return block1404 - 0x5734u;  // (from the original)
}

}  // namespace d_0020cbf0
GUEST_EXPORT_FRAMED(0x0020cbf0, d_0020cbf0::Player__construct_main_part, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020cd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the three bytes of color `index` (below 6) of the table at 0xad55d8; the first otherwise.
namespace d_0020cd9c {

struct __attribute__((packed)) Object_0020cd9c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0020cd9c_0, byte_0, 0x0);
GUEST_OFFSET(Object_0020cd9c_0, byte_1, 0x1);
GUEST_OFFSET(Object_0020cd9c_0, byte_2, 0x2);

struct __attribute__((packed)) Local_0020cd9c_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0020cd9c_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_0020cd9c_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_0020cd9c_ea_1, byte_2, 0x2);

inline constexpr u32 colors_6_address = 0x00ad55d8u;
inline guest::global<u8, 0x00ad55d8> colors_6;
inline guest::global<u8, 0x00ad55d9> global_00ad55d9;
inline guest::global<u8, 0x00ad55da> global_00ad55da;

void color3_of_6_colors(gptr<Object_0020cd9c_0> arg0, u32 r1) {
    if (r1 < 6u) {
        gptr<Local_0020cd9c_ea_1> ea_1 = gptr<Local_0020cd9c_ea_1>(r1 * 3u + colors_6_address);
        arg0->byte_0 = ea_1->byte_0;
        arg0->byte_1 = ea_1->byte_1;
        u32 r1_1 = ea_1->byte_2;
        arg0->byte_2 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_0 = *colors_6;
    arg0->byte_1 = *global_00ad55d9;
    u32 r1_2 = *global_00ad55da;
    arg0->byte_2 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0020cd9c
GUEST_EXPORT(0x0020cd9c, d_0020cd9c::color3_of_6_colors);

// f_0020cde4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the three bytes of color `index` (below 16) of the table at 0xad5602; the first otherwise.
namespace d_0020cde4 {

struct __attribute__((packed)) Object_0020cde4_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0020cde4_0, byte_0, 0x0);
GUEST_OFFSET(Object_0020cde4_0, byte_1, 0x1);
GUEST_OFFSET(Object_0020cde4_0, byte_2, 0x2);

struct __attribute__((packed)) Local_0020cde4_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0020cde4_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_0020cde4_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_0020cde4_ea_1, byte_2, 0x2);

inline constexpr u32 colors_16_address = 0x00ad5602u;
inline guest::global<u8, 0x00ad5602> colors_16;
inline guest::global<u8, 0x00ad5603> global_00ad5603;
inline guest::global<u8, 0x00ad5604> global_00ad5604;

void color3_of_16_colors(gptr<Object_0020cde4_0> arg0, u32 r1) {
    if (r1 < 0x10u) {  // (from the original)
        gptr<Local_0020cde4_ea_1> ea_1 = gptr<Local_0020cde4_ea_1>(r1 * 3u + colors_16_address);
        arg0->byte_0 = ea_1->byte_0;
        arg0->byte_1 = ea_1->byte_1;
        u32 r1_1 = ea_1->byte_2;
        arg0->byte_2 = u8(r1_1);
        return;
    }
    arg0->byte_0 = *colors_16;
    arg0->byte_1 = *global_00ad5603;
    u32 r1_2 = *global_00ad5604;
    arg0->byte_2 = u8(r1_2);
}

}  // namespace d_0020cde4
GUEST_EXPORT(0x0020cde4, d_0020cde4::color3_of_16_colors);

// f_0020ce2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the three bytes of color `index` (below 8) of the table at 0xad55ea; the first otherwise.
namespace d_0020ce2c {

struct __attribute__((packed)) Object_0020ce2c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0020ce2c_0, byte_0, 0x0);
GUEST_OFFSET(Object_0020ce2c_0, byte_1, 0x1);
GUEST_OFFSET(Object_0020ce2c_0, byte_2, 0x2);

struct __attribute__((packed)) Local_0020ce2c_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0020ce2c_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_0020ce2c_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_0020ce2c_ea_1, byte_2, 0x2);

inline constexpr u32 colors_8_address = 0x00ad55eau;
inline guest::global<u8, 0x00ad55ea> colors_8;
inline guest::global<u8, 0x00ad55eb> global_00ad55eb;
inline guest::global<u8, 0x00ad55ec> global_00ad55ec;

void color3_of_8_colors(gptr<Object_0020ce2c_0> arg0, u32 r1) {
    if (r1 < 8u) {
        gptr<Local_0020ce2c_ea_1> ea_1 = gptr<Local_0020ce2c_ea_1>(r1 * 3u + colors_8_address);
        arg0->byte_0 = ea_1->byte_0;
        arg0->byte_1 = ea_1->byte_1;
        u32 r1_1 = ea_1->byte_2;
        arg0->byte_2 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_0 = *colors_8;
    arg0->byte_1 = *global_00ad55eb;
    u32 r1_2 = *global_00ad55ec;
    arg0->byte_2 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0020ce2c
GUEST_EXPORT(0x0020ce2c, d_0020ce2c::color3_of_8_colors);

// f_0020d084: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the part at +0x4650, then clears entry `index` (below 4) of the item pairs at +0x45fc: its two items, flag,
// record and word.
namespace d_0020d084 {

struct __attribute__((packed)) Local_0020d084_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0020d084_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0020d084_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0020d084_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0020d084_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0020d084_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0020d084_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0020d084_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0020d084_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0020d084_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_0020d084_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0020d084_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0020d084_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0020d084_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0020d084_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_0020d084_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_0020d084_ea_3, word_14, 0x14);

struct __attribute__((packed)) Local_0020d084_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0020d084_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0020d084_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_0020d084_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_0020d084_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_0020d084_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_0020d084_ea_5, word_14, 0x14);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x0024e500, u32(u32, u32, u32, u32)> SaleSlots8__clear_player;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;

void ItemPairs4__clear_entry(u32 item_pairs4, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0020d084_ea_1> ea_1 = gptr<Local_0020d084_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r13 -= 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    SaleSlots8__clear_player(item_pairs4 + 0x4650u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0020d084_ea_2> ea_2 = gptr<Local_0020d084_ea_2>(r13);
    r13 += 0x10;  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    r14 = ea_2->word_c;
    if (r1 >= 4u) {
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[13] = r13;
        return;
    }
    gptr<Local_0020d084_ea_3> ea_3 = gptr<Local_0020d084_ea_3>(r13 - 0x18);  // (from the original)
    ea_3->word_0 = r4_1;
    ea_3->word_4 = r5_1;
    ea_3->word_8 = r6_1;
    ea_3->word_c = r7;
    ea_3->word_10 = r8;
    ea_3->word_14 = r14;
    r13 -= 0x18;  // (from the original)
    u32 r6_2 = item_pairs4 + 0x45fcu + (r1 << 2);  // (from the original)
    guest::cpu()->r[13] = r13;
    Item__copy(r6_2, empty_item_address);
    guest::cpu()->r[13] = r13;
    Item__copy(r6_2 + 0x10u, empty_item_address);  // (from the original)
    *gptr<u8>(item_pairs4 + 0x45fcu + r1 + 0x20u) = 0;  // (from the original)
    guest::cpu()->r[13] = r13;
    clear_inner(item_pairs4 + 0x45fcu + (r1 << 3) + 0x24u);  // (from the original)
    *gptr<u32>(r6_2 + 0x44u) = 0;  // (from the original)
    gptr<Local_0020d084_ea_5> ea_5 = gptr<Local_0020d084_ea_5>(r13);
    r13 += 0x18;  // (from the original)
    u32 r4_2 = ea_5->word_0;
    u32 r5_2 = ea_5->word_4;
    u32 r6_3 = ea_5->word_8;
    u32 r7_1 = ea_5->word_c;
    u32 r8_1 = ea_5->word_10;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0020d084
GUEST_EXPORT(0x0020d084, d_0020d084::ItemPairs4__clear_entry);

// f_0020d104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places item `index` (below 4) of the pairs in the room or the field (its first item, or the second when the flag is
// clear) when its owner is the current player, then marks it used.
namespace d_0020d104 {

struct __attribute__((packed)) Local_0020d104_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0020d104_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0020d104_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> RoomGrid__furniture_at_layer;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

struct __attribute__((packed)) Frame_0020d104 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0020d104, word_0, 0x0);
GUEST_SIZE(Frame_0020d104, 0x10);

u32 ItemPairs4__place_in_world(u32 item_pairs4, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0020d104> frame;  // the original's stack frame
    if (r2 >= 4u) {
        return item_pairs4;
    }
    gptr<Local_0020d104_ea_1> ea_1 = gptr<Local_0020d104_ea_1>(frame.at(0x30).addr());  // (from the original)
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    u32 r4_1 = item_pairs4 + (r2 << 2);
    u32 r12_1 = frame.at(4).addr();
    if (*gptr<u8>(item_pairs4 + r2 + 0x20u) != 0) {  // (from the original)
        Item__copy_b(r12_1, r4_1, r2, r3);
    } else {
        Item__copy_b(r12_1, r4_1 + 0x10u, r2, r3);  // (from the original)
    }
    u32 r0_1 = frame.at(8).addr();
    construct_item(r0_1, 0x7ffeu);  // (from the original)
    Item__copy(r4_1 + 0x10u, r0_1, r4_1 + 0x10u);  // (from the original)
    u32 scene = current_scene_id(frame.at(8).addr());
    if (scene == r1) {
        u32 r0_5 = item_has_valid_data(frame.at(4).addr());
        if (r0_5 != 0) {
            RoomGrid__furniture_at_layer(r3, r6_1, 0u, r7_1);
        } else {
            u32 map_table_2 = get_map_table(r0_5);
            if (map_table_2 != 0) {
                u32 r0_7 = frame.at(0xc).addr();  // (from the original)
                construct_item(r0_7, 0x7ffeu);  // (from the original)
                frame->word_0 = 0;
                GridMap__place_item_at_world(map_table_2, r0_7, r3, r6_1);
                clear_field_tile(r3, r6_1, 1u);
            }
        }
    }
    return frame.at(4).addr();
}

}  // namespace d_0020d104
GUEST_EXPORT_FRAMED(0x0020d104, d_0020d104::ItemPairs4__place_in_world, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0020d328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the four item pairs, their flags, records and words.
namespace d_0020d328 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;

void ItemPairs4__clear(u32 item_pairs4) {
    u32 r5 = item_pairs4;
    clear_aligned(item_pairs4, 0x54u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4 = 0u;
    u32 r7 = r4;
    do {
        u32 r6_1 = r5 + (r4 << 2);
        Item__copy(r6_1, empty_item_address);
        Item__copy(r6_1 + 0x10u, empty_item_address);  // (from the original)
        *gptr<u8>(r5 + r4 + 0x20u) = u8(r7);  // (from the original)
        clear_inner(r5 + (r4 << 3) + 0x24u);  // (from the original)
        r4 += 1u;
        *gptr<u32>(r6_1 + 0x44u) = r7;  // (from the original)
        guest::preempt();
    } while (s32(r4) < 4);
}

}  // namespace d_0020d328
GUEST_EXPORT_FRAMED(0x0020d328, d_0020d328::ItemPairs4__clear, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0020d600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts one of three reward items (chosen at random) in the record's slot.
namespace d_0020d600 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;

struct __attribute__((packed)) Frame_0020d600 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0020d600, word_0, 0x0);
GUEST_SIZE(Frame_0020d600, 0x4);

u32 pick_random_reward_item(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0020d600> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 random_2 = random_below(3u, r1, guest::cpu()->r[2], r3);
    if (random_2 != 0) {
        if (random_2 == 1u) {
            u32 r0_2 = frame.at(0).addr();
            construct_item(r0_2, 0x26ccu);  // (from the original)
            Item__copy(r0, r0_2);
            return frame.at(0).addr();
        }
        if (random_2 != 2u) {
            return random_2;
        }
        u32 r0_4 = frame.at(0).addr();
        construct_item(r0_4, 0x2767u);  // (from the original)
        Item__copy(r0 + 0xcu, r0_4);  // (from the original)
        return frame.at(0).addr();
    }
    u32 r0_7 = frame.at(0).addr();
    construct_item(r0_7, 0x25dau);  // (from the original)
    Item__copy(r0, r0_7);
    return frame.at(0).addr();
}

}  // namespace d_0020d600
GUEST_EXPORT_FRAMED(0x0020d600, d_0020d600::pick_random_reward_item, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0020d71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets item slot `index` (below 13) and, when the owner is the current player, shows it.
namespace d_0020d71c {

struct __attribute__((packed)) Local_0020d71c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0020d71c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0020d71c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0020d71c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0020d71c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0020d71c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0020d71c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0020d71c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0020d71c_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_0020d71c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0020d71c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0020d71c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0020d71c_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0020d71c_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0020d71c_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0020d71c_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_0020d71c_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_0020d71c_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_0020d71c_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_0020d71c_ea_3, word_1c, 0x1c);

inline constexpr guest::Function<0x0014f8a4, u32(u32, u32, u32, u32)> import_thunk_14f8a4;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;

void ItemSlots13__set_and_show(u32 item_slots13, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 0xdu) {  // (from the original)
        return;
    }
    gptr<Local_0020d71c_ea_1> ea_1 = gptr<Local_0020d71c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    gptr<Local_0020d71c_ea_2> ea_2 = gptr<Local_0020d71c_ea_2>(frame.at(0x20).addr());  // (from the original)
    u32 r6_1 = ea_2->word_0;
    u32 r7_1 = ea_2->word_4;
    u32 r0_1 = item_slots13 + (r2 << 2);
    Item__copy(r0_1, r3, r2, r3);
    u32 scene = current_scene_id(r0_1);
    if (scene == r1) {
        u32 r0_3 = frame.at(0).addr();
        Item__copy_b(r0_3, r3);
        import_thunk_14f8a4(r2, r0_3, r6_1, r7_1);
    }
    gptr<Local_0020d71c_ea_3> ea_3 = gptr<Local_0020d71c_ea_3>(frame.at(0).addr());
    u32 r4_1 = ea_3->word_4;
    u32 r5_1 = ea_3->word_8;
    u32 r6_2 = ea_3->word_c;
    u32 r7_2 = ea_3->word_10;
    u32 r8_1 = ea_3->word_14;
    u32 r9_1 = ea_3->word_18;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
}

}  // namespace d_0020d71c
GUEST_EXPORT(0x0020d71c, d_0020d71c::ItemSlots13__set_and_show);

// f_0020d8a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Flags the date when it is before the first valid month of 2012, then checks it.
namespace d_0020d8a4 {

struct __attribute__((packed)) TimeLimit {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(TimeLimit, byte_8, 0x8);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x0056b550, u32(u32, u32, u32, u32)> TimeLimit__apply;

u32 TimeLimit__check_date(gptr<TimeLimit> time_limit, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    time_limit->byte_8 = 0;
    gptr<Now> now = gptr<Now>(game_time_now(0u, r1, r2, guest::cpu()->r[3]));
    u32 r1_1 = now->word_0;
    u32 r0_2 = now->word_4;
    u32 zf_1 = r1_1 == 0x7dcu;  // (from the original)
    if (zf_1 || s32(r1_1) < s32(0x7dcu)) {  // (from the original)
        r1_1 = sxtb(r0_2);
        zf_1 = r1_1 == 1u;
    }
    if (!zf_1) {
        frame.release();
        return TimeLimit__apply(r0_2, r1_1, 0x7dcu, guest::cpu()->r[3]);  // (from the original)
    }
    u32 r1_2 = s32(r0_2 << 0x10) >> 0x18;  // (from the original)
    u32 nf_1 = r1_2 - 1u >> 0x1f;  // (from the original)
    u32 vf_1 = ((r1_2 ^ 1u) & (r1_2 ^ r1_2 - 1u)) >> 0x1f;  // (from the original)
    if (r1_2 - 1u == 0 || nf_1 != vf_1) {
        r0_2 = s32(r0_2) >> 0x18;  // (from the original)
        nf_1 = r0_2 - 6u >> 0x1f;  // (from the original)
        vf_1 = ((r0_2 ^ 6u) & (r0_2 ^ r0_2 - 6u)) >> 0x1f;  // (from the original)
    }
    if (nf_1 == vf_1) {
        frame.release();
        return TimeLimit__apply(r0_2, r1_2, 0x7dcu, guest::cpu()->r[3]);  // (from the original)
    }
    u32 r0_3 = u32(time_limit->byte_8) | 1u;
    time_limit->byte_8 = u8(r0_3);
    frame.release();
    return TimeLimit__apply(r0_3, r1_2, 0x7dcu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0020d8a4
GUEST_EXPORT(0x0020d8a4, d_0020d8a4::TimeLimit__check_date);

// f_0020fb10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives the present's contents: items to the pockets, or the room's wallpaper and floor.
namespace d_0020fb10 {

struct __attribute__((packed)) Present {
    u8 unknown_0[0x138];  // (not used here)
    u8 byte_138;
};
GUEST_OFFSET(Present, byte_138, 0x138);

inline guest::global<u8, 0x00953f68> tourney_kind;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002d4d30, u32(u32, u32)> RoomLayout__set_wallpaper;
inline constexpr guest::Function<0x002d5184, u32(u32, u32)> RoomLayout__set_floor;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc288, u32(u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x002fe9dc, u32(u32, u32)> clear_bit_keeping_one;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> pick_distinct_items;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x0030f594, u32(u32)> is_special_item;
inline constexpr guest::Function<0x00317efc, u32(u32, u32)> record_302_address_00317efc;
inline constexpr guest::Function<0x005c4e00, u32(u32, u32, u32, u32)> current_player_town_record;
inline constexpr guest::Function<0x005dc9d4, u32(u32, u32, u32)> Pockets__add_and_refresh;
inline constexpr guest::Function<0x00700198, u32(u32)> PlayerRecords__entry_for_slot;
inline constexpr guest::Function<0x0072031c, u32(u32, u32, u32, u32)> member_address_0x2f2_;
inline constexpr guest::Function<0x007203f0, u32(u32, u32, u32, u32)> member_address_0x2f6_;

void Present__give_contents(gptr<Present> present, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    u32 r0 = present.addr();
    u32 r4_2 = 0;
    u32 r0_1 = current_player_town_record(r0, r1, r2, r3);
    u32 r0_2 = record_302_address_00317efc(r0_1, 0u);
    u32 room_layout = r0_2;
    u32 r0_3 = member_address_0x2f2_(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = is_special_item(r0_3);
    if (r0_4 == 0) {
        u32 r0_5 = member_address_0x2f2_(room_layout, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        Pockets__add_and_refresh(r0 + 0x7cu, r0_5, 0u);  // (from the original)
        u32 r0_7 = member_address_0x2f2_(room_layout, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        Item__copy(r0 + 0x130u, r0_7);  // (from the original)
        present->byte_138 = 0;
    }
    u32 r0_9 = member_address_0x2f6_(room_layout, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_10 = is_special_item(r0_9);
    if (r0_10 == 0) {
        u32 r0_11 = member_address_0x2f6_(room_layout, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        Pockets__add_and_refresh(r0 + 0x7cu, r0_11, 0u);  // (from the original)
        u32 r0_13 = member_address_0x2f6_(room_layout, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        Item__copy(r0 + 0x130u, r0_13);  // (from the original)
        *gptr<u8>(r0 + 0x138u) = 0;  // (from the original)
    }
    u32 records_entry = PlayerRecords__entry_for_slot(4u);
    u32 records_entry_2 = PlayerRecords__entry_for_slot(4u);
    u32 r2_12 = *gptr<u16>(records_entry_2 + 2u);
    u64 res_1 = u64(0xcccccccdu) * (u32(*gptr<u16>(records_entry + 4u)) + r2_12);  // (from the original)
    u32 r1_9 = res_1;
    u32 r0_17 = u32(res_1 >> 0x20) >> 3;  // (from the original)
    u32 r4_1 = r0_17 + 0x1eu;  // (from the original)
    u32 r0_18 = read_global_object_byte(r0_17, r1_9, r2_12);
    if (r0_18 != 3u && *current_player_data != 0) {
        u32 r0_19 = *tourney_kind;
        if (r0_19 == 6u) {
            r4_2 = r4_1 + 0x32u;  // (from the original)
            goto L_20fc38;
        }
        if (r0_19 == 7u) {
            r4_2 = r4_1 - 0x14u;  // (from the original)
            goto L_20fc38;
        }
    }
    r4_2 = r4_1 + 0xau;  // (from the original)
L_20fc38:;
    u32 r5_1 = 1u;
    u32 r6 = r5_1;
    u32 random_3 = random_below(0x64u);  // (from the original)
    if (s32(random_3) < s32(r4_2)) {
        r5_1 = 0x36u;  // (from the original)
    }
    u32 random_4 = random_below(0x64u);  // (from the original)
    if (s32(random_4) < s32(r4_2)) {
        r6 = 0x36u;  // (from the original)
    }
    construct_empty_item(frame.at(0x2e8).addr());  // (from the original)
    ItemBitSet__clear_and_return(frame.at(0).addr());
    r0 = ItemSet__add_group_without_flags(frame.at(0).addr(), 3u, r5_1, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        u32 r0_25 = current_player_town_record(r0, r1, r2, r3);
        u32 r0_26 = record_302_address_00317efc(r0_25, r4 & 0xffu);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = *gptr<u8>(r0_26 + 0x1eu);  // (from the original)
        if (r0 >= 2u) {
            u32 r0_27 = member_address_0x2f2_(r0_26, r1, r2, r3);
            r0 = Item__is_empty(r0_27);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                u32 r0_28 = member_address_0x2f2_(r0_26, r1, r2, r3);
                r0 = clear_bit_keeping_one(frame.at(0).addr(), r0_28);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 6);
    pick_distinct_items(frame.at(0x2e8).addr(), 1u, frame.at(0).addr(), r3);  // (from the original)
    RoomLayout__set_wallpaper(room_layout, frame.at(0x2e8).addr());  // (from the original)
    construct_empty_item(frame.at(0x2e8).addr());  // (from the original)
    ItemBitSet__clear_and_return(frame.at(0).addr());
    r0 = ItemSet__add_group_without_flags(frame.at(0).addr(), 4u, r6, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        u32 r0_34 = current_player_town_record(r0, r1, r2, r3);
        u32 r0_35 = record_302_address_00317efc(r0_34, r4 & 0xffu);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = *gptr<u8>(r0_35 + 0x1eu);  // (from the original)
        if (r0 >= 2u) {
            u32 r0_36 = member_address_0x2f6_(r0_35, r1, r2, r3);
            r0 = Item__is_empty(r0_36);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                u32 r0_37 = member_address_0x2f6_(r0_35, r1, r2, r3);
                r0 = clear_bit_keeping_one(frame.at(0).addr(), r0_37);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 6);
    pick_distinct_items(frame.at(0x2e8).addr(), 1u, frame.at(0).addr(), r3);  // (from the original)
    RoomLayout__set_floor(room_layout, frame.at(0x2e8).addr());  // (from the original)
}

}  // namespace d_0020fb10
GUEST_EXPORT_FRAMED(0x0020fb10, d_0020fb10::Present__give_contents, 0x40f0);  // pushes {r4, r5, r6, room_layout, lr} first, as the original
