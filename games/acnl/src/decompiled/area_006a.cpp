// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006a04c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the villagers' states for the day (moving, events) and marks them in the bit set.
namespace d_006a04c4 {

inline constexpr guest::Function<0x001139fd, u32(u32, u32)> SaveVillager__set_state_250f;
inline constexpr guest::Function<0x00116e31, u32(u32, u32)> BitSet32__set;
inline constexpr guest::Function<0x0011945d, u32(u32, u32)> Villagers__find_by_check;
inline constexpr guest::Function<0x001194e1, u32(u32, u32)> global_word_7e0_veneer;
inline constexpr guest::Function<0x0011a391, u32(u32)> check_villager_11a390;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fe450, u32(u32)> villager_runtime_entry_at;
inline constexpr guest::Function<0x002fe4d0, u32(u32)> set_value_a83388;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x003099d0, u32(u32)> value_of_first_bit_9_or_10;
inline constexpr guest::Function<0x0051d1f8, u32(u32, u32)> read_u32_0x00a83388_;

void update_villager_states_for_day(u32 r0, u32 r1) {
    u32 i = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r8 = r1;
    u32 data_base = get_data_base(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 records = slot_records_of(data_base);
    u32 villagers = records + 4u;
    u32 by_check = Villagers__find_by_check(villagers, ~0u);
    if (by_check == 0) {
        return;
    } else {
        i = 0u;
    }
    do {
        u32 r0_4 = global_word_7e0_veneer(villagers, i);
        u32 valid_villager = valid_villager_at(villagers, r0_4);
        if (valid_villager != 0) {
            SaveVillager__set_state_250f(valid_villager, 2u);
            BitSet32__set(r8, r0_4);
        }
        i += 1u;
        guest::preempt();
    } while (i < 2u);
    i = 0u;
L_6a053c:;
    u32 valid_villager_2 = valid_villager_at(villagers, i);
    if (valid_villager_2 == 0) {
        goto L_6a05d8;
    }
    r0_7 = villager_runtime_entry_at(i);
    if (r0_7 == 0) {
        goto L_6a05d8;
    }
    r0_8 = value_of_first_bit_9_or_10(r0_7);
    if (s32(r0_8) < 0) {
        goto L_6a05d8;
    }
    r0_9 = valid_villager_at(villagers, r0_8);
    r0_10 = current_net_signed_value(r0_9);
    if ((r0_10 - 1u & r0_9) == 0) {
        goto L_6a05e8;
    }
    r0_11 = check_villager_11a390(r0_9);
    if (r0_11 == 0) {
        goto L_6a05e8;
    }
    SaveVillager__set_state_250f(valid_villager_2, 3u);
    r0 = BitSet32__set(r8, i);
    r1 = guest::cpu()->r[1];
L_6a05c4:;
    r0_12 = read_u32_0x00a83388_(r0, r1);
    if (r0_12 == i) {
        set_value_a83388(~0u);
    }
L_6a05d8:;
    i += 1u;
    if (s32(i) < 0xa) {
        guest::preempt();
        goto L_6a053c;
    }
    return;
L_6a05e8:;
    r0 = SaveVillager__set_state_250f(valid_villager_2, 2u);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_6a05c4;
}

}  // namespace d_006a04c4
GUEST_EXPORT_FRAMED(0x006a04c4, d_006a04c4::update_villager_states_for_day, 0x41f0);  // pushes {i, r5, r6, villagers, r8, lr} first, as the original

// f_006a0848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Outside flagged scenes, spawns the actor in front of the current player's house and records it in the actor list
// (+0xeb54).
namespace d_006a0848 {

struct __attribute__((packed)) Talk {
    u8 unknown_0[0xeb58];  // (not used here)
    u32 word_eb58;
};
GUEST_OFFSET(Talk, word_eb58, 0xeb58);

inline guest::global<u8, 0x008540d0> global_008540d0;
inline guest::global<u8, 0x008540d1> global_008540d1;
inline guest::global<u8, 0x008540d2> global_008540d2;
inline guest::global<u16, 0x0088729a> event_spot_table;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x00307220, u32(u32, u32)> cell_position_of_id_2;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> StringPool__find_message_mode_2;
inline constexpr guest::Function<0x006cbbe4, u32(u32)> first_placed_structure_of_4_b;

struct __attribute__((packed)) SpawnActorAtPlayerHouseFrame {
    u32 word_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    float float_c;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 unknown_16[0x2];  // (not read or written by name)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x2];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SpawnActorAtPlayerHouseFrame, word_0, 0x0);
GUEST_OFFSET(SpawnActorAtPlayerHouseFrame, float_4, 0x4);
GUEST_OFFSET(SpawnActorAtPlayerHouseFrame, float_c, 0xc);
GUEST_OFFSET(SpawnActorAtPlayerHouseFrame, half_10, 0x10);
GUEST_OFFSET(SpawnActorAtPlayerHouseFrame, half_12, 0x12);
GUEST_OFFSET(SpawnActorAtPlayerHouseFrame, half_14, 0x14);
GUEST_OFFSET(SpawnActorAtPlayerHouseFrame, byte_18, 0x18);
GUEST_OFFSET(SpawnActorAtPlayerHouseFrame, byte_19, 0x19);
GUEST_OFFSET(SpawnActorAtPlayerHouseFrame, word_1c, 0x1c);
GUEST_SIZE(SpawnActorAtPlayerHouseFrame, 0x24);

void spawn_actor_at_player_house(gptr<Talk> talk, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<SpawnActorAtPlayerHouseFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 scene_2 = current_scene_id(talk.addr(), r1, r2, r3);
    u32 scene_flagged_2 = scene_has_flags(0x10u, scene_2);
    if (scene_flagged_2 != 0) {
        return;
    }
    u32 player = get_current_player(scene_flagged_2);
    if (player == 0) {
        return;
    }
    u32 r0_4 = first_placed_structure_of_4_b(player);
    cell_position_of_id_2(frame.at(4).addr(), r0_4);
    float S3_5 = 2.5f;
    float S1_5 = 2.0f;
    float S2_5 = 32.0f;
    frame->float_c = frame->float_c + S2_5 * S3_5;
    float S0_5 = frame->float_4 + S2_5 * S1_5;
    frame->float_4 = S0_5;
    frame->half_10 = 0;
    frame->half_14 = 0;
    frame->half_12 = u16(0xffff8000u);
    u32 r1_3 = u32(*empty_string) << 0x18 | (((u32(*global_008540d0) & 0xffu | r4 & ~0xffu) & ~0xff00u | u32(*global_008540d1) << 8 & 0xff00u) & ~0xff0000u | u32(*global_008540d2) << 0x10 & 0xff0000u) & ~0xff000000u;
    frame->byte_18 = 1;
    frame->byte_19 = 0;
    frame->word_1c = r1_3;
    u32 string_pool = *event_spot_table;
    frame->word_0 = frame.at(0x10).addr();
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    u32 r0_7 = StringPool__find_message_mode_2(string_pool, talk.addr(), frame.at(0x18).addr(), frame.at(4).addr());
    if (r0_7 == 0) {
        return;
    }
    u32 r2_6 = talk->word_eb58;
    if (r2_6 != 0) {
        *gptr<u32>(r2_6) = r0_7;
    }
    talk->word_eb58 = talk->word_eb58 + 4u;
    guest::cpu()->r[1] = talk.addr() + 0xeb54u;
}

}  // namespace d_006a0848
GUEST_EXPORT_FRAMED(0x006a0848, d_006a0848::spawn_actor_at_player_house, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006a0ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the villagers' visit records for the current player.
namespace d_006a0ecc {

struct __attribute__((packed)) Local_006a0ecc_r0_19 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
    u8 byte_1d;
};
GUEST_OFFSET(Local_006a0ecc_r0_19, byte_1c, 0x1c);
GUEST_OFFSET(Local_006a0ecc_r0_19, byte_1d, 0x1d);

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x001139f4, u32(u32, u32)> SaveVillager__set_state_250f_veneer;
inline constexpr guest::Function<0x00116e31, u32(u32, u32, u32)> BitSet32__set;
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32)> init_bit_mask;
inline constexpr guest::Function<0x00119715, u32(u32, u32, u32)> Villager__player_record;
inline constexpr guest::Function<0x001198e9, u32(u32, u32, u32)> SaveVillager__has_flag_1;
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32, u32)> SaveVillager__has_flag_2510_bit0;
inline constexpr guest::Function<0x0011a651, u32(u32, u32, u32)> villager_check_11a650;
inline constexpr guest::Function<0x0011b4f7, u32(u32, u32, u32)> small_bit_set_has;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fe419, u32(u32)> pick_random_set_bit;
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32)> villager_runtime_entry_at;
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32)> random_below_entry;
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x00309ac9, u32(u32, u32, u32)> shop_is_open_at;
inline constexpr guest::Function<0x00309eb9, u32(u32, u32, u32)> SaveVillager__find_player_record_00309eb8;
inline constexpr guest::Function<0x0051ca20, u32(u32, u32, u32, u32)> mode_308e80_is_26_or_a;
inline constexpr guest::Function<0x00716b74, u32(u32)> object_check_c;
inline constexpr guest::Function<0x00716de4, u32(u32)> is_evening_of_day_6;
inline constexpr guest::Function<0x0076cec4, u32(u32, u32, u32)> indexed_check;

struct __attribute__((packed)) UpdateVillagerVisitsFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
    u32 word_14;
};
GUEST_OFFSET(UpdateVillagerVisitsFrame, word_8, 0x8);
GUEST_OFFSET(UpdateVillagerVisitsFrame, word_14, 0x14);
GUEST_SIZE(UpdateVillagerVisitsFrame, 0x18);

void update_villager_visits(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<UpdateVillagerVisitsFrame> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r1_10 = 0;
    u32 r10 = r1;
    if (mode_308e80_is_26_or_a(r0, r1, r2, guest::cpu()->r[3]) != 0) {
        u32 r6 = *current_player_data;
        if (r6 != 0) {
            u32 r0_2 = u32(*gptr<u8>(r6 + 0x5701u)) << 0x1e;
            if (s32(r0_2) < 0) {
                u32 data_base = get_data_base(r0_2);
                u32 records = slot_records_of(data_base);
                u32 r9 = records + 4u;
                u32 r0_5 = frame.at(0).addr();
                init_bit_mask(r0_5, 0xau, 0u);
                u32 r5 = 0x18u;
                u32 save_data = get_save_data(r0_5);
                u32 r7 = save_data + 0x6aeb8u;
                init_bit_mask(frame.at(0xc).addr(), 0xbu, 0u);
                r2 = guest::cpu()->r[2];
                u32 i = 0x4au;
                do {
                    r0_8 = indexed_check(r7, i & 0xffu, r2);
                    r2 = guest::cpu()->r[2];
                    if (r0_8 != 0) {
                        r0_8 = BitSet32__set(frame.at(0xc).addr(), i - 0x4au, r2);
                        r2 = guest::cpu()->r[2];
                    }
                    i += 1u;
                    guest::preempt();
                } while (s32(i) <= 0x54);
                u32 scene_2 = current_scene_id(r0_8, guest::cpu()->r[1], r2);
                r2 = guest::cpu()->r[2];
                u32 zf_1 = scene_2 - 0x3fu == 0;
                r7 = scene_2;
                if (zf_1) {
                    r5 = 0x15u;
                } else {
                    if (zf_1 || s32(scene_2) < 0x3f) {
                        if (r7 == 0x39u || r7 == 0x3au || r7 == 0x3bu || r7 == 0x3cu) {
                            goto L_6a0fc8;
                        }
                        goto L_6a0fcc;
                    }
                    if (r7 == 0x46u || r7 == 0x47u) {
                        r5 = 9u;
                        goto L_6a0fcc;
                    }
                    if (r7 == 0x49u) {
                        r5 = 0xau;
                    }
                    goto L_6a0fcc;
L_6a0fc8:;
                    r5 = 8u;
                }
L_6a0fcc:;
                i = 0u;
                u32 r8 = r6 + 0x55a6u;
                do {
                    u32 valid_villager = valid_villager_at(r9, i, r2);
                    r1_7 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (valid_villager != 0) {
                        if (*gptr<u8>(valid_villager + 0x250fu) == r5 || r5 == 0xau) {
                            return;
                        }
                        u32 r0_12 = small_bit_set_has(r10, i, r2);
                        r1_7 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_12 == 0) {
                            u32 r0_13 = SaveVillager__has_flag_2510_bit0(valid_villager, r1_7, r2);
                            r1_7 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            if (r0_13 == 0) {
                                u32 r0_14 = SaveVillager__has_flag_1(valid_villager, r1_7, r2);
                                r1_7 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                if (r0_14 == 0) {
                                    u32 r0_15 = shop_is_open_at(valid_villager, 0u, r2);
                                    r2 = guest::cpu()->r[2];
                                    if (r0_15 != 0) {
                                        u32 r0_16 = Villager__player_record(r9, i, 0u);
                                        r1_7 = guest::cpu()->r[1];
                                        r2 = guest::cpu()->r[2];
                                        if (r0_16 == 0) {
                                            goto L_6a10e8;
                                        }
                                    }
                                    u32 r0_17 = SaveVillager__find_player_record_00309eb8(valid_villager, r8, r2);
                                    r1_7 = guest::cpu()->r[1];
                                    r2 = guest::cpu()->r[2];
                                    if (r0_17 != 0) {
                                        if ((u32(*gptr<u8>(r0_17 + 0xbcu)) >> 7) != 0) {
                                            u32 r0_18 = villager_check_11a650(valid_villager, r1_7, r2);
                                            r1_7 = guest::cpu()->r[1];
                                            r2 = guest::cpu()->r[2];
                                            if (r0_18 == 0) {
                                                gptr<Local_006a0ecc_r0_19> r0_19 = gptr<Local_006a0ecc_r0_19>(villager_runtime_entry_at(i, r1_7, r2));
                                                r1_7 = guest::cpu()->r[1];
                                                r2 = guest::cpu()->r[2];
                                                if (r0_19.addr() != 0) {
                                                    r1_7 = r0_19->byte_1c;
                                                    if (r1_7 == 0xa5u && r0_19->byte_1d == 0xa5u) {
                                                        BitSet32__set(frame.at(0).addr(), i, r2);
                                                        r1_7 = guest::cpu()->r[1];
                                                        r2 = guest::cpu()->r[2];
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
L_6a10e8:;
                    i += 1u;
                    guest::preempt();
                } while (s32(i) < 0xa);
                if (s32(frame->word_8) > 0) {
                    if (s32(random_below_entry(0x64u, r1_7, r2)) < 0x14) {
                        u32 r0_23 = pick_random_set_bit(frame.at(0).addr());
                        u32 valid_villager_2 = valid_villager_at(r9, r0_23, guest::cpu()->r[2]);
                        if (valid_villager_2 != 0) {
                            if (r7 != 0x46u && r7 != 0x47u) {
                                if (r7 == 0x49u) {
                                    if (s32(frame->word_14) <= 0) {
                                        return;
                                    }
                                    r1_10 = pick_random_set_bit(frame.at(0xc).addr()) + 0xau & 0xffu;
                                    goto L_6a11b4;
                                }
                            } else {
                                u32 save_data_2 = get_save_data(valid_villager_2);
                                u32 r4_1 = save_data_2 + 0x6ad82u;
                                if (r4_1 == 0) {
                                    return;
                                }
                                if (is_evening_of_day_6(r4_1) == 0) {
                                    if (object_check_c(r4_1) == 0) {
                                        return;
                                    }
                                }
                            }
                            r1_10 = r5;
L_6a11b4:;
                            if (r1_10 != 0x18u) {
                                SaveVillager__set_state_250f_veneer(valid_villager_2, r1_10);
                            }
                        }
                    }
                }
            }
        }
    }
}

}  // namespace d_006a0ecc
GUEST_EXPORT_FRAMED(0x006a0ecc, d_006a0ecc::update_villager_visits, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006a14bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the villagers' requests for the current player.
namespace d_006a14bc {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x00111f95, u32(u32)> building_event_26_day_check;
inline constexpr guest::Function<0x001120f1, u32(u32)> building_event_26_shops_check;
inline constexpr guest::Function<0x001139fd, u32(u32, u32, u32)> SaveVillager__set_state_250f;
inline constexpr guest::Function<0x00116e31, u32(u32, u32)> BitSet32__set;
inline constexpr guest::Function<0x00116e4f, u32(u32, u32, u32)> BitSet32__clear;
inline constexpr guest::Function<0x00116e93, u32(u32, u32, u32)> BitSet32__assign;
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32)> init_bit_mask;
inline constexpr guest::Function<0x001198e9, u32(u32)> SaveVillager__has_flag_1;
inline constexpr guest::Function<0x0011a1c9, u32(u32)> SaveVillager__has_flag_2510_bit0;
inline constexpr guest::Function<0x0011a651, u32(u32)> villager_check_11a650;
inline constexpr guest::Function<0x0011ab05, u32(u32, u32)> villager_passes_checks;
inline constexpr guest::Function<0x0011b4f7, u32(u32, u32, u32)> small_bit_set_has;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32)> pick_random_set_bit;
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32)> villager_runtime_entry_at;
inline constexpr guest::Function<0x002fe4d0, u32(u32, u32, u32)> set_value_a83388;
inline constexpr guest::Function<0x002ff6f4, u32(u32)> random_below_entry;
inline constexpr guest::Function<0x003041c8, u32(u32)> kind_state_byte_1;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x00309f85, u32(u32, u32)> SaveVillager__find_player_record_00309f84;
inline constexpr guest::Function<0x0030a038, u32(u32, u32)> collect_flags;
inline constexpr guest::Function<0x0051ca20, u32(u32, u32, u32, u32)> mode_308e80_is_26_or_a;
inline constexpr guest::Function<0x0051d1f8, u32(u32)> read_u32_0x00a83388_;
inline constexpr guest::Function<0x0051d6e8, u32(u32)> clear_flags_7_to_22;

struct __attribute__((packed)) UpdateVillagerRequestsFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x18];  // (not read or written by name)
};
GUEST_OFFSET(UpdateVillagerRequestsFrame, word_8, 0x8);
GUEST_OFFSET(UpdateVillagerRequestsFrame, word_14, 0x14);
GUEST_SIZE(UpdateVillagerRequestsFrame, 0x30);

void update_villager_requests(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<UpdateVillagerRequestsFrame> frame;  // the original's stack frame
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r4_2 = 0;
    u32 r10 = r1;
    u32 r0_1 = mode_308e80_is_26_or_a(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 data_base = get_data_base(r0_1);
        u32 records = slot_records_of(data_base);
        u32 r9 = records + 4u;
        init_bit_mask(frame.at(0xc).addr(), 0xau, 0u);
        init_bit_mask(frame.at(0).addr(), 0x18u, 0u);
        collect_flags(frame.at(0).addr(), 2u);
        u32 r6 = *current_player_data;
        if (r6 != 0) {
            r0_7 = u32(*gptr<u8>(r6 + 0x5701u)) << 0x1e;
            if (s32(r0_7) < 0) {
                goto L_6a1534;
            }
        }
        r0_8 = frame.at(0).addr();
        r0_7 = clear_flags_7_to_22(r0_8);
L_6a1534:;
        u32 r0_9 = kind_state_byte_1(r0_7);
        if (r0_9 == 0x2bu) {
            r1_5 = 5u;
        } else if (r0_9 == 0x32u) {
            r1_5 = 6u;
        } else {
            goto L_6a155c;
        }
        r0_10 = frame.at(0).addr();
        r0_9 = BitSet32__clear(r0_10, r1_5, guest::cpu()->r[2]);
L_6a155c:;
        u32 r0_11 = building_event_26_shops_check(r0_9);
        if (r0_11 == 0) {
            r0_11 = BitSet32__clear(frame.at(0).addr(), 5u, guest::cpu()->r[2]);
        }
        u32 r0_13 = building_event_26_day_check(r0_11);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_13 == 0) {
            BitSet32__clear(frame.at(0).addr(), 6u, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        u32 i = 0u;
        do {
            u32 r0_15 = villager_runtime_entry_at(i, r1, r2);
            u32 valid_villager = valid_villager_at(r9, i);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            u32 zf_1 = r0_15 == 0;
            if (!zf_1) {
                zf_1 = valid_villager == 0;
            }
            if (!zf_1) {
                u32 r8_1 = *gptr<u8>(valid_villager + 0x250fu);
                if (r8_1 - 3u != 0) {
                    if ((r8_1 - 3u >> 0x1f) == (((r8_1 ^ 3u) & (r8_1 ^ r8_1 - 3u)) >> 0x1f)) {
                        if (r8_1 == 7u || r8_1 == 0x17u) {
                            goto L_6a1678;
                        }
                    } else if (r8_1 == 0 || r8_1 == 1u) {
                        goto L_6a1678;
                    }
                    if (small_bit_set_has(r10, i, r2) == 0) {
                        if (SaveVillager__has_flag_2510_bit0(valid_villager) == 0) {
                            if (SaveVillager__has_flag_1(valid_villager) == 0) {
                                if ((*gptr<u32>(r0_15 + 0x20u) >> 0xdu & 3u) == 0) {
                                    if (s32(random_below_entry(0x64u)) < 0x14) {
                                        BitSet32__set(frame.at(0xc).addr(), i);
                                    }
                                }
                            }
                        }
                    }
                    BitSet32__clear(frame.at(0).addr(), r8_1, guest::cpu()->r[2]);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                }
            }
L_6a1678:;
            i += 1u;
            guest::preempt();
        } while (s32(i) < 0xa);
        u32 r8 = r6 + 0x55a6u;
L_6a168c:;
        u32 r0_23 = frame->word_14;
        u32 nf_2 = r0_23 >> 0x1f;
        u32 zf_2 = r0_23 == 0;
        if (!zf_2 && nf_2 == 0u) {
            u32 r0_24 = frame->word_8;
            nf_2 = r0_24 >> 0x1f;
            zf_2 = r0_24 == 0;
        }
        if (!zf_2 && nf_2 == 0u) {
            u32 r0_26 = pick_random_set_bit(frame.at(0xc).addr(), r1, r2);
            BitSet32__clear(frame.at(0xc).addr(), r0_26, guest::cpu()->r[2]);
            u32 valid_villager_2 = valid_villager_at(r9, r0_26);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (valid_villager_2 == 0) {
                guest::preempt();
                goto L_6a168c;
            }
            BitSet32__assign(frame.at(0x18).addr(), frame.at(0).addr(), r2);
            if (r6 != 0) {
                u32 r0_30 = SaveVillager__find_player_record_00309f84(valid_villager_2, r8);
                if (r0_30 != 0) {
                    if ((u32(*gptr<u8>(r0_30 + 0xbcu)) >> 7) != 0) {
                        if (villager_check_11a650(valid_villager_2) == 0) {
                            goto L_6a1728;
                        }
                    }
                }
                clear_flags_7_to_22(frame.at(0x18).addr());
            }
L_6a1728:;
            u32 r4_1 = frame.at(0x18).addr();
            if (small_bit_set_has(r4_1, 5u, guest::cpu()->r[2]) != 0) {
                BitSet32__assign(frame.at(0x24).addr(), r4_1, guest::cpu()->r[2]);
                if (villager_passes_checks(valid_villager_2, r0_26) == 0) {
                    BitSet32__clear(frame.at(0x24).addr(), 5u, guest::cpu()->r[2]);
                }
                u32 r0_38 = pick_random_set_bit(frame.at(0x24).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r4_2 = r0_38 & 0xffu;
            } else {
                u32 r0_39 = pick_random_set_bit(r4_1, guest::cpu()->r[1], guest::cpu()->r[2]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r4_2 = r0_39 & 0xffu;
            }
            if (r4_2 >= 0x18u) {
                guest::preempt();
                goto L_6a168c;
            }
            SaveVillager__set_state_250f(valid_villager_2, r4_2, r2);
            u32 r0_40 = frame.at(0).addr();
            BitSet32__clear(r0_40, r4_2, guest::cpu()->r[2]);
            u32 r0_41 = read_u32_0x00a83388_(r0_40);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_41 == r0_26) {
                set_value_a83388(~0u, r1, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
            }
            guest::preempt();
            goto L_6a168c;
        }
    }
}

}  // namespace d_006a14bc
GUEST_EXPORT_FRAMED(0x006a14bc, d_006a14bc::update_villager_requests, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006a1ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 58 of the actor in the list (+0xeb54) with the id; 0 when none has it.
namespace d_006a1ca0 {

struct __attribute__((packed)) ActorList {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(ActorList, word_eb54, 0xeb54);
GUEST_OFFSET(ActorList, word_eb58, 0xeb58);

struct __attribute__((packed)) Local_006a1ca0_r5_1 {
    u32 word_0;
    u8 unknown_4[0x50];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Local_006a1ca0_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_006a1ca0_r5_1, word_54, 0x54);


u32 ActorList__send_to_id(gptr<ActorList> actor_list, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = actor_list.addr();
    u32 r7 = r1;
    r1 = r0 + 0xeb54u;
    u32 r4 = actor_list->word_eb54;
    u32 r6 = actor_list->word_eb58;
    u32 r8 = r2;
    if (r4 != r6) {
        do {
            gptr<Local_006a1ca0_r5_1> r5_1 = gptr<Local_006a1ca0_r5_1>(*gptr<u32>(r4));
            if (r5_1.addr() != 0 && r5_1->word_54 == r7) {
                u32 r2_1 = *gptr<u32>(r5_1->word_0 + 0xe8u);
                // virtual function 58 of r5_1.addr()
                frame.release();
                return guest::call_address<u32>(r2_1, r5_1.addr(), r8, r2_1, guest::cpu()->r[3]);
            }
            r4 += 4u;
            guest::preempt();
        } while (r4 != r6);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006a1ca0
GUEST_EXPORT(0x006a1ca0, d_006a1ca0::ActorList__send_to_id);

// f_006a2c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the byte at (x, y) of the byte map.
namespace d_006a2c2c {

struct __attribute__((packed)) ByteMap {
    u32 word_0;
};
GUEST_OFFSET(ByteMap, word_0, 0x0);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> Buffer__read_bytes;

u32 ByteMap__set(gptr<ByteMap> byte_map, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = Buffer__read_bytes(byte_map.addr(), r1, guest::cpu()->r[2], r3);
    u32 r1_1 = byte_map->word_0;
    *gptr<u8>(r1_1 + r0_1) = u8(r3);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006a2c2c
GUEST_EXPORT_FRAMED(0x006a2c2c, d_006a2c2c::ByteMap__set, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a2c48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to ResModel__info.
namespace d_006a2c48 {

inline constexpr guest::Function<0x005bf518, u32(u32, u32)> TextureView__from_resource;

u32 ResModel__info_veneer(u32 r0_unused, u32 r1) {
    TextureView__from_resource(guest::cpu()->r[0], r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a2c48
GUEST_EXPORT_FRAMED(0x006a2c48, d_006a2c48::ResModel__info_veneer, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a2c58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the three words.
namespace d_006a2c58 {

struct __attribute__((packed)) SetThreeWordsArg0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SetThreeWordsArg0, word_0, 0x0);
GUEST_OFFSET(SetThreeWordsArg0, word_4, 0x4);
GUEST_OFFSET(SetThreeWordsArg0, word_8, 0x8);


void set_three_words(gptr<SetThreeWordsArg0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_0 = r1;
    arg0->word_4 = r2;
    arg0->word_8 = r3;
}

}  // namespace d_006a2c58
GUEST_EXPORT(0x006a2c58, d_006a2c58::set_three_words);

// f_006a2ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows a UI message (index arg 1) in the window's text.
namespace d_006a2ca4 {

inline constexpr u32 vtable_script__WordFix_64u_ = 0x0090a228u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32)> start_window_message;
inline constexpr guest::Function<0x005d6d28, u32(u32)> TextBox__layout_lines_b;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) ShowUiMessageByIndexFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x94];  // (not read or written by name)
};
GUEST_OFFSET(ShowUiMessageByIndexFrame, word_0, 0x0);
GUEST_OFFSET(ShowUiMessageByIndexFrame, word_8, 0x8);
GUEST_SIZE(ShowUiMessageByIndexFrame, 0xa0);

void show_ui_message_by_index(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ShowUiMessageByIndexFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0x40u, r3);
    u32 r6 = vtable_script__WordFix_64u_;
    *gptr<u32>(r0_1) = r6;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    clear_aligned(r0_2 + 0xcu, 0x80u);
    u32 r2 = 0x8906ecu;
    u32 r4 = 0u;
    r0 = (r0_2 + 0xcu) - 2u;
    r1 = 0x20u;
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    MessageStore__attach_window(*message_store, 0u, r2, r3_4);
    frame->word_0 = r4;
    load_message(*message_store, frame.at(8).addr(), 0x857b98u, r7);
    LinkOwner__unlink(*message_store, 0u);
    start_window_message(r5 + 0x24u, frame.at(8).addr());
    TextBox__layout_lines_b(r5 + 0x24u);
    frame->word_8 = r6;
}

}  // namespace d_006a2ca4
GUEST_EXPORT_FRAMED(0x006a2ca4, d_006a2ca4::show_ui_message_by_index, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006a3988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Attaches the layout at +0x504 to the layout system.
namespace d_006a3988 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

u32 attach_layout_504(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(r0);
    frame.release();
    return LayoutRenderer__draw_on_screen(r0_1, r0 + 0x504u, 1u);
}

}  // namespace d_006a3988
GUEST_EXPORT(0x006a3988, d_006a3988::attach_layout_504);

// f_006a3bd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the title window's layout parts, layout, text and its five message parts; true.
namespace d_006a3bd4 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x005d6bfc, u32(u32)> TextBox__unlock_b;
inline constexpr guest::Function<0x005e2e04, u32(u32)> TextBox__unlock;

u32 TitleWindow__release(u32 title_window) {
    release_layout_parts(title_window + 0x650u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    layout_at_10_virtual_8(title_window + 0x504u);
    TextBox__unlock_b(title_window + 0x24u);
    TextBox__unlock(title_window + 0x124u);
    TextBox__unlock(title_window + 0x1e8u);
    TextBox__unlock(title_window + 0x2acu);
    TextBox__unlock(title_window + 0x370u);
    TextBox__unlock(title_window + 0x434u);
    return 1u;
}

}  // namespace d_006a3bd4
GUEST_EXPORT_FRAMED(0x006a3bd4, d_006a3bd4::TitleWindow__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a3cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the common title window's layout archive.
namespace d_006a3cb4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> load_layout_archive;

u32 TitleWindow__load_layout(u32 title_window) {
    return load_layout_archive(title_window + 0x650u, 0x6a3cc0u);
}

}  // namespace d_006a3cb4
GUEST_EXPORT(0x006a3cb4, d_006a3cb4::TitleWindow__load_layout);

// f_006a3d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the title window's text, pin, address and money panes for the mode.
namespace d_006a3d54 {

struct __attribute__((packed)) Local_006a3d54_ea_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_1, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_2, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_3 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_3, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_4 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_4, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_5 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_5, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_6 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_6, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006a3d54_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_006a3d54_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_006a3d54_r0_10 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_10, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_11 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_11, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_18 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_18, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_19 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_19, byte_b7, 0xb7);

struct __attribute__((packed)) Child {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Child, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_23 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_23, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_24 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_24, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_25 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_25, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_26 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_26, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_3, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_4 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_4, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_5 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_5, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_6 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_6, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_7 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_7, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_8 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_8, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_9 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_9, byte_b7, 0xb7);

inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005d46dc, u32(u32, u32)> value_for_mode;
inline constexpr guest::Function<0x005d69bc, u32(u32, u32, u32, u32)> TextBox__set_message_words;

struct __attribute__((packed)) TitleWindowSetupPanesFrame {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(TitleWindowSetupPanesFrame, word_0, 0x0);
GUEST_SIZE(TitleWindowSetupPanesFrame, 0x20);

void TitleWindow__setup_panes(u32 title_window, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<TitleWindowSetupPanesFrame> frame;  // the original's stack frame
    u32 r1_2 = 0;
    frame->word_0 = r3;
    u32 r0_1 = title_window + 0x504u;
    gptr<Child> child = gptr<Child>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4000u, r2, r3));
    child->byte_b7 = u8(u32(child->byte_b7) & 0xfeu);
    gptr<Local_006a3d54_r0_3> child_2 = gptr<Local_006a3d54_r0_3>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4008u, guest::cpu()->r[2], guest::cpu()->r[3]));
    child_2->byte_b7 = u8(u32(child_2->byte_b7) & 0xfeu);
    gptr<Local_006a3d54_r0_4> child_3 = gptr<Local_006a3d54_r0_4>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4010u, guest::cpu()->r[2], guest::cpu()->r[3]));
    child_3->byte_b7 = u8(u32(child_3->byte_b7) & 0xfeu);
    gptr<Local_006a3d54_r0_5> child_4 = gptr<Local_006a3d54_r0_5>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4018u, guest::cpu()->r[2], guest::cpu()->r[3]));
    child_4->byte_b7 = u8(u32(child_4->byte_b7) & 0xfeu);
    gptr<Local_006a3d54_r0_6> child_5 = gptr<Local_006a3d54_r0_6>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4024u, guest::cpu()->r[2], guest::cpu()->r[3]));
    child_5->byte_b7 = u8(u32(child_5->byte_b7) & 0xfeu);
    gptr<Local_006a3d54_r0_7> child_6 = gptr<Local_006a3d54_r0_7>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4030u, guest::cpu()->r[2], guest::cpu()->r[3]));
    child_6->byte_b7 = u8(u32(child_6->byte_b7) & 0xfeu);
    gptr<Local_006a3d54_r0_8> child_7 = gptr<Local_006a3d54_r0_8>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a403cu, guest::cpu()->r[2], guest::cpu()->r[3]));
    child_7->byte_b7 = u8(u32(child_7->byte_b7) & 0xfeu);
    gptr<Local_006a3d54_r0_9> child_8 = gptr<Local_006a3d54_r0_9>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4044u, guest::cpu()->r[2], guest::cpu()->r[3]));
    child_8->byte_b7 = u8(u32(child_8->byte_b7) & 0xfeu);
    gptr<Local_006a3d54_r0_10> child_9 = gptr<Local_006a3d54_r0_10>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4050u, guest::cpu()->r[2], guest::cpu()->r[3]));
    child_9->byte_b7 = u8(u32(child_9->byte_b7) & 0xfeu);
    gptr<Local_006a3d54_r0_11> child_10 = gptr<Local_006a3d54_r0_11>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4058u, guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r1_1 = u32(child_10->byte_b7) & 0xfeu;
    child_10->byte_b7 = u8(r1_1);
    u32 value = value_for_mode(child_10.addr(), r1_1);
    if (value == 0) {
        u32 r0_13 = find_of_type_b(r0_1, 0x6a4078u);
        gptr<Local_006a3d54_ea_1> ea_1 = gptr<Local_006a3d54_ea_1>(r0_13 + 0xb7u);
        ea_1->byte_0 = u8(u32(ea_1->byte_0) & 0xfeu | 1u);
        u32 r0_14 = find_of_type_b(r0_1, 0x6a4084u);
        gptr<Local_006a3d54_ea_2> ea_2 = gptr<Local_006a3d54_ea_2>(r0_14 + 0xb7u);
        ea_2->byte_0 = u8(u32(ea_2->byte_0) & 0xfeu | 1u);
        u32 r0_15 = find_of_type_b(r0_1, 0x6a4090u);
        gptr<Local_006a3d54_ea_3> ea_3 = gptr<Local_006a3d54_ea_3>(r0_15 + 0xb7u);
        ea_3->byte_0 = u8(u32(ea_3->byte_0) & 0xfeu | 1u);
        u32 r0_16 = find_of_type_b(r0_1, 0x6a409cu);
        gptr<Local_006a3d54_ea_4> ea_4 = gptr<Local_006a3d54_ea_4>(r0_16 + 0xb7u);
        ea_4->byte_0 = u8(u32(ea_4->byte_0) & 0xfeu | 1u);
        frame->word_0 = r0_16;
        TextBox__set_message_words(title_window + 0x24u, r0_13, r0_14, r0_15);
        gptr<Local_006a3d54_r0_18> r0_18 = gptr<Local_006a3d54_r0_18>(find_of_type_b(r0_1, 0x6a4060u));
        r0_18->byte_b7 = u8(u32(r0_18->byte_b7) & 0xfeu);
        r1_2 = 0x6a406cu;
        gptr<Local_006a3d54_r0_19> r0_19 = gptr<Local_006a3d54_r0_19>(find_of_type_b(r0_1, r1_2));
        r0_19->byte_b7 = u8(u32(r0_19->byte_b7) & 0xfeu);
    } else {
        u32 r0_20 = find_of_type_b(r0_1, 0x6a4060u);
        gptr<Local_006a3d54_ea_5> ea_5 = gptr<Local_006a3d54_ea_5>(r0_20 + 0xb7u);
        ea_5->byte_0 = u8(u32(ea_5->byte_0) & 0xfeu | 1u);
        u32 r0_21 = find_of_type_b(r0_1, 0x6a406cu);
        gptr<Local_006a3d54_ea_6> ea_6 = gptr<Local_006a3d54_ea_6>(r0_21 + 0xb7u);
        ea_6->byte_0 = u8(u32(ea_6->byte_0) & 0xfeu | 1u);
        frame->word_0 = 0;
        TextBox__set_message_words(title_window + 0x24u, r0_20, 0u, r0_21);
        gptr<Local_006a3d54_r0_23> r0_23 = gptr<Local_006a3d54_r0_23>(find_of_type_b(r0_1, 0x6a4078u));
        r0_23->byte_b7 = u8(u32(r0_23->byte_b7) & 0xfeu);
        gptr<Local_006a3d54_r0_24> r0_24 = gptr<Local_006a3d54_r0_24>(find_of_type_b(r0_1, 0x6a4084u));
        r0_24->byte_b7 = u8(u32(r0_24->byte_b7) & 0xfeu);
        gptr<Local_006a3d54_r0_25> r0_25 = gptr<Local_006a3d54_r0_25>(find_of_type_b(r0_1, 0x6a4090u));
        r0_25->byte_b7 = u8(u32(r0_25->byte_b7) & 0xfeu);
        r1_2 = 0x6a409cu;
        gptr<Local_006a3d54_r0_26> r0_26 = gptr<Local_006a3d54_r0_26>(find_of_type_b(r0_1, r1_2));
        r0_26->byte_b7 = u8(u32(r0_26->byte_b7) & 0xfeu);
    }
    gptr<Local_006a3d54_ea_7> ea_7 = gptr<Local_006a3d54_ea_7>(title_window + 0x940u);
    ea_7->word_0 = 0;
    ea_7->word_4 = 0;
    u32 r3_22 = frame->word_0;
    frame.release();
    Layout__virtual_3(r0_1, r1_2, guest::cpu()->r[2], r3_22);
    return;
}

}  // namespace d_006a3d54
GUEST_EXPORT(0x006a3d54, d_006a3d54::TitleWindow__setup_panes);

// f_006a42ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets every child's state (+0x120) to 3 and marks the object done (+0xe25).
namespace d_006a42ac {

struct __attribute__((packed)) MarkChildrenState3Arg0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0xe0d];  // (not used here)
    u8 byte_e25;
};
GUEST_OFFSET(MarkChildrenState3Arg0, word_14, 0x14);
GUEST_OFFSET(MarkChildrenState3Arg0, byte_e25, 0xe25);


void mark_children_state_3(gptr<MarkChildrenState3Arg0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = arg0->word_14;
    u32 r12 = 3u;
    u32 r1 = r2_1 - 0x124u;
    u32 r2 = *gptr<u32>(r2_1 + 4u);
    for (;;) {
        if (r1 == r0 - 0x114u) {
            break;
        }
        *gptr<u8>(r1 + 0x120u) = u8(r12);
        r1 = r2 - 0x124u;
        r2 = *gptr<u32>(r2 + 4u);
        guest::preempt();
    }
    arg0->byte_e25 = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_006a42ac
GUEST_EXPORT(0x006a42ac, d_006a42ac::mark_children_state_3);

// f_006a4f98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Registers the incremental save and train labels.
namespace d_006a4f98 {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr guest::Function<0x006a42e4, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_006a42e4;

struct __attribute__((packed)) SetupSaveAndTrainLabelsFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SetupSaveAndTrainLabelsFrame, object_0_vtable, 0x0);
GUEST_OFFSET(SetupSaveAndTrainLabelsFrame, word_4, 0x4);
GUEST_SIZE(SetupSaveAndTrainLabelsFrame, 0xc);

void setup_save_and_train_labels(u32 r0) {
    guest::StackFrameOf<SetupSaveAndTrainLabelsFrame> frame;  // the original's stack frame
    frame->word_4 = 0x6a4fe0;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    sead__SafeStringBase_char___SafeStringBase_006a42e4(r0, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_4 = 0x6a4fec;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    sead__SafeStringBase_char___SafeStringBase_006a42e4(r0, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006a4f98
GUEST_EXPORT_FRAMED(0x006a4f98, d_006a4f98::setup_save_and_train_labels, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006a51ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the save data range at +0x6e224 and checks the one at +0x6e2a4.
namespace d_006a51ec {

struct __attribute__((packed)) Local_006a51ec_r0_7 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_006a51ec_r0_7, byte_a, 0xa);

inline constexpr guest::Function<0x001b19dc, u32(u32, u32)> Progress__add;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x0070b334, u32(u32)> Range__is_valid;

u32 update_save_range_6e224(u32 r0, u32 r1) {
    u32 data_base = get_data_base(r0);
    u32 progress = data_base + 0x6e224u;
    Progress__add(progress, r1);
    u32 save_data = get_save_data(progress);
    u32 r0_5 = Range__is_valid(save_data + 0x6e2a4u);
    if (r0_5 == 0) {
        return r0_5;
    }
    u32 data_base_2 = get_data_base(r0_5);
    gptr<Local_006a51ec_r0_7> r0_7 = gptr<Local_006a51ec_r0_7>(data_base_2 + 0x6214fu);
    u32 r1_4 = u32(r0_7->byte_a) & ~0x80u;
    r0_7->byte_a = u8(r1_4);
    guest::cpu()->r[1] = r1_4;
    return r0_7.addr();
}

}  // namespace d_006a51ec
GUEST_EXPORT_FRAMED(0x006a51ec, d_006a51ec::update_save_range_6e224, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a5928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the color and wipe faders on the fader heap.
namespace d_006a5928 {

inline constexpr u32 fader_heap_address = 0x00952c7cu;
inline guest::global<u8, 0x00952641> scene_change_active;
inline guest::global<u32, 0x00952644> global_00952644;
inline guest::global<u32, 0x00952648> global_00952648;
inline guest::global<u32, 0x0095264c> global_0095264c;
inline guest::global<u32, 0x00952650> global_00952650;
inline guest::global<u32, 0x00952654> global_00952654;
inline guest::global<u32, 0x00952658> global_00952658;
inline guest::global<u32, 0x0095265c> global_0095265c;
inline guest::global<u32, 0x00952660> global_00952660;
inline guest::global<u32, 0x00952664> global_00952664;
inline guest::global<u32, 0x00952668> scene_change_kind;
inline guest::global<u32, 0x00952c7c> fader_heap;
inline constexpr guest::Function<0x001aa440, u32(u32, u32, u32, u32)> FaderColor__FaderColor;
inline constexpr guest::Function<0x001c8290, u32(u32, u32, u32, u32)> construct_fader_moment;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x006e4a48, u32(u32, u32, u32)> FaderWipe__FaderWipe;

struct __attribute__((packed)) CreateFadersFrame {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(CreateFadersFrame, word_0, 0x0);
GUEST_OFFSET(CreateFadersFrame, byte_4, 0x4);
GUEST_OFFSET(CreateFadersFrame, byte_5, 0x5);
GUEST_OFFSET(CreateFadersFrame, byte_6, 0x6);
GUEST_OFFSET(CreateFadersFrame, byte_7, 0x7);
GUEST_SIZE(CreateFadersFrame, 0xc);

void create_faders(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<CreateFadersFrame> frame;  // the original's stack frame
    u32 block = allocate_on_heap(0x18u, *fader_heap, 4u, r3);
    frame->byte_4 = 0;
    frame->byte_5 = 0;
    frame->byte_6 = 0;
    frame->byte_7 = 0;
    frame->word_0 = 0;
    *global_00952644 = FaderColor__FaderColor(block, 0u, frame.at(4).addr(), 0u);
    if (block != 0) {
        u32 block_2 = allocate_on_heap(0x18u, *fader_heap, 4u, guest::cpu()->r[3]);
        frame->byte_4 = 0;
        frame->byte_5 = 0xff;
        frame->byte_6 = 0xff;
        frame->byte_7 = 0xff;
        frame->word_0 = 0;
        *global_00952648 = FaderColor__FaderColor(block_2, 0u, frame.at(4).addr(), 0u);
        if (block_2 != 0) {
            u32 block_3 = allocate_on_heap(0x18u, *fader_heap, 4u, guest::cpu()->r[3]);
            frame->byte_4 = 0;
            frame->byte_5 = 0xff;
            frame->byte_6 = 0xff;
            frame->byte_7 = 0xff;
            frame->word_0 = 0;
            *global_0095264c = FaderColor__FaderColor(block_3, 0u, frame.at(4).addr(), 1u);
            if (block_3 != 0) {
                u32 block_4 = allocate_on_heap(0x14u, *fader_heap, 4u, guest::cpu()->r[3]);
                *global_00952650 = FaderWipe__FaderWipe(block_4, 0u, 0u);
                if (block_4 != 0) {
                    u32 block_5 = allocate_on_heap(0x10u, *fader_heap, 4u, guest::cpu()->r[3]);
                    *global_00952654 = construct_fader_moment(block_5, 0u, 0u, guest::cpu()->r[3]);
                    if (block_5 != 0) {
                        u32 block_6 = allocate_on_heap(0x18u, *fader_heap, 4u, guest::cpu()->r[3]);
                        frame->byte_4 = 0;
                        frame->byte_5 = 0;
                        frame->byte_6 = 0;
                        frame->byte_7 = 0;
                        frame->word_0 = 0;
                        *global_00952658 = FaderColor__FaderColor(block_6, 1u, frame.at(4).addr(), 0u);
                        if (block_6 != 0) {
                            u32 block_7 = allocate_on_heap(0x18u, *fader_heap, 4u, guest::cpu()->r[3]);
                            frame->byte_4 = 0;
                            frame->byte_5 = 0xff;
                            frame->byte_6 = 0xff;
                            frame->byte_7 = 0xff;
                            frame->word_0 = 0;
                            *global_0095265c = FaderColor__FaderColor(block_7, 1u, frame.at(4).addr(), 0u);
                            if (block_7 != 0) {
                                u32 block_8 = allocate_on_heap(0x18u, *fader_heap, 4u, guest::cpu()->r[3]);
                                frame->byte_4 = 0;
                                frame->byte_5 = 0xff;
                                frame->byte_6 = 0xff;
                                frame->byte_7 = 0xff;
                                frame->word_0 = 0;
                                *global_00952660 = FaderColor__FaderColor(block_8, 1u, frame.at(4).addr(), 1u);
                                if (block_8 != 0) {
                                    u32 block_9 = allocate_on_heap(0x10u, *fader_heap, 4u, 1u);
                                    *global_00952664 = construct_fader_moment(block_9, 1u, 0u, 1u);
                                    if (block_9 != 0) {
                                        *scene_change_active = 0;
                                        *scene_change_kind = 0;
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

}  // namespace d_006a5928
GUEST_EXPORT_FRAMED(0x006a5928, d_006a5928::create_faders, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006a5b88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the scene change: notifies the listeners (unless the current one holds it) and starts the change.
namespace d_006a5b88 {

inline constexpr u32 popup_window_address = 0x0094e4b8u;
inline guest::global<u32, 0x0094e4b8> popup_window;
inline guest::global<u8, 0x00952641> scene_change_active;
inline guest::global<u32, 0x00952668> scene_change_kind;
inline constexpr guest::Function<0x00565f00, u32(u32, u32, u32, u32)> notify_listeners_a;
inline constexpr guest::Function<0x0058d5a0, u32(u32)> Sound__update_ambience;
inline constexpr guest::Function<0x0076f0cc, u32(u32)> PopupWindow__elapsed;
inline constexpr guest::Function<0x0076f1b4, u32(u32, u32, u32, u32)> handler_is_845fc8;

u32 start_scene_change(u32 r0) {
    u32 r0_5 = 0;
    *scene_change_active = 1;
    *scene_change_kind = r0;
    u32 r0_1 = *popup_window;
    if (r0_1 != 0) {
        if (handler_is_845fc8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) != 0) {
            u32 elapsed_2 = PopupWindow__elapsed(*popup_window);
            if (elapsed_2 == 0) {
                return 1u;
            }
        }
    }
    r0_5 = notify_listeners_a(uxth(r0), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 != 0) {
        Sound__update_ambience(r0_5);
        *scene_change_active = 0;
        r0_5 = 1u;
    }
    return r0_5;
}

}  // namespace d_006a5b88
GUEST_EXPORT_FRAMED(0x006a5b88, d_006a5b88::start_scene_change, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a5c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Notifies the listeners of the end of the scene change and starts the scene's sound.
namespace d_006a5c00 {

inline constexpr u32 global_00952640_address = 0x00952640u;
inline guest::global<u8, 0x00952641> scene_change_active;
inline constexpr guest::Function<0x00565f74, u32(u32, u32, u32, u32)> notify_listeners_b;
inline constexpr guest::Function<0x0058d6bc, u32(u32, u32)> start_scene_sound;

u32 finish_scene_change(u32 r0, u32 r1) {
    u32 r0_2 = notify_listeners_b(uxth(r0), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    *scene_change_active = 0;
    start_scene_sound(r0_2, global_00952640_address);
    return r0_2;
}

}  // namespace d_006a5c00
GUEST_EXPORT_FRAMED(0x006a5c00, d_006a5c00::finish_scene_change, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a5dd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The world position of cell (x, y) (32 units each) at the default height.
namespace d_006a5dd4 {

struct __attribute__((packed)) CellCornerPositionArg0 {
    float float_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(CellCornerPositionArg0, float_0, 0x0);
GUEST_OFFSET(CellCornerPositionArg0, word_4, 0x4);
GUEST_OFFSET(CellCornerPositionArg0, float_8, 0x8);

inline guest::global<u32, 0x006a5e00> global_006a5e00;

void cell_corner_position(gptr<CellCornerPositionArg0> arg0, u32 r1, u32 r2) {
    u32 r1_1 = r1 << 5;
    arg0->word_4 = *global_006a5e00;
    float S0_1 = float(s32(r1_1));
    float S1_1 = float(s32(r2 << 5));
    arg0->float_0 = S0_1;
    arg0->float_8 = S1_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006a5dd4
GUEST_EXPORT(0x006a5dd4, d_006a5dd4::cell_corner_position);

// f_006a6408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the maps of the map table (blocks, cells and their items) for the scene.
namespace d_006a6408 {

inline constexpr u32 map_table_address = 0x009b4a24u;
inline constexpr guest::Function<0x001c2074, u32(u32, u32)> SharedLayouts__block_of_id_b;
inline constexpr guest::Function<0x0024246c, u32(u32, u32)> RealEstate__find_plot;
inline constexpr guest::Function<0x002e3bd4, u32(u32, u32)> sead__SafeStringBase_char___SafeStringBase_002e3bd4;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002faea4, u32(u32, u32, u32, u32)> block_at;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> shared_load_splits;
inline constexpr guest::Function<0x0030512c, u32(u32, u32)> record_302_address_0030512c;
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32)> block_or_first;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0057bc20, u32(u32, u32, u32, u32)> store_two_words_at_4_57bc20;
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> GridCellSmall__place_item;
inline constexpr guest::Function<0x00613704, u32(u32, u32, u32, u32)> is_acre_in_5x4;
inline constexpr guest::Function<0x00613758, u32(u32, u32, u32, u32)> member_address_0x6480_;
inline constexpr guest::Function<0x006a6f50, u32(u32)> Map__refresh_from_save;
inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32, u32)> load_block_a00;
inline constexpr guest::Function<0x006f9db4, u32(u32, u32)> position_in_1b_to_1d;
inline constexpr guest::Function<0x006f9e94, u32(u32, u32)> CellGrid__first_free_cell;
inline constexpr guest::Function<0x006fa728, u32(u32, u32, u32, u32)> scene_room_record_byte;
inline constexpr guest::Function<0x006fae98, u32(u32, u32)> room_size_of_kind;
inline constexpr guest::Function<0x006fb0cc, u32(u32)> byte_of_952742;
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> grid_cell_address;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32, u32)> tile_address_0075db98;
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32)> record_173_address;

struct __attribute__((packed)) MapTableBuildMapsFrame {
    u32 word_0;
    u32 room_size;
    u32 word_8;
};
GUEST_OFFSET(MapTableBuildMapsFrame, word_0, 0x0);
GUEST_OFFSET(MapTableBuildMapsFrame, room_size, 0x4);
GUEST_OFFSET(MapTableBuildMapsFrame, word_8, 0x8);
GUEST_SIZE(MapTableBuildMapsFrame, 0xc);

u32 MapTable__build_maps(u32 map_table, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<MapTableBuildMapsFrame> frame;  // the original's stack frame
    u32 i = 0;
    u32 r0_24 = 0;
    u32 r1_9 = 0;
    u32 r8 = map_table_address;
    u32 r9 = *gptr<u32>(r8 + 4u);
    u32 data_base = get_data_base(map_table, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r7 = data_base + 0x53400u;
    u32 j = 0u;
    do {
        i = 0u;
        do {
            u32 cell_5 = CellGrid__cell_at(r9, i, j, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (cell_5 != 0) {
                u32 r0_3 = tile_address_0075db98(r7, i, j, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                *gptr<u16>(cell_5) = *gptr<u16>(r0_3);
            }
            i += 1u;
            guest::preempt();
        } while (i < 7u);
        j += 1u;
        guest::preempt();
    } while (j < 6u);
    u32 k = 0u;
    do {
        i = 0u;
        do {
            u32 r0_4 = is_acre_in_5x4(i, k, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                u32 block = block_at(r7, i, k, r3);
                u32 cell_6 = CellGrid__cell_at(r9, i + 1u, k + 1u, guest::cpu()->r[3]);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (cell_6 != 0) {
                    store_two_words_at_4_57bc20(cell_6, block, 0u, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
            i += 1u;
            guest::preempt();
        } while (i < 5u);
        k += 1u;
        guest::preempt();
    } while (k < 4u);
    u32 r0_7 = member_address_0x6480_(r7, guest::cpu()->r[1], r2, r3);
    *gptr<u32>(r9 + 0x28u) = r0_7;
    Map__refresh_from_save(CellGrid__first_free_cell(1u, r0_7));
    RealEstate__find_plot(0u, 0u);
    r3 = guest::cpu()->r[3];
    j = 2u;
    u32 r11 = 0u;
    u32 r10 = 1u;
    do {
        u32 r4_1 = j & 0xffu;
        r7 = gptr<u32>(r8)[r4_1];
        u32 cell_7 = CellGrid__cell_at(r7, 0u, 0u, r3);
        r3 = guest::cpu()->r[3];
        r9 = cell_7;
        if (cell_7 != 0) {
            u32 r0_10 = scene_room_record_byte(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
            u32 save_data = get_save_data(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_13 = block_or_first(save_data + 0x5d900u, r0_10);
            u32 r0_14 = byte_of_952742(r4_1);
            u32 room_size = room_size_of_kind(r0_13, r0_14);
            frame->room_size = room_size;
            *gptr<u16>(r9) = u16(room_size);
            u32 r0_16 = record_302_address_0030512c(r0_13, r0_14);
            k = 0u;
            frame->word_8 = r0_16;
            do {
                i = 0u;
                do {
                    u32 cell_8 = grid_cell_address(frame->word_8, i, k, 0u);
                    frame->word_0 = r11;
                    GridCellSmall__place_item(r9, cell_8, i + 3u, k + 4u);
                    i += 1u;
                    guest::preempt();
                } while (i < 0xau);
                k += 1u;
                guest::preempt();
            } while (k < 0xau);
            k = 0u;
            do {
                i = 0u;
                do {
                    u32 cell_9 = grid_cell_address(frame->word_8, i, k, 1u);
                    frame->word_0 = r10;
                    GridCellSmall__place_item(r9, cell_9, i + 4u, k + 5u);
                    i += 1u;
                    guest::preempt();
                } while (i < 8u);
                k += 1u;
                guest::preempt();
            } while (k < 8u);
            u32 large_cell = GridMap__large_cell_at(r7, 0u, 0u);
            r3 = guest::cpu()->r[3];
            if (large_cell != 0) {
                u32 shared_layouts = shared_load_splits(large_cell, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                u32 r0_23 = SharedLayouts__block_of_id_b(shared_layouts, frame->room_size);
                r3 = guest::cpu()->r[3];
                if (r0_23 != 0) {
                    load_block_a00(large_cell, r0_23, 0xa00u, r3);
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        j += 1u;
        guest::preempt();
    } while (j < 0x1au);
    j = 0x1au;
    do {
        u32 r4_2 = j & 0xffu;
        r7 = gptr<u32>(r8)[r4_2];
        r0_24 = CellGrid__cell_at(r7, 0u, 0u, r3);
        r1_9 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r9 = r0_24;
        if (r0_24 != 0) {
            r10 = uxth(j + 0x13du);
            *gptr<u16>(r9) = u16(r10);
            u32 save_data_2 = get_save_data(r9, r10, guest::cpu()->r[2], r3);
            u32 r0_27 = record_173_address(save_data_2 + 0x6aeb8u, position_in_1b_to_1d(r4_2, 0xfff951c8u));
            k = 0u;
            r11 = k;
            frame->room_size = r0_27 + 2u;
            do {
                i = 0u;
                do {
                    u32 cell_10 = grid_cell_address(frame->room_size, i, k, 0u);
                    frame->word_0 = r11;
                    GridCellSmall__place_item(r9, cell_10, i + 3u, k + 4u);
                    i += 1u;
                    guest::preempt();
                } while (i < 0xau);
                k += 1u;
                guest::preempt();
            } while (k < 0xau);
            k = 0u;
            r11 = 1u;
            do {
                i = 0u;
                do {
                    u32 cell_11 = grid_cell_address(frame->room_size, i, k, 1u);
                    frame->word_0 = r11;
                    GridCellSmall__place_item(r9, cell_11, i + 4u, k + 5u);
                    i += 1u;
                    guest::preempt();
                } while (i < 8u);
                k += 1u;
                guest::preempt();
            } while (k < 8u);
            r0_24 = GridMap__large_cell_at(r7, 0u, 0u);
            r1_9 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            u32 r4_3 = r0_24;
            if (r0_24 != 0) {
                r0_24 = SharedLayouts__block_of_id_b(shared_load_splits(r0_24, r1_9, guest::cpu()->r[2], r3), r10);
                r3 = guest::cpu()->r[3];
                r1_9 = r0_24;
                if (r0_24 != 0) {
                    r0_24 = load_block_a00(r4_3, r1_9, 0xa00u, r3);
                    r1_9 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        j += 1u;
        guest::preempt();
    } while (j < 0x1eu);
    u32 data_base_2 = get_data_base(r0_24, r1_9, guest::cpu()->r[2], r3);
    sead__SafeStringBase_char___SafeStringBase_002e3bd4(data_base_2 + 0x6fe36u, 0x6fe36u);
    return 1u;
}

}  // namespace d_006a6408
GUEST_EXPORT_FRAMED(0x006a6408, d_006a6408::MapTable__build_maps, 0x4ff0);  // pushes {i, k, j, r7, r8, r9, r10, r11, lr} first, as the original

// f_006a69a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the main map exists.
namespace d_006a69a8 {

inline constexpr u32 map_table_address = 0x009b4a24u;
inline guest::global<u32, 0x009b4a24> map_table;

u32 MapTable__has_main_map() {
    u32 r0_1 = *map_table;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_006a69a8
GUEST_EXPORT(0x006a69a8, d_006a69a8::MapTable__has_main_map);

// f_006a69c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the map with the basic builder and registers it.
namespace d_006a69c0 {

inline constexpr u32 map_builder_address = 0x009b4aa0u;
inline guest::global<u32, 0x009b4aa0> map_builder;
inline constexpr guest::Function<0x00114b15, u32(u32, u32, u32, u32)> Date__set_from;
inline constexpr guest::Function<0x0022d64c, u32(u32, u32)> MapScreen__refresh_grid;
inline constexpr guest::Function<0x002b836c, u32(u32, u32, u32, u32)> ishutfact2__BasicBuilder__BasicBuilder;

void build_map_with_builder(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    ishutfact2__BasicBuilder__BasicBuilder(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    MapScreen__refresh_grid(*map_builder, r0);
    u32 r0_2 = *gptr<u32>(r0 + 0x10u);
    frame.release();
    Date__set_from(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_006a69c0
GUEST_EXPORT(0x006a69c0, d_006a69c0::build_map_with_builder);

// f_006a6b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the extra map (+0x7c) and maps 0x20 to 0x29 of the map table.
namespace d_006a6b48 {

inline constexpr u32 map_table_address = 0x009b4a24u;
inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> GridRect__visit_cells;
inline constexpr guest::Function<0x00581a18, u32(u32)> do_nothing_0052f280_veneer;

u32 MapTable__destroy_maps() {
    u32 r0_3 = 0;
    u32 r7 = 0u;
    u32 r6 = map_table_address;
    u32 grid_rect = *gptr<u32>(r6 + 0x7cu);
    if (grid_rect != 0) {
        GridRect__visit_cells(grid_rect, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_2 = *gptr<u32>(r6 + 0x7cu);
        if (r0_2 != 0) {
            do_nothing_0052f280_veneer(r0_2);
            free_memory(r0_2);
        }
        *gptr<u32>(r6 + 0x7cu) = r7;
    }
    u32 i = 0x20u;
    do {
        u32 r5_1 = i & 0xffu;
        r0_3 = gptr<u32>(r6)[r5_1];
        if (r0_3 != 0) {
            GridRect__visit_cells(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_3 = gptr<u32>(r6)[r5_1];
            if (r0_3 != 0) {
                do_nothing_0052f280_veneer(r0_3);
                r0_3 = free_memory(r0_3);
            }
            *gptr<u32>(r6 + (r5_1 << 2)) = r7;
        }
        i += 1u;
        guest::preempt();
    } while (i < 0x2au);
    return r0_3;
}

}  // namespace d_006a6b48
GUEST_EXPORT_FRAMED(0x006a6b48, d_006a6b48::MapTable__destroy_maps, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_006a6cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays sound 0x102a at the position.
namespace d_006a6cc8 {

inline constexpr u32 town_block_grid_address = 0x009526f8u;
inline guest::global<u32, 0x009526f8> town_block_grid;
inline constexpr guest::Function<0x001348cc, u32(u32, u32, u32, u32)> memmove;

void play_sound_102a(u32 r0) {
    memmove(*town_block_grid, r0, 0x102au, guest::cpu()->r[3]);
    return;
}

}  // namespace d_006a6cc8
GUEST_EXPORT(0x006a6cc8, d_006a6cc8::play_sound_102a);

// f_006a7174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the saved map (0x9526f4) back as map 0x9b4a9c, destroying the current one and the work table.
namespace d_006a7174 {

inline constexpr u32 global_009526ec_address = 0x009526ecu;
inline constexpr u32 current_map_address = 0x009526f4u;
inline constexpr u32 town_block_grid_address = 0x009526f8u;
inline constexpr u32 map_table_address = 0x009b4a24u;
inline constexpr u32 saved_map_address = 0x009b4a9cu;
inline guest::global<u32, 0x009526f4> current_map;
inline guest::global<u32, 0x009526f8> town_block_grid;
inline guest::global<u32, 0x009b4a9c> saved_map;
inline constexpr guest::Function<0x0012eacc, u32(u32, u32)> Grid2x2__destroy;
inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> GridRect__visit_cells;
inline constexpr guest::Function<0x00581a18, u32(u32, u32)> do_nothing_0052f280_veneer;

u32 MapTable__restore_saved_map(u32 r0_unused, u32 r1) {
    u32 r0_1 = *saved_map;
    if (r0_1 != 0) {
        r1 = *current_map;
        if (r1 != 0) {
            GridRect__visit_cells(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            u32 r0_2 = *saved_map;
            if (r0_2 != 0) {
                do_nothing_0052f280_veneer(r0_2, r1);
                free_memory(r0_2);
                r1 = guest::cpu()->r[1];
            }
            *saved_map = *current_map;
            *current_map = 0;
            r0_1 = *town_block_grid;
            if (r0_1 != 0) {
                Grid2x2__destroy(r0_1, r1);
                r0_1 = free_memory(r0_1);
                r1 = guest::cpu()->r[1];
            }
            *town_block_grid = 0;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006a7174
GUEST_EXPORT_FRAMED(0x006a7174, d_006a7174::MapTable__restore_saved_map, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a71ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Saves the map 0x9b4a9c and replaces it by a new 4 x 4 grid map, creating the work table once.
namespace d_006a71ec {

inline constexpr u32 island_field_heap_address = 0x00952c50u;
inline guest::global<u32, 0x009526f4> current_map;
inline guest::global<u32, 0x009526f8> town_block_grid;
inline guest::global<u32, 0x00952c50> island_field_heap;
inline guest::global<u32, 0x009b4a9c> saved_map;
inline constexpr guest::Function<0x002025bc, u32(u32, u32, u32, u32)> create_grid_map_with_buffer;
inline constexpr guest::Function<0x002ebce4, u32(u32)> construct_table_object;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_on_heap;

void MapTable__swap_in_temp_map(u32 r0_unused, u32 r1) {
    u32 r4_1 = *island_field_heap;
    if (r4_1 != 0) {
        *current_map = *saved_map;
        u32 r0_1 = create_grid_map_with_buffer(r4_1, 4u, 4u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            *saved_map = r0_1;
            if (*town_block_grid == 0) {
                u32 block = allocate_on_heap(0x102au, r4_1, 4u);
                u32 r0_3 = construct_table_object(block);
                r1 = guest::cpu()->r[1];
                *town_block_grid = r0_3;
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006a71ec
GUEST_EXPORT_FRAMED(0x006a71ec, d_006a71ec::MapTable__swap_in_temp_map, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a733c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The world position of cell (x, y) on the ground.
namespace d_006a733c {

inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;
inline constexpr guest::Function<0x006c78b8, u32(u32, u32, u32)> ground_height_at_world_by_tile;

u32 cell_ground_position(gptr<Float3> arg0, u32 r1, u32 r2) {
    float S1_1 = 0.0f;
    arg0->v[0] = float(s32(*half_cell_x + (r1 << 5)));
    arg0->v[1] = S1_1;
    float S0_1 = float(s32(*half_cell_z + (r2 << 5)));
    arg0->v[2] = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_1 = ground_height_at_world_by_tile(r1, r2, 0u);
    float S0_2 = guest::cpu()->s[0];
    arg0->v[1] = S0_2;
    guest::cpu()->s[0] = S0_2;
    return r0_1;
}

}  // namespace d_006a733c
GUEST_EXPORT_FRAMED(0x006a733c, d_006a733c::cell_ground_position, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a739c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The world position of tile (tx, ty) of block (x, y) on the ground.
namespace d_006a739c {

inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;
inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> ground_height_at_block_tile;

struct __attribute__((packed)) BlockTileGroundPositionFrame {
    u32 word_0;
};
GUEST_OFFSET(BlockTileGroundPositionFrame, word_0, 0x0);
GUEST_SIZE(BlockTileGroundPositionFrame, 0x4);

u32 block_tile_ground_position(gptr<Float3> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BlockTileGroundPositionFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6_1 = *half_cell_x;
    u32 r3_1 = *frame.at<u32>(0x18);
    float S1_1 = 0.0f;
    arg0->v[0] = float(s32(r6_1 + (r3 + (r1 << 4) << 5)));
    arg0->v[1] = S1_1;
    float S0_1 = float(s32(*half_cell_z + ((r3_1 + (r2 << 4)) << 5)));
    arg0->v[2] = S0_1;
    frame->word_0 = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_1 = ground_height_at_block_tile(r1, r2, r3, r3_1);
    float S0_2 = guest::cpu()->s[0];
    arg0->v[1] = S0_2;
    guest::cpu()->s[0] = S0_2;
    return r0_1;
}

}  // namespace d_006a739c
GUEST_EXPORT_FRAMED(0x006a739c, d_006a739c::block_tile_ground_position, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006a7410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the work table; true.
namespace d_006a7410 {

inline constexpr u32 town_block_grid_address = 0x009526f8u;
inline guest::global<u32, 0x009526f8> town_block_grid;
inline constexpr guest::Function<0x002e3bd4, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_002e3bd4;

u32 WorkTable__refresh() {
    sead__SafeStringBase_char___SafeStringBase_002e3bd4(*town_block_grid, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return 1u;
}

}  // namespace d_006a7410
GUEST_EXPORT_FRAMED(0x006a7410, d_006a7410::WorkTable__refresh, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a742c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Generates the work table from the seed, then starts the two random events; true.
namespace d_006a742c {

inline constexpr u32 global_009526ec_address = 0x009526ecu;
inline constexpr u32 town_block_grid_address = 0x009526f8u;
inline guest::global<u32, 0x009526f8> town_block_grid;
inline constexpr guest::Function<0x00114c9d, u32(u32)> start_block_event_2x2;
inline constexpr guest::Function<0x002e38b4, u32(u32, u32)> Grid2x2__scatter_random;
inline constexpr guest::Function<0x002e3bd4, u32(u32)> sead__SafeStringBase_char___SafeStringBase_002e3bd4;
inline constexpr guest::Function<0x0055cabc, u32(u32, u32, u32, u32)> Random__seed;
inline constexpr guest::Function<0x0055cb58, u32(u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x005d1ee0, u32(u32)> scatter_items_in_blocks;

u32 WorkTable__generate(u32 work_table) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_1 = *town_block_grid;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    Random__seed(frame.at(0).addr(), work_table, guest::cpu()->r[2], guest::cpu()->r[3]);
    Grid2x2__scatter_random(*town_block_grid, frame.at(0).addr());
    sead__SafeStringBase_char___SafeStringBase_002e3bd4(*town_block_grid);
    scatter_items_in_blocks(Xorshift128__next_0055cb58(frame.at(0).addr()));
    start_block_event_2x2(Xorshift128__next_0055cb58(frame.at(0).addr()));
    return 1u;
}

}  // namespace d_006a742c
GUEST_EXPORT_FRAMED(0x006a742c, d_006a742c::WorkTable__generate, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs relative road search candidates (15 by 15) for the scene.
namespace d_006a8280 {

struct __attribute__((packed)) CandLocator {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(CandLocator, byte_0, 0x0);
GUEST_OFFSET(CandLocator, byte_1, 0x1);
GUEST_OFFSET(CandLocator, byte_2, 0x2);
GUEST_OFFSET(CandLocator, byte_3, 0x3);
GUEST_OFFSET(CandLocator, byte_4, 0x4);
GUEST_OFFSET(CandLocator, byte_5, 0x5);
GUEST_OFFSET(CandLocator, word_8, 0x8);
GUEST_OFFSET(CandLocator, word_c, 0xc);
GUEST_OFFSET(CandLocator, word_10, 0x10);
GUEST_OFFSET(CandLocator, word_14, 0x14);
GUEST_OFFSET(CandLocator, word_18, 0x18);
GUEST_OFFSET(CandLocator, word_1c, 0x1c);
GUEST_OFFSET(CandLocator, word_20, 0x20);
GUEST_OFFSET(CandLocator, word_24, 0x24);

struct __attribute__((packed)) Local_006a8280_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006a8280_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006a8280_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006a8280_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_006a8280_r0_3 {
    u32 vtable;
    u8 unknown_4[0x1c];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Local_006a8280_r0_3, vtable, 0x0);
GUEST_OFFSET(Local_006a8280_r0_3, word_20, 0x20);
GUEST_OFFSET(Local_006a8280_r0_3, word_24, 0x24);
GUEST_OFFSET(Local_006a8280_r0_3, word_28, 0x28);

struct __attribute__((packed)) Local_006a8280_r0_6 {
    u8 unknown_0[0x214];  // (not used here)
    u8 byte_214;
    u8 byte_215;
    u8 unknown_216[0x2];  // (not used here)
    u32 word_218;
};
GUEST_OFFSET(Local_006a8280_r0_6, byte_214, 0x214);
GUEST_OFFSET(Local_006a8280_r0_6, byte_215, 0x215);
GUEST_OFFSET(Local_006a8280_r0_6, word_218, 0x218);

struct __attribute__((packed)) Local_006a8280_r4_2 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_006a8280_r4_2, byte_0, 0x0);
GUEST_OFFSET(Local_006a8280_r4_2, byte_1, 0x1);
GUEST_OFFSET(Local_006a8280_r4_2, byte_2, 0x2);
GUEST_OFFSET(Local_006a8280_r4_2, byte_3, 0x3);
GUEST_OFFSET(Local_006a8280_r4_2, byte_4, 0x4);
GUEST_OFFSET(Local_006a8280_r4_2, byte_5, 0x5);

inline constexpr u32 vtable_RoadSearchCand_15__15__IRootLocateRelative___Cand = 0x008fa3a4u;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32)> construct_search_cand_core;

u32 IRootLocateRelative___Cand__Cand_006a8280(gptr<CandLocator> cand_locator) {
    cand_locator->byte_0 = 0;
    cand_locator->byte_1 = 0;
    cand_locator->byte_2 = 0;
    cand_locator->byte_3 = 0;
    cand_locator->byte_4 = 0xff;
    cand_locator->byte_5 = 0xff;
    cand_locator->word_8 = 0xf;
    cand_locator->word_14 = cand_locator.addr() + 0x28u;
    cand_locator->word_18 = 0;
    cand_locator->word_1c = 0;
    cand_locator->word_c = 0xf;
    cand_locator->word_10 = 0xe1;
    u32 r4_1 = cand_locator.addr() + 0x20u;
    cand_locator->word_20 = 0;
    cand_locator->word_24 = cand_locator.addr() + 0x11bcu;
    u32 r0_2 = for_each_element(cand_locator.addr() + 0x28u, 0x274724u, 0x14u, 0xe1u);
    gptr<Local_006a8280_r0_3> r0_3 = gptr<Local_006a8280_r0_3>(r0_2 + 0x1194u);
    construct_search_cand_core(r0_3.addr(), 0xe1u, r0_3.addr() + 0x2cu);
    gptr<Local_006a8280_ea_1> ea_1 = gptr<Local_006a8280_ea_1>(r0_3.addr() + 0x14u);
    ea_1->word_0 = 0xf;
    ea_1->word_4 = 0xf;
    ea_1->word_8 = 0;
    gptr<Local_006a8280_r4_2> r4_2 = gptr<Local_006a8280_r4_2>(r0_3.addr() - 0x11bcu);
    r0_3->vtable = vtable_RoadSearchCand_15__15__IRootLocateRelative___Cand;
    r0_3->word_20 = 0;
    r0_3->word_24 = 0;
    r0_3->word_28 = 0;
    r4_2->byte_2 = 0x10;
    r4_2->byte_3 = 0x10;
    r4_2->byte_4 = 0x51;
    r4_2->byte_5 = 0x51;
    u32 r0_4 = r4_2->byte_0;
    u32 r1_1 = r4_2->byte_1;
    u32 r3_2 = r4_2->byte_4;
    if (r0_4 < 0x10u) {
        r0_4 = 0x10u;
    } else if (r0_4 > 0x51u) {
        r0_4 = r3_2;
    }
    r4_2->byte_0 = u8(r0_4);
    u32 r0_5 = r4_2->byte_3;
    u32 r2_2 = r4_2->byte_5;
    if (r1_1 < 0x10u) {
        r1_1 = r0_5;
    } else if (r1_1 > 0x51u) {
        r1_1 = r2_2;
    }
    gptr<Local_006a8280_r0_6> r0_6 = gptr<Local_006a8280_r0_6>(r4_2.addr() + 0x1000u);
    r4_2->byte_1 = u8(r1_1);
    r0_6->byte_214 = 0;
    r0_6->byte_215 = 0;
    r0_6->word_218 = 0;
    u32 scene_2 = current_scene_id(r0_6.addr());
    if (scene_2 == 1u) {
        r4_2->byte_4 = 0x51;
        r4_2->byte_5 = 0x51;
        r4_2->byte_2 = 0;
        r4_2->byte_3 = 0;
        u32 r0_8 = r4_2->byte_0;
        u32 r1_2 = r4_2->byte_1;
        if (r0_8 > 0x51u) {
            r0_8 = 0x51u;
        }
        r4_2->byte_0 = u8(r0_8);
        u32 r0_9 = r4_2->byte_5;
        if (r1_2 > 0x51u) {
            r1_2 = r0_9;
        }
        r4_2->byte_1 = u8(r1_2);
    }
    return r4_2.addr();
}

}  // namespace d_006a8280
GUEST_EXPORT_FRAMED(0x006a8280, d_006a8280::IRootLocateRelative___Cand__Cand_006a8280, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006a83fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns effect `kind` of the set (first variant) at the position with a unit scale.
namespace d_006a83fc {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> NpcAction__begin_kind;

struct __attribute__((packed)) EffectSetSpawnScaledFrame {
    u32 word_0;
    u32 word_4;
    float float_8;
    float float_c;
    float float_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(EffectSetSpawnScaledFrame, word_0, 0x0);
GUEST_OFFSET(EffectSetSpawnScaledFrame, word_4, 0x4);
GUEST_OFFSET(EffectSetSpawnScaledFrame, float_8, 0x8);
GUEST_OFFSET(EffectSetSpawnScaledFrame, float_c, 0xc);
GUEST_OFFSET(EffectSetSpawnScaledFrame, float_10, 0x10);
GUEST_SIZE(EffectSetSpawnScaledFrame, 0x18);

u32 EffectSet__spawn_scaled(u32 r0_unused, u32 r1, u32 r2, u32 is_item) {
    guest::StackFrameOf<EffectSetSpawnScaledFrame> frame;  // the original's stack frame
    float S0_1 = 1.0f;
    frame->float_8 = S0_1;
    frame->float_c = S0_1;
    frame->float_10 = S0_1;
    frame->word_0 = r2;
    frame->word_4 = frame.at(8).addr();
    u32 r2_1 = *gptr<u32>((is_item << 3) + 0x8653fcu);
    guest::cpu()->s[0] = S0_1;
    NpcAction__begin_kind(guest::cpu()->r[0], is_item, r2_1, r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a83fc
GUEST_EXPORT_FRAMED(0x006a83fc, d_006a83fc::EffectSet__spawn_scaled, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns effect `kind` of the set (first variant) with the given parameters.
namespace d_006a8444 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> NpcAction__begin_kind;

struct __attribute__((packed)) EffectSetSpawnFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(EffectSetSpawnFrame, word_0, 0x0);
GUEST_OFFSET(EffectSetSpawnFrame, word_4, 0x4);
GUEST_SIZE(EffectSetSpawnFrame, 0xc);

u32 EffectSet__spawn(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<EffectSetSpawnFrame> frame;  // the original's stack frame
    frame->word_0 = r2;
    frame->word_4 = r3;
    u32 r1_1 = *frame.at<u32>(0x10);
    NpcAction__begin_kind(guest::cpu()->r[0], r1_1, *gptr<u32>((r1_1 << 3) + 0x8653fcu), r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a8444
GUEST_EXPORT_FRAMED(0x006a8444, d_006a8444::EffectSet__spawn, 0x4000);  // pushes {lr} first, as the original

// f_006a8474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the matrix of the current effect (+0x184) when it still exists.
namespace d_006a8474 {

struct __attribute__((packed)) EffectSet {
    u8 unknown_0[0x184];  // (not used here)
    u32 word_184;
};
GUEST_OFFSET(EffectSet, word_184, 0x184);

struct __attribute__((packed)) Local_006a8474_r0_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_006a8474_r0_1, word_c, 0xc);
GUEST_OFFSET(Local_006a8474_r0_1, word_10, 0x10);

inline constexpr guest::Function<0x00207190, u32(u32, u32, u32, u32)> Effect__spawn_at;
inline constexpr guest::Function<0x002e5bec, u32(u32, u32)> EffectHandle__set_matrix;

void EffectSet__set_current_matrix(gptr<EffectSet> effect_set, u32 r1) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    gptr<Local_006a8474_r0_1> r0_1 = gptr<Local_006a8474_r0_1>(effect_set.addr() + effect_set->word_184 * 0x18u + 4u);
    u32 r3_1 = r0_1->word_c;
    if (r3_1 == 0 || r0_1->word_10 != *gptr<u32>(r3_1 + 0xcu)) {
        return;
    }
    Effect__spawn_at(frame.at(0).addr(), r1, guest::cpu()->r[2], 1u);
    EffectHandle__set_matrix(effect_set.addr() + effect_set->word_184 * 0x18u + 4u, frame.at(0).addr());
}

}  // namespace d_006a8474
GUEST_EXPORT_FRAMED(0x006a8474, d_006a8474::EffectSet__set_current_matrix, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a84e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns effect `kind` of the set (second variant) at the position with a unit scale.
namespace d_006a84e8 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> NpcAction__begin_kind;

struct __attribute__((packed)) EffectSetSpawnVariantScaledFrame {
    u32 word_0;
    u32 word_4;
    float float_8;
    float float_c;
    float float_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(EffectSetSpawnVariantScaledFrame, word_0, 0x0);
GUEST_OFFSET(EffectSetSpawnVariantScaledFrame, word_4, 0x4);
GUEST_OFFSET(EffectSetSpawnVariantScaledFrame, float_8, 0x8);
GUEST_OFFSET(EffectSetSpawnVariantScaledFrame, float_c, 0xc);
GUEST_OFFSET(EffectSetSpawnVariantScaledFrame, float_10, 0x10);
GUEST_SIZE(EffectSetSpawnVariantScaledFrame, 0x18);

u32 EffectSet__spawn_variant_scaled(u32 r0_unused, u32 r1, u32 r2, u32 is_item) {
    guest::StackFrameOf<EffectSetSpawnVariantScaledFrame> frame;  // the original's stack frame
    float S0_1 = 1.0f;
    frame->float_8 = S0_1;
    frame->float_c = S0_1;
    frame->float_10 = S0_1;
    frame->word_0 = r2;
    frame->word_4 = frame.at(8).addr();
    u32 r2_1 = *gptr<u32>((is_item << 3) + 0x8653fcu + 4u);
    guest::cpu()->s[0] = S0_1;
    NpcAction__begin_kind(guest::cpu()->r[0], is_item, r2_1, r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a84e8
GUEST_EXPORT_FRAMED(0x006a84e8, d_006a84e8::EffectSet__spawn_variant_scaled, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns effect `kind` of the set (second variant) with the given parameters.
namespace d_006a8534 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> NpcAction__begin_kind;

struct __attribute__((packed)) EffectSetSpawnVariantFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(EffectSetSpawnVariantFrame, word_0, 0x0);
GUEST_OFFSET(EffectSetSpawnVariantFrame, word_4, 0x4);
GUEST_SIZE(EffectSetSpawnVariantFrame, 0xc);

u32 EffectSet__spawn_variant(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<EffectSetSpawnVariantFrame> frame;  // the original's stack frame
    u32 r1_1 = *frame.at<u32>(0x10);
    frame->word_0 = r2;
    frame->word_4 = r3;
    NpcAction__begin_kind(guest::cpu()->r[0], r1_1, *gptr<u32>((r1_1 << 3) + 0x8653fcu + 4u), r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a8534
GUEST_EXPORT_FRAMED(0x006a8534, d_006a8534::EffectSet__spawn_variant, 0x4000);  // pushes {lr} first, as the original

// f_006a8568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the mode (+0x188) and kills the 16 effects of the set.
namespace d_006a8568 {

struct __attribute__((packed)) EffectSet {
    u8 unknown_0[0x188];  // (not used here)
    u32 word_188;
};
GUEST_OFFSET(EffectSet, word_188, 0x188);

inline constexpr guest::Function<0x002e6450, u32(u32, u32, u32, u32)> EffectHandle__kill_now;

void EffectSet__kill_all(gptr<EffectSet> effect_set, u32 r1) {
    u32 r0 = effect_set.addr();
    u32 r5 = r0;
    u32 i = 0u;
    effect_set->word_188 = r1;
    do {
        EffectHandle__kill_now(r5 + i * 0x18u + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0x10);
}

}  // namespace d_006a8568
GUEST_EXPORT_FRAMED(0x006a8568, d_006a8568::EffectSet__kill_all, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_006a8954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a foot mark: its sixteen particle handles.
namespace d_006a8954 {

inline constexpr u32 vtable_FootMark_rec = 0x008f8b60u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 FootMark__destructor(gptr<FootMark_rec> foot_mark_rec) {
    foot_mark_rec->vtable = vtable_FootMark_rec;
    destroy_array_elements(foot_mark_rec.addr() + 4u, 0x2e6944u, 0x18u, 0x10u);
    return foot_mark_rec.addr();
}

}  // namespace d_006a8954
GUEST_EXPORT_FRAMED(0x006a8954, d_006a8954::FootMark__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the StreetPass message icon (unless loaded) into a heap of 0x1080 bytes on a parent heap (arg 1).
namespace d_006a8988 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x24];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_18, 0x18);
GUEST_OFFSET(sead__SafeStringBase_char_, word_40, 0x40);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 cec_message_icon_address = 0x00952ae4u;
inline guest::global<u32, 0x00952ae4> cec_message_icon;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> FileLoader__load;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;

struct __attribute__((packed)) LoadCecMessageIconFrame {
    u32 word_0;
    u32 word_4;
    u32 object_8_vtable;
    u32 word_c;
};
GUEST_OFFSET(LoadCecMessageIconFrame, word_0, 0x0);
GUEST_OFFSET(LoadCecMessageIconFrame, word_4, 0x4);
GUEST_OFFSET(LoadCecMessageIconFrame, object_8_vtable, 0x8);
GUEST_OFFSET(LoadCecMessageIconFrame, word_c, 0xc);
GUEST_SIZE(LoadCecMessageIconFrame, 0x10);

void load_cec_message_icon(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1) {
    guest::StackFrameOf<LoadCecMessageIconFrame> frame;  // the original's stack frame
    if (safe_string_base_char->word_18 != 0) {
        return;
    }
    frame->word_c = 0x6a89f4;
    frame->object_8_vtable = vtable_sead__SafeStringBase_char__rec;
    frame->word_0 = 1;
    frame->word_4 = 0;
    HeapHolder__recreate(safe_string_base_char.addr() + 0x3cu, 0x1080u, r1, frame.at(8).addr());
    FileLoader__load(safe_string_base_char.addr() + 0x14u, *cec_message_icon, safe_string_base_char->word_40, 0u);
}

}  // namespace d_006a8988
GUEST_EXPORT_FRAMED(0x006a8988, d_006a8988::load_cec_message_icon, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8a0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the extra save data icon (unless loaded) into a heap of 0x4000 bytes on a parent heap (arg 1).
namespace d_006a8a0c {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x1c];  // (not used here)
    u32 word_48;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_28, 0x28);
GUEST_OFFSET(sead__SafeStringBase_char_, word_48, 0x48);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 ext_save_data_icon_address = 0x00952ae8u;
inline guest::global<u32, 0x00952ae8> ext_save_data_icon;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> FileLoader__load;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;

struct __attribute__((packed)) LoadExtSaveDataIconFrame {
    u32 word_0;
    u32 word_4;
    u32 object_8_vtable;
    u32 word_c;
};
GUEST_OFFSET(LoadExtSaveDataIconFrame, word_0, 0x0);
GUEST_OFFSET(LoadExtSaveDataIconFrame, word_4, 0x4);
GUEST_OFFSET(LoadExtSaveDataIconFrame, object_8_vtable, 0x8);
GUEST_OFFSET(LoadExtSaveDataIconFrame, word_c, 0xc);
GUEST_SIZE(LoadExtSaveDataIconFrame, 0x10);

u32 load_ext_save_data_icon(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1) {
    guest::StackFrameOf<LoadExtSaveDataIconFrame> frame;  // the original's stack frame
    if (safe_string_base_char->word_28 != 0) {
        return 1u;
    }
    frame->word_c = 0x6a8a78;
    frame->object_8_vtable = vtable_sead__SafeStringBase_char__rec;
    frame->word_0 = 1;
    frame->word_4 = 0;
    HeapHolder__recreate(safe_string_base_char.addr() + 0x44u, 0x4000u, r1, frame.at(8).addr());
    return FileLoader__load(safe_string_base_char.addr() + 0x24u, *ext_save_data_icon, safe_string_base_char->word_48, 0u);
}

}  // namespace d_006a8a0c
GUEST_EXPORT_FRAMED(0x006a8a0c, d_006a8a0c::load_ext_save_data_icon, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the handle (+0x14) and the object (+0x3c).
namespace d_006a8a90 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> Handle__release;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;

void ResourceHolder14__release(u32 resource_holder14) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Handle__release(resource_holder14 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    ObjectOwner__release_object(resource_holder14 + 0x3cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_006a8a90
GUEST_EXPORT(0x006a8a90, d_006a8a90::ResourceHolder14__release);

// f_006a8aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the StreetPass message box icon (unless loaded) into a heap of 0x1600 bytes on a parent heap (arg 1).
namespace d_006a8aac {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x2c];  // (not used here)
    u32 word_38;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_8, 0x8);
GUEST_OFFSET(sead__SafeStringBase_char_, word_38, 0x38);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 cec_message_box_icon_address = 0x00952ae0u;
inline guest::global<u32, 0x00952ae0> cec_message_box_icon;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> FileLoader__load;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;

struct __attribute__((packed)) LoadCecMessageBoxIconFrame {
    u32 word_0;
    u32 word_4;
    u32 object_8_vtable;
    u32 word_c;
};
GUEST_OFFSET(LoadCecMessageBoxIconFrame, word_0, 0x0);
GUEST_OFFSET(LoadCecMessageBoxIconFrame, word_4, 0x4);
GUEST_OFFSET(LoadCecMessageBoxIconFrame, object_8_vtable, 0x8);
GUEST_OFFSET(LoadCecMessageBoxIconFrame, word_c, 0xc);
GUEST_SIZE(LoadCecMessageBoxIconFrame, 0x10);

void load_cec_message_box_icon(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1) {
    guest::StackFrameOf<LoadCecMessageBoxIconFrame> frame;  // the original's stack frame
    if (safe_string_base_char->word_8 != 0) {
        return;
    }
    frame->word_c = 0x6a8b18;
    frame->object_8_vtable = vtable_sead__SafeStringBase_char__rec;
    frame->word_0 = 1;
    frame->word_4 = 0;
    HeapHolder__recreate(safe_string_base_char.addr() + 0x34u, 0x1600u, r1, frame.at(8).addr());
    FileLoader__load(safe_string_base_char.addr() + 4u, *cec_message_box_icon, safe_string_base_char->word_38, 0u);
}

}  // namespace d_006a8aac
GUEST_EXPORT_FRAMED(0x006a8aac, d_006a8aac::load_cec_message_box_icon, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the handle (+0x24) and the object (+0x44).
namespace d_006a8b34 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> Handle__release;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;

u32 ResourceHolder24__release(u32 resource_holder24) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Handle__release(resource_holder24 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return ObjectOwner__release_object(resource_holder24 + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006a8b34
GUEST_EXPORT(0x006a8b34, d_006a8b34::ResourceHolder24__release);

// f_006a8b50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the handle (+4) and the object (+0x34).
namespace d_006a8b50 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> Handle__release;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;

void ResourceHolder4__release(u32 resource_holder4) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Handle__release(resource_holder4 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    ObjectOwner__release_object(resource_holder4 + 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_006a8b50
GUEST_EXPORT(0x006a8b50, d_006a8b50::ResourceHolder4__release);

// f_006a8d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When both panes (+0x254, +0x258) are visible, runs the check on the second.
namespace d_006a8d28 {

struct __attribute__((packed)) BothPanesVisibleCheckArg0 {
    u8 unknown_0[0x254];  // (not used here)
    u32 word_254;
    u32 word_258;
};
GUEST_OFFSET(BothPanesVisibleCheckArg0, word_254, 0x254);
GUEST_OFFSET(BothPanesVisibleCheckArg0, word_258, 0x258);

inline constexpr guest::Function<0x004bef3c, u32(u32, u32)> ScrollBar__knob_position;

u32 both_panes_visible_check(gptr<BothPanesVisibleCheckArg0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = arg0->word_254;
    u32 zf_1 = r2_1 == 0;
    if (!zf_1) {
        r0 = arg0->word_258;
        zf_1 = r0 == 0;
    }
    if (zf_1 || (u32(*gptr<u8>(r2_1 + 0xb7u)) & 1u) == 0 || (u32(*gptr<u8>(r0 + 0xb7u)) & 1u) == 0) {
        return 0u;
    }
    return ScrollBar__knob_position(r0, guest::cpu()->r[1]);
}

}  // namespace d_006a8d28
GUEST_EXPORT(0x006a8d28, d_006a8d28::both_panes_visible_check);

// f_006a97a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the block's coordinates, its offsets and its corner position.
namespace d_006a97a0 {

struct __attribute__((packed)) BlockCell {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(BlockCell, word_0, 0x0);
GUEST_OFFSET(BlockCell, word_4, 0x4);
GUEST_OFFSET(BlockCell, word_8, 0x8);
GUEST_OFFSET(BlockCell, word_c, 0xc);

inline guest::global<u32, 0x0085f2c4> block_cell_size_a;
inline guest::global<u32, 0x0085f2c8> block_cell_size_b;
inline constexpr guest::Function<0x006a5e04, u32(u32, u32, u32)> block_corner_position;

u32 BlockCell__init(gptr<BlockCell> block_cell, u32 r1, u32 r2) {
    block_cell->word_0 = r1;
    block_cell->word_4 = r2;
    block_cell->word_8 = r1 * *block_cell_size_a;
    block_cell->word_c = r2 * *block_cell_size_b;
    block_corner_position((block_cell.addr() + 0xcu) + 4u, r1, r2);
    return 1u;
}

}  // namespace d_006a97a0
GUEST_EXPORT_FRAMED(0x006a97a0, d_006a97a0::BlockCell__init, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a9834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the header and constructs the 256 cells (10 bytes each).
namespace d_006a9834 {

struct __attribute__((packed)) BlockCells {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(BlockCells, word_0, 0x0);
GUEST_OFFSET(BlockCells, word_4, 0x4);
GUEST_OFFSET(BlockCells, word_8, 0x8);
GUEST_OFFSET(BlockCells, word_c, 0xc);

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 BlockCells__construct(gptr<BlockCells> block_cells, u32 r1_unused, u32 r2, u32 r3) {
    block_cells->word_0 = 0;
    block_cells->word_4 = 0;
    block_cells->word_8 = 0;
    block_cells->word_c = 0;
    clear_aligned(block_cells.addr() + 0x1cu, 0xa00u, r2, r3);
    return for_each_element(block_cells.addr() + 0x1cu, 0x60d240u, 0xau, 0x100u) - 0x1cu;
}

}  // namespace d_006a9834
GUEST_EXPORT_FRAMED(0x006a9834, d_006a9834::BlockCells__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a987c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the 256 cells.
namespace d_006a987c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 BlockCells__destroy(u32 block_cells) {
    destroy_array_elements(block_cells + 0x1cu, 0x60d260u, 0xau, 0x100u);
    return block_cells;
}

}  // namespace d_006a987c
GUEST_EXPORT_FRAMED(0x006a987c, d_006a987c::BlockCells__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a98b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Switches the toggle on (1) or off (0) when it is not moving, instantly or with a 15-frame move; true when it
// changed.
namespace d_006a98b0 {

struct __attribute__((packed)) Toggle {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u16 half_14;
    u16 half_16;
    u8 byte_18;
};
GUEST_OFFSET(Toggle, byte_0, 0x0);
GUEST_OFFSET(Toggle, float_4, 0x4);
GUEST_OFFSET(Toggle, float_8, 0x8);
GUEST_OFFSET(Toggle, word_10, 0x10);
GUEST_OFFSET(Toggle, half_14, 0x14);
GUEST_OFFSET(Toggle, half_16, 0x16);
GUEST_OFFSET(Toggle, byte_18, 0x18);

inline guest::global<u32, 0x006a9960> global_006a9960;

u32 Toggle__set(gptr<Toggle> toggle, u32 r1, u32 r2, u32 r3) {
    float S0_2 = 0;
    float S1_1 = toggle->float_4;
    toggle->word_10 = *global_006a9960;
    float S0_1 = fabsf(S1_1);
    if (r1 != 0) {
        if (s32(std::bit_cast<u32>(S0_1)) > 0x34000000) {
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        toggle->byte_18 = u8(r1);
        S0_2 = 1.0f;
        toggle->float_4 = S0_2;
        if (r2 == 0) {
            toggle->float_8 = S0_2;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if (r3 == 0) {
            toggle->byte_0 = 0;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        toggle->byte_0 = 1;
        toggle->half_14 = 0;
        toggle->half_16 = 0xf;
        guest::cpu()->r[1] = 0xfu;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    toggle->byte_0 = 0;
    if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    toggle->byte_18 = u8(r1);
    S0_2 = 0.0f;
    toggle->float_4 = S0_2;
    if (r2 != 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    toggle->float_8 = S0_2;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_006a98b0
GUEST_EXPORT_FRAMED(0x006a98b0, d_006a98b0::Toggle__set, 0x10);  // pushes {r4} first, as the original

// f_006a996c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Switches the toggle on or off instantly when it is not already there.
namespace d_006a996c {

struct __attribute__((packed)) Toggle {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Toggle, byte_0, 0x0);
GUEST_OFFSET(Toggle, float_4, 0x4);
GUEST_OFFSET(Toggle, float_8, 0x8);
GUEST_OFFSET(Toggle, word_10, 0x10);
GUEST_OFFSET(Toggle, byte_18, 0x18);

inline guest::global<u32, 0x006a99d0> global_006a99d0;

void Toggle__set_instant(gptr<Toggle> toggle, u32 r1) {
    toggle->word_10 = *global_006a99d0;
    if (r1 != 0) {
        float S0_1 = fabsf(toggle->float_4);
        if (s32(std::bit_cast<u32>(S0_1)) > 0x34000000) {
            guest::cpu()->s[0] = S0_1;
            return;
        }
        toggle->byte_18 = u8(r1);
        float S0_2 = 1.0f;
        toggle->float_4 = S0_2;
        toggle->float_8 = S0_2;
        guest::cpu()->s[0] = S0_2;
        return;
    }
    float S0_3 = toggle->float_4;
    toggle->byte_0 = 0;
    float S0_4 = fabsf(S0_3);
    if (s32(std::bit_cast<u32>(S0_4)) <= 0x34000000) {
        guest::cpu()->s[0] = S0_4;
        return;
    }
    toggle->byte_18 = u8(r1);
    float S0_5 = 0.0f;
    toggle->float_4 = S0_5;
    toggle->float_8 = S0_5;
    guest::cpu()->s[0] = S0_5;
}

}  // namespace d_006a996c
GUEST_EXPORT(0x006a996c, d_006a996c::Toggle__set_instant);

// f_006a99dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the toggle on (speed 0.2), instantly or with a 15-frame move.
namespace d_006a99dc {

struct __attribute__((packed)) Toggle {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    float float_10;
    u16 half_14;
    u16 half_16;
    u8 byte_18;
};
GUEST_OFFSET(Toggle, byte_0, 0x0);
GUEST_OFFSET(Toggle, float_4, 0x4);
GUEST_OFFSET(Toggle, float_8, 0x8);
GUEST_OFFSET(Toggle, float_10, 0x10);
GUEST_OFFSET(Toggle, half_14, 0x14);
GUEST_OFFSET(Toggle, half_16, 0x16);
GUEST_OFFSET(Toggle, byte_18, 0x18);


u32 Toggle__reset_on(gptr<Toggle> toggle, u32 r1, u32 r2) {
    float S1_1 = 0.2f;
    float S2_1 = 0.0f;
    float S0_1 = 1.0f;
    toggle->float_10 = S1_1;
    toggle->float_8 = S2_1;
    toggle->float_4 = S0_1;
    toggle->byte_18 = 1;
    if (r1 == 0) {
        toggle->float_8 = S0_1;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    if (r2 == 0) {
        toggle->byte_0 = 0;
        guest::cpu()->r[1] = 0u;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    toggle->byte_0 = 1;
    toggle->half_14 = 0;
    toggle->half_16 = 0xf;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 1u;
}

}  // namespace d_006a99dc
GUEST_EXPORT(0x006a99dc, d_006a99dc::Toggle__reset_on);

// f_006a9a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the toggle off (speed 0.2), with its value at 1 when asked; true when it was.
namespace d_006a9a40 {

struct __attribute__((packed)) Toggle {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    float float_10;
    u8 unknown_14[0x4];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Toggle, byte_0, 0x0);
GUEST_OFFSET(Toggle, float_4, 0x4);
GUEST_OFFSET(Toggle, float_8, 0x8);
GUEST_OFFSET(Toggle, float_10, 0x10);
GUEST_OFFSET(Toggle, byte_18, 0x18);


u32 Toggle__reset_off(gptr<Toggle> toggle, u32 r1) {
    float S1_1 = 0.2f;
    float S0_1 = 0.0f;
    toggle->float_10 = S1_1;
    toggle->byte_0 = 0;
    toggle->float_4 = S0_1;
    if (r1 != 0) {
        S0_1 = 1.0f;
    }
    toggle->byte_18 = 0;
    toggle->float_8 = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r1 != 0;
}

}  // namespace d_006a9a40
GUEST_EXPORT(0x006a9a40, d_006a9a40::Toggle__reset_off);

// f_006aa3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a mail body line engine: a message engine at no offset, scale 1.
namespace d_006aa3e0 {

struct __attribute__((packed)) Local_006aa3e0_r0_1 {
    u32 vtable;
    u8 unknown_4[0x5c];  // (not used here)
    u32 word_60;
    float float_64;
    float float_68;
    u8 unknown_6c[0x8];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Local_006aa3e0_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_006aa3e0_r0_1, word_60, 0x60);
GUEST_OFFSET(Local_006aa3e0_r0_1, float_64, 0x64);
GUEST_OFFSET(Local_006aa3e0_r0_1, float_68, 0x68);
GUEST_OFFSET(Local_006aa3e0_r0_1, word_74, 0x74);

struct __attribute__((packed)) Local_006aa3e0_r1_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006aa3e0_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_006aa3e0_r1_1, float_4, 0x4);

inline constexpr u32 vtable_MailWork__BodyLineEngine = 0x0090af70u;
inline constexpr guest::Function<0x005e9e58, u32(u32)> store_word_constant_pack_0x0_005e9e58;
inline constexpr guest::Function<0x00601a20, u32(u32)> construct_msg_engine;

void MailWork__BodyLineEngine__construct(u32 body_line_engine, float S0, float S1) {
    gptr<Local_006aa3e0_r0_1> r0_1 = gptr<Local_006aa3e0_r0_1>(construct_msg_engine(body_line_engine));
    float S0_1 = 0.0f;
    r0_1->vtable = vtable_MailWork__BodyLineEngine;
    r0_1->word_60 = 0;
    r0_1->float_64 = S0_1;
    float S1_1 = 1.0f;
    r0_1->float_68 = S0_1;
    gptr<Local_006aa3e0_r1_1> r1_1 = gptr<Local_006aa3e0_r1_1>(r0_1.addr() + 0x6cu);
    r1_1->float_0 = S0_1;
    r1_1->float_4 = S1_1;
    r0_1->word_74 = 0;
    u32 r0_2 = r0_1.addr() + 0x78u;
    *gptr<u32>(r0_2) = 0;
    u32 r0_3 = r0_2 + 4u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    store_word_constant_pack_0x0_005e9e58(r0_3);
    *gptr<u8>(r0_3 + 4u) = 0;
}

}  // namespace d_006aa3e0
GUEST_EXPORT_FRAMED(0x006aa3e0, d_006aa3e0::MailWork__BodyLineEngine__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_006aa46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a mail body line engine: its message engine.
namespace d_006aa46c {

inline constexpr u32 vtable_MailWork__BodyLineEngine = 0x0090af70u;
inline constexpr guest::Function<0x00601a88, u32(u32, u32)> destroy_msg_engine;

u32 MailWork__BodyLineEngine__destructor(gptr<MailWork__BodyLineEngine> body_line_engine) {
    body_line_engine->vtable = vtable_MailWork__BodyLineEngine;
    return destroy_msg_engine(body_line_engine.addr(), vtable_MailWork__BodyLineEngine);
}

}  // namespace d_006aa46c
GUEST_EXPORT(0x006aa46c, d_006aa46c::MailWork__BodyLineEngine__destructor);

// f_006ab00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Collects the changed flags of the current player's 10 patterns into a bit set, clears them and shares the set; true
// when any pattern is in use.
namespace d_006ab00c {

struct __attribute__((packed)) Local_006ab00c_r0_3 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006ab00c_r0_3, byte_0, 0x0);

inline constexpr guest::Function<0x0020bf0c, u32(u32, u32, u32, u32)> record_2160_address_0020bf0c;
inline constexpr guest::Function<0x0020bf68, u32(u32, u32, u32, u32)> PatternSet10__clear_flags;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002ff8b0, u32(u32)> player_slot_byte;
inline constexpr guest::Function<0x004e4ac4, u32(u32, u32)> RoomGrid__furniture_of_kind;
inline constexpr guest::Function<0x0071287c, u32(u32)> any_pattern_in_use;

u32 Player__share_changed_patterns(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 player_3 = get_current_player(player, r1, r2, r3);
    if (player_3 != 0) {
        u32 r5 = player_3 + 0x2cu;
        player_3 = any_pattern_in_use(r5);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (player_3 != 0) {
            u32 i = 0u;
            u32 r6 = 1u;
            *frame.at<u16>(0) = 0;
            do {
                u32 r0_2 = record_2160_address_0020bf0c(r5, i, r2, r3);
                r1_2 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (*gptr<u8>(r0_2 + 0x86cu) != 0) {
                    r1_2 = frame.at(0).addr();
                    if (i < 0xau) {
                        gptr<Local_006ab00c_r0_3> r0_3 = gptr<Local_006ab00c_r0_3>(r1_2 + (i >> 3));
                        r2 = i & 7u;
                        r1_2 = u32(r0_3->byte_0) | lsl_r(r6, r2 & 0xff);
                        r0_3->byte_0 = u8(r1_2);
                    }
                }
                i += 1u;
                guest::preempt();
            } while (i < 0xau);
            PatternSet10__clear_flags(r5, r1_2, r2, r3);
            u32 slot_byte = player_slot_byte(4u);
            RoomGrid__furniture_of_kind(slot_byte, frame.at(0).addr());
            player_3 = 1u;
        }
    }
    return player_3;
}

}  // namespace d_006ab00c
GUEST_EXPORT_FRAMED(0x006ab00c, d_006ab00c::Player__share_changed_patterns, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_006ac088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the pending work (+0x4c8) with mode 2 and clears it.
namespace d_006ac088 {

struct __attribute__((packed)) FinishPending4c8Arg0 {
    u8 unknown_0[0x4c8];  // (not used here)
    u8 byte_4c8;
};
GUEST_OFFSET(FinishPending4c8Arg0, byte_4c8, 0x4c8);

inline constexpr guest::Function<0x001aae00, u32(u32, u32, u32, u32)> Sound3d__update;

void finish_pending_4c8(gptr<FinishPending4c8Arg0> arg0, u32 r1) {
    if (arg0->byte_4c8 == 0) {
        arg0->byte_4c8 = 0;
        return;
    }
    Sound3d__update(arg0.addr(), 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_4c8 = 0;
}

}  // namespace d_006ac088
GUEST_EXPORT_FRAMED(0x006ac088, d_006ac088::finish_pending_4c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ac35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads a special NPC model's animations (arg 1) and queues its body, face and extra animations as its flags
// ask; 1 once all are queued.
namespace d_006ac35c {

struct __attribute__((packed)) Local_006ac35c_r6_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006ac35c_r6_1, byte_0, 0x0);

inline constexpr guest::Function<0x002052f8, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_002052f8;
inline constexpr guest::Function<0x002132d0, u32(u32, u32)> AnimQueue__next;

u32 MyModel__load_animations(gptr<NpcModel> npc_model, u32 r1) {
    npc_model->word_360 = r1;
    u32 r0_1 = sead__SafeStringBase_char___SafeStringBase_002052f8(npc_model.addr(), r1, guest::cpu()->r[2], 0u);
    if (r0_1 != 0) {
        u32 r5_1 = npc_model->word_4cc;
        gptr<Local_006ac35c_r6_1> r6_1 = gptr<Local_006ac35c_r6_1>(npc_model.addr() + 0x281u);
        if ((u32(npc_model->byte_281) & 1u) != 0) {
            if (AnimQueue__next(r5_1 + 0x1b0u, npc_model.addr() + 0x264u) == 0) {
                return 0u;
            }
        }
        if (*gptr<u32>(r5_1 + 0x1984u) != 0) {
            if ((u32(r6_1->byte_0) >> 2u & 1u) != 0) {
                if (AnimQueue__next(r5_1 + 0x1980u, npc_model.addr() + 0x26cu) == 0) {
                    return 0u;
                }
            }
        }
        u32 r0_6 = r6_1->byte_0;
        if ((r0_6 >> 1u & 1u) != 0) {
            if (AnimQueue__next(r5_1 + 0x7020u, npc_model.addr() + 0x274u) == 0) {
                return 0u;
            }
        }
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_006ac35c
GUEST_EXPORT_FRAMED(0x006ac35c, d_006ac35c::MyModel__load_animations, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ac760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the split load's part (+0x3d4) and the model (+0x384), setting state 3.
namespace d_006ac760 {

struct __attribute__((packed)) ReleaseModelAndSplitArg0 {
    u8 unknown_0[0x390];  // (not used here)
    u32 word_390;
};
GUEST_OFFSET(ReleaseModelAndSplitArg0, word_390, 0x390);

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> destroy_load_split_base_part;
inline constexpr guest::Function<0x004f1270, u32(u32)> model_virtual_3;

void release_model_and_split(gptr<ReleaseModelAndSplitArg0> arg0) {
    destroy_load_split_base_part(arg0.addr() + 0x3d4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    model_virtual_3(arg0.addr() + 0x384u);
    arg0->word_390 = 3;
}

}  // namespace d_006ac760
GUEST_EXPORT_FRAMED(0x006ac760, d_006ac760::release_model_and_split, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ac784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an NPC model: an NPC model base with a skeletal model and its model loader.
namespace d_006ac784 {

struct __attribute__((packed)) Local_006ac784_r0_4 {
    u8 unknown_0[0x281];  // (not used here)
    u8 byte_281;
    u8 unknown_282[0x246];  // (not used here)
    u8 byte_4c8;
    u8 unknown_4c9[0x3];  // (not used here)
    u32 word_4cc;
    u8 byte_4d0;
    u8 byte_4d1;
};
GUEST_OFFSET(Local_006ac784_r0_4, byte_281, 0x281);
GUEST_OFFSET(Local_006ac784_r0_4, byte_4c8, 0x4c8);
GUEST_OFFSET(Local_006ac784_r0_4, word_4cc, 0x4cc);
GUEST_OFFSET(Local_006ac784_r0_4, byte_4d0, 0x4d0);
GUEST_OFFSET(Local_006ac784_r0_4, byte_4d1, 0x4d1);

struct __attribute__((packed)) Local_006ac784_r1_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006ac784_r1_1, byte_0, 0x0);

inline constexpr u32 vtable_NpcModel = 0x008f8c1cu;
inline constexpr u32 vtable_GmoLoader = 0x008f9600u;
inline constexpr guest::Function<0x0012ca7c, u32(u32)> construct_load_split;
inline constexpr guest::Function<0x00206190, u32(u32, u32, u32, u32)> NpcModelBase__NpcModelBase;
inline constexpr guest::Function<0x004edd3c, u32(u32, u32)> construct_skeletal_model;

u32 NpcModel__NpcModel(u32 npc_model, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = NpcModelBase__NpcModelBase(npc_model, r1, r2, r3);
    *gptr<u32>(r0_1) = vtable_NpcModel;
    u32 r0_2 = r0_1 + 0x384u;
    construct_skeletal_model(r0_2, vtable_NpcModel);
    u32 ea_1 = r0_2 + 0xcu;
    *gptr<u32>(ea_1) = 3;
    u32 load_split = ea_1 + 0x44u;
    construct_load_split(load_split);
    *gptr<u32>(load_split) = vtable_GmoLoader;
    gptr<Local_006ac784_r0_4> r0_4 = gptr<Local_006ac784_r0_4>(load_split - 0x3d4u);
    r0_4->byte_4c8 = 0;
    r0_4->word_4cc = 0;
    r0_4->byte_4d0 = 0;
    r0_4->byte_4d1 = 1;
    u32 r3_2 = r0_4->byte_281;
    gptr<Local_006ac784_r1_1> r1_1 = gptr<Local_006ac784_r1_1>(r0_4.addr() + 0x281u);
    u32 r3_3 = r1 == 0 ? r3_2 & ~1u : r3_2 | 1u;
    r1_1->byte_0 = u8(r3_3);
    u32 r3_4 = r3_3 & 0xffu;
    u32 r3_5 = r2 == 0 ? r3_4 & ~4u : r3_4 | 4u;
    u32 r2_2 = r3_5 & 0xffu;
    r1_1->byte_0 = u8(r3_5);
    r1_1->byte_0 = u8(r3 == 0 ? r2_2 & ~2u : r2_2 | 2u);
    guest::cpu()->r[1] = r1_1.addr();
    return r0_4.addr();
}

}  // namespace d_006ac784
GUEST_EXPORT_FRAMED(0x006ac784, d_006ac784::NpcModel__NpcModel, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ac834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys an NPC model: its parts, face animations, resource loaders, part handles and skeletal animation.
namespace d_006ac834 {

inline constexpr u32 vtable_HumanModel = 0x008eb174u;
inline constexpr u32 vtable_NpcModelBase = 0x008ed6acu;
inline constexpr u32 vtable_NpcModel = 0x008f8c1cu;
inline constexpr guest::Function<0x001abcd4, u32(u32, u32)> HumanModel__reset_parts;
inline constexpr guest::Function<0x00317e2c, u32(u32, u32)> g3d__ResourceLoader__destructor;
inline constexpr guest::Function<0x0031e204, u32(u32, u32)> HumanFaceAnimControl__destructor;
inline constexpr guest::Function<0x004edd6c, u32(u32, u32, u32, u32)> NpcModel__destroy;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x004ef50c, u32(u32)> g3d__GroupSkeletalAnim__destructor;

u32 NpcModel__destructor(gptr<HumanModel> human_model) {
    human_model->vtable = vtable_NpcModel;
    u32 r0_1 = human_model.addr() + 0x384u;
    NpcModel__destroy(r0_1, vtable_NpcModel, guest::cpu()->r[2], guest::cpu()->r[3]);
    human_model->vtable = vtable_NpcModelBase;
    HumanFaceAnimControl__destructor(r0_1 - 0xd4u, vtable_NpcModelBase);
    u32 r5_1 = ~0u;
    human_model->word_274 = 0;
    human_model->word_278 = r5_1;
    human_model->word_26c = 0;
    human_model->word_270 = r5_1;
    human_model->word_264 = 0;
    human_model->word_268 = r5_1;
    g3d__ResourceLoader__destructor(r0_1 - 0x228u, r0_1 - 0x120u);
    human_model->word_154 = 0;
    human_model->word_158 = r5_1;
    human_model->word_14c = 0;
    human_model->word_150 = r5_1;
    human_model->word_144 = 0;
    human_model->word_148 = r5_1;
    human_model->vtable = vtable_HumanModel;
    HumanModel__reset_parts(r0_1 - 0x384u, vtable_HumanModel);
    g3d__GroupSkeletalAnim__destructor(r0_1 - 0x2b8u);
    set_base_vtable_004edd84(r0_1 - 0x30cu);
    return r0_1 - 0x384u;
}

}  // namespace d_006ac834
GUEST_EXPORT_FRAMED(0x006ac834, d_006ac834::NpcModel__destructor, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ac8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the bounds to empty (min at the largest float, max at the smallest).
namespace d_006ac8e8 {

struct __attribute__((packed)) Bounds {
    u8 unknown_0[0x14];  // (not used here)
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    u32 word_2c;
};
GUEST_OFFSET(Bounds, float_14, 0x14);
GUEST_OFFSET(Bounds, float_18, 0x18);
GUEST_OFFSET(Bounds, float_1c, 0x1c);
GUEST_OFFSET(Bounds, float_20, 0x20);
GUEST_OFFSET(Bounds, float_24, 0x24);
GUEST_OFFSET(Bounds, float_28, 0x28);
GUEST_OFFSET(Bounds, word_2c, 0x2c);


void Bounds__reset(gptr<Bounds> bounds) {
    float S1_1 = 3.4028235e38f;
    bounds->word_2c = 0;
    float S2_1 = 0.0f;
    bounds->float_14 = S1_1;
    float S0_1 = -3.4028235e38f;
    bounds->float_1c = S1_1;
    bounds->float_18 = S2_1;
    bounds->float_20 = S0_1;
    bounds->float_28 = S0_1;
    bounds->float_24 = S2_1;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006ac8e8
GUEST_EXPORT(0x006ac8e8, d_006ac8e8::Bounds__reset);

// f_006ac950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the query's bounds, takes the target's position for kind 2 and registers the query with the manager
// (0x9502f8) when it is not yet.
namespace d_006ac950 {

struct __attribute__((packed)) BoundsQuery {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(BoundsQuery, word_4, 0x4);
GUEST_OFFSET(BoundsQuery, word_10, 0x10);
GUEST_OFFSET(BoundsQuery, float_14, 0x14);
GUEST_OFFSET(BoundsQuery, float_18, 0x18);
GUEST_OFFSET(BoundsQuery, float_1c, 0x1c);
GUEST_OFFSET(BoundsQuery, float_20, 0x20);
GUEST_OFFSET(BoundsQuery, float_24, 0x24);
GUEST_OFFSET(BoundsQuery, float_28, 0x28);
GUEST_OFFSET(BoundsQuery, word_2c, 0x2c);
GUEST_OFFSET(BoundsQuery, word_30, 0x30);

struct __attribute__((packed)) Local_006ac950_r0_1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Local_006ac950_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_006ac950_r0_1, byte_4, 0x4);

struct __attribute__((packed)) Local_006ac950_r0_2 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_006ac950_r0_2, word_14, 0x14);
GUEST_OFFSET(Local_006ac950_r0_2, word_18, 0x18);
GUEST_OFFSET(Local_006ac950_r0_2, word_1c, 0x1c);

inline constexpr u32 effect_entries_address = 0x009502f8u;
inline constexpr guest::Function<0x006f7e90, u32(u32, u32)> append_to_list;
inline constexpr guest::Function<0x00770c10, u32(u32, u32)> Counter__at_least_100;

u32 BoundsQuery__start(gptr<BoundsQuery> bounds_query, u32 r1, float S0, float S1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006ac950_r0_1> r0_1 = gptr<Local_006ac950_r0_1>(bounds_query->word_4);
    if (r0_1.addr() != 0) {
        r1 = 0u;
        S1 = 3.4028235e38f;
        bounds_query->word_2c = r1;
        bounds_query->word_30 = r1;
        float S2_1 = 0.0f;
        bounds_query->float_14 = S1;
        S0 = -3.4028235e38f;
        bounds_query->float_1c = S1;
        bounds_query->float_18 = S2_1;
        bounds_query->float_20 = S0;
        bounds_query->float_28 = S0;
        bounds_query->float_24 = S2_1;
        if (r0_1->byte_4 == 2u) {
            gptr<Local_006ac950_r0_2> r0_2 = gptr<Local_006ac950_r0_2>(bounds_query->word_10);
            r1 = bounds_query->word_4;
            if (r0_2.addr() != 0) {
                *gptr<u32>(r1 + 8u) = r0_2->word_14;
                *gptr<u32>(r1 + 0xcu) = r0_2->word_18;
                *gptr<u32>(r1 + 0x10u) = r0_2->word_1c;
            }
        }
        r0_1 = gptr<Local_006ac950_r0_1>(effect_entries_address);
        u32 r5_1 = r0_1->word_0;
        if (r5_1 != 0) {
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            r0_1 = gptr<Local_006ac950_r0_1>(Counter__at_least_100(r5_1 + 0x14u, r1));
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_1.addr() == 0) {
                frame.release();
                return append_to_list(r5_1 + 0x14u, bounds_query.addr());
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1.addr();
}

}  // namespace d_006ac950
GUEST_EXPORT(0x006ac950, d_006ac950::BoundsQuery__start);

// f_006aca78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an object collision body: a world body, no shape or owner.
namespace d_006aca78 {

inline constexpr u32 vtable_ObjcBody = 0x008f8c74u;
inline constexpr guest::Function<0x006f7e64, u32(u32)> collision__World__Body__Body_006f7e64;

u32 ObjcBody__ObjcBody(gptr<ObjcBody> objc_body) {
    collision__World__Body__Body_006f7e64(objc_body.addr());
    objc_body->word_10 = 0;
    objc_body->vtable = vtable_ObjcBody;
    objc_body->word_2c = 0;
    objc_body->word_30 = 0;
    objc_body->word_34 = 0;
    objc_body->word_38 = 0;
    objc_body->word_3c = 0;
    guest::cpu()->r[1] = 0u;
    return objc_body.addr();
}

}  // namespace d_006aca78
GUEST_EXPORT_FRAMED(0x006aca78, d_006aca78::ObjcBody__ObjcBody, 0x4010);  // pushes {r4, lr} first, as the original

// f_006acabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Jumps to do_nothing_006f7e8c.
namespace d_006acabc {

inline constexpr guest::Function<0x006f7e8c, u32(u32, u32)> do_nothing_006f7e8c;

u32 ObjcBody__destructor() {
    return do_nothing_006f7e8c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_006acabc
GUEST_EXPORT(0x006acabc, d_006acabc::ObjcBody__destructor);

// f_006acac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Computes the selection from the page (+0xe30) into +0x6359 and hides the pane (+0x6340).
namespace d_006acac0 {

struct __attribute__((packed)) SetSelectionAndHidePaneArg0 {
    u8 unknown_0[0x6340];  // (not used here)
    u32 word_6340;
    u8 unknown_6344[0x15];  // (not used here)
    u8 byte_6359;
};
GUEST_OFFSET(SetSelectionAndHidePaneArg0, word_6340, 0x6340);
GUEST_OFFSET(SetSelectionAndHidePaneArg0, byte_6359, 0x6359);

struct __attribute__((packed)) Local_006acac0_r0_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acac0_r0_3, byte_b7, 0xb7);

inline constexpr guest::Function<0x002fd6bc, u32(u32, u32, u32, u32)> script__WordFix_33u___WordFix_002fd6bc;

void set_selection_and_hide_pane(gptr<SetSelectionAndHidePaneArg0> arg0, u32 r1) {
    u32 r0_2 = script__WordFix_33u___WordFix_002fd6bc(arg0.addr() + 0xe30u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_6359 = u8(r0_2);
    gptr<Local_006acac0_r0_3> r0_3 = gptr<Local_006acac0_r0_3>(arg0->word_6340);
    u32 r1_1 = u32(r0_3->byte_b7) & 0xfeu;
    r0_3->byte_b7 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006acac0
GUEST_EXPORT_FRAMED(0x006acac0, d_006acac0::set_selection_and_hide_pane, 0x4010);  // pushes {r4, lr} first, as the original

// f_006acf28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the two mode panes by the mode (+0x6358) and, in mode 0, hides the 24 entries' panes.
namespace d_006acf28 {

struct __attribute__((packed)) ShopWindow {
    u8 unknown_0[0x6340];  // (not used here)
    u32 word_6340;
    u8 unknown_6344[0x4];  // (not used here)
    u32 word_6348;
    u8 unknown_634c[0xc];  // (not used here)
    u8 byte_6358;
};
GUEST_OFFSET(ShopWindow, word_6340, 0x6340);
GUEST_OFFSET(ShopWindow, word_6348, 0x6348);
GUEST_OFFSET(ShopWindow, byte_6358, 0x6358);

struct __attribute__((packed)) Local_006acf28_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006acf28_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006acf28_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006acf28_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006acf28_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_006acf28_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006acf28_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006acf28_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006acf28_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006acf28_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_006acf28_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acf28_r0_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006acf28_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acf28_r0_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006acf28_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acf28_r1_1, byte_b7, 0xb7);

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

void ShopWindow__update_panes(gptr<ShopWindow> shop_window) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = shop_window.addr();
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006acf28_ea_1> ea_1 = gptr<Local_006acf28_ea_1>(frame.at(0).addr());
    ea_1->word_0 = i;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r5 = r0;
    gptr<Local_006acf28_r0_1> r0_1 = gptr<Local_006acf28_r0_1>(shop_window->word_6340);
    r0_1->byte_b7 = u8((shop_window->byte_6358 == 0 ? 1u : 0u) | u32(r0_1->byte_b7) & 0xfeu);
    gptr<Local_006acf28_r1_1> r1_1 = gptr<Local_006acf28_r1_1>(shop_window->word_6348);
    u32 r3 = u32(r1_1->byte_b7) & 0xfeu;
    r1_1->byte_b7 = u8(u32(shop_window->byte_6358) | r3);
    if (shop_window->byte_6358 == 0) {
        i = 0u;
        do {
            u32 r1_2 = r5 + i * 0x11u * 0x30u;
            gptr<Local_006acf28_r0_2> r0_2 = gptr<Local_006acf28_r0_2>(*gptr<u32>(r1_2 + 0x1808u));
            u32 r2_1 = u32(r0_2->byte_b7) & 0xfeu;
            r0_2->byte_b7 = u8(r2_1);
            Layout__virtual_3(r1_2 + 0x16bcu, r1_2, r2_1, r3);
            r1_1 = gptr<Local_006acf28_r1_1>(guest::cpu()->r[1]);
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (i < 0x18u);
    }
    gptr<Local_006acf28_ea_2> ea_2 = gptr<Local_006acf28_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
}

}  // namespace d_006acf28
GUEST_EXPORT(0x006acf28, d_006acf28::ShopWindow__update_panes);

// f_006acfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the country text box: its flower breeding description in the window.
namespace d_006acfc4 {

struct __attribute__((packed)) BuildCountryTextBoxArg1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(BuildCountryTextBoxArg1, byte_0, 0x0);
GUEST_OFFSET(BuildCountryTextBoxArg1, byte_1, 0x1);

inline constexpr u32 vtable_script__WordFix_64u_ = 0x0090a228u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x001b98e0, u32(u32, u32)> FlowerBreeding__release;
inline constexpr guest::Function<0x001b9964, u32(u32, u32, u32)> FlowerBreeding__describe;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32)> Camera__scale_by_zoom;

struct __attribute__((packed)) BuildCountryTextBoxFrame {
    u32 word_0;
    u8 unknown_4[0x98];  // (not read or written by name)
};
GUEST_OFFSET(BuildCountryTextBoxFrame, word_0, 0x0);
GUEST_SIZE(BuildCountryTextBoxFrame, 0x9c);

void build_country_text_box(u32 r0, gptr<BuildCountryTextBoxArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<BuildCountryTextBoxFrame> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 res_1 = 0;
    u32 r3_5 = 0;
    u32 r5 = r0;
    u32 player = get_current_player(r0, r1, r2, r3);
    u32 r6 = arg1->byte_0;
    u32 r7 = *gptr<u8>(player + 0x55d2u);
    u32 r9 = arg1->byte_1;
    u32 r0_2 = frame.at(0).addr();
    script__construct_word_ptr(r0_2, frame.at(0x18).addr(), 0x40u);
    u32 r8 = vtable_script__WordFix_64u_;
    *gptr<u32>(r0_2) = r8;
    u32 r0_3 = r0_2 + 0xcu;
    construct_script_word(r0_3);
    clear_aligned(r0_3 + 0xcu, 0x80u);
    r2 = 0x8906ecu;
    r0 = (r0_3 - 0xcu) + 0x16u;
    r1 = 0x20u;
    do {
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 r3_4 = *gptr<u16>(r2);
        *gptr<u16>(r0 + 2u) = u16(r3_4);
        r3_5 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    MessageStore__attach_window(*message_store, 0u, r2, r3_5);
    if (r6 == r7) {
        FlowerBreeding__describe(frame.at(0).addr(), r6, r9);
    } else {
        FlowerBreeding__release(frame.at(0).addr(), r6);
    }
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_10 = find_of_type_b(r5 + 0x4bcu, 0x6ad0f8u);
    Camera__scale_by_zoom(r5, r0_10, frame.at(0).addr());
    u32 view = r5 + 0x6418u;
    start_message(view, frame.at(0).addr());
    TextBox__layout_lines(view);
    frame->word_0 = r8;
}

}  // namespace d_006acfc4
GUEST_EXPORT_FRAMED(0x006acfc4, d_006acfc4::build_country_text_box, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006adc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the selected entry (+0x16b8, 0x19 for none): its drag icon, button and flag; then resets the selection
// animation.
namespace d_006adc30 {

struct __attribute__((packed)) ShopWindow {
    u8 unknown_0[0x16b8];  // (not used here)
    u32 word_16b8;
    u8 unknown_16bc[0x4c80];  // (not used here)
    u32 icon;
};
GUEST_OFFSET(ShopWindow, word_16b8, 0x16b8);
GUEST_OFFSET(ShopWindow, icon, 0x633c);

struct __attribute__((packed)) Local_006adc30_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006adc30_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006adc30_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006adc30_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006adc30_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_006adc30_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006adc30_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006adc30_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006adc30_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006adc30_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_006adc30_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006adc30_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006adc30_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_006adc30_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_006adc30_ea_3, word_c, 0xc);

struct __attribute__((packed)) Local_006adc30_r0_5 {
    u8 unknown_0[0x320];  // (not used here)
    u32 word_320;
};
GUEST_OFFSET(Local_006adc30_r0_5, word_320, 0x320);

inline constexpr guest::Function<0x002f6b14, u32(u32)> NodeTree__update_all;
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> ButtonActionControl__virtual_3;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> DragIconList__remove;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> Animation__set_value;

void ShopWindow__clear_selection(gptr<ShopWindow> shop_window, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006adc30_ea_1> ea_1 = gptr<Local_006adc30_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    u32 r5_1 = shop_window.addr() + 0x16b8u;
    if (shop_window->word_16b8 != 0x19u) {
        u32 icon = shop_window->icon;
        u32 list = *gptr<u32>(icon + 0xcu);
        if (list != 0) {
            DragIconList__remove(list, icon, r2, r3);
            icon = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
        }
        u32 r0_2 = shop_window.addr() + shop_window->word_16b8 * 0x11u * 0x30u;
        guest::cpu()->s[0] = S0;
        ButtonActionControl__virtual_3(r0_2 + 0x1908u, icon, r2, r3);
        NodeTree__update_all(r0_2 + 0x1908u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        gptr<Local_006adc30_r0_5> r0_5 = gptr<Local_006adc30_r0_5>(shop_window.addr() + shop_window->word_16b8 * 0x11u * 0x30u + 0x16bcu);
        r1 = r0_5->word_320 & ~8u;
        r0_5->word_320 = r1;
        shop_window->word_16b8 = 0x19;
    }
    if (*gptr<u8>(shop_window.addr() + 0x9c8u) == 1u) {
        u32 r0_6 = shop_window.addr() + 0x9acu;
        float S0_2 = 0.0f;
        guest::cpu()->s[0] = S0_2;
        Animation__set_value(r0_6, r1, r2, r3);
        u32 layout = shop_window.addr() + 0x798u;
        Layout__virtual_3(layout);
        u32 pane = Layout__find_pane(layout, 0x881ae4u, 1u);
        gptr<Local_006adc30_ea_2> ea_2 = gptr<Local_006adc30_ea_2>(frame.at(0).addr());
        u32 r4_1 = ea_2->word_0;
        u32 r5_2 = ea_2->word_4;
        u32 r6_2 = ea_2->word_8;
        r14 = ea_2->word_c;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        frame.release();
        notify_list_objects(pane, r0_6, pane, 0u);
        return;
    }
    gptr<Local_006adc30_ea_3> ea_3 = gptr<Local_006adc30_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_3 = ea_3->word_4;
    u32 r6_3 = ea_3->word_8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_006adc30
GUEST_EXPORT(0x006adc30, d_006adc30::ShopWindow__clear_selection);

// f_006add20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the player name text box: the player's name in the window, scaled to the camera.
namespace d_006add20 {

inline constexpr u32 vtable_script__WordFix_40u_ = 0x0090a030u;
inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32)> Object__virtual_34;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x0056d374, u32(u32, u32, u32, u32)> TextBox__set_player_name;
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32)> TextBox__set_word_9;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32)> Camera__scale_by_zoom;

struct __attribute__((packed)) BuildPlayerNameTextBoxFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x64];  // (not read or written by name)
    u32 word_70;
    u8 unknown_74[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(BuildPlayerNameTextBoxFrame, word_0, 0x0);
GUEST_OFFSET(BuildPlayerNameTextBoxFrame, word_8, 0x8);
GUEST_OFFSET(BuildPlayerNameTextBoxFrame, word_70, 0x70);
GUEST_SIZE(BuildPlayerNameTextBoxFrame, 0xa0);

void build_player_name_text_box(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BuildPlayerNameTextBoxFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r2_4 = 0;
    u32 res_2 = 0;
    u32 r2_9 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r7 = r2;
    u32 r0_1 = frame.at(0x70).addr();
    u32 r10 = 4u;
    script__construct_word_ptr(r0_1, frame.at(0x88).addr(), 9u, r3);
    u32 r8 = vtable_script__WordFix_9u__rec;
    *gptr<u32>(r0_1) = r8;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    u32 r4 = r0_2 - 0xcu;
    clear_aligned(r0_2 + 0xcu, 0x12u);
    r3 = guest::cpu()->r[3];
    u32 r9 = 0x8906ecu;
    r0 = r4 + 0x18u;
    *gptr<u16>(r4 + 0x18u) = *gptr<u16>(r9);
    r1 = 4u;
    do {
        u32 r2_3 = *gptr<u16>(r9);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r2_3);
        r2_4 = *gptr<u16>(r9);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    TextBox__set_player_name(r4, r10, r2_4, r3);
    TextBox__set_word_9(frame.at(0x70).addr(), r6 + 2u, u32(*gptr<u8>(r6 + 0x14u)) & 1u);
    r6 = r7 == 0 ? 0x162u : 0x161u;
    u32 r0_5 = frame.at(8).addr();
    script__construct_word_ptr(r0_5, frame.at(0x20).addr(), 0x28u, guest::cpu()->r[3]);
    r7 = vtable_script__WordFix_40u_;
    *gptr<u32>(r0_5) = r7;
    u32 r0_6 = r0_5 + 0xcu;
    construct_script_word(r0_6);
    clear_aligned(r0_6 + 0xcu, 0x50u);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r0 = ((r0_6 - 0xcu) + 0x18u) - 2u;
    r1 = 0x14u;
    do {
        u32 r2_8 = *gptr<u16>(r9);
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u16>(r0 + 2u) = u16(r2_8);
        r2_9 = *gptr<u16>(r9);
        u32 ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_9);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    MessageStore__attach_window(*message_store, 0u, r2_9, r3);
    Object__virtual_34(*gptr<u32>(*message_store + 0x14u), frame.at(0x70).addr(), 0u);
    frame->word_0 = r4;
    load_message(*message_store, frame.at(8).addr(), 0x6adeecu, r6);
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_14 = find_of_type_b(r5 + 0x4bcu, 0x6adef8u);
    Camera__scale_by_zoom(r5, r0_14, frame.at(8).addr());
    u32 view = r5 + 0x64dcu;
    start_message(view, frame.at(8).addr());
    TextBox__layout_lines(view);
    frame->word_8 = r7;
    frame->word_70 = r8;
}

}  // namespace d_006add20
GUEST_EXPORT_FRAMED(0x006add20, d_006add20::build_player_name_text_box, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006ae344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a UI text box: a UI message in the window.
namespace d_006ae344 {

inline constexpr u32 vtable_script__WordFix_25u_ = 0x00909e00u;
inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056e04c, u32(u32, u32, u32, u32)> script__WordCPtrSv__WordCPtrSv_0056e04c;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32)> call_virtual_24_5f12f4;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) BuildUiTextBoxBFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x48];  // (not read or written by name)
    u32 word_50;
    u8 unknown_54[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(BuildUiTextBoxBFrame, word_0, 0x0);
GUEST_OFFSET(BuildUiTextBoxBFrame, word_4, 0x4);
GUEST_OFFSET(BuildUiTextBoxBFrame, word_50, 0x50);
GUEST_SIZE(BuildUiTextBoxBFrame, 0x80);

void build_ui_text_box_b(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<BuildUiTextBoxBFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r2_4 = 0;
    u32 res_2 = 0;
    u32 r2_8 = 0;
    u32 r7 = r0;
    u32 r5 = r1;
    u32 r0_1 = frame.at(0x50).addr();
    script__construct_word_ptr(r0_1, frame.at(0x68).addr(), 9u, r3);
    u32 r6 = vtable_script__WordFix_9u__rec;
    *gptr<u32>(r0_1) = r6;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    u32 r4_1 = r0_2 - 0xcu;
    clear_aligned(r0_2 + 0xcu, 0x12u);
    r3 = guest::cpu()->r[3];
    u32 r8 = 0x8906ecu;
    r0 = r4_1 + 0x18u;
    *gptr<u16>(r4_1 + 0x18u) = *gptr<u16>(r8);
    r1 = 4u;
    do {
        u32 r2_3 = *gptr<u16>(r8);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r2_3);
        r2_4 = *gptr<u16>(r8);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    script__WordCPtrSv__WordCPtrSv_0056e04c(frame.at(0x50).addr(), r5 + 0x16u, r2_4, r3);
    u32 r0_5 = frame.at(4).addr();
    script__construct_word_ptr(r0_5, frame.at(0x1c).addr(), 0x19u, guest::cpu()->r[3]);
    r5 = vtable_script__WordFix_25u_;
    *gptr<u32>(r0_5) = r5;
    u32 r0_6 = r0_5 + 0xcu;
    construct_script_word(r0_6);
    u32 r4_2 = r0_6 - 0xcu;
    clear_aligned(r0_6 + 0xcu, 0x32u);
    r3 = guest::cpu()->r[3];
    r0 = r4_2 + 0x18u;
    *gptr<u16>(r4_2 + 0x18u) = *gptr<u16>(r8);
    r1 = 0xcu;
    do {
        u32 r2_7 = *gptr<u16>(r8);
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u16>(r0 + 2u) = u16(r2_7);
        r2_8 = *gptr<u16>(r8);
        u32 ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_8);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    MessageStore__attach_window(*message_store, 0u, r2_8, r3);
    call_virtual_24_5f12f4(*gptr<u32>(*message_store + 0x14u), frame.at(0x50).addr(), 0u);
    frame->word_0 = 0;
    load_message(*message_store, frame.at(4).addr(), 0x6ae4c8u, 0x15fu);
    LinkOwner__unlink(*message_store, 0u);
    u32 view = r7 + 0x65a0u;
    start_message(view, frame.at(4).addr());
    TextBox__layout_lines(view);
    frame->word_4 = r5;
    frame->word_50 = r6;
}

}  // namespace d_006ae344
GUEST_EXPORT_FRAMED(0x006ae344, d_006ae344::build_ui_text_box_b, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ae6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the registration date text box.
namespace d_006ae6a0 {

inline constexpr u32 vtable_script__WordFix_40u_ = 0x0090a030u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32)> forward_to_held_object_slot_21;
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> forward_to_held_object_slot_22;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32)> call_target_with_two_0x50_;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32)> Camera__scale_by_zoom;

struct __attribute__((packed)) BuildRegistrationTextBoxFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x64];  // (not read or written by name)
};
GUEST_OFFSET(BuildRegistrationTextBoxFrame, word_0, 0x0);
GUEST_OFFSET(BuildRegistrationTextBoxFrame, word_8, 0x8);
GUEST_SIZE(BuildRegistrationTextBoxFrame, 0x70);

void build_registration_text_box(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<BuildRegistrationTextBoxFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r6 = r0;
    u32 r4 = r1;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0x28u, r3);
    u32 r7 = vtable_script__WordFix_40u_;
    *gptr<u32>(r0_1) = r7;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    clear_aligned(r0_2 + 0xcu, 0x50u);
    u32 r2 = 0x8906ecu;
    u32 r5 = 0u;
    r0 = (r0_2 + 0xcu) - 2u;
    r1 = 0x14u;
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    MessageStore__attach_window(*message_store, 0u, r2, r3_4);
    call_target_with_two_0x50_(*gptr<u32>(*message_store + 0x14u), uxth(r4), 0u);
    forward_to_held_object_slot_21(*gptr<u32>(*message_store + 0x14u), r4 >> 0x10u & 0xffu, 0u);
    forward_to_held_object_slot_22(*gptr<u32>(*message_store + 0x14u), r4 >> 0x18, 0u);
    frame->word_0 = r5;
    load_message(*message_store, frame.at(8).addr(), 0x6ae7f8u, 0x165u);
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_12 = find_of_type_b(r6 + 0x4bcu, 0x6ae804u);
    Camera__scale_by_zoom(r6, r0_12, frame.at(8).addr());
    u32 view = r6 + 0x68b0u;
    start_message(view, frame.at(8).addr());
    TextBox__layout_lines(view);
    frame->word_8 = r7;
}

}  // namespace d_006ae6a0
GUEST_EXPORT_FRAMED(0x006ae6a0, d_006ae6a0::build_registration_text_box, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ae870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the birthday text box.
namespace d_006ae870 {

inline constexpr u32 vtable_script__WordFix_40u_ = 0x0090a030u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32)> forward_to_held_object_slot_21;
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> forward_to_held_object_slot_22;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32)> Camera__scale_by_zoom;

struct __attribute__((packed)) BuildBirthdayTextBoxFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x64];  // (not read or written by name)
};
GUEST_OFFSET(BuildBirthdayTextBoxFrame, word_0, 0x0);
GUEST_OFFSET(BuildBirthdayTextBoxFrame, word_8, 0x8);
GUEST_SIZE(BuildBirthdayTextBoxFrame, 0x70);

void build_birthday_text_box(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<BuildBirthdayTextBoxFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0x28u, r3);
    u32 r7 = vtable_script__WordFix_40u_;
    *gptr<u32>(r0_1) = r7;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    clear_aligned(r0_2 + 0xcu, 0x50u);
    u32 r2 = 0x8906ecu;
    u32 r4 = 0u;
    r0 = (r0_2 + 0xcu) - 2u;
    r1 = 0x14u;
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    MessageStore__attach_window(*message_store, 0u, r2, r3_4);
    u32 r0_6 = *gptr<u32>(*message_store + 0x14u);
    u32 r1_3 = *gptr<u8>(r6);
    forward_to_held_object_slot_21(r0_6, r1_3, 1u);
    u32 r0_7 = *gptr<u32>(*message_store + 0x14u);
    u32 r1_4 = *gptr<u8>(r6 + 1u);
    forward_to_held_object_slot_22(r0_7, r1_4, 1u);
    frame->word_0 = r4;
    load_message(*message_store, frame.at(8).addr(), 0x6ae9acu, 0x163u);
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_11 = find_of_type_b(r5 + 0x4bcu, 0x6ae9b8u);
    Camera__scale_by_zoom(r5, r0_11, frame.at(8).addr());
    u32 view = r5 + 0x6664u;
    start_message(view, frame.at(8).addr());
    TextBox__layout_lines(view);
    frame->word_8 = r7;
}

}  // namespace d_006ae870
GUEST_EXPORT_FRAMED(0x006ae870, d_006ae870::build_birthday_text_box, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ae9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the window's close button: its control, pane, animation targets and sounds.
namespace d_006ae9c4 {

struct __attribute__((packed)) ShopWindow {
    u8 unknown_0[0x15c0];  // (not used here)
    u32 word_15c0;
    u8 unknown_15c4[0x7];  // (not used here)
    u8 byte_15cb;
    u8 byte_15cc;
    u8 unknown_15cd[0xd7];  // (not used here)
    u32 word_16a4;
};
GUEST_OFFSET(ShopWindow, word_15c0, 0x15c0);
GUEST_OFFSET(ShopWindow, byte_15cb, 0x15cb);
GUEST_OFFSET(ShopWindow, byte_15cc, 0x15cc);
GUEST_OFFSET(ShopWindow, word_16a4, 0x16a4);

struct __attribute__((packed)) Local_006ae9c4_ea_8 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006ae9c4_ea_8, float_0, 0x0);
GUEST_OFFSET(Local_006ae9c4_ea_8, float_4, 0x4);

struct __attribute__((packed)) Local_006ae9c4_r3_2 {
    u32 word_0;
    u32 layout;
};
GUEST_OFFSET(Local_006ae9c4_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_006ae9c4_r3_2, layout, 0x4);

struct __attribute__((packed)) Local_006ae9c4_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006ae9c4_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_006ae9c4_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_006ae9c4_r9_1, word_8, 0x8);
GUEST_OFFSET(Local_006ae9c4_r9_1, word_c, 0xc);
GUEST_OFFSET(Local_006ae9c4_r9_1, word_10, 0x10);
GUEST_OFFSET(Local_006ae9c4_r9_1, word_14, 0x14);

inline guest::global<u32, 0x008817b0> global_008817b0;
inline guest::global<u32, 0x008817b4> global_008817b4;
inline guest::global<u32, 0x008819cc> global_008819cc;
inline guest::global<u32, 0x008819d0> global_008819d0;
inline guest::global<u32, 0x008819d4> global_008819d4;
inline guest::global<u32, 0x008819d8> global_008819d8;
inline guest::global<u32, 0x008819dc> global_008819dc;
inline guest::global<u32, 0x008819e0> global_008819e0;
inline guest::global<u32, 0x008819e4> global_008819e4;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> Model__set_flag_10;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> copy_four_animation_targets;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

struct __attribute__((packed)) ShopWindowSetupCloseButtonFrame {
    u32 child;
    u32 pane;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x20];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ShopWindowSetupCloseButtonFrame, child, 0x0);
GUEST_OFFSET(ShopWindowSetupCloseButtonFrame, pane, 0x4);
GUEST_OFFSET(ShopWindowSetupCloseButtonFrame, word_8, 0x8);
GUEST_OFFSET(ShopWindowSetupCloseButtonFrame, word_c, 0xc);
GUEST_OFFSET(ShopWindowSetupCloseButtonFrame, word_10, 0x10);
GUEST_OFFSET(ShopWindowSetupCloseButtonFrame, word_14, 0x14);
GUEST_OFFSET(ShopWindowSetupCloseButtonFrame, word_18, 0x18);
GUEST_OFFSET(ShopWindowSetupCloseButtonFrame, word_3c, 0x3c);
GUEST_SIZE(ShopWindowSetupCloseButtonFrame, 0x44);

void ShopWindow__setup_close_button(gptr<ShopWindow> shop_window, float S0, float S1) {
    guest::StackFrameOf<ShopWindowSetupCloseButtonFrame> frame;  // the original's stack frame
    gptr<Local_006ae9c4_r9_1> r9_1 = gptr<Local_006ae9c4_r9_1>(frame.at(0x24).addr());
    u32 layout = shop_window.addr() + 0x798u;
    u32 r2_1 = *global_008819d0;
    u32 r3_1 = *global_008819d4;
    u32 r5_1 = *global_008819d8;
    u32 r8_1 = *global_008819dc;
    u32 r12_1 = *global_008819e0;
    r9_1->word_0 = *global_008819cc;
    r9_1->word_4 = r2_1;
    r9_1->word_8 = r3_1;
    r9_1->word_c = r5_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    gptr<Local_006ae9c4_r3_2> r3_2 = gptr<Local_006ae9c4_r3_2>(frame.at(0x1c).addr());
    frame->word_3c = *global_008819e4;
    r3_2->word_0 = shop_window.addr() + 0x2cu;
    r3_2->layout = layout;
    ButtonActionControl__setup(shop_window.addr() + 0x15d0u, frame.at(0x1c).addr(), 0u, r3_2.addr());
    float S0_1 = 0.0f;
    shop_window->word_16a4 = shop_window->word_16a4 | 0x40u;
    frame->child = 0;
    frame->pane = 0;
    float S1_1 = -60.0f;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    gptr<Local_006ae9c4_ea_8> ea_8 = gptr<Local_006ae9c4_ea_8>(frame.at(8).addr());
    ea_8->float_0 = S0_1;
    ea_8->float_4 = S1_1;
    u32 r1_3 = *global_008817b0;
    u32 r6_1 = *global_008817b4;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 child = LayoutObjectWithChild__forward_to_child(layout, r1_3);
    frame->child = child;
    u32 pane = Layout__find_pane(layout, r6_1, 1u);
    u32 r6_2 = shop_window.addr() + 0x14f0u;
    frame->pane = pane;
    frame->word_10 = 0;
    frame->word_14 = 0;
    set_node_values(r6_2, frame.at(0).addr());
    copy_four_animation_targets(shop_window.addr() + 0x15d0u, r6_2, 1u);
    Model__set_flag_10(shop_window.addr() + 0x15d0u, 0u);
    shop_window->word_16a4 = shop_window->word_16a4 | 8u;
    *gptr<u32>(shop_window.addr() + 0x15bcu) = 0x100041f;
    *gptr<u8>(shop_window.addr() + 0x15cau) = 1;
    shop_window->word_15c0 = 0x1000398;
    shop_window->byte_15cb = 1;
    shop_window->byte_15cc = 1;
    *gptr<u16>(shop_window.addr() + 0x16a0u) = 3;
    guest::cpu()->r[1] = 0x16a0u;
}

}  // namespace d_006ae9c4
GUEST_EXPORT_FRAMED(0x006ae9c4, d_006ae9c4::ShopWindow__setup_close_button, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006aee8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the dream text box: its title and the dream address.
namespace d_006aee8c {

struct __attribute__((packed)) Local_006aee8c_r0_3 {
    u8 unknown_0[0x18];  // (not used here)
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
    u32 word_48;
    u32 word_4c;
    u32 word_50;
};
GUEST_OFFSET(Local_006aee8c_r0_3, word_18, 0x18);
GUEST_OFFSET(Local_006aee8c_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_006aee8c_r0_3, word_20, 0x20);
GUEST_OFFSET(Local_006aee8c_r0_3, word_24, 0x24);
GUEST_OFFSET(Local_006aee8c_r0_3, word_28, 0x28);
GUEST_OFFSET(Local_006aee8c_r0_3, word_2c, 0x2c);
GUEST_OFFSET(Local_006aee8c_r0_3, word_30, 0x30);
GUEST_OFFSET(Local_006aee8c_r0_3, word_34, 0x34);
GUEST_OFFSET(Local_006aee8c_r0_3, word_38, 0x38);
GUEST_OFFSET(Local_006aee8c_r0_3, word_3c, 0x3c);
GUEST_OFFSET(Local_006aee8c_r0_3, word_40, 0x40);
GUEST_OFFSET(Local_006aee8c_r0_3, word_44, 0x44);
GUEST_OFFSET(Local_006aee8c_r0_3, word_48, 0x48);
GUEST_OFFSET(Local_006aee8c_r0_3, word_4c, 0x4c);
GUEST_OFFSET(Local_006aee8c_r0_3, word_50, 0x50);

inline constexpr u32 vtable_script__WordFix_30u_ = 0x00909ea8u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32)> Camera__scale_by_zoom;

struct __attribute__((packed)) BuildDreamTextBoxFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x54];  // (not read or written by name)
};
GUEST_OFFSET(BuildDreamTextBoxFrame, word_0, 0x0);
GUEST_OFFSET(BuildDreamTextBoxFrame, word_4, 0x4);
GUEST_SIZE(BuildDreamTextBoxFrame, 0x5c);

void build_dream_text_box(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<BuildDreamTextBoxFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 r4 = r0;
    u32 r0_1 = frame.at(4).addr();
    script__construct_word_ptr(r0_1, frame.at(0x1c).addr(), 0x1eu, r3);
    u32 r5 = vtable_script__WordFix_30u_;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    gptr<Local_006aee8c_r0_3> r0_3 = gptr<Local_006aee8c_r0_3>(r0_2 - 0xcu);
    u32 r6 = 0u;
    r0_3->word_18 = r6;
    r0_3->word_1c = r6;
    r0_3->word_20 = r6;
    r0_3->word_24 = r6;
    r0_3->word_28 = r6;
    r0_3->word_2c = r6;
    r0_3->word_30 = r6;
    r0_3->word_34 = r6;
    r0_3->word_38 = r6;
    r0_3->word_3c = r6;
    r0_3->word_40 = r6;
    r0_3->word_44 = r6;
    r0_3->word_48 = r6;
    u32 r2 = 0x8906ecu;
    r0_3->word_4c = r6;
    r0_3->word_50 = r6;
    u32 r1 = 0xfu;
    r0 = r0_3.addr() + 0x16u;
    do {
        u32 r3_2 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_2);
        r3_3 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_3);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    MessageStore__attach_window(*message_store, 0u, r2, r3_3);
    frame->word_0 = r6;
    load_message(*message_store, frame.at(4).addr(), 0x881a44u, 0x167u);
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_7 = r4 + 0x4bcu;
    u32 r0_8 = find_of_type_b(r0_7, 0x881a68u);
    Camera__scale_by_zoom(r4, r0_8, frame.at(4).addr());
    u32 r0_9 = find_of_type_b(r0_7, 0x881a5cu);
    Camera__scale_by_zoom(r4, r0_9, frame.at(4).addr());
    u32 view = r4 + 0x6974u;
    start_message(view, frame.at(4).addr());
    TextBox__layout_lines(view, guest::cpu()->r[1]);
    u32 r0_11 = r4 + 0x6a38u;
    u32 source = frame.at(4).addr();
    start_message(r0_11, source);
    TextBox__layout_lines(r0_11, source);
    frame->word_4 = r5;
}

}  // namespace d_006aee8c
GUEST_EXPORT_FRAMED(0x006aee8c, d_006aee8c::build_dream_text_box, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006af218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the second window's close button: its control, pane, animation targets and sounds.
namespace d_006af218 {

struct __attribute__((packed)) ShopWindow2 {
    u8 unknown_0[0x13fc];  // (not used here)
    u32 word_13fc;
    u8 unknown_1400[0x7];  // (not used here)
    u8 byte_1407;
    u8 byte_1408;
    u8 unknown_1409[0xd7];  // (not used here)
    u32 word_14e0;
};
GUEST_OFFSET(ShopWindow2, word_13fc, 0x13fc);
GUEST_OFFSET(ShopWindow2, byte_1407, 0x1407);
GUEST_OFFSET(ShopWindow2, byte_1408, 0x1408);
GUEST_OFFSET(ShopWindow2, word_14e0, 0x14e0);

struct __attribute__((packed)) Local_006af218_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006af218_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_006af218_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_006af218_r3_2 {
    u32 word_0;
    u32 layout;
};
GUEST_OFFSET(Local_006af218_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_006af218_r3_2, layout, 0x4);

struct __attribute__((packed)) Local_006af218_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006af218_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_006af218_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_006af218_r9_1, word_8, 0x8);
GUEST_OFFSET(Local_006af218_r9_1, word_c, 0xc);
GUEST_OFFSET(Local_006af218_r9_1, word_10, 0x10);
GUEST_OFFSET(Local_006af218_r9_1, word_14, 0x14);

inline guest::global<u32, 0x008817a8> global_008817a8;
inline guest::global<u32, 0x008817ac> global_008817ac;
inline guest::global<u32, 0x008819a8> global_008819a8;
inline guest::global<u32, 0x008819ac> global_008819ac;
inline guest::global<u32, 0x008819b0> global_008819b0;
inline guest::global<u32, 0x008819b4> global_008819b4;
inline guest::global<u32, 0x008819b8> global_008819b8;
inline guest::global<u32, 0x008819bc> global_008819bc;
inline guest::global<u32, 0x008819c0> global_008819c0;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> Model__set_flag_10;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> copy_four_animation_targets;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

struct __attribute__((packed)) ShopWindow2SetupCloseButtonFrame {
    u32 child;
    u32 pane;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x20];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ShopWindow2SetupCloseButtonFrame, child, 0x0);
GUEST_OFFSET(ShopWindow2SetupCloseButtonFrame, pane, 0x4);
GUEST_OFFSET(ShopWindow2SetupCloseButtonFrame, word_8, 0x8);
GUEST_OFFSET(ShopWindow2SetupCloseButtonFrame, word_c, 0xc);
GUEST_OFFSET(ShopWindow2SetupCloseButtonFrame, word_10, 0x10);
GUEST_OFFSET(ShopWindow2SetupCloseButtonFrame, word_14, 0x14);
GUEST_OFFSET(ShopWindow2SetupCloseButtonFrame, word_18, 0x18);
GUEST_OFFSET(ShopWindow2SetupCloseButtonFrame, word_3c, 0x3c);
GUEST_SIZE(ShopWindow2SetupCloseButtonFrame, 0x44);

void ShopWindow2__setup_close_button(gptr<ShopWindow2> shop_window2, float S0, float S1) {
    guest::StackFrameOf<ShopWindow2SetupCloseButtonFrame> frame;  // the original's stack frame
    gptr<Local_006af218_r9_1> r9_1 = gptr<Local_006af218_r9_1>(frame.at(0x24).addr());
    u32 layout = shop_window2.addr() + 0x4bcu;
    u32 r2_1 = *global_008819ac;
    u32 r3_1 = *global_008819b0;
    u32 r5_1 = *global_008819b4;
    u32 r8_1 = *global_008819b8;
    u32 r12_1 = *global_008819bc;
    r9_1->word_0 = *global_008819a8;
    r9_1->word_4 = r2_1;
    r9_1->word_8 = r3_1;
    r9_1->word_c = r5_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    gptr<Local_006af218_r3_2> r3_2 = gptr<Local_006af218_r3_2>(frame.at(0x1c).addr());
    frame->word_3c = *global_008819c0;
    u32 model = shop_window2.addr() + 0x140cu;
    r3_2->word_0 = shop_window2.addr() + 0x2cu;
    r3_2->layout = layout;
    ButtonActionControl__setup(model, frame.at(0x1c).addr(), 0u, r3_2.addr());
    float S0_1 = 0.0f;
    shop_window2->word_14e0 = shop_window2->word_14e0 | 0x40u;
    frame->child = 0;
    frame->pane = 0;
    float S1_1 = -60.0f;
    gptr<Local_006af218_r0_2> r0_2 = gptr<Local_006af218_r0_2>(frame.at(8).addr());
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    r0_2->float_0 = S0_1;
    r0_2->float_4 = S1_1;
    u32 r1_3 = *global_008817a8;
    u32 r6_1 = *global_008817ac;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 child = LayoutObjectWithChild__forward_to_child(layout, r1_3);
    frame->child = child;
    u32 pane = Layout__find_pane(layout, r6_1, 1u);
    u32 r6_2 = shop_window2.addr() + 0x132cu;
    frame->pane = pane;
    frame->word_10 = 0;
    frame->word_14 = 0;
    set_node_values(r6_2, frame.at(0).addr());
    copy_four_animation_targets(model, r6_2, 1u);
    *gptr<u32>(shop_window2.addr() + 0x13f8u) = 0x100041d;
    *gptr<u8>(shop_window2.addr() + 0x1406u) = 1;
    shop_window2->word_13fc = 0x1000398;
    shop_window2->byte_1407 = 1;
    shop_window2->byte_1408 = 1;
    Model__set_flag_10(model, 0u);
    shop_window2->word_14e0 = shop_window2->word_14e0 | 8u;
    *gptr<u16>(shop_window2.addr() + 0x14dcu) = 3;
    guest::cpu()->r[1] = 0x14dcu;
}

}  // namespace d_006af218
GUEST_EXPORT_FRAMED(0x006af218, d_006af218::ShopWindow2__setup_close_button, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006af568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the dream number text box: the dream address digits, when set.
namespace d_006af568 {

struct __attribute__((packed)) Child {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Child, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006af568_r0_4 {
    u8 unknown_0[0x18];  // (not used here)
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
};
GUEST_OFFSET(Local_006af568_r0_4, word_18, 0x18);
GUEST_OFFSET(Local_006af568_r0_4, word_1c, 0x1c);
GUEST_OFFSET(Local_006af568_r0_4, word_20, 0x20);
GUEST_OFFSET(Local_006af568_r0_4, word_24, 0x24);
GUEST_OFFSET(Local_006af568_r0_4, word_28, 0x28);
GUEST_OFFSET(Local_006af568_r0_4, word_2c, 0x2c);
GUEST_OFFSET(Local_006af568_r0_4, word_30, 0x30);
GUEST_OFFSET(Local_006af568_r0_4, word_34, 0x34);
GUEST_OFFSET(Local_006af568_r0_4, word_38, 0x38);
GUEST_OFFSET(Local_006af568_r0_4, word_3c, 0x3c);

inline constexpr u32 vtable_script__WordFix_20u_ = 0x00909ce8u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569508, u32(u32)> apply_value;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f12c4, u32(u32, u32, u32, u32)> call_target_with_none_0xa4_;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x00770300, u32(u32)> pack_id_with_byte_9;
inline constexpr guest::Function<0x0077033c, u32(u32, u32, u32, u32)> OptionalWord64__is_present_and_nonzero;

struct __attribute__((packed)) BuildDreamNumberTextBoxFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x3c];  // (not read or written by name)
};
GUEST_OFFSET(BuildDreamNumberTextBoxFrame, word_0, 0x0);
GUEST_OFFSET(BuildDreamNumberTextBoxFrame, word_8, 0x8);
GUEST_SIZE(BuildDreamNumberTextBoxFrame, 0x48);

void build_dream_number_text_box(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BuildDreamNumberTextBoxFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r4 = r0;
    u32 r5 = r2;
    u32 r6 = r1;
    u32 r0_1 = OptionalWord64__is_present_and_nonzero(r1, r1, r2, r3);
    u32 r10 = 0u;
    u32 layout = r4 + 0x4bcu;
    if (r0_1 != 0) {
        u32 r0_2 = frame.at(8).addr();
        script__construct_word_ptr(r0_2, frame.at(0x20).addr(), 0x14u);
        u32 r7 = vtable_script__WordFix_20u_;
        *gptr<u32>(r0_2) = r7;
        u32 r0_3 = r0_2 + 0xcu;
        construct_script_word(r0_3);
        gptr<Local_006af568_r0_4> r0_4 = gptr<Local_006af568_r0_4>(r0_3 - 0xcu);
        r2 = 0x8906ecu;
        r0_4->word_18 = r10;
        r0_4->word_1c = r10;
        r0_4->word_20 = r10;
        r0_4->word_24 = r10;
        r0_4->word_28 = r10;
        r0_4->word_2c = r10;
        r0_4->word_30 = r10;
        r0_4->word_34 = r10;
        r0_4->word_38 = r10;
        r0_4->word_3c = r10;
        r1 = 0xau;
        r0 = r0_4.addr() + 0x16u;
        do {
            u32 r3_3 = *gptr<u16>(r2);
            res_1 = r1 - 1u;
            r1 = res_1;
            *gptr<u16>(r0 + 2u) = u16(r3_3);
            r3_4 = *gptr<u16>(r2);
            u32 ea_2 = r0 + 4u;
            *gptr<u16>(ea_2) = u16(r3_4);
            r0 = ea_2;
            guest::preempt();
        } while (res_1 != 0);
        MessageStore__attach_window(*message_store, 0u, r2, r3_4);
        if (r5 != 0) {
            u32 r0_6 = pack_id_with_byte_9(r6);
            u32 r1_4 = guest::cpu()->r[1];
            call_target_with_none_0xa4_(*gptr<u32>(*message_store + 0x14u), r1_4, r0_6, r1_4);
            frame->word_0 = r10;
            load_message(*message_store, frame.at(8).addr(), 0x6af76cu, 0x168u);
            u32 pane = Layout__find_pane(layout, 0x6af778u, 1u);
            notify_objects_of_list(layout, r4 + 0x720u, pane, 0u);
            apply_value(r4 + 0x720u);
            Layout__virtual_3(layout);
            notify_list_objects(layout, r4 + 0x720u, pane, 0u);
        } else {
            frame->word_0 = r10;
            load_message(*message_store, frame.at(8).addr(), 0x6af76cu, 0x169u);
        }
        LinkOwner__unlink(*message_store, 0u);
        u32 view = r4 + 0x6728u;
        start_message(view, frame.at(8).addr());
        TextBox__layout_lines(view, guest::cpu()->r[1]);
        u32 r0_14 = r4 + 0x67ecu;
        u32 source = frame.at(8).addr();
        start_message(r0_14, source);
        TextBox__layout_lines(r0_14, source);
        frame->word_8 = r7;
        return;
    }
    gptr<Child> child = gptr<Child>(LayoutObjectWithChild__forward_to_child(layout, 0x6af788u));
    child->byte_b7 = u8(u32(child->byte_b7) & 0xfeu);
}

}  // namespace d_006af568
GUEST_EXPORT_FRAMED(0x006af568, d_006af568::build_dream_number_text_box, 0x47f0);  // pushes {r4, r5, r6, r7, layout, r9, r10, lr} first, as the original

// f_006afbcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Detaches the layout at +0x4bc from the layout system.
namespace d_006afbcc {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

void detach_layout_4bc(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(r0);
    frame.release();
    LayoutRenderer__draw_on_screen(r0_1, r0 + 0x4bcu, 0u);
    return;
}

}  // namespace d_006afbcc
GUEST_EXPORT(0x006afbcc, d_006afbcc::detach_layout_4bc);
