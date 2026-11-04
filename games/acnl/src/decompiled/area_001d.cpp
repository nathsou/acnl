// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001d051c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the pending work (+0x1bc) with mode 2 and clears it; 0.
namespace d_001d051c {

struct __attribute__((packed)) FinishPending1bcArg0 {
    u8 unknown_0[0x1bc];  // (not used here)
    u8 byte_1bc;
};
GUEST_OFFSET(FinishPending1bcArg0, byte_1bc, 0x1bc);

inline constexpr guest::Function<0x001aae00, u32(u32, u32, u32, u32)> Sound3d__update;

u32 finish_pending_1bc(gptr<FinishPending1bcArg0> arg0, u32 r1) {
    if (arg0->byte_1bc != 0) {
        Sound3d__update(arg0.addr(), 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    arg0->byte_1bc = 0;
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_001d051c
GUEST_EXPORT_FRAMED(0x001d051c, d_001d051c::finish_pending_1bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_001d2694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays motion 0xae with the speeds.
namespace d_001d2694 {

inline constexpr guest::Function<0x001ce548, u32(u32, u32, u32, u32)> NpcModel__play_animation;

struct __attribute__((packed)) PlayMotionAeFrame {
    u32 word_0;
};
GUEST_OFFSET(PlayMotionAeFrame, word_0, 0x0);
GUEST_SIZE(PlayMotionAeFrame, 0x4);

u32 play_motion_ae(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<PlayMotionAeFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 0;
    float S1_1 = 1.0f;
    float S0_1 = 0.0f;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S0;
    guest::cpu()->s[3] = S1;
    guest::cpu()->s[4] = S2;
    NpcModel__play_animation(guest::cpu()->r[0], 0xaeu, 1u, 1u);
    return guest::cpu()->r[0];
}

}  // namespace d_001d2694
GUEST_EXPORT_FRAMED(0x001d2694, d_001d2694::play_motion_ae, 0x4000);  // pushes {lr} first, as the original

// f_001d2e8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the face byte (+0x224) and the hair word (+0x228).
namespace d_001d2e8c {

struct __attribute__((packed)) SetFaceAndHairArg0 {
    u8 unknown_0[0x224];  // (not used here)
    u8 byte_224;
    u8 unknown_225[0x3];  // (not used here)
    u32 word_228;
};
GUEST_OFFSET(SetFaceAndHairArg0, byte_224, 0x224);
GUEST_OFFSET(SetFaceAndHairArg0, word_228, 0x228);


void set_face_and_hair(gptr<SetFaceAndHairArg0> arg0, u32 r1, u32 r2) {
    arg0->byte_224 = u8(r1);
    arg0->word_228 = r2;
}

}  // namespace d_001d2e8c
GUEST_EXPORT(0x001d2e8c, d_001d2e8c::set_face_and_hair);

// f_001d333c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a player model: a human model with its clothing rows and entries.
namespace d_001d333c {

struct __attribute__((packed)) Local_001d333c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001d333c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001d333c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001d333c_r0_1 {
    u32 vtable;
    u8 unknown_4[0x1b8];  // (not used here)
    u8 byte_1bc;
    u8 byte_1bd;
    u8 byte_1be;
    u8 unknown_1bf[0x1];  // (not used here)
    u32 word_1c0;
    u32 word_1c4;
    u8 byte_1c8;
};
GUEST_OFFSET(Local_001d333c_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_001d333c_r0_1, byte_1bc, 0x1bc);
GUEST_OFFSET(Local_001d333c_r0_1, byte_1bd, 0x1bd);
GUEST_OFFSET(Local_001d333c_r0_1, byte_1be, 0x1be);
GUEST_OFFSET(Local_001d333c_r0_1, word_1c0, 0x1c0);
GUEST_OFFSET(Local_001d333c_r0_1, word_1c4, 0x1c4);
GUEST_OFFSET(Local_001d333c_r0_1, byte_1c8, 0x1c8);

struct __attribute__((packed)) Local_001d333c_r0_2 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
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
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
    u32 word_74;
};
GUEST_OFFSET(Local_001d333c_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_001d333c_r0_2, word_c, 0xc);
GUEST_OFFSET(Local_001d333c_r0_2, word_10, 0x10);
GUEST_OFFSET(Local_001d333c_r0_2, word_14, 0x14);
GUEST_OFFSET(Local_001d333c_r0_2, word_18, 0x18);
GUEST_OFFSET(Local_001d333c_r0_2, word_1c, 0x1c);
GUEST_OFFSET(Local_001d333c_r0_2, word_20, 0x20);
GUEST_OFFSET(Local_001d333c_r0_2, word_24, 0x24);
GUEST_OFFSET(Local_001d333c_r0_2, word_28, 0x28);
GUEST_OFFSET(Local_001d333c_r0_2, word_2c, 0x2c);
GUEST_OFFSET(Local_001d333c_r0_2, word_30, 0x30);
GUEST_OFFSET(Local_001d333c_r0_2, word_34, 0x34);
GUEST_OFFSET(Local_001d333c_r0_2, word_38, 0x38);
GUEST_OFFSET(Local_001d333c_r0_2, word_3c, 0x3c);
GUEST_OFFSET(Local_001d333c_r0_2, word_40, 0x40);
GUEST_OFFSET(Local_001d333c_r0_2, word_44, 0x44);
GUEST_OFFSET(Local_001d333c_r0_2, word_48, 0x48);
GUEST_OFFSET(Local_001d333c_r0_2, word_4c, 0x4c);
GUEST_OFFSET(Local_001d333c_r0_2, word_50, 0x50);
GUEST_OFFSET(Local_001d333c_r0_2, word_54, 0x54);
GUEST_OFFSET(Local_001d333c_r0_2, word_58, 0x58);
GUEST_OFFSET(Local_001d333c_r0_2, word_5c, 0x5c);
GUEST_OFFSET(Local_001d333c_r0_2, word_60, 0x60);
GUEST_OFFSET(Local_001d333c_r0_2, word_64, 0x64);
GUEST_OFFSET(Local_001d333c_r0_2, word_68, 0x68);
GUEST_OFFSET(Local_001d333c_r0_2, word_6c, 0x6c);
GUEST_OFFSET(Local_001d333c_r0_2, word_70, 0x70);
GUEST_OFFSET(Local_001d333c_r0_2, word_74, 0x74);

struct __attribute__((packed)) Local_001d333c_r0_5 {
    u8 unknown_0[0x1c8];  // (not used here)
    u8 byte_1c8;
    u8 unknown_1c9[0x3];  // (not used here)
    u32 word_1cc;
    u8 unknown_1d0[0x68];  // (not used here)
    float float_238;
    float float_23c;
    float float_240;
    float float_244;
    float float_248;
    float float_24c;
    float float_250;
    float float_254;
    float float_258;
    u32 word_25c;
    u32 word_260;
    u32 word_264;
    u32 word_268;
    u32 word_26c;
};
GUEST_OFFSET(Local_001d333c_r0_5, byte_1c8, 0x1c8);
GUEST_OFFSET(Local_001d333c_r0_5, word_1cc, 0x1cc);
GUEST_OFFSET(Local_001d333c_r0_5, float_238, 0x238);
GUEST_OFFSET(Local_001d333c_r0_5, float_23c, 0x23c);
GUEST_OFFSET(Local_001d333c_r0_5, float_240, 0x240);
GUEST_OFFSET(Local_001d333c_r0_5, float_244, 0x244);
GUEST_OFFSET(Local_001d333c_r0_5, float_248, 0x248);
GUEST_OFFSET(Local_001d333c_r0_5, float_24c, 0x24c);
GUEST_OFFSET(Local_001d333c_r0_5, float_250, 0x250);
GUEST_OFFSET(Local_001d333c_r0_5, float_254, 0x254);
GUEST_OFFSET(Local_001d333c_r0_5, float_258, 0x258);
GUEST_OFFSET(Local_001d333c_r0_5, word_25c, 0x25c);
GUEST_OFFSET(Local_001d333c_r0_5, word_260, 0x260);
GUEST_OFFSET(Local_001d333c_r0_5, word_264, 0x264);
GUEST_OFFSET(Local_001d333c_r0_5, word_268, 0x268);
GUEST_OFFSET(Local_001d333c_r0_5, word_26c, 0x26c);

inline constexpr u32 vtable_PlayerModel = 0x008ebc68u;
inline constexpr guest::Function<0x001ac854, u32(u32, u32, u32, u32)> HumanModel__HumanModel;
inline constexpr guest::Function<0x0027b428, u32(u32, u32)> ItemRowWithFlag__construct;
inline constexpr guest::Function<0x0032a470, u32(u32)> construct_default_typed_entry_0032a470;

u32 PlayerModel__PlayerModel(u32 player_model, u32 r1_unused, u32 r2, float S0) {
    gptr<Local_001d333c_r0_1> r0_1 = gptr<Local_001d333c_r0_1>(HumanModel__HumanModel(player_model, 0u, r2, guest::cpu()->r[3]));
    r0_1->vtable = vtable_PlayerModel;
    gptr<Local_001d333c_r0_2> r0_2 = gptr<Local_001d333c_r0_2>(r0_1.addr() + 0x144u);
    u32 r1_1 = ~0u;
    r0_2->word_0 = 0;
    gptr<Local_001d333c_ea_1> ea_1 = gptr<Local_001d333c_ea_1>(r0_2.addr() + 4u);
    ea_1->word_0 = r1_1;
    ea_1->word_4 = 0;
    r0_2->word_c = r1_1;
    r0_2->word_10 = 0;
    r0_2->word_14 = r1_1;
    r0_2->word_18 = 0;
    r0_2->word_1c = r1_1;
    r0_2->word_20 = 0;
    r0_2->word_24 = r1_1;
    r0_2->word_28 = 0;
    r0_2->word_2c = r1_1;
    r0_2->word_30 = 0;
    r0_2->word_34 = r1_1;
    r0_2->word_38 = 0;
    r0_2->word_3c = r1_1;
    r0_2->word_40 = 0;
    r0_2->word_44 = r1_1;
    r0_2->word_48 = 0;
    r0_2->word_4c = r1_1;
    r0_2->word_50 = 0;
    r0_2->word_54 = r1_1;
    r0_2->word_58 = 0;
    r0_2->word_5c = r1_1;
    r0_2->word_60 = 0;
    r0_2->word_64 = r1_1;
    r0_2->word_68 = 0;
    r0_2->word_6c = r1_1;
    r0_2->word_70 = 0;
    r0_2->word_74 = r1_1;
    r0_1->byte_1bc = 0;
    r0_1->byte_1bd = 0;
    r0_1->byte_1be = 0;
    r0_1->word_1c0 = 0;
    r0_1->word_1c4 = 0;
    u32 r0_3 = r0_1.addr() + 0x200u;
    r0_1->byte_1c8 = 0;
    ItemRowWithFlag__construct(r0_3, r1_1);
    u32 r0_4 = r0_3 + 0x24u;
    construct_default_typed_entry_0032a470(r0_4);
    float S0_1 = 1.0f;
    gptr<Local_001d333c_r0_5> r0_5 = gptr<Local_001d333c_r0_5>(r0_4 - 0x224u);
    r0_5->float_238 = S0_1;
    r0_5->float_23c = S0_1;
    r0_5->float_240 = S0_1;
    float S0_2 = 0.0f;
    r0_5->float_244 = S0_2;
    r0_5->float_248 = S0_2;
    r0_5->float_24c = S0_2;
    r0_5->float_250 = S0_2;
    r0_5->float_254 = S0_2;
    r0_5->float_258 = S0_2;
    r0_5->word_25c = 0;
    r0_5->word_260 = 0;
    r0_5->word_264 = 0;
    r0_5->word_268 = 0;
    r0_5->word_26c = 0;
    r0_5->byte_1c8 = 0;
    r0_5->word_1cc = 0;
    guest::cpu()->s[0] = S0_2;
    return r0_5.addr();
}

}  // namespace d_001d333c
GUEST_EXPORT_FRAMED(0x001d333c, d_001d333c::PlayerModel__PlayerModel, 0x4010);  // pushes {r4, lr} first, as the original

// f_001d3468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a player model: its part handles, then the human model.
namespace d_001d3468 {

inline constexpr u32 vtable_HumanModel = 0x008eb174u;
inline constexpr u32 vtable_PlayerModel = 0x008ebc68u;
inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> HumanModel__reset_parts;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x004ef50c, u32(u32)> g3d__GroupSkeletalAnim__destructor;

u32 PlayerModel__destructor(gptr<HumanModel> human_model) {
    human_model->vtable = vtable_PlayerModel;
    u32 r0_1 = human_model.addr() + 0x144u;
    u32 r2_1 = ~0u;
    human_model->word_1b4 = 0;
    human_model->word_1b8 = r2_1;
    human_model->word_1ac = 0;
    human_model->word_1b0 = r2_1;
    human_model->word_1a4 = 0;
    human_model->word_1a8 = r2_1;
    human_model->word_19c = 0;
    human_model->word_1a0 = r2_1;
    human_model->word_194 = 0;
    human_model->word_198 = r2_1;
    human_model->word_18c = 0;
    human_model->word_190 = r2_1;
    human_model->word_184 = 0;
    human_model->word_188 = r2_1;
    human_model->word_17c = 0;
    human_model->word_180 = r2_1;
    human_model->word_174 = 0;
    human_model->word_178 = r2_1;
    human_model->word_16c = 0;
    human_model->word_170 = r2_1;
    human_model->word_164 = 0;
    human_model->word_168 = r2_1;
    human_model->word_15c = 0;
    human_model->word_160 = r2_1;
    human_model->word_154 = 0;
    human_model->word_158 = r2_1;
    human_model->word_14c = 0;
    human_model->word_150 = r2_1;
    human_model->word_144 = 0;
    human_model->word_148 = r2_1;
    human_model->vtable = vtable_HumanModel;
    HumanModel__reset_parts(r0_1 - 0x144u, vtable_HumanModel, r2_1, r0_1 + 8u);
    g3d__GroupSkeletalAnim__destructor(r0_1 - 0x78u);
    set_base_vtable_004edd84(r0_1 - 0xccu);
    return r0_1 - 0x144u;
}

}  // namespace d_001d3468
GUEST_EXPORT_FRAMED(0x001d3468, d_001d3468::PlayerModel__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_001d5348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the sound (state 5) or, when idle, ends the special sound (in scene 0x27, playing the end sound) and forgets
// it.
namespace d_001d5348 {

struct __attribute__((packed)) SoundObjWater {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u8 byte_38;
    u8 unknown_39[0x3];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(SoundObjWater, word_34, 0x34);
GUEST_OFFSET(SoundObjWater, byte_38, 0x38);
GUEST_OFFSET(SoundObjWater, word_3c, 0x3c);

inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x001d7f24, u32(u32, u32, u32)> SoundSlotArray__play;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;

u32 SoundObjWater__stop(gptr<SoundObjWater> sound_obj_water, u32 r1, u32 r2) {
    u32 r0_1 = sound_obj_water->word_34;
    if (r0_1 != 0) {
        BasicSound__stop(r0_1, r1, r2, guest::cpu()->r[3]);
        sound_obj_water->byte_38 = 5;
        return 5u;
    }
    sound_obj_water->byte_38 = 0;
    u32 r0_2 = sound_obj_water->word_3c;
    u32 r1_2 = r0_2 + 0xfeffff5fu;
    if (r1_2 == 0) {
        u32 scene_2 = current_scene_id(r0_2, r1_2, r2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if (scene_2 == 0x27u) {
            SoundSlotArray__play(*sound_system + 0xb00u, 0x100079eu, 0u);
            r1_2 = guest::cpu()->r[1];
        }
    }
    u32 r0_5 = ~0u;
    sound_obj_water->word_3c = r0_5;
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_001d5348
GUEST_EXPORT_FRAMED(0x001d5348, d_001d5348::SoundObjWater__stop, 0x4010);  // pushes {r4, lr} first, as the original

// f_001d560c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the two sounds, gives back the event's sound data (0x100026b or 0x100026c) and resets its state.
namespace d_001d560c {

struct __attribute__((packed)) SoundObjEvent {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u32 word_d4;
    u8 byte_d8;
    u8 unknown_d9[0x3];  // (not used here)
    u32 word_dc;
    u8 byte_e0;
};
GUEST_OFFSET(SoundObjEvent, word_d0, 0xd0);
GUEST_OFFSET(SoundObjEvent, word_d4, 0xd4);
GUEST_OFFSET(SoundObjEvent, byte_d8, 0xd8);
GUEST_OFFSET(SoundObjEvent, word_dc, 0xdc);
GUEST_OFFSET(SoundObjEvent, byte_e0, 0xe0);

inline constexpr u32 sound_data_load_mgr_instance_address = 0x0094cd20u;
inline guest::global<u32, 0x0094cd20> sound_data_load_mgr_instance;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32)> SoundBank__slot_ready;
inline constexpr guest::Function<0x0071d2d4, u32(u32, u32, u32, u32)> sound_archive_call_1332d4;

u32 SoundObjEvent__stop(gptr<SoundObjEvent> sound_obj_event, u32 r1_unused, u32 r2) {
    u32 r0_1 = sound_obj_event->word_d0;
    if (r0_1 != 0) {
        BasicSound__stop(r0_1, 0u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
    }
    u32 r0_2 = sound_obj_event->word_d4;
    if (r0_2 != 0) {
        BasicSound__stop(r0_2, 0u, r2, guest::cpu()->r[3]);
    }
    sound_obj_event->byte_e0 = 4;
    u32 r5_1 = *sound_data_load_mgr_instance;
    if (sound_archive_call_1332d4(r5_1, 0x100026bu, ~0u, guest::cpu()->r[3]) == 0) {
        if (sound_archive_call_1332d4(r5_1, 0x100026cu, ~0u, guest::cpu()->r[3]) == 0) {
            sound_obj_event->byte_d8 = 4;
            sound_obj_event->word_dc = 0;
            return 0u;
        }
    }
    SoundBank__slot_ready(*sound_data_load_mgr_instance, 0u, 1u);
    sound_obj_event->byte_d8 = 4;
    sound_obj_event->word_dc = 0;
    return 0u;
}

}  // namespace d_001d560c
GUEST_EXPORT_FRAMED(0x001d560c, d_001d560c::SoundObjEvent__stop, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001d56a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the event's start sound (0x100009b), with its parameter when asked and set.
namespace d_001d56a0 {

struct __attribute__((packed)) Local_001d56a0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001d56a0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_001d56a0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_001d56a0_ea_8 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001d56a0_ea_8, byte_0, 0x0);
GUEST_OFFSET(Local_001d56a0_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_001d56a0_ea_8, word_8, 0x8);

struct __attribute__((packed)) Local_001d56a0_r1_1 {
    u8 unknown_0[0x98];  // (not used here)
    u32 word_98;
    u8 byte_9c;
    u8 unknown_9d[0x7];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(Local_001d56a0_r1_1, word_98, 0x98);
GUEST_OFFSET(Local_001d56a0_r1_1, byte_9c, 0x9c);
GUEST_OFFSET(Local_001d56a0_r1_1, word_a4, 0xa4);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32)> SoundSystem__play_handle;
inline constexpr guest::Function<0x006b1da4, u32(u32, u32, u32, u32)> SoundSystem__play_handle_b;
inline constexpr guest::Function<0x00766e64, u32(u32, u32)> SoundSystem__sound_value;

struct __attribute__((packed)) SoundObjEventPlayStartFrame {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u16 half_48;
    u16 half_4a;
    u8 unknown_4c[0x60];  // (not read or written by name)
};
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_0, 0x0);
GUEST_OFFSET(SoundObjEventPlayStartFrame, byte_4, 0x4);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_8, 0x8);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_18, 0x18);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_24, 0x24);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_28, 0x28);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_2c, 0x2c);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_30, 0x30);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_34, 0x34);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_38, 0x38);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_3c, 0x3c);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_40, 0x40);
GUEST_OFFSET(SoundObjEventPlayStartFrame, word_44, 0x44);
GUEST_OFFSET(SoundObjEventPlayStartFrame, half_48, 0x48);
GUEST_OFFSET(SoundObjEventPlayStartFrame, half_4a, 0x4a);
GUEST_SIZE(SoundObjEventPlayStartFrame, 0xac);

void SoundObjEvent__play_start(u32 r0, u32 r1, float S0) {
    guest::StackFrameOf<SoundObjEventPlayStartFrame> frame;  // the original's stack frame
    u32 r7_1 = ~0u;
    frame->word_0 = 0;
    frame->word_18 = 0;
    gptr<Local_001d56a0_ea_3> ea_3 = gptr<Local_001d56a0_ea_3>(frame.at(0x1c).addr());
    ea_3->word_0 = 0;
    ea_3->word_4 = r7_1;
    frame->word_34 = 0;
    frame->word_24 = r7_1;
    frame->word_28 = r7_1;
    frame->word_30 = 0;
    frame->word_2c = r7_1;
    frame->half_48 = 0;
    frame->word_38 = 0;
    frame->word_3c = 0;
    frame->word_40 = 0;
    frame->word_44 = 0;
    frame->half_4a = 0;
    u32 r0_3 = for_each_element(frame.at(0x4c).addr(), 0x4bfb50u, 0xdu, 4u) - 4u;
    float S0_1 = 1.0f;
    *gptr<u32>(r0_3 + 0x38u) = std::bit_cast<u32>(S0_1);
    *gptr<u8>(r0_3 + 0x3cu) = 0x7f;
    *gptr<u8>(r0_3 + 0x3fu) = 0;
    *gptr<u32>(r0_3 + 0x40u) = r7_1;
    gptr<Local_001d56a0_r1_1> r1_1 = gptr<Local_001d56a0_r1_1>(r0_3 - 0x48u);
    *gptr<u16>(r0_3 + 0x3du) = 0;
    gptr<Local_001d56a0_ea_8> ea_8 = gptr<Local_001d56a0_ea_8>(r0_3 + 0x44u);
    ea_8->byte_0 = 0;
    ea_8->word_4 = 0;
    ea_8->word_8 = 0;
    r1_1->word_98 = 0;
    r1_1->byte_9c = 0;
    r1_1->word_a4 = 0;
    if (r1 != 0) {
        u32 r0_4 = *sound_system;
        guest::cpu()->s[0] = S0_1;
        u32 r0_5 = SoundSystem__sound_value(r0_4, 0x100009bu);
        S0_1 = guest::cpu()->s[0];
        if (r0_5 != 0) {
            frame->word_0 = 1;
            frame->byte_4 = 2;
            frame->word_8 = r0_5;
            u32 r0_6 = *sound_system;
            SoundSystem__play_handle_b(r0_6, r0 + 0xd0u, 0x100009bu, frame.at(0).addr());
            return;
        }
    }
    u32 r0_7 = *sound_system;
    guest::cpu()->s[0] = S0_1;
    SoundSystem__play_handle(r0_7, r0 + 0xd0u, 0x100009bu);
}

}  // namespace d_001d56a0
GUEST_EXPORT_FRAMED(0x001d56a0, d_001d56a0::SoundObjEvent__play_start, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001d71c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the sound (state 5), or pauses it (state 2) when it was playing.
namespace d_001d71c8 {

struct __attribute__((packed)) SoundObj {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
    u8 unknown_44[0x4];  // (not used here)
    u8 byte_48;
};
GUEST_OFFSET(SoundObj, word_40, 0x40);
GUEST_OFFSET(SoundObj, byte_48, 0x48);

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;

u32 SoundObj__stop_or_pause(gptr<SoundObj> sound_obj) {
    u32 r0_1 = sound_obj->word_40;
    if (r0_1 != 0) {
        BasicSound__stop(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        sound_obj->byte_48 = 5;
        return 5u;
    }
    u32 r0_2 = sound_obj->byte_48;
    if (r0_2 != 0) {
        sound_obj->byte_48 = 2;
        return 2u;
    }
    return r0_2;
}

}  // namespace d_001d71c8
GUEST_EXPORT_FRAMED(0x001d71c8, d_001d71c8::SoundObj__stop_or_pause, 0x4010);  // pushes {r4, lr} first, as the original

// f_001d7b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forgets the object when it is the remembered one (+0x98).
namespace d_001d7b90 {

struct __attribute__((packed)) SoundSystem {
    u8 unknown_0[0x98];  // (not used here)
    u32 sound_obj_base;
};
GUEST_OFFSET(SoundSystem, sound_obj_base, 0x98);


void SoundSystem__forget_object(gptr<SoundSystem> sound_system, u32 sound_obj_base) {
    if (sound_system->sound_obj_base == sound_obj_base) {
        sound_obj_base = 0u;
        sound_system->sound_obj_base = sound_obj_base;
    }
    guest::cpu()->r[1] = sound_obj_base;
}

}  // namespace d_001d7b90
GUEST_EXPORT(0x001d7b90, d_001d7b90::SoundSystem__forget_object);

// f_001d7ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to the function at 0x1d560c.
namespace d_001d7ba4 {

inline constexpr guest::Function<0x001d560c, u32(u32, u32, u32, u32)> SoundObjEvent__stop;

void veneer_1d560c() {
    SoundObjEvent__stop(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001d7ba4
GUEST_EXPORT(0x001d7ba4, d_001d7ba4::veneer_1d560c);

// f_001d7ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In scene 0x66, plays sound 0x100078d on the handle.
namespace d_001d7ee0 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32)> SoundSystem__play_handle;

void SoundObj__play_scene_66(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 scene_2 = current_scene_id(r0, r1, r2, guest::cpu()->r[3]);
    if (scene_2 != 0x66u) {
        return;
    }
    u32 r0_2 = *sound_system;
    frame.release();
    SoundSystem__play_handle(r0_2, r0 + 0x28u, 0x100078du);
    return;
}

}  // namespace d_001d7ee0
GUEST_EXPORT(0x001d7ee0, d_001d7ee0::SoundObj__play_scene_66);

// f_001d7f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops slot `index` (+0x2c) and plays the sound on it.
namespace d_001d7f24 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32)> SoundSystem__play_handle;

u32 SoundSlotArray__play(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = r0 + (r2 << 2);
    u32 r0_1 = *gptr<u32>(r4_1 + 0x2cu);
    if (r0_1 != 0) {
        BasicSound__stop(r0_1, 0u, r2, guest::cpu()->r[3]);
    }
    u32 r0_2 = *sound_system;
    frame.release();
    return SoundSystem__play_handle(r0_2, r4_1 + 0x2cu, r1);
}

}  // namespace d_001d7f24
GUEST_EXPORT(0x001d7f24, d_001d7f24::SoundSlotArray__play);

// f_001d8760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays or stops the scene's sounds by its kind (0x65 and 0x67).
namespace d_001d8760 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00136cc8, u32(u32)> detach_from_parent;
inline constexpr guest::Function<0x00136e58, u32(u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x005b4120, u32(u32)> kind_state_byte_3;
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32, u32)> SoundSystem__play_handle;

struct __attribute__((packed)) SoundObjUpdateForSceneFrame {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(SoundObjUpdateForSceneFrame, word_0, 0x0);
GUEST_SIZE(SoundObjUpdateForSceneFrame, 0x18);

void SoundObj__update_for_scene(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SoundObjUpdateForSceneFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 scene_2 = current_scene_id(r0, r1, r2, r3);
    u32 r0_2 = kind_state_byte_3(scene_2);
    if (scene_2 != 0x65u) {
        if (scene_2 == 0x67u) {
            u32 scene_flagged_3 = scene_has_flags(0x80000u, r0_2);
            if (scene_flagged_3 == 0) {
                u32 scene_flagged_4 = scene_has_flags(0x200000u, r0_2);
                if (scene_flagged_4 == 0) {
                    goto L_1d8800;
                }
            }
            frame->word_0 = 0;
            SoundSystem__play_handle(*sound_system, frame.at(0).addr(), 0x10004afu, guest::cpu()->r[3]);
            detach_from_parent(frame.at(0).addr());
        }
    } else {
        u32 r0_7 = *gptr<u32>(r0 + 0x28u);
        if (r0_7 != 0) {
            BasicSound__stop(r0_7, 0x14u);
        }
    }
L_1d8800:;
    if (r0_2 == 0x65u) {
        u32 r0_8 = *sound_system;
        frame.release();
        SoundSystem__play_handle(r0_8, r0 + 0x28u, 0x100078du, guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_001d8760
GUEST_EXPORT(0x001d8760, d_001d8760::SoundObj__update_for_scene);

// f_001d9578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the microphone sampling with the rate of the mode; true when it started (state 2).
namespace d_001d9578 {

struct __attribute__((packed)) SoundMicMgr {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u32 word_20;
    u8 unknown_24[0x1];  // (not used here)
    u8 byte_25;
};
GUEST_OFFSET(SoundMicMgr, byte_14, 0x14);
GUEST_OFFSET(SoundMicMgr, word_18, 0x18);
GUEST_OFFSET(SoundMicMgr, word_20, 0x20);
GUEST_OFFSET(SoundMicMgr, byte_25, 0x25);

inline constexpr guest::Function<0x001404f0, u32(u32, u32, u32, u32)> ipc_command_a_flag;
inline constexpr guest::Function<0x0035427c, u32(u32, u32, u32, u32)> Dsp__load_component;

struct __attribute__((packed)) SoundMicMgrStartFrame {
    u32 word_0;
};
GUEST_OFFSET(SoundMicMgrStartFrame, word_0, 0x0);
GUEST_SIZE(SoundMicMgrStartFrame, 0x4);

u32 SoundMicMgr__start(gptr<SoundMicMgr> sound_mic_mgr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SoundMicMgrStartFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5_1 = r1;
    u32 r6_1 = 0u;
    u32 r0_1 = sound_mic_mgr->byte_14;
    if (r0_1 != 2u && r0_1 != 0) {
        u32 r0_2 = ipc_command_a_flag(1u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (s32(r0_2) >= 0) {
            sound_mic_mgr->word_20 = 0x983000;
            frame->word_0 = 1;
            u32 r3_1 = sound_mic_mgr->word_18;
            u32 r1_1 = *gptr<u8>(r5_1 + 0x83b468u);
            u32 r0_3 = Dsp__load_component(3u, r1_1, 0u, r3_1);
            r1 = guest::cpu()->r[1];
            if (s32(r0_3) >= 0) {
                u32 r1_2 = *gptr<u8>(r5_1 + 0x83b468u);
                sound_mic_mgr->byte_14 = 2;
                sound_mic_mgr->byte_25 = u8(r1_2);
                r1 = sound_mic_mgr.addr() + 0x16u;
                if (r5_1 < 2u) {
                    r1 += r5_1;
                }
                r6_1 = 1u;
                *gptr<u8>(r1) = u8(r6_1);
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r6_1;
}

}  // namespace d_001d9578
GUEST_EXPORT_FRAMED(0x001d9578, d_001d9578::SoundMicMgr__start, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_001d9a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the microphone sampling and its flags.
namespace d_001d9a08 {

struct __attribute__((packed)) SoundMicMgr {
    u8 unknown_0[0x17];  // (not used here)
    u8 byte_17;
    u8 unknown_18[0x624];  // (not used here)
    u8 byte_63c;
};
GUEST_OFFSET(SoundMicMgr, byte_17, 0x17);
GUEST_OFFSET(SoundMicMgr, byte_63c, 0x63c);

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> MicInput__stop;
inline constexpr guest::Function<0x00140530, u32(u32, u32, u32, u32)> ipc_command_5;
inline constexpr guest::Function<0x0032c654, u32(u32, u32, u32, u32)> clear_two_flags;

void SoundMicMgr__update(gptr<SoundMicMgr> sound_mic_mgr, u32 r1, u32 r2) {
    u32 i = sound_mic_mgr.addr();
    u32 r1_2 = 0;
    u32 r1_4 = 0;
    u32 r4 = i;
    if (sound_mic_mgr->byte_63c != 0) {
        clear_two_flags(r4 + 0x63cu, r1, r2, guest::cpu()->r[3]);
    }
    u32 r5 = 0u;
    r2 = r5;
    i = r5;
    sound_mic_mgr->byte_17 = u8(r5);
    do {
        u32 r1_1 = r4 + 0x16u;
        if (i < 2u) {
            r1_1 += i;
        }
        i += 1u;
        r1_2 = *gptr<u8>(r1_1);
        if (r1_2 != 0) {
            r2 = 1u;
        }
        guest::preempt();
    } while (s32(i) < 2);
    u32 r6 = 1u;
    if (r2 == 0) {
        u32 r0_2 = *gptr<u8>(r4 + 0x14u);
        if (r0_2 == 2u) {
            u32 r0_3 = ipc_command_5(r0_2, r1_2, r2, guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (s32(r0_3) >= 0) {
                *gptr<u32>(r4 + 0x2cu) = r5;
                *gptr<u8>(r4 + 0x14u) = u8(r6);
            }
        }
    }
    if (*gptr<u8>(r4 + 0x34u) >= 2u) {
        MicInput__stop(r4 + 0x34u, r1_2, r2, guest::cpu()->r[3]);
    }
    r2 = 0u;
    i = r2;
    *gptr<u8>(r4 + 0x16u) = u8(r5);
    do {
        u32 r1_3 = r4 + 0x16u;
        if (i < 2u) {
            r1_3 += i;
        }
        i += 1u;
        r1_4 = *gptr<u8>(r1_3);
        if (r1_4 != 0) {
            r2 = 1u;
        }
        guest::preempt();
    } while (s32(i) < 2);
    if (r2 == 0) {
        u32 r0_5 = *gptr<u8>(r4 + 0x14u);
        if (r0_5 == 2u) {
            if (s32(ipc_command_5(r0_5, r1_4, r2, guest::cpu()->r[3])) >= 0) {
                *gptr<u32>(r4 + 0x2cu) = r5;
                *gptr<u8>(r4 + 0x14u) = u8(r6);
            }
        }
    }
}

}  // namespace d_001d9a08
GUEST_EXPORT_FRAMED(0x001d9a08, d_001d9a08::SoundMicMgr__update, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001d9c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts an NPC's sound object (unless started): takes its owner and starts the base.
namespace d_001d9c9c {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32)> SoundObjBase__virtual_2;
inline constexpr guest::Function<0x002a5fa8, u32(u32, u32, u32, u32)> set_owner_once;

u32 SoundObjNpc__start(gptr<SoundObjNpc> sound_obj_npc, u32 r1, u32 r2) {
    u32 r0_1 = sound_obj_npc->started;
    if (r0_1 == 0) {
        set_owner_once(sound_obj_npc.addr() + 0x74u, sound_obj_npc.addr(), r2, guest::cpu()->r[3]);
        r0_1 = SoundObjBase__virtual_2(sound_obj_npc.addr(), r1, r2);
        r1 = guest::cpu()->r[1];
        sound_obj_npc->word_90 = sound_obj_npc.addr();
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_001d9c9c
GUEST_EXPORT_FRAMED(0x001d9c9c, d_001d9c9c::SoundObjNpc__start, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001d9cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the mode (+0x80) when it is at most 2.
namespace d_001d9cdc {

struct __attribute__((packed)) SetMode80Below3Arg0 {
    u8 unknown_0[0x80];  // (not used here)
    u32 word_80;
};
GUEST_OFFSET(SetMode80Below3Arg0, word_80, 0x80);


void set_mode_80_below_3(gptr<SetMode80Below3Arg0> arg0, u32 r1) {
    if (r1 <= 2u) {
        arg0->word_80 = r1;
    }
}

}  // namespace d_001d9cdc
GUEST_EXPORT(0x001d9cdc, d_001d9cdc::set_mode_80_below_3);

// f_001d9fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops an NPC's sound object (when started): drops its owner, detaches its two sounds and stops the base.
namespace d_001d9fb0 {

inline constexpr guest::Function<0x00136cc8, u32(u32)> detach_from_parent;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> SoundObjBase__stop;
inline constexpr guest::Function<0x002a6594, u32(u32, u32, u32, u32)> clear_owner;

u32 SoundObjNpc__stop(gptr<SoundObjNpc> sound_obj_npc) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = sound_obj_npc.addr();
    u32 cf_1 = 0;
    u32 r4_1 = r0;
    r0 = sound_obj_npc->started;
    if (r0 != 0) {
        clear_owner(r4_1 + 0x74u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 sound_obj_base = r4_1;
        u32 r5 = r4_1 + 0x44u;
        sound_obj_npc->word_90 = 0;
        u32 r4 = 0u;
        r0 = r5;
        do {
            r0 += (r4 << 2);
            do {
                detach_from_parent(r0);
                r4 += 1u;
                cf_1 = r4 >= 2u;
                if (s32(r4) >= 2) {
                    frame.release();
                    return SoundObjBase__stop(sound_obj_base, guest::cpu()->r[1]);
                }
                r0 = r5;
                guest::preempt();
            } while (cf_1);
            guest::preempt();
        } while (1);
    }
    return r0;
}

}  // namespace d_001d9fb0
GUEST_EXPORT(0x001d9fb0, d_001d9fb0::SoundObjNpc__stop);

// f_001da01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an NPC's sound object: a sound object base with two sound slots, a fade and a town tune player.
namespace d_001da01c {

struct __attribute__((packed)) Local_001da01c_r0_7 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xc8];  // (not used here)
    u8 byte_d0;
    u8 unknown_d1[0x3];  // (not used here)
    float float_d4;
    float float_d8;
    float float_dc;
    u16 half_e0;
};
GUEST_OFFSET(Local_001da01c_r0_7, word_4, 0x4);
GUEST_OFFSET(Local_001da01c_r0_7, byte_d0, 0xd0);
GUEST_OFFSET(Local_001da01c_r0_7, float_d4, 0xd4);
GUEST_OFFSET(Local_001da01c_r0_7, float_d8, 0xd8);
GUEST_OFFSET(Local_001da01c_r0_7, float_dc, 0xdc);
GUEST_OFFSET(Local_001da01c_r0_7, half_e0, 0xe0);

inline constexpr u32 vtable_SoundObjNpc = 0x008ebd9cu;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> SoundObjBase__SoundObjBase;
inline constexpr guest::Function<0x002a65d0, u32(u32)> FadeState__construct;
inline constexpr guest::Function<0x002e8444, u32(u32)> TownTunePlayer__TownTunePlayer;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundObjNpc__construct(gptr<SoundObj_2_> sound_obj, u32 r1, u32 r2, u32 r3, float S0) {
    SoundObjBase__SoundObjBase(sound_obj.addr(), r1, r2, r3);
    sound_obj->vtable = vtable_SoundObj_2_;
    u32 r0_4 = for_each_element(for_each_element(sound_obj.addr() + 0x44u, 0x131800u, 4u, 2u) + 8u, 0x1287a8u, 0x14u, 2u);
    *gptr<u32>(r0_4 - 0x4cu) = vtable_SoundObjNpc;
    u32 fade_state = r0_4 + 0x28u;
    FadeState__construct(fade_state);
    u32 town_tune_player = fade_state + 0x18u;
    TownTunePlayer__TownTunePlayer(town_tune_player);
    gptr<Local_001da01c_r0_7> r0_7 = gptr<Local_001da01c_r0_7>(town_tune_player - 0x8cu);
    float S0_3 = 2000.0f;
    r0_7->byte_d0 = 0;
    r0_7->float_d4 = S0_3;
    r0_7->float_d8 = S0_3;
    r0_7->float_dc = S0_3;
    r0_7->half_e0 = u16(~0u);
    r0_7->word_4 = 1;
    return r0_7.addr();
}

}  // namespace d_001da01c
GUEST_EXPORT_FRAMED(0x001da01c, d_001da01c::SoundObjNpc__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_001db5b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a TV sound object: an external-volume sound object with a fader.
namespace d_001db5b4 {

struct __attribute__((packed)) Local_001db5b4_ea_8 {
    u32 word_0;
    u32 sound_fader_vtable;
};
GUEST_OFFSET(Local_001db5b4_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_001db5b4_ea_8, sound_fader_vtable, 0x4);

struct __attribute__((packed)) Local_001db5b4_r0_3 {
    u8 unknown_0[0xa0];  // (not used here)
    float float_a0;
    float float_a4;
    float float_a8;
    u8 unknown_ac[0x10];  // (not used here)
    float float_bc;
    float float_c0;
    float float_c4;
    u8 unknown_c8[0x8];  // (not used here)
    float float_d0;
    float float_d4;
    float float_d8;
    u32 word_dc;
    u8 byte_e0;
};
GUEST_OFFSET(Local_001db5b4_r0_3, float_a0, 0xa0);
GUEST_OFFSET(Local_001db5b4_r0_3, float_a4, 0xa4);
GUEST_OFFSET(Local_001db5b4_r0_3, float_a8, 0xa8);
GUEST_OFFSET(Local_001db5b4_r0_3, float_bc, 0xbc);
GUEST_OFFSET(Local_001db5b4_r0_3, float_c0, 0xc0);
GUEST_OFFSET(Local_001db5b4_r0_3, float_c4, 0xc4);
GUEST_OFFSET(Local_001db5b4_r0_3, float_d0, 0xd0);
GUEST_OFFSET(Local_001db5b4_r0_3, float_d4, 0xd4);
GUEST_OFFSET(Local_001db5b4_r0_3, float_d8, 0xd8);
GUEST_OFFSET(Local_001db5b4_r0_3, word_dc, 0xdc);
GUEST_OFFSET(Local_001db5b4_r0_3, byte_e0, 0xe0);

inline constexpr u32 vtable_SoundFader_rec = 0x008eb474u;
inline constexpr u32 vtable_SoundTvBase = 0x008ebddcu;
inline constexpr guest::Function<0x002d1db0, u32(u32, u32, u32, u32)> SoundObjExtVolume__construct;

u32 SoundTvBase__SoundTvBase(gptr<SoundTvBase> sound_tv_base, u32 r1_unused, u32 r2, u32 r3, float S0) {
    sound_tv_base->vtable = vtable_SoundTvBase;
    u32 r0_2 = SoundObjExtVolume__construct(sound_tv_base.addr() + 4u, vtable_SoundTvBase, r2, r3);
    gptr<Local_001db5b4_r0_3> r0_3 = gptr<Local_001db5b4_r0_3>(r0_2 - 4u);
    float S0_1 = 0.0f;
    r0_3->float_a0 = S0_1;
    r0_3->float_a4 = S0_1;
    r0_3->float_a8 = S0_1;
    u32 r2_1 = ~0u;
    *gptr<u16>(r0_3.addr() + 0xacu) = 0;
    *gptr<u32>(r0_3.addr() + 0xb0u) = r2_1;
    *gptr<u8>(r0_3.addr() + 0xb4u) = 0;
    *gptr<u8>(r0_3.addr() + 0xb5u) = 0;
    *gptr<u8>(r0_3.addr() + 0xb6u) = 6;
    *gptr<u8>(r0_3.addr() + 0xb7u) = 0;
    *gptr<u32>(r0_3.addr() + 0xb8u) = vtable_SoundFader_rec;
    r0_3->float_bc = S0_1;
    r0_3->float_c0 = S0_1;
    r0_3->float_c4 = S0_1;
    gptr<Local_001db5b4_ea_8> ea_8 = gptr<Local_001db5b4_ea_8>(r0_3.addr() + 0xc8u);
    ea_8->word_0 = r2_1;
    ea_8->sound_fader_vtable = vtable_SoundFader_rec;
    r0_3->float_d0 = S0_1;
    r0_3->float_d4 = S0_1;
    r0_3->float_d8 = S0_1;
    r0_3->word_dc = r2_1;
    r0_3->byte_e0 = 1;
    guest::cpu()->s[0] = S0_1;
    return r0_3.addr();
}

}  // namespace d_001db5b4
GUEST_EXPORT_FRAMED(0x001db5b4, d_001db5b4::SoundTvBase__SoundTvBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_001db650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a TV sound object: stops its sounds and frees its bank slot.
namespace d_001db650 {

inline constexpr u32 vtable_SoundTvBase = 0x008ebddcu;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr u32 sound_data_load_mgr_instance_address = 0x0094cd20u;
inline guest::global<u32, 0x0094cd20> sound_data_load_mgr_instance;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32, u32)> SoundBank__slot_ready;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> SoundObjBase__stop;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x0071d314, u32(u32, u32, u32, u32)> slot_of_6_is_set;

u32 SoundTvBase__destructor(gptr<SoundTvBase> sound_tv_base, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = sound_tv_base.addr();
    u32 i = 0;
    u32 r5 = 0;
    u32 cf_2 = 0;
    u32 r7 = r0;
    sound_tv_base->vtable = vtable_SoundTvBase;
    if (sound_tv_base->byte_b4 != 0) {
        if (sound_tv_base->byte_b5 != 0) {
            S0 = 0.0f;
            u32 sound_obj_base = 0u;
            sound_tv_base->float_18 = S0;
            r1 = sound_tv_base->byte_38;
            if (r1 != 0) {
                r5 = (r7 + 4u) + 0x44u;
                i = 0u;
L_1db6a8:;
                r0 = r5 + (i << 2);
L_1db6ac:;
                if (*gptr<u32>(r0) != 0) {
                    u32 r0_2 = r5;
                    if (i < 2u) {
                        r0_2 = r5 + (i << 2);
                    }
                    r1 = sound_obj_base;
                    u32 r0_3 = *gptr<u32>(r0_2);
                    if (r0_3 != 0) {
                        guest::cpu()->s[0] = S0;
                        BasicSound__stop(r0_3, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        S0 = guest::cpu()->s[0];
                    }
                }
                i += 1u;
                if (s32(i) < 2) {
                    r0 = r5;
                    if (i >= 2u) {
                        guest::preempt();
                        goto L_1db6ac;
                    }
                    guest::preempt();
                    goto L_1db6a8;
                }
            }
            sound_obj_base = r7 + 4u;
            r5 = r7 + 0x48u;
            i = 0u;
            do {
                guest::cpu()->s[0] = S0;
                detach_from_parent(i >= 2u ? r5 : r5 + (i << 2), r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                i += 1u;
                guest::preempt();
            } while (s32(i) < 2);
            guest::cpu()->s[0] = S0;
            SoundObjBase__stop(sound_obj_base, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            u32 r0_5 = *sound_data_load_mgr_instance;
            if (r0_5 != 0) {
                u32 r1_1 = *gptr<u8>(r7 + 0xb6u);
                u32 r0_6 = slot_of_6_is_set(r0_5, r1_1, r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                if (r0_6 != 0) {
                    u32 r2_1 = *gptr<u8>(r7 + 0xb6u);
                    u32 r0_7 = *sound_data_load_mgr_instance;
                    SoundBank__slot_ready(r0_7, 0u, r2_1, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    S0 = guest::cpu()->s[0];
                }
            }
            *gptr<u8>(r7 + 0xb6u) = 6;
        }
        r1 = 0u;
        *gptr<u8>(r7 + 0xb4u) = u8(r1);
    }
    i = 0u;
    u32 ea_1 = r7 + 4u;
    *gptr<u32>(ea_1) = vtable_SoundObj_2_;
    r7 = ea_1;
    r5 = r7 + 0x44u;
    do {
        u32 r0_8 = r5;
        if (i < 2u) {
            r0_8 = r5 + (i << 2);
        }
        guest::cpu()->s[0] = S0;
        detach_from_parent(r0_8, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    guest::cpu()->s[0] = S0;
    SoundObjBase__stop(r7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r5 = r7 + 0x44u;
    i = 0u;
    r0 = r5;
    do {
        r0 += (i << 2);
        do {
            guest::cpu()->s[0] = S0;
            detach_from_parent(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            i += 1u;
            cf_2 = i >= 2u;
            if (s32(i) >= 2) {
                destroy_array_elements(r5, 0x137d74u, 4u, 2u);
                return r5 - 0x48u;
            }
            r0 = r5;
            guest::preempt();
        } while (cf_2);
        guest::preempt();
    } while (1);
}

}  // namespace d_001db650
GUEST_EXPORT_FRAMED(0x001db650, d_001db650::SoundTvBase__destructor, 0x41f0);  // pushes {i, r5, sound_obj_base, r7, r8, lr} first, as the original

// f_001dc6e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Visits the structure's rectangle, placing its cells.
namespace d_001dc6e8 {

inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x00540b14, u32(u32, u32, u32)> IntArray__fill_range;
inline constexpr guest::Function<0x00540bd0, u32(u32, u32, u32, u32)> IntArray__shuffle;
inline constexpr guest::Function<0x0062d4e0, u32(u32)> default_structure_rect;
inline constexpr guest::Function<0x0062d970, u32(u32, u32, u32, u32)> Town__generate_acre;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x00810aa0, u32(u32, u32, u32, u32)> NodePool20__construct;

struct __attribute__((packed)) PlaceStructureCellsFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x12c];  // (not read or written by name)
};
GUEST_OFFSET(PlaceStructureCellsFrame, word_0, 0x0);
GUEST_OFFSET(PlaceStructureCellsFrame, word_4, 0x4);
GUEST_OFFSET(PlaceStructureCellsFrame, word_8, 0x8);
GUEST_OFFSET(PlaceStructureCellsFrame, word_c, 0xc);
GUEST_SIZE(PlaceStructureCellsFrame, 0x13c);

u32 place_structure_cells(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlaceStructureCellsFrame> frame;  // the original's stack frame
    u32 r0_12 = 0;
    u32 r10 = r1;
    u32 r9 = r2;
    u32 r11 = r3;
    u32 r0_3 = default_structure_rect(NodePool20__construct(frame.at(0).addr(), r1, r2, r3));
    make_end_grid_rect_iterator(frame.at(0x108).addr(), r0_3);
    construct_grid_rect_iterator(frame.at(0x118).addr(), r0_3);
    u32 r0_7 = key_records_differ(frame.at(0x118).addr(), frame.at(0x108).addr());
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        do {
            copy_construct_word_pair(frame.at(0x130).addr(), frame.at(0x120).addr(), r2, r3);
            u32 r2_5 = frame->word_4;
            u32 r1_4 = frame.at(0x130).addr();
            if (s32(frame->word_0) < s32(r2_5)) {
                u32 r0_9 = frame->word_c;
                if (r0_9 != 0) {
                    u32 r2_6 = *gptr<u32>(r0_9);
                    frame->word_c = r2_6;
                    r0_9 = copy_construct_word_pair(r0_9, r1_4, r2_6, guest::cpu()->r[3]);
                }
                r1_4 = frame->word_0;
                r2_5 = frame->word_4;
                if (s32(r1_4) < s32(r2_5)) {
                    r1_4 = frame->word_8;
                    r2_5 = frame->word_0;
                    *gptr<u32>(r1_4 + (r2_5 << 2)) = r0_9;
                    frame->word_0 = frame->word_0 + 1u;
                }
            }
            WrappingCursor__advance(frame.at(0x118).addr(), r1_4, r2_5);
            r0_12 = key_records_differ(frame.at(0x118).addr(), frame.at(0x108).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_12 != 0);
    }
    u32 r8 = 0u;
    IntArray__shuffle(frame.at(0).addr(), r9, r2, r3);
    u32 r0 = frame->word_0;
    if (s32(r0) > 0) {
        do {
            u32 zf_1 = r0 == 0;
            u32 cf_1 = r0 >= 0u;
            if (r0 >= 0u && r0 != 0) {
                r0 = frame->word_8;
            }
            if (cf_1 && !zf_1) {
                r0 = *gptr<u32>(r0);
            }
            if (!cf_1 || zf_1) {
                r0 = 0u;
            }
            if (Town__generate_acre(r0, r10, r9, r11) != 0) {
                r8 = 1u;
                break;
            }
            if (s32(frame->word_0) >= 1) {
                u32 r4_1 = *gptr<u32>(frame->word_8);
                *gptr<u32>(r4_1) = frame->word_c;
                frame->word_c = r4_1;
            }
            IntArray__fill_range(frame.at(0).addr(), 0u, 1u);
            r0 = frame->word_0;
            guest::preempt();
        } while (s32(r0) > 0);
    }
    return r8;
}

}  // namespace d_001dc6e8
GUEST_EXPORT_FRAMED(0x001dc6e8, d_001dc6e8::place_structure_cells, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001de39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading the structure data on the real estate heap (none: done).
namespace d_001de39c {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 real_estate_heap_address = 0x00952c54u;
inline constexpr u32 item_layout_ac3750_address = 0x00ac3750u;
inline guest::global<u32, 0x00952c54> real_estate_heap;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) LoadStrcDataFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LoadStrcDataFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadStrcDataFrame, word_4, 0x4);
GUEST_SIZE(LoadStrcDataFrame, 0xc);

u32 load_strc_data(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<LoadStrcDataFrame> frame;  // the original's stack frame
    u32 r2_1 = *real_estate_heap;
    if (r2_1 == 0) {
        return 1u;
    }
    frame->word_4 = 0x1de3e4;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    return load_split_start(item_layout_ac3750_address, frame.at(0).addr(), r2_1, 0u);
}

}  // namespace d_001de39c
GUEST_EXPORT_FRAMED(0x001de39c, d_001de39c::load_strc_data, 0x4000);  // pushes {lr} first, as the original

// f_001de400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the 4-byte entries of variant `index` of the layout table at 0xac3750 into the buffer when it fits; their
// count, or 0.
namespace d_001de400 {

inline constexpr u32 item_layout_ac3750_address = 0x00ac3750u;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

u32 read_item_layout_ac3750(u32 r0, u32 r1, u32 r2) {
    u32 res_2 = 0;
    u32 r6 = r0;
    u32 r5 = item_layout_ac3750_address;
    if (*gptr<u32>(r5 + 0xd0u) != 0) {
        u32 r3_1 = *gptr<u32>(r5 + 0xd0u);
        r0 = 0u;
        u32 r4 = *gptr<u8>(r3_1 + r2 + 2u);
        u32 ea_3 = *gptr<u32>(r5 + 0xd0u);
        u32 r7 = r4 << 2;
        u32 r8 = u32(*gptr<u16>(ea_3)) + 2u;
        if (r2 != 0) {
            u32 r3 = r3_1 + 1u;
            if ((r2 & 1u) != 0) {
                u32 ea_4 = r3 + 1u;
                r3 = ea_4;
                r0 = *gptr<u8>(ea_4);
            }
            u32 res_1 = r2 >> 1;
            r2 = res_1;
            u32 r12 = 0u;
            if (res_1 != 0) {
                do {
                    u32 r9_1 = *gptr<u8>(r3 + 1u);
                    u32 ea_6 = r3 + 2u;
                    r3 = ea_6;
                    u32 r10_1 = *gptr<u8>(ea_6);
                    res_2 = r2 - 1u;
                    r2 = res_2;
                    r0 += r9_1;
                    r12 += r10_1;
                    guest::preempt();
                } while (res_2 != 0);
            }
            r0 += r12;
        }
        if (r1 >= r4 << 2) {
            copy_bytes_at_any_alignment(r6, *gptr<u32>(r5 + 0xd0u) + (r8 + (r0 << 2)), r7);
            return r4;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_001de400
GUEST_EXPORT_FRAMED(0x001de400, d_001de400::read_item_layout_ac3750, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_001de4a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the bits of field `index` (2 bits each) given by the value plus 1.
namespace d_001de4a8 {

struct __attribute__((packed)) TwoBitFlags6 {
    u16 half_0;
};
GUEST_OFFSET(TwoBitFlags6, half_0, 0x0);


void TwoBitFlags6__clear(gptr<TwoBitFlags6> two_bit_flags6, u32 r1, u32 r2) {
    u32 r1_1 = u32(two_bit_flags6->half_0) & ~lsl_r(r2 + 1u, r1 << 1 & 0xff);
    two_bit_flags6->half_0 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001de4a8
GUEST_EXPORT(0x001de4a8, d_001de4a8::TwoBitFlags6__clear);

// f_001de4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The total of the 6 two-bit fields (3 counts 2, 1 or 2 count 1).
namespace d_001de4c0 {

struct __attribute__((packed)) TwoBitFlags6 {
    u16 half_0;
};
GUEST_OFFSET(TwoBitFlags6, half_0, 0x0);


u32 TwoBitFlags6__total(gptr<TwoBitFlags6> two_bit_flags6) {
    u32 r0 = two_bit_flags6.addr();
    u32 r3 = two_bit_flags6->half_0;
    r0 = 0u;
    u32 i = r0;
    u32 r12 = 2u;
    u32 r4 = r0;
    u32 r5 = 1u;
    do {
        u32 r2_1 = lsr_r(r3, i << 1 & 0xff) & 3u;
        i += 1u;
        r0 += (r2_1 == 3u ? r12 : r2_1 == 0 ? r4 : r5);
        guest::preempt();
    } while (s32(i) < 6);
    guest::cpu()->r[1] = i;
    return r0;
}

}  // namespace d_001de4c0
GUEST_EXPORT_FRAMED(0x001de4c0, d_001de4c0::TwoBitFlags6__total, 0x30);  // pushes {r4, r5} first, as the original

// f_001de7d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The level of field `index`: 2 for both bits, 1 for one, 0 for none.
namespace d_001de7d0 {

struct __attribute__((packed)) TwoBitFlags6 {
    u16 half_0;
};
GUEST_OFFSET(TwoBitFlags6, half_0, 0x0);


u32 TwoBitFlags6__level(gptr<TwoBitFlags6> two_bit_flags6, u32 r1) {
    u32 r1_1 = r1 << 1;
    u32 r0_1 = lsr_r(u32(two_bit_flags6->half_0), r1_1 & 0xff) & 3u;
    if (r0_1 == 3u) {
        guest::cpu()->r[1] = r1_1;
        return 2u;
    }
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001de7d0
GUEST_EXPORT(0x001de7d0, d_001de7d0::TwoBitFlags6__level);

// f_001de7f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when field `index` has the bit of the value plus 1.
namespace d_001de7f8 {

struct __attribute__((packed)) TwoBitFlags6 {
    u16 half_0;
};
GUEST_OFFSET(TwoBitFlags6, half_0, 0x0);


u32 TwoBitFlags6__has(gptr<TwoBitFlags6> two_bit_flags6, u32 r1, u32 r2) {
    u32 r0_1 = lsr_r(u32(two_bit_flags6->half_0), r1 << 1 & 0xff);
    u32 r1_1 = r2 + 1u;
    u32 r0_2 = r0_1 & 3u & r1_1;
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001de7f8
GUEST_EXPORT(0x001de7f8, d_001de7f8::TwoBitFlags6__has);

// f_001de848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the record (+0x1224) of the first of the 4 house blocks to state 0x1e.
namespace d_001de848 {

struct __attribute__((packed)) Local_001de848_r0_4 {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Local_001de848_r0_4, half_0, 0x0);
GUEST_OFFSET(Local_001de848_r0_4, byte_2, 0x2);

inline constexpr guest::Function<0x0024da38, u32(u32)> member_address_0x1224_;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x00317ee0, u32(u32, u32)> record_4648_address;

u32 reset_first_block_record(u32 r0) {
    u32 data_base = get_data_base(r0);
    gptr<Local_001de848_r0_4> r0_4 = gptr<Local_001de848_r0_4>(member_address_0x1224_(record_4648_address(data_base + 0x5d880u, 0u)));
    r0_4->half_0 = 0;
    r0_4->byte_2 = 0x1e;
    guest::cpu()->r[1] = 0x1eu;
    return r0_4.addr();
}

}  // namespace d_001de848
GUEST_EXPORT_FRAMED(0x001de848, d_001de848::reset_first_block_record, 0x4010);  // pushes {r4, lr} first, as the original

// f_001de880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the player's event once per slot (outside slot 8) when the player is flagged (bit 1 of +0x5701).
namespace d_001de880 {

inline constexpr u32 player_event_once_address = 0x0094ee34u;
inline constexpr guest::Function<0x001de664, u32(u32, u32, u32)> OptionRecord__set;
inline constexpr guest::Function<0x002fb96c, u32(u32)> player_for_slot;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;

void start_player_event_once(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (*gptr<u8>(r1 + player_event_once_address) == 0) {
        u32 slot_byte = player_slot_byte(4u, r1, r2, r3);
        if (slot_byte != 8u) {
            *gptr<u8>(r1 + player_event_once_address) = 1;
            u32 player = player_for_slot(r1 & 0xffu);
            if (player != 0) {
                if (s32(u32(*gptr<u8>(player + 0x5701u)) << 0x1e) < 0) {
                    frame.release();
                    OptionRecord__set(r0, r2, r3);
                    return;
                }
            }
        }
    }
}

}  // namespace d_001de880
GUEST_EXPORT(0x001de880, d_001de880::start_player_event_once);

// f_001de99c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the visit (kind 3) is from this town's mayor, stores it in the next of the 4 log entries with its time.
namespace d_001de99c {

struct __attribute__((packed)) VisitorLog {
    u8 unknown_0[0x218];  // (not used here)
    u8 byte_218;
    u8 byte_219;
};
GUEST_OFFSET(VisitorLog, byte_218, 0x218);
GUEST_OFFSET(VisitorLog, byte_219, 0x219);

struct __attribute__((packed)) VisitorLogRecordVisitArg1 {
    u32 word_0;
    u8 unknown_4[0x32];  // (not used here)
    u16 half_36;
    u8 unknown_38[0x12];  // (not used here)
    u8 byte_4a;
};
GUEST_OFFSET(VisitorLogRecordVisitArg1, word_0, 0x0);
GUEST_OFFSET(VisitorLogRecordVisitArg1, half_36, 0x36);
GUEST_OFFSET(VisitorLogRecordVisitArg1, byte_4a, 0x4a);

struct __attribute__((packed)) Local_001de99c_r0_3 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_001de99c_r0_3, half_0, 0x0);
GUEST_OFFSET(Local_001de99c_r0_3, byte_14, 0x14);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> memory_compare_100d2c;
inline constexpr guest::Function<0x0020d848, u32(u32, u32, u32, u32)> store_half_and_bytes;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x00728af8, u32(u32)> NexDateTime__day;
inline constexpr guest::Function<0x00728c48, u32(u32)> NexDateTime__year;
inline constexpr guest::Function<0x00728ca0, u32(u32)> NexDateTime__month;

void VisitorLog__record_visit(gptr<VisitorLog> visitor_log, gptr<VisitorLogRecordVisitArg1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r5_1 = r1;
    u32 r0_1 = arg1->word_0;
    if (r0_1 == 3u) {
        u32 save_data = get_save_data(r0_1, r1, r2, r3);
        gptr<Local_001de99c_r0_3> r0_3 = gptr<Local_001de99c_r0_3>(save_data + 0x621b8u);
        r1 = r0_3->half_0;
        if (arg1->half_36 == r1) {
            r1 = arg1->byte_4a;
            if (r1 == r0_3->byte_14) {
                u32 r0_5 = memory_compare_100d2c(r5_1 + 0x38u, r0_3.addr() + 2u, 0x12u, r5_1 + 0x36u);
                r1 = guest::cpu()->r[1];
                if (r0_5 == 0) {
                    u32 r0_6 = visitor_log->byte_218;
                    copy_aligned_bytes(visitor_log.addr() + (r0_6 * 5u + (r0_6 << 3) << 3), r5_1, 0x64u);
                    u32 day_2 = NexDateTime__day(r2);
                    u32 month_2 = NexDateTime__month(r2);
                    u32 year_2 = NexDateTime__year(r2);
                    u32 r0_11 = visitor_log->byte_218;
                    store_half_and_bytes(visitor_log.addr() + (r0_11 * 5u + (r0_11 << 3) << 3) + 0x64u, uxth(year_2), month_2 & 0xffu, day_2 & 0xffu);
                    u32 r0_13 = visitor_log->byte_218;
                    r1 = u32(visitor_log->byte_219) & ~lsl_r(1u, r0_13 & 0xff);
                    u32 r0_14 = r0_13 + 1u & 0xffu;
                    visitor_log->byte_219 = u8(r1);
                    visitor_log->byte_218 = u8(r0_14);
                    if (r0_14 >= 4u) {
                        visitor_log->byte_218 = 0;
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001de99c
GUEST_EXPORT_FRAMED(0x001de99c, d_001de99c::VisitorLog__record_visit, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001dec8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the log's trailing words and bytes.
namespace d_001dec8c {

struct __attribute__((packed)) VisitorLog {
    u8 unknown_0[0x208];  // (not used here)
    u32 word_208;
    u32 word_20c;
    u8 byte_210;
    u8 byte_211;
    u8 byte_212;
    u8 byte_213;
};
GUEST_OFFSET(VisitorLog, word_208, 0x208);
GUEST_OFFSET(VisitorLog, word_20c, 0x20c);
GUEST_OFFSET(VisitorLog, byte_210, 0x210);
GUEST_OFFSET(VisitorLog, byte_211, 0x211);
GUEST_OFFSET(VisitorLog, byte_212, 0x212);
GUEST_OFFSET(VisitorLog, byte_213, 0x213);


void VisitorLog__clear_tail(gptr<VisitorLog> visitor_log) {
    visitor_log->word_208 = 0;
    visitor_log->word_20c = 0;
    visitor_log->byte_210 = 0;
    visitor_log->byte_211 = 0;
    visitor_log->byte_212 = 0;
    visitor_log->byte_213 = 0;
}

}  // namespace d_001dec8c
GUEST_EXPORT(0x001dec8c, d_001dec8c::VisitorLog__clear_tail);

// f_001decb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the log's current visit record.
namespace d_001decb0 {

struct __attribute__((packed)) VisitorLog {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
    u8 unknown_1a4[0x2e];  // (not used here)
    u16 half_1d2;
    u8 byte_1d4;
    u8 byte_1d5;
};
GUEST_OFFSET(VisitorLog, word_1a0, 0x1a0);
GUEST_OFFSET(VisitorLog, half_1d2, 0x1d2);
GUEST_OFFSET(VisitorLog, byte_1d4, 0x1d4);
GUEST_OFFSET(VisitorLog, byte_1d5, 0x1d5);

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;

u32 VisitorLog__clear_current(gptr<VisitorLog> visitor_log, u32 r1, u32 r2, u32 r3) {
    u32 r0 = visitor_log.addr();
    u32 r5 = r0;
    u32 r4 = r0 + 0x1a0u;
    u32 r6 = 0u;
    visitor_log->word_1a0 = r6;
    clear_identity_with_flags((r0 + 0x1a0u) + 4u, r1, r2, r3);
    visitor_log->half_1d2 = u16(r6);
    visitor_log->byte_1d4 = u8(r6);
    visitor_log->byte_1d5 = u8(r6);
    PlayerRef__clear(r4 + 0x36u);
    r2 = 0xffffu;
    r1 = 0u;
    r0 = r1;
    do {
        u32 r1_2 = r1 + 1u;
        r0 += 2u;
        *gptr<u16>((r4 + (r1 << 1)) + 0x4cu) = u16(r2);
        r1 = r1_2 + 1u;
        *gptr<u16>((r4 + (r1_2 << 1)) + 0x4cu) = u16(r2);
        guest::preempt();
    } while (s32(r0) < 0xa);
    u32 r0_3 = ~0u;
    *gptr<u32>(r4 + 0x60u) = r0_3;
    *gptr<u32>(r5 + 0x204u) = r6;
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_001decb0
GUEST_EXPORT_FRAMED(0x001decb0, d_001decb0::VisitorLog__clear_current, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001ded24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 4 log entries (0x68 bytes each) and the log's position.
namespace d_001ded24 {

struct __attribute__((packed)) Local_001ded24_ea_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_001ded24_ea_2, half_0, 0x0);
GUEST_OFFSET(Local_001ded24_ea_2, byte_2, 0x2);
GUEST_OFFSET(Local_001ded24_ea_2, byte_3, 0x3);

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;

void VisitorLog__clear(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 i = 0u;
    u32 r6 = r0;
    u32 r8 = i;
    u32 r7 = 0xffffu;
    u32 r9 = ~0u;
    do {
        u32 r4 = r6 + (i * 5u + (i << 3) << 3);
        *gptr<u32>(r4) = r8;
        clear_identity_with_flags(r4 + 4u, r1, r2, r3);
        *gptr<u16>(r4 + 0x32u) = u16(r8);
        *gptr<u8>(r4 + 0x34u) = u8(r8);
        *gptr<u8>(r4 + 0x35u) = u8(r8);
        PlayerRef__clear(r4 + 0x36u);
        r1 = 0u;
        r0 = r1;
        do {
            r3 = r4 + (r1 << 1);
            u32 r1_2 = r1 + 1u;
            r0 += 2u;
            r2 = r4 + (r1_2 << 1);
            *gptr<u16>(r3 + 0x4cu) = u16(r7);
            r1 = r1_2 + 1u;
            *gptr<u16>(r2 + 0x4cu) = u16(r7);
            guest::preempt();
        } while (s32(r0) < 0xa);
        *gptr<u32>(r4 + 0x60u) = r9;
        gptr<Local_001ded24_ea_2> ea_2 = gptr<Local_001ded24_ea_2>(r4 + 0x64u);
        ea_2->half_0 = u16(r8);
        i += 1u;
        ea_2->byte_2 = u8(r8);
        ea_2->byte_3 = u8(r8);
        guest::preempt();
    } while (i < 4u);
    *gptr<u8>(r6 + 0x218u) = u8(r8);
    *gptr<u8>(r6 + 0x219u) = u8(r8);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001ded24
GUEST_EXPORT_FRAMED(0x001ded24, d_001ded24::VisitorLog__clear, 0x47f0);  // pushes {r4, i, r6, r7, r8, r9, r10, lr} first, as the original

// f_001dedc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the log's entries.
namespace d_001dedc0 {

struct __attribute__((packed)) Local_001dedc0_ea_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_001dedc0_ea_2, half_0, 0x0);
GUEST_OFFSET(Local_001dedc0_ea_2, byte_2, 0x2);
GUEST_OFFSET(Local_001dedc0_ea_2, byte_3, 0x3);

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;

void VisitorLog__reset(u32 visitor_log, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 i = 0u;
    u32 r7 = visitor_log;
    u32 r10 = ~0u;
    u32 r9 = i;
    u32 r8 = r10 >> 0x10;
    do {
        u32 r1_1 = i * 5u + (i << 3);
        u32 r4 = r7 + (r1_1 << 3);
        *gptr<u32>(r4) = r9;
        clear_identity_with_flags(r4 + 4u, r1_1, r2, r3);
        *gptr<u16>(r4 + 0x32u) = u16(r9);
        *gptr<u8>(r4 + 0x34u) = u8(r9);
        *gptr<u8>(r4 + 0x35u) = u8(r9);
        PlayerRef__clear(r4 + 0x36u);
        r1 = 0u;
        visitor_log = r1;
        do {
            r2 = r4 + (r1 << 1);
            u32 r1_3 = r1 + 1u;
            visitor_log += 2u;
            r3 = r4 + (r1_3 << 1);
            *gptr<u16>(r2 + 0x4cu) = u16(r8);
            r1 = r1_3 + 1u;
            *gptr<u16>(r3 + 0x4cu) = u16(r8);
            guest::preempt();
        } while (s32(visitor_log) < 0xa);
        *gptr<u32>(r4 + 0x60u) = r10;
        gptr<Local_001dedc0_ea_2> ea_2 = gptr<Local_001dedc0_ea_2>(r4 + 0x64u);
        ea_2->half_0 = u16(r9);
        i += 1u;
        ea_2->byte_2 = u8(r9);
        ea_2->byte_3 = u8(r9);
        guest::preempt();
    } while (i < 4u);
    *gptr<u8>(r7 + 0x218u) = u8(r9);
    *gptr<u8>(r7 + 0x219u) = u8(r9);
    u32 r6 = r7 + 0x1a0u;
    *gptr<u32>(r7 + 0x1a0u) = r9;
    clear_identity_with_flags(r7 + 0x1a4u, r1, r2, r3);
    *gptr<u16>(r6 + 0x32u) = u16(r9);
    *gptr<u8>(r6 + 0x34u) = u8(r9);
    *gptr<u8>(r6 + 0x35u) = u8(r9);
    PlayerRef__clear(r6 + 0x36u);
    r1 = 0u;
    visitor_log = r1;
    do {
        u32 r1_5 = r1 + 1u;
        visitor_log += 2u;
        *gptr<u16>((r6 + (r1 << 1)) + 0x4cu) = u16(r8);
        r1 = r1_5 + 1u;
        *gptr<u16>((r6 + (r1_5 << 1)) + 0x4cu) = u16(r8);
        guest::preempt();
    } while (s32(visitor_log) < 0xa);
    *gptr<u32>(r6 + 0x60u) = r10;
    *gptr<u32>(r7 + 0x208u) = 0;
    *gptr<u32>(r7 + 0x204u) = r9;
    *gptr<u32>(r7 + 0x20cu) = 0;
    *gptr<u8>(r7 + 0x210u) = u8(r9);
    *gptr<u8>(r7 + 0x211u) = u8(r9);
    *gptr<u8>(r7 + 0x212u) = u8(r9);
    *gptr<u8>(r7 + 0x213u) = u8(r9);
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001dedc0
GUEST_EXPORT_FRAMED(0x001dedc0, d_001dedc0::VisitorLog__reset, 0x47f0);  // pushes {r4, i, r6, r7, r8, r9, r10, lr} first, as the original

// f_001deecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 4 log entries and the current visit record, then resets the log.
namespace d_001deecc {

struct __attribute__((packed)) Local_001deecc_ea_1 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_001deecc_ea_1, half_0, 0x0);
GUEST_OFFSET(Local_001deecc_ea_1, byte_2, 0x2);
GUEST_OFFSET(Local_001deecc_ea_1, byte_3, 0x3);

inline constexpr guest::Function<0x001dedc0, u32(u32, u32, u32, u32)> VisitorLog__reset;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;

u32 VisitorLog__construct(u32 visitor_log) {
    u32 r3_3 = 0;
    u32 r0_2 = for_each_element(visitor_log, 0x1de90cu, 0x68u, 4u) + 0x1a4u;
    u32 r4 = r0_2 - 4u;
    gptr<Local_001deecc_ea_1> ea_1 = gptr<Local_001deecc_ea_1>(r0_2 + 0x2eu);
    ea_1->half_0 = 0;
    ea_1->byte_2 = 0;
    ea_1->byte_3 = 0;
    *gptr<u32>(r4) = 0;
    clear_identity_with_flags(r4 + 4u);
    *gptr<u16>(r4 + 0x32u) = 0;
    *gptr<u8>(r4 + 0x34u) = 0;
    *gptr<u8>(r4 + 0x35u) = 0;
    PlayerRef__clear(r4 + 0x36u);
    u32 r2 = 0xffffu;
    u32 r1 = 0u;
    visitor_log = r1;
    do {
        r3_3 = r4 + (r1 << 1);
        u32 r1_3 = r1 + 1u;
        visitor_log += 2u;
        *gptr<u16>(r3_3 + 0x4cu) = u16(r2);
        r1 = r1_3 + 1u;
        *gptr<u16>((r4 + (r1_3 << 1)) + 0x4cu) = u16(r2);
        guest::preempt();
    } while (s32(visitor_log) < 0xa);
    u32 r1_4 = ~0u;
    *gptr<u32>(r4 + 0x60u) = r1_4;
    u32 r4_1 = r4 - 0x1a0u;
    VisitorLog__reset(r4_1, r1_4, r2, r3_3);
    return r4_1;
}

}  // namespace d_001deecc
GUEST_EXPORT_FRAMED(0x001deecc, d_001deecc::VisitorLog__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001def90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the room score record's items (all empty, 0x7ffe) and its bytes.
namespace d_001def90 {

struct __attribute__((packed)) RoomScore {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x2];  // (not used here)
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
};
GUEST_OFFSET(RoomScore, half_4, 0x4);
GUEST_OFFSET(RoomScore, half_6, 0x6);
GUEST_OFFSET(RoomScore, half_8, 0x8);
GUEST_OFFSET(RoomScore, half_a, 0xa);
GUEST_OFFSET(RoomScore, half_c, 0xc);
GUEST_OFFSET(RoomScore, half_e, 0xe);
GUEST_OFFSET(RoomScore, half_10, 0x10);
GUEST_OFFSET(RoomScore, half_12, 0x12);
GUEST_OFFSET(RoomScore, byte_16, 0x16);
GUEST_OFFSET(RoomScore, byte_17, 0x17);
GUEST_OFFSET(RoomScore, byte_18, 0x18);
GUEST_OFFSET(RoomScore, byte_19, 0x19);
GUEST_OFFSET(RoomScore, byte_1b, 0x1b);
GUEST_OFFSET(RoomScore, byte_1d, 0x1d);
GUEST_OFFSET(RoomScore, byte_1e, 0x1e);
GUEST_OFFSET(RoomScore, byte_1f, 0x1f);
GUEST_OFFSET(RoomScore, byte_21, 0x21);
GUEST_OFFSET(RoomScore, byte_22, 0x22);
GUEST_OFFSET(RoomScore, byte_23, 0x23);
GUEST_OFFSET(RoomScore, byte_24, 0x24);
GUEST_OFFSET(RoomScore, byte_25, 0x25);
GUEST_OFFSET(RoomScore, byte_26, 0x26);


void RoomScore__clear_items(gptr<RoomScore> room_score) {
    room_score->byte_16 = 1;
    room_score->byte_17 = 0;
    room_score->byte_18 = 0;
    room_score->byte_19 = 0;
    room_score->byte_1b = 0;
    room_score->byte_1d = 5;
    room_score->byte_1e = 5;
    room_score->byte_1f = 0;
    room_score->half_4 = 0x7ffe;
    room_score->half_6 = 0x7ffe;
    room_score->half_8 = 0x7ffe;
    room_score->half_a = 0x7ffe;
    room_score->half_c = 0x7ffe;
    room_score->half_12 = 0x7ffe;
    room_score->half_e = 0x7ffe;
    room_score->half_10 = 0x7ffe;
    room_score->byte_21 = 0;
    room_score->byte_22 = 0;
    room_score->byte_23 = 0;
    room_score->byte_24 = 0;
    room_score->byte_25 = 0;
    room_score->byte_26 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001def90
GUEST_EXPORT(0x001def90, d_001def90::RoomScore__clear_items);

// f_001df020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the room score record: no score, kind 8, its items empty and its levels cleared.
namespace d_001df020 {

struct __attribute__((packed)) RoomScore {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
    u8 byte_27;
    u8 byte_28;
    u8 byte_29;
    u8 byte_2a;
};
GUEST_OFFSET(RoomScore, word_0, 0x0);
GUEST_OFFSET(RoomScore, half_4, 0x4);
GUEST_OFFSET(RoomScore, half_6, 0x6);
GUEST_OFFSET(RoomScore, half_8, 0x8);
GUEST_OFFSET(RoomScore, half_a, 0xa);
GUEST_OFFSET(RoomScore, half_c, 0xc);
GUEST_OFFSET(RoomScore, half_e, 0xe);
GUEST_OFFSET(RoomScore, half_10, 0x10);
GUEST_OFFSET(RoomScore, half_12, 0x12);
GUEST_OFFSET(RoomScore, byte_14, 0x14);
GUEST_OFFSET(RoomScore, byte_15, 0x15);
GUEST_OFFSET(RoomScore, byte_16, 0x16);
GUEST_OFFSET(RoomScore, byte_17, 0x17);
GUEST_OFFSET(RoomScore, byte_18, 0x18);
GUEST_OFFSET(RoomScore, byte_19, 0x19);
GUEST_OFFSET(RoomScore, byte_1b, 0x1b);
GUEST_OFFSET(RoomScore, byte_1d, 0x1d);
GUEST_OFFSET(RoomScore, byte_1e, 0x1e);
GUEST_OFFSET(RoomScore, byte_1f, 0x1f);
GUEST_OFFSET(RoomScore, byte_21, 0x21);
GUEST_OFFSET(RoomScore, byte_22, 0x22);
GUEST_OFFSET(RoomScore, byte_23, 0x23);
GUEST_OFFSET(RoomScore, byte_24, 0x24);
GUEST_OFFSET(RoomScore, byte_25, 0x25);
GUEST_OFFSET(RoomScore, byte_26, 0x26);
GUEST_OFFSET(RoomScore, byte_27, 0x27);
GUEST_OFFSET(RoomScore, byte_28, 0x28);
GUEST_OFFSET(RoomScore, byte_29, 0x29);
GUEST_OFFSET(RoomScore, byte_2a, 0x2a);


void RoomScore__clear(gptr<RoomScore> room_score) {
    room_score->byte_14 = 8;
    room_score->word_0 = 0;
    room_score->byte_15 = 0;
    room_score->byte_16 = 1;
    room_score->byte_17 = 0;
    room_score->byte_18 = 0;
    room_score->byte_19 = 0;
    room_score->byte_1b = 0;
    room_score->byte_1f = 0;
    room_score->byte_21 = 0;
    room_score->byte_22 = 0;
    room_score->byte_23 = 0;
    room_score->byte_24 = 0;
    room_score->byte_25 = 0;
    room_score->byte_26 = 0;
    room_score->byte_1d = 5;
    room_score->byte_1e = 5;
    room_score->half_4 = 0x7ffe;
    room_score->half_6 = 0x7ffe;
    room_score->half_8 = 0x7ffe;
    room_score->half_a = 0x7ffe;
    room_score->half_c = 0x7ffe;
    room_score->half_12 = 0x7ffe;
    room_score->half_e = 0x7ffe;
    room_score->half_10 = 0x7ffe;
    room_score->byte_27 = 0;
    room_score->byte_28 = 0;
    room_score->byte_29 = 0;
    room_score->byte_2a = 0;
}

}  // namespace d_001df020
GUEST_EXPORT(0x001df020, d_001df020::RoomScore__clear);

// f_001df0b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the room score record: no score, kind 8, its items empty and its levels cleared.
namespace d_001df0b0 {

struct __attribute__((packed)) RoomScore {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
    u8 byte_27;
    u8 byte_28;
    u8 byte_29;
    u8 byte_2a;
};
GUEST_OFFSET(RoomScore, word_0, 0x0);
GUEST_OFFSET(RoomScore, half_4, 0x4);
GUEST_OFFSET(RoomScore, half_6, 0x6);
GUEST_OFFSET(RoomScore, half_8, 0x8);
GUEST_OFFSET(RoomScore, half_a, 0xa);
GUEST_OFFSET(RoomScore, half_c, 0xc);
GUEST_OFFSET(RoomScore, half_e, 0xe);
GUEST_OFFSET(RoomScore, half_10, 0x10);
GUEST_OFFSET(RoomScore, half_12, 0x12);
GUEST_OFFSET(RoomScore, byte_14, 0x14);
GUEST_OFFSET(RoomScore, byte_15, 0x15);
GUEST_OFFSET(RoomScore, byte_16, 0x16);
GUEST_OFFSET(RoomScore, byte_17, 0x17);
GUEST_OFFSET(RoomScore, byte_18, 0x18);
GUEST_OFFSET(RoomScore, byte_19, 0x19);
GUEST_OFFSET(RoomScore, byte_1b, 0x1b);
GUEST_OFFSET(RoomScore, byte_1d, 0x1d);
GUEST_OFFSET(RoomScore, byte_1e, 0x1e);
GUEST_OFFSET(RoomScore, byte_1f, 0x1f);
GUEST_OFFSET(RoomScore, byte_21, 0x21);
GUEST_OFFSET(RoomScore, byte_22, 0x22);
GUEST_OFFSET(RoomScore, byte_23, 0x23);
GUEST_OFFSET(RoomScore, byte_24, 0x24);
GUEST_OFFSET(RoomScore, byte_25, 0x25);
GUEST_OFFSET(RoomScore, byte_26, 0x26);
GUEST_OFFSET(RoomScore, byte_27, 0x27);
GUEST_OFFSET(RoomScore, byte_28, 0x28);
GUEST_OFFSET(RoomScore, byte_29, 0x29);
GUEST_OFFSET(RoomScore, byte_2a, 0x2a);


void RoomScore__construct(gptr<RoomScore> room_score) {
    room_score->byte_14 = 8;
    room_score->word_0 = 0;
    room_score->byte_15 = 0;
    room_score->byte_16 = 1;
    room_score->byte_17 = 0;
    room_score->byte_18 = 0;
    room_score->byte_19 = 0;
    room_score->byte_1b = 0;
    room_score->byte_1f = 0;
    room_score->byte_21 = 0;
    room_score->byte_22 = 0;
    room_score->byte_23 = 0;
    room_score->byte_24 = 0;
    room_score->byte_25 = 0;
    room_score->byte_26 = 0;
    room_score->byte_1d = 5;
    room_score->byte_1e = 5;
    room_score->half_4 = 0x7ffe;
    room_score->half_6 = 0x7ffe;
    room_score->half_8 = 0x7ffe;
    room_score->half_a = 0x7ffe;
    room_score->half_c = 0x7ffe;
    room_score->half_12 = 0x7ffe;
    room_score->half_e = 0x7ffe;
    room_score->half_10 = 0x7ffe;
    room_score->byte_27 = 0;
    room_score->byte_28 = 0;
    room_score->byte_29 = 0;
    room_score->byte_2a = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001df0b0
GUEST_EXPORT(0x001df0b0, d_001df0b0::RoomScore__construct);

// f_001df14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the score and raises the best tier reached (of the 8 or 5 tier thresholds, by the kind).
namespace d_001df14c {

struct __attribute__((packed)) RoomScore {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x11];  // (not used here)
    u8 byte_27;
    u8 unknown_28[0x1];  // (not used here)
    u8 byte_29;
};
GUEST_OFFSET(RoomScore, word_0, 0x0);
GUEST_OFFSET(RoomScore, byte_14, 0x14);
GUEST_OFFSET(RoomScore, byte_15, 0x15);
GUEST_OFFSET(RoomScore, byte_27, 0x27);
GUEST_OFFSET(RoomScore, byte_29, 0x29);


void RoomScore__set_score(gptr<RoomScore> room_score, u32 r1) {
    u32 r2 = 0;
    u32 r4 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = room_score->byte_14;
    u32 r2_1 = room_score->byte_15;
    room_score->word_0 = r1;
    u32 r2_2 = r2_1 | 1u;
    room_score->byte_15 = u8(r2_2);
    if (r3_1 >= 8u) {
        r2_3 = r2_2 & ~2u;
        r4 = 0x88e6b4u;
    } else {
        r2_3 = r2_2 | 2u;
        r4 = 0x88e6d8u;
    }
    room_score->byte_15 = u8(r2_3);
    u32 r12 = 0u;
    if (r3_1 >= 8u) {
        r2 = 8u;
    } else {
        r2 = 5u;
L_1df18c:;
        if (gptr<u32>(r4)[r2] <= r1) {
            r12 = r2 & 0xffu;
        } else {
            r2 -= 1u;
            if (r2 != 0) {
                guest::preempt();
                goto L_1df18c;
            }
        }
        if (room_score->byte_29 < r12) {
            room_score->byte_29 = u8(r12);
        }
        return;
    }
L_1df1bc:;
    if (gptr<u32>(r4)[r2] <= r1) {
        r12 = r2 & 0xffu;
    } else {
        r2 -= 1u;
        if (r2 != 0) {
            guest::preempt();
            goto L_1df1bc;
        }
    }
    if (room_score->byte_27 < r12) {
        room_score->byte_27 = u8(r12);
    }
}

}  // namespace d_001df14c
GUEST_EXPORT_FRAMED(0x001df14c, d_001df14c::RoomScore__set_score, 0x10);  // pushes {r4} first, as the original

// f_001df1f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the score, kind and items of the record (keeping its best tiers).
namespace d_001df1f4 {

struct __attribute__((packed)) RoomScore {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x1];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x1];  // (not used here)
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
};
GUEST_OFFSET(RoomScore, word_0, 0x0);
GUEST_OFFSET(RoomScore, half_4, 0x4);
GUEST_OFFSET(RoomScore, half_6, 0x6);
GUEST_OFFSET(RoomScore, half_8, 0x8);
GUEST_OFFSET(RoomScore, half_a, 0xa);
GUEST_OFFSET(RoomScore, half_c, 0xc);
GUEST_OFFSET(RoomScore, half_e, 0xe);
GUEST_OFFSET(RoomScore, half_10, 0x10);
GUEST_OFFSET(RoomScore, half_12, 0x12);
GUEST_OFFSET(RoomScore, byte_14, 0x14);
GUEST_OFFSET(RoomScore, byte_15, 0x15);
GUEST_OFFSET(RoomScore, byte_16, 0x16);
GUEST_OFFSET(RoomScore, byte_17, 0x17);
GUEST_OFFSET(RoomScore, byte_18, 0x18);
GUEST_OFFSET(RoomScore, byte_19, 0x19);
GUEST_OFFSET(RoomScore, byte_1b, 0x1b);
GUEST_OFFSET(RoomScore, byte_1d, 0x1d);
GUEST_OFFSET(RoomScore, byte_1e, 0x1e);
GUEST_OFFSET(RoomScore, byte_1f, 0x1f);
GUEST_OFFSET(RoomScore, byte_21, 0x21);
GUEST_OFFSET(RoomScore, byte_22, 0x22);
GUEST_OFFSET(RoomScore, byte_23, 0x23);
GUEST_OFFSET(RoomScore, byte_24, 0x24);
GUEST_OFFSET(RoomScore, byte_25, 0x25);
GUEST_OFFSET(RoomScore, byte_26, 0x26);


void RoomScore__reset_items(gptr<RoomScore> room_score) {
    room_score->byte_14 = 8;
    room_score->word_0 = 0;
    room_score->byte_15 = 0;
    room_score->byte_16 = 1;
    room_score->byte_17 = 0;
    room_score->byte_18 = 0;
    room_score->byte_19 = 0;
    room_score->byte_1b = 0;
    room_score->byte_1f = 0;
    room_score->byte_21 = 0;
    room_score->byte_22 = 0;
    room_score->byte_23 = 0;
    room_score->byte_24 = 0;
    room_score->byte_25 = 0;
    room_score->byte_26 = 0;
    room_score->byte_1d = 5;
    room_score->byte_1e = 5;
    room_score->half_4 = 0x7ffe;
    room_score->half_6 = 0x7ffe;
    room_score->half_8 = 0x7ffe;
    room_score->half_a = 0x7ffe;
    room_score->half_c = 0x7ffe;
    room_score->half_12 = 0x7ffe;
    room_score->half_e = 0x7ffe;
    room_score->half_10 = 0x7ffe;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001df1f4
GUEST_EXPORT(0x001df1f4, d_001df1f4::RoomScore__reset_items);

// f_001df274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The mailbox of player `index` (0x1b88 bytes each, from +0x2058).
namespace d_001df274 {


u32 MailData__mailbox_of_player_b(u32 mail_data, u32 r1) {
    u32 r1_1 = s16(r1) * s16(0x371u);
    guest::cpu()->r[1] = r1_1;
    return mail_data + (r1_1 << 3) + 0x2058u;
}

}  // namespace d_001df274
GUEST_EXPORT(0x001df274, d_001df274::MailData__mailbox_of_player_b);

// f_001df324: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data block at 0x982040 when it is loaded and not locked; 0 otherwise.
namespace d_001df324 {

inline constexpr u32 data_block_address = 0x00982040u;
inline guest::global<u8, 0x0098203c> data_block_flags;
inline guest::global<u32, 0x00982040> data_block;
inline guest::global<u8, 0x00982055> global_00982055;

u32 data_block_of_block() {
    u32 r1_1 = s8(*global_00982055);
    u32 r0_1 = u32(s8(*data_block_flags)) & ~r1_1;
    if (r0_1 != 0) {
        r0_1 = *data_block;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001df324
GUEST_EXPORT(0x001df324, d_001df324::data_block_of_block);

// f_001df350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The letter block of player `index` (0x5a0 bytes each, from +0x8e78).
namespace d_001df350 {


u32 MailData__letters_of_player_b(u32 mail_data, u32 r1) {
    return mail_data + r1 * 0xfu * 0x60u + 0x8e78u;
}

}  // namespace d_001df350
GUEST_EXPORT(0x001df350, d_001df350::MailData__letters_of_player_b);

// f_001df368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data block at 0x982068 when it is loaded and not locked; 0 otherwise.
namespace d_001df368 {

inline constexpr u32 data_block_982068_value_address = 0x00982068u;
inline guest::global<u8, 0x00982064> global_00982064;
inline guest::global<u32, 0x00982068> data_block_982068_value;
inline guest::global<u8, 0x0098207d> global_0098207d;

u32 data_block_982068() {
    u32 r1_1 = s8(*global_0098207d);
    u32 r0_1 = u32(s8(*global_00982064)) & ~r1_1;
    if (r0_1 != 0) {
        r0_1 = *data_block_982068_value;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001df368
GUEST_EXPORT(0x001df368, d_001df368::data_block_982068);

// f_001df394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data block at 0x982018 when it is loaded; 0 otherwise.
namespace d_001df394 {

inline constexpr u32 data_loader_address = 0x00982018u;
inline guest::global<u8, 0x00982014> data_loader_flag;
inline guest::global<u32, 0x00982018> data_loader;

u32 data_block_of_loader() {
    u32 r0_1 = *data_loader_flag;
    if (r0_1 != 0) {
        r0_1 = *data_loader;
    }
    return r0_1;
}

}  // namespace d_001df394
GUEST_EXPORT(0x001df394, d_001df394::data_block_of_loader);

// f_001df3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data block at 0x982040 when it is loaded; 0 otherwise.
namespace d_001df3b4 {

inline constexpr u32 data_block_address = 0x00982040u;
inline guest::global<u8, 0x0098203c> data_block_flags;
inline guest::global<u32, 0x00982040> data_block;

u32 data_block_any() {
    u32 r0_1 = *data_block_flags;
    if (r0_1 != 0) {
        r0_1 = *data_block;
    }
    return r0_1;
}

}  // namespace d_001df3b4
GUEST_EXPORT(0x001df3b4, d_001df3b4::data_block_any);

// f_001df4c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 6 items of the outfit, all empty.
namespace d_001df4c4 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;

u32 Outfit6__construct(u32 outfit6) {
    construct_empty_item(outfit6);
    construct_empty_item(outfit6 + 4u);
    construct_empty_item(outfit6 + 8u);
    construct_empty_item(outfit6 + 0xcu);
    construct_empty_item(outfit6 + 0x10u);
    construct_empty_item(outfit6 + 0x14u);
    Item__copy(outfit6, empty_item_address);
    Item__copy(outfit6 + 4u, empty_item_address);
    Item__copy(outfit6 + 8u, empty_item_address);
    Item__copy(outfit6 + 0xcu, empty_item_address);
    Item__copy(outfit6 + 0x10u, empty_item_address);
    Item__copy(outfit6 + 0x14u, empty_item_address);
    return outfit6;
}

}  // namespace d_001df4c4
GUEST_EXPORT_FRAMED(0x001df4c4, d_001df4c4::Outfit6__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_001df564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds to the low 3 bits of the byte, clamped to 0 to 7.
namespace d_001df564 {

struct __attribute__((packed)) SelfPacked {
    u8 byte_0;
};
GUEST_OFFSET(SelfPacked, byte_0, 0x0);


void Packed__add_low_3bits(gptr<SelfPacked> self_packed, u32 r1) {
    u32 r3_1 = self_packed->byte_0;
    u32 r2_1 = (r3_1 & 7u) + r1;
    if (r2_1 <= 7u) {
        u32 r1_1 = r3_1 & ~7u | r2_1 & 7u;
        self_packed->byte_0 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 7u;
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = r3_1 & ~7u | r2_1 & 7u;
    self_packed->byte_0 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001df564
GUEST_EXPORT(0x001df564, d_001df564::Packed__add_low_3bits);

// f_001df598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds to the 8-bit field from bit 1 of +3, clamped to 0 to 255.
namespace d_001df598 {

struct __attribute__((packed)) SelfPacked {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(SelfPacked, byte_3, 0x3);
GUEST_OFFSET(SelfPacked, byte_4, 0x4);


void Packed__add_8bits_at_3_1(gptr<SelfPacked> self_packed, u32 r1) {
    u32 r3_1 = self_packed->byte_3;
    u32 r2_1 = (r3_1 >> 1) + ((u32(self_packed->byte_4) & 1u) << 7) + r1;
    if (r2_1 <= 0xffu) {
        u32 r1_1 = u32(self_packed->byte_4) & ~1u | (r2_1 & 0x80u) >> 7;
        self_packed->byte_3 = u8(r3_1 & ~0xfeu | r2_1 << 1);
        self_packed->byte_4 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 0xffu;
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = u32(self_packed->byte_4) & ~1u | (r2_1 & 0x80u) >> 7;
    self_packed->byte_3 = u8(r3_1 & ~0xfeu | r2_1 << 1);
    self_packed->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001df598
GUEST_EXPORT(0x001df598, d_001df598::Packed__add_8bits_at_3_1);

// f_001df5e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds to the 3-bit field at bits 1 to 3 of +4, clamped to 0 to 7.
namespace d_001df5e8 {

struct __attribute__((packed)) SelfPacked {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(SelfPacked, byte_4, 0x4);


void Packed__add_3bits_at_4_1(gptr<SelfPacked> self_packed, u32 r1) {
    u32 r3_1 = self_packed->byte_4;
    u32 r2_1 = r1 + (r3_1 >> 1u & 7u);
    if (r2_1 <= 7u) {
        u32 r1_1 = r3_1 & ~0xeu | (r2_1 & 7u) << 1;
        self_packed->byte_4 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 7u;
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = r3_1 & ~0xeu | (r2_1 & 7u) << 1;
    self_packed->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001df5e8
GUEST_EXPORT(0x001df5e8, d_001df5e8::Packed__add_3bits_at_4_1);

// f_001df61c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds to the 3-bit field at bits 3 to 5 of +0, clamped to 0 to 7.
namespace d_001df61c {

struct __attribute__((packed)) SelfPacked {
    u8 byte_0;
};
GUEST_OFFSET(SelfPacked, byte_0, 0x0);


void Packed__add_3bits_at_0_3(gptr<SelfPacked> self_packed, u32 r1) {
    u32 r3_1 = self_packed->byte_0;
    u32 r2_1 = r1 + (r3_1 >> 3u & 7u);
    if (r2_1 <= 7u) {
        self_packed->byte_0 = u8(r3_1 & ~0x38u | (r2_1 & 7u) << 3);
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 7u;
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    self_packed->byte_0 = u8(r3_1 & ~0x38u | (r2_1 & 7u) << 3);
}

}  // namespace d_001df61c
GUEST_EXPORT(0x001df61c, d_001df61c::Packed__add_3bits_at_0_3);

// f_001df668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds to the 3-bit field at bits 4 to 6 of +4, clamped to 0 to 7.
namespace d_001df668 {

struct __attribute__((packed)) SelfPacked {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(SelfPacked, byte_4, 0x4);


void Packed__add_3bits_at_4_4(gptr<SelfPacked> self_packed, u32 r1) {
    u32 r3_1 = self_packed->byte_4;
    u32 r2_1 = r1 + (r3_1 >> 4u & 7u);
    if (r2_1 <= 7u) {
        u32 r1_1 = r3_1 & ~0x70u | (r2_1 & 7u) << 4;
        self_packed->byte_4 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 7u;
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = r3_1 & ~0x70u | (r2_1 & 7u) << 4;
    self_packed->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001df668
GUEST_EXPORT(0x001df668, d_001df668::Packed__add_3bits_at_4_4);
