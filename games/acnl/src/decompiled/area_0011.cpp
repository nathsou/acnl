// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00110cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the byte at 0x95c219.
namespace d_00110cdc {

inline constexpr u32 villager_part_flags_address = 0x0095c218u;
inline guest::global<u8, 0x0095c219> villager_part_loaded;

void clear_villager_part_loaded() {
    *villager_part_loaded = 0;
    guest::cpu()->r[1] = villager_part_flags_address;
}

}  // namespace d_00110cdc
GUEST_EXPORT(0x00110cdd, d_00110cdc::clear_villager_part_loaded);

// f_00111050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When no blocking event runs and an hour has passed since the last check: clears the requests of villagers no longer
// in state 0x21, then stores the updated set.
namespace d_00111050 {

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_00111050_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00111050_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_00111050_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_00111050_r0_4, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> words_not_less;
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> is_in_registered_list;
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> villager_runtime_entry_at;
inline constexpr guest::Function<0x00308d44, u32(u32)> thunk_0051dcbc;
inline constexpr guest::Function<0x00308d48, u32(u32, u32, u32)> TimeStamp__add_hours_veneer;
inline constexpr guest::Function<0x0030feb4, u32(u32)> VillagerTable__reset_states;
inline constexpr guest::Function<0x0030ff25, u32(u32, u32)> Villager__days_since;
inline constexpr guest::Function<0x003100dd, u32(u32, u32, u32, u32)> Villager__pick_random_style;
inline constexpr guest::Function<0x0031014c, u32(u32)> store_reference_value;

struct __attribute__((packed)) UpdateVillagerMovingRequestsFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(UpdateVillagerMovingRequestsFrame, word_0, 0x0);
GUEST_OFFSET(UpdateVillagerMovingRequestsFrame, word_4, 0x4);
GUEST_OFFSET(UpdateVillagerMovingRequestsFrame, word_8, 0x8);
GUEST_OFFSET(UpdateVillagerMovingRequestsFrame, word_c, 0xc);
GUEST_OFFSET(UpdateVillagerMovingRequestsFrame, word_10, 0x10);
GUEST_OFFSET(UpdateVillagerMovingRequestsFrame, word_14, 0x14);
GUEST_OFFSET(UpdateVillagerMovingRequestsFrame, word_18, 0x18);
GUEST_OFFSET(UpdateVillagerMovingRequestsFrame, word_1c, 0x1c);
GUEST_SIZE(UpdateVillagerMovingRequestsFrame, 0x24);

void update_villager_moving_requests(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<UpdateVillagerMovingRequestsFrame> frame;  // the original's stack frame
    u32 r6 = r0;
    if (is_in_registered_list(2u, r1, r2, r3) == 0) {
        u32 r0_2 = is_in_registered_list(0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 == 0) {
            gptr<Now> now_2 = gptr<Now>(game_time_now(r0_2));
            gptr<Local_00111050_r0_4> r0_4 = gptr<Local_00111050_r0_4>(thunk_0051dcbc(now_2.addr()));
            u32 r1_3 = r0_4->word_0;
            u32 r2_4 = r0_4->word_4;
            u32 r0_5 = r0_4->word_8;
            frame->word_14 = r1_3;
            frame->word_1c = r0_5;
            frame->word_18 = r2_4;
            TimeStamp__add_hours_veneer(frame.at(0x14).addr(), 1u, r2_4);
            u32 r1_4 = frame->word_1c;
            frame->word_0 = frame->word_18;
            frame->word_4 = r1_4;
            u32 r0_7 = now_2->word_0;
            u32 r1_5 = now_2->word_4;
            u32 r2_5 = now_2->word_8;
            u32 r4_1 = now_2.addr() + 0xc;
            if (words_not_less(r0_7, r1_5, r2_5, frame->word_14) != 0) {
                VillagerTable__reset_states(0u);
                Villager__days_since(frame.at(8).addr(), r6);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 i = 0u;
                u32 r7 = 1u;
                do {
                    if (frame->word_8 > i) {
                        u32 r5_1 = lsl_r(r7, i & 0xff);
                        if ((frame->word_c & r5_1) != 0) {
                            u32 r0_10 = villager_runtime_entry_at(i, i, r2, r3);
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if ((r0_10 == 0 || *gptr<u8>(r0_10 + 0x24u) != 0x21u) && frame->word_8 > i && (frame->word_c & r5_1) != 0) {
                                frame->word_c = frame->word_c & ~r5_1;
                                frame->word_10 = frame->word_10 - 1u;
                            }
                        }
                    }
                    i += 1u;
                    guest::preempt();
                } while (s32(i) < 0xa);
                store_reference_value(Villager__pick_random_style(r6, frame.at(8).addr(), r2, r3));
            }
        }
    }
}

}  // namespace d_00111050
GUEST_EXPORT_FRAMED(0x00111051, d_00111050::update_villager_moving_requests, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_0011188c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates each villager's day (parts, moving out) for the town's records.
namespace d_0011188c {

struct __attribute__((packed)) Villagers {
    u8 unknown_0[0x19763];  // (not used here)
    u8 byte_19763;
};
GUEST_OFFSET(Villagers, byte_19763, 0x19763);

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00310cf9, u32(u32, u32, u32)> VillagerPart__update_day;
inline constexpr guest::Function<0x0031108d, u32(u32, u32, u32, u32)> Villager__move_out;
inline constexpr guest::Function<0x0031118c, u32(u32, u32, u32, u32)> flags_2510_has_600;

struct __attribute__((packed)) VillagersUpdateDayFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagersUpdateDayFrame, word_0, 0x0);
GUEST_SIZE(VillagersUpdateDayFrame, 0x4);

u32 Villagers__update_day(gptr<Villagers> villagers, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagersUpdateDayFrame> frame;  // the original's stack frame
    u32 r0 = villagers.addr();
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 r0_15 = 0;
    frame->word_0 = r3;
    u32 villager = r0;
    u32 r1 = 0u;
    frame->word_0 = r1;
    u32 r7 = villager + 0x19760u;
    u32 r0_1 = s8(villagers->byte_19763);
    if (s32(r0_1) >= 0) {
        if (r0_1 >= 0xau) {
            r4_1 = 0u;
        } else {
            r1 = 0x2518u;
            r4_1 = r0_1 * r1 + villager;
            if (r4_1 == 0) {
                goto L_1118f2;
            }
            u32 r0_2 = is_record_valid(r4_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 == 0) {
                goto L_1118f2;
            }
        }
        if (r4_1 != 0) {
            u32 r0_3 = *gptr<u32>(r4_1 + (0x25u << 8) + 0x10u) >> 9u & 3u;
            if (r0_3 == 0) {
                u32 data_base = get_data_base(r0_3, r1, r2, r3);
                u32 records = slot_records_of(data_base);
                VillagerPart__update_day(records + 0x1976cu, r4_1, 0x1976cu);
            }
            u32 r1_2 = *gptr<s8>(r7 + 3u);
            Villager__move_out(villager, r1_2, r4_1, 1u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            frame->word_0 = 1;
        }
L_1118f2:;
        *gptr<u8>(r7 + 3u) = u8(~0u);
    }
    u32 i = 0u;
    u32 r6 = villager;
    do {
        u32 is_villager = is_villager_record(r6, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (is_villager != 0) {
            u32 r0_8 = *gptr<u32>(r6 + (0x25u << 8) + 0x10u);
            r1 = r0_8 << 0x1f;
            if (r1 != 0) {
                if ((r0_8 & 0x2u) == 0) {
                    goto L_11192e;
                }
            }
            u32 r0_9 = flags_2510_has_600(r6, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_9 != 0) {
                goto L_11192e;
            }
        }
        i += 1u;
        r6 += 0x2518u;
        guest::preempt();
    } while (s32(i) < 0xa);
    i = ~0u;
L_11192e:;
    if (i >= 0xau) {
        r6_1 = 0u;
    } else {
        r1 = 0x2518u;
        r6_1 = i * r1 + villager;
        if (r6_1 == 0) {
            r0_15 = frame->word_0;
            guest::cpu()->r[1] = r1;
            return r0_15;
        }
        u32 r0_10 = is_record_valid(r6_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 == 0) {
            return frame->word_0;
        }
    }
    if (r6_1 != 0) {
        u32 r0_11 = *gptr<u32>(r6_1 + (0x25u << 8) + 0x10u) >> 9u & 3u;
        if (r0_11 != 0) {
            r0_11 = 1u;
            *gptr<u8>(r7) = u8(r0_11);
            *gptr<u8>(r7 + 1u) = 0;
        }
        r1 = *gptr<s8>(r7);
        if (s32(r1) >= 1) {
            if (r0_11 == 0) {
                u32 data_base_2 = get_data_base(r0_11, r1, r2, r3);
                u32 records_2 = slot_records_of(data_base_2);
                VillagerPart__update_day(records_2 + 0x1976cu, r6_1, 0x1976cu);
            }
            *gptr<u8>(r7 + 2u) = u8(~0u);
            Villager__move_out(villager, i, r6_1, 0u);
            return 1u;
        }
    }
    r0_15 = frame->word_0;
    guest::cpu()->r[1] = r1;
    return r0_15;
}

}  // namespace d_0011188c
GUEST_EXPORT_FRAMED(0x0011188d, d_0011188c::Villagers__update_day, 0x40f0);  // pushes {i, villager, r6, r7, lr} first, as the original

// f_00111d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the villager part of the save data: ten villagers, the town's records, the two boards of 16 entries and the
// rest.
namespace d_00111d48 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00308355, u32(u32)> init_object_with_sub_objects;
inline constexpr guest::Function<0x00309444, u32(u32, u32)> thunk_005bcb1c;
inline constexpr guest::Function<0x00309448, u32(u32, u32, u32)> thunk_005bbd8c;
inline constexpr guest::Function<0x0030944c, u32(u32, u32, u32)> thunk_005bb2fc;
inline constexpr guest::Function<0x00309450, u32(u32, u32, u32)> thunk_005bc500;
inline constexpr guest::Function<0x0030c599, u32(u32)> clear_16_entries_of_12_bytes;
inline constexpr guest::Function<0x00310a31, u32(u32, u32)> TownData__clear_villager_part;
inline constexpr guest::Function<0x003113b8, u32(u32, u32, u32)> ScheduledRecord__ScheduledRecord;
inline constexpr guest::Function<0x0031143c, u32(u32)> do_nothing_0031143c;

u32 VillagerPart__construct(u32 villager_part) {
    u32 scheduled_record = thunk_005bcb1c(for_each_element(villager_part, 0x113d15u, 0x2518u, 0xau) + 0x172f4u, 0x172f4u) + 0xacu;
    ScheduledRecord__ScheduledRecord(scheduled_record, 0x173a0u, 0xfffe8d0cu);
    u32 r0_5 = scheduled_record + 0x26u;
    ScheduledRecord__ScheduledRecord(r0_5, 0x173c6u, 0xfffe8c60u);
    u32 r0_6 = r0_5 + 0x26u;
    thunk_005bbd8c(r0_6, 0x173ecu, 0xfffe8c3au);
    u32 r0_9 = thunk_005bb2fc(r0_6 + 0x5cu, 0x17448u, 0xfffe8c14u) + 0x202u;
    thunk_005bc500(r0_9, 0x1764au, 0xfffe8bb8u);
    u32 r0_12 = for_each_element(r0_9 + 0x5cu, 0x113fe5u, 0xf2u, 0x10u) + 0xf36u;
    do_nothing_0031143c(r0_12);
    u32 r6_1 = 0xfffff09au;
    u32 r4_1 = r0_12 + r6_1;
    init_object_with_sub_objects(r4_1);
    u32 r0_15 = for_each_element(r4_1 + 0xfacu, 0x113fe5u, 0xf2u, 0x10u) + 0xf36u;
    do_nothing_0031143c(r0_15);
    u32 r4_2 = r0_15 + r6_1;
    init_object_with_sub_objects(r4_2);
    u32 entries = for_each_element(r4_2 + 0xf7eu, 0x1141d1u, 0xcu, 0x10u);
    clear_16_entries_of_12_bytes(entries);
    u32 r0_19 = for_each_element(entries + 0xc0u, 0x1141d1u, 0xcu, 0x10u);
    clear_16_entries_of_12_bytes(r0_19);
    u32 r0_22 = for_each_element(r0_19 + 0xc2u, 0x612d0cu, 2u, 4u);
    u32 r1_7 = 0xfffe690eu;
    u32 town_data = r0_22 + r1_7;
    TownData__clear_villager_part(town_data, r1_7);
    return town_data;
}

}  // namespace d_00111d48
GUEST_EXPORT_FRAMED(0x00111d49, d_00111d48::VillagerPart__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00111f4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Villager `id`'s bit (below 0x18f) in a bit array; 0 without one.
namespace d_00111f4c {


u32 villager_id_bit(u32 id, u32 bits) {
    if (bits == 0 || id >= 0x18fu) {
        guest::cpu()->r[1] = bits;
        return 0u;
    }
    u32 r2_1 = id >> 3;
    if (r2_1 >= 0x32u) {
        guest::cpu()->r[1] = bits;
        return 0u;
    }
    u32 r1_1 = lsr_r(u32(*gptr<u8>(bits + r2_1)), (id & 7u) & 0xff);
    guest::cpu()->r[1] = r1_1;
    return r1_1 & 1u;
}

}  // namespace d_00111f4c
GUEST_EXPORT(0x00111f4d, d_00111f4c::villager_id_bit);

// f_00111f94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the event of building 0x4e is kind 0x26, the first player's flag is set, and the player's stats
// have not yet updated today (offline only).
namespace d_00111f94 {

inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32, u32)> game_time_now;
inline constexpr guest::Function<0x002fe8a8, u32(u32)> player_of_slot_index;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x00308e80, u32(u32)> current_event_kind;
inline constexpr guest::Function<0x003094f0, u32(u32)> find_building_cell;
inline constexpr guest::Function<0x003095b4, u32(u32, u32, u32)> PlayerStats__update_day;

u32 building_event_26_day_check(u32 r0, u32 r1, u32 r2) {
    if (current_net_signed_value(r0, r1, r2, guest::cpu()->r[3]) != 0) {
        return 0u;
    }
    u32 building_cell = find_building_cell(0x4eu);
    if (building_cell == 0) {
        return building_cell;
    }
    u32 event_kind = current_event_kind(building_cell);
    if (event_kind != 0x26u) {
        return 0u;
    }
    u32 player = player_of_slot_index(0u);
    if (player == 0) {
        return 0u;
    }
    u32 r1_5 = 0x57u << 8;
    u32 r0_5 = u32(*gptr<u8>(player + r1_5 + 1u)) >> 1 << 0x1f;
    if (r0_5 == 0) {
        guest::cpu()->r[1] = r1_5;
        return 0u;
    }
    u32 now_2 = game_time_now(r0_5, r1_5);
    u32 save_data = get_save_data(now_2);
    if (PlayerStats__update_day(save_data + 0x70ee0u, now_2, 0x70e60u) == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_00111f94
GUEST_EXPORT_FRAMED(0x00111f95, d_00111f94::building_event_26_day_check, 0x4010);  // pushes {r4, lr} first, as the original

// f_00111ff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the record at 0x62250 is ready, from today, and of kind 1 to 4.
namespace d_00111ff0 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x003095a4, u32(u32, u32)> record_is_ready_veneer;
inline constexpr guest::Function<0x003095a8, u32(u32)> record_check_same_day_veneer;

u32 check_111ff0(u32 r0, u32 r1) {
    u32 save_data = get_save_data(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = save_data + 0x62250u;
    if (r4_1 == 0) {
        guest::cpu()->r[1] = 0x621d0u;
        return 0u;
    }
    if (record_is_ready_veneer(r4_1, 0x621d0u) == 0) {
        return 0u;
    }
    if (record_check_same_day_veneer(r4_1) == 0) {
        return 0u;
    }
    u32 r0_4 = *gptr<u8>(r4_1 + 0x14u);
    return r0_4 == 1u || r0_4 == 2u || r0_4 == 3u || r0_4 == 4u;
}

}  // namespace d_00111ff0
GUEST_EXPORT_FRAMED(0x00111ff1, d_00111ff0::check_111ff0, 0x4010);  // pushes {r4, lr} first, as the original

// f_001120f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether, offline during event kind 0x26 with the first player's two flags set, the shops are open (for
// the player and in general) and the record at 0x6ae54 is not kind 0x2002.
namespace d_001120f0 {

struct __attribute__((packed)) Local_001120f0_r0_4 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_001120f0_r0_4, byte_1, 0x1);
GUEST_OFFSET(Local_001120f0_r0_4, byte_4, 0x4);

inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x00308e80, u32(u32, u32)> current_event_kind;
inline constexpr guest::Function<0x00309384, u32(u32, u32)> shops_are_open_for_player;
inline constexpr guest::Function<0x0030946c, u32(u32, u32)> shops_are_open;

u32 building_event_26_shops_check(u32 r0, u32 r1) {
    u32 r0_1 = current_net_signed_value(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 event_kind = current_event_kind(r0_1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (event_kind == 0x26u) {
            u32 player = player_of_slot_index(0u, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (player != 0) {
                gptr<Local_001120f0_r0_4> r0_4 = gptr<Local_001120f0_r0_4>(player + (0x57u << 8));
                r1_1 = u32(r0_4->byte_1) >> 1 << 0x1f;
                if (r1_1 != 0) {
                    u32 r0_5 = u32(r0_4->byte_4) >> 1 << 0x1f;
                    if (r0_5 != 0) {
                        u32 save_data = get_save_data(r0_5);
                        r1_1 = 0x4650u;
                        u32 r4_1 = save_data + 0x62250u + r1_1;
                        if (r4_1 != 0) {
                            u32 r0_7 = shops_are_open_for_player(r4_1, r1_1);
                            r1_1 = guest::cpu()->r[1];
                            if (r0_7 != 0) {
                                u32 r0_8 = shops_are_open(r4_1, r1_1);
                                r1_1 = guest::cpu()->r[1];
                                if (r0_8 != 0) {
                                    u32 save_data_2 = get_save_data(r0_8);
                                    r1_1 = 0x8c04u;
                                    u32 r0_10 = save_data_2 + 0x62250u + r1_1;
                                    if (r0_10 != 0) {
                                        r1_1 = 0x2002u;
                                        if (*gptr<u16>(r0_10 + 0xeu) != r1_1) {
                                            guest::cpu()->r[1] = r1_1;
                                            return 1u;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001120f0
GUEST_EXPORT_FRAMED(0x001120f1, d_001120f0::building_event_26_shops_check, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00112298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the town event at 0x666e4 is ready and from today, of kind 4, not blocked, and its daily check
// (0xb) has not run today.
namespace d_00112298 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x0030984c, u32(u32, u32, u32)> town_event_ready_for_player_veneer;
inline constexpr guest::Function<0x00309850, u32(u32)> town_event_check_same_day_veneer;
inline constexpr guest::Function<0x00309854, u32(u32)> veneer_69f26c;
inline constexpr guest::Function<0x00309bd4, u32(u32, u32)> DailyCheck__allows;

u32 town_event_kind_4_due(u32 r0, u32 r1, u32 r2) {
    u32 save_data = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    u32 r4_1 = save_data + 0x666e4u;
    if (r4_1 == 0) {
        guest::cpu()->r[1] = 0x4494u;
        return 0u;
    }
    if (town_event_ready_for_player_veneer(r4_1, 0x4494u, 0x621d0u) == 0) {
        return 0u;
    }
    if (town_event_check_same_day_veneer(r4_1) == 0) {
        return 0u;
    }
    u32 r0_4 = *gptr<u8>(r4_1 + 0x10u);
    if (r0_4 != 4u) {
        return 0u;
    }
    u32 r0_5 = veneer_69f26c(r0_4);
    if (r0_5 != 0) {
        return 0u;
    }
    u32 now_2 = game_time_now(r0_5);
    if (DailyCheck__allows(0xbu, now_2) == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_00112298
GUEST_EXPORT_FRAMED(0x00112299, d_00112298::town_event_kind_4_due, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011253c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the villager part (0x22bcc bytes) and the four villagers kept at +0x1976c (two sets of two).
namespace d_0011253c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> Villager__clear;
inline constexpr guest::Function<0x00310a31, u32(u32)> TownData__clear_villager_part;

struct __attribute__((packed)) VillagerPartClearFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerPartClearFrame, word_0, 0x0);
GUEST_SIZE(VillagerPartClearFrame, 0x4);

void VillagerPart__clear(u32 villager_part, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<VillagerPartClearFrame> frame;  // the original's stack frame
    u32 r1 = 0;
    frame->word_0 = r3;
    clear_aligned(villager_part, 0x22bccu, guest::cpu()->r[2], r3);
    TownData__clear_villager_part(villager_part + 4u);
    r3 = guest::cpu()->r[3];
    u32 r7 = villager_part + 0x1976cu;
    u32 j = 0u;
    do {
        r1 = 0x4a30u;
        u32 i = 0u;
        u32 r6 = j * r1 + r7;
        do {
            Villager__clear(r6 + 0x2518u * i, r1, guest::cpu()->r[2], r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (s32(i) < 2);
        j += 1u;
        guest::preempt();
    } while (s32(j) < 2);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0011253c
GUEST_EXPORT_FRAMED(0x0011253d, d_0011253c::VillagerPart__clear, 0x40f0);  // pushes {i, j, r6, r7, lr} first, as the original

// f_00112584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the villager part and its four extra villagers, then clears it all.
namespace d_00112584 {

inline constexpr guest::Function<0x00111d49, u32(u32, u32, u32, u32)> VillagerPart__construct;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> Villager__clear;
inline constexpr guest::Function<0x00310a31, u32(u32)> TownData__clear_villager_part;

struct __attribute__((packed)) VillagerPartConstructAndClearFrame {
    u32 villager_part;
};
GUEST_OFFSET(VillagerPartConstructAndClearFrame, villager_part, 0x0);
GUEST_SIZE(VillagerPartConstructAndClearFrame, 0x4);

u32 VillagerPart__construct_and_clear(u32 villager_part, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerPartConstructAndClearFrame> frame;  // the original's stack frame
    u32 i = 0;
    u32 r6 = 0;
    frame->villager_part = villager_part;
    u32 r0_4 = for_each_element(VillagerPart__construct(villager_part + 4u, r1, r2, r3) + 0x19768u, 0x113d15u, 0x2518u, 4u);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 j = 0u;
    u32 r7 = r0_4;
    do {
        r1 = 0x4a30u;
        i = 0u;
        r6 = j * r1 + r7;
        do {
            Villager__clear(r6 + 0x2518u * i, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (s32(i) < 2);
        j += 1u;
        guest::preempt();
    } while (s32(j) < 2);
    u32 r0_6 = r7 + 0xfffe6894u;
    frame->villager_part = r0_6;
    clear_aligned(r0_6, 0x22bccu, r2, r3);
    TownData__clear_villager_part(r0_6 + 4u);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0_6 + 0x1976cu;
    j = 0u;
    do {
        r1 = 0x4a30u;
        i = 0u;
        r6 = j * r1 + r7;
        do {
            Villager__clear(r6 + 0x2518u * i, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (s32(i) < 2);
        j += 1u;
        guest::preempt();
    } while (s32(j) < 2);
    u32 r0_9 = frame->villager_part;
    guest::cpu()->r[1] = r1;
    return r0_9;
}

}  // namespace d_00112584
GUEST_EXPORT_FRAMED(0x00112585, d_00112584::VillagerPart__construct_and_clear, 0x40f0);  // pushes {i, j, r6, r7, lr} first, as the original

// f_00112714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to SaveVillager__remove_item_8d6.
namespace d_00112714 {

inline constexpr guest::Function<0x0011271d, u32(u32, u32, u32, u32)> SaveVillager__remove_item_8d6;

u32 SaveVillager__remove_item_8d6_veneer() {
    return SaveVillager__remove_item_8d6(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00112714
GUEST_EXPORT(0x00112714, d_00112714::SaveVillager__remove_item_8d6_veneer);

// f_0011279e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 3 of the object's byte 0x1f, or 0 for null.
namespace d_0011279e {

struct __attribute__((packed)) Flag1fBit3IfPresentArg0 {
    u8 unknown_0[0x1f];  // (not used here)
    u8 byte_1f;
};
GUEST_OFFSET(Flag1fBit3IfPresentArg0, byte_1f, 0x1f);


u32 flag_1f_bit_3_if_present(gptr<Flag1fBit3IfPresentArg0> arg0) {
    if (arg0.addr() == 0) {
        return arg0.addr();
    }
    return u32(arg0->byte_1f) >> 3u & 1u;
}

}  // namespace d_0011279e
GUEST_EXPORT(0x0011279f, d_0011279e::flag_1f_bit_3_if_present);

// f_001127ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 001127b4.
namespace d_001127ac {

inline constexpr guest::Function<0x001127b5, u32(u32, u32, u32, u32)> Villager__refresh_memory;

void call_001127b4() {
    Villager__refresh_memory(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001127ac
GUEST_EXPORT(0x001127ac, d_001127ac::call_001127b4);

// f_00112d34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the villager's item `slot` (below 16: 0-9 in the main list, 10 and 11 the two special slots, 12-15 compacted);
// when `notify`, sends request 4 with the villager's index and slot.
namespace d_00112d34 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32)> index_of_same_villager;
inline constexpr guest::Function<0x003120a9, u32(u32, u32, u32, u32)> Villager__set_item_and_compact;
inline constexpr guest::Function<0x00312178, u32(u32, u32, u32, u32)> Villager__set_item_24ea;
inline constexpr guest::Function<0x00312184, u32(u32, u32, u32, u32)> Villager__set_item_24e6;
inline constexpr guest::Function<0x00312191, u32(u32, u32, u32, u32)> Villager__choose_gift_item;
inline constexpr guest::Function<0x0031224c, u32(u32, u32, u32, u32)> set_numbered_pair;
inline constexpr guest::Function<0x00312274, u32(u32, u32)> send_net_message_11;

struct __attribute__((packed)) VillagerSetItemSlotFrame {
    u32 notify;
};
GUEST_OFFSET(VillagerSetItemSlotFrame, notify, 0x0);
GUEST_SIZE(VillagerSetItemSlotFrame, 0x4);

u32 Villager__set_item_slot(u32 villager, u32 slot, u32 item, u32 notify) {
    guest::StackFrameOf<VillagerSetItemSlotFrame> frame;  // the original's stack frame
    frame->notify = notify;
    u32 r5_1 = villager;
    u32 r4_1 = slot;
    if (slot < 0x10u) {
        if (s32(r4_1) >= 0xc) {
            villager = Villager__set_item_and_compact(villager, r4_1 - 0xcu, item, notify);
            slot = guest::cpu()->r[1];
        } else {
            if (s32(r4_1) >= 0xa) {
                if (r4_1 == 0xau) {
                    villager = Villager__set_item_24e6(villager, item, item, notify);
                    slot = guest::cpu()->r[1];
                } else {
                    villager = Villager__set_item_24ea(villager, item, item, notify);
                    slot = guest::cpu()->r[1];
                }
            } else {
                villager = Villager__choose_gift_item(villager, slot, item, notify);
                slot = guest::cpu()->r[1];
            }
        }
        if (notify != 0) {
            u32 save_data = get_save_data(villager, slot);
            u32 r0_2 = index_of_same_villager(r5_1, save_data + 0x292a4u, 0xau);
            set_numbered_pair(frame.at(0).addr(), r0_2, item, r4_1);
            villager = send_net_message_11(4u, frame.at(0).addr());
            slot = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = slot;
    return villager;
}

}  // namespace d_00112d34
GUEST_EXPORT_FRAMED(0x00112d35, d_00112d34::Villager__set_item_slot, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00112d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the villager's letter (+0x2210) and its four kept letters (from +0x1810), then the rest of what it remembers
// of them.
namespace d_00112d9c {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> Letter__clear;
inline constexpr guest::Function<0x003122bd, u32(u32, u32, u32, u32)> Villager__reset_catchphrase;
inline constexpr guest::Function<0x0031237d, u32(u32)> Villager__reset_clothing;

struct __attribute__((packed)) VillagerClearLettersFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerClearLettersFrame, word_0, 0x0);
GUEST_SIZE(VillagerClearLettersFrame, 0x4);

void Villager__clear_letters(u32 self_villager, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerClearLettersFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 villager = self_villager;
    u32 r1_1 = villager + (0x25u << 8);
    *gptr<u8>(r1_1 + 0x14u) = u8(~0u);
    Letter__clear(villager + 0x2210u, r1_1, r2, r3);
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = 0x1810u;
    u32 r7 = 0x7dbu;
    u32 index = 0u;
    do {
        Letter__clear((5u << 7) * index + villager + r6, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        u32 r0_3 = index << 0x18;
        index += 1u;
        r2 = r0_3 >> 0x17;
        r1 = r2 + villager;
        *gptr<u16>(r1 + (0x49u << 7) + 0x12u) = u16(r7);
        guest::preempt();
    } while (s32(index) < 4);
    Villager__reset_catchphrase(villager, r1, r2, r3);
    Villager__reset_clothing(villager);
}

}  // namespace d_00112d9c
GUEST_EXPORT_FRAMED(0x00112d9d, d_00112d9c::Villager__clear_letters, 0x40f0);  // pushes {villager, index, r6, r7, lr} first, as the original

// f_00112df8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The object's byte 4, or 0 for null.
namespace d_00112df8 {

struct __attribute__((packed)) Byte4IfPresentArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Byte4IfPresentArg0, byte_4, 0x4);


u32 byte_4_if_present(gptr<Byte4IfPresentArg0> arg0) {
    if (arg0.addr() == 0) {
        return arg0.addr();
    }
    return arg0->byte_4;
}

}  // namespace d_00112df8
GUEST_EXPORT(0x00112df9, d_00112df8::byte_4_if_present);

// f_00112f9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the villager's friendship (00311f7c) with a player (the current one by default) by `amount`; when it rose,
// updates the player's record.
namespace d_00112f9c {

inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32, u32)> player_state_block_address;
inline constexpr guest::Function<0x003091ec, u32(u32)> read_field_u32_0x234_;
inline constexpr guest::Function<0x00311f7d, u32(u32, u32, u32, u32)> SaveVillager__add_friendship;
inline constexpr guest::Function<0x00312434, u32(u32, u32, u32)> VillagerMemory__add_friendship;

struct __attribute__((packed)) VillagerAdjustFriendshipWithPlayerFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerAdjustFriendshipWithPlayerFrame, word_0, 0x0);
GUEST_SIZE(VillagerAdjustFriendshipWithPlayerFrame, 0x4);

u32 Villager__adjust_friendship_with_player(u32 villager, u32 r1, u32 player, u32 r3) {
    guest::StackFrameOf<VillagerAdjustFriendshipWithPlayerFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = player;
    u32 r6_1 = r1;
    if (player == 0) {
        r0_1 = read_field_u32_0x234_(player_state_block_address(r0_1, r1, player, r3));
        r1 = guest::cpu()->r[1];
    }
    u32 villager_memory = r0_1;
    if (r0_1 != 0) {
        r0_1 = SaveVillager__add_friendship(villager, r6_1, villager_memory + 0x55a6u, r3);
        r1 = r0_1;
        if (s32(r0_1) > 0) {
            r0_1 = VillagerMemory__add_friendship(villager_memory, r1, 1u);
            r1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00112f9c
GUEST_EXPORT_FRAMED(0x00112f9d, d_00112f9c::Villager__adjust_friendship_with_player, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00112fe2: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +6 of the record, or 0 without one.
namespace d_00112fe2 {

struct __attribute__((packed)) Byte6Or0Arg0 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Byte6Or0Arg0, byte_6, 0x6);


u32 byte_6_or_0(gptr<Byte6Or0Arg0> arg0) {
    if (arg0.addr() == 0) {
        return arg0.addr();
    }
    return arg0->byte_6;
}

}  // namespace d_00112fe2
GUEST_EXPORT(0x00112fe3, d_00112fe2::byte_6_or_0);

// f_00112fea: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +7 of the record, or 0 without one.
namespace d_00112fea {

struct __attribute__((packed)) Byte7Or0Arg0 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Byte7Or0Arg0, byte_7, 0x7);


u32 byte_7_or_0(gptr<Byte7Or0Arg0> arg0) {
    if (arg0.addr() == 0) {
        return arg0.addr();
    }
    return arg0->byte_7;
}

}  // namespace d_00112fea
GUEST_EXPORT(0x00112feb, d_00112fea::byte_7_or_0);

// f_00112ff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the villager's memory of the player (by identity), or a free one.
namespace d_00112ff4 {

struct __attribute__((packed)) Local_00112ff4_ea_1 {
    u32 save_villager;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00112ff4_ea_1, save_villager, 0x0);
GUEST_OFFSET(Local_00112ff4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00112ff4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00112ff4_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00112ff4_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00112ff4_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00112ff4_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00112ff4_ea_1, word_1c, 0x1c);

inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x003085bd, u32(u32, u32, u32, u32)> Villagers__for_each_record;
inline constexpr guest::Function<0x00308729, u32(u32, u32, u32, u32)> SaveVillager__init_player_memory;
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32, u32)> SaveVillager__find_player_record_00309f84;

u32 SaveVillager__find_player_memory(u32 save_villager, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 i = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_4 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    gptr<Local_00112ff4_ea_1> ea_1 = gptr<Local_00112ff4_ea_1>(r13 - 0x20);
    ea_1->save_villager = save_villager;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = i;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r13 = ea_1.addr() - 8u;
    r4 = save_villager;
    u32 r1_1 = *gptr<u32>(r13 + 0xcu) + 0x55a6u;
    guest::cpu()->r[13] = r13;
    u32 r0_1 = SaveVillager__find_player_record_00309f84(r4, r1_1, r2, r3);
    u32 r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    i = r0_1;
    if (r0_1 == 0) {
        r7 = 0x8eeu;
        do {
            u32 r1_3 = i * 0xf2u;
            guest::cpu()->r[13] = r13;
            u32 r0_3 = PersonalId__is_set(r1_3 + r4 + r7, r1_3, r2, r3);
            r1_2 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_3 == 0) {
                r0_4 = i;
                if (i >= 0x10u) {
                    break;
                }
                goto L_113042;
            }
            i += 1u;
            guest::preempt();
        } while (i < 0x10u);
        r5_1 = r4 + r7;
        r2_1 = r4 + 0x180eu;
        guest::cpu()->r[13] = r13;
        r0_4 = Villagers__for_each_record(0x106335u, r5_1, r2_1, r3);
        r1_2 = guest::cpu()->r[1];
        if (r0_4 >= 0x10u) {
            guest::cpu()->r[13] = r13;
            r0_4 = Villagers__for_each_record(0x106209u, r5_1, r2_1, guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
        }
L_113042:;
        if (r0_4 >= 0x10u) {
            i = 0u;
        } else {
            r1_2 = 0xf2u;
            i = r0_4 * r1_2 + r4 + r7;
            if (i != 0) {
                *gptr<u32>(r13) = 0;
                u32 r2_2 = *gptr<u32>(r13 + 0x10u);
                u32 r1_4 = *gptr<u32>(r13 + 0xcu);
                guest::cpu()->r[13] = r13;
                SaveVillager__init_player_memory(i, r1_4, r2_2, 0u);
                r1_2 = guest::cpu()->r[1];
            }
        }
    }
    r13 += 0x14u;
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_2 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return i;
}

}  // namespace d_00112ff4
GUEST_EXPORT(0x00112ff5, d_00112ff4::SaveVillager__find_player_memory);

// f_001130cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears two flag bits of each of the villager's 16 player memories (0xf2 bytes each, from +0x8ee).
namespace d_001130cc {

struct __attribute__((packed)) Local_001130cc_r1_1 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x3];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Local_001130cc_r1_1, byte_2, 0x2);
GUEST_OFFSET(Local_001130cc_r1_1, byte_6, 0x6);


void Villager__clear_memory_flags(u32 villager) {
    gptr<Local_001130cc_r1_1> r1_1 = gptr<Local_001130cc_r1_1>(0u);
    u32 index = 0u;
    villager += 0x8eeu;
    u32 r5 = 0xfdu;
    u32 r6 = 0xfbu;
    u32 r7 = 0xf7u;
    do {
        r1_1 = gptr<Local_001130cc_r1_1>(villager + 0xb6u);
        villager += 0xf2u;
        index += 1u;
        u32 r3_1 = u32(r1_1->byte_6) & r5 & r7;
        r1_1->byte_2 = u8(u32(r1_1->byte_2) & r5 & r6);
        r1_1->byte_6 = u8(r3_1);
        guest::preempt();
    } while (s32(index) < 0x10);
    guest::cpu()->r[1] = r1_1.addr();
}

}  // namespace d_001130cc
GUEST_EXPORT_FRAMED(0x001130cd, d_001130cc::Villager__clear_memory_flags, 0xf0);  // pushes {index, r5, r6, r7} first, as the original

// f_00113178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Chooses the villager that may leave from the day, among those allowed.
namespace d_00113178 {

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x002fc288, u32(u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc8fc, u32(u32)> do_nothing_002fc8fc;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x002fe9dc, u32(u32, u32, u32)> clear_bit_keeping_one;
inline constexpr guest::Function<0x002fea2c, u32(u32, u32, u32)> pick_random_item;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x00309eb0, u32(u32)> thunk_006f2858;
inline constexpr guest::Function<0x00309eb4, u32(u32, u32)> thunk_005b81f0;
inline constexpr guest::Function<0x00312af9, u32(u32)> Villager__may_leave;

struct __attribute__((packed)) VillagersChooseLeavingFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x2ec];  // (not read or written by name)
};
GUEST_OFFSET(VillagersChooseLeavingFrame, word_0, 0x0);
GUEST_OFFSET(VillagersChooseLeavingFrame, word_8, 0x8);
GUEST_OFFSET(VillagersChooseLeavingFrame, word_c, 0xc);
GUEST_SIZE(VillagersChooseLeavingFrame, 0x2fc);

void Villagers__choose_leaving(u32 villagers, u32 r1, u32 r2) {
    guest::StackFrameOf<VillagersChooseLeavingFrame> frame;  // the original's stack frame
    u32 r6_1 = 0;
    u32 villager = villagers;
    gptr<Now> now_2 = gptr<Now>(game_time_now(villagers, r1, r2, guest::cpu()->r[3]));
    u32 r2_1 = now_2->word_4;
    u32 r1_1 = now_2->word_0;
    u32 r0_2 = now_2->word_8;
    *frame.at<u32>(4) = r2_1;
    frame->word_0 = r1_1;
    frame->word_8 = r0_2;
    TimeStamp__move_to_day_start(frame.at(0).addr(), r1_1, r2_1);
    u32 r0_4 = Villager__may_leave(villager);
    frame->word_c = villager + 0x8eau;
    if (r0_4 != 0 && *frame.at<u8>(4) == 0xcu) {
        u32 r1_3 = frame.at(0).addr();
        if (*gptr<s8>(r1_3 + 5u) <= 0x18) {
            u32 is_empty = Item__is_empty(frame->word_c, r1_3, guest::cpu()->r[2]);
            u32 r1_4 = guest::cpu()->r[1];
            if (is_empty == 0) {
                r1_4 = *gptr<u16>(villager + (0x49u << 7) + 0x10u);
                if (r1_4 == frame->word_0) {
                    return;
                }
            }
            ItemBitSet__clear_and_return(frame.at(0x10).addr(), r1_4);
            u32 save_data = get_save_data(thunk_006f2858(frame.at(0x10).addr()));
            r2 = guest::cpu()->r[2];
            r1 = 0x29220u;
            u32 r5 = save_data + 0x80u + r1 + 4u;
            u32 i = 0u;
            do {
                if (i >= 0xau) {
                    r6_1 = 0u;
                } else {
                    r1 = 0x2518u;
                    r6_1 = i * r1 + r5;
                    if (r6_1 == 0) {
                        goto L_113226;
                    }
                    u32 r0_11 = is_record_valid(r6_1, r1, r2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_11 == 0) {
                        goto L_113226;
                    }
                }
                if (r6_1 != 0 && r6_1 != villager) {
                    u32 r0_12 = r6_1 + 0x8eau;
                    u32 is_empty_2 = Item__is_empty(r0_12, r1, r2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (is_empty_2 == 0) {
                        clear_bit_keeping_one(frame.at(0x10).addr(), r0_12, r2);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                    }
                }
L_113226:;
                i += 1u;
                guest::preempt();
            } while (s32(i) < 0xa);
            pick_random_item(frame.at(0x2f8).addr(), frame.at(0x10).addr(), r2);
            u32 r0_16 = frame->word_c;
            Item__copy(r0_16, frame.at(0x2f8).addr());
            do_nothing_002f777c(r0_16);
            thunk_005b81f0(villager, frame->word_0);
            do_nothing_002fc8fc(villager);
            return;
        }
    }
    Item__copy(frame->word_c, empty_item_address);
}

}  // namespace d_00113178
GUEST_EXPORT_FRAMED(0x00113179, d_00113178::Villagers__choose_leaving, 0x40f0);  // pushes {i, r5, r6, villager, lr} first, as the original

// f_001133f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends request 4 with the villager's index in the town and two values.
namespace d_001133f8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32)> index_of_same_villager;
inline constexpr guest::Function<0x0031224c, u32(u32, u32, u32, u32)> set_numbered_pair;
inline constexpr guest::Function<0x00312274, u32(u32, u32)> send_net_message_11;

struct __attribute__((packed)) VillagerSendItemRequestFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerSendItemRequestFrame, word_0, 0x0);
GUEST_SIZE(VillagerSendItemRequestFrame, 0x4);

void Villager__send_item_request(u32 villager, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerSendItemRequestFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 save_data = get_save_data(villager, r1, r2, r3);
    u32 r0_2 = index_of_same_villager(villager, save_data + 0x292a4u, 0xau);
    set_numbered_pair(frame.at(0).addr(), r0_2, r1, r2);
    send_net_message_11(4u, frame.at(0).addr());
}

}  // namespace d_001133f8
GUEST_EXPORT_FRAMED(0x001133f9, d_001133f8::Villager__send_item_request, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00113430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the villager's four kept letters (from +0x1810) and resets what goes with each.
namespace d_00113430 {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> Letter__clear;

struct __attribute__((packed)) VillagerClearKeptLettersFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerClearKeptLettersFrame, word_0, 0x0);
GUEST_SIZE(VillagerClearKeptLettersFrame, 0x4);

void Villager__clear_kept_letters(u32 self_villager, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<VillagerClearKeptLettersFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 index = 0u;
    u32 villager = self_villager;
    u32 r6 = 0x1810u;
    u32 r7 = 0x7dbu;
    do {
        Letter__clear((5u << 7) * index + villager + r6, r1, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        u32 r0_2 = index << 0x18;
        index += 1u;
        r1 = (r0_2 >> 0x17) + villager;
        *gptr<u16>(r1 + (0x49u << 7) + 0x12u) = u16(r7);
        guest::preempt();
    } while (s32(index) < 4);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00113430
GUEST_EXPORT_FRAMED(0x00113431, d_00113430::Villager__clear_kept_letters, 0x40f0);  // pushes {index, villager, r6, r7, lr} first, as the original

// f_00113494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the villager's held items (its gift, shirt and furniture) and compacts them.
namespace d_00113494 {

inline constexpr u32 npc_package_table_address = 0x00a83aecu;
inline constexpr guest::Function<0x002f6e64, u32(u32, u32)> construct_safe_string;
inline constexpr guest::Function<0x002f6e8c, u32(u32)> do_nothing_002f6e8c;
inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x00300768, u32(u32, u32)> Iterator__equals;
inline constexpr guest::Function<0x00301e64, u32(u32, u32, u32, u32)> read_field_u16_0x2c_;
inline constexpr guest::Function<0x00301e6c, u32(u32, u32)> entry_34_at;
inline constexpr guest::Function<0x00307c50, u32(u32)> do_nothing_00307c50;
inline constexpr guest::Function<0x003083d4, u32(u32)> terminate_short_text;
inline constexpr guest::Function<0x0030a014, u32(u32)> clear_flag_and_get_field;
inline constexpr guest::Function<0x0030a018, u32(u32, u32)> construct_buffered_safe_string;
inline constexpr guest::Function<0x0030a1a0, u32(u32)> set_flag_18;
inline constexpr guest::Function<0x0030b5a5, u32(u32, u32, u32, u32)> copy_item_24ae;
inline constexpr guest::Function<0x003107bc, u32(u32, u32, u32, u32)> copy_villager_item_24e6;
inline constexpr guest::Function<0x003107c8, u32(u32, u32)> copy_villager_item_24ea;
inline constexpr guest::Function<0x003107d5, u32(u32, u32, u32, u32)> get_owner_item;
inline constexpr guest::Function<0x003120a9, u32(u32, u32, u32)> Villager__set_item_and_compact;
inline constexpr guest::Function<0x00312178, u32(u32, u32)> Villager__set_item_24ea;
inline constexpr guest::Function<0x00312184, u32(u32, u32)> Villager__set_item_24e6;
inline constexpr guest::Function<0x00312191, u32(u32, u32, u32)> Villager__choose_gift_item;
inline constexpr guest::Function<0x00312b2d, u32(u32, u32, u32, u32)> Villager__find_item_slot;

struct __attribute__((packed)) VillagerRefreshItemsFrame {
    u32 word_0;
    u8 unknown_4[0x28];  // (not read or written by name)
    u32 slot;
    u8 unknown_30[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(VillagerRefreshItemsFrame, word_0, 0x0);
GUEST_OFFSET(VillagerRefreshItemsFrame, slot, 0x2c);
GUEST_SIZE(VillagerRefreshItemsFrame, 0x4c);

void Villager__refresh_items(u32 villager, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerRefreshItemsFrame> frame;  // the original's stack frame
    u32 r0_11 = 0;
    u32 r3_23 = 0;
    u32 r2_24 = 0;
    u32 r0_25 = 0;
    u32 r1_12 = 0;
    u32 r6 = villager;
    u32 r4 = r1;
    if (s32(*gptr<u32>(r6 + (0x25u << 8) + 0x10u) << 0xd) >= 0) {
        u32 r0_2 = entry_34_at(npc_package_table_address, read_field_u16_0x2c_(r6, r1, r2, r3));
        if (r4 == 0 || r0_2 == 0) {
            goto L_1135cc;
        }
        u32 r0_3 = clear_flag_and_get_field(r4);
        u32 r0_4 = frame.at(0x38).addr();
        construct_safe_string(r0_4, r0_3);
        construct_buffered_safe_string(frame.at(8).addr(), r0_4);
        do_nothing_002f6e8c(frame.at(0x38).addr());
        u32 slot = 0u;
        u32 r0_7 = terminate_short_text(r0_2);
        u32 r0_8 = frame.at(0x30).addr();
        construct_safe_string(r0_8, r0_7);
        u32 r0_10 = Iterator__equals(frame.at(8).addr(), r0_8);
        r0_11 = frame.at(0x30).addr();
        do_nothing_002f6e8c(r0_11);
        r3 = guest::cpu()->r[3];
        if (r0_10 == 0) {
            goto L_1135c6;
        }
        frame->slot = slot;
        do {
            copy_item_24ae(frame.at(0x44).addr(), r6, slot, r3);
            frame->word_0 = r4;
            Villager__find_item_slot(frame.at(0x40).addr(), r6, frame.at(0x2c).addr(), frame.at(0x44).addr());
            Villager__choose_gift_item(r6, slot, frame.at(0x40).addr());
            do_nothing_002f777c(frame.at(0x40).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            do_nothing_002f777c(frame.at(0x44).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r3 = guest::cpu()->r[3];
            slot += 1u;
            guest::preempt();
        } while (s32(slot) < 0xa);
        slot = 0u;
        do {
            get_owner_item(frame.at(0x44).addr(), r6, slot, r3);
            frame->word_0 = r4;
            Villager__find_item_slot(frame.at(0x40).addr(), r6, frame.at(0x2c).addr(), frame.at(0x44).addr());
            Villager__set_item_and_compact(r6, slot, frame.at(0x40).addr());
            do_nothing_002f777c(frame.at(0x40).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            do_nothing_002f777c(frame.at(0x44).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r3 = guest::cpu()->r[3];
            slot += 1u;
            guest::preempt();
        } while (s32(slot) < 4);
        copy_villager_item_24e6(frame.at(0x28).addr(), r6, guest::cpu()->r[2], r3);
        frame->word_0 = r4;
        Villager__find_item_slot(frame.at(4).addr(), r6, frame.at(0x2c).addr(), frame.at(0x28).addr());
        Villager__set_item_24e6(r6, frame.at(4).addr());
        do_nothing_002f777c(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        do_nothing_002f777c(frame.at(0x28).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        copy_villager_item_24ea(frame.at(4).addr(), r6);
        r3_23 = frame.at(4).addr();
        r2_24 = frame.at(0x2c).addr();
    } else {
        return;
    }
    r0_25 = frame.at(0x28).addr();
    frame->word_0 = r4;
    Villager__find_item_slot(r0_25, r6, r2_24, r3_23);
    r1_12 = frame.at(0x28).addr();
    r0_11 = r6;
    Villager__set_item_24ea(r0_11, r1_12);
    do_nothing_002f777c(r0_11, r1_12, r2_24, r3_23);
    do_nothing_002f777c(r0_11, r1_12, r2_24, r3_23);
L_1135c6:;
    do_nothing_00307c50(r0_11);
L_1135cc:;
    set_flag_18(r6);
}

}  // namespace d_00113494
GUEST_EXPORT_FRAMED(0x00113495, d_00113494::Villager__refresh_items, 0x40f0);  // pushes {r4, slot, r6, r7, lr} first, as the original

// f_00113828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00113830 when the second argument is set, else 0.
namespace d_00113828 {

inline constexpr guest::Function<0x00113831, u32(u32, u32, u32, u32)> Villager__find_player_entry;

u32 call_00113830_if_set(u32 r0, u32 r1) {
    if (r1 != 0) {
        return Villager__find_player_entry(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return 0u;
}

}  // namespace d_00113828
GUEST_EXPORT(0x00113829, d_00113828::call_00113830_if_set);

// f_001138a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets bit `bit` of the villager's 16-bit flags in the table at 0xad555c (by its index in the town).
namespace d_001138a4 {

inline constexpr u32 villager_flags_address = 0x00ad555cu;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32)> index_of_same_villager;

void Villager__mark_flag(u32 villager, u32 r1, u32 r2, u32 r3) {
    u32 save_data = get_save_data(villager, r1, r2, r3);
    u32 r0_2 = index_of_same_villager(villager, save_data + 0x292a4u, 0xau);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 < 0xau) {
        r1_2 = r0_2 << 1;
        *gptr<u16>(r1_2 + villager_flags_address) = u16(u32(*gptr<u16>(r1_2 + villager_flags_address)) | lsl_r(1u, r1 & 0xff));
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001138a4
GUEST_EXPORT_FRAMED(0x001138a5, d_001138a4::Villager__mark_flag, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001138dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a villager record (0x2518 bytes).
namespace d_001138dc {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

void Villager__copy() {
    copy_aligned_bytes(guest::cpu()->r[0], guest::cpu()->r[1], 0x2518u, guest::cpu()->r[3]);
}

}  // namespace d_001138dc
GUEST_EXPORT_FRAMED(0x001138dd, d_001138dc::Villager__copy, 0x4010);  // pushes {r4, lr} first, as the original

// f_001138ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the villager and sets it up from `source`: its id, its data entry, the town's details, the date, its
// catchphrase from the message data, and its player memories.
namespace d_001138ec {

struct __attribute__((packed)) Source {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Source, half_2c, 0x2c);

inline constexpr u32 word_resources_address = 0x0095debcu;
inline constexpr u32 villager_template_table_address = 0x00a8349cu;
inline constexpr u32 npc_package_table_address = 0x00a83aecu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32, u32)> game_time_now;
inline constexpr guest::Function<0x00301e6c, u32(u32, u32)> entry_34_at;
inline constexpr guest::Function<0x00308380, u32(u32, u32, u32, u32)> copy_two_names_and_id;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x003083d4, u32(u32)> terminate_short_text;
inline constexpr guest::Function<0x003083e4, u32(u32, u32, u32, u32)> script__WordRes__WordRes_003083e4;
inline constexpr guest::Function<0x00308450, u32(u32, u32)> script__construct_word_ptr_sv;
inline constexpr guest::Function<0x0030846c, u32(u32, u32)> call_virtual_5;
inline constexpr guest::Function<0x003084c8, u32(u32)> do_nothing_003084c8;
inline constexpr guest::Function<0x003084cc, u32(u32)> do_nothing_003084cc;
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> Villager__clear;
inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> copy_22_bytes;
inline constexpr guest::Function<0x0030f56c, u32(u32, u32)> narrow_date;
inline constexpr guest::Function<0x00311744, u32(u32, u32)> villager_data_entry;
inline constexpr guest::Function<0x00312a40, u32(u32)> member_address_0x24f2_;

struct __attribute__((packed)) VillagerInitFromTemplateFrame {
    u8 unknown_0[0xc];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x1f];  // (not read or written by name)
    u16 half_2c;
    u8 unknown_2e[0x2];  // (not read or written by name)
    u32 word_30;
    u8 unknown_34[0x8];  // (not read or written by name)
};
GUEST_OFFSET(VillagerInitFromTemplateFrame, byte_c, 0xc);
GUEST_OFFSET(VillagerInitFromTemplateFrame, half_2c, 0x2c);
GUEST_OFFSET(VillagerInitFromTemplateFrame, word_30, 0x30);
GUEST_SIZE(VillagerInitFromTemplateFrame, 0x3c);

void Villager__init_from_template(u32 villager, gptr<Source> source, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerInitFromTemplateFrame> frame;  // the original's stack frame
    Villager__clear(villager, source.addr(), r2, r3);
    u32 r1_1 = source->half_2c;
    frame->half_2c = u16(r1_1);
    frame->word_30 = villager_data_entry(villager_template_table_address, r1_1);
    u32 r1_2 = frame->half_2c;
    u32 data = entry_34_at(npc_package_table_address, r1_2);
    u32 r0_3 = frame->word_30;
    if (r0_3 != 0 && data != 0) {
        u32 save_data = get_save_data(r0_3);
        frame->byte_c = u8(u32(*gptr<u8>(data + 0x1cu)) >> 4);
        u32 save_data_2 = get_save_data(copy_two_names_and_id(villager, frame.at(0x2c).addr(), frame.at(0xc).addr(), save_data + 0x621b8u));
        copy_22_bytes(villager + (0x45u << 5), save_data_2 + 0x621b8u);
        copy_bytes_at_any_alignment(villager + 0x249au, frame->word_30, 0x58u);
        u32 r1_8 = villager + (0x25u << 8);
        *gptr<u8>(r1_8 + 8u) = 3;
        u32 now_2 = game_time_now(3u, r1_8);
        narrow_date(villager + 0x250au, now_2);
        script__construct_word_ptr(frame.at(0).addr(), frame.at(0x14).addr(), 0xbu);
        u32 r0_12 = terminate_short_text(data);
        if (script__WordRes__WordRes_003083e4(*word_resources, frame.at(0).addr(), 0x88eedcu, r0_12) != 0) {
            u32 r0_15 = member_address_0x24f2_(villager);
            script__construct_word_ptr_sv(frame.at(0x30).addr(), r0_15);
            call_virtual_5(frame.at(0x30).addr(), frame.at(0).addr());
            do_nothing_003084c8(frame.at(0x30).addr());
        }
        copy_bytes_at_any_alignment(villager + 0x8eeu, source.addr() + 0x30u, 0x79u << 5);
        do_nothing_003084cc(villager + 0x8eeu);
    }
}

}  // namespace d_001138ec
GUEST_EXPORT_FRAMED(0x001138ed, d_001138ec::Villager__init_from_template, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001139f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to SaveVillager__set_state_250f.
namespace d_001139f4 {

inline constexpr guest::Function<0x001139fd, u32(u32, u32)> SaveVillager__set_state_250f;

u32 SaveVillager__set_state_250f_veneer() {
    return SaveVillager__set_state_250f(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_001139f4
GUEST_EXPORT(0x001139f4, d_001139f4::SaveVillager__set_state_250f_veneer);

// f_00113ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes `item` from the villager's four items (+0x8c6) when it has it.
namespace d_00113ca4 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> Item__has_number;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x00313161, u32(u32)> Villager__compact_items;

struct __attribute__((packed)) VillagerRemoveItemFrame {
    u32 number;
};
GUEST_OFFSET(VillagerRemoveItemFrame, number, 0x0);
GUEST_SIZE(VillagerRemoveItemFrame, 0x4);

void Villager__remove_item(u32 self_villager, u32 item, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<VillagerRemoveItemFrame> frame;  // the original's stack frame
    frame->number = r3;
    u32 villager = self_villager;
    u32 is_empty = Item__is_empty(item, item, guest::cpu()->r[2], r3);
    if (is_empty == 0) {
        u32 number = Item__number(item);
        r3 = guest::cpu()->r[3];
        u32 r7 = 0x8c6u;
        frame->number = number;
        u32 r5 = villager + r7;
        u32 index = 0u;
        do {
            u32 r0_3 = Item__has_number(r5, frame->number, guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
            if (r0_3 != 0) {
                if (index >= 4u) {
                    break;
                }
                Item__copy((index << 2) + villager + r7, empty_item_address, guest::cpu()->r[2], r3);
                Villager__compact_items(villager);
                return;
            }
            index += 1u;
            r5 += 4u;
            guest::preempt();
        } while (s32(index) < 4);
    }
}

}  // namespace d_00113ca4
GUEST_EXPORT_FRAMED(0x00113ca5, d_00113ca4::Villager__remove_item, 0x40f0);  // pushes {index, r5, villager, r7, lr} first, as the original

// f_00113cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Item `index` (fewer than 4) of the villager's items at +0x8c6; null for a larger index.
namespace d_00113cfc {


u32 Villager__item_at(u32 villager, u32 index) {
    if (index >= 4u) {
        guest::cpu()->r[1] = index;
        return 0u;
    }
    guest::cpu()->r[1] = 0x8c6u;
    return (index << 2) + villager + 0x8c6u;
}

}  // namespace d_00113cfc
GUEST_EXPORT(0x00113cfd, d_00113cfc::Villager__item_at);

// f_00113d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a villager record (its items, memories, letters and the rest), then clears it.
namespace d_00113d14 {

inline constexpr guest::Function<0x001b4980, u32(u32, u32, u32, u32)> Pattern__reset_flags;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32)> Letter__Letter;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00301e94, u32(u32, u32, u32)> store_constants_301e94;
inline constexpr guest::Function<0x00308d4d, u32(u32, u32)> Villager__clear;
inline constexpr guest::Function<0x0030a480, u32(u32, u32)> thunk_006bc168;
inline constexpr guest::Function<0x0030a484, u32(u32, u32, u32)> set_half_7db_veneer;
inline constexpr guest::Function<0x00313414, u32(u32, u32, u32)> TimeStamp__set_invalid;

u32 Villager__Villager(u32 villager, u32 r1, u32 r2, u32 r3) {
    u32 pattern = villager + 0x30u;
    Pattern__reset_flags(pattern, r1, r2, r3);
    u32 r0_2 = pattern + 0x886u;
    thunk_006bc168(r0_2, 0x8b6u);
    u32 time_stamp = r0_2 + 8u;
    TimeStamp__set_invalid(time_stamp, 0x8beu, 0xfffff74au);
    u32 r0_7 = (for_each_element(time_stamp + 8u, 0x2fc20cu, 4u, 4u) + 0xfffff73au) + 0x8d6u;
    u32 r0_8 = for_each_element(r0_7, 0x2fc20cu, 4u, 4u);
    u32 r2_2 = 0xfffff72au;
    u32 r0_9 = r0_8 + r2_2 + 0x8e6u;
    construct_empty_item(r0_9, 0x8e6u, r2_2);
    u32 r0_10 = r0_9 + 4u;
    construct_empty_item(r0_10, 0x8eau, 0xfffff71au);
    u32 r0_14 = (for_each_element(r0_10 + 4u, 0x113fe5u, 0xf2u, 0x10u) + 0xfffff712u) + 0x1810u;
    u32 r0_15 = for_each_element(r0_14, 0x2ff368u, 5u << 7, 4u);
    u32 r2_4 = 0xffffe7f0u;
    u32 letter = r0_15 + r2_4 + 0x2210u;
    Letter__Letter(letter, 0x2210u, r2_4);
    u32 r0_17 = letter + 0x280u;
    set_half_7db_veneer(r0_17, 0x2490u, 0xffffddf0u);
    u32 r0_20 = for_each_element(r0_17 + 2u, 0x612d0cu, 2u, 4u) + 8u;
    construct_empty_item(r0_20, 0x249au, guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 4u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 8u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x1cu, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x20u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x2cu, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x30u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x34u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x38u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x3cu, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x40u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x48u, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x4cu, guest::cpu()->r[1], guest::cpu()->r[2]);
    construct_empty_item(r0_20 + 0x50u, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_41 = r0_20 + 0x70u;
    store_constants_301e94(r0_41, 0x250au, 0xffffdb66u);
    u32 r4_1 = r0_41 + 0xffffdaf6u;
    Villager__clear(r4_1, 0xffffdaf6u);
    return r4_1;
}

}  // namespace d_00113d14
GUEST_EXPORT_FRAMED(0x00113d15, d_00113d14::Villager__Villager, 0x4010);  // pushes {r4, lr} first, as the original

// f_00113ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the part at +0xb6 and, when the villager is the one of the current mode, finishes it.
namespace d_00113ecc {

inline constexpr guest::Function<0x001df5e8, u32(u32, u32, u32, u32)> Packed__add_3bits_at_4_1;
inline constexpr guest::Function<0x001df668, u32(u32, u32)> Packed__add_3bits_at_4_4;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32)> index_of_same_villager;
inline constexpr guest::Function<0x00313440, u32(u32)> flagged_mode_ordinal;

struct __attribute__((packed)) VillagerUpdateB6IfCurrentFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerUpdateB6IfCurrentFrame, word_0, 0x0);
GUEST_SIZE(VillagerUpdateB6IfCurrentFrame, 0x4);

u32 Villager__update_b6_if_current(u32 villager, u32 valid_villager, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerUpdateB6IfCurrentFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 self_packed = villager + 0xb6u;
    Packed__add_3bits_at_4_1(self_packed, 1u, r2, r3);
    u32 save_data = get_save_data(self_packed);
    u32 scene_2 = current_scene_id(index_of_same_villager(valid_villager, save_data + 0x292a4u, 0xau));
    u32 r0_5 = flagged_mode_ordinal(scene_2);
    u32 save_data_2 = get_save_data(r0_5);
    u32 r0_7 = index_of_same_villager(valid_villager, save_data_2 + 0x292a4u, 0xau);
    if (r0_5 == r0_7) {
        r0_7 = Packed__add_3bits_at_4_4(self_packed, 1u);
    }
    return r0_7;
}

}  // namespace d_00113ecc
GUEST_EXPORT_FRAMED(0x00113ecd, d_00113ecc::Villager__update_b6_if_current, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00113f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the friendship to each villager's memory of the player.
namespace d_00113f1c {

struct __attribute__((packed)) Villagers {
    u8 unknown_0[0xb6];  // (not used here)
    u8 byte_b6;
};
GUEST_OFFSET(Villagers, byte_b6, 0xb6);

struct __attribute__((packed)) Local_00113f1c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 save_villager;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00113f1c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00113f1c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00113f1c_ea_1, save_villager, 0x8);
GUEST_OFFSET(Local_00113f1c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00113f1c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00113f1c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00113f1c_ea_1, word_18, 0x18);

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32, u32)> player_state_block_address;
inline constexpr guest::Function<0x003091ec, u32(u32)> read_field_u32_0x234_;
inline constexpr guest::Function<0x00311f7d, u32(u32, u32, u32, u32)> SaveVillager__add_friendship;
inline constexpr guest::Function<0x00312434, u32(u32, u32, u32)> VillagerMemory__add_friendship;

void Villagers__add_friendship_all(gptr<Villagers> villagers, u32 r1, u32 r2, u32 r3) {
    u32 r0 = villagers.addr();
    u32 save_villager = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 i = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00113f1c_ea_1> ea_1 = gptr<Local_00113f1c_ea_1>(r13 - 0x1c);
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->save_villager = save_villager;
    ea_1->word_c = r5;
    ea_1->word_10 = i;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    r13 = ea_1.addr() - 0xcu;
    r5 = r0;
    u32 r0_1 = (u32(villagers->byte_b6) >> 3u & 7u) + 1u;
    *gptr<u32>(r13) = r0_1;
    if (r0_1 > 3u) {
        r0_1 = 3u;
        *gptr<u32>(r13) = r0_1;
    }
    guest::cpu()->r[13] = r13;
    u32 data_base = get_data_base(r0_1, r1, r2, r3);
    guest::cpu()->r[13] = r13;
    u32 records = slot_records_of(data_base);
    r3 = guest::cpu()->r[3];
    r7 = 0x8eeu;
    i = 0u;
    *gptr<u32>(r13 + 4u) = records + 4u;
    do {
        u32 r0_4 = *gptr<u32>(r13 + 4u);
        if (i >= 0xau) {
            save_villager = 0u;
        } else {
            u32 r1_2 = i * 0x2518u;
            save_villager = r1_2 + r0_4;
            if (save_villager == 0) {
                goto L_113fc0;
            }
            guest::cpu()->r[13] = r13;
            u32 r0_5 = is_record_valid(save_villager, r1_2, 0x2518u, r3);
            r3 = guest::cpu()->r[3];
            if (r0_5 == 0) {
                goto L_113fc0;
            }
        }
        if (save_villager != 0) {
            r0 = 0u;
            r1 = r0;
L_113f74:;
            r2 = 0xf2u;
            r1 = r1 * r2 + save_villager + r7;
L_113f80:;
            if (r1 == r5) {
                u32 villager_memory = *gptr<u32>(r13 + 0x10u);
                u32 r5_1 = *gptr<u32>(r13);
                if (villager_memory == 0) {
                    guest::cpu()->r[13] = r13;
                    u32 r0_7 = player_state_block_address(villager_memory, r1, r2, r3);
                    guest::cpu()->r[13] = r13;
                    villager_memory = read_field_u32_0x234_(r0_7);
                }
                if (villager_memory != 0) {
                    guest::cpu()->r[13] = r13;
                    u32 r0_8 = SaveVillager__add_friendship(save_villager, r5_1, villager_memory + 0x55a6u, 1u);
                    if (s32(r0_8) > 0) {
                        guest::cpu()->r[13] = r13;
                        VillagerMemory__add_friendship(villager_memory, r0_8, 1u);
                    }
                }
                r13 += 0x14u;
                u32 r4_1 = *gptr<u32>(r13);
                u32 r5_2 = *gptr<u32>(r13 + 4);
                u32 r6_1 = *gptr<u32>(r13 + 8);
                u32 r7_1 = *gptr<u32>(r13 + 0xc);
                u32 tpc_1 = *gptr<u32>(r13 + 0x10);
                r13 += 0x14;
                guest::cpu()->r[4] = r4_1;
                guest::cpu()->r[5] = r5_2;
                guest::cpu()->r[6] = r6_1;
                guest::cpu()->r[7] = r7_1;
                guest::cpu()->r[13] = r13;
                return;
            }
            r0 += 1u;
            if (r0 < 0x10u) {
                r1 = r0;
                if (r0 >= 0x10u) {
                    r1 = 0u;
                    guest::preempt();
                    goto L_113f80;
                }
                guest::preempt();
                goto L_113f74;
            }
        }
L_113fc0:;
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
    r13 += 0x14u;
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_3 = *gptr<u32>(r13 + 4);
    u32 r6_2 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);
    u32 tpc_2 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00113f1c
GUEST_EXPORT(0x00113f1d, d_00113f1c::Villagers__add_friendship_all);

// f_00114088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the villager's data (letters, catchphrase, clothing) for moving in.
namespace d_00114088 {

struct __attribute__((packed)) Local_00114088_ea_1 {
    u32 villager;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_00114088_ea_1, villager, 0x0);
GUEST_OFFSET(Local_00114088_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00114088_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00114088_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00114088_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00114088_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00114088_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00114088_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00114088_ea_1, word_20, 0x20);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> Letter__clear;
inline constexpr guest::Function<0x00301484, u32(u32)> mode_95721c_index;
inline constexpr guest::Function<0x0030a62c, u32(u32, u32)> speed_for_index_veneer;
inline constexpr guest::Function<0x0031118c, u32(u32, u32, u32, u32)> flags_2510_has_600;
inline constexpr guest::Function<0x003122bd, u32(u32, u32, u32, u32)> Villager__reset_catchphrase;
inline constexpr guest::Function<0x0031237d, u32(u32)> Villager__reset_clothing;
inline constexpr guest::Function<0x00313a40, u32(u32)> villager_type_is_0;

void Villager__reset_for_move_in(u32 villager, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 i = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    gptr<Local_00114088_ea_1> ea_1 = gptr<Local_00114088_ea_1>(r13 - 0x24);
    ea_1->villager = villager;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = i;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0xcu;
    u32 r0_1 = *gptr<u32>(r13 + 0x10u);
    guest::cpu()->r[13] = r13;
    if (flags_2510_has_600(r0_1, r1, r2, r3) == 0) {
        u32 r0_3 = *gptr<u16>(*gptr<u32>(r13 + 0x10u) + 0x2cu);
        guest::cpu()->r[13] = r13;
        if (villager_type_is_0(r0_3) == 0) {
            r13 += 0x1cu;
            r4_2 = *gptr<u32>(r13);
            r5_1 = *gptr<u32>(r13 + 4);
            r6_1 = *gptr<u32>(r13 + 8);
            r7_1 = *gptr<u32>(r13 + 0xc);
            tpc_1 = *gptr<u32>(r13 + 0x10);
            r13 += 0x14;
            guest::cpu()->r[4] = r4_2;
            guest::cpu()->r[5] = r5_1;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            guest::cpu()->r[13] = r13;
            return;
        }
    }
    if (r2 < 2u && r3 < 2u) {
        u32 r0_5 = 0x4a30u * r2 + villager + r3 * 0x2518u;
        u32 r1_2 = *gptr<u32>(r13 + 0x10u);
        *gptr<u32>(r13 + 4u) = r0_5;
        guest::cpu()->r[13] = r13;
        copy_aligned_bytes(r0_5, r1_2, 0x2518u);
        if (r2 == 1u && r3 == 1u) {
            u32 r4_1 = villager + 0x4a30u + 0x2518u;
            *gptr<u32>(r13) = r4_1;
            *gptr<u8>(r4_1 + (0x25u << 8) + 0x14u) = u8(r3 - 2u);
            r4 = *gptr<u32>(r13);
            guest::cpu()->r[13] = r13;
            Letter__clear(r4 + 0x2210u, r3 - 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r6 = 0x1810u;
            r7 = 0x7dbu;
            i = 0u;
            do {
                guest::cpu()->r[13] = r13;
                Letter__clear((5u << 7) * i + r4 + r6, r1, r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 r0_8 = i << 0x18;
                i += 1u;
                r1 = (r0_8 >> 0x17) + r4;
                *gptr<u16>(r1 + (0x49u << 7) + 0x12u) = u16(r7);
                guest::preempt();
            } while (s32(i) < 4);
            u32 r0_9 = *gptr<u32>(r13);
            guest::cpu()->r[13] = r13;
            Villager__reset_catchphrase(r0_9, r1, r2, r3);
            u32 r0_10 = *gptr<u32>(r13);
            guest::cpu()->r[13] = r13;
            Villager__reset_clothing(r0_10);
        }
        u32 r1_5 = 0x45u << 5;
        u32 r0_11 = *gptr<u8>(*gptr<u32>(r13 + 0x10u) + r1_5 + 0x14u);
        guest::cpu()->r[13] = r13;
        u32 r0_12 = speed_for_index_veneer(r0_11, r1_5);
        guest::cpu()->r[13] = r13;
        if (r0_12 != mode_95721c_index(r0_12)) {
            u32 r0_14 = *gptr<u32>(r13 + 4u);
            guest::cpu()->r[13] = r13;
            Villager__reset_catchphrase(r0_14, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    r13 += 0x1cu;
    r4_2 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);
    tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00114088
GUEST_EXPORT(0x00114089, d_00114088::Villager__reset_for_move_in);

// f_00114160: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears villager (row, column) of a 2 x 2 block of villager records.
namespace d_00114160 {

inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> Villager__clear;

u32 clear_villager_at(u32 block, u32 row, u32 column) {
    if (row >= 2u || column >= 2u) {
        guest::cpu()->r[1] = row;
        return block;
    }
    u32 r3_1 = s32(0x4a30u) >> 1;
    u32 r1_1 = row * 0x4a30u;
    u32 r2_1 = column * r3_1;
    return Villager__clear(r1_1 + block + r2_1, r1_1, r2_1, r3_1);
}

}  // namespace d_00114160
GUEST_EXPORT_FRAMED(0x00114161, d_00114160::clear_villager_at, 0x4010);  // pushes {r4, lr} first, as the original

// f_00114184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0011418c.
namespace d_00114184 {

inline constexpr guest::Function<0x0011418d, u32(u32, u32)> Vec4__copy_from_global;

void call_0011418c() {
    Vec4__copy_from_global(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00114184
GUEST_EXPORT(0x00114184, d_00114184::call_0011418c);

// f_00114694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the day records (+0x8b78) when the new day differs or comes before the last one.
namespace d_00114694 {

struct __attribute__((packed)) TownFlagsUpdateDayRecordsArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(TownFlagsUpdateDayRecordsArg1, word_0, 0x0);
GUEST_OFFSET(TownFlagsUpdateDayRecordsArg1, word_4, 0x4);
GUEST_OFFSET(TownFlagsUpdateDayRecordsArg1, word_8, 0x8);

struct __attribute__((packed)) TownFlagsUpdateDayRecordsArg2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(TownFlagsUpdateDayRecordsArg2, word_0, 0x0);
GUEST_OFFSET(TownFlagsUpdateDayRecordsArg2, word_4, 0x4);
GUEST_OFFSET(TownFlagsUpdateDayRecordsArg2, word_8, 0x8);

struct __attribute__((packed)) Local_00114694_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00114694_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00114694_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00114694_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00114694_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00114694_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00114694_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_00114694_r3_1, word_4, 0x4);
GUEST_OFFSET(Local_00114694_r3_1, word_8, 0x8);

struct __attribute__((packed)) Local_00114694_r3_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00114694_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_00114694_r3_2, word_4, 0x4);
GUEST_OFFSET(Local_00114694_r3_2, word_8, 0x8);

inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> words_not_less;
inline constexpr guest::Function<0x00314258, u32(u32, u32, u32, u32)> TimeStamp__step_back_days;
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> word_and_byte_pairs_equal;
inline constexpr guest::Function<0x003142e0, u32(u32, u32)> Villager__roll_daily_values;

struct __attribute__((packed)) TownFlagsUpdateDayRecordsFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(TownFlagsUpdateDayRecordsFrame, word_0, 0x0);
GUEST_OFFSET(TownFlagsUpdateDayRecordsFrame, word_4, 0x4);
GUEST_OFFSET(TownFlagsUpdateDayRecordsFrame, word_18, 0x18);
GUEST_OFFSET(TownFlagsUpdateDayRecordsFrame, word_1c, 0x1c);
GUEST_SIZE(TownFlagsUpdateDayRecordsFrame, 0x20);

u32 TownFlags__update_day_records(u32 town_flags, gptr<TownFlagsUpdateDayRecordsArg1> arg1, gptr<TownFlagsUpdateDayRecordsArg2> arg2) {
    guest::StackFrameOf<TownFlagsUpdateDayRecordsFrame> frame;  // the original's stack frame
    u32 r1_1 = arg1->word_4;
    u32 r2_1 = arg1->word_8;
    gptr<Local_00114694_r3_1> r3_1 = gptr<Local_00114694_r3_1>(frame.at(8).addr());
    r3_1->word_0 = arg1->word_0;
    r3_1->word_4 = r1_1;
    r3_1->word_8 = r2_1;
    gptr<Local_00114694_r3_2> r3_2 = gptr<Local_00114694_r3_2>(frame.at(0x14).addr());
    u32 r1_2 = arg2->word_4;
    u32 r2_2 = arg2->word_8;
    r3_2->word_0 = arg2->word_0;
    r3_2->word_4 = r1_2;
    r3_2->word_8 = r2_2;
    TimeStamp__step_back_days(frame.at(8).addr(), r1_2, r2_2, r3_2.addr() + 0xc);
    TimeStamp__step_back_days(frame.at(0x14).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_4 = frame->word_1c;
    frame->word_0 = frame->word_18;
    frame->word_4 = r1_4;
    gptr<Local_00114694_ea_1> ea_1 = gptr<Local_00114694_ea_1>(frame.at(8).addr());
    u32 r0_4 = word_and_byte_pairs_equal(ea_1->word_0, ea_1->word_4, ea_1->word_8, ea_1->word_c);
    u32 r5_1 = town_flags + 0x8b78u;
    if (r0_4 == 0) {
        Villager__roll_daily_values(r5_1, 0x8b78u);
    }
    u32 r0_5 = arg2->word_4;
    frame->word_4 = arg2->word_8;
    frame->word_0 = r0_5;
    u32 r0_6 = arg1->word_0;
    u32 r1_6 = arg1->word_4;
    u32 r2_6 = arg1->word_8;
    u32 r6_1 = arg1.addr() + 0xc;
    u32 r0_7 = words_not_less(r0_6, r1_6, r2_6, arg2->word_0);
    if (r0_7 == 0) {
        r0_7 = Villager__roll_daily_values(r5_1, guest::cpu()->r[1]);
    }
    return r0_7;
}

}  // namespace d_00114694
GUEST_EXPORT_FRAMED(0x00114695, d_00114694::TownFlags__update_day_records, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001146fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Renews the notices and the parts of the town flags block for the new day.
namespace d_001146fc {

inline constexpr guest::Function<0x00108b89, u32(u32, u32)> Timer45cc__tick;
inline constexpr guest::Function<0x0010a44d, u32(u32, u32)> RewardRecord__advance_days;
inline constexpr guest::Function<0x0010a841, u32(u32, u32)> VisitorShop__renew;
inline constexpr guest::Function<0x0010abc9, u32(u32, u32)> TailorShop__pay_out_sales;
inline constexpr guest::Function<0x0010af73, u32(u32, u32)> ShopRecord__advance_days;
inline constexpr guest::Function<0x0010b3b1, u32(u32, u32)> NoticeRenewalState__advance_days;
inline constexpr guest::Function<0x0010b449, u32(u32, u32)> TownRecord8b60__advance_days;
inline constexpr guest::Function<0x0010b6dd, u32(u32, u32)> Players__refresh_identities;
inline constexpr guest::Function<0x001e546c, u32(u32, u32, u32, u32)> TownFlags__renew_notices;
inline constexpr guest::Function<0x0020d27c, u32(u32)> ItemFlags20__update;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;

void TownFlags__renew(u32 town_flags, u32 r1) {
    TownFlags__renew_notices(town_flags, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    NoticeRenewalState__advance_days(town_flags + 0x4494u, r1);
    VisitorShop__renew(town_flags + 0x44e0u, r1);
    Timer45cc__tick(town_flags + 0x45ccu, r1);
    ShopRecord__advance_days(town_flags + 0x8a6cu, r1);
    if (current_net_signed_value(town_flags + 0x8a6cu) == 0) {
        ItemFlags20__update(town_flags + 0x45fcu);
    }
    TailorShop__pay_out_sales(town_flags + 0x4650u, r1);
    Players__refresh_identities(town_flags + 0x8a7eu, r1);
    RewardRecord__advance_days(town_flags + 0x8b32u, r1);
    TownRecord8b60__advance_days(town_flags + 0x8b60u, r1);
}

}  // namespace d_001146fc
GUEST_EXPORT_FRAMED(0x001146fd, d_001146fc::TownFlags__renew, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001147a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores an option byte through the setting at 0x105ccd and applies it.
namespace d_001147a8 {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> Grid2x2__for_each_block;
inline constexpr guest::Function<0x002fea95, u32(u32, u32)> Grid2x2__for_each_cell;

struct __attribute__((packed)) SetOptionByte105ccdFrame {
    u32 word_0;
};
GUEST_OFFSET(SetOptionByte105ccdFrame, word_0, 0x0);
GUEST_SIZE(SetOptionByte105ccdFrame, 0x4);

void set_option_byte_105ccd(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SetOptionByte105ccdFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r1_1 = frame.at(0).addr();
    *gptr<u8>(r1_1) = u8(r0);
    Grid2x2__for_each_block(0x105ccdu, r1_1, guest::cpu()->r[2], r3);
    Grid2x2__for_each_cell(0x105ccdu, frame.at(0).addr());
}

}  // namespace d_001147a8
GUEST_EXPORT_FRAMED(0x001147a9, d_001147a8::set_option_byte_105ccd, 0x4000);  // pushes {lr} first, as the original

// f_00114810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts scene 0x66; for the current player, sells the shoes and pocket items into the bank and records the balance,
// takes off the set-A items, then continues to 001148c4.
namespace d_00114810 {

inline constexpr guest::Function<0x001148c5, u32(u32, u32, u32, u32)> Town__scatter_items;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x00303660, u32(u32)> EncryptedInt__get;
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x0032cef4, u32(u32)> send_random_seed;
inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> Scene__request_change;
inline constexpr guest::Function<0x005c5bb8, u32(u32)> remove_set_a_worn_items;
inline constexpr guest::Function<0x006b7380, u32(u32, u32)> ClampedCounters__add_to_current_split_0_;
inline constexpr guest::Function<0x006b8cb8, u32(u32, u32)> ClampedCounters__set_current_count;
inline constexpr guest::Function<0x006bced4, u32(u32)> sell_shoes_and_pockets_to_bank;
inline constexpr guest::Function<0x006e08b4, u32(u32)> set_mode_9507f0;

struct __attribute__((packed)) LeaveTownToMainMenuFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(LeaveTownToMainMenuFrame, word_0, 0x0);
GUEST_OFFSET(LeaveTownToMainMenuFrame, word_4, 0x4);
GUEST_SIZE(LeaveTownToMainMenuFrame, 0x18);

void leave_town_to_main_menu(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LeaveTownToMainMenuFrame> frame;  // the original's stack frame
    u32 r0_1 = return_constant_0xac1948_(r0, r1, r2, r3);
    frame->word_0 = 1;
    frame->word_4 = 1;
    u32 r0_3 = main_object_idle(Scene__request_change(r0_1, 0x66u, 0u, 0u));
    if (r0_3 != 0) {
        send_random_seed(r0_3);
        r0_3 = set_mode_9507f0(0u);
    }
    u32 player = get_current_player(r0_3);
    if (player != 0) {
        u32 r0_5 = sell_shoes_and_pockets_to_bank(player);
        u32 r0_7 = EncryptedInt__get(player + 0x6b8cu);
        u32 counter_block = get_counter_block(r0_7);
        u32 counter_block_2 = get_counter_block(ClampedCounters__set_current_count(counter_block, r0_7));
        player = ClampedCounters__add_to_current_split_0_(counter_block_2, r0_5);
    }
    u32 r0_11 = remove_set_a_worn_items(player);
    frame.release();
    Town__scatter_items(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00114810
GUEST_EXPORT(0x00114810, d_00114810::leave_town_to_main_menu);

// f_00114ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 002fd648 with the function 0x10617d and an argument.
namespace d_00114ae0 {

inline constexpr guest::Function<0x002fd649, u32(u32, u32, u32, u32)> Grid2x2__for_each_block_c;

void call_2fd648_with_10617d(u32 r0) {
    Grid2x2__for_each_block_c(0x10617du, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00114ae0
GUEST_EXPORT_FRAMED(0x00114ae1, d_00114ae0::call_2fd648_with_10617d, 0x4010);  // pushes {r4, lr} first, as the original

// f_00114af0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the 16-bit value through the accessor at 0x105bf5.
namespace d_00114af0 {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> Grid2x2__for_each_block;

u32 read_value_105bf5(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u16>(0) = 0;
    Grid2x2__for_each_block(0x105bf5u, frame.at(0).addr(), guest::cpu()->r[2], r3);
    return *frame.at<u16>(0);
}

}  // namespace d_00114af0
GUEST_EXPORT_FRAMED(0x00114af1, d_00114af0::read_value_105bf5, 0x4000);  // pushes {lr} first, as the original

// f_00114b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes three scores and sums them, each limited to 0-100.
namespace d_00114b28 {

inline constexpr u32 global_00a14b1c_address = 0x00a14b1cu;
inline constexpr u32 score_a_address = 0x00a14b24u;
inline constexpr u32 score_b_address = 0x00a14b28u;
inline constexpr u32 score_c_address = 0x00a14b2cu;
inline guest::global<u32, 0x00a14b24> score_a;
inline guest::global<u32, 0x00a14b28> score_b;
inline guest::global<u32, 0x00a14b2c> score_c;
inline constexpr guest::Function<0x002faf8d, u32(u32, u32, u32, u32)> Town__count_block_items;

u32 sum_three_scores_capped_100(u32 r0_unused, u32 r1, u32 r2) {
    Town__count_block_items(global_00a14b1c_address, r1, r2, guest::cpu()->r[3]);
    u32 r0_1 = *score_a;
    if (s32(r0_1) < 0) {
        r0_1 = 0u;
    } else if (s32(r0_1) >= 0x64) {
        r0_1 = 0x64u;
    }
    u32 r1_1 = *score_b;
    if (s32(r1_1) < 0) {
        r1_1 = 0u;
    } else if (s32(r1_1) >= 0x64) {
        r1_1 = 0x64u;
    }
    u32 sum = r0_1 + r1_1;
    u32 r0_2 = *score_c;
    if (s32(r0_2) < 0) {
        guest::cpu()->r[1] = sum;
        return sum;
    }
    if (s32(r0_2) < 0x64) {
        guest::cpu()->r[1] = sum;
        return sum + r0_2;
    }
    guest::cpu()->r[1] = sum;
    return sum + 0x64u;
}

}  // namespace d_00114b28
GUEST_EXPORT_FRAMED(0x00114b29, d_00114b28::sum_three_scores_capped_100, 0x4010);  // pushes {r4, lr} first, as the original

// f_00114bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the 16-bit value through the accessor at 0x105e15.
namespace d_00114bd0 {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> Grid2x2__for_each_block;

u32 read_value_105e15(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u16>(0) = 0;
    Grid2x2__for_each_block(0x105e15u, frame.at(0).addr(), guest::cpu()->r[2], r3);
    return *frame.at<u16>(0);
}

}  // namespace d_00114bd0
GUEST_EXPORT_FRAMED(0x00114bd1, d_00114bd0::read_value_105e15, 0x4000);  // pushes {lr} first, as the original

// f_00114c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00314c74 with the accessor at 0x105c31.
namespace d_00114c70 {

inline constexpr guest::Function<0x00314c75, u32(u32, u32, u32, u32)> Grid2x2__for_each_block_b;

u32 query_105c31() {
    return Grid2x2__for_each_block_b(0x105c31u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00114c70
GUEST_EXPORT_FRAMED(0x00114c71, d_00114c70::query_105c31, 0x4010);  // pushes {r4, lr} first, as the original

// f_00114c80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00314c74 with the accessor at 0x105d05.
namespace d_00114c80 {

inline constexpr guest::Function<0x00314c75, u32(u32, u32, u32, u32)> Grid2x2__for_each_block_b;

u32 query_105d05() {
    return Grid2x2__for_each_block_b(0x105d05u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00114c80
GUEST_EXPORT_FRAMED(0x00114c81, d_00114c80::query_105d05, 0x4010);  // pushes {r4, lr} first, as the original

// f_00114c90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a byte at 0x952b9c.
namespace d_00114c90 {

inline guest::global<u8, 0x00952b9c> global_00952b9c;

void set_byte_952b9c(u32 r0) {
    *global_00952b9c = u8(r0);
}

}  // namespace d_00114c90
GUEST_EXPORT(0x00114c91, d_00114c90::set_byte_952b9c);

// f_00114c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the argument at 0x952bdc and starts kind 0x1e on the four blocks (1-2, 1-2).
namespace d_00114c9c {

inline constexpr u32 block_event_word_address = 0x00952bdcu;
inline constexpr guest::Function<0x002ffc8d, u32(u32, u32, u32, u32)> ItemSet__fill_random;
inline constexpr guest::Function<0x00314ce4, u32(u32, u32, u32, u32)> store_u32_argument_at_0_314ce4;

struct __attribute__((packed)) StartBlockEvent2x2Frame {
    u32 word_0;
};
GUEST_OFFSET(StartBlockEvent2x2Frame, word_0, 0x0);
GUEST_SIZE(StartBlockEvent2x2Frame, 0x4);

void start_block_event_2x2(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<StartBlockEvent2x2Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    store_u32_argument_at_0_314ce4(block_event_word_address, r0, r2, r3);
    u32 j = 0u;
    u32 r6 = 2u;
    do {
        u32 i = 0u;
        do {
            frame->word_0 = r6;
            ItemSet__fill_random(0x1eu, i + 1u, j + 1u, 2u);
            i += 1u;
            guest::preempt();
        } while (s32(i) < 2);
        j += 1u;
        guest::preempt();
    } while (s32(j) < 2);
}

}  // namespace d_00114c9c
GUEST_EXPORT_FRAMED(0x00114c9d, d_00114c9c::start_block_event_2x2, 0x40f0);  // pushes {j, i, r6, r7, lr} first, as the original

// f_00114d00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the villagers for the days since the last play.
namespace d_00114d00 {

struct __attribute__((packed)) Local_00114d00_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00114d00_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00114d00_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00114d00_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_00114d00_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00114d00_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00114d00_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00114d00_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_00114d00_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00114d00_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00114d00_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00114d00_ea_3, word_8, 0x8);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_00114d00_r3_11 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00114d00_r3_11, word_0, 0x0);
GUEST_OFFSET(Local_00114d00_r3_11, word_4, 0x4);
GUEST_OFFSET(Local_00114d00_r3_11, word_8, 0x8);

struct __attribute__((packed)) Local_00114d00_r3_13 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00114d00_r3_13, word_0, 0x0);
GUEST_OFFSET(Local_00114d00_r3_13, word_4, 0x4);
GUEST_OFFSET(Local_00114d00_r3_13, word_8, 0x8);

struct __attribute__((packed)) Local_00114d00_r3_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00114d00_r3_5, word_0, 0x0);
GUEST_OFFSET(Local_00114d00_r3_5, word_4, 0x4);
GUEST_OFFSET(Local_00114d00_r3_5, word_8, 0x8);

inline constexpr guest::Function<0x00103a1d, u32(u32, u32, u32, u32)> Town__update_day_a;
inline constexpr guest::Function<0x00103e39, u32(u32, u32, u32, u32)> Town__update_day_b;
inline constexpr guest::Function<0x00106401, u32(u32, u32, u32, u32)> Town__update_day_c;
inline constexpr guest::Function<0x00107539, u32(u32)> clear_bbs_update_state;
inline constexpr guest::Function<0x001083fd, u32(u32)> update_bbs_if_pending;
inline constexpr guest::Function<0x0020d904, u32(u32, u32)> clear_byte_bits_20d904;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb338, u32(u32)> is_not_sentinel;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32, u32)> days_between;
inline constexpr guest::Function<0x002fd844, u32(u32, u32)> seed_date_random;
inline constexpr guest::Function<0x003081b0, u32(u32, u32)> copy_8_bytes_b;
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x0030ac60, u32(u32, u32, u32, u32)> thunk_0056c798;
inline constexpr guest::Function<0x0030ac64, u32(u32, u32, u32, u32)> thunk_00698e64;
inline constexpr guest::Function<0x0030af68, u32(u32)> thunk_0062cff8;
inline constexpr guest::Function<0x0030af6c, u32(u32)> thunk_0062cfe4;
inline constexpr guest::Function<0x0030af70, u32(u32)> thunk_0056cf4c;
inline constexpr guest::Function<0x0030af74, u32(u32)> thunk_0056cf64;
inline constexpr guest::Function<0x00312acc, u32(u32, u32, u32)> set_time_stamp_returning;
inline constexpr guest::Function<0x00314cec, u32(u32)> GameTime__round_down_to_day_start;

struct __attribute__((packed)) VillagersUpdateSinceLastPlayFrame {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x20];  // (not read or written by name)
};
GUEST_OFFSET(VillagersUpdateSinceLastPlayFrame, word_0, 0x0);
GUEST_OFFSET(VillagersUpdateSinceLastPlayFrame, word_20, 0x20);
GUEST_OFFSET(VillagersUpdateSinceLastPlayFrame, word_24, 0x24);
GUEST_OFFSET(VillagersUpdateSinceLastPlayFrame, word_28, 0x28);
GUEST_SIZE(VillagersUpdateSinceLastPlayFrame, 0x4c);

u32 Villagers__update_since_last_play(u32 villagers, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagersUpdateSinceLastPlayFrame> frame;  // the original's stack frame
    u32 r3_12 = 0;
    gptr<Now> now_2 = gptr<Now>(game_time_now(thunk_0056c798(villagers, r1, r2, r3)));
    u32 r1_2 = now_2->word_0;
    u32 r2_2 = now_2->word_4;
    u32 r0_3 = now_2->word_8;
    frame->word_20 = r1_2;
    frame->word_28 = r0_3;
    frame->word_24 = r2_2;
    set_time_stamp_returning(frame.at(0).addr(), frame.at(0x20).addr(), r2_2);
    GameTime__round_down_to_day_start(frame.at(0).addr());
    make_adjusted_words(frame.at(0x40).addr(), frame.at(0).addr());
    gptr<Local_00114d00_r3_5> r3_5 = gptr<Local_00114d00_r3_5>(frame.at(0x14).addr());
    gptr<Local_00114d00_ea_1> ea_1 = gptr<Local_00114d00_ea_1>(frame.at(0x40).addr());
    u32 r0_7 = ea_1->word_0;
    u32 r1_6 = ea_1->word_4;
    u32 r2_5 = ea_1->word_8;
    r3_5->word_0 = r0_7;
    r3_5->word_4 = r1_6;
    r3_5->word_8 = r2_5;
    u32 save_data = get_save_data(thunk_00698e64(r0_7, r1_6, r2_5, r3_5.addr() + 0xc));
    copy_8_bytes(frame.at(0x30).addr(), save_data + 0x62232u);
    u32 r4_1 = 0u;
    if (is_not_sentinel(frame.at(0x30).addr()) == 0) {
        gptr<Local_00114d00_r3_11> r3_11 = gptr<Local_00114d00_r3_11>(frame.at(8).addr());
        gptr<Local_00114d00_ea_2> ea_2 = gptr<Local_00114d00_ea_2>(frame.at(0x14).addr());
        u32 r1_10 = ea_2->word_4;
        u32 r2_10 = ea_2->word_8;
        r4_1 = 1u;
        r3_11->word_0 = ea_2->word_0;
        r3_11->word_4 = r1_10;
        r3_11->word_8 = r2_10;
        r3_12 = r3_11.addr() + 0xc;
    } else {
        make_adjusted_words(frame.at(0x40).addr(), frame.at(0x30).addr());
        gptr<Local_00114d00_r3_13> r3_13 = gptr<Local_00114d00_r3_13>(frame.at(8).addr());
        gptr<Local_00114d00_ea_3> ea_3 = gptr<Local_00114d00_ea_3>(frame.at(0x40).addr());
        u32 r1_12 = ea_3->word_4;
        u32 r2_11 = ea_3->word_8;
        r3_13->word_0 = ea_3->word_0;
        r3_13->word_4 = r1_12;
        r3_13->word_8 = r2_11;
        r3_12 = r3_13.addr() + 0xc;
    }
    u32 r0_15 = days_between(frame.at(0x14).addr(), frame.at(8).addr(), 1u, r3_12);
    u32 r0_17 = seed_date_random(frame.at(8).addr(), 0x2239u);
    if (villagers != 0) {
        r0_17 = thunk_0062cff8(r0_17);
    }
    clear_bbs_update_state(r0_17);
    frame->word_0 = r4_1;
    Town__update_day_b(villagers, r0_15, frame.at(0x14).addr(), frame.at(8).addr());
    frame->word_0 = r4_1;
    Town__update_day_c(villagers, r0_15, frame.at(0x14).addr(), frame.at(8).addr());
    u32 r0_18 = Town__update_day_a(villagers, r0_15, frame.at(0x14).addr(), frame.at(8).addr());
    update_bbs_if_pending(r0_18);
    if (villagers != 0) {
        thunk_0062cfe4(r0_18);
    }
    u32 time = frame.at(0x38).addr();
    set_time_stamp_returning(time, frame.at(0x14).addr(), guest::cpu()->r[2]);
    u32 data_base = get_data_base(time);
    u32 r0_21 = data_base + 0x621b2u;
    copy_8_bytes_b(r0_21, frame.at(0x38).addr());
    u32 data_base_2 = get_data_base(r0_21);
    u32 r0_23 = data_base_2 + 0x62120u;
    clear_byte_bits_20d904(r0_23, 0x62120u);
    return thunk_0056cf64(thunk_0056cf4c(r0_23));
}

}  // namespace d_00114d00
GUEST_EXPORT_FRAMED(0x00114d01, d_00114d00::Villagers__update_since_last_play, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00114e00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the argument at 0x952bdc.
namespace d_00114e00 {

inline constexpr u32 block_event_word_address = 0x00952bdcu;
inline constexpr guest::Function<0x00314ce4, u32(u32, u32)> store_u32_argument_at_0_314ce4;

void set_word_952bdc(u32 r0) {
    store_u32_argument_at_0_314ce4(block_event_word_address, r0);
}

}  // namespace d_00114e00
GUEST_EXPORT_FRAMED(0x00114e01, d_00114e00::set_word_952bdc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00114e10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random block (of the 5 x 4 whose kind qualifies), starts kind 1 there and kind 0x1e on a random one of the
// four corner blocks.
namespace d_00114e10 {

inline constexpr u32 random_block_event_address = 0x00952ba0u;
inline guest::global<u32, 0x00952ba0> random_block_event;
inline constexpr guest::Function<0x002fc25c, u32(u32, u32, u32, u32)> second_random_below;
inline constexpr guest::Function<0x002ffc18, u32(u32, u32, u32, u32)> block_kind_is_in_list_b_or_category_24_28;
inline constexpr guest::Function<0x002ffc8d, u32(u32, u32, u32, u32)> ItemSet__fill_random;

struct __attribute__((packed)) StartEventOnRandomBlockFrame {
    u32 word_0;
};
GUEST_OFFSET(StartEventOnRandomBlockFrame, word_0, 0x0);
GUEST_SIZE(StartEventOnRandomBlockFrame, 0x4);

u32 start_event_on_random_block(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StartEventOnRandomBlockFrame> frame;  // the original's stack frame
    u32 r0_4 = 0;
    frame->word_0 = r3;
    u32 r0_2 = second_random_below(*random_block_event, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r7 = 0u;
    u32 r6 = r0_2;
    u32 j = r7;
    do {
        u32 i = 0u;
        do {
            r0_4 = block_kind_is_in_list_b_or_category_24_28(i + 1u, j + 1u, 1u, r3);
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                if (r7 == r6) {
                    frame->word_0 = 3;
                    ItemSet__fill_random(1u, i + 1u, j + 1u, 1u);
                    u32 r0_5 = second_random_below(2u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    u32 r0_6 = second_random_below(2u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    frame->word_0 = 3;
                    return ItemSet__fill_random(0x1eu, r0_6 + 1u, r0_5 + 1u, 1u);
                }
                r7 += 1u;
            }
            i += 1u;
            guest::preempt();
        } while (i < 5u);
        j += 1u;
        guest::preempt();
    } while (j < 4u);
    return r0_4;
}

}  // namespace d_00114e10
GUEST_EXPORT_FRAMED(0x00114e11, d_00114e10::start_event_on_random_block, 0x40f0);  // pushes {i, j, r6, r7, lr} first, as the original

// f_00116cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the value through the accessor at 0x105971 and applies it.
namespace d_00116cdc {

inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> Grid2x2__for_each_block;
inline constexpr guest::Function<0x002fea95, u32(u32, u32)> Grid2x2__for_each_cell;

void clear_value_105971() {
    Grid2x2__for_each_block(0x105971u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    Grid2x2__for_each_cell(0x105971u, 0u);
}

}  // namespace d_00116cdc
GUEST_EXPORT_FRAMED(0x00116cdd, d_00116cdc::clear_value_105971, 0x4010);  // pushes {r4, lr} first, as the original

// f_00116cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the daily update (00114d00), resets each existing player's record at +0x5498 and resets the two global blocks.
namespace d_00116cf4 {

inline constexpr guest::Function<0x00114d01, u32(u32, u32, u32, u32)> Villagers__update_since_last_play;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> player_at;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x00308238, u32(u32)> reset_global_block_a;
inline constexpr guest::Function<0x003082bc, u32(u32, u32, u32, u32)> reset_global_block_b;
inline constexpr guest::Function<0x0030bd90, u32(u32, u32, u32, u32)> thunk_00582cc0;

struct __attribute__((packed)) ResetDailyPlayerRecordsFrame {
    u32 word_0;
};
GUEST_OFFSET(ResetDailyPlayerRecordsFrame, word_0, 0x0);
GUEST_SIZE(ResetDailyPlayerRecordsFrame, 0x4);

u32 reset_daily_player_records(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ResetDailyPlayerRecordsFrame> frame;  // the original's stack frame
    u32 r0_4 = 0;
    frame->word_0 = r3;
    u32 data_base = get_data_base(Villagers__update_since_last_play(1u, r1, guest::cpu()->r[2], r3));
    r3 = guest::cpu()->r[3];
    u32 r6 = 0x55a6u;
    u32 r7 = 0x5498u;
    u32 i = 0u;
    frame->word_0 = data_base + 0x20u;
    do {
        r0_4 = player_at(frame->word_0, uxtb(i), guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        u32 r5_1 = r0_4;
        if (r0_4 != 0) {
            r0_4 = PersonalId__is_set(r5_1 + r6, guest::cpu()->r[1], guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                r0_4 = thunk_00582cc0(r5_1 + r7, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                r3 = guest::cpu()->r[3];
            }
        }
        i += 1u;
        guest::preempt();
    } while (i < 4u);
    return reset_global_block_a(reset_global_block_b(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], r3));
}

}  // namespace d_00116cf4
GUEST_EXPORT_FRAMED(0x00116cf5, d_00116cf4::reset_daily_player_records, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_00116ebe: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records `count` and `bits` and counts the set bits among the first `count`.
namespace d_00116ebe {

struct __attribute__((packed)) BitCount {
    u32 word_0;
    u32 bits;
    u32 word_8;
};
GUEST_OFFSET(BitCount, word_0, 0x0);
GUEST_OFFSET(BitCount, bits, 0x4);
GUEST_OFFSET(BitCount, word_8, 0x8);


void BitCount__init(gptr<BitCount> counter, u32 count, u32 bits) {
    u32 r4 = 0;
    u32 res_1 = 0;
    u32 r3 = 0u;
    u32 r6 = 1u;
    counter->word_0 = count;
    counter->bits = bits;
    counter->word_8 = r3;
    if (s32(count) > 0) {
        r4 = count & 1u;
        if (s32(r4) > 0) {
            goto L_116eda;
        }
        goto L_116eee;
    }
    r4 = 0u;
    goto L_116eee;
L_116eda:;
    res_1 = lsl_r(r6, r3 & 0xff);
    if ((res_1 & bits) != 0) {
        counter->word_8 = counter->word_8 + 1u;
    }
    r3 += 1u;
    if (s32(r3) < s32(r4)) {
        guest::preempt();
        goto L_116eda;
    }
L_116eee:;
    if (s32(r4) < s32(count)) {
        do {
            if ((lsl_r(r6, r4 & 0xff) & bits) != 0) {
                counter->word_8 = counter->word_8 + 1u;
            }
            if ((lsl_r(r6, (r4 + 1u) & 0xff) & bits) != 0) {
                counter->word_8 = counter->word_8 + 1u;
            }
            r4 += 2u;
            guest::preempt();
        } while (s32(r4) < s32(count));
    }
}

}  // namespace d_00116ebe
GUEST_EXPORT_FRAMED(0x00116ebf, d_00116ebe::BitCount__init, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00116f2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0030be88 and returns its object.
namespace d_00116f2c {

inline constexpr guest::Function<0x0030be88, u32(u32, u32, u32, u32)> thunk_007ca5e0;

u32 call_0030be88_return_self() {
    thunk_007ca5e0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_00116f2c
GUEST_EXPORT_FRAMED(0x00116f2d, d_00116f2c::call_0030be88_return_self, 0x4010);  // pushes {r4, lr} first, as the original

// f_00117674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the handlers for the current scene's kind (0x20 / 0x10000000 -> 0030c3a0, 0x200 -> 0030c3a4).
namespace d_00117674 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x00308340, u32(u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x0030c398, u32(u32, u32, u32, u32)> thunk_005876c8;
inline constexpr guest::Function<0x0030c39c, u32(u32)> veneer_5b59c4;
inline constexpr guest::Function<0x0030c3a0, u32(u32)> thunk_00694660;
inline constexpr guest::Function<0x0030c3a4, u32(u32)> thunk_0069471c;

void update_scene_kind_handlers(u32 r0, u32 r1) {
    u32 r0_3 = veneer_5b59c4(return_constant_0xac1948_(thunk_005876c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3])));
    u32 scene_4 = current_scene_id(r0_3);
    u32 scene_flagged_3 = scene_has_flags(0x20u, scene_4);
    if (scene_flagged_3 == 0) {
        u32 scene_5 = current_scene_id(scene_flagged_3);
        scene_flagged_3 = scene_has_flags(1u << 0x1c, scene_5);
        if (scene_flagged_3 == 0) {
            u32 scene_6 = current_scene_id(scene_flagged_3);
            u32 scene_flagged_4 = scene_has_flags(1u << 9, scene_6);
            if (scene_flagged_4 == 0) {
                return;
            }
            thunk_0069471c(scene_flagged_4);
            return;
        }
    }
    thunk_00694660(scene_flagged_3);
}

}  // namespace d_00117674
GUEST_EXPORT_FRAMED(0x00117675, d_00117674::update_scene_kind_handlers, 0x4010);  // pushes {r4, lr} first, as the original

// f_001176c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Chooses the villager's spot near its house or the main object.
namespace d_001176c4 {

struct __attribute__((packed)) Local_001176c4_r1_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_001176c4_r1_2, byte_0, 0x0);

struct __attribute__((packed)) Local_001176c4_r4_1 {
    u8 unknown_0[0x19];  // (not used here)
    u8 byte_19;
};
GUEST_OFFSET(Local_001176c4_r4_1, byte_19, 0x19);

inline constexpr u32 global_0094f354_address = 0x0094f354u;
inline constexpr guest::Function<0x00114e11, u32(u32)> start_event_on_random_block;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x0030560c, u32(u32, u32, u32)> modulo_10;
inline constexpr guest::Function<0x00307374, u32(u32, u32, u32)> cell_of_position;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0030c3a8, u32(u32)> list_position_of_mode_veneer;
inline constexpr guest::Function<0x0030c3ac, u32(u32, u32)> find_object_veneer;
inline constexpr guest::Function<0x0030c3b0, u32(u32)> read_field_u16_0x0__00752914_veneer;
inline constexpr guest::Function<0x0030c3b4, u32(u32)> veneer_605628;
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> CellGrid__cell_at;

struct __attribute__((packed)) VillagerChooseSpotFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(VillagerChooseSpotFrame, word_0, 0x0);
GUEST_OFFSET(VillagerChooseSpotFrame, word_4, 0x4);
GUEST_SIZE(VillagerChooseSpotFrame, 0xc);

u32 Villager__choose_spot(u32 villager, u32 r1, u32 r2) {
    guest::StackFrameOf<VillagerChooseSpotFrame> frame;  // the original's stack frame
    u32 r0_1 = mode_above_1(villager, r1, r2, guest::cpu()->r[3]);
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        u32 r0_2 = main_object_idle(r0_1, guest::cpu()->r[1], r2_1);
        r2_1 = guest::cpu()->r[2];
        if (r0_2 == 0) {
            return r0_2;
        }
    }
    gptr<Local_001176c4_r4_1> r4_1 = gptr<Local_001176c4_r4_1>(villager + 0x80u);
    u32 r0_3 = r4_1->byte_19;
    if (r0_3 == 0) {
        u32 now_2 = game_time_now(r0_3, guest::cpu()->r[1], r2_1);
        gptr<Local_001176c4_r1_2> r1_2 = gptr<Local_001176c4_r1_2>(global_0094f354_address);
        r2_1 = s8(r1_2->byte_0);
        u32 r0_5 = sxtb(*gptr<u32>(now_2 + 8u));
        if (r2_1 != r0_5) {
            r1_2->byte_0 = u8(r0_5);
            u32 digit_2 = modulo_10(r0_5, r1_2.addr(), r2_1);
            r1_2 = gptr<Local_001176c4_r1_2>(guest::cpu()->r[1]);
            r2_1 = guest::cpu()->r[2];
            if (digit_2 == 3u) {
                r4_1->byte_19 = 1;
                goto L_117706;
            }
        }
        u32 r0_7 = r4_1->byte_19;
        if (r0_7 == 0) {
            guest::cpu()->r[1] = r1_2.addr();
            return r0_7;
        }
    }
L_117706:;
    u32 r0_8 = talk_state_matches(0xeu, 0u, r2_1);
    if (r0_8 != 0) {
        return r0_8;
    }
    u32 scene_3 = current_scene_id(r0_8);
    u32 scene_flagged_2 = scene_has_flags(1u << 0xb, scene_3);
    if (scene_flagged_2 != 0) {
        return scene_flagged_2;
    }
    u32 scene_4 = current_scene_id(scene_flagged_2);
    u32 r0_13 = list_position_of_mode_veneer(scene_4);
    if (r0_13 != 0x1eu) {
        if (r0_13 == 1u) {
            r0_13 = find_object_veneer(4u, 0u);
            if (r0_13 == 0) {
                r4_1->byte_19 = 0;
                return r0_13;
            }
            cell_of_position(frame.at(0).addr(), frame.at(4).addr(), r0_13 + 0x14u);
            r0_13 = read_map_table(1u);
            if (r0_13 == 0) {
                r4_1->byte_19 = 0;
                return r0_13;
            }
            r0_13 = CellGrid__cell_at(r0_13, frame->word_0, frame->word_4);
            if (r0_13 == 0) {
                r4_1->byte_19 = 0;
                return r0_13;
            }
            r0_13 = veneer_605628(read_field_u16_0x0__00752914_veneer(r0_13));
            if (r0_13 == 0xbu || r0_13 == 0xcu || r0_13 == 0xdu || r0_13 == 0x10u) {
                r4_1->byte_19 = 0;
                return r0_13;
            }
        }
        r4_1->byte_19 = 0;
        return start_event_on_random_block(r0_13);
    }
    r4_1->byte_19 = 0;
    return r0_13;
}

}  // namespace d_001176c4
GUEST_EXPORT_FRAMED(0x001176c5, d_001176c4::Villager__choose_spot, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00117808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// An entry of the table at 0x95029c, by index.
namespace d_00117808 {

inline constexpr u32 table_95029c_address = 0x0095029cu;

u32 table_95029c_entry(u32 index) {
    guest::cpu()->r[1] = table_95029c_address;
    return gptr<u32>(table_95029c_address)[index];
}

}  // namespace d_00117808
GUEST_EXPORT(0x00117809, d_00117808::table_95029c_entry);

// f_00117ac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In scenes with bit 0x80: sets bit 6 of +0x570a of the current player.
namespace d_00117ac0 {

inline constexpr guest::Function<0x001e23f0, u32(u32, u32)> assign_bit6_of_byte0a_1e23f0;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;

u32 mark_current_player_bit_6_of_570a(u32 r0) {
    u32 scene_2 = current_scene_id(r0);
    u32 scene_flagged_2 = scene_has_flags(0x80u, scene_2);
    if (scene_flagged_2 == 0) {
        return scene_flagged_2;
    }
    u32 player = get_current_player(scene_flagged_2);
    if (player == 0) {
        return player;
    }
    u32 r0_4 = player + (0x57u << 8);
    assign_bit6_of_byte0a_1e23f0(r0_4, 1u);
    return r0_4;
}

}  // namespace d_00117ac0
GUEST_EXPORT_FRAMED(0x00117ac1, d_00117ac0::mark_current_player_bit_6_of_570a, 0x4010);  // pushes {r4, lr} first, as the original

// f_00118164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the NPC manager: its guard boxes, resource loaders, heaps and NPC tables.
namespace d_00118164 {

inline constexpr u32 vtable_BsNpcMgr = 0x008f8960u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x0030c860, u32(u32, u32)> thunk_007ca59c;
inline constexpr guest::Function<0x0030c864, u32(u32, u32)> thunk_007ca62c;
inline constexpr guest::Function<0x003171b0, u32(u32)> Base__virtual_0;
inline constexpr guest::Function<0x00317d8c, u32(u32, u32, u32)> bgcheck__GuardBox__destructor;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32)> ssys__ma__HeapAllocator__destructor;
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32)> g3d__ResourceLoader__destructor;

u32 BsNpcMgr__destructor(gptr<BsNpcMgr> bs_npc_mgr) {
    bs_npc_mgr->vtable = vtable_BsNpcMgr;
    destroy_array_elements(bs_npc_mgr.addr() + 0xf0f4u, 0x52f280u, 0x10u, 2u);
    destroy_array_elements(bs_npc_mgr.addr() + 0xf02cu, 0x317d8cu, 0x4cu, 2u);
    bgcheck__GuardBox__destructor(bs_npc_mgr.addr() + 0xefe0u, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 guard_box = bs_npc_mgr.addr() + 0xef94u;
    bgcheck__GuardBox__destructor(guard_box, 0xef94u, 0xffff1020u);
    u32 r0_5 = guard_box - 0x480u;
    ssys__ma__HeapAllocator__destructor(r0_5, 0xeb14u, 0xffff106cu);
    u32 r0_6 = r0_5 - 0x108u;
    g3d__ResourceLoader__destructor(r0_6, 0xea0cu, 0xffff14ecu);
    u32 r0_7 = r0_6 - 8u;
    ssys__ma__HeapAllocator__destructor(r0_7, 0xea04u, 0xffff15f4u);
    u32 r0_8 = r0_7 - 0x108u;
    g3d__ResourceLoader__destructor(r0_8, 0xe8fcu, 0xffff15fcu);
    u32 r0_9 = r0_8 - 8u;
    ssys__ma__HeapAllocator__destructor(r0_9, 0xe8f4u, 0xffff1704u);
    u32 resource_set = r0_9 - 0x108u;
    g3d__ResourceLoader__destructor(resource_set, 0xe7ecu, 0xffff170cu);
    u32 r0_11 = resource_set - 8u;
    ssys__ma__HeapAllocator__destructor(r0_11, 0xe7e4u, 0xffff1814u);
    u32 r0_12 = r0_11 - 0x108u;
    g3d__ResourceLoader__destructor(r0_12, 0xe6dcu, 0xffff181cu);
    u32 r0_13 = r0_12 - 8u;
    ssys__ma__HeapAllocator__destructor(r0_13, 0xe6d4u, 0xffff1924u);
    u32 r0_14 = r0_13 - 0x108u;
    g3d__ResourceLoader__destructor(r0_14, 0xe5ccu, 0xffff192cu);
    u32 r0_18 = thunk_007ca62c(thunk_007ca59c(r0_14 - 0x72dcu, 0x72f0u) - 0x72dcu, 0xffff8d10u);
    Base__virtual_0(r0_18);
    return r0_18 - 0x14u;
}

}  // namespace d_00118164
GUEST_EXPORT_FRAMED(0x00118165, d_00118164::BsNpcMgr__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011872a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets flag 0x40 of the bits at +0x1aa.
namespace d_0011872a {

inline constexpr guest::Function<0x00318540, u32(u32, u32)> set_half_bits;

u32 set_flag_40_of_1aa(u32 r0) {
    u32 r0_1 = r0 + 0x1aau;
    set_half_bits(r0_1, 0x40u);
    return r0_1;
}

}  // namespace d_0011872a
GUEST_EXPORT_FRAMED(0x0011872b, d_0011872a::set_flag_40_of_1aa, 0x4010);  // pushes {r4, lr} first, as the original

// f_00118738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a 0x1ac-byte record, marks it used and stamps it with the date.
namespace d_00118738 {

struct __attribute__((packed)) Record1ac {
    u8 unknown_0[0x1aa];  // (not used here)
    u16 half_1aa;
};
GUEST_OFFSET(Record1ac, half_1aa, 0x1aa);

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x0030f56c, u32(u32, u32)> narrow_date;

void Record1ac__init(gptr<Record1ac> record, u32 date) {
    clear(record.addr(), 0x1acu);
    record->half_1aa = 1;
    narrow_date(record.addr() + 0x1a6u, date);
}

}  // namespace d_00118738
GUEST_EXPORT_FRAMED(0x00118739, d_00118738::Record1ac__init, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011875c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a 0x1ac-byte record.
namespace d_0011875c {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

void Record1ac__clear() {
    clear(guest::cpu()->r[0], 0x1acu);
}

}  // namespace d_0011875c
GUEST_EXPORT_FRAMED(0x0011875d, d_0011875c::Record1ac__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_00118770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets flag 2 << `index` (2, 4, 8 or 0x10 only) of the bits at +0x1aa.
namespace d_00118770 {

inline constexpr guest::Function<0x00318540, u32(u32, u32)> set_half_bits;

u32 set_flag_of_1aa(u32 r0, u32 r1) {
    u32 r1_1 = uxth(lsl_r(2u, r1 & 0xff));
    if (r1_1 != 2u && r1_1 != 4u && r1_1 != 8u && r1_1 != 0x10u) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    u32 r0_1 = r0 + 0x1aau;
    set_half_bits(r0_1, r1_1);
    return r0_1;
}

}  // namespace d_00118770
GUEST_EXPORT_FRAMED(0x00118771, d_00118770::set_flag_of_1aa, 0x4010);  // pushes {r4, lr} first, as the original

// f_00118792: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a word pointer to +0x24 of the second argument.
namespace d_00118792 {

inline constexpr guest::Function<0x0030cc28, u32(u32, u32)> script__WordPtrSv__WordPtrSv_0030cc28;

void construct_word_ptr_at_24(u32 r0_unused, u32 r1) {
    script__WordPtrSv__WordPtrSv_0030cc28(guest::cpu()->r[0], r1 + 0x24u);
}

}  // namespace d_00118792
GUEST_EXPORT_FRAMED(0x00118793, d_00118792::construct_word_ptr_at_24, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011879c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 001187a4.
namespace d_0011879c {

inline constexpr guest::Function<0x001187a5, u32(u32, u32)> Player__set_flag_1aa;

void call_001187a4() {
    Player__set_flag_1aa(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0011879c
GUEST_EXPORT(0x0011879c, d_0011879c::call_001187a4);

// f_001187b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Search candidates of kind 102 in the player's records at 0x8ae0.
namespace d_001187b4 {

inline constexpr guest::Function<0x0024a8bc, u32(u32, u32, u32, u32)> SearchCand_102___SearchCand;

u32 player_operation_d(u32 r0, u32 r1, u32 r2) {
    return SearchCand_102___SearchCand(r0 + 0x8ae0u, r0, r1, r2);
}

}  // namespace d_001187b4
GUEST_EXPORT_FRAMED(0x001187b5, d_001187b4::player_operation_d, 0x4010);  // pushes {r4, lr} first, as the original

// f_00118a5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0030ce50 and returns its object.
namespace d_00118a5c {

inline constexpr guest::Function<0x0030ce50, u32(u32, u32, u32, u32)> thunk_007ca550;

u32 call_0030ce50_return_self() {
    thunk_007ca550(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_00118a5c
GUEST_EXPORT_FRAMED(0x00118a5d, d_00118a5c::call_0030ce50_return_self, 0x4010);  // pushes {r4, lr} first, as the original

// f_00118a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the weather record and generates its first days (00118a94).
namespace d_00118a64 {

inline constexpr guest::Function<0x00118a95, u32(u32)> WeatherRecord__update;
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> clear_inner;

u32 WeatherRecord__init_new(u32 weather_record) {
    clear_inner(weather_record, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return WeatherRecord__update(weather_record);
}

}  // namespace d_00118a64
GUEST_EXPORT_FRAMED(0x00118a65, d_00118a64::WeatherRecord__init_new, 0x4010);  // pushes {r4, lr} first, as the original

// f_00118a74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the weather record (+8 = -1, +9 and +0xa = 0x34).
namespace d_00118a74 {

struct __attribute__((packed)) WeatherRecord {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(WeatherRecord, byte_8, 0x8);
GUEST_OFFSET(WeatherRecord, byte_9, 0x9);
GUEST_OFFSET(WeatherRecord, byte_a, 0xa);

inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;

void WeatherRecord__clear(gptr<WeatherRecord> weather_record) {
    clear_inner(weather_record.addr());
    u32 r1_1 = ~0u;
    weather_record->byte_8 = u8(r1_1);
    weather_record->byte_9 = 0x34;
    weather_record->byte_a = 0x34;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00118a74
GUEST_EXPORT_FRAMED(0x00118a75, d_00118a74::WeatherRecord__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_00118a94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Brings the weather record up to today, generating the weather pattern for the days that passed.
namespace d_00118a94 {

struct __attribute__((packed)) Local_00118a94_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00118a94_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00118a94_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00118a94_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_00118a94_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00118a94_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00118a94_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00118a94_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_00118a94_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00118a94_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00118a94_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00118a94_ea_3, word_8, 0x8);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_00118a94_r3_10 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00118a94_r3_10, word_0, 0x0);
GUEST_OFFSET(Local_00118a94_r3_10, word_4, 0x4);
GUEST_OFFSET(Local_00118a94_r3_10, word_8, 0x8);

struct __attribute__((packed)) Local_00118a94_r3_14 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00118a94_r3_14, word_0, 0x0);
GUEST_OFFSET(Local_00118a94_r3_14, word_4, 0x4);
GUEST_OFFSET(Local_00118a94_r3_14, word_8, 0x8);

struct __attribute__((packed)) Local_00118a94_r3_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00118a94_r3_4, word_0, 0x0);
GUEST_OFFSET(Local_00118a94_r3_4, word_4, 0x4);
GUEST_OFFSET(Local_00118a94_r3_4, word_8, 0x8);

inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> is_not_sentinel;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32)> days_between;
inline constexpr guest::Function<0x00305f2c, u32(u32)> read_global_object_byte;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x0030ce54, u32(u32, u32)> check_stamp_time_veneer;
inline constexpr guest::Function<0x0030ce58, u32(u32)> GameTime__set_now_veneer;
inline constexpr guest::Function<0x0030ce5c, u32(u32, u32, u32, u32)> seeded_event_hour_veneer;
inline constexpr guest::Function<0x00312ab8, u32(u32, u32, u32, u32)> TimeStamp__advance_veneer;
inline constexpr guest::Function<0x00318568, u32(u32, u32, u32, u32)> generated_weather_pattern;

struct __attribute__((packed)) WeatherRecordUpdateFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0xc];  // (not read or written by name)
};
GUEST_OFFSET(WeatherRecordUpdateFrame, word_0, 0x0);
GUEST_OFFSET(WeatherRecordUpdateFrame, word_c, 0xc);
GUEST_OFFSET(WeatherRecordUpdateFrame, word_10, 0x10);
GUEST_OFFSET(WeatherRecordUpdateFrame, word_14, 0x14);
GUEST_SIZE(WeatherRecordUpdateFrame, 0x24);

u32 WeatherRecord__update(u32 weather_record, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<WeatherRecordUpdateFrame> frame;  // the original's stack frame
    u32 r5_1 = 0;
    u32 r0_14 = 0;
    u32 r0_18 = 0;
    u32 r0_1 = is_not_sentinel(weather_record, r1, r2, r3);
    if (r0_1 != 0) {
        r0_1 = check_stamp_time_veneer(weather_record, 1u);
        if (r0_1 != 0) {
            return 0u;
        }
    }
    if (read_global_object_byte(r0_1) != 3u) {
        r5_1 = 1u;
        if (is_not_sentinel(weather_record, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
            goto L_118b06;
        }
        make_adjusted_words(frame.at(0x18).addr(), weather_record);
        gptr<Local_00118a94_r3_4> r3_4 = gptr<Local_00118a94_r3_4>(frame.at(0).addr());
        gptr<Local_00118a94_ea_1> ea_1 = gptr<Local_00118a94_ea_1>(frame.at(0x18).addr());
        u32 r1_3 = ea_1->word_4;
        u32 r2_4 = ea_1->word_8;
        r3_4->word_0 = ea_1->word_0;
        r3_4->word_4 = r1_3;
        r3_4->word_8 = r2_4;
        u32 r0_6 = TimeStamp__move_to_day_start(frame.at(0).addr(), r1_3, r2_4, r3_4.addr() + 0xc);
        gptr<Now> now_2 = gptr<Now>(game_time_now(r0_6));
        u32 r2_6 = now_2->word_4;
        u32 r1_5 = now_2->word_0;
        u32 r0_8 = now_2->word_8;
        frame->word_10 = r2_6;
        frame->word_c = r1_5;
        frame->word_14 = r0_8;
        TimeStamp__move_to_day_start(frame.at(0xc).addr(), r1_5, r2_6, guest::cpu()->r[3]);
        if (days_between(frame.at(0xc).addr(), frame.at(0).addr(), 1u) == 1u) {
            r5_1 = 0u;
            goto L_118b06;
        }
        goto L_118b06;
    }
    return 0u;
L_118b06:;
    GameTime__set_now_veneer(weather_record);
    make_adjusted_words(frame.at(0x10).addr(), weather_record);
    gptr<Local_00118a94_r3_10> r3_10 = gptr<Local_00118a94_r3_10>(frame.at(4).addr());
    gptr<Local_00118a94_ea_2> ea_2 = gptr<Local_00118a94_ea_2>(frame.at(0x10).addr());
    u32 r1_7 = ea_2->word_4;
    u32 r2_8 = ea_2->word_8;
    r3_10->word_0 = ea_2->word_0;
    r3_10->word_4 = r1_7;
    r3_10->word_8 = r2_8;
    if (r5_1 != 0) {
        r0_14 = generated_weather_pattern(frame.at(4).addr(), r1_7, r2_8, r3_10.addr() + 0xc);
    } else {
        r0_14 = *gptr<u8>(weather_record + 0xau);
    }
    *gptr<u8>(weather_record + 9u) = u8(r0_14);
    frame->word_0 = 0;
    TimeStamp__advance_veneer(frame.at(4).addr(), 1u, 0u, 0u);
    u32 r0_17 = generated_weather_pattern(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(weather_record + 0xau) = u8(r0_17);
    if (*gptr<u8>(weather_record + 9u) > 4u) {
        r0_18 = ~0u;
    } else {
        make_adjusted_words(frame.at(0xc).addr(), weather_record);
        gptr<Local_00118a94_r3_14> r3_14 = gptr<Local_00118a94_r3_14>(frame.at(0).addr());
        gptr<Local_00118a94_ea_3> ea_3 = gptr<Local_00118a94_ea_3>(frame.at(0xc).addr());
        u32 r1_10 = ea_3->word_4;
        u32 r2_11 = ea_3->word_8;
        r3_14->word_0 = ea_3->word_0;
        r3_14->word_4 = r1_10;
        r3_14->word_8 = r2_11;
        r0_18 = seeded_event_hour_veneer(frame.at(0).addr(), 0u, r2_11, r3_14.addr() + 0xc);
    }
    *gptr<u8>(weather_record + 8u) = u8(r0_18);
    return 1u;
}

}  // namespace d_00118a94
GUEST_EXPORT_FRAMED(0x00118a95, d_00118a94::WeatherRecord__update, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00118b70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the first unused record of 15 (0x1ac bytes each); 15 when all are used.
namespace d_00118b70 {


u32 first_unused_record_1ac(u32 index) {
    u32 r1_1 = 0;
    u32 records = index;
    index = 0u;
    do {
        r1_1 = u32(*gptr<u16>(0x1acu * index + records + 0x1aau)) & 1u;
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return index;
        }
        index += 1u;
        guest::preempt();
    } while (s32(index) < 0xf);
    guest::cpu()->r[1] = r1_1;
    return index;
}

}  // namespace d_00118b70
GUEST_EXPORT(0x00118b71, d_00118b70::first_unused_record_1ac);

// f_00118e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the valid villager records.
namespace d_00118e94 {

struct __attribute__((packed)) Local_00118e94_ea_1 {
    u32 villagers;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00118e94_ea_1, villagers, 0x0);
GUEST_OFFSET(Local_00118e94_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00118e94_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00118e94_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00118e94_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00118e94_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00118e94_ea_1, word_18, 0x18);

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;

u32 Villagers__count_valid(u32 villagers, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 i = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    gptr<Local_00118e94_ea_1> ea_1 = gptr<Local_00118e94_ea_1>(r13 - 0x1c);
    ea_1->villagers = villagers;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = i;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    r13 = ea_1.addr() - 4u;
    i = 0u;
    r7 = 0x2518u;
    r6 = 0x25u << 8;
    r4 = villagers;
    do {
        guest::cpu()->r[13] = r13;
        u32 is_villager = is_villager_record(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (is_villager != 0) {
            u32 r0_2 = *gptr<u32>(r4 + r6 + 0x10u);
            r1 = r0_2 >> 1u & 1u;
            if (r1 != 0) {
                r1 = *gptr<u32>(r13 + 8u);
                if (r1 != 0) {
                    if ((r0_2 & 1u) != 0u) {
                        goto L_118ed6;
                    }
                } else if ((r0_2 & 1u) == 0u) {
                    goto L_118ed6;
                }
            }
        }
        i += 1u;
        r4 += r7;
        guest::preempt();
    } while (s32(i) < 0xa);
    r13 += 0xcu;
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);
    tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return ~0u;
L_118ed6:;
    r13 += 0xcu;
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_2 = *gptr<u32>(r13 + 4);
    u32 r6_2 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);
    u32 tpc_2 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return i;
}

}  // namespace d_00118e94
GUEST_EXPORT(0x00118e95, d_00118e94::Villagers__count_valid);

// f_00118f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value (00318d8c) for `index` (below 3) of the moving record at +0x173ec when it is in state 0x12; -1 otherwise.
namespace d_00118f18 {

inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x00318d8c, u32(u32, u32)> byte_56_at;

u32 VillagerPart__moving_record_value(u32 villager_part, u32 r1) {
    u32 r6_1 = r1;
    if (r1 < 3u) {
        u32 r5_1 = villager_part + 0x173ecu;
        u32 r0_1 = r5_1 + 0x46u;
        u32 r0_2 = SavedRecordInner__has_value(r0_1, 0x173ecu);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0 && *gptr<u8>(r0_1 + 8u) == 0x12u) {
            return byte_56_at(r5_1, r6_1);
        }
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00118f18
GUEST_EXPORT_FRAMED(0x00118f19, d_00118f18::VillagerPart__moving_record_value, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00118f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the first of 16 16-bit slots (from +0x17656) holding 0xffff; 16 when none.
namespace d_00118f7c {

struct __attribute__((packed)) Local_00118f7c_r4_1 {
    u8 unknown_0[0x16];  // (not used here)
    u16 half_16;
    u16 half_18;
};
GUEST_OFFSET(Local_00118f7c_r4_1, half_16, 0x16);
GUEST_OFFSET(Local_00118f7c_r4_1, half_18, 0x18);


u32 first_empty_slot_of_16(u32 index) {
    u32 r2 = 0x17640u;
    u32 r1 = 0xffffu;
    u32 base = index;
    index = 0u;
    do {
        gptr<Local_00118f7c_r4_1> r4_1 = gptr<Local_00118f7c_r4_1>((index << 1) + base + r2);
        if (r4_1->half_16 == r1) {
            guest::cpu()->r[1] = r1;
            return index;
        }
        if (r4_1->half_18 == r1) {
            guest::cpu()->r[1] = r1;
            return index + 1u;
        }
        index += 2u;
        guest::preempt();
    } while (s32(index) < 0x10);
    guest::cpu()->r[1] = r1;
    return 0x10u;
}

}  // namespace d_00118f7c
GUEST_EXPORT_FRAMED(0x00118f7d, d_00118f7c::first_empty_slot_of_16, 0x30);  // pushes {r4, r5} first, as the original

// f_00118fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the first of the 10 villagers whose flags (+0x2510) mark it (bit 0 without bit 1, or bits 0x600); -1
// when none.
namespace d_00118fb4 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x0031118c, u32(u32, u32, u32, u32)> flags_2510_has_600;

struct __attribute__((packed)) FirstFlaggedVillagerFrame {
    u32 word_0;
};
GUEST_OFFSET(FirstFlaggedVillagerFrame, word_0, 0x0);
GUEST_SIZE(FirstFlaggedVillagerFrame, 0x4);

u32 first_flagged_villager(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<FirstFlaggedVillagerFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 index = 0u;
    u32 r7 = 0x2518u;
    u32 r6 = 0x25u << 8;
    u32 villager = r0;
    do {
        u32 is_villager = is_villager_record(villager, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (is_villager != 0) {
            u32 r0_2 = *gptr<u32>(villager + r6 + 0x10u);
            r1 = r0_2 << 0x1f;
            if (r1 != 0) {
                if ((r0_2 & 0x2u) == 0) {
                    guest::cpu()->r[1] = r1;
                    return index;
                }
            }
            u32 r0_3 = flags_2510_has_600(villager, r1, guest::cpu()->r[2], r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (r0_3 == 0) {
                goto L_118fe4;
            }
            return index;
        }
L_118fe4:;
        index += 1u;
        villager += r7;
        guest::preempt();
    } while (s32(index) < 0xa);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00118fb4
GUEST_EXPORT_FRAMED(0x00118fb5, d_00118fb4::first_flagged_villager, 0x40f0);  // pushes {villager, index, r6, r7, lr} first, as the original

// f_00118ff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the main object is idle: the visitor record (+0x173a0 for kinds 0xe/0xf, +0x173c6 for 0x10/0x11) of the
// villager of the object; else 0.
namespace d_00118ff8 {

inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0030b829, u32(u32, u32)> lookup_record_value;

u32 VillagerPart__visitor_record_for(u32 villager_part, u32 r1) {
    u32 r0_3 = 0;
    u32 r0_1 = main_object_idle(villager_part, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        if (r1 != 0) {
            r1_1 = *gptr<u32>(r1 + (1u << 0xc) + 0x28u);
            if (r1_1 != 0) {
                u32 record_value = lookup_record_value(villager_part, r1_1);
                r1_1 = guest::cpu()->r[1];
                if (record_value == 0xeu || record_value == 0xfu) {
                    r0_3 = 0x173a0u;
                    return villager_part + r0_3;
                }
                if (record_value == 0x10u || record_value == 0x11u) {
                    r0_3 = 0x173c6u;
                    return villager_part + r0_3;
                }
            }
        }
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00118ff8
GUEST_EXPORT_FRAMED(0x00118ff9, d_00118ff8::VillagerPart__visitor_record_for, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011916c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Rebuilds a 399-bit set from the valid villager records.
namespace d_0011916c {

struct __attribute__((packed)) Local_0011916c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 bit_set399;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0011916c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0011916c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0011916c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0011916c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0011916c_ea_1, bit_set399, 0x10);
GUEST_OFFSET(Local_0011916c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0011916c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0011916c_ea_1, word_1c, 0x1c);

inline constexpr guest::Function<0x0029b840, u32(u32, u32)> BitSet399__set;
inline constexpr guest::Function<0x0029b868, u32(u32, u32, u32, u32)> BitSet399__clear;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;

struct __attribute__((packed)) UnknownThumb11916cFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 tpc;
};
GUEST_OFFSET(UnknownThumb11916cFrame, word_8, 0x8);
GUEST_OFFSET(UnknownThumb11916cFrame, word_c, 0xc);
GUEST_OFFSET(UnknownThumb11916cFrame, word_10, 0x10);
GUEST_OFFSET(UnknownThumb11916cFrame, word_14, 0x14);
GUEST_OFFSET(UnknownThumb11916cFrame, word_18, 0x18);
GUEST_OFFSET(UnknownThumb11916cFrame, tpc, 0x1c);
GUEST_SIZE(UnknownThumb11916cFrame, 0x20);

u32 unknown_thumb_11916c(u32 j, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<UnknownThumb11916cFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 bit_set399 = guest::cpu()->r[5];
    u32 i = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r7_1 = 0;
    gptr<Local_0011916c_ea_1> ea_1 = gptr<Local_0011916c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = j;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->bit_set399 = bit_set399;
    ea_1->word_14 = i;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r4 = j;
    bit_set399 = r1;
    BitSet399__clear(r1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    i = 0u;
    do {
        if (i >= 0xau) {
            r7_1 = 0u;
        } else {
            r1 = 0x2518u;
            r7_1 = i * r1 + r4;
            if (r7_1 == 0) {
                goto L_1191ba;
            }
            u32 r0_1 = is_record_valid(r7_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_1 == 0) {
                goto L_1191ba;
            }
        }
        if (r7_1 != 0) {
            u32 is_villager = is_villager_record(r7_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (is_villager != 0) {
                u32 r0_3 = *gptr<u16>(r7_1 + 0x2cu);
                r1 = 0x18fu;
                if (r0_3 < r1) {
                    r1 = r0_3 >> 3;
                    r3 = r0_3 & 7u;
                    r2 = u32(*gptr<u8>(bit_set399 + r1)) | lsl_r(1u, r3 & 0xff);
                    *gptr<u8>(bit_set399 + r1) = u8(r2);
                }
            }
        }
L_1191ba:;
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
    j = frame->word_8;
    if (j == 0) {
        u32 r6_1 = r4 + 0x17676u;
        u32 is_villager_2 = is_villager_record(r6_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (is_villager_2 != 0) {
            u32 r1_1 = *gptr<u16>(r6_1 + 0x2cu);
            BitSet399__set(bit_set399, r1_1);
            r1 = guest::cpu()->r[1];
        }
        r3 = 0x17640u;
        i = 0xffffu;
        j = 0u;
        do {
            if (j < 0x10u) {
                r1 = (j << 1) + r4 + r3;
                u32 r2_2 = *gptr<u16>(r1 + 0x16u);
                if (r2_2 != i) {
                    r1 = 0x18fu;
                    if (r2_2 < r1) {
                        r1 = r2_2 >> 3;
                        *gptr<u8>(bit_set399 + r1) = u8(1u << (r2_2 & 7u) | u32(*gptr<u8>(bit_set399 + r1)));
                    }
                }
            }
            j += 1u;
            guest::preempt();
        } while (j < 0x10u);
    }
    u32 r4_1 = frame->word_c;
    u32 r5_1 = frame->word_10;
    u32 r6_2 = frame->word_14;
    u32 r7_2 = frame->word_18;
    u32 tpc_1 = frame->tpc;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    return j;
}

}  // namespace d_0011916c
GUEST_EXPORT(0x0011916d, d_0011916c::unknown_thumb_11916c);

// f_0011922c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the ten entries of the table at 0xa82b90 with flag 4 (+0x44), or -1.
namespace d_0011922c {

inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> villager_runtime_entry_at;
inline constexpr guest::Function<0x00309958, u32(u32, u32)> flag_bit_44;

u32 first_entry_with_flag_4(u32 r0_unused, u32 r1) {
    u32 i = 0u;
    do {
        u32 r0_1 = villager_runtime_entry_at(i, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            u32 r0_2 = flag_bit_44(r0_1, 4u);
            r1 = guest::cpu()->r[1];
            if (r0_2 != 0) {
                return i;
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_0011922c
GUEST_EXPORT_FRAMED(0x0011922d, d_0011922c::first_entry_with_flag_4, 0x4010);  // pushes {i, lr} first, as the original

// f_00119254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the villager kept at +0x17676 is valid and bit 4 of +0x172f0 is set.
namespace d_00119254 {

struct __attribute__((packed)) VillagerPart {
    u8 unknown_0[0x172f0];  // (not used here)
    u32 word_172f0;
};
GUEST_OFFSET(VillagerPart, word_172f0, 0x172f0);

inline constexpr guest::Function<0x00301e20, u32(u32)> is_villager_record;

u32 VillagerPart__has_moving_in_villager(gptr<VillagerPart> villager_part) {
    u32 is_villager = is_villager_record(villager_part.addr() + 0x17676u);
    if (is_villager == 0) {
        return 0u;
    }
    if (s32(villager_part->word_172f0 << 0x1b) >= 0) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_00119254
GUEST_EXPORT_FRAMED(0x00119255, d_00119254::VillagerPart__has_moving_in_villager, 0x4010);  // pushes {r4, lr} first, as the original

// f_00119308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The days left of the event at +0x19760: 7 (or 10 when its villager is close to a player) minus the elapsed days; -1
// without a valid villager.
namespace d_00119308 {

struct __attribute__((packed)) VillagerPart {
    u8 unknown_0[0x19761];  // (not used here)
    u8 byte_19761;
};
GUEST_OFFSET(VillagerPart, byte_19761, 0x19761);

struct __attribute__((packed)) Local_00119308_r5_1 {
    u8 byte_0;
    u8 unknown_1[0x1];  // (not used here)
    u8 byte_2;
};
GUEST_OFFSET(Local_00119308_r5_1, byte_0, 0x0);
GUEST_OFFSET(Local_00119308_r5_1, byte_2, 0x2);

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x0030aa59, u32(u32, u32, u32, u32)> villager_is_close_to_a_player;

u32 VillagerPart__days_left_for_event(gptr<VillagerPart> villager_part, u32 r1_unused, u32 r2) {
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    gptr<Local_00119308_r5_1> r5_1 = gptr<Local_00119308_r5_1>(villager_part.addr() + 0x19760u);
    u32 r1_1 = s8(villager_part->byte_19761);
    if (s32(r1_1) >= 0) {
        guest::cpu()->r[1] = r1_1;
        return r1_1;
    }
    u32 r4_1 = 0u;
    u32 r1_2 = s8(r5_1->byte_2);
    if (r1_2 < 0xau) {
        r1_2 = r1_2 * 0x2518u;
        r4_1 = r1_2 + villager_part.addr();
        if (r4_1 == 0) {
            guest::cpu()->r[1] = r1_2;
            return ~0u;
        }
        u32 r0_1 = is_record_valid(r4_1, r1_2, 0x2518u, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_1 == 0) {
            return ~0u;
        }
    }
    if (r4_1 != 0) {
        if (villager_is_close_to_a_player(r4_1, r1_2, r2, guest::cpu()->r[3]) == 0) {
            r0_3 = 7u;
            r1_3 = s8(r5_1->byte_0);
            guest::cpu()->r[1] = r1_3;
            return r0_3 - r1_3;
        }
        r0_3 = 0xau;
        r1_3 = s8(r5_1->byte_0);
        guest::cpu()->r[1] = r1_3;
        return r0_3 - r1_3;
    }
    guest::cpu()->r[1] = r1_2;
    return ~0u;
}

}  // namespace d_00119308
GUEST_EXPORT_FRAMED(0x00119309, d_00119308::VillagerPart__days_left_for_event, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00119360: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the ten entries of the table at 0xa82b90 with flag 3 (+0x44), or -1.
namespace d_00119360 {

inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> villager_runtime_entry_at;
inline constexpr guest::Function<0x00309958, u32(u32, u32)> flag_bit_44;

u32 first_entry_with_flag_3(u32 r0_unused, u32 r1) {
    u32 i = 0u;
    do {
        u32 r0_1 = villager_runtime_entry_at(i, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            u32 r0_2 = flag_bit_44(r0_1, 3u);
            r1 = guest::cpu()->r[1];
            if (r0_2 != 0) {
                return i;
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00119360
GUEST_EXPORT_FRAMED(0x00119361, d_00119360::first_entry_with_flag_3, 0x4010);  // pushes {i, lr} first, as the original

// f_00119388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For each of the ten villagers: rebuilds its phrase from its personality (+0x24f0) and applies it.
namespace d_00119388 {

inline constexpr guest::Function<0x001199ad, u32(u32, u32, u32, u32)> Villager__copy_letter;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00318fbc, u32(u32, u32, u32, u32)> call_on_9b3ce0;

void VillagerPart__refresh_villager_phrases(u32 villager_part, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4c);  // the original's stack frame
    u32 i = 0u;
    u32 r7 = 0x24e0u;
    u32 r6 = villager_part;
    do {
        u32 r0_1 = 0x2518u * i + r6;
        u32 is_villager = is_villager_record(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (is_villager != 0) {
            u32 r2_1 = *gptr<s8>(r0_1 + r7 + 0x10u);
            call_on_9b3ce0(frame.at(0).addr(), 0x48u, r2_1, r3);
            Villager__copy_letter(r0_1, frame.at(0).addr(), 0u, 0u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
}

}  // namespace d_00119388
GUEST_EXPORT_FRAMED(0x00119389, d_00119388::VillagerPart__refresh_villager_phrases, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_00119404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether today (or, by arg, tomorrow) has a special event.
namespace d_00119404 {

struct __attribute__((packed)) Local_00119404_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00119404_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00119404_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00119404_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_00119404_r3_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00119404_r3_4, word_0, 0x0);
GUEST_OFFSET(Local_00119404_r3_4, word_4, 0x4);
GUEST_OFFSET(Local_00119404_r3_4, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x003014b4, u32(u32, u32)> TimeStamp__add_days;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x0030d9ec, u32(u32, u32, u32, u32)> day_has_special_event_veneer;
inline constexpr guest::Function<0x00312acc, u32(u32, u32)> set_time_stamp_returning;
inline constexpr guest::Function<0x00314cec, u32(u32)> GameTime__round_down_to_day_start;

struct __attribute__((packed)) SpecialEventTodayOrTomorrowFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x14];  // (not read or written by name)
};
GUEST_OFFSET(SpecialEventTodayOrTomorrowFrame, word_0, 0x0);
GUEST_OFFSET(SpecialEventTodayOrTomorrowFrame, word_4, 0x4);
GUEST_OFFSET(SpecialEventTodayOrTomorrowFrame, word_8, 0x8);
GUEST_SIZE(SpecialEventTodayOrTomorrowFrame, 0x20);

u32 special_event_today_or_tomorrow(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SpecialEventTodayOrTomorrowFrame> frame;  // the original's stack frame
    u32 now_2 = game_time_now(r0, r1, r2, r3);
    set_time_stamp_returning(frame.at(0x18).addr(), now_2);
    GameTime__round_down_to_day_start(frame.at(0x18).addr());
    make_adjusted_words(frame.at(0xc).addr(), frame.at(0x18).addr());
    gptr<Local_00119404_r3_4> r3_4 = gptr<Local_00119404_r3_4>(frame.at(0).addr());
    gptr<Local_00119404_ea_1> ea_1 = gptr<Local_00119404_ea_1>(frame.at(0xc).addr());
    u32 r1_3 = ea_1->word_4;
    u32 r2_4 = ea_1->word_8;
    r3_4->word_0 = ea_1->word_0;
    r3_4->word_4 = r1_3;
    r3_4->word_8 = r2_4;
    TimeStamp__move_to_day_start(frame.at(0).addr(), r1_3, r2_4, r3_4.addr() + 0xc);
    u32 day = 0u;
    do {
        if (day_has_special_event_veneer(frame->word_0, frame->word_4, frame->word_8, 1u) != 0) {
            return 1u;
        }
        TimeStamp__add_days(frame.at(0).addr(), 1u);
        day += 1u;
        guest::preempt();
    } while (s32(day) < 2);
    return 0u;
}

}  // namespace d_00119404
GUEST_EXPORT_FRAMED(0x00119405, d_00119404::special_event_today_or_tomorrow, 0x4010);  // pushes {day, lr} first, as the original

// f_0011945c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the villager that passes the check, from the start index.
namespace d_0011945c {

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x00309971, u32(u32, u32, u32, u32)> villager_check_309970;
inline constexpr guest::Function<0x0030befc, u32(u32, u32, u32, u32)> global_word_7e0;

struct __attribute__((packed)) VillagersFindByCheckFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagersFindByCheckFrame, word_0, 0x0);
GUEST_SIZE(VillagersFindByCheckFrame, 0x4);

u32 Villagers__find_by_check(u32 villagers, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<VillagersFindByCheckFrame> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_6 = 0;
    frame->word_0 = r3;
    u32 r6 = 0u;
    u32 r4 = villagers;
    if (s32(r1) < 0) {
        u32 i = 0u;
        do {
            u32 r0_1 = global_word_7e0(i, r1, guest::cpu()->r[2], r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (r0_1 >= 0xau) {
                r0_2 = r6;
            } else {
                r1 = 0x2518u;
                u32 r7_1 = r0_1 * r1 + r4;
                if (r7_1 == 0) {
                    goto L_11949e;
                }
                u32 r0_3 = is_record_valid(r7_1, r1, guest::cpu()->r[2], r3);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                if (r0_3 == 0) {
                    goto L_11949e;
                }
                r0_2 = r7_1;
            }
            if (r0_2 != 0) {
                u32 r0_4 = villager_check_309970(r0_2, r1, guest::cpu()->r[2], r3);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                if (r0_4 != 0) {
                    return 1u;
                }
            }
L_11949e:;
            i += 1u;
            guest::preempt();
        } while (i < 2u);
        return 0u;
    }
    u32 r0_5 = global_word_7e0(r1, r1, guest::cpu()->r[2], r3);
    if (r0_5 >= 0xau) {
        r0_6 = r6;
    } else {
        u32 r4_1 = r0_5 * 0x2518u + r4;
        if (r4_1 == 0) {
            return r6;
        }
        if (is_record_valid(r4_1, 0x2518u, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
            return r6;
        }
        r0_6 = r4_1;
    }
    if (r0_6 != 0) {
        if (villager_check_309970(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) != 0) {
            return 1u;
        }
    }
    return r6;
}

}  // namespace d_0011945c
GUEST_EXPORT_FRAMED(0x0011945d, d_0011945c::Villagers__find_by_check, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_001194e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to global_word_7e0 with the second argument.
namespace d_001194e0 {

inline constexpr guest::Function<0x0030befc, u32(u32)> global_word_7e0;

u32 global_word_7e0_veneer(u32 r0_unused, u32 r1) {
    return global_word_7e0(r1);
}

}  // namespace d_001194e0
GUEST_EXPORT_FRAMED(0x001194e1, d_001194e0::global_word_7e0_veneer, 0x4010);  // pushes {r4, lr} first, as the original

// f_001194ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the ten villagers passes 00309a44 and is not in state 2 (nor marked leaving by bits 0-1 of +0x2510).
namespace d_001194ec {

inline constexpr guest::Function<0x00309a45, u32(u32, u32, u32, u32)> villager_birthday_is_on;
inline constexpr guest::Function<0x0030e430, u32(u32, u32, u32, u32)> field_2510_is_2;

struct __attribute__((packed)) VillagerPartHasActiveVillagerFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerPartHasActiveVillagerFrame, word_0, 0x0);
GUEST_SIZE(VillagerPartHasActiveVillagerFrame, 0x4);

u32 VillagerPart__has_active_villager(u32 villager_part, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<VillagerPartHasActiveVillagerFrame> frame;  // the original's stack frame
    u32 r1_1 = 0;
    frame->word_0 = r3;
    u32 i = 0u;
    u32 r6 = villager_part;
    u32 r7 = 0x25u << 8;
    do {
        u32 r0_1 = 0x2518u * i + r6;
        u32 r0_2 = villager_birthday_is_on(r0_1, 0u, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r1_1 = *gptr<u32>(r0_1 + r7 + 0x10u);
            r2 = r1_1 >> 1u & 1u;
            if (r2 != 0) {
                r1_1 &= 1u;
                if (r1_1 == 0) {
                    goto L_119522;
                }
            }
            u32 r0_3 = field_2510_is_2(r0_1, r1_1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_3 == 0) {
                return 1u;
            }
        }
L_119522:;
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001194ec
GUEST_EXPORT_FRAMED(0x001194ed, d_001194ec::VillagerPart__has_active_villager, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_00119534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the letter slot for the villager's entry, matching the names.
namespace d_00119534 {

struct __attribute__((packed)) Local_00119534_ea_1 {
    u32 villager;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00119534_ea_1, villager, 0x0);
GUEST_OFFSET(Local_00119534_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00119534_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00119534_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00119534_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00119534_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00119534_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00119534_ea_1, word_1c, 0x1c);

inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x0030d9f0, u32(u32, u32, u32, u32)> find_matching_name_pair_veneer;
inline constexpr guest::Function<0x0030d9f4, u32(u32)> record_is_due_veneer;
inline constexpr guest::Function<0x0030d9f8, u32(u32, u32, u32)> letter_slot_for_entry_veneer;
inline constexpr guest::Function<0x00318da0, u32(u32, u32, u32)> PersonalIdPair__equals;
inline constexpr guest::Function<0x0031917c, u32(u32, u32, u32, u32)> block_address_of_index_0031917c;

struct __attribute__((packed)) VillagerFindLetterSlotFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(VillagerFindLetterSlotFrame, word_4, 0x4);
GUEST_OFFSET(VillagerFindLetterSlotFrame, word_c, 0xc);
GUEST_OFFSET(VillagerFindLetterSlotFrame, word_10, 0x10);
GUEST_OFFSET(VillagerFindLetterSlotFrame, word_14, 0x14);
GUEST_OFFSET(VillagerFindLetterSlotFrame, word_18, 0x18);
GUEST_OFFSET(VillagerFindLetterSlotFrame, word_1c, 0x1c);
GUEST_SIZE(VillagerFindLetterSlotFrame, 0x20);

u32 Villager__find_letter_slot(u32 villager, u32 r1, u32 r2) {
    guest::StackFrameOf<VillagerFindLetterSlotFrame> frame;  // the original's stack frame
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_2 = 0;
    gptr<Local_00119534_ea_1> ea_1 = gptr<Local_00119534_ea_1>(frame.at(0).addr());
    ea_1->villager = villager;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = i;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r7 = r2;
    r5 = villager + 0x17448u;
    if (r2 != 0) {
        r0_1 = find_matching_name_pair_veneer(r5, frame->word_4, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1_2 = r0_1 + 1u;
        if (r1_2 != 0) {
            r4_1 = frame->word_c;
            r5_1 = frame->word_10;
            r6_1 = frame->word_14;
            r7_1 = frame->word_18;
            tpc_1 = frame->word_1c;
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_1;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            return r0_1;
        }
        i = 0u;
        do {
            u32 r0_2 = block_address_of_index_0031917c(r5, i, r2, guest::cpu()->r[3]);
            u32 r0_3 = record_is_due_veneer(r0_2);
            r1_2 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_3 != 0) {
                u32 r0_5 = PersonalIdPair__equals(r0_2 + 0xcu, frame->word_4, r2);
                r1_2 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_5 != 0) {
                    u32 r0_6 = letter_slot_for_entry_veneer(r0_2, r7, r2);
                    r1_2 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_6 + 1u != 0) {
                        r4_1 = frame->word_c;
                        r5_1 = frame->word_10;
                        r6_1 = frame->word_14;
                        r7_1 = frame->word_18;
                        tpc_1 = frame->word_1c;
                        guest::cpu()->r[4] = r4_1;
                        guest::cpu()->r[5] = r5_1;
                        guest::cpu()->r[6] = r6_1;
                        guest::cpu()->r[7] = r7_1;
                        return i;
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 8);
        r4_2 = frame->word_c;
        r5_2 = frame->word_10;
        r6_2 = frame->word_14;
        r7_2 = frame->word_18;
        tpc_2 = frame->word_1c;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_2;
        return ~0u;
    }
    i = 0u;
L_119584:;
    u32 r0_7 = block_address_of_index_0031917c(r5, i, r2, guest::cpu()->r[3]);
    u32 r0_8 = SavedRecordInner__has_value(r0_7);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_8 == 0) {
        goto L_1195aa;
    }
    r1_6 = frame->word_4;
    r0_10 = PersonalIdPair__equals(r0_7 + 0xcu, r1_6, r2);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_10 == 0) {
        goto L_1195aa;
    }
    r4_1 = frame->word_c;
    r5_1 = frame->word_10;
    r6_1 = frame->word_14;
    r7_1 = frame->word_18;
    tpc_1 = frame->word_1c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    return i;
L_1195aa:;
    i += 1u;
    if (s32(i) < 8) {
        guest::preempt();
        goto L_119584;
    }
    r4_2 = frame->word_c;
    r5_2 = frame->word_10;
    r6_2 = frame->word_14;
    r7_2 = frame->word_18;
    tpc_2 = frame->word_1c;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    return ~0u;
}

}  // namespace d_00119534
GUEST_EXPORT(0x00119535, d_00119534::Villager__find_letter_slot);

// f_001195bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The 16-bit id `index` (below 16) of the list at +0x17656, or 0xffff.
namespace d_001195bc {


u32 VillagerPart__history_id(u32 villager_part, u32 r1) {
    if (r1 >= 0x10u) {
        guest::cpu()->r[1] = r1;
        return 0xffffu;
    }
    u32 r0_1 = *gptr<u16>((r1 << 1) + villager_part + 0x17656u);
    guest::cpu()->r[1] = 0x17640u;
    return r0_1;
}

}  // namespace d_001195bc
GUEST_EXPORT(0x001195bd, d_001195bc::VillagerPart__history_id);

// f_00119898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the 16 board entries (0xf2 bytes from +0x8ee) that matches the key, or 0.
namespace d_00119898 {

inline constexpr guest::Function<0x00311a34, u32(u32, u32, u32, u32)> match_entry;

struct __attribute__((packed)) VillagerPartFindBoardEntryFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerPartFindBoardEntryFrame, word_0, 0x0);
GUEST_SIZE(VillagerPartFindBoardEntryFrame, 0x4);

u32 VillagerPart__find_board_entry(u32 villager_part, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<VillagerPartFindBoardEntryFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6 = villager_part;
    u32 r7 = 0x8eeu;
    frame->word_0 = r1;
    u32 r5 = villager_part + r7;
    u32 i = 0u;
    do {
        u32 r0_1 = match_entry(r5, frame->word_0, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            if (i >= 0x10u) {
                break;
            }
            return i * 0xf2u + r6 + r7;
        }
        i += 1u;
        r5 += 0xf2u;
        guest::preempt();
    } while (i < 0x10u);
    return 0u;
}

}  // namespace d_00119898
GUEST_EXPORT_FRAMED(0x00119899, d_00119898::VillagerPart__find_board_entry, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_00119fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The constant for an indexed object (tables at 0x88ee28, 0x88ee68, 0x88ee88), chosen by `which` and the town flags
// (bits 1-2 of save +0x621cf).
namespace d_00119fe4 {

inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fe4c0, u32(u32, u32)> indexed_object_index;

struct __attribute__((packed)) IndexedObjectConstantFrame {
    u32 word_0;
};
GUEST_OFFSET(IndexedObjectConstantFrame, word_0, 0x0);
GUEST_SIZE(IndexedObjectConstantFrame, 0x4);

u32 indexed_object_constant(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<IndexedObjectConstantFrame> frame;  // the original's stack frame
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_9 = 0;
    frame->word_0 = r3;
    u32 r0_1 = indexed_object_index(r0, r1);
    u32 save_data = get_save_data(r0_1);
    u32 r0_3 = u32(*gptr<u8>(save_data + 0x621cfu)) >> 1 << 0x1f;
    if (r0_3 != 0) {
        if (r1 != 0) {
            r1_3 = 0x88ee68u;
            r0_4 = r0_1 << 2;
            r0_9 = *gptr<u32>(r1_3 + r0_4);
            guest::cpu()->r[1] = r1_3;
            return r0_9;
        }
        return *gptr<u32>((r0_1 << 3) + 0x88ee28u);
    }
    u32 save_data_2 = get_save_data(r0_3);
    if ((u32(*gptr<u8>(save_data_2 + 0x621cfu)) >> 2 & 1u) == 0u) {
        u32 r1_5 = r1 << 2;
        u32 r0_7 = *gptr<u32>((r0_1 << 3) + 0x88ee28u + r1_5);
        guest::cpu()->r[1] = r1_5;
        return r0_7;
    }
    if (r1 != 0) {
        return *gptr<u32>((r0_1 << 3) + 0x88ee2cu);
    }
    r1_3 = 0x88ee88u;
    r0_4 = r0_1 << 2;
    r0_9 = *gptr<u32>(r1_3 + r0_4);
    guest::cpu()->r[1] = r1_3;
    return r0_9;
}

}  // namespace d_00119fe4
GUEST_EXPORT_FRAMED(0x00119fe5, d_00119fe4::indexed_object_constant, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0011a6d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The villager's memory of the player in the slot.
namespace d_0011a6d8 {

struct __attribute__((packed)) Local_0011a6d8_r0_14 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Local_0011a6d8_r0_14, byte_8, 0x8);
GUEST_OFFSET(Local_0011a6d8_r0_14, byte_9, 0x9);

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x00303770, u32(u32, u32, u32, u32)> player_record_for_slot;
inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32, u32)> player_state_block_address;
inline constexpr guest::Function<0x003091ec, u32(u32)> read_field_u32_0x234_;
inline constexpr guest::Function<0x00309eb9, u32(u32, u32)> SaveVillager__find_player_record_00309eb8;
inline constexpr guest::Function<0x0030b829, u32(u32, u32)> lookup_record_value;

struct __attribute__((packed)) VillagersPlayerMemoryForSlotFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagersPlayerMemoryForSlotFrame, word_0, 0x0);
GUEST_SIZE(VillagersPlayerMemoryForSlotFrame, 0x4);

u32 Villagers__player_memory_for_slot(u32 villagers, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<VillagersPlayerMemoryForSlotFrame> frame;  // the original's stack frame
    u32 r0_7 = 0;
    u32 res_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    gptr<Local_0011a6d8_r0_14> r0_14 = gptr<Local_0011a6d8_r0_14>(0u);
    u32 res_2 = 0;
    frame->word_0 = r3;
    u32 r0_2 = read_field_u32_0x234_(player_state_block_address(villagers, r1, guest::cpu()->r[2], r3));
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r6 = 0x55a6u;
    u32 r0_3 = SaveVillager__find_player_record_00309eb8(villagers, r0_2 + r6);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        return 0u;
    }
    u32 r0_4 = u32(*gptr<u8>(r0_3 + 0xbcu)) >> 7;
    if (r0_4 == 0) {
        return 0u;
    }
    u32 save_data = get_save_data(r0_4, r1);
    u32 r4_1 = save_data + 0x292a4u;
    u32 record_value = lookup_record_value(r4_1, villagers);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (record_value != 0xeu && record_value != 0xfu) {
        if (record_value != 0x10u && record_value != 0x11u) {
            goto L_11a72e;
        }
        r0_7 = 0x173c6u;
    } else {
        r0_7 = 0x173a0u;
    }
    res_1 = r4_1 + r0_7;
    if (res_1 != 0) {
        return 0u;
    }
L_11a72e:;
    u32 r0_8 = villagers + (0x25u << 8);
    frame->word_0 = r0_8;
    u32 r0_9 = *gptr<u8>(r0_8 + 0xfu);
    if (r0_9 != 0 && r0_9 != 1u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r7 = 0x8d6cu;
    u32 r4 = 0u;
L_11a744:;
    u32 player_record = player_record_for_slot(uxtb(r4), r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (player_record == 0) {
        goto L_11a774;
    }
    r0_12 = player_record + r6;
    r0_13 = PersonalId__is_set(r0_12, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_13 == 0) {
        goto L_11a774;
    }
    r0_14 = gptr<Local_0011a6d8_r0_14>(player_record + r7);
    r1 = r0_14->byte_8;
    if (r1 != 5u || r0_14->byte_9 == 0) {
        goto L_11a774;
    }
    res_2 = *gptr<u32>(frame->word_0 + 0x10u) >> 2u & 1u;
    if (res_2 == 0) {
        goto L_11a774;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_11a774:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::preempt();
    goto L_11a744;
}

}  // namespace d_0011a6d8
GUEST_EXPORT_FRAMED(0x0011a6d9, d_0011a6d8::Villagers__player_memory_for_slot, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0011b37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of word `index` (below 4) of the table at +0x8c6, or 0.
namespace d_0011b37c {


u32 word_8c6_at(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = 0x8c6u;
    return (r1 << 2) + r0 + 0x8c6u;
}

}  // namespace d_0011b37c
GUEST_EXPORT(0x0011b37d, d_0011b37c::word_8c6_at);

// f_0011b3d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The level (0-5) of the talk's 9-bit value (+0xb9) against the descending thresholds at 0x88ec60.
namespace d_0011b3d4 {


u32 TalkRcpt__mood_level(gptr<AcNpcNml__TalkRcpt> talk_rcpt) {
    u32 r0 = talk_rcpt.addr();
    u32 r2 = (u32(talk_rcpt->byte_b9) >> 1) + (u32(talk_rcpt->byte_ba) << 0x1f >> 0x18);
    u32 r1 = 0x88ec60u;
    r0 = 0u;
    do {
        if (*gptr<u8>(r1 + r0) <= r2) {
            guest::cpu()->r[1] = r1;
            return uxtb(r0);
        }
        if (*gptr<u8>(r1 + r0 + 1u) <= r2) {
            guest::cpu()->r[1] = r1;
            return uxtb(r0 + 1u);
        }
        r0 += 2u;
        guest::preempt();
    } while (s32(r0) < 6);
    guest::cpu()->r[1] = r1;
    return 5u;
}

}  // namespace d_0011b3d4
GUEST_EXPORT(0x0011b3d5, d_0011b3d4::TalkRcpt__mood_level);

// f_0011b40c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of villager `index` of pair `pair` (0x4a30 bytes per pair, 0x2518 per villager).
namespace d_0011b40c {


u32 villager_pair_address(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = r1 * 0x4a30u;
    guest::cpu()->r[1] = r1_1;
    return r1_1 + r0 + r2 * u32(s32(0x4a30u) >> 1);
}

}  // namespace d_0011b40c
GUEST_EXPORT(0x0011b40d, d_0011b40c::villager_pair_address);

// f_0011b48c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the `n`-th set bit (n below the count +8) of the mask (+4, size +0), or -1.
namespace d_0011b48c {

struct __attribute__((packed)) BitSet {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(BitSet, word_0, 0x0);
GUEST_OFFSET(BitSet, word_4, 0x4);
GUEST_OFFSET(BitSet, word_8, 0x8);


u32 BitSet__nth_set_bit(gptr<BitSet> bit_set, u32 r1) {
    u32 i = bit_set.addr();
    if (bit_set->word_8 > r1) {
        u32 r4 = bit_set->word_0;
        i = 0u;
        if (s32(r4) > 0) {
            u32 r2 = bit_set->word_4;
            u32 r3 = 1u;
            do {
                if ((r2 & lsl_r(r3, i & 0xff)) != 0) {
                    if (r1 == 0) {
                        guest::cpu()->r[1] = r1;
                        return i;
                    }
                    r1 -= 1u;
                }
                i += 1u;
                guest::preempt();
            } while (s32(r4) > s32(i));
        }
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_0011b48c
GUEST_EXPORT_FRAMED(0x0011b48d, d_0011b48c::BitSet__nth_set_bit, 0x30);  // pushes {r4, r5} first, as the original

// f_0011b4be: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of a random set bit of the mask (+4, size +0, count +8), or -1 when it is empty.
namespace d_0011b4be {

struct __attribute__((packed)) BitSet {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(BitSet, word_0, 0x0);
GUEST_OFFSET(BitSet, word_4, 0x4);
GUEST_OFFSET(BitSet, word_8, 0x8);

inline constexpr guest::Function<0x0030e424, u32(u32, u32, u32, u32)> thunk_00565ec8;

u32 BitSet__random_set_bit(gptr<BitSet> bit_set, u32 r1, u32 r2, u32 r3) {
    u32 i = bit_set.addr();
    u32 r0_1 = r1;
    r1 = bit_set->word_8;
    if (r1 != 0) {
        u32 r0_2 = thunk_00565ec8(r0_1, r1, r2, r3);
        u32 r5 = bit_set->word_0;
        r1 = r0_2;
        i = 0u;
        if (s32(r5) > 0) {
            r2 = bit_set->word_4;
            r3 = 1u;
            do {
                if ((r2 & lsl_r(r3, i & 0xff)) != 0) {
                    if (r1 == 0) {
                        guest::cpu()->r[1] = r1;
                        return i;
                    }
                    r1 -= 1u;
                }
                i += 1u;
                guest::preempt();
            } while (s32(r5) > s32(i));
        }
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_0011b4be
GUEST_EXPORT_FRAMED(0x0011b4bf, d_0011b4be::BitSet__random_set_bit, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011b51e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a word pointer to +0x12 of the second argument.
namespace d_0011b51e {

inline constexpr guest::Function<0x0031b25c, u32(u32, u32)> script__WordCPtrSv__WordCPtrSv_0031b25c;

void construct_word_cptr_at_12(u32 r0_unused, u32 r1) {
    script__WordCPtrSv__WordCPtrSv_0031b25c(guest::cpu()->r[0], r1 + 0x12u);
}

}  // namespace d_0011b51e
GUEST_EXPORT_FRAMED(0x0011b51f, d_0011b51e::construct_word_cptr_at_12, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011b528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to script__WordCPtrSv__WordCPtrSv_0031b25c.
namespace d_0011b528 {

inline constexpr guest::Function<0x0031b25c, u32(u32, u32)> script__WordCPtrSv__WordCPtrSv_0031b25c;

void script__WordCPtrSv__WordCPtrSv_0031b25c_veneer() {
    script__WordCPtrSv__WordCPtrSv_0031b25c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0011b528
GUEST_EXPORT_FRAMED(0x0011b529, d_0011b528::script__WordCPtrSv__WordCPtrSv_0031b25c_veneer, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011b530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 6 of the 16-bit flags at +0x1aa.
namespace d_0011b530 {

struct __attribute__((packed)) Flag40Of1aaArg0 {
    u8 unknown_0[0x1aa];  // (not used here)
    u16 half_1aa;
};
GUEST_OFFSET(Flag40Of1aaArg0, half_1aa, 0x1aa);


u32 flag_40_of_1aa(gptr<Flag40Of1aaArg0> arg0) {
    return u32(arg0->half_1aa) >> 6u & 1u;
}

}  // namespace d_0011b530
GUEST_EXPORT(0x0011b531, d_0011b530::flag_40_of_1aa);

// f_0011b53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether flag 2 << `index` of the bits at +0x1aa is set (true for other indices).
namespace d_0011b53c {


u32 has_flag_of_1aa(u32 r0, u32 r1) {
    u32 r1_1 = uxth(lsl_r(2u, r1 & 0xff));
    if (r1_1 != 2u && r1_1 != 4u && r1_1 != 8u && r1_1 != 0x10u) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r0_1 = u32(*gptr<u16>(r0 + 0x1aau)) & r1_1;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0011b53c
GUEST_EXPORT(0x0011b53d, d_0011b53c::has_flag_of_1aa);

// f_0011b560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a word pointer to +0x24 of the second argument.
namespace d_0011b560 {

inline constexpr guest::Function<0x0030e42c, u32(u32, u32)> script__WordCPtrSv__WordCPtrSv_0030e42c;

void construct_word_cptr_at_24(u32 r0_unused, u32 r1) {
    script__WordCPtrSv__WordCPtrSv_0030e42c(guest::cpu()->r[0], r1 + 0x24u);
}

}  // namespace d_0011b560
GUEST_EXPORT_FRAMED(0x0011b561, d_0011b560::construct_word_cptr_at_24, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011b56a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 5 of the 16-bit flags at +0x1aa.
namespace d_0011b56a {

struct __attribute__((packed)) Flag20Of1aaArg0 {
    u8 unknown_0[0x1aa];  // (not used here)
    u16 half_1aa;
};
GUEST_OFFSET(Flag20Of1aaArg0, half_1aa, 0x1aa);


u32 flag_20_of_1aa(gptr<Flag20Of1aaArg0> arg0) {
    return u32(arg0->half_1aa) >> 5u & 1u;
}

}  // namespace d_0011b56a
GUEST_EXPORT(0x0011b56b, d_0011b56a::flag_20_of_1aa);

// f_0011b576: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A random index (below 0x21) whose test passes, by reservoir choice; 0x21 when none.
namespace d_0011b576 {

inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> random_below_entry;
inline constexpr guest::Function<0x0030ead0, u32(u32, u32, u32, u32)> test_33;

struct __attribute__((packed)) RandomSetIndexOf33Frame {
    u32 word_0;
};
GUEST_OFFSET(RandomSetIndexOf33Frame, word_0, 0x0);
GUEST_SIZE(RandomSetIndexOf33Frame, 0x4);

u32 random_set_index_of_33(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<RandomSetIndexOf33Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r6 = 0x21u;
    u32 r7 = r0;
    u32 i = r5;
    do {
        u32 r0_1 = test_33(r7, i, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            r5 += 1u;
            u32 r0_2 = random_below_entry(r5, guest::cpu()->r[1], guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
            if (r0_2 == 0) {
                r6 = i;
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0x21);
    return r6;
}

}  // namespace d_0011b576
GUEST_EXPORT_FRAMED(0x0011b577, d_0011b576::random_set_index_of_33, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_0011b7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a locale combining the other's facets of the categories.
namespace d_0011b7c8 {

struct __attribute__((packed)) Locale {
    u32 word_0;
};
GUEST_OFFSET(Locale, word_0, 0x0);

struct __attribute__((packed)) LocaleCombineArg1 {
    u32 word_0;
};
GUEST_OFFSET(LocaleCombineArg1, word_0, 0x0);

struct __attribute__((packed)) Local_0011b7c8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0011b7c8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0011b7c8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0011b7c8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0011b7c8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0011b7c8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0011b7c8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0011b7c8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0011b7c8_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_0011b7c8_r0_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0011b7c8_r0_5, word_0, 0x0);
GUEST_OFFSET(Local_0011b7c8_r0_5, word_4, 0x4);

inline constexpr guest::Function<0x001063dd, u32(u32, u32)> allocate_and_free_1;
inline constexpr guest::Function<0x0011c221, u32(u32, u32, u32, u32)> locale__resize_facet_table;
inline constexpr guest::Function<0x0031b3b3, u32(u32, u32, u32, u32)> LocaleSaver__LocaleSaver;
inline constexpr guest::Function<0x0031b3eb, u32(u32, u32, u32, u32)> LocaleSaver__destroy;
inline constexpr guest::Function<0x0031b579, u32(u32, u32, u32, u32)> static_empty_pair;
inline constexpr guest::Function<0x0031b5b9, u32(u32, u32, u32, u32)> Locale__assign;

struct __attribute__((packed)) LocaleCombineFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(LocaleCombineFrame, word_0, 0x0);
GUEST_OFFSET(LocaleCombineFrame, word_c, 0xc);
GUEST_OFFSET(LocaleCombineFrame, word_10, 0x10);
GUEST_OFFSET(LocaleCombineFrame, word_14, 0x14);
GUEST_OFFSET(LocaleCombineFrame, word_18, 0x18);
GUEST_OFFSET(LocaleCombineFrame, word_1c, 0x1c);
GUEST_SIZE(LocaleCombineFrame, 0x20);

u32 Locale__combine(gptr<Locale> locale, gptr<LocaleCombineArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<LocaleCombineFrame> frame;  // the original's stack frame
    u32 r0 = locale.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 locale_saver = 0;
    u32 r1_3 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    gptr<Local_0011b7c8_ea_1> ea_1 = gptr<Local_0011b7c8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r1;
    ea_1->word_4 = r2;
    ea_1->word_8 = r3;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r7 = r2;
    r4 = ~0u;
    LocaleSaver__LocaleSaver(frame.at(0).addr(), locale->word_0, 6u, r3);
    u32 r0_3 = allocate_and_free_1(arg1->word_0, r4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0_3;
    u32 r0_4 = r0_3 + 1u;
    if (r0_4 != 0) {
        gptr<Local_0011b7c8_r0_5> r0_5 = gptr<Local_0011b7c8_r0_5>(static_empty_pair(r0_4, r1, r2, r3));
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0_5->word_4;
        r4 = r0_5->word_0;
        r5 = r0_5.addr();
        r0 = r4 + (r1 << 3);
        do {
            if (r0 == r4) {
                locale__resize_facet_table(r5, r1 + 1u, r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r4 = *gptr<u32>(r5) + (*gptr<u32>(r5 + 4u) << 3) - 8u;
                goto L_11b824;
            }
            r2 = *gptr<u32>(r4) + 1u;
            if (r2 == 0) {
                goto L_11b824;
            }
            r4 += 8u;
            guest::preempt();
        } while (1);
    }
L_11b810:;
    locale_saver = frame.at(0).addr();
    LocaleSaver__destroy(locale_saver, r1, r2, r3);
    r1_3 = frame->word_0;
    r4_1 = frame->word_c;
    r5_1 = frame->word_10;
    r6_1 = frame->word_14;
    r7_1 = frame->word_18;
    tpc_1 = frame->word_1c;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    return r4;
L_11b824:;
    *gptr<u32>(r4) = r6;
    Locale__assign(r4 + 4u, r7, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = s32(r4 - *gptr<u32>(r5)) >> 3;
    guest::preempt();
    goto L_11b810;
}

}  // namespace d_0011b7c8
GUEST_EXPORT(0x0011b7c9, d_0011b7c8::Locale__combine);

// f_0011b836: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases facet `index` of the locale's facet table (its slot set to -1).
namespace d_0011b836 {

struct __attribute__((packed)) Local_0011b836_r0_1 {
    u32 word_0;
    u32 pointer;
};
GUEST_OFFSET(Local_0011b836_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0011b836_r0_1, pointer, 0x4);

inline constexpr guest::Function<0x00106941, u32(u32, u32)> pointer_list_remove;
inline constexpr guest::Function<0x0031b579, u32(u32, u32, u32, u32)> static_empty_pair;
inline constexpr guest::Function<0x0031b5b9, u32(u32, u32)> Locale__assign;
inline constexpr guest::Function<0x0031b5ed, u32(u32, u32)> Locale__global;

u32 locale__facet_table_release(u32 r0, u32 r1) {
    gptr<Local_0011b836_r0_1> r0_1 = gptr<Local_0011b836_r0_1>(static_empty_pair(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r1_1 = guest::cpu()->r[1];
    u32 pointer = r0_1->pointer;
    if (s32(pointer) > s32(r1)) {
        u32 r5_1 = r1 << 3;
        pointer = *gptr<u32>(r0_1->word_0 + r5_1);
        r1_1 = pointer + 1u;
        if (r1_1 != 0) {
            pointer_list_remove(pointer, r1_1);
            u32 r0_3 = r0_1->word_0 + r5_1;
            u32 r1_2 = ~0u;
            *gptr<u32>(r0_3) = r1_2;
            u32 r0_4 = Locale__global(r0_3, r1_2);
            pointer = Locale__assign(r0_1->word_0 + r5_1 + 4u, r0_4);
            r1_1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_1;
    return pointer;
}

}  // namespace d_0011b836
GUEST_EXPORT_FRAMED(0x0011b837, d_0011b836::locale__facet_table_release, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011b872: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of facet `index` of the locale's facet table, or the shared default when out of range.
namespace d_0011b872 {

struct __attribute__((packed)) Local_0011b872_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0011b872_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0011b872_r0_1, word_4, 0x4);

inline constexpr guest::Function<0x0031b579, u32(u32, u32, u32, u32)> static_empty_pair;
inline constexpr guest::Function<0x0031b5ed, u32(u32, u32)> Locale__global;

u32 locale__facet_slot(u32 r0, u32 r1) {
    gptr<Local_0011b872_r0_1> r0_1 = gptr<Local_0011b872_r0_1>(static_empty_pair(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r1_1 = r0_1->word_4;
    if (s32(r1_1) > s32(r1)) {
        return r0_1->word_0 + (r1 << 3) + 4u;
    }
    return Locale__global(r0_1.addr(), r1_1);
}

}  // namespace d_0011b872
GUEST_EXPORT_FRAMED(0x0011b873, d_0011b872::locale__facet_slot, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011b890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Looks up facet `index` of the locale (001063bc), or 0 when it is not there.
namespace d_0011b890 {

struct __attribute__((packed)) Local_0011b890_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0011b890_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0011b890_r0_1, word_4, 0x4);

inline constexpr guest::Function<0x001063bd, u32(u32, u32, u32, u32)> find_in_pointer_list_veneer;
inline constexpr guest::Function<0x0031b579, u32(u32)> static_empty_pair;

struct __attribute__((packed)) LocaleUseFacetFrame {
    u32 word_0;
};
GUEST_OFFSET(LocaleUseFacetFrame, word_0, 0x0);
GUEST_SIZE(LocaleUseFacetFrame, 0x4);

u32 locale__use_facet(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LocaleUseFacetFrame> frame;  // the original's stack frame
    u32 r0_3 = 0;
    frame->word_0 = r3;
    gptr<Local_0011b890_r0_1> r0_1 = gptr<Local_0011b890_r0_1>(static_empty_pair(r0));
    if (s32(r0_1->word_4) > s32(r1)) {
        u32 r0_2 = *gptr<u32>(r0_1->word_0 + (r1 << 3));
        if (r0_2 + 1u != 0) {
            frame->word_0 = 0;
            r0_3 = find_in_pointer_list_veneer(r0_2, r2, r3, frame.at(0).addr());
            if (r0_3 == frame.at(0).addr()) {
                r0_3 = 0u;
            }
        } else {
            r0_3 = 0u;
        }
    } else {
        r0_3 = 0u;
    }
    return r0_3;
}

}  // namespace d_0011b890
GUEST_EXPORT_FRAMED(0x0011b891, d_0011b890::locale__use_facet, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0011ba94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00307650 with the locale's name (or the default name when it has none).
namespace d_0011ba94 {

struct __attribute__((packed)) LocaleCallWithNameArg1 {
    u32 word_0;
};
GUEST_OFFSET(LocaleCallWithNameArg1, word_0, 0x0);

struct __attribute__((packed)) Local_0011ba94_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0011ba94_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0011ba94_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00307651, u32(u32, u32, u32, u32)> SharedString__append;

void locale__call_with_name(u32 r0, gptr<LocaleCallWithNameArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    gptr<Local_0011ba94_ea_1> ea_1 = gptr<Local_0011ba94_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    if (*gptr<u32>(arg1->word_0 + 0x18u) == 0) {
        r2_1 = frame.at(4).addr();
        r1_1 = 0x11bac4u;
    } else {
        r2_1 = frame.at(0).addr();
        r1_1 = *gptr<u32>(arg1->word_0 + 0x18u);
    }
    SharedString__append(r0, r1_1, r2_1, r3);
}

}  // namespace d_0011ba94
GUEST_EXPORT_FRAMED(0x0011ba95, d_0011ba94::locale__call_with_name, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011badc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a named locale (the POSIX name for the classic one) on the heap.
namespace d_0011badc {

struct __attribute__((packed)) Local_0011badc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0011badc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0011badc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0011badc_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002f7a10, u32(u32)> char_table_location;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> strcmp;
inline constexpr guest::Function<0x003075cc, u32(u32)> heap_allocate;
inline constexpr guest::Function<0x0031b3b3, u32(u32, u32, u32)> LocaleSaver__LocaleSaver;
inline constexpr guest::Function<0x0031b3eb, u32(u32, u32, u32, u32)> LocaleSaver__destroy;

u32 locale__make_named(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 res_2 = 0;
    gptr<Local_0011badc_ea_1> ea_1 = gptr<Local_0011badc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r1;
    ea_1->word_4 = r2;
    ea_1->word_8 = r3;
    if (strcmp(r0, 0x11bb98u, r2, r3) != 0) {
        if (strcmp(r0, 0x11bb9cu, guest::cpu()->r[2], guest::cpu()->r[3]) != 0) {
            u32 block = heap_allocate(1u << 9);
            u32 r7 = block;
            u32 locale_saver = frame.at(0).addr();
            LocaleSaver__LocaleSaver(locale_saver, r0, 2u);
            u32 r4 = 0u;
            u32 r6 = 0x10u;
            u32 r5 = 0x40u;
            r3 = char_table_location(locale_saver);
            do {
                r1_3 = 0u;
                u32 r0_7 = *gptr<u8>(*gptr<u32>(r3) + r4);
                if ((r0_7 & 1u) != 0) {
                    r1_3 = 1u;
                }
                if ((r0_7 & 0x3eu) != 0) {
                    r1_3 |= 2u;
                }
                if ((r0_7 & r5) != 0) {
                    r1_3 |= 4u;
                }
                if ((r0_7 & r6) != 0) {
                    r1_3 |= 8u;
                }
                if ((r0_7 & 8u) != 0) {
                    r1_3 |= r6;
                }
                if ((r0_7 & 0x98u) != 0) {
                    r1_3 |= 0x20u;
                }
                if ((r0_7 == 0x20u) != 0) {
                    r1_3 |= r5;
                }
                if ((r0_7 & 2u) != 0) {
                    r1_3 |= 0x80u;
                }
                r2_5 = r0_7 << 2 ^ r0_7;
                if ((r2_5 & 0x80u) != 0) {
                    r1_3 |= 0x80u << 1;
                }
                u32 r0_8 = r4 << 1;
                r4 += 1u;
                *gptr<u16>(r7 + r0_8) = u16(r1_3);
                res_2 = r4 - 0x100u;
                guest::preempt();
            } while (res_2 != 0);
            LocaleSaver__destroy(frame.at(0).addr(), r1_3, r2_5, r3);
            return r7;
        }
    }
    return 0x8c8680u;
}

}  // namespace d_0011badc
GUEST_EXPORT_FRAMED(0x0011badd, d_0011badc::locale__make_named, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0011bba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the named locale's character class table.
namespace d_0011bba8 {

struct __attribute__((packed)) Local_0011bba8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0011bba8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0011bba8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0011bba8_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0011bba8_r0_2 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_0011bba8_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0011bba8_r0_2, word_14, 0x14);

inline constexpr guest::Function<0x0011badd, u32(u32, u32, u32, u32)> locale__make_named;
inline constexpr guest::Function<0x0031b3b3, u32(u32, u32, u32)> LocaleSaver__LocaleSaver;
inline constexpr guest::Function<0x0031b3eb, u32(u32, u32, u32, u32)> LocaleSaver__destroy;
inline constexpr guest::Function<0x0031b759, u32(u32, u32, u32, u32)> halfword_has_bits;
inline constexpr guest::Function<0x0031ba1d, u32(u32, u32, u32, u32)> build_char_class_table;

u32 Locale__build_ctype(u32 locale, u32 r1, u32 r2, u32 r3) {
    u32 i = 0;
    u32 r5 = 0;
    u32 r7 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r0_9 = 0;
    u32 r1_1 = 0;
    gptr<Local_0011bba8_ea_1> ea_1 = gptr<Local_0011bba8_ea_1>(r13 - 0x20);
    ea_1->word_0 = r1;
    ea_1->word_4 = r2;
    ea_1->word_8 = r3;
    r13 = ea_1.addr();
    guest::cpu()->r[13] = r13;
    u32 r0_1 = locale__make_named(r1, r1, r2, r3);
    guest::cpu()->r[13] = r13;
    gptr<Local_0011bba8_r0_2> r0_2 = gptr<Local_0011bba8_r0_2>(build_char_class_table(locale, r0_1, 0u, r2));
    r0_2->word_0 = 0x90b570;
    u32 r6 = r0_2.addr();
    if (r0_2->word_14 != 0x8c8680u) {
        *gptr<u8>(r6 + 0x18u) = 1;
        guest::cpu()->r[13] = r13;
        LocaleSaver__LocaleSaver(r13, r1, 2u);
        r3 = guest::cpu()->r[3];
        i = 0u;
        r5 = 0xffu;
        do {
            guest::cpu()->r[13] = r13;
            u32 r0_4 = halfword_has_bits(r6, 0x10u, i & 0xffu, r3);
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                do {
                    if (r5 <= i) {
                        goto L_11bc12;
                    }
                    guest::cpu()->r[13] = r13;
                    u32 r0_5 = halfword_has_bits(r6, 0x10u, r5 & 0xffu, r3);
                    r3 = guest::cpu()->r[3];
                    if (r0_5 != 0) {
                        goto L_11bc12;
                    }
                    r5 -= 1u;
                    guest::preempt();
                } while (1);
            }
            i += 1u;
            guest::preempt();
        } while (i < r5);
L_11bc12:;
        *gptr<u32>(r6 + 0x20u) = r5;
        *gptr<u32>(r6 + 0x1cu) = i;
        r7 = *gptr<u32>(r6 + 0x2cu);
        for (;;) {
            if (i > r5) {
                break;
            }
            if (i - 0x61u <= 0x19u) {
                guest::cpu()->r[13] = r13;
                u32 r0_6 = halfword_has_bits(r6, 0x10u, i & 0xffu, r3);
                r3 = guest::cpu()->r[3];
                if (r0_6 != 0) {
                    u32 r0_7 = i - 0x20u;
                    *gptr<u32>(r13 + 8u) = r0_7;
                    guest::cpu()->r[13] = r13;
                    u32 r0_8 = halfword_has_bits(r6, 8u, r0_7 & 0xffu, r3);
                    r3 = guest::cpu()->r[3];
                    if (r0_8 != 0) {
                        r0_9 = *gptr<u32>(r13 + 8u);
                        goto L_11bc4e;
                    }
                }
            }
            r0_9 = i;
L_11bc4e:;
            *gptr<u8>(r7) = u8(r0_9);
            r7 += 1u;
            i += 1u;
            guest::preempt();
        }
        i = 0u;
        r5 = 0xffu;
        do {
            guest::cpu()->r[13] = r13;
            u32 r0_10 = halfword_has_bits(r6, 8u, i & 0xffu, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_10 != 0) {
                do {
                    if (r5 <= i) {
                        *gptr<u32>(r6 + 0x28u) = r5;
                        *gptr<u32>(r6 + 0x24u) = i;
                        r7 = *gptr<u32>(r6 + 0x30u);
                        goto L_11bcd0;
                    }
                    guest::cpu()->r[13] = r13;
                    u32 r0_11 = halfword_has_bits(r6, 8u, r5 & 0xffu, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_11 != 0) {
                        *gptr<u32>(r6 + 0x28u) = r5;
                        *gptr<u32>(r6 + 0x24u) = i;
                        r7 = *gptr<u32>(r6 + 0x30u);
                        goto L_11bcd0;
                    }
                    r5 -= 1u;
                    guest::preempt();
                } while (1);
            }
            i += 1u;
            guest::preempt();
        } while (i < r5);
        *gptr<u32>(r6 + 0x28u) = r5;
        *gptr<u32>(r6 + 0x24u) = i;
        r7 = *gptr<u32>(r6 + 0x30u);
        goto L_11bcd0;
    }
    r1_1 = *gptr<u32>(r13);
    r13 += 0x20;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r6;
L_11bcc8:;
    locale = i;
L_11bcca:;
    *gptr<u8>(r7) = u8(locale);
    r7 += 1u;
    i += 1u;
L_11bcd0:;
    if (i <= r5) {
        if (i - 0x41u > 0x19u) {
            guest::preempt();
            goto L_11bcc8;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_12 = halfword_has_bits(r6, 8u, i & 0xffu, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_12 == 0) {
            guest::preempt();
            goto L_11bcc8;
        }
        u32 r0_13 = i + 0x20u;
        *gptr<u32>(r13 + 8u) = r0_13;
        guest::cpu()->r[13] = r13;
        u32 r0_14 = halfword_has_bits(r6, 0x10u, r0_13 & 0xffu, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_14 == 0) {
            guest::preempt();
            goto L_11bcc8;
        }
        locale = *gptr<u32>(r13 + 8u);
        guest::preempt();
        goto L_11bcca;
    }
    guest::cpu()->r[13] = r13;
    LocaleSaver__destroy(r13, r1, r2, r3);
    r1_1 = *gptr<u32>(r13);
    r13 += 0x20;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r6;
}

}  // namespace d_0011bba8
GUEST_EXPORT(0x0011bba9, d_0011bba8::Locale__build_ctype);

// f_0011bcfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Appends the name of category `category` (below 0x17, from the table at 0x8c8428) to the locale's combined name (+4).
namespace d_0011bcfc {

struct __attribute__((packed)) Local_0011bcfc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0011bcfc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0011bcfc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0011bcfc_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x001019c5, u32(u32, u32)> append_byte_string;
inline constexpr guest::Function<0x0010bfbd, u32(u32, u32, u32, u32)> Path__split_device;
inline constexpr guest::Function<0x002f88b8, u32(u32)> release_owned_object;
inline constexpr guest::Function<0x002fa9d0, u32(u32)> string_length;
inline constexpr guest::Function<0x003075cc, u32(u32)> heap_allocate;
inline constexpr guest::Function<0x00307761, u32(u32, u32, u32, u32)> format_allocated;
inline constexpr guest::Function<0x00307990, u32(u32, u32)> strcpy;

void locale__append_category_name(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_0011bcfc_ea_1> ea_1 = gptr<Local_0011bcfc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    u32 r5_1 = r1;
    u32 r0_1 = Path__split_device(0u, 0u, r1, r2);
    u32 r4_1 = r0_1;
    if (r0_1 == 0) {
        if (s32(r5_1) >= 0) {
            if (!(r5_1 < 0x17u)) {
                r5_1 = 0u;
            }
        } else {
            r5_1 = 0u;
        }
        r4_1 = format_allocated(0u, 0u, gptr<u32>(0x8c8428u)[r5_1], r2);
    }
    u32 r0_3 = *gptr<u32>(r0 + 4u);
    if (r0_3 != 0) {
        u32 length_3 = string_length(r0_3);
        u32 length_4 = string_length(r4_1);
        u32 block_2 = heap_allocate(length_3 + length_4 + 1u);
        u32 r0_9 = append_byte_string(strcpy(block_2, *gptr<u32>(r0 + 4u)), r4_1);
        release_owned_object(*gptr<u32>(r0 + 4u));
        release_owned_object(r4_1);
        r4_1 = r0_9;
    }
    *gptr<u32>(r0 + 4u) = r4_1;
}

}  // namespace d_0011bcfc
GUEST_EXPORT_FRAMED(0x0011bcfd, d_0011bcfc::locale__append_category_name, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0011bd84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a facet (vtable 0x90b5a4) with no reference count.
namespace d_0011bd84 {

struct __attribute__((packed)) LocaleFacetConstructArg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(LocaleFacetConstructArg0, word_0, 0x0);
GUEST_OFFSET(LocaleFacetConstructArg0, word_4, 0x4);

inline constexpr guest::Function<0x0011c00d, u32(u32)> locale__facet_base_construct;

u32 locale__facet_construct(gptr<LocaleFacetConstructArg0> arg0) {
    locale__facet_base_construct(arg0.addr());
    arg0->word_0 = 0x90b5a4;
    arg0->word_4 = 0;
    return arg0.addr();
}

}  // namespace d_0011bd84
GUEST_EXPORT_FRAMED(0x0011bd85, d_0011bd84::locale__facet_construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011bdd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the vtable to 0x90b5e8 and releases the string at +0x14.
namespace d_0011bdd8 {

struct __attribute__((packed)) LocaleFacetDestruct90b5e8Arg0 {
    u32 word_0;
};
GUEST_OFFSET(LocaleFacetDestruct90b5e8Arg0, word_0, 0x0);

inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_0031c3a8_return_self;

u32 locale__facet_destruct_90b5e8(gptr<LocaleFacetDestruct90b5e8Arg0> arg0) {
    arg0->word_0 = 0x90b5e8;
    call_0031c3a8_return_self(arg0.addr() + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return arg0.addr();
}

}  // namespace d_0011bdd8
GUEST_EXPORT_FRAMED(0x0011bdd9, d_0011bdd8::locale__facet_destruct_90b5e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011bdf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a locale entry (id -1) sharing the implementation of another.
namespace d_0011bdf0 {

struct __attribute__((packed)) LocaleInitFromArg0 {
    u32 word_0;
};
GUEST_OFFSET(LocaleInitFromArg0, word_0, 0x0);

inline constexpr guest::Function<0x0011bf9b, u32(u32, u32)> locale__share_impl;
inline constexpr guest::Function<0x0031b5ed, u32(u32, u32, u32, u32)> Locale__global;

u32 locale__init_from(gptr<LocaleInitFromArg0> arg0, u32 r1) {
    u32 r0_1 = ~0u;
    arg0->word_0 = r0_1;
    locale__share_impl(arg0.addr() + 4u, Locale__global(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    return arg0.addr();
}

}  // namespace d_0011bdf0
GUEST_EXPORT_FRAMED(0x0011bdf1, d_0011bdf0::locale__init_from, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011bf9a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Points at another locale's implementation and adds a reference (+0x1c).
namespace d_0011bf9a {

struct __attribute__((packed)) LocaleShareImplArg0 {
    u32 word_0;
};
GUEST_OFFSET(LocaleShareImplArg0, word_0, 0x0);

struct __attribute__((packed)) LocaleShareImplArg1 {
    u32 word_0;
};
GUEST_OFFSET(LocaleShareImplArg1, word_0, 0x0);

struct __attribute__((packed)) Local_0011bf9a_r1_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0011bf9a_r1_1, word_1c, 0x1c);


void locale__share_impl(gptr<LocaleShareImplArg0> arg0, gptr<LocaleShareImplArg1> arg1) {
    gptr<Local_0011bf9a_r1_1> r1_1 = gptr<Local_0011bf9a_r1_1>(arg1->word_0);
    arg0->word_0 = r1_1.addr();
    r1_1->word_1c = r1_1->word_1c + 1u;
    guest::cpu()->r[1] = r1_1.addr();
}

}  // namespace d_0011bf9a
GUEST_EXPORT(0x0011bf9b, d_0011bf9a::locale__share_impl);

// f_0011bfa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Points at the global locale implementation (made on first use, 0x981fc8) and adds a reference.
namespace d_0011bfa8 {

struct __attribute__((packed)) Local_0011bfa8_r1_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0011bfa8_r1_1, word_1c, 0x1c);

inline constexpr u32 global_locale_address = 0x00981fc8u;
inline guest::global<u32, 0x00981fc8> global_locale;
inline constexpr guest::Function<0x0031bebd, u32(u32, u32, u32, u32)> Locale__classic;

u32 locale__global(u32 r0, u32 r1) {
    u32 r0_1 = *global_locale;
    if (r0_1 == 0) {
        Locale__classic(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    gptr<Local_0011bfa8_r1_1> r1_1 = gptr<Local_0011bfa8_r1_1>(*global_locale);
    *gptr<u32>(r0) = r1_1.addr();
    r1_1->word_1c = r1_1->word_1c + 1u;
    return r0;
}

}  // namespace d_0011bfa8
GUEST_EXPORT_FRAMED(0x0011bfa9, d_0011bfa8::locale__global, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011bfe2: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the string at +0x10.
namespace d_0011bfe2 {

inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_0031c3a8_return_self;

u32 locale__release_string_10(u32 r0) {
    u32 shared_string = r0 + 0x10u;
    call_0031c3a8_return_self(shared_string, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return shared_string - 0x10u;
}

}  // namespace d_0011bfe2
GUEST_EXPORT_FRAMED(0x0011bfe3, d_0011bfe2::locale__release_string_10, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011bffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the object at +0x10 (0010c234).
namespace d_0011bffc {

inline constexpr guest::Function<0x0010c235, u32(u32, u32, u32, u32)> release_strings_4_8_c;

u32 locale__release_10(u32 r0) {
    u32 r0_1 = r0 + 0x10u;
    release_strings_4_8_c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 - 0x10u;
}

}  // namespace d_0011bffc
GUEST_EXPORT_FRAMED(0x0011bffd, d_0011bffc::locale__release_10, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011c00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the facet base vtable (0x90b6a4).
namespace d_0011c00c {

struct __attribute__((packed)) LocaleFacetBaseConstructArg0 {
    u32 word_0;
};
GUEST_OFFSET(LocaleFacetBaseConstructArg0, word_0, 0x0);


void locale__facet_base_construct(gptr<LocaleFacetBaseConstructArg0> arg0) {
    arg0->word_0 = 0x90b6a4;
}

}  // namespace d_0011c00c
GUEST_EXPORT(0x0011c00d, d_0011c00c::locale__facet_base_construct);

// f_0011c0fa: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys an array allocated with its count and element size stored before it.
namespace d_0011c0fa {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 delete_array(u32 arg0_value) {
    u32 r0 = arg0_value;
    gptr<u8> arg0 = gptr<u8>(arg0_value);
    if (r0 == 0) {
        return r0;
    }
    return destroy_array_elements(r0, guest::cpu()->r[1], *gptr<u32>(arg0.addr() - 8u), *gptr<u32>(arg0.addr() - 4u));
}

}  // namespace d_0011c0fa
GUEST_EXPORT_FRAMED(0x0011c0fb, d_0011c0fa::delete_array, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011c120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds an array of objects (count, size, constructor) through 0011c02c.
namespace d_0011c120 {

struct __attribute__((packed)) Local_0011c120_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0011c120_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0011c120_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0011c120_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0011c120_r7_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0011c120_r7_1, word_0, 0x0);
GUEST_OFFSET(Local_0011c120_r7_1, word_4, 0x4);
GUEST_OFFSET(Local_0011c120_r7_1, word_8, 0x8);

inline constexpr guest::Function<0x0011c02d, u32(u32, u32, u32, u32)> Array__allocate;

u32 construct_array(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_0011c120_ea_1> ea_1 = gptr<Local_0011c120_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r1;
    ea_1->word_4 = r2;
    ea_1->word_8 = r3;
    gptr<Local_0011c120_r7_1> r7_1 = gptr<Local_0011c120_r7_1>(frame.at(0).addr());
    r7_1->word_0 = *frame.at<u32>(0x20);
    r7_1->word_4 = 0;
    r7_1->word_8 = 0x2f88b8;
    u32 r7_2 = r7_1.addr() + 0xc;
    Array__allocate(guest::cpu()->r[0], r1, r2, r3);
    return guest::cpu()->r[0];
}

}  // namespace d_0011c120
GUEST_EXPORT_FRAMED(0x0011c121, d_0011c120::construct_array, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0011c218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of word `index` of the array at +0.
namespace d_0011c218 {

struct __attribute__((packed)) WordArrayAtArg0 {
    u32 word_0;
};
GUEST_OFFSET(WordArrayAtArg0, word_0, 0x0);


u32 word_array_at(gptr<WordArrayAtArg0> arg0, u32 r1) {
    return arg0->word_0 + (r1 << 2);
}

}  // namespace d_0011c218
GUEST_EXPORT(0x0011c219, d_0011c218::word_array_at);

// f_0011c220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resizes the locale's facet table to `count` entries (8 bytes each), copying the existing ones and filling the rest
// with the default.
namespace d_0011c220 {

struct __attribute__((packed)) LocaleResizeFacetTableArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(LocaleResizeFacetTableArg0, word_4, 0x4);

inline constexpr guest::Function<0x0011bdf1, u32(u32, u32, u32, u32)> locale__init_from;
inline constexpr guest::Function<0x00307839, u32(u32, u32, u32, u32)> construct_array_veneer;
inline constexpr guest::Function<0x00307889, u32(u32, u32, u32, u32)> release_shared_string;
inline constexpr guest::Function<0x0031b855, u32(u32)> Locale__destroy;
inline constexpr guest::Function<0x0031c1c9, u32(u32, u32, u32, u32)> LocaleHolder__copy;

struct __attribute__((packed)) LocaleResizeFacetTableFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LocaleResizeFacetTableFrame, word_8, 0x8);
GUEST_OFFSET(LocaleResizeFacetTableFrame, word_c, 0xc);
GUEST_OFFSET(LocaleResizeFacetTableFrame, word_10, 0x10);
GUEST_OFFSET(LocaleResizeFacetTableFrame, word_14, 0x14);
GUEST_SIZE(LocaleResizeFacetTableFrame, 0x1c);

void locale__resize_facet_table(gptr<LocaleResizeFacetTableArg0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LocaleResizeFacetTableFrame> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r0_1 = frame.at(0).addr();
    locale__init_from(r0_1, r1, r2, r3);
    frame->word_10 = r0_1;
    u32 r0_2 = construct_array_veneer(8u, r7, 0x11bdf1u, 0x11be0bu);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    frame->word_8 = r0_2;
    u32 r4 = arg0->word_4;
    if (r4 >= r7) {
        r4 = r7;
    }
    u32 r6 = *gptr<u32>(r5);
    frame->word_c = r0_2;
    frame->word_14 = r4 << 3;
    for (;;) {
        if (*gptr<u32>(r5) + frame->word_14 == r6) {
            break;
        }
        LocaleHolder__copy(frame->word_c, r6, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 += 8u;
        frame->word_c = frame->word_c + 8u;
        guest::preempt();
    }
    for (;;) {
        if (r4 >= r7) {
            break;
        }
        u32 locale_holder = (r4 << 3) + frame->word_8;
        r4 += 1u;
        LocaleHolder__copy(locale_holder, frame->word_10, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    }
    release_shared_string(*gptr<u32>(r5), 0x11be0bu, r2, r3);
    *gptr<u32>(r5 + 4u) = r7;
    *gptr<u32>(r5) = frame->word_8;
    Locale__destroy(frame.at(4).addr());
}

}  // namespace d_0011c220
GUEST_EXPORT_FRAMED(0x0011c221, d_0011c220::locale__resize_facet_table, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0011c464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates a new buffer for at least `size` characters (1.625 times the size, or size + 32 at least); returns its
// text.
namespace d_0011c464 {

struct __attribute__((packed)) Local_0011c464_ea_1 {
    u32 shared_string;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0011c464_ea_1, shared_string, 0x0);
GUEST_OFFSET(Local_0011c464_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0011c464_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0011c464_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0011c464_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0011c464_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0011c464_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0011c464_ea_1, word_1c, 0x1c);

inline constexpr guest::Function<0x0031c311, u32(u32, u32, u32, u32)> max_of_words;
inline constexpr guest::Function<0x0031c31d, u32(u32, u32, u32)> SharedString__create_rep;

u32 SharedString__grow(u32 shared_string, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0011c464_ea_1> ea_1 = gptr<Local_0011c464_ea_1>(r13 - 0x20);
    ea_1->shared_string = shared_string;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r14;
    u32 r2_1 = r1 >> 3;
    r13 = ea_1.addr() - 8u;
    u32 r4_1 = (r1 >> 1) + r1 + r2_1;
    u32 r1_1 = r1 + 0x20u;
    if (r1_1 > r4_1) {
        r4_1 = r1_1;
    }
    *gptr<u32>(r13) = r4_1;
    guest::cpu()->r[13] = r13;
    u32 max = max_of_words(r13, r13 + 0x10u, r2_1, r3);
    u32 r1_3 = *gptr<u32>(max);
    guest::cpu()->r[13] = r13;
    u32 r0_4 = SharedString__create_rep(shared_string, r1_3, r3) + 0xcu;
    r13 += 0x18u;
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 tpc_1 = *gptr<u32>(r13 + 0xc);
    r13 += 0x10;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0011c464
GUEST_EXPORT(0x0011c465, d_0011c464::SharedString__grow);

// f_0011c614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Assigns a C string to a shared string: copies it when not empty, else makes the string empty (dropping its buffer
// when shared).
namespace d_0011c614 {

struct __attribute__((packed)) SharedString {
    u32 word_0;
};
GUEST_OFFSET(SharedString, word_0, 0x0);

struct __attribute__((packed)) Local_0011c614_r0_2 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0011c614_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0011c614_r0_2, word_8, 0x8);

inline constexpr u32 shared_string_pointer_address = 0x00af7f3cu;
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x0031c3a9, u32(u32, u32)> SharedString__release;
inline constexpr guest::Function<0x0031c771, u32(u32, u32, u32, u32)> SharedString__mutate;

void SharedString__assign_c_string(gptr<SharedString> shared_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 length = string_length(r1, r1, r2, r3);
    if (length != 0) {
        u32 r2_2 = *gptr<u32>(shared_string->word_0 - 4u);
        *frame.at<u32>(0) = length;
        SharedString__mutate(shared_string.addr(), 0u, r2_2, r1);
        return;
    }
    gptr<Local_0011c614_r0_2> r0_2 = gptr<Local_0011c614_r0_2>(shared_string->word_0 - 0xcu);
    u32 r1_2 = r0_2->word_0 + 1u;
    if (r1_2 != 1u) {
        SharedString__release(shared_string.addr(), r1_2);
        shared_string->word_0 = 0xaf7f3c;
        return;
    }
    r0_2->word_8 = 0;
    u32 r0_3 = shared_string->word_0;
    *frame.at<u8>(0) = 0;
    *gptr<u8>(r0_3) = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0011c614
GUEST_EXPORT_FRAMED(0x0011c615, d_0011c614::SharedString__assign_c_string, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0011cb18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the OS information block at 0xaf74c8 (two values from 00142104 and 0011d7ec).
namespace d_0011cb18 {

struct __attribute__((packed)) Local_0011cb18_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_0011cb18_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_0011cb18_r0_1, word_c, 0xc);

inline constexpr guest::Function<0x0011d7ec, u32(u32, u32)> locale_name_or_default;
inline constexpr guest::Function<0x00142104, u32(u32, u32)> Ndm__set_name;
inline constexpr guest::Function<0x002f91d4, u32(u32)> return_constant_0xaf74c8_;

u32 init_os_info_af74c8() {
    gptr<Local_0011cb18_r0_1> r0_1 = gptr<Local_0011cb18_r0_1>(return_constant_0xaf74c8_(0u));
    u32 r0_2 = Ndm__set_name(0u, 0u);
    r0_1->word_4 = r0_2 + 1u;
    u32 r0_3 = locale_name_or_default(0u, 0u);
    r0_1->word_c = r0_3;
    return r0_3;
}

}  // namespace d_0011cb18
GUEST_EXPORT_FRAMED(0x0011cb18, d_0011cb18::init_os_info_af74c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011cb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the OS services (0011df2c), clears 0x974f50 and starts the next stages.
namespace d_0011cb6c {

inline constexpr guest::Function<0x0011cc54, u32(u32)> start_os_thread_300;
inline constexpr guest::Function<0x0011d2c4, u32(u32)> set_byte_974f50_11d2c4;
inline constexpr guest::Function<0x0011de98, u32(u32)> System__is_new_3ds_ready;
inline constexpr guest::Function<0x0011df2c, u32(u32, u32, u32, u32)> start_os_event_thread;

u32 init_os_services(u32 r0) {
    start_os_event_thread(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    set_byte_974f50_11d2c4(0u);
    return System__is_new_3ds_ready(start_os_thread_300(0u));
}

}  // namespace d_0011cb6c
GUEST_EXPORT_FRAMED(0x0011cb6c, d_0011cb6c::init_os_services, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011cb8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the application memory size (0x1ff80040), splits it between the program, the main heap and the device memory
// (0x31b8000), and creates the heaps.
namespace d_0011cb8c {

inline constexpr u32 app_memory_size_address = 0x00953374u;
inline constexpr u32 memory_layout_limit_address = 0x00953380u;
inline guest::global<u32, 0x00953374> app_memory_size;
inline guest::global<u32, 0x00953378> memory_layout_base;
inline guest::global<u32, 0x0095337c> memory_layout_end;
inline guest::global<u32, 0x00953380> memory_layout_limit;
inline constexpr guest::Function<0x0011d038, u32(u32, u32, u32, u32)> read_u32_0x00974f5c_;
inline constexpr guest::Function<0x0011d048, u32(u32)> set_linear_heap_size;
inline constexpr guest::Function<0x0011d0e0, u32(u32, u32, u32, u32)> read_u32_0x1ff80040_;
inline constexpr guest::Function<0x0011d0f0, u32(u32)> Memory__init_linear;
inline constexpr guest::Function<0x0011d144, u32(u32, u32)> allocate_device_memory;
inline constexpr guest::Function<0x0011d224, u32(u32, u32)> Memory__init_heap_once;
inline constexpr guest::Function<0x0011d258, u32(u32, u32)> is_new_3ds_mode;
inline constexpr guest::Function<0x0011d2fc, u32(u32)> nn__fnd__ExpHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection____CriticalSection___0011d2fc;
inline constexpr guest::Function<0x0011f290, u32(u32)> return_constant_0x7387a8_;
inline constexpr guest::Function<0x0013e154, u32(u32)> read_u32_0x00974f58_;

struct __attribute__((packed)) InitMemoryLayoutFrame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(InitMemoryLayoutFrame, word_0, 0x0);
GUEST_SIZE(InitMemoryLayoutFrame, 0x10);

u32 init_memory_layout(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<InitMemoryLayoutFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = read_u32_0x1ff80040_(r0, r1, guest::cpu()->r[2], r3);
    *app_memory_size = r0_1;
    u32 r0_2 = Memory__init_linear(r0_1);
    *memory_layout_base = r0_2;
    u32 r1_2 = *app_memory_size;
    u32 r0_3 = r1_2 - r0_2;
    *memory_layout_end = r0_3;
    if (is_new_3ds_mode(r0_3, r1_2) != 0) {
        frame->word_0 = allocate_device_memory(0x31b8000u, 0x31b8000u);
        *memory_layout_limit = *memory_layout_end + 0xfce48000u >> 0xc << 0xc;
    } else {
        frame->word_0 = allocate_device_memory(0x31b8000u, 0x31b8000u);
        *memory_layout_limit = *memory_layout_end + 0xfce48000u >> 0xc << 0xc;
    }
    u32 r0_8 = set_linear_heap_size(*memory_layout_limit);
    Memory__init_heap_once(0x8000000u, read_u32_0x00974f5c_(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r0_10 = nn__fnd__ExpHeapTemplate_nn__os__LockPolicy__Object_nn__os__CriticalSection____CriticalSection___0011d2fc(0x2000u);
    u32 r0_12 = return_constant_0x7387a8_(read_u32_0x1ff80040_(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r0_13 = read_u32_0x00974f58_(r0_12);
    frame.release();
    return read_u32_0x00974f5c_(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011cb8c
GUEST_EXPORT(0x0011cb8c, d_0011cb8c::init_memory_layout);

// f_0011cc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless disabled (0x974ad8): marks 0x974ab3, creates a thread (priority 0x300) and waits for it, then closes its
// handles.
namespace d_0011cc54 {

inline constexpr u32 global_00adfa4c_address = 0x00adfa4cu;
inline guest::global<u8, 0x00974ab3> sleep_handling_enabled;
inline constexpr guest::Function<0x0011dff4, u32(u32, u32)> OsObjectList__add;
inline constexpr guest::Function<0x0011e170, u32(u32, u32, u32, u32)> read_s8_0x00974ad8_;
inline constexpr guest::Function<0x0011e1a4, u32(u32, u32, u32)> Memory__map_region;
inline constexpr guest::Function<0x0011e378, u32(u32)> ipc_97d7f8_command_55;
inline constexpr guest::Function<0x0012a518, u32(u32, u32)> wait_on_handle;
inline constexpr guest::Function<0x0012ab78, u32(u32)> close_service_handle_97d7f8;

u32 start_os_thread_300(u32 r0, u32 r1, u32 r2) {
    if (read_s8_0x00974ad8_(r0, r1, r2, guest::cpu()->r[3]) != 0) {
        return 0u;
    }
    *sleep_handling_enabled = 1;
    OsObjectList__add(global_00adfa4c_address, 0x100u);
    u32 r0_2 = Memory__map_region(0x300u, r0 & ~7u, 0xfu);
    u32 r1_2 = r0_2 & 0x80000000u;
    if (s32(r1_2) < 0) {
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    wait_on_handle(r0_2, r1_2);
    ipc_97d7f8_command_55(0u);
    close_service_handle_97d7f8(0u);
    return 0u;
}

}  // namespace d_0011cc54
GUEST_EXPORT_FRAMED(0x0011cc54, d_0011cc54::start_os_thread_300, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011cfa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the upper-screen framework and makes it the framework instance.
namespace d_0011cfa8 {

struct __attribute__((packed)) Local_0011cfa8_r0_1 {
    u32 vtable;
    u8 unknown_4[0x164];  // (not used here)
    u8 byte_168;
    u8 byte_169;
    u8 unknown_16a[0x2];  // (not used here)
    u32 word_16c;
    u32 word_170;
};
GUEST_OFFSET(Local_0011cfa8_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_0011cfa8_r0_1, byte_168, 0x168);
GUEST_OFFSET(Local_0011cfa8_r0_1, byte_169, 0x169);
GUEST_OFFSET(Local_0011cfa8_r0_1, word_16c, 0x16c);
GUEST_OFFSET(Local_0011cfa8_r0_1, word_170, 0x170);

inline constexpr u32 vtable_UlcdFramework = 0x008ee848u;
inline constexpr u32 ulcd_framework_instance_address = 0x009529c8u;
inline guest::global<u32, 0x009529c8> ulcd_framework_instance;
inline constexpr guest::Function<0x0011e838, u32(u32, u32, u32, u32)> sead__UlcdDoubleCmdGameFrameworkCtrNw4c__UlcdDoubleCmdGameFrameworkCtrNw4c;

u32 UlcdFramework__UlcdFramework(u32 ulcd_framework, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0011cfa8_r0_1> r0_1 = gptr<Local_0011cfa8_r0_1>(sead__UlcdDoubleCmdGameFrameworkCtrNw4c__UlcdDoubleCmdGameFrameworkCtrNw4c(ulcd_framework, r1, r2, r3));
    r0_1->vtable = vtable_UlcdFramework;
    r0_1->byte_168 = 1;
    r0_1->byte_169 = 0;
    r0_1->word_16c = 0;
    r0_1->word_170 = 0;
    *ulcd_framework_instance = r0_1.addr();
    guest::cpu()->r[1] = ulcd_framework_instance_address;
    return r0_1.addr();
}

}  // namespace d_0011cfa8
GUEST_EXPORT_FRAMED(0x0011cfa8, d_0011cfa8::UlcdFramework__UlcdFramework, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011cfe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps ten times the tick rate (0x974f18) and marks the time as ready (0x974f00, 0x974f01).
namespace d_0011cfe4 {

inline guest::global<u8, 0x00974f00> time_ticks_ready;
inline guest::global<u8, 0x00974f01> time_ticks_ready_b;
inline guest::global<u32, 0x00974f18> time_ticks_a;
inline guest::global<u32, 0x00974f1c> time_ticks_b;
inline constexpr guest::Function<0x0011ddb0, u32(u32, u32)> ConfigMem__query;
inline constexpr guest::Function<0x0011de28, u32(u32, u32, u32, u32)> ConfigMem__query_b;

u32 init_time_ticks(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = ConfigMem__query_b(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = r0_1 * 0xau;
    u32 r1_1 = s32(r0_2) >> 0x1f;
    *time_ticks_a = r0_2;
    *time_ticks_b = r1_1;
    if (ConfigMem__query(r0_2, r1_1) != 0) {
        *time_ticks_ready_b = 1;
    }
    u32 r1_2 = *time_ticks_ready_b;
    if (r1_2 != 0) {
        *time_ticks_ready = 1;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r1_3 = *time_ticks_b | *time_ticks_a;
    if (r1_3 == 0) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    *time_ticks_ready = 1;
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_0011cfe4
GUEST_EXPORT_FRAMED(0x0011cfe4, d_0011cfe4::init_time_ticks, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011d048: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Grows or shrinks the memory mapped from 0x8000000 to `size` (a multiple of 0x1000; svcControlMemory), keeping the
// size at 0x974f5c.
namespace d_0011d048 {

inline constexpr u32 device_memory_address = 0x00974f54u;
inline constexpr u32 linear_heap_size_address = 0x00974f5cu;
inline guest::global<u32, 0x00974f5c> linear_heap_size;
inline constexpr guest::Function<0x0011d834, u32(u32, u32, u32, u32)> svc_control_memory;

struct __attribute__((packed)) SetLinearHeapSizeFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SetLinearHeapSizeFrame, word_0, 0x0);
GUEST_OFFSET(SetLinearHeapSizeFrame, word_4, 0x4);
GUEST_SIZE(SetLinearHeapSizeFrame, 0xc);

u32 set_linear_heap_size(u32 r0, u32 r1) {
    guest::StackFrameOf<SetLinearHeapSizeFrame> frame;  // the original's stack frame
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    if ((r0 << 0x14) != 0) {
        return 0xe0e01bf2u;
    }
    u32 r0_1 = *linear_heap_size;
    if (r0 <= r0_1) {
        frame->word_0 = 1;
        frame->word_4 = 0;
        r0_3 = svc_control_memory(frame.at(8).addr(), r0 + 0x8000000u, 0u, r0_1 - r0);
        r1_2 = r0_3 & 0x80000000u;
        if (s32(r1_2) < 0) {
            guest::cpu()->r[1] = r1_2;
            return r0_3;
        }
    } else {
        frame->word_0 = 3;
        frame->word_4 = 3;
        r0_3 = svc_control_memory(frame.at(8).addr(), r0_1 + 0x8000000u, 0u, r0 - r0_1);
        r1_2 = r0_3 & 0x80000000u;
        if (s32(r1_2) < 0) {
            guest::cpu()->r[1] = r1_2;
            return r0_3;
        }
    }
    *linear_heap_size = r0;
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_0011d048
GUEST_EXPORT_FRAMED(0x0011d048, d_0011d048::set_linear_heap_size, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0011d144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Maps the device memory block of `size` (0x31b8000 here) and keeps its address.
namespace d_0011d144 {

inline constexpr u32 device_memory_address = 0x00974f54u;
inline constexpr guest::Function<0x0011d834, u32(u32, u32, u32, u32)> svc_control_memory;

struct __attribute__((packed)) AllocateDeviceMemoryFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(AllocateDeviceMemoryFrame, word_0, 0x0);
GUEST_OFFSET(AllocateDeviceMemoryFrame, word_4, 0x4);
GUEST_OFFSET(AllocateDeviceMemoryFrame, word_8, 0x8);
GUEST_SIZE(AllocateDeviceMemoryFrame, 0x10);

u32 allocate_device_memory(u32 r0, u32 r1) {
    guest::StackFrameOf<AllocateDeviceMemoryFrame> frame;  // the original's stack frame
    u32 r5 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r4 = r0;
    if ((r0 << 0x14) == 0) {
        r5 = device_memory_address;
        r0_1 = *gptr<u32>(r5 + 4u);
        r1 = *gptr<u32>(r5);
        if (r4 <= r0_1) {
            goto L_11d1e4;
        }
        if (r0_1 == 0 || ((r0_1 | r4) & 0xfffffu) == 0u) {
            goto L_11d194;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0xe0e01bf2u;
L_11d194:;
    r3_1 = r4 - r0_1;
    if (r0_1 != 0) {
        r1 += r0_1;
    }
    frame->word_0 = 0x10003;
    frame->word_4 = 3;
    if (r0_1 == 0) {
        r1 = 0u;
    }
    r0_2 = frame.at(8).addr();
    r0 = svc_control_memory(r0_2, r1, 0u, r3_1);
    r1 = r0 & 0x80000000u;
    if (s32(r1) < 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 == 0) {
        r1 = frame->word_8;
        *gptr<u32>(r5) = r1;
    }
    *gptr<u32>(r5 + 4u) = r4;
    guest::cpu()->r[1] = r1;
    return r0;
L_11d1e4:;
    frame->word_0 = 1;
    frame->word_4 = 0;
    r0 = svc_control_memory(frame.at(8).addr(), r1 + r4, 0u, r0_1 - r4);
    r1 = r0 & 0x80000000u;
    if (s32(r1) >= 0) {
        if (r4 == 0) {
            *gptr<u32>(r5) = 0;
        }
        *gptr<u32>(r5 + 4u) = r4;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0011d144
GUEST_EXPORT_FRAMED(0x0011d144, d_0011d144::allocate_device_memory, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011d258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the extended memory mode is on (read once from the system with 0x400024b, kept at 0x974f48).
namespace d_0011d258 {

inline constexpr u32 new_3ds_mode_address = 0x00974f4cu;
inline guest::global<u8, 0x00974f48> new_3ds_mode_checked;
inline guest::global<u32, 0x00974f4c> new_3ds_mode;
inline constexpr guest::Function<0x0011e180, u32(u32, u32)> query_system_value;
inline constexpr guest::Function<0x00134250, u32(u32, u32)> fatal_result;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;

u32 is_new_3ds_mode(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    if ((*new_3ds_mode & 1u) == 0) {
        u32 first_time_2 = static_guard_acquire(new_3ds_mode_address, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        if (first_time_2 != 0) {
            u32 r0_3 = query_system_value(frame.at(0).addr(), 0x400024bu);
            r1 = guest::cpu()->r[1];
            if ((r0_3 >> 0x1f) != 0) {
                fatal_result(r0_3, r1);
                r1 = guest::cpu()->r[1];
            }
            u32 r0_4 = *frame.at<u8>(0);
            if (r0_4 != 0) {
                r0_4 = 1u;
            }
            *new_3ds_mode_checked = u8(r0_4);
        }
    }
    u32 r0_5 = s8(*new_3ds_mode_checked);
    guest::cpu()->r[1] = r1;
    return r0_5;
}

}  // namespace d_0011d258
GUEST_EXPORT_FRAMED(0x0011d258, d_0011d258::is_new_3ds_mode, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0011d2d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0011f8d4 and reports a fatal error with information when it fails.
namespace d_0011d2d4 {

inline constexpr guest::Function<0x0011f8d4, u32(u32, u32, u32, u32)> service_8b233c_acquire;
inline constexpr guest::Function<0x0012f598, u32(u32, u32)> report_fatal_result_with_info;

u32 call_11f8d4_or_fatal(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = service_8b233c_acquire(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = r0_1 & 0x80000000u;
    if (s32(r1_1) >= 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    if ((r0_1 >> 0x1f) == 0) {
        guest::cpu()->r[1] = 0x11d2ecu;
        return r0_1;
    }
    frame.release();
    return report_fatal_result_with_info(r0_1, 0x11d2ecu);
}

}  // namespace d_0011d2d4
GUEST_EXPORT(0x0011d2d4, d_0011d2d4::call_11f8d4_or_fatal);

// f_0011d350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the root heap and every game heap (work, stage, real estate, animations, weather, particles, effects, fader,
// UGC, script, sound, network).
namespace d_0011d350 {

inline constexpr u32 sead_particle_heap_address = 0x00952c68u;
inline constexpr u32 heap_mgr_instance_address = 0x00975338u;
inline constexpr u32 game_heaps_address = 0x00a1867cu;
inline guest::global<u32, 0x00952c68> sead_particle_heap;
inline guest::global<u32, 0x00975338> heap_mgr_instance;
inline constexpr guest::Function<0x00100049, u32(u32)> create_dll_heap;
inline constexpr guest::Function<0x00100089, u32(u32)> create_net_heap;
inline constexpr guest::Function<0x001000c5, u32(u32)> create_ugc_heap;
inline constexpr guest::Function<0x00100105, u32(u32)> create_font_heap;
inline constexpr guest::Function<0x00100149, u32(u32)> create_save_heap;
inline constexpr guest::Function<0x0010018d, u32(u32)> create_work_heap;
inline constexpr guest::Function<0x001001d1, u32(u32)> create_fader_heap;
inline constexpr guest::Function<0x00100215, u32(u32)> create_field_heap;
inline constexpr guest::Function<0x00100261, u32(u32, u32, u32, u32)> create_photo_heap;
inline constexpr guest::Function<0x001002a5, u32(u32)> create_sound_heap;
inline constexpr guest::Function<0x001002e9, u32(u32)> create_stage_heap;
inline constexpr guest::Function<0x0010032d, u32(u32)> create_script_heap;
inline constexpr guest::Function<0x00100379, u32(u32)> create_net_game_heap;
inline constexpr guest::Function<0x001003bd, u32(u32)> create_weather_heap;
inline constexpr guest::Function<0x00100401, u32(u32)> create_no_device_heap;
inline constexpr guest::Function<0x00100449, u32(u32)> create_real_estate_heap;
inline constexpr guest::Function<0x00100491, u32(u32)> create_model_effect_unit_heap;
inline constexpr guest::Function<0x001004dd, u32(u32)> create_sead_particle_heap;
inline constexpr guest::Function<0x00100529, u32(u32)> create_human_anim_bank_heap;
inline constexpr guest::Function<0x00100575, u32(u32)> create_model_effect_res_heap;
inline constexpr guest::Function<0x001005c1, u32(u32)> create_particle_handle_heap;
inline constexpr guest::Function<0x0011da44, u32(u32, u32, u32, u32)> reserve_memory_block;
inline constexpr guest::Function<0x0011eaac, u32(u32, u32)> create_save_allocator;
inline constexpr guest::Function<0x003045a8, u32(u32)> current_thread_context;

u32 create_game_heaps() {
    guest::StackFrame frame(0x10);  // the original's stack frame
    reserve_memory_block(game_heaps_address, 0x3cd800u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 parent = create_no_device_heap(game_heaps_address);
    u32 context = current_thread_context(*heap_mgr_instance);
    create_dll_heap(parent);
    create_work_heap(context);
    create_stage_heap(context);
    create_field_heap(context);
    create_real_estate_heap(context);
    create_human_anim_bank_heap(context);
    create_weather_heap(context);
    create_sead_particle_heap(context);
    create_particle_handle_heap(*sead_particle_heap);
    create_model_effect_unit_heap(context);
    create_model_effect_res_heap(context);
    create_fader_heap(context);
    create_ugc_heap(context);
    create_script_heap(context);
    create_font_heap(context);
    create_sound_heap(context);
    create_save_heap(context);
    create_save_allocator(0xbb800u, context);
    create_net_heap(parent);
    create_net_game_heap(context);
    frame.release();
    return create_photo_heap(context, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011d350
GUEST_EXPORT(0x0011d350, d_0011d350::create_game_heaps);

// f_0011d458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls is_new_3ds_mode.
namespace d_0011d458 {

inline constexpr u32 memory_layout_base_address = 0x00953378u;
inline guest::global<u32, 0x00953378> memory_layout_base;
inline constexpr guest::Function<0x0011d258, u32(u32, u32, u32, u32)> is_new_3ds_mode;

u32 is_new_3ds_mode_veneer() {
    return is_new_3ds_mode(*memory_layout_base, 0xa78000u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011d458
GUEST_EXPORT(0x0011d458, d_0011d458::is_new_3ds_mode_veneer);

// f_0011d480: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies two words and initializes the four 0x14-byte entries and the rest of a thread block (id -1, active).
namespace d_0011d480 {

struct __attribute__((packed)) InitThreadBlockArg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(InitThreadBlockArg0, word_0, 0x0);
GUEST_OFFSET(InitThreadBlockArg0, word_4, 0x4);

struct __attribute__((packed)) InitThreadBlockArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(InitThreadBlockArg1, word_0, 0x0);
GUEST_OFFSET(InitThreadBlockArg1, word_4, 0x4);

struct __attribute__((packed)) Local_0011d480_r0_3 {
    u8 unknown_0[0x78];  // (not used here)
    u8 byte_78;
    u8 unknown_79[0x3];  // (not used here)
    u32 word_7c;
};
GUEST_OFFSET(Local_0011d480_r0_3, byte_78, 0x78);
GUEST_OFFSET(Local_0011d480_r0_3, word_7c, 0x7c);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 init_thread_block(gptr<InitThreadBlockArg0> arg0, gptr<InitThreadBlockArg1> arg1) {
    u32 r2_1 = arg1->word_4;
    arg0->word_0 = arg1->word_0;
    arg0->word_4 = r2_1;
    u32 r0_2 = for_each_element(arg0.addr() + 8, 0x11e460u, 0x14u, 4u);
    *gptr<u32>(r0_2 + 0x50u) = 0;
    *gptr<u32>(r0_2 + 0x54u) = 0;
    *gptr<u32>(r0_2 + 0x58u) = 0;
    *gptr<u32>(r0_2 + 0x5cu) = 0;
    *gptr<u32>(r0_2 + 0x60u) = 0;
    *gptr<u32>(r0_2 + 0x64u) = 0;
    u32 ea_7 = r0_2 + 0x68u;
    *gptr<u32>(ea_7) = 0;
    u32 ea_8 = ea_7 + 4u;
    *gptr<u32>(ea_8) = ~0u;
    gptr<Local_0011d480_r0_3> r0_3 = gptr<Local_0011d480_r0_3>(ea_8 - 0x74u);
    r0_3->byte_78 = 1;
    r0_3->word_7c = 0;
    guest::cpu()->r[1] = 0u;
    return r0_3.addr();
}

}  // namespace d_0011d480
GUEST_EXPORT_FRAMED(0x0011d480, d_0011d480::init_thread_block, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011d4dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores 0x3000000 and 0 in a record.
namespace d_0011d4dc {

struct __attribute__((packed)) InitPriority3000000Arg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(InitPriority3000000Arg0, word_0, 0x0);
GUEST_OFFSET(InitPriority3000000Arg0, word_4, 0x4);


void init_priority_3000000(gptr<InitPriority3000000Arg0> arg0) {
    arg0->word_0 = 0x3000000;
    arg0->word_4 = 0;
    guest::cpu()->r[1] = 0x3000000u;
}

}  // namespace d_0011d4dc
GUEST_EXPORT(0x0011d4dc, d_0011d4dc::init_priority_3000000);

// f_0011d4ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores 0 and -1 in a record.
namespace d_0011d4ec {

struct __attribute__((packed)) InitIdPairNoneArg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(InitIdPairNoneArg0, word_0, 0x0);
GUEST_OFFSET(InitIdPairNoneArg0, word_4, 0x4);


void init_id_pair_none(gptr<InitIdPairNoneArg0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = ~0u;
}

}  // namespace d_0011d4ec
GUEST_EXPORT(0x0011d4ec, d_0011d4ec::init_id_pair_none);

// f_0011d4fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 5 of the object when it exists.
namespace d_0011d4fc {

struct __attribute__((packed)) CallVirtual5IfPresentArg0 {
    u32 word_0;
};
GUEST_OFFSET(CallVirtual5IfPresentArg0, word_0, 0x0);


u32 call_virtual_5_if_present(gptr<CallVirtual5IfPresentArg0> arg0, u32 r1) {
    if (arg0.addr() == 0) {
        return arg0.addr();
    }
    u32 r1_1 = *gptr<u32>(arg0->word_0 + 0x14u);
    // virtual function 5 of arg0.addr()
    return guest::call_address<u32>(r1_1, arg0.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011d4fc
GUEST_EXPORT(0x0011d4fc, d_0011d4fc::call_virtual_5_if_present);

// f_0011d538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Installs the home-menu, sleep and power callbacks, then waits for a pending request and resumes the object at
// 0xac1930.
namespace d_0011d538 {

inline constexpr u32 global_0094e3bc_address = 0x0094e3bcu;
inline constexpr u32 applet_callbacks_address = 0x00ac1930u;
inline guest::global<u8, 0x0094e3ad> applet_callbacks_installed;
inline constexpr guest::Function<0x0011e3b4, u32(u32)> init_applet_state;
inline constexpr guest::Function<0x0011eafc, u32(u32)> applet_state_at_least_2;
inline constexpr guest::Function<0x0011eb18, u32(u32)> read_u8_0x0094e3a8_;
inline constexpr guest::Function<0x0011edd8, u32(u32, u32, u32, u32)> Timer__start;
inline constexpr guest::Function<0x001242a0, u32(u32, u32)> set_applet_callback_c;
inline constexpr guest::Function<0x001242b4, u32(u32, u32)> set_applet_callback_a;
inline constexpr guest::Function<0x001242c8, u32(u32)> read_s8_0x00974ae1_;
inline constexpr guest::Function<0x00124304, u32(u32, u32)> set_applet_callback_b;
inline constexpr guest::Function<0x00124c88, u32(u32)> read_u8_0x00974ade_;
inline constexpr guest::Function<0x00127d1c, u32(u32, u32)> svc_sleep_thread_zero;
inline constexpr guest::Function<0x00128b54, u32(u32, u32, u32, u32)> Handle__close_if_open;
inline constexpr guest::Function<0x0014f794, u32(u32, u32)> thunk_0014f794;
inline constexpr guest::Function<0x0014f79c, u32(u32, u32)> thunk_0014f79c;

u32 install_applet_callbacks(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Handle__close_if_open(global_0094e3bc_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    set_applet_callback_a(0x11d87cu, 0u);
    set_applet_callback_c(0x11d870u, 0u);
    set_applet_callback_b(0x11d8a0u, 0u);
    u32 r0_2 = read_u8_0x00974ade_(init_applet_state(1u));
    if (r0_2 == 0) {
        r0_2 = read_s8_0x00974ae1_(r0_2);
        if (r0_2 == 0) {
            return r0_2;
        }
    }
    u32 r0_3 = applet_state_at_least_2(r0_2);
    if (r0_3 != 0) {
        u32 r0 = read_u8_0x0094e3a8_(r0_3);
        r1 = guest::cpu()->r[1];
        if (r0 != 2u) {
L_11d5ac:;
            r0 = thunk_0014f794(r0, r1);
            r1 = guest::cpu()->r[1];
            if (r0 == 0) {
                r0 = svc_sleep_thread_zero(r0, r1);
                r1 = guest::cpu()->r[1];
                guest::preempt();
                goto L_11d5ac;
            }
        }
        thunk_0014f79c(r0, r1);
    }
    if (*applet_callbacks_installed == 0) {
        *applet_callbacks_installed = 1;
    }
    frame.release();
    return Timer__start(applet_callbacks_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011d538
GUEST_EXPORT(0x0011d538, d_0011d538::install_applet_callbacks);

// f_0011d61c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the system region (0x95721c) and language (0x95721d); a language other than 1, 2, 5 or 9 falls back to 1.
namespace d_0011d61c {

inline guest::global<u8, 0x0095721c> global_0095721c;
inline guest::global<u8, 0x0095721d> system_language;
inline constexpr guest::Function<0x0011dc88, u32(u32)> Cfg__get_region;
inline constexpr guest::Function<0x0011fad0, u32(u32, u32, u32, u32)> Service__query_flag;

void init_region_and_language(u32 r0) {
    u32 r0_1 = Service__query_flag(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0095721c = u8(r0_1);
    u32 region = Cfg__get_region(r0_1);
    *system_language = u8(region);
    if (region == 1u || region == 2u) {
        return;
    }
    if (region == 5u || region == 9u) {
        return;
    } else {
        *system_language = 1;
    }
}

}  // namespace d_0011d61c
GUEST_EXPORT_FRAMED(0x0011d61c, d_0011d61c::init_region_and_language, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011d65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the word at 0x951670; returns 0.
namespace d_0011d65c {

inline constexpr u32 visit_session_value_address = 0x00951670u;
inline guest::global<u32, 0x00951670> visit_session_value;

u32 clear_visit_session_value() {
    *visit_session_value = 0;
    guest::cpu()->r[1] = visit_session_value_address;
    return 0u;
}

}  // namespace d_0011d65c
GUEST_EXPORT(0x0011d65c, d_0011d65c::clear_visit_session_value);

// f_0011d670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the graphics memory manager on a heap: the two VRAM regions, and makes it the boot object.
namespace d_0011d670 {

struct __attribute__((packed)) Local_0011d670_r0_2 {
    u32 vtable;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0011d670_r0_2, vtable, 0x0);
GUEST_OFFSET(Local_0011d670_r0_2, byte_4, 0x4);
GUEST_OFFSET(Local_0011d670_r0_2, word_8, 0x8);
GUEST_OFFSET(Local_0011d670_r0_2, word_c, 0xc);
GUEST_OFFSET(Local_0011d670_r0_2, word_10, 0x10);
GUEST_OFFSET(Local_0011d670_r0_2, word_14, 0x14);
GUEST_OFFSET(Local_0011d670_r0_2, word_18, 0x18);
GUEST_OFFSET(Local_0011d670_r0_2, word_1c, 0x1c);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 vtable_graphic__MemoryMgr = 0x0090abc0u;
inline guest::global<u32, 0x00952b8c> boot_object;
inline constexpr guest::Function<0x0011e8cc, u32(u32, u32, u32, u32)> Utf16__to_utf8;
inline constexpr guest::Function<0x00121824, u32(u32)> address_for_region_a;
inline constexpr guest::Function<0x00121860, u32(u32, u32)> address_for_region_b;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_on_heap;

struct __attribute__((packed)) CreateGraphicsMemoryMgrFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 object_8_vtable;
    u32 word_c;
};
GUEST_OFFSET(CreateGraphicsMemoryMgrFrame, word_0, 0x0);
GUEST_OFFSET(CreateGraphicsMemoryMgrFrame, object_8_vtable, 0x8);
GUEST_OFFSET(CreateGraphicsMemoryMgrFrame, word_c, 0xc);
GUEST_SIZE(CreateGraphicsMemoryMgrFrame, 0x10);

u32 create_graphics_memory_mgr(u32 r0) {
    guest::StackFrameOf<CreateGraphicsMemoryMgrFrame> frame;  // the original's stack frame
    frame->word_c = 0x11d788;
    frame->word_0 = 0;
    frame->object_8_vtable = vtable_sead__SafeStringBase_char__rec;
    u32 r0_1 = create_heap(0x6af000u, frame.at(8).addr(), r0, 1u);
    gptr<Local_0011d670_r0_2> block = gptr<Local_0011d670_r0_2>(allocate_on_heap(0x20u, r0_1, 4u));
    block->byte_4 = 0;
    block->vtable = vtable_graphic__MemoryMgr;
    block->word_c = 0;
    block->word_10 = 0;
    block->word_14 = 0;
    block->word_18 = 0;
    block->word_1c = 0;
    block->word_8 = r0_1;
    u32 r0_3 = address_for_region_b(0x20000u, vtable_graphic__MemoryMgr);
    u32 r1_3 = address_for_region_a(0x20000u) - r0_3;
    frame->word_c = 0x11d7a0;
    frame->object_8_vtable = vtable_sead__SafeStringBase_char__rec;
    frame->word_0 = block->word_8;
    block->word_c = Utf16__to_utf8(r0_3, r1_3, frame.at(8).addr(), 0x7800u);
    u32 r0_6 = address_for_region_b(0x30000u, guest::cpu()->r[1]);
    u32 r1_6 = address_for_region_a(0x30000u) - r0_6;
    frame->word_c = 0x11d7ac;
    frame->object_8_vtable = vtable_sead__SafeStringBase_char__rec;
    frame->word_0 = block->word_8;
    u32 r0_8 = Utf16__to_utf8(r0_6, r1_6, frame.at(8).addr(), 0x7800u);
    block->word_10 = r0_8;
    block->word_14 = block->word_8;
    block->word_18 = block->word_c;
    block->word_1c = r0_8;
    *boot_object = block.addr();
    return block.addr();
}

}  // namespace d_0011d670
GUEST_EXPORT_FRAMED(0x0011d670, d_0011d670::create_graphics_memory_mgr, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011d7bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the service named at 0x8a275c, starts its client once and reads its 16-bit value into 0x952ad8 (0 on failure).
namespace d_0011d7bc {

inline constexpr u32 service_value_952ad8_address = 0x00952ad8u;
inline guest::global<u16, 0x00952ad8> service_value_952ad8;
inline constexpr guest::Function<0x0011db9c, u32(u32)> read_service_value_16;
inline constexpr guest::Function<0x0011dc5c, u32(u32)> start_service_client_once;
inline constexpr guest::Function<0x0011dedc, u32(u32, u32, u32, u32)> open_service_97e004;

u32 init_service_952ad8(u32 r0, u32 r1) {
    start_service_client_once(open_service_97e004(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r0_3 = read_service_value_16(service_value_952ad8_address) & 0x80000000u;
    if (s32(r0_3) >= 0) {
        return r0_3;
    }
    *service_value_952ad8 = 0;
    guest::cpu()->r[1] = service_value_952ad8_address;
    return 0u;
}

}  // namespace d_0011d7bc
GUEST_EXPORT_FRAMED(0x0011d7bc, d_0011d7bc::init_service_952ad8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011d7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The default locale (0x944408) for an empty name or the default name; 0 for any other.
namespace d_0011d7ec {

struct __attribute__((packed)) LocaleNameOrDefaultArg1 {
    u8 byte_0;
};
GUEST_OFFSET(LocaleNameOrDefaultArg1, byte_0, 0x0);

inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 locale_name_or_default(u32 r0_unused, gptr<LocaleNameOrDefaultArg1> arg1) {
    if (arg1.addr() == 0 || arg1->byte_0 == 0) {
        return 0x944408u;
    }
    u32 r0_1 = strcmp(0x944400u, arg1.addr());
    if (r0_1 == 0) {
        return 0x944408u;
    }
    return 0u;
}

}  // namespace d_0011d7ec
GUEST_EXPORT_FRAMED(0x0011d7ec, d_0011d7ec::locale_name_or_default, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011da44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When memory blocks are on (0x974f60) and the block is not reserved: reserves `size` (rounded to 0x1000) for it; a
// failure is fatal.
namespace d_0011da44 {

struct __attribute__((packed)) ReserveMemoryBlockArg0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(ReserveMemoryBlockArg0, word_8, 0x8);
GUEST_OFFSET(ReserveMemoryBlockArg0, byte_10, 0x10);

inline constexpr u32 memory_block_list_address = 0x00ae0f64u;
inline guest::global<u8, 0x00974f60> memory_block_reserved;
inline constexpr guest::Function<0x00128cc4, u32(u32, u32, u32, u32)> MemoryPool__allocate_pages;
inline constexpr guest::Function<0x0012f204, u32(u32)> check_result;

void reserve_memory_block(gptr<ReserveMemoryBlockArg0> game_heaps_address, u32 r1) {
    if (*memory_block_reserved == 0 || game_heaps_address->word_8 != 0) {
        return;
    }
    if (MemoryPool__allocate_pages(memory_block_list_address, game_heaps_address.addr(), ((r1 + 0xfffu) >> 0xc) << 0xc, 0u) == 0) {
        check_result(0xd8601837u);
    }
    game_heaps_address->byte_10 = 0;
}

}  // namespace d_0011da44
GUEST_EXPORT_FRAMED(0x0011da44, d_0011da44::reserve_memory_block, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011daac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The handle kept at 0x97dff8, fetched once through 0011f00c.
namespace d_0011daac {

inline constexpr u32 service_handle_cache_address = 0x0097dff8u;
inline guest::global<u32, 0x0097dff8> service_handle_cache;
inline constexpr guest::Function<0x0011f00c, u32(u32, u32, u32, u32)> svc_create_address_arbiter;

struct __attribute__((packed)) CachedServiceHandleFrame {
    u32 word_0;
};
GUEST_OFFSET(CachedServiceHandleFrame, word_0, 0x0);
GUEST_SIZE(CachedServiceHandleFrame, 0x4);

u32 cached_service_handle(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<CachedServiceHandleFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = *service_handle_cache;
    if (r0_1 != 0) {
        return r0_1;
    }
    frame->word_0 = 0;
    u32 r0_4 = svc_create_address_arbiter(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3) & 0x80000000u;
    if (s32(r0_4) >= 0) {
        r0_4 = frame->word_0;
        *service_handle_cache = r0_4;
    }
    return r0_4;
}

}  // namespace d_0011daac
GUEST_EXPORT_FRAMED(0x0011daac, d_0011daac::cached_service_handle, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0011db88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps the thread-local storage pointer at 0x974f68.
namespace d_0011db88 {

inline constexpr u32 global_00974f64_address = 0x00974f64u;
inline guest::global<u32, 0x00974f68> global_00974f68;

u32 store_thread_local_storage() {
    u32 r0_1 = guest::cpu()->tls;
    *global_00974f68 = r0_1;
    guest::cpu()->r[1] = global_00974f64_address;
    return r0_1;
}

}  // namespace d_0011db88
GUEST_EXPORT(0x0011db88, d_0011db88::store_thread_local_storage);

// f_0011db9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Asks the service for a 16-bit value (into +0); 0x11464 when the request failed.
namespace d_0011db9c {

struct __attribute__((packed)) ServiceValue952ad8Address {
    u16 half_0;
};
GUEST_OFFSET(ServiceValue952ad8Address, half_0, 0x0);

inline guest::global<u32, 0x008fab74> worker_service_a;
inline guest::global<u32, 0x008fab94> worker_service_b;
inline guest::global<u32, 0x008fab98> worker_service_c;
inline constexpr guest::Function<0x0011f220, u32(u32, u32)> ResultHolder__release;
inline constexpr guest::Function<0x0011f31c, u32(u32)> Friends__event_loop;
inline constexpr guest::Function<0x0011f6e8, u32(u32, u32, u32, u32)> WorkerThread__post;
inline constexpr guest::Function<0x001239e8, u32(u32, u32)> Fs__read_file_size;

struct __attribute__((packed)) ReadServiceValue16Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
    u16 half_20;
    u8 unknown_22[0x12];  // (not read or written by name)
};
GUEST_OFFSET(ReadServiceValue16Frame, word_0, 0x0);
GUEST_OFFSET(ReadServiceValue16Frame, word_4, 0x4);
GUEST_OFFSET(ReadServiceValue16Frame, word_8, 0x8);
GUEST_OFFSET(ReadServiceValue16Frame, word_c, 0xc);
GUEST_OFFSET(ReadServiceValue16Frame, word_10, 0x10);
GUEST_OFFSET(ReadServiceValue16Frame, word_14, 0x14);
GUEST_OFFSET(ReadServiceValue16Frame, word_18, 0x18);
GUEST_OFFSET(ReadServiceValue16Frame, half_20, 0x20);
GUEST_SIZE(ReadServiceValue16Frame, 0x34);

u32 read_service_value_16(gptr<ServiceValue952ad8Address> service_value_952ad8_address) {
    guest::StackFrameOf<ReadServiceValue16Frame> frame;  // the original's stack frame
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    u32 r0_1 = *worker_service_a;
    u32 r2_1 = frame.at(0).addr();
    frame->word_0 = r0_1;
    u32 r3_1 = *gptr<u32>(r0_1 - 0x30u);
    *gptr<u32>(frame.at(0).addr() + r3_1) = *worker_service_b;
    frame->word_4 = *worker_service_c;
    u32 r0_3 = WorkerThread__post(r2_1, frame.at(0x1c).addr(), r2_1, r3_1);
    Friends__event_loop(frame.at(0x1c).addr());
    Fs__read_file_size(frame.at(0).addr(), frame.at(0x1c).addr());
    service_value_952ad8_address->half_0 = frame->half_20;
    if (r0_3 != 0) {
        ResultHolder__release(frame.at(0).addr(), 0u);
        return 0x11464u;
    }
    ResultHolder__release(frame.at(0).addr(), 0u);
    return 0u;
}

}  // namespace d_0011db9c
GUEST_EXPORT_FRAMED(0x0011db9c, d_0011db9c::read_service_value_16, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0011dc5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the service client once (0x974f76).
namespace d_0011dc5c {

inline guest::global<u8, 0x00974f76> storage_mounted;
inline constexpr guest::Function<0x0011f2e4, u32(u32, u32, u32, u32)> storage_service_request_b;
inline constexpr guest::Function<0x00123ae8, u32(u32)> WorkerThread__main;

void start_service_client_once() {
    u32 r0_1 = *storage_mounted;
    if (r0_1 != 0) {
        return;
    }
    storage_service_request_b(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    WorkerThread__main(r0_1);
    *storage_mounted = 1;
}

}  // namespace d_0011dc5c
GUEST_EXPORT_FRAMED(0x0011dc5c, d_0011dc5c::start_service_client_once, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011dedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the service named at 0x8a275c into 0x97e004 unless it is open; the result.
namespace d_0011dedc {

inline constexpr u32 service_97e004_address = 0x0097e004u;
inline guest::global<u32, 0x008a275c> global_008a275c;
inline guest::global<u32, 0x0097e004> service_97e004;
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> srv_get_service_handle;
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;

u32 open_service_97e004(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4_1 = *global_008a275c;
    if (*service_97e004 != 0) {
        return 0u;
    }
    u32 length = string_length(r4_1, r1, r2, r3);
    u32 r0_2 = srv_get_service_handle(service_97e004_address, r4_1, length, 0u);
    u32 r1_1 = r0_2 >> 0x1f;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0011dedc
GUEST_EXPORT_FRAMED(0x0011dedc, d_0011dedc::open_service_97e004, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011df2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the OS event thread (entry 0x11f2e0, stack 0xaed848) and keeps its handle at 0xaed62c.
namespace d_0011df2c {

struct __attribute__((packed)) Local_0011df2c_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0011df2c_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_0011df2c_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_0011df2c_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0011df2c_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_0011df2c_ea_7, word_4, 0x4);

inline constexpr u32 os_event_thread_b_address = 0x00aed630u;
inline constexpr u32 global_00aed848_address = 0x00aed848u;
inline guest::global<u32, 0x00aed62c> os_event_thread;
inline constexpr guest::Function<0x0011fca0, u32(u32, u32, u32, u32)> srv_port_command_2;
inline constexpr guest::Function<0x00128e80, u32(u32, u32, u32, u32)> FsArchive__open_file;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> check_result;

struct __attribute__((packed)) StartOsEventThreadFrame {
    u32 word_0;
    u8 unknown_4[0x18];  // (not read or written by name)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(StartOsEventThreadFrame, word_0, 0x0);
GUEST_OFFSET(StartOsEventThreadFrame, word_1c, 0x1c);
GUEST_OFFSET(StartOsEventThreadFrame, word_20, 0x20);
GUEST_OFFSET(StartOsEventThreadFrame, word_24, 0x24);
GUEST_OFFSET(StartOsEventThreadFrame, word_28, 0x28);
GUEST_OFFSET(StartOsEventThreadFrame, word_2c, 0x2c);
GUEST_SIZE(StartOsEventThreadFrame, 0x34);

void start_os_event_thread(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StartOsEventThreadFrame> frame;  // the original's stack frame
    frame->word_0 = 0;
    u32 r0_2 = srv_port_command_2(frame.at(0).addr(), r1, r2, r3);
    u32 r1_1 = r0_2 & 0x80000000u;
    if (s32(r1_1) >= 0) {
        r1_1 = frame->word_0;
        *os_event_thread = r1_1;
    }
    if (s32(r0_2) >= 0) {
        frame->word_20 = 4;
        frame->word_24 = 0x122600;
        frame->word_1c = 0x11fba4;
        frame->word_28 = 0x12261c;
        frame->word_2c = 0x122610;
        gptr<Local_0011df2c_ea_6> ea_6 = gptr<Local_0011df2c_ea_6>(frame.at(0).addr());
        ea_6->word_0 = 0xaed848;
        ea_6->word_4 = 0x5109d500;
        gptr<Local_0011df2c_ea_7> ea_7 = gptr<Local_0011df2c_ea_7>(frame.at(8).addr());
        ea_7->word_0 = ~1u;
        ea_7->word_4 = 0;
        u32 r0_3 = FsArchive__open_file(os_event_thread_b_address, frame.at(0x20).addr(), 0x11f2e0u, frame.at(0x1c).addr());
        r1_1 = r0_3 >> 0x1f;
        if (r1_1 != 0) {
            check_result(r0_3, r1_1);
            r1_1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0011df2c
GUEST_EXPORT_FRAMED(0x0011df2c, d_0011df2c::start_os_event_thread, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0011dff4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds an object (with its value) to the global circular list at 0xaed638, under its lock.
namespace d_0011dff4 {

struct __attribute__((packed)) OsObjectListAddArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(OsObjectListAddArg0, word_4, 0x4);
GUEST_OFFSET(OsObjectListAddArg0, word_8, 0x8);
GUEST_OFFSET(OsObjectListAddArg0, word_c, 0xc);

struct __attribute__((packed)) Local_0011dff4_r0_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0011dff4_r0_1, word_0, 0x0);

struct __attribute__((packed)) Local_0011dff4_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0011dff4_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0011dff4_r1_1, word_4, 0x4);

inline constexpr u32 os_object_list_head_address = 0x00aed638u;
inline constexpr u32 os_object_list_tail_address = 0x00aed63cu;
inline guest::global<u32, 0x00aed638> os_object_list_head;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;

void OsObjectList__add(gptr<OsObjectListAddArg0> arg0, u32 r1, u32 r2) {
    RecursiveLock__lock(os_object_list_tail_address, r1, r2, guest::cpu()->r[3]);
    arg0->word_c = r1;
    gptr<Local_0011dff4_r0_1> r0_1 = gptr<Local_0011dff4_r0_1>(*os_object_list_head);
    gptr<Local_0011dff4_r1_1> r1_1 = gptr<Local_0011dff4_r1_1>(arg0.addr() == 0 ? 0u : arg0.addr() + 4u);
    if (r0_1.addr() == 0) {
        u32 r0_2 = arg0.addr() == 0 ? 0u : arg0.addr() + 4u;
        arg0->word_8 = r0_2;
        arg0->word_4 = r0_2;
        *os_object_list_head = arg0.addr() == 0 ? 0u : arg0.addr() + 4u;
    } else {
        r1_1->word_4 = r0_1.addr();
        *gptr<u32>(r0_1->word_0 + 4u) = r1_1.addr();
        r1_1->word_0 = r0_1->word_0;
        r0_1->word_0 = r1_1.addr();
    }
    RecursiveLock__unlock(os_object_list_tail_address);
}

}  // namespace d_0011dff4
GUEST_EXPORT_FRAMED(0x0011dff4, d_0011dff4::OsObjectList__add, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0011e180: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Waits for the service, queries a system value (00120158) and releases it.
namespace d_0011e180 {

inline constexpr guest::Function<0x00120158, u32(u32)> ipc_97d7f8_command_101;
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> wait_on_handle;
inline constexpr guest::Function<0x0012ab78, u32(u32)> close_service_handle_97d7f8;

u32 query_system_value(u32 r0) {
    wait_on_handle(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = ipc_97d7f8_command_101(r0);
    close_service_handle_97d7f8(r0_1);
    return r0_1;
}

}  // namespace d_0011e180
GUEST_EXPORT_FRAMED(0x0011e180, d_0011e180::query_system_value, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011e340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Waits for the service, queries a value (00120198) with kind 1 and releases it.
namespace d_0011e340 {

inline constexpr guest::Function<0x00120198, u32(u32, u32)> ipc_97d7f8_command_4f;
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> wait_on_handle;
inline constexpr guest::Function<0x0012ab78, u32(u32)> close_service_handle_97d7f8;

u32 query_system_value_2(u32 r0) {
    wait_on_handle(1u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = ipc_97d7f8_command_4f(1u, r0);
    close_service_handle_97d7f8(r0_1);
    return r0_1;
}

}  // namespace d_0011e340
GUEST_EXPORT_FRAMED(0x0011e340, d_0011e340::query_system_value_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011e3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the applet state: queries it (fatal on failure) and, when allowed, registers the applet notifications
// and keeps their handles.
namespace d_0011e3b4 {

struct __attribute__((packed)) Local_0011e3b4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0011e3b4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0011e3b4_ea_2, word_4, 0x4);

inline constexpr u32 applet_request_a_address = 0x00974ac8u;
inline guest::global<u32, 0x00974ac8> applet_request_a;
inline guest::global<u32, 0x00974acc> applet_request_b;
inline constexpr guest::Function<0x0011fcf0, u32(u32, u32, u32, u32)> raise_signal_flag;
inline constexpr guest::Function<0x0011fd10, u32(u32)> read_applet_state;
inline constexpr guest::Function<0x0011fea4, u32(u32)> store_global_word_11fea4;
inline constexpr guest::Function<0x0011feb4, u32(u32)> set_byte_974af4_to_1;
inline constexpr guest::Function<0x0011fec8, u32(u32)> return_constant_0xadfa5c_;
inline constexpr guest::Function<0x0011fed4, u32(u32)> set_byte_974af5_11fed4;
inline constexpr guest::Function<0x0012009c, u32(u32)> store_global_word_12009c;
inline constexpr guest::Function<0x001201d0, u32(u32)> ipc_97d7f8_command_3;
inline constexpr guest::Function<0x00124284, u32(u32)> flag_word_low_bits_clear;
inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32)> fatal_unless_success_level;
inline constexpr guest::Function<0x0012a17c, u32(u32)> set_byte_974ae2_12a17c;
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> wait_on_handle;
inline constexpr guest::Function<0x0012a5a0, u32(u32, u32, u32, u32)> Fs__open_archive;
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32)> close_service_handle_97d7f8;

struct __attribute__((packed)) InitAppletStateFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(InitAppletStateFrame, word_0, 0x0);
GUEST_OFFSET(InitAppletStateFrame, word_4, 0x4);
GUEST_OFFSET(InitAppletStateFrame, word_10, 0x10);
GUEST_SIZE(InitAppletStateFrame, 0x18);

u32 init_applet_state(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<InitAppletStateFrame> frame;  // the original's stack frame
    if (r0 != 0) {
        r0 = raise_signal_flag(0u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    u32 r0_3 = ipc_97d7f8_command_3(read_applet_state(wait_on_handle(r0, r1, r2, r3)));
    u32 r1_3 = 0x11e3dcu;
    u32 r2_3 = r0_3 >> 0x1f;
    if (r2_3 != 0) {
        r0_3 = fatal_unless_success_level(r0_3, r1_3, r2_3);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
    }
    u32 r0_5 = flag_word_low_bits_clear(close_service_handle_97d7f8(r0_3, r1_3, r2_3));
    if (r0_5 == 0) {
        return r0_5;
    }
    u32 r0_6 = read_applet_state(r0_5);
    if ((r0_6 & 0x20u) != 0) {
        return r0_6;
    }
    set_byte_974ae2_12a17c(0x62u);
    u32 r0_7 = return_constant_0xadfa5c_(0x62u);
    u32 r2_8 = *applet_request_a;
    u32 r12_1 = *applet_request_b;
    frame->word_0 = 0;
    gptr<Local_0011e3b4_ea_2> ea_2 = gptr<Local_0011e3b4_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r2_8;
    ea_2->word_4 = r12_1;
    u32 r0_9 = Fs__open_archive(frame.at(4).addr(), r0_7, 0x1000u, frame.at(0x10).addr());
    store_global_word_12009c(frame->word_4);
    u32 r0_11 = frame->word_10;
    store_global_word_11fea4(r0_11);
    set_byte_974af4_to_1(r0_11);
    set_byte_974af5_11fed4(r0_9);
    return r0_9;
}

}  // namespace d_0011e3b4
GUEST_EXPORT_FRAMED(0x0011e3b4, d_0011e3b4::init_applet_state, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011e484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the graphics controller: the graphics base with its render state, for 320x240 and 400x240
// screens (frame buffers 320 by 256).
namespace d_0011e484 {

inline constexpr u32 vtable_sead__GraphicsCtr = 0x00903f04u;
inline constexpr guest::Function<0x0012051c, u32(u32, u32, u32, u32)> sead__Graphics__Graphics;
inline constexpr guest::Function<0x00123678, u32(u32)> RenderStateBlock__init;

u32 sead__GraphicsCtr__GraphicsCtr(gptr<sead__GraphicsCtr> graphics_ctr, u32 r1, u32 r2, u32 r3) {
    sead__Graphics__Graphics(graphics_ctr.addr(), r1, r2, r3);
    graphics_ctr->vtable = vtable_sead__GraphicsCtr;
    RenderStateBlock__init(graphics_ctr.addr() + 0x34u);
    graphics_ctr->word_b4 = 0;
    graphics_ctr->word_c0 = 0x140;
    graphics_ctr->word_b8 = 0;
    graphics_ctr->word_bc = 0xf0;
    graphics_ctr->byte_c4 = 1;
    graphics_ctr->word_c8 = 0;
    graphics_ctr->word_d4 = 0x140;
    graphics_ctr->word_d8 = 0x100;
    graphics_ctr->word_dc = 0x140;
    graphics_ctr->word_cc = 0;
    graphics_ctr->word_d0 = 0xf0;
    return graphics_ctr.addr();
}

}  // namespace d_0011e484
GUEST_EXPORT_FRAMED(0x0011e484, d_0011e484::sead__GraphicsCtr__GraphicsCtr, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011e5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Queries an OS value of kind 1 (001215b8), applies it and passes the two arguments on; the value.
namespace d_0011e5d8 {

inline constexpr guest::Function<0x00121140, u32(u32)> GlObjects__destroy;
inline constexpr guest::Function<0x0012140c, u32(u32, u32)> GlState__bind;
inline constexpr guest::Function<0x001215b8, u32(u32, u32, u32, u32)> GlObjects__delete;

struct __attribute__((packed)) QueryOsValue1Frame {
    u32 word_0;
};
GUEST_OFFSET(QueryOsValue1Frame, word_0, 0x0);
GUEST_SIZE(QueryOsValue1Frame, 0x4);

u32 query_os_value_1(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<QueryOsValue1Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    GlObjects__delete(1u, frame.at(0).addr(), guest::cpu()->r[2], r3);
    GlObjects__destroy(frame->word_0);
    GlState__bind(r0, r1);
    return frame->word_0;
}

}  // namespace d_0011e5d8
GUEST_EXPORT_FRAMED(0x0011e5d8, d_0011e5d8::query_os_value_1, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0011e6f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Prepares the request (001216ec), then runs 001214f4 for each of the `count` handles with the extra arguments.
namespace d_0011e6f4 {

struct __attribute__((packed)) Local_0011e6f4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0011e6f4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0011e6f4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0011e6f4_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x00121110, u32(u32)> set_mode_adf9e4;
inline constexpr guest::Function<0x00121304, u32(u32, u32, u32, u32)> GlObjects__release;
inline constexpr guest::Function<0x001214f4, u32(u32, u32, u32, u32)> GlTexture__set_format;
inline constexpr guest::Function<0x001216ec, u32(u32, u32, u32, u32)> GlObjects__delete_b;

void run_for_each_handle(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = r1;
    u32 r6 = r0;
    gptr<Local_0011e6f4_ea_1> ea_1 = gptr<Local_0011e6f4_ea_1>(guest::cpu()->r[13] + 0x20u);
    u32 r7 = ea_1->word_0;
    u32 r8 = ea_1->word_4;
    u32 r9 = ea_1->word_8;
    u32 r10 = r3;
    GlObjects__delete_b(r5, r0, r2, r3);
    set_mode_adf9e4(r2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    if (r5 >= 0u && r5 != 0) {
        do {
            GlObjects__release(gptr<u32>(r6)[i], r1, r2, r3);
            GlTexture__set_format(r10, r7, r8, r9);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (r5 > i);
    }
}

}  // namespace d_0011e6f4
GUEST_EXPORT_FRAMED(0x0011e6f4, d_0011e6f4::run_for_each_handle, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0011e760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps the argument at 0x9752ec and installs the two callbacks 0x12049c and 0x120464.
namespace d_0011e760 {

inline guest::global<u32, 0x009752ec> global_009752ec;
inline constexpr guest::Function<0x001218b0, u32(u32, u32, u32, u32)> GlContext__set_callbacks;

void set_os_callback_9752ec(u32 r0) {
    *global_009752ec = r0;
    GlContext__set_callbacks(0x12049cu, 0x120464u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011e760
GUEST_EXPORT_FRAMED(0x0011e760, d_0011e760::set_os_callback_9752ec, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011e790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the default graphics memory manager: the two VRAM banks' addresses.
namespace d_0011e790 {

inline constexpr u32 vtable_sead__DefaultGfxMemoryMgrCtr = 0x009055b4u;
inline constexpr guest::Function<0x00121824, u32(u32)> address_for_region_a;
inline constexpr guest::Function<0x00121860, u32(u32)> address_for_region_b;

u32 sead__DefaultGfxMemoryMgrCtr__DefaultGfxMemoryMgrCtr(gptr<sead__DefaultGfxMemoryMgrCtr> default_gfx_memory_mgr_ctr, u32 r1) {
    default_gfx_memory_mgr_ctr->byte_4 = 0;
    default_gfx_memory_mgr_ctr->word_c = 0;
    default_gfx_memory_mgr_ctr->word_8 = r1;
    default_gfx_memory_mgr_ctr->vtable = vtable_sead__DefaultGfxMemoryMgrCtr;
    default_gfx_memory_mgr_ctr->word_10 = 0;
    default_gfx_memory_mgr_ctr->word_1c = 0;
    default_gfx_memory_mgr_ctr->word_20 = 0;
    default_gfx_memory_mgr_ctr->word_c = address_for_region_b(0x20000u);
    default_gfx_memory_mgr_ctr->word_10 = address_for_region_b(0x30000u);
    default_gfx_memory_mgr_ctr->word_14 = address_for_region_a(0x20000u);
    default_gfx_memory_mgr_ctr->word_18 = address_for_region_a(0x30000u);
    return default_gfx_memory_mgr_ctr.addr();
}

}  // namespace d_0011e790
GUEST_EXPORT_FRAMED(0x0011e790, d_0011e790::sead__DefaultGfxMemoryMgrCtr__DefaultGfxMemoryMgrCtr, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011e81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests power mode 0x700 (or 0x702 when `alternate`).
namespace d_0011e81c {

inline constexpr guest::Function<0x00122554, u32(u32, u32)> set_display_width_mode;

void set_power_mode(u32 r0_unused, u32 r1) {
    if (r1 == 0) {
        set_display_width_mode(0x700u, r1);
        return;
    }
    set_display_width_mode(0x702u, r1);
    return;
}

}  // namespace d_0011e81c
GUEST_EXPORT(0x0011e81c, d_0011e81c::set_power_mode);

// f_0011e838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the upper-screen double-buffered framework controller: the double-buffered one with its own vtable.
namespace d_0011e838 {

inline constexpr u32 vtable_sead__UlcdDoubleCmdGameFrameworkCtrNw4c = 0x00905858u;
inline constexpr guest::Function<0x001204d4, u32(u32, u32, u32, u32)> sead__DoubleCmdGameFrameworkCtrNw4c__DoubleCmdGameFrameworkCtrNw4c;

u32 sead__UlcdDoubleCmdGameFrameworkCtrNw4c__UlcdDoubleCmdGameFrameworkCtrNw4c(u32 ulcd_double_cmd_game_framework_ctr_nw4c, u32 r1) {
    u32 r0_1 = sead__DoubleCmdGameFrameworkCtrNw4c__DoubleCmdGameFrameworkCtrNw4c(ulcd_double_cmd_game_framework_ctr_nw4c, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = vtable_sead__UlcdDoubleCmdGameFrameworkCtrNw4c;
    return r0_1;
}

}  // namespace d_0011e838
GUEST_EXPORT_FRAMED(0x0011e838, d_0011e838::sead__UlcdDoubleCmdGameFrameworkCtrNw4c__UlcdDoubleCmdGameFrameworkCtrNw4c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011ea30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates a heap of a size (arg 0) under a parent (arg 1) with a name (arg 2).
namespace d_0011ea30 {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;

struct __attribute__((packed)) CreateNamedHeapFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 object_8_vtable;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(CreateNamedHeapFrame, word_0, 0x0);
GUEST_OFFSET(CreateNamedHeapFrame, object_8_vtable, 0x8);
GUEST_OFFSET(CreateNamedHeapFrame, word_c, 0xc);
GUEST_SIZE(CreateNamedHeapFrame, 0x14);

u32 create_named_heap(u32 r0_unused, u32 context, u32 r2) {
    guest::StackFrameOf<CreateNamedHeapFrame> frame;  // the original's stack frame
    frame->word_c = r2;
    frame->object_8_vtable = vtable_sead__SafeStringBase_char__rec;
    frame->word_0 = 0;
    create_heap(guest::cpu()->r[0], frame.at(8).addr(), context, 1u);
    return guest::cpu()->r[0];
}

}  // namespace d_0011ea30
GUEST_EXPORT_FRAMED(0x0011ea30, d_0011ea30::create_named_heap, 0x4000);  // pushes {lr} first, as the original

// f_0011eaac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the save allocator heap (named SaveAllocator, `size` bytes) and keeps its allocator at 0x95bf7c.
namespace d_0011eaac {

inline guest::global<u32, 0x0095bf7c> global_0095bf7c;
inline constexpr guest::Function<0x0011ea30, u32(u32, u32, u32, u32)> create_named_heap;
inline constexpr guest::Function<0x00120840, u32(u32)> ssys__ma__construct_Allocator;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_on_heap;

void create_save_allocator(u32 r0, u32 context) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = create_named_heap(r0, context, 0x11eae8u, 0x80u);
    u32 block = allocate_on_heap(8u, r0_1, 4u);
    *global_0095bf7c = ssys__ma__construct_Allocator(block);
    frame.release();
    set_word_4_and_succeed(block, r0_1);
    return;
}

}  // namespace d_0011eaac
GUEST_EXPORT(0x0011eaac, d_0011eaac::create_save_allocator);

// f_0011eafc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the applet state (0x94e3a8) is at least 2.
namespace d_0011eafc {

inline guest::global<u8, 0x0094e3a8> global_0094e3a8;

u32 applet_state_at_least_2() {
    return *global_0094e3a8 >= 2u;
}

}  // namespace d_0011eafc
GUEST_EXPORT(0x0011eafc, d_0011eafc::applet_state_at_least_2);

// f_0011eea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the singleton on a heap (arg 0), with its disposer, unless it exists.
namespace d_0011eea8 {

inline constexpr u32 vtable_BlackWait__SingletonDisposer_ = 0x0090b0e8u;
inline guest::global<u32, 0x0094e4b8> popup_window;
inline guest::global<u32, 0x0094e4bc> global_0094e4bc;
inline constexpr guest::Function<0x00121030, u32(u32, u32)> BlackWait__BlackWait;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> IDisposer__construct_in_heap;

void BlackWait__create_instance(u32 singleton_disposer, u32 r1) {
    u32 r0_3 = 0;
    if (*popup_window == 0) {
        u32 block_2 = allocate_on_heap_entry(0xa18u, singleton_disposer, 4u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        u32 i_disposer = block_2 + 0x24u;
        if (i_disposer != 0) {
            i_disposer = IDisposer__construct_in_heap(i_disposer, singleton_disposer, 3u);
            r1 = vtable_BlackWait__SingletonDisposer_;
            *gptr<u32>(i_disposer) = r1;
        }
        *global_0094e4bc = i_disposer;
        if (block_2 == 0) {
            r0_3 = 0u;
        } else {
            r0_3 = BlackWait__BlackWait(block_2, r1);
            r1 = guest::cpu()->r[1];
        }
        *popup_window = r0_3;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0011eea8
GUEST_EXPORT_FRAMED(0x0011eea8, d_0011eea8::BlackWait__create_instance, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011ef40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks job `index` of the job list (0xadf95c) as done, or the whole list (+0x3c) for -1.
namespace d_0011ef40 {

struct __attribute__((packed)) Local_0011ef40_r1_1 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x20];  // (not used here)
    u8 byte_3c;
};
GUEST_OFFSET(Local_0011ef40_r1_1, word_18, 0x18);
GUEST_OFFSET(Local_0011ef40_r1_1, byte_3c, 0x3c);

inline constexpr u32 job_list_address = 0x00adf95cu;
inline guest::global<u32, 0x00adf95c> job_list;

void mark_job_done(u32 r0) {
    gptr<Local_0011ef40_r1_1> r1_1 = gptr<Local_0011ef40_r1_1>(*job_list);
    if (r1_1.addr() == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    if (r0 + 1u == 0) {
        r1_1->byte_3c = 1;
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    u32 r1_2 = r1_1->word_18;
    *gptr<u8>(r1_2 + (~0x1au + r0 * 0x1cu)) = 1;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0011ef40
GUEST_EXPORT(0x0011ef40, d_0011ef40::mark_job_done);

// f_0011ef7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a value at +0x38 of the job list (0xadf95c) when there is one.
namespace d_0011ef7c {

inline constexpr u32 job_list_address = 0x00adf95cu;
inline guest::global<u32, 0x00adf95c> job_list;

void set_job_list_value_38(u32 r0) {
    u32 r1_1 = *job_list;
    if (r1_1 != 0) {
        *gptr<u32>(r1_1 + 0x38u) = r0;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0011ef7c
GUEST_EXPORT(0x0011ef7c, d_0011ef7c::set_job_list_value_38);

// f_0011ef94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a memory block record and, when memory blocks are on, reserves `size` (rounded to 0x1000) for it (fatal on
// failure).
namespace d_0011ef94 {

struct __attribute__((packed)) MemoryBlock {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
};
GUEST_OFFSET(MemoryBlock, word_0, 0x0);
GUEST_OFFSET(MemoryBlock, word_4, 0x4);
GUEST_OFFSET(MemoryBlock, word_8, 0x8);
GUEST_OFFSET(MemoryBlock, word_c, 0xc);
GUEST_OFFSET(MemoryBlock, byte_10, 0x10);

inline constexpr u32 memory_block_list_address = 0x00ae0f64u;
inline guest::global<u8, 0x00974f60> memory_block_reserved;
inline constexpr guest::Function<0x00128cc4, u32(u32, u32, u32, u32)> MemoryPool__allocate_pages;
inline constexpr guest::Function<0x0012f204, u32(u32)> check_result;

void MemoryBlock__init(gptr<MemoryBlock> memory_block, u32 r1) {
    if (memory_block.addr() == 0) {
        return;
    }
    memory_block->word_0 = 0;
    memory_block->word_4 = 0;
    memory_block->word_8 = 0;
    memory_block->word_c = 0;
    memory_block->byte_10 = 0;
    if (*memory_block_reserved != 0) {
        if (MemoryPool__allocate_pages(memory_block_list_address, memory_block.addr(), ((r1 + 0xfffu) >> 0xc) << 0xc, 0u) == 0) {
            check_result(0xd8601837u);
        }
        memory_block->byte_10 = 0;
    }
}

}  // namespace d_0011ef94
GUEST_EXPORT_FRAMED(0x0011ef94, d_0011ef94::MemoryBlock__init, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011f054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the friend service client: its lock, event, 100 friend entries, the service (initialized once) and the friend
// list.
namespace d_0011f054 {

struct __attribute__((packed)) FriendClient {
    u8 unknown_0[0x650];  // (not used here)
    u32 word_650;
    u8 unknown_654[0x8];  // (not used here)
    u32 word_65c;
};
GUEST_OFFSET(FriendClient, word_650, 0x650);
GUEST_OFFSET(FriendClient, word_65c, 0x65c);

struct __attribute__((packed)) Local_0011f054_r2_3 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0011f054_r2_3, word_10, 0x10);
GUEST_OFFSET(Local_0011f054_r2_3, word_18, 0x18);
GUEST_OFFSET(Local_0011f054_r2_3, word_1c, 0x1c);

struct __attribute__((packed)) Local_0011f054_r5_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_0011f054_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_0011f054_r5_1, byte_8, 0x8);
GUEST_OFFSET(Local_0011f054_r5_1, word_c, 0xc);

inline constexpr guest::Function<0x00124f94, u32(u32, u32, u32, u32)> frd_initialize;
inline constexpr guest::Function<0x00125110, u32(u32, u32, u32, u32)> Friends__get_list;
inline constexpr guest::Function<0x001251b0, u32(u32, u32, u32)> Friends__set_notification_mask;
inline constexpr guest::Function<0x00127cf8, u32(u32, u32)> svc_create_event;
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> check_result;

struct __attribute__((packed)) FriendClientConstructFrame {
    u32 word_0;
};
GUEST_OFFSET(FriendClientConstructFrame, word_0, 0x0);
GUEST_SIZE(FriendClientConstructFrame, 0x4);

u32 FriendClient__construct(gptr<FriendClient> friend_client, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FriendClientConstructFrame> frame;  // the original's stack frame
    u32 r0 = friend_client.addr();
    gptr<Local_0011f054_r2_3> r2_3 = gptr<Local_0011f054_r2_3>(0u);
    u32 res_2 = 0;
    frame->word_0 = r3;
    u32 r4 = r0;
    u32 r6 = 0u;
    friend_client->word_650 = r6;
    RecursiveLock__initialize(r0 + 0x650u, r1, r2, r3);
    friend_client->word_65c = r6;
    gptr<Local_0011f054_r5_1> r5_1 = gptr<Local_0011f054_r5_1>(r4 + 0x65cu);
    frame->word_0 = r6;
    u32 r0_2 = svc_create_event(frame.at(0).addr(), 1u);
    u32 r2_2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if ((r0_2 >> 0x1f) == 0) {
        r2_2 = frame->word_0;
        r0_2 = 0u;
        friend_client->word_65c = r2_2;
    }
    u32 r1_1 = r0_2 >> 0x1f;
    if (r1_1 != 0) {
        check_result(r0_2, r1_1, r2_2, r3);
        r3 = guest::cpu()->r[3];
    }
    r0 = 0u;
    r5_1->word_4 = r0;
    r5_1->byte_8 = u8(r6);
    r1 = 0x64u;
    r5_1->word_c = r6;
    do {
        r2_3 = gptr<Local_0011f054_r2_3>(r4 + (r0 << 4));
        r2_3->word_10 = r6;
        r2_3->word_18 = 0;
        res_2 = r1 - 1u;
        r1 = res_2;
        r0 += 1u;
        r2_3->word_1c = 0;
        guest::preempt();
    } while (res_2 != 0);
    u32 r0_3 = *gptr<u8>(r4 + 0x664u);
    if (r0_3 == 0) {
        u32 r0_4 = frd_initialize(r0_3, r1, r2_3.addr(), r3);
        u32 res_3 = r0_4 & 0x80000000u;
        *gptr<u32>(r4 + 0x660u) = r0_4;
        if (s32(res_3) < 0) {
            return r4;
        }
        *gptr<u8>(r4 + 0x664u) = 1;
        Friends__set_notification_mask(0x80u, 1u, res_3);
    }
    u32 list = Friends__get_list(r4 + 0x10u, r4 + 0x668u, 0u, 0x64u);
    *gptr<u32>(r4 + 0x660u) = list;
    return r4;
}

}  // namespace d_0011f054
GUEST_EXPORT_FRAMED(0x0011f054, d_0011f054::FriendClient__construct, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0011f220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the held object (+8; a pending failure is fatal) and clears it.
namespace d_0011f220 {

struct __attribute__((packed)) ResultHolder {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(ResultHolder, word_8, 0x8);

inline constexpr guest::Function<0x0012ede8, u32(u32, u32, u32, u32)> call_virtual_12_if_present;
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> fatal_result;

u32 ResultHolder__release(gptr<ResultHolder> result_holder) {
    u32 r4_1 = result_holder.addr() + 8u;
    u32 r0_1 = result_holder->word_8;
    u32 r1_1 = r0_1 & ~1u;
    if (r1_1 != 0) {
        if ((r0_1 & 1u) != 0) {
            fatal_result(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        call_virtual_12_if_present(result_holder->word_8 & ~1u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        result_holder->word_8 = 0;
    }
    guest::cpu()->r[1] = r1_1;
    return result_holder.addr();
}

}  // namespace d_0011f220
GUEST_EXPORT_FRAMED(0x0011f220, d_0011f220::ResultHolder__release, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011f25c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores 1 at +0.
namespace d_0011f25c {

struct __attribute__((packed)) SetWord0To1Arg0 {
    u32 word_0;
};
GUEST_OFFSET(SetWord0To1Arg0, word_0, 0x0);


void set_word_0_to_1(gptr<SetWord0To1Arg0> arg0) {
    u32 r1 = 1u;
    do {
        arg0->word_0 = r1;
        guest::preempt();
    } while (!u32(1));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0011f25c
GUEST_EXPORT(0x0011f25c, d_0011f25c::set_word_0_to_1);

// f_0011f274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores 0 at +0.
namespace d_0011f274 {

struct __attribute__((packed)) SetWord0To0Arg0 {
    u32 word_0;
};
GUEST_OFFSET(SetWord0To0Arg0, word_0, 0x0);


void set_word_0_to_0(gptr<SetWord0To0Arg0> arg0) {
    u32 r1 = 0u;
    arg0->word_0 = r1;
    do {
        arg0->word_0 = r1;
        guest::preempt();
    } while (!u32(1));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0011f274
GUEST_EXPORT(0x0011f274, d_0011f274::set_word_0_to_0);

// f_0011f2e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends request 0xf000000b on the service handle at 0x97dffc; a failure is reported with its location.
namespace d_0011f2e4 {

inline constexpr u32 storage_service_address = 0x0097dffcu;
inline guest::global<u32, 0x0097dffc> storage_service;
inline constexpr guest::Function<0x00123590, u32(u32, u32, u32, u32)> Record0c__send;
inline constexpr guest::Function<0x00129270, u32(u32, u32)> raise_fatal_error_5;

u32 storage_service_request_b(u32 r0_unused, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = Record0c__send(*storage_service, 0xf000000bu, r2, guest::cpu()->r[3]);
    u32 r1_1 = r0_2 & 0x80000000u;
    if (s32(r1_1) >= 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if ((r0_2 >> 0x1f) == 0) {
        guest::cpu()->r[1] = 0x11f308u;
        return r0_2;
    }
    frame.release();
    return raise_fatal_error_5(r0_2, 0x11f308u);
}

}  // namespace d_0011f2e4
GUEST_EXPORT(0x0011f2e4, d_0011f2e4::storage_service_request_b);

// f_0011f880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Registers an object with the service (00123ca8); keeps it at 0x974f7c and marks 0x97e038 when it has +0x14; the
// object, or 0 on failure.
namespace d_0011f880 {

struct __attribute__((packed)) RegisterServiceObjectArg0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(RegisterServiceObjectArg0, word_14, 0x14);

inline guest::global<u32, 0x008a27ac> global_008a27ac;
inline guest::global<u32, 0x00974f7c> global_00974f7c;
inline constexpr guest::Function<0x00123ca8, u32(u32, u32, u32)> ipc_97e03c_command_2;
inline constexpr guest::Function<0x00129040, u32(u32)> set_byte_97e038_129040;

u32 register_service_object(gptr<RegisterServiceObjectArg0> arg0, u32 r1) {
    if (s32(ipc_97e03c_command_2(*global_008a27ac, arg0.addr(), r1)) < 0) {
        return 0u;
    }
    *global_00974f7c = arg0.addr();
    if (arg0->word_14 != 0) {
        set_byte_97e038_129040(1u);
    }
    return arg0.addr();
}

}  // namespace d_0011f880
GUEST_EXPORT_FRAMED(0x0011f880, d_0011f880::register_service_object, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011f8d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the service named at 0x8b2340 on first use (under its lock) and counts the users (0x97d818); the result.
namespace d_0011f8d4 {

inline constexpr u32 service_handle_97d81c_address = 0x0097d81cu;
inline guest::global<u32, 0x008b2340> global_008b2340;
inline guest::global<u8, 0x0097d810> global_0097d810;
inline guest::global<u32, 0x0097d818> service_8b233c_refcount;
inline guest::global<u32, 0x0097d81c> service_handle_97d81c;
inline constexpr guest::Function<0x001290f0, u32(u32, u32, u32, u32)> global_lock_ae8344;
inline constexpr guest::Function<0x00129c7c, u32(u32)> srv_initialize;
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> srv_get_service_handle;
inline constexpr guest::Function<0x00134250, u32(u32)> fatal_result;
inline constexpr guest::Function<0x00135748, u32(u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x002fa9d0, u32(u32)> string_length;

u32 service_8b233c_acquire(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_5 = 0;
    u32 lock = global_lock_ae8344(r0, r1, r2, r3);
    RecursiveLock__lock(lock);
    if (*service_8b233c_refcount == 0) {
        u32 r8_1 = *global_008b2340;
        u32 r0_3 = srv_initialize(0x8b233cu) >> 0x1f;
        if (r0_3 != 0) {
            fatal_result(r0_3);
        }
        if (*service_handle_97d81c == 0) {
            u32 length = string_length(r8_1);
            r0_5 = srv_get_service_handle(service_handle_97d81c_address, r8_1, length, 0u);
            if (s32(r0_5) < 0) {
                r0_5 = 0xd92103fbu;
            }
        } else {
            r0_5 = 0xd8a103f9u;
        }
        if (s32(r0_5) >= 0) {
            *global_0097d810 = 1;
        } else if (r0_5 == 0xd92103fbu) {
            RecursiveLock__unlock(lock);
            return r0_5;
        }
    }
    *service_8b233c_refcount = *service_8b233c_refcount + 1u;
    RecursiveLock__unlock(lock);
    return 0u;
}

}  // namespace d_0011f8d4
GUEST_EXPORT_FRAMED(0x0011f8d4, d_0011f8d4::service_8b233c_acquire, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0011fa68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the service in the first mode that works (0, 1 or 2, kept at +0); a failure code when none does.
namespace d_0011fa68 {

struct __attribute__((packed)) Service8b233cOpenModeArg0 {
    u8 byte_0;
};
GUEST_OFFSET(Service8b233cOpenModeArg0, byte_0, 0x0);

inline constexpr guest::Function<0x0011f8d4, u32(u32, u32, u32, u32)> service_8b233c_acquire;
inline constexpr guest::Function<0x00123e40, u32(u32, u32)> ServiceB__initialize;
inline constexpr guest::Function<0x00123ee8, u32(u32)> ServiceA__initialize;

u32 service_8b233c_open_mode(gptr<Service8b233cOpenModeArg0> arg0, u32 r1) {
    u32 r0_5 = 0;
    u32 r1_1 = service_8b233c_acquire(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]) & 0x80000000u;
    if (s32(r1_1) >= 0) {
        arg0->byte_0 = 0;
        return 0u;
    }
    u32 service_a = ServiceB__initialize(0u, r1_1) & 0x80000000u;
    if (s32(service_a) >= 0) {
        arg0->byte_0 = 1;
        return 0u;
    }
    if (s32(ServiceA__initialize(service_a)) >= 0) {
        arg0->byte_0 = 2;
        r0_5 = 0u;
    } else {
        r0_5 = 0xd90103eau;
    }
    return r0_5;
}

}  // namespace d_0011fa68
GUEST_EXPORT_FRAMED(0x0011fa68, d_0011fa68::service_8b233c_open_mode, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011fad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads a byte through 00123fe4.
namespace d_0011fad4 {

inline constexpr guest::Function<0x00123fe4, u32(u32, u32, u32, u32)> ipc_97d81c_command_2;

u32 read_os_byte_123fe4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u8>(0) = 0;
    ipc_97d81c_command_2(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
    return *frame.at<u8>(0);
}

}  // namespace d_0011fad4
GUEST_EXPORT_FRAMED(0x0011fad4, d_0011fad4::read_os_byte_123fe4, 0x4000);  // pushes {lr} first, as the original

// f_0011faf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the 16-bit value to the object's part at +0x18 (fatal on failure) and clears +0x54.
namespace d_0011faf0 {

struct __attribute__((packed)) OsObject {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(OsObject, word_54, 0x54);

inline constexpr guest::Function<0x00124068, u32(u32, u32, u32, u32)> ParamBlock__append;
inline constexpr guest::Function<0x00134250, u32(u32)> fatal_result;

u32 OsObject__set_priority(gptr<OsObject> os_object, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_2 = ParamBlock__append(os_object.addr() + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], uxth(r3));
    if (r0_2 == 0) {
        fatal_result(r0_2);
    }
    os_object->word_54 = 0;
    return 0u;
}

}  // namespace d_0011faf0
GUEST_EXPORT_FRAMED(0x0011faf0, d_0011faf0::OsObject__set_priority, 0x4010);  // pushes {r4, lr} first, as the original

// f_0011fb18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the ndm:u service handle (once, under a lock).
namespace d_0011fb18 {

inline constexpr u32 ndm_refcount_address = 0x00974f38u;
inline constexpr u32 global_0097d8c8_address = 0x0097d8c8u;
inline constexpr u32 ndm_state_address = 0x00ae0f38u;
inline guest::global<u32, 0x00974f38> ndm_refcount;
inline constexpr guest::Function<0x00129c7c, u32(u32, u32)> srv_initialize;
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> srv_get_service_handle;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x002fa9d0, u32(u32)> string_length;

u32 ndm_initialize(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    RecursiveLock__lock(ndm_state_address, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_1 = *ndm_refcount;
    if (r0_1 == 0) {
        srv_initialize(r0_1, r1_1);
        u32 length = string_length(0x8a24c0u);
        u32 r0_3 = srv_get_service_handle(global_0097d8c8_address, 0x8a24c0u, length, 0u);
        r1_1 = r0_3 >> 0x1f;
        if (r1_1 != 0) {
            RecursiveLock__unlock(ndm_state_address, r1_1);
            return r0_3;
        }
    }
    *ndm_refcount = *ndm_refcount + 1u;
    RecursiveLock__unlock(ndm_state_address, r1_1);
    return 0u;
}

}  // namespace d_0011fb18
GUEST_EXPORT_FRAMED(0x0011fb18, d_0011fb18::ndm_initialize, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0011fcf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the event at 0x974b00 and, when `wait`, waits for it.
namespace d_0011fcf0 {

inline constexpr u32 signal_flag_address = 0x00974b00u;
inline guest::global<u8, 0x00974b00> signal_flag;
inline constexpr guest::Function<0x00124c4c, u32(u32, u32)> send_command_4;

u32 raise_signal_flag(u32 r0) {
    *signal_flag = 1;
    if (r0 == 0) {
        guest::cpu()->r[1] = 1u;
        return signal_flag_address;
    }
    return send_command_4(signal_flag_address, 1u);
}

}  // namespace d_0011fcf0
GUEST_EXPORT(0x0011fcf0, d_0011fcf0::raise_signal_flag);

// f_0011fd20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the low three bits of the applet word (0x974af0) are 6.
namespace d_0011fd20 {

inline guest::global<u32, 0x00974af0> applet_state;

u32 applet_state_is_6() {
    return (*applet_state & 7u) == 6u;
}

}  // namespace d_0011fd20
GUEST_EXPORT(0x0011fd20, d_0011fd20::applet_state_is_6);

// f_0011fd60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the sleep mode for `mode` (0 -> 3, 1 -> 2, 2 -> 1) at 0x974ae3 and, for 0 and 1, applies it.
namespace d_0011fd60 {

inline constexpr guest::Function<0x0012a1e4, u32(u32, u32, u32, u32)> set_byte_974ae3_12a1e4;
inline constexpr guest::Function<0x0012ae20, u32(u32, u32, u32, u32)> ServiceCommand__call_130448;

u32 set_sleep_mode(u32 service_command) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = 0;
    if (service_command == 0) {
        r0_1 = 3u;
    } else if (service_command == 1u) {
        r0_1 = 2u;
    } else {
        if (service_command != 2u) {
            return service_command;
        }
        frame.release();
        return set_byte_974ae3_12a1e4(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    set_byte_974ae3_12a1e4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return ServiceCommand__call_130448(service_command, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0011fd60
GUEST_EXPORT(0x0011fd60, d_0011fd60::set_sleep_mode);

// f_0011fda4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Installs the default callback (0x124318) and clears the fourteen callback pairs at 0x974b0c and 0x974b4c.
namespace d_0011fda4 {

inline guest::global<u32, 0x00974b0c> global_00974b0c;
inline guest::global<u32, 0x00974b10> global_00974b10;
inline guest::global<u32, 0x00974b14> global_00974b14;
inline guest::global<u32, 0x00974b18> global_00974b18;
inline guest::global<u32, 0x00974b1c> global_00974b1c;
inline guest::global<u32, 0x00974b20> applet_callback_a;
inline guest::global<u32, 0x00974b24> applet_callback_b;
inline guest::global<u32, 0x00974b28> global_00974b28;
inline guest::global<u32, 0x00974b2c> applet_callback_c;
inline guest::global<u32, 0x00974b30> global_00974b30;
inline guest::global<u32, 0x00974b34> global_00974b34;
inline guest::global<u32, 0x00974b38> global_00974b38;
inline guest::global<u32, 0x00974b3c> global_00974b3c;
inline guest::global<u32, 0x00974b48> global_00974b48;
inline guest::global<u32, 0x00974b4c> global_00974b4c;
inline guest::global<u32, 0x00974b50> global_00974b50;
inline guest::global<u32, 0x00974b54> global_00974b54;
inline guest::global<u32, 0x00974b58> global_00974b58;
inline guest::global<u32, 0x00974b5c> global_00974b5c;
inline guest::global<u32, 0x00974b60> applet_callback_a_arg;
inline guest::global<u32, 0x00974b64> applet_callback_b_arg;
inline guest::global<u32, 0x00974b68> global_00974b68;
inline guest::global<u32, 0x00974b6c> applet_callback_c_arg;
inline guest::global<u32, 0x00974b70> global_00974b70;
inline guest::global<u32, 0x00974b74> global_00974b74;
inline guest::global<u32, 0x00974b78> global_00974b78;
inline guest::global<u32, 0x00974b7c> global_00974b7c;
inline guest::global<u32, 0x00974b88> global_00974b88;
inline constexpr guest::Function<0x00124c20, u32(u32, u32)> set_callback_97d7d0;

void reset_applet_callbacks() {
    set_callback_97d7d0(0x124318u, 0u);
    *global_00974b0c = 0;
    *global_00974b4c = 0;
    *global_00974b10 = 0;
    *global_00974b50 = 0;
    *global_00974b14 = 0;
    *global_00974b54 = 0;
    *global_00974b18 = 0;
    *global_00974b58 = 0;
    *global_00974b1c = 0;
    *global_00974b5c = 0;
    *applet_callback_a = 0;
    *applet_callback_a_arg = 0;
    *applet_callback_b = 0;
    *applet_callback_b_arg = 0;
    *global_00974b28 = 0;
    *global_00974b68 = 0;
    *applet_callback_c = 0;
    *applet_callback_c_arg = 0;
    *global_00974b30 = 0;
    *global_00974b70 = 0;
    *global_00974b34 = 0;
    *global_00974b74 = 0;
    *global_00974b38 = 0;
    *global_00974b78 = 0;
    *global_00974b3c = 0;
    *global_00974b7c = 0;
    *global_00974b48 = 0;
    *global_00974b88 = 0;
}

}  // namespace d_0011fda4
GUEST_EXPORT_FRAMED(0x0011fda4, d_0011fda4::reset_applet_callbacks, 0x4010);  // pushes {r4, lr} first, as the original
