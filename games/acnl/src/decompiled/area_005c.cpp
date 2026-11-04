// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_005c00f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a 2-bit value in byte `index` (below 4).
namespace d_005c00f0 {


void set_2_bit_entry_below_4(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        *gptr<u8>(r0 + r1) = u8(r2 & 3u);
    }
}

}  // namespace d_005c00f0
GUEST_EXPORT(0x005c00f0, d_005c00f0::set_2_bit_entry_below_4);

// f_005c0100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans the bitmap for the bit.
namespace d_005c0100 {

struct __attribute__((packed)) Local_005c0100_r0_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_005c0100_r0_2, byte_0, 0x0);


u32 bitmap_scan_5c0100(u32 j, u32 r1, u32 r2_unused, u32 i) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = i;
    u32 r2 = j;
    u32 r12 = ~0u;
    j = *gptr<s8>(j + r1);
    if (s32(j) >= 4 || s32(j) < 0) {
        i = 0u;
        u32 r4 = 1u;
        *frame.at<u8>(0) = 0;
        do {
            u32 r0_1 = *gptr<s8>(r2 + i);
            if (r0_1 < 4u) {
                gptr<Local_005c0100_r0_2> r0_2 = gptr<Local_005c0100_r0_2>(frame.at(0).addr() + (r0_1 >> 3));
                r0_2->byte_0 = u8(u32(r0_2->byte_0) | lsl_r(r4, (r0_1 & 7u) & 0xff));
            }
            i += 1u;
            guest::preempt();
        } while (i < 4u);
        j = 0u;
        i = frame.at(0).addr();
L_5c0168:;
        if ((u32(*gptr<u8>(i + (j >> 3))) >> (j & 7u) & 1u) == 0) {
            if (r1 < 4u) {
                *gptr<u8>(r2 + r1) = u8(j & 3u);
            }
        } else {
            j += 1u;
            if (j < 4u) {
                i = frame.at(0).addr();
                guest::preempt();
                goto L_5c0168;
            }
            j = 0u;
            if (r1 < 4u) {
                do {
                    if (u32(*gptr<s8>(r2 + j)) < 4u) {
                        j = *gptr<s8>(r2 + r1);
                        u32 res_1 = j - 4u;
                        u32 nf_1 = res_1 >> 0x1f;
                        u32 vf_1 = ((j ^ 4u) & (j ^ res_1)) >> 0x1f;
                        if (nf_1 == vf_1) {
                            j = r12;
                        } else {
                            nf_1 = j >> 0x1f;
                            vf_1 = 0u;
                        }
                        if (nf_1 != vf_1) {
                            return r1;
                        }
                        goto L_5c01e0;
                    }
                    j += 1u;
                    guest::preempt();
                } while (j < 4u);
                j = r1;
                goto L_5c01e0;
            }
        }
    }
    return j;
L_5c01e0:;
    return j < 4u ? j : r1;
}

}  // namespace d_005c0100
GUEST_EXPORT_FRAMED(0x005c0100, d_005c0100::bitmap_scan_5c0100, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_005c021c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the clothing item the current player holds into a free pocket slot (unless a request has it reserved), and
// records the player and slot in `ref`; true when it did.
namespace d_005c021c {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x0030bb10, u32(u32)> Item__is_wear_class_7;
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> request_is_reserved;
inline constexpr guest::Function<0x00657748, u32(u32)> flagged_kind_check;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x007241b0, u32(u32)> Pockets__find_empty_slot;

struct __attribute__((packed)) MoveHeldClothingToPocketsFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(MoveHeldClothingToPocketsFrame, word_0, 0x0);
GUEST_SIZE(MoveHeldClothingToPocketsFrame, 0x8);

u32 move_held_clothing_to_pockets(u32 ref, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<MoveHeldClothingToPocketsFrame> frame;  // the original's stack frame
    if (request_is_reserved(ref, r1, r2, r3) == 0) {
        u32 player = *current_player_data;
        if (player != 0) {
            u32 r0_3 = slot_7_if_class_7(player + 0xau);
            Item__copy_b(frame.at(4).addr(), r0_3);
            u32 pockets = player + 0x6bd0u;
            if (Item__is_wear_class_7(frame.at(4).addr()) != 0) {
                u32 slot_2 = Pockets__find_empty_slot(pockets);
                if (slot_2 + 1u != 0) {
                    u32 r0_9 = flagged_kind_check(frame.at(4).addr());
                    frame->word_0 = r0_9 ^ 1u;
                    Pockets__set_slot(pockets, slot_2, frame.at(4).addr(), 0u);
                    if (slot_2 < 0x10u) {
                        u32 r0_10 = *current_player_data;
                        if (r0_10 != 0) {
                            copy_46_bytes(ref, r0_10 + 0x55a6u);
                            *gptr<u32>(ref + 0x30u) = slot_2;
                            *gptr<u8>(ref + 0x34u) = 0;
                            *gptr<u8>(ref + 0x35u) = 0;
                        }
                    }
                    *gptr<u8>(ref + 0x35u) = 1;
                    return 1u;
                }
            }
            return 0u;
        }
    }
    return 0u;
}

}  // namespace d_005c021c
GUEST_EXPORT_FRAMED(0x005c021c, d_005c021c::move_held_clothing_to_pockets, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c032c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// PersonalId__adopt_current_player in mode 0.
namespace d_005c032c {

inline constexpr guest::Function<0x005c0334, u32(u32, u32, u32, u32)> PersonalId__adopt_current_player;

void PersonalId__adopt_current_player_0(u32 personal_id) {
    PersonalId__adopt_current_player(personal_id, guest::cpu()->r[1], 0u, guest::cpu()->r[3]);
}

}  // namespace d_005c032c
GUEST_EXPORT(0x005c032c, d_005c032c::PersonalId__adopt_current_player_0);

// f_005c0648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records the current player's identity and pocket `slot` (fewer than 16) in `ref`.
namespace d_005c0648 {

struct __attribute__((packed)) PocketRef {
    u8 unknown_0[0x30];  // (not used here)
    u32 slot;
    u8 byte_34;
    u8 byte_35;
};
GUEST_OFFSET(PocketRef, slot, 0x30);
GUEST_OFFSET(PocketRef, byte_34, 0x34);
GUEST_OFFSET(PocketRef, byte_35, 0x35);

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;

void PocketRef__set(gptr<PocketRef> ref, u32 slot) {
    if (slot >= 0x10u) {
        return;
    }
    u32 r0_1 = *current_player_data;
    if (r0_1 != 0) {
        copy_46_bytes(ref.addr(), r0_1 + 0x55a6u);
        ref->slot = slot;
        ref->byte_34 = 0;
        ref->byte_35 = 0;
    }
}

}  // namespace d_005c0648
GUEST_EXPORT_FRAMED(0x005c0648, d_005c0648::PocketRef__set, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c0694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// PersonalId__adopt_current_player in mode 1.
namespace d_005c0694 {

inline constexpr guest::Function<0x005c0334, u32(u32, u32, u32, u32)> PersonalId__adopt_current_player;

void PersonalId__adopt_current_player_1() {
    PersonalId__adopt_current_player(guest::cpu()->r[0], guest::cpu()->r[1], 1u, guest::cpu()->r[3]);
}

}  // namespace d_005c0694
GUEST_EXPORT(0x005c0694, d_005c0694::PersonalId__adopt_current_player_1);

// f_005c069c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether bit 0 of +0x55ba of the current player's data is clear (true when there is none).
namespace d_005c069c {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;

u32 current_player_bit_0_of_55ba_is_clear(u32 r0_unused, u32 r1) {
    u32 r0_1 = *current_player_data;
    if (r0_1 == 0) {
        return 1u;
    }
    u32 r0_2 = 1u & ~u32(*gptr<u8>(r0_1 + 0x55bau));
    guest::cpu()->r[1] = 1u;
    return r0_2;
}

}  // namespace d_005c069c
GUEST_EXPORT(0x005c069c, d_005c069c::current_player_bit_0_of_55ba_is_clear);

// f_005c0874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bit 6 of 0xaadad4 and bit 5 of 0xaadad5.
namespace d_005c0874 {

inline guest::global<u8, 0x00aadad4> player_input_flags;
inline guest::global<u8, 0x00aadad5> player_input_flags_b;

void clear_player_input_flags() {
    *player_input_flags = u8(u32(*player_input_flags) & ~0x40u);
    u32 r1_1 = u32(*player_input_flags_b) & ~0x20u;
    *player_input_flags_b = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005c0874
GUEST_EXPORT(0x005c0874, d_005c0874::clear_player_input_flags);

// f_005c0898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item the main player holds (empty without a player).
namespace d_005c0898 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00765e04, u32(u32, u32)> SlotObject__held_item;

u32 copy_player_held_item(u32 item) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object != 0) {
        u32 r0_2 = SlotObject__held_item(object, 0u);
        frame.release();
        return Item__copy_b(item, r0_2);
    }
    frame.release();
    return Item__copy_b(item, empty_item_address);
}

}  // namespace d_005c0898
GUEST_EXPORT(0x005c0898, d_005c0898::copy_player_held_item);

// f_005c0a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the player is in an action (bit 5 of +0x171): ends it (state 25 for actions 0x17/0x18) and clears the input
// flags; true unless nothing could end it.
namespace d_005c0a68 {

struct __attribute__((packed)) Local_005c0a68_r4_1 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x37];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Local_005c0a68_r4_1, byte_171, 0x171);
GUEST_OFFSET(Local_005c0a68_r4_1, byte_1a9, 0x1a9);

inline constexpr guest::Function<0x005c0874, u32(u32)> clear_player_input_flags;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00665130, u32(u32)> AcPlayer_rec__request_state_25;
inline constexpr guest::Function<0x006736dc, u32(u32, u32)> AcPlayer__update_flags;
inline constexpr guest::Function<0x00763818, u32(u32)> entry_for_byte_1a9;

u32 player_finish_held_action() {
    u32 object = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_005c0a68_r4_1> r4_1 = gptr<Local_005c0a68_r4_1>(object);
    if (object != 0) {
        if ((u32(r4_1->byte_171) >> 5u & 1u) != 0) {
            u32 r0_2 = r4_1->byte_1a9;
            if (r0_2 == 0x17u || r0_2 == 0x18u) {
                AcPlayer_rec__request_state_25(r4_1.addr());
                clear_player_input_flags(r4_1.addr());
                return 1u;
            }
            object = entry_for_byte_1a9(r4_1.addr());
            if (object != 0) {
                if (s32(u32(*gptr<u8>(object + 8u)) << 0x19) < 0) {
                    goto L_5c0ad4;
                }
            }
            object = AcPlayer__update_flags(r4_1.addr(), 0u);
            if (object == 0) {
                clear_player_input_flags(object);
                return 0u;
            }
        }
    }
L_5c0ad4:;
    clear_player_input_flags(object);
    return 1u;
}

}  // namespace d_005c0a68
GUEST_EXPORT_FRAMED(0x005c0a68, d_005c0a68::player_finish_held_action, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c0b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the player is in states 0xc7-0xca: requests state 31 with speed 6.
namespace d_005c0b10 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00659c08, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_31;
inline constexpr guest::Function<0x00763580, u32(u32)> AcPlayer_rec__is_in_states_c7_to_ca;

u32 player_request_state_31_if_c7_to_ca(float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object == 0) {
        return object;
    }
    u32 r0_2 = AcPlayer_rec__is_in_states_c7_to_ca(object);
    if (r0_2 == 0) {
        return r0_2;
    }
    float S0_3 = 6.0f;
    guest::cpu()->s[0] = S0_3;
    frame.release();
    return AcPlayer_rec__request_state_31(object, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c0b10
GUEST_EXPORT(0x005c0b10, d_005c0b10::player_request_state_31_if_c7_to_ca);

// f_005c0da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: requests state 0xc4 with id 0x119 and the given value.
namespace d_005c0da0 {

struct __attribute__((packed)) Local_005c0da0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c0da0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005c0da0_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00678278, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_196;

struct __attribute__((packed)) PlayerRequestState196WithId119Frame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(PlayerRequestState196WithId119Frame, word_0, 0x0);
GUEST_SIZE(PlayerRequestState196WithId119Frame, 0x10);

void player_request_state_196_with_id_119(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<PlayerRequestState196WithId119Frame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    frame->word_0 = 0;
    gptr<Local_005c0da0_ea_2> ea_2 = gptr<Local_005c0da0_ea_2>(frame.at(4).addr());
    ea_2->word_0 = 0;
    ea_2->word_4 = ~0u;
    float S0_1 = 0.0f;
    guest::cpu()->s[0] = S0_1;
    AcPlayer_rec__request_state_196(object, 0x119u, r0, 0u);
}

}  // namespace d_005c0da0
GUEST_EXPORT_FRAMED(0x005c0da0, d_005c0da0::player_request_state_196_with_id_119, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c0e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the player the special letter from Nintendo with its attached item; true when it was sent.
namespace d_005c0e0c {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x572b];  // (not used here)
    u8 byte_572b;
};
GUEST_OFFSET(Player, byte_572b, 0x572b);

struct __attribute__((packed)) Local_005c0e0c_r5_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c0e0c_r5_2, word_0, 0x0);
GUEST_OFFSET(Local_005c0e0c_r5_2, word_4, 0x4);

inline constexpr guest::Function<0x002f77e8, u32(u32)> same_pointer;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> Letter__Letter;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> Item__check_property;
inline constexpr guest::Function<0x005cc160, u32(u32, u32, u32, u32)> SaveFile__write_block;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) SendNintendoLetterFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x288];  // (not read or written by name)
};
GUEST_OFFSET(SendNintendoLetterFrame, word_0, 0x0);
GUEST_OFFSET(SendNintendoLetterFrame, word_4, 0x4);
GUEST_OFFSET(SendNintendoLetterFrame, word_10, 0x10);
GUEST_SIZE(SendNintendoLetterFrame, 0x29c);

u32 send_nintendo_letter(gptr<Player> player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SendNintendoLetterFrame> frame;  // the original's stack frame
    u32 r5_1 = u32(player->byte_572b) >> 4u & 1u;
    Letter__Letter(frame.at(0x18).addr(), r1, r2, r3);
    u32 r0_2 = frame.at(0x14).addr();
    construct_item(r0_2, 0x2281u);
    u32 zf_1 = r5_1 == 0;
    frame->word_4 = player.addr() + 0x55a6u;
    gptr<Local_005c0e0c_r5_2> r5_2 = gptr<Local_005c0e0c_r5_2>(frame.at(8).addr());
    frame->word_10 = 0;
    frame->word_0 = 1;
    r5_2->word_0 = r0_2;
    r5_2->word_4 = 0x1e;
    u32 r0_4 = SaveFile__write_block(frame.at(0x18).addr(), 0x5c0f04u, 1u, zf_1 ? 2u : 1u);
    if ((r0_4 ^ 1u) == 0) {
        u32 r0_5 = frame.at(0x14).addr();
        construct_item(r0_5, 0x30cbu);
        set_held_item(frame.at(0x18).addr(), r0_5, 0u);
        r0_4 = Item__check_property(frame.at(0x18).addr(), 3u, 2u, 0u);
        if (r0_4 != 0) {
            same_pointer(r0_4);
            return 1u;
        }
    }
    same_pointer(r0_4);
    return 0u;
}

}  // namespace d_005c0e0c
GUEST_EXPORT_FRAMED(0x005c0e0c, d_005c0e0c::send_nintendo_letter, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c111c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In talk state 0xe and unless locked: requests state 20 for the object of the given id.
namespace d_005c111c {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x00659d9c, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_20_2;

struct __attribute__((packed)) PlayerRequestState20InTalkEFrame {
    u32 word_0;
};
GUEST_OFFSET(PlayerRequestState20InTalkEFrame, word_0, 0x0);
GUEST_SIZE(PlayerRequestState20InTalkEFrame, 0x4);

u32 player_request_state_20_in_talk_e(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<PlayerRequestState20InTalkEFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4_1 = *frame.at<u32>(0x20);
    u32 r0_1 = talk_state_matches(0xeu, 0u, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 object = look_up_object(r4_1, 0u);
        r1_1 = guest::cpu()->r[1];
        if (object != 0) {
            r1_1 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;
            if (r1_1 == 0) {
                float S0_2 = 0.0f;
                frame->word_0 = r3;
                guest::cpu()->s[0] = S0_2;
                return AcPlayer_rec__request_state_20_2(object, r0, r1, r2 ^ 1u);
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005c111c
GUEST_EXPORT_FRAMED(0x005c111c, d_005c111c::player_request_state_20_in_talk_e, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005c1198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In talk state 0xe (or when forced) and unless locked: requests state 21 with the angle and options.
namespace d_005c1198 {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00659e34, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_21;

struct __attribute__((packed)) PlayerRequestState21InTalkEFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(PlayerRequestState21InTalkEFrame, word_0, 0x0);
GUEST_OFFSET(PlayerRequestState21InTalkEFrame, word_4, 0x4);
GUEST_SIZE(PlayerRequestState21InTalkEFrame, 0x8);

u32 player_request_state_21_in_talk_e(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerRequestState21InTalkEFrame> frame;  // the original's stack frame
    u32 player = 0;
    u32 r1_1 = 0;
    u32 r4_1 = *frame.at<u32>(0x20);
    u32 r8_1 = r2;
    u32 r6_1 = r3;
    if (r4_1 == 0) {
        player = talk_state_matches(0xeu, 0u, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (player == 0) {
            return player;
        }
    }
    player = look_up_object(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (player != 0) {
        r1_1 = u32(*gptr<u8>(player + 0x8c5u)) >> 5u & 1u;
        if (r1_1 != 0) {
            player = 0u;
        } else {
            frame->word_4 = r4_1;
            frame->word_0 = r6_1;
            player = AcPlayer_rec__request_state_21(player, r0, r1 ^ 1u, r8_1);
            r1_1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_1;
    return player;
}

}  // namespace d_005c1198
GUEST_EXPORT_FRAMED(0x005c1198, d_005c1198::player_request_state_21_in_talk_e, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005c121c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the main player to state 0xcd (unless its state is locked).
namespace d_005c121c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

void main_player_to_state_cd(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    frame.release();
    AcPlayer_rec__change_state(object, 0xcdu, 0u, 0u);
    return;
}

}  // namespace d_005c121c
GUEST_EXPORT(0x005c121c, d_005c121c::main_player_to_state_cd);

// f_005c12a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a move request of kind 0xb with zero targets.
namespace d_005c12a8 {

struct __attribute__((packed)) InitMoveRequestBArg0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    float float_c;
    float float_10;
};
GUEST_OFFSET(InitMoveRequestBArg0, byte_0, 0x0);
GUEST_OFFSET(InitMoveRequestBArg0, word_4, 0x4);
GUEST_OFFSET(InitMoveRequestBArg0, word_8, 0x8);
GUEST_OFFSET(InitMoveRequestBArg0, float_c, 0xc);
GUEST_OFFSET(InitMoveRequestBArg0, float_10, 0x10);


void init_move_request_b(gptr<InitMoveRequestBArg0> arg0) {
    arg0->byte_0 = 0xb;
    float S0_1 = 0.0f;
    arg0->word_8 = 0;
    arg0->word_4 = 0;
    arg0->float_10 = S0_1;
    arg0->float_c = S0_1;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005c12a8
GUEST_EXPORT(0x005c12a8, d_005c12a8::init_move_request_b);

// f_005c12d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Slot `slot` (below 4) mapped through the table at 0xa82000, or the first one free.
namespace d_005c12d0 {


u32 player_slot_or_first_free(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    if (r0 >= 4u) {
        return r0 & 3u;
    }
    u32 r12 = 0xa82000u;
    u32 r3 = r0;
    r1 = 0u;
    do {
        if (u32(*gptr<s8>(r12 + r1)) >= 4u) {
            goto L_5c1318;
        }
        r1 = *gptr<s8>(r12 + r3);
        r0 = ~0u;
        res_1 = r1 - 4u;
        nf_1 = res_1 >> 0x1f;
        vf_1 = ((r1 ^ 4u) & (r1 ^ res_1)) >> 0x1f;
        if (nf_1 != vf_1) {
            nf_1 = r1 >> 0x1f;
            vf_1 = 0u;
            r0 = r1;
        }
        if (nf_1 != vf_1) {
            guest::cpu()->r[1] = r1;
            return r3;
        }
L_5c1308:;
        if (r0 < 4u) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        guest::cpu()->r[1] = r1;
        return r3;
L_5c1318:;
        r1 += 1u;
        if (r1 >= 4u) {
            guest::preempt();
            goto L_5c1308;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_005c12d0
GUEST_EXPORT(0x005c12d0, d_005c12d0::player_slot_or_first_free);

// f_005c132c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Jumps to look_up_object.
namespace d_005c132c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 look_up_object_veneer() {
    return look_up_object(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c132c
GUEST_EXPORT(0x005c132c, d_005c132c::look_up_object_veneer);

// f_005c13e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the player input flag 0x10.
namespace d_005c13e0 {

inline constexpr u32 player_input_flags_address = 0x00aadad4u;
inline guest::global<u8, 0x00aadad4> player_input_flags;

u32 set_player_input_flag_10() {
    u32 r1_1 = u32(*player_input_flags) | 0x10u;
    *player_input_flags = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return player_input_flags_address;
}

}  // namespace d_005c13e0
GUEST_EXPORT(0x005c13e0, d_005c13e0::set_player_input_flag_10);

// f_005c1428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: requests the state in the record with one parameter entry.
namespace d_005c1428 {

struct __attribute__((packed)) PlayerQueueAction0Arg0 {
    u32 word_0;
};
GUEST_OFFSET(PlayerQueueAction0Arg0, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> request_player_state_with_params;

struct __attribute__((packed)) PlayerQueueAction0Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
};
GUEST_OFFSET(PlayerQueueAction0Frame, word_0, 0x0);
GUEST_OFFSET(PlayerQueueAction0Frame, word_4, 0x4);
GUEST_OFFSET(PlayerQueueAction0Frame, word_8, 0x8);
GUEST_OFFSET(PlayerQueueAction0Frame, byte_c, 0xc);
GUEST_SIZE(PlayerQueueAction0Frame, 0x10);

void player_queue_action_0(gptr<PlayerQueueAction0Arg0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerQueueAction0Frame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    frame->word_8 = arg0->word_0;
    frame->byte_c = 0;
    frame->word_0 = 1;
    frame->word_4 = 0;
    request_player_state_with_params(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c1428
GUEST_EXPORT_FRAMED(0x005c1428, d_005c1428::player_queue_action_0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c159c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the main player to state 0xcc (unless its state is locked).
namespace d_005c159c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

u32 main_player_to_state_cc(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return object;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return 0u;
    }
    frame.release();
    return AcPlayer_rec__change_state(object, 0xccu, 0u, 0u);
}

}  // namespace d_005c159c
GUEST_EXPORT(0x005c159c, d_005c159c::main_player_to_state_cc);

// f_005c167c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets word `index` (fewer than 4) of an array in the save data.
namespace d_005c167c {

inline constexpr u32 player_records_address = 0x00a84790u;

void set_value_of_4(u32 index, u32 value) {
    if (index >= 4u) {
        return;
    }
    *gptr<u32>((index << 2) + player_records_address + 0x29204u) = value;
}

}  // namespace d_005c167c
GUEST_EXPORT(0x005c167c, d_005c167c::set_value_of_4);

// f_005c17e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0052cb48 unless the talk state is 5 without its flag.
namespace d_005c17e4 {

inline constexpr guest::Function<0x0052bf54, u32(u32, u32, u32, u32)> talk_state_5_without_flag;
inline constexpr guest::Function<0x0052cb48, u32(u32, u32, u32, u32)> Talk__can_start;

void call_0052cb48_unless_talk_5(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (talk_state_5_without_flag(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) != 0) {
        return;
    }
    frame.release();
    Talk__can_start(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005c17e4
GUEST_EXPORT(0x005c17e4, d_005c17e4::call_0052cb48_unless_talk_5);

// f_005c1814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 23 of an object found by its kind and index (args 0 and 1), when there is one.
namespace d_005c1814 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 call_virtual_23_of_object(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object_2 = look_up_object(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object_2 == 0) {
        return object_2;
    }
    u32 r1_2 = *gptr<u32>(*gptr<u32>(object_2) + 0x5cu);
    // virtual function 23 of object_2
    frame.release();
    return guest::call_address<u32>(r1_2, object_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c1814
GUEST_EXPORT(0x005c1814, d_005c1814::call_virtual_23_of_object);

// f_005c1b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: queues an action of kind 1 with the given word.
namespace d_005c1b0c {

struct __attribute__((packed)) PlayerQueueAction1Arg0 {
    u32 word_0;
};
GUEST_OFFSET(PlayerQueueAction1Arg0, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> request_player_state_with_params;

struct __attribute__((packed)) PlayerQueueAction1Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
};
GUEST_OFFSET(PlayerQueueAction1Frame, word_0, 0x0);
GUEST_OFFSET(PlayerQueueAction1Frame, word_4, 0x4);
GUEST_OFFSET(PlayerQueueAction1Frame, word_8, 0x8);
GUEST_OFFSET(PlayerQueueAction1Frame, byte_c, 0xc);
GUEST_SIZE(PlayerQueueAction1Frame, 0x10);

void player_queue_action_1(gptr<PlayerQueueAction1Arg0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerQueueAction1Frame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    frame->word_8 = arg0->word_0;
    frame->byte_c = 1;
    frame->word_0 = 1;
    frame->word_4 = 0;
    request_player_state_with_params(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c1b0c
GUEST_EXPORT_FRAMED(0x005c1b0c, d_005c1b0c::player_queue_action_1, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c1b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: calls 00660d14 on it with the two arguments.
namespace d_005c1b6c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00660d14, u32(u32, u32, u32, u32)> AcPlayer__start_state_38;

u32 player_call_660d14(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, guest::cpu()->r[3]);
    if (object != 0) {
        if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
            object = 0u;
        } else {
            frame.release();
            return AcPlayer__start_state_38(object, r0, r1, guest::cpu()->r[3]);
        }
    }
    return object;
}

}  // namespace d_005c1b6c
GUEST_EXPORT(0x005c1b6c, d_005c1b6c::player_call_660d14);

// f_005c1bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: queues an action of kind 2 with an item.
namespace d_005c1bb4 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> request_player_state_with_params;

struct __attribute__((packed)) PlayerQueueItemActionFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
    u32 word_10;
};
GUEST_OFFSET(PlayerQueueItemActionFrame, word_0, 0x0);
GUEST_OFFSET(PlayerQueueItemActionFrame, word_4, 0x4);
GUEST_OFFSET(PlayerQueueItemActionFrame, word_8, 0x8);
GUEST_OFFSET(PlayerQueueItemActionFrame, byte_c, 0xc);
GUEST_OFFSET(PlayerQueueItemActionFrame, word_10, 0x10);
GUEST_SIZE(PlayerQueueItemActionFrame, 0x14);

void player_queue_item_action(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerQueueItemActionFrame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    Item__copy_b(frame.at(0x10).addr(), r0);
    frame->word_8 = frame->word_10;
    frame->byte_c = 2;
    frame->word_0 = 1;
    frame->word_4 = 0;
    request_player_state_with_params(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c1bb4
GUEST_EXPORT_FRAMED(0x005c1bb4, d_005c1bb4::player_queue_item_action, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c1c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the main player in state 6, or 0xf when `r0` is set (unless it is busy).
namespace d_005c1c7c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

void main_player_to_state_6_or_f(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    if (r0 == 0) {
        frame.release();
        AcPlayer_rec__change_state(object, 6u, 0u, 0u);
        return;
    }
    frame.release();
    AcPlayer_rec__change_state(object, 0xfu, 0u, 0u);
    return;
}

}  // namespace d_005c1c7c
GUEST_EXPORT(0x005c1c7c, d_005c1c7c::main_player_to_state_6_or_f);

// f_005c2120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: queues an action of kind 6 with the given word.
namespace d_005c2120 {

struct __attribute__((packed)) PlayerQueueAction6Arg0 {
    u32 word_0;
};
GUEST_OFFSET(PlayerQueueAction6Arg0, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> request_player_state_with_params;

struct __attribute__((packed)) PlayerQueueAction6Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
};
GUEST_OFFSET(PlayerQueueAction6Frame, word_0, 0x0);
GUEST_OFFSET(PlayerQueueAction6Frame, word_4, 0x4);
GUEST_OFFSET(PlayerQueueAction6Frame, word_8, 0x8);
GUEST_OFFSET(PlayerQueueAction6Frame, byte_c, 0xc);
GUEST_SIZE(PlayerQueueAction6Frame, 0x10);

void player_queue_action_6(gptr<PlayerQueueAction6Arg0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerQueueAction6Frame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    u32 r1_1 = arg0->word_0;
    frame->byte_c = 6;
    frame->word_8 = r1_1;
    frame->word_0 = 1;
    frame->word_4 = 0;
    request_player_state_with_params(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c2120
GUEST_EXPORT_FRAMED(0x005c2120, d_005c2120::player_queue_action_6, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c2188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: queues an action of kind 5 with the given word.
namespace d_005c2188 {

struct __attribute__((packed)) PlayerQueueAction5Arg0 {
    u32 word_0;
};
GUEST_OFFSET(PlayerQueueAction5Arg0, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> request_player_state_with_params;

struct __attribute__((packed)) PlayerQueueAction5Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
};
GUEST_OFFSET(PlayerQueueAction5Frame, word_0, 0x0);
GUEST_OFFSET(PlayerQueueAction5Frame, word_4, 0x4);
GUEST_OFFSET(PlayerQueueAction5Frame, word_8, 0x8);
GUEST_OFFSET(PlayerQueueAction5Frame, byte_c, 0xc);
GUEST_SIZE(PlayerQueueAction5Frame, 0x10);

void player_queue_action_5(gptr<PlayerQueueAction5Arg0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerQueueAction5Frame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    u32 r2_1 = arg0->word_0;
    frame->byte_c = 5;
    frame->word_8 = r2_1;
    frame->word_0 = 1;
    frame->word_4 = 0;
    request_player_state_with_params(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c2188
GUEST_EXPORT_FRAMED(0x005c2188, d_005c2188::player_queue_action_5, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c21f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the main object's state class is 1 to 5: calls 0065e0b8 on the player.
namespace d_005c21f0 {

inline constexpr guest::Function<0x005c2808, u32(u32, u32, u32, u32)> main_object_state_class_1_to_5;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x0065e0b8, u32(u32)> AcPlayer_rec__leave_state;

void player_call_65e0b8_in_class_1_to_5(u32 r0, u32 r1) {
    if (main_object_state_class_1_to_5(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        return;
    }
    u32 object = look_up_object(4u, 0u);
    if (object == 0) {
        return;
    }
    AcPlayer_rec__leave_state(object);
}

}  // namespace d_005c21f0
GUEST_EXPORT_FRAMED(0x005c21f0, d_005c21f0::player_call_65e0b8_in_class_1_to_5, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c2224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the main player to state 0xcb (unless its state is locked).
namespace d_005c2224 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

void main_player_to_state_cb(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    u32 r1_2 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    frame.release();
    AcPlayer_rec__change_state(object, 0xcbu, 0u, 0u);
    return;
}

}  // namespace d_005c2224
GUEST_EXPORT(0x005c2224, d_005c2224::main_player_to_state_cb);

// f_005c2298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the main player to state 0x78 (unless its state is locked).
namespace d_005c2298 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

void main_player_to_state_78(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    u32 r1_2 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    frame.release();
    AcPlayer_rec__change_state(object, 0x78u, 0u, 0u);
    return;
}

}  // namespace d_005c2298
GUEST_EXPORT(0x005c2298, d_005c2298::main_player_to_state_78);

// f_005c22dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 006579a8 on the player with its entry set and the arguments.
namespace d_005c22dc {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_73;
inline constexpr guest::Function<0x006d96fc, u32(u32)> main_object_entry_set;

struct __attribute__((packed)) PlayerCall6579a8Frame {
    u32 word_0;
};
GUEST_OFFSET(PlayerCall6579a8Frame, word_0, 0x0);
GUEST_SIZE(PlayerCall6579a8Frame, 0x4);

u32 player_call_6579a8(u32 catch_mgr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerCall6579a8Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object != 0) {
        frame->word_0 = main_object_entry_set(object);
        object = AcPlayer_rec__request_state_73(object, catch_mgr, r1, r2);
    }
    return object;
}

}  // namespace d_005c22dc
GUEST_EXPORT_FRAMED(0x005c22dc, d_005c22dc::player_call_6579a8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005c23c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the player (not locked) is in action 0x92: finishes it with the held item (+0x8ca).
namespace d_005c23c4 {

struct __attribute__((packed)) Object {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x71b];  // (not used here)
    u8 byte_8c5;
};
GUEST_OFFSET(Object, byte_1a9, 0x1a9);
GUEST_OFFSET(Object, byte_8c5, 0x8c5);

inline constexpr u32 origin_x_address = 0x00ae5658u;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006609bc, u32(u32, u32)> AcPlayer__restore_camera;
inline constexpr guest::Function<0x0068aa1c, u32(u32, u32, u32, u32)> AcPlayer_rec__request_move_state;

struct __attribute__((packed)) PlayerFinishAction92Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(PlayerFinishAction92Frame, word_0, 0x0);
GUEST_OFFSET(PlayerFinishAction92Frame, word_4, 0x4);
GUEST_OFFSET(PlayerFinishAction92Frame, word_8, 0x8);
GUEST_SIZE(PlayerFinishAction92Frame, 0x10);

u32 player_finish_action_92(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerFinishAction92Frame> frame;  // the original's stack frame
    gptr<Object> object = gptr<Object>(look_up_object(4u, 0u, r2, r3));
    if (object.addr() != 0) {
        if ((u32(object->byte_8c5) >> 5u & 1u) == 0 && object->byte_1a9 == 0x92u) {
            u32 r0_2 = frame.at(0xc).addr();
            construct_empty_item(r0_2);
            u32 r1_2 = *gptr<u32>(object.addr() + 0x8cau);
            *gptr<u32>(r0_2) = r1_2;
            current_net_station(AcPlayer__restore_camera(object.addr(), r1_2));
            frame->word_0 = 0x2b;
            frame->word_4 = 2;
            frame->word_8 = 0xae5658;
            AcPlayer_rec__request_move_state(object.addr(), frame.at(0xc).addr(), 0u, r0);
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_005c23c4
GUEST_EXPORT_FRAMED(0x005c23c4, d_005c23c4::player_finish_action_92, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c257c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the player the special star letter with an attached item picked at random from kind 9 (that the player can
// still get); true when it was sent.
namespace d_005c257c {

inline constexpr u32 star_letter_flags_address = 0x00953f58u;
inline constexpr u32 star_letter_state_address = 0x00a84480u;
inline guest::global<u32, 0x00953f58> star_letter_flags;
inline constexpr guest::Function<0x0024a5ec, u32(u32, u32, u32)> ItemBitSet__clear;
inline constexpr guest::Function<0x002f77e8, u32(u32, u32)> same_pointer;
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc2a4, u32(u32, u32)> ItemSet__add_kind;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x002fea2c, u32(u32, u32)> pick_random_item;
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> Letter__Letter;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> Item__check_property;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> load_mail_with_adapter;
inline constexpr guest::Function<0x006f073c, u32(u32, u32)> PlayerRecords__index_of;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) SendStarLetterFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x288];  // (not read or written by name)
};
GUEST_OFFSET(SendStarLetterFrame, word_0, 0x0);
GUEST_OFFSET(SendStarLetterFrame, word_4, 0x4);
GUEST_OFFSET(SendStarLetterFrame, word_8, 0x8);
GUEST_SIZE(SendStarLetterFrame, 0x294);

u32 send_star_letter(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SendStarLetterFrame> frame;  // the original's stack frame
    Letter__Letter(frame.at(0x10).addr(), r1, r2, r3);
    u32 r0_2 = frame.at(0x290).addr();
    construct_item(r0_2, 0x2278u);
    u32 random = random_below(3u);
    frame->word_4 = 0x14;
    frame->word_8 = 0;
    frame->word_0 = r0_2;
    u32 r0_5 = load_mail_with_adapter(frame.at(0x10).addr(), 0x5c26f4u, random + 1u, player + 0x55a6u);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    if ((r0_5 ^ 1u) == 0) {
        if ((*star_letter_flags & 1u) == 0) {
            u32 first_time_2 = static_guard_acquire(star_letter_flags_address, r1_2, r2_4);
            r1_2 = guest::cpu()->r[1];
            r2_4 = guest::cpu()->r[2];
            if (first_time_2 != 0) {
                ItemBitSet__clear_and_return(star_letter_state_address, r1_2, r2_4);
                r2_4 = 0x100000u;
                r1_2 = 0x2fc8fcu;
            }
        }
        ItemBitSet__clear(star_letter_state_address, r1_2, r2_4);
        ItemSet__add_kind(star_letter_state_address, 9u);
        u32 index = PlayerRecords__index_of(star_letter_state_address, player);
        if (index == 0) {
            ItemBitSet__clear(star_letter_state_address, guest::cpu()->r[1], guest::cpu()->r[2]);
            ItemSet__add_kind(star_letter_state_address, 9u);
        }
        pick_random_item(frame.at(0xc).addr(), star_letter_state_address);
        set_held_item(frame.at(0x10).addr(), frame.at(0xc).addr(), 0u);
        r0_5 = Item__check_property(frame.at(0x10).addr(), 3u, 1u, 0u);
        r1_2 = guest::cpu()->r[1];
        if (r0_5 != 0) {
            same_pointer(r0_5, r1_2);
            return 1u;
        }
    }
    same_pointer(r0_5, r1_2);
    return 0u;
}

}  // namespace d_005c257c
GUEST_EXPORT_FRAMED(0x005c257c, d_005c257c::send_star_letter, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c2718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the player input flag 0x10.
namespace d_005c2718 {

inline constexpr u32 player_input_flags_address = 0x00aadad4u;
inline guest::global<u8, 0x00aadad4> player_input_flags;

u32 clear_player_input_flag_10() {
    u32 r1_1 = u32(*player_input_flags) & ~0x10u;
    *player_input_flags = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return player_input_flags_address;
}

}  // namespace d_005c2718
GUEST_EXPORT(0x005c2718, d_005c2718::clear_player_input_flag_10);

// f_005c2730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The cell (x, z) of a point computed by 0065472c.
namespace d_005c2730 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x0065472c, u32(u32, u32, u32, u32)> point_on_circle_12;

u32 cell_of_player_point(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    point_on_circle_12(frame.at(0).addr(), r2, r3, r3);
    return position_to_cell(r0, r1, frame.at(0).addr());
}

}  // namespace d_005c2730
GUEST_EXPORT_FRAMED(0x005c2730, d_005c2730::cell_of_player_point, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c2768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the player's position (007634d0) into the static vector at 0xa843c8 and returns it.
namespace d_005c2768 {

inline constexpr u32 player_position_copy_flags_address = 0x00953f50u;
inline constexpr u32 player_position_copy_value_address = 0x00a843c8u;
inline guest::global<u32, 0x00953f50> player_position_copy_flags;
inline guest::global<u32, 0x00a843c8> player_position_copy_value;
inline guest::global<u32, 0x00a843cc> global_00a843cc;
inline guest::global<u32, 0x00a843d0> global_00a843d0;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x007634d0, u32(u32, u32)> player_reference_point;

struct __attribute__((packed)) PlayerPositionCopyFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(PlayerPositionCopyFrame, word_0, 0x0);
GUEST_OFFSET(PlayerPositionCopyFrame, word_4, 0x4);
GUEST_OFFSET(PlayerPositionCopyFrame, word_8, 0x8);
GUEST_SIZE(PlayerPositionCopyFrame, 0xc);

u32 player_position_copy() {
    guest::StackFrameOf<PlayerPositionCopyFrame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object == 0) {
        return object;
    }
    if ((*player_position_copy_flags & 1u) == 0) {
        static_guard_acquire(player_position_copy_flags_address);
    }
    player_reference_point(frame.at(0).addr(), object);
    *player_position_copy_value = frame->word_0;
    *global_00a843cc = frame->word_4;
    *global_00a843d0 = frame->word_8;
    return player_position_copy_value_address;
}

}  // namespace d_005c2768
GUEST_EXPORT_FRAMED(0x005c2768, d_005c2768::player_position_copy, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c29f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0067bcf4 on the object of the given id (from the stack) with the arguments.
namespace d_005c29f8 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0067bcf4, u32(u32, u32, u32, u32)> AcPlayer__start_move_state;

struct __attribute__((packed)) ObjectCall67bcf4Frame {
    u32 word_0;
};
GUEST_OFFSET(ObjectCall67bcf4Frame, word_0, 0x0);
GUEST_SIZE(ObjectCall67bcf4Frame, 0x4);

u32 object_call_67bcf4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ObjectCall67bcf4Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 object = look_up_object(*frame.at<u32>(0x18), 0u, r2, r3);
    if (object != 0) {
        frame->word_0 = r3;
        object = AcPlayer__start_move_state(object, r0, r1, r2);
    }
    return object;
}

}  // namespace d_005c29f8
GUEST_EXPORT_FRAMED(0x005c29f8, d_005c29f8::object_call_67bcf4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005c2a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the main player is in state 0x17 or 0x18, or can start state 0x17 now (when its action mask
// allows).
namespace d_005c2a54 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> main_object_matches_action_mask;
inline constexpr guest::Function<0x0066fdc0, u32(u32, u32)> AcPlayer__start_state_17;

u32 main_player_in_states_17_to_18_or_ready() {
    u32 r0_1 = main_object_matches_action_mask(7u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 object = look_up_object(4u, 0u);
    if (object == 0) {
        return object;
    }
    u32 r1_3 = *gptr<u8>(object + 0x1a9u);
    if (r1_3 == 0x17u || r1_3 == 0x18u) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    if (r1_3 == 0x19u) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r0_3 = AcPlayer__start_state_17(object, r1_3);
    return r0_3 == 0 ? r0_3 : 1u;
}

}  // namespace d_005c2a54
GUEST_EXPORT_FRAMED(0x005c2a54, d_005c2a54::main_player_in_states_17_to_18_or_ready, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c2b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player may start an action now: no input lock, the main object allows action 0x11, and the player is not
// in action 0x16.
namespace d_005c2b00 {

inline guest::global<u8, 0x00aadad4> player_input_flags;
inline guest::global<u8, 0x00aaef14> player_slot_flags;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> main_object_matches_action_mask;
inline constexpr guest::Function<0x00659e8c, u32(u32)> AcPlayer__start_state_with_speed;
inline constexpr guest::Function<0x0067a478, u32(u32)> return_float_constant_0x41000000_;

u32 player_can_start_action(u32 r0_unused, u32 r1) {
    if ((u32(*player_input_flags) >> 4u & 1u) != 0) {
        return 0u;
    }
    if ((u32(*player_slot_flags) >> 5u & 1u) != 0) {
        return 0u;
    }
    if (main_object_matches_action_mask(0x11u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        return 0u;
    }
    u32 object = look_up_object(4u, 0u);
    u32 zf_1 = object == 0;
    u32 r4_1 = object;
    if (!zf_1) {
        object = *gptr<u8>(r4_1 + 0x1a9u);
        zf_1 = object == 0x16u;
    }
    if (zf_1) {
        return 0u;
    }
    return_float_constant_0x41000000_(object);
    u32 r0_3 = AcPlayer__start_state_with_speed(r4_1);
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_005c2b00
GUEST_EXPORT_FRAMED(0x005c2b00, d_005c2b00::player_can_start_action, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c2e40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: queues an action of kind 4 with an item.
namespace d_005c2e40 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> request_player_state_with_params;

struct __attribute__((packed)) PlayerQueueItemAction4Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
    u32 word_10;
};
GUEST_OFFSET(PlayerQueueItemAction4Frame, word_0, 0x0);
GUEST_OFFSET(PlayerQueueItemAction4Frame, word_4, 0x4);
GUEST_OFFSET(PlayerQueueItemAction4Frame, word_8, 0x8);
GUEST_OFFSET(PlayerQueueItemAction4Frame, byte_c, 0xc);
GUEST_OFFSET(PlayerQueueItemAction4Frame, word_10, 0x10);
GUEST_SIZE(PlayerQueueItemAction4Frame, 0x14);

void player_queue_item_action_4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerQueueItemAction4Frame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    Item__copy_b(frame.at(0x10).addr(), r0);
    frame->word_8 = frame->word_10;
    frame->byte_c = 4;
    frame->word_0 = 1;
    frame->word_4 = 0;
    request_player_state_with_params(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c2e40
GUEST_EXPORT_FRAMED(0x005c2e40, d_005c2e40::player_queue_item_action_4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c2f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the main player to state 6, or 0xf when arg 0 is set (unless its state is locked).
namespace d_005c2f70 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

void main_player_to_state_6_or_f_2(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    u32 r1_2 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    if (r0 == 0) {
        frame.release();
        AcPlayer_rec__change_state(object, 6u, 0u, 0u);
        return;
    }
    frame.release();
    AcPlayer_rec__change_state(object, 0xfu, 0u, 0u);
    return;
}

}  // namespace d_005c2f70
GUEST_EXPORT(0x005c2f70, d_005c2f70::main_player_to_state_6_or_f_2);

// f_005c305c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 006579a8 on the player with its entry set and the constant at 0xae5658.
namespace d_005c305c {

inline constexpr u32 origin_x_address = 0x00ae5658u;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_73;
inline constexpr guest::Function<0x006d96fc, u32(u32)> main_object_entry_set;

struct __attribute__((packed)) PlayerCall6579a8WithAe5658Frame {
    u32 word_0;
};
GUEST_OFFSET(PlayerCall6579a8WithAe5658Frame, word_0, 0x0);
GUEST_SIZE(PlayerCall6579a8WithAe5658Frame, 0x4);

u32 player_call_6579a8_with_ae5658(u32 catch_mgr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerCall6579a8WithAe5658Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object != 0) {
        frame->word_0 = main_object_entry_set(object);
        object = AcPlayer_rec__request_state_73(object, catch_mgr, origin_x_address, r1);
    }
    return object;
}

}  // namespace d_005c305c
GUEST_EXPORT_FRAMED(0x005c305c, d_005c305c::player_call_6579a8_with_ae5658, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005c30a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: calls 0065e2e0 with the arguments, flagging items of category 0x41.
namespace d_005c30a0 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32)> Item__category;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0065e2e0, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_52_or_53;

struct __attribute__((packed)) PlayerCall65e2e0WithItemFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(PlayerCall65e2e0WithItemFrame, word_0, 0x0);
GUEST_OFFSET(PlayerCall65e2e0WithItemFrame, word_4, 0x4);
GUEST_SIZE(PlayerCall65e2e0WithItemFrame, 0x8);

u32 player_call_65e2e0_with_item(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerCall65e2e0WithItemFrame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = 0u;
    if (object != 0) {
        r1_1 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;
        if (r1_1 == 0) {
            u32 category = Item__category(r3, r1_1);
            frame->word_0 = 1;
            frame->word_4 = u32(category == 0x41u);
            r0_2 = AcPlayer_rec__request_state_52_or_53(object, r0, r1, r2);
            r1_1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_005c30a0
GUEST_EXPORT_FRAMED(0x005c30a0, d_005c30a0::player_call_65e2e0_with_item, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005c311c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In modes with table bit 4: whether the player (direction +0x2e) is within 62 (height 16) of a point, through
// 006f8a58.
namespace d_005c311c {

struct __attribute__((packed)) Object {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0xe];  // (not used here)
    u16 half_2e;
};
GUEST_OFFSET(Object, word_14, 0x14);
GUEST_OFFSET(Object, word_18, 0x18);
GUEST_OFFSET(Object, word_1c, 0x1c);
GUEST_OFFSET(Object, half_2e, 0x2e);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x006f8a58, u32(u32, u32, u32, u32)> Collision__ray_cast;

struct __attribute__((packed)) PlayerIsNearPointFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(PlayerIsNearPointFrame, word_0, 0x0);
GUEST_OFFSET(PlayerIsNearPointFrame, word_4, 0x4);
GUEST_OFFSET(PlayerIsNearPointFrame, word_8, 0x8);
GUEST_SIZE(PlayerIsNearPointFrame, 0x10);

u32 player_is_near_point(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<PlayerIsNearPointFrame> frame;  // the original's stack frame
    u32 scene_2 = current_scene_id(r0, r1, r2, r3);
    u32 scene_flagged_2 = scene_has_flags(4u, scene_2);
    if (scene_flagged_2 == 0) {
        return scene_flagged_2;
    }
    gptr<Object> object = gptr<Object>(look_up_object(4u, 1u));
    if (object.addr() == 0) {
        return 0u;
    }
    float S0_4 = 62.0f;
    frame->word_0 = object->word_14;
    frame->word_4 = object->word_18;
    frame->word_8 = object->word_1c;
    u32 r2_3 = object->half_2e;
    float S1_4 = 16.0f;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    if (Collision__ray_cast(r0, frame.at(0).addr(), r2_3, 0x10u) != 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_005c311c
GUEST_EXPORT_FRAMED(0x005c311c, d_005c311c::player_is_near_point, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c31ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the mode is above 1: sends the message of slot (index & 3) from the table at 0x881b94.
namespace d_005c31ac {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

void send_slot_message_if_mode_above_1(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (mode_above_1(r0, r1, r2, r3) != 0) {
        u32 r0_2 = *gptr<u8>((r0 & 3u) + 0x881b94u);
        frame.release();
        send_message(r0_2, 4u, r1, 0x26u);
        return;
    }
}

}  // namespace d_005c31ac
GUEST_EXPORT(0x005c31ac, d_005c31ac::send_slot_message_if_mode_above_1);

// f_005c324c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position of an object's head: its model point (from +0x1b4) moved by (0, -2, 6).
namespace d_005c324c {

struct __attribute__((packed)) ObjectHeadPositionArg0 {
    float float_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(ObjectHeadPositionArg0, float_0, 0x0);
GUEST_OFFSET(ObjectHeadPositionArg0, word_4, 0x4);
GUEST_OFFSET(ObjectHeadPositionArg0, word_8, 0x8);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> Model__joint_matrix;

struct __attribute__((packed)) ObjectHeadPositionFrame {
    float float_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ObjectHeadPositionFrame, float_0, 0x0);
GUEST_OFFSET(ObjectHeadPositionFrame, word_4, 0x4);
GUEST_OFFSET(ObjectHeadPositionFrame, word_8, 0x8);
GUEST_SIZE(ObjectHeadPositionFrame, 0x10);

u32 object_head_position(gptr<ObjectHeadPositionArg0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<ObjectHeadPositionFrame> frame;  // the original's stack frame
    if (arg0.addr() == 0) {
        return 0u;
    }
    u32 object = look_up_object(r1, 1u, r2, r3);
    u32 zf_1 = object == 0;
    if (!zf_1) {
        zf_1 = object + 0x1b4u == 0;
        object = object + 0x1b4u;
    }
    if (zf_1) {
        return 0u;
    }
    Model__joint_matrix(object, frame.at(0).addr(), *gptr<u32>(object + 0xa4u), 1u);
    float S0_2 = frame->float_0 + 0.0f;
    frame->float_0 = S0_2;
    frame->word_4 = std::bit_cast<u32>(std::bit_cast<float>(frame->word_4) + -2.0f);
    float S1_2 = std::bit_cast<float>(frame->word_8) + 6.0f;
    frame->word_8 = std::bit_cast<u32>(S1_2);
    arg0->float_0 = S0_2;
    arg0->word_4 = frame->word_4;
    arg0->word_8 = frame->word_8;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_005c324c
GUEST_EXPORT_FRAMED(0x005c324c, d_005c324c::object_head_position, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c354c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005c40dc with 0.
namespace d_005c354c {

inline constexpr guest::Function<0x005c40dc, u32(u32, u32, u32, u32)> PlayerRecords__refresh;

u32 call_005c40dc_0() {
    return PlayerRecords__refresh(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c354c
GUEST_EXPORT(0x005c354c, d_005c354c::call_005c40dc_0);

// f_005c3554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005c48c8 with 9 and 1.
namespace d_005c3554 {

inline constexpr guest::Function<0x005c48c8, u32(u32, u32, u32, u32)> AcPlayer__try_enter_state;

u32 call_005c48c8_9_1() {
    return AcPlayer__try_enter_state(9u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c3554
GUEST_EXPORT(0x005c3554, d_005c3554::call_005c48c8_9_1);

// f_005c3560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 006739b8 on the player (when 005c3e84 allows it or when forced), with option 0 in scene 0x5c.
namespace d_005c3560 {

struct __attribute__((packed)) Local_005c3560_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c3560_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005c3560_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005c3560_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c3560_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005c3560_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005c3560_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c3560_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005c3560_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005c3560_r4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c3560_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_005c3560_r4_2, word_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c3e84, u32(u32, u32, u32, u32)> AcPlayer__can_act;
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> AcPlayer__start_state_by_kind;

struct __attribute__((packed)) PlayerCall6739b8Frame {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(PlayerCall6739b8Frame, word_0, 0x0);
GUEST_SIZE(PlayerCall6739b8Frame, 0x14);

u32 player_call_6739b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerCall6739b8Frame> frame;  // the original's stack frame
    u32 ac_player = 0;
    u32 r4_1 = *frame.at<u32>(0x30);
    u32 r5_1 = r2;
    u32 r6_1 = r3;
    if (r4_1 == 0) {
        ac_player = AcPlayer__can_act(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (ac_player == 0) {
            return ac_player;
        }
    }
    ac_player = look_up_object(4u, 0u, r2, r3);
    if (ac_player != 0) {
        u32 scene_2 = current_scene_id(ac_player);
        u32 r2_2 = scene_2 == 0x5cu ? 0u : r1;
        if (r4_1 == 0) {
            gptr<Local_005c3560_r4_2> r4_2 = gptr<Local_005c3560_r4_2>(frame.at(0xc).addr());
            gptr<Local_005c3560_ea_1> ea_1 = gptr<Local_005c3560_ea_1>(frame.at(4).addr());
            ea_1->word_0 = 0;
            ea_1->word_4 = r6_1;
            frame->word_0 = 0;
            r4_2->word_0 = 1;
            r4_2->word_4 = r5_1;
            return AcPlayer__start_state_by_kind(ac_player, r0, r2_2, 0u);
        }
        gptr<Local_005c3560_ea_2> ea_2 = gptr<Local_005c3560_ea_2>(frame.at(4).addr());
        ea_2->word_0 = 0;
        ea_2->word_4 = r6_1;
        gptr<Local_005c3560_ea_3> ea_3 = gptr<Local_005c3560_ea_3>(frame.at(0xc).addr());
        ea_3->word_0 = 0;
        ea_3->word_4 = r5_1;
        frame->word_0 = 0;
        ac_player = AcPlayer__start_state_by_kind(ac_player, r0, r2_2, 0u);
    }
    return ac_player;
}

}  // namespace d_005c3560
GUEST_EXPORT_FRAMED(0x005c3560, d_005c3560::player_call_6739b8, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005c38c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005c3620 with a 16-bit set holding only bit `index` (below 10).
namespace d_005c38c8 {

struct __attribute__((packed)) Local_005c38c8_r0_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_005c38c8_r0_1, byte_0, 0x0);

inline constexpr guest::Function<0x005c3620, u32(u32, u32, u32, u32)> PlayerState__find_entry;

u32 call_5c3620_with_bit(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u16>(0) = 0;
    u32 r1_1 = frame.at(0).addr();
    if (r0 < 0xau) {
        gptr<Local_005c38c8_r0_1> r0_1 = gptr<Local_005c38c8_r0_1>(r1_1 + (r0 >> 3));
        r3 = 1u;
        r1_1 = u32(r0_1->byte_0) | lsl_r(r3, (r0 & 7u) & 0xff);
        r0_1->byte_0 = u8(r1_1);
    }
    u32 entry_2 = PlayerState__find_entry(frame.at(0).addr(), r1_1, guest::cpu()->r[2], r3);
    return entry_2;
}

}  // namespace d_005c38c8
GUEST_EXPORT_FRAMED(0x005c38c8, d_005c38c8::call_5c3620_with_bit, 0x4000);  // pushes {lr} first, as the original

// f_005c423c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: calls 00678300, passing its +0x8ce in action 0xe1.
namespace d_005c423c {

struct __attribute__((packed)) Object {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x71b];  // (not used here)
    u8 byte_8c5;
    u8 unknown_8c6[0x8];  // (not used here)
    u8 byte_8ce;
};
GUEST_OFFSET(Object, byte_1a9, 0x1a9);
GUEST_OFFSET(Object, byte_8c5, 0x8c5);
GUEST_OFFSET(Object, byte_8ce, 0x8ce);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00678300, u32(u32, u32, u32, u32)> AcPlayer__start_state_e2;

struct __attribute__((packed)) PlayerCall678300Frame {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x12];  // (not read or written by name)
};
GUEST_OFFSET(PlayerCall678300Frame, word_0, 0x0);
GUEST_OFFSET(PlayerCall678300Frame, half_4, 0x4);
GUEST_SIZE(PlayerCall678300Frame, 0x18);

void player_call_678300(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerCall678300Frame> frame;  // the original's stack frame
    gptr<Object> object = gptr<Object>(look_up_object(4u, 0u, r2, r3));
    u32 r1_1 = guest::cpu()->r[1];
    if (object.addr() != 0) {
        r1_1 = u32(object->byte_8c5) >> 5u & 1u;
        if (r1_1 == 0) {
            if (object->byte_1a9 != 0xe1u) {
                frame.release();
                AcPlayer__start_state_e2(object.addr(), r0, r1, r2);
                return;
            }
            u32 r1_2 = u32(object->byte_8ce) << 8;
            frame->half_4 = u16(r1_2);
            frame->word_0 = uxth(r1_2);
            AcPlayer__start_state_e2(object.addr(), r0, frame.at(0).addr(), r2);
            r1_1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005c423c
GUEST_EXPORT(0x005c423c, d_005c423c::player_call_678300);

// f_005c4400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks player slot `slot` (below 4) as gone (8); forgets the current player data when it was the current one, and
// finishes a remote player's record.
namespace d_005c4400 {

struct __attribute__((packed)) Local_005c4400_r0_1 {
    u8 unknown_0[0x200];  // (not used here)
    u8 byte_200;
};
GUEST_OFFSET(Local_005c4400_r0_1, byte_200, 0x200);

inline constexpr u32 player_records_address = 0x00a84790u;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0027a5dc, u32(u32)> index_of_remote_slot;
inline constexpr guest::Function<0x0027ab24, u32(u32, u32)> is_remote_slot;
inline constexpr guest::Function<0x002fdf00, u32(u32, u32)> is_below_8;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x006bd910, u32(u32, u32, u32, u32)> player_operation_c;

void release_player_slot(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r0 >= 4u) {
        return;
    }
    gptr<Local_005c4400_r0_1> r0_1 = gptr<Local_005c4400_r0_1>(r0 + player_records_address + 0x29000u);
    u32 r5_1 = r0_1->byte_200;
    r0_1->byte_200 = 8;
    u32 station = current_net_station(r0_1.addr(), 8u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (station == r0) {
        u32 r0_3 = is_below_8(r5_1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            r1_1 = 0u;
            *current_player_data = r1_1;
        }
    }
    if (is_remote_slot(r5_1, r1_1) != 0) {
        u32 r0_5 = index_of_remote_slot(r5_1);
        if (r0_5 < 4u) {
            frame.release();
            player_operation_c(r0_5 * 0xa480u + player_records_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
    }
}

}  // namespace d_005c4400
GUEST_EXPORT(0x005c4400, d_005c4400::release_player_slot);

// f_005c44a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The design pattern (0x870-byte record) of the player's worn item of the first kind, when it is a design item
// (category 0x47/0x48); else 0.
namespace d_005c44a0 {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32)> record_2160_address_0020bf50;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x0071a7ec, u32(u32)> item_if_first_item_or_class_1;
inline constexpr guest::Function<0x0076aa40, u32(u32)> item_category_is_48;
inline constexpr guest::Function<0x0076abd4, u32(u32)> item_category_is_47;
inline constexpr guest::Function<0x0076bac4, u32(u32)> Item__size_kind;

struct __attribute__((packed)) WornDesignPatternAFrame {
    u32 word_0;
};
GUEST_OFFSET(WornDesignPatternAFrame, word_0, 0x0);
GUEST_SIZE(WornDesignPatternAFrame, 0x4);

u32 worn_design_pattern_a(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<WornDesignPatternAFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player_3 = player_for_slot(r0, r1, r2, r3);
    if (player_3 == 0) {
        return player_3;
    }
    u32 r0_3 = item_if_first_item_or_class_1(player_3 + 0xau);
    Item__copy_b(frame.at(0).addr(), r0_3);
    if (item_category_is_47(frame.at(0).addr()) == 0) {
        if (item_category_is_48(frame.at(0).addr()) == 0) {
            return 0u;
        }
    }
    u32 size_kind_2 = Item__size_kind(frame.at(0).addr());
    return record_2160_address_0020bf50(player_3 + 0x2cu, size_kind_2 + (0u - (u32(u64(0xcccccccdu) * size_kind_2 >> 0x20) >> 3)) * 0xau);
}

}  // namespace d_005c44a0
GUEST_EXPORT_FRAMED(0x005c44a0, d_005c44a0::worn_design_pattern_a, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c4534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of an item through 00536094, or -1 when it is not an item.
namespace d_005c4534 {

inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x00536094, u32(u32, u32)> Item__placement_group;

u32 item_value_536094(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 is_item = Item__is_item(r0);
    if (is_item == 0) {
        return ~0u;
    }
    frame.release();
    return Item__placement_group(r0, guest::cpu()->r[1]);
}

}  // namespace d_005c4534
GUEST_EXPORT(0x005c4534, d_005c4534::item_value_536094);

// f_005c4840: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: queues two action entries (kind 0 with a word, then a target).
namespace d_005c4840 {

struct __attribute__((packed)) PlayerQueueAction0WithTargetArg0 {
    u32 word_0;
};
GUEST_OFFSET(PlayerQueueAction0WithTargetArg0, word_0, 0x0);

struct __attribute__((packed)) PlayerQueueAction0WithTargetArg1 {
    u32 word_0;
};
GUEST_OFFSET(PlayerQueueAction0WithTargetArg1, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> request_player_state_with_params;

struct __attribute__((packed)) PlayerQueueAction0WithTargetFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u32 word_d;
    u8 byte_11;
    u8 unknown_12[0xa];  // (not read or written by name)
};
GUEST_OFFSET(PlayerQueueAction0WithTargetFrame, word_0, 0x0);
GUEST_OFFSET(PlayerQueueAction0WithTargetFrame, word_4, 0x4);
GUEST_OFFSET(PlayerQueueAction0WithTargetFrame, word_8, 0x8);
GUEST_OFFSET(PlayerQueueAction0WithTargetFrame, byte_c, 0xc);
GUEST_OFFSET(PlayerQueueAction0WithTargetFrame, word_d, 0xd);
GUEST_OFFSET(PlayerQueueAction0WithTargetFrame, byte_11, 0x11);
GUEST_SIZE(PlayerQueueAction0WithTargetFrame, 0x1c);

void player_queue_action_0_with_target(gptr<PlayerQueueAction0WithTargetArg0> arg0, gptr<PlayerQueueAction0WithTargetArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerQueueAction0WithTargetFrame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    u32 r2_1 = arg0->word_0;
    frame->byte_c = 0;
    frame->word_8 = r2_1;
    frame->word_d = arg1->word_0;
    frame->byte_11 = 1;
    frame->word_0 = 1;
    frame->word_4 = 0;
    request_player_state_with_params(object, frame.at(8).addr(), 2u, 0u);
}

}  // namespace d_005c4840
GUEST_EXPORT_FRAMED(0x005c4840, d_005c4840::player_queue_action_0_with_target, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c48c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Enters the state when the main object's action allows it.
namespace d_005c48c8 {

struct __attribute__((packed)) Local_005c48c8_r0_1 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Local_005c48c8_r0_1, byte_5, 0x5);

struct __attribute__((packed)) Object {
    u8 unknown_0[0x17b];  // (not used here)
    u8 byte_17b;
    u8 unknown_17c[0x2d];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x6da];  // (not used here)
    u32 word_884;
    u8 unknown_888[0x3d];  // (not used here)
    u8 byte_8c5;
    u8 unknown_8c6[0x1];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object, byte_17b, 0x17b);
GUEST_OFFSET(Object, byte_1a9, 0x1a9);
GUEST_OFFSET(Object, word_884, 0x884);
GUEST_OFFSET(Object, byte_8c5, 0x8c5);
GUEST_OFFSET(Object, byte_8c7, 0x8c7);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> main_object_matches_action_mask;
inline constexpr guest::Function<0x006548ac, u32(u32, u32, u32, u32)> AcPlayer_rec__enter_state;
inline constexpr guest::Function<0x00763818, u32(u32, u32)> entry_for_byte_1a9;

u32 AcPlayer__try_enter_state(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    gptr<Local_005c48c8_r0_1> r0_1 = gptr<Local_005c48c8_r0_1>(main_object_matches_action_mask(ac_player, r1, r2, r3));
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1.addr() != 0) {
        gptr<Object> object = gptr<Object>(look_up_object(4u, 0u));
        r1_1 = guest::cpu()->r[1];
        if (object.addr() == 0) {
            return 0u;
        }
        r0_1 = gptr<Local_005c48c8_r0_1>(entry_for_byte_1a9(object.addr(), r1_1));
        r1_1 = guest::cpu()->r[1];
        if (r0_1.addr() != 0) {
            u32 res_1 = u32(object->byte_17b) >> 2u & 1u;
            u32 r0_3 = ac_player & 2u;
            if (res_1 != 0) {
                if (r0_3 != 0 && (u32(object->byte_8c7) & 1u) != 0) {
                    u32 r0_4 = AcPlayer_rec__enter_state(object.addr(), 0x10u, 0u, 0u);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_4 != 0) {
                        goto L_5c4b70;
                    }
                }
                if ((ac_player & 4u) != 0) {
                    u32 object_2 = look_up_object(4u, 0u);
                    r1_1 = guest::cpu()->r[1];
                    if (object_2 != 0 && *gptr<u8>(object_2 + 0x1a9u) == 0x82u) {
                        u32 r0_6 = AcPlayer_rec__enter_state(object.addr(), 0x11u, 0u, 0u);
                        r1_1 = guest::cpu()->r[1];
                        if (r0_6 != 0) {
                            goto L_5c4b70;
                        }
                    }
                }
                if ((ac_player & 8u) != 0) {
                    if ((u32(object->byte_8c5) >> 5u & 1u) != 0) {
                        u32 r0_7 = AcPlayer_rec__enter_state(object.addr(), 0x12u, 0u, 0u);
                        r1_1 = guest::cpu()->r[1];
                        if (r0_7 != 0) {
                            goto L_5c4b70;
                        }
                    }
                }
                if ((ac_player & 1u) == 0 || (u32(object->byte_8c7) & 1u) != 0) {
                    guest::cpu()->r[1] = r1_1;
                    return 0u;
                }
                if ((u32(object->byte_8c5) >> 5u & 1u) != 0) {
                    guest::cpu()->r[1] = r1_1;
                    return 0u;
                }
                u32 object_3 = look_up_object(4u, 0u);
                r1_1 = guest::cpu()->r[1];
                if (object_3 != 0 && *gptr<u8>(object_3 + 0x1a9u) == 0x82u) {
                    return 0u;
                }
                u32 r0_9 = AcPlayer_rec__enter_state(object.addr(), 0xfu, 0u, 1u);
                r1_1 = guest::cpu()->r[1];
                if (r0_9 == 0) {
                    return 0u;
                }
            } else {
                u32 zf_1 = r0_3 == 0u;
                u32 cf_1 = r0_3 >= 0u;
                if (r0_3 != 0u) {
                    r0_3 = r0_1->byte_5;
                }
                if (!zf_1) {
                    u32 b_1 = r0_3 >> 4;
                    zf_1 = 7u == b_1;
                    cf_1 = 7u >= b_1;
                }
                if (cf_1 && !zf_1) {
                    r1_1 = 3u;
                    if (r1_1 == r0_3 >> 4) {
                        u32 r0_10 = AcPlayer_rec__enter_state(object.addr(), 0x10u, 0u, 0u);
                        r1_1 = guest::cpu()->r[1];
                        if (r0_10 != 0) {
                            goto L_5c4b70;
                        }
                    }
                }
                u32 r0_11 = ac_player & 4u;
                u32 zf_2 = r0_11 == 0u;
                u32 cf_2 = r0_11 >= 0u;
                if (!zf_2) {
                    r0_11 = r0_1->byte_5;
                    u32 b_2 = r0_11 >> 4;
                    zf_2 = 7u == b_2;
                    cf_2 = 7u >= b_2;
                }
                if (cf_2 && !zf_2) {
                    r1_1 = 4u;
                    if (r1_1 == r0_11 >> 4) {
                        u32 r0_12 = AcPlayer_rec__enter_state(object.addr(), 0x11u, 0u, 0u);
                        r1_1 = guest::cpu()->r[1];
                        if (r0_12 != 0) {
                            goto L_5c4b70;
                        }
                    }
                }
                u32 r0_13 = ac_player & 8u;
                u32 zf_3 = r0_13 == 0u;
                u32 cf_3 = r0_13 >= 0u;
                if (!zf_3) {
                    r0_13 = r0_1->byte_5;
                    u32 b_3 = r0_13 >> 4;
                    zf_3 = 7u == b_3;
                    cf_3 = 7u >= b_3;
                }
                if (cf_3 && !zf_3 && 5u == r0_13 >> 4) {
                    u32 r0_14 = AcPlayer_rec__enter_state(object.addr(), 0x12u, 0u, 0u);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_14 != 0) {
                        goto L_5c4b70;
                    }
                }
                u32 r0_15 = ac_player & 1u;
                u32 zf_4 = r0_15 == 0u;
                u32 cf_4 = r0_15 >= 0u;
                if (!zf_4) {
                    r0_15 = r0_1->byte_5;
                    u32 b_4 = r0_15 >> 4;
                    zf_4 = 7u == b_4;
                    cf_4 = 7u >= b_4;
                }
                if (cf_4 && !zf_4 && 2u == r0_15 >> 4) {
                    u32 r0_16 = AcPlayer_rec__enter_state(object.addr(), 0xfu, 0u, 1u);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_16 != 0) {
                        goto L_5c4b70;
                    }
                }
                if ((ac_player & 0x20u) == 0 || object->byte_1a9 != 0x70u || object->word_884 != 0) {
                    guest::cpu()->r[1] = r1_1;
                    return 0u;
                }
                u32 r0_17 = AcPlayer_rec__enter_state(object.addr(), 0xfu, 0u, 1u);
                r1_1 = guest::cpu()->r[1];
                if (r0_17 == 0) {
                    return 0u;
                }
            }
L_5c4b70:;
            r0_1 = gptr<Local_005c48c8_r0_1>(1u);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1.addr();
}

}  // namespace d_005c48c8
GUEST_EXPORT_FRAMED(0x005c48c8, d_005c48c8::AcPlayer__try_enter_state, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005c4cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Assigns player record `record` (below 8) to slot `slot` (below 4), copying a remote player's record; when it is the
// current slot, updates the current player data and its position.
namespace d_005c4cdc {

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

inline constexpr u32 player_records_address = 0x00a84790u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf140> current_player_position;
inline guest::global<u32, 0x00aaf144> current_player_position_y;
inline guest::global<u32, 0x00aaf148> current_player_position_z;
inline constexpr guest::Function<0x0023d5ec, u32(u32, u32)> Pockets__has_giftable_item;
inline constexpr guest::Function<0x0027a5dc, u32(u32)> index_of_remote_slot;
inline constexpr guest::Function<0x0027ab24, u32(u32, u32, u32, u32)> is_remote_slot;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32)> player_for_slot;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x006bcdfc, u32(u32, u32)> copy_player_record;

void assign_player_slot(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 cf_1 = r0 >= 4u;
    u32 r5_1 = r1;
    if (!cf_1) {
        cf_1 = r5_1 >= 8u;
    }
    if (!cf_1) {
        *gptr<u8>(r0 + player_records_address + 0x29200u) = u8(r5_1);
        u32 r0_1 = is_remote_slot(r5_1, r1, r2, r3);
        if (r0_1 != 0 && r2 != 0) {
            r0_1 = index_of_remote_slot(r5_1);
            if (r0_1 < 4u) {
                r0_1 = copy_player_record(r0_1 * 0xa480u + player_records_address, r2);
            }
        }
        u32 station = current_net_station(r0_1);
        r1 = guest::cpu()->r[1];
        if (station == r0) {
            u32 player = player_for_slot(r5_1, r1);
            r1 = current_player_data_address;
            *gptr<u32>(r1) = player;
            u32 pockets = *gptr<u32>(r1);
            if (pockets != 0) {
                gptr<Now> now_2 = gptr<Now>(game_time_now(Pockets__has_giftable_item(pockets, r1)));
                r1 = now_2->word_0;
                u32 r2_4 = now_2->word_4;
                u32 r3_4 = now_2->word_8;
                *current_player_position = r1;
                *current_player_position_y = r2_4;
                *current_player_position_z = r3_4;
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005c4cdc
GUEST_EXPORT_FRAMED(0x005c4cdc, d_005c4cdc::assign_player_slot, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005c4e00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The town record (+0x5d880) of the current slot's local player, or 0.
namespace d_005c4e00 {

inline constexpr u32 player_records_address = 0x00a84790u;
inline constexpr u32 player_slots_address = 0x00aad990u;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fdf00, u32(u32, u32)> is_below_8;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x00317ee0, u32(u32, u32)> record_4648_address;

u32 current_player_town_record(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 station = current_net_station(r0);
    u32 r4_1 = *gptr<u8>((station & 3u) + player_slots_address);
    if (is_below_8(r4_1, player_records_address) == 0) {
        r4_1 = 8u;
    }
    u32 r0_3 = is_local_slot(r4_1);
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 data_base = get_data_base(r0_3);
    frame.release();
    return record_4648_address(data_base + 0x5d880u, r4_1);
}

}  // namespace d_005c4e00
GUEST_EXPORT(0x005c4e00, d_005c4e00::current_player_town_record);

// f_005c4f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The design pattern of the player's worn item of class 7, when it is a design item (category 0x47/0x48); else 0.
namespace d_005c4f3c {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32)> record_2160_address_0020bf50;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x0076aa40, u32(u32)> item_category_is_48;
inline constexpr guest::Function<0x0076abd4, u32(u32)> item_category_is_47;
inline constexpr guest::Function<0x0076bac4, u32(u32)> Item__size_kind;

struct __attribute__((packed)) WornDesignPatternClass7Frame {
    u32 word_0;
};
GUEST_OFFSET(WornDesignPatternClass7Frame, word_0, 0x0);
GUEST_SIZE(WornDesignPatternClass7Frame, 0x4);

u32 worn_design_pattern_class_7(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<WornDesignPatternClass7Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player = player_for_slot(r0, r1, r2, r3);
    if (player == 0) {
        return player;
    }
    u32 r0_3 = slot_7_if_class_7(player + 0xau);
    Item__copy_b(frame.at(0).addr(), r0_3);
    if (item_category_is_47(frame.at(0).addr()) == 0) {
        if (item_category_is_48(frame.at(0).addr()) == 0) {
            return 0u;
        }
    }
    u32 size_kind_2 = Item__size_kind(frame.at(0).addr());
    return record_2160_address_0020bf50(player + 0x2cu, size_kind_2 + (0u - (u32(u64(0xcccccccdu) * size_kind_2 >> 0x20) >> 3)) * 0xau);
}

}  // namespace d_005c4f3c
GUEST_EXPORT_FRAMED(0x005c4f3c, d_005c4f3c::worn_design_pattern_class_7, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c4fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The design pattern of the player's worn item of class 3, when it is a design item (category 0x47/0x48); else 0.
namespace d_005c4fd0 {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32)> record_2160_address_0020bf50;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x0071a868, u32(u32)> slot_2_if_class_3_0071a868;
inline constexpr guest::Function<0x0076aa40, u32(u32)> item_category_is_48;
inline constexpr guest::Function<0x0076abd4, u32(u32)> item_category_is_47;
inline constexpr guest::Function<0x0076bac4, u32(u32)> Item__size_kind;

struct __attribute__((packed)) WornDesignPatternClass3Frame {
    u32 word_0;
};
GUEST_OFFSET(WornDesignPatternClass3Frame, word_0, 0x0);
GUEST_SIZE(WornDesignPatternClass3Frame, 0x4);

u32 worn_design_pattern_class_3(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<WornDesignPatternClass3Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player = player_for_slot(r0, r1, r2, r3);
    if (player == 0) {
        return player;
    }
    u32 r0_3 = slot_2_if_class_3_0071a868(player + 0xau);
    Item__copy_b(frame.at(0).addr(), r0_3);
    if (item_category_is_47(frame.at(0).addr()) == 0) {
        if (item_category_is_48(frame.at(0).addr()) == 0) {
            return 0u;
        }
    }
    u32 size_kind_2 = Item__size_kind(frame.at(0).addr());
    return record_2160_address_0020bf50(player + 0x2cu, size_kind_2 + (0u - (u32(u64(0xcccccccdu) * size_kind_2 >> 0x20) >> 3)) * 0xau);
}

}  // namespace d_005c4fd0
GUEST_EXPORT_FRAMED(0x005c4fd0, d_005c4fd0::worn_design_pattern_class_3, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c5328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the main object allows action 0x21 and the player is not locked: calls 0067ee38.
namespace d_005c5328 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> main_object_matches_action_mask;
inline constexpr guest::Function<0x0067ee38, u32(u32, u32, u32, u32)> AcPlayer__start_state_79;

struct __attribute__((packed)) PlayerCall67ee38IfAction21Frame {
    u32 word_0;
};
GUEST_OFFSET(PlayerCall67ee38IfAction21Frame, word_0, 0x0);
GUEST_SIZE(PlayerCall67ee38IfAction21Frame, 0x4);

void player_call_67ee38_if_action_21(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerCall67ee38IfAction21Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = main_object_matches_action_mask(0x21u, 0u, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 object = look_up_object(4u, 0u);
        r1_1 = guest::cpu()->r[1];
        if (object != 0) {
            r1_1 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;
            if (r1_1 == 0) {
                frame->word_0 = r3;
                AcPlayer__start_state_79(object, r0, r1, r2);
                r1_1 = guest::cpu()->r[1];
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005c5328
GUEST_EXPORT_FRAMED(0x005c5328, d_005c5328::player_call_67ee38_if_action_21, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005c5390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: queues an action with the item for design pattern `index` (below 10) of the current
// player (0x33ab, 0x33ac or 0x33ad by its kind).
namespace d_005c5390 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> request_player_state_with_params;
inline constexpr guest::Function<0x006bb91c, u32(u32, u32)> register_item_for_current_slot;
inline constexpr guest::Function<0x0070bd0c, u32(u32, u32)> Pattern__type_6_7_or_b;
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> record_address;

struct __attribute__((packed)) PlayerHoldDesignPatternFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x7];  // (not read or written by name)
};
GUEST_OFFSET(PlayerHoldDesignPatternFrame, word_0, 0x0);
GUEST_OFFSET(PlayerHoldDesignPatternFrame, word_4, 0x4);
GUEST_OFFSET(PlayerHoldDesignPatternFrame, word_8, 0x8);
GUEST_OFFSET(PlayerHoldDesignPatternFrame, word_c, 0xc);
GUEST_OFFSET(PlayerHoldDesignPatternFrame, byte_10, 0x10);
GUEST_SIZE(PlayerHoldDesignPatternFrame, 0x18);

void player_hold_design_pattern(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerHoldDesignPatternFrame> frame;  // the original's stack frame
    u32 r1_2 = 0;
    u32 r6_1 = frame.at(8).addr();
    u32 r4_1 = r1;
    if (r0 < 0xau) {
        u32 r0_1 = *current_player_data;
        if (r0_1 != 0) {
            u32 pattern = record_address(r0_1 + 0x2cu, r0, r2, r3);
            if (r4_1 - 6u > 1u) {
                r4_1 = Pattern__type_6_7_or_b(pattern, r4_1 - 6u);
            }
            u32 zf_1 = r4_1 == 6u;
            if (zf_1) {
                r1_2 = 0x33abu;
            } else {
                r1_2 = 0x33adu;
                zf_1 = r4_1 == 7u;
            }
            if (!zf_1 && r4_1 == 0xbu) {
                r1_2 = 0x33acu;
            }
            construct_item(frame.at(0).addr(), r1_2);
            register_item_for_current_slot(frame.at(0).addr(), r0);
            Item__copy_b(r6_1, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5c543c;
        }
    }
    Item__copy_b(r6_1, empty_item_address, r2, r3);
L_5c543c:;
    u32 is_empty = Item__is_empty(frame.at(8).addr());
    if (is_empty != 0) {
        return;
    }
    u32 object = look_up_object(4u, 0u);
    if (object != 0) {
        if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) == 0) {
            u32 r1_5 = frame->word_8;
            frame->byte_10 = 0;
            frame->word_c = r1_5;
            frame->word_0 = 1;
            frame->word_4 = 0;
            request_player_state_with_params(object, frame.at(0xc).addr(), 1u, 0u);
        }
    }
}

}  // namespace d_005c5390
GUEST_EXPORT_FRAMED(0x005c5390, d_005c5390::player_hold_design_pattern, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c5714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Turns the player toward a point (state 0x12 with the angle between them).
namespace d_005c5714 {

struct __attribute__((packed)) Local_005c5714_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c5714_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005c5714_ea_3, word_4, 0x4);

inline guest::global<u32, 0x00886abc> global_00886abc;
inline guest::global<u32, 0x00886ac0> global_00886ac0;
inline constexpr guest::Function<0x0057ba08, u32(u32, u32)> angle_between_points;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> AcPlayer__start_state_by_kind;

struct __attribute__((packed)) PlayerTurnToPointFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
    u16 half_14;
    u8 unknown_16[0x6];  // (not read or written by name)
};
GUEST_OFFSET(PlayerTurnToPointFrame, word_0, 0x0);
GUEST_OFFSET(PlayerTurnToPointFrame, word_c, 0xc);
GUEST_OFFSET(PlayerTurnToPointFrame, word_10, 0x10);
GUEST_OFFSET(PlayerTurnToPointFrame, half_14, 0x14);
GUEST_SIZE(PlayerTurnToPointFrame, 0x1c);

void player_turn_to_point(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerTurnToPointFrame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    u32 r0_3 = angle_between_points(object + 0x14u, r0);
    frame->half_14 = u16(r0_3);
    frame->word_c = 2;
    gptr<Local_005c5714_ea_3> ea_3 = gptr<Local_005c5714_ea_3>(frame.at(4).addr());
    ea_3->word_0 = 0;
    ea_3->word_4 = frame.at(0x14).addr();
    frame->word_10 = 0;
    frame->word_0 = *global_00886ac0;
    AcPlayer__start_state_by_kind(object, 0x12u, 1u, *global_00886abc);
}

}  // namespace d_005c5714
GUEST_EXPORT_FRAMED(0x005c5714, d_005c5714::player_turn_to_point, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c591c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless a request is reserved: replaces the current player's eight worn items (+0xa) and the flag byte with those of
// `outfit`; true when it did.
namespace d_005c591c {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x00607bdc, u32(u32, u32)> request_is_reserved;

struct __attribute__((packed)) SetCurrentPlayerOutfitFrame {
    u8 unknown_0[0x20];  // (not read or written by name)
    u8 byte_20;
    u8 unknown_21[0x7];  // (not read or written by name)
};
GUEST_OFFSET(SetCurrentPlayerOutfitFrame, byte_20, 0x20);
GUEST_SIZE(SetCurrentPlayerOutfitFrame, 0x28);

u32 set_current_player_outfit(u32 r0, u32 r1) {
    guest::StackFrameOf<SetCurrentPlayerOutfitFrame> frame;  // the original's stack frame
    if (request_is_reserved(r0, r1) == 0) {
        u32 r6_1 = *current_player_data;
        if (r6_1 != 0) {
            u32 r0_2 = frame.at(0).addr();
            Item__copy_b(r0_2, r0);
            u32 r0_3 = r0_2 + 4u;
            Item__copy_b(r0_3, r0 + 4u);
            u32 r0_4 = r0_3 + 4u;
            Item__copy_b(r0_4, r0 + 8u);
            u32 r0_5 = r0_4 + 4u;
            Item__copy_b(r0_5, r0 + 0xcu);
            u32 r0_6 = r0_5 + 4u;
            Item__copy_b(r0_6, r0 + 0x10u);
            u32 r0_7 = r0_6 + 4u;
            Item__copy_b(r0_7, r0 + 0x14u);
            u32 r0_8 = r0_7 + 4u;
            Item__copy_b(r0_8, r0 + 0x18u);
            u32 r0_9 = r0_8 + 4u;
            Item__copy_b(r0_9, r0 + 0x1cu);
            u32 r1_9 = *gptr<u8>(r0 + 0x20u);
            u32 r5_1 = frame.at(0).addr();
            u32 r4_1 = r6_1 + 0xau;
            *gptr<u8>(r0_9 + 4u) = u8(r1_9);
            u32 r0_10 = *gptr<u8>(r6_1 + 0x2au);
            if (r0_10 != 0) {
                r0_10 = 1u;
            }
            frame->byte_20 = u8(r0_10);
            Item__copy(r4_1, r5_1);
            Item__copy(r4_1 + 4u, r5_1 + 4u);
            Item__copy(r4_1 + 8u, r5_1 + 8u);
            Item__copy(r4_1 + 0xcu, r5_1 + 0xcu);
            Item__copy(r4_1 + 0x10u, r5_1 + 0x10u);
            Item__copy(r4_1 + 0x14u, r5_1 + 0x14u);
            Item__copy(r4_1 + 0x18u, r5_1 + 0x18u);
            Item__copy(r4_1 + 0x1cu, r5_1 + 0x1cu);
            *gptr<u8>(r4_1 + 0x20u) = frame->byte_20;
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_005c591c
GUEST_EXPORT_FRAMED(0x005c591c, d_005c591c::set_current_player_outfit, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c5aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds an outfit from the arguments (0027b3a8) and puts it on the current player.
namespace d_005c5aa8 {

struct __attribute__((packed)) Local_005c5aa8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005c5aa8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005c5aa8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005c5aa8_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_005c5aa8_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005c5aa8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005c5aa8_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_005c5aa8_ea_3, word_8, 0x8);

inline constexpr guest::Function<0x0027b3a8, u32(u32, u32, u32, u32)> Outfit8__construct;
inline constexpr guest::Function<0x005c591c, u32(u32)> set_current_player_outfit;

struct __attribute__((packed)) SetCurrentPlayerOutfitFromFrame {
    u32 word_0;
    u8 unknown_4[0x30];  // (not read or written by name)
};
GUEST_OFFSET(SetCurrentPlayerOutfitFromFrame, word_0, 0x0);
GUEST_SIZE(SetCurrentPlayerOutfitFromFrame, 0x34);

void set_current_player_outfit_from(u32 r0, u32 empty_item_address, u32 r2, u32 r3) {
    guest::StackFrameOf<SetCurrentPlayerOutfitFromFrame> frame;  // the original's stack frame
    gptr<Local_005c5aa8_ea_1> ea_1 = gptr<Local_005c5aa8_ea_1>(frame.at(0x40).addr());
    u32 r1_1 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    frame->word_0 = r3;
    gptr<Local_005c5aa8_ea_3> ea_3 = gptr<Local_005c5aa8_ea_3>(frame.at(4).addr());
    ea_3->word_0 = r1_1;
    ea_3->word_4 = r2_1;
    ea_3->word_8 = r12_1;
    Outfit8__construct(frame.at(0x10).addr(), r0, empty_item_address, r2);
    set_current_player_outfit(frame.at(0x10).addr());
}

}  // namespace d_005c5aa8
GUEST_EXPORT_FRAMED(0x005c5aa8, d_005c5aa8::set_current_player_outfit_from, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c5bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For each of the four players (and the current one): takes off the worn items of set A and refreshes the outfit.
namespace d_005c5bb8 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline constexpr guest::Function<0x0027ac30, u32(u32, u32)> Pair8__copy_pair;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> request_is_reserved;
inline constexpr guest::Function<0x0071a844, u32(u32, u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x0071a868, u32(u32)> slot_2_if_class_3_0071a868;
inline constexpr guest::Function<0x00768628, u32(u32)> Item__is_in_id_set_a;

u32 remove_set_a_worn_items(u32 r0_unused, u32 r1) {
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 i = 0u;
    u32 r6 = current_player_data_address;
    do {
        u32 r0_1 = i & 0xffu;
        if (r0_1 < 4u) {
            r0_2 = player_of_slot_index(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                goto L_5c5cac;
            }
            r5_1 = r0_2 + 0xau;
            if (Item__is_in_id_set_a(slot_7_if_class_7(r5_1, r1)) != 0) {
                Item__copy(r5_1 + 0x1cu, empty_item_address);
            }
            r0_2 = Item__is_in_id_set_a(slot_2_if_class_3_0071a868(r5_1));
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                goto L_5c5cac;
            }
        } else {
            r0_2 = request_is_reserved(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_2 != 0) {
                goto L_5c5cac;
            }
            r0_2 = *gptr<u32>(r6);
            if (r0_2 == 0) {
                goto L_5c5cac;
            }
            r5_1 = r0_2 + 0xau;
            if (Item__is_in_id_set_a(slot_7_if_class_7(r5_1, r1)) != 0) {
                Item__copy(r5_1 + 0x1cu, empty_item_address);
            }
            r0_2 = Item__is_in_id_set_a(slot_2_if_class_3_0071a868(r5_1));
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                goto L_5c5cac;
            }
        }
        r0_2 = Pair8__copy_pair(r5_1, r1);
        r1 = guest::cpu()->r[1];
L_5c5cac:;
        i += 1u;
        guest::preempt();
    } while (i < 4u);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_005c5bb8
GUEST_EXPORT_FRAMED(0x005c5bb8, d_005c5bb8::remove_set_a_worn_items, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_005c5df8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player's state lets the BGM change now (input flags, timers at +0x5bc, action).
namespace d_005c5df8 {

struct __attribute__((packed)) Object {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
    u8 unknown_67[0x110];  // (not used here)
    u8 byte_177;
    u8 unknown_178[0x31];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Object, byte_66, 0x66);
GUEST_OFFSET(Object, byte_177, 0x177);
GUEST_OFFSET(Object, byte_1a9, 0x1a9);

struct __attribute__((packed)) Local_005c5df8_r2_1 {
    u8 unknown_0[0xbc];  // (not used here)
    u16 half_bc;
    u16 half_be;
};
GUEST_OFFSET(Local_005c5df8_r2_1, half_bc, 0xbc);
GUEST_OFFSET(Local_005c5df8_r2_1, half_be, 0xbe);

inline guest::global<u8, 0x00aadad5> player_input_flags_b;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 player_allows_bgm_change(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    gptr<Object> object = gptr<Object>(look_up_object(4u, 1u, r2, r3));
    if (object.addr() == 0) {
        return 1u;
    }
    u32 r1_2 = u32(object->byte_66) >> 1u & 1u;
    if (r1_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = *player_input_flags_b;
    if ((r1_3 >> 3u & 1u) != 0) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    if ((r1_3 >> 1u & 1u) != 0) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    gptr<Local_005c5df8_r2_1> r2_1 = gptr<Local_005c5df8_r2_1>(object.addr() + 0x500u);
    if (r2_1->half_bc != 0) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 res_3 = r1_3 >> 2u & 1u;
    u32 zf_1 = res_3 == 0;
    u32 r1_4 = res_3;
    if (zf_1) {
        r1_4 = r2_1->half_be;
        zf_1 = r1_4 == 0;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    u32 r1_5 = object->byte_177;
    if ((r1_5 & 1u) != 0 || object->byte_1a9 == 0) {
        guest::cpu()->r[1] = r1_5;
        return 1u;
    }
    guest::cpu()->r[1] = r1_5;
    return 0u;
}

}  // namespace d_005c5df8
GUEST_EXPORT_FRAMED(0x005c5df8, d_005c5df8::player_allows_bgm_change, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c5efc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds an item (005c7e48) and, unless empty or the player is locked, queues an action of kind 2 with it.
namespace d_005c5efc {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c7e48, u32(u32, u32, u32, u32)> PlayerState__record_value;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> request_player_state_with_params;

struct __attribute__((packed)) PlayerQueueItemActionFromFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not read or written by name)
    u32 word_14;
};
GUEST_OFFSET(PlayerQueueItemActionFromFrame, word_0, 0x0);
GUEST_OFFSET(PlayerQueueItemActionFromFrame, word_4, 0x4);
GUEST_OFFSET(PlayerQueueItemActionFromFrame, word_c, 0xc);
GUEST_OFFSET(PlayerQueueItemActionFromFrame, byte_10, 0x10);
GUEST_OFFSET(PlayerQueueItemActionFromFrame, word_14, 0x14);
GUEST_SIZE(PlayerQueueItemActionFromFrame, 0x18);

void player_queue_item_action_from(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<PlayerQueueItemActionFromFrame> frame;  // the original's stack frame
    PlayerState__record_value(frame.at(8).addr(), r0, r1, r3);
    u32 is_empty = Item__is_empty(frame.at(8).addr());
    if (is_empty != 0) {
        return;
    }
    u32 object = look_up_object(4u, 0u);
    if (object != 0) {
        if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) == 0) {
            Item__copy_b(frame.at(0x14).addr(), frame.at(8).addr());
            u32 r0_6 = frame->word_14;
            frame->byte_10 = 2;
            frame->word_c = r0_6;
            frame->word_0 = 1;
            frame->word_4 = 0;
            request_player_state_with_params(object, frame.at(0xc).addr(), 1u, 0u);
        }
    }
}

}  // namespace d_005c5efc
GUEST_EXPORT_FRAMED(0x005c5efc, d_005c5efc::player_queue_item_action_from, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c6024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the player a special letter from the secretary (one of two templates, by bit 4 of +0x5700) with an attached
// item; true when it was sent.
namespace d_005c6024 {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x5700];  // (not used here)
    u8 byte_5700;
};
GUEST_OFFSET(Player, byte_5700, 0x5700);

struct __attribute__((packed)) Local_005c6024_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c6024_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005c6024_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005c6024_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c6024_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005c6024_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005c6024_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c6024_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_005c6024_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_005c6024_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c6024_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_005c6024_ea_6, word_4, 0x4);

inline constexpr guest::Function<0x002f77e8, u32(u32)> same_pointer;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> Letter__Letter;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> Item__check_property;
inline constexpr guest::Function<0x005cc3a4, u32(u32, u32, u32, u32)> namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc3a4;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) SendSecretaryLetterFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x288];  // (not read or written by name)
};
GUEST_OFFSET(SendSecretaryLetterFrame, word_10, 0x10);
GUEST_SIZE(SendSecretaryLetterFrame, 0x29c);

u32 send_secretary_letter(gptr<Player> player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SendSecretaryLetterFrame> frame;  // the original's stack frame
    u32 r0 = player.addr();
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r5_1 = r0 + 0x5700u;
    Letter__Letter(frame.at(0x18).addr(), r1, r2, r3);
    u32 res_1 = u32(player->byte_5700) << 0x1b;
    u32 r0_2 = frame.at(0x298).addr();
    if (s32(res_1) < 0) {
        construct_item(r0_2, 0x2258u);
        frame->word_10 = 0x184b78;
        gptr<Local_005c6024_ea_2> ea_2 = gptr<Local_005c6024_ea_2>(frame.at(0).addr());
        ea_2->word_0 = 1;
        ea_2->word_4 = r0 + 0x55a6u;
        gptr<Local_005c6024_ea_3> ea_3 = gptr<Local_005c6024_ea_3>(frame.at(8).addr());
        ea_3->word_0 = r0_2;
        ea_3->word_4 = 0x1d;
        r0_4 = namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc3a4(frame.at(0x18).addr(), 0x5c6160u, 1u, 3u);
        if ((r0_4 ^ 1u) != 0) {
            goto L_5c6144;
        }
    } else {
        construct_item(r0_2, 0x2258u);
        frame->word_10 = 0x182b80;
        gptr<Local_005c6024_ea_5> ea_5 = gptr<Local_005c6024_ea_5>(frame.at(0).addr());
        ea_5->word_0 = 2;
        ea_5->word_4 = r0 + 0x55a6u;
        gptr<Local_005c6024_ea_6> ea_6 = gptr<Local_005c6024_ea_6>(frame.at(8).addr());
        ea_6->word_0 = r0_2;
        ea_6->word_4 = 0x1d;
        r0_4 = namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc3a4(frame.at(0x18).addr(), 0x5c6160u, 2u, 4u);
        if ((r0_4 ^ 1u) != 0) {
            goto L_5c6144;
        }
    }
    r0_6 = frame.at(0x14).addr();
    construct_item(r0_6, 0x3042u);
    r0_7 = frame.at(0x18).addr();
    set_held_item(r0_7, r0_6, 0u);
    r0_8 = frame.at(0x18).addr();
    r0_4 = Item__check_property(r0_8, 7u, 2u, 0u);
    if (r0_4 != 0) {
        same_pointer(r0_4);
        return 1u;
    }
L_5c6144:;
    same_pointer(r0_4);
    return 0u;
}

}  // namespace d_005c6024
GUEST_EXPORT_FRAMED(0x005c6024, d_005c6024::send_secretary_letter, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c617c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the four items at +0x1c and the 16 at +0x4c (with four words) of the player state at 0xaaef18 into their
// previous copies.
namespace d_005c617c {

inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;

void save_previous_player_items() {
    u32 i = 0u;
    u32 r5 = player_state_block_address;
    do {
        u32 r0_1 = r5 + (i << 2);
        Item__copy(r0_1 + 0x3cu, r0_1 + 0x1cu, guest::cpu()->r[2], guest::cpu()->r[3]);
        i += 1u;
        guest::preempt();
    } while (i < 4u);
    u32 r6 = r5 + 0xecu;
    r5 += 0x4cu;
    i = 0u;
    do {
        Item__copy(r6 + (i << 2), r5 + (i << 2), guest::cpu()->r[2], guest::cpu()->r[3]);
        i += 1u;
        guest::preempt();
    } while (i < 0x10u);
    *gptr<u32>(r6 + 0x40u) = *gptr<u32>(r5 + 0x40u);
    *gptr<u32>(r6 + 0x44u) = *gptr<u32>(r5 + 0x44u);
    *gptr<u32>(r6 + 0x48u) = *gptr<u32>(r5 + 0x48u);
    *gptr<u32>(r6 + 0x4cu) = *gptr<u32>(r5 + 0x4cu);
}

}  // namespace d_005c617c
GUEST_EXPORT_FRAMED(0x005c617c, d_005c617c::save_previous_player_items, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_005c649c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005c64a4 with 1.
namespace d_005c649c {

inline constexpr guest::Function<0x005c64a4, u32(u32, u32)> PlayerRecords__update_slot;

void call_005c64a4_1() {
    PlayerRecords__update_slot(1u, guest::cpu()->r[1]);
}

}  // namespace d_005c649c
GUEST_EXPORT(0x005c649c, d_005c649c::call_005c64a4_1);

// f_005c6654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the player in state 15 when `stop`, else requests state 31 with speed 8.
namespace d_005c6654 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00659c08, u32(u32, u32, u32, u32)> AcPlayer_rec__request_state_31;
inline constexpr guest::Function<0x0067a478, u32(u32)> return_float_constant_0x41000000_;

void player_stop_or_request_state_31(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object != 0) {
        if (r0 != 0) {
            frame.release();
            AcPlayer_rec__change_state(object, 0xfu, 0u, 0u);
            return;
        }
        return_float_constant_0x41000000_(object);
        frame.release();
        AcPlayer_rec__request_state_31(object, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_005c6654
GUEST_EXPORT(0x005c6654, d_005c6654::player_stop_or_request_state_31);

// f_005c6760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the current player's position (0xaaf140) and returns it.
namespace d_005c6760 {

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

inline constexpr u32 current_player_position_address = 0x00aaf140u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf140> current_player_position;
inline guest::global<u32, 0x00aaf144> current_player_position_y;
inline guest::global<u32, 0x00aaf148> current_player_position_z;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0023d5ec, u32(u32, u32, u32, u32)> Pockets__has_giftable_item;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;

u32 update_current_player_position(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 pockets = *current_player_data;
    if (pockets == 0) {
        return pockets;
    }
    gptr<Now> now_2 = gptr<Now>(game_time_now(Pockets__has_giftable_item(pockets, r1, r2, r3)));
    u32 r1_1 = now_2->word_0;
    u32 r2_1 = now_2->word_4;
    u32 r3_1 = now_2->word_8;
    *current_player_position = r1_1;
    *current_player_position_y = r2_1;
    *current_player_position_z = r3_1;
    guest::cpu()->r[1] = r1_1;
    return current_player_position_address;
}

}  // namespace d_005c6760
GUEST_EXPORT_FRAMED(0x005c6760, d_005c6760::update_current_player_position, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c67d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the two floats at 0xaaf194.
namespace d_005c67d8 {

inline guest::global<u32, 0x00aaf194> global_00aaf194;
inline guest::global<u32, 0x00aaf198> screen_scale;

void clear_aaf194_floats() {
    float S0_1 = 0.0f;
    *global_00aaf194 = std::bit_cast<u32>(S0_1);
    *screen_scale = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005c67d8
GUEST_EXPORT(0x005c67d8, d_005c67d8::clear_aaf194_floats);

// f_005c6878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills a spawn record: the slot's 0x26-byte identity, the slot, the position in quarter units, the angle and a flag.
namespace d_005c6878 {

struct __attribute__((packed)) InitPlayerSpawnRecordArg0 {
    u8 byte_0;
    u8 byte_1;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u8 byte_8;
    u16 half_9;
    u8 byte_b;
    u8 byte_c;
};
GUEST_OFFSET(InitPlayerSpawnRecordArg0, byte_0, 0x0);
GUEST_OFFSET(InitPlayerSpawnRecordArg0, byte_1, 0x1);
GUEST_OFFSET(InitPlayerSpawnRecordArg0, half_2, 0x2);
GUEST_OFFSET(InitPlayerSpawnRecordArg0, half_4, 0x4);
GUEST_OFFSET(InitPlayerSpawnRecordArg0, half_6, 0x6);
GUEST_OFFSET(InitPlayerSpawnRecordArg0, byte_8, 0x8);
GUEST_OFFSET(InitPlayerSpawnRecordArg0, half_9, 0x9);
GUEST_OFFSET(InitPlayerSpawnRecordArg0, byte_b, 0xb);
GUEST_OFFSET(InitPlayerSpawnRecordArg0, byte_c, 0xc);

struct __attribute__((packed)) Local_005c6878_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c6878_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005c6878_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x005c330c, u32(u32, u32, u32, u32)> refresh_slot_record;

void init_player_spawn_record(gptr<InitPlayerSpawnRecordArg0> arg0, u32 r1, u32 r2, gptr<Float3> arg3, float S0, float S1) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = arg3.addr();
    gptr<Local_005c6878_ea_1> ea_1 = gptr<Local_005c6878_ea_1>(frame.at(0x20).addr());
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    copy_bytes_at_any_alignment(arg0.addr(), refresh_slot_record(r1, r1, r2, arg3.addr()), 0x26u);
    arg0->byte_0 = u8(r2);
    float S1_2 = 4.0f;
    u32 r1_1 = vcvt_sz_f(arg3->v[0] * S1_2);
    *frame.at<u16>(0) = u16(r1_1);
    arg0->half_2 = u16(r1_1);
    float S0_2 = std::bit_cast<float>(vcvt_sz_f(arg3->v[2] * S1_2));
    arg0->half_4 = u16(std::bit_cast<u32>(S0_2));
    *frame.at<u16>(0) = u16(r6_1);
    arg0->half_6 = u16(r6_1);
    arg0->byte_1 = u8(r7_1);
    arg0->half_9 = 0;
    arg0->byte_b = 0;
    arg0->byte_c = 0;
    arg0->byte_8 = 0;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_005c6878
GUEST_EXPORT_FRAMED(0x005c6878, d_005c6878::init_player_spawn_record, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005c6900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005c6908 with 1.
namespace d_005c6900 {

inline constexpr guest::Function<0x005c6908, u32(u32, u32, u32, u32)> Player__can_use_tool;

u32 call_005c6908_1() {
    return Player__can_use_tool(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c6900
GUEST_EXPORT(0x005c6900, d_005c6900::call_005c6908_1);

// f_005c6a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: queues two action entries (kind 2 with a word, then a target with option 4).
namespace d_005c6a20 {

struct __attribute__((packed)) PlayerQueueAction2WithTargetArg0 {
    u32 word_0;
};
GUEST_OFFSET(PlayerQueueAction2WithTargetArg0, word_0, 0x0);

struct __attribute__((packed)) PlayerQueueAction2WithTargetArg1 {
    u32 word_0;
};
GUEST_OFFSET(PlayerQueueAction2WithTargetArg1, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> request_player_state_with_params;

struct __attribute__((packed)) PlayerQueueAction2WithTargetFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u32 word_d;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not read or written by name)
};
GUEST_OFFSET(PlayerQueueAction2WithTargetFrame, word_0, 0x0);
GUEST_OFFSET(PlayerQueueAction2WithTargetFrame, word_4, 0x4);
GUEST_OFFSET(PlayerQueueAction2WithTargetFrame, word_8, 0x8);
GUEST_OFFSET(PlayerQueueAction2WithTargetFrame, byte_c, 0xc);
GUEST_OFFSET(PlayerQueueAction2WithTargetFrame, word_d, 0xd);
GUEST_OFFSET(PlayerQueueAction2WithTargetFrame, byte_11, 0x11);
GUEST_SIZE(PlayerQueueAction2WithTargetFrame, 0x14);

void player_queue_action_2_with_target(gptr<PlayerQueueAction2WithTargetArg0> arg0, gptr<PlayerQueueAction2WithTargetArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerQueueAction2WithTargetFrame> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {
        return;
    }
    u32 r12_1 = arg0->word_0;
    frame->byte_c = 2;
    frame->word_8 = r12_1;
    frame->word_d = arg1->word_0;
    frame->word_0 = 1;
    frame->word_4 = 0;
    frame->byte_11 = 4;
    request_player_state_with_params(object, frame.at(8).addr(), 2u, 0u);
}

}  // namespace d_005c6a20
GUEST_EXPORT_FRAMED(0x005c6a20, d_005c6a20::player_queue_action_2_with_target, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c6a98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets bit 1 of 0xaadad5.
namespace d_005c6a98 {

inline constexpr u32 player_input_flags_address = 0x00aadad4u;
inline guest::global<u8, 0x00aadad5> player_input_flags_b;

u32 set_player_input_flag_5_bit_1() {
    u32 r1_1 = u32(*player_input_flags_b) | 2u;
    *player_input_flags_b = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return player_input_flags_address;
}

}  // namespace d_005c6a98
GUEST_EXPORT(0x005c6a98, d_005c6a98::set_player_input_flag_5_bit_1);

// f_005c6b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the current player's worn item of class 7: 1 when there is none, 0 when the pockets are full, else 2 or 3 by its
// kind.
namespace d_005c6b24 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x007241b0, u32(u32)> Pockets__find_empty_slot;
inline constexpr guest::Function<0x00765e04, u32(u32, u32)> SlotObject__held_item;
inline constexpr guest::Function<0x0076aa70, u32(u32)> Item__is_wear_class_7_in_mode_with_flag_4;

u32 can_take_off_class_7_item(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = *current_player_data;
    if (r4_1 == 0) {
        return 0u;
    }
    u32 r0_2 = slot_7_if_class_7(r4_1 + 0xau, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    Item__copy_b(frame.at(0).addr(), r0_2);
    u32 is_empty = Item__is_empty(frame.at(0).addr());
    if (is_empty != 0) {
        return 1u;
    }
    u32 slot = Pockets__find_empty_slot(r4_1 + 0x6bd0u);
    if (s32(slot) < 0) {
        return 0u;
    }
    u32 r4_2 = frame.at(4).addr();
    u32 object = look_up_object(4u, 0u);
    if (object == 0) {
        Item__copy_b(r4_2, empty_item_address);
    } else {
        Item__copy_b(r4_2, SlotObject__held_item(object, 0u));
    }
    return Item__is_wear_class_7_in_mode_with_flag_4(frame.at(4).addr()) == 0 ? 2u : 3u;
}

}  // namespace d_005c6b24
GUEST_EXPORT_FRAMED(0x005c6b24, d_005c6b24::can_take_off_class_7_item, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c6e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the current player's position (0xaaf140) when the stored one differs from the reference.
namespace d_005c6e18 {

struct __attribute__((packed)) Local_005c6e18_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c6e18_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005c6e18_ea_1, word_4, 0x4);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_005c6e18_r0_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005c6e18_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_005c6e18_r0_6, word_4, 0x4);
GUEST_OFFSET(Local_005c6e18_r0_6, word_8, 0x8);

inline constexpr u32 current_player_position_address = 0x00aaf140u;
inline constexpr u32 current_player_position_y_address = 0x00aaf144u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf140> current_player_position;
inline guest::global<u32, 0x00aaf144> current_player_position_y;
inline guest::global<u32, 0x00aaf148> current_player_position_z;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0023d5ec, u32(u32)> Pockets__has_giftable_item;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> word_and_byte_pairs_equal;

void refresh_current_player_position_if_moved(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Now> now_3 = gptr<Now>(game_time_now(r0, r1, r2, r3));
    u32 r2_1 = *current_player_position_y;
    u32 r3_1 = *current_player_position_z;
    gptr<Local_005c6e18_ea_1> ea_1 = gptr<Local_005c6e18_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2_1;
    ea_1->word_4 = r3_1;
    if (word_and_byte_pairs_equal(now_3->word_0, now_3->word_4, now_3->word_8, *current_player_position) != 0) {
        return;
    }
    u32 pockets = *current_player_data;
    if (pockets == 0) {
        return;
    }
    u32 r0_5 = Pockets__has_giftable_item(pockets);
    gptr<Local_005c6e18_r0_6> now_4 = gptr<Local_005c6e18_r0_6>(game_time_now(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r1_3 = now_4->word_0;
    u32 r2_4 = now_4->word_4;
    u32 r3_4 = now_4->word_8;
    *current_player_position = r1_3;
    *current_player_position_y = r2_4;
    *current_player_position_z = r3_4;
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_005c6e18
GUEST_EXPORT_FRAMED(0x005c6e18, d_005c6e18::refresh_current_player_position_if_moved, 0x4000);  // pushes {lr} first, as the original

// f_005c6f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bit 3 of the player input flags; returns true.
namespace d_005c6f7c {

inline guest::global<u8, 0x00aadad4> player_input_flags;

u32 clear_player_input_flag_bit_3() {
    u32 r1_1 = *player_input_flags;
    if ((r1_1 >> 3u & 1u) != 0) {
        r1_1 &= ~8u;
        *player_input_flags = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_005c6f7c
GUEST_EXPORT(0x005c6f7c, d_005c6f7c::clear_player_input_flag_bit_3);

// f_005c6fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the player is in an action (bit 5 of +0x171) that allows it: enters state 0xea and starts it with speed 6.
namespace d_005c6fa0 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c5eb8, u32(u32, u32, u32, u32)> slot_object_has_flag_171_and_state_ea;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x0067c674, u32(u32, u32, u32, u32)> AcPlayer__start_wait;

void player_enter_state_ea(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (slot_object_has_flag_171_and_state_ea(4u, r1, r2, r3) == 0) {
        return;
    }
    u32 object = look_up_object(4u, 1u);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x171u)) >> 5u & 1u) == 0) {
        return;
    }
    if (AcPlayer_rec__change_state(object, 0xeau, 0u, 0u) == 0) {
        return;
    }
    float S0_4 = 6.0f;
    guest::cpu()->s[0] = S0_4;
    frame.release();
    AcPlayer__start_wait(object, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005c6fa0
GUEST_EXPORT(0x005c6fa0, d_005c6fa0::player_enter_state_ea);

// f_005c7010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the template of kind (table 0x881b8c) to the 0x26-byte entry of slot (index & 3) at +0x292ac of the players.
namespace d_005c7010 {

inline constexpr u32 player_records_address = 0x00a84790u;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;

void apply_slot_entry_template(u32 r0, u32 r1) {
    u32 r0_1 = r0 & 3u;
    u32 r0_2 = *gptr<u8>((r1 & 3u) + 0x881b8cu);
    apply_entry_template(r0_2, ((r0_1 * 3u + (r0_1 << 4)) << 1) + player_records_address + 0x292acu, 0u);
}

}  // namespace d_005c7010
GUEST_EXPORT(0x005c7010, d_005c7010::apply_slot_entry_template);

// f_005c7258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: gives it the design item 0x33aa for design `index`.
namespace d_005c7258 {

inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x00660d14, u32(u32, u32, u32)> AcPlayer__start_state_38;
inline constexpr guest::Function<0x006bb91c, u32(u32, u32)> register_item_for_current_slot;

struct __attribute__((packed)) PlayerHoldDesignItemFrame {
    u32 word_0;
};
GUEST_OFFSET(PlayerHoldDesignItemFrame, word_0, 0x0);
GUEST_SIZE(PlayerHoldDesignItemFrame, 0x4);

void player_hold_design_item(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerHoldDesignItemFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    if (*current_player_data != 0) {
        construct_item(frame.at(0).addr(), 0x33aau, r2, r3);
        register_item_for_current_slot(frame.at(0).addr(), r0);
        u32 object = look_up_object(4u, 0u);
        if (object != 0) {
            if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) == 0) {
                AcPlayer__start_state_38(object, frame.at(0).addr(), 0u);
            }
        }
    }
}

}  // namespace d_005c7258
GUEST_EXPORT_FRAMED(0x005c7258, d_005c7258::player_hold_design_item, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005c7a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item for design pattern `index` (below 10) of the current player: a 0x33ab/0x33ac/0x33ad item for kinds 6-7, an
// item from 005c7e48 for kinds up to 5, else empty.
namespace d_005c7a8c {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x005c7e48, u32(u32, u32, u32, u32)> PlayerState__record_value;
inline constexpr guest::Function<0x006bb91c, u32(u32, u32)> register_item_for_current_slot;
inline constexpr guest::Function<0x0070bd0c, u32(u32)> Pattern__type_6_7_or_b;
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> record_address;

struct __attribute__((packed)) DesignPatternItemFrame {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(DesignPatternItemFrame, word_0, 0x0);
GUEST_SIZE(DesignPatternItemFrame, 0x18);

void design_pattern_item(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<DesignPatternItemFrame> frame;  // the original's stack frame
    u32 r1_2 = 0;
    frame->word_0 = r3;
    if (r1 < 0xau) {
        u32 r0_1 = *current_player_data;
        if (r0_1 != 0) {
            u32 r0_3 = record_address(r0_1 + 0x2cu, r1, r2, r3);
            u32 r0_4 = *gptr<u8>(r0_3 + 0x69u);
            if (r0_4 - 6u <= 1u) {
                u32 r0_5 = *current_player_data;
                if (r0_5 == 0) {
                    frame.release();
                    Item__copy_b(r0, empty_item_address);
                    return;
                }
                u32 pattern = record_address(r0_5 + 0x2cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_8 = Pattern__type_6_7_or_b(pattern);
                u32 zf_1 = r0_8 == 6u;
                if (zf_1) {
                    r1_2 = 0x33abu;
                } else {
                    r1_2 = 0x33adu;
                    zf_1 = r0_8 == 7u;
                }
                if (!zf_1 && r0_8 == 0xbu) {
                    r1_2 = 0x33acu;
                }
                construct_item(frame.at(0).addr(), r1_2);
                register_item_for_current_slot(frame.at(0).addr(), r1);
                Item__copy_b(r0, frame.at(0).addr());
                return;
            }
            if (r0_4 <= 5u) {
                u32 r3_5 = frame->word_0;
                frame.release();
                PlayerState__record_value(r0, r1, 0xcu, r3_5);
                return;
            }
        }
    }
    frame.release();
    Item__copy_b(r0, empty_item_address);
    return;
}

}  // namespace d_005c7a8c
GUEST_EXPORT(0x005c7a8c, d_005c7a8c::design_pattern_item);

// f_005c7d24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player is in action 0x75 with slot 0 of its four (+0x1b4) in use.
namespace d_005c7d24 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0070ab24, u32(u32, u32)> slot_of_4_at_e0;

u32 player_in_action_75_with_slot() {
    u32 object = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object == 0) {
        return object;
    }
    u32 r1_2 = *gptr<u8>(object + 0x1a9u);
    if (r1_2 != 0x75u) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r0_3 = slot_of_4_at_e0(object + 0x1b4u, 0u);
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_005c7d24
GUEST_EXPORT_FRAMED(0x005c7d24, d_005c7d24::player_in_action_75_with_slot, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c7d64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the player (not locked) is in action 0xa4: moves it to state 0x12 with the constant parameters.
namespace d_005c7d64 {

struct __attribute__((packed)) Local_005c7d64_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c7d64_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005c7d64_ea_1, word_4, 0x4);

struct __attribute__((packed)) Object {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x71b];  // (not used here)
    u8 byte_8c5;
};
GUEST_OFFSET(Object, byte_1a9, 0x1a9);
GUEST_OFFSET(Object, byte_8c5, 0x8c5);

inline guest::global<u32, 0x00886cac> global_00886cac;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> AcPlayer__start_state_by_kind;

struct __attribute__((packed)) PlayerEndActionA4Frame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
};
GUEST_OFFSET(PlayerEndActionA4Frame, word_0, 0x0);
GUEST_OFFSET(PlayerEndActionA4Frame, word_4, 0x4);
GUEST_OFFSET(PlayerEndActionA4Frame, word_10, 0x10);
GUEST_SIZE(PlayerEndActionA4Frame, 0x14);

void player_end_action_a4(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerEndActionA4Frame> frame;  // the original's stack frame
    gptr<Object> object = gptr<Object>(look_up_object(4u, 0u, r2, r3));
    if (object.addr() == 0) {
        return;
    }
    u32 r1_2 = u32(object->byte_8c5) >> 5u & 1u;
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    u32 r1_3 = object->byte_1a9;
    if (r1_3 != 0xa4u) {
        guest::cpu()->r[1] = r1_3;
        return;
    }
    gptr<Local_005c7d64_ea_1> ea_1 = gptr<Local_005c7d64_ea_1>(frame.at(8).addr());
    ea_1->word_0 = 0;
    ea_1->word_4 = 2;
    frame->word_10 = 0;
    frame->word_0 = 5;
    frame->word_4 = 1;
    AcPlayer__start_state_by_kind(object.addr(), 0x12u, 1u, *global_00886cac);
}

}  // namespace d_005c7d64
GUEST_EXPORT_FRAMED(0x005c7d64, d_005c7d64::player_end_action_a4, 0x4000);  // pushes {lr} first, as the original

// f_005c80b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object of `id` is in actions 0x7c/0x7f/0xae (or a free 0xaf); copies its position to `out` when given.
namespace d_005c80b4 {

struct __attribute__((packed)) Object {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x189];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x71b];  // (not used here)
    u8 byte_8c5;
    u8 unknown_8c6[0x1];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object, word_14, 0x14);
GUEST_OFFSET(Object, word_18, 0x18);
GUEST_OFFSET(Object, word_1c, 0x1c);
GUEST_OFFSET(Object, byte_1a9, 0x1a9);
GUEST_OFFSET(Object, byte_8c5, 0x8c5);
GUEST_OFFSET(Object, byte_8c7, 0x8c7);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 object_in_vehicle_position(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    gptr<Object> object = gptr<Object>(look_up_object(r1, 1u, r2, guest::cpu()->r[3]));
    if (object.addr() != 0) {
        r1_1 = object->byte_1a9;
        if (r1_1 == 0x7cu || r1_1 == 0x7fu || r1_1 == 0xaeu) {
            if (r0 == 0) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
            *gptr<u32>(r0) = object->word_14;
            r1_1 = object->word_18;
            *gptr<u32>(r0 + 4u) = r1_1;
            *gptr<u32>(r0 + 8u) = object->word_1c;
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    object = gptr<Object>(look_up_object(r1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]));
    r1_1 = guest::cpu()->r[1];
    if (object.addr() != 0) {
        r1_1 = object->byte_1a9;
        if (r1_1 == 0xafu) {
            r1_1 = object->byte_8c7;
            if ((r1_1 & 1u) != 0) {
                if ((u32(object->byte_8c5) >> 6u & 1u) == 0) {
                    r1_1 = r1_1 >> 2u & 1u;
                    if (r1_1 == 0) {
                        if (r0 != 0) {
                            *gptr<u32>(r0) = object->word_14;
                            r1_1 = object->word_18;
                            *gptr<u32>(r0 + 4u) = r1_1;
                            *gptr<u32>(r0 + 8u) = object->word_1c;
                            guest::cpu()->r[1] = r1_1;
                            return 1u;
                        }
                        guest::cpu()->r[1] = r1_1;
                        return 1u;
                    }
                }
            }
        }
        object = gptr<Object>(0u);
    }
    guest::cpu()->r[1] = r1_1;
    return object.addr();
}

}  // namespace d_005c80b4
GUEST_EXPORT_FRAMED(0x005c80b4, d_005c80b4::object_in_vehicle_position, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c8170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is locked: whether 00687fb4 accepts the argument.
namespace d_005c8170 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00687fb4, u32(u32, u32)> AcPlayer_rec__request_state_a7;

u32 player_call_687fb4(u32 r0) {
    u32 object = look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object == 0) {
        return object;
    }
    u32 r1_2 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r0_2 = AcPlayer_rec__request_state_a7(object, r0);
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_005c8170
GUEST_EXPORT_FRAMED(0x005c8170, d_005c8170::player_call_687fb4, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c8244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player in action 0xaf (mode 1) may leave it: not held (bit 0 of +0x8c7), locked, or bit 5 of +0x8c7.
namespace d_005c8244 {

struct __attribute__((packed)) Object {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x726];  // (not used here)
    u8 byte_8d0;
};
GUEST_OFFSET(Object, byte_1a9, 0x1a9);
GUEST_OFFSET(Object, byte_8d0, 0x8d0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 player_can_leave_action_af() {
    gptr<Object> object = gptr<Object>(look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]));
    if (object.addr() == 0) {
        return object.addr();
    }
    u32 r1_2 = object->byte_1a9;
    if (r1_2 != 0xafu || object->byte_8d0 != 1u) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 object_2 = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object_2 != 0 && (u32(*gptr<u8>(object_2 + 0x8c7u)) & 1u) != 0) {
        return 0u;
    }
    u32 object_3 = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object_3 != 0) {
        if ((u32(*gptr<u8>(object_3 + 0x8c5u)) >> 5u & 1u) != 0) {
            return 0u;
        }
    }
    u32 object_4 = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object_4 == 0) {
        return 1u;
    }
    if ((u32(*gptr<u8>(object_4 + 0x8c7u)) >> 5u & 1u) != 0) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_005c8244
GUEST_EXPORT_FRAMED(0x005c8244, d_005c8244::player_can_leave_action_af, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c8460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless the player is held (bit 6 of +0x8c5, bit 5 of +0x8c7): moves it to state `state` with option `option`.
namespace d_005c8460 {

struct __attribute__((packed)) Object {
    u8 unknown_0[0x8c5];  // (not used here)
    u8 byte_8c5;
    u8 unknown_8c6[0x1];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object, byte_8c5, 0x8c5);
GUEST_OFFSET(Object, byte_8c7, 0x8c7);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> AcPlayer__start_state_by_kind;

struct __attribute__((packed)) PlayerMoveToStateUnlessHeldFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(PlayerMoveToStateUnlessHeldFrame, word_0, 0x0);
GUEST_OFFSET(PlayerMoveToStateUnlessHeldFrame, word_4, 0x4);
GUEST_OFFSET(PlayerMoveToStateUnlessHeldFrame, word_8, 0x8);
GUEST_OFFSET(PlayerMoveToStateUnlessHeldFrame, word_c, 0xc);
GUEST_OFFSET(PlayerMoveToStateUnlessHeldFrame, word_10, 0x10);
GUEST_SIZE(PlayerMoveToStateUnlessHeldFrame, 0x14);

u32 player_move_to_state_unless_held(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlayerMoveToStateUnlessHeldFrame> frame;  // the original's stack frame
    gptr<Object> object = gptr<Object>(look_up_object(4u, 0u, r2, r3));
    if (object.addr() == 0) {
        return object.addr();
    }
    if ((u32(object->byte_8c5) >> 6u & 1u) == 0) {
        if ((u32(object->byte_8c7) >> 5u & 1u) == 0) {
            frame->word_4 = 0;
            frame->word_8 = 0;
            frame->word_c = 0;
            frame->word_10 = 0;
            frame->word_0 = 0;
            return AcPlayer__start_state_by_kind(object.addr(), r0, r1, 0u);
        }
    }
    return 0u;
}

}  // namespace d_005c8460
GUEST_EXPORT_FRAMED(0x005c8460, d_005c8460::player_move_to_state_unless_held, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c8694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player is in action 0xe3 with no timer (+0x5c0) or in action 0xaf with item kind 0x2e and no timer
// (+0x5c4).
namespace d_005c8694 {

struct __attribute__((packed)) Object {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x416];  // (not used here)
    u16 half_5c0;
    u8 unknown_5c2[0x308];  // (not used here)
    u8 byte_8ca;
};
GUEST_OFFSET(Object, byte_1a9, 0x1a9);
GUEST_OFFSET(Object, half_5c0, 0x5c0);
GUEST_OFFSET(Object, byte_8ca, 0x8ca);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 player_action_is_idle() {
    gptr<Object> object = gptr<Object>(look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]));
    if (object.addr() == 0) {
        return object.addr();
    }
    u32 r1_2 = object->byte_1a9;
    if (r1_2 != 0xafu) {
        if (r1_2 == 0xe3u) {
            if (object->half_5c0 == 0) {
                guest::cpu()->r[1] = r1_2;
                return 1u;
            }
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = *gptr<u16>(object.addr() + 0x5c4u);
    if (r1_3 != 0 || object->byte_8ca != 0x2eu) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_005c8694
GUEST_EXPORT_FRAMED(0x005c8694, d_005c8694::player_action_is_idle, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c8710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005c7c24 with mode 8 (local player) or 9 and an empty item.
namespace d_005c8710 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 player_slots_address = 0x00aad990u;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002fdf00, u32(u32)> is_below_8;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x005c7c24, u32(u32, u32, u32, u32)> Player__start_reaction;

void call_5c7c24_for_current_slot(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 station = current_net_station(r0);
    u32 r4_1 = *gptr<u8>((station & 3u) + player_slots_address);
    if (is_below_8(r4_1) == 0) {
        r4_1 = 8u;
    }
    u32 r0_3 = is_local_slot(r4_1);
    frame.release();
    Player__start_reaction(0u, r0_3 == 0 ? 9u : 8u, 0x1cu, empty_item_address);
    return;
}

}  // namespace d_005c8710
GUEST_EXPORT(0x005c8710, d_005c8710::call_5c7c24_for_current_slot);

// f_005c87e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In a local player's house, unless a request is reserved: sets bit 7 of +0x8f7f of the current player (and input flag
// bit 2) once; true in the house.
namespace d_005c87e4 {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u8, 0x00aadad4> player_input_flags;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x005b6a10, u32(u32)> scene_is_local_players_house;
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> request_is_reserved;

u32 mark_house_visited_flag(u32 r0, u32 r1) {
    if (request_is_reserved(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]) != 0) {
        return 0u;
    }
    u32 r4_1 = *current_player_data;
    if (r4_1 == 0) {
        return 0u;
    }
    u32 scene_2 = current_scene_id(current_player_data_address);
    u32 r0_3 = scene_is_local_players_house(scene_2);
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r0_4 = *gptr<u8>(r4_1 + 0x8f7fu);
    u32 r1_4 = r0_4 >> 7;
    if (r1_4 != 0) {
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    *gptr<u8>(r4_1 + 0x8f7fu) = u8(r0_4 | 0x80u);
    u32 r1_5 = u32(*player_input_flags) | 4u;
    *player_input_flags = u8(r1_5);
    guest::cpu()->r[1] = r1_5;
    return 1u;
}

}  // namespace d_005c87e4
GUEST_EXPORT_FRAMED(0x005c87e4, d_005c87e4::mark_house_visited_flag, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c886c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets bit 6 of the player input flags; true when it was clear.
namespace d_005c886c {

inline guest::global<u8, 0x00aadad4> player_input_flags;

u32 try_set_player_input_flag_6() {
    u32 r0_1 = 0;
    u32 r1_1 = *player_input_flags;
    if ((r1_1 >> 6u & 1u) == 0) {
        r1_1 |= 0x40u;
        *player_input_flags = u8(r1_1);
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005c886c
GUEST_EXPORT(0x005c886c, d_005c886c::try_set_player_input_flag_6);

// f_005c8f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts down the 32 timer bytes at +0x180; when one ends (with timer 0 off) keeps its 12-byte position at +0x1a4 and
// flags +0x1a0.
namespace d_005c8f14 {

struct __attribute__((packed)) CountDown32TimersArg0 {
    u8 unknown_0[0x180];  // (not used here)
    u8 byte_180;
    u8 unknown_181[0x1f];  // (not used here)
    u8 byte_1a0;
};
GUEST_OFFSET(CountDown32TimersArg0, byte_180, 0x180);
GUEST_OFFSET(CountDown32TimersArg0, byte_1a0, 0x1a0);

struct __attribute__((packed)) Local_005c8f14_r2_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005c8f14_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_005c8f14_r2_1, word_4, 0x4);
GUEST_OFFSET(Local_005c8f14_r2_1, word_8, 0x8);


u32 count_down_32_timers(gptr<CountDown32TimersArg0> arg0) {
    u32 r0 = arg0.addr();
    arg0->byte_1a0 = 0;
    u32 r4 = 0u;
    u32 r2 = r0 + 0x180u;
    if (arg0->byte_180 != 0) {
        r4 = 0x20u;
    }
    u32 r1 = r0;
    u32 i = 0u;
    do {
        u32 r12_1 = *gptr<u8>(r2);
        if (r12_1 != 0) {
            u32 r12_2 = r12_1 - 1u & 0xffu;
            *gptr<u8>(r2) = u8(r12_2);
            if (r4 != 0 && r12_2 == 0 && *gptr<u8>(r0 + 0x180u) == 0) {
                gptr<Local_005c8f14_r2_1> r2_1 = gptr<Local_005c8f14_r2_1>(r0 + 0x1a4u);
                *gptr<u8>(r0 + 0x1a0u) = 1;
                r2_1->word_0 = *gptr<u32>(r1);
                r2_1->word_4 = *gptr<u32>(r1 + 4u);
                u32 r0_1 = *gptr<u32>(r1 + 8u);
                r2_1->word_8 = r0_1;
                guest::cpu()->r[1] = r1;
                return r0_1;
            }
        }
        i += 1u;
        r2 += 1u;
        r1 += 0xcu;
        guest::preempt();
    } while (i < 0x20u);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c8f14
GUEST_EXPORT_FRAMED(0x005c8f14, d_005c8f14::count_down_32_timers, 0x10);  // pushes {r4} first, as the original

// f_005c91a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether slot `slot` (below 4) maps to a player through the table at 0xa82000 (true from 4).
namespace d_005c91a0 {


u32 slot_has_player(u32 r0, u32 r1) {
    if (r0 >= 4u) {
        return 1u;
    }
    u32 r0_1 = *gptr<s8>(r0 + 0xa82000u);
    if (s32(r0_1) >= 4) {
        r0_1 = ~0u;
    }
    guest::cpu()->r[1] = 0xa82000u;
    return u32(s32(r0_1) >> 0x1f) + 1u;
}

}  // namespace d_005c91a0
GUEST_EXPORT(0x005c91a0, d_005c91a0::slot_has_player);

// f_005c91cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the player slots (0xaad990, all 8), the player records (0xa84790) and the four slot identities, and resets
// the player state block.
namespace d_005c91cc {

inline constexpr u32 player_records_address = 0x00a84790u;
inline constexpr u32 player_slots_address = 0x00aad990u;
inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline guest::global<u32, 0x00aad994> player_slot_a;
inline guest::global<u32, 0x00aad998> player_slot_b;
inline guest::global<u32, 0x00aad99c> player_slot_c;
inline guest::global<u32, 0x00aad9a0> player_slot_d;
inline guest::global<u16, 0x00aaef14> player_slot_flags;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32)> clear;
inline constexpr guest::Function<0x005bf954, u32(u32, u32, u32)> PlayerState__clear_inputs;
inline constexpr guest::Function<0x005bfb94, u32(u32, u32, u32, u32)> PlayerInput__reset;

void reset_player_slots() {
    guest::StackFrame frame(0x18);  // the original's stack frame
    set_bytes(player_slots_address, 4u, 8u, guest::cpu()->r[3]);
    u32 r7 = 0u;
    *player_slot_a = r7;
    *player_slot_b = r7;
    *player_slot_c = r7;
    *player_slot_d = r7;
    clear_aligned(player_records_address, 0x29200u);
    u32 r2 = guest::cpu()->r[2];
    u32 r8 = player_records_address;
    u32 i = 0u;
    do {
        u32 r6_1 = r8 + (i * 3u + (i << 4) << 1);
        u32 r5_1 = r6_1 + 0x29214u;
        clear(r5_1, 0x26u, r2);
        *gptr<u8>(r5_1) = 0xa5;
        copy_bytes_at_any_alignment(r6_1 + 0x292acu, r5_1, 0x26u);
        r2 = guest::cpu()->r[2];
        i += 1u;
        guest::preempt();
    } while (i < 4u);
    *player_slot_flags = u16(r7);
    PlayerState__clear_inputs(player_state_block_address, guest::cpu()->r[1], r2);
    frame.release();
    PlayerInput__reset(player_state_block_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005c91cc
GUEST_EXPORT(0x005c91cc, d_005c91cc::reset_player_slots);

// f_005c9754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The size (width, depth in bytes) of map structure `kind` (0x12 from 0xfc) from its rectangle in the table at
// 0x88b948.
namespace d_005c9754 {

struct __attribute__((packed)) Local_005c9754_r0_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_005c9754_r0_1, byte_0, 0x0);
GUEST_OFFSET(Local_005c9754_r0_1, byte_1, 0x1);
GUEST_OFFSET(Local_005c9754_r0_1, byte_2, 0x2);
GUEST_OFFSET(Local_005c9754_r0_1, byte_3, 0x3);


struct __attribute__((packed)) MapStructureSizeFrame {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(MapStructureSizeFrame, byte_1, 0x1);
GUEST_SIZE(MapStructureSizeFrame, 0x4);

u32 map_structure_size(u32 r0) {
    guest::StackFrameOf<MapStructureSizeFrame> frame;  // the original's stack frame
    if (r0 >= 0xfcu) {
        r0 = 0x12u;
    }
    gptr<Local_005c9754_r0_1> r0_1 = gptr<Local_005c9754_r0_1>((r0 << 2) + 0x88b948u);
    *frame.at<u8>(0) = u8(u32(r0_1->byte_2) - u32(r0_1->byte_0) + 1u);
    u32 r1_1 = r0_1->byte_3;
    frame->byte_1 = u8(r1_1 - u32(r0_1->byte_1) + 1u);
    u32 r0_2 = *frame.at<u16>(0);
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_005c9754
GUEST_EXPORT(0x005c9754, d_005c9754::map_structure_size);

// f_005c98a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the player action of the kind once its flag is claimed.
namespace d_005c98a8 {

inline constexpr u32 player_action_state_address = 0x0095b6e4u;
inline constexpr u32 player_action_table_address = 0x00ac3558u;
inline guest::global<u16, 0x00886f02> global_00886f02;
inline guest::global<u16, 0x00886f04> global_00886f04;
inline guest::global<u16, 0x00886f06> global_00886f06;
inline guest::global<u16, 0x00886f0c> global_00886f0c;
inline guest::global<u16, 0x00886f0e> global_00886f0e;
inline guest::global<u16, 0x00886f12> global_00886f12;
inline guest::global<u16, 0x00886f16> global_00886f16;
inline guest::global<u16, 0x00886f18> global_00886f18;
inline guest::global<u16, 0x00886f1a> global_00886f1a;
inline guest::global<u16, 0x00886f1c> global_00886f1c;
inline guest::global<u16, 0x00886f22> global_00886f22;
inline guest::global<u16, 0x00886f26> global_00886f26;
inline guest::global<u16, 0x00886f28> global_00886f28;
inline guest::global<u16, 0x00886f2c> global_00886f2c;
inline guest::global<u16, 0x00886f2e> global_00886f2e;
inline guest::global<u16, 0x00886f32> global_00886f32;
inline guest::global<u16, 0x00886f34> global_00886f34;
inline guest::global<u16, 0x00886f3a> global_00886f3a;
inline guest::global<u16, 0x00886f3e> global_00886f3e;
inline guest::global<u16, 0x00886f42> global_00886f42;
inline guest::global<u16, 0x00886f44> global_00886f44;
inline guest::global<u16, 0x00886f46> global_00886f46;
inline guest::global<u16, 0x00886f48> global_00886f48;
inline guest::global<u16, 0x00886f4c> global_00886f4c;
inline guest::global<u16, 0x00886f4e> global_00886f4e;
inline guest::global<u16, 0x00886f56> global_00886f56;
inline guest::global<u16, 0x00886f5a> global_00886f5a;
inline guest::global<u16, 0x00886f60> global_00886f60;
inline guest::global<u16, 0x00886f62> global_00886f62;
inline guest::global<u32, 0x0095b6e4> player_action_state;
inline guest::global<u16, 0x00ac3558> player_action_table;
inline guest::global<u16, 0x00ac355a> global_00ac355a;
inline guest::global<u16, 0x00ac355c> global_00ac355c;
inline guest::global<u16, 0x00ac355e> global_00ac355e;
inline guest::global<u16, 0x00ac3560> global_00ac3560;
inline guest::global<u16, 0x00ac3562> global_00ac3562;
inline guest::global<u16, 0x00ac3564> global_00ac3564;
inline guest::global<u16, 0x00ac3566> global_00ac3566;
inline guest::global<u16, 0x00ac3568> global_00ac3568;
inline guest::global<u16, 0x00ac356a> global_00ac356a;
inline guest::global<u16, 0x00ac356c> global_00ac356c;
inline guest::global<u16, 0x00ac356e> global_00ac356e;
inline guest::global<u16, 0x00ac3570> global_00ac3570;
inline guest::global<u16, 0x00ac3572> global_00ac3572;
inline guest::global<u16, 0x00ac3574> global_00ac3574;
inline guest::global<u16, 0x00ac3576> global_00ac3576;
inline guest::global<u16, 0x00ac3578> global_00ac3578;
inline guest::global<u16, 0x00ac357a> global_00ac357a;
inline guest::global<u16, 0x00ac357c> global_00ac357c;
inline guest::global<u16, 0x00ac357e> global_00ac357e;
inline guest::global<u16, 0x00ac3580> global_00ac3580;
inline guest::global<u16, 0x00ac3582> global_00ac3582;
inline guest::global<u16, 0x00ac3584> global_00ac3584;
inline guest::global<u16, 0x00ac3586> global_00ac3586;
inline guest::global<u16, 0x00ac3588> global_00ac3588;
inline guest::global<u16, 0x00ac358a> global_00ac358a;
inline guest::global<u16, 0x00ac358c> global_00ac358c;
inline guest::global<u16, 0x00ac358e> global_00ac358e;
inline guest::global<u16, 0x00ac3590> global_00ac3590;
inline guest::global<u16, 0x00ac3592> global_00ac3592;
inline guest::global<u16, 0x00ac3594> global_00ac3594;
inline guest::global<u16, 0x00ac3596> global_00ac3596;
inline guest::global<u16, 0x00ac3598> global_00ac3598;
inline guest::global<u16, 0x00ac359a> global_00ac359a;
inline guest::global<u16, 0x00ac359c> global_00ac359c;
inline guest::global<u16, 0x00ac359e> global_00ac359e;
inline guest::global<u16, 0x00ac35a0> global_00ac35a0;
inline guest::global<u16, 0x00ac35a2> global_00ac35a2;
inline guest::global<u16, 0x00ac35a4> global_00ac35a4;
inline guest::global<u16, 0x00ac35a6> global_00ac35a6;
inline guest::global<u16, 0x00ac35a8> global_00ac35a8;
inline guest::global<u16, 0x00ac35aa> global_00ac35aa;
inline guest::global<u16, 0x00ac35ac> global_00ac35ac;
inline guest::global<u16, 0x00ac35ae> global_00ac35ae;
inline guest::global<u16, 0x00ac35b0> global_00ac35b0;
inline guest::global<u16, 0x00ac35b2> global_00ac35b2;
inline guest::global<u16, 0x00ac35b4> global_00ac35b4;
inline guest::global<u16, 0x00ac35b6> global_00ac35b6;
inline guest::global<u16, 0x00ac35b8> global_00ac35b8;
inline guest::global<u16, 0x00ac35ba> global_00ac35ba;
inline guest::global<u16, 0x00ac35bc> global_00ac35bc;
inline guest::global<u16, 0x00ac35be> global_00ac35be;
inline guest::global<u16, 0x00ac35c0> global_00ac35c0;
inline guest::global<u16, 0x00ac35c2> global_00ac35c2;
inline guest::global<u16, 0x00ac35c4> global_00ac35c4;
inline guest::global<u16, 0x00ac35c6> global_00ac35c6;
inline guest::global<u16, 0x00ac35c8> global_00ac35c8;
inline guest::global<u16, 0x00ac35ca> global_00ac35ca;
inline guest::global<u16, 0x00ac35cc> global_00ac35cc;
inline guest::global<u16, 0x00ac35ce> global_00ac35ce;
inline guest::global<u16, 0x00ac35d0> global_00ac35d0;
inline guest::global<u16, 0x00ac35d2> global_00ac35d2;
inline guest::global<u16, 0x00ac35d4> global_00ac35d4;
inline guest::global<u16, 0x00ac35d6> global_00ac35d6;
inline guest::global<u16, 0x00ac35d8> global_00ac35d8;
inline guest::global<u16, 0x00ac35da> global_00ac35da;
inline guest::global<u16, 0x00ac35dc> global_00ac35dc;
inline guest::global<u16, 0x00ac35de> global_00ac35de;
inline guest::global<u16, 0x00ac35e0> global_00ac35e0;
inline guest::global<u16, 0x00ac35e2> global_00ac35e2;
inline guest::global<u16, 0x00ac35e4> global_00ac35e4;
inline guest::global<u16, 0x00ac35e6> global_00ac35e6;
inline guest::global<u16, 0x00ac35e8> global_00ac35e8;
inline guest::global<u16, 0x00ac35ea> global_00ac35ea;
inline guest::global<u16, 0x00ac35ec> global_00ac35ec;
inline guest::global<u16, 0x00ac35ee> global_00ac35ee;
inline guest::global<u16, 0x00ac35f0> global_00ac35f0;
inline guest::global<u16, 0x00ac35f2> global_00ac35f2;
inline guest::global<u16, 0x00ac35f4> global_00ac35f4;
inline guest::global<u16, 0x00ac35f6> global_00ac35f6;
inline guest::global<u16, 0x00ac35f8> global_00ac35f8;
inline guest::global<u16, 0x00ac35fa> global_00ac35fa;
inline guest::global<u16, 0x00ac35fc> global_00ac35fc;
inline guest::global<u16, 0x00ac35fe> global_00ac35fe;
inline guest::global<u16, 0x00ac3600> global_00ac3600;
inline guest::global<u16, 0x00ac3602> global_00ac3602;
inline guest::global<u16, 0x00ac3604> global_00ac3604;
inline guest::global<u16, 0x00ac3606> global_00ac3606;
inline guest::global<u16, 0x00ac3608> global_00ac3608;
inline guest::global<u16, 0x00ac360a> global_00ac360a;
inline guest::global<u16, 0x00ac360c> global_00ac360c;
inline guest::global<u16, 0x00ac360e> global_00ac360e;
inline guest::global<u16, 0x00ac3610> global_00ac3610;
inline guest::global<u16, 0x00ac3612> global_00ac3612;
inline guest::global<u16, 0x00ac3614> global_00ac3614;
inline guest::global<u16, 0x00ac3616> global_00ac3616;
inline guest::global<u16, 0x00ac3618> global_00ac3618;
inline guest::global<u16, 0x00ac361a> global_00ac361a;
inline guest::global<u16, 0x00ac361c> global_00ac361c;
inline guest::global<u16, 0x00ac361e> global_00ac361e;
inline guest::global<u16, 0x00ac3620> global_00ac3620;
inline guest::global<u16, 0x00ac3622> global_00ac3622;
inline guest::global<u16, 0x00ac3624> global_00ac3624;
inline guest::global<u16, 0x00ac3626> global_00ac3626;
inline guest::global<u16, 0x00ac3628> global_00ac3628;
inline guest::global<u16, 0x00ac362a> global_00ac362a;
inline guest::global<u16, 0x00ac362c> global_00ac362c;
inline guest::global<u16, 0x00ac362e> global_00ac362e;
inline guest::global<u16, 0x00ac3630> global_00ac3630;
inline guest::global<u16, 0x00ac3632> global_00ac3632;
inline guest::global<u16, 0x00ac3634> global_00ac3634;
inline guest::global<u16, 0x00ac3636> global_00ac3636;
inline guest::global<u16, 0x00ac3638> global_00ac3638;
inline guest::global<u16, 0x00ac363a> global_00ac363a;
inline guest::global<u16, 0x00ac363c> global_00ac363c;
inline guest::global<u16, 0x00ac363e> global_00ac363e;
inline guest::global<u16, 0x00ac3640> global_00ac3640;
inline guest::global<u16, 0x00ac3642> global_00ac3642;
inline guest::global<u16, 0x00ac3644> global_00ac3644;
inline guest::global<u16, 0x00ac3646> global_00ac3646;
inline guest::global<u16, 0x00ac3648> global_00ac3648;
inline guest::global<u16, 0x00ac364a> global_00ac364a;
inline guest::global<u16, 0x00ac364c> global_00ac364c;
inline guest::global<u16, 0x00ac364e> global_00ac364e;
inline guest::global<u16, 0x00ac3650> global_00ac3650;
inline guest::global<u16, 0x00ac3652> global_00ac3652;
inline guest::global<u16, 0x00ac3654> global_00ac3654;
inline guest::global<u16, 0x00ac3656> global_00ac3656;
inline guest::global<u16, 0x00ac3658> global_00ac3658;
inline guest::global<u16, 0x00ac365a> global_00ac365a;
inline guest::global<u16, 0x00ac365c> global_00ac365c;
inline guest::global<u16, 0x00ac365e> global_00ac365e;
inline guest::global<u16, 0x00ac3660> global_00ac3660;
inline guest::global<u16, 0x00ac3662> global_00ac3662;
inline guest::global<u16, 0x00ac3664> global_00ac3664;
inline guest::global<u16, 0x00ac3666> global_00ac3666;
inline guest::global<u16, 0x00ac3668> global_00ac3668;
inline guest::global<u16, 0x00ac366a> global_00ac366a;
inline guest::global<u16, 0x00ac366c> global_00ac366c;
inline guest::global<u16, 0x00ac366e> global_00ac366e;
inline guest::global<u16, 0x00ac3670> global_00ac3670;
inline guest::global<u16, 0x00ac3672> global_00ac3672;
inline guest::global<u16, 0x00ac3674> global_00ac3674;
inline guest::global<u16, 0x00ac3676> global_00ac3676;
inline guest::global<u16, 0x00ac3678> global_00ac3678;
inline guest::global<u16, 0x00ac367a> global_00ac367a;
inline guest::global<u16, 0x00ac367c> global_00ac367c;
inline guest::global<u16, 0x00ac367e> global_00ac367e;
inline guest::global<u16, 0x00ac3680> global_00ac3680;
inline guest::global<u16, 0x00ac3682> global_00ac3682;
inline guest::global<u16, 0x00ac3684> global_00ac3684;
inline guest::global<u16, 0x00ac3686> global_00ac3686;
inline guest::global<u16, 0x00ac3688> global_00ac3688;
inline guest::global<u16, 0x00ac368a> global_00ac368a;
inline guest::global<u16, 0x00ac368c> global_00ac368c;
inline guest::global<u16, 0x00ac368e> global_00ac368e;
inline guest::global<u16, 0x00ac3690> global_00ac3690;
inline guest::global<u16, 0x00ac3692> global_00ac3692;
inline guest::global<u16, 0x00ac3694> global_00ac3694;
inline guest::global<u16, 0x00ac3696> global_00ac3696;
inline guest::global<u16, 0x00ac3698> global_00ac3698;
inline guest::global<u16, 0x00ac369a> global_00ac369a;
inline guest::global<u16, 0x00ac369c> global_00ac369c;
inline guest::global<u16, 0x00ac369e> global_00ac369e;
inline guest::global<u16, 0x00ac36a0> global_00ac36a0;
inline guest::global<u16, 0x00ac36a2> global_00ac36a2;
inline guest::global<u16, 0x00ac36a4> global_00ac36a4;
inline guest::global<u16, 0x00ac36a6> global_00ac36a6;
inline guest::global<u16, 0x00ac36a8> global_00ac36a8;
inline guest::global<u16, 0x00ac36aa> global_00ac36aa;
inline guest::global<u16, 0x00ac36ac> global_00ac36ac;
inline guest::global<u16, 0x00ac36ae> global_00ac36ae;
inline guest::global<u16, 0x00ac36b0> global_00ac36b0;
inline guest::global<u16, 0x00ac36b2> global_00ac36b2;
inline guest::global<u16, 0x00ac36b4> global_00ac36b4;
inline guest::global<u16, 0x00ac36b6> global_00ac36b6;
inline guest::global<u16, 0x00ac36b8> global_00ac36b8;
inline guest::global<u16, 0x00ac36ba> global_00ac36ba;
inline guest::global<u16, 0x00ac36bc> global_00ac36bc;
inline guest::global<u16, 0x00ac36be> global_00ac36be;
inline guest::global<u16, 0x00ac36c0> global_00ac36c0;
inline guest::global<u16, 0x00ac36c2> global_00ac36c2;
inline guest::global<u16, 0x00ac36c4> global_00ac36c4;
inline guest::global<u16, 0x00ac36c6> global_00ac36c6;
inline guest::global<u16, 0x00ac36c8> global_00ac36c8;
inline guest::global<u16, 0x00ac36ca> global_00ac36ca;
inline guest::global<u16, 0x00ac36cc> global_00ac36cc;
inline guest::global<u16, 0x00ac36ce> global_00ac36ce;
inline guest::global<u16, 0x00ac36d0> global_00ac36d0;
inline guest::global<u16, 0x00ac36d2> global_00ac36d2;
inline guest::global<u16, 0x00ac36d4> global_00ac36d4;
inline guest::global<u16, 0x00ac36d6> global_00ac36d6;
inline guest::global<u16, 0x00ac36d8> global_00ac36d8;
inline guest::global<u16, 0x00ac36da> global_00ac36da;
inline guest::global<u16, 0x00ac36dc> global_00ac36dc;
inline guest::global<u16, 0x00ac36de> global_00ac36de;
inline guest::global<u16, 0x00ac36e0> global_00ac36e0;
inline guest::global<u16, 0x00ac36e2> global_00ac36e2;
inline guest::global<u16, 0x00ac36e4> global_00ac36e4;
inline guest::global<u16, 0x00ac36e6> global_00ac36e6;
inline guest::global<u16, 0x00ac36e8> global_00ac36e8;
inline guest::global<u16, 0x00ac36ea> global_00ac36ea;
inline guest::global<u16, 0x00ac36ec> global_00ac36ec;
inline guest::global<u16, 0x00ac36ee> global_00ac36ee;
inline guest::global<u16, 0x00ac36f0> global_00ac36f0;
inline guest::global<u16, 0x00ac36f2> global_00ac36f2;
inline guest::global<u16, 0x00ac36f4> global_00ac36f4;
inline guest::global<u16, 0x00ac36f6> global_00ac36f6;
inline guest::global<u16, 0x00ac36f8> global_00ac36f8;
inline guest::global<u16, 0x00ac36fa> global_00ac36fa;
inline guest::global<u16, 0x00ac36fc> global_00ac36fc;
inline guest::global<u16, 0x00ac36fe> global_00ac36fe;
inline guest::global<u16, 0x00ac3700> global_00ac3700;
inline guest::global<u16, 0x00ac3702> global_00ac3702;
inline guest::global<u16, 0x00ac3704> global_00ac3704;
inline guest::global<u16, 0x00ac3706> global_00ac3706;
inline guest::global<u16, 0x00ac3708> global_00ac3708;
inline guest::global<u16, 0x00ac370a> global_00ac370a;
inline guest::global<u16, 0x00ac370c> global_00ac370c;
inline guest::global<u16, 0x00ac370e> global_00ac370e;
inline guest::global<u16, 0x00ac3710> global_00ac3710;
inline guest::global<u16, 0x00ac3712> global_00ac3712;
inline guest::global<u16, 0x00ac3714> global_00ac3714;
inline guest::global<u16, 0x00ac3716> global_00ac3716;
inline guest::global<u16, 0x00ac3718> global_00ac3718;
inline guest::global<u16, 0x00ac371a> global_00ac371a;
inline guest::global<u16, 0x00ac371c> global_00ac371c;
inline guest::global<u16, 0x00ac371e> global_00ac371e;
inline guest::global<u16, 0x00ac3720> global_00ac3720;
inline guest::global<u16, 0x00ac3722> global_00ac3722;
inline guest::global<u16, 0x00ac3724> global_00ac3724;
inline guest::global<u16, 0x00ac3726> global_00ac3726;
inline guest::global<u16, 0x00ac3728> global_00ac3728;
inline guest::global<u16, 0x00ac372a> global_00ac372a;
inline guest::global<u16, 0x00ac372c> global_00ac372c;
inline guest::global<u16, 0x00ac372e> global_00ac372e;
inline guest::global<u16, 0x00ac3730> global_00ac3730;
inline guest::global<u16, 0x00ac3732> global_00ac3732;
inline guest::global<u16, 0x00ac3734> global_00ac3734;
inline guest::global<u16, 0x00ac3736> global_00ac3736;
inline guest::global<u16, 0x00ac3738> global_00ac3738;
inline guest::global<u16, 0x00ac373a> global_00ac373a;
inline guest::global<u16, 0x00ac373c> global_00ac373c;
inline guest::global<u16, 0x00ac373e> global_00ac373e;
inline guest::global<u16, 0x00ac3740> global_00ac3740;
inline guest::global<u16, 0x00ac3742> global_00ac3742;
inline guest::global<u16, 0x00ac3744> global_00ac3744;
inline guest::global<u16, 0x00ac3746> global_00ac3746;
inline guest::global<u16, 0x00ac3748> global_00ac3748;
inline guest::global<u16, 0x00ac374a> global_00ac374a;
inline guest::global<u16, 0x00ac374c> global_00ac374c;
inline guest::global<u16, 0x00ac374e> global_00ac374e;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32)> static_guard_acquire;

u32 PlayerAction__dispatch(u32 player_action, u32 r1) {
    u32 r0_1 = 0;
    if (player_action >= 0xfcu) {
        r0_1 = 0x887402u;
    } else {
        if ((*player_action_state & 1u) == 0) {
            u32 first_time_2 = static_guard_acquire(player_action_state_address, r1);
            r1 = guest::cpu()->r[1];
            if (first_time_2 != 0) {
                *player_action_table = *global_00886f02;
                u32 r14 = 0x886f20u;
                *global_00ac355a = *global_00886f02;
                *global_00ac355c = *global_00886f02;
                *global_00ac355e = *global_00886f02;
                *global_00ac3560 = *global_00886f04;
                *global_00ac3562 = *global_00886f04;
                *global_00ac3564 = *global_00886f04;
                *global_00ac3566 = *global_00886f04;
                *global_00ac3568 = *global_00886f06;
                *global_00ac356a = *global_00886f06;
                *global_00ac356c = *global_00886f06;
                *global_00ac356e = *global_00886f06;
                *global_00ac3570 = *global_00886f06;
                *global_00ac3572 = *global_00886f06;
                *global_00ac3574 = *global_00886f06;
                *global_00ac3576 = *global_00886f06;
                *global_00ac3578 = *global_00886f06;
                *global_00ac357a = *global_00886f06;
                *global_00ac357c = *global_00886f3a;
                *global_00ac357e = *global_00886f3a;
                *global_00ac3580 = *global_00886f3a;
                *global_00ac3582 = *global_00886f3a;
                *global_00ac3584 = *global_00886f3a;
                *global_00ac3586 = *global_00886f3a;
                *global_00ac3588 = *global_00886f3a;
                *global_00ac358a = *global_00886f3a;
                *global_00ac358c = *global_00886f3a;
                *global_00ac358e = *global_00886f3a;
                *global_00ac3590 = *global_00886f3a;
                *global_00ac3592 = *global_00886f3a;
                *global_00ac3594 = *global_00886f3a;
                *global_00ac3596 = *global_00886f3a;
                *global_00ac3598 = *global_00886f3a;
                *global_00ac359a = *global_00886f3a;
                *global_00ac359c = *global_00886f3a;
                *global_00ac359e = *global_00886f3a;
                *global_00ac35a0 = *global_00886f3a;
                *global_00ac35a2 = *global_00886f3a;
                *global_00ac35a4 = *global_00886f3a;
                *global_00ac35a6 = *global_00886f3a;
                *global_00ac35a8 = *global_00886f3a;
                *global_00ac35aa = *global_00886f3a;
                *global_00ac35ac = *global_00886f3a;
                *global_00ac35ae = *global_00886f3a;
                *global_00ac35b0 = *global_00886f3a;
                *global_00ac35b2 = *global_00886f3a;
                *global_00ac35b4 = *global_00886f3a;
                *global_00ac35b6 = *global_00886f3a;
                *global_00ac35b8 = *global_00886f3a;
                *global_00ac35ba = *global_00886f3a;
                *global_00ac35bc = *global_00886f3a;
                *global_00ac35be = *global_00886f3a;
                *global_00ac35c0 = *global_00886f3a;
                *global_00ac35c2 = *global_00886f3a;
                *global_00ac35c4 = *global_00886f3a;
                *global_00ac35c6 = *global_00886f3a;
                *global_00ac35c8 = *global_00886f3a;
                *global_00ac35ca = *global_00886f3a;
                *global_00ac35cc = *global_00886f3a;
                *global_00ac35ce = *global_00886f3a;
                *global_00ac35d0 = *global_00886f3a;
                *global_00ac35d2 = *global_00886f3a;
                *global_00ac35d4 = *global_00886f3a;
                *global_00ac35d6 = *global_00886f3a;
                *global_00ac35d8 = *global_00886f3a;
                *global_00ac35da = *global_00886f3a;
                *global_00ac35dc = *global_00886f56;
                *global_00ac35de = *global_00886f56;
                *global_00ac35e0 = *global_00886f56;
                *global_00ac35e2 = *global_00886f56;
                *global_00ac35e4 = *global_00886f56;
                *global_00ac35e6 = *global_00886f56;
                *global_00ac35e8 = *global_00886f56;
                *global_00ac35ea = *global_00886f56;
                *global_00ac35ec = *global_00886f56;
                *global_00ac35ee = *global_00886f56;
                *global_00ac35f0 = *global_00886f0c;
                *global_00ac35f2 = *global_00886f0c;
                *global_00ac35f4 = *global_00886f0c;
                *global_00ac35f6 = *global_00886f16;
                *global_00ac35f8 = *global_00886f0e;
                *global_00ac35fa = *global_00886f0e;
                *global_00ac35fc = *global_00886f0e;
                *global_00ac35fe = *global_00886f0e;
                *global_00ac3600 = *global_00886f0c;
                *global_00ac3602 = *global_00886f0c;
                *global_00ac3604 = *global_00886f0c;
                *global_00ac3606 = *global_00886f0c;
                *global_00ac3608 = *global_00886f3e;
                *global_00ac360a = *global_00886f18;
                *global_00ac360c = *global_00886f60;
                *global_00ac360e = *global_00886f12;
                *global_00ac3610 = *gptr<u16>(r14);
                *global_00ac3612 = *global_00886f26;
                *global_00ac3614 = *global_00886f0c;
                *global_00ac3616 = *global_00886f0c;
                *global_00ac3618 = *global_00886f0c;
                *global_00ac361a = *global_00886f0c;
                *global_00ac361c = *global_00886f0c;
                *global_00ac361e = *global_00886f1a;
                *global_00ac3620 = *global_00886f1c;
                *global_00ac3622 = *global_00886f22;
                *global_00ac3624 = *global_00886f0c;
                *global_00ac3626 = *global_00886f0c;
                *global_00ac3628 = *gptr<u16>(r14);
                *global_00ac362a = *global_00886f0c;
                *global_00ac362c = *global_00886f5a;
                *global_00ac362e = *global_00886f0c;
                *global_00ac3630 = *global_00886f0c;
                *global_00ac3632 = *global_00886f0c;
                *global_00ac3634 = *global_00886f0c;
                *global_00ac3636 = *global_00886f0c;
                *global_00ac3638 = *global_00886f0c;
                *global_00ac363a = *global_00886f0c;
                *global_00ac363c = *global_00886f0c;
                *global_00ac363e = *global_00886f0c;
                *global_00ac3640 = *global_00886f0c;
                *global_00ac3642 = *global_00886f0c;
                *global_00ac3644 = *global_00886f0c;
                *global_00ac3646 = *global_00886f0c;
                *global_00ac3648 = *global_00886f0c;
                *global_00ac364a = *global_00886f0c;
                *global_00ac364c = *global_00886f0c;
                *global_00ac364e = *global_00886f0c;
                *global_00ac3650 = *global_00886f0c;
                *global_00ac3652 = *global_00886f0c;
                *global_00ac3654 = *global_00886f0c;
                *global_00ac3656 = *global_00886f62;
                *global_00ac3658 = *global_00886f62;
                *global_00ac365a = *global_00886f2c;
                *global_00ac365c = *global_00886f2c;
                *global_00ac365e = *global_00886f2c;
                *global_00ac3660 = *global_00886f2c;
                *global_00ac3662 = *global_00886f2c;
                *global_00ac3664 = *global_00886f2c;
                *global_00ac3666 = *global_00886f2c;
                *global_00ac3668 = *global_00886f2c;
                *global_00ac366a = *global_00886f2c;
                *global_00ac366c = *global_00886f2c;
                *global_00ac366e = *global_00886f2c;
                *global_00ac3670 = *global_00886f2c;
                *global_00ac3672 = *global_00886f2e;
                *global_00ac3674 = *global_00886f32;
                *global_00ac3676 = *global_00886f34;
                *global_00ac3678 = *global_00886f42;
                *global_00ac367a = *global_00886f42;
                *global_00ac367c = *global_00886f42;
                *global_00ac367e = *global_00886f42;
                *global_00ac3680 = *global_00886f42;
                *global_00ac3682 = *global_00886f42;
                *global_00ac3684 = *global_00886f42;
                *global_00ac3686 = *global_00886f42;
                *global_00ac3688 = *global_00886f42;
                *global_00ac368a = *global_00886f42;
                *global_00ac368c = *global_00886f42;
                *global_00ac368e = *global_00886f42;
                *global_00ac3690 = *global_00886f42;
                *global_00ac3692 = *global_00886f42;
                *global_00ac3694 = *global_00886f42;
                *global_00ac3696 = *global_00886f42;
                *global_00ac3698 = *global_00886f42;
                *global_00ac369a = *global_00886f42;
                *global_00ac369c = *global_00886f42;
                *global_00ac369e = *global_00886f42;
                *global_00ac36a0 = *global_00886f42;
                *global_00ac36a2 = *global_00886f42;
                *global_00ac36a4 = *global_00886f42;
                *global_00ac36a6 = *global_00886f42;
                *global_00ac36a8 = *global_00886f28;
                *global_00ac36aa = *global_00886f28;
                *global_00ac36ac = *global_00886f28;
                *global_00ac36ae = *global_00886f28;
                *global_00ac36b0 = *global_00886f28;
                *global_00ac36b2 = *global_00886f28;
                *global_00ac36b4 = *global_00886f28;
                *global_00ac36b6 = *global_00886f28;
                *global_00ac36b8 = *global_00886f28;
                *global_00ac36ba = *global_00886f28;
                *global_00ac36bc = *global_00886f4e;
                *global_00ac36be = *global_00886f28;
                *global_00ac36c0 = *global_00886f46;
                *global_00ac36c2 = *global_00886f28;
                *global_00ac36c4 = *global_00886f28;
                *global_00ac36c6 = *global_00886f28;
                *global_00ac36c8 = *global_00886f28;
                *global_00ac36ca = *global_00886f28;
                *global_00ac36cc = *global_00886f28;
                *global_00ac36ce = *global_00886f28;
                *global_00ac36d0 = *global_00886f28;
                *global_00ac36d2 = *global_00886f28;
                *global_00ac36d4 = *global_00886f28;
                *global_00ac36d6 = *global_00886f28;
                *global_00ac36d8 = *global_00886f28;
                *global_00ac36da = *global_00886f28;
                *global_00ac36dc = *global_00886f28;
                *global_00ac36de = *global_00886f28;
                *global_00ac36e0 = *global_00886f28;
                *global_00ac36e2 = *global_00886f28;
                *global_00ac36e4 = *global_00886f28;
                *global_00ac36e6 = *global_00886f28;
                *global_00ac36e8 = *global_00886f28;
                *global_00ac36ea = *global_00886f28;
                *global_00ac36ec = *global_00886f28;
                *global_00ac36ee = *global_00886f28;
                *global_00ac36f0 = *global_00886f28;
                *global_00ac36f2 = *global_00886f28;
                *global_00ac36f4 = *global_00886f28;
                *global_00ac36f6 = *global_00886f4c;
                *global_00ac36f8 = *global_00886f28;
                *global_00ac36fa = *global_00886f28;
                *global_00ac36fc = *global_00886f28;
                *global_00ac36fe = *global_00886f28;
                *global_00ac3700 = *global_00886f28;
                *global_00ac3702 = *global_00886f28;
                *global_00ac3704 = *global_00886f28;
                *global_00ac3706 = *global_00886f28;
                *global_00ac3708 = *global_00886f28;
                *global_00ac370a = *global_00886f28;
                *global_00ac370c = *global_00886f28;
                *global_00ac370e = *global_00886f28;
                *global_00ac3710 = *global_00886f48;
                *global_00ac3712 = *global_00886f48;
                *global_00ac3714 = *global_00886f28;
                *global_00ac3716 = *global_00886f28;
                *global_00ac3718 = *global_00886f28;
                *global_00ac371a = *global_00886f28;
                *global_00ac371c = *global_00886f28;
                *global_00ac371e = *global_00886f28;
                *global_00ac3720 = *global_00886f28;
                *global_00ac3722 = *global_00886f28;
                *global_00ac3724 = *global_00886f28;
                *global_00ac3726 = *global_00886f28;
                *global_00ac3728 = *global_00886f28;
                *global_00ac372a = *global_00886f28;
                *global_00ac372c = *global_00886f28;
                *global_00ac372e = *global_00886f28;
                *global_00ac3730 = *global_00886f28;
                *global_00ac3732 = *global_00886f28;
                *global_00ac3734 = *global_00886f28;
                *global_00ac3736 = *global_00886f44;
                *global_00ac3738 = *global_00886f28;
                *global_00ac373a = *global_00886f28;
                *global_00ac373c = *global_00886f28;
                *global_00ac373e = *global_00886f28;
                *global_00ac3740 = *global_00886f28;
                *global_00ac3742 = *global_00886f28;
                *global_00ac3744 = *global_00886f28;
                *global_00ac3746 = *global_00886f28;
                *global_00ac3748 = *global_00886f28;
                *global_00ac374a = *global_00886f28;
                *global_00ac374c = *global_00886f28;
                r1 = *global_00886f28;
                *global_00ac374e = u16(r1);
            }
        }
        r0_1 = (player_action << 1) + player_action_table_address;
    }
    u32 r0_3 = *gptr<u16>(r0_1);
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_005c98a8
GUEST_EXPORT_FRAMED(0x005c98a8, d_005c98a8::PlayerAction__dispatch, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005ca1d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The 16-bit value of map structure `kind` (table 0x88bf34) times 100; 0 from 0xfc.
namespace d_005ca1d4 {


u32 map_structure_value(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {
        return 0u;
    }
    u32 r1_1 = gptr<u16>(0x88bf34u)[r0];
    guest::cpu()->r[1] = r1_1;
    return r1_1 * 0x64u;
}

}  // namespace d_005ca1d4
GUEST_EXPORT(0x005ca1d4, d_005ca1d4::map_structure_value);

// f_005ca294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte of map structure `kind` from the table at 0x88be36; 0 from 0xfc.
namespace d_005ca294 {


u32 map_structure_byte_88be36(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {
        r0_1 = 0u;
    } else {
        r1 = 0x88be36u;
        r0_1 = *gptr<u8>(r1 + r0);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005ca294
GUEST_EXPORT(0x005ca294, d_005ca294::map_structure_byte_88be36);

// f_005ca2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The offset, angle (in 1/182 degrees) and word of map structure `kind` from the table at 0x88c724 (raised by -488 for
// kinds flagged 0xf).
namespace d_005ca2ac {

struct __attribute__((packed)) MapStructurePlacementArg0 {
    u32 word_0;
    float float_4;
    u32 word_8;
};
GUEST_OFFSET(MapStructurePlacementArg0, word_0, 0x0);
GUEST_OFFSET(MapStructurePlacementArg0, float_4, 0x4);
GUEST_OFFSET(MapStructurePlacementArg0, word_8, 0x8);

struct __attribute__((packed)) MapStructurePlacementArg1 {
    u16 half_0;
};
GUEST_OFFSET(MapStructurePlacementArg1, half_0, 0x0);

struct __attribute__((packed)) MapStructurePlacementArg2 {
    u32 word_0;
};
GUEST_OFFSET(MapStructurePlacementArg2, word_0, 0x0);

struct __attribute__((packed)) Local_005ca2ac_r4_1 {
    u32 word_0;
    u32 word_4;
    float float_8;
    u32 word_c;
};
GUEST_OFFSET(Local_005ca2ac_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_005ca2ac_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_005ca2ac_r4_1, float_8, 0x8);
GUEST_OFFSET(Local_005ca2ac_r4_1, word_c, 0xc);

inline constexpr guest::Function<0x006cc934, u32(u32)> byte_88bd38_is_f;

void map_structure_placement(gptr<MapStructurePlacementArg0> arg0, gptr<MapStructurePlacementArg1> arg1, gptr<MapStructurePlacementArg2> arg2, u32 r3) {
    if (r3 >= 0xfcu) {
        return;
    }
    gptr<Local_005ca2ac_r4_1> r4_1 = gptr<Local_005ca2ac_r4_1>((r3 << 4) + 0x88c724u);
    arg0->word_0 = r4_1->word_0;
    u32 r0_1 = byte_88bd38_is_f(r3);
    float S1_1 = 182.0f;
    arg0->float_4 = r0_1 == 0 ? 0.0f : -488.0f;
    arg0->word_8 = r4_1->word_4;
    arg1->half_0 = u16(vcvt_sz_f(r4_1->float_8 * S1_1));
    arg2->word_0 = r4_1->word_c;
}

}  // namespace d_005ca2ac
GUEST_EXPORT_FRAMED(0x005ca2ac, d_005ca2ac::map_structure_placement, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005ca328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte of map structure `kind` from the table at 0x88b74c; 0xa5 from 0xfc.
namespace d_005ca328 {


u32 map_structure_byte_88b74c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {
        r0_1 = 0xa5u;
    } else {
        r1 = 0x88b74cu;
        r0_1 = *gptr<u8>(r1 + r0);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005ca328
GUEST_EXPORT(0x005ca328, d_005ca328::map_structure_byte_88b74c);

// f_005ca3c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The group (table 0x88d8e0, through 0x88d9de) of an id below 0x67, else -1.
namespace d_005ca3c8 {

struct __attribute__((packed)) MapStructureGroupArg0 {
    u8 unknown_0[0x88d9de];  // (not used here)
    u8 byte_88d9de;
};
GUEST_OFFSET(MapStructureGroupArg0, byte_88d9de, 0x88d9de);


u32 map_structure_group(gptr<MapStructureGroupArg0> arg0) {
    if (arg0.addr() >= 0x67u) {
        return ~0u;
    }
    return *gptr<s8>(u32(arg0->byte_88d9de) + 0x88d8e0u);
}

}  // namespace d_005ca3c8
GUEST_EXPORT(0x005ca3c8, d_005ca3c8::map_structure_group);

// f_005ca3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte `index` (below 8) of map structure `kind` from the table at 0x88dbaa; -1 when out of range.
namespace d_005ca3ec {


u32 map_structure_byte_of_8(u32 r0, u32 r1) {
    if (r1 >= 0xfcu || r0 >= 8u) {
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    u32 r1_1 = (r1 << 3) + 0x88dbaau;
    u32 r0_2 = *gptr<s8>(r1_1 + r0);
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_005ca3ec
GUEST_EXPORT(0x005ca3ec, d_005ca3ec::map_structure_byte_of_8);

// f_005ca478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether map structure `kind`'s model type (table 0x95bae0) is the d-object type.
namespace d_005ca478 {

inline constexpr u32 map_structure_kinds_address = 0x0095bae0u;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 map_structure_is_dobj(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {
        return 0u;
    }
    if (strcmp(0x5ca4acu, gptr<u32>(map_structure_kinds_address)[r0]) == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_005ca478
GUEST_EXPORT_FRAMED(0x005ca478, d_005ca478::map_structure_is_dobj, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca4b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether entry `index` of the object name table (252 entries) is "fobj".
namespace d_005ca4b4 {

inline constexpr u32 map_structure_kinds_address = 0x0095bae0u;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 object_name_is_fobj(u32 index, u32 r1) {
    if (index >= 0xfcu) {
        return 0u;
    }
    if (strcmp(0x5ca4e8u, gptr<u32>(map_structure_kinds_address)[index]) == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_005ca4b4
GUEST_EXPORT_FRAMED(0x005ca4b4, d_005ca4b4::object_name_is_fobj, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca4f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether map structure `kind`'s model type (table 0x95bae0) is the h-object type.
namespace d_005ca4f0 {

inline constexpr u32 map_structure_kinds_address = 0x0095bae0u;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 map_structure_is_hobj(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {
        return 0u;
    }
    if (strcmp(0x5ca524u, gptr<u32>(map_structure_kinds_address)[r0]) == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_005ca4f0
GUEST_EXPORT_FRAMED(0x005ca4f0, d_005ca4f0::map_structure_is_hobj, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether map structure `kind`'s model type (table 0x95bae0) is the s-object type.
namespace d_005ca530 {

inline constexpr u32 map_structure_kinds_address = 0x0095bae0u;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 map_structure_is_sobj(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {
        return 0u;
    }
    if (strcmp(0x5ca564u, gptr<u32>(map_structure_kinds_address)[r0]) == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_005ca530
GUEST_EXPORT_FRAMED(0x005ca530, d_005ca530::map_structure_is_sobj, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Signed byte of map structure `kind` from the table at 0x88c42a; 0 from 0xfc.
namespace d_005ca56c {


u32 map_structure_s8_88c42a(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {
        r0_1 = 0u;
    } else {
        r1 = 0x88c42au;
        r0_1 = *gptr<s8>(r1 + r0);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005ca56c
GUEST_EXPORT(0x005ca56c, d_005ca56c::map_structure_s8_88c42a);

// f_005ca584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether map structure `kind`'s model type (table 0x95bae0) is the special f-object type.
namespace d_005ca584 {

inline constexpr u32 map_structure_kinds_address = 0x0095bae0u;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 map_structure_is_fobj_sp(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {
        return 0u;
    }
    if (strcmp(0x5ca5b8u, gptr<u32>(map_structure_kinds_address)[r0]) == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_005ca584
GUEST_EXPORT_FRAMED(0x005ca584, d_005ca584::map_structure_is_fobj_sp, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the CRC-32 of the region (with its stored checksum taken as 0) equals the stored checksum.
namespace d_005ca5d8 {

struct __attribute__((packed)) ChecksumMatchesArg2 {
    u32 stored;
};
GUEST_OFFSET(ChecksumMatchesArg2, stored, 0x0);

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;

u32 checksum_matches(u32 work_data, u32 r1, gptr<ChecksumMatchesArg2> arg2, u32 r3) {
    u32 stored = arg2->stored;
    u32 r3_1 = ~0u;
    arg2->stored = 0;
    u32 crc = crc32(r1, r3 - (r1 - work_data), r3_1, r3_1);
    arg2->stored = stored;
    return crc == stored;
}

}  // namespace d_005ca5d8
GUEST_EXPORT_FRAMED(0x005ca5d8, d_005ca5d8::checksum_matches, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ca62c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 003463bc with the 64-bit counter at the start of the save data.
namespace d_005ca62c {

struct __attribute__((packed)) Local_005ca62c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005ca62c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005ca62c_ea_1, word_4, 0x4);

inline constexpr u32 save_data_pointer_address = 0x0095bf74u;
inline guest::global<u32, 0x0095bf74> save_data_pointer;
inline constexpr guest::Function<0x003463bc, u32(u32, u32, u32, u32)> SaveFile__format;

u32 save_counter_call_3463bc() {
    gptr<Local_005ca62c_ea_1> ea_1 = gptr<Local_005ca62c_ea_1>(*save_data_pointer);
    return SaveFile__format(ea_1->word_0, ea_1->word_4, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ca62c
GUEST_EXPORT(0x005ca62c, d_005ca62c::save_counter_call_3463bc);

// f_005ca648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Increments the 64-bit counter at the start of the save data, skipping 0.
namespace d_005ca648 {

struct __attribute__((packed)) Local_005ca648_r2_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005ca648_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_005ca648_r2_1, word_4, 0x4);

inline constexpr u32 save_data_pointer_address = 0x0095bf74u;
inline guest::global<u32, 0x0095bf74> save_data_pointer;

u32 increment_save_counter() {
    gptr<Local_005ca648_r2_1> r2_1 = gptr<Local_005ca648_r2_1>(*save_data_pointer);
    u32 r1_1 = r2_1->word_0;
    u32 cf_1 = r1_1 + 1u < r1_1;
    u32 r0_1 = u64(r2_1->word_4) + cf_1;
    r2_1->word_4 = r0_1;
    r2_1->word_0 = r1_1 + 1u;
    if ((r1_1 + 1u | r0_1) != 0) {
        guest::cpu()->r[1] = r1_1 + 1u;
        return r0_1;
    }
    u32 cf_2 = r1_1 + 2u < r1_1 + 1u;
    u32 r0_2 = u64(r0_1) + cf_2;
    r2_1->word_4 = r0_2;
    r2_1->word_0 = r1_1 + 2u;
    guest::cpu()->r[1] = r1_1 + 2u;
    return r0_2;
}

}  // namespace d_005ca648
GUEST_EXPORT(0x005ca648, d_005ca648::increment_save_counter);

// f_005ca688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies `size` bytes into the save buffer at `offset` (within 0x89b00) and refreshes its two checksummed parts.
namespace d_005ca688 {

inline constexpr u32 save_data_pointer_address = 0x0095bf74u;
inline constexpr u32 save_buffer_address = 0x0095bf78u;
inline guest::global<u32, 0x0095bf78> save_buffer;
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;
inline constexpr guest::Function<0x0070ef54, u32(u32)> MailData__seal;
inline constexpr guest::Function<0x00757f08, u32(u32)> TownPart__seal;

u32 write_save_buffer(u32 r0, u32 r1, u32 r2) {
    u32 res_1 = r1 + r2;
    if (u32((0ull + ~u32(0ull + u32(res_1 < r1)) + u32(0x89b00u >= res_1)) >> 0x20)) {
        u32 r3_1 = *save_buffer;
        if (r3_1 != 0) {
            u32 r5_1 = r3_1 + r2;
            copy_bytes_small_sizes_first(r5_1, r0, r1, r3_1);
            u32 r4_1 = *save_buffer;
            TownPart__seal(r4_1 + 0x80u);
            MailData__seal(r4_1 + 0x71900u);
            r1 = guest::cpu()->r[1];
            r0 = r5_1;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca688
GUEST_EXPORT_FRAMED(0x005ca688, d_005ca688::write_save_buffer, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ca6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at 0x95262c when the one at 0x952628 is 0, else 0.
namespace d_005ca6fc {

inline guest::global<u8, 0x00952628> exhibition_park_file;
inline guest::global<u32, 0x0095262c> exhibition_park_data;

u32 exhibition_park_data_unless_set() {
    u32 r1_1 = *exhibition_park_file;
    u32 r0_1 = r1_1 == 0 ? *exhibition_park_data : 0u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005ca6fc
GUEST_EXPORT(0x005ca6fc, d_005ca6fc::exhibition_park_data_unless_set);

// f_005ca7a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bit 1 of +0x570a and the word +0x8f38 of the current player; for players with bit 6 of +0x8f7b, sets a town
// flag (+0x621d0 bit 5).
namespace d_005ca7a4 {

struct __attribute__((packed)) Local_005ca7a4_r0_2 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_005ca7a4_r0_2, byte_a, 0xa);

struct __attribute__((packed)) Local_005ca7a4_r0_4 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
};
GUEST_OFFSET(Local_005ca7a4_r0_4, byte_1, 0x1);

inline guest::global<u32, 0x0095bf74> save_data_pointer;
inline constexpr guest::Function<0x00116cdd, u32(u32, u32)> clear_value_105971;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x00607474, u32(u32)> request_matches_current_source;
inline constexpr guest::Function<0x00607bdc, u32(u32)> request_is_reserved;

void clear_current_player_8f38(u32 r0, u32 r1) {
    u32 player = get_current_player(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_005ca7a4_r0_2> r0_2 = gptr<Local_005ca7a4_r0_2>(player + 0x5700u);
    r0_2->byte_a = u8(u32(r0_2->byte_a) & ~2u);
    *gptr<u32>(player + 0x8f38u) = 0;
    clear_value_105971(0x8f38u, 0u);
    u32 r0_3 = u32(*gptr<u8>(player + 0x8f7bu)) << 0x19;
    if (s32(r0_3) >= 0) {
        return;
    }
    request_is_reserved(r0_3);
    request_matches_current_source(r0_3);
    gptr<Local_005ca7a4_r0_4> r0_4 = gptr<Local_005ca7a4_r0_4>(*save_data_pointer + 0x621cfu);
    u32 r1_2 = u32(r0_4->byte_1) | 0x20u;
    r0_4->byte_1 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_005ca7a4
GUEST_EXPORT_FRAMED(0x005ca7a4, d_005ca7a4::clear_current_player_8f38, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca9cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00119288 on the save data at +0x292a4.
namespace d_005ca9cc {

inline guest::global<u32, 0x0095bf74> save_data_pointer;
inline constexpr guest::Function<0x00119289, u32(u32, u32, u32, u32)> Villagers__reset_daily;

void call_00119288_on_save_292a4() {
    Villagers__reset_daily(*save_data_pointer + 0x292a4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ca9cc
GUEST_EXPORT(0x005ca9cc, d_005ca9cc::call_00119288_on_save_292a4);

// f_005ca9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// After the save data is loaded: rebuilds the stage resources, ends the event, resets the lists, restores the player's
// held slots and the town tune, and advances some counters.
namespace d_005ca9e4 {

struct __attribute__((packed)) Local_005ca9e4_r0_19 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_005ca9e4_r0_19, byte_8, 0x8);

struct __attribute__((packed)) Local_005ca9e4_r0_20 {
    u8 byte_0;
};
GUEST_OFFSET(Local_005ca9e4_r0_20, byte_0, 0x0);

struct __attribute__((packed)) Local_005ca9e4_r3_10 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005ca9e4_r3_10, word_0, 0x0);
GUEST_OFFSET(Local_005ca9e4_r3_10, word_4, 0x4);
GUEST_OFFSET(Local_005ca9e4_r3_10, word_8, 0x8);

inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline constexpr u32 save_data_pointer_address = 0x0095bf74u;
inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 toggle22_instance_address = 0x0095df64u;
inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x0095bf74> save_data_pointer;
inline guest::global<u32, 0x0095df64> toggle22_instance;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0013873c, u32(u32)> SoundPlayer__update;
inline constexpr guest::Function<0x001bac9c, u32(u32, u32)> reset_tables_a21f6c;
inline constexpr guest::Function<0x001c1e54, u32(u32, u32)> load_idr_jump_data_b;
inline constexpr guest::Function<0x00241d34, u32(u32)> GridLayers__first_used;
inline constexpr guest::Function<0x00292d08, u32(u32)> TourState__abort;
inline constexpr guest::Function<0x002c2538, u32(u32, u32, u32, u32)> store_byte_constant_pack_0x30_002c2538;
inline constexpr guest::Function<0x002c2710, u32(u32)> Toggle22__disable;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fc814, u32(u32, u32)> CategorySlots__store;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00300634, u32(u32, u32)> store_mode_bytes;
inline constexpr guest::Function<0x00304530, u32(u32)> shared_load_splits;
inline constexpr guest::Function<0x0056b550, u32(u32)> TimeLimit__apply;
inline constexpr guest::Function<0x00582464, u32(u32)> reset_bit_table_entries;
inline constexpr guest::Function<0x0058d52c, u32(u32)> load_town_tune;
inline constexpr guest::Function<0x0058f100, u32(u32, u32, u32, u32)> end_event_9524d4;
inline constexpr guest::Function<0x00607474, u32(u32, u32, u32)> request_matches_current_source;
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32)> request_is_reserved;
inline constexpr guest::Function<0x006a6408, u32(u32)> MapTable__build_maps;

struct __attribute__((packed)) OnSaveDataLoadedFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(OnSaveDataLoadedFrame, word_0, 0x0);
GUEST_OFFSET(OnSaveDataLoadedFrame, word_4, 0x4);
GUEST_OFFSET(OnSaveDataLoadedFrame, word_8, 0x8);
GUEST_SIZE(OnSaveDataLoadedFrame, 0x1c);

u32 on_save_data_loaded(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnSaveDataLoadedFrame> frame;  // the original's stack frame
    store_byte_constant_pack_0x30_002c2538(*toggle22_instance, r1, r2, r3);
    TourState__abort(Toggle22__disable(*toggle22_instance));
    u32 map_table = stage_heap_address;
    u32 r4_1 = *gptr<u32>(map_table);
    if (r4_1 != 0) {
        u32 safe_string_base_char = shared_load_splits(map_table);
        map_table = load_idr_jump_data_b(safe_string_base_char, r4_1);
    }
    TimeLimit__apply(SoundPlayer__update(shared_load_splits(GridLayers__first_used(MapTable__build_maps(map_table)))));
    make_adjusted_words(frame.at(0xc).addr(), *save_data_pointer + 0x62232u);
    gptr<Local_005ca9e4_r3_10> r3_10 = gptr<Local_005ca9e4_r3_10>(frame.at(0xc).addr());
    u32 r1_9 = r3_10->word_4;
    u32 r2_10 = r3_10->word_8;
    frame->word_0 = r3_10->word_0;
    frame->word_4 = r1_9;
    frame->word_8 = r2_10;
    reset_bit_table_entries(end_event_9524d4(frame.at(0).addr(), 0u, 0u, r3_10.addr()));
    store_mode_bytes(1u, 1u);
    u32 r4_2 = *current_player_data;
    u32 r0_13 = request_is_reserved(player_state_block_address, guest::cpu()->r[1], guest::cpu()->r[2]);
    request_matches_current_source(r0_13, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 player = get_current_player(CategorySlots__store(*save_data_pointer + 0x6acceu, r4_2 + 0x8f0au));
    u32 r0_17 = player + 0x8f0au;
    Item__copy(r0_17, empty_item_address);
    u32 r0_18 = load_town_tune(r0_17);
    request_is_reserved(r0_18, guest::cpu()->r[1], guest::cpu()->r[2]);
    request_matches_current_source(r0_18, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r1_17 = *save_data_pointer;
    gptr<Local_005ca9e4_r0_19> r0_19 = gptr<Local_005ca9e4_r0_19>(r1_17 + 0x70ee2u);
    u32 r2_20 = r0_19->byte_8;
    if (0xau > (r2_20 & 0xf0u) >> 4) {
        r0_19->byte_8 = u8(r2_20 + 0x10u);
    }
    gptr<Local_005ca9e4_r0_20> r0_20 = gptr<Local_005ca9e4_r0_20>(u32(*gptr<u8>(r1_17 + 0x6feb4u)));
    if ((r0_20.addr() & 8u) != 0 && (r0_20.addr() & 0x40u) == 0) {
        request_is_reserved(r0_20.addr(), r1_17, r2_20);
        request_matches_current_source(r0_20.addr(), r1_17, r2_20);
        r0_20 = gptr<Local_005ca9e4_r0_20>(*save_data_pointer + 0x6feb4u);
        r1_17 = u32(r0_20->byte_0) | 0x40u;
        r0_20->byte_0 = u8(r1_17);
    }
    return reset_tables_a21f6c(r0_20.addr(), r1_17);
}

}  // namespace d_005ca9e4
GUEST_EXPORT_FRAMED(0x005ca9e4, d_005ca9e4::on_save_data_loaded, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005cabc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// After new save data is made: rebuilds the stage resources, ends the event and loads the town tune.
namespace d_005cabc0 {

struct __attribute__((packed)) Local_005cabc0_r3_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005cabc0_r3_7, word_0, 0x0);
GUEST_OFFSET(Local_005cabc0_r3_7, word_4, 0x4);
GUEST_OFFSET(Local_005cabc0_r3_7, word_8, 0x8);

inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline constexpr u32 toggle22_instance_address = 0x0095df64u;
inline guest::global<u32, 0x0095bf74> save_data_pointer;
inline guest::global<u32, 0x0095df64> toggle22_instance;
inline constexpr guest::Function<0x0013873c, u32(u32)> SoundPlayer__update;
inline constexpr guest::Function<0x001bac9c, u32(u32)> reset_tables_a21f6c;
inline constexpr guest::Function<0x001c1e54, u32(u32, u32)> load_idr_jump_data_b;
inline constexpr guest::Function<0x00241d34, u32(u32)> GridLayers__first_used;
inline constexpr guest::Function<0x00292d08, u32(u32, u32, u32, u32)> TourState__abort;
inline constexpr guest::Function<0x002c2510, u32(u32)> set_resource_from_data_62138;
inline constexpr guest::Function<0x002c2544, u32(u32)> Toggle22__enable;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fc188, u32(u32)> return_constant_0xa84270_;
inline constexpr guest::Function<0x002fc194, u32(u32)> PlayerRecord4c__clear;
inline constexpr guest::Function<0x00304530, u32(u32)> shared_load_splits;
inline constexpr guest::Function<0x0058d52c, u32(u32)> load_town_tune;
inline constexpr guest::Function<0x0058f100, u32(u32, u32, u32, u32)> end_event_9524d4;
inline constexpr guest::Function<0x006a6408, u32(u32)> MapTable__build_maps;

struct __attribute__((packed)) OnSaveDataCreatedFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(OnSaveDataCreatedFrame, word_0, 0x0);
GUEST_OFFSET(OnSaveDataCreatedFrame, word_4, 0x4);
GUEST_OFFSET(OnSaveDataCreatedFrame, word_8, 0x8);
GUEST_SIZE(OnSaveDataCreatedFrame, 0x18);

void on_save_data_created(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<OnSaveDataCreatedFrame> frame;  // the original's stack frame
    TourState__abort(r0, r1, r2, r3);
    u32 map_table = stage_heap_address;
    u32 r4_1 = *gptr<u32>(map_table);
    if (r4_1 != 0) {
        u32 safe_string_base_char = shared_load_splits(map_table);
        map_table = load_idr_jump_data_b(safe_string_base_char, r4_1);
    }
    SoundPlayer__update(shared_load_splits(GridLayers__first_used(MapTable__build_maps(map_table))));
    make_adjusted_words(frame.at(0xc).addr(), *save_data_pointer + 0x80u + 0x621b2u);
    gptr<Local_005cabc0_r3_7> r3_7 = gptr<Local_005cabc0_r3_7>(frame.at(0xc).addr());
    u32 r1_6 = r3_7->word_4;
    u32 r2_7 = r3_7->word_8;
    frame->word_0 = r3_7->word_0;
    frame->word_4 = r1_6;
    frame->word_8 = r2_7;
    u32 r0_10 = load_town_tune(GridLayers__first_used(end_event_9524d4(frame.at(0).addr(), 0u, 0u, r3_7.addr())));
    u32 player_record4c = return_constant_0xa84270_(r0_10);
    PlayerRecord4c__clear(player_record4c);
    Toggle22__enable(*toggle22_instance);
    u32 r0_13 = *toggle22_instance;
    set_resource_from_data_62138(r0_13);
    reset_tables_a21f6c(r0_13);
}

}  // namespace d_005cabc0
GUEST_EXPORT_FRAMED(0x005cabc0, d_005cabc0::on_save_data_created, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cacfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 002c24dc on the object at 0x95df64.
namespace d_005cacfc {

inline constexpr u32 toggle22_instance_address = 0x0095df64u;
inline guest::global<u32, 0x0095df64> toggle22_instance;
inline constexpr guest::Function<0x002c24dc, u32(u32, u32, u32, u32)> TownName__copy;

u32 call_002c24dc_on_95df64() {
    return TownName__copy(*toggle22_instance, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cacfc
GUEST_EXPORT(0x005cacfc, d_005cacfc::call_002c24dc_on_95df64);

// f_005cad1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a whole save buffer (0x89b00 bytes).
namespace d_005cad1c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

u32 clear_save_buffer() {
    return clear_aligned(guest::cpu()->r[0], 0x89b00u);
}

}  // namespace d_005cad1c
GUEST_EXPORT(0x005cad1c, d_005cad1c::clear_save_buffer);

// f_005cad28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts new save data: two random words for the save identity, then the town part (+0x80) and the part at +0x71900.
namespace d_005cad28 {

struct __attribute__((packed)) Save {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Save, word_0, 0x0);
GUEST_OFFSET(Save, word_4, 0x4);
GUEST_OFFSET(Save, word_8, 0x8);

inline constexpr u32 save_data_init_state_address = 0x009753c0u;
inline guest::global<u32, 0x009753c0> save_data_init_state;
inline constexpr guest::Function<0x001df42c, u32(u32, u32, u32, u32)> SaveBlock71900__reset;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x005cb26c, u32(u32, u32)> Town__clear;

u32 SaveData__init_new(gptr<Save> save, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = Xorshift128__next_0055cb58(*save_data_init_state, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = Xorshift128__next_0055cb58(*save_data_init_state, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    save->word_8 = 0;
    save->word_0 = u32(u64(r0_4) * (~0u) >> 0x20) + 1u;
    save->word_4 = r0_2;
    Town__clear(save.addr() + 0x80u, 0u);
    frame.release();
    return SaveBlock71900__reset(save.addr() + 0x71900u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cad28
GUEST_EXPORT(0x005cad28, d_005cad28::SaveData__init_new);

// f_005caf64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores 0x9e at +4 and clears +6.
namespace d_005caf64 {

struct __attribute__((packed)) Town {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 byte_6;
};
GUEST_OFFSET(Town, half_4, 0x4);
GUEST_OFFSET(Town, byte_6, 0x6);


void init_header_9e(gptr<Town> town) {
    town->half_4 = 0x9e;
    town->byte_6 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_005caf64
GUEST_EXPORT_FRAMED(0x005caf64, d_005caf64::init_header_9e, 0x4010);  // pushes {r4, lr} first, as the original

// f_005caf80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a 64-bit amount to the counter at +0x62130, saturating at the largest positive value.
namespace d_005caf80 {

struct __attribute__((packed)) Town {
    u8 unknown_0[0x62130];  // (not used here)
    u32 res;
    u32 word_62134;
};
GUEST_OFFSET(Town, res, 0x62130);
GUEST_OFFSET(Town, word_62134, 0x62134);


u32 Town__add_to_counter_62130(gptr<Town> town, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = town->res;
    u32 res_1 = r0_1 + r2;
    u32 cf_1 = res_1 < r0_1;
    u32 r1_1 = u64(town->word_62134) + r3 + cf_1;
    if (u32((u64(~0x80000000u) + ~r1_1 + u32(~0u >= res_1)) >> 0x20)) {
        town->res = res_1;
        town->word_62134 = r1_1;
        guest::cpu()->r[1] = r1_1;
        return res_1;
    }
    u32 r0_2 = ~0u;
    u32 r1_2 = ~0x80000000u;
    town->res = r0_2;
    town->word_62134 = r1_2;
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_005caf80
GUEST_EXPORT_FRAMED(0x005caf80, d_005caf80::Town__add_to_counter_62130, 0x30);  // pushes {r4, r5} first, as the original

// f_005cb1dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the parts of a new town (villagers, map, letters, events and the rest).
namespace d_005cb1dc {

inline constexpr guest::Function<0x0010a2cc, u32(u32)> TownFlags__init_new;
inline constexpr guest::Function<0x00118a65, u32(u32)> WeatherRecord__init_new;
inline constexpr guest::Function<0x001b1af8, u32(u32)> pick_random_letters;
inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> sead__FixedSafeString_30___FixedSafeString_001b3f24;
inline constexpr guest::Function<0x002ebd68, u32(u32)> Block1228__clear_all;
inline constexpr guest::Function<0x0052ab60, u32(u32)> TimedRecord18__init_new;
inline constexpr guest::Function<0x005caf64, u32(u32, u32, u32, u32)> init_header_9e;
inline constexpr guest::Function<0x005cdbb8, u32(u32)> SlotList56__init_new;
inline constexpr guest::Function<0x006bc5a0, u32(u32)> ClothingRecords__construct;

u32 Town__init_new(u32 town, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    init_header_9e(town, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    SlotList56__init_new(town + 0x4be00u);
    Block1228__clear_all(town + 0x5d880u);
    TimedRecord18__init_new(town + 0x621b2u);
    pick_random_letters(town + 0x621ccu);
    TownFlags__init_new(town + 0x621d0u);
    ClothingRecords__construct(town + 0x6ae38u);
    WeatherRecord__init_new(town + 0x6fe28u);
    frame.release();
    return sead__FixedSafeString_30___FixedSafeString_001b3f24(town + 0x70e9cu, 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cb1dc
GUEST_EXPORT(0x005cb1dc, d_005cb1dc::Town__init_new);

// f_005cb26c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears every part of the town data (villagers, map, records, events, pattern, counters).
namespace d_005cb26c {

struct __attribute__((packed)) Town {
    u8 unknown_0[0x62130];  // (not used here)
    u32 word_62130;
    u32 word_62134;
    u8 unknown_62138[0xda30];  // (not used here)
    u8 byte_6fb68;
    u8 unknown_6fb69[0x149];  // (not used here)
    u8 byte_6fcb2;
    u8 unknown_6fcb3[0x181];  // (not used here)
    u8 byte_6fe34;
    u8 unknown_6fe35[0x102b];  // (not used here)
    u16 half_70e60;
    u8 unknown_70e62[0x8];  // (not used here)
    u8 byte_70e6a;
    u8 byte_70e6b;
    u8 byte_70e6c;
    u8 unknown_70e6d[0x97b];  // (not used here)
    u16 half_717e8;
    u8 byte_717ea;
    u8 byte_717eb;
    u8 unknown_717ec[0x14];  // (not used here)
    u32 word_71800;
    u32 word_71804;
    u32 word_71808;
    u32 word_7180c;
    u32 word_71810;
    u32 word_71814;
};
GUEST_OFFSET(Town, word_62130, 0x62130);
GUEST_OFFSET(Town, word_62134, 0x62134);
GUEST_OFFSET(Town, byte_6fb68, 0x6fb68);
GUEST_OFFSET(Town, byte_6fcb2, 0x6fcb2);
GUEST_OFFSET(Town, byte_6fe34, 0x6fe34);
GUEST_OFFSET(Town, half_70e60, 0x70e60);
GUEST_OFFSET(Town, byte_70e6a, 0x70e6a);
GUEST_OFFSET(Town, byte_70e6b, 0x70e6b);
GUEST_OFFSET(Town, byte_70e6c, 0x70e6c);
GUEST_OFFSET(Town, half_717e8, 0x717e8);
GUEST_OFFSET(Town, byte_717ea, 0x717ea);
GUEST_OFFSET(Town, byte_717eb, 0x717eb);
GUEST_OFFSET(Town, word_71800, 0x71800);
GUEST_OFFSET(Town, word_71804, 0x71804);
GUEST_OFFSET(Town, word_71808, 0x71808);
GUEST_OFFSET(Town, word_7180c, 0x7180c);
GUEST_OFFSET(Town, word_71810, 0x71810);
GUEST_OFFSET(Town, word_71814, 0x71814);

inline constexpr guest::Function<0x001082c9, u32(u32)> clear_bbs_notices;
inline constexpr guest::Function<0x0011253d, u32(u32)> VillagerPart__clear;
inline constexpr guest::Function<0x00118a75, u32(u32)> WeatherRecord__clear;
inline constexpr guest::Function<0x001b1b2c, u32(u32)> store_constants_1b1b2c;
inline constexpr guest::Function<0x001b2184, u32(u32)> clear_item_list;
inline constexpr guest::Function<0x0020bb20, u32(u32)> clear_number_pair_veneer;
inline constexpr guest::Function<0x0020d858, u32(u32)> reset_records;
inline constexpr guest::Function<0x0024a528, u32(u32)> Record10__clear;
inline constexpr guest::Function<0x0024e9fc, u32(u32)> TownRecord__clear;
inline constexpr guest::Function<0x0027aa88, u32(u32)> apply_operation_c;
inline constexpr guest::Function<0x002bf468, u32(u32)> SaveBlock28f4__clear;
inline constexpr guest::Function<0x002d453c, u32(u32)> Block7f4__clear;
inline constexpr guest::Function<0x002eaf8c, u32(u32, u32)> ContestRanking__reset;
inline constexpr guest::Function<0x002eba90, u32(u32)> Grid2x2__clear;
inline constexpr guest::Function<0x002ebd9c, u32(u32)> Block1228__reset_all;
inline constexpr guest::Function<0x00302084, u32(u32, u32)> Town__reset_flags;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x003059f8, u32(u32)> Pattern__clear;
inline constexpr guest::Function<0x0052abb4, u32(u32)> clear_timed_record;
inline constexpr guest::Function<0x005cd754, u32(u32)> TownFlags__clear;
inline constexpr guest::Function<0x005cdbf8, u32(u32)> SlotList56__clear;
inline constexpr guest::Function<0x00613620, u32(u32)> TownRecord__reset;
inline constexpr guest::Function<0x006137d8, u32(u32, u32, u32, u32)> TownLayout__init;
inline constexpr guest::Function<0x006bc04c, u32(u32)> TownTune__get_packed;
inline constexpr guest::Function<0x006bc5d8, u32(u32)> ClothingRecords__clear;
inline constexpr guest::Function<0x006f3d0c, u32(u32)> TownFlags__reset;
inline constexpr guest::Function<0x00779520, u32(u32)> TownPlate__reset;

void Town__clear(gptr<Town> town, u32 r1, u32 r2, u32 r3) {
    TownLayout__init(town.addr() + 0x53400u, r1, r2, r3);
    SlotList56__clear(town.addr() + 0x4be00u);
    apply_operation_c(town.addr() + 0x20u);
    Block1228__reset_all(town.addr() + 0x5d880u);
    store_constants_1b1b2c(town.addr() + 0x621ccu);
    TownFlags__clear(town.addr() + 0x621d0u);
    ClothingRecords__clear(town.addr() + 0x6ae38u);
    WeatherRecord__clear(town.addr() + 0x6fe28u);
    VillagerPart__clear(town.addr() + 0x29220u);
    SaveBlock28f4__clear(town.addr() + 0x502bcu);
    Block7f4__clear(town.addr() + 0x52bb0u);
    clear_timed_record(town.addr() + 0x621b2u);
    TownRecord__reset(town.addr() + 0x6e1f4u);
    clear_item_list(town.addr() + 0x62162u);
    clear_inner(town.addr() + 0x6e212u);
    TownTune__get_packed(town.addr() + 0x6e21au);
    TownRecord__clear(town.addr() + 0x6e224u);
    clear_number_pair_veneer(town.addr() + 0x6e234u);
    clear_bbs_notices(town.addr() + 0x6e238u);
    TownPlate__reset(town.addr() + 0x6fb4cu);
    Town__reset_flags(town.addr() + 0x6fb68u, 1u);
    town->byte_6fb68 = 0;
    ContestRanking__reset(town.addr() + 0x6fcb2u, 1u);
    town->byte_6fcb2 = 0;
    Grid2x2__clear(town.addr() + 0x6fe36u);
    reset_records(town.addr() + 0x6fdf8u);
    town->byte_6fe34 = 0;
    town->half_70e60 = 0;
    clear_inner(town.addr() + 0x70e62u);
    town->byte_70e6a = 0;
    clear_identity_with_flags(town.addr() + 0x70e6eu);
    town->byte_70e6b = 0;
    town->byte_70e6c = 0;
    TownFlags__reset(town.addr() + 0x6214fu);
    Pattern__clear(town.addr() + 0x70e9cu);
    town->half_717e8 = 0;
    town->byte_717ea = 0;
    town->byte_717eb = 0;
    Record10__clear(town.addr() + 0x717ecu);
    town->word_71800 = 0;
    town->word_71804 = 0;
    town->word_71808 = 0;
    town->word_7180c = 0;
    town->word_71810 = 0;
    town->word_71814 = 0;
    town->word_62130 = 0;
    town->word_62134 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_005cb26c
GUEST_EXPORT_FRAMED(0x005cb26c, d_005cb26c::Town__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cb49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the player's save data (records, patterns, rankings, pockets).
namespace d_005cb49c {

struct __attribute__((packed)) Local_005cb49c_ea_1 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_005cb49c_ea_1, half_0, 0x0);
GUEST_OFFSET(Local_005cb49c_ea_1, byte_2, 0x2);
GUEST_OFFSET(Local_005cb49c_ea_1, byte_3, 0x3);

struct __attribute__((packed)) Local_005cb49c_r0_162 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_005cb49c_r0_162, half_0, 0x0);
GUEST_OFFSET(Local_005cb49c_r0_162, byte_2, 0x2);
GUEST_OFFSET(Local_005cb49c_r0_162, byte_3, 0x3);

struct __attribute__((packed)) Local_005cb49c_r0_95 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_005cb49c_r0_95, half_0, 0x0);
GUEST_OFFSET(Local_005cb49c_r0_95, byte_2, 0x2);
GUEST_OFFSET(Local_005cb49c_r0_95, byte_3, 0x3);

struct __attribute__((packed)) Local_005cb49c_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Local_005cb49c_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_005cb49c_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_005cb49c_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_005cb49c_r4_1, word_c, 0xc);
GUEST_OFFSET(Local_005cb49c_r4_1, half_10, 0x10);

struct __attribute__((packed)) Local_005cb49c_r4_19 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(Local_005cb49c_r4_19, byte_9, 0x9);
GUEST_OFFSET(Local_005cb49c_r4_19, byte_a, 0xa);

inline constexpr guest::Function<0x00108435, u32(u32)> construct_bbs_notices;
inline constexpr guest::Function<0x00112585, u32(u32)> VillagerPart__construct_and_clear;
inline constexpr guest::Function<0x001b1a44, u32(u32, u32)> Progress__Progress;
inline constexpr guest::Function<0x001b1b2c, u32(u32, u32)> store_constants_1b1b2c;
inline constexpr guest::Function<0x001b23ac, u32(u32, u32)> ItemSlots16__ItemSlots16;
inline constexpr guest::Function<0x001b4980, u32(u32, u32)> Pattern__reset_flags;
inline constexpr guest::Function<0x001b6618, u32(u32, u32, u32)> init_entry_table_001b6618;
inline constexpr guest::Function<0x001e017c, u32(u32)> Patterns8__construct;
inline constexpr guest::Function<0x0020bb24, u32(u32)> NumberPair__construct;
inline constexpr guest::Function<0x0024a548, u32(u32)> Record10__construct;
inline constexpr guest::Function<0x002bf574, u32(u32)> SaveBlock28f4__construct;
inline constexpr guest::Function<0x002d4594, u32(u32)> Block7f4__construct;
inline constexpr guest::Function<0x002eaf8c, u32(u32, u32)> ContestRanking__reset;
inline constexpr guest::Function<0x002ebce4, u32(u32, u32)> construct_table_object;
inline constexpr guest::Function<0x002ebe0c, u32(u32)> Records4__construct;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00302084, u32(u32, u32)> Town__reset_flags;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x005cdd70, u32(u32)> SlotList56__construct;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;
inline constexpr guest::Function<0x00613658, u32(u32)> TimePair__clear;
inline constexpr guest::Function<0x00613764, u32(u32)> Town__construct_map;
inline constexpr guest::Function<0x006bc5d8, u32(u32)> ClothingRecords__clear;
inline constexpr guest::Function<0x006f3d0c, u32(u32, u32)> TownFlags__reset;

u32 SaveData__construct_player(u32 save_data) {
    u32 r0_6 = VillagerPart__construct_and_clear((for_each_element(save_data + 0x20u, 0x6be060u, 0xa480u, 4u) + 0x20000u) + 0x9200u) + 0x22000u;
    u32 block7f4 = (SaveBlock28f4__construct((SlotList56__construct(r0_6 + 0xbe0u) + 0x4400u) + 0xbcu) + 0x2800u) + 0xf4u;
    Block7f4__construct(block7f4);
    u32 r0_20 = (Records4__construct((Town__construct_map(block7f4 + 0x850u) + 0x8000u) + 0x2480u) - 0x5c000u) - 0x1880u;
    gptr<Local_005cb49c_r4_1> r4_1 = gptr<Local_005cb49c_r4_1>(r0_20 + 0x6214fu);
    r4_1->word_0 = 0;
    r4_1->word_4 = 0;
    r4_1->word_8 = 0;
    r4_1->word_c = 0;
    r4_1->half_10 = 0;
    TownFlags__reset(r4_1.addr(), 0x6214fu);
    u32 r4_2 = (ItemSlots16__ItemSlots16((r4_1.addr() + 0xfff9deb1u) + 0x62162u, 0x62162u) + 0xfff9de9eu) + 0x621b2u;
    game_time_set(r4_2, 0x621b2u, ~0u, ~0x80000000u);
    u32 r0_25 = r4_2 + 8u;
    construct_empty_item(r0_25, guest::cpu()->r[1]);
    u32 r0_29 = (((r0_25 - 8u) + 0xfff9de4eu) + 0x62000u) + 0x1ccu;
    store_constants_1b1b2c(r0_29, 0xfff9de4eu);
    u32 r0_30 = r0_29 + 4u;
    game_time_set(r0_30, guest::cpu()->r[1], ~0u, ~0x80000000u);
    game_time_set(r0_30 + 8u, guest::cpu()->r[1], ~0u, ~0x80000000u);
    EncryptedInt__set(r0_30 + 0x18u, 0u);
    u32 r0_36 = for_each_element(for_each_element(r0_30 + 0x20u, 0x2fc20cu, 4u, 0x18u) + 0x7cu, 0x2fc20cu, 4u, 0xdu);
    EncryptedInt__set(r0_36 + 0x34u, 0u);
    u32 r0_42 = for_each_element((Patterns8__construct(r0_36 + 0x4cu) + 0x4000u) + 0x380u, 0x2fc20cu, 4u, 7u);
    EncryptedInt__set(r0_42 + 0x24u, 0u);
    u32 r4_3 = r0_42 + 0x2cu;
    EncryptedInt__set(r4_3 + 8u, 0u);
    u32 r0_48 = for_each_element(for_each_element(r4_3 + 0x12u, 0x2fc20cu, 4u, 0xbu) + 0x3au, 0x2fc20cu, 4u, 4u);
    u32 r0_52 = for_each_element(for_each_element(r0_48 + 0x14u, 0x1b4b7cu, 0x2eu, 4u) + 0xb8u, 0x613dc0u, 8u, 4u);
    EncryptedInt__set(r0_52 + 0x28u, 0u);
    u32 r0_56 = for_each_element((r0_52 + 0x20u) + 0x12u, 0x2fc20cu, 4u, 6u) + 0x1eu;
    u32 r0_60 = for_each_element(for_each_element(r0_56, 0x2fc20cu, 4u, 4u) + 0x10u, 0x2fc20cu, 4u, 4u) + 0x14u;
    u32 r0_64 = for_each_element(for_each_element(r0_60, 0x313414u, 8u, 4u) + 0x30u, 0x2fc20cu, 4u, 5u) + 0x14u;
    u32 r0_68 = for_each_element(for_each_element(r0_64, 0x2fc20cu, 4u, 8u) + 0x28u, 0x613dc0u, 8u, 8u) + 0x40u;
    u32 r0_71 = (for_each_element(r0_68, 0x1b4980u, 0x870u, 8u) + 0x4000u) + 0x380u;
    u32 r0_75 = for_each_element(for_each_element(r0_71, 0x613dc0u, 8u, 4u) + 0x22u, 0x2fc20cu, 4u, 3u) + 0x10u;
    u32 r0_79 = for_each_element(for_each_element(r0_75, 0x2fc20cu, 4u, 8u) + 0x2au, 0x2fc20cu, 4u, 0x12u) + 0x5au;
    u32 r0_81 = for_each_element(r0_79, 0x1df4c4u, 0x18u, 2u) + 0x40u;
    construct_empty_item(r0_81, guest::cpu()->r[1]);
    u32 r0_82 = r0_81 + 4u;
    construct_empty_item(r0_82, guest::cpu()->r[1]);
    u32 r0_83 = r0_82 + 4u;
    construct_empty_item(r0_83, guest::cpu()->r[1]);
    u32 r0_84 = r0_83 + 4u;
    construct_empty_item(r0_84, guest::cpu()->r[1]);
    u32 r4_5 = for_each_element(r0_84 + 0x1au, 0x2fc20cu, 4u, 4u) + 0x10u;
    EncryptedInt__set(r4_5, 0u);
    u32 r0_89 = for_each_element(r4_5 + 8u, 0x613dc0u, 8u, 0xeu) + 0x78u;
    construct_empty_item(r0_89, guest::cpu()->r[1]);
    u32 r0_93 = for_each_element(for_each_element(r0_89 + 4u, 0x2fc20cu, 4u, 2u) + 8u, 0x2fc20cu, 4u, 2u);
    gptr<Local_005cb49c_ea_1> ea_1 = gptr<Local_005cb49c_ea_1>(r0_93 + 0x18u);
    ea_1->half_0 = 0;
    ea_1->byte_2 = 0;
    ea_1->byte_3 = 0;
    gptr<Local_005cb49c_r0_95> r0_95 = gptr<Local_005cb49c_r0_95>((r0_93 - 0xc04u) + 0xc20u);
    r0_95->half_0 = 0;
    r0_95->byte_2 = 0;
    r0_95->byte_3 = 0;
    u32 r0_100 = for_each_element(((r0_93 + 0xfff953fcu) - 0x1d0u) - 0xfff951c8u, 0x301e94u, 4u, 0x43u) + 0x10cu;
    u32 r0_103 = for_each_element(for_each_element(r0_100, 0x301e94u, 4u, 0x48u) + 0x120u, 0x301e94u, 4u, 0x1eu);
    u32 r0_106 = for_each_element(r0_103 + 0x78u, 0x301e94u, 4u, 0x48u) + 0x120u;
    u32 r0_110 = for_each_element(for_each_element(r0_106, 0x301e94u, 4u, 0x19u) + 0x64u, 0x301e94u, 4u, 8u) + 0x134u;
    u32 clothing_records = (for_each_element(r0_110, 0x1b6028u, 0xb98u, 4u) - 0x400u) - 0x15cu;
    ClothingRecords__clear(clothing_records);
    u32 time_pair = ((clothing_records + 0xfff951c8u) + 0x6e000u) + 0x1f4u;
    TimePair__clear(time_pair);
    u32 r4_8 = ((time_pair - 0x6e000u) - 0x1f4u) + 0x6e212u;
    game_time_set(r4_8, 0x6e212u, ~0u, ~0x80000000u);
    u32 progress = ((((r4_8 + 0xfff91deeu) + 0x6e21au) + 0xfff91de6u) + 0x6e000u) + 0x224u;
    Progress__Progress(progress, 0xfff91de6u);
    u32 number_pair = progress + 0x10u;
    NumberPair__construct(number_pair);
    u32 r0_127 = ((construct_bbs_notices(number_pair + 4u) - 0x6e000u) - 0x238u) + 0x6fb4cu;
    game_time_set(r0_127, 0x6fb4cu, ~0u, ~0x80000000u);
    u32 r0_130 = ((r0_127 + 0xfff904b4u) + 0x6fb68u) + 2u;
    construct_empty_item(r0_130, 0x6fb68u);
    u32 r4_9 = r0_130 - 2u;
    game_time_set(r0_130 + 4u, guest::cpu()->r[1], ~0u, ~0x80000000u);
    game_time_set(r4_9 + 0xeu, guest::cpu()->r[1], ~0u, ~0x80000000u);
    game_time_set(r4_9 + 0x16u, guest::cpu()->r[1], ~0u, ~0x80000000u);
    u32 r0_137 = for_each_element(for_each_element(r4_9 + 0x1eu, 0x1b4b7cu, 0x2eu, 3u) + 0x120u, 0x2fc20cu, 4u, 3u);
    u32 r4_11 = (r0_137 - 0x100u) - 0x3eu;
    Town__reset_flags(r4_11, 1u);
    *gptr<u8>(r4_11) = 0;
    u32 r4_12 = ((r4_11 + 0xfff90498u) + 0x6fcb2u) + 1u;
    game_time_set(r4_12, 0x6fcb2u, ~0u, ~0x80000000u);
    u32 r4_13 = r4_12 + 8u;
    game_time_set(r4_13, guest::cpu()->r[1], ~0u, ~0x80000000u);
    u32 r4_14 = r4_13 - 9u;
    game_time_set(r4_14 + 0x11u, guest::cpu()->r[1], ~0u, ~0x80000000u);
    u32 r0_144 = for_each_element(for_each_element(r4_14 + 0x1au, 0x1b4b7cu, 0x2eu, 3u) + 0x120u, 0x2fc20cu, 4u, 3u);
    u32 contest_ranking = (r0_144 - 0x100u) - 0x3au;
    ContestRanking__reset(contest_ranking, 1u);
    *gptr<u8>(contest_ranking) = 0;
    u32 r0_148 = for_each_element((contest_ranking + 0xfff9034eu) - 0xfff90208u, 0x6f533cu, 0xcu, 4u) + 0xfff90208u;
    u32 r4_17 = r0_148 - 0xfff901d8u;
    game_time_set(r4_17, guest::cpu()->r[1], ~0u, ~0x80000000u);
    u32 r1_28 = construct_table_object((r4_17 + 0xfff901d8u) + 0x6fe36u, 0x6fe36u) + 0xfff901cau;
    *gptr<u16>((r1_28 + 0x70000u) + 0xe60u) = 0;
    u32 r4_18 = r1_28 + 0x70e62u;
    game_time_set(r4_18, r1_28, ~0u, ~0x80000000u);
    u32 r0_154 = r4_18 + 0xcu;
    gptr<Local_005cb49c_r4_19> r4_19 = gptr<Local_005cb49c_r4_19>(r0_154 - 0xcu);
    *gptr<u8>(r0_154 - 4u) = 0;
    clear_identity_with_flags(r0_154);
    r4_19->byte_9 = 0;
    u32 pattern = (r4_19.addr() + 0xfff8f19eu) + 0x70e9cu;
    r4_19->byte_a = 0;
    Pattern__reset_flags(pattern, 0x70e9cu);
    u32 r4_20 = init_entry_table_001b6618((pattern + 0xfff8f164u) + 0x7170cu, 0x7170cu, 0xfff8f164u) + 0xfff8e8f4u;
    game_time_set((r4_20 + 0x71000u) + 0x7e0u, 0xfff8e8f4u, ~0u, ~0x80000000u);
    gptr<Local_005cb49c_r0_162> r0_162 = gptr<Local_005cb49c_r0_162>(r4_20 + 0x717e8u);
    r0_162->half_0 = 0;
    r0_162->byte_2 = 0;
    r0_162->byte_3 = 0;
    u32 record10 = (r0_162.addr() + 0xfff8e818u) + 0x717ecu;
    Record10__construct(record10);
    guest::cpu()->r[1] = 0xfff8e814u;
    return record10 + 0xfff8e814u;
}

}  // namespace d_005cb49c
GUEST_EXPORT_FRAMED(0x005cb49c, d_005cb49c::SaveData__construct_player, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cbc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a 3-bit kind in bits 0-2 of +0x270.
namespace d_005cbc3c {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Letter, byte_270, 0x270);


void Letter__set_kind_bits(gptr<Letter> letter, u32 r1) {
    letter->byte_270 = u8(u32(letter->byte_270) & ~7u | r1 & 7u);
}

}  // namespace d_005cbc3c
GUEST_EXPORT(0x005cbc3c, d_005cbc3c::Letter__set_kind_bits);

// f_005cbc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a letter, notes its item (flag 0x20 for category 0x2a), and fills the sender from the current player with
// their header and footer (0x42 bytes each).
namespace d_005cbc54 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x33];  // (not used here)
    u8 byte_64;
    u8 unknown_65[0x209];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
};
GUEST_OFFSET(Letter, byte_30, 0x30);
GUEST_OFFSET(Letter, byte_64, 0x64);
GUEST_OFFSET(Letter, byte_26e, 0x26e);
GUEST_OFFSET(Letter, byte_26f, 0x26f);
GUEST_OFFSET(Letter, byte_270, 0x270);
GUEST_OFFSET(Letter, byte_271, 0x271);

struct __attribute__((packed)) Local_005cbc54_r1_8 {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(Local_005cbc54_r1_8, byte_c6, 0xc6);
GUEST_OFFSET(Local_005cbc54_r1_8, byte_c7, 0xc7);

inline constexpr guest::Function<0x001b23f0, u32(u32)> write_special_first_mail;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> Letter__clear;
inline constexpr guest::Function<0x002ffad8, u32(u32, u32)> item_offset_in_category;

void Letter__init_from_current_player(gptr<Letter> letter, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_6 = 0;
    Letter__clear(letter.addr(), r1, r2, guest::cpu()->r[3]);
    u32 category = Item__category(r1);
    u32 r1_2 = guest::cpu()->r[1];
    if (category == 0x2au) {
        r1_2 = u32(letter->byte_270) | 0x20u;
        letter->byte_270 = u8(r1_2);
    }
    u32 offset = item_offset_in_category(r1, r1_2);
    u32 r1_3 = guest::cpu()->r[1];
    if (offset <= 0xffu) {
        letter->byte_26f = u8(offset);
    }
    if ((offset >= 0xffu) && offset != 0xffu) {
        r1_3 = 0u;
        letter->byte_26f = u8(r1_3);
    }
    letter->byte_271 = 0;
    u32 player = get_current_player(0u, r1_3);
    if (player != 0) {
        letter->byte_64 = 1;
        copy_46_bytes(letter.addr() + 0x34u, player + 0x55a6u, 1u);
        letter->byte_270 = u8(u32(letter->byte_270) & ~7u | 3u);
        u32 word_fix_9u = player + 0x8908u;
        if (*gptr<u8>(word_fix_9u + 0xc7u) >= 0x20u) {
            write_special_first_mail(word_fix_9u);
        }
        copy_bytes_at_any_alignment(letter.addr() + 0x22cu, word_fix_9u + 0x84u, 0x42u, guest::cpu()->r[3]);
        gptr<Local_005cbc54_r1_8> r1_8 = gptr<Local_005cbc54_r1_8>(word_fix_9u);
        if (letter->byte_30 == 6u) {
            r0_6 = r1_8->byte_c7;
            r1_8 = gptr<Local_005cbc54_r1_8>(word_fix_9u + 0x42u);
        } else {
            r0_6 = r1_8->byte_c6;
        }
        letter->byte_26e = u8(r0_6);
        frame.release();
        copy_bytes_at_any_alignment(letter.addr() + 0x68u, r1_8.addr(), 0x42u, guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_005cbc54
GUEST_EXPORT(0x005cbc54, d_005cbc54::Letter__init_from_current_player);

// f_005cbd34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the recipient from the villager record and copies the current player's letter header (0x42 bytes).
namespace d_005cbd34 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x23d];  // (not used here)
    u8 byte_26e;
};
GUEST_OFFSET(Letter, byte_30, 0x30);
GUEST_OFFSET(Letter, byte_26e, 0x26e);

struct __attribute__((packed)) Local_005cbd34_r1_2 {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(Local_005cbd34_r1_2, byte_c6, 0xc6);
GUEST_OFFSET(Local_005cbd34_r1_2, byte_c7, 0xc7);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> villager_record_at;
inline constexpr guest::Function<0x00301e20, u32(u32)> is_villager_record;
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32)> copy_48_bytes;

void Letter__init_for_villager(gptr<Letter> letter, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_5 = 0;
    u32 save_data = get_save_data(letter.addr(), r1, r2, guest::cpu()->r[3]);
    u32 villager_record = villager_record_at(save_data + 0x292a4u, r1);
    u32 r5_1 = villager_record;
    if (villager_record != 0) {
        villager_record = is_villager_record(villager_record);
        if (villager_record != 0) {
            letter->byte_30 = 2;
            villager_record = copy_48_bytes(letter.addr(), r5_1, 2u);
        }
    }
    u32 player = get_current_player(villager_record);
    if (player != 0) {
        gptr<Local_005cbd34_r1_2> r1_2 = gptr<Local_005cbd34_r1_2>(player + 0x8908u);
        if (letter->byte_30 == 6u) {
            r0_5 = r1_2->byte_c7;
            r1_2 = gptr<Local_005cbd34_r1_2>(r1_2.addr() + 0x42u);
        } else {
            r0_5 = r1_2->byte_c6;
        }
        letter->byte_26e = u8(r0_5);
        frame.release();
        copy_bytes_at_any_alignment(letter.addr() + 0x68u, r1_2.addr(), 0x42u);
        return;
    }
}

}  // namespace d_005cbd34
GUEST_EXPORT(0x005cbd34, d_005cbd34::Letter__init_for_villager);

// f_005cbdc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Addresses a letter from the current player to themself (kind 6) with their own header.
namespace d_005cbdc4 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x23d];  // (not used here)
    u8 byte_26e;
};
GUEST_OFFSET(Letter, byte_30, 0x30);
GUEST_OFFSET(Letter, byte_26e, 0x26e);

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;

void Letter__init_to_self(gptr<Letter> letter, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 player = get_current_player(letter.addr(), r1, r2, guest::cpu()->r[3]);
    if (player != 0) {
        letter->byte_30 = 1;
        copy_46_bytes(letter.addr(), player + 0x55a6u, 1u);
        letter->byte_30 = 6;
        letter->byte_26e = *gptr<u8>(player + 0x89cfu);
        frame.release();
        copy_bytes_at_any_alignment(letter.addr() + 0x68u, player + 0x894au, 0x42u);
        return;
    }
}

}  // namespace d_005cbdc4
GUEST_EXPORT(0x005cbdc4, d_005cbdc4::Letter__init_to_self);

// f_005cbe34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the sender to a villager (kind 2) by copying its 48-byte identity.
namespace d_005cbe34 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x64];  // (not used here)
    u8 byte_64;
};
GUEST_OFFSET(Letter, byte_64, 0x64);

inline constexpr guest::Function<0x00613de4, u32(u32, u32)> copy_48_bytes;

void Letter__set_sender_villager(gptr<Letter> letter) {
    letter->byte_64 = 2;
    copy_48_bytes(letter.addr() + 0x34u, guest::cpu()->r[1]);
}

}  // namespace d_005cbe34
GUEST_EXPORT(0x005cbe34, d_005cbe34::Letter__set_sender_villager);

// f_005cbe84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Changes the letter's kind bits from 1 to 2.
namespace d_005cbe84 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Letter, byte_270, 0x270);


void Letter__mark_kind_1_as_2(gptr<Letter> letter) {
    u32 r1_1 = letter->byte_270;
    if ((r1_1 & 7u) != 1u) {
        return;
    }
    letter->byte_270 = u8(r1_1 & ~7u | 2u);
}

}  // namespace d_005cbe84
GUEST_EXPORT(0x005cbe84, d_005cbe84::Letter__mark_kind_1_as_2);

// f_005cbee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Addresses a letter to the player of a slot and, unless `keep_header`, copies the current player's header.
namespace d_005cbee4 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x23d];  // (not used here)
    u8 byte_26e;
};
GUEST_OFFSET(Letter, byte_30, 0x30);
GUEST_OFFSET(Letter, byte_26e, 0x26e);

struct __attribute__((packed)) Local_005cbee4_r1_2 {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(Local_005cbee4_r1_2, byte_c6, 0xc6);
GUEST_OFFSET(Local_005cbee4_r1_2, byte_c7, 0xc7);

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;
inline constexpr guest::Function<0x00303770, u32(u32, u32, u32, u32)> player_record_for_slot;

u32 Letter__init_for_player_slot(gptr<Letter> letter, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_4 = 0;
    u32 player_record = player_record_for_slot(r1 & 0xffu, r1, r2, guest::cpu()->r[3]);
    if (player_record != 0) {
        u32 r0_3 = player_record + 0x55a6u;
        player_record = PersonalId__is_set(r0_3);
        if (player_record != 0) {
            letter->byte_30 = 1;
            player_record = copy_46_bytes(letter.addr(), r0_3, 1u);
        }
    }
    if (r2 == 0) {
        player_record = get_current_player(player_record);
        if (player_record != 0) {
            gptr<Local_005cbee4_r1_2> r1_2 = gptr<Local_005cbee4_r1_2>(player_record + 0x8908u);
            if (letter->byte_30 == 6u) {
                r0_4 = r1_2->byte_c7;
                r1_2 = gptr<Local_005cbee4_r1_2>(r1_2.addr() + 0x42u);
            } else {
                r0_4 = r1_2->byte_c6;
            }
            letter->byte_26e = u8(r0_4);
            frame.release();
            return copy_bytes_at_any_alignment(letter.addr() + 0x68u, r1_2.addr(), 0x42u);
        }
    }
    return player_record;
}

}  // namespace d_005cbee4
GUEST_EXPORT(0x005cbee4, d_005cbee4::Letter__init_for_player_slot);

// f_005cbf78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a villager's name (arg 2) into a nine-character word and passes it to a message target (arg 1).
namespace d_005cbf78 {

inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056d828, u32(u32, u32, u32, u32)> Message__set_villager_word;
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32)> call_target_with_two_0x8c_;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) ScriptWordFix9uWordFix005cbf78Frame {
    u32 word_0;
    u8 unknown_4[0x28];  // (not read or written by name)
};
GUEST_OFFSET(ScriptWordFix9uWordFix005cbf78Frame, word_0, 0x0);
GUEST_SIZE(ScriptWordFix9uWordFix005cbf78Frame, 0x2c);

void Message__send_villager_word(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ScriptWordFix9uWordFix005cbf78Frame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r7 = r1;
    u32 r6 = r2;
    u32 r0_1 = frame.at(0).addr();
    script__construct_word_ptr(r0_1, frame.at(0x18).addr(), 9u, r3);
    u32 r5 = vtable_script__WordFix_9u__rec;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    u32 message = r0_2 - 0xcu;
    clear_aligned(r0_2 + 0xcu, 0x12u);
    r1 = 0x8906ecu;
    u32 r0 = message + 0x18u;
    *gptr<u16>(message + 0x18u) = *gptr<u16>(r1);
    r2 = 4u;
    do {
        u32 r3_3 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    Message__set_villager_word(message, r6, r2, r3_4);
    call_target_with_two_0x8c_(r7, frame.at(0).addr(), 0u);
    frame->word_0 = r5;
}

}  // namespace d_005cbf78
GUEST_EXPORT_FRAMED(0x005cbf78, d_005cbf78::Message__send_villager_word, 0x40f0);  // pushes {message, r5, r6, r7, lr} first, as the original

// f_005cc454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the recipient kind (+0x30) to its read form: 1 or 3 -> 3, 2 or 4 -> 4, anything else -> 5.
namespace d_005cc454 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Letter, byte_30, 0x30);


void Letter__mark_recipient_read(gptr<Letter> letter) {
    u32 r1_1 = letter->byte_30;
    if (r1_1 == 1u) {
        letter->byte_30 = 3;
        guest::cpu()->r[1] = 3u;
        return;
    }
    if (r1_1 == 2u) {
        letter->byte_30 = 4;
        guest::cpu()->r[1] = 4u;
        return;
    }
    if (r1_1 == 3u) {
        letter->byte_30 = 3;
        guest::cpu()->r[1] = 3u;
        return;
    }
    if (r1_1 != 4u) {
        letter->byte_30 = 5;
        guest::cpu()->r[1] = 5u;
        return;
    }
    letter->byte_30 = 4;
    guest::cpu()->r[1] = 4u;
}

}  // namespace d_005cc454
GUEST_EXPORT(0x005cc454, d_005cc454::Letter__mark_recipient_read);

// f_005cc524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a letter field by field (identities, header, body, footer, flags, item and stamp).
namespace d_005cc524 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Letter, byte_26e, 0x26e);
GUEST_OFFSET(Letter, byte_26f, 0x26f);
GUEST_OFFSET(Letter, byte_270, 0x270);
GUEST_OFFSET(Letter, byte_271, 0x271);
GUEST_OFFSET(Letter, byte_272, 0x272);

struct __attribute__((packed)) LetterCopyArg1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(LetterCopyArg1, byte_26e, 0x26e);
GUEST_OFFSET(LetterCopyArg1, byte_26f, 0x26f);
GUEST_OFFSET(LetterCopyArg1, byte_270, 0x270);
GUEST_OFFSET(LetterCopyArg1, byte_271, 0x271);
GUEST_OFFSET(LetterCopyArg1, byte_272, 0x272);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;

void Letter__copy(gptr<Letter> letter, gptr<LetterCopyArg1> arg1) {
    copy_aligned_bytes(letter.addr(), arg1.addr(), 0x31u, guest::cpu()->r[3]);
    copy_aligned_bytes(letter.addr() + 0x34u, arg1.addr() + 0x34u, 0x31u, guest::cpu()->r[3]);
    copy_aligned_bytes(letter.addr() + 0x68u, arg1.addr() + 0x68u, 0x42u, guest::cpu()->r[3]);
    copy_bytes_at_any_alignment(letter.addr() + 0xaau, arg1.addr() + 0xaau, 0x182u);
    copy_aligned_bytes(letter.addr() + 0x22cu, arg1.addr() + 0x22cu, 0x42u, guest::cpu()->r[3]);
    letter->byte_26e = arg1->byte_26e;
    letter->byte_26f = arg1->byte_26f;
    letter->byte_270 = arg1->byte_270;
    letter->byte_271 = arg1->byte_271;
    letter->byte_272 = arg1->byte_272;
    Item__copy(letter.addr() + 0x274u, arg1.addr() + 0x274u);
    copy_8_bytes_returning_destination(letter.addr() + 0x278u, arg1.addr() + 0x278u);
}

}  // namespace d_005cc524
GUEST_EXPORT_FRAMED(0x005cc524, d_005cc524::Letter__copy, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cc82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes through 0027d310 and sets +4 to -1.
namespace d_005cc82c {

struct __attribute__((packed)) Init27d310AndClearIdArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Init27d310AndClearIdArg0, word_4, 0x4);

inline constexpr guest::Function<0x0027d310, u32(u32, u32, u32, u32)> randomize_town_seeds;

u32 init_27d310_and_clear_id(gptr<Init27d310AndClearIdArg0> arg0) {
    randomize_town_seeds(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = ~0u;
    arg0->word_4 = r0_1;
    return r0_1;
}

}  // namespace d_005cc82c
GUEST_EXPORT_FRAMED(0x005cc82c, d_005cc82c::init_27d310_and_clear_id, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cc844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a new game: initializes the town (mode, speed, defaults), its parts, the town tune and the records, and
// resets the event state.
namespace d_005cc844 {

struct __attribute__((packed)) Local_005cc844_r4_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_005cc844_r4_1, byte_0, 0x0);

inline constexpr u32 new_game_state_address = 0x0094ddc4u;
inline constexpr u32 global_0095c350_address = 0x0095c350u;
inline guest::global<u32, 0x0088f2f0> global_0088f2f0;
inline guest::global<u32, 0x0088f2f4> global_0088f2f4;
inline guest::global<u32, 0x0088f2f8> global_0088f2f8;
inline guest::global<u32, 0x0088f2fc> global_0088f2fc;
inline guest::global<u32, 0x0088f300> global_0088f300;
inline guest::global<u8, 0x0094ddc4> new_game_state;
inline guest::global<u8, 0x0094ddc5> global_0094ddc5;
inline guest::global<u8, 0x0094ddc6> global_0094ddc6;
inline constexpr guest::Function<0x0010f16d, u32(u32)> VillagerPart__on_load;
inline constexpr guest::Function<0x00116cf5, u32(u32)> reset_daily_player_records;
inline constexpr guest::Function<0x001e02f0, u32(u32)> MailData__clear_header;
inline constexpr guest::Function<0x0020d8a4, u32(u32)> TimeLimit__check_date;
inline constexpr guest::Function<0x002267e4, u32(u32)> FieldItemFx__reset;
inline constexpr guest::Function<0x00241d34, u32(u32)> GridLayers__first_used;
inline constexpr guest::Function<0x0027c2c8, u32(u32, u32)> TownMap__load_templates;
inline constexpr guest::Function<0x0027d310, u32(u32, u32, u32, u32)> randomize_town_seeds;
inline constexpr guest::Function<0x00284f90, u32(u32)> set_default_remembered_numbers;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x00300634, u32(u32, u32)> store_mode_bytes;
inline constexpr guest::Function<0x0030444c, u32(u32)> reset_record_tables_a82000;
inline constexpr guest::Function<0x0030ca59, u32(u32, u32, u32, u32)> Schedule__update_all;
inline constexpr guest::Function<0x0051cd48, u32(u32)> refresh_town_villager_records;
inline constexpr guest::Function<0x00582464, u32(u32)> reset_bit_table_entries;
inline constexpr guest::Function<0x0058d52c, u32(u32)> load_town_tune;
inline constexpr guest::Function<0x0058ecec, u32(u32)> set_byte_9524d8_to_1;
inline constexpr guest::Function<0x005bfbd4, u32(u32)> reset_player_slots_2;
inline constexpr guest::Function<0x005cb1dc, u32(u32)> Town__init_new;
inline constexpr guest::Function<0x005cd05c, u32(u32)> reset_town_flags_and_mark_player;
inline constexpr guest::Function<0x005d05b0, u32(u32)> NetStore__open_once;
inline constexpr guest::Function<0x005d46dc, u32(u32, u32)> value_for_mode;
inline constexpr guest::Function<0x005d4788, u32(u32, u32, u32)> speed_for_index;
inline constexpr guest::Function<0x006a6408, u32(u32)> MapTable__build_maps;
inline constexpr guest::Function<0x006bbeb8, u32(u32, u32, u32)> script__WordPtrSv__WordPtrSv_006bbeb8;

struct __attribute__((packed)) StartNewGameFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0xc];  // (not read or written by name)
};
GUEST_OFFSET(StartNewGameFrame, word_0, 0x0);
GUEST_OFFSET(StartNewGameFrame, word_4, 0x4);
GUEST_OFFSET(StartNewGameFrame, word_8, 0x8);
GUEST_OFFSET(StartNewGameFrame, word_c, 0xc);
GUEST_OFFSET(StartNewGameFrame, word_10, 0x10);
GUEST_SIZE(StartNewGameFrame, 0x20);

u32 start_new_game(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StartNewGameFrame> frame;  // the original's stack frame
    u32 r0_1 = randomize_town_seeds(r0, r1, r2, r3);
    u32 data_base = get_data_base(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 map_table = TownMap__load_templates(data_base + 0x53400u, 0u);
    reset_player_slots_2(GridLayers__first_used(MapTable__build_maps(map_table)));
    u32 r0_7 = reset_record_tables_a82000(0xa82000u);
    u32 data_base_2 = get_data_base(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_005cc844_r4_1> r4_1 = gptr<Local_005cc844_r4_1>(data_base_2 + 0x6214eu);
    u32 value = value_for_mode(data_base_2, 0x6214eu);
    u32 r2_9 = value & 0xfu;
    u32 r1_7 = u32(r4_1->byte_0) & ~0xfu | r2_9;
    r4_1->byte_0 = u8(r1_7);
    u32 speed = speed_for_index(value, r1_7, r2_9);
    r4_1->byte_0 = u8(0xf0u & speed << 4 | u32(r4_1->byte_0) & ~0xf0u);
    u32 r0_12 = *global_0088f300;
    u32 r1_8 = *global_0088f2f0;
    u32 r2_10 = *global_0088f2f4;
    u32 r3_10 = *global_0088f2f8;
    u32 r12_1 = *global_0088f2fc;
    frame->word_10 = r0_12;
    frame->word_0 = r1_8;
    frame->word_4 = r2_10;
    frame->word_8 = r3_10;
    frame->word_c = r12_1;
    u32 data_base_3 = get_data_base(r0_12, r1_8, r2_10, r3_10);
    *gptr<u8>(data_base_3 + 6u) = 0;
    u32 value_2 = value_for_mode(data_base_3, guest::cpu()->r[1]);
    u32 data_base_4 = get_data_base(value_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_17 = script__WordPtrSv__WordPtrSv_006bbeb8(data_base_4 + 0x62138u, frame.at(0).addr(), value_2);
    u32 data_base_5 = get_data_base(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = TimeLimit__check_date(data_base_5 + 0x62120u);
    u32 data_base_6 = get_data_base(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 mail_data = data_block_71900(Town__init_new(data_base_6));
    u32 r0_29 = FieldItemFx__reset(load_town_tune(set_default_remembered_numbers(NetStore__open_once(refresh_town_villager_records(MailData__clear_header(mail_data))))));
    reset_bit_table_entries(r0_29);
    store_mode_bytes(1u, 1u);
    *new_game_state = 4;
    *global_0094ddc5 = 0;
    *global_0094ddc6 = 0;
    u32 data_base_7 = get_data_base(new_game_state_address, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 records = slot_records_of(data_base_7);
    reset_daily_player_records(set_byte_9524d8_to_1(VillagerPart__on_load(records + 4u)));
    u32 r0_35 = reset_town_flags_and_mark_player(global_0095c350_address);
    u32 data_base_8 = get_data_base(r0_35, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 records_2 = slot_records_of(data_base_8);
    frame.release();
    return Schedule__update_all(records_2 + 4u, 0u, 0u, guest::cpu()->r[3]);
}

}  // namespace d_005cc844
GUEST_EXPORT(0x005cc844, d_005cc844::start_new_game);

// f_005ccfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a save process (a temporary one) and clears the saved word it reports into (arg 0).
namespace d_005ccfc4 {

inline constexpr u32 vtable_SaveProcess = 0x008ebc9cu;
inline constexpr guest::Function<0x001d3720, u32(u32, u32, u32, u32)> CameraController__reset;

struct __attribute__((packed)) SaveProcessSaveProcessFrame {
    u32 object_0_vtable;
    u32 save_process;
};
GUEST_OFFSET(SaveProcessSaveProcessFrame, object_0_vtable, 0x0);
GUEST_OFFSET(SaveProcessSaveProcessFrame, save_process, 0x4);
GUEST_SIZE(SaveProcessSaveProcessFrame, 0x8);

u32 SaveProcess__SaveProcess(u32 save_process, u32 r1) {
    guest::StackFrameOf<SaveProcessSaveProcessFrame> frame;  // the original's stack frame
    frame->save_process = save_process;
    frame->object_0_vtable = vtable_SaveProcess;
    CameraController__reset(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = frame->save_process;
    frame->object_0_vtable = vtable_SaveProcess;
    if (r0_2 == 0) {
        return 1u;
    }
    *gptr<u32>(r0_2) = 0;
    guest::cpu()->r[1] = r0_2;
    return 1u;
}

}  // namespace d_005ccfc4
GUEST_EXPORT_FRAMED(0x005ccfc4, d_005ccfc4::SaveProcess__SaveProcess, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cd05c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the town flags (+0x621d0) and the slot records, and sets bit 1 of +0x570a of the current player.
namespace d_005cd05c {

struct __attribute__((packed)) Local_005cd05c_r0_9 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_005cd05c_r0_9, byte_a, 0xa);

inline constexpr guest::Function<0x0010e9a9, u32(u32)> VillagerPart__reset_daily_ratings;
inline constexpr guest::Function<0x00114489, u32(u32, u32)> Town__update_dated_event;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;

u32 reset_town_flags_and_mark_player(u32 r0, u32 r1) {
    u32 data_base = get_data_base(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = Town__update_dated_event(data_base + 0x621d0u, 0u);
    u32 data_base_2 = get_data_base(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 records = slot_records_of(data_base_2);
    u32 player = get_current_player(VillagerPart__reset_daily_ratings(records + 4u));
    if (player == 0) {
        return player;
    }
    gptr<Local_005cd05c_r0_9> r0_9 = gptr<Local_005cd05c_r0_9>(player + 0x5700u);
    u32 r1_6 = u32(r0_9->byte_a) | 2u;
    r0_9->byte_a = u8(r1_6);
    guest::cpu()->r[1] = r1_6;
    return r0_9.addr();
}

}  // namespace d_005cd05c
GUEST_EXPORT_FRAMED(0x005cd05c, d_005cd05c::reset_town_flags_and_mark_player, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cd0a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks 0x95c33d, prepares the object at 0x95c33c and runs 005b4d7c for scene 0x61.
namespace d_005cd0a4 {

inline constexpr u32 scene_61_state_address = 0x0095c33cu;
inline guest::global<u8, 0x0095c33d> global_0095c33d;
inline constexpr guest::Function<0x0028ff00, u32(u32, u32, u32, u32)> TourState__reset_entry;
inline constexpr guest::Function<0x00304c68, u32(u32, u32, u32, u32)> call_5b4d7c_on_ac1948;

struct __attribute__((packed)) StartScene61With95c33cFrame {
    u32 word_0;
};
GUEST_OFFSET(StartScene61With95c33cFrame, word_0, 0x0);
GUEST_SIZE(StartScene61With95c33cFrame, 0x4);

u32 start_scene_61_with_95c33c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StartScene61With95c33cFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    *global_0095c33d = 1;
    TourState__reset_entry(scene_61_state_address, r1, r2, r3);
    frame->word_0 = 1;
    return call_5b4d7c_on_ac1948(0x61u, 0u, 0u, 1u);
}

}  // namespace d_005cd0a4
GUEST_EXPORT_FRAMED(0x005cd0a4, d_005cd0a4::start_scene_61_with_95c33c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005cd270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks the held node (unless 004dbc3c keeps it) and resets the request record (kind 0x800000, id -1).
namespace d_005cd270 {

struct __attribute__((packed)) ResetRequestRecordArg0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(ResetRequestRecordArg0, word_0, 0x0);
GUEST_OFFSET(ResetRequestRecordArg0, word_14, 0x14);
GUEST_OFFSET(ResetRequestRecordArg0, word_18, 0x18);
GUEST_OFFSET(ResetRequestRecordArg0, word_1c, 0x1c);
GUEST_OFFSET(ResetRequestRecordArg0, word_20, 0x20);
GUEST_OFFSET(ResetRequestRecordArg0, word_24, 0x24);
GUEST_OFFSET(ResetRequestRecordArg0, word_28, 0x28);
GUEST_OFFSET(ResetRequestRecordArg0, word_2c, 0x2c);
GUEST_OFFSET(ResetRequestRecordArg0, byte_30, 0x30);
GUEST_OFFSET(ResetRequestRecordArg0, word_34, 0x34);

struct __attribute__((packed)) Local_005cd270_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005cd270_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005cd270_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005cd270_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_005cd270_r0_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_005cd270_r0_3, word_4, 0x4);

inline constexpr u32 request_record_head_address = 0x00ad5638u;
inline guest::global<u32, 0x00ad5638> request_record_head;
inline constexpr guest::Function<0x004dbc3c, u32(u32, u32, u32, u32)> TourDesk__is_waiting;

u32 reset_request_record(gptr<ResetRequestRecordArg0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        if (TourDesk__is_waiting(r0_1, r1, r2, r3) == 0) {
            gptr<Local_005cd270_r0_3> r0_3 = gptr<Local_005cd270_r0_3>(arg0->word_0);
            u32 r1_1 = r0_3->word_4;
            if (r1_1 != 0) {
                *gptr<u32>(r1_1) = 0;
            }
            *request_record_head = r0_3.addr();
            r0_3->word_4 = 0xad5638;
            arg0->word_0 = 0;
        }
    }
    gptr<Local_005cd270_ea_1> ea_1 = gptr<Local_005cd270_ea_1>(arg0.addr() + 8u);
    ea_1->word_0 = 0x800000;
    ea_1->word_4 = 0;
    ea_1->word_8 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    arg0->byte_30 = 0;
    arg0->word_34 = ~0u;
    guest::cpu()->r[1] = 0u;
    return 0x800000u;
}

}  // namespace d_005cd270
GUEST_EXPORT_FRAMED(0x005cd270, d_005cd270::reset_request_record, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cd2f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at 0x95c348; when it is 0, resets through 001b979c and clears 0x95c33e.
namespace d_005cd2f4 {

inline constexpr u32 scene_61_state_address = 0x0095c33cu;
inline constexpr u32 word_95c348_address = 0x0095c348u;
inline guest::global<u8, 0x0095c33e> global_0095c33e;
inline guest::global<u32, 0x0095c348> word_95c348;
inline constexpr guest::Function<0x001b979c, u32(u32)> InputLock__release;

u32 word_95c348_or_reset() {
    u32 r0_1 = *word_95c348;
    if (r0_1 != 0) {
        return r0_1;
    }
    InputLock__release(r0_1);
    *global_0095c33e = 0;
    return 0u;
}

}  // namespace d_005cd2f4
GUEST_EXPORT_FRAMED(0x005cd2f4, d_005cd2f4::word_95c348_or_reset, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cd754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears every part of the town flags block (+0x621d0 of the town data).
namespace d_005cd754 {

struct __attribute__((packed)) TownFlags {
    u8 unknown_0[0x8c20];  // (not used here)
    u16 half_8c20;
    u8 byte_8c22;
    u8 byte_8c23;
    u32 word_8c24;
    u32 word_8c28;
    u32 word_8c2c;
    u32 word_8c30;
    u32 word_8c34;
    u32 word_8c38;
    u32 word_8c3c;
    u32 word_8c40;
    u32 word_8c44;
    u32 word_8c48;
    u32 word_8c4c;
    u32 word_8c50;
    u32 word_8c54;
    u32 word_8c58;
    u32 word_8c5c;
    u32 word_8c60;
    u32 word_8c64;
};
GUEST_OFFSET(TownFlags, half_8c20, 0x8c20);
GUEST_OFFSET(TownFlags, byte_8c22, 0x8c22);
GUEST_OFFSET(TownFlags, byte_8c23, 0x8c23);
GUEST_OFFSET(TownFlags, word_8c24, 0x8c24);
GUEST_OFFSET(TownFlags, word_8c28, 0x8c28);
GUEST_OFFSET(TownFlags, word_8c2c, 0x8c2c);
GUEST_OFFSET(TownFlags, word_8c30, 0x8c30);
GUEST_OFFSET(TownFlags, word_8c34, 0x8c34);
GUEST_OFFSET(TownFlags, word_8c38, 0x8c38);
GUEST_OFFSET(TownFlags, word_8c3c, 0x8c3c);
GUEST_OFFSET(TownFlags, word_8c40, 0x8c40);
GUEST_OFFSET(TownFlags, word_8c44, 0x8c44);
GUEST_OFFSET(TownFlags, word_8c48, 0x8c48);
GUEST_OFFSET(TownFlags, word_8c4c, 0x8c4c);
GUEST_OFFSET(TownFlags, word_8c50, 0x8c50);
GUEST_OFFSET(TownFlags, word_8c54, 0x8c54);
GUEST_OFFSET(TownFlags, word_8c58, 0x8c58);
GUEST_OFFSET(TownFlags, word_8c5c, 0x8c5c);
GUEST_OFFSET(TownFlags, word_8c60, 0x8c60);
GUEST_OFFSET(TownFlags, word_8c64, 0x8c64);

inline constexpr guest::Function<0x00106bb1, u32(u32)> TwoItemRecord__clear;
inline constexpr guest::Function<0x00108449, u32(u32)> clear_flag_and_record_8b52;
inline constexpr guest::Function<0x00108a9d, u32(u32)> ItemRecord18__clear;
inline constexpr guest::Function<0x00108b59, u32(u32)> RewardEntry__clear;
inline constexpr guest::Function<0x00109615, u32(u32, u32, u32, u32)> TownRecord9c__clear;
inline constexpr guest::Function<0x00109ff9, u32(u32)> TownRecord43cc__clear;
inline constexpr guest::Function<0x0010a401, u32(u32)> RewardRecord__clear;
inline constexpr guest::Function<0x0010a4a9, u32(u32)> clear_record_8b54;
inline constexpr guest::Function<0x0010a801, u32(u32)> VisitorShop__clear;
inline constexpr guest::Function<0x0010ab2d, u32(u32)> TailorShop__clear;
inline constexpr guest::Function<0x0010af61, u32(u32)> Record12__clear;
inline constexpr guest::Function<0x0010b1e5, u32(u32)> ThreeItemRecord__clear;
inline constexpr guest::Function<0x0010b391, u32(u32)> NoticeRenewalState__clear;
inline constexpr guest::Function<0x0010b43d, u32(u32)> clear_record_8b60;
inline constexpr guest::Function<0x0010b6d1, u32(u32)> clear_28_bytes;
inline constexpr guest::Function<0x0020d06c, u32(u32)> store_constants_20d06c_0020d06c;
inline constexpr guest::Function<0x0020d328, u32(u32)> ItemPairs4__clear;
inline constexpr guest::Function<0x002a7ad0, u32(u32)> clear_counter_block;
inline constexpr guest::Function<0x003142b8, u32(u32)> VillagerMood__reset;

void TownFlags__clear(gptr<TownFlags> town_flags, u32 r1) {
    TownRecord9c__clear(town_flags.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    VillagerMood__reset(town_flags.addr() + 0x8b78u);
    TownRecord43cc__clear(town_flags.addr() + 0x9cu);
    clear_counter_block(town_flags.addr() + 0x4468u);
    NoticeRenewalState__clear(town_flags.addr() + 0x4494u);
    VisitorShop__clear(town_flags.addr() + 0x44e0u);
    RewardEntry__clear(town_flags.addr() + 0x45ccu);
    ItemPairs4__clear(town_flags.addr() + 0x45fcu);
    TailorShop__clear(town_flags.addr() + 0x4650u);
    Record12__clear(town_flags.addr() + 0x8a6cu);
    clear_28_bytes(town_flags.addr() + 0x8a7eu);
    ItemRecord18__clear(town_flags.addr() + 0x8aa6u);
    RewardRecord__clear(town_flags.addr() + 0x8b32u);
    clear_flag_and_record_8b52(town_flags.addr() + 0x8b52u);
    clear_record_8b54(town_flags.addr() + 0x8b54u);
    clear_record_8b60(town_flags.addr() + 0x8b60u);
    store_constants_20d06c_0020d06c(town_flags.addr() + 0x8b68u);
    ThreeItemRecord__clear(town_flags.addr() + 0x8bf8u);
    TwoItemRecord__clear(town_flags.addr() + 0x8c04u);
    town_flags->half_8c20 = 0;
    town_flags->byte_8c22 = 0;
    town_flags->byte_8c23 = 0;
    town_flags->word_8c24 = 0;
    town_flags->word_8c28 = 0;
    town_flags->word_8c2c = 0;
    town_flags->word_8c30 = 0;
    town_flags->word_8c34 = 0;
    town_flags->word_8c38 = 0;
    town_flags->word_8c3c = 0;
    town_flags->word_8c40 = 0;
    town_flags->word_8c44 = 0;
    town_flags->word_8c48 = 0;
    town_flags->word_8c4c = 0;
    town_flags->word_8c50 = 0;
    town_flags->word_8c54 = 0;
    town_flags->word_8c58 = 0;
    town_flags->word_8c5c = 0;
    town_flags->word_8c60 = 0;
    town_flags->word_8c64 = 0;
    guest::cpu()->r[1] = town_flags.addr() + 0x8c00u;
}

}  // namespace d_005cd754
GUEST_EXPORT_FRAMED(0x005cd754, d_005cd754::TownFlags__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cd8a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the save's number pairs below the id range.
namespace d_005cd8a0 {

struct __attribute__((packed)) Local_005cd8a0_ea_1 {
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
GUEST_OFFSET(Local_005cd8a0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005cd8a0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005cd8a0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005cd8a0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_005cd8a0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_005cd8a0_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_005cd8a0_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_005cd8a0_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_005cd8a0_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_005cd8a0_ea_1, word_24, 0x24);

struct __attribute__((packed)) Local_005cd8a0_ea_4 {
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
GUEST_OFFSET(Local_005cd8a0_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_005cd8a0_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_005cd8a0_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_005cd8a0_ea_4, word_c, 0xc);
GUEST_OFFSET(Local_005cd8a0_ea_4, word_10, 0x10);
GUEST_OFFSET(Local_005cd8a0_ea_4, word_14, 0x14);
GUEST_OFFSET(Local_005cd8a0_ea_4, word_18, 0x18);
GUEST_OFFSET(Local_005cd8a0_ea_4, word_1c, 0x1c);
GUEST_OFFSET(Local_005cd8a0_ea_4, word_24, 0x24);

struct __attribute__((packed)) Local_005cd8a0_ea_5 {
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
GUEST_OFFSET(Local_005cd8a0_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_005cd8a0_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_005cd8a0_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_005cd8a0_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_005cd8a0_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_005cd8a0_ea_5, word_14, 0x14);
GUEST_OFFSET(Local_005cd8a0_ea_5, word_18, 0x18);
GUEST_OFFSET(Local_005cd8a0_ea_5, word_1c, 0x1c);
GUEST_OFFSET(Local_005cd8a0_ea_5, word_24, 0x24);

struct __attribute__((packed)) Local_005cd8a0_ea_6 {
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
GUEST_OFFSET(Local_005cd8a0_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_005cd8a0_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_005cd8a0_ea_6, word_8, 0x8);
GUEST_OFFSET(Local_005cd8a0_ea_6, word_c, 0xc);
GUEST_OFFSET(Local_005cd8a0_ea_6, word_10, 0x10);
GUEST_OFFSET(Local_005cd8a0_ea_6, word_14, 0x14);
GUEST_OFFSET(Local_005cd8a0_ea_6, word_18, 0x18);
GUEST_OFFSET(Local_005cd8a0_ea_6, word_1c, 0x1c);
GUEST_OFFSET(Local_005cd8a0_ea_6, word_24, 0x24);

struct __attribute__((packed)) Local_005cd8a0_r5_1 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 byte_b;
};
GUEST_OFFSET(Local_005cd8a0_r5_1, byte_a, 0xa);
GUEST_OFFSET(Local_005cd8a0_r5_1, byte_b, 0xb);

struct __attribute__((packed)) Local_005cd8a0_r7_1 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_005cd8a0_r7_1, byte_2, 0x2);
GUEST_OFFSET(Local_005cd8a0_r7_1, byte_3, 0x3);

inline constexpr guest::Function<0x0024ea1c, u32(u32)> clear_number_pair;
inline constexpr guest::Function<0x003026e8, u32(u32, u32)> low_byte_of_id;
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> halfword_is_fc_or_more;

void SaveData__clear_number_pairs(u32 save_data, u32 r1) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 4u) {
        return;
    }
    gptr<Local_005cd8a0_ea_1> ea_1 = gptr<Local_005cd8a0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = i;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r11;
    ea_1->word_20 = r12;
    ea_1->word_24 = r14;
    r6 = save_data;
    r5 = 0u;
    if (r1 != 0) {
        if (r1 == 1u) {
            r5 = 1u;
        } else if (r1 == 2u) {
            r5 = 2u;
        } else if (r1 == 3u) {
            r5 = 3u;
        }
    }
    i = 0u;
    do {
        gptr<Local_005cd8a0_r7_1> r7_1 = gptr<Local_005cd8a0_r7_1>(i >= 0x38u ? r6 + 8u : r6 + (i << 2) + 8u);
        u32 r0_1 = halfword_is_fc_or_more(r7_1.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            u32 low_byte = low_byte_of_id(r7_1.addr(), r1);
            r1 = guest::cpu()->r[1];
            if (low_byte == r5) {
                u32 low_byte_2 = low_byte_of_id(r7_1.addr(), r1);
                r1 = guest::cpu()->r[1];
                r8 = low_byte_2;
                r10 = r7_1->byte_2;
                r11 = r7_1->byte_3;
                i = 0u;
                do {
                    gptr<Local_005cd8a0_r5_1> r5_1 = gptr<Local_005cd8a0_r5_1>(r6 + (i << 2));
                    u32 r0_5 = halfword_is_fc_or_more(r5_1.addr() + 8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    if (r0_5 == 0) {
                        u32 low_byte_3 = low_byte_of_id(r5_1.addr() + 8u, r1);
                        r1 = guest::cpu()->r[1];
                        u32 r9_1 = r5_1->byte_a;
                        if (low_byte_3 == r8 && r9_1 == r10 && r5_1->byte_b == r11) {
                            clear_number_pair(r6 + (i << 2) + 8u);
                            *gptr<u8>(r6 + 4u) = u8(u32(*gptr<u8>(r6 + 4u)) - 1u);
                            gptr<Local_005cd8a0_ea_4> ea_4 = gptr<Local_005cd8a0_ea_4>(frame.at(0).addr());
                            u32 r4_1 = ea_4->word_0;
                            u32 r5_2 = ea_4->word_4;
                            u32 r6_1 = ea_4->word_8;
                            u32 r7_2 = ea_4->word_c;
                            u32 r8_1 = ea_4->word_10;
                            u32 r9_2 = ea_4->word_14;
                            u32 r10_1 = ea_4->word_18;
                            u32 r11_1 = ea_4->word_1c;
                            guest::cpu()->r[4] = r4_1;
                            guest::cpu()->r[5] = r5_2;
                            guest::cpu()->r[6] = r6_1;
                            guest::cpu()->r[7] = r7_2;
                            guest::cpu()->r[8] = r8_1;
                            guest::cpu()->r[9] = r9_2;
                            guest::cpu()->r[10] = r10_1;
                            guest::cpu()->r[11] = r11_1;
                            return;
                        }
                    }
                    i += 1u;
                    guest::preempt();
                } while (i < 0x38u);
                gptr<Local_005cd8a0_ea_5> ea_5 = gptr<Local_005cd8a0_ea_5>(frame.at(0).addr());
                u32 r4_2 = ea_5->word_0;
                u32 r5_3 = ea_5->word_4;
                u32 r6_2 = ea_5->word_8;
                u32 r7_3 = ea_5->word_c;
                u32 r8_2 = ea_5->word_10;
                u32 r9_3 = ea_5->word_14;
                u32 r10_2 = ea_5->word_18;
                u32 r11_2 = ea_5->word_1c;
                guest::cpu()->r[4] = r4_2;
                guest::cpu()->r[5] = r5_3;
                guest::cpu()->r[6] = r6_2;
                guest::cpu()->r[7] = r7_3;
                guest::cpu()->r[8] = r8_2;
                guest::cpu()->r[9] = r9_3;
                guest::cpu()->r[10] = r10_2;
                guest::cpu()->r[11] = r11_2;
                return;
            }
        }
        i += 1u;
        guest::preempt();
    } while (i < 0x38u);
    gptr<Local_005cd8a0_ea_6> ea_6 = gptr<Local_005cd8a0_ea_6>(frame.at(0).addr());
    u32 r4_3 = ea_6->word_0;
    u32 r5_4 = ea_6->word_4;
    u32 r6_3 = ea_6->word_8;
    u32 r7_4 = ea_6->word_c;
    u32 r8_3 = ea_6->word_10;
    u32 r9_4 = ea_6->word_14;
    u32 r10_3 = ea_6->word_18;
    u32 r11_3 = ea_6->word_1c;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_4;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_4;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_4;
    guest::cpu()->r[10] = r10_3;
    guest::cpu()->r[11] = r11_3;
}

}  // namespace d_005cd8a0
GUEST_EXPORT(0x005cd8a0, d_005cd8a0::SaveData__clear_number_pairs);

// f_005cda08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the two extra entries (+0xe8) and their count (+5).
namespace d_005cda08 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> clear_number_pair;

void SlotList56__clear_extra(u32 slot_list56) {
    u32 r5 = slot_list56;
    u32 i = 0u;
    do {
        clear_number_pair(r5 + (i << 2) + 0xe8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        i += 1u;
        guest::preempt();
    } while (i < 2u);
    *gptr<u8>(r5 + 5u) = 0;
}

}  // namespace d_005cda08
GUEST_EXPORT_FRAMED(0x005cda08, d_005cda08::SlotList56__clear_extra, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_005cda44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts an entry (three bytes) in the first free of the 56 slots (+8) and counts it (+4); its index (0 when full).
namespace d_005cda44 {

inline constexpr guest::Function<0x0024e9d8, u32(u32, u32, u32, u32)> replace_number_with_bytes;
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> halfword_is_fc_or_more;

u32 SlotList56__add(u32 slot_list56, u32 r1, u32 map_structures, u32 r3) {
    u32 r5 = slot_list56;
    u32 r6 = r1;
    u32 r7 = map_structures;
    u32 r8 = r3;
    u32 i = 0u;
    do {
        u32 r0_2 = halfword_is_fc_or_more(r5 + (i << 2) + 8u, r1, map_structures, r3);
        r1 = guest::cpu()->r[1];
        map_structures = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            replace_number_with_bytes(r5 + (i << 2) + 8u, r6, r7, r8);
            *gptr<u8>(r5 + 4u) = u8(u32(*gptr<u8>(r5 + 4u)) + 1u);
            return i;
        }
        i += 1u;
        guest::preempt();
    } while (i < 0x38u);
    return 0u;
}

}  // namespace d_005cda44
GUEST_EXPORT_FRAMED(0x005cda44, d_005cda44::SlotList56__add, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_005cdab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts an entry in the first free of the two extra slots (+0xe8) and counts it (+5).
namespace d_005cdab4 {

inline constexpr guest::Function<0x0024e9d8, u32(u32, u32, u32, u32)> replace_number_with_bytes;
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> halfword_is_fc_or_more;

u32 SlotList56__add_extra(u32 slot_list56, u32 r1, u32 r2, u32 r3) {
    u32 r5 = slot_list56;
    u32 r6 = r1;
    u32 r7 = r2;
    u32 r8 = r3;
    u32 i = 0u;
    do {
        u32 r0_2 = halfword_is_fc_or_more(r5 + (i << 2) + 0xe8u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            replace_number_with_bytes(r5 + (i << 2) + 0xe8u, r6, r7, r8);
            *gptr<u8>(r5 + 5u) = u8(u32(*gptr<u8>(r5 + 5u)) + 1u);
            return i;
        }
        i += 1u;
        guest::preempt();
    } while (i < 2u);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005cdab4
GUEST_EXPORT_FRAMED(0x005cdab4, d_005cdab4::SlotList56__add_extra, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_005cdb24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the entry with this id and two bytes from the 56 slots; true when it found one.
namespace d_005cdb24 {

struct __attribute__((packed)) Local_005cdb24_r5_1 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
    u8 byte_b;
};
GUEST_OFFSET(Local_005cdb24_r5_1, byte_a, 0xa);
GUEST_OFFSET(Local_005cdb24_r5_1, byte_b, 0xb);

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32)> clear_number_pair;
inline constexpr guest::Function<0x003026e8, u32(u32, u32, u32, u32)> low_byte_of_id;
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> halfword_is_fc_or_more;

u32 SlotList56__remove(u32 slot_list56, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;
    u32 r6 = slot_list56;
    u32 r7 = r1;
    u32 r9 = r2;
    u32 r11 = r3;
    u32 i = 0u;
    do {
        gptr<Local_005cdb24_r5_1> r5_1 = gptr<Local_005cdb24_r5_1>(r6 + (i << 2));
        u32 r0_2 = halfword_is_fc_or_more(r5_1.addr() + 8u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            u32 low_byte = low_byte_of_id(r5_1.addr() + 8u, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 r10_1 = r5_1->byte_a;
            if (low_byte == r7 && r10_1 == r9 && r5_1->byte_b == r11) {
                clear_number_pair(r6 + (i << 2) + 8u, r1);
                *gptr<u8>(r6 + 4u) = u8(u32(*gptr<u8>(r6 + 4u)) - 1u);
                return 1u;
            }
        }
        i += 1u;
        guest::preempt();
    } while (i < 0x38u);
    return 0u;
}

}  // namespace d_005cdb24
GUEST_EXPORT_FRAMED(0x005cdb24, d_005cdb24::SlotList56__remove, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005cdbb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the list's flag (+6), initializes its table (+0xf0) and clears the three words at +0x44b0.
namespace d_005cdbb8 {

struct __attribute__((packed)) SlotList56 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
    u8 unknown_7[0x44a9];  // (not used here)
    u32 word_44b0;
    u32 word_44b4;
    u32 word_44b8;
};
GUEST_OFFSET(SlotList56, byte_6, 0x6);
GUEST_OFFSET(SlotList56, word_44b0, 0x44b0);
GUEST_OFFSET(SlotList56, word_44b4, 0x44b4);
GUEST_OFFSET(SlotList56, word_44b8, 0x44b8);

inline constexpr guest::Function<0x0027a060, u32(u32, u32, u32, u32)> PatternSlots8__clear_names;

void SlotList56__init_new(gptr<SlotList56> slot_list56, u32 r1) {
    slot_list56->byte_6 = 0;
    PatternSlots8__clear_names(slot_list56.addr() + 0xf0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    slot_list56->word_44b0 = 0;
    slot_list56->word_44b4 = 0;
    slot_list56->word_44b8 = 0;
    guest::cpu()->r[1] = slot_list56.addr() + 0x44b4u;
}

}  // namespace d_005cdbb8
GUEST_EXPORT_FRAMED(0x005cdbb8, d_005cdbb8::SlotList56__init_new, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cdbf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 56 slots, the two extra slots, their counts and the rest of the block.
namespace d_005cdbf8 {

struct __attribute__((packed)) SlotList56 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(SlotList56, byte_4, 0x4);
GUEST_OFFSET(SlotList56, byte_5, 0x5);

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> clear_number_pair;
inline constexpr guest::Function<0x0027a0a0, u32(u32, u32)> PatternSlots8__clear;

void SlotList56__clear(gptr<SlotList56> slot_list56, u32 r1) {
    u32 r0 = slot_list56.addr();
    u32 r6 = 0u;
    slot_list56->byte_4 = u8(r6);
    u32 r5 = r0;
    u32 i = r6;
    slot_list56->byte_5 = u8(r6);
    do {
        clear_number_pair(r5 + (i << 2) + 8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        i += 1u;
        guest::preempt();
    } while (i < 0x38u);
    i = 0u;
    do {
        clear_number_pair(r5 + (i << 2) + 0xe8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        i += 1u;
        guest::preempt();
    } while (i < 2u);
    *gptr<u8>(r5 + 6u) = u8(r6);
    PatternSlots8__clear(r5 + 0xf0u, r1);
    u32 r1_1 = r5 + 0x44b4u;
    *gptr<u32>(r5 + 0x44b0u) = r6;
    *gptr<u32>(r1_1) = r6;
    *gptr<u32>(r5 + 0x44b8u) = r6;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005cdbf8
GUEST_EXPORT_FRAMED(0x005cdbf8, d_005cdbf8::SlotList56__clear, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_005cdd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the 56 and 2 slot entries and the table at +0xf0.
namespace d_005cdd70 {

inline constexpr guest::Function<0x0027a31c, u32(u32)> PatternSlots8__construct;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SlotList56__construct(u32 slot_list56) {
    u32 r0_4 = for_each_element(for_each_element(slot_list56 + 8u, 0x24ea34u, 4u, 0x38u) + 0xe0u, 0x24ea34u, 4u, 2u);
    return PatternSlots8__construct(r0_4 + 8u) - 0xf0u;
}

}  // namespace d_005cdd70
GUEST_EXPORT_FRAMED(0x005cdd70, d_005cdd70::SlotList56__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cdde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the current game time (advanced by 0) in the record after resetting it.
namespace d_005cdde8 {

struct __attribute__((packed)) Local_005cdde8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005cdde8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005cdde8_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x0056ca10, u32(u32, u32, u32, u32)> game_time_advanced;
inline constexpr guest::Function<0x00759664, u32(u32, u32, u32, u32)> GameTime__nanoseconds_or_earliest;
inline constexpr guest::Function<0x007795ac, u32(u32)> store_constants_7795ac;

struct __attribute__((packed)) TimeRecordSetNowFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(TimeRecordSetNowFrame, word_0, 0x0);
GUEST_OFFSET(TimeRecordSetNowFrame, word_4, 0x4);
GUEST_SIZE(TimeRecordSetNowFrame, 0x14);

void TimeRecord__set_now(u32 time_record, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<TimeRecordSetNowFrame> frame;  // the original's stack frame
    u32 r0_1 = GameTime__nanoseconds_or_earliest(time_record, r1, r2, r3);
    frame->word_0 = 0;
    frame->word_4 = 0;
    u32 r0_2 = game_time_advanced(r0_1, guest::cpu()->r[1], r1, 0u);
    gptr<Local_005cdde8_ea_1> ea_1 = gptr<Local_005cdde8_ea_1>(frame.at(8).addr());
    ea_1->word_0 = r0_2;
    ea_1->word_4 = guest::cpu()->r[1];
    store_constants_7795ac(time_record);
    copy_8_bytes(time_record, frame.at(8).addr());
}

}  // namespace d_005cdde8
GUEST_EXPORT_FRAMED(0x005cdde8, d_005cdde8::TimeRecord__set_now, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005cdfd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte of terrain kind `kind` (0 from 0xff) from the table at 0x890554.
namespace d_005cdfd0 {


u32 terrain_byte_890554(u32 terrain) {
    if (terrain >= 0xffu) {
        terrain = 0u;
    }
    u32 r0_1 = *gptr<u8>(terrain + 0x890554u);
    guest::cpu()->r[1] = 0x890554u;
    return r0_1;
}

}  // namespace d_005cdfd0
GUEST_EXPORT(0x005cdfd0, d_005cdfd0::terrain_byte_890554);

// f_005ce114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte of terrain kind `kind` (0 from 0xff) from the table at 0x95dc1b.
namespace d_005ce114 {

inline constexpr u32 terrain_byte_b_address = 0x0095dc1bu;

u32 terrain_byte_95dc1b(u32 r0) {
    if (r0 >= 0xffu) {
        r0 = 0u;
    }
    u32 r0_1 = *gptr<u8>(r0 + terrain_byte_b_address);
    guest::cpu()->r[1] = terrain_byte_b_address;
    return r0_1;
}

}  // namespace d_005ce114
GUEST_EXPORT(0x005ce114, d_005ce114::terrain_byte_95dc1b);

// f_005ce2b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte of terrain kind `kind` (0 from 0xff) from the table at 0x95d81f.
namespace d_005ce2b8 {

inline constexpr u32 terrain_byte_a_address = 0x0095d81fu;

u32 terrain_byte_95d81f(u32 r0) {
    if (r0 >= 0xffu) {
        r0 = 0u;
    }
    u32 r0_1 = *gptr<u8>(r0 + terrain_byte_a_address);
    guest::cpu()->r[1] = terrain_byte_a_address;
    return r0_1;
}

}  // namespace d_005ce2b8
GUEST_EXPORT(0x005ce2b8, d_005ce2b8::terrain_byte_95d81f);

// f_005ce32c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Signed byte (table 0x95d720) of the terrain kind at a position.
namespace d_005ce32c {

inline constexpr u32 terrain_heights_address = 0x0095d720u;
inline constexpr guest::Function<0x006c5a88, u32(u32, u32)> terrain_at_position;

u32 terrain_s8_at_position(u32 r0, u32 r1) {
    u32 r0_1 = terrain_at_position(r0, r1);
    if (r0_1 >= 0xffu) {
        r0_1 = 0u;
    }
    u32 r0_2 = *gptr<s8>(r0_1 + terrain_heights_address);
    guest::cpu()->r[1] = terrain_heights_address;
    return r0_2;
}

}  // namespace d_005ce32c
GUEST_EXPORT_FRAMED(0x005ce32c, d_005ce32c::terrain_s8_at_position, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ce368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Signed byte +0xfad of the error/EULA manager.
namespace d_005ce368 {

inline guest::global<u32, 0x0094e3c8> err_eula_mgr_instance;

u32 err_eula_mgr_byte_fad() {
    return *gptr<s8>(*err_eula_mgr_instance + 0xfadu);
}

}  // namespace d_005ce368
GUEST_EXPORT(0x005ce368, d_005ce368::err_eula_mgr_byte_fad);

// f_005ce568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the member callback (+0x1c, +0x20) of the error/EULA manager when one is set.
namespace d_005ce568 {

inline constexpr u32 err_eula_mgr_instance_address = 0x0094e3c8u;
inline guest::global<u32, 0x0094e3c8> err_eula_mgr_instance;

u32 err_eula_mgr_call_callback() {
    u32 r2_1 = *err_eula_mgr_instance;
    u32 r1_1 = *gptr<u32>(r2_1 + 0x1cu);
    u32 r0_1 = *gptr<u32>(*err_eula_mgr_instance + 0x20u);
    if (r1_1 == 0 && ((r0_1 & 1u) == 0 || r0_1 == 0)) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    u32 r0_2 = r2_1 + u32(s32(r0_1) >> 1);
    if ((r0_1 & 1u) == 0) {
        // virtual function 7 of err_eula_mgr_instance_address (if r2_1 points to a vtable)
        return guest::call_address<u32>(r1_1, r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    }
    u32 r2_2 = *gptr<u32>(r0_2);
    u32 r1_2 = *gptr<u32>(r2_2 + r1_1);
    return guest::call_address<u32>(r1_2, r0_2, r1_2, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_005ce568
GUEST_EXPORT(0x005ce568, d_005ce568::err_eula_mgr_call_callback);

// f_005cebe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0011edd8 on the object at 0xac1930 with 0.
namespace d_005cebe4 {

inline constexpr u32 applet_callbacks_address = 0x00ac1930u;
inline constexpr guest::Function<0x0011edd8, u32(u32, u32, u32, u32)> Timer__start;

u32 call_11edd8_on_ac1930() {
    return Timer__start(applet_callbacks_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cebe4
GUEST_EXPORT(0x005cebe4, d_005cebe4::call_11edd8_on_ac1930);

// f_005cec38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When a home-menu or power request is pending: waits until it is handled, marks 0x94e3ad and resumes the object at
// 0xac1930.
namespace d_005cec38 {

inline constexpr u32 applet_callbacks_address = 0x00ac1930u;
inline guest::global<u8, 0x0094e3ad> applet_callbacks_installed;
inline constexpr guest::Function<0x0011eafc, u32(u32)> applet_state_at_least_2;
inline constexpr guest::Function<0x0011eb18, u32(u32)> read_u8_0x0094e3a8_;
inline constexpr guest::Function<0x0011edd8, u32(u32, u32, u32, u32)> Timer__start;
inline constexpr guest::Function<0x001242c8, u32(u32)> read_s8_0x00974ae1_;
inline constexpr guest::Function<0x00124c88, u32(u32, u32, u32, u32)> read_u8_0x00974ade_;
inline constexpr guest::Function<0x00127d1c, u32(u32, u32)> svc_sleep_thread_zero;
inline constexpr guest::Function<0x0014f794, u32(u32, u32)> thunk_0014f794;
inline constexpr guest::Function<0x0014f79c, u32(u32, u32)> thunk_0014f79c;

void finish_home_menu_wait(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_u8_0x00974ade_(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        r0_1 = read_s8_0x00974ae1_(r0_1);
        if (r0_1 == 0) {
            return;
        }
    }
    u32 r0_2 = applet_state_at_least_2(r0_1);
    if (r0_2 != 0) {
        r0 = read_u8_0x0094e3a8_(r0_2);
        r1 = guest::cpu()->r[1];
        if (r0 != 2u) {
L_5cec78:;
            r0 = thunk_0014f794(r0, r1);
            r1 = guest::cpu()->r[1];
            if (r0 == 0) {
                r0 = svc_sleep_thread_zero(r0, r1);
                r1 = guest::cpu()->r[1];
                guest::preempt();
                goto L_5cec78;
            }
        }
        thunk_0014f79c(r0, r1);
    }
    if (*applet_callbacks_installed == 0) {
        *applet_callbacks_installed = 1;
    }
    frame.release();
    Timer__start(applet_callbacks_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005cec38
GUEST_EXPORT(0x005cec38, d_005cec38::finish_home_menu_wait);

// f_005cecfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When neither 0x94e3ad nor 0x94e3af is set: enables the 0x3fff notifications once and marks 0x94e3ac.
namespace d_005cecfc {

inline guest::global<u8, 0x0094e3ac> global_0094e3ac;
inline guest::global<u8, 0x0094e3ad> applet_callbacks_installed;
inline guest::global<u8, 0x0094e3af> global_0094e3af;
inline constexpr guest::Function<0x007b1038, u32(u32, u32, u32, u32)> GpuState__mark_dirty;
inline constexpr guest::Function<0x007b16b4, u32(u32, u32)> GpuState__flush;

u32 start_sleep_check_once() {
    u32 r1_1 = s8(*global_0094e3af);
    u32 r0_1 = u32(s8(*applet_callbacks_installed)) | r1_1;
    if (r0_1 == 0) {
        GpuState__mark_dirty(0x3fffu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        GpuState__flush(0x3fffu, 1u);
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
        *global_0094e3ac = u8(r0_1);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005cecfc
GUEST_EXPORT_FRAMED(0x005cecfc, d_005cecfc::start_sleep_check_once, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ced7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Increments the counter at 0x94e3b4.
namespace d_005ced7c {

inline guest::global<u32, 0x0094e3b4> counter_94e3b4;

void count_94e3b4() {
    *counter_94e3b4 = *counter_94e3b4 + 1u;
}

}  // namespace d_005ced7c
GUEST_EXPORT(0x005ced7c, d_005ced7c::count_94e3b4);

// f_005cedec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When a request is pending (0x94e3f0) and allowed: runs it under the member lock at 0xae563c, then finishes the wait.
namespace d_005cedec {

struct __attribute__((packed)) Local_005cedec_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005cedec_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005cedec_ea_2, word_4, 0x4);

inline constexpr u32 applet_request_a_address = 0x00974ac8u;
inline constexpr u32 file_request_lock_address = 0x00ae563cu;
inline guest::global<u8, 0x0094e3f0> pending_applet_request;
inline guest::global<u32, 0x00974ac8> applet_request_a;
inline guest::global<u32, 0x00974acc> applet_request_b;
inline guest::global<u8, 0x00975c30> loader_started;
inline constexpr guest::Function<0x0012a5a0, u32(u32, u32, u32, u32)> Fs__open_archive;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x0034ba38, u32(u32, u32, u32, u32)> OwnedLock__try_lock;
inline constexpr guest::Function<0x0047f274, u32(u32)> Ac__open_settings;
inline constexpr guest::Function<0x005cec38, u32(u32)> finish_home_menu_wait;
inline constexpr guest::Function<0x005cecfc, u32(u32, u32, u32, u32)> start_sleep_check_once;

struct __attribute__((packed)) HandlePendingAppletRequestFrame {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(HandlePendingAppletRequestFrame, word_0, 0x0);
GUEST_SIZE(HandlePendingAppletRequestFrame, 0x20);

void handle_pending_applet_request(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<HandlePendingAppletRequestFrame> frame;  // the original's stack frame
    if (*pending_applet_request == 0 || *loader_started != 0) {
        return;
    }
    u32 r0_1 = OwnedLock__try_lock(file_request_lock_address, r1, r2, r3);
    if (r0_1 == 0) {
        return;
    }
    Ac__open_settings(r0_1);
    u32 r0_2 = *applet_request_a;
    u32 r1_2 = *applet_request_b;
    frame->word_0 = 0;
    gptr<Local_005cedec_ea_2> ea_2 = gptr<Local_005cedec_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r0_2;
    ea_2->word_4 = r1_2;
    Fs__open_archive(0u, 0u, 0u, 0u);
    u32 r0_3 = unlock_member_lock(file_request_lock_address);
    finish_home_menu_wait(r0_3);
    *pending_applet_request = 0;
    frame.release();
    start_sleep_check_once(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005cedec
GUEST_EXPORT(0x005cedec, d_005cedec::handle_pending_applet_request);

// f_005cfa38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When 0071a084 allows it: refreshes the visitor list from the current entry (or a new one from 0x9535e4).
namespace d_005cfa38 {

inline constexpr u32 net_store_address = 0x009535e4u;
inline guest::global<u32, 0x009535e4> net_store;
inline constexpr guest::Function<0x0050d698, u32(u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> NetStore__finish;
inline constexpr guest::Function<0x0050ddc0, u32(u32, u32)> NetStore__commit;
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> save_flag_7190c;

void refresh_visitor_list(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (save_flag_7190c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        return;
    }
    u32 r0_2 = script__WordFix_64u___WordFix_0050d698(0u);
    if (r0_2 != 0) {
        frame.release();
        NetStore__finish(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    u32 r0_3 = *net_store;
    NetStore__commit(r0_3, 0u);
    frame.release();
    NetStore__finish(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005cfa38
GUEST_EXPORT(0x005cfa38, d_005cfa38::refresh_visitor_list);

// f_005cfa78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the visitor list is empty, computed once (0x9514c4) and kept.
namespace d_005cfa78 {

inline guest::global<u8, 0x009514c4> net_store_open;
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32)> NetStore__finish;

u32 visitor_list_is_empty_cached() {
    if (u32(s8(*net_store_open)) + 1u == 0) {
        u32 r0_1 = script__WordFix_64u___WordFix_0050d698(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *net_store_open = u8(u32(r0_1 == 0));
        NetStore__finish(r0_1);
    }
    u32 r0_2 = *net_store_open;
    if (r0_2 != 1u) {
        r0_2 = 0u;
    }
    return r0_2;
}

}  // namespace d_005cfa78
GUEST_EXPORT_FRAMED(0x005cfa78, d_005cfa78::visitor_list_is_empty_cached, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cfaec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When online is allowed: copies the villager into the store's slot, clearing the stale ones.
namespace d_005cfaec {

struct __attribute__((packed)) Local_005cfaec_r0_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005cfaec_r0_8, word_0, 0x0);
GUEST_OFFSET(Local_005cfaec_r0_8, word_4, 0x4);

struct __attribute__((packed)) Local_005cfaec_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005cfaec_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_005cfaec_r4_1, word_4, 0x4);

struct __attribute__((packed)) Local_005cfaec_r4_2 {
    u32 crc;
    u32 word_4;
};
GUEST_OFFSET(Local_005cfaec_r4_2, crc, 0x0);
GUEST_OFFSET(Local_005cfaec_r4_2, word_4, 0x4);

inline constexpr u32 net_store_open_address = 0x009514c4u;
inline constexpr u32 net_store_address = 0x009535e4u;
inline constexpr guest::Function<0x001138dd, u32(u32, u32)> Villager__copy;
inline constexpr guest::Function<0x00114161, u32(u32, u32, u32, u32)> clear_villager_at;
inline constexpr guest::Function<0x0011b40d, u32(u32, u32, u32)> villager_pair_address;
inline constexpr guest::Function<0x0023bc64, u32(u32, u32)> Boss__is_disabled;
inline constexpr guest::Function<0x0023c65c, u32(u32, u32)> online_is_blocked;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32)> is_villager_record;
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x003505bc, u32(u32, u32)> Boss__is_ready;
inline constexpr guest::Function<0x0050d698, u32(u32, u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> NetStore__finish;
inline constexpr guest::Function<0x0050dd68, u32(u32, u32, u32, u32)> NetStore__delete_slot;
inline constexpr guest::Function<0x005373bc, u32(u32, u32)> current_player_is_town_owner;
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> save_flag_7190c;
inline constexpr guest::Function<0x00728128, u32(u32, u32, u32, u32)> NetStore__slot_state;
inline constexpr guest::Function<0x007283f4, u32(u32, u32, u32, u32)> NetStore__slot_flag;

void NetStore__upload_villager(u32 net_store, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_15 = 0;
    u32 r0_1 = save_flag_7190c(net_store, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = current_player_is_town_owner(r0_1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_3 = Boss__is_disabled(r0_2, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                u32 r0_4 = Boss__is_ready(r0_3, r1_1);
                r1_1 = guest::cpu()->r[1];
                if (r0_4 != 0) {
                    u32 r0_5 = online_is_blocked(r0_4, r1_1);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_5 != 0) {
                        u32 r8 = net_store_open_address;
                        gptr<Local_005cfaec_r4_1> r4_1 = gptr<Local_005cfaec_r4_1>(*gptr<u32>(r8 + 4u));
                        if (r4_1.addr() != 0) {
                            u32 r7 = 0x251cu;
                            if (r4_1->word_4 == 2u) {
                                u32 r3_6 = ~0u;
                                u32 crc = crc32(r4_1.addr() + 4u, r7, r3_6, r3_6);
                                r1_1 = r4_1->word_0;
                                if (crc == r1_1) {
                                    gptr<Local_005cfaec_r0_8> r0_8 = gptr<Local_005cfaec_r0_8>(*gptr<u32>(r8 + 4u));
                                    r0_8->word_0 = 0;
                                    r0_8->word_4 = 0;
                                }
                            }
                            u32 r5 = 0u;
                            u32 r0_9 = script__WordFix_64u___WordFix_0050d698(r5, r1_1);
                            r3 = guest::cpu()->r[3];
                            if (r0_9 != 0) {
                                frame.release();
                                NetStore__finish(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                                return;
                            }
                            u32 r6 = net_store_address;
                            u32 r4 = *gptr<u32>(*gptr<u32>(r6) + 0x3c0u);
                            if (r4 != 0) {
                                do {
                                    r4 -= 1u;
                                    u32 r0_11 = NetStore__slot_flag(*gptr<u32>(r6), 1u, r4, r3);
                                    r3 = guest::cpu()->r[3];
                                    if (r0_11 == 0) {
                                        NetStore__delete_slot(*gptr<u32>(r6), 1u, r4, r3);
                                        r3 = guest::cpu()->r[3];
                                    }
                                    guest::preempt();
                                } while (r4 != 0);
                            }
                            u32 r0_13 = *gptr<u32>(r6);
                            r4 = *gptr<u32>(r0_13 + 0x3c0u);
                            if (r4 == 0) {
                                r5 = 1u;
                            } else {
                                do {
                                    r4 -= 1u;
                                    r0_13 = NetStore__slot_state(*gptr<u32>(r6), 1u, r4, r3);
                                    r3 = guest::cpu()->r[3];
                                    if (r0_13 == 2u) {
                                        goto L_5cfc34;
                                    }
                                    guest::preempt();
                                } while (r4 != 0);
                                r0_15 = NetStore__finish(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                                r1_1 = guest::cpu()->r[1];
                                goto L_5cfc48;
                            }
L_5cfc34:;
                            r0_15 = NetStore__finish(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                            r1_1 = guest::cpu()->r[1];
                            if (r5 == 0) {
                                return;
                            }
L_5cfc48:;
                            u32 save_data = get_save_data(r0_15, r1_1);
                            u32 r0_18 = villager_pair_address(save_data + 0x42a0cu, 0u, 1u);
                            u32 is_villager = is_villager_record(r0_18);
                            r1_1 = guest::cpu()->r[1];
                            if (is_villager != 0) {
                                gptr<Local_005cfaec_r4_2> r4_2 = gptr<Local_005cfaec_r4_2>(*gptr<u32>(r8 + 4u));
                                Villager__copy(r4_2.addr() + 8u, r0_18);
                                u32 r3_11 = ~0u;
                                r4_2->word_4 = 2;
                                u32 crc_2 = crc32(r4_2.addr() + 4u, r7, r3_11, r3_11);
                                r4_2->crc = crc_2;
                                u32 data_base = get_data_base(crc_2);
                                u32 records = slot_records_of(data_base);
                                frame.release();
                                clear_villager_at(records + 0x1976cu, 0u, 1u, guest::cpu()->r[3]);
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005cfaec
GUEST_EXPORT(0x005cfaec, d_005cfaec::NetStore__upload_villager);

// f_005cfcf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When visits are pending (0x9514c6): adds the new visits (above the counted ones) to the town's visit count, capped
// at 20, and clears the pending state.
namespace d_005cfcf0 {

struct __attribute__((packed)) Local_005cfcf0_r0_1 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_005cfcf0_r0_1, byte_5, 0x5);
GUEST_OFFSET(Local_005cfcf0_r0_1, byte_6, 0x6);

struct __attribute__((packed)) Local_005cfcf0_r0_3 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(Local_005cfcf0_r0_3, byte_5, 0x5);
GUEST_OFFSET(Local_005cfcf0_r0_3, byte_6, 0x6);

struct __attribute__((packed)) Local_005cfcf0_r1_2 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_005cfcf0_r1_2, byte_1, 0x1);
GUEST_OFFSET(Local_005cfcf0_r1_2, byte_2, 0x2);

inline guest::global<u8, 0x009514c5> pending_visit_count;
inline guest::global<u8, 0x009514c6> pending_visit_count_b;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;

u32 apply_pending_visit_count(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    gptr<Local_005cfcf0_r0_1> r0_1 = gptr<Local_005cfcf0_r0_1>(u32(*pending_visit_count_b));
    if (r0_1.addr() != 0) {
        u32 data_base = get_data_base(r0_1.addr(), r1, r2, r3);
        u32 r1_1 = *pending_visit_count;
        gptr<Local_005cfcf0_r0_3> r0_3 = gptr<Local_005cfcf0_r0_3>(data_base + 0x6214fu);
        u32 r0_4 = (u32(r0_3->byte_5) >> 3) + ((u32(r0_3->byte_6) & 1u) << 5);
        u32 r4_1 = r1_1 > r0_4 ? r1_1 - r0_4 : 0u;
        u32 data_base_2 = get_data_base(r0_4, r1_1, r2, r3);
        gptr<Local_005cfcf0_r1_2> r1_2 = gptr<Local_005cfcf0_r1_2>(data_base_2 + 0x6214fu);
        u32 r2_1 = r1_2->byte_1;
        u32 r0_6 = (r2_1 >> 7) + ((u32(r1_2->byte_2) & 0xfu) << 1) + r4_1;
        if (r0_6 > 0x14u) {
            if (r4_1 != 0 && s32(r4_1) >= 0) {
                r0_6 = 0x14u;
            }
            if (s32(r4_1) <= 0) {
                r0_6 = 0u;
            }
        }
        r1_2->byte_1 = u8(r2_1 & ~0x80u | r0_6 << 7);
        u32 r0_7 = u32(r1_2->byte_2) & ~0xfu | (r0_6 & 0x1eu) >> 1;
        r1_2->byte_2 = u8(r0_7);
        u32 data_base_3 = get_data_base(r0_7, r1_2.addr(), r2_1, r3);
        r0_1 = gptr<Local_005cfcf0_r0_1>(data_base_3 + 0x6214fu);
        r0_1->byte_5 = u8(u32(r0_1->byte_5) & ~0xf8u);
        r1 = 0u;
        r0_1->byte_6 = u8(u32(r0_1->byte_6) & ~1u);
        *pending_visit_count_b = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_005cfcf0
GUEST_EXPORT_FRAMED(0x005cfcf0, d_005cfcf0::apply_pending_visit_count, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cfef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to 0071a084.
namespace d_005cfef0 {

inline constexpr guest::Function<0x0071a084, u32(u32, u32)> save_flag_7190c;

u32 call_0071a084_veneer() {
    return save_flag_7190c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_005cfef0
GUEST_EXPORT(0x005cfef0, d_005cfef0::call_0071a084_veneer);

// f_005cfef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records a visitor (id and two bytes) and, when new, counts the visit for the visitor's player and the town counters.
namespace d_005cfef4 {

inline constexpr u32 net_store_open_address = 0x009514c4u;
inline guest::global<u8, 0x009514c5> pending_visit_count;
inline constexpr guest::Function<0x0020d848, u32(u32, u32, u32, u32)> store_half_and_bytes;
inline constexpr guest::Function<0x0024b8a8, u32(u32, u32, u32)> CounterTable__add;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x0030dc84, u32(u32, u32)> find_player_by_identity;
inline constexpr guest::Function<0x005373a4, u32(u32, u32)> town_identity;
inline constexpr guest::Function<0x005374f0, u32(u32, u32, u32)> ExhibitionPark__store_entry;
inline constexpr guest::Function<0x006b5240, u32(u32, u32)> ClampedCounters__add_to_value_2bc;
inline constexpr guest::Function<0x00728af8, u32(u32)> NexDateTime__day;
inline constexpr guest::Function<0x00728c48, u32(u32, u32, u32, u32)> NexDateTime__year;
inline constexpr guest::Function<0x00728ca0, u32(u32)> NexDateTime__month;

struct __attribute__((packed)) RecordVisitorFrame {
    u32 word_0;
};
GUEST_OFFSET(RecordVisitorFrame, word_0, 0x0);
GUEST_SIZE(RecordVisitorFrame, 0x4);

void record_visitor(u32 exhibition_park, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<RecordVisitorFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 year_2 = NexDateTime__year(r1, r1, r2, r3);
    u32 month_2 = NexDateTime__month(r1);
    u32 day_2 = NexDateTime__day(r1);
    store_half_and_bytes(frame.at(0).addr(), uxth(year_2), month_2 & 0xffu, day_2 & 0xffu);
    if (ExhibitionPark__store_entry(exhibition_park, frame.at(0).addr(), 1u) != 0) {
        u32 r1_5 = u32(*pending_visit_count) + 1u;
        *pending_visit_count = u8(r1_5);
        u32 r0_5 = town_identity(net_store_open_address, r1_5);
        u32 data_base = get_data_base(r0_5);
        u32 r0_8 = find_player_by_identity(data_base + 0x20u, r0_5);
        if (r0_8 != 0) {
            r0_8 = CounterTable__add(r0_8 + 0x55dcu, 0xdu, 1u);
        }
        u32 counter_block = get_counter_block(r0_8);
        ClampedCounters__add_to_value_2bc(counter_block, 1u);
    }
}

}  // namespace d_005cfef4
GUEST_EXPORT_FRAMED(0x005cfef4, d_005cfef4::record_visitor, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original
