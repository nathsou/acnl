// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00630148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The float of the table at 0x89515c for the index (below 7, else the first).
namespace d_00630148 {


u32 table_89515c_float(u32 r0) {
    if (r0 >= 7u) {
        r0 = 0u;
    }
    u32 r0_1 = (r0 << 2) + 0x89515cu;  // (from the original)
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1));
    guest::cpu()->r[1] = 0x89515cu;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_00630148
GUEST_EXPORT(0x00630148, d_00630148::table_89515c_float);

// f_006310c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the furniture's action 0x1f with the offset.
namespace d_006310c0 {

struct __attribute__((packed)) Object_006310c0_0 {
    u8 unknown_0[0x308];  // (not used here)
    u8 byte_308;
};
GUEST_OFFSET(Object_006310c0_0, byte_308, 0x308);

inline constexpr guest::Function<0x005707f0, u32(u32, u32, u32, u32)> AcFtr__start_action;

void AcFtr__start_kind_1f_b(gptr<Object_006310c0_0> ac_ftr) {
    ac_ftr->byte_308 = 1;
    float S0_1 = -10.0f;
    guest::cpu()->s[0] = S0_1;
    AcFtr__start_action(ac_ftr.addr(), 0x1fu, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_006310c0
GUEST_EXPORT(0x006310c0, d_006310c0::AcFtr__start_kind_1f_b);

// f_00631cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the NPC's id is one of the kind's two ids (any kind for 7 or more).
namespace d_00631cc0 {

struct __attribute__((packed)) Object_00631cc0_1 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_00631cc0_1, word_68, 0x68);


u32 NpcTalk__id_matches_kind(u32 r0_unused, gptr<Object_00631cc0_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r0 = *gptr<u16>(arg1->word_68 + 0x70u);  // (from the original)
    if (r2 >= 7u) {
        r2 = 0x842614u;  // (from the original)
        r1 = 0u;
        u32 r3 = r2 + 0xeu;  // (from the original)
        for (;;) {
            r1 += 1u;
            r2 += 2u;
            r3 += 2u;
            if (s32(r1) >= 7) {
                break;
            }
            if (r1 != 0 && (*gptr<u16>(r2) == r0 || *gptr<u16>(r3) == r0)) {
                guest::cpu()->r[1] = r1;
                return 1u;
            }
            guest::preempt();
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = gptr<u16>(0x842614u)[r2];  // (from the original)
    if (r1_1 == r0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r1_2 = gptr<u16>(0x842622u)[r2];  // (from the original)
    if (r1_2 != r0) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_00631cc0
GUEST_EXPORT(0x00631cc0, d_00631cc0::NpcTalk__id_matches_kind);

// f_00631d5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the talk codes for the NPC's kind and loads the kind's handler.
namespace d_00631d5c {

struct __attribute__((packed)) Local_00631d5c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00631d5c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00631d5c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00631d5c_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_00631d5c_r0_1, word_4, 0x4);

inline constexpr guest::Function<0x00318944, u32(u32, u32, u32, u32)> byte_08_unless_mode_above_1;
inline constexpr guest::Function<0x00632904, u32(u32, u32, u32)> update_talk_codes;

u32 NpcTalk__update_codes_for_kind(u32 npc_talk, gptr<AcNpcNml> ac_npc_nml, u32 r2, u32 r3) {
    u32 r1 = ac_npc_nml.addr();
    u32 r6_1 = r1;
    gptr<Local_00631d5c_r0_1> r0_1 = gptr<Local_00631d5c_r0_1>(ac_npc_nml->word_102c);
    if (r0_1.addr() != 0) {
        r0_1 = gptr<Local_00631d5c_r0_1>(byte_08_unless_mode_above_1(r0_1.addr() + 0x28u, r1, r2, r3));  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r4_1 = r0_1.addr();
        if (r0_1.addr() != 0) {
            r0_1 = gptr<Local_00631d5c_r0_1>(update_talk_codes(npc_talk, r6_1, r0_1.addr()));
            r1 = guest::cpu()->r[1];
            if (r4_1 < 7u) {
                u32 ea_1 = (r4_1 << 3) + 0x842630u;  // (from the original)
                r0_1 = gptr<Local_00631d5c_r0_1>(ea_1);
                r1 = *gptr<u32>(ea_1);
                if (r1 == 0) {
                    u32 r2_1 = r0_1->word_4;
                    if ((r2_1 & 1u) == 0 || r2_1 == 0) {
                        guest::cpu()->r[1] = r1;
                        return r0_1.addr();
                    }
                }
                u32 r2_2 = r0_1->word_4;
                r0_1 = gptr<Local_00631d5c_r0_1>(0u);
                gptr<Local_00631d5c_ea_2> ea_2 = gptr<Local_00631d5c_ea_2>(npc_talk + 0x14u);  // (from the original)
                ea_2->word_0 = r1;
                ea_2->word_4 = r2_2;
                *gptr<u8>(npc_talk + 0x38u) = u8(r0_1.addr());  // (from the original)
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_00631d5c
GUEST_EXPORT_FRAMED(0x00631d5c, d_00631d5c::NpcTalk__update_codes_for_kind, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006322a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the talk state when it was active, and clears it.
namespace d_006322a0 {

struct __attribute__((packed)) NpcTalk {
    u8 unknown_0[0x3c];  // (not used here)
    u8 byte_3c;
};
GUEST_OFFSET(NpcTalk, byte_3c, 0x3c);

inline constexpr guest::Function<0x00632428, u32(u32, u32, u32, u32)> reset_talk_state_00632428;

u32 NpcTalk__end(gptr<NpcTalk> npc_talk, u32 r1) {
    if (npc_talk->byte_3c != 0) {
        reset_talk_state_00632428(npc_talk.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    npc_talk->byte_3c = 0;
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006322a0
GUEST_EXPORT_FRAMED(0x006322a0, d_006322a0::NpcTalk__end, 0x4010);  // pushes {r4, lr} first, as the original

// f_006323d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Extends the countdown by the wait (in frames) for the index when available, and marks it waiting.
namespace d_006323d8 {

struct __attribute__((packed)) NpcTalk {
    u8 unknown_0[0x39];  // (not used here)
    u8 byte_39;
};
GUEST_OFFSET(NpcTalk, byte_39, 0x39);

inline constexpr guest::Function<0x0051ddb8, u32(u32, u32, u32, u32)> Countdown__extend;
inline constexpr guest::Function<0x00632488, u32(u32, u32, u32, u32)> index_is_available_00632488;

u32 NpcTalk__wait(gptr<NpcTalk> npc_talk, u32 r1, u32 r2, u32 r3) {
    u32 r5_1 = r1;
    u32 r0_1 = index_is_available_00632488(npc_talk.addr(), r1, r2, r3);
    if (r0_1 == 0) {
        r5_1 = 0u;
    }
    Countdown__extend(npc_talk.addr(), r5_1, 0xffffu & (r2 << 8) - r2 * 0x1fu << 3, r3);  // (from the original)
    npc_talk->byte_39 = 1;
    return 1u;
}

}  // namespace d_006323d8
GUEST_EXPORT_FRAMED(0x006323d8, d_006323d8::NpcTalk__wait, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00632428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00632428 {

struct __attribute__((packed)) NpcTalk {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x4];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(NpcTalk, word_28, 0x28);
GUEST_OFFSET(NpcTalk, word_2c, 0x2c);
GUEST_OFFSET(NpcTalk, word_34, 0x34);

inline constexpr guest::Function<0x002e5b08, u32(u32, u32)> EffectHandle__release;
inline constexpr guest::Function<0x002e6450, u32(u32, u32, u32, u32)> EffectHandle__kill_now;
inline constexpr guest::Function<0x0072079c, u32(u32, u32, u32, u32)> EffectHandle__flag;

u32 reset_talk_state_00632428(gptr<NpcTalk> npc_talk, u32 r1) {
    u32 r0_2 = 0;
    u32 r5_1 = ~0u;
    if (r1 == 0) {
        r0_2 = EffectHandle__flag(npc_talk.addr() + 0x1cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_4 = EffectHandle__release(npc_talk.addr() + 0x1cu, r1);  // (from the original)
            npc_talk->word_34 = r5_1;
            return r0_4;
        }
    } else {
        r0_2 = npc_talk->word_28;
        if (r0_2 != 0) {
            r1 = npc_talk->word_2c;
            r0_2 = *gptr<u32>(r0_2 + 0xcu);  // (from the original)
            if (r1 == r0_2) {
                r0_2 = EffectHandle__kill_now(npc_talk.addr() + 0x1cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
            }
        }
        npc_talk->word_34 = r5_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00632428
GUEST_EXPORT_FRAMED(0x00632428, d_00632428::reset_talk_state_00632428, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00632488: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00632488 {

struct __attribute__((packed)) NpcTalk {
    u8 unknown_0[0x3b];  // (not used here)
    u8 byte_3b;
};
GUEST_OFFSET(NpcTalk, byte_3b, 0x3b);

inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u8, 0x0094daac> available_indices;
inline guest::global<u8, 0x0094daad> talk_index_available;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0011a391, u32(u32)> check_villager_11a390;
inline constexpr guest::Function<0x0011a7df, u32(u32, u32)> SaveVillager__has_slot_flag;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x002ff8b0, u32(u32)> player_slot_byte;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> villager_record_at;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x00313440, u32(u32)> flagged_mode_ordinal;

u32 index_is_available_00632488(gptr<NpcTalk> npc_talk) {
    u32 r0_1 = 0;
    u32 r1_1 = *available_indices;
    if (r1_1 != 0) {
        r0_1 = s8(*talk_index_available);
    } else {
        r1_1 = 0u;
        *available_indices = 1;
        *talk_index_available = u8(r1_1);
        u32 r0_2 = npc_talk->byte_3b;
        if (r0_2 == 0) {
            u32 r0_3 = mode_above_1(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 == 0) {
                u32 r0_4 = read_global_object_byte(r0_3, r1_1);
                r1_1 = guest::cpu()->r[1];
                if (r0_4 != 3u) {
                    u32 r4_1 = *current_player_data;
                    if (r4_1 == 0) {
                        *talk_index_available = 1;
                        return 1u;
                    }
                    u32 scene = current_scene_id(player_state_block_address, r1_1);
                    u32 r0_6 = flagged_mode_ordinal(scene);
                    u32 save_data_2 = get_save_data(r0_6);
                    u32 villager_record_2 = villager_record_at(save_data_2 + 0x292a4u, r0_6);  // (from the original)
                    if (villager_record_2 != 0) {
                        u32 r0_10 = check_villager_11a390(villager_record_2);
                        r1_1 = guest::cpu()->r[1];
                        if (r0_10 != 0) {
                            *talk_index_available = 1;
                            return 1u;
                        }
                    }
                    u32 r0_11 = *gptr<u8>((r4_1 + 0x8f77u) + 0x11u);  // (from the original)
                    r1_1 = r0_11 << 0x19;  // (from the original)
                    if (s32(r1_1) < 0) {
                        u32 res_1 = r0_11 >> 7;
                        u32 zf_1 = res_1 == 0;
                        r1_1 = res_1;
                        if (zf_1) {
                            zf_1 = r0_6 == (r0_11 >> 2u & 0xfu);  // (from the original)
                        }
                        if (zf_1) {
                            *talk_index_available = 1;
                            guest::cpu()->r[1] = r1_1;
                            return 1u;
                        }
                    }
                    if (s32(u32(*gptr<u8>(r4_1 + 0x5705u)) << 0x1d) < 0 || villager_record_2 == 0) {  // (from the original)
                        *talk_index_available = 1;
                        guest::cpu()->r[1] = r1_1;
                        return 1u;
                    }
                    u32 r0_12 = player_slot_byte(4u);
                    u32 r0_13 = SaveVillager__has_slot_flag(villager_record_2, r0_12);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_13 == 0) {
                        *talk_index_available = 1;
                        return 1u;
                    }
                }
            }
        }
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00632488
GUEST_EXPORT_FRAMED(0x00632488, d_00632488::index_is_available_00632488, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00632594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the effect at the NPC's head, or moves the one already running.
namespace d_00632594 {

struct __attribute__((packed)) NpcTalk {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x4];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(NpcTalk, word_28, 0x28);
GUEST_OFFSET(NpcTalk, word_2c, 0x2c);
GUEST_OFFSET(NpcTalk, word_34, 0x34);

struct __attribute__((packed)) Object_00632594_1 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_00632594_1, word_68, 0x68);

inline constexpr u32 effect_spawn_params_address = 0x00975beeu;
inline constexpr u32 effect_spawn_context_address = 0x00ae5664u;
inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> EffectHandle__start;
inline constexpr guest::Function<0x002e66c0, u32(u32, u32, u32, u32)> EffectHandle__restart;
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> Model__joint_matrix;

struct __attribute__((packed)) Frame_00632594 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00632594, word_0, 0x0);
GUEST_OFFSET(Frame_00632594, word_4, 0x4);
GUEST_OFFSET(Frame_00632594, word_8, 0x8);
GUEST_SIZE(Frame_00632594, 0x1c);

void NpcTalk__play_effect(gptr<NpcTalk> npc_talk, gptr<Object_00632594_1> arg1, u32 r2) {
    guest::StackFrameOf<Frame_00632594> frame;  // the original's stack frame
    u32 r0_1 = arg1->word_68;
    u32 r0_2 = Model__joint_matrix(r0_1, frame.at(0xc).addr(), *gptr<u32>(r0_1 + 0xb4u), 1u);  // (from the original)
    if (r0_2 == 0) {
        return;
    }
    u32 r0_3 = npc_talk->word_28;
    if (r0_3 != 0 && npc_talk->word_2c == *gptr<u32>(r0_3 + 0xcu) && npc_talk->word_34 == r2) {  // (from the original)
        frame->word_0 = 1;
        EffectHandle__restart(npc_talk.addr() + 0x1cu, frame.at(0xc).addr(), effect_spawn_params_address, effect_spawn_context_address);  // (from the original)
        return;
    }
    frame->word_8 = 0;
    frame->word_4 = 1;
    frame->word_0 = 0xae5664;  // (from the original)
    EffectHandle__start(npc_talk.addr() + 0x1cu, r2, frame.at(0xc).addr(), effect_spawn_params_address);  // (from the original)
    npc_talk->word_34 = r2;
}

}  // namespace d_00632594
GUEST_EXPORT_FRAMED(0x00632594, d_00632594::NpcTalk__play_effect, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00632648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the talk codes for the NPC and resets the talk state.
namespace d_00632648 {

inline constexpr guest::Function<0x00318944, u32(u32, u32, u32, u32)> byte_08_unless_mode_above_1;
inline constexpr guest::Function<0x00632428, u32(u32, u32, u32, u32)> reset_talk_state_00632428;
inline constexpr guest::Function<0x00632904, u32(u32, u32, u32)> update_talk_codes;

u32 NpcTalk__reset_for_kind(u32 npc_talk, gptr<AcNpcNml> ac_npc_nml, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1 = ac_npc_nml.addr();
    u32 r4_1 = r1;
    u32 r0_1 = ac_npc_nml->word_102c;
    if (r0_1 != 0) {
        r0_1 = byte_08_unless_mode_above_1(r0_1 + 0x28u, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            update_talk_codes(npc_talk, r4_1, 0u);
            frame.release();
            return reset_talk_state_00632428(npc_talk, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00632648
GUEST_EXPORT(0x00632648, d_00632648::NpcTalk__reset_for_kind);

// f_00636bf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a random choice (of 3) to the talk's choices.
namespace d_00636bf0 {

struct __attribute__((packed)) NpcTalk {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(NpcTalk, word_4, 0x4);

struct __attribute__((packed)) Object_00636bf0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00636bf0_1, word_0, 0x0);

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x005e3550, u32(u32, u32, u32, u32)> MessageRef__set_2;
inline constexpr guest::Function<0x00603a28, u32(u32, u32, u32)> script__CapitalTopEngine__CapitalTopEngine_00603a28;

struct __attribute__((packed)) Frame_00636bf0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00636bf0, word_0, 0x0);
GUEST_OFFSET(Frame_00636bf0, word_4, 0x4);
GUEST_OFFSET(Frame_00636bf0, word_8, 0x8);
GUEST_SIZE(Frame_00636bf0, 0x34);

u32 NpcTalk__add_random_choice(gptr<NpcTalk> npc_talk, gptr<Object_00636bf0_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00636bf0> frame;  // the original's stack frame
    u32 random_2 = random_below(3u, arg1.addr(), r2, r3);
    frame->word_0 = 0;
    frame->word_4 = 8;
    frame->word_8 = 0;
    MessageRef__set_2(frame.at(0x10).addr(), 0x841c7cu, random_2 + 0x1au, 0u);  // (from the original)
    u32 r0_3 = npc_talk->word_4;
    u32 r1_1 = arg1->word_0;
    arg1->word_0 = r1_1 + 1u;
    script__CapitalTopEngine__CapitalTopEngine_00603a28(r0_3, r1_1, frame.at(0x10).addr());  // (from the original)
    return frame.at(0x10).addr();  // (from the original)
}

}  // namespace d_00636bf0
GUEST_EXPORT_FRAMED(0x00636bf0, d_00636bf0::NpcTalk__add_random_choice, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0063ca1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the current player's position for the NPC.
namespace d_0063ca1c {

struct __attribute__((packed)) NpcTalk {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x181];  // (not used here)
    u8 byte_275;
};
GUEST_OFFSET(NpcTalk, word_f0, 0xf0);
GUEST_OFFSET(NpcTalk, byte_275, 0x275);

struct __attribute__((packed)) Local_0063ca1c_r4_1 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_0063ca1c_r4_1, byte_3, 0x3);
GUEST_OFFSET(Local_0063ca1c_r4_1, byte_4, 0x4);
GUEST_OFFSET(Local_0063ca1c_r4_1, byte_5, 0x5);

struct __attribute__((packed)) Local_0063ca1c_r6_2 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_0063ca1c_r6_2, half_0, 0x0);
GUEST_OFFSET(Local_0063ca1c_r6_2, byte_4, 0x4);
GUEST_OFFSET(Local_0063ca1c_r6_2, byte_5, 0x5);

inline constexpr guest::Function<0x0011ac4d, u32(u32, u32, u32, u32)> Villager__choose_greeting;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x00318fbc, u32(u32, u32, u32)> call_on_9b3ce0;
inline constexpr guest::Function<0x004e3a7c, u32(u32, u32, u32, u32)> BsNpcMgr__NpcPosGetCB__NpcPosGetCB_004e3a7c;

struct __attribute__((packed)) Frame_0063ca1c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x38];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0063ca1c, word_0, 0x0);
GUEST_OFFSET(Frame_0063ca1c, word_4, 0x4);
GUEST_OFFSET(Frame_0063ca1c, word_8, 0x8);
GUEST_OFFSET(Frame_0063ca1c, word_c, 0xc);
GUEST_OFFSET(Frame_0063ca1c, word_10, 0x10);
GUEST_SIZE(Frame_0063ca1c, 0x4c);

u32 NpcTalk__player_position(gptr<NpcTalk> npc_talk, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0063ca1c> frame;  // the original's stack frame
    u32 r5_2 = 0;
    u32 r5_1 = r1;
    if (r1 < 0x10u) {  // (from the original)
        gptr<Local_0063ca1c_r4_1> r4_1 = gptr<Local_0063ca1c_r4_1>(npc_talk.addr() + 0x270u);  // (from the original)
        npc_talk->byte_275 = 4;
        u32 r0_1 = npc_talk->word_f0;
        if (r0_1 != 0) {
            u32 r0_2 = r0_1 + 0x1000u;  // (from the original)
            u32 r6_1 = *gptr<u32>(r0_2 + 0x28u);  // (from the original)
            u32 player_2 = get_current_player(r0_2, 4u, r2, r3);
            r1 = guest::cpu()->r[1];
            u32 zf_1 = r6_1 == 0;
            if (!zf_1) {
                zf_1 = player_2 == 0;
            }
            if (zf_1) {
                return 0u;
            }
            if (s32(r5_1) >= 0xc) {  // (from the original)
                frame->word_4 = 1;
                frame->word_0 = r5_1;
                u32 r0_4 = Villager__choose_greeting(r6_1, frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_4 == 0) {
                    return 0u;
                }
                r4_1->byte_3 = u8(frame->word_8);
                r4_1->byte_4 = u8(frame->word_c);
                r4_1->byte_5 = u8(frame->word_10);
                return 1u;
            }
            u32 r2_2 = *gptr<s8>(r6_1 + 0x24f0u);  // (from the original)
            call_on_9b3ce0(frame.at(0).addr(), 0x48u, r2_2);  // (from the original)
            gptr<Local_0063ca1c_r6_2> r6_2 = gptr<Local_0063ca1c_r6_2>(frame.at(0).addr() + r5_1 * 6u);
            u32 r0_6 = r6_2->half_0;
            if (r0_6 == 0x6000u) {  // (from the original)
                r5_2 = 1u;
            } else {
                u32 r0_7 = r0_6 - 0x6001u;  // (from the original)
                r5_2 = r0_7 == 0 ? 3u : r0_7 == 1u ? 0u : r0_7 == 2u ? 2u : 4u;
            }
            u32 r2_3 = r6_2->byte_5;
            u32 r1_2 = r6_2->byte_4;
            u32 r0_9 = BsNpcMgr__NpcPosGetCB__NpcPosGetCB_004e3a7c(player_2 + 0x8d78u, r1_2, r2_3, r5_2);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_9 == 0) {
                return 0u;
            }
            r4_1->byte_3 = r6_2->byte_4;
            r4_1->byte_4 = r6_2->byte_5;
            r4_1->byte_5 = u8(r5_2);
            return 1u;
        }
        get_current_player(r0_1, 4u, r2, r3);
        r1 = guest::cpu()->r[1];
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0063ca1c
GUEST_EXPORT_FRAMED(0x0063ca1c, d_0063ca1c::NpcTalk__player_position, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0063cb74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Chooses the item the NPC gives the player.
namespace d_0063cb74 {

struct __attribute__((packed)) NpcTalk {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x44];  // (not used here)
    u8 byte_138;
    u8 unknown_139[0x137];  // (not used here)
    u16 half_270;
    u8 unknown_272[0x8];  // (not used here)
    u8 byte_27a;
    u8 unknown_27b[0x5];  // (not used here)
    u8 byte_280;
};
GUEST_OFFSET(NpcTalk, word_f0, 0xf0);
GUEST_OFFSET(NpcTalk, byte_138, 0x138);
GUEST_OFFSET(NpcTalk, half_270, 0x270);
GUEST_OFFSET(NpcTalk, byte_27a, 0x27a);
GUEST_OFFSET(NpcTalk, byte_280, 0x280);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> SpecialItem__variant;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x0030f594, u32(u32)> is_special_item;
inline constexpr guest::Function<0x00335214, u32(u32, u32, u32)> set_item_amount;
inline constexpr guest::Function<0x0051ca3c, u32(u32, u32, u32, u32)> current_player_field_8d84;
inline constexpr guest::Function<0x005be180, u32(u32, u32)> set_bit_75;
inline constexpr guest::Function<0x007d0f40, u32(u32, u32)> NetPresence__send_1;

u32 NpcTalk__choose_gift_item(gptr<NpcTalk> npc_talk, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = npc_talk->byte_280;
    if (r0_1 != 0) {
        if (r0_1 == 1u) {
            u32 r0_2 = current_player_field_8d84(r0_1, r1, r2, r3);
            set_bit_75(r0_2, 4u);
            u32 r1_1 = npc_talk->half_270;
            construct_item(frame.at(0).addr(), r1_1);
            u32 r0_5 = is_special_item(frame.at(0).addr());
            if (r0_5 != 0) {
                SpecialItem__variant(frame.at(0).addr(), 1u, *gptr<u32>(npc_talk->word_f0 + 0x1030u), 0u);  // (from the original)
            }
            Item__copy(npc_talk.addr() + 0x130u, frame.at(0).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            npc_talk->byte_138 = 0;
            npc_talk->byte_27a = 0;
            u32 r0_8 = npc_talk->word_f0;
            if (r0_8 != 0) {
                u32 r0_9 = *gptr<u32>(r0_8 + 0x1028u);  // (from the original)
                if (r0_9 != 0) {
                    Item__copy(r0_9 + 0x249au, frame.at(0).addr());  // (from the original)
                    r1 = guest::cpu()->r[1];
                    u32 r0_11 = npc_talk->word_f0;
                    if (r0_11 != 0) {
                        u32 r0_13 = set_item_amount(frame.at(4).addr(), frame.at(0).addr(), *gptr<u32>(r0_11 + 0x1030u));  // (from the original)
                        r1 = guest::cpu()->r[1];
                        if (r0_13 != 0) {
                            NetPresence__send_1(4u, frame.at(4).addr());
                            r1 = guest::cpu()->r[1];
                        }
                    }
                }
            }
            r0_1 = frame.at(0).addr();
        }
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    u32 r0_14 = current_player_field_8d84(r0_1, r1, r2, r3);
    u32 r0_15 = npc_talk->word_f0;
    if (r0_15 != 0) {
        u32 r0_16 = *gptr<u32>(r0_15 + 0x1028u);  // (from the original)
        if (r0_16 != 0) {
            u32 r1_7 = r0_16 + 0x249au;  // (from the original)
            Item__copy_b(frame.at(0).addr(), r1_7);
            u32 number_2 = Item__number(frame.at(0).addr());
            *gptr<u16>((npc_talk.addr() + 0x200u) + 0x70u) = u16(number_2);  // (from the original)
            Item__copy(r1_7, r0_14 + 0x6cu);  // (from the original)
            u32 r0_20 = npc_talk->word_f0;
            if (r0_20 != 0) {
                u32 r0_22 = set_item_amount(frame.at(4).addr(), r0_14 + 0x6cu, *gptr<u32>(r0_20 + 0x1030u));  // (from the original)
                if (r0_22 != 0) {
                    NetPresence__send_1(4u, frame.at(4).addr());
                }
            }
        }
    }
    set_bit_75(r0_14, 3u);
    npc_talk->byte_27a = 1;
    u32 r0_23 = npc_talk.addr() + 0x130u;  // (from the original)
    Item__copy(r0_23, r0_14 + 0x6cu);  // (from the original)
    npc_talk->byte_138 = 0;
    return r0_23;
}

}  // namespace d_0063cb74
GUEST_EXPORT_FRAMED(0x0063cb74, d_0063cb74::NpcTalk__choose_gift_item, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0063cd2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The days since the designated villager moved in.
namespace d_0063cd2c {

struct __attribute__((packed)) NpcTalk {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(NpcTalk, word_f0, 0xf0);

struct __attribute__((packed)) Local_0063cd2c_r0_6 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0063cd2c_r0_6, byte_0, 0x0);
GUEST_OFFSET(Local_0063cd2c_r0_6, byte_1, 0x1);

inline constexpr guest::Function<0x00118e25, u32(u32, u32)> is_designated_villager;
inline constexpr guest::Function<0x0011a1c9, u32(u32)> SaveVillager__has_flag_2510_bit0;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x00757c74, u32(u32, u32, u32)> days_since_date;

u32 NpcTalk__days_since_moved_in(gptr<NpcTalk> npc_talk, u32 r1, u32 r2, u32 r3) {
    u32 r0 = npc_talk.addr();
    u32 r0_5 = 0;
    gptr<Local_0063cd2c_r0_6> r0_6 = gptr<Local_0063cd2c_r0_6>(0u);
    u32 r1_3 = 0;
    u32 r5 = r3;
    u32 r7 = r1;
    u32 r0_1 = npc_talk->word_f0;
    u32 r8 = r2;
    if (r0_1 != 0) {
        u32 r0_2 = r0_1 + 0x1000u;  // (from the original)
        u32 r4_1 = *gptr<u32>(r0_2 + 0x28u);  // (from the original)
        if (r4_1 != 0) {
            u32 save_data_2 = get_save_data(r0_2, r1, r2, r3);
            u32 r6_1 = save_data_2 + 0x292a4u;  // (from the original)
            u32 r0_4 = is_designated_villager(r6_1, r4_1);
            if (r0_4 != 0 && *gptr<u8>(r6_1 + 0x1739fu) < 3u) {  // (from the original)
                r0 = 0u;
            } else {
                r0_5 = SaveVillager__has_flag_2510_bit0(r4_1);
                if (r0_5 == 0) {
                    goto L_63cdc8;
                } else {
                    r0 = 1u;
                }
            }
            r0_6 = gptr<Local_0063cd2c_r0_6>((r0 << 1) + 0x841a0du);  // (from the original)
            r1_3 = u32(s8(r0_6->byte_0)) + r5;
            *gptr<u32>(r7) = r1_3;
            *gptr<u32>(r8) = u32(s8(r0_6->byte_1)) + r5;
            guest::cpu()->r[1] = r1_3;
            return 1u;
L_63cdc8:;
            u32 now = game_time_now(r0_5);
            u32 r0_9 = days_since_date(r4_1 + 0x250au, now, 1u);  // (from the original)
            if (s32(r0_9) < 7) {
                r0 = 2u;
                r0_6 = gptr<Local_0063cd2c_r0_6>((r0 << 1) + 0x841a0du);  // (from the original)
                r1_3 = u32(s8(r0_6->byte_0)) + r5;
                *gptr<u32>(r7) = r1_3;
                *gptr<u32>(r8) = u32(s8(r0_6->byte_1)) + r5;
                guest::cpu()->r[1] = r1_3;
                return 1u;
            }
            if (s32(r0_9) < 0xe) {  // (from the original)
                r0 = 3u;
                r0_6 = gptr<Local_0063cd2c_r0_6>((r0 << 1) + 0x841a0du);  // (from the original)
                r1_3 = u32(s8(r0_6->byte_0)) + r5;
                *gptr<u32>(r7) = r1_3;
                *gptr<u32>(r8) = u32(s8(r0_6->byte_1)) + r5;
                guest::cpu()->r[1] = r1_3;
                return 1u;
            }
            r0 = s32(r0_9) < 0x1e ? 4u : 5u;  // (from the original)
            r0_6 = gptr<Local_0063cd2c_r0_6>((r0 << 1) + 0x841a0du);  // (from the original)
            r1_3 = u32(s8(r0_6->byte_0)) + r5;
            *gptr<u32>(r7) = r1_3;
            *gptr<u32>(r8) = u32(s8(r0_6->byte_1)) + r5;
            guest::cpu()->r[1] = r1_3;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0063cd2c
GUEST_EXPORT_FRAMED(0x0063cd2c, d_0063cd2c::NpcTalk__days_since_moved_in, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0063d364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives the request's reward: to the pockets or by letter, and counts it.
namespace d_0063d364 {

struct __attribute__((packed)) Local_0063d364_r4_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0063d364_r4_1, word_0, 0x0);

inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline constexpr guest::Function<0x0024b7b8, u32(u32, u32)> add_to_current_player_counter;
inline constexpr guest::Function<0x002fae84, u32(u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x005b96a8, u32(u32, u32)> VillagerRequest__send_letter;
inline constexpr guest::Function<0x005bb2a0, u32(u32, u32)> block_address_of_index_005bb2a0;
inline constexpr guest::Function<0x006f0130, u32(u32, u32)> Player__counter;
inline constexpr guest::Function<0x007241b0, u32(u32, u32)> Pockets__find_empty_slot;
inline constexpr guest::Function<0x007559ac, u32(u32, u32, u32, u32)> RecordHolder__first_id;
inline constexpr guest::Function<0x00755a98, u32(u32, u32)> handle_value;

u32 NpcTalk__give_request_reward(u32 npc_talk, u32 r1, u32 r2) {
    u32 r0_3 = 0;
    u32 r5_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 villager_request = 0;
    gptr<Local_0063d364_r4_1> r4_1 = gptr<Local_0063d364_r4_1>(r1);
    u32 r5_1 = 0u;
    u32 r0_1 = RecordHolder__first_id(r2, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0x60u) {  // (from the original)
        u32 r0_2 = handle_value(r2, r1);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 1u) {
            if (r0_2 == 2u) {
                if (*gptr<u8>(npc_talk + 0x272u) != 2u) {  // (from the original)
                    goto L_63d410;
                }
                goto L_63d3e0;
            }
            if (r0_2 == 3u) {
                r0_3 = player_state_block_address;
                r5_2 = *gptr<u32>(r0_3 + 0x234u);  // (from the original)
                if (r5_2 == 0) {
                    goto L_63d418;
                }
                r0_3 = Pockets__find_empty_slot(r5_2 + 0x6bd0u, r1);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (s32(r0_3) < 0) {
                    goto L_63d418;
                }
                goto L_63d410;
            }
            if (r0_2 != 4u) {
                guest::cpu()->r[1] = r1;
                return r5_1;
            }
            goto L_63d46c;
        }
        if (*gptr<u8>(npc_talk + 0x272u) != 0) {  // (from the original)
            goto L_63d410;
        }
        goto L_63d3e0;
L_63d3e0:;
        r4_1->word_0 = 1;
        guest::cpu()->r[1] = r1;
        return 1u;
L_63d410:;
        r4_1->word_0 = 0;
        guest::cpu()->r[1] = r1;
        return 1u;
L_63d418:;
        r4_1->word_0 = 1;
        r0_5 = get_data_base(r0_3, r1);
        r0_6 = slot_records_of(r0_5);
        r1_2 = *gptr<u8>(npc_talk + 0x270u);  // (from the original)
        r0_7 = r0_6 + 0x1744cu;  // (from the original)
        villager_request = block_address_of_index_005bb2a0(r0_7, r1_2);
        VillagerRequest__send_letter(villager_request, r5_2 + 0x55a6u);  // (from the original)
        Player__counter(0xfu, 1u);  // (from the original)
        add_to_current_player_counter(0x16u, 1u);  // (from the original)
        r1 = guest::cpu()->r[1];
        return 1u;
L_63d46c:;
        u32 r0_9 = *gptr<u8>(npc_talk + 0x274u);  // (from the original)
        r5_1 = 1u;
        if (r0_9 != 0) {
            r0_9 = 1u;
        }
        r4_1->word_0 = r0_9;
    }
    guest::cpu()->r[1] = r1;
    return r5_1;
}

}  // namespace d_0063d364
GUEST_EXPORT_FRAMED(0x0063d364, d_0063d364::NpcTalk__give_request_reward, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0063da4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random item of the 5 from the mask (for kinds 1 and 2) and sets it as the talk's word.
namespace d_0063da4c {

struct __attribute__((packed)) NpcTalk {
    u8 unknown_0[0x270];  // (not used here)
    u16 half_270;
    u8 unknown_272[0x2];  // (not used here)
    u8 byte_274;
};
GUEST_OFFSET(NpcTalk, half_270, 0x270);
GUEST_OFFSET(NpcTalk, byte_274, 0x274);

struct __attribute__((packed)) Object_0063da4c_2 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0063da4c_2, byte_0, 0x0);

inline constexpr guest::Function<0x00116ebf, u32(u32, u32, u32, u32)> BitCount__init;
inline constexpr guest::Function<0x002390f8, u32(u32, u32, u32)> script__WordFix_33u___WordFix_002390f8;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe419, u32(u32)> pick_random_set_bit;

void NpcTalk__pick_random_item(gptr<NpcTalk> npc_talk, u32 r1, gptr<Object_0063da4c_2> arg2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 bits = arg2.addr();
    u32 r4_1 = npc_talk.addr() + 0x270u;  // (from the original)
    npc_talk->half_270 = 0x7ffe;  // (from the original)
    npc_talk->byte_274 = u8(r1);
    if (r1 == 0 || r1 != 1u && r1 != 2u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 zf_1 = bits == 0;
    if (!zf_1) {
        bits = arg2->byte_0;
        zf_1 = bits == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    BitCount__init(frame.at(0).addr(), 5u, bits, guest::cpu()->r[3]);
    u32 r0_3 = pick_random_set_bit(frame.at(0).addr());
    if (r0_3 >= 5u) {
        return;
    }
    u32 r1_3 = gptr<u16>(0x841980u)[r0_3];  // (from the original)
    u32 r0_4 = frame.at(0xc).addr();  // (from the original)
    npc_talk->half_270 = u16(r1_3);
    construct_item(r0_4, r1_3);
    script__WordFix_33u___WordFix_002390f8(npc_talk.addr(), r0_4, 0u);
}

}  // namespace d_0063da4c
GUEST_EXPORT_FRAMED(0x0063da4c, d_0063da4c::NpcTalk__pick_random_item, 0x4030);  // pushes {r4, r5, lr} first, as the original
