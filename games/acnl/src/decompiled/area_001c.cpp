// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001c0810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the NPC sound at the position (converted by the camera) and marks it playing; true.
namespace d_001c0810 {

struct __attribute__((packed)) SoundObjNpcHolder {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(SoundObjNpcHolder, byte_e8, 0xe8);

inline constexpr guest::Function<0x001d9c9c, u32(u32, u32, u32)> SoundObjNpc__start;
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> camera_transform_point;

u32 SoundObjNpcHolder__play_at(gptr<SoundObjNpcHolder> sound_obj_npc_holder, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    camera_transform_point(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    SoundObjNpc__start(sound_obj_npc_holder.addr(), r1, frame.at(0).addr());
    sound_obj_npc_holder->byte_e8 = 1;
    return 1u;
}

}  // namespace d_001c0810
GUEST_EXPORT_FRAMED(0x001c0810, d_001c0810::SoundObjNpcHolder__play_at, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001c0c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the NPC sound at the position (converted by the camera).
namespace d_001c0c1c {

inline constexpr guest::Function<0x001d9e44, u32(u32, u32, u32)> SoundObjNpc__virtual_4;
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> camera_transform_point;

u32 SoundObjNpcHolder__update_at(u32 sound_obj_npc_holder, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    camera_transform_point(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    return SoundObjNpc__virtual_4(sound_obj_npc_holder, r1, frame.at(0).addr());
}

}  // namespace d_001c0c1c
GUEST_EXPORT_FRAMED(0x001c0c1c, d_001c0c1c::SoundObjNpcHolder__update_at, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001c0f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the NPC sound when it plays.
namespace d_001c0f3c {

struct __attribute__((packed)) SoundObjNpcHolder {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(SoundObjNpcHolder, byte_e8, 0xe8);

inline constexpr guest::Function<0x001d9fb0, u32(u32, u32, u32, u32)> SoundObjNpc__stop;

u32 SoundObjNpcHolder__stop(gptr<SoundObjNpcHolder> sound_obj_npc_holder) {
    u32 r0_1 = sound_obj_npc_holder->byte_e8;
    if (r0_1 == 0) {
        return r0_1;
    }
    SoundObjNpc__stop(sound_obj_npc_holder.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    sound_obj_npc_holder->byte_e8 = 0;
    return 0u;
}

}  // namespace d_001c0f3c
GUEST_EXPORT_FRAMED(0x001c0f3c, d_001c0f3c::SoundObjNpcHolder__stop, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c0f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the sound moved (+0x94); its kind byte.
namespace d_001c0f64 {

struct __attribute__((packed)) SoundObj {
    u8 unknown_0[0x94];  // (not used here)
    u8 byte_94;
    u8 unknown_95[0x33];  // (not used here)
    u8 byte_c8;
};
GUEST_OFFSET(SoundObj, byte_94, 0x94);
GUEST_OFFSET(SoundObj, byte_c8, 0xc8);


u32 SoundObj__mark_moved(gptr<SoundObj> sound_obj) {
    u32 r1_1 = s8(sound_obj->byte_c8);
    sound_obj->byte_94 = 1;
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_001c0f64
GUEST_EXPORT(0x001c0f64, d_001c0f64::SoundObj__mark_moved);

// f_001c0fdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the NPC sound holder with full volume, stopped.
namespace d_001c0fdc {

struct __attribute__((packed)) Local_001c0fdc_r0_1 {
    u8 unknown_0[0xe4];  // (not used here)
    float float_e4;
    u8 byte_e8;
};
GUEST_OFFSET(Local_001c0fdc_r0_1, float_e4, 0xe4);
GUEST_OFFSET(Local_001c0fdc_r0_1, byte_e8, 0xe8);

inline constexpr guest::Function<0x001da01c, u32(u32, u32, u32, u32)> SoundObjNpc__construct;

u32 SoundObjNpcHolder__construct(u32 sound_obj_npc_holder, u32 r1, float S0) {
    gptr<Local_001c0fdc_r0_1> r0_1 = gptr<Local_001c0fdc_r0_1>(SoundObjNpc__construct(sound_obj_npc_holder, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    float S0_1 = 1.0f;
    r0_1->float_e4 = S0_1;
    r0_1->byte_e8 = 0;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return r0_1.addr();
}

}  // namespace d_001c0fdc
GUEST_EXPORT_FRAMED(0x001c0fdc, d_001c0fdc::SoundObjNpcHolder__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c1e54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading the indoor jump data (unless loaded) on a heap (arg 1); 1 once started or loaded.
namespace d_001c1e54 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x1bc];  // (not used here)
    u32 word_1bc;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_1bc, 0x1bc);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> LoadSplit__start;

struct __attribute__((packed)) LoadIdrJumpDataBFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LoadIdrJumpDataBFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadIdrJumpDataBFrame, word_4, 0x4);
GUEST_SIZE(LoadIdrJumpDataBFrame, 0xc);

u32 load_idr_jump_data_b(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1) {
    guest::StackFrameOf<LoadIdrJumpDataBFrame> frame;  // the original's stack frame
    u32 r1_1 = safe_string_base_char->word_1bc;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    frame->word_4 = 0x1c1ea0;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    u32 r0_2 = LoadSplit__start(safe_string_base_char.addr() + 0xecu, frame.at(0).addr(), r1, 4u);
    return r0_2 == 0 ? r0_2 : 1u;
}

}  // namespace d_001c1e54
GUEST_EXPORT_FRAMED(0x001c1e54, d_001c1e54::load_idr_jump_data_b, 0x4000);  // pushes {lr} first, as the original

// f_001c1eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading the ground jump data on the field heap (none: done); 1 once started.
namespace d_001c1eb8 {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 field_heap_address = 0x00952c4cu;
inline guest::global<u32, 0x00952c4c> field_heap;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) LoadGroundJumpDataFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LoadGroundJumpDataFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadGroundJumpDataFrame, word_4, 0x4);
GUEST_SIZE(LoadGroundJumpDataFrame, 0xc);

u32 load_ground_jump_data(u32 r0, u32 r1) {
    guest::StackFrameOf<LoadGroundJumpDataFrame> frame;  // the original's stack frame
    u32 r2_1 = *field_heap;
    if (r2_1 == 0) {
        return 1u;
    }
    frame->word_4 = 0x1c1f04;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    return load_split_start(r0, frame.at(0).addr(), r2_1, 4u);
}

}  // namespace d_001c1eb8
GUEST_EXPORT_FRAMED(0x001c1eb8, d_001c1eb8::load_ground_jump_data, 0x4000);  // pushes {lr} first, as the original

// f_001c1f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading the indoor jump data on a heap (arg 1; none: done).
namespace d_001c1f1c {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) LoadIdrJumpDataFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LoadIdrJumpDataFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadIdrJumpDataFrame, word_4, 0x4);
GUEST_SIZE(LoadIdrJumpDataFrame, 0xc);

u32 load_idr_jump_data(u32 r0, u32 r1) {
    guest::StackFrameOf<LoadIdrJumpDataFrame> frame;  // the original's stack frame
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    frame->word_4 = 0x1c1f5c;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    return load_split_start(r0 + 0xecu, frame.at(0).addr(), r1, 4u);
}

}  // namespace d_001c1f1c
GUEST_EXPORT_FRAMED(0x001c1f1c, d_001c1f1c::load_idr_jump_data, 0x4000);  // pushes {lr} first, as the original

// f_001c1f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading the indoor jump data on a heap (arg 1; none: done), with the default load options.
namespace d_001c1f74 {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr guest::Function<0x0056a758, u32(u32, u32, u32, u32)> LoadSplit__start_default;

struct __attribute__((packed)) LoadIdrJumpDataCFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LoadIdrJumpDataCFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadIdrJumpDataCFrame, word_4, 0x4);
GUEST_SIZE(LoadIdrJumpDataCFrame, 0xc);

u32 load_idr_jump_data_c(u32 r0, u32 r1) {
    guest::StackFrameOf<LoadIdrJumpDataCFrame> frame;  // the original's stack frame
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    frame->word_4 = 0x1c1fb4;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    return LoadSplit__start_default(r0 + 0xecu, frame.at(0).addr(), r1, 4u);
}

}  // namespace d_001c1f74
GUEST_EXPORT_FRAMED(0x001c1f74, d_001c1f74::load_idr_jump_data_c, 0x4000);  // pushes {lr} first, as the original

// f_001c1fcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The 0xa00-byte layout block of id (from the first table for ids up to 0x108, else the second); null when it is not
// loaded.
namespace d_001c1fcc {

struct __attribute__((packed)) SharedLayouts {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0xe8];  // (not used here)
    u32 word_1bc;
};
GUEST_OFFSET(SharedLayouts, word_d0, 0xd0);
GUEST_OFFSET(SharedLayouts, word_1bc, 0x1bc);

inline constexpr guest::Function<0x006055f0, u32(u32, u32)> is_villager_id;
inline constexpr guest::Function<0x00605600, u32(u32, u32)> is_special_npc_id;

u32 SharedLayouts__block_of_id(gptr<SharedLayouts> shared_layouts, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = r1 * 5u;
    if (r1 <= 0x108u) {
        u32 r0_1 = is_villager_id(r1, r1);
        r1_1 = guest::cpu()->r[1];
        if (r0_1 != 0 && shared_layouts->word_d0 != 0) {
            return shared_layouts->word_d0 + (r5_1 << 9);
        }
        return 0u;
    }
    u32 r0_3 = is_special_npc_id(r1, r1);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0 || shared_layouts->word_1bc == 0) {
        return 0u;
    }
    r1_1 = (r5_1 << 9) + 0xfff5a600u;
    r0_2 = shared_layouts->word_1bc + r1_1;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001c1fcc
GUEST_EXPORT_FRAMED(0x001c1fcc, d_001c1fcc::SharedLayouts__block_of_id, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c2040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The 0xa00-byte layout block of id from the first table; null when it is not loaded.
namespace d_001c2040 {

struct __attribute__((packed)) SharedLayouts {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
};
GUEST_OFFSET(SharedLayouts, word_d0, 0xd0);

inline constexpr guest::Function<0x006055f0, u32(u32, u32)> is_villager_id;

u32 SharedLayouts__block_of_id_a(gptr<SharedLayouts> shared_layouts, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_1 = is_villager_id(r1, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0 || shared_layouts->word_d0 == 0) {
        r0_2 = 0u;
    } else {
        r1_1 = r1 * 5u;
        r0_2 = shared_layouts->word_d0 + (r1_1 << 9);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001c2040
GUEST_EXPORT_FRAMED(0x001c2040, d_001c2040::SharedLayouts__block_of_id_a, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c2074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The 0xa00-byte layout block of id from the second table; null when it is not loaded.
namespace d_001c2074 {

struct __attribute__((packed)) SharedLayouts {
    u8 unknown_0[0x1bc];  // (not used here)
    u32 word_1bc;
};
GUEST_OFFSET(SharedLayouts, word_1bc, 0x1bc);

inline constexpr guest::Function<0x00605600, u32(u32)> is_special_npc_id;

u32 SharedLayouts__block_of_id_b(gptr<SharedLayouts> shared_layouts, u32 r1) {
    u32 r0_1 = is_special_npc_id(r1);
    return (r0_1 == 0 || shared_layouts->word_1bc == 0) ? 0u : shared_layouts->word_1bc + (r1 * 0xa00u + 0xfff5a600u);
}

}  // namespace d_001c2074
GUEST_EXPORT_FRAMED(0x001c2074, d_001c2074::SharedLayouts__block_of_id_b, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c23b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the transform and composes its rotation with the other's.
namespace d_001c23b0 {

struct __attribute__((packed)) Transform {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    float float_14;
};
GUEST_OFFSET(Transform, word_0, 0x0);
GUEST_OFFSET(Transform, word_4, 0x4);
GUEST_OFFSET(Transform, word_8, 0x8);
GUEST_OFFSET(Transform, word_c, 0xc);
GUEST_OFFSET(Transform, word_10, 0x10);
GUEST_OFFSET(Transform, float_14, 0x14);

struct __attribute__((packed)) TransformComposeArg1 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(TransformComposeArg1, word_0, 0x0);
GUEST_OFFSET(TransformComposeArg1, float_4, 0x4);
GUEST_OFFSET(TransformComposeArg1, float_8, 0x8);
GUEST_OFFSET(TransformComposeArg1, float_c, 0xc);
GUEST_OFFSET(TransformComposeArg1, float_10, 0x10);
GUEST_OFFSET(TransformComposeArg1, float_14, 0x14);

struct __attribute__((packed)) TransformComposeArg2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    float float_8;
    float float_c;
    float float_10;
};
GUEST_OFFSET(TransformComposeArg2, word_4, 0x4);
GUEST_OFFSET(TransformComposeArg2, float_8, 0x8);
GUEST_OFFSET(TransformComposeArg2, float_c, 0xc);
GUEST_OFFSET(TransformComposeArg2, float_10, 0x10);

struct __attribute__((packed)) Local_001c23b0_r0_1 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_001c23b0_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_001c23b0_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_001c23b0_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_001c23b0_r0_1, float_c, 0xc);

struct __attribute__((packed)) Local_001c23b0_r3_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_001c23b0_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_001c23b0_r3_1, float_4, 0x4);
GUEST_OFFSET(Local_001c23b0_r3_1, float_8, 0x8);
GUEST_OFFSET(Local_001c23b0_r3_1, float_c, 0xc);

inline guest::global<u32, 0x008a3bbc> float_one;
inline guest::global<u32, 0x008a3bc0> float_zero;
inline constexpr guest::Function<0x0055d634, u32(u32, u32, u32)> Color4f__lerp;

struct __attribute__((packed)) TransformComposeFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x20];  // (not read or written by name)
};
GUEST_OFFSET(TransformComposeFrame, word_0, 0x0);
GUEST_OFFSET(TransformComposeFrame, word_4, 0x4);
GUEST_OFFSET(TransformComposeFrame, word_8, 0x8);
GUEST_OFFSET(TransformComposeFrame, word_c, 0xc);
GUEST_SIZE(TransformComposeFrame, 0x30);

u32 Transform__compose(gptr<Transform> transform, gptr<TransformComposeArg1> arg1, gptr<TransformComposeArg2> arg2) {
    guest::StackFrameOf<TransformComposeFrame> frame;  // the original's stack frame
    float S2_1 = arg1->float_4;
    float S3_1 = arg1->float_8;
    float S4_1 = arg1->float_c;
    float S5_1 = arg1->float_10;
    float S6_1 = arg1->float_14;
    transform->word_0 = arg1->word_0;
    transform->word_4 = std::bit_cast<u32>(S2_1);
    transform->word_8 = std::bit_cast<u32>(S3_1);
    transform->word_c = std::bit_cast<u32>(S4_1);
    transform->word_10 = std::bit_cast<u32>(S5_1);
    transform->float_14 = S6_1;
    frame->word_0 = *float_zero;
    frame->word_4 = *float_zero;
    gptr<Local_001c23b0_r3_1> r3_1 = gptr<Local_001c23b0_r3_1>(frame.at(0x10).addr());
    frame->word_8 = *float_zero;
    frame->word_c = *float_one;
    gptr<Local_001c23b0_r0_1> r0_1 = gptr<Local_001c23b0_r0_1>(frame.at(0x20).addr());
    float S2_2 = arg2->float_8;
    float S3_2 = arg2->float_c;
    float S4_2 = arg2->float_10;
    r0_1->word_0 = arg2->word_4;
    r0_1->float_4 = S2_2;
    r0_1->float_8 = S3_2;
    r0_1->float_c = S4_2;
    float S1_1 = arg1->float_4;
    float S2_3 = arg1->float_8;
    float S3_3 = arg1->float_c;
    float S4_3 = arg1->float_10;
    r3_1->float_0 = S1_1;
    r3_1->float_4 = S2_3;
    r3_1->float_8 = S3_3;
    r3_1->float_c = S4_3;
    guest::cpu()->s[1] = S1_1;
    Color4f__lerp(frame.at(0).addr(), r3_1.addr(), r0_1.addr());
    transform->word_4 = frame->word_0;
    transform->word_8 = frame->word_4;
    transform->word_c = frame->word_8;
    u32 r0_3 = frame->word_c;
    transform->word_10 = r0_3;
    return r0_3;
}

}  // namespace d_001c23b0
GUEST_EXPORT_FRAMED(0x001c23b0, d_001c23b0::Transform__compose, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c2764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a light's base: a framework process with no light yet.
namespace d_001c2764 {

inline constexpr u32 vtable_BsLightBase = 0x008eb7fcu;
inline constexpr guest::Function<0x00521a8c, u32(u32)> construct_process;

u32 BsLightBase__BsLightBase(gptr<BsLightBase> bs_light_base) {
    construct_process(bs_light_base.addr());
    bs_light_base->word_14 = 0;
    bs_light_base->vtable = vtable_BsLightBase;
    return bs_light_base.addr();
}

}  // namespace d_001c2764
GUEST_EXPORT_FRAMED(0x001c2764, d_001c2764::BsLightBase__BsLightBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c4bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// ORs `bits` into the 16-bit cell (x, y), keeping only its low 4 bits.
namespace d_001c4bc8 {

struct __attribute__((packed)) Array {
    u32 word_0;
};
GUEST_OFFSET(Array, word_0, 0x0);

struct __attribute__((packed)) Local_001c4bc8_r0_2 {
    u16 half_0;
};
GUEST_OFFSET(Local_001c4bc8_r0_2, half_0, 0x0);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> Buffer__read_bytes;

void set_cell_high_bits(gptr<Array> array, u32 x, u32 r2_unused, u32 bits) {
    u32 r0_1 = Buffer__read_bytes(array.addr(), x, guest::cpu()->r[2], bits);
    gptr<Local_001c4bc8_r0_2> r0_2 = gptr<Local_001c4bc8_r0_2>(array->word_0 + (r0_1 << 1));
    u32 r1_1 = u32(r0_2->half_0) & 0xfu | bits;
    r0_2->half_0 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001c4bc8
GUEST_EXPORT_FRAMED(0x001c4bc8, d_001c4bc8::set_cell_high_bits, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c4bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes `value` to the 16-bit cell (x, y) of the array.
namespace d_001c4bf4 {

struct __attribute__((packed)) Array {
    u32 word_0;
};
GUEST_OFFSET(Array, word_0, 0x0);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> Buffer__read_bytes;

void set_u16_cell(gptr<Array> array, u32 x, u32 r2_unused, u32 value) {
    u32 index = Buffer__read_bytes(array.addr(), x, guest::cpu()->r[2], value);
    u32 r1_1 = array->word_0;
    *gptr<u16>(r1_1 + (index << 1)) = u16(value);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001c4bf4
GUEST_EXPORT_FRAMED(0x001c4bf4, d_001c4bf4::set_u16_cell, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c4c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005bf518.
namespace d_001c4c14 {

inline constexpr guest::Function<0x005bf518, u32(u32, u32)> TextureView__from_resource;

void TextureView__from_resource_wrapper(u32 r0_unused, u32 r1) {
    TextureView__from_resource(guest::cpu()->r[0], r1);
}

}  // namespace d_001c4c14
GUEST_EXPORT_FRAMED(0x001c4c14, d_001c4c14::TextureView__from_resource_wrapper, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c50e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Centers the window on its pane (screen 320 x 240) and stores its size; marks it placed.
namespace d_001c50e0 {

struct __attribute__((packed)) Window {
    u8 unknown_0[0x164];  // (not used here)
    u8 byte_164;
    u8 unknown_165[0x3];  // (not used here)
    float float_168;
    float float_16c;
    float float_170;
    float float_174;
    u8 unknown_178[0xa0];  // (not used here)
    u32 word_218;
};
GUEST_OFFSET(Window, byte_164, 0x164);
GUEST_OFFSET(Window, float_168, 0x168);
GUEST_OFFSET(Window, float_16c, 0x16c);
GUEST_OFFSET(Window, float_170, 0x170);
GUEST_OFFSET(Window, float_174, 0x174);
GUEST_OFFSET(Window, word_218, 0x218);

struct __attribute__((packed)) Local_001c50e0_r1_2 {
    u8 unknown_0[0xc];  // (not used here)
    float float_c;
    u8 unknown_10[0xc];  // (not used here)
    float float_1c;
};
GUEST_OFFSET(Local_001c50e0_r1_2, float_c, 0xc);
GUEST_OFFSET(Local_001c50e0_r1_2, float_1c, 0x1c);

struct __attribute__((packed)) Local_001c50e0_r2_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001c50e0_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_001c50e0_r2_1, float_4, 0x4);


u32 Window__center_on_pane(gptr<Window> window) {
    u32 r1_1 = window->word_218;
    float S4_1 = 0.5f;
    float S5_1 = 160.0f;
    gptr<Local_001c50e0_r2_1> r2_1 = gptr<Local_001c50e0_r2_1>(r1_1 + 0x48u);
    gptr<Local_001c50e0_r1_2> r1_2 = gptr<Local_001c50e0_r1_2>(r1_1 + 0x80u);
    float S2_1 = r2_1->float_0;
    float S3_1 = r2_1->float_4;
    float S6_1 = 120.0f;
    float S0_1 = r1_2->float_c + S2_1 * S4_1;
    float S1_1 = r1_2->float_1c - S3_1 * S4_1;
    window->byte_164 = 1;
    float S4_2 = S5_1 - S0_1;
    float S0_2 = S1_1 + S6_1;
    window->float_168 = S4_2;
    window->float_16c = S0_2;
    window->float_170 = S2_1;
    window->float_174 = S3_1;
    guest::cpu()->r[1] = r1_2.addr();
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return window.addr() + 0x170u;
}

}  // namespace d_001c50e0
GUEST_EXPORT(0x001c50e0, d_001c50e0::Window__center_on_pane);

// f_001c53b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Draws a catalog's layout on the lower screen.
namespace d_001c53b8 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

u32 CatalogBase__draw(u32 catalog_base, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = 0;
    u32 r0_3 = read_global_975c20(Layout__virtual_3(catalog_base + 0x2cu, r1, r2, guest::cpu()->r[3]));
    frame.release();
    return LayoutRenderer__draw_on_screen(r0_3, catalog_base + 0x2cu, 1u);
}

}  // namespace d_001c53b8
GUEST_EXPORT(0x001c53b8, d_001c53b8::CatalogBase__draw);

// f_001c53dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the state with the handler pair at 0x87a024.
namespace d_001c53dc {

inline guest::global<u32, 0x0087a024> global_0087a024;
inline guest::global<u32, 0x0087a028> global_0087a028;
inline constexpr guest::Function<0x00816b18, u32(u32, u32, u32)> LayoutAnimator__play_i;

u32 start_state_87a024() {
    LayoutAnimator__play_i(guest::cpu()->r[0], *global_0087a024, *global_0087a028);
    return guest::cpu()->r[0];
}

}  // namespace d_001c53dc
GUEST_EXPORT_FRAMED(0x001c53dc, d_001c53dc::start_state_87a024, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c551c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the state with the handler pair at 0x87a02c.
namespace d_001c551c {

inline guest::global<u32, 0x0087a02c> global_0087a02c;
inline guest::global<u32, 0x0087a030> global_0087a030;
inline constexpr guest::Function<0x00816b18, u32(u32, u32, u32)> LayoutAnimator__play_i;

u32 start_state_87a02c() {
    LayoutAnimator__play_i(guest::cpu()->r[0], *global_0087a02c, *global_0087a030);
    return guest::cpu()->r[0];
}

}  // namespace d_001c551c
GUEST_EXPORT_FRAMED(0x001c551c, d_001c551c::start_state_87a02c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c55b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a catalog base: layouts, animations and a scroll bar.
namespace d_001c55b0 {

struct __attribute__((packed)) Local_001c55b0_ea_13 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001c55b0_ea_13, word_0, 0x0);
GUEST_OFFSET(Local_001c55b0_ea_13, word_4, 0x4);
GUEST_OFFSET(Local_001c55b0_ea_13, word_8, 0x8);

struct __attribute__((packed)) Local_001c55b0_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001c55b0_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_001c55b0_ea_7, word_4, 0x4);

inline constexpr u32 vtable_CatalogBase = 0x008eb984u;
inline guest::global<u32, 0x0087a044> global_0087a044;
inline guest::global<u32, 0x0087a048> global_0087a048;
inline guest::global<u32, 0x0087a04c> global_0087a04c;
inline guest::global<u32, 0x0087a050> global_0087a050;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;
inline constexpr guest::Function<0x00299b30, u32(u32, u32)> CommonScrollBar__CommonScrollBar;

u32 CatalogBase__CatalogBase(gptr<CatalogBase> catalog_base, float S0) {
    catalog_base->word_4 = 0;
    catalog_base->byte_8 = 0;
    u32 r2_1 = *global_0087a050;
    catalog_base->word_c = *global_0087a04c;
    catalog_base->word_10 = r2_1;
    catalog_base->word_14 = 0;
    catalog_base->byte_18 = 0;
    catalog_base->word_1c = 0;
    catalog_base->vtable = vtable_CatalogBase;
    catalog_base->word_20 = 0;
    catalog_base->word_24 = 0;
    catalog_base->word_28 = 0x87a0f0;
    u32 r0_3 = Layout__Layout(((catalog_base.addr() + 0x24u) + 4u) + 4u, 0x87a0f0u, r2_1, catalog_base.addr() + 0xcu) + 0x14cu;
    construct_layout_animation(r0_3);
    u32 r0_4 = r0_3 + 0x28u;
    construct_layout_animation(r0_4);
    u32 r0_5 = r0_4 + 0x28u;
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;
    construct_layout_animation(r0_6);
    *gptr<u32>(r0_6 + 0x28u) = 0;
    *gptr<u32>(r0_6 + 0x2cu) = 0;
    u32 ea_5 = r0_6 + 0x30u;
    *gptr<u32>(ea_5) = 0;
    u32 r0_9 = CommonScrollBar__CommonScrollBar(ea_5 + 4u, r0_6 - 0x1f0u) - 0x224u;
    *gptr<u8>(r0_9 + 0x9bcu) = 2;
    gptr<Local_001c55b0_ea_7> ea_7 = gptr<Local_001c55b0_ea_7>(r0_9 + 0x9c0u);
    ea_7->word_0 = ~0u;
    ea_7->word_4 = 0;
    float S0_6 = 0.0f;
    *gptr<u32>(r0_9 + 0x9c8u) = 0;
    *gptr<u32>(r0_9 + 0x9ccu) = std::bit_cast<u32>(S0_6);
    *gptr<u8>(r0_9 + 0x9d0u) = 0;
    *gptr<u8>(r0_9 + 0x9d1u) = 1;
    *gptr<u8>(r0_9 + 0x9d2u) = 0;
    *gptr<u8>(r0_9 + 0x9d3u) = 1;
    u32 r1_6 = *global_0087a044;
    u32 r2_7 = *global_0087a048;
    gptr<Local_001c55b0_ea_13> ea_13 = gptr<Local_001c55b0_ea_13>(r0_9 + 0x9d4u);
    ea_13->word_0 = r1_6;
    ea_13->word_4 = r2_7;
    ea_13->word_8 = 0;
    guest::cpu()->s[0] = S0_6;
    return r0_9;
}

}  // namespace d_001c55b0
GUEST_EXPORT_FRAMED(0x001c55b0, d_001c55b0::CatalogBase__CatalogBase, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c6748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a catalog list: its buttons, animations, layout and archive reader.
namespace d_001c6748 {

struct __attribute__((packed)) Local_001c6748_r4_2 {
    u32 vtable;
    u8 unknown_4[0x220];  // (not used here)
    u32 common_scroll_bar_vtable;
};
GUEST_OFFSET(Local_001c6748_r4_2, vtable, 0x0);
GUEST_OFFSET(Local_001c6748_r4_2, common_scroll_bar_vtable, 0x224);

inline constexpr u32 vtable_CatalogBase = 0x008eb984u;
inline constexpr u32 vtable_CatalogList = 0x008eb9f0u;
inline constexpr u32 vtable_InstCatalog_8_ = 0x008ebba0u;
inline constexpr u32 vtable_CommonScrollBar = 0x008f0888u;
inline constexpr u32 vtable_Tab_4_ = 0x008f727cu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 CatalogList__destructor(gptr<CatalogList> catalog_list) {
    catalog_list->vtable = vtable_CatalogList;
    destroy_array_elements(catalog_list.addr() + 0xa44cu, 0x3009ccu, 0x2cu, 0x21u);
    destroy_array_elements(catalog_list.addr() + 0x92c4u, 0x3009ccu, 0x2cu, 0x66u);
    destroy_array_elements(catalog_list.addr() + 0x8664u, 0x3009ccu, 0x2cu, 0x48u);
    destroy_array_elements(catalog_list.addr() + 0x7ae0u, 0x3009ccu, 0x2cu, 0x43u);
    destroy_array_elements(catalog_list.addr() + 0x6f04u, 0x1cbb00u, 0x5cu, 0x21u);
    destroy_array_elements(catalog_list.addr() + 0x4a5cu, 0x1cbb00u, 0x5cu, 0x66u);
    destroy_array_elements(catalog_list.addr() + 0x307cu, 0x1cbb00u, 0x5cu, 0x48u);
    destroy_array_elements(catalog_list.addr() + 0x1868u, 0x1cbb00u, 0x5cu, 0x43u);
    destroy_array_elements(catalog_list.addr() + 0x172cu, 0x1c81ccu, 0x1cu, 8u);
    u32 r0_10 = catalog_list.addr() + 0x1620u;
    catalog_list->tab_4_vtable = vtable_Tab_4_;
    destroy_button_action_control(r0_10, vtable_Tab_4_);
    u32 r4_1 = r0_10 - 0xb60u;
    destroy_array_elements(r0_10 - 0x380u, 0x31c92cu, 0xe0u, 4u);
    destroy_array_elements(r4_1 + 0x740u, 0x56988cu, 0x28u, 4u);
    destroy_array_elements(r4_1 + 0x6a0u, 0x56988cu, 0x28u, 4u);
    destroy_array_elements(r4_1 + 0x170u, 0x5bf744u, 0x14cu, 4u);
    u32 r0_16 = Layout__destructor(r4_1 + 0x24u);
    gptr<Local_001c6748_r4_2> r4_2 = gptr<Local_001c6748_r4_2>(r0_16 - 0xae4u);
    *gptr<u32>(r0_16 - 0xae4u) = vtable_InstCatalog_8_;
    destroy_array_elements(r0_16 - 0x104u, 0x1c81ccu, 0x1cu, 8u);
    u32 r0_18 = r4_2.addr() + 0x82cu;
    r4_2->vtable = vtable_CatalogBase;
    r4_2->common_scroll_bar_vtable = vtable_CommonScrollBar;
    destroy_button_action_control(r0_18, vtable_CommonScrollBar);
    destroy_array_elements(r0_18 - 0x1c0u, 0x2b6ef8u, 0xe0u, 2u);
    u32 r0_20 = (r0_18 - 0x608u) + 0x410u;
    destroy_animation(r0_20);
    u32 r0_21 = r0_20 - 0x28u;
    destroy_animation(r0_21);
    u32 r0_22 = r0_21 - 0x28u;
    destroy_animation(r0_22);
    u32 r0_23 = r0_22 - 0x28u;
    destroy_animation(r0_23);
    u32 r0_28 = ssys__ma__lyt__ArcResAccReader__destructor(Layout__destructor(r0_23 - 0x14cu) - 0x248u) - 0x38u;
    destroy_animation(r0_28);
    u32 r0_29 = r0_28 - 0x28u;
    destroy_animation(r0_29);
    u32 r0_30 = r0_29 - 0x28u;
    destroy_animation(r0_30);
    u32 r0_31 = r0_30 - 0x28u;
    destroy_animation(r0_31);
    return Layout__destructor(r0_31 - 0x14cu) - 0x2cu;
}

}  // namespace d_001c6748
GUEST_EXPORT_FRAMED(0x001c6748, d_001c6748::CatalogList__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c8cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Relocates the table's entries to addresses.
namespace d_001c8cd4 {

struct __attribute__((packed)) Local_001c8cd4_ea_1 {
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
};
GUEST_OFFSET(Local_001c8cd4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_28, 0x28);

struct __attribute__((packed)) Local_001c8cd4_ea_6 {
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
GUEST_OFFSET(Local_001c8cd4_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_8, 0x8);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_c, 0xc);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_10, 0x10);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_14, 0x14);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_18, 0x18);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_1c, 0x1c);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_20, 0x20);

struct __attribute__((packed)) Local_001c8cd4_r0_16 {
    u8 unknown_0[0x1e58];  // (not used here)
    u32 word_1e58;
    u32 word_1e5c;
    u8 byte_1e60;
};
GUEST_OFFSET(Local_001c8cd4_r0_16, word_1e58, 0x1e58);
GUEST_OFFSET(Local_001c8cd4_r0_16, word_1e5c, 0x1e5c);
GUEST_OFFSET(Local_001c8cd4_r0_16, byte_1e60, 0x1e60);

struct __attribute__((packed)) Local_001c8cd4_r2_6 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_001c8cd4_r2_6, byte_1, 0x1);
GUEST_OFFSET(Local_001c8cd4_r2_6, byte_2, 0x2);
GUEST_OFFSET(Local_001c8cd4_r2_6, byte_3, 0x3);
GUEST_OFFSET(Local_001c8cd4_r2_6, byte_4, 0x4);
GUEST_OFFSET(Local_001c8cd4_r2_6, byte_5, 0x5);

struct __attribute__((packed)) Local_001c8cd4_r3_7 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_001c8cd4_r3_7, byte_1, 0x1);
GUEST_OFFSET(Local_001c8cd4_r3_7, byte_2, 0x2);
GUEST_OFFSET(Local_001c8cd4_r3_7, byte_3, 0x3);
GUEST_OFFSET(Local_001c8cd4_r3_7, byte_4, 0x4);
GUEST_OFFSET(Local_001c8cd4_r3_7, byte_5, 0x5);

inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> translate_address;
inline constexpr guest::Function<0x00170514, u32(u32, u32, u32)> Balloon__setup;
inline constexpr guest::Function<0x001f9684, u32(u32, u32, u32, u32)> read_u32_0x0094f350_;
inline constexpr guest::Function<0x0034a784, u32(u32, u32, u32, u32)> VertexBuffer__bind_attribute;

struct __attribute__((packed)) RelocateTableEntriesFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x28];  // (not read or written by name)
};
GUEST_OFFSET(RelocateTableEntriesFrame, word_0, 0x0);
GUEST_OFFSET(RelocateTableEntriesFrame, word_4, 0x4);
GUEST_SIZE(RelocateTableEntriesFrame, 0x30);

void relocate_table_entries(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<RelocateTableEntriesFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 i = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 k = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_13 = 0;
    gptr<Local_001c8cd4_r2_6> r2_6 = gptr<Local_001c8cd4_r2_6>(0u);
    gptr<Local_001c8cd4_r3_7> r3_7 = gptr<Local_001c8cd4_r3_7>(0u);
    gptr<Local_001c8cd4_ea_1> ea_1 = gptr<Local_001c8cd4_ea_1>(frame.at(4).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = i;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r8;
    ea_1->word_1c = r9;
    ea_1->word_20 = k;
    ea_1->word_24 = r11;
    ea_1->word_28 = r14;
    u32 r0_2 = read_u32_0x0094f350_(r0, r1, r2, r3) + 0x24u;
    r4 = r0_2;
    Balloon__setup(frame->word_4 + 0x1e70u, r0_2, r1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    i = 0u;
    r9 = frame->word_4 + 0x27b8u;
    do {
        u32 r1_1 = i + (i << 1);
        u32 r7_1 = frame->word_4 + (r1_1 << 7);
        u32 r8_1 = r7_1 + 0x1eb8u;
        u32 r0_4 = translate_address(r8_1, r1_1, r2, r3);
        u32 r1_2 = *gptr<u32>(r4 + 4u);
        u32 r6_1 = frame->word_4 + ((i << 7) - ((i << 3) - i) << 4);
        VertexBuffer__bind_attribute(r6_1 + 0x18u, r1_2, r0_4, 0xbu);
        u32 r0_7 = translate_address(r7_1 + 0x21b8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        VertexBuffer__bind_attribute(r6_1 + 0x18u, *gptr<u32>(r4 + 8u), r0_7, 0xbu);
        u32 r0_9 = translate_address(r9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        VertexBuffer__bind_attribute(r6_1 + 0x18u, *gptr<u32>(r4 + 0x14u), r0_9, 7u);
        u32 r0_11 = translate_address(r8_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r6_2 = r6_1 + 0xf38u;
        VertexBuffer__bind_attribute(r6_2, *gptr<u32>(r4 + 4u), r0_11, 0xbu);
        u32 r0_13 = translate_address(r7_1 + 0x24b8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        VertexBuffer__bind_attribute(r6_2, *gptr<u32>(r4 + 8u), r0_13, 0xbu);
        u32 r0_14 = translate_address(r9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        VertexBuffer__bind_attribute(r6_2, *gptr<u32>(r4 + 0x14u), r0_14, 7u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    r11 = 0u;
    r0 = frame->word_4 + 0x28b8u;
    r4 = frame->word_4 + 0x28eeu;
    k = r11;
    frame->word_0 = r4;
    do {
        r7 = 0u;
        u32 j = r7;
        do {
            r1_13 = j + (k << 2);
            u32 r6_3 = r11 + r7;
            r2_6 = gptr<Local_001c8cd4_r2_6>(r6_3 + r4);
            *gptr<u8>(r4 + r6_3) = u8(r1_13);
            r2_6->byte_1 = u8(r1_13 + 1u);
            r2_6->byte_2 = u8(r1_13 + 5u);
            r2_6->byte_3 = u8(r1_13 + 5u);
            r2_6->byte_4 = u8(r1_13 + 4u);
            r3_7 = gptr<Local_001c8cd4_r3_7>(r6_3 + r0);
            r2_6->byte_5 = u8(r1_13);
            *gptr<u8>(r0 + r6_3) = u8(r1_13 + 1u);
            r3_7->byte_1 = u8(r1_13);
            r3_7->byte_2 = u8(r1_13 + 5u);
            r3_7->byte_3 = u8(r1_13 + 4u);
            j += 1u;
            r3_7->byte_4 = u8(r1_13 + 5u);
            r7 += 6u;
            r3_7->byte_5 = u8(r1_13);
            guest::preempt();
        } while (s32(j) < 3);
        k += 1u;
        r11 += 0x12u;
        guest::preempt();
    } while (s32(k) < 3);
    u32 r0_15 = translate_address(r0, r1_13, r2_6.addr(), r3_7.addr());
    gptr<Local_001c8cd4_r0_16> r0_16 = gptr<Local_001c8cd4_r0_16>(frame->word_4);
    r0_16->word_1e58 = r0_15;
    r0_16->word_1e5c = 0x36;
    r0_16->byte_1e60 = 1;
    u32 r0_18 = translate_address(frame->word_0, r0_15, r2_6.addr(), r3_7.addr());
    u32 r0_19 = frame->word_4;
    *gptr<u32>(r0_19 + 0x1e64u) = r0_18;
    *gptr<u32>(r0_19 + 0x1e68u) = 0x36;
    *gptr<u8>(r0_19 + 0x1e6cu) = 1;
    gptr<Local_001c8cd4_ea_6> ea_6 = gptr<Local_001c8cd4_ea_6>(frame.at(0xc).addr());
    u32 r4_1 = ea_6->word_0;
    u32 r5_2 = ea_6->word_4;
    u32 r6_4 = ea_6->word_8;
    u32 r7_2 = ea_6->word_c;
    u32 r8_3 = ea_6->word_10;
    u32 r9_2 = ea_6->word_14;
    u32 r10_1 = ea_6->word_18;
    u32 r11_1 = ea_6->word_1c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
}

}  // namespace d_001c8cd4
GUEST_EXPORT(0x001c8cd4, d_001c8cd4::relocate_table_entries);

// f_001c98d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the effect to the NPC's mouth (or the default point) and counts its timer down.
namespace d_001c98d8 {

struct __attribute__((packed)) NpcMouthEffect {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(NpcMouthEffect, word_44, 0x44);

struct __attribute__((packed)) Local_001c98d8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001c98d8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001c98d8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001c98d8_ea_1, word_8, 0x8);

inline guest::global<u32, 0x00ae5658> origin_x;
inline guest::global<u32, 0x00ae565c> origin_y;
inline guest::global<u32, 0x00ae5660> origin_z;
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;
inline constexpr guest::Function<0x001cb118, u32(u32, u32, u32)> Model__set_animation_frame;
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> run_if_scene_mode_flag_2;
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> Model__joint_position;
inline constexpr guest::Function<0x00718a58, u32(u32, u32, u32, u32)> NodeList__find_by_name;

struct __attribute__((packed)) NpcMouthEffectUpdateFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x44];  // (not read or written by name)
};
GUEST_OFFSET(NpcMouthEffectUpdateFrame, word_0, 0x0);
GUEST_OFFSET(NpcMouthEffectUpdateFrame, word_4, 0x4);
GUEST_OFFSET(NpcMouthEffectUpdateFrame, word_8, 0x8);
GUEST_SIZE(NpcMouthEffectUpdateFrame, 0x50);

void NpcMouthEffect__update(gptr<NpcMouthEffect> npc_mouth_effect, u32 r1) {
    guest::StackFrameOf<NpcMouthEffectUpdateFrame> frame;  // the original's stack frame
    u32 r5_1 = npc_mouth_effect->word_44;
    if (r5_1 != 0) {
        u32 r0_1 = *gptr<u32>(r5_1 + 0x68u);
        u32 r0_2 = Model__joint_position(r0_1, frame.at(0x10).addr(), *gptr<u32>(r0_1 + 0xb4u), 0u);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 by_name = NodeList__find_by_name(r5_1 + 0xb4u, frame.at(0).addr(), 0x846fa8u, 0u);
            if (by_name == 0) {
                frame->word_0 = *origin_x;
                frame->word_4 = *origin_y;
                frame->word_8 = *origin_z;
            }
            u32 r0_5 = frame.at(0).addr();
            apply_matrix(r0_5, frame.at(0x10).addr(), r0_5);
            run_if_scene_mode_flag_2(frame.at(0x40).addr(), frame.at(0).addr());
            gptr<Local_001c98d8_ea_1> ea_1 = gptr<Local_001c98d8_ea_1>(npc_mouth_effect.addr() + 0xcu);
            u32 r1_5 = ea_1->word_4;
            u32 r2_2 = ea_1->word_8;
            frame->word_0 = ea_1->word_0;
            frame->word_4 = r1_5;
            frame->word_8 = r2_2;
            Model__set_animation_frame(npc_mouth_effect.addr(), frame.at(0).addr(), *gptr<u32>(npc_mouth_effect.addr() + 0x3cu));
            r1 = guest::cpu()->r[1];
            u32 r0_6 = *gptr<u32>(npc_mouth_effect.addr() + 0x3cu);
            if (r0_6 != 0 && s32(r0_6) >= 0) {
                *gptr<u32>(npc_mouth_effect.addr() + 0x3cu) = r0_6 - 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001c98d8
GUEST_EXPORT_FRAMED(0x001c98d8, d_001c98d8::NpcMouthEffect__update, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c9f88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the pop scale animation (grows to 1.125, shrinks to 0.875, settles at 1 over 20 frames); true when done.
namespace d_001c9f88 {

struct __attribute__((packed)) PopScale {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x8];  // (not used here)
    u32 word_38;
    u8 unknown_3c[0x4];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(PopScale, word_24, 0x24);
GUEST_OFFSET(PopScale, word_28, 0x28);
GUEST_OFFSET(PopScale, word_2c, 0x2c);
GUEST_OFFSET(PopScale, word_38, 0x38);
GUEST_OFFSET(PopScale, word_40, 0x40);


u32 PopScale__update(gptr<PopScale> pop_scale, float S0, float S1) {
    u32 r1_1 = pop_scale->word_38;
    if (s32(r1_1) < 0) {
        pop_scale->word_38 = r1_1 + 1u;
        guest::cpu()->r[1] = r1_1 + 1u;
        return 0u;
    }
    float S0_1 = 1.125f;
    if (s32(r1_1) <= 0xe) {
        float S1_1 = float(s32(r1_1)) * 0.071428575f;
        float S0_2 = 0.0f + std::bit_cast<float>(pop_scale->word_40) * S0_1 * S1_1;
        pop_scale->word_24 = std::bit_cast<u32>(S0_2);
        pop_scale->word_28 = std::bit_cast<u32>(S0_2);
        pop_scale->word_2c = std::bit_cast<u32>(S0_2);
        pop_scale->word_38 = r1_1 + 1u;
        guest::cpu()->r[1] = r1_1 + 1u;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    float S1_2 = 0.33333334f;
    float S3_1 = 0.875f;
    if (s32(r1_1) <= 0x11) {
        float S1_3 = (float(s32(r1_1)) - 14.0f) * S1_2;
        float S2_1 = std::bit_cast<float>(pop_scale->word_40);
        float S0_3 = S2_1 * S0_1;
        float S0_4 = S0_3 + (S2_1 * S3_1 - S0_3) * S1_3;
        pop_scale->word_24 = std::bit_cast<u32>(S0_4);
        pop_scale->word_28 = std::bit_cast<u32>(S0_4);
        pop_scale->word_2c = std::bit_cast<u32>(S0_4);
        pop_scale->word_38 = r1_1 + 1u;
        guest::cpu()->r[1] = r1_1 + 1u;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_3;
        return 0u;
    }
    if (s32(r1_1) <= 0x14) {
        float S2_2 = std::bit_cast<float>(pop_scale->word_40);
        float S1_4 = (float(s32(r1_1)) - 17.0f) * S1_2;
        float S0_5 = S2_2 * S3_1;
        float S0_6 = S0_5 + (S2_2 - S0_5) * S1_4;
        pop_scale->word_24 = std::bit_cast<u32>(S0_6);
        pop_scale->word_28 = std::bit_cast<u32>(S0_6);
        pop_scale->word_2c = std::bit_cast<u32>(S0_6);
        pop_scale->word_38 = r1_1 + 1u;
        guest::cpu()->r[1] = r1_1 + 1u;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_4;
        return 0u;
    }
    u32 r1_6 = pop_scale->word_40;
    pop_scale->word_24 = r1_6;
    pop_scale->word_28 = r1_6;
    pop_scale->word_2c = r1_6;
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_001c9f88
GUEST_EXPORT(0x001c9f88, d_001c9f88::PopScale__update);

// f_001ca2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shrinks the scale to 0 over 10 frames (after the delay); true when done.
namespace d_001ca2c0 {

struct __attribute__((packed)) ShrinkScale {
    u8 unknown_0[0x24];  // (not used here)
    float float_24;
    float float_28;
    float float_2c;
    u8 unknown_30[0x8];  // (not used here)
    u32 word_38;
    u8 unknown_3c[0x4];  // (not used here)
    float float_40;
};
GUEST_OFFSET(ShrinkScale, float_24, 0x24);
GUEST_OFFSET(ShrinkScale, float_28, 0x28);
GUEST_OFFSET(ShrinkScale, float_2c, 0x2c);
GUEST_OFFSET(ShrinkScale, word_38, 0x38);
GUEST_OFFSET(ShrinkScale, float_40, 0x40);


u32 ShrinkScale__update(gptr<ShrinkScale> shrink_scale, float S0, float S1) {
    u32 r1_1 = shrink_scale->word_38;
    if (s32(r1_1) < 0) {
        shrink_scale->word_38 = r1_1 + 1u;
        guest::cpu()->r[1] = r1_1 + 1u;
        return 0u;
    }
    if (s32(r1_1) > 9) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    float S1_1 = float(s32(r1_1)) * 0.11111111f;
    float S0_1 = shrink_scale->float_40;
    float S0_2 = S0_1 + -S0_1 * S1_1;
    shrink_scale->float_24 = S0_2;
    shrink_scale->float_28 = S0_2;
    shrink_scale->float_2c = S0_2;
    shrink_scale->word_38 = r1_1 + 1u;
    guest::cpu()->r[1] = r1_1 + 1u;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_001ca2c0
GUEST_EXPORT(0x001ca2c0, d_001ca2c0::ShrinkScale__update);

// f_001cb474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances the button's animation until its slot is done, then stops it; true when finished.
namespace d_001cb474 {

struct __attribute__((packed)) ButtonAnim {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
    u8 unknown_1a4[0x4];  // (not used here)
    u32 word_1a8;
};
GUEST_OFFSET(ButtonAnim, word_1a0, 0x1a0);
GUEST_OFFSET(ButtonAnim, word_1a8, 0x1a8);

inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569544, u32(u32)> FrameControl__advance;
inline constexpr guest::Function<0x0074fdd0, u32(u32, u32, u32, u32)> button_slot_check;

u32 ButtonAnim__finish(gptr<ButtonAnim> button_anim, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = button_anim->word_1a0;
    if (r0_1 == 0) {
        return 1u;
    }
    u32 r0_2 = button_slot_check(r0_1, r1, r2, r3);
    if (r0_2 != 0) {
        u32 r1_2 = button_anim->word_1a0;
        if (*gptr<u8>(r1_2 + 0x1cu) != 0) {
            notify_list_objects(r0_2, r1_2, button_anim->word_1a8, 0u);
            r1_2 = guest::cpu()->r[1];
        }
        button_anim->word_1a0 = 0;
        button_anim->word_1a8 = 0;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    FrameControl__advance(button_anim->word_1a0);
    Layout__virtual_3(button_anim.addr() + 4u);
    return 0u;
}

}  // namespace d_001cb474
GUEST_EXPORT_FRAMED(0x001cb474, d_001cb474::ButtonAnim__finish, 0x4010);  // pushes {r4, lr} first, as the original

// f_001cb690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Draws the amiibo photo background's layout (on the upper screen when its flag is set).
namespace d_001cb690 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

u32 AmiiboPhotoBG__draw(gptr<InOutWindow> in_out_window) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = in_out_window->byte_1ad;
    if (r0_1 != 0) {
        u32 r0_2 = read_global_975c20(r0_1);
        frame.release();
        return LayoutRenderer__draw_on_screen(r0_2, in_out_window.addr() + 4u, 0u);
    }
    u32 r0_3 = read_global_975c20(r0_1);
    frame.release();
    return LayoutRenderer__draw_on_screen(r0_3, in_out_window.addr() + 4u, 1u);
}

}  // namespace d_001cb690
GUEST_EXPORT(0x001cb690, d_001cb690::AmiiboPhotoBG__draw);

// f_001cb78c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Closes the amiibo photo background: releases its layout and shows the main window again.
namespace d_001cb78c {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x001fa354, u32(u32)> LayoutWindow__show_now;
inline constexpr guest::Function<0x006d1e64, u32(u32)> get_state_30;

u32 AmiiboPhotoBG__close(gptr<InOutWindow> in_out_window) {
    layout_at_10_virtual_8(in_out_window.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    in_out_window->byte_1ac = 0;
    u32 r0_2 = get_state_30(0u);
    LayoutWindow__show_now(*gptr<u32>(r0_2 + 0x1f4u));
    return 1u;
}

}  // namespace d_001cb78c
GUEST_EXPORT_FRAMED(0x001cb78c, d_001cb78c::AmiiboPhotoBG__close, 0x4010);  // pushes {r4, lr} first, as the original

// f_001cb7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the current animation and starts the first (0) or second (1) animation from zero.
namespace d_001cb7ec {

struct __attribute__((packed)) ButtonAnim {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
    u32 word_1a4;
    u32 word_1a8;
};
GUEST_OFFSET(ButtonAnim, word_1a0, 0x1a0);
GUEST_OFFSET(ButtonAnim, word_1a4, 0x1a4);
GUEST_OFFSET(ButtonAnim, word_1a8, 0x1a8);

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;

u32 ButtonAnim__start(gptr<ButtonAnim> button_anim, u32 r1, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_1 = button_anim->word_1a0;
    if (r1_1 != 0 && *gptr<u8>(r1_1 + 0x1cu) != 0) {
        u32 r2_1 = button_anim->word_1a8;
        notify_list_objects(button_anim.addr() + 4u, r1_1, r2_1, 0u);
        S0 = guest::cpu()->s[0];
    }
    if (r1 != 0) {
        if (r1 == 1u) {
            button_anim->word_1a8 = button_anim->word_1a4;
            button_anim->word_1a0 = button_anim.addr() + 0x178u;
        }
    } else {
        button_anim->word_1a8 = button_anim->word_1a4;
        button_anim->word_1a0 = button_anim.addr() + 0x150u;
    }
    u32 r1_2 = button_anim->word_1a0;
    u32 r2_2 = button_anim->word_1a8;
    guest::cpu()->s[0] = S0;
    notify_objects_of_list(button_anim.addr() + 4u, r1_2, r2_2, 0u);
    u32 r0_3 = button_anim->word_1a0;
    float S0_1 = 0.0f;
    u32 r1_3 = *gptr<u32>(*gptr<u32>(r0_3) + 8u);
    // virtual function 2 of r0_3
    guest::cpu()->s[0] = S0_1;
    frame.release();
    return guest::call_address<u32>(r1_3, r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001cb7ec
GUEST_EXPORT(0x001cb7ec, d_001cb7ec::ButtonAnim__start);

// f_001cb884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an in-and-out window: a layout with its in and out animations, shown.
namespace d_001cb884 {

struct __attribute__((packed)) Local_001cb884_r0_5 {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
    u32 word_1a4;
    u32 word_1a8;
    u8 byte_1ac;
    u8 byte_1ad;
};
GUEST_OFFSET(Local_001cb884_r0_5, word_1a0, 0x1a0);
GUEST_OFFSET(Local_001cb884_r0_5, word_1a4, 0x1a4);
GUEST_OFFSET(Local_001cb884_r0_5, word_1a8, 0x1a8);
GUEST_OFFSET(Local_001cb884_r0_5, byte_1ac, 0x1ac);
GUEST_OFFSET(Local_001cb884_r0_5, byte_1ad, 0x1ad);

inline constexpr u32 vtable_InOutWindow = 0x008ebb64u;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;

u32 InOutWindow__construct(gptr<InOutWindow> in_out_window, u32 r1_unused, u32 r2) {
    in_out_window->vtable = vtable_InOutWindow;
    u32 r0_3 = Layout__Layout(in_out_window.addr() + 4u, vtable_InOutWindow, r2, guest::cpu()->r[3]) + 0x14cu;
    construct_layout_animation(r0_3);
    u32 r0_4 = r0_3 + 0x28u;
    construct_layout_animation(r0_4);
    gptr<Local_001cb884_r0_5> r0_5 = gptr<Local_001cb884_r0_5>(r0_4 - 0x178u);
    r0_5->word_1a0 = 0;
    r0_5->word_1a4 = 0;
    r0_5->word_1a8 = 0;
    r0_5->byte_1ac = 0;
    r0_5->byte_1ad = 1;
    guest::cpu()->r[1] = 0u;
    return r0_5.addr();
}

}  // namespace d_001cb884
GUEST_EXPORT_FRAMED(0x001cb884, d_001cb884::InOutWindow__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_001cb8fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys an in-and-out window: its two animations and its layout.
namespace d_001cb8fc {

inline constexpr u32 vtable_InOutWindow = 0x008ebb64u;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 InOutWindow__destructor(gptr<InOutWindow> in_out_window) {
    in_out_window->vtable = vtable_InOutWindow;
    u32 r0_1 = in_out_window.addr() + 0x178u;
    destroy_animation(r0_1, vtable_InOutWindow, guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return Layout__destructor(r0_1 - 0x174u) - 4u;
}

}  // namespace d_001cb8fc
GUEST_EXPORT_FRAMED(0x001cb8fc, d_001cb8fc::InOutWindow__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_001cbb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the model on its joint's matrix with its scale and updates it.
namespace d_001cbb20 {

struct __attribute__((packed)) AttachedModel {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x30];  // (not used here)
    float float_4c;
};
GUEST_OFFSET(AttachedModel, word_18, 0x18);
GUEST_OFFSET(AttachedModel, float_4c, 0x4c);

struct __attribute__((packed)) Skeleton {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    float float_2c;
};
GUEST_OFFSET(Skeleton, float_0, 0x0);
GUEST_OFFSET(Skeleton, float_4, 0x4);
GUEST_OFFSET(Skeleton, float_8, 0x8);
GUEST_OFFSET(Skeleton, float_c, 0xc);
GUEST_OFFSET(Skeleton, float_10, 0x10);
GUEST_OFFSET(Skeleton, float_14, 0x14);
GUEST_OFFSET(Skeleton, float_18, 0x18);
GUEST_OFFSET(Skeleton, float_1c, 0x1c);
GUEST_OFFSET(Skeleton, float_20, 0x20);
GUEST_OFFSET(Skeleton, float_24, 0x24);
GUEST_OFFSET(Skeleton, float_28, 0x28);
GUEST_OFFSET(Skeleton, float_2c, 0x2c);

struct __attribute__((packed)) Local_001cbb20_r0_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_001cbb20_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_001cbb20_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_001cbb20_r0_2, float_8, 0x8);

inline constexpr guest::Function<0x0014ef20, u32(u32, u32, u32)> multiply;
inline constexpr guest::Function<0x004edd20, u32(u32)> escape__MapCloudModel__virtual_2;
inline constexpr guest::Function<0x004ee3e8, u32(u32, u32)> TransformNode__set_scale;
inline constexpr guest::Function<0x004ee4c8, u32(u32, u32)> TransformNode__update_transform;
inline constexpr guest::Function<0x00745f10, u32(u32, u32, u32, u32)> Model__find_skeleton;

struct __attribute__((packed)) AttachedModelUpdateFrame {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    float float_2c;
    u8 unknown_30[0x10];  // (not read or written by name)
};
GUEST_OFFSET(AttachedModelUpdateFrame, float_0, 0x0);
GUEST_OFFSET(AttachedModelUpdateFrame, float_4, 0x4);
GUEST_OFFSET(AttachedModelUpdateFrame, float_8, 0x8);
GUEST_OFFSET(AttachedModelUpdateFrame, float_c, 0xc);
GUEST_OFFSET(AttachedModelUpdateFrame, float_10, 0x10);
GUEST_OFFSET(AttachedModelUpdateFrame, float_14, 0x14);
GUEST_OFFSET(AttachedModelUpdateFrame, float_18, 0x18);
GUEST_OFFSET(AttachedModelUpdateFrame, float_1c, 0x1c);
GUEST_OFFSET(AttachedModelUpdateFrame, float_20, 0x20);
GUEST_OFFSET(AttachedModelUpdateFrame, float_24, 0x24);
GUEST_OFFSET(AttachedModelUpdateFrame, float_28, 0x28);
GUEST_OFFSET(AttachedModelUpdateFrame, float_2c, 0x2c);
GUEST_SIZE(AttachedModelUpdateFrame, 0x40);

u32 AttachedModel__update(gptr<AttachedModel> attached_model, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8, float S9, float S10, float S11) {
    guest::StackFrameOf<AttachedModelUpdateFrame> frame;  // the original's stack frame
    u32 r1_1 = attached_model->word_18;
    gptr<Skeleton> skeleton_2 = gptr<Skeleton>(Model__find_skeleton(r1, r1_1, r2, guest::cpu()->r[3]));
    if (skeleton_2.addr() == 0) {
        return skeleton_2.addr();
    }
    float S0_2 = skeleton_2->float_0;
    float S1_2 = skeleton_2->float_4;
    float S2_1 = skeleton_2->float_8;
    float S3_1 = skeleton_2->float_c;
    float S4_1 = skeleton_2->float_10;
    float S5_1 = skeleton_2->float_14;
    float S6_1 = skeleton_2->float_18;
    float S7_1 = skeleton_2->float_1c;
    float S8_1 = skeleton_2->float_20;
    float S9_1 = skeleton_2->float_24;
    float S10_1 = skeleton_2->float_28;
    float S11_1 = skeleton_2->float_2c;
    gptr<Local_001cbb20_r0_2> r0_2 = gptr<Local_001cbb20_r0_2>(frame.at(0x30).addr());
    frame->float_0 = S0_2;
    frame->float_4 = S1_2;
    frame->float_8 = S2_1;
    frame->float_c = S3_1;
    frame->float_10 = S4_1;
    frame->float_14 = S5_1;
    frame->float_18 = S6_1;
    frame->float_1c = S7_1;
    frame->float_20 = S8_1;
    frame->float_24 = S9_1;
    frame->float_28 = S10_1;
    frame->float_2c = S11_1;
    float S0_3 = attached_model->float_4c;
    r0_2->float_0 = S0_3;
    r0_2->float_4 = S0_3;
    r0_2->float_8 = S0_3;
    u32 r0_3 = frame.at(0).addr();
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S0_3;
    guest::cpu()->s[2] = S0_3;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    guest::cpu()->s[8] = S8_1;
    guest::cpu()->s[9] = S9_1;
    guest::cpu()->s[10] = S10_1;
    guest::cpu()->s[11] = S11_1;
    multiply(r0_3, r0_3, attached_model.addr() + 0x1cu);
    TransformNode__update_transform(attached_model.addr(), frame.at(0).addr());
    TransformNode__set_scale(attached_model.addr(), frame.at(0x30).addr());
    return escape__MapCloudModel__virtual_2(attached_model.addr());
}

}  // namespace d_001cbb20
GUEST_EXPORT_FRAMED(0x001cbb20, d_001cbb20::AttachedModel__update, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ccb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the human banks' tables: texture animations (twice), NPC tops, tools and a generic bank, ten
// entries each, with six names.
namespace d_001ccb14 {

inline constexpr u32 vtable_BankTable_NpcTopsBank__10u_ = 0x008f8ef8u;
inline constexpr u32 vtable_BankTable_HumanResTextureAnimBank__10u_ = 0x008f9060u;
inline constexpr u32 vtable_BankTable_Bank_10240u__1u__false__BankVramConfig_0u__0u__0u__0u__false____10u_ = 0x008f90d8u;
inline constexpr u32 vtable_BankTable_ToolBank__10u_ = 0x008f91a0u;
inline constexpr guest::Function<0x002134a0, u32(u32, u32, u32, u32)> construct_bank_table_base;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00810f00, u32(u32, u32)> construct_buffered_string_20;

u32 HumanBankTables__construct(gptr<BankTable_HumanResTextureAnimBank__10u_> the_10u, u32 r1, u32 r2, u32 r3) {
    construct_bank_table_base(the_10u.addr(), r1, r2, r3);
    the_10u->vtable = vtable_BankTable_HumanResTextureAnimBank__10u_;
    u32 r0_3 = for_each_element(the_10u.addr() + 0xcu, 0x334e10u, 0x14u, 0xau) - 0xcu;
    *gptr<u16>(r0_3 + 0xd4u) = 0;
    u32 r0_4 = r0_3 + 0xd8u;
    construct_bank_table_base(r0_4, r0_3 + 0xd4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_4) = vtable_BankTable_HumanResTextureAnimBank__10u_;
    u32 r0_6 = for_each_element(r0_4 + 0xcu, 0x334e10u, 0x14u, 0xau);
    u32 r1_2 = r0_6 - 0xcu;
    *gptr<u16>(r0_6 + 0xc8u) = 0;
    u32 r0_7 = r1_2 + 0xd8u;
    construct_bank_table_base(r0_7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_7) = vtable_BankTable_NpcTopsBank__10u_;
    u32 r0_9 = for_each_element(r0_7 + 0xcu, 0x1cdbc4u, 0x260u, 0xau);
    u32 r1_3 = r0_9 - 0xcu;
    *gptr<u16>(r0_9 + 0x17c0u) = 0;
    u32 r0_10 = r1_3 + 0x17d0u;
    construct_bank_table_base(r0_10, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_10) = vtable_BankTable_ToolBank__10u_;
    u32 r0_12 = for_each_element(r0_10 + 0xcu, 0x6c32f8u, 0x8a8u, 0xau);
    u32 r1_4 = r0_12 - 0xcu;
    *gptr<u16>(r0_12 + 0x5690u) = 0;
    u32 r0_13 = r1_4 + 0x56a0u;
    construct_bank_table_base(r0_13, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_13) = vtable_BankTable_Bank_10240u__1u__false__BankVramConfig_0u__0u__0u__0u__false____10u_;
    u32 r0_15 = for_each_element(r0_13 + 0xcu, 0x7f3f98u, 0x14u, 0xau);
    u32 r1_5 = r0_15 - 0xcu;
    *gptr<u16>(r0_15 + 0xc8u) = 0;
    u32 r0_16 = r1_5 + 0xdcu;
    *gptr<u32>(r1_5 + 0xd8u) = 0;
    construct_buffered_string_20(r0_16, r1_5);
    u32 r0_17 = r0_16 + 0x2cu;
    construct_buffered_string_20(r0_17, guest::cpu()->r[1]);
    u32 r0_18 = r0_17 + 0x2cu;
    construct_buffered_string_20(r0_18, guest::cpu()->r[1]);
    u32 r0_19 = r0_18 + 0x2cu;
    construct_buffered_string_20(r0_19, guest::cpu()->r[1]);
    u32 r0_20 = r0_19 + 0x2cu;
    construct_buffered_string_20(r0_20, guest::cpu()->r[1]);
    u32 r0_21 = r0_20 + 0x2cu;
    construct_buffered_string_20(r0_21, guest::cpu()->r[1]);
    return r0_21 - 0x71d8u;
}

}  // namespace d_001ccb14
GUEST_EXPORT_FRAMED(0x001ccb14, d_001ccb14::HumanBankTables__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001cce78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pushes command 5 with the word.
namespace d_001cce78 {

struct __attribute__((packed)) CommandQueue {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(CommandQueue, word_8, 0x8);
GUEST_OFFSET(CommandQueue, word_c, 0xc);

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> CommandQueue__push;

struct __attribute__((packed)) CommandQueuePushWordFrame {
    u32 word_0;
};
GUEST_OFFSET(CommandQueuePushWordFrame, word_0, 0x0);
GUEST_SIZE(CommandQueuePushWordFrame, 0x4);

u32 CommandQueue__push_word(gptr<CommandQueue> command_queue, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CommandQueuePushWordFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(0x10);
    u32 r0_1 = CommandQueue__push(command_queue.addr(), 5u, r1, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = command_queue->word_8;
    u32 r1_2 = u64(s64(s32(0x66666667u)) * s32(command_queue->word_c - r0_2)) >> 0x20;
    u32 r1_3 = ~0x27u + (u32(s32(r1_2) >> 4) - u32(s32(r1_2) >> 0x1f)) * 0x28u;
    *gptr<u32>(r0_2 + r1_3 + 4u) = r2;
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_001cce78
GUEST_EXPORT_FRAMED(0x001cce78, d_001cce78::CommandQueue__push_word, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001ccee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pushes command 2 with the position.
namespace d_001ccee0 {

struct __attribute__((packed)) CommandQueue {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(CommandQueue, word_8, 0x8);
GUEST_OFFSET(CommandQueue, word_c, 0xc);

struct __attribute__((packed)) CommandQueuePushPositionArg2 {
    float float_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(CommandQueuePushPositionArg2, float_0, 0x0);
GUEST_OFFSET(CommandQueuePushPositionArg2, word_4, 0x4);
GUEST_OFFSET(CommandQueuePushPositionArg2, float_8, 0x8);

struct __attribute__((packed)) Local_001ccee0_r0_4 {
    float float_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(Local_001ccee0_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_001ccee0_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_001ccee0_r0_4, float_8, 0x8);

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> CommandQueue__push;

struct __attribute__((packed)) CommandQueuePushPositionFrame {
    u32 word_0;
};
GUEST_OFFSET(CommandQueuePushPositionFrame, word_0, 0x0);
GUEST_SIZE(CommandQueuePushPositionFrame, 0x4);

u32 CommandQueue__push_position(gptr<CommandQueue> command_queue, u32 r1, gptr<CommandQueuePushPositionArg2> arg2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<CommandQueuePushPositionFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(0x10);
    u32 r0_1 = CommandQueue__push(command_queue.addr(), 2u, r1, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = command_queue->word_8;
    float S1_2 = arg2->float_0;
    float S0_2 = arg2->float_8;
    u32 r1_2 = u64(s64(s32(0x66666667u)) * s32(command_queue->word_c - r0_2)) >> 0x20;
    u32 r0_3 = r0_2 + (~0x27u + (u32(s32(r1_2) >> 4) - u32(s32(r1_2) >> 0x1f)) * 0x28u);
    u32 r1_3 = arg2->word_4;
    gptr<Local_001ccee0_r0_4> r0_4 = gptr<Local_001ccee0_r0_4>(r0_3 + 0x10u);
    r0_4->float_0 = S1_2;
    r0_4->word_4 = r1_3;
    r0_4->float_8 = S0_2;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_001ccee0
GUEST_EXPORT_FRAMED(0x001ccee0, d_001ccee0::CommandQueue__push_position, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001cd538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pushes command 4 with the two halves.
namespace d_001cd538 {

struct __attribute__((packed)) CommandQueue {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(CommandQueue, word_8, 0x8);
GUEST_OFFSET(CommandQueue, word_c, 0xc);

inline guest::global<u16, 0x00868474> command_queue_vtable;
inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> CommandQueue__push;

struct __attribute__((packed)) CommandQueuePushTwoHalvesFrame {
    u32 word_0;
};
GUEST_OFFSET(CommandQueuePushTwoHalvesFrame, word_0, 0x0);
GUEST_SIZE(CommandQueuePushTwoHalvesFrame, 0x4);

u32 CommandQueue__push_two_halves(gptr<CommandQueue> command_queue, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CommandQueuePushTwoHalvesFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = u32(s16(*command_queue_vtable));
    u32 r3_1 = s16(*command_queue_vtable);
    u32 r0_1 = CommandQueue__push(command_queue.addr(), 4u, r1, r3_1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r2_1 = command_queue->word_8;
        u32 r1_2 = ~0x27u;
        u32 r3_2 = u64(s64(s32(0x66666667u)) * s32(command_queue->word_c - r2_1)) >> 0x20;
        u32 r3_3 = u32(s32(r3_2) >> 4) - u32(s32(r3_2) >> 0x1f);
        *gptr<u16>(r2_1 + (r1_2 + (r3_3 + (r3_3 << 2) << 3)) + 0x20u) = u16(r2);
        u32 r2_2 = command_queue->word_8;
        u32 r3_4 = u64(s64(s32(0x66666667u)) * s32(command_queue->word_c - r2_2)) >> 0x20;
        u32 r3_5 = u32(s32(r3_4) >> 4) - u32(s32(r3_4) >> 0x1f);
        *gptr<u16>(r2_2 + (r1_2 + (r3_5 + (r3_5 << 2) << 3)) + 0x1eu) = u16(r3);
        u32 r2_3 = command_queue->word_8;
        u32 r0_2 = u64(s64(s32(0x66666667u)) * s32(command_queue->word_c - r2_3)) >> 0x20;
        u32 r0_3 = u32(s32(r0_2) >> 4) - u32(s32(r0_2) >> 0x1f);
        r1_1 = 0u;
        *gptr<u16>((r1_2 + (r0_3 + (r0_3 << 2) << 3) + r2_3) + 0x1cu) = u16(r1_1);
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001cd538
GUEST_EXPORT_FRAMED(0x001cd538, d_001cd538::CommandQueue__push_two_halves, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001cd668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pushes command 0 for the target.
namespace d_001cd668 {

inline guest::global<u16, 0x00868474> command_queue_vtable;
inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> CommandQueue__push;

struct __attribute__((packed)) CommandQueuePushKind0Frame {
    u32 word_0;
};
GUEST_OFFSET(CommandQueuePushKind0Frame, word_0, 0x0);
GUEST_SIZE(CommandQueuePushKind0Frame, 0x4);

u32 CommandQueue__push_kind_0(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<CommandQueuePushKind0Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = u32(s16(*command_queue_vtable));
    u32 r3_1 = s16(*command_queue_vtable);
    CommandQueue__push(guest::cpu()->r[0], 0u, r1, r3_1);
    return guest::cpu()->r[0];
}

}  // namespace d_001cd668
GUEST_EXPORT_FRAMED(0x001cd668, d_001cd668::CommandQueue__push_kind_0, 0x4000);  // pushes {lr} first, as the original

// f_001cd690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pushes command 1 for the target.
namespace d_001cd690 {

inline guest::global<u16, 0x00868474> command_queue_vtable;
inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> CommandQueue__push;

struct __attribute__((packed)) CommandQueuePushKind1Frame {
    u32 word_0;
};
GUEST_OFFSET(CommandQueuePushKind1Frame, word_0, 0x0);
GUEST_SIZE(CommandQueuePushKind1Frame, 0x4);

u32 CommandQueue__push_kind_1(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<CommandQueuePushKind1Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = u32(s16(*command_queue_vtable));
    u32 r3_1 = s16(*command_queue_vtable);
    CommandQueue__push(guest::cpu()->r[0], 1u, r1, r3_1);
    return guest::cpu()->r[0];
}

}  // namespace d_001cd690
GUEST_EXPORT_FRAMED(0x001cd690, d_001cd690::CommandQueue__push_kind_1, 0x4000);  // pushes {lr} first, as the original

// f_001cd6b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pushes command 3 with the byte.
namespace d_001cd6b8 {

struct __attribute__((packed)) CommandQueue {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(CommandQueue, word_8, 0x8);
GUEST_OFFSET(CommandQueue, word_c, 0xc);

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> CommandQueue__push;

struct __attribute__((packed)) CommandQueuePushByteFrame {
    u32 word_0;
};
GUEST_OFFSET(CommandQueuePushByteFrame, word_0, 0x0);
GUEST_SIZE(CommandQueuePushByteFrame, 0x4);

u32 CommandQueue__push_byte(gptr<CommandQueue> command_queue, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CommandQueuePushByteFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(0x10);
    u32 r0_1 = CommandQueue__push(command_queue.addr(), 3u, r1, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r2_1 = command_queue->word_8;
    u32 r1_2 = ~0x27u;
    u32 r3_1 = u64(s64(s32(0x66666667u)) * s32(command_queue->word_c - r2_1)) >> 0x20;
    u32 r3_2 = u32(s32(r3_1) >> 4) - u32(s32(r3_1) >> 0x1f);
    *gptr<u8>(r2_1 + (r1_2 + (r3_2 + (r3_2 << 2) << 3)) + 2u) = u8(r2);
    u32 r2_2 = command_queue->word_8;
    u32 r0_2 = u64(s64(s32(0x66666667u)) * s32(command_queue->word_c - r2_2)) >> 0x20;
    u32 r0_3 = u32(s32(r0_2) >> 4) - u32(s32(r0_2) >> 0x1f);
    *gptr<u16>((r1_2 + (r0_3 + (r0_3 << 2) << 3) + r2_2) + 0x1cu) = 0;
    guest::cpu()->r[1] = 0u;
    return 1u;
}

}  // namespace d_001cd6b8
GUEST_EXPORT_FRAMED(0x001cd6b8, d_001cd6b8::CommandQueue__push_byte, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001cd744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Appends a copy of the last command unless the queue is full.
namespace d_001cd744 {

struct __attribute__((packed)) CommandQueue {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(CommandQueue, word_8, 0x8);
GUEST_OFFSET(CommandQueue, word_c, 0xc);
GUEST_OFFSET(CommandQueue, word_10, 0x10);

struct __attribute__((packed)) Local_001cd744_r1_3 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u16 half_22;
    u16 half_24;
};
GUEST_OFFSET(Local_001cd744_r1_3, byte_0, 0x0);
GUEST_OFFSET(Local_001cd744_r1_3, byte_1, 0x1);
GUEST_OFFSET(Local_001cd744_r1_3, byte_2, 0x2);
GUEST_OFFSET(Local_001cd744_r1_3, word_4, 0x4);
GUEST_OFFSET(Local_001cd744_r1_3, word_8, 0x8);
GUEST_OFFSET(Local_001cd744_r1_3, word_c, 0xc);
GUEST_OFFSET(Local_001cd744_r1_3, word_10, 0x10);
GUEST_OFFSET(Local_001cd744_r1_3, word_14, 0x14);
GUEST_OFFSET(Local_001cd744_r1_3, word_18, 0x18);
GUEST_OFFSET(Local_001cd744_r1_3, half_1c, 0x1c);
GUEST_OFFSET(Local_001cd744_r1_3, half_1e, 0x1e);
GUEST_OFFSET(Local_001cd744_r1_3, half_20, 0x20);
GUEST_OFFSET(Local_001cd744_r1_3, half_22, 0x22);
GUEST_OFFSET(Local_001cd744_r1_3, half_24, 0x24);

struct __attribute__((packed)) Local_001cd744_r2_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u16 half_22;
    u16 half_24;
};
GUEST_OFFSET(Local_001cd744_r2_1, byte_0, 0x0);
GUEST_OFFSET(Local_001cd744_r2_1, byte_1, 0x1);
GUEST_OFFSET(Local_001cd744_r2_1, byte_2, 0x2);
GUEST_OFFSET(Local_001cd744_r2_1, word_4, 0x4);
GUEST_OFFSET(Local_001cd744_r2_1, word_8, 0x8);
GUEST_OFFSET(Local_001cd744_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_001cd744_r2_1, word_10, 0x10);
GUEST_OFFSET(Local_001cd744_r2_1, word_14, 0x14);
GUEST_OFFSET(Local_001cd744_r2_1, word_18, 0x18);
GUEST_OFFSET(Local_001cd744_r2_1, half_1c, 0x1c);
GUEST_OFFSET(Local_001cd744_r2_1, half_1e, 0x1e);
GUEST_OFFSET(Local_001cd744_r2_1, half_20, 0x20);
GUEST_OFFSET(Local_001cd744_r2_1, half_22, 0x22);
GUEST_OFFSET(Local_001cd744_r2_1, half_24, 0x24);


void CommandQueue__duplicate_last(gptr<CommandQueue> command_queue) {
    u32 r3_1 = command_queue->word_8;
    gptr<Local_001cd744_r2_1> r2_1 = gptr<Local_001cd744_r2_1>(command_queue->word_c);
    u32 r1_1 = u64(s64(s32(0x66666667u)) * s32(r2_1.addr() - r3_1)) >> 0x20;
    u32 r1_2 = u32(s32(r1_1) >> 4) - u32(s32(r1_1) >> 0x1f);
    if (r1_2 == command_queue->word_10) {
        return;
    }
    gptr<Local_001cd744_r1_3> r1_3 = gptr<Local_001cd744_r1_3>(~0x27u + (r1_2 + (r1_2 << 2) << 3) + r3_1);
    if (r2_1.addr() == 0) {
        command_queue->word_c = command_queue->word_c + 0x28u;
        return;
    }
    r2_1->byte_0 = r1_3->byte_0;
    r2_1->byte_1 = r1_3->byte_1;
    r2_1->byte_2 = r1_3->byte_2;
    r2_1->word_4 = r1_3->word_4;
    r2_1->word_8 = r1_3->word_8;
    r2_1->word_c = r1_3->word_c;
    r2_1->word_10 = r1_3->word_10;
    r2_1->word_14 = r1_3->word_14;
    r2_1->word_18 = r1_3->word_18;
    r2_1->half_1c = r1_3->half_1c;
    r2_1->half_1e = r1_3->half_1e;
    r2_1->half_20 = r1_3->half_20;
    r2_1->half_22 = r1_3->half_22;
    r2_1->half_24 = r1_3->half_24;
    command_queue->word_c = command_queue->word_c + 0x28u;
}

}  // namespace d_001cd744
GUEST_EXPORT_FRAMED(0x001cd744, d_001cd744::CommandQueue__duplicate_last, 0x10);  // pushes {r4} first, as the original

// f_001cd810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the queue's target (+4).
namespace d_001cd810 {

struct __attribute__((packed)) CommandQueue {
    u8 unknown_0[0x4];  // (not used here)
    u32 ac_npc;
};
GUEST_OFFSET(CommandQueue, ac_npc, 0x4);


void CommandQueue__set_target(gptr<CommandQueue> command_queue, u32 ac_npc) {
    command_queue->ac_npc = ac_npc;
}

}  // namespace d_001cd810
GUEST_EXPORT(0x001cd810, d_001cd810::CommandQueue__set_target);

// f_001cd81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Syncs the target's model, then calls the handler of the last command's kind (member table at 0x881128).
namespace d_001cd81c {

struct __attribute__((packed)) CommandQueue {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(CommandQueue, word_4, 0x4);
GUEST_OFFSET(CommandQueue, word_8, 0x8);
GUEST_OFFSET(CommandQueue, word_c, 0xc);

struct __attribute__((packed)) Local_001cd81c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001cd81c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001cd81c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001cd81c_r1_1 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
    u8 unknown_6c[0x7bc];  // (not used here)
    u32 word_828;
};
GUEST_OFFSET(Local_001cd81c_r1_1, word_68, 0x68);
GUEST_OFFSET(Local_001cd81c_r1_1, word_828, 0x828);


void CommandQueue__run_last(gptr<CommandQueue> command_queue) {
    gptr<Local_001cd81c_r1_1> r1_1 = gptr<Local_001cd81c_r1_1>(command_queue->word_4);
    u32 r3_1 = ~0x27u;
    *gptr<u32>(r1_1->word_68 + 0x58u) = r1_1->word_828;
    u32 r1_2 = command_queue->word_8;
    u32 r2_1 = u64(s64(s32(0x66666667u)) * s32(command_queue->word_c - r1_2)) >> 0x20;
    gptr<Local_001cd81c_ea_1> ea_1 = gptr<Local_001cd81c_ea_1>((u32(*gptr<u8>(r3_1 + (u32(s32(r2_1) >> 4) - u32(s32(r2_1) >> 0x1f)) * 0x28u + r1_2)) << 3) + 0x881128u);
    u32 r1_3 = ea_1->word_0;
    u32 r2_2 = ea_1->word_4;
    u32 r0_1 = command_queue.addr() + u32(s32(r2_2) >> 1);
    if ((r2_2 & 1u) == 0) {
        guest::call_address<u32>(r1_3, r0_1, r1_3, r2_2, r3_1);
        return;
    }
    u32 r2_3 = *gptr<u32>(r0_1);
    u32 r1_4 = *gptr<u32>(r2_3 + r1_3);
    guest::call_address<u32>(r1_4, r0_1, r1_4, r2_3, r3_1);
}

}  // namespace d_001cd81c
GUEST_EXPORT(0x001cd81c, d_001cd81c::CommandQueue__run_last);

// f_001cd888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an NPC head control: no target, not turning.
namespace d_001cd888 {

struct __attribute__((packed)) Local_001cd888_r1_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    float float_10;
    float float_14;
    float float_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u16 half_22;
    u16 half_24;
};
GUEST_OFFSET(Local_001cd888_r1_1, byte_0, 0x0);
GUEST_OFFSET(Local_001cd888_r1_1, byte_1, 0x1);
GUEST_OFFSET(Local_001cd888_r1_1, byte_2, 0x2);
GUEST_OFFSET(Local_001cd888_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_001cd888_r1_1, word_8, 0x8);
GUEST_OFFSET(Local_001cd888_r1_1, word_c, 0xc);
GUEST_OFFSET(Local_001cd888_r1_1, float_10, 0x10);
GUEST_OFFSET(Local_001cd888_r1_1, float_14, 0x14);
GUEST_OFFSET(Local_001cd888_r1_1, float_18, 0x18);
GUEST_OFFSET(Local_001cd888_r1_1, half_1c, 0x1c);
GUEST_OFFSET(Local_001cd888_r1_1, half_1e, 0x1e);
GUEST_OFFSET(Local_001cd888_r1_1, half_20, 0x20);
GUEST_OFFSET(Local_001cd888_r1_1, half_22, 0x22);
GUEST_OFFSET(Local_001cd888_r1_1, half_24, 0x24);

inline constexpr u32 vtable_NpcHeadCtrl = 0x008ebc0cu;
inline guest::global<u16, 0x00868474> command_queue_vtable;
inline guest::global<u16, 0x00868476> global_00868476;

void NpcHeadCtrl__NpcHeadCtrl(gptr<NpcHeadCtrl> npc_head_ctrl, float S0) {
    u32 r3_1 = npc_head_ctrl.addr() + 0x14u;
    npc_head_ctrl->vtable = vtable_NpcHeadCtrl;
    npc_head_ctrl->word_4 = 0;
    npc_head_ctrl->word_8 = r3_1;
    npc_head_ctrl->word_c = r3_1;
    npc_head_ctrl->word_10 = 3;
    npc_head_ctrl->byte_8c = 0;
    gptr<Local_001cd888_r1_1> r1_1 = gptr<Local_001cd888_r1_1>(npc_head_ctrl->word_c);
    if (r1_1.addr() == 0) {
        u32 r1_2 = npc_head_ctrl->word_c + 0x28u;
        npc_head_ctrl->word_c = r1_2;
        guest::cpu()->r[1] = r1_2;
        return;
    }
    r1_1->byte_0 = 0;
    r1_1->byte_1 = 0;
    r1_1->half_1c = 0;
    r1_1->half_1e = 0x200;
    r1_1->half_20 = 0;
    r1_1->byte_2 = 4;
    r1_1->word_4 = 0;
    r1_1->word_8 = 0;
    float S0_1 = 0.0f;
    r1_1->word_c = 0;
    r1_1->float_10 = S0_1;
    r1_1->float_14 = S0_1;
    r1_1->float_18 = S0_1;
    r1_1->half_22 = *command_queue_vtable;
    r1_1->half_24 = *global_00868476;
    u32 r1_3 = npc_head_ctrl->word_c + 0x28u;
    npc_head_ctrl->word_c = r1_3;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_001cd888
GUEST_EXPORT(0x001cd888, d_001cd888::NpcHeadCtrl__NpcHeadCtrl);

// f_001cda40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Binds the cloth texture of the resource to the current model slot's cloth material.
namespace d_001cda40 {

struct __attribute__((packed)) ModelSlot {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(ModelSlot, byte_24, 0x24);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> Model__set_visible_if_any;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> ResDic__find;

struct __attribute__((packed)) ModelSlotBindClothTextureFrame {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(ModelSlotBindClothTextureFrame, word_0, 0x0);
GUEST_SIZE(ModelSlotBindClothTextureFrame, 0x20);

u32 ModelSlot__bind_cloth_texture(gptr<ModelSlot> model_slot, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ModelSlotBindClothTextureFrame> frame;  // the original's stack frame
    u32 r0 = model_slot.addr();
    u32 model = 0;
    u32 r4_1 = 0;
    frame->word_0 = r3;
    u32 r8_1 = 0u;
    u32 r2_1 = u32(model_slot->byte_24) & 1u;
    if (r2_1 >= 2u) {
        model = r0 + 0x38u;
    } else {
        r3 = r2_1 * 5u;
        model = r0 + (r3 + (r2_1 << 6) << 2) + 0x38u;
    }
    if (model != 0 && r1 != 0) {
        u32 ea_1 = *gptr<u32>(model + 8u) + 0x28u;
        u32 r2_2 = *gptr<u32>(ea_1);
        u32 r0_2 = r2_2 == 0 ? r8_1 : ea_1 + r2_2;
        if (r0_2 == 0) {
            r4_1 = 0u;
        } else {
            u32 ea_2 = r0_2 + 0x28u;
            r2_2 = *gptr<u32>(ea_2);
            r4_1 = r2_2 == 0 ? r8_1 : r2_2 + ea_2;
        }
        u32 ea_3 = r1 + 0xc0u;
        r1 = ea_3;
        u32 r0_3 = *gptr<u32>(ea_3);
        u32 r0_4 = r0_3 == 0 ? r8_1 : r0_3 + r1;
        frame->word_0 = r0_4;
        if (r0_4 != 0) {
            u32 length = string_length(0x1cdb28u, r1, r2_2, r3);
            u32 entry_2 = ResDic__find(frame.at(0).addr(), 0x1cdb28u, length);
            r1 = guest::cpu()->r[1];
            if (entry_2 != 0) {
                u32 ea_4 = entry_2 + 0xcu;
                r1 = *gptr<u32>(ea_4);
                if (r1 != 0) {
                    r8_1 = r1 + ea_4;
                }
                goto L_1cdb08;
            }
        }
        r8_1 = 0u;
L_1cdb08:;
        u32 zf_1 = r8_1 == 0;
        model = r8_1;
        if (!zf_1) {
            zf_1 = r4_1 == 0;
        }
        if (!zf_1) {
            u32 r3_2 = frame->word_0;
            frame.release();
            return Model__set_visible_if_any(model, 0x1cdb28u, r4_1, r3_2);
        }
    }
    guest::cpu()->r[1] = r1;
    return model;
}

}  // namespace d_001cda40
GUEST_EXPORT(0x001cda40, d_001cda40::ModelSlot__bind_cloth_texture);

// f_001cddc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the 2-bit field at bits 4 and 5 of +0xe.
namespace d_001cddc4 {

struct __attribute__((packed)) PackedCounts {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(PackedCounts, byte_e, 0xe);


void PackedCounts__set_bits_e_4(gptr<PackedCounts> packed_counts, u32 r1) {
    packed_counts->byte_e = u8(u32(packed_counts->byte_e) & ~0x30u | (r1 & 3u) << 4);
}

}  // namespace d_001cddc4
GUEST_EXPORT(0x001cddc4, d_001cddc4::PackedCounts__set_bits_e_4);

// f_001cde00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the low 24 bits of the word (+8) and the low byte of the half (+0xc).
namespace d_001cde00 {

struct __attribute__((packed)) PackedCounts {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u16 half_c;
};
GUEST_OFFSET(PackedCounts, word_8, 0x8);
GUEST_OFFSET(PackedCounts, half_c, 0xc);


void PackedCounts__clear_counts(gptr<PackedCounts> packed_counts) {
    u32 r1_1 = packed_counts->word_8 & 0xff000000u;
    u32 r2_1 = u32(packed_counts->half_c) & ~0xffu;
    packed_counts->word_8 = r1_1;
    packed_counts->half_c = u16(r2_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001cde00
GUEST_EXPORT(0x001cde00, d_001cde00::PackedCounts__clear_counts);

// f_001cde1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the top two bits of the word (+8).
namespace d_001cde1c {

struct __attribute__((packed)) PackedCounts {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(PackedCounts, word_8, 0x8);


void PackedCounts__clear_top_2(gptr<PackedCounts> packed_counts) {
    packed_counts->word_8 = packed_counts->word_8 & ~0xc0000000u;
}

}  // namespace d_001cde1c
GUEST_EXPORT(0x001cde1c, d_001cde1c::PackedCounts__clear_top_2);

// f_001cde2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets or clears bit 15 of the half (+0xc).
namespace d_001cde2c {

struct __attribute__((packed)) PackedCounts {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(PackedCounts, half_c, 0xc);


void PackedCounts__set_flag_15(gptr<PackedCounts> packed_counts, u32 r1) {
    u32 r1_1 = (r1 == 0 ? 0u : 0x8000u) | u32(packed_counts->half_c) & ~0x8000u;
    packed_counts->half_c = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001cde2c
GUEST_EXPORT(0x001cde2c, d_001cde2c::PackedCounts__set_flag_15);

// f_001cde9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bits 26 to 29 of the word (+8).
namespace d_001cde9c {

struct __attribute__((packed)) PackedCounts {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(PackedCounts, word_8, 0x8);


void PackedCounts__clear_bits_26_29(gptr<PackedCounts> packed_counts) {
    packed_counts->word_8 = packed_counts->word_8 & ~0x3c000000u;
}

}  // namespace d_001cde9c
GUEST_EXPORT(0x001cde9c, d_001cde9c::PackedCounts__clear_bits_26_29);

// f_001cdf18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the top two bits and bits 23 to 26 of the word (+8).
namespace d_001cdf18 {

struct __attribute__((packed)) PackedCounts {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(PackedCounts, word_8, 0x8);


void PackedCounts__clear_top_and_23_26(gptr<PackedCounts> packed_counts) {
    packed_counts->word_8 = packed_counts->word_8 & ~0xc0000000u & ~0x7800000u;
}

}  // namespace d_001cdf18
GUEST_EXPORT(0x001cdf18, d_001cdf18::PackedCounts__clear_top_and_23_26);

// f_001cdf2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the 4-bit field at bits 23 to 26 of the word (+8).
namespace d_001cdf2c {

struct __attribute__((packed)) PackedCounts {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(PackedCounts, word_8, 0x8);


void PackedCounts__set_bits_23_26(gptr<PackedCounts> packed_counts, u32 r1) {
    packed_counts->word_8 = packed_counts->word_8 & ~0x7800000u | (r1 & 0xfu) << 0x17;
}

}  // namespace d_001cdf2c
GUEST_EXPORT(0x001cdf2c, d_001cdf2c::PackedCounts__set_bits_23_26);

// f_001cdf44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Count `index`: the 14-bit total for 0 (at most 9999), else the 7-bit count `index` of the word (at most 99).
namespace d_001cdf44 {

struct __attribute__((packed)) PackedCounts {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u16 half_c;
};
GUEST_OFFSET(PackedCounts, word_8, 0x8);
GUEST_OFFSET(PackedCounts, half_c, 0xc);


u32 PackedCounts__count(gptr<PackedCounts> packed_counts, u32 r1) {
    if (r1 != 0) {
        u32 r1_1 = (r1 << 3) - 8u;
        u32 r0_1 = lsr_r(packed_counts->word_8, r1_1 & 0xff) & 0x7fu;
        if (r0_1 > 0x63u) {
            r0_1 = 0x63u;
        }
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    u32 r0_2 = u32(packed_counts->half_c) & ~0xc000u;
    if (r0_2 > 0x270fu) {
        r0_2 = 0x270fu;
    }
    guest::cpu()->r[1] = 0x270fu;
    return r0_2;
}

}  // namespace d_001cdf44
GUEST_EXPORT(0x001cdf44, d_001cdf44::PackedCounts__count);

// f_001cdf88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bits 23 to 26 of the word (+8).
namespace d_001cdf88 {

struct __attribute__((packed)) PackedCounts {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(PackedCounts, word_8, 0x8);


void PackedCounts__clear_bits_23_26(gptr<PackedCounts> packed_counts) {
    u32 r1_1 = packed_counts->word_8 & ~0x7800000u;
    packed_counts->word_8 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001cdf88
GUEST_EXPORT(0x001cdf88, d_001cdf88::PackedCounts__clear_bits_23_26);

// f_001cdf98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the low nibble of +0xe.
namespace d_001cdf98 {

struct __attribute__((packed)) PackedCounts {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(PackedCounts, byte_e, 0xe);


void PackedCounts__set_low_nibble_e(gptr<PackedCounts> packed_counts, u32 r1) {
    u32 r1_1 = r1 & 0xfu | u32(packed_counts->byte_e) & 0xf0u;
    packed_counts->byte_e = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001cdf98
GUEST_EXPORT(0x001cdf98, d_001cdf98::PackedCounts__set_low_nibble_e);

// f_001ce934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the colors of the model's cloth and legs materials from the two color tables.
namespace d_001ce934 {

struct __attribute__((packed)) ModelSlotSetClothColorsArg3 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(ModelSlotSetClothColorsArg3, byte_0, 0x0);
GUEST_OFFSET(ModelSlotSetClothColorsArg3, byte_1, 0x1);
GUEST_OFFSET(ModelSlotSetClothColorsArg3, byte_2, 0x2);

struct __attribute__((packed)) Local_001ce934_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_ea_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_14, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_14, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_ea_16 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_16, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_16, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_r5_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_r5_2, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_r5_2, word_4, 0x4);

inline constexpr guest::Function<0x0020cd9c, u32(u32, u32)> color3_of_6_colors;
inline constexpr guest::Function<0x0020cde4, u32(u32, u32, u32, u32)> color3_of_16_colors;
inline constexpr guest::Function<0x004f1648, u32(u32, u32, u32, u32)> ResModel__set_material_color;

struct __attribute__((packed)) ModelSlotSetClothColorsFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x1];  // (not read or written by name)
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 unknown_13[0x1];  // (not read or written by name)
};
GUEST_OFFSET(ModelSlotSetClothColorsFrame, word_0, 0x0);
GUEST_OFFSET(ModelSlotSetClothColorsFrame, byte_c, 0xc);
GUEST_OFFSET(ModelSlotSetClothColorsFrame, byte_d, 0xd);
GUEST_OFFSET(ModelSlotSetClothColorsFrame, byte_e, 0xe);
GUEST_OFFSET(ModelSlotSetClothColorsFrame, byte_10, 0x10);
GUEST_OFFSET(ModelSlotSetClothColorsFrame, byte_11, 0x11);
GUEST_OFFSET(ModelSlotSetClothColorsFrame, byte_12, 0x12);
GUEST_SIZE(ModelSlotSetClothColorsFrame, 0x14);

u32 ModelSlot__set_cloth_colors(u32 model_slot, u32 r1, u32 r2, gptr<ModelSlotSetClothColorsArg3> arg3) {
    guest::StackFrameOf<ModelSlotSetClothColorsFrame> frame;  // the original's stack frame
    frame->byte_c = 0xc8;
    frame->byte_10 = 0xc8;
    frame->byte_d = 0xc8;
    frame->byte_11 = 0xc8;
    frame->byte_e = 0;
    frame->byte_12 = 0;
    u32 r3_1 = u32(arg3->byte_1) << 8;
    u32 r2_1 = r3_1 & 0xff00u;
    u32 r4_1 = ((u32(arg3->byte_0) | ((0xc8u | model_slot & ~0xffu) & ~0xff00u | 0xc8u << 8 & 0xff00u) & ~0xff0000u & ~0xffu) & ~0xff00u | r2_1) & ~0xff0000u | u32(arg3->byte_2) << 0x10 & 0xff0000u;
    u32 r5_1 = *frame.at<u32>(0x28);
    color3_of_16_colors(frame.at(0xc).addr(), r1, r2_1, r3_1);
    u32 r0_3 = color3_of_6_colors(frame.at(0x10).addr(), r2);
    u32 r7_1 = ~0u;
    if ((r5_1 & 1u) != 0) {
        frame->word_0 = r4_1 >> 8u & 0xffu;
        gptr<Local_001ce934_ea_2> ea_2 = gptr<Local_001ce934_ea_2>(frame.at(4).addr());
        ea_2->word_0 = r4_1 >> 0x10u & 0xffu;
        ea_2->word_4 = r7_1;
        r0_3 = ResModel__set_material_color(model_slot, 0x1ceb5cu, 0u, r4_1 & 0xffu);
    }
    if ((r5_1 & 2u) != 0) {
        frame->word_0 = r4_1 >> 8u & 0xffu;
        gptr<Local_001ce934_ea_4> ea_4 = gptr<Local_001ce934_ea_4>(frame.at(4).addr());
        ea_4->word_0 = r4_1 >> 0x10u & 0xffu;
        ea_4->word_4 = r7_1;
        ResModel__set_material_color(model_slot, 0x1ceb60u, 0u, r4_1 & 0xffu);
        u32 r1_2 = frame->byte_d;
        u32 r0_4 = frame->byte_e;
        frame->word_0 = r1_2;
        gptr<Local_001ce934_ea_8> ea_8 = gptr<Local_001ce934_ea_8>(frame.at(4).addr());
        ea_8->word_0 = r0_4;
        ea_8->word_4 = r7_1;
        u32 r3_5 = frame->byte_c;
        r0_3 = ResModel__set_material_color(model_slot, 0x1ceb60u, 1u, r3_5);
    }
    if ((r5_1 & 4u) != 0) {
        frame->word_0 = r4_1 >> 8u & 0xffu;
        gptr<Local_001ce934_ea_10> ea_10 = gptr<Local_001ce934_ea_10>(frame.at(4).addr());
        ea_10->word_0 = r4_1 >> 0x10u & 0xffu;
        ea_10->word_4 = r7_1;
        ResModel__set_material_color(model_slot, 0x1ceb64u, 0u, r4_1 & 0xffu);
        u32 r1_3 = frame->byte_11;
        u32 r0_5 = frame->byte_12;
        frame->word_0 = r1_3;
        gptr<Local_001ce934_ea_14> ea_14 = gptr<Local_001ce934_ea_14>(frame.at(4).addr());
        ea_14->word_0 = r0_5;
        ea_14->word_4 = r7_1;
        u32 r3_7 = frame->byte_10;
        r0_3 = ResModel__set_material_color(model_slot, 0x1ceb64u, 1u, r3_7);
    }
    if ((r5_1 & 8u) != 0) {
        frame->word_0 = r4_1 >> 8u & 0xffu;
        gptr<Local_001ce934_ea_16> ea_16 = gptr<Local_001ce934_ea_16>(frame.at(4).addr());
        ea_16->word_0 = r4_1 >> 0x10u & 0xffu;
        ea_16->word_4 = r7_1;
        r0_3 = ResModel__set_material_color(model_slot, 0x1ceb68u, 0u, r4_1 & 0xffu);
    }
    if ((r5_1 & 0x10u) != 0) {
        gptr<Local_001ce934_r5_2> r5_2 = gptr<Local_001ce934_r5_2>(frame.at(4).addr());
        frame->word_0 = r4_1 >> 8u & 0xffu;
        r5_2->word_0 = r4_1 >> 0x10u & 0xffu;
        r5_2->word_4 = r7_1;
        r0_3 = ResModel__set_material_color(model_slot, 0x1ceb70u, 0u, r4_1 & 0xffu);
    }
    return r0_3;
}

}  // namespace d_001ce934
GUEST_EXPORT_FRAMED(0x001ce934, d_001ce934::ModelSlot__set_cloth_colors, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001ceb78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the player's model for their gender (+0x55ba) with the parameters.
namespace d_001ceb78 {

struct __attribute__((packed)) SetupPlayerModelArg1 {
    u8 unknown_0[0x55ba];  // (not used here)
    u8 byte_55ba;
};
GUEST_OFFSET(SetupPlayerModelArg1, byte_55ba, 0x55ba);

struct __attribute__((packed)) Local_001ceb78_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ceb78_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001ceb78_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001ceb78_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ceb78_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_001ceb78_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x001cebc0, u32(u32, u32, u32, u32)> NpcModel__set_clothes;

struct __attribute__((packed)) SetupPlayerModelFrame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(SetupPlayerModelFrame, word_0, 0x0);
GUEST_SIZE(SetupPlayerModelFrame, 0x10);

u32 setup_player_model(u32 r0_unused, gptr<SetupPlayerModelArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<SetupPlayerModelFrame> frame;  // the original's stack frame
    gptr<Local_001ceb78_ea_1> ea_1 = gptr<Local_001ceb78_ea_1>(frame.at(0x18).addr());
    u32 r2_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    frame->word_0 = r3;
    gptr<Local_001ceb78_ea_3> ea_3 = gptr<Local_001ceb78_ea_3>(frame.at(4).addr());
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r12_1;
    NpcModel__set_clothes(guest::cpu()->r[0], arg1.addr() + 4u, 1u & ~u32(arg1->byte_55ba), r2);
    return guest::cpu()->r[0];
}

}  // namespace d_001ceb78
GUEST_EXPORT_FRAMED(0x001ceb78, d_001ceb78::setup_player_model, 0x4010);  // pushes {r4, lr} first, as the original
