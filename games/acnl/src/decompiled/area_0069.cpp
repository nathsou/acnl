// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006904b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the item may be placed here (a furniture item or a forced placement, the scene allows it and the room has
// space): starts placing it.
namespace d_006904b4 {

struct __attribute__((packed)) FurniturePlacement {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(FurniturePlacement, byte_8, 0x8);

inline constexpr u32 scene_object_pool_address = 0x0094f310u;
inline guest::global<u32, 0x0094f310> scene_object_pool;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x004ea048, u32(u32)> room_furniture_address;
inline constexpr guest::Function<0x00536110, u32(u32)> half_of_86_a184e4;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> StringPool__find_message_mode_2;
inline constexpr guest::Function<0x005b4678, u32(u32)> scene_has_flag_10000;
inline constexpr guest::Function<0x0074557c, u32(u32)> free_elements_in_list;
inline constexpr guest::Function<0x00748574, u32(u32, u32)> FurnitureRef__table_value;
inline constexpr guest::Function<0x007486dc, u32(u32)> ItemData__has_kind_11;

struct __attribute__((packed)) FurniturePlacementStartFrame {
    u32 word_0;
};
GUEST_OFFSET(FurniturePlacementStartFrame, word_0, 0x0);
GUEST_SIZE(FurniturePlacementStartFrame, 0x4);

u32 FurniturePlacement__start(gptr<FurniturePlacement> furniture_placement, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FurniturePlacementStartFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 talk = *scene_object_pool;
    u32 item_data = Item__data(furniture_placement.addr(), r1, r2, r3);
    u32 r6_1 = furniture_placement->byte_8 == 2u;
    if (item_data != 0) {
        u32 r0_3 = ItemData__has_kind_11(item_data) | r6_1;
        if (r0_3 != 0) {
            u32 scene = current_scene_id(r0_3);
            u32 r0_5 = scene_has_flag_10000(scene);
            if (r0_5 == 0) {
                u32 r0_7 = free_elements_in_list(room_furniture_address(r0_5));
                if (r0_7 != 0 || furniture_placement->byte_8 == 2u) {
                    u32 string_pool = half_of_86_a184e4(1u);
                    u32 r1_4 = *gptr<u8>(item_data + 0x11u);
                    if (r1_4 < 0x56u && r1_4 != 0) {
                        string_pool = FurnitureRef__table_value(item_data, r1_4);
                    }
                    frame->word_0 = 0;
                    return StringPool__find_message_mode_2(string_pool, talk, furniture_placement.addr(), 0u);
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_006904b4
GUEST_EXPORT_FRAMED(0x006904b4, d_006904b4::FurniturePlacement__start, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00691210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the check from the player's position and angle; -1 without a player.
namespace d_00691210 {

struct __attribute__((packed)) Local_00691210_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00691210_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00691210_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00691210_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00691210_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00691210_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00691210_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00691210_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00691210_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_00691210_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00691210_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00691210_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_00691210_ea_3, word_c, 0xc);

inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> find_object;
inline constexpr guest::Function<0x00690fb8, u32(u32, u32, u32, u32)> AcPlayer__check_front;

u32 AcPlayer__check_toward_player(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_2 = 0;
    gptr<Local_00691210_ea_1> ea_1 = gptr<Local_00691210_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    u32 object = find_object(4u, 0u, r2, r3);
    if (object == 0) {
        r0_2 = ~0u;
    } else {
        *frame.at<u16>(0) = *gptr<u16>(object + 0x2eu);
        u32 r2_1 = *frame.at<u32>(0);
        gptr<Local_00691210_ea_2> ea_2 = gptr<Local_00691210_ea_2>(frame.at(4).addr());
        u32 r4_1 = ea_2->word_0;
        u32 r5_1 = ea_2->word_4;
        r14 = ea_2->word_8;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        frame.release();
        return AcPlayer__check_front(ac_player, object + 0x14u, r2_1, r1);
    }
    gptr<Local_00691210_ea_3> ea_3 = gptr<Local_00691210_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_4;
    u32 r5_2 = ea_3->word_8;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    return r0_2;
}

}  // namespace d_00691210
GUEST_EXPORT(0x00691210, d_00691210::AcPlayer__check_toward_player);

// f_0069125c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Toggles the music or the switch of the furniture at the position, and its audio.
namespace d_0069125c {

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> room_grid_address;
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32)> RoomGrid__furniture_at_position;
inline constexpr guest::Function<0x0056e6a8, u32(u32, u32)> call_virtual_15_of_300;
inline constexpr guest::Function<0x00571ea4, u32(u32, u32, u32, u32)> AcFtr__switch_state;
inline constexpr guest::Function<0x0057456c, u32(u32, u32)> AcFtrAudio__set_playing;
inline constexpr guest::Function<0x00751058, u32(u32)> member_address_0x5e4_;
inline constexpr guest::Function<0x00751824, u32(u32)> furniture_value_08;
inline constexpr guest::Function<0x00751840, u32(u32)> id_is_88709c;
inline constexpr guest::Function<0x007519b4, u32(u32)> id_is_88709a;

void RoomFurniture__toggle_at(u32 room_furniture, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    for (;;) {
        u32 room_grid = room_grid_address(room_furniture, r1, r2, guest::cpu()->r[3]);
        u32 ac_ftr_audio = RoomGrid__furniture_at_position(room_grid, room_furniture, 0u);
        if (ac_ftr_audio == 0) {
            return;
        }
        if (id_is_88709a(ac_ftr_audio) == 0) {
            u32 r0_5 = id_is_88709c(ac_ftr_audio);
            if (r0_5 != 0) {
                u32 scene_2 = current_scene_id(r0_5);
                u32 scene_flagged_2 = scene_has_flags(4u, scene_2);
                if (scene_flagged_2 != 0) {
                    if (Item__has_number(member_address_0x5e4_(ac_ftr_audio), 0x206cu) == 0) {
                        goto L_691374;
                    }
                }
            }
        } else {
            u32 r0_10 = furniture_value_08(ac_ftr_audio);
            if (r0_10 == 0xb6u || r0_10 == 0xb8u || r0_10 == 0xbdu || r0_10 == 0xbfu || r0_10 == 0xc0u || r0_10 == 0xc3u || r0_10 == 0xc4u || r0_10 == 0xc5u || r0_10 == 0xc6u) {
                if (r1 != 0) {
                    call_virtual_15_of_300(ac_ftr_audio, 0xbau);
                } else {
                    call_virtual_15_of_300(ac_ftr_audio, furniture_value_08(ac_ftr_audio));
                }
            }
        }
        AcFtrAudio__set_playing(ac_ftr_audio, r2);
        frame.release();
        AcFtr__switch_state(ac_ftr_audio, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
L_691374:;
        AcFtrAudio__set_playing(ac_ftr_audio, r2);
        room_furniture = ac_ftr_audio;
        if (!1) {
            break;
        }
        u32 r0_1 = *gptr<u32>(room_furniture + 0x300u);
        if (r0_1 == 0) {
            return;
        }
        u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x30u);
        // virtual function 12 of r0_1
        frame.release();
        guest::call_address<u32>(r2_1, r0_1, 0x100095au, r2_1, guest::cpu()->r[3]);
        return;
        guest::preempt();
    }
}

}  // namespace d_0069125c
GUEST_EXPORT(0x0069125c, d_0069125c::RoomFurniture__toggle_at);

// f_00691544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the placement's item (without its top flags), its cell, angle and mode.
namespace d_00691544 {

struct __attribute__((packed)) FurniturePlacement {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(FurniturePlacement, byte_4, 0x4);
GUEST_OFFSET(FurniturePlacement, byte_5, 0x5);
GUEST_OFFSET(FurniturePlacement, byte_6, 0x6);
GUEST_OFFSET(FurniturePlacement, byte_7, 0x7);
GUEST_OFFSET(FurniturePlacement, byte_8, 0x8);

struct __attribute__((packed)) Local_00691544_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00691544_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00691544_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00691544_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x006b9df8, u32(u32)> clear_kind_11_flags_top;

struct __attribute__((packed)) FurniturePlacementInitFrame {
    u32 word_0;
};
GUEST_OFFSET(FurniturePlacementInitFrame, word_0, 0x0);
GUEST_SIZE(FurniturePlacementInitFrame, 0x4);

u32 FurniturePlacement__init(gptr<FurniturePlacement> furniture_placement, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FurniturePlacementInitFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    gptr<Local_00691544_ea_1> ea_1 = gptr<Local_00691544_ea_1>(frame.at(0x20).addr());
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    Item__copy_b(frame.at(0).addr(), r1);
    clear_kind_11_flags_top(frame.at(0).addr());
    Item__copy(furniture_placement.addr(), frame.at(0).addr());
    furniture_placement->byte_4 = u8(r2);
    furniture_placement->byte_6 = u8(r5_1);
    furniture_placement->byte_5 = u8(r3);
    furniture_placement->byte_7 = u8(r6_1);
    furniture_placement->byte_8 = u8(r7_1);
    return frame.at(0).addr();
}

}  // namespace d_00691544
GUEST_EXPORT_FRAMED(0x00691544, d_00691544::FurniturePlacement__init, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006915b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Toggles the music or the switch of the furniture at the position, and its audio (the second variant).
namespace d_006915b0 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> room_grid_address;
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32)> RoomGrid__furniture_at_position;
inline constexpr guest::Function<0x0056e6a8, u32(u32, u32)> call_virtual_15_of_300;
inline constexpr guest::Function<0x005724ec, u32(u32, u32, u32, u32)> AcFtr__switch_state_b;
inline constexpr guest::Function<0x0057456c, u32(u32, u32)> AcFtrAudio__set_playing;
inline constexpr guest::Function<0x00751058, u32(u32)> member_address_0x5e4_;
inline constexpr guest::Function<0x00751824, u32(u32)> furniture_value_08;
inline constexpr guest::Function<0x00751840, u32(u32)> id_is_88709c;
inline constexpr guest::Function<0x007519b4, u32(u32)> id_is_88709a;

u32 RoomFurniture__toggle_at_b(u32 room_furniture, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    for (;;) {
        u32 room_grid = room_grid_address(room_furniture, r1, r2, guest::cpu()->r[3]);
        u32 ac_ftr_audio = RoomGrid__furniture_at_position(room_grid, room_furniture, 0u);
        if (ac_ftr_audio == 0) {
            return ac_ftr_audio;
        }
        if (id_is_88709a(ac_ftr_audio) == 0) {
            u32 r0_5 = id_is_88709c(ac_ftr_audio);
            if (r0_5 != 0) {
                u32 scene_2 = current_scene_id(r0_5);
                u32 scene_flagged_2 = scene_has_flags(4u, scene_2);
                if (scene_flagged_2 != 0) {
                    if (Item__has_number(member_address_0x5e4_(ac_ftr_audio), 0x206cu) == 0) {
                        goto L_6916c8;
                    }
                }
            }
        } else {
            u32 r0_10 = furniture_value_08(ac_ftr_audio);
            if (r0_10 == 0xb6u || r0_10 == 0xb8u || r0_10 == 0xbdu || r0_10 == 0xbfu || r0_10 == 0xc0u || r0_10 == 0xc3u || r0_10 == 0xc4u || r0_10 == 0xc5u || r0_10 == 0xc6u) {
                if (r1 != 0) {
                    call_virtual_15_of_300(ac_ftr_audio, 0xbau);
                } else {
                    call_virtual_15_of_300(ac_ftr_audio, furniture_value_08(ac_ftr_audio));
                }
            }
        }
        AcFtrAudio__set_playing(ac_ftr_audio, r2);
        frame.release();
        return AcFtr__switch_state_b(ac_ftr_audio, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
L_6916c8:;
        AcFtrAudio__set_playing(ac_ftr_audio, r2);
        r1 = guest::cpu()->r[1];
        room_furniture = ac_ftr_audio;
        if (!1) {
            break;
        }
        u32 r0_1 = *gptr<u32>(room_furniture + 0x300u);
        if (r0_1 == 0) {
            return r0_1;
        }
        u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x30u);
        // virtual function 12 of r0_1
        frame.release();
        return guest::call_address<u32>(r2_1, r0_1, 0x100095bu, r2_1, guest::cpu()->r[3]);
        guest::preempt();
    }
}

}  // namespace d_006915b0
GUEST_EXPORT(0x006915b0, d_006915b0::RoomFurniture__toggle_at_b);

// f_00691754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the check from the player's position and angle; 4 without a player.
namespace d_00691754 {

inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> find_object;
inline constexpr guest::Function<0x00692504, u32(u32, u32, u32, u32)> AcPlayer__check_item_use;

struct __attribute__((packed)) AcPlayerCheckTowardPlayerBFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(AcPlayerCheckTowardPlayerBFrame, word_0, 0x0);
GUEST_SIZE(AcPlayerCheckTowardPlayerBFrame, 0x8);

u32 AcPlayer__check_toward_player_b(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<AcPlayerCheckTowardPlayerBFrame> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 object = find_object(4u, 0u, r2, r3);
    if (object == 0) {
        r0_2 = 4u;
    } else {
        frame->word_0 = r2;
        u32 r1_2 = *gptr<u16>(object + 0x2eu);
        *frame.at<u16>(4) = u16(r1_2);
        r0_2 = AcPlayer__check_item_use(ac_player, r1, object + 0x14u, *frame.at<u32>(4));
    }
    return r0_2;
}

}  // namespace d_00691754
GUEST_EXPORT_FRAMED(0x00691754, d_00691754::AcPlayer__check_toward_player_b, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00691ae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the held object and clears its item; true.
namespace d_00691ae8 {

struct __attribute__((packed)) HeldObject {
    u32 word_0;
};
GUEST_OFFSET(HeldObject, word_0, 0x0);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> MessageHandle__close;

u32 HeldObject__release(gptr<HeldObject> held_object, u32 r1) {
    u32 r0_1 = held_object->word_0;
    if (r0_1 != 0) {
        MessageHandle__close(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        held_object->word_0 = 0;
    }
    Item__copy(held_object.addr() + 4u, empty_item_address);
    return 1u;
}

}  // namespace d_00691ae8
GUEST_EXPORT_FRAMED(0x00691ae8, d_00691ae8::HeldObject__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_00691b7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the two cells are adjacent, or a straight path joins them along either corner without hitting anything.
namespace d_00691b7c {

struct __attribute__((packed)) Local_00691b7c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00691b7c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00691b7c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00691b7c_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00691b7c_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00691b7c_ea_4, word_4, 0x4);

inline constexpr guest::Function<0x00614760, u32(u32)> return_constant_0x1d7c_;
inline constexpr guest::Function<0x006148e4, u32(u32)> Notice__construct;
inline constexpr guest::Function<0x00614a64, u32(u32, u32, u32, u32)> Collision__sweep;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> cell_corner_with_height;
inline constexpr guest::Function<0x0075dc00, u32(u32, u32, u32, u32)> has_any_bits;

struct __attribute__((packed)) CellsAreConnectedFrame {
    u32 word_0;
    u8 unknown_4[0x6c];  // (not read or written by name)
};
GUEST_OFFSET(CellsAreConnectedFrame, word_0, 0x0);
GUEST_SIZE(CellsAreConnectedFrame, 0x70);

u32 cells_are_connected(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<CellsAreConnectedFrame> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_1 = r0 - r2;
    if (s32(r0_1) < 0) {
        r0_1 = 0u - r0_1;
    }
    u32 r1_1 = r1 - r3;
    if (s32(r1_1) < 0) {
        r1_1 = 0u - r1_1;
    }
    u32 res_1 = r0_1 + r1_1;
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = res_1 == 1u;
    }
    if (zf_1) {
        r0_2 = 1u;
    } else {
        cell_corner_with_height(frame.at(0x58).addr(), r0, r1, r3);
        cell_corner_with_height(frame.at(0x64).addr(), r2, r1, guest::cpu()->r[3]);
        u32 r0_7 = return_constant_0x1d7c_(Notice__construct(frame.at(0xc).addr()));
        frame->word_0 = 1;
        gptr<Local_00691b7c_ea_2> ea_2 = gptr<Local_00691b7c_ea_2>(frame.at(4).addr());
        ea_2->word_0 = r0_7;
        ea_2->word_4 = 0;
        float S0_4 = 15.0f;
        guest::cpu()->s[0] = S0_4;
        Collision__sweep(frame.at(0xc).addr(), frame.at(0x64).addr(), frame.at(0x58).addr(), 0u);
        u32 r0_10 = has_any_bits(frame.at(0xc).addr(), 0xfu, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_10 == 0) {
            return 1u;
        }
        cell_corner_with_height(frame.at(0x64).addr(), r0, r3, guest::cpu()->r[3]);
        u32 r0_14 = return_constant_0x1d7c_(Notice__construct(frame.at(0xc).addr()));
        frame->word_0 = 1;
        gptr<Local_00691b7c_ea_4> ea_4 = gptr<Local_00691b7c_ea_4>(frame.at(4).addr());
        ea_4->word_0 = r0_14;
        ea_4->word_4 = 0;
        float S0_8 = 15.0f;
        u32 r2_7 = frame.at(0x58).addr();
        guest::cpu()->s[0] = S0_8;
        Collision__sweep(frame.at(0xc).addr(), frame.at(0x64).addr(), r2_7, 0u);
        u32 r0_17 = has_any_bits(frame.at(0xc).addr(), 0xfu, r2_7, 0u);
        r1_1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_17 == 0) {
            return 1u;
        }
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    return r0_2;
}

}  // namespace d_00691b7c
GUEST_EXPORT_FRAMED(0x00691b7c, d_00691b7c::cells_are_connected, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00691cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the furniture in front of the player and queues the NPC's talk about it.
namespace d_00691cb4 {

inline constexpr u32 front_furniture_state_address = 0x0094f31cu;
inline constexpr u32 front_furniture_check_address = 0x0094f320u;
inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x004e0cb0, u32(u32)> room_grid_address;
inline constexpr guest::Function<0x004e7344, u32(u32)> is_tour_area_scene_9_b;
inline constexpr guest::Function<0x004e958c, u32(u32, u32)> value_from_list;
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32)> RoomGrid__furniture_at_position;
inline constexpr guest::Function<0x004ea048, u32(u32)> room_furniture_address;
inline constexpr guest::Function<0x00521d3c, u32(u32)> pad_has_bit_04;
inline constexpr guest::Function<0x0052c4d8, u32(u32)> TalkQueue__push_npc_and_player;
inline constexpr guest::Function<0x005b4018, u32(u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> find_object;
inline constexpr guest::Function<0x00690fb8, u32(u32, u32, u32, u32)> AcPlayer__check_front;
inline constexpr guest::Function<0x00751058, u32(u32)> member_address_0x5e4_;
inline constexpr guest::Function<0x00751a20, u32(u32)> mode_7b4_below_2;
inline constexpr guest::Function<0x0076e7c8, u32(u32)> slot_byte_09;

void AcPlayer__check_front_furniture(u32 ac_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 ac_npc_rec = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 room_furniture = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 scene_3 = current_scene_id(ac_player, r1, r2, r3);
    u32 scene_flagged_3 = scene_has_flags(0x4000u, scene_3);
    if (scene_flagged_3 == 0) {
        u32 scene_flagged_4 = scene_has_flags(0x2000u, scene_3);
        if (scene_flagged_4 != 0) {
            scene_flagged_4 = mode_page_player_is_main_slot(scene_3);
            if (scene_flagged_4 == 0) {
                goto L_691d40;
            }
        }
        u32 scene_4 = current_scene_id(scene_flagged_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (is_tour_area_scene_9_b(scene_4) == 0) {
            return;
        }
        u32 r0_6 = *tour_instance;
        if (r0_6 != 0) {
            if (slot_byte_09(r0_6 + 0x10u) == 2u) {
                return;
            }
        }
    }
L_691d40:;
    if (pad_has_bit_04(1u) != 0) {
        Item__copy(front_furniture_check_address, empty_item_address);
        Item__copy(front_furniture_state_address, front_furniture_check_address);
        u32 r0_10 = frame.at(0xc).addr();
        construct_empty_item(r0_10);
        construct_empty_item(r0_10 + 4u);
        u32 object = find_object(4u, 0u);
        if (object != 0) {
            *frame.at<u16>(0x1c) = *gptr<u16>(object + 0x2eu);
            u32 r0_13 = AcPlayer__check_front(frame.at(0).addr(), object + 0x14u, *frame.at<u32>(0x1c), 1u);
            if (r0_13 + 2u != 0) {
                if (s32(r0_13) < 0) {
                    goto L_691ebc;
                }
                ac_npc_rec = value_from_list(room_furniture_address(r0_13), r0_13);
                if (ac_npc_rec == 0) {
                    goto L_691ebc;
                }
                u32 r0_16 = mode_7b4_below_2(ac_npc_rec);
                if (r0_16 == 1u) {
                    Item__copy(front_furniture_check_address, member_address_0x5e4_(ac_npc_rec));
                    u32 room_grid = room_grid_address(front_furniture_check_address);
                    r0_19 = RoomGrid__furniture_at_position(room_grid, frame.at(0).addr(), 0u);
                    if (r0_19 == 0) {
                        goto L_691eb4;
                    }
                    goto L_691ea0;
                }
                if (r0_16 == 0) {
                    r0_19 = ac_npc_rec;
                    goto L_691ea0;
                }
                goto L_691eb4;
            }
            Item__copy(front_furniture_check_address, frame.at(0).addr() + 0x10u);
            r0_20 = room_grid_address(front_furniture_check_address);
            room_furniture = frame.at(0).addr();
            r0_21 = RoomGrid__furniture_at_position(r0_20, room_furniture, 0u);
            if (r0_21 == 0) {
                goto L_691ebc;
            }
            r0_22 = member_address_0x5e4_(r0_21);
            Item__copy(front_furniture_state_address, r0_22);
            TalkQueue__push_npc_and_player(r0_21);
            goto L_691ebc;
L_691ea0:;
            r0_23 = member_address_0x5e4_(r0_19);
            Item__copy(front_furniture_state_address, r0_23);
L_691eb4:;
            TalkQueue__push_npc_and_player(ac_npc_rec);
        }
L_691ebc:;
    }
}

}  // namespace d_00691cb4
GUEST_EXPORT_FRAMED(0x00691cb4, d_00691cb4::AcPlayer__check_front_furniture, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0069335c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the scene (by its flags, the player's slot, or the tour's state) blocks using tools.
namespace d_0069335c {

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x004e7344, u32(u32)> is_tour_area_scene_9_b;
inline constexpr guest::Function<0x005b4018, u32(u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x0076e7c8, u32(u32)> slot_byte_09;

u32 scene_blocks_tools(u32 r0) {
    u32 scene_flagged_3 = scene_has_flags(0x4000u, r0);
    if (scene_flagged_3 != 0) {
        return 1u;
    }
    u32 scene_flagged_4 = scene_has_flags(0x2000u, r0);
    if (scene_flagged_4 != 0) {
        scene_flagged_4 = mode_page_player_is_main_slot(r0);
        if (scene_flagged_4 == 0) {
            return 1u;
        }
    }
    u32 scene_2 = current_scene_id(scene_flagged_4);
    u32 r0_4 = is_tour_area_scene_9_b(scene_2);
    if (r0_4 == 0) {
        return r0_4;
    }
    u32 r0_5 = *tour_instance;
    if (r0_5 == 0) {
        return 1u;
    }
    if (slot_byte_09(r0_5 + 0x10u) == 2u) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_0069335c
GUEST_EXPORT_FRAMED(0x0069335c, d_0069335c::scene_blocks_tools, 0x4010);  // pushes {r4, lr} first, as the original

// f_006934a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the current scene has one of the special-area flags.
namespace d_006934a0 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x005b4954, u32(u32)> record_value_is_11;

u32 scene_is_special_area(u32 r0) {
    u32 scene_2 = current_scene_id(r0);
    u32 scene_flagged_6 = scene_has_flags(0x80u, scene_2);
    if (scene_flagged_6 != 0) {
        return 1u;
    }
    u32 scene_flagged_7 = scene_has_flags(0x40u, scene_2);
    if (scene_flagged_7 != 0) {
        return 1u;
    }
    u32 scene_flagged_8 = scene_has_flags(0x2000u, scene_2);
    if (scene_flagged_8 != 0) {
        return 1u;
    }
    u32 scene_flagged_9 = scene_has_flags(0x4000u, scene_2);
    if (scene_flagged_9 != 0) {
        return 1u;
    }
    u32 scene_flagged_10 = scene_has_flags(0x20000000u, scene_2);
    if (scene_flagged_10 != 0) {
        return 1u;
    }
    u32 r0_7 = record_value_is_11(scene_2);
    return r0_7 == 0 ? r0_7 : 1u;
}

}  // namespace d_006934a0
GUEST_EXPORT_FRAMED(0x006934a0, d_006934a0::scene_is_special_area, 0x4010);  // pushes {r4, lr} first, as the original

// f_00693a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Posts the notice (0x33a8, or 0x33a9 with the flag) for the value.
namespace d_00693a64 {

inline constexpr guest::Function<0x006935a8, u32(u32, u32, u32, u32)> Notice__post;

struct __attribute__((packed)) PostNotice33a8Frame {
    u32 word_0;
};
GUEST_OFFSET(PostNotice33a8Frame, word_0, 0x0);
GUEST_SIZE(PostNotice33a8Frame, 0x4);

u32 post_notice_33a8(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PostNotice33a8Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 zf_1 = r2 == 0;
    frame->word_0 = 0;
    Notice__post(guest::cpu()->r[0], zf_1 ? 0x33a8u : 0x33a9u, r1, 1u);
    return guest::cpu()->r[0];
}

}  // namespace d_00693a64
GUEST_EXPORT_FRAMED(0x00693a64, d_00693a64::post_notice_33a8, 0x4000);  // pushes {lr} first, as the original

// f_00693cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The angle of the direction (0 to 3, a quarter turn each).
namespace d_00693cc8 {


struct __attribute__((packed)) DirectionToAngleFrame {
    u16 half_0;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(DirectionToAngleFrame, half_0, 0x0);
GUEST_SIZE(DirectionToAngleFrame, 0x4);

u32 direction_to_angle(u32 r0) {
    guest::StackFrameOf<DirectionToAngleFrame> frame;  // the original's stack frame
    if (r0 == 0) {
        return 0u;
    }
    if (r0 != 1u) {
        if (r0 == 2u) {
            return uxth(0xffff8000u);
        }
        if (r0 == 3u) {
            return uxth(0xffffc000u);
        }
        return 0u;
    }
    frame->half_0 = 0x4000;
    return 0x4000u;
}

}  // namespace d_00693cc8
GUEST_EXPORT(0x00693cc8, d_00693cc8::direction_to_angle);

// f_00694178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the first free block of the pool, marking its bit; null when all are used.
namespace d_00694178 {

struct __attribute__((packed)) BitPool {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(BitPool, word_4, 0x4);

struct __attribute__((packed)) Local_00694178_r2_2 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Local_00694178_r2_2, byte_c, 0xc);


u32 BitPool__alloc(gptr<BitPool> bit_pool) {
    u32 r0 = bit_pool.addr();
    u32 r12 = bit_pool->word_4;
    u32 i = 0u;
    if (r12 < 0u || r12 == 0) {
        guest::cpu()->r[1] = i;
        return 0u;
    }
    do {
        u32 r2_1 = i >> 3;
        u32 r3_1 = i & 7u;
        if ((lsr_r(u32(*gptr<u8>(r0 + r2_1 + 0xcu)), r3_1 & 0xff) & 1u) == 0) {
            gptr<Local_00694178_r2_2> r2_2 = gptr<Local_00694178_r2_2>(r2_1 + r0);
            r2_2->byte_c = u8(u32(r2_2->byte_c) | lsl_r(1u, r3_1 & 0xff));
            u32 r0_1 = *gptr<u32>(r0) * i + *gptr<u32>(r0 + 8u);
            guest::cpu()->r[1] = i;
            return r0_1;
        }
        i += 1u;
        guest::preempt();
    } while (r12 > i);
    guest::cpu()->r[1] = i;
    return 0u;
}

}  // namespace d_00694178
GUEST_EXPORT_FRAMED(0x00694178, d_00694178::BitPool__alloc, 0x10);  // pushes {r4} first, as the original

// f_0069438c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the move with the id ends: places the model at its end, writes the position and forgets the move.
namespace d_0069438c {

struct __attribute__((packed)) CloudModel {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(CloudModel, word_2c, 0x2c);

struct __attribute__((packed)) CloudModelFinishMoveArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(CloudModelFinishMoveArg1, word_0, 0x0);
GUEST_OFFSET(CloudModelFinishMoveArg1, word_4, 0x4);
GUEST_OFFSET(CloudModelFinishMoveArg1, word_8, 0x8);

inline constexpr guest::Function<0x004edd20, u32(u32)> escape__MapCloudModel__virtual_2;
inline constexpr guest::Function<0x004f1294, u32(u32, u32, u32, u32)> Model__update_anim_frame;
inline constexpr guest::Function<0x00745bd8, u32(u32, u32, u32)> Skeleton__joint_world_matrix;
inline constexpr guest::Function<0x007460e8, u32(u32)> Mover__is_done;

struct __attribute__((packed)) CloudModelFinishMoveFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(CloudModelFinishMoveFrame, word_0, 0x0);
GUEST_OFFSET(CloudModelFinishMoveFrame, word_4, 0x4);
GUEST_OFFSET(CloudModelFinishMoveFrame, word_8, 0x8);
GUEST_SIZE(CloudModelFinishMoveFrame, 0xc);

u32 CloudModel__finish_move(gptr<CloudModel> cloud_model, gptr<CloudModelFinishMoveArg1> arg1, u32 r2) {
    guest::StackFrameOf<CloudModelFinishMoveFrame> frame;  // the original's stack frame
    u32 r0_1 = cloud_model->word_2c;
    if (r0_1 != 0 && r0_1 == r2) {
        Model__update_anim_frame(cloud_model.addr(), arg1.addr(), r2, guest::cpu()->r[3]);
        escape__MapCloudModel__virtual_2(cloud_model.addr());
        Skeleton__joint_world_matrix(cloud_model.addr(), frame.at(0).addr(), 0u);
        arg1->word_0 = frame->word_0;
        arg1->word_4 = frame->word_4;
        arg1->word_8 = frame->word_8;
        u32 r0_3 = Mover__is_done(cloud_model.addr() + 0xcu);
        if (r0_3 == 0) {
            return r0_3;
        }
        cloud_model->word_2c = 0;
        return 1u;
    }
    guest::cpu()->r[1] = arg1.addr();
    return 0u;
}

}  // namespace d_0069438c
GUEST_EXPORT_FRAMED(0x0069438c, d_0069438c::CloudModel__finish_move, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00694918: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restarts the tab animations, shows the page and starts the open animation.
namespace d_00694918 {

struct __attribute__((packed)) PageTabs {
    u8 unknown_0[0x614];  // (not used here)
    u32 word_614;
};
GUEST_OFFSET(PageTabs, word_614, 0x614);

inline guest::global<u32, 0x00848130> page_tab_handler_b;
inline guest::global<u32, 0x00848134> page_tab_handler_b_adjust;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32)> LayoutAnimator__play_c;

u32 PageTabs__show_page(gptr<PageTabs> page_tabs, u32 r1, u32 r2_unused, u32 r3) {
    u32 pane = Layout__find_pane(page_tabs.addr() + 0x280u, 0x84817cu, 1u, r3);
    notify_list_objects(page_tabs.addr() + 0x280u, page_tabs.addr() + 0x540u, pane, 0u);
    u32 pane_2 = Layout__find_pane(page_tabs.addr() + 0x280u, 0x84817cu, 1u, guest::cpu()->r[3]);
    notify_list_objects(page_tabs.addr() + 0x280u, page_tabs.addr() + 0x568u, pane_2, 0u);
    page_tabs->word_614 = r1;
    return LayoutAnimator__play_c(page_tabs.addr() + 0x14u, *page_tab_handler_b, *page_tab_handler_b_adjust);
}

}  // namespace d_00694918
GUEST_EXPORT_FRAMED(0x00694918, d_00694918::PageTabs__show_page, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00694b54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the selection, restarts the tab animations and starts the open animation.
namespace d_00694b54 {

struct __attribute__((packed)) PageTabs {
    u8 unknown_0[0x611];  // (not used here)
    u8 byte_611;
    u8 byte_612;
    u8 unknown_613[0x1];  // (not used here)
    u32 word_614;
};
GUEST_OFFSET(PageTabs, byte_611, 0x611);
GUEST_OFFSET(PageTabs, byte_612, 0x612);
GUEST_OFFSET(PageTabs, word_614, 0x614);

inline guest::global<u32, 0x00848130> page_tab_handler_b;
inline guest::global<u32, 0x00848134> page_tab_handler_b_adjust;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32)> LayoutAnimator__play_c;

u32 PageTabs__reset(gptr<PageTabs> page_tabs, u32 r1_unused, u32 r2_unused, u32 r3) {
    page_tabs->byte_612 = 0;
    page_tabs->byte_611 = 0;
    u32 r5_1 = ~0u;
    page_tabs->word_614 = r5_1;
    u32 pane = Layout__find_pane(page_tabs.addr() + 0x280u, 0x84817cu, 1u, r3);
    notify_list_objects(page_tabs.addr() + 0x280u, page_tabs.addr() + 0x540u, pane, 0u);
    u32 pane_2 = Layout__find_pane(page_tabs.addr() + 0x280u, 0x84817cu, 1u, guest::cpu()->r[3]);
    notify_list_objects(page_tabs.addr() + 0x280u, page_tabs.addr() + 0x568u, pane_2, 0u);
    page_tabs->word_614 = r5_1;
    return LayoutAnimator__play_c(page_tabs.addr() + 0x14u, *page_tab_handler_b, *page_tab_handler_b_adjust);
}

}  // namespace d_00694b54
GUEST_EXPORT_FRAMED(0x00694b54, d_00694b54::PageTabs__reset, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006953b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Selects the tab with the flag when it changes, and starts the select animation.
namespace d_006953b8 {

struct __attribute__((packed)) PageTabs {
    u8 unknown_0[0x611];  // (not used here)
    u8 byte_611;
    u8 unknown_612[0x6];  // (not used here)
    u8 byte_618;
};
GUEST_OFFSET(PageTabs, byte_611, 0x611);
GUEST_OFFSET(PageTabs, byte_618, 0x618);

inline guest::global<u32, 0x00848128> page_tab_handler_a;
inline guest::global<u32, 0x0084812c> page_tab_handler_a_adjust;
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32)> LayoutAnimator__play_c;

u32 PageTabs__select(gptr<PageTabs> page_tabs, u32 r1, u32 r2) {
    if (u32(s8(page_tabs->byte_611)) == r1) {
        guest::cpu()->r[1] = r1;
        return page_tabs.addr();
    }
    page_tabs->byte_611 = u8(r1);
    page_tabs->byte_618 = u8(r2);
    return LayoutAnimator__play_c(page_tabs.addr() + 0x14u, *page_tab_handler_a, *page_tab_handler_a_adjust);
}

}  // namespace d_006953b8
GUEST_EXPORT_FRAMED(0x006953b8, d_006953b8::PageTabs__select, 0x4010);  // pushes {r4, lr} first, as the original

// f_00695584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns the object (mode 2) and appends it to the list.
namespace d_00695584 {

struct __attribute__((packed)) ObjectList {
    u8 unknown_0[0xeb58];  // (not used here)
    u32 word_eb58;
};
GUEST_OFFSET(ObjectList, word_eb58, 0xeb58);

inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> StringPool__find_message_mode_2;

struct __attribute__((packed)) ObjectListSpawnFrame {
    u32 word_0;
};
GUEST_OFFSET(ObjectListSpawnFrame, word_0, 0x0);
GUEST_SIZE(ObjectListSpawnFrame, 0x4);

u32 ObjectList__spawn(gptr<ObjectList> object_list, u32 string_pool, u32 r2, u32 r3) {
    guest::StackFrameOf<ObjectListSpawnFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(0x10);
    u32 r0_1 = StringPool__find_message_mode_2(string_pool, object_list.addr(), r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r2_1 = object_list->word_eb58;
    if (r2_1 != 0) {
        *gptr<u32>(r2_1) = r0_1;
    }
    object_list->word_eb58 = object_list->word_eb58 + 4u;
    guest::cpu()->r[1] = object_list.addr() + 0xeb54u;
    return r0_1;
}

}  // namespace d_00695584
GUEST_EXPORT_FRAMED(0x00695584, d_00695584::ObjectList__spawn, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00695ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the scene's resources on the stage heap.
namespace d_00695ce4 {

struct __attribute__((packed)) SceneLoadResourcesArg1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u32 word_4;
};
GUEST_OFFSET(SceneLoadResourcesArg1, half_2, 0x2);
GUEST_OFFSET(SceneLoadResourcesArg1, word_4, 0x4);

struct __attribute__((packed)) Local_00695ce4_r2_5 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
    float float_8;
    u32 word_c;
    u16 half_10;
    u16 half_12;
    u16 half_14;
};
GUEST_OFFSET(Local_00695ce4_r2_5, half_0, 0x0);
GUEST_OFFSET(Local_00695ce4_r2_5, word_4, 0x4);
GUEST_OFFSET(Local_00695ce4_r2_5, float_8, 0x8);
GUEST_OFFSET(Local_00695ce4_r2_5, word_c, 0xc);
GUEST_OFFSET(Local_00695ce4_r2_5, half_10, 0x10);
GUEST_OFFSET(Local_00695ce4_r2_5, half_12, 0x12);
GUEST_OFFSET(Local_00695ce4_r2_5, half_14, 0x14);

inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> StringPool__find_message_mode_2;
inline constexpr guest::Function<0x0060e77c, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0060e77c;
inline constexpr guest::Function<0x006ee628, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_006ee628;

struct __attribute__((packed)) SceneLoadResourcesFrame {
    u32 word_0;
    u32 word_4;
    float float_8;
    u32 word_c;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 unknown_16[0x6];  // (not read or written by name)
};
GUEST_OFFSET(SceneLoadResourcesFrame, word_0, 0x0);
GUEST_OFFSET(SceneLoadResourcesFrame, word_4, 0x4);
GUEST_OFFSET(SceneLoadResourcesFrame, float_8, 0x8);
GUEST_OFFSET(SceneLoadResourcesFrame, word_c, 0xc);
GUEST_OFFSET(SceneLoadResourcesFrame, half_10, 0x10);
GUEST_OFFSET(SceneLoadResourcesFrame, half_12, 0x12);
GUEST_OFFSET(SceneLoadResourcesFrame, half_14, 0x14);
GUEST_SIZE(SceneLoadResourcesFrame, 0x1c);

u32 Scene__load_resources(u32 scene, gptr<SceneLoadResourcesArg1> arg1, float S0) {
    guest::StackFrameOf<SceneLoadResourcesFrame> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r9 = guest::cpu()->r[9];
    u32 r0_12 = 0;
    u32 r6 = r1;
    u32 talk = scene;
    if (r1 != 0) {
        u32 r3 = arg1->half_2;
        u32 r2 = arg1->word_4;
        u32 i = 0u;
        u32 r5 = i;
        scene = i;
        if (s32(r3) > 0) {
            do {
                r1 = *gptr<u8>(r2 + (scene << 5) + 0x18u);
                if (r1 == 0) {
                    i += 1u;
                } else if (r1 == 1u) {
                    r5 += 1u;
                }
                scene += 1u;
                guest::preempt();
            } while (s32(r3) > s32(scene));
        }
        guest::cpu()->s[0] = S0;
        u32 scene_5 = current_scene_id(scene, r1, r2, r3);
        u32 scene_6 = current_scene_id(scene_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 scene_flagged_3 = scene_has_flags(0x400000u, scene_6);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (scene_flagged_3 != 0) {
            u32 scene_7 = current_scene_id(scene_flagged_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 scene_flagged_4 = scene_has_flags(0x10u, scene_7);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            if (scene_flagged_4 == 0) {
                r5 += 1u;
            }
        }
        if (scene_5 == 0x9eu) {
            r5 += 2u;
            i += 1u;
        }
        if (*gptr<u32>(talk + 0x710cu) < i) {
            u32 r1_2 = *stage_heap;
            guest::cpu()->s[0] = S0;
            u32 r0_7 = sead__SafeStringBase_char___SafeStringBase_0060e77c(talk + 0x14u, r1_2, i);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            if (r0_7 == 0) {
                return 0u;
            }
        }
        if (*gptr<u32>(talk + 0xe3e8u) < r5) {
            u32 r1_3 = *stage_heap;
            guest::cpu()->s[0] = S0;
            u32 r0_9 = sead__SafeStringBase_char___SafeStringBase_006ee628(talk + 0x72f0u, r1_3, r5);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            if (r0_9 == 0) {
                return 0u;
            }
        }
        u32 r0_10 = *gptr<u16>(r6 + 2u);
        u32 r7 = *gptr<u32>(r6 + 4u);
        i = 0u;
        if (r0_10 != 0 && s32(r0_10) >= 0) {
            r9 = 0x887402u;
            r5 = talk + 0xeb54u;
        }
        if (s32(r0_10) > 0) {
            do {
                gptr<Local_00695ce4_r2_5> r2_5 = gptr<Local_00695ce4_r2_5>(r7 + (i << 5));
                if (r2_5->half_0 == *gptr<u16>(r9)) {
                    u32 r0_11 = *gptr<u32>(r5 + 4u);
                    if (r0_11 != 0) {
                        *gptr<u32>(r0_11) = 0;
                    }
                } else {
                    u32 r1_4 = r2_5->word_c;
                    float S0_4 = r2_5->float_8;
                    frame->word_4 = r2_5->word_4;
                    frame->float_8 = S0_4;
                    frame->word_c = r1_4;
                    frame->half_10 = r2_5->half_10;
                    frame->half_12 = r2_5->half_12;
                    frame->half_14 = r2_5->half_14;
                    u32 v_1 = r2_5->half_0;
                    frame->word_0 = frame.at(0x10).addr();
                    guest::cpu()->s[0] = S0_4;
                    r0_12 = StringPool__find_message_mode_2(v_1, talk, r2_5.addr() + 0x18u, frame.at(4).addr());
                    r1 = guest::cpu()->r[1];
                    S0 = guest::cpu()->s[0];
                    if (r0_12 == 0) {
                        return r0_12;
                    }
                    u32 r1_5 = *gptr<u32>(r5 + 4u);
                    if (r1_5 != 0) {
                        *gptr<u32>(r1_5) = r0_12;
                    }
                }
                i += 1u;
                r1 = *gptr<u32>(r5 + 4u) + 4u;
                *gptr<u32>(r5 + 4u) = r1;
                guest::preempt();
            } while (s32(u32(*gptr<u16>(r6 + 2u))) > s32(i));
        }
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return 0u;
}

}  // namespace d_00695ce4
GUEST_EXPORT_FRAMED(0x00695ce4, d_00695ce4::Scene__load_resources, 0x43f0);  // pushes {i, r5, r6, r7, talk, r9, lr} first, as the original

// f_0069697c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the player's letters, pockets and position for the scene's events.
namespace d_0069697c {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002faea4, u32(u32, u32, u32, u32)> block_at;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x006fa728, u32(u32, u32, u32, u32)> scene_room_record_byte;
inline constexpr guest::Function<0x0070eeec, u32(u32, u32)> MailData__letters_of_player;
inline constexpr guest::Function<0x007201d0, u32(u32, u32, u32, u32)> ItemList40__is_set;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> Pockets__item_with_lock;
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32)> record_173_address;
inline constexpr guest::Function<0x0076eec4, u32(u32, u32, u32, u32)> cell_address_6x10;
inline constexpr guest::Function<0x0076f018, u32(u32, u32, u32, u32)> cell_address_9x10;
inline constexpr guest::Function<0x00770364, u32(u32, u32, u32, u32)> cell_at_00770364;

u32 Scene__check_events(u32 scene, u32 r1, u32 r2, u32 r3) {
    u32 i = 0;
    u32 j = 0;
    u32 k = 0;
    u32 r7 = 0;
    u32 r0_2 = 0;
    u32 data_base = get_data_base(scene, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r9 = data_base + 0x53400u;
    u32 r8 = 0u;
    do {
        k = 0u;
        do {
            r0_2 = block_at(r9, k, r8, r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            r7 = r0_2;
            if (r0_2 != 0) {
                j = 0u;
                do {
                    i = 0u;
                    do {
                        u32 r0_3 = cell_at_00770364(r7, i, j, r3);
                        r0_2 = Item__category(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        r1 = guest::cpu()->r[1];
                        r3 = guest::cpu()->r[3];
                        if (r0_2 == 0x95u) {
                            return 1u;
                        }
                        i += 1u;
                        guest::preempt();
                    } while (i < 0x10u);
                    j += 1u;
                    guest::preempt();
                } while (j < 0x10u);
            }
            k += 1u;
            guest::preempt();
        } while (k < 5u);
        r8 += 1u;
        guest::preempt();
    } while (r8 < 4u);
    u32 player = get_current_player(r0_2, r1, guest::cpu()->r[2], r3);
    j = player;
    u32 r0_6 = PersonalId__is_set(player + 0x55a6u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        k = j + 0x6bd0u;
        i = 0u;
        do {
            u32 r0_7 = Pockets__item_with_lock(k, i, 0u, r3);
            u32 category = Item__category(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (category == 0x95u) {
                return 1u;
            }
            i += 1u;
            guest::preempt();
        } while (i < 0x10u);
        k = j + 0x6f10u;
        i = 0u;
        do {
            u32 r0_9 = ItemList40__is_set(k, i, r2, r3);
            u32 category_2 = Item__category(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (category_2 == 0x95u) {
                return 1u;
            }
            i += 1u;
            guest::preempt();
        } while (i < 0x28u);
        r7 = j + 0x92f0u;
        k = 0u;
        do {
            j = 0u;
            do {
                i = 0u;
                do {
                    u32 r0_11 = cell_address_6x10(r7, k, j, i);
                    u32 category_3 = Item__category(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    if (category_3 == 0x95u) {
                        return 1u;
                    }
                    i += 1u;
                    guest::preempt();
                } while (i < 0xau);
                j += 1u;
                guest::preempt();
            } while (j < 6u);
            k += 1u;
            guest::preempt();
        } while (k < 3u);
        u32 slot_byte = player_slot_byte(4u, r1);
        u32 save_data = get_save_data(slot_byte, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 letters = MailData__letters_of_player(save_data + 0x71900u, slot_byte);
        r7 = letters;
        k = 0u;
        do {
            j = 0u;
            do {
                i = 0u;
                do {
                    u32 r0_17 = cell_address_9x10(r7, k, j, i);
                    u32 category_4 = Item__category(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (category_4 == 0x95u) {
                        return 1u;
                    }
                    i += 1u;
                    guest::preempt();
                } while (i < 0xau);
                j += 1u;
                guest::preempt();
            } while (j < 9u);
            k += 1u;
            guest::preempt();
        } while (k < 4u);
    }
    k = 2u;
    do {
        u32 r5_1 = k & 0xffu;
        u32 r0_19 = scene_room_record_byte(r5_1, r1, r2, r3);
        scene = player_slot_byte(4u, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (scene == r0_19) {
            scene = read_map_table(r5_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r7 = scene;
            if (scene != 0) {
                j = 0u;
                do {
                    i = 0u;
                    do {
                        u32 item = GridMap__process_world_position(r7, i, j, 0u);
                        if (item != 0) {
                            u32 category_5 = Item__category(item, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                            r1 = guest::cpu()->r[1];
                            if (category_5 == 0x95u) {
                                return 1u;
                            }
                        }
                        scene = GridMap__process_world_position(r7, i, j, 1u);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (scene != 0) {
                            scene = Item__category(scene, r1, r2, r3);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (scene == 0x95u) {
                                return 1u;
                            }
                        }
                        i += 1u;
                        guest::preempt();
                    } while (s32(i) < 0x10);
                    j += 1u;
                    guest::preempt();
                } while (s32(j) < 0x10);
            }
        }
        k += 1u;
        guest::preempt();
    } while (s32(k) < 0x1a);
    r8 = 0xfff951c8u;
    k = 0u;
    do {
        u32 save_data_2 = get_save_data(scene, r1, r2, r3);
        u32 r0_24 = record_173_address(save_data_2 + 0x80u - r8, k & 0xffu);
        u32 r4_1 = *gptr<s8>(r0_24);
        scene = player_slot_byte(4u, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r4_1 == scene) {
            scene = read_map_table(k + 0x1au & 0xffu, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r7 = scene;
            if (scene != 0) {
                j = 0u;
                do {
                    i = 0u;
                    do {
                        u32 item_2 = GridMap__process_world_position(r7, i, j, 0u);
                        if (item_2 != 0) {
                            u32 category_6 = Item__category(item_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                            r1 = guest::cpu()->r[1];
                            if (category_6 == 0x95u) {
                                return 1u;
                            }
                        }
                        scene = GridMap__process_world_position(r7, i, j, 1u);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (scene != 0) {
                            scene = Item__category(scene, r1, r2, r3);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (scene == 0x95u) {
                                return 1u;
                            }
                        }
                        i += 1u;
                        guest::preempt();
                    } while (s32(i) < 0x10);
                    j += 1u;
                    guest::preempt();
                } while (s32(j) < 0x10);
            }
        }
        k += 1u;
        guest::preempt();
    } while (s32(k) < 4);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0069697c
GUEST_EXPORT_FRAMED(0x0069697c, d_0069697c::Scene__check_events, 0x47f0);  // pushes {i, j, k, r7, r8, r9, r10, lr} first, as the original

// f_00697e88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the point with the id from the list (0xc bytes each); whether it was there.
namespace d_00697e88 {

struct __attribute__((packed)) PointList {
    u8 unknown_0[0xecac];  // (not used here)
    u32 word_ecac;
    u32 word_ecb0;
};
GUEST_OFFSET(PointList, word_ecac, 0xecac);
GUEST_OFFSET(PointList, word_ecb0, 0xecb0);

struct __attribute__((packed)) Local_00697e88_r1_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00697e88_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_00697e88_r1_2, float_4, 0x4);
GUEST_OFFSET(Local_00697e88_r1_2, float_8, 0x8);

struct __attribute__((packed)) Local_00697e88_r1_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00697e88_r1_3, float_0, 0x0);
GUEST_OFFSET(Local_00697e88_r1_3, float_4, 0x4);
GUEST_OFFSET(Local_00697e88_r1_3, float_8, 0x8);


u32 PointList__remove(gptr<PointList> point_list, u32 r1, float S0, float S1) {
    u32 r0 = point_list.addr();
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_4 = 0;
    r0 += 0xecacu;
    u32 r3 = point_list->word_ecb0;
    u32 r2 = point_list->word_ecac;
    if (r2 == r3) {
        return 0u;
    }
    do {
        if (*gptr<u32>(r2) == r1) {
            u32 r1_1 = r3 - 0xcu;
            *gptr<u32>(r0 + 4u) = r1_1;
            if (r1_1 == r2) {
                guest::cpu()->r[1] = r1_1;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                return 1u;
            }
            do {
                gptr<Local_00697e88_r1_2> r1_2 = gptr<Local_00697e88_r1_2>(r2 + 0xcu);
                S0_1 = r1_2->float_0;
                S1_1 = r1_2->float_4;
                float S2_1 = r1_2->float_8;
                gptr<Local_00697e88_r1_3> r1_3 = gptr<Local_00697e88_r1_3>(r2);
                r2 += 0xcu;
                r1_3->float_0 = S0_1;
                r1_3->float_4 = S1_1;
                r1_3->float_8 = S2_1;
                r1_4 = *gptr<u32>(r0 + 4u);
                guest::preempt();
            } while (r1_4 != r2);
            guest::cpu()->r[1] = r1_4;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        r2 += 0xcu;
        guest::preempt();
    } while (r2 != r3);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00697e88
GUEST_EXPORT(0x00697e88, d_00697e88::PointList__remove);

// f_00697f60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows or hides the event NPC's model, and its shadow unless asked.
namespace d_00697f60 {

inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline constexpr guest::Function<0x0014fd9c, u32(u32, u32)> thunk_0014fd9c;
inline constexpr guest::Function<0x0014fda4, u32(u32, u32, u32, u32)> thunk_0014fda4;
inline constexpr guest::Function<0x006dccb4, u32(u32, u32, u32, u32)> BsNpcMgr__find_by_slot;

u32 EventNpc__set_visible(u32 event_npc, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = r1;
    u32 r0_1 = *event_npc_mode;
    if (r0_1 == 0xffu) {
        r0_1 = *event_npc_source;
        if (r0_1 != 0) {
            r0_1 = BsNpcMgr__find_by_slot(r0_1, event_npc, r2, event_npc);
            r1 = guest::cpu()->r[1];
            u32 r6_1 = r0_1;
            if (r0_1 != 0) {
                r0_1 = thunk_0014fd9c(r0_1, r4_1);
                r1 = guest::cpu()->r[1];
                if (r2 == 0) {
                    frame.release();
                    return thunk_0014fda4(r6_1, r4_1 ^ 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00697f60
GUEST_EXPORT(0x00697f60, d_00697f60::EventNpc__set_visible);

// f_0069858c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the deadline of the listed NPC with the slot; whether it was found.
namespace d_0069858c {

struct __attribute__((packed)) ObjectList {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(ObjectList, word_eb54, 0xeb54);
GUEST_OFFSET(ObjectList, word_eb58, 0xeb58);

struct __attribute__((packed)) Local_0069858c_r0_1 {
    u8 unknown_0[0x938];  // (not used here)
    u32 word_938;
    u8 unknown_93c[0x22];  // (not used here)
    u8 byte_95e;
};
GUEST_OFFSET(Local_0069858c_r0_1, word_938, 0x938);
GUEST_OFFSET(Local_0069858c_r0_1, byte_95e, 0x95e);


u32 ObjectList__set_npc_deadline(gptr<ObjectList> object_list, u32 r1, u32 r2) {
    u32 r12 = r1;
    r1 = object_list->word_eb54;
    u32 r3 = object_list->word_eb58;
    if (r1 == r3) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    do {
        gptr<Local_0069858c_r0_1> r0_1 = gptr<Local_0069858c_r0_1>(*gptr<u32>(r1));
        if (r0_1.addr() != 0 && r0_1->byte_95e == r12) {
            r0_1->word_938 = r2;
            guest::cpu()->r[1] = r2;
            return 1u;
        }
        r1 += 4u;
        guest::preempt();
    } while (r1 != r3);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0069858c
GUEST_EXPORT_FRAMED(0x0069858c, d_0069858c::ObjectList__set_npc_deadline, 0x4010);  // pushes {r4, lr} first, as the original

// f_006985f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the cell is at least 25 cells (Manhattan) from each of the points.
namespace d_006985f0 {

struct __attribute__((packed)) Local_006985f0_r4_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006985f0_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_006985f0_r4_1, byte_1, 0x1);

struct __attribute__((packed)) Local_006985f0_r5_2 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006985f0_r5_2, byte_0, 0x0);
GUEST_OFFSET(Local_006985f0_r5_2, byte_1, 0x1);
GUEST_OFFSET(Local_006985f0_r5_2, byte_2, 0x2);
GUEST_OFFSET(Local_006985f0_r5_2, byte_3, 0x3);


u32 cell_far_from_all(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    if (r1 == 0) {
        r12 = 0u;
    } else {
        r12 = r1 & 1u;
        u32 i = 0u;
        if (s32(r12) > 0) {
            do {
                gptr<Local_006985f0_r4_1> r4_1 = gptr<Local_006985f0_r4_1>(r0 + (i << 1));
                u32 r5_1 = r3 - u32(s8(r4_1->byte_1));
                u32 r4_2 = r2 - u32(s8(r4_1->byte_0));
                if (s32(r4_2) < 0) {
                    r4_2 = 0u - r4_2;
                }
                if (s32(r5_1) < 0) {
                    r5_1 = 0u - r5_1;
                }
                if (s32(r4_2 + r5_1) < 0x19) {
                    return 0u;
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < s32(r12));
        }
    }
    if (r12 >= r1) {
        return 1u;
    }
L_698654:;
    gptr<Local_006985f0_r5_2> r5_2 = gptr<Local_006985f0_r5_2>(r0 + (r12 << 1));
    u32 r4_3 = r2 - u32(s8(r5_2->byte_0));
    u32 r6_1 = r3 - u32(s8(r5_2->byte_1));
    if (s32(r4_3) < 0) {
        r4_3 = 0u - r4_3;
    }
    if (s32(r6_1) < 0) {
        r6_1 = 0u - r6_1;
    }
    if (s32(r4_3 + r6_1) >= 0x19) {
        u32 r4_4 = s8(r5_2->byte_3);
        u32 r5_3 = r2 - u32(s8(r5_2->byte_2));
        u32 r4_5 = r3 - r4_4;
        if (s32(r5_3) < 0) {
            r5_3 = 0u - r5_3;
        }
        if (s32(r4_5) < 0) {
            r4_5 = 0u - r4_5;
        }
        if (s32(r4_5 + r5_3) >= 0x19) {
            r12 += 2u;
            if (r12 < r1) {
                guest::preempt();
                goto L_698654;
            }
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_006985f0
GUEST_EXPORT_FRAMED(0x006985f0, d_006985f0::cell_far_from_all, 0x70);  // pushes {r4, r5, i} first, as the original

// f_00698ac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the day's event may start: the player's flags allow it, it is enabled and not done, and nobody is visiting.
namespace d_00698ac0 {

struct __attribute__((packed)) Local_00698ac0_r0_3 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Local_00698ac0_r0_3, byte_9, 0x9);

inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fdf10, u32(u32, u32)> is_in_registered_list;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;

u32 Event__can_start_today(u32 event, u32 r1) {
    u32 player = get_current_player(event, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (player != 0) {
        r1_1 = *gptr<u8>(player + 0x8aa3u);
        if ((r1_1 & 8u) != 0) {
            u32 data_base = get_data_base(player);
            gptr<Local_00698ac0_r0_3> r0_3 = gptr<Local_00698ac0_r0_3>(data_base + 0x70e62u);
            u32 r1_2 = u32(r0_3->byte_9) | 2u;
            r0_3->byte_9 = u8(r1_2);
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        if (s32(u32(*gptr<u8>(player + 0x5701u)) << 0x1e) >= 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    u32 r0_4 = is_in_registered_list(0xdu, r1_1);
    if (r0_4 != 0) {
        return 0u;
    }
    u32 save_data = get_save_data(r0_4);
    u32 r0_6 = *gptr<u8>(save_data + 0x70eebu);
    if ((r0_6 & 1u) == 0) {
        return 0u;
    }
    u32 save_data_2 = get_save_data(r0_6);
    u32 r0_8 = *gptr<u8>(save_data_2 + 0x70eebu);
    if ((r0_8 & 2u) != 0) {
        return 0u;
    }
    return current_net_signed_value(r0_8) == 0;
}

}  // namespace d_00698ac0
GUEST_EXPORT_FRAMED(0x00698ac0, d_00698ac0::Event__can_start_today, 0x4010);  // pushes {r4, lr} first, as the original

// f_0069a214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the event NPC's talk and sets its villager state.
namespace d_0069a214 {

struct __attribute__((packed)) Local_0069a214_r4_1 {
    u8 unknown_0[0x120];  // (not used here)
    u32 word_120;
};
GUEST_OFFSET(Local_0069a214_r4_1, word_120, 0x120);

inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline constexpr guest::Function<0x001139fd, u32(u32, u32)> SaveVillager__set_state_250f;
inline constexpr guest::Function<0x00119715, u32(u32, u32, u32)> Villager__player_record;
inline constexpr guest::Function<0x0014fd9c, u32(u32, u32)> thunk_0014fd9c;
inline constexpr guest::Function<0x0014fda4, u32(u32, u32)> thunk_0014fda4;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x00309ac9, u32(u32, u32)> shop_is_open_at;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x0052c878, u32(u32)> Talk__notify_first_partner;
inline constexpr guest::Function<0x006dccb4, u32(u32, u32)> BsNpcMgr__find_by_slot;
inline constexpr guest::Function<0x007d1090, u32(u32, u32)> NetPresence__send_13;

struct __attribute__((packed)) EventNpcStartFrame {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(EventNpcStartFrame, byte_1, 0x1);
GUEST_SIZE(EventNpcStartFrame, 0x4);

void EventNpc__start(gptr<BsNpcMgr> bs_npc_mgr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<EventNpcStartFrame> frame;  // the original's stack frame
    u32 r0 = bs_npc_mgr.addr();
    gptr<Local_0069a214_r4_1> r4_1 = gptr<Local_0069a214_r4_1>(0u);
    *frame.at<u32>(0) = r3;
    u32 scene_2 = current_scene_id(r0, r1, r2, r3);
    u32 scene_flagged_2 = scene_has_flags(0x20u, scene_2);
    if (scene_flagged_2 != 0) {
        u32 r0_3 = talk_state_matches(3u, 0u);
        if (r0_3 == 0) {
            u32 data_base = get_data_base(r0_3);
            u32 records = slot_records_of(data_base);
            r4_1 = gptr<Local_0069a214_r4_1>(r0 + 0xf000u);
            u32 valid_villager = valid_villager_at(records + 4u, bs_npc_mgr->word_f120);
            if (valid_villager != 0) {
                if (*event_npc_mode == 0xffu) {
                    u32 r0_7 = *event_npc_source;
                    if (r0_7 != 0) {
                        u32 by_slot = BsNpcMgr__find_by_slot(r0_7, bs_npc_mgr->word_f120);
                        if (Talk__notify_first_partner(by_slot) != by_slot) {
                            u32 r0_10 = *gptr<u8>(valid_villager + 0x250fu);
                            if (r0_10 != 2u) {
                                if (r0_10 != 0x17u) {
                                    return;
                                }
                                if (shop_is_open_at(valid_villager, 0u) != 0) {
                                    return;
                                }
                                SaveVillager__set_state_250f(valid_villager, 2u);
                                u32 r1_6 = bs_npc_mgr->word_f120;
                                if (*event_npc_mode != 0xffu) {
                                    goto L_69a3c8;
                                }
                                u32 r0_12 = *event_npc_source;
                                if (r0_12 != 0) {
                                    u32 by_slot_2 = BsNpcMgr__find_by_slot(r0_12, r1_6);
                                    if (by_slot_2 != 0) {
                                        thunk_0014fd9c(by_slot_2, 0u);
                                        thunk_0014fda4(by_slot_2, 1u);
                                    }
                                }
                                goto L_69a3c8;
                            }
                            if (shop_is_open_at(valid_villager, 0u) != 0) {
                                if (Villager__player_record(records + 4u, r4_1->word_120, 0u) == 0) {
                                    SaveVillager__set_state_250f(valid_villager, 0x17u);
                                    u32 r1_8 = r4_1->word_120;
                                    if (*event_npc_mode == 0xffu) {
                                        u32 r0_16 = *event_npc_source;
                                        if (r0_16 != 0) {
                                            u32 by_slot_3 = BsNpcMgr__find_by_slot(r0_16, r1_8);
                                            if (by_slot_3 != 0) {
                                                thunk_0014fd9c(by_slot_3, 1u);
                                                thunk_0014fda4(by_slot_3, 0u);
                                            }
                                        }
                                    }
                                    *frame.at<u8>(0) = u8(r4_1->word_120);
                                    frame->byte_1 = 0;
                                    NetPresence__send_13(4u, frame.at(0).addr());
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
L_69a3c8:;
    *frame.at<u8>(0) = u8(r4_1->word_120);
    frame->byte_1 = 1;
    NetPresence__send_13(4u, frame.at(0).addr());
}

}  // namespace d_0069a214
GUEST_EXPORT_FRAMED(0x0069a214, d_0069a214::EventNpc__start, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0069a764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Looks through the pointer list at +0xee354 for an entry matching the two arguments.
namespace d_0069a764 {


u32 find_in_list_ee354(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r8 = r1;
    u32 r7 = r2;
    u32 i = 0u;
    u32 r5 = r0 + 0xeb54u;
    do {
        u32 r0_1 = *gptr<u32>(r5);
        r1_1 = s32(*gptr<u32>(r5 + 4) - r0_1) >> 2;
        if (i < r1_1) {
            u32 r6_1 = gptr<u32>(r0_1)[i];
            if (r6_1 != 0 && *gptr<u16>(r6_1 + 0xcu) == r7) {
                r0_2 = r6_1;
                r1_1 = *gptr<u32>(r6_1 + 0x1030u);
                if (r1_1 == r8) {
                    guest::cpu()->r[1] = r1_1;
                    return r0_2;
                }
            }
        }
        i += 1u;
        guest::preempt();
    } while (i < 0xau);
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0069a764
GUEST_EXPORT_FRAMED(0x0069a764, d_0069a764::find_in_list_ee354, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_0069a91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual function 60 of the listed NPC with the slot.
namespace d_0069a91c {

struct __attribute__((packed)) ObjectList {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(ObjectList, word_eb54, 0xeb54);
GUEST_OFFSET(ObjectList, word_eb58, 0xeb58);

struct __attribute__((packed)) Local_0069a91c_r0_1 {
    u32 word_0;
    u8 unknown_4[0x95a];  // (not used here)
    u8 byte_95e;
};
GUEST_OFFSET(Local_0069a91c_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0069a91c_r0_1, byte_95e, 0x95e);


void ObjectList__notify_npc(gptr<ObjectList> object_list, u32 npc_lock_player_permit_bit) {
    u32 r2 = object_list->word_eb54;
    u32 r3 = object_list->word_eb58;
    if (r2 == r3) {
        return;
    }
    do {
        gptr<Local_0069a91c_r0_1> r0_1 = gptr<Local_0069a91c_r0_1>(*gptr<u32>(r2));
        if (r0_1.addr() != 0 && r0_1->byte_95e == npc_lock_player_permit_bit) {
            u32 r1_1 = *gptr<u32>(r0_1->word_0 + 0xf0u);
            // virtual function 60 of r0_1.addr()
            guest::call_address<u32>(r1_1, r0_1.addr(), r1_1, r2, r3);
            return;
        }
        r2 += 4u;
        guest::preempt();
    } while (r2 != r3);
}

}  // namespace d_0069a91c
GUEST_EXPORT(0x0069a91c, d_0069a91c::ObjectList__notify_npc);

// f_0069aec4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the evening event may start: alone, past the hour, in fair weather, and with the player's badge ready.
namespace d_0069aec4 {

struct __attribute__((packed)) Local_0069aec4_r3_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0069aec4_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_0069aec4_r3_2, word_4, 0x4);
GUEST_OFFSET(Local_0069aec4_r3_2, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x00300650, u32(u32)> day_start_by_clock_mode;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x0062f950, u32(u32)> weather_class_of_today;
inline constexpr guest::Function<0x00716128, u32(u32, u32)> any_badge_ready;
inline constexpr guest::Function<0x0074fff8, u32(u32, u32, u32, u32)> TimeStamp__is_after_now;

struct __attribute__((packed)) EventEveningCheckFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(EventEveningCheckFrame, word_0, 0x0);
GUEST_OFFSET(EventEveningCheckFrame, word_4, 0x4);
GUEST_OFFSET(EventEveningCheckFrame, word_8, 0x8);
GUEST_SIZE(EventEveningCheckFrame, 0x1c);

u32 Event__evening_check(u32 event, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<EventEveningCheckFrame> frame;  // the original's stack frame
    if (current_net_signed_value(event, r1, r2, r3) != 0) {
        return 0u;
    }
    day_start_by_clock_mode(frame.at(0xc).addr());
    gptr<Local_0069aec4_r3_2> r3_2 = gptr<Local_0069aec4_r3_2>(frame.at(0xc).addr());
    u32 r1_2 = r3_2->word_4;
    u32 r2_2 = r3_2->word_8;
    frame->word_0 = r3_2->word_0;
    frame->word_4 = r1_2;
    frame->word_8 = r2_2;
    u32 r0_4 = TimeStamp__is_after_now(frame.at(0).addr(), 0u, r2_2, r3_2.addr());
    if (r0_4 == 0) {
        return 0u;
    }
    u32 now_4 = game_time_now(r0_4);
    u32 r0_6 = *gptr<s8>(now_4 + 7u);
    if (s32(r0_6) < 6) {
        return 0u;
    }
    u32 now_5 = game_time_now(r0_6);
    u32 r0_8 = *gptr<u8>(now_5 + 6u);
    if (r0_8 == 0) {
        u32 now_6 = game_time_now(r0_8);
        r0_8 = *gptr<s8>(now_6 + 7u);
        if (s32(r0_8) < 0xc) {
            return 0u;
        }
    }
    u32 weather_class = weather_class_of_today(r0_8);
    if (weather_class != 0) {
        return 0u;
    }
    u32 player = get_current_player(weather_class);
    if (player == 0) {
        return 1u;
    }
    u32 r1_8 = u32(*gptr<u8>(player + 0x5701u)) << 0x1e;
    if (s32(r1_8) >= 0) {
        guest::cpu()->r[1] = r1_8;
        return 0u;
    }
    u32 r0_13 = any_badge_ready(player + 0x55dcu, r1_8);
    return r0_13 == 0 ? r0_13 : 1u;
}

}  // namespace d_0069aec4
GUEST_EXPORT_FRAMED(0x0069aec4, d_0069aec4::Event__evening_check, 0x4000);  // pushes {lr} first, as the original

// f_0069b0ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Chooses a free cell for the event near the plaza or the structures.
namespace d_0069b0ac {

struct __attribute__((packed)) Event {
    u8 unknown_0[0xeb58];  // (not used here)
    u32 word_eb58;
};
GUEST_OFFSET(Event, word_eb58, 0xeb58);

struct __attribute__((packed)) Local_0069b0ac_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0069b0ac_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0069b0ac_ea_4, word_4, 0x4);

inline guest::global<u16, 0x00887292> global_00887292;
inline guest::global<u16, 0x0088729a> event_spot_table;
inline guest::global<u16, 0x0088729c> global_0088729c;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u8, 0x0095013e> global_0095013e;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> get_current_player;
inline constexpr guest::Function<0x00307220, u32(u32, u32)> cell_position_of_id_2;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> StringPool__find_message_mode_2;
inline constexpr guest::Function<0x005c886c, u32(u32, u32)> try_set_player_input_flag_6;
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> cell_corner;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32)> cell_corner_with_height;
inline constexpr guest::Function<0x006cbbe4, u32(u32, u32, u32)> first_placed_structure_of_4_b;
inline constexpr guest::Function<0x006fa76c, u32(u32, u32, u32)> free_cell_position;

struct __attribute__((packed)) EventChooseSpotFrame {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u8 unknown_a[0x7];  // (not read or written by name)
    u8 byte_11;
    u8 unknown_12[0x2];  // (not read or written by name)
    u32 word_14;
    float float_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
    u8 byte_20;
    u8 byte_21;
    u8 unknown_22[0x2];  // (not read or written by name)
    u32 word_24;
    u32 word_28;
    float float_2c;
    u8 byte_30;
    u8 byte_31;
    u8 unknown_32[0x2];  // (not read or written by name)
    u32 word_34;
    u8 unknown_38[0x4];  // (not read or written by name)
};
GUEST_OFFSET(EventChooseSpotFrame, word_0, 0x0);
GUEST_OFFSET(EventChooseSpotFrame, half_4, 0x4);
GUEST_OFFSET(EventChooseSpotFrame, half_6, 0x6);
GUEST_OFFSET(EventChooseSpotFrame, half_8, 0x8);
GUEST_OFFSET(EventChooseSpotFrame, byte_11, 0x11);
GUEST_OFFSET(EventChooseSpotFrame, word_14, 0x14);
GUEST_OFFSET(EventChooseSpotFrame, float_18, 0x18);
GUEST_OFFSET(EventChooseSpotFrame, byte_20, 0x20);
GUEST_OFFSET(EventChooseSpotFrame, byte_21, 0x21);
GUEST_OFFSET(EventChooseSpotFrame, word_24, 0x24);
GUEST_OFFSET(EventChooseSpotFrame, word_28, 0x28);
GUEST_OFFSET(EventChooseSpotFrame, float_2c, 0x2c);
GUEST_OFFSET(EventChooseSpotFrame, byte_30, 0x30);
GUEST_OFFSET(EventChooseSpotFrame, byte_31, 0x31);
GUEST_OFFSET(EventChooseSpotFrame, word_34, 0x34);
GUEST_SIZE(EventChooseSpotFrame, 0x3c);

void Event__choose_spot(gptr<Event> event, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<EventChooseSpotFrame> frame;  // the original's stack frame
    u32 talk = event.addr();
    u32 r6 = guest::cpu()->r[6];
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    gptr<Local_0069b0ac_ea_4> ea_4 = gptr<Local_0069b0ac_ea_4>(0u);
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_5 = 0;
    float S0_4 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_7 = 0;
    u32 r0_9 = 0;
    u32 r3_6 = 0;
    u32 scene_2 = current_scene_id(talk, r1, r2, r3);
    u32 scene_flagged_2 = scene_has_flags(0x10u, scene_2);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (scene_flagged_2 != 0) {
        return;
    }
    u32 player = get_current_player(scene_flagged_2, r1);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (player == 0) {
        return;
    }
    r1 = *gptr<u8>(player + 0x5704u);
    u32 r5 = talk + 0xeb54u;
    u32 r2_3 = r1 >> 7;
    if (r2_3 == 0) {
        goto L_69b204;
    }
    if (*global_0095013e == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1_1 = frame.at(8).addr();
    r0_4 = frame.at(4).addr();
    free_cell_position(r0_4, r1_1, r2_3);
    ea_1 = frame.at(0x1c).addr();
    *gptr<u16>(ea_1) = 0;
    ea_2 = frame.at(0x1e).addr();
    *gptr<u16>(ea_2) = u16(0xffffc000u);
    ea_3 = frame.at(0x20).addr();
    *gptr<u16>(ea_3) = 0;
    ea_4 = gptr<Local_0069b0ac_ea_4>(frame.at(4).addr());
    r1_2 = ea_4->word_0;
    r2_4 = ea_4->word_4;
    r0_5 = frame.at(0x10).addr();
    cell_corner(r0_5, r1_2, r2_4);
    S0_3 = std::bit_cast<float>(*frame.at<u32>(0x10));
    frame->word_28 = frame->word_14;
    S1_3 = frame->float_18;
    S2_5 = 20.0f;
    frame->word_24 = std::bit_cast<u32>(S0_3 + S2_5);
    S0_4 = S1_3 - 20.0f;
    r3_5 = frame.at(0x24).addr();
    frame->float_2c = S0_4;
    r1_3 = *empty_string;
    frame->byte_30 = 1;
    r2_5 = frame.at(0x30).addr();
    frame->byte_31 = 0;
    frame->word_34 = (((r6 & ~0xffu | 0x73u) & ~0xff00u | 0x7au << 8 & 0xff00u) & ~0xff0000u | 0x61u << 0x10 & 0xff0000u) & ~0xff000000u | r1_3 << 0x18;
    r0_6 = *global_0088729c;
    frame->word_0 = frame.at(0x1c).addr();
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_5;
    r0_7 = StringPool__find_message_mode_2(r0_6, talk, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_7 == 0) {
        return;
    }
    r1 = event->word_eb58;
    if (r1 != 0) {
        *gptr<u32>(r1) = r0_7;
    }
    *gptr<u32>(r5 + 4u) = *gptr<u32>(r5 + 4u) + 4u;
    guest::cpu()->r[1] = r1;
    return;
L_69b204:;
    u32 r2_6 = r1 << 0x1a;
    if (s32(r2_6) >= 0) {
        goto L_69b2bc;
    }
    r0_8 = frame.at(0x18).addr();
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    cell_corner_with_height(r0_8, 0x3bu, 6u);
    frame->half_4 = 0;
    frame->half_6 = 0;
    frame->half_8 = 0;
    r1_4 = ((r6 >> 0x10 << 0x10 | 0x72u | 0x63u << 8 & 0xff00u) & ~0xff0000u | 0x6fu << 0x10 & 0xff0000u) & ~0xff000000u | u32(*empty_string) << 0x18;
    *frame.at<u8>(0x10) = 1;
    frame->byte_11 = 0;
    frame->word_14 = r1_4;
    r2_7 = frame.at(0x10).addr();
    r0_9 = *global_00887292;
    r3_6 = frame.at(0x18).addr();
    frame->word_0 = frame.at(4).addr();
    r0_7 = StringPool__find_message_mode_2(r0_9, talk, r2_7, r3_6);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_7 == 0) {
        return;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 == 0) {
        *gptr<u32>(r5 + 4u) = *gptr<u32>(r5 + 4u) + 4u;
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u32>(r1) = r0_7;
    *gptr<u32>(r5 + 4u) = *gptr<u32>(r5 + 4u) + 4u;
    guest::cpu()->r[1] = r1;
    return;
L_69b2bc:;
    r1 <<= 0x19;
    if (s32(r1) >= 0) {
        u32 r0_10 = u32(*gptr<u8>(player + 0x5700u)) << 0x1b;
        if (s32(r0_10) >= 0) {
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return;
        }
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        u32 r0_11 = first_placed_structure_of_4_b(r0_10, r1, r2_6);
        cell_position_of_id_2(frame.at(0x10).addr(), r0_11);
        float S3_8 = 2.5f;
        float S1_6 = 2.0f;
        float S2_8 = 32.0f;
        frame->float_18 = frame->float_18 + S2_8 * S3_8;
        float S0_7 = std::bit_cast<float>(*frame.at<u32>(0x10)) + S2_8 * S1_6;
        *frame.at<u32>(0x10) = std::bit_cast<u32>(S0_7);
        frame->half_4 = 0;
        frame->half_8 = 0;
        frame->half_6 = u16(0xffff8000u);
        u32 r1_5 = (((r6 & ~0xffu | 0x73u) & ~0xff00u | 0x7au << 8 & 0xff00u) & ~0xff0000u | 0x61u << 0x10 & 0xff0000u) & ~0xff000000u | u32(*empty_string) << 0x18;
        frame->byte_20 = 1;
        frame->byte_21 = 0;
        frame->word_24 = r1_5;
        u32 string_pool = *event_spot_table;
        frame->word_0 = frame.at(4).addr();
        guest::cpu()->s[0] = S0_7;
        guest::cpu()->s[1] = S1_6;
        guest::cpu()->s[2] = S2_8;
        guest::cpu()->s[3] = S3_8;
        u32 r0_14 = StringPool__find_message_mode_2(string_pool, talk, frame.at(0x20).addr(), frame.at(0x10).addr());
        u32 r1_6 = guest::cpu()->r[1];
        if (r0_14 != 0) {
            r1_6 = *gptr<u32>(r5 + 4u);
            if (r1_6 != 0) {
                *gptr<u32>(r1_6) = r0_14;
            }
            *gptr<u32>(r5 + 4u) = *gptr<u32>(r5 + 4u) + 4u;
        }
        try_set_player_input_flag_6(r0_14, r1_6);
        return;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_0069b0ac
GUEST_EXPORT_FRAMED(0x0069b0ac, d_0069b0ac::Event__choose_spot, 0x47b0);  // pushes {r4, r5, r7, r8, r9, r10, lr} first, as the original

// f_0069b3f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns the event NPC at the chosen cell.
namespace d_0069b3f0 {

struct __attribute__((packed)) Event {
    u8 unknown_0[0xeb58];  // (not used here)
    u32 word_eb58;
};
GUEST_OFFSET(Event, word_eb58, 0xeb58);

struct __attribute__((packed)) Local_0069b3f0_r5_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_0069b3f0_r5_2, word_4, 0x4);

inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u16, 0x0088725e> event_npc_table;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x00106319, u32(u32, u32, u32, u32)> current_slot_byte_853e36;
inline constexpr guest::Function<0x00307220, u32(u32, u32)> cell_position_of_id_2;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> StringPool__find_message_mode_2;

struct __attribute__((packed)) EventSpawnNpcFrame {
    u32 word_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    float float_c;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 unknown_16[0x2];  // (not read or written by name)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x2];  // (not read or written by name)
    u32 word_1c;
};
GUEST_OFFSET(EventSpawnNpcFrame, word_0, 0x0);
GUEST_OFFSET(EventSpawnNpcFrame, float_4, 0x4);
GUEST_OFFSET(EventSpawnNpcFrame, float_c, 0xc);
GUEST_OFFSET(EventSpawnNpcFrame, half_10, 0x10);
GUEST_OFFSET(EventSpawnNpcFrame, half_12, 0x12);
GUEST_OFFSET(EventSpawnNpcFrame, half_14, 0x14);
GUEST_OFFSET(EventSpawnNpcFrame, byte_18, 0x18);
GUEST_OFFSET(EventSpawnNpcFrame, byte_19, 0x19);
GUEST_OFFSET(EventSpawnNpcFrame, word_1c, 0x1c);
GUEST_SIZE(EventSpawnNpcFrame, 0x20);

void Event__spawn_npc(gptr<Event> event, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<EventSpawnNpcFrame> frame;  // the original's stack frame
    u32 talk = event.addr();
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r5_1 = *current_player_data;
    if (r5_1 != 0) {
        u32 r0_1 = current_slot_byte_853e36(player_state_block_address, r1, r2, r3);
        cell_position_of_id_2(frame.at(4).addr(), r0_1);
        float S1_2 = 64.0f;
        float S2_2 = 48.0f;
        frame->float_4 = frame->float_4 + S1_2;
        float S0_2 = frame->float_c + S2_2;
        frame->float_c = S0_2;
        frame->half_10 = 0;
        frame->half_12 = 0x4000;
        frame->half_14 = 0;
        u32 r12_1 = u32(*gptr<u8>(r5_1 + 0x5700u)) & 0xfu;
        u32 r6_1 = r12_1 & ~0xffu;
        gptr<Local_0069b3f0_r5_2> r5_2 = gptr<Local_0069b3f0_r5_2>(talk + 0xeb54u);
        u32 r12_2 = 0x6fu << 8;
        if (r12_1 == 3u) {
            u32 r2_2 = *empty_string;
            frame->byte_18 = 1;
            frame->word_1c = (((0x6du | r6_1) & ~0xff00u | r12_2 & 0xff00u) & ~0xff0000u | 0x62u << 0x10 & 0xff0000u) & ~0xff000000u | r2_2 << 0x18;
            frame->byte_19 = 0;
            u32 string_pool = *event_npc_table;
            frame->word_0 = frame.at(0x10).addr();
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_2;
            guest::cpu()->s[2] = S2_2;
            r0_4 = StringPool__find_message_mode_2(string_pool, talk, frame.at(0x18).addr(), frame.at(4).addr());
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_4 == 0) {
                return;
            }
            r1_1 = r5_2->word_4;
            if (r1_1 != 0) {
                goto L_69b4f8;
            }
            goto L_69b578;
        }
        r3_3 = (((0x6du | r6_1) & ~0xff00u | r12_2 & 0xff00u) & ~0xff0000u | 0x6cu << 0x10 & 0xff0000u) & ~0xff000000u | u32(*empty_string) << 0x18;
        frame->byte_18 = 1;
        frame->word_1c = r3_3;
        frame->byte_19 = 0;
        r0_5 = *event_npc_table;
        r2_4 = frame.at(0x18).addr();
        r3_4 = frame.at(4).addr();
        frame->word_0 = frame.at(0x10).addr();
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        r0_4 = StringPool__find_message_mode_2(r0_5, talk, r2_4, r3_4);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_4 == 0) {
            return;
        }
        r1_1 = event->word_eb58;
        if (r1_1 == 0) {
            goto L_69b578;
        }
L_69b4f8:;
        *gptr<u32>(r1_1) = r0_4;
L_69b578:;
        r5_2->word_4 = r5_2->word_4 + 4u;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_0069b3f0
GUEST_EXPORT_FRAMED(0x0069b3f0, d_0069b3f0::Event__spawn_npc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0069c838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the current player still needs the event's introduction.
namespace d_0069c838 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x003188f0, u32(u32)> first_registered_id_of_class_0;

u32 Event__player_needs_intro(u32 event) {
    u32 player = get_current_player(event, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (first_registered_id_of_class_0(player) != 0xeu) {
        return 0u;
    }
    if (player != 0 && (u32(*gptr<u8>(player + 0x8a6bu)) & 1u) == 0) {
        return 1u;
    }
    if (s32(u32(*gptr<u8>(player + 0x8f7du)) << 0x1d) >= 0) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_0069c838
GUEST_EXPORT_FRAMED(0x0069c838, d_0069c838::Event__player_needs_intro, 0x4010);  // pushes {r4, lr} first, as the original

// f_0069f26c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the event's town flags when no player qualifies, and whether the save's flag is set.
namespace d_0069f26c {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x5701];  // (not used here)
    u8 byte_5701;
    u8 unknown_5702[0x17];  // (not used here)
    u8 byte_5719;
};
GUEST_OFFSET(Player, byte_5701, 0x5701);
GUEST_OFFSET(Player, byte_5719, 0x5719);

struct __attribute__((packed)) Local_0069f26c_r0_3 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_0069f26c_r0_3, byte_a, 0xa);

struct __attribute__((packed)) Local_0069f26c_r0_6 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_0069f26c_r0_6, byte_a, 0xa);

struct __attribute__((packed)) Local_0069f26c_r0_8 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0069f26c_r0_8, byte_0, 0x0);

inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fdf10, u32(u32)> is_in_registered_list;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;

u32 Event__update_flags(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r1_2 = 0;
    gptr<Player> player = gptr<Player>(player_of_slot_index(0u, r1, r2, r3));
    if (player.addr() == 0) {
        u32 data_base = get_data_base(player.addr());
        gptr<Local_0069f26c_r0_3> r0_3 = gptr<Local_0069f26c_r0_3>(data_base + 0x6214fu);
        r1_2 = u32(r0_3->byte_a) & ~0x40u;
        r0_3->byte_a = u8(r1_2);
    } else {
        u32 r0_4 = is_in_registered_list(0xbu);
        r1_2 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            u32 r0_5 = player->byte_5719;
            u32 r2_2 = player->byte_5701;
            u32 r1_3 = r0_5 >> 1u & 1u;
            gptr<Local_0069f26c_r0_6> r0_6 = gptr<Local_0069f26c_r0_6>(r1_3 | r0_5 >> 2u & 1u | r0_5 >> 3u & 1u);
            if ((r0_6.addr() & r2_2 >> 1) == 0) {
                u32 data_base_2 = get_data_base(r0_6.addr());
                gptr<Local_0069f26c_r0_8> r0_8 = gptr<Local_0069f26c_r0_8>(data_base_2 - 0xfff901ccu);
                r0_8->byte_0 = u8(u32(r0_8->byte_0) & ~0x80u);
                u32 data_base_3 = get_data_base(r0_8.addr());
                r0_6 = gptr<Local_0069f26c_r0_6>(data_base_3 + 0x6214fu);
                r1_3 = u32(r0_6->byte_a) & ~0x40u;
                r0_6->byte_a = u8(r1_3);
            }
            u32 save_data = get_save_data(r0_6.addr(), r1_3);
            u32 r0_11 = u32(*gptr<u8>(save_data + 0x6feb4u)) & 0x80u;
            if (r0_11 != 0) {
                r0_11 = 1u;
            }
            return r0_11;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0069f26c
GUEST_EXPORT_FRAMED(0x0069f26c, d_0069f26c::Event__update_flags, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
