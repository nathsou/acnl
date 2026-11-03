// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "item/item.hpp"
#include "player/slot_object.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_0076054c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In a local game with no main-object value: whether the villager's record of the current player (when the player has
// flag 2 of +0x5705) has bit 7 of +0xbc; a non-negative `mode` also needs the talk byte to be 0 or 1.
namespace d_0076054c {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x00309eb9, u32(u32, u32)> SaveVillager__find_player_record_00309eb8;
inline constexpr guest::Function<0x00318944, u32(u32, u32)> byte_08_unless_mode_above_1;
inline constexpr guest::Function<0x005c2c80, u32(u32, u32)> main_slot_value_is_local;

u32 AcNpcNml__remembers_current_player(gptr<AcNpcNml> ac_npc_nml, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_1 = current_net_signed_value(ac_npc_nml.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r0_2 = main_slot_value_is_local(r0_1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            return r0_2;
        }
        u32 r4_1 = ac_npc_nml->word_1028;
        u32 r0_3 = ac_npc_nml->word_102c;
        u32 zf_1 = r0_3 == 0;
        if (zf_1) {
            r1_1 = 0u;
        } else {
            r1_1 = r0_3 + 0x38u;  // (from the original)
            zf_1 = r4_1 == 0;
        }
        if (!zf_1) {
            zf_1 = r1_1 == 0;
        }
        if (!zf_1) {
            if (s32(r1) >= 0) {
                u32 r0_5 = byte_08_unless_mode_above_1(r0_3 + 0x28u, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (r0_5 != 0 && r0_5 != 1u) {
                    return 0u;
                }
            }
            r0_2 = *current_player_data;
            if (r0_2 == 0) {
                guest::cpu()->r[1] = r1_1;
                return r0_2;
            }
            r1_1 = u32(*gptr<u8>(r0_2 + 0x5705u)) << 0x1d;  // (from the original)
            if (s32(r1_1) < 0) {
                u32 r0_6 = SaveVillager__find_player_record_00309eb8(r4_1, r0_2 + 0x55a6u);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (r0_6 != 0) {
                    if ((u32(*gptr<u8>(r0_6 + 0xbcu)) >> 7) != 0) {  // (from the original)
                        return 1u;
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0076054c
GUEST_EXPORT_FRAMED(0x0076054c, d_0076054c::AcNpcNml__remembers_current_player, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007608f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// How a villager reacts to being shown `item` by the current player: kinds for two particular items, insects (8), fish
// and sea creatures (7), category 0x35 (4), 0x75/0x76 (10), the saved item of category 0x33 or 0x34 (1-3), anything
// else 9.
namespace d_007608f8 {

inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> Item__same_number_as;
inline constexpr guest::Function<0x006bada0, u32(u32)> convert_low_numbers_to_unit;

struct __attribute__((packed)) Frame_007608f8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_007608f8, word_0, 0x0);
GUEST_SIZE(Frame_007608f8, 0x4);

u32 item_reaction_kind(u32 r0, u32 item, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_007608f8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player_2 = get_current_player(r0, item, guest::cpu()->r[2], r3);
    if (player_2 != 0) {
        u32 r0_2 = Item__has_number(item, 0x2006u);  // (from the original)
        if (r0_2 != 0) {
            return 5u;
        }
        u32 r0_3 = Item__has_number(item, 0x2e61u);  // (from the original)
        if (r0_3 != 0) {
            return 6u;
        }
        Item__category(item);
        u32 category = Item__category(item);
        if (category - 0x34u != 0) {  // (from the original)
            if (s32(category) < 0x34) {  // (from the original)
                if (category == 0x24u) {  // (from the original)
                    return 8u;
                }
                if (category == 0x27u || category == 0x28u) {  // (from the original)
                    return 7u;
                }
                if (category == 0x33u) {  // (from the original)
                    u32 r0_5 = Item__has_number(item, 0x200du);  // (from the original)
                    if (r0_5 == 0) {
                        u32 save_data_3 = get_save_data(r0_5);
                        Item__copy_b(frame.at(0).addr(), save_data_3 + 0x6223au);  // (from the original)
                        u32 r0_8 = Item__same_number_as(item, frame.at(0).addr());
                        return r0_8 == 0 ? 2u : 3u;
                    }
                    return 9u;
                }
                return 9u;
            }
            if (category == 0x35u) {  // (from the original)
                return 4u;
            }
            if (category == 0x75u || category == 0x76u) {  // (from the original)
                return 0xau;  // (from the original)
            }
            return 9u;
        }
        u32 save_data_4 = get_save_data(category);
        Item__copy_b(frame.at(0).addr(), save_data_4 + 0x6223au);  // (from the original)
        convert_low_numbers_to_unit(frame.at(0).addr());
        u32 r0_12 = Item__same_number_as(item, frame.at(0).addr());
        return r0_12 != 0;
    }
    return 9u;
}

}  // namespace d_007608f8
GUEST_EXPORT_FRAMED(0x007608f8, d_007608f8::item_reaction_kind, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00760c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the villager may start a talk (00761ab0) about the current player's pending record: not yet seen by this
// villager and its record not busy.
namespace d_00760c70 {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002ff8b0, u32(u32)> player_slot_byte;
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32)> block_or_first;
inline constexpr guest::Function<0x007203d4, u32(u32, u32)> Records6__state;
inline constexpr guest::Function<0x00761ab0, u32(u32, u32, u32, u32)> npc_daytime_talk_allowed;

u32 AcNpcNml__can_start_greeting_talk(u32 ac_npc_nml, u32 r1) {
    u32 r5_1 = 0;
    u32 r0_1 = npc_daytime_talk_allowed(ac_npc_nml, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r4_1 = *current_player_data;
        u32 r0_2 = player_slot_byte(4u);
        u32 save_data_2 = get_save_data(r0_2);
        u32 r0_5 = block_or_first(save_data_2 + 0x5d900u, r0_2);  // (from the original)
        u32 r0_6 = Records6__state(r0_5, 0u);
        r1_1 = guest::cpu()->r[1];
        if (r0_6 < 3u) {
            if (r4_1 == 0) {
                goto L_760d44;
            }
            if (s32(u32(*gptr<u8>(r4_1 + 0x5715u)) << 0x1b) >= 0) {  // (from the original)
                goto L_760d44;
            }
        }
        r5_1 = *gptr<u32>(ac_npc_nml + 0xf0u);  // (from the original)
        if (r4_1 != 0 && r5_1 != 0) {
            u32 r6_1 = r4_1 + 0x8dfau;  // (from the original)
            u32 r0_7 = SavedRecordInner__has_value(r6_1, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_7 == 0 || *gptr<u8>(r6_1 + 9u) == 3u) {
                r1_1 = *gptr<u16>(r4_1 + 0x8ec2u);  // (from the original)
                if (r1_1 != *gptr<u16>(r5_1 + 0x9acu)) {  // (from the original)
                    u32 r0_8 = *gptr<u32>(r5_1 + 0x1028u);  // (from the original)
                    if (r0_8 != 0 && *gptr<u8>(r0_8 + 0x250fu) == 0) {  // (from the original)
                        guest::cpu()->r[1] = r1_1;
                        return 1u;
                    }
                }
            }
        }
L_760d44:;
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00760c70
GUEST_EXPORT_FRAMED(0x00760c70, d_00760c70::AcNpcNml__can_start_greeting_talk, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00760d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds a present the villager may give, with room in the pockets.
namespace d_00760d60 {

struct __attribute__((packed)) Villager {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Villager, word_f0, 0xf0);

struct __attribute__((packed)) Local_00760d60_r5_1 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Local_00760d60_r5_1, word_28, 0x28);
GUEST_OFFSET(Local_00760d60_r5_1, word_2c, 0x2c);
GUEST_OFFSET(Local_00760d60_r5_1, word_30, 0x30);

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u8, 0x00950145> insect_spawns_disabled;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x00309865, u32(u32, u32)> villager_slot_index;
inline constexpr guest::Function<0x0051ce84, u32(u32, u32, u32)> BsNpcMgr__SearchFunction__SearchFunction_0051ce84;
inline constexpr guest::Function<0x0051db9c, u32(u32)> set_byte_a833a0_51db9c;
inline constexpr guest::Function<0x005bdb34, u32(u32)> limit_index_88f364;
inline constexpr guest::Function<0x007241b0, u32(u32)> Pockets__find_empty_slot;

u32 Villager__find_present(gptr<Villager> villager, u32 r1, u32 r2) {
    u32 r0 = villager.addr();
    u32 r4 = 0;
    u32 r0_12 = 0;
    u32 r0_1 = current_net_signed_value(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 0 && *insect_spawns_disabled == 0) {
        u32 r0_2 = *current_player_data;
        if (r0_2 != 0) {
            u32 slot_2 = Pockets__find_empty_slot(r0_2 + 0x6bd0u);  // (from the original)
            if (s32(slot_2) >= 0) {
                u32 r0_5 = villager->word_f0;
                if (r0_5 == 0) {
                    return r0_5;
                }
                gptr<Local_00760d60_r5_1> r5_1 = gptr<Local_00760d60_r5_1>(r0_5 + 0x1000u);  // (from the original)
                r0_5 = r5_1->word_2c;
                if (r0_5 == 0) {
                    return r0_5;
                }
                u32 r6_1 = *gptr<u8>(r0_5 + 0x24u);  // (from the original)
                u32 r0_6 = limit_index_88f364(r6_1);
                if (r0_6 != 5u) {
                    return 0u;
                }
                u32 r4_1 = r5_1->word_28;
                if (r4_1 == 0) {
                    return 0u;
                }
                u32 data_base_2 = get_data_base(r0_6);
                u32 records_2 = slot_records_of(data_base_2);
                u32 r0_10 = villager_slot_index(records_2 + 4u, 0u);
                u32 r5 = r5_1->word_30;
                u32 r7 = r0_10;
                if (r6_1 == 8u) {
                    u32 r0_11 = *gptr<s8>(r4_1 + 0x2516u);  // (from the original)
                    r0_5 = BsNpcMgr__SearchFunction__SearchFunction_0051ce84(r0_11, r7, r5);
                    if (r0_5 == 0) {
                        return r0_5;
                    }
                    goto L_760e28;
                } else {
                    r4 = 0u;
                }
L_760e0c:;
                r0_12 = BsNpcMgr__SearchFunction__SearchFunction_0051ce84(r4, r7, r5);
                if (r0_12 == 0) {
                    goto L_760e5c;
                }
L_760e28:;
                r0_5 = set_byte_a833a0_51db9c(1u);
                return r0_5;
L_760e5c:;
                r4 += 1u;
                if (s32(r4) < 0xa) {  // (from the original)
                    guest::preempt();
                    goto L_760e0c;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_00760d60
GUEST_EXPORT_FRAMED(0x00760d60, d_00760d60::Villager__find_present, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00760e7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the villager may walk up to the current player now: the player has flag 2 of +0x5705, the hour fits, nothing
// blocks it (lists 2 and 0xd), and its model is free.
namespace d_00760e7c {

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fdf10, u32(u32, u32)> is_in_registered_list;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0051cc90, u32(u32, u32)> read_s8_0x00a8339c_;

u32 AcNpcNml__can_approach_player(u32 ac_npc_nml, u32 r1) {
    u32 player_2 = get_current_player(ac_npc_nml, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 now = game_time_now(player_2);
    u32 r0_3 = *gptr<s8>(now + 7u);
    u32 r1_2 = u32(*gptr<u8>(player_2 + 0x5705u)) << 0x1d;  // (from the original)
    if (s32(r1_2) < 0) {
        u32 r0_4 = r0_3 - 2u;
        if (r0_4 >= 4u) {
            u32 r0_5 = main_object_idle(r0_4, r1_2);
            r1_2 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                u32 r0_6 = read_s8_0x00a8339c_(r0_5, r1_2);
                r1_2 = guest::cpu()->r[1];
                if (r0_6 != 0) {
                    u32 r0_7 = is_in_registered_list(2u, r1_2);
                    r1_2 = guest::cpu()->r[1];
                    if (r0_7 != 0) {
                        return 0u;
                    }
                }
                u32 r0_8 = is_in_registered_list(0xdu, r1_2);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                if (r0_8 == 0) {
                    u32 r0_9 = *gptr<u32>(ac_npc_nml + 0xf0u);  // (from the original)
                    if (r0_9 != 0) {
                        u32 r0_10 = r0_9 + 0x1000u;  // (from the original)
                        u32 r4_1 = *gptr<u32>(r0_10 + 0x2cu);  // (from the original)
                        if (r4_1 != 0) {
                            u32 scene = current_scene_id(r0_10);
                            u32 scene_flagged = scene_has_flags(0x40u, scene);  // (from the original)
                            r1_2 = guest::cpu()->r[1];
                            if (scene_flagged == 0) {
                                return 1u;
                            }
                            u32 r0_13 = *gptr<u32>(r4_1 + 0x44u);  // (from the original)
                            if ((r0_13 & 8u) == 0 && (r0_13 & 0x10u) == 0) {  // (from the original)
                                return 1u;
                            }
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00760e7c
GUEST_EXPORT_FRAMED(0x00760e7c, d_00760e7c::AcNpcNml__can_approach_player, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00761ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether villagers may start talks now: the scene allows it (bit 0x20), no event or busy NPC manager, the hour is
// from 6 to 17, and no scheduled place is open (except place 5).
namespace d_00761ab0 {

inline constexpr u32 npc_manager_address = 0x00950148u;
inline guest::global<u8, 0x00950145> insect_spawns_disabled;
inline guest::global<u32, 0x00950148> npc_manager;
inline constexpr guest::Function<0x00229c50, u32(u32)> weather_particle_kind;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x0058dd08, u32(u32)> place_is_open;
inline constexpr guest::Function<0x0058e348, u32(u32)> scheduled_place_at;
inline constexpr guest::Function<0x00698ac0, u32(u32)> Event__can_start_today;
inline constexpr guest::Function<0x0069fd54, u32(u32)> Player__face_object;

u32 npc_daytime_talk_allowed(u32 ac_npc_nml, u32 r1) {
    u32 event = 0;
    u32 r0_1 = current_net_signed_value(ac_npc_nml, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        if (r1 == 0) {
            u32 save_data_2 = get_save_data(r0_1);
            u32 r4_1 = save_data_2 + 0x40690u;  // (from the original)
            u32 r0_4 = SavedRecordInner__has_value(r4_1 + 0x46u);  // (from the original)
            if (r0_4 != 0 && *gptr<u8>(r4_1 + 0x4fu) < 4u) {  // (from the original)
                return 0u;
            }
        }
        u32 r0_5 = *npc_manager;
        if (r1 != 0) {
            if (r0_5 != 0) {
                r0_5 = Player__face_object(r0_5);
                if (r0_5 != 0) {
                    return 0u;
                }
            }
            r0_5 = weather_particle_kind(r0_5);
            if (s32(r0_5) > 0) {
                return 0u;
            }
        }
        u32 scene = current_scene_id(r0_5);
        event = scene_has_flags(0x20u, scene);  // (from the original)
        if (event == 0) {
            return event;
        }
        u32 r0_8 = Event__can_start_today(event);
        u32 r5_1 = 1u;
        if (r0_8 == 0) {
            u32 now = game_time_now(r0_8);
            u32 scheduled_place_2 = scheduled_place_at(now);
            u32 r0_11 = place_is_open(scheduled_place_2);
            if (r0_11 == 0 || scheduled_place_2 != 5u) {
                r5_1 = 0u;
            }
        }
        u32 r0_12 = u32(s8(*insect_spawns_disabled)) | r5_1;
        if (r0_12 == 0) {
            u32 now_2 = game_time_now(r0_12);
            if (u32(*gptr<s8>(now_2 + 7u)) - 6u < 0xcu) {  // (from the original)
                return 1u;
            }
        }
    }
    return 0u;
}

}  // namespace d_00761ab0
GUEST_EXPORT_FRAMED(0x00761ab0, d_00761ab0::npc_daytime_talk_allowed, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00761f60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The personality (0-7, the high nibble of the villager data's +0x1c) of the villager the talk is with; 0 when there
// is none.
namespace d_00761f60 {

inline constexpr u32 item_list_400_address = 0x00a83af0u;
inline guest::global<u32, 0x00a83af0> item_list_400;

u32 talk_villager_personality(gptr<AcNpcNml__TalkRcpt> talk_rcpt, u32 r1) {
    u32 r0_1 = talk_rcpt->word_f0;
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r1_1 = *item_list_400;
    u32 r0_2 = *gptr<u16>(r0_1 + 0x9acu);  // (from the original)
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r0_2;  // (from the original)
        cf_1 = 0x18fu >= r0_2;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_3 = r1_1 + r0_2 * 0x22u;  // (from the original)
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_4 = *gptr<u8>(r0_3 + 0x1cu);  // (from the original)
    if (8u > (r0_4 >> 4)) {
        guest::cpu()->r[1] = 8u;
        return r0_4 >> 4;
    }
    guest::cpu()->r[1] = 8u;
    return 0u;
}

}  // namespace d_00761f60
GUEST_EXPORT(0x00761f60, d_00761f60::talk_villager_personality);

// f_007622c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 006c06dc with the arguments and the object's model (+0x1b4).
namespace d_007622c8 {

inline constexpr guest::Function<0x006c06dc, u32(u32, u32, u32, u32)> Wind__strength_at;

struct __attribute__((packed)) Frame_007622c8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_007622c8, word_0, 0x0);
GUEST_SIZE(Frame_007622c8, 0x4);

u32 call_006c06dc_with_model(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007622c8> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = r0 + 0x1b4u;  // (from the original)
    u32 strength = Wind__strength_at(r1, r2, r3, *frame.at<u32>(8));
    return strength;
}

}  // namespace d_007622c8
GUEST_EXPORT_FRAMED(0x007622c8, d_007622c8::call_006c06dc_with_model, 0x4000);  // pushes {lr} first, as the original

// f_007622f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The point at `angle` on the circle around the object's position (+0x14), put on the ground when asked.
namespace d_007622f0 {

inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> offset_on_circle;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> ground_height_at;

u32 point_around_object(u32 object, gptr<Float3> point, u32 r2_unused, u32 on_ground, float S0) {
    u32 r0_1 = offset_on_circle(point.addr(), object + 0x14u, guest::cpu()->r[2], on_ground);  // (from the original)
    if (on_ground != 0) {
        r0_1 = ground_height_at(point.addr(), 0u);
        float S0_2 = guest::cpu()->s[0];
        point->v[1] = S0_2;
    }
    return r0_1;
}

}  // namespace d_007622f0
GUEST_EXPORT_FRAMED(0x007622f0, d_007622f0::point_around_object, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007626fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object can step toward its facing angle plus `turn`: the ground there is walkable, or not too steep
// (normal y below 0.9).
namespace d_007626fc {

inline constexpr guest::Function<0x005ce32c, u32(u32, u32)> terrain_s8_at_position;
inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> offset_on_circle;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> ground_height_at;
inline constexpr guest::Function<0x006c5d30, u32(u32, u32, u32)> ground_normal_at_position;

struct __attribute__((packed)) Frame_007626fc {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x8];  // (not read or written by name)
    float float_1c;
    u8 unknown_20[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007626fc, word_10, 0x10);
GUEST_OFFSET(Frame_007626fc, float_1c, 0x1c);
GUEST_SIZE(Frame_007626fc, 0x28);

u32 SlotObject__can_step_toward(gptr<SlotObject> slot_object, u32 r1, float S0) {
    guest::StackFrameOf<Frame_007626fc> frame;  // the original's stack frame
    u32 r4_1 = frame.at(0x18).addr();  // (from the original)
    *frame.at<u16>(8) = u16(u32(slot_object->angles[1]) + r1);
    u32 r2_1 = *frame.at<u32>(8);
    offset_on_circle(r4_1, slot_object.addr() + 0x14u, r2_1, guest::cpu()->r[3]);  // (from the original)
    ground_height_at(r4_1, 0u);
    float S0_2 = guest::cpu()->s[0];
    frame->float_1c = S0_2;
    guest::cpu()->s[0] = S0_2;
    u32 r0_2 = terrain_s8_at_position(frame.at(0x18).addr(), 0u);  // (from the original)
    if (s32(r0_2) >= 0) {
        return 1u;
    }
    ground_normal_at_position(frame.at(0xc).addr(), frame.at(0x18).addr(), 0u);  // (from the original)
    if (s32(frame->word_10) >= s32(0x3f666666u)) {  // (from the original)
        guest::cpu()->r[1] = 0x3f666666u;  // (from the original)
        return 0u;
    }
    guest::cpu()->r[1] = 0x3f666666u;  // (from the original)
    return 1u;
}

}  // namespace d_007626fc
GUEST_EXPORT_FRAMED(0x007626fc, d_007626fc::SlotObject__can_step_toward, 0x4010);  // pushes {r4, lr} first, as the original

// f_00762ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the player's effect for hitting the cell (x, z): 0x15f/0x162 on ordinary ground or 0x160/0x161 on ground kind
// 0x16, by `alternate`.
namespace d_00762ab8 {

inline constexpr guest::Function<0x00659674, u32(u32, u32, u32, u32)> GrassWear__mark_step;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32)> cell_corner_with_height;
inline constexpr guest::Function<0x006c588c, u32(u32, u32)> item_at_position_2;
inline constexpr guest::Function<0x007648b8, u32(u32, u32, u32, u32)> play_player_effect;

struct __attribute__((packed)) Frame_00762ab8 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00762ab8, word_0, 0x0);
GUEST_SIZE(Frame_00762ab8, 0x14);

void play_cell_hit_effect(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00762ab8> frame;  // the original's stack frame
    GrassWear__mark_step(player + 0x424u, 1u, r2, r3);  // (from the original)
    cell_corner_with_height(frame.at(4).addr(), r1, r2);
    u32 item_2 = item_at_position_2(frame.at(4).addr(), 0u);
    u32 r0_5 = frame.at(4).addr();
    if (item_2 != 0x16u) {  // (from the original)
        frame->word_0 = r0_5;
        if (r3 == 0) {
            play_player_effect(player, 0u, 0u, 0x15fu);  // (from the original)
            return;
        }
        play_player_effect(player, 0u, 0u, 0x162u);  // (from the original)
        return;
    }
    frame->word_0 = r0_5;
    if (r3 != 0) {
        play_player_effect(player, 0u, 0u, 0x161u);  // (from the original)
        return;
    }
    play_player_effect(player, 0u, 0u, 0x160u);  // (from the original)
}

}  // namespace d_00762ab8
GUEST_EXPORT_FRAMED(0x00762ab8, d_00762ab8::play_cell_hit_effect, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00762d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player's held item has data kind 4 and the player's flag (bit 6 of +0x907 or +0x91b by the scene) or
// pair flag allows it.
namespace d_00762d38 {

struct __attribute__((packed)) Object_00762d38_0 {
    u8 unknown_0[0x172];  // (not used here)
    u8 byte_172;
    u8 unknown_173[0x7ac];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Object_00762d38_0, byte_172, 0x172);
GUEST_OFFSET(Object_00762d38_0, byte_91f, 0x91f);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x003117bc, u32(u32, u32)> item_data_byte_0f;
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32, u32)> PlayerModel__hand_matrix;
inline constexpr guest::Function<0x007626c0, u32(u32)> pair_flag_bit_6;

u32 player_held_item_kind_4_allowed(gptr<Object_00762d38_0> arg0, u32 r1) {
    u32 r0_2 = 0;
    if ((u32(arg0->byte_172) >> 1u & 1u) == 0) {
        r0_2 = PlayerModel__hand_matrix(arg0.addr() + 0x1b4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
    } else {
        r0_2 = empty_item_address;
    }
    u32 r0_3 = item_data_byte_0f(r0_2, r1);
    if (r0_3 != 4u) {
        return 0u;
    }
    u32 r0_4 = arg0->byte_91f;
    if (r0_4 == 0) {
        return 0u;
    }
    u32 scene = current_scene_id(r0_4);
    u32 scene_flagged = scene_has_flags(0x10000000u, scene);  // (from the original)
    if ((u32(*gptr<u8>(scene_flagged == 0 ? arg0.addr() + 0x91bu : arg0.addr() + 0x907u)) >> 6u & 1u) != 0) {  // (from the original)
        return 1u;
    }
    u32 r0_7 = pair_flag_bit_6(arg0.addr());
    return r0_7 != 0;
}

}  // namespace d_00762d38
GUEST_EXPORT_FRAMED(0x00762d38, d_00762d38::player_held_item_kind_4_allowed, 0x4010);  // pushes {r4, lr} first, as the original

// f_00762dc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The point 26 units ahead of the object (in its facing direction), on the ground.
namespace d_00762dc8 {

struct __attribute__((packed)) Object_00762dc8_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
};
GUEST_OFFSET(Object_00762dc8_0, half_2e, 0x2e);

inline constexpr guest::Function<0x007622f0, u32(u32, u32, u32, u32)> point_around_object;

void point_ahead_26(gptr<Object_00762dc8_0> object) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *frame.at<u16>(0) = object->half_2e;
    u32 r2_1 = *frame.at<u32>(0);
    float S0_1 = 26.0f;
    guest::cpu()->s[0] = S0_1;
    frame.release();
    point_around_object(object.addr(), guest::cpu()->r[1], r2_1, 1u);
    return;
}

}  // namespace d_00762dc8
GUEST_EXPORT(0x00762dc8, d_00762dc8::point_ahead_26);

// f_00762dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the player's effect for the cell (x, z): 0x15d on ordinary ground, 0x15e on ground kind 0x16.
namespace d_00762dec {

inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> cell_corner_with_height;
inline constexpr guest::Function<0x006c588c, u32(u32, u32)> item_at_position_2;
inline constexpr guest::Function<0x007648b8, u32(u32, u32, u32, u32)> play_player_effect;

struct __attribute__((packed)) Frame_00762dec {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00762dec, word_0, 0x0);
GUEST_SIZE(Frame_00762dec, 0x10);

void play_cell_hit_effect_2(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00762dec> frame;  // the original's stack frame
    cell_corner_with_height(frame.at(4).addr(), r1, r2, r3);
    u32 item_2 = item_at_position_2(frame.at(4).addr(), 0u);
    frame->word_0 = frame.at(4).addr();
    if (item_2 != 0x16u) {  // (from the original)
        play_player_effect(player, 0u, 0u, 0x15du);  // (from the original)
        return;
    }
    play_player_effect(player, 0u, 0u, 0x15eu);  // (from the original)
}

}  // namespace d_00762dec
GUEST_EXPORT_FRAMED(0x00762dec, d_00762dec::play_cell_hit_effect_2, 0x4010);  // pushes {r4, lr} first, as the original

// f_00762e98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds a free spot near the cell (searching the map rectangle), kept in a static vector; 0 when none.
namespace d_00762e98 {

inline constexpr u32 spot_offsets_a_address = 0x0094def4u;
inline constexpr u32 spot_search_x_address = 0x009856c4u;
inline constexpr u32 origin_x_address = 0x00ae5658u;
inline constexpr u32 origin_y_address = 0x00ae565cu;
inline constexpr u32 origin_z_address = 0x00ae5660u;
inline guest::global<u32, 0x0094def4> spot_offsets_a;
inline guest::global<u32, 0x009856c4> spot_search_x;
inline guest::global<u32, 0x009856c8> spot_search_y;
inline guest::global<u32, 0x009856cc> spot_search_z;
inline guest::global<u32, 0x00ae5658> origin_x;
inline guest::global<u32, 0x00ae565c> origin_y;
inline guest::global<u32, 0x00ae5660> origin_z;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> cell_corner;
inline constexpr guest::Function<0x006c8928, u32(u32, u32, u32)> terrain_value_at;
inline constexpr guest::Function<0x00752990, u32(u32, u32, u32)> rect_at_10_width;
inline constexpr guest::Function<0x00752998, u32(u32, u32, u32)> rect_at_10_height;

struct __attribute__((packed)) Frame_00762e98 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Frame_00762e98, float_0, 0x0);
GUEST_OFFSET(Frame_00762e98, float_4, 0x4);
GUEST_OFFSET(Frame_00762e98, float_8, 0x8);
GUEST_SIZE(Frame_00762e98, 0xc);

u32 find_spot_near_cell(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<Frame_00762e98> frame;  // the original's stack frame
    u32 r7 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r8 = r0;
    u32 r4_1 = r1;
    u32 map_table_2 = get_map_table(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    u32 r9 = map_table_2;
    if (map_table_2 != 0) {
        if ((*spot_offsets_a & 1u) == 0) {
            static_guard_acquire(spot_offsets_a_address, r1_1);
            S0_1 = guest::cpu()->s[0];
            S1_1 = guest::cpu()->s[1];
        }
        u32 r6 = 0u;
        u32 r5 = r6;
        *spot_search_x = *origin_x;
        u32 r2_2 = *origin_y;
        *spot_search_y = r2_2;
        u32 r1_2 = *origin_z;
        *spot_search_z = r1_2;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        u32 r0_2 = rect_at_10_height(r9, r1_2, r2_2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        if (r0_2 >= 0u && r0_2 != 0) {
            r7 = sxtb(r4_1);
        } else {
            return 0u;
        }
        do {
            u32 r4 = 0u;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            u32 r0_3 = rect_at_10_width(r9, r1, r2);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            S3 = guest::cpu()->s[3];
            if (r0_3 >= 0u && r0_3 != 0) {
                do {
                    guest::cpu()->s[0] = S0;
                    guest::cpu()->s[1] = S1;
                    guest::cpu()->s[2] = S2;
                    guest::cpu()->s[3] = S3;
                    u32 terrain_2 = terrain_value_at(r4, r5, 0u);
                    float S0_2 = guest::cpu()->s[0];
                    float S1_2 = guest::cpu()->s[1];
                    float S2_2 = guest::cpu()->s[2];
                    float S3_2 = guest::cpu()->s[3];
                    if (s32(terrain_2) >= 0 && terrain_2 == r7) {
                        cell_corner(frame.at(0).addr(), r4, r5);
                        S3_2 = frame->float_0;
                        r6 += 1u;
                        S1_2 = std::bit_cast<float>(*spot_search_y);
                        S2_2 = std::bit_cast<float>(*spot_search_z);
                        *spot_search_x = std::bit_cast<u32>(std::bit_cast<float>(*spot_search_x) + S3_2);
                        *spot_search_y = std::bit_cast<u32>(S1_2 + frame->float_4);
                        S0_2 = S2_2 + frame->float_8;
                        *spot_search_z = std::bit_cast<u32>(S0_2);
                    }
                    r4 += 1u;
                    guest::cpu()->s[0] = S0_2;
                    guest::cpu()->s[1] = S1_2;
                    guest::cpu()->s[2] = S2_2;
                    guest::cpu()->s[3] = S3_2;
                    r0_6 = rect_at_10_width(r9, guest::cpu()->r[1], guest::cpu()->r[2]);
                    S0 = guest::cpu()->s[0];
                    S1 = guest::cpu()->s[1];
                    S2 = guest::cpu()->s[2];
                    S3 = guest::cpu()->s[3];
                    guest::preempt();
                } while (r0_6 > r4);
            }
            r5 += 1u;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0_7 = rect_at_10_height(r9, guest::cpu()->r[1], guest::cpu()->r[2]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            S3 = guest::cpu()->s[3];
            guest::preempt();
        } while (r0_7 > r5);
        if (r6 == 0) {
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return 0u;
        }
        r1_1 = spot_search_x_address;
        float S0_3 = 1.0f / float(r6);
        *spot_search_x = std::bit_cast<u32>(std::bit_cast<float>(*spot_search_x) * S0_3);
        *spot_search_y = std::bit_cast<u32>(std::bit_cast<float>(*spot_search_y) * S0_3);
        S1_1 = std::bit_cast<float>(*spot_search_z);
        S0_1 = S1_1 * S0_3;
        *spot_search_z = std::bit_cast<u32>(S0_1);
        *gptr<u32>(r1_1 + 4u) = *gptr<u32>(r8 + 0x18u);  // (from the original)
        map_table_2 = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return map_table_2;
}

}  // namespace d_00762e98
GUEST_EXPORT_FRAMED(0x00762e98, d_00762e98::find_spot_near_cell, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00763298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The kind of ground at `position` for the player's effects: by its terrain type, the weather (rain) and whether it is
// the snow season.
namespace d_00763298 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
};
GUEST_OFFSET(Player, byte_174, 0x174);

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> current_weather_type;
inline constexpr guest::Function<0x0062fb44, u32(u32)> is_snow_period;
inline constexpr guest::Function<0x006c588c, u32(u32, u32)> item_at_position_2;
inline constexpr guest::Function<0x006c8778, u32(u32)> cell_kind_at_position;

u32 ground_surface_kind(gptr<Player> player, u32 position) {
    u32 r0_1 = u32(player->byte_174) >> 1u & 1u;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 weather_2 = current_weather_type(r0_1, position, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (!(weather_2 == 3u || weather_2 == 4u)) {
        u32 item_3 = item_at_position_2(position, 0u);
        if (item_3 == 0x14u) {  // (from the original)
            u32 r0_4 = cell_kind_at_position(position);
            if (r0_4 < 0x40u) {  // (from the original)
                return 3u;
            }
            u32 r0_5 = is_snow_period(r0_4);
            return r0_5 == 0 ? 2u : 4u;
        }
        if (item_3 == 0x11u || item_3 == 0x17u) {  // (from the original)
            return 1u;
        }
        if (item_3 == 0x16u) {  // (from the original)
            return 5u;
        }
        return item_3 == 0x19u ? 9u : 0u;  // (from the original)
    }
    u32 item_4 = item_at_position_2(position, 0u);
    if (item_4 == 0x16u) {  // (from the original)
        return 6u;
    }
    if (item_4 != 0x14u) {  // (from the original)
        return 8u;
    }
    u32 r0_9 = cell_kind_at_position(position);
    if (r0_9 < 0x40u) {  // (from the original)
        return 7u;
    }
    return 8u;
}

}  // namespace d_00763298
GUEST_EXPORT_FRAMED(0x00763298, d_00763298::ground_surface_kind, 0x4010);  // pushes {r4, lr} first, as the original

// f_00763360: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0072413c on the pockets of the player of the object's slot (+0x1ac); 0 when there is none.
namespace d_00763360 {

struct __attribute__((packed)) Object_00763360_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00763360_0, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x0072413c, u32(u32, u32, u32, u32)> Pockets__find_category;

u32 player_pockets_call_72413c(gptr<Object_00763360_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_1ac;
    u32 player_2 = player_of_slot_index(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 zf_1 = player_2 == 0;
    if (!zf_1) {
        zf_1 = player_2 + 0x6bd0u == 0;  // (from the original)
        player_2 = player_2 + 0x6bd0u;  // (from the original)
    }
    if (zf_1) {
        return 0u;
    }
    frame.release();
    return Pockets__find_category(player_2, r1, 0u, guest::cpu()->r[3]);
}

}  // namespace d_00763360
GUEST_EXPORT(0x00763360, d_00763360::player_pockets_call_72413c);

// f_00763398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position 32 units in front of the spot near the cell (along its direction), kept in a static vector; 0 when
// none.
namespace d_00763398 {

struct __attribute__((packed)) Local_00763398_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00763398_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00763398_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_00763398_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_00763398_r0_4 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00763398_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_00763398_r0_4, float_4, 0x4);
GUEST_OFFSET(Local_00763398_r0_4, float_8, 0x8);

struct __attribute__((packed)) Local_00763398_r0_6 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00763398_r0_6, float_0, 0x0);
GUEST_OFFSET(Local_00763398_r0_6, float_4, 0x4);
GUEST_OFFSET(Local_00763398_r0_6, float_8, 0x8);

struct __attribute__((packed)) Local_00763398_r1_4 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00763398_r1_4, float_0, 0x0);
GUEST_OFFSET(Local_00763398_r1_4, float_4, 0x4);
GUEST_OFFSET(Local_00763398_r1_4, float_8, 0x8);

inline constexpr u32 spot_offsets_b_address = 0x0094def8u;
inline constexpr u32 cell_front_offsets_address = 0x009856d0u;
inline guest::global<u32, 0x0094def8> spot_offsets_b;
inline guest::global<u32, 0x009856d0> cell_front_offsets;
inline guest::global<u32, 0x009856d4> global_009856d4;
inline guest::global<u32, 0x009856d8> global_009856d8;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;
inline constexpr guest::Function<0x00308340, u32(u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x0056a224, u32(u32, u32)> rotate_xz;
inline constexpr guest::Function<0x005b5080, u32(u32, u32, u32)> Scene__spawn_from_previous;
inline constexpr guest::Function<0x00762e98, u32(u32, u32, u32, u32)> find_spot_near_cell;

struct __attribute__((packed)) Frame_00763398 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x2a];  // (not read or written by name)
    u16 half_3a;
    u8 unknown_3c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00763398, word_4, 0x4);
GUEST_OFFSET(Frame_00763398, word_8, 0x8);
GUEST_OFFSET(Frame_00763398, word_c, 0xc);
GUEST_OFFSET(Frame_00763398, half_3a, 0x3a);
GUEST_SIZE(Frame_00763398, 0x44);

u32 spot_in_front_of_cell(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrameOf<Frame_00763398> frame;  // the original's stack frame
    gptr<Local_00763398_r0_1> r0_1 = gptr<Local_00763398_r0_1>(find_spot_near_cell(r0, r1, r2, guest::cpu()->r[3]));
    if (r0_1.addr() == 0) {
        return r0_1.addr();
    }
    u32 r0_2 = return_constant_0xac1948_(r0_1.addr());
    u32 r0_3 = Scene__spawn_from_previous(r0_2, frame.at(0x28).addr(), r1);  // (from the original)
    if (r0_3 == 0) {
        return r0_3;
    }
    float S0_4 = 0.0f;
    u32 r5_1 = sxth(u32(frame->half_3a) + 0x8000u);  // (from the original)
    float S2_3 = 32.0f;
    gptr<Local_00763398_r0_4> r0_4 = gptr<Local_00763398_r0_4>(frame.at(0x14).addr());  // (from the original)
    r0_4->float_0 = S0_4;
    r0_4->float_4 = S0_4;
    r0_4->float_8 = S2_3;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S0_4;
    guest::cpu()->s[2] = S2_3;
    rotate_xz(frame.at(0x14).addr(), r5_1);  // (from the original)
    if ((*spot_offsets_b & 1u) == 0) {
        static_guard_acquire(spot_offsets_b_address);
    }
    gptr<Local_00763398_r1_4> r1_4 = gptr<Local_00763398_r1_4>(frame.at(0x14).addr());  // (from the original)
    gptr<Local_00763398_r0_6> r0_6 = gptr<Local_00763398_r0_6>(frame.at(4).addr());
    float S0_5 = r0_1->float_0 + r1_4->float_0;
    float S2_4 = r0_1->float_8 + r1_4->float_8;
    float S1_4 = r0_1->float_4 + r1_4->float_4;
    r0_6->float_0 = S0_5;
    r0_6->float_4 = S1_4;
    r0_6->float_8 = S2_4;
    *cell_front_offsets = frame->word_4;
    *global_009856d4 = frame->word_8;
    *global_009856d8 = frame->word_c;
    guest::cpu()->r[1] = r1_4.addr();
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_4;
    return cell_front_offsets_address;
}

}  // namespace d_00763398
GUEST_EXPORT_FRAMED(0x00763398, d_00763398::spot_in_front_of_cell, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007634d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The player's reference point for its action (+0x1a9): its position raised by +0x1538, the point at +0x424, or the
// last one.
namespace d_007634d0 {

struct __attribute__((packed)) Object_007634d0_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x189];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x27a];  // (not used here)
    u32 word_424;
    u32 word_428;
    u32 word_42c;
    u8 unknown_430[0x1108];  // (not used here)
    float float_1538;
};
GUEST_OFFSET(Object_007634d0_1, word_14, 0x14);
GUEST_OFFSET(Object_007634d0_1, word_18, 0x18);
GUEST_OFFSET(Object_007634d0_1, word_1c, 0x1c);
GUEST_OFFSET(Object_007634d0_1, byte_1a9, 0x1a9);
GUEST_OFFSET(Object_007634d0_1, word_424, 0x424);
GUEST_OFFSET(Object_007634d0_1, word_428, 0x428);
GUEST_OFFSET(Object_007634d0_1, word_42c, 0x42c);
GUEST_OFFSET(Object_007634d0_1, float_1538, 0x1538);

inline constexpr u32 player_reference_x_address = 0x009856f4u;
inline guest::global<u32, 0x009856f4> player_reference_x;
inline guest::global<u32, 0x009856f8> player_reference_y;
inline guest::global<u32, 0x009856fc> player_reference_z;
inline constexpr guest::Function<0x0064f390, u32(u32)> entry_10;

void player_reference_point(u32 r0, gptr<Object_007634d0_1> object, float S0, float S1) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = object->byte_1a9;
    if (r0_1 < 0xebu) {  // (from the original)
        u32 r0_2 = entry_10(r0_1);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_2 != 0) {
            u32 r0_3 = u32(*gptr<u8>(r0_2 + 7u)) << 0x1a;  // (from the original)
            if (3u > (r0_3 >> 0x1e)) {  // (from the original)
                u32 r0_4 = r0_3 >> 0x1e;  // (from the original)
                if (r0_4 != 0) {
                    if (r0_4 == 1u) {
                        goto L_763554;
                    }
                    r1_1 = *player_reference_y;
                    r2_1 = *player_reference_z;
                    *gptr<u32>(r0) = *player_reference_x;
                    *gptr<u32>(r0 + 4) = r1_1;
                    *gptr<u32>(r0 + 8) = r2_1;
                    guest::cpu()->r[1] = r1_1;
                    return;
                }
            }
            *player_reference_x = object->word_14;
            *player_reference_y = object->word_18;
            *player_reference_z = object->word_1c;
            S1 = object->float_1538;
            S0 = std::bit_cast<float>(*player_reference_y) + S1;
            *player_reference_y = std::bit_cast<u32>(S0);
            r1_1 = *player_reference_y;
            r2_1 = *player_reference_z;
            *gptr<u32>(r0) = *player_reference_x;
            *gptr<u32>(r0 + 4) = r1_1;
            *gptr<u32>(r0 + 8) = r2_1;
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return;
L_763554:;
            *player_reference_x = object->word_424;
            *player_reference_y = object->word_428;
            *player_reference_z = object->word_42c;
        }
    }
    r1_1 = *player_reference_y;
    r2_1 = *player_reference_z;
    *gptr<u32>(r0) = *player_reference_x;
    *gptr<u32>(r0 + 4) = r1_1;
    *gptr<u32>(r0 + 8) = r2_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_007634d0
GUEST_EXPORT_FRAMED(0x007634d0, d_007634d0::player_reference_point, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00763580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00763580 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Player, byte_1a9, 0x1a9);


u32 AcPlayer_rec__is_in_states_c7_to_ca(gptr<Player> player) {
    u32 r0_1 = player->byte_1a9;
    if (r0_1 == 0xc7u || r0_1 == 0xc8u) {  // (from the original)
        return 1u;
    }
    if (r0_1 != 0xc9u && r0_1 != 0xcau) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_00763580
GUEST_EXPORT(0x00763580, d_00763580::AcPlayer_rec__is_in_states_c7_to_ca);

// f_007635a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the byte at 0x94fd2b is clear.
namespace d_007635a8 {

inline guest::global<u8, 0x0094fd2b> menu_resume_flag;

u32 menu_resume_flag_is_clear() {
    return *menu_resume_flag == 0;
}

}  // namespace d_007635a8
GUEST_EXPORT(0x007635a8, d_007635a8::menu_resume_flag_is_clear);

// f_007635c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The point 12 units ahead of the object (in its facing direction), on the ground.
namespace d_007635c4 {

struct __attribute__((packed)) Object_007635c4_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
};
GUEST_OFFSET(Object_007635c4_0, half_2e, 0x2e);

inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> point_on_circle;

void point_ahead_12(gptr<Object_007635c4_0> object, u32 point) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *frame.at<u16>(0) = object->half_2e;
    u32 r2_1 = *frame.at<u32>(0);
    float S0_1 = 12.0f;
    guest::cpu()->s[0] = S0_1;
    frame.release();
    point_on_circle(point, object.addr() + 0x14u, r2_1, 1u);
    return;  // (from the original)
}

}  // namespace d_007635c4
GUEST_EXPORT(0x007635c4, d_007635c4::point_ahead_12);

// f_007635f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00597790 with the cell (x, z) under a position.
namespace d_007635f4 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x00597790, u32(u32, u32)> FieldDrop__find_at;

struct __attribute__((packed)) Frame_007635f4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007635f4, word_0, 0x0);
GUEST_OFFSET(Frame_007635f4, word_4, 0x4);
GUEST_SIZE(Frame_007635f4, 0xc);

u32 call_597790_at_cell_of(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<Frame_007635f4> frame;  // the original's stack frame
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r1, guest::cpu()->r[3]);
    u32 drop = FieldDrop__find_at(frame->word_0, frame->word_4);
    return drop;
}

}  // namespace d_007635f4
GUEST_EXPORT_FRAMED(0x007635f4, d_007635f4::call_597790_at_cell_of, 0x4000);  // pushes {lr} first, as the original

// f_007636ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the player's effect for the cell (x, z): 0x199 on ordinary ground, 0x198 on ground kind 0x16.
namespace d_007636ec {

inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> cell_corner_with_height;
inline constexpr guest::Function<0x006c588c, u32(u32, u32)> item_at_position_2;
inline constexpr guest::Function<0x007648b8, u32(u32, u32, u32, u32)> play_player_effect;

struct __attribute__((packed)) Frame_007636ec {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007636ec, word_0, 0x0);
GUEST_SIZE(Frame_007636ec, 0x10);

void play_cell_hit_effect_3(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007636ec> frame;  // the original's stack frame
    cell_corner_with_height(frame.at(4).addr(), r1, r2, r3);
    u32 item_2 = item_at_position_2(frame.at(4).addr(), 0u);
    frame->word_0 = frame.at(4).addr();
    if (item_2 != 0x16u) {  // (from the original)
        play_player_effect(player, 0u, 0u, 0x199u);  // (from the original)
        return;
    }
    play_player_effect(player, 0u, 0u, 0x198u);  // (from the original)
}

}  // namespace d_007636ec
GUEST_EXPORT_FRAMED(0x007636ec, d_007636ec::play_cell_hit_effect_3, 0x4010);  // pushes {r4, lr} first, as the original

// f_00763758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00596334 when the object is in an action (bit 5 of +0x171).
namespace d_00763758 {

struct __attribute__((packed)) Object_00763758_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00763758_0, byte_171, 0x171);

inline constexpr guest::Function<0x00596334, u32(u32, u32, u32, u32)> FieldDrop__remove_at;

void call_596334_in_action(gptr<Object_00763758_0> arg0) {
    u32 field_drop = u32(arg0->byte_171) >> 5u & 1u;
    if (field_drop == 0) {
        return;
    }
    FieldDrop__remove_at(field_drop, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00763758
GUEST_EXPORT(0x00763758, d_00763758::call_596334_in_action);

// f_00763770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0059d164 at (x, z) with the kind of the slot player's worn item of class 7 (set B -> 1, 007680a0 -> 2, else 0)
// and whether it is in an action.
namespace d_00763770 {

struct __attribute__((packed)) Object_00763770_0 {
    u8 unknown_0[0x18];  // (not used here)
    float float_18;
    u8 unknown_1c[0x155];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00763770_0, float_18, 0x18);
GUEST_OFFSET(Object_00763770_0, byte_171, 0x171);
GUEST_OFFSET(Object_00763770_0, byte_1ac, 0x1ac);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x0059d164, u32(u32, u32, u32, u32)> FieldItems__drop;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x007680a0, u32(u32)> Item__is_id_334f_set;
inline constexpr guest::Function<0x007686e8, u32(u32)> Item__is_in_id_set_b;

void play_step_sound_for_worn_item(gptr<Object_00763770_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 item = 0;
    u32 r3_3 = 0;
    u32 r0_1 = arg0->byte_1ac;
    u32 player_2 = player_of_slot_index(r0_1, r1, r2, r3);
    if (player_2 == 0) {
        item = empty_item_address;
    } else {
        item = slot_7_if_class_7(player_2 + 0xau);  // (from the original)
    }
    u32 r0_5 = Item__is_in_id_set_b(item);
    if (r0_5 == 0) {
        u32 r0_6 = Item__is_id_334f_set(item);
        r3_3 = r0_6 == 0 ? 0u : 2u;
    } else {
        r3_3 = 1u;
    }
    float S0_3 = arg0->float_18;
    u32 r2_3 = u32(arg0->byte_171) >> 5u & 1u;
    guest::cpu()->s[0] = S0_3;
    frame.release();
    FieldItems__drop(r1, r2, r2_3, r3_3);
    return;
}

}  // namespace d_00763770
GUEST_EXPORT(0x00763770, d_00763770::play_step_sound_for_worn_item);

// f_00763c44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The point 32 units ahead of the slot player's recorded position (at ground height), or its own position; kept in a
// static vector.
namespace d_00763c44 {

inline constexpr u32 player_target_guard_address = 0x0094df64u;
inline constexpr u32 player_target_address = 0x00985754u;
inline guest::global<u32, 0x0094df64> player_target_guard;
inline guest::global<u32, 0x00985754> player_target;
inline guest::global<u32, 0x00985758> player_target_a;
inline guest::global<u32, 0x0098575c> player_target_b;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x002ff8b0, u32(u32)> player_slot_byte;
inline constexpr guest::Function<0x00307220, u32(u32, u32)> cell_position_of_id_2;
inline constexpr guest::Function<0x003094f0, u32(u32)> find_building_cell;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> ground_height_at;
inline constexpr guest::Function<0x00765e28, u32(u32, u32, u32, u32)> SlotObject__is_local;

struct __attribute__((packed)) Frame_00763c44 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00763c44, word_0, 0x0);
GUEST_OFFSET(Frame_00763c44, word_4, 0x4);
GUEST_OFFSET(Frame_00763c44, word_8, 0x8);
GUEST_SIZE(Frame_00763c44, 0x10);

u32 player_target_point(u32 slot_object, u32 r1, float S0, float S1) {
    guest::StackFrameOf<Frame_00763c44> frame;  // the original's stack frame
    if ((*player_target_guard & 1u) == 0) {
        static_guard_acquire(player_target_guard_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
    *player_target = *gptr<u32>(slot_object + 0x14u);  // (from the original)
    *player_target_a = *gptr<u32>(slot_object + 0x18u);  // (from the original)
    u32 r1_1 = *gptr<u32>(slot_object + 0x1cu);  // (from the original)
    *player_target_b = r1_1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    u32 r0_1 = SlotObject__is_local(slot_object, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = *gptr<u8>(slot_object + 0x1acu);  // (from the original)
    u32 r0_3 = player_slot_byte(r0_2);
    u32 building_cell_2 = find_building_cell(r0_3);
    if (building_cell_2 == 0) {
        return 0u;
    }
    cell_position_of_id_2(frame.at(0).addr(), r0_3);
    float S1_4 = 32.0f;
    float S0_4 = std::bit_cast<float>(frame->word_8) + S1_4;
    frame->word_8 = std::bit_cast<u32>(S0_4);
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    ground_height_at(frame.at(0).addr(), 0u);
    float S0_5 = guest::cpu()->s[0];
    frame->word_4 = std::bit_cast<u32>(S0_5);
    *player_target = frame->word_0;
    *player_target_a = frame->word_4;
    u32 r1_5 = frame->word_8;
    *player_target_b = r1_5;
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->s[0] = S0_5;
    return player_target_address;
}

}  // namespace d_00763c44
GUEST_EXPORT_FRAMED(0x00763c44, d_00763c44::player_target_point, 0x4010);  // pushes {r4, lr} first, as the original

// f_00763d34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When no slot is set (0x9506b0 = 0xff): marks +0x2f1f of the object of the source at 0x9506b4.
namespace d_00763d34 {

inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline constexpr guest::Function<0x006dfde8, u32(u32)> value_of_source;

void mark_source_object_2f1f() {
    if (*event_npc_mode != 0xffu) {  // (from the original)
        return;
    }
    u32 r0_1 = *event_npc_source;
    if (r0_1 == 0) {
        return;
    }
    u32 value_2 = value_of_source(r0_1);
    if (value_2 == 0) {
        return;
    }
    *gptr<u8>(value_2 + 0x2f1fu) = 1;  // (from the original)
}

}  // namespace d_00763d34
GUEST_EXPORT_FRAMED(0x00763d34, d_00763d34::mark_source_object_2f1f, 0x4010);  // pushes {r4, lr} first, as the original

// f_00763d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position of the source object at 0x9506b4 when no slot is set, else the object's own position.
namespace d_00763d80 {

struct __attribute__((packed)) Local_00763d80_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00763d80_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00763d80_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00763d80_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_00763d80_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00763d80_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00763d80_ea_2, word_4, 0x4);

struct __attribute__((packed)) Value {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Value, word_14, 0x14);
GUEST_OFFSET(Value, word_18, 0x18);
GUEST_OFFSET(Value, word_1c, 0x1c);

inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline constexpr guest::Function<0x006dfde8, u32(u32)> value_of_source;

void source_object_position(u32 slot_object, u32 ac_player_rec) {
    if (*event_npc_mode == 0xffu) {  // (from the original)
        u32 r0_1 = *event_npc_source;
        if (r0_1 != 0) {
            gptr<Value> value_2 = gptr<Value>(value_of_source(r0_1));
            if (value_2.addr() != 0) {
                u32 r1_1 = value_2->word_18;
                u32 r2_1 = value_2->word_14;
                *gptr<u32>(slot_object + 8u) = value_2->word_1c;
                *gptr<u32>(slot_object + 4u) = r1_1;
                *gptr<u32>(slot_object) = r2_1;
                guest::cpu()->r[1] = r1_1;
                return;
            }
            gptr<Local_00763d80_ea_1> ea_1 = gptr<Local_00763d80_ea_1>(ac_player_rec + 0x14u);  // (from the original)
            u32 r1_2 = ea_1->word_4;
            u32 r2_2 = ea_1->word_8;
            *gptr<u32>(slot_object) = ea_1->word_0;
            *gptr<u32>(slot_object + 4) = r1_2;
            *gptr<u32>(slot_object + 8) = r2_2;
            guest::cpu()->r[1] = r1_2;
            return;
        }
    }
    u32 r1_3 = *gptr<u32>(ac_player_rec + 0x1cu);  // (from the original)
    gptr<Local_00763d80_ea_2> ea_2 = gptr<Local_00763d80_ea_2>(ac_player_rec + 0x14u);  // (from the original)
    u32 r0_3 = ea_2->word_0;
    u32 r2_3 = ea_2->word_4;
    *gptr<u32>(slot_object + 8u) = r1_3;
    *gptr<u32>(slot_object) = r0_3;
    *gptr<u32>(slot_object + 4) = r2_3;
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_00763d80
GUEST_EXPORT_FRAMED(0x00763d80, d_00763d80::source_object_position, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00764500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The height of the seat in front of the player (on furniture of class 4 or 5).
namespace d_00764500 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x141];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x2];  // (not used here)
    u8 byte_174;
    u8 unknown_175[0x752];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(AcPlayer, half_2e, 0x2e);
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_174, 0x174);
GUEST_OFFSET(AcPlayer, byte_8c7, 0x8c7);

inline constexpr guest::Function<0x004e0cb0, u32(u32, u32)> room_grid_address;
inline constexpr guest::Function<0x004e0f68, u32(u32, u32, u32, u32)> Room__is_player_room;
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32)> RoomGrid__furniture_at_position;
inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32)> offset_on_circle;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> ground_height_at;
inline constexpr guest::Function<0x007500b4, u32(u32, u32, u32)> furniture_has_class_4_or_5;
inline constexpr guest::Function<0x00750894, u32(u32, u32, u32)> record_flag_bit_2;

struct __attribute__((packed)) Frame_00764500 {
    u8 unknown_0[0xc];  // (not read or written by name)
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00764500, float_c, 0xc);
GUEST_SIZE(Frame_00764500, 0x14);

u32 AcPlayer__find_seat_height(gptr<AcPlayer> ac_player, u32 r1_unused, u32 r2, float S0) {
    guest::StackFrameOf<Frame_00764500> frame;  // the original's stack frame
    u32 r1_1 = u32(ac_player->byte_171) >> 5u & 1u;
    if (r1_1 != 0) {
        u32 r0_1 = ac_player->byte_174;
        if ((r0_1 & 1u) != 0) {
            u32 r0_2 = Room__is_player_room(r0_1, r1_1, r2, guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            if (r0_2 != 0) {
                u32 r0_3 = u32(ac_player->byte_8c7) & 1u;
                if (r0_3 == 0) {
                    return r0_3;
                }
                u32 r5_1 = frame.at(8).addr();
                *frame.at<u16>(4) = ac_player->half_2e;
                u32 r2_1 = *frame.at<u32>(4);
                float S0_1 = 32.0f;
                guest::cpu()->s[0] = S0_1;
                offset_on_circle(r5_1, ac_player.addr() + 0x14u, r2_1);  // (from the original)
                u32 ground_height_2 = ground_height_at(r5_1, 0u);
                float S0_3 = guest::cpu()->s[0];
                frame->float_c = S0_3;
                guest::cpu()->s[0] = S0_3;
                u32 room_grid = room_grid_address(ground_height_2, guest::cpu()->r[1]);
                u32 r0_6 = RoomGrid__furniture_at_position(room_grid, frame.at(8).addr(), 1u);
                r1_1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                u32 r4_1 = r0_6;
                if (r0_6 != 0) {
                    r0_6 = record_flag_bit_2(r0_6, r1_1, guest::cpu()->r[2]);
                    r1_1 = guest::cpu()->r[1];
                    S0 = guest::cpu()->s[0];
                    if (r0_6 == 0) {
                        r0_6 = furniture_has_class_4_or_5(r4_1, r1_1, guest::cpu()->r[2]);
                        r1_1 = guest::cpu()->r[1];
                        S0 = guest::cpu()->s[0];
                        if (r0_6 == 0) {
                            return 1u;
                        }
                    }
                }
                guest::cpu()->s[0] = S0;
                u32 r0_7 = room_grid_address(r0_6, r1_1);
                u32 r0_8 = RoomGrid__furniture_at_position(r0_7, frame.at(8).addr(), 0u);
                r1_1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                if (r0_8 != 0) {
                    u32 r0_9 = record_flag_bit_2(r0_8, r1_1, 0u);
                    r1_1 = guest::cpu()->r[1];
                    S0 = guest::cpu()->s[0];
                    if (r0_9 == 0) {
                        u32 r0_10 = furniture_has_class_4_or_5(r0_8, r1_1, 0u);
                        r1_1 = guest::cpu()->r[1];
                        S0 = guest::cpu()->s[0];
                        if (r0_10 == 0) {
                            return 1u;
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    return 0u;
}

}  // namespace d_00764500
GUEST_EXPORT_FRAMED(0x00764500, d_00764500::AcPlayer__find_seat_height, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00764608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 004e40e4 with its second argument as the first too.
namespace d_00764608 {

inline constexpr guest::Function<0x004e40e4, u32(u32, u32, u32, u32)> Room__update_timers_veneer;

u32 call_004e40e4_with_r1(u32 r0_unused, u32 r1) {
    return Room__update_timers_veneer(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00764608
GUEST_EXPORT(0x00764608, d_00764608::call_004e40e4_with_r1);

// f_00764610: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Makes a request of kind 0x4a with a copy of the item.
namespace d_00764610 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x006d3158, u32(u32)> request_with_item_4a;

struct __attribute__((packed)) Frame_00764610 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00764610, word_0, 0x0);
GUEST_SIZE(Frame_00764610, 0x4);

void request_with_item_4a_copy(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00764610> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = frame.at(0).addr();
    Item__copy_b(r0_1, guest::cpu()->r[1]);
    request_with_item_4a(r0_1);
}

}  // namespace d_00764610
GUEST_EXPORT_FRAMED(0x00764610, d_00764610::request_with_item_4a_copy, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00764634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Makes a request of kind 0x4c with a copy of the item and a position.
namespace d_00764634 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x006d318c, u32(u32, u32)> request_with_item_and_position_4c;

struct __attribute__((packed)) Frame_00764634 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00764634, word_0, 0x0);
GUEST_SIZE(Frame_00764634, 0x4);

void request_with_item_and_position_4c_copy(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00764634> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = frame.at(0).addr();
    Item__copy_b(r0_1, r1);
    request_with_item_and_position_4c(r0_1, r2);
}

}  // namespace d_00764634
GUEST_EXPORT_FRAMED(0x00764634, d_00764634::request_with_item_and_position_4c_copy, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00764660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The point (at ground height) in front of the entrance of scene 0x5c, or of the object when there is none, shifted by
// (-40, 0, 128).
namespace d_00764660 {

struct __attribute__((packed)) Local_00764660_r1_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00764660_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_00764660_r1_1, float_4, 0x4);

struct __attribute__((packed)) Local_00764660_r2_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00764660_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_00764660_r2_1, float_4, 0x4);

inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> cell_position_of_id;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32)> ground_height_at;

struct __attribute__((packed)) Frame_00764660 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00764660, word_0, 0x0);
GUEST_SIZE(Frame_00764660, 0xc);

void scene_5c_entrance_point(gptr<Float3> arg0, u32 slot_object, u32 r2, float S0, float S1, float S2, float S3, float S4) {
    guest::StackFrameOf<Frame_00764660> frame;  // the original's stack frame
    u32 cell_position_2 = cell_position_of_id(frame.at(0).addr(), 0x5cu, r2, guest::cpu()->r[3]);  // (from the original)
    gptr<Local_00764660_r2_1> r2_1 = gptr<Local_00764660_r2_1>(guest::cpu()->r[2]);
    if (cell_position_2 == 0) {
        gptr<Local_00764660_r1_1> r1_1 = gptr<Local_00764660_r1_1>(slot_object + 0x14u);  // (from the original)
        float S0_1 = r1_1->float_0;
        float S1_1 = r1_1->float_4;
        u32 r1_2 = *gptr<u32>(slot_object + 0x1cu);  // (from the original)
        arg0->v[0] = S0_1;
        arg0->v[1] = S1_1;
        arg0->v[2] = std::bit_cast<float>(u32(r1_2));
    } else {
        r2_1 = gptr<Local_00764660_r2_1>(frame.at(4).addr());
        float S0_2 = r2_1->float_0;
        float S1_2 = r2_1->float_4;
        arg0->v[0] = std::bit_cast<float>(u32(frame->word_0));
        arg0->v[1] = S0_2;
        arg0->v[2] = S1_2;
    }
    float S4_1 = 0.5f;
    float S1_3 = 4.0f;
    float S3_1 = 16.0f;
    arg0->v[0] = arg0->v[0] - (32.0f + S3_1 * S4_1);
    float S2_1 = 32.0f;
    float S0_3 = arg0->v[2] + S2_1 * S1_3;
    arg0->v[2] = S0_3;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    ground_height_at(arg0.addr(), 0u, r2_1.addr());
    float S0_4 = guest::cpu()->s[0];
    arg0->v[1] = S0_4;
}

}  // namespace d_00764660
GUEST_EXPORT_FRAMED(0x00764660, d_00764660::scene_5c_entrance_point, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007648b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts effect `id` at the given position (a stack argument) for the player, attached to `target` when there is one,
// facing the player's direction; its angles are written to `angles` when asked.
namespace d_007648b8 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x143];  // (not used here)
    u8 byte_173;
};
GUEST_OFFSET(Player, half_2e, 0x2e);
GUEST_OFFSET(Player, byte_173, 0x173);

struct __attribute__((packed)) Target {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Target, word_c, 0xc);
GUEST_OFFSET(Target, word_10, 0x10);

struct __attribute__((packed)) Local_007648b8_r1_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_007648b8_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_007648b8_r1_1, float_4, 0x4);
GUEST_OFFSET(Local_007648b8_r1_1, float_8, 0x8);

struct __attribute__((packed)) Local_007648b8_r2_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_007648b8_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_007648b8_r2_1, float_4, 0x4);
GUEST_OFFSET(Local_007648b8_r2_1, float_8, 0x8);

inline constexpr u32 effect_spawn_context_address = 0x00ae5664u;
inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> EffectHandle__start;
inline constexpr guest::Function<0x002075d4, u32(u32, u32, u32, u32)> Effect__spawn;
inline constexpr guest::Function<0x002e6368, u32(u32, u32, u32, u32)> EffectHandle__kill;

struct __attribute__((packed)) Frame_007648b8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u8 unknown_12[0xe];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007648b8, word_0, 0x0);
GUEST_OFFSET(Frame_007648b8, word_4, 0x4);
GUEST_OFFSET(Frame_007648b8, word_8, 0x8);
GUEST_OFFSET(Frame_007648b8, half_c, 0xc);
GUEST_OFFSET(Frame_007648b8, half_e, 0xe);
GUEST_OFFSET(Frame_007648b8, half_10, 0x10);
GUEST_SIZE(Frame_007648b8, 0x20);

void play_player_effect(gptr<Player> player, gptr<Target> target, u32 angles, u32 id, float S0, float S1) {
    guest::StackFrameOf<Frame_007648b8> frame;  // the original's stack frame
    gptr<Local_007648b8_r1_1> r1_1 = gptr<Local_007648b8_r1_1>(*frame.at<u32>(0x38));  // (from the original)
    if ((u32(player->byte_173) >> 7) == 0) {
        float S0_1 = r1_1->float_0;
        float S1_1 = r1_1->float_4;
        float S2_1 = r1_1->float_8;
        gptr<Local_007648b8_r2_1> r2_1 = gptr<Local_007648b8_r2_1>(frame.at(0x14).addr());  // (from the original)
        r2_1->float_0 = S0_1;
        r2_1->float_4 = S1_1;
        r2_1->float_8 = S2_1;
        u32 r1_2 = player->half_2e;
        frame->half_c = 0;
        frame->half_e = u16(r1_2);
        frame->half_10 = 0;
        if (target.addr() != 0) {
            u32 r0_1 = target->word_c;
            if (r0_1 != 0) {
                u32 r1_3 = target->word_10;
                if (r1_3 == *gptr<u32>(r0_1 + 0xcu)) {  // (from the original)
                    guest::cpu()->s[0] = S0_1;
                    guest::cpu()->s[1] = S1_1;
                    guest::cpu()->s[2] = S2_1;
                    EffectHandle__kill(target.addr(), r1_3, r2_1.addr(), id);
                    S0_1 = guest::cpu()->s[0];
                    S1_1 = guest::cpu()->s[1];
                    S2_1 = guest::cpu()->s[2];
                }
            }
            frame->word_8 = 0;
            frame->word_0 = 0xae5664;  // (from the original)
            frame->word_4 = 1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            EffectHandle__start(target.addr(), id, frame.at(0x14).addr(), frame.at(0xc).addr());  // (from the original)
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
        } else {
            frame->word_4 = 0;
            frame->word_0 = 1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            Effect__spawn(id, frame.at(0x14).addr(), frame.at(0xc).addr(), effect_spawn_context_address);  // (from the original)
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
        }
        if (angles != 0) {
            *gptr<u16>(angles) = frame->half_c;
            *gptr<u16>(angles + 2u) = frame->half_e;
            *gptr<u16>(angles + 4u) = frame->half_10;
        }
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_007648b8
GUEST_EXPORT_FRAMED(0x007648b8, d_007648b8::play_player_effect, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00764af8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In an action: calls 00598464 at (x, z) with the kind of the slot player's worn item of class 7 (set B -> 1, 007680a0
// -> 2, else 0).
namespace d_00764af8 {

struct __attribute__((packed)) Object_00764af8_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00764af8_0, byte_171, 0x171);
GUEST_OFFSET(Object_00764af8_0, byte_1ac, 0x1ac);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x00598464, u32(u32, u32, u32, u32)> FieldItems__place_item;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x007680a0, u32(u32)> Item__is_id_334f_set;
inline constexpr guest::Function<0x007686e8, u32(u32)> Item__is_in_id_set_b;

void play_step_sound_for_worn_item_2(gptr<Object_00764af8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 item = 0;
    u32 r2_3 = 0;
    u32 r1_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r1_1 != 0) {
        u32 r0_1 = arg0->byte_1ac;
        u32 player_2 = player_of_slot_index(r0_1, r1_1, r2, r3);
        if (player_2 == 0) {
            item = empty_item_address;
        } else {
            item = slot_7_if_class_7(player_2 + 0xau);  // (from the original)
        }
        u32 r0_5 = Item__is_in_id_set_b(item);
        if (r0_5 == 0) {
            u32 r0_6 = Item__is_id_334f_set(item);
            r2_3 = r0_6 == 0 ? 0u : 2u;
        } else {
            r2_3 = 1u;
        }
        frame.release();
        FieldItems__place_item(r1, r2, r2_3, 0u);
        return;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00764af8
GUEST_EXPORT(0x00764af8, d_00764af8::play_step_sound_for_worn_item_2);

// f_00764b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005964ec when the object is in an action (bit 5 of +0x171).
namespace d_00764b74 {

struct __attribute__((packed)) Object_00764b74_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00764b74_0, byte_171, 0x171);

inline constexpr guest::Function<0x005964ec, u32(u32, u32, u32, u32)> FieldDrops__update_active;

void call_5964ec_in_action(gptr<Object_00764b74_0> arg0) {
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return;
    }
    FieldDrops__update_active(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00764b74
GUEST_EXPORT(0x00764b74, d_00764b74::call_5964ec_in_action);

// f_00764dc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In scenes with bit 0x20: whether the furniture item under the object is 0x2070, 0x2071 or 0x2072.
namespace d_00764dc8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x004e6200, u32(u32, u32)> room_furniture_item_at;

struct __attribute__((packed)) Frame_00764dc8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00764dc8, word_0, 0x0);
GUEST_SIZE(Frame_00764dc8, 0x4);

u32 furniture_under_is_2070_to_2072(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00764dc8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 scene = current_scene_id(r0, r1, guest::cpu()->r[2], r3);
    u32 scene_flagged = scene_has_flags(0x20u, scene);  // (from the original)
    if (scene_flagged == 0) {
        return scene_flagged;
    }
    room_furniture_item_at(frame.at(0).addr(), r0 + 0x14u);  // (from the original)
    u32 number_2 = Item__number(frame.at(0).addr());
    u32 zf_1 = number_2 - 0x2070u == 0;  // (from the original)
    if (!zf_1) {
        zf_1 = number_2 - 0x2070u == 1u;  // (from the original)
    }
    if (!zf_1) {
        zf_1 = number_2 - 0x2070u == 2u;  // (from the original)
    }
    return !(!zf_1);
}

}  // namespace d_00764dc8
GUEST_EXPORT_FRAMED(0x00764dc8, d_00764dc8::furniture_under_is_2070_to_2072, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076507c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the slot player's encyclopedia (+0x6c20) lists every fish (category 0x27); 0 when there is no player.
namespace d_0076507c {

struct __attribute__((packed)) Object_0076507c_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_0076507c_0, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x0076fd38, u32(u32, u32, u32, u32)> ItemSet__has_full_category;

u32 slot_player_has_full_fish_list(gptr<Object_0076507c_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_1ac;
    u32 player_2 = player_of_slot_index(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (player_2 == 0) {
        return player_2;
    }
    frame.release();
    return ItemSet__has_full_category(player_2 + 0x6c20u, 0x27u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0076507c
GUEST_EXPORT(0x0076507c, d_0076507c::slot_player_has_full_fish_list);

// f_007650ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005983ac with the cell (x, z) under a position.
namespace d_007650ac {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x005983ac, u32(u32, u32)> FieldDrops__add_low_ground;

struct __attribute__((packed)) Frame_007650ac {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007650ac, word_0, 0x0);
GUEST_OFFSET(Frame_007650ac, word_4, 0x4);
GUEST_SIZE(Frame_007650ac, 0xc);

u32 call_5983ac_at_cell_of(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<Frame_007650ac> frame;  // the original's stack frame
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r1, guest::cpu()->r[3]);
    u32 r0_3 = FieldDrops__add_low_ground(frame->word_0, frame->word_4);
    return r0_3;
}

}  // namespace d_007650ac
GUEST_EXPORT_FRAMED(0x007650ac, d_007650ac::call_5983ac_at_cell_of, 0x4000);  // pushes {lr} first, as the original

// f_007650d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of 00597c30 at the cell under a position, or of 00597678 when the first is negative.
namespace d_007650d4 {

struct __attribute__((packed)) Local_007650d4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007650d4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007650d4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007650d4_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007650d4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007650d4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007650d4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007650d4_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x00597678, u32(u32, u32)> FieldDrops__add_dig;
inline constexpr guest::Function<0x00597c30, u32(u32, u32)> FieldDrops__add_flagged_41;

struct __attribute__((packed)) Frame_007650d4 {
    u32 field_drops;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007650d4, field_drops, 0x0);
GUEST_OFFSET(Frame_007650d4, word_4, 0x4);
GUEST_SIZE(Frame_007650d4, 0x18);

u32 value_at_cell_of_position(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<Frame_007650d4> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_007650d4_ea_1> ea_1 = gptr<Local_007650d4_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r1, guest::cpu()->r[3]);
    u32 r4_1 = frame->word_4;
    u32 field_drops = frame->field_drops;
    u32 r0_2 = FieldDrops__add_flagged_41(field_drops, r4_1);
    if (s32(r0_2) < 0) {
        r0_2 = FieldDrops__add_dig(field_drops, r4_1);
    }
    gptr<Local_007650d4_ea_2> ea_2 = gptr<Local_007650d4_ea_2>(frame.at(0xc).addr());  // (from the original)
    u32 r4_2 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    return r0_2;
}

}  // namespace d_007650d4
GUEST_EXPORT(0x007650d4, d_007650d4::value_at_cell_of_position);

// f_0076511c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Makes a request of kind 0x4b with a copy of the item.
namespace d_0076511c {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x006d34e8, u32(u32)> request_with_item_4b;

struct __attribute__((packed)) Frame_0076511c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076511c, word_0, 0x0);
GUEST_SIZE(Frame_0076511c, 0x4);

void request_with_item_4b_copy(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076511c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = frame.at(0).addr();
    Item__copy_b(r0_1, guest::cpu()->r[1]);
    request_with_item_4b(r0_1);
}

}  // namespace d_0076511c
GUEST_EXPORT_FRAMED(0x0076511c, d_0076511c::request_with_item_4b_copy, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00765140: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Makes a request of kind 0x49 with a copy of the item.
namespace d_00765140 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x006d31e4, u32(u32)> request_with_item_49;

struct __attribute__((packed)) Frame_00765140 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00765140, word_0, 0x0);
GUEST_SIZE(Frame_00765140, 0x4);

void request_with_item_49_copy(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00765140> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = frame.at(0).addr();
    Item__copy_b(r0_1, guest::cpu()->r[1]);
    request_with_item_49(r0_1);
}

}  // namespace d_00765140
GUEST_EXPORT_FRAMED(0x00765140, d_00765140::request_with_item_49_copy, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00765370: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls touch_furniture_at_position_plus_x with the position on the stack.
namespace d_00765370 {

struct __attribute__((packed)) Local_00765370_ea_1 {
    u32 word_0;
    u32 position;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00765370_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00765370_ea_1, position, 0x4);
GUEST_OFFSET(Local_00765370_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00765370_ea_1, word_c, 0xc);

inline constexpr guest::Function<0x004e3f8c, u32(u32, u32, u32, u32)> touch_furniture_at_position_plus_x;

struct __attribute__((packed)) Frame_00765370 {
    u8 unknown_0[0x1c];  // (not read or written by name)
    u32 word_1c;
};
GUEST_OFFSET(Frame_00765370, word_1c, 0x1c);
GUEST_SIZE(Frame_00765370, 0x20);

u32 touch_furniture_plus_x_wrapper(u32 r0, u32 position, u32 r2) {
    guest::StackFrameOf<Frame_00765370> frame;  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00765370_ea_1> ea_1 = gptr<Local_00765370_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->position = position;
    ea_1->word_8 = r2;
    ea_1->word_c = r14;
    u32 r0_2 = touch_furniture_at_position_plus_x(frame.at(0).addr(), position, frame.at(0x18).addr(), guest::cpu()->r[3]);  // (from the original)
    u32 v_1 = frame->word_1c;
    return r0_2;
}

}  // namespace d_00765370
GUEST_EXPORT(0x00765370, d_00765370::touch_furniture_plus_x_wrapper);

// f_0076538c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether furniture stands 32 units in front of the object, facing it (within 0x2800 units of angle); gives its cell,
// the corner position and the angle to it.
namespace d_0076538c {

struct __attribute__((packed)) Object_0076538c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0076538c_1, word_0, 0x0);

struct __attribute__((packed)) Object_0076538c_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_0076538c_2, word_0, 0x0);

inline constexpr guest::Function<0x0014fea4, u32(u32, u32)> import_thunk_14fea4;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x004e0cb0, u32(u32)> room_grid_address;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> RoomGrid__furniture_at;
inline constexpr guest::Function<0x0056b06c, u32(u32, u32)> half_distance;
inline constexpr guest::Function<0x0057ba08, u32(u32, u32, u32)> angle_between_points;
inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> offset_on_circle;
inline constexpr guest::Function<0x006a5e44, u32(u32, u32)> cell_corner_of_position;
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> cell_corner;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> ground_height_at;

struct __attribute__((packed)) Frame_0076538c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
    float float_1c;
    u8 unknown_20[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0076538c, word_0, 0x0);
GUEST_OFFSET(Frame_0076538c, word_4, 0x4);
GUEST_OFFSET(Frame_0076538c, word_c, 0xc);
GUEST_OFFSET(Frame_0076538c, float_1c, 0x1c);
GUEST_SIZE(Frame_0076538c, 0x34);

u32 SlotObject__furniture_in_front(gptr<SlotObject> slot_object, gptr<Object_0076538c_1> x, gptr<Object_0076538c_2> z, gptr<Float3> position) {
    guest::StackFrameOf<Frame_0076538c> frame;  // the original's stack frame
    u32 r9_1 = frame.at(0x18).addr();  // (from the original)
    *frame.at<u16>(0x10) = slot_object->angles[1];  // (from the original)
    u32 r5_1 = *frame.at<u32>(0x50);  // (from the original)
    u32 r2_1 = *frame.at<u32>(0x10);  // (from the original)
    float S0_1 = 32.0f;
    guest::cpu()->s[0] = S0_1;
    offset_on_circle(r9_1, slot_object.addr() + 0x14u, r2_1, position.addr());  // (from the original)
    ground_height_at(r9_1, 0u);
    float S0_3 = guest::cpu()->s[0];
    frame->float_1c = S0_3;
    guest::cpu()->s[0] = S0_3;
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), frame.at(0x18).addr());  // (from the original)
    u32 r0_3 = import_thunk_14fea4(frame->word_0, frame->word_4);
    if (r0_3 != 0) {
        u32 grid = room_grid_address(r0_3);
        r0_3 = RoomGrid__furniture_at(grid, frame->word_0, frame->word_4, 0u);
        if (r0_3 != 0) {
            u32 r1_6 = *gptr<u16>(r0_3 + 0x2eu);  // (from the original)
            *frame.at<u16>(8) = u16(r1_6);
            u32 r0_6 = angle_between_points(r0_3 + 0x14u, slot_object.addr() + 0x14u, guest::cpu()->r[2]);  // (from the original)
            u32 r0_7 = s16(*frame.at<u16>(8));
            u32 r0_8 = half_distance(r0_7, r0_6);
            if (s32(r0_8) >= 0x2800) {  // (from the original)
                r0_3 = 0u;
            } else {
                cell_corner_of_position(frame.at(8).addr(), slot_object.addr() + 0x14u);  // (from the original)
                frame->word_c = std::bit_cast<u32>(slot_object->position.v[1]);
                u32 r1_9 = frame->word_0;
                u32 r2_10 = frame->word_4;
                cell_corner(frame.at(0x24).addr(), r1_9, r2_10);  // (from the original)
                x->word_0 = frame->word_0;
                z->word_0 = frame->word_4;
                position->v[0] = std::bit_cast<float>(u32(*frame.at<u32>(8)));
                position->v[1] = std::bit_cast<float>(u32(frame->word_c));
                position->v[2] = std::bit_cast<float>(u32(*frame.at<u32>(0x10)));  // (from the original)
                u32 r0_12 = angle_between_points(frame.at(8).addr(), frame.at(0x24).addr(), r2_10);  // (from the original)
                *gptr<u16>(r5_1) = u16(r0_12);
                r0_3 = 1u;
            }
        }
    }
    return r0_3;
}

}  // namespace d_0076538c
GUEST_EXPORT_FRAMED(0x0076538c, d_0076538c::SlotObject__furniture_in_front, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_007654a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the held item (+0x5e4) is 0x3726: tells the NPC found with the guest tag about it.
namespace d_007654a8 {

struct __attribute__((packed)) Local_007654a8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_007654a8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007654a8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007654a8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_007654a8_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_007654a8_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_007654a8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007654a8_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_007654a8_ea_2, word_c, 0xc);

inline constexpr u32 npc_manager_address = 0x00950148u;
inline guest::global<u32, 0x00950148> npc_manager;
inline constexpr guest::Function<0x0014feac, u32(u32, u32)> import_thunk_14feac;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x00695ed8, u32(u32, u32)> BsNpcMgr__SearchFunction__SearchFunction_00695ed8;
inline constexpr guest::Function<0x00751058, u32(u32, u32, u32, u32)> member_address_0x5e4_;

u32 notify_guest_of_held_item_3726(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    gptr<Local_007654a8_ea_1> ea_1 = gptr<Local_007654a8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    u32 r0_1 = member_address_0x5e4_(r1, r1, guest::cpu()->r[2], r3);
    Item__copy_b(frame.at(0).addr(), r0_1);
    u32 number_2 = Item__number(frame.at(0).addr());
    u32 r1_2 = number_2 - 0x3726u;  // (from the original)
    if (r1_2 == 0) {
        u32 r0_5 = *npc_manager;
        if (r0_5 != 0) {
            u32 r0_6 = BsNpcMgr__SearchFunction__SearchFunction_00695ed8(r0_5, 0x765514u);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            if (r0_6 != 0) {
                import_thunk_14feac(r0_6, r1);
                r1_2 = guest::cpu()->r[1];
            }
        }
    }
    gptr<Local_007654a8_ea_2> ea_2 = gptr<Local_007654a8_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_4;
    u32 r5_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return frame.at(0).addr();
}

}  // namespace d_007654a8
GUEST_EXPORT(0x007654a8, d_007654a8::notify_guest_of_held_item_3726);

// f_00765518: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the slot player's encyclopedia (+0x6c20) lists every insect (category 0x24); 0 when there is no player.
namespace d_00765518 {

struct __attribute__((packed)) Object_00765518_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00765518_0, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x0076fd38, u32(u32, u32, u32, u32)> ItemSet__has_full_category;

u32 slot_player_has_full_insect_list(gptr<Object_00765518_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_1ac;
    u32 player_2 = player_of_slot_index(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (player_2 == 0) {
        return player_2;
    }
    frame.release();
    return ItemSet__has_full_category(player_2 + 0x6c20u, 0x24u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00765518
GUEST_EXPORT(0x00765518, d_00765518::slot_player_has_full_insect_list);

// f_00765548: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls touch_furniture_at_position_minus_x with the position on the stack.
namespace d_00765548 {

struct __attribute__((packed)) Local_00765548_ea_1 {
    u32 word_0;
    u32 position;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00765548_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00765548_ea_1, position, 0x4);
GUEST_OFFSET(Local_00765548_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00765548_ea_1, word_c, 0xc);

inline constexpr guest::Function<0x004e440c, u32(u32, u32, u32, u32)> touch_furniture_at_position_minus_x;

struct __attribute__((packed)) Frame_00765548 {
    u8 unknown_0[0x1c];  // (not read or written by name)
    u32 word_1c;
};
GUEST_OFFSET(Frame_00765548, word_1c, 0x1c);
GUEST_SIZE(Frame_00765548, 0x20);

u32 touch_furniture_minus_x_wrapper(u32 r0, u32 position, u32 r2) {
    guest::StackFrameOf<Frame_00765548> frame;  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00765548_ea_1> ea_1 = gptr<Local_00765548_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->position = position;
    ea_1->word_8 = r2;
    ea_1->word_c = r14;
    u32 r0_2 = touch_furniture_at_position_minus_x(frame.at(0).addr(), position, frame.at(0x18).addr(), guest::cpu()->r[3]);  // (from the original)
    u32 v_1 = frame->word_1c;
    return r0_2;
}

}  // namespace d_00765548
GUEST_EXPORT(0x00765548, d_00765548::touch_furniture_minus_x_wrapper);

// f_00765564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The player index of the object's slot (+0x1ac): mapped through the slot table when it has a player, else the slot &
// 3.
namespace d_00765564 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(SlotObject, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x005c12d0, u32(u32)> player_slot_or_first_free;
inline constexpr guest::Function<0x005c91a0, u32(u32)> slot_has_player;

u32 SlotObject__player_index(gptr<SlotObject> slot_object) {
    u32 r0_1 = slot_object->byte_1ac;
    u32 r0_2 = slot_has_player(r0_1);
    u32 r0_3 = slot_object->byte_1ac;
    if (r0_2 == 0) {
        return r0_3 & 3u;
    }
    u32 r0_5 = player_slot_or_first_free(r0_3);
    return r0_5 & 0xffu;  // (from the original)
}

}  // namespace d_00765564
GUEST_EXPORT_FRAMED(0x00765564, d_00765564::SlotObject__player_index, 0x4010);  // pushes {r4, lr} first, as the original

// f_00765590: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object, in an action, may act at a position (its own by default): only in scenes with bits 0x200,
// 0x10000000 or 0x20, not held or in action 0x82, and 006c6b84 allows it.
namespace d_00765590 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x37];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x71d];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(SlotObject, byte_171, 0x171);
GUEST_OFFSET(SlotObject, byte_1a9, 0x1a9);
GUEST_OFFSET(SlotObject, byte_8c7, 0x8c7);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x006c6b84, u32(u32, u32)> ground_kind_at;

u32 SlotObject__can_use_here(gptr<SlotObject> slot_object, u32 r1) {
    u32 r0_1 = u32(slot_object->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        u32 scene = current_scene_id(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 scene_flagged = scene_has_flags(0x200u, scene);  // (from the original)
        if (scene_flagged == 0) {
            u32 scene_2 = current_scene_id(scene_flagged, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 scene_flagged_2 = scene_has_flags(0x10000000u, scene_2);  // (from the original)
            if (scene_flagged_2 == 0) {
                u32 scene_3 = current_scene_id(scene_flagged_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r0_1 = scene_has_flags(0x20u, scene_3);  // (from the original)
                if (r0_1 == 0) {
                    return r0_1;
                }
            }
        }
        if ((u32(slot_object->byte_8c7) & 1u) != 0 || slot_object->byte_1a9 == 0x82u) {  // (from the original)
            return 0u;
        }
        r0_1 = ground_kind_at(r1 == 0 ? slot_object.addr() + 0x14u : r1, 0u);  // (from the original)
        if (r0_1 != 0) {
            r0_1 = 1u;
        }
    }
    return r0_1;
}

}  // namespace d_00765590
GUEST_EXPORT_FRAMED(0x00765590, d_00765590::SlotObject__can_use_here, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00765634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the slot player's encyclopedia (+0x6c20) lists every sea creature (category 0x28); 0 when there is no
// player.
namespace d_00765634 {

struct __attribute__((packed)) Object_00765634_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00765634_0, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x0076fd38, u32(u32, u32, u32, u32)> ItemSet__has_full_category;

u32 slot_player_has_full_sea_creature_list(gptr<Object_00765634_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_1ac;
    u32 player_2 = player_of_slot_index(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (player_2 == 0) {
        return player_2;
    }
    frame.release();
    return ItemSet__has_full_category(player_2 + 0x6c20u, 0x28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00765634
GUEST_EXPORT(0x00765634, d_00765634::slot_player_has_full_sea_creature_list);

// f_007656b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 004e40e8 with its second argument as the first too.
namespace d_007656b0 {

inline constexpr guest::Function<0x004e40e8, u32(u32, u32, u32, u32)> Room__update_timers;

u32 call_004e40e8_with_r1_2(u32 r0_unused, u32 r1) {
    return Room__update_timers(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_007656b0
GUEST_EXPORT(0x007656b0, d_007656b0::call_004e40e8_with_r1_2);

// f_007656b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The point of the object's hand (its bone matrix applied to the player's offset), or the source object's position
// when it has no model.
namespace d_007656b8 {

struct __attribute__((packed)) Local_007656b8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007656b8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007656b8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007656b8_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;
inline constexpr guest::Function<0x0067e9e8, u32(u32, u32, u32, u32)> EventNpc__position;
inline constexpr guest::Function<0x0068752c, u32(u32, u32)> npc_source_position;
inline constexpr guest::Function<0x00763d80, u32(u32, u32)> source_object_position;
inline constexpr guest::Function<0x00765564, u32(u32)> SlotObject__player_index;

void SlotObject__hand_position(gptr<Float3> slot_object, u32 ac_player_rec, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4c);  // the original's stack frame
    u32 r0_2 = EventNpc__position(frame.at(0).addr(), ac_player_rec, r2, r3);
    if (r0_2 != 0) {
        u32 r0_3 = SlotObject__player_index(ac_player_rec);
        npc_source_position(frame.at(0x3c).addr(), r0_3);  // (from the original)
        apply_matrix(frame.at(0x30).addr(), frame.at(0).addr(), frame.at(0x3c).addr());  // (from the original)
        gptr<Local_007656b8_ea_1> ea_1 = gptr<Local_007656b8_ea_1>(frame.at(0x30).addr());  // (from the original)
        u32 r1_3 = ea_1->word_4;
        u32 r2_4 = ea_1->word_8;
        slot_object->v[0] = std::bit_cast<float>(u32(ea_1->word_0));
        slot_object->v[1] = std::bit_cast<float>(u32(r1_3));
        slot_object->v[2] = std::bit_cast<float>(u32(r2_4));
        guest::cpu()->r[1] = r1_3;
        return;
    }
    source_object_position(slot_object.addr(), ac_player_rec);
}

}  // namespace d_007656b8
GUEST_EXPORT_FRAMED(0x007656b8, d_007656b8::SlotObject__hand_position, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00765724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A point to the side of the object (2 units at 90 degrees, then 17 ahead), raised by 11.2, with the constant radius
// and the remaining height.
namespace d_00765724 {

inline constexpr u32 point_beside_object_guard_address = 0x0094df68u;
inline guest::global<u32, 0x00886a68> global_00886a68;
inline guest::global<u32, 0x0094df68> point_beside_object_guard;
inline guest::global<u32, 0x0094df6c> point_beside_object_value;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> point_on_circle;
inline constexpr guest::Function<0x007622f0, u32(u32, u32, u32, u32)> point_around_object;

struct __attribute__((packed)) Frame_00765724 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00765724, word_0, 0x0);
GUEST_OFFSET(Frame_00765724, word_4, 0x4);
GUEST_OFFSET(Frame_00765724, word_8, 0x8);
GUEST_SIZE(Frame_00765724, 0x14);

void point_beside_object(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_00765724> frame;  // the original's stack frame
    if ((*point_beside_object_guard & 1u) == 0) {
        u32 first_time = static_guard_acquire(point_beside_object_guard_address, r1, r2, r3);
        S1 = guest::cpu()->s[1];
        if (first_time != 0) {
            S1 = 0.35f;
            *point_beside_object_value = std::bit_cast<u32>(32.0f * S1);
        }
    }
    *frame.at<u16>(0xc) = u16(u32(*gptr<u16>(r0 + 0x2eu)) - 0x4000u);  // (from the original)
    u32 r2_1 = *frame.at<u32>(0xc);  // (from the original)
    float S0_1 = 2.0f;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1;
    point_around_object(r0, frame.at(0).addr(), r2_1, 1u);
    u32 r1_2 = frame.at(0).addr();
    *frame.at<u16>(0xc) = *gptr<u16>(r0 + 0x2eu);  // (from the original)
    u32 r2_2 = *frame.at<u32>(0xc);  // (from the original)
    float S0_2 = 17.0f;
    guest::cpu()->s[0] = S0_2;
    point_on_circle(r1_2, r1_2, r2_2, 1u);
    float S0_3 = std::bit_cast<float>(*point_beside_object_value);
    frame->word_4 = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 0x18u)) + S0_3);  // (from the original)
    *gptr<u32>(r1) = frame->word_0;
    *gptr<u32>(r1 + 4u) = frame->word_4;
    *gptr<u32>(r1 + 8u) = frame->word_8;
    *gptr<u32>(r2) = *global_00886a68;
    float S1_2 = 32.0f;
    float S0_4 = S1_2 - S0_3;
    *gptr<u32>(r3) = std::bit_cast<u32>(S0_4);
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_00765724
GUEST_EXPORT_FRAMED(0x00765724, d_00765724::point_beside_object, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00765938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position of the item in the object's hand (by the player's offset table), or the constant point when it has no
// model.
namespace d_00765938 {

struct __attribute__((packed)) Local_00765938_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00765938_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00765938_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00765938_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_00765938_r0_5 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00765938_r0_5, float_0, 0x0);
GUEST_OFFSET(Local_00765938_r0_5, float_4, 0x4);
GUEST_OFFSET(Local_00765938_r0_5, float_8, 0x8);

inline constexpr u32 origin_x_address = 0x00ae5658u;
inline guest::global<u32, 0x00886b1c> global_00886b1c;
inline guest::global<u32, 0x00886b20> global_00886b20;
inline guest::global<u32, 0x00886b34> global_00886b34;
inline guest::global<u32, 0x00886b38> global_00886b38;
inline guest::global<u32, 0x00ae5658> origin_x;
inline guest::global<u32, 0x00ae565c> origin_y;
inline guest::global<u32, 0x00ae5660> origin_z;
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;
inline constexpr guest::Function<0x0067e9e8, u32(u32, u32, u32, u32)> EventNpc__position;
inline constexpr guest::Function<0x00765564, u32(u32)> SlotObject__player_index;
inline constexpr guest::Function<0x007656b8, u32(u32, u32, u32)> SlotObject__hand_position;

struct __attribute__((packed)) Frame_00765938 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not read or written by name)
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x3c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00765938, word_0, 0x0);
GUEST_OFFSET(Frame_00765938, word_4, 0x4);
GUEST_OFFSET(Frame_00765938, word_8, 0x8);
GUEST_OFFSET(Frame_00765938, word_c, 0xc);
GUEST_OFFSET(Frame_00765938, word_20, 0x20);
GUEST_OFFSET(Frame_00765938, word_24, 0x24);
GUEST_OFFSET(Frame_00765938, word_28, 0x28);
GUEST_OFFSET(Frame_00765938, word_2c, 0x2c);
GUEST_SIZE(Frame_00765938, 0x6c);

void SlotObject__held_item_position(u32 slot_object, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_00765938> frame;  // the original's stack frame
    u32 r0_2 = EventNpc__position(frame.at(0x30).addr(), r1, r2, r3);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = SlotObject__player_index(r1);
        frame->word_20 = 0;
        frame->word_24 = 0;
        frame->word_28 = 0;
        frame->word_2c = 0;
        u32 r0_4 = r0_3 & 3u;
        frame->word_20 = *global_00886b1c;
        u32 r2_2 = *global_00886b34;
        frame->word_0 = 0;
        frame->word_4 = 0;
        frame->word_8 = 0;
        frame->word_c = 0;
        frame->word_28 = r2_2;
        u32 r2_3 = frame.at(0x20).addr() + (r0_4 << 2);  // (from the original)
        frame->word_0 = *global_00886b20;
        frame->word_8 = *global_00886b38;
        float S0_2 = std::bit_cast<float>(*gptr<u32>(r2_3));
        float S2_2 = std::bit_cast<float>(gptr<u32>(frame.at(0).addr())[r0_4]);
        if (vcvt_sz_f(S0_2) == 0) {
            float S1_2 = std::bit_cast<float>(vcvt_sz_f(S2_2));
            if (std::bit_cast<u32>(S1_2) == 0) {
                guest::cpu()->s[0] = S0_2;
                guest::cpu()->s[1] = S1_2;
                guest::cpu()->s[2] = S2_2;
                SlotObject__hand_position(slot_object, r1, r2_3);
                return;
            }
        }
        float S1_4 = 0.0f;
        gptr<Local_00765938_r0_5> r0_5 = gptr<Local_00765938_r0_5>(frame.at(0x60).addr());  // (from the original)
        r0_5->float_0 = S0_2;
        r0_5->float_4 = S1_4;
        r0_5->float_8 = S2_2;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_4;
        apply_matrix(frame.at(0x10).addr(), frame.at(0x30).addr(), r0_5.addr());  // (from the original)
        gptr<Local_00765938_ea_1> ea_1 = gptr<Local_00765938_ea_1>(frame.at(0x10).addr());  // (from the original)
        u32 r1_3 = ea_1->word_4;
        u32 r2_4 = ea_1->word_8;
        *gptr<u32>(slot_object) = ea_1->word_0;
        *gptr<u32>(slot_object + 4) = r1_3;
        *gptr<u32>(slot_object + 8) = r2_4;
        return;
    }
    u32 r1_4 = *origin_x;
    u32 r2_5 = *origin_y;
    *gptr<u32>(slot_object + 8u) = *origin_z;
    *gptr<u32>(slot_object) = r1_4;
    *gptr<u32>(slot_object + 4) = r2_5;
}

}  // namespace d_00765938
GUEST_EXPORT_FRAMED(0x00765938, d_00765938::SlotObject__held_item_position, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00765aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the spot (004e5288) a kind-dependent distance behind a position at ground height (the position itself when
// bit 1 of +0x8c7 is set).
namespace d_00765aac {

struct __attribute__((packed)) Object_00765aac_0 {
    u8 unknown_0[0x8c7];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object_00765aac_0, byte_8c7, 0x8c7);

struct __attribute__((packed)) Object_00765aac_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00765aac_1, word_0, 0x0);
GUEST_OFFSET(Object_00765aac_1, word_4, 0x4);
GUEST_OFFSET(Object_00765aac_1, word_8, 0x8);

inline constexpr guest::Function<0x004e5288, u32(u32, u32, u32, u32)> RoomGrid__find_free_cell;
inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32)> offset_on_circle;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32)> ground_height_at;
inline constexpr guest::Function<0x006e56a4, u32(u32, u32, u32, u32)> kind_float;

struct __attribute__((packed)) Frame_00765aac {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00765aac, word_0, 0x0);
GUEST_OFFSET(Frame_00765aac, word_4, 0x4);
GUEST_OFFSET(Frame_00765aac, word_8, 0x8);
GUEST_SIZE(Frame_00765aac, 0x10);

u32 check_spot_behind_position(gptr<Object_00765aac_0> arg0, gptr<Object_00765aac_1> arg1, u32 r2, float S0) {
    guest::StackFrameOf<Frame_00765aac> frame;  // the original's stack frame
    u32 r2_1 = arg1->word_0;
    u32 r3_1 = arg1->word_4;
    u32 r12_1 = arg1->word_8;
    frame->word_0 = r2_1;
    frame->word_4 = r3_1;
    frame->word_8 = r12_1;
    u32 r0_1 = u32(arg0->byte_8c7) >> 1u & 1u;
    if (r0_1 == 0) {
        u32 r6_1 = frame.at(0).addr();
        kind_float(r0_1, arg1.addr(), r2_1, r3_1);
        float S0_1 = guest::cpu()->s[0];
        float S0_2 = -S0_1;
        guest::cpu()->s[0] = S0_2;
        offset_on_circle(r6_1, arg1.addr(), r2);
        r2_1 = guest::cpu()->r[2];
        ground_height_at(r6_1, 0u, r2_1);
        r3_1 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        frame->word_4 = std::bit_cast<u32>(S0);
    }
    guest::cpu()->s[0] = S0;
    u32 free_cell_2 = RoomGrid__find_free_cell(frame.at(0).addr(), r2, r2_1, r3_1);
    return free_cell_2;
}

}  // namespace d_00765aac
GUEST_EXPORT_FRAMED(0x00765aac, d_00765aac::check_spot_behind_position, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00765cec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the spot (004e5570) a kind-dependent distance behind a position at ground height (the position itself when
// bit 1 of +0x8c7 is set).
namespace d_00765cec {

struct __attribute__((packed)) Object_00765cec_0 {
    u8 unknown_0[0x8c7];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object_00765cec_0, byte_8c7, 0x8c7);

struct __attribute__((packed)) Object_00765cec_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00765cec_1, word_0, 0x0);
GUEST_OFFSET(Object_00765cec_1, word_4, 0x4);
GUEST_OFFSET(Object_00765cec_1, word_8, 0x8);

inline constexpr guest::Function<0x004e5570, u32(u32, u32, u32, u32)> RoomGrid__find_free_cell_b;
inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32)> offset_on_circle;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32)> ground_height_at;
inline constexpr guest::Function<0x006e56a4, u32(u32, u32, u32, u32)> kind_float;

struct __attribute__((packed)) Frame_00765cec {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00765cec, word_0, 0x0);
GUEST_OFFSET(Frame_00765cec, word_4, 0x4);
GUEST_OFFSET(Frame_00765cec, word_8, 0x8);
GUEST_SIZE(Frame_00765cec, 0x10);

u32 check_spot_behind_position_2(gptr<Object_00765cec_0> arg0, gptr<Object_00765cec_1> arg1, u32 r2, float S0) {
    guest::StackFrameOf<Frame_00765cec> frame;  // the original's stack frame
    u32 r2_1 = arg1->word_0;
    u32 r3_1 = arg1->word_4;
    u32 r12_1 = arg1->word_8;
    frame->word_0 = r2_1;
    frame->word_4 = r3_1;
    frame->word_8 = r12_1;
    u32 r0_1 = u32(arg0->byte_8c7) >> 1u & 1u;
    if (r0_1 == 0) {
        u32 r6_1 = frame.at(0).addr();
        kind_float(r0_1, arg1.addr(), r2_1, r3_1);
        float S0_1 = guest::cpu()->s[0];
        float S0_2 = -S0_1;
        guest::cpu()->s[0] = S0_2;
        offset_on_circle(r6_1, arg1.addr(), r2);
        r2_1 = guest::cpu()->r[2];
        ground_height_at(r6_1, 0u, r2_1);
        r3_1 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        frame->word_4 = std::bit_cast<u32>(S0);
    }
    guest::cpu()->s[0] = S0;
    u32 r0_3 = RoomGrid__find_free_cell_b(frame.at(0).addr(), r2, r2_1, r3_1);
    return r0_3;
}

}  // namespace d_00765cec
GUEST_EXPORT_FRAMED(0x00765cec, d_00765cec::check_spot_behind_position_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00765d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The spot of the object's player in front of the entrance of scene 0x5c (shifted by the player's offset from the
// table), at ground height.
namespace d_00765d54 {

inline guest::global<u32, 0x00886b10> global_00886b10;
inline guest::global<u32, 0x00886b24> global_00886b24;
inline guest::global<u32, 0x00886b28> global_00886b28;
inline guest::global<u32, 0x00886b3c> global_00886b3c;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> ground_height_at;
inline constexpr guest::Function<0x00764660, u32(u32, u32)> scene_5c_entrance_point;
inline constexpr guest::Function<0x00765564, u32(u32, u32, u32, u32)> SlotObject__player_index;

struct __attribute__((packed)) Frame_00765d54 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_00765d54, word_0, 0x0);
GUEST_OFFSET(Frame_00765d54, word_4, 0x4);
GUEST_OFFSET(Frame_00765d54, word_8, 0x8);
GUEST_OFFSET(Frame_00765d54, word_c, 0xc);
GUEST_SIZE(Frame_00765d54, 0x10);

void scene_5c_player_spot(gptr<Float3> arg0, u32 slot_object, float S0, float S1) {
    guest::StackFrameOf<Frame_00765d54> frame;  // the original's stack frame
    u32 r0_1 = SlotObject__player_index(slot_object, slot_object, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = *global_00886b10;
    frame->word_4 = *global_00886b24;
    frame->word_8 = *global_00886b28;
    frame->word_c = *global_00886b3c;
    scene_5c_entrance_point(arg0.addr(), slot_object);
    float S0_2 = std::bit_cast<float>(gptr<u32>(frame.at(0).addr())[r0_1 & 3u]);
    arg0->v[0] = arg0->v[0] + S0_2;
    float S1_2 = arg0->v[2];
    float S0_3 = S1_2 + S0_2;
    arg0->v[2] = S0_3;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    ground_height_at(arg0.addr(), 0u);
    float S0_4 = guest::cpu()->s[0];
    arg0->v[1] = S0_4;
    guest::cpu()->s[0] = S0_4;
}

}  // namespace d_00765d54
GUEST_EXPORT_FRAMED(0x00765d54, d_00765d54::scene_5c_player_spot, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00765e04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item the object holds (from its model, +0x1b4), or the empty item while bit 1 of +0x172 is set.
namespace d_00765e04 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x172];  // (not used here)
    u8 byte_172;
};
GUEST_OFFSET(SlotObject, byte_172, 0x172);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32, u32)> PlayerModel__hand_matrix;

u32 SlotObject__held_item(gptr<SlotObject> slot_object) {
    u32 r1_1 = u32(slot_object->byte_172) >> 1u & 1u;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return empty_item_address;
    }
    return PlayerModel__hand_matrix(slot_object.addr() + 0x1b4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00765e04
GUEST_EXPORT(0x00765e04, d_00765e04::SlotObject__held_item);

// f_00765e28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object belongs to this console: through the main slot in an action, else by its slot (+0x1ac).
namespace d_00765e28 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(SlotObject, byte_171, 0x171);
GUEST_OFFSET(SlotObject, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x005c2c80, u32(u32, u32)> main_slot_value_is_local;

u32 SlotObject__is_local(gptr<SlotObject> slot_object) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = u32(slot_object->byte_171) >> 5u & 1u;
    if (r1_1 != 0) {
        frame.release();
        return main_slot_value_is_local(slot_object.addr(), r1_1);
    }
    u32 r0_1 = slot_object->byte_1ac;
    u32 r0_2 = player_slot_byte(r0_1, r1_1);
    u32 r0_3 = is_local_slot(r0_2);
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_00765e28
GUEST_EXPORT(0x00765e28, d_00765e28::SlotObject__is_local);

// f_00765e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The camera's scale (at 0x950874+0x50) for one of the four axis angles (0x8000, 0xc000, 0, 0x4000), 1.0 for others
// and 0.0 without a camera.
namespace d_00765e64 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

u32 camera_scale_for_angle(u32 r0_unused, u32 r1_unused, u32 r2, float S0) {
    u32 r0 = 0;
    u32 r1 = 0;
    for (;;) {
        r1 = r2;
        u32 r0_1 = *camera_controller;
        if (r0_1 == 0) {
            float S0_5 = 0.0f;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_5;
            return r0_1;
        }
        r0 = r0_1 + 0x50u;  // (from the original)
        if (!1) {
            break;
        }
        if (r1 + 0x8000u == 0) {  // (from the original)
            float S0_1 = std::bit_cast<float>(*gptr<u32>(r0 + 8u));
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_1;
            return r0;
        }
        if (r1 + 0x4000u == 0) {  // (from the original)
            float S0_2 = std::bit_cast<float>(*gptr<u32>(r0));
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_2;
            return r0;
        }
        if (r1 == 0) {
            float S0_3 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18u));  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_3;
            return r0;
        }
        float S0_4 = r1 == 0x4000u ? std::bit_cast<float>(*gptr<u32>(r0 + 0x10u)) : 1.0f;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_4;
        return r0;
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00765e64
GUEST_EXPORT(0x00765e64, d_00765e64::camera_scale_for_angle);

// f_00765f54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the member handler (+0x20, +0x24) differs from the one at 0x848128.
namespace d_00765f54 {

struct __attribute__((packed)) Object_00765f54_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_00765f54_0, word_20, 0x20);
GUEST_OFFSET(Object_00765f54_0, word_24, 0x24);

inline guest::global<u32, 0x00848128> page_tab_handler_a;
inline guest::global<u32, 0x0084812c> page_tab_handler_a_adjust;

u32 handler_differs_from_848128(gptr<Object_00765f54_0> arg0) {
    u32 r3_1 = arg0->word_20;
    u32 r2_1 = *page_tab_handler_a;
    u32 r1_1 = *page_tab_handler_a_adjust;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (r3_1 == 0 && ((arg0->word_24 | r1_1) & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (arg0->word_24 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00765f54
GUEST_EXPORT(0x00765f54, d_00765f54::handler_differs_from_848128);

// f_0076609c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first listed villager (not leaving) whose record index is at least `start`, else the first such villager; gives
// its index.
namespace d_0076609c {

struct __attribute__((packed)) NpcList {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(NpcList, word_eb54, 0xeb54);
GUEST_OFFSET(NpcList, word_eb58, 0xeb58);

struct __attribute__((packed)) Object_0076609c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0076609c_1, word_0, 0x0);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> villager_record_at;

struct __attribute__((packed)) Frame_0076609c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076609c, word_0, 0x0);
GUEST_SIZE(Frame_0076609c, 0x4);

u32 NpcList__villager_at_or_after(gptr<NpcList> npc_list, gptr<Object_0076609c_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076609c> frame;  // the original's stack frame
    u32 r0 = npc_list.addr();
    u32 r1 = arg1.addr();
    frame->word_0 = r3;
    u32 r7 = r1;
    u32 r9 = 0u;
    u32 r4 = npc_list->word_eb54;
    u32 r6 = npc_list->word_eb58;
    if (r1 != 0) {
        r9 = arg1->word_0;
    }
    u32 save_data_2 = get_save_data(r0 + 0xeb54u, r1, guest::cpu()->r[2], r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r10 = 0u;
    u32 r11 = r10;
    frame->word_0 = save_data_2 + 0x292a4u;  // (from the original)
    if (r4 != r6) {
        do {
            u32 r5_1 = *gptr<u32>(r4);
            if (r5_1 != 0) {
                if (*gptr<u8>(r5_1 + 0x9a8u) == 0) {  // (from the original)
                    u32 r8_1 = *gptr<s8>((r5_1 + 0x9a8u) + 6u);  // (from the original)
                    u32 villager_record_2 = villager_record_at(frame->word_0, r8_1, guest::cpu()->r[2], r3);
                    r3 = guest::cpu()->r[3];
                    if (villager_record_2 != 0 && *gptr<u8>(villager_record_2 + 0x250fu) == 0) {  // (from the original)
                        if (s32(r8_1) >= s32(r9)) {
                            if (r7 != 0) {
                                *gptr<u32>(r7) = r8_1;
                            }
                            return r5_1;
                        }
                        if (r10 == 0) {
                            r10 = r5_1;
                            r11 = r8_1;
                        }
                    }
                }
            }
            r4 += 4u;
            guest::preempt();
        } while (r4 != r6);
        if (r10 != 0 && r7 != 0) {
            *gptr<u32>(r7) = r11;
        }
    }
    return r10;
}

}  // namespace d_0076609c
GUEST_EXPORT_FRAMED(0x0076609c, d_0076609c::NpcList__villager_at_or_after, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00766170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 when the member handler (+0xc, +0x10) is the one at 0x857b48, bit 1 when it is the one at 0x857b40.
namespace d_00766170 {

struct __attribute__((packed)) Object_00766170_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00766170_0, word_c, 0xc);
GUEST_OFFSET(Object_00766170_0, word_10, 0x10);

inline guest::global<u32, 0x00857b40> global_00857b40;
inline guest::global<u32, 0x00857b44> global_00857b44;
inline guest::global<u32, 0x00857b48> global_00857b48;
inline guest::global<u32, 0x00857b4c> global_00857b4c;

u32 handler_is_857b40_or_857b48(gptr<Object_00766170_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_00857b4c;
    if (r3_1 == *global_00857b48) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_1) & 1u) != 0) && arg0->word_10 != r1_1) {
            goto L_7661b8;
        }
        r4_1 = 1u;
        goto L_7661bc;
    }
L_7661b8:;
    r4_1 = 0u;
L_7661bc:;
    u32 r1_2 = *global_00857b44;
    if (r3_1 == *global_00857b40) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_2) & 1u) != 0) && arg0->word_10 != r1_2) {
            guest::cpu()->r[1] = r1_2;
            return r4_1;
        }
        guest::cpu()->r[1] = r1_2;
        return 1u | r4_1;
    }
    guest::cpu()->r[1] = r1_2;
    return r4_1;
}

}  // namespace d_00766170
GUEST_EXPORT_FRAMED(0x00766170, d_00766170::handler_is_857b40_or_857b48, 0x10);  // pushes {r4} first, as the original

// f_007667a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies tile (x & 15, z & 15) of a 16x16 grid of 10-byte tiles (from +0x1c) to `out`.
namespace d_007667a8 {


void Grid__copy_tile(u32 grid, u32 out, u32 x, u32 z) {
    for (;;) {
        u32 r12_1 = out;
        u32 r1_2 = z & 0xfu;  // (from the original)
        u32 r2_1 = x & 0xfu;  // (from the original)
        out = grid + (r1_2 + (r1_2 << 2) << 5) + (r2_1 + (r2_1 << 2) << 1) + 0x1cu;  // (from the original)
        grid = r12_1;
        if (!1) {
            break;
        }
        *gptr<u16>(grid) = *gptr<u16>(out);
        *gptr<u16>(grid + 2u) = *gptr<u16>(out + 2u);
        *gptr<u16>(grid + 4u) = *gptr<u16>(out + 4u);
        *gptr<u16>(grid + 6u) = *gptr<u16>(out + 6u);
        *gptr<u8>(grid + 8u) = *gptr<u8>(out + 8u);
        u32 r1_1 = *gptr<u8>(out + 9u);
        *gptr<u8>(grid + 9u) = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
        guest::preempt();
    }
}

}  // namespace d_007667a8
GUEST_EXPORT(0x007667a8, d_007667a8::Grid__copy_tile);

// f_007667d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first triangle of tile (x, z) in world coordinates (the grid origin +8, +0xc plus the cell).
namespace d_007667d0 {

struct __attribute__((packed)) Grid {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Grid, word_8, 0x8);
GUEST_OFFSET(Grid, word_c, 0xc);

struct __attribute__((packed)) Object_007667d0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u8 unknown_28[0x4];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_007667d0_1, word_4, 0x4);
GUEST_OFFSET(Object_007667d0_1, word_c, 0xc);
GUEST_OFFSET(Object_007667d0_1, word_14, 0x14);
GUEST_OFFSET(Object_007667d0_1, word_1c, 0x1c);
GUEST_OFFSET(Object_007667d0_1, word_24, 0x24);
GUEST_OFFSET(Object_007667d0_1, word_2c, 0x2c);

inline guest::global<u32, 0x0085f2e0> cell_size_x;
inline guest::global<u32, 0x0085f2e4> cell_size_z;
inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;
inline constexpr guest::Function<0x0075d630, u32(u32, u32)> GridTile__corner_0_triangle;

void Grid__tile_triangle_0(gptr<Grid> grid, gptr<Object_007667d0_1> arg1, u32 r2, u32 r3) {
    GridTile__corner_0_triangle(grid.addr() + (r3 & 0xfu) * 0xa0u + (r2 & 0xfu) * 0xau + 0x1cu, arg1.addr());  // (from the original)
    u32 r3_1 = *half_cell_z;
    u32 r0_2 = r2 * *cell_size_x + grid->word_8 + *half_cell_x;
    u32 r2_1 = r3 * *cell_size_z + grid->word_c;
    arg1->word_4 = arg1->word_4 + r0_2;
    u32 r1_1 = r2_1 + r3_1;
    arg1->word_c = arg1->word_c + r1_1;
    arg1->word_14 = arg1->word_14 + r0_2;
    arg1->word_1c = arg1->word_1c + r1_1;
    arg1->word_24 = r0_2 + arg1->word_24;
    arg1->word_2c = arg1->word_2c + r1_1;
}

}  // namespace d_007667d0
GUEST_EXPORT_FRAMED(0x007667d0, d_007667d0::Grid__tile_triangle_0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076689c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The third triangle of tile (x, z) in world coordinates.
namespace d_0076689c {

struct __attribute__((packed)) Grid {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Grid, word_8, 0x8);
GUEST_OFFSET(Grid, word_c, 0xc);

struct __attribute__((packed)) Object_0076689c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u8 unknown_28[0x4];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_0076689c_1, word_4, 0x4);
GUEST_OFFSET(Object_0076689c_1, word_c, 0xc);
GUEST_OFFSET(Object_0076689c_1, word_14, 0x14);
GUEST_OFFSET(Object_0076689c_1, word_1c, 0x1c);
GUEST_OFFSET(Object_0076689c_1, word_24, 0x24);
GUEST_OFFSET(Object_0076689c_1, word_2c, 0x2c);

inline guest::global<u32, 0x0085f2e0> cell_size_x;
inline guest::global<u32, 0x0085f2e4> cell_size_z;
inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;
inline constexpr guest::Function<0x0075d6a4, u32(u32, u32)> GridTile__corner_2_triangle;

void Grid__tile_triangle_2(gptr<Grid> grid, gptr<Object_0076689c_1> arg1, u32 r2, u32 r3) {
    GridTile__corner_2_triangle(grid.addr() + (r3 & 0xfu) * 0xa0u + (r2 & 0xfu) * 0xau + 0x1cu, arg1.addr());  // (from the original)
    u32 r3_1 = *half_cell_z;
    u32 r0_2 = r2 * *cell_size_x + grid->word_8 + *half_cell_x;
    u32 r2_1 = r3 * *cell_size_z + grid->word_c;
    arg1->word_4 = arg1->word_4 + r0_2;
    u32 r1_1 = r2_1 + r3_1;
    arg1->word_c = arg1->word_c + r1_1;
    arg1->word_14 = arg1->word_14 + r0_2;
    arg1->word_1c = arg1->word_1c + r1_1;
    arg1->word_24 = r0_2 + arg1->word_24;
    arg1->word_2c = arg1->word_2c + r1_1;
}

}  // namespace d_0076689c
GUEST_EXPORT_FRAMED(0x0076689c, d_0076689c::Grid__tile_triangle_2, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00766968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The second triangle of tile (x, z) in world coordinates.
namespace d_00766968 {

struct __attribute__((packed)) Grid {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Grid, word_8, 0x8);
GUEST_OFFSET(Grid, word_c, 0xc);

struct __attribute__((packed)) Object_00766968_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u8 unknown_28[0x4];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_00766968_1, word_4, 0x4);
GUEST_OFFSET(Object_00766968_1, word_c, 0xc);
GUEST_OFFSET(Object_00766968_1, word_14, 0x14);
GUEST_OFFSET(Object_00766968_1, word_1c, 0x1c);
GUEST_OFFSET(Object_00766968_1, word_24, 0x24);
GUEST_OFFSET(Object_00766968_1, word_2c, 0x2c);

inline guest::global<u32, 0x0085f2e0> cell_size_x;
inline guest::global<u32, 0x0085f2e4> cell_size_z;
inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;
inline constexpr guest::Function<0x0075d718, u32(u32, u32)> GridTile__corner_1_triangle;

void Grid__tile_triangle_1(gptr<Grid> grid, gptr<Object_00766968_1> arg1, u32 r2, u32 r3) {
    GridTile__corner_1_triangle(grid.addr() + (r3 & 0xfu) * 0xa0u + (r2 & 0xfu) * 0xau + 0x1cu, arg1.addr());  // (from the original)
    u32 r3_1 = *half_cell_z;
    u32 r0_2 = r2 * *cell_size_x + grid->word_8 + *half_cell_x;
    u32 r2_1 = r3 * *cell_size_z + grid->word_c;
    arg1->word_4 = arg1->word_4 + r0_2;
    u32 r1_1 = r2_1 + r3_1;
    arg1->word_c = arg1->word_c + r1_1;
    arg1->word_14 = arg1->word_14 + r0_2;
    arg1->word_1c = arg1->word_1c + r1_1;
    arg1->word_24 = r0_2 + arg1->word_24;
    arg1->word_2c = arg1->word_2c + r1_1;
}

}  // namespace d_00766968
GUEST_EXPORT_FRAMED(0x00766968, d_00766968::Grid__tile_triangle_1, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00766a34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The fourth triangle of tile (x, z) in world coordinates.
namespace d_00766a34 {

struct __attribute__((packed)) Grid {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Grid, word_8, 0x8);
GUEST_OFFSET(Grid, word_c, 0xc);

struct __attribute__((packed)) Object_00766a34_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u8 unknown_28[0x4];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_00766a34_1, word_4, 0x4);
GUEST_OFFSET(Object_00766a34_1, word_c, 0xc);
GUEST_OFFSET(Object_00766a34_1, word_14, 0x14);
GUEST_OFFSET(Object_00766a34_1, word_1c, 0x1c);
GUEST_OFFSET(Object_00766a34_1, word_24, 0x24);
GUEST_OFFSET(Object_00766a34_1, word_2c, 0x2c);

inline guest::global<u32, 0x0085f2e0> cell_size_x;
inline guest::global<u32, 0x0085f2e4> cell_size_z;
inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;
inline constexpr guest::Function<0x0075d788, u32(u32, u32)> GridTile__corner_3_triangle;

void Grid__tile_triangle_3(gptr<Grid> grid, gptr<Object_00766a34_1> arg1, u32 r2, u32 r3) {
    GridTile__corner_3_triangle(grid.addr() + (r3 & 0xfu) * 0xa0u + (r2 & 0xfu) * 0xau + 0x1cu, arg1.addr());  // (from the original)
    u32 r3_1 = *half_cell_z;
    u32 r0_2 = r2 * *cell_size_x + grid->word_8 + *half_cell_x;
    u32 r2_1 = r3 * *cell_size_z + grid->word_c;
    arg1->word_4 = arg1->word_4 + r0_2;
    u32 r1_1 = r2_1 + r3_1;
    arg1->word_c = arg1->word_c + r1_1;
    arg1->word_14 = arg1->word_14 + r0_2;
    arg1->word_1c = arg1->word_1c + r1_1;
    arg1->word_24 = r0_2 + arg1->word_24;
    arg1->word_2c = arg1->word_2c + r1_1;
}

}  // namespace d_00766a34
GUEST_EXPORT_FRAMED(0x00766a34, d_00766a34::Grid__tile_triangle_3, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00766b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` of an array of 8 entries of 12 bytes (entry 1 when out of range).
namespace d_00766b00 {


u32 entry_12_of_8(u32 entries, u32 index) {
    if (index >= 8u) {
        index = 1u;
    }
    return entries + index * 0xcu;  // (from the original)
}

}  // namespace d_00766b00
GUEST_EXPORT(0x00766b00, d_00766b00::entry_12_of_8);

// f_00766bf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The target's position: zero for kind 0, the stored point for kind 1, else the base plus the offset (+0x2c kind).
namespace d_00766bf8 {

struct __attribute__((packed)) Target {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Target, word_0, 0x0);
GUEST_OFFSET(Target, word_4, 0x4);
GUEST_OFFSET(Target, word_8, 0x8);

struct __attribute__((packed)) Object_00766bf8_1 {
    u8 unknown_0[0x14];  // (not used here)
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_00766bf8_1, float_14, 0x14);
GUEST_OFFSET(Object_00766bf8_1, float_18, 0x18);
GUEST_OFFSET(Object_00766bf8_1, float_1c, 0x1c);
GUEST_OFFSET(Object_00766bf8_1, float_20, 0x20);
GUEST_OFFSET(Object_00766bf8_1, float_24, 0x24);
GUEST_OFFSET(Object_00766bf8_1, word_28, 0x28);
GUEST_OFFSET(Object_00766bf8_1, word_2c, 0x2c);

struct __attribute__((packed)) Local_00766bf8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00766bf8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00766bf8_ea_1, word_4, 0x4);


void Target__position(gptr<Target> target, gptr<Object_00766bf8_1> arg1, float S0, float S1) {
    u32 r2_1 = arg1->word_2c;
    if (r2_1 != 0) {
        if (r2_1 == 1u) {
            gptr<Local_00766bf8_ea_1> ea_1 = gptr<Local_00766bf8_ea_1>(arg1.addr() + 0x20u);  // (from the original)
            u32 r2_2 = ea_1->word_0;
            u32 r3_1 = ea_1->word_4;
            u32 r1_1 = arg1->word_28;
            target->word_8 = r1_1;
            target->word_0 = r2_2;
            target->word_4 = r3_1;
            guest::cpu()->r[1] = r1_1;
            return;
        }
        float S0_1 = arg1->float_1c + std::bit_cast<float>(arg1->word_28);
        float S1_1 = arg1->float_14 + arg1->float_20;
        float S2_1 = arg1->float_18 + arg1->float_24;
        target->word_8 = std::bit_cast<u32>(S0_1);
        target->word_0 = std::bit_cast<u32>(S1_1);
        target->word_4 = std::bit_cast<u32>(S2_1);
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    float S0_2 = 0.0f;
    target->word_0 = std::bit_cast<u32>(S0_2);
    target->word_4 = std::bit_cast<u32>(S0_2);
    target->word_8 = std::bit_cast<u32>(S0_2);
    guest::cpu()->r[1] = arg1.addr();
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_00766bf8
GUEST_EXPORT(0x00766bf8, d_00766bf8::Target__position);

// f_00766c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether +0x30 has any of the bits of `mask`.
namespace d_00766c68 {

struct __attribute__((packed)) Object_00766c68_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_00766c68_0, word_30, 0x30);


u32 has_flags_30(gptr<Object_00766c68_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_30 & r1;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00766c68
GUEST_EXPORT(0x00766c68, d_00766c68::has_flags_30);

// f_00766c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether +0x16b4 is not 0x19.
namespace d_00766c78 {

struct __attribute__((packed)) Object_00766c78_0 {
    u8 unknown_0[0x16b4];  // (not used here)
    u32 word_16b4;
};
GUEST_OFFSET(Object_00766c78_0, word_16b4, 0x16b4);


u32 state_16b4_is_not_19(gptr<Object_00766c78_0> arg0) {
    return arg0->word_16b4 != 0x19u;  // (from the original)
}

}  // namespace d_00766c78
GUEST_EXPORT(0x00766c78, d_00766c78::state_16b4_is_not_19);

// f_00766e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of sound `id` through 0073df8c on the archive at +0xc10, or 0.
namespace d_00766e64 {

struct __attribute__((packed)) SoundSystem {
    u8 unknown_0[0xc10];  // (not used here)
    u32 word_c10;
};
GUEST_OFFSET(SoundSystem, word_c10, 0xc10);

inline constexpr guest::Function<0x0073df8c, u32(u32, u32, u32, u32)> SoundArchive__find_sound;

struct __attribute__((packed)) Frame_00766e64 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00766e64, word_0, 0x0);
GUEST_SIZE(Frame_00766e64, 0x4);

u32 SoundSystem__sound_value(gptr<SoundSystem> sound_system, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00766e64> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 0;
    u32 sound = SoundArchive__find_sound(sound_system->word_c10, guest::cpu()->r[1], 0u, frame.at(0).addr());
    if (sound != 0) {
        sound = frame->word_0;
    }
    return sound;
}

}  // namespace d_00766e64
GUEST_EXPORT_FRAMED(0x00766e64, d_00766e64::SoundSystem__sound_value, 0x4000);  // pushes {lr} first, as the original

// f_00766f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The kind of sound a scene allows: 0 (none) for scenes with the quiet flags or ids 5, 0xb, 0x11, 0x17, 0x2a, 0x34,
// 0x36, 0x37, 0x5b; 2 for indoor kinds (bits 8, 0x400, 0x10000000); else 1.
namespace d_00766f1c {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;

u32 scene_sound_kind(u32 r0_unused, u32 r1) {
    u32 r0_6 = 0;
    u32 scene_flagged = scene_has_flags(0x10u, r1);  // (from the original)
    if (scene_flagged == 0) {
        u32 scene_flagged_2 = scene_has_flags(0x20000u, r1);  // (from the original)
        if (scene_flagged_2 != 0) {
            return 0u;
        }
        u32 scene_flagged_3 = scene_has_flags(0x200000u, r1);  // (from the original)
        if (scene_flagged_3 != 0) {
            return 0u;
        }
        u32 scene_flagged_4 = scene_has_flags(0x8000u, r1);  // (from the original)
        if (scene_flagged_4 != 0) {
            return 0u;
        }
        u32 scene_flagged_5 = scene_has_flags(0x800000u, r1);  // (from the original)
        if (scene_flagged_5 != 0 || r1 == 0x5bu || r1 == 0x36u || r1 == 0x37u || r1 == 0x34u || r1 == 5u) {  // (from the original)
            return 0u;
        }
        if (r1 != 0xbu && r1 != 0x11u && r1 != 0x17u) {  // (from the original)
            goto L_766f50;
        }
        return 0u;
    }
    r0_6 = scene_has_flags(0x400000u, r1);  // (from the original)
    if (r0_6 == 0) {
        return r0_6;
    }
    if (r1 == 0x2au) {  // (from the original)
        return 0u;
    }
L_766f50:;
    u32 scene_flagged_6 = scene_has_flags(8u, r1);
    if (scene_flagged_6 != 0) {
        return 2u;
    }
    u32 scene_flagged_7 = scene_has_flags(0x400u, r1);  // (from the original)
    if (scene_flagged_7 != 0) {
        return 2u;
    }
    u32 scene_flagged_8 = scene_has_flags(0x10000000u, r1);  // (from the original)
    return scene_flagged_8 == 0 ? 1u : 2u;
}

}  // namespace d_00766f1c
GUEST_EXPORT_FRAMED(0x00766f1c, d_00766f1c::scene_sound_kind, 0x4010);  // pushes {r4, lr} first, as the original

// f_007680a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is one of 0x334f, 0x3353, 0x3357, 0x335b, 0x335f, 0x3363.
namespace d_007680a0 {


u32 Item__is_id_334f_set(gptr<Item> item) {
    u32 r0_1 = u32(item->id) & ~0x8000u;  // (from the original)
    u32 zf_1 = r0_1 - 0x334fu == 0;  // (from the original)
    u32 r1_1 = r0_1 - 0x334fu;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_1 - 0x3353u == 0;  // (from the original)
        r1_1 = r0_1 - 0x3353u;  // (from the original)
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 zf_2 = r0_1 - 0x3357u == 0;  // (from the original)
    u32 r1_2 = r0_1 - 0x3357u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_1 - 0x335bu == 0;  // (from the original)
        r1_2 = r0_1 - 0x335bu;  // (from the original)
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 zf_3 = r0_1 - 0x335fu == 0;  // (from the original)
    u32 r1_3 = r0_1 - 0x335fu;  // (from the original)
    if (!zf_3) {
        zf_3 = r0_1 - 0x3363u == 0;  // (from the original)
        r1_3 = r0_1 - 0x3363u;  // (from the original)
    }
    if (!zf_3) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_007680a0
GUEST_EXPORT(0x007680a0, d_007680a0::Item__is_id_334f_set);

// f_00768400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is one of 0xb-0x10 or 0x15-0x1a.
namespace d_00768400 {


u32 Item__is_id_in_b_to_1a_set(gptr<Item> item) {
    u32 r0_1 = u32(item->id) & ~0x8000u;  // (from the original)
    if (r0_1 == 0xbu || r0_1 == 0xcu || r0_1 == 0xdu || r0_1 == 0xeu || r0_1 == 0xfu || r0_1 == 0x10u || r0_1 == 0x15u || r0_1 == 0x16u || r0_1 == 0x17u || r0_1 == 0x18u) {  // (from the original)
        return 1u;
    }
    if (r0_1 != 0x19u && r0_1 != 0x1au) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_00768400
GUEST_EXPORT(0x00768400, d_00768400::Item__is_id_in_b_to_1a_set);

// f_007689a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007689a4 {

inline constexpr guest::Function<0x004e0f14, u32(u32, u32)> entry_for_item_value_06;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x00744df8, u32(u32, u32)> FurnitureSlot__kind_size;
inline constexpr guest::Function<0x00744f60, u32(u32, u32)> FurnitureSlot__kind_offset;
inline constexpr guest::Function<0x00745218, u32(u32, u32)> FurnitureSlot__kind_flags_b;
inline constexpr guest::Function<0x007452e8, u32(u32, u32)> FurnitureSlot__kind_flags;
inline constexpr guest::Function<0x007684a4, u32(u32, u32)> Item__has_valid_value_06;
inline constexpr guest::Function<0x0076880c, u32(u32)> Item__furniture_entry;
inline constexpr guest::Function<0x007689a4, u32(u32)> call_item_class_kind;
inline constexpr guest::Function<0x00769d2c, u32(u32, u32)> SpecialItem__index;
inline constexpr guest::Function<0x0076b2b4, u32(u32)> FurnitureRecord__fill_slots;
inline constexpr guest::Function<0x0076bb34, u32(u32)> item_size_class;
inline constexpr guest::Function<0x0076c030, u32(u32, u32)> FurnitureRecord__make_item;
inline constexpr guest::Function<0x0076c1a4, u32(u32, u32)> Item__value_06_index;

struct __attribute__((packed)) Frame_007689a4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_007689a4, word_0, 0x0);
GUEST_SIZE(Frame_007689a4, 0x4);

u32 item_class_kind(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_007689a4> frame;  // the original's stack frame
    u32 r0_18 = 0;
    frame->word_0 = r3;
    u32 furniture_record = r0;
    r0 = Item__data(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        u32 r0_1 = Item__has_valid_value_06(furniture_record, r1);
        r1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            goto L_768adc;
        }
        u32 r0_2 = entry_for_item_value_06(furniture_record, r1);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_768adc;
        }
        u32 r0_3 = FurnitureSlot__kind_offset(r0_2, 0u);
        u32 r5_1 = r0_3;
        u32 r0_4 = FurnitureRecord__fill_slots(furniture_record);
        u32 r0_5 = FurnitureSlot__kind_size(r0_2, r0_4);
        u32 r0_6 = FurnitureSlot__kind_offset(r0_2, r0_4);
        u32 r0_7 = item_size_class(furniture_record);
        r1 = guest::cpu()->r[1];
        u32 zf_1 = r0_7 == 0;
        if (!zf_1) {
            zf_1 = r0_7 == 1u;
        }
        if (zf_1) {
            u32 r0_8 = Item__value_06_index(furniture_record, r1);
            u32 r0_9 = FurnitureSlot__kind_flags_b(r0_2, r0_8);
            u32 r0_10 = FurnitureSlot__kind_flags(r0_2, r0_8);
            r1 = r0_9 | r0_10;
            if (r1 == 0) {
                guest::cpu()->r[1] = r1;
                return r0_6;
            }
            if (r0_10 != 0) {
                r5_1 = r0_10;
            }
        }
        if (r0_5 != 0) {
            if (r0_7 == 2u || r0_7 == 4u || r0_7 == 8u) {
                FurnitureRecord__make_item(frame.at(0).addr(), furniture_record);
                u32 r0_13 = Item__furniture_entry(frame.at(0).addr());
                r1 = guest::cpu()->r[1];
                r5_1 = r0_13;
            }
        } else if (r0_6 == 0 && (r0_7 == 2u || r0_7 == 4u || r0_7 == 8u)) {
            FurnitureRecord__make_item(frame.at(0).addr(), furniture_record);
            u32 r0_16 = call_item_class_kind(frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r5_1 = r0_16;
        }
        r0 = r5_1;
    }
    guest::cpu()->r[1] = r1;
    return r0;
L_768adc:;
    u32 r0_17 = *gptr<u8>(r0 + 0xau);  // (from the original)
    if ((r0_17 >= 0x9bu || r0_17 != 0x47u) && (r0_17 >= 0x9bu || r0_17 != 0x48u)) {  // (from the original)
        goto L_768b18;
    }
    r0_18 = SpecialItem__index(furniture_record, r1);
    r1 = guest::cpu()->r[1];
    if (r0_18 != 0) {
        return u32(*gptr<u8>(r0_18 + 0x67u)) >> 4;  // (from the original)
    }
L_768b18:;
    u32 r0_19 = u32(*gptr<u8>(r0 + 0x18u)) & 0xfu;  // (from the original)
    if (r0_19 >= 0xfu) {  // (from the original)
        r0_19 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_19;
}

}  // namespace d_007689a4
GUEST_EXPORT_FRAMED(0x007689a4, d_007689a4::item_class_kind, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00768c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is 0xa0, 0xa6, 0xac, 0xb3 or 0xbd (or one of the ids above 0xbd it also tests).
namespace d_00768c40 {

struct __attribute__((packed)) Object_00768c40_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00768c40_0, half_0, 0x0);


u32 Item__is_id_a0_a6_ac_b3_or_bd(gptr<Object_00768c40_0> item) {
    u32 r0_1 = u32(item->half_0) & ~0x8000u;  // (from the original)
    u32 zf_1 = r0_1 - 0xbdu == 0;  // (from the original)
    if (zf_1) {
        return 1u;
    }
    if (zf_1 || s32(r0_1) < 0xbd) {  // (from the original)
        if (r0_1 == 0xa0u || r0_1 == 0xa6u || r0_1 == 0xacu || r0_1 == 0xb3u) {  // (from the original)
            return 1u;
        }
        return 0u;
    }
    if (r0_1 != 0xbeu && r0_1 != 0xc6u && r0_1 != 0xc8u) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_00768c40
GUEST_EXPORT(0x00768c40, d_00768c40::Item__is_id_a0_a6_ac_b3_or_bd);

// f_00768dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is one of the low ground ids (9-0xe, 0x13, 0x14, 0x1d, 0x1e and the rest), or
// of indexed type 0xa when `include_indexed` and the current mode is not 8.
namespace d_00768dc4 {

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x002fccdc, u32(u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x0076e6cc, u32(u32, u32)> entry_group;

u32 Item__is_low_ground_item(u32 item, u32 r1) {
    u32 r4_1 = r1;
    u32 r0_1 = *tour_instance;
    if (r0_1 != 0) {
        u32 r0_2 = entry_group(r0_1, r1);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 8u) {
            goto L_768e08;
        }
    }
    if (r4_1 != 0) {
        u32 r0_3 = indexed_item_type(item, r1);
        if (r0_3 == 0xau) {  // (from the original)
            return 1u;
        }
    }
L_768e08:;
    u32 r0_4 = u32(*gptr<u16>(item)) & ~0x8000u;  // (from the original)
    if (r0_4 != 0xau && r0_4 != 0x14u && r0_4 != 0x1eu && r0_4 != 9u && r0_4 != 0x13u && r0_4 != 0x1du && r0_4 != 0xbu && r0_4 != 0xcu && r0_4 != 0xdu && r0_4 != 0xeu && r0_4 != 0xfu && r0_4 != 0x10u && r0_4 != 0x15u && r0_4 != 0x16u && r0_4 != 0x17u && r0_4 != 0x18u && r0_4 != 0x19u && r0_4 != 0x1au) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_00768dc4
GUEST_EXPORT_FRAMED(0x00768dc4, d_00768dc4::Item__is_low_ground_item, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00768fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is from 0x30cc to 0x30d1.
namespace d_00768fac {

struct __attribute__((packed)) Object_00768fac_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00768fac_0, half_0, 0x0);


u32 Item__is_id_30cc_to_30d1(gptr<Object_00768fac_0> item) {
    u32 r0_1 = u32(item->half_0) & ~0x8000u;  // (from the original)
    u32 zf_1 = r0_1 - 0x30ccu == 0;  // (from the original)
    u32 r1_1 = r0_1 - 0x30ccu;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_1 - 0x30cdu == 0;  // (from the original)
        r1_1 = r0_1 - 0x30cdu;  // (from the original)
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 zf_2 = r0_1 - 0x30ceu == 0;  // (from the original)
    u32 r1_2 = r0_1 - 0x30ceu;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_1 - 0x30cfu == 0;  // (from the original)
        r1_2 = r0_1 - 0x30cfu;  // (from the original)
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 zf_3 = r0_1 - 0x30d0u == 0;  // (from the original)
    u32 r1_3 = r0_1 - 0x30d0u;  // (from the original)
    if (!zf_3) {
        zf_3 = r0_1 - 0x30d1u == 0;  // (from the original)
        r1_3 = r0_1 - 0x30d1u;  // (from the original)
    }
    if (!zf_3) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_00768fac
GUEST_EXPORT(0x00768fac, d_00768fac::Item__is_id_30cc_to_30d1);

// f_007695b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is 0x28a8 or 0x28a9.
namespace d_007695b0 {

struct __attribute__((packed)) Object_007695b0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_007695b0_0, half_0, 0x0);


u32 Item__is_id_28a8_or_28a9(gptr<Object_007695b0_0> item) {
    u32 r0_1 = u32(item->half_0) & ~0x8000u;  // (from the original)
    u32 zf_1 = r0_1 - 0x28a8u == 0;  // (from the original)
    u32 r1_1 = r0_1 - 0x28a8u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_1 - 0x28a9u == 0;  // (from the original)
        r1_1 = r0_1 - 0x28a9u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return zf_1 ? 1u : 0u;
}

}  // namespace d_007695b0
GUEST_EXPORT(0x007695b0, d_007695b0::Item__is_id_28a8_or_28a9);

// f_00769880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is 0x290d or 0x290e.
namespace d_00769880 {

struct __attribute__((packed)) Object_00769880_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00769880_0, half_0, 0x0);


u32 Item__is_id_290d_or_290e(gptr<Object_00769880_0> item) {
    u32 r0_1 = u32(item->half_0) & ~0x8000u;  // (from the original)
    u32 zf_1 = r0_1 - 0x290du == 0;  // (from the original)
    u32 r1_1 = r0_1 - 0x290du;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_1 - 0x290eu == 0;  // (from the original)
        r1_1 = r0_1 - 0x290eu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return zf_1 ? 1u : 0u;
}

}  // namespace d_00769880
GUEST_EXPORT(0x00769880, d_00769880::Item__is_id_290d_or_290e);

// f_00769cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The variant (0-3, then 0-1) of an item from 0x30cc to 0x30d1; -1 for other items.
namespace d_00769cc0 {


u32 Item__variant_of_30cc_set(gptr<Item> item) {
    u32 r0_1 = u32(item->id) & ~0x8000u;  // (from the original)
    if (r0_1 - 0x30ccu == 0) {  // (from the original)
        guest::cpu()->r[1] = r0_1 - 0x30ccu;  // (from the original)
        return 0u;
    }
    if (r0_1 - 0x30cdu == 0) {  // (from the original)
        guest::cpu()->r[1] = r0_1 - 0x30cdu;  // (from the original)
        return 1u;
    }
    if (r0_1 - 0x30ceu == 0) {  // (from the original)
        guest::cpu()->r[1] = r0_1 - 0x30ceu;  // (from the original)
        return 2u;
    }
    if (r0_1 - 0x30cfu == 0) {  // (from the original)
        guest::cpu()->r[1] = r0_1 - 0x30cfu;  // (from the original)
        return 3u;
    }
    if (r0_1 - 0x30d0u == 0) {  // (from the original)
        guest::cpu()->r[1] = r0_1 - 0x30d0u;  // (from the original)
        return 0u;
    }
    if (r0_1 - 0x30d1u != 0) {  // (from the original)
        guest::cpu()->r[1] = r0_1 - 0x30d1u;  // (from the original)
        return ~0u;
    }
    guest::cpu()->r[1] = r0_1 - 0x30d1u;  // (from the original)
    return 1u;
}

}  // namespace d_00769cc0
GUEST_EXPORT(0x00769cc0, d_00769cc0::Item__variant_of_30cc_set);

// f_00769fb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is one of the 18 ids of the table at 0x88e622.
namespace d_00769fb8 {


u32 Item__is_in_table_88e622(gptr<Item> item) {
    u32 r0 = item.addr();
    u32 r2 = 0x88e622u;  // (from the original)
    u32 r1 = 0u;
    r0 = u32(item->id) & ~0x8000u;  // (from the original)
    do {
        if (r0 == gptr<u16>(r2)[r1]) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < 0x12u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00769fb8
GUEST_EXPORT(0x00769fb8, d_00769fb8::Item__is_in_table_88e622);

// f_0076a068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether an item with a valid value-06 entry is flagged (bit 3 of +0x20), passes one of two entry checks, or is
// 0x2f38, 0x304a or 0x304b.
namespace d_0076a068 {

inline constexpr guest::Function<0x004e0f14, u32(u32)> entry_for_item_value_06;
inline constexpr guest::Function<0x00745218, u32(u32, u32)> FurnitureSlot__kind_flags_b;
inline constexpr guest::Function<0x007452e8, u32(u32, u32)> FurnitureSlot__kind_flags;
inline constexpr guest::Function<0x007684a4, u32(u32, u32, u32, u32)> Item__has_valid_value_06;

u32 Item__is_special_value_06_item(u32 item, u32 r1) {
    u32 r0_1 = Item__has_valid_value_06(item, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = entry_for_item_value_06(item);
        if (r0_2 != 0) {
            u32 r0_3 = Item__has_valid_value_06(item, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_3 != 0) {
                u32 r0_4 = entry_for_item_value_06(item);
                if (r0_4 != 0) {
                    if ((u32(*gptr<u8>(r0_4 + 0x20u)) >> 3u & 1u) != 0) {  // (from the original)
                        return 1u;
                    }
                }
            }
            u32 r0_5 = FurnitureSlot__kind_flags_b(r0_2, 1u);
            if (r0_5 != 0) {
                return 1u;
            }
            u32 r0_6 = FurnitureSlot__kind_flags(r0_2, 1u);
            if (r0_6 != 0) {
                return 1u;
            }
        }
        u32 res_2 = (u32(*gptr<u16>(item)) & ~0x8000u) - 0x2f38u;  // (from the original)
        u32 zf_1 = res_2 == 0;
        u32 r0_7 = res_2;
        if (!zf_1) {
            zf_1 = r0_7 - 0x112u == 0;  // (from the original)
            r0_7 = r0_7 - 0x112u;  // (from the original)
        }
        if (!zf_1) {
            zf_1 = r0_7 == 1u;
        }
        if (zf_1) {
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_0076a068
GUEST_EXPORT_FRAMED(0x0076a068, d_0076a068::Item__is_special_value_06_item, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076a11c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The furniture's slot for the item's kind.
namespace d_0076a11c {

inline constexpr guest::Function<0x004e0f14, u32(u32, u32, u32, u32)> entry_for_item_value_06;
inline constexpr guest::Function<0x005361a8, u32(u32, u32)> Item__data;
inline constexpr guest::Function<0x00745404, u32(u32, u32)> FurnitureRecord__has_slot_value;

u32 FurnitureRecord__slot_for_item(u32 furniture_record, gptr<Item> item) {
    u32 r1 = item.addr();
    u32 r0_8 = 0;
    u32 r0_1 = entry_for_item_value_06(furniture_record, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        Item__data(r1, r1_1);
        u32 r0_2 = u32(item->id) & ~0x8000u;  // (from the original)
        if (r0_2 - 0x20a1u == 0) {  // (from the original)
            u32 r0_3 = FurnitureRecord__has_slot_value(r0_1, 1u);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                goto L_76a228;
            }
            return 0u;
        }
        if (r0_2 - 0x20a2u == 0) {  // (from the original)
            u32 r0_4 = FurnitureRecord__has_slot_value(r0_1, 2u);
            r1_1 = guest::cpu()->r[1];
            if (r0_4 != 0) {
                goto L_76a228;
            }
            return 0u;
        }
        if (r0_2 - 0x20a3u == 0) {  // (from the original)
            u32 r0_5 = FurnitureRecord__has_slot_value(r0_1, 3u);
            r1_1 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                goto L_76a228;
            }
            return 0u;
        }
        if (r0_2 - 0x20a4u == 0) {  // (from the original)
            u32 r0_6 = FurnitureRecord__has_slot_value(r0_1, 4u);
            r1_1 = guest::cpu()->r[1];
            if (r0_6 != 0) {
                goto L_76a228;
            }
            return 0u;
        }
        if (r0_2 - 0x20a5u == 0) {  // (from the original)
            u32 r0_7 = FurnitureRecord__has_slot_value(r0_1, 5u);
            r1_1 = guest::cpu()->r[1];
            if (r0_7 != 0) {
                goto L_76a228;
            }
            return 0u;
        }
        r1_1 = r0_2 - 0x20a6u;  // (from the original)
        if (r1_1 != 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r0_8 = FurnitureRecord__has_slot_value(r0_1, 6u);
        r1_1 = guest::cpu()->r[1];
        if (r0_8 == 0) {
            return 0u;
        }
L_76a228:;
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076a11c
GUEST_EXPORT_FRAMED(0x0076a11c, d_0076a11c::FurnitureRecord__slot_for_item, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076a4ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item's flags have any of the bits 0x388.
namespace d_0076a4ac {


u32 Item__has_flags_388(gptr<Item> item) {
    u32 r0_1 = u32(item->flags) & 0x388u;  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0076a4ac
GUEST_EXPORT(0x0076a4ac, d_0076a4ac::Item__has_flags_388);

// f_0076a590: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For an item of category 0x33 or 0x34: the item at the same offset in category 0x75 or 0x76; 0x7ffe otherwise or out
// of range.
namespace d_0076a590 {

struct __attribute__((packed)) Local_0076a590_r0_6 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_0076a590_r0_6, half_0, 0x0);
GUEST_OFFSET(Local_0076a590_r0_6, word_4, 0x4);

inline constexpr guest::Function<0x005359fc, u32(u32)> category_info;
inline constexpr guest::Function<0x005361a8, u32(u32, u32)> Item__data;

u32 Item__matching_item_in_75_76(u32 item, u32 r1) {
    gptr<Local_0076a590_r0_6> r0_6 = gptr<Local_0076a590_r0_6>(0u);
    u32 r0_10 = 0;
    u32 item_data_4 = Item__data(item, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (item_data_4 != 0) {
        u32 r0_2 = *gptr<u8>(item_data_4 + 0xau);  // (from the original)
        if (r0_2 < 0x9bu) {  // (from the original)
            u32 r5_1 = ~0u;
            if (r0_2 != 0x33u) {  // (from the original)
                if (r0_2 == 0x34u) {  // (from the original)
                    u32 item_data_5 = Item__data(item, r1_1);
                    if (item_data_5 != 0) {
                        u32 r0_4 = *gptr<u8>(item_data_5 + 0xau);  // (from the original)
                        u32 r4_1 = u32(*gptr<u16>(item)) & ~0x8000u;  // (from the original)
                        if (r0_4 >= 0x9bu) {  // (from the original)
                            r0_4 = 0u;
                        }
                        u32 info_3 = category_info(r0_4);
                        r5_1 = r4_1 - u32(*gptr<u16>(info_3));
                    }
                    r0_6 = gptr<Local_0076a590_r0_6>(category_info(0x76u));  // (from the original)
                    r1_1 = r0_6->word_4;
                    if (r1_1 <= r5_1) {
                        guest::cpu()->r[1] = r1_1;
                        return 0x7ffeu;  // (from the original)
                    }
                    r0_10 = uxth(u32(r0_6->half_0) + r5_1);
                    guest::cpu()->r[1] = r1_1;
                    return r0_10;
                }
                guest::cpu()->r[1] = r1_1;
                return 0x7ffeu;  // (from the original)
            }
            u32 item_data_6 = Item__data(item, r1_1);
            if (item_data_6 != 0) {
                u32 r0_8 = *gptr<u8>(item_data_6 + 0xau);  // (from the original)
                u32 r4_2 = u32(*gptr<u16>(item)) & ~0x8000u;  // (from the original)
                if (r0_8 >= 0x9bu) {  // (from the original)
                    r0_8 = 0u;
                }
                u32 info_4 = category_info(r0_8);
                r5_1 = r4_2 - u32(*gptr<u16>(info_4));
            }
            r0_6 = gptr<Local_0076a590_r0_6>(category_info(0x75u));  // (from the original)
            r1_1 = r0_6->word_4;
            if (r1_1 <= r5_1) {
                guest::cpu()->r[1] = r1_1;
                return 0x7ffeu;  // (from the original)
            }
            r0_10 = uxth(u32(r0_6->half_0) + r5_1);
            guest::cpu()->r[1] = r1_1;
            return r0_10;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0x7ffeu;  // (from the original)
}

}  // namespace d_0076a590
GUEST_EXPORT_FRAMED(0x0076a590, d_0076a590::Item__matching_item_in_75_76, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076a730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the current player's pocket item in `slot` is unlocked and usable in the current scene (0076a7f8, after the
// scene checks).
namespace d_0076a730 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x00313124, u32(u32)> item_has_flags_and_check_b;
inline constexpr guest::Function<0x005b4724, u32(u32)> scene_allows_items;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> Pockets__item_with_lock;
inline constexpr guest::Function<0x00724578, u32(u32, u32)> Pockets__lock_of;
inline constexpr guest::Function<0x0076a7f8, u32(u32, u32, u32, u32)> Item__category_kind;

u32 current_player_can_use_pocket_item(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_9 = 0;
    u32 player_3 = get_current_player(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = Pockets__item_with_lock(player_3 + 0x6bd0u, r1, 0u);  // (from the original)
    u32 player_4 = get_current_player(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 lock_2 = Pockets__lock_of(player_4 + 0x6bd0u, r1);  // (from the original)
    u32 is_empty_2 = Item__is_empty(r0_3);
    if (is_empty_2 == 0 && lock_2 == 0) {
        u32 scene = current_scene_id(is_empty_2);
        r0_9 = scene_has_flags(8u, scene);
        if (r0_9 != 0) {
            r0_9 = scene_allows_items(r0_9);
            if (r0_9 == 0) {
                return r0_9;
            }
        }
        u32 scene_2 = current_scene_id(r0_9);
        u32 scene_flagged = scene_has_flags(4u, scene_2);
        if (scene_flagged != 0) {
            u32 r0_12 = item_has_flags_and_check_b(r0_3);
            if (r0_12 != 0) {
                return 0u;
            }
        }
        frame.release();
        return Item__category_kind(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return 0u;
}

}  // namespace d_0076a730
GUEST_EXPORT(0x0076a730, d_0076a730::current_player_can_use_pocket_item);

// f_0076a880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a special value-06 item passes its entry check (or its flagged second one) for a target whose data kind is
// 6, 7 or 0x47.
namespace d_0076a880 {

inline constexpr guest::Function<0x004e0f14, u32(u32, u32, u32, u32)> entry_for_item_value_06;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x007453f0, u32(u32, u32)> FurnitureRecord__has_slot_kind;
inline constexpr guest::Function<0x007684a4, u32(u32)> Item__has_valid_value_06;
inline constexpr guest::Function<0x0076a068, u32(u32)> Item__is_special_value_06_item;

u32 Item__is_special_tool_for(u32 item, u32 r1) {
    u32 r0_1 = entry_for_item_value_06(item, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        Item__data(r1);
        u32 r0_2 = Item__is_special_value_06_item(item);
        if (r0_2 != 0) {
            u32 furniture_record = entry_for_item_value_06(item, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            if (furniture_record != 0) {
                u32 r0_4 = FurnitureRecord__has_slot_kind(furniture_record, 1u);
                if (r0_4 == 0) {
                    u32 r0_5 = Item__has_valid_value_06(item);
                    if (r0_5 == 0) {
                        goto L_76a968;
                    }
                    u32 r0_6 = entry_for_item_value_06(item, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    if (r0_6 == 0) {
                        goto L_76a968;
                    }
                    if ((u32(*gptr<u8>(r0_6 + 0x20u)) >> 3u & 1u) == 0) {  // (from the original)
                        goto L_76a968;
                    }
                    u32 r0_7 = FurnitureRecord__has_slot_kind(furniture_record, 2u);
                    if (r0_7 == 0) {
                        goto L_76a968;
                    }
                }
                u32 item_data_3 = Item__data(r1);
                if (item_data_3 != 0) {
                    u32 r0_9 = *gptr<u8>(item_data_3 + 0xau);  // (from the original)
                    if (r0_9 < 0x9bu && (r0_9 == 6u || r0_9 == 7u)) {  // (from the original)
                        return 1u;
                    }
                }
                u32 item_data_4 = Item__data(r1);
                if (item_data_4 != 0) {
                    u32 r0_11 = *gptr<u8>(item_data_4 + 0xau);  // (from the original)
                    if (r0_11 < 0x9bu && r0_11 == 0x47u) {  // (from the original)
                        return 1u;
                    }
                }
            }
        }
L_76a968:;
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0076a880
GUEST_EXPORT_FRAMED(0x0076a880, d_0076a880::Item__is_special_tool_for, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076ab7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For an item of the set at 0x76af88: whether its flags have bit 3 or bit (index + 7).
namespace d_0076ab7c {

struct __attribute__((packed)) Local_0076ab7c_r2_2 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Local_0076ab7c_r2_2, half_2, 0x2);

inline constexpr guest::Function<0x0076af88, u32(u32, u32, u32, u32)> item_number_in_set_76af88;

u32 Item__has_variant_flag(u32 item, u32 r1) {
    u32 r0_1 = item_number_in_set_76af88(item, r1, item, guest::cpu()->r[3]);
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = item_number_in_set_76af88(r2_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    gptr<Local_0076ab7c_r2_2> r2_2 = gptr<Local_0076ab7c_r2_2>(guest::cpu()->r[2]);
    if (r0_2 != 0) {
        if (((u32(r2_2->half_2) & 8u) >> 3) != 0) {
            return 1u;
        }
    }
    u32 r0_3 = lsl_r(1u, r1_2 + 7u & 0xff) & ~0xc000u & u32(r2_2->half_2);  // (from the original)
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_2 + 7u;
        return r0_3;
    }
    guest::cpu()->r[1] = r1_2 + 7u;
    return 1u;
}

}  // namespace d_0076ab7c
GUEST_EXPORT_FRAMED(0x0076ab7c, d_0076ab7c::Item__has_variant_flag, 0x4000);  // pushes {lr} first, as the original

// f_0076acd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item is 0x334d or 0x334e with a level (low 4 bits of its flags) of 8 or more.
namespace d_0076acd8 {

struct __attribute__((packed)) Object_0076acd8_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_0076acd8_0, half_0, 0x0);
GUEST_OFFSET(Object_0076acd8_0, half_2, 0x2);


u32 Item__is_334d_with_level_8(gptr<Object_0076acd8_0> item) {
    u32 r12_1 = item->half_0;
    u32 r1_1 = r12_1 & ~0x8000u;  // (from the original)
    if (r1_1 != 0x334du && r1_1 != 0x334eu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = r12_1 & ~0x8000u;  // (from the original)
    if (r1_2 != 0x334du && r1_2 != 0x334eu) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if ((u32(item->half_2) & 0xfu) >= 8u) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0076acd8
GUEST_EXPORT(0x0076acd8, d_0076acd8::Item__is_334d_with_level_8);

// f_0076ad24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 4-6 of the flags of an item of the set at 0x76af88 when bit 3 is set; -1 otherwise.
namespace d_0076ad24 {

inline constexpr guest::Function<0x0076af88, u32(u32, u32)> item_number_in_set_76af88;

u32 Item__variant_of_set_76af88(u32 item) {
    u32 r0_1 = item_number_in_set_76af88(item, item);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return ~0u;
    }
    u32 r0_3 = *gptr<u16>(r1_1 + 2u);
    u32 r1_2 = (r0_3 & 8u) >> 3;
    if (r1_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        return ~0u;
    }
    u32 r1_3 = (r0_3 & 8u) >> 3;
    if (r1_3 != 0) {
        guest::cpu()->r[1] = r1_3;
        return r0_3 >> 4u & 7u;
    }
    guest::cpu()->r[1] = r1_3;
    return ~0u;
}

}  // namespace d_0076ad24
GUEST_EXPORT_FRAMED(0x0076ad24, d_0076ad24::Item__variant_of_set_76af88, 0x4000);  // pushes {lr} first, as the original

// f_0076ad64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item's flags without the top two bits.
namespace d_0076ad64 {


u32 Item__flag_value(gptr<Item> item) {
    return u32(item->flags) & ~0xc000u;  // (from the original)
}

}  // namespace d_0076ad64
GUEST_EXPORT(0x0076ad64, d_0076ad64::Item__flag_value);

// f_0076adf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The level (low 4 bits of the flags) of item 0x334d or 0x334e, else 0.
namespace d_0076adf4 {


u32 Item__level_of_334d(gptr<Item> item) {
    u32 r1_1 = u32(item->id) & ~0x8000u;  // (from the original)
    u32 r0_1 = (r1_1 == 0x334du || r1_1 == 0x334eu) ? u32(item->flags) & 0xfu : 0u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076adf4
GUEST_EXPORT(0x0076adf4, d_0076adf4::Item__level_of_334d);

// f_0076ae1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The flag value (without the top two bits) of item 0x2000, else 0.
namespace d_0076ae1c {


u32 Item__value_if_2000(gptr<Item> item) {
    u32 r1_1 = u32(item->id) & ~0x8000u;  // (from the original)
    u32 r0_1 = r1_1 == 0x2000u ? u32(item->flags) & ~0xc000u : 0u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076ae1c
GUEST_EXPORT(0x0076ae1c, d_0076ae1c::Item__value_if_2000);

// f_0076ae38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is 0x3057, 0x3058, 0x305a, 0x305b, 0x3064, 0x3065, 0x3067 or 0x3068.
namespace d_0076ae38 {


u32 Item__is_3057_or_3064_group(gptr<Item> item) {
    u32 r0_1 = u32(item->id) & ~0x8000u;  // (from the original)
    u32 res_1 = r0_1 - 0x3064u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r2_1 = r0_1 - 0x3064u;  // (from the original)
    if (zf_1) {
        guest::cpu()->r[1] = 0x3064u;  // (from the original)
        return 1u;
    }
    if (zf_1 || (res_1 >> 0x1f) != (((r0_1 ^ 0x3064u) & (r0_1 ^ res_1)) >> 0x1f)) {  // (from the original)
        u32 zf_2 = r0_1 - 0x3057u == 0;  // (from the original)
        if (!zf_2) {
            zf_2 = r0_1 - 0x3057u == 1u;  // (from the original)
        }
        if (zf_2 || r0_1 - 0x3057u == 3u || r0_1 - 0x3057u == 4u) {  // (from the original)
            guest::cpu()->r[1] = 0x3064u;  // (from the original)
            return 1u;
        }
        guest::cpu()->r[1] = 0x3064u;  // (from the original)
        return 0u;
    }
    if (r2_1 != 1u && r2_1 != 3u && r2_1 != 4u) {
        guest::cpu()->r[1] = 0x3064u;  // (from the original)
        return 0u;
    }
    guest::cpu()->r[1] = 0x3064u;  // (from the original)
    return 1u;
}

}  // namespace d_0076ae38
GUEST_EXPORT(0x0076ae38, d_0076ae38::Item__is_3057_or_3064_group);

// f_0076afbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item has kind-11 data with a family (+0x11, 1-0x55) whose group (+0x19 >> 4) is 0-2 or 6 and above.
namespace d_0076afbc {

inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x007486dc, u32(u32)> ItemData__has_kind_11;

u32 Item__is_kind_11_family_up_to_2(u32 item, u32 r1) {
    for (;;) {
        u32 item_data_2 = Item__data(item, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (item_data_2 == 0) {
            return 0u;
        }
        u32 r0_3 = ItemData__has_kind_11(item_data_2);
        if (r0_3 == 0) {
            return 0u;
        }
        item = Item__data(item, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (!1) {
            break;
        }
        u32 r1_1 = *gptr<u8>(item + 0x11u);  // (from the original)
        if (r1_1 >= 0x56u || r1_1 == 0) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        u32 r0_1 = *gptr<u8>(item + 0x19u);  // (from the original)
        if (6u <= (r0_1 >> 4)) {
            guest::cpu()->r[1] = 6u;
            return 1u;
        }
        u32 res_1 = r0_1 >> 4;
        u32 zf_1 = res_1 == 0;
        if (!zf_1) {
            zf_1 = res_1 == 1u;
        }
        if (!zf_1) {
            zf_1 = res_1 == 2u;
        }
        if (zf_1) {
            guest::cpu()->r[1] = 6u;
            return 1u;
        }
        guest::cpu()->r[1] = 6u;
        return 0u;
        guest::preempt();
    }
    return 0u;
}

}  // namespace d_0076afbc
GUEST_EXPORT_FRAMED(0x0076afbc, d_0076afbc::Item__is_kind_11_family_up_to_2, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076b2b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the furniture record's open slots with items.
namespace d_0076b2b4 {

struct __attribute__((packed)) FurnitureRecord {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(FurnitureRecord, half_2, 0x2);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x004e0f14, u32(u32)> entry_for_item_value_06;
inline constexpr guest::Function<0x007450c4, u32(u32, u32)> FurnitureSlot__kind_value;
inline constexpr guest::Function<0x007453a4, u32(u32, u32)> FurnitureRecord__is_open_slot;
inline constexpr guest::Function<0x007684a4, u32(u32, u32, u32, u32)> Item__has_valid_value_06;
inline constexpr guest::Function<0x0076a11c, u32(u32, u32)> FurnitureRecord__slot_for_item;

struct __attribute__((packed)) Frame_0076b2b4 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0076b2b4, word_0, 0x0);
GUEST_SIZE(Frame_0076b2b4, 0xc);

u32 FurnitureRecord__fill_slots(gptr<FurnitureRecord> furniture_record, u32 r1) {
    guest::StackFrameOf<Frame_0076b2b4> frame;  // the original's stack frame
    u32 r0 = furniture_record.addr();
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r8 = 0;
    u32 r10 = 0;
    u32 r11 = 0;
    u32 r0_2 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r9 = r0;
    u32 r0_1 = Item__has_valid_value_06(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 r4 = 0u;
    if (r0_1 == 0) {
        r10 = r4;
        goto L_76b304;
    }
    r0_2 = u32(furniture_record->half_2) >> 0xau & 0xfu;  // (from the original)
    if (r0_2 > 0xdu || r0_2 == 0) {  // (from the original)
        r10 = r4;
        goto L_76b304;
    }
    r10 = r0_2 <= 7u ? 1u : r0_2 <= 9u ? 2u : 4u;
L_76b304:;
    u32 r0_3 = Item__has_valid_value_06(r9, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 == 0) {
        r5 = 0u;
    } else {
        r5 = u32(*gptr<u16>(r9 + 2u)) >> 0xau & 0xfu;  // (from the original)
        if (r5 > 0xdu) {  // (from the original)
            r5 = r4;
        }
    }
    if (r10 == 1u) {
        return r5;
    }
    u32 r0_5 = Item__has_valid_value_06(r9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 == 0) {
        goto L_76b390;
    }
    r0_6 = entry_for_item_value_06(r9);
    r6 = r0_6;
    if (r0_6 == 0) {
        goto L_76b390;
    } else {
        r8 = 0u;
        r4 = 1u;
    }
    do {
        u32 r0_7 = FurnitureRecord__is_open_slot(r6, r4);
        if (r0_7 != 0) {
            r8 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 <= 0xeu);  // (from the original)
    goto L_76b394;
L_76b390:;
    r8 = 0u;
L_76b394:;
    r6 = 0u;
    r0_4 = entry_for_item_value_06(r9);
    frame->word_0 = r0_4;
    if (r0_4 != 0) {
        r4 = r8 + 1u;
        r7 = r8 + 3u;
        if (r7 > r4) {
            r11 = 0x20a2u;  // (from the original)
            do {
                u32 r0_9 = FurnitureSlot__kind_value(frame->word_0, r4);
                if (r0_9 != 1u) {
                    if (r0_9 == 2u) {
                        u32 item = frame.at(4).addr();
                        construct_item(item, r11);
                        u32 slot_7 = FurnitureRecord__slot_for_item(r9, item);
                        if (slot_7 != 0) {
                            r6 += 1u;
                        }
                        if (r5 == 9u) {
                            goto L_76b49c;
                        }
                    }
                } else {
                    u32 r0_12 = frame.at(4).addr();
                    construct_item(r0_12, 0x20a1u);  // (from the original)
                    u32 slot_8 = FurnitureRecord__slot_for_item(r9, r0_12);
                    if (slot_8 != 0) {
                        r6 += 1u;
                    }
                    if (r5 == 8u) {
                        goto L_76b49c;
                    }
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < r7);
        }
        r7 = 0u;
        r0_14 = Item__has_valid_value_06(r9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_14 == 0) {
            goto L_76b4a8;
        }
        r0_15 = entry_for_item_value_06(r9);
        r11 = r0_15;
        if (r0_15 == 0) {
            goto L_76b4a8;
        } else {
            r6 = 0u;
            r4 = 1u;
        }
        do {
            u32 r0_16 = FurnitureSlot__kind_value(r11, r4);
            if (r0_16 == 1u || r0_16 == 2u) {
                r6 += 1u;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0xeu);  // (from the original)
        goto L_76b4ac;
L_76b49c:;
        r0_4 = r8 + r6;
    }
    return r0_4;
L_76b4a8:;
    r6 = 0u;
L_76b4ac:;
    r6 += r8;
    r4 = r6 + 1u;
    if (r4 <= 0xdu) {  // (from the original)
        r8 = 0x20a3u;  // (from the original)
        r11 = r8 + 1u;
        do {
            u32 r0_18 = FurnitureSlot__kind_value(frame->word_0, r4);
            if (r0_18 != 3u) {
                if (r0_18 == 4u) {
                    u32 r0_19 = frame.at(4).addr();
                    construct_item(r0_19, r11);
                    u32 slot_9 = FurnitureRecord__slot_for_item(r9, r0_19);
                    if (slot_9 != 0) {
                        r7 += 1u;
                    }
                    if (r5 == 0xbu) {  // (from the original)
                        return r6 + r7;
                    }
                } else if (r0_18 == 5u) {
                    u32 r0_21 = frame.at(4).addr();
                    construct_item(r0_21, 0x20a5u);  // (from the original)
                    u32 slot_10 = FurnitureRecord__slot_for_item(r9, r0_21);
                    if (slot_10 != 0) {
                        r7 += 1u;
                    }
                    if (r5 == 0xcu) {  // (from the original)
                        return r6 + r7;
                    }
                } else if (r0_18 == 6u) {
                    u32 r0_23 = frame.at(4).addr();
                    construct_item(r0_23, 0x20a6u);  // (from the original)
                    u32 slot_11 = FurnitureRecord__slot_for_item(r9, r0_23);
                    if (slot_11 != 0) {
                        r7 += 1u;
                    }
                    if (r5 == 0xdu) {  // (from the original)
                        return r6 + r7;
                    }
                }
            } else {
                u32 r0_25 = frame.at(4).addr();
                construct_item(r0_25, r8);
                u32 slot_12 = FurnitureRecord__slot_for_item(r9, r0_25);
                if (slot_12 != 0) {
                    r7 += 1u;
                }
                if (r5 == 0xau) {  // (from the original)
                    return r6 + r7;
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 <= 0xdu);  // (from the original)
    }
    return 0u;
}

}  // namespace d_0076b2b4
GUEST_EXPORT_FRAMED(0x0076b2b4, d_0076b2b4::FurnitureRecord__fill_slots, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0076b984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The part of the item's wear entry from +4 (clearing its +0xc), or 0 when it has none or its kind (+4) is 0.
namespace d_0076b984 {

struct __attribute__((packed)) Local_0076b984_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x7];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Local_0076b984_r0_1, byte_4, 0x4);
GUEST_OFFSET(Local_0076b984_r0_1, byte_c, 0xc);

inline constexpr guest::Function<0x00535a68, u32(u32)> Item__wear_class_entry;

u32 Item__wear_entry_part(u32 item) {
    gptr<Local_0076b984_r0_1> r0_1 = gptr<Local_0076b984_r0_1>(Item__wear_class_entry(item));
    if (r0_1.addr() == 0) {
        guest::cpu()->r[1] = r0_1.addr();
        return r0_1.addr();
    }
    u32 r0_2 = r0_1.addr() + 4u;
    r0_1->byte_c = 0;
    u32 r1_1 = r0_1->byte_4;
    if (r1_1 == 0) {
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0076b984
GUEST_EXPORT_FRAMED(0x0076b984, d_0076b984::Item__wear_entry_part, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076bab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 8-11 of the item's flags.
namespace d_0076bab4 {


u32 Item__flag_bits_8_to_11(gptr<Item> item) {
    return u32(item->flags) >> 8u & 0xfu;  // (from the original)
}

}  // namespace d_0076bab4
GUEST_EXPORT(0x0076bab4, d_0076bab4::Item__flag_bits_8_to_11);

// f_0076bb90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The colour multiplier of an item with a valid value-06 entry and a colour variant (bits 10-13 of its flags) of
// 0xa-0xd; otherwise the static white (1, 1, 1, 1).
namespace d_0076bb90 {

struct __attribute__((packed)) Object_0076bb90_0 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Object_0076bb90_0, half_2, 0x2);

inline constexpr u32 item_color_multiplier_state_address = 0x0095bfd8u;
inline constexpr u32 global_009c9068_address = 0x009c9068u;
inline constexpr u32 global_009c9078_address = 0x009c9078u;
inline constexpr u32 global_009c9088_address = 0x009c9088u;
inline constexpr u32 global_009c9098_address = 0x009c9098u;
inline constexpr u32 item_color_multipliers_address = 0x00ad4ad4u;
inline guest::global<u32, 0x0095bfd8> item_color_multiplier_state;
inline guest::global<u32, 0x00ad4ad4> item_color_multipliers;
inline guest::global<u32, 0x00ad4ad8> global_00ad4ad8;
inline guest::global<u32, 0x00ad4adc> global_00ad4adc;
inline guest::global<u32, 0x00ad4ae0> global_00ad4ae0;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;
inline constexpr guest::Function<0x007684a4, u32(u32)> Item__has_valid_value_06;

u32 Item__color_multiplier(gptr<Object_0076bb90_0> item, float S0) {
    u32 r0_1 = Item__has_valid_value_06(item.addr());
    if (r0_1 != 0) {
        u32 r0_2 = u32(item->half_2) >> 0xau & 0xfu;  // (from the original)
        if (r0_2 <= 0xdu) {  // (from the original)
            u32 zf_1 = r0_2 == 0;
            u32 cf_1 = r0_2 >= 0u;
            if (!zf_1) {
                zf_1 = r0_2 == 7u;
                cf_1 = r0_2 >= 7u;
            }
            if (cf_1 && !zf_1) {
                zf_1 = r0_2 == 9u;
                cf_1 = r0_2 >= 9u;
            }
            if (cf_1 && !zf_1) {
                u32 r0_3 = Item__has_valid_value_06(item.addr());
                if (r0_3 != 0) {
                    u32 r0_4 = u32(item->half_2) >> 0xau & 0xfu;  // (from the original)
                    if (r0_4 <= 0xdu) {  // (from the original)
                        if (r0_4 == 0xau) {  // (from the original)
                            return global_009c9068_address;
                        }
                        if (r0_4 == 0xbu) {  // (from the original)
                            return global_009c9078_address;
                        }
                        if (r0_4 == 0xcu) {  // (from the original)
                            return global_009c9088_address;
                        }
                        if (r0_4 == 0xdu) {  // (from the original)
                            return global_009c9098_address;
                        }
                    }
                }
            }
        }
    }
    if ((*item_color_multiplier_state & 1u) != 0) {
        return item_color_multipliers_address;
    }
    u32 first_time = static_guard_acquire(item_color_multiplier_state_address);
    if (first_time == 0) {
        return item_color_multipliers_address;
    }
    float S0_3 = 1.0f;
    *item_color_multipliers = std::bit_cast<u32>(S0_3);
    *global_00ad4ad8 = std::bit_cast<u32>(S0_3);
    *global_00ad4adc = std::bit_cast<u32>(S0_3);
    *global_00ad4ae0 = std::bit_cast<u32>(S0_3);
    guest::cpu()->s[0] = S0_3;
    return item_color_multipliers_address;
}

}  // namespace d_0076bb90
GUEST_EXPORT_FRAMED(0x0076bb90, d_0076bb90::Item__color_multiplier, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076bc84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The museum exhibit kind of a collectible by its category and size class (+0x1b >> 6): fish 0x4a-0x4c, insects
// 0x4d-0x4f, fossils 0x50-0x52, art 0x53-0x54; 0xa5 for others.
namespace d_0076bc84 {

struct __attribute__((packed)) ItemData {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 unknown_b[0x10];  // (not used here)
    u8 byte_1b;
};
GUEST_OFFSET(ItemData, byte_a, 0xa);
GUEST_OFFSET(ItemData, byte_1b, 0x1b);

inline constexpr guest::Function<0x005361a8, u32(u32, u32)> Item__data;

u32 Item__museum_exhibit(u32 item, u32 r1) {
    u32 r0_7 = 0;
    gptr<ItemData> item_data_2 = gptr<ItemData>(Item__data(item, r1));
    if (item_data_2.addr() == 0) {
        return 0xa5u;  // (from the original)
    }
    u32 r1_2 = item_data_2->byte_a;
    u32 r0_2 = u32(item_data_2->byte_1b) >> 6;
    if (r1_2 >= 0x9bu) {  // (from the original)
        r1_2 = 0u;
    } else if (r1_2 == 0x2cu) {  // (from the original)
        if (r0_2 < 3u) {
            guest::cpu()->r[1] = r1_2;
            return (r0_2 + 0x50u) & 0xffu;  // (from the original)
        }
        guest::cpu()->r[1] = r1_2;
        return 0xa5u;  // (from the original)
    }
    if (s32(r1_2) <= 0x2c) {  // (from the original)
        if (r1_2 == 0x24u) {  // (from the original)
            if (r0_2 < 3u) {
                guest::cpu()->r[1] = r1_2;
                return (r0_2 + 0x4du) & 0xffu;  // (from the original)
            }
            guest::cpu()->r[1] = r1_2;
            return 0xa5u;  // (from the original)
        }
        if (r1_2 != 0x27u && r1_2 != 0x28u) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return 0xa5u;  // (from the original)
        }
        if (r0_2 >= 3u) {
            guest::cpu()->r[1] = r1_2;
            return 0xa5u;  // (from the original)
        } else {
            r0_7 = r0_2 + 0x4au;  // (from the original)
        }
        guest::cpu()->r[1] = r1_2;
        return r0_7 & 0xffu;  // (from the original)
    } else if (r1_2 != 0x54u && r1_2 != 0x58u) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0xa5u;  // (from the original)
    }
    if (r0_2 < 2u) {
        guest::cpu()->r[1] = r1_2;
        return (r0_2 + 0x53u) & 0xffu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_2;
    return 0xa5u;  // (from the original)
}

}  // namespace d_0076bc84
GUEST_EXPORT_FRAMED(0x0076bc84, d_0076bc84::Item__museum_exhibit, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076c030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the item for the furniture record's entry by its size class.
namespace d_0076c030 {

struct __attribute__((packed)) Local_0076c030_r0_3 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_0076c030_r0_3, half_0, 0x0);
GUEST_OFFSET(Local_0076c030_r0_3, word_4, 0x4);

inline guest::global<u16, 0x0095bfdc> empty_item;
inline guest::global<u16, 0x0095bfde> furniture_record_state;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> SpecialItem__variant;
inline constexpr guest::Function<0x005359fc, u32(u32)> category_info;
inline constexpr guest::Function<0x0076bb34, u32(u32, u32, u32, u32)> item_size_class;
inline constexpr guest::Function<0x0076c1a4, u32(u32)> Item__value_06_index;

struct __attribute__((packed)) Frame_0076c030 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0076c030, half_0, 0x0);
GUEST_OFFSET(Frame_0076c030, half_2, 0x2);
GUEST_OFFSET(Frame_0076c030, half_4, 0x4);
GUEST_OFFSET(Frame_0076c030, half_6, 0x6);
GUEST_SIZE(Frame_0076c030, 0xc);

u32 FurnitureRecord__make_item(u32 furniture_record, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0076c030> frame;  // the original's stack frame
    u32 r5_1 = 0;
    gptr<Local_0076c030_r0_3> r0_3 = gptr<Local_0076c030_r0_3>(0u);
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_1 = item_size_class(r1, r1, r2, r3);
    u32 r7_1 = 0x7ffeu;  // (from the original)
    if (r0_1 != 2u) {
        if (r0_1 == 4u) {
            u32 r0_2 = Item__value_06_index(r1);
            r5_1 = r0_2;
            r0_3 = gptr<Local_0076c030_r0_3>(category_info(7u));
            if (r0_3->word_4 > r5_1) {
                goto L_76c08c;
            }
            goto L_76c0c0;
        }
        if (r0_1 != 8u) {
            r1_7 = *empty_item;
            *gptr<u16>(furniture_record) = u16(r1_7);
            r0_9 = *furniture_record_state;
            *gptr<u16>(furniture_record + 2u) = u16(r0_9);
            guest::cpu()->r[1] = r1_7;
            return r0_9;
        }
        construct_item(frame.at(0).addr(), 0x33a7u);  // (from the original)
        u32 r0_5 = item_size_class(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_5 == 8u) {
            u32 r0_6 = Item__value_06_index(r1);
            if (r0_6 < 0x30u) {  // (from the original)
                u32 r1_5 = 1u;
                if (r0_6 < 0x28u) {  // (from the original)
                    r2_5 = u32(u64(0xcccccccdu) * r0_6 >> 0x20) >> 3;  // (from the original)
                    r3_6 = r0_6 + (0u - r2_5) * 0xau;  // (from the original)
                } else {
                    r1_5 = 0u;
                    r2_5 = r1_5;
                    r3_6 = r0_6 - 0x28u;  // (from the original)
                }
                u32 r1_6 = 0u;
                if (sxtb(r1_5) == 0) {
                    r1_6 = 3u;
                }
                SpecialItem__variant(frame.at(0).addr(), r1_6, r2_5, r3_6);
                r1_7 = guest::cpu()->r[1];
                *gptr<u16>(furniture_record) = frame->half_0;
                r0_9 = frame->half_2;
                *gptr<u16>(furniture_record + 2u) = u16(r0_9);
                return r0_9;
            }
        }
        r1_7 = *empty_item;
        *gptr<u16>(furniture_record) = u16(r1_7);
        r0_9 = *furniture_record_state;
        *gptr<u16>(furniture_record + 2u) = u16(r0_9);
        guest::cpu()->r[1] = r1_7;
        return r0_9;
    }
    r0_10 = Item__value_06_index(r1);
    r5_1 = r0_10;
    r0_3 = gptr<Local_0076c030_r0_3>(category_info(6u));
    if (r0_3->word_4 <= r5_1) {
        goto L_76c0c0;
    }
L_76c08c:;
    r7_1 = uxth(u32(r0_3->half_0) + r5_1);
L_76c0c0:;
    construct_item(frame.at(4).addr(), r7_1);
    *gptr<u16>(furniture_record) = frame->half_4;
    u32 r0_12 = frame->half_6;
    *gptr<u16>(furniture_record + 2u) = u16(r0_12);
    return r0_12;
}

}  // namespace d_0076c030
GUEST_EXPORT_FRAMED(0x0076c030, d_0076c030::FurnitureRecord__make_item, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076c234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item has size class 1, variant 1 and its value-06 entry has flag 8.
namespace d_0076c234 {

inline constexpr guest::Function<0x004e0f14, u32(u32)> entry_for_item_value_06;
inline constexpr guest::Function<0x0076bb34, u32(u32)> item_size_class;
inline constexpr guest::Function<0x0076c1a4, u32(u32, u32, u32, u32)> Item__value_06_index;

u32 Item__is_size_1_flagged(u32 item) {
    u32 r0_4 = 0;
    u32 r0_1 = Item__value_06_index(item, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = entry_for_item_value_06(item);
    if (r0_2 != 0) {
        u32 r0_3 = item_size_class(item);
        r0_4 = r0_3 == 1u && r0_1 == 1u && (u32(*gptr<u8>(r0_2 + 0x20u)) & 8u) != 0u;  // (from the original)
    } else {
        r0_4 = 0u;
    }
    return r0_4;
}

}  // namespace d_0076c234
GUEST_EXPORT_FRAMED(0x0076c234, d_0076c234::Item__is_size_1_flagged, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076c564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is 0x7c-0x7f.
namespace d_0076c564 {

struct __attribute__((packed)) Object_0076c564_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0076c564_0, half_0, 0x0);


u32 Item__is_id_7c_to_7f(gptr<Object_0076c564_0> item) {
    u32 r0_1 = u32(item->half_0) & ~0x8000u;  // (from the original)
    if (r0_1 == 0x7cu || r0_1 == 0x7du) {  // (from the original)
        return 1u;
    }
    if (r0_1 != 0x7eu && r0_1 != 0x7fu) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_0076c564
GUEST_EXPORT(0x0076c564, d_0076c564::Item__is_id_7c_to_7f);

// f_0076c674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 of the item's flags.
namespace d_0076c674 {


u32 Item__flag_bit_0(gptr<Item> item) {
    return u32(item->flags) & 1u;
}

}  // namespace d_0076c674
GUEST_EXPORT(0x0076c674, d_0076c674::Item__flag_bit_0);

// f_0076c680: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item id (bit 15 ignored) is 0x334d or 0x334e.
namespace d_0076c680 {


u32 Item__is_id_334d_or_334e(gptr<Item> item) {
    u32 r0_1 = u32(item->id) & ~0x8000u;  // (from the original)
    u32 zf_1 = r0_1 - 0x334du == 0;  // (from the original)
    u32 r1_1 = r0_1 - 0x334du;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_1 - 0x334eu == 0;  // (from the original)
        r1_1 = r0_1 - 0x334eu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return zf_1 ? 1u : 0u;
}

}  // namespace d_0076c680
GUEST_EXPORT(0x0076c680, d_0076c680::Item__is_id_334d_or_334e);

// f_0076c6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unpacks the 16 notes of a town tune (one nibble each) into 16 bytes.
namespace d_0076c6e4 {


u32 unpack_town_tune(u32 packed_tune, u32 town_tune_notes_address) {
    u32 res_1 = 0;
    u32 r2 = 0u;
    u32 r3 = r2;
    u32 r4 = 8u;
    u32 r5 = 0x10u;  // (from the original)
    u32 r6 = 1u;
    do {
        *gptr<u8>(r5 > r2 << 1 ? town_tune_notes_address + r3 : town_tune_notes_address) = u8(u32(*gptr<u8>(packed_tune)) & 0xfu);  // (from the original)
        u32 v_1 = *gptr<u8>(packed_tune);
        packed_tune += 1u;
        u32 r12_1 = r6 + (r2 << 1) >= 0x10u ? town_tune_notes_address : town_tune_notes_address + r3 + 1u;  // (from the original)
        res_1 = r4 - 1u;
        r4 = res_1;
        r3 += 2u;
        r2 += 1u;
        *gptr<u8>(r12_1) = u8(v_1 >> 4);
        guest::preempt();
    } while (res_1 != 0);
    return packed_tune;
}

}  // namespace d_0076c6e4
GUEST_EXPORT_FRAMED(0x0076c6e4, d_0076c6e4::unpack_town_tune, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_0076c74c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the art, fish, insects (and the rest) are all recorded.
namespace d_0076c74c {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076c8b8, u32(u32)> Museum__all_fish_recorded;
inline constexpr guest::Function<0x0076d134, u32(u32, u32, u32, u32)> Museum__all_art_recorded;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076c74c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076c74c, word_0, 0x0);
GUEST_SIZE(Frame_0076c74c, 0x4);

u32 Museum__is_complete(u32 museum, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0076c74c> frame;  // the original's stack frame
    u32 r4 = 0;
    frame->word_0 = r3;
    u32 r5 = museum;
    u32 r0_1 = Museum__all_art_recorded(museum, r1, r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = Museum__all_fish_recorded(r5);
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        return r0_2;
    } else {
        r4 = 0u;
    }
L_76c774:;
    Item__from_category_index(frame.at(0).addr(), 0x24u, r4, r3);  // (from the original)
    u32 record_state_3 = record_state_of_item(r5, frame.at(0).addr());
    r3 = guest::cpu()->r[3];
    if (record_state_3 != 0) {
        r4 += 1u;
        if (r4 < 0x48u) {  // (from the original)
            guest::preempt();
            goto L_76c774;
        }
        r4 = 0u;
        do {
            Item__from_category_index(frame.at(0).addr(), 0x2cu, r4, r3);  // (from the original)
            u32 record_state_4 = record_state_of_item(r5, frame.at(0).addr());
            r3 = guest::cpu()->r[3];
            if (record_state_4 == 0) {
                return 0u;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x43u);  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076c74c
GUEST_EXPORT_FRAMED(0x0076c74c, d_0076c74c::Museum__is_complete, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076c808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the museum's mark for collectible `index` of a category (fossils, insects, fish, sea creatures, paintings,
// statues) is set.
namespace d_0076c808 {

struct __attribute__((packed)) Local_0076c808_r0_2 {
    u8 unknown_0[0x448];  // (not used here)
    u8 byte_448;
    u8 unknown_449[0x42];  // (not used here)
    u8 byte_48b;
    u8 unknown_48c[0x47];  // (not used here)
    u8 byte_4d3;
    u8 unknown_4d4[0x1d];  // (not used here)
    u8 byte_4f1;
    u8 unknown_4f2[0x47];  // (not used here)
    u8 byte_539;
    u8 unknown_53a[0x18];  // (not used here)
    u8 byte_552;
};
GUEST_OFFSET(Local_0076c808_r0_2, byte_448, 0x448);
GUEST_OFFSET(Local_0076c808_r0_2, byte_48b, 0x48b);
GUEST_OFFSET(Local_0076c808_r0_2, byte_4d3, 0x4d3);
GUEST_OFFSET(Local_0076c808_r0_2, byte_4f1, 0x4f1);
GUEST_OFFSET(Local_0076c808_r0_2, byte_539, 0x539);
GUEST_OFFSET(Local_0076c808_r0_2, byte_552, 0x552);

inline constexpr guest::Function<0x0076d714, u32(u32, u32, u32, u32)> Museum__index_is_valid;

u32 Museum__is_marked(u32 museum, u32 r1, u32 r2) {
    u32 r0_3 = 0;
    u32 r0_1 = Museum__index_is_valid(museum, r1, r2, r1);
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        gptr<Local_0076c808_r0_2> r0_2 = gptr<Local_0076c808_r0_2>(museum + r2);
        if (r3_1 - 0x2cu == 0) {  // (from the original)
            r0_3 = r0_2->byte_448;
        } else {
            if (s32(r3_1) < 0x2c) {  // (from the original)
                if (r3_1 == 0x24u) {  // (from the original)
                    r0_3 = r0_2->byte_4f1;
                    goto L_76c878;
                }
                if (r3_1 == 0x27u) {  // (from the original)
                    r0_3 = r0_2->byte_48b;
                    goto L_76c878;
                }
                if (r3_1 == 0x28u) {  // (from the original)
                    r0_3 = r0_2->byte_4d3;
                    goto L_76c878;
                }
                return 0u;
            }
            if (r3_1 == 0x54u) {  // (from the original)
                r0_3 = r0_2->byte_539;
            } else if (r3_1 == 0x58u) {  // (from the original)
                r0_3 = r0_2->byte_552;
            } else {
                return 0u;
            }
        }
L_76c878:;
        if (r0_3 != 0) {
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_0076c808
GUEST_EXPORT_FRAMED(0x0076c808, d_0076c808::Museum__is_marked, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076c88c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a collectible is recorded.
namespace d_0076c88c {

inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> record_state_of_item;

u32 Museum__is_recorded(u32 museum) {
    u32 record_state_2 = record_state_of_item(museum, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (record_state_2 != 0) {
        record_state_2 = 1u;
    }
    return record_state_2;
}

}  // namespace d_0076c88c
GUEST_EXPORT_FRAMED(0x0076c88c, d_0076c88c::Museum__is_recorded, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076c8a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value from 0076cb70 times 10000.
namespace d_0076c8a0 {

inline constexpr guest::Function<0x0076cb70, u32(u32, u32, u32, u32)> ItemCatalog__find_state;

u32 museum_value_times_10000(u32 item_catalog) {
    u32 r1 = 0;
    u32 state_2 = ItemCatalog__find_state(item_catalog, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[1] = 0x2710u;  // (from the original)
    return state_2 * 0x2710u;  // (from the original)
}

}  // namespace d_0076c8a0
GUEST_EXPORT_FRAMED(0x0076c8a0, d_0076c8a0::museum_value_times_10000, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076c8b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether every fish (category 0x27) is recorded.
namespace d_0076c8b8 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076c8b8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076c8b8, word_0, 0x0);
GUEST_SIZE(Frame_0076c8b8, 0x4);

u32 Museum__all_fish_recorded(u32 museum, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076c8b8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4 = museum;
    u32 r5 = 0u;
L_76c8c4:;
    Item__from_category_index(frame.at(0).addr(), 0x27u, r5, r3);  // (from the original)
    u32 record_state_3 = record_state_of_item(r4, frame.at(0).addr());
    r3 = guest::cpu()->r[3];
    if (record_state_3 != 0) {
        r5 += 1u;
        if (r5 < 0x48u) {  // (from the original)
            guest::preempt();
            goto L_76c8c4;
        }
        r5 = 0u;
        do {
            Item__from_category_index(frame.at(0).addr(), 0x28u, r5, r3);  // (from the original)
            u32 record_state_4 = record_state_of_item(r4, frame.at(0).addr());
            r3 = guest::cpu()->r[3];
            if (record_state_4 == 0) {
                return 0u;
            }
            r5 += 1u;
            guest::preempt();
        } while (r5 < 0x1eu);  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076c8b8
GUEST_EXPORT_FRAMED(0x0076c8b8, d_0076c8b8::Museum__all_fish_recorded, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076c958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the identity of the player who donated a collectible (by its record state); true when there is one.
namespace d_0076c958 {

inline constexpr guest::Function<0x0027a42c, u32(u32, u32)> SavedRecordHeader__copy_from;
inline constexpr guest::Function<0x002fb96c, u32(u32)> player_for_slot;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002ff8b0, u32(u32)> player_slot_byte;
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> record_state_of_item;

u32 Museum__donor_identity(u32 museum, u32 r1, u32 r2) {
    u32 record_state_3 = record_state_of_item(museum, r2, r2, guest::cpu()->r[3]);
    u32 zf_1 = record_state_3 == 0;
    if (!zf_1) {
        zf_1 = record_state_3 == 5u;
    }
    if (!zf_1) {
        player_slot_byte(4u);
        u32 record_state_4 = record_state_of_item(museum, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 player_2 = player_for_slot(record_state_4 - 1u & 3u);
        u32 r0_6 = PersonalId__is_set(player_2 + 0x55a6u);  // (from the original)
        if (r0_6 != 0) {
            SavedRecordHeader__copy_from(r1, player_2 + 0x55a6u);  // (from the original)
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_0076c958
GUEST_EXPORT_FRAMED(0x0076c958, d_0076c958::Museum__donor_identity, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076cb70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the state of the category's items in the records.
namespace d_0076cb70 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076cb70 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076cb70, word_0, 0x0);
GUEST_SIZE(Frame_0076cb70, 0x4);

u32 ItemCatalog__find_state(u32 item_catalog, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076cb70> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r7 = item_catalog;
    u32 r6 = item_catalog;
    u32 r4 = r5;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x54u, r4, r3);  // (from the original)
        u32 record_state_7 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_7 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x19u);  // (from the original)
    r4 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x58u, r4, r3);  // (from the original)
        u32 record_state_8 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_8 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 8u);
    r6 = 0u;
    r4 = r6;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x27u, r4, r3);  // (from the original)
        u32 record_state_9 = record_state_of_item(r7, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_9 != 0) {
            r6 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r4 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x28u, r4, r3);  // (from the original)
        u32 record_state_10 = record_state_of_item(r7, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_10 != 0) {
            r6 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x1eu);  // (from the original)
    u32 r8 = r6 + r5;
    r5 = 0u;
    r6 = r7;
    r4 = r5;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x24u, r4, r3);  // (from the original)
        u32 record_state_11 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_11 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r8 += r5;
    r5 = 0u;
    r6 = r7;
    r4 = r5;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x2cu, r4, r3);  // (from the original)
        u32 record_state_12 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_12 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x43u);  // (from the original)
    return r5 + r8;
}

}  // namespace d_0076cb70
GUEST_EXPORT_FRAMED(0x0076cb70, d_0076cb70::ItemCatalog__find_state, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0076cd0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether every fossil (category 0x2c) is recorded.
namespace d_0076cd0c {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076cd0c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076cd0c, word_0, 0x0);
GUEST_SIZE(Frame_0076cd0c, 0x4);

u32 Museum__all_fossils_recorded(u32 museum, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076cd0c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = museum;
    u32 r4 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x2cu, r4, r3);  // (from the original)
        u32 record_state_2 = record_state_of_item(r5, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_2 == 0) {
            return 0u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x43u);  // (from the original)
    return 1u;
}

}  // namespace d_0076cd0c
GUEST_EXPORT_FRAMED(0x0076cd0c, d_0076cd0c::Museum__all_fossils_recorded, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076ce68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether every insect (category 0x24, 72) is recorded.
namespace d_0076ce68 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076ce68 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076ce68, word_0, 0x0);
GUEST_SIZE(Frame_0076ce68, 0x4);

u32 Museum__all_insects_recorded(u32 museum, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076ce68> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = museum;
    u32 r4 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x24u, r4, r3);  // (from the original)
        u32 record_state_2 = record_state_of_item(r5, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_2 == 0) {
            return 0u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    return 1u;
}

}  // namespace d_0076ce68
GUEST_EXPORT_FRAMED(0x0076ce68, d_0076ce68::Museum__all_insects_recorded, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076d134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether every painting (category 0x54) and statue (0x58) is recorded.
namespace d_0076d134 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076d134 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076d134, word_0, 0x0);
GUEST_SIZE(Frame_0076d134, 0x4);

u32 Museum__all_art_recorded(u32 museum, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076d134> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4 = museum;
    u32 r5 = 0u;
L_76d140:;
    Item__from_category_index(frame.at(0).addr(), 0x54u, r5, r3);  // (from the original)
    u32 record_state_3 = record_state_of_item(r4, frame.at(0).addr());
    r3 = guest::cpu()->r[3];
    if (record_state_3 != 0) {
        r5 += 1u;
        if (r5 < 0x19u) {  // (from the original)
            guest::preempt();
            goto L_76d140;
        }
        r5 = 0u;
        do {
            Item__from_category_index(frame.at(0).addr(), 0x58u, r5, r3);  // (from the original)
            u32 record_state_4 = record_state_of_item(r4, frame.at(0).addr());
            r3 = guest::cpu()->r[3];
            if (record_state_4 == 0) {
                return 0u;
            }
            r5 += 1u;
            guest::preempt();
        } while (r5 < 8u);
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076d134
GUEST_EXPORT_FRAMED(0x0076d134, d_0076d134::Museum__all_art_recorded, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076d214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The share (1-100) of the fish (72) and sea creatures (30) recorded, out of 102.
namespace d_0076d214 {

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076d214 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076d214, word_0, 0x0);
GUEST_SIZE(Frame_0076d214, 0x4);

u32 Museum__fish_percent(u32 museum, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076d214> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r6 = museum;
    u32 r4 = r5;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x27u, r4, r3);  // (from the original)
        u32 record_state_3 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_3 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r4 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x28u, r4, r3);  // (from the original)
        u32 record_state_4 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_4 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x1eu);  // (from the original)
    u32 r0_6 = divide_with_remainder(r5 * 0x64u, 0x66u, guest::cpu()->r[2], r3);  // (from the original)
    if (s32(r0_6) <= 0 && s32(r5) > 0) {
        r0_6 = 1u;
    } else {
        if (r0_6 - 0x64u != 0 && s32(r0_6) >= 0x64) {  // (from the original)
            r0_6 = 0x64u;  // (from the original)
        }
    }
    return r0_6;
}

}  // namespace d_0076d214
GUEST_EXPORT_FRAMED(0x0076d214, d_0076d214::Museum__fish_percent, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076d3a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The number of recorded paintings (category 0x54, 25) and statues (0x58, 8).
namespace d_0076d3a4 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076d3a4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076d3a4, word_0, 0x0);
GUEST_SIZE(Frame_0076d3a4, 0x4);

u32 Museum__count_recorded_art(u32 museum, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076d3a4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r6 = museum;
    u32 r4 = r5;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x54u, r4, r3);  // (from the original)
        u32 record_state_3 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_3 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x19u);  // (from the original)
    r4 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x58u, r4, r3);  // (from the original)
        u32 record_state_4 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_4 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 8u);
    return r5;
}

}  // namespace d_0076d3a4
GUEST_EXPORT_FRAMED(0x0076d3a4, d_0076d3a4::Museum__count_recorded_art, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076d430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The share (1-100) of the fossils (67) recorded.
namespace d_0076d430 {

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076d430 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076d430, word_0, 0x0);
GUEST_SIZE(Frame_0076d430, 0x4);

u32 Museum__fossils_percent(u32 museum, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076d430> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r6 = museum;
    u32 r4 = r5;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x2cu, r4, r3);  // (from the original)
        u32 record_state_2 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x43u);  // (from the original)
    u32 r0_4 = divide_with_remainder(r5 * 0x64u, 0x43u, guest::cpu()->r[2], r3);  // (from the original)
    if (s32(r0_4) <= 0 && s32(r5) > 0) {
        r0_4 = 1u;
    } else {
        if (r0_4 - 0x64u != 0 && s32(r0_4) >= 0x64) {  // (from the original)
            r0_4 = 0x64u;  // (from the original)
        }
    }
    return r0_4;
}

}  // namespace d_0076d430
GUEST_EXPORT_FRAMED(0x0076d430, d_0076d430::Museum__fossils_percent, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076d4ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The share (1-100) of the insects (72) recorded.
namespace d_0076d4ac {

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076d4ac {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076d4ac, word_0, 0x0);
GUEST_SIZE(Frame_0076d4ac, 0x4);

u32 Museum__insects_percent(u32 museum, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076d4ac> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r6 = museum;
    u32 r4 = r5;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x24u, r4, r3);  // (from the original)
        u32 record_state_2 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    u32 r0_4 = divide_with_remainder(r5 * 0x64u, 0x48u, guest::cpu()->r[2], r3);  // (from the original)
    if (s32(r0_4) <= 0 && s32(r5) > 0) {
        r0_4 = 1u;
    } else {
        if (r0_4 - 0x64u != 0 && s32(r0_4) >= 0x64) {  // (from the original)
            r0_4 = 0x64u;  // (from the original)
        }
    }
    return r0_4;
}

}  // namespace d_0076d4ac
GUEST_EXPORT_FRAMED(0x0076d4ac, d_0076d4ac::Museum__insects_percent, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076d5b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The share (1-100) of the paintings (25) and statues (8) recorded, out of 33.
namespace d_0076d5b0 {

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> divide_with_remainder;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_0076d5b0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076d5b0, word_0, 0x0);
GUEST_SIZE(Frame_0076d5b0, 0x4);

u32 Museum__art_percent(u32 museum, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076d5b0> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r6 = museum;
    u32 r4 = r5;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x54u, r4, r3);  // (from the original)
        u32 record_state_3 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_3 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x19u);  // (from the original)
    r4 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x58u, r4, r3);  // (from the original)
        u32 record_state_4 = record_state_of_item(r6, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_4 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 8u);
    u32 r0_6 = divide_with_remainder(r5 * 0x64u, 0x21u, guest::cpu()->r[2], r3);  // (from the original)
    if (s32(r0_6) <= 0 && s32(r5) > 0) {
        r0_6 = 1u;
    } else {
        if (r0_6 - 0x64u != 0 && s32(r0_6) >= 0x64) {  // (from the original)
            r0_6 = 0x64u;  // (from the original)
        }
    }
    return r0_6;
}

}  // namespace d_0076d5b0
GUEST_EXPORT_FRAMED(0x0076d5b0, d_0076d5b0::Museum__art_percent, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076d668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The record state byte of an insect, fish, sea creature, fossil or other recorded category's item; 0 for other items.
namespace d_0076d668 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002ffad8, u32(u32)> item_offset_in_category;
inline constexpr guest::Function<0x0076d714, u32(u32, u32, u32, u32)> Museum__index_is_valid;

u32 record_state_of_item(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 category_2 = Item__category(r1, r1, r2, r3);
    u32 offset_2 = item_offset_in_category(r1);
    u32 r0_3 = Museum__index_is_valid(r0, category_2, offset_2, offset_2);
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        u32 zf_1 = category_2 - 0x2cu == 0;  // (from the original)
        if (zf_1) {
            r0_3 = *gptr<u8>(r0 + r3_2 + 0x448u);  // (from the original)
        } else {
            if (zf_1 || s32(category_2) < 0x2c) {  // (from the original)
                if (category_2 == 0x24u) {  // (from the original)
                    return *gptr<u8>(r0 + r3_2 + 0x4f1u);  // (from the original)
                }
                if (category_2 == 0x27u) {  // (from the original)
                    return *gptr<u8>(r0 + r3_2 + 0x48bu);  // (from the original)
                }
                if (category_2 == 0x28u) {  // (from the original)
                    return *gptr<u8>(r0 + r3_2 + 0x4d3u);  // (from the original)
                }
            } else {
                if (category_2 == 0x54u) {  // (from the original)
                    return *gptr<u8>(r0 + r3_2 + 0x539u);  // (from the original)
                }
                if (category_2 == 0x58u) {  // (from the original)
                    return *gptr<u8>(r0 + r3_2 + 0x552u);  // (from the original)
                }
            }
            r0_3 = 0u;
        }
    }
    return r0_3;
}

}  // namespace d_0076d668
GUEST_EXPORT_FRAMED(0x0076d668, d_0076d668::record_state_of_item, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076d714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether `index` is a valid collectible of a museum category (fossils 67, insects 72, fish 72, sea creatures 30,
// paintings 25, statues 8).
namespace d_0076d714 {


u32 Museum__index_is_valid(u32 r0_unused, u32 category, u32 offset) {
    u32 res_1 = category - 0x2cu;  // (from the original)
    if (res_1 != 0) {
        if ((res_1 >> 0x1f) != (((category ^ 0x2cu) & (category ^ res_1)) >> 0x1f)) {  // (from the original)
            if (category == 0x24u || category == 0x27u) {  // (from the original)
                if (offset < 0x48u) {  // (from the original)
                    return 1u;
                }
                return 0u;
            }
            if (category != 0x28u || offset >= 0x1eu) {  // (from the original)
                return 0u;
            }
            return 1u;
        }
        if (category == 0x54u) {  // (from the original)
            if (offset < 0x19u) {  // (from the original)
                return 1u;
            }
            return 0u;
        }
        if (category != 0x58u) {  // (from the original)
            return 0u;
        }
    } else {
        if (offset < 0x43u) {  // (from the original)
            return 1u;
        }
        return 0u;
    }
    return offset < 8u;
}

}  // namespace d_0076d714
GUEST_EXPORT(0x0076d714, d_0076d714::Museum__index_is_valid);

// f_0076d7a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The player's encrypted value at +0x6b94.
namespace d_0076d7a4 {

inline constexpr guest::Function<0x00303660, u32(u32, u32)> EncryptedInt__get;

u32 Player__encrypted_6b94(u32 player) {
    return EncryptedInt__get(player + 0x6b94u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0076d7a4
GUEST_EXPORT(0x0076d7a4, d_0076d7a4::Player__encrypted_6b94);

// f_0076d918: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the player's score parts: the bank balance (+0x6b8c), the hours of +0x6bb0 times 10000 (capped at 20,000,000)
// and the badge total; returns their sum.
namespace d_0076d918 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x6bb0];  // (not used here)
    u32 word_6bb0;
    u32 word_6bb4;
};
GUEST_OFFSET(Player, word_6bb0, 0x6bb0);
GUEST_OFFSET(Player, word_6bb4, 0x6bb4);

struct __attribute__((packed)) Local_0076d918_r0_1 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_0076d918_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0076d918_r0_1, word_10, 0x10);

inline constexpr guest::Function<0x0012e640, u32(u32, u32, u32, u32)> int64_divide;
inline constexpr guest::Function<0x00303660, u32(u32)> EncryptedInt__get;
inline constexpr guest::Function<0x006c91d0, u32(u32)> catalog_state;
inline constexpr guest::Function<0x00716060, u32(u32)> badge_value_total;

u32 Player__update_score_parts(gptr<Player> player) {
    gptr<Local_0076d918_r0_1> r0_1 = gptr<Local_0076d918_r0_1>(catalog_state(player.addr()));
    u32 r0_3 = EncryptedInt__get(player.addr() + 0x6b8cu);  // (from the original)
    *gptr<u32>(r0_1.addr() + 4u) = r0_3;
    u32 r0_5 = int64_divide(player->word_6bb0, player->word_6bb4, 0xe10u, 0u);  // (from the original)
    u32 r0_6 = r0_5 * 0x2710u;  // (from the original)
    if (r0_6 != 0x1312d00u && s32(r0_6) >= s32(0x1312d00u)) {  // (from the original)
        r0_6 = 0x1312d00u;  // (from the original)
    }
    r0_1->word_0 = r0_6;
    u32 r0_8 = badge_value_total(player.addr() + 0x55dcu);  // (from the original)
    u32 r1_2 = (r0_3 + r0_6) + r0_8;
    r0_1->word_10 = r0_8;
    guest::cpu()->r[1] = r1_2;
    return r1_2;
}

}  // namespace d_0076d918
GUEST_EXPORT_FRAMED(0x0076d918, d_0076d918::Player__update_score_parts, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076d9f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether bit `villager` (below 0x18f) of the player's bit set at +0x8f3c is set.
namespace d_0076d9f8 {


u32 Player__has_met_villager(u32 player, u32 r1) {
    if (r1 >= 0x18fu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r2_1 = r1 >> 3;
    u32 r1_1 = r1 & 7u;
    if (r2_1 >= 0x32u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = lsr_r(u32(*gptr<u8>(player + r2_1 + 0x8f3cu)), r1_1 & 0xff) & 1u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076d9f8
GUEST_EXPORT(0x0076d9f8, d_0076d9f8::Player__has_met_villager);

// f_0076da3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player carries (in pockets or as the worn item of class 7) an item outside set A that is not special.
namespace d_0076da3c {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x0030f594, u32(u32)> is_special_item;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x00768628, u32(u32, u32)> Item__is_in_id_set_a;
inline constexpr guest::Function<0x00769840, u32(u32)> Item__has_category_flag_4;

u32 Player__has_item_outside_set_a(u32 player, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r6_1 = 0;
    u32 r8 = empty_item_address;
    u32 r7 = player;
    u32 r5 = player + 0x6bd0u;  // (from the original)
    u32 r4 = 0u;
    do {
        if (r4 < 0x10u) {  // (from the original)
            r6_1 = r5 + (r4 << 2);
            u32 is_empty_4 = Item__is_empty(r6_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            if (is_empty_4 != 0) {
                goto L_76da90;
            }
            u32 r0_2 = Item__has_category_flag_4(r6_1);
            if (r0_2 != 0) {
                goto L_76da90;
            }
        }
        r6_1 = r8;
L_76da90:;
        Item__copy_b(frame.at(4).addr(), r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 is_empty_5 = Item__is_empty(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (is_empty_5 == 0) {
            u32 r0_7 = Item__is_in_id_set_a(frame.at(4).addr(), r1);
            r1 = guest::cpu()->r[1];
            if (r0_7 == 0) {
                return 1u;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    u32 r0_9 = slot_7_if_class_7(r7 + 0xau);  // (from the original)
    Item__copy_b(frame.at(0).addr(), r0_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 is_empty_6 = Item__is_empty(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (is_empty_6 == 0) {
        u32 r0_14 = Item__is_in_id_set_a(frame.at(0).addr(), guest::cpu()->r[1]);
        if (r0_14 == 0) {
            u32 r0_16 = is_special_item(frame.at(0).addr());
            if (r0_16 == 0) {
                return 1u;
            }
        }
    }
    return 0u;
}

}  // namespace d_0076da3c
GUEST_EXPORT_FRAMED(0x0076da3c, d_0076da3c::Player__has_item_outside_set_a, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076dc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The player's pending record (+0x8d4c) for a villager of this town when it is set and open; else 0.
namespace d_0076dc14 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x8d55];  // (not used here)
    u8 byte_8d55;
    u8 unknown_8d56[0x5];  // (not used here)
    u8 byte_8d5b;
};
GUEST_OFFSET(Player, byte_8d55, 0x8d55);
GUEST_OFFSET(Player, byte_8d5b, 0x8d5b);

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;

u32 Player__pending_record_for_villager(gptr<Player> player, u32 r1) {
    u32 r0_6 = 0;
    u32 is_villager_2 = is_villager_record(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (is_villager_2 != 0) {
        u32 save_data_2 = get_save_data(is_villager_2);
        u32 r0_4 = index_of_villager_in_town(save_data_2 + 0x292a4u, r1);  // (from the original)
        u32 r0_5 = SavedRecordInner__has_value(player.addr() + 0x8d4cu);  // (from the original)
        r0_6 = r0_5 != 0 && player->byte_8d55 == 0 && u32(s8(player->byte_8d5b)) == r0_4 ? player.addr() + 0x8d4cu : 0u;  // (from the original)
    } else {
        r0_6 = 0u;
    }
    return r0_6;
}

}  // namespace d_0076dc14
GUEST_EXPORT_FRAMED(0x0076dc14, d_0076dc14::Player__pending_record_for_villager, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076dcfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The player's record at +0x8d6c when it is for a villager of this town and not in state 1; else 0.
namespace d_0076dcfc {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x8d75];  // (not used here)
    u8 byte_8d75;
    u8 unknown_8d76[0xa];  // (not used here)
    u8 byte_8d80;
};
GUEST_OFFSET(Player, byte_8d75, 0x8d75);
GUEST_OFFSET(Player, byte_8d80, 0x8d80);

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;

u32 Player__record_8d6c_for_villager(gptr<Player> player, u32 r1) {
    u32 r0_5 = 0;
    u32 is_villager_2 = is_villager_record(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (is_villager_2 != 0) {
        u32 save_data_2 = get_save_data(is_villager_2);
        u32 r0_4 = index_of_villager_in_town(save_data_2 + 0x292a4u, r1);  // (from the original)
        SavedRecordInner__has_value(r0_4);
        r0_5 = player->byte_8d75 != 1u && u32(s8(player->byte_8d80)) == r0_4 ? player.addr() + 0x8d6cu : 0u;  // (from the original)
    } else {
        r0_5 = 0u;
    }
    return r0_5;
}

}  // namespace d_0076dcfc
GUEST_EXPORT_FRAMED(0x0076dcfc, d_0076dcfc::Player__record_8d6c_for_villager, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076de78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player's record at +0x8d84 holds (in entry `which`, or either for 2) the same id and two names as the
// villager's.
namespace d_0076de78 {

struct __attribute__((packed)) Local_0076de78_ea_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_0076de78_ea_1, half_0, 0x0);
GUEST_OFFSET(Local_0076de78_ea_1, byte_14, 0x14);

struct __attribute__((packed)) Local_0076de78_r0_4 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x17];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Local_0076de78_r0_4, half_0, 0x0);
GUEST_OFFSET(Local_0076de78_r0_4, byte_14, 0x14);
GUEST_OFFSET(Local_0076de78_r0_4, half_2c, 0x2c);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> memory_compare_100d2c;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x00757a58, u32(u32, u32, u32)> element_address_757a58;

u32 Player__has_name_pair_record(u32 player, u32 r1, u32 r2) {
    u32 r5 = r2;
    u32 r6 = r1;
    u32 is_villager_2 = is_villager_record(r1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager_2 != 0) {
        u32 r0_2 = player + 0x8d84u;  // (from the original)
        u32 r8 = r0_2;
        u32 r0_3 = SavedRecordInner__has_value(r0_2, r1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_3 != 0) {
            u32 r4 = 0u;
            do {
                if (r5 == 2u || r5 == r4) {
                    gptr<Local_0076de78_r0_4> r0_4 = gptr<Local_0076de78_r0_4>(element_address_757a58(r8, r4 & 0xffu, r2));  // (from the original)
                    r2 = guest::cpu()->r[2];
                    r1 = *gptr<u16>(r6 + 0x2cu);  // (from the original)
                    if (r0_4->half_2c == r1) {
                        r1 = *gptr<u16>(r6);
                        if (r0_4->half_0 == r1) {
                            r1 = r0_4->byte_14;
                            if (r1 == *gptr<u8>(r6 + 0x14u)) {  // (from the original)
                                u32 r0_6 = memory_compare_100d2c(r0_4.addr() + 2u, r6 + 2u, 0x12u);  // (from the original)
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                if (r0_6 == 0) {
                                    gptr<Local_0076de78_ea_1> ea_1 = gptr<Local_0076de78_ea_1>(r0_4.addr() + 0x16u);  // (from the original)
                                    r1 = ea_1->half_0;
                                    r2 = *gptr<u16>(r6 + 0x16u);  // (from the original)
                                    u32 r0_7 = r6 + 0x16u;  // (from the original)
                                    if (r1 == r2) {
                                        r1 = ea_1->byte_14;
                                        r2 = *gptr<u8>(r0_7 + 0x14u);  // (from the original)
                                        if (r1 == r2) {
                                            u32 r0_9 = memory_compare_100d2c(ea_1.addr() + 2u, r0_7 + 2u, 0x12u);  // (from the original)
                                            r1 = guest::cpu()->r[1];
                                            r2 = guest::cpu()->r[2];
                                            if (r0_9 == 0) {
                                                return 1u;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 2);
        }
        is_villager_2 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return is_villager_2;
}

}  // namespace d_0076de78
GUEST_EXPORT_FRAMED(0x0076de78, d_0076de78::Player__has_name_pair_record, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076df94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player wears one of the four items of the set 0x282b (head), 0x2598 (body), 0x26fe, 0x2925.
namespace d_0076df94 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x0071a3a8, u32(u32)> slots_slot_4_if_slot_2_allows;
inline constexpr guest::Function<0x0071a7ec, u32(u32)> item_if_first_item_or_class_1;
inline constexpr guest::Function<0x0071a820, u32(u32)> slot_1_if_class_2_0071a820;
inline constexpr guest::Function<0x0071a868, u32(u32)> slot_2_if_class_3_0071a868;

u32 Player__wears_part_of_set_282b(u32 player) {
    u32 r4_1 = player + 0xau;  // (from the original)
    u32 r0_1 = item_if_first_item_or_class_1(r4_1);
    u32 r0_2 = Item__has_number(r0_1, 0x282bu);  // (from the original)
    if (r0_2 != 0) {
        return 1u;
    }
    u32 r0_3 = slot_2_if_class_3_0071a868(r4_1);
    u32 r0_4 = Item__has_number(r0_3, 0x2598u);  // (from the original)
    if (r0_4 != 0) {
        return 1u;
    }
    u32 r0_5 = slots_slot_4_if_slot_2_allows(r4_1);
    u32 r0_6 = Item__has_number(r0_5, 0x26feu);  // (from the original)
    if (r0_6 != 0) {
        return 1u;
    }
    u32 r0_7 = slot_1_if_class_2_0071a820(r4_1);
    u32 r0_8 = Item__has_number(r0_7, 0x2925u);  // (from the original)
    return r0_8 == 0 ? r0_8 : 1u;
}

}  // namespace d_0076df94
GUEST_EXPORT_FRAMED(0x0076df94, d_0076df94::Player__wears_part_of_set_282b, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076e014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player wears all four items of the set 0x282b (head), 0x2598 (body), 0x26fe, 0x2925.
namespace d_0076e014 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x0071a3a8, u32(u32)> slots_slot_4_if_slot_2_allows;
inline constexpr guest::Function<0x0071a7ec, u32(u32)> item_if_first_item_or_class_1;
inline constexpr guest::Function<0x0071a820, u32(u32)> slot_1_if_class_2_0071a820;
inline constexpr guest::Function<0x0071a868, u32(u32)> slot_2_if_class_3_0071a868;

u32 Player__wears_whole_set_282b(u32 player) {
    u32 r4_1 = player + 0xau;  // (from the original)
    u32 r0_1 = item_if_first_item_or_class_1(r4_1);
    u32 r0_2 = Item__has_number(r0_1, 0x282bu);  // (from the original)
    if (r0_2 == 0) {
        return 0u;
    }
    u32 r0_3 = slot_2_if_class_3_0071a868(r4_1);
    u32 r0_4 = Item__has_number(r0_3, 0x2598u);  // (from the original)
    if (r0_4 == 0) {
        return 0u;
    }
    u32 r0_5 = slots_slot_4_if_slot_2_allows(r4_1);
    u32 r0_6 = Item__has_number(r0_5, 0x26feu);  // (from the original)
    if (r0_6 == 0) {
        return 0u;
    }
    u32 r0_7 = slot_1_if_class_2_0071a820(r4_1);
    u32 r0_8 = Item__has_number(r0_7, 0x2925u);  // (from the original)
    return r0_8 != 0;
}

}  // namespace d_0076e014
GUEST_EXPORT_FRAMED(0x0076e014, d_0076e014::Player__wears_whole_set_282b, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076e108: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the current model's (+0x24 bit 0) two animations (+0x7b0, +0x504) have finished, when it has a model.
namespace d_0076e108 {

struct __attribute__((packed)) CharaModel {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(CharaModel, byte_24, 0x24);

inline constexpr guest::Function<0x007460e8, u32(u32, u32)> Mover__is_done;
inline constexpr guest::Function<0x00825d6c, u32(u32, u32, u32, u32)> false___virtual_9_00825d6c;

u32 CharaModel__animations_done(gptr<CharaModel> chara_model, u32 r1) {
    u32 r0_1 = false___virtual_9_00825d6c(chara_model.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r1_1 = (u32(chara_model->byte_24) & 1u) * 3u;
        u32 res_1 = chara_model.addr() + (r1_1 << 3) + 0x7b0u;  // (from the original)
        u32 zf_1 = res_1 == 0;
        if (!zf_1) {
            r1_1 = *gptr<u32>(res_1 + 8u);
            zf_1 = r1_1 == 0;
        }
        if (!zf_1) {
            u32 r0_2 = Mover__is_done(res_1, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                return r0_2;
            }
        }
    }
    u32 r0_3 = false___virtual_9_00825d6c(chara_model.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        return 1u;
    }
    u32 res_2 = chara_model.addr() + ((u32(chara_model->byte_24) & 1u) << 5) + 0x504u;  // (from the original)
    u32 zf_2 = res_2 == 0;
    if (!zf_2) {
        r1_2 = *gptr<u32>(res_2 + 8u);
        zf_2 = r1_2 == 0;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r0_4 = Mover__is_done(res_2, r1_2);
    return r0_4 == 0 ? r0_4 : 1u;
}

}  // namespace d_0076e108
GUEST_EXPORT_FRAMED(0x0076e108, d_0076e108::CharaModel__animations_done, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076e290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The frame of the current model's animation at +0x7b0 (0.0 without a model or animation).
namespace d_0076e290 {

struct __attribute__((packed)) CharaModel {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(CharaModel, byte_24, 0x24);

inline constexpr guest::Function<0x007461b4, u32(u32, u32, u32, u32)> AnimatedObject__animation_value_38;
inline constexpr guest::Function<0x00825d6c, u32(u32, u32, u32, u32)> false___virtual_9_00825d6c;

void CharaModel__animation_frame(gptr<CharaModel> chara_model, u32 r1, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = false___virtual_9_00825d6c(chara_model.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        float S0_2 = 0.0f;
        guest::cpu()->s[0] = S0_2;
        return;
    }
    u32 res_1 = chara_model.addr() + (u32(chara_model->byte_24) & 1u) * 0x18u + 0x7b0u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        r1_1 = *gptr<u32>(res_1 + 8u);
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        float S0_3 = 0.0f;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_3;
        return;
    }
    frame.release();
    AnimatedObject__animation_value_38(res_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0076e290
GUEST_EXPORT(0x0076e290, d_0076e290::CharaModel__animation_frame);

// f_0076e2d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Transforms a point by the model's matrix (and moves it for mode flag 2 when asked); true when it has a model.
namespace d_0076e2d8 {

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> run_if_scene_mode_flag_2;
inline constexpr guest::Function<0x00745f80, u32(u32)> model_matrix;
inline constexpr guest::Function<0x00825d6c, u32(u32, u32)> false___virtual_9_00825d6c;

u32 CharaModel__transform_point(u32 chara_model, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = false___virtual_9_00825d6c(chara_model, r1);
    if (r0_1 != 0) {
        u32 r0_2 = model_matrix(r0_1);
        apply_matrix(r1, r0_2, r2);
        if (r3 != 0) {
            run_if_scene_mode_flag_2(r1, r1);
        }
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0076e2d8
GUEST_EXPORT_FRAMED(0x0076e2d8, d_0076e2d8::CharaModel__transform_point, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076e37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Transforms a point by the matrix of the bone called `name` of the current model (and moves it for mode flag 2 when
// asked); true when found.
namespace d_0076e37c {

struct __attribute__((packed)) CharaModel {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(CharaModel, byte_24, 0x24);

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> run_if_scene_mode_flag_2;
inline constexpr guest::Function<0x00745d44, u32(u32, u32, u32, u32)> Resource__find_index;
inline constexpr guest::Function<0x0076e1fc, u32(u32, u32, u32)> ObjectList__entry_at;

u32 CharaModel__bone_point(gptr<CharaModel> chara_model, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 resource = 0;
    u32 r4_1 = *frame.at<u32>(0x48);  // (from the original)
    u32 r0_1 = u32(chara_model->byte_24) & 1u;
    u32 name = r2;
    if (r0_1 < 2u) {
        u32 r0_2 = chara_model.addr() + r0_1 * 0xcu;  // (from the original)
        r2 = *gptr<u32>(r0_2 + 0x4bcu);  // (from the original)
        resource = r2 != 0 ? r0_2 + 0x4b8u : 0u;  // (from the original)
    } else {
        resource = 0u;
    }
    if (resource != 0) {
        u32 index_2 = Resource__find_index(resource, name, r2, r3);
        if (s32(index_2) < 0) {
            return 0u;
        }
        u32 entry_2 = ObjectList__entry_at(chara_model.addr(), frame.at(0).addr(), index_2);
        if (entry_2 == 0) {
            return 0u;
        }
        apply_matrix(r1, frame.at(0).addr(), r3);
        name = guest::cpu()->r[1];
        if (r4_1 != 0) {
            run_if_scene_mode_flag_2(r1, r1);
            name = guest::cpu()->r[1];
        }
        resource = 1u;
    }
    guest::cpu()->r[1] = name;
    return resource;
}

}  // namespace d_0076e37c
GUEST_EXPORT_FRAMED(0x0076e37c, d_0076e37c::CharaModel__bone_point, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076e438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Signed byte +0x166a of the current model's face (+0x584), or 0.
namespace d_0076e438 {

struct __attribute__((packed)) CharaModel {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(CharaModel, byte_24, 0x24);


u32 CharaModel__face_byte_166a(gptr<CharaModel> chara_model) {
    u32 r1_1 = u32(chara_model->byte_24) & 1u;
    u32 r0_1 = *gptr<u32>(chara_model.addr() + (r1_1 << 2) + 0x584u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = *gptr<s8>(r0_1 + 0x166au);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076e438
GUEST_EXPORT(0x0076e438, d_0076e438::CharaModel__face_byte_166a);

// f_0076e458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the current model's face (+0x584) is idle (+0x166a set with no timer at +0x1664); true without a face.
namespace d_0076e458 {

struct __attribute__((packed)) CharaModel {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(CharaModel, byte_24, 0x24);

struct __attribute__((packed)) Local_0076e458_r0_2 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
    u8 unknown_66[0x4];  // (not used here)
    u8 byte_6a;
};
GUEST_OFFSET(Local_0076e458_r0_2, half_64, 0x64);
GUEST_OFFSET(Local_0076e458_r0_2, byte_6a, 0x6a);


u32 CharaModel__face_is_idle(gptr<CharaModel> chara_model) {
    u32 r1_1 = u32(chara_model->byte_24) & 1u;
    u32 r0_1 = *gptr<u32>(chara_model.addr() + (r1_1 << 2) + 0x584u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    gptr<Local_0076e458_r0_2> r0_2 = gptr<Local_0076e458_r0_2>(r0_1 + 0x1600u);  // (from the original)
    u32 r1_2 = r0_2->byte_6a;
    if (r1_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r0_2->half_64 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0076e458
GUEST_EXPORT(0x0076e458, d_0076e458::CharaModel__face_is_idle);

// f_0076e49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 2 of +0xd of the current model's wear entry (+0x3c).
namespace d_0076e49c {

struct __attribute__((packed)) CharaModel {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(CharaModel, byte_24, 0x24);

inline constexpr guest::Function<0x00535a68, u32(u32, u32)> Item__wear_class_entry;

u32 CharaModel__wear_flag_2(gptr<CharaModel> chara_model) {
    u32 r1_1 = u32(chara_model->byte_24) & 1u;
    u32 r0_2 = Item__wear_class_entry(chara_model.addr() + (r1_1 << 4) + 0x3cu, r1_1);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    return s32(u32(*gptr<u8>(r0_2 + 0xdu)) << 0x1d) < 0;  // (from the original)
}

}  // namespace d_0076e49c
GUEST_EXPORT_FRAMED(0x0076e49c, d_0076e49c::CharaModel__wear_flag_2, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076e4d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The translation of the model's matrix (moved for mode flag 2 when asked); true when it has a model.
namespace d_0076e4d4 {

struct __attribute__((packed)) Local_0076e4d4_r0_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0xc];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Local_0076e4d4_r0_2, word_c, 0xc);
GUEST_OFFSET(Local_0076e4d4_r0_2, word_1c, 0x1c);
GUEST_OFFSET(Local_0076e4d4_r0_2, word_2c, 0x2c);

inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> run_if_scene_mode_flag_2;
inline constexpr guest::Function<0x00745f80, u32(u32)> model_matrix;
inline constexpr guest::Function<0x00825d6c, u32(u32, u32)> false___virtual_9_00825d6c;

u32 CharaModel__position(u32 chara_model, gptr<Float3> arg1, u32 r2) {
    u32 r0_1 = false___virtual_9_00825d6c(chara_model, arg1.addr());
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        gptr<Local_0076e4d4_r0_2> r0_2 = gptr<Local_0076e4d4_r0_2>(model_matrix(r0_1));
        arg1->v[0] = std::bit_cast<float>(u32(r0_2->word_c));
        r1_1 = r0_2->word_1c;
        arg1->v[1] = std::bit_cast<float>(u32(r1_1));
        arg1->v[2] = std::bit_cast<float>(u32(r0_2->word_2c));
        if (r2 != 0) {
            run_if_scene_mode_flag_2(arg1.addr(), arg1.addr());
            r1_1 = guest::cpu()->r[1];
        }
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076e4d4
GUEST_EXPORT_FRAMED(0x0076e4d4, d_0076e4d4::CharaModel__position, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076e524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the current model's wear item (+0x3c) has data kind 0xe.
namespace d_0076e524 {

struct __attribute__((packed)) CharaModel {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(CharaModel, byte_24, 0x24);

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x003117bc, u32(u32)> item_data_byte_0f;

struct __attribute__((packed)) Frame_0076e524 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076e524, word_0, 0x0);
GUEST_SIZE(Frame_0076e524, 0x4);

u32 CharaModel__wear_is_kind_e(gptr<CharaModel> chara_model, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0076e524> frame;  // the original's stack frame
    frame->word_0 = r3;
    Item__copy_b(frame.at(0).addr(), chara_model.addr() + ((u32(chara_model->byte_24) & 1u) << 4) + 0x3cu);  // (from the original)
    u32 r0_3 = item_data_byte_0f(frame.at(0).addr());
    return r0_3 == 0xeu;  // (from the original)
}

}  // namespace d_0076e524
GUEST_EXPORT_FRAMED(0x0076e524, d_0076e524::CharaModel__wear_is_kind_e, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076e564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item (kept in a static item) of the group of the entry's slot (+0x1c, below 0x40) from the table at 0x95c6e4.
namespace d_0076e564 {

inline constexpr u32 group_item_table_a_address = 0x0095c6d8u;
inline constexpr u32 group_item_table_b_address = 0x0095c6dcu;
inline constexpr u32 global_0095c6e4_address = 0x0095c6e4u;
inline guest::global<u32, 0x0095c6d8> group_item_table_a;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x006158c4, u32(u32, u32, u32, u32)> global_word_14;

struct __attribute__((packed)) Frame_0076e564 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0076e564, word_0, 0x0);
GUEST_SIZE(Frame_0076e564, 0x4);

u32 group_item_of_entry(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0076e564> frame;  // the original's stack frame
    frame->word_0 = r3;
    if ((*group_item_table_a & 1u) == 0) {
        u32 first_time = static_guard_acquire(group_item_table_a_address, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (first_time != 0) {
            construct_empty_item(group_item_table_b_address, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r2 = 0x100000u;  // (from the original)
            r1 = 0x2f777cu;  // (from the original)
        }
    }
    u32 r4_1 = *gptr<s8>(r0 + 0x1cu);  // (from the original)
    u32 r0_2 = 0u;
    if (r4_1 + 1u != 0) {
        if (s32(r4_1) < 0x40) {  // (from the original)
            u32 r0_3 = global_word_14(r0_2, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r0_2 = sxtb(u32(*gptr<u16>(r0_3 + r4_1 * 0x14u + 0x14u)));  // (from the original)
            if (!(r0_2 < 0xcu)) {  // (from the original)
                r0_2 = 0u;
            }
        }
    } else {
        r0_2 = 0u;
    }
    u32 r1_1 = *gptr<u16>(gptr<u32>(global_0095c6e4_address)[r0_2] + 2u);
    u32 r0_4 = frame.at(0).addr();
    construct_item(r0_4, r1_1, r2, r3);
    Item__copy(group_item_table_b_address, r0_4);
    return group_item_table_b_address;
}

}  // namespace d_0076e564
GUEST_EXPORT_FRAMED(0x0076e564, d_0076e564::group_item_of_entry, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076e62c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of word `index` (below 8, else 0) of the table at +0xec.
namespace d_0076e62c {


u32 word_ec_at(u32 r0, u32 r1) {
    if (r1 >= 8u) {
        r1 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0 + (r1 << 2) + 0xecu;  // (from the original)
}

}  // namespace d_0076e62c
GUEST_EXPORT(0x0076e62c, d_0076e62c::word_ec_at);

// f_0076e6cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The group (below 12) of the entry's slot (+0x1c) for kinds with flag 0x80000 or 0x100000; -1 for other kinds, 0
// without a slot.
namespace d_0076e6cc {

struct __attribute__((packed)) Object_0076e6cc_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_0076e6cc_0, byte_1c, 0x1c);

inline constexpr guest::Function<0x006158c4, u32(u32)> global_word_14;
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32)> kind_has_flag_80000_or_100000;

u32 entry_group(gptr<Object_0076e6cc_0> arg0, u32 r1) {
    u32 r0_1 = kind_has_flag_80000_or_100000(arg0.addr(), r1);
    if (r0_1 == 0) {
        return ~0u;
    }
    u32 r4_1 = s8(arg0->byte_1c);
    if (r4_1 + 1u == 0) {
        return 0u;
    }
    if (s32(r4_1) >= 0x40) {  // (from the original)
        return sxtb(0u);
    }
    u32 r0_4 = global_word_14(r0_1);
    u32 r1_2 = r4_1 * 5u;
    u32 r0_5 = sxtb(u32(*gptr<u16>(r0_4 + (r1_2 << 2) + 0x14u)));  // (from the original)
    if (r0_5 >= 0xcu) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return sxtb(r0_5);
}

}  // namespace d_0076e6cc
GUEST_EXPORT_FRAMED(0x0076e6cc, d_0076e6cc::entry_group, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076ec0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item is in the 6 x 10 table of 16-bit ids (rows of 0x14 bytes from +0x14).
namespace d_0076ec0c {

inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;

u32 ItemTable6x10__contains(u32 item_table6x10, u32 r1) {
    u32 r7 = item_table6x10;
    u32 r8 = r1;
    u32 is_empty_2 = Item__is_empty(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (is_empty_2 == 0) {
        u32 r6 = 0u;
        do {
            u32 r4 = 0u;
            u32 r5 = r7 + r6 * 0x14u;  // (from the original)
            do {
                u32 r1_2 = *gptr<u16>(r5 + (r4 << 1) + 0x14u);  // (from the original)
                u32 r0_2 = Item__has_number(r8, r1_2);
                if (r0_2 != 0) {
                    return 1u;
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 0xa);  // (from the original)
            r6 += 1u;
            guest::preempt();
        } while (s32(r6) < 6);
    }
    return 0u;
}

}  // namespace d_0076ec0c
GUEST_EXPORT_FRAMED(0x0076ec0c, d_0076ec0c::ItemTable6x10__contains, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076ec7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the item of row `row`, column `column` of a table of 16-bit ids (rows of 0x14 bytes from +0x8c).
namespace d_0076ec7c {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;

u32 ItemTable__construct_item_at(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = *gptr<u16>(r1 + r2 * 0x14u + (r3 << 1) + 0x8cu);  // (from the original)
    return construct_item(guest::cpu()->r[0], r1_1, r2, r3);
}

}  // namespace d_0076ec7c
GUEST_EXPORT(0x0076ec7c, d_0076ec7c::ItemTable__construct_item_at);

// f_0076ec90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the `n`-th used byte of the 64 at +0x10, or -1.
namespace d_0076ec90 {


u32 nth_used_slot_of_64(u32 r0, u32 r1) {
    u32 r3 = 0u;
    u32 r2 = r3;
    do {
        if (*gptr<u8>(r0 + sxtb(r2) + 0x10u) != 0) {  // (from the original)
            if (r3 != r1) {
                r3 += 1u;
            } else {
                return sxtb(r2);
            }
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 0x40);  // (from the original)
    return ~0u;
}

}  // namespace d_0076ec90
GUEST_EXPORT(0x0076ec90, d_0076ec90::nth_used_slot_of_64);

// f_0076ed30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// How many of the 64 bytes at +0x10 are set.
namespace d_0076ed30 {


u32 count_used_slots_of_64(u32 r0) {
    u32 r2 = r0;
    r0 = 0u;
    u32 r1 = r0;
    do {
        u32 r3_1 = r2 + sxtb(r1);
        r1 += 1u;
        if (*gptr<u8>(r3_1 + 0x10u) != 0) {  // (from the original)
            r0 += 1u;
        }
        guest::preempt();
    } while (s32(r1) < 0x40);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0076ed30
GUEST_EXPORT(0x0076ed30, d_0076ed30::count_used_slots_of_64);

// f_0076ee14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether +0x1c204 is set.
namespace d_0076ee14 {

struct __attribute__((packed)) Object_0076ee14_0 {
    u8 unknown_0[0x1c204];  // (not used here)
    u8 byte_1c204;
};
GUEST_OFFSET(Object_0076ee14_0, byte_1c204, 0x1c204);


u32 byte_1c204_is_set(gptr<Object_0076ee14_0> arg0) {
    u32 r0_1 = arg0->byte_1c204;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0076ee14
GUEST_EXPORT(0x0076ee14, d_0076ee14::byte_1c204_is_set);

// f_0076eec4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of word (a * 6 + b) * 10 + c of a table.
namespace d_0076eec4 {


u32 cell_address_6x10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r3 + (r2 + r1 * 6u) * 0xau;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 2);
}

}  // namespace d_0076eec4
GUEST_EXPORT(0x0076eec4, d_0076eec4::cell_address_6x10);

// f_0076ef10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Returns at once.
namespace d_0076ef10 {


void do_nothing_0076ef10() {
}

}  // namespace d_0076ef10
GUEST_EXPORT(0x0076ef10, d_0076ef10::do_nothing_0076ef10);

// f_0076ef28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of 0x870-byte block ((a * 6 + b) * 4 + c) from +4.
namespace d_0076ef28 {


u32 DesignStorage__entry(u32 design_storage, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r3 + (r2 + (r1 + (r1 << 1) << 1) << 2);
    u32 r1_2 = (r1_1 << 4) - r1_1;
    return design_storage + (r1_2 + (r1_2 << 3) << 4) + 4u;
}

}  // namespace d_0076ef28
GUEST_EXPORT(0x0076ef28, d_0076ef28::DesignStorage__entry);

// f_0076ef60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether bit `bit` of the nibble for (a * 6 + b) of the bit table at +0x25f84 is clear.
namespace d_0076ef60 {


u32 DesignStorage__slot_is_free(u32 design_storage, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r2 + r1 * 6u;
    if ((r1_1 & 1u) != 0) {
        r3 += 4u;
    }
    u32 r1_2 = *gptr<u8>(design_storage + (r1_1 >> 1) + 0x25f84u);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return (r1_2 & lsl_r(1u, r3 & 0xff)) == 0;  // (from the original)
}

}  // namespace d_0076ef60
GUEST_EXPORT(0x0076ef60, d_0076ef60::DesignStorage__slot_is_free);

// f_0076f018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of word (a * 9 + b) * 10 + c of a table.
namespace d_0076f018 {


u32 cell_address_9x10(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r1 + (r1 << 3) + r2;
    u32 r1_2 = r3 + (r1_1 + (r1_1 << 2) << 1);
    guest::cpu()->r[1] = r1_2;
    return r0 + (r1_2 << 2);
}

}  // namespace d_0076f018
GUEST_EXPORT(0x0076f018, d_0076f018::cell_address_9x10);

// f_0076f030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 when the member handler (+0xc, +0x10) is the one at 0x845290, bit 1 when it is the one at 0x845288.
namespace d_0076f030 {

struct __attribute__((packed)) Object_0076f030_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0076f030_0, word_c, 0xc);
GUEST_OFFSET(Object_0076f030_0, word_10, 0x10);

inline guest::global<u32, 0x00845288> global_00845288;
inline guest::global<u32, 0x0084528c> global_0084528c;
inline guest::global<u32, 0x00845290> global_00845290;
inline guest::global<u32, 0x00845294> global_00845294;

u32 handler_is_845288_or_845290(gptr<Object_0076f030_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_00845294;
    if (r3_1 == *global_00845290) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_1) & 1u) != 0) && arg0->word_10 != r1_1) {
            goto L_76f078;
        }
        r4_1 = 1u;
        goto L_76f07c;
    }
L_76f078:;
    r4_1 = 0u;
L_76f07c:;
    u32 r1_2 = *global_0084528c;
    if (r3_1 == *global_00845288) {
        if ((r3_1 != 0 || ((arg0->word_10 | r1_2) & 1u) != 0) && arg0->word_10 != r1_2) {
            guest::cpu()->r[1] = r1_2;
            return r4_1;
        }
        guest::cpu()->r[1] = r1_2;
        return 1u | r4_1;
    }
    guest::cpu()->r[1] = r1_2;
    return r4_1;
}

}  // namespace d_0076f030
GUEST_EXPORT_FRAMED(0x0076f030, d_0076f030::handler_is_845288_or_845290, 0x10);  // pushes {r4} first, as the original

// f_0076f1b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the member handler (+0xc, +0x10) is the one at 0x845fc8.
namespace d_0076f1b4 {

struct __attribute__((packed)) Object_0076f1b4_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0076f1b4_0, word_c, 0xc);
GUEST_OFFSET(Object_0076f1b4_0, word_10, 0x10);

inline guest::global<u32, 0x00845fc8> window_opening_handler;
inline guest::global<u32, 0x00845fcc> window_opening_handler_adjust;

u32 handler_is_845fc8(gptr<Object_0076f1b4_0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r2_1 = *window_opening_handler;
    u32 r1_1 = *window_opening_handler_adjust;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (arg0->word_10 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0076f1b4
GUEST_EXPORT(0x0076f1b4, d_0076f1b4::handler_is_845fc8);

// f_0076f214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The nearest (in x-z) of the object's points (+0x344, count +0x20, up to 10) to `position`; zero when there is none.
namespace d_0076f214 {

struct __attribute__((packed)) Object_0076f214_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0076f214_0, word_0, 0x0);
GUEST_OFFSET(Object_0076f214_0, word_4, 0x4);
GUEST_OFFSET(Object_0076f214_0, word_8, 0x8);

struct __attribute__((packed)) Object_0076f214_1 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_0076f214_1, word_20, 0x20);

struct __attribute__((packed)) Local_0076f214_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0076f214_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0076f214_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_0076f214_r1_1, word_8, 0x8);

struct __attribute__((packed)) Object_0076f214_2 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_0076f214_2, float_0, 0x0);
GUEST_OFFSET(Object_0076f214_2, float_8, 0x8);

struct __attribute__((packed)) Local_0076f214_r4_2 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Local_0076f214_r4_2, float_0, 0x0);
GUEST_OFFSET(Local_0076f214_r4_2, float_8, 0x8);


void nearest_point_of_ten(gptr<Object_0076f214_0> arg0, gptr<Object_0076f214_1> arg1, gptr<Object_0076f214_2> r2, float S0_unused, float S1) {
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S0_1 = 0;
    u32 r4_1 = arg1->word_20;
    float S2 = 3.4028235e38f;
    u32 r12 = ~0u;
    u32 r3 = 0u;
    if (r4_1 >= 0u && r4_1 != 0) {
        do {
            gptr<Local_0076f214_r4_2> r4_2 = gptr<Local_0076f214_r4_2>(r1 + 0x344u);  // (from the original)
            if (r3 < 0xau) {  // (from the original)
                r4_2 = gptr<Local_0076f214_r4_2>(r4_2.addr() + (r3 << 4));
            }
            float S1_1 = r2->float_0 - r4_2->float_0;
            S0_1 = r2->float_8 - r4_2->float_8;
            S1 = S1_1 * S1_1 + S0_1 * S0_1;
            fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S2);  // (from the original)
            if (!(fpsr >> 0x1d & 1)) {  // (from the original)
                S2 = S1;
                r12 = r3;
            }
            r3 += 1u;
            guest::preempt();
        } while (*gptr<u32>(r1 + 0x20u) > r3);  // (from the original)
        if (r12 + 1u != 0) {
            gptr<Local_0076f214_r1_1> r1_1 = gptr<Local_0076f214_r1_1>(r1 + 0x344u);  // (from the original)
            if (r12 < 0xau) {  // (from the original)
                r1_1 = gptr<Local_0076f214_r1_1>(r1_1.addr() + (r12 << 4));
            }
            u32 r2_1 = r1_1->word_0;
            u32 r3_1 = r1_1->word_4;
            u32 r1_2 = r1_1->word_8;
            arg0->word_8 = r1_2;
            arg0->word_0 = r2_1;
            arg0->word_4 = r3_1;
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1;
            return;
        }
    }
    float S0_2 = 0.0f;
    arg0->word_0 = std::bit_cast<u32>(S0_2);
    arg0->word_4 = std::bit_cast<u32>(S0_2);
    arg0->word_8 = std::bit_cast<u32>(S0_2);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_0076f214
GUEST_EXPORT_FRAMED(0x0076f214, d_0076f214::nearest_point_of_ten, 0x30);  // pushes {r4, r5} first, as the original

// f_0076f2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The child count at +0x67cc.
namespace d_0076f2c8 {

struct __attribute__((packed)) Object_0076f2c8_0 {
    u8 unknown_0[0x67cc];  // (not used here)
    u32 word_67cc;
};
GUEST_OFFSET(Object_0076f2c8_0, word_67cc, 0x67cc);


u32 child_count_67cc(gptr<Object_0076f2c8_0> arg0) {
    return arg0->word_67cc;
}

}  // namespace d_0076f2c8
GUEST_EXPORT(0x0076f2c8, d_0076f2c8::child_count_67cc);

// f_0076f38c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 40 of child `index` (from +0x67d4, count +0x67cc).
namespace d_0076f38c {

struct __attribute__((packed)) Object_0076f38c_0 {
    u8 unknown_0[0x67cc];  // (not used here)
    u32 word_67cc;
    u8 unknown_67d0[0x4];  // (not used here)
    u32 word_67d4;
};
GUEST_OFFSET(Object_0076f38c_0, word_67cc, 0x67cc);
GUEST_OFFSET(Object_0076f38c_0, word_67d4, 0x67d4);


u32 child_virtual_40(gptr<Object_0076f38c_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_67cc;
    u32 r0_1 = r2_1 > r1 ? gptr<u32>(arg0->word_67d4)[r1] : 0u;
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xa0u);  // (from the original)
    // virtual function 40 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0076f38c
GUEST_EXPORT(0x0076f38c, d_0076f38c::child_virtual_40);

// f_0076f68c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 3 of +0x64.
namespace d_0076f68c {

struct __attribute__((packed)) Object_0076f68c_0 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
};
GUEST_OFFSET(Object_0076f68c_0, half_64, 0x64);


u32 half_64_bit_3(gptr<Object_0076f68c_0> arg0) {
    return (u32(arg0->half_64) & 8u) >> 3;
}

}  // namespace d_0076f68c
GUEST_EXPORT(0x0076f68c, d_0076f68c::half_64_bit_3);

// f_0076f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 2 of +0x64.
namespace d_0076f69c {

struct __attribute__((packed)) Object_0076f69c_0 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
};
GUEST_OFFSET(Object_0076f69c_0, half_64, 0x64);


u32 half_64_bit_2(gptr<Object_0076f69c_0> arg0) {
    return (u32(arg0->half_64) & 4u) >> 2;
}

}  // namespace d_0076f69c
GUEST_EXPORT(0x0076f69c, d_0076f69c::half_64_bit_2);

// f_0076f7e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 0 when bit 0 of +0x64 is set, else 1 with bit 1 or 2.
namespace d_0076f7e8 {

struct __attribute__((packed)) Object_0076f7e8_0 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
};
GUEST_OFFSET(Object_0076f7e8_0, half_64, 0x64);


u32 half_64_kind(gptr<Object_0076f7e8_0> arg0) {
    u32 r0_1 = arg0->half_64;
    if ((r0_1 & 1u) != 0) {
        return 0u;
    }
    return (r0_1 & 2u) == 0 ? 2u : 1u;
}

}  // namespace d_0076f7e8
GUEST_EXPORT(0x0076f7e8, d_0076f7e8::half_64_kind);

// f_0076f9fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Computes the record's check value.
namespace d_0076f9fc {

struct __attribute__((packed)) Object_0076f9fc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0076f9fc_0, word_c, 0xc);
GUEST_OFFSET(Object_0076f9fc_0, word_10, 0x10);

inline guest::global<u32, 0x0087aa84> global_0087aa84;
inline guest::global<u32, 0x0087aa88> global_0087aa88;
inline guest::global<u32, 0x0087aa8c> global_0087aa8c;
inline guest::global<u32, 0x0087aa90> global_0087aa90;
inline guest::global<u32, 0x0087aa94> global_0087aa94;
inline guest::global<u32, 0x0087aa98> global_0087aa98;
inline guest::global<u32, 0x0087aa9c> global_0087aa9c;
inline guest::global<u32, 0x0087aaa0> global_0087aaa0;
inline guest::global<u32, 0x0087aaa4> global_0087aaa4;
inline guest::global<u32, 0x0087aaa8> global_0087aaa8;
inline guest::global<u32, 0x0087aaac> global_0087aaac;
inline guest::global<u32, 0x0087aab0> global_0087aab0;

u32 Record__checksum_76f9fc(gptr<Object_0076f9fc_0> record) {
    u32 r4_1 = 0;
    u32 r3_3 = 0;
    u32 r3_5 = 0;
    u32 r3_7 = 0;
    u32 r3_9 = 0;
    u32 r1_1 = record->word_c;
    u32 r3_1 = *global_0087aa98;
    if (r1_1 == *global_0087aa94) {
        if ((r1_1 != 0 || ((record->word_10 | r3_1) & 1u) != 0) && record->word_10 != r3_1) {
            goto L_76fa44;
        }
        r4_1 = 1u;
        goto L_76fa48;
    }
L_76fa44:;
    r4_1 = 0u;
L_76fa48:;
    u32 r3_2 = *global_0087aa88;
    if (r1_1 == *global_0087aa84) {
        if ((r1_1 != 0 || ((record->word_10 | r3_2) & 1u) != 0) && record->word_10 != r3_2) {
            goto L_76fa84;
        }
        r3_3 = 1u;
        goto L_76fa88;
    }
L_76fa84:;
    r3_3 = 0u;
L_76fa88:;
    u32 r4_2 = r4_1 | r3_3;
    u32 r3_4 = *global_0087aaa0;
    if (r1_1 == *global_0087aa9c) {
        if ((r1_1 != 0 || ((record->word_10 | r3_4) & 1u) != 0) && record->word_10 != r3_4) {
            goto L_76fac8;
        }
        r3_5 = 1u;
        goto L_76facc;
    }
L_76fac8:;
    r3_5 = 0u;
L_76facc:;
    u32 r4_3 = r4_2 | r3_5;
    u32 r3_6 = *global_0087aa90;
    if (r1_1 == *global_0087aa8c) {
        if ((r1_1 != 0 || ((record->word_10 | r3_6) & 1u) != 0) && record->word_10 != r3_6) {
            goto L_76fb0c;
        }
        r3_7 = 1u;
        goto L_76fb10;
    }
L_76fb0c:;
    r3_7 = 0u;
L_76fb10:;
    u32 r4_4 = r4_3 | r3_7;
    u32 r3_8 = *global_0087aab0;
    if (r1_1 == *global_0087aaac) {
        if ((r1_1 != 0 || ((record->word_10 | r3_8) & 1u) != 0) && record->word_10 != r3_8) {
            goto L_76fb50;
        }
        r3_9 = 1u;
        goto L_76fb54;
    }
L_76fb50:;
    r3_9 = 0u;
L_76fb54:;
    u32 r12_1 = r4_4 | r3_9;
    u32 r3_10 = *global_0087aaa4;
    u32 r2_1 = *global_0087aaa8;
    if (r1_1 == r3_10) {
        if (r1_1 == 0) {
            r1_1 = record->word_10 | r2_1;
            if ((r1_1 & 1u) == 0) {
                guest::cpu()->r[1] = r1_1;
                return 1u | r12_1;
            }
        }
        if (record->word_10 != r2_1) {
            guest::cpu()->r[1] = r1_1;
            return r12_1;
        }
        guest::cpu()->r[1] = r1_1;
        return 1u | r12_1;
    }
    guest::cpu()->r[1] = r1_1;
    return r12_1;
}

}  // namespace d_0076f9fc
GUEST_EXPORT_FRAMED(0x0076f9fc, d_0076f9fc::Record__checksum_76f9fc, 0x10);  // pushes {r4} first, as the original

// f_0076fd38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item set lists every item of `category` (its last slot, from the category's count, is filled).
namespace d_0076fd38 {

inline constexpr u32 item_set_categories_address = 0x00ad2f1cu;
inline guest::global<u8, 0x00ad2f1c> item_set_categories;
inline constexpr guest::Function<0x005359fc, u32(u32)> category_info;
inline constexpr guest::Function<0x006ef7a4, u32(u32, u32, u32, u32)> list_items_in_set;

u32 ItemSet__has_full_category(u32 item_set, u32 r1) {
    list_items_in_set(item_set_categories_address, item_set, r1, guest::cpu()->r[3]);
    u32 r0_1 = *item_set_categories;
    if (r0_1 == 0x9bu) {  // (from the original)
        return 0u;
    }
    u32 info_2 = category_info(r0_1);
    return gptr<u32>(item_set_categories_address)[*gptr<u32>(info_2 + 4u)] + 1u != 0;
}

}  // namespace d_0076fd38
GUEST_EXPORT_FRAMED(0x0076fd38, d_0076fd38::ItemSet__has_full_category, 0x4010);  // pushes {r4, lr} first, as the original
