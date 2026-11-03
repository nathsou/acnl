// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_005921e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005921e0 {

struct __attribute__((packed)) Local_005921e0_r0_1 {
    u32 vtable;
    u8 unknown_4[0xf4];  // (not used here)
    float float_f8;
    u8 unknown_fc[0x28];  // (not used here)
    u8 byte_124;
};
GUEST_OFFSET(Local_005921e0_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_005921e0_r0_1, float_f8, 0xf8);
GUEST_OFFSET(Local_005921e0_r0_1, byte_124, 0x124);

inline constexpr u32 vtable_fgobj__ObjectPlant = 0x00907a40u;
inline constexpr u32 field_object_model_info_address = 0x0098a47cu;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x00582e4c, u32(u32, u32, u32, u32)> play_sound_at;
inline constexpr guest::Function<0x0058fe4c, u32(u32)> FieldItem__setup_model;
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> FieldItem__init;
inline constexpr guest::Function<0x00590f1c, u32(u32)> fgobj__ObjectBase__ObjectBase;

struct __attribute__((packed)) Frame_005921e0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005921e0, word_0, 0x0);
GUEST_SIZE(Frame_005921e0, 0x4);

u32 fgobj__ObjectPlant__ObjectPlant(u32 object_plant, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_005921e0> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = r3;
    u32 r7 = object_plant;
    u32 r8 = r1;
    u32 r9 = r2;
    r1 = field_object_model_info_address;
    r2 = 0x226u;  // (from the original)
    object_plant = 0u;
    do {
        u32 r3_1 = gptr<u32>(r1)[object_plant];
        if (r3_1 != 0) {
            *gptr<u32>(r1 + (object_plant << 2)) = 0;
            guest::cpu()->s[0] = S0;
            gptr<Local_005921e0_r0_1> block = gptr<Local_005921e0_r0_1>(allocate_on_heap(0x128u, r3_1, 4u, r3_1));  // (from the original)
            clear_aligned(block.addr(), 0x128u);  // (from the original)
            fgobj__ObjectBase__ObjectBase(block.addr());
            block->vtable = vtable_fgobj__ObjectPlant;
            set_word_4_and_succeed(block.addr() + 0x20u, r3_1);  // (from the original)
            frame->word_0 = 0;
            FieldItem__init(block.addr(), r7, r8, r9);
            block->byte_124 = 0;
            if (r5 != 0) {
                play_sound_at(0x100062eu, block.addr() + 0x40u, block.addr(), 1u);  // (from the original)
            }
            FieldItem__setup_model(block.addr());
            float S0_6 = 0.0f;
            block->float_f8 = S0_6;
            guest::cpu()->s[0] = S0_6;
            return block.addr();
        }
        object_plant += 1u;
        guest::preempt();
    } while (object_plant < r2);
    guest::cpu()->s[0] = S0;
    return 0u;
}

}  // namespace d_005921e0
GUEST_EXPORT_FRAMED(0x005921e0, d_005921e0::fgobj__ObjectPlant__ObjectPlant, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005923fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005923fc {

struct __attribute__((packed)) Local_005923fc_r0_4 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_005923fc_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_005923fc_r0_4, float_4, 0x4);
GUEST_OFFSET(Local_005923fc_r0_4, float_8, 0x8);

struct __attribute__((packed)) Local_005923fc_r4_1 {
    u8 unknown_0[0x150];  // (not used here)
    u8 byte_150;
    u8 byte_151;
};
GUEST_OFFSET(Local_005923fc_r4_1, byte_150, 0x150);
GUEST_OFFSET(Local_005923fc_r4_1, byte_151, 0x151);

inline constexpr u32 vtable_fgobj__ObjectScale = 0x00907a70u;
inline constexpr u32 field_object_model_info_address = 0x0098a47cu;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x004edd20, u32(u32)> escape__MapCloudModel__virtual_2;
inline constexpr guest::Function<0x004ee3e8, u32(u32, u32)> TransformNode__set_scale;
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> FieldItem__init;
inline constexpr guest::Function<0x00590f1c, u32(u32)> fgobj__ObjectBase__ObjectBase;
inline constexpr guest::Function<0x00614568, u32(u32, u32)> bgcheck__DynamicCylinder__DynamicCylinder;
inline constexpr guest::Function<0x00614730, u32(u32)> Collider__register;
inline constexpr guest::Function<0x006f7e10, u32(u32, u32, u32, u32)> Collider__set_cylinder;

struct __attribute__((packed)) Frame_005923fc {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005923fc, word_0, 0x0);
GUEST_SIZE(Frame_005923fc, 0x10);

u32 fgobj__ObjectScale__ObjectScale(u32 object_scale, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_005923fc> frame;  // the original's stack frame
    u32 r8 = r1;
    u32 r9 = r2;
    r1 = field_object_model_info_address;
    r2 = 0x226u;  // (from the original)
    u32 r7 = object_scale;
    u32 r5 = r3;
    object_scale = 0u;
    do {
        u32 r3_1 = gptr<u32>(r1)[object_scale];
        if (r3_1 != 0) {
            *gptr<u32>(r1 + (object_scale << 2)) = 0;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            u32 block = allocate_on_heap(0x154u, r3_1, 4u, r3_1);  // (from the original)
            clear_aligned(block, 0x154u);  // (from the original)
            fgobj__ObjectBase__ObjectBase(block);
            *gptr<u32>(block) = vtable_fgobj__ObjectScale;
            u32 dynamic_cylinder = block + 0x124u;  // (from the original)
            bgcheck__DynamicCylinder__DynamicCylinder(dynamic_cylinder, vtable_fgobj__ObjectScale);
            gptr<Local_005923fc_r4_1> r4_1 = gptr<Local_005923fc_r4_1>(dynamic_cylinder - 0x124u);  // (from the original)
            set_word_4_and_succeed(dynamic_cylinder - 0x104u, r3_1);  // (from the original)
            frame->word_0 = 0;
            FieldItem__init(r4_1.addr(), r7, r8, r9);
            float S0_6 = 0.1f;
            r4_1->byte_150 = 0;
            gptr<Local_005923fc_r0_4> r0_4 = gptr<Local_005923fc_r0_4>(frame.at(4).addr());
            r4_1->byte_151 = u8(r5);
            r0_4->float_0 = S0_6;
            r0_4->float_4 = S0_6;
            r0_4->float_8 = S0_6;
            guest::cpu()->s[0] = S0_6;
            guest::cpu()->s[1] = S0_6;
            guest::cpu()->s[2] = S0_6;
            TransformNode__set_scale(r4_1.addr() + 0x58u, r0_4.addr());  // (from the original)
            escape__MapCloudModel__virtual_2(r4_1.addr() + 0x58u);  // (from the original)
            u32 r0_8 = Item__has_number(r4_1.addr() + 0x64u, 0x9eu);  // (from the original)
            if (r0_8 != 0) {
                float S1_9 = 64.0f;
                float S0_10 = 1.5f;
                guest::cpu()->s[0] = S0_10;
                guest::cpu()->s[1] = S1_9;
                Collider__set_cylinder(r4_1.addr() + 0x124u, r4_1.addr() + 0x40u, 4u, ~0x80000000u);  // (from the original)
                Collider__register(r4_1.addr() + 0x124u);  // (from the original)
            }
            return r4_1.addr();
        }
        object_scale += 1u;
        guest::preempt();
    } while (object_scale < r2);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_005923fc
GUEST_EXPORT_FRAMED(0x005923fc, d_005923fc::fgobj__ObjectScale__ObjectScale, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005929c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the field object by its item's kind and map entry.
namespace d_005929c0 {

struct __attribute__((packed)) FieldObject {
    u8 unknown_0[0x121];  // (not used here)
    u8 byte_121;
    u8 unknown_122[0x4d];  // (not used here)
    u8 byte_16f;
};
GUEST_OFFSET(FieldObject, byte_121, 0x121);
GUEST_OFFSET(FieldObject, byte_16f, 0x16f);

inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x002fd010, u32(u32)> map_object_entry;
inline constexpr guest::Function<0x00582e9c, u32(u32, u32, u32, u32)> play_sound_at_world;

struct __attribute__((packed)) Frame_005929c0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005929c0, word_0, 0x0);
GUEST_SIZE(Frame_005929c0, 0x4);

void FieldObject__update_by_kind(gptr<FieldObject> field_object, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005929c0> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = field_object->byte_16f;
    if (r0_1 < 8u) {
        u32 r0_2 = r0_1 + 1u & 0xffu;  // (from the original)
        field_object->byte_16f = u8(r0_2);
        if (r0_2 == 8u) {
            u32 r0_4 = indexed_item_type(field_object.addr() + 0x64u, r1, r2, r3);  // (from the original)
            u32 r0_6 = map_object_entry(field_object.addr() + 0x64u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_6 != 0) {
                u32 r5_1 = *gptr<s8>(r0_6 + 0xdu);  // (from the original)
                if (r0_4 != 4u) {
                    if (r0_4 == 6u) {
                        frame->word_0 = 0;
                        play_sound_at_world(0x1000633u, field_object.addr() + 0x40u, field_object.addr(), r5_1);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    } else if (r0_4 == 8u) {
                        frame->word_0 = 0;
                        play_sound_at_world(0x1000631u, field_object.addr() + 0x40u, field_object.addr(), r5_1);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    } else if (r0_4 == 0x19u) {  // (from the original)
                        frame->word_0 = 0;
                        play_sound_at_world(0x1000635u, field_object.addr() + 0x40u, field_object.addr(), r5_1 + 1u);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    }
                } else {
                    u32 r0_8 = Item__has_number(field_object.addr() + 0x64u, 6u, r2, r3);  // (from the original)
                    if (r0_8 != 0) {
                        frame->word_0 = 0;
                        play_sound_at_world(0x1000637u, field_object.addr() + 0x40u, field_object.addr(), r5_1);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    } else {
                        frame->word_0 = 0;
                        play_sound_at_world(0x100062fu, field_object.addr() + 0x40u, field_object.addr(), r5_1);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    }
                }
            }
        }
    }
    if (field_object->byte_121 == 0xau) {  // (from the original)
        u32 r0_10 = indexed_item_type(field_object.addr() + 0x64u, r1, r2, r3);  // (from the original)
        u32 r0_12 = map_object_entry(field_object.addr() + 0x64u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_12 != 0) {
            u32 r5_2 = *gptr<s8>(r0_12 + 0xdu);  // (from the original)
            if (r0_10 == 4u) {
                u32 r0_14 = Item__has_number(field_object.addr() + 0x64u, 6u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                if (r0_14 != 0) {
                    frame->word_0 = 0;
                    play_sound_at_world(0x1000638u, field_object.addr() + 0x40u, field_object.addr(), r5_2);  // (from the original)
                    return;
                }
                frame->word_0 = 0;
                play_sound_at_world(0x1000630u, field_object.addr() + 0x40u, field_object.addr(), r5_2);  // (from the original)
                return;
            }
            if (r0_10 == 6u) {
                frame->word_0 = 0;
                play_sound_at_world(0x1000634u, field_object.addr() + 0x40u, field_object.addr(), r5_2);  // (from the original)
                return;
            }
            if (r0_10 == 8u) {
                frame->word_0 = 0;
                play_sound_at_world(0x1000632u, field_object.addr() + 0x40u, field_object.addr(), r5_2);  // (from the original)
                return;
            }
            if (r0_10 == 0x19u) {  // (from the original)
                frame->word_0 = 0;
                play_sound_at_world(0x1000636u, field_object.addr() + 0x40u, field_object.addr(), r5_2 + 1u);  // (from the original)
                r1 = guest::cpu()->r[1];
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005929c0
GUEST_EXPORT_FRAMED(0x005929c0, d_005929c0::FieldObject__update_by_kind, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005937b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the field object's state from its item's kind.
namespace d_005937b4 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x002fd010, u32(u32)> map_object_entry;
inline constexpr guest::Function<0x00582e9c, u32(u32, u32, u32, u32)> play_sound_at_world;

struct __attribute__((packed)) Frame_005937b4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005937b4, word_0, 0x0);
GUEST_SIZE(Frame_005937b4, 0x4);

void FieldObject__refresh_kind(u32 field_object, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005937b4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = indexed_item_type(r1, r1, r2, r3);
    u32 r0_2 = map_object_entry(r1);
    if (r0_2 != 0) {
        u32 r4_1 = *gptr<s8>(r0_2 + 0xdu);  // (from the original)
        if (r2 == 1u) {
            if (r0_1 != 4u) {
                if (r0_1 == 6u) {
                    frame->word_0 = 0;
                    play_sound_at_world(0x10005f3u, field_object + 0x40u, field_object, r4_1);  // (from the original)
                    return;
                }
                if (r0_1 == 8u) {
                    frame->word_0 = 0;
                    play_sound_at_world(0x10005f1u, field_object + 0x40u, field_object, r4_1);  // (from the original)
                    return;
                }
                if (r0_1 != 0x19u) {  // (from the original)
                    return;
                }
                frame->word_0 = 0;
                play_sound_at_world(0x10005f5u, field_object + 0x40u, field_object, r4_1 + 1u);  // (from the original)
                return;
            }
            u32 r0_3 = Item__has_number(r1, 6u);
            if (r0_3 != 0) {
                frame->word_0 = 0;
                play_sound_at_world(0x10005f8u, field_object + 0x40u, field_object, r4_1);  // (from the original)
                return;
            }
            frame->word_0 = 0;
            play_sound_at_world(0x10005efu, field_object + 0x40u, field_object, r4_1);  // (from the original)
            return;
        }
        u32 zf_2 = r0_1 - 8u == 0;
        if (zf_2) {
            frame->word_0 = 0;
            play_sound_at_world(0x10005f0u, field_object + 0x40u, field_object, r4_1);  // (from the original)
            return;
        }
        if (!zf_2 && (r0_1 - 8u >> 0x1f) == (((r0_1 ^ 8u) & (r0_1 ^ r0_1 - 8u)) >> 0x1f)) {  // (from the original)
            if (r0_1 == 0x17u) {  // (from the original)
                frame->word_0 = 0;
                play_sound_at_world(0x10005f6u, field_object + 0x40u, field_object, r4_1);  // (from the original)
                return;
            }
            if (r0_1 != 0x19u) {  // (from the original)
                return;
            }
            frame->word_0 = 0;
            play_sound_at_world(0x10005f4u, field_object + 0x40u, field_object, r4_1 + 1u);  // (from the original)
            return;
        }
        if (r0_1 == 4u) {
            u32 r0_4 = Item__has_number(r1, 6u);
            if (r0_4 != 0) {
                return;
            }
            frame->word_0 = 0;
            play_sound_at_world(0x10005eeu, field_object + 0x40u, field_object, r4_1);  // (from the original)
            return;
        }
        if (r0_1 == 6u) {
            frame->word_0 = 0;
            play_sound_at_world(0x10005f2u, field_object + 0x40u, field_object, r4_1);  // (from the original)
        }
    }
}

}  // namespace d_005937b4
GUEST_EXPORT_FRAMED(0x005937b4, d_005937b4::FieldObject__refresh_kind, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00593b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00593b6c {

inline constexpr u32 vtable_fgobj__ObjectSwing = 0x00907ad0u;
inline constexpr u32 global_0094efa0_address = 0x0094efa0u;
inline constexpr u32 effect_spawn_params_address = 0x00975beeu;
inline constexpr u32 object_deco_params_address = 0x0098ad14u;
inline constexpr u32 effect_spawn_context_address = 0x00ae5664u;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x001e5e88, u32(u32)> period_table_value;
inline constexpr guest::Function<0x002075d4, u32(u32, u32, u32, u32)> Effect__spawn;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x003166a8, u32(u32)> construct_sead_particle_handle;
inline constexpr guest::Function<0x004ecf18, u32(u32, u32)> construct_base_anim_4ecf18;
inline constexpr guest::Function<0x00582e9c, u32(u32, u32, u32, u32)> play_sound_at_world;
inline constexpr guest::Function<0x00590f1c, u32(u32)> fgobj__ObjectBase__ObjectBase;
inline constexpr guest::Function<0x00592c14, u32(u32, u32)> FieldItem__update_indexed;
inline constexpr guest::Function<0x0059317c, u32(u32, u32)> FieldItem__update_kind_6;
inline constexpr guest::Function<0x00593470, u32(u32, u32, u32, u32)> FieldItem__setup;
inline constexpr guest::Function<0x005937b4, u32(u32, u32, u32)> FieldObject__refresh_kind;

struct __attribute__((packed)) Frame_00593b6c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00593b6c, word_0, 0x0);
GUEST_OFFSET(Frame_00593b6c, word_4, 0x4);
GUEST_SIZE(Frame_00593b6c, 0x14);

u32 fgobj__ObjectSwing__ObjectSwing(u32 object_swing, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00593b6c> frame;  // the original's stack frame
    u32 r6 = r3;
    u32 r9 = r1;
    u32 r11 = object_swing;
    r1 = object_deco_params_address;
    u32 r5 = *frame.at<u32>(0x38);  // (from the original)
    u32 r10 = r2;
    object_swing = 0u;
    do {
        u32 r2_1 = gptr<u32>(r1)[object_swing];
        if (r2_1 != 0) {
            *gptr<u32>(r1 + (object_swing << 2)) = 0;
            u32 block = allocate_on_heap(0x170u, r2_1, 4u, r3);  // (from the original)
            clear_aligned(block, 0x170u);  // (from the original)
            fgobj__ObjectBase__ObjectBase(block);
            *gptr<u32>(block) = vtable_fgobj__ObjectSwing;
            u32 r0_2 = block + 0x124u;  // (from the original)
            construct_base_anim_4ecf18(r0_2, vtable_fgobj__ObjectSwing);
            u32 r0_3 = r0_2 + 0x18u;  // (from the original)
            construct_sead_particle_handle(r0_3);
            u32 r0_4 = r0_3 + 0x18u;  // (from the original)
            construct_sead_particle_handle(r0_4);
            u32 field_object = r0_4 - 0x154u;  // (from the original)
            set_word_4_and_succeed(r0_4 - 0x134u, r2_1);  // (from the original)
            frame->word_0 = r6;
            FieldItem__setup(field_object, r11, r9, r10);
            if (r5 == 0) {
                FieldObject__refresh_kind(field_object, r11, r6);
                FieldItem__update_kind_6(field_object, r6);
                return field_object;
            }
            u32 r0_6 = period_table_value(1u);
            if (s32(r0_6) >= 0x13) {  // (from the original)
                return field_object;
            }
            u32 r0_7 = FieldItem__update_indexed(field_object, frame.at(8).addr());
            if (r0_7 != 0) {
                frame->word_0 = 1;
                frame->word_4 = 0;
                u32 r0_8 = gptr<u32>(global_0094efa0_address)[r0_6];
                Effect__spawn(r0_8, frame.at(8).addr(), effect_spawn_params_address, effect_spawn_context_address);
            }
            frame->word_0 = 0;
            play_sound_at_world(0x10005f7u, field_object + 0x40u, field_object, 4u);  // (from the original)
            return field_object;
        }
        object_swing += 1u;
        guest::preempt();
    } while (object_swing < 0x14u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00593b6c
GUEST_EXPORT_FRAMED(0x00593b6c, d_00593b6c::fgobj__ObjectSwing__ObjectSwing, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00593fbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Remembers the old position, moves to the new one with the scale, and starts its 15-frame growth animation.
namespace d_00593fbc {

struct __attribute__((packed)) FieldObject {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x20];  // (not used here)
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0xac];  // (not used here)
    float float_f8;
    u8 unknown_fc[0x28];  // (not used here)
    u32 word_124;
    u32 word_128;
    u32 word_12c;
    u8 unknown_130[0xc];  // (not used here)
    float float_13c;
    float float_140;
    u16 half_144;
    u8 byte_146;
};
GUEST_OFFSET(FieldObject, word_1c, 0x1c);
GUEST_OFFSET(FieldObject, word_40, 0x40);
GUEST_OFFSET(FieldObject, word_44, 0x44);
GUEST_OFFSET(FieldObject, word_48, 0x48);
GUEST_OFFSET(FieldObject, float_f8, 0xf8);
GUEST_OFFSET(FieldObject, word_124, 0x124);
GUEST_OFFSET(FieldObject, word_128, 0x128);
GUEST_OFFSET(FieldObject, word_12c, 0x12c);
GUEST_OFFSET(FieldObject, float_13c, 0x13c);
GUEST_OFFSET(FieldObject, float_140, 0x140);
GUEST_OFFSET(FieldObject, half_144, 0x144);
GUEST_OFFSET(FieldObject, byte_146, 0x146);

struct __attribute__((packed)) Object_00593fbc_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00593fbc_1, word_0, 0x0);
GUEST_OFFSET(Object_00593fbc_1, word_4, 0x4);
GUEST_OFFSET(Object_00593fbc_1, word_8, 0x8);

struct __attribute__((packed)) Local_00593fbc_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00593fbc_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00593fbc_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_00593fbc_r0_1, float_8, 0x8);

inline guest::global<u32, 0x00594068> global_00594068;
inline constexpr guest::Function<0x004ee3e8, u32(u32, u32, u32, u32)> TransformNode__set_scale;
inline constexpr guest::Function<0x0058fe4c, u32(u32)> FieldItem__setup_model;
inline constexpr guest::Function<0x00591a80, u32(u32, u32)> FieldItem__start_fall;

void FieldObject__start_grow(gptr<FieldObject> field_object, gptr<Object_00593fbc_1> arg1, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    field_object->word_124 = field_object->word_40;
    field_object->word_128 = field_object->word_44;
    field_object->word_12c = field_object->word_48;
    gptr<Local_00593fbc_r0_1> r0_1 = gptr<Local_00593fbc_r0_1>(frame.at(0).addr());
    field_object->word_40 = arg1->word_0;
    u32 r2_1 = arg1->word_4;
    field_object->word_44 = r2_1;
    field_object->word_48 = arg1->word_8;
    field_object->float_140 = S0;
    r0_1->float_0 = S0;
    r0_1->float_4 = S0;
    r0_1->float_8 = S0;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S0;
    guest::cpu()->s[2] = S0;
    TransformNode__set_scale(field_object.addr() + 0x58u, r0_1.addr(), r2_1, guest::cpu()->r[3]);  // (from the original)
    float S0_1 = 0.5f;
    field_object->half_144 = 0xf;  // (from the original)
    field_object->float_13c = S0_1;
    float S0_2 = 0.8125f;
    guest::cpu()->s[0] = S0_2;
    FieldItem__start_fall(field_object.addr(), 0xfu);  // (from the original)
    field_object->byte_146 = 0;
    FieldItem__setup_model(field_object.addr());
    field_object->word_1c = *global_00594068;
    float S0_4 = 0.0f;
    field_object->float_f8 = S0_4;
    guest::cpu()->s[0] = S0_4;
}

}  // namespace d_00593fbc
GUEST_EXPORT_FRAMED(0x00593fbc, d_00593fbc::FieldObject__start_grow, 0x4010);  // pushes {r4, lr} first, as the original

// f_00594358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds an empty item with the extra bytes 0xa5, 0, 0.
namespace d_00594358 {

struct __attribute__((packed)) Object_00594358_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Object_00594358_0, byte_4, 0x4);
GUEST_OFFSET(Object_00594358_0, byte_5, 0x5);
GUEST_OFFSET(Object_00594358_0, byte_6, 0x6);

inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;

void construct_empty_item_a5(gptr<Object_00594358_0> arg0) {
    construct_empty_item(arg0.addr());
    arg0->byte_4 = 0xa5;  // (from the original)
    arg0->byte_5 = 0;
    arg0->byte_6 = 0;
}

}  // namespace d_00594358
GUEST_EXPORT_FRAMED(0x00594358, d_00594358::construct_empty_item_a5, 0x4010);  // pushes {r4, lr} first, as the original

// f_00594378: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594378 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32)> do_nothing_002f777c;

u32 do_nothing_002f777c_veneer_8() {
    return do_nothing_002f777c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00594378
GUEST_EXPORT(0x00594378, d_00594378::do_nothing_002f777c_veneer_8);

// f_00594504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the record with an empty item and kind 0xa5.
namespace d_00594504 {

struct __attribute__((packed)) FieldItemRecord {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(FieldItemRecord, byte_4, 0x4);
GUEST_OFFSET(FieldItemRecord, byte_5, 0x5);
GUEST_OFFSET(FieldItemRecord, byte_6, 0x6);

inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;

void FieldItemRecord__construct(gptr<FieldItemRecord> field_item_record) {
    construct_empty_item(field_item_record.addr());
    field_item_record->byte_4 = 0xa5;  // (from the original)
    field_item_record->byte_5 = 0;
    field_item_record->byte_6 = 0;
}

}  // namespace d_00594504
GUEST_EXPORT_FRAMED(0x00594504, d_00594504::FieldItemRecord__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_00594524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594524 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32)> do_nothing_002f777c;

u32 do_nothing_002f777c_veneer_9() {
    return do_nothing_002f777c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00594524
GUEST_EXPORT(0x00594524, d_00594524::do_nothing_002f777c_veneer_9);

// f_005948ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005948ec {

struct __attribute__((packed)) Local_005948ec_r0_1 {
    u32 vtable;
    u8 unknown_4[0x3c];  // (not used here)
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0xd8];  // (not used here)
    u32 word_124;
    u32 word_128;
    u32 word_12c;
    u8 unknown_130[0x8];  // (not used here)
    float float_138;
    float float_13c;
    float float_140;
    u16 half_144;
    u8 byte_146;
};
GUEST_OFFSET(Local_005948ec_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_005948ec_r0_1, word_40, 0x40);
GUEST_OFFSET(Local_005948ec_r0_1, word_44, 0x44);
GUEST_OFFSET(Local_005948ec_r0_1, word_48, 0x48);
GUEST_OFFSET(Local_005948ec_r0_1, word_124, 0x124);
GUEST_OFFSET(Local_005948ec_r0_1, word_128, 0x128);
GUEST_OFFSET(Local_005948ec_r0_1, word_12c, 0x12c);
GUEST_OFFSET(Local_005948ec_r0_1, float_138, 0x138);
GUEST_OFFSET(Local_005948ec_r0_1, float_13c, 0x13c);
GUEST_OFFSET(Local_005948ec_r0_1, float_140, 0x140);
GUEST_OFFSET(Local_005948ec_r0_1, half_144, 0x144);
GUEST_OFFSET(Local_005948ec_r0_1, byte_146, 0x146);

struct __attribute__((packed)) Local_005948ec_r0_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005948ec_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_005948ec_r0_3, float_4, 0x4);

inline constexpr u32 vtable_fgobj__ObjectPresent = 0x00907ba0u;
inline constexpr u32 field_object_model_info_address = 0x0098a47cu;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> FieldItem__init;
inline constexpr guest::Function<0x00590c14, u32(u32, u32)> FieldItem__place_on_ground;
inline constexpr guest::Function<0x00590f1c, u32(u32)> fgobj__ObjectBase__ObjectBase;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> ground_height_at;

struct __attribute__((packed)) Frame_005948ec {
    u32 word_0;
};
GUEST_OFFSET(Frame_005948ec, word_0, 0x0);
GUEST_SIZE(Frame_005948ec, 0x4);

u32 fgobj__ObjectPresent__ObjectPresent(u32 object_present, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_005948ec> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = r3;
    u32 r9 = r1;
    u32 r8 = object_present;
    r1 = field_object_model_info_address;
    u32 r6 = *frame.at<u32>(0x28);  // (from the original)
    r3 = 0x226u;  // (from the original)
    u32 r11 = r2;
    object_present = 0u;
    do {
        u32 r2_1 = gptr<u32>(r1)[object_present];
        if (r2_1 != 0) {
            *gptr<u32>(r1 + (object_present << 2)) = 0;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            gptr<Local_005948ec_r0_1> block = gptr<Local_005948ec_r0_1>(allocate_on_heap(0x148u, r2_1, 4u, r3));  // (from the original)
            clear_aligned(block.addr(), 0x148u);  // (from the original)
            fgobj__ObjectBase__ObjectBase(block.addr());
            block->vtable = vtable_fgobj__ObjectPresent;
            set_word_4_and_succeed(block.addr() + 0x20u, r2_1);  // (from the original)
            frame->word_0 = 0;
            FieldItem__init(block.addr(), r8, r9, r11);
            float S1_5 = 1.5f;
            gptr<Local_005948ec_r0_3> r0_3 = gptr<Local_005948ec_r0_3>(block.addr() + 0x130u);  // (from the original)
            block->word_124 = block->word_40;
            float S0_5 = 0.0f;
            float S2_5 = 0.5f;
            block->word_128 = block->word_44;
            block->word_12c = block->word_48;
            block->word_40 = *gptr<u32>(r5);
            block->word_44 = *gptr<u32>(r5 + 4u);
            block->word_48 = *gptr<u32>(r5 + 8u);
            r0_3->float_0 = S0_5;
            r0_3->float_4 = S1_5;
            block->float_138 = S0_5;
            block->float_13c = S2_5;
            block->byte_146 = u8(r6);
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1_5;
            guest::cpu()->s[2] = S2_5;
            FieldItem__place_on_ground(block.addr(), 0u);
            ground_height_at(r5, 0u);
            float S0_7 = guest::cpu()->s[0];
            block->float_140 = S0_7;
            float S1_7 = std::bit_cast<float>(block->word_128);
            float S0_8 = S0_7 - S1_7;
            u32 r0_4 = std::bit_cast<u32>(S0_8);
            u32 res_1 = r0_4 - 0x41200000u;  // (from the original)
            block->half_144 = u16(res_1 != 0 && res_1 >> 0x1f == ((r0_4 ^ 0x41200000u) & (r0_4 ^ res_1)) >> 0x1f ? 0x18u : 8u);  // (from the original)
            guest::cpu()->s[0] = S0_8;
            guest::cpu()->s[1] = S1_7;
            return block.addr();
        }
        object_present += 1u;
        guest::preempt();
    } while (object_present < r3);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_005948ec
GUEST_EXPORT_FRAMED(0x005948ec, d_005948ec::fgobj__ObjectPresent__ObjectPresent, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00594c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when (x, y) is in the rectangle, with x shrunk by the slope (+0x10) times the row.
namespace d_00594c54 {

struct __attribute__((packed)) Rect {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    float float_10;
};
GUEST_OFFSET(Rect, word_0, 0x0);
GUEST_OFFSET(Rect, word_4, 0x4);
GUEST_OFFSET(Rect, word_8, 0x8);
GUEST_OFFSET(Rect, word_c, 0xc);
GUEST_OFFSET(Rect, float_10, 0x10);


u32 Rect__contains_scaled(gptr<Rect> rect, u32 r1, u32 r2, float S0, float S1) {
    u32 r12 = guest::cpu()->r[12];
    u32 r3_1 = rect->word_0;
    u32 res_1 = r3_1 - r1;
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 vf_1 = ((r3_1 ^ r1) & (r3_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        r12 = rect->word_8;
        u32 res_2 = r1 - r12;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r1 ^ r12) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (zf_1 || nf_1 != vf_1) {
        u32 r4_1 = rect->word_4;
        u32 res_3 = r4_1 - r2;
        u32 nf_2 = res_3 >> 0x1f;  // (from the original)
        u32 zf_2 = res_3 == 0;
        u32 vf_2 = ((r4_1 ^ r2) & (r4_1 ^ res_3)) >> 0x1f;  // (from the original)
        if (zf_2 || nf_2 != vf_2) {
            u32 r6_1 = rect->word_c;
            u32 res_4 = r2 - r6_1;
            nf_2 = res_4 >> 0x1f;  // (from the original)
            zf_2 = res_4 == 0;
            vf_2 = ((r2 ^ r6_1) & (r2 ^ res_4)) >> 0x1f;  // (from the original)
        }
        if (zf_2 || nf_2 != vf_2) {
            S1 = rect->float_10;
            S0 = std::bit_cast<float>(vcvt_sz_f(S1 * float(s32(r2 - r4_1))));
            u32 r0_1 = std::bit_cast<u32>(S0);
            if (r0_1 == 0) {
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                return 1u;
            }
            u32 r2_1 = r3_1 + r0_1;
            u32 res_5 = r2_1 - r1;
            u32 nf_3 = res_5 >> 0x1f;  // (from the original)
            u32 zf_3 = res_5 == 0;
            u32 vf_3 = ((r2_1 ^ r1) & (r2_1 ^ res_5)) >> 0x1f;  // (from the original)
            u32 res_6 = r12 - r0_1;
            if (zf_3 || nf_3 != vf_3) {
                u32 res_7 = r1 - res_6;
                nf_3 = res_7 >> 0x1f;  // (from the original)
                zf_3 = res_7 == 0;
                vf_3 = ((r1 ^ res_6) & (r1 ^ res_7)) >> 0x1f;  // (from the original)
            }
            if (zf_3 || nf_3 != vf_3) {
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                return 1u;
            }
        }
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00594c54
GUEST_EXPORT_FRAMED(0x00594c54, d_00594c54::Rect__contains_scaled, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00594d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the drop record (its four bytes and half).
namespace d_00594d9c {

struct __attribute__((packed)) FieldDropRecord {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u16 half_4;
};
GUEST_OFFSET(FieldDropRecord, byte_0, 0x0);
GUEST_OFFSET(FieldDropRecord, byte_1, 0x1);
GUEST_OFFSET(FieldDropRecord, byte_2, 0x2);
GUEST_OFFSET(FieldDropRecord, byte_3, 0x3);
GUEST_OFFSET(FieldDropRecord, half_4, 0x4);

inline constexpr guest::Function<0x005971e4, u32(u32, u32, u32, u32)> FieldItems__place_kind;

struct __attribute__((packed)) Frame_00594d9c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00594d9c, word_0, 0x0);
GUEST_OFFSET(Frame_00594d9c, word_4, 0x4);
GUEST_SIZE(Frame_00594d9c, 0xc);

void FieldDropRecord__apply(gptr<FieldDropRecord> field_drop_record) {
    guest::StackFrameOf<Frame_00594d9c> frame;  // the original's stack frame
    frame->word_0 = u32(field_drop_record->half_4);
    frame->word_4 = 0;
    u32 r3_1 = field_drop_record->byte_3;
    u32 r2_1 = field_drop_record->byte_0;
    u32 r1_1 = field_drop_record->byte_2;
    u32 r0_1 = field_drop_record->byte_1;
    FieldItems__place_kind(r0_1, r1_1, r2_1, r3_1);
}

}  // namespace d_00594d9c
GUEST_EXPORT_FRAMED(0x00594d9c, d_00594d9c::FieldDropRecord__apply, 0x4000);  // pushes {lr} first, as the original

// f_00594dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the drop record (kind 0xa5).
namespace d_00594dcc {

struct __attribute__((packed)) FieldDropRecord {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u16 half_4;
};
GUEST_OFFSET(FieldDropRecord, byte_0, 0x0);
GUEST_OFFSET(FieldDropRecord, byte_1, 0x1);
GUEST_OFFSET(FieldDropRecord, byte_2, 0x2);
GUEST_OFFSET(FieldDropRecord, byte_3, 0x3);
GUEST_OFFSET(FieldDropRecord, half_4, 0x4);


void FieldDropRecord__clear(gptr<FieldDropRecord> field_drop_record) {
    field_drop_record->byte_0 = 0xa5;  // (from the original)
    field_drop_record->byte_1 = 0;
    field_drop_record->byte_2 = 0;
    field_drop_record->byte_3 = 0;
    field_drop_record->half_4 = 0;
}

}  // namespace d_00594dcc
GUEST_EXPORT(0x00594dcc, d_00594dcc::FieldDropRecord__clear);

// f_00594dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records the cell in the town's ring of the 3 latest cells (save +0x621c2).
namespace d_00594dec {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;

void RecentCells3__push(u32 recent_cells3, u32 r1, u32 r2, u32 r3) {
    for (;;) {
        u32 data_base_2 = get_data_base(recent_cells3, r1, r2, r3);
        r2 = *gptr<u8>(recent_cells3 + 1u);
        r1 = *gptr<u8>(recent_cells3);
        recent_cells3 = data_base_2 + 0x621b2u;  // (from the original)
        if (!1) {
            break;
        }
        u32 r3_1 = *gptr<u8>(recent_cells3 + 0x16u);  // (from the original)
        if (r3_1 < 3u) {
            *gptr<u8>(recent_cells3 + 0x16u) = u8(r3_1 + 1u);  // (from the original)
            *gptr<u8>(recent_cells3 + 0x17u) = u8(r3_1 + 0u);  // (from the original)
            *gptr<u8>(recent_cells3 + (u32(*gptr<u8>(recent_cells3 + 0x17u)) << 1) + 0x10u) = u8(r1);  // (from the original)
            u32 r1_1 = *gptr<u8>(recent_cells3 + 0x17u);  // (from the original)
            *gptr<u8>(recent_cells3 + (r1_1 << 1) + 0x11u) = u8(r2);  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return;
        }
        u32 r3_3 = u32(*gptr<u8>(recent_cells3 + 0x17u)) + 1u & 0xffu;  // (from the original)
        *gptr<u8>(recent_cells3 + 0x17u) = u8(r3_3);  // (from the original)
        if (r3_3 >= 3u) {
            *gptr<u8>(recent_cells3 + 0x17u) = 0;  // (from the original)
        }
        *gptr<u8>(recent_cells3 + (u32(*gptr<u8>(recent_cells3 + 0x17u)) << 1) + 0x10u) = u8(r1);  // (from the original)
        u32 r1_2 = *gptr<u8>(recent_cells3 + 0x17u);  // (from the original)
        *gptr<u8>(recent_cells3 + (r1_2 << 1) + 0x11u) = u8(r2);  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return;
        guest::preempt();
    }
}

}  // namespace d_00594dec
GUEST_EXPORT_FRAMED(0x00594dec, d_00594dec::RecentCells3__push, 0x4010);  // pushes {r4, lr} first, as the original

// f_00594f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00594f3c {

struct __attribute__((packed)) Local_00594f3c_r4_1 {
    u8 unknown_0[0x121];  // (not used here)
    u8 byte_121;
    u8 unknown_122[0x3a];  // (not used here)
    u8 byte_15c;
};
GUEST_OFFSET(Local_00594f3c_r4_1, byte_121, 0x121);
GUEST_OFFSET(Local_00594f3c_r4_1, byte_15c, 0x15c);

inline constexpr u32 vtable_fgobj__ObjectDeco = 0x00907970u;
inline constexpr u32 vtable_fgobj__ObjectDecoSwing = 0x00907c00u;
inline constexpr u32 object_deco_params_address = 0x0098ad14u;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x004ecb80, u32(u32, u32)> construct_base_anim_4ecb80;
inline constexpr guest::Function<0x004ecd30, u32(u32, u32, u32, u32)> build_skeletal_anim;
inline constexpr guest::Function<0x004ecf18, u32(u32, u32)> construct_base_anim_4ecf18;
inline constexpr guest::Function<0x004eda50, u32(u32, u32)> Model__find_node_of_kind;
inline constexpr guest::Function<0x00590f1c, u32(u32)> fgobj__ObjectBase__ObjectBase;
inline constexpr guest::Function<0x00591330, u32(u32, u32, u32, u32)> FieldItems__spawn;
inline constexpr guest::Function<0x0059b698, u32(u32, u32)> sead__FixedSafeString_32___FixedSafeString_0059b698;
inline constexpr guest::Function<0x007460b8, u32(u32, u32)> Mover__progress;

struct __attribute__((packed)) Frame_00594f3c {
    u32 word_0;
};
GUEST_OFFSET(Frame_00594f3c, word_0, 0x0);
GUEST_SIZE(Frame_00594f3c, 0x4);

u32 fgobj__ObjectDeco__ObjectDeco_00594f3c(u32 object_deco, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_00594f3c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = r3;
    u32 r7 = r1;
    u32 r6 = object_deco;
    u32 r8 = r2;
    r1 = object_deco_params_address;
    object_deco = 0u;
    do {
        u32 r2_1 = gptr<u32>(r1)[object_deco];
        if (r2_1 != 0) {
            *gptr<u32>(r1 + (object_deco << 2)) = 0;
            guest::cpu()->s[0] = S0;
            u32 block = allocate_on_heap(0x160u, r2_1, 4u, r3);  // (from the original)
            clear_aligned(block, 0x160u);  // (from the original)
            fgobj__ObjectBase__ObjectBase(block);
            *gptr<u32>(block) = vtable_fgobj__ObjectDeco;
            u32 r0_2 = block + 0x124u;  // (from the original)
            construct_base_anim_4ecb80(r0_2, vtable_fgobj__ObjectDeco);
            *gptr<u32>(r0_2 - 0x124u) = vtable_fgobj__ObjectDecoSwing;  // (from the original)
            u32 r0_3 = r0_2 + 0x20u;  // (from the original)
            construct_base_anim_4ecf18(r0_3, vtable_fgobj__ObjectDecoSwing);
            gptr<Local_00594f3c_r4_1> r4_1 = gptr<Local_00594f3c_r4_1>(r0_3 - 0x144u);  // (from the original)
            set_word_4_and_succeed(r0_3 - 0x124u, r2_1);  // (from the original)
            frame->word_0 = 1;
            FieldItems__spawn(r4_1.addr(), r6, r7, r8);
            if (r5 >= 4u) {
                r4_1->byte_15c = 1;
            }
            if (r5 < 4u) {
                r4_1->byte_15c = 0;
            }
            u32 r0_5 = sead__FixedSafeString_32___FixedSafeString_0059b698(0x846b88u, r5);  // (from the original)
            frame->word_0 = 0;
            build_skeletal_anim(r4_1.addr() + 0x144u, r4_1.addr() + 0x58u, r0_5, r4_1.addr() + 0x20u);  // (from the original)
            Model__find_node_of_kind(r4_1.addr() + 0x58u, r4_1.addr() + 0x144u);  // (from the original)
            Mover__progress(r4_1.addr() + 0x144u, r4_1.addr() + 0x144u);  // (from the original)
            float S0_11 = guest::cpu()->s[0];
            float S0_12 = std::bit_cast<float>(vcvt_uz_f(S0_11));
            r4_1->byte_121 = u8(std::bit_cast<u32>(S0_12));
            guest::cpu()->s[0] = S0_12;
            return r4_1.addr();
        }
        object_deco += 1u;
        guest::preempt();
    } while (object_deco < 0x14u);  // (from the original)
    guest::cpu()->s[0] = S0;
    return 0u;
}

}  // namespace d_00594f3c
GUEST_EXPORT_FRAMED(0x00594f3c, d_00594f3c::fgobj__ObjectDeco__ObjectDeco_00594f3c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00595194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00595194 {

struct __attribute__((packed)) Local_00595194_r0_1 {
    u32 vtable;
    u8 unknown_4[0x3c];  // (not used here)
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0xd8];  // (not used here)
    u32 word_124;
    u32 word_128;
    u32 word_12c;
    u8 unknown_130[0xc];  // (not used here)
    float float_13c;
    u8 byte_140;
    u8 byte_141;
    u8 byte_142;
    u8 byte_143;
};
GUEST_OFFSET(Local_00595194_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_00595194_r0_1, word_40, 0x40);
GUEST_OFFSET(Local_00595194_r0_1, word_44, 0x44);
GUEST_OFFSET(Local_00595194_r0_1, word_48, 0x48);
GUEST_OFFSET(Local_00595194_r0_1, word_124, 0x124);
GUEST_OFFSET(Local_00595194_r0_1, word_128, 0x128);
GUEST_OFFSET(Local_00595194_r0_1, word_12c, 0x12c);
GUEST_OFFSET(Local_00595194_r0_1, float_13c, 0x13c);
GUEST_OFFSET(Local_00595194_r0_1, byte_140, 0x140);
GUEST_OFFSET(Local_00595194_r0_1, byte_141, 0x141);
GUEST_OFFSET(Local_00595194_r0_1, byte_142, 0x142);
GUEST_OFFSET(Local_00595194_r0_1, byte_143, 0x143);

struct __attribute__((packed)) Local_00595194_r1_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00595194_r1_3, float_0, 0x0);
GUEST_OFFSET(Local_00595194_r1_3, float_4, 0x4);
GUEST_OFFSET(Local_00595194_r1_3, float_8, 0x8);

inline constexpr u32 vtable_fgobj__ObjectHoneycomb = 0x00907c30u;
inline constexpr u32 field_object_model_info_address = 0x0098a47cu;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x00582e4c, u32(u32, u32, u32, u32)> play_sound_at;
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> FieldItem__init;
inline constexpr guest::Function<0x00590c14, u32(u32, u32, u32)> FieldItem__place_on_ground;
inline constexpr guest::Function<0x00590f1c, u32(u32)> fgobj__ObjectBase__ObjectBase;

struct __attribute__((packed)) Frame_00595194 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00595194, word_0, 0x0);
GUEST_SIZE(Frame_00595194, 0x4);

u32 fgobj__ObjectHoneycomb__ObjectHoneycomb(u32 object_honeycomb, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<Frame_00595194> frame;  // the original's stack frame
    u32 r1_1 = 0;
    frame->word_0 = r3;
    u32 r5 = r3;
    u32 r8 = object_honeycomb;
    u32 r11 = r2;
    r3 = field_object_model_info_address;
    u32 r6 = *frame.at<u32>(0x28);  // (from the original)
    r2 = 0x226u;  // (from the original)
    u32 r9 = r1;
    object_honeycomb = 0u;
    do {
        r1_1 = gptr<u32>(r3)[object_honeycomb];
        if (r1_1 != 0) {
            *gptr<u32>(r3 + (object_honeycomb << 2)) = 0;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            gptr<Local_00595194_r0_1> block = gptr<Local_00595194_r0_1>(allocate_on_heap(0x144u, r1_1, 4u, r3));  // (from the original)
            clear_aligned(block.addr(), 0x144u);  // (from the original)
            fgobj__ObjectBase__ObjectBase(block.addr());
            block->vtable = vtable_fgobj__ObjectHoneycomb;
            set_word_4_and_succeed(block.addr() + 0x20u, r1_1);  // (from the original)
            frame->word_0 = 0;
            FieldItem__init(block.addr(), r8, r9, r11);
            u32 r2_4 = block->word_40;
            float S2_5 = 2.0f;
            gptr<Local_00595194_r1_3> r1_3 = gptr<Local_00595194_r1_3>(block.addr() + 0x130u);  // (from the original)
            block->word_124 = r2_4;
            float S3_5 = 0.5f;
            block->word_128 = block->word_44;
            block->word_12c = block->word_48;
            block->word_40 = std::bit_cast<u32>(std::bit_cast<float>(block->word_40) + std::bit_cast<float>(*gptr<u32>(r5)));
            block->word_44 = std::bit_cast<u32>(std::bit_cast<float>(block->word_44) + std::bit_cast<float>(*gptr<u32>(r5 + 4u)));
            float S1_5 = 1.5f;
            block->word_48 = std::bit_cast<u32>(std::bit_cast<float>(block->word_48) + std::bit_cast<float>(*gptr<u32>(r5 + 8u)));
            float S0_5 = 0.0f;
            r1_3->float_0 = S0_5;
            r1_3->float_4 = S1_5;
            r1_3->float_8 = S2_5;
            block->byte_140 = 0;
            block->byte_141 = u8(r6);
            block->float_13c = S3_5;
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1_5;
            guest::cpu()->s[2] = S2_5;
            guest::cpu()->s[3] = S3_5;
            FieldItem__place_on_ground(block.addr(), 0u, r2_4);
            block->byte_143 = 0;
            play_sound_at(0x1000614u, block.addr() + 0x40u, block.addr(), 0u);  // (from the original)
            block->byte_142 = 0;
            return block.addr();
        }
        object_honeycomb += 1u;
        guest::preempt();
    } while (object_honeycomb < r2);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00595194
GUEST_EXPORT_FRAMED(0x00595194, d_00595194::fgobj__ObjectHoneycomb__ObjectHoneycomb, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00595528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the field object's main joint in its model.
namespace d_00595528 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fd010, u32(u32)> map_object_entry;
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> run_if_scene_mode_flag_2;
inline constexpr guest::Function<0x00745bd8, u32(u32, u32, u32)> Skeleton__joint_world_matrix;
inline constexpr guest::Function<0x00745d44, u32(u32, u32, u32, u32)> Resource__find_index;

u32 FieldObject__find_joint(u32 field_object, u32 r1, u32 r2, float S0, float S1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 index_2 = Resource__find_index(field_object + 0x58u, 0x846b94u, r2, guest::cpu()->r[3]);  // (from the original)
    if (s32(index_2) < 0) {
        return 0u;
    }
    u32 r0_4 = Skeleton__joint_world_matrix(field_object + 0x58u, frame.at(0).addr(), index_2);  // (from the original)
    if (r0_4 == 0) {
        return r0_4;
    }
    run_if_scene_mode_flag_2(r1, frame.at(0).addr());
    u32 r0_6 = map_object_entry(field_object + 0x64u);  // (from the original)
    float S0_4 = guest::cpu()->s[0];
    float S1_4 = guest::cpu()->s[1];
    u32 r0_7 = *gptr<u8>(r0_6 + 0xdu);  // (from the original)
    if (r0_7 != 1u) {
        if (r0_7 == 2u) {
            u32 r0_9 = Item__has_number(field_object + 0x64u, 0x85u);  // (from the original)
            if (r0_9 == 0) {
                guest::cpu()->s[0] = S0_4;
                guest::cpu()->s[1] = S1_4;
                u32 r0_11 = Item__has_number(field_object + 0x64u, 0x88u);  // (from the original)
                if (r0_11 == 0) {
                    S1_4 = 5.0f;
                    S0_4 = std::bit_cast<float>(*gptr<u32>(r1 + 4u)) - S1_4;
                    *gptr<u32>(r1 + 4u) = std::bit_cast<u32>(S0_4);
                    guest::cpu()->s[0] = S0_4;
                    guest::cpu()->s[1] = S1_4;
                    return 1u;
                }
            }
            S1_4 = 10.0f;
            S0_4 = std::bit_cast<float>(*gptr<u32>(r1 + 8u)) + S1_4;
            *gptr<u32>(r1 + 8u) = std::bit_cast<u32>(S0_4);
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S1_4;
            return 1u;
        }
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        return 1u;
    }
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    u32 r0_13 = Item__has_number(field_object + 0x64u, 0x84u);  // (from the original)
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    if (r0_13 != 0) {
        return 1u;
    }
    u32 r0_15 = Item__has_number(field_object + 0x64u, 0x87u);  // (from the original)
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    if (r0_15 != 0) {
        return 1u;
    }
    S1_4 = 15.0f;
    S0_4 = std::bit_cast<float>(*gptr<u32>(r1 + 4u)) + S1_4;
    *gptr<u32>(r1 + 4u) = std::bit_cast<u32>(S0_4);
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return 1u;
}

}  // namespace d_00595528
GUEST_EXPORT_FRAMED(0x00595528, d_00595528::FieldObject__find_joint, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005959e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the field object's model for its item (bushes by their size) and its animations.
namespace d_005959e0 {

struct __attribute__((packed)) Object_005959e0_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_005959e0_2, word_0, 0x0);

struct __attribute__((packed)) Object_005959e0_3 {
    u32 word_0;
};
GUEST_OFFSET(Object_005959e0_3, word_0, 0x0);

struct __attribute__((packed)) Local_005959e0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005959e0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005959e0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005959e0_r0_4 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Local_005959e0_r0_4, byte_c, 0xc);
GUEST_OFFSET(Local_005959e0_r0_4, byte_d, 0xd);

inline constexpr u32 field_object_table_address = 0x0094ee4cu;
inline constexpr u32 field_item_model_table_address = 0x0094ee60u;
inline guest::global<u8, 0x0094ee4f> field_item_mode;
inline guest::global<u32, 0x0094ee60> field_item_model_table;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fd010, u32(u32)> map_object_entry;
inline constexpr guest::Function<0x004ecd30, u32(u32, u32, u32, u32)> build_skeletal_anim;
inline constexpr guest::Function<0x004eda50, u32(u32, u32)> Model__find_node_of_kind;
inline constexpr guest::Function<0x0058faa0, u32(u32, u32, u32, u32)> FieldItem__init_at;
inline constexpr guest::Function<0x0058fde0, u32(u32, u32, u32, u32)> FieldItem__set_color;
inline constexpr guest::Function<0x0059b698, u32(u32, u32)> sead__FixedSafeString_32___FixedSafeString_0059b698;
inline constexpr guest::Function<0x005a2b58, u32(u32)> sead__FixedSafeString_32___FixedSafeString_005a2b58;
inline constexpr guest::Function<0x007698a4, u32(u32, u32, u32)> item_type_is_17;

struct __attribute__((packed)) Frame_005959e0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005959e0, word_0, 0x0);
GUEST_OFFSET(Frame_005959e0, word_4, 0x4);
GUEST_OFFSET(Frame_005959e0, word_8, 0x8);
GUEST_SIZE(Frame_005959e0, 0x10);

void FieldObject__setup_model(u32 field_object, u32 r1, gptr<Object_005959e0_2> arg2, gptr<Object_005959e0_3> arg3) {
    guest::StackFrameOf<Frame_005959e0> frame;  // the original's stack frame
    u32 r0_6 = 0;
    Item__copy(field_object + 0x64u, r1, arg2.addr(), arg3.addr());  // (from the original)
    u32 r0_2 = sead__FixedSafeString_32___FixedSafeString_005a2b58(field_object);
    frame->word_0 = 0;
    frame->word_8 = 1;
    frame->word_4 = 0;
    FieldItem__init_at(field_object, r0_2, arg2->word_0, arg3->word_0);
    gptr<Local_005959e0_r0_4> r0_4 = gptr<Local_005959e0_r0_4>(map_object_entry(field_object + 0x64u));  // (from the original)
    u32 r0_5 = r0_4->byte_c;
    u32 r2_4 = s8(*field_item_mode);
    u32 r1_3 = *field_item_model_table;
    u32 r2_5 = 0u - r2_4;
    u32 zf_1 = (r2_5 & r1_3) == 0;
    if ((r2_5 & r1_3) != 0) {
        r1_3 = *gptr<u32>(r1_3 + 0x414u);  // (from the original)
    }
    if (r0_5 >= 0x87u) {  // (from the original)
        r0_5 = 0u;
    }
    if (!zf_1) {
        zf_1 = r1_3 == 0;
    }
    if (!zf_1 && r0_5 < 0x87u) {  // (from the original)
        r2_5 = r0_5 * 3u;
        r0_6 = r1_3 + (r2_5 + (r0_5 << 3) << 1);
    } else {
        r0_6 = 0u;
    }
    u32 r5_1 = r0_6 + 5u;
    *gptr<u8>(r0_6 + 0x15u) = 0;  // (from the original)
    u32 r0_8 = item_type_is_17(field_object + 0x64u, r1_3, r2_5);  // (from the original)
    if (r0_8 != 0) {
        r5_1 = s8(r0_4->byte_d) >= 2 ? 0x846b70u : 0x846b7cu;  // (from the original)
    }
    u32 r0_9 = sead__FixedSafeString_32___FixedSafeString_0059b698(r5_1, 1u);
    frame->word_0 = 0;
    build_skeletal_anim(field_object + 0x144u, field_object + 0x58u, r0_9, field_object + 0x20u);  // (from the original)
    Model__find_node_of_kind(field_object + 0x58u, field_object + 0x144u);  // (from the original)
    frame->word_4 = 1;
    frame->word_0 = 0;
    gptr<Local_005959e0_ea_3> ea_3 = gptr<Local_005959e0_ea_3>(frame.at(8).addr());
    ea_3->word_0 = 1;
    ea_3->word_4 = 0;
    FieldItem__set_color(field_object, arg3->word_0, 0u, ~0u);
}

}  // namespace d_005959e0
GUEST_EXPORT_FRAMED(0x005959e0, d_005959e0::FieldObject__setup_model, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00596298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Collects the field drop of kind 0xb at the position: keeps or gives it by its flag, counting the find.
namespace d_00596298 {

inline constexpr u32 field_drops_address = 0x009b4264u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32)> item_flags_bit_15;
inline constexpr guest::Function<0x0059ab9c, u32(u32, u32, u32, u32)> FieldObjects__add_plant;
inline constexpr guest::Function<0x0059ac18, u32(u32, u32, u32, u32)> FieldObjects__add_scaled;
inline constexpr guest::Function<0x005a0ef8, u32(u32, u32, u32)> find_field_drop;
inline constexpr guest::Function<0x005a1174, u32(u32, u32, u32, u32)> count_item_found_event;

void FieldDrop__collect_at(u32 field_drop, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 scene = current_scene_id(field_drop, r1, r2, r3);
    u32 drop_index = find_field_drop(field_drop, r1, scene);
    u32 r1_1 = guest::cpu()->r[1];
    if (drop_index + 1u != 0) {
        r1_1 = field_drops_address;
        u32 r4_1 = r1_1 + (drop_index * 3u + (drop_index << 3) << 1);
        if (*gptr<u8>(r4_1 + 0x10u) == 0xbu) {  // (from the original)
            u32 r0_4 = item_flags_bit_15(r4_1 + 4u, r1_1);
            if (r0_4 != 0) {
                frame.release();
                FieldObjects__add_scaled(r4_1 + 4u, field_drop, r1, 0u);
                return;
            }
            FieldObjects__add_plant(r4_1 + 4u, field_drop, r1, 1u);
            frame.release();
            count_item_found_event(r4_1, r4_1 + 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00596298
GUEST_EXPORT(0x00596298, d_00596298::FieldDrop__collect_at);

// f_00596334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the field drop at the position: tells the other stations (message 0x3a) or applies it, then frees its slot.
namespace d_00596334 {

struct __attribute__((packed)) Local_00596334_r5_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 active;
};
GUEST_OFFSET(Local_00596334_r5_1, byte_e, 0xe);
GUEST_OFFSET(Local_00596334_r5_1, byte_f, 0xf);
GUEST_OFFSET(Local_00596334_r5_1, active, 0x10);

inline constexpr u32 field_drop_slots_address = 0x009b417cu;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x0059ec48, u32(u32, u32, u32, u32)> FieldDrops__find_active;
inline constexpr guest::Function<0x0059f4d8, u32(u32)> FieldItem__update_by_kind;
inline constexpr guest::Function<0x0059f7c8, u32(u32, u32, u32)> FieldDropMessage__from_drop;
inline constexpr guest::Function<0x005a064c, u32(u32, u32)> FieldDrop__init;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

void FieldDrop__remove_at(u32 field_drop, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 active_2 = FieldDrops__find_active(field_drop, r1, r2, r3);
    if (active_2 + 1u != 0) {
        gptr<Local_00596334_r5_1> r5_1 = gptr<Local_00596334_r5_1>((active_2 + (active_2 << 3) << 1) + field_drop_slots_address);
        FieldDrop__init(frame.at(0).addr(), field_drop_slots_address);
        u32 r0_4 = FieldDropMessage__from_drop(frame.at(0).addr(), r5_1.addr(), 5u);
        u32 r6_1 = frame.at(0).addr();
        u32 r0_5 = mode_above_1(r0_4);
        if (r0_5 != 0) {
            u32 r0_6 = main_object_idle(r0_5);
            if (r0_6 == 0) {
                send_message(0x3au, 0u, r6_1, 0x16u);  // (from the original)
                goto L_596394;
            }
        }
        FieldItem__update_by_kind(r6_1);
L_596394:;
        r5_1->active = u8(active_2);
        r5_1->byte_e = 0;
        r5_1->byte_f = 0;
    }
}

}  // namespace d_00596334
GUEST_EXPORT_FRAMED(0x00596334, d_00596334::FieldDrop__remove_at, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005969c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a field drop of kind 0xb (a buried item 0x9e) for the item at the cell.
namespace d_005969c0 {

struct __attribute__((packed)) Local_005969c0_ea_4 {
    u32 word_0;
    u32 buried_form;
};
GUEST_OFFSET(Local_005969c0_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_005969c0_ea_4, buried_form, 0x4);

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x00599ca0, u32(u32, u32)> buried_form_of_item;
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> FieldDrops__add_to_free_slot;

struct __attribute__((packed)) Frame_005969c0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005969c0, word_0, 0x0);
GUEST_OFFSET(Frame_005969c0, word_4, 0x4);
GUEST_OFFSET(Frame_005969c0, word_10, 0x10);
GUEST_OFFSET(Frame_005969c0, word_14, 0x14);
GUEST_OFFSET(Frame_005969c0, word_18, 0x18);
GUEST_SIZE(Frame_005969c0, 0x28);

u32 FieldDrops__add_buried(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005969c0> frame;  // the original's stack frame
    Item__copy_b(frame.at(0x1c).addr(), field_drops, r2, r3);  // (from the original)
    Item__copy_b(frame.at(0x20).addr(), field_drops, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 buried_form_2 = buried_form_of_item(frame.at(0x1c).addr(), frame.at(0x20).addr());  // (from the original)
    u32 r0_5 = frame.at(0x24).addr();  // (from the original)
    construct_item(r0_5, 0x9eu);  // (from the original)
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    gptr<Local_005969c0_ea_4> ea_4 = gptr<Local_005969c0_ea_4>(frame.at(8).addr());
    ea_4->word_0 = 0;
    ea_4->buried_form = buried_form_2;
    frame->word_0 = r1;
    frame->word_4 = r2;
    u32 r0_6 = FieldDrops__add_to_free_slot(0xbu, r0_5, frame.at(0x1c).addr(), frame.at(0x20).addr());  // (from the original)
    return r0_6;
}

}  // namespace d_005969c0
GUEST_EXPORT_FRAMED(0x005969c0, d_005969c0::FieldDrops__add_buried, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00596a60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees the field drop at the position and its slot; its index, or -1.
namespace d_00596a60 {

struct __attribute__((packed)) Local_00596a60_r0_2 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 active;
};
GUEST_OFFSET(Local_00596a60_r0_2, byte_e, 0xe);
GUEST_OFFSET(Local_00596a60_r0_2, byte_f, 0xf);
GUEST_OFFSET(Local_00596a60_r0_2, active, 0x10);

inline constexpr u32 field_drop_slots_address = 0x009b417cu;
inline constexpr guest::Function<0x0059ec48, u32(u32, u32, u32, u32)> FieldDrops__find_active;
inline constexpr guest::Function<0x0059ecbc, u32(u32, u32, u32)> FieldDrop__finish;

u32 FieldDrops__release_at(u32 field_drops, u32 r1, u32 r2) {
    u32 active_2 = FieldDrops__find_active(field_drops, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (active_2 + 1u != 0) {
        FieldDrop__finish(field_drops, active_2, 0u);
        gptr<Local_00596a60_r0_2> r0_2 = gptr<Local_00596a60_r0_2>(active_2 * 0x12u + field_drop_slots_address);  // (from the original)
        r1_1 = 0u;
        r0_2->active = u8(active_2);
        r0_2->byte_e = u8(r1_1);
        r0_2->byte_f = u8(r1_1);
        active_2 = active_2;
    }
    guest::cpu()->r[1] = r1_1;
    return active_2;
}

}  // namespace d_00596a60
GUEST_EXPORT_FRAMED(0x00596a60, d_00596a60::FieldDrops__release_at, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00596bcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a field drop of kind 0xc for a random item at a free spot; -1 when there is none.
namespace d_00596bcc {

struct __attribute__((packed)) Local_00596bcc_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00596bcc_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00596bcc_ea_5, word_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> AcPlayer__front_cell;
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> FieldDrops__add_to_free_slot;
inline constexpr guest::Function<0x00767a44, u32(u32, u32)> Item__display_variant;

struct __attribute__((packed)) Frame_00596bcc {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00596bcc, word_0, 0x0);
GUEST_OFFSET(Frame_00596bcc, word_4, 0x4);
GUEST_OFFSET(Frame_00596bcc, word_8, 0x8);
GUEST_OFFSET(Frame_00596bcc, word_c, 0xc);
GUEST_OFFSET(Frame_00596bcc, word_10, 0x10);
GUEST_OFFSET(Frame_00596bcc, word_14, 0x14);
GUEST_OFFSET(Frame_00596bcc, word_18, 0x18);
GUEST_SIZE(Frame_00596bcc, 0x2c);

u32 FieldDrops__add_random_c(u32 field_drops) {
    guest::StackFrameOf<Frame_00596bcc> frame;  // the original's stack frame
    frame->word_0 = 0;
    u32 r0_2 = AcPlayer__front_cell(frame.at(0x1c).addr(), frame.at(0x20).addr(), frame.at(0x28).addr(), 1u);  // (from the original)
    if (r0_2 == 0) {
        return ~0u;
    }
    construct_empty_item(frame.at(0x24).addr());  // (from the original)
    Item__display_variant(field_drops, frame.at(0x24).addr());  // (from the original)
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    gptr<Local_00596bcc_ea_5> ea_5 = gptr<Local_00596bcc_ea_5>(frame.at(0x1c).addr());  // (from the original)
    u32 r1_4 = ea_5->word_4;
    frame->word_0 = ea_5->word_0;
    frame->word_4 = r1_4;
    frame->word_8 = 0;
    u32 r0_5 = FieldDrops__add_to_free_slot(0xcu, empty_item_address, frame.at(0x24).addr(), field_drops);  // (from the original)
    return r0_5;
}

}  // namespace d_00596bcc
GUEST_EXPORT_FRAMED(0x00596bcc, d_00596bcc::FieldDrops__add_random_c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00596c64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a field drop of kind 0xa for the item at a free spot (swapping item 0x339f for 0x33a0 in island scenes); -1
// when there is none.
namespace d_00596c64 {

struct __attribute__((packed)) Local_00596c64_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00596c64_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_00596c64_ea_6, word_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> AcPlayer__front_cell;
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> FieldDrops__add_to_free_slot;

struct __attribute__((packed)) Frame_00596c64 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
    u8 byte_24;
    u8 unknown_25[0xb];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00596c64, word_0, 0x0);
GUEST_OFFSET(Frame_00596c64, word_4, 0x4);
GUEST_OFFSET(Frame_00596c64, word_8, 0x8);
GUEST_OFFSET(Frame_00596c64, word_c, 0xc);
GUEST_OFFSET(Frame_00596c64, word_10, 0x10);
GUEST_OFFSET(Frame_00596c64, word_14, 0x14);
GUEST_OFFSET(Frame_00596c64, word_18, 0x18);
GUEST_OFFSET(Frame_00596c64, byte_24, 0x24);
GUEST_SIZE(Frame_00596c64, 0x30);

u32 FieldDrops__add_dropped_item(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00596c64> frame;  // the original's stack frame
    u32 r0_6 = 0;
    u32 r4_1 = 0u;
    u32 scene = current_scene_id(field_drops, r1, r2, r3);
    u32 scene_flagged = scene_has_flags(4u, scene);
    if (scene_flagged != 0) {
        u32 r0_3 = Item__has_number(field_drops, 0x339fu);  // (from the original)
        if (r0_3 != 0) {
            r4_1 = 1u;
        }
    }
    frame->word_0 = r4_1;
    u32 r0_5 = AcPlayer__front_cell(frame.at(0x1c).addr(), frame.at(0x20).addr(), frame.at(0x24).addr(), 0u);  // (from the original)
    if (r0_5 == 0) {
        r0_6 = ~0u;
    } else {
        u32 r0_7 = frame.at(0x28).addr();  // (from the original)
        Item__copy_b(r0_7, field_drops);
        u32 scene_2 = current_scene_id(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 scene_flagged_2 = scene_has_flags(4u, scene_2);
        if (scene_flagged_2 != 0) {
            u32 r0_10 = Item__has_number(field_drops, 0x339fu);  // (from the original)
            if (r0_10 != 0) {
                u32 r0_11 = frame.at(0).addr();
                construct_item(r0_11, 0x33a0u);  // (from the original)
                Item__copy(frame.at(0x28).addr(), r0_11);  // (from the original)
            }
        }
        frame->word_10 = 0;
        u32 r0_13 = frame->byte_24;
        frame->word_c = 0;
        frame->word_14 = 0;
        frame->word_18 = 0;
        gptr<Local_00596c64_ea_6> ea_6 = gptr<Local_00596c64_ea_6>(frame.at(0x1c).addr());  // (from the original)
        u32 r1_4 = ea_6->word_0;
        u32 r2_10 = ea_6->word_4;
        frame->word_8 = r0_13;
        frame->word_0 = r1_4;
        frame->word_4 = r2_10;
        r0_6 = FieldDrops__add_to_free_slot(0xau, empty_item_address, frame.at(0x28).addr(), field_drops);  // (from the original)
    }
    return r0_6;
}

}  // namespace d_00596c64
GUEST_EXPORT_FRAMED(0x00596c64, d_00596c64::FieldDrops__add_dropped_item, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00596e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a field drop from the current player's tool and the item's map entry, at random.
namespace d_00596e94 {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fd010, u32(u32, u32, u32, u32)> map_object_entry;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;

void FieldDrops__add_from_player_tool(u32 field_drops, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_1 = map_object_entry(field_drops, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = *gptr<s16>(r0_1);
    if (r0_2 >= 0xfeu) {  // (from the original)
        r0_2 = 0u;
    }
    construct_item(frame.at(0).addr(), uxth(r0_2));
    u32 r0_4 = *current_player_data;
    if (r0_4 != 0) {
        u32 r0_6 = slot_7_if_class_7(r0_4 + 0xau);  // (from the original)
        u32 r0_7 = Item__has_number(r0_6, 0x334eu);  // (from the original)
        if (r0_7 != 0) {
            goto L_596ef8;
        }
    }
    r0_8 = random_below(0x64u);  // (from the original)
    if (s32(r0_8) >= 5) {
        goto L_5971b8;
    }
L_596ef8:;
    r0_9 = random_below(0x64u);  // (from the original)
    r0_10 = frame.at(0).addr();
    r0_11 = Item__has_number(r0_10, 0xau);  // (from the original)
    if (r0_11 != 0) {
        if (s32(r0_9) < 0x14) {  // (from the original)
            u32 r0_12 = frame.at(4).addr();
            construct_item(r0_12, 0xbu);  // (from the original)
            Item__copy(frame.at(0).addr(), r0_12);
        } else if (s32(r0_9) < 0x28) {  // (from the original)
            u32 r0_14 = frame.at(4).addr();
            construct_item(r0_14, 0xcu);  // (from the original)
            Item__copy(frame.at(0).addr(), r0_14);
        } else if (s32(r0_9) < 0x3c) {  // (from the original)
            u32 r0_16 = frame.at(4).addr();
            construct_item(r0_16, 0xdu);  // (from the original)
            Item__copy(frame.at(0).addr(), r0_16);
        } else if (s32(r0_9) < 0x50) {  // (from the original)
            u32 r0_18 = frame.at(4).addr();
            construct_item(r0_18, 0xeu);  // (from the original)
            Item__copy(frame.at(0).addr(), r0_18);
        } else if (s32(r0_9) < 0x5a) {  // (from the original)
            u32 r0_20 = frame.at(4).addr();
            construct_item(r0_20, 0xfu);  // (from the original)
            Item__copy(frame.at(0).addr(), r0_20);
        } else {
            u32 r0_22 = frame.at(4).addr();
            construct_item(r0_22, 0x10u);  // (from the original)
            Item__copy(frame.at(0).addr(), r0_22);
        }
    } else {
        u32 r0_25 = Item__has_number(frame.at(0).addr(), 0x14u);  // (from the original)
        if (r0_25 != 0) {
            if (s32(r0_9) < 0x14) {  // (from the original)
                u32 r0_26 = frame.at(4).addr();
                construct_item(r0_26, 0x15u);  // (from the original)
                Item__copy(frame.at(0).addr(), r0_26);
            } else if (s32(r0_9) < 0x28) {  // (from the original)
                u32 r0_28 = frame.at(4).addr();
                construct_item(r0_28, 0x16u);  // (from the original)
                Item__copy(frame.at(0).addr(), r0_28);
            } else if (s32(r0_9) < 0x3c) {  // (from the original)
                u32 r0_30 = frame.at(4).addr();
                construct_item(r0_30, 0x17u);  // (from the original)
                Item__copy(frame.at(0).addr(), r0_30);
            } else if (s32(r0_9) < 0x50) {  // (from the original)
                u32 r0_32 = frame.at(4).addr();
                construct_item(r0_32, 0x18u);  // (from the original)
                Item__copy(frame.at(0).addr(), r0_32);
            } else if (s32(r0_9) < 0x5a) {  // (from the original)
                u32 r0_34 = frame.at(4).addr();
                construct_item(r0_34, 0x19u);  // (from the original)
                Item__copy(frame.at(0).addr(), r0_34);
            } else {
                u32 r0_36 = frame.at(4).addr();
                construct_item(r0_36, 0x1au);  // (from the original)
                Item__copy(frame.at(0).addr(), r0_36);
            }
        }
    }
L_5971b8:;
    Item__copy(field_drops, frame.at(0).addr());
}

}  // namespace d_00596e94
GUEST_EXPORT_FRAMED(0x00596e94, d_00596e94::FieldDrops__add_from_player_tool, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00597678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a dig drop at the cell: kind 0x1f for a buried item (0x9e), kind 0x1e for event items; -1 otherwise.
namespace d_00597678 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fccc4, u32(u32)> item_number_is_indexed;
inline constexpr guest::Function<0x002fd010, u32(u32)> map_object_entry;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> FieldDrops__add_to_free_slot;
inline constexpr guest::Function<0x005a06d4, u32(u32, u32, u32)> find_field_marker;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

struct __attribute__((packed)) Frame_00597678 {
    u32 field_drops;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Frame_00597678, field_drops, 0x0);
GUEST_OFFSET(Frame_00597678, word_4, 0x4);
GUEST_OFFSET(Frame_00597678, word_8, 0x8);
GUEST_OFFSET(Frame_00597678, word_c, 0xc);
GUEST_OFFSET(Frame_00597678, word_10, 0x10);
GUEST_OFFSET(Frame_00597678, word_14, 0x14);
GUEST_OFFSET(Frame_00597678, word_18, 0x18);
GUEST_SIZE(Frame_00597678, 0x1c);

u32 FieldDrops__add_dig(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00597678> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 scene = current_scene_id(field_drops, r1, r2, r3);
    u32 scene_flagged = scene_has_flags(4u, scene);
    if (scene_flagged != 0) {
        u32 map_table_2 = get_map_table(scene_flagged);
        r0_4 = GridMap__process_world_position(map_table_2, field_drops, r1, 0u);
        if (r0_4 != 0) {
            u32 marker_index = find_field_marker(field_drops, r1, 0xa5u);  // (from the original)
            if (marker_index + 1u == 0) {
                u32 r0_6 = Item__has_number(r0_4, 0x9eu);  // (from the original)
                if (r0_6 != 0) {
                    frame->word_c = 0;
                    frame->word_10 = 0;
                    frame->word_14 = 0;
                    frame->word_18 = 0;
                    frame->field_drops = field_drops;
                    frame->word_4 = r1;
                    frame->word_8 = 0;
                    u32 r0_7 = FieldDrops__add_to_free_slot(0x1fu, r0_4, empty_item_address, empty_item_address);  // (from the original)
                    return r0_7;
                }
                u32 r0_8 = item_number_is_indexed(r0_4);
                if (r0_8 == 0) {
                    goto L_597750;
                }
                u32 r0_9 = map_object_entry(r0_4);
                if (s32(u32(*gptr<u8>(r0_9 + 0xfu)) << 0x1c) >= 0) {  // (from the original)
                    goto L_597750;
                }
            }
        }
    }
    return ~0u;
L_597750:;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    frame->field_drops = field_drops;
    frame->word_4 = r1;
    frame->word_8 = 0;
    u32 r0_11 = FieldDrops__add_to_free_slot(0x1eu, r0_4, empty_item_address, empty_item_address);  // (from the original)
    return r0_11;
}

}  // namespace d_00597678
GUEST_EXPORT_FRAMED(0x00597678, d_00597678::FieldDrops__add_dig, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00597864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Collects the field drop at the position: gives its item to the current player and counts it, telling the other
// stations.
namespace d_00597864 {

inline constexpr u32 field_drop_slots_address = 0x009b417cu;
inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32)> add_to_player_counter;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc900, u32(u32, u32)> mode_above_1;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32)> Item__category;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32)> main_object_idle;
inline constexpr guest::Function<0x0059ec48, u32(u32, u32, u32, u32)> FieldDrops__find_active;
inline constexpr guest::Function<0x0059eed8, u32(u32, u32)> FieldDrops__entry;
inline constexpr guest::Function<0x0059f4d8, u32(u32)> FieldItem__update_by_kind;
inline constexpr guest::Function<0x0059f7c8, u32(u32, u32, u32)> FieldDropMessage__from_drop;
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> FieldDrop__init;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

u32 FieldDrops__collect(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r5 = 0;
    u32 r7 = 0;
    u32 r8 = 0;
    u32 r10 = 0;
    u32 drop = 0;
    u32 field_drop_message = 0;
    u32 r0_4 = 0;
    u32 r11_1 = 0;
    u32 r0_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r7_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_18 = 0;
    u32 r9 = field_drops;
    u32 r0_1 = field_drops + (r9 << 3);
    u32 r4 = (r0_1 << 1) + field_drop_slots_address;
    u32 r6 = *gptr<u8>(r4 + 0xfu);  // (from the original)
    if (r6 != 1u) {
        r5 = *gptr<u8>(r4 + 0xeu);  // (from the original)
        r8 = r9 & 0xffu;  // (from the original)
        if (r6 == 2u) {
            goto L_5978ac;
        }
        if (r6 == 3u) {
            *gptr<u8>(r4 + 0x10u) = u8(r8);  // (from the original)
            *gptr<u8>(r4 + 0xeu) = 0;  // (from the original)
            *gptr<u8>(r4 + 0xfu) = 0;  // (from the original)
            return r6;
        }
    }
    return r6;
L_5978ac:;
    if (r5 != 0x22u) {  // (from the original)
        goto L_597948;
    }
    r0_1 = FieldDrops__find_active(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 + 1u == 0) {
        goto L_597948;
    }
    r7 = r0_1;
    r10 = (r0_1 + (r7 << 3) << 1) + field_drop_slots_address;
    drop = frame.at(0).addr();
    FieldDrop__init(drop, r1, r2, r3);
    field_drop_message = frame.at(0).addr();
    r0_4 = FieldDropMessage__from_drop(field_drop_message, r10, 5u);
    r11_1 = frame.at(0).addr();
    r0_5 = mode_above_1(r0_4, guest::cpu()->r[1]);
    if (r0_5 != 0) {
        u32 r0_6 = main_object_idle(r0_5, guest::cpu()->r[1]);
        if (r0_6 == 0) {
            goto L_597988;
        }
    }
    FieldItem__update_by_kind(r11_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_597918:;
    r0_1 = 0u;
    *gptr<u8>(r10 + 0x10u) = u8(r7);  // (from the original)
    *gptr<u8>(r10 + 0xeu) = u8(r0_1);  // (from the original)
    *gptr<u8>(r10 + 0xfu) = u8(r0_1);  // (from the original)
L_597948:;
    r0_7 = current_scene_id(r0_1, r1, r2, r3);
    r0_8 = scene_has_flags(0x20u, r0_7);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        goto L_597a90;
    }
    if (r5 == 0xcu) {  // (from the original)
        goto L_5979a8;
    }
    if (r5 == 0xbu) {  // (from the original)
        FieldDrops__entry(r9, r1);
        r1 = guest::cpu()->r[1];
    }
    goto L_597a90;
L_597988:;
    send_message(0x3au, 0u, r11_1, 0x16u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_597918;
L_5979a8:;
    r0_9 = r4 + 8u;
    r0_10 = Item__category(r0_9, r1);
    r1 = guest::cpu()->r[1];
    r7_1 = r0_10;
    if (r0_10 != 0x36u) {  // (from the original)
        r0_10 = Item__has_number(r4 + 8u, 0x3413u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_10 == 0) {
            goto L_597a20;
        }
    }
    r0_12 = mode_above_1(r0_10, r1);
    r1 = guest::cpu()->r[1];
    if (r0_12 != 0) {
        r0_12 = main_object_idle(r0_12, r1);
        r1 = guest::cpu()->r[1];
        if (r0_12 == 0) {
            goto L_597a90;
        }
    }
    r0_13 = get_current_player(r0_12, r1);
    add_to_player_counter(r0_13 + 0x8ae0u, 0x5fu, 1u);  // (from the original)
    r1 = guest::cpu()->r[1];
    goto L_597a90;
L_597a20:;
    if (r7_1 != 0x37u && r7_1 != 0x38u) {  // (from the original)
        r0_10 = Item__has_number(r4 + 8u, 0x3414u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_10 == 0) {
            r0_10 = Item__has_number(r4 + 8u, 0x3415u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_10 == 0) {
                r0_10 = Item__has_number(r4 + 8u, 0x3416u);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_10 == 0) {
                    goto L_597a90;
                }
            }
        }
    }
    r0_18 = get_current_player(r0_10, r1);
    add_to_player_counter(r0_18 + 0x8ae0u, 0x17u, 1u);  // (from the original)
    r1 = guest::cpu()->r[1];
L_597a90:;
    u32 res_1 = r5 - 0x17u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return r6;
    }
    if (!zf_1 && (res_1 >> 0x1f) == (((r5 ^ 0x17u) & (r5 ^ res_1)) >> 0x1f)) {  // (from the original)
        goto L_597ac8;
    }
    if (r5 == 2u || r5 == 4u || r5 == 5u || r5 == 0x15u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r6;
    }
    *gptr<u8>(r4 + 0x10u) = u8(r8);  // (from the original)
    *gptr<u8>(r4 + 0xeu) = 0;  // (from the original)
    *gptr<u8>(r4 + 0xfu) = 0;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r6;
L_597ac8:;
    if (r5 != 0x18u && r5 != 0x19u && r5 != 0x1au) {  // (from the original)
        *gptr<u8>(r4 + 0x10u) = u8(r8);  // (from the original)
        *gptr<u8>(r4 + 0xeu) = 0;  // (from the original)
        *gptr<u8>(r4 + 0xfu) = 0;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r6;
    }
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_00597864
GUEST_EXPORT_FRAMED(0x00597864, d_00597864::FieldDrops__collect, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00597c30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a field drop of kind 0x20 for a flagged item of category 0x41 at the cell; -1 otherwise.
namespace d_00597c30 {

struct __attribute__((packed)) Local_00597c30_r6_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00597c30_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_00597c30_r6_1, word_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb9c, u32(u32)> item_flags_bit_15;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> FieldDrops__add_to_free_slot;
inline constexpr guest::Function<0x005a06d4, u32(u32, u32, u32)> find_field_marker;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

struct __attribute__((packed)) Frame_00597c30 {
    u32 field_drops;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00597c30, field_drops, 0x0);
GUEST_OFFSET(Frame_00597c30, word_c, 0xc);
GUEST_OFFSET(Frame_00597c30, word_10, 0x10);
GUEST_OFFSET(Frame_00597c30, word_14, 0x14);
GUEST_OFFSET(Frame_00597c30, word_18, 0x18);
GUEST_SIZE(Frame_00597c30, 0x20);

u32 FieldDrops__add_flagged_41(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00597c30> frame;  // the original's stack frame
    u32 r0_1 = frame.at(0x1c).addr();  // (from the original)
    construct_empty_item(r0_1, r1, r2, r3);
    u32 scene = current_scene_id(r0_1);
    u32 scene_flagged = scene_has_flags(4u, scene);
    if (scene_flagged != 0) {
        u32 map_table_2 = get_map_table(scene_flagged);
        u32 item_2 = GridMap__process_world_position(map_table_2, field_drops, r1, 0u);
        if (item_2 != 0) {
            u32 marker_index = find_field_marker(field_drops, r1, 0xa5u);  // (from the original)
            if (marker_index + 1u == 0) {
                u32 r0_7 = item_flags_bit_15(item_2);
                if (r0_7 != 0) {
                    u32 category_2 = Item__category(item_2);
                    if (category_2 == 0x41u) {  // (from the original)
                        Item__copy(frame.at(0x1c).addr(), item_2);  // (from the original)
                        gptr<Local_00597c30_r6_1> r6_1 = gptr<Local_00597c30_r6_1>(frame.at(4).addr());
                        frame->word_14 = 0;
                        frame->word_c = 0;
                        frame->word_10 = 0;
                        frame->field_drops = field_drops;
                        frame->word_18 = 0;
                        r6_1->word_0 = r1;
                        r6_1->word_4 = 0;
                        u32 r0_9 = FieldDrops__add_to_free_slot(0x20u, frame.at(0x1c).addr(), empty_item_address, empty_item_address);  // (from the original)
                        return r0_9;
                    }
                }
            }
        }
    }
    return ~0u;
}

}  // namespace d_00597c30
GUEST_EXPORT_FRAMED(0x00597c30, d_00597c30::FieldDrops__add_flagged_41, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00597d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the field drop that spawns the special insect for the item.
namespace d_00597d28 {

inline constexpr u32 insect_manager_address = 0x0094f524u;
inline constexpr u32 insect_spawn_a_address = 0x00952694u;
inline constexpr u32 insect_spawn_b_address = 0x00952698u;
inline constexpr u32 insect_spawn_c_address = 0x0095269cu;
inline constexpr u32 insect_spawn_d_address = 0x009526a0u;
inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x0094f524> insect_manager;
inline guest::global<u8, 0x00950145> insect_spawns_disabled;
inline guest::global<u32, 0x00952694> insect_spawn_a;
inline guest::global<u32, 0x00952698> insect_spawn_b;
inline guest::global<u8, 0x00953f68> tourney_kind;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002aab48, u32(u32, u32)> InsectMgr__special_slot;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x002ff0b8, u32(u32)> Item__is_in_id_set_d_without_low_flags;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x00305f2c, u32(u32)> read_global_object_byte;
inline constexpr guest::Function<0x006b9934, u32(u32)> Item__reset_set_d_variant;
inline constexpr guest::Function<0x0076ad24, u32(u32)> Item__variant_of_set_76af88;

struct __attribute__((packed)) Frame_00597d28 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00597d28, word_0, 0x0);
GUEST_SIZE(Frame_00597d28, 0x4);

u32 FieldDrops__add_insect_spawn(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00597d28> frame;  // the original's stack frame
    u32 r0_20 = 0;
    frame->word_0 = r3;
    u32 item = r1;
    if ((*insect_spawn_b & 1u) == 0) {
        u32 first_time = static_guard_acquire(insect_spawn_b_address, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (first_time != 0) {
            construct_item(insect_spawn_c_address, 0x26u, r2, r3);  // (from the original)
            r3 = guest::cpu()->r[3];
            r2 = 0x100000u;  // (from the original)
            r1 = 0x2f777cu;  // (from the original)
        }
    }
    if ((*insect_spawn_a & 1u) == 0) {
        u32 first_time_2 = static_guard_acquire(insect_spawn_a_address, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (first_time_2 != 0) {
            construct_item(insect_spawn_d_address, 0x2bu, r2, r3);  // (from the original)
            r3 = guest::cpu()->r[3];
            r2 = 0x100000u;  // (from the original)
        }
    }
    u32 r0_3 = Item__has_number(item, 0x72u, r2, r3);  // (from the original)
    if (r0_3 != 0) {
        Item__copy(field_drops, insect_spawn_c_address);
        u32 r0_4 = current_net_signed_value(field_drops);
        if (r0_4 != 0) {
            return 0u;
        }
        u32 r0_5 = *current_player_data;
        if (r0_5 == 0) {
            return 0u;
        }
        if (s32(u32(*gptr<u8>(r0_5 + 0x5701u)) << 0x1e) >= 0) {  // (from the original)
            return 0u;
        }
        u32 r0_6 = *insect_manager;
        if (r0_6 == 0) {
            return 0u;
        }
        u32 r0_7 = InsectMgr__special_slot(r0_6, 0xcu);  // (from the original)
        return *gptr<u32>(r0_7) != 0 || *insect_spawns_disabled != 0 ? 0u : 3u;
    }
    u32 r0_8 = Item__has_number(item, 0x77u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_8 == 0) {
        u32 r0_9 = Item__is_in_id_set_d_without_low_flags(item);
        if (r0_9 != 0) {
            Item__copy(field_drops, item);
            Item__reset_set_d_variant(field_drops);
            u32 r0_10 = Item__variant_of_set_76af88(item);
            u32 nf_1 = r0_10 + 1u >> 0x1f;  // (from the original)
            u32 zf_1 = r0_10 + 1u == 0;
            u32 vf_1 = ((r0_10 ^ r0_10 + 1u) & (1u ^ r0_10 + 1u)) >> 0x1f;  // (from the original)
            if (!zf_1) {
                nf_1 = r0_10 - 3u >> 0x1f;  // (from the original)
                zf_1 = r0_10 - 3u == 0;
                vf_1 = ((r0_10 ^ 3u) & (r0_10 ^ r0_10 - 3u)) >> 0x1f;  // (from the original)
            }
            if (!zf_1 && nf_1 == vf_1) {
                u32 random_2 = random_below(4u);
                if (s32(r0_10 - 3u) > s32(random_2)) {
                    u32 r0_12 = frame.at(0).addr();
                    construct_item(r0_12, 6u, guest::cpu()->r[2], guest::cpu()->r[3]);
                    Item__copy(field_drops, r0_12);
                    return 4u;
                }
            }
            return 1u;
        }
        u32 r0_13 = Item__has_number(item, 0x71u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_13 == 0) {
            u32 r0_14 = Item__has_number(item, 0x73u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (r0_14 == 0) {
                u32 r0_15 = Item__has_number(item, 0x75u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                if (r0_15 == 0) {
                    u32 r0_16 = Item__has_number(item, 0x74u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    if (r0_16 == 0) {
                        u32 r0_17 = Item__has_number(item, 0x76u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                        if (r0_17 == 0) {
                            u32 r0_18 = Item__has_number(item, 0x78u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                            if (r0_18 == 0) {
                                u32 r0_19 = Item__has_number(item, 0x7au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                                if (r0_19 == 0) {
                                    r0_20 = Item__has_number(item, 0x79u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                                    if (r0_20 == 0) {
                                        return r0_20;
                                    }
                                    u32 r0_21 = read_global_object_byte(r0_20);
                                    if (r0_21 != 3u && *current_player_data != 0 && *tourney_kind == 1u) {
                                        return 0u;
                                    }
                                }
                            }
                        }
                        Item__copy(field_drops, insect_spawn_d_address);
                        return 2u;
                    }
                    u32 r0_22 = read_global_object_byte(r0_16);
                    if (r0_22 != 3u && *current_player_data != 0 && *tourney_kind == 1u) {
                        return 0u;
                    }
                }
            }
        }
        Item__copy(field_drops, insect_spawn_c_address);
        return 2u;
    }
    Item__copy(field_drops, insect_spawn_d_address);
    u32 r0_23 = current_net_signed_value(field_drops);
    if (r0_23 == 0) {
        u32 r0_24 = *current_player_data;
        if (r0_24 != 0) {
            if (s32(u32(*gptr<u8>(r0_24 + 0x5701u)) << 0x1e) < 0) {  // (from the original)
                u32 insect_mgr = *insect_manager;
                if (insect_mgr != 0) {
                    u32 r0_26 = InsectMgr__special_slot(insect_mgr, 0xcu);  // (from the original)
                    if (*gptr<u32>(r0_26) == 0 && *insect_spawns_disabled == 0) {
                        return 3u;
                    }
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_00597d28
GUEST_EXPORT_FRAMED(0x00597d28, d_00597d28::FieldDrops__add_insect_spawn, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00598164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds item 0xcd in the map and starts its drop; true when found.
namespace d_00598164 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059a9ac, u32(u32, u32, u32, u32)> field_item_position;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x00752990, u32(u32, u32)> rect_at_10_width;
inline constexpr guest::Function<0x00752998, u32(u32)> rect_at_10_height;

struct __attribute__((packed)) Frame_00598164 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00598164, word_0, 0x0);
GUEST_SIZE(Frame_00598164, 0x4);

u32 FieldDrops__find_item_cd(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00598164> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r10 = field_drops;
    u32 map_table_2 = get_map_table(field_drops, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    u32 r9 = map_table_2;
    if (map_table_2 != 0) {
        u32 r0_2 = rect_at_10_width(map_table_2, r1);
        u32 r6 = r0_2;
        u32 r0_3 = rect_at_10_height(r9);
        r1 = guest::cpu()->r[1];
        u32 r8 = r0_3;
        u32 r7 = 0u;
        if (r0_3 >= 0u && r0_3 != 0) {
            do {
                u32 r4 = 0u;
                if (r6 >= 0u && r6 != 0) {
                    do {
                        u32 item_2 = GridMap__process_world_position(r9, r4, r7, 0u);
                        r1 = guest::cpu()->r[1];
                        if (item_2 != 0) {
                            u32 r0_5 = Item__has_number(item_2, 0xcdu);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            if (r0_5 != 0) {
                                frame->word_0 = 0;
                                field_item_position(r10, item_2, r4, r7);
                                return 1u;
                            }
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (r4 < r6);
                }
                r7 += 1u;
                guest::preempt();
            } while (r7 < r8);
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00598164
GUEST_EXPORT_FRAMED(0x00598164, d_00598164::FieldDrops__find_item_cd, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00598218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a field drop of kind 7 for a buried item (0x9e) or hole (0x9d) at the cell; -1 otherwise.
namespace d_00598218 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> FieldDrops__add_to_free_slot;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

struct __attribute__((packed)) Frame_00598218 {
    u32 field_drops;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00598218, field_drops, 0x0);
GUEST_OFFSET(Frame_00598218, word_4, 0x4);
GUEST_OFFSET(Frame_00598218, word_8, 0x8);
GUEST_OFFSET(Frame_00598218, word_c, 0xc);
GUEST_OFFSET(Frame_00598218, word_10, 0x10);
GUEST_OFFSET(Frame_00598218, word_14, 0x14);
GUEST_OFFSET(Frame_00598218, word_18, 0x18);
GUEST_SIZE(Frame_00598218, 0x20);

u32 FieldDrops__add_hole(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00598218> frame;  // the original's stack frame
    u32 scene = current_scene_id(field_drops, r1, r2, r3);
    u32 scene_flagged = scene_has_flags(4u, scene);
    if (scene_flagged != 0) {
        u32 map_table_2 = get_map_table(scene_flagged);
        u32 item_2 = GridMap__process_world_position(map_table_2, field_drops, r1, 0u);
        if (item_2 != 0) {
            u32 is_empty_2 = Item__is_empty(item_2);
            if (is_empty_2 == 0) {
                u32 r0_6 = Item__has_number(item_2, 0x9eu);  // (from the original)
                if (r0_6 == 0) {
                    u32 r0_7 = Item__has_number(item_2, 0x9du);  // (from the original)
                    if (r0_7 == 0) {
                        return ~0u;
                    }
                }
                frame->word_14 = 0;
                frame->word_18 = 0;
                frame->word_c = 0;
                frame->word_10 = 0;
                frame->word_8 = 0;
                frame->field_drops = field_drops;
                frame->word_4 = r1;
                u32 r0_8 = FieldDrops__add_to_free_slot(7u, item_2, empty_item_address, empty_item_address);
                return r0_8;
            }
        }
    }
    return ~0u;
}

}  // namespace d_00598218
GUEST_EXPORT_FRAMED(0x00598218, d_00598218::FieldDrops__add_hole, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005982d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a field drop of kind 0xd (a hole 0x9d registered for the slot, the current one for 4) at a free spot; -1 when
// there is none.
namespace d_005982d8 {

struct __attribute__((packed)) Local_005982d8_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005982d8_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_005982d8_ea_5, word_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> SpecialItem__variant;
inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> AcPlayer__front_cell;
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> FieldDrops__add_to_free_slot;

struct __attribute__((packed)) Frame_005982d8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005982d8, word_0, 0x0);
GUEST_OFFSET(Frame_005982d8, word_4, 0x4);
GUEST_OFFSET(Frame_005982d8, word_8, 0x8);
GUEST_OFFSET(Frame_005982d8, word_c, 0xc);
GUEST_OFFSET(Frame_005982d8, word_10, 0x10);
GUEST_OFFSET(Frame_005982d8, word_14, 0x14);
GUEST_OFFSET(Frame_005982d8, word_18, 0x18);
GUEST_SIZE(Frame_005982d8, 0x30);

u32 FieldDrops__add_hole_for_slot(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005982d8> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r4_1 = r1;
    if (r1 == 4u) {
        u32 r0_1 = player_slot_byte(4u, r1, r2, r3);
        r4_1 = r0_1;
    }
    frame->word_0 = 0;
    u32 r0_3 = AcPlayer__front_cell(frame.at(0x1c).addr(), frame.at(0x20).addr(), frame.at(0x28).addr(), 2u);  // (from the original)
    if (r0_3 == 0) {
        r0_4 = ~0u;
    } else {
        construct_item(frame.at(0x24).addr(), 0x9du);  // (from the original)
        u32 r0_7 = SpecialItem__variant(frame.at(0x24).addr(), 0u, r4_1, field_drops);  // (from the original)
        if (r0_7 == 0) {
            return ~0u;
        }
        frame->word_c = 0;
        frame->word_10 = 0;
        frame->word_14 = 0;
        frame->word_18 = 0;
        gptr<Local_005982d8_ea_5> ea_5 = gptr<Local_005982d8_ea_5>(frame.at(0x1c).addr());  // (from the original)
        u32 r1_2 = ea_5->word_4;
        frame->word_0 = ea_5->word_0;
        frame->word_4 = r1_2;
        frame->word_8 = 0;
        r0_4 = FieldDrops__add_to_free_slot(0xdu, empty_item_address, frame.at(0x24).addr(), empty_item_address);  // (from the original)
    }
    return r0_4;
}

}  // namespace d_005982d8
GUEST_EXPORT_FRAMED(0x005982d8, d_005982d8::FieldDrops__add_hole_for_slot, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005983ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a field drop of kind 0x1d for the low ground item at the cell (no marker there); -1 otherwise.
namespace d_005983ac {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> FieldDrops__add_to_free_slot;
inline constexpr guest::Function<0x005a06d4, u32(u32, u32, u32)> find_field_marker;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;
inline constexpr guest::Function<0x00768dc4, u32(u32, u32)> Item__is_low_ground_item;

struct __attribute__((packed)) Frame_005983ac {
    u32 field_drops;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005983ac, field_drops, 0x0);
GUEST_OFFSET(Frame_005983ac, word_4, 0x4);
GUEST_OFFSET(Frame_005983ac, word_8, 0x8);
GUEST_OFFSET(Frame_005983ac, word_c, 0xc);
GUEST_OFFSET(Frame_005983ac, word_10, 0x10);
GUEST_OFFSET(Frame_005983ac, word_14, 0x14);
GUEST_OFFSET(Frame_005983ac, word_18, 0x18);
GUEST_SIZE(Frame_005983ac, 0x20);

u32 FieldDrops__add_low_ground(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005983ac> frame;  // the original's stack frame
    u32 scene = current_scene_id(field_drops, r1, r2, r3);
    u32 scene_flagged = scene_has_flags(4u, scene);
    if (scene_flagged != 0) {
        u32 map_table_2 = get_map_table(scene_flagged);
        u32 item_2 = GridMap__process_world_position(map_table_2, field_drops, r1, 0u);
        if (item_2 != 0) {
            u32 marker_index = find_field_marker(field_drops, r1, 0xa5u);  // (from the original)
            if (marker_index + 1u == 0) {
                u32 r0_6 = Item__is_low_ground_item(item_2, 1u);
                if (r0_6 != 0) {
                    frame->word_14 = 0;
                    frame->word_18 = 0;
                    frame->word_c = 0;
                    frame->word_10 = 0;
                    frame->word_8 = 0;
                    frame->field_drops = field_drops;
                    frame->word_4 = r1;
                    u32 r0_7 = FieldDrops__add_to_free_slot(0x1du, item_2, item_2, empty_item_address);  // (from the original)
                    return r0_7;
                }
            }
        }
    }
    return ~0u;
}

}  // namespace d_005983ac
GUEST_EXPORT_FRAMED(0x005983ac, d_005983ac::FieldDrops__add_low_ground, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00599294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Offsets the cell by the packed x and y steps (two 3-bit table indices); false when either is 0.
namespace d_00599294 {

struct __attribute__((packed)) Object_00599294_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00599294_1, word_0, 0x0);


u32 cell_offset_from_packed(u32 r0, gptr<Object_00599294_1> arg1, u32 r2, u32 r3) {
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    u32 zf_1 = r4_1 == 0;
    u32 r4_2 = r4_1 & 7u;
    if (!zf_1) {
        zf_1 = r4_2 == 0;
    }
    u32 r12_2 = (r4_1 & 0x70u) >> 4;  // (from the original)
    if (!zf_1) {
        zf_1 = r12_2 == 0;
    }
    if (!zf_1 && r4_2 < 8u && r12_2 < 8u) {
        *gptr<u32>(r0) = r2 + gptr<u32>(0x85f1ecu)[r4_2];  // (from the original)
        arg1->word_0 = gptr<u32>(0x85f1ecu)[r12_2] + r3;  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_00599294
GUEST_EXPORT_FRAMED(0x00599294, d_00599294::cell_offset_from_packed, 0x30);  // pushes {r4, r5} first, as the original

// f_005992fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the cell when its item is not of type 0x1d (in island scenes).
namespace d_005992fc {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fccdc, u32(u32)> indexed_item_type;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059c934, u32(u32, u32, u32, u32)> FieldObjects__find_at_cell;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

u32 refresh_cell_unless_type_1d(u32 field_objects, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 scene = current_scene_id(field_objects, r1, r2, r3);
    u32 scene_flagged = scene_has_flags(4u, scene);
    if (scene_flagged != 0) {
        u32 map_table_2 = get_map_table(scene_flagged);
        scene_flagged = GridMap__process_world_position(map_table_2, field_objects, r1, 0u);
        if (scene_flagged != 0) {
            scene_flagged = indexed_item_type(scene_flagged);
            if (scene_flagged != 0x1du) {  // (from the original)
                frame.release();
                return FieldObjects__find_at_cell(field_objects, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            }
        }
    }
    return scene_flagged;
}

}  // namespace d_005992fc
GUEST_EXPORT(0x005992fc, d_005992fc::refresh_cell_unless_type_1d);

// f_00599544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the cell at the position and, for trees (type 0x13 or the set), refreshes the tree.
namespace d_00599544 {

inline constexpr guest::Function<0x0016fe08, u32(u32, u32, u32, u32)> FieldItem__make_actor;
inline constexpr guest::Function<0x002fccdc, u32(u32)> indexed_item_type;
inline constexpr guest::Function<0x002fcf7c, u32(u32)> value_in_set_2fcf7c;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x0059c934, u32(u32, u32)> FieldObjects__find_at_cell;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

struct __attribute__((packed)) Frame_00599544 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_00599544, word_0, 0x0);
GUEST_OFFSET(Frame_00599544, word_4, 0x4);
GUEST_SIZE(Frame_00599544, 0x8);

void refresh_tree_at_position(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00599544> frame;  // the original's stack frame
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0, r3);
    u32 at_cell_2 = FieldObjects__find_at_cell(frame->word_0, frame->word_4);
    u32 map_table_2 = get_map_table(at_cell_2);
    if (map_table_2 == 0) {
        return;
    }
    u32 item_2 = GridMap__process_world_position(map_table_2, frame->word_0, frame->word_4, 0u);
    if (item_2 == 0) {
        return;
    }
    u32 r0_6 = indexed_item_type(item_2);
    if (r0_6 != 0x13u) {  // (from the original)
        u32 r0_7 = value_in_set_2fcf7c(r0_6);
        if (r0_7 == 0) {
            return;
        }
    }
    FieldItem__make_actor(item_2, frame->word_0, frame->word_4, 0u);
}

}  // namespace d_00599544
GUEST_EXPORT_FRAMED(0x00599544, d_00599544::refresh_tree_at_position, 0x4010);  // pushes {r4, lr} first, as the original

// f_00599784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 4 field drop slots and the drop counters.
namespace d_00599784 {

struct __attribute__((packed)) Local_00599784_r2_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
};
GUEST_OFFSET(Local_00599784_r2_1, byte_e, 0xe);
GUEST_OFFSET(Local_00599784_r2_1, byte_f, 0xf);
GUEST_OFFSET(Local_00599784_r2_1, byte_10, 0x10);

inline constexpr u32 field_drop_slots_address = 0x009b417cu;
inline guest::global<u16, 0x009526b0> fish_bite_streak;
inline guest::global<u8, 0x009526b5> fish_bite_armed;

void FieldDrops__clear() {
    u32 r3 = field_drop_slots_address;
    u32 r0 = 0u;
    u32 r1 = r0;
    do {
        gptr<Local_00599784_r2_1> r2_1 = gptr<Local_00599784_r2_1>(r3 + r0 * 0x12u);  // (from the original)
        r2_1->byte_e = u8(r1);
        r2_1->byte_f = u8(r1);
        r2_1->byte_10 = u8(r0);
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 4);
    *fish_bite_armed = u8(r1);
    *fish_bite_streak = u16(~0u);
}

}  // namespace d_00599784
GUEST_EXPORT(0x00599784, d_00599784::FieldDrops__clear);

// f_005999b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a field drop of kind 0x22 for the item at a free spot (swapping item 0x339f for 0x33a0 in island scenes); -1
// when there is none.
namespace d_005999b8 {

struct __attribute__((packed)) Local_005999b8_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005999b8_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_005999b8_ea_6, word_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> AcPlayer__front_cell;
inline constexpr guest::Function<0x0059ec48, u32(u32, u32, u32, u32)> FieldDrops__find_active;
inline constexpr guest::Function<0x0059f194, u32(u32, u32, u32, u32)> FieldDrops__add_to_free_slot;

struct __attribute__((packed)) Frame_005999b8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
    u8 byte_24;
    u8 unknown_25[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005999b8, word_0, 0x0);
GUEST_OFFSET(Frame_005999b8, word_4, 0x4);
GUEST_OFFSET(Frame_005999b8, word_8, 0x8);
GUEST_OFFSET(Frame_005999b8, word_c, 0xc);
GUEST_OFFSET(Frame_005999b8, word_10, 0x10);
GUEST_OFFSET(Frame_005999b8, word_14, 0x14);
GUEST_OFFSET(Frame_005999b8, word_18, 0x18);
GUEST_OFFSET(Frame_005999b8, byte_24, 0x24);
GUEST_SIZE(Frame_005999b8, 0x2c);

u32 FieldDrops__add_dropped_22(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005999b8> frame;  // the original's stack frame
    FieldDrops__find_active(field_drops, r1, r2, r3);
    frame->word_0 = 0;
    u32 r0_2 = AcPlayer__front_cell(frame.at(0x1c).addr(), frame.at(0x20).addr(), frame.at(0x24).addr(), 0u);  // (from the original)
    if (r0_2 == 0) {
        return ~0u;
    }
    u32 r0_4 = frame.at(0x28).addr();  // (from the original)
    Item__copy_b(r0_4, field_drops);
    u32 scene = current_scene_id(r0_4);
    u32 scene_flagged = scene_has_flags(4u, scene);
    if (scene_flagged != 0) {
        u32 r0_7 = Item__has_number(field_drops, 0x339fu);  // (from the original)
        if (r0_7 != 0) {
            u32 r0_8 = frame.at(0).addr();
            construct_item(r0_8, 0x33a0u);  // (from the original)
            Item__copy(frame.at(0x28).addr(), r0_8);  // (from the original)
        }
    }
    frame->word_10 = 0;
    u32 r0_10 = frame->byte_24;
    frame->word_c = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    gptr<Local_005999b8_ea_6> ea_6 = gptr<Local_005999b8_ea_6>(frame.at(0x1c).addr());  // (from the original)
    u32 r1_4 = ea_6->word_0;
    u32 r2_8 = ea_6->word_4;
    frame->word_8 = r0_10;
    frame->word_0 = r1_4;
    frame->word_4 = r2_8;
    u32 r0_11 = FieldDrops__add_to_free_slot(0x22u, empty_item_address, frame.at(0x28).addr(), field_drops);  // (from the original)
    return r0_11;
}

}  // namespace d_005999b8
GUEST_EXPORT_FRAMED(0x005999b8, d_005999b8::FieldDrops__add_dropped_22, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00599aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Drops the item at the position, checking markers and objects there.
namespace d_00599aa4 {

struct __attribute__((packed)) Local_00599aa4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00599aa4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00599aa4_ea_1, word_4, 0x4);

inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x005a06d4, u32(u32, u32, u32)> find_field_marker;
inline constexpr guest::Function<0x005c08dc, u32(u32, u32, u32, u32)> slot_object_words_47c_480;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> find_object;
inline constexpr guest::Function<0x006140b8, u32(u32, u32, u32)> FieldObjects__entry_for_item_b;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32)> cell_corner_with_height;
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> slot_7_if_class_7;

struct __attribute__((packed)) Frame_00599aa4 {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00599aa4, word_c, 0xc);
GUEST_OFFSET(Frame_00599aa4, word_14, 0x14);
GUEST_OFFSET(Frame_00599aa4, word_18, 0x18);
GUEST_OFFSET(Frame_00599aa4, word_1c, 0x1c);
GUEST_SIZE(Frame_00599aa4, 0x34);

u32 FieldDrops__drop_item_at(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00599aa4> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    gptr<Local_00599aa4_ea_1> ea_1 = gptr<Local_00599aa4_ea_1>(0u);
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r10 = field_drops;
    u32 r11 = r1;
    u32 r0_2 = slot_7_if_class_7(*current_player_data + 0xau, r1, r2, r3);  // (from the original)
    u32 category_2 = Item__category(r0_2);
    if (category_2 == 0x11u) {  // (from the original)
        u32 object_2 = find_object(4u, 0u);
        if (object_2 != 0) {
            u32 r0_6 = slot_object_words_47c_480(frame.at(0x18).addr(), frame.at(0x1c).addr(), 4u, 1u);  // (from the original)
            if (r0_6 == 0) {
                return r0_6;
            }
            r3 = 0x85ef84u;  // (from the original)
            u32 r12 = 0x105bu;  // (from the original)
            r2 = *gptr<s16>(object_2 + 0x2eu);  // (from the original)
            r1 = 0u;
L_599b10:;
            u32 r0_7 = sxth(r2 - u32(gptr<u16>(r3)[r1]));
            if (s32(r0_7) < 0) {
                r0_7 = 0u - r0_7;
            }
            if (s32(r0_7) < s32(r12)) {
                r0_8 = r1 & 0xffu;  // (from the original)
            } else {
                r1 += 1u;
                if (s32(r1) < 8) {
                    guest::preempt();
                    goto L_599b10;
                }
                r0_8 = 0u;
            }
            u32 r0_9 = r0_8 * 9u;
            u32 r7 = (r0_9 << 2) + 0x85ee64u;  // (from the original)
            r0_6 = get_map_table(r0_9, 0x85ee64u, r2, r3);  // (from the original)
            frame->word_14 = r0_6;
            if (r0_6 == 0) {
                return r0_6;
            }
            u32 r8 = 0x85ee50u;  // (from the original)
            u32 r4 = 1u;
            u32 r9 = r8 + 9u;
L_599b70:;
            u32 r0_10 = gptr<u32>(r7)[r4];
            u32 r5_1 = u32(*gptr<s8>(r8 + r0_10)) + frame->word_18;
            u32 r6_1 = u32(*gptr<s8>(r9 + r0_10)) + frame->word_1c;
            u32 item_2 = GridMap__process_world_position(frame->word_14, r5_1, r6_1, 0u);
            if (item_2 == 0) {
                goto L_599c40;
            }
            r0_13 = Item__has_number(item_2, 0x9eu);  // (from the original)
            if (r0_13 == 0) {
                goto L_599c40;
            }
            r0_14 = find_field_marker(r5_1, r6_1, 0xa5u);  // (from the original)
            if (r0_14 + 1u != 0) {
                goto L_599c40;
            }
            ea_1 = gptr<Local_00599aa4_ea_1>(frame.at(0x18).addr());  // (from the original)
            r1_4 = ea_1->word_0;
            r2_4 = ea_1->word_4;
            r0_15 = frame.at(0x28).addr();  // (from the original)
            cell_corner_with_height(r0_15, r1_4, r2_4);
            r0_16 = frame.at(0x28).addr();  // (from the original)
            frame->word_c = r0_16;
            r0_17 = current_scene_id(r0_16);
            r0_18 = scene_has_flags(4u, r0_17);
            if (r0_18 != 0) {
                u32 r0_19 = FieldObjects__entry_for_item_b(r5_1, r6_1, frame->word_c);
                if (r0_19 == 0) {
                    goto L_599c40;
                }
            }
            *gptr<u32>(r10) = r5_1;
            *gptr<u32>(r11) = r6_1;
            return 1u;
L_599c40:;
            r4 += 1u;
            if (s32(r4) < 4) {
                guest::preempt();
                goto L_599b70;
            }
        }
    }
    return 0u;
}

}  // namespace d_00599aa4
GUEST_EXPORT_FRAMED(0x00599aa4, d_00599aa4::FieldDrops__drop_item_at, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00599c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when a free spot exists for a drop.
namespace d_00599c6c {

inline constexpr guest::Function<0x005985c4, u32(u32, u32, u32, u32)> AcPlayer__front_cell;

struct __attribute__((packed)) Frame_00599c6c {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00599c6c, word_0, 0x0);
GUEST_SIZE(Frame_00599c6c, 0x14);

u32 FieldDrops__has_free_spot() {
    guest::StackFrameOf<Frame_00599c6c> frame;  // the original's stack frame
    frame->word_0 = 0;
    u32 r0_2 = AcPlayer__front_cell(frame.at(4).addr(), frame.at(8).addr(), frame.at(0xc).addr(), 0u);  // (from the original)
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_00599c6c
GUEST_EXPORT_FRAMED(0x00599c6c, d_00599c6c::FieldDrops__has_free_spot, 0x4000);  // pushes {lr} first, as the original

// f_00599ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The buried form of the item by its category (0x36 to 0x38 and 0x40), marking unregistered items; true for category
// 0x40.
namespace d_00599ca0 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff800, u32(u32)> set_item_flags_bit_15;
inline constexpr guest::Function<0x00767a44, u32(u32, u32)> Item__display_variant;

u32 buried_form_of_item(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Item__copy_b(frame.at(0).addr(), r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 category_2 = Item__category(r0);
    u32 r0_4 = Item__display_variant(frame.at(0).addr(), r0);
    if (r0_4 == 0) {
        set_item_flags_bit_15(r0);
    }
    u32 r1_3 = 0x3413u;  // (from the original)
    if (category_2 != 0x36u) {  // (from the original)
        if (category_2 == 0x40u) {  // (from the original)
            u32 r0_5 = frame.at(4).addr();
            construct_item(r0_5, r1_3);
            Item__copy(r1, r0_5);
            return 1u;
        }
        if (category_2 == 0x37u) {  // (from the original)
            u32 r0_7 = Item__has_number(frame.at(0).addr(), 0x202cu);  // (from the original)
            r1_3 = r0_7 == 0 ? 0x3415u : 0x3414u;  // (from the original)
        } else if (category_2 == 0x38u) {  // (from the original)
            r1_3 += 3u;
        } else {
            guest::cpu()->r[1] = r1_3;
            return 0u;
        }
    }
    u32 r0_8 = frame.at(4).addr();
    construct_item(r0_8, r1_3);
    Item__copy(r1, r0_8);
    r1_3 = guest::cpu()->r[1];
    return 0u;
}

}  // namespace d_00599ca0
GUEST_EXPORT_FRAMED(0x00599ca0, d_00599ca0::buried_form_of_item, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00599da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Buries the field drop of kind 0xb or 0x1c at the position and, when done, frees its slot, tells the other stations
// and clears the tile.
namespace d_00599da0 {

struct __attribute__((packed)) FieldDrop {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(FieldDrop, byte_e, 0xe);
GUEST_OFFSET(FieldDrop, byte_f, 0xf);
GUEST_OFFSET(FieldDrop, byte_10, 0x10);
GUEST_OFFSET(FieldDrop, byte_11, 0x11);

inline constexpr u32 field_drops_address = 0x009b4264u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x005a0ef8, u32(u32, u32, u32)> find_field_drop;
inline constexpr guest::Function<0x005a0f5c, u32(u32, u32)> FieldDrop__update_by_kind;
inline constexpr guest::Function<0x005a1ba0, u32(u32, u32, u32)> FieldDrop__bury;
inline constexpr guest::Function<0x005a2438, u32(u32)> send_field_drop_from_entry;

u32 FieldDrop__bury_at(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 scene = current_scene_id(r1, r2, r2, guest::cpu()->r[3]);
    u32 drop_index = find_field_drop(r1, r2, scene);
    u32 r1_1 = guest::cpu()->r[1];
    if (drop_index + 1u != 0) {
        r1_1 = field_drops_address;
        gptr<FieldDrop> field_drop = gptr<FieldDrop>(r1_1 + (drop_index * 3u + (drop_index << 3) << 1));
        drop_index = field_drop->byte_10;
        if (drop_index == 0xbu) {  // (from the original)
            drop_index = FieldDrop__bury(field_drop.addr(), 1u, 1u);
            r1_1 = guest::cpu()->r[1];
        } else {
            if (drop_index != 0x1cu) {  // (from the original)
                guest::cpu()->r[1] = r1_1;
                return drop_index;
            }
            drop_index = FieldDrop__bury(field_drop.addr(), 0u, 1u);
            r1_1 = guest::cpu()->r[1];
        }
        if (drop_index == 0) {
            FieldDrop__update_by_kind(field_drop.addr(), r1_1);
            send_field_drop_from_entry(field_drop.addr());
            field_drop->byte_10 = 0;
            field_drop->byte_11 = 0;
            u32 r1_3 = field_drop->byte_f;
            u32 r0_3 = field_drop->byte_e;
            frame.release();
            return clear_field_tile(r0_3, r1_3, 0u, guest::cpu()->r[3]);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return drop_index;
}

}  // namespace d_00599da0
GUEST_EXPORT(0x00599da0, d_00599da0::FieldDrop__bury_at);

// f_00599ee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00599ee8 {

struct __attribute__((packed)) Local_00599ee8_r0_7 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00599ee8_r0_7, float_0, 0x0);
GUEST_OFFSET(Local_00599ee8_r0_7, float_4, 0x4);
GUEST_OFFSET(Local_00599ee8_r0_7, float_8, 0x8);

inline constexpr u32 vtable_fgobj__ObjectDig = 0x00907d28u;
inline constexpr u32 field_object_table_address = 0x0094ee4cu;
inline constexpr u32 field_object_model_info_address = 0x0098a47cu;
inline constexpr guest::Function<0x00125ca8, u32(u32, u32, u32, u32)> LayoutList__insert;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x004edd20, u32(u32)> escape__MapCloudModel__virtual_2;
inline constexpr guest::Function<0x004ee3e8, u32(u32, u32)> TransformNode__set_scale;
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> FieldItem__init;
inline constexpr guest::Function<0x00590f1c, u32(u32)> fgobj__ObjectBase__ObjectBase;
inline constexpr guest::Function<0x00614568, u32(u32, u32)> bgcheck__DynamicCylinder__DynamicCylinder;
inline constexpr guest::Function<0x00614730, u32(u32)> Collider__register;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x006f7e10, u32(u32, u32, u32, u32)> Collider__set_cylinder;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> GridMap__rect_10_contains;

struct __attribute__((packed)) Frame_00599ee8 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00599ee8, word_0, 0x0);
GUEST_SIZE(Frame_00599ee8, 0x10);

u32 fgobj__ObjectDig__ObjectDig(u32 object_dig, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_00599ee8> frame;  // the original's stack frame
    u32 r4_2 = 0;
    u32 r4_1 = r1;
    u32 r7 = field_object_table_address;
    u32 r5 = r2;
    u32 r8 = 0u;
    u32 r0_1 = *gptr<u32>(r7 + 0x14u);  // (from the original)
    if (r0_1 != 0) {
        u32 map_table_2 = get_map_table(r0_1, r1, r2, r3);
        u32 r0_3 = GridMap__rect_10_contains(map_table_2, r4_1, r5);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        if (r0_3 != 0) {
            r1 = field_object_model_info_address;
            r3 = 0x226u;  // (from the original)
            u32 r9 = object_dig;
            u32 r6 = r4_1;
            object_dig = 0u;
L_599f3c:;
            u32 r2_1 = gptr<u32>(r1)[object_dig];
            if (r2_1 != 0) {
                *gptr<u32>(r1 + (object_dig << 2)) = r8;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2;
                u32 block = allocate_on_heap(0x154u, r2_1, 4u, r3);  // (from the original)
                clear_aligned(block, 0x154u);  // (from the original)
                fgobj__ObjectBase__ObjectBase(block);
                *gptr<u32>(block) = vtable_fgobj__ObjectDig;
                u32 dynamic_cylinder = block + 0x124u;  // (from the original)
                bgcheck__DynamicCylinder__DynamicCylinder(dynamic_cylinder, vtable_fgobj__ObjectDig);
                r4_2 = dynamic_cylinder - 0x124u;  // (from the original)
                set_word_4_and_succeed(dynamic_cylinder - 0x104u, r2_1);  // (from the original)
                frame->word_0 = r8;
                FieldItem__init(r4_2, r9, r6, r5);
                float S0_7 = 0.01f;
                gptr<Local_00599ee8_r0_7> r0_7 = gptr<Local_00599ee8_r0_7>(frame.at(4).addr());
                *gptr<u8>(r4_2 + 0x150u) = u8(r8);  // (from the original)
                r0_7->float_0 = S0_7;
                r0_7->float_4 = S0_7;
                r0_7->float_8 = S0_7;
                guest::cpu()->s[0] = S0_7;
                guest::cpu()->s[1] = S0_7;
                guest::cpu()->s[2] = S0_7;
                TransformNode__set_scale(r4_2 + 0x58u, r0_7.addr());  // (from the original)
                escape__MapCloudModel__virtual_2(r4_2 + 0x58u);  // (from the original)
                float S1_8 = 64.0f;
                float S0_9 = 1.5f;
                guest::cpu()->s[0] = S0_9;
                guest::cpu()->s[1] = S1_8;
                Collider__set_cylinder(r4_2 + 0x124u, r4_2 + 0x40u, 4u, ~0x80000000u);  // (from the original)
                Collider__register(r4_2 + 0x124u);  // (from the original)
                r2_1 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2 = guest::cpu()->s[2];
            } else {
                object_dig += 1u;
                if (object_dig < r3) {
                    guest::preempt();
                    goto L_599f3c;
                }
                r4_2 = r8;
            }
            r1 = r4_2;
            if (r4_2 != 0) {
                u32 r0_12 = *gptr<u32>(r7 + 0x14u) + 0x3594u;  // (from the original)
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2;
                LayoutList__insert(r0_12, r1, r2_1, r3);
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00599ee8
GUEST_EXPORT_FRAMED(0x00599ee8, d_00599ee8::fgobj__ObjectDig__ObjectDig, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0059a070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a070 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u8 unknown_24[0x4594];  // (not used here)
    u8 byte_45b8;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_20, 0x20);
GUEST_OFFSET(sead__SafeStringBase_char_, byte_45b8, 0x45b8);

struct __attribute__((packed)) Local_0059a070_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0059a070_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0059a070_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0059a070_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0059a070_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0059a070_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0059a070_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0059a070_r3_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0059a070_r3_4, word_0, 0x0);
GUEST_OFFSET(Local_0059a070_r3_4, word_4, 0x4);
GUEST_OFFSET(Local_0059a070_r3_4, word_8, 0x8);

struct __attribute__((packed)) Local_0059a070_r5_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0059a070_r5_1, byte_0, 0x0);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u8, 0x0094ee4f> field_item_mode;
inline constexpr guest::Function<0x00178d78, u32(u32, u32, u32, u32)> sead__RuntimeTypeInfo__Derive_sead__Heap___Heap__00178d78;
inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> LoadSplitWord__start;
inline constexpr guest::Function<0x00317a88, u32(u32, u32, u32, u32)> TextRenderer__draw_string;
inline constexpr guest::Function<0x004eada4, u32(u32, u32, u32, u32)> ResModel__set_scale_all;
inline constexpr guest::Function<0x00544a20, u32(u32, u32)> PrintOutput__finish_to_buffer;
inline constexpr guest::Function<0x00544d08, u32(u32, u32, u32)> PrintOutput__write;
inline constexpr guest::Function<0x00544f18, u32(u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> construct_print_output;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;
inline constexpr guest::Function<0x0056bc28, u32(u32, u32, u32, u32)> TimeStamp__period_of_year;
inline constexpr guest::Function<0x0056c45c, u32(u32)> cached_day_start;
inline constexpr guest::Function<0x00594d8c, u32(u32)> read_u32_0x009526e4_;
inline constexpr guest::Function<0x0059ceb4, u32(u32, u32, u32)> FieldItem__for_each_child;

struct __attribute__((packed)) Frame_0059a070 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 object_8_vtable;
    u32 word_c;
    u8 unknown_10[0x24];  // (not read or written by name)
    u32 period;
    u8 unknown_38[0xc];  // (not read or written by name)
    u32 object_44_vtable;
    u32 word_48;
    u8 unknown_4c[0x4];  // (not read or written by name)
    u8 byte_50;
    u8 unknown_51[0x1f];  // (not read or written by name)
    u8 byte_70;
    u8 unknown_71[0x2b];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0059a070, object_8_vtable, 0x8);
GUEST_OFFSET(Frame_0059a070, word_c, 0xc);
GUEST_OFFSET(Frame_0059a070, period, 0x34);
GUEST_OFFSET(Frame_0059a070, object_44_vtable, 0x44);
GUEST_OFFSET(Frame_0059a070, word_48, 0x48);
GUEST_OFFSET(Frame_0059a070, byte_50, 0x50);
GUEST_OFFSET(Frame_0059a070, byte_70, 0x70);
GUEST_SIZE(Frame_0059a070, 0x9c);

u32 load_tree_season_model(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0059a070> frame;  // the original's stack frame
    u32 r0 = safe_string_base_char.addr();
    gptr<Local_0059a070_r5_1> r5_1 = gptr<Local_0059a070_r5_1>(r0 + 0x45b8u);  // (from the original)
    u32 r0_1 = safe_string_base_char->byte_45b8;
    if (r0_1 != 1u) {
        if (r0_1 == 2u) {
            r5_1->byte_0 = 3;
            return 0u;
        }
        if (r0_1 == 3u) {
            sead__RuntimeTypeInfo__Derive_sead__Heap___Heap__00178d78(r0 + 0x2cu, safe_string_base_char->word_20, r2, r3);  // (from the original)
            r5_1->byte_0 = 4;
            FieldItem__for_each_child(r0, 0u, 0x59a2c8u);  // (from the original)
            FieldItem__for_each_child(r0, 1u, 0x59a2d0u);  // (from the original)
            r1 = guest::cpu()->r[1];
        }
    } else {
        u32 r11_1 = safe_string_base_char->word_20;
        if (*field_item_mode != 0) {
            frame->word_c = 0x59a288;  // (from the original)
            frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
            u32 r0_4 = load_split_start(r0 + 0x344u, frame.at(8).addr(), r11_1, 4u);  // (from the original)
            cached_day_start(frame.at(0x10).addr());  // (from the original)
            gptr<Local_0059a070_ea_1> ea_1 = gptr<Local_0059a070_ea_1>(frame.at(0x10).addr());  // (from the original)
            u32 r1_4 = ea_1->word_4;
            u32 r2_2 = ea_1->word_8;
            gptr<Local_0059a070_r3_4> r3_4 = gptr<Local_0059a070_r3_4>(frame.at(0x38).addr());  // (from the original)
            r3_4->word_0 = ea_1->word_0;
            r3_4->word_4 = r1_4;
            r3_4->word_8 = r2_2;
            u32 period_2 = TimeStamp__period_of_year(frame.at(0x38).addr(), r1_4, r2_2, r3_4.addr());  // (from the original)
            gptr<Local_0059a070_ea_2> ea_2 = gptr<Local_0059a070_ea_2>(frame.at(0x48).addr());  // (from the original)
            ea_2->word_0 = frame.at(0x50).addr();  // (from the original)
            ea_2->word_4 = 0x20;  // (from the original)
            u32 r3_5 = *empty_string;
            *gptr<u8>(frame->word_48 + 0x1fu) = u8(r3_5);  // (from the original)
            frame->byte_50 = *empty_string;
            frame->object_44_vtable = vtable_sead__FixedSafeString_32_;
            u32 r0_8 = frame.at(0x10).addr();  // (from the original)
            construct_print_output(r0_8, frame.at(0x44).addr(), 0x20u, r3_5);  // (from the original)
            print_append(r0_8, 0x59a2acu);  // (from the original)
            frame->period = period_2;
            u32 r0_9 = PrintOutput__finish_to_buffer(r0_8, frame.at(0x70).addr());  // (from the original)
            if (r0_9 != 0) {
                u32 r2_6 = *gptr<u32>(r0_8 + 4u);
                PrintOutput__write(frame.at(0x34).addr(), frame->byte_70 == 0 ? 0u : frame.at(0x70).addr(), r2_6);  // (from the original)
            }
            print_finish(r0_8);
            u32 r0_11 = LoadSplitWord__start(r0 + 0x2cu, frame.at(0x44).addr(), r11_1, 0x80u);  // (from the original)
            r1 = guest::cpu()->r[1];
            u32 r0_12 = r0_11 & r0_4;
            if (r0_12 != 0) {
                if (*field_item_mode == 0) {
                    goto L_59a22c;
                }
                u32 r0_14 = ResModel__set_scale_all(r0 + 0x2cu, 0x20000u, 0x20000u, 0x30000u);  // (from the original)
                u32 r0_15 = read_u32_0x009526e4_(r0_14);
                TextRenderer__draw_string(r0 + 0x2cu, r0 + 0x14u, r0_15, 1u);  // (from the original)
                TextRenderer__draw_string(r0 + 0x2cu, r0 + 0x14u, 0u, 1u);  // (from the original)
                r1 = guest::cpu()->r[1];
                r5_1->byte_0 = 2;
                r0_12 = 0u;
            }
            guest::cpu()->r[1] = r1;
            return r0_12;
        }
L_59a22c:;
        r5_1->byte_0 = 4;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0059a070
GUEST_EXPORT_FRAMED(0x0059a070, d_0059a070::load_tree_season_model, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0059a2d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a2d8 {

struct __attribute__((packed)) Local_0059a2d8_r4_2 {
    u32 vtable;
    u8 unknown_4[0x120];  // (not used here)
    u8 byte_124;
    u8 byte_125;
    u8 byte_126;
};
GUEST_OFFSET(Local_0059a2d8_r4_2, vtable, 0x0);
GUEST_OFFSET(Local_0059a2d8_r4_2, byte_124, 0x124);
GUEST_OFFSET(Local_0059a2d8_r4_2, byte_125, 0x125);
GUEST_OFFSET(Local_0059a2d8_r4_2, byte_126, 0x126);

inline constexpr u32 vtable_fgobj__ObjectBury = 0x00907940u;
inline constexpr u32 field_object_table_address = 0x0094ee4cu;
inline constexpr u32 field_object_model_info_address = 0x0098a47cu;
inline constexpr guest::Function<0x00125ca8, u32(u32, u32, u32, u32)> LayoutList__insert;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> FieldItem__init;
inline constexpr guest::Function<0x00590f1c, u32(u32)> fgobj__ObjectBase__ObjectBase;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> GridMap__rect_10_contains;

struct __attribute__((packed)) Frame_0059a2d8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0059a2d8, word_0, 0x0);
GUEST_SIZE(Frame_0059a2d8, 0x4);

u32 fgobj__ObjectBury__ObjectBury(u32 object_bury, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0059a2d8> frame;  // the original's stack frame
    gptr<Local_0059a2d8_r4_2> r4_2 = gptr<Local_0059a2d8_r4_2>(0u);
    frame->word_0 = r3;
    u32 r4_1 = r1;
    u32 r5 = r2;
    u32 r6 = r3;
    u32 r9 = field_object_table_address;
    u32 r7 = *frame.at<u32>(0x28);  // (from the original)
    u32 r10 = 0u;
    u32 r0_1 = *gptr<u32>(r9 + 0x14u);  // (from the original)
    if (r0_1 != 0) {
        u32 map_table_2 = get_map_table(r0_1, r1, r2, r3);
        u32 r0_3 = GridMap__rect_10_contains(map_table_2, r4_1, r5);
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            r1 = field_object_model_info_address;
            r3 = 0x226u;  // (from the original)
            u32 r11 = object_bury;
            u32 r8 = r4_1;
            object_bury = 0u;
L_59a330:;
            u32 r2_1 = gptr<u32>(r1)[object_bury];
            if (r2_1 != 0) {
                *gptr<u32>(r1 + (object_bury << 2)) = r10;
                frame->word_0 = r2_1;
                u32 block = allocate_on_heap(0x128u, frame->word_0, 4u, r3);  // (from the original)
                clear_aligned(block, 0x128u);  // (from the original)
                fgobj__ObjectBase__ObjectBase(block);
                r4_2 = gptr<Local_0059a2d8_r4_2>(block);
                r4_2->vtable = vtable_fgobj__ObjectBury;
                set_word_4_and_succeed(r4_2.addr() + 0x20u, frame->word_0);  // (from the original)
                frame->word_0 = r10;
                FieldItem__init(r4_2.addr(), r11, r8, r5);
                r2_1 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r4_2->byte_124 = u8(r10);
                r4_2->byte_125 = u8(r6);
                r4_2->byte_126 = u8(r7);
            } else {
                object_bury += 1u;
                if (object_bury < r3) {
                    guest::preempt();
                    goto L_59a330;
                }
                r4_2 = gptr<Local_0059a2d8_r4_2>(r10);
            }
            r1 = r4_2.addr();
            if (r4_2.addr() != 0) {
                LayoutList__insert(*gptr<u32>(r9 + 0x14u) + 0x3594u, r1, r2_1, r3);  // (from the original)
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0059a2d8
GUEST_EXPORT_FRAMED(0x0059a2d8, d_0059a2d8::fgobj__ObjectBury__ObjectBury, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0059a3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the town bit (in the bits at +0x35c4 of the town object) when it exists.
namespace d_0059a3f4 {

inline constexpr u32 field_object_table_address = 0x0094ee4cu;
inline constexpr u32 field_item_model_table_address = 0x0094ee60u;
inline guest::global<u32, 0x0094ee60> field_item_model_table;
inline constexpr guest::Function<0x005a2624, u32(u32, u32, u32)> TownBits__set;

u32 TownBits__set_veneer(u32 town_bits, u32 r1) {
    u32 r3_1 = *field_item_model_table;
    if (r3_1 == 0) {
        guest::cpu()->r[1] = field_object_table_address;
        return town_bits;
    }
    return TownBits__set(r3_1 + 0x35c4u, town_bits, r1);  // (from the original)
}

}  // namespace d_0059a3f4
GUEST_EXPORT(0x0059a3f4, d_0059a3f4::TownBits__set_veneer);

// f_0059a420: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the field objects whose town bits are set.
namespace d_0059a420 {

inline guest::global<u32, 0x0014fc68> global_0014fc68;
inline guest::global<u8, 0x0094ee4e> global_0094ee4e;
inline constexpr guest::Function<0x0059dab8, u32(u32, u32, u32, u32)> FieldItems__place_at;
inline constexpr guest::Function<0x00753c94, u32(u32, u32, u32, u32)> TownBits__test;

struct __attribute__((packed)) Frame_0059a420 {
    u8 unknown_0[0x20];  // (not read or written by name)
    u32 word_20;
    u8 unknown_24[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0059a420, word_20, 0x20);
GUEST_SIZE(Frame_0059a420, 0x28);

void FieldObjects__update_by_town_bits(u32 field_objects, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0059a420> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r7 = 0;
    u32 r9 = 0;
    u32 town_bits = 0;
    u32 r11 = 0;
    u32 r12 = guest::cpu()->r[12];
    goto L_59a420;
L_59a420:;
    frame->word_20 = r12;
    u32 r8 = field_objects;
    if (*global_0094ee4e != 0) {
        r9 = 1u;
        r4 = r8 + 0x3204u;  // (from the original)
        town_bits = r8 + 0x35c4u;  // (from the original)
        r7 = r8 + 0x320eu;  // (from the original)
L_59a454:;
        u32 r0_1 = *gptr<u8>(r4 + 0x14u);  // (from the original)
        if (r0_1 == 0) {
            frame.release();
            guest::call_address<u32>(*global_0014fc68, r8, r1, r2, r3);
            return;
        }
        u32 r0_2 = r0_1 - 1u & 0xffu;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r0_2);  // (from the original)
        u32 r6_1 = *gptr<u8>(r4 + r0_2);
        u32 r5_1 = *gptr<u8>(r0_2 + r7);
        u32 r0_3 = TownBits__test(town_bits, r6_1, r5_1, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            if (r9 != 0) {
                u32 place = FieldItems__place_at(r8, r6_1, r5_1, 1u);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (place != 0) {
                    guest::preempt();
                    goto L_59a454;
                }
            }
            FieldItems__place_at(r8, r6_1, r5_1, 0u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
            goto L_59a454;
        }
        guest::preempt();
        goto L_59a454;
    }
    r4 = r8 + 0x3204u;  // (from the original)
    r9 = r8 + 0x35c4u;  // (from the original)
    r7 = r8 + 0x320eu;  // (from the original)
L_59a4fc:;
    u32 r0_5 = *gptr<u8>(r4 + 0x14u);  // (from the original)
    if (r0_5 != 0) {
        u32 r0_6 = r0_5 - 1u & 0xffu;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r0_6);  // (from the original)
        u32 r5_2 = *gptr<u8>(r4 + r0_6);
        u32 r6_2 = *gptr<u8>(r0_6 + r7);
        u32 r0_7 = TownBits__test(r9, r5_2, r6_2, r3);
        r3 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            guest::preempt();
            goto L_59a4fc;
        }
        FieldItems__place_at(r8, r5_2, r6_2, 0u);
        r3 = guest::cpu()->r[3];
        guest::preempt();
        goto L_59a4fc;
    }
    u32 r5 = *gptr<u32>(r8 + 0x356cu);  // (from the original)
    u32 r0_8 = *gptr<u32>(r8 + 0x3548u);  // (from the original)
    if ((r5 - r0_8) != 0 && s32(r5) >= s32(r0_8)) {
        r5 = r0_8;
    }
    town_bits = *gptr<u32>(r8 + 0x3564u);  // (from the original)
    u32 r0_9 = *gptr<u32>(r8 + 0x3540u);  // (from the original)
    if (s32(town_bits) < s32(r0_9)) {
        town_bits = r0_9;
    }
    u32 r6 = *gptr<u32>(r8 + 0x3568u);  // (from the original)
    u32 r0_10 = *gptr<u32>(r8 + 0x3544u);  // (from the original)
    r1 = 0x3560u;  // (from the original)
    if ((r6 - r0_10) != 0 && s32(r6) >= s32(r0_10)) {
        r6 = r0_10;
    }
    r9 = *gptr<u32>(r1 + r8);
    u32 r0_11 = *gptr<u32>(r1 - 0x24u + r8);  // (from the original)
    if (s32(r9) < s32(r0_11)) {
        r9 = r0_11;
    }
    if (s32(r5) >= s32(town_bits)) {
        r11 = r8 + 0x35c4u;  // (from the original)
        r7 = r8 + 0x3500u;  // (from the original)
    } else {
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        r4 = r9;
        if (s32(r9) <= s32(r6)) {
            do {
                u32 r0_12 = TownBits__test(r11, r4, r5, r3);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                if (r0_12 == 0) {
                    FieldItems__place_at(r8, r4, r5, 0u);
                    r1 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                    if (*gptr<s16>(r7 + 0x90u) >= 0xa) {  // (from the original)
                        return;
                    }
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r6) >= s32(r4));
        }
        r5 -= 1u;
        guest::preempt();
    } while (s32(r5) >= s32(town_bits));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0059a420
GUEST_EXPORT(0x0059a420, d_0059a420::FieldObjects__update_by_town_bits);

// f_0059a644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059a644 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x45b8];  // (not used here)
    u8 byte_45b8;
};
GUEST_OFFSET(sead__SafeStringBase_char_, byte_45b8, 0x45b8);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 object_deco_name_address = 0x0094eeb4u;
inline constexpr u32 field_item_model_a_address = 0x0094eedcu;
inline constexpr u32 field_item_model_b_address = 0x0094ef04u;
inline constexpr u32 field_item_model_c_address = 0x0094ef2cu;
inline constexpr u32 global_0094ef54_address = 0x0094ef54u;
inline guest::global<u8, 0x0094ee4f> field_item_mode;
inline guest::global<u32, 0x0094eeb4> object_deco_name;
inline guest::global<u32, 0x0094eedc> field_item_model_a;
inline guest::global<u32, 0x0094ef04> field_item_model_b;
inline guest::global<u32, 0x0094ef2c> field_item_model_c;
inline constexpr guest::Function<0x00178d78, u32(u32, u32, u32, u32)> sead__RuntimeTypeInfo__Derive_sead__Heap___Heap__00178d78;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> LoadSplitWord__start;
inline constexpr guest::Function<0x00317a88, u32(u32, u32, u32, u32)> TextRenderer__draw_string;
inline constexpr guest::Function<0x004eada4, u32(u32, u32, u32, u32)> ResModel__set_scale_all;
inline constexpr guest::Function<0x004f1d04, u32(u32, u32, u32, u32)> ResModel__mark_materials_dirty;
inline constexpr guest::Function<0x00594d8c, u32(u32)> read_u32_0x009526e4_;
inline constexpr guest::Function<0x0059cae8, u32(u32, u32, u32, u32)> FieldObject__bind_texture_by_town;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> ResDic__find;

struct __attribute__((packed)) Frame_0059a644 {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0059a644, object_0_vtable, 0x0);
GUEST_OFFSET(Frame_0059a644, word_4, 0x4);
GUEST_SIZE(Frame_0059a644, 0xc);

u32 load_field_item_models(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0059a644> frame;  // the original's stack frame
    u32 r0 = safe_string_base_char.addr();
    u32 r0_6 = 0;
    u32 ac_ftr = 0;
    u32 field_object = r0;
    u32 r8 = r0 + 0x45b8u;  // (from the original)
    u32 r0_1 = safe_string_base_char->byte_45b8;
    u32 r9 = 7u;
    if (r0_1 != 4u) {
        if (r0_1 == 5u) {
            *gptr<u8>(r8) = 6;
            return 0u;
        }
        if (r0_1 == 6u) {
            if (*field_item_mode == 0) {
                sead__RuntimeTypeInfo__Derive_sead__Heap___Heap__00178d78(field_object + 0x134u, *gptr<u32>(field_object + 0x20u), r2, r3);  // (from the original)
                FieldObject__bind_texture_by_town(field_object, 0x846aa8u, *object_deco_name, object_deco_name_address);  // (from the original)
                FieldObject__bind_texture_by_town(field_object, 0x846a94u, *field_item_model_a, field_item_model_a_address);  // (from the original)
                FieldObject__bind_texture_by_town(field_object, 0x846a84u, *field_item_model_b, field_item_model_b_address);  // (from the original)
                FieldObject__bind_texture_by_town(field_object, 0x846a70u, *field_item_model_c, field_item_model_c_address);  // (from the original)
                r1 = guest::cpu()->r[1];
            }
            *gptr<u8>(r8) = u8(r9);
        }
    } else {
        u32 r4_1 = *gptr<u32>(field_object + 0x20u);  // (from the original)
        u32 scene = current_scene_id(r0_1, r1, r2, r3);
        u32 scene_flagged = scene_has_flags(0x10000000u, scene);  // (from the original)
        u32 r10 = 0u;
        if (scene_flagged == 0) {
            u32 r1_2 = *field_item_mode;
            frame->object_0_vtable = vtable_sead__SafeStringBase_char_;
            u32 r1_3 = frame.at(0).addr();
            if (r1_2 == 0) {
                frame->word_4 = 0x59a970;  // (from the original)
                r0_6 = LoadSplitWord__start(field_object + 0x134u, r1_3, r4_1, 0x80u);  // (from the original)
            } else {
                frame->word_4 = 0x59a950;  // (from the original)
                r0_6 = LoadSplitWord__start(field_object + 0x134u, r1_3, r4_1, 0x80u);  // (from the original)
            }
        } else {
            frame->object_0_vtable = vtable_sead__SafeStringBase_char_;
            frame->word_4 = 0x59a930;  // (from the original)
            r0_6 = LoadSplitWord__start(field_object + 0x134u, frame.at(0).addr(), r4_1, 0x80u);  // (from the original)
        }
        if (r0_6 != 0) {
            if (*field_item_mode != 0) {
                ResModel__set_scale_all(field_object + 0x134u, 0x10000u, 0x10000u, 0x10000u);  // (from the original)
            } else {
                ResModel__set_scale_all(field_object + 0x134u, 0x30000u, 0x30000u, 0x20000u);  // (from the original)
            }
            u32 r0_12 = TextRenderer__draw_string(field_object + 0x134u, field_object + 0x14u, 0u, 1u);  // (from the original)
            u32 r0_13 = read_u32_0x009526e4_(r0_12);
            u32 r0_15 = TextRenderer__draw_string(field_object + 0x134u, field_object + 0x14u, r0_13, 1u);  // (from the original)
            u32 scene_2 = current_scene_id(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 scene_flagged_2 = scene_has_flags(0x10000000u, scene_2);  // (from the original)
            if (scene_flagged_2 != 0) {
                FieldObject__bind_texture_by_town(field_object, 0x846aa8u, *object_deco_name, object_deco_name_address);  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 r11 = global_0094ef54_address;
                u32 r4 = 0u;
                do {
                    u32 r0_18 = *gptr<u32>(field_object + 0x13cu);  // (from the original)
                    u32 r6_1 = *gptr<u32>(r11 + (r4 << 2));
                    u32 ea_3 = r0_18 + 0x20u;  // (from the original)
                    u32 r1_10 = *gptr<u32>(ea_3);
                    u32 r0_19 = r1_10 == 0 ? r10 : ea_3 + r1_10;
                    frame->object_0_vtable = r0_19;
                    if (r0_19 != 0 && r6_1 != 0) {
                        u32 length_2 = string_length(r6_1, r1_10, r2, r3);
                        u32 entry_3 = ResDic__find(frame.at(0).addr(), r6_1, length_2);
                        r1_10 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (entry_3 != 0) {
                            u32 ea_4 = entry_3 + 0xcu;  // (from the original)
                            r1_10 = *gptr<u32>(ea_4);
                            ac_ftr = r1_10 == 0 ? r10 : ea_4 + r1_10;
                            goto L_59a848;
                        }
                    }
                    ac_ftr = 0u;
L_59a848:;
                    ResModel__mark_materials_dirty(ac_ftr, r1_10, r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 3u);
            } else if (*field_item_mode == 0) {
                *gptr<u8>(r8) = 5;
                return 0u;
            }
            r0_6 = 1u;
            *gptr<u8>(r8) = u8(r9);
        }
        return r0_6;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0059a644
GUEST_EXPORT_FRAMED(0x0059a644, d_0059a644::load_field_item_models, 0x4ff0);  // pushes {r4, field_object, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0059a9ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The world position of the item at the cell, on the surface (raised for some kinds).
namespace d_0059a9ac {

struct __attribute__((packed)) Local_0059a9ac_r0_7 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0059a9ac_r0_7, float_0, 0x0);
GUEST_OFFSET(Local_0059a9ac_r0_7, float_4, 0x4);

inline guest::global<u8, 0x0094ee4f> field_item_mode;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32)> item_flags_bit_15;
inline constexpr guest::Function<0x002fccdc, u32(u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x004e9fe8, u32(u32, u32)> surface_height_at_cell;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> cell_corner_with_height;

void field_item_position(gptr<Float3> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r8_1 = r1;
    u32 r7_1 = *gptr<u32>(guest::cpu()->r[13] + 0x18u);  // (from the original)
    u32 r0_1 = cell_corner_with_height(r0, r2, r3, r3);
    float S0_1 = guest::cpu()->s[0];
    if (r7_1 != 0) {
        r0_1 = surface_height_at_cell(r2, r3);
        S0_1 = guest::cpu()->s[0];
        arg0->v[1] = S0_1;
    }
    guest::cpu()->s[0] = S0_1;
    u32 scene = current_scene_id(r0_1);
    r1 = scene;
    if (scene != 0x2bu) {  // (from the original)
        u32 scene_flagged = scene_has_flags(0x10000000u, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (scene_flagged == 0) {
            goto L_59aa24;
        }
    }
    S1 = 16.0f;
    S0 = std::bit_cast<float>(*gptr<u32>(r0)) + S1;
    *gptr<u32>(r0) = std::bit_cast<u32>(S0);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
L_59aa24:;
    if (*field_item_mode == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    u32 r0_4 = item_flags_bit_15(r8_1, r1);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_4 != 0) {
        return;
    }
    u32 r0_5 = indexed_item_type(r8_1, r1);
    u32 category_2 = Item__category(r8_1);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_5 != 9u && category_2 != 0x3cu) {  // (from the original)
        return;
    }
    gptr<Local_0059a9ac_r0_7> r0_7 = gptr<Local_0059a9ac_r0_7>(((r2 << 0x1e >> 0x1d) + ((r3 & 3u) << 3) << 2) + 0x84661cu);  // (from the original)
    *gptr<u32>(r0) = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0)) + r0_7->float_0);
    float S1_4 = r0_7->float_4;
    float S0_4 = std::bit_cast<float>(*gptr<u32>(r0 + 8u)) + S1_4;
    *gptr<u32>(r0 + 8u) = std::bit_cast<u32>(S0_4);
    guest::cpu()->r[1] = 0x84661cu;  // (from the original)
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
}

}  // namespace d_0059a9ac
GUEST_EXPORT_FRAMED(0x0059a9ac, d_0059a9ac::field_item_position, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0059ab9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates a growing plant object for the item at the cell (inside the map) and adds it to the field objects; true when
// it did.
namespace d_0059ab9c {

inline constexpr u32 field_object_table_address = 0x0094ee4cu;
inline constexpr u32 field_item_model_table_address = 0x0094ee60u;
inline guest::global<u32, 0x0094ee60> field_item_model_table;
inline constexpr guest::Function<0x00125ca8, u32(u32, u32)> LayoutList__insert;
inline constexpr guest::Function<0x005921e0, u32(u32, u32, u32, u32)> fgobj__ObjectPlant__ObjectPlant;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> GridMap__rect_10_contains;

u32 FieldObjects__add_plant(u32 field_objects, u32 field_drop, u32 r2, u32 r3) {
    u32 r4_1 = field_drop;
    u32 r0_1 = *field_item_model_table;
    if (r0_1 != 0) {
        u32 map_table_2 = get_map_table(r0_1, field_drop, r2, r3);
        u32 r0_3 = GridMap__rect_10_contains(map_table_2, r4_1, r2);
        field_drop = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 r0_4 = fgobj__ObjectPlant__ObjectPlant(field_objects, r4_1, r2, r3);
            u32 r1_1 = r0_4;
            if (r0_4 != 0) {
                LayoutList__insert(*field_item_model_table + 0x3594u, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                r0_4 = 1u;
            }
            guest::cpu()->r[1] = r1_1;
            return r0_4;
        }
    }
    guest::cpu()->r[1] = field_drop;
    return 0u;
}

}  // namespace d_0059ab9c
GUEST_EXPORT_FRAMED(0x0059ab9c, d_0059ab9c::FieldObjects__add_plant, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0059ac18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates a scaling object for the item at the cell (inside the map) and adds it to the field objects; true when it
// did.
namespace d_0059ac18 {

inline constexpr u32 field_object_table_address = 0x0094ee4cu;
inline constexpr u32 field_item_model_table_address = 0x0094ee60u;
inline guest::global<u32, 0x0094ee60> field_item_model_table;
inline constexpr guest::Function<0x00125ca8, u32(u32, u32)> LayoutList__insert;
inline constexpr guest::Function<0x005923fc, u32(u32, u32, u32, u32)> fgobj__ObjectScale__ObjectScale;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> GridMap__rect_10_contains;

u32 FieldObjects__add_scaled(u32 field_objects, u32 field_drop, u32 r2, u32 r3) {
    u32 r4_1 = field_drop;
    u32 r0_1 = *field_item_model_table;
    if (r0_1 != 0) {
        u32 map_table_2 = get_map_table(r0_1, field_drop, r2, r3);
        u32 r0_3 = GridMap__rect_10_contains(map_table_2, r4_1, r2);
        field_drop = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 r0_4 = fgobj__ObjectScale__ObjectScale(field_objects, r4_1, r2, r3);
            u32 r1_1 = r0_4;
            if (r0_4 != 0) {
                LayoutList__insert(*field_item_model_table + 0x3594u, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                r0_4 = 1u;
            }
            guest::cpu()->r[1] = r1_1;
            return r0_4;
        }
    }
    guest::cpu()->r[1] = field_drop;
    return 0u;
}

}  // namespace d_0059ac18
GUEST_EXPORT_FRAMED(0x0059ac18, d_0059ac18::FieldObjects__add_scaled, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0059b2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059b2c4 {

struct __attribute__((packed)) Local_0059b2c4_ea_1 {
    u32 object_deco;
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
};
GUEST_OFFSET(Local_0059b2c4_ea_1, object_deco, 0x0);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_0059b2c4_ea_1, word_2c, 0x2c);

struct __attribute__((packed)) Local_0059b2c4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0059b2c4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0059b2c4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0059b2c4_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0059b2c4_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_0059b2c4_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_0059b2c4_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_0059b2c4_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_0059b2c4_ea_2, word_1c, 0x1c);

struct __attribute__((packed)) Local_0059b2c4_r0_6 {
    u8 unknown_0[0x90];  // (not used here)
    u16 half_90;
};
GUEST_OFFSET(Local_0059b2c4_r0_6, half_90, 0x90);

inline constexpr u32 vtable_fgobj__ObjectDeco = 0x00907970u;
inline constexpr u32 object_deco_params_address = 0x0098ad14u;
inline constexpr guest::Function<0x00125ca8, u32(u32, u32, u32, u32)> LayoutList__insert;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x004ecb80, u32(u32, u32)> construct_base_anim_4ecb80;
inline constexpr guest::Function<0x00590f1c, u32(u32)> fgobj__ObjectBase__ObjectBase;
inline constexpr guest::Function<0x00591330, u32(u32, u32, u32, u32)> FieldItems__spawn;

struct __attribute__((packed)) Frame_0059b2c4 {
    u32 word_0;
    u8 unknown_4[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0059b2c4, word_0, 0x0);
GUEST_SIZE(Frame_0059b2c4, 0x38);

void fgobj__ObjectDeco__ObjectDeco_0059b2c4(u32 object_deco, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0059b2c4> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0059b2c4_ea_1> ea_1 = gptr<Local_0059b2c4_ea_1>(frame.at(8).addr());
    ea_1->object_deco = object_deco;
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
    ea_1->word_2c = r14;
    u32 r4_1 = r1;
    r5 = object_deco;
    u32 r0_1 = Item__has_number(r4_1, 0x7bu, r2, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r1 = object_deco_params_address;
        r7 = r4_1;
        object_deco = 0u;
        r9 = frame.at(0x10).addr();  // (from the original)
        r8 = frame.at(0x14).addr();  // (from the original)
        r4 = object_deco;
L_59b300:;
        u32 r2_1 = gptr<u32>(r1)[object_deco];
        if (r2_1 != 0) {
            *gptr<u32>(r1 + (object_deco << 2)) = r4;
            u32 r10_1 = r4;
            u32 block = allocate_on_heap(0x144u, r2_1, 4u, r3);  // (from the original)
            clear_aligned(block, 0x144u);  // (from the original)
            fgobj__ObjectBase__ObjectBase(block);
            *gptr<u32>(block) = vtable_fgobj__ObjectDeco;
            u32 r0_3 = block + 0x124u;  // (from the original)
            construct_base_anim_4ecb80(r0_3, vtable_fgobj__ObjectDeco);
            r4 = r0_3 - 0x124u;  // (from the original)
            set_word_4_and_succeed(r0_3 - 0x104u, r2_1);  // (from the original)
            frame->word_0 = r10_1;
            FieldItems__spawn(r4, r7, r9, r8);
            r2_1 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        } else {
            object_deco += 1u;
            if (object_deco < 0x14u) {  // (from the original)
                guest::preempt();
                goto L_59b300;
            }
        }
        if (r4 != 0) {
            LayoutList__insert(r5 + 0x35a0u, r4, r2_1, r3);  // (from the original)
            *gptr<u32>(r4 + 0x68u) = *gptr<u32>(r4 + 0x68u) | 0x2400u;  // (from the original)
            gptr<Local_0059b2c4_r0_6> r0_6 = gptr<Local_0059b2c4_r0_6>(r5 + 0x3500u);  // (from the original)
            r0_6->half_90 = u16(u32(r0_6->half_90) + 1u);
        }
    }
    gptr<Local_0059b2c4_ea_2> ea_2 = gptr<Local_0059b2c4_ea_2>(frame.at(0x18).addr());  // (from the original)
    u32 r4_2 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    u32 r9_1 = ea_2->word_14;
    u32 r10_2 = ea_2->word_18;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_2;
}

}  // namespace d_0059b2c4
GUEST_EXPORT(0x0059b2c4, d_0059b2c4::fgobj__ObjectDeco__ObjectDeco_0059b2c4);

// f_0059b61c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The field object table entry (0x16 bytes each, +0x414) for the item's map kind (below 0x87); null when none.
namespace d_0059b61c {

inline constexpr u32 field_object_table_address = 0x0094ee4cu;
inline constexpr u32 field_item_model_table_address = 0x0094ee60u;
inline guest::global<u8, 0x0094ee4f> field_item_mode;
inline guest::global<u32, 0x0094ee60> field_item_model_table;
inline constexpr guest::Function<0x002fccc4, u32(u32, u32)> item_number_is_indexed;
inline constexpr guest::Function<0x002fd010, u32(u32)> map_object_entry;

u32 FieldObjects__entry_for_item(u32 field_objects) {
    u32 r4_1 = *field_item_model_table;
    u32 r1_1 = 0u - u32(s8(*field_item_mode));
    if ((r1_1 & r4_1) != 0) {
        u32 r0_1 = item_number_is_indexed(field_objects, r1_1);
        if (r0_1 != 0) {
            u32 r0_2 = map_object_entry(field_objects);
            u32 r0_3 = *gptr<u8>(r0_2 + 0xcu);  // (from the original)
            if (r0_3 < 0x87u && r0_3 != 0) {  // (from the original)
                r1_1 = *gptr<u32>(r4_1 + 0x414u);  // (from the original)
                if (r1_1 == 0) {
                    guest::cpu()->r[1] = r1_1;
                    return 0u;
                }
                guest::cpu()->r[1] = r1_1;
                return r1_1 + (r0_3 * 3u + (r0_3 << 3) << 1);
            }
        }
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0059b61c
GUEST_EXPORT_FRAMED(0x0059b61c, d_0059b61c::FieldObjects__entry_for_item, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0059baa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the field objects' function at 0x14fc70 with the two values; -1 without the field objects.
namespace d_0059baa8 {

inline constexpr u32 field_item_model_table_address = 0x0094ee60u;
inline guest::global<u32, 0x0014fc70> global_0014fc70;
inline guest::global<u32, 0x0094ee60> field_item_model_table;

u32 FieldObjects__call_14fc70(u32 field_objects, u32 r1) {
    u32 r0_1 = *field_item_model_table;
    if (r0_1 == 0) {
        return ~0u;
    }
    return guest::call_address<u32>(*global_0014fc70, r0_1, field_objects, r1, field_objects);
}

}  // namespace d_0059baa8
GUEST_EXPORT(0x0059baa8, d_0059baa8::FieldObjects__call_14fc70);

// f_0059c090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The angle from the object to the item's cell (with the item's offset by its kind).
namespace d_0059c090 {

struct __attribute__((packed)) Local_0059c090_r0_10 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0059c090_r0_10, float_0, 0x0);
GUEST_OFFSET(Local_0059c090_r0_10, float_4, 0x4);

inline guest::global<u8, 0x0094ee4f> field_item_mode;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb9c, u32(u32)> item_flags_bit_15;
inline constexpr guest::Function<0x002fccdc, u32(u32)> indexed_item_type;
inline constexpr guest::Function<0x0057ba08, u32(u32, u32)> angle_between_points;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> find_object;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32)> cell_corner_with_height;

struct __attribute__((packed)) Frame_0059c090 {
    float float_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    float float_8;
};
GUEST_OFFSET(Frame_0059c090, float_0, 0x0);
GUEST_OFFSET(Frame_0059c090, float_8, 0x8);
GUEST_SIZE(Frame_0059c090, 0xc);

void field_item_facing_angle(u32 r0, u32 object_coin_stone, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_0059c090> frame;  // the original's stack frame
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r0_1 = *frame.at<u32>(0x28);  // (from the original)
    u32 object_2 = find_object(r0_1, 0u, r2, r3);
    if (object_2 != 0) {
        u32 r0_4 = cell_corner_with_height(frame.at(0).addr(), r2, r3);
        u32 scene = current_scene_id(r0_4);
        if (scene != 0x2bu) {  // (from the original)
            u32 scene_flagged = scene_has_flags(0x10000000u, scene);  // (from the original)
            S0_4 = guest::cpu()->s[0];
            S1_4 = guest::cpu()->s[1];
            if (scene_flagged == 0) {
                if (*field_item_mode != 0) {
                    u32 r0_7 = item_flags_bit_15(object_coin_stone);
                    S0_4 = guest::cpu()->s[0];
                    S1_4 = guest::cpu()->s[1];
                    if (r0_7 == 0) {
                        u32 r0_8 = indexed_item_type(object_coin_stone);
                        u32 category_2 = Item__category(object_coin_stone);
                        S0_4 = guest::cpu()->s[0];
                        S1_4 = guest::cpu()->s[1];
                        if (r0_8 == 9u || category_2 == 0x3cu) {  // (from the original)
                            gptr<Local_0059c090_r0_10> r0_10 = gptr<Local_0059c090_r0_10>(((r2 << 0x1e >> 0x1d) + ((r3 & 3u) << 3) << 2) + 0x84661cu);  // (from the original)
                            frame->float_0 = frame->float_0 + r0_10->float_0;
                            S1_4 = r0_10->float_4;
                            S0_4 = frame->float_8 + S1_4;
                            frame->float_8 = S0_4;
                        }
                    }
                }
            } else {
                S1_4 = 16.0f;
                S0_4 = frame->float_0 + S1_4;
                frame->float_0 = S0_4;
            }
        } else {
            S1_4 = 16.0f;
            S0_4 = frame->float_0 + S1_4;
            frame->float_0 = S0_4;
        }
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        object_2 = angle_between_points(object_2 + 0x14u, frame.at(0).addr());  // (from the original)
    }
    *gptr<u16>(r0) = u16(object_2);
}

}  // namespace d_0059c090
GUEST_EXPORT_FRAMED(0x0059c090, d_0059c090::field_item_facing_angle, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0059c7a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the field objects' function at 0x14fc78 with the values (not for id -1).
namespace d_0059c7a8 {

inline constexpr u32 field_item_model_table_address = 0x0094ee60u;
inline guest::global<u32, 0x0014fc78> global_0014fc78;
inline guest::global<u32, 0x0094ee60> field_item_model_table;

u32 FieldObjects__call_14fc78(u32 field_objects, u32 r1, u32 r2) {
    u32 r0_1 = *field_item_model_table;
    if (r0_1 == 0) {
        return r0_1;
    }
    if (r2 + 1u == 0) {
        return 0u;
    }
    return guest::call_address<u32>(*global_0014fc78, r0_1, field_objects, r1, r2);
}

}  // namespace d_0059c7a8
GUEST_EXPORT(0x0059c7a8, d_0059c7a8::FieldObjects__call_14fc78);

// f_0059c7e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059c7e0 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u8 unknown_24[0x43c];  // (not used here)
    u32 word_460;
    u8 unknown_464[0x4154];  // (not used here)
    u8 byte_45b8;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_20, 0x20);
GUEST_OFFSET(sead__SafeStringBase_char_, word_460, 0x460);
GUEST_OFFSET(sead__SafeStringBase_char_, byte_45b8, 0x45b8);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u8, 0x0094ee4f> field_item_mode;
inline guest::global<u32, 0x0094ee58> block_model_parts;
inline guest::global<u32, 0x0094ee94> global_0094ee94;
inline guest::global<u32, 0x0094ee98> global_0094ee98;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;

struct __attribute__((packed)) Frame_0059c7e0 {
    u32 word_0;
    u32 word_4;
    u32 object_8_vtable;
    u32 word_c;
    u32 object_10_vtable;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0059c7e0, word_0, 0x0);
GUEST_OFFSET(Frame_0059c7e0, word_4, 0x4);
GUEST_OFFSET(Frame_0059c7e0, object_8_vtable, 0x8);
GUEST_OFFSET(Frame_0059c7e0, word_c, 0xc);
GUEST_OFFSET(Frame_0059c7e0, object_10_vtable, 0x10);
GUEST_OFFSET(Frame_0059c7e0, word_14, 0x14);
GUEST_SIZE(Frame_0059c7e0, 0x1c);

void recreate_fg_proc_heaps(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1) {
    guest::StackFrameOf<Frame_0059c7e0> frame;  // the original's stack frame
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    if (safe_string_base_char->word_20 == 0) {
        safe_string_base_char->byte_45b8 = 0;
        *global_0094ee94 = 0;
        *global_0094ee98 = 0;
        u32 r6_1 = *stage_heap;
        if (u32(s8(*field_item_mode)) == 0) {
            r8_1 = 0x100400u;  // (from the original)
            r9_1 = 0xdc00u;  // (from the original)
        } else {
            r9_1 = 0x1e000u;  // (from the original)
            r8_1 = r9_1 + 0x1f0000u;  // (from the original)
            *block_model_parts = 0;
            if (safe_string_base_char->word_460 == 0) {
                frame->object_10_vtable = vtable_sead__SafeStringBase_char_;
                frame->word_14 = 0x846a1c;  // (from the original)
                frame->word_4 = 0;
                frame->word_0 = 1;
                HeapHolder__recreate(safe_string_base_char.addr() + 0x45cu, 0x19800u, r6_1, frame.at(0x10).addr());  // (from the original)
            }
        }
        frame->word_c = 0x846ac8;  // (from the original)
        frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
        frame->word_4 = 0;
        frame->word_0 = 1;
        HeapHolder__recreate(safe_string_base_char.addr() + 0x14u, r9_1, r6_1, frame.at(8).addr());  // (from the original)
        frame->word_c = 0x846ab4;  // (from the original)
        frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
        frame->word_4 = 0;
        frame->word_0 = 1;
        HeapHolder__recreate(safe_string_base_char.addr() + 0x1cu, r8_1, r6_1, frame.at(8).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        *gptr<u8>(safe_string_base_char.addr() + 0x45b8u) = 1;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0059c7e0
GUEST_EXPORT_FRAMED(0x0059c7e0, d_0059c7e0::recreate_fg_proc_heaps, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0059c934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The field object at the cell (inside the map), marking it to refresh (state 0xa) when flagged; null when none.
namespace d_0059c934 {

inline constexpr u32 field_object_table_address = 0x0094ee4cu;
inline constexpr u32 field_item_model_table_address = 0x0094ee60u;
inline guest::global<u32, 0x0094ee60> field_item_model_table;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> GridMap__rect_10_contains;

u32 FieldObjects__find_at_cell(u32 field_objects, u32 r1, u32 r2) {
    u32 r4 = field_objects;
    u32 r5 = r1;
    field_objects = *field_item_model_table;
    if (field_objects != 0) {
        u32 map_table_2 = get_map_table(field_objects, r1, r2, guest::cpu()->r[3]);
        field_objects = GridMap__rect_10_contains(map_table_2, r4, r5);
        r1 = guest::cpu()->r[1];
        if (field_objects != 0) {
            field_objects = *gptr<u32>(*field_item_model_table + 0x35a4u);  // (from the original)
            if (field_objects != 0) {
L_59c980:;
                r1 = *gptr<u32>(field_objects + 0x28u);  // (from the original)
                u32 zf_1 = r1 == r4;
                if (zf_1) {
                    r1 = *gptr<u32>(field_objects + 0x2cu);  // (from the original)
                    zf_1 = r1 == r5;
                }
                if (!zf_1) {
                    field_objects = *gptr<u32>(field_objects + 8u);
                    if (field_objects == 0) {
                        guest::cpu()->r[1] = r1;
                        return field_objects;
                    }
                    guest::preempt();
                    goto L_59c980;
                }
                if (field_objects != 0) {
                    r1 = *gptr<u32>(field_objects + 0x68u);  // (from the original)
                    if ((r1 & 8u) != 0) {
                        r1 = 0xau;  // (from the original)
                        *gptr<u8>(field_objects + 0x11cu) = u8(r1);  // (from the original)
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return field_objects;
}

}  // namespace d_0059c934
GUEST_EXPORT_FRAMED(0x0059c934, d_0059c934::FieldObjects__find_at_cell, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0059cae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Binds the texture chosen by the town's setting (save +0x621ce) to the field object's material.
namespace d_0059cae8 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32)> string_length;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x004a6bb8, u32(u32, u32, u32, u32)> ResModel__find_material;
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> Model__set_visible_if_any;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> ResDic__find;

struct __attribute__((packed)) Frame_0059cae8 {
    u32 object_deco_name_address;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0059cae8, object_deco_name_address, 0x0);
GUEST_SIZE(Frame_0059cae8, 0x20);

void FieldObject__bind_texture_by_town(u32 field_object, u32 r1, u32 r2, u32 object_deco_name_address) {
    guest::StackFrameOf<Frame_0059cae8> frame;  // the original's stack frame
    u32 model = 0;
    u32 r2_3 = 0;
    frame->object_deco_name_address = object_deco_name_address;
    u32 material_2 = ResModel__find_material(field_object + 0x13cu, r1, r2, object_deco_name_address);  // (from the original)
    u32 ea_1 = material_2 + 0xc0u;  // (from the original)
    u32 r1_1 = *gptr<u32>(ea_1);
    u32 r0_3 = r1_1 == 0 ? 0u : ea_1 + r1_1;
    if (r0_3 == 0) {
        model = 0u;
    } else {
        u32 ea_2 = r0_3 + 0x28u;  // (from the original)
        r0_3 = ea_2;
        r1_1 = *gptr<u32>(ea_2);
        model = r1_1 == 0 ? 0u : r1_1 + r0_3;
    }
    u32 save_data_2 = get_save_data(r0_3, r1_1);
    u32 r5_1 = gptr<u32>(object_deco_name_address)[u32(*gptr<u8>(save_data_2 + 0x621ceu)) & 0xfu];  // (from the original)
    u32 ea_3 = *gptr<u32>(field_object + 0x13cu) + 0x28u;  // (from the original)
    u32 r1_2 = *gptr<u32>(ea_3);
    u32 r0_6 = r1_2 == 0 ? 0u : ea_3 + r1_2;
    frame->object_deco_name_address = r0_6;
    if (r0_6 != 0 && r5_1 != 0) {
        u32 length_2 = string_length(r5_1, r1_2);
        u32 entry_3 = ResDic__find(frame.at(0).addr(), r5_1, length_2);
        r1_2 = guest::cpu()->r[1];
        if (entry_3 != 0) {
            u32 ea_4 = entry_3 + 0xcu;  // (from the original)
            r1_2 = *gptr<u32>(ea_4);
            r2_3 = r1_2 == 0 ? 0u : r1_2 + ea_4;
        } else {
            r2_3 = 0u;
        }
    } else {
        r2_3 = 0u;
    }
    if (r2_3 != 0) {
        u32 r3_4 = frame->object_deco_name_address;
        frame.release();
        Model__set_visible_if_any(model, r2, r2_3, r3_4);
        return;
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0059cae8
GUEST_EXPORT(0x0059cae8, d_0059cae8::FieldObject__bind_texture_by_town);

// f_0059cd24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0059cd24 {

struct __attribute__((packed)) Local_0059cd24_ea_1 {
    u32 object_coin_stone;
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
GUEST_OFFSET(Local_0059cd24_ea_1, object_coin_stone, 0x0);
GUEST_OFFSET(Local_0059cd24_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0059cd24_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0059cd24_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0059cd24_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0059cd24_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0059cd24_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0059cd24_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0059cd24_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_0059cd24_ea_1, word_24, 0x24);

struct __attribute__((packed)) Local_0059cd24_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0059cd24_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0059cd24_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0059cd24_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0059cd24_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0059cd24_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0059cd24_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0059cd24_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0059cd24_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_0059cd24_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_0059cd24_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_0059cd24_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_0059cd24_ea_5, word_14, 0x14);
GUEST_OFFSET(Local_0059cd24_ea_5, word_18, 0x18);

struct __attribute__((packed)) Local_0059cd24_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0059cd24_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_0059cd24_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_0059cd24_ea_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0059cd24_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_0059cd24_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_0059cd24_ea_8, word_8, 0x8);
GUEST_OFFSET(Local_0059cd24_ea_8, word_c, 0xc);
GUEST_OFFSET(Local_0059cd24_ea_8, word_10, 0x10);
GUEST_OFFSET(Local_0059cd24_ea_8, word_14, 0x14);
GUEST_OFFSET(Local_0059cd24_ea_8, word_18, 0x18);

struct __attribute__((packed)) Local_0059cd24_r0_6 {
    u32 vtable;
    u8 unknown_4[0x120];  // (not used here)
    u16 half_124;
};
GUEST_OFFSET(Local_0059cd24_r0_6, vtable, 0x0);
GUEST_OFFSET(Local_0059cd24_r0_6, half_124, 0x124);

struct __attribute__((packed)) Local_0059cd24_r4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0059cd24_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_0059cd24_r4_2, word_4, 0x4);

struct __attribute__((packed)) Local_0059cd24_r5_3 {
    u16 half_0;
};
GUEST_OFFSET(Local_0059cd24_r5_3, half_0, 0x0);

inline constexpr u32 vtable_fgobj__ObjectCoinStone = 0x00907bd0u;
inline constexpr u32 field_object_table_address = 0x0094ee4cu;
inline constexpr u32 field_object_model_info_address = 0x0098a47cu;
inline constexpr guest::Function<0x00125ca8, u32(u32, u32, u32, u32)> LayoutList__insert;
inline constexpr guest::Function<0x0012ca6c, u32(u32, u32)> set_word_4_and_succeed;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> current_net_station;
inline constexpr guest::Function<0x0058fe4c, u32(u32, u32)> FieldItem__setup_model;
inline constexpr guest::Function<0x00590720, u32(u32, u32, u32, u32)> FieldItem__init;
inline constexpr guest::Function<0x00590f1c, u32(u32)> fgobj__ObjectBase__ObjectBase;
inline constexpr guest::Function<0x0059c090, u32(u32, u32, u32, u32)> field_item_facing_angle;
inline constexpr guest::Function<0x005a2624, u32(u32, u32, u32)> TownBits__set;
inline constexpr guest::Function<0x005a2670, u32(u32, u32, u32, u32)> FieldItems__find_at;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> GridMap__rect_10_contains;

struct __attribute__((packed)) Frame_0059cd24 {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x2a];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0059cd24, word_0, 0x0);
GUEST_OFFSET(Frame_0059cd24, half_4, 0x4);
GUEST_SIZE(Frame_0059cd24, 0x30);

void fgobj__ObjectCoinStone__ObjectCoinStone(u32 object_coin_stone, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0059cd24> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0059cd24_ea_5> ea_5 = gptr<Local_0059cd24_ea_5>(0u);
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r0_8 = 0;
    gptr<Local_0059cd24_ea_1> ea_1 = gptr<Local_0059cd24_ea_1>(frame.at(8).addr());
    ea_1->object_coin_stone = object_coin_stone;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r8;
    ea_1->word_20 = r9;
    ea_1->word_24 = r14;
    r8 = 0u;
    r7 = field_object_table_address;
    gptr<Local_0059cd24_ea_2> ea_2 = gptr<Local_0059cd24_ea_2>(frame.at(0xc).addr());  // (from the original)
    u32 r5_1 = ea_2->word_0;
    u32 r6_1 = ea_2->word_4;
    u32 r0_1 = *gptr<u32>(r7 + 0x14u);  // (from the original)
    if (r0_1 != 0) {
        u32 map_table_2 = get_map_table(r0_1, r1, r2, r3);
        u32 r0_3 = GridMap__rect_10_contains(map_table_2, r5_1, r6_1);
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            frame->half_4 = u16(r8);
            u32 r0_4 = current_net_station(r0_3, r1);
            frame->word_0 = r0_4;
            gptr<Local_0059cd24_ea_4> ea_4 = gptr<Local_0059cd24_ea_4>(frame.at(0xc).addr());  // (from the original)
            field_item_facing_angle(frame.at(4).addr(), object_coin_stone, ea_4->word_0, ea_4->word_4);
            r1 = field_object_model_info_address;
            r3 = 0x226u;  // (from the original)
            r6 = object_coin_stone;
            object_coin_stone = 0u;
            goto L_59cda0;
        }
    }
    ea_5 = gptr<Local_0059cd24_ea_5>(frame.at(0x14).addr());  // (from the original)
    r4_1 = ea_5->word_0;
    r5_2 = ea_5->word_4;
    r6_2 = ea_5->word_8;
    r7_1 = ea_5->word_c;
    r8_1 = ea_5->word_10;
    r9_1 = ea_5->word_14;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    return;
L_59cda0:;
    u32 r2_3 = gptr<u32>(r1)[object_coin_stone];
    if (r2_3 != 0) {
        *gptr<u32>(r1 + (object_coin_stone << 2)) = r8;
        gptr<Local_0059cd24_r0_6> block = gptr<Local_0059cd24_r0_6>(allocate_on_heap(0x128u, r2_3, 4u, r3));  // (from the original)
        clear_aligned(block.addr(), 0x128u);  // (from the original)
        fgobj__ObjectBase__ObjectBase(block.addr());
        gptr<Local_0059cd24_r5_3> r5_3 = gptr<Local_0059cd24_r5_3>(block.addr() + 0x126u);  // (from the original)
        block->vtable = vtable_fgobj__ObjectCoinStone;
        *gptr<u16>(block.addr() + 0x124u) = u16(r8);  // (from the original)
        r5_3->half_0 = u16(r8);
        set_word_4_and_succeed(block.addr() + 0x20u, r2_3);  // (from the original)
        frame->word_0 = r8;
        gptr<Local_0059cd24_ea_7> ea_7 = gptr<Local_0059cd24_ea_7>(frame.at(0xc).addr());  // (from the original)
        FieldItem__init(block.addr(), r6, ea_7->word_0, ea_7->word_4);
        u32 r1_2 = frame->half_4;
        block->half_124 = u16(r1_2);
        r5_3->half_0 = u16(r8);
        FieldItem__setup_model(block.addr(), r1_2);
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_8 = block.addr();
    } else {
        object_coin_stone += 1u;
        if (object_coin_stone < r3) {
            guest::preempt();
            goto L_59cda0;
        }
        r0_8 = r8;
    }
    if (r0_8 != 0) {
        LayoutList__insert(*gptr<u32>(r7 + 0x14u) + 0x3594u, r0_8, r2_3, r3);  // (from the original)
        gptr<Local_0059cd24_r4_2> r4_2 = gptr<Local_0059cd24_r4_2>(frame.at(0xc).addr());  // (from the original)
        FieldItems__find_at(*gptr<u32>(r7 + 0x14u), r4_2->word_0, r4_2->word_4, 0u);  // (from the original)
        TownBits__set(*gptr<u32>(r7 + 0x14u) + 0x35c4u, r4_2->word_0, r4_2->word_4);  // (from the original)
        gptr<Local_0059cd24_ea_8> ea_8 = gptr<Local_0059cd24_ea_8>(frame.at(0x14).addr());  // (from the original)
        u32 r4_3 = ea_8->word_0;
        u32 r5_4 = ea_8->word_4;
        u32 r6_3 = ea_8->word_8;
        u32 r7_2 = ea_8->word_c;
        u32 r8_2 = ea_8->word_10;
        u32 r9_2 = ea_8->word_14;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[5] = r5_4;
        guest::cpu()->r[6] = r6_3;
        guest::cpu()->r[7] = r7_2;
        guest::cpu()->r[8] = r8_2;
        guest::cpu()->r[9] = r9_2;
        return;
    }
    ea_5 = gptr<Local_0059cd24_ea_5>(frame.at(0x14).addr());  // (from the original)
    r4_1 = ea_5->word_0;
    r5_2 = ea_5->word_4;
    r6_2 = ea_5->word_8;
    r7_1 = ea_5->word_c;
    r8_1 = ea_5->word_10;
    r9_1 = ea_5->word_14;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
}

}  // namespace d_0059cd24
GUEST_EXPORT(0x0059cd24, d_0059cd24::fgobj__ObjectCoinStone__ObjectCoinStone);

// f_0059e65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the tile (x, z) of the field's grids, and (when asked) removes the objects standing there.
namespace d_0059e65c {

inline constexpr u32 field_object_table_address = 0x0094ee4cu;
inline constexpr guest::Function<0x0059e758, u32(u32, u32, u32, u32)> FieldItems__move_item;
inline constexpr guest::Function<0x005a2624, u32(u32, u32, u32)> TownBits__set;
inline constexpr guest::Function<0x005a2670, u32(u32, u32, u32, u32)> FieldItems__find_at;
inline constexpr guest::Function<0x005a2708, u32(u32, u32, u32)> clear_grid_bit;
inline constexpr guest::Function<0x00753c94, u32(u32, u32, u32, u32)> TownBits__test;

u32 clear_field_tile(u32 x, u32 z, u32 remove_objects, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4_1 = 0;
    u32 r5 = x;
    u32 r8 = field_object_table_address;
    u32 r6 = z;
    u32 r0_1 = *gptr<u32>(r8 + 0x14u);  // (from the original)
    if (r0_1 != 0) {
        u32 r0_3 = TownBits__test(r0_1 + 0x404cu, r5, z, r3);  // (from the original)
        if (r0_3 != 0) {
            clear_grid_bit(*gptr<u32>(r8 + 0x14u) + 0x404cu, r5, r6);  // (from the original)
            u32 r0_5 = *gptr<u32>(r8 + 0x14u);  // (from the original)
            frame.release();
            return TownBits__set(r0_5 + 0x35c4u, r5, r6);  // (from the original)
        }
        FieldItems__find_at(*gptr<u32>(r8 + 0x14u), r5, r6, 0u);  // (from the original)
        if (remove_objects != 0) {
            u32 r7 = *gptr<u32>(r8 + 0x14u);  // (from the original)
            z = *gptr<u32>(r7 + 0x3598u);  // (from the original)
            if (z != 0) {
                do {
                    r4_1 = *gptr<u32>(z + 8u);
                    if (*gptr<u32>(z + 0x28u) == r5 && *gptr<u32>(z + 0x2cu) == r6) {  // (from the original)
                        FieldItems__move_item(r7, z, 0u, 1u);
                    }
                    z = r4_1;
                    guest::preempt();
                } while (r4_1 != 0);
            }
        }
        u32 r0_8 = *gptr<u32>(r8 + 0x14u);  // (from the original)
        frame.release();
        return clear_grid_bit(r0_8 + 0x35c4u, r5, r6);  // (from the original)
    }
    guest::cpu()->r[1] = z;
    return r0_1;
}

}  // namespace d_0059e65c
GUEST_EXPORT(0x0059e65c, d_0059e65c::clear_field_tile);

// f_0059ec48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the first active field drop of the kinds 2, 4, 5, 0x15 or 0x17 to 0x1a; -1 when none.
namespace d_0059ec48 {

struct __attribute__((packed)) Local_0059ec48_r2_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Local_0059ec48_r2_1, byte_e, 0xe);
GUEST_OFFSET(Local_0059ec48_r2_1, byte_f, 0xf);

inline constexpr u32 field_drop_slots_address = 0x009b417cu;

u32 FieldDrops__find_active() {
    u32 r1 = field_drop_slots_address;
    u32 r0 = 0u;
    do {
        gptr<Local_0059ec48_r2_1> r2_1 = gptr<Local_0059ec48_r2_1>(r1 + r0 * 0x12u);  // (from the original)
        if (r2_1->byte_f != 0) {
            u32 r2_2 = r2_1->byte_e;
            u32 zf_1 = r2_2 - 0x17u == 0;  // (from the original)
            if (zf_1) {
                guest::cpu()->r[1] = r1;
                return r0;
            }
            if (zf_1 || s32(r2_2) < 0x17) {  // (from the original)
                if (r2_2 == 2u || r2_2 == 4u || r2_2 == 5u || r2_2 == 0x15u) {  // (from the original)
                    guest::cpu()->r[1] = r1;
                    return r0;
                }
            } else if (r2_2 == 0x18u || r2_2 == 0x19u || r2_2 == 0x1au) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return r0;
            }
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 4);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_0059ec48
GUEST_EXPORT(0x0059ec48, d_0059ec48::FieldDrops__find_active);

// f_0059f194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the first of the four 0x12-byte slots at 0x9b417c whose byte +0xf is clear and fills it; -1 when all are used.
namespace d_0059f194 {

struct __attribute__((packed)) Local_0059f194_ea_1 {
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
GUEST_OFFSET(Local_0059f194_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0059f194_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0059f194_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0059f194_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0059f194_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0059f194_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0059f194_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0059f194_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0059f194_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_0059f194_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_0059f194_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_0059f194_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_0059f194_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_0059f194_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0059f194_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0059f194_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0059f194_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0059f194_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_0059f194_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_0059f194_ea_2, word_14, 0x14);

struct __attribute__((packed)) Local_0059f194_ea_3 {
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
GUEST_OFFSET(Local_0059f194_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0059f194_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0059f194_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0059f194_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_0059f194_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_0059f194_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_0059f194_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_0059f194_ea_3, word_1c, 0x1c);
GUEST_OFFSET(Local_0059f194_ea_3, word_20, 0x20);

struct __attribute__((packed)) Local_0059f194_r4_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 unknown_10[0x1];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Local_0059f194_r4_1, byte_c, 0xc);
GUEST_OFFSET(Local_0059f194_r4_1, byte_d, 0xd);
GUEST_OFFSET(Local_0059f194_r4_1, byte_e, 0xe);
GUEST_OFFSET(Local_0059f194_r4_1, byte_f, 0xf);
GUEST_OFFSET(Local_0059f194_r4_1, byte_11, 0x11);

inline constexpr u32 field_drop_slots_address = 0x009b417cu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x0059f4d8, u32(u32)> FieldItem__update_by_kind;
inline constexpr guest::Function<0x0059f7c8, u32(u32, u32, u32)> FieldDropMessage__from_drop;
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> FieldDrop__init;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) Frame_0059f194 {
    u8 unknown_0[0x1c];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0059f194, word_1c, 0x1c);
GUEST_OFFSET(Frame_0059f194, word_24, 0x24);
GUEST_OFFSET(Frame_0059f194, word_28, 0x28);
GUEST_SIZE(Frame_0059f194, 0x50);

u32 FieldDrops__add_to_free_slot(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0059f194> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0059f194_ea_1> ea_1 = gptr<Local_0059f194_ea_1>(frame.at(0x1c).addr());  // (from the original)
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
    r5 = 0u;
    gptr<Local_0059f194_ea_2> ea_2 = gptr<Local_0059f194_ea_2>(frame.at(0x50).addr());  // (from the original)
    r6 = ea_2->word_0;
    r7 = ea_2->word_4;
    r8 = ea_2->word_8;
    r9 = ea_2->word_c;
    r10 = ea_2->word_10;
    r11 = ea_2->word_14;
    r0 = field_drop_slots_address;
L_59f1ac:;
    if (*gptr<u8>(r0 + (r5 + (r5 << 3) << 1) + 0xfu) != 0) {  // (from the original)
        r5 += 1u;
        if (s32(r5) < 4) {
            guest::preempt();
            goto L_59f1ac;
        }
        r5 = ~0u;
    } else if (r5 + 1u != 0) {
        u32 r2_1 = r5 + (r5 << 3);
        gptr<Local_0059f194_r4_1> r4_1 = gptr<Local_0059f194_r4_1>(r0 + (r2_1 << 1));
        Item__copy(r4_1.addr(), r1, r2_1, r3);
        Item__copy(r4_1.addr() + 4u, frame->word_24, guest::cpu()->r[2], guest::cpu()->r[3]);
        Item__copy(r4_1.addr() + 8u, frame->word_28, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r9_1 = (u32(r4_1->byte_11) & ~1u | r8 & 1u) & ~2u;
        u32 r10_1 = *frame.at<u32>(0x68);  // (from the original)
        r4_1->byte_c = u8(r6);
        u32 r3_4 = ((0x1cu & r10 << 2) | ((2u & r9 << 1) | r9_1) & ~0x1cu) & ~0x20u;  // (from the original)
        r4_1->byte_d = u8(r7);
        r4_1->byte_f = 1;
        u32 r2_4 = (0x20u & r11 << 5 | r3_4) & ~0xc0u;  // (from the original)
        r4_1->byte_e = u8(frame->word_1c);
        r4_1->byte_11 = u8(r2_4 | (0xc0u & r10_1 << 6));  // (from the original)
        r1 = r4_1->byte_e;
        if (r1 == 0x10u) {  // (from the original)
            r4_1->byte_f = 2;
        } else {
            FieldDrop__init(frame.at(0).addr(), r1, r2_4, r3_4);
            u32 r0_5 = FieldDropMessage__from_drop(frame.at(0).addr(), r4_1.addr(), 0u);
            u32 r4_2 = frame.at(0).addr();
            u32 r0_6 = mode_above_1(r0_5);
            if (r0_6 != 0) {
                u32 r0_7 = main_object_idle(r0_6);
                if (r0_7 == 0) {
                    send_message(0x3au, 0u, r4_2, 0x16u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    goto L_59f2cc;
                }
            }
            FieldItem__update_by_kind(r4_2);
            r1 = guest::cpu()->r[1];
L_59f2cc:;
        }
    }
    gptr<Local_0059f194_ea_3> ea_3 = gptr<Local_0059f194_ea_3>(frame.at(0x2c).addr());  // (from the original)
    u32 r4_3 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 r7_1 = ea_3->word_c;
    u32 r8_2 = ea_3->word_10;
    u32 r9_2 = ea_3->word_14;
    u32 r10_2 = ea_3->word_18;
    u32 r11_1 = ea_3->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    return r5;
}

}  // namespace d_0059f194
GUEST_EXPORT(0x0059f194, d_0059f194::FieldDrops__add_to_free_slot);

// f_0059f71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the drop message for the item at the cell (kind 0x21, the station's index) with the scene byte.
namespace d_0059f71c {

struct __attribute__((packed)) FieldDropMessage {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x3];  // (not used here)
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(FieldDropMessage, byte_c, 0xc);
GUEST_OFFSET(FieldDropMessage, byte_d, 0xd);
GUEST_OFFSET(FieldDropMessage, byte_e, 0xe);
GUEST_OFFSET(FieldDropMessage, byte_12, 0x12);
GUEST_OFFSET(FieldDropMessage, byte_13, 0x13);
GUEST_OFFSET(FieldDropMessage, byte_14, 0x14);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;

void FieldDropMessage__init_item(gptr<FieldDropMessage> field_drop_message, u32 r1, u32 r2, u32 r3) {
    u32 r7_1 = *gptr<u32>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r0_1 = current_net_station(field_drop_message.addr());
    field_drop_message->byte_c = u8(u32(field_drop_message->byte_c) & ~3u | r0_1 & 3u);
    u32 r3_1 = field_drop_message->byte_c;
    u32 r2_1 = field_drop_message->byte_e;
    u32 r1_1 = field_drop_message->byte_d;
    field_drop_message->byte_13 = u8(r2);
    field_drop_message->byte_14 = u8(r3);
    field_drop_message->byte_e = u8(r2_1 & ~1u);
    u32 r0_2 = u32(field_drop_message->byte_e) & ~0x1eu;  // (from the original)
    field_drop_message->byte_c = u8(r3_1 & ~0xfcu | 0x84u);  // (from the original)
    field_drop_message->byte_d = u8(r1_1 & ~3u & 0xc3u | 0xcu);  // (from the original)
    field_drop_message->byte_e = u8(r0_2 & ~0xe0u);  // (from the original)
    Item__copy(field_drop_message.addr(), empty_item_address);
    Item__copy(field_drop_message.addr() + 4u, r1);
    Item__copy(field_drop_message.addr() + 8u, empty_item_address);
    field_drop_message->byte_12 = u8(r7_1);
}

}  // namespace d_0059f71c
GUEST_EXPORT_FRAMED(0x0059f71c, d_0059f71c::FieldDropMessage__init_item, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0059f7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the drop message from the drop slot (its cell, kind, slot and items) with the action.
namespace d_0059f7c8 {

struct __attribute__((packed)) FieldDropMessage {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x3];  // (not used here)
    u8 scene;
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(FieldDropMessage, byte_c, 0xc);
GUEST_OFFSET(FieldDropMessage, byte_d, 0xd);
GUEST_OFFSET(FieldDropMessage, byte_e, 0xe);
GUEST_OFFSET(FieldDropMessage, scene, 0x12);
GUEST_OFFSET(FieldDropMessage, byte_13, 0x13);
GUEST_OFFSET(FieldDropMessage, byte_14, 0x14);

struct __attribute__((packed)) Object_0059f7c8_1 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Object_0059f7c8_1, byte_c, 0xc);
GUEST_OFFSET(Object_0059f7c8_1, byte_d, 0xd);
GUEST_OFFSET(Object_0059f7c8_1, byte_e, 0xe);
GUEST_OFFSET(Object_0059f7c8_1, byte_10, 0x10);
GUEST_OFFSET(Object_0059f7c8_1, byte_11, 0x11);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;

u32 FieldDropMessage__from_drop(gptr<FieldDropMessage> field_drop_message, gptr<Object_0059f7c8_1> arg1, u32 r2) {
    u32 r0_1 = current_net_station(field_drop_message.addr());
    u32 r0_2 = r0_1 & 3u | u32(field_drop_message->byte_c) & ~3u;
    field_drop_message->byte_c = u8(r0_2);
    u32 r0_3 = u32(field_drop_message->byte_d) & ~3u | u32(arg1->byte_10) & 3u;
    field_drop_message->byte_d = u8(r0_3);
    field_drop_message->byte_c = u8(0xfcu & u32(arg1->byte_e) << 2 | (r0_2 & ~0xfcu));  // (from the original)
    field_drop_message->byte_d = u8((0x3cu & r2 << 2) | r0_3 & ~0x3cu);  // (from the original)
    field_drop_message->byte_e = arg1->byte_11;
    field_drop_message->byte_13 = arg1->byte_c;
    field_drop_message->byte_14 = arg1->byte_d;
    Item__copy(field_drop_message.addr(), arg1.addr());
    Item__copy(field_drop_message.addr() + 4u, arg1.addr() + 4u);
    Item__copy(field_drop_message.addr() + 8u, arg1.addr() + 8u);
    u32 scene = current_scene_id(field_drop_message.addr() + 8u);
    field_drop_message->scene = u8(scene);
    return scene;
}

}  // namespace d_0059f7c8
GUEST_EXPORT_FRAMED(0x0059f7c8, d_0059f7c8::FieldDropMessage__from_drop, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
