// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "player/slot_object.hpp"

#include <bit>

using guest::gptr;

// f_00660670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the player's target angle from the distance, mapped between two fixed lengths.
namespace d_00660670 {

inline constexpr guest::Function<0x006540d8, u32(u32, u32, u32)> SlotObject__set_target_x;

u32 AcPlayer__aim_by_distance(float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 fpsr = guest::cpu()->fpscr;
    float S2_1 = 0.0f;
    float S3_1 = 0.97f;
    float S1_1 = S3_1 * 3.2f;
    if (!((fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0)) >> 0x1d & 1)) {
        float S0_1 = S0 - S1_1;
        S1_1 = S3_1 * 5.4f - S1_1;
        S2_1 = S0_1 / S1_1;
    }
    float S0_2 = std::bit_cast<float>(vcvt_sz_f(S2_1 * 1792.0f));
    *frame.at<u16>(0) = u16(std::bit_cast<u32>(S0_2));
    u32 r1_1 = *frame.at<u32>(0);
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    frame.release();
    return SlotObject__set_target_x(guest::cpu()->r[0], r1_1, 0xf0u);
}

}  // namespace d_00660670
GUEST_EXPORT(0x00660670, d_00660670::AcPlayer__aim_by_distance);

// f_00660768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the local player: counts the action when the day's check allows it.
namespace d_00660768 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> get_counter_block;
inline constexpr guest::Function<0x00309bd4, u32(u32, u32)> DailyCheck__allows;
inline constexpr guest::Function<0x006b80cc, u32(u32, u32)> ClampedCounters__add_to_current_split_51_;

void AcPlayer__count_action(gptr<AcPlayer> ac_player, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = u32(ac_player->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return;
    }
    u32 counter_block = get_counter_block(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 now_2 = game_time_now(counter_block);
    if (DailyCheck__allows(9u, now_2) == 0) {
        return;
    }
    frame.release();
    ClampedCounters__add_to_current_split_51_(counter_block, 1u);
    return;
}

}  // namespace d_00660768
GUEST_EXPORT(0x00660768, d_00660768::AcPlayer__count_action);

// f_00660808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the tree at the position's cell and, when asked, marks the cell changed in both maps of 112x112.
namespace d_00660808 {

struct __attribute__((packed)) Local_00660808_r0_5 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00660808_r0_5, byte_0, 0x0);

struct __attribute__((packed)) Local_00660808_r0_7 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00660808_r0_7, byte_0, 0x0);

inline constexpr u32 changed_cells_a_address = 0x00aadaf4u;
inline constexpr u32 changed_cells_b_address = 0x00aae115u;
inline guest::global<u8, 0x00aae114> changed_cells_a_dirty;
inline guest::global<u8, 0x00aae735> changed_cells_b_dirty;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x00599544, u32(u32, u32, u32)> refresh_tree_at_position;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32)> cell_corner_with_height;

struct __attribute__((packed)) RefreshTreeAndMarkCellFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(RefreshTreeAndMarkCellFrame, word_0, 0x0);
GUEST_OFFSET(RefreshTreeAndMarkCellFrame, word_4, 0x4);
GUEST_SIZE(RefreshTreeAndMarkCellFrame, 0x18);

void refresh_tree_and_mark_cell(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<RefreshTreeAndMarkCellFrame> frame;  // the original's stack frame
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0, r3);
    u32 r4_1 = frame->word_0;
    u32 r5_1 = frame->word_4;
    cell_corner_with_height(frame.at(8).addr(), r4_1, r5_1);
    refresh_tree_at_position(frame.at(8).addr(), guest::cpu()->r[1], r5_1);
    u32 r1_3 = guest::cpu()->r[1];
    if (r1 != 0) {
        r1_3 = 1u;
        if (r4_1 < 0x70u && r5_1 < 0x70u) {
            u32 r0_4 = r4_1 + r5_1 * 0x70u;
            if (r0_4 < 0x3100u) {
                gptr<Local_00660808_r0_5> r0_5 = gptr<Local_00660808_r0_5>((r0_4 >> 3) + changed_cells_a_address);
                r0_5->byte_0 = u8(u32(r0_5->byte_0) | lsl_r(r1_3, (r0_4 & 7u) & 0xff));
                *changed_cells_a_dirty = u8(r1_3);
            }
        }
        if (r4_1 < 0x70u && r5_1 < 0x70u) {
            u32 r0_6 = r4_1 + r5_1 * 0x70u;
            if (r0_6 < 0x3100u) {
                gptr<Local_00660808_r0_7> r0_7 = gptr<Local_00660808_r0_7>((r0_6 >> 3) + changed_cells_b_address);
                r0_7->byte_0 = u8(u32(r0_7->byte_0) | lsl_r(r1_3, (r0_6 & 7u) & 0xff));
                *changed_cells_b_dirty = u8(r1_3);
            }
        }
    }
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_00660808
GUEST_EXPORT_FRAMED(0x00660808, d_00660808::refresh_tree_and_mark_cell, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006608d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the tree at the cell and, when asked, marks it changed in both maps of 112x112.
namespace d_006608d8 {

struct __attribute__((packed)) Local_006608d8_r0_4 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006608d8_r0_4, byte_0, 0x0);

struct __attribute__((packed)) Local_006608d8_r6_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006608d8_r6_1, byte_0, 0x0);

inline constexpr u32 changed_cells_a_address = 0x00aadaf4u;
inline constexpr u32 changed_cells_b_address = 0x00aae115u;
inline guest::global<u8, 0x00aae114> changed_cells_a_dirty;
inline guest::global<u8, 0x00aae735> changed_cells_b_dirty;
inline constexpr guest::Function<0x00599544, u32(u32, u32, u32)> refresh_tree_at_position;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> cell_corner_with_height;

void refresh_tree_and_mark_cell_at(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    cell_corner_with_height(frame.at(0).addr(), r0, r1, r3);
    refresh_tree_at_position(frame.at(0).addr(), r0, r1);
    if (r2 != 0) {
        u32 r0_3 = r0 + r1 * 0x70u;
        u32 r2_1 = r0_3 >> 3;
        u32 r12_1 = r0_3 & 7u;
        if (r0 < 0x70u && r1 < 0x70u && r0_3 < 0x3100u) {
            gptr<Local_006608d8_r6_1> r6_1 = gptr<Local_006608d8_r6_1>(r2_1 + changed_cells_a_address);
            r6_1->byte_0 = u8(u32(r6_1->byte_0) | lsl_r(1u, r12_1 & 0xff));
            *changed_cells_a_dirty = 1;
        }
        if (r0 < 0x70u && r1 < 0x70u && r0_3 < 0x3100u) {
            gptr<Local_006608d8_r0_4> r0_4 = gptr<Local_006608d8_r0_4>(r2_1 + changed_cells_b_address);
            r0_4->byte_0 = u8(u32(r0_4->byte_0) | lsl_r(1u, r12_1 & 0xff));
            *changed_cells_b_dirty = 1;
        }
    }
}

}  // namespace d_006608d8
GUEST_EXPORT_FRAMED(0x006608d8, d_006608d8::refresh_tree_and_mark_cell_at, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00660990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the local player: plays the sound.
namespace d_00660990 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);

inline constexpr guest::Function<0x0058a5d8, u32(u32, u32)> BgmQueue__push;
inline constexpr guest::Function<0x0058c19c, u32(u32)> return_constant_0x989bc0_;

void AcPlayer__play_local_sound(gptr<AcPlayer> ac_player, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = u32(ac_player->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = return_constant_0x989bc0_(r0_1);
    frame.release();
    BgmQueue__push(r0_2, r1);
    return;
}

}  // namespace d_00660990
GUEST_EXPORT(0x00660990, d_00660990::AcPlayer__play_local_sound);

// f_006609bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the local player: restores the camera mode and marks the camera changed.
namespace d_006609bc {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x6];  // (not used here)
    u8 byte_178;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_178, 0x178);

inline constexpr guest::Function<0x0068f114, u32(u32, u32, u32, u32)> CameraCtl__restore_mode_veneer;

u32 AcPlayer__restore_camera(gptr<AcPlayer> ac_player) {
    u32 r4_1 = ac_player.addr() + 0x171u;
    u32 r0_1 = u32(ac_player->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return r0_1;
    }
    CameraCtl__restore_mode_veneer(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = u32(ac_player->byte_178) | 0x80u;
    ac_player->byte_178 = u8(r0_2);
    return r0_2;
}

}  // namespace d_006609bc
GUEST_EXPORT_FRAMED(0x006609bc, d_006609bc::AcPlayer__restore_camera, 0x4010);  // pushes {r4, lr} first, as the original

// f_006609ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the local player: requests camera mode 0xc and marks the camera changed.
namespace d_006609ec {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x6];  // (not used here)
    u8 byte_178;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_178, 0x178);

inline constexpr guest::Function<0x0068f130, u32(u32)> CameraCtl__request_mode_c;

void AcPlayer__request_camera_mode_c(gptr<AcPlayer> ac_player) {
    u32 r4_1 = ac_player.addr() + 0x171u;
    if ((u32(ac_player->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    CameraCtl__request_mode_c(ac_player.addr());
    ac_player->byte_178 = u8(u32(ac_player->byte_178) | 0x80u);
}

}  // namespace d_006609ec
GUEST_EXPORT_FRAMED(0x006609ec, d_006609ec::AcPlayer__request_camera_mode_c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00660a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the local player: requests camera mode 6 and marks the camera changed.
namespace d_00660a1c {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x6];  // (not used here)
    u8 byte_178;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_178, 0x178);

inline constexpr guest::Function<0x0068f168, u32(u32)> CameraCtl__request_mode_6;

void AcPlayer__request_camera_mode_6(gptr<AcPlayer> ac_player) {
    u32 r4_1 = ac_player.addr() + 0x171u;
    if ((u32(ac_player->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    CameraCtl__request_mode_6(ac_player.addr());
    ac_player->byte_178 = u8(u32(ac_player->byte_178) | 0x80u);
}

}  // namespace d_00660a1c
GUEST_EXPORT_FRAMED(0x00660a1c, d_00660a1c::AcPlayer__request_camera_mode_6, 0x4010);  // pushes {r4, lr} first, as the original

// f_00660c10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to the action at the position.
namespace d_00660c10 {

struct __attribute__((packed)) Local_00660c10_ea_1 {
    u32 ac_player;
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
    u32 word_34;
};
GUEST_OFFSET(Local_00660c10_ea_1, ac_player, 0x0);
GUEST_OFFSET(Local_00660c10_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00660c10_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00660c10_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00660c10_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00660c10_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00660c10_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00660c10_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00660c10_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_00660c10_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_00660c10_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_00660c10_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_00660c10_ea_1, word_30, 0x30);
GUEST_OFFSET(Local_00660c10_ea_1, word_34, 0x34);

struct __attribute__((packed)) Local_00660c10_ea_2 {
    u8 byte_0;
    u8 byte_1;
    u32 word_2;
    u8 unknown_6[0x8];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Local_00660c10_ea_2, byte_0, 0x0);
GUEST_OFFSET(Local_00660c10_ea_2, byte_1, 0x1);
GUEST_OFFSET(Local_00660c10_ea_2, word_2, 0x2);
GUEST_OFFSET(Local_00660c10_ea_2, byte_e, 0xe);

struct __attribute__((packed)) Local_00660c10_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_00660c10_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00660c10_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00660c10_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_00660c10_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_00660c10_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_00660c10_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_00660c10_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_00660c10_ea_3, word_1c, 0x1c);
GUEST_OFFSET(Local_00660c10_ea_3, word_24, 0x24);

struct __attribute__((packed)) Local_00660c10_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00660c10_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_00660c10_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_00660c10_r1_1, word_8, 0x8);
GUEST_OFFSET(Local_00660c10_r1_1, word_c, 0xc);

inline constexpr u32 origin_x_address = 0x00ae5658u;
inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) AcPlayerStartActionAtFrame {
    u32 player;
    u8 unknown_4[0x34];  // (not read or written by name)
};
GUEST_OFFSET(AcPlayerStartActionAtFrame, player, 0x0);
GUEST_SIZE(AcPlayerStartActionAtFrame, 0x38);

void AcPlayer__start_action_at(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<AcPlayerStartActionAtFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00660c10_ea_1> ea_1 = gptr<Local_00660c10_ea_1>(frame.at(0).addr());
    ea_1->ac_player = ac_player;
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
    ea_1->word_30 = r12;
    ea_1->word_34 = r14;
    gptr<Local_00660c10_r1_1> r1_1 = gptr<Local_00660c10_r1_1>(frame.at(0x38).addr());
    u32 r4_1 = r1_1->word_0;
    u32 r5_1 = r1_1->word_4;
    u32 r6_1 = r1_1->word_8;
    u32 r7_1 = r1_1->word_c;
    u32 params = state_params_with_8bc(frame->player, r1_1.addr(), r2, r3);
    gptr<Local_00660c10_ea_2> ea_2 = gptr<Local_00660c10_ea_2>(params + 0xeu);
    ea_2->byte_0 = u8(r1);
    ea_2->byte_1 = u8(r2);
    ea_2->word_2 = *gptr<u32>(r4_1);
    ea_2->byte_e = u8((((u32(ea_2->byte_e) & ~8u | r7_1 << 3) & ~1u | r3) & ~2u | r5_1 << 1) & ~4u | r6_1 << 2);
    float3_xz_to_short2_a(ea_2.addr() + 6u, origin_x_address);
    u32 player = frame->player;
    gptr<Local_00660c10_ea_3> ea_3 = gptr<Local_00660c10_ea_3>(frame.at(0x10).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_1 = ea_3->word_10;
    u32 r9_1 = ea_3->word_14;
    u32 r10_1 = ea_3->word_18;
    u32 r11_1 = ea_3->word_1c;
    r14 = ea_3->word_24;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    frame.release();
    AcPlayer_rec__change_state(player, 0x58u, params, 0u);
    return;
}

}  // namespace d_00660c10
GUEST_EXPORT(0x00660c10, d_00660c10::AcPlayer__start_action_at);

// f_00660d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to the item's action at the position.
namespace d_00660d78 {

struct __attribute__((packed)) Local_00660d78_ea_1 {
    u32 ac_player;
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
GUEST_OFFSET(Local_00660d78_ea_1, ac_player, 0x0);
GUEST_OFFSET(Local_00660d78_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00660d78_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00660d78_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00660d78_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00660d78_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00660d78_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00660d78_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00660d78_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_00660d78_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_00660d78_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_00660d78_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_00660d78_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_00660d78_ea_2 {
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
GUEST_OFFSET(Local_00660d78_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00660d78_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00660d78_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00660d78_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_00660d78_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_00660d78_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_00660d78_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_00660d78_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_00660d78_ea_2, word_20, 0x20);

struct __attribute__((packed)) Params {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Params, byte_13, 0x13);
GUEST_OFFSET(Params, byte_14, 0x14);

struct __attribute__((packed)) Local_00660d78_r2_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00660d78_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_00660d78_r2_1, word_4, 0x4);
GUEST_OFFSET(Local_00660d78_r2_1, word_8, 0x8);
GUEST_OFFSET(Local_00660d78_r2_1, word_c, 0xc);

struct __attribute__((packed)) Local_00660d78_r4_1 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x2];  // (not used here)
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_00660d78_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00660d78_r4_1, byte_4, 0x4);
GUEST_OFFSET(Local_00660d78_r4_1, byte_7, 0x7);
GUEST_OFFSET(Local_00660d78_r4_1, byte_8, 0x8);

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x00596ab0, u32(u32)> replace_number_c9;
inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) AcPlayerStartItemActionFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(AcPlayerStartItemActionFrame, word_0, 0x0);
GUEST_OFFSET(AcPlayerStartItemActionFrame, word_4, 0x4);
GUEST_OFFSET(AcPlayerStartItemActionFrame, word_8, 0x8);
GUEST_SIZE(AcPlayerStartItemActionFrame, 0x38);

u32 AcPlayer__start_item_action(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<AcPlayerStartItemActionFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00660d78_ea_1> ea_1 = gptr<Local_00660d78_ea_1>(frame.at(4).addr());
    ea_1->ac_player = ac_player;
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
    gptr<Local_00660d78_r2_1> r2_1 = gptr<Local_00660d78_r2_1>(frame.at(0x38).addr());
    u32 r5_1 = r2_1->word_0;
    u32 r6_1 = r2_1->word_4;
    u32 r7_1 = r2_1->word_8;
    u32 r11_1 = r2_1->word_c;
    u32 r0_1 = frame->word_4;
    gptr<Params> params = gptr<Params>(state_params_with_8bc(r0_1, r1, r2_1.addr(), r3));
    gptr<Local_00660d78_r4_1> r4_1 = gptr<Local_00660d78_r4_1>(params.addr() + 0xeu);
    Item__copy_b(frame.at(0).addr(), frame->word_8);
    replace_number_c9(frame.at(0).addr());
    r4_1->word_0 = frame->word_0;
    r4_1->byte_4 = u8(r2);
    params->byte_13 = u8(r3);
    params->byte_14 = u8(r5_1);
    r4_1->byte_7 = u8(r6_1);
    r4_1->byte_8 = u8(r11_1);
    float3_xz_to_short2_a(r4_1.addr() + 9u, r7_1);
    u32 r0_7 = AcPlayer_rec__change_state(frame->word_4, 0x3cu, params.addr(), 0u);
    gptr<Local_00660d78_ea_2> ea_2 = gptr<Local_00660d78_ea_2>(frame.at(0x14).addr());
    u32 r4_2 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_2 = ea_2->word_8;
    u32 r7_2 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    u32 r9_1 = ea_2->word_14;
    u32 r10_1 = ea_2->word_18;
    u32 r11_2 = ea_2->word_1c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_2;
    return r0_7;
}

}  // namespace d_00660d78
GUEST_EXPORT(0x00660d78, d_00660d78::AcPlayer__start_item_action);

// f_00664a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the item as pending (when it is a plain item that is not a pocket kind) and records the drop position.
namespace d_00664a44 {

struct __attribute__((packed)) Local_00664a44_r0_5 {
    u8 unknown_0[0x80];  // (not used here)
    u16 half_80;
    u16 half_82;
};
GUEST_OFFSET(Local_00664a44_r0_5, half_80, 0x80);
GUEST_OFFSET(Local_00664a44_r0_5, half_82, 0x82);

struct __attribute__((packed)) Local_00664a44_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00664a44_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_00664a44_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_00664a44_r5_1, word_8, 0x8);

inline constexpr guest::Function<0x00216420, u32(u32)> set_pending_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcb10, u32(u32, u32)> Item__is_item;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb9c, u32(u32)> item_flags_bit_15;
inline constexpr guest::Function<0x00768174, u32(u32)> Item__is_kind_2;

void AcPlayer__take_pending_item(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    u32 is_item = Item__is_item(r1, r1);
    gptr<Local_00664a44_r5_1> r5_1 = gptr<Local_00664a44_r5_1>(ac_player + 0x988u);
    if (is_item == 0) {
        if (Item__is_kind_2(r1) == 0) {
            r5_1->word_0 = *gptr<u32>(ac_player + 0x14u);
            r5_1->word_4 = *gptr<u32>(ac_player + 0x18u);
            r5_1->word_8 = *gptr<u32>(ac_player + 0x1cu);
            return;
        }
    }
    u32 r0_3 = item_flags_bit_15(r1);
    if (r0_3 == 0 && *gptr<u8>(ac_player + 0x984u) == 0) {
        u32 category = Item__category(r1);
        if (category != 0x3eu && category != 0x3fu) {
            set_pending_item(r1);
            gptr<Local_00664a44_r0_5> r0_5 = gptr<Local_00664a44_r0_5>(ac_player + 0x900u);
            *gptr<u8>(ac_player + 0x984u) = 1;
            r0_5->half_80 = u16(r2);
            r0_5->half_82 = u16(r3);
            Item__copy(ac_player + 0x994u, r1);
            *gptr<u16>(ac_player + 0x5deu) = 0;
            r5_1->word_0 = *gptr<u32>(ac_player + 0x14u);
            r5_1->word_4 = *gptr<u32>(ac_player + 0x18u);
            r5_1->word_8 = *gptr<u32>(ac_player + 0x1cu);
            guest::cpu()->r[1] = 0u;
            return;
        }
    }
    r5_1->word_0 = *gptr<u32>(ac_player + 0x14u);
    r5_1->word_4 = *gptr<u32>(ac_player + 0x18u);
    r5_1->word_8 = *gptr<u32>(ac_player + 0x1cu);
}

}  // namespace d_00664a44
GUEST_EXPORT_FRAMED(0x00664a44, d_00664a44::AcPlayer__take_pending_item, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00664be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the move (mode 4) from the player's position to the target.
namespace d_00664be4 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x47c];  // (not used here)
    u32 word_47c;
    u32 word_480;
    u8 unknown_484[0x3ec];  // (not used here)
    u8 byte_870;
    u8 unknown_871[0x3];  // (not used here)
    u32 word_874;
    u32 word_878;
    u32 word_87c;
    u32 word_880;
};
GUEST_OFFSET(AcPlayer, word_47c, 0x47c);
GUEST_OFFSET(AcPlayer, word_480, 0x480);
GUEST_OFFSET(AcPlayer, byte_870, 0x870);
GUEST_OFFSET(AcPlayer, word_874, 0x874);
GUEST_OFFSET(AcPlayer, word_878, 0x878);
GUEST_OFFSET(AcPlayer, word_87c, 0x87c);
GUEST_OFFSET(AcPlayer, word_880, 0x880);

struct __attribute__((packed)) AcPlayerSetMoveTargetArg1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(AcPlayerSetMoveTargetArg1, word_0, 0x0);
GUEST_OFFSET(AcPlayerSetMoveTargetArg1, word_8, 0x8);


u32 AcPlayer__set_move_target(gptr<AcPlayer> ac_player, gptr<AcPlayerSetMoveTargetArg1> arg1) {
    ac_player->byte_870 = 4;
    ac_player->word_874 = ac_player->word_47c;
    ac_player->word_878 = ac_player->word_480;
    ac_player->word_87c = arg1->word_0;
    u32 r0_1 = arg1->word_8;
    ac_player->word_880 = r0_1;
    return r0_1;
}

}  // namespace d_00664be4
GUEST_EXPORT(0x00664be4, d_00664be4::AcPlayer__set_move_target);

// f_00664e50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the local player: fades the music.
namespace d_00664e50 {

inline guest::global<u32, 0x00886b60> global_00886b60;
inline constexpr guest::Function<0x0058a72c, u32(u32, u32)> fade_bgm_9e;
inline constexpr guest::Function<0x0058c19c, u32(u32)> return_constant_0x989bc0_;

void AcPlayer__fade_bgm(gptr<SlotObject> slot_object, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = u32(slot_object->flags_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = return_constant_0x989bc0_(r0_1);
    u32 r1_1 = *global_00886b60;
    frame.release();
    fade_bgm_9e(r0_2, r1_1);
    return;
}

}  // namespace d_00664e50
GUEST_EXPORT(0x00664e50, d_00664e50::AcPlayer__fade_bgm);

// f_00664e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the local player: resets the camera and marks it changed.
namespace d_00664e80 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x6];  // (not used here)
    u8 byte_178;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_178, 0x178);

inline constexpr guest::Function<0x0068f208, u32(u32)> CameraCtl__call_1a5f98;

void AcPlayer__reset_camera(gptr<AcPlayer> ac_player) {
    u32 r4_1 = ac_player.addr() + 0x171u;
    if ((u32(ac_player->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    CameraCtl__call_1a5f98(ac_player.addr());
    ac_player->byte_178 = u8(u32(ac_player->byte_178) | 0x80u);
}

}  // namespace d_00664e80
GUEST_EXPORT_FRAMED(0x00664e80, d_00664e80::AcPlayer__reset_camera, 0x4010);  // pushes {r4, lr} first, as the original

// f_00665130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x19.
namespace d_00665130 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

void AcPlayer_rec__request_state_25() {
    AcPlayer_rec__change_state(guest::cpu()->r[0], 0x19u, 0u, 0u);
    return;
}

}  // namespace d_00665130
GUEST_EXPORT(0x00665130, d_00665130::AcPlayer_rec__request_state_25);

// f_006651b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the scene allows it: changes the player's state to 0x9d toward the target; else waits.
namespace d_006651b4 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
};
GUEST_OFFSET(AcPlayer, byte_174, 0x174);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32)> state_params_with_8bc;
inline constexpr guest::Function<0x0067c674, u32(u32, u32, u32, u32)> AcPlayer__start_wait;
inline constexpr guest::Function<0x00764be4, u32(u32, u32, u32, u32)> AcPlayer__target_position;

struct __attribute__((packed)) AcPlayerStartState9dFrame {
    u8 unknown_0[0xc];  // (not read or written by name)
    u16 half_c;
    u8 unknown_e[0x2];  // (not read or written by name)
};
GUEST_OFFSET(AcPlayerStartState9dFrame, half_c, 0xc);
GUEST_SIZE(AcPlayerStartState9dFrame, 0x10);

u32 AcPlayer__start_state_9d(gptr<AcPlayer> ac_player, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<AcPlayerStartState9dFrame> frame;  // the original's stack frame
    u32 r0_1 = ac_player->byte_174;
    if ((r0_1 & 1u) == 0) {
        u32 scene_2 = current_scene_id(r0_1, r1, r2, r3);
        u32 scene_flagged_2 = scene_has_flags(0x400u, scene_2);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (scene_flagged_2 == 0) {
            AcPlayer__target_position(frame.at(0).addr(), ac_player.addr(), r2, r3);
            frame->half_c = 0;
            u32 params = state_params_with_8bc(ac_player.addr());
            float3_xz_to_short2_a(params + 0xfu, frame.at(0).addr());
            *gptr<u8>(params + 0x13u) = u8(u32(s32(u32(frame->half_c)) >> 8));
            *gptr<u8>(params + 0xeu) = u8(r1);
            return AcPlayer_rec__change_state(ac_player.addr(), 0x9du, params, 0u);
        }
    }
    float S0_7 = 8.0f;
    guest::cpu()->s[0] = S0_7;
    return AcPlayer__start_wait(ac_player.addr(), 0u, r2, r3);
}

}  // namespace d_006651b4
GUEST_EXPORT_FRAMED(0x006651b4, d_006651b4::AcPlayer__start_state_9d, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00665344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0x5f with the three values.
namespace d_00665344 {

struct __attribute__((packed)) Local_00665344_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_00665344_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_00665344_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_00665344_ea_1, byte_2, 0x2);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer__start_state_5f(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 params = state_params_with_8bc(ac_player, r1, r2, r3);
    gptr<Local_00665344_ea_1> ea_1 = gptr<Local_00665344_ea_1>(params + 0xeu);
    ea_1->byte_0 = u8(r1);
    ea_1->byte_1 = u8(r2);
    ea_1->byte_2 = u8(r3);
    frame.release();
    return AcPlayer_rec__change_state(ac_player, 0x5fu, params, 0u);
}

}  // namespace d_00665344
GUEST_EXPORT(0x00665344, d_00665344::AcPlayer__start_state_5f);

// f_00665380: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0x3b with the three values, unless already in it.
namespace d_00665380 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(AcPlayer, byte_1a9, 0x1a9);

struct __attribute__((packed)) Local_00665380_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_00665380_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_00665380_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_00665380_ea_1, byte_2, 0x2);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer__start_state_3b(gptr<AcPlayer> ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (ac_player->byte_1a9 == 0x3bu) {
    } else {
        u32 params = state_params_with_8bc(ac_player.addr(), r1, r2, r3);
        gptr<Local_00665380_ea_1> ea_1 = gptr<Local_00665380_ea_1>(params + 0xeu);
        ea_1->byte_0 = u8(r2);
        ea_1->byte_1 = u8(r3);
        ea_1->byte_2 = u8(r1);
        frame.release();
        return AcPlayer_rec__change_state(ac_player.addr(), 0x3bu, params, 0u);
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00665380
GUEST_EXPORT(0x00665380, d_00665380::AcPlayer__start_state_3b);

// f_006654ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0x3a with the value, toward the position (or the origin) and the angle.
namespace d_006654ac {

struct __attribute__((packed)) Local_006654ac_r4_1 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Local_006654ac_r4_1, byte_5, 0x5);

inline constexpr u32 origin_x_address = 0x00ae5658u;
inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer__start_state_3a(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 params = state_params_with_8bc(ac_player, r1, r2, r3);
    gptr<Local_006654ac_r4_1> r4_1 = gptr<Local_006654ac_r4_1>(params + 0xeu);
    *gptr<u8>(params + 0xeu) = u8(r1);
    u32 r5_1 = r3 >> 8u & 0xffu;
    if (r2 != 0) {
        float3_xz_to_short2_a(r4_1.addr() + 1u, r2);
        r4_1->byte_5 = u8(r5_1);
    } else {
        float3_xz_to_short2_a(r4_1.addr() + 1u, origin_x_address);
        r4_1->byte_5 = u8(r5_1);
    }
    frame.release();
    return AcPlayer_rec__change_state(ac_player, 0x3au, params, 0u);
}

}  // namespace d_006654ac
GUEST_EXPORT(0x006654ac, d_006654ac::AcPlayer__start_state_3a);

// f_00665560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the player is not hidden and over water: replaces the effect with the splash at the water's surface, and plays
// its sound.
namespace d_00665560 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x173];  // (not used here)
    u8 byte_173;
    u8 unknown_174[0x854];  // (not used here)
    u32 word_9c8;
    u32 word_9cc;
};
GUEST_OFFSET(AcPlayer, byte_173, 0x173);
GUEST_OFFSET(AcPlayer, word_9c8, 0x9c8);
GUEST_OFFSET(AcPlayer, word_9cc, 0x9cc);

struct __attribute__((packed)) Local_00665560_r0_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00665560_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_00665560_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_00665560_r0_3, float_8, 0x8);

struct __attribute__((packed)) Local_00665560_r5_1 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Local_00665560_r5_1, float_0, 0x0);
GUEST_OFFSET(Local_00665560_r5_1, float_8, 0x8);

inline constexpr u32 effect_spawn_params_address = 0x00975beeu;
inline constexpr u32 effect_spawn_context_address = 0x00ae5664u;
inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> EffectHandle__start;
inline constexpr guest::Function<0x002e62b4, u32(u32, u32, u32)> EffectHandle__set_emitter_callback;
inline constexpr guest::Function<0x002e6368, u32(u32, u32)> EffectHandle__kill;
inline constexpr guest::Function<0x004eb6c4, u32(u32, u32, u32, u32)> EffectSlots__start;
inline constexpr guest::Function<0x005ce12c, u32(u32, u32, u32, u32)> item_kind_at_position;
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32)> water_surface_at;

struct __attribute__((packed)) AcPlayerStartSplashEffectFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not read or written by name)
};
GUEST_OFFSET(AcPlayerStartSplashEffectFrame, word_0, 0x0);
GUEST_OFFSET(AcPlayerStartSplashEffectFrame, word_4, 0x4);
GUEST_OFFSET(AcPlayerStartSplashEffectFrame, word_8, 0x8);
GUEST_OFFSET(AcPlayerStartSplashEffectFrame, word_c, 0xc);
GUEST_SIZE(AcPlayerStartSplashEffectFrame, 0x20);

void AcPlayer__start_splash_effect(gptr<AcPlayer> ac_player, u32 r1_unused, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<AcPlayerStartSplashEffectFrame> frame;  // the original's stack frame
    if ((u32(ac_player->byte_173) >> 7) == 0) {
        gptr<Local_00665560_r5_1> r5_1 = gptr<Local_00665560_r5_1>(ac_player.addr() + 0x14u);
        u32 r0_1 = item_kind_at_position(r5_1.addr(), 0u, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_1 != 0) {
            u32 r0_2 = ac_player->word_9c8;
            u32 effect_handle = ac_player.addr() + 0x9bcu;
            if (r0_2 != 0) {
                u32 r1_1 = ac_player->word_9cc;
                if (r1_1 == *gptr<u32>(r0_2 + 0xcu)) {
                    EffectHandle__kill(effect_handle, r1_1);
                    S0 = guest::cpu()->s[0];
                    S1 = guest::cpu()->s[1];
                }
            }
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            water_surface_at(r5_1.addr(), 0u);
            float S0_1 = guest::cpu()->s[0];
            float S2_2 = r5_1->float_8;
            float S0_2 = r5_1->float_0;
            gptr<Local_00665560_r0_3> r0_3 = gptr<Local_00665560_r0_3>(frame.at(0x10).addr());
            r0_3->float_0 = S0_2;
            r0_3->float_4 = S0_1;
            r0_3->float_8 = S2_2;
            frame->word_8 = 0;
            frame->word_4 = 1;
            frame->word_0 = 0xae5664;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S0_1;
            guest::cpu()->s[2] = S2_2;
            if (EffectHandle__start(effect_handle, 0x140u, frame.at(0x10).addr(), effect_spawn_params_address) != 0) {
                EffectHandle__set_emitter_callback(effect_handle, 0x683384u, ~0u);
            }
            frame->word_8 = 0;
            frame->word_4 = 1;
            frame->word_0 = 0xae5664;
            frame->word_c = 0;
            EffectSlots__start(ac_player.addr() + 0x9d4u, 9u, frame.at(0x10).addr(), effect_spawn_params_address);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
        }
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_00665560
GUEST_EXPORT_FRAMED(0x00665560, d_00665560::AcPlayer__start_splash_effect, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00668740: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the player's state 0x199: turns, spawns its effect at the hand, then idles.
namespace d_00668740 {

struct __attribute__((packed)) AcPlayerRec {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0xf6];  // (not used here)
    u32 word_268;
    u8 unknown_26c[0x354];  // (not used here)
    u16 half_5c0;
    u8 unknown_5c2[0xe6e];  // (not used here)
    u32 word_1430;
    u32 word_1434;
};
GUEST_OFFSET(AcPlayerRec, byte_171, 0x171);
GUEST_OFFSET(AcPlayerRec, word_268, 0x268);
GUEST_OFFSET(AcPlayerRec, half_5c0, 0x5c0);
GUEST_OFFSET(AcPlayerRec, word_1430, 0x1430);
GUEST_OFFSET(AcPlayerRec, word_1434, 0x1434);

struct __attribute__((packed)) Local_00668740_r0_2 {
    u16 half_0;
};
GUEST_OFFSET(Local_00668740_r0_2, half_0, 0x0);

inline constexpr guest::Function<0x00207740, u32(u32, u32, u32, u32)> Effect__spawn_kind;
inline constexpr guest::Function<0x002e5bec, u32(u32, u32)> EffectHandle__set_matrix;
inline constexpr guest::Function<0x0064f508, u32(u32, u32, u32, u32)> AcPlayer__start_idle_with;
inline constexpr guest::Function<0x006538e0, u32(u32, u32, u32, u32)> SlotObject__turn_to_angle;
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> Model__joint_position;

u32 AcPlayer_rec__state_199_update(gptr<AcPlayerRec> ac_player_rec, u32 r1_unused, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    if (ac_player_rec->half_5c0 == 0) {
        u32 r2_1 = ac_player_rec->word_268;
        Model__joint_position(ac_player_rec.addr() + 0x1b4u, frame.at(0).addr(), r2_1, 0u);
        u32 r1_2 = ac_player_rec->word_1430;
        u32 effect_handle = ac_player_rec.addr() + 0x1424u;
        if (r1_2 != 0 && ac_player_rec->word_1434 == *gptr<u32>(r1_2 + 0xcu)) {
            EffectHandle__set_matrix(effect_handle, frame.at(0).addr());
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
        } else {
            Effect__spawn_kind(effect_handle, 0x12du, frame.at(0).addr(), 0u);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
        }
    }
    gptr<Local_00668740_r0_2> r0_2 = gptr<Local_00668740_r0_2>(ac_player_rec.addr() + 0x5c0u);
    u32 r1_4 = r0_2->half_0;
    if (r1_4 != 0) {
        r1_4 = r1_4 >= 1u ? r1_4 - 1u : 0u;
        r0_2->half_0 = u16(r1_4);
    }
    u32 r0_3 = u32(ac_player_rec->byte_171) >> 5u & 1u;
    if (r0_3 != 0) {
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        return r0_3;
    }
    guest::cpu()->s[0] = S0;
    SlotObject__turn_to_angle(ac_player_rec.addr(), 0u, r2, r3);
    float S0_2 = 0.2f;
    guest::cpu()->s[0] = S0_2;
    frame.release();
    return AcPlayer__start_idle_with(ac_player_rec.addr(), 0u, r2, guest::cpu()->r[3]);
}

}  // namespace d_00668740
GUEST_EXPORT(0x00668740, d_00668740::AcPlayer_rec__state_199_update);

// f_00668fc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A quarter of the step length (in s0); the table's address.
namespace d_00668fc4 {


u32 step_length_quarter() {
    float S1_1 = 0.25f;
    float S0_1 = 0.97f * 3.2f * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x8868ecu;
}

}  // namespace d_00668fc4
GUEST_EXPORT(0x00668fc4, d_00668fc4::step_length_quarter);

// f_0066a074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Drops the pending item, if any, and resets the drop position.
namespace d_0066a074 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x5de];  // (not used here)
    u16 half_5de;
    u8 unknown_5e0[0x3a0];  // (not used here)
    u16 half_980;
    u16 half_982;
    u8 byte_984;
    u8 unknown_985[0x3];  // (not used here)
    u32 word_988;
    u32 word_98c;
    u32 word_990;
};
GUEST_OFFSET(AcPlayer, half_5de, 0x5de);
GUEST_OFFSET(AcPlayer, half_980, 0x980);
GUEST_OFFSET(AcPlayer, half_982, 0x982);
GUEST_OFFSET(AcPlayer, byte_984, 0x984);
GUEST_OFFSET(AcPlayer, word_988, 0x988);
GUEST_OFFSET(AcPlayer, word_98c, 0x98c);
GUEST_OFFSET(AcPlayer, word_990, 0x990);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 origin_x_address = 0x00ae5658u;
inline constexpr u32 origin_y_address = 0x00ae565cu;
inline guest::global<u32, 0x00ae5658> origin_x;
inline guest::global<u32, 0x00ae565c> origin_y;
inline guest::global<u32, 0x00ae5660> origin_z;
inline constexpr guest::Function<0x00216468, u32(u32)> clear_pending_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;

void AcPlayer__drop_pending_item(gptr<AcPlayer> ac_player, u32 r1) {
    if (ac_player->byte_984 != 0) {
        clear_pending_item(ac_player.addr());
        u32 r1_1 = ~0u;
        ac_player->byte_984 = 0;
        ac_player->half_980 = u16(r1_1);
        ac_player->half_982 = u16(r1_1);
        Item__copy(ac_player.addr() + 0x994u, empty_item_address);
        ac_player->half_5de = 0xf;
        ac_player->byte_984 = 0;
        ac_player->word_988 = *origin_x;
        r1 = *origin_y;
        ac_player->word_98c = r1;
        ac_player->word_990 = *origin_z;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0066a074
GUEST_EXPORT_FRAMED(0x0066a074, d_0066a074::AcPlayer__drop_pending_item, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0066a0f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the local player: counts the catch in their counter when it qualifies.
namespace d_0066a0f4 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x0023d99c, u32(u32)> Player__has_badge_progress;
inline constexpr guest::Function<0x0023e1e0, u32(u32)> player_has_unlocked_item_of_category_98;
inline constexpr guest::Function<0x0023e254, u32(u32)> holder_has_item_with_special_rule;
inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32, u32)> add_to_player_counter;
inline constexpr guest::Function<0x002fe8a4, u32(u32)> find_by_id_2fe8a4;
inline constexpr guest::Function<0x0064c5e0, u32(u32)> registry_is_disabled;
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> Player__counter;

void AcPlayer__count_catch(gptr<AcPlayer> ac_player, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if ((u32(ac_player->byte_171) >> 5u & 1u) == 0 || r1 != 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 counter_2 = Player__counter(0xdu, 1u, r2, guest::cpu()->r[3]);
    if (registry_is_disabled(counter_2) != 0) {
        return;
    }
    u32 r0_3 = ac_player->byte_1ac;
    u32 r0_4 = find_by_id_2fe8a4(r0_3);
    if (r0_4 != 0) {
        if (Player__has_badge_progress(r0_4) != 0) {
            frame.release();
            add_to_player_counter(r0_4 + 0x8ae0u, 0x20u, 1u, guest::cpu()->r[3]);
            return;
        }
    }
    if (holder_has_item_with_special_rule(r0_4) == 0) {
        if (player_has_unlocked_item_of_category_98(r0_4) == 0) {
            return;
        }
    }
    frame.release();
    add_to_player_counter(r0_4 + 0x8ae0u, 0x20u, 1u, guest::cpu()->r[3]);
    return;
}

}  // namespace d_0066a0f4
GUEST_EXPORT(0x0066a0f4, d_0066a0f4::AcPlayer__count_catch);

// f_0066a1d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the move (mode 8) to the cell's corner and, for the local player with a qualifying item, counts it.
namespace d_0066a1d0 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
    u8 unknown_1ad[0x2cf];  // (not used here)
    u32 word_47c;
    u32 word_480;
    u8 unknown_484[0x3ec];  // (not used here)
    u8 byte_870;
    u8 unknown_871[0x3];  // (not used here)
    u32 word_874;
    u32 word_878;
    u32 word_87c;
    u32 word_880;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_1ac, 0x1ac);
GUEST_OFFSET(AcPlayer, word_47c, 0x47c);
GUEST_OFFSET(AcPlayer, word_480, 0x480);
GUEST_OFFSET(AcPlayer, byte_870, 0x870);
GUEST_OFFSET(AcPlayer, word_874, 0x874);
GUEST_OFFSET(AcPlayer, word_878, 0x878);
GUEST_OFFSET(AcPlayer, word_87c, 0x87c);
GUEST_OFFSET(AcPlayer, word_880, 0x880);

inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32)> add_to_player_counter;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x005c2dfc, u32(u32)> slot_value_is_local;
inline constexpr guest::Function<0x0064c5e0, u32(u32)> registry_is_disabled;
inline constexpr guest::Function<0x0065377c, u32(u32)> counter_block_of_slot_player;
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32, u32)> cell_corner;
inline constexpr guest::Function<0x006b7058, u32(u32, u32)> ClampedCounters__add_b;
inline constexpr guest::Function<0x0076c564, u32(u32, u32)> Item__is_id_7c_to_7f;

struct __attribute__((packed)) AcPlayerSetMoveToCellFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
};
GUEST_OFFSET(AcPlayerSetMoveToCellFrame, word_0, 0x0);
GUEST_OFFSET(AcPlayerSetMoveToCellFrame, word_8, 0x8);
GUEST_SIZE(AcPlayerSetMoveToCellFrame, 0xc);

void AcPlayer__set_move_to_cell(gptr<AcPlayer> ac_player, u32 r1, u32 r2, u32 item) {
    guest::StackFrameOf<AcPlayerSetMoveToCellFrame> frame;  // the original's stack frame
    ac_player->byte_870 = 8;
    ac_player->word_874 = ac_player->word_47c;
    ac_player->word_878 = ac_player->word_480;
    cell_corner(frame.at(0).addr(), r1, r2, item);
    ac_player->word_87c = frame->word_0;
    u32 r1_1 = frame->word_8;
    ac_player->word_880 = r1_1;
    if ((u32(ac_player->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    u32 r0_2 = Item__is_id_7c_to_7f(item, r1_1);
    if (r0_2 == 0) {
        return;
    }
    if (registry_is_disabled(r0_2) != 0) {
        return;
    }
    u32 r0_4 = ac_player->byte_1ac;
    u32 r0_5 = slot_value_is_local(r0_4);
    if (r0_5 != 0) {
        u32 r0_6 = ac_player->byte_1ac;
        r0_5 = counter_block_of_slot_player(r0_6);
        if (r0_5 != 0) {
            r0_5 = add_to_player_counter(r0_5, 3u, 1u);
        }
    }
    u32 counter_block = get_counter_block(r0_5);
    ClampedCounters__add_b(counter_block, 1u);
}

}  // namespace d_0066a1d0
GUEST_EXPORT_FRAMED(0x0066a1d0, d_0066a1d0::AcPlayer__set_move_to_cell, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0066a2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the keyed effect at the player's position on the water's surface.
namespace d_0066a2c8 {

struct __attribute__((packed)) Local_0066a2c8_r0_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0066a2c8_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_0066a2c8_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_0066a2c8_r0_3, float_8, 0x8);

inline constexpr guest::Function<0x004ee4c0, u32(u32, u32)> Model__set_world_matrix;
inline constexpr guest::Function<0x0052e294, u32(u32, u32, u32)> Matrix34__from_position_and_angles;
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32)> water_surface_at;
inline constexpr guest::Function<0x00745970, u32(u32, u32, u32, u32)> free_keyed_slot;

void AcPlayer__place_effect_at_water(gptr<SlotObject> slot_object, u32 r1, u32 r2, float S0, float S1, float S2) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    u32 effect_slot_ref = slot_object.addr() + 0x9d4u;
    if (free_keyed_slot(effect_slot_ref, r1, r2, guest::cpu()->r[3]) == 0) {
        return;
    }
    water_surface_at(slot_object.addr() + 0x14u, 0u);
    float S0_2 = guest::cpu()->s[0];
    float S2_2 = slot_object->position.v[2];
    float S0_3 = slot_object->position.v[0];
    gptr<Local_0066a2c8_r0_3> r0_3 = gptr<Local_0066a2c8_r0_3>(frame.at(0x30).addr());
    r0_3->float_0 = S0_3;
    r0_3->float_4 = S0_2;
    r0_3->float_8 = S2_2;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S0_2;
    guest::cpu()->s[2] = S2_2;
    u32 r0_4 = free_keyed_slot(effect_slot_ref, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 0) {
        return;
    }
    *frame.at<u16>(0x3c) = 0;
    Matrix34__from_position_and_angles(frame.at(0).addr(), frame.at(0x30).addr(), *frame.at<u32>(0x3c));
    Model__set_world_matrix(r0_4, frame.at(0).addr());
}

}  // namespace d_0066a2c8
GUEST_EXPORT_FRAMED(0x0066a2c8, d_0066a2c8::AcPlayer__place_effect_at_water, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0066a34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The angle of the event's NPC, or the default (0x2000).
namespace d_0066a34c {

inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline constexpr guest::Function<0x006dfde8, u32(u32)> value_of_source;

u32 event_npc_angle(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u16>(0) = 0x2000;
    if (*event_npc_mode != 0xffu) {
        return *frame.at<u16>(0);
    }
    u32 r0_2 = *event_npc_source;
    if (r0_2 == 0) {
        return *frame.at<u16>(0);
    }
    u32 value = value_of_source(r0_2);
    if (value != 0) {
        return *gptr<u16>(value + 0x2eu);
    }
    return *frame.at<u16>(0);
}

}  // namespace d_0066a34c
GUEST_EXPORT_FRAMED(0x0066a34c, d_0066a34c::event_npc_angle, 0x4000);  // pushes {lr} first, as the original

// f_0066a554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the furniture in front of the player in the room and starts using it (lights, seats, beds).
namespace d_0066a554 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x2];  // (not used here)
    u8 byte_174;
    u8 unknown_175[0x439];  // (not used here)
    u16 half_5ae;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_174, 0x174);
GUEST_OFFSET(AcPlayer, half_5ae, 0x5ae);

struct __attribute__((packed)) Local_0066a554_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0066a554_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0066a554_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0066a554_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0066a554_r0_5 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0066a554_r0_5, float_0, 0x0);
GUEST_OFFSET(Local_0066a554_r0_5, float_4, 0x4);
GUEST_OFFSET(Local_0066a554_r0_5, float_8, 0x8);

inline constexpr u32 room_light_slots_address = 0x009c8fd4u;
inline constexpr guest::Function<0x004e0f68, u32(u32, u32, u32, u32)> Room__is_player_room;
inline constexpr guest::Function<0x004e13d0, u32(u32, u32)> RoomGrid__usable_furniture_of_entries;
inline constexpr guest::Function<0x004e14ec, u32(u32, u32)> RoomGrid__entry_furniture_is_kind_2d;
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> RoomGrid__scan_furniture;
inline constexpr guest::Function<0x0065795c, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_62;
inline constexpr guest::Function<0x007654a8, u32(u32, u32)> notify_guest_of_held_item_3726;

struct __attribute__((packed)) AcPlayerUseRoomFurnitureFrame {
    u16 half_0;
    u8 unknown_2[0xe];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x8];  // (not read or written by name)
};
GUEST_OFFSET(AcPlayerUseRoomFurnitureFrame, half_0, 0x0);
GUEST_OFFSET(AcPlayerUseRoomFurnitureFrame, word_10, 0x10);
GUEST_SIZE(AcPlayerUseRoomFurnitureFrame, 0x1c);

u32 AcPlayer__use_room_furniture(gptr<AcPlayer> ac_player, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<AcPlayerUseRoomFurnitureFrame> frame;  // the original's stack frame
    u32 r0 = ac_player.addr();
    u32 r7 = 0;
    u32 r0_8 = 0;
    gptr<Local_0066a554_ea_1> ea_1 = gptr<Local_0066a554_ea_1>(0u);
    u32 r4 = r0;
    u32 r6 = r1;
    u32 r5 = r0 + 0x171u;
    if ((u32(ac_player->byte_171) >> 5u & 1u) != 0) {
        u32 r0_1 = ac_player->byte_174;
        r7 = 0u;
        if ((r0_1 & 1u) != 0) {
            u32 r0_2 = Room__is_player_room(r0_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_2 != 0) {
                if ((u32(ac_player->byte_171) >> 5u & 1u) != 0) {
                    u32 r0_3 = RoomGrid__scan_furniture(room_light_slots_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    S0 = guest::cpu()->s[0];
                    S1 = guest::cpu()->s[1];
                    S2 = guest::cpu()->s[2];
                    if (r0_3 != 0) {
                        if (ac_player->half_5ae == 0) {
                            if ((u32(*gptr<u8>(r5)) >> 5u & 1u) == 0) {
                                r3 = frame.at(4).addr();
                                ea_1 = gptr<Local_0066a554_ea_1>(r4 + 0x14u);
                                r1 = ea_1->word_4;
                                r2 = ea_1->word_8;
                                *gptr<u32>(r3) = ea_1->word_0;
                                *gptr<u32>(r3 + 4) = r1;
                                *gptr<u32>(r3 + 8) = r2;
                                goto L_66a644;
                            }
                            u32 r0_4 = RoomGrid__scan_furniture(room_light_slots_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            S0 = guest::cpu()->s[0];
                            S1 = guest::cpu()->s[1];
                            S2 = guest::cpu()->s[2];
                            if (r0_4 == 0) {
                                r3 = frame.at(4).addr();
                                ea_1 = gptr<Local_0066a554_ea_1>(r4 + 0x14u);
                                r1 = ea_1->word_4;
                                r2 = ea_1->word_8;
                                *gptr<u32>(r3) = ea_1->word_0;
                                *gptr<u32>(r3 + 4) = r1;
                                *gptr<u32>(r3 + 8) = r2;
                                goto L_66a644;
                            }
                            gptr<Local_0066a554_r0_5> r0_5 = gptr<Local_0066a554_r0_5>(r0_4 + 0x20u);
                            r1 = frame.at(4).addr();
                            S0 = r0_5->float_0;
                            S1 = r0_5->float_4;
                            S2 = r0_5->float_8;
                            *gptr<u32>(r1) = std::bit_cast<u32>(S0);
                            *gptr<u32>(r1 + 4) = std::bit_cast<u32>(S1);
                            *gptr<u32>(r1 + 8) = std::bit_cast<u32>(S2);
                            goto L_66a644;
                        }
                        guest::cpu()->s[0] = S0;
                        guest::cpu()->s[1] = S1;
                        guest::cpu()->s[2] = S2;
                        u32 r0_6 = RoomGrid__entry_furniture_is_kind_2d(room_light_slots_address, r1);
                        r1 = guest::cpu()->r[1];
                        S0 = guest::cpu()->s[0];
                        S1 = guest::cpu()->s[1];
                        if (r0_6 != 0) {
                            if ((u32(ac_player->byte_171) >> 5u & 1u) != 0) {
                                u32 usable_furniture = RoomGrid__usable_furniture_of_entries(room_light_slots_address, r1);
                                S0 = guest::cpu()->s[0];
                                S1 = guest::cpu()->s[1];
                                r1 = usable_furniture;
                                if (usable_furniture != 0) {
                                    notify_guest_of_held_item_3726(r4, r1);
                                    r1 = guest::cpu()->r[1];
                                    S0 = guest::cpu()->s[0];
                                    S1 = guest::cpu()->s[1];
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
L_66a644:;
    if ((u32(*gptr<u8>(r5)) >> 5u & 1u) == 0) {
        r0 = 0u;
        frame->half_0 = u16(r0);
        goto L_66a678;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_8 = RoomGrid__scan_furniture(room_light_slots_address, 0u, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0_8 == 0) {
        r0 = 0u;
        frame->half_0 = u16(r0);
        goto L_66a678;
    }
    r0 = *gptr<u16>(r0_8 + 0x38u);
    frame->half_0 = u16(r0);
    r7 = uxth(r0);
L_66a678:;
    if (r6 != 0) {
        r0 = 1u;
    }
    frame->word_10 = r7;
    if (r6 != 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    return AcPlayer_rec__request_state_62(r4, frame.at(4).addr(), frame.at(0x10).addr(), r3);
}

}  // namespace d_0066a554
GUEST_EXPORT_FRAMED(0x0066a554, d_0066a554::AcPlayer__use_room_furniture, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0066aa7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to the idle that fits (0x10, 0xf or 0x12).
namespace d_0066aa7c {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x8c5];  // (not used here)
    u8 byte_8c5;
    u8 unknown_8c6[0x1];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(AcPlayer, byte_8c5, 0x8c5);
GUEST_OFFSET(AcPlayer, byte_8c7, 0x8c7);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

u32 AcPlayer__start_idle(gptr<AcPlayer> ac_player) {
    if ((u32(ac_player->byte_8c7) & 1u) != 0) {
        return AcPlayer_rec__change_state(ac_player.addr(), 0x10u, 0u, 0u);
    }
    if ((u32(ac_player->byte_8c5) >> 5u & 1u) == 0) {
        return AcPlayer_rec__change_state(ac_player.addr(), 0xfu, 0u, 0u);
    }
    return AcPlayer_rec__change_state(ac_player.addr(), 0x12u, 0u, 0u);
}

}  // namespace d_0066aa7c
GUEST_EXPORT(0x0066aa7c, d_0066aa7c::AcPlayer__start_idle);

// f_0066aac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to casting (0x7b) at the position and angle; at the tourney, may roll a bite.
namespace d_0066aac0 {

struct __attribute__((packed)) Params {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Params, byte_13, 0x13);
GUEST_OFFSET(Params, byte_14, 0x14);

struct __attribute__((packed)) RecordsEntry {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(RecordsEntry, half_2, 0x2);
GUEST_OFFSET(RecordsEntry, half_4, 0x4);

struct __attribute__((packed)) Local_0066aac0_r4_1 {
    u8 byte_0;
    u8 unknown_1[0x6];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_0066aac0_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_0066aac0_r4_1, byte_7, 0x7);

inline guest::global<u32, 0x0094df04> cast_distance;
inline guest::global<u8, 0x00953f68> tourney_kind;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> random_below;
inline constexpr guest::Function<0x00305f2c, u32(u32)> read_global_object_byte;
inline constexpr guest::Function<0x005c2c80, u32(u32)> main_slot_value_is_local;
inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> point_on_circle;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;
inline constexpr guest::Function<0x0068319c, u32(u32, u32)> AcPlayer__cast_target;
inline constexpr guest::Function<0x00700198, u32(u32, u32)> PlayerRecords__entry_for_slot;
inline constexpr guest::Function<0x00759a54, u32(u32, u32)> position_from_packed_xz;

struct __attribute__((packed)) AcPlayerStartCastFrame {
    u16 half_0;
    u8 unknown_2[0x46];  // (not read or written by name)
};
GUEST_OFFSET(AcPlayerStartCastFrame, half_0, 0x0);
GUEST_SIZE(AcPlayerStartCastFrame, 0x48);

u32 AcPlayer__start_cast(u32 ac_player, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<AcPlayerStartCastFrame> frame;  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x48);
    gptr<Params> params = gptr<Params>(state_params_with_8bc(ac_player, r1, r2, r3));
    gptr<Local_0066aac0_r4_1> r4_1 = gptr<Local_0066aac0_r4_1>(params.addr() + 0xeu);
    float3_xz_to_short2_a(params.addr() + 0xfu, r1);
    u32 r0_3 = s32(r2) >> 8;
    params->byte_13 = u8(r0_3);
    r4_1->byte_0 = u8(r3);
    u32 r0_4 = r0_3 << 8;
    params->byte_14 = u8(r5_1);
    frame->half_0 = u16(r0_4);
    position_from_packed_xz(frame.at(8).addr(), r4_1.addr() + 1u);
    float S0_3 = std::bit_cast<float>(*cast_distance);
    guest::cpu()->s[0] = S0_3;
    point_on_circle(frame.at(0x14).addr(), frame.at(8).addr(), uxth(r0_4), 1u);
    u32 r0_7 = AcPlayer__cast_target(ac_player, frame.at(0x14).addr());
    r4_1->byte_7 = 0;
    u32 r0_8 = read_global_object_byte(r0_7);
    if (r0_8 != 3u && *current_player_data != 0) {
        u32 r0_9 = *tourney_kind;
        if (r0_9 == 7u) {
            u32 r5_3 = 0x19u;
            u32 r0_10 = main_slot_value_is_local(r0_9);
            u32 r1_6 = guest::cpu()->r[1];
            float S0_7 = guest::cpu()->s[0];
            float S1_7 = guest::cpu()->s[1];
            if (r0_10 != 0) {
                gptr<RecordsEntry> records_entry_2 = gptr<RecordsEntry>(PlayerRecords__entry_for_slot(4u, r1_6));
                r1_6 = records_entry_2->half_4;
                S1_7 = 0.05f;
                S0_7 = std::bit_cast<float>(vcvt_uz_f(float(u32(records_entry_2->half_2) + r1_6) * S1_7));
                r5_3 = 0x4bu - std::bit_cast<u32>(S0_7);
            }
            guest::cpu()->s[0] = S0_7;
            guest::cpu()->s[1] = S1_7;
            u32 random = random_below(0x64u, r1_6);
            if (random < r5_3) {
                r4_1->byte_7 = 1;
            }
        }
    }
    u32 r1_7 = *gptr<u8>(ac_player + 0x172u);
    *gptr<u8>(ac_player + 0x172u) = u8(r4_1->byte_7 == 0 ? r1_7 & ~0x80u : r1_7 | 0x80u);
    frame.release();
    return AcPlayer_rec__change_state(ac_player, 0x7bu, params.addr(), 0u);
}

}  // namespace d_0066aac0
GUEST_EXPORT(0x0066aac0, d_0066aac0::AcPlayer__start_cast);

// f_0066ac20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to reeling (0x7e) at the position and angle, carrying the bite flag.
namespace d_0066ac20 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x172];  // (not used here)
    u8 byte_172;
};
GUEST_OFFSET(AcPlayer, byte_172, 0x172);

struct __attribute__((packed)) Params {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Params, byte_13, 0x13);
GUEST_OFFSET(Params, byte_14, 0x14);

struct __attribute__((packed)) Local_0066ac20_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0066ac20_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0066ac20_r1_1, word_4, 0x4);

struct __attribute__((packed)) Local_0066ac20_r4_1 {
    u8 byte_0;
    u8 unknown_1[0x6];  // (not used here)
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_0066ac20_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_0066ac20_r4_1, byte_7, 0x7);
GUEST_OFFSET(Local_0066ac20_r4_1, byte_8, 0x8);

inline constexpr guest::Function<0x005d41fc, u32(u32, u32)> float3_xz_to_short2_b;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) AcPlayerStartReelFrame {
    u8 unknown_0[0x20];  // (not read or written by name)
    u32 word_20;
    u8 unknown_24[0x4];  // (not read or written by name)
};
GUEST_OFFSET(AcPlayerStartReelFrame, word_20, 0x20);
GUEST_SIZE(AcPlayerStartReelFrame, 0x28);

u32 AcPlayer__start_reel(gptr<AcPlayer> ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<AcPlayerStartReelFrame> frame;  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    frame->word_20 = r12;
    gptr<Local_0066ac20_r1_1> r1_1 = gptr<Local_0066ac20_r1_1>(frame.at(0x28).addr());
    u32 r5_1 = r1_1->word_0;
    u32 r6_1 = r1_1->word_4;
    gptr<Params> params = gptr<Params>(state_params_with_8bc(ac_player.addr(), r1_1.addr(), r2, r3));
    gptr<Local_0066ac20_r4_1> r4_1 = gptr<Local_0066ac20_r4_1>(params.addr() + 0xeu);
    float3_xz_to_short2_b(params.addr() + 0xfu, r1);
    params->byte_13 = u8(u32(s32(r2) >> 8));
    r4_1->byte_0 = u8(r3);
    params->byte_14 = u8(r5_1);
    r4_1->byte_8 = u8(r6_1);
    r4_1->byte_7 = u8(u32(ac_player->byte_172) >> 7);
    frame.release();
    return AcPlayer_rec__change_state(ac_player.addr(), 0x7eu, params.addr(), 0u);
}

}  // namespace d_0066ac20
GUEST_EXPORT(0x0066ac20, d_0066ac20::AcPlayer__start_reel);

// f_0066ac8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the state parameters (up to 3 entries, with three option bits) and requests the state change.
namespace d_0066ac8c {

struct __attribute__((packed)) Local_0066ac8c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0066ac8c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0066ac8c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0066ac8c_r5_2 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Local_0066ac8c_r5_2, word_0, 0x0);
GUEST_OFFSET(Local_0066ac8c_r5_2, byte_4, 0x4);

inline constexpr guest::Function<0x0013ca2c, u32(u32, u32, u32)> copy_word_and_byte;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x00582c9c, u32(u32, u32, u32, u32)> start_task_or_mark_failed;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x006515ec, u32(u32, u32, u32, u32)> player_record_of_slot;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;
inline constexpr guest::Function<0x0076ae1c, u32(u32, u32, u32, u32)> Item__value_if_2000;
inline constexpr guest::Function<0x0076c440, u32(u32, u32, u32, u32)> Item__is_first_item;

struct __attribute__((packed)) RequestPlayerStateWithParamsFrame {
    u32 params;
    u8 unknown_4[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(RequestPlayerStateWithParamsFrame, params, 0x0);
GUEST_SIZE(RequestPlayerStateWithParamsFrame, 0x30);

u32 request_player_state_with_params(u32 object, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<RequestPlayerStateWithParamsFrame> frame;  // the original's stack frame
    u32 r9 = r2;
    u32 player = object;
    u32 r10 = r1;
    u32 r6_1 = r3;
    gptr<Local_0066ac8c_ea_1> ea_1 = gptr<Local_0066ac8c_ea_1>(frame.at(0x30).addr());
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    if (r2 > 3u) {
        r9 = 3u;
    }
    u32 params_3 = state_params_with_8bc(object, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r8 = params_3 + 0xeu;
    frame->params = params_3;
    r1 = *gptr<u8>(r8 + 0x10u);
    *gptr<u8>(r8 + 0x11u) = 1;
    r2 = 0x18u & r9 << 3;
    u32 r0_2 = (((r1 & ~0x18u | r2) & ~0x20u | r6_1 << 5) & 0xbfu | r4_1 << 6) & ~0x80u | r5_1 << 7;
    u32 i = 0u;
    *gptr<u8>(r8 + 0x10u) = u8(r0_2);
    if (r9 >= 0u && r9 != 0) {
        do {
            u32 r7_1 = i + (i << 2);
            gptr<Local_0066ac8c_r5_2> r5_2 = gptr<Local_0066ac8c_r5_2>(r7_1 + r10);
            u32 r6_2 = r5_2->byte_4;
            u32 r0_4 = construct_empty_item(frame.at(4).addr(), r1, r2, r3);
            u32 r2_1 = r7_1 + r8;
            *gptr<u32>(r0_4) = r5_2->word_0;
            copy_word_and_byte(r2_1, r5_2.addr(), r2_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r6_2 == 0) {
                u32 item = frame.at(4).addr();
                u32 r0_5 = Item__is_first_item(item, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_5 != 0) {
                    u32 r0_6 = *gptr<u8>(player + 0x1acu);
                    u32 player_record = player_record_of_slot(r0_6, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (player_record != 0) {
                        u32 r0_8 = Item__value_if_2000(item, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_8 < 0x64u) {
                            start_task_or_mark_failed(player_record + 0x5494u, uxth(r0_8), r2, r3);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                        }
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (i < r9);
    }
    u32 params = frame->params;
    frame.release();
    return AcPlayer_rec__change_state(player, 0x36u, params, 0u);
}

}  // namespace d_0066ac8c
GUEST_EXPORT(0x0066ac8c, d_0066ac8c::request_player_state_with_params);

// f_0066b13c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the player exists: changes their state to 0x36 with the value and three flags.
namespace d_0066b13c {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(AcPlayer, byte_1ac, 0x1ac);

struct __attribute__((packed)) Local_0066b13c_r0_4 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Local_0066b13c_r0_4, byte_10, 0x10);
GUEST_OFFSET(Local_0066b13c_r0_4, byte_11, 0x11);

inline constexpr guest::Function<0x002fe8a4, u32(u32, u32, u32, u32)> find_by_id_2fe8a4;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32)> state_params_with_8bc;

u32 AcPlayer__start_state_36(gptr<AcPlayer> ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x18);
    u32 r0_1 = ac_player->byte_1ac;
    u32 r0_2 = find_by_id_2fe8a4(r0_1, r1, r2, r3);
    if (r0_2 != 0) {
        u32 params = state_params_with_8bc(ac_player.addr());
        gptr<Local_0066b13c_r0_4> r0_4 = gptr<Local_0066b13c_r0_4>(params + 0xeu);
        u32 r1_2 = r0_4->byte_10;
        r0_4->byte_11 = u8(r1);
        r0_4->byte_10 = u8(((r1_2 & ~0x38u | (r4_1 ^ 1u) << 5) & 0xbfu | r2 << 6) & ~0x80u | r3 << 7);
        frame.release();
        return AcPlayer_rec__change_state(ac_player.addr(), 0x36u, params, 0u);
    }
    return r0_2;
}

}  // namespace d_0066b13c
GUEST_EXPORT(0x0066b13c, d_0066b13c::AcPlayer__start_state_36);

// f_0066b1b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0x1d at the position and angle.
namespace d_0066b1b4 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

void AcPlayer__start_state_1d(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 params = state_params_with_8bc(ac_player, r1, r2, r3);
    u32 r4_1 = params + 0xeu;
    float3_xz_to_short2_a(r4_1, r1);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(r2) >> 8));
    frame.release();
    AcPlayer_rec__change_state(ac_player, 0x1du, params, 0u);
    return;
}

}  // namespace d_0066b1b4
GUEST_EXPORT(0x0066b1b4, d_0066b1b4::AcPlayer__start_state_1d);

// f_0066b1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0x25 at the position and angle.
namespace d_0066b1fc {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

void AcPlayer__start_state_25(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 params = state_params_with_8bc(ac_player, r1, r2, r3);
    u32 r4_1 = params + 0xeu;
    float3_xz_to_short2_a(r4_1, r1);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(r2) >> 8));
    frame.release();
    AcPlayer_rec__change_state(ac_player, 0x25u, params, 0u);
    return;
}

}  // namespace d_0066b1fc
GUEST_EXPORT(0x0066b1fc, d_0066b1fc::AcPlayer__start_state_25);

// f_0066b244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0x5e with the two values.
namespace d_0066b244 {

struct __attribute__((packed)) Local_0066b244_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0066b244_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_0066b244_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_0066b244_ea_1, byte_2, 0x2);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer__start_state_5e(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 params = state_params_with_8bc(ac_player, r1, r2, r3);
    gptr<Local_0066b244_ea_1> ea_1 = gptr<Local_0066b244_ea_1>(params + 0xeu);
    ea_1->byte_0 = u8(r1);
    ea_1->byte_1 = u8(r2);
    ea_1->byte_2 = 0;
    frame.release();
    return AcPlayer_rec__change_state(ac_player, 0x5eu, params, 0u);
}

}  // namespace d_0066b244
GUEST_EXPORT(0x0066b244, d_0066b244::AcPlayer__start_state_5e);

// f_0066b280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to the action toward the target, with its parameters.
namespace d_0066b280 {

struct __attribute__((packed)) AcPlayerStartStateWithTargetArg3 {
    u16 half_0;
};
GUEST_OFFSET(AcPlayerStartStateWithTargetArg3, half_0, 0x0);

struct __attribute__((packed)) Local_0066b280_ea_1 {
    u32 ac_player;
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
    u32 word_34;
};
GUEST_OFFSET(Local_0066b280_ea_1, ac_player, 0x0);
GUEST_OFFSET(Local_0066b280_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0066b280_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0066b280_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0066b280_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0066b280_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0066b280_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0066b280_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0066b280_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_0066b280_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_0066b280_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_0066b280_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_0066b280_ea_1, word_30, 0x30);
GUEST_OFFSET(Local_0066b280_ea_1, word_34, 0x34);

struct __attribute__((packed)) Local_0066b280_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_0066b280_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0066b280_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0066b280_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0066b280_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_0066b280_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_0066b280_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_0066b280_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_0066b280_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_0066b280_ea_2, word_24, 0x24);

struct __attribute__((packed)) Local_0066b280_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_0066b280_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0066b280_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0066b280_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0066b280_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_0066b280_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_0066b280_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_0066b280_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_0066b280_ea_3, word_1c, 0x1c);
GUEST_OFFSET(Local_0066b280_ea_3, word_24, 0x24);

struct __attribute__((packed)) Local_0066b280_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_0066b280_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0066b280_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_0066b280_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_0066b280_ea_4, word_c, 0xc);
GUEST_OFFSET(Local_0066b280_ea_4, word_10, 0x10);
GUEST_OFFSET(Local_0066b280_ea_4, word_14, 0x14);
GUEST_OFFSET(Local_0066b280_ea_4, word_18, 0x18);
GUEST_OFFSET(Local_0066b280_ea_4, word_1c, 0x1c);
GUEST_OFFSET(Local_0066b280_ea_4, word_24, 0x24);

struct __attribute__((packed)) Local_0066b280_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0066b280_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0066b280_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_0066b280_r1_1, word_8, 0x8);

inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) AcPlayerStartStateWithTargetFrame {
    u32 player;
    u8 unknown_4[0x34];  // (not read or written by name)
};
GUEST_OFFSET(AcPlayerStartStateWithTargetFrame, player, 0x0);
GUEST_SIZE(AcPlayerStartStateWithTargetFrame, 0x38);

void AcPlayer__start_state_with_target(u32 ac_player, u32 r1, u32 r2, gptr<AcPlayerStartStateWithTargetArg3> arg3) {
    guest::StackFrameOf<AcPlayerStartStateWithTargetFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0066b280_ea_1> ea_1 = gptr<Local_0066b280_ea_1>(frame.at(0).addr());
    ea_1->ac_player = ac_player;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = arg3.addr();
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r12;
    ea_1->word_34 = r14;
    gptr<Local_0066b280_r1_1> r1_1 = gptr<Local_0066b280_r1_1>(frame.at(0x38).addr());
    u32 r0_1 = frame->player;
    u32 r5_1 = r1_1->word_0;
    u32 r6_1 = r1_1->word_4;
    u32 r7_1 = r1_1->word_8;
    u32 params = state_params_with_8bc(r0_1, r1_1.addr(), r2, arg3.addr());
    u32 r4_1 = params + 0xeu;
    float3_xz_to_short2_a(r4_1, r1);
    float3_xz_to_short2_a(r4_1 + 4u, r2);
    *gptr<u8>(r4_1 + 8u) = u8(u32(s32(u32(arg3->half_0)) >> 8));
    *gptr<u8>(params + 0x17u) = u8(r5_1);
    if (r6_1 != 0) {
        if (r7_1 != 0) {
            u32 player = frame->player;
            gptr<Local_0066b280_ea_2> ea_2 = gptr<Local_0066b280_ea_2>(frame.at(0x10).addr());
            u32 r4_2 = ea_2->word_0;
            u32 r5_2 = ea_2->word_4;
            u32 r6_2 = ea_2->word_8;
            u32 r7_2 = ea_2->word_c;
            u32 r8_1 = ea_2->word_10;
            u32 r9_1 = ea_2->word_14;
            u32 r10_1 = ea_2->word_18;
            u32 r11_1 = ea_2->word_1c;
            r14 = ea_2->word_24;
            guest::cpu()->r[4] = r4_2;
            guest::cpu()->r[5] = r5_2;
            guest::cpu()->r[6] = r6_2;
            guest::cpu()->r[7] = r7_2;
            guest::cpu()->r[8] = r8_1;
            guest::cpu()->r[9] = r9_1;
            guest::cpu()->r[10] = r10_1;
            guest::cpu()->r[11] = r11_1;
            frame.release();
            AcPlayer_rec__change_state(player, 0x2eu, params, 0u);
            return;
        }
        u32 r0_5 = frame->player;
        gptr<Local_0066b280_ea_3> ea_3 = gptr<Local_0066b280_ea_3>(frame.at(0x10).addr());
        u32 r4_3 = ea_3->word_0;
        u32 r5_3 = ea_3->word_4;
        u32 r6_3 = ea_3->word_8;
        u32 r7_3 = ea_3->word_c;
        u32 r8_2 = ea_3->word_10;
        u32 r9_2 = ea_3->word_14;
        u32 r10_2 = ea_3->word_18;
        u32 r11_2 = ea_3->word_1c;
        r14 = ea_3->word_24;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_3;
        guest::cpu()->r[7] = r7_3;
        guest::cpu()->r[8] = r8_2;
        guest::cpu()->r[9] = r9_2;
        guest::cpu()->r[10] = r10_2;
        guest::cpu()->r[11] = r11_2;
        frame.release();
        AcPlayer_rec__change_state(r0_5, 0x2cu, params, 0u);
        return;
    }
    u32 r0_6 = frame->player;
    gptr<Local_0066b280_ea_4> ea_4 = gptr<Local_0066b280_ea_4>(frame.at(0x10).addr());
    u32 r4_4 = ea_4->word_0;
    u32 r5_4 = ea_4->word_4;
    u32 r6_4 = ea_4->word_8;
    u32 r7_4 = ea_4->word_c;
    u32 r8_3 = ea_4->word_10;
    u32 r9_3 = ea_4->word_14;
    u32 r10_3 = ea_4->word_18;
    u32 r11_3 = ea_4->word_1c;
    r14 = ea_4->word_24;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_4;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_4;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_3;
    guest::cpu()->r[10] = r10_3;
    guest::cpu()->r[11] = r11_3;
    frame.release();
    AcPlayer_rec__change_state(r0_6, 0x2bu, params, 0u);
    return;
}

}  // namespace d_0066b280
GUEST_EXPORT(0x0066b280, d_0066b280::AcPlayer__start_state_with_target);

// f_0066fa84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The point beside the position (left or right of the angle) on the ground, and the turned angle.
namespace d_0066fa84 {

struct __attribute__((packed)) SidePointOnGroundArg1 {
    u16 half_0;
};
GUEST_OFFSET(SidePointOnGroundArg1, half_0, 0x0);

inline guest::global<u32, 0x0094df04> cast_distance;
inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> point_on_circle;
inline constexpr guest::Function<0x006c6640, u32(u32, u32)> surface_height_at_2;

struct __attribute__((packed)) SidePointOnGroundFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
};
GUEST_OFFSET(SidePointOnGroundFrame, word_4, 0x4);
GUEST_OFFSET(SidePointOnGroundFrame, word_8, 0x8);
GUEST_OFFSET(SidePointOnGroundFrame, word_c, 0xc);
GUEST_SIZE(SidePointOnGroundFrame, 0x1c);

u32 side_point_on_ground(gptr<Float3> arg0, gptr<SidePointOnGroundArg1> arg1, u32 center, u32 r3) {
    guest::StackFrameOf<SidePointOnGroundFrame> frame;  // the original's stack frame
    u32 r0_1 = *frame.at<u32>(0x28);
    *frame.at<u32>(0) = r3;
    *frame.at<u16>(0) = u16((r0_1 == 0 ? 0xc000u : 0x4000u) + u32(*frame.at<u16>(0)));
    float S1_1 = 16.0f;
    float S0_1 = S1_1 - 11.0f;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    point_on_circle(frame.at(0x10).addr(), center, r3, 1u);
    u32 r2_1 = *frame.at<u32>(0);
    float S0_2 = std::bit_cast<float>(*cast_distance);
    guest::cpu()->s[0] = S0_2;
    point_on_circle(frame.at(4).addr(), frame.at(0x10).addr(), r2_1, 1u);
    surface_height_at_2(frame.at(4).addr(), 0u);
    float S0_4 = guest::cpu()->s[0];
    frame->word_8 = std::bit_cast<u32>(S0_4);
    arg0->v[0] = std::bit_cast<float>(u32(frame->word_4));
    arg0->v[1] = std::bit_cast<float>(u32(frame->word_8));
    arg0->v[2] = std::bit_cast<float>(u32(frame->word_c));
    u32 r0_5 = *frame.at<u16>(0);
    arg1->half_0 = u16(r0_5);
    guest::cpu()->s[0] = S0_4;
    return r0_5;
}

}  // namespace d_0066fa84
GUEST_EXPORT_FRAMED(0x0066fa84, d_0066fa84::side_point_on_ground, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0066fb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the kind is 0x67 and the height is at most 300.
namespace d_0066fb3c {

struct __attribute__((packed)) IsKind67Below300Arg1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(IsKind67Below300Arg1, word_8, 0x8);


u32 is_kind_67_below_300(u32 r0, gptr<IsKind67Below300Arg1> arg1) {
    if (r0 != 0x67u) {
        guest::cpu()->r[1] = arg1.addr();
        return 0u;
    }
    if (s32(arg1->word_8) <= s32(0x43960000u)) {
        guest::cpu()->r[1] = 0x43960000u;
        return 1u;
    }
    guest::cpu()->r[1] = 0x43960000u;
    return 0u;
}

}  // namespace d_0066fb3c
GUEST_EXPORT(0x0066fb3c, d_0066fb3c::is_kind_67_below_300);

// f_0066fb64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the local player: leaves camera mode 0xc and marks the camera changed.
namespace d_0066fb64 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x6];  // (not used here)
    u8 byte_178;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_178, 0x178);

inline constexpr guest::Function<0x0068eff0, u32(u32, u32, u32, u32)> CameraCtl__leave_mode_c;

void AcPlayer__leave_camera_mode_c(gptr<AcPlayer> ac_player) {
    u32 r4_1 = ac_player.addr() + 0x171u;
    if ((u32(ac_player->byte_171) >> 5u & 1u) == 0) {
        return;
    }
    CameraCtl__leave_mode_c(ac_player.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ac_player->byte_178 = u8(u32(ac_player->byte_178) | 0x80u);
}

}  // namespace d_0066fb64
GUEST_EXPORT_FRAMED(0x0066fb64, d_0066fb64::AcPlayer__leave_camera_mode_c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0066fc98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0xe9 at the position and angle.
namespace d_0066fc98 {

struct __attribute__((packed)) AcPlayerStartStateE9Arg2 {
    u16 half_0;
};
GUEST_OFFSET(AcPlayerStartStateE9Arg2, half_0, 0x0);

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

void AcPlayer__start_state_e9(u32 ac_player, u32 r1, gptr<AcPlayerStartStateE9Arg2> arg2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 params = state_params_with_8bc(ac_player, r1, arg2.addr(), r3);
    u32 r2_1 = params + 0xeu;
    *gptr<u8>(params + 0x12u) = u8(u32(s32(u32(arg2->half_0)) >> 8));
    float3_xz_to_short2_a(r2_1, r1, r2_1);
    frame.release();
    AcPlayer_rec__change_state(ac_player, 0xe9u, params, 0u);
    return;
}

}  // namespace d_0066fc98
GUEST_EXPORT(0x0066fc98, d_0066fc98::AcPlayer__start_state_e9);

// f_0066fd10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0x5c with the two values.
namespace d_0066fd10 {

struct __attribute__((packed)) Local_0066fd10_ea_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0066fd10_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_0066fd10_ea_1, byte_1, 0x1);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer__start_state_5c(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 params = state_params_with_8bc(ac_player, r1, r2, r3);
    gptr<Local_0066fd10_ea_1> ea_1 = gptr<Local_0066fd10_ea_1>(params + 0xeu);
    ea_1->byte_0 = u8(r1);
    ea_1->byte_1 = u8(r2);
    frame.release();
    return AcPlayer_rec__change_state(ac_player, 0x5cu, params, 0u);
}

}  // namespace d_0066fd10
GUEST_EXPORT(0x0066fd10, d_0066fd10::AcPlayer__start_state_5c);

// f_0066fd44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0xc1 at the position and angle, with the value.
namespace d_0066fd44 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

void AcPlayer__start_state_c1(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 params = state_params_with_8bc(ac_player, r1, r2, r3);
    u32 r4_1 = params + 0xeu;
    float3_xz_to_short2_a(r4_1, r1);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(r2) >> 8));
    *gptr<u8>(params + 0x13u) = u8(r3);
    frame.release();
    AcPlayer_rec__change_state(ac_player, 0xc1u, params, 0u);
    return;
}

}  // namespace d_0066fd44
GUEST_EXPORT(0x0066fd44, d_0066fd44::AcPlayer__start_state_c1);

// f_0066fd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0x8d with the value.
namespace d_0066fd94 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer__start_state_8d(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 params = state_params_with_8bc(ac_player, r1, r2, r3);
    *gptr<u8>(params + 0xeu) = u8(r1);
    frame.release();
    return AcPlayer_rec__change_state(ac_player, 0x8du, params, 0u);
}

}  // namespace d_0066fd94
GUEST_EXPORT(0x0066fd94, d_0066fd94::AcPlayer__start_state_8d);

// f_0066fdc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the player's state to 0x17.
namespace d_0066fdc0 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

u32 AcPlayer__start_state_17() {
    return AcPlayer_rec__change_state(guest::cpu()->r[0], 0x17u, 0u, 0u);
}

}  // namespace d_0066fdc0
GUEST_EXPORT(0x0066fdc0, d_0066fdc0::AcPlayer__start_state_17);

// f_0066ffb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the digging effect for the ground at the position (sand has its own), else the general one.
namespace d_0066ffb4 {

struct __attribute__((packed)) Local_0066ffb4_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0066ffb4_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_0066ffb4_r5_1, word_4, 0x4);

inline constexpr u32 global_0094df14_address = 0x0094df14u;
inline constexpr u32 effect_spawn_context_address = 0x00ae5664u;
inline constexpr guest::Function<0x004eb6c4, u32(u32, u32, u32, u32)> EffectSlots__start;
inline constexpr guest::Function<0x0065e3a0, u32(u32, u32, u32, u32)> AcPlayer__dig_at;
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> item_at_position_2;

struct __attribute__((packed)) AcPlayerDigEffectFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 unknown_16[0x1a];  // (not read or written by name)
};
GUEST_OFFSET(AcPlayerDigEffectFrame, word_0, 0x0);
GUEST_OFFSET(AcPlayerDigEffectFrame, word_4, 0x4);
GUEST_OFFSET(AcPlayerDigEffectFrame, half_10, 0x10);
GUEST_OFFSET(AcPlayerDigEffectFrame, half_12, 0x12);
GUEST_OFFSET(AcPlayerDigEffectFrame, half_14, 0x14);
GUEST_SIZE(AcPlayerDigEffectFrame, 0x30);

void AcPlayer__dig_effect(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<AcPlayerDigEffectFrame> frame;  // the original's stack frame
    u32 item_2 = item_at_position_2(r1, 0u, r2, r3);
    u32 r12_1 = guest::cpu()->r[12];
    if (item_2 != 0x16u) {
        frame.release();
        AcPlayer__dig_at(ac_player, r1, r2, r3);
        return;
    }
    if (r3 < 4u) {
        item_2 = global_0094df14_address;
    }
    gptr<Local_0066ffb4_r5_1> r5_1 = gptr<Local_0066ffb4_r5_1>(frame.at(8).addr());
    if (r3 < 4u) {
        r12_1 = gptr<u32>(item_2)[r3];
    }
    frame->half_10 = 0;
    frame->half_14 = 0;
    frame->word_4 = 1;
    if (r3 >= 4u) {
        r12_1 = 0u;
    }
    frame->half_12 = u16(r2);
    frame->word_0 = 0xae5664;
    r5_1->word_0 = 0x842bcc;
    r5_1->word_4 = r12_1;
    EffectSlots__start(ac_player + 0x19cu, 0u, r1, frame.at(0x10).addr());
}

}  // namespace d_0066ffb4
GUEST_EXPORT(0x0066ffb4, d_0066ffb4::AcPlayer__dig_effect);
