// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_0027041c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the record at +0x100: id -1, mode 2, flags cleared.
namespace d_0027041c {

struct __attribute__((packed)) ResetRecord100Arg0 {
    u8 unknown_0[0x100];  // (not used here)
    u32 word_100;
    u32 word_104;
    u32 word_108;
    u8 byte_10c;
    u8 unknown_10d[0x1];  // (not used here)
    u8 byte_10e;
};
GUEST_OFFSET(ResetRecord100Arg0, word_100, 0x100);
GUEST_OFFSET(ResetRecord100Arg0, word_104, 0x104);
GUEST_OFFSET(ResetRecord100Arg0, word_108, 0x108);
GUEST_OFFSET(ResetRecord100Arg0, byte_10c, 0x10c);
GUEST_OFFSET(ResetRecord100Arg0, byte_10e, 0x10e);


void reset_record_100(gptr<ResetRecord100Arg0> arg0) {
    arg0->word_108 = ~0u;
    arg0->word_100 = 0;
    arg0->word_104 = 2;
    arg0->byte_10c = 0;
    arg0->byte_10e = 0;
}

}  // namespace d_0027041c
GUEST_EXPORT(0x0027041c, d_0027041c::reset_record_100);

// f_00270550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a simple NPC model: its parts, face animations, resource loaders and skeletal animation.
namespace d_00270550 {

inline constexpr u32 vtable_HumanModel = 0x008eb174u;
inline constexpr u32 vtable_NpcModelBase = 0x008ed6acu;
inline constexpr u32 vtable_NpcModel = 0x008f8c1cu;
inline constexpr guest::Function<0x001abcd4, u32(u32, u32)> HumanModel__reset_parts;
inline constexpr guest::Function<0x00317e2c, u32(u32, u32)> g3d__ResourceLoader__destructor;
inline constexpr guest::Function<0x0031e204, u32(u32, u32)> HumanFaceAnimControl__destructor;
inline constexpr guest::Function<0x004edd6c, u32(u32, u32, u32, u32)> NpcModel__destroy;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x004ef50c, u32(u32)> g3d__GroupSkeletalAnim__destructor;

u32 NpcSimpleModel__destructor(gptr<HumanModel> human_model) {
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
    HumanModel__reset_parts(r0_1 - 0x384u, r0_1 - 0x238u);
    g3d__GroupSkeletalAnim__destructor(r0_1 - 0x2b8u);
    set_base_vtable_004edd84(r0_1 - 0x30cu);
    return r0_1 - 0x384u;
}

}  // namespace d_00270550
GUEST_EXPORT_FRAMED(0x00270550, d_00270550::NpcSimpleModel__destructor, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002706ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys an object resource: releases its object, then its heap allocator.
namespace d_002706ec {

inline constexpr u32 vtable_ObjectResource = 0x008ef578u;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> ssys__ma__HeapAllocator__destructor;

u32 ObjectResource__destructor(gptr<ObjectResource> object_resource) {
    object_resource->vtable = vtable_ObjectResource;
    if (object_resource->word_8 != 0) {
        ObjectOwner__release_object(object_resource.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    ssys__ma__HeapAllocator__destructor(object_resource.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return object_resource.addr();
}

}  // namespace d_002706ec
GUEST_EXPORT_FRAMED(0x002706ec, d_002706ec::ObjectResource__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00270ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unloads the split part at +0x14.
namespace d_00270ce0 {

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> unload_split_part;

u32 unload_split_part_14(u32 r0) {
    return unload_split_part(r0 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00270ce0
GUEST_EXPORT(0x00270ce0, d_00270ce0::unload_split_part_14);

// f_00270ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00270ce8 {

struct __attribute__((packed)) sead__FixedSafeString_64_ {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x10];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(sead__FixedSafeString_64_, word_8, 0x8);
GUEST_OFFSET(sead__FixedSafeString_64_, word_1c, 0x1c);
GUEST_OFFSET(sead__FixedSafeString_64_, word_20, 0x20);

struct __attribute__((packed)) Local_00270ce8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00270ce8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00270ce8_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_64__rec = 0x00904950u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> LoadSplitWord__start;
inline constexpr guest::Function<0x00317a88, u32(u32, u32, u32, u32)> TextRenderer__draw_string;
inline constexpr guest::Function<0x00544a20, u32(u32, u32)> PrintOutput__finish_to_buffer;
inline constexpr guest::Function<0x00544d8c, u32(u32, u32, u32)> PrintOutput__write_wide;
inline constexpr guest::Function<0x00544f18, u32(u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> construct_print_output;
inline constexpr guest::Function<0x00712c08, u32(u32, u32, u32, u32)> byte_2_below_12;

struct __attribute__((packed)) BuildPlayerFaceTexturePathFrame {
    u8 byte_0;
    u8 unknown_1[0x1f];  // (not read or written by name)
    u32 object_20_vtable;
    u32 word_24;
    u8 unknown_28[0x4];  // (not read or written by name)
    u8 byte_2c;
    u8 unknown_2d[0x6f];  // (not read or written by name)
    u32 word_9c;
    u8 unknown_a0[0x8];  // (not read or written by name)
};
GUEST_OFFSET(BuildPlayerFaceTexturePathFrame, byte_0, 0x0);
GUEST_OFFSET(BuildPlayerFaceTexturePathFrame, object_20_vtable, 0x20);
GUEST_OFFSET(BuildPlayerFaceTexturePathFrame, word_24, 0x24);
GUEST_OFFSET(BuildPlayerFaceTexturePathFrame, byte_2c, 0x2c);
GUEST_OFFSET(BuildPlayerFaceTexturePathFrame, word_9c, 0x9c);
GUEST_SIZE(BuildPlayerFaceTexturePathFrame, 0xa8);

u32 build_player_face_texture_path(gptr<sead__FixedSafeString_64_> fixed_safe_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BuildPlayerFaceTexturePathFrame> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 load_split_word = fixed_safe_string.addr() + 0x14u;
    if (fixed_safe_string->word_20 + 1u != 0 && fixed_safe_string->word_1c != 0) {
        r0_1 = 1u;
    } else {
        u32 r10_1 = fixed_safe_string->word_8;
        gptr<Local_00270ce8_ea_1> ea_1 = gptr<Local_00270ce8_ea_1>(frame.at(0x24).addr());
        ea_1->word_0 = frame.at(0x2c).addr();
        ea_1->word_4 = 0x40;
        u32 r2_1 = frame->word_24 - 1u;
        *gptr<u8>(r2_1 + 0x40u) = *empty_string;
        frame->byte_2c = *empty_string;
        frame->object_20_vtable = vtable_sead__FixedSafeString_64__rec;
        u32 r0_2 = byte_2_below_12(r1, r1, r2_1, 0x40u);
        u32 r0_3 = frame.at(0x70).addr();
        construct_print_output(r0_3, frame.at(0x20).addr());
        print_append(r0_3, 0x881bb8u);
        print_append(r0_3, r2 == 0 ? 0x881ba8u : 0x881ba4u);
        frame->word_9c = r0_2;
        if (PrintOutput__finish_to_buffer(r0_3, frame.at(0).addr()) != 0) {
            PrintOutput__write_wide(frame.at(0x9c).addr(), frame->byte_0 == 0 ? 0u : frame.at(0).addr(), *gptr<u32>(r0_3 + 4u));
        }
        print_append(r0_3, r3 == 0 ? 0x881bb4u : 0x881bb0u);
        print_finish(r0_3);
        r0_1 = LoadSplitWord__start(load_split_word, frame.at(0x20).addr(), r10_1, 0x80u);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            TextRenderer__draw_string(load_split_word, fixed_safe_string.addr() + 4u, 0u, 1u);
            r1 = guest::cpu()->r[1];
            r0_1 = 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00270ce8
GUEST_EXPORT_FRAMED(0x00270ce8, d_00270ce8::build_player_face_texture_path, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00271290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the color of the current model slot's material (from its resource file) to the slot's color pair; false without
// a model.
namespace d_00271290 {

struct __attribute__((packed)) ModelSlot {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x27f];  // (not used here)
    u32 word_2a4;
};
GUEST_OFFSET(ModelSlot, byte_24, 0x24);
GUEST_OFFSET(ModelSlot, word_2a4, 0x2a4);

struct __attribute__((packed)) Local_00271290_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00271290_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00271290_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00271290_r2_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00271290_r2_2, word_8, 0x8);
GUEST_OFFSET(Local_00271290_r2_2, word_c, 0xc);
GUEST_OFFSET(Local_00271290_r2_2, word_1c, 0x1c);

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> ModelSlot__set_cloth_colors;

struct __attribute__((packed)) ModelSlotSetColorFrame {
    u32 word_0;
};
GUEST_OFFSET(ModelSlotSetColorFrame, word_0, 0x0);
GUEST_SIZE(ModelSlotSetColorFrame, 0x4);

u32 ModelSlot__set_color(gptr<ModelSlot> model_slot, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ModelSlotSetColorFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = model_slot->word_2a4;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r3_1 = model_slot->byte_24;
    u32 r0_2 = 0u;
    u32 r2_1 = r3_1 & 1u;
    gptr<Local_00271290_r2_2> r2_2 = gptr<Local_00271290_r2_2>(r2_1 >= 2u ? model_slot.addr() + 0x6cu : model_slot.addr() + r2_1 * 0x108u + 0x6cu);
    u32 zf_1 = r2_2->word_c + 1u == 0;
    if (!zf_1) {
        r2_2 = gptr<Local_00271290_r2_2>(r2_2->word_8);
        zf_1 = r2_2.addr() == 0;
    }
    if (!zf_1) {
        zf_1 = r2_2->word_1c == 0;
    }
    if (zf_1) {
        return 0u;
    }
    u32 ea_1 = r2_2.addr() + 0x20u;
    u32 r4_1 = *gptr<u32>(ea_1);
    u32 r2_3 = r4_1 == 0 ? r0_2 : ea_1 + r4_1;
    if (r2_3 == 0) {
        r0_2 = 0u;
    } else {
        u32 ea_2 = r2_3 + 0x28u;
        u32 r4_2 = *gptr<u32>(ea_2);
        if (r4_2 != 0) {
            r0_2 = r4_2 + ea_2;
        }
    }
    frame->word_0 = 7;
    gptr<Local_00271290_ea_4> ea_4 = gptr<Local_00271290_ea_4>(model_slot.addr() + (r3_1 & 1u) * 0x14u + 0x44u);
    ModelSlot__set_cloth_colors(r0_2, ea_4->word_0, ea_4->word_4, r1);
    return 1u;
}

}  // namespace d_00271290
GUEST_EXPORT_FRAMED(0x00271290, d_00271290::ModelSlot__set_color, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00271c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the model's matrix (copied, rotated around z) and applies it.
namespace d_00271c78 {

struct __attribute__((packed)) ModelSlot {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(ModelSlot, byte_24, 0x24);

struct __attribute__((packed)) SkeletonNode {
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
GUEST_OFFSET(SkeletonNode, float_0, 0x0);
GUEST_OFFSET(SkeletonNode, float_4, 0x4);
GUEST_OFFSET(SkeletonNode, float_8, 0x8);
GUEST_OFFSET(SkeletonNode, float_c, 0xc);
GUEST_OFFSET(SkeletonNode, float_10, 0x10);
GUEST_OFFSET(SkeletonNode, float_14, 0x14);
GUEST_OFFSET(SkeletonNode, float_18, 0x18);
GUEST_OFFSET(SkeletonNode, float_1c, 0x1c);
GUEST_OFFSET(SkeletonNode, float_20, 0x20);
GUEST_OFFSET(SkeletonNode, float_24, 0x24);
GUEST_OFFSET(SkeletonNode, float_28, 0x28);
GUEST_OFFSET(SkeletonNode, float_2c, 0x2c);

struct __attribute__((packed)) Local_00271c78_r2_1 {
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
GUEST_OFFSET(Local_00271c78_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_00271c78_r2_1, float_4, 0x4);
GUEST_OFFSET(Local_00271c78_r2_1, float_8, 0x8);
GUEST_OFFSET(Local_00271c78_r2_1, float_c, 0xc);
GUEST_OFFSET(Local_00271c78_r2_1, float_10, 0x10);
GUEST_OFFSET(Local_00271c78_r2_1, float_14, 0x14);
GUEST_OFFSET(Local_00271c78_r2_1, float_18, 0x18);
GUEST_OFFSET(Local_00271c78_r2_1, float_1c, 0x1c);
GUEST_OFFSET(Local_00271c78_r2_1, float_20, 0x20);
GUEST_OFFSET(Local_00271c78_r2_1, float_24, 0x24);
GUEST_OFFSET(Local_00271c78_r2_1, float_28, 0x28);
GUEST_OFFSET(Local_00271c78_r2_1, float_2c, 0x2c);

inline constexpr guest::Function<0x0013451c, u32(u32, u32)> Matrix34__copy_from;
inline constexpr guest::Function<0x003280e0, u32(u32, u32, u32, u32)> Layout__play_named;
inline constexpr guest::Function<0x004df3e4, u32(u32, u32)> Node__copy_matrix;
inline constexpr guest::Function<0x005676b8, u32(u32, u32)> Matrix34__rotate_z;
inline constexpr guest::Function<0x00724bf8, u32(u32, u32, u32, u32)> Layout__find_skeleton_node;

u32 ModelSlot__update_matrix(gptr<ModelSlot> model_slot, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8, float S9, float S10, float S11) {
    guest::StackFrame frame(0x70);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r3_1 = u32(model_slot->byte_24) & 1u;
    u32 r3_2 = model_slot.addr() + (r3_1 * 5u + (r3_1 << 5) << 2);
    u32 res_1 = *gptr<u8>(r3_2 + 0x2a8u);
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = r3_2 + 0x2acu == 0;
        r4 = r3_2 + 0x2acu;
    }
    if (zf_1) {
        frame.release();
        return Layout__play_named(model_slot.addr() + 0x27cu, r1, r2, r3_2);
    }
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
    guest::cpu()->s[11] = S11;
    gptr<SkeletonNode> skeleton_node = gptr<SkeletonNode>(Layout__find_skeleton_node(model_slot.addr() + 0x27cu, r1, r2, 0u));
    if (skeleton_node.addr() == 0) {
        return skeleton_node.addr();
    }
    float S0_2 = skeleton_node->float_0;
    float S1_2 = skeleton_node->float_4;
    float S2_1 = skeleton_node->float_8;
    float S3_1 = skeleton_node->float_c;
    float S4_1 = skeleton_node->float_10;
    float S5_1 = skeleton_node->float_14;
    float S6_1 = skeleton_node->float_18;
    float S7_1 = skeleton_node->float_1c;
    float S8_1 = skeleton_node->float_20;
    float S9_1 = skeleton_node->float_24;
    float S10_1 = skeleton_node->float_28;
    float S11_1 = skeleton_node->float_2c;
    gptr<Local_00271c78_r2_1> r2_1 = gptr<Local_00271c78_r2_1>(frame.at(0x30).addr());
    r2_1->float_0 = S0_2;
    r2_1->float_4 = S1_2;
    r2_1->float_8 = S2_1;
    r2_1->float_c = S3_1;
    r2_1->float_10 = S4_1;
    r2_1->float_14 = S5_1;
    r2_1->float_18 = S6_1;
    r2_1->float_1c = S7_1;
    r2_1->float_20 = S8_1;
    r2_1->float_24 = S9_1;
    r2_1->float_28 = S10_1;
    r2_1->float_2c = S11_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    Matrix34__copy_from(frame.at(0).addr(), frame.at(0x30).addr());
    *frame.at<u16>(0x60) = u16(0xffffc000u);
    Matrix34__rotate_z(frame.at(0).addr(), *frame.at<u32>(0x60));
    return Node__copy_matrix(r4, frame.at(0).addr());
}

}  // namespace d_00271c78
GUEST_EXPORT(0x00271c78, d_00271c78::ModelSlot__update_matrix);

// f_00271d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scales the current slot's model uniformly when it is loaded, else updates the fallback.
namespace d_00271d0c {

struct __attribute__((packed)) ModelSlot {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(ModelSlot, byte_24, 0x24);

inline constexpr guest::Function<0x0032821c, u32(u32, u32, u32, u32)> Layout__set_frame;
inline constexpr guest::Function<0x004df2c8, u32(u32)> Color__from_floats;

u32 ModelSlot__set_uniform_scale(gptr<ModelSlot> model_slot, float S0, float S1, float S2, float S3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_1 = u32(model_slot->byte_24) & 1u;
    u32 r2_2 = model_slot.addr() + (r2_1 * 5u + (r2_1 << 5) << 2);
    u32 r3_1 = *gptr<u8>(r2_2 + 0x2a8u);
    u32 zf_1 = r3_1 == 0;
    if (!zf_1) {
        zf_1 = r2_2 + 0x2acu == 0;
        r2_2 = r2_2 + 0x2acu;
    }
    if (zf_1) {
        frame.release();
        return Layout__set_frame(model_slot.addr() + 0x27cu, guest::cpu()->r[1], r2_2, r3_1);
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S0;
    guest::cpu()->s[2] = S0;
    Color__from_floats(r2_2);
    return 1u;
}

}  // namespace d_00271d0c
GUEST_EXPORT(0x00271d0c, d_00271d0c::ModelSlot__set_uniform_scale);

// f_00271e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the three words (+0x29c) and the four floats (+0x3d0) of the model.
namespace d_00271e30 {

struct __attribute__((packed)) ModelSlot {
    u8 unknown_0[0x29c];  // (not used here)
    u32 word_29c;
    u32 word_2a0;
    u32 word_2a4;
    u8 unknown_2a8[0x128];  // (not used here)
    float float_3d0;
    float float_3d4;
    float float_3d8;
    float float_3dc;
};
GUEST_OFFSET(ModelSlot, word_29c, 0x29c);
GUEST_OFFSET(ModelSlot, word_2a0, 0x2a0);
GUEST_OFFSET(ModelSlot, word_2a4, 0x2a4);
GUEST_OFFSET(ModelSlot, float_3d0, 0x3d0);
GUEST_OFFSET(ModelSlot, float_3d4, 0x3d4);
GUEST_OFFSET(ModelSlot, float_3d8, 0x3d8);
GUEST_OFFSET(ModelSlot, float_3dc, 0x3dc);


u32 ModelSlot__set_params(gptr<ModelSlot> model_slot, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r13));
    float S1_1 = std::bit_cast<float>(*gptr<u32>(r13 + 4));
    float S2_1 = std::bit_cast<float>(*gptr<u32>(r13 + 8));
    float S3_1 = std::bit_cast<float>(*gptr<u32>(r13 + 0xc));
    model_slot->word_29c = r1;
    model_slot->word_2a0 = r2;
    model_slot->word_2a4 = r3;
    model_slot->float_3d0 = S0_1;
    model_slot->float_3d4 = S1_1;
    model_slot->float_3d8 = S2_1;
    model_slot->float_3dc = S3_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return model_slot.addr() + 0x3d0u;
}

}  // namespace d_00271e30
GUEST_EXPORT(0x00271e30, d_00271e30::ModelSlot__set_params);

// f_00272300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the color of the current model slot's material from the item's color bytes; false without an item or model.
namespace d_00272300 {

struct __attribute__((packed)) ModelSlot {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x4ab];  // (not used here)
    u32 word_4d0;
};
GUEST_OFFSET(ModelSlot, byte_24, 0x24);
GUEST_OFFSET(ModelSlot, word_4d0, 0x4d0);

struct __attribute__((packed)) Local_00272300_r0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00272300_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_00272300_r0_1, word_c, 0xc);
GUEST_OFFSET(Local_00272300_r0_1, word_1c, 0x1c);

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> ModelSlot__set_cloth_colors;
inline constexpr guest::Function<0x00712c28, u32(u32, u32, u32, u32)> byte_3_below_6;
inline constexpr guest::Function<0x00712c38, u32(u32)> byte_1_below_16;

struct __attribute__((packed)) ModelSlotSetItemColorFrame {
    u32 word_0;
};
GUEST_OFFSET(ModelSlotSetItemColorFrame, word_0, 0x0);
GUEST_SIZE(ModelSlotSetItemColorFrame, 0x4);

u32 ModelSlot__set_item_color(gptr<ModelSlot> model_slot, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ModelSlotSetItemColorFrame> frame;  // the original's stack frame
    gptr<Local_00272300_r0_1> r0_1 = gptr<Local_00272300_r0_1>(0u);
    frame->word_0 = r3;
    u32 r1_1 = model_slot->word_4d0;
    if (r1_1 != 0) {
        u32 r5_1 = 0u;
        u32 r2_1 = u32(model_slot->byte_24) & 1u;
        if (r2_1 >= 2u) {
            r0_1 = gptr<Local_00272300_r0_1>(model_slot.addr() + 0x60u);
        } else {
            r3 = r2_1 * 5u;
            r0_1 = gptr<Local_00272300_r0_1>(model_slot.addr() + (r3 + (r2_1 << 6) << 2) + 0x60u);
        }
        u32 zf_1 = r0_1->word_c + 1u == 0;
        if (!zf_1) {
            r0_1 = gptr<Local_00272300_r0_1>(r0_1->word_8);
            zf_1 = r0_1.addr() == 0;
        }
        if (!zf_1) {
            zf_1 = r0_1->word_1c == 0;
        }
        if (!zf_1) {
            u32 ea_1 = r0_1.addr() + 0x20u;
            u32 r2_2 = *gptr<u32>(ea_1);
            u32 r0_2 = r2_2 == 0 ? r5_1 : ea_1 + r2_2;
            if (r0_2 == 0) {
                r5_1 = 0u;
            } else {
                u32 ea_2 = r0_2 + 0x28u;
                r2_2 = *gptr<u32>(ea_2);
                if (r2_2 != 0) {
                    r5_1 = r2_2 + ea_2;
                }
            }
            u32 r0_3 = byte_3_below_6(r1_1, r1_1, r2_2, r3);
            u32 r0_5 = byte_1_below_16(*gptr<u32>(model_slot.addr() + 0x4d0u));
            frame->word_0 = 0x10;
            ModelSlot__set_cloth_colors(r5_1, r0_5, r0_3, r1);
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00272300
GUEST_EXPORT_FRAMED(0x00272300, d_00272300::ModelSlot__set_item_color, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002738b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to the function at 0x817cd8.
namespace d_002738b8 {

inline guest::global<u32, 0x00886d68> global_00886d68;
inline guest::global<u32, 0x00886d6c> global_00886d6c;
inline constexpr guest::Function<0x00817cd8, u32(u32, u32, u32)> LayoutAnimator__play_m;

void veneer_817cd8() {
    LayoutAnimator__play_m(guest::cpu()->r[0], *global_00886d68, *global_00886d6c);
}

}  // namespace d_002738b8
GUEST_EXPORT_FRAMED(0x002738b8, d_002738b8::veneer_817cd8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00273a9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 24 of entry `index` of the shown page (0x2b4 bytes each, +0xfa0).
namespace d_00273a9c {

struct __attribute__((packed)) LetterPage {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(LetterPage, word_2be8, 0x2be8);


u32 LetterPage__entry_virtual_24(gptr<LetterPage> letter_page, u32 r1) {
    u32 ea_1 = letter_page.addr() + (r1 - letter_page->word_2be8) * 0x2b4u + 0xfa0u;
    u32 r1_1 = *gptr<u32>(*gptr<u32>(ea_1) + 0x60u);
    // virtual function 24 of ea_1
    return guest::call_address<u32>(r1_1, ea_1, r1_1, 0xadu, guest::cpu()->r[3]);
}

}  // namespace d_00273a9c
GUEST_EXPORT(0x00273a9c, d_00273a9c::LetterPage__entry_virtual_24);

// f_00273b30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes entry `index` of the page, updating its letter from the mailbox when it has one.
namespace d_00273b30 {

struct __attribute__((packed)) LetterPage {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(LetterPage, word_2be8, 0x2be8);

inline constexpr guest::Function<0x001df3d4, u32(u32)> main_slot_entry_001df3d4;
inline constexpr guest::Function<0x002e3568, u32(u32, u32, u32, u32)> LetterEntry__release;
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> data_block_71900;
inline constexpr guest::Function<0x006f51f8, u32(u32, u32, u32, u32)> Mailbox__letter_at;

void LetterPage__refresh_entry(gptr<LetterPage> letter_page, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r3_1 = 0x2bf1u;
    u32 r2_1 = letter_page->word_2be8;
    u32 r0_1 = *gptr<u8>(r3_1 + letter_page.addr());
    u32 r5_1 = r1 - r2_1;
    if (r0_1 != 0) {
        u32 mailbox = main_slot_entry_001df3d4(data_block_71900(r0_1, r1, r2_1, r3_1));
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (mailbox != 0) {
            u32 letter_2 = Mailbox__letter_at(mailbox, r5_1, r2_1, r3_1);
            r3_1 = guest::cpu()->r[3];
            r2_1 = letter_page.addr() + r5_1 * 0x2b4u + 0xfa0u;
            r1 = letter_2;
            *gptr<u32>(r2_1 + 0x2b0u) = r1;
        }
    }
    frame.release();
    LetterEntry__release((letter_page.addr() + r5_1 * 0x2b4u) + 0xfa0u, r1, r2_1, r3_1);
    return;
}

}  // namespace d_00273b30
GUEST_EXPORT(0x00273b30, d_00273b30::LetterPage__refresh_entry);

// f_00273ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the layout at +0x26c and attaches it to the layout system.
namespace d_00273ba8 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

void update_and_attach_layout_26c(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = 0;
    u32 r0_3 = read_global_975c20(Layout__virtual_3(r0 + 0x26cu, r1, r2, guest::cpu()->r[3]));
    frame.release();
    LayoutRenderer__draw_on_screen(r0_3, r0 + 0x26cu, 1u);
    return;
}

}  // namespace d_00273ba8
GUEST_EXPORT(0x00273ba8, d_00273ba8::update_and_attach_layout_26c);

// f_0027430c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of entry `index` among the 10 shown from +0x2be8; other indices give the first.
namespace d_0027430c {

struct __attribute__((packed)) LetterPage {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(LetterPage, word_2be8, 0x2be8);


u32 LetterPage__entry_at(gptr<LetterPage> letter_page, u32 r1) {
    u32 r2_1 = letter_page->word_2be8;
    if (s32(r2_1) > s32(r1)) {
        return letter_page.addr() + 0xfa0u;
    }
    if (r2_1 + 0xau <= r1) {
        return letter_page.addr() + 0xfa0u;
    }
    return letter_page.addr() + (r1 - r2_1) * 0x2b4u + 0xfa0u;
}

}  // namespace d_0027430c
GUEST_EXPORT(0x0027430c, d_0027430c::LetterPage__entry_at);

// f_00274384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the letter window's layout archive.
namespace d_00274384 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> load_layout_archive;

u32 LetterWindow__load_layout(u32 letter_window) {
    return load_layout_archive(letter_window + 0x24u, 0x886e00u);
}

}  // namespace d_00274384
GUEST_EXPORT(0x00274384, d_00274384::LetterWindow__load_layout);

// f_00274394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at +0x1250 of entry `index` of the shown page.
namespace d_00274394 {

struct __attribute__((packed)) LetterPage {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(LetterPage, word_2be8, 0x2be8);


u32 LetterPage__entry_word_1250(gptr<LetterPage> letter_page, u32 r1) {
    u32 r1_1 = (r1 - letter_page->word_2be8) * 0xadu;
    u32 r0_1 = *gptr<u32>(letter_page.addr() + (r1_1 << 2) + 0x1250u);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00274394
GUEST_EXPORT(0x00274394, d_00274394::LetterPage__entry_word_1250);

// f_00274478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the animation at +0x430 from the NPC's distance value plus 4.
namespace d_00274478 {

inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> Animation__set_value;
inline constexpr guest::Function<0x006dce18, u32(u32, u32, u32)> BsNpcMgr__find_npc;

void set_animation_from_npc_distance(u32 r0, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (*event_npc_mode == 0xffu) {
        if (*event_npc_source != 0) {
            u32 slot_byte = player_slot_byte(4u, r1, r2, guest::cpu()->r[3]);
            u32 r2_1 = *event_npc_mode == 0xffu ? *event_npc_source : 0u;
            BsNpcMgr__find_npc(r2_1, slot_byte, r2_1);
            float S0_2 = guest::cpu()->s[0];
            u32 r1_1 = std::bit_cast<u32>(S0_2) + 0x40800000u;
            if (r1_1 != 0) {
                guest::cpu()->s[0] = S0_2;
                frame.release();
                Animation__set_value(r0 + 0x430u, r1_1);
                return;
            }
            float S0_3 = 4.0f;
            guest::cpu()->s[0] = S0_3;
            frame.release();
            Animation__set_value(r0 + 0x430u, r1_1);
            return;
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_00274478
GUEST_EXPORT(0x00274478, d_00274478::set_animation_from_npc_distance);

// f_00274500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a post drag window: an archive accessor, a layout with four animations, two buttons, ten slots and
// a letter drag icon group.
namespace d_00274500 {

struct __attribute__((packed)) Local_00274500_r0_9 {
    u32 vtable;
    u8 unknown_4[0xe0];  // (not used here)
    u32 control2_button_vtable;
};
GUEST_OFFSET(Local_00274500_r0_9, vtable, 0x0);
GUEST_OFFSET(Local_00274500_r0_9, control2_button_vtable, 0xe4);

inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_PostDragWindow = 0x008ef6e0u;
inline guest::global<u32, 0x00886d80> global_00886d80;
inline guest::global<u32, 0x00886d84> global_00886d84;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32)> construct_control_button_base;
inline constexpr guest::Function<0x002f915c, u32(u32)> LetterDragIconGroup__LetterDragIconGroup;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 PostDragWindow__PostDragWindow(gptr<PostDragWindow> post_drag_window) {
    post_drag_window->word_4 = 0;
    post_drag_window->byte_8 = 0;
    u32 r2_1 = *global_00886d84;
    post_drag_window->word_c = *global_00886d80;
    post_drag_window->word_10 = r2_1;
    post_drag_window->word_14 = 0;
    post_drag_window->byte_18 = 0;
    post_drag_window->word_1c = 0;
    post_drag_window->vtable = vtable_PostDragWindow;
    post_drag_window->word_20 = 0;
    u32 r0_5 = Layout__Layout(ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(post_drag_window.addr() + 0x24u, vtable_PostDragWindow, r2_1, post_drag_window.addr() + 0xcu) + 0x248u) + 0x14cu;
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 + 0x28u;
    construct_layout_animation(r0_8);
    gptr<Local_00274500_r0_9> r0_9 = gptr<Local_00274500_r0_9>(r0_8 + 0x28u);
    construct_control_button_base(r0_9.addr(), r0_9.addr() + 0x118u, 2u);
    r0_9->vtable = vtable_Control2Button;
    r0_9->control2_button_vtable = vtable_Control2Button_at_e4;
    u32 r0_12 = for_each_element(r0_9.addr() + 0x118u, 0x2e0994u, 0x518u, 2u) + 0xa30u;
    u32 letter_drag_icon_group = for_each_element(r0_12, 0x2e37acu, 0x2b4u, 0xau) + 0x1b08u;
    LetterDragIconGroup__LetterDragIconGroup(letter_drag_icon_group);
    u32 r0_15 = letter_drag_icon_group - 0x2aa8u;
    *gptr<u32>(r0_15 + 0x2be8u) = 0;
    *gptr<u32>(r0_15 + 0x2becu) = 0;
    *gptr<u8>(r0_15 + 0x2bf0u) = 0;
    *gptr<u8>(r0_15 + 0x2bf1u) = 0;
    guest::cpu()->r[1] = 0x2be8u;
    return r0_15;
}

}  // namespace d_00274500
GUEST_EXPORT_FRAMED(0x00274500, d_00274500::PostDragWindow__PostDragWindow, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027460c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a post drag window: its drag icon group, buttons, animations, layout and archive reader.
namespace d_0027460c {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_PostDragWindow = 0x008ef6e0u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__destructor;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 PostDragWindow__destructor(gptr<PostDragWindow> post_drag_window, u32 r1_unused, u32 r2_unused, u32 r3) {
    post_drag_window->vtable = vtable_PostDragWindow;
    post_drag_window->drag_icon_group_vtable = vtable_DragIconGroup;
    post_drag_window->drag_icon_group_vtable_2ab4 = vtable_DragIconGroup_at_c;
    u32 r0_1 = post_drag_window.addr() + 0x2bbcu;
    destroy_animation(r0_1, vtable_DragIconGroup_at_c, vtable_DragIconGroup, r3);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x78u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0xc8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0xf4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_array_elements(r0_1 - 0x1c1cu, 0x2e3854u, 0x2b4u, 0xau);
    post_drag_window->control2_button_vtable = vtable_Control2Button;
    post_drag_window->control2_button_vtable_53c = vtable_Control2Button_at_e4;
    destroy_array_elements(r0_1 - 0x264cu, 0x2e0b3cu, 0x518u, 2u);
    ControlButtonBase__destructor(r0_1 - 0x2764u);
    destroy_animation(r0_1 - 0x278cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x27b4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x27dcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x2804u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return ssys__ma__lyt__ArcResAccReader__destructor(Layout__destructor(r0_1 - 0x2950u) - 0x248u) - 0x24u;
}

}  // namespace d_0027460c
GUEST_EXPORT_FRAMED(0x0027460c, d_0027460c::PostDragWindow__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00274754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the item selection window, the item icons (unless shared) and the bag's layout archives.
namespace d_00274754 {

struct __attribute__((packed)) SantaBagWindowLoadLayoutsArg0 {
    u8 unknown_0[0x654];  // (not used here)
    u32 word_654;
    u8 unknown_658[0x264d];  // (not used here)
    u8 byte_2ca5;
};
GUEST_OFFSET(SantaBagWindowLoadLayoutsArg0, word_654, 0x654);
GUEST_OFFSET(SantaBagWindowLoadLayoutsArg0, byte_2ca5, 0x2ca5);

inline constexpr u32 santa_bag_layouts_address = 0x0094fd4cu;
inline guest::global<u32, 0x0094fd4c> santa_bag_layouts;
inline constexpr guest::Function<0x0031ec78, u32(u32, u32, u32, u32)> ItemSelectWindow__load_layout_2;
inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> load_layout_archive;

u32 SantaBagWindow__load_layouts(gptr<SantaBagWindowLoadLayoutsArg0> santa_bag_window, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    ItemSelectWindow__load_layout_2(santa_bag_window.addr() + 0x2788u, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = *santa_bag_layouts;
    if (r1_1 == 0) {
        *gptr<u8>(santa_bag_window.addr() + 0x2ca5u) = 0;
        load_layout_archive(santa_bag_window.addr() + 0x40cu, 0x2747e4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    } else {
        santa_bag_window->byte_2ca5 = 1;
        santa_bag_window->word_654 = r1_1;
    }
    frame.release();
    return load_layout_archive(santa_bag_window.addr() + 0x170u, 0x2747c4u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00274754
GUEST_EXPORT(0x00274754, d_00274754::SantaBagWindow__load_layouts);

// f_0027480c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets or clears bit 3 of the flags (+0xd4) of the 10 models (0x348 bytes each, +0x8e0).
namespace d_0027480c {

struct __attribute__((packed)) Local_0027480c_r3_2 {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Local_0027480c_r3_2, word_d4, 0xd4);


void set_flag_8_of_10_models(u32 r0, u32 r1) {
    u32 i = 0u;
    do {
        u32 r3_1 = i * 0xfu;
        i += 1u;
        gptr<Local_0027480c_r3_2> r3_2 = gptr<Local_0027480c_r3_2>(r0 + r3_1 * 0x38u + 0x8e0u);
        u32 r12_1 = r3_2->word_d4;
        r3_2->word_d4 = r1 == 0 ? r12_1 & ~8u : r12_1 | 8u;
        guest::preempt();
    } while (s32(i) < 0xa);
}

}  // namespace d_0027480c
GUEST_EXPORT(0x0027480c, d_0027480c::set_flag_8_of_10_models);

// f_00275798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the bag window's layouts, its 10 models' layouts and its message window.
namespace d_00275798 {

struct __attribute__((packed)) SantaBagWindowReleaseArg0 {
    u8 unknown_0[0x2ca5];  // (not used here)
    u8 byte_2ca5;
};
GUEST_OFFSET(SantaBagWindowReleaseArg0, byte_2ca5, 0x2ca5);

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x002f6d18, u32(u32)> leave_menu_state;
inline constexpr guest::Function<0x0031eb20, u32(u32, u32, u32, u32)> MessageWindow__release;

void SantaBagWindow__release(gptr<SantaBagWindowReleaseArg0> santa_bag_window) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = santa_bag_window.addr();
    u32 r5 = r0;
    release_layout_parts(r0 + 0x170u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (santa_bag_window->byte_2ca5 == 0) {
        release_layout_parts(r5 + 0x40cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    leave_menu_state(layout_at_10_virtual_8(r5 + 0x24u));
    u32 i = 0u;
    do {
        layout_at_10_virtual_8(r5 + i * 0xfu * 0x38u + 0x684u);
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
    frame.release();
    MessageWindow__release((r5 + 0x2400u) + 0x388u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00275798
GUEST_EXPORT(0x00275798, d_00275798::SantaBagWindow__release);

// f_00275808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the gift bag window: two archive accessors and layouts, ten item slots and a name window.
namespace d_00275808 {

inline constexpr u32 vtable_SantaBagWindow = 0x008ef6f4u;
inline guest::global<u32, 0x008874f8> global_008874f8;
inline guest::global<u32, 0x008874fc> global_008874fc;
inline constexpr guest::Function<0x001207d8, u32(u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0031ecbc, u32(u32)> ItemSelectNameWindow__ItemSelectNameWindow;

u32 SantaBagWindow__SantaBagWindow(gptr<SantaBagWindow> santa_bag_window) {
    santa_bag_window->word_4 = 0;
    santa_bag_window->byte_8 = 0;
    u32 r2_1 = *global_008874fc;
    santa_bag_window->word_c = *global_008874f8;
    santa_bag_window->word_10 = r2_1;
    santa_bag_window->word_14 = 0;
    santa_bag_window->byte_18 = 0;
    santa_bag_window->word_1c = 0;
    santa_bag_window->vtable = vtable_SantaBagWindow;
    santa_bag_window->word_20 = 0;
    u32 r0_4 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(Layout__Layout(santa_bag_window.addr() + 0x24u, vtable_SantaBagWindow, r2_1, santa_bag_window.addr() + 0xcu) + 0x14cu);
    construct_layout_animation(r0_4 + 0x248u);
    construct_layout_animation(r0_4 + 0x270u);
    u32 ea_1 = r0_4 + 0x298u;
    *gptr<u32>(ea_1) = 0;
    u32 ea_2 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(ea_1 + 4u) + 0x248u;
    *gptr<u32>(ea_2) = 0;
    construct_layout_animation(ea_2 + 4u);
    u32 r0_11 = for_each_element(ea_2 + 0x2cu, 0x20708cu, 0x348u, 0xau);
    u32 r1_6 = ~0u;
    *gptr<u32>(r0_11 + 0x2100u) = r1_6;
    *gptr<u32>(0x2780u - (r1_6 << 2) + (r0_11 - 0x680u)) = r1_6;
    u32 r0_14 = ItemSelectNameWindow__ItemSelectNameWindow(r0_11 + 0x2108u);
    *gptr<u8>(r0_14 + 0x4f0u) = 0;
    *gptr<u8>(r0_14 - 0x2788u + 0x2ca4u) = 0;
    *gptr<u8>(r0_14 - 0x2788u + 0x2ca5u) = 0;
    return r0_14 - 0x2788u;
}

}  // namespace d_00275808
GUEST_EXPORT_FRAMED(0x00275808, d_00275808::SantaBagWindow__SantaBagWindow, 0x4010);  // pushes {r4, lr} first, as the original

// f_002762c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a sound conductor: no sequence, tempo 120, volume 1.
namespace d_002762c4 {

inline constexpr u32 vtable_SoundConductor_rec = 0x008ef714u;
inline constexpr u32 vtable_SoundHandleBindSeq = 0x008f3a54u;

void SoundConductor__SoundConductor_002762c4(gptr<SoundConductor> sound_conductor) {
    u32 r12_1 = ~0u;
    sound_conductor->vtable = vtable_SoundConductor_rec;
    sound_conductor->word_4 = 0;
    sound_conductor->byte_8 = 0;
    sound_conductor->word_10 = 0;
    sound_conductor->word_c = r12_1;
    sound_conductor->word_14 = 0;
    sound_conductor->word_1c = 0;
    sound_conductor->sound_handle_bind_seq_vtable = vtable_SoundHandleBindSeq;
    sound_conductor->word_20 = 0;
    sound_conductor->word_24 = 0;
    float S0_1 = 120.0f;
    float S1_1 = 1.0f;
    sound_conductor->word_28 = 0;
    sound_conductor->float_2c = S0_1;
    sound_conductor->float_30 = S1_1;
    sound_conductor->half_34 = u16(r12_1);
    sound_conductor->half_36 = u16(r12_1);
    sound_conductor->word_38 = 0;
    sound_conductor->word_3c = 0;
    sound_conductor->word_40 = r12_1;
    sound_conductor->byte_44 = 0;
    sound_conductor->word_48 = 0;
    sound_conductor->word_4c = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_002762c4
GUEST_EXPORT(0x002762c4, d_002762c4::SoundConductor__SoundConductor_002762c4);

// f_002763bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the source's mode: 0 follows the room music player, 1 follows the given object (state 3).
namespace d_002763bc {

struct __attribute__((packed)) SoundSource {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x104];  // (not used here)
    u32 sound_haniwa_mgr;
    u32 word_11c;
    u8 unknown_120[0x4];  // (not used here)
    u8 byte_124;
};
GUEST_OFFSET(SoundSource, word_10, 0x10);
GUEST_OFFSET(SoundSource, sound_haniwa_mgr, 0x118);
GUEST_OFFSET(SoundSource, word_11c, 0x11c);
GUEST_OFFSET(SoundSource, byte_124, 0x124);

inline constexpr u32 sound_room_music_player_instance_address = 0x0094d548u;
inline guest::global<u32, 0x0094d548> sound_room_music_player_instance;

void SoundSource__set_mode(gptr<SoundSource> sound_source, u32 r1, u32 sound_haniwa_mgr) {
    if (r1 != 0) {
        if (r1 == 1u) {
            sound_source->sound_haniwa_mgr = sound_haniwa_mgr;
            sound_source->byte_124 = 3;
            sound_source->word_10 = r1;
            return;
        }
        sound_source->word_10 = r1;
        return;
    }
    u32 r3_1 = *sound_room_music_player_instance;
    if (r3_1 == 0) {
        sound_source->word_10 = r1;
        return;
    }
    sound_source->sound_haniwa_mgr = sound_haniwa_mgr;
    sound_source->word_11c = r3_1 + 0x244u;
    sound_source->word_10 = r1;
}

}  // namespace d_002763bc
GUEST_EXPORT(0x002763bc, d_002763bc::SoundSource__set_mode);

// f_0027643c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees slot `index` (below 64) and uncounts it.
namespace d_0027643c {

struct __attribute__((packed)) SlotTable64 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(SlotTable64, word_114, 0x114);

struct __attribute__((packed)) Local_0027643c_r1_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_0027643c_r1_1, word_14, 0x14);


void SlotTable64__remove(gptr<SlotTable64> slot_table64, u32 r1) {
    if (r1 >= 0x40u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    gptr<Local_0027643c_r1_1> r1_1 = gptr<Local_0027643c_r1_1>(slot_table64.addr() + (r1 << 2));
    if (r1_1->word_14 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    r1_1->word_14 = 0;
    u32 r1_2 = slot_table64->word_114 - 1u;
    slot_table64->word_114 = r1_2;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0027643c
GUEST_EXPORT(0x0027643c, d_0027643c::SlotTable64__remove);

// f_0027646c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the singleton on a heap (arg 0), with its disposer, unless it exists.
namespace d_0027646c {

inline constexpr u32 vtable_SoundHaniwaMgr__SingletonDisposer_ = 0x008fa3e4u;
inline constexpr u32 sound_haniwa_mgr_instance_address = 0x0094cff4u;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> IDisposer__construct_in_heap;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

void SoundHaniwaMgr__create_instance(u32 singleton_disposer, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r6 = sound_haniwa_mgr_instance_address;
    if (*gptr<u32>(r6) == 0) {
        u32 block_2 = allocate_on_heap_entry(0x1c4u, singleton_disposer, 4u, r3);
        S0 = guest::cpu()->s[0];
        u32 r4 = block_2;
        if (block_2 == 0) {
            *gptr<u32>(r6 + 4u) = r4;
            r4 = 0u;
        } else {
            IDisposer__construct_in_heap(block_2, singleton_disposer, 3u);
            S0 = 1.0f;
            *gptr<u32>(block_2) = vtable_SoundHaniwaMgr__SingletonDisposer_;
            *gptr<u32>(r6 + 4u) = block_2;
            singleton_disposer = 0u;
            *gptr<u32>(r4 + 0x120u) = std::bit_cast<u32>(S0);
            *gptr<u32>(r4 + 0x10u) = singleton_disposer;
            *gptr<u32>(r4 + 0x114u) = singleton_disposer;
            *gptr<u32>(r4 + 0x118u) = singleton_disposer;
            *gptr<u32>(r4 + 0x11cu) = singleton_disposer;
            *gptr<u8>(r4 + 0x124u) = u8(singleton_disposer);
            *gptr<u32>(r4 + 0x1bcu) = singleton_disposer;
            u32 r2 = singleton_disposer;
            u32 r1 = singleton_disposer;
            *gptr<u32>(r4 + 0x1c0u) = singleton_disposer;
            do {
                u32 r2_1 = r2 + 1u;
                r1 += 2u;
                *gptr<u32>((r4 + (r2 << 2)) + 0x14u) = singleton_disposer;
                r2 = r2_1 + 1u;
                *gptr<u32>((r4 + (r2_1 << 2)) + 0x14u) = singleton_disposer;
                guest::preempt();
            } while (r1 < 0x40u);
            guest::cpu()->s[0] = S0;
            clear(r4 + 0x125u, 0x96u);
            S0 = guest::cpu()->s[0];
        }
        *gptr<u32>(r6) = r4;
    }
    guest::cpu()->s[0] = S0;
}

}  // namespace d_0027646c
GUEST_EXPORT_FRAMED(0x0027646c, d_0027646c::SoundHaniwaMgr__create_instance, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002767bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the object in the first free of the 64 slots and counts it; 0x41 when full.
namespace d_002767bc {

struct __attribute__((packed)) SlotTable64 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(SlotTable64, word_114, 0x114);


u32 SlotTable64__add(gptr<SlotTable64> slot_table64, u32 r1) {
    u32 i = slot_table64.addr();
    u32 r2 = i;
    i = slot_table64->word_114;
    u32 zf_1 = i == 0x40u;
    u32 cf_1 = i >= 0x40u;
    if (i <= 0x40u) {
        i = 0u;
    }
    if (cf_1 && !zf_1) {
        return 0x41u;
    }
    do {
        if (*gptr<u32>(r2 + (i << 2) + 0x14u) == 0) {
            *gptr<u32>(r2 + (i << 2) + 0x14u) = r1;
            *gptr<u32>(r2 + 0x114u) = *gptr<u32>(r2 + 0x114u) + 1u;
            return i;
        }
        i += 1u;
        guest::preempt();
    } while (i < 0x40u);
    return 0x41u;
}

}  // namespace d_002767bc
GUEST_EXPORT(0x002767bc, d_002767bc::SlotTable64__add);

// f_0027680c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the tune player on a tune (sound id 0x1000f83 plays the 16 notes).
namespace d_0027680c {

struct __attribute__((packed)) TunePlayerStartArg0 {
    u8 unknown_0[0x54];  // (not used here)
    u8 byte_54;
    u8 unknown_55[0x13];  // (not used here)
    u8 byte_68;
    u8 unknown_69[0x57];  // (not used here)
    u32 word_c0;
    u32 tune_notes_address;
};
GUEST_OFFSET(TunePlayerStartArg0, byte_54, 0x54);
GUEST_OFFSET(TunePlayerStartArg0, byte_68, 0x68);
GUEST_OFFSET(TunePlayerStartArg0, word_c0, 0xc0);
GUEST_OFFSET(TunePlayerStartArg0, tune_notes_address, 0xc4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x0032ba1c, u32(u32, u32, u32, u32)> TunePlayer__start_2;
inline constexpr guest::Function<0x00342ce4, u32(u32, u32, u32, u32)> SoundObj__play_if_ready;

u32 TunePlayer__start(gptr<TunePlayerStartArg0> arg0, u32 r1, u32 tune_notes_address) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = 0;
    u32 r3_1 = 0x1000f83u;
    if (r1 != r3_1) {
        r0_1 = 0u;
        if (arg0->byte_68 == 0) {
            arg0->byte_54 = u8(r0_1);
            if (r1 == 0x1000f23u) {
                u32 scene_2 = current_scene_id(r0_1, r1, 0x1000f23u, r3_1);
                r3_1 = guest::cpu()->r[3];
                if (scene_2 == 0x2bu) {
                    frame.release();
                    return SoundObj__play_if_ready(arg0.addr() + 0x58u, 0x1000f24u, tune_notes_address, r3_1);
                }
            }
            frame.release();
            return TunePlayer__start_2(arg0.addr() + 0xcu, r1, tune_notes_address, r3_1);
        }
    } else {
        r0_1 = arg0.addr() + 0xc0u;
        r1 = 0xcu;
        arg0->word_c0 = r1;
        arg0->tune_notes_address = tune_notes_address;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0027680c
GUEST_EXPORT(0x0027680c, d_0027680c::TunePlayer__start);

// f_0027689c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the step sound for the ground kind (below 14), with its pitch from the table; kind 13 has its own sound.
namespace d_0027689c {

struct __attribute__((packed)) SoundObjPlayStepSoundArg0 {
    u8 unknown_0[0xbc];  // (not used here)
    u32 word_bc;
};
GUEST_OFFSET(SoundObjPlayStepSoundArg0, word_bc, 0xbc);

struct __attribute__((packed)) SoundObjPlayStepSoundArg2 {
    u8 byte_0;
};
GUEST_OFFSET(SoundObjPlayStepSoundArg2, byte_0, 0x0);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00130ed8, u32(u32, u32)> SoundHandle__detach;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x004c331c, u32(u32, u32)> ResourceRef__acquire;
inline constexpr guest::Function<0x004c7500, u32(u32, u32, u32, u32)> Resource__load_child;
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32, u32)> SoundSystem__play_handle;

struct __attribute__((packed)) SoundObjPlayStepSoundFrame {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(SoundObjPlayStepSoundFrame, word_0, 0x0);
GUEST_SIZE(SoundObjPlayStepSoundFrame, 0x18);

void SoundObj__play_step_sound(gptr<SoundObjPlayStepSoundArg0> arg0, u32 r1, gptr<SoundObjPlayStepSoundArg2> arg2, u32 r3) {
    guest::StackFrameOf<SoundObjPlayStepSoundFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    if (arg2->byte_0 <= 0xdu) {
        u32 r0_1 = arg0->word_bc;
        if (r0_1 != 0) {
            BasicSound__stop(r0_1, 0u, arg2.addr(), r3);
        }
        if (arg2->byte_0 == 0xdu) {
            u32 r0_2 = *sound_system;
            frame.release();
            SoundSystem__play_handle(r0_2, arg0.addr() + 0xbcu, 0x1000476u, sound_system_address);
            return;
        }
        u32 r2_1 = r1;
        if (r1 != 0x1000475u) {
            r2_1 = 0x1000475u;
        }
        SoundSystem__play_handle(*sound_system, arg0.addr() + 0xbcu, r2_1, sound_system_address);
        ResourceRef__acquire(frame.at(0).addr(), arg0.addr() + 0xbcu);
        u32 r0_5 = frame->word_0;
        u32 r1_4 = 0u;
        u32 r2_3 = *gptr<s16>((u32(arg2->byte_0) << 1) + 0x83b196u);
        if (r0_5 != 0) {
            Resource__load_child(r0_5, r1_4, r2_3, 0x83b196u);
            r1_4 = guest::cpu()->r[1];
        }
        SoundHandle__detach(frame.at(0).addr(), r1_4);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0027689c
GUEST_EXPORT(0x0027689c, d_0027689c::SoundObj__play_step_sound);

// f_00276c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless muted (+0x34), plays sound variant `index` (below 0x83, from 0x1000a96).
namespace d_00276c98 {

struct __attribute__((packed)) SoundObjBasePlayVariantArg0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x3f];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(SoundObjBasePlayVariantArg0, byte_34, 0x34);
GUEST_OFFSET(SoundObjBasePlayVariantArg0, word_74, 0x74);

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> SoundObjBase__virtual_2;

void SoundObjBase__play_variant(gptr<SoundObjBasePlayVariantArg0> sound_obj_base, u32 r1, u32 r2, u32 r3) {
    if (sound_obj_base->byte_34 != 0 || r1 >= 0x83u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    sound_obj_base->word_74 = r1 + 0x1000a96u;
    SoundObjBase__virtual_2(sound_obj_base.addr(), r2, r3, r3);
}

}  // namespace d_00276c98
GUEST_EXPORT(0x00276c98, d_00276c98::SoundObjBase__play_variant);

// f_00276cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the volume of the playing handle (of the two) that plays the current sound.
namespace d_00276cdc {

struct __attribute__((packed)) SoundObjBaseUpdateVolumeArg0 {
    u8 unknown_0[0x74];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(SoundObjBaseUpdateVolumeArg0, word_74, 0x74);

inline constexpr guest::Function<0x00130ed8, u32(u32, u32)> SoundHandle__detach;
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> ResourceRef__acquire;
inline constexpr guest::Function<0x004c74b0, u32(u32, u32)> SoundArchive__set_volume;

struct __attribute__((packed)) SoundObjBaseUpdateVolumeFrame {
    u32 word_0;
};
GUEST_OFFSET(SoundObjBaseUpdateVolumeFrame, word_0, 0x0);
GUEST_SIZE(SoundObjBaseUpdateVolumeFrame, 0x4);

void SoundObjBase__update_volume(gptr<SoundObjBaseUpdateVolumeArg0> sound_obj_base, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<SoundObjBaseUpdateVolumeFrame> frame;  // the original's stack frame
    u32 r0 = sound_obj_base.addr();
    frame->word_0 = r3;
    u32 r4 = r0;
    r3 = sound_obj_base->word_74;
    u32 r1 = r0 + 0x44u;
    u32 i = 0u;
    do {
        u32 r0_1 = *gptr<u32>(i >= 2u ? r1 : r1 + (i << 2));
        if ((r0_1 == 0 ? ~0u : *gptr<u32>(r0_1 + 0xb0u)) == r3) {
            if (i < 2u) {
                r1 += (i << 2);
            }
            if (r1 == 0) {
                guest::cpu()->r[1] = r1;
                guest::cpu()->s[0] = S0;
                return;
            }
            guest::cpu()->s[0] = S0;
            ResourceRef__acquire(frame.at(0).addr(), r1, i, r3);
            u32 r1_1 = *gptr<u32>(r4 + 0x7cu);
            u32 r0_3 = frame->word_0;
            float S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x120u));
            if (r0_3 != 0) {
                guest::cpu()->s[0] = S0_1;
                SoundArchive__set_volume(r0_3, r1_1);
                r1_1 = guest::cpu()->r[1];
                S0_1 = guest::cpu()->s[0];
            }
            guest::cpu()->s[0] = S0_1;
            SoundHandle__detach(frame.at(0).addr(), r1_1);
            return;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_00276cdc
GUEST_EXPORT_FRAMED(0x00276cdc, d_00276cdc::SoundObjBase__update_volume, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00277b4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277b4c {

struct __attribute__((packed)) Local_00277b4c_ea_2 {
    u32 vtable;
    u32 word_4;
    u8 unknown_8[0x70];  // (not used here)
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u8 byte_84;
    u8 unknown_85[0x1];  // (not used here)
    u16 half_86;
    u16 half_88;
    u16 half_8a;
    u16 half_8c;
    u16 half_8e;
    u16 half_90;
    u8 unknown_92[0x2];  // (not used here)
    float float_94;
    u8 byte_98;
    u8 unknown_99[0x3];  // (not used here)
    float float_9c;
    u16 half_a0;
    u16 half_a2;
    u16 half_a4;
    u16 half_a6;
    u16 half_a8;
};
GUEST_OFFSET(Local_00277b4c_ea_2, vtable, 0x0);
GUEST_OFFSET(Local_00277b4c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00277b4c_ea_2, word_78, 0x78);
GUEST_OFFSET(Local_00277b4c_ea_2, word_7c, 0x7c);
GUEST_OFFSET(Local_00277b4c_ea_2, word_80, 0x80);
GUEST_OFFSET(Local_00277b4c_ea_2, byte_84, 0x84);
GUEST_OFFSET(Local_00277b4c_ea_2, half_86, 0x86);
GUEST_OFFSET(Local_00277b4c_ea_2, half_88, 0x88);
GUEST_OFFSET(Local_00277b4c_ea_2, half_8a, 0x8a);
GUEST_OFFSET(Local_00277b4c_ea_2, half_8c, 0x8c);
GUEST_OFFSET(Local_00277b4c_ea_2, half_8e, 0x8e);
GUEST_OFFSET(Local_00277b4c_ea_2, half_90, 0x90);
GUEST_OFFSET(Local_00277b4c_ea_2, float_94, 0x94);
GUEST_OFFSET(Local_00277b4c_ea_2, byte_98, 0x98);
GUEST_OFFSET(Local_00277b4c_ea_2, float_9c, 0x9c);
GUEST_OFFSET(Local_00277b4c_ea_2, half_a0, 0xa0);
GUEST_OFFSET(Local_00277b4c_ea_2, half_a2, 0xa2);
GUEST_OFFSET(Local_00277b4c_ea_2, half_a4, 0xa4);
GUEST_OFFSET(Local_00277b4c_ea_2, half_a6, 0xa6);
GUEST_OFFSET(Local_00277b4c_ea_2, half_a8, 0xa8);

inline constexpr u32 vtable_SoundObjHaniwa = 0x008ef798u;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> SoundObjBase__SoundObjBase;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundObj_2___SoundObj_00277b4c(gptr<SoundObj_2_> sound_obj, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    SoundObjBase__SoundObjBase(sound_obj.addr(), r1, r2, r3);
    sound_obj->vtable = vtable_SoundObj_2_;
    u32 r0_4 = for_each_element(for_each_element(sound_obj.addr() + 0x44u, 0x131800u, 4u, 2u) + 8u, 0x1287a8u, 0x14u, 2u);
    u32 r2_1 = ~0u;
    *gptr<u32>(r0_4 + 0x28u) = r2_1;
    gptr<Local_00277b4c_ea_2> ea_2 = gptr<Local_00277b4c_ea_2>(r0_4 - 0x4cu);
    ea_2->vtable = vtable_SoundObjHaniwa;
    ea_2->word_7c = 0;
    ea_2->word_78 = r2_1;
    ea_2->word_80 = 0;
    ea_2->byte_84 = 0;
    ea_2->half_86 = u16(r2_1);
    ea_2->half_88 = u16(r2_1);
    ea_2->half_8a = 0;
    ea_2->half_8c = u16(r2_1);
    float S0_3 = 1.0f;
    ea_2->half_8e = u16(r2_1);
    ea_2->half_90 = 0;
    float S1_3 = -1.0f;
    ea_2->float_94 = S0_3;
    ea_2->byte_98 = 0;
    ea_2->float_9c = S1_3;
    ea_2->half_a8 = 7;
    ea_2->half_a0 = u16(r2_1);
    ea_2->half_a2 = u16(r2_1);
    ea_2->half_a4 = 0;
    ea_2->half_a6 = 0;
    ea_2->word_4 = 3;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return ea_2.addr();
}

}  // namespace d_00277b4c
GUEST_EXPORT_FRAMED(0x00277b4c, d_00277b4c::SoundObj_2___SoundObj_00277b4c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00277c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a clay figure sound object: stops its sounds and removes it from its slot table.
namespace d_00277c1c {

inline constexpr u32 vtable_SoundObjHaniwa = 0x008ef798u;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> SoundObjBase__stop;
inline constexpr guest::Function<0x0027643c, u32(u32, u32, u32, u32)> SlotTable64__remove;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 SoundObjHaniwa__destructor(gptr<SoundObjHaniwa> sound_obj_haniwa, u32 r1, u32 r2, u32 r3) {
    u32 r0 = sound_obj_haniwa.addr();
    u32 r5 = 0;
    u32 cf_3 = 0;
    u32 sound_obj_base = r0;
    u32 i = sound_obj_base;
    u32 r7 = ~0u;
    sound_obj_haniwa->vtable = vtable_SoundObjHaniwa;
    if (sound_obj_haniwa->word_78 < 0x40u) {
        r1 = 0u;
        r2 = sound_obj_haniwa->word_74;
        r3 = i + 0x44u;
        r5 = r1;
L_277c5c:;
        r0 = r3 + (r1 << 2);
L_277c60:;
        u32 r0_1 = *gptr<u32>(r0);
        if ((r0_1 == 0 ? ~0u : *gptr<u32>(r0_1 + 0xb0u)) != r2) {
            r1 += 1u;
            if (s32(r1) < 2) {
                r0 = r3;
                if (r1 >= 2u) {
                    guest::preempt();
                    goto L_277c60;
                }
                guest::preempt();
                goto L_277c5c;
            }
        } else {
            if (r1 < 2u) {
                r3 += (r1 << 2);
            }
            if (r3 != 0) {
                u32 r0_2 = *gptr<u32>(r3);
                if (r0_2 != 0) {
                    BasicSound__stop(r0_2, 0u, r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        *gptr<u32>(i + 0x80u) = r5;
        SlotTable64__remove(*gptr<u32>(i + 0x7cu), *gptr<u32>(i + 0x78u), r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(i + 0x7cu) = r5;
        *gptr<u32>(i + 0x78u) = r7;
    }
    if (*gptr<u8>(i + 0x34u) != 0) {
        *gptr<u32>(i + 0x74u) = r7;
        r7 = i;
        r5 = i + 0x44u;
        i = 0u;
L_277cec:;
        r0 = r5 + (i << 2);
L_277cf0:;
        detach_from_parent(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        if (s32(i) < 2) {
            if (i >= 2u) {
                r0 = r5;
                guest::preempt();
                goto L_277cf0;
            }
            guest::preempt();
            goto L_277cec;
        }
        SoundObjBase__stop(r7, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = sound_obj_base + 0x44u;
    i = 0u;
    *gptr<u32>(sound_obj_base) = vtable_SoundObj_2_;
    do {
        u32 r0_4 = r5;
        if (i < 2u) {
            r0_4 = r5 + (i << 2);
        }
        detach_from_parent(r0_4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    SoundObjBase__stop(sound_obj_base, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = sound_obj_base + 0x44u;
    i = 0u;
    r0 = r5;
    do {
        r0 += (i << 2);
        do {
            detach_from_parent(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            i += 1u;
            cf_3 = i >= 2u;
            r0 = r5;
            if (s32(i) >= 2) {
                destroy_array_elements(r0, 0x137d74u, 4u, 2u);
                return r5 - 0x44u;
            }
            guest::preempt();
        } while (cf_3);
        guest::preempt();
    } while (1);
}

}  // namespace d_00277c1c
GUEST_EXPORT_FRAMED(0x00277c1c, d_00277c1c::SoundObjHaniwa__destructor, 0x41f0);  // pushes {i, r5, sound_obj_base, r7, r8, lr} first, as the original

// f_00277d98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a player's sound object (unless started): takes its owner and starts the base.
namespace d_00277d98 {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> SoundObjBase__virtual_2;
inline constexpr guest::Function<0x002a5fa8, u32(u32, u32, u32, u32)> set_owner_once;

u32 SoundObjPlayer__start(gptr<SoundObjPlayer> sound_obj_player, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = sound_obj_player->started;
    if (r0_1 == 0) {
        set_owner_once(sound_obj_player.addr() + 0xa4u, sound_obj_player.addr(), r2, guest::cpu()->r[3]);
        frame.release();
        return SoundObjBase__virtual_2(sound_obj_player.addr(), r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00277d98
GUEST_EXPORT(0x00277d98, d_00277d98::SoundObjPlayer__start);

// f_00277f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops a player's sound object (when started): drops its owner, detaches its four sounds and stops the base.
namespace d_00277f80 {

inline constexpr guest::Function<0x00136cc8, u32(u32)> detach_from_parent;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> SoundObjBase__stop;
inline constexpr guest::Function<0x002a6594, u32(u32, u32, u32, u32)> clear_owner;

u32 SoundObjPlayer__stop(gptr<SoundObjPlayer> sound_obj_player) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = sound_obj_player.addr();
    u32 cf_1 = 0;
    u32 r4_1 = r0;
    r0 = sound_obj_player->started;
    if (r0 != 0) {
        clear_owner(r4_1 + 0xa4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r5 = r4_1 + 0x44u;
        u32 sound_obj_base = r4_1;
        u32 r4 = 0u;
        r0 = r5;
        do {
            r0 += (r4 << 2);
            do {
                detach_from_parent(r0);
                r4 += 1u;
                cf_1 = r4 >= 4u;
                if (s32(r4) >= 4) {
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

}  // namespace d_00277f80
GUEST_EXPORT(0x00277f80, d_00277f80::SoundObjPlayer__stop);

// f_00277fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a player's sound object: a sound object base with four sound slots and a fade.
namespace d_00277fe4 {

struct __attribute__((packed)) Local_00277fe4_r0_6 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xb4];  // (not used here)
    u8 byte_bc;
};
GUEST_OFFSET(Local_00277fe4_r0_6, word_4, 0x4);
GUEST_OFFSET(Local_00277fe4_r0_6, byte_bc, 0xbc);

inline constexpr u32 vtable_SoundObjPlayer = 0x008ef7d8u;
inline constexpr u32 vtable_SoundObj_4_ = 0x008f8e48u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> SoundObjBase__SoundObjBase;
inline constexpr guest::Function<0x002a65d0, u32(u32)> FadeState__construct;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundObjPlayer__construct(gptr<SoundObj_4_> sound_obj, u32 r1, u32 r2, u32 r3) {
    SoundObjBase__SoundObjBase(sound_obj.addr(), r1, r2, r3);
    sound_obj->vtable = vtable_SoundObj_4_;
    u32 r0_4 = for_each_element(for_each_element(sound_obj.addr() + 0x44u, 0x131800u, 4u, 4u) + 0x10u, 0x1287a8u, 0x14u, 4u);
    *gptr<u32>(r0_4 - 0x54u) = vtable_SoundObjPlayer;
    u32 fade_state = r0_4 + 0x50u;
    FadeState__construct(fade_state);
    gptr<Local_00277fe4_r0_6> r0_6 = gptr<Local_00277fe4_r0_6>(fade_state - 0xa4u);
    r0_6->byte_bc = 0;
    r0_6->word_4 = 0;
    return r0_6.addr();
}

}  // namespace d_00277fe4
GUEST_EXPORT_FRAMED(0x00277fe4, d_00277fe4::SoundObjPlayer__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_002783c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Looks the sound id up in the bank and remembers its entry and data.
namespace d_002783c4 {

struct __attribute__((packed)) SoundBank {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(SoundBank, word_10, 0x10);
GUEST_OFFSET(SoundBank, word_14, 0x14);
GUEST_OFFSET(SoundBank, word_18, 0x18);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x0013c1e8, u32(u32, u32, u32)> SoundArchive__player_info;
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> SoundArchive__sequence_info;
inline constexpr guest::Function<0x004c9310, u32(u32, u32)> SeqFile__open;
inline constexpr guest::Function<0x0073e1c0, u32(u32, u32, u32)> Object__virtual_5_veneer;

struct __attribute__((packed)) SoundBankFindSoundFrame {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 byte_31;
    u8 unknown_32[0x6];  // (not read or written by name)
    u32 word_38;
    u8 unknown_3c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(SoundBankFindSoundFrame, word_0, 0x0);
GUEST_OFFSET(SoundBankFindSoundFrame, word_18, 0x18);
GUEST_OFFSET(SoundBankFindSoundFrame, word_1c, 0x1c);
GUEST_OFFSET(SoundBankFindSoundFrame, word_20, 0x20);
GUEST_OFFSET(SoundBankFindSoundFrame, word_24, 0x24);
GUEST_OFFSET(SoundBankFindSoundFrame, word_28, 0x28);
GUEST_OFFSET(SoundBankFindSoundFrame, word_2c, 0x2c);
GUEST_OFFSET(SoundBankFindSoundFrame, byte_30, 0x30);
GUEST_OFFSET(SoundBankFindSoundFrame, byte_31, 0x31);
GUEST_OFFSET(SoundBankFindSoundFrame, word_38, 0x38);
GUEST_SIZE(SoundBankFindSoundFrame, 0x44);

void SoundBank__find_sound(gptr<SoundBank> sound_bank, u32 r1) {
    guest::StackFrameOf<SoundBankFindSoundFrame> frame;  // the original's stack frame
    u32 r6_1 = *gptr<u32>(*gptr<u32>(*sound_system + 0xc0cu) + 0x144u);
    u32 r7_1 = *gptr<u32>(*sound_system + 0xc10u);
    frame->word_18 = 0;
    frame->byte_30 = 0;
    frame->word_2c = 0;
    frame->byte_31 = 0;
    u32 r0_1 = ~0u;
    frame->word_1c = r0_1;
    frame->word_20 = r0_1;
    frame->word_24 = r0_1;
    frame->word_28 = r0_1;
    if (SoundArchive__sequence_info(r7_1, r1, frame.at(0x18).addr(), guest::cpu()->r[3]) != 0) {
        u32 r2_2 = frame.at(0).addr();
        sound_bank->word_14 = frame->word_18;
        if (SoundArchive__player_info(r7_1, r1, r2_2) != 0) {
            u32 r0_4 = Object__virtual_5_veneer(r6_1, frame->word_0, r2_2);
            SeqFile__open(frame.at(0x34).addr(), r0_4);
            u32 r0_6 = frame->word_38;
            sound_bank->word_10 = r1;
            sound_bank->word_18 = r0_6;
        }
    }
}

}  // namespace d_002783c4
GUEST_EXPORT_FRAMED(0x002783c4, d_002783c4::SoundBank__find_sound, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00278484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Registers the sound with its group byte (kind 3).
namespace d_00278484 {

struct __attribute__((packed)) SoundBank {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(SoundBank, byte_1c, 0x1c);

inline constexpr guest::Function<0x002782dc, u32(u32, u32, u32, u32)> SoundObj__play_kind;

struct __attribute__((packed)) SoundBankRegisterSoundFrame {
    u32 word_0;
};
GUEST_OFFSET(SoundBankRegisterSoundFrame, word_0, 0x0);
GUEST_SIZE(SoundBankRegisterSoundFrame, 0x4);

void SoundBank__register_sound(gptr<SoundBank> sound_bank, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SoundBankRegisterSoundFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r12_1 = *frame.at<u32>(8);
    sound_bank->byte_1c = u8(r3);
    frame->word_0 = r12_1;
    SoundObj__play_kind(sound_bank.addr(), guest::cpu()->r[1], guest::cpu()->r[2], 3u);
}

}  // namespace d_00278484
GUEST_EXPORT_FRAMED(0x00278484, d_00278484::SoundBank__register_sound, 0x4000);  // pushes {lr} first, as the original

// f_002796a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the ducking fade of the channel (unless held in states 4 and 5): with the channel's frame counts, or the
// fader's own.
namespace d_002796a0 {

struct __attribute__((packed)) DuckingStartArg1 {
    u32 word_0;
};
GUEST_OFFSET(DuckingStartArg1, word_0, 0x0);

struct __attribute__((packed)) Local_002796a0_r0_1 {
    u8 unknown_0[0x146];  // (not used here)
    u8 byte_146;
    u8 byte_147;
};
GUEST_OFFSET(Local_002796a0_r0_1, byte_146, 0x146);
GUEST_OFFSET(Local_002796a0_r0_1, byte_147, 0x147);

inline constexpr guest::Function<0x0012e8e8, u32(u32, u32)> DuckingFader__set;
inline constexpr guest::Function<0x0020a474, u32(u32, u32, u32)> FloatFade__start;

u32 Ducking__start(u32 ducking, gptr<DuckingStartArg1> arg1, u32 r2, float S0) {
    u32 r1_1 = arg1->word_0;
    u32 r3_1 = ducking + r1_1 * 0x1cu;
    u32 r12_1 = *gptr<u32>(r3_1 + 0x24u);
    if (r12_1 == 4u || r12_1 == 5u) {
        guest::cpu()->r[1] = r1_1;
        return ducking;
    }
    float S0_1 = 1.0f;
    if (r2 == 0) {
        gptr<Local_002796a0_r0_1> r0_1 = gptr<Local_002796a0_r0_1>(ducking + r1_1 * 0xcu);
        u32 r2_1 = r0_1->byte_146;
        u32 r1_2 = r0_1->byte_147;
        guest::cpu()->s[0] = S0_1;
        return FloatFade__start(r3_1 + 0xcu, r1_2, r2_1);
    }
    guest::cpu()->s[0] = S0_1;
    return DuckingFader__set(r3_1 + 0xcu, r1_1);
}

}  // namespace d_002796a0
GUEST_EXPORT(0x002796a0, d_002796a0::Ducking__start);

// f_00279984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Mutes channel `index` (below 18): through the sound system, or by fading it to 0 and remembering its volume.
namespace d_00279984 {

struct __attribute__((packed)) SoundChannelMuteArg1 {
    u8 unknown_0[0x83de92];  // (not used here)
    u8 byte_83de92;
};
GUEST_OFFSET(SoundChannelMuteArg1, byte_83de92, 0x83de92);

struct __attribute__((packed)) Local_00279984_r4_1 {
    u8 unknown_0[0x434];  // (not used here)
    u8 byte_434;
};
GUEST_OFFSET(Local_00279984_r4_1, byte_434, 0x434);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x002bcd40, u32(u32, u32)> SoundFader__fade_to;
inline constexpr guest::Function<0x004bf06c, u32(u32, u32, u32, u32)> ResourceList__set_all;
inline constexpr guest::Function<0x00766f04, u32(u32, u32, u32, u32)> list_value_c14;

void SoundChannel__mute(u32 sound_channel, gptr<SoundChannelMuteArg1> arg1, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg1.addr() >= 0x12u) {
        return;
    }
    u32 r2_1 = arg1->byte_83de92;
    if (r2_1 != 1u) {
        u32 r0_1 = *sound_system;
        u32 r0_2 = list_value_c14(r0_1, arg1.addr(), r2_1, guest::cpu()->r[3]);
        frame.release();
        ResourceList__set_all(r0_2, 1u, 0u, guest::cpu()->r[3]);
        return;
    }
    gptr<Local_00279984_r4_1> r4_1 = gptr<Local_00279984_r4_1>(sound_channel + arg1.addr());
    if (r4_1->byte_434 == 1u) {
        guest::cpu()->s[0] = S0;
        return;
    }
    u32 r0_3 = sound_channel + (((arg1.addr() << 3) - arg1.addr()) << 2);
    float S0_2 = 0.0f;
    *gptr<u32>((sound_channel + (arg1.addr() << 2)) + 0x3ecu) = *gptr<u32>(r0_3 + 0x1fcu);
    guest::cpu()->s[0] = S0_2;
    SoundFader__fade_to(r0_3 + 0x1f4u, 0u);
    r4_1->byte_434 = 1;
}

}  // namespace d_00279984
GUEST_EXPORT(0x00279984, d_00279984::SoundChannel__mute);

// f_00279a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unmutes channel `index` (below 18): through the sound system, or by fading it back to its remembered volume.
namespace d_00279a08 {

struct __attribute__((packed)) SoundChannelUnmuteArg1 {
    u8 unknown_0[0x83de92];  // (not used here)
    u8 byte_83de92;
};
GUEST_OFFSET(SoundChannelUnmuteArg1, byte_83de92, 0x83de92);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x002bcd40, u32(u32, u32)> SoundFader__fade_to;
inline constexpr guest::Function<0x004bf06c, u32(u32, u32, u32, u32)> ResourceList__set_all;
inline constexpr guest::Function<0x00766f04, u32(u32, u32, u32, u32)> list_value_c14;

void SoundChannel__unmute(u32 sound_channel, gptr<SoundChannelUnmuteArg1> arg1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (arg1.addr() >= 0x12u) {
        return;
    }
    if (arg1->byte_83de92 != 1u) {
        u32 r0_1 = *sound_system;
        u32 r0_2 = list_value_c14(r0_1, arg1.addr(), r2, guest::cpu()->r[3]);
        frame.release();
        ResourceList__set_all(r0_2, 0u, r2, guest::cpu()->r[3]);
        return;
    }
    float S0_2 = std::bit_cast<float>(*gptr<u32>(sound_channel + (arg1.addr() << 2) + 0x3ecu));
    guest::cpu()->s[0] = S0_2;
    SoundFader__fade_to(sound_channel + arg1.addr() * 0x1cu + 0x1f4u, r2);
    *gptr<u8>(sound_channel + arg1.addr() + 0x434u) = 0;
}

}  // namespace d_00279a08
GUEST_EXPORT(0x00279a08, d_00279a08::SoundChannel__unmute);

// f_00279e9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the table and its four extra entries (with their records) and counters.
namespace d_00279e9c {

struct __attribute__((packed)) Local_00279e9c_r4_1 {
    u8 unknown_0[0x26];  // (not used here)
    u8 byte_26;
    u8 byte_27;
    u32 word_28;
};
GUEST_OFFSET(Local_00279e9c_r4_1, byte_26, 0x26);
GUEST_OFFSET(Local_00279e9c_r4_1, byte_27, 0x27);
GUEST_OFFSET(Local_00279e9c_r4_1, word_28, 0x28);

inline constexpr guest::Function<0x002e9d28, u32(u32, u32, u32, u32)> Record30Table__clear;
inline constexpr guest::Function<0x00615508, u32(u32, u32)> store_constants_615508;
inline constexpr guest::Function<0x00615534, u32(u32)> Record16__clear;

void Record30Table__clear_with_extra(u32 record30_table, u32 r1) {
    u32 r6 = record30_table;
    Record30Table__clear(record30_table, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 i = 0u;
    u32 r7 = i;
    do {
        u32 r1_1 = i * 3u + (i << 3);
        gptr<Local_00279e9c_r4_1> r4_1 = gptr<Local_00279e9c_r4_1>(r6 + (r1_1 << 2) + 0xca8u);
        store_constants_615508(r4_1.addr(), r1_1);
        Record16__clear(r4_1.addr() + 0x10u);
        r4_1->byte_26 = u8(r7);
        i += 1u;
        r4_1->byte_27 = u8(r7);
        r4_1->word_28 = r7;
        guest::preempt();
    } while (i < 4u);
    *gptr<u32>(r6 + 0xd58u) = r7;
    *gptr<u32>(r6 + 0xd5cu) = r7;
    *gptr<u32>(r6 + 0xd60u) = r7;
}

}  // namespace d_00279e9c
GUEST_EXPORT_FRAMED(0x00279e9c, d_00279e9c::Record30Table__clear_with_extra, 0x41f0);  // pushes {r4, i, r6, r7, r8, lr} first, as the original

// f_00279f00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the table, its four extra entries and counters.
namespace d_00279f00 {

struct __attribute__((packed)) Local_00279f00_r0_4 {
    u8 unknown_0[0xd58];  // (not used here)
    u32 word_d58;
    u32 word_d5c;
    u32 word_d60;
};
GUEST_OFFSET(Local_00279f00_r0_4, word_d58, 0xd58);
GUEST_OFFSET(Local_00279f00_r0_4, word_d5c, 0xd5c);
GUEST_OFFSET(Local_00279f00_r0_4, word_d60, 0xd60);

inline constexpr guest::Function<0x002e9dcc, u32(u32, u32, u32, u32)> Record30Table__Record30Table;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

void Record30Table__construct_with_extra(u32 record30_table, u32 r1, u32 r2, u32 r3) {
    u32 r0_3 = for_each_element(Record30Table__Record30Table(record30_table, r1, r2, r3) + 0xca8u, 0x2a7044u, 0x2cu, 4u);
    gptr<Local_00279f00_r0_4> r0_4 = gptr<Local_00279f00_r0_4>(r0_3 - 0xca8u);
    r0_4->word_d5c = 0;
    r0_4->word_d60 = 0;
    r0_4->word_d58 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00279f00
GUEST_EXPORT_FRAMED(0x00279f00, d_00279f00::Record30Table__construct_with_extra, 0x4010);  // pushes {r4, lr} first, as the original

// f_00279f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees the pattern slots (0x878 bytes each) holding the id pair: clears their name and ids.
namespace d_00279f40 {

struct __attribute__((packed)) Local_00279f40_r5_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_00279f40_r5_1, word_870, 0x870);
GUEST_OFFSET(Local_00279f40_r5_1, word_874, 0x874);

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> sead__FixedSafeString_30___FixedSafeString_001b3f24;

u32 PatternSlots8__remove(u32 pattern_slots8, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r6 = pattern_slots8;
    u32 r7 = r1;
    u32 r8 = r2;
    u32 i = 0u;
    u32 r9 = ~0u;
    do {
        gptr<Local_00279f40_r5_1> r5_1 = gptr<Local_00279f40_r5_1>(r6 + (i * 0xfu + (i << 8) << 3));
        r0_1 = r5_1->word_870;
        u32 zf_1 = r0_1 == r7;
        if (zf_1) {
            r0_1 = r5_1->word_874;
            zf_1 = r0_1 == r8;
        }
        if (zf_1) {
            r0_1 = sead__FixedSafeString_30___FixedSafeString_001b3f24(r5_1.addr(), 0x16u, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r5_1->word_870 = r9;
            r5_1->word_874 = r9;
        }
        i += 1u;
        guest::preempt();
    } while (i < 8u);
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00279f40
GUEST_EXPORT_FRAMED(0x00279f40, d_00279f40::PatternSlots8__remove, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027a004: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the first free of the 8 pattern slots (both ids -1); 0 when none.
namespace d_0027a004 {

struct __attribute__((packed)) Local_0027a004_r1_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_0027a004_r1_1, word_870, 0x870);
GUEST_OFFSET(Local_0027a004_r1_1, word_874, 0x874);

struct __attribute__((packed)) Local_0027a004_r1_2 {
    u8 unknown_0[0xe8];  // (not used here)
    u32 word_e8;
    u32 word_ec;
};
GUEST_OFFSET(Local_0027a004_r1_2, word_e8, 0xe8);
GUEST_OFFSET(Local_0027a004_r1_2, word_ec, 0xec);


u32 PatternSlots8__first_free(u32 pattern_slots8) {
    gptr<Local_0027a004_r1_2> r1_2 = gptr<Local_0027a004_r1_2>(0u);
    u32 r2 = pattern_slots8;
    pattern_slots8 = 0u;
    do {
        gptr<Local_0027a004_r1_1> r1_1 = gptr<Local_0027a004_r1_1>(r2 + (pattern_slots8 * 0xfu + (pattern_slots8 << 8) << 3));
        if (r1_1->word_870 + 1u == 0 && r1_1->word_874 + 1u == 0) {
            guest::cpu()->r[1] = r1_1.addr();
            return pattern_slots8;
        }
        r1_2 = gptr<Local_0027a004_r1_2>(r1_1.addr() + 0x1000u);
        u32 zf_1 = r1_2->word_e8 + 1u == 0;
        if (zf_1) {
            r1_2 = gptr<Local_0027a004_r1_2>(r1_2->word_ec);
            zf_1 = r1_2.addr() + 1u == 0;
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1_2.addr();
            return pattern_slots8 + 1u;
        }
        pattern_slots8 += 2u;
        guest::preempt();
    } while (s32(pattern_slots8) < 8);
    guest::cpu()->r[1] = r1_2.addr();
    return 0u;
}

}  // namespace d_0027a004
GUEST_EXPORT(0x0027a004, d_0027a004::PatternSlots8__first_free);

// f_0027a060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the names and ids of the 8 pattern slots.
namespace d_0027a060 {

struct __attribute__((packed)) Local_0027a060_r5_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_0027a060_r5_1, word_870, 0x870);
GUEST_OFFSET(Local_0027a060_r5_1, word_874, 0x874);

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> sead__FixedSafeString_30___FixedSafeString_001b3f24;

void PatternSlots8__clear_names(u32 pattern_slots8) {
    u32 r6 = pattern_slots8;
    u32 i = 0u;
    u32 r7 = ~0u;
    do {
        gptr<Local_0027a060_r5_1> r5_1 = gptr<Local_0027a060_r5_1>(r6 + (i * 0xfu + (i << 8) << 3));
        sead__FixedSafeString_30___FixedSafeString_001b3f24(r5_1.addr(), 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);
        i += 1u;
        r5_1->word_870 = r7;
        r5_1->word_874 = r7;
        guest::preempt();
    } while (i < 8u);
}

}  // namespace d_0027a060
GUEST_EXPORT_FRAMED(0x0027a060, d_0027a060::PatternSlots8__clear_names, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_0027a0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the patterns and ids of the 8 pattern slots.
namespace d_0027a0a0 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Pattern, word_870, 0x870);
GUEST_OFFSET(Pattern, word_874, 0x874);

inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> Pattern__clear;

void PatternSlots8__clear(u32 pattern_slots8) {
    u32 r6 = pattern_slots8;
    u32 i = 0u;
    u32 r7 = ~0u;
    do {
        gptr<Pattern> pattern = gptr<Pattern>(r6 + (i * 0xfu + (i << 8) << 3));
        Pattern__clear(pattern.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        i += 1u;
        pattern->word_870 = r7;
        pattern->word_874 = r7;
        guest::preempt();
    } while (i < 8u);
}

}  // namespace d_0027a0a0
GUEST_EXPORT_FRAMED(0x0027a0a0, d_0027a0a0::PatternSlots8__clear, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_0027a2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives the first free pattern slot the id pair; false when all are taken.
namespace d_0027a2bc {

struct __attribute__((packed)) Local_0027a2bc_r12_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_0027a2bc_r12_1, word_870, 0x870);
GUEST_OFFSET(Local_0027a2bc_r12_1, word_874, 0x874);


u32 PatternSlots8__claim(u32 pattern_slots8, u32 r1, u32 r2) {
    u32 i = 0u;
    do {
        gptr<Local_0027a2bc_r12_1> r12_1 = gptr<Local_0027a2bc_r12_1>(pattern_slots8 + (i * 0xfu + (i << 8) << 3));
        if (r12_1->word_870 + 1u == 0 && r12_1->word_874 + 1u == 0) {
            *gptr<u32>(pattern_slots8 + (i * 0xfu + (i << 8) << 3) + 0x870u) = r1;
            r12_1->word_874 = r2;
            return 1u;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 8);
    return 0u;
}

}  // namespace d_0027a2bc
GUEST_EXPORT_FRAMED(0x0027a2bc, d_0027a2bc::PatternSlots8__claim, 0x10);  // pushes {r4} first, as the original

// f_0027a31c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 8 pattern slots, all free.
namespace d_0027a31c {

struct __attribute__((packed)) Local_0027a31c_r5_1 {
    u8 unknown_0[0x870];  // (not used here)
    u32 word_870;
    u32 word_874;
};
GUEST_OFFSET(Local_0027a31c_r5_1, word_870, 0x870);
GUEST_OFFSET(Local_0027a31c_r5_1, word_874, 0x874);

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> sead__FixedSafeString_30___FixedSafeString_001b3f24;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 PatternSlots8__construct(u32 pattern_slots8) {
    u32 r0_1 = for_each_element(pattern_slots8, 0x1b497cu, 0x878u, 8u);
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r6 = r0_1;
    u32 i = 0u;
    u32 r7 = ~0u;
    do {
        gptr<Local_0027a31c_r5_1> r5_1 = gptr<Local_0027a31c_r5_1>(r6 + (i * 0xfu + (i << 8) << 3));
        sead__FixedSafeString_30___FixedSafeString_001b3f24(r5_1.addr(), 0x16u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        r5_1->word_870 = r7;
        r5_1->word_874 = r7;
        guest::preempt();
    } while (i < 8u);
    return r6;
}

}  // namespace d_0027a31c
GUEST_EXPORT_FRAMED(0x0027a31c, d_0027a31c::PatternSlots8__construct, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_0027a4f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the current player's position, then imports the phrase into each of the 4 players who exist.
namespace d_0027a4f4 {

inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x005c6760, u32(u32, u32, u32, u32)> update_current_player_position;
inline constexpr guest::Function<0x006bca58, u32(u32, u32, u32, u32)> namespace___TakumiImportPhrase__TakumiImportPhrase;

u32 Players__import_phrases(u32 players, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = 0;
    u32 r6 = players;
    u32 r7 = r1;
    u32 r8 = r2;
    update_current_player_position(players, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    do {
        u32 r5_1 = r6 + i * 0xa480u;
        r0_2 = PersonalId__is_set(r5_1 + 0x55a6u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r0_2 = namespace___TakumiImportPhrase__TakumiImportPhrase(r5_1, r7, r8, i & 0xffu);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (i < 4u);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_0027a4f4
GUEST_EXPORT_FRAMED(0x0027a4f4, d_0027a4f4::Players__import_phrases, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_0027a6c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the 4 players whose villager record (+0x8e08, below stage 3) is of the villager; null when none.
namespace d_0027a6c4 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x0030e56c, u32(u32, u32)> entry_matches_identity;

u32 Players__find_with_villager_record(u32 players, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r6 = players;
    u32 r8 = r1;
    u32 is_villager = is_villager_record(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager == 0) {
        return is_villager;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a6e8:;
    u32 r0_2 = r4 & 0xffu;
    if (r0_2 >= 4u) {
        r5_1 = r9;
    } else {
        r1 = r0_2 * 0x149u;
        r5_1 = r6 + (r1 << 7);
    }
    if (r5_1 == 0) {
        goto L_27a768;
    }
    r0_3 = is_villager_record(r8, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a768;
    }
    r7_1 = r5_1 + 0x8e08u;
    r0_4 = SavedRecordInner__has_value(r7_1, r1);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0 || *gptr<u8>(r7_1 + 9u) >= 3u) {
        goto L_27a768;
    }
    r0_5 = entry_matches_identity(r7_1, r8);
    r1 = guest::cpu()->r[1];
    if (r0_5 == 0 || r7_1 == 0) {
        goto L_27a768;
    }
    return r5_1;
L_27a768:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        return 0u;
    }
    guest::preempt();
    goto L_27a6e8;
}

}  // namespace d_0027a6c4
GUEST_EXPORT_FRAMED(0x0027a6c4, d_0027a6c4::Players__find_with_villager_record, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027a780: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the 4 players whose villager request (+0x8d4c, stage 0) is for the villager's town slot; null when
// none.
namespace d_0027a780 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;

u32 Players__find_with_villager_request(u32 players, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r8_1 = 0;
    u32 r0_7 = 0;
    u32 r6 = players;
    u32 r7 = r1;
    u32 is_villager = is_villager_record(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager == 0) {
        return is_villager;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a7a4:;
    u32 r0_2 = r4 & 0xffu;
    if (r0_2 >= 4u) {
        r5_1 = r9;
    } else {
        r1 = r0_2 * 0x149u;
        r5_1 = r6 + (r1 << 7);
    }
    if (r5_1 == 0) {
        goto L_27a83c;
    }
    r0_3 = is_villager_record(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a83c;
    }
    r0_4 = get_save_data(r0_3, r1);
    r0_6 = index_of_villager_in_town(r0_4 + 0x292a4u, r7);
    r8_1 = r5_1 + 0x8d4cu;
    r0_7 = SavedRecordInner__has_value(r8_1);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0 || *gptr<u8>(r8_1 + 9u) != 0 || u32(*gptr<s8>(r5_1 + 0x8d5bu)) != r0_6 || r8_1 == 0) {
        goto L_27a83c;
    }
    return r5_1;
L_27a83c:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::preempt();
    goto L_27a7a4;
}

}  // namespace d_0027a780
GUEST_EXPORT_FRAMED(0x0027a780, d_0027a780::Players__find_with_villager_request, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027a858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the 4 players whose villager request (+0x8d5c, below stage 2) is for the villager's town slot; null
// when none.
namespace d_0027a858 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;

u32 Players__find_with_villager_request_b(u32 players, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r8_1 = 0;
    u32 r0_7 = 0;
    u32 r6 = players;
    u32 r7 = r1;
    u32 is_villager = is_villager_record(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager == 0) {
        return is_villager;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a87c:;
    u32 r0_2 = r4 & 0xffu;
    if (r0_2 >= 4u) {
        r5_1 = r9;
    } else {
        r1 = r0_2 * 0x149u;
        r5_1 = r6 + (r1 << 7);
    }
    if (r5_1 == 0) {
        goto L_27a914;
    }
    r0_3 = is_villager_record(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a914;
    }
    r0_4 = get_save_data(r0_3, r1);
    r0_6 = index_of_villager_in_town(r0_4 + 0x292a4u, r7);
    r8_1 = r5_1 + 0x8d5cu;
    r0_7 = SavedRecordInner__has_value(r8_1);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0 || *gptr<u8>(r8_1 + 9u) >= 2u || u32(*gptr<s8>(r5_1 + 0x8d6bu)) != r0_6 || r8_1 == 0) {
        goto L_27a914;
    }
    return r5_1;
L_27a914:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::preempt();
    goto L_27a87c;
}

}  // namespace d_0027a858
GUEST_EXPORT_FRAMED(0x0027a858, d_0027a858::Players__find_with_villager_request_b, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027a930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the 4 players whose villager item record (+0x8d6c, not stage 1) is for the villager's town slot; null
// when none.
namespace d_0027a930 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ef0, u32(u32)> SavedRecordInner__has_value;

u32 Players__find_with_villager_item_record(u32 players, u32 r1) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r8_1 = 0;
    u32 r6 = players;
    u32 r7 = r1;
    u32 is_villager = is_villager_record(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager == 0) {
        return is_villager;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a954:;
    u32 r0_2 = r4 & 0xffu;
    if (r0_2 >= 4u) {
        r5_1 = r9;
    } else {
        r1 = r0_2 * 0x149u;
        r5_1 = r6 + (r1 << 7);
    }
    if (r5_1 == 0) {
        goto L_27a9e0;
    }
    r0_3 = is_villager_record(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a9e0;
    }
    r0_4 = get_save_data(r0_3, r1);
    r0_6 = index_of_villager_in_town(r0_4 + 0x292a4u, r7);
    r8_1 = r5_1 + 0x8d6cu;
    SavedRecordInner__has_value(r8_1);
    r1 = guest::cpu()->r[1];
    if (*gptr<u8>(r8_1 + 9u) == 1u || u32(*gptr<s8>(r5_1 + 0x8d80u)) != r0_6 || r8_1 == 0) {
        goto L_27a9e0;
    }
    return r5_1;
L_27a9e0:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::preempt();
    goto L_27a954;
}

}  // namespace d_0027a930
GUEST_EXPORT_FRAMED(0x0027a930, d_0027a930::Players__find_with_villager_item_record, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027a9fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the 4 players with the name pair record; null when none.
namespace d_0027a9fc {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x0076de78, u32(u32, u32, u32)> Player__has_name_pair_record;

u32 Players__find_with_name_pair(u32 players, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r9 = 0;
    u32 player = 0;
    u32 r0_3 = 0;
    u32 r6 = players;
    u32 r8 = r2;
    u32 r7 = r1;
    u32 is_villager = is_villager_record(r1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (is_villager == 0) {
        return is_villager;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27aa24:;
    u32 r0_2 = r4 & 0xffu;
    if (r0_2 >= 4u) {
        player = r9;
    } else {
        r1 = r0_2 * 0x149u;
        player = r6 + (r1 << 7);
    }
    if (player == 0) {
        goto L_27aa70;
    }
    r0_3 = Player__has_name_pair_record(player, r7, r8);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0 || player + 0x8d84u == 0) {
        goto L_27aa70;
    }
    return player;
L_27aa70:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::preempt();
    goto L_27aa24;
}

}  // namespace d_0027a9fc
GUEST_EXPORT_FRAMED(0x0027a9fc, d_0027a9fc::Players__find_with_name_pair, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027aac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the current player's position, then runs the update on each of the 4 players who exist.
namespace d_0027aac0 {

inline constexpr guest::Function<0x001187cd, u32(u32, u32, u32, u32)> Player__add_play_time;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x005c6760, u32(u32, u32, u32, u32)> update_current_player_position;

void Players__apply_to_existing(u32 players, u32 r1, u32 r2, u32 r3) {
    u32 r6 = players;
    u32 r7 = r1;
    u32 r8 = r2;
    update_current_player_position(players, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    do {
        u32 r5_1 = r6 + i * 0xa480u;
        u32 r0_2 = PersonalId__is_set(r5_1 + 0x55a6u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            Player__add_play_time(r5_1, r7, r8, i & 0xffu);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (i < 4u);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0027aac0
GUEST_EXPORT_FRAMED(0x0027aac0, d_0027aac0::Players__apply_to_existing, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_0027b3a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the 8-item outfit from the given items (the fourth empty) and marks it set.
namespace d_0027b3a8 {

struct __attribute__((packed)) Outfit8 {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Outfit8, byte_20, 0x20);

struct __attribute__((packed)) Local_0027b3a8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027b3a8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0027b3a8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0027b3a8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0027b3a8_ea_1, word_c, 0xc);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;

u32 Outfit8__construct(gptr<Outfit8> outfit8, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0027b3a8_ea_1> ea_1 = gptr<Local_0027b3a8_ea_1>(guest::cpu()->r[13] + 0x20u);
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r6_1 = ea_1->word_8;
    u32 r7_1 = ea_1->word_c;
    Item__copy_b(outfit8.addr(), r1);
    Item__copy_b(outfit8.addr() + 4u, r2);
    Item__copy_b(outfit8.addr() + 8u, r3);
    Item__copy_b(outfit8.addr() + 0xcu, empty_item_address);
    Item__copy_b(outfit8.addr() + 0x10u, r4_1);
    Item__copy_b(outfit8.addr() + 0x14u, r5_1);
    Item__copy_b(outfit8.addr() + 0x18u, r6_1);
    Item__copy_b(outfit8.addr() + 0x1cu, r7_1);
    outfit8->byte_20 = 1;
    guest::cpu()->r[1] = 1u;
    return outfit8.addr();
}

}  // namespace d_0027b3a8
GUEST_EXPORT_FRAMED(0x0027b3a8, d_0027b3a8::Outfit8__construct, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0027b528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places item `index` (below 3) in the room or the field once, when its owner is the current player.
namespace d_0027b528 {

struct __attribute__((packed)) Local_0027b528_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027b528_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0027b528_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0027b528_r4_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Local_0027b528_r4_1, byte_e, 0xe);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> RoomGrid__furniture_at_layer;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

struct __attribute__((packed)) ItemSlots3PlaceInWorldFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(ItemSlots3PlaceInWorldFrame, word_0, 0x0);
GUEST_SIZE(ItemSlots3PlaceInWorldFrame, 0xc);

u32 ItemSlots3__place_in_world(u32 item_slots3, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemSlots3PlaceInWorldFrame> frame;  // the original's stack frame
    if (r2 >= 3u) {
        return item_slots3;
    }
    gptr<Local_0027b528_r4_1> r4_1 = gptr<Local_0027b528_r4_1>(item_slots3 + r2);
    gptr<Local_0027b528_ea_1> ea_1 = gptr<Local_0027b528_ea_1>(frame.at(0x28).addr());
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    u32 r3_1 = frame.at(4).addr();
    if (r4_1->byte_e != 0) {
        construct_item(r3_1, 0x2083u, r2, r3_1);
    } else {
        Item__copy_b(r3_1, item_slots3 + (r2 << 2) + 2u, r2, r3_1);
    }
    if (r4_1->byte_e == 0) {
        r4_1->byte_e = 1;
        u32 scene_2 = current_scene_id(1u);
        if (scene_2 == r1) {
            u32 r0_3 = item_has_valid_data(frame.at(4).addr());
            if (r0_3 != 0) {
                RoomGrid__furniture_at_layer(r3, r6_1, 1u, r7_1);
            } else {
                u32 map_table = get_map_table(r0_3);
                if (map_table != 0) {
                    u32 r0_5 = frame.at(8).addr();
                    construct_item(r0_5, 0x2083u, guest::cpu()->r[2], guest::cpu()->r[3]);
                    frame->word_0 = 0;
                    GridMap__place_item_at_world(map_table, r0_5, r3, r6_1);
                    clear_field_tile(r3, r6_1, 1u);
                }
            }
        }
    }
    return frame.at(4).addr();
}

}  // namespace d_0027b528
GUEST_EXPORT_FRAMED(0x0027b528, d_0027b528::ItemSlots3__place_in_world, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0027c060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a tool button node: a button node with its layout, animations and control.
namespace d_0027c060 {

struct __attribute__((packed)) Local_0027c060_r0_10 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0xe34];  // (not used here)
    u32 word_e54;
    u32 word_e58;
    u8 byte_e5c;
    u8 byte_e5d;
    u8 byte_e5e;
    u8 byte_e5f;
};
GUEST_OFFSET(Local_0027c060_r0_10, word_1c, 0x1c);
GUEST_OFFSET(Local_0027c060_r0_10, word_e54, 0xe54);
GUEST_OFFSET(Local_0027c060_r0_10, word_e58, 0xe58);
GUEST_OFFSET(Local_0027c060_r0_10, byte_e5c, 0xe5c);
GUEST_OFFSET(Local_0027c060_r0_10, byte_e5d, 0xe5d);
GUEST_OFFSET(Local_0027c060_r0_10, byte_e5e, 0xe5e);
GUEST_OFFSET(Local_0027c060_r0_10, byte_e5f, 0xe5f);

struct __attribute__((packed)) Local_0027c060_r0_8 {
    u8 unknown_0[0xe04];  // (not used here)
    u32 word_e04;
    u32 word_e08;
};
GUEST_OFFSET(Local_0027c060_r0_8, word_e04, 0xe04);
GUEST_OFFSET(Local_0027c060_r0_8, word_e08, 0xe08);

struct __attribute__((packed)) Local_0027c060_r1_5 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0027c060_r1_5, float_0, 0x0);
GUEST_OFFSET(Local_0027c060_r1_5, float_4, 0x4);

inline constexpr u32 vtable_ToolButtonNode = 0x008ef958u;
inline constexpr u32 vtable_ToolButtonNode_at_e0 = 0x008ef9a0u;
inline guest::global<u32, 0x008490c8> global_008490c8;
inline guest::global<u32, 0x008490cc> global_008490cc;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> construct_button_node;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x004ba6c8, u32(u32, u32)> Pane__init_size;

u32 ToolButtonNode__ToolButtonNode(gptr<ToolButtonNode> tool_button_node, u32 r1, u32 r2, u32 r3, float S0) {
    construct_button_node(tool_button_node.addr(), r1, r2, r3);
    tool_button_node->word_e4 = 0;
    tool_button_node->byte_e8 = 0;
    u32 r3_1 = *global_008490cc;
    tool_button_node->word_ec = *global_008490c8;
    tool_button_node->word_f0 = r3_1;
    tool_button_node->word_f4 = 0;
    tool_button_node->byte_f8 = 0;
    tool_button_node->word_fc = 0;
    tool_button_node->tool_button_node_vtable = vtable_ToolButtonNode_at_e0;
    tool_button_node->vtable = vtable_ToolButtonNode;
    tool_button_node->word_100 = 0;
    u32 r0_3 = for_each_element((tool_button_node.addr() + 0x100u) + 4u, 0x2b6de0u, 0xe0u, 0xcu) + 0xa80u;
    construct_button_action_control(r0_3);
    u32 r0_6 = Layout__Layout(r0_3 + 0xe4u) + 0x14cu;
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;
    construct_layout_animation(r0_7);
    gptr<Local_0027c060_r0_8> r0_8 = gptr<Local_0027c060_r0_8>(r0_7 - 0xddcu);
    r0_8->word_e04 = 0;
    float S0_6 = 0.0f;
    gptr<Local_0027c060_r1_5> r1_5 = gptr<Local_0027c060_r1_5>(r0_8.addr() + 0xe0cu);
    r0_8->word_e08 = 0;
    r1_5->float_0 = S0_6;
    r1_5->float_4 = S0_6;
    u32 r0_9 = r0_8.addr() + 0xe20u;
    guest::cpu()->s[0] = S0_6;
    Pane__init_size(r0_9, r1_5.addr());
    gptr<Local_0027c060_r0_10> r0_10 = gptr<Local_0027c060_r0_10>(r0_9 - 0xe20u);
    r0_10->word_e54 = ~0u;
    r0_10->word_e58 = 0;
    r0_10->byte_e5c = 0;
    r0_10->byte_e5d = 0;
    r0_10->byte_e5e = 0;
    u32 r1_6 = r0_10.addr() + 0xc68u;
    r0_10->byte_e5f = 0;
    r0_10->word_1c = r1_6;
    guest::cpu()->r[1] = r1_6;
    return r0_10.addr();
}

}  // namespace d_0027c060
GUEST_EXPORT_FRAMED(0x0027c060, d_0027c060::ToolButtonNode__ToolButtonNode, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027c2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the town's map templates (sea sides) and grass texture and resets its slots.
namespace d_0027c2c8 {

inline constexpr u32 town_map_template_state_address = 0x0095df58u;
inline constexpr u32 heap_mgr_instance_address = 0x00975338u;
inline constexpr u32 town_map_templates_address = 0x00ad5ba0u;
inline constexpr u32 town_map_templates_a_address = 0x00ad5ce8u;
inline constexpr u32 town_map_templates_b_address = 0x00ad5dd8u;
inline guest::global<u32, 0x00975338> heap_mgr_instance;
inline guest::global<u32, 0x00ad5ba4> global_00ad5ba4;
inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> clear_list;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;
inline constexpr guest::Function<0x0027c8f8, u32(u32, u32, u32, u32)> Map__place_creatures;
inline constexpr guest::Function<0x002ee898, u32(u32, u32, u32)> SplitLoader__start;
inline constexpr guest::Function<0x002ee91c, u32(u32, u32, u32, u32)> LoadSplitWord__release;
inline constexpr guest::Function<0x002f73b8, u32(u32)> unload_split_part;
inline constexpr guest::Function<0x002f747c, u32(u32)> ObjectOwner__release_object;
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> current_thread_context;
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> WordAndFlag__clear;
inline constexpr guest::Function<0x005b1a2c, u32(u32, u32)> ClearableSlot__copy_from;
inline constexpr guest::Function<0x00755ac4, u32(u32)> word_is_set;
inline constexpr guest::Function<0x0081533c, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0081533c;
inline constexpr guest::Function<0x00815500, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_00815500;

u32 TownMap__load_templates(u32 town_map, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r4 = town_map;
    u32 r5 = r1;
    u32 context = current_thread_context(*heap_mgr_instance, r1, r2, r3);
    if (*global_00ad5ba4 == 0) {
        sead__SafeStringBase_char___SafeStringBase_00815500(town_map_templates_address, context, 0x32000u);
    }
    sead__SafeStringBase_char___SafeStringBase_0081533c(frame.at(0).addr(), town_map_templates_address, 0x894fc4u, 0u);
    ClearableSlot__copy_from(town_map_template_state_address, frame.at(0).addr());
    word_is_set(town_map_template_state_address);
    SplitLoader__start(town_map_templates_a_address, 0x894f9cu, context);
    SplitLoader__start(town_map_templates_b_address, 0x894f74u, context);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    do {
        r0_4 = Map__place_creatures(r4, r5, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_4 == 0);
    r5 = town_map_templates_address;
    r4 = *gptr<u32>(r5 + 0x128u);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            unload_split_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    r4 = *gptr<u32>(r5 + 0x140u);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            unload_split_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    clear_list(r5 + 0x124u, r1, r2, r3);
    clear_list(r5 + 0x130u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    clear_list(r5 + 0x13cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    queue_append(r5 + 0x130u, r5 + 8u);
    ObjectOwner__release_object(r5);
    LoadSplitWord__release(town_map_templates_a_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return LoadSplitWord__release(town_map_templates_b_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0027c2c8
GUEST_EXPORT(0x0027c2c8, d_0027c2c8::TownMap__load_templates);

// f_0027c554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the flag at 0x95df50.
namespace d_0027c554 {

inline constexpr u32 flag_95df50_address = 0x0095df50u;
inline guest::global<u32, 0x0095df50> flag_95df50;

u32 clear_flag_95df50() {
    *flag_95df50 = 0;
    guest::cpu()->r[1] = flag_95df50_address;
    return 0u;
}

}  // namespace d_0027c554
GUEST_EXPORT(0x0027c554, d_0027c554::clear_flag_95df50);

// f_0027d310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Draws the 4 random seeds (0xad5b90) and picks one of the two layout sides at random.
namespace d_0027d310 {

inline constexpr u32 town_seeds_address = 0x00ad5b90u;
inline guest::global<u8, 0x0095df54> town_seed_a;
inline guest::global<u8, 0x0095df55> town_seed_b;
inline guest::global<u8, 0x0095df56> town_seed_c;
inline guest::global<u8, 0x0095df57> town_seed_d;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;

u32 randomize_town_seeds(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 i = 0u;
    u32 r6 = town_seeds_address;
    do {
        u32 r5_1 = i >= 4u ? town_seeds_address : r6 + (i << 2);
        u32 random = random_below(~0x80000000u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        *gptr<u32>(r5_1) = random;
        guest::preempt();
    } while (i < 4u);
    u32 random_2 = random_below(0x64u, r1, r2, r3);
    if (random_2 - 0x32u != 0 && random_2 - 0x32u >> 0x1f == (((random_2 ^ 0x32u) & (random_2 ^ random_2 - 0x32u)) >> 0x1f)) {
        *town_seed_a = 0;
        *town_seed_b = 1;
        *town_seed_c = 0;
        *town_seed_d = 1;
    } else {
        *town_seed_a = 1;
        *town_seed_b = 0;
        *town_seed_c = 1;
        *town_seed_d = 0;
    }
    guest::cpu()->r[1] = 0u;
    return 1u;
}

}  // namespace d_0027d310
GUEST_EXPORT_FRAMED(0x0027d310, d_0027d310::randomize_town_seeds, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0027d394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the fish shadow is not finished, or its fish slot (+0x116) is still in use in the fish manager.
namespace d_0027d394 {

inline constexpr u32 fish_manager_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> fish_manager;
inline constexpr guest::Function<0x00251c24, u32(u32, u32)> FishMgr__slot_is_owned_here;
inline constexpr guest::Function<0x00300900, u32(u32, u32)> NetSession__signed_value_veneer;

u32 AcFsFdShadow__is_alive(gptr<AcFsFdShadow> ac_fs_fd_shadow, u32 r1) {
    if (NetSession__signed_value_veneer(ac_fs_fd_shadow.addr(), r1) == 0) {
        return 1u;
    }
    u32 r1_2 = ac_fs_fd_shadow->byte_116;
    u32 r0_3 = FishMgr__slot_is_owned_here(*fish_manager, r1_2);
    return r0_3 == 0 ? r0_3 : 1u;
}

}  // namespace d_0027d394
GUEST_EXPORT_FRAMED(0x0027d394, d_0027d394::AcFsFdShadow__is_alive, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027d44c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True for ordinary fish; for the kinds 0x48 to 0x4a, whether their condition holds.
namespace d_0027d44c {

inline constexpr guest::Function<0x00599c6c, u32(u32)> FieldDrops__has_free_spot;

u32 AcFsFdShadow__special_kind_ready(gptr<AcFsFdShadow> ac_fs_fd_shadow) {
    u32 r0_1 = ac_fs_fd_shadow->byte_c9;
    if (r0_1 != 0x48u && r0_1 != 0x49u && r0_1 != 0x4au) {
        return 1u;
    }
    u32 r0_2 = FieldDrops__has_free_spot(r0_1);
    return r0_2 == 0 ? r0_2 : 1u;
}

}  // namespace d_0027d44c
GUEST_EXPORT_FRAMED(0x0027d44c, d_0027d44c::AcFsFdShadow__special_kind_ready, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027d490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the player's reference to the shadow (player index +0x119, below 4) and marks it released (4).
namespace d_0027d490 {

struct __attribute__((packed)) AcFsFdShadowReleasePlayerSlotArg0 {
    u8 unknown_0[0x119];  // (not used here)
    u8 byte_119;
};
GUEST_OFFSET(AcFsFdShadowReleasePlayerSlotArg0, byte_119, 0x119);

struct __attribute__((packed)) Local_0027d490_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027d490_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0027d490_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0027d490_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0027d490_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0027d490_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027d490_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0027d490_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0027d490_ea_3, word_c, 0xc);

struct __attribute__((packed)) Local_0027d490_r0_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_0027d490_r0_2, word_0, 0x0);

inline constexpr guest::Function<0x002d0998, u32(u32, u32, u32, u32)> held_object_record_of_slot;

struct __attribute__((packed)) AcFsFdShadowReleasePlayerSlotFrame {
    u8 byte_0;
    u8 unknown_1[0xf];  // (not read or written by name)
};
GUEST_OFFSET(AcFsFdShadowReleasePlayerSlotFrame, byte_0, 0x0);
GUEST_SIZE(AcFsFdShadowReleasePlayerSlotFrame, 0x10);

u32 AcFsFdShadow__release_player_slot(gptr<AcFsFdShadowReleasePlayerSlotArg0> ac_fs_fd_shadow, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<AcFsFdShadowReleasePlayerSlotFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = ac_fs_fd_shadow->byte_119;
    if (r1_1 >= 4u) {
        guest::cpu()->r[1] = r1_1;
        return ac_fs_fd_shadow.addr();
    }
    gptr<Local_0027d490_ea_1> ea_1 = gptr<Local_0027d490_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    frame->byte_0 = u8(r1_1);
    u32 r0_1 = frame.at(0).addr();
    gptr<Local_0027d490_r0_2> r0_2 = gptr<Local_0027d490_r0_2>(held_object_record_of_slot(r0_1, r1_1, guest::cpu()->r[2], r3));
    u32 r1_2 = guest::cpu()->r[1];
    u32 zf_1 = r0_2.addr() == 0;
    if (!zf_1) {
        r1_2 = r0_2->word_0;
        zf_1 = r1_2 == 0;
    }
    if (!zf_1 && r1_2 == ac_fs_fd_shadow.addr()) {
        r1_2 = 0u;
        r0_2->word_0 = r1_2;
    }
    *gptr<u8>(ac_fs_fd_shadow.addr() + 0x119u) = 4;
    gptr<Local_0027d490_ea_3> ea_3 = gptr<Local_0027d490_ea_3>(frame.at(0).addr());
    u32 r4_1 = ea_3->word_4;
    u32 r5_1 = ea_3->word_8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return 4u;
}

}  // namespace d_0027d490
GUEST_EXPORT(0x0027d490, d_0027d490::AcFsFdShadow__release_player_slot);

// f_0027d790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Packs the shadow's position (+0x48, +0x50), state and kind into its fish record (fetched once into +0x188) when its
// slot is in use.
namespace d_0027d790 {

struct __attribute__((packed)) AcFsFdShadowSyncRecordArg0 {
    u8 unknown_0[0x48];  // (not used here)
    float float_48;
    u8 unknown_4c[0x4];  // (not used here)
    float float_50;
    u8 unknown_54[0xc2];  // (not used here)
    u8 byte_116;
    u8 byte_117;
    u8 byte_118;
    u8 unknown_119[0x6f];  // (not used here)
    u32 word_188;
};
GUEST_OFFSET(AcFsFdShadowSyncRecordArg0, float_48, 0x48);
GUEST_OFFSET(AcFsFdShadowSyncRecordArg0, float_50, 0x50);
GUEST_OFFSET(AcFsFdShadowSyncRecordArg0, byte_116, 0x116);
GUEST_OFFSET(AcFsFdShadowSyncRecordArg0, byte_117, 0x117);
GUEST_OFFSET(AcFsFdShadowSyncRecordArg0, byte_118, 0x118);
GUEST_OFFSET(AcFsFdShadowSyncRecordArg0, word_188, 0x188);

struct __attribute__((packed)) Local_0027d790_r0_3 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x1];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Local_0027d790_r0_3, byte_0, 0x0);
GUEST_OFFSET(Local_0027d790_r0_3, byte_1, 0x1);
GUEST_OFFSET(Local_0027d790_r0_3, byte_2, 0x2);
GUEST_OFFSET(Local_0027d790_r0_3, byte_3, 0x3);
GUEST_OFFSET(Local_0027d790_r0_3, byte_5, 0x5);

inline constexpr u32 fish_manager_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> fish_manager;
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> FishMgr__slot_is_owned_here;
inline constexpr guest::Function<0x00255968, u32(u32, u32)> element_address_255968;

u32 AcFsFdShadow__sync_record(gptr<AcFsFdShadowSyncRecordArg0> ac_fs_fd_shadow, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r1_1 = ac_fs_fd_shadow->byte_116;
    u32 fish_mgr = *fish_manager;
    u32 r0_2 = FishMgr__slot_is_owned_here(fish_mgr, r1_1, r2, r3);
    u32 r1_2 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    if (r0_2 != 0) {
        gptr<Local_0027d790_r0_3> r0_3 = gptr<Local_0027d790_r0_3>(ac_fs_fd_shadow->word_188);
        if (r0_3.addr() == 0) {
            u32 r0_4 = *fish_manager;
            u32 r1_3 = ac_fs_fd_shadow->byte_116;
            r0_3 = gptr<Local_0027d790_r0_3>(element_address_255968(r0_4, r1_3));
            ac_fs_fd_shadow->word_188 = r0_3.addr();
        }
        u32 r1_4 = vcvt_uz_f(ac_fs_fd_shadow->float_48);
        r0_3->byte_1 = u8(u32(r0_3->byte_1) & ~0xf8u | 0xf8u & r1_4 << 1);
        u32 r1_5 = u32(r0_3->byte_2) & ~0x1fu | (0x3e0u & r1_4 >> 2) >> 5;
        r0_3->byte_2 = u8(r1_5);
        S0_1 = std::bit_cast<float>(vcvt_uz_f(ac_fs_fd_shadow->float_50));
        u32 r1_6 = std::bit_cast<u32>(S0_1);
        r0_3->byte_2 = u8((r1_5 & ~0xe0u) | 0xe0u & r1_6 << 3);
        r0_3->byte_3 = u8(u32(r0_3->byte_3) & ~0x7fu | (0x3f8u & r1_6 >> 2) >> 3);
        r0_3->byte_0 = u8(u32(r0_3->byte_0) & ~0x80u | r1 << 7);
        r0_3->byte_1 = u8(u32(r0_3->byte_1) & ~7u | (r1 & 0xeu) >> 1);
        r1_2 = u32(r0_3->byte_5) & ~0x3cu | (u32(ac_fs_fd_shadow->byte_117) & 0xfu) << 2;
        r0_3->byte_5 = u8(r1_2);
        r0_2 = 1u;
        ac_fs_fd_shadow->byte_118 = u8(r0_2);
    }
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    return r0_2;
}

}  // namespace d_0027d790
GUEST_EXPORT_FRAMED(0x0027d790, d_0027d790::AcFsFdShadow__sync_record, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0027d8a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` (below 8, 0xc bytes each) of the fish parameters at 0x9841ec; the default otherwise.
namespace d_0027d8a8 {

inline constexpr u32 fish_params_address = 0x009841ecu;
inline constexpr u32 global_00984204_address = 0x00984204u;

u32 fish_param_entry(u32 r0) {
    return r0 >= 8u ? global_00984204_address : r0 * 0xcu + fish_params_address;
}

}  // namespace d_0027d8a8
GUEST_EXPORT(0x0027d8a8, d_0027d8a8::fish_param_entry);

// f_0027d93c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The float at +8 of fish parameter entry `index` (below 8); the default otherwise.
namespace d_0027d93c {

inline constexpr u32 fish_params_address = 0x009841ecu;
inline guest::global<u32, 0x0098420c> global_0098420c;

void fish_param_float_8(u32 r0) {
    if (r0 >= 8u) {
        float S0_1 = std::bit_cast<float>(*global_0098420c);
        guest::cpu()->r[1] = fish_params_address;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = std::bit_cast<float>(*gptr<u32>(r0 * 0xcu + fish_params_address + 8u));
    guest::cpu()->r[1] = fish_params_address;
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_0027d93c
GUEST_EXPORT(0x0027d93c, d_0027d93c::fish_param_float_8);

// f_0027d9a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the value of fish slot `index` when it is in use.
namespace d_0027d9a8 {

inline constexpr u32 fish_manager_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> fish_manager;
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> FishMgr__slot_is_owned_here;
inline constexpr guest::Function<0x0025222c, u32(u32, u32, u32, u32)> FishMgr__claim_slot_here;

void FishManager__set_slot_value(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 fish_mgr = *fish_manager;
    if (FishMgr__slot_is_owned_here(fish_mgr, r2, r2, guest::cpu()->r[3]) != 0) {
        frame.release();
        FishMgr__claim_slot_here(fish_mgr, r1, r2, guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_0027d9a8
GUEST_EXPORT(0x0027d9a8, d_0027d9a8::FishManager__set_slot_value);

// f_0027d9ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of fish slot `index` when it is in use; 0 otherwise.
namespace d_0027d9ec {

inline constexpr u32 fish_manager_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> fish_manager;
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> FishMgr__slot_is_owned_here;
inline constexpr guest::Function<0x00252338, u32(u32, u32, u32, u32)> FishMgr__release_slot_here;

u32 FishManager__slot_value(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 fish_mgr = *fish_manager;
    u32 r0_1 = FishMgr__slot_is_owned_here(fish_mgr, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        frame.release();
        return FishMgr__release_slot_here(fish_mgr, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return r0_1;
}

}  // namespace d_0027d9ec
GUEST_EXPORT(0x0027d9ec, d_0027d9ec::FishManager__slot_value);

// f_0027da24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the shadow's fish slot (+0x116).
namespace d_0027da24 {

struct __attribute__((packed)) AcFsFdShadowReleaseSlotArg0 {
    u8 unknown_0[0x116];  // (not used here)
    u8 byte_116;
};
GUEST_OFFSET(AcFsFdShadowReleaseSlotArg0, byte_116, 0x116);

inline constexpr u32 fish_manager_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> fish_manager;
inline constexpr guest::Function<0x0025286c, u32(u32, u32, u32)> FishMgr__slot_is_free_here;

u32 AcFsFdShadow__release_slot(gptr<AcFsFdShadowReleaseSlotArg0> ac_fs_fd_shadow) {
    u32 r1_1 = ac_fs_fd_shadow->byte_116;
    return FishMgr__slot_is_free_here(*fish_manager, r1_1, 0u);
}

}  // namespace d_0027da24
GUEST_EXPORT(0x0027da24, d_0027da24::AcFsFdShadow__release_slot);

// f_0027da40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the reference to the object held by player `index` (below 4).
namespace d_0027da40 {

struct __attribute__((packed)) Local_0027da40_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027da40_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0027da40_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0027da40_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0027da40_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0027da40_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0027da40_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0027da40_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0027da40_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_0027da40_r0_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_0027da40_r0_2, word_0, 0x0);

inline constexpr guest::Function<0x002d0998, u32(u32, u32, u32, u32)> held_object_record_of_slot;

struct __attribute__((packed)) ClearPlayerReferenceFrame {
    u8 byte_0;
    u8 unknown_1[0xf];  // (not read or written by name)
};
GUEST_OFFSET(ClearPlayerReferenceFrame, byte_0, 0x0);
GUEST_SIZE(ClearPlayerReferenceFrame, 0x10);

u32 clear_player_reference(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ClearPlayerReferenceFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    gptr<Local_0027da40_ea_1> ea_1 = gptr<Local_0027da40_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    frame->byte_0 = u8(r1);
    u32 r0_1 = frame.at(0).addr();
    gptr<Local_0027da40_r0_2> r0_2 = gptr<Local_0027da40_r0_2>(held_object_record_of_slot(r0_1, r1, guest::cpu()->r[2], r3));
    u32 r1_1 = guest::cpu()->r[1];
    u32 zf_1 = r0_2.addr() == 0;
    if (!zf_1) {
        r1_1 = r0_2->word_0;
        zf_1 = r1_1 == 0;
    }
    if (!zf_1 && r1_1 == r0) {
        r1_1 = 0u;
        r0_2->word_0 = r1_1;
    }
    gptr<Local_0027da40_ea_2> ea_2 = gptr<Local_0027da40_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_4;
    u32 r5_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return r0_2.addr();
}

}  // namespace d_0027da40
GUEST_EXPORT(0x0027da40, d_0027da40::clear_player_reference);

// f_0027da80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the shadow when it is finished, or when its record says it was caught and the catch completes.
namespace d_0027da80 {

struct __attribute__((packed)) AcFsFdShadowUpdateEndArg0 {
    u8 unknown_0[0x40];  // (not used here)
    float float_40;
    u8 unknown_44[0xd2];  // (not used here)
    u8 byte_116;
    u8 unknown_117[0x71];  // (not used here)
    u32 word_188;
};
GUEST_OFFSET(AcFsFdShadowUpdateEndArg0, float_40, 0x40);
GUEST_OFFSET(AcFsFdShadowUpdateEndArg0, byte_116, 0x116);
GUEST_OFFSET(AcFsFdShadowUpdateEndArg0, word_188, 0x188);

struct __attribute__((packed)) Local_0027da80_r0_2 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Local_0027da80_r0_2, byte_3, 0x3);
GUEST_OFFSET(Local_0027da80_r0_2, byte_4, 0x4);

inline constexpr u32 fish_manager_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> fish_manager;
inline constexpr guest::Function<0x00255968, u32(u32, u32)> element_address_255968;
inline constexpr guest::Function<0x00300900, u32(u32, u32, u32, u32)> NetSession__signed_value_veneer;
inline constexpr guest::Function<0x005210a8, u32(u32, u32, u32, u32)> StringPool__release;
inline constexpr guest::Function<0x0061a79c, u32(u32, u32, u32)> NetSession__guest_entry_is_ready_veneer;

void AcFsFdShadow__update_end(gptr<AcFsFdShadowUpdateEndArg0> ac_fs_fd_shadow, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    float S0_1 = 0.0f;
    ac_fs_fd_shadow->float_40 = S0_1;
    guest::cpu()->s[0] = S0_1;
    if (NetSession__signed_value_veneer(ac_fs_fd_shadow.addr(), r1, r2, guest::cpu()->r[3]) == 0) {
        frame.release();
        StringPool__release(ac_fs_fd_shadow.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    gptr<Local_0027da80_r0_2> r0_2 = gptr<Local_0027da80_r0_2>(ac_fs_fd_shadow->word_188);
    if (r0_2.addr() == 0) {
        u32 r1_2 = ac_fs_fd_shadow->byte_116;
        r0_2 = gptr<Local_0027da80_r0_2>(element_address_255968(*fish_manager, r1_2));
        ac_fs_fd_shadow->word_188 = r0_2.addr();
    }
    u32 r2_2 = r0_2->byte_4;
    u32 r1_3 = r2_2 & 3u;
    if ((u32(r0_2->byte_3) >> 7) + (r1_3 << 1) != 4u) {
        return;
    }
    if (NetSession__guest_entry_is_ready_veneer(ac_fs_fd_shadow.addr(), r1_3, r2_2) == 0) {
        return;
    }
    frame.release();
    StringPool__release(ac_fs_fd_shadow.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0027da80
GUEST_EXPORT(0x0027da80, d_0027da80::AcFsFdShadow__update_end);

// f_0027dc10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The half of motion step `step` (8 bytes each) of fish kind `kind` (0x28 bytes each, 0x83e168).
namespace d_0027dc10 {


u32 fish_motion_half(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_2 = *gptr<s16>(((r1 * 5u) << 3) + 0x83e168u + (r2 << 3) - 4u);
    guest::cpu()->r[1] = 0x83e168u;
    return r0_2;
}

}  // namespace d_0027dc10
GUEST_EXPORT(0x0027dc10, d_0027dc10::fish_motion_half);

// f_0027dc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The float of motion step `step` of fish kind `kind`.
namespace d_0027dc2c {


void fish_motion_float(u32 r0_unused, u32 r1, u32 r2) {
    float S0_1 = std::bit_cast<float>(*gptr<u32>(((r1 * 5u) << 3) + 0x83e168u + (r2 << 3) - 8u));
    guest::cpu()->r[1] = 0x83e168u;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_0027dc2c
GUEST_EXPORT(0x0027dc2c, d_0027dc2c::fish_motion_float);

// f_0027dc48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The u16 at +6 of motion step `step` of fish kind `kind`.
namespace d_0027dc48 {


u32 fish_motion_u16_6(u32 r0_unused, u32 r1, u32 r2) {
    return *gptr<u16>(r1 * 0x28u + 0x83e168u + (r2 << 3) + 6u);
}

}  // namespace d_0027dc48
GUEST_EXPORT(0x0027dc48, d_0027dc48::fish_motion_u16_6);

// f_0027dc64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 39 of the held object when it exists.
namespace d_0027dc64 {

struct __attribute__((packed)) CallVirtual39OfHeldArg0 {
    u32 word_0;
};
GUEST_OFFSET(CallVirtual39OfHeldArg0, word_0, 0x0);


u32 call_virtual_39_of_held(gptr<CallVirtual39OfHeldArg0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x9cu);
    // virtual function 39 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0027dc64
GUEST_EXPORT(0x0027dc64, d_0027dc64::call_virtual_39_of_held);

// f_0027dc88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the fish shadow actor from its parameters, with its sound object.
namespace d_0027dc88 {

struct __attribute__((packed)) AcFsFdShadowConstructArg0 {
    u32 word_0;
    u8 unknown_4[0xcc];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x44];  // (not used here)
    u8 byte_118;
};
GUEST_OFFSET(AcFsFdShadowConstructArg0, word_0, 0x0);
GUEST_OFFSET(AcFsFdShadowConstructArg0, word_d0, 0xd0);
GUEST_OFFSET(AcFsFdShadowConstructArg0, byte_118, 0x118);

struct __attribute__((packed)) AcFsFdShadowConstructArg1 {
    u32 word_0;
    u8 unknown_4[0x18];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(AcFsFdShadowConstructArg1, word_0, 0x0);
GUEST_OFFSET(AcFsFdShadowConstructArg1, word_1c, 0x1c);
GUEST_OFFSET(AcFsFdShadowConstructArg1, word_20, 0x20);

inline constexpr guest::Function<0x001e90e4, u32(u32, u32, u32, u32)> ActorBase__construct_from_params;
inline constexpr guest::Function<0x002d59d4, u32(u32, u32, u32)> SoundObjInsectFish__construct_derived;
inline constexpr guest::Function<0x002fd0c4, u32(u32, u32)> SkeletalModel__construct;

u32 AcFsFdShadow__construct(gptr<AcFsFdShadowConstructArg0> ac_fs_fd_shadow, gptr<AcFsFdShadowConstructArg1> arg1, u32 r2) {
    ActorBase__construct_from_params(ac_fs_fd_shadow.addr(), arg1.addr() + 4u, r2, guest::cpu()->r[3]);
    u32 r0_1 = ac_fs_fd_shadow.addr() + 0xd0u;
    SkeletalModel__construct(r0_1, arg1.addr() + 0x14u);
    u32 r1_3 = arg1->word_0;
    u32 ea_1 = r0_1 - 0xd0u;
    ac_fs_fd_shadow->word_0 = r1_3;
    u32 r2_2 = arg1->word_1c;
    *gptr<u32>(ea_1 + *gptr<u32>(r1_3 - 0xcu)) = r2_2;
    u32 r1_4 = arg1->word_20;
    ac_fs_fd_shadow->word_d0 = r1_4;
    ac_fs_fd_shadow->byte_118 = 0;
    u32 r0_4 = SoundObjInsectFish__construct_derived(ea_1 + 0x11cu, r1_4, r2_2) - 0x11cu;
    *gptr<u32>(r0_4 + 0x188u) = 0;
    return r0_4;
}

}  // namespace d_0027dc88
GUEST_EXPORT_FRAMED(0x0027dc88, d_0027dc88::AcFsFdShadow__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027dd00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the fish shadow actor: its sound object, animation and base.
namespace d_0027dd00 {

struct __attribute__((packed)) AcFsFdShadowDestroyArg0 {
    u32 word_0;
    u8 unknown_4[0xcc];  // (not used here)
    u32 word_d0;
};
GUEST_OFFSET(AcFsFdShadowDestroyArg0, word_0, 0x0);
GUEST_OFFSET(AcFsFdShadowDestroyArg0, word_d0, 0xd0);

struct __attribute__((packed)) Local_0027dd00_r1_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027dd00_r1_3, word_0, 0x0);
GUEST_OFFSET(Local_0027dd00_r1_3, word_4, 0x4);

inline constexpr guest::Function<0x002d59e8, u32(u32, u32, u32, u32)> SoundObj_1___SoundObj_002d59e8;
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32)> g3d__SkeletalAnim__destructor;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x0057bb6c, u32(u32, u32)> Actor__destructor;

u32 AcFsFdShadow__destroy(gptr<AcFsFdShadowDestroyArg0> ac_fs_fd_shadow, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = r1;
    if (r1 == 0) {
        r4_1 = 0x8efb34u;
    }
    u32 r1_1 = *gptr<u32>(r4_1);
    ac_fs_fd_shadow->word_0 = r1_1;
    u32 r2_1 = *gptr<u32>(r4_1 + 0x1cu);
    *gptr<u32>(ac_fs_fd_shadow.addr() + *gptr<u32>(r1_1 - 0xcu)) = r2_1;
    u32 r1_2 = *gptr<u32>(r4_1 + 0x20u);
    u32 ea_3 = ac_fs_fd_shadow.addr() + 0xd0u;
    ac_fs_fd_shadow->word_d0 = r1_2;
    SoundObj_1___SoundObj_002d59e8(ea_3 + 0x4cu, r1_2, r2_1, guest::cpu()->r[3]);
    gptr<Local_0027dd00_r1_3> r1_3 = gptr<Local_0027dd00_r1_3>(r4_1 + 0x14u);
    if (r1_3.addr() == 0) {
        r1_3 = gptr<Local_0027dd00_r1_3>(0x8f427cu);
    }
    u32 r2_2 = r1_3->word_0;
    ac_fs_fd_shadow->word_d0 = r2_2;
    u32 r2_3 = *gptr<u32>(r2_2 - 0xcu);
    u32 r1_4 = r1_3->word_4;
    *gptr<u32>(ea_3 + r2_3) = r1_4;
    g3d__SkeletalAnim__destructor(ea_3 + 0x10u, r1_4, r2_3);
    set_base_vtable_004edd84(ea_3 + 4u);
    frame.release();
    return Actor__destructor(ea_3 - 0xd0u, guest::cpu()->r[1]);
}

}  // namespace d_0027dd00
GUEST_EXPORT(0x0027dd00, d_0027dd00::AcFsFdShadow__destroy);

// f_0027e08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the Valentine's Day letter to the player (one of three variants, by the player's state), with its item.
namespace d_0027e08c {

struct __attribute__((packed)) LetterMakeValentineLetterArg1 {
    u8 unknown_0[0x5700];  // (not used here)
    u8 byte_5700;
};
GUEST_OFFSET(LetterMakeValentineLetterArg1, byte_5700, 0x5700);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> load_mail_with_adapter;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) LetterMakeValentineLetterFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(LetterMakeValentineLetterFrame, word_0, 0x0);
GUEST_OFFSET(LetterMakeValentineLetterFrame, word_4, 0x4);
GUEST_OFFSET(LetterMakeValentineLetterFrame, word_8, 0x8);
GUEST_SIZE(LetterMakeValentineLetterFrame, 0x14);

void Letter__make_valentine_letter(u32 letter, gptr<LetterMakeValentineLetterArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<LetterMakeValentineLetterFrame> frame;  // the original's stack frame
    construct_item(frame.at(0xc).addr(), 0x2242u, r2, r3);
    construct_item(frame.at(0x10).addr(), 0x2e59u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 random = random_below(3u);
    u32 r2_3 = (u32(arg1->byte_5700) & 0x10u) != 0u ? random + 1u : random + 4u;
    frame->word_0 = frame.at(0xc).addr();
    frame->word_4 = 5;
    frame->word_8 = 0;
    load_mail_with_adapter(letter, 0x27e128u, r2_3, arg1.addr() + 0x55a6u);
    set_held_item(letter, frame.at(0x10).addr(), 0u);
}

}  // namespace d_0027e08c
GUEST_EXPORT_FRAMED(0x0027e08c, d_0027e08c::Letter__make_valentine_letter, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0027e13c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the NPC of kind 'sza' exists with the default id and its timer set, moves the clock by its span and starts
// event 0xe.
namespace d_0027e13c {

inline constexpr u32 npc_manager_address = 0x00950148u;
inline guest::global<u16, 0x00887290> global_00887290;
inline guest::global<u32, 0x00950148> npc_manager;
inline constexpr guest::Function<0x0056b5a4, u32(u32)> GameClock__save_offset;
inline constexpr guest::Function<0x0056c7b0, u32(u32)> GameClock__set_flag_4;
inline constexpr guest::Function<0x0056d230, u32(u32, u32)> set_clock_from_span;
inline constexpr guest::Function<0x00695ed8, u32(u32, u32, u32, u32)> BsNpcMgr__SearchFunction__SearchFunction_00695ed8;
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> Player__counter;

u32 update_npc_sza_clock(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *npc_manager;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = BsNpcMgr__SearchFunction__SearchFunction_00695ed8(r0_1, 0x27e1b0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = *gptr<u16>(r0_2 + 0xcu);
    u32 r1_2 = *global_00887290;
    if (r0_3 != r1_2) {
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
    u32 r0_4 = *gptr<u8>(r0_2 + 0x2885u);
    if (r0_4 == 0) {
        guest::cpu()->r[1] = r1_2;
        return r0_4;
    }
    u32 game_clock = set_clock_from_span(r0_2 + 0x2870u, r1_2);
    GameClock__set_flag_4(GameClock__save_offset(game_clock));
    frame.release();
    return Player__counter(0xeu, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0027e13c
GUEST_EXPORT(0x0027e13c, d_0027e13c::update_npc_sza_clock);

// f_0027e634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the request record with mode 0x1800181 and its handler.
namespace d_0027e634 {

struct __attribute__((packed)) SetupRequestRecordMode181Arg0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(SetupRequestRecordMode181Arg0, word_8, 0x8);
GUEST_OFFSET(SetupRequestRecordMode181Arg0, word_c, 0xc);
GUEST_OFFSET(SetupRequestRecordMode181Arg0, word_20, 0x20);
GUEST_OFFSET(SetupRequestRecordMode181Arg0, word_24, 0x24);
GUEST_OFFSET(SetupRequestRecordMode181Arg0, word_28, 0x28);

inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> reset_request_record;

u32 setup_request_record_mode_181(gptr<SetupRequestRecordMode181Arg0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    reset_request_record(arg0.addr(), r1, r2, r3);
    arg0->word_20 = 0;
    arg0->word_8 = 0x1800181;
    arg0->word_c = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0x5264c0;
    guest::cpu()->r[1] = 0u;
    return 0u;
}

}  // namespace d_0027e634
GUEST_EXPORT_FRAMED(0x0027e634, d_0027e634::setup_request_record_mode_181, 0x4010);  // pushes {r4, lr} first, as the original

// f_0027e670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the shared NPC info, then resets the request record with mode 0x24000942 and its three handlers.
namespace d_0027e670 {

struct __attribute__((packed)) Local_0027e670_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0027e670_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0027e670_ea_1, word_4, 0x4);

inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;
inline constexpr guest::Function<0x0010f9fd, u32(u32, u32)> set_flag_2;
inline constexpr guest::Function<0x002f98a8, u32(u32, u32, u32, u32)> NpcNetShareInfo__refresh;
inline constexpr guest::Function<0x005cd270, u32(u32, u32)> reset_request_record;

u32 setup_request_record_mode_942(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    NpcNetShareInfo__refresh(*npc_net_share_info_instance, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    reset_request_record(r0, r1);
    gptr<Local_0027e670_ea_1> ea_1 = gptr<Local_0027e670_ea_1>(r0 + 8u);
    ea_1->word_0 = 0x24000942;
    ea_1->word_4 = 0;
    *gptr<u32>(r0 + 0x20u) = 0x5264e0;
    *gptr<u32>(r0 + 0x24u) = 0x526474;
    *gptr<u32>(r0 + 0x28u) = 0x526484;
    frame.release();
    return set_flag_2(0x526484u, 0u);
}

}  // namespace d_0027e670
GUEST_EXPORT(0x0027e670, d_0027e670::setup_request_record_mode_942);

// f_0027eeac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Steps a road search agent: searches its grid from its cell, picks a random candidate and steps toward it.
namespace d_0027eeac {

struct __attribute__((packed)) RoadSearchDefaultAgent {
    u8 unknown_0[0x2520];  // (not used here)
    u8 byte_2520;
    u8 byte_2521;
    u8 unknown_2522[0x22];  // (not used here)
    u32 word_2544;
};
GUEST_OFFSET(RoadSearchDefaultAgent, byte_2520, 0x2520);
GUEST_OFFSET(RoadSearchDefaultAgent, byte_2521, 0x2521);
GUEST_OFFSET(RoadSearchDefaultAgent, word_2544, 0x2544);

inline constexpr u32 vtable_RoadSearchDefaultAgent_rec = 0x008f5b94u;
inline constexpr guest::Function<0x0027ec34, u32(u32, u32, u32, u32)> AStarForeachPreSisyoCB__AStarForeachPreSisyoCB;
inline constexpr guest::Function<0x002f9e1c, u32(u32, u32)> divide_with_remainder;
inline constexpr guest::Function<0x00306f60, u32(u32)> SearchCandCore__pick_random_marked;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x007ceb80, u32(u32, u32, u32, u32)> PathGrid__step;
inline constexpr guest::Function<0x007d1fd4, u32(u32, u32, u32, u32)> PathGridRect__search;

struct __attribute__((packed)) RoadSearchDefaultAgentRoadSearchDefaultAgent0027eeacFrame {
    u32 word_0;
    u32 word_4;
    u32 object_8_vtable;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(RoadSearchDefaultAgentRoadSearchDefaultAgent0027eeacFrame, word_0, 0x0);
GUEST_OFFSET(RoadSearchDefaultAgentRoadSearchDefaultAgent0027eeacFrame, word_4, 0x4);
GUEST_OFFSET(RoadSearchDefaultAgentRoadSearchDefaultAgent0027eeacFrame, object_8_vtable, 0x8);
GUEST_SIZE(RoadSearchDefaultAgentRoadSearchDefaultAgent0027eeacFrame, 0x10);

u32 RoadSearchDefaultAgent__step(gptr<RoadSearchDefaultAgent> road_search_default_agent, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<RoadSearchDefaultAgentRoadSearchDefaultAgent0027eeacFrame> frame;  // the original's stack frame
    AStarForeachPreSisyoCB__AStarForeachPreSisyoCB(road_search_default_agent.addr(), r1, r2, r3);
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), road_search_default_agent.addr() + 0x14u);
    PathGridRect__search(road_search_default_agent.addr() + 0x2520u, frame->word_0, frame->word_4, 0u);
    u32 r5_1 = road_search_default_agent->word_2544;
    u32 r0_3 = SearchCandCore__pick_random_marked(r5_1);
    u32 r1_4 = guest::cpu()->r[1];
    if (s32(r0_3) >= 0) {
        u32 r0_4 = divide_with_remainder(r0_3, *gptr<u32>(r5_1 + 0x14u));
        u32 r3_4 = road_search_default_agent->byte_2521;
        r1_4 = guest::cpu()->r[1] + u32(road_search_default_agent->byte_2520);
        r0_3 = r0_4 + r3_4;
        if (1) {
            u32 r1_7 = 1u & ~0xffu | frame->word_0 & 0xffu;
            u32 r2_5 = (r0_3 << 8) & 0xff00u | ((r3_4 & ~0xffu) | r1_4 & 0xffu) & ~0xff00u;
            u32 r1_8 = r1_7 & ~0xff00u | frame->word_4 << 8 & 0xff00u;
            frame->object_8_vtable = vtable_RoadSearchDefaultAgent_rec;
            r0_3 = PathGrid__step(road_search_default_agent.addr() + 0x2520u, r1_8, r2_5, frame.at(8).addr());
            r1_4 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_4;
    return r0_3;
}

}  // namespace d_0027eeac
GUEST_EXPORT_FRAMED(0x0027eeac, d_0027eeac::RoadSearchDefaultAgent__step, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
