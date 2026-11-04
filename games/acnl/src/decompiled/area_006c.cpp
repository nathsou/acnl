// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006c1678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the held object to state 5 (in the hand) with its owner and the hand matrix.
namespace d_006c1678 {

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> HeldObject__set_state;

void HeldObject__attach_to_hand(u32 r0_unused, u32 object_veneer_2, u32 r2) {
    HeldObject__set_state(guest::cpu()->r[0], 5u, object_veneer_2, r2);
}

}  // namespace d_006c1678
GUEST_EXPORT(0x006c1678, d_006c1678::HeldObject__attach_to_hand);

// f_006c1688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a timer (+0x6d0) and moves the held object to state 0.
namespace d_006c1688 {

struct __attribute__((packed)) HeldObject {
    u8 unknown_0[0x6d0];  // (not used here)
    u16 half_6d0;
};
GUEST_OFFSET(HeldObject, half_6d0, 0x6d0);

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> HeldObject__set_state;

u32 HeldObject__drop_with_timer(gptr<HeldObject> held_object, u32 r1, u32 r2, u32 r3) {
    held_object->half_6d0 = u16(r3);
    return HeldObject__set_state(held_object.addr(), 0u, r1, r2);
}

}  // namespace d_006c1688
GUEST_EXPORT(0x006c1688, d_006c1688::HeldObject__drop_with_timer);

// f_006c1938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The point (9, 0, 36.8) of the object's model matrix, moved for mode flag 2; true when the model has one.
namespace d_006c1938 {

struct __attribute__((packed)) HeldObject {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(HeldObject, word_0, 0x0);
GUEST_OFFSET(HeldObject, word_4, 0x4);
GUEST_OFFSET(HeldObject, word_8, 0x8);

struct __attribute__((packed)) HeldObjectTipPositionArg1 {
    u8 unknown_0[0xa8];  // (not used here)
    u32 word_a8;
};
GUEST_OFFSET(HeldObjectTipPositionArg1, word_a8, 0xa8);

struct __attribute__((packed)) Local_006c1938_r0_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006c1938_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_006c1938_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_006c1938_r0_2, float_8, 0x8);

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> run_if_scene_mode_flag_2;
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> Model__joint_position;

struct __attribute__((packed)) HeldObjectTipPositionFrame {
    u8 unknown_0[0x30];  // (not read or written by name)
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u8 unknown_3c[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(HeldObjectTipPositionFrame, word_30, 0x30);
GUEST_OFFSET(HeldObjectTipPositionFrame, word_34, 0x34);
GUEST_OFFSET(HeldObjectTipPositionFrame, word_38, 0x38);
GUEST_SIZE(HeldObjectTipPositionFrame, 0x58);

u32 HeldObject__tip_position(gptr<HeldObject> held_object, gptr<HeldObjectTipPositionArg1> arg1, float S0, float S1, float S2) {
    guest::StackFrameOf<HeldObjectTipPositionFrame> frame;  // the original's stack frame
    u32 r2_1 = arg1->word_a8;
    u32 r0_1 = Model__joint_position(arg1.addr(), frame.at(0).addr(), r2_1, 0u);
    if (r0_1 == 0) {
        return r0_1;
    }
    gptr<Local_006c1938_r0_2> r0_2 = gptr<Local_006c1938_r0_2>(frame.at(0x48).addr());
    float S2_1 = 32.0f * 1.15f;
    float S1_2 = 0.0f;
    float S0_2 = 9.0f;
    r0_2->float_0 = S0_2;
    r0_2->float_4 = S1_2;
    r0_2->float_8 = S2_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    apply_matrix(frame.at(0x3c).addr(), frame.at(0).addr(), frame.at(0x48).addr());
    run_if_scene_mode_flag_2(frame.at(0x30).addr(), frame.at(0x3c).addr());
    held_object->word_0 = frame->word_30;
    held_object->word_4 = frame->word_34;
    held_object->word_8 = frame->word_38;
    return 1u;
}

}  // namespace d_006c1938
GUEST_EXPORT_FRAMED(0x006c1938, d_006c1938::HeldObject__tip_position, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c19d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For a wear item of kind 0xe: starts the face countdown (+0x584) unless it is busy; true for that kind.
namespace d_006c19d0 {

struct __attribute__((packed)) CharaModel {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(CharaModel, byte_24, 0x24);

struct __attribute__((packed)) Local_006c19d0_r1_4 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
    u8 unknown_66[0x4];  // (not used here)
    u8 byte_6a;
};
GUEST_OFFSET(Local_006c19d0_r1_4, half_64, 0x64);
GUEST_OFFSET(Local_006c19d0_r1_4, byte_6a, 0x6a);

inline constexpr guest::Function<0x002131d4, u32(u32, u32)> CountdownObject__start;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x003117bc, u32(u32)> item_data_byte_0f;

u32 CharaModel__start_face_timer(gptr<CharaModel> chara_model, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    Item__copy_b(frame.at(0).addr(), chara_model.addr() + ((u32(chara_model->byte_24) & 1u) << 4) + 0x3cu);
    u32 r0_3 = item_data_byte_0f(frame.at(0).addr());
    u32 r1_3 = guest::cpu()->r[1];
    if (r0_3 != 0xeu) {
        return 0u;
    }
    u32 r0_4 = *gptr<u32>(chara_model.addr() + ((u32(chara_model->byte_24) & 1u) << 2) + 0x584u);
    if (r0_4 != 0) {
        r1_3 = *gptr<s8>(r0_4 + 0x166au);
        if (r1_3 != 0) {
            guest::cpu()->r[1] = r1_3;
            return 1u;
        }
    }
    if (r0_4 != 0) {
        gptr<Local_006c19d0_r1_4> r1_4 = gptr<Local_006c19d0_r1_4>(r0_4 + 0x1600u);
        if (r1_4->byte_6a != 0) {
            r1_3 = r1_4->half_64;
            if (r1_3 == 0) {
                guest::cpu()->r[1] = r1_3;
                return 1u;
            }
        }
        *frame.at<u16>(0) = *gptr<u16>(r1);
        CountdownObject__start(r0_4, *frame.at<u32>(0));
        return 1u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_006c19d0
GUEST_EXPORT_FRAMED(0x006c19d0, d_006c19d0::CharaModel__start_face_timer, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006c1a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Throws the held object along a direction (keeping its start position when it has none), with a flag, and moves it to
// state 1.
namespace d_006c1a8c {

struct __attribute__((packed)) HeldObject {
    u8 unknown_0[0x644];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
    u32 word_650;
    u32 word_654;
    u32 word_658;
    u8 unknown_65c[0x70];  // (not used here)
    u8 byte_6cc;
};
GUEST_OFFSET(HeldObject, word_644, 0x644);
GUEST_OFFSET(HeldObject, word_648, 0x648);
GUEST_OFFSET(HeldObject, word_64c, 0x64c);
GUEST_OFFSET(HeldObject, word_650, 0x650);
GUEST_OFFSET(HeldObject, word_654, 0x654);
GUEST_OFFSET(HeldObject, word_658, 0x658);
GUEST_OFFSET(HeldObject, byte_6cc, 0x6cc);

struct __attribute__((packed)) HeldObjectThrowArg3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(HeldObjectThrowArg3, word_0, 0x0);
GUEST_OFFSET(HeldObjectThrowArg3, word_4, 0x4);
GUEST_OFFSET(HeldObjectThrowArg3, word_8, 0x8);

struct __attribute__((packed)) Local_006c1a8c_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c1a8c_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_006c1a8c_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_006c1a8c_r1_1, word_8, 0x8);

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> HeldObject__set_state;
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> water_surface_at;

void HeldObject__throw(gptr<HeldObject> held_object, u32 r1, u32 r2, gptr<HeldObjectThrowArg3> arg3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    gptr<Local_006c1a8c_r1_1> r1_1 = gptr<Local_006c1a8c_r1_1>(*frame.at<u32>(0x18));
    float S0_1 = fabsf(std::bit_cast<float>(held_object->word_644));
    if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {
        S0_1 = fabsf(std::bit_cast<float>(held_object->word_64c));
        if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {
            held_object->word_644 = arg3->word_0;
            held_object->word_648 = arg3->word_4;
            held_object->word_64c = arg3->word_8;
        }
    }
    held_object->word_650 = r1_1->word_0;
    u32 r2_1 = r1_1->word_4;
    held_object->word_654 = r2_1;
    held_object->word_658 = r1_1->word_8;
    guest::cpu()->s[0] = S0_1;
    water_surface_at(held_object.addr() + 0x650u, 0u, r2_1, arg3.addr());
    float S0_2 = guest::cpu()->s[0];
    *gptr<u32>((held_object.addr() + 0x400u) + 0x254u) = std::bit_cast<u32>(S0_2);
    held_object->byte_6cc = 1;
    guest::cpu()->s[0] = S0_2;
    frame.release();
    HeldObject__set_state(held_object.addr(), 1u, r1, r2);
    return;
}

}  // namespace d_006c1a8c
GUEST_EXPORT(0x006c1a8c, d_006c1a8c::HeldObject__throw);

// f_006c1ea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Tosses the held object along a direction (keeping its start position when it has none), without the flag, and moves
// it to state 1.
namespace d_006c1ea8 {

struct __attribute__((packed)) HeldObject {
    u8 unknown_0[0x644];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
    u32 word_650;
    u32 word_654;
    u32 word_658;
    u8 unknown_65c[0x70];  // (not used here)
    u8 byte_6cc;
};
GUEST_OFFSET(HeldObject, word_644, 0x644);
GUEST_OFFSET(HeldObject, word_648, 0x648);
GUEST_OFFSET(HeldObject, word_64c, 0x64c);
GUEST_OFFSET(HeldObject, word_650, 0x650);
GUEST_OFFSET(HeldObject, word_654, 0x654);
GUEST_OFFSET(HeldObject, word_658, 0x658);
GUEST_OFFSET(HeldObject, byte_6cc, 0x6cc);

struct __attribute__((packed)) HeldObjectTossArg3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(HeldObjectTossArg3, word_0, 0x0);
GUEST_OFFSET(HeldObjectTossArg3, word_4, 0x4);
GUEST_OFFSET(HeldObjectTossArg3, word_8, 0x8);

struct __attribute__((packed)) Local_006c1ea8_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c1ea8_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_006c1ea8_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_006c1ea8_r1_1, word_8, 0x8);

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> HeldObject__set_state;
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> water_surface_at;

void HeldObject__toss(gptr<HeldObject> held_object, u32 r1, u32 r2, gptr<HeldObjectTossArg3> arg3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    gptr<Local_006c1ea8_r1_1> r1_1 = gptr<Local_006c1ea8_r1_1>(*frame.at<u32>(0x18));
    float S0_1 = fabsf(std::bit_cast<float>(held_object->word_644));
    if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {
        S0_1 = fabsf(std::bit_cast<float>(held_object->word_64c));
        if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {
            held_object->word_644 = arg3->word_0;
            held_object->word_648 = arg3->word_4;
            held_object->word_64c = arg3->word_8;
        }
    }
    held_object->word_650 = r1_1->word_0;
    u32 r2_1 = r1_1->word_4;
    held_object->word_654 = r2_1;
    held_object->word_658 = r1_1->word_8;
    guest::cpu()->s[0] = S0_1;
    water_surface_at(held_object.addr() + 0x650u, 0u, r2_1, arg3.addr());
    float S0_2 = guest::cpu()->s[0];
    *gptr<u32>((held_object.addr() + 0x400u) + 0x254u) = std::bit_cast<u32>(S0_2);
    held_object->byte_6cc = 0;
    guest::cpu()->s[0] = S0_2;
    frame.release();
    HeldObject__set_state(held_object.addr(), 1u, r1, r2);
    return;
}

}  // namespace d_006c1ea8
GUEST_EXPORT(0x006c1ea8, d_006c1ea8::HeldObject__toss);

// f_006c2234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the held object at a position and moves it to state 7.
namespace d_006c2234 {

struct __attribute__((packed)) HeldObject {
    u8 unknown_0[0x644];  // (not used here)
    float float_644;
    float float_648;
    float float_64c;
};
GUEST_OFFSET(HeldObject, float_644, 0x644);
GUEST_OFFSET(HeldObject, float_648, 0x648);
GUEST_OFFSET(HeldObject, float_64c, 0x64c);

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> HeldObject__set_state;

u32 HeldObject__place_at(gptr<HeldObject> held_object, u32 r1, u32 r2, gptr<Float3> arg3) {
    held_object->float_644 = arg3->v[0];
    float S0_1 = arg3->v[1];
    held_object->float_648 = S0_1;
    held_object->float_64c = arg3->v[2];
    guest::cpu()->s[0] = S0_1;
    return HeldObject__set_state(held_object.addr(), 7u, r1, r2);
}

}  // namespace d_006c2234
GUEST_EXPORT(0x006c2234, d_006c2234::HeldObject__place_at);

// f_006c2268: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the held object at a position and moves it to state 4.
namespace d_006c2268 {

struct __attribute__((packed)) HeldObject {
    u8 unknown_0[0x644];  // (not used here)
    float float_644;
    float float_648;
    float float_64c;
};
GUEST_OFFSET(HeldObject, float_644, 0x644);
GUEST_OFFSET(HeldObject, float_648, 0x648);
GUEST_OFFSET(HeldObject, float_64c, 0x64c);

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> HeldObject__set_state;

void HeldObject__set_down_at(gptr<HeldObject> held_object, u32 r1, u32 r2, gptr<Float3> arg3) {
    held_object->float_644 = arg3->v[0];
    float S0_1 = arg3->v[1];
    held_object->float_648 = S0_1;
    held_object->float_64c = arg3->v[2];
    guest::cpu()->s[0] = S0_1;
    HeldObject__set_state(held_object.addr(), 4u, r1, r2);
}

}  // namespace d_006c2268
GUEST_EXPORT(0x006c2268, d_006c2268::HeldObject__set_down_at);

// f_006c229c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a value (+0x710), moves the held object to state 8 and, when asked, clears its attachment (+0x668).
namespace d_006c229c {

struct __attribute__((packed)) HeldObject {
    u8 unknown_0[0x710];  // (not used here)
    u16 half_710;
};
GUEST_OFFSET(HeldObject, half_710, 0x710);

inline constexpr guest::Function<0x0027dc80, u32(u32, u32)> store_u32_argument_at_0_27dc80;
inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> HeldObject__set_state;

u32 HeldObject__hold_with_value(gptr<HeldObject> held_object, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x10);
    held_object->half_710 = u16(r3);
    u32 r0_1 = HeldObject__set_state(held_object.addr(), 8u, r1, r2);
    if (r5_1 != 0) {
        frame.release();
        return store_u32_argument_at_0_27dc80(held_object.addr() + 0x668u, 0u);
    }
    return r0_1;
}

}  // namespace d_006c229c
GUEST_EXPORT(0x006c229c, d_006c229c::HeldObject__hold_with_value);

// f_006c2be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the held object toward its target position over the remaining frames (+0x6d0), or onto it; counts the frames
// down.
namespace d_006c2be4 {

struct __attribute__((packed)) HeldObject {
    u8 unknown_0[0x644];  // (not used here)
    float float_644;
    float float_648;
    float float_64c;
    u8 unknown_650[0x80];  // (not used here)
    u16 half_6d0;
};
GUEST_OFFSET(HeldObject, float_644, 0x644);
GUEST_OFFSET(HeldObject, float_648, 0x648);
GUEST_OFFSET(HeldObject, float_64c, 0x64c);
GUEST_OFFSET(HeldObject, half_6d0, 0x6d0);

struct __attribute__((packed)) Local_006c2be4_r0_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006c2be4_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_006c2be4_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_006c2be4_r0_2, float_8, 0x8);

struct __attribute__((packed)) Local_006c2be4_r2_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006c2be4_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_006c2be4_r2_1, float_4, 0x4);

struct __attribute__((packed)) Local_006c2be4_r4_1 {
    u16 half_0;
};
GUEST_OFFSET(Local_006c2be4_r4_1, half_0, 0x0);

inline constexpr guest::Function<0x006bffb4, u32(u32, u32, u32, u32)> Model__set_upright_matrix;

struct __attribute__((packed)) HeldObjectMoveTowardTargetFrame {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    u8 unknown_10[0xc];  // (not read or written by name)
};
GUEST_OFFSET(HeldObjectMoveTowardTargetFrame, float_0, 0x0);
GUEST_OFFSET(HeldObjectMoveTowardTargetFrame, float_4, 0x4);
GUEST_OFFSET(HeldObjectMoveTowardTargetFrame, float_8, 0x8);
GUEST_OFFSET(HeldObjectMoveTowardTargetFrame, float_c, 0xc);
GUEST_SIZE(HeldObjectMoveTowardTargetFrame, 0x1c);

u32 HeldObject__move_toward_target(gptr<HeldObject> held_object, u32 r1_unused, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrameOf<HeldObjectMoveTowardTargetFrame> frame;  // the original's stack frame
    float S0_1 = 0;
    float S1_1 = 0;
    if (held_object->half_6d0 == 0) {
        Model__set_upright_matrix(held_object.addr() + 0x644u, r2, r2, guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    } else {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        Model__set_upright_matrix(frame.at(0xc).addr(), r2, r2, guest::cpu()->r[3]);
        gptr<Local_006c2be4_r0_2> r0_2 = gptr<Local_006c2be4_r0_2>(frame.at(0).addr());
        gptr<Local_006c2be4_r2_1> r2_1 = gptr<Local_006c2be4_r2_1>(frame.at(0x10).addr());
        float S1_2 = r2_1->float_0 - held_object->float_648;
        float S2_1 = r2_1->float_4 - held_object->float_64c;
        r0_2->float_0 = frame->float_c - held_object->float_644;
        r0_2->float_4 = S1_2;
        r0_2->float_8 = S2_1;
        float S0_2 = 1.0f / float(u32(held_object->half_6d0));
        float S1_3 = frame->float_0 * S0_2;
        frame->float_0 = S1_3;
        frame->float_4 = frame->float_4 * S0_2;
        frame->float_8 = frame->float_8 * S0_2;
        held_object->float_644 = held_object->float_644 + S1_3;
        held_object->float_648 = held_object->float_648 + frame->float_4;
        S1_1 = frame->float_8;
        S0_1 = held_object->float_64c + S1_1;
        held_object->float_64c = S0_1;
    }
    gptr<Local_006c2be4_r4_1> r4_1 = gptr<Local_006c2be4_r4_1>(held_object.addr() + 0x6d0u);
    u32 r0_3 = r4_1->half_0;
    if (r0_3 == 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_3;
    }
    u32 r0_4 = r0_3 >= 1u ? r0_3 - 1u : 0u;
    r4_1->half_0 = u16(r0_4);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_4;
}

}  // namespace d_006c2be4
GUEST_EXPORT_FRAMED(0x006c2be4, d_006c2be4::HeldObject__move_toward_target, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006c3118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a float at +0x5dc.
namespace d_006c3118 {

struct __attribute__((packed)) SetFloat5dcArg0 {
    u8 unknown_0[0x5dc];  // (not used here)
    float float_5dc;
};
GUEST_OFFSET(SetFloat5dcArg0, float_5dc, 0x5dc);


void set_float_5dc(gptr<SetFloat5dcArg0> arg0, float S0) {
    arg0->float_5dc = S0;
}

}  // namespace d_006c3118
GUEST_EXPORT(0x006c3118, d_006c3118::set_float_5dc);

// f_006c3858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the tool bank: its five particle handles, then the exchange bank.
namespace d_006c3858 {

inline constexpr u32 vtable_ExchangeResBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_ = 0x008f09b8u;
inline constexpr u32 vtable_ExchangeModelBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_ = 0x008f28a8u;
inline constexpr u32 vtable_ExchangeModelBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false__at_4b0 = 0x008f28dcu;
inline constexpr u32 vtable_ToolBank = 0x008f8e88u;
inline constexpr u32 vtable_ToolBank_at_4b0 = 0x008f8ebcu;
inline constexpr guest::Function<0x002e6944, u32(u32)> SeadParticleHandle__destructor;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x007c89b8, u32(u32)> false___virtual_0_007c89b8;

u32 ToolBank__destructor(gptr<ExchangeResBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_> the_false) {
    the_false->vtable_4b0 = vtable_ToolBank_at_4b0;
    the_false->vtable = vtable_ToolBank;
    destroy_array_elements(the_false.addr() + 0x7e8u, 0x250560u, 0x60u, 2u);
    destroy_array_elements(the_false.addr() + 0x7b0u, 0x4efa0cu, 0x18u, 2u);
    SeadParticleHandle__destructor(the_false.addr() + 0x790u);
    SeadParticleHandle__destructor(the_false.addr() + 0x768u);
    SeadParticleHandle__destructor(the_false.addr() + 0x750u);
    SeadParticleHandle__destructor(the_false.addr() + 0x6f8u);
    SeadParticleHandle__destructor(the_false.addr() + 0x6dcu);
    the_false->word_668 = 0;
    destroy_array_elements(the_false.addr() + 0x628u, 0x4f14acu, 0xcu, 2u);
    destroy_array_elements(the_false.addr() + 0x594u, 0x6c1654u, 0x24u, 2u);
    destroy_array_elements(the_false.addr() + 0x544u, 0x4ecbe0u, 0x20u, 2u);
    destroy_array_elements(the_false.addr() + 0x504u, 0x4ecbe0u, 0x20u, 2u);
    destroy_array_elements(the_false.addr() + 0x4d4u, 0x4ee8c0u, 0x18u, 2u);
    the_false->vtable_4b0 = vtable_ExchangeModelBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false__at_4b0;
    the_false->vtable = vtable_ExchangeModelBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_;
    destroy_array_elements(the_false.addr() + 0x4b8u, 0x4edd84u, 0xcu, 2u);
    the_false->vtable = vtable_ExchangeResBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_;
    destroy_array_elements(the_false.addr() + 0x60u, 0x53721cu, 0x114u, 4u);
    return false___virtual_0_007c89b8(the_false.addr());
}

}  // namespace d_006c3858
GUEST_EXPORT_FRAMED(0x006c3858, d_006c3858::ToolBank__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c3a58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position of the spawn tile (from 006fa1fc) with height 9, using kind 1 for group 1 of the object at 0x95c6d0
// (else 6).
namespace d_006c3a58 {

struct __attribute__((packed)) Local_006c3a58_r4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c3a58_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_006c3a58_r4_2, word_4, 0x4);

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x006158c4, u32(u32, u32, u32, u32)> global_word_14;
inline constexpr guest::Function<0x006a6e1c, u32(u32, u32, u32, u32)> tile_corner_with_height;
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32, u32, u32)> find_free_cell_in_rect;

struct __attribute__((packed)) GroupSpawnTilePositionFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(GroupSpawnTilePositionFrame, word_0, 0x0);
GUEST_OFFSET(GroupSpawnTilePositionFrame, word_4, 0x4);
GUEST_OFFSET(GroupSpawnTilePositionFrame, word_8, 0x8);
GUEST_SIZE(GroupSpawnTilePositionFrame, 0xc);

u32 group_spawn_tile_position(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<GroupSpawnTilePositionFrame> frame;  // the original's stack frame
    if (r0 == 0) {
        return r0;
    }
    u32 r5_1 = 6u;
    u32 r0_1 = *tour_instance;
    u32 r4_1 = *gptr<s8>(r0_1 + 0x1cu);
    if (r4_1 + 1u != 0 && s32(r4_1) < 0x40) {
        u32 r0_2 = global_word_14(r0_1, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (sxtb(u32(*gptr<u16>(r0_2 + r4_1 * 0x14u + 0x14u))) == 1u) {
            r5_1 = 1u;
        }
    }
    frame->word_4 = 0;
    frame->word_8 = 0;
    find_free_cell_in_rect(frame.at(4).addr(), frame.at(8).addr(), r2, r3);
    gptr<Local_006c3a58_r4_2> r4_2 = gptr<Local_006c3a58_r4_2>(frame.at(4).addr());
    frame->word_0 = r5_1;
    return tile_corner_with_height(r0, r4_2->word_0, r4_2->word_4, 9u);
}

}  // namespace d_006c3a58
GUEST_EXPORT_FRAMED(0x006c3a58, d_006c3a58::group_spawn_tile_position, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006c4200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the record (+0x10 = 0, +0x1c = 0xff) and its item (empty).
namespace d_006c4200 {

struct __attribute__((packed)) ResetHeldItemRecordArg0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
    u8 byte_20;
    u8 byte_21;
    u8 byte_22;
    u8 unknown_23[0xe9];  // (not used here)
    u8 byte_10c;
    u8 byte_10d;
};
GUEST_OFFSET(ResetHeldItemRecordArg0, word_10, 0x10);
GUEST_OFFSET(ResetHeldItemRecordArg0, word_18, 0x18);
GUEST_OFFSET(ResetHeldItemRecordArg0, byte_1c, 0x1c);
GUEST_OFFSET(ResetHeldItemRecordArg0, byte_1d, 0x1d);
GUEST_OFFSET(ResetHeldItemRecordArg0, byte_1e, 0x1e);
GUEST_OFFSET(ResetHeldItemRecordArg0, byte_1f, 0x1f);
GUEST_OFFSET(ResetHeldItemRecordArg0, byte_20, 0x20);
GUEST_OFFSET(ResetHeldItemRecordArg0, byte_21, 0x21);
GUEST_OFFSET(ResetHeldItemRecordArg0, byte_22, 0x22);
GUEST_OFFSET(ResetHeldItemRecordArg0, byte_10c, 0x10c);
GUEST_OFFSET(ResetHeldItemRecordArg0, byte_10d, 0x10d);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;

void reset_held_item_record(gptr<ResetHeldItemRecordArg0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r4_1 = r5 + 0x10u;
    arg0->word_10 = 0;
    arg0->byte_1c = 0xff;
    arg0->byte_1d = 0;
    arg0->byte_1e = 0;
    Item__copy(r5 + 0x14u, empty_item_address, r2, guest::cpu()->r[3]);
    arg0->word_18 = 0;
    r2 = 1u;
    arg0->byte_1f = 0;
    arg0->byte_20 = u8(r2);
    arg0->byte_21 = 2;
    arg0->byte_22 = 3;
    arg0->byte_10c = 3;
    u32 i = 0u;
    arg0->byte_10d = 2;
    do {
        Item__copy(r5 + (i << 2) + 0xecu, empty_item_address, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 8);
}

}  // namespace d_006c4200
GUEST_EXPORT_FRAMED(0x006c4200, d_006c4200::reset_held_item_record, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_006c48ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the group of the entry's slot (+0xc) against 12 (no effect kept).
namespace d_006c48ac {

struct __attribute__((packed)) CheckEntryGroupCArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(CheckEntryGroupCArg0, byte_c, 0xc);

inline constexpr guest::Function<0x006158c4, u32(u32, u32)> global_word_14;

void check_entry_group_c(gptr<CheckEntryGroupCArg0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r5_1 = r0;
    u32 r4_1 = s8(arg0->byte_c);
    if (r4_1 + 1u != 0) {
        if (s32(r4_1) < 0x40) {
            r0 = global_word_14(r0, r1);
            r1 = r4_1 * 5u;
            if (sxtb(u32(*gptr<u16>(r0 + (r1 << 2) + 0x14u))) >= 0xcu) {
                guest::cpu()->r[1] = r1;
                return;
            }
        }
        if (u32(*gptr<s8>(r5_1 + 0xcu)) < 0x40u) {
            global_word_14(r0, r1);
            r1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006c48ac
GUEST_EXPORT_FRAMED(0x006c48ac, d_006c48ac::check_entry_group_c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c4ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks random items by group into an item bit set (with its own random generator).
namespace d_006c4ed0 {

struct __attribute__((packed)) Local_006c4ed0_ea_1 {
    u32 word_0;
    u32 seed;
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
GUEST_OFFSET(Local_006c4ed0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c4ed0_ea_1, seed, 0x4);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_28, 0x28);

struct __attribute__((packed)) Local_006c4ed0_ea_2 {
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
GUEST_OFFSET(Local_006c4ed0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_20, 0x20);

struct __attribute__((packed)) Local_006c4ed0_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_006c4ed0_r1_2, word_0, 0x0);
GUEST_OFFSET(Local_006c4ed0_r1_2, word_4, 0x4);
GUEST_OFFSET(Local_006c4ed0_r1_2, word_8, 0x8);
GUEST_OFFSET(Local_006c4ed0_r1_2, word_c, 0xc);
GUEST_OFFSET(Local_006c4ed0_r1_2, word_10, 0x10);

struct __attribute__((packed)) Local_006c4ed0_r2_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Local_006c4ed0_r2_1, word_14, 0x14);
GUEST_OFFSET(Local_006c4ed0_r2_1, word_18, 0x18);
GUEST_OFFSET(Local_006c4ed0_r2_1, word_1c, 0x1c);
GUEST_OFFSET(Local_006c4ed0_r2_1, word_20, 0x20);
GUEST_OFFSET(Local_006c4ed0_r2_1, word_24, 0x24);

inline constexpr guest::Function<0x0024a5ec, u32(u32, u32, u32, u32)> ItemBitSet__clear;
inline constexpr guest::Function<0x0024a5f4, u32(u32, u32, u32, u32)> ItemBitSet__set_bit_of;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x0055cabc, u32(u32, u32, u32, u32)> Random__seed;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> station_is_waited_for;
inline constexpr guest::Function<0x00768b4c, u32(u32, u32, u32, u32)> Item__group_2;
inline constexpr guest::Function<0x00768da0, u32(u32, u32, u32, u32)> Item__index;

void pick_random_items_by_group(u32 j, u32 seed, u32 r2, u32 r3) {
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006c4ed0_r1_2> r1_2 = gptr<Local_006c4ed0_r1_2>(0u);
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_3 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    gptr<Local_006c4ed0_ea_1> ea_1 = gptr<Local_006c4ed0_ea_1>(r13 - 0x2c);
    ea_1->word_0 = j;
    ea_1->seed = seed;
    ea_1->word_8 = i;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r8;
    ea_1->word_1c = r9;
    ea_1->word_20 = r10;
    ea_1->word_24 = r11;
    ea_1->word_28 = r14;
    r13 -= 0x3e0u;
    guest::cpu()->r[13] = r13;
    Random__seed(r13 + 0x390u, seed, r2, r3);
    r11 = 0u;
    j = r11;
    i = r13 + 0x2e8u;
    do {
        u32 r1_1 = j + (j << 2);
        j += 1u;
        gptr<Local_006c4ed0_r2_1> r2_1 = gptr<Local_006c4ed0_r2_1>(*gptr<u32>(r13 + 0x3b4u) + (r1_1 << 2));
        r1_2 = gptr<Local_006c4ed0_r1_2>(i + (r1_1 << 2));
        r1_2->word_0 = r2_1->word_14;
        r1_2->word_4 = r2_1->word_18;
        r1_2->word_8 = r2_1->word_1c;
        r3_1 = r2_1->word_20;
        r1_2->word_c = r3_1;
        r2_2 = r2_1->word_24;
        r1_2->word_10 = r2_2;
        guest::preempt();
    } while (s32(j) < 6);
    guest::cpu()->r[13] = r13;
    ItemBitSet__clear(r13, r1_2.addr(), r2_2, r3_1);
    seed = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x37cu) = 0;
    *gptr<u32>(r13 + 0x384u) = *gptr<u32>(r13 + 0x3b4u) + 0x14u;
    do {
        if ((*gptr<u32>(r13 + 0x37cu) & 0xffu) != 0) {
            u32 r0_3 = *gptr<u32>(r13 + 0x37cu) & 0xffu;
            guest::cpu()->r[13] = r13;
            u32 r0_4 = station_is_waited_for(r0_3, seed, r2, r3);
            seed = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 == 0) {
                goto L_6c5124;
            }
        }
        r10 = 0u;
        r6 = 0u;
        *gptr<u32>(r13 + 0x368u) = 0;
        *gptr<u32>(r13 + 0x36cu) = 0;
        r0_5 = *gptr<u32>(r13 + 0x37cu);
        r0_6 = r0_5 + (r0_5 << 2);
        r7 = *gptr<u32>(r13 + 0x384u) + (r0_6 << 2);
        seed = *gptr<u32>(r13 + 0x3b4u);
        *gptr<u32>(r13 + 0x374u) = seed + (r0_6 << 2);
        goto L_6c4fac;
L_6c4fa4:;
        if (s32(r6) >= 3) {
            goto L_6c5124;
        }
L_6c4fac:;
        r10 += 1u;
        if (r11 == 0 && s32(r10) >= 0x3e8) {
            r11 = 1u;
        }
        r0_7 = r13 + 0x390u;
        guest::cpu()->r[13] = r13;
        r0_8 = Xorshift128__next_0055cb58(r0_7, seed, r2, r3);
        seed = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r9 = u64(r0_8) * 5u >> 0x20;
        if (*gptr<u8>(r13 + 0x368u + r9) != 0) {
            guest::preempt();
            goto L_6c4fa4;
        }
        r0_9 = r13 + 0x390u;
        guest::cpu()->r[13] = r13;
        r0_10 = Xorshift128__next_0055cb58(r0_9, seed, r2, r3);
        r2_3 = r9 + (r9 << 2);
        r0_11 = r13 + 0x2e8u + (r2_3 << 2) + (u32(u64(r0_10) * 0xau >> 0x20) << 1);
        *gptr<u32>(r13 + 0x3a8u) = r0_11;
        r1_3 = *gptr<u16>(r0_11);
        r0_12 = r13 + 0x388u;
        guest::cpu()->r[13] = r13;
        construct_item(r0_12, r1_3, r2_3);
        r0_13 = r13 + 0x388u;
        guest::cpu()->r[13] = r13;
        r0_14 = Item__is_empty(r0_13);
        seed = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_14 == 0) {
            r8 = 0u;
            guest::cpu()->r[13] = r13;
            u32 r0_16 = Item__index(r13 + 0x388u, seed, r2, r3);
            seed = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (s32(r0_16) < 0) {
                goto L_6c5078;
            }
            seed = s32(r0_16) >> 5;
            if (seed >= 0xbau) {
                goto L_6c5078;
            }
            seed = gptr<u32>(r13)[seed];
            if (((seed >> (r0_16 & 0x1fu)) & 1u) == 0) {
                goto L_6c5078;
            }
        }
        guest::preempt();
        goto L_6c4fa4;
L_6c5078:;
        if (r11 == 0) {
            i = 0u;
            if (s32(r6) > 0) {
                do {
                    guest::cpu()->r[13] = r13;
                    u32 group = Item__group_2(r13 + 0x388u, seed, r2, r3);
                    u32 r1_5 = *gptr<u16>(r7 + (i << 1) + 0x78u);
                    guest::cpu()->r[13] = r13;
                    u32 r0_21 = construct_item(r13 + 0x378u, r1_5, guest::cpu()->r[2]);
                    guest::cpu()->r[13] = r13;
                    u32 group_2 = Item__group_2(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    seed = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if ((group == group_2) != 0) {
                        r8 = 1u;
                    }
                    i += 1u;
                    guest::preempt();
                } while (s32(r6) > s32(i));
                if (r8 != 0) {
                    guest::preempt();
                    goto L_6c4fa4;
                }
            }
        }
        *gptr<u16>(*gptr<u32>(r13 + 0x374u) + (r6 << 1) + 0x8cu) = *gptr<u16>(*gptr<u32>(r13 + 0x3a8u));
        r1_7 = r13 + 0x388u;
        r0_23 = r13;
        guest::cpu()->r[13] = r13;
        ItemBitSet__set_bit_of(r0_23, r1_7, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = *gptr<u32>(r13 + 0x3a8u);
        r6 += 1u;
        *gptr<u16>(r2) = 0x7ffe;
        seed = r13 + 0x368u;
        *gptr<u8>(seed + r9) = 1;
        guest::preempt();
        goto L_6c4fa4;
L_6c5124:;
        r0_24 = *gptr<u32>(r13 + 0x37cu) + 1u;
        *gptr<u32>(r13 + 0x37cu) = r0_24;
        guest::preempt();
    } while (s32(r0_24) < 4);
    i = 0u;
    do {
        if ((i & 0xffu) != 0) {
            guest::cpu()->r[13] = r13;
            u32 r0_26 = station_is_waited_for(i & 0xffu, seed, r2, r3);
            seed = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_26 == 0) {
                goto L_6c5168;
            }
        }
        j = 0u;
        do {
            j += 1u;
            guest::preempt();
        } while (s32(j) < 3);
L_6c5168:;
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    r13 += 0x3bcu;
    gptr<Local_006c4ed0_ea_2> ea_2 = gptr<Local_006c4ed0_ea_2>(r13);
    r13 += 0x24;
    u32 r4_2 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    u32 r9_1 = ea_2->word_14;
    u32 r10_1 = ea_2->word_18;
    u32 r11_1 = ea_2->word_1c;
    guest::cpu()->r[1] = seed;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_006c4ed0
GUEST_EXPORT(0x006c4ed0, d_006c4ed0::pick_random_items_by_group);

// f_006c5c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The height of the ground at a position (0 outside the map).
namespace d_006c5c60 {

struct __attribute__((packed)) Local_006c5c60_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c5c60_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c5c60_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006c5c60_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c5c60_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_006c5c60_r3_2, word_4, 0x4);

struct __attribute__((packed)) Local_006c5c60_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c5c60_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_006c5c60_r3_3, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> cell_and_tile_of_position;
inline constexpr guest::Function<0x006a930c, u32(u32, u32, u32, u32)> ssys__ma__Vec3i__Vec3i_006a930c;
inline constexpr guest::Function<0x006a96d8, u32(u32, u32, u32)> GridCellLarge__tile_height;
inline constexpr guest::Function<0x006f6810, u32(u32, u32, u32, u32)> triangle_height_at;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d868, u32(u32, u32, u32, u32)> GridCellLarge__tile_has_flag_6;

struct __attribute__((packed)) GroundHeightAtFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x28];  // (not read or written by name)
};
GUEST_OFFSET(GroundHeightAtFrame, word_0, 0x0);
GUEST_OFFSET(GroundHeightAtFrame, word_4, 0x4);
GUEST_OFFSET(GroundHeightAtFrame, word_8, 0x8);
GUEST_OFFSET(GroundHeightAtFrame, word_c, 0xc);
GUEST_OFFSET(GroundHeightAtFrame, word_10, 0x10);
GUEST_SIZE(GroundHeightAtFrame, 0x3c);

u32 ground_height_at(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<GroundHeightAtFrame> frame;  // the original's stack frame
    u32 map_2 = read_map_table(r1, r1, r2, r3);
    if (map_2 != 0) {
        frame->word_c = 0;
        frame->word_10 = 0;
        frame->word_4 = 0;
        frame->word_8 = 0;
        frame->word_0 = r0;
        cell_and_tile_of_position(frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(4).addr(), frame.at(8).addr());
        gptr<Local_006c5c60_r3_2> r3_2 = gptr<Local_006c5c60_r3_2>(frame.at(0xc).addr());
        map_2 = GridMap__large_cell_at(map_2, r3_2->word_0, r3_2->word_4, r3_2.addr());
        if (map_2 != 0) {
            gptr<Local_006c5c60_r3_3> r3_3 = gptr<Local_006c5c60_r3_3>(frame.at(4).addr());
            if (GridCellLarge__tile_has_flag_6(map_2, r3_3->word_0, r3_3->word_4, r3_3.addr()) != 0) {
                gptr<Local_006c5c60_ea_1> ea_1 = gptr<Local_006c5c60_ea_1>(frame.at(4).addr());
                return GridCellLarge__tile_height(map_2, ea_1->word_0, ea_1->word_4);
            }
            frame->word_0 = r0;
            ssys__ma__Vec3i__Vec3i_006a930c(map_2, frame.at(0x14).addr(), frame.at(0x20).addr(), frame.at(0x2c).addr());
            u32 triangle_height_2 = triangle_height_at(r0, frame.at(0x14).addr(), frame.at(0x20).addr(), frame.at(0x2c).addr());
            return triangle_height_2;
        }
    }
    float S0_8 = 0.0f;
    guest::cpu()->s[0] = S0_8;
    return map_2;
}

}  // namespace d_006c5c60
GUEST_EXPORT_FRAMED(0x006c5c60, d_006c5c60::ground_height_at, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006c5d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The ground's normal at a position (from its large cell's triangle), or up (0, 1, 0) when there is no map.
namespace d_006c5d30 {

struct __attribute__((packed)) Local_006c5d30_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c5d30_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c5d30_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006c5d30_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_006c5d30_r1_5 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006c5d30_r1_5, float_0, 0x0);
GUEST_OFFSET(Local_006c5d30_r1_5, float_4, 0x4);

struct __attribute__((packed)) Local_006c5d30_r1_6 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006c5d30_r1_6, float_0, 0x0);
GUEST_OFFSET(Local_006c5d30_r1_6, float_4, 0x4);
GUEST_OFFSET(Local_006c5d30_r1_6, float_8, 0x8);

struct __attribute__((packed)) Local_006c5d30_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c5d30_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_006c5d30_r3_2, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x0056a378, u32(u32)> normalize;
inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> cell_and_tile_of_position;
inline constexpr guest::Function<0x006a930c, u32(u32, u32, u32, u32)> ssys__ma__Vec3i__Vec3i_006a930c;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;

struct __attribute__((packed)) GroundNormalAtPositionFrame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
    float float_14;
    u8 unknown_18[0x8];  // (not read or written by name)
    float float_20;
    float float_24;
    float float_28;
    u8 unknown_2c[0x18];  // (not read or written by name)
    float float_44;
    float float_48;
    float float_4c;
    u8 unknown_50[0x8];  // (not read or written by name)
};
GUEST_OFFSET(GroundNormalAtPositionFrame, word_0, 0x0);
GUEST_OFFSET(GroundNormalAtPositionFrame, float_14, 0x14);
GUEST_OFFSET(GroundNormalAtPositionFrame, float_20, 0x20);
GUEST_OFFSET(GroundNormalAtPositionFrame, float_24, 0x24);
GUEST_OFFSET(GroundNormalAtPositionFrame, float_28, 0x28);
GUEST_OFFSET(GroundNormalAtPositionFrame, float_44, 0x44);
GUEST_OFFSET(GroundNormalAtPositionFrame, float_48, 0x48);
GUEST_OFFSET(GroundNormalAtPositionFrame, float_4c, 0x4c);
GUEST_SIZE(GroundNormalAtPositionFrame, 0x58);

u32 ground_normal_at_position(gptr<Float3> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8) {
    guest::StackFrameOf<GroundNormalAtPositionFrame> frame;  // the original's stack frame
    u32 map_2 = read_map_table(r2, r1, r2, r3);
    if (map_2 != 0) {
        frame->word_0 = r1;
        cell_and_tile_of_position(frame.at(0x34).addr(), frame.at(0x38).addr(), frame.at(0x50).addr(), frame.at(0x54).addr());
        gptr<Local_006c5d30_r3_2> r3_2 = gptr<Local_006c5d30_r3_2>(frame.at(0x34).addr());
        map_2 = GridMap__large_cell_at(map_2, r3_2->word_0, r3_2->word_4, r3_2.addr());
        if (map_2 != 0) {
            frame->word_0 = r1;
            ssys__ma__Vec3i__Vec3i_006a930c(map_2, frame.at(0x14).addr(), frame.at(0x20).addr(), frame.at(8).addr());
            gptr<Local_006c5d30_r1_5> r1_5 = gptr<Local_006c5d30_r1_5>(frame.at(0x18).addr());
            float S3_4 = frame->float_28;
            float S5_4 = frame->float_20;
            float S4_4 = frame->float_24;
            float S0_4 = r1_5->float_0;
            float S1_4 = r1_5->float_4;
            gptr<Local_006c5d30_r1_6> r1_6 = gptr<Local_006c5d30_r1_6>(frame.at(8).addr());
            float S2_4 = S5_4 - frame->float_14;
            float S0_5 = S4_4 - S0_4;
            float S1_5 = S3_4 - S1_4;
            float S5_5 = r1_6->float_0 - S5_4;
            float S3_5 = r1_6->float_8 - S3_4;
            float S4_5 = r1_6->float_4 - S4_4;
            frame->float_44 = S0_5 * S3_5 - S1_5 * S4_5;
            frame->float_48 = S1_5 * S5_5 - S2_4 * S3_5;
            frame->float_4c = S2_4 * S4_5 - S0_5 * S5_5;
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1_5;
            normalize(frame.at(0x44).addr());
            gptr<Local_006c5d30_ea_1> ea_1 = gptr<Local_006c5d30_ea_1>(frame.at(0x44).addr());
            u32 r0_4 = ea_1->word_0;
            u32 r1_7 = ea_1->word_4;
            u32 r2_4 = ea_1->word_8;
            arg0->v[0] = std::bit_cast<float>(u32(r0_4));
            arg0->v[1] = std::bit_cast<float>(u32(r1_7));
            arg0->v[2] = std::bit_cast<float>(u32(r2_4));
            guest::cpu()->r[1] = r1_7;
            return r0_4;
        }
    }
    float S0_7 = 0.0f;
    float S1_7 = 1.0f;
    arg0->v[0] = S0_7;
    arg0->v[1] = S1_7;
    arg0->v[2] = S0_7;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    return map_2;
}

}  // namespace d_006c5d30
GUEST_EXPORT_FRAMED(0x006c5d30, d_006c5d30::ground_normal_at_position, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c5e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value (table 0x95da1d) of the terrain at a block tile, unless one of the two cells above is of terrain 3.
namespace d_006c5e2c {

inline constexpr guest::Function<0x00315788, u32(u32, u32, u32)> terrain_at_world;
inline constexpr guest::Function<0x005ce154, u32(u32, u32)> byte_95da1d;
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> position_of_block;
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> terrain_at_block_tile;

struct __attribute__((packed)) BlockTileTerrainValueFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x28];  // (not read or written by name)
};
GUEST_OFFSET(BlockTileTerrainValueFrame, word_0, 0x0);
GUEST_OFFSET(BlockTileTerrainValueFrame, word_4, 0x4);
GUEST_OFFSET(BlockTileTerrainValueFrame, word_8, 0x8);
GUEST_OFFSET(BlockTileTerrainValueFrame, word_c, 0xc);
GUEST_SIZE(BlockTileTerrainValueFrame, 0x38);

u32 block_tile_terrain_value(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BlockTileTerrainValueFrame> frame;  // the original's stack frame
    frame->word_8 = 0;
    frame->word_c = 0;
    u32 r5_1 = *frame.at<u32>(0x38);
    frame->word_0 = r2;
    frame->word_4 = r3;
    position_of_block(frame.at(8).addr(), frame.at(0xc).addr(), r0, r1);
    u32 r4_1 = frame->word_c;
    u32 r11_1 = frame->word_8;
    u32 r0_2 = terrain_at_world(r11_1, r4_1 - 1u, r5_1);
    u32 r0_3 = terrain_at_world(r11_1, r4_1 - 2u, r5_1);
    if (r0_2 == 3u || r0_3 == 3u) {
    } else {
        frame->word_0 = r5_1;
        u32 r0_4 = terrain_at_block_tile(r0, r1, r2, r3);
        frame.release();
        return byte_95da1d(r0_4, guest::cpu()->r[1]);
    }
    return 0u;
}

}  // namespace d_006c5e2c
GUEST_EXPORT(0x006c5e2c, d_006c5e2c::block_tile_terrain_value);

// f_006c6188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 006c61d8 with the block and tile of a world position.
namespace d_006c6188 {

struct __attribute__((packed)) Local_006c6188_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c6188_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c6188_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c6188_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c6188_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> split_world_position;
inline constexpr guest::Function<0x006c61d8, u32(u32, u32, u32, u32)> terrain_record_at;

struct __attribute__((packed)) TerrainCheckAtWorldPositionFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(TerrainCheckAtWorldPositionFrame, word_0, 0x0);
GUEST_OFFSET(TerrainCheckAtWorldPositionFrame, word_4, 0x4);
GUEST_OFFSET(TerrainCheckAtWorldPositionFrame, word_8, 0x8);
GUEST_OFFSET(TerrainCheckAtWorldPositionFrame, word_c, 0xc);
GUEST_OFFSET(TerrainCheckAtWorldPositionFrame, word_10, 0x10);
GUEST_OFFSET(TerrainCheckAtWorldPositionFrame, word_14, 0x14);
GUEST_SIZE(TerrainCheckAtWorldPositionFrame, 0x18);

u32 terrain_check_at_world_position(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<TerrainCheckAtWorldPositionFrame> frame;  // the original's stack frame
    frame->word_14 = 0;
    frame->word_0 = r0;
    frame->word_4 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    split_world_position(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());
    frame->word_0 = r2;
    gptr<Local_006c6188_ea_2> ea_2 = gptr<Local_006c6188_ea_2>(frame.at(8).addr());
    u32 terrain_record_2 = terrain_record_at(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
    return terrain_record_2;
}

}  // namespace d_006c6188
GUEST_EXPORT_FRAMED(0x006c6188, d_006c6188::terrain_check_at_world_position, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c6640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The height at a position: the ground's, or for water, cliffs and similar terrain the surface's.
namespace d_006c6640 {

struct __attribute__((packed)) Local_006c6640_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c6640_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c6640_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006c6640_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006c6640_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_006c6640_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c6640_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006c6640_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_006c6640_ea_3, word_8, 0x8);

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> cell_and_tile_of_position;
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> terrain_at_block_tile;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> ground_height_at;
inline constexpr guest::Function<0x006c75e0, u32(u32, u32, u32, u32)> MapTable__height_at;

struct __attribute__((packed)) SurfaceHeightAt2Frame {
    u32 position;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SurfaceHeightAt2Frame, position, 0x0);
GUEST_OFFSET(SurfaceHeightAt2Frame, word_4, 0x4);
GUEST_OFFSET(SurfaceHeightAt2Frame, word_8, 0x8);
GUEST_OFFSET(SurfaceHeightAt2Frame, word_c, 0xc);
GUEST_OFFSET(SurfaceHeightAt2Frame, word_10, 0x10);
GUEST_OFFSET(SurfaceHeightAt2Frame, word_14, 0x14);
GUEST_OFFSET(SurfaceHeightAt2Frame, word_18, 0x18);
GUEST_OFFSET(SurfaceHeightAt2Frame, word_1c, 0x1c);
GUEST_OFFSET(SurfaceHeightAt2Frame, word_20, 0x20);
GUEST_SIZE(SurfaceHeightAt2Frame, 0x28);

u32 surface_height_at_2(u32 position, u32 r1) {
    guest::StackFrameOf<SurfaceHeightAt2Frame> frame;  // the original's stack frame
    frame->position = position;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    cell_and_tile_of_position(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());
    gptr<Local_006c6640_ea_1> ea_1 = gptr<Local_006c6640_ea_1>(frame.at(8).addr());
    u32 r0_2 = ea_1->word_0;
    u32 r1_2 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    u32 r3_2 = ea_1->word_c;
    frame->position = r1;
    u32 terrain = terrain_at_block_tile(r0_2, r1_2, r2_2, r3_2);
    if (terrain != 2u && terrain != 0xf8u && terrain != 4u && terrain != 3u && terrain != 0xa2u && terrain != 0xa3u && terrain != 0xa4u && terrain != 0xa5u) {
        u32 ground_height = ground_height_at(position, r1);
        return ground_height;
    }
    frame->word_4 = 0;
    frame->word_18 = 0;
    frame->word_1c = 0;
    frame->position = position;
    frame->word_20 = 0;
    cell_and_tile_of_position(frame.at(4).addr(), frame.at(0x18).addr(), frame.at(0x1c).addr(), frame.at(0x20).addr());
    frame->position = r1;
    gptr<Local_006c6640_ea_3> ea_3 = gptr<Local_006c6640_ea_3>(frame.at(0x18).addr());
    u32 height_2 = MapTable__height_at(frame->word_4, ea_3->word_0, ea_3->word_4, ea_3->word_8);
    return height_2;
}

}  // namespace d_006c6640
GUEST_EXPORT_FRAMED(0x006c6640, d_006c6640::surface_height_at_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c6714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns the mode's items on the map (by its record and blocks).
namespace d_006c6714 {

inline constexpr u32 mode_spawn_items_address = 0x0094eddcu;
inline constexpr u32 global_0095d324_address = 0x0095d324u;
inline guest::global<u32, 0x0094eddc> mode_spawn_items;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x0030512c, u32(u32, u32)> record_302_address_0030512c;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32)> block_or_first;
inline constexpr guest::Function<0x00313440, u32(u32)> flagged_mode_ordinal;
inline constexpr guest::Function<0x005b3ec4, u32(u32)> read_scene_change_step;
inline constexpr guest::Function<0x005b4358, u32(u32, u32)> is_special_kind_005b4358;
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> item_at_position_2;
inline constexpr guest::Function<0x006f9638, u32(u32)> list_position_of_mode;
inline constexpr guest::Function<0x006f9c08, u32(u32)> map_record_of_mode;
inline constexpr guest::Function<0x006f9db4, u32(u32)> position_in_1b_to_1d;
inline constexpr guest::Function<0x006fa728, u32(u32)> scene_room_record_byte;
inline constexpr guest::Function<0x006fb0cc, u32(u32)> byte_of_952742;
inline constexpr guest::Function<0x0071f644, u32(u32, u32)> construct_item_from_half_4;
inline constexpr guest::Function<0x007203f0, u32(u32)> member_address_0x2f6_;
inline constexpr guest::Function<0x0075d990, u32(u32)> scene_a1_a2_word;
inline constexpr guest::Function<0x0076ab04, u32(u32)> item_table_byte;
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32)> record_173_address;

u32 spawn_items_for_mode(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_32 = 0;
    for (;;) {
        u32 item_2 = item_at_position_2(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r4_1 = item_2;
        if (item_2 == 0xeu) {
            u32 scene_11 = current_scene_id(item_2);
            u32 scene_flagged_6 = scene_has_flags(0x40u, scene_11);
            if (scene_flagged_6 != 0) {
                u32 scene_12 = current_scene_id(scene_flagged_6);
                u32 r0_6 = flagged_mode_ordinal(scene_12);
                u32 data_base = get_data_base(r0_6);
                u32 records = slot_records_of(data_base);
                u32 valid_villager = valid_villager_at(records + 4u, r0_6);
                if (valid_villager != 0) {
                    Item__copy_b(frame.at(0).addr(), valid_villager + 0x24a6u);
                    r4_1 = item_table_byte(frame.at(0).addr());
                }
            } else {
                u32 scene_13 = current_scene_id(scene_flagged_6);
                u32 r0_15 = is_special_kind_005b4358(scene_13, 1u);
                if (r0_15 != 0) {
                    u32 r0_16 = frame.at(4).addr();
                    construct_item(r0_16, 0x23ebu);
                    r4_1 = item_table_byte(r0_16);
                    u32 r0_19 = read_scene_change_step(frame.at(4).addr());
                    if (r0_19 != 0) {
                        u32 r0_20 = scene_a1_a2_word(r0_19);
                        if (r0_20 != 0) {
                            construct_item_from_half_4(frame.at(0).addr(), r0_20);
                            r4_1 = item_table_byte(frame.at(0).addr());
                        }
                    }
                } else {
                    u32 scene_14 = current_scene_id(r0_15);
                    u32 scene_flagged_7 = scene_has_flags(0x80u, scene_14);
                    if (scene_flagged_7 != 0) {
                        u32 scene_15 = current_scene_id(scene_flagged_7);
                        u32 position = list_position_of_mode(scene_15);
                        u32 save_data = get_save_data(position);
                        u32 r0_29 = scene_room_record_byte(position);
                        u32 r0_30 = byte_of_952742(position);
                        r0_32 = record_302_address_0030512c(block_or_first(save_data + 0x5d900u, r0_29), r0_30);
                    } else {
                        u32 scene_16 = current_scene_id(scene_flagged_7);
                        u32 scene_flagged_8 = scene_has_flags(0x2000u, scene_16);
                        if (scene_flagged_8 != 0) {
                            u32 scene_17 = current_scene_id(scene_flagged_8);
                            u32 position_2 = list_position_of_mode(scene_17);
                            u32 r0_37 = position_in_1b_to_1d(position_2);
                            u32 save_data_2 = get_save_data(r0_37);
                            r0_32 = record_173_address(save_data_2 + 0x6aeb8u, r0_37) + 2u;
                        } else {
                            u32 scene_18 = current_scene_id(scene_flagged_8);
                            u32 scene_flagged_9 = scene_has_flags(0x100000u, scene_18);
                            if (scene_flagged_9 != 0) {
                                r4_1 = 0x13u;
                                u32 r0_43 = *mode_spawn_items;
                                if (r0_43 == 0) {
                                    goto L_6c69c8;
                                }
                                r4_1 = item_table_byte(r0_43 + 0x28u);
                                goto L_6c69c8;
                            }
                            u32 scene_19 = current_scene_id(scene_flagged_9);
                            u32 scene_flagged_10 = scene_has_flags(0x4000u, scene_19);
                            if (scene_flagged_10 == 0) {
                                goto L_6c69c8;
                            }
                            u32 scene_20 = current_scene_id(scene_flagged_10);
                            r0_32 = map_record_of_mode(scene_20);
                            if (r0_32 == 0) {
                                goto L_6c69c8;
                            }
                        }
                    }
                    r4_1 = item_table_byte(member_address_0x2f6_(r0_32));
                }
            }
        }
L_6c69c8:;
        r0 = r4_1;
        if (!1) {
            break;
        }
        if (r0 >= 0xffu) {
            r0 = 0u;
        }
        return gptr<u32>(global_0095d324_address)[r0];
        guest::preempt();
    }
}

}  // namespace d_006c6714
GUEST_EXPORT_FRAMED(0x006c6714, d_006c6714::spawn_items_for_mode, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c69e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the terrain at a position (cell and tile) is in the list at 0x89068f.
namespace d_006c69e4 {

struct __attribute__((packed)) Local_006c69e4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c69e4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c69e4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c69e4_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c69e4_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> cell_and_tile_of_position;
inline constexpr guest::Function<0x006c6a84, u32(u32, u32, u32, u32)> terrain_is_in_list_at_block_tile;

struct __attribute__((packed)) TerrainIsInListAtPositionFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(TerrainIsInListAtPositionFrame, word_0, 0x0);
GUEST_OFFSET(TerrainIsInListAtPositionFrame, word_4, 0x4);
GUEST_OFFSET(TerrainIsInListAtPositionFrame, word_8, 0x8);
GUEST_OFFSET(TerrainIsInListAtPositionFrame, word_c, 0xc);
GUEST_OFFSET(TerrainIsInListAtPositionFrame, word_10, 0x10);
GUEST_SIZE(TerrainIsInListAtPositionFrame, 0x18);

u32 terrain_is_in_list_at_position(u32 r0, u32 r1) {
    guest::StackFrameOf<TerrainIsInListAtPositionFrame> frame;  // the original's stack frame
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_0 = r0;
    frame->word_10 = 0;
    cell_and_tile_of_position(frame.at(4).addr(), frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr());
    frame->word_0 = r1;
    gptr<Local_006c69e4_ea_2> ea_2 = gptr<Local_006c69e4_ea_2>(frame.at(4).addr());
    return terrain_is_in_list_at_block_tile(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
}

}  // namespace d_006c69e4
GUEST_EXPORT_FRAMED(0x006c69e4, d_006c69e4::terrain_is_in_list_at_position, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c6a34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the terrain at a world position (block and tile) is in the list at 0x89068f.
namespace d_006c6a34 {

struct __attribute__((packed)) Local_006c6a34_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c6a34_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c6a34_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c6a34_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c6a34_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> split_world_position;
inline constexpr guest::Function<0x006c6a84, u32(u32, u32, u32, u32)> terrain_is_in_list_at_block_tile;

struct __attribute__((packed)) TerrainIsInListAtWorldFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(TerrainIsInListAtWorldFrame, word_0, 0x0);
GUEST_OFFSET(TerrainIsInListAtWorldFrame, word_4, 0x4);
GUEST_OFFSET(TerrainIsInListAtWorldFrame, word_8, 0x8);
GUEST_OFFSET(TerrainIsInListAtWorldFrame, word_c, 0xc);
GUEST_OFFSET(TerrainIsInListAtWorldFrame, word_10, 0x10);
GUEST_OFFSET(TerrainIsInListAtWorldFrame, word_14, 0x14);
GUEST_SIZE(TerrainIsInListAtWorldFrame, 0x18);

u32 terrain_is_in_list_at_world(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<TerrainIsInListAtWorldFrame> frame;  // the original's stack frame
    frame->word_14 = 0;
    frame->word_0 = r0;
    frame->word_4 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    split_world_position(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());
    frame->word_0 = r2;
    gptr<Local_006c6a34_ea_2> ea_2 = gptr<Local_006c6a34_ea_2>(frame.at(8).addr());
    return terrain_is_in_list_at_block_tile(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
}

}  // namespace d_006c6a34
GUEST_EXPORT_FRAMED(0x006c6a34, d_006c6a34::terrain_is_in_list_at_world, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c6a84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether any of the four parts of the terrain at a block tile is in the 90-entry list at 0x89068f.
namespace d_006c6a84 {

inline constexpr guest::Function<0x005cdfe8, u32(u32, u32)> terrain_record;
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> terrain_at_block_tile;

struct __attribute__((packed)) TerrainIsInListAtBlockTileFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(TerrainIsInListAtBlockTileFrame, word_0, 0x0);
GUEST_OFFSET(TerrainIsInListAtBlockTileFrame, byte_8, 0x8);
GUEST_OFFSET(TerrainIsInListAtBlockTileFrame, byte_9, 0x9);
GUEST_OFFSET(TerrainIsInListAtBlockTileFrame, byte_a, 0xa);
GUEST_OFFSET(TerrainIsInListAtBlockTileFrame, byte_b, 0xb);
GUEST_SIZE(TerrainIsInListAtBlockTileFrame, 0x14);

u32 terrain_is_in_list_at_block_tile(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<TerrainIsInListAtBlockTileFrame> frame;  // the original's stack frame
    frame->word_0 = *frame.at<u32>(0x18);
    u32 r0_1 = terrain_at_block_tile(r0, r1, r2, r3);
    terrain_record(frame.at(8).addr(), r0_1);
    r2 = frame->byte_a;
    r0 = 0x89068fu;
    r1 = 0u;
    do {
        if (*gptr<u8>(r0 + r1) == r2 || *gptr<u8>(r0 + r1 + 1u) == r2) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 0x5au);
    r2 = frame->byte_8;
    r1 = 0u;
    do {
        if (*gptr<u8>(r0 + r1) == r2 || *gptr<u8>(r0 + r1 + 1u) == r2) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 0x5au);
    r2 = frame->byte_9;
    r1 = 0u;
    do {
        if (*gptr<u8>(r0 + r1) == r2 || *gptr<u8>(r0 + r1 + 1u) == r2) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 0x5au);
    r2 = frame->byte_b;
    r1 = 0u;
    do {
        if (*gptr<u8>(r0 + r1) == r2 || *gptr<u8>(r0 + r1 + 1u) == r2) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 0x5au);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006c6a84
GUEST_EXPORT_FRAMED(0x006c6a84, d_006c6a84::terrain_is_in_list_at_block_tile, 0x4000);  // pushes {lr} first, as the original

// f_006c7540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The map's height at a position (x arg 0, z arg 1), by its cell and tile.
namespace d_006c7540 {

struct __attribute__((packed)) Local_006c7540_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c7540_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c7540_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c7540_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c7540_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> cell_and_tile_of_position;
inline constexpr guest::Function<0x006c75e0, u32(u32, u32, u32, u32)> MapTable__height_at;

struct __attribute__((packed)) MapHeightAtFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(MapHeightAtFrame, word_0, 0x0);
GUEST_OFFSET(MapHeightAtFrame, word_4, 0x4);
GUEST_OFFSET(MapHeightAtFrame, word_8, 0x8);
GUEST_OFFSET(MapHeightAtFrame, word_c, 0xc);
GUEST_OFFSET(MapHeightAtFrame, word_10, 0x10);
GUEST_SIZE(MapHeightAtFrame, 0x18);

u32 map_height_at(u32 r0, u32 r1) {
    guest::StackFrameOf<MapHeightAtFrame> frame;  // the original's stack frame
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_0 = r0;
    frame->word_10 = 0;
    cell_and_tile_of_position(frame.at(4).addr(), frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr());
    frame->word_0 = r1;
    gptr<Local_006c7540_ea_2> ea_2 = gptr<Local_006c7540_ea_2>(frame.at(4).addr());
    u32 height_2 = MapTable__height_at(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
    return height_2;
}

}  // namespace d_006c7540
GUEST_EXPORT_FRAMED(0x006c7540, d_006c7540::map_height_at, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c7868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The ground height at a position (cell and tile; 006c7908).
namespace d_006c7868 {

struct __attribute__((packed)) Local_006c7868_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c7868_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c7868_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c7868_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c7868_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> cell_and_tile_of_position;
inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> ground_height_at_block_tile;

struct __attribute__((packed)) GroundHeightAtPositionByTileFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(GroundHeightAtPositionByTileFrame, word_0, 0x0);
GUEST_OFFSET(GroundHeightAtPositionByTileFrame, word_4, 0x4);
GUEST_OFFSET(GroundHeightAtPositionByTileFrame, word_8, 0x8);
GUEST_OFFSET(GroundHeightAtPositionByTileFrame, word_c, 0xc);
GUEST_OFFSET(GroundHeightAtPositionByTileFrame, word_10, 0x10);
GUEST_SIZE(GroundHeightAtPositionByTileFrame, 0x18);

u32 ground_height_at_position_by_tile(u32 r0, u32 r1) {
    guest::StackFrameOf<GroundHeightAtPositionByTileFrame> frame;  // the original's stack frame
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_0 = r0;
    frame->word_10 = 0;
    cell_and_tile_of_position(frame.at(4).addr(), frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr());
    frame->word_0 = r1;
    gptr<Local_006c7868_ea_2> ea_2 = gptr<Local_006c7868_ea_2>(frame.at(4).addr());
    return ground_height_at_block_tile(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
}

}  // namespace d_006c7868
GUEST_EXPORT_FRAMED(0x006c7868, d_006c7868::ground_height_at_position_by_tile, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c78b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The ground height at a world position (block and tile; 006c7908).
namespace d_006c78b8 {

struct __attribute__((packed)) Local_006c78b8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c78b8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c78b8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c78b8_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c78b8_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> split_world_position;
inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> ground_height_at_block_tile;

struct __attribute__((packed)) GroundHeightAtWorldByTileFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(GroundHeightAtWorldByTileFrame, word_0, 0x0);
GUEST_OFFSET(GroundHeightAtWorldByTileFrame, word_4, 0x4);
GUEST_OFFSET(GroundHeightAtWorldByTileFrame, word_8, 0x8);
GUEST_OFFSET(GroundHeightAtWorldByTileFrame, word_c, 0xc);
GUEST_OFFSET(GroundHeightAtWorldByTileFrame, word_10, 0x10);
GUEST_OFFSET(GroundHeightAtWorldByTileFrame, word_14, 0x14);
GUEST_SIZE(GroundHeightAtWorldByTileFrame, 0x18);

u32 ground_height_at_world_by_tile(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<GroundHeightAtWorldByTileFrame> frame;  // the original's stack frame
    frame->word_14 = 0;
    frame->word_0 = r0;
    frame->word_4 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    split_world_position(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());
    frame->word_0 = r2;
    gptr<Local_006c78b8_ea_2> ea_2 = gptr<Local_006c78b8_ea_2>(frame.at(8).addr());
    return ground_height_at_block_tile(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
}

}  // namespace d_006c78b8
GUEST_EXPORT_FRAMED(0x006c78b8, d_006c78b8::ground_height_at_world_by_tile, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c7908: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The ground height at a block tile: the tile's height for water and listed terrains (0xad-0xb1), else the triangle
// height (006c75e0); 0 without a map.
namespace d_006c7908 {

inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x006a96d8, u32(u32, u32, u32)> GridCellLarge__tile_height;
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> terrain_at_block_tile;
inline constexpr guest::Function<0x006c6a84, u32(u32, u32, u32, u32)> terrain_is_in_list_at_block_tile;
inline constexpr guest::Function<0x006c75e0, u32(u32, u32, u32, u32)> MapTable__height_at;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;

struct __attribute__((packed)) GroundHeightAtBlockTileFrame {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(GroundHeightAtBlockTileFrame, word_0, 0x0);
GUEST_SIZE(GroundHeightAtBlockTileFrame, 0x20);

u32 ground_height_at_block_tile(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<GroundHeightAtBlockTileFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4_1 = *frame.at<u32>(0x20);
    frame->word_0 = r4_1;
    u32 r0_1 = terrain_at_block_tile(r0, r1, r2, r3);
    if (r0_1 != 0xadu && r0_1 != 0xaeu && r0_1 != 0xafu && r0_1 != 0xb0u && r0_1 != 0xb1u) {
        frame->word_0 = r4_1;
        if (terrain_is_in_list_at_block_tile(r0, r1, r2, r3) == 0) {
            frame->word_0 = r4_1;
            u32 height_2 = MapTable__height_at(r0, r1, r2, r3);
            return height_2;
        }
    }
    u32 map_2 = read_map_table(r4_1);
    if (map_2 != 0) {
        map_2 = GridMap__large_cell_at(map_2, r0, r1);
        if (map_2 != 0) {
            frame.release();
            return GridCellLarge__tile_height(map_2, r2, r3);
        }
    }
    float S0_5 = 0.0f;
    guest::cpu()->s[0] = S0_5;
    return map_2;
}

}  // namespace d_006c7908
GUEST_EXPORT(0x006c7908, d_006c7908::ground_height_at_block_tile);

// f_006c7a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value (0075d7fc) of the tile at a world position in its large cell, or 0.
namespace d_006c7a14 {

struct __attribute__((packed)) Local_006c7a14_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c7a14_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c7a14_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c7a14_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> split_world_position;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d7fc, u32(u32, u32, u32)> LargeCell__tile_kind;

struct __attribute__((packed)) LargeCellValueAtWorldFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LargeCellValueAtWorldFrame, word_0, 0x0);
GUEST_OFFSET(LargeCellValueAtWorldFrame, word_4, 0x4);
GUEST_OFFSET(LargeCellValueAtWorldFrame, word_8, 0x8);
GUEST_OFFSET(LargeCellValueAtWorldFrame, word_c, 0xc);
GUEST_OFFSET(LargeCellValueAtWorldFrame, word_10, 0x10);
GUEST_OFFSET(LargeCellValueAtWorldFrame, word_14, 0x14);
GUEST_SIZE(LargeCellValueAtWorldFrame, 0x1c);

u32 large_cell_value_at_world(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<LargeCellValueAtWorldFrame> frame;  // the original's stack frame
    frame->word_14 = 0;
    frame->word_0 = r0;
    frame->word_4 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    split_world_position(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());
    u32 r7_1 = frame->word_14;
    gptr<Local_006c7a14_ea_2> ea_2 = gptr<Local_006c7a14_ea_2>(frame.at(8).addr());
    u32 r5_1 = ea_2->word_0;
    u32 r6_1 = ea_2->word_4;
    u32 r8_1 = ea_2->word_8;
    u32 map_2 = read_map_table(r2);
    if (map_2 != 0) {
        u32 large_cell = GridMap__large_cell_at(map_2, r5_1, r6_1);
        if (large_cell != 0) {
            return LargeCell__tile_kind(large_cell, r8_1, r7_1);
        }
    }
    return 0u;
}

}  // namespace d_006c7a14
GUEST_EXPORT_FRAMED(0x006c7a14, d_006c7a14::large_cell_value_at_world, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006c7a9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value (0075d7fc) of a block tile in its large cell, or 0.
namespace d_006c7a9c {

inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d7fc, u32(u32, u32, u32)> LargeCell__tile_kind;

u32 large_cell_value_at_block_tile(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 map_2 = read_map_table(*frame.at<u32>(0x18));
    if (map_2 != 0) {
        u32 large_cell = GridMap__large_cell_at(map_2, r0, r1);
        if (large_cell != 0) {
            frame.release();
            return LargeCell__tile_kind(large_cell, r2, r3);
        }
    }
    return 0u;
}

}  // namespace d_006c7a9c
GUEST_EXPORT(0x006c7a9c, d_006c7a9c::large_cell_value_at_block_tile);

// f_006c7bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the four corners of the tile under a position have the same height.
namespace d_006c7bd0 {

struct __attribute__((packed)) Local_006c7bd0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c7bd0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c7bd0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006c7bd0_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c7bd0_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_006c7bd0_r3_2, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x0052ec20, u32(u32, u32)> world_to_cell;
inline constexpr guest::Function<0x0052ed80, u32(u32, u32)> world_to_cell_corner;
inline constexpr guest::Function<0x0060d240, u32(u32)> Cell__clear;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d828, u32(u32)> tile_corner_height_0;
inline constexpr guest::Function<0x0075d838, u32(u32)> tile_corner_height_2;
inline constexpr guest::Function<0x0075d848, u32(u32)> tile_corner_height_1;
inline constexpr guest::Function<0x0075d858, u32(u32)> tile_corner_height_3;
inline constexpr guest::Function<0x007667a8, u32(u32, u32, u32, u32)> Grid__copy_tile;

u32 tile_is_flat_at(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 map_2 = read_map_table(r1, r1, r2, r3);
    if (map_2 != 0) {
        world_to_cell_corner(frame.at(0x10).addr(), r0);
        gptr<Local_006c7bd0_r3_2> r3_2 = gptr<Local_006c7bd0_r3_2>(frame.at(0x10).addr());
        u32 large_cell = GridMap__large_cell_at(map_2, r3_2->word_0, r3_2->word_4, r3_2.addr());
        if (large_cell != 0) {
            world_to_cell(frame.at(0x18).addr(), r0);
            Cell__clear(frame.at(0).addr());
            gptr<Local_006c7bd0_ea_1> ea_1 = gptr<Local_006c7bd0_ea_1>(frame.at(0x18).addr());
            Grid__copy_tile(large_cell, frame.at(0).addr(), ea_1->word_0, ea_1->word_4);
            u32 r0_7 = tile_corner_height_0(frame.at(0).addr());
            u32 r0_9 = tile_corner_height_1(frame.at(0).addr());
            u32 r0_11 = tile_corner_height_2(frame.at(0).addr());
            u32 r0_13 = tile_corner_height_3(frame.at(0).addr());
            if (r0_7 == r0_9 && r0_7 == r0_11 && r0_7 == r0_13) {
                return 1u;
            }
        }
    }
    return 0u;
}

}  // namespace d_006c7bd0
GUEST_EXPORT_FRAMED(0x006c7bd0, d_006c7bd0::tile_is_flat_at, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c83f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 7 of the tile at a world position (Grid__tile_flag_7), or 0.
namespace d_006c83f0 {

struct __attribute__((packed)) Local_006c83f0_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c83f0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c83f0_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c83f0_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> split_world_position;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d898, u32(u32, u32, u32)> Grid__tile_flag_7;

struct __attribute__((packed)) TileFlag7AtWorldFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(TileFlag7AtWorldFrame, word_0, 0x0);
GUEST_OFFSET(TileFlag7AtWorldFrame, word_4, 0x4);
GUEST_OFFSET(TileFlag7AtWorldFrame, word_8, 0x8);
GUEST_OFFSET(TileFlag7AtWorldFrame, word_c, 0xc);
GUEST_OFFSET(TileFlag7AtWorldFrame, word_10, 0x10);
GUEST_OFFSET(TileFlag7AtWorldFrame, word_14, 0x14);
GUEST_SIZE(TileFlag7AtWorldFrame, 0x1c);

u32 tile_flag_7_at_world(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<TileFlag7AtWorldFrame> frame;  // the original's stack frame
    frame->word_14 = 0;
    frame->word_0 = r0;
    frame->word_4 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    split_world_position(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());
    u32 r7_1 = frame->word_14;
    gptr<Local_006c83f0_ea_2> ea_2 = gptr<Local_006c83f0_ea_2>(frame.at(8).addr());
    u32 r5_1 = ea_2->word_0;
    u32 r6_1 = ea_2->word_4;
    u32 r8_1 = ea_2->word_8;
    u32 map_2 = read_map_table(r2);
    if (map_2 != 0) {
        u32 large_cell = GridMap__large_cell_at(map_2, r5_1, r6_1);
        if (large_cell != 0) {
            return Grid__tile_flag_7(large_cell, r8_1, r7_1);
        }
    }
    return 0u;
}

}  // namespace d_006c83f0
GUEST_EXPORT_FRAMED(0x006c83f0, d_006c83f0::tile_flag_7_at_world, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006c8590: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the kind (table 0x95d91e) of the item at a position is 2.
namespace d_006c8590 {

inline constexpr guest::Function<0x005ce13c, u32(u32)> byte_95d91e;
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> item_at_position_2;

u32 item_kind_95d91e_is_2_at(u32 r0) {
    u32 item_2 = item_at_position_2(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = byte_95d91e(item_2) == 2u;
    return r0_3;
}

}  // namespace d_006c8590
GUEST_EXPORT_FRAMED(0x006c8590, d_006c8590::item_kind_95d91e_is_2_at, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c8760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the kind (table 0x95d91e) of the item at a position is set.
namespace d_006c8760 {

inline constexpr guest::Function<0x005ce13c, u32(u32)> byte_95d91e;
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> item_at_position_2;

u32 item_kind_95d91e_is_set_at(u32 r0) {
    u32 item_2 = item_at_position_2(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = byte_95d91e(item_2);
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_006c8760
GUEST_EXPORT_FRAMED(0x006c8760, d_006c8760::item_kind_95d91e_is_set_at, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c8778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The cell kind (006c87ac) at the cell under a position.
namespace d_006c8778 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x006c87ac, u32(u32, u32)> cell_kind_at;

struct __attribute__((packed)) CellKindAtPositionFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(CellKindAtPositionFrame, word_0, 0x0);
GUEST_OFFSET(CellKindAtPositionFrame, word_4, 0x4);
GUEST_SIZE(CellKindAtPositionFrame, 0xc);

u32 cell_kind_at_position(u32 r0) {
    guest::StackFrameOf<CellKindAtPositionFrame> frame;  // the original's stack frame
    frame->word_0 = 0;
    frame->word_4 = 0;
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0, guest::cpu()->r[3]);
    u32 cell_kind_2 = cell_kind_at(frame->word_0, frame->word_4);
    return cell_kind_2;
}

}  // namespace d_006c8778
GUEST_EXPORT_FRAMED(0x006c8778, d_006c8778::cell_kind_at_position, 0x4000);  // pushes {lr} first, as the original

// f_006c87ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The kind of cell (x, z): from the map's byte grid (+0x28) outdoors, the room handler in scenes with bit 0x10000000,
// or 0xff for terrain 0xfc in scenes with bit 0x200.
namespace d_006c87ac {

inline constexpr u32 cell_kinds_address = 0x00950800u;
inline guest::global<u32, 0x0014fdc8> global_0014fdc8;
inline guest::global<u32, 0x00950800> cell_kinds;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32)> terrain_at_world;
inline constexpr guest::Function<0x00317eac, u32(u32, u32, u32, u32)> get_u8_cell;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> GridMap__rect_10_contains;

struct __attribute__((packed)) CellKindAtFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x14];  // (not read or written by name)
};
GUEST_OFFSET(CellKindAtFrame, word_0, 0x0);
GUEST_OFFSET(CellKindAtFrame, word_4, 0x4);
GUEST_OFFSET(CellKindAtFrame, word_8, 0x8);
GUEST_SIZE(CellKindAtFrame, 0x20);

u32 cell_kind_at(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CellKindAtFrame> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 scene_3 = current_scene_id(r0, r1, r2, r3);
    u32 scene_flagged_3 = scene_has_flags(0x200u, scene_3);
    if (scene_flagged_3 == 0) {
        u32 scene_4 = current_scene_id(scene_flagged_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 scene_flagged_4 = scene_has_flags(0x10000000u, scene_4);
        if (scene_flagged_4 == 0) {
            u32 map_table = get_map_table(scene_flagged_4);
            if (map_table != 0) {
                if (GridMap__rect_10_contains(map_table, r0, r1) != 0) {
                    u32 r0_7 = *gptr<u32>(map_table + 0x28u);
                    if (r0_7 != 0) {
                        frame->word_0 = r0_7;
                        frame->word_4 = 0x80;
                        frame->word_8 = 0x80;
                        return get_u8_cell(frame.at(0).addr(), r0, r1, 0x80u);
                    }
                }
            }
            return 0u;
        }
        r0_10 = *cell_kinds;
        if (r0_10 != 0) {
            frame.release();
            return guest::call_address<u32>(*global_0014fdc8, r0_10, r0, r1, guest::cpu()->r[3]);
        }
    } else {
        u32 r4_1 = 0u;
        if (terrain_at_world(r0, r1, r4_1) == 0xfcu) {
            r4_1 = 0xffu;
        }
        r0_10 = r4_1;
    }
    return r0_10;
}

}  // namespace d_006c87ac
GUEST_EXPORT(0x006c87ac, d_006c87ac::cell_kind_at);

// f_006c8938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the icon (+0x44) from its drag list to a new one (when given), keeping whether it is in one (+0x431).
namespace d_006c8938 {

struct __attribute__((packed)) DragIcon {
    u8 unknown_0[0x44];  // (not used here)
    u32 icon;
    u8 unknown_48[0x3e9];  // (not used here)
    u8 byte_431;
};
GUEST_OFFSET(DragIcon, icon, 0x44);
GUEST_OFFSET(DragIcon, byte_431, 0x431);

inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> DragIconList__add;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32)> DragIconList__remove;

void DragIcon__move_to_list(gptr<DragIcon> drag_icon, u32 r1) {
    u32 icon = drag_icon->icon;
    u32 list = *gptr<u32>(icon + 0xcu);
    if (list != 0) {
        DragIconList__remove(list, icon);
        drag_icon->byte_431 = 0;
    }
    if (r1 != 0) {
        DragIconList__add(r1, drag_icon->icon);
        drag_icon->byte_431 = 1;
    }
}

}  // namespace d_006c8938
GUEST_EXPORT_FRAMED(0x006c8938, d_006c8938::DragIcon__move_to_list, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c8e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the scroll offset (+0x438) for the current handler (0 at the start, else the content height less the view)
// and moves the bar.
namespace d_006c8e30 {

struct __attribute__((packed)) ScrollBar {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x3ac];  // (not used here)
    float float_3c0;
};
GUEST_OFFSET(ScrollBar, word_c, 0xc);
GUEST_OFFSET(ScrollBar, word_10, 0x10);
GUEST_OFFSET(ScrollBar, float_3c0, 0x3c0);

struct __attribute__((packed)) Local_006c8e30_r12 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x8];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_006c8e30_r12, word_0, 0x0);
GUEST_OFFSET(Local_006c8e30_r12, word_4, 0x4);
GUEST_OFFSET(Local_006c8e30_r12, word_8, 0x8);
GUEST_OFFSET(Local_006c8e30_r12, word_c, 0xc);
GUEST_OFFSET(Local_006c8e30_r12, word_18, 0x18);
GUEST_OFFSET(Local_006c8e30_r12, word_1c, 0x1c);

inline constexpr guest::Function<0x0081b750, u32(u32, u32, u32)> LayoutAnimator__play_d;

u32 ScrollBar__update_vertical(gptr<ScrollBar> scroll_bar, float S0_unused, float S1, float S2, float S3) {
    u32 r0 = scroll_bar.addr();
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    gptr<Local_006c8e30_r12> r12 = gptr<Local_006c8e30_r12>(0x894fecu);
    u32 r4_1 = scroll_bar->word_c;
    float S0 = 0.0f;
    u32 r1_1 = r12->word_1c;
    u32 r3 = r0 + 0x400u;
    if (r4_1 != r12->word_18) {
        goto L_6c8e88;
    }
    if ((r4_1 != 0 || ((scroll_bar->word_10 | r1_1) & 1u) != 0) && scroll_bar->word_10 != r1_1) {
        goto L_6c8e88;
    }
L_6c8e78:;
    *gptr<u32>(r3 + 0x38u) = std::bit_cast<u32>(S0);
    r1_2 = r12->word_0;
    r2_1 = r12->word_4;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0_1 = LayoutAnimator__play_d(r0, r1_2, r2_1);
    return r0_1;
L_6c8e88:;
    u32 r1_4 = r12->word_c;
    if (r4_1 != r12->word_8) {
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if ((r4_1 != 0 || ((scroll_bar->word_10 | r1_4) & 1u) != 0) && scroll_bar->word_10 != r1_4) {
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S3 = 1.0f;
    S2 = std::bit_cast<float>(*gptr<u32>(r3 + 0xcu)) - S3;
    S1 = S2 - scroll_bar->float_3c0;
    *gptr<u32>(r3 + 0x38u) = std::bit_cast<u32>(S1);
    if (S1 > S0) {
        S0 = S1;
    }
    guest::preempt();
    goto L_6c8e78;
}

}  // namespace d_006c8e30
GUEST_EXPORT_FRAMED(0x006c8e30, d_006c8e30::ScrollBar__update_vertical, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c8ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the icon from its drag list, closes the layout and clears 0x95df7f.
namespace d_006c8ef0 {

struct __attribute__((packed)) DragIcon {
    u8 unknown_0[0x44];  // (not used here)
    u32 icon;
    u8 unknown_48[0x3e9];  // (not used here)
    u8 byte_431;
};
GUEST_OFFSET(DragIcon, icon, 0x44);
GUEST_OFFSET(DragIcon, byte_431, 0x431);

inline guest::global<u8, 0x0095df7f> global_0095df7f;
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> DragIconList__remove;

void DragIcon__release_and_close(gptr<DragIcon> drag_icon) {
    u32 icon = drag_icon->icon;
    u32 list = *gptr<u32>(icon + 0xcu);
    if (list != 0) {
        DragIconList__remove(list, icon, guest::cpu()->r[2], guest::cpu()->r[3]);
        icon = guest::cpu()->r[1];
        drag_icon->byte_431 = 0;
    }
    layout_at_10_virtual_8(drag_icon.addr() + 0x24u, icon, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0095df7f = 0;
}

}  // namespace d_006c8ef0
GUEST_EXPORT_FRAMED(0x006c8ef0, d_006c8ef0::DragIcon__release_and_close, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c9050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the scroll offset (+0x438) for the current handler (0 at the start, else the content width less the view)
// and moves the bar.
namespace d_006c9050 {

struct __attribute__((packed)) ScrollBar {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x3a8];  // (not used here)
    float float_3bc;
};
GUEST_OFFSET(ScrollBar, word_c, 0xc);
GUEST_OFFSET(ScrollBar, word_10, 0x10);
GUEST_OFFSET(ScrollBar, float_3bc, 0x3bc);

struct __attribute__((packed)) Local_006c9050_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c9050_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c9050_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006c9050_r12 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006c9050_r12, word_0, 0x0);
GUEST_OFFSET(Local_006c9050_r12, word_4, 0x4);
GUEST_OFFSET(Local_006c9050_r12, word_10, 0x10);
GUEST_OFFSET(Local_006c9050_r12, word_14, 0x14);

inline constexpr guest::Function<0x0081b750, u32(u32, u32, u32)> LayoutAnimator__play_d;

u32 ScrollBar__update_horizontal(gptr<ScrollBar> scroll_bar, float S0_unused, float S1, float S2, float S3) {
    u32 r0 = scroll_bar.addr();
    gptr<Local_006c9050_ea_1> ea_1 = gptr<Local_006c9050_ea_1>(0u);
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    gptr<Local_006c9050_r12> r12 = gptr<Local_006c9050_r12>(0x894fecu);
    u32 r4_1 = scroll_bar->word_c;
    float S0 = 0.0f;
    u32 r1_1 = r12->word_14;
    u32 r3 = r0 + 0x400u;
    if (r4_1 != r12->word_10) {
        goto L_6c90ac;
    }
    if ((r4_1 != 0 || ((scroll_bar->word_10 | r1_1) & 1u) != 0) && scroll_bar->word_10 != r1_1) {
        goto L_6c90ac;
    }
L_6c9098:;
    *gptr<u32>(r3 + 0x38u) = std::bit_cast<u32>(S0);
    ea_1 = gptr<Local_006c9050_ea_1>(r12.addr() + 8u);
    r1_2 = ea_1->word_0;
    r2_1 = ea_1->word_4;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0_1 = LayoutAnimator__play_d(r0, r1_2, r2_1);
    return r0_1;
L_6c90ac:;
    u32 r1_4 = r12->word_4;
    if (r4_1 != r12->word_0) {
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if ((r4_1 != 0 || ((scroll_bar->word_10 | r1_4) & 1u) != 0) && scroll_bar->word_10 != r1_4) {
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S3 = 1.0f;
    S2 = scroll_bar->float_3bc - S3;
    S1 = S2 - std::bit_cast<float>(*gptr<u32>(r3 + 0x10u));
    *gptr<u32>(r3 + 0x38u) = std::bit_cast<u32>(S1);
    if (S1 > S0) {
        S0 = S1;
    }
    guest::preempt();
    goto L_6c9098;
}

}  // namespace d_006c9050
GUEST_EXPORT_FRAMED(0x006c9050, d_006c9050::ScrollBar__update_horizontal, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c91d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The catalog's state for its current mode (the mode bits' low two).
namespace d_006c91d0 {

inline constexpr u32 global_009b3a2c_address = 0x009b3a2cu;
inline guest::global<u32, 0x0095261c> catalog_mode_bits;

u32 catalog_state() {
    return ((*catalog_mode_bits & 3u) << 5) + global_009b3a2c_address + 0x10u;
}

}  // namespace d_006c91d0
GUEST_EXPORT(0x006c91d0, d_006c91d0::catalog_state);

// f_006c91f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a 2-bit mode at 0x95261c.
namespace d_006c91f4 {

inline constexpr u32 catalog_mode_bits_address = 0x0095261cu;
inline guest::global<u32, 0x0095261c> catalog_mode_bits;

void set_mode_9526(u32 r0) {
    *catalog_mode_bits = r0 & 3u;
    guest::cpu()->r[1] = catalog_mode_bits_address;
}

}  // namespace d_006c91f4
GUEST_EXPORT(0x006c91f4, d_006c91f4::set_mode_9526);

// f_006c9218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the service's 16-bit value into 0x952ad8 again (0 on failure).
namespace d_006c9218 {

inline constexpr u32 service_value_952ad8_address = 0x00952ad8u;
inline guest::global<u16, 0x00952ad8> service_value_952ad8;
inline constexpr guest::Function<0x0011db9c, u32(u32, u32)> read_service_value_16;

u32 refresh_service_value_952ad8(u32 r0_unused, u32 r1) {
    u32 r0_2 = read_service_value_16(service_value_952ad8_address, r1) & 0x80000000u;
    if (s32(r0_2) >= 0) {
        return r0_2;
    }
    *service_value_952ad8 = 0;
    guest::cpu()->r[1] = service_value_952ad8_address;
    return 0u;
}

}  // namespace d_006c9218
GUEST_EXPORT_FRAMED(0x006c9218, d_006c9218::refresh_service_value_952ad8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c93e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds an effect entry (of up to 20, 0x18 + 0x14 bytes) for a model and a value, and links it in the list at 0x994d24.
namespace d_006c93e0 {

inline constexpr u32 effect_entries_address = 0x009502f8u;
inline constexpr u32 effect_entry_count_address = 0x009502fcu;
inline constexpr u32 effect_entry_list_address = 0x00994d24u;
inline constexpr u32 effect_entries_begin_address = 0x00994ebcu;
inline constexpr u32 effect_entries_end_address = 0x0099509cu;
inline guest::global<u32, 0x009502fc> effect_entry_count;
inline constexpr guest::Function<0x006f7e40, u32(u32, u32, u32, u32)> CollisionTriangleRef__set;
inline constexpr guest::Function<0x006f7e90, u32(u32, u32)> append_to_list;
inline constexpr guest::Function<0x006f8114, u32(u32, u32)> Sphere__set;

void add_effect_entry(u32 r0, u32 r1) {
    u32 r0_1 = *effect_entry_count;
    if (r0_1 < 0x14u) {
        Sphere__set(r0_1 * 0x18u + effect_entries_begin_address, r0);
        u32 r0_3 = *effect_entry_count;
        CollisionTriangleRef__set(r0_3 * 0x14u + effect_entries_end_address, r0_3 * 0x18u + effect_entries_begin_address, 4u, 8u);
        u32 r1_2 = *effect_entry_count * 0x14u + effect_entries_end_address;
        *gptr<u32>(r1_2 + 0x10u) = r1;
        append_to_list(effect_entry_list_address, r1_2);
        *effect_entry_count = *effect_entry_count + 1u;
    }
}

}  // namespace d_006c93e0
GUEST_EXPORT_FRAMED(0x006c93e0, d_006c93e0::add_effect_entry, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006c9464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the effect list at 0x994d24 and its count.
namespace d_006c9464 {

inline constexpr u32 effect_entries_address = 0x009502f8u;
inline constexpr u32 effect_entry_list_address = 0x00994d24u;
inline guest::global<u32, 0x009502fc> effect_entry_count;
inline constexpr guest::Function<0x006f8054, u32(u32)> PtrList50__clear;

void clear_effect_entries() {
    PtrList50__clear(effect_entry_list_address);
    *effect_entry_count = 0;
    guest::cpu()->r[1] = effect_entries_address;
}

}  // namespace d_006c9464
GUEST_EXPORT_FRAMED(0x006c9464, d_006c9464::clear_effect_entries, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c967c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the save state (0x95719c) is 1.
namespace d_006c967c {

inline guest::global<u8, 0x0095719c> save_state;

u32 save_state_is_1() {
    u32 r0_1 = *save_state;
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_006c967c
GUEST_EXPORT(0x006c967c, d_006c967c::save_state_is_1);

// f_006c9898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the save state (0x95719c) is 3.
namespace d_006c9898 {

inline guest::global<u8, 0x0095719c> save_state;

u32 save_state_is_3() {
    return *save_state == 3u;
}

}  // namespace d_006c9898
GUEST_EXPORT(0x006c9898, d_006c9898::save_state_is_3);

// f_006c98b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the save state (0x95719c) to 2 and clears its sub-state.
namespace d_006c98b4 {

inline constexpr u32 save_state_address = 0x0095719cu;
inline guest::global<u8, 0x0095719c> save_state;
inline guest::global<u8, 0x0095719d> global_0095719d;

u32 set_save_state_2() {
    *save_state = 2;
    *global_0095719d = 0;
    guest::cpu()->r[1] = 0u;
    return save_state_address;
}

}  // namespace d_006c98b4
GUEST_EXPORT(0x006c98b4, d_006c98b4::set_save_state_2);

// f_006c9b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless busy (0x9571cd): flushes the pending data (0x974b90) when flagged (0x9571cc) and clears the flag.
namespace d_006c9b0c {

inline constexpr u32 global_00974b90_address = 0x00974b90u;
inline guest::global<u8, 0x009571cc> pending_flush;
inline guest::global<u8, 0x009571cd> global_009571cd;
inline constexpr guest::Function<0x00130690, u32(u32, u32, u32, u32)> Service__close_handle;

u32 finish_pending_flush() {
    u32 r0_1 = *global_009571cd;
    if (r0_1 != 0) {
        return r0_1;
    }
    if (*pending_flush != 0) {
        Service__close_handle(global_00974b90_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    *pending_flush = 0;
    return 0u;
}

}  // namespace d_006c9b0c
GUEST_EXPORT_FRAMED(0x006c9b0c, d_006c9b0c::finish_pending_flush, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c9e74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the object's command block (+0xc8, size +0xcc) to `out`; returns the end.
namespace d_006c9e74 {

struct __attribute__((packed)) CopyCommandBlockArg0 {
    u8 unknown_0[0xc8];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(CopyCommandBlockArg0, word_c8, 0xc8);
GUEST_OFFSET(CopyCommandBlockArg0, word_cc, 0xcc);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

u32 copy_command_block(gptr<CopyCommandBlockArg0> arg0, u32 r1) {
    copy_aligned_bytes(r1, arg0->word_c8, arg0->word_cc, guest::cpu()->r[3]);
    return (arg0->word_cc & ~3u) + r1;
}

}  // namespace d_006c9e74
GUEST_EXPORT_FRAMED(0x006c9e74, d_006c9e74::copy_command_block, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ca128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a command list object and its buffer part (+0x10).
namespace d_006ca128 {

struct __attribute__((packed)) CommandList {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xa8];  // (not used here)
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
};
GUEST_OFFSET(CommandList, word_0, 0x0);
GUEST_OFFSET(CommandList, word_4, 0x4);
GUEST_OFFSET(CommandList, word_8, 0x8);
GUEST_OFFSET(CommandList, word_c, 0xc);
GUEST_OFFSET(CommandList, word_b8, 0xb8);
GUEST_OFFSET(CommandList, word_bc, 0xbc);
GUEST_OFFSET(CommandList, word_c0, 0xc0);
GUEST_OFFSET(CommandList, word_c4, 0xc4);
GUEST_OFFSET(CommandList, word_c8, 0xc8);
GUEST_OFFSET(CommandList, word_cc, 0xcc);
GUEST_OFFSET(CommandList, word_d0, 0xd0);
GUEST_OFFSET(CommandList, word_d4, 0xd4);

inline constexpr guest::Function<0x0034ac5c, u32(u32)> GpuCommandBuffer__init;

u32 CommandList__clear(gptr<CommandList> command_list) {
    u32 r0_1 = command_list.addr() + 0x10u;
    GpuCommandBuffer__init(r0_1);
    command_list->word_b8 = 0;
    command_list->word_bc = 0;
    command_list->word_c0 = 0;
    command_list->word_c4 = 0;
    command_list->word_c8 = 0;
    command_list->word_cc = 0;
    command_list->word_d0 = 0;
    command_list->word_d4 = 0;
    command_list->word_0 = 0;
    command_list->word_8 = 0;
    command_list->word_4 = 0;
    command_list->word_c = 0;
    return r0_1 - 0x10u;
}

}  // namespace d_006ca128
GUEST_EXPORT_FRAMED(0x006ca128, d_006ca128::CommandList__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ca1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the two 640x480 render targets (0xab7d0c) with the two display rectangles and marks them ready (0x9571f4).
namespace d_006ca1c0 {

struct __attribute__((packed)) Local_006ca1c0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ca1c0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006ca1c0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006ca1c0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ca1c0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006ca1c0_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_006ca1c0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ca1c0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006ca1c0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_006ca1c0_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ca1c0_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006ca1c0_ea_4, word_4, 0x4);

inline constexpr u32 double_render_targets_address = 0x009571f4u;
inline constexpr u32 render_targets_address = 0x00ab7d0cu;
inline guest::global<u8, 0x009571f4> double_render_targets;
inline constexpr guest::Function<0x005a3004, u32(u32, u32)> copy_pair_9528a8;
inline constexpr guest::Function<0x005a3018, u32(u32)> copy_pair_9528b0;
inline constexpr guest::Function<0x006c9c94, u32(u32, u32, u32, u32)> RenderTargets__create;
inline constexpr guest::Function<0x006c9ea0, u32(u32, u32, u32, u32)> RenderTargets__capture;

u32 setup_double_render_targets(u32 r0) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    RenderTargets__create(render_targets_address, r0, 0x280u, 0x1e0u);
    copy_pair_9528b0(frame.at(0x10).addr());
    gptr<Local_006ca1c0_ea_1> ea_1 = gptr<Local_006ca1c0_ea_1>(frame.at(0x10).addr());
    u32 r0_2 = ea_1->word_0;
    u32 r1_2 = ea_1->word_4;
    gptr<Local_006ca1c0_ea_2> ea_2 = gptr<Local_006ca1c0_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r0_2;
    ea_2->word_4 = r1_2;
    copy_pair_9528a8(frame.at(0).addr(), r1_2);
    gptr<Local_006ca1c0_ea_3> ea_3 = gptr<Local_006ca1c0_ea_3>(frame.at(0).addr());
    u32 r0_4 = ea_3->word_0;
    u32 r1_3 = ea_3->word_4;
    gptr<Local_006ca1c0_ea_4> ea_4 = gptr<Local_006ca1c0_ea_4>(frame.at(0x18).addr());
    ea_4->word_0 = r0_4;
    ea_4->word_4 = r1_3;
    RenderTargets__capture(render_targets_address, r0, frame.at(0x18).addr(), frame.at(8).addr());
    *double_render_targets = 1;
    guest::cpu()->r[1] = double_render_targets_address;
    return 1u;
}

}  // namespace d_006ca1c0
GUEST_EXPORT_FRAMED(0x006ca1c0, d_006ca1c0::setup_double_render_targets, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ca230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Flips the current render target index (0xab7dc4).
namespace d_006ca230 {

inline guest::global<u32, 0x00ab7dc4> render_target_index;

void swap_render_target() {
    u32 r1_1 = *render_target_index == 0;
    *render_target_index = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006ca230
GUEST_EXPORT(0x006ca230, d_006ca230::swap_render_target);

// f_006ca23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The render target not currently shown.
namespace d_006ca23c {

inline constexpr u32 render_targets_address = 0x00ab7d0cu;
inline guest::global<u32, 0x00ab7dc4> render_target_index;

u32 back_render_target() {
    return gptr<u32>(render_targets_address)[u32(*render_target_index == 0)];
}

}  // namespace d_006ca23c
GUEST_EXPORT(0x006ca23c, d_006ca23c::back_render_target);

// f_006cac84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether `kind` is one of the eight structure kinds of the table at 0x88e4e4.
namespace d_006cac84 {


u32 is_map_structure_of_8(u32 r0) {
    u32 r2 = 0x88e4e4u;
    u32 r1 = 0u;
    do {
        if (*gptr<u8>(r2 + r1) == r0 || *gptr<u8>(r2 + r1 + 1u) == r0) {
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 8u);
    return 0u;
}

}  // namespace d_006cac84
GUEST_EXPORT(0x006cac84, d_006cac84::is_map_structure_of_8);

// f_006cad04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether entry `index` of the table at 0x88e4d4 is `kind`.
namespace d_006cad04 {

struct __attribute__((packed)) MapStructureTable88e4d4IsArg1 {
    u8 unknown_0[0x88e4d4];  // (not used here)
    u8 byte_88e4d4;
};
GUEST_OFFSET(MapStructureTable88e4d4IsArg1, byte_88e4d4, 0x88e4d4);


u32 map_structure_table_88e4d4_is(u32 r0, gptr<MapStructureTable88e4d4IsArg1> arg1) {
    u32 r1_1 = arg1->byte_88e4d4;
    guest::cpu()->r[1] = r1_1;
    return r1_1 == r0;
}

}  // namespace d_006cad04
GUEST_EXPORT(0x006cad04, d_006cad04::map_structure_table_88e4d4_is);

// f_006caed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Packs two bytes into 16 bits (the first in the high byte).
namespace d_006caed0 {


u32 pack_two_bytes(u32 r0, u32 r1) {
    return uxth(r1 + (r0 << 8));
}

}  // namespace d_006caed0
GUEST_EXPORT(0x006caed0, d_006caed0::pack_two_bytes);

// f_006caf18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the 0xfc structure kinds has the value (bits 18 and up).
namespace d_006caf18 {

inline constexpr guest::Function<0x005c98a8, u32(u32, u32, u32, u32)> PlayerAction__dispatch;

u32 is_map_structure_value(u32 r0) {
    u32 r5 = r0 >> 0x12;
    u32 i = 0u;
    do {
        if (PlayerAction__dispatch(i & 0xffu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) == r5) {
            return 1u;
        }
        i += 1u;
        guest::preempt();
    } while (i < 0xfcu);
    return 0u;
}

}  // namespace d_006caf18
GUEST_EXPORT_FRAMED(0x006caf18, d_006caf18::is_map_structure_value, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_006cb790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The variant (0-3) of a structure kind of type 0xf (from 0x90 by fours); 4 for others.
namespace d_006cb790 {

inline constexpr guest::Function<0x005ca27c, u32(u32, u32)> byte_88bd38;

u32 map_structure_variant(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {
        return 4u;
    }
    if (byte_88bd38(r0, r1) != 0xfu) {
        return 4u;
    }
    u32 r1_2 = r0 - 0x90u + (u32(s32(r0 - 0x90u) >> 0x1f) >> 0x1e) & ~3u;
    guest::cpu()->r[1] = r1_2;
    return r0 - 0x90u - r1_2 & 0xffu;
}

}  // namespace d_006cb790
GUEST_EXPORT_FRAMED(0x006cb790, d_006cb790::map_structure_variant, 0x4010);  // pushes {r4, lr} first, as the original

// f_006cb7d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks every cell of a structure's rectangle (from its table entry, at cell x, z) on the map.
namespace d_006cb7d0 {

struct __attribute__((packed)) Local_006cb7d0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cb7d0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006cb7d0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006cb7d0_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cb7d0_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006cb7d0_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_006cb7d0_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006cb7d0_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006cb7d0_r0_2, byte_1, 0x1);

inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x005ca234, u32(u32)> entry_address_88b948;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x006fb604, u32(u32, u32, u32)> clear_table_item_tile_at;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) MapStructureMarkCellsFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x34];  // (not read or written by name)
};
GUEST_OFFSET(MapStructureMarkCellsFrame, word_8, 0x8);
GUEST_OFFSET(MapStructureMarkCellsFrame, word_c, 0xc);
GUEST_SIZE(MapStructureMarkCellsFrame, 0x44);

void MapStructure__mark_cells(u32 map_structure, u32 r1, u32 r2) {
    guest::StackFrameOf<MapStructureMarkCellsFrame> frame;  // the original's stack frame
    u32 r0_11 = 0;
    u32 map_table = get_map_table(map_structure, r1, r2, guest::cpu()->r[3]);
    u32 r7 = map_table;
    if (map_table != 0) {
        gptr<Local_006cb7d0_r0_2> r0_2 = gptr<Local_006cb7d0_r0_2>(entry_address_88b948(r2));
        u32 r2_2 = u32(s8(r0_2->byte_1)) + r1;
        gptr<Local_006cb7d0_ea_1> ea_1 = gptr<Local_006cb7d0_ea_1>(frame.at(0x30).addr());
        ea_1->word_0 = u32(s8(r0_2->byte_0)) + map_structure;
        ea_1->word_4 = r2_2;
        u32 r1_2 = *gptr<s8>(r0_2.addr() + 3u);
        u32 r1_3 = u32(*gptr<s8>(r0_2.addr() + 2u)) + map_structure;
        gptr<Local_006cb7d0_ea_4> ea_4 = gptr<Local_006cb7d0_ea_4>(frame.at(0x38).addr());
        ea_4->word_0 = r1_3;
        ea_4->word_4 = r1_2 + r1;
        construct_word_quad_from_pairs(frame.at(0x10).addr(), frame.at(0x30).addr(), frame.at(0x38).addr());
        make_end_grid_rect_iterator(frame.at(0x20).addr(), frame.at(0x10).addr());
        construct_grid_rect_iterator(frame.at(0).addr(), frame.at(0x10).addr());
        if (key_records_differ(frame.at(0).addr(), frame.at(0x20).addr()) != 0) {
            do {
                clear_table_item_tile_at(frame->word_8, frame->word_c, r7);
                WrappingCursor__advance(frame.at(0).addr());
                r0_11 = key_records_differ(frame.at(0).addr(), frame.at(0x20).addr());
                guest::preempt();
            } while (r0_11 != 0);
        }
    }
}

}  // namespace d_006cb7d0
GUEST_EXPORT_FRAMED(0x006cb7d0, d_006cb7d0::MapStructure__mark_cells, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006cba30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the four structure kinds of the table at 0x88e4dc that is in the placed list; 0xfc when none.
namespace d_006cba30 {

inline constexpr guest::Function<0x00314a04, u32(u32, u32, u32, u32)> word_ab7df4_00314a04;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32, u32)> ListCursor__next;

struct __attribute__((packed)) FirstPlacedStructureOf4AFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x1f];  // (not read or written by name)
};
GUEST_OFFSET(FirstPlacedStructureOf4AFrame, byte_10, 0x10);
GUEST_SIZE(FirstPlacedStructureOf4AFrame, 0x30);

u32 first_placed_structure_of_4_a(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<FirstPlacedStructureOf4AFrame> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r6 = 0xfcu;
    u32 r0_1 = word_ab7df4_00314a04(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r8 = 0x88e4dcu;
    u32 list = r0_1;
    u32 i = 0u;
    do {
        u32 r4 = *gptr<u8>(r8 + i);
        ListCursor__end(frame.at(0x18).addr(), list);
        ListCursor__begin(frame.at(0).addr(), list);
        u32 r0_5 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
        r1 = guest::cpu()->r[1];
        if (r0_5 != 0) {
            do {
                if (r4 == frame->byte_10) {
                    r6 = *gptr<u8>(r8 + i);
                    guest::cpu()->r[1] = r1;
                    return r6;
                }
                ListCursor__next(frame.at(0).addr(), r1);
                r0_8 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
                r1 = guest::cpu()->r[1];
                guest::preempt();
            } while (r0_8 != 0);
        }
        i += 1u;
        guest::preempt();
    } while (i < 4u);
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_006cba30
GUEST_EXPORT_FRAMED(0x006cba30, d_006cba30::first_placed_structure_of_4_a, 0x41f0);  // pushes {r4, i, r6, list, r8, lr} first, as the original

// f_006cbb08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The record slot of structure kind 0x12-0x41 (in four blocks of 16), or 0.
namespace d_006cbb08 {

inline constexpr guest::Function<0x002be920, u32(u32, u32)> slot_address_002be920;
inline constexpr guest::Function<0x002bedd8, u32(u32, u32)> record_fbb_address;
inline constexpr guest::Function<0x005ca6f8, u32(u32, u32)> thunk_002cd4ec;

u32 structure_record_slot(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = r0 - 0x12u;
    if (r5_1 <= 0x2fu) {
        u32 r0_1 = thunk_002cd4ec(r0, r1);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            u32 r4_1 = r5_1 <= 0xfu ? r0 - 0x12u : r0 - 0x22u <= 0xfu ? r0 - 0x22u : r0 - 0x32u <= 0xfu ? r0 - 0x32u : 3u;
            u32 r0_2 = record_fbb_address(r0_1, r5_1 <= 0xfu ? 0u : r0 - 0x22u <= 0xfu ? 1u : r0 - 0x32u <= 0xfu ? 2u : 3u);
            frame.release();
            return slot_address_002be920(r0_2, r4_1);
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006cbb08
GUEST_EXPORT(0x006cbb08, d_006cbb08::structure_record_slot);

// f_006cbbe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the four structure kinds of the table at 0x88e4d8 that is in the placed list; 0xfc when none.
namespace d_006cbbe4 {

inline constexpr guest::Function<0x00314a04, u32(u32, u32, u32, u32)> word_ab7df4_00314a04;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32, u32)> ListCursor__next;

struct __attribute__((packed)) FirstPlacedStructureOf4BFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x1f];  // (not read or written by name)
};
GUEST_OFFSET(FirstPlacedStructureOf4BFrame, byte_10, 0x10);
GUEST_SIZE(FirstPlacedStructureOf4BFrame, 0x30);

u32 first_placed_structure_of_4_b(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<FirstPlacedStructureOf4BFrame> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r6 = 0xfcu;
    u32 r0_1 = word_ab7df4_00314a04(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r8 = 0x88e4d8u;
    u32 list = r0_1;
    u32 i = 0u;
    do {
        u32 r4 = *gptr<u8>(r8 + i);
        ListCursor__end(frame.at(0x18).addr(), list);
        ListCursor__begin(frame.at(0).addr(), list);
        u32 r0_5 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
        r1 = guest::cpu()->r[1];
        if (r0_5 != 0) {
            do {
                if (r4 == frame->byte_10) {
                    r6 = *gptr<u8>(r8 + i);
                    guest::cpu()->r[1] = r1;
                    return r6;
                }
                ListCursor__next(frame.at(0).addr(), r1);
                r0_8 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
                r1 = guest::cpu()->r[1];
                guest::preempt();
            } while (r0_8 != 0);
        }
        i += 1u;
        guest::preempt();
    } while (i < 4u);
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_006cbbe4
GUEST_EXPORT_FRAMED(0x006cbbe4, d_006cbbe4::first_placed_structure_of_4_b, 0x41f0);  // pushes {r4, i, r6, list, r8, lr} first, as the original

// f_006cbcf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans the placed structures list for kinds of type 0xf and their records.
namespace d_006cbcf8 {

struct __attribute__((packed)) PlacedStructuresScanArg0 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(PlacedStructuresScanArg0, byte_2, 0x2);
GUEST_OFFSET(PlacedStructuresScanArg0, byte_3, 0x3);

inline constexpr guest::Function<0x003026cc, u32(u32, u32)> town_byte_6e2b0;
inline constexpr guest::Function<0x003026e8, u32(u32, u32)> low_byte_of_id;
inline constexpr guest::Function<0x0030ce60, u32(u32, u32)> return_constant_0x957214_;
inline constexpr guest::Function<0x00314a04, u32(u32)> word_ab7df4_00314a04;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32, u32)> ListCursor__next;
inline constexpr guest::Function<0x00314bc4, u32(u32, u32)> save_state_6e2a6_is_active;
inline constexpr guest::Function<0x005ca27c, u32(u32, u32)> byte_88bd38;
inline constexpr guest::Function<0x005ca5c0, u32(u32, u32)> signed_byte_88c130;
inline constexpr guest::Function<0x0071831c, u32(u32, u32)> town_byte_6e2b2;
inline constexpr guest::Function<0x00718340, u32(u32, u32)> town_byte_6e2b3;
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> halfword_is_fc_or_more;

struct __attribute__((packed)) PlacedStructuresScanFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x2f];  // (not read or written by name)
};
GUEST_OFFSET(PlacedStructuresScanFrame, byte_10, 0x10);
GUEST_SIZE(PlacedStructuresScanFrame, 0x40);

u32 placed_structures_scan(gptr<PlacedStructuresScanArg0> arg0, u32 r1) {
    guest::StackFrameOf<PlacedStructuresScanFrame> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_10 = 0;
    u32 r0_20 = 0;
    u32 r0_1 = halfword_is_fc_or_more(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 r0_2 = return_constant_0x957214_(r0_1, r1);
        u32 r6 = r0_2;
        u32 r0_3 = save_state_6e2a6_is_active(r0_2, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 r0_4 = town_byte_6e2b0(r6, r1);
            u32 low_byte = low_byte_of_id(r0, guest::cpu()->r[1]);
            r1 = guest::cpu()->r[1];
            if (r0_4 == low_byte) {
                u32 r0_6 = town_byte_6e2b2(r6, r1);
                r1 = guest::cpu()->r[1];
                if (r0_6 == arg0->byte_2) {
                    u32 r0_7 = town_byte_6e2b3(r6, r1);
                    r1 = guest::cpu()->r[1];
                    if (r0_7 == arg0->byte_3) {
                        return 0u;
                    }
                }
            }
        }
        u32 low_byte_2 = low_byte_of_id(r0, r1);
        if (low_byte_2 < 0xfcu) {
            if (byte_88bd38(low_byte_2, guest::cpu()->r[1]) == 0xfu) {
                goto L_6cbdb0;
            }
        }
        r0_10 = low_byte_of_id(r0, guest::cpu()->r[1]);
        frame.release();
        return signed_byte_88c130(r0_10, guest::cpu()->r[1]);
L_6cbdb0:;
        u32 list = word_ab7df4_00314a04(0u);
        u32 r4 = 0u;
        ListCursor__end(frame.at(0x18).addr(), list);
        ListCursor__begin(frame.at(0).addr(), list);
        u32 r0_15 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
        r1 = guest::cpu()->r[1];
        if (r0_15 != 0) {
            do {
                u32 r0_16 = frame->byte_10;
                if (r0_16 < 0xfcu) {
                    u32 r0_17 = byte_88bd38(r0_16, r1);
                    r1 = guest::cpu()->r[1];
                    if (r0_17 == 0xfu) {
                        r4 += 1u;
                    }
                }
                ListCursor__next(frame.at(0).addr(), r1);
                r0_20 = handles_differ(frame.at(0).addr(), frame.at(0x18).addr());
                r1 = guest::cpu()->r[1];
                guest::preempt();
            } while (r0_20 != 0);
        }
        if (r4 >= 2u) {
            if (r4 < 3u) {
                u32 r0_21 = save_state_6e2a6_is_active(r6, r1);
                r1 = guest::cpu()->r[1];
                if (r0_21 != 0) {
                    u32 r0_22 = town_byte_6e2b0(r6, r1);
                    r1 = guest::cpu()->r[1];
                    if (r0_22 < 0xfcu) {
                        u32 r0_23 = byte_88bd38(r0_22, r1);
                        r1 = guest::cpu()->r[1];
                        if (r0_23 == 0xfu) {
                            return 0u;
                        }
                    }
                }
            }
            guest::cpu()->r[1] = r1;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006cbcf8
GUEST_EXPORT(0x006cbcf8, d_006cbcf8::placed_structures_scan);

// f_006cbea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The block (0-2) of structure kind 0x12-0x41 by sixteen, or 3.
namespace d_006cbea8 {


u32 structure_block_of_kind(u32 r0) {
    u32 r1_1 = r0 - 0x12u;
    if (r1_1 > 0x2fu) {
        guest::cpu()->r[1] = r1_1;
        return 3u;
    }
    if (r1_1 <= 0xfu) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = r0 - 0x22u;
    if (r1_2 <= 0xfu) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r0 - 0x32u <= 0xfu) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    guest::cpu()->r[1] = r1_2;
    return 3u;
}

}  // namespace d_006cbea8
GUEST_EXPORT(0x006cbea8, d_006cbea8::structure_block_of_kind);

// f_006cbee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index (0-15) of structure kind 0x12-0x41 in its block of sixteen, or 3.
namespace d_006cbee8 {


u32 structure_index_in_block(u32 r0) {
    u32 r1_1 = r0 - 0x12u;
    if (r1_1 > 0x2fu) {
        return 3u;
    }
    if (r1_1 <= 0xfu) {
        return r0 - 0x12u;
    }
    if (r0 - 0x22u <= 0xfu) {
        return r0 - 0x22u;
    }
    if (r0 - 0x32u <= 0xfu) {
        return r0 - 0x32u;
    }
    return 3u;
}

}  // namespace d_006cbee8
GUEST_EXPORT(0x006cbee8, d_006cbee8::structure_index_in_block);

// f_006cbfec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When no slot is set: calls the handler at 0x14fdd0 on the source object's part at +0x6b94 (with 1.0).
namespace d_006cbfec {

inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline guest::global<u32, 0x0014fdd0> global_0014fdd0;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;

void source_object_call_14fdd0() {
    float S0_1 = 1.0f;
    if (*event_npc_mode != 0xffu) {
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r0_1 = *event_npc_source;
    if (r0_1 == 0) {
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r0_2 = *gptr<u32>(r0_1 + 0x6b94u);
    if (r0_2 == 0) {
        guest::cpu()->s[0] = S0_1;
        return;
    }
    guest::cpu()->s[0] = S0_1;
    guest::call_address<u32>(*global_0014fdd0, r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006cbfec
GUEST_EXPORT(0x006cbfec, d_006cbfec::source_object_call_14fdd0);

// f_006cc038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the cells of a structure's rectangle for blocking objects (first kind).
namespace d_006cc038 {

struct __attribute__((packed)) Local_006cc038_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc038_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc038_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006cc038_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc038_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc038_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_006cc038_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006cc038_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006cc038_r0_2, byte_1, 0x1);

struct __attribute__((packed)) Local_006cc038_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006cc038_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc038_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_006cc038_r0_4, word_8, 0x8);

struct __attribute__((packed)) Local_006cc038_r1_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc038_r1_10, word_0, 0x0);
GUEST_OFFSET(Local_006cc038_r1_10, word_4, 0x4);

struct __attribute__((packed)) Local_006cc038_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc038_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc038_r5_1, word_4, 0x4);

inline constexpr u32 event_npc_mode_address = 0x009506b0u;
inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline constexpr guest::Function<0x001b1184, u32(u32, u32)> SaveBlock5d900__entry;
inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> GridLayer__query_cell;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x003026cc, u32(u32)> town_byte_6e2b0;
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32)> return_constant_0x95bed0_;
inline constexpr guest::Function<0x0030ce60, u32(u32)> return_constant_0x957214_;
inline constexpr guest::Function<0x00314bc4, u32(u32)> save_state_6e2a6_is_active;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x005ca234, u32(u32)> entry_address_88b948;
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32)> object_name_is_fobj;
inline constexpr guest::Function<0x005ca5c0, u32(u32)> signed_byte_88c130;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x006dd3a4, u32(u32, u32)> BsNpcMgr__hide_all;
inline constexpr guest::Function<0x0071831c, u32(u32)> town_byte_6e2b2;
inline constexpr guest::Function<0x00718340, u32(u32)> town_byte_6e2b3;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) MapRectCheckStructureCellsAFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not read or written by name)
    u8 byte_20;
    u8 unknown_21[0x3];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x68];  // (not read or written by name)
    u8 byte_90;
    u8 unknown_91[0x3];  // (not read or written by name)
};
GUEST_OFFSET(MapRectCheckStructureCellsAFrame, word_8, 0x8);
GUEST_OFFSET(MapRectCheckStructureCellsAFrame, word_c, 0xc);
GUEST_OFFSET(MapRectCheckStructureCellsAFrame, byte_20, 0x20);
GUEST_OFFSET(MapRectCheckStructureCellsAFrame, word_24, 0x24);
GUEST_OFFSET(MapRectCheckStructureCellsAFrame, byte_90, 0x90);
GUEST_SIZE(MapRectCheckStructureCellsAFrame, 0x94);

u32 MapRect__check_structure_cells_a(u32 map_rect, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<MapRectCheckStructureCellsAFrame> frame;  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_25 = 0;
    u32 map_table = get_map_table(map_rect, r1, r2, r3);
    if (map_table != 0) {
        gptr<Local_006cc038_r0_2> r0_2 = gptr<Local_006cc038_r0_2>(entry_address_88b948(r2));
        u32 r2_2 = u32(s8(r0_2->byte_1)) + r1;
        u32 r1_2 = u32(s8(r0_2->byte_0)) + map_rect;
        gptr<Local_006cc038_ea_1> ea_1 = gptr<Local_006cc038_ea_1>(frame.at(0x60).addr());
        ea_1->word_0 = r1_2;
        ea_1->word_4 = r2_2;
        u32 r1_3 = *gptr<s8>(r0_2.addr() + 3u);
        u32 r1_4 = u32(*gptr<s8>(r0_2.addr() + 2u)) + map_rect;
        gptr<Local_006cc038_ea_4> ea_4 = gptr<Local_006cc038_ea_4>(frame.at(0x48).addr());
        ea_4->word_0 = r1_4;
        ea_4->word_4 = r1_3 + r1;
        construct_word_quad_from_pairs(frame.at(0x38).addr(), frame.at(0x60).addr(), frame.at(0x48).addr());
        u32 r7 = frame.at(0x50).addr();
        u32 r9_1 = frame.at(0x38).addr();
        gptr<Local_006cc038_r0_4> r0_4 = gptr<Local_006cc038_r0_4>(frame.at(0x68).addr());
        u32 r2_5 = r1 - 7u;
        r0_4->word_0 = map_rect - 7u;
        r0_4->word_4 = r2_5;
        u32 zf_1 = r2 == 0;
        if (!zf_1) {
            zf_1 = r2 == 1u;
        }
        u32 r4 = r0_4.addr();
        r0_4->word_8 = 0;
        if (!zf_1 && r2 != 2u && r2 != 3u) {
            goto L_6cc100;
        }
        r0_5 = return_constant_0x95bed0_(r0_4.addr(), 0u, r2_5);
        r0_6 = SaveBlock5d900__entry(r0_5, r2);
        r2_5 = guest::cpu()->r[2];
        *gptr<u32>(r4 + 8u) = r0_6;
L_6cc100:;
        make_end_grid_rect_iterator(frame.at(0x78).addr(), r9_1, r2_5);
        construct_grid_rect_iterator(frame.at(0x28).addr(), r9_1);
        u32 r0_10 = key_records_differ(frame.at(0x28).addr(), frame.at(0x78).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            u32 r9 = event_npc_mode_address;
            u32 r10 = event_npc_source_address;
            do {
                gptr<Local_006cc038_r5_1> r5_1 = gptr<Local_006cc038_r5_1>(frame.at(0x30).addr());
                read_map_table(1u, r1, r2, r3);
                if (*gptr<u32>(r4 + 8u) != 0) {
                    grid_point_subtract(frame.at(8).addr(), r5_1.addr(), r4);
                    u32 r0_12 = frame->word_c;
                    u32 r2_10 = frame->word_8;
                    u32 r2_11 = r2_10 + (r2_10 << 2);
                    u32 r1_8 = *gptr<u32>(r4 + 8u) + ((r0_12 + (r0_12 << 2) << 5) + (r2_11 << 1));
                    Cell__copy_from(frame.at(0x88).addr(), r1_8, r2_11);
                    if (frame->byte_90 != 0) {
                        GridLayer__query_cell(frame.at(0x18).addr(), r5_1->word_0, r5_1->word_4, 1u);
                        u32 r5_2 = frame->byte_20;
                        if (r5_2 < 0xfcu) {
                            gptr<Local_006cc038_r1_10> r1_10 = gptr<Local_006cc038_r1_10>(frame.at(0x18).addr());
                            u32 r6_1 = r1_10->word_0;
                            u32 r8_1 = r1_10->word_4;
                            if (object_name_is_fobj(r5_2, r1_10.addr()) != 0) {
                                u32 r0_16 = signed_byte_88c130(r5_2);
                                if (r0_16 != 0) {
                                    u32 r0_17 = return_constant_0x957214_(r0_16);
                                    if (save_state_6e2a6_is_active(r0_17) != 0) {
                                        if (town_byte_6e2b0(r0_17) == r5_2) {
                                            if (town_byte_6e2b2(r0_17) == r6_1) {
                                                if (town_byte_6e2b3(r0_17) == r8_1) {
                                                    goto L_6cc260;
                                                }
                                            }
                                        }
                                    }
                                    BsNpcMgr__hide_all(*gptr<u8>(r9) == 0xffu ? *gptr<u32>(r10) : 0u, frame->word_24);
                                }
                            }
                        }
                    }
L_6cc260:;
                }
                WrappingCursor__advance(frame.at(0x28).addr());
                r0_25 = key_records_differ(frame.at(0x28).addr(), frame.at(0x78).addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_25 != 0);
        }
        u32 r0_26 = copy_construct_word_pair(r7, r4);
        *gptr<u32>(r0_26 + 8u) = *gptr<u32>(r4 + 8u);
        map_table = frame.at(0x60).addr();
    }
    return map_table;
}

}  // namespace d_006cc038
GUEST_EXPORT_FRAMED(0x006cc038, d_006cc038::MapRect__check_structure_cells_a, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006cc304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the structure kind (an f-object with a placement byte) blocks cell (x, z), unless it is the active structure
// placed exactly there.
namespace d_006cc304 {

inline constexpr guest::Function<0x003026cc, u32(u32)> town_byte_6e2b0;
inline constexpr guest::Function<0x0030ce60, u32(u32)> return_constant_0x957214_;
inline constexpr guest::Function<0x00314bc4, u32(u32)> save_state_6e2a6_is_active;
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32)> object_name_is_fobj;
inline constexpr guest::Function<0x005ca5c0, u32(u32)> signed_byte_88c130;
inline constexpr guest::Function<0x0071831c, u32(u32)> town_byte_6e2b2;
inline constexpr guest::Function<0x00718340, u32(u32)> town_byte_6e2b3;

u32 structure_blocks_cell(u32 r0, u32 r1, u32 r2) {
    if (object_name_is_fobj(r2, r1) != 0) {
        u32 r0_2 = signed_byte_88c130(r2);
        if (r0_2 != 0) {
            u32 r0_3 = return_constant_0x957214_(r0_2);
            if (save_state_6e2a6_is_active(r0_3) != 0) {
                if (town_byte_6e2b0(r0_3) == r2) {
                    if (town_byte_6e2b2(r0_3) == r0) {
                        u32 r0_7 = town_byte_6e2b3(r0_3);
                        if (r0_7 == r1) {
                            return 0u;
                        }
                    }
                }
            }
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_006cc304
GUEST_EXPORT_FRAMED(0x006cc304, d_006cc304::structure_blocks_cell, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006cc388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the cells of a structure's rectangle for blocking objects (second kind).
namespace d_006cc388 {

struct __attribute__((packed)) Local_006cc388_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc388_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc388_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006cc388_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc388_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc388_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_006cc388_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006cc388_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006cc388_r0_2, byte_1, 0x1);

struct __attribute__((packed)) Local_006cc388_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006cc388_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc388_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_006cc388_r0_4, word_8, 0x8);

struct __attribute__((packed)) Local_006cc388_r1_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc388_r1_10, word_0, 0x0);
GUEST_OFFSET(Local_006cc388_r1_10, word_4, 0x4);

struct __attribute__((packed)) Local_006cc388_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc388_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc388_r5_1, word_4, 0x4);

inline constexpr u32 event_npc_mode_address = 0x009506b0u;
inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline constexpr guest::Function<0x001b1184, u32(u32, u32)> SaveBlock5d900__entry;
inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> GridLayer__query_cell;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x003026cc, u32(u32)> town_byte_6e2b0;
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32)> return_constant_0x95bed0_;
inline constexpr guest::Function<0x0030ce60, u32(u32)> return_constant_0x957214_;
inline constexpr guest::Function<0x00314bc4, u32(u32)> save_state_6e2a6_is_active;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x005ca234, u32(u32, u32)> entry_address_88b948;
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32)> object_name_is_fobj;
inline constexpr guest::Function<0x005ca5c0, u32(u32)> signed_byte_88c130;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x006dd470, u32(u32, u32)> BsNpcMgr__show_all;
inline constexpr guest::Function<0x0071831c, u32(u32)> town_byte_6e2b2;
inline constexpr guest::Function<0x00718340, u32(u32)> town_byte_6e2b3;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) MapRectCheckStructureCellsBFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not read or written by name)
    u8 byte_20;
    u8 unknown_21[0x3];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x68];  // (not read or written by name)
    u8 byte_90;
    u8 unknown_91[0x3];  // (not read or written by name)
};
GUEST_OFFSET(MapRectCheckStructureCellsBFrame, word_8, 0x8);
GUEST_OFFSET(MapRectCheckStructureCellsBFrame, word_c, 0xc);
GUEST_OFFSET(MapRectCheckStructureCellsBFrame, byte_20, 0x20);
GUEST_OFFSET(MapRectCheckStructureCellsBFrame, word_24, 0x24);
GUEST_OFFSET(MapRectCheckStructureCellsBFrame, byte_90, 0x90);
GUEST_SIZE(MapRectCheckStructureCellsBFrame, 0x94);

void MapRect__check_structure_cells_b(u32 map_rect, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<MapRectCheckStructureCellsBFrame> frame;  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_25 = 0;
    u32 map_table = get_map_table(map_rect, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (map_table != 0) {
        gptr<Local_006cc388_r0_2> r0_2 = gptr<Local_006cc388_r0_2>(entry_address_88b948(r2, r1_1));
        u32 r2_2 = u32(s8(r0_2->byte_1)) + r1;
        u32 r1_2 = u32(s8(r0_2->byte_0)) + map_rect;
        gptr<Local_006cc388_ea_1> ea_1 = gptr<Local_006cc388_ea_1>(frame.at(0x60).addr());
        ea_1->word_0 = r1_2;
        ea_1->word_4 = r2_2;
        u32 r1_3 = *gptr<s8>(r0_2.addr() + 3u);
        u32 r1_4 = u32(*gptr<s8>(r0_2.addr() + 2u)) + map_rect;
        gptr<Local_006cc388_ea_4> ea_4 = gptr<Local_006cc388_ea_4>(frame.at(0x48).addr());
        ea_4->word_0 = r1_4;
        ea_4->word_4 = r1_3 + r1;
        construct_word_quad_from_pairs(frame.at(0x38).addr(), frame.at(0x60).addr(), frame.at(0x48).addr());
        u32 r7 = frame.at(0x50).addr();
        u32 r9_1 = frame.at(0x38).addr();
        gptr<Local_006cc388_r0_4> r0_4 = gptr<Local_006cc388_r0_4>(frame.at(0x68).addr());
        u32 r2_5 = r1 - 7u;
        r0_4->word_0 = map_rect - 7u;
        r0_4->word_4 = r2_5;
        u32 zf_1 = r2 == 0;
        if (!zf_1) {
            zf_1 = r2 == 1u;
        }
        u32 r4 = r0_4.addr();
        r0_4->word_8 = 0;
        if (!zf_1 && r2 != 2u && r2 != 3u) {
            goto L_6cc450;
        }
        r0_5 = return_constant_0x95bed0_(r0_4.addr(), 0u, r2_5);
        r0_6 = SaveBlock5d900__entry(r0_5, r2);
        r2_5 = guest::cpu()->r[2];
        *gptr<u32>(r4 + 8u) = r0_6;
L_6cc450:;
        make_end_grid_rect_iterator(frame.at(0x78).addr(), r9_1, r2_5);
        construct_grid_rect_iterator(frame.at(0x28).addr(), r9_1);
        u32 r0_10 = key_records_differ(frame.at(0x28).addr(), frame.at(0x78).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            u32 r9 = event_npc_mode_address;
            u32 r10 = event_npc_source_address;
            do {
                gptr<Local_006cc388_r5_1> r5_1 = gptr<Local_006cc388_r5_1>(frame.at(0x30).addr());
                read_map_table(1u, r1, r2, r3);
                if (*gptr<u32>(r4 + 8u) != 0) {
                    grid_point_subtract(frame.at(8).addr(), r5_1.addr(), r4);
                    u32 r0_12 = frame->word_c;
                    u32 r2_10 = frame->word_8;
                    u32 r2_11 = r2_10 + (r2_10 << 2);
                    u32 r1_8 = *gptr<u32>(r4 + 8u) + ((r0_12 + (r0_12 << 2) << 5) + (r2_11 << 1));
                    Cell__copy_from(frame.at(0x88).addr(), r1_8, r2_11);
                    if (frame->byte_90 != 0) {
                        GridLayer__query_cell(frame.at(0x18).addr(), r5_1->word_0, r5_1->word_4, 1u);
                        u32 r5_2 = frame->byte_20;
                        if (r5_2 < 0xfcu) {
                            gptr<Local_006cc388_r1_10> r1_10 = gptr<Local_006cc388_r1_10>(frame.at(0x18).addr());
                            u32 r6_1 = r1_10->word_0;
                            u32 r8_1 = r1_10->word_4;
                            if (object_name_is_fobj(r5_2, r1_10.addr()) != 0) {
                                u32 r0_16 = signed_byte_88c130(r5_2);
                                if (r0_16 != 0) {
                                    u32 r0_17 = return_constant_0x957214_(r0_16);
                                    if (save_state_6e2a6_is_active(r0_17) != 0) {
                                        if (town_byte_6e2b0(r0_17) == r5_2) {
                                            if (town_byte_6e2b2(r0_17) == r6_1) {
                                                if (town_byte_6e2b3(r0_17) == r8_1) {
                                                    goto L_6cc5b0;
                                                }
                                            }
                                        }
                                    }
                                    BsNpcMgr__show_all(*gptr<u8>(r9) == 0xffu ? *gptr<u32>(r10) : 0u, frame->word_24);
                                }
                            }
                        }
                    }
L_6cc5b0:;
                }
                WrappingCursor__advance(frame.at(0x28).addr());
                r0_25 = key_records_differ(frame.at(0x28).addr(), frame.at(0x78).addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_25 != 0);
        }
        u32 r0_26 = copy_construct_word_pair(r7, r4);
        r1_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r0_26 + 8u) = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006cc388
GUEST_EXPORT_FRAMED(0x006cc388, d_006cc388::MapRect__check_structure_cells_b, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006cc654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the cells of a structure's rectangle for blocking objects (third kind).
namespace d_006cc654 {

struct __attribute__((packed)) Local_006cc654_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc654_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc654_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006cc654_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc654_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc654_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_006cc654_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006cc654_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006cc654_r0_2, byte_1, 0x1);

struct __attribute__((packed)) Local_006cc654_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006cc654_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc654_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_006cc654_r0_4, word_8, 0x8);

struct __attribute__((packed)) Local_006cc654_r1_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc654_r1_10, word_0, 0x0);
GUEST_OFFSET(Local_006cc654_r1_10, word_4, 0x4);

struct __attribute__((packed)) Local_006cc654_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc654_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc654_r5_1, word_4, 0x4);

inline constexpr u32 event_npc_mode_address = 0x009506b0u;
inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline constexpr guest::Function<0x001b1184, u32(u32, u32)> SaveBlock5d900__entry;
inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> GridLayer__query_cell;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x003026cc, u32(u32)> town_byte_6e2b0;
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32)> return_constant_0x95bed0_;
inline constexpr guest::Function<0x0030ce60, u32(u32)> return_constant_0x957214_;
inline constexpr guest::Function<0x00314bc4, u32(u32)> save_state_6e2a6_is_active;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x005ca234, u32(u32, u32)> entry_address_88b948;
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32)> object_name_is_fobj;
inline constexpr guest::Function<0x005ca5c0, u32(u32)> signed_byte_88c130;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> Cell__copy_from;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x006de930, u32(u32, u32)> BsNpcMgr__notify_all;
inline constexpr guest::Function<0x0071831c, u32(u32)> town_byte_6e2b2;
inline constexpr guest::Function<0x00718340, u32(u32)> town_byte_6e2b3;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32)> grid_point_subtract;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) MapRectCheckStructureCellsCFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not read or written by name)
    u8 byte_20;
    u8 unknown_21[0x3];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x68];  // (not read or written by name)
    u8 byte_90;
    u8 unknown_91[0x3];  // (not read or written by name)
};
GUEST_OFFSET(MapRectCheckStructureCellsCFrame, word_8, 0x8);
GUEST_OFFSET(MapRectCheckStructureCellsCFrame, word_c, 0xc);
GUEST_OFFSET(MapRectCheckStructureCellsCFrame, byte_20, 0x20);
GUEST_OFFSET(MapRectCheckStructureCellsCFrame, word_24, 0x24);
GUEST_OFFSET(MapRectCheckStructureCellsCFrame, byte_90, 0x90);
GUEST_SIZE(MapRectCheckStructureCellsCFrame, 0x94);

void MapRect__check_structure_cells_c(u32 map_rect, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<MapRectCheckStructureCellsCFrame> frame;  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_25 = 0;
    u32 map_table = get_map_table(map_rect, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (map_table != 0) {
        gptr<Local_006cc654_r0_2> r0_2 = gptr<Local_006cc654_r0_2>(entry_address_88b948(r2, r1_1));
        u32 r2_2 = u32(s8(r0_2->byte_1)) + r1;
        u32 r1_2 = u32(s8(r0_2->byte_0)) + map_rect;
        gptr<Local_006cc654_ea_1> ea_1 = gptr<Local_006cc654_ea_1>(frame.at(0x60).addr());
        ea_1->word_0 = r1_2;
        ea_1->word_4 = r2_2;
        u32 r1_3 = *gptr<s8>(r0_2.addr() + 3u);
        u32 r1_4 = u32(*gptr<s8>(r0_2.addr() + 2u)) + map_rect;
        gptr<Local_006cc654_ea_4> ea_4 = gptr<Local_006cc654_ea_4>(frame.at(0x48).addr());
        ea_4->word_0 = r1_4;
        ea_4->word_4 = r1_3 + r1;
        construct_word_quad_from_pairs(frame.at(0x38).addr(), frame.at(0x60).addr(), frame.at(0x48).addr());
        u32 r7 = frame.at(0x50).addr();
        u32 r9_1 = frame.at(0x38).addr();
        gptr<Local_006cc654_r0_4> r0_4 = gptr<Local_006cc654_r0_4>(frame.at(0x68).addr());
        u32 r2_5 = r1 - 7u;
        r0_4->word_0 = map_rect - 7u;
        r0_4->word_4 = r2_5;
        u32 zf_1 = r2 == 0;
        if (!zf_1) {
            zf_1 = r2 == 1u;
        }
        u32 r4 = r0_4.addr();
        r0_4->word_8 = 0;
        if (!zf_1 && r2 != 2u && r2 != 3u) {
            goto L_6cc71c;
        }
        r0_5 = return_constant_0x95bed0_(r0_4.addr(), 0u, r2_5);
        r0_6 = SaveBlock5d900__entry(r0_5, r2);
        r2_5 = guest::cpu()->r[2];
        *gptr<u32>(r4 + 8u) = r0_6;
L_6cc71c:;
        make_end_grid_rect_iterator(frame.at(0x78).addr(), r9_1, r2_5);
        construct_grid_rect_iterator(frame.at(0x28).addr(), r9_1);
        u32 r0_10 = key_records_differ(frame.at(0x28).addr(), frame.at(0x78).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            u32 r9 = event_npc_mode_address;
            u32 r10 = event_npc_source_address;
            do {
                gptr<Local_006cc654_r5_1> r5_1 = gptr<Local_006cc654_r5_1>(frame.at(0x30).addr());
                read_map_table(1u, r1, r2, r3);
                if (*gptr<u32>(r4 + 8u) != 0) {
                    grid_point_subtract(frame.at(8).addr(), r5_1.addr(), r4);
                    u32 r0_12 = frame->word_c;
                    u32 r2_10 = frame->word_8;
                    u32 r2_11 = r2_10 + (r2_10 << 2);
                    u32 r1_8 = *gptr<u32>(r4 + 8u) + ((r0_12 + (r0_12 << 2) << 5) + (r2_11 << 1));
                    Cell__copy_from(frame.at(0x88).addr(), r1_8, r2_11);
                    if (frame->byte_90 != 0) {
                        GridLayer__query_cell(frame.at(0x18).addr(), r5_1->word_0, r5_1->word_4, 1u);
                        u32 r5_2 = frame->byte_20;
                        if (r5_2 < 0xfcu) {
                            gptr<Local_006cc654_r1_10> r1_10 = gptr<Local_006cc654_r1_10>(frame.at(0x18).addr());
                            u32 r6_1 = r1_10->word_0;
                            u32 r8_1 = r1_10->word_4;
                            if (object_name_is_fobj(r5_2, r1_10.addr()) != 0) {
                                u32 r0_16 = signed_byte_88c130(r5_2);
                                if (r0_16 != 0) {
                                    u32 r0_17 = return_constant_0x957214_(r0_16);
                                    if (save_state_6e2a6_is_active(r0_17) != 0) {
                                        if (town_byte_6e2b0(r0_17) == r5_2) {
                                            if (town_byte_6e2b2(r0_17) == r6_1) {
                                                if (town_byte_6e2b3(r0_17) == r8_1) {
                                                    goto L_6cc87c;
                                                }
                                            }
                                        }
                                    }
                                    BsNpcMgr__notify_all(*gptr<u8>(r9) == 0xffu ? *gptr<u32>(r10) : 0u, frame->word_24);
                                }
                            }
                        }
                    }
L_6cc87c:;
                }
                WrappingCursor__advance(frame.at(0x28).addr());
                r0_25 = key_records_differ(frame.at(0x28).addr(), frame.at(0x78).addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_25 != 0);
        }
        u32 r0_26 = copy_construct_word_pair(r7, r4);
        r1_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r0_26 + 8u) = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006cc654
GUEST_EXPORT_FRAMED(0x006cc654, d_006cc654::MapRect__check_structure_cells_c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006cc920: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the scene is 0x5c or 0x68.
namespace d_006cc920 {


u32 is_scene_5c_or_68(u32 r0) {
    return r0 == 0x5cu || r0 == 0x68u;
}

}  // namespace d_006cc920
GUEST_EXPORT(0x006cc920, d_006cc920::is_scene_5c_or_68);

// f_006ccc1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the letter storage changed (+0x1c204 = 0xff).
namespace d_006ccc1c {

struct __attribute__((packed)) LetterStorage {
    u8 unknown_0[0x1c204];  // (not used here)
    u8 byte_1c204;
};
GUEST_OFFSET(LetterStorage, byte_1c204, 0x1c204);


void LetterStorage__mark_dirty(gptr<LetterStorage> letter_storage) {
    letter_storage->byte_1c204 = 0xff;
    guest::cpu()->r[1] = letter_storage.addr() + 0x1c000u;
}

}  // namespace d_006ccc1c
GUEST_EXPORT(0x006ccc1c, d_006ccc1c::LetterStorage__mark_dirty);

// f_006ccc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the letter storage's changed flag (+0x1c204).
namespace d_006ccc2c {

struct __attribute__((packed)) LetterStorage {
    u8 unknown_0[0x1c204];  // (not used here)
    u8 byte_1c204;
};
GUEST_OFFSET(LetterStorage, byte_1c204, 0x1c204);


void LetterStorage__clear_dirty(gptr<LetterStorage> letter_storage) {
    letter_storage->byte_1c204 = 0;
}

}  // namespace d_006ccc2c
GUEST_EXPORT(0x006ccc2c, d_006ccc2c::LetterStorage__clear_dirty);

// f_006ccc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 180 stored letters (0x280 bytes each) and the changed flag.
namespace d_006ccc3c {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> Letter__clear;

u32 LetterStorage__clear_2(u32 letter_storage, u32 r1) {
    u32 r5 = letter_storage;
    u32 i = 0u;
    do {
        Letter__clear(r5 + i * 0x280u + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        i += 1u;
        guest::preempt();
    } while (i < 0xb4u);
    *gptr<u8>(r5 + 0x1c204u) = 0;
    guest::cpu()->r[1] = 0x1c204u;
    return 0u;
}

}  // namespace d_006ccc3c
GUEST_EXPORT_FRAMED(0x006ccc3c, d_006ccc3c::LetterStorage__clear_2, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_006ccc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of stored letter ((a * 6 + b) * 10 + c).
namespace d_006ccc78 {


u32 LetterStorage__letter(u32 letter_storage, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r2 + (r1 + (r1 << 1) << 1);
    u32 r1_2 = r3 + (r1_1 + (r1_1 << 2) << 1);
    return letter_storage + (r1_2 + (r1_2 << 2) << 7) + 4u;
}

}  // namespace d_006ccc78
GUEST_EXPORT(0x006ccc78, d_006ccc78::LetterStorage__letter);

// f_006ccd14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the item at ((row * 6 + column) * 10 + slot) of the storage and puts another in its place.
namespace d_006ccd14 {

struct __attribute__((packed)) Local_006ccd14_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ccd14_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006ccd14_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;

void ItemStorage__swap_item(u32 item_storage, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006ccd14_ea_1> ea_1 = gptr<Local_006ccd14_ea_1>(frame.at(0x10).addr());
    u32 r5_1 = ea_1->word_4;
    u32 r4_1 = r1 + (ea_1->word_0 + (r3 + r2 * 6u) * 0xau << 2);
    Item__copy_b(item_storage, r4_1);
    frame.release();
    Item__copy(r4_1, r5_1);
    return;
}

}  // namespace d_006ccd14
GUEST_EXPORT(0x006ccd14, d_006ccd14::ItemStorage__swap_item);

// f_006ccd80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes each of the 180 stored items that is not empty (0076aff4).
namespace d_006ccd80 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> ItemDisplay__from_item;

struct __attribute__((packed)) ItemStorageRefreshItemsFrame {
    u32 word_0;
};
GUEST_OFFSET(ItemStorageRefreshItemsFrame, word_0, 0x0);
GUEST_SIZE(ItemStorageRefreshItemsFrame, 0x4);

void ItemStorage__refresh_items(u32 item_storage, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemStorageRefreshItemsFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = item_storage;
    u32 r7 = r1;
    u32 i = 0u;
    do {
        u32 r0_1 = r5 + (i << 2);
        u32 is_empty = Item__is_empty(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (is_empty == 0) {
            ItemDisplay__from_item(frame.at(0).addr(), r0_1, r7, r3);
            Item__copy(r0_1, frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (i < 0xb4u);
}

}  // namespace d_006ccd80
GUEST_EXPORT_FRAMED(0x006ccd80, d_006ccd80::ItemStorage__refresh_items, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_006ccde0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of design entry ((a * 6 + b) * 4 + c) when its bit is set, else 0.
namespace d_006ccde0 {


u32 DesignStorage__used_entry(u32 design_storage, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r2 + (r1 + (r1 << 1) << 1);
    u32 r12_3 = *gptr<u8>(((design_storage + (r1_1 >> 1)) + 0x25c00u) + 0x384u);
    if ((r12_3 & lsl_r(1u, (((r1_1 & 1u) == 0) ? r3 : r3 + 4u) & 0xff)) == 0) {
        return 0u;
    }
    u32 r1_2 = r3 + (r1_1 << 2);
    u32 r1_3 = (r1_2 << 4) - r1_2;
    return design_storage + (r1_3 + (r1_3 << 3) << 4) + 4u;
}

}  // namespace d_006ccde0
GUEST_EXPORT_FRAMED(0x006ccde0, d_006ccde0::DesignStorage__used_entry, 0x10);  // pushes {r4} first, as the original

// f_006cce34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the design storage changed (+0x25f8d = 0xff).
namespace d_006cce34 {

struct __attribute__((packed)) DesignStorage {
    u8 unknown_0[0x25f8d];  // (not used here)
    u8 byte_25f8d;
};
GUEST_OFFSET(DesignStorage, byte_25f8d, 0x25f8d);


void DesignStorage__mark_dirty(gptr<DesignStorage> design_storage) {
    design_storage->byte_25f8d = 0xff;
    guest::cpu()->r[1] = 0xffu;
}

}  // namespace d_006cce34
GUEST_EXPORT(0x006cce34, d_006cce34::DesignStorage__mark_dirty);

// f_006cce48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the design storage's changed flag (+0x25f8d).
namespace d_006cce48 {

struct __attribute__((packed)) DesignStorage {
    u8 unknown_0[0x25f8d];  // (not used here)
    u8 byte_25f8d;
};
GUEST_OFFSET(DesignStorage, byte_25f8d, 0x25f8d);


void DesignStorage__clear_dirty(gptr<DesignStorage> design_storage) {
    design_storage->byte_25f8d = 0;
}

}  // namespace d_006cce48
GUEST_EXPORT(0x006cce48, d_006cce48::DesignStorage__clear_dirty);

// f_006cce5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a design in entry ((a * 6 + b) * 4 + c) and sets its bit.
namespace d_006cce5c {

struct __attribute__((packed)) Local_006cce5c_r0_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006cce5c_r0_1, byte_0, 0x0);

inline constexpr guest::Function<0x001b49b0, u32(u32, u32, u32, u32)> Pattern__copy_and_share;

void DesignStorage__store(u32 design_storage, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = r2 + (r1 + (r1 << 1) << 1);
    u32 r1_1 = r3 + (r6_1 << 2);
    u32 r1_2 = (r1_1 << 4) - r1_1;
    u32 r4_1 = r3;
    u32 pattern = design_storage + (r1_2 + (r1_2 << 3) << 4) + 4u;
    Pattern__copy_and_share(pattern, *gptr<u32>(guest::cpu()->r[13] + 0x10u), pattern, r3);
    gptr<Local_006cce5c_r0_1> r0_1 = gptr<Local_006cce5c_r0_1>(design_storage + (r6_1 >> 1) + 0x25f84u);
    if ((r6_1 & 1u) != 0) {
        r4_1 += 4u;
    }
    u32 r1_4 = u32(r0_1->byte_0) | lsl_r(1u, r4_1 & 0xff);
    r0_1->byte_0 = u8(r1_4);
    guest::cpu()->r[1] = r1_4;
}

}  // namespace d_006cce5c
GUEST_EXPORT_FRAMED(0x006cce5c, d_006cce5c::DesignStorage__store, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ccf10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 72 stored designs (0x870 bytes each), the used bits and the changed flag.
namespace d_006ccf10 {

inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> Pattern__clear;
inline constexpr guest::Function<0x007795bc, u32(u32)> store_constants_7795bc;

u32 DesignStorage__clear(u32 design_storage, u32 r1) {
    u32 r5 = design_storage;
    u32 i = 0u;
    do {
        Pattern__clear(r5 + i * 0xfu * 0x90u + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        i += 1u;
        guest::preempt();
    } while (i < 0x48u);
    store_constants_7795bc(r5 + 0x25f84u);
    *gptr<u8>(r5 + 0x25f8du) = 0;
    guest::cpu()->r[1] = 0u;
    return 0x25f8du;
}

}  // namespace d_006ccf10
GUEST_EXPORT_FRAMED(0x006ccf10, d_006ccf10::DesignStorage__clear, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_006ccf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies 0x5a0 bytes.
namespace d_006ccf68 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;

u32 copy_5a0_bytes() {
    return copy_bytes_small_sizes_first(guest::cpu()->r[0], guest::cpu()->r[1], 0x5a0u, guest::cpu()->r[3]);
}

}  // namespace d_006ccf68
GUEST_EXPORT(0x006ccf68, d_006ccf68::copy_5a0_bytes);

// f_006ccf70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the item at ((row * 9 + column) * 10 + slot) of the storage and puts another in its place.
namespace d_006ccf70 {

struct __attribute__((packed)) Local_006ccf70_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ccf70_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006ccf70_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;

void ItemStorage2__swap_item(u32 item_storage2, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r2_1 = r2 + (r2 << 3) + r3;
    gptr<Local_006ccf70_ea_1> ea_1 = gptr<Local_006ccf70_ea_1>(frame.at(0x10).addr());
    u32 r5_1 = ea_1->word_4;
    u32 r4_1 = r1 + (ea_1->word_0 + (r2_1 + (r2_1 << 2) << 1) << 2);
    Item__copy_b(item_storage2, r4_1);
    frame.release();
    Item__copy(r4_1, r5_1);
    return;
}

}  // namespace d_006ccf70
GUEST_EXPORT(0x006ccf70, d_006ccf70::ItemStorage2__swap_item);

// f_006ccfdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes each of the 360 stored items that is not empty (0076aff4).
namespace d_006ccfdc {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> ItemDisplay__from_item;

struct __attribute__((packed)) ItemStorage2RefreshItemsFrame {
    u32 word_0;
};
GUEST_OFFSET(ItemStorage2RefreshItemsFrame, word_0, 0x0);
GUEST_SIZE(ItemStorage2RefreshItemsFrame, 0x4);

void ItemStorage2__refresh_items(u32 item_storage2, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemStorage2RefreshItemsFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = item_storage2;
    u32 r7 = r1;
    u32 i = 0u;
    do {
        u32 r0_1 = r5 + (i << 2);
        u32 is_empty = Item__is_empty(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (is_empty == 0) {
            ItemDisplay__from_item(frame.at(0).addr(), r0_1, r7, r3);
            Item__copy(r0_1, frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (i < 0x168u);
}

}  // namespace d_006ccfdc
GUEST_EXPORT_FRAMED(0x006ccfdc, d_006ccfdc::ItemStorage2__refresh_items, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_006cd79c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the ATM window's layout part (+0x26c) with its resource.
namespace d_006cd79c {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

void AtmWindow__open_layout(u32 atm_window) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(atm_window);
    frame.release();
    LayoutRenderer__draw_on_screen(r0_1, atm_window + 0x26cu, 1u);
    return;
}

}  // namespace d_006cd79c
GUEST_EXPORT(0x006cd79c, d_006cd79c::AtmWindow__open_layout);

// f_006cd970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the ATM window's layout parts and closes its layout (+0x26c).
namespace d_006cd970 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32)> layout_at_10_virtual_8;

void AtmWindow__close_layout(u32 atm_window) {
    release_layout_parts(atm_window + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    layout_at_10_virtual_8(atm_window + 0x26cu);
}

}  // namespace d_006cd970
GUEST_EXPORT_FRAMED(0x006cd970, d_006cd970::AtmWindow__close_layout, 0x4010);  // pushes {r4, lr} first, as the original

// f_006cda18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the ATM window's layout archive.
namespace d_006cda18 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> load_layout_archive;

u32 AtmWindow__load_archive(u32 atm_window) {
    return load_layout_archive(atm_window + 0x24u, 0x6cda24u);
}

}  // namespace d_006cda18
GUEST_EXPORT(0x006cda18, d_006cda18::AtmWindow__load_archive);

// f_006ce44c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows a badge of tier 1 (bronze), 2 (silver) or 3 (gold): flags the matching pane and starts its animation with its
// two sounds.
namespace d_006ce44c {

struct __attribute__((packed)) BadgeWindow {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u32 word_158;
    u32 word_15c;
    u32 word_160;
    u8 unknown_164[0x4];  // (not used here)
    u8 byte_168;
    u8 byte_169;
    u8 unknown_16a[0xce];  // (not used here)
    u32 word_238;
    u32 word_23c;
    u8 unknown_240[0x6];  // (not used here)
    u8 byte_246;
    u8 byte_247;
    u8 byte_248;
};
GUEST_OFFSET(BadgeWindow, word_154, 0x154);
GUEST_OFFSET(BadgeWindow, word_158, 0x158);
GUEST_OFFSET(BadgeWindow, word_15c, 0x15c);
GUEST_OFFSET(BadgeWindow, word_160, 0x160);
GUEST_OFFSET(BadgeWindow, byte_168, 0x168);
GUEST_OFFSET(BadgeWindow, byte_169, 0x169);
GUEST_OFFSET(BadgeWindow, word_238, 0x238);
GUEST_OFFSET(BadgeWindow, word_23c, 0x23c);
GUEST_OFFSET(BadgeWindow, byte_246, 0x246);
GUEST_OFFSET(BadgeWindow, byte_247, 0x247);
GUEST_OFFSET(BadgeWindow, byte_248, 0x248);

struct __attribute__((packed)) BadgeWindowShowBadge2Arg1 {
    u8 byte_0;
};
GUEST_OFFSET(BadgeWindowShowBadge2Arg1, byte_0, 0x0);

struct __attribute__((packed)) BadgeWindowShowBadge2Arg2 {
    u8 byte_0;
};
GUEST_OFFSET(BadgeWindowShowBadge2Arg2, byte_0, 0x0);

struct __attribute__((packed)) Local_006ce44c_r0_10 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_10, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_3, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_4 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_4, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_5 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_5, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_6 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_6, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_7 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_7, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_8 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_8, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_9 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_9, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r1_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006ce44c_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_006ce44c_r1_2, float_4, 0x4);

inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;

struct __attribute__((packed)) BadgeWindowShowBadge2Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(BadgeWindowShowBadge2Frame, word_0, 0x0);
GUEST_OFFSET(BadgeWindowShowBadge2Frame, word_4, 0x4);
GUEST_OFFSET(BadgeWindowShowBadge2Frame, word_8, 0x8);
GUEST_OFFSET(BadgeWindowShowBadge2Frame, word_c, 0xc);
GUEST_OFFSET(BadgeWindowShowBadge2Frame, word_10, 0x10);
GUEST_OFFSET(BadgeWindowShowBadge2Frame, word_14, 0x14);
GUEST_OFFSET(BadgeWindowShowBadge2Frame, word_18, 0x18);
GUEST_SIZE(BadgeWindowShowBadge2Frame, 0x20);

void BadgeWindow__show_badge_2(gptr<BadgeWindow> badge_window, gptr<BadgeWindowShowBadge2Arg1> arg1, gptr<BadgeWindowShowBadge2Arg2> arg2, float S0, float S1) {
    guest::StackFrameOf<BadgeWindowShowBadge2Frame> frame;  // the original's stack frame
    badge_window->byte_168 = arg1->byte_0;
    u32 r1_1 = arg2->byte_0;
    u32 r0_1 = 0u;
    badge_window->byte_169 = u8(r1_1);
    if (r1_1 != 1u) {
        if (r1_1 == 2u) {
            gptr<Local_006ce44c_r0_2> r0_2 = gptr<Local_006ce44c_r0_2>(badge_window->word_15c);
            r0_2->byte_b7 = u8(u32(r0_2->byte_b7) & 0xfeu);
            gptr<Local_006ce44c_r0_3> r0_3 = gptr<Local_006ce44c_r0_3>(badge_window->word_158);
            r0_3->byte_b7 = u8(u32(r0_3->byte_b7) & 0xfeu | 1u);
            gptr<Local_006ce44c_r0_4> r0_4 = gptr<Local_006ce44c_r0_4>(badge_window->word_154);
            r0_4->byte_b7 = u8(u32(r0_4->byte_b7) & 0xfeu);
            r0_1 = Layout__find_pane(badge_window.addr(), 0x6ce5e8u, 1u, guest::cpu()->r[3]);
        } else if (r1_1 == 3u) {
            gptr<Local_006ce44c_r0_5> r0_5 = gptr<Local_006ce44c_r0_5>(badge_window->word_15c);
            r0_5->byte_b7 = u8(u32(r0_5->byte_b7) & 0xfeu | 1u);
            gptr<Local_006ce44c_r0_6> r0_6 = gptr<Local_006ce44c_r0_6>(badge_window->word_158);
            r0_6->byte_b7 = u8(u32(r0_6->byte_b7) & 0xfeu);
            gptr<Local_006ce44c_r0_7> r0_7 = gptr<Local_006ce44c_r0_7>(badge_window->word_154);
            r0_7->byte_b7 = u8(u32(r0_7->byte_b7) & 0xfeu);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            r0_1 = Layout__find_pane(badge_window.addr(), 0x6ce5f4u, 1u, guest::cpu()->r[3]);
        }
    } else {
        gptr<Local_006ce44c_r0_8> r0_8 = gptr<Local_006ce44c_r0_8>(badge_window->word_15c);
        r0_8->byte_b7 = u8(u32(r0_8->byte_b7) & 0xfeu);
        gptr<Local_006ce44c_r0_9> r0_9 = gptr<Local_006ce44c_r0_9>(badge_window->word_158);
        r0_9->byte_b7 = u8(u32(r0_9->byte_b7) & 0xfeu);
        gptr<Local_006ce44c_r0_10> r0_10 = gptr<Local_006ce44c_r0_10>(badge_window->word_154);
        r0_10->byte_b7 = u8(u32(r0_10->byte_b7) & 0xfeu | 1u);
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_1 = Layout__find_pane(badge_window.addr(), 0x6ce5dcu, 1u, guest::cpu()->r[3]);
    }
    frame->word_0 = 0;
    frame->word_4 = 0;
    float S0_1 = 0.0f;
    float S1_1 = -60.0f;
    gptr<Local_006ce44c_r1_2> r1_2 = gptr<Local_006ce44c_r1_2>(frame.at(8).addr());
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    r1_2->float_0 = S0_1;
    r1_2->float_4 = S1_1;
    u32 r2_1 = badge_window->word_160;
    frame->word_4 = r0_1;
    frame->word_0 = r2_1;
    badge_window->word_238 = 0x1000422;
    badge_window->byte_246 = 1;
    badge_window->word_23c = 0x1000421;
    badge_window->byte_247 = 1;
    badge_window->byte_248 = 1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    set_node_values(badge_window.addr() + 0x16cu, frame.at(0).addr());
}

}  // namespace d_006ce44c
GUEST_EXPORT_FRAMED(0x006ce44c, d_006ce44c::BadgeWindow__show_badge_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ce67c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps the current and previous scene kinds (0x94e4b4, 0x94e4b5) and sets the fade kind (+0xa12) for the scene
// change.
namespace d_006ce67c {

inline guest::global<u8, 0x0094e4b4> black_wait_instance;
inline guest::global<u8, 0x0094e4b5> black_wait_scene_kind;
inline guest::global<u8, 0x00957320> scene_change_flags;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x003041c8, u32(u32)> kind_state_byte_1;
inline constexpr guest::Function<0x005b4120, u32(u32)> kind_state_byte_3;

void BlackWait__update_scene_kind(u32 black_wait) {
    u32 r0_1 = kind_state_byte_3(black_wait);
    if (r0_1 != 0xa5u) {
        u32 scene_2 = current_scene_id(r0_1);
        if (scene_2 != *black_wait_instance && scene_2 != 0xa5u) {
            *black_wait_instance = u8(scene_2);
        }
        if (r0_1 != *black_wait_scene_kind) {
            *black_wait_scene_kind = u8(r0_1);
        }
        u32 scene_flagged_5 = scene_has_flags(0x20000u, r0_1);
        u32 scene_flagged_6 = scene_has_flags(0x200000u, r0_1);
        u32 scene_flagged_7 = scene_has_flags(0x20000u, scene_2);
        u32 scene_flagged_8 = scene_has_flags(0x200000u, scene_2);
        u32 r0_7 = 1u;
        if ((scene_flagged_7 | scene_flagged_8 | (scene_flagged_5 | scene_flagged_6)) == 0) {
            if (scene_2 != 0x9du) {
                kind_state_byte_1(r0_7);
                if (scene_2 == 0x9eu) {
                    *gptr<u8>(black_wait + 0xa12u) = 4;
                    return;
                }
                if (r0_1 == 0x9du) {
                    r0_7 = 2u;
                    goto L_6ce708;
                }
                if (r0_1 == 0x9eu) {
                    r0_7 = 3u;
                    goto L_6ce708;
                } else {
                    *gptr<u8>(black_wait + 0xa12u) = 0;
                }
                return;
            }
            if (*scene_change_flags == 0) {
                kind_state_byte_1(r0_7);
            }
            *gptr<u8>(black_wait + 0xa12u) = 4;
            return;
        }
L_6ce708:;
        *gptr<u8>(black_wait + 0xa12u) = u8(r0_7);
    }
}

}  // namespace d_006ce67c
GUEST_EXPORT_FRAMED(0x006ce67c, d_006ce67c::BlackWait__update_scene_kind, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ce770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Signed byte +0xa10 of the black-wait object (0x94e4b8), or 0.
namespace d_006ce770 {

inline constexpr u32 popup_window_address = 0x0094e4b8u;
inline guest::global<u32, 0x0094e4b8> popup_window;

u32 black_wait_byte_a10() {
    u32 r0_1 = *popup_window;
    if (r0_1 != 0) {
        r0_1 = *gptr<s8>(r0_1 + 0xa10u);
    }
    return r0_1;
}

}  // namespace d_006ce770
GUEST_EXPORT(0x006ce770, d_006ce770::black_wait_byte_a10);

// f_006ceedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the black-wait object is ready (+0xa13), marking it when its two flags allow it.
namespace d_006ceedc {

struct __attribute__((packed)) Local_006ceedc_r0_1 {
    u8 unknown_0[0xa13];  // (not used here)
    u8 byte_a13;
};
GUEST_OFFSET(Local_006ceedc_r0_1, byte_a13, 0xa13);

struct __attribute__((packed)) Local_006ceedc_r1_1 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_006ceedc_r1_1, byte_10, 0x10);
GUEST_OFFSET(Local_006ceedc_r1_1, byte_14, 0x14);

inline constexpr u32 popup_window_address = 0x0094e4b8u;
inline guest::global<u32, 0x0094e4b8> popup_window;

u32 black_wait_check_ready(u32 r0_unused, u32 r1) {
    u32 r0_2 = 0;
    gptr<Local_006ceedc_r0_1> r0_1 = gptr<Local_006ceedc_r0_1>(*popup_window);
    if (r0_1.addr() == 0) {
        return r0_1.addr();
    }
    gptr<Local_006ceedc_r1_1> r1_1 = gptr<Local_006ceedc_r1_1>(r0_1.addr() + 0xa00u);
    if (r0_1->byte_a13 != 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return 1u;
    }
    u32 zf_1 = r1_1->byte_14 == 0;
    if (zf_1) {
        r1_1 = gptr<Local_006ceedc_r1_1>(u32(r1_1->byte_10));
        zf_1 = r1_1.addr() == 0;
    }
    if (zf_1) {
        r0_2 = 0u;
    } else {
        r1_1 = gptr<Local_006ceedc_r1_1>(1u);
        r0_1->byte_a13 = u8(r1_1.addr());
        r0_2 = r1_1.addr();
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_2;
}

}  // namespace d_006ceedc
GUEST_EXPORT(0x006ceedc, d_006ceedc::black_wait_check_ready);

// f_006cef28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the window at 0x94e4b8 is in its open animation.
namespace d_006cef28 {

struct __attribute__((packed)) Local_006cef28_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_006cef28_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_006cef28_r2_1, word_10, 0x10);

inline constexpr u32 popup_window_address = 0x0094e4b8u;
inline guest::global<u32, 0x00845fc8> window_opening_handler;
inline guest::global<u32, 0x00845fcc> window_opening_handler_adjust;
inline guest::global<u32, 0x0094e4b8> popup_window;

u32 Window94e4b8__is_opening(u32 r0_unused, u32 r1) {
    gptr<Local_006cef28_r2_1> r2_1 = gptr<Local_006cef28_r2_1>(*popup_window);
    if (r2_1.addr() == 0) {
        return 0u;
    }
    u32 r3_1 = r2_1->word_c;
    u32 r1_1 = *window_opening_handler;
    u32 r0_1 = *window_opening_handler_adjust;
    if (r3_1 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0) {
        u32 r1_2 = r2_1->word_10 | r0_1;
        if ((r1_2 & 1u) == 0) {
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    u32 r1_3 = r2_1->word_10;
    if (r1_3 != r0_1) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_006cef28
GUEST_EXPORT(0x006cef28, d_006cef28::Window94e4b8__is_opening);

// f_006cf2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the block with the kind around the cell.
namespace d_006cf2c0 {

inline guest::global<u32, 0x0090bc34> global_0090bc34;
inline guest::global<u32, 0x0090bc38> global_0090bc38;
inline guest::global<u32, 0x0090bc3c> global_0090bc3c;
inline guest::global<u32, 0x0090bc40> global_0090bc40;
inline constexpr guest::Function<0x005cf3bc, u32(u32, u32, u32, u32)> block_info_at;

struct __attribute__((packed)) BlockInfoFindKindFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x6];  // (not read or written by name)
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(BlockInfoFindKindFrame, word_4, 0x4);
GUEST_OFFSET(BlockInfoFindKindFrame, byte_e, 0xe);
GUEST_OFFSET(BlockInfoFindKindFrame, byte_f, 0xf);
GUEST_SIZE(BlockInfoFindKindFrame, 0x10);

u32 BlockInfo__find_kind(u32 block_info, u32 r1, u32 r2) {
    guest::StackFrameOf<BlockInfoFindKindFrame> frame;  // the original's stack frame
    block_info_at(frame.at(8).addr(), block_info, r1, r2);
    u32 r2_1 = frame->byte_f;
    block_info = 0u;
    u32 r3_1 = *global_0090bc34;
    u32 r12_1 = *global_0090bc38;
    r1 = block_info;
    if ((r3_1 & 0xffu) == r2_1) {
        u32 r4_1 = frame->byte_e;
        if (r4_1 != 0x60u && r4_1 != 0x61u) {
            block_info = 1u;
        }
    }
    if ((r3_1 >> 8u & 0xffu) == r2_1) {
        u32 r4_2 = frame->byte_e;
        if (r4_2 != 0x60u && r4_2 != 0x61u) {
            block_info = 1u;
        }
    }
    if ((r3_1 >> 0x10u & 0xffu) == r2_1) {
        u32 r4_3 = frame->byte_e;
        if (r4_3 != 0x60u && r4_3 != 0x61u) {
            block_info = 1u;
        }
    }
    if (r3_1 >> 0x18 == r2_1) {
        u32 r3_2 = frame->byte_e;
        if (r3_2 != 0x60u && r3_2 != 0x61u) {
            block_info = 1u;
        }
    }
    if ((r12_1 & 0xffu) == r2_1) {
        u32 r2_2 = frame->byte_e;
        if (r2_2 != 0x60u && r2_2 != 0x61u) {
            block_info = 1u;
        }
    }
    u32 r3_3 = *global_0090bc40;
    u32 r12 = frame->byte_e;
    *frame.at<u32>(0) = *global_0090bc3c;
    frame->word_4 = r3_3;
    r2 = frame.at(0).addr();
    if (*frame.at<u8>(0) == r12) {
        r1 = 1u;
    }
    u32 r3 = 3u;
    do {
        u32 zf_1 = *gptr<u8>(r2 + 1u) == r12;
        u32 ea_2 = r2 + 2u;
        r2 = ea_2;
        if (zf_1) {
            r1 = 1u;
        }
        if (*gptr<u8>(ea_2) == r12) {
            r1 = 1u;
        }
        r3 -= 1u;
        guest::preempt();
    } while (r3 != 0);
    guest::cpu()->r[1] = r1;
    return block_info | r1;
}

}  // namespace d_006cf2c0
GUEST_EXPORT_FRAMED(0x006cf2c0, d_006cf2c0::BlockInfo__find_kind, 0x4010);  // pushes {r4, lr} first, as the original

// f_006cf534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the block's kind is the current one.
namespace d_006cf534 {

inline guest::global<u32, 0x0090bc50> global_0090bc50;
inline constexpr guest::Function<0x005cf3bc, u32(u32, u32, u32, u32)> block_info_at;

struct __attribute__((packed)) BlockInfoIsCurrentKindFrame {
    u8 unknown_0[0x7];  // (not read or written by name)
    u8 byte_7;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(BlockInfoIsCurrentKindFrame, byte_7, 0x7);
GUEST_SIZE(BlockInfoIsCurrentKindFrame, 0xc);

u32 BlockInfo__is_current_kind(u32 block_info, u32 r1, u32 r2) {
    guest::StackFrameOf<BlockInfoIsCurrentKindFrame> frame;  // the original's stack frame
    block_info_at(frame.at(0).addr(), block_info, r1, r2);
    u32 r0_2 = 0u;
    u32 r1_1 = *global_0090bc50 & 0xffu;
    if (r1_1 == frame->byte_7) {
        r0_2 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_006cf534
GUEST_EXPORT_FRAMED(0x006cf534, d_006cf534::BlockInfo__is_current_kind, 0x4000);  // pushes {lr} first, as the original
