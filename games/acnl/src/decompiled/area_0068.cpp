// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00681214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The shared vector (0, -4, 0) at 0x98570c.
namespace d_00681214 {

struct __attribute__((packed)) Local_00681214_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00681214_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00681214_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_00681214_r0_1, word_8, 0x8);

inline constexpr u32 player_offset_0_m4_0_guard_address = 0x0094df50u;
inline constexpr u32 player_offset_0_m4_0_value_address = 0x0098570cu;
inline guest::global<u32, 0x0094df50> player_offset_0_m4_0_guard;
inline guest::global<u32, 0x0098570c> player_offset_0_m4_0_value;
inline guest::global<u32, 0x00985710> global_00985710;
inline guest::global<u32, 0x00985714> global_00985714;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;

u32 player_offset_0_m4_0() {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if ((*player_offset_0_m4_0_guard & 1u) == 0) {
        static_guard_acquire(player_offset_0_m4_0_guard_address);
    }
    float S0_1 = 0.0f;
    float S1_1 = -4.0f;
    gptr<Local_00681214_r0_1> r0_1 = gptr<Local_00681214_r0_1>(frame.at(0).addr());
    r0_1->word_0 = std::bit_cast<u32>(S0_1);
    r0_1->word_4 = std::bit_cast<u32>(S1_1);
    r0_1->word_8 = std::bit_cast<u32>(S0_1);
    *player_offset_0_m4_0_value = r0_1->word_0;
    u32 r1_1 = r0_1->word_4;
    *global_00985710 = r1_1;
    *global_00985714 = r0_1->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return player_offset_0_m4_0_value_address;
}

}  // namespace d_00681214
GUEST_EXPORT_FRAMED(0x00681214, d_00681214::player_offset_0_m4_0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00681294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The shared vector (0, -2, 6) at 0x985718.
namespace d_00681294 {

struct __attribute__((packed)) Local_00681294_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00681294_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00681294_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_00681294_r0_1, word_8, 0x8);

inline constexpr u32 player_offset_0_m2_6_guard_address = 0x0094df54u;
inline constexpr u32 player_offset_0_m2_6_value_address = 0x00985718u;
inline guest::global<u32, 0x0094df54> player_offset_0_m2_6_guard;
inline guest::global<u32, 0x00985718> player_offset_0_m2_6_value;
inline guest::global<u32, 0x0098571c> global_0098571c;
inline guest::global<u32, 0x00985720> global_00985720;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;

u32 player_offset_0_m2_6() {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if ((*player_offset_0_m2_6_guard & 1u) == 0) {
        static_guard_acquire(player_offset_0_m2_6_guard_address);
    }
    float S2_1 = 6.0f;
    float S1_1 = -2.0f;
    float S0_1 = 0.0f;
    gptr<Local_00681294_r0_1> r0_1 = gptr<Local_00681294_r0_1>(frame.at(0).addr());
    r0_1->word_0 = std::bit_cast<u32>(S0_1);
    r0_1->word_4 = std::bit_cast<u32>(S1_1);
    r0_1->word_8 = std::bit_cast<u32>(S2_1);
    *player_offset_0_m2_6_value = r0_1->word_0;
    u32 r1_1 = r0_1->word_4;
    *global_0098571c = r1_1;
    *global_00985720 = r0_1->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return player_offset_0_m2_6_value_address;
}

}  // namespace d_00681294
GUEST_EXPORT_FRAMED(0x00681294, d_00681294::player_offset_0_m2_6, 0x4010);  // pushes {r4, lr} first, as the original

// f_00681c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the pending placement (bit 0 of +0x171) is set, clears it, targets its cell and, when holding, gives the player
// the held item back.
namespace d_00681c14 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x758];  // (not used here)
    u8 byte_8ca;
    u8 byte_8cb;
    u32 word_8cc;
    u8 byte_8d0;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_8ca, 0x8ca);
GUEST_OFFSET(AcPlayer, byte_8cb, 0x8cb);
GUEST_OFFSET(AcPlayer, word_8cc, 0x8cc);
GUEST_OFFSET(AcPlayer, byte_8d0, 0x8d0);

inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00597784, u32(u32, u32, u32)> FieldDrop__remove_at_2;
inline constexpr guest::Function<0x006606e0, u32(u32, u32, u32, u32)> set_cell_target_3;
inline constexpr guest::Function<0x0067bc50, u32(u32)> AcPlayer__restore_outfit;

struct __attribute__((packed)) Frame_00681c14 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00681c14, word_0, 0x0);
GUEST_SIZE(Frame_00681c14, 0x4);

u32 AcPlayer_rec__finish_place_item(gptr<AcPlayer> ac_player, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00681c14> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = ac_player.addr() + 0x171u;  // (from the original)
    u32 r1_1 = ac_player->byte_171;
    if ((r1_1 & 1u) != 0) {
        ac_player->byte_171 = u8(r1_1 & ~1u);
        u32 r4_1 = ac_player.addr() + 0x8cau;  // (from the original)
        u32 r6_1 = ac_player->byte_8d0 == 0 ? 0u : 1u;
        u32 r8_1 = sxtb(u32(ac_player->byte_8ca));
        u32 r7_1 = sxtb(u32(ac_player->byte_8cb));
        set_cell_target_3(ac_player.addr(), r8_1, r7_1, r3);
        r0_1 = FieldDrop__remove_at_2(ac_player.addr(), r8_1, r7_1);
        r1_1 = guest::cpu()->r[1];
        if (r6_1 != 0) {
            u32 r0_2 = frame.at(0).addr();
            construct_empty_item(r0_2);
            *gptr<u32>(r0_2) = ac_player->word_8cc;
            Item__copy(ac_player.addr() + 0x93cu, frame.at(0).addr());  // (from the original)
            AcPlayer__restore_outfit(ac_player.addr());
            r1_1 = guest::cpu()->r[1];
            r0_1 = frame.at(0).addr();
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00681c14
GUEST_EXPORT_FRAMED(0x00681c14, d_00681c14::AcPlayer_rec__finish_place_item, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00681cb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the pending pickup (bit 0 of +0x171) is set, clears it, targets its cell and stores the picked item in the
// player's slot.
namespace d_00681cb8 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
    u8 unknown_1ad[0x71d];  // (not used here)
    u8 byte_8ca;
    u8 byte_8cb;
    u32 word_8cc;
    u8 unknown_8d0[0x8];  // (not used here)
    u8 byte_8d8;
};
GUEST_OFFSET(AcPlayer, byte_171, 0x171);
GUEST_OFFSET(AcPlayer, byte_1ac, 0x1ac);
GUEST_OFFSET(AcPlayer, byte_8ca, 0x8ca);
GUEST_OFFSET(AcPlayer, byte_8cb, 0x8cb);
GUEST_OFFSET(AcPlayer, word_8cc, 0x8cc);
GUEST_OFFSET(AcPlayer, byte_8d8, 0x8d8);

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x00597784, u32(u32, u32, u32, u32)> FieldDrop__remove_at_2;
inline constexpr guest::Function<0x00660724, u32(u32, u32, u32, u32)> set_cell_target_2;
inline constexpr guest::Function<0x0067bc50, u32(u32)> AcPlayer__restore_outfit;

struct __attribute__((packed)) Frame_00681cb8 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00681cb8, word_0, 0x0);
GUEST_SIZE(Frame_00681cb8, 0x20);

u32 AcPlayer_rec__finish_pick_item(gptr<AcPlayer> ac_player, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00681cb8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = ac_player.addr() + 0x171u;  // (from the original)
    u32 r1_1 = ac_player->byte_171;
    if ((r1_1 & 1u) != 0) {
        ac_player->byte_171 = u8(r1_1 & ~1u);
        u32 r0_2 = ac_player->byte_8d8;
        u32 r9_1 = sxtb(u32(ac_player->byte_8ca));
        u32 r1_2 = ac_player->byte_8cb;
        u32 r8_1 = sxtb(r1_2);
        if (((r0_2 & 2u) >> 1) != 0) {
            u32 r0_3 = frame.at(0).addr();
            construct_empty_item(r0_3, r1_2, r2, r3);
            *gptr<u32>(r0_3) = ac_player->word_8cc;
            Item__copy(ac_player.addr() + 0x93cu, frame.at(0).addr());  // (from the original)
            AcPlayer__restore_outfit(ac_player.addr());
            r3 = guest::cpu()->r[3];
        }
        set_cell_target_2(ac_player.addr(), r9_1, r8_1, r3);
        u32 r7_1 = ac_player->byte_1ac;
        u32 r0_5 = frame.at(0).addr();
        construct_empty_item(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_6 = *gptr<u32>((ac_player.addr() + 0x8cau) + 2u);  // (from the original)
        *gptr<u32>(r0_5) = r1_6;
        u32 is_empty_2 = Item__is_empty(frame.at(0).addr(), r1_6);
        r1_1 = guest::cpu()->r[1];
        if (is_empty_2 == 0) {
            u32 player_2 = player_of_slot_index(r7_1, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (player_2 != 0) {
                Item__copy(player_2 + 0x26u, frame.at(0).addr());  // (from the original)
                r1_1 = guest::cpu()->r[1];
            }
        }
        r0_1 = frame.at(0).addr();
        if (((r0_2 & 8u) >> 3) != 0) {
            u32 r3_7 = frame->word_0;
            frame.release();
            return FieldDrop__remove_at_2(ac_player.addr(), r9_1, r8_1, r3_7);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00681cb8
GUEST_EXPORT(0x00681cb8, d_00681cb8::AcPlayer_rec__finish_pick_item);

// f_00681db8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the function at 0x2c9868 on the object at 0x950618 when it exists.
namespace d_00681db8 {

inline constexpr u32 object_950618_address = 0x00950618u;
inline guest::global<u32, 0x00950618> object_950618;
inline constexpr guest::Function<0x002c9868, u32(u32, u32, u32, u32)> CatalogWindow__first_free_slot;

u32 call_on_950618() {
    u32 r0_1 = *object_950618;
    if (r0_1 == 0) {
        return r0_1;
    }
    return CatalogWindow__first_free_slot(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00681db8
GUEST_EXPORT(0x00681db8, d_00681db8::call_on_950618);

// f_00681f00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds a free spot for the player near the position.
namespace d_00681f00 {

struct __attribute__((packed)) Local_00681f00_r4_1 {
    u32 word_0;
    u32 word_4;
    float float_8;
    u8 unknown_c[0x8];  // (not used here)
    u32 word_14;
    u32 word_18;
    float float_1c;
};
GUEST_OFFSET(Local_00681f00_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00681f00_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00681f00_r4_1, float_8, 0x8);
GUEST_OFFSET(Local_00681f00_r4_1, word_14, 0x14);
GUEST_OFFSET(Local_00681f00_r4_1, word_18, 0x18);
GUEST_OFFSET(Local_00681f00_r4_1, float_1c, 0x1c);

inline constexpr u32 spot_offsets_c_address = 0x0094defcu;
inline constexpr u32 spot_offsets_d_address = 0x0094df00u;
inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline constexpr u32 player_spot_offsets_address = 0x009856dcu;
inline constexpr u32 spot_search_origin_address = 0x009856e8u;
inline guest::global<u32, 0x0094defc> spot_offsets_c;
inline guest::global<u32, 0x0094df00> spot_offsets_d;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline guest::global<u32, 0x009856dc> player_spot_offsets;
inline guest::global<u32, 0x009856e0> global_009856e0;
inline guest::global<u32, 0x009856e8> spot_search_origin;
inline guest::global<u32, 0x009856ec> global_009856ec;
inline guest::global<u32, 0x009856f0> global_009856f0;
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> cell_position_of_id;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x006dabd8, u32(u32, u32, u32)> object_operation;

struct __attribute__((packed)) Frame_00681f00 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00681f00, word_0, 0x0);
GUEST_OFFSET(Frame_00681f00, word_4, 0x4);
GUEST_SIZE(Frame_00681f00, 0x18);

u32 AcPlayer_rec__find_spot(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<Frame_00681f00> frame;  // the original's stack frame
    u32 cell_position_2 = cell_position_of_id(frame.at(8).addr(), r0, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    gptr<Local_00681f00_r4_1> r4_1 = gptr<Local_00681f00_r4_1>(0u);
    if (cell_position_2 != 0) {
        position_to_cell(frame.at(0).addr(), frame.at(4).addr(), frame.at(8).addr());
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        r1_1 = frame->word_0;
        r2 = frame->word_4;
        if (*event_npc_mode == 0xffu) {  // (from the original)
            u32 r0_4 = *event_npc_source;
            if (r0_4 == 0) {
                goto L_681fcc;
            }
            u32 r0_5 = object_operation(r0_4, r1_1, r2);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S0_1 = guest::cpu()->s[0];
            S1_1 = guest::cpu()->s[1];
            r4_1 = gptr<Local_00681f00_r4_1>(r0_5);
        }
        if (r4_1.addr() == 0) {
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if ((*spot_offsets_c & 1u) == 0) {
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            static_guard_acquire(spot_offsets_c_address, r1_1, r2);
        }
        *player_spot_offsets = r4_1->word_14;
        r1_1 = r4_1->word_18;
        *global_009856e0 = r1_1;
        float S0_2 = r4_1->float_1c;
        r4_1 = gptr<Local_00681f00_r4_1>(player_spot_offsets_address);
        r4_1->word_0 = std::bit_cast<u32>(std::bit_cast<float>(r4_1->word_0) - 32.0f);
        S1_1 = 16.0f;
        S0_1 = S0_2 + S1_1;
        r4_1->float_8 = S0_1;
    }
L_681fcc:;
    if (r4_1.addr() != 0) {
        if ((*spot_offsets_d & 1u) == 0) {
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            static_guard_acquire(spot_offsets_d_address, r1_1, r2);
            goto L_682004;
        }
        goto L_682004;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0u;
L_682004:;
    *spot_search_origin = r4_1->word_0;
    *global_009856ec = r4_1->word_4;
    float S1_2 = r4_1->float_8;
    float S0_3 = 32.0f;
    float S3_2 = std::bit_cast<float>(*spot_search_origin) - S0_3;
    float S0_4 = S1_2 + S0_3;
    float S2_2 = 80.0f;
    *spot_search_origin = std::bit_cast<u32>(S3_2);
    *global_009856f0 = std::bit_cast<u32>(S0_4);
    if (r1 != 0) {
        *gptr<u32>(r1) = std::bit_cast<u32>(S2_2);
    }
    guest::cpu()->r[1] = 0x886864u;  // (from the original)
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    return spot_search_origin_address;
}

}  // namespace d_00681f00
GUEST_EXPORT_FRAMED(0x00681f00, d_00681f00::AcPlayer_rec__find_spot, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00682080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Uses the held item: changes the player's state for its kind.
namespace d_00682080 {

struct __attribute__((packed)) Object_00682080_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 byte_172;
    u8 unknown_173[0x7ac];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Object_00682080_0, byte_171, 0x171);
GUEST_OFFSET(Object_00682080_0, byte_172, 0x172);
GUEST_OFFSET(Object_00682080_0, byte_91f, 0x91f);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u32, 0x00886ad8> global_00886ad8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x003117bc, u32(u32)> item_data_byte_0f;
inline constexpr guest::Function<0x004de6f0, u32(u32)> Mic__is_active;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00673a94, u32(u32, u32)> AcPlayer__start_state_8e;
inline constexpr guest::Function<0x0068229c, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state_if_holding;
inline constexpr guest::Function<0x00683784, u32(u32, u32)> AcPlayer__held_item;
inline constexpr guest::Function<0x0070e594, u32(u32, u32)> PlayerModel__hand_matrix;
inline constexpr guest::Function<0x007626c0, u32(u32, u32, u32, u32)> pair_flag_bit_6;

struct __attribute__((packed)) Frame_00682080 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00682080, word_0, 0x0);
GUEST_SIZE(Frame_00682080, 0x4);

u32 AcPlayer_rec__use_held_item(gptr<Object_00682080_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00682080> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r0_12 = 0;
    frame->word_0 = r3;
    if ((u32(arg0->byte_171) >> 5u & 1u) != 0) {
        u32 r0_1 = arg0->byte_91f;
        if (r0_1 == 0) {
            return r0_1;
        }
        u32 r0_2 = pair_flag_bit_6(arg0.addr(), r1, r2, r3);
        if (r0_2 != 0) {
            if ((u32(arg0->byte_172) >> 1u & 1u) == 0) {
                r0_4 = PlayerModel__hand_matrix(arg0.addr() + 0x1b4u, guest::cpu()->r[1]);  // (from the original)
            } else {
                r0_4 = empty_item_address;
            }
            u32 r0_5 = item_data_byte_0f(r0_4);
            if (r0_5 == 6u) {
                u32 r0_6 = AcPlayer_rec__change_state(arg0.addr(), 0x6cu, 0u, 0u);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_6 != 0) {
                    return 1u;
                }
            }
            u32 r0_7 = AcPlayer_rec__change_state_if_holding(arg0.addr(), 0xc3u, 0x10u, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_7 != 0) {
                return 1u;
            }
            u32 held_item = AcPlayer__held_item(arg0.addr(), 0u);
            r1 = guest::cpu()->r[1];
            if (held_item != 0) {
                return 1u;
            }
            u32 r0_9 = AcPlayer_rec__change_state_if_holding(arg0.addr(), 0xceu, 0x12u, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_9 != 0) {
                return 1u;
            }
            u32 r0_10 = AcPlayer_rec__change_state_if_holding(arg0.addr(), 0xcfu, 0x13u, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_10 != 0) {
                return 1u;
            }
            if ((u32(*gptr<u8>((arg0.addr() + 0x171u) + 1u)) >> 1u & 1u) == 0) {  // (from the original)
                r0_12 = PlayerModel__hand_matrix(arg0.addr() + 0x1b4u, r1);  // (from the original)
            } else {
                r0_12 = empty_item_address;
            }
            Item__copy_b(frame.at(0).addr(), r0_12);
            u32 r0_15 = item_data_byte_0f(frame.at(0).addr());
            if (r0_15 == 0xbu) {  // (from the original)
                u32 r0_16 = AcPlayer__start_state_8e(arg0.addr(), frame.at(0).addr());
                r1 = guest::cpu()->r[1];
                if (r0_16 != 0) {
                    return 1u;
                }
            }
        } else {
            u32 r0_18 = Mic__is_active(*global_00886ad8);
            r1 = guest::cpu()->r[1];
            if (r0_18 == 0) {
                return 0u;
            }
        }
        u32 r0_19 = AcPlayer_rec__change_state_if_holding(arg0.addr(), 0x8fu, 0xdu, 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_19 == 0) {
            u32 r0_20 = AcPlayer_rec__change_state_if_holding(arg0.addr(), 0x90u, 7u, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_20 == 0) {
                u32 r0_21 = AcPlayer_rec__change_state_if_holding(arg0.addr(), 0x91u, 0x11u, 0u);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_21 == 0) {
                    u32 r0_22 = AcPlayer_rec__change_state_if_holding(arg0.addr(), 0xd0u, 0x14u, 0u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0_22 == 0) {
                        return 0u;
                    }
                }
            }
        }
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00682080
GUEST_EXPORT_FRAMED(0x00682080, d_00682080::AcPlayer_rec__use_held_item, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0068229c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes to `state` when the item the player holds is of `kind` (only the test when `test_only`).
namespace d_0068229c {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x172];  // (not used here)
    u8 byte_172;
};
GUEST_OFFSET(Player, byte_172, 0x172);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x003117bc, u32(u32, u32, u32, u32)> item_data_byte_0f;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32, u32)> PlayerModel__hand_matrix;

u32 AcPlayer_rec__change_state_if_holding(gptr<Player> player, u32 state, u32 kind, u32 test_only) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 held = 0;
    u32 r0_4 = 0;
    u32 r7_1 = state;
    u32 r5_1 = kind;
    u32 r6_1 = test_only;
    if ((u32(player->byte_172) >> 1u & 1u) == 0) {
        held = PlayerModel__hand_matrix(player.addr() + 0x1b4u, state, kind, test_only);  // (from the original)
        state = guest::cpu()->r[1];
        kind = guest::cpu()->r[2];
        test_only = guest::cpu()->r[3];
    } else {
        held = empty_item_address;
    }
    u32 r0_3 = item_data_byte_0f(held, state, kind, test_only);
    if (r0_3 != r5_1) {
        r0_4 = 0u;
    } else if (r6_1 != 0) {
        r0_4 = 1u;
    } else {
        frame.release();
        return AcPlayer_rec__change_state(player.addr(), r7_1, 0u, 0u);
    }
    return r0_4;
}

}  // namespace d_0068229c
GUEST_EXPORT(0x0068229c, d_0068229c::AcPlayer_rec__change_state_if_holding);

// f_00682330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x3a with the position, angle and two bytes.
namespace d_00682330 {

struct __attribute__((packed)) Params {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Params, byte_13, 0x13);
GUEST_OFFSET(Params, byte_14, 0x14);

struct __attribute__((packed)) Local_00682330_r4_1 {
    u8 byte_0;
    u8 unknown_1[0x6];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_00682330_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_00682330_r4_1, byte_7, 0x7);

inline constexpr guest::Function<0x005d41fc, u32(u32, u32)> float3_xz_to_short2_b;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer_rec__request_state_3a(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    gptr<Params> params_2 = gptr<Params>(state_params_with_8bc(player, r1, r2, r3));
    gptr<Local_00682330_r4_1> r4_1 = gptr<Local_00682330_r4_1>(params_2.addr() + 0xeu);  // (from the original)
    r4_1->byte_0 = 3;
    float3_xz_to_short2_b(r4_1.addr() + 1u, r1);
    params_2->byte_13 = u8(u32(s32(r2) >> 8));
    params_2->byte_14 = u8(r3);
    r4_1->byte_7 = u8(r5_1);
    frame.release();
    return AcPlayer_rec__change_state(player, 0x3au, params_2.addr(), 0u);  // (from the original)
}

}  // namespace d_00682330
GUEST_EXPORT(0x00682330, d_00682330::AcPlayer_rec__request_state_3a);

// f_006833ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bit 3 of the flags at +0x176.
namespace d_006833ac {

struct __attribute__((packed)) Object_006833ac_0 {
    u8 unknown_0[0x176];  // (not used here)
    u8 byte_176;
};
GUEST_OFFSET(Object_006833ac_0, byte_176, 0x176);


u32 AcPlayer_rec__clear_flag_176_8(gptr<Object_006833ac_0> arg0) {
    u32 r1_1 = u32(arg0->byte_176) & ~8u;
    arg0->byte_176 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return arg0.addr() + 0x171u;  // (from the original)
}

}  // namespace d_006833ac
GUEST_EXPORT(0x006833ac, d_006833ac::AcPlayer_rec__clear_flag_176_8);

// f_006833c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the action of the item by its data (changing the player's state).
namespace d_006833c4 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x172];  // (not used here)
    u8 byte_172;
    u8 unknown_173[0x1];  // (not used here)
    u8 byte_174;
    u8 unknown_175[0x77e];  // (not used here)
    u8 byte_8f3;
    u8 unknown_8f4[0x13];  // (not used here)
    u8 byte_907;
    u8 unknown_908[0x13];  // (not used here)
    u8 byte_91b;
    u8 unknown_91c[0x3];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Player, byte_172, 0x172);
GUEST_OFFSET(Player, byte_174, 0x174);
GUEST_OFFSET(Player, byte_8f3, 0x8f3);
GUEST_OFFSET(Player, byte_907, 0x907);
GUEST_OFFSET(Player, byte_91b, 0x91b);
GUEST_OFFSET(Player, byte_91f, 0x91f);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x003117bc, u32(u32, u32, u32)> item_data_byte_0f;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x0067c2e4, u32(u32, u32, u32, u32)> AcPlayer__find_dig_target;
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32)> PlayerModel__hand_matrix;

u32 AcPlayer_rec__start_item_action(gptr<Player> player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_8 = 0;
    u32 r0_12 = 0;
    *frame.at<u32>(0) = r3;
    u32 r6_1 = r1;
    u32 r0_1 = player->byte_91f;
    if (r0_1 != 0) {
        u32 scene = current_scene_id(r0_1, r1, r2, r3);
        u32 scene_flagged = scene_has_flags(0x10000000u, scene);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r5_1 = player.addr() + 0x907u;  // (from the original)
        u32 r0_4 = (scene_flagged == 0 ? u32(player->byte_907) : u32(player->byte_8f3)) >> 6u & 1u;
        if (r0_4 != 0) {
            u32 scene_2 = current_scene_id(r0_4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 scene_flagged_2 = scene_has_flags(0x10000000u, scene_2);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (((scene_flagged_2 == 0 ? u32(player->byte_91b) : u32(player->byte_907)) >> 6u & 1u) == 0) {
                u32 r5_2 = player.addr() + 0x171u;  // (from the original)
                r1 = 1u;
                u32 r2_4 = u32(player->byte_174) >> 1u & 1u;
                if (r2_4 != 0) {
                    *frame.at<u8>(0) = u8(r1);
                    if ((u32(player->byte_172) >> 1u & 1u) == 0) {
                        r0_8 = PlayerModel__hand_matrix(player.addr() + 0x1b4u, r1, r2_4);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2_4 = guest::cpu()->r[2];
                    } else {
                        r0_8 = empty_item_address;
                    }
                    u32 r0_9 = item_data_byte_0f(r0_8, r1, r2_4);
                    u32 dig_target_2 = AcPlayer__find_dig_target(player.addr(), frame.at(0).addr(), 0u, r6_1);
                    r1 = guest::cpu()->r[1];
                    if (dig_target_2 != 0) {
                        return 1u;
                    }
                    if (r0_9 == 4u) {
                        if ((u32(player->byte_172) >> 1u & 1u) == 0) {
                            r0_12 = PlayerModel__hand_matrix(player.addr() + 0x1b4u, r1, guest::cpu()->r[2]);  // (from the original)
                            r1 = guest::cpu()->r[1];
                        } else {
                            r0_12 = empty_item_address;
                        }
                        u32 r0_13 = item_data_byte_0f(r0_12, r1, guest::cpu()->r[2]);
                        r1 = guest::cpu()->r[1];
                        if (r0_13 == 4u) {
                            if (r6_1 != 0) {
                                return 1u;
                            }
                            u32 r0_14 = AcPlayer_rec__change_state(player.addr(), 0x70u, 0u, 0u);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            if (r0_14 != 0) {
                                return 1u;
                            }
                        }
                        if (*frame.at<u8>(0) == 0) {
                            if (r6_1 == 0) {
                                AcPlayer_rec__change_state(player.addr(), 0x1eu, 0u, 0u);  // (from the original)
                                r1 = guest::cpu()->r[1];
                            }
                            guest::cpu()->r[1] = r1;
                            return 1u;
                        }
                    }
                }
            }
        }
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006833c4
GUEST_EXPORT_FRAMED(0x006833c4, d_006833c4::AcPlayer_rec__start_item_action, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006839a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0xb9 with the cell, item and byte; a first-kind item also starts its task.
namespace d_006839a8 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Player, byte_1ac, 0x1ac);

struct __attribute__((packed)) Local_006839a8_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u32 word_3;
    u8 byte_7;
};
GUEST_OFFSET(Local_006839a8_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_006839a8_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_006839a8_ea_1, byte_2, 0x2);
GUEST_OFFSET(Local_006839a8_ea_1, word_3, 0x3);
GUEST_OFFSET(Local_006839a8_ea_1, byte_7, 0x7);

struct __attribute__((packed)) Local_006839a8_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006839a8_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_006839a8_r1_1, word_4, 0x4);

inline constexpr guest::Function<0x00582c9c, u32(u32, u32)> start_task_or_mark_failed;
inline constexpr guest::Function<0x005c5794, u32(u32)> Player__slot_index;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x006515ec, u32(u32)> player_record_of_slot;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;
inline constexpr guest::Function<0x0076ae1c, u32(u32)> Item__value_if_2000;
inline constexpr guest::Function<0x0076c440, u32(u32, u32)> Item__is_first_item;

u32 AcPlayer_rec__request_state_b9(gptr<Player> player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    gptr<Local_006839a8_r1_1> r1_1 = gptr<Local_006839a8_r1_1>(frame.at(0x20).addr());  // (from the original)
    u32 item = r1_1->word_0;
    u32 r6_1 = r1_1->word_4;
    u32 params_2 = state_params_with_8bc(player.addr(), r1_1.addr(), r2, r3);
    gptr<Local_006839a8_ea_1> ea_1 = gptr<Local_006839a8_ea_1>(params_2 + 0xeu);  // (from the original)
    ea_1->byte_0 = u8(r1);
    ea_1->byte_1 = u8(r2);
    ea_1->byte_2 = u8(r3);
    u32 r1_2 = *gptr<u32>(item);
    ea_1->word_3 = r1_2;
    ea_1->byte_7 = u8(r6_1);
    u32 r0_2 = Item__is_first_item(item, r1_2);
    if (r0_2 != 0) {
        u32 r0_3 = Item__is_first_item(item, guest::cpu()->r[1]);
        if (r0_3 != 0) {
            u32 r0_4 = player->byte_1ac;
            u32 player_record_2 = player_record_of_slot(r0_4);
            if (player_record_2 != 0) {
                u32 r0_6 = Item__value_if_2000(item);
                if (r0_6 < 0x64u) {  // (from the original)
                    start_task_or_mark_failed(player_record_2 + 0x5494u, uxth(r0_6));  // (from the original)
                }
            }
        }
        u32 r0_8 = player->byte_1ac;
        Player__slot_index(r0_8);
    }
    frame.release();
    return AcPlayer_rec__change_state(player.addr(), 0xb9u, params_2, 0u);  // (from the original)
}

}  // namespace d_006839a8
GUEST_EXPORT(0x006839a8, d_006839a8::AcPlayer_rec__request_state_b9);

// f_006853fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records the item for the tour's result (when it counts) and updates the score.
namespace d_006853fc {

struct __attribute__((packed)) Local_006853fc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_006853fc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_006853fc_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_3, word_c, 0xc);

struct __attribute__((packed)) Local_006853fc_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_4, word_c, 0xc);

struct __attribute__((packed)) Local_006853fc_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_5, word_c, 0xc);

struct __attribute__((packed)) Local_006853fc_ea_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_6, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_6, word_c, 0xc);

inline constexpr u32 tour_result_instance_address = 0x0095c71cu;
inline constexpr u32 tour_result_items_address = 0x009853b0u;
inline guest::global<u32, 0x0095c71c> tour_result_instance;
inline guest::global<u32, 0x009853b0> tour_result_items;
inline guest::global<u32, 0x009853b4> global_009853b4;
inline constexpr guest::Function<0x0014f9ac, u32(u32, u32, u32, u32)> import_thunk_14f9ac;
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> TourResult__record_item;
inline constexpr guest::Function<0x00290108, u32(u32, u32, u32, u32)> TourState__count_c;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x0064f068, u32(u32, u32)> Tour__is_kind;
inline constexpr guest::Function<0x0070cc5c, u32(u32, u32, u32, u32)> script__WordFix_33u___WordFix_0070cc5c;
inline constexpr guest::Function<0x00768044, u32(u32)> Item__is_in_category_list_a;

void TourResult__record_item_2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006853fc_ea_6> ea_6 = gptr<Local_006853fc_ea_6>(0u);
    u32 r4_4 = 0;
    u32 r5_3 = 0;
    u32 r6_3 = 0;
    for (;;) {
        gptr<Local_006853fc_ea_3> ea_3 = gptr<Local_006853fc_ea_3>(r13 - 0x10);  // (from the original)
        ea_3->word_0 = r4;
        ea_3->word_4 = r5;
        ea_3->word_8 = r6;
        ea_3->word_c = r14;
        r13 -= 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        TourState__count_c(r0, r1, r2, r3);
        guest::cpu()->r[13] = r13;
        u32 r0_3 = Tour__is_kind(2u, 0x40u);  // (from the original)
        if (r0_3 != 0) {
            u32 r4_2 = *tour_result_instance;
            if (r4_2 == 0) {
                ea_6 = gptr<Local_006853fc_ea_6>(r13);
                r13 += 0x10;  // (from the original)
                r4_4 = ea_6->word_0;
                r5_3 = ea_6->word_4;
                r6_3 = ea_6->word_8;
                guest::cpu()->r[4] = r4_4;
                guest::cpu()->r[5] = r5_3;
                guest::cpu()->r[6] = r6_3;
                guest::cpu()->r[13] = r13;
                return;
            }
            guest::cpu()->r[13] = r13;
            u32 r0_4 = current_net_station(tour_result_instance_address);
            guest::cpu()->r[13] = r13;
            TourResult__record_item(r4_2, r0_4, 1u, r1);
            gptr<Local_006853fc_ea_4> ea_4 = gptr<Local_006853fc_ea_4>(r13);
            r13 += 0x10;  // (from the original)
            u32 r4_3 = ea_4->word_0;
            u32 r5_2 = ea_4->word_4;
            u32 r6_2 = ea_4->word_8;
            r14 = ea_4->word_c;
            guest::cpu()->r[13] = r13;
            guest::cpu()->r[4] = r4_3;
            guest::cpu()->r[5] = r5_2;
            guest::cpu()->r[6] = r6_2;
            script__WordFix_33u___WordFix_0070cc5c(r4_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_5 = Item__is_in_category_list_a(r1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            ea_6 = gptr<Local_006853fc_ea_6>(r13);
            r13 += 0x10;  // (from the original)
            r4_4 = ea_6->word_0;
            r5_3 = ea_6->word_4;
            r6_3 = ea_6->word_8;
            guest::cpu()->r[4] = r4_4;
            guest::cpu()->r[5] = r5_3;
            guest::cpu()->r[6] = r6_3;
            guest::cpu()->r[13] = r13;
            return;
        }
        gptr<Local_006853fc_ea_5> ea_5 = gptr<Local_006853fc_ea_5>(r13);
        r13 += 0x10;  // (from the original)
        r4 = ea_5->word_0;
        r5 = ea_5->word_4;
        r6 = ea_5->word_8;
        r14 = ea_5->word_c;
        if (!1) {
            break;
        }
        gptr<Local_006853fc_ea_1> ea_1 = gptr<Local_006853fc_ea_1>(r13 - 0x10);  // (from the original)
        ea_1->word_0 = r4;
        ea_1->word_4 = r5;
        ea_1->word_8 = r6;
        ea_1->word_c = r14;
        r13 -= 0x10;  // (from the original)
        r4 = *tour_result_items;
        r5 = *global_009853b4;
        if (r4 != r5) {
            do {
                u32 r0_1 = *gptr<u32>(r4);
                if (r0_1 != 0) {
                    guest::cpu()->r[13] = r13;
                    import_thunk_14f9ac(r0_1 + 0x1334u, r1, r2, r3);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 += 4u;
                guest::preempt();
            } while (r4 != r5);
        }
        gptr<Local_006853fc_ea_2> ea_2 = gptr<Local_006853fc_ea_2>(r13);
        r13 += 0x10;  // (from the original)
        u32 r4_1 = ea_2->word_0;
        u32 r5_1 = ea_2->word_4;
        u32 r6_1 = ea_2->word_8;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[13] = r13;
        return;
        guest::preempt();
    }
    ea_6 = gptr<Local_006853fc_ea_6>(r13);
    r13 += 0x10;  // (from the original)
    r4_4 = ea_6->word_0;
    r5_3 = ea_6->word_4;
    r6_3 = ea_6->word_8;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_006853fc
GUEST_EXPORT(0x006853fc, d_006853fc::TourResult__record_item_2);

// f_00685c18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In flagged scenes, when bit 5 of +0x171 is set, starts the scene event once (bit 3 of +0x176).
namespace d_00685c18 {

struct __attribute__((packed)) Object_00685c18_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x4];  // (not used here)
    u8 byte_176;
};
GUEST_OFFSET(Object_00685c18_0, byte_171, 0x171);
GUEST_OFFSET(Object_00685c18_0, byte_176, 0x176);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0068f290, u32(u32)> CameraCtl__leave_mode_1a;

u32 AcPlayer_rec__start_flagged_scene_once(gptr<Object_00685c18_0> arg0, u32 r1) {
    u32 r4_1 = arg0.addr() + 0x171u;  // (from the original)
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 scene = current_scene_id(r0_1);
    u32 scene_flagged = scene_has_flags(0x10000000u, scene);  // (from the original)
    if (scene_flagged == 0) {
        return scene_flagged;
    }
    u32 r0_4 = u32(arg0->byte_176) >> 3u & 1u;
    if (r0_4 != 0) {
        return r0_4;
    }
    CameraCtl__leave_mode_1a(r0_4);
    u32 r0_5 = u32(arg0->byte_176) | 8u;
    arg0->byte_176 = u8(r0_5);
    return r0_5;
}

}  // namespace d_00685c18
GUEST_EXPORT_FRAMED(0x00685c18, d_00685c18::AcPlayer_rec__start_flagged_scene_once, 0x4010);  // pushes {r4, lr} first, as the original

// f_00685d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0xb8 with the angle and two bytes.
namespace d_00685d7c {

struct __attribute__((packed)) Object_00685d7c_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_00685d7c_1, half_0, 0x0);

struct __attribute__((packed)) Local_00685d7c_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_00685d7c_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_00685d7c_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_00685d7c_ea_1, byte_2, 0x2);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

void AcPlayer_rec__request_state_b8(u32 player, gptr<Object_00685d7c_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 params_2 = state_params_with_8bc(player, arg1.addr(), r2, r3);
    gptr<Local_00685d7c_ea_1> ea_1 = gptr<Local_00685d7c_ea_1>(params_2 + 0xeu);  // (from the original)
    ea_1->byte_0 = u8(u32(s32(u32(arg1->half_0)) >> 8));
    ea_1->byte_1 = u8(r2);
    ea_1->byte_2 = u8(r3);
    frame.release();
    AcPlayer_rec__change_state(player, 0xb8u, params_2, 0u);
    return;  // (from the original)
}

}  // namespace d_00685d7c
GUEST_EXPORT(0x00685d7c, d_00685d7c::AcPlayer_rec__request_state_b8);

// f_00687394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In tours of kinds 5 and 9, counts the goal (marking the main object when asked).
namespace d_00687394 {

inline constexpr u32 tour_result_instance_address = 0x0095c71cu;
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> TourResult__record_item;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> Tour__is_kind;
inline constexpr guest::Function<0x0070cc5c, u32(u32, u32, u32, u32)> script__WordFix_33u___WordFix_0070cc5c;

void TourResult__count_goal(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x14);  // (from the original)
    u32 r0_1 = Tour__is_kind(5u, 0x40u, r2, r3);  // (from the original)
    if (r0_1 == 0) {
        u32 r0_2 = Tour__is_kind(9u, 0x40u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 == 0) {
            return;
        }
    }
    u32 r0_3 = tour_result_instance_address;
    u32 r4_1 = *gptr<u32>(r0_3);
    if (r4_1 != 0) {
        if (r5_1 != 0) {
            u32 r0_4 = current_net_station(r0_3);
            r0_3 = r4_1;
            TourResult__record_item(r0_3, r0_4, 1u, r3);
        }
        frame.release();
        script__WordFix_33u___WordFix_0070cc5c(r0_3, r3, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_00687394
GUEST_EXPORT(0x00687394, d_00687394::TourResult__count_goal);

// f_0068752c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position of the NPC source, or the default position (0xae5658).
namespace d_0068752c {

inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline constexpr u32 origin_x_address = 0x00ae5658u;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline guest::global<u32, 0x00ae5658> origin_x;
inline guest::global<u32, 0x00ae565c> origin_y;
inline guest::global<u32, 0x00ae5660> origin_z;
inline constexpr guest::Function<0x0014fd24, u32(u32, u32, u32)> import_thunk_14fd24;
inline constexpr guest::Function<0x006dfde8, u32(u32, u32, u32, u32)> value_of_source;

struct __attribute__((packed)) Frame_0068752c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068752c, word_0, 0x0);
GUEST_OFFSET(Frame_0068752c, word_4, 0x4);
GUEST_OFFSET(Frame_0068752c, word_8, 0x8);
GUEST_SIZE(Frame_0068752c, 0x10);

void npc_source_position(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0068752c> frame;  // the original's stack frame
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    if (*event_npc_mode == 0xffu) {  // (from the original)
        u32 r0_1 = *event_npc_source;
        if (r0_1 != 0) {
            u32 value_2 = value_of_source(r0_1, r1, r2, guest::cpu()->r[3]);
            if (value_2 == 0) {
                r0_3 = *origin_x;
                r1_1 = *origin_y;
                r2_1 = *origin_z;
            } else {
                import_thunk_14fd24(value_2, frame.at(0).addr(), r1);
                r0_3 = frame->word_0;
                r1_1 = frame->word_4;
                r2_1 = frame->word_8;
            }
            *gptr<u32>(r0) = r0_3;
            *gptr<u32>(r0 + 4) = r1_1;
            *gptr<u32>(r0 + 8) = r2_1;
            return;
        }
    }
    u32 r1_3 = *origin_y;
    u32 r2_2 = *origin_z;
    *gptr<u32>(r0) = *origin_x;
    *gptr<u32>(r0 + 4) = r1_3;
    *gptr<u32>(r0 + 8) = r2_2;
}

}  // namespace d_0068752c
GUEST_EXPORT_FRAMED(0x0068752c, d_0068752c::npc_source_position, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00687bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687bac {

struct __attribute__((packed)) AcPlayerRec {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x2];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x4];  // (not used here)
    u16 half_34;
    u8 unknown_36[0x13b];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x5];  // (not used here)
    u8 byte_177;
    u8 unknown_178[0x31];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x772];  // (not used here)
    u8 byte_91c;
};
GUEST_OFFSET(AcPlayerRec, word_14, 0x14);
GUEST_OFFSET(AcPlayerRec, word_18, 0x18);
GUEST_OFFSET(AcPlayerRec, word_1c, 0x1c);
GUEST_OFFSET(AcPlayerRec, word_20, 0x20);
GUEST_OFFSET(AcPlayerRec, word_24, 0x24);
GUEST_OFFSET(AcPlayerRec, word_28, 0x28);
GUEST_OFFSET(AcPlayerRec, half_2e, 0x2e);
GUEST_OFFSET(AcPlayerRec, half_34, 0x34);
GUEST_OFFSET(AcPlayerRec, byte_171, 0x171);
GUEST_OFFSET(AcPlayerRec, byte_177, 0x177);
GUEST_OFFSET(AcPlayerRec, byte_1a9, 0x1a9);
GUEST_OFFSET(AcPlayerRec, byte_91c, 0x91c);

inline constexpr u32 origin_x_address = 0x00ae5658u;
inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32)> state_params_with_8bc;
inline constexpr guest::Function<0x0066a34c, u32(u32)> event_npc_angle;
inline constexpr guest::Function<0x007656b8, u32(u32, u32, u32, u32)> SlotObject__hand_position;

struct __attribute__((packed)) Frame_00687bac {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00687bac, word_0, 0x0);
GUEST_OFFSET(Frame_00687bac, word_4, 0x4);
GUEST_OFFSET(Frame_00687bac, word_8, 0x8);
GUEST_SIZE(Frame_00687bac, 0x14);

u32 AcPlayer_rec__state_189_update(gptr<AcPlayerRec> ac_player_rec, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00687bac> frame;  // the original's stack frame
    SlotObject__hand_position(frame.at(0).addr(), ac_player_rec.addr(), r2, r3);
    ac_player_rec->word_14 = frame->word_0;
    ac_player_rec->word_18 = frame->word_4;
    ac_player_rec->word_1c = frame->word_8;
    ac_player_rec->word_20 = frame->word_0;
    ac_player_rec->word_24 = frame->word_4;
    ac_player_rec->word_28 = frame->word_8;
    u32 r0_3 = float3_xz_to_short2_a(ac_player_rec.addr() + 0x53cu, origin_x_address);  // (from the original)
    u32 r0_4 = event_npc_angle(r0_3);
    *frame.at<u32>(0xc) = r0_4;  // (from the original)
    u32 r0_5 = *frame.at<u16>(0xc);  // (from the original)
    ac_player_rec->half_2e = u16(r0_5);
    ac_player_rec->half_34 = u16(r0_5);
    u32 r0_6 = ac_player_rec->byte_1a9;
    if (r0_6 == 3u) {
        return r0_6;
    }
    u32 r1_3 = u32(ac_player_rec->byte_171) >> 5u & 1u;
    if (r1_3 == 0) {
        guest::cpu()->r[1] = r1_3;
        return ac_player_rec.addr() + 0x171u;  // (from the original)
    }
    u32 r0_8 = u32(ac_player_rec->byte_177) >> 2u & 1u;
    if (r0_8 != 0) {
        guest::cpu()->r[1] = r1_3;
        return r0_8;
    }
    u32 r0_9 = ac_player_rec->byte_91c;
    if (r0_9 != 2u) {
        guest::cpu()->r[1] = r1_3;
        return r0_9;
    }
    u32 params_2 = state_params_with_8bc(ac_player_rec.addr(), r1_3);
    *gptr<u8>(params_2 + 0xeu) = 0;  // (from the original)
    u32 r0_11 = AcPlayer_rec__change_state(ac_player_rec.addr(), 0xbfu, params_2, 0u);  // (from the original)
    return r0_11;
}

}  // namespace d_00687bac
GUEST_EXPORT_FRAMED(0x00687bac, d_00687bac::AcPlayer_rec__state_189_update, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00687f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when catching the item gives the player the last missing item of the category (in the caught set, +0x6c20).
namespace d_00687f04 {

struct __attribute__((packed)) Object_00687f04_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00687f04_0, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x005359fc, u32(u32)> category_info;
inline constexpr guest::Function<0x0076fd38, u32(u32, u32)> ItemSet__has_full_category;
inline constexpr guest::Function<0x0076fe68, u32(u32, u32, u32)> count_in_category;
inline constexpr guest::Function<0x007701b8, u32(u32, u32)> ItemBitSet__contains;

struct __attribute__((packed)) Frame_00687f04 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00687f04, word_0, 0x0);
GUEST_SIZE(Frame_00687f04, 0x4);

u32 catch_completes_category(gptr<Object_00687f04_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00687f04> frame;  // the original's stack frame
    u32 r0_11 = 0;
    frame->word_0 = r3;
    u32 r0_1 = arg0->byte_1ac;
    u32 player_3 = player_of_slot_index(r0_1, r1, r2, r3);
    if (player_3 != 0) {
        u32 r0_3 = arg0->byte_1ac;
        u32 player_4 = player_of_slot_index(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (player_4 != 0) {
            u32 r0_6 = ItemSet__has_full_category(player_4 + 0x6c20u, r1);  // (from the original)
            if (r0_6 != 0) {
                return 0u;
            }
        }
        u32 r5_1 = player_3 + 0x6c20u;  // (from the original)
        u32 r0_7 = frame.at(0).addr();
        Item__copy_b(r0_7, r2);
        u32 r0_8 = ItemBitSet__contains(r5_1, r0_7);
        if (r0_8 == 0) {
            u32 info_2 = category_info(r1);
            u32 r4_1 = *gptr<u32>(info_2 + 4u);
            u32 r0_10 = count_in_category(r5_1, r1, 1u);
            r0_11 = r4_1 - r0_10;
            if (r0_11 == 1u) {
                return r0_11;
            }
        }
    }
    return 0u;
}

}  // namespace d_00687f04
GUEST_EXPORT_FRAMED(0x00687f04, d_00687f04::catch_completes_category, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00687fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0xa7 with the byte.
namespace d_00687fb4 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer_rec__request_state_a7(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 params_2 = state_params_with_8bc(player, r1, r2, r3);
    *gptr<u8>(params_2 + 0xeu) = u8(r1);  // (from the original)
    frame.release();
    return AcPlayer_rec__change_state(player, 0xa7u, params_2, 0u);  // (from the original)
}

}  // namespace d_00687fb4
GUEST_EXPORT(0x00687fb4, d_00687fb4::AcPlayer_rec__request_state_a7);

// f_00687fe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0xc5 with the two halves, the angle (of the given item or the player's) and three bytes.
namespace d_00687fe0 {

struct __attribute__((packed)) Local_00687fe0_ea_1 {
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
};
GUEST_OFFSET(Local_00687fe0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00687fe0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00687fe0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00687fe0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00687fe0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00687fe0_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00687fe0_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00687fe0_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00687fe0_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_00687fe0_ea_1, word_24, 0x24);

struct __attribute__((packed)) Local_00687fe0_ea_2 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x2];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_00687fe0_ea_2, half_0, 0x0);
GUEST_OFFSET(Local_00687fe0_ea_2, byte_4, 0x4);
GUEST_OFFSET(Local_00687fe0_ea_2, byte_7, 0x7);

struct __attribute__((packed)) Local_00687fe0_ea_7 {
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
GUEST_OFFSET(Local_00687fe0_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_00687fe0_ea_7, word_4, 0x4);
GUEST_OFFSET(Local_00687fe0_ea_7, word_8, 0x8);
GUEST_OFFSET(Local_00687fe0_ea_7, word_c, 0xc);
GUEST_OFFSET(Local_00687fe0_ea_7, word_10, 0x10);
GUEST_OFFSET(Local_00687fe0_ea_7, word_14, 0x14);
GUEST_OFFSET(Local_00687fe0_ea_7, word_18, 0x18);
GUEST_OFFSET(Local_00687fe0_ea_7, word_1c, 0x1c);
GUEST_OFFSET(Local_00687fe0_ea_7, word_20, 0x20);

struct __attribute__((packed)) Local_00687fe0_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00687fe0_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_00687fe0_r1_1, word_4, 0x4);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) Frame_00687fe0 {
    u16 half_0;
    u8 unknown_2[0x26];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00687fe0, half_0, 0x0);
GUEST_SIZE(Frame_00687fe0, 0x28);

u32 AcPlayer_rec__request_state_c5(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00687fe0> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00687fe0_ea_1> ea_1 = gptr<Local_00687fe0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r10;
    ea_1->word_20 = r11;
    ea_1->word_24 = r14;
    gptr<Local_00687fe0_r1_1> r1_1 = gptr<Local_00687fe0_r1_1>(frame.at(0x2c).addr());  // (from the original)
    u32 r5_1 = *frame.at<u32>(0x28);  // (from the original)
    u32 r4_1 = r1_1->word_0;
    u32 r6_1 = r1_1->word_4;
    u32 params_2 = state_params_with_8bc(player, r1_1.addr(), r2, r3);
    gptr<Local_00687fe0_ea_2> ea_2 = gptr<Local_00687fe0_ea_2>(params_2 + 0xeu);  // (from the original)
    ea_2->half_0 = u16(r1);
    frame->half_0 = u16(r2);
    *gptr<u16>(ea_2.addr() + 2u) = u16(r2);
    if (r4_1 == 0) {
        r4_1 = player + 0x2eu;  // (from the original)
    }
    *gptr<u8>(params_2 + 0x14u) = u8(r3);  // (from the original)
    *gptr<u8>(params_2 + 0x13u) = u8(r5_1);  // (from the original)
    ea_2->byte_4 = u8(u32(s32(u32(*gptr<u16>(r4_1))) >> 8));
    ea_2->byte_7 = u8(r6_1);
    gptr<Local_00687fe0_ea_7> ea_7 = gptr<Local_00687fe0_ea_7>(frame.at(4).addr());
    u32 r4_2 = ea_7->word_0;
    u32 r5_2 = ea_7->word_4;
    u32 r6_2 = ea_7->word_8;
    u32 r7_1 = ea_7->word_c;
    u32 r8_1 = ea_7->word_10;
    u32 r9_1 = ea_7->word_14;
    u32 r10_1 = ea_7->word_18;
    u32 r11_1 = ea_7->word_1c;
    r14 = ea_7->word_20;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    frame.release();
    return AcPlayer_rec__change_state(player, 0xc5u, params_2, 0u);  // (from the original)
}

}  // namespace d_00687fe0
GUEST_EXPORT(0x00687fe0, d_00687fe0::AcPlayer_rec__request_state_c5);

// f_00688144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x89 with the position, angle and two bytes.
namespace d_00688144 {

struct __attribute__((packed)) Params {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Params, byte_13, 0x13);
GUEST_OFFSET(Params, byte_14, 0x14);

struct __attribute__((packed)) Local_00688144_r4_1 {
    u8 byte_0;
    u8 unknown_1[0x6];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_00688144_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_00688144_r4_1, byte_7, 0x7);

inline constexpr guest::Function<0x005d41fc, u32(u32, u32)> float3_xz_to_short2_b;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer_rec__request_state_89(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    gptr<Params> params_2 = gptr<Params>(state_params_with_8bc(player, r1, r2, r3));
    gptr<Local_00688144_r4_1> r4_1 = gptr<Local_00688144_r4_1>(params_2.addr() + 0xeu);  // (from the original)
    r4_1->byte_0 = 3;
    float3_xz_to_short2_b(r4_1.addr() + 1u, r1);
    params_2->byte_13 = u8(u32(s32(r2) >> 8));
    params_2->byte_14 = u8(r3);
    r4_1->byte_7 = u8(r5_1);
    frame.release();
    return AcPlayer_rec__change_state(player, 0x89u, params_2.addr(), 0u);  // (from the original)
}

}  // namespace d_00688144
GUEST_EXPORT(0x00688144, d_00688144::AcPlayer_rec__request_state_89);

// f_00689120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0xc0 with the word and two bytes.
namespace d_00689120 {

struct __attribute__((packed)) Object_00689120_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00689120_1, word_0, 0x0);

struct __attribute__((packed)) Local_00689120_ea_1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Local_00689120_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00689120_ea_1, byte_4, 0x4);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

u32 AcPlayer_rec__request_state_c0(u32 player, gptr<Object_00689120_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 params_2 = state_params_with_8bc(player, arg1.addr(), r2, r3);
    gptr<Local_00689120_ea_1> ea_1 = gptr<Local_00689120_ea_1>(params_2 + 0xeu);  // (from the original)
    ea_1->word_0 = arg1->word_0;
    ea_1->byte_4 = u8(r2);
    *gptr<u8>(params_2 + 0x13u) = u8(r3);  // (from the original)
    frame.release();
    return AcPlayer_rec__change_state(player, 0xc0u, params_2, 0u);  // (from the original)
}

}  // namespace d_00689120
GUEST_EXPORT(0x00689120, d_00689120::AcPlayer_rec__request_state_c0);

// f_00689890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests player state 0x2d with the position, angle and byte.
namespace d_00689890 {

struct __attribute__((packed)) Object_00689890_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_00689890_2, half_0, 0x0);

inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> float3_xz_to_short2_a;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

void AcPlayer_rec__request_state_2d(u32 player, u32 r1, gptr<Object_00689890_2> arg2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 params_2 = state_params_with_8bc(player, r1, arg2.addr(), r3);
    u32 r4_1 = params_2 + 0xeu;  // (from the original)
    float3_xz_to_short2_a(r4_1, r1);
    *gptr<u8>(r4_1 + 8u) = u8(u32(s32(u32(arg2->half_0)) >> 8));
    *gptr<u8>(params_2 + 0x17u) = u8(r3);  // (from the original)
    frame.release();
    AcPlayer_rec__change_state(player, 0x2du, params_2, 0u);
    return;  // (from the original)
}

}  // namespace d_00689890
GUEST_EXPORT(0x00689890, d_00689890::AcPlayer_rec__request_state_2d);

// f_0068a3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In some flagged scenes, when bit 5 of +0x171 is set, sets bit 2 of the player state flags (0xaaef14).
namespace d_0068a3fc {

struct __attribute__((packed)) Object_0068a3fc_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x37];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Object_0068a3fc_0, byte_171, 0x171);
GUEST_OFFSET(Object_0068a3fc_0, byte_1a9, 0x1a9);

inline guest::global<u8, 0x00aaef14> player_slot_flags;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;

void AcPlayer_rec__mark_scene_exit(gptr<Object_0068a3fc_0> arg0, u32 r1) {
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        u32 scene = current_scene_id(r0_1);
        u32 scene_flagged = scene_has_flags(4u, scene);
        r1 = guest::cpu()->r[1];
        if (scene_flagged != 0) {
            u32 scene_2 = current_scene_id(scene_flagged);
            u32 scene_flagged_2 = scene_has_flags(0x20u, scene_2);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (scene_flagged_2 == 0) {
                u32 scene_3 = current_scene_id(scene_flagged_2);
                u32 scene_flagged_3 = scene_has_flags(0x10u, scene_3);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (scene_flagged_3 != 0) {
                    return;
                }
            } else if (arg0->byte_1a9 == 0x46u) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return;
            }
            *player_slot_flags = u8(u32(*player_slot_flags) | 4u);
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0068a3fc
GUEST_EXPORT_FRAMED(0x0068a3fc, d_0068a3fc::AcPlayer_rec__mark_scene_exit, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0068a80c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the player's appearance (face, hair, color, flag) and outfit into the actor and refreshes its model.
namespace d_0068a80c {

struct __attribute__((packed)) Object_0068a80c_0 {
    u8 unknown_0[0x173];  // (not used here)
    u8 byte_173;
    u8 unknown_174[0x38];  // (not used here)
    u8 byte_1ac;
    u8 unknown_1ad[0x233];  // (not used here)
    u32 word_3e0;
    u8 unknown_3e4[0x4];  // (not used here)
    u8 byte_3e8;
    u8 unknown_3e9[0x559];  // (not used here)
    u8 byte_942;
    u8 unknown_943[0x1];  // (not used here)
    u32 word_944;
    u32 word_948;
    u8 byte_94c;
};
GUEST_OFFSET(Object_0068a80c_0, byte_173, 0x173);
GUEST_OFFSET(Object_0068a80c_0, byte_1ac, 0x1ac);
GUEST_OFFSET(Object_0068a80c_0, word_3e0, 0x3e0);
GUEST_OFFSET(Object_0068a80c_0, byte_3e8, 0x3e8);
GUEST_OFFSET(Object_0068a80c_0, byte_942, 0x942);
GUEST_OFFSET(Object_0068a80c_0, word_944, 0x944);
GUEST_OFFSET(Object_0068a80c_0, word_948, 0x948);
GUEST_OFFSET(Object_0068a80c_0, byte_94c, 0x94c);

inline constexpr guest::Function<0x0010ac51, u32(u32, u32)> Outfit__copy;
inline constexpr guest::Function<0x001d2e8c, u32(u32, u32, u32)> set_face_and_hair;
inline constexpr guest::Function<0x001d32c8, u32(u32, u32)> copy_item_set;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x00712c18, u32(u32)> byte_0_below_34;
inline constexpr guest::Function<0x00712c28, u32(u32)> byte_3_below_6;
inline constexpr guest::Function<0x00712c38, u32(u32)> byte_1_below_16;

void AcPlayer_rec__load_appearance(gptr<Object_0068a80c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_1ac;
    u32 player_2 = player_of_slot_index(r0_1, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (player_2 != 0) {
        u32 r0_3 = byte_0_below_34(player_2 + 4u);
        arg0->byte_942 = u8(r0_3);
        u32 r0_4 = byte_1_below_16(player_2 + 4u);
        arg0->word_944 = r0_4;
        u32 r0_5 = byte_3_below_6(player_2 + 4u);
        arg0->word_948 = r0_5;
        arg0->byte_94c = u8(u32(*gptr<u8>(player_2 + 0x570eu)) >> 6u & 1u);  // (from the original)
        Outfit__copy(arg0.addr() + 0x920u, player_2 + 0xau);  // (from the original)
        copy_item_set(arg0.addr() + 0x1b4u, arg0.addr() + 0x920u);  // (from the original)
        u32 r2_1 = arg0->word_944;
        u32 r1_4 = arg0->byte_942;
        set_face_and_hair(arg0.addr() + 0x1b4u, r1_4, r2_1);  // (from the original)
        arg0->word_3e0 = arg0->word_948;
        arg0->byte_3e8 = arg0->byte_94c;
        r1_1 = u32(arg0->byte_173) | 8u | 0x20u;  // (from the original)
        arg0->byte_173 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0068a80c
GUEST_EXPORT_FRAMED(0x0068a80c, d_0068a80c::AcPlayer_rec__load_appearance, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0068aa1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests the player's movement state with the target position and mode.
namespace d_0068aa1c {

struct __attribute__((packed)) CatchMgr {
    u32 word_0;
};
GUEST_OFFSET(CatchMgr, word_0, 0x0);

struct __attribute__((packed)) Local_0068aa1c_ea_1 {
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
};
GUEST_OFFSET(Local_0068aa1c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_24, 0x24);

struct __attribute__((packed)) Local_0068aa1c_ea_10 {
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
GUEST_OFFSET(Local_0068aa1c_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_4, 0x4);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_8, 0x8);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_c, 0xc);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_10, 0x10);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_14, 0x14);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_18, 0x18);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_1c, 0x1c);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_20, 0x20);

struct __attribute__((packed)) Local_0068aa1c_ea_2 {
    u32 word_0;
    u8 unknown_4[0x3];  // (not used here)
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_0068aa1c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0068aa1c_ea_2, byte_7, 0x7);
GUEST_OFFSET(Local_0068aa1c_ea_2, byte_8, 0x8);

struct __attribute__((packed)) Local_0068aa1c_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0068aa1c_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0068aa1c_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_0068aa1c_r1_1, word_8, 0x8);

struct __attribute__((packed)) Local_0068aa1c_r6_1 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Local_0068aa1c_r6_1, float_0, 0x0);
GUEST_OFFSET(Local_0068aa1c_r6_1, float_8, 0x8);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> state_params_with_8bc;

struct __attribute__((packed)) Frame_0068aa1c {
    u16 half_0;
    u8 unknown_2[0x26];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068aa1c, half_0, 0x0);
GUEST_SIZE(Frame_0068aa1c, 0x28);

void AcPlayer_rec__request_move_state(u32 player, gptr<CatchMgr> catch_mgr, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_0068aa1c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0068aa1c_ea_1> ea_1 = gptr<Local_0068aa1c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r10;
    ea_1->word_20 = r11;
    ea_1->word_24 = r14;
    gptr<Local_0068aa1c_r1_1> r1_1 = gptr<Local_0068aa1c_r1_1>(frame.at(0x28).addr());  // (from the original)
    u32 r4_1 = r1_1->word_0;
    u32 r5_1 = r1_1->word_4;
    gptr<Local_0068aa1c_r6_1> r6_1 = gptr<Local_0068aa1c_r6_1>(r1_1->word_8);
    u32 params_2 = state_params_with_8bc(player, r1_1.addr(), r2, r3);
    float S1_1 = 4.0f;
    gptr<Local_0068aa1c_ea_2> ea_2 = gptr<Local_0068aa1c_ea_2>(params_2 + 0xeu);  // (from the original)
    ea_2->word_0 = catch_mgr->word_0;
    frame->half_0 = u16(r4_1);
    *gptr<u16>(ea_2.addr() + 4u) = u16(r4_1);
    *gptr<u8>(params_2 + 0x14u) = u8(r3);  // (from the original)
    ea_2->byte_7 = u8(r2);
    ea_2->byte_8 = u8(r5_1);
    u32 r0_2 = vcvt_sz_f(r6_1->float_0 * S1_1);
    frame->half_0 = u16(r0_2);
    *gptr<u16>(params_2 + 0x17u) = u16(r0_2);  // (from the original)
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(r6_1->float_8 * S1_1));
    u32 r0_3 = std::bit_cast<u32>(S0_1);
    frame->half_0 = u16(r0_3);
    *gptr<u16>(params_2 + 0x19u) = u16(r0_3);  // (from the original)
    gptr<Local_0068aa1c_ea_10> ea_10 = gptr<Local_0068aa1c_ea_10>(frame.at(4).addr());
    u32 r4_2 = ea_10->word_0;
    u32 r5_2 = ea_10->word_4;
    u32 r6_2 = ea_10->word_8;
    u32 r7_1 = ea_10->word_c;
    u32 r8_1 = ea_10->word_10;
    u32 r9_1 = ea_10->word_14;
    u32 r10_1 = ea_10->word_18;
    u32 r11_1 = ea_10->word_1c;
    r14 = ea_10->word_20;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    frame.release();
    AcPlayer_rec__change_state(player, 0x3eu, params_2, 0u);
    return;
}

}  // namespace d_0068aa1c
GUEST_EXPORT(0x0068aa1c, d_0068aa1c::AcPlayer_rec__request_move_state);

// f_0068b404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Handles the goal: in tour kind 10 counts it for the tour's result, else runs the flagged callback.
namespace d_0068b404 {

inline constexpr u32 tour_result_instance_address = 0x0095c71cu;
inline guest::global<u32, 0x0014fd48> global_0014fd48;
inline guest::global<u32, 0x0095c71c> tour_result_instance;
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> TourResult__record_item;
inline constexpr guest::Function<0x00292ccc, u32(u32, u32, u32, u32)> TourState__count_b;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x0064f068, u32(u32, u32)> Tour__is_kind;
inline constexpr guest::Function<0x0070cc5c, u32(u32, u32, u32, u32)> script__WordFix_33u___WordFix_0070cc5c;

void AcPlayer_rec__on_goal(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    TourState__count_b(r0, r1, r2, r3);
    u32 r0_1 = Tour__is_kind(0xau, 0x40u);  // (from the original)
    if (r0_1 != 0) {
        u32 r4_1 = *tour_result_instance;
        if (r4_1 == 0) {
            return;
        }
        u32 r0_2 = current_net_station(tour_result_instance_address);
        TourResult__record_item(r4_1, r0_2, 1u, r1);
        frame.release();
        script__WordFix_33u___WordFix_0070cc5c(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    u32 r0_3 = u32(*gptr<u8>(r0 + 0x177u)) >> 5u & 1u;  // (from the original)
    if (r0_3 != 0) {
        frame.release();
        guest::call_address<u32>(*global_0014fd48, r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_0068b404
GUEST_EXPORT(0x0068b404, d_0068b404::AcPlayer_rec__on_goal);

// f_0068b4d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Leaves the special mode (bit 6 of +0x91a) or, when bit 5 is set, changes to state 0x21; true when it did.
namespace d_0068b4d0 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x91a];  // (not used here)
    u8 byte_91a;
};
GUEST_OFFSET(Player, byte_91a, 0x91a);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00651928, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_20;

u32 AcPlayer_rec__leave_special_mode(gptr<Player> player, u32 r1) {
    u32 r2_1 = player->byte_91a;
    u32 r3_1 = r2_1 >> 6u & 1u;
    if (r3_1 != 0) {
        AcPlayer_rec__request_state_20(player.addr(), r1 ^ 1u, 1u, r3_1);
        return 1u;
    }
    u32 r1_3 = r2_1 >> 5u & 1u;
    if (r1_3 == 0) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    AcPlayer_rec__change_state(player.addr(), 0x21u, 0u, 0u);  // (from the original)
    return 1u;
}

}  // namespace d_0068b4d0
GUEST_EXPORT_FRAMED(0x0068b4d0, d_0068b4d0::AcPlayer_rec__leave_special_mode, 0x4010);  // pushes {r4, lr} first, as the original

// f_0068c4e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives the player tool 0x33a1 (moving the held tool to the pockets), or takes it back from the hand and pockets.
namespace d_0068c4e4 {

struct __attribute__((packed)) Object_0068c4e4_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_0068c4e4_1, byte_e, 0xe);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> Pockets__add;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe8a4, u32(u32, u32, u32, u32)> find_by_id_2fe8a4;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> Pockets__item_with_lock;

struct __attribute__((packed)) Frame_0068c4e4 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068c4e4, word_0, 0x0);
GUEST_SIZE(Frame_0068c4e4, 0xc);

u32 Player__swap_tool_33a1(u32 player, gptr<Object_0068c4e4_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0068c4e4> frame;  // the original's stack frame
    u32 r0_7 = 0;
    u32 r1_1 = arg1->byte_e;
    u32 r0_1 = find_by_id_2fe8a4(player, r1_1, r2, r3);
    if (r0_1 != 0) {
        u32 r6 = 0x33a1u;  // (from the original)
        if ((r1_1 != 0) == 0) {
            u32 r0_3 = slot_7_if_class_7(r0_1 + 0xau);  // (from the original)
            u32 r0_4 = Item__has_number(r0_3, r6);
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                Item__copy(r0_1 + 0x26u, empty_item_address, guest::cpu()->r[2], r3);  // (from the original)
                r3 = guest::cpu()->r[3];
            }
            u32 r5 = r0_1 + 0x6bd0u;  // (from the original)
            u32 r4 = 0u;
            u32 r7 = 1u;
            do {
                u32 r0_6 = Pockets__item_with_lock(r5, r4, 0u, r3);
                r0_7 = Item__has_number(r0_6, r6);
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    frame->word_0 = r7;
                    r0_7 = Pockets__set_slot(r5, r4, empty_item_address, 0u);
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0x10u);  // (from the original)
            return r0_7;
        }
        u32 r0_8 = slot_7_if_class_7(r0_1 + 0xau);  // (from the original)
        Item__copy_b(frame.at(0).addr(), r0_8);
        u32 r0_10 = frame.at(4).addr();
        construct_item(r0_10, r6);
        Item__copy(r0_1 + 0x26u, r0_10, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 is_item_2 = Item__is_item(frame.at(0).addr());
        if (is_item_2 != 0) {
            Pockets__add(r0_1 + 0x6bd0u, frame.at(0).addr(), 0u, 1u);  // (from the original)
        }
        r0_1 = frame.at(0).addr();
    }
    return r0_1;
}

}  // namespace d_0068c4e4
GUEST_EXPORT_FRAMED(0x0068c4e4, d_0068c4e4::Player__swap_tool_33a1, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0068c644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts moving the player to the item's spot (releasing the held flag first).
namespace d_0068c644 {

struct __attribute__((packed)) Local_0068c644_r6_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068c644_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_0068c644_r6_1, word_4, 0x4);

struct __attribute__((packed)) Local_0068c644_r6_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068c644_r6_3, word_0, 0x0);
GUEST_OFFSET(Local_0068c644_r6_3, word_4, 0x4);

inline constexpr guest::Function<0x002fb7b0, u32(u32)> release_flag_24_when_held;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_73;
inline constexpr guest::Function<0x0068aa1c, u32(u32, u32, u32, u32)> AcPlayer_rec__request_move_state;
inline constexpr guest::Function<0x006d96fc, u32(u32)> main_object_entry_set;
inline constexpr guest::Function<0x006d9abc, u32(u32, u32)> CatchMgr__check_catch;
inline constexpr guest::Function<0x00723ad4, u32(u32)> ItemSlot__is_empty_or_unset;

struct __attribute__((packed)) Frame_0068c644 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068c644, word_0, 0x0);
GUEST_SIZE(Frame_0068c644, 0xc);

void AcPlayer_rec__start_move_to_item(u32 r0, u32 catch_mgr, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0068c644> frame;  // the original's stack frame
    u32 r7_1 = *frame.at<u32>(0x28);  // (from the original)
    u32 category_2 = Item__category(catch_mgr, catch_mgr, r2, r3);
    u32 r5_1 = 0x69u;  // (from the original)
    if (category_2 - 0x26u != 0) {  // (from the original)
        if (s32(category_2) >= 0x26) {  // (from the original)
            if (category_2 == 0x28u || category_2 == 0x66u) {  // (from the original)
                r5_1 = 0xd1u;  // (from the original)
                goto L_68c688;
            }
        } else if (category_2 == 0x24u || category_2 == 0x25u) {  // (from the original)
            goto L_68c688;
        }
        r5_1 = 0x8fu;  // (from the original)
    }
L_68c688:;
    if (r2 == 0) {
        u32 r0_3 = ItemSlot__is_empty_or_unset(r0 + 0x68u);  // (from the original)
        if (r0_3 != 0) {
            u32 r1_3 = *gptr<u8>(r0 + 0x1acu);  // (from the original)
            CatchMgr__check_catch(catch_mgr, r1_3);
            u32 r0_4 = *gptr<u8>(r0 + 0x8c5u);  // (from the original)
            gptr<Local_0068c644_r6_1> r6_1 = gptr<Local_0068c644_r6_1>(frame.at(4).addr());
            frame->word_0 = r5_1;
            r6_1->word_0 = r5_1 == 0x69u ? 2u : 3u;  // (from the original)
            r6_1->word_4 = r7_1;
            AcPlayer_rec__request_move_state(r0, catch_mgr, 1u, (r0_4 >> 5u & 1u) == 0 ? 1u : 2u);
            return;
        }
    } else {
        if (r3 == 0) {
            u32 r6_2 = *gptr<u32>(r0 + 0x154u);  // (from the original)
            u32 r0_6 = ItemSlot__is_empty_or_unset(r0 + 0x68u);  // (from the original)
            if (r0_6 == 0 || r6_2 + 1u == 0) {
                return;
            }
            if (r6_2 == 0) {
                u32 r1_5 = *gptr<u8>(r0 + 0x1acu);  // (from the original)
                CatchMgr__check_catch(catch_mgr, r1_5);
                gptr<Local_0068c644_r6_3> r6_3 = gptr<Local_0068c644_r6_3>(frame.at(4).addr());
                frame->word_0 = r5_1;
                r6_3->word_0 = r5_1 == 0x69u ? 2u : 3u;  // (from the original)
                r6_3->word_4 = r7_1;
                AcPlayer_rec__request_move_state(r0, catch_mgr, 0u, 0u);
                goto L_68c728;
            }
            u32 r0_7 = main_object_entry_set(r0_6);
            frame->word_0 = r0_7;
            AcPlayer_rec__request_state_73(r0, catch_mgr, r7_1, 0u);
            goto L_68c728;
        }
        u32 r0_9 = ItemSlot__is_empty_or_unset(r0 + 0x68u);  // (from the original)
        if (r0_9 != 0) {
            u32 r0_10 = main_object_entry_set(r0_9);
            frame->word_0 = r0_10;
            AcPlayer_rec__request_state_73(r0, catch_mgr, r7_1, 0u);
        }
    }
    return;
L_68c728:;
    release_flag_24_when_held(r0 + 0x68u);  // (from the original)
    *gptr<u32>(r0 + 0x154u) = ~0u;  // (from the original)
}

}  // namespace d_0068c644
GUEST_EXPORT_FRAMED(0x0068c644, d_0068c644::AcPlayer_rec__start_move_to_item, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0068cbb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When fishing, finds a fish near the point 10 ahead of the player and, when one bites, starts state 0x26; true when
// it did.
namespace d_0068cbb8 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x5];  // (not used here)
    u8 byte_177;
    u8 unknown_178[0xf4];  // (not used here)
    u32 word_26c;
};
GUEST_OFFSET(Player, byte_171, 0x171);
GUEST_OFFSET(Player, byte_177, 0x177);
GUEST_OFFSET(Player, word_26c, 0x26c);

struct __attribute__((packed)) Local_0068cbb8_r0_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0068cbb8_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_0068cbb8_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_0068cbb8_r0_3, float_8, 0x8);

inline constexpr u32 fish_manager_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> fish_manager;
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;
inline constexpr guest::Function<0x00252034, u32(u32, u32)> FishMgr__is_within;
inline constexpr guest::Function<0x00252850, u32(u32, u32)> FishMgr__set_gone;
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> run_if_scene_mode_flag_2;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> ground_height_at;
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> Model__joint_position;

struct __attribute__((packed)) Frame_0068cbb8 {
    u8 unknown_0[0x34];  // (not read or written by name)
    float float_34;
    u8 unknown_38[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068cbb8, float_34, 0x34);
GUEST_SIZE(Frame_0068cbb8, 0x54);

u32 AcPlayer_rec__try_catch_fish(gptr<Player> player, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_0068cbb8> frame;  // the original's stack frame
    u32 r1_1 = u32(player->byte_171) >> 5u & 1u;
    if (r1_1 != 0) {
        if ((u32(player->byte_177) >> 5u & 1u) == 0) {
            u32 r2_1 = player->word_26c;
            u32 r0_2 = Model__joint_position(player.addr() + 0x1b4u, frame.at(0).addr(), r2_1, 0u);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_2 != 0) {
                float S2_1 = 0.0f;
                float S1_1 = 0.0f;
                float S0_1 = 10.0f;
                gptr<Local_0068cbb8_r0_3> r0_3 = gptr<Local_0068cbb8_r0_3>(frame.at(0x48).addr());  // (from the original)
                r0_3->float_0 = S0_1;
                r0_3->float_4 = S1_1;
                r0_3->float_8 = S2_1;
                guest::cpu()->s[0] = S0_1;
                guest::cpu()->s[1] = S1_1;
                guest::cpu()->s[2] = S2_1;
                apply_matrix(frame.at(0x3c).addr(), frame.at(0).addr(), frame.at(0x48).addr());  // (from the original)
                run_if_scene_mode_flag_2(frame.at(0x30).addr(), frame.at(0x3c).addr());  // (from the original)
                ground_height_at(frame.at(0x30).addr(), 0u);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                frame->float_34 = S0;
                u32 fish_mgr = *fish_manager;
                if (fish_mgr != 0) {
                    float S0_4 = 22.0f;
                    guest::cpu()->s[0] = S0_4;
                    u32 r0_7 = FishMgr__is_within(fish_mgr, frame.at(0x30).addr());  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    S0 = guest::cpu()->s[0];
                    S1 = guest::cpu()->s[1];
                    if (r0_7 != 0) {
                        FishMgr__set_gone(fish_mgr, r1_1);
                        AcPlayer_rec__change_state(player.addr(), 0x26u, 0u, 0u);  // (from the original)
                        return 1u;
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_0068cbb8
GUEST_EXPORT_FRAMED(0x0068cbb8, d_0068cbb8::AcPlayer_rec__try_catch_fish, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0068ce74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Tries to place the player at a free spot behind the position, stopping the special music.
namespace d_0068ce74 {

struct __attribute__((packed)) Object_0068ce74_0 {
    u8 unknown_0[0x175];  // (not used here)
    u8 byte_175;
    u8 unknown_176[0x7a7];  // (not used here)
    u8 byte_91d;
};
GUEST_OFFSET(Object_0068ce74_0, byte_175, 0x175);
GUEST_OFFSET(Object_0068ce74_0, byte_91d, 0x91d);

inline guest::global<u8, 0x0094fd20> global_0094fd20;
inline constexpr guest::Function<0x004e54a4, u32(u32, u32, u32, u32)> try_place_at_position;
inline constexpr guest::Function<0x005897c0, u32(u32, u32, u32, u32)> stop_special_bgm;
inline constexpr guest::Function<0x00765aac, u32(u32, u32, u32, u32)> check_spot_behind_position;
inline constexpr guest::Function<0x00765cec, u32(u32, u32, u32, u32)> check_spot_behind_position_2;

void AcPlayer_rec__try_place_behind(gptr<Object_0068ce74_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r2_3 = 0;
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    u32 r2 = arg0->byte_91d;
    u32 r5 = 1u;
    u32 r1_1 = arg0->byte_175;
    r3 = r1_1 >> 3u & 1u;
    if (r3 != 0) {
        if (r2 == 0) {
            r1_1 &= ~8u;
            arg0->byte_175 = u8(r1_1);
        }
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r2 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 position = r4 + 0x14u;  // (from the original)
    *frame.at<u16>(0) = *gptr<u16>(r4 + 0x2eu);  // (from the original)
    if (r2 != 1u) {
        if (r2 == 2u) {
            r0 = check_spot_behind_position(r4, position, *frame.at<u32>(0), r3);
            position = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                *gptr<u8>(r4 + 0xca0u) = u8(r5);  // (from the original)
            } else {
                goto L_68cf2c;
            }
            goto L_68cf38;
        }
        if (r2 != 4u) {
            goto L_68cf2c;
        }
    } else {
        r0 = try_place_at_position(r4, position, *frame.at<u32>(0), r3);
        position = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_68cf2c;
        }
        *gptr<u8>(r4 + 0xca0u) = u8(r0);  // (from the original)
        goto L_68cf38;
    }
    r2_3 = *frame.at<u32>(0);
    r0 = check_spot_behind_position_2(r4, position, r2_3, r3);
    position = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 2u;
        *gptr<u8>(r4 + 0xca0u) = u8(r0);  // (from the original)
        goto L_68cf38;
    }
L_68cf2c:;
    if (*gptr<u8>(r4 + 0xca0u) == 3u) {  // (from the original)
        guest::cpu()->r[1] = position;
        return;
    }
L_68cf38:;
    *gptr<u8>(r4 + 0x1520u) = 5;  // (from the original)
    stop_special_bgm(r0, position, r2, r3);
    *global_0094fd20 = u8(r5);
}

}  // namespace d_0068ce74
GUEST_EXPORT_FRAMED(0x0068ce74, d_0068ce74::AcPlayer_rec__try_place_behind, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0068d170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless muted (bit 5 of +0x66), plays the voice sound and, when asked, marks the player busy.
namespace d_0068d170 {

struct __attribute__((packed)) Object_0068d170_0 {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
    u8 unknown_67[0x10c];  // (not used here)
    u8 byte_173;
};
GUEST_OFFSET(Object_0068d170_0, byte_66, 0x66);
GUEST_OFFSET(Object_0068d170_0, byte_173, 0x173);

inline constexpr guest::Function<0x0024fc50, u32(u32, u32, u32, u32)> AcFtrAudio__update;

u32 AcPlayer_rec__play_voice(gptr<Object_0068d170_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = u32(arg0->byte_66) >> 5u & 1u;
    if (r0_1 == 0) {
        r0_1 = AcFtrAudio__update(arg0.addr() + 0x5ecu, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r2 != 0) {
            r1 = u32(arg0->byte_173) | 2u | 4u;
            arg0->byte_173 = u8(r1);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0068d170
GUEST_EXPORT_FRAMED(0x0068d170, d_0068d170::AcPlayer_rec__play_voice, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0068dc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless muted (bit 5 of +0x66), plays the sound and, when asked, marks the player busy.
namespace d_0068dc14 {

struct __attribute__((packed)) AcPlayer {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
    u8 unknown_67[0x10c];  // (not used here)
    u8 byte_173;
};
GUEST_OFFSET(AcPlayer, byte_66, 0x66);
GUEST_OFFSET(AcPlayer, byte_173, 0x173);

inline constexpr guest::Function<0x00250024, u32(u32, u32, u32, u32)> AcFtrAudio__play;

u32 AcPlayer_rec__play_sound(gptr<AcPlayer> ac_player, u32 r1, u32 r2) {
    u32 r0_1 = u32(ac_player->byte_66) >> 5u & 1u;
    if (r0_1 == 0) {
        r0_1 = AcFtrAudio__play(ac_player.addr() + 0x5ecu, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r2 != 0) {
            r1 = u32(ac_player->byte_173) | 2u | 4u;
            ac_player->byte_173 = u8(r1);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0068dc14
GUEST_EXPORT_FRAMED(0x0068dc14, d_0068dc14::AcPlayer_rec__play_sound, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0068e738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068e738 {

struct __attribute__((packed)) Local_0068e738_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_11, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_11, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_12, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_12, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_13 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_13, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_13, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_9, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_r0_52 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_r0_52, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_r0_52, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_r3_49 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_r3_49, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_r3_49, word_4, 0x4);

inline constexpr u32 vtable_HumanModel = 0x008eb174u;
inline constexpr u32 vtable_PlayerModel = 0x008ebc68u;
inline constexpr u32 vtable_PlayerSimpleMessage_rec = 0x008f4068u;
inline constexpr u32 vtable_AcPlayer_rec = 0x008f8630u;
inline constexpr u32 vtable_AcPlayer_rec_at_68 = 0x008f86c8u;
inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> HumanModel__reset_parts;
inline constexpr guest::Function<0x00250560, u32(u32)> SoundObj_1___SoundObj_00250560;
inline constexpr guest::Function<0x002694b8, u32(u32)> EmoticonAction__EmoticonAction_002694b8;
inline constexpr guest::Function<0x00278140, u32(u32)> SoundObjAmbient__destroy;
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> SeadParticleHandle__destructor;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x003170d0, u32(u32, u32)> destroy_ITalkRecept;
inline constexpr guest::Function<0x004eb5b4, u32(u32, u32, u32, u32)> g3d__modelEffect__ModelEffectHandle__destructor;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x004ef50c, u32(u32)> g3d__GroupSkeletalAnim__destructor;
inline constexpr guest::Function<0x006a8954, u32(u32)> FootMark__destructor;
inline constexpr guest::Function<0x006acabc, u32(u32)> ObjcBody__destructor;
inline constexpr guest::Function<0x006e480c, u32(u32, u32)> DemoActor__destructor;

u32 AcPlayer__virtual_0_0068e738(gptr<AcPlayer_rec> ac_player_rec, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    ac_player_rec->vtable = vtable_AcPlayer_rec;
    ac_player_rec->ac_player_rec_vtable = vtable_AcPlayer_rec_at_68;
    u32 sead_particle_handle_rec = ac_player_rec.addr() + 0x14fcu;  // (from the original)
    SeadParticleHandle__destructor(sead_particle_handle_rec, vtable_AcPlayer_rec, vtable_AcPlayer_rec_at_68, r3);
    u32 r0_2 = sead_particle_handle_rec - 0x40u;  // (from the original)
    SeadParticleHandle__destructor(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = r0_2 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = r0_3 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = r0_4 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = r0_5 - 0x20u;  // (from the original)
    SeadParticleHandle__destructor(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = r0_6 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = r0_7 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_9 = r0_8 - 0x4cu;  // (from the original)
    SeadParticleHandle__destructor(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_10 = r0_9 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_11 = r0_10 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = r0_11 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_13 = r0_12 - 0x24u;  // (from the original)
    SeadParticleHandle__destructor(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = r0_13 - 0x24u;  // (from the original)
    SeadParticleHandle__destructor(r0_14, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 sound_obj = r0_14 - 0x6cu;  // (from the original)
    SoundObj_1___SoundObj_00250560(sound_obj);
    u32 r4_1 = sound_obj - 0x1b8u;  // (from the original)
    destroy_array_elements(r4_1, 0x6f8424u, 0x8cu, 3u);  // (from the original)
    u32 r0_16 = r4_1 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 emoticon_action = r0_16 - 0x410u;  // (from the original)
    EmoticonAction__EmoticonAction_002694b8(emoticon_action);
    u32 r0_18 = emoticon_action - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_19 = r0_18 - 0x20u;  // (from the original)
    SeadParticleHandle__destructor(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = r0_19 - 0x20u;  // (from the original)
    SeadParticleHandle__destructor(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_21 = r0_20 - 0x20u;  // (from the original)
    SeadParticleHandle__destructor(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_22 = r0_21 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_22, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_23 = r0_22 - 0x20u;  // (from the original)
    SeadParticleHandle__destructor(r0_23, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_24 = r0_23 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_24, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_25 = r0_24 - 0x1cu;  // (from the original)
    SeadParticleHandle__destructor(r0_25, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_26 = r0_25 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_26, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_27 = r0_26 - 0x84u;  // (from the original)
    SeadParticleHandle__destructor(r0_27, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_28 = r0_27 - 0x24u;  // (from the original)
    SeadParticleHandle__destructor(r0_28, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_29 = r0_28 - 0x24u;  // (from the original)
    SeadParticleHandle__destructor(r0_29, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_30 = r0_29 - 0x24u;  // (from the original)
    SeadParticleHandle__destructor(r0_30, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_31 = r0_30 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_31, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_32 = r0_31 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_32, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_33 = r0_32 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_33, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_34 = r0_33 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_34, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_35 = r0_34 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_35, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 model_effect_handle = r0_35 - 0x1cu;  // (from the original)
    g3d__modelEffect__ModelEffectHandle__destructor(model_effect_handle, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_37 = model_effect_handle - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_37, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_38 = r0_37 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_38, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_39 = r0_38 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_39, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_40 = r0_39 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_40, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_41 = r0_40 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_41, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_42 = r0_41 - 0x1cu;  // (from the original)
    SeadParticleHandle__destructor(r0_42, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_43 = r0_42 - 0x14u;  // (from the original)
    g3d__modelEffect__ModelEffectHandle__destructor(r0_43, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_44 = r0_43 - 0x18u;  // (from the original)
    SeadParticleHandle__destructor(r0_44, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_45 = r0_44 - 0x5cu;  // (from the original)
    SeadParticleHandle__destructor(r0_45, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 foot_mark_rec = r0_45 - 0x2acu;  // (from the original)
    FootMark__destructor(foot_mark_rec);
    u32 r0_48 = SoundObjAmbient__destroy(foot_mark_rec - 0xc8u);  // (from the original)
    u32 r0_49 = r0_48 - 0x90u;  // (from the original)
    ObjcBody__destructor(r0_49);
    u32 r0_50 = r0_49 - 0x60u;  // (from the original)
    ObjcBody__destructor(r0_50);
    u32 r0_51 = r0_50 - 0x68u;  // (from the original)
    *gptr<u32>(r0_51 - 0x2e0u) = vtable_PlayerModel;  // (from the original)
    gptr<Local_0068e738_r0_52> r0_52 = gptr<Local_0068e738_r0_52>(r0_51 - 0x19cu);  // (from the original)
    u32 r2_49 = ~0u;
    gptr<Local_0068e738_ea_1> ea_1 = gptr<Local_0068e738_ea_1>(r0_52.addr() + 0x70u);  // (from the original)
    ea_1->word_0 = 0;
    ea_1->word_4 = r2_49;
    gptr<Local_0068e738_ea_2> ea_2 = gptr<Local_0068e738_ea_2>(r0_52.addr() + 0x68u);  // (from the original)
    ea_2->word_0 = 0;
    ea_2->word_4 = r2_49;
    gptr<Local_0068e738_ea_3> ea_3 = gptr<Local_0068e738_ea_3>(r0_52.addr() + 0x60u);  // (from the original)
    ea_3->word_0 = 0;
    ea_3->word_4 = r2_49;
    gptr<Local_0068e738_ea_4> ea_4 = gptr<Local_0068e738_ea_4>(r0_52.addr() + 0x58u);  // (from the original)
    ea_4->word_0 = 0;
    ea_4->word_4 = r2_49;
    gptr<Local_0068e738_ea_5> ea_5 = gptr<Local_0068e738_ea_5>(r0_52.addr() + 0x50u);  // (from the original)
    ea_5->word_0 = 0;
    ea_5->word_4 = r2_49;
    gptr<Local_0068e738_ea_6> ea_6 = gptr<Local_0068e738_ea_6>(r0_52.addr() + 0x48u);  // (from the original)
    ea_6->word_0 = 0;
    ea_6->word_4 = r2_49;
    gptr<Local_0068e738_ea_7> ea_7 = gptr<Local_0068e738_ea_7>(r0_52.addr() + 0x40u);  // (from the original)
    ea_7->word_0 = 0;
    ea_7->word_4 = r2_49;
    gptr<Local_0068e738_ea_8> ea_8 = gptr<Local_0068e738_ea_8>(r0_52.addr() + 0x38u);  // (from the original)
    ea_8->word_0 = 0;
    ea_8->word_4 = r2_49;
    gptr<Local_0068e738_ea_9> ea_9 = gptr<Local_0068e738_ea_9>(r0_52.addr() + 0x30u);  // (from the original)
    ea_9->word_0 = 0;
    ea_9->word_4 = r2_49;
    gptr<Local_0068e738_ea_10> ea_10 = gptr<Local_0068e738_ea_10>(r0_52.addr() + 0x28u);  // (from the original)
    ea_10->word_0 = 0;
    ea_10->word_4 = r2_49;
    gptr<Local_0068e738_ea_11> ea_11 = gptr<Local_0068e738_ea_11>(r0_52.addr() + 0x20u);  // (from the original)
    ea_11->word_0 = 0;
    ea_11->word_4 = r2_49;
    gptr<Local_0068e738_ea_12> ea_12 = gptr<Local_0068e738_ea_12>(r0_52.addr() + 0x18u);  // (from the original)
    ea_12->word_0 = 0;
    ea_12->word_4 = r2_49;
    gptr<Local_0068e738_ea_13> ea_13 = gptr<Local_0068e738_ea_13>(r0_52.addr() + 0x10u);  // (from the original)
    ea_13->word_0 = 0;
    ea_13->word_4 = r2_49;
    gptr<Local_0068e738_r3_49> r3_49 = gptr<Local_0068e738_r3_49>(r0_52.addr() + 8u);
    r3_49->word_0 = 0;
    r3_49->word_4 = r2_49;
    r0_52->word_0 = 0;
    r0_52->word_4 = r2_49;
    u32 human_model = r0_52.addr() - 0x144u;  // (from the original)
    *gptr<u32>(human_model) = vtable_HumanModel;
    HumanModel__reset_parts(human_model, vtable_HumanModel, r2_49, r3_49.addr());
    u32 group_skeletal_anim = human_model + 0xccu;  // (from the original)
    g3d__GroupSkeletalAnim__destructor(group_skeletal_anim);
    u32 r0_55 = group_skeletal_anim - 0x54u;  // (from the original)
    set_base_vtable_004edd84(r0_55);
    u32 r0_56 = r0_55 - 0x90u;  // (from the original)
    g3d__modelEffect__ModelEffectHandle__destructor(r0_56, vtable_HumanModel, r2_49, r3_49.addr());
    u32 r0_57 = r0_56 - 0xcu;  // (from the original)
    g3d__modelEffect__ModelEffectHandle__destructor(r0_57, vtable_HumanModel, r2_49, r3_49.addr());
    *gptr<u32>(r0_57 - 0x128u) = vtable_PlayerSimpleMessage_rec;  // (from the original)
    u32 r0_58 = r0_57 - 0x128u;  // (from the original)
    destroy_ITalkRecept(r0_58, vtable_PlayerSimpleMessage_rec);
    frame.release();
    return DemoActor__destructor(r0_58 - 0x68u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0068e738
GUEST_EXPORT(0x0068e738, d_0068e738::AcPlayer__virtual_0_0068e738);

// f_0068eb30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the camera controller (0x950874) is in mode 5.
namespace d_0068eb30 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

u32 CameraCtl__is_mode_5() {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return r0_1;
    }
    return *gptr<u8>(r0_1 + 0xf2u) == 5u;  // (from the original)
}

}  // namespace d_0068eb30
GUEST_EXPORT(0x0068eb30, d_0068eb30::CameraCtl__is_mode_5);

// f_0068eba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restores the default mode when the camera controller is in mode 5.
namespace d_0068eba8 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> CameraCtl__restore_mode;

u32 CameraCtl__leave_mode_5(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    for (;;) {
        r0 = *camera_controller;
        if (r0 == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (!1) {
            break;
        }
        u32 r1_1 = *gptr<u8>(r0 + 0xf2u);  // (from the original)
        if (r1_1 != 5u) {
            guest::cpu()->r[1] = r1_1;
            return r0;
        }
        return CameraCtl__restore_mode(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068eba8
GUEST_EXPORT(0x0068eba8, d_0068eba8::CameraCtl__leave_mode_5);

// f_0068ebc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the camera controller when it exists.
namespace d_0068ebc4 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a20f4, u32(u32, u32, u32, u32)> CameraCtl__apply_preset;

u32 CameraCtl__update() {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return r0_1;
    }
    return CameraCtl__apply_preset(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068ebc4
GUEST_EXPORT(0x0068ebc4, d_0068ebc4::CameraCtl__update);

// f_0068ec10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the camera controller has a target (+0x135 not -1).
namespace d_0068ec10 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

u32 CameraCtl__has_target() {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return r0_1;
    }
    return !(u32(*gptr<s8>(r0_1 + 0x135u)) + 1u == 0);  // (from the original)
}

}  // namespace d_0068ec10
GUEST_EXPORT(0x0068ec10, d_0068ec10::CameraCtl__has_target);

// f_0068ec64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Passes the request to the camera controller when it exists.
namespace d_0068ec64 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> CameraCtl__request_at;

struct __attribute__((packed)) Frame_0068ec64 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0068ec64, word_0, 0x0);
GUEST_SIZE(Frame_0068ec64, 0x4);

u32 CameraCtl__request(u32 camera_ctl, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0068ec64> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return r0_1;
    }
    frame->word_0 = r3;
    u32 request = CameraCtl__request_at(r0_1, camera_ctl, r1, r2);
    return request;
}

}  // namespace d_0068ec64
GUEST_EXPORT_FRAMED(0x0068ec64, d_0068ec64::CameraCtl__request, 0x4000);  // pushes {lr} first, as the original

// f_0068ec98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests mode 3 of the camera controller.
namespace d_0068ec98 {

struct __attribute__((packed)) Local_0068ec98_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068ec98_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068ec98_r0_1, byte_136, 0x136);

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

u32 CameraCtl__request_mode_3(u32 r0_unused, u32 r1) {
    gptr<Local_0068ec98_r0_1> r0_1 = gptr<Local_0068ec98_r0_1>(*camera_controller);
    if (r0_1.addr() == 0) {
        return r0_1.addr();
    }
    r0_1->byte_f3 = 3;
    r0_1->byte_136 = 0;
    guest::cpu()->r[1] = 3u;
    return r0_1.addr();
}

}  // namespace d_0068ec98
GUEST_EXPORT(0x0068ec98, d_0068ec98::CameraCtl__request_mode_3);

// f_0068ecbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Queries the camera controller when it exists.
namespace d_0068ecbc {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a36ac, u32(u32, u32)> CameraCtl__start_mode_5;

u32 CameraCtl__query() {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return r0_1;
    }
    return CameraCtl__start_mode_5(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0068ecbc
GUEST_EXPORT(0x0068ecbc, d_0068ecbc::CameraCtl__query);

// f_0068eec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Passes the value to the camera controller when it exists.
namespace d_0068eec8 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a4600, u32(u32, u32, u32, u32)> CameraCtl__update_follow;

void CameraCtl__set_value(u32 camera_ctl) {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = camera_ctl;
        return;
    }
    CameraCtl__update_follow(r0_1, camera_ctl, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068eec8
GUEST_EXPORT(0x0068eec8, d_0068eec8::CameraCtl__set_value);

// f_0068ef60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests mode 0x12 of the camera controller.
namespace d_0068ef60 {

struct __attribute__((packed)) Local_0068ef60_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068ef60_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068ef60_r0_1, byte_136, 0x136);

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

void CameraCtl__request_mode_12() {
    gptr<Local_0068ef60_r0_1> r0_1 = gptr<Local_0068ef60_r0_1>(*camera_controller);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 0x12;  // (from the original)
    r0_1->byte_136 = 0;
}

}  // namespace d_0068ef60
GUEST_EXPORT(0x0068ef60, d_0068ef60::CameraCtl__request_mode_12);

// f_0068ef84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests mode 2 of the camera controller.
namespace d_0068ef84 {

struct __attribute__((packed)) Local_0068ef84_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068ef84_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068ef84_r0_1, byte_136, 0x136);

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

void CameraCtl__request_mode_2(u32 r0_unused, u32 r1) {
    gptr<Local_0068ef84_r0_1> r0_1 = gptr<Local_0068ef84_r0_1>(*camera_controller);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 2;
    r0_1->byte_136 = 0;
    guest::cpu()->r[1] = 2u;
}

}  // namespace d_0068ef84
GUEST_EXPORT(0x0068ef84, d_0068ef84::CameraCtl__request_mode_2);

// f_0068efa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the camera controller's check with the value when it exists.
namespace d_0068efa8 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a3a28, u32(u32, u32, u32, u32)> CameraCtl__set_distance;

u32 CameraCtl__check(u32 camera_ctl) {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = camera_ctl;
        return r0_1;
    }
    return CameraCtl__set_distance(r0_1, camera_ctl, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068efa8
GUEST_EXPORT(0x0068efa8, d_0068efa8::CameraCtl__check);

// f_0068efc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Attaches the position and target to the camera controller when it exists.
namespace d_0068efc8 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a5ffc, u32(u32, u32, u32, u32)> CameraCtl__start_kind;

u32 CameraCtl__attach(u32 camera_ctl, u32 r1) {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return r0_1;
    }
    return CameraCtl__start_kind(r0_1, camera_ctl, r1, camera_ctl);
}

}  // namespace d_0068efc8
GUEST_EXPORT(0x0068efc8, d_0068efc8::CameraCtl__attach);

// f_0068eff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restores the default mode when the camera controller is in mode 0xc.
namespace d_0068eff0 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> CameraCtl__restore_mode;

void CameraCtl__leave_mode_c() {
    for (;;) {
        u32 r0 = *camera_controller;
        if (r0 == 0) {
            return;
        }
        if (!1) {
            break;
        }
        u32 r1_1 = *gptr<u8>(r0 + 0xf2u);  // (from the original)
        if (r1_1 != 0xcu) {  // (from the original)
            return;
        }
        CameraCtl__restore_mode(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
        guest::preempt();
    }
}

}  // namespace d_0068eff0
GUEST_EXPORT(0x0068eff0, d_0068eff0::CameraCtl__leave_mode_c);

// f_0068f00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In mode 0x19, sets the camera controller's handler and restores the default mode.
namespace d_0068f00c {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> CameraCtl__restore_mode;

void CameraCtl__leave_mode_19() {
    for (;;) {
        u32 r0 = *camera_controller;
        if (r0 == 0) {
            return;
        }
        if (!1) {
            break;
        }
        if (*gptr<u8>(r0 + 0xf2u) != 0x19u) {  // (from the original)
            return;
        }
        *gptr<u32>(r0 + 0x13cu) = 0x8572cc;  // (from the original)
        *gptr<u8>(r0 + 0x1a9u) = 1;  // (from the original)
        CameraCtl__restore_mode(r0, 1u, 0x8572ccu, guest::cpu()->r[3]);
        return;  // (from the original)
        guest::preempt();
    }
}

}  // namespace d_0068f00c
GUEST_EXPORT(0x0068f00c, d_0068f00c::CameraCtl__leave_mode_19);

// f_0068f088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests mode 2 of the camera controller.
namespace d_0068f088 {

struct __attribute__((packed)) Local_0068f088_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068f088_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068f088_r0_1, byte_136, 0x136);

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

void CameraCtl__request_mode_2_b(u32 r0_unused, u32 r1) {
    gptr<Local_0068f088_r0_1> r0_1 = gptr<Local_0068f088_r0_1>(*camera_controller);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 2;
    r0_1->byte_136 = 0;
    guest::cpu()->r[1] = 2u;
}

}  // namespace d_0068f088
GUEST_EXPORT(0x0068f088, d_0068f088::CameraCtl__request_mode_2_b);

// f_0068f0d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The signed byte at +0x1ba of the camera controller; 0 without one.
namespace d_0068f0d8 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

u32 CameraCtl__byte_1ba() {
    u32 r0_1 = *camera_controller;
    if (r0_1 != 0) {
        r0_1 = *gptr<s8>(r0_1 + 0x1bau);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0068f0d8
GUEST_EXPORT(0x0068f0d8, d_0068f0d8::CameraCtl__byte_1ba);

// f_0068f114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restores the camera controller's default mode when it exists.
namespace d_0068f114 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> CameraCtl__restore_mode;

u32 CameraCtl__restore_mode_veneer() {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return r0_1;
    }
    return CameraCtl__restore_mode(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f114
GUEST_EXPORT(0x0068f114, d_0068f114::CameraCtl__restore_mode_veneer);

// f_0068f130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests mode 0xc of the camera controller.
namespace d_0068f130 {

struct __attribute__((packed)) Local_0068f130_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068f130_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068f130_r0_1, byte_136, 0x136);

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

void CameraCtl__request_mode_c() {
    gptr<Local_0068f130_r0_1> r0_1 = gptr<Local_0068f130_r0_1>(*camera_controller);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 0xc;  // (from the original)
    r0_1->byte_136 = 0;
}

}  // namespace d_0068f130
GUEST_EXPORT(0x0068f130, d_0068f130::CameraCtl__request_mode_c);

// f_0068f14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the camera controller's function at 0x1a51d0 when it exists.
namespace d_0068f14c {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a51d0, u32(u32, u32)> CameraCtl__start_default;

u32 CameraCtl__call_1a51d0() {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return r0_1;
    }
    return CameraCtl__start_default(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0068f14c
GUEST_EXPORT(0x0068f14c, d_0068f14c::CameraCtl__call_1a51d0);

// f_0068f168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests mode 6 of the camera controller.
namespace d_0068f168 {

struct __attribute__((packed)) Local_0068f168_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068f168_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068f168_r0_1, byte_136, 0x136);

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

void CameraCtl__request_mode_6(u32 r0_unused, u32 r1) {
    gptr<Local_0068f168_r0_1> r0_1 = gptr<Local_0068f168_r0_1>(*camera_controller);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 6;
    r0_1->byte_136 = 0;
    guest::cpu()->r[1] = 6u;
}

}  // namespace d_0068f168
GUEST_EXPORT(0x0068f168, d_0068f168::CameraCtl__request_mode_6);

// f_0068f1c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests mode 0xf of the camera controller, with step 5.
namespace d_0068f1c8 {

struct __attribute__((packed)) Local_0068f1c8_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068f1c8_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068f1c8_r0_1, byte_136, 0x136);

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

void CameraCtl__request_mode_f(u32 r0_unused, u32 r1) {
    gptr<Local_0068f1c8_r0_1> r0_1 = gptr<Local_0068f1c8_r0_1>(*camera_controller);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 0xf;  // (from the original)
    r0_1->byte_136 = 5;
    guest::cpu()->r[1] = 0xfu;  // (from the original)
}

}  // namespace d_0068f1c8
GUEST_EXPORT(0x0068f1c8, d_0068f1c8::CameraCtl__request_mode_f);

// f_0068f1ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the camera controller's function at 0x1a5f58 when it exists.
namespace d_0068f1ec {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a5f58, u32(u32, u32)> CameraCtl__resume_mode;

void CameraCtl__call_1a5f58() {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return;
    }
    CameraCtl__resume_mode(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0068f1ec
GUEST_EXPORT(0x0068f1ec, d_0068f1ec::CameraCtl__call_1a5f58);

// f_0068f208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the camera controller's function at 0x1a5f98 when it exists.
namespace d_0068f208 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a5f98, u32(u32, u32)> CameraCtl__start_mode_d;

void CameraCtl__call_1a5f98() {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return;
    }
    CameraCtl__start_mode_d(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0068f208
GUEST_EXPORT(0x0068f208, d_0068f208::CameraCtl__call_1a5f98);

// f_0068f290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In mode 0x1a, requests mode 0 with step 0x17.
namespace d_0068f290 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;

void CameraCtl__leave_mode_1a(u32 r0_unused, u32 r1) {
    for (;;) {
        u32 r0 = *camera_controller;
        if (r0 == 0) {
            guest::cpu()->r[1] = r1;
            return;
        }
        if (!1) {
            break;
        }
        u32 r1_1 = *gptr<u8>(r0 + 0xf2u);  // (from the original)
        if (r1_1 != 0x1au) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return;
        }
        *gptr<u8>(r0 + 0xf3u) = 0;  // (from the original)
        *gptr<u8>(r0 + 0x136u) = 0x17;  // (from the original)
        guest::cpu()->r[1] = 0x17u;  // (from the original)
        return;
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0068f290
GUEST_EXPORT(0x0068f290, d_0068f290::CameraCtl__leave_mode_1a);

// f_0068f2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restores the camera controller's default mode when it exists.
namespace d_0068f2ac {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> CameraCtl__restore_mode;

void CameraCtl__restore_mode_b() {
    u32 r0_1 = *camera_controller;
    if (r0_1 == 0) {
        return;
    }
    CameraCtl__restore_mode(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f2ac
GUEST_EXPORT(0x0068f2ac, d_0068f2ac::CameraCtl__restore_mode_b);

// f_0068f2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests mode 0x1b aimed above the position (raised by the camera controller's offset).
namespace d_0068f2c8 {

struct __attribute__((packed)) CameraCtl {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(CameraCtl, word_0, 0x0);
GUEST_OFFSET(CameraCtl, word_4, 0x4);
GUEST_OFFSET(CameraCtl, word_8, 0x8);

struct __attribute__((packed)) Local_0068f2c8_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0068f2c8_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_0068f2c8_r3_1, word_4, 0x4);
GUEST_OFFSET(Local_0068f2c8_r3_1, word_8, 0x8);

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> CameraCtl__request_at;
inline constexpr guest::Function<0x001a4f78, u32(u32, u32, u32, u32)> return_float_constant_0x42000000__001a4f78;

struct __attribute__((packed)) Frame_0068f2c8 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    float float_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068f2c8, word_0, 0x0);
GUEST_OFFSET(Frame_0068f2c8, float_8, 0x8);
GUEST_SIZE(Frame_0068f2c8, 0x10);

void CameraCtl__request_1b_above(gptr<CameraCtl> camera_ctl, float S0, float S1) {
    guest::StackFrameOf<Frame_0068f2c8> frame;  // the original's stack frame
    u32 r4_1 = *camera_controller;
    if (r4_1 == 0) {
        return;
    }
    u32 r1_1 = camera_ctl->word_4;
    u32 r2_1 = camera_ctl->word_8;
    gptr<Local_0068f2c8_r3_1> r3_1 = gptr<Local_0068f2c8_r3_1>(frame.at(4).addr());
    r3_1->word_0 = camera_ctl->word_0;
    r3_1->word_4 = r1_1;
    r3_1->word_8 = r2_1;
    return_float_constant_0x42000000__001a4f78(r4_1, r1_1, r2_1, r3_1.addr());
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = frame->float_8;
    float S0_2 = S0_1 + S1_1;
    frame->float_8 = S0_2;
    frame->word_0 = 0;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    CameraCtl__request_at(r4_1, frame.at(4).addr(), 0x1bu, 0x14u);  // (from the original)
}

}  // namespace d_0068f2c8
GUEST_EXPORT_FRAMED(0x0068f2c8, d_0068f2c8::CameraCtl__request_1b_above, 0x4010);  // pushes {r4, lr} first, as the original

// f_0068f398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests mode 0x4d aimed at object 0x59.
namespace d_0068f398 {

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> CameraCtl__request_at;
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> cell_position_of_id;
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32)> object_data_of_id;

struct __attribute__((packed)) Frame_0068f398 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 object_data;
};
GUEST_OFFSET(Frame_0068f398, word_0, 0x0);
GUEST_OFFSET(Frame_0068f398, object_data, 0xc);
GUEST_SIZE(Frame_0068f398, 0x10);

u32 CameraCtl__request_4d_at_object(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0068f398> frame;  // the original's stack frame
    u32 camera_ctl = *camera_controller;
    if (camera_ctl == 0) {
        return camera_controller_address;
    }
    cell_position_of_id(frame.at(4).addr(), 0x59u, r2, r3);  // (from the original)
    u32 object_data_2 = object_data_of_id(4u, 1u);
    u32 zf_1 = object_data_2 == 0;
    if (object_data_2 != 0) {
        object_data_2 = *gptr<u32>(object_data_2 + 8u);
    }
    if (!zf_1) {
        frame->object_data = object_data_2;
    }
    frame->word_0 = 0;
    u32 request = CameraCtl__request_at(camera_ctl, frame.at(4).addr(), 0x4du, 0x13u);  // (from the original)
    return request;
}

}  // namespace d_0068f398
GUEST_EXPORT_FRAMED(0x0068f398, d_0068f398::CameraCtl__request_4d_at_object, 0x4010);  // pushes {r4, lr} first, as the original

// f_0068f3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 100.
namespace d_0068f3fc {


u32 return_constant_100() {
    return 0x64u;  // (from the original)
}

}  // namespace d_0068f3fc
GUEST_EXPORT(0x0068f3fc, d_0068f3fc::return_constant_100);

// f_0068f460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Requests mode 0x69 aimed at the camera controller's own target.
namespace d_0068f460 {

struct __attribute__((packed)) Local_0068f460_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068f460_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0068f460_ea_1, word_4, 0x4);

inline constexpr u32 camera_controller_address = 0x00950874u;
inline guest::global<u32, 0x00950874> camera_controller;
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> CameraCtl__request_at;

struct __attribute__((packed)) Frame_0068f460 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068f460, word_0, 0x0);
GUEST_SIZE(Frame_0068f460, 0x8);

void CameraCtl__request_69(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0068f460> frame;  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    u32 camera_ctl = *camera_controller;
    if (camera_ctl == 0) {
        return;
    }
    gptr<Local_0068f460_ea_1> ea_1 = gptr<Local_0068f460_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r14;
    frame->word_0 = 0;
    CameraCtl__request_at(camera_ctl, camera_ctl + 0x24u, 0x69u, 0x18u);  // (from the original)
    u32 ea_2 = frame.at(0).addr();
}

}  // namespace d_0068f460
GUEST_EXPORT(0x0068f460, d_0068f460::CameraCtl__request_69);
