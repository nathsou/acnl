// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"

#include <bit>

using guest::gptr;

// f_00650174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the NPC source's operation at the cell of object `id`; 0 when there is none.
namespace d_00650174 {

inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> cell_position_of_id;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x006dabd8, u32(u32, u32, u32)> object_operation;

struct __attribute__((packed)) Frame_00650174 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00650174, word_0, 0x0);
GUEST_OFFSET(Frame_00650174, word_4, 0x4);
GUEST_SIZE(Frame_00650174, 0x14);

u32 npc_operation_at_object(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrameOf<Frame_00650174> frame;  // the original's stack frame
    u32 cell_position_2 = cell_position_of_id(frame.at(8).addr(), r0, r2, guest::cpu()->r[3]);
    if (cell_position_2 == 0) {
        return cell_position_2;
    }
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), frame.at(8).addr());
    u32 r1_2 = frame->word_0;
    u32 r2_2 = frame->word_4;
    if (*event_npc_mode != 0xffu) {  // (from the original)
        return 0u;
    }
    u32 r0_4 = *event_npc_source;
    if (r0_4 == 0) {
        return 0u;
    }
    u32 r0_5 = object_operation(r0_4, r1_2, r2_2);
    return r0_5;
}

}  // namespace d_00650174
GUEST_EXPORT_FRAMED(0x00650174, d_00650174::npc_operation_at_object, 0x4000);  // pushes {lr} first, as the original

// f_00650234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In flagged scenes, sets the BGM's kind 6 (when asked) and pushes the special BGM once, setting mode 4.
namespace d_00650234 {

struct __attribute__((packed)) Object_00650234_0 {
    u8 unknown_0[0x170];  // (not used here)
    u8 byte_170;
    u8 byte_171;
    u8 unknown_172[0x7];  // (not used here)
    u8 byte_179;
};
GUEST_OFFSET(Object_00650234_0, byte_170, 0x170);
GUEST_OFFSET(Object_00650234_0, byte_171, 0x171);
GUEST_OFFSET(Object_00650234_0, byte_179, 0x179);

struct __attribute__((packed)) Local_00650234_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_00650234_r4_1, byte_8, 0x8);

inline constexpr guest::Function<0x0058a018, u32(u32)> push_bgm_9c;
inline constexpr guest::Function<0x0058a8e0, u32(u32, u32)> bgm_set_kind_6;
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> return_constant_0x989bc0_;

void AcPlayer_rec__start_flagged_bgm(gptr<Object_00650234_0> arg0, u32 r1) {
    gptr<Local_00650234_r4_1> r4_1 = gptr<Local_00650234_r4_1>(arg0.addr() + 0x171u);  // (from the original)
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        if (r1 != 0) {
            u32 r1_1 = u32(arg0->byte_179) | 4u;
            arg0->byte_179 = u8(r1_1);
            u32 r0_2 = return_constant_0x989bc0_(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            bgm_set_kind_6(r0_2, 5u);
        }
        u32 r0_3 = r4_1->byte_8;
        r1 = r0_3 >> 6u & 1u;
        if (r1 == 0) {
            u32 r0_4 = r0_3 | 0x40u;  // (from the original)
            r4_1->byte_8 = u8(r0_4);
            u32 r0_5 = return_constant_0x989bc0_(r0_4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            push_bgm_9c(r0_5);
            r1 = guest::cpu()->r[1];
        }
        arg0->byte_170 = 4;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00650234
GUEST_EXPORT_FRAMED(0x00650234, d_00650234::AcPlayer_rec__start_flagged_bgm, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006502a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless locked, turns the x angle (+0x2c) toward the target (+0x958) while asked (bit 3 of +0x17a), and marks it
// turned.
namespace d_006502a8 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
    u8 unknown_2e[0x14c];  // (not used here)
    u8 byte_17a;
    u8 unknown_17b[0x7dd];  // (not used here)
    u16 half_958;
    u16 half_95a;
};
GUEST_OFFSET(SlotObject, half_2c, 0x2c);
GUEST_OFFSET(SlotObject, byte_17a, 0x17a);
GUEST_OFFSET(SlotObject, half_958, 0x958);
GUEST_OFFSET(SlotObject, half_95a, 0x95a);

struct __attribute__((packed)) Local_006502a8_r5_2 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Local_006502a8_r5_2, byte_9, 0x9);

inline constexpr guest::Function<0x0056ade4, u32(u32, u32, u32)> step_half_towards_a;

u32 SlotObject__turn_toward_target_x(gptr<SlotObject> slot_object) {
    u32 r0_1 = slot_object->byte_17a;
    gptr<Local_006502a8_r5_2> r5_2 = gptr<Local_006502a8_r5_2>((slot_object.addr() + 0x100u) + 0x71u);  // (from the original)
    if ((r0_1 & 1u) == 0) {
        if ((r0_1 >> 3u & 1u) != 0) {
            u32 r6_1 = slot_object.addr() + 0x900u;  // (from the original)
            u32 r1_1 = s16(slot_object->half_958);
            u32 r2_1 = s16(slot_object->half_95a);
            step_half_towards_a(slot_object.addr() + 0x2cu, r1_1, r2_1);  // (from the original)
            if (u32(s16(slot_object->half_958)) == u32(s16(slot_object->half_2c))) {
                slot_object->byte_17a = u8(u32(slot_object->byte_17a) & ~8u);
            }
        }
        r0_1 = u32(r5_2->byte_9) | 1u;
        r5_2->byte_9 = u8(r0_1);
    }
    return r0_1;
}

}  // namespace d_006502a8
GUEST_EXPORT_FRAMED(0x006502a8, d_006502a8::SlotObject__turn_toward_target_x, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00650310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless locked, turns the y angle (+0x2e) toward the target (+0x95c) while asked (bit 4 of +0x17a), and marks it
// turned.
namespace d_00650310 {

struct __attribute__((packed)) Local_00650310_r5_2 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Local_00650310_r5_2, byte_9, 0x9);

inline constexpr guest::Function<0x0056ade4, u32(u32, u32, u32)> step_half_towards_a;

void SlotObject__turn_toward_target_y(gptr<SlotObject> slot_object) {
    u32 flags_17a = slot_object->flags_17a;
    gptr<Local_00650310_r5_2> r5_2 = gptr<Local_00650310_r5_2>((slot_object.addr() + 0x100u) + 0x71u);  // (from the original)
    u32 r1_1 = flags_17a >> 1u & 1u;
    if (r1_1 == 0) {
        if ((flags_17a >> 4u & 1u) != 0) {
            u32 r6_1 = slot_object.addr() + 0x900u;  // (from the original)
            u32 r1_2 = s16(u16(slot_object->target_angle_95c));
            u32 r2_1 = s16(u16(slot_object->target_angle_95e));
            step_half_towards_a(slot_object.addr() + 0x2eu, r1_2, r2_1);  // (from the original)
            r1_1 = s16(slot_object->angles[1]);
            if (u32(s16(u16(slot_object->target_angle_95c))) == r1_1) {
                r1_1 = u32(slot_object->flags_17a) & ~0x10u;  // (from the original)
                slot_object->flags_17a = u8(r1_1);
            }
        }
        r5_2->byte_9 = u8(u32(r5_2->byte_9) | 2u);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00650310
GUEST_EXPORT_FRAMED(0x00650310, d_00650310::SlotObject__turn_toward_target_y, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006512e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns the player's tool effect (by the kind and whether a tool is held) at the position with the angle.
namespace d_006512e8 {

inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x006a83fc, u32(u32, u32, u32, u32)> EffectSet__spawn_scaled;
inline constexpr guest::Function<0x006a84e8, u32(u32, u32, u32, u32)> EffectSet__spawn_variant_scaled;
inline constexpr guest::Function<0x0071a88c, u32(u32, u32, u32, u32)> slot_6_if_class_6;

struct __attribute__((packed)) Frame_006512e8 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u8 unknown_6[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006512e8, half_0, 0x0);
GUEST_OFFSET(Frame_006512e8, half_2, 0x2);
GUEST_OFFSET(Frame_006512e8, half_4, 0x4);
GUEST_SIZE(Frame_006512e8, 0x8);

u32 AcPlayer_rec__spawn_tool_effect(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006512e8> frame;  // the original's stack frame
    u32 zf_1 = r3 == 0;
    frame->half_0 = 0;
    if (!zf_1) {
        zf_1 = r3 == 1u;
    }
    u32 r5_1 = r0 + 0x6b4u;  // (from the original)
    frame->half_2 = u16(r2);
    frame->half_4 = 0;
    if (!zf_1) {
        u32 r0_1 = EffectSet__spawn_variant_scaled(r5_1, r1, frame.at(0).addr(), 2u);
        return r0_1;
    }
    u32 r0_3 = slot_6_if_class_6(r0 + 0x3b4u, r1, r2, 0u);  // (from the original)
    u32 is_item_2 = Item__is_item(r0_3);
    u32 r2_3 = frame.at(0).addr();
    if (r3 != 0) {
        u32 r0_5 = EffectSet__spawn_variant_scaled(r5_1, r1, r2_3, is_item_2);
        return r0_5;
    }
    u32 r0_6 = EffectSet__spawn_scaled(r5_1, r1, r2_3, is_item_2);
    return r0_6;
}

}  // namespace d_006512e8
GUEST_EXPORT_FRAMED(0x006512e8, d_006512e8::AcPlayer_rec__spawn_tool_effect, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0065137c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Leaves the reach 5.4 (and 0.97 of it) in the float registers; the shared parameters.
namespace d_0065137c {


u32 tool_reach_5_4() {
    float S1_1 = 5.4f;
    float S0_1 = 0.97f * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x886878u;  // (from the original)
}

}  // namespace d_0065137c
GUEST_EXPORT(0x0065137c, d_0065137c::tool_reach_5_4);

// f_0065139c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Leaves the reach 5.4 (and 0.97 of it) in the float registers; the shared parameters.
namespace d_0065139c {


u32 tool_reach_5_4_b() {
    float S1_1 = 5.4f;
    float S0_1 = 0.97f * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x886878u;  // (from the original)
}

}  // namespace d_0065139c
GUEST_EXPORT(0x0065139c, d_0065139c::tool_reach_5_4_b);

// f_006513bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Leaves the reach 3.2 (and 0.97 of it) in the float registers; the shared parameters.
namespace d_006513bc {


u32 tool_reach_3_2() {
    float S1_1 = 3.2f;
    float S0_1 = 0.97f * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x886878u;  // (from the original)
}

}  // namespace d_006513bc
GUEST_EXPORT(0x006513bc, d_006513bc::tool_reach_3_2);

// f_0065141c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the player's motion: the locked motion 0xcb, or the normal or special one by the flags.
namespace d_0065141c {

struct __attribute__((packed)) Object_0065141c_0 {
    u8 unknown_0[0x8c5];  // (not used here)
    u8 byte_8c5;
    u8 unknown_8c6[0x1];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object_0065141c_0, byte_8c5, 0x8c5);
GUEST_OFFSET(Object_0065141c_0, byte_8c7, 0x8c7);

inline constexpr guest::Function<0x0064dc88, u32(u32, u32, u32, u32)> AcPlayer__update_state_12;
inline constexpr guest::Function<0x00656e5c, u32(u32, u32, u32, u32)> AcPlayer__start_run;
inline constexpr guest::Function<0x0068db1c, u32(u32, u32, u32, u32)> AcPlayer__play_animation;

struct __attribute__((packed)) Frame_0065141c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0065141c, word_0, 0x0);
GUEST_SIZE(Frame_0065141c, 0x8);

u32 AcPlayer_rec__play_motion(gptr<Object_0065141c_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4) {
    guest::StackFrameOf<Frame_0065141c> frame;  // the original's stack frame
    frame->word_0 = r3;
    if ((u32(arg0->byte_8c5) >> 5u & 1u) != 0) {
        frame->word_0 = 1;
        float S1_1 = 1.0f;
        float S0_1 = 0.0f;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S0;
        guest::cpu()->s[3] = S0;
        guest::cpu()->s[4] = S0;
        u32 r0_1 = AcPlayer__play_animation(arg0.addr(), 0xcbu, 1u, 0u);  // (from the original)
        return r0_1;
    }
    u32 r1_2 = arg0->byte_8c7;
    if ((r1_2 & 1u) == 0) {
        u32 r3_1 = frame->word_0;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        frame.release();
        return AcPlayer__update_state_12(arg0.addr(), r1_2, r2, r3_1);
    }
    u32 r3_2 = frame->word_0;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    frame.release();
    return AcPlayer__start_run(arg0.addr(), r1_2, r2, r3_2);
}

}  // namespace d_0065141c
GUEST_EXPORT(0x0065141c, d_0065141c::AcPlayer_rec__play_motion);

// f_006515b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the locked motion 0xcb.
namespace d_006515b0 {

inline constexpr guest::Function<0x0068db1c, u32(u32, u32, u32, u32)> AcPlayer__play_animation;

struct __attribute__((packed)) Frame_006515b0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006515b0, word_0, 0x0);
GUEST_SIZE(Frame_006515b0, 0x4);

void AcPlayer_rec__play_locked_motion(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<Frame_006515b0> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 1;
    float S1_1 = 1.0f;
    float S0_1 = 0.0f;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S0;
    guest::cpu()->s[3] = S0;
    guest::cpu()->s[4] = S0;
    AcPlayer__play_animation(guest::cpu()->r[0], 0xcbu, 1u, 0u);  // (from the original)
}

}  // namespace d_006515b0
GUEST_EXPORT_FRAMED(0x006515b0, d_006515b0::AcPlayer_rec__play_locked_motion, 0x4000);  // pushes {lr} first, as the original

// f_006515ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The record (+4) of the player of the slot; null without one.
namespace d_006515ec {

inline constexpr guest::Function<0x002fe8a8, u32(u32)> player_of_slot_index;

u32 player_record_of_slot(u32 r0) {
    u32 player_2 = player_of_slot_index(r0);
    if (player_2 != 0) {
        player_2 += 4u;
    }
    return player_2;
}

}  // namespace d_006515ec
GUEST_EXPORT_FRAMED(0x006515ec, d_006515ec::player_record_of_slot, 0x4010);  // pushes {r4, lr} first, as the original

// f_0065176c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In flagged scenes, stops the special BGM.
namespace d_0065176c {

struct __attribute__((packed)) Object_0065176c_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_0065176c_0, byte_171, 0x171);

inline guest::global<u32, 0x00886b5c> global_00886b5c;
inline constexpr guest::Function<0x0058a918, u32(u32, u32, u32, u32)> BgmQueue__push_kind;
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> return_constant_0x989bc0_;

void AcPlayer_rec__stop_flagged_bgm(gptr<Object_0065176c_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = return_constant_0x989bc0_(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = *global_00886b5c;
    frame.release();
    BgmQueue__push_kind(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0065176c
GUEST_EXPORT(0x0065176c, d_0065176c::AcPlayer_rec__stop_flagged_bgm);

// f_0065179c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For states whose motion allows it, moves the object by its target's motion, flagging it moved when it did.
namespace d_0065179c {

struct __attribute__((packed)) Local_0065179c_r1_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0065179c_r1_3, float_0, 0x0);
GUEST_OFFSET(Local_0065179c_r1_3, float_4, 0x4);

struct __attribute__((packed)) Local_0065179c_r4_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0065179c_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_0065179c_r4_1, float_4, 0x4);
GUEST_OFFSET(Local_0065179c_r4_1, float_8, 0x8);

inline constexpr guest::Function<0x0064f390, u32(u32, u32, u32, u32)> entry_10;
inline constexpr guest::Function<0x00766bf8, u32(u32, u32)> Target__position;

struct __attribute__((packed)) Frame_0065179c {
    float float_0;
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0065179c, float_0, 0x0);
GUEST_OFFSET(Frame_0065179c, float_4, 0x4);
GUEST_OFFSET(Frame_0065179c, float_8, 0x8);
GUEST_SIZE(Frame_0065179c, 0x10);

void SlotObject__apply_target_motion(gptr<SlotObject> slot_object, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<Frame_0065179c> frame;  // the original's stack frame
    u32 r0 = slot_object.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 state_1a9 = slot_object->state_1a9;
    if (state_1a9 >= 0xebu) {  // (from the original)
        return;
    }
    u32 r0_2 = entry_10(state_1a9, r1, r2, guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return;
    }
    u32 r0_3 = u32(*gptr<u8>(r0_2 + 6u)) & 3u;
    if (r0_3 >= 3u) {
        r0_3 = 0u;
    } else if (r0_3 == 2u) {
        goto L_6517f0;
    }
    res_1 = u32(slot_object->flags_171) >> 5u & 1u;
    zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = r0_3 == 1u;
    }
    if (zf_1) {
        guest::cpu()->r[1] = res_1;
        return;
    }
L_6517f0:;
    Target__position(frame.at(0).addr(), r0 + 0x4fcu);  // (from the original)
    gptr<Local_0065179c_r1_3> r1_3 = gptr<Local_0065179c_r1_3>(frame.at(4).addr());
    u32 r2_1 = u32(slot_object->flags_8c5) & ~8u;
    slot_object->flags_8c5 = u8(r2_1);
    float S0_2 = frame->float_0;
    float S1_2 = r1_3->float_0;
    float S2_1 = r1_3->float_4;
    gptr<Local_0065179c_r4_1> r4_1 = gptr<Local_0065179c_r4_1>(r0 + 0x14u);  // (from the original)
    u32 r1_4 = std::bit_cast<u32>(fabsf(S0_2 * S0_2 + S1_2 * S1_2 + S2_1 * S2_1));
    if (r1_4 + 0xcc000000u != 0 && s32(r1_4) >= 0x34000000) {  // (from the original)
        r1_4 = r2_1 | 8u;
        *gptr<u8>(r0 + 0x8c5u) = u8(r1_4);  // (from the original)
    }
    float S1_3 = r4_1->float_0;
    float S2_2 = r4_1->float_4;
    float S3_1 = r4_1->float_8;
    r4_1->float_0 = S1_3 + frame->float_0;
    r4_1->float_4 = S2_2 + frame->float_4;
    float S0_3 = S3_1 + frame->float_8;
    r4_1->float_8 = S0_3;
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
}

}  // namespace d_0065179c
GUEST_EXPORT_FRAMED(0x0065179c, d_0065179c::SlotObject__apply_target_motion, 0x4010);  // pushes {r4, lr} first, as the original

// f_006518d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x92 with the word and the camera's angle.
namespace d_006518d8 {

struct __attribute__((packed)) Object_006518d8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_006518d8_1, word_0, 0x0);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x0065473c, u32(u32, u32)> camera_angle;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer_rec__request_state_92(u32 player, gptr<Object_006518d8_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 params_2 = state_params_with_8bc(player, arg1.addr(), r2, r3);
    *gptr<u32>(params_2 + 0xeu) = arg1->word_0;  // (from the original)
    u32 r1_1 = params_2 + 0x13u;  // (from the original)
    *gptr<u8>(r1_1) = 0;
    u32 r0_2 = camera_angle(0u, r1_1);
    *gptr<u8>((params_2 + 0xeu) + 4u) = u8(u32(s32(r0_2) >> 8));  // (from the original)
    frame.release();
    return AcPlayer_rec__change_state(player, 0x92u, params_2, 0u);  // (from the original)
}

}  // namespace d_006518d8
GUEST_EXPORT(0x006518d8, d_006518d8::AcPlayer_rec__request_state_92);

// f_00651928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x20 with the byte and the fixed-point value.
namespace d_00651928 {

inline constexpr guest::Function<0x005d4180, u32(u32)> store_fixed_point;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

void AcPlayer_rec__request_state_20(u32 player, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 params_2 = state_params_with_8bc(player, r1, r2, r3);
    u32 ea_1 = params_2 + 0xeu;  // (from the original)
    *gptr<u8>(ea_1) = u8(r1);
    float S0_1 = float(r2);
    guest::cpu()->s[0] = S0_1;
    store_fixed_point(ea_1 + 1u);
    frame.release();
    AcPlayer_rec__change_state(player, 0x20u, params_2, 0u);
    return;  // (from the original)
}

}  // namespace d_00651928
GUEST_EXPORT(0x00651928, d_00651928::AcPlayer_rec__request_state_20);

// f_006519c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Turns the x angle toward the target over the frames left (+0x5b4), one step per call.
namespace d_006519c8 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
    u8 unknown_2e[0x14c];  // (not used here)
    u8 byte_17a;
    u8 unknown_17b[0x439];  // (not used here)
    u16 half_5b4;
};
GUEST_OFFSET(SlotObject, half_2c, 0x2c);
GUEST_OFFSET(SlotObject, byte_17a, 0x17a);
GUEST_OFFSET(SlotObject, half_5b4, 0x5b4);

struct __attribute__((packed)) Local_006519c8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006519c8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006519c8_ea_1, word_4, 0x4);


struct __attribute__((packed)) Frame_006519c8 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u16 half_4;
    u8 unknown_6[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006519c8, half_4, 0x4);
GUEST_SIZE(Frame_006519c8, 0x8);

void SlotObject__turn_x_over_frames(gptr<SlotObject> slot_object, u32 r1, float S0, float S1) {
    guest::StackFrameOf<Frame_006519c8> frame;  // the original's stack frame
    gptr<Local_006519c8_ea_1> ea_1 = gptr<Local_006519c8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = slot_object.addr();
    ea_1->word_4 = r1;
    u32 r3_1 = sxth(u32(frame->half_4) - u32(slot_object->half_2c));
    slot_object->byte_17a = u8(u32(slot_object->byte_17a) & ~8u);
    u32 r1_1 = slot_object->half_5b4;
    if (r1_1 == 0) {
        slot_object->half_2c = frame->half_4;
        return;
    }
    float S1_1 = float(s32(r3_1));
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(S1_1 / float(r1_1)));
    slot_object->half_2c = u16(std::bit_cast<u32>(S0_1) + u32(slot_object->half_2c));
    u32 r0_1 = slot_object->half_5b4;
    if (r0_1 == 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    slot_object->half_5b4 = u16(r0_1 >= 1u ? r0_1 - 1u : 0u);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006519c8
GUEST_EXPORT(0x006519c8, d_006519c8::SlotObject__turn_x_over_frames);

// f_006531d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the object's collision center and radius and registers its collision shape.
namespace d_006531d0 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
    u8 unknown_1ad[0x39b];  // (not used here)
    u32 word_548;
    u32 word_54c;
    u32 word_550;
    float float_554;
    float float_558;
    u8 unknown_55c[0x34];  // (not used here)
    u32 word_590;
    u8 unknown_594[0xc];  // (not used here)
    u8 byte_5a0;
    u8 unknown_5a1[0x3];  // (not used here)
    u32 word_5a4;
    u32 word_5a8;
};
GUEST_OFFSET(SlotObject, byte_1ac, 0x1ac);
GUEST_OFFSET(SlotObject, word_548, 0x548);
GUEST_OFFSET(SlotObject, word_54c, 0x54c);
GUEST_OFFSET(SlotObject, word_550, 0x550);
GUEST_OFFSET(SlotObject, float_554, 0x554);
GUEST_OFFSET(SlotObject, float_558, 0x558);
GUEST_OFFSET(SlotObject, word_590, 0x590);
GUEST_OFFSET(SlotObject, byte_5a0, 0x5a0);
GUEST_OFFSET(SlotObject, word_5a4, 0x5a4);
GUEST_OFFSET(SlotObject, word_5a8, 0x5a8);

struct __attribute__((packed)) Object_006531d0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006531d0_1, word_0, 0x0);
GUEST_OFFSET(Object_006531d0_1, word_4, 0x4);
GUEST_OFFSET(Object_006531d0_1, word_8, 0x8);

inline constexpr guest::Function<0x006aca10, u32(u32, u32, u32, u32)> Collider__set_triangle;

struct __attribute__((packed)) Frame_006531d0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_006531d0, word_0, 0x0);
GUEST_OFFSET(Frame_006531d0, word_4, 0x4);
GUEST_OFFSET(Frame_006531d0, word_8, 0x8);
GUEST_SIZE(Frame_006531d0, 0xc);

u32 SlotObject__set_collision(gptr<SlotObject> slot_object, gptr<Object_006531d0_1> arg1, float S0, float S1) {
    guest::StackFrameOf<Frame_006531d0> frame;  // the original's stack frame
    slot_object->word_548 = arg1->word_0;
    slot_object->word_54c = arg1->word_4;
    slot_object->word_550 = arg1->word_8;
    slot_object->float_554 = S0;
    slot_object->float_558 = S1;
    frame->word_0 = 0;
    frame->word_8 = slot_object.addr() + 0x59cu;  // (from the original)
    frame->word_4 = 0;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    Collider__set_triangle(slot_object.addr() + 0x55cu, slot_object.addr() + 0x540u, 0x10u, ~0x80000000u);  // (from the original)
    slot_object->word_590 = 0;
    u32 r0_2 = slot_object->byte_1ac;
    slot_object->byte_5a0 = u8(r0_2);
    slot_object->word_5a4 = 0;
    slot_object->word_5a8 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_2;
}

}  // namespace d_006531d0
GUEST_EXPORT_FRAMED(0x006531d0, d_006531d0::SlotObject__set_collision, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00653724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Remembers the two bytes and spawns the actor with the parameters when the stage exists.
namespace d_00653724 {

inline constexpr u32 spawn_bytes_address = 0x00950368u;
inline guest::global<u16, 0x00886efa> global_00886efa;
inline guest::global<u8, 0x0094dea0> global_0094dea0;
inline guest::global<u8, 0x0094dea1> global_0094dea1;
inline guest::global<u32, 0x00950368> spawn_bytes;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> StringPool__find_message_mode_2;

struct __attribute__((packed)) Frame_00653724 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00653724, word_0, 0x0);
GUEST_SIZE(Frame_00653724, 0x4);

u32 spawn_actor_with_bytes(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00653724> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r3_1 = *frame.at<u32>(0x10);  // (from the original)
    *global_0094dea0 = u8(r0);
    *global_0094dea1 = u8(r3_1);
    u32 talk = *spawn_bytes;
    if (talk == 0) {
        guest::cpu()->r[1] = talk;
        return 0u;
    }
    frame->word_0 = r2;
    u32 string_pool = *global_00886efa;
    u32 r0_2 = StringPool__find_message_mode_2(string_pool, talk, r3, r1);
    return r0_2;
}

}  // namespace d_00653724
GUEST_EXPORT_FRAMED(0x00653724, d_00653724::spawn_actor_with_bytes, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006537b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In flagged scenes, sets the BGM's kind 6 (when asked), pushes the special BGM once and fades it when asked.
namespace d_006537b8 {

struct __attribute__((packed)) Object_006537b8_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x7];  // (not used here)
    u8 byte_179;
};
GUEST_OFFSET(Object_006537b8_0, byte_171, 0x171);
GUEST_OFFSET(Object_006537b8_0, byte_179, 0x179);

struct __attribute__((packed)) Local_006537b8_r4_1 {
    u8 byte_0;
    u8 unknown_1[0x7];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_006537b8_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_006537b8_r4_1, byte_8, 0x8);

inline guest::global<u32, 0x00886b60> global_00886b60;
inline constexpr guest::Function<0x0058a3c4, u32(u32, u32, u32)> push_bgm_9e;
inline constexpr guest::Function<0x0058a72c, u32(u32, u32)> fade_bgm_9e;
inline constexpr guest::Function<0x0058a8e0, u32(u32, u32)> bgm_set_kind_6;
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> return_constant_0x989bc0_;

void AcPlayer_rec__start_flagged_bgm_b(gptr<Object_006537b8_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = r1;
    gptr<Local_006537b8_r4_1> r4_1 = gptr<Local_006537b8_r4_1>(arg0.addr() + 0x171u);  // (from the original)
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        if (r2 != 0) {
            u32 r1_1 = u32(arg0->byte_179) | 4u;
            arg0->byte_179 = u8(r1_1);
            u32 r0_2 = return_constant_0x989bc0_(r0_1, r1_1, r2, guest::cpu()->r[3]);
            bgm_set_kind_6(r0_2, 5u);
            r2 = guest::cpu()->r[2];
        }
        r1 = r4_1->byte_8;
        u32 r0_3 = r1 >> 5u & 1u;
        if (r0_3 == 0) {
            u32 r1_2 = r1 | 0x20u;  // (from the original)
            r4_1->byte_8 = u8(r1_2);
            u32 r0_4 = return_constant_0x989bc0_(r0_3, r1_2, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            push_bgm_9e(r0_4, guest::cpu()->r[1], r2);
            r1 = guest::cpu()->r[1];
        }
        if (r5_1 != 0) {
            u32 r0_5 = u32(r4_1->byte_0) >> 5u & 1u;
            if (r0_5 != 0) {
                u32 r0_6 = return_constant_0x989bc0_(r0_5, r1, r2, guest::cpu()->r[3]);
                u32 r1_4 = *global_00886b60;
                frame.release();
                fade_bgm_9e(r0_6, r1_4);
                return;
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006537b8
GUEST_EXPORT(0x006537b8, d_006537b8::AcPlayer_rec__start_flagged_bgm_b);

// f_00653888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x81 with the position, angle and two bytes.
namespace d_00653888 {

struct __attribute__((packed)) Params {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Params, byte_13, 0x13);
GUEST_OFFSET(Params, byte_14, 0x14);

inline constexpr guest::Function<0x005d41fc, u32(u32, u32)> float3_xz_to_short2_b;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer_rec__request_state_81(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    gptr<Params> params_2 = gptr<Params>(state_params_with_8bc(player, r1, r2, r3));
    u32 r4_1 = params_2.addr() + 0xeu;  // (from the original)
    float3_xz_to_short2_b(r4_1, r1);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(r2) >> 8));
    params_2->byte_13 = u8(r3);
    params_2->byte_14 = u8(r5_1);
    frame.release();
    return AcPlayer_rec__change_state(player, 0x81u, params_2.addr(), 0u);  // (from the original)
}

}  // namespace d_00653888
GUEST_EXPORT(0x00653888, d_00653888::AcPlayer_rec__request_state_81);

// f_006538e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Turns the object toward the angle (the given one or its stored one, +0x8c2).
namespace d_006538e0 {

struct __attribute__((packed)) Object_006538e0_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_006538e0_1, half_0, 0x0);

inline constexpr guest::Function<0x006547e4, u32(u32, u32, u32, u32)> SlotObject__turn_y_toward;

u32 SlotObject__turn_to_angle(u32 slot_object, gptr<Object_006538e0_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    if (arg1.addr() != 0) {
        *frame.at<u32>(0) = 0x100;  // (from the original)
        u32 r1_1 = s16(arg1->half_0);
        u32 r0_1 = SlotObject__turn_y_toward(slot_object, r1_1, 6u, 0x1000u);  // (from the original)
        return r0_1;
    }
    u32 r1_3 = uxth(u32(*gptr<u16>(slot_object + 0x8c2u)));  // (from the original)
    *frame.at<u16>(0) = u16(r1_3);
    *frame.at<u32>(0) = 0x100;  // (from the original)
    u32 r0_2 = SlotObject__turn_y_toward(slot_object, sxth(uxth(r1_3)), 6u, 0x1000u);  // (from the original)
    return r0_2;
}

}  // namespace d_006538e0
GUEST_EXPORT_FRAMED(0x006538e0, d_006538e0::SlotObject__turn_to_angle, 0x4000);  // pushes {lr} first, as the original

// f_00653f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00653f24 {

struct __attribute__((packed)) AcPlayerRec {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x141];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x8];  // (not used here)
    u8 byte_17a;
    u8 unknown_17b[0xe9];  // (not used here)
    u32 word_264;
    u8 unknown_268[0x6f4];  // (not used here)
    u16 half_95c;
    u16 half_95e;
    u8 unknown_960[0x18];  // (not used here)
    u8 byte_978;
};
GUEST_OFFSET(AcPlayerRec, half_2e, 0x2e);
GUEST_OFFSET(AcPlayerRec, byte_171, 0x171);
GUEST_OFFSET(AcPlayerRec, byte_17a, 0x17a);
GUEST_OFFSET(AcPlayerRec, word_264, 0x264);
GUEST_OFFSET(AcPlayerRec, half_95c, 0x95c);
GUEST_OFFSET(AcPlayerRec, half_95e, 0x95e);
GUEST_OFFSET(AcPlayerRec, byte_978, 0x978);

struct __attribute__((packed)) Local_00653f24_r5_1 {
    u8 byte_0;
    u8 unknown_1[0x5];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Local_00653f24_r5_1, byte_0, 0x0);
GUEST_OFFSET(Local_00653f24_r5_1, byte_6, 0x6);

struct __attribute__((packed)) Local_00653f24_r6_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_00653f24_r6_2, half_0, 0x0);
GUEST_OFFSET(Local_00653f24_r6_2, byte_2, 0x2);
GUEST_OFFSET(Local_00653f24_r6_2, byte_3, 0x3);

inline constexpr guest::Function<0x0064f368, u32(u32, u32)> ScrollState__reset;
inline constexpr guest::Function<0x006540d8, u32(u32, u32, u32, u32)> SlotObject__set_target_x;
inline constexpr guest::Function<0x00654230, u32(u32, u32, u32, u32)> AcPlayer__start_talk_state;
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> Model__joint_matrix;

u32 AcPlayer_rec__state_13_exit(gptr<AcPlayerRec> ac_player_rec, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r6_1 = r1;
    gptr<Local_00653f24_r5_1> r5_1 = gptr<Local_00653f24_r5_1>(ac_player_rec.addr() + 0x171u);  // (from the original)
    u32 r0_1 = u32(ac_player_rec->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        *frame.at<u16>(0) = 0;
        SlotObject__set_target_x(ac_player_rec.addr(), *frame.at<u32>(0), 0xf0u, r3);  // (from the original)
        u32 zf_1 = r6_1 == 0xeu;  // (from the original)
        ac_player_rec->byte_17a = u8(u32(ac_player_rec->byte_17a) & ~0x10u);  // (from the original)
        r1 = ac_player_rec->half_2e;
        if (!zf_1) {
            zf_1 = r6_1 == 0x1cu;  // (from the original)
        }
        ac_player_rec->half_95c = u16(r1);
        ac_player_rec->half_95e = 0;
        if (!zf_1 && r6_1 != 0x9fu && ac_player_rec->byte_978 != 0) {  // (from the original)
            ScrollState__reset(ac_player_rec.addr(), r1);
            r1 = guest::cpu()->r[1];
        }
        gptr<Local_00653f24_r6_2> r6_2 = gptr<Local_00653f24_r6_2>(ac_player_rec.addr() + 0x97au);  // (from the original)
        r6_2->half_0 = 0xa;  // (from the original)
        r6_2->byte_2 = 0;
        r6_2->byte_3 = 0;
        r0_1 = u32(r5_1->byte_0) >> 5u & 1u;
        if (r0_1 != 0) {
            r0_1 = u32(r5_1->byte_6) >> 4u & 1u;
            if (r0_1 == 0) {
                u32 r1_2 = ac_player_rec.addr() + 0x43cu;  // (from the original)
                Model__joint_matrix(ac_player_rec.addr() + 0x1b4u, r1_2, ac_player_rec->word_264, 1u);  // (from the original)
                u32 r3_2 = *frame.at<u32>(0);
                frame.release();
                return AcPlayer__start_talk_state(ac_player_rec.addr(), r1_2, 0u, r3_2);
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00653f24
GUEST_EXPORT(0x00653f24, d_00653f24::AcPlayer_rec__state_13_exit);

// f_006540d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the target x angle (+0x958) and step and starts turning; true when already there.
namespace d_006540d8 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
    u8 unknown_2e[0x14c];  // (not used here)
    u8 byte_17a;
    u8 unknown_17b[0x7dd];  // (not used here)
    u16 half_958;
    u16 half_95a;
};
GUEST_OFFSET(SlotObject, half_2c, 0x2c);
GUEST_OFFSET(SlotObject, byte_17a, 0x17a);
GUEST_OFFSET(SlotObject, half_958, 0x958);
GUEST_OFFSET(SlotObject, half_95a, 0x95a);

struct __attribute__((packed)) Local_006540d8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006540d8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006540d8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006540d8_ea_1, word_8, 0x8);


struct __attribute__((packed)) Frame_006540d8 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u16 half_4;
    u8 unknown_6[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006540d8, half_4, 0x4);
GUEST_SIZE(Frame_006540d8, 0xc);

u32 SlotObject__set_target_x(gptr<SlotObject> slot_object, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006540d8> frame;  // the original's stack frame
    u32 r0_1 = 0;
    gptr<Local_006540d8_ea_1> ea_1 = gptr<Local_006540d8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = slot_object.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    slot_object->half_958 = frame->half_4;
    slot_object->half_95a = u16(r2);
    u32 r12_1 = u32(slot_object->byte_17a) | 8u;
    slot_object->byte_17a = u8(r12_1);
    if (u32(s16(slot_object->half_958)) == u32(s16(slot_object->half_2c))) {
        slot_object->byte_17a = u8(r12_1 & ~8u);
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = slot_object.addr() + 0x171u;  // (from the original)
    return r0_1;
}

}  // namespace d_006540d8
GUEST_EXPORT(0x006540d8, d_006540d8::SlotObject__set_target_x);

// f_00654170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the tool's animation (index below 0x41, with its frame count) and its state.
namespace d_00654170 {

struct __attribute__((packed)) Object_00654170_0 {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
    u8 unknown_175[0x445];  // (not used here)
    u16 half_5ba;
};
GUEST_OFFSET(Object_00654170_0, byte_174, 0x174);
GUEST_OFFSET(Object_00654170_0, half_5ba, 0x5ba);

inline constexpr u32 tool_animation_state_address = 0x00951cbcu;
inline constexpr guest::Function<0x001cf9c4, u32(u32, u32, u32, u32)> AcPlayer__play_motion;
inline constexpr guest::Function<0x00268db4, u32(u32, u32, u32, u32)> EmoticonAction__start;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;

struct __attribute__((packed)) Frame_00654170 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00654170, word_0, 0x0);
GUEST_OFFSET(Frame_00654170, word_4, 0x4);
GUEST_OFFSET(Frame_00654170, word_8, 0x8);
GUEST_SIZE(Frame_00654170, 0x10);

void AcPlayer_rec__start_tool_animation(gptr<Object_00654170_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<Frame_00654170> frame;  // the original's stack frame
    EmoticonAction__start(arg0.addr() + 0xcfcu, r1, 0xcu, r3);  // (from the original)
    u32 r0_3 = slot_7_if_class_7(arg0.addr() + 0x3b4u);  // (from the original)
    frame->word_0 = 1;
    frame->word_4 = 0;
    float S0_2 = 8.0f;
    frame->word_8 = 0;
    guest::cpu()->s[0] = S0_2;
    AcPlayer__play_motion(arg0.addr() + 0x1b4u, r0_3, 0u, 0u);  // (from the original)
    arg0->half_5ba = u16(*gptr<u32>((r1 >= 0x41u ? tool_animation_state_address : r1 * 0xcu + tool_animation_state_address) + 8u));  // (from the original)
    *gptr<u8>(arg0.addr() + 0x1554u) = u8(r1);  // (from the original)
    *gptr<u16>((0x1554u | u32(s32(0x1554u) >> 0xb)) + arg0.addr()) = 0;  // (from the original)
    u32 r1_2 = u32(arg0->byte_174) & ~0x40u;  // (from the original)
    arg0->byte_174 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_00654170
GUEST_EXPORT_FRAMED(0x00654170, d_00654170::AcPlayer_rec__start_tool_animation, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006542dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless muted, plays the step sound of the ground (the given one or the one under the object) and marks it busy.
namespace d_006542dc {

struct __attribute__((packed)) Local_006542dc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006542dc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006542dc_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00277e1c, u32(u32, u32, u32)> AcFtr__start_animation;
inline constexpr guest::Function<0x005ce2e8, u32(u32, u32, u32, u32)> word_95cf28;
inline constexpr guest::Function<0x00659674, u32(u32, u32, u32, u32)> GrassWear__mark_step;
inline constexpr guest::Function<0x006c6fe8, u32(u32, u32, u32, u32)> terrain_kind_at_position;
inline constexpr guest::Function<0x006c87ac, u32(u32, u32)> cell_kind_at;

u32 SlotObject__play_step_sound(gptr<SlotObject> slot_object, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = slot_object.addr();
    u32 r0_1 = r1;
    r1 = u32(slot_object->flags_66) >> 5u & 1u;
    if (r1 == 0) {
        u32 r7 = r0 + 0x5ecu;  // (from the original)
        u32 grass_wear = r0 + 0x424u;  // (from the original)
        u32 r5 = r0 + 0x171u;  // (from the original)
        if (r0_1 == 0xffu) {  // (from the original)
            goto L_654364;
        }
        r0_1 = word_95cf28(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (s32(r0_1) < 0) {
            return r0_1;
        }
        r1 = r0_1;
        r2 = 0xffu;  // (from the original)
        r0_1 = u32(slot_object->flags_66) >> 5u & 1u;
        if (r0_1 != 0) {
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
L_65433c:;
        AcFtr__start_animation(r7, r1, r2);
        *gptr<u8>(r5 + 2u) = u8(u32(*gptr<u8>(r5 + 2u)) | 2u | 4u);
        frame.release();
        return GrassWear__mark_step(grass_wear, 1u, r2, guest::cpu()->r[3]);
L_654364:;
        r0_1 = terrain_kind_at_position(r0 + 0x14u, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_1 + 1u != 0) {
            gptr<Local_006542dc_ea_1> ea_1 = gptr<Local_006542dc_ea_1>(r0 + 0x47cu);  // (from the original)
            u32 cell_kind = cell_kind_at(ea_1->word_0, ea_1->word_4);
            r2 = cell_kind;
            r1 = r0_1;
            r0_1 = u32(slot_object->flags_66) >> 5u & 1u;
            if (r0_1 == 0) {
                guest::preempt();
                goto L_65433c;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006542dc
GUEST_EXPORT(0x006542dc, d_006542dc::SlotObject__play_step_sound);

// f_006543a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless muted, plays the sound and marks the object busy.
namespace d_006543a4 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
    u8 unknown_67[0x10c];  // (not used here)
    u8 byte_173;
};
GUEST_OFFSET(SlotObject, byte_66, 0x66);
GUEST_OFFSET(SlotObject, byte_173, 0x173);

inline constexpr guest::Function<0x00277e1c, u32(u32, u32, u32, u32)> AcFtr__start_animation;
inline constexpr guest::Function<0x00659674, u32(u32, u32, u32, u32)> GrassWear__mark_step;

void SlotObject__play_sound(gptr<SlotObject> slot_object, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if ((u32(slot_object->byte_66) >> 5u & 1u) != 0) {
        return;
    }
    AcFtr__start_animation(slot_object.addr() + 0x5ecu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    slot_object->byte_173 = u8(u32(slot_object->byte_173) | 2u | 4u);
    frame.release();
    GrassWear__mark_step(slot_object.addr() + 0x424u, 1u, r2, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_006543a4
GUEST_EXPORT(0x006543a4, d_006543a4::SlotObject__play_sound);

// f_006543f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless muted, plays the second step sound of the ground and marks it busy.
namespace d_006543f0 {

struct __attribute__((packed)) Local_006543f0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006543f0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006543f0_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00277e54, u32(u32, u32, u32)> AcFtr__start_animation_b;
inline constexpr guest::Function<0x005ce2e8, u32(u32, u32, u32, u32)> word_95cf28;
inline constexpr guest::Function<0x00659674, u32(u32, u32, u32, u32)> GrassWear__mark_step;
inline constexpr guest::Function<0x006c6fe8, u32(u32, u32, u32, u32)> terrain_kind_at_position;
inline constexpr guest::Function<0x006c87ac, u32(u32, u32)> cell_kind_at;

void SlotObject__play_step_sound_b(gptr<SlotObject> slot_object, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = slot_object.addr();
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = u32(slot_object->flags_66) >> 5u & 1u;
    if (r1_1 == 0) {
        u32 r7 = r0 + 0x5ecu;  // (from the original)
        u32 grass_wear = r0 + 0x424u;  // (from the original)
        u32 r5 = r0 + 0x171u;  // (from the original)
        if (r1 == 0xffu) {  // (from the original)
            goto L_654478;
        }
        r0_1 = word_95cf28(r1, r1_1, r2, guest::cpu()->r[3]);
        if (s32(r0_1) < 0) {
            return;
        }
        r1 = r0_1;
        r2 = 0xffu;  // (from the original)
        res_1 = u32(slot_object->flags_66) >> 5u & 1u;
        if (res_1 != 0) {
            return;
        }
L_654450:;
        AcFtr__start_animation_b(r7, r1, r2);
        *gptr<u8>(r5 + 2u) = u8(u32(*gptr<u8>(r5 + 2u)) | 2u | 4u);
        frame.release();
        GrassWear__mark_step(grass_wear, 1u, r2, guest::cpu()->r[3]);
        return;
L_654478:;
        u32 r0_3 = terrain_kind_at_position(r0 + 0x14u, r1_1, r2, guest::cpu()->r[3]);  // (from the original)
        if (r0_3 + 1u != 0) {
            gptr<Local_006543f0_ea_1> ea_1 = gptr<Local_006543f0_ea_1>(r0 + 0x47cu);  // (from the original)
            u32 cell_kind = cell_kind_at(ea_1->word_0, ea_1->word_4);
            r2 = cell_kind;
            r1 = r0_3;
            if ((u32(slot_object->flags_66) >> 5u & 1u) == 0) {
                guest::preempt();
                goto L_654450;
            }
        }
    }
}

}  // namespace d_006543f0
GUEST_EXPORT(0x006543f0, d_006543f0::SlotObject__play_step_sound_b);

// f_006544b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless muted, plays the second sound and marks the object busy.
namespace d_006544b8 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
    u8 unknown_67[0x10c];  // (not used here)
    u8 byte_173;
};
GUEST_OFFSET(SlotObject, byte_66, 0x66);
GUEST_OFFSET(SlotObject, byte_173, 0x173);

inline constexpr guest::Function<0x00277e54, u32(u32, u32, u32, u32)> AcFtr__start_animation_b;
inline constexpr guest::Function<0x00659674, u32(u32, u32, u32, u32)> GrassWear__mark_step;

u32 SlotObject__play_sound_b(gptr<SlotObject> slot_object, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = u32(slot_object->byte_66) >> 5u & 1u;
    if (r0_1 != 0) {
        return r0_1;
    }
    AcFtr__start_animation_b(slot_object.addr() + 0x5ecu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    slot_object->byte_173 = u8(u32(slot_object->byte_173) | 2u | 4u);
    frame.release();
    return GrassWear__mark_step(slot_object.addr() + 0x424u, 1u, r2, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006544b8
GUEST_EXPORT(0x006544b8, d_006544b8::SlotObject__play_sound_b);

// f_0065472c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The point on the circle of radius 12 around the position at the angle.
namespace d_0065472c {

inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> point_on_circle;

void point_on_circle_12() {
    float S0_1 = 12.0f;
    guest::cpu()->s[0] = S0_1;
    point_on_circle(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], 1u);
}

}  // namespace d_0065472c
GUEST_EXPORT(0x0065472c, d_0065472c::point_on_circle_12);

// f_006547d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The items (+0xa) of the player of the slot; null without one.
namespace d_006547d0 {

inline constexpr guest::Function<0x002fe8a8, u32(u32)> player_of_slot_index;

u32 player_items_of_slot(u32 r0) {
    u32 player_2 = player_of_slot_index(r0);
    if (player_2 != 0) {
        player_2 += 0xau;  // (from the original)
    }
    return player_2;
}

}  // namespace d_006547d0
GUEST_EXPORT_FRAMED(0x006547d0, d_006547d0::player_items_of_slot, 0x4010);  // pushes {r4, lr} first, as the original

// f_006547e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Turns the y angle toward the angle (fraction, minimum and maximum step) and stops the automatic turn; true when
// there.
namespace d_006547e4 {

struct __attribute__((packed)) SlotObject {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x14a];  // (not used here)
    u8 byte_17a;
    u8 unknown_17b[0x7e1];  // (not used here)
    u16 half_95c;
    u16 half_95e;
};
GUEST_OFFSET(SlotObject, half_2e, 0x2e);
GUEST_OFFSET(SlotObject, byte_17a, 0x17a);
GUEST_OFFSET(SlotObject, half_95c, 0x95c);
GUEST_OFFSET(SlotObject, half_95e, 0x95e);

inline constexpr guest::Function<0x0056af2c, u32(u32, u32, u32, u32)> AngleS16__approach_min;

struct __attribute__((packed)) Frame_006547e4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006547e4, word_0, 0x0);
GUEST_SIZE(Frame_006547e4, 0x4);

u32 SlotObject__turn_y_toward(gptr<SlotObject> slot_object, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006547e4> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(0x10);  // (from the original)
    AngleS16__approach_min(slot_object.addr() + 0x2eu, r1, r2, r3);  // (from the original)
    slot_object->byte_17a = u8(u32(slot_object->byte_17a) & ~0x10u);  // (from the original)
    slot_object->half_95c = slot_object->half_2e;
    slot_object->half_95e = 0;
    u32 r0_2 = u32(s16(slot_object->half_2e)) == r1;
    guest::cpu()->r[1] = 0u;
    return r0_2;
}

}  // namespace d_006547e4
GUEST_EXPORT_FRAMED(0x006547e4, d_006547e4::SlotObject__turn_y_toward, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0065487c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In flagged scenes, requests mode 3 of the camera controller and marks it (bit 7 of +0x178).
namespace d_0065487c {

struct __attribute__((packed)) Object_0065487c_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x6];  // (not used here)
    u8 byte_178;
};
GUEST_OFFSET(Object_0065487c_0, byte_171, 0x171);
GUEST_OFFSET(Object_0065487c_0, byte_178, 0x178);

inline constexpr guest::Function<0x0068ec98, u32(u32)> CameraCtl__request_mode_3;

void AcPlayer_rec__request_camera_mode_3(gptr<Object_0065487c_0> arg0) {
    u32 r4_1 = arg0.addr() + 0x171u;  // (from the original)
    if ((u32(arg0->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    CameraCtl__request_mode_3(arg0.addr());
    arg0->byte_178 = u8(u32(arg0->byte_178) | 0x80u);  // (from the original)
}

}  // namespace d_0065487c
GUEST_EXPORT_FRAMED(0x0065487c, d_0065487c::AcPlayer_rec__request_camera_mode_3, 0x4010);  // pushes {r4, lr} first, as the original

// f_006548ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes to `state` unless the player is in it already (true then).
namespace d_006548ac {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

u32 AcPlayer_rec__enter_state(gptr<SlotObject> slot_object, u32 state) {
    if (slot_object->state_1a9 == state) {
        return 1u;
    }
    return AcPlayer_rec__change_state(slot_object.addr(), state, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006548ac
GUEST_EXPORT(0x006548ac, d_006548ac::AcPlayer_rec__enter_state);

// f_006548c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x87 with the position, angle and three bytes.
namespace d_006548c4 {

struct __attribute__((packed)) Params {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Params, byte_13, 0x13);
GUEST_OFFSET(Params, byte_14, 0x14);

struct __attribute__((packed)) Local_006548c4_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006548c4_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_006548c4_r1_1, word_4, 0x4);

struct __attribute__((packed)) Local_006548c4_r4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x2];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_006548c4_r4_1, byte_4, 0x4);
GUEST_OFFSET(Local_006548c4_r4_1, byte_7, 0x7);

inline constexpr guest::Function<0x005d41fc, u32(u32, u32)> float3_xz_to_short2_b;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) Frame_006548c4 {
    u8 unknown_0[0x20];  // (not read or written by name)
    u32 word_20;
    u8 unknown_24[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006548c4, word_20, 0x20);
GUEST_SIZE(Frame_006548c4, 0x28);

u32 AcPlayer_rec__request_state_87(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006548c4> frame;  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    frame->word_20 = r12;
    gptr<Local_006548c4_r1_1> r1_1 = gptr<Local_006548c4_r1_1>(frame.at(0x28).addr());  // (from the original)
    u32 r5_1 = r1_1->word_0;
    u32 r6_1 = r1_1->word_4;
    gptr<Params> params_2 = gptr<Params>(state_params_with_8bc(player, r1_1.addr(), r2, r3));
    gptr<Local_006548c4_r4_1> r4_1 = gptr<Local_006548c4_r4_1>(params_2.addr() + 0xeu);  // (from the original)
    float3_xz_to_short2_b(r4_1.addr(), r1);
    r4_1->byte_4 = u8(u32(s32(r2) >> 8));
    params_2->byte_13 = u8(r3);
    params_2->byte_14 = u8(r5_1);
    r4_1->byte_7 = u8(r6_1);
    frame.release();
    return AcPlayer_rec__change_state(player, 0x87u, params_2.addr(), 0u);  // (from the original)
}

}  // namespace d_006548c4
GUEST_EXPORT(0x006548c4, d_006548c4::AcPlayer_rec__request_state_87);

// f_00654924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x44 with the kind, position, angle and two bytes.
namespace d_00654924 {

struct __attribute__((packed)) Object_00654924_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00654924_2, word_0, 0x0);
GUEST_OFFSET(Object_00654924_2, word_4, 0x4);
GUEST_OFFSET(Object_00654924_2, word_8, 0x8);

struct __attribute__((packed)) Object_00654924_3 {
    u16 half_0;
};
GUEST_OFFSET(Object_00654924_3, half_0, 0x0);

struct __attribute__((packed)) Local_00654924_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00654924_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00654924_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00654924_r4_1 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x5];  // (not used here)
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_00654924_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_00654924_r4_1, byte_1, 0x1);
GUEST_OFFSET(Local_00654924_r4_1, byte_7, 0x7);
GUEST_OFFSET(Local_00654924_r4_1, byte_8, 0x8);

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) Frame_00654924 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_00654924, word_0, 0x0);
GUEST_OFFSET(Frame_00654924, word_4, 0x4);
GUEST_OFFSET(Frame_00654924, word_8, 0x8);
GUEST_SIZE(Frame_00654924, 0xc);

u32 AcPlayer_rec__request_state_44(u32 player, u32 r1, gptr<Object_00654924_2> arg2, gptr<Object_00654924_3> arg3) {
    guest::StackFrameOf<Frame_00654924> frame;  // the original's stack frame
    gptr<Local_00654924_ea_1> ea_1 = gptr<Local_00654924_ea_1>(frame.at(0x30).addr());  // (from the original)
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    u32 params_2 = state_params_with_8bc(player, r1, arg2.addr(), arg3.addr());
    gptr<Local_00654924_r4_1> r4_1 = gptr<Local_00654924_r4_1>(params_2 + 0xeu);  // (from the original)
    u32 r1_1 = arg2->word_4;
    u32 r2_1 = arg2->word_8;
    frame->word_0 = arg2->word_0;
    frame->word_4 = r1_1;
    frame->word_8 = r2_1;
    r4_1->byte_0 = u8(r1);
    float3_xz_to_short2_a(r4_1.addr() + 2u, frame.at(0).addr(), r2_1);
    *gptr<u8>(params_2 + 0x14u) = u8(u32(s32(u32(arg3->half_0)) >> 8));  // (from the original)
    r4_1->byte_1 = u8(r6_1);
    r4_1->byte_7 = 0;
    r4_1->byte_8 = u8(r7_1);
    u32 r0_3 = AcPlayer_rec__change_state(player, 0x44u, params_2, 0u);  // (from the original)
    return r0_3;
}

}  // namespace d_00654924
GUEST_EXPORT_FRAMED(0x00654924, d_00654924::AcPlayer_rec__request_state_44, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00657748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For flagged kinds, runs the check at 0x1b76ec.
namespace d_00657748 {

inline constexpr guest::Function<0x001b76ec, u32(u32, u32, u32, u32)> Tour__item_is_prize;
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> kind_has_flag_80000_or_100000;

u32 flagged_kind_check(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = kind_has_flag_80000_or_100000(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    frame.release();
    return Tour__item_is_prize(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00657748
GUEST_EXPORT(0x00657748, d_00657748::flagged_kind_check);

// f_0065776c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the tour record's check with the value when it exists.
namespace d_0065776c {

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x0076e80c, u32(u32, u32, u32, u32)> Tour__goal_count;

u32 tour_record_check(u32 r0) {
    u32 r0_1 = *tour_instance;
    if (r0_1 == 0) {
        return r0_1;
    }
    return Tour__goal_count(r0_1 + 0x10u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0065776c
GUEST_EXPORT(0x0065776c, d_0065776c::tour_record_check);

// f_00657790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In flagged scenes, stores the position at 0x9856f4.
namespace d_00657790 {

struct __attribute__((packed)) Object_00657790_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00657790_0, byte_171, 0x171);

struct __attribute__((packed)) Object_00657790_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00657790_1, word_0, 0x0);
GUEST_OFFSET(Object_00657790_1, word_4, 0x4);
GUEST_OFFSET(Object_00657790_1, word_8, 0x8);

inline guest::global<u32, 0x009856f4> player_reference_x;
inline guest::global<u32, 0x009856f8> player_reference_y;
inline guest::global<u32, 0x009856fc> player_reference_z;

void AcPlayer_rec__store_flagged_position(gptr<Object_00657790_0> arg0, gptr<Object_00657790_1> arg1) {
    if ((u32(arg0->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    *player_reference_x = arg1->word_0;
    *player_reference_y = arg1->word_4;
    *player_reference_z = arg1->word_8;
}

}  // namespace d_00657790
GUEST_EXPORT(0x00657790, d_00657790::AcPlayer_rec__store_flagged_position);

// f_006577c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In flagged scenes, requests mode 0x12 of the camera controller and marks it.
namespace d_006577c4 {

struct __attribute__((packed)) Object_006577c4_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x6];  // (not used here)
    u8 byte_178;
};
GUEST_OFFSET(Object_006577c4_0, byte_171, 0x171);
GUEST_OFFSET(Object_006577c4_0, byte_178, 0x178);

inline constexpr guest::Function<0x0068ef60, u32(u32)> CameraCtl__request_mode_12;

void AcPlayer_rec__request_camera_mode_12(gptr<Object_006577c4_0> arg0) {
    u32 r4_1 = arg0.addr() + 0x171u;  // (from the original)
    if ((u32(arg0->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    CameraCtl__request_mode_12(arg0.addr());
    arg0->byte_178 = u8(u32(arg0->byte_178) | 0x80u);  // (from the original)
}

}  // namespace d_006577c4
GUEST_EXPORT_FRAMED(0x006577c4, d_006577c4::AcPlayer_rec__request_camera_mode_12, 0x4010);  // pushes {r4, lr} first, as the original

// f_006577f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In flagged scenes, requests mode 2 of the camera controller and marks it.
namespace d_006577f4 {

struct __attribute__((packed)) Object_006577f4_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x6];  // (not used here)
    u8 byte_178;
};
GUEST_OFFSET(Object_006577f4_0, byte_171, 0x171);
GUEST_OFFSET(Object_006577f4_0, byte_178, 0x178);

inline constexpr guest::Function<0x0068ef84, u32(u32)> CameraCtl__request_mode_2;

u32 AcPlayer_rec__request_camera_mode_2(gptr<Object_006577f4_0> arg0) {
    u32 r4_1 = arg0.addr() + 0x171u;  // (from the original)
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return r0_1;
    }
    CameraCtl__request_mode_2(r0_1);
    u32 r0_2 = u32(arg0->byte_178) | 0x80u;  // (from the original)
    arg0->byte_178 = u8(r0_2);
    return r0_2;
}

}  // namespace d_006577f4
GUEST_EXPORT_FRAMED(0x006577f4, d_006577f4::AcPlayer_rec__request_camera_mode_2, 0x4010);  // pushes {r4, lr} first, as the original

// f_0065795c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x62 with the position and angle.
namespace d_0065795c {

struct __attribute__((packed)) Object_0065795c_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_0065795c_2, half_0, 0x0);

inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer_rec__request_state_62(u32 player, u32 r1, gptr<Object_0065795c_2> arg2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 params_2 = state_params_with_8bc(player, r1, arg2.addr(), r3);
    u32 r4_1 = params_2 + 0xeu;  // (from the original)
    float3_xz_to_short2_a(r4_1, r1);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(u32(arg2->half_0)) >> 8));
    frame.release();
    return AcPlayer_rec__change_state(player, 0x62u, params_2, 0u);  // (from the original)
}

}  // namespace d_0065795c
GUEST_EXPORT(0x0065795c, d_0065795c::AcPlayer_rec__request_state_62);

// f_006579a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x73 with the word, the position (fixed point, x4) and two bytes.
namespace d_006579a8 {

struct __attribute__((packed)) CatchMgr {
    u32 word_0;
};
GUEST_OFFSET(CatchMgr, word_0, 0x0);

struct __attribute__((packed)) Object_006579a8_2 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_006579a8_2, float_0, 0x0);
GUEST_OFFSET(Object_006579a8_2, float_8, 0x8);

struct __attribute__((packed)) Local_006579a8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_006579a8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006579a8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006579a8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006579a8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006579a8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006579a8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_006579a8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_006579a8_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_006579a8_ea_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_006579a8_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_006579a8_ea_9, word_4, 0x4);
GUEST_OFFSET(Local_006579a8_ea_9, word_8, 0x8);
GUEST_OFFSET(Local_006579a8_ea_9, word_c, 0xc);
GUEST_OFFSET(Local_006579a8_ea_9, word_10, 0x10);
GUEST_OFFSET(Local_006579a8_ea_9, word_14, 0x14);
GUEST_OFFSET(Local_006579a8_ea_9, word_18, 0x18);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) Frame_006579a8 {
    u16 half_0;
    u8 unknown_2[0x1e];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006579a8, half_0, 0x0);
GUEST_SIZE(Frame_006579a8, 0x20);

u32 AcPlayer_rec__request_state_73(u32 player, gptr<CatchMgr> catch_mgr, gptr<Object_006579a8_2> arg2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_006579a8> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006579a8_ea_1> ea_1 = gptr<Local_006579a8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 params_2 = state_params_with_8bc(player, catch_mgr.addr(), arg2.addr(), r3);
    float S1_1 = 4.0f;
    u32 ea_2 = params_2 + 0xeu;  // (from the original)
    *gptr<u32>(ea_2) = catch_mgr->word_0;
    u32 r1_1 = vcvt_sz_f(arg2->float_0 * S1_1);
    frame->half_0 = u16(r1_1);
    u32 ea_4 = ea_2 + 4u;
    *gptr<u16>(ea_4) = u16(r1_1);
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(arg2->float_8 * S1_1));
    u32 r1_2 = std::bit_cast<u32>(S0_1);
    frame->half_0 = u16(r1_2);
    *gptr<u16>(ea_4 + 2u) = u16(r1_2);
    *gptr<u8>(params_2 + 0x17u) = u8(r3);  // (from the original)
    *gptr<u8>(params_2 + 0x18u) = u8(r5_1);  // (from the original)
    gptr<Local_006579a8_ea_9> ea_9 = gptr<Local_006579a8_ea_9>(frame.at(4).addr());
    u32 r4_1 = ea_9->word_0;
    u32 r5_2 = ea_9->word_4;
    u32 r6_1 = ea_9->word_8;
    u32 r7_1 = ea_9->word_c;
    u32 r8_1 = ea_9->word_10;
    u32 r9_1 = ea_9->word_14;
    r14 = ea_9->word_18;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    frame.release();
    return AcPlayer_rec__change_state(player, 0x73u, params_2, 0u);  // (from the original)
}

}  // namespace d_006579a8
GUEST_EXPORT(0x006579a8, d_006579a8::AcPlayer_rec__request_state_73);

// f_00659674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the cell at the position and, when asked, marks it stepped on in the two wear bit maps (112 x 112).
namespace d_00659674 {

struct __attribute__((packed)) Local_00659674_r0_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00659674_r0_2, byte_0, 0x0);

struct __attribute__((packed)) Local_00659674_r0_4 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00659674_r0_4, byte_0, 0x0);

inline constexpr u32 player_records_address = 0x00a84790u;
inline constexpr u32 changed_cells_a_address = 0x00aadaf4u;
inline guest::global<u8, 0x00aae114> changed_cells_a_dirty;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x005992fc, u32(u32, u32)> refresh_cell_unless_type_1d;

struct __attribute__((packed)) Frame_00659674 {
    u32 field_objects;
    u32 word_4;
};
GUEST_OFFSET(Frame_00659674, field_objects, 0x0);
GUEST_OFFSET(Frame_00659674, word_4, 0x4);
GUEST_SIZE(Frame_00659674, 0x8);

u32 GrassWear__mark_step(u32 grass_wear, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00659674> frame;  // the original's stack frame
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), grass_wear, r3);
    u32 field_objects = frame->field_objects;
    u32 r5_1 = frame->word_4;
    gptr<Local_00659674_r0_2> r0_2 = gptr<Local_00659674_r0_2>(refresh_cell_unless_type_1d(field_objects, r5_1));
    u32 r1_2 = guest::cpu()->r[1];
    if (r1 != 0) {
        r1_2 = 1u;
        if (field_objects < 0x70u && r5_1 < 0x70u) {  // (from the original)
            u32 r0_3 = field_objects + r5_1 * 0x70u;  // (from the original)
            if (r0_3 < 0x3100u) {  // (from the original)
                gptr<Local_00659674_r0_4> r0_4 = gptr<Local_00659674_r0_4>((r0_3 >> 3) + changed_cells_a_address);
                r0_4->byte_0 = u8(u32(r0_4->byte_0) | lsl_r(r1_2, (r0_3 & 7u) & 0xff));  // (from the original)
                *changed_cells_a_dirty = u8(r1_2);
            }
        }
        r0_2 = gptr<Local_00659674_r0_2>(player_records_address);
        u32 r2_2 = r0_2.addr() - 0xfffd667bu;  // (from the original)
        if (field_objects < 0x70u && r5_1 < 0x70u) {  // (from the original)
            r0_2 = gptr<Local_00659674_r0_2>(field_objects + r5_1 * 0x70u);  // (from the original)
            if (r0_2.addr() < 0x3100u) {  // (from the original)
                u32 r12_2 = r0_2.addr() & 7u;
                r0_2 = gptr<Local_00659674_r0_2>(r2_2 + (r0_2.addr() >> 3));
                r0_2->byte_0 = u8(u32(r0_2->byte_0) | lsl_r(r1_2, r12_2 & 0xff));  // (from the original)
                *gptr<u8>(r2_2 + 0x620u) = u8(r1_2);  // (from the original)
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_2.addr();
}

}  // namespace d_00659674
GUEST_EXPORT_FRAMED(0x00659674, d_00659674::GrassWear__mark_step, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00659750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Packs the player's motion (angles and speeds) into the record.
namespace d_00659750 {

struct __attribute__((packed)) Object_00659750_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x14a];  // (not used here)
    u8 byte_17a;
};
GUEST_OFFSET(Object_00659750_0, half_2e, 0x2e);
GUEST_OFFSET(Object_00659750_0, byte_17a, 0x17a);

struct __attribute__((packed)) Local_00659750_r2_2 {
    u8 unknown_0[0x5c];  // (not used here)
    u16 half_5c;
    u16 half_5e;
};
GUEST_OFFSET(Local_00659750_r2_2, half_5c, 0x5c);
GUEST_OFFSET(Local_00659750_r2_2, half_5e, 0x5e);


u32 AcPlayer_rec__pack_motion(gptr<Object_00659750_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0 = arg0.addr();
    gptr<Local_00659750_r2_2> r2_2 = gptr<Local_00659750_r2_2>(0u);
    u32 r0_1 = 0;
    u32 r12_1 = s16(arg0->half_2e);
    u32 r5_1 = sxth(r1 - r12_1);
    if (r12_1 != r1) {
        S1 = float(s32(r5_1));
        S0 = std::bit_cast<float>(vcvt_sz_f(S1 * S0));
        u32 r4_1 = sxth(std::bit_cast<u32>(S0));
        u32 res_1 = r4_1 - r3;
        u32 nf_1 = res_1 >> 0x1f;  // (from the original)
        u32 zf_1 = res_1 == 0;
        u32 vf_1 = ((r4_1 ^ r3) & (r4_1 ^ res_1)) >> 0x1f;  // (from the original)
        if (zf_1 || nf_1 != vf_1) {
            u32 r6_1 = 0u - r3;
            u32 res_2 = r6_1 - r4_1;
            nf_1 = res_2 >> 0x1f;  // (from the original)
            zf_1 = res_2 == 0;
            vf_1 = ((r6_1 ^ r4_1) & (r6_1 ^ res_2)) >> 0x1f;  // (from the original)
        }
        if (!zf_1 && nf_1 == vf_1) {
            if (s32(r4_1) > s32(r2)) {
                r4_1 = r2;
            } else {
                u32 r2_1 = 0u - r2;
                if ((r2_1 - r4_1) != 0 && s32(r2_1) >= s32(r4_1)) {
                    r4_1 = sxth(r2_1);
                }
            }
            r12_1 = sxth(r12_1 + r4_1);
        } else {
            if (s32(r5_1) < 0) {
                goto L_6597dc;
            }
            r12_1 = sxth(r12_1 + r3);
            if (s32(sxth(r1 - r12_1)) > 0) {
                arg0->half_2e = u16(r12_1);
                r2_2 = gptr<Local_00659750_r2_2>(r0 + 0x900u);  // (from the original)
                arg0->byte_17a = u8(u32(arg0->byte_17a) & ~0x10u);  // (from the original)
                r2_2->half_5c = u16(uxth(r12_1));
                r2_2->half_5e = 0;
                r0_1 = u32(s16(arg0->half_2e)) == r1;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                return r0_1;
            }
            r12_1 = r1;
            arg0->half_2e = u16(r12_1);
            r2_2 = gptr<Local_00659750_r2_2>(r0 + 0x900u);  // (from the original)
            arg0->byte_17a = u8(u32(arg0->byte_17a) & ~0x10u);  // (from the original)
            r2_2->half_5c = u16(uxth(r12_1));
            r2_2->half_5e = 0;
            r0_1 = u32(s16(arg0->half_2e)) == r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0_1;
L_6597dc:;
            r12_1 = sxth(r12_1 - r3);
            if (s32(sxth(r1 - r12_1)) >= 0) {
                r12_1 = r1;
                arg0->half_2e = u16(r12_1);
                r2_2 = gptr<Local_00659750_r2_2>(r0 + 0x900u);  // (from the original)
                arg0->byte_17a = u8(u32(arg0->byte_17a) & ~0x10u);  // (from the original)
                r2_2->half_5c = u16(uxth(r12_1));
                r2_2->half_5e = 0;
                r0_1 = u32(s16(arg0->half_2e)) == r1;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                return r0_1;
            }
        }
    }
    arg0->half_2e = u16(r12_1);
    r2_2 = gptr<Local_00659750_r2_2>(r0 + 0x900u);  // (from the original)
    arg0->byte_17a = u8(u32(arg0->byte_17a) & ~0x10u);  // (from the original)
    r2_2->half_5c = u16(uxth(r12_1));
    r2_2->half_5e = 0;
    r0_1 = u32(s16(arg0->half_2e)) == r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_00659750
GUEST_EXPORT_FRAMED(0x00659750, d_00659750::AcPlayer_rec__pack_motion, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_006598a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In flagged scenes, sets the BGM's kind 6 (when asked) and pushes the special BGM 0x26a once, setting mode 2.
namespace d_006598a8 {

struct __attribute__((packed)) Object_006598a8_0 {
    u8 unknown_0[0x170];  // (not used here)
    u8 byte_170;
    u8 byte_171;
    u8 unknown_172[0x7];  // (not used here)
    u8 byte_179;
};
GUEST_OFFSET(Object_006598a8_0, byte_170, 0x170);
GUEST_OFFSET(Object_006598a8_0, byte_171, 0x171);
GUEST_OFFSET(Object_006598a8_0, byte_179, 0x179);

struct __attribute__((packed)) Local_006598a8_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_006598a8_r4_1, byte_8, 0x8);

inline constexpr guest::Function<0x0058a1d8, u32(u32)> push_bgm_26a;
inline constexpr guest::Function<0x0058a8e0, u32(u32, u32)> bgm_set_kind_6;
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> return_constant_0x989bc0_;

void AcPlayer_rec__start_flagged_bgm_c(gptr<Object_006598a8_0> arg0, u32 r1) {
    gptr<Local_006598a8_r4_1> r4_1 = gptr<Local_006598a8_r4_1>(arg0.addr() + 0x171u);  // (from the original)
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        if (r1 != 0) {
            u32 r1_1 = u32(arg0->byte_179) | 4u;
            arg0->byte_179 = u8(r1_1);
            u32 r0_2 = return_constant_0x989bc0_(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            bgm_set_kind_6(r0_2, 5u);
        }
        u32 r0_3 = r4_1->byte_8;
        r1 = r0_3 >> 4u & 1u;
        if (r1 == 0) {
            u32 r0_4 = r0_3 | 0x10u;  // (from the original)
            r4_1->byte_8 = u8(r0_4);
            u32 r0_5 = return_constant_0x989bc0_(r0_4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            push_bgm_26a(r0_5);
            r1 = guest::cpu()->r[1];
        }
        arg0->byte_170 = 2;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006598a8
GUEST_EXPORT_FRAMED(0x006598a8, d_006598a8::AcPlayer_rec__start_flagged_bgm_c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00659d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x72 with the word, two bytes and the position (fixed point, x4).
namespace d_00659d14 {

struct __attribute__((packed)) Object_00659d14_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00659d14_1, word_0, 0x0);

struct __attribute__((packed)) Local_00659d14_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00659d14_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00659d14_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00659d14_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00659d14_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00659d14_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00659d14_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00659d14_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00659d14_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_00659d14_ea_10 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00659d14_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_00659d14_ea_10, word_4, 0x4);
GUEST_OFFSET(Local_00659d14_ea_10, word_8, 0x8);
GUEST_OFFSET(Local_00659d14_ea_10, word_c, 0xc);
GUEST_OFFSET(Local_00659d14_ea_10, word_10, 0x10);
GUEST_OFFSET(Local_00659d14_ea_10, word_14, 0x14);
GUEST_OFFSET(Local_00659d14_ea_10, word_18, 0x18);

struct __attribute__((packed)) Local_00659d14_r4_1 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Local_00659d14_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_00659d14_r4_1, float_8, 0x8);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) Frame_00659d14 {
    u16 half_0;
    u8 unknown_2[0x1e];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00659d14, half_0, 0x0);
GUEST_SIZE(Frame_00659d14, 0x20);

void AcPlayer_rec__request_state_72(u32 player, gptr<Object_00659d14_1> arg1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_00659d14> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00659d14_ea_1> ea_1 = gptr<Local_00659d14_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    gptr<Local_00659d14_r4_1> r4_1 = gptr<Local_00659d14_r4_1>(*frame.at<u32>(0x20));  // (from the original)
    u32 params_2 = state_params_with_8bc(player, arg1.addr(), r2, r3);
    float S1_1 = 4.0f;
    u32 ea_2 = params_2 + 0xeu;  // (from the original)
    *gptr<u32>(ea_2) = arg1->word_0;
    *gptr<u8>(ea_2 + 4u) = u8(r2);
    *gptr<u8>(params_2 + 0x13u) = u8(r3);  // (from the original)
    u32 r1_1 = vcvt_sz_f(r4_1->float_0 * S1_1);
    frame->half_0 = u16(r1_1);
    *gptr<u16>(params_2 + 0x14u) = u16(r1_1);  // (from the original)
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(r4_1->float_8 * S1_1));
    u32 r1_2 = std::bit_cast<u32>(S0_1);
    frame->half_0 = u16(r1_2);
    *gptr<u16>(params_2 + 0x16u) = u16(r1_2);  // (from the original)
    *gptr<u8>(params_2 + 0x18u) = 0;  // (from the original)
    gptr<Local_00659d14_ea_10> ea_10 = gptr<Local_00659d14_ea_10>(frame.at(4).addr());
    u32 r4_2 = ea_10->word_0;
    u32 r5_1 = ea_10->word_4;
    u32 r6_1 = ea_10->word_8;
    u32 r7_1 = ea_10->word_c;
    u32 r8_1 = ea_10->word_10;
    u32 r9_1 = ea_10->word_14;
    r14 = ea_10->word_18;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    frame.release();
    AcPlayer_rec__change_state(player, 0x72u, params_2, 0u);
    return;
}

}  // namespace d_00659d14
GUEST_EXPORT(0x00659d14, d_00659d14::AcPlayer_rec__request_state_72);

// f_00659e34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x15 with an angle and three option bytes.
namespace d_00659e34 {

struct __attribute__((packed)) Object_00659e34_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_00659e34_1, half_0, 0x0);

struct __attribute__((packed)) Local_00659e34_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00659e34_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00659e34_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00659e34_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00659e34_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00659e34_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00659e34_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00659e34_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00659e34_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_00659e34_ea_3 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Local_00659e34_ea_3, half_0, 0x0);
GUEST_OFFSET(Local_00659e34_ea_3, byte_2, 0x2);
GUEST_OFFSET(Local_00659e34_ea_3, byte_3, 0x3);
GUEST_OFFSET(Local_00659e34_ea_3, byte_4, 0x4);

struct __attribute__((packed)) Local_00659e34_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00659e34_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00659e34_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_00659e34_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_00659e34_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_00659e34_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_00659e34_ea_5, word_14, 0x14);
GUEST_OFFSET(Local_00659e34_ea_5, word_18, 0x18);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) Frame_00659e34 {
    u16 half_0;
    u8 unknown_2[0x1e];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00659e34, half_0, 0x0);
GUEST_SIZE(Frame_00659e34, 0x20);

u32 AcPlayer_rec__request_state_21(u32 player, gptr<Object_00659e34_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00659e34> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00659e34_ea_1> ea_1 = gptr<Local_00659e34_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    u32 r4_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 params_2 = state_params_with_8bc(player, arg1.addr(), r2, r3);
    u32 r1_1 = arg1->half_0;
    frame->half_0 = u16(r1_1);
    gptr<Local_00659e34_ea_3> ea_3 = gptr<Local_00659e34_ea_3>(params_2 + 0xeu);  // (from the original)
    ea_3->half_0 = u16(r1_1);
    ea_3->byte_2 = u8(r3);
    ea_3->byte_3 = u8(r2);
    ea_3->byte_4 = u8(r4_1);
    *gptr<u8>(params_2 + 0x13u) = 0;  // (from the original)
    gptr<Local_00659e34_ea_5> ea_5 = gptr<Local_00659e34_ea_5>(frame.at(4).addr());
    u32 r4_2 = ea_5->word_0;
    u32 r5_1 = ea_5->word_4;
    u32 r6_1 = ea_5->word_8;
    u32 r7_1 = ea_5->word_c;
    u32 r8_1 = ea_5->word_10;
    u32 r9_1 = ea_5->word_14;
    r14 = ea_5->word_18;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    frame.release();
    return AcPlayer_rec__change_state(player, 0x15u, params_2, 0u);  // (from the original)
}

}  // namespace d_00659e34
GUEST_EXPORT(0x00659e34, d_00659e34::AcPlayer_rec__request_state_21);

// f_00659f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0xb0 with the vector (fixed point, x4) and the position.
namespace d_00659f14 {

struct __attribute__((packed)) Object_00659f14_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_00659f14_2, float_0, 0x0);
GUEST_OFFSET(Object_00659f14_2, float_4, 0x4);
GUEST_OFFSET(Object_00659f14_2, float_8, 0x8);

struct __attribute__((packed)) Local_00659f14_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00659f14_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00659f14_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00659f14_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00659f14_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00659f14_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00659f14_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00659f14_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00659f14_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_00659f14_ea_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00659f14_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_00659f14_ea_7, word_4, 0x4);
GUEST_OFFSET(Local_00659f14_ea_7, word_8, 0x8);
GUEST_OFFSET(Local_00659f14_ea_7, word_c, 0xc);
GUEST_OFFSET(Local_00659f14_ea_7, word_10, 0x10);
GUEST_OFFSET(Local_00659f14_ea_7, word_14, 0x14);
GUEST_OFFSET(Local_00659f14_ea_7, word_18, 0x18);

inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) Frame_00659f14 {
    u16 half_0;
    u8 unknown_2[0x1e];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00659f14, half_0, 0x0);
GUEST_SIZE(Frame_00659f14, 0x20);

u32 AcPlayer_rec__request_state_b0(u32 player, u32 r1, gptr<Object_00659f14_2> arg2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_00659f14> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00659f14_ea_1> ea_1 = gptr<Local_00659f14_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    u32 params_2 = state_params_with_8bc(player, r1, arg2.addr(), r3);
    u32 r5_1 = params_2 + 0xeu;  // (from the original)
    float3_xz_to_short2_a(params_2 + 0x14u, r1);  // (from the original)
    float S0_2 = 4.0f;
    u32 r0_3 = vcvt_sz_f(arg2->float_0 * S0_2);
    frame->half_0 = u16(r0_3);
    *gptr<u16>(r5_1) = u16(r0_3);
    u32 r1_1 = vcvt_sz_f(arg2->float_4 * S0_2);
    frame->half_0 = u16(r1_1);
    *gptr<u16>(r5_1 + 2u) = u16(r1_1);
    float S1_2 = arg2->float_8;
    float S0_3 = std::bit_cast<float>(vcvt_sz_f(S1_2 * S0_2));
    u32 r0_4 = std::bit_cast<u32>(S0_3);
    frame->half_0 = u16(r0_4);
    *gptr<u16>(r5_1 + 4u) = u16(r0_4);
    gptr<Local_00659f14_ea_7> ea_7 = gptr<Local_00659f14_ea_7>(frame.at(4).addr());
    u32 r4_1 = ea_7->word_0;
    u32 r5_2 = ea_7->word_4;
    u32 r6_1 = ea_7->word_8;
    u32 r7_1 = ea_7->word_c;
    u32 r8_1 = ea_7->word_10;
    u32 r9_1 = ea_7->word_14;
    r14 = ea_7->word_18;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    frame.release();
    return AcPlayer_rec__change_state(player, 0xb0u, params_2, 0u);  // (from the original)
}

}  // namespace d_00659f14
GUEST_EXPORT(0x00659f14, d_00659f14::AcPlayer_rec__request_state_b0);

// f_0065d5a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Leaves 0.8 x 2 x 0.97 in the float register; the shared parameters.
namespace d_0065d5a8 {


u32 tool_reach_1_55() {
    float S0_1 = 0.8f * 2.0f * 0.97f;
    guest::cpu()->s[0] = S0_1;
    return 0x886878u;  // (from the original)
}

}  // namespace d_0065d5a8
GUEST_EXPORT(0x0065d5a8, d_0065d5a8::tool_reach_1_55);

// f_0065d5d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the swing (scale 1, 300 frames) and, in flagged scenes, the target cell.
namespace d_0065d5d4 {

struct __attribute__((packed)) Object_0065d5d4_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x16];  // (not used here)
    float float_188;
    u8 byte_18c;
    u8 unknown_18d[0x73d];  // (not used here)
    u32 word_8ca;
};
GUEST_OFFSET(Object_0065d5d4_0, byte_171, 0x171);
GUEST_OFFSET(Object_0065d5d4_0, float_188, 0x188);
GUEST_OFFSET(Object_0065d5d4_0, byte_18c, 0x18c);
GUEST_OFFSET(Object_0065d5d4_0, word_8ca, 0x8ca);


u32 AcPlayer_rec__reset_swing(gptr<Object_0065d5d4_0> arg0) {
    float S0_1 = 1.0f;
    arg0->float_188 = S0_1;
    *gptr<u16>(arg0.addr() + 0x184u) = 0x12c;  // (from the original)
    *gptr<u16>((0x184u | u32(s32(0x184u) >> 6)) + arg0.addr()) = 0;  // (from the original)
    arg0->byte_18c = 0;
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        r0_1 = 0x1000u;  // (from the original)
        arg0->word_8ca = r0_1;
    }
    guest::cpu()->r[1] = arg0.addr() + 0x8cau;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_0065d5d4
GUEST_EXPORT(0x0065d5d4, d_0065d5d4::AcPlayer_rec__reset_swing);

// f_0065d7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the tool at +0xd00 and clears bit 6 of +0x174.
namespace d_0065d7ec {

struct __attribute__((packed)) Object_0065d7ec_0 {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
};
GUEST_OFFSET(Object_0065d7ec_0, byte_174, 0x174);

inline constexpr guest::Function<0x0026a5dc, u32(u32, u32, u32, u32)> EmoticonSlots__stop_all;

void AcPlayer_rec__stop_tool(gptr<Object_0065d7ec_0> arg0, u32 r1) {
    EmoticonSlots__stop_all(arg0.addr() + 0xd00u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->byte_174 = u8(u32(arg0->byte_174) & ~0x40u);  // (from the original)
}

}  // namespace d_0065d7ec
GUEST_EXPORT_FRAMED(0x0065d7ec, d_0065d7ec::AcPlayer_rec__stop_tool, 0x4010);  // pushes {r4, lr} first, as the original

// f_0065daa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the movement with the player's speed (+0x914 when moving, else 0).
namespace d_0065daa8 {

struct __attribute__((packed)) Object_0065daa8_0 {
    u8 unknown_0[0x914];  // (not used here)
    float float_914;
    u32 word_918;
    u8 unknown_91c[0x3];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Object_0065daa8_0, float_914, 0x914);
GUEST_OFFSET(Object_0065daa8_0, word_918, 0x918);
GUEST_OFFSET(Object_0065daa8_0, byte_91f, 0x91f);

inline constexpr guest::Function<0x0018df18, u32(u32, u32, u32, u32)> Effect__spawn_scaled;

u32 AcPlayer_rec__apply_speed(gptr<Object_0065daa8_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 zf_1 = arg0->byte_91f == 0;
    u32 r3_1 = arg0->word_918;
    if (!zf_1) {
        S0 = arg0->float_914;
    }
    if (zf_1) {
        S0 = 0.0f;
    }
    guest::cpu()->s[0] = S0;
    return Effect__spawn_scaled(r1, r2, r3, r3_1);
}

}  // namespace d_0065daa8
GUEST_EXPORT(0x0065daa8, d_0065daa8::AcPlayer_rec__apply_speed);

// f_0065db0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Handles a catch: counts it in the badges and tallies and records it in the encyclopedia.
namespace d_0065db0c {

struct __attribute__((packed)) Object_0065db0c_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_0065db0c_0, byte_171, 0x171);
GUEST_OFFSET(Object_0065db0c_0, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32, u32)> add_to_player_counter;
inline constexpr guest::Function<0x0024b7b8, u32(u32, u32)> add_to_current_player_counter;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x002ffad8, u32(u32)> item_offset_in_category;
inline constexpr guest::Function<0x00309bd4, u32(u32, u32)> DailyCheck__allows;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x0064c5e0, u32(u32, u32, u32, u32)> registry_is_disabled;
inline constexpr guest::Function<0x0064f068, u32(u32, u32)> Tour__is_kind;
inline constexpr guest::Function<0x0065377c, u32(u32)> counter_block_of_slot_player;
inline constexpr guest::Function<0x00653854, u32(u32, u32)> register_item_for_owner_00653854;
inline constexpr guest::Function<0x006b60d8, u32(u32, u32, u32)> ClampedCounters__add_to_tally_a;
inline constexpr guest::Function<0x006b8140, u32(u32, u32)> ClampedCounters__add_to_current_split_12_;
inline constexpr guest::Function<0x006b8d80, u32(u32, u32)> ClampedCounters__add_to_current_split_50_;
inline constexpr guest::Function<0x006f0130, u32(u32, u32)> Player__counter;
inline constexpr guest::Function<0x007017c0, u32(u32)> Player__update_insect_record;

void AcPlayer_rec__on_catch(gptr<Object_0065db0c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 player = r1;
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        u32 r0_2 = registry_is_disabled(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_3 = Tour__is_kind(3u, 0x40u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_3 == 0) {
                register_item_for_owner_00653854(arg0.addr(), player);
                Player__counter(1u, 1u);
                add_to_current_player_counter(1u, 1u);
                u32 r0_4 = Player__update_insect_record(player);
                u32 counter_block_2 = get_counter_block(r0_4);
                ClampedCounters__add_to_current_split_12_(counter_block_2, 1u);
                u32 offset_2 = item_offset_in_category(player);
                u32 r0_7 = ClampedCounters__add_to_tally_a(counter_block_2, offset_2, 1u);
                u32 now = game_time_now(r0_7);
                u32 r0_9 = DailyCheck__allows(0xcu, now);  // (from the original)
                if (r0_9 != 0) {
                    ClampedCounters__add_to_current_split_50_(counter_block_2, 1u);
                }
                u32 r0_10 = arg0->byte_1ac;
                u32 r0_11 = counter_block_of_slot_player(r0_10);
                r1 = guest::cpu()->r[1];
                if (r0_11 != 0) {
                    add_to_player_counter(r0_11, 0xfu, 1u, guest::cpu()->r[3]);  // (from the original)
                    u32 number_2 = Item__number(player);
                    r1 = number_2;
                    u32 res_1 = r1 - 0x22bau;  // (from the original)
                    u32 zf_1 = res_1 == 0;
                    u32 r0_13 = number_2 - 0x22bau;  // (from the original)
                    if (zf_1) {
                        frame.release();
                        add_to_player_counter(r0_11, 0x2au, 1u, guest::cpu()->r[3]);
                        return;  // (from the original)
                    }
                    if (zf_1 || (res_1 >> 0x1f) != (((r1 ^ 0x22bau) & (r1 ^ res_1)) >> 0x1f)) {  // (from the original)
                        u32 res_2 = r1 - 0x22a9u;  // (from the original)
                        u32 zf_2 = res_2 == 0;
                        u32 r0_14 = r1 - 0x22a9u;  // (from the original)
                        if (zf_2) {
                            frame.release();
                            add_to_player_counter(r0_11, 0x25u, 1u, guest::cpu()->r[3]);
                            return;  // (from the original)
                        }
                        if (zf_2 || (res_2 >> 0x1f) != (((r1 ^ 0x22a9u) & (r1 ^ res_2)) >> 0x1f)) {  // (from the original)
                            u32 r0_15 = r1 - 0x2296u;  // (from the original)
                            if (r0_15 == 0) {
                                frame.release();
                                add_to_player_counter(r0_11, 0x2cu, 1u, guest::cpu()->r[3]);
                                return;  // (from the original)
                            }
                            if (r0_15 == 4u) {
                                frame.release();
                                add_to_player_counter(r0_11, 0x21u, 1u, guest::cpu()->r[3]);
                                return;  // (from the original)
                            }
                            if (r0_15 == 9u) {
                                frame.release();
                                add_to_player_counter(r0_11, 0x2bu, 1u, guest::cpu()->r[3]);
                                return;  // (from the original)
                            }
                            if (r0_15 != 0xfu) {  // (from the original)
                                guest::cpu()->r[1] = r1;
                                return;
                            }
                            frame.release();
                            add_to_player_counter(r0_11, 0x18u, 1u, guest::cpu()->r[3]);
                            return;  // (from the original)
                        }
                        if (r0_14 == 1u) {
                            frame.release();
                            add_to_player_counter(r0_11, 0x26u, 1u, guest::cpu()->r[3]);
                            return;  // (from the original)
                        }
                        if (r0_14 == 4u) {
                            frame.release();
                            add_to_player_counter(r0_11, 0x2du, 1u, guest::cpu()->r[3]);
                            return;  // (from the original)
                        }
                        if (r0_14 == 0xau) {  // (from the original)
                            frame.release();
                            add_to_player_counter(r0_11, 0x24u, 1u, guest::cpu()->r[3]);
                            return;  // (from the original)
                        }
                        if (r0_14 != 0xbu) {  // (from the original)
                            guest::cpu()->r[1] = r1;
                            return;
                        }
                        frame.release();
                        add_to_player_counter(r0_11, 0x29u, 1u, guest::cpu()->r[3]);
                        return;  // (from the original)
                    }
                    u32 zf_3 = r0_13 - 0x10u == 0;  // (from the original)
                    if (zf_3) {
                        frame.release();
                        add_to_player_counter(r0_11, 0x3fu, 1u, guest::cpu()->r[3]);
                        return;  // (from the original)
                    }
                    if (!zf_3 && s32(r0_13) >= 0x10) {  // (from the original)
                        if (r0_13 == 0x11u) {  // (from the original)
                            frame.release();
                            add_to_player_counter(r0_11, 0x3fu, 1u, guest::cpu()->r[3]);
                            return;  // (from the original)
                        }
                        if (r0_13 == 0x1au) {  // (from the original)
                            frame.release();
                            add_to_player_counter(r0_11, 0x27u, 1u, guest::cpu()->r[3]);
                            return;  // (from the original)
                        }
                        if (r0_13 != 0x1bu) {  // (from the original)
                            guest::cpu()->r[1] = r1;
                            return;
                        }
                        frame.release();
                        add_to_player_counter(r0_11, 0x28u, 1u, guest::cpu()->r[3]);
                        return;  // (from the original)
                    }
                    if (r0_13 == 0xbu || r0_13 == 0xcu || r0_13 == 0xdu) {  // (from the original)
                        frame.release();
                        add_to_player_counter(r0_11, 0x40u, 1u, guest::cpu()->r[3]);
                        return;  // (from the original)
                    }
                    if (r0_13 == 0xfu) {  // (from the original)
                        frame.release();
                        add_to_player_counter(r0_11, 0x3fu, 1u, guest::cpu()->r[3]);
                        return;  // (from the original)
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0065db0c
GUEST_EXPORT(0x0065db0c, d_0065db0c::AcPlayer_rec__on_catch);

// f_0065de40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the tool's animation frames down and restarts the tool when its frame changes; true when it is over.
namespace d_0065de40 {

struct __attribute__((packed)) Object_0065de40_0 {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
    u8 unknown_175[0x13df];  // (not used here)
    u8 byte_1554;
    u8 unknown_1555[0x1];  // (not used here)
    u16 half_1556;
};
GUEST_OFFSET(Object_0065de40_0, byte_174, 0x174);
GUEST_OFFSET(Object_0065de40_0, byte_1554, 0x1554);
GUEST_OFFSET(Object_0065de40_0, half_1556, 0x1556);

struct __attribute__((packed)) Local_0065de40_r0_5 {
    u16 half_0;
};
GUEST_OFFSET(Local_0065de40_r0_5, half_0, 0x0);

struct __attribute__((packed)) Local_0065de40_r5_1 {
    u8 unknown_0[0x56];  // (not used here)
    u16 half_56;
};
GUEST_OFFSET(Local_0065de40_r5_1, half_56, 0x56);

inline constexpr guest::Function<0x001cf9c4, u32(u32, u32, u32, u32)> AcPlayer__play_motion;
inline constexpr guest::Function<0x00269208, u32(u32)> EmoticonAction__update;
inline constexpr guest::Function<0x0070ae20, u32(u32, u32, u32, u32)> is_below_limit_72;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;

struct __attribute__((packed)) Frame_0065de40 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_0065de40, word_0, 0x0);
GUEST_OFFSET(Frame_0065de40, word_4, 0x4);
GUEST_OFFSET(Frame_0065de40, word_8, 0x8);
GUEST_SIZE(Frame_0065de40, 0xc);

u32 AcPlayer_rec__update_tool_animation(gptr<Object_0065de40_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_0065de40> frame;  // the original's stack frame
    u32 r0_3 = 0;
    gptr<Local_0065de40_r5_1> r5_1 = gptr<Local_0065de40_r5_1>(arg0.addr() + 0x1500u);  // (from the original)
    if (arg0->byte_1554 == 0x1eu && arg0->half_1556 >= 7u) {  // (from the original)
        r1 = u32(arg0->byte_174) | 0x40u;  // (from the original)
        arg0->byte_174 = u8(r1);
    }
    u32 r0_2 = is_below_limit_72(arg0.addr() + 0x1b4u, r1, r2, r3);  // (from the original)
    u32 r6_1 = *gptr<u16>(arg0.addr() + (r0_2 << 1) + 0x224u);  // (from the original)
    if (r2 != 0 && *gptr<u16>(arg0.addr() + 0x5bau) == 0) {  // (from the original)
        r0_3 = 1u;
    } else {
        r5_1->half_56 = u16(u32(r5_1->half_56) + 1u);
        EmoticonAction__update(arg0.addr() + 0xcfcu);  // (from the original)
        gptr<Local_0065de40_r0_5> r0_5 = gptr<Local_0065de40_r0_5>(arg0.addr() + 0x5bau);  // (from the original)
        u32 r1_2 = r0_5->half_0;
        if (r1_2 != 0) {
            if (r1_2 >= 1u) {
                r1_2 -= 1u;
                r0_5->half_0 = u16(r1_2);
            } else {
                r0_5->half_0 = 0;
            }
        }
        u32 r0_7 = is_below_limit_72(arg0.addr() + 0x1b4u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (*gptr<u16>(arg0.addr() + (r0_7 << 1) + 0x224u) != r6_1) {  // (from the original)
            u32 r0_9 = slot_7_if_class_7(arg0.addr() + 0x3b4u);  // (from the original)
            float S0_3 = 8.0f;
            frame->word_4 = 0;
            frame->word_0 = 1;
            frame->word_8 = 0;
            guest::cpu()->s[0] = S0_3;
            AcPlayer__play_motion(arg0.addr() + 0x1b4u, r0_9, 0u, 0u);  // (from the original)
        }
        r0_3 = 0u;
    }
    return r0_3;
}

}  // namespace d_0065de40
GUEST_EXPORT_FRAMED(0x0065de40, d_0065de40::AcPlayer_rec__update_tool_animation, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0065df50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the dig sound once (when the record is given) and marks the cell in both wear bit maps.
namespace d_0065df50 {

struct __attribute__((packed)) GrassWear {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
};
GUEST_OFFSET(GrassWear, byte_44, 0x44);

struct __attribute__((packed)) Local_0065df50_r0_4 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0065df50_r0_4, byte_0, 0x0);

struct __attribute__((packed)) Local_0065df50_r0_7 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0065df50_r0_7, byte_0, 0x0);

inline constexpr u32 changed_cells_a_address = 0x00aadaf4u;
inline constexpr u32 changed_cells_b_address = 0x00aae115u;
inline guest::global<u8, 0x00aae114> changed_cells_a_dirty;
inline guest::global<u8, 0x00aae735> changed_cells_b_dirty;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x00582e4c, u32(u32, u32, u32, u32)> play_sound_at;

struct __attribute__((packed)) Frame_0065df50 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0065df50, word_0, 0x0);
GUEST_OFFSET(Frame_0065df50, word_4, 0x4);
GUEST_SIZE(Frame_0065df50, 0xc);

u32 GrassWear__mark_dig(gptr<GrassWear> grass_wear, u32 position, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0065df50> frame;  // the original's stack frame
    if (grass_wear.addr() != 0) {
        u32 r1_1 = grass_wear->byte_44;
        if ((r1_1 >> 1u & 1u) == 0) {
            grass_wear->byte_44 = u8(r1_1 | 2u);
            play_sound_at(0x10005e7u, position, r2, 0u);  // (from the original)
            r3 = guest::cpu()->r[3];
        }
    }
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), position, r3);
    u32 r0_2 = frame->word_0;
    u32 r2_1 = frame->word_4;
    if (r0_2 < 0x70u && r2_1 < 0x70u) {  // (from the original)
        u32 r0_3 = r0_2 + r2_1 * 0x70u;  // (from the original)
        if (r0_3 < 0x3100u) {  // (from the original)
            gptr<Local_0065df50_r0_4> r0_4 = gptr<Local_0065df50_r0_4>((r0_3 >> 3) + changed_cells_a_address);
            r0_4->byte_0 = u8(u32(r0_4->byte_0) | lsl_r(1u, (r0_3 & 7u) & 0xff));  // (from the original)
            *changed_cells_a_dirty = 1;
        }
    }
    u32 r0_5 = frame->word_0;
    u32 r2_2 = frame->word_4;
    if (r0_5 >= 0x70u || r2_2 >= 0x70u) {  // (from the original)
        guest::cpu()->r[1] = changed_cells_b_address;
        return r0_5;
    }
    u32 r0_6 = r0_5 + r2_2 * 0x70u;  // (from the original)
    if (r0_6 >= 0x3100u) {  // (from the original)
        guest::cpu()->r[1] = changed_cells_b_address;
        return r0_6;
    }
    gptr<Local_0065df50_r0_7> r0_7 = gptr<Local_0065df50_r0_7>((r0_6 >> 3) + changed_cells_b_address);
    r0_7->byte_0 = u8(u32(r0_7->byte_0) | lsl_r(1u, (r0_6 & 7u) & 0xff));  // (from the original)
    *changed_cells_b_dirty = 1;
    guest::cpu()->r[1] = changed_cells_b_address;
    return r0_7.addr();
}

}  // namespace d_0065df50
GUEST_EXPORT_FRAMED(0x0065df50, d_0065df50::GrassWear__mark_dig, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0065e0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the player leaving its state and changes to the state's exit state (state 6 waits 8 frames).
namespace d_0065e0b8 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x37];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Player, byte_171, 0x171);
GUEST_OFFSET(Player, byte_1a9, 0x1a9);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x0064f390, u32(u32, u32, u32, u32)> entry_10;
inline constexpr guest::Function<0x0065196c, u32(u32)> AcPlayer__start_walk;
inline constexpr guest::Function<0x0067a478, u32(u32, u32, u32, u32)> return_float_constant_0x41000000_;

u32 AcPlayer_rec__leave_state(gptr<Player> player, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = 0;
    u32 r0_1 = player->byte_1a9;
    if (r0_1 >= 0xebu) {  // (from the original)
        r1_1 = 0u;
    } else {
        r0_1 = entry_10(r0_1, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r1_1 = r0_1;
    }
    u32 r2_1 = u32(player->byte_171) | 0x80u;  // (from the original)
    player->byte_171 = u8(r2_1);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r1_2 = *gptr<u8>(r1_1 + 1u);
    if (r1_2 >= 0xebu || r1_2 == 0) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r1_2 != 6u) {
        AcPlayer_rec__change_state(player.addr(), r1_2, 0u, 0u);
        return 1u;
    }
    return_float_constant_0x41000000_(r0_1, r1_2, r2_1, r3);
    AcPlayer__start_walk(player.addr());
    return 1u;
}

}  // namespace d_0065e0b8
GUEST_EXPORT_FRAMED(0x0065e0b8, d_0065e0b8::AcPlayer_rec__leave_state, 0x4010);  // pushes {r4, lr} first, as the original

// f_0065e190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0xe3 with the byte.
namespace d_0065e190 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer_rec__request_state_e3(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 params_2 = state_params_with_8bc(player, r1, r2, r3);
    *gptr<u8>(params_2 + 0xeu) = u8(r1);  // (from the original)
    frame.release();
    return AcPlayer_rec__change_state(player, 0xe3u, params_2, 0u);  // (from the original)
}

}  // namespace d_0065e190
GUEST_EXPORT(0x0065e190, d_0065e190::AcPlayer_rec__request_state_e3);

// f_0065e1bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x45 with the word, flags, position and angle.
namespace d_0065e1bc {

struct __attribute__((packed)) Object_0065e1bc_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_0065e1bc_2, half_0, 0x0);

struct __attribute__((packed)) Local_0065e1bc_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0065e1bc_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0065e1bc_r1_1, word_4, 0x4);

struct __attribute__((packed)) Local_0065e1bc_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Local_0065e1bc_r4_1, byte_8, 0x8);
GUEST_OFFSET(Local_0065e1bc_r4_1, byte_9, 0x9);

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) Frame_0065e1bc {
    u8 unknown_0[0x20];  // (not read or written by name)
    u32 word_20;
    u8 unknown_24[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0065e1bc, word_20, 0x20);
GUEST_SIZE(Frame_0065e1bc, 0x28);

u32 AcPlayer_rec__request_state_45(u32 player, u32 r1, gptr<Object_0065e1bc_2> arg2, u32 r3) {
    guest::StackFrameOf<Frame_0065e1bc> frame;  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    frame->word_20 = r12;
    gptr<Local_0065e1bc_r1_1> r1_1 = gptr<Local_0065e1bc_r1_1>(frame.at(0x28).addr());  // (from the original)
    u32 r5_1 = r1_1->word_0;
    u32 r6_1 = r1_1->word_4;
    u32 params_2 = state_params_with_8bc(player, r1_1.addr(), arg2.addr(), r3);
    gptr<Local_0065e1bc_r4_1> r4_1 = gptr<Local_0065e1bc_r4_1>(params_2 + 0xeu);  // (from the original)
    *gptr<u32>(params_2 + 0xeu) = r5_1;  // (from the original)
    u32 r2_1 = u32(r4_1->byte_9) & ~1u;
    r4_1->byte_9 = u8((r2_1 | r3) & ~0xfeu | 0xfeu & r6_1 << 1);  // (from the original)
    float3_xz_to_short2_a(r4_1.addr() + 4u, r1, r2_1);
    r4_1->byte_8 = u8(u32(s32(u32(arg2->half_0)) >> 8));
    frame.release();
    return AcPlayer_rec__change_state(player, 0x45u, params_2, 0u);  // (from the original)
}

}  // namespace d_0065e1bc
GUEST_EXPORT(0x0065e1bc, d_0065e1bc::AcPlayer_rec__request_state_45);

// f_0065e2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x53 (with the flag) or 0x52 with the four bytes; true when it changed.
namespace d_0065e2e0 {

struct __attribute__((packed)) Local_0065e2e0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0065e2e0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0065e2e0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0065e2e0_ea_2 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x4];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_0065e2e0_ea_2, byte_0, 0x0);
GUEST_OFFSET(Local_0065e2e0_ea_2, byte_1, 0x1);
GUEST_OFFSET(Local_0065e2e0_ea_2, byte_2, 0x2);
GUEST_OFFSET(Local_0065e2e0_ea_2, byte_3, 0x3);
GUEST_OFFSET(Local_0065e2e0_ea_2, byte_8, 0x8);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer_rec__request_state_52_or_53(u32 player, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = 0;
    gptr<Local_0065e2e0_ea_1> ea_1 = gptr<Local_0065e2e0_ea_1>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 params_2 = state_params_with_8bc(player, r1, r2, r3);
    gptr<Local_0065e2e0_ea_2> ea_2 = gptr<Local_0065e2e0_ea_2>(params_2 + 0xeu);  // (from the original)
    ea_2->byte_0 = u8(r1);
    ea_2->byte_1 = u8(r2);
    ea_2->byte_2 = u8(r4_1);
    ea_2->byte_3 = u8(r3);
    ea_2->byte_8 = u8(r5_1);
    if (r4_1 != 0) {
        r0_2 = AcPlayer_rec__change_state(player, 0x53u, params_2, 0u);  // (from the original)
        if (r0_2 != 0) {
            r0_2 = 1u;
        }
    } else {
        r0_2 = AcPlayer_rec__change_state(player, 0x52u, params_2, 0u);  // (from the original)
        if (r0_2 != 0) {
            r0_2 = 1u;
        }
    }
    return r0_2;
}

}  // namespace d_0065e2e0
GUEST_EXPORT_FRAMED(0x0065e2e0, d_0065e2e0::AcPlayer_rec__request_state_52_or_53, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0065fc64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When an item blocks the cell at the position, hits it and targets the cell.
namespace d_0065fc64 {

struct __attribute__((packed)) Local_0065fc64_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0065fc64_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0065fc64_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0065fc64_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0065fc64_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0065fc64_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0065fc64_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0065fc64_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0065fc64_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0065fc64_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x005980c0, u32(u32, u32)> item_blocks_world_position;
inline constexpr guest::Function<0x00598d20, u32(u32, u32)> FieldItem__refresh_at;
inline constexpr guest::Function<0x0065ddfc, u32(u32, u32, u32)> set_cell_target_1;

struct __attribute__((packed)) Frame_0065fc64 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0065fc64, word_0, 0x0);
GUEST_OFFSET(Frame_0065fc64, word_4, 0x4);
GUEST_SIZE(Frame_0065fc64, 0x18);

void AcPlayer_rec__hit_item_at_position(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_0065fc64> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0065fc64_ea_1> ea_1 = gptr<Local_0065fc64_ea_1>(frame.at(8).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r1, guest::cpu()->r[3]);
    u32 r5_1 = frame->word_0;
    u32 r6_1 = frame->word_4;
    u32 r0_2 = item_blocks_world_position(r5_1, r6_1);
    if (r0_2 != 0) {
        FieldItem__refresh_at(r5_1, r6_1);
        set_cell_target_1(r0, r5_1, r6_1);
    }
    gptr<Local_0065fc64_ea_2> ea_2 = gptr<Local_0065fc64_ea_2>(frame.at(8).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_2 = ea_2->word_8;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
}

}  // namespace d_0065fc64
GUEST_EXPORT(0x0065fc64, d_0065fc64::AcPlayer_rec__hit_item_at_position);

// f_0065fcc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When an item blocks the cell, hits it and targets the cell; true when it did.
namespace d_0065fcc0 {

inline constexpr guest::Function<0x005980c0, u32(u32, u32, u32, u32)> item_blocks_world_position;
inline constexpr guest::Function<0x00598d20, u32(u32, u32)> FieldItem__refresh_at;
inline constexpr guest::Function<0x0065ddfc, u32(u32, u32, u32)> set_cell_target_1;

u32 AcPlayer_rec__hit_item_at_cell(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = item_blocks_world_position(r1, r2, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        FieldItem__refresh_at(r1, r2);
        set_cell_target_1(r0, r1, r2);
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0065fcc0
GUEST_EXPORT_FRAMED(0x0065fcc0, d_0065fcc0::AcPlayer_rec__hit_item_at_cell, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
