// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/callback_table.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001a08bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the camera state's flags and restarts its state machine (+0x14) with the default handler pair.
namespace d_001a08bc {

struct __attribute__((packed)) CameraState {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 byte_3b;
    u8 byte_3c;
    u8 byte_3d;
    u8 byte_3e;
};
GUEST_OFFSET(CameraState, byte_38, 0x38);
GUEST_OFFSET(CameraState, byte_39, 0x39);
GUEST_OFFSET(CameraState, byte_3a, 0x3a);
GUEST_OFFSET(CameraState, byte_3b, 0x3b);
GUEST_OFFSET(CameraState, byte_3c, 0x3c);
GUEST_OFFSET(CameraState, byte_3d, 0x3d);
GUEST_OFFSET(CameraState, byte_3e, 0x3e);

inline guest::global<u32, 0x0084b068> global_0084b068;
inline guest::global<u32, 0x0084b06c> global_0084b06c;
inline constexpr guest::Function<0x008166f0, u32(u32, u32, u32)> dispatch_offset_14;

void CameraState__reset(gptr<CameraState> camera_state) {
    camera_state->byte_38 = 0;
    camera_state->byte_39 = 0;
    camera_state->byte_3c = 0;
    camera_state->byte_3a = 0;
    camera_state->byte_3b = 0;
    camera_state->byte_3d = 0;
    camera_state->byte_3e = 0;
    dispatch_offset_14(camera_state.addr() + 0x14u, *global_0084b068, *global_0084b06c);  // (from the original)
}

}  // namespace d_001a08bc
GUEST_EXPORT_FRAMED(0x001a08bc, d_001a08bc::CameraState__reset, 0x4010);  // pushes {r4, lr} first, as the original

// f_001a1204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The default camera parameters (0x998540), with a height of 29 in scene 1.
namespace d_001a1204 {

inline constexpr u32 default_camera_params_value_address = 0x00998540u;
inline guest::global<u32, 0x00857318> global_00857318;
inline guest::global<u32, 0x0085731c> global_0085731c;
inline guest::global<u32, 0x00857320> global_00857320;
inline guest::global<u32, 0x00857324> global_00857324;
inline guest::global<u32, 0x00998540> default_camera_params_value;
inline guest::global<u32, 0x00998544> global_00998544;
inline guest::global<u32, 0x00998548> default_camera_param;
inline guest::global<u32, 0x0099854c> global_0099854c;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;

u32 default_camera_params() {
    float S0_1 = 0;
    u32 r1_1 = *global_00857318;
    u32 r2_1 = *global_0085731c;
    u32 r3_1 = *global_00857320;
    u32 r12_1 = *global_00857324;
    *default_camera_params_value = r1_1;
    *global_00998544 = r2_1;
    *default_camera_param = r3_1;
    *global_0099854c = r12_1;
    u32 scene = current_scene_id(default_camera_params_value_address, r1_1);
    if (scene == 1u) {
        S0_1 = 29.0f;
        *default_camera_param = std::bit_cast<u32>(S0_1);
    } else {
        S0_1 = std::bit_cast<float>(*default_camera_param);
    }
    guest::cpu()->s[0] = S0_1;
    return default_camera_params_value_address;
}

}  // namespace d_001a1204
GUEST_EXPORT_FRAMED(0x001a1204, d_001a1204::default_camera_params, 0x4010);  // pushes {r4, lr} first, as the original

// f_001a1abc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the camera's target and, for a mode (not -1), remembers it with the current view as the start of the move.
namespace d_001a1abc {

struct __attribute__((packed)) Object_001a1abc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u32 word_20;
    u8 unknown_24[0xd0];  // (not used here)
    u32 word_f4;
    u32 word_f8;
    u32 word_fc;
    u32 word_100;
    u32 word_104;
    u32 word_108;
    u16 half_10c;
    u16 half_10e;
    u32 word_110;
    u8 unknown_114[0x21];  // (not used here)
    u8 byte_135;
    u8 unknown_136[0x1e];  // (not used here)
    float float_154;
};
GUEST_OFFSET(Object_001a1abc_0, word_4, 0x4);
GUEST_OFFSET(Object_001a1abc_0, word_8, 0x8);
GUEST_OFFSET(Object_001a1abc_0, word_c, 0xc);
GUEST_OFFSET(Object_001a1abc_0, word_10, 0x10);
GUEST_OFFSET(Object_001a1abc_0, word_14, 0x14);
GUEST_OFFSET(Object_001a1abc_0, word_18, 0x18);
GUEST_OFFSET(Object_001a1abc_0, half_1c, 0x1c);
GUEST_OFFSET(Object_001a1abc_0, half_1e, 0x1e);
GUEST_OFFSET(Object_001a1abc_0, word_20, 0x20);
GUEST_OFFSET(Object_001a1abc_0, word_f4, 0xf4);
GUEST_OFFSET(Object_001a1abc_0, word_f8, 0xf8);
GUEST_OFFSET(Object_001a1abc_0, word_fc, 0xfc);
GUEST_OFFSET(Object_001a1abc_0, word_100, 0x100);
GUEST_OFFSET(Object_001a1abc_0, word_104, 0x104);
GUEST_OFFSET(Object_001a1abc_0, word_108, 0x108);
GUEST_OFFSET(Object_001a1abc_0, half_10c, 0x10c);
GUEST_OFFSET(Object_001a1abc_0, half_10e, 0x10e);
GUEST_OFFSET(Object_001a1abc_0, word_110, 0x110);
GUEST_OFFSET(Object_001a1abc_0, byte_135, 0x135);
GUEST_OFFSET(Object_001a1abc_0, float_154, 0x154);

inline constexpr guest::Function<0x001a2c48, u32(u32, u32)> CameraCtl__set_target_2;

u32 CameraCtl__set_target(gptr<Object_001a1abc_0> arg0, u32 r1, u32 r2, float S0) {
    u32 r0_1 = CameraCtl__set_target_2(arg0.addr(), r1);
    u32 r1_1 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    if (r2 + 1u != 0) {
        arg0->byte_135 = u8(r2);
        S0_1 = 0.0f;
        r0_1 = arg0.addr() + 0xf4u;  // (from the original)
        arg0->float_154 = S0_1;
        arg0->word_f4 = arg0->word_4;
        arg0->word_f8 = arg0->word_8;
        arg0->word_fc = arg0->word_c;
        arg0->word_100 = arg0->word_10;
        arg0->word_104 = arg0->word_14;
        arg0->word_108 = arg0->word_18;
        arg0->half_10c = arg0->half_1c;
        arg0->half_10e = arg0->half_1e;
        r1_1 = arg0->word_20;
        arg0->word_110 = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_001a1abc
GUEST_EXPORT_FRAMED(0x001a1abc, d_001a1abc::CameraCtl__set_target, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001a2068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In flagged scenes, updates the camera's room view from its target, angle and distances.
namespace d_001a2068 {

struct __attribute__((packed)) CameraCtl {
    u8 unknown_0[0x1e];  // (not used here)
    u16 half_1e;
    u8 unknown_20[0xc];  // (not used here)
    float float_2c;
    u32 word_30;
    u8 unknown_34[0x4];  // (not used here)
    u32 word_38;
    u8 unknown_3c[0x12c];  // (not used here)
    float float_168;
    u8 unknown_16c[0x3c];  // (not used here)
    u8 byte_1a8;
    u8 byte_1a9;
};
GUEST_OFFSET(CameraCtl, half_1e, 0x1e);
GUEST_OFFSET(CameraCtl, float_2c, 0x2c);
GUEST_OFFSET(CameraCtl, word_30, 0x30);
GUEST_OFFSET(CameraCtl, word_38, 0x38);
GUEST_OFFSET(CameraCtl, float_168, 0x168);
GUEST_OFFSET(CameraCtl, byte_1a8, 0x1a8);
GUEST_OFFSET(CameraCtl, byte_1a9, 0x1a9);

struct __attribute__((packed)) Local_001a2068_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001a2068_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001a2068_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001a2068_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001a2068_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_001a2068_ea_4, word_4, 0x4);

inline constexpr guest::Function<0x001a1430, u32(u32, u32, u32, u32)> CameraPath__evaluate;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;

struct __attribute__((packed)) Frame_001a2068 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001a2068, word_0, 0x0);
GUEST_OFFSET(Frame_001a2068, word_4, 0x4);
GUEST_SIZE(Frame_001a2068, 0x1c);

void CameraCtl__update_room_view(gptr<CameraCtl> camera_ctl, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_001a2068> frame;  // the original's stack frame
    u32 scene = current_scene_id(camera_ctl.addr(), r1, r2, r3);
    u32 scene_flagged = scene_has_flags(8u, scene);
    if (scene_flagged == 0) {
        return;
    }
    u32 r1_2 = camera_ctl->word_38;
    gptr<Local_001a2068_ea_1> ea_1 = gptr<Local_001a2068_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = camera_ctl->word_30;
    ea_1->word_4 = r1_2;
    u32 r2_2 = s16(camera_ctl->half_1e);
    u32 r0_3 = camera_ctl->byte_1a9;
    frame->word_4 = u32(camera_ctl->byte_1a8);
    frame->word_0 = camera_ctl.addr() + 0xd8u;  // (from the original)
    gptr<Local_001a2068_ea_4> ea_4 = gptr<Local_001a2068_ea_4>(frame.at(8).addr());
    ea_4->word_0 = r0_3;
    ea_4->word_4 = r2_2;
    float S1_3 = camera_ctl->float_2c;
    float S0_3 = camera_ctl->float_168;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    CameraPath__evaluate(camera_ctl.addr() + 0x50u, r1, frame.at(0x10).addr(), camera_ctl.addr() + 0xe0u);  // (from the original)
}

}  // namespace d_001a2068
GUEST_EXPORT_FRAMED(0x001a2068, d_001a2068::CameraCtl__update_room_view, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001a25dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the camera's target toward the player's position by the scene's rules.
namespace d_001a25dc {

struct __attribute__((packed)) CameraCtl {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
    u32 word_118;
    u32 word_11c;
    u8 unknown_120[0x93];  // (not used here)
    u8 byte_1b3;
    u8 unknown_1b4[0x4];  // (not used here)
    u8 byte_1b8;
};
GUEST_OFFSET(CameraCtl, word_114, 0x114);
GUEST_OFFSET(CameraCtl, word_118, 0x118);
GUEST_OFFSET(CameraCtl, word_11c, 0x11c);
GUEST_OFFSET(CameraCtl, byte_1b3, 0x1b3);
GUEST_OFFSET(CameraCtl, byte_1b8, 0x1b8);

struct __attribute__((packed)) Local_001a25dc_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_001a25dc_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_001a25dc_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_001a25dc_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_001a25dc_r0_2 {
    u32 word_0;
    float float_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001a25dc_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_001a25dc_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_001a25dc_r0_2, word_8, 0x8);

struct __attribute__((packed)) Local_001a25dc_r5_1 {
    u8 unknown_0[0x36];  // (not used here)
    u8 byte_36;
    u8 unknown_37[0x73];  // (not used here)
    u16 half_aa;
    u16 half_ac;
};
GUEST_OFFSET(Local_001a25dc_r5_1, byte_36, 0x36);
GUEST_OFFSET(Local_001a25dc_r5_1, half_aa, 0xaa);
GUEST_OFFSET(Local_001a25dc_r5_1, half_ac, 0xac);

inline constexpr guest::Function<0x001a1abc, u32(u32, u32, u32)> CameraCtl__set_target;
inline constexpr guest::Function<0x001a2ce0, u32(u32, u32, u32, u32)> CameraCtl__clamp_target;
inline constexpr guest::Function<0x001a3abc, u32(u32, u32, u32, u32)> CameraCtl__compute_position;
inline constexpr guest::Function<0x001a3f90, u32(u32, u32)> Scene__player_spawn;
inline constexpr guest::Function<0x001a4904, u32(u32, u32, u32, u32)> midpoint_of_offset;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x005c2768, u32(u32, u32, u32, u32)> player_position_copy;

struct __attribute__((packed)) Frame_001a25dc {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    float float_14;
    u32 word_18;
    u8 unknown_1c[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001a25dc, word_0, 0x0);
GUEST_OFFSET(Frame_001a25dc, word_4, 0x4);
GUEST_OFFSET(Frame_001a25dc, word_8, 0x8);
GUEST_OFFSET(Frame_001a25dc, word_c, 0xc);
GUEST_OFFSET(Frame_001a25dc, word_10, 0x10);
GUEST_OFFSET(Frame_001a25dc, float_14, 0x14);
GUEST_OFFSET(Frame_001a25dc, word_18, 0x18);
GUEST_SIZE(Frame_001a25dc, 0x38);

u32 CameraCtl__follow_player(gptr<CameraCtl> camera_ctl, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001a25dc> frame;  // the original's stack frame
    u32 r0 = camera_ctl.addr();
    u32 r0_4 = 0;
    float S0_1 = std::bit_cast<float>(camera_ctl->word_114);
    float S1_1 = std::bit_cast<float>(camera_ctl->word_118);
    float S2_1 = std::bit_cast<float>(camera_ctl->word_11c);
    gptr<Local_001a25dc_r0_1> r0_1 = gptr<Local_001a25dc_r0_1>(frame.at(0x10).addr());  // (from the original)
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S1_1;
    r0_1->float_8 = S2_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    gptr<Local_001a25dc_r0_2> r0_2 = gptr<Local_001a25dc_r0_2>(player_position_copy(r0_1.addr(), r1, r2, r3));
    u32 r1_1 = guest::cpu()->r[1];
    float S0_2 = guest::cpu()->s[0];
    float S1_2 = guest::cpu()->s[1];
    if (r0_2.addr() != 0) {
        r1_1 = r0_2->word_0;
        S1_2 = 32.0f;
        frame->word_10 = r1_1;
        float S0_3 = r0_2->float_4;
        frame->float_14 = S0_3;
        S0_2 = S0_3 + S1_2;
        r0_2 = gptr<Local_001a25dc_r0_2>(r0_2->word_8);
        frame->word_18 = r0_2.addr();
        frame->float_14 = S0_2;
    }
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    u32 scene = current_scene_id(r0_2.addr(), r1_1);
    gptr<Local_001a25dc_r5_1> r5_1 = gptr<Local_001a25dc_r5_1>(r0 + 0x100u);  // (from the original)
    if (scene == 0x32u) {  // (from the original)
        if (camera_ctl->byte_1b3 == 2u) {
            r5_1->half_ac = 0x1555;  // (from the original)
            goto L_1a264c;
        }
        r0_4 = Scene__player_spawn(r0, frame.at(0x10).addr());  // (from the original)
        u32 r1_3 = s16(r5_1->half_aa);
        r5_1->half_ac = u16(r0_4);
        if (0x1555u != r1_3 && s32(0x1555u) >= s32(r1_3)) {  // (from the original)
            r0_4 = 0x18e4u;  // (from the original)
        }
        if (s32(0x1555u) <= s32(r1_3)) {  // (from the original)
            goto L_1a264c;
        }
    } else {
        r0_4 = Scene__player_spawn(r0, frame.at(0x10).addr());  // (from the original)
    }
    r5_1->half_ac = u16(r0_4);
L_1a264c:;
    midpoint_of_offset(frame.at(4).addr(), r0, frame.at(0x10).addr(), r0 + 0xa8u);  // (from the original)
    camera_ctl->word_114 = frame->word_4;
    camera_ctl->word_118 = frame->word_8;
    camera_ctl->word_11c = frame->word_c;
    frame->word_0 = 0;
    u32 r0_6 = CameraCtl__clamp_target(r0, frame.at(0x10).addr(), frame.at(0x20).addr(), r0 + 0x114u);  // (from the original)
    u32 scene_2 = current_scene_id(r0_6, guest::cpu()->r[1]);
    u32 scene_flagged = scene_has_flags(8u, scene_2);
    if (scene_flagged != 0) {
        u32 scene_3 = current_scene_id(scene_flagged, guest::cpu()->r[1]);
        u32 scene_flagged_2 = scene_has_flags(0x100u, scene_3);  // (from the original)
        if (scene_flagged_2 == 0) {
            frame->word_0 = frame.at(0x10).addr();  // (from the original)
            CameraCtl__compute_position(r0, frame.at(0x20).addr(), r0 + 0x114u, frame.at(4).addr());  // (from the original)
        }
    }
    u32 r2_10 = s8(r5_1->byte_36);
    u32 r0_11 = CameraCtl__set_target(r0, frame.at(0x20).addr(), r2_10);  // (from the original)
    camera_ctl->byte_1b8 = 0;
    return r0_11;
}

}  // namespace d_001a25dc
GUEST_EXPORT_FRAMED(0x001a25dc, d_001a25dc::CameraCtl__follow_player, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001a32c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps the camera's x inside the room's bounds (+0x158 to +0x15c, with the margin), centering it when the room is
// narrow.
namespace d_001a32c8 {

struct __attribute__((packed)) CameraCtl {
    u8 unknown_0[0x158];  // (not used here)
    float float_158;
    float float_15c;
};
GUEST_OFFSET(CameraCtl, float_158, 0x158);
GUEST_OFFSET(CameraCtl, float_15c, 0x15c);

struct __attribute__((packed)) Object_001a32c8_1 {
    float float_0;
};
GUEST_OFFSET(Object_001a32c8_1, float_0, 0x0);

inline guest::global<u32, 0x0095089c> global_0095089c;

void CameraCtl__clamp_x(gptr<CameraCtl> camera_ctl, gptr<Object_001a32c8_1> arg1) {
    float S1_1 = camera_ctl->float_15c;
    float S0_1 = 0.0f;
    if (!(S1_1 > S0_1)) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    float S2_1 = camera_ctl->float_158;
    float S3_1 = std::bit_cast<float>(*global_0095089c);
    if (S1_1 - S2_1 <= S3_1 * 2.0f) {
        float S1_2 = S2_1 + S1_1;
        float S0_2 = S1_2 * 0.5f;
        arg1->float_0 = S0_2;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    float S2_2 = S2_1 + S3_1;
    float S0_3 = arg1->float_0;
    if (S2_2 > S0_3) {
        arg1->float_0 = S2_2;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    float S1_3 = S1_1 - S3_1;
    if (S0_3 > S1_3) {
        S0_3 = S1_3;
    }
    arg1->float_0 = S0_3;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
}

}  // namespace d_001a32c8
GUEST_EXPORT(0x001a32c8, d_001a32c8::CameraCtl__clamp_x);

// f_001a360c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests the camera controller's mode `kind` aimed at the position, with its parameter.
namespace d_001a360c {

struct __attribute__((packed)) CameraCtl {
    u8 unknown_0[0xc0];  // (not used here)
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u8 unknown_cc[0x26];  // (not used here)
    u8 byte_f2;
    u8 byte_f3;
    u8 unknown_f4[0x20];  // (not used here)
    u32 word_114;
    u32 word_118;
    u32 word_11c;
    u8 unknown_120[0x14];  // (not used here)
    u8 byte_134;
    u8 unknown_135[0x1];  // (not used here)
    u8 byte_136;
    u8 unknown_137[0x82];  // (not used here)
    u8 byte_1b9;
    u8 unknown_1ba[0x1];  // (not used here)
    u8 byte_1bb;
    u8 byte_1bc;
};
GUEST_OFFSET(CameraCtl, word_c0, 0xc0);
GUEST_OFFSET(CameraCtl, word_c4, 0xc4);
GUEST_OFFSET(CameraCtl, word_c8, 0xc8);
GUEST_OFFSET(CameraCtl, byte_f2, 0xf2);
GUEST_OFFSET(CameraCtl, byte_f3, 0xf3);
GUEST_OFFSET(CameraCtl, word_114, 0x114);
GUEST_OFFSET(CameraCtl, word_118, 0x118);
GUEST_OFFSET(CameraCtl, word_11c, 0x11c);
GUEST_OFFSET(CameraCtl, byte_134, 0x134);
GUEST_OFFSET(CameraCtl, byte_136, 0x136);
GUEST_OFFSET(CameraCtl, byte_1b9, 0x1b9);
GUEST_OFFSET(CameraCtl, byte_1bb, 0x1bb);
GUEST_OFFSET(CameraCtl, byte_1bc, 0x1bc);

struct __attribute__((packed)) Object_001a360c_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001a360c_1, word_0, 0x0);
GUEST_OFFSET(Object_001a360c_1, word_4, 0x4);
GUEST_OFFSET(Object_001a360c_1, word_8, 0x8);

inline constexpr guest::Function<0x001a1abc, u32(u32, u32, u32)> CameraCtl__set_target;
inline constexpr guest::Function<0x006e225c, u32(u32)> entry_20;

u32 CameraCtl__request_at(gptr<CameraCtl> camera_ctl, gptr<Object_001a360c_1> arg1, u32 r2, u32 r3) {
    u32 r0 = camera_ctl.addr();
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);  // (from the original)
    camera_ctl->byte_1bb = 0;
    camera_ctl->word_c0 = arg1->word_0;
    camera_ctl->word_c4 = arg1->word_4;
    camera_ctl->word_c8 = arg1->word_8;
    camera_ctl->byte_134 = u8(r2);
    camera_ctl->byte_1b9 = u8(r4_1);
    u32 r1_1 = camera_ctl->byte_f2;
    camera_ctl->byte_136 = u8(r3);
    if (r1_1 != 0x16u) {  // (from the original)
        r1_1 = 0x16u;  // (from the original)
        camera_ctl->byte_f3 = u8(r1_1);
    } else {
        u32 r4_2 = r0;
        u32 r5_1 = r0 + 0x100u;  // (from the original)
        r0 = camera_ctl->byte_1bb;
        if (r0 == 0) {
            if (r2 == 0x1bu || r2 == 0x4du) {  // (from the original)
                camera_ctl->byte_1bc = 1;
            }
            u32 r0_1 = camera_ctl->byte_134;
            u32 r0_2 = entry_20(r0_1);
            u32 r2_1 = s8(camera_ctl->byte_136);
            r0 = CameraCtl__set_target(r4_2, r0_2, r2_1);
            camera_ctl->word_114 = camera_ctl->word_c0;
            camera_ctl->word_118 = camera_ctl->word_c4;
            r1_1 = camera_ctl->word_c8;
            camera_ctl->word_11c = r1_1;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_001a360c
GUEST_EXPORT_FRAMED(0x001a360c, d_001a360c::CameraCtl__request_at, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001a40e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The distance from the player's head (32 above) to the point (rotated by the room's angle, the height weighted 1.5);
// 321 without a player.
namespace d_001a40e8 {

struct __attribute__((packed)) CameraCtl {
    u8 unknown_0[0x1a8];  // (not used here)
    u8 byte_1a8;
};
GUEST_OFFSET(CameraCtl, byte_1a8, 0x1a8);

struct __attribute__((packed)) Local_001a40e8_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_001a40e8_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_001a40e8_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_001a40e8_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_001a40e8_r0_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_001a40e8_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_001a40e8_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_001a40e8_r0_2, float_8, 0x8);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0056a224, u32(u32, u32)> rotate_xz;
inline constexpr guest::Function<0x005c2768, u32(u32, u32, u32, u32)> player_position_copy;

struct __attribute__((packed)) Frame_001a40e8 {
    u8 unknown_0[0x4];  // (not read or written by name)
    float float_4;
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001a40e8, float_4, 0x4);
GUEST_OFFSET(Frame_001a40e8, float_8, 0x8);
GUEST_OFFSET(Frame_001a40e8, float_c, 0xc);
GUEST_SIZE(Frame_001a40e8, 0x14);

u32 CameraCtl__distance_to_player(gptr<CameraCtl> camera_ctl, gptr<Float3> arg1, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrameOf<Frame_001a40e8> frame;  // the original's stack frame
    gptr<Local_001a40e8_r0_1> r0_1 = gptr<Local_001a40e8_r0_1>(player_position_copy(camera_ctl.addr(), arg1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]));
    if (r0_1.addr() == 0) {
        float S0_1 = 321.0f;
        guest::cpu()->s[0] = S0_1;
        return r0_1.addr();
    }
    float S0_2 = r0_1->float_8;
    float S3_1 = r0_1->float_0;
    float S1_2 = r0_1->float_4 + 32.0f;
    float S4_1 = arg1->v[0];
    float S5_1 = arg1->v[1];
    gptr<Local_001a40e8_r0_2> r0_2 = gptr<Local_001a40e8_r0_2>(frame.at(4).addr());
    float S2_1 = arg1->v[2] - S0_2;
    float S0_3 = S4_1 - S3_1;
    float S1_3 = S5_1 - S1_2;
    r0_2->float_0 = S0_3;
    r0_2->float_4 = S1_3;
    r0_2->float_8 = S2_1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    u32 scene = current_scene_id(r0_2.addr());
    u32 scene_flagged = scene_has_flags(8u, scene);
    if (scene_flagged != 0) {
        float S0_5 = std::bit_cast<float>(vcvt_sz_f(float(u32(camera_ctl->byte_1a8)) * 30.0f * 182.04445f));
        *frame.at<u16>(0) = u16(0u - std::bit_cast<u32>(S0_5));
        u32 r1_3 = *frame.at<u32>(0);
        guest::cpu()->s[0] = S0_5;
        scene_flagged = rotate_xz(frame.at(4).addr(), r1_3);
    }
    float S2_3 = frame->float_8;
    float S0_6 = frame->float_c * 1.5f;
    float S1_5 = frame->float_4;
    float S1_6 = S1_5 * S1_5 + S2_3 * S2_3 + S0_6 * S0_6;
    float S0_7 = sqrtf(S1_6);
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_6;
    return scene_flagged;
}

}  // namespace d_001a40e8
GUEST_EXPORT_FRAMED(0x001a40e8, d_001a40e8::CameraCtl__distance_to_player, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001a4904: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Half of the position plus the offset (the midpoint).
namespace d_001a4904 {

struct __attribute__((packed)) Object_001a4904_0 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_001a4904_0, float_0, 0x0);
GUEST_OFFSET(Object_001a4904_0, float_4, 0x4);
GUEST_OFFSET(Object_001a4904_0, float_8, 0x8);

struct __attribute__((packed)) Object_001a4904_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_001a4904_3, float_0, 0x0);
GUEST_OFFSET(Object_001a4904_3, float_4, 0x4);
GUEST_OFFSET(Object_001a4904_3, float_8, 0x8);

struct __attribute__((packed)) Local_001a4904_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_001a4904_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_001a4904_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_001a4904_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_001a4904_r1_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001a4904_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_001a4904_r1_1, float_4, 0x4);


struct __attribute__((packed)) Frame_001a4904 {
    float float_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001a4904, float_0, 0x0);
GUEST_SIZE(Frame_001a4904, 0x10);

void midpoint_of_offset(gptr<Object_001a4904_0> arg0, u32 r1_unused, gptr<Float3> arg2, gptr<Object_001a4904_3> arg3) {
    guest::StackFrameOf<Frame_001a4904> frame;  // the original's stack frame
    float S1_1 = arg2->v[1] + arg3->float_4;
    float S2_1 = arg2->v[2] + arg3->float_8;
    gptr<Local_001a4904_r0_1> r0_1 = gptr<Local_001a4904_r0_1>(frame.at(0).addr());
    r0_1->float_0 = arg2->v[0] + arg3->float_0;
    r0_1->float_4 = S1_1;
    r0_1->float_8 = S2_1;
    gptr<Local_001a4904_r1_1> r1_1 = gptr<Local_001a4904_r1_1>(frame.at(4).addr());
    float S0_1 = 0.5f;
    float S1_2 = r1_1->float_0 * S0_1;
    float S2_2 = r1_1->float_4 * S0_1;
    float S0_2 = frame->float_0 * S0_1;
    arg0->float_0 = S0_2;
    arg0->float_4 = S1_2;
    arg0->float_8 = S2_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_001a4904
GUEST_EXPORT_FRAMED(0x001a4904, d_001a4904::midpoint_of_offset, 0x4010);  // pushes {r4, lr} first, as the original

// f_001a4e7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps the camera's x and z inside the room's bounds (with their margins), centering them when the room is too small.
namespace d_001a4e7c {

struct __attribute__((packed)) CameraCtl {
    u8 unknown_0[0x158];  // (not used here)
    float float_158;
    float float_15c;
    float float_160;
    float float_164;
};
GUEST_OFFSET(CameraCtl, float_158, 0x158);
GUEST_OFFSET(CameraCtl, float_15c, 0x15c);
GUEST_OFFSET(CameraCtl, float_160, 0x160);
GUEST_OFFSET(CameraCtl, float_164, 0x164);

struct __attribute__((packed)) Object_001a4e7c_1 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_001a4e7c_1, float_0, 0x0);
GUEST_OFFSET(Object_001a4e7c_1, float_8, 0x8);

inline guest::global<u32, 0x009508a8> global_009508a8;
inline guest::global<u32, 0x009508ac> global_009508ac;
inline guest::global<u32, 0x009508b0> global_009508b0;

void CameraCtl__clamp_xz(gptr<CameraCtl> camera_ctl, gptr<Object_001a4e7c_1> arg1, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = camera_ctl->float_15c;
    float S5_1 = 0.0f;
    float S4_1 = 0.5f;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S5_1);  // (from the original)
    if (S1_1 > S5_1) {
        float S2_1 = camera_ctl->float_158;
        float S3_1 = std::bit_cast<float>(*global_009508a8);
        fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S1_1 - S2_1, S3_1 * 2.0f);  // (from the original)
        if (S1_1 - S2_1 <= S3_1 * 2.0f) {
            S0 = (S2_1 + S1_1) * S4_1;
            arg1->float_0 = S0;
        } else {
            float S2_2 = S2_1 + S3_1;
            S0 = arg1->float_0;
            fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_2, S0);  // (from the original)
            if (S2_2 > S0) {
                arg1->float_0 = S2_2;
            } else {
                float S1_2 = S1_1 - S3_1;
                fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S1_2);  // (from the original)
                if (S0 > S1_2) {
                    S0 = S1_2;
                }
                arg1->float_0 = S0;
            }
        }
    }
    float S1_3 = camera_ctl->float_164;
    if (!(S1_3 > S5_1)) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    float S2_3 = camera_ctl->float_160;
    float S3_2 = std::bit_cast<float>(*global_009508ac);
    float S5_2 = std::bit_cast<float>(*global_009508b0);
    if (S1_3 - S2_3 <= S3_2 + S5_2) {
        float S0_1 = (S2_3 + S1_3) * S4_1;
        arg1->float_8 = S0_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    float S2_4 = S2_3 + S5_2;
    float S0_2 = arg1->float_8;
    if (S2_4 > S0_2) {
        arg1->float_8 = S2_4;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    float S1_4 = S1_3 - S3_2;
    if (S0_2 > S1_4) {
        S0_2 = S1_4;
    }
    arg1->float_8 = S0_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_4;
}

}  // namespace d_001a4e7c
GUEST_EXPORT(0x001a4e7c, d_001a4e7c::CameraCtl__clamp_xz);

// f_001a5e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps the camera's x (margin 160) and z inside the room's bounds, centering them when the room is too small.
namespace d_001a5e64 {

struct __attribute__((packed)) CameraCtl {
    u8 unknown_0[0x158];  // (not used here)
    float float_158;
    float float_15c;
    float float_160;
    float float_164;
};
GUEST_OFFSET(CameraCtl, float_158, 0x158);
GUEST_OFFSET(CameraCtl, float_15c, 0x15c);
GUEST_OFFSET(CameraCtl, float_160, 0x160);
GUEST_OFFSET(CameraCtl, float_164, 0x164);

struct __attribute__((packed)) Object_001a5e64_1 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_001a5e64_1, float_0, 0x0);
GUEST_OFFSET(Object_001a5e64_1, float_8, 0x8);

inline guest::global<u32, 0x009508a0> global_009508a0;
inline guest::global<u32, 0x009508a4> global_009508a4;

void CameraCtl__clamp_xz_wide(gptr<CameraCtl> camera_ctl, gptr<Object_001a5e64_1> arg1, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = camera_ctl->float_15c;
    float S5_1 = 0.0f;
    float S3_1 = 0.5f;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S5_1);  // (from the original)
    if (S1_1 > S5_1) {
        float S2_1 = camera_ctl->float_158;
        if (s32(std::bit_cast<u32>(S1_1 - S2_1)) <= s32(0x43a00000u)) {  // (from the original)
            S0 = (S2_1 + S1_1) * S3_1;
            arg1->float_0 = S0;
        } else {
            float S4_1 = 160.0f;
            S0 = arg1->float_0;
            float S2_2 = S2_1 + S4_1;
            fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S2_2);  // (from the original)
            if (!(S0 < S2_2)) {
                float S1_2 = S1_1 - S4_1;
                fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S1_2);  // (from the original)
                if (S0 > S1_2) {
                    S0 = S1_2;
                }
                arg1->float_0 = S0;
            } else {
                arg1->float_0 = S2_2;
            }
        }
    }
    float S1_3 = camera_ctl->float_164;
    if (!(S1_3 > S5_1)) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    float S2_3 = camera_ctl->float_160;
    float S4_2 = std::bit_cast<float>(*global_009508a0);
    float S5_2 = std::bit_cast<float>(*global_009508a4);
    if (S1_3 - S2_3 <= S4_2 + S5_2) {
        float S0_1 = (S2_3 + S1_3) * S3_1;
        arg1->float_8 = S0_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    float S2_4 = S2_3 + S5_2;
    float S0_2 = arg1->float_8;
    if (S2_4 > S0_2) {
        arg1->float_8 = S2_4;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    float S1_4 = S1_3 - S4_2;
    if (S0_2 > S1_4) {
        S0_2 = S1_4;
    }
    arg1->float_8 = S0_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_4;
}

}  // namespace d_001a5e64
GUEST_EXPORT(0x001a5e64, d_001a5e64::CameraCtl__clamp_xz_wide);

// f_001a616c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the camera's tilt (+0x1ac) from the turn angle: none past 15 degrees, else a small tilt to the side of the
// turn.
namespace d_001a616c {

struct __attribute__((packed)) CameraCtl {
    u8 unknown_0[0x1aa];  // (not used here)
    u16 half_1aa;
    u16 half_1ac;
};
GUEST_OFFSET(CameraCtl, half_1aa, 0x1aa);
GUEST_OFFSET(CameraCtl, half_1ac, 0x1ac);

struct __attribute__((packed)) Local_001a616c_r1_1 {
    u8 unknown_0[0xac];  // (not used here)
    u16 half_ac;
};
GUEST_OFFSET(Local_001a616c_r1_1, half_ac, 0xac);


void CameraCtl__update_tilt(gptr<CameraCtl> camera_ctl) {
    gptr<Local_001a616c_r1_1> r1_1 = gptr<Local_001a616c_r1_1>(camera_ctl.addr() + 0x100u);  // (from the original)
    u32 r0_1 = s16(camera_ctl->half_1aa);
    if (s32(r0_1) < 0) {
        r0_1 = 0u - r0_1;
    }
    if (s32(0xaaau) <= s32(r0_1)) {  // (from the original)
        r1_1->half_ac = 0;
        return;
    }
    u32 r0_2 = 0x1555u;  // (from the original)
    if (s16(camera_ctl->half_1ac) >= 0) {
        r0_2 = u32(s32(r0_2) >> 0xd) - r0_2;  // (from the original)
    }
    r1_1->half_ac = u16(r0_2);
}

}  // namespace d_001a616c
GUEST_EXPORT(0x001a616c, d_001a616c::CameraCtl__update_tilt);

// f_001a63e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random view around the object for the camera.
namespace d_001a63e8 {

struct __attribute__((packed)) CameraCtl {
    u8 unknown_0[0x3e];  // (not used here)
    u16 half_3e;
};
GUEST_OFFSET(CameraCtl, half_3e, 0x3e);

struct __attribute__((packed)) Local_001a63e8_r0_8 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_001a63e8_r0_8, float_0, 0x0);
GUEST_OFFSET(Local_001a63e8_r0_8, float_4, 0x4);
GUEST_OFFSET(Local_001a63e8_r0_8, float_8, 0x8);

struct __attribute__((packed)) Local_001a63e8_r1_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_001a63e8_r1_3, float_0, 0x0);
GUEST_OFFSET(Local_001a63e8_r1_3, float_4, 0x4);
GUEST_OFFSET(Local_001a63e8_r1_3, float_8, 0x8);

inline constexpr u32 global_00950aa4_address = 0x00950aa4u;
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32)> cell_position_of_id;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;

struct __attribute__((packed)) Frame_001a63e8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_001a63e8, word_0, 0x0);
GUEST_OFFSET(Frame_001a63e8, word_4, 0x4);
GUEST_OFFSET(Frame_001a63e8, word_8, 0x8);
GUEST_SIZE(Frame_001a63e8, 0xc);

u32 CameraCtl__pick_random_view(gptr<CameraCtl> camera_ctl, u32 r1, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_001a63e8> frame;  // the original's stack frame
    u32 r0 = camera_ctl.addr();
    u32 r6 = r0;
    u32 r5 = r0 + 0x3cu;  // (from the original)
    u32 r8 = r1;
    u32 r7 = 0u;
    u32 random_2 = random_below(0x18u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r9 = global_00950aa4_address;
    u32 r0_2 = sxth(random_2);
    camera_ctl->half_3e = u16(r0_2);
    u32 r1_1 = *gptr<u8>(r9 + (r0_2 << 4));
    u32 cell_position_3 = cell_position_of_id(frame.at(0).addr(), r1_1);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (cell_position_3 == 0) {
        u32 r4 = 0u;
        do {
            u32 r0_5 = sxth(r4);
            *gptr<u16>(r5 + 2u) = u16(r0_5);
            u32 r1_2 = *gptr<u8>(r9 + (r0_5 << 4));
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            u32 cell_position_4 = cell_position_of_id(frame.at(0).addr(), r1_2);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            if (cell_position_4 != 0) {
                r7 = 1u;
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0x18);  // (from the original)
    } else {
        r7 = 1u;
    }
    if (r8 != 0) {
        if (r7 != 0) {
            *gptr<u32>(r6 + 4u) = frame->word_0;
            *gptr<u32>(r6 + 8u) = frame->word_4;
            *gptr<u32>(r6 + 0xcu) = frame->word_8;  // (from the original)
            gptr<Local_001a63e8_r1_3> r1_3 = gptr<Local_001a63e8_r1_3>(r9 + (u32(*gptr<s16>(r5 + 2u)) << 4) + 4u);
            *gptr<u32>(r6 + 4u) = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r6 + 4u)) + r1_3->float_0);
            *gptr<u32>(r6 + 8u) = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r6 + 8u)) + r1_3->float_4);
            S1 = r1_3->float_8;
            S0 = std::bit_cast<float>(*gptr<u32>(r6 + 0xcu)) + S1;  // (from the original)
            *gptr<u32>(r6 + 0xcu) = std::bit_cast<u32>(S0);  // (from the original)
        } else {
            S0 = 1700.0f;
            S1 = 144.0f;
            float S2_2 = 600.0f;
            gptr<Local_001a63e8_r0_8> r0_8 = gptr<Local_001a63e8_r0_8>(r6 + 4u);
            r0_8->float_0 = S0;
            r0_8->float_4 = S1;
            r0_8->float_8 = S2_2;
        }
    }
    *gptr<u8>(r6 + 0xf3u) = 0x14;  // (from the original)
    *gptr<u8>(r6 + 0x136u) = 0xff;  // (from the original)
    guest::cpu()->r[1] = 0x14u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0xffu;  // (from the original)
}

}  // namespace d_001a63e8
GUEST_EXPORT_FRAMED(0x001a63e8, d_001a63e8::CameraCtl__pick_random_view, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_001a7760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the three bytes of cell (x, y) of the map.
namespace d_001a7760 {

struct __attribute__((packed)) ByteMap3 {
    u32 word_0;
};
GUEST_OFFSET(ByteMap3, word_0, 0x0);

struct __attribute__((packed)) Local_001a7760_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001a7760_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_001a7760_r3_1, word_4, 0x4);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> Buffer__read_bytes;

void ByteMap3__set(gptr<ByteMap3> byte_map3, u32 r1, u32 r2, u32 r3) {
    gptr<Local_001a7760_r3_1> r3_1 = gptr<Local_001a7760_r3_1>(guest::cpu()->r[13] + 0x18u);  // (from the original)
    u32 r5_1 = r3_1->word_0;
    u32 r6_1 = r3_1->word_4;
    u32 r0_1 = Buffer__read_bytes(byte_map3.addr(), r1, r2, r3_1.addr());
    u32 r0_2 = r0_1 * 3u;
    *gptr<u8>(byte_map3->word_0 + r0_2) = u8(r6_1);
    *gptr<u8>(byte_map3->word_0 + (r0_2 + 1u)) = u8(r5_1);
    *gptr<u8>(byte_map3->word_0 + (r0_2 + 2u)) = u8(r3);
}

}  // namespace d_001a7760
GUEST_EXPORT_FRAMED(0x001a7760, d_001a7760::ByteMap3__set, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001a77a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the real item: marks its number in the bit set (+0x40) and counts it by its class and kind.
namespace d_001a77a0 {

struct __attribute__((packed)) ItemCensus {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(ItemCensus, word_3c, 0x3c);

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> Item__is_item;
inline constexpr guest::Function<0x0030b654, u32(u32, u32)> item_has_valid_data;
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> Item__number;
inline constexpr guest::Function<0x0030f594, u32(u32, u32)> is_special_item;
inline constexpr guest::Function<0x0076880c, u32(u32, u32, u32, u32)> Item__furniture_entry;
inline constexpr guest::Function<0x007689a4, u32(u32)> item_class_kind;

void ItemCensus__add(gptr<ItemCensus> item_census, u32 r1, u32 r2, u32 r3) {
    u32 is_item_3 = Item__is_item(r1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (is_item_3 != 0) {
        u32 r0_2 = item_has_valid_data(r1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_3 = is_special_item(r1, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 == 0) {
                item_census->word_3c = item_census->word_3c + 1u;
                u32 is_item_4 = Item__is_item(r1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r1_2 = guest::cpu()->r[1];
                u32 r2_4 = guest::cpu()->r[2];
                u32 r3_4 = guest::cpu()->r[3];
                if (is_item_4 != 0) {
                    u32 number_2 = Item__number(r1, r1_2, r2_4, r3_4);
                    r3_4 = number_2 - 0x2000u & 7u;  // (from the original)
                    r2_4 = *gptr<u8>(item_census.addr() + 0x40u + (number_2 - 0x2000u >> 3));  // (from the original)
                    r1_2 = r2_4 | lsl_r(1u, r3_4 & 0xff);  // (from the original)
                    *gptr<u8>(item_census.addr() + 0x40u + (number_2 - 0x2000u >> 3)) = u8(r1_2);  // (from the original)
                }
                u32 r0_7 = Item__furniture_entry(r1, r1_2, r2_4, r3_4);
                u32 r0_8 = item_class_kind(r1);
                r1_1 = gptr<u32>(item_census.addr())[r0_7] + 1u;
                *gptr<u32>(item_census.addr() + (r0_7 << 2)) = r1_1;
                if (r0_7 != r0_8) {
                    r1_1 = gptr<u32>(item_census.addr())[r0_8] + 1u;
                    *gptr<u32>(item_census.addr() + (r0_8 << 2)) = r1_1;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001a77a0
GUEST_EXPORT_FRAMED(0x001a77a0, d_001a77a0::ItemCensus__add, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001a8ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// From an idle handler, sets the menu mode by the window's kind and restarts its state machine (first or second
// handler pair); otherwise marks it to resume (+0x185e).
namespace d_001a8ddc {

inline guest::global<u32, 0x00857a60> menu_idle_handler;
inline guest::global<u32, 0x00857a64> menu_idle_handler_adjust;
inline guest::global<u32, 0x00857a78> global_00857a78;
inline guest::global<u32, 0x00857a7c> global_00857a7c;
inline guest::global<u32, 0x00857a80> global_00857a80;
inline guest::global<u32, 0x00857a84> global_00857a84;
inline guest::global<u32, 0x00857a88> menu_resume_handler_b;
inline guest::global<u32, 0x00857a8c> menu_resume_handler_b_adjust;
inline guest::global<u8, 0x0094fd2b> menu_resume_flag;
inline constexpr guest::Function<0x008167fc, u32(u32, u32, u32)> dispatch_offset_0_first;

u32 MenuState__resume(gptr<CallbackTable> callback_table) {
    u32 r0 = callback_table.addr();
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 key1 = callback_table->key1;
    u32 r1_1 = *menu_idle_handler_adjust;
    if (key1 == *menu_idle_handler && (key1 == 0 && ((callback_table->key2 | r1_1) & 1u) == 0 || callback_table->key2 == r1_1)) {
        goto L_1a8e54;
    }
    r1_2 = *menu_resume_handler_b_adjust;
    if (key1 != *menu_resume_handler_b) {
        r0_3 = r0 + 0x185eu;  // (from the original)
        *gptr<u8>(r0_3) = 1;
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
    if ((key1 != 0 || ((callback_table->key2 | r1_2) & 1u) != 0) && callback_table->key2 != r1_2) {
        r0_3 = r0 + 0x185eu;  // (from the original)
        *gptr<u8>(r0_3) = 1;
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
L_1a8e54:;
    u32 r2_1 = *gptr<u8>(r0 + 0x1864u);  // (from the original)
    if (r2_1 == 0) {
        *menu_resume_flag = 1;
    } else if (r2_1 == 1u) {
        *menu_resume_flag = 0;
    }
    if (*gptr<u8>(r0 + 0x185du) != 0) {  // (from the original)
        u32 r0_1 = dispatch_offset_0_first(r0, *global_00857a80, *global_00857a84);
        return r0_1;
    }
    u32 r0_2 = dispatch_offset_0_first(r0, *global_00857a78, *global_00857a7c);
    return r0_2;
}

}  // namespace d_001a8ddc
GUEST_EXPORT_FRAMED(0x001a8ddc, d_001a8ddc::MenuState__resume, 0x4010);  // pushes {r4, lr} first, as the original

// f_001a9368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the record: its ids to -1, its words to 0, enabled.
namespace d_001a9368 {

struct __attribute__((packed)) Record1c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Record1c, word_0, 0x0);
GUEST_OFFSET(Record1c, word_4, 0x4);
GUEST_OFFSET(Record1c, word_8, 0x8);
GUEST_OFFSET(Record1c, word_c, 0xc);
GUEST_OFFSET(Record1c, word_10, 0x10);
GUEST_OFFSET(Record1c, word_14, 0x14);
GUEST_OFFSET(Record1c, byte_18, 0x18);


void Record1c__reset(gptr<Record1c> record1c) {
    u32 r1_1 = ~0u;
    record1c->word_0 = r1_1;
    record1c->word_4 = r1_1;
    record1c->word_8 = 0;
    record1c->word_10 = r1_1;
    record1c->word_c = 0;
    record1c->word_14 = r1_1;
    record1c->byte_18 = 1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001a9368
GUEST_EXPORT(0x001a9368, d_001a9368::Record1c__reset);

// f_001a998c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a998c {

struct __attribute__((packed)) Block {
    u32 vtable;
    u8 unknown_4[0xe0];  // (not used here)
    u32 control1_button_vtable;
};
GUEST_OFFSET(Block, vtable, 0x0);
GUEST_OFFSET(Block, control1_button_vtable, 0xe4);

struct __attribute__((packed)) Local_001a998c_r0_7 {
    u32 vtable;
    u8 unknown_4[0xe0];  // (not used here)
    u32 control2_button_vtable;
};
GUEST_OFFSET(Local_001a998c_r0_7, vtable, 0x0);
GUEST_OFFSET(Local_001a998c_r0_7, control2_button_vtable, 0xe4);

struct __attribute__((packed)) Local_001a998c_r4_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_001a998c_r4_1, word_0, 0x0);

struct __attribute__((packed)) Local_001a998c_r4_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_001a998c_r4_2, word_0, 0x0);

inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline guest::global<u32, 0x0094e4b8> popup_window;
inline guest::global<u8, 0x0098c56c> global_0098c56c;
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32)> construct_control_button_base;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00567d60, u32(u32, u32)> bind_resource_once;
inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> load_layout_archive;
inline constexpr guest::Function<0x00569d50, u32(u32)> layout_allocator_4;

u32 Control1Button__Control1Button_001a998c(u32 control1_button, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_2 = load_layout_archive(control1_button + 0x12c8u, 0x1a9ab0u, r2, r3);  // (from the original)
    if (r0_2 != 0) {
        bind_resource_once(control1_button + 0x1510u, *popup_window + 0x34u);  // (from the original)
        u32 r0_4 = *global_0098c56c;
        if (r0_4 != 0) {
            if (r0_4 == 1u) {
                gptr<Local_001a998c_r4_1> r4_1 = gptr<Local_001a998c_r4_1>(control1_button + 0x1850u);  // (from the original)
                u32 r0_5 = r4_1->word_0;
                if (r0_5 == 0) {
                    u32 r0_6 = layout_allocator_4(r0_5);
                    gptr<Local_001a998c_r0_7> block = gptr<Local_001a998c_r0_7>(allocate_on_heap(0xb48u, *gptr<u32>(r0_6 + 4u), 4u));  // (from the original)
                    construct_control_button_base(block.addr(), block.addr() + 0x118u, 2u);  // (from the original)
                    block->control2_button_vtable = vtable_Control2Button_at_e4;
                    block->vtable = vtable_Control2Button;
                    u32 r0_9 = for_each_element(block.addr() + 0x118u, 0x2e0994u, 0x518u, 2u);  // (from the original)
                    r4_1->word_0 = r0_9 - 0x118u;  // (from the original)
                }
            }
        } else {
            gptr<Local_001a998c_r4_2> r4_2 = gptr<Local_001a998c_r4_2>(control1_button + 0x184cu);  // (from the original)
            u32 r0_10 = r4_2->word_0;
            if (r0_10 == 0) {
                u32 r0_11 = layout_allocator_4(r0_10);
                u32 r1_5 = *gptr<u32>(r0_11 + 4u);
                gptr<Block> block_2 = gptr<Block>(allocate_on_heap(0x630u, r1_5, 4u));  // (from the original)
                construct_control_button_base(block_2.addr(), block_2.addr() + 0x118u, 1u);  // (from the original)
                block_2->vtable = vtable_Control1Button;
                block_2->control1_button_vtable = vtable_Control1Button_at_e4;
                u32 r0_14 = for_each_element(block_2.addr() + 0x118u, 0x2e0994u, 0x518u, 1u);  // (from the original)
                r4_2->word_0 = r0_14 - 0x118u;  // (from the original)
            }
        }
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_001a998c
GUEST_EXPORT_FRAMED(0x001a998c, d_001a998c::Control1Button__Control1Button_001a998c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001a9f44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a9f44 {

struct __attribute__((packed)) Local_001a9f44_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001a9f44_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_001a9f44_ea_8, word_4, 0x4);

inline constexpr u32 vtable_ComDialogA = 0x008eb138u;
inline guest::global<u32, 0x00857a90> global_00857a90;
inline guest::global<u32, 0x00857a94> global_00857a94;
inline guest::global<u32, 0x00857a98> global_00857a98;
inline guest::global<u32, 0x00857a9c> global_00857a9c;
inline constexpr guest::Function<0x001207d8, u32(u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32, u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x005d8ec8, u32(u32, u32, u32, u32)> script__WordFix_1536u___WordFix;

u32 ComDialogA__ComDialogA(gptr<ComDialogA> com_dialog_a) {
    com_dialog_a->word_4 = 0;
    com_dialog_a->byte_8 = 0;
    u32 r2_1 = *global_00857a9c;
    com_dialog_a->word_c = *global_00857a98;
    com_dialog_a->word_10 = r2_1;
    com_dialog_a->word_14 = 0;
    com_dialog_a->byte_18 = 0;
    com_dialog_a->word_1c = 0;
    com_dialog_a->vtable = vtable_ComDialogA;
    com_dialog_a->word_20 = 0;
    com_dialog_a->word_24 = 0;
    u32 r0_2 = script__WordFix_1536u___WordFix((com_dialog_a.addr() + 0x24u) + 4u, vtable_ComDialogA, r2_1, com_dialog_a.addr() + 0xcu);  // (from the original)
    u32 r0_4 = Layout__Layout(r0_2 + 0x1008u);  // (from the original)
    u32 r0_6 = Layout__Layout(r0_4 + 0x14cu);  // (from the original)
    u32 r0_8 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_6 + 0x14cu);  // (from the original)
    u32 r0_10 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_8 + 0x248u);  // (from the original)
    construct_layout_animation(r0_10 + 0x248u, guest::cpu()->r[1]);  // (from the original)
    construct_layout_animation(r0_10 + 0x270u, guest::cpu()->r[1]);  // (from the original)
    construct_layout_animation(r0_10 + 0x298u, guest::cpu()->r[1]);  // (from the original)
    *gptr<u32>(r0_10 + 0x2c0u) = 0;  // (from the original)
    construct_layout_animation(r0_10 + 0x2c4u, 0x17d0u);  // (from the original)
    construct_layout_animation(r0_10 + 0x2ecu, guest::cpu()->r[1]);  // (from the original)
    construct_layout_animation(r0_10 + 0x314u, guest::cpu()->r[1]);  // (from the original)
    u32 r14 = 0x184cu;  // (from the original)
    *gptr<u32>(r14 + (r0_10 - 0x1510u)) = 0;  // (from the original)
    r14 += (1u << 2);
    *gptr<u32>(r14 + (r0_10 - 0x1510u)) = 0;  // (from the original)
    r14 |= 1u << 2;
    *gptr<u32>(r14 + (r0_10 - 0x1510u)) = 0;  // (from the original)
    r14 += (1u << 2);
    u32 r7_1 = r14 | 1u << 2;
    *gptr<u32>(r14 + (r0_10 - 0x1510u)) = 0;  // (from the original)
    u32 r6_1 = r7_1 | 1u;
    *gptr<u8>(r7_1 + (r0_10 - 0x1510u)) = 0;  // (from the original)
    r14 = r6_1 + 1u;
    u32 r7_2 = r14 | 1u;
    *gptr<u8>(r6_1 + (r0_10 - 0x1510u)) = 0;  // (from the original)
    u32 r8_1 = r7_2 + 1u;
    *gptr<u8>(r14 + (r0_10 - 0x1510u)) = 0;  // (from the original)
    u32 r6_2 = r8_1 | 1u << 2;
    *gptr<u8>(r7_2 + (r0_10 - 0x1510u)) = 1;  // (from the original)
    *gptr<u32>(r8_1 + (r0_10 - 0x1510u)) = 0x10003c0;  // (from the original)
    *gptr<u8>(r6_2 + (r0_10 - 0x1510u)) = 3;  // (from the original)
    *gptr<u32>(r6_2 + (1u << 2) + (r0_10 - 0x1510u)) = ~0u;  // (from the original)
    u32 r2_11 = *global_00857a90;
    u32 r3_11 = *global_00857a94;
    gptr<Local_001a9f44_ea_8> ea_8 = gptr<Local_001a9f44_ea_8>(r0_10 + 0x35cu);  // (from the original)
    ea_8->word_0 = r2_11;
    ea_8->word_4 = r3_11;
    guest::cpu()->r[1] = r0_10 + 0x2f0u;  // (from the original)
    return r0_10 - 0x1510u;  // (from the original)
}

}  // namespace d_001a9f44
GUEST_EXPORT_FRAMED(0x001a9f44, d_001a9f44::ComDialogA__ComDialogA, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_001aa100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa100 {

inline constexpr u32 vtable_ComDialogA = 0x008eb138u;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005d5414, u32(u32)> script__WordFix_400u___WordFix;

u32 ComDialogA__destructor(gptr<ComDialogA> com_dialog_a) {
    com_dialog_a->vtable = vtable_ComDialogA;
    u32 r0_1 = com_dialog_a.addr() + 0x1824u;  // (from the original)
    destroy_animation(r0_1, vtable_ComDialogA, guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x7cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xa4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xccu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = ssys__ma__lyt__ArcResAccReader__destructor(r0_1 - 0x314u);  // (from the original)
    u32 r0_10 = ssys__ma__lyt__ArcResAccReader__destructor(r0_8 - 0x248u);  // (from the original)
    u32 r0_12 = Layout__destructor(r0_10 - 0x14cu);  // (from the original)
    u32 r0_14 = Layout__destructor(r0_12 - 0x14cu);  // (from the original)
    script__WordFix_400u___WordFix(r0_14 - 0x1008u);  // (from the original)
    return r0_14 - 0x1030u;  // (from the original)
}

}  // namespace d_001aa100
GUEST_EXPORT_FRAMED(0x001aa100, d_001aa100::ComDialogA__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_001aa440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa440 {

struct __attribute__((packed)) Object_001aa440_2 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_001aa440_2, byte_0, 0x0);
GUEST_OFFSET(Object_001aa440_2, byte_1, 0x1);
GUEST_OFFSET(Object_001aa440_2, byte_2, 0x2);
GUEST_OFFSET(Object_001aa440_2, byte_3, 0x3);

inline constexpr u32 vtable_FaderColor = 0x008eb14cu;
inline constexpr guest::Function<0x005664d8, u32(u32, u32, u32)> construct_fader_base;

u32 FaderColor__FaderColor(gptr<FaderColor> fader_color, u32 r1, gptr<Object_001aa440_2> arg2, u32 r3) {
    construct_fader_base(fader_color.addr(), r1, *gptr<u32>(guest::cpu()->r[13] + 0x10u));  // (from the original)
    fader_color->vtable = vtable_FaderColor;
    u32 r2_2 = arg2->byte_3;
    u32 r3_1 = arg2->byte_2;
    u32 r12_1 = arg2->byte_1;
    fader_color->byte_10 = arg2->byte_0;
    fader_color->byte_11 = u8(r12_1);
    fader_color->byte_12 = u8(r3_1);
    fader_color->byte_13 = u8(r2_2);
    fader_color->byte_14 = u8(r3);
    guest::cpu()->r[1] = fader_color.addr();
    return fader_color.addr();
}

}  // namespace d_001aa440
GUEST_EXPORT_FRAMED(0x001aa440, d_001aa440::FaderColor__FaderColor, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001aa4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the friend list and reads the friend key of the entry (under the lock); zero when not found.
namespace d_001aa4a0 {

struct __attribute__((packed)) Object_001aa4a0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_001aa4a0_2, word_0, 0x0);
GUEST_OFFSET(Object_001aa4a0_2, word_4, 0x4);

struct __attribute__((packed)) Local_001aa4a0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001aa4a0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001aa4a0_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x001aa500, u32(u32, u32)> FriendList__find;
inline constexpr guest::Function<0x001aa8c8, u32(u32)> FriendList__refresh;

void FriendList__key_of(u32 friend_list, u32 r1, gptr<Object_001aa4a0_2> arg2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 lock = friend_list + 0x650u;  // (from the original)
    RecursiveLock__lock(lock, r1, arg2.addr(), guest::cpu()->r[3]);
    FriendList__refresh(friend_list);
    u32 r0_1 = FriendList__find(friend_list, r1);
    u32 r1_2 = guest::cpu()->r[1];
    if (s32(r0_1) >= 0) {
        gptr<Local_001aa4a0_ea_1> ea_1 = gptr<Local_001aa4a0_ea_1>(friend_list + (r0_1 << 4) + 0x18u);  // (from the original)
        r1_2 = ea_1->word_4;
        arg2->word_0 = ea_1->word_0;
        arg2->word_4 = r1_2;
    } else {
        arg2->word_0 = 0;
        arg2->word_4 = 0;
    }
    frame.release();
    RecursiveLock__unlock(lock, r1_2);
    return;
}

}  // namespace d_001aa4a0
GUEST_EXPORT(0x001aa4a0, d_001aa4a0::FriendList__key_of);

// f_001aa500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the friend matching the entry; -1 when none does.
namespace d_001aa500 {

struct __attribute__((packed)) FriendList {
    u8 unknown_0[0x668];  // (not used here)
    u32 word_668;
};
GUEST_OFFSET(FriendList, word_668, 0x668);

struct __attribute__((packed)) Object_001aa500_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_001aa500_1, word_0, 0x0);

struct __attribute__((packed)) Local_001aa500_r3_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0xc];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Local_001aa500_r3_1, word_10, 0x10);
GUEST_OFFSET(Local_001aa500_r3_1, word_20, 0x20);

inline constexpr guest::Function<0x00125110, u32(u32, u32, u32, u32)> Friends__get_list;

u32 FriendList__find(gptr<FriendList> friend_list, gptr<Object_001aa500_1> arg1) {
    u32 r0 = friend_list.addr();
    u32 r1 = arg1.addr();
    u32 r4 = r0;
    u32 r2 = arg1->word_0;
    u32 r5 = r1;
    if (r2 != 0) {
        u32 r3 = friend_list->word_668;
        u32 r12 = r4 + 0x668u;  // (from the original)
        if (r3 == 0) {
            r0 = 0u;
        } else {
            r0 = r3 & 1u;
            r1 = 0u;
            if (s32(r0) > 0) {
                do {
                    if (*gptr<u32>(r4 + (r1 << 4) + 0x10u) == r2) {  // (from the original)
                        guest::cpu()->r[1] = r1;
                        return r1;
                    }
                    r1 += 1u;
                    guest::preempt();
                } while (s32(r0) > s32(r1));
            }
        }
        if (r3 > r0) {
            do {
                r1 = r4 + (r0 << 4);
                if (*gptr<u32>(r1 + 0x10u) == r2) {  // (from the original)
                    guest::cpu()->r[1] = r1;
                    return r0;
                }
                r1 = *gptr<u32>(r1 + 0x20u);  // (from the original)
                if (r1 == r2) {
                    guest::cpu()->r[1] = r1;
                    return r0 + 1u;
                }
                r0 += 2u;
                guest::preempt();
            } while (r3 > r0);
        }
        u32 list_2 = Friends__get_list(r4 + 0x10u, r12, 0u, 0x64u);  // (from the original)
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r4 + 0x660u) = list_2;  // (from the original)
        r2 = *gptr<u32>(r4 + 0x668u);  // (from the original)
        if (r2 == 0) {
            r0 = 0u;
            goto L_1aa5ec;
        }
        r0 = r2 & 1u;
        if (r0 != 0 && s32(r0) >= 0) {
            r3 = *gptr<u32>(r5);
        }
        r1 = 0u;
        if (s32(r0) <= 0) {
            goto L_1aa5ec;
        }
L_1aa5c8:;
        if (*gptr<u32>(r4 + (r1 << 4) + 0x10u) != r3) {  // (from the original)
            r1 += 1u;
            if (s32(r0) > s32(r1)) {
                guest::preempt();
                goto L_1aa5c8;
            }
            goto L_1aa5ec;
        }
        guest::cpu()->r[1] = r1;
        return r1;
L_1aa5ec:;
        if (r2 > r0) {
            r1 = *gptr<u32>(r5);
        } else {
            guest::cpu()->r[1] = r1;
            return ~0u;
        }
L_1aa5f8:;
        gptr<Local_001aa500_r3_1> r3_1 = gptr<Local_001aa500_r3_1>(r4 + (r0 << 4));
        if (r3_1->word_10 == r1) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r3_1->word_20 != r1) {
            goto L_1aa61c;
        }
        guest::cpu()->r[1] = r1;
        return r0 + 1u;
L_1aa61c:;
        r0 += 2u;
        if (r2 > r0) {
            guest::preempt();
            goto L_1aa5f8;
        }
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_001aa500
GUEST_EXPORT_FRAMED(0x001aa500, d_001aa500::FriendList__find, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001aa630: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the friend list when the service is up (state 1); true when loaded (state 3).
namespace d_001aa630 {

struct __attribute__((packed)) FriendList {
    u8 unknown_0[0x660];  // (not used here)
    u32 key;
    u8 byte_664;
};
GUEST_OFFSET(FriendList, key, 0x660);
GUEST_OFFSET(FriendList, byte_664, 0x664);

inline constexpr guest::Function<0x0048a6d8, u32(u32, u32, u32, u32)> Friends__get_key;

u32 FriendList__load(gptr<FriendList> friend_list, u32 r1) {
    if (friend_list->byte_664 != 1u) {
        return 0u;
    }
    u32 key_2 = Friends__get_key(friend_list.addr() + 0x65cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 res_1 = key_2 & 0x80000000u;  // (from the original)
    friend_list->key = key_2;
    if (s32(res_1) >= 0) {
        friend_list->byte_664 = 3;
        guest::cpu()->r[1] = res_1;
        return 1u;
    }
    u32 r1_1 = 0xd860c4f2u;  // (from the original)
    u32 zf_1 = key_2 == r1_1;
    if (!zf_1) {
        r1_1 = 0xd8a0c4fau;  // (from the original)
        zf_1 = key_2 == r1_1;
    }
    if (!zf_1) {
        r1_1 = 0xd8a0c4f8u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001aa630
GUEST_EXPORT_FRAMED(0x001aa630, d_001aa630::FriendList__load, 0x4010);  // pushes {r4, lr} first, as the original

// f_001aa804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the friend service once (under the lock) and adds the friend; true on success.
namespace d_001aa804 {

struct __attribute__((packed)) FriendList {
    u8 unknown_0[0x660];  // (not used here)
    u32 word_660;
    u8 byte_664;
};
GUEST_OFFSET(FriendList, word_660, 0x660);
GUEST_OFFSET(FriendList, byte_664, 0x664);

inline constexpr guest::Function<0x00124f94, u32(u32)> frd_initialize;
inline constexpr guest::Function<0x001251b0, u32(u32, u32, u32)> Friends__set_notification_mask;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0048a604, u32(u32)> Friends__is_online;

u32 FriendList__add_friend(gptr<FriendList> friend_list, u32 r1, u32 r2) {
    u32 r0_4 = 0;
    u32 lock = friend_list.addr() + 0x650u;  // (from the original)
    RecursiveLock__lock(lock, r1, r2, guest::cpu()->r[3]);
    u32 r0_1 = friend_list->byte_664;
    if (r0_1 == 0) {
        u32 r0_2 = frd_initialize(r0_1);
        u32 res_1 = r0_2 & 0x80000000u;  // (from the original)
        friend_list->word_660 = r0_2;
        if (s32(res_1) < 0) {
            RecursiveLock__unlock(lock, guest::cpu()->r[1], res_1);
            return 0u;
        }
        friend_list->byte_664 = 1;
        Friends__set_notification_mask(0x80u, 1u, res_1);  // (from the original)
    }
    RecursiveLock__unlock(lock, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_3 = Friends__is_online(r1);
    u32 r1_5 = r0_3 & 0x80000000u;  // (from the original)
    friend_list->word_660 = r0_3;
    if (s32(r1_5) < 0) {
        r1_5 = 0xd860c4f2u;  // (from the original)
        r0_4 = 0u;
    } else {
        r0_4 = 1u;
    }
    guest::cpu()->r[1] = r1_5;
    return r0_4;
}

}  // namespace d_001aa804
GUEST_EXPORT_FRAMED(0x001aa804, d_001aa804::FriendList__add_friend, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001aa88c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the friend keys (up to 100) into the list (under the lock).
namespace d_001aa88c {

struct __attribute__((packed)) FriendList {
    u8 unknown_0[0x660];  // (not used here)
    u32 list;
};
GUEST_OFFSET(FriendList, list, 0x660);

inline constexpr guest::Function<0x00125110, u32(u32, u32, u32, u32)> Friends__get_list;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

u32 FriendList__refresh_keys(gptr<FriendList> friend_list, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 lock = friend_list.addr() + 0x650u;  // (from the original)
    RecursiveLock__lock(lock, r1, r2, r3);
    u32 list_2 = Friends__get_list(friend_list.addr() + 0x10u, friend_list.addr() + 0x668u, 0u, 0x64u);  // (from the original)
    friend_list->list = list_2;
    frame.release();
    return RecursiveLock__unlock(lock, guest::cpu()->r[1]);
}

}  // namespace d_001aa88c
GUEST_EXPORT(0x001aa88c, d_001aa88c::FriendList__refresh_keys);

// f_001aa8c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the friend service once and rereads the friend keys when they changed.
namespace d_001aa8c8 {

struct __attribute__((packed)) FriendList {
    u8 unknown_0[0x660];  // (not used here)
    u32 word_660;
    u8 byte_664;
};
GUEST_OFFSET(FriendList, word_660, 0x660);
GUEST_OFFSET(FriendList, byte_664, 0x664);

inline constexpr guest::Function<0x00124f94, u32(u32, u32, u32, u32)> frd_initialize;
inline constexpr guest::Function<0x00125110, u32(u32, u32, u32, u32)> Friends__get_list;
inline constexpr guest::Function<0x001251b0, u32(u32, u32, u32)> Friends__set_notification_mask;
inline constexpr guest::Function<0x0048a574, u32(u32, u32, u32, u32)> Friends__get_presence;

void FriendList__refresh(gptr<FriendList> friend_list, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r0 = friend_list.addr();
    u32 r5 = r0;
    u32 r0_1 = friend_list->byte_664;
    if (r0_1 == 0) {
        u32 r0_2 = frd_initialize(r0_1, r1, r2, r3);
        u32 res_1 = r0_2 & 0x80000000u;  // (from the original)
        friend_list->word_660 = r0_2;
        if (s32(res_1) < 0) {
            return;
        }
        friend_list->byte_664 = 1;
        Friends__set_notification_mask(0x80u, 1u, res_1);  // (from the original)
        r3 = guest::cpu()->r[3];
    }
    u32 r4 = 0u;
    do {
        u32 presence_2 = Friends__get_presence(frame.at(0).addr(), 1u, 0u, r3);
        r3 = guest::cpu()->r[3];
        if (presence_2 == 0) {
            if (r4 == 0) {
                return;
            }
            u32 list_2 = Friends__get_list(r5 + 0x10u, r5 + 0x668u, 0u, 0x64u);  // (from the original)
            *gptr<u32>(r5 + 0x660u) = list_2;  // (from the original)
            return;
        }
        r4 = 1u;
        guest::preempt();
    } while (1);
}

}  // namespace d_001aa8c8
GUEST_EXPORT_FRAMED(0x001aa8c8, d_001aa8c8::FriendList__refresh, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001aa94c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the entry is a friend (by its id, or its key among the list).
namespace d_001aa94c {

struct __attribute__((packed)) Object_001aa94c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_001aa94c_1, word_0, 0x0);

struct __attribute__((packed)) Local_001aa94c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001aa94c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001aa94c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001aa94c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001aa94c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001aa94c_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x001aa500, u32(u32, u32)> FriendList__find;
inline constexpr guest::Function<0x001aa8c8, u32(u32)> FriendList__refresh;

u32 FriendList__contains(u32 friend_list, gptr<Object_001aa94c_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    gptr<Local_001aa94c_ea_1> ea_1 = gptr<Local_001aa94c_ea_1>(0u);
    u32 res_1 = 0;
    u32 r4 = friend_list;
    u32 lock = friend_list + 0x650u;  // (from the original)
    u32 r6 = lock;
    RecursiveLock__lock(lock, r1, r2, r3);
    FriendList__refresh(r4);
    if (arg1->word_0 != 0) {
        friend_list = FriendList__find(r4, r1);
        if (s32(friend_list) >= 0) {
            goto L_1aa9e4;
        }
    }
    ea_1 = gptr<Local_001aa94c_ea_1>(r1 + 4u);
    r2 = ea_1->word_0;
    r1 = ea_1->word_4;
    res_1 = r2 | r1;
    if (res_1 != 0) {
        r3 = *gptr<u32>(r4 + 0x668u);  // (from the original)
        friend_list = 0u;
        if (r3 >= 0u && r3 != 0) {
            do {
                u32 r12_1 = r4 + (friend_list << 4);
                if (*gptr<u32>(r12_1 + 0x10u) == 0) {  // (from the original)
                    gptr<Local_001aa94c_ea_2> ea_2 = gptr<Local_001aa94c_ea_2>(r12_1 + 0x18u);  // (from the original)
                    if ((ea_2->word_4 ^ r1 | (ea_2->word_0 ^ r2)) == 0) {
                        goto L_1aa9e4;
                    }
                }
                friend_list += 1u;
                guest::preempt();
            } while (r3 > friend_list);
        }
    }
    friend_list = ~0u;
L_1aa9e4:;
    RecursiveLock__unlock(r6, 1u);
    return u32(s32(friend_list) >> 0x1f) + 1u;  // (from the original)
}

}  // namespace d_001aa94c
GUEST_EXPORT_FRAMED(0x001aa94c, d_001aa94c::FriendList__contains, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001aa9fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the entry is in the friend list (refreshing it first, under the lock).
namespace d_001aa9fc {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x001aa500, u32(u32, u32)> FriendList__find;
inline constexpr guest::Function<0x001aa8c8, u32(u32)> FriendList__refresh;

u32 FriendList__has_entry(u32 friend_list, u32 r1) {
    u32 lock = friend_list + 0x650u;  // (from the original)
    RecursiveLock__lock(lock, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    FriendList__refresh(friend_list);
    u32 r0_1 = FriendList__find(friend_list, r1);
    RecursiveLock__unlock(lock, 1u);
    return u32(s32(r0_1) >> 0x1f) + 1u;  // (from the original)
}

}  // namespace d_001aa9fc
GUEST_EXPORT_FRAMED(0x001aa9fc, d_001aa9fc::FriendList__has_entry, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001aadd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the frame of slot `index`'s animation (below 4, 0x18 bytes each, +0xe0) when the frame is not negative.
namespace d_001aadd0 {

inline constexpr guest::Function<0x004ee9cc, u32(u32, u32, u32, u32)> node_call_004ee9cc;

u32 set_slot_animation_frame(u32 r0, u32 r1, float S0) {
    float S1_1 = 0.0f;
    if (S1_1 > S0 || r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[1] = S1_1;
        return r0;
    }
    u32 r1_1 = r1 * 3u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
    return node_call_004ee9cc(r0 + (r1_1 << 3) + 0xe0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001aadd0
GUEST_EXPORT(0x001aadd0, d_001aadd0::set_slot_animation_frame);

// f_001aaed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the resource index of the scene's model.
namespace d_001aaed4 {

struct __attribute__((packed)) Object_001aaed4_0 {
    u8 unknown_0[0x9c];  // (not used here)
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u32 word_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u8 unknown_c8[0x79];  // (not used here)
    u8 scene_flagged;
};
GUEST_OFFSET(Object_001aaed4_0, word_9c, 0x9c);
GUEST_OFFSET(Object_001aaed4_0, word_a0, 0xa0);
GUEST_OFFSET(Object_001aaed4_0, word_a4, 0xa4);
GUEST_OFFSET(Object_001aaed4_0, word_a8, 0xa8);
GUEST_OFFSET(Object_001aaed4_0, word_ac, 0xac);
GUEST_OFFSET(Object_001aaed4_0, word_b0, 0xb0);
GUEST_OFFSET(Object_001aaed4_0, word_b4, 0xb4);
GUEST_OFFSET(Object_001aaed4_0, word_b8, 0xb8);
GUEST_OFFSET(Object_001aaed4_0, word_bc, 0xbc);
GUEST_OFFSET(Object_001aaed4_0, word_c0, 0xc0);
GUEST_OFFSET(Object_001aaed4_0, word_c4, 0xc4);
GUEST_OFFSET(Object_001aaed4_0, scene_flagged, 0x141);

inline constexpr u32 scene_resource_indices_address = 0x00952d18u;
inline constexpr u32 scene_resource_index_a_address = 0x00952d1cu;
inline constexpr u32 scene_resource_index_b_address = 0x00952d20u;
inline constexpr u32 scene_resource_index_c_address = 0x00952d24u;
inline constexpr u32 scene_resource_index_d_address = 0x00952d28u;
inline constexpr u32 scene_resource_index_e_address = 0x00952d2cu;
inline constexpr u32 scene_resource_index_f_address = 0x00952d30u;
inline constexpr u32 scene_resource_index_g_address = 0x00952d34u;
inline constexpr u32 scene_resource_index_h_address = 0x00952d40u;
inline constexpr u32 scene_resource_index_i_address = 0x00952d44u;
inline constexpr u32 scene_resource_index_j_address = 0x00952d48u;
inline constexpr u32 scene_resource_index_k_address = 0x00952d4cu;
inline guest::global<u8, 0x00952d18> scene_resource_indices;
inline guest::global<u32, 0x00952d1c> scene_resource_index_a;
inline guest::global<u32, 0x00952d20> scene_resource_index_b;
inline guest::global<u32, 0x00952d24> scene_resource_index_c;
inline guest::global<u32, 0x00952d28> scene_resource_index_d;
inline guest::global<u32, 0x00952d2c> scene_resource_index_e;
inline guest::global<u32, 0x00952d30> scene_resource_index_f;
inline guest::global<u32, 0x00952d34> scene_resource_index_g;
inline guest::global<u32, 0x00952d40> scene_resource_index_h;
inline guest::global<u32, 0x00952d44> scene_resource_index_i;
inline guest::global<u32, 0x00952d48> scene_resource_index_j;
inline guest::global<u32, 0x00952d4c> scene_resource_index_k;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x00745d44, u32(u32, u32, u32, u32)> Resource__find_index;

u32 find_scene_resource_index(gptr<Object_001aaed4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 index_12 = Resource__find_index(r0 + 0x78u, *scene_resource_index_b, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_9c = index_12;
    u32 index_13 = Resource__find_index(r0 + 0x78u, *scene_resource_index_a, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_a0 = index_13;
    u32 index_14 = Resource__find_index(r0 + 0x78u, *scene_resource_index_f, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_a4 = index_14;
    u32 index_15 = Resource__find_index(r0 + 0x78u, *scene_resource_index_g, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_a8 = index_15;
    u32 index_16 = Resource__find_index(r0 + 0x78u, *scene_resource_index_h, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_ac = index_16;
    u32 index_17 = Resource__find_index(r0 + 0x78u, *scene_resource_index_i, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_b0 = index_17;
    u32 index_18 = Resource__find_index(r0 + 0x78u, *scene_resource_index_j, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_b4 = index_18;
    u32 index_19 = Resource__find_index(r0 + 0x78u, *scene_resource_index_c, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_b8 = index_19;
    u32 index_20 = Resource__find_index(r0 + 0x78u, *scene_resource_index_d, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_bc = index_20;
    u32 index_21 = Resource__find_index(r0 + 0x78u, *scene_resource_index_e, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_c0 = index_21;
    u32 index_22 = Resource__find_index(r0 + 0x78u, *scene_resource_index_k, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_c4 = index_22;
    u32 scene = current_scene_id(index_22);
    u32 scene_flagged = scene_has_flags(0x20u, scene);  // (from the original)
    if (scene_flagged == 0) {
        scene_flagged = current_scene_id(scene_flagged);
        if (scene_flagged != 0x4au) {  // (from the original)
            scene_flagged = current_scene_id(scene_flagged);
            if (scene_flagged != 0x4bu) {  // (from the original)
                scene_flagged = current_scene_id(scene_flagged);
                if (scene_flagged != 0x4cu) {  // (from the original)
                    u32 scene_2 = current_scene_id(scene_flagged);
                    scene_flagged = scene_has_flags(0x400000u, scene_2);  // (from the original)
                    if (scene_flagged != 0) {
                        scene_flagged = 2u;
                        *scene_resource_indices = u8(scene_flagged);
                        goto L_1aaff4;
                    }
                }
            }
        }
    }
    *scene_resource_indices = 0;
L_1aaff4:;
    u32 scene_3 = current_scene_id(scene_flagged);
    u32 scene_flagged_2 = scene_has_flags(0x20u, scene_3);  // (from the original)
    arg0->scene_flagged = u8(scene_flagged_2);
    return scene_flagged_2;
}

}  // namespace d_001aaed4
GUEST_EXPORT_FRAMED(0x001aaed4, d_001aaed4::find_scene_resource_index, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001ab060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the material (+0x24) to the model (+0x1c) when it exists.
namespace d_001ab060 {

struct __attribute__((packed)) Object_001ab060_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_001ab060_0, word_1c, 0x1c);
GUEST_OFFSET(Object_001ab060_0, word_24, 0x24);

inline constexpr guest::Function<0x0049fffc, u32(u32, u32)> Camera__set_perspective;

void apply_material_to_model(gptr<Object_001ab060_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_1c;
    if (r2_1 == 0) {
        return;
    }
    Camera__set_perspective(r2_1, arg0->word_24);
}

}  // namespace d_001ab060
GUEST_EXPORT(0x001ab060, d_001ab060::apply_material_to_model);

// f_001ab2ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the target by the offset rotated by the angle and, when asked, resets both models' positions.
namespace d_001ab2ec {

struct __attribute__((packed)) ModelPair {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u32 word_10;
    float float_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(ModelPair, word_0, 0x0);
GUEST_OFFSET(ModelPair, word_4, 0x4);
GUEST_OFFSET(ModelPair, word_8, 0x8);
GUEST_OFFSET(ModelPair, float_c, 0xc);
GUEST_OFFSET(ModelPair, word_10, 0x10);
GUEST_OFFSET(ModelPair, float_14, 0x14);
GUEST_OFFSET(ModelPair, word_18, 0x18);
GUEST_OFFSET(ModelPair, word_1c, 0x1c);
GUEST_OFFSET(ModelPair, word_20, 0x20);

struct __attribute__((packed)) Object_001ab2ec_1 {
    u8 unknown_0[0x92];  // (not used here)
    u16 half_92;
};
GUEST_OFFSET(Object_001ab2ec_1, half_92, 0x92);

struct __attribute__((packed)) Local_001ab2ec_r0_3 {
    u8 unknown_0[0xc];  // (not used here)
    float float_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0xc];  // (not used here)
    float float_2c;
    u8 unknown_30[0xc];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Local_001ab2ec_r0_3, float_c, 0xc);
GUEST_OFFSET(Local_001ab2ec_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_001ab2ec_r0_3, float_2c, 0x2c);
GUEST_OFFSET(Local_001ab2ec_r0_3, word_3c, 0x3c);

struct __attribute__((packed)) Local_001ab2ec_r0_4 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0xc];  // (not used here)
    u32 word_2c;
    u8 unknown_30[0xc];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Local_001ab2ec_r0_4, word_c, 0xc);
GUEST_OFFSET(Local_001ab2ec_r0_4, word_1c, 0x1c);
GUEST_OFFSET(Local_001ab2ec_r0_4, word_2c, 0x2c);
GUEST_OFFSET(Local_001ab2ec_r0_4, word_3c, 0x3c);

struct __attribute__((packed)) Local_001ab2ec_r5_1 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Local_001ab2ec_r5_1, float_0, 0x0);
GUEST_OFFSET(Local_001ab2ec_r5_1, float_8, 0x8);

inline constexpr guest::Function<0x0014f378, u32(u32, u32, u32, u32)> Vec3__add;
inline constexpr guest::Function<0x0056a224, u32(u32, u32)> rotate_xz;

struct __attribute__((packed)) Frame_001ab2ec {
    u8 unknown_0[0x4];  // (not read or written by name)
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001ab2ec, float_4, 0x4);
GUEST_OFFSET(Frame_001ab2ec, float_c, 0xc);
GUEST_SIZE(Frame_001ab2ec, 0x14);

void ModelPair__move_by_angle(gptr<ModelPair> model_pair, gptr<Object_001ab2ec_1> arg1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_001ab2ec> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 zf_1 = r2 == 0;
    gptr<Local_001ab2ec_r5_1> r5_1 = gptr<Local_001ab2ec_r5_1>(r2);
    if (r2 == 0) {
        r5_1 = gptr<Local_001ab2ec_r5_1>(model_pair->word_18);
    }
    if (zf_1) {
        zf_1 = r5_1.addr() == 0;
    }
    if (!zf_1) {
        Vec3__add(frame.at(4).addr(), model_pair.addr() + 0xcu, model_pair.addr(), r3);  // (from the original)
        *frame.at<u16>(0) = arg1->half_92;
        rotate_xz(frame.at(4).addr(), *frame.at<u32>(0));
        r1 = guest::cpu()->r[1];
        S1 = r5_1->float_8;
        r5_1->float_0 = r5_1->float_0 + frame->float_4;
        S0 = S1 + frame->float_c;
        r5_1->float_8 = S0;
        if (r3 != 0) {
            S0 = 0.0f;
            model_pair->word_8 = std::bit_cast<u32>(S0);
            model_pair->word_0 = std::bit_cast<u32>(S0);
            model_pair->float_14 = S0;
            model_pair->float_c = S0;
            gptr<Local_001ab2ec_r0_3> r0_3 = gptr<Local_001ab2ec_r0_3>(model_pair->word_20);
            u32 r1_3 = model_pair->word_10;
            r0_3->float_c = S0;
            r0_3->word_1c = r1_3;
            r0_3->float_2c = S0;
            r0_3->word_3c = r0_3->word_3c | 0x800u;  // (from the original)
            u32 r3_1 = model_pair->word_0;
            gptr<Local_001ab2ec_r0_4> r0_4 = gptr<Local_001ab2ec_r0_4>(model_pair->word_1c);
            u32 r2_1 = model_pair->word_8;
            r0_4->word_1c = model_pair->word_4;
            r0_4->word_2c = r2_1;
            r0_4->word_c = r3_1;
            r1 = r0_4->word_3c | 0x800u;  // (from the original)
            r0_4->word_3c = r1;
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_001ab2ec
GUEST_EXPORT_FRAMED(0x001ab2ec, d_001ab2ec::ModelPair__move_by_angle, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001ab70c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the model part of the grouped record and binds it; true when it did.
namespace d_001ab70c {

inline constexpr u32 human_model_part_table_address = 0x00a14b5cu;
inline constexpr guest::Function<0x004edaec, u32(u32, u32)> Model__find_node_b;
inline constexpr guest::Function<0x004ee904, u32(u32, u32)> ToggleObject__set_mode;
inline constexpr guest::Function<0x004eefe0, u32(u32, u32, u32, u32)> build_skeletal_anim_b;
inline constexpr guest::Function<0x0076f954, u32(u32, u32, u32, u32)> GroupedRecords__record_for;

struct __attribute__((packed)) Frame_001ab70c {
    u32 word_0;
};
GUEST_OFFSET(Frame_001ab70c, word_0, 0x0);
GUEST_SIZE(Frame_001ab70c, 0x4);

u32 HumanModel__load_part(u32 human_model, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001ab70c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 record_2 = GroupedRecords__record_for(human_model_part_table_address, r1, r2, r3);
    frame->word_0 = r3;
    u32 r0_3 = build_skeletal_anim_b(human_model + 0xccu, human_model + 0x78u, *gptr<u32>(record_2), r2);  // (from the original)
    if (r0_3 != 0) {
        ToggleObject__set_mode(human_model + 0xe0u, 1u);  // (from the original)
        Model__find_node_b(human_model + 0x78u, human_model + 0xccu);  // (from the original)
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_001ab70c
GUEST_EXPORT_FRAMED(0x001ab70c, d_001ab70c::HumanModel__load_part, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001abcd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the 8 part ids (0x276 for none) and releases the model and its loader.
namespace d_001abcd4 {

struct __attribute__((packed)) Object_001abcd4_0 {
    u8 unknown_0[0x68];  // (not used here)
    u16 half_68;
    u16 half_6a;
    u16 half_6c;
    u16 half_6e;
    u16 half_70;
    u16 half_72;
    u16 half_74;
    u16 half_76;
    u8 unknown_78[0x4];  // (not used here)
    u32 word_7c;
};
GUEST_OFFSET(Object_001abcd4_0, half_68, 0x68);
GUEST_OFFSET(Object_001abcd4_0, half_6a, 0x6a);
GUEST_OFFSET(Object_001abcd4_0, half_6c, 0x6c);
GUEST_OFFSET(Object_001abcd4_0, half_6e, 0x6e);
GUEST_OFFSET(Object_001abcd4_0, half_70, 0x70);
GUEST_OFFSET(Object_001abcd4_0, half_72, 0x72);
GUEST_OFFSET(Object_001abcd4_0, half_74, 0x74);
GUEST_OFFSET(Object_001abcd4_0, half_76, 0x76);
GUEST_OFFSET(Object_001abcd4_0, word_7c, 0x7c);

inline constexpr guest::Function<0x004ef3a4, u32(u32, u32, u32, u32)> AnimSlots__clear;
inline constexpr guest::Function<0x004f1270, u32(u32, u32, u32, u32)> model_virtual_3;

u32 HumanModel__reset_parts(gptr<Object_001abcd4_0> human_model) {
    human_model->half_68 = 0x276;  // (from the original)
    human_model->half_70 = 0x276;  // (from the original)
    human_model->half_6a = 0x276;  // (from the original)
    human_model->half_72 = 0x276;  // (from the original)
    human_model->half_6c = 0x276;  // (from the original)
    human_model->half_74 = 0x276;  // (from the original)
    human_model->half_6e = 0x276;  // (from the original)
    human_model->half_76 = 0x276;  // (from the original)
    if (human_model->word_7c != 0) {
        model_virtual_3(human_model.addr() + 0x78u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    AnimSlots__clear(human_model.addr() + 0xccu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return 1u;
}

}  // namespace d_001abcd4
GUEST_EXPORT_FRAMED(0x001abcd4, d_001abcd4::HumanModel__reset_parts, 0x4010);  // pushes {r4, lr} first, as the original

// f_001abfb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001abfb4 {

struct __attribute__((packed)) Local_001abfb4_r12_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001abfb4_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_001abfb4_r12_1, float_4, 0x4);

struct __attribute__((packed)) Local_001abfb4_r12_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001abfb4_r12_2, float_0, 0x0);
GUEST_OFFSET(Local_001abfb4_r12_2, float_4, 0x4);

inline constexpr guest::Function<0x001abd24, u32(u32, u32, u32, u32)> NpcModel__set_face;

struct __attribute__((packed)) Frame_001abfb4 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001abfb4, word_0, 0x0);
GUEST_SIZE(Frame_001abfb4, 0xc);

u32 HumanModel__virtual_0(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001abfb4> frame;  // the original's stack frame
    gptr<Local_001abfb4_r12_1> r12_1 = gptr<Local_001abfb4_r12_1>(frame.at(0x10).addr());  // (from the original)
    float S3_1 = r12_1->float_0;
    float S4_1 = r12_1->float_4;
    gptr<Local_001abfb4_r12_2> r12_2 = gptr<Local_001abfb4_r12_2>(frame.at(4).addr());
    frame->word_0 = r3;
    r12_2->float_0 = S3_1;
    r12_2->float_4 = S4_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    NpcModel__set_face(guest::cpu()->r[0], guest::cpu()->r[1], 0u, r2);
    return guest::cpu()->r[0];
}

}  // namespace d_001abfb4
GUEST_EXPORT_FRAMED(0x001abfb4, d_001abfb4::HumanModel__virtual_0, 0x4000);  // pushes {lr} first, as the original

// f_001ac668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the move's angle, target position and its two halves.
namespace d_001ac668 {

struct __attribute__((packed)) MoveParams {
    u8 unknown_0[0x30];  // (not used here)
    u16 half_30;
    u16 half_32;
    u8 unknown_34[0x4];  // (not used here)
    u16 half_38;
    u8 unknown_3a[0xe];  // (not used here)
    float float_48;
    float float_4c;
    u32 word_50;
};
GUEST_OFFSET(MoveParams, half_30, 0x30);
GUEST_OFFSET(MoveParams, half_32, 0x32);
GUEST_OFFSET(MoveParams, half_38, 0x38);
GUEST_OFFSET(MoveParams, float_48, 0x48);
GUEST_OFFSET(MoveParams, float_4c, 0x4c);
GUEST_OFFSET(MoveParams, word_50, 0x50);


void MoveParams__set(gptr<MoveParams> move_params, gptr<Float3> arg1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = *gptr<u32>(r13);
    move_params->half_38 = u16(r2);
    move_params->float_48 = arg1->v[0];
    float S0_1 = arg1->v[1];
    move_params->float_4c = S0_1;
    u32 r1_1 = std::bit_cast<u32>(arg1->v[2]);
    move_params->word_50 = r1_1;
    move_params->half_30 = u16(r3);
    move_params->half_32 = u16(r12_1);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_001ac668
GUEST_EXPORT(0x001ac668, d_001ac668::MoveParams__set);

// f_001aca90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aca90 {

inline constexpr u32 vtable_InstSelect_8_ = 0x008eb1a8u;
inline constexpr u32 vtable_SelectBase = 0x008eb3f8u;
inline constexpr u32 vtable_CatalogBase = 0x008eb984u;
inline constexpr u32 vtable_CommonScrollBar = 0x008f0888u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 InstSelect_8___destructor(gptr<CatalogBase> catalog_base) {
    catalog_base->vtable = vtable_InstSelect_8_;
    destroy_array_elements(catalog_base.addr() + 0xbccu, 0x2b6ef8u, 0xe0u, 8u);  // (from the original)
    destroy_array_elements(catalog_base.addr() + 0xaecu, 0x1c81ccu, 0x1cu, 8u);  // (from the original)
    catalog_base->vtable = vtable_SelectBase;
    destroy_button_action_control(catalog_base.addr() + 0xa00u, guest::cpu()->r[1]);  // (from the original)
    catalog_base->vtable = vtable_CatalogBase;
    catalog_base->common_scroll_bar_vtable = vtable_CommonScrollBar;
    destroy_button_action_control(catalog_base.addr() + 0x82cu, vtable_CommonScrollBar);  // (from the original)
    destroy_array_elements(catalog_base.addr() + 0x66cu, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    destroy_animation(catalog_base.addr() + 0x634u);  // (from the original)
    destroy_animation(catalog_base.addr() + 0x60cu);  // (from the original)
    destroy_animation(catalog_base.addr() + 0x5e4u);  // (from the original)
    destroy_animation(catalog_base.addr() + 0x5bcu);  // (from the original)
    u32 r0_11 = Layout__destructor(catalog_base.addr() + 0x470u);  // (from the original)
    u32 r0_13 = ssys__ma__lyt__ArcResAccReader__destructor(r0_11 - 0x248u);  // (from the original)
    destroy_animation(r0_13 - 0x38u);  // (from the original)
    destroy_animation(r0_13 - 0x60u);  // (from the original)
    destroy_animation(r0_13 - 0x88u);  // (from the original)
    destroy_animation(r0_13 - 0xb0u);  // (from the original)
    u32 r0_19 = Layout__destructor(r0_13 - 0x1fcu);  // (from the original)
    return r0_19 - 0x2cu;  // (from the original)
}

}  // namespace d_001aca90
GUEST_EXPORT_FRAMED(0x001aca90, d_001aca90::InstSelect_8___destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_001accd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the 4 items from the save (+0x6adb8), or restocks them when asked.
namespace d_001accd4 {

inline constexpr guest::Function<0x0020ce94, u32(u32, u32, u32, u32)> ItemSlots__clear_all;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;

u32 ShopStock4__load(u32 shop_stock4, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_3 = 0;
    if (r1 != 0) {
        frame.release();
        return ItemSlots__clear_all(shop_stock4 + 0x10u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    u32 r6 = shop_stock4 + 0x10u;  // (from the original)
    u32 save_data_2 = get_save_data(shop_stock4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5 = save_data_2 + 0x6adb8u;  // (from the original)
    u32 r4 = 0u;
    do {
        r0_3 = r6 + (r4 << 2);
        Item__copy(r0_3, r5 + (r4 << 2));
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    return r0_3;
}

}  // namespace d_001accd4
GUEST_EXPORT(0x001accd4, d_001accd4::ShopStock4__load);

// f_001acf0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the message board's panes and animations once.
namespace d_001acf0c {

struct __attribute__((packed)) Local_001acf0c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001acf0c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001acf0c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001acf0c_ea_1, word_8, 0x8);

struct __attribute__((packed)) Child {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Child, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001acf0c_r0_4 {
    u8 unknown_0[0x2c];  // (not used here)
    float float_2c;
    u8 unknown_30[0x87];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001acf0c_r0_4, float_2c, 0x2c);
GUEST_OFFSET(Local_001acf0c_r0_4, byte_b7, 0xb7);

inline constexpr u32 message_board_layout_address = 0x0094fcfcu;
inline constexpr u32 message_board_state_address = 0x0094fd00u;
inline constexpr u32 message_board_panes_address = 0x0098c334u;
inline guest::global<u32, 0x0094fcfc> message_board_layout;
inline guest::global<u32, 0x0094fd00> message_board_state;
inline guest::global<u32, 0x0098c334> message_board_panes;
inline guest::global<u32, 0x0098c338> message_board_pane_a;
inline guest::global<u32, 0x0098c33c> message_board_pane_b;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> Listener__notify;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569420, u32(u32, u32)> Layout__refresh_pane;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;
inline constexpr guest::Function<0x00583a18, u32(u32, u32)> tune_player_call_27689c;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;

void MessageBoard__setup_panes(u32 message_board, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r7_1 = r2;
    u32 r6_1 = r3;
    if ((*message_board_state & 1u) == 0) {
        u32 first_time = static_guard_acquire(message_board_state_address, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        if (first_time != 0) {
            S0 = 0.0f;
            *message_board_panes = std::bit_cast<u32>(S0);
            *message_board_pane_a = std::bit_cast<u32>(S0);
            *message_board_pane_b = std::bit_cast<u32>(S0);
        }
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    gptr<Child> child_2 = gptr<Child>(LayoutObjectWithChild__forward_to_child(message_board + 4u, 0x1ad070u, r2, r3));  // (from the original)
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    float S2_1 = guest::cpu()->s[2];
    u32 r1_1 = *message_board_panes;
    u32 r2_1 = *message_board_pane_a;
    u32 r3_1 = *message_board_pane_b;
    gptr<Local_001acf0c_ea_1> ea_1 = gptr<Local_001acf0c_ea_1>(child_2.addr() + 0x34u);  // (from the original)
    ea_1->word_0 = r1_1;
    ea_1->word_4 = r2_1;
    ea_1->word_8 = r3_1;
    child_2->byte_b7 = u8(u32(child_2->byte_b7) & 0xcfu);  // (from the original)
    *gptr<u8>(message_board + 0x3d8u) = u8(r1);  // (from the original)
    if (r6_1 != 0) {
        S2_1 = 3.0f;
        gptr<Local_001acf0c_r0_4> r0_4 = gptr<Local_001acf0c_r0_4>(*gptr<u32>(message_board + 0x150u));  // (from the original)
        S1_1 = float(r1);
        S0_1 = std::bit_cast<float>(*gptr<u32>(message_board + 0x3ccu)) + S1_1 * S2_1;  // (from the original)
        r0_4->float_2c = S0_1;
        r0_4->byte_b7 = u8(u32(r0_4->byte_b7) & 0xcfu);  // (from the original)
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    Listener__notify(message_board + 4u, message_board + 0x21cu, r2_1, r3_1);  // (from the original)
    float S0_2 = float(u32(*gptr<u8>(message_board + 0x3d8u)));  // (from the original)
    guest::cpu()->s[0] = S0_2;
    Animation__set_value(message_board + 0x21cu);  // (from the original)
    Listener__notify(message_board + 4u, message_board + 0x244u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    float S0_4 = float(u32(*gptr<u8>(message_board + 0x3d8u)));  // (from the original)
    guest::cpu()->s[0] = S0_4;
    Animation__set_value(message_board + 0x244u);  // (from the original)
    Layout__virtual_3(message_board + 4u);
    Layout__refresh_pane(message_board + 4u, message_board + 0x21cu);  // (from the original)
    Layout__refresh_pane(message_board + 4u, message_board + 0x244u);  // (from the original)
    start_message(message_board + 0x158u, *gptr<u32>(message_board) + (u32(*gptr<u8>(message_board + 0x3d8u)) << 5));  // (from the original)
    u32 r0_14 = TextBox__layout_lines(message_board + 0x158u);  // (from the original)
    u32 zf_1 = r7_1 == 0;
    u32 cf_1 = r7_1 >= 0u;
    if (!zf_1) {
        r0_14 = *gptr<u8>(message_board + 0x3d8u);  // (from the original)
        zf_1 = r0_14 == 1u;
        cf_1 = r0_14 >= 1u;
    }
    if (cf_1 && !zf_1) {
        u32 r1_12 = *gptr<u8>(r0_14 + 0x84b478u);  // (from the original)
        u32 r0_15 = *message_board_layout;
        frame.release();
        tune_player_call_27689c(r0_15, r1_12);
        return;
    }
}

}  // namespace d_001acf0c
GUEST_EXPORT(0x001acf0c, d_001acf0c::MessageBoard__setup_panes);

// f_001ad2e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the first word and clears the second.
namespace d_001ad2e4 {

struct __attribute__((packed)) WordPair {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(WordPair, word_0, 0x0);
GUEST_OFFSET(WordPair, word_4, 0x4);


void WordPair__set_first(gptr<WordPair> word_pair, u32 r1) {
    word_pair->word_0 = r1;
    word_pair->word_4 = 0;
}

}  // namespace d_001ad2e4
GUEST_EXPORT(0x001ad2e4, d_001ad2e4::WordPair__set_first);

// f_001ad5c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 4 visiting villagers (0x2518 bytes each), their ids and flags.
namespace d_001ad5c8 {

inline constexpr u32 visiting_villagers_flag_address = 0x009535d5u;
inline constexpr u32 visiting_villagers_a_address = 0x00a187d8u;
inline constexpr u32 global_00a21c38_address = 0x00a21c38u;
inline constexpr u32 visiting_villagers_b_address = 0x00a21c48u;
inline guest::global<u8, 0x009535d5> visiting_villagers_flag;
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> Villager__clear;

u32 VisitingVillagers__clear() {
    u32 r5 = ~0u;
    u32 r8 = 0u;
    u32 r4 = r8;
    u32 r9 = visiting_villagers_b_address;
    u32 r6 = visiting_villagers_a_address;
    u32 r7 = r9 - 0x10u;  // (from the original)
    do {
        u32 r0 = r9 + (r4 << 2);
L_1ad5f4:;
        *gptr<u32>(r0) = r5;
        u32 villager = r4 >= 4u ? visiting_villagers_a_address : r6 + r4 * 0x2518u;  // (from the original)
        Villager__clear(villager, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_2 = r4 >= 4u ? global_00a21c38_address : r7 + (r4 << 2);
        r4 += 1u;
        *gptr<u32>(r0_2) = r8;
        if (s32(r4) >= 4) {
            *visiting_villagers_flag = u8(r8);
            return visiting_villagers_flag_address;
        }
        if (r4 >= 4u) {
            r0 = visiting_villagers_b_address;
            guest::preempt();
            goto L_1ad5f4;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_001ad5c8
GUEST_EXPORT_FRAMED(0x001ad5c8, d_001ad5c8::VisitingVillagers__clear, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_001add58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the visiting villagers from friends into the slots, clearing their letters.
namespace d_001add58 {

struct __attribute__((packed)) Local_001add58_ea_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_001add58_ea_1, half_0, 0x0);
GUEST_OFFSET(Local_001add58_ea_1, byte_14, 0x14);

struct __attribute__((packed)) Local_001add58_r0_6 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_001add58_r0_6, half_0, 0x0);
GUEST_OFFSET(Local_001add58_r0_6, byte_14, 0x14);

inline constexpr u32 friend_list_instance_address = 0x009529ccu;
inline guest::global<u32, 0x009529cc> friend_list_instance;
inline constexpr guest::Function<0x00100b8d, u32(u32)> Player__destruct;
inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> memory_compare_100d2c;
inline constexpr guest::Function<0x00112d9d, u32(u32)> Villager__clear_letters;
inline constexpr guest::Function<0x001138dd, u32(u32, u32)> Villager__copy;
inline constexpr guest::Function<0x00113d15, u32(u32, u32, u32, u32)> Villager__Villager;
inline constexpr guest::Function<0x00114089, u32(u32, u32, u32, u32)> Villager__reset_for_move_in;
inline constexpr guest::Function<0x001aa9fc, u32(u32, u32, u32)> FriendList__has_entry;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> Letter__clear;
inline constexpr guest::Function<0x00301e20, u32(u32)> is_villager_record;
inline constexpr guest::Function<0x00311c50, u32(u32)> record_identity_of_kind;
inline constexpr guest::Function<0x00758bac, u32(u32, u32)> Villager__first_named_item;

struct __attribute__((packed)) Frame_001add58 {
    u8 unknown_0[0x8a0];  // (not read or written by name)
    u16 half_8a0;
    u8 unknown_8a2[0x12];  // (not read or written by name)
    u8 byte_8b4;
    u8 unknown_8b5[0x1c5b];  // (not read or written by name)
    u32 word_2510;
    u8 unknown_2514[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001add58, half_8a0, 0x8a0);
GUEST_OFFSET(Frame_001add58, byte_8b4, 0x8b4);
GUEST_OFFSET(Frame_001add58, word_2510, 0x2510);
GUEST_SIZE(Frame_001add58, 0x2540);

void VisitingVillagers__receive(u32 visiting_villagers, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001add58> frame;  // the original's stack frame
    u32 r5_1 = frame.at(0).addr();
    Villager__Villager(r5_1, r1, r2, r3);
    Villager__copy(r5_1, visiting_villagers);
    u32 is_villager_2 = is_villager_record(r5_1);
    if (is_villager_2 != 0) {
        u32 data_base_3 = get_data_base(is_villager_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        u32 records_2 = slot_records_of(data_base_3);
        u32 r2_5 = guest::cpu()->r[2];
        u32 villager = records_2 + 0x1976cu;  // (from the original)
        u32 r0_4 = frame->word_2510;
        if ((r0_4 & 0x600u) == 0) {  // (from the original)
            u32 data_base_4 = get_data_base(r0_4, guest::cpu()->r[1], r2_5);
            gptr<Local_001add58_r0_6> r0_6 = gptr<Local_001add58_r0_6>(data_base_4 + 0x62138u);  // (from the original)
            r2_5 = r0_6->half_0;
            if (frame->half_8a0 == r2_5) {
                r2_5 = frame->byte_8b4;
                if (r2_5 == r0_6->byte_14) {
                    u32 r0_8 = memory_compare_100d2c(r5_1 + 0x8a2u, r0_6.addr() + 2u, 0x12u, guest::cpu()->r[3]);  // (from the original)
                    r2_5 = guest::cpu()->r[2];
                    if (r0_8 == 0) {
                        Villager__reset_for_move_in(villager, r5_1, 0u, 0u);
                        goto L_1adeac;
                    }
                }
            }
        }
        u32 r0_10 = FriendList__has_entry(*friend_list_instance, visiting_villagers + 0x2518u, r2_5);  // (from the original)
        if (r0_10 == 0) {
            Villager__clear_letters(r5_1);
        } else {
            u32 r4_2 = frame.at(0x2210).addr();  // (from the original)
            u32 r0_11 = Villager__first_named_item(r4_2, 0u);
            if (r0_11 != 0) {
                u32 record_identity_2 = record_identity_of_kind(r4_2);
                u32 r1_9 = guest::cpu()->r[1];
                u32 r2_8 = guest::cpu()->r[2];
                u32 r3_8 = guest::cpu()->r[3];
                if (record_identity_2 != 0) {
                    gptr<Local_001add58_ea_1> ea_1 = gptr<Local_001add58_ea_1>(record_identity_2 + 0x16u);  // (from the original)
                    r3_8 = ea_1->half_0;
                    r2_8 = frame->half_8a0;
                    r1_9 = r5_1 + 0x8a0u;  // (from the original)
                    if (r3_8 == r2_8) {
                        r2_8 = ea_1->byte_14;
                        r3_8 = frame->byte_8b4;
                        if (r2_8 == r3_8) {
                            u32 r0_14 = memory_compare_100d2c(ea_1.addr() + 2u, r1_9 + 2u, 0x12u, r3_8);  // (from the original)
                            r1_9 = guest::cpu()->r[1];
                            r2_8 = guest::cpu()->r[2];
                            r3_8 = guest::cpu()->r[3];
                            if (r0_14 == 0) {
                                goto L_1ade98;
                            }
                        }
                    }
                }
                Letter__clear(r4_2, r1_9, r2_8, r3_8);
            }
        }
L_1ade98:;
        Villager__reset_for_move_in(villager, r5_1, 1u, 0u);
    }
L_1adeac:;
    Player__destruct(r5_1);
}

}  // namespace d_001add58
GUEST_EXPORT_FRAMED(0x001add58, d_001add58::VisitingVillagers__receive, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001ae1e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the villager slot with a cleared trailing word and flag.
namespace d_001ae1e4 {

inline constexpr guest::Function<0x00113d15, u32(u32, u32, u32, u32)> Villager__Villager;

u32 VisitingVillager__construct(u32 visiting_villager, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = Villager__Villager(visiting_villager, r1, r2, r3);
    *gptr<u32>(r0_1 + 0x2518u) = 0;  // (from the original)
    *gptr<u8>((0x2518u | u32(s32(0x2518u) >> 0xb)) + r0_1) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_001ae1e4
GUEST_EXPORT_FRAMED(0x001ae1e4, d_001ae1e4::VisitingVillager__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_001aebdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the 10 elements of 0xc bytes.
namespace d_001aebdc {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 Array10x12__destroy(u32 array10x12) {
    destroy_array_elements(array10x12, 0x3084ccu, 0xcu, 0xau);  // (from the original)
    return array10x12;
}

}  // namespace d_001aebdc
GUEST_EXPORT_FRAMED(0x001aebdc, d_001aebdc::Array10x12__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_001aec00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the low nibble of the byte.
namespace d_001aec00 {

struct __attribute__((packed)) Object_001aec00_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_001aec00_0, byte_0, 0x0);


void set_low_nibble(gptr<Object_001aec00_0> arg0, u32 r1) {
    arg0->byte_0 = u8(u32(arg0->byte_0) & ~0xfu | r1 & 0xfu);  // (from the original)
}

}  // namespace d_001aec00
GUEST_EXPORT(0x001aec00, d_001aec00::set_low_nibble);

// f_001aed7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the packed record's kind to 0x6b, clears its flag and sets its mode to 2.
namespace d_001aed7c {

struct __attribute__((packed)) PackedRecord {
    u8 byte_0;
    u8 unknown_1[0x2];  // (not used here)
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(PackedRecord, byte_0, 0x0);
GUEST_OFFSET(PackedRecord, byte_3, 0x3);
GUEST_OFFSET(PackedRecord, byte_4, 0x4);


void PackedRecord__reset_6b(gptr<PackedRecord> packed_record) {
    packed_record->byte_0 = u8(u32(packed_record->byte_0) & ~0x7fu | 0x6bu);  // (from the original)
    packed_record->byte_3 = u8(u32(packed_record->byte_3) & ~0x80u);  // (from the original)
    u32 r1_1 = u32(packed_record->byte_4) & ~3u | 2u;
    packed_record->byte_4 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001aed7c
GUEST_EXPORT(0x001aed7c, d_001aed7c::PackedRecord__reset_6b);

// f_001aede0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Draws the rectangle of the tile range (in sixteenths).
namespace d_001aede0 {

struct __attribute__((packed)) Object_001aede0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_001aede0_0, word_c, 0xc);

inline constexpr guest::Function<0x004bb4bc, u32(u32, u32, u32)> Layout__update_pane_tree;

struct __attribute__((packed)) Frame_001aede0 {
    float float_0;
    float float_4;
    u8 unknown_8[0x10];  // (not read or written by name)
    float float_18;
    float float_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001aede0, float_0, 0x0);
GUEST_OFFSET(Frame_001aede0, float_4, 0x4);
GUEST_OFFSET(Frame_001aede0, float_18, 0x18);
GUEST_OFFSET(Frame_001aede0, float_1c, 0x1c);
GUEST_SIZE(Frame_001aede0, 0x24);

void draw_tile_rect_sixteenths(gptr<Object_001aede0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001aede0> frame;  // the original's stack frame
    float S0_1 = 0.0625f;
    u32 r3_1 = r3 + 1u;
    u32 r12_1 = *frame.at<u32>(0x28);  // (from the original)
    u32 r14 = frame.at(8).addr();
    frame->float_0 = float(s32(r1)) * S0_1;
    frame->float_4 = float(s32(r2)) * S0_1;
    float S1_1 = std::bit_cast<float>(r2);
    *gptr<u32>(r14) = std::bit_cast<u32>(float(s32(r3_1)) * S0_1);
    *gptr<u32>(r14 + 4) = std::bit_cast<u32>(float(s32(std::bit_cast<u32>(S1_1))) * S0_1);
    float S1_2 = std::bit_cast<float>(r1);
    r14 = frame.at(0x10).addr();  // (from the original)
    *gptr<u32>(r14) = std::bit_cast<u32>(float(s32(std::bit_cast<u32>(S1_2))) * S0_1);
    *gptr<u32>(r14 + 4) = std::bit_cast<u32>(float(s32(r12_1 + 1u)) * S0_1);
    float S2_1 = std::bit_cast<float>(r12_1 + 1u);
    float S1_3 = float(s32(r3_1)) * S0_1;
    float S0_2 = float(s32(std::bit_cast<u32>(S2_1))) * S0_1;
    frame->float_18 = S1_3;
    frame->float_1c = S0_2;
    u32 r0_1 = arg0->word_c;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_3;
    Layout__update_pane_tree(r0_1, 0u, frame.at(0).addr());
}

}  // namespace d_001aede0
GUEST_EXPORT_FRAMED(0x001aede0, d_001aede0::draw_tile_rect_sixteenths, 0x4000);  // pushes {lr} first, as the original

// f_001af458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the split load's part at 0xa18690.
namespace d_001af458 {

inline constexpr u32 split_list_a18690_address = 0x00a18690u;
inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> destroy_load_split_base_part;

void release_split_a18690() {
    destroy_load_split_base_part(split_list_a18690_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001af458
GUEST_EXPORT(0x001af458, d_001af458::release_split_a18690);

// f_001af914: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sorts the ids by their order (from the loaded table at 0xa18690).
namespace d_001af914 {

inline constexpr u32 split_list_a18690_address = 0x00a18690u;

u32 sort_ids_by_order_table(u32 r0_unused, u32 r1, u32 r2) {
    u32 res_1 = 0;
    u32 r0 = split_list_a18690_address;
    u32 r4 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    u32 r9 = r2 - 1u;
    u32 r3 = 0u;
    if (s32(r9) > 0) {
        do {
            u32 r5 = r1 + (r3 << 1);
            r0 = r3 + 1u;
            u32 r12 = r2 - r0;
            u32 r6 = *gptr<u16>(r4 + (u32(*gptr<u16>(r5)) << 1) - 0x4000u);  // (from the original)
            if (r12 != 0 && s32(r12) >= 0) {
                r0 = r1 + (r0 << 1);
            }
            if (s32(r12) > 0) {
                do {
                    u32 r7_1 = *gptr<u16>(r0);
                    if (*gptr<u16>(r4 + (r7_1 << 1) - 0x4000u) < r6) {  // (from the original)
                        u32 r6_1 = *gptr<u16>(r5);
                        *gptr<u16>(r5) = u16(r7_1);
                        *gptr<u16>(r0) = u16(r6_1);
                        r6 = *gptr<u16>(r4 + (u32(*gptr<u16>(r5)) << 1) - 0x4000u);  // (from the original)
                    }
                    res_1 = r12 - 1u;
                    r12 = res_1;
                    r0 += 2u;
                    guest::preempt();
                } while (res_1 != 0);
            }
            r3 += 1u;
            guest::preempt();
        } while (s32(r9) > s32(r3));
    }
    return r0;
}

}  // namespace d_001af914
GUEST_EXPORT_FRAMED(0x001af914, d_001af914::sort_ids_by_order_table, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_001afc70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the item's base form (normalized for its category) to the list when no equal item is in it yet, counting it.
namespace d_001afc70 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> Item__same_number_as;
inline constexpr guest::Function<0x006b9798, u32(u32)> Item__group;
inline constexpr guest::Function<0x006bb1a0, u32(u32, u32, u32, u32)> Item__next_stage_30xx;
inline constexpr guest::Function<0x0076a684, u32(u32)> Item__has_category_in_set_c;
inline constexpr guest::Function<0x0076aa04, u32(u32, u32)> Item__equals_ignoring_marks;
inline constexpr guest::Function<0x0076ae38, u32(u32)> Item__is_3057_or_3064_group;

struct __attribute__((packed)) Frame_001afc70 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001afc70, word_0, 0x0);
GUEST_SIZE(Frame_001afc70, 0x4);

void ItemList__add_unique_base_form(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001afc70> frame;  // the original's stack frame
    u32 r0_12 = 0;
    frame->word_0 = r3;
    u32 r5 = r1;
    u32 r6 = r2;
    Item__copy_b(frame.at(0).addr(), r3, r2, r3);
    u32 r0_3 = Item__has_category_in_set_c(frame.at(0).addr());
    u32 item = frame.at(0).addr();
    if (r0_3 == 0) {
        u32 r0_5 = Item__is_3057_or_3064_group(item);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            Item__next_stage_30xx(frame.at(0).addr(), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
    } else {
        Item__group(item);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    u32 r0_7 = *gptr<u32>(r6);
    u32 r4 = 0u;
    if (s32(r0_7) > 0) {
        do {
            u32 category_2 = Item__category(frame.at(0).addr(), r1, r2, r3);
            u32 r0_10 = r5 + (r4 << 2);
            u32 r1_3 = frame.at(0).addr();
            if (category_2 == 0x27u || category_2 == 0x24u) {  // (from the original)
                u32 r0_11 = Item__same_number_as(r0_10, r1_3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_11 != 0) {
                    return;
                }
                goto L_1afd14;
            }
            r0_12 = Item__equals_ignoring_marks(r0_10, r1_3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 == 0) {
                goto L_1afd14;
            }
            return;
L_1afd14:;
            r0_7 = *gptr<u32>(r6);
            r4 += 1u;
            guest::preempt();
        } while (s32(r0_7) > s32(r4));
    }
    Item__copy(r5 + (r0_7 << 2), frame.at(0).addr());
    *gptr<u32>(r6) = *gptr<u32>(r6) + 1u;
}

}  // namespace d_001afc70
GUEST_EXPORT_FRAMED(0x001afc70, d_001afc70::ItemList__add_unique_base_form, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001aff90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aff90 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline constexpr u32 stage_load_split_guard_address = 0x00953394u;
inline constexpr u32 global_0095339c_address = 0x0095339cu;
inline constexpr u32 split_list_a18690_address = 0x00a18690u;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline guest::global<u32, 0x00953394> stage_load_split_guard;
inline guest::global<u32, 0x00953398> stage_load_split_value;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;
inline constexpr guest::Function<0x005d46dc, u32(u32)> value_for_mode;

struct __attribute__((packed)) Frame_001aff90 {
    u32 object_0_vtable;
    u32 word_4;
};
GUEST_OFFSET(Frame_001aff90, object_0_vtable, 0x0);
GUEST_OFFSET(Frame_001aff90, word_4, 0x4);
GUEST_SIZE(Frame_001aff90, 0x8);

u32 start_stage_load_split(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001aff90> frame;  // the original's stack frame
    if ((*stage_load_split_guard & 1u) == 0) {
        u32 first_time = static_guard_acquire(stage_load_split_guard_address, r1, r2, r3);
        if (first_time != 0) {
            u32 value_2 = value_for_mode(first_time);
            *stage_load_split_value = gptr<u32>(global_0095339c_address)[value_2];
        }
    }
    frame->word_4 = *stage_load_split_value;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char_;
    u32 r0_3 = load_split_start(split_list_a18690_address, frame.at(0).addr(), *stage_heap, 0x80u);  // (from the original)
    return r0_3;
}

}  // namespace d_001aff90
GUEST_EXPORT_FRAMED(0x001aff90, d_001aff90::start_stage_load_split, 0x4010);  // pushes {r4, lr} first, as the original
