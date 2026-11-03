// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_004e0288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the check at 0x1531b8 gives exactly 1.
namespace d_004e0288 {

inline constexpr guest::Function<0x001531b8, u32(u32, u32, u32, u32)> Cfl__is_valid_index;

u32 check_is_1(u32 r0) {
    u32 r0_1 = Cfl__is_valid_index(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_004e0288
GUEST_EXPORT_FRAMED(0x004e0288, d_004e0288::check_is_1, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e029c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the three components call_004dfb58 gives (from the arguments) into entry `index` (0x24 bytes) as half floats,
// with a flag.
namespace d_004e029c {

struct __attribute__((packed)) Local_004e029c_r3_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Local_004e029c_r3_1, word_10, 0x10);
GUEST_OFFSET(Local_004e029c_r3_1, word_14, 0x14);
GUEST_OFFSET(Local_004e029c_r3_1, byte_18, 0x18);

inline constexpr u32 global_009aae90_address = 0x009aae90u;
inline constexpr guest::Function<0x004dfb58, u32(u32, u32, u32, u32)> Vec3__scale_and_offset;

struct __attribute__((packed)) Frame_004e029c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e029c, word_0, 0x0);
GUEST_OFFSET(Frame_004e029c, word_4, 0x4);
GUEST_OFFSET(Frame_004e029c, word_8, 0x8);
GUEST_OFFSET(Frame_004e029c, float_c, 0xc);
GUEST_SIZE(Frame_004e029c, 0x14);

u32 set_entry_half_float_xyz(u32 r0, u32 r1, u32 index, u32 r3) {
    guest::StackFrameOf<Frame_004e029c> frame;  // the original's stack frame
    u32 r12_3 = 0;
    u32 r0_5 = 0;
    u32 r0_8 = 0;
    float S0_1 = r3 == 0 ? 1.0f : 0.0f;
    frame->float_c = S0_1;
    guest::cpu()->s[0] = S0_1;
    Vec3__scale_and_offset(frame.at(0).addr(), r0, r1, r3);
    u32 r0_2 = frame->word_0;
    u32 r1_1 = frame->word_4;
    u32 r2_1 = frame->word_8;
    gptr<Local_004e029c_r3_1> entry = gptr<Local_004e029c_r3_1>((index * 3u + (index << 3) << 2) + global_009aae90_address + 4u);
    u32 r12_1 = r0_2 & ~0x80000000u;  // (from the original)
    if (r12_1 != 0) {
        u32 r12_2 = (r0_2 >> 0x17u & 0xffu) - 0x70u;  // (from the original)
        r12_3 = s32(r12_2) < 0 ? r0_2 >> 0x1f << 0xf : uxth((r0_2 & ~0x1f800000u) >> 0xd | r12_2 << 0xa | r0_2 >> 0x1f << 0xf);  // (from the original)
    } else {
        r12_3 = uxth((r0_2 & ~0x1f800000u) >> 0xd | r12_1 << 0xa | r0_2 >> 0x1f << 0xf);  // (from the original)
    }
    u32 r0_3 = r1_1 & ~0x80000000u;  // (from the original)
    if (r0_3 != 0) {
        u32 r0_4 = (r1_1 >> 0x17u & 0xffu) - 0x70u;  // (from the original)
        if (s32(r0_4) < 0) {
            r0_5 = r1_1 >> 0x1f << 0xf;  // (from the original)
        } else {
            u32 r5_1 = r1_1 & ~0x1f800000u;  // (from the original)
            r1_1 >>= 0x1f;  // (from the original)
            r0_5 = uxth(r5_1 >> 0xd | r0_4 << 0xa | r1_1 << 0xf);  // (from the original)
        }
    } else {
        u32 r5_2 = r1_1 & ~0x1f800000u;  // (from the original)
        r1_1 >>= 0x1f;  // (from the original)
        r0_5 = uxth(r5_2 >> 0xd | r0_3 << 0xa | r1_1 << 0xf);  // (from the original)
    }
    entry->word_10 = r12_3 | r0_5 << 0x10;  // (from the original)
    u32 r0_6 = r2_1 & ~0x80000000u;  // (from the original)
    if (r0_6 != 0) {
        u32 r0_7 = (r2_1 >> 0x17u & 0xffu) - 0x70u;  // (from the original)
        if (s32(r0_7) < 0) {
            r0_8 = r2_1 >> 0x1f << 0xf;  // (from the original)
        } else {
            r1_1 = (r2_1 & ~0x1f800000u) >> 0xd;  // (from the original)
            r0_8 = uxth(r1_1 | r0_7 << 0xa | r2_1 >> 0x1f << 0xf);  // (from the original)
        }
    } else {
        r1_1 = (r2_1 & ~0x1f800000u) >> 0xd;  // (from the original)
        r0_8 = uxth(r1_1 | r0_6 << 0xa | r2_1 >> 0x1f << 0xf);  // (from the original)
    }
    entry->word_14 = r0_8;
    entry->byte_18 = u8(r3);
    guest::cpu()->r[1] = r1_1;
    return r0_8;
}

}  // namespace d_004e029c
GUEST_EXPORT_FRAMED(0x004e029c, d_004e029c::set_entry_half_float_xyz, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004e0960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the motion parameters (target, mode 5, two halves, the float).
namespace d_004e0960 {

struct __attribute__((packed)) MotionParams {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    float float_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
};
GUEST_OFFSET(MotionParams, word_c, 0xc);
GUEST_OFFSET(MotionParams, float_10, 0x10);
GUEST_OFFSET(MotionParams, word_14, 0x14);
GUEST_OFFSET(MotionParams, word_18, 0x18);
GUEST_OFFSET(MotionParams, half_1c, 0x1c);
GUEST_OFFSET(MotionParams, half_1e, 0x1e);
GUEST_OFFSET(MotionParams, half_20, 0x20);


void MotionParams__set_float(gptr<MotionParams> motion_params, u32 r1, u32 r2, u32 r3) {
    u32 r12_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    float S0_1 = std::bit_cast<float>(*gptr<u32>(guest::cpu()->r[13] + 0xcu));  // (from the original)
    motion_params->word_c = r1;
    motion_params->word_14 = 5;
    motion_params->half_20 = 0;
    motion_params->word_18 = r2;
    motion_params->half_1c = u16(r3);
    motion_params->half_1e = u16(r12_1);
    motion_params->float_10 = S0_1;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_004e0960
GUEST_EXPORT_FRAMED(0x004e0960, d_004e0960::MotionParams__set_float, 0x30);  // pushes {r4, r5} first, as the original

// f_004e0998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the motion parameters (target, word, three halves) with no float.
namespace d_004e0998 {

struct __attribute__((packed)) MotionParams {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
};
GUEST_OFFSET(MotionParams, word_c, 0xc);
GUEST_OFFSET(MotionParams, word_10, 0x10);
GUEST_OFFSET(MotionParams, word_14, 0x14);
GUEST_OFFSET(MotionParams, word_18, 0x18);
GUEST_OFFSET(MotionParams, half_1c, 0x1c);
GUEST_OFFSET(MotionParams, half_1e, 0x1e);
GUEST_OFFSET(MotionParams, half_20, 0x20);

struct __attribute__((packed)) Local_004e0998_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e0998_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e0998_ea_1, word_4, 0x4);


void MotionParams__set(gptr<MotionParams> motion_params, u32 r1, u32 r2, u32 r3) {
    gptr<Local_004e0998_ea_1> ea_1 = gptr<Local_004e0998_ea_1>(guest::cpu()->r[13] + 8u);
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    motion_params->word_c = r1;
    motion_params->word_10 = 0;
    motion_params->word_18 = r2;
    motion_params->word_14 = 0;
    motion_params->half_1c = u16(r3);
    motion_params->half_1e = u16(r4_1);
    motion_params->half_20 = u16(r5_1);
}

}  // namespace d_004e0998
GUEST_EXPORT_FRAMED(0x004e0998, d_004e0998::MotionParams__set, 0x30);  // pushes {r4, r5} first, as the original

// f_004e09c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Appends `node` to the queue unless it is in it already.
namespace d_004e09c8 {

inline constexpr u32 unique_queue_address = 0x009aae5cu;
inline constexpr guest::Function<0x00138920, u32(u32, u32)> list_contains_node;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;

void queue_append_unique(u32 node) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = list_contains_node(unique_queue_address, node);
    if (r0_1 != 0) {
        return;
    }
    frame.release();
    queue_append(unique_queue_address, node);
    return;
}

}  // namespace d_004e09c8
GUEST_EXPORT(0x004e09c8, d_004e09c8::queue_append_unique);

// f_004e0a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls slot 4 of the transform node at 0x951530.
namespace d_004e0a48 {

inline constexpr u32 global_00951530_address = 0x00951530u;
inline constexpr guest::Function<0x004ee364, u32(u32, u32)> TransformNode__call_node_slot_4;

void call_slot_4_of_951530() {
    TransformNode__call_node_slot_4(global_00951530_address, 0u);
}

}  // namespace d_004e0a48
GUEST_EXPORT(0x004e0a48, d_004e0a48::call_slot_4_of_951530);

// f_004e0cbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0cbc {

inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> RoomGrid__cell;

u32 room_cell_occupied(u32 x, u32 z, u32 layer) {
    u32 cell_2 = RoomGrid__cell(room_grid_address, x, z, layer);
    return !(cell_2 + 1u == 0);
}

}  // namespace d_004e0cbc
GUEST_EXPORT_FRAMED(0x004e0cbc, d_004e0cbc::room_cell_occupied, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e10ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Leaves 64 and 2 in the float registers.
namespace d_004e10ac {


void constant_64_and_2() {
    float S1_1 = 2.0f;
    float S0_1 = 32.0f * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_004e10ac
GUEST_EXPORT(0x004e10ac, d_004e10ac::constant_64_and_2);

// f_004e1204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Empties the room's furniture grids (64 rows of 0x50 cells, and the 16 x 16 upper layer at +0x1400: -1 each) and its
// table of 48 furniture objects.
namespace d_004e1204 {

inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr u32 room_light_slots_address = 0x009c8fd4u;
inline guest::global<u8, 0x009529d5> room_flag_b;
inline guest::global<u8, 0x009529d6> room_flag_c;
inline guest::global<u8, 0x009529d7> room_flag_d;
inline constexpr guest::Function<0x004e1668, u32(u32, u32, u32, u32)> reset_room_light_slots;

u32 RoomGrid__reset(u32 r0_unused, u32 column, u32 r2, u32 r3) {
    u32 res_1 = 0;
    u32 r4 = 0u;
    *room_flag_b = u8(r4);
    *room_flag_c = u8(r4);
    *room_flag_d = u8(r4);
    reset_room_light_slots(room_light_slots_address, column, r2, r3);
    u32 grid = room_grid_address;
    u32 row = 0u;
    r2 = ~0u;
    do {
        column = 0u;
        r3 = 0x50u;  // (from the original)
        u32 r12 = grid + row * 0x50u;  // (from the original)
        u32 r5 = grid + (row << 4);
        do {
            *gptr<u8>(r12 + column) = u8(r2);
            if (column < 0x10u && row < 0x10u) {  // (from the original)
                *gptr<u8>(r5 + column + 0x1400u) = u8(r2);  // (from the original)
            }
            res_1 = r3 - 1u;
            r3 = res_1;
            column += 1u;
            guest::preempt();
        } while (res_1 != 0);
        row += 1u;
        guest::preempt();
    } while (row < 0x40u);  // (from the original)
    r2 = room_furniture_address;
    column = 0u;
    row = column;
    do {
        row += 2u;
        *gptr<u32>(r2 + (column << 2)) = r4;
        u32 r1_1 = column + 1u;
        *gptr<u32>(r2 + (r1_1 << 2)) = r4;
        column = r1_1 + 1u;
        guest::preempt();
    } while (row < 0x30u);  // (from the original)
    guest::cpu()->r[1] = column;
    return row;
}

}  // namespace d_004e1204
GUEST_EXPORT_FRAMED(0x004e1204, d_004e1204::RoomGrid__reset, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e12b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The furniture object of the grid entry call_004e1768 gives (its index into the table); null when none.
namespace d_004e12b4 {

inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> RoomGrid__scan_furniture;
inline constexpr guest::Function<0x005b42fc, u32(u32)> capped_count_for_kind;

u32 RoomGrid__furniture_of_entry(u32 grid) {
    u32 index = guest::cpu()->r[4];
    u32 r0_2 = 0;
    u32 r0_1 = RoomGrid__scan_furniture(grid, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        index = *gptr<u32>(r0_1);
        zf_1 = index + 1u == 0;
    }
    if (zf_1) {
        r0_2 = 0u;
    } else {
        u32 scene = current_scene_id(r0_1);
        u32 count_2 = capped_count_for_kind(scene);
        u32 cf_1 = count_2 >= 0x30u;  // (from the original)
        if (!cf_1 || count_2 == 0x30u) {  // (from the original)
            cf_1 = index >= count_2;
        }
        r0_2 = cf_1 ? 0u : gptr<u32>(room_furniture_address)[index];
    }
    return r0_2;
}

}  // namespace d_004e12b4
GUEST_EXPORT_FRAMED(0x004e12b4, d_004e12b4::RoomGrid__furniture_of_entry, 0x4070);  // pushes {index, r5, r6, lr} first, as the original

// f_004e13d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the two entries' furniture that is usable now (by its id and flags); null when none.
namespace d_004e13d0 {

struct __attribute__((packed)) Local_004e13d0_r0_2 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_004e13d0_r0_2, byte_4, 0x4);

inline constexpr guest::Function<0x004e12b4, u32(u32, u32)> RoomGrid__furniture_of_entry;
inline constexpr guest::Function<0x004e1768, u32(u32, u32)> RoomGrid__scan_furniture;
inline constexpr guest::Function<0x00573aac, u32(u32)> AcFtr__toggle_switch;
inline constexpr guest::Function<0x00750eb4, u32(u32)> AcFtr__data_flag_3;
inline constexpr guest::Function<0x00751990, u32(u32)> id_is_8870a0;
inline constexpr guest::Function<0x007519d8, u32(u32)> id_is_88709e;

u32 RoomGrid__usable_furniture_of_entries(u32 room_grid) {
    u32 furniture_3 = RoomGrid__furniture_of_entry(room_grid, 0u);
    gptr<Local_004e13d0_r0_2> r0_2 = gptr<Local_004e13d0_r0_2>(RoomGrid__scan_furniture(room_grid, 0u));
    u32 furniture_4 = RoomGrid__furniture_of_entry(room_grid, 1u);
    u32 r0_4 = RoomGrid__scan_furniture(room_grid, 1u);
    if (furniture_3 != 0 && r0_2.addr() != 0) {
        u32 r0_5 = id_is_88709e(furniture_3);
        if (r0_5 == 0) {
            u32 r0_6 = id_is_8870a0(furniture_3);
            if (r0_6 == 0) {
                goto L_4e146c;
            }
        }
        u32 r0_7 = AcFtr__data_flag_3(furniture_3);
        if (r0_7 == 0 || r0_2->byte_4 == 0) {
            u32 r0_8 = AcFtr__toggle_switch(furniture_3);
            if (r0_8 != 0) {
                return furniture_3;
            }
        }
    }
L_4e146c:;
    if (furniture_4 != 0 && r0_4 != 0) {
        u32 r0_9 = AcFtr__data_flag_3(furniture_4);
        if (r0_9 == 0 || *gptr<u8>(r0_4 + 4u) == 0) {
            u32 r0_10 = AcFtr__toggle_switch(furniture_4);
            if (r0_10 != 0) {
                return furniture_4;
            }
        }
    }
    if (furniture_3 == 0 || r0_2.addr() == 0) {
        return 0u;
    }
    u32 r0_12 = AcFtr__data_flag_3(furniture_3);
    if (r0_12 != 0 && r0_2->byte_4 != 0) {
        return 0u;
    }
    u32 r0_13 = AcFtr__toggle_switch(furniture_3);
    return r0_13 == 0 ? 0u : furniture_3;
}

}  // namespace d_004e13d0
GUEST_EXPORT_FRAMED(0x004e13d0, d_004e13d0::RoomGrid__usable_furniture_of_entries, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e14ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the furniture of the last valid entry (of the two) is of effective kind 0x2d.
namespace d_004e14ec {

inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> RoomGrid__scan_furniture;
inline constexpr guest::Function<0x005b42fc, u32(u32)> capped_count_for_kind;
inline constexpr guest::Function<0x00751870, u32(u32, u32)> FurnitureActor__effective_kind;

u32 RoomGrid__entry_furniture_is_kind_2d(u32 room_grid) {
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 cf_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r4 = 1u;
    u32 r7 = room_grid;
    do {
        u32 r0_1 = RoomGrid__scan_furniture(r7, r4 & 0xffu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            goto L_4e1560;
        }
        r5_1 = *gptr<u32>(r0_1);
        if (s32(r5_1) < 0) {
            goto L_4e1560;
        }
        r0_2 = current_scene_id(r0_1, r1);
        r0_3 = capped_count_for_kind(r0_2);
        r1 = guest::cpu()->r[1];
        cf_1 = r0_3 >= 0x30u;  // (from the original)
        if (!cf_1 || r0_3 == 0x30u) {  // (from the original)
            cf_1 = r5_1 >= r0_3;
        }
        if (cf_1) {
            goto L_4e1560;
        }
        r0_4 = gptr<u32>(room_furniture_address)[r5_1];
        if (r0_4 == 0) {
            goto L_4e1560;
        }
        r0_5 = FurnitureActor__effective_kind(r0_4, r1);
        r1 = guest::cpu()->r[1];
        if (r0_5 == 0x2du) {  // (from the original)
            return 1u;
        }
        return 0u;
L_4e1560:;
        r4 -= 1u;
        if (s32(r4) < 0) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_004e14ec
GUEST_EXPORT_FRAMED(0x004e14ec, d_004e14ec::RoomGrid__entry_furniture_is_kind_2d, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e1668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the two 0x40-byte slots from `slots`: no owner (-1), kind 4, every float 0.
namespace d_004e1668 {


void reset_room_light_slots(u32 slots, float S0) {
    u32 end = slots + 0x80u;  // (from the original)
    if (slots >= end) {
        guest::cpu()->r[1] = end;
        return;
    }
    u32 r12 = 0u;
    S0 = 0.0f;
    u32 r3 = ~0u;
    u32 r2 = 4u;
    do {
        *gptr<u32>(slots) = r3;
        *gptr<u8>(slots + 4u) = u8(r2);
        *gptr<u32>(slots + 8u) = std::bit_cast<u32>(S0);
        *gptr<u32>(slots + 0xcu) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(slots + 0x10u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(slots + 0x14u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(slots + 0x18u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(slots + 0x1cu) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(slots + 0x20u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(slots + 0x24u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(slots + 0x28u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(slots + 0x2cu) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(slots + 0x30u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(slots + 0x34u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u16>(slots + 0x38u) = u16(r12);  // (from the original)
        *gptr<u32>(slots + 0x3cu) = std::bit_cast<u32>(S0);  // (from the original)
        slots += 0x40u;  // (from the original)
        guest::preempt();
    } while (slots < end);
    guest::cpu()->r[1] = end;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_004e1668
GUEST_EXPORT(0x004e1668, d_004e1668::reset_room_light_slots);

// f_004e1a7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The room module's flag byte.
namespace d_004e1a7c {

inline guest::global<u8, 0x009529d4> room_flags;

u32 room_flag() {
    return *room_flags;
}

}  // namespace d_004e1a7c
GUEST_EXPORT(0x004e1a7c, d_004e1a7c::room_flag);

// f_004e1a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The room module's flag byte (a second copy of room_flag).
namespace d_004e1a90 {

inline guest::global<u8, 0x009529d4> room_flags;

u32 room_flag_2() {
    return *room_flags;
}

}  // namespace d_004e1a90
GUEST_EXPORT(0x004e1a90, d_004e1a90::room_flag_2);

// f_004e1aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the lookup through 004e1174 finds entry 1 of the table at 0x572258.
namespace d_004e1aa4 {

inline constexpr guest::Function<0x004e1174, u32(u32, u32, u32, u32)> RoomGrid__for_each_furniture;

u32 has_room_object_1() {
    u32 r0_1 = RoomGrid__for_each_furniture(0x572258u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_004e1aa4
GUEST_EXPORT_FRAMED(0x004e1aa4, d_004e1aa4::has_room_object_1, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e1ac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the furniture customization parameter file once, from the shared archive.
namespace d_004e1ac4 {

inline constexpr u32 npc_package_loader_address = 0x00975338u;
inline constexpr u32 global_009c79c4_address = 0x009c79c4u;
inline guest::global<u32, 0x00975338> npc_package_loader;
inline guest::global<u32, 0x009c79c8> global_009c79c8;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> FileLoader__load;
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> current_thread_context;

void load_furniture_remake_params(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (*global_009c79c8 != 0) {
        return;
    }
    u32 r0_2 = current_thread_context(*npc_package_loader, r1, r2, r3);
    frame.release();
    FileLoader__load(global_009c79c4_address, 0x4e1b04u, r0_2, 0u);
    return;  // (from the original)
}

}  // namespace d_004e1ac4
GUEST_EXPORT(0x004e1ac4, d_004e1ac4::load_furniture_remake_params);

// f_004e240c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places a piece of furniture at cell (x, z) of `layer` when the room grid has nothing there (with its effects); true
// when it did.
namespace d_004e240c {

struct __attribute__((packed)) Local_004e240c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e240c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e240c_ea_2, word_4, 0x4);

inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x00319aa4, u32(u32, u32, u32, u32)> BitTable__set_bit;
inline constexpr guest::Function<0x006904b4, u32(u32)> FurniturePlacement__start;
inline constexpr guest::Function<0x00691544, u32(u32, u32, u32, u32)> FurniturePlacement__init;
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> RoomGrid__cell;

struct __attribute__((packed)) Frame_004e240c {
    u32 scene;
    u32 layer;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e240c, scene, 0x0);
GUEST_OFFSET(Frame_004e240c, layer, 0x4);
GUEST_OFFSET(Frame_004e240c, word_8, 0x8);
GUEST_SIZE(Frame_004e240c, 0x18);

u32 RoomGrid__place_if_free(u32 grid, u32 x, u32 z, u32 r3) {
    guest::StackFrameOf<Frame_004e240c> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 layer = *frame.at<u32>(0x38);  // (from the original)
    gptr<Local_004e240c_ea_2> ea_2 = gptr<Local_004e240c_ea_2>(frame.at(0x3c).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r6_1 = ea_2->word_4;
    u32 cell_2 = RoomGrid__cell(room_grid_address, x, z, layer);
    if (cell_2 + 1u != 0) {
        r0_2 = 0u;
    } else {
        u32 r4_2 = 0u;
        if (r4_1 != 0) {
            r4_2 = 1u;
        }
        u32 zf_2 = r6_1 == 0;
        if (zf_2) {
            zf_2 = r4_2 == 0;
        } else {
            r4_2 = 4u;
        }
        if (zf_2) {
            u32 scene = current_scene_id(cell_2);
            frame->scene = scene;
            BitTable__set_bit(x, z, layer, 1u);
        }
        construct_empty_item(frame.at(0xc).addr());  // (from the original)
        frame->word_8 = r4_2;
        frame->layer = layer;
        frame->scene = r3;
        FurniturePlacement__init(frame.at(0xc).addr(), grid, x, z);  // (from the original)
        FurniturePlacement__start(frame.at(0xc).addr());  // (from the original)
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_004e240c
GUEST_EXPORT_FRAMED(0x004e240c, d_004e240c::RoomGrid__place_if_free, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e24d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The room module's flag byte (a third copy of room_flag).
namespace d_004e24d0 {

inline guest::global<u8, 0x009529d4> room_flags;

u32 room_flag_3() {
    return *room_flags;
}

}  // namespace d_004e24d0
GUEST_EXPORT(0x004e24d0, d_004e24d0::room_flag_3);

// f_004e2504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the four cells next to (x, z) holds an item (an item standing for another is looked through first)
// that passes item_not_kind_11_or_flag_1c_bit_2.
namespace d_004e2504 {

struct __attribute__((packed)) Local_004e2504_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e2504_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_004e2504_r0_2, word_4, 0x4);

inline constexpr u32 room_item_message_state_address = 0x0095bfe0u;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> Item__same_number_as;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x00303c98, u32(u32)> item_not_kind_11_or_flag_1c_bit_2;
inline constexpr guest::Function<0x004e0cec, u32(u32, u32, u32, u32)> item_covering_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;

struct __attribute__((packed)) Frame_004e2504 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 map;
};
GUEST_OFFSET(Frame_004e2504, word_0, 0x0);
GUEST_OFFSET(Frame_004e2504, map, 0x8);
GUEST_SIZE(Frame_004e2504, 0xc);

u32 has_neighbour_item(u32 x, u32 z, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e2504> frame;  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r5 = x;
    u32 r6 = z;
    u32 map_table_2 = get_map_table(x, z, r2, r3);
    frame->map = map_table_2;
    if (map_table_2 == 0) {
        return map_table_2;
    }
    u32 neighbour_offsets = 0x865628u;  // (from the original)
    u32 direction = 0u;
    u32 r11 = direction;
L_4e2530:;
    gptr<Local_004e2504_r0_2> r0_2 = gptr<Local_004e2504_r0_2>(neighbour_offsets + (direction << 3));
    u32 nx = r0_2->word_0 + r5;
    u32 nz = r0_2->word_4 + r6;
    u32 item = GridMap__process_world_position(frame->map, nx, nz, 0u);
    if (item == 0) {
        goto L_4e25e8;
    }
    r0_5 = Item__is_empty(item);
    if (r0_5 != 0) {
        goto L_4e25e8;
    }
    r0_6 = frame.at(4).addr();
    Item__copy_b(r0_6, item);
    r0_7 = frame.at(4).addr();
    r0_8 = Item__same_number_as(r0_7, room_item_message_state_address);
    if (r0_8 != 0) {
        u32 map = frame->map;
        frame->word_0 = r11;
        u32 item_4 = item_covering_tile(nx, nz, 0u, map);
        Item__copy(frame.at(4).addr(), item_4);
    }
    r0_11 = frame.at(4).addr();
    r0_12 = item_not_kind_11_or_flag_1c_bit_2(r0_11);
    if (r0_12 == 0) {
        goto L_4e25e0;
    }
    return 1u;
L_4e25e0:;
L_4e25e8:;
    direction += 1u;
    if (direction >= 4u) {
        return 0u;
    }
    guest::preempt();
    goto L_4e2530;
}

}  // namespace d_004e2504
GUEST_EXPORT_FRAMED(0x004e2504, d_004e2504::has_neighbour_item, 0x4ff0);  // pushes {direction, r5, r6, r7, r8, r9, neighbour_offsets, r11, lr} first, as the original

// f_004e263c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts down the four timers (16-bit, from +0) whose slot (+8) is in use, freeing a slot when its timer reaches 0.
namespace d_004e263c {

struct __attribute__((packed)) Local_004e263c_r12_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_004e263c_r12_1, byte_8, 0x8);

struct __attribute__((packed)) Local_004e263c_r1_1 {
    u16 half_0;
    u8 unknown_2[0xa];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Local_004e263c_r1_1, half_0, 0x0);
GUEST_OFFSET(Local_004e263c_r1_1, half_c, 0xc);


void count_down_4_timers(u32 timers) {
    gptr<Local_004e263c_r1_1> r1_1 = gptr<Local_004e263c_r1_1>(0u);
    u32 index = 0u;
    u32 r4 = index;
    u32 r5 = 0xa5u;  // (from the original)
    do {
        gptr<Local_004e263c_r12_1> r12_1 = gptr<Local_004e263c_r12_1>(timers + index);
        r1_1 = gptr<Local_004e263c_r1_1>(u32(r12_1->byte_8));
        if (r1_1.addr() < 0xa5u) {  // (from the original)
            r1_1 = gptr<Local_004e263c_r1_1>(timers + (index << 1));
            u32 r3_1 = r1_1->half_0;
            if (r3_1 != 0) {
                if (r3_1 >= 1u) {
                    r1_1->half_0 = u16(r3_1 - 1u);
                } else {
                    r1_1->half_0 = u16(r4);
                }
            }
            if (r1_1->half_0 == 0) {
                r12_1->byte_8 = u8(r5);
                r1_1->half_c = u16(r4);
            }
        }
        index += 1u;
        guest::preempt();
    } while (index < 4u);
    guest::cpu()->r[1] = r1_1.addr();
}

}  // namespace d_004e263c
GUEST_EXPORT_FRAMED(0x004e263c, d_004e263c::count_down_4_timers, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_004e26a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes a 14-byte record (three words and two bytes).
namespace d_004e26a0 {

struct __attribute__((packed)) Object_004e26a0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Object_004e26a0_0, word_0, 0x0);
GUEST_OFFSET(Object_004e26a0_0, word_4, 0x4);
GUEST_OFFSET(Object_004e26a0_0, word_8, 0x8);
GUEST_OFFSET(Object_004e26a0_0, byte_c, 0xc);
GUEST_OFFSET(Object_004e26a0_0, byte_d, 0xd);


void clear_14_byte_record(gptr<Object_004e26a0_0> arg0) {
    arg0->word_8 = 0;
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_d = 0;
    arg0->byte_c = 0;
}

}  // namespace d_004e26a0
GUEST_EXPORT(0x004e26a0, d_004e26a0::clear_14_byte_record);

// f_004e26bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e26bc {

struct __attribute__((packed)) Local_004e26bc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e26bc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e26bc_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_64_ = 0x00904950u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x004ee55c, u32(u32, u32, u32, u32)> LoadSplitWord__start_b;
inline constexpr guest::Function<0x00536060, u32(u32)> item_default_value;
inline constexpr guest::Function<0x00544a20, u32(u32, u32)> PrintOutput__finish_to_buffer;
inline constexpr guest::Function<0x00544d8c, u32(u32, u32, u32)> PrintOutput__write_wide;
inline constexpr guest::Function<0x00544f18, u32(u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> construct_print_output;
inline constexpr guest::Function<0x00768b6c, u32(u32, u32, u32, u32)> Item__has_nonzero_flag_nibble;
inline constexpr guest::Function<0x0076bf68, u32(u32)> Item__variant_index_in_size;
inline constexpr guest::Function<0x0076c648, u32(u32, u32, u32, u32)> Item__has_valid_value_06_and_flags_value;

struct __attribute__((packed)) Frame_004e26bc {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x3f];  // (not read or written by name)
    u32 word_4c;
    u8 byte_50;
    u8 unknown_51[0x43];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e26bc, object_0_vtable, 0x0);
GUEST_OFFSET(Frame_004e26bc, word_4, 0x4);
GUEST_OFFSET(Frame_004e26bc, byte_c, 0xc);
GUEST_OFFSET(Frame_004e26bc, word_4c, 0x4c);
GUEST_OFFSET(Frame_004e26bc, byte_50, 0x50);
GUEST_SIZE(Frame_004e26bc, 0x94);

u32 build_remake_texture_path(u32 load_split_word, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e26bc> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r0_1 = Item__has_valid_value_06_and_flags_value(r1, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = item_default_value(r1);
        if (r0_2 != 0) {
            u32 r0_3 = item_default_value(r1);
            gptr<Local_004e26bc_ea_1> ea_1 = gptr<Local_004e26bc_ea_1>(frame.at(4).addr());
            ea_1->word_0 = frame.at(0xc).addr();  // (from the original)
            ea_1->word_4 = 0x40;  // (from the original)
            u32 r3_3 = *empty_string;
            u32 r1_2 = frame->word_4 - 1u;
            *gptr<u8>(r1_2 + 0x40u) = u8(r3_3);  // (from the original)
            frame->byte_c = *empty_string;
            frame->object_0_vtable = vtable_sead__FixedSafeString_64_;
            u32 r0_4 = Item__has_nonzero_flag_nibble(r1, r1_2, 0x40u, r3_3);  // (from the original)
            if (r0_4 != 0) {
                u32 r0_5 = frame.at(0x70).addr();  // (from the original)
                construct_print_output(r0_5, frame.at(0).addr());
                print_append(r0_5, 0x4e27f4u);  // (from the original)
                print_append(r0_5, r0_3);
                u32 r0_6 = Item__variant_index_in_size(r1);
                frame->word_4c = r0_6;
                u32 r0_7 = PrintOutput__finish_to_buffer(r0_5, frame.at(0x50).addr());  // (from the original)
                if (r0_7 != 0) {
                    u32 r2_9 = *gptr<u32>(r0_5 + 4u);
                    PrintOutput__write_wide(frame.at(0x4c).addr(), frame->byte_50 == 0 ? 0u : frame.at(0x50).addr(), r2_9);  // (from the original)
                }
                print_finish(r0_5);
                r0_8 = LoadSplitWord__start_b(load_split_word, frame.at(0).addr(), r2, 0x80u);  // (from the original)
                if (r0_8 != 0) {
                    r0_8 = 1u;
                }
            } else {
                r0_8 = 1u;
            }
            return r0_8;
        }
    }
    return 0u;
}

}  // namespace d_004e26bc
GUEST_EXPORT_FRAMED(0x004e26bc, d_004e26bc::build_remake_texture_path, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004e2cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e2cfc {

struct __attribute__((packed)) Local_004e2cfc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e2cfc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e2cfc_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_64_ = 0x00904950u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> LoadSplitWord__start;
inline constexpr guest::Function<0x00536060, u32(u32)> item_default_value;
inline constexpr guest::Function<0x00544a20, u32(u32, u32)> PrintOutput__finish_to_buffer;
inline constexpr guest::Function<0x00544d8c, u32(u32, u32, u32)> PrintOutput__write_wide;
inline constexpr guest::Function<0x00544f18, u32(u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> construct_print_output;
inline constexpr guest::Function<0x00768b6c, u32(u32, u32, u32, u32)> Item__has_nonzero_flag_nibble;
inline constexpr guest::Function<0x0076bf68, u32(u32)> Item__variant_index_in_size;
inline constexpr guest::Function<0x0076c648, u32(u32, u32, u32, u32)> Item__has_valid_value_06_and_flags_value;

struct __attribute__((packed)) Frame_004e2cfc {
    u8 unknown_0[0x8];  // (not read or written by name)
    u8 byte_8;
    u8 unknown_9[0x1f];  // (not read or written by name)
    u32 object_28_vtable;
    u8 unknown_2c[0x4];  // (not read or written by name)
    u32 word_30;
    u8 byte_34;
    u8 unknown_35[0x3f];  // (not read or written by name)
    u32 word_74;
    u8 unknown_78[0x20];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e2cfc, byte_8, 0x8);
GUEST_OFFSET(Frame_004e2cfc, object_28_vtable, 0x28);
GUEST_OFFSET(Frame_004e2cfc, word_30, 0x30);
GUEST_OFFSET(Frame_004e2cfc, byte_34, 0x34);
GUEST_OFFSET(Frame_004e2cfc, word_74, 0x74);
GUEST_SIZE(Frame_004e2cfc, 0x98);

u32 build_remake_texture_path_b(u32 load_split_word, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e2cfc> frame;  // the original's stack frame
    u32 r0_1 = Item__has_valid_value_06_and_flags_value(r1, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = item_default_value(r1);
        if (r0_2 != 0) {
            u32 r0_3 = item_default_value(r1);
            gptr<Local_004e2cfc_ea_1> ea_1 = gptr<Local_004e2cfc_ea_1>(frame.at(0x2c).addr());  // (from the original)
            ea_1->word_0 = frame.at(0x34).addr();  // (from the original)
            ea_1->word_4 = 0x40;  // (from the original)
            u32 r2_3 = frame->word_30;
            u32 r4_1 = 1u;
            u32 r3_3 = *empty_string;
            *gptr<u8>(r2_3 + frame.at(0x33).addr()) = u8(r3_3);  // (from the original)
            frame->byte_34 = *empty_string;
            frame->object_28_vtable = vtable_sead__FixedSafeString_64_;
            u32 r0_4 = Item__has_nonzero_flag_nibble(r1, 0x8c9f1cu, r2_3, r3_3);  // (from the original)
            if (r0_4 != 0) {
                u32 r0_5 = frame.at(0x78).addr();  // (from the original)
                construct_print_output(r0_5, frame.at(0x28).addr());  // (from the original)
                print_append(r0_5, 0x4e2e2cu);  // (from the original)
                print_append(r0_5, r0_3);
                u32 r0_6 = Item__variant_index_in_size(r1);
                frame->word_74 = r0_6;
                u32 r0_7 = PrintOutput__finish_to_buffer(r0_5, frame.at(8).addr());
                if (r0_7 != 0) {
                    PrintOutput__write_wide(frame.at(0x74).addr(), frame->byte_8 == 0 ? 0u : frame.at(8).addr(), *gptr<u32>(r0_5 + 4u));  // (from the original)
                }
                print_finish(r0_5);
                u32 r0_8 = LoadSplitWord__start(load_split_word, frame.at(0x28).addr(), r2, 0x80u);  // (from the original)
                r4_1 = r0_8;
            }
            return r4_1;
        }
    }
    return 1u;
}

}  // namespace d_004e2cfc
GUEST_EXPORT_FRAMED(0x004e2cfc, d_004e2cfc::build_remake_texture_path_b, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e3354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs 004e8ed4 with an empty item on the first room furniture (up to the capped count) with id 0x8870a0 and field
// 0x7a3 set; true when there is none.
namespace d_004e3354 {

struct __attribute__((packed)) Local_004e3354_r6_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e3354_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_004e3354_r6_1, word_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x004e8ed4, u32(u32, u32, u32, u32)> RoomFurniture__place;
inline constexpr guest::Function<0x005b42fc, u32(u32)> capped_count_for_kind;
inline constexpr guest::Function<0x00746f24, u32(u32, u32, u32, u32)> RequestPool__current_time;
inline constexpr guest::Function<0x00750090, u32(u32, u32, u32, u32)> read_field_s8_0x7a3_;
inline constexpr guest::Function<0x00751990, u32(u32, u32, u32, u32)> id_is_8870a0;

struct __attribute__((packed)) Frame_004e3354 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e3354, word_0, 0x0);
GUEST_SIZE(Frame_004e3354, 0x10);

u32 act_on_first_flagged_furniture(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e3354> frame;  // the original's stack frame
    u32 scene = current_scene_id(r0, r1, r2, r3);
    r0 = capped_count_for_kind(scene);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 count = r0;
    u32 index = 0u;
    if (r0 >= 0u && r0 != 0) {
        do {
            u32 scene_2 = current_scene_id(r0, r1, r2, r3);
            r0 = capped_count_for_kind(scene_2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 cf_1 = r0 >= 0x30u;  // (from the original)
            if (!cf_1 || r0 == 0x30u) {  // (from the original)
                cf_1 = index >= r0;
            }
            if (!cf_1) {
                u32 furniture = gptr<u32>(room_furniture_address)[index];
                if (furniture != 0) {
                    r0 = id_is_8870a0(furniture, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0 != 0) {
                        r0 = read_field_s8_0x7a3_(furniture, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0 != 0) {
                            u32 now = RequestPool__current_time(request_pool_address, r1, r2, r3);
                            gptr<Local_004e3354_r6_1> r6_1 = gptr<Local_004e3354_r6_1>(frame.at(4).addr());
                            frame->word_0 = 0x95bfdc;  // (from the original)
                            r6_1->word_0 = 0x95bfdc;  // (from the original)
                            r6_1->word_4 = 1;
                            u32 r0_4 = RoomFurniture__place(furniture, 0u, now, guest::cpu()->r[1]);
                            return r0_4;
                        }
                    }
                }
            }
            index += 1u;
            guest::preempt();
        } while (index < count);
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_004e3354
GUEST_EXPORT_FRAMED(0x004e3354, d_004e3354::act_on_first_flagged_furniture, 0x4070);  // pushes {index, r5, count, lr} first, as the original

// f_004e35f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The room module's flag byte (a fourth copy of room_flag).
namespace d_004e35f0 {

inline guest::global<u8, 0x009529d4> room_flags;

u32 room_flag_4() {
    return *room_flags;
}

}  // namespace d_004e35f0
GUEST_EXPORT(0x004e35f0, d_004e35f0::room_flag_4);

// f_004e3604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the room flag; asks the main object to send message 0x5b when it is busy, else clears the first timer byte.
namespace d_004e3604 {

inline constexpr u32 room_flags_address = 0x009529d4u;
inline constexpr u32 room_timers_address = 0x009c79d4u;
inline guest::global<u8, 0x009529d4> room_flags;
inline guest::global<u8, 0x009c79d4> room_timers;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

u32 clear_room_flag_and_timers(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *room_flags = 0;
    u32 r0_1 = current_net_signed_value(room_flags_address, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = main_object_idle(r0_1);
        if (r0_2 == 0) {
            frame.release();
            return send_message(0x5bu, 0u, 0u, 0u);  // (from the original)
        }
    }
    *room_timers = 0;
    return room_timers_address;
}

}  // namespace d_004e3604
GUEST_EXPORT(0x004e3604, d_004e3604::clear_room_flag_and_timers);

// f_004e36c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the furniture at (x, z) is of class 19 and the item map holds nothing at that cell.
namespace d_004e36c0 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> Item__same_number_as;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;
inline constexpr guest::Function<0x00751d34, u32(u32)> furniture_class_19;

u32 is_class_19_furniture_on_empty_cell(u32 x, u32 z) {
    u32 scene = current_scene_id(x);
    u32 scene_flagged = scene_has_flags(8u, scene);
    if (scene_flagged != 0) {
        u32 map_table_2 = get_map_table(scene_flagged);
        u32 furniture = RoomGrid__furniture_at(room_grid_address, x, z, 0u);
        u32 zf_1 = map_table_2 == 0;
        if (!zf_1) {
            zf_1 = furniture == 0;
        }
        if (!zf_1) {
            u32 item = GridMap__process_world_position(map_table_2, x, z, 1u);
            u32 r0_6 = furniture_class_19(furniture);
            if (r0_6 == 1u && item != 0) {
                u32 r0_7 = Item__same_number_as(item, empty_item_address);
                if (r0_7 != 0) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_004e36c0
GUEST_EXPORT_FRAMED(0x004e36c0, d_004e36c0::is_class_19_furniture_on_empty_cell, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e3768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The room module's flag byte (a fifth copy of room_flag).
namespace d_004e3768 {

inline guest::global<u8, 0x009529d4> room_flags;

u32 room_flag_5() {
    return *room_flags;
}

}  // namespace d_004e3768
GUEST_EXPORT(0x004e3768, d_004e3768::room_flag_5);

// f_004e39c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In scene 0x35, sets bit 0x20 of the 16-bit flags at +0x764 of the furniture at (x, z).
namespace d_004e39c4 {

struct __attribute__((packed)) Local_004e39c4_r0_3 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
};
GUEST_OFFSET(Local_004e39c4_r0_3, half_64, 0x64);

inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;

void mark_furniture_at_in_scene_0x35(u32 x, u32 z) {
    u32 scene = current_scene_id(x, z);
    if (scene == 0x35u) {  // (from the original)
        u32 furniture = RoomGrid__furniture_at(room_grid_address, x, z, 0u);
        if (furniture != 0) {
            gptr<Local_004e39c4_r0_3> r0_3 = gptr<Local_004e39c4_r0_3>(furniture + 0x700u);  // (from the original)
            u32 r1_2 = u32(r0_3->half_64) | 0x20u;  // (from the original)
            r0_3->half_64 = u16(r1_2);
            guest::cpu()->r[1] = r1_2;
            return;
        }
    }
}

}  // namespace d_004e39c4
GUEST_EXPORT_FRAMED(0x004e39c4, d_004e39c4::mark_furniture_at_in_scene_0x35, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e3a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The state byte of the furniture at (x, z) when it has one (flag bit 2), else 0xff.
namespace d_004e3a1c {

inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline guest::global<u32, 0x0094f310> scene_object_pool;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x00750894, u32(u32)> record_flag_bit_2;
inline constexpr guest::Function<0x00750994, u32(u32)> AcFtr__state;

u32 furniture_state_at(u32 x, u32 z) {
    if (*scene_object_pool == 0) {
        return 0xffu;  // (from the original)
    }
    u32 furniture = RoomGrid__furniture_at(room_grid_address, x, z, 0u);
    if (furniture == 0) {
        return 0xffu;  // (from the original)
    }
    u32 r0_2 = record_flag_bit_2(furniture);
    if (r0_2 == 0) {
        return 0xffu;  // (from the original)
    }
    u32 state = AcFtr__state(furniture);
    if (state != 0) {
        return state;
    }
    return 0xffu;  // (from the original)
}

}  // namespace d_004e3a1c
GUEST_EXPORT_FRAMED(0x004e3a1c, d_004e3a1c::furniture_state_at, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e3f8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs 006311a4 on the furniture (id 0x88709c) under `position`, with the offset (32, 0, 0) and whether table bit 4 is
// clear.
namespace d_004e3f8c {

inline constexpr u32 furniture_touch_offset_plus_address = 0x009529f4u;
inline constexpr u32 offset_plus_x_address = 0x009c79b8u;
inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline guest::global<u32, 0x009529f4> furniture_touch_offset_plus;
inline guest::global<u32, 0x009c79b8> offset_plus_x;
inline guest::global<u32, 0x009c79bc> global_009c79bc;
inline guest::global<u32, 0x009c79c0> global_009c79c0;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x006311a4, u32(u32, u32, u32, u32)> FurniturePlacement__find_spot;
inline constexpr guest::Function<0x00751840, u32(u32)> id_is_88709c;

struct __attribute__((packed)) Frame_004e3f8c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_004e3f8c, word_0, 0x0);
GUEST_OFFSET(Frame_004e3f8c, word_4, 0x4);
GUEST_SIZE(Frame_004e3f8c, 0x8);

u32 touch_furniture_at_position_plus_x(u32 r0, u32 position, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_004e3f8c> frame;  // the original's stack frame
    u32 r6_1 = position;
    u32 r8_1 = r2;
    u32 r0_1 = *furniture_touch_offset_plus;
    if ((r0_1 & 1u) == 0) {
        r0_1 = static_guard_acquire(furniture_touch_offset_plus_address, position, r2, r3);
        position = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        if (r0_1 != 0) {
            S1 = 0.0f;
            S2 = S1;
            S0 = 32.0f;
            *offset_plus_x = std::bit_cast<u32>(S0);
            *global_009c79bc = std::bit_cast<u32>(S1);
            *global_009c79c0 = std::bit_cast<u32>(S2);
            r0_1 = furniture_touch_offset_plus_address;
        }
    }
    u32 r5_1 = 1u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    u32 scene = current_scene_id(r0_1, position, r2, r3);
    u32 scene_flagged = scene_has_flags(4u, scene);
    if (scene_flagged != 0) {
        r5_1 = 0u;
    }
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r6_1);
    u32 furniture = RoomGrid__furniture_at(room_grid_address, frame->word_0, frame->word_4, 0u);
    if (furniture != 0) {
        u32 r0_6 = id_is_88709c(furniture);
        if (r0_6 != 0) {
            frame->word_4 = r5_1;
            frame->word_0 = 0x9c79b8;  // (from the original)
            u32 spot_2 = FurniturePlacement__find_spot(furniture, r0, r6_1, r8_1);
            return spot_2;
        }
    }
    return 1u;
}

}  // namespace d_004e3f8c
GUEST_EXPORT_FRAMED(0x004e3f8c, d_004e3f8c::touch_furniture_at_position_plus_x, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e408c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Same as clear_room_flag_and_timers.
namespace d_004e408c {

inline constexpr u32 room_flags_address = 0x009529d4u;
inline constexpr u32 room_timers_address = 0x009c79d4u;
inline guest::global<u8, 0x009529d4> room_flags;
inline guest::global<u8, 0x009c79d4> room_timers;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

u32 clear_room_flag_and_timers_2(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *room_flags = 0;
    u32 r0_1 = current_net_signed_value(room_flags_address, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = main_object_idle(r0_1);
        if (r0_2 == 0) {
            frame.release();
            return send_message(0x5bu, 0u, 0u, 0u);  // (from the original)
        }
    }
    *room_timers = 0;
    return room_timers_address;
}

}  // namespace d_004e408c
GUEST_EXPORT(0x004e408c, d_004e408c::clear_room_flag_and_timers_2);

// f_004e440c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs 006311a4 on the furniture (id 0x88709c) under `position`, with the offset (-32, 0, 0) and whether table bit 4
// is clear.
namespace d_004e440c {

inline constexpr u32 furniture_touch_offset_minus_address = 0x009529f0u;
inline constexpr u32 offset_minus_x_address = 0x009c79acu;
inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline guest::global<u32, 0x009529f0> furniture_touch_offset_minus;
inline guest::global<u32, 0x009c79ac> offset_minus_x;
inline guest::global<u32, 0x009c79b0> global_009c79b0;
inline guest::global<u32, 0x009c79b4> global_009c79b4;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x006311a4, u32(u32, u32, u32, u32)> FurniturePlacement__find_spot;
inline constexpr guest::Function<0x00751840, u32(u32)> id_is_88709c;

struct __attribute__((packed)) Frame_004e440c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_004e440c, word_0, 0x0);
GUEST_OFFSET(Frame_004e440c, word_4, 0x4);
GUEST_SIZE(Frame_004e440c, 0x8);

u32 touch_furniture_at_position_minus_x(u32 r0, u32 position, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_004e440c> frame;  // the original's stack frame
    u32 r6_1 = position;
    u32 r8_1 = r2;
    u32 r0_1 = *furniture_touch_offset_minus;
    if ((r0_1 & 1u) == 0) {
        r0_1 = static_guard_acquire(furniture_touch_offset_minus_address, position, r2, r3);
        position = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        if (r0_1 != 0) {
            S1 = 0.0f;
            S2 = S1;
            S0 = -32.0f;
            *offset_minus_x = std::bit_cast<u32>(S0);
            *global_009c79b0 = std::bit_cast<u32>(S1);
            *global_009c79b4 = std::bit_cast<u32>(S2);
            r0_1 = furniture_touch_offset_minus_address;
        }
    }
    u32 r5_1 = 1u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    u32 scene = current_scene_id(r0_1, position, r2, r3);
    u32 scene_flagged = scene_has_flags(4u, scene);
    if (scene_flagged != 0) {
        r5_1 = 0u;
    }
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r6_1);
    u32 furniture = RoomGrid__furniture_at(room_grid_address, frame->word_0, frame->word_4, 0u);
    if (furniture != 0) {
        u32 r0_6 = id_is_88709c(furniture);
        if (r0_6 != 0) {
            frame->word_4 = r5_1;
            frame->word_0 = 0x9c79ac;  // (from the original)
            u32 spot_2 = FurniturePlacement__find_spot(furniture, r0, r6_1, r8_1);
            return spot_2;
        }
    }
    return 1u;
}

}  // namespace d_004e440c
GUEST_EXPORT_FRAMED(0x004e440c, d_004e440c::touch_furniture_at_position_minus_x, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e4510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item maps of list positions `mode` and `mode - 1` hold the same items (same kind-11 top bits) over the
// area from 00284ee4.
namespace d_004e4510 {

inline constexpr guest::Function<0x00284ee4, u32(u32, u32, u32, u32)> Camera__visible_cell_range;
inline constexpr guest::Function<0x002fcb10, u32(u32, u32)> Item__is_item;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> Item__same_number_as;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0030b654, u32(u32, u32)> item_has_valid_data;
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> list_position_of_mode;
inline constexpr guest::Function<0x00768174, u32(u32, u32)> Item__is_kind_2;
inline constexpr guest::Function<0x0076936c, u32(u32, u32)> item_kind_11_top_bits;

struct __attribute__((packed)) Frame_004e4510 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e4510, word_0, 0x0);
GUEST_OFFSET(Frame_004e4510, word_4, 0x4);
GUEST_OFFSET(Frame_004e4510, word_8, 0x8);
GUEST_OFFSET(Frame_004e4510, word_c, 0xc);
GUEST_SIZE(Frame_004e4510, 0x14);

u32 item_maps_match_in_area(u32 scene_3, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e4510> frame;  // the original's stack frame
    u32 previous_item = 0;
    u32 item = 0;
    u32 r0_14 = 0;
    u32 position_3 = list_position_of_mode(scene_3, r1, r2, r3);
    u32 map_4 = read_map_table(position_3);
    r1 = guest::cpu()->r[1];
    u32 map = map_4;
    if (map_4 == 0) {
        return 0u;
    }
    u32 position_4 = list_position_of_mode(scene_3 - 1u & 0xffu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 map_5 = read_map_table(position_4);
    r1 = guest::cpu()->r[1];
    u32 previous_map = map_5;
    if (map_5 == 0) {
        return 0u;
    }
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_0 = 0;
    frame->word_4 = 0;
    Camera__visible_cell_range(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0).addr(), frame.at(4).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 z = frame->word_c;
    if (s32(z) > s32(frame->word_4)) {
        return 1u;
    }
L_4e457c:;
    u32 x = frame->word_8;
    if (s32(x) > s32(frame->word_0)) {
        goto L_4e467c;
    }
L_4e458c:;
    previous_item = GridMap__process_world_position(previous_map, x, z, 0u);
    item = GridMap__process_world_position(map, x, z, 0u);
    r1 = guest::cpu()->r[1];
    if (previous_item != 0) {
        u32 r0_9 = item_has_valid_data(previous_item, r1);
        r1 = guest::cpu()->r[1];
        if (r0_9 != 0) {
            if (item == 0) {
                return 0u;
            }
            u32 r0_10 = item_has_valid_data(item, r1);
            r1 = guest::cpu()->r[1];
            if (r0_10 == 0) {
                return 0u;
            }
            u32 r0_11 = Item__same_number_as(previous_item, item);
            r1 = guest::cpu()->r[1];
            if (r0_11 == 0) {
                return 0u;
            }
            u32 r0_12 = item_kind_11_top_bits(previous_item, r1);
            u32 r0_13 = item_kind_11_top_bits(item, guest::cpu()->r[1]);
            r1 = guest::cpu()->r[1];
            if (r0_12 == r0_13) {
                goto L_4e466c;
            }
            return 0u;
        }
    }
    if (item == 0) {
        goto L_4e466c;
    }
    r0_14 = Item__is_item(item, r1);
    r1 = guest::cpu()->r[1];
    if (r0_14 == 0) {
        u32 r0_15 = Item__is_kind_2(item, r1);
        r1 = guest::cpu()->r[1];
        if (r0_15 == 0) {
            goto L_4e466c;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_4e466c:;
    x += 1u;
    if (s32(x) <= s32(frame->word_0)) {
        guest::preempt();
        goto L_4e458c;
    }
L_4e467c:;
    z += 1u;
    if (s32(z) <= s32(frame->word_4)) {
        guest::preempt();
        goto L_4e457c;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_004e4510
GUEST_EXPORT_FRAMED(0x004e4510, d_004e4510::item_maps_match_in_area, 0x43f0);  // pushes {x, r5, r6, z, previous_map, map, lr} first, as the original

// f_004e49fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether (x, z) is blocked: an open terrain cell with a terrain flag, or furniture of class 4/5 on terrain that is in
// the list for the current mode.
namespace d_004e49fc {

inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x005ce300, u32(u32, u32, u32)> terrain_flag_0_at;
inline constexpr guest::Function<0x006c778c, u32(u32, u32, u32)> terrain_is_in_list_a_at;
inline constexpr guest::Function<0x006c8928, u32(u32, u32, u32, u32)> terrain_value_at;
inline constexpr guest::Function<0x006f9638, u32(u32)> list_position_of_mode;
inline constexpr guest::Function<0x007500b4, u32(u32)> furniture_has_class_4_or_5;
inline constexpr guest::Function<0x00750894, u32(u32)> record_flag_bit_2;

u32 cell_is_blocked(u32 x, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 z = r1;
    u32 terrain_2 = terrain_value_at(x, r1, 0u, r3);
    r1 = guest::cpu()->r[1];
    if (terrain_2 + 1u == 0) {
        u32 furniture = RoomGrid__furniture_at(room_grid_address, x, z, 0u);
        if (furniture != 0) {
            r0_3 = record_flag_bit_2(furniture);
            if (r0_3 == 0) {
                goto L_4e4a64;
            }
        }
        r0_4 = terrain_flag_0_at(x, z, 0u);
        r1 = guest::cpu()->r[1];
        return r0_4 == 0 ? r0_4 : 1u;
L_4e4a64:;
        u32 scene = current_scene_id(r0_3);
        u32 position_2 = list_position_of_mode(scene);
        u32 r0_7 = furniture_has_class_4_or_5(furniture);
        r1 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            u32 r0_8 = terrain_is_in_list_a_at(x, z, position_2);
            r1 = guest::cpu()->r[1];
            if (r0_8 != 0) {
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_004e49fc
GUEST_EXPORT_FRAMED(0x004e49fc, d_004e49fc::cell_is_blocked, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e4ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 004e40e8 with its second argument as the first too.
namespace d_004e4ab8 {

inline constexpr guest::Function<0x004e40e8, u32(u32, u32, u32, u32)> Room__update_timers;

void call_004e40e8_with_r1(u32 r0_unused, u32 r1) {
    Room__update_timers(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004e4ab8
GUEST_EXPORT(0x004e4ab8, d_004e4ab8::call_004e40e8_with_r1);

// f_004e54a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places at the cell under `position` through 004e21e0 with the offset 32: 2 when it did, 0 when not, 3 when the
// furniture there is of kind b/12/c, 4 when there is none.
namespace d_004e54a4 {

inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x004e21e0, u32(u32, u32, u32, u32)> RoomGrid__furniture_near;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x00751a30, u32(u32)> kind_is_b_or_12;
inline constexpr guest::Function<0x00751a4c, u32(u32)> kind_is_c;

struct __attribute__((packed)) Frame_004e54a4 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e54a4, word_4, 0x4);
GUEST_SIZE(Frame_004e54a4, 0xc);

u32 try_place_at_position(u32 r0_unused, u32 position, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_004e54a4> frame;  // the original's stack frame
    u32 r0_3 = 0;
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), position, r3);
    u32 furniture = RoomGrid__furniture_at(room_grid_address, *frame.at<u32>(0), frame->word_4, 0u);
    if (furniture == 0) {
        r0_3 = 4u;
    } else {
        u32 r0_4 = kind_is_b_or_12(furniture);
        if (r0_4 == 0) {
            u32 r0_5 = kind_is_c(furniture);
            if (r0_5 == 0) {
                u32 r4_1 = 1u;
                u32 scene = current_scene_id(r0_5);
                u32 scene_flagged = scene_has_flags(4u, scene);
                *frame.at<u16>(0) = u16(r2);
                if (scene_flagged != 0) {
                    r4_1 = 0u;
                }
                u32 r1_4 = *frame.at<u32>(0);
                float S0_4 = 32.0f;
                guest::cpu()->s[0] = S0_4;
                u32 furniture_3 = RoomGrid__furniture_near(position, r1_4, 0u, r4_1);
                if (furniture_3 != 0) {
                    furniture_3 = 2u;
                }
                return furniture_3;
            }
        }
        r0_3 = 3u;
    }
    return r0_3;
}

}  // namespace d_004e54a4
GUEST_EXPORT_FRAMED(0x004e54a4, d_004e54a4::try_place_at_position, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004e5818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In scene 0x2b, for a special-set item: when the map cell (x, z) is empty, builds an empty item record and passes it
// to 0057456c; true when it did.
namespace d_004e5818 {

struct __attribute__((packed)) Local_004e5818_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e5818_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e5818_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0057456c, u32(u32, u32)> AcFtrAudio__set_playing;
inline constexpr guest::Function<0x006904b4, u32(u32)> FurniturePlacement__start;
inline constexpr guest::Function<0x00691544, u32(u32, u32, u32, u32)> FurniturePlacement__init;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;
inline constexpr guest::Function<0x00768758, u32(u32)> Item__is_in_special_set;
inline constexpr guest::Function<0x0076c5b0, u32(u32)> Item__has_data_byte_17_low_nibble_2;

struct __attribute__((packed)) Frame_004e5818 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e5818, word_0, 0x0);
GUEST_SIZE(Frame_004e5818, 0x18);

u32 drop_special_item_at(u32 item, u32 x, u32 z, u32 r3) {
    guest::StackFrameOf<Frame_004e5818> frame;  // the original's stack frame
    u32 scene = current_scene_id(item, x, z, r3);
    if (scene == 0x2bu) {  // (from the original)
        u32 r0_2 = Item__is_in_special_set(item);
        if (r0_2 != 0) {
            u32 map_table_2 = get_map_table(r0_2);
            if (map_table_2 == 0) {
                return 0u;
            }
            Item__has_data_byte_17_low_nibble_2(item);
            u32 item_3 = GridMap__process_world_position(map_table_2, x, z, 0u);
            if (item_3 == 0) {
                return 0u;
            }
            u32 is_empty_2 = Item__is_empty(item_3);
            if (is_empty_2 == 0) {
                return 0u;
            }
            construct_empty_item(frame.at(0xc).addr());  // (from the original)
            frame->word_0 = 0;
            gptr<Local_004e5818_ea_2> ea_2 = gptr<Local_004e5818_ea_2>(frame.at(4).addr());
            ea_2->word_0 = 0;
            ea_2->word_4 = 1;
            FurniturePlacement__init(frame.at(0xc).addr(), item, x, z);  // (from the original)
            u32 ac_ftr_audio = FurniturePlacement__start(frame.at(0xc).addr());  // (from the original)
            if (ac_ftr_audio != 0) {
                AcFtrAudio__set_playing(ac_ftr_audio, r3);
            }
            r0_2 = 1u;
        }
        return r0_2;
    }
    return 0u;
}

}  // namespace d_004e5818
GUEST_EXPORT_FRAMED(0x004e5818, d_004e5818::drop_special_item_at, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e5924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies a received room item message: places or removes the item at (x, y) and updates the room's bit table.
namespace d_004e5924 {

struct __attribute__((packed)) Local_004e5924_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 layer;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Local_004e5924_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e5924_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004e5924_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004e5924_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_004e5924_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_004e5924_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_004e5924_ea_1, layer, 0x18);
GUEST_OFFSET(Local_004e5924_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5924_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_004e5924_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_004e5924_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_004e5924_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_004e5924_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_004e5924_ea_2 {
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
GUEST_OFFSET(Local_004e5924_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e5924_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_004e5924_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_004e5924_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_004e5924_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_004e5924_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_004e5924_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_004e5924_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5924_ea_2, word_20, 0x20);

inline constexpr u32 room_item_owner_address = 0x009529fcu;
inline constexpr u32 room_item_message_state_address = 0x0095bfe0u;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x00300904, u32(u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x00305570, u32(u32, u32)> item_kind_11_byte_17;
inline constexpr guest::Function<0x00319aa4, u32(u32, u32, u32, u32)> BitTable__set_bit;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32)> get_map_table;
inline constexpr guest::Function<0x006f9638, u32(u32, u32)> list_position_of_mode;
inline constexpr guest::Function<0x0076936c, u32(u32, u32)> item_kind_11_top_bits;

struct __attribute__((packed)) Frame_004e5924 {
    u32 layer;
    u16 half_4;
    u8 unknown_6[0x6];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x30];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e5924, layer, 0x0);
GUEST_OFFSET(Frame_004e5924, half_4, 0x4);
GUEST_OFFSET(Frame_004e5924, word_c, 0xc);
GUEST_OFFSET(Frame_004e5924, word_1c, 0x1c);
GUEST_OFFSET(Frame_004e5924, word_24, 0x24);
GUEST_SIZE(Frame_004e5924, 0x58);

u32 apply_room_item_message(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e5924> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 layer = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r0_15 = 0;
    gptr<Local_004e5924_ea_1> ea_1 = gptr<Local_004e5924_ea_1>(frame.at(0x24).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->layer = layer;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    layer = r3;
    r7 = r1;
    r8 = r2;
    u32 r1_1 = frame->word_24;
    u32 r4_1 = *frame.at<u32>(0x5c);  // (from the original)
    u32 scene_flagged = scene_has_flags(8u, r1_1, r2, r3);
    if (scene_flagged == 0) {
        r0_2 = scene_has_flags(0x10000000u, frame->word_24, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_4e5b60;
        }
    }
    r0_3 = frame.at(0x1c).addr();  // (from the original)
    Item__copy_b(r0_3, r4_1);
    r0_4 = current_scene_id(r0_3);
    r1_5 = frame->word_24;
    if (r0_4 == r1_5) {
        r0_5 = get_map_table(r0_4, r1_5);
        r1_3 = guest::cpu()->r[1];
    } else {
        u32 position_2 = list_position_of_mode(r1_5, r1_5);
        r0_5 = read_map_table(position_2);
        r1_3 = guest::cpu()->r[1];
    }
    frame->word_c = r0_5;
    if (r0_5 != 0) {
        u32 r5_1 = frame.at(0x1c).addr();  // (from the original)
        u32 r0_7 = item_kind_11_byte_17(r5_1, r1_3);
        u32 r1_7 = r4_1 & ~0xffu;  // (from the original)
        u32 r0_8 = item_kind_11_top_bits(r5_1, r1_7);
        r1_3 = (r1_7 | r0_7) & ~0xff00u;  // (from the original)
        r5 = r1_3 | r0_8 << 8 & 0xff00u;  // (from the original)
        u32 r0_9 = r5 & 0xffu;  // (from the original)
        r4 = 0u;
        if (r0_9 < 5u) {
            r11 = room_item_owner_address;
            u32 r0_10 = *gptr<u8>(gptr<u32>(r11)[r0_9] + 0x10u);  // (from the original)
            if (r0_10 >= 0u && r0_10 != 0) {
                do {
                    u32 r0_11 = r5 & 0xffu;  // (from the original)
                    u32 r1_8 = (r0_11 >= 5u ? 0u : u32(*gptr<u8>(gptr<u32>(r11)[r0_11] + 0x10u))) <= r4 ? 0x865620u : *gptr<u32>(gptr<u32>(r11)[r0_11] + ((r5 & 0x300u) >> 6)) + (r4 << 3);  // (from the original)
                    u32 bit_table = *gptr<u32>(r1_8) + r7;
                    u32 r0_12 = (r0_11 >= 5u ? 0u : u32(*gptr<u8>(gptr<u32>(r11)[r0_11] + 0x10u))) <= r4 ? 0x865620u : *gptr<u32>(gptr<u32>(r11)[r0_11] + ((r5 & 0x300u) >> 6)) + (r4 << 3);  // (from the original)
                    u32 r10_1 = *gptr<u32>(r0_12 + 4u) + r8;
                    u32 r0_13 = frame->word_c;
                    frame->layer = layer;
                    u32 r0_14 = GridMap__place_item_at_world(r0_13, r4 == 0 ? frame.at(0x1c).addr() : room_item_message_state_address, bit_table, r10_1);  // (from the original)
                    r1_3 = guest::cpu()->r[1];
                    if (r0_14 == 0) {
                        goto L_4e5b58;
                    }
                    u32 r3_8 = *frame.at<u32>(0x58);  // (from the original)
                    frame->layer = frame->word_24;
                    BitTable__set_bit(bit_table, r10_1, layer, r3_8);
                    r1_3 = guest::cpu()->r[1];
                    r0_15 = r5 & 0xffu;  // (from the original)
                    r4 += 1u;
                    guest::preempt();
                } while ((r0_15 >= 5u ? 0u : u32(*gptr<u8>(gptr<u32>(r11)[r0_15] + 0x10u))) > r4);  // (from the original)
            }
        }
        u32 r0_16 = *frame.at<u32>(0x60);  // (from the original)
        if (r0_16 != 0) {
            u32 r0_17 = current_net_signed_value(r0_16, r1_3);
            r1_3 = guest::cpu()->r[1];
            if (r0_17 != 0) {
                u32 r2_8 = frame->half_4;
                frame->layer = frame->word_1c;
                u32 r1_10 = (((r7 & 0xfu | r2_8 & ~0xfu) & ~0xf0u | 0xf0u & r8 << 4) & ~0x100u | 0x100u & layer << 8) & ~0x200u;  // (from the original)
                frame->half_4 = u16(r1_10 | *frame.at<u32>(0x58) << 9);  // (from the original)
                send_message(0x4fu, 4u, frame.at(0).addr(), 8u);  // (from the original)
                r1_3 = guest::cpu()->r[1];
            }
        }
    }
L_4e5b58:;
    r0_2 = frame.at(0x1c).addr();  // (from the original)
L_4e5b60:;
    gptr<Local_004e5924_ea_2> ea_2 = gptr<Local_004e5924_ea_2>(frame.at(0x34).addr());  // (from the original)
    u32 r4_3 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    u32 r9_2 = ea_2->word_14;
    u32 r10_2 = ea_2->word_18;
    u32 r11_1 = ea_2->word_1c;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    return r0_2;
}

}  // namespace d_004e5924
GUEST_EXPORT(0x004e5924, d_004e5924::apply_room_item_message);

// f_004e5b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies a received field item message: places, removes or changes the item at the position.
namespace d_004e5b74 {

struct __attribute__((packed)) Local_004e5b74_ea_1 {
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
GUEST_OFFSET(Local_004e5b74_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e5b74_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004e5b74_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004e5b74_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_004e5b74_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_004e5b74_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_004e5b74_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_004e5b74_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5b74_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_004e5b74_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_004e5b74_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_004e5b74_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_004e5b74_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_004e5b74_ea_2 {
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
GUEST_OFFSET(Local_004e5b74_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e5b74_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_004e5b74_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_004e5b74_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_004e5b74_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_004e5b74_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_004e5b74_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_004e5b74_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5b74_ea_2, word_20, 0x20);

struct __attribute__((packed)) Local_004e5b74_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e5b74_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_004e5b74_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_004e5b74_ea_5 {
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
GUEST_OFFSET(Local_004e5b74_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_004e5b74_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_004e5b74_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_004e5b74_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_004e5b74_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_004e5b74_ea_5, word_14, 0x14);
GUEST_OFFSET(Local_004e5b74_ea_5, word_18, 0x18);
GUEST_OFFSET(Local_004e5b74_ea_5, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5b74_ea_5, word_20, 0x20);

struct __attribute__((packed)) Local_004e5b74_ea_6 {
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
GUEST_OFFSET(Local_004e5b74_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_004e5b74_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_004e5b74_ea_6, word_8, 0x8);
GUEST_OFFSET(Local_004e5b74_ea_6, word_c, 0xc);
GUEST_OFFSET(Local_004e5b74_ea_6, word_10, 0x10);
GUEST_OFFSET(Local_004e5b74_ea_6, word_14, 0x14);
GUEST_OFFSET(Local_004e5b74_ea_6, word_18, 0x18);
GUEST_OFFSET(Local_004e5b74_ea_6, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5b74_ea_6, word_20, 0x20);

inline constexpr u32 scene_object_pool_address = 0x0094f310u;
inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u32, 0x0094f310> scene_object_pool;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0057456c, u32(u32, u32)> AcFtrAudio__set_playing;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006904b4, u32(u32)> FurniturePlacement__start;
inline constexpr guest::Function<0x00691544, u32(u32, u32, u32, u32)> FurniturePlacement__init;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;
inline constexpr guest::Function<0x00769634, u32(u32)> item_data_1c_bit_7;
inline constexpr guest::Function<0x0076c5b0, u32(u32)> Item__has_data_byte_17_low_nibble_2;

struct __attribute__((packed)) Frame_004e5b74 {
    u32 word_0;
    u8 unknown_4[0x18];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x8];  // (not read or written by name)
    u32 word_28;
    u8 unknown_2c[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e5b74, word_0, 0x0);
GUEST_OFFSET(Frame_004e5b74, word_1c, 0x1c);
GUEST_OFFSET(Frame_004e5b74, word_28, 0x28);
GUEST_SIZE(Frame_004e5b74, 0x50);

u32 apply_field_item_message(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e5b74> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    gptr<Local_004e5b74_ea_2> ea_2 = gptr<Local_004e5b74_ea_2>(0u);
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    gptr<Local_004e5b74_ea_1> ea_1 = gptr<Local_004e5b74_ea_1>(frame.at(0x1c).addr());  // (from the original)
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
    u32 scene = current_scene_id(r0, r1, r2, r3);
    if (scene == 0x2bu) {  // (from the original)
        u32 r0_3 = item_data_1c_bit_7(frame->word_1c);
        if (r0_3 == 0) {
            u32 map_table_2 = get_map_table(r0_3);
            if (map_table_2 != 0) {
                u32 r0_5 = *scene_object_pool;
                if (r0_5 != 0) {
                    if ((u32(*gptr<u8>(r0_5 + 0x13u)) >> 1u & 1u) != 0) {  // (from the original)
                        r4_1 = r2;
                        u32 r0_7 = Item__has_data_byte_17_low_nibble_2(frame->word_1c);
                        if (r0_7 != 0) {
                            r4_1 += 1u;
                        }
                        r0_8 = GridMap__process_world_position(map_table_2, r1, r4_1, 0u);
                        if (r0_8 == 0) {
                            goto L_4e5cec;
                        }
                        u32 is_empty_2 = Item__is_empty(r0_8);
                        if (is_empty_2 == 0) {
                            u32 r0_10 = Item__has_number(r0_8, 0x2085u);  // (from the original)
                            if (r0_10 == 0) {
                                goto L_4e5cec;
                            }
                            goto L_4e5c54;
                        }
                        goto L_4e5c54;
                    }
                }
                r1_2 = frame->word_1c;
                frame->word_0 = 0;
                GridMap__place_item_at_world(map_table_2, r1_2, r1, r2);
                ea_2 = gptr<Local_004e5b74_ea_2>(frame.at(0x2c).addr());  // (from the original)
                r4_2 = ea_2->word_0;
                r5_1 = ea_2->word_4;
                r6_1 = ea_2->word_8;
                r7_1 = ea_2->word_c;
                r8_1 = ea_2->word_10;
                r9_1 = ea_2->word_14;
                r10_1 = ea_2->word_18;
                r11_1 = ea_2->word_1c;
                guest::cpu()->r[4] = r4_2;
                guest::cpu()->r[5] = r5_1;
                guest::cpu()->r[6] = r6_1;
                guest::cpu()->r[7] = r7_1;
                guest::cpu()->r[8] = r8_1;
                guest::cpu()->r[9] = r9_1;
                guest::cpu()->r[10] = r10_1;
                guest::cpu()->r[11] = r11_1;
                return 0u;
L_4e5c54:;
                u32 r0_11 = Item__has_number(r0_8, 0x2085u);  // (from the original)
                if (r0_11 != 0) {
                    frame->word_0 = 0;
                    GridMap__place_item_at_world(map_table_2, empty_item_address, r1, r4_1);
                    clear_field_tile(r1, r4_1, 1u);
                }
                construct_empty_item(frame.at(0xc).addr());  // (from the original)
                frame->word_0 = 0;
                gptr<Local_004e5b74_ea_4> ea_4 = gptr<Local_004e5b74_ea_4>(frame.at(4).addr());
                ea_4->word_0 = 0;
                ea_4->word_4 = 1;
                FurniturePlacement__init(frame.at(0xc).addr(), frame->word_1c, r1, r2);  // (from the original)
                u32 ac_ftr_audio = FurniturePlacement__start(frame.at(0xc).addr());  // (from the original)
                if (ac_ftr_audio != 0) {
                    AcFtrAudio__set_playing(ac_ftr_audio, frame->word_28);
                }
                gptr<Local_004e5b74_ea_5> ea_5 = gptr<Local_004e5b74_ea_5>(frame.at(0x2c).addr());  // (from the original)
                u32 r4_3 = ea_5->word_0;
                u32 r5_2 = ea_5->word_4;
                u32 r6_2 = ea_5->word_8;
                u32 r7_2 = ea_5->word_c;
                u32 r8_2 = ea_5->word_10;
                u32 r9_2 = ea_5->word_14;
                u32 r10_2 = ea_5->word_18;
                u32 r11_2 = ea_5->word_1c;
                guest::cpu()->r[4] = r4_3;
                guest::cpu()->r[5] = r5_2;
                guest::cpu()->r[6] = r6_2;
                guest::cpu()->r[7] = r7_2;
                guest::cpu()->r[8] = r8_2;
                guest::cpu()->r[9] = r9_2;
                guest::cpu()->r[10] = r10_2;
                guest::cpu()->r[11] = r11_2;
                return 1u;
            }
        }
    }
L_4e5cec:;
    gptr<Local_004e5b74_ea_6> ea_6 = gptr<Local_004e5b74_ea_6>(frame.at(0x2c).addr());  // (from the original)
    u32 r4_4 = ea_6->word_0;
    u32 r5_3 = ea_6->word_4;
    u32 r6_3 = ea_6->word_8;
    u32 r7_3 = ea_6->word_c;
    u32 r8_3 = ea_6->word_10;
    u32 r9_3 = ea_6->word_14;
    u32 r10_3 = ea_6->word_18;
    u32 r11_3 = ea_6->word_1c;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_3;
    guest::cpu()->r[10] = r10_3;
    guest::cpu()->r[11] = r11_3;
    return 0u;
}

}  // namespace d_004e5b74
GUEST_EXPORT(0x004e5b74, d_004e5b74::apply_field_item_message);

// f_004e6200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item of the furniture at the position in a room scene; empty otherwise.
namespace d_004e6200 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x00751058, u32(u32)> member_address_0x5e4_;

struct __attribute__((packed)) Frame_004e6200 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e6200, word_0, 0x0);
GUEST_OFFSET(Frame_004e6200, word_4, 0x4);
GUEST_SIZE(Frame_004e6200, 0x20);

void room_furniture_item_at(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e6200> frame;  // the original's stack frame
    u32 scene = current_scene_id(r0, r1, r2, r3);
    u32 scene_flagged = scene_has_flags(0x20u, scene);  // (from the original)
    if (scene_flagged != 0) {
        position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r1);
        u32 furniture_2 = RoomGrid__furniture_at(room_grid_address, frame->word_0, frame->word_4, 0u);
        if (furniture_2 != 0) {
            u32 r0_5 = member_address_0x5e4_(furniture_2);
            frame.release();
            Item__copy_b(r0, r0_5);
            return;
        }
    }
    frame.release();
    Item__copy_b(r0, empty_item_address);
    return;
}

}  // namespace d_004e6200
GUEST_EXPORT(0x004e6200, d_004e6200::room_furniture_item_at);

// f_004e628c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the wallpaper and floor (category 0x2f, below 91) of the room message and, when asked, sends it on (message
// 0x52).
namespace d_004e628c {

struct __attribute__((packed)) Object_004e628c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_004e628c_0, word_0, 0x0);
GUEST_OFFSET(Object_004e628c_0, word_4, 0x4);
GUEST_OFFSET(Object_004e628c_0, word_8, 0x8);
GUEST_OFFSET(Object_004e628c_0, word_c, 0xc);
GUEST_OFFSET(Object_004e628c_0, word_10, 0x10);
GUEST_OFFSET(Object_004e628c_0, word_14, 0x14);

struct __attribute__((packed)) Local_004e628c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_004e628c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e628c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004e628c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004e628c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_004e628c_ea_1, word_10, 0x10);

struct __attribute__((packed)) Local_004e628c_r7_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e628c_r7_2, word_0, 0x0);
GUEST_OFFSET(Local_004e628c_r7_2, word_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x001746f4, u32(u32, u32, u32, u32)> SceneRecord__set;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32)> Item__from_category_index;

struct __attribute__((packed)) Frame_004e628c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e628c, word_0, 0x0);
GUEST_OFFSET(Frame_004e628c, word_4, 0x4);
GUEST_SIZE(Frame_004e628c, 0x2c);

u32 apply_room_design_message(gptr<Object_004e628c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e628c> frame;  // the original's stack frame
    u32 r6_1 = arg0->word_0;
    u32 r0_1 = arg0->word_10;
    u32 r5_1 = arg0->word_4;
    u32 r7_1 = arg0->word_8;
    u32 r8_1 = arg0->word_c;
    if ((r0_1 & 0x200000u) != 0) {  // (from the original)
        Item__copy_b(frame.at(0x20).addr(), empty_item_address, r2, r3);  // (from the original)
        if (r7_1 < 0x5bu) {  // (from the original)
            Item__from_category_index(frame.at(0).addr(), 0x2fu, r7_1);  // (from the original)
            Item__copy(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
        }
        Item__copy_b(frame.at(0x24).addr(), empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r8_1 < 0x5bu) {  // (from the original)
            Item__from_category_index(frame.at(0).addr(), 0x2fu, r8_1);  // (from the original)
            Item__copy(frame.at(0x24).addr(), frame.at(0).addr());  // (from the original)
        }
        u32 r1_3 = frame.at(0x24).addr();  // (from the original)
        frame->word_0 = frame.at(0x20).addr();  // (from the original)
        frame->word_4 = r1_3;
        SceneRecord__set(r0_1 & 0xffu, r1_3, r6_1, r5_1);  // (from the original)
        u32 r0_9 = arg0->word_0;
        u32 r1_4 = arg0->word_4;
        u32 r2_4 = arg0->word_8;
        u32 r3_5 = arg0->word_c;
        u32 r12_1 = arg0->word_10;
        u32 r4_1 = arg0->word_14;
        gptr<Local_004e628c_ea_1> ea_1 = gptr<Local_004e628c_ea_1>(frame.at(8).addr());
        ea_1->word_0 = r0_9;
        ea_1->word_4 = r1_4;
        ea_1->word_8 = r2_4;
        ea_1->word_c = r3_5;
        ea_1->word_10 = r12_1;
        gptr<Local_004e628c_r7_2> r7_2 = gptr<Local_004e628c_r7_2>(frame.at(0x18).addr());  // (from the original)
        r7_2->word_0 = r12_1 & ~0x200000u;  // (from the original)
        r7_2->word_4 = r4_1;
        u32 r0_10 = send_message(0x52u, 4u, frame.at(8).addr(), 0x18u);  // (from the original)
        return r0_10;
    }
    Item__copy_b(frame.at(8).addr(), empty_item_address, r2, r3);
    if (r7_1 < 0x5bu) {  // (from the original)
        Item__from_category_index(frame.at(0).addr(), 0x2fu, r7_1);  // (from the original)
        Item__copy(frame.at(8).addr(), frame.at(0).addr());
    }
    Item__copy_b(frame.at(0xc).addr(), empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r8_1 < 0x5bu) {  // (from the original)
        Item__from_category_index(frame.at(0).addr(), 0x2fu, r8_1);  // (from the original)
        Item__copy(frame.at(0xc).addr(), frame.at(0).addr());  // (from the original)
    }
    u32 r1_8 = frame.at(0xc).addr();  // (from the original)
    frame->word_0 = frame.at(8).addr();
    frame->word_4 = r1_8;
    SceneRecord__set(r0_1 & 0xffu, r1_8, r6_1, r5_1);  // (from the original)
    return frame.at(8).addr();
}

}  // namespace d_004e628c
GUEST_EXPORT_FRAMED(0x004e628c, d_004e628c::apply_room_design_message, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004e645c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the received position and cell into the scene record of its mode.
namespace d_004e645c {

struct __attribute__((packed)) Object_004e645c_0 {
    float float_0;
    float float_4;
    u32 word_8;
    u16 half_c;
};
GUEST_OFFSET(Object_004e645c_0, float_0, 0x0);
GUEST_OFFSET(Object_004e645c_0, float_4, 0x4);
GUEST_OFFSET(Object_004e645c_0, word_8, 0x8);
GUEST_OFFSET(Object_004e645c_0, half_c, 0xc);

struct __attribute__((packed)) Local_004e645c_r0_2 {
    float float_0;
    float float_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Local_004e645c_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_004e645c_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_004e645c_r0_2, word_8, 0x8);
GUEST_OFFSET(Local_004e645c_r0_2, byte_c, 0xc);
GUEST_OFFSET(Local_004e645c_r0_2, byte_d, 0xd);

inline constexpr guest::Function<0x00203660, u32(u32, u32, u32, u32)> scene_record_10_of_mode;

u32 apply_scene_record_message(gptr<Object_004e645c_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0_1 = u32(arg0->half_c) >> 8;
    gptr<Local_004e645c_r0_2> r0_2 = gptr<Local_004e645c_r0_2>(scene_record_10_of_mode(r0_1, r1, r2, r3));
    if (r0_2.addr() == 0) {
        return r0_2.addr();
    }
    u32 r2_1 = arg0->half_c;
    u32 r1_2 = arg0->word_8;
    float S0_2 = arg0->float_0;
    float S1_2 = arg0->float_4;
    r0_2->word_8 = r1_2;
    r0_2->float_0 = S0_2;
    r0_2->float_4 = S1_2;
    r0_2->byte_c = u8(r2_1 & 0xfu);  // (from the original)
    r0_2->byte_d = u8(r2_1 >> 4u & 0xfu);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_2.addr();
}

}  // namespace d_004e645c
GUEST_EXPORT_FRAMED(0x004e645c, d_004e645c::apply_scene_record_message, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e64a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies a received furniture message to the room's furniture.
namespace d_004e64a4 {

struct __attribute__((packed)) Object_004e64a4_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_004e64a4_0, byte_0, 0x0);
GUEST_OFFSET(Object_004e64a4_0, byte_1, 0x1);
GUEST_OFFSET(Object_004e64a4_0, byte_2, 0x2);

inline constexpr guest::Function<0x001796e0, u32(u32, u32, u32)> Flower__breed_at;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> Item__same_number_as;
inline constexpr guest::Function<0x004e3354, u32(u32, u32)> act_on_first_flagged_furniture;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x006bc388, u32(u32, u32, u32)> page_address;
inline constexpr guest::Function<0x006f9638, u32(u32, u32)> list_position_of_mode;
inline constexpr guest::Function<0x006f9c08, u32(u32)> map_record_of_mode;
inline constexpr guest::Function<0x006f9db4, u32(u32)> position_in_1b_to_1d;
inline constexpr guest::Function<0x00720328, u32(u32, u32)> Record__item_is_category_2f;

u32 apply_furniture_message(gptr<Object_004e64a4_0> arg0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_7 = 0;
    u32 r6_1 = 0;
    u32 r6_2 = 0;
    u32 r2_1 = arg0->byte_0;
    Item__from_category_index(frame.at(0).addr(), 0x2fu, r2_1, guest::cpu()->r[3]);  // (from the original)
    u32 category_2 = Item__category(frame.at(0).addr());
    u32 r1_2 = guest::cpu()->r[1];
    if (category_2 == 0x2fu) {  // (from the original)
        u32 scene = current_scene_id(category_2, r1_2);
        r1_2 = arg0->byte_1;
        if (r1_2 != scene) {
            u32 scene_flagged = scene_has_flags(0x80u, scene);  // (from the original)
            if (scene_flagged != 0) {
                u32 record_2 = map_record_of_mode(scene);
                r1_2 = guest::cpu()->r[1];
                if (record_2 == 0) {
                    goto L_4e6620;
                }
                u32 r5_1 = 0u;
                r0_7 = Record__item_is_category_2f(record_2, r1_2);
                r1_2 = guest::cpu()->r[1];
                if (r0_7 == 0) {
                    Item__copy_b(frame.at(4).addr(), record_2 + 0x2fau);  // (from the original)
                    r5_1 = 1u;
                    r0_7 = Item__same_number_as(frame.at(4).addr(), frame.at(0).addr());
                    r1_2 = guest::cpu()->r[1];
                    r6_1 = r0_7 != 0;
                } else {
                    r6_1 = 1u;
                }
                if (r5_1 != 0) {
                    r0_7 = frame.at(4).addr();
                }
                if (r6_1 == 0) {
                    goto L_4e6620;
                }
            } else {
                u32 scene_flagged_2 = scene_has_flags(0x2000u, scene);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                if (scene_flagged_2 == 0) {
                    goto L_4e6620;
                }
                u32 position_2 = list_position_of_mode(scene, r1_2);
                u32 r0_12 = position_in_1b_to_1d(position_2);
                u32 data_base_2 = get_data_base(r0_12);
                u32 r0_15 = page_address(data_base_2 - 0xfff951c8u, r0_12, 0xfff951c8u);  // (from the original)
                u32 r5_2 = 0u;
                r0_7 = Record__item_is_category_2f(r0_15 + 2u, guest::cpu()->r[1]);
                r1_2 = guest::cpu()->r[1];
                if (r0_7 == 0) {
                    Item__copy_b(frame.at(4).addr(), r0_15 + 0x2fcu);  // (from the original)
                    r5_2 = 1u;
                    r0_7 = Item__same_number_as(frame.at(4).addr(), frame.at(0).addr());
                    r1_2 = guest::cpu()->r[1];
                    r6_2 = r0_7 != 0;
                } else {
                    r6_2 = 1u;
                }
                if (r5_2 != 0) {
                    r0_7 = frame.at(4).addr();
                }
                if (r6_2 == 0) {
                    goto L_4e6620;
                }
            }
            act_on_first_flagged_furniture(r0_7, r1_2);
            r1_2 = guest::cpu()->r[1];
        }
L_4e6620:;
        u32 r0_19 = arg0->byte_2;
        if (r0_19 < 4u) {
            Flower__breed_at(r0_19, scene, frame.at(0).addr());
            r1_2 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_2;
    return frame.at(0).addr();
}

}  // namespace d_004e64a4
GUEST_EXPORT_FRAMED(0x004e64a4, d_004e64a4::apply_furniture_message, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004e664c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies a received cell change at (x, y), by its flags.
namespace d_004e664c {

struct __attribute__((packed)) Object_004e664c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_004e664c_0, byte_0, 0x0);
GUEST_OFFSET(Object_004e664c_0, byte_1, 0x1);
GUEST_OFFSET(Object_004e664c_0, byte_2, 0x2);

inline constexpr guest::Function<0x0017d2ac, u32(u32, u32, u32, u32)> FieldItem__start_effect;
inline constexpr guest::Function<0x0017fc48, u32(u32, u32, u32, u32)> FieldItem__start_effect_b;

struct __attribute__((packed)) Frame_004e664c {
    u32 word_0;
};
GUEST_OFFSET(Frame_004e664c, word_0, 0x0);
GUEST_SIZE(Frame_004e664c, 0x4);

u32 apply_cell_change_message(gptr<Object_004e664c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_004e664c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r1_1 = arg0->byte_1;
    u32 r3_1 = arg0->byte_2;
    u32 r0_1 = arg0->byte_0;
    u32 r2_1 = r1_1 >> 4;
    u32 r3_2 = r3_1 & 1u;
    u32 r1_2 = r1_1 & 0xfu;  // (from the original)
    frame->word_0 = 1;
    if ((r3_1 & 2u) != 0) {
        u32 r0_2 = FieldItem__start_effect(r0_1, r1_2, r2_1, r3_2);
        return r0_2;
    }
    u32 r0_3 = FieldItem__start_effect_b(r0_1, r1_2, r2_1, r3_2);
    return r0_3;
}

}  // namespace d_004e664c
GUEST_EXPORT_FRAMED(0x004e664c, d_004e664c::apply_cell_change_message, 0x4000);  // pushes {lr} first, as the original

// f_004e668c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards the scene pair message (0x55) to the waited stations, then copies its 8 bytes into the scene record (first
// or second half).
namespace d_004e668c {

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> scene_record_20_of_mode;
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> station_is_waited_for;

struct __attribute__((packed)) Frame_004e668c {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x1];  // (not read or written by name)
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u16 half_8;
    u8 unknown_a[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e668c, byte_1, 0x1);
GUEST_OFFSET(Frame_004e668c, byte_2, 0x2);
GUEST_OFFSET(Frame_004e668c, byte_3, 0x3);
GUEST_OFFSET(Frame_004e668c, byte_5, 0x5);
GUEST_OFFSET(Frame_004e668c, byte_6, 0x6);
GUEST_OFFSET(Frame_004e668c, byte_7, 0x7);
GUEST_OFFSET(Frame_004e668c, half_8, 0x8);
GUEST_SIZE(Frame_004e668c, 0x10);

u32 apply_scene_pair_message(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e668c> frame;  // the original's stack frame
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r0_1 = main_object_idle(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        u32 r4 = 1u;
        do {
            if (r4 != r6) {
                u32 r0_3 = station_is_waited_for(r4 & 0xffu, r1, r2, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_3 != 0) {
                    *frame.at<u32>(0) = *gptr<u32>(r5);
                    *frame.at<u32>(4) = *gptr<u32>(r5 + 4u);
                    frame->half_8 = *gptr<u16>(r5 + 8u);
                    send_message(0x55u, r4 & 0xffu, frame.at(0).addr(), 0xau);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 4u);
    }
    u32 r0_4 = *gptr<u8>(r5 + 8u);
    u32 r0_5 = scene_record_20_of_mode(r0_4, r1, r2, r3);
    if (r0_5 != 0) {
        *frame.at<u8>(0) = *gptr<u8>(r5);
        frame->byte_1 = *gptr<u8>(r5 + 1u);
        frame->byte_2 = *gptr<u8>(r5 + 2u);
        frame->byte_3 = *gptr<u8>(r5 + 3u);
        *frame.at<u8>(4) = *gptr<u8>(r5 + 4u);
        frame->byte_5 = *gptr<u8>(r5 + 5u);
        frame->byte_6 = *gptr<u8>(r5 + 6u);
        frame->byte_7 = *gptr<u8>(r5 + 7u);
        r0_5 = copy_8_bytes(*gptr<u8>(r5 + 9u) == 0 ? r0_5 + 0x12u : r0_5 + 0xau, frame.at(0).addr());  // (from the original)
    }
    return r0_5;
}

}  // namespace d_004e668c
GUEST_EXPORT_FRAMED(0x004e668c, d_004e668c::apply_scene_pair_message, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e6774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the room timer of the station from the packed position and kind; answers 0x59 when it started, else 0x5a.
namespace d_004e6774 {

struct __attribute__((packed)) Object_004e6774_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004e6774_0, word_0, 0x0);

struct __attribute__((packed)) Local_004e6774_r0_2 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_004e6774_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_004e6774_r0_2, byte_1, 0x1);
GUEST_OFFSET(Local_004e6774_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_004e6774_r0_2, word_8, 0x8);
GUEST_OFFSET(Local_004e6774_r0_2, word_c, 0xc);

inline constexpr u32 room_timers_address = 0x009c79d4u;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006b14cc, u32(u32, u32, u32, u32)> RoomTimers__start;

struct __attribute__((packed)) Frame_004e6774 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e6774, word_0, 0x0);
GUEST_OFFSET(Frame_004e6774, word_4, 0x4);
GUEST_OFFSET(Frame_004e6774, word_8, 0x8);
GUEST_SIZE(Frame_004e6774, 0x10);

u32 apply_room_timer_message(gptr<Object_004e6774_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_004e6774> frame;  // the original's stack frame
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    float S0_1 = 0.0f;
    frame->word_0 = std::bit_cast<u32>(S0_1);
    frame->word_4 = std::bit_cast<u32>(S0_1);
    frame->word_8 = std::bit_cast<u32>(S0_1);
    frame->word_0 = std::bit_cast<u32>(float(arg0->word_0 & 0xfffu));  // (from the original)
    float S0_2 = float(arg0->word_0 >> 0xcu & 0xfffu);  // (from the original)
    frame->word_8 = std::bit_cast<u32>(S0_2);
    u32 r5_1 = arg0->word_0 >> 0x18;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    u32 r0_1 = RoomTimers__start(room_timers_address, r1, r5_1, frame.at(0).addr());
    if (r0_1 != 0) {
        if (r1 < 4u) {
            gptr<Local_004e6774_r0_2> r0_2 = gptr<Local_004e6774_r0_2>((r1 << 4) + room_timers_address);
            r0_2->byte_0 = 1;
            r0_2->byte_1 = u8(r5_1);
            r0_2->word_4 = frame->word_0;
            r0_2->word_8 = frame->word_4;
            r0_2->word_c = frame->word_8;
        }
        r2_1 = 0u;
        r1_1 = r1;
        r0_3 = 0x59u;  // (from the original)
    } else {
        r2_1 = 0u;
        r1_1 = r1;
        r0_3 = 0x5au;  // (from the original)
    }
    u32 r0_4 = send_message(r0_3, r1_1, r2_1, 0u);
    return r0_4;
}

}  // namespace d_004e6774
GUEST_EXPORT_FRAMED(0x004e6774, d_004e6774::apply_room_timer_message, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e6a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the room's wallpaper and floor (below 91) in its scene and map records and, in a session, sends message 0x56.
namespace d_004e6a3c {

struct __attribute__((packed)) Object_004e6a3c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_004e6a3c_0, byte_0, 0x0);
GUEST_OFFSET(Object_004e6a3c_0, byte_1, 0x1);
GUEST_OFFSET(Object_004e6a3c_0, byte_2, 0x2);

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> scene_record_20_of_mode;
inline constexpr guest::Function<0x002d50b8, u32(u32, u32, u32)> ItemPairPlaces__store;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> map_record_of_mode;

struct __attribute__((packed)) Frame_004e6a3c {
    u16 half_0;
    u8 byte_2;
    u8 unknown_3[0x9];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e6a3c, half_0, 0x0);
GUEST_OFFSET(Frame_004e6a3c, byte_2, 0x2);
GUEST_SIZE(Frame_004e6a3c, 0xc);

u32 set_room_design_and_share(gptr<Object_004e6a3c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e6a3c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    u32 r6 = arg0->byte_1;
    u32 r5 = arg0->byte_2;
    u32 r7 = arg0->byte_0;
    if (r6 < 0x5bu && r5 < 0x5bu) {  // (from the original)
        r0 = scene_record_20_of_mode(r7, r1, r2, r3);
        r1 = r0;
        if (r0 != 0) {
            r3 = r1 + 0x12u;  // (from the original)
            r0 = r1 + 0xau;  // (from the original)
            r2 = sxtb(r6);
            if (r3 > r0) {
                do {
                    if (u32(*gptr<s8>(r0)) == r2) {
                        *gptr<u8>(r1 + 8u) = u8(r2);
                        break;
                    }
                    r0 += 1u;
                    guest::preempt();
                } while (r3 > r0);
            }
            *gptr<u8>(r1 + 9u) = u8(r5);
            r0 = map_record_of_mode(r7, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            if (r0 != 0) {
                Item__from_category_index(frame.at(0).addr(), 0x2fu, r6);  // (from the original)
                Item__from_category_index(frame.at(4).addr(), 0x2fu, r5);  // (from the original)
                ItemPairPlaces__store(r0, frame.at(0).addr(), frame.at(4).addr());
                r0 = main_object_idle(frame.at(0).addr());
                r1 = guest::cpu()->r[1];
                if (r0 != 0) {
                    frame->half_0 = *gptr<u16>(r4);
                    frame->byte_2 = *gptr<u8>(r4 + 2u);
                    r0 = send_message(0x56u, 4u, frame.at(0).addr(), 3u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e6a3c
GUEST_EXPORT_FRAMED(0x004e6a3c, d_004e6a3c::set_room_design_and_share, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004e6b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the scene record's position and, in a session, sends message 0x53.
namespace d_004e6b48 {

struct __attribute__((packed)) Object_004e6b48_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_004e6b48_0, word_0, 0x0);
GUEST_OFFSET(Object_004e6b48_0, word_4, 0x4);
GUEST_OFFSET(Object_004e6b48_0, byte_8, 0x8);
GUEST_OFFSET(Object_004e6b48_0, word_c, 0xc);

struct __attribute__((packed)) Local_004e6b48_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e6b48_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_004e6b48_r0_2, word_4, 0x4);

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> scene_record_20_of_mode;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) Frame_004e6b48 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_004e6b48, word_0, 0x0);
GUEST_OFFSET(Frame_004e6b48, word_4, 0x4);
GUEST_OFFSET(Frame_004e6b48, word_8, 0x8);
GUEST_OFFSET(Frame_004e6b48, word_c, 0xc);
GUEST_SIZE(Frame_004e6b48, 0x10);

u32 set_scene_position_and_share(gptr<Object_004e6b48_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e6b48> frame;  // the original's stack frame
    u32 r0_1 = arg0->byte_8;
    gptr<Local_004e6b48_r0_2> r0_2 = gptr<Local_004e6b48_r0_2>(scene_record_20_of_mode(r0_1, r1, r2, r3));
    if (r0_2.addr() == 0) {
        return r0_2.addr();
    }
    u32 r1_2 = arg0->word_0;
    u32 r2_1 = arg0->word_4;
    r0_2->word_0 = r1_2;
    r0_2->word_4 = r2_1;
    u32 r0_3 = main_object_idle(r0_2.addr(), r1_2, r2_1);
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r1_4 = arg0->word_4;
    u32 r2_2 = *gptr<u32>(arg0.addr() + 8u);
    u32 r3_2 = arg0->word_c;
    frame->word_0 = arg0->word_0;
    frame->word_4 = r1_4;
    frame->word_8 = r2_2;
    frame->word_c = r3_2;
    u32 r0_4 = send_message(0x53u, 4u, frame.at(0).addr(), 0x10u);  // (from the original)
    return r0_4;
}

}  // namespace d_004e6b48
GUEST_EXPORT_FRAMED(0x004e6b48, d_004e6b48::set_scene_position_and_share, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e6b9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unpacks the room item message (item, cell and flags) and applies it.
namespace d_004e6b9c {

struct __attribute__((packed)) Object_004e6b9c_1 {
    u32 word_0;
    u16 half_4;
};
GUEST_OFFSET(Object_004e6b9c_1, word_0, 0x0);
GUEST_OFFSET(Object_004e6b9c_1, half_4, 0x4);

inline constexpr guest::Function<0x004e5924, u32(u32, u32, u32, u32)> apply_room_item_message;
inline constexpr guest::Function<0x006bba14, u32(u32, u32, u32, u32)> construct_item_from_packed;

struct __attribute__((packed)) Frame_004e6b9c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e6b9c, word_0, 0x0);
GUEST_OFFSET(Frame_004e6b9c, word_4, 0x4);
GUEST_OFFSET(Frame_004e6b9c, word_8, 0x8);
GUEST_SIZE(Frame_004e6b9c, 0x14);

u32 apply_packed_room_item_message(u32 r0, gptr<Object_004e6b9c_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e6b9c> frame;  // the original's stack frame
    construct_item_from_packed(frame.at(0xc).addr(), arg1->word_0, r2, r3);  // (from the original)
    u32 r0_2 = arg1->half_4;
    frame->word_8 = 0;
    frame->word_0 = (r0_2 & 0x200u) >> 9;  // (from the original)
    frame->word_4 = frame.at(0xc).addr();  // (from the original)
    apply_room_item_message(r0, r0_2 & 0xfu, r0_2 >> 4u & 0xfu, r0_2 >> 8u & 1u);  // (from the original)
    return frame.at(0xc).addr();  // (from the original)
}

}  // namespace d_004e6b9c
GUEST_EXPORT_FRAMED(0x004e6b9c, d_004e6b9c::apply_packed_room_item_message, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004e6c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the received item at the cell of the map of the mode (the current map when it is the current scene), clearing
// the tile.
namespace d_004e6c70 {

struct __attribute__((packed)) Object_004e6c70_1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_004e6c70_1, word_0, 0x0);
GUEST_OFFSET(Object_004e6c70_1, byte_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;
inline constexpr guest::Function<0x006f9638, u32(u32)> list_position_of_mode;

struct __attribute__((packed)) Frame_004e6c70 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e6c70, word_0, 0x0);
GUEST_SIZE(Frame_004e6c70, 0x8);

u32 apply_field_drop_message(u32 r0, gptr<Object_004e6c70_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e6c70> frame;  // the original's stack frame
    u32 r0_6 = 0;
    u32 r0_1 = frame.at(4).addr();
    construct_empty_item(r0_1, arg1.addr(), r2, r3);
    u32 r1_1 = arg1->word_0;
    *gptr<u32>(r0_1) = r1_1;
    u32 r0_2 = arg1->byte_4;
    u32 r6_1 = r0_2 & 0xfu;  // (from the original)
    u32 r7_1 = r0_2 >> 4;
    u32 scene = current_scene_id(r0_2, r1_1);
    u32 scene_flagged = scene_has_flags(8u, r0);
    if (scene_flagged != 0) {
        u32 scene_flagged_2 = scene_has_flags(8u, scene);
        if (scene_flagged_2 != 0 && r0 == scene) {
            r0_6 = get_map_table(scene_flagged_2);
        } else {
            u32 position_2 = list_position_of_mode(r0);
            r0_6 = read_map_table(position_2);
        }
        if (r0_6 != 0) {
            frame->word_0 = 1;
            u32 r0_8 = GridMap__place_item_at_world(r0_6, frame.at(4).addr(), r6_1, r7_1);
            if (r0_8 != 0) {
                clear_field_tile(r6_1, r7_1, 1u);
            }
        }
    }
    return frame.at(4).addr();
}

}  // namespace d_004e6c70
GUEST_EXPORT_FRAMED(0x004e6c70, d_004e6c70::apply_field_drop_message, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e6e84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True for flagged kinds in odd area scenes while the tour record is in state 9.
namespace d_004e6e84 {

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x005b49e0, u32(u32)> scene_is_odd_after_81;
inline constexpr guest::Function<0x006c4280, u32(u32)> record_value;
inline constexpr guest::Function<0x006e0b2c, u32(u32)> kind_has_flag_80000_or_100000;

u32 is_tour_area_scene_9(u32 r0) {
    u32 r0_1 = kind_has_flag_80000_or_100000(r0);
    if (r0_1 != 0) {
        u32 r4_1 = *tour_instance;
        if (r4_1 != 0) {
            u32 r0_2 = scene_is_odd_after_81(r0);
            if (r0_2 != 0) {
                u32 r0_3 = *gptr<s8>(r4_1 + 0x1cu);  // (from the original)
                u32 r0_4 = record_value(r0_3);
                if (r0_4 == 9u) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_004e6e84
GUEST_EXPORT_FRAMED(0x004e6e84, d_004e6e84::is_tour_area_scene_9, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e7234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the item at the cell of the map of the mode, clearing the tile, and when asked sends message 0x4e.
namespace d_004e7234 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;
inline constexpr guest::Function<0x006f9638, u32(u32)> list_position_of_mode;

struct __attribute__((packed)) Frame_004e7234 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e7234, word_0, 0x0);
GUEST_OFFSET(Frame_004e7234, byte_4, 0x4);
GUEST_SIZE(Frame_004e7234, 0xc);

void place_field_item_and_share(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e7234> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r4_1 = *frame.at<u32>(0x28);  // (from the original)
    u32 scene = current_scene_id(r0, r1, r2, r3);
    u32 scene_flagged = scene_has_flags(8u, r0);
    if (scene_flagged != 0) {
        u32 scene_flagged_2 = scene_has_flags(8u, scene);
        if (scene_flagged_2 != 0 && r0 == scene) {
            r0_4 = get_map_table(scene_flagged_2);
        } else {
            u32 position_2 = list_position_of_mode(r0);
            r0_4 = read_map_table(position_2);
        }
        if (r0_4 != 0) {
            frame->word_0 = 1;
            u32 r0_6 = GridMap__place_item_at_world(r0_4, r1, r2, r3);
            if (r0_6 != 0) {
                u32 r0_7 = clear_field_tile(r2, r3, 1u);
                if (r4_1 != 0) {
                    u32 r0_8 = current_net_signed_value(r0_7);
                    if (r0_8 != 0) {
                        frame->word_0 = *gptr<u32>(r1);
                        frame->byte_4 = u8((r2 & 0xfu | u32(frame->byte_4) & ~0xfu) & ~0xf0u | 0xf0u & r3 << 4);  // (from the original)
                        send_message(0x4eu, 4u, frame.at(0).addr(), 5u);  // (from the original)
                    }
                }
            }
        }
    }
}

}  // namespace d_004e7234
GUEST_EXPORT_FRAMED(0x004e7234, d_004e7234::place_field_item_and_share, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004e7344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True for flagged kinds in odd area scenes (without flag 0x100000) while the tour record is in state 9.
namespace d_004e7344 {

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x005b49b4, u32(u32)> scene_is_odd_without_flag_100000;
inline constexpr guest::Function<0x006c4280, u32(u32)> record_value;
inline constexpr guest::Function<0x006e0b2c, u32(u32)> kind_has_flag_80000_or_100000;

u32 is_tour_area_scene_9_b(u32 r0) {
    u32 r0_1 = kind_has_flag_80000_or_100000(r0);
    if (r0_1 != 0) {
        u32 r4_1 = *tour_instance;
        if (r4_1 != 0) {
            u32 r0_2 = scene_is_odd_without_flag_100000(r0);
            if (r0_2 != 0) {
                u32 r0_3 = *gptr<s8>(r4_1 + 0x1cu);  // (from the original)
                u32 r0_4 = record_value(r0_3);
                if (r0_4 == 9u) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_004e7344
GUEST_EXPORT_FRAMED(0x004e7344, d_004e7344::is_tour_area_scene_9_b, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e7bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Uses the furniture at (x, y): refreshes it (placing the villager items in scene 0x2b first); its result, or 0
// without furniture.
namespace d_004e7bb0 {

inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x005708e8, u32(u32)> AcFtr__action_info;
inline constexpr guest::Function<0x0057456c, u32(u32, u32)> AcFtrAudio__set_playing;
inline constexpr guest::Function<0x005b42fc, u32(u32)> capped_count_for_kind;
inline constexpr guest::Function<0x0061402c, u32(u32)> place_first_villager_items_2b;
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> RoomGrid__cell;

u32 RoomGrid__use_furniture_at(u32 room_grid, u32 r1, u32 layer) {
    u32 r1_5 = 0;
    u32 cell_2 = RoomGrid__cell(room_grid_address, room_grid, r1, layer);
    if (s32(cell_2) >= 0) {
        u32 scene = current_scene_id(cell_2);
        u32 count_3 = capped_count_for_kind(scene);
        if (cell_2 <= count_3) {
            u32 scene_2 = current_scene_id(count_3);
            u32 count_4 = capped_count_for_kind(scene_2);
            u32 cf_1 = count_4 >= 0x30u;  // (from the original)
            if (!cf_1 || count_4 == 0x30u) {  // (from the original)
                cf_1 = cell_2 >= count_4;
            }
            r1_5 = 0u;
            if (!cf_1) {
                u32 ac_ftr_audio = gptr<u32>(room_furniture_address)[cell_2];
                if (ac_ftr_audio != 0) {
                    u32 r0_6 = AcFtrAudio__set_playing(ac_ftr_audio, 0u);
                    u32 scene_3 = current_scene_id(r0_6);
                    if (scene_3 == 0x2bu) {  // (from the original)
                        place_first_villager_items_2b(scene_3);
                    }
                    u32 r0_8 = AcFtr__action_info(ac_ftr_audio);
                    r1_5 = r0_8;
                }
            }
        } else {
            r1_5 = 0u;
        }
    } else {
        r1_5 = 0u;
    }
    guest::cpu()->r[1] = r1_5;
    return r1_5;
}

}  // namespace d_004e7bb0
GUEST_EXPORT_FRAMED(0x004e7bb0, d_004e7bb0::RoomGrid__use_furniture_at, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e7c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when one of the 4 cells around (x, y) holds wall furniture (class 4 or 5) that is not mounted (flag bit 2
// clear).
namespace d_004e7c54 {

struct __attribute__((packed)) Local_004e7c54_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e7c54_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_004e7c54_r0_1, word_4, 0x4);

inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x005b42fc, u32(u32)> capped_count_for_kind;
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> RoomGrid__cell;
inline constexpr guest::Function<0x007500b4, u32(u32)> furniture_has_class_4_or_5;
inline constexpr guest::Function<0x00750894, u32(u32)> record_flag_bit_2;

u32 RoomGrid__has_wall_furniture_around(u32 room_grid, u32 r1) {
    u32 r6 = room_grid;
    u32 r7 = r1;
    u32 r4 = 0u;
    u32 r9 = 0x865648u;  // (from the original)
    do {
        gptr<Local_004e7c54_r0_1> r0_1 = gptr<Local_004e7c54_r0_1>(r9 + (r4 << 3));
        u32 cell_2 = RoomGrid__cell(room_grid_address, r0_1->word_0 + r6, r0_1->word_4 + r7, 0u);
        u32 scene = current_scene_id(cell_2);
        u32 scene_flagged = scene_has_flags(8u, scene);
        if (cell_2 + 1u != 0) {
            u32 scene_2 = current_scene_id(scene_flagged);
            u32 count_2 = capped_count_for_kind(scene_2);
            if (count_2 <= 0x30u && count_2 > cell_2) {  // (from the original)
                u32 r5_1 = gptr<u32>(room_furniture_address)[cell_2];
                if (r5_1 != 0) {
                    u32 r0_7 = furniture_has_class_4_or_5(r5_1);
                    if (r0_7 != 0) {
                        u32 r0_8 = record_flag_bit_2(r5_1);
                        if (r0_8 == 0) {
                            return 1u;
                        }
                    }
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    return 0u;
}

}  // namespace d_004e7c54
GUEST_EXPORT_FRAMED(0x004e7c54, d_004e7c54::RoomGrid__has_wall_furniture_around, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e7d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops room timer `index` (below 4).
namespace d_004e7d38 {

inline constexpr u32 room_timers_address = 0x009c79d4u;

void RoomTimers__stop(u32 room_timers) {
    if (room_timers >= 4u) {
        guest::cpu()->r[1] = room_timers_address;
        return;
    }
    *gptr<u8>((room_timers << 4) + room_timers_address) = 0;
    guest::cpu()->r[1] = room_timers_address;
}

}  // namespace d_004e7d38
GUEST_EXPORT(0x004e7d38, d_004e7d38::RoomTimers__stop);

// f_004e7d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For house and flagged scenes, sets the scene record's position and sends message 0x53 (to all when idle).
namespace d_004e7d54 {

struct __attribute__((packed)) Local_004e7d54_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e7d54_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_004e7d54_r0_4, word_4, 0x4);

inline constexpr guest::Function<0x00203558, u32(u32)> scene_record_20_of_mode;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) Frame_004e7d54 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0xb];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e7d54, word_0, 0x0);
GUEST_OFFSET(Frame_004e7d54, word_4, 0x4);
GUEST_OFFSET(Frame_004e7d54, byte_8, 0x8);
GUEST_SIZE(Frame_004e7d54, 0x14);

void set_scene_position_and_share_b(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e7d54> frame;  // the original's stack frame
    u32 r0_3 = 0;
    gptr<Local_004e7d54_r0_4> r0_4 = gptr<Local_004e7d54_r0_4>(0u);
    u32 scene_flagged = scene_has_flags(0x80u, r0, r2, r3);  // (from the original)
    if (scene_flagged == 0) {
        scene_flagged = scene_has_flags(0x2000u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (scene_flagged == 0) {
            return;
        }
    }
    u32 r0_2 = current_net_signed_value(scene_flagged);
    if (r0_2 != 0) {
        r0_3 = current_net_signed_value(r0_2);
        if (r0_3 == 0) {
            goto L_4e7e00;
        }
        r0_3 = main_object_idle(r0_3);
        if (r0_3 == 0) {
            goto L_4e7e00;
        }
    }
    r0_4 = gptr<Local_004e7d54_r0_4>(scene_record_20_of_mode(r0));
    if (r0_4.addr() != 0) {
        r0_4->word_0 = r2;
        r0_4->word_4 = r3;
        r0_4 = gptr<Local_004e7d54_r0_4>(current_net_signed_value(r0_4.addr()));
        if (r0_4.addr() == 0) {
            return;
        }
    }
    r0_3 = current_net_signed_value(r0_4.addr());
    if (r0_3 == 0) {
        return;
    }
L_4e7e00:;
    u32 r7_1 = 0u;
    frame->word_0 = r2;
    frame->word_4 = r3;
    frame->byte_8 = u8(r0);
    u32 r0_5 = main_object_idle(r0_3);
    if (r0_5 != 0) {
        r7_1 = 4u;
    }
    send_message(0x53u, r7_1, frame.at(0).addr(), 0x10u);  // (from the original)
}

}  // namespace d_004e7d54
GUEST_EXPORT_FRAMED(0x004e7d54, d_004e7d54::set_scene_position_and_share_b, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004e82b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For items of kinds 0x93 and 0x94 (or ids 0x33b5 to 0x33bb), adds to the current player's counters 1 and 0x64.
namespace d_004e82b4 {

inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32)> add_to_player_counter;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;

void count_item_badge_progress(u32 r0, u32 r1, u32 r2) {
    u32 item_data_2 = Item__data(r0, r1, r2, guest::cpu()->r[3]);
    if (item_data_2 == 0) {
        return;
    }
    u32 r0_2 = *gptr<u8>(item_data_2 + 0xau);  // (from the original)
    if (r0_2 >= 0x9bu || r0_2 != 0x93u && r0_2 != 0x94u) {  // (from the original)
        u32 number_2 = Item__number(r0);
        r0_2 = number_2 - 0x33b5u;  // (from the original)
        if (r0_2 > 6u) {
            return;
        }
    }
    u32 player_2 = get_current_player(r0_2);
    if (player_2 == 0) {
        return;
    }
    u32 r0_5 = player_2 + 0x8ae0u;  // (from the original)
    add_to_player_counter(r0_5, 1u, 1u);
    add_to_player_counter(r0_5, 0x64u, 1u);  // (from the original)
}

}  // namespace d_004e82b4
GUEST_EXPORT_FRAMED(0x004e82b4, d_004e82b4::count_item_badge_progress, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e8868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the tools in the current player's 16 pocket slots: sets their room grid index, or clears their value.
namespace d_004e8868 {

inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x00304ef0, u32(u32, u32)> item_property_with_slot_4;
inline constexpr guest::Function<0x00313124, u32(u32)> item_has_flags_and_check_b;
inline constexpr guest::Function<0x006bb358, u32(u32, u32)> set_item_value_keeping_group;
inline constexpr guest::Function<0x006bb3bc, u32(u32, u32)> Item__set_room_index;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> Pockets__item_with_lock;
inline constexpr guest::Function<0x0076c288, u32(u32, u32, u32, u32)> Item__room_grid_index;

struct __attribute__((packed)) Frame_004e8868 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
    u8 byte_1c;
    u8 unknown_1d[0x3];  // (not read or written by name)
    u32 word_20;
};
GUEST_OFFSET(Frame_004e8868, word_0, 0x0);
GUEST_OFFSET(Frame_004e8868, word_14, 0x14);
GUEST_OFFSET(Frame_004e8868, byte_1c, 0x1c);
GUEST_OFFSET(Frame_004e8868, word_20, 0x20);
GUEST_SIZE(Frame_004e8868, 0x24);

u32 Player__refresh_pocket_tools(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e8868> frame;  // the original's stack frame
    u32 r0_1 = player_slot_byte(4u, r1, r2, r3);
    u32 player_2 = get_current_player(r0_1);
    r3 = guest::cpu()->r[3];
    if (player_2 != 0) {
        u32 r9 = 0x33a7u;  // (from the original)
        u32 r4 = 0u;
        u32 r5 = player_2 + 0x6bd0u;  // (from the original)
        u32 r7 = r4;
        u32 r8 = 0xau;  // (from the original)
        u32 r6 = 1u;
        do {
            u32 r0_3 = Pockets__item_with_lock(r5, r4, 0u, r3);
            Item__copy_b(frame.at(0xc).addr(), r0_3);  // (from the original)
            Item__copy_b(frame.at(0x10).addr(), frame.at(0xc).addr());  // (from the original)
            u32 r0_7 = item_has_flags_and_check_b(frame.at(0xc).addr());  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r0_7 != 0) {
                frame->byte_1c = u8(r7);
                frame->word_20 = r6;
                frame->word_14 = r8;
                Item__room_grid_index(frame.at(0xc).addr(), frame.at(0x1c).addr(), frame.at(0x20).addr(), frame.at(0x14).addr());  // (from the original)
                if (frame->byte_1c != 0 && frame->word_14 < 0xau) {  // (from the original)
                    construct_item(frame.at(0x18).addr(), r9);  // (from the original)
                    item_property_with_slot_4(frame.at(0x18).addr(), frame->word_14);  // (from the original)
                    Item__set_room_index(frame.at(0x10).addr(), frame.at(0x18).addr());  // (from the original)
                    frame->word_0 = r6;
                    Pockets__set_slot(r5, r4, frame.at(0x10).addr(), 0u);  // (from the original)
                    r3 = guest::cpu()->r[3];
                } else {
                    set_item_value_keeping_group(frame.at(0x10).addr(), 0u);  // (from the original)
                    r3 = guest::cpu()->r[3];
                }
            }
            player_2 = frame.at(0xc).addr();  // (from the original)
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x10u);  // (from the original)
    }
    return player_2;
}

}  // namespace d_004e8868
GUEST_EXPORT_FRAMED(0x004e8868, d_004e8868::Player__refresh_pocket_tools, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004e8b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the scene records of the flagged scenes to the other stations.
namespace d_004e8b00 {

inline constexpr guest::Function<0x00203558, u32(u32)> scene_record_20_of_mode;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0061a788, u32(u32)> NetSession__station_veneer;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

u32 share_scene_records(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r3_7 = 0;
    u32 res_3 = 0;
    u32 r3_9 = 0;
    u32 r6 = r0;
    r13 -= 0x28u;  // (from the original)
    u32 r4 = r2;
    u32 r5 = r1;
    guest::cpu()->r[13] = r13;
    u32 scene_flagged = scene_has_flags(0x80u, r1, r2, r3);  // (from the original)
    if (scene_flagged == 0) {
        guest::cpu()->r[13] = r13;
        scene_flagged = scene_has_flags(0x2000u, r5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (scene_flagged == 0) {
            r13 += 0x28u;  // (from the original)
            guest::cpu()->r[13] = r13;
            return scene_flagged;
        }
    }
    guest::cpu()->r[13] = r13;
    u32 r0_2 = current_net_signed_value(scene_flagged);
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_3 = main_object_idle(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_3 == 0) {
            guest::cpu()->r[13] = r13;
            u32 r0_4 = NetSession__station_veneer(r5);
            if (r0_4 == 0) {
                goto L_4e8c18;
            }
        }
    } else {
        guest::cpu()->r[13] = r13;
        scene_flagged = scene_record_20_of_mode(r5);
        r12 = scene_flagged;
        if (scene_flagged == 0) {
            r13 += 0x28u;  // (from the original)
            guest::cpu()->r[13] = r13;
            return scene_flagged;
        }
        r2 = 4u;
        r0 = r6 - 4u;
        r1 = r13 - 1u;
        do {
            res_1 = r2 - 1u;
            r2 = res_1;
            *gptr<u8>(r1 + 1u) = u8(*gptr<u32>(r0 + 4u));
            u32 ea_3 = r0 + 8u;
            r0 = ea_3;
            r3_5 = *gptr<u32>(ea_3);
            u32 ea_4 = r1 + 2u;
            *gptr<u8>(ea_4) = u8(r3_5);
            r1 = ea_4;
            guest::preempt();
        } while (res_1 != 0);
        guest::cpu()->r[13] = r13;
        copy_8_bytes(r4 == 0 ? r12 + 0x12u : r12 + 0xau, r13, r2, r3_5);  // (from the original)
        r13 += 0x28u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = scene_record_20_of_mode(r5);
    r12 = r0_6;
    if (r0_6 != 0) {
        r2 = 4u;
        r0 = r6 - 4u;
        r1 = r13 + 0xfu;  // (from the original)
        do {
            res_2 = r2 - 1u;
            r2 = res_2;
            *gptr<u8>(r1 + 1u) = u8(*gptr<u32>(r0 + 4u));
            u32 ea_7 = r0 + 8u;
            r0 = ea_7;
            r3_7 = *gptr<u32>(ea_7);
            u32 ea_8 = r1 + 2u;
            *gptr<u8>(ea_8) = u8(r3_7);
            r1 = ea_8;
            guest::preempt();
        } while (res_2 != 0);
        guest::cpu()->r[13] = r13;
        copy_8_bytes(r4 == 0 ? r12 + 0x12u : r12 + 0xau, r13 + 0x10u, r2, r3_7);  // (from the original)
    }
L_4e8c18:;
    r2 = 4u;
    r0 = r6 - 4u;
    r1 = r13 - 1u;
    do {
        res_3 = r2 - 1u;
        r2 = res_3;
        *gptr<u8>(r1 + 1u) = u8(*gptr<u32>(r0 + 4u));
        u32 ea_11 = r0 + 8u;
        r0 = ea_11;
        r3_9 = *gptr<u32>(ea_11);
        u32 ea_12 = r1 + 2u;
        *gptr<u8>(ea_12) = u8(r3_9);
        r1 = ea_12;
        guest::preempt();
    } while (res_3 != 0);
    *gptr<u8>(r13 + 8u) = u8(r5);
    *gptr<u8>(r13 + 9u) = u8(r4);
    u32 r4_1 = 0u;
    guest::cpu()->r[13] = r13;
    u32 r0_8 = main_object_idle(r0, r1, r2, r3_9);
    if (r0_8 != 0) {
        r4_1 = 4u;
    }
    guest::cpu()->r[13] = r13;
    send_message(0x55u, r4_1, r13, 0xau);  // (from the original)
    r13 += 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_004e8b00
GUEST_EXPORT(0x004e8b00, d_004e8b00::share_scene_records);

// f_004e93d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the item covering the tile is not fixed (and not wall furniture, unless allowed).
namespace d_004e93d8 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x00303acc, u32(u32)> item_is_kind_11_with_class_4_or_5;
inline constexpr guest::Function<0x004e0cec, u32(u32, u32, u32, u32)> item_covering_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x00768d60, u32(u32)> Item__table_flag_bit_2_unless_no_kind_11;

struct __attribute__((packed)) Frame_004e93d8 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e93d8, word_0, 0x0);
GUEST_SIZE(Frame_004e93d8, 0x8);

u32 tile_item_is_free(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e93d8> frame;  // the original's stack frame
    u32 map_table_2 = get_map_table(r0, r1, r2, r3);
    frame->word_0 = 0;
    u32 item_2 = item_covering_tile(r0, r1, 0u, map_table_2);
    Item__copy_b(frame.at(4).addr(), item_2);
    if (r2 == 0) {
        u32 r0_5 = item_is_kind_11_with_class_4_or_5(frame.at(4).addr());
        if (r0_5 != 0) {
            return 0u;
        }
    }
    u32 r0_7 = Item__table_flag_bit_2_unless_no_kind_11(frame.at(4).addr());
    return r0_7 ^ 1u;
}

}  // namespace d_004e93d8
GUEST_EXPORT_FRAMED(0x004e93d8, d_004e93d8::tile_item_is_free, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e95f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the three room flag bytes after 0x9529d4.
namespace d_004e95f0 {

inline constexpr u32 room_flags_address = 0x009529d4u;
inline guest::global<u8, 0x009529d5> room_flag_b;
inline guest::global<u8, 0x009529d6> room_flag_c;
inline guest::global<u8, 0x009529d7> room_flag_d;

u32 clear_room_flags() {
    *room_flag_b = 0;
    *room_flag_c = 0;
    *room_flag_d = 0;
    guest::cpu()->r[1] = 0u;
    return room_flags_address;
}

}  // namespace d_004e95f0
GUEST_EXPORT(0x004e95f0, d_004e95f0::clear_room_flags);

// f_004e960c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the cell is inside the light's area (in the town or the flagged scenes).
namespace d_004e960c {

struct __attribute__((packed)) Object_004e960c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004e960c_0, word_0, 0x0);

struct __attribute__((packed)) Object_004e960c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_004e960c_1, word_0, 0x0);

struct __attribute__((packed)) Local_004e960c_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_004e960c_r5_1, word_0, 0x0);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x00613718, u32(u32, u32)> is_town_cell;

u32 cell_is_lit(gptr<Object_004e960c_0> arg0, gptr<Object_004e960c_1> arg1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r0_1 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = r0 == 0;
    gptr<Local_004e960c_r5_1> r5_1 = gptr<Local_004e960c_r5_1>(r1);
    if (!zf_1) {
        zf_1 = r5_1.addr() == 0;
    }
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    if (!zf_1) {
        if (r6_1 == 0) {
            r1 = 0x40u;  // (from the original)
            arg0->word_0 = r1;
            r0_1 = 0x50u;  // (from the original)
        } else {
            r0_1 = 0x10u;  // (from the original)
            arg0->word_0 = r0_1;
        }
        arg1->word_0 = r0_1;
        u32 scene = current_scene_id(r0_1, r1, r2, r3);
        u32 scene_flagged = scene_has_flags(8u, scene);
        r1 = guest::cpu()->r[1];
        if (scene_flagged != 0) {
            u32 nf_1 = r2 - 0x10u >> 0x1f;  // (from the original)
            u32 vf_1 = ((r2 ^ 0x10u) & (r2 ^ r2 - 0x10u)) >> 0x1f;  // (from the original)
            if (nf_1 != vf_1) {
                nf_1 = r3 - 0x10u >> 0x1f;  // (from the original)
                vf_1 = ((r3 ^ 0x10u) & (r3 ^ r3 - 0x10u)) >> 0x1f;  // (from the original)
            }
            if (nf_1 != vf_1) {
                goto L_4e96a0;
            }
        }
        r0_4 = scene_has_flags(0x200u, scene);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            u32 scene_flagged_2 = scene_has_flags(0x10000000u, scene);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (scene_flagged_2 == 0) {
                u32 scene_flagged_3 = scene_has_flags(0x20u, scene);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (scene_flagged_3 != 0) {
                    u32 r0_7 = is_town_cell(r2, r3);
                    r1 = guest::cpu()->r[1];
                    if (r0_7 != 0) {
                        r1 = r2 - 0x10u;  // (from the original)
                        arg0->word_0 = r3 - 0x10u;  // (from the original)
                        r5_1->word_0 = r1;
                    }
                }
                goto L_4e96ec;
            }
        }
L_4e96a0:;
        arg0->word_0 = r3;
        r5_1->word_0 = r2;
L_4e96ec:;
        if (r6_1 != 0) {
            if (r6_1 == 1u) {
                goto L_4e971c;
            }
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        if (arg0->word_0 >= 0x40u || r5_1->word_0 >= 0x50u) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        guest::cpu()->r[1] = r1;
        return 1u;
L_4e971c:;
        if (arg0->word_0 < 0x10u && r5_1->word_0 < 0x10u) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_004e960c
GUEST_EXPORT_FRAMED(0x004e960c, d_004e960c::cell_is_lit, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e9738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the room's furniture whose lights reach the cell.
namespace d_004e9738 {

inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x004e960c, u32(u32, u32, u32, u32)> cell_is_lit;
inline constexpr guest::Function<0x005b41e8, u32(u32)> scene_light_kind;
inline constexpr guest::Function<0x005b42fc, u32(u32)> capped_count_for_kind;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> GridMap__rect_10_contains;

struct __attribute__((packed)) Frame_004e9738 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e9738, word_0, 0x0);
GUEST_OFFSET(Frame_004e9738, word_4, 0x4);
GUEST_OFFSET(Frame_004e9738, word_c, 0xc);
GUEST_SIZE(Frame_004e9738, 0x14);

void count_lit_furniture(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e9738> frame;  // the original's stack frame
    u32 r1_5 = 0;
    u32 r7 = r0;
    u32 r4 = r1;
    u32 r6 = *frame.at<u32>(0x30);  // (from the original)
    u32 r8 = r2;
    u32 r9 = r3;
    u32 map_table_2 = get_map_table(r0, r1, r2, r3);
    u32 scene = current_scene_id(map_table_2, guest::cpu()->r[1]);
    u32 r0_3 = scene_light_kind(scene);
    r1 = guest::cpu()->r[1];
    if (map_table_2 != 0 && r0_3 < 2u && r0_3 >= r6) {
        u32 r0_4 = GridMap__rect_10_contains(map_table_2, r8, r9);
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r5 = room_furniture_address;
            u32 scene_2 = current_scene_id(r0_4, r1);
            u32 count_2 = capped_count_for_kind(scene_2);
            r1 = count_2;
            if (count_2 != 0) {
                r2 = r1 & 1u;
                r0 = 0u;
                if (r2 >= 0u && r2 != 0) {
                    do {
                        if (gptr<u32>(r5)[r0] == r4) {
                            goto L_4e97fc;
                        }
                        r0 += 1u;
                        guest::preempt();
                    } while (r2 > r0);
                }
                r0 = r2;
                if (r2 >= r1) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
L_4e97dc:;
                if (gptr<u32>(r5)[r0] != r4) {
                    if (*gptr<u32>(r5 + (r0 << 2) + 4u) != r4) {
                        r0 += 2u;
                        if (r1 > r0) {
                            guest::preempt();
                            goto L_4e97dc;
                        }
                        guest::cpu()->r[1] = r1;
                        return;
                    }
                    r0 += 1u;
                }
L_4e97fc:;
                if (r0 + 1u != 0) {
                    frame->word_c = 0;
                    u32 r4_1 = sxtb(r0);
                    frame->word_4 = 0;
                    frame->word_0 = r6;
                    u32 r0_8 = cell_is_lit(frame.at(0xc).addr(), frame.at(4).addr(), r8, r9);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0_8 != 0) {
                        u32 r0_9 = frame->word_c;
                        if (r6 == 1u) {
                            r1_5 = frame->word_4;
                            *gptr<u8>(r7 + (r0_9 << 4) + r1_5 + 0x1400u) = u8(r4_1);  // (from the original)
                        } else {
                            r1_5 = frame->word_4;
                            *gptr<u8>(r7 + r0_9 * 0x50u + r1_5) = u8(r4_1);  // (from the original)
                        }
                        guest::cpu()->r[1] = r1_5;
                        return;
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004e9738
GUEST_EXPORT_FRAMED(0x004e9738, d_004e9738::count_lit_furniture, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004e9894: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the room's furniture whose lights reach the cell (second rule set).
namespace d_004e9894 {

inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x004e960c, u32(u32, u32, u32, u32)> cell_is_lit;
inline constexpr guest::Function<0x005b41e8, u32(u32)> scene_light_kind;
inline constexpr guest::Function<0x005b42fc, u32(u32)> capped_count_for_kind;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> GridMap__rect_10_contains;

struct __attribute__((packed)) Frame_004e9894 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e9894, word_0, 0x0);
GUEST_OFFSET(Frame_004e9894, word_4, 0x4);
GUEST_OFFSET(Frame_004e9894, word_8, 0x8);
GUEST_SIZE(Frame_004e9894, 0x10);

void count_lit_furniture_b(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e9894> frame;  // the original's stack frame
    u32 r1_5 = 0;
    u32 r7 = r0;
    u32 r4 = r1;
    u32 r6 = *frame.at<u32>(0x30);  // (from the original)
    u32 r8 = r2;
    u32 r9 = r3;
    u32 map_table_2 = get_map_table(r0, r1, r2, r3);
    u32 scene = current_scene_id(map_table_2, guest::cpu()->r[1]);
    u32 r0_3 = scene_light_kind(scene);
    r1 = guest::cpu()->r[1];
    if (map_table_2 != 0 && r0_3 < 2u && r0_3 >= r6) {
        u32 r0_4 = GridMap__rect_10_contains(map_table_2, r8, r9);
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r5 = room_furniture_address;
            u32 scene_2 = current_scene_id(r0_4, r1);
            u32 count_2 = capped_count_for_kind(scene_2);
            r1 = count_2;
            u32 r10 = ~0u;
            if (count_2 != 0) {
                r2 = r1 & 1u;
                r0 = 0u;
                if (r2 >= 0u && r2 != 0) {
                    do {
                        if (gptr<u32>(r5)[r0] == r4) {
                            goto L_4e995c;
                        }
                        r0 += 1u;
                        guest::preempt();
                    } while (r2 > r0);
                }
                r0 = r2;
                if (r2 >= r1) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
L_4e993c:;
                if (gptr<u32>(r5)[r0] != r4) {
                    if (*gptr<u32>(r5 + (r0 << 2) + 4u) != r4) {
                        r0 += 2u;
                        if (r1 > r0) {
                            guest::preempt();
                            goto L_4e993c;
                        }
                        guest::cpu()->r[1] = r1;
                        return;
                    }
                    r0 += 1u;
                }
L_4e995c:;
                if (r0 + 1u != 0) {
                    frame->word_4 = 0;
                    frame->word_8 = 0;
                    frame->word_0 = r6;
                    u32 r0_8 = cell_is_lit(frame.at(4).addr(), frame.at(8).addr(), r8, r9);
                    r1 = guest::cpu()->r[1];
                    if (r0_8 != 0) {
                        u32 r0_9 = frame->word_4;
                        if (r6 == 1u) {
                            r1_5 = frame->word_8;
                            *gptr<u8>(r7 + (r0_9 << 4) + r1_5 + 0x1400u) = u8(r10);  // (from the original)
                        } else {
                            r1_5 = frame->word_8;
                            *gptr<u8>(r7 + r0_9 * 0x50u + r1_5) = u8(r10);  // (from the original)
                        }
                        guest::cpu()->r[1] = r1_5;
                        return;
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004e9894
GUEST_EXPORT_FRAMED(0x004e9894, d_004e9894::count_lit_furniture_b, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e99f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The furniture of the layer at the world position.
namespace d_004e99f0 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;

struct __attribute__((packed)) Frame_004e99f0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e99f0, word_0, 0x0);
GUEST_OFFSET(Frame_004e99f0, word_4, 0x4);
GUEST_SIZE(Frame_004e99f0, 0xc);

u32 RoomGrid__furniture_at_position(u32 room_grid, u32 room_furniture, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e99f0> frame;  // the original's stack frame
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), room_furniture, r3);
    u32 furniture_2 = RoomGrid__furniture_at(room_grid, frame->word_0, frame->word_4, r2);
    return furniture_2;
}

}  // namespace d_004e99f0
GUEST_EXPORT_FRAMED(0x004e99f0, d_004e99f0::RoomGrid__furniture_at_position, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004e9a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The furniture object at cell (x, z) of the room grid (from the table of up to 48); null when none.
namespace d_004e9a28 {

inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x005b42fc, u32(u32)> capped_count_for_kind;
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> RoomGrid__cell;

u32 RoomGrid__furniture_at(u32 grid, u32 x) {
    u32 r0_6 = 0;
    u32 cell_2 = RoomGrid__cell(grid, x, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 scene = current_scene_id(cell_2, x);
    u32 scene_flagged = scene_has_flags(8u, scene);
    if (cell_2 + 1u != 0) {
        u32 scene_2 = current_scene_id(scene_flagged, guest::cpu()->r[1]);
        u32 count_2 = capped_count_for_kind(scene_2);
        r0_6 = count_2 <= 0x30u && cell_2 < count_2 ? gptr<u32>(room_furniture_address)[cell_2] : 0u;  // (from the original)
    } else {
        r0_6 = 0u;
    }
    return r0_6;
}

}  // namespace d_004e9a28
GUEST_EXPORT_FRAMED(0x004e9a28, d_004e9a28::RoomGrid__furniture_at, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e9dc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the global item rows and records.
namespace d_004e9dc8 {

struct __attribute__((packed)) Local_004e9dc8_r0_1 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004e9dc8_r0_1, byte_0, 0x0);
GUEST_OFFSET(Local_004e9dc8_r0_1, byte_1, 0x1);
GUEST_OFFSET(Local_004e9dc8_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_004e9dc8_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_004e9dc8_r0_1, float_c, 0xc);

inline constexpr u32 global_items_address = 0x0094f340u;
inline constexpr u32 room_flags_address = 0x009529d4u;
inline constexpr u32 room_timers_address = 0x009c79d4u;
inline constexpr u32 room_furniture_address = 0x009c7a14u;
inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline guest::global<u32, 0x0094f310> scene_object_pool;
inline guest::global<u8, 0x0094f340> global_items;
inline constexpr guest::Function<0x0018a390, u32(u32)> clear_global_item_94d748;
inline constexpr guest::Function<0x00582464, u32(u32, u32, u32, u32)> reset_bit_table_entries;
inline constexpr guest::Function<0x00691538, u32(u32)> return_constant_0x98af24_;
inline constexpr guest::Function<0x00693570, u32(u32, u32, u32, u32)> clear_global_item_row;
inline constexpr guest::Function<0x00693778, u32(u32)> clear_global_items;
inline constexpr guest::Function<0x0077957c, u32(u32)> GpuTexParams__clear;

u32 reset_global_items() {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 res_1 = 0;
    u32 r4 = 0u;
    u32 r1 = r4;
    u32 r5 = room_flags_address;
    u32 r2 = room_timers_address;
    float S0 = 0.0f;
    u32 r3 = 0xa5u;  // (from the original)
    *gptr<u8>(r5) = u8(r4);
    do {
        gptr<Local_004e9dc8_r0_1> r0_1 = gptr<Local_004e9dc8_r0_1>(r2 + (r1 << 4));
        r1 += 1u;
        r0_1->byte_0 = u8(r4);
        r0_1->byte_1 = u8(r3);
        r0_1->float_4 = S0;
        r0_1->float_8 = S0;
        r0_1->float_c = S0;
        guest::preempt();
    } while (r1 < 4u);
    r2 = room_furniture_address;
    r1 = 0u;
    u32 r0 = r1;
    do {
        r0 += 2u;
        *gptr<u32>(r2 + (r1 << 2)) = r4;
        u32 r1_1 = r1 + 1u;
        *gptr<u32>(r2 + (r1_1 << 2)) = r4;
        r1 = r1_1 + 1u;
        guest::preempt();
    } while (r0 < 0x30u);  // (from the original)
    u32 r14 = room_grid_address;
    r0 = 0u;
    r2 = ~0u;
    do {
        r1 = 0u;
        r3 = 0x50u;  // (from the original)
        u32 r12 = r14 + r0 * 0x50u;  // (from the original)
        u32 r6 = r14 + (r0 << 4);
        do {
            *gptr<u8>(r12 + r1) = u8(r2);
            if (r1 < 0x10u && r0 < 0x10u) {  // (from the original)
                *gptr<u8>(r6 + r1 + 0x1400u) = u8(r2);  // (from the original)
            }
            res_1 = r3 - 1u;
            r3 = res_1;
            r1 += 1u;
            guest::preempt();
        } while (res_1 != 0);
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0x40u);  // (from the original)
    *gptr<u8>(r5 + 1u) = u8(r4);
    *gptr<u8>(r5 + 2u) = u8(r4);
    *gptr<u8>(r5 + 3u) = u8(r4);
    *scene_object_pool = r4;
    *global_items = u8(r4);
    guest::cpu()->s[0] = S0;
    u32 r0_2 = clear_global_item_row(global_items_address, r1, r2, r3);
    u32 r0_3 = clear_global_items(r0_2);
    u32 r0_4 = return_constant_0x98af24_(r0_3);
    u32 r0_5 = GpuTexParams__clear(r0_4);
    u32 r0_6 = clear_global_item_94d748(r0_5);
    frame.release();
    return reset_bit_table_entries(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004e9dc8
GUEST_EXPORT(0x004e9dc8, d_004e9dc8::reset_global_items);

// f_004e9f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The height of the surface at the position: on the furniture there (mounted or not), else the tile's.
namespace d_004e9f74 {

struct __attribute__((packed)) Local_004e9f74_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_004e9f74_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e9f74_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004e9f74_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004e9f74_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_004e9f74_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_004e9f74_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e9f74_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_004e9f74_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_004e9f74_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_004e9f74_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_004e9f74_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_004e9f74_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_004e9f74_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_004e9f74_ea_3, word_c, 0xc);

inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32)> tile_height_at_world;
inline constexpr guest::Function<0x00750894, u32(u32)> record_flag_bit_2;
inline constexpr guest::Function<0x00751d00, u32(u32)> offset_height;

struct __attribute__((packed)) Frame_004e9f74 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e9f74, word_0, 0x0);
GUEST_OFFSET(Frame_004e9f74, word_4, 0x4);
GUEST_SIZE(Frame_004e9f74, 0x18);

void surface_height_at(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<Frame_004e9f74> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    float S0_4 = 0;
    gptr<Local_004e9f74_ea_1> ea_1 = gptr<Local_004e9f74_ea_1>(frame.at(8).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0, r3);
    u32 r5_1 = frame->word_4;
    u32 r6_1 = frame->word_0;
    u32 furniture_2 = RoomGrid__furniture_at(room_grid_address, r6_1, r5_1, 0u);
    if (furniture_2 != 0) {
        u32 r0_3 = record_flag_bit_2(furniture_2);
        if (r0_3 == 0) {
            offset_height(furniture_2);
            S0_4 = guest::cpu()->s[0];
        } else {
            S0_4 = std::bit_cast<float>(*gptr<u32>(furniture_2 + 0x18u));  // (from the original)
        }
        gptr<Local_004e9f74_ea_2> ea_2 = gptr<Local_004e9f74_ea_2>(frame.at(8).addr());
        u32 r4_1 = ea_2->word_0;
        u32 r5_2 = ea_2->word_4;
        u32 r6_2 = ea_2->word_8;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->s[0] = S0_4;
        return;
    }
    tile_height_at_world(r6_1, r5_1, 0u);
    gptr<Local_004e9f74_ea_3> ea_3 = gptr<Local_004e9f74_ea_3>(frame.at(8).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_3 = ea_3->word_4;
    u32 r6_3 = ea_3->word_8;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
}

}  // namespace d_004e9f74
GUEST_EXPORT(0x004e9f74, d_004e9f74::surface_height_at);

// f_004e9fe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The height of the surface at the cell: on the furniture there (mounted or not), else the tile's.
namespace d_004e9fe8 {

inline constexpr u32 room_grid_address = 0x009c7ad4u;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32)> tile_height_at_world;
inline constexpr guest::Function<0x00750894, u32(u32)> record_flag_bit_2;
inline constexpr guest::Function<0x00751d00, u32(u32, u32)> offset_height;

u32 surface_height_at_cell(u32 r0, u32 r1, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 furniture_2 = RoomGrid__furniture_at(room_grid_address, r0, r1, 0u);
    if (furniture_2 != 0) {
        u32 r0_2 = record_flag_bit_2(furniture_2);
        if (r0_2 != 0) {
            float S0_3 = std::bit_cast<float>(*gptr<u32>(furniture_2 + 0x18u));  // (from the original)
            guest::cpu()->s[0] = S0_3;
            return r0_2;
        }
        frame.release();
        return offset_height(furniture_2, guest::cpu()->r[1]);
    }
    frame.release();
    return tile_height_at_world(r0, r1, 0u);
}

}  // namespace d_004e9fe8
GUEST_EXPORT(0x004e9fe8, d_004e9fe8::surface_height_at_cell);

// f_004ea054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the item's model path: the mannequin pedestal for kind 0x22, else its model by name (with its material or
// jewel variant); false when it has none.
namespace d_004ea054 {

inline constexpr guest::Function<0x00536060, u32(u32)> item_default_value;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x00544f18, u32(u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> construct_print_output;
inline constexpr guest::Function<0x0076b5dc, u32(u32)> Item__variant_size;
inline constexpr guest::Function<0x0076c648, u32(u32)> Item__has_valid_value_06_and_flags_value;

u32 Item__model_path(u32 item, u32 r1) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_4 = 0;
    u32 item_data_2 = Item__data(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (item_data_2 != 0) {
        u32 r0_2 = *gptr<u8>(item_data_2 + 0x11u);  // (from the original)
        if (r0_2 < 0x56u && r0_2 == 0x22u) {  // (from the original)
            u32 r0_3 = frame.at(0).addr();
            construct_print_output(r0_3, item);
            print_append(r0_3, 0x865670u);  // (from the original)
            print_finish(r0_3);
            return 1u;
        }
    }
    r0_4 = item_default_value(r1);
    if (r0_4 != 0) {
        u32 r0_5 = frame.at(0).addr();
        construct_print_output(r0_5, item);
        print_append(r0_5, 0x865698u);  // (from the original)
        print_append(r0_5, r0_4);
        print_finish(r0_5);
        u32 r0_6 = Item__has_valid_value_06_and_flags_value(r1);
        if (r0_6 == 0) {
            return 1u;
        }
        u32 r0_7 = Item__variant_size(r1);
        if (r0_7 == 2u) {
            u32 r0_8 = frame.at(0).addr();
            construct_print_output(r0_8, item);
            print_append(r0_8, 0x8656acu);  // (from the original)
            print_append(r0_8, r0_4);
            print_finish(r0_8);
            return 1u;
        }
        if (r0_7 == 4u) {
            u32 r0_9 = frame.at(0).addr();
            construct_print_output(r0_9, item);
            print_append(r0_9, 0x8656c4u);  // (from the original)
            print_append(r0_9, r0_4);
            print_finish(r0_9);
            return 1u;
        }
        return 1u;
    }
    return r0_4;
}

}  // namespace d_004ea054
GUEST_EXPORT_FRAMED(0x004ea054, d_004ea054::Item__model_path, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004ea4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Draws the scene's pass with its camera (remembering its view at 0x952a4c while drawing).
namespace d_004ea4a0 {

inline constexpr u32 render_scene_state_address = 0x00950440u;
inline constexpr u32 photo_mode_active_address = 0x00952a20u;
inline constexpr u32 scene_environment_address = 0x00952a38u;
inline constexpr u32 render_pass_address = 0x009c90c0u;
inline guest::global<u32, 0x00950440> render_scene_state;
inline guest::global<u32, 0x00952a38> scene_environment;
inline guest::global<u32, 0x00952a4c> render_pass_scene;
inline guest::global<u32, 0x009c90c0> render_pass;
inline constexpr guest::Function<0x00264668, u32(u32, u32)> PhotoCapture__end;
inline constexpr guest::Function<0x00264698, u32(u32, u32, u32, u32)> PhotoCapture__begin;
inline constexpr guest::Function<0x004ec574, u32(u32, u32)> SceneEnv__apply_layer;

void RenderPass__draw_scene(u32 r0_unused, u32 r1) {
    u32 photo_capture = *render_scene_state;
    if (photo_capture != 0) {
        PhotoCapture__begin(photo_capture, *scene_environment, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_2 = *gptr<u32>(*scene_environment + 0xa4u);  // (from the original)
        *render_pass_scene = r1_2;
        SceneEnv__apply_layer(*render_pass, r1_2);
        PhotoCapture__end(photo_capture, *scene_environment);
        r1 = guest::cpu()->r[1];
        *render_pass_scene = 0;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004ea4a0
GUEST_EXPORT_FRAMED(0x004ea4a0, d_004ea4a0::RenderPass__draw_scene, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004eabd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the main render pass dirty (+0xec).
namespace d_004eabd0 {

inline constexpr u32 scene_environment_address = 0x00952a38u;
inline guest::global<u32, 0x00952a38> scene_environment;

u32 RenderPass__mark_dirty() {
    u32 r0_1 = *scene_environment;
    *gptr<u8>(r0_1 + 0xecu) = 1;  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_1;
}

}  // namespace d_004eabd0
GUEST_EXPORT(0x004eabd0, d_004eabd0::RenderPass__mark_dirty);

// f_004eabe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Draws the object with the current view while a pass draws.
namespace d_004eabe8 {

struct __attribute__((packed)) RenderPass {
    u8 unknown_0[0x220];  // (not used here)
    u32 word_220;
};
GUEST_OFFSET(RenderPass, word_220, 0x220);

inline constexpr u32 photo_mode_active_address = 0x00952a20u;
inline constexpr u32 render_object_state_address = 0x00952a2cu;
inline constexpr u32 render_pass_scene_address = 0x00952a4cu;
inline guest::global<u32, 0x00952a2c> render_object_state;
inline guest::global<u32, 0x00952a30> global_00952a30;
inline guest::global<u32, 0x00952a4c> render_pass_scene;
inline constexpr guest::Function<0x00737f20, u32(u32, u32, u32, u32)> FontRenderer__draw;

void RenderPass__draw_object(gptr<RenderPass> render_pass) {
    u32 r3_1 = *render_pass_scene;
    if (r3_1 == 0) {
        return;
    }
    FontRenderer__draw(*render_object_state, render_pass->word_220, *global_00952a30, r3_1);
}

}  // namespace d_004eabe8
GUEST_EXPORT(0x004eabe8, d_004eabe8::RenderPass__draw_object);

// f_004ead50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In mode 1 with no error screen, finishes the frame and clears the pass's first word.
namespace d_004ead50 {

inline guest::global<u8, 0x00952a20> photo_mode_active;
inline guest::global<u32, 0x00952a38> scene_environment;
inline constexpr guest::Function<0x004efb0c, u32(u32, u32)> SceneEnv__set_layer;
inline constexpr guest::Function<0x005ce368, u32(u32, u32, u32, u32)> err_eula_mgr_byte_fad;

void RenderPass__finish_frame(u32 render_pass, u32 r1) {
    u32 r0_1 = *photo_mode_active;
    if (r0_1 == 1u) {
        u32 r0_2 = err_eula_mgr_byte_fad(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            SceneEnv__set_layer(render_pass, 1u);
            r1 = 0u;
            *gptr<u32>(*gptr<u32>(*scene_environment + 0xc0u)) = r1;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004ead50
GUEST_EXPORT_FRAMED(0x004ead50, d_004ead50::RenderPass__finish_frame, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004ead98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the three words at +0x10.
namespace d_004ead98 {

struct __attribute__((packed)) Object_004ead98_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_004ead98_0, word_10, 0x10);
GUEST_OFFSET(Object_004ead98_0, word_14, 0x14);
GUEST_OFFSET(Object_004ead98_0, word_18, 0x18);


u32 set_three_words_10(gptr<Object_004ead98_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_10 = r1;
    arg0->word_14 = r2;
    arg0->word_18 = r3;
    return arg0.addr() + 0x10u;  // (from the original)
}

}  // namespace d_004ead98
GUEST_EXPORT(0x004ead98, d_004ead98::set_three_words_10);

// f_004eae74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The largest count (+0x18) among the resource file's entries.
namespace d_004eae74 {

struct __attribute__((packed)) ResFile {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(ResFile, word_8, 0x8);


u32 ResFile__max_material_count(gptr<ResFile> res_file) {
    u32 r0 = res_file.addr();
    r0 = 0u;
    u32 r3 = res_file->word_8;
    u32 r2 = r0;
    u32 r4 = *gptr<u32>(r3 + 0x64u);  // (from the original)
    if (r4 >= 0u && r4 != 0) {
        u32 r12 = *gptr<u32>(r3 + 0x68u);  // (from the original)
        u32 r5 = 0u;
        do {
            u32 r1_1 = r12 == 0 ? r5 : r3 + 0x68u + r12;  // (from the original)
            if (r1_1 != 0) {
                u32 ea_1 = r1_1 + (r2 << 4) + 0x28u;  // (from the original)
                u32 r6_1 = *gptr<u32>(ea_1);
                r1_1 = r6_1 == 0 ? r5 : ea_1 + r6_1;
            }
            r2 += 1u;
            u32 r1_2 = *gptr<u32>(r1_1 + 0x18u);  // (from the original)
            if (r1_2 > r0) {
                r0 = r1_2;
            }
            guest::preempt();
        } while (r4 > r2);
    }
    return r0;
}

}  // namespace d_004eae74
GUEST_EXPORT_FRAMED(0x004eae74, d_004eae74::ResFile__max_material_count, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_004eb148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Rewinds the three animation sets (their 15 cursors each) and the 2 shared cursors.
namespace d_004eb148 {

struct __attribute__((packed)) Local_004eb148_r0_10 {
    u8 unknown_0[0xac];  // (not used here)
    u32 word_ac;
    u32 word_b0;
};
GUEST_OFFSET(Local_004eb148_r0_10, word_ac, 0xac);
GUEST_OFFSET(Local_004eb148_r0_10, word_b0, 0xb0);

struct __attribute__((packed)) Local_004eb148_r0_11 {
    u8 unknown_0[0x4c];  // (not used here)
    u32 word_4c;
    u32 word_50;
};
GUEST_OFFSET(Local_004eb148_r0_11, word_4c, 0x4c);
GUEST_OFFSET(Local_004eb148_r0_11, word_50, 0x50);

struct __attribute__((packed)) Local_004eb148_r0_12 {
    u8 unknown_0[0x5c];  // (not used here)
    u32 word_5c;
    u32 word_60;
};
GUEST_OFFSET(Local_004eb148_r0_12, word_5c, 0x5c);
GUEST_OFFSET(Local_004eb148_r0_12, word_60, 0x60);

struct __attribute__((packed)) Local_004eb148_r0_13 {
    u8 unknown_0[0xbc];  // (not used here)
    u32 word_bc;
    u32 word_c0;
};
GUEST_OFFSET(Local_004eb148_r0_13, word_bc, 0xbc);
GUEST_OFFSET(Local_004eb148_r0_13, word_c0, 0xc0);

struct __attribute__((packed)) Local_004eb148_r0_14 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u32 word_d0;
};
GUEST_OFFSET(Local_004eb148_r0_14, word_cc, 0xcc);
GUEST_OFFSET(Local_004eb148_r0_14, word_d0, 0xd0);

struct __attribute__((packed)) Local_004eb148_r0_15 {
    u8 unknown_0[0xdc];  // (not used here)
    u32 word_dc;
    u32 word_e0;
};
GUEST_OFFSET(Local_004eb148_r0_15, word_dc, 0xdc);
GUEST_OFFSET(Local_004eb148_r0_15, word_e0, 0xe0);

struct __attribute__((packed)) Local_004eb148_r0_16 {
    u8 unknown_0[0xec];  // (not used here)
    u32 word_ec;
    u32 word_f0;
};
GUEST_OFFSET(Local_004eb148_r0_16, word_ec, 0xec);
GUEST_OFFSET(Local_004eb148_r0_16, word_f0, 0xf0);

struct __attribute__((packed)) Local_004eb148_r0_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_004eb148_r0_2, word_c, 0xc);
GUEST_OFFSET(Local_004eb148_r0_2, word_10, 0x10);

struct __attribute__((packed)) Local_004eb148_r0_3 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_004eb148_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_004eb148_r0_3, word_20, 0x20);

struct __attribute__((packed)) Local_004eb148_r0_4 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Local_004eb148_r0_4, word_2c, 0x2c);
GUEST_OFFSET(Local_004eb148_r0_4, word_30, 0x30);

struct __attribute__((packed)) Local_004eb148_r0_5 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
    u32 word_40;
};
GUEST_OFFSET(Local_004eb148_r0_5, word_3c, 0x3c);
GUEST_OFFSET(Local_004eb148_r0_5, word_40, 0x40);

struct __attribute__((packed)) Local_004eb148_r0_6 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
    u32 word_70;
};
GUEST_OFFSET(Local_004eb148_r0_6, word_6c, 0x6c);
GUEST_OFFSET(Local_004eb148_r0_6, word_70, 0x70);

struct __attribute__((packed)) Local_004eb148_r0_7 {
    u8 unknown_0[0x7c];  // (not used here)
    u32 word_7c;
    u32 word_80;
};
GUEST_OFFSET(Local_004eb148_r0_7, word_7c, 0x7c);
GUEST_OFFSET(Local_004eb148_r0_7, word_80, 0x80);

struct __attribute__((packed)) Local_004eb148_r0_8 {
    u8 unknown_0[0x8c];  // (not used here)
    u32 word_8c;
    u32 word_90;
};
GUEST_OFFSET(Local_004eb148_r0_8, word_8c, 0x8c);
GUEST_OFFSET(Local_004eb148_r0_8, word_90, 0x90);

struct __attribute__((packed)) Local_004eb148_r0_9 {
    u8 unknown_0[0x9c];  // (not used here)
    u32 word_9c;
    u32 word_a0;
};
GUEST_OFFSET(Local_004eb148_r0_9, word_9c, 0x9c);
GUEST_OFFSET(Local_004eb148_r0_9, word_a0, 0xa0);

inline constexpr u32 global_009c90b8_address = 0x009c90b8u;
inline constexpr guest::Function<0x0049a0f0, u32(u32, u32, u32, u32)> Light__copy_colors;
inline constexpr guest::Function<0x004edd88, u32(u32, u32)> AnimationCursor__rewind;
inline constexpr guest::Function<0x004eedbc, u32(u32, u32)> return_constant_0x9c9f00_;

void reset_animation_cursors() {
    gptr<Local_004eb148_r0_16> r0_16 = gptr<Local_004eb148_r0_16>(0u);
    u32 r1_2 = 0;
    u32 r4 = 0u;
    u32 r5 = global_009c90b8_address;
    u32 r6 = r5 + 0xcu;  // (from the original)
    do {
        Light__copy_colors(gptr<u32>(r6)[r4], gptr<u32>(r5)[r4], guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_004eb148_r0_2> r0_2 = gptr<Local_004eb148_r0_2>(gptr<u32>(r5)[r4]);
        r0_2->word_10 = r0_2->word_c;
        gptr<Local_004eb148_r0_3> r0_3 = gptr<Local_004eb148_r0_3>(gptr<u32>(r5)[r4]);
        r0_3->word_20 = r0_3->word_1c;
        gptr<Local_004eb148_r0_4> r0_4 = gptr<Local_004eb148_r0_4>(gptr<u32>(r5)[r4]);
        r0_4->word_30 = r0_4->word_2c;
        gptr<Local_004eb148_r0_5> r0_5 = gptr<Local_004eb148_r0_5>(gptr<u32>(r5)[r4]);
        r0_5->word_40 = r0_5->word_3c;
        gptr<Local_004eb148_r0_6> r0_6 = gptr<Local_004eb148_r0_6>(gptr<u32>(r5)[r4]);
        r0_6->word_70 = r0_6->word_6c;
        gptr<Local_004eb148_r0_7> r0_7 = gptr<Local_004eb148_r0_7>(gptr<u32>(r5)[r4]);
        r0_7->word_80 = r0_7->word_7c;
        gptr<Local_004eb148_r0_8> r0_8 = gptr<Local_004eb148_r0_8>(gptr<u32>(r5)[r4]);
        r0_8->word_90 = r0_8->word_8c;
        gptr<Local_004eb148_r0_9> r0_9 = gptr<Local_004eb148_r0_9>(gptr<u32>(r5)[r4]);
        r0_9->word_a0 = r0_9->word_9c;
        gptr<Local_004eb148_r0_10> r0_10 = gptr<Local_004eb148_r0_10>(gptr<u32>(r5)[r4]);
        r0_10->word_b0 = r0_10->word_ac;
        gptr<Local_004eb148_r0_11> r0_11 = gptr<Local_004eb148_r0_11>(gptr<u32>(r5)[r4]);
        r0_11->word_50 = r0_11->word_4c;
        gptr<Local_004eb148_r0_12> r0_12 = gptr<Local_004eb148_r0_12>(gptr<u32>(r5)[r4]);
        r0_12->word_60 = r0_12->word_5c;
        gptr<Local_004eb148_r0_13> r0_13 = gptr<Local_004eb148_r0_13>(gptr<u32>(r5)[r4]);
        r0_13->word_c0 = r0_13->word_bc;
        gptr<Local_004eb148_r0_14> r0_14 = gptr<Local_004eb148_r0_14>(gptr<u32>(r5)[r4]);
        r0_14->word_d0 = r0_14->word_cc;
        gptr<Local_004eb148_r0_15> r0_15 = gptr<Local_004eb148_r0_15>(gptr<u32>(r5)[r4]);
        r0_15->word_e0 = r0_15->word_dc;
        r0_16 = gptr<Local_004eb148_r0_16>(gptr<u32>(r5)[r4]);
        r4 += 1u;
        r1_2 = r0_16->word_ec;
        r0_16->word_f0 = r1_2;
        guest::preempt();
    } while (s32(r4) < 3);
    u32 r0_17 = return_constant_0x9c9f00_(r0_16.addr(), r1_2);
    u32 r1 = guest::cpu()->r[1];
    r5 = r0_17 + 0x80u;  // (from the original)
    r4 = r0_17;
    if (r0_17 < r5) {
        do {
            AnimationCursor__rewind(r4, r1);
            r1 = guest::cpu()->r[1];
            r4 += 0x40u;  // (from the original)
            guest::preempt();
        } while (r4 < r5);
    }
}

}  // namespace d_004eb148
GUEST_EXPORT_FRAMED(0x004eb148, d_004eb148::reset_animation_cursors, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004eb254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` (0x108 bytes each) of the render slots at 0x9c9198.
namespace d_004eb254 {

inline constexpr u32 render_slots_address = 0x009c9198u;

u32 render_slot_entry(u32 r0) {
    guest::cpu()->r[1] = render_slots_address;
    return r0 * 0x108u + render_slots_address;  // (from the original)
}

}  // namespace d_004eb254
GUEST_EXPORT(0x004eb254, d_004eb254::render_slot_entry);

// f_004eb3a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the effect slot of the reference's key when it still exists.
namespace d_004eb3a0 {

struct __attribute__((packed)) EffectSlotRef {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(EffectSlotRef, word_4, 0x4);
GUEST_OFFSET(EffectSlotRef, word_8, 0x8);

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32, u32, u32)> read_u32_0x0095009c_;
inline constexpr guest::Function<0x004eb858, u32(u32, u32, u32, u32)> Matrix34__decompose;
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32)> free_slot_with_key;

void EffectSlotRef__start(gptr<EffectSlotRef> effect_slot_ref, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = read_u32_0x0095009c_(effect_slot_ref.addr(), r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = read_u32_0x0095009c_(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r4_1 = effect_slot_ref.addr() + 4u;
        u32 r0_3 = free_slot_with_key(r0_2, effect_slot_ref->word_4, effect_slot_ref->word_8);
        if (r0_3 != 0) {
            frame.release();
            Matrix34__decompose(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
    }
}

}  // namespace d_004eb3a0
GUEST_EXPORT(0x004eb3a0, d_004eb3a0::EffectSlotRef__start);

// f_004eb3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the effect slot of the reference's key (fading out over 10) and forgets the key; true when it did.
namespace d_004eb3e0 {

struct __attribute__((packed)) EffectSlotRef {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(EffectSlotRef, word_4, 0x4);
GUEST_OFFSET(EffectSlotRef, word_8, 0x8);

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32)> read_u32_0x0095009c_;
inline constexpr guest::Function<0x004eb9d4, u32(u32, u32)> EffectSlot__start_fade_out;
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32)> free_slot_with_key;

u32 EffectSlotRef__stop(gptr<EffectSlotRef> effect_slot_ref, u32 r1) {
    u32 r0_1 = read_u32_0x0095009c_(effect_slot_ref.addr(), r1);
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = read_u32_0x0095009c_(r0_1, guest::cpu()->r[1]);
    u32 effect_slot = free_slot_with_key(r0_2, effect_slot_ref->word_4, effect_slot_ref->word_8);
    if (effect_slot == 0) {
        return 0u;
    }
    u32 r0_4 = EffectSlot__start_fade_out(effect_slot, 0xau);  // (from the original)
    if (r0_4 == 0) {
        return r0_4;
    }
    u32 r0_5 = ~0u;
    effect_slot_ref->word_4 = r0_5;
    effect_slot_ref->word_8 = r0_5;
    return 1u;
}

}  // namespace d_004eb3e0
GUEST_EXPORT_FRAMED(0x004eb3e0, d_004eb3e0::EffectSlotRef__stop, 0x4010);  // pushes {r4, lr} first, as the original

// f_004eb438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the effect slot of the reference's key when it still exists.
namespace d_004eb438 {

struct __attribute__((packed)) EffectSlotRef {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(EffectSlotRef, word_4, 0x4);
GUEST_OFFSET(EffectSlotRef, word_8, 0x8);

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32)> read_u32_0x0095009c_;
inline constexpr guest::Function<0x004ee4c0, u32(u32, u32)> Model__set_world_matrix;
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32)> free_slot_with_key;

u32 EffectSlotRef__update(gptr<EffectSlotRef> effect_slot_ref, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = read_u32_0x0095009c_(effect_slot_ref.addr(), r1);
    if (r0_1 != 0) {
        u32 r0_2 = read_u32_0x0095009c_(r0_1, guest::cpu()->r[1]);
        u32 r4_1 = effect_slot_ref.addr() + 4u;
        r0_1 = free_slot_with_key(r0_2, effect_slot_ref->word_4, effect_slot_ref->word_8);
        if (r0_1 != 0) {
            frame.release();
            return Model__set_world_matrix(r0_1, r1);
        }
    }
    return r0_1;
}

}  // namespace d_004eb438
GUEST_EXPORT(0x004eb438, d_004eb438::EffectSlotRef__update);

// f_004eb478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb478 {

inline constexpr u32 vtable_g3d__modelEffect__ModelEffectHandle = 0x009028acu;

void g3d__modelEffect__ModelEffectHandle__ModelEffectHandle(gptr<g3d__modelEffect__ModelEffectHandle> model_effect_handle) {
    u32 r1_1 = ~0u;
    model_effect_handle->word_4 = r1_1;
    model_effect_handle->vtable = vtable_g3d__modelEffect__ModelEffectHandle;
    model_effect_handle->word_8 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_004eb478
GUEST_EXPORT(0x004eb478, d_004eb478::g3d__modelEffect__ModelEffectHandle__ModelEffectHandle);

// f_004eb5b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb5b4 {

inline constexpr u32 vtable_g3d__modelEffect__ModelEffectHandle = 0x009028acu;
inline constexpr guest::Function<0x002b5fc4, u32(u32, u32)> read_u32_0x0095009c_;
inline constexpr guest::Function<0x004eb9d4, u32(u32, u32)> EffectSlot__start_fade_out;
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32)> free_slot_with_key;
inline constexpr guest::Function<0x0074599c, u32(u32)> any_of_six_in_state_1;

u32 g3d__modelEffect__ModelEffectHandle__destructor(gptr<g3d__modelEffect__ModelEffectHandle> model_effect_handle, u32 r1) {
    model_effect_handle->vtable = vtable_g3d__modelEffect__ModelEffectHandle;
    u32 r0_1 = read_u32_0x0095009c_(vtable_g3d__modelEffect__ModelEffectHandle, r1);
    if (r0_1 == 0) {
        return model_effect_handle.addr();
    }
    u32 r0_2 = read_u32_0x0095009c_(r0_1, guest::cpu()->r[1]);
    u32 r0_3 = free_slot_with_key(r0_2, model_effect_handle->word_4, model_effect_handle->word_8);
    if (r0_3 == 0) {
        return model_effect_handle.addr();
    }
    u32 r0_4 = any_of_six_in_state_1(r0_3);
    if (r0_4 == 0) {
        return model_effect_handle.addr();
    }
    u32 r0_5 = read_u32_0x0095009c_(r0_4, guest::cpu()->r[1]);
    if (r0_5 == 0) {
        return model_effect_handle.addr();
    }
    u32 r0_6 = read_u32_0x0095009c_(r0_5, guest::cpu()->r[1]);
    u32 effect_slot = free_slot_with_key(r0_6, model_effect_handle->word_4, model_effect_handle->word_8);
    if (effect_slot == 0) {
        return model_effect_handle.addr();
    }
    u32 r0_8 = EffectSlot__start_fade_out(effect_slot, 0xau);  // (from the original)
    if (r0_8 == 0) {
        return model_effect_handle.addr();
    }
    u32 r0_9 = ~0u;
    model_effect_handle->word_4 = r0_9;
    model_effect_handle->word_8 = r0_9;
    return model_effect_handle.addr();
}

}  // namespace d_004eb5b4
GUEST_EXPORT_FRAMED(0x004eb5b4, d_004eb5b4::g3d__modelEffect__ModelEffectHandle__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_004eb9d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts fading the slot out over `frames` unless it already fades; true when it started.
namespace d_004eb9d4 {

struct __attribute__((packed)) EffectSlot {
    u8 unknown_0[0x2c];  // (not used here)
    u8 byte_2c;
    u8 unknown_2d[0x3];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(EffectSlot, byte_2c, 0x2c);
GUEST_OFFSET(EffectSlot, word_30, 0x30);
GUEST_OFFSET(EffectSlot, word_34, 0x34);


u32 EffectSlot__start_fade_out(gptr<EffectSlot> effect_slot, u32 r1) {
    if (effect_slot->byte_2c != 0) {
        return 0u;
    }
    effect_slot->word_34 = r1;
    effect_slot->byte_2c = 1;
    effect_slot->word_30 = r1;
    return 1u;
}

}  // namespace d_004eb9d4
GUEST_EXPORT(0x004eb9d4, d_004eb9d4::EffectSlot__start_fade_out);

// f_004eb9fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Binds the slot to render slot `index` and sets it up from it.
namespace d_004eb9fc {

struct __attribute__((packed)) EffectSlot {
    u8 unknown_0[0x2d];  // (not used here)
    u8 byte_2d;
};
GUEST_OFFSET(EffectSlot, byte_2d, 0x2d);

inline constexpr guest::Function<0x004eb254, u32(u32, u32, u32, u32)> render_slot_entry;
inline constexpr guest::Function<0x004ebbec, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_004ebbec;

struct __attribute__((packed)) Frame_004eb9fc {
    u32 word_0;
};
GUEST_OFFSET(Frame_004eb9fc, word_0, 0x0);
GUEST_SIZE(Frame_004eb9fc, 0x4);

u32 EffectSlot__bind_render_slot(gptr<EffectSlot> effect_slot, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004eb9fc> frame;  // the original's stack frame
    frame->word_0 = r3;
    effect_slot->byte_2d = u8(r1);
    u32 r0_1 = render_slot_entry(r1, r1, r2, r3);
    frame->word_0 = r3;
    u32 r0_2 = sead__SafeStringBase_char___SafeStringBase_004ebbec(effect_slot.addr(), r0_1, 0u, r2);
    return r0_2;
}

}  // namespace d_004eb9fc
GUEST_EXPORT_FRAMED(0x004eb9fc, d_004eb9fc::EffectSlot__bind_render_slot, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004ec374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ec374 {

inline constexpr u32 vtable_g3d__modelEffect__ModelEffectContainer = 0x009028bcu;
inline constexpr u32 model_effect_container_instance_address = 0x00952ad4u;
inline guest::global<u32, 0x00952ad4> model_effect_container_instance;
inline constexpr guest::Function<0x005673c8, u32(u32)> construct_heap_allocator;

u32 g3d__modelEffect__ModelEffectContainer__ModelEffectContainer(gptr<g3d__modelEffect__ModelEffectContainer> model_effect_container, u32 r1) {
    model_effect_container->vtable = vtable_g3d__modelEffect__ModelEffectContainer;
    model_effect_container->word_4 = r1;
    model_effect_container->word_8 = 0;
    model_effect_container->word_c = 0;
    u32 ea_1 = model_effect_container.addr() + 0x20u;  // (from the original)
    model_effect_container->word_20 = 0;
    construct_heap_allocator(ea_1 + 4u);
    model_effect_container->byte_2c = 0;
    model_effect_container->byte_2d = 0xd;  // (from the original)
    model_effect_container->word_30 = 0;
    model_effect_container->word_34 = 0;
    model_effect_container->word_10 = 0;
    model_effect_container->word_14 = 0;
    model_effect_container->word_18 = 0;
    model_effect_container->word_1c = 0;
    *model_effect_container_instance = *model_effect_container_instance + 1u;
    guest::cpu()->r[1] = model_effect_container_instance_address;
    return ea_1 - 0x20u;  // (from the original)
}

}  // namespace d_004ec374
GUEST_EXPORT_FRAMED(0x004ec374, d_004ec374::g3d__modelEffect__ModelEffectContainer__ModelEffectContainer, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ec7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the model's color (+0xb8 of its resource, four floats) and its derived word.
namespace d_004ec7ec {

struct __attribute__((packed)) Model {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Model, word_c, 0xc);

struct __attribute__((packed)) Object_004ec7ec_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Object_004ec7ec_1, float_0, 0x0);
GUEST_OFFSET(Object_004ec7ec_1, float_4, 0x4);
GUEST_OFFSET(Object_004ec7ec_1, float_8, 0x8);
GUEST_OFFSET(Object_004ec7ec_1, float_c, 0xc);

struct __attribute__((packed)) Local_004ec7ec_r0_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004ec7ec_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_004ec7ec_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_004ec7ec_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_004ec7ec_r0_1, float_c, 0xc);

inline constexpr guest::Function<0x00736914, u32(u32)> vector_derived_word;

u32 Model__set_color(gptr<Model> model, gptr<Object_004ec7ec_1> arg1) {
    u32 r4_1 = model.addr() + 0xcu;  // (from the original)
    float S0_1 = arg1->float_0;
    float S1_1 = arg1->float_4;
    float S2_1 = arg1->float_8;
    float S3_1 = arg1->float_c;
    gptr<Local_004ec7ec_r0_1> r0_1 = gptr<Local_004ec7ec_r0_1>(model->word_c + 0xb8u);  // (from the original)
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S1_1;
    r0_1->float_8 = S2_1;
    r0_1->float_c = S3_1;
    u32 r0_2 = model->word_c + 0xb8u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_3 = vector_derived_word(r0_2);
    u32 r1_1 = model->word_c;
    *gptr<u32>(r1_1 + 0xc8u) = r0_3;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_004ec7ec
GUEST_EXPORT_FRAMED(0x004ec7ec, d_004ec7ec::Model__set_color, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ec820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ec820 {

struct __attribute__((packed)) Local_004ec820_r0_5 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_004ec820_r0_5, float_0, 0x0);
GUEST_OFFSET(Local_004ec820_r0_5, float_4, 0x4);

struct __attribute__((packed)) Local_004ec820_r0_6 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_004ec820_r0_6, float_0, 0x0);
GUEST_OFFSET(Local_004ec820_r0_6, float_4, 0x4);

struct __attribute__((packed)) Local_004ec820_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004ec820_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_004ec820_r3_1, word_4, 0x4);

inline constexpr guest::Function<0x0048d4d4, u32(u32, u32, u32, u32)> nw__gfx__AmbientLight__AmbientLight_0048d4d4;
inline constexpr guest::Function<0x004f000c, u32(u32, u32, u32, u32)> SceneEnv__default_fog;
inline constexpr guest::Function<0x00736914, u32(u32)> vector_derived_word;

struct __attribute__((packed)) Frame_004ec820 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004ec820, byte_0, 0x0);
GUEST_OFFSET(Frame_004ec820, byte_1, 0x1);
GUEST_OFFSET(Frame_004ec820, word_4, 0x4);
GUEST_SIZE(Frame_004ec820, 0x14);

u32 g3d__AmbientLight__virtual_4(u32 ambient_light, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_004ec820> frame;  // the original's stack frame
    if (r1 == 0) {
        u32 r0_1 = SceneEnv__default_fog(ambient_light, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r1 = r0_1;
    }
    gptr<Local_004ec820_r3_1> r3_1 = gptr<Local_004ec820_r3_1>(frame.at(8).addr());
    frame->byte_0 = 1;
    frame->byte_1 = 1;
    r3_1->word_0 = 0;
    r3_1->word_4 = 1;
    frame->word_4 = 0;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    u32 r0_3 = nw__gfx__AmbientLight__AmbientLight_0048d4d4(frame.at(0).addr(), r1, 0u, r3_1.addr());
    *gptr<u32>(ambient_light + 0x10u) = r0_3;  // (from the original)
    *gptr<u32>(ambient_light + 4u) = r0_3;
    u32 r0_4 = *gptr<u32>(r0_3 + 8u);
    float S0_1 = 0.2f;
    float S1_1 = 1.0f;
    *gptr<u32>(ambient_light + 0xcu) = r0_4;  // (from the original)
    *gptr<u8>(r0_4 + 0xb4u) = 1;  // (from the original)
    gptr<Local_004ec820_r0_5> r0_5 = gptr<Local_004ec820_r0_5>(*gptr<u32>(ambient_light + 0xcu) + 0xb8u);  // (from the original)
    r0_5->float_0 = S0_1;
    r0_5->float_4 = S0_1;
    gptr<Local_004ec820_r0_6> r0_6 = gptr<Local_004ec820_r0_6>(r0_5.addr() + 8u);
    r0_6->float_0 = S0_1;
    r0_6->float_4 = S1_1;
    u32 r0_7 = *gptr<u32>(ambient_light + 0xcu) + 0xb8u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_8 = vector_derived_word(r0_7);
    u32 r1_1 = *gptr<u32>(ambient_light + 0xcu);  // (from the original)
    *gptr<u32>(r1_1 + 0xc8u) = r0_8;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_004ec820
GUEST_EXPORT_FRAMED(0x004ec820, d_004ec820::g3d__AmbientLight__virtual_4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004ecbe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ecbe0 {

inline constexpr u32 vtable_g3d__BaseAnim = 0x00902b5cu;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> ssys__ma__HeapAllocator__destructor;

u32 g3d__MaterialAnim__destructor(gptr<g3d__BaseAnim> base_anim) {
    base_anim->vtable = vtable_g3d__BaseAnim;
    u32 r0_1 = base_anim.addr() + 0xcu;  // (from the original)
    ssys__ma__HeapAllocator__destructor(r0_1, vtable_g3d__BaseAnim, guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 - 0xcu;  // (from the original)
}

}  // namespace d_004ecbe0
GUEST_EXPORT_FRAMED(0x004ecbe0, d_004ecbe0::g3d__MaterialAnim__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ed168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the float at +0x124 of the model's resource and refreshes it.
namespace d_004ed168 {

struct __attribute__((packed)) Model {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Model, word_114, 0x114);

inline constexpr guest::Function<0x004a7064, u32(u32, u32)> Fog__set_range;

void Model__set_float_124(gptr<Model> model, float S0) {
    *gptr<u32>(model->word_114 + 0x124u) = std::bit_cast<u32>(S0);  // (from the original)
    u32 r1_1 = model->word_114;
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x120u));  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S0;
    Fog__set_range(model.addr() + 0x114u, r1_1);  // (from the original)
}

}  // namespace d_004ed168
GUEST_EXPORT_FRAMED(0x004ed168, d_004ed168::Model__set_float_124, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ed18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the float at +0x120 of the model's resource and refreshes it.
namespace d_004ed18c {

struct __attribute__((packed)) Model {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Model, word_114, 0x114);

inline constexpr guest::Function<0x004a7064, u32(u32, u32)> Fog__set_range;

void Model__set_float_120(gptr<Model> model, float S0) {
    *gptr<u32>(model->word_114 + 0x120u) = std::bit_cast<u32>(S0);  // (from the original)
    u32 r1_1 = model->word_114;
    float S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x124u));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
    Fog__set_range(model.addr() + 0x114u, r1_1);  // (from the original)
}

}  // namespace d_004ed18c
GUEST_EXPORT_FRAMED(0x004ed18c, d_004ed18c::Model__set_float_120, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ed3dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed3dc {

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> unload_split_part;
inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> Camera__virtual_3;

u32 g3d__DirectionalFragmentLight__virtual_3(u32 directional_fragment_light) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    unload_split_part(directional_fragment_light + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return Camera__virtual_3(directional_fragment_light, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ed3dc
GUEST_EXPORT(0x004ed3dc, d_004ed3dc::g3d__DirectionalFragmentLight__virtual_3);

// f_004ed3f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed3f8 {

inline constexpr guest::Function<0x004ee4b8, u32(u32, u32, u32, u32)> escape__MapFogModel__virtual_2;

u32 g3d__DirectionalFragmentLight__virtual_2() {
    return escape__MapFogModel__virtual_2(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ed3f8
GUEST_EXPORT(0x004ed3f8, d_004ed3f8::g3d__DirectionalFragmentLight__virtual_2);

// f_004ed454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed454 {

inline constexpr u32 vtable_g3d__FragmentLight = 0x00902938u;
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> g3d__ResourceLoader__destructor;
inline constexpr guest::Function<0x004ee514, u32(u32, u32)> set_base_vtable_004ee514;

u32 g3d__FragmentLight__destructor(gptr<g3d__FragmentLight> fragment_light) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    fragment_light->vtable = vtable_g3d__FragmentLight;
    u32 resource_set = fragment_light.addr() + 0xcu;  // (from the original)
    g3d__ResourceLoader__destructor(resource_set, vtable_g3d__FragmentLight, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return set_base_vtable_004ee514(resource_set - 0xcu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_004ed454
GUEST_EXPORT(0x004ed454, d_004ed454::g3d__FragmentLight__destructor);

// f_004eddd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the model and its visible materials to the render queue (opaque or translucent lists), updating the queue's
// node once.
namespace d_004eddd4 {

struct __attribute__((packed)) Object_004eddd4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x164];  // (not used here)
    u32 word_170;
    u32 word_174;
};
GUEST_OFFSET(Object_004eddd4_1, word_8, 0x8);
GUEST_OFFSET(Object_004eddd4_1, word_170, 0x170);
GUEST_OFFSET(Object_004eddd4_1, word_174, 0x174);

struct __attribute__((packed)) Local_004eddd4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004eddd4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004eddd4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_004eddd4_r12_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_004eddd4_r12_2, word_4, 0x4);

struct __attribute__((packed)) Local_004eddd4_r2_2 {
    u8 unknown_0[0xb4];  // (not used here)
    u32 word_b4;
    u32 word_b8;
};
GUEST_OFFSET(Local_004eddd4_r2_2, word_b4, 0xb4);
GUEST_OFFSET(Local_004eddd4_r2_2, word_b8, 0xb8);

struct __attribute__((packed)) Local_004eddd4_r2_5 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Local_004eddd4_r2_5, word_1c, 0x1c);
GUEST_OFFSET(Local_004eddd4_r2_5, byte_24, 0x24);

struct __attribute__((packed)) Local_004eddd4_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004eddd4_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_004eddd4_r5_1, word_4, 0x4);

inline constexpr guest::Function<0x004ee364, u32(u32, u32)> TransformNode__call_node_slot_4;

u32 RenderQueue__add_model(u32 render_queue, gptr<Object_004eddd4_1> arg1) {
    u32 r1 = arg1.addr();
    gptr<Local_004eddd4_r5_1> r5_1 = gptr<Local_004eddd4_r5_1>(0u);
    gptr<Local_004eddd4_r12_2> r12_2 = gptr<Local_004eddd4_r12_2>(0u);
    u32 r4 = render_queue;
    u32 r14 = 0u;
    render_queue = arg1->word_170;
    if (render_queue == arg1->word_174) {
        u32 ea_1 = arg1->word_8 + 0xb8u;  // (from the original)
        u32 r2_1 = *gptr<u32>(ea_1);
        render_queue = r2_1 == 0 ? r14 : ea_1 + r2_1;
    }
    gptr<Local_004eddd4_ea_2> ea_2 = gptr<Local_004eddd4_ea_2>(r1 + 0x170u);  // (from the original)
    u32 r3 = ea_2->word_4;
    if (ea_2->word_0 == r3) {
        gptr<Local_004eddd4_r2_2> r2_2 = gptr<Local_004eddd4_r2_2>(*gptr<u32>(r1 + 8u));
        u32 r12_1 = r2_2->word_b8;
        r3 = (r12_1 == 0 ? r14 : r2_2.addr() + 0xb8u + r12_1) + (r2_2->word_b4 << 2);  // (from the original)
    }
    u32 r2_3 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    if (r2_3 != 0) {
        *gptr<u32>(r2_3) = r1;
    }
    *gptr<u32>(r4 + 0x24u) = *gptr<u32>(r4 + 0x24u) + 4u;  // (from the original)
    if (render_queue != r3) {
        do {
            u32 r2_4 = *gptr<u32>(render_queue);
            gptr<Local_004eddd4_r2_5> r2_5 = gptr<Local_004eddd4_r2_5>(r2_4 == 0 ? r14 : r2_4 + render_queue);
            if (r2_5->byte_24 != 0) {
                if ((*gptr<u32>(*gptr<u32>(gptr<u32>(*gptr<u32>(r1 + 0x164u))[r2_5->word_1c] + 8u) + 0x20u) & 0xffu) == 0) {  // (from the original)
                    r5_1 = gptr<Local_004eddd4_r5_1>(*gptr<u32>(r4 + 0xcu));  // (from the original)
                    r12_2 = gptr<Local_004eddd4_r12_2>(r4 + 8u);
                    if (r5_1.addr() != 0) {
                        goto L_4ede9c;
                    }
                    goto L_4edeb4;
                }
                r5_1 = gptr<Local_004eddd4_r5_1>(*gptr<u32>(r4 + 0x18u));  // (from the original)
                r12_2 = gptr<Local_004eddd4_r12_2>(r4 + 0x14u);  // (from the original)
                if (r5_1.addr() == 0) {
                    goto L_4edeb4;
                }
L_4ede9c:;
                r5_1->word_0 = r1;
                r5_1->word_4 = r2_5.addr();
L_4edeb4:;
                r12_2->word_4 = r12_2->word_4 + 8u;
            }
            render_queue += 4u;
            guest::preempt();
        } while (render_queue != r3);
    }
    if (*gptr<u8>(r4 + 0x3cu) == 0) {  // (from the original)
        TransformNode__call_node_slot_4(r4, 0u);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x3cu) = 1;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_004eddd4
GUEST_EXPORT_FRAMED(0x004eddd4, d_004eddd4::RenderQueue__add_model, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004ee2dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sorts the render queue's entries.
namespace d_004ee2dc {

struct __attribute__((packed)) RenderQueue {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(RenderQueue, word_4, 0x4);

struct __attribute__((packed)) Object_004ee2dc_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004ee2dc_1, word_4, 0x4);

struct __attribute__((packed)) Local_004ee2dc_r0_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_004ee2dc_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_c, 0xc);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_10, 0x10);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_14, 0x14);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_18, 0x18);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_1c, 0x1c);

struct __attribute__((packed)) Local_004ee2dc_r12_2 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004ee2dc_r12_2, word_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r12_2, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r12_2, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r12_2, float_c, 0xc);

struct __attribute__((packed)) Local_004ee2dc_r1_2 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_004ee2dc_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_c, 0xc);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_10, 0x10);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_14, 0x14);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_18, 0x18);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_1c, 0x1c);

struct __attribute__((packed)) Local_004ee2dc_r2_1 {
    u8 unknown_0[0x8c];  // (not used here)
    u32 word_8c;
    float float_90;
    float float_94;
    float float_98;
    float float_9c;
    float float_a0;
    float float_a4;
    float float_a8;
};
GUEST_OFFSET(Local_004ee2dc_r2_1, word_8c, 0x8c);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_90, 0x90);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_94, 0x94);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_98, 0x98);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_9c, 0x9c);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_a0, 0xa0);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_a4, 0xa4);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_a8, 0xa8);

struct __attribute__((packed)) Local_004ee2dc_r2_2 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004ee2dc_r2_2, word_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r2_2, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r2_2, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r2_2, float_c, 0xc);

struct __attribute__((packed)) Local_004ee2dc_r2_4 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
};
GUEST_OFFSET(Local_004ee2dc_r2_4, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_c, 0xc);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_10, 0x10);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_14, 0x14);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_18, 0x18);

struct __attribute__((packed)) Local_004ee2dc_r3_2 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
};
GUEST_OFFSET(Local_004ee2dc_r3_2, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_c, 0xc);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_10, 0x10);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_14, 0x14);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_18, 0x18);

struct __attribute__((packed)) Local_004ee2dc_r3_3 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_004ee2dc_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_c, 0xc);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_10, 0x10);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_14, 0x14);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_18, 0x18);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_1c, 0x1c);


void RenderQueue__sort(gptr<RenderQueue> render_queue, gptr<Object_004ee2dc_1> arg1) {
    gptr<Local_004ee2dc_r2_1> r2_1 = gptr<Local_004ee2dc_r2_1>(arg1->word_4);
    u32 r3_1 = render_queue->word_4;
    float S1_1 = r2_1->float_90;
    float S2_1 = r2_1->float_94;
    float S3_1 = r2_1->float_98;
    float S4_1 = r2_1->float_9c;
    float S5_1 = r2_1->float_a0;
    float S6_1 = r2_1->float_a4;
    float S7_1 = r2_1->float_a8;
    *gptr<u32>(r3_1 + 0x8cu) = r2_1->word_8c;  // (from the original)
    gptr<Local_004ee2dc_r3_2> r3_2 = gptr<Local_004ee2dc_r3_2>(r3_1 + 0x90u);  // (from the original)
    gptr<Local_004ee2dc_r2_2> r2_2 = gptr<Local_004ee2dc_r2_2>(r2_1.addr() + 0xacu);  // (from the original)
    r3_2->float_0 = S1_1;
    r3_2->float_4 = S2_1;
    r3_2->float_8 = S3_1;
    r3_2->float_c = S4_1;
    r3_2->float_10 = S5_1;
    r3_2->float_14 = S6_1;
    r3_2->float_18 = S7_1;
    gptr<Local_004ee2dc_r12_2> r12_2 = gptr<Local_004ee2dc_r12_2>((r3_1 + 0x8cu) + 0x20u);  // (from the original)
    float S1_2 = r2_2->float_4;
    float S2_2 = r2_2->float_8;
    float S3_2 = r2_2->float_c;
    r12_2->word_0 = r2_2->word_0;
    r12_2->float_4 = S1_2;
    r12_2->float_8 = S2_2;
    r12_2->float_c = S3_2;
    u32 r1_1 = arg1->word_4;
    u32 r2_3 = render_queue->word_4;
    gptr<Local_004ee2dc_r3_3> r3_3 = gptr<Local_004ee2dc_r3_3>(r1_1 + 0xbcu);  // (from the original)
    float S1_3 = r3_3->float_4;
    float S2_3 = r3_3->float_8;
    float S3_3 = r3_3->float_c;
    float S4_2 = r3_3->float_10;
    float S5_2 = r3_3->float_14;
    float S6_2 = r3_3->float_18;
    float S7_2 = r3_3->float_1c;
    gptr<Local_004ee2dc_r1_2> r1_2 = gptr<Local_004ee2dc_r1_2>(r1_1 + 0xdcu);  // (from the original)
    gptr<Local_004ee2dc_r0_1> r0_1 = gptr<Local_004ee2dc_r0_1>(r2_3 + 0xdcu);  // (from the original)
    *gptr<u32>(r2_3 + 0xbcu) = r3_3->word_0;  // (from the original)
    gptr<Local_004ee2dc_r2_4> r2_4 = gptr<Local_004ee2dc_r2_4>(r2_3 + 0xc0u);  // (from the original)
    r2_4->float_0 = S1_3;
    r2_4->float_4 = S2_3;
    r2_4->float_8 = S3_3;
    r2_4->float_c = S4_2;
    r2_4->float_10 = S5_2;
    r2_4->float_14 = S6_2;
    r2_4->float_18 = S7_2;
    float S0_1 = r1_2->float_0;
    float S1_4 = r1_2->float_4;
    float S2_4 = r1_2->float_8;
    float S3_4 = r1_2->float_c;
    float S4_3 = r1_2->float_10;
    float S5_3 = r1_2->float_14;
    float S6_3 = r1_2->float_18;
    float S7_3 = r1_2->float_1c;
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S1_4;
    r0_1->float_8 = S2_4;
    r0_1->float_c = S3_4;
    r0_1->float_10 = S4_3;
    r0_1->float_14 = S5_3;
    r0_1->float_18 = S6_3;
    r0_1->float_1c = S7_3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_4;
}

}  // namespace d_004ee2dc
GUEST_EXPORT(0x004ee2dc, d_004ee2dc::RenderQueue__sort);

// f_004ee4b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee4b8 {

inline constexpr guest::Function<0x004f03d0, u32(u32, u32, u32, u32)> TransformNode__update_world;

u32 escape__MapFogModel__virtual_2(gptr<g3d__TransformNode> transform_node) {
    return TransformNode__update_world(transform_node->word_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ee4b8
GUEST_EXPORT(0x004ee4b8, d_004ee4b8::escape__MapFogModel__virtual_2);

// f_004ee534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the split load is ready and not in state 3.
namespace d_004ee534 {

inline constexpr guest::Function<0x0056aab8, u32(u32)> LoadSplit__is_done;
inline constexpr guest::Function<0x0056acfc, u32(u32)> field_equals_e8_u8_0x3_56acfc;

u32 LoadSplit__is_ready_not_3(u32 load_split) {
    u32 r0_2 = LoadSplit__is_done(load_split + 0x1cu);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_4 = field_equals_e8_u8_0x3_56acfc(load_split + 0x1cu);  // (from the original)
    return r0_4 ^ 1u;
}

}  // namespace d_004ee534
GUEST_EXPORT_FRAMED(0x004ee534, d_004ee534::LoadSplit__is_ready_not_3, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ee55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the split load, setting the read and write positions from its word (+0xec) the first time.
namespace d_004ee55c {

struct __attribute__((packed)) LoadSplitWord {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xe0];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(LoadSplitWord, word_4, 0x4);
GUEST_OFFSET(LoadSplitWord, word_8, 0x8);
GUEST_OFFSET(LoadSplitWord, word_ec, 0xec);

inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> LoadSplit__start;

u32 LoadSplitWord__start_b(gptr<LoadSplitWord> load_split_word, u32 r1) {
    u32 r0_2 = LoadSplit__start(load_split_word.addr() + 0x1cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0 || load_split_word->word_4 != 0) {
        guest::cpu()->r[1] = r0_2;
        return r0_2;
    }
    u32 r0_3 = load_split_word->word_ec;
    load_split_word->word_4 = r0_3;
    load_split_word->word_8 = r0_3;
    guest::cpu()->r[1] = r0_2;
    return r0_2;
}

}  // namespace d_004ee55c
GUEST_EXPORT_FRAMED(0x004ee55c, d_004ee55c::LoadSplitWord__start_b, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ee8c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee8c0 {

inline constexpr u32 vtable_g3d__BaseAnim = 0x00902b5cu;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> ssys__ma__HeapAllocator__destructor;

u32 g3d__VisibilityAnim__destructor(gptr<g3d__BaseAnim> base_anim) {
    base_anim->vtable = vtable_g3d__BaseAnim;
    u32 r0_1 = base_anim.addr() + 0xcu;  // (from the original)
    ssys__ma__HeapAllocator__destructor(r0_1, vtable_g3d__BaseAnim, guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 - 0xcu;  // (from the original)
}

}  // namespace d_004ee8c0
GUEST_EXPORT_FRAMED(0x004ee8c0, d_004ee8c0::g3d__VisibilityAnim__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_004eebd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eebd4 {

inline constexpr guest::Function<0x004ee4b8, u32(u32, u32, u32, u32)> escape__MapFogModel__virtual_2;

u32 g3d__HemiSphereLight__virtual_2() {
    return escape__MapFogModel__virtual_2(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004eebd4
GUEST_EXPORT(0x004eebd4, d_004eebd4::g3d__HemiSphereLight__virtual_2);

// f_004eec1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eec1c {

inline constexpr guest::Function<0x004ee514, u32(u32, u32)> set_base_vtable_004ee514;

u32 g3d__HemiSphereLight__destructor() {
    return set_base_vtable_004ee514(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_004eec1c
GUEST_EXPORT(0x004eec1c, d_004eec1c::g3d__HemiSphereLight__destructor);

// f_004eee9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the named entry in the model's dictionary and binds it.
namespace d_004eee9c {

struct __attribute__((packed)) Model {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Model, word_8, 0x8);

struct __attribute__((packed)) Local_004eee9c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_004eee9c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004eee9c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004eee9c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004eee9c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_004eee9c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_004eee9c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_004eee9c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_004eee9c_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_004eee9c_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_004eee9c_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_004eee9c_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_004eee9c_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_004eee9c_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_004eee9c_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_004eee9c_ea_5, word_14, 0x14);
GUEST_OFFSET(Local_004eee9c_ea_5, word_18, 0x18);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32)> string_length;
inline constexpr guest::Function<0x004ed570, u32(u32, u32, u32, u32)> Model__has_skeleton;
inline constexpr guest::Function<0x004eef60, u32(u32, u32, u32, u32)> Model__bind_resource;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> ResDic__find;

struct __attribute__((packed)) Frame_004eee9c {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004eee9c, word_0, 0x0);
GUEST_SIZE(Frame_004eee9c, 0x20);

u32 Model__bind_by_name(gptr<Model> model, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004eee9c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_2 = 0;
    gptr<Local_004eee9c_ea_1> ea_1 = gptr<Local_004eee9c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    u32 r0_2 = Model__has_skeleton(model->word_8, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r0_3 = *gptr<u32>(r0_2 + 8u);
    if (r0_3 != 0) {
        r2_1 = 0x40000092u;  // (from the original)
        if ((r2_1 & ~*gptr<u32>(r0_3)) != 0) {
            r0_3 = 0u;
        }
    }
    u32 ea_2 = r0_3 + 0xe0u;  // (from the original)
    u32 r1_1 = *gptr<u32>(ea_2);
    u32 ea_3 = (r1_1 == 0 ? 0u : ea_2 + r1_1) + 0x1cu;  // (from the original)
    u32 r1_2 = *gptr<u32>(ea_3);
    u32 r0_4 = r1_2 == 0 ? 0u : ea_3 + r1_2;
    frame->word_0 = r0_4;
    if (r0_4 != 0 && r2 != 0) {
        u32 length_2 = string_length(r2, r1_2, r2_1);
        u32 entry_3 = ResDic__find(frame.at(0).addr(), r2, length_2);
        if (entry_3 != 0) {
            u32 ea_4 = entry_3 + 0xcu;  // (from the original)
            u32 r1_3 = *gptr<u32>(ea_4);
            r2_2 = r1_3 == 0 ? 0u : r1_3 + ea_4;
        } else {
            r2_2 = 0u;
        }
    } else {
        r2_2 = 0u;
    }
    gptr<Local_004eee9c_ea_5> ea_5 = gptr<Local_004eee9c_ea_5>(frame.at(4).addr());
    u32 r4_1 = ea_5->word_0;
    u32 r5_1 = ea_5->word_4;
    u32 r6_2 = ea_5->word_8;
    u32 r7_1 = ea_5->word_c;
    u32 r8_1 = ea_5->word_10;
    u32 r9_1 = ea_5->word_14;
    r14 = ea_5->word_18;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    frame.release();
    return Model__bind_resource(model.addr(), r1, r2_2, 0u);
}

}  // namespace d_004eee9c
GUEST_EXPORT(0x004eee9c, d_004eee9c::Model__bind_by_name);

// f_004ef50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ef50c {

inline constexpr u32 vtable_g3d__GroupSkeletalAnim = 0x009029e0u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00317dec, u32(u32)> ssys__ma__HeapAllocator__destructor;

u32 g3d__GroupSkeletalAnim__destructor(gptr<g3d__GroupSkeletalAnim> group_skeletal_anim) {
    group_skeletal_anim->vtable = vtable_g3d__GroupSkeletalAnim;
    destroy_array_elements(group_skeletal_anim.addr() + 0x14u, 0x4efa0cu, 0x18u, 4u);  // (from the original)
    ssys__ma__HeapAllocator__destructor(group_skeletal_anim.addr() + 0xcu);  // (from the original)
    return group_skeletal_anim.addr();
}

}  // namespace d_004ef50c
GUEST_EXPORT_FRAMED(0x004ef50c, d_004ef50c::g3d__GroupSkeletalAnim__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ef9a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ef9a4 {

inline constexpr guest::Function<0x004ef77c, u32(u32, u32, u32, u32)> Model__play_animation;

u32 g3d__MorphSkeletalAnim__virtual_4() {
    float S0_1 = 0.0f;
    guest::cpu()->s[0] = S0_1;
    return Model__play_animation(guest::cpu()->r[0], guest::cpu()->r[1], 0u, guest::cpu()->r[3]);
}

}  // namespace d_004ef9a4
GUEST_EXPORT(0x004ef9a4, d_004ef9a4::g3d__MorphSkeletalAnim__virtual_4);

// f_004efa0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004efa0c {

inline constexpr u32 vtable_g3d__BaseAnim = 0x00902b5cu;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> ssys__ma__HeapAllocator__destructor;

u32 g3d__MorphSkeletalAnim__destructor(gptr<g3d__BaseAnim> base_anim) {
    base_anim->vtable = vtable_g3d__BaseAnim;
    u32 r0_1 = base_anim.addr() + 0xcu;  // (from the original)
    ssys__ma__HeapAllocator__destructor(r0_1, vtable_g3d__BaseAnim, guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 - 0xcu;  // (from the original)
}

}  // namespace d_004efa0c
GUEST_EXPORT_FRAMED(0x004efa0c, d_004efa0c::g3d__MorphSkeletalAnim__destructor, 0x4010);  // pushes {r4, lr} first, as the original
