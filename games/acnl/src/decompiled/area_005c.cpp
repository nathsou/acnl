// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_005c00f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c00f0 {


void f_005c00f0(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        *gptr<u8>(r0 + r1) = u8(r2 & 3u);
    }
}

}  // namespace d_005c00f0
GUEST_EXPORT(0x005c00f0, d_005c00f0::f_005c00f0);

// f_005c0100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0100 {

struct __attribute__((packed)) Local_005c0100_r0_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_005c0100_r0_2, byte_0, 0x0);


u32 f_005c0100(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r2 = r0;
    u32 r12 = ~0u;
    r0 = *gptr<s8>(r0 + r1);
    if (s32(r0) >= 4 || s32(r0) < 0) {
        r3 = 0u;
        u32 r4 = 1u;
        *frame.at<u8>(0) = 0;
        do {
            u32 r0_1 = *gptr<s8>(r2 + r3);
            if (r0_1 < 4u) {
                gptr<Local_005c0100_r0_2> r0_2 = gptr<Local_005c0100_r0_2>(frame.at(0).addr() + (r0_1 >> 3));
                r0_2->byte_0 = u8(u32(r0_2->byte_0) | lsl_r(r4, (r0_1 & 7u) & 0xff));  // (from the original)
            }
            r3 += 1u;
            guest::preempt();
        } while (r3 < 4u);
        r0 = 0u;
        r3 = frame.at(0).addr();
L_5c0168:;
        if ((u32(*gptr<u8>(r3 + (r0 >> 3))) >> (r0 & 7u) & 1u) == 0) {
            if (r1 < 4u) {
                *gptr<u8>(r2 + r1) = u8(r0 & 3u);
            }
        } else {
            r0 += 1u;
            if (r0 < 4u) {
                r3 = frame.at(0).addr();
                guest::preempt();
                goto L_5c0168;
            }
            r0 = 0u;
            if (r1 < 4u) {
                do {
                    if (u32(*gptr<s8>(r2 + r0)) < 4u) {
                        r0 = *gptr<s8>(r2 + r1);
                        u32 res_1 = r0 - 4u;
                        u32 nf_1 = res_1 >> 0x1f;  // (from the original)
                        u32 vf_1 = ((r0 ^ 4u) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
                        if (nf_1 == vf_1) {
                            r0 = r12;
                        } else {
                            nf_1 = r0 >> 0x1f;  // (from the original)
                            vf_1 = 0u;
                        }
                        if (nf_1 != vf_1) {
                            return r1;
                        }
                        goto L_5c01e0;
                    }
                    r0 += 1u;
                    guest::preempt();
                } while (r0 < 4u);
                r0 = r1;
                goto L_5c01e0;
            }
        }
    }
    return r0;
L_5c01e0:;
    return r0 < 4u ? r0 : r1;
}

}  // namespace d_005c0100
GUEST_EXPORT_FRAMED(0x005c0100, d_005c0100::f_005c0100, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_005c021c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the clothing item the current player holds into a free pocket slot (unless a request has it reserved), and
// records the player and slot in `ref`; true when it did.
namespace d_005c021c {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x0030bb10, u32(u32)> Item__is_wear_class_7;
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> request_is_reserved;
inline constexpr guest::Function<0x00657748, u32(u32)> call_00657748;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x007241b0, u32(u32)> Pockets__find_empty_slot;

struct __attribute__((packed)) Frame_005c021c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c021c, word_0, 0x0);
GUEST_SIZE(Frame_005c021c, 0x8);

u32 move_held_clothing_to_pockets(u32 ref, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c021c> frame;  // the original's stack frame
    u32 r0_1 = request_is_reserved(ref, r1, r2, r3);
    if (r0_1 == 0) {
        u32 player = *current_player_data;
        if (player != 0) {
            u32 r0_3 = slot_7_if_class_7(player + 0xau);  // (from the original)
            copy_item_002fc934(frame.at(4).addr(), r0_3);
            u32 pockets = player + 0x6bd0u;  // (from the original)
            u32 r0_6 = Item__is_wear_class_7(frame.at(4).addr());
            if (r0_6 != 0) {
                u32 slot_2 = Pockets__find_empty_slot(pockets);
                if (slot_2 + 1u != 0) {
                    u32 r0_9 = call_00657748(frame.at(4).addr());
                    frame->word_0 = r0_9 ^ 1u;
                    Pockets__set_slot(pockets, slot_2, frame.at(4).addr(), 0u);
                    if (slot_2 < 0x10u) {  // (from the original)
                        u32 r0_10 = *current_player_data;
                        if (r0_10 != 0) {
                            copy_46_bytes(ref, r0_10 + 0x55a6u);  // (from the original)
                            *gptr<u32>(ref + 0x30u) = slot_2;  // (from the original)
                            *gptr<u8>(ref + 0x34u) = 0;  // (from the original)
                            *gptr<u8>(ref + 0x35u) = 0;  // (from the original)
                        }
                    }
                    *gptr<u8>(ref + 0x35u) = 1;  // (from the original)
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
namespace d_005c032c {

inline constexpr guest::Function<0x005c0334, u32(u32, u32, u32, u32)> call_005c0334;

void f_005c032c(u32 r0) {
    call_005c0334(r0, guest::cpu()->r[1], 0u, guest::cpu()->r[3]);
}

}  // namespace d_005c032c
GUEST_EXPORT(0x005c032c, d_005c032c::f_005c032c);

// f_005c0648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records the current player's identity and pocket `slot` (fewer than 16) in `ref`.
namespace d_005c0648 {

struct __attribute__((packed)) PocketRef {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
    u8 byte_34;
    u8 byte_35;
};
GUEST_OFFSET(PocketRef, word_30, 0x30);
GUEST_OFFSET(PocketRef, byte_34, 0x34);
GUEST_OFFSET(PocketRef, byte_35, 0x35);

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;

void PocketRef__set(gptr<PocketRef> ref, u32 slot) {
    if (slot >= 0x10u) {  // (from the original)
        return;
    }
    u32 r0_1 = *current_player_data;
    if (r0_1 != 0) {
        copy_46_bytes(ref.addr(), r0_1 + 0x55a6u);  // (from the original)
        ref->word_30 = slot;
        ref->byte_34 = 0;
        ref->byte_35 = 0;
    }
}

}  // namespace d_005c0648
GUEST_EXPORT_FRAMED(0x005c0648, d_005c0648::PocketRef__set, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c0694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0694 {

inline constexpr guest::Function<0x005c0334, u32(u32, u32, u32, u32)> call_005c0334;

void f_005c0694() {
    call_005c0334(guest::cpu()->r[0], guest::cpu()->r[1], 1u, guest::cpu()->r[3]);
}

}  // namespace d_005c0694
GUEST_EXPORT(0x005c0694, d_005c0694::f_005c0694);

// f_005c069c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c069c {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;

u32 f_005c069c(u32 r0_unused, u32 r1) {
    u32 r0_1 = *current_player_data;
    if (r0_1 == 0) {
        return 1u;
    }
    u32 r0_2 = 1u & ~u32(*gptr<u8>(r0_1 + 0x55bau));  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_2;
}

}  // namespace d_005c069c
GUEST_EXPORT(0x005c069c, d_005c069c::f_005c069c);

// f_005c0874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0874 {

inline guest::global<u8, 0x00aadad4> global_00aadad4;
inline guest::global<u8, 0x00aadad5> global_00aadad5;

void f_005c0874() {
    *global_00aadad4 = u8(u32(*global_00aadad4) & ~0x40u);  // (from the original)
    u32 r1_1 = u32(*global_00aadad5) & ~0x20u;  // (from the original)
    *global_00aadad5 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005c0874
GUEST_EXPORT(0x005c0874, d_005c0874::f_005c0874);

// f_005c0898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item the main player holds (empty without a player).
namespace d_005c0898 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00765e04, u32(u32, u32)> call_00765e04;

u32 copy_player_held_item(u32 item) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object != 0) {
        u32 r0_2 = call_00765e04(object, 0u);
        frame.release();
        return copy_item_002fc934(item, r0_2);
    }
    frame.release();
    return copy_item_002fc934(item, empty_item_address);
}

}  // namespace d_005c0898
GUEST_EXPORT(0x005c0898, d_005c0898::copy_player_held_item);

// f_005c0a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0a68 {

struct __attribute__((packed)) Local_005c0a68_r4_1 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x37];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Local_005c0a68_r4_1, byte_171, 0x171);
GUEST_OFFSET(Local_005c0a68_r4_1, byte_1a9, 0x1a9);

inline constexpr guest::Function<0x005c0874, u32(u32)> call_005c0874;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00665130, u32(u32)> call_00665130;
inline constexpr guest::Function<0x006736dc, u32(u32, u32)> call_006736dc;
inline constexpr guest::Function<0x00763818, u32(u32)> entry_for_byte_1a9;

u32 f_005c0a68() {
    u32 object = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_005c0a68_r4_1> r4_1 = gptr<Local_005c0a68_r4_1>(object);
    if (object != 0) {
        if ((u32(r4_1->byte_171) >> 5u & 1u) != 0) {
            u32 r0_2 = r4_1->byte_1a9;
            if (r0_2 == 0x17u || r0_2 == 0x18u) {  // (from the original)
                call_00665130(r4_1.addr());
                call_005c0874(r4_1.addr());
                return 1u;
            }
            object = entry_for_byte_1a9(r4_1.addr());
            if (object != 0) {
                if (s32(u32(*gptr<u8>(object + 8u)) << 0x19) < 0) {  // (from the original)
                    goto L_5c0ad4;
                }
            }
            object = call_006736dc(r4_1.addr(), 0u);
            if (object == 0) {
                call_005c0874(object);
                return 0u;
            }
        }
    }
L_5c0ad4:;
    call_005c0874(object);
    return 1u;
}

}  // namespace d_005c0a68
GUEST_EXPORT_FRAMED(0x005c0a68, d_005c0a68::f_005c0a68, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c0b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0b10 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00659c08, u32(u32, u32, u32, u32)> call_00659c08;
inline constexpr guest::Function<0x00763580, u32(u32)> AcPlayer_rec__is_in_states_c7_to_ca;

u32 f_005c0b10(float S0) {
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
    return call_00659c08(object, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c0b10
GUEST_EXPORT(0x005c0b10, d_005c0b10::f_005c0b10);

// f_005c0da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c0da0 {

struct __attribute__((packed)) Local_005c0da0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c0da0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005c0da0_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00678278, u32(u32, u32, u32, u32)> call_00678278;

struct __attribute__((packed)) Frame_005c0da0 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c0da0, word_0, 0x0);
GUEST_SIZE(Frame_005c0da0, 0x10);

void f_005c0da0(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_005c0da0> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    frame->word_0 = 0;
    gptr<Local_005c0da0_ea_2> ea_2 = gptr<Local_005c0da0_ea_2>(frame.at(4).addr());
    ea_2->word_0 = 0;
    ea_2->word_4 = ~0u;
    float S0_1 = 0.0f;
    guest::cpu()->s[0] = S0_1;
    call_00678278(object, 0x119u, r0, 0u);  // (from the original)
}

}  // namespace d_005c0da0
GUEST_EXPORT_FRAMED(0x005c0da0, d_005c0da0::f_005c0da0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c0e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the player the special letter from Nintendo with its attached item; true when it was sent.
namespace d_005c0e0c {

struct __attribute__((packed)) Object_005c0e0c_0 {
    u8 unknown_0[0x572b];  // (not used here)
    u8 byte_572b;
};
GUEST_OFFSET(Object_005c0e0c_0, byte_572b, 0x572b);

struct __attribute__((packed)) Local_005c0e0c_r5_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c0e0c_r5_2, word_0, 0x0);
GUEST_OFFSET(Local_005c0e0c_r5_2, word_4, 0x4);

inline constexpr guest::Function<0x002f77e8, u32(u32)> same_pointer;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> Letter__Letter;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;
inline constexpr guest::Function<0x005cc160, u32(u32, u32, u32, u32)> call_005cc160;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) Frame_005c0e0c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x288];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c0e0c, word_0, 0x0);
GUEST_OFFSET(Frame_005c0e0c, word_4, 0x4);
GUEST_OFFSET(Frame_005c0e0c, word_10, 0x10);
GUEST_SIZE(Frame_005c0e0c, 0x29c);

u32 send_nintendo_letter(gptr<Object_005c0e0c_0> player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c0e0c> frame;  // the original's stack frame
    u32 r5_1 = u32(player->byte_572b) >> 4u & 1u;
    Letter__Letter(frame.at(0x18).addr(), r1, r2, r3);  // (from the original)
    u32 r0_2 = frame.at(0x14).addr();  // (from the original)
    construct_item(r0_2, 0x2281u);  // (from the original)
    u32 zf_1 = r5_1 == 0;
    frame->word_4 = player.addr() + 0x55a6u;  // (from the original)
    gptr<Local_005c0e0c_r5_2> r5_2 = gptr<Local_005c0e0c_r5_2>(frame.at(8).addr());
    frame->word_10 = 0;
    frame->word_0 = 1;
    r5_2->word_0 = r0_2;
    r5_2->word_4 = 0x1e;  // (from the original)
    u32 r0_4 = call_005cc160(frame.at(0x18).addr(), 0x5c0f04u, 1u, zf_1 ? 2u : 1u);  // (from the original)
    if ((r0_4 ^ 1u) == 0) {
        u32 r0_5 = frame.at(0x14).addr();  // (from the original)
        construct_item(r0_5, 0x30cbu);  // (from the original)
        set_held_item(frame.at(0x18).addr(), r0_5, 0u);  // (from the original)
        r0_4 = call_002ff4d4(frame.at(0x18).addr(), 3u, 2u, 0u);  // (from the original)
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
namespace d_005c111c {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x00659d9c, u32(u32, u32, u32, u32)> call_00659d9c;

struct __attribute__((packed)) Frame_005c111c {
    u32 word_0;
};
GUEST_OFFSET(Frame_005c111c, word_0, 0x0);
GUEST_SIZE(Frame_005c111c, 0x4);

u32 f_005c111c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_005c111c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 r0_1 = talk_state_matches(0xeu, 0u, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 object = look_up_object(r4_1, 0u);
        r1_1 = guest::cpu()->r[1];
        if (object != 0) {
            r1_1 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;  // (from the original)
            if (r1_1 == 0) {
                float S0_2 = 0.0f;
                frame->word_0 = r3;
                guest::cpu()->s[0] = S0_2;
                u32 r0_3 = call_00659d9c(object, r0, r1, r2 ^ 1u);
                return r0_3;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005c111c
GUEST_EXPORT_FRAMED(0x005c111c, d_005c111c::f_005c111c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005c1198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1198 {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00659e34, u32(u32, u32, u32, u32)> call_00659e34;

struct __attribute__((packed)) Frame_005c1198 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005c1198, word_0, 0x0);
GUEST_OFFSET(Frame_005c1198, word_4, 0x4);
GUEST_SIZE(Frame_005c1198, 0x8);

u32 f_005c1198(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c1198> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 r8_1 = r2;
    u32 r6_1 = r3;
    if (r4_1 == 0) {
        r0_1 = talk_state_matches(0xeu, 0u, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            return r0_1;
        }
    }
    r0_1 = look_up_object(4u, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r1_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) >> 5u & 1u;  // (from the original)
        if (r1_1 != 0) {
            r0_1 = 0u;
        } else {
            frame->word_4 = r4_1;
            frame->word_0 = r6_1;
            r0_1 = call_00659e34(r0_1, r0, r1 ^ 1u, r8_1);
            r1_1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005c1198
GUEST_EXPORT_FRAMED(0x005c1198, d_005c1198::f_005c1198, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005c121c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c121c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

void main_player_to_state_cd(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    frame.release();
    AcPlayer_rec__change_state(object, 0xcdu, 0u, 0u);
    return;  // (from the original)
}

}  // namespace d_005c121c
GUEST_EXPORT(0x005c121c, d_005c121c::main_player_to_state_cd);

// f_005c12a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c12a8 {

struct __attribute__((packed)) Object_005c12a8_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    float float_c;
    float float_10;
};
GUEST_OFFSET(Object_005c12a8_0, byte_0, 0x0);
GUEST_OFFSET(Object_005c12a8_0, word_4, 0x4);
GUEST_OFFSET(Object_005c12a8_0, word_8, 0x8);
GUEST_OFFSET(Object_005c12a8_0, float_c, 0xc);
GUEST_OFFSET(Object_005c12a8_0, float_10, 0x10);


void f_005c12a8(gptr<Object_005c12a8_0> arg0) {
    arg0->byte_0 = 0xb;  // (from the original)
    float S0_1 = 0.0f;
    arg0->word_8 = 0;
    arg0->word_4 = 0;
    arg0->float_10 = S0_1;
    arg0->float_c = S0_1;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005c12a8
GUEST_EXPORT(0x005c12a8, d_005c12a8::f_005c12a8);

// f_005c12d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c12d0 {


u32 f_005c12d0(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    if (r0 >= 4u) {
        return r0 & 3u;
    }
    u32 r12 = 0xa82000u;  // (from the original)
    u32 r3 = r0;
    r1 = 0u;
    do {
        if (u32(*gptr<s8>(r12 + r1)) >= 4u) {
            goto L_5c1318;
        }
        r1 = *gptr<s8>(r12 + r3);
        r0 = ~0u;
        res_1 = r1 - 4u;
        nf_1 = res_1 >> 0x1f;  // (from the original)
        vf_1 = ((r1 ^ 4u) & (r1 ^ res_1)) >> 0x1f;  // (from the original)
        if (nf_1 != vf_1) {
            nf_1 = r1 >> 0x1f;  // (from the original)
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
GUEST_EXPORT(0x005c12d0, d_005c12d0::f_005c12d0);

// f_005c132c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c132c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 look_up_object_veneer() {
    return look_up_object(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c132c
GUEST_EXPORT(0x005c132c, d_005c132c::look_up_object_veneer);

// f_005c13e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c13e0 {

inline constexpr u32 global_00aadad4_address = 0x00aadad4u;
inline guest::global<u8, 0x00aadad4> global_00aadad4;

u32 set_flag_aadad4_10() {
    u32 r1_1 = u32(*global_00aadad4) | 0x10u;  // (from the original)
    *global_00aadad4 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return global_00aadad4_address;
}

}  // namespace d_005c13e0
GUEST_EXPORT(0x005c13e0, d_005c13e0::set_flag_aadad4_10);

// f_005c1428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1428 {

struct __attribute__((packed)) Object_005c1428_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005c1428_0, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;

struct __attribute__((packed)) Frame_005c1428 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c1428, word_0, 0x0);
GUEST_OFFSET(Frame_005c1428, word_4, 0x4);
GUEST_OFFSET(Frame_005c1428, word_8, 0x8);
GUEST_OFFSET(Frame_005c1428, byte_c, 0xc);
GUEST_SIZE(Frame_005c1428, 0x10);

void f_005c1428(gptr<Object_005c1428_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c1428> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    frame->word_8 = arg0->word_0;
    frame->byte_c = 0;
    frame->word_0 = 1;
    frame->word_4 = 0;
    call_0066ac8c(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c1428
GUEST_EXPORT_FRAMED(0x005c1428, d_005c1428::f_005c1428, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c159c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c159c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

u32 main_player_to_state_cc(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return object;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return 0u;
    }
    frame.release();
    return AcPlayer_rec__change_state(object, 0xccu, 0u, 0u);  // (from the original)
}

}  // namespace d_005c159c
GUEST_EXPORT(0x005c159c, d_005c159c::main_player_to_state_cc);

// f_005c167c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets word `index` (fewer than 4) of an array in the save data.
namespace d_005c167c {

inline constexpr u32 global_00a84790_address = 0x00a84790u;

void set_value_of_4(u32 index, u32 value) {
    if (index >= 4u) {
        return;
    }
    *gptr<u32>((index << 2) + global_00a84790_address + 0x29204u) = value;  // (from the original)
}

}  // namespace d_005c167c
GUEST_EXPORT(0x005c167c, d_005c167c::set_value_of_4);

// f_005c17e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c17e4 {

inline constexpr guest::Function<0x0052bf54, u32(u32, u32, u32, u32)> talk_state_5_without_flag;
inline constexpr guest::Function<0x0052cb48, u32(u32, u32, u32, u32)> call_0052cb48;

void f_005c17e4(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = talk_state_5_without_flag(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        return;
    }
    frame.release();
    call_0052cb48(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005c17e4
GUEST_EXPORT(0x005c17e4, d_005c17e4::f_005c17e4);

// f_005c1814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1814 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 call_virtual_23_of_object(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object_2 = look_up_object(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object_2 == 0) {
        return object_2;
    }
    u32 r1_2 = *gptr<u32>(*gptr<u32>(object_2) + 0x5cu);  // (from the original)
    // virtual function 23 of object_2
    frame.release();
    return guest::call_address<u32>(r1_2, object_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c1814
GUEST_EXPORT(0x005c1814, d_005c1814::call_virtual_23_of_object);

// f_005c1b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1b0c {

struct __attribute__((packed)) Object_005c1b0c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005c1b0c_0, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;

struct __attribute__((packed)) Frame_005c1b0c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c1b0c, word_0, 0x0);
GUEST_OFFSET(Frame_005c1b0c, word_4, 0x4);
GUEST_OFFSET(Frame_005c1b0c, word_8, 0x8);
GUEST_OFFSET(Frame_005c1b0c, byte_c, 0xc);
GUEST_SIZE(Frame_005c1b0c, 0x10);

void f_005c1b0c(gptr<Object_005c1b0c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c1b0c> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    frame->word_8 = arg0->word_0;
    frame->byte_c = 1;
    frame->word_0 = 1;
    frame->word_4 = 0;
    call_0066ac8c(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c1b0c
GUEST_EXPORT_FRAMED(0x005c1b0c, d_005c1b0c::f_005c1b0c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c1b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1b6c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00660d14, u32(u32, u32, u32, u32)> call_00660d14;

u32 f_005c1b6c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, guest::cpu()->r[3]);
    if (object != 0) {
        if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
            object = 0u;
        } else {
            frame.release();
            return call_00660d14(object, r0, r1, guest::cpu()->r[3]);
        }
    }
    return object;
}

}  // namespace d_005c1b6c
GUEST_EXPORT(0x005c1b6c, d_005c1b6c::f_005c1b6c);

// f_005c1bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c1bb4 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;

struct __attribute__((packed)) Frame_005c1bb4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
    u32 word_10;
};
GUEST_OFFSET(Frame_005c1bb4, word_0, 0x0);
GUEST_OFFSET(Frame_005c1bb4, word_4, 0x4);
GUEST_OFFSET(Frame_005c1bb4, word_8, 0x8);
GUEST_OFFSET(Frame_005c1bb4, byte_c, 0xc);
GUEST_OFFSET(Frame_005c1bb4, word_10, 0x10);
GUEST_SIZE(Frame_005c1bb4, 0x14);

void f_005c1bb4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c1bb4> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    copy_item_002fc934(frame.at(0x10).addr(), r0);  // (from the original)
    frame->word_8 = frame->word_10;
    frame->byte_c = 2;
    frame->word_0 = 1;
    frame->word_4 = 0;
    call_0066ac8c(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c1bb4
GUEST_EXPORT_FRAMED(0x005c1bb4, d_005c1bb4::f_005c1bb4, 0x4030);  // pushes {r4, r5, lr} first, as the original

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
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    if (r0 == 0) {
        frame.release();
        AcPlayer_rec__change_state(object, 6u, 0u, 0u);
        return;
    }
    frame.release();
    AcPlayer_rec__change_state(object, 0xfu, 0u, 0u);
    return;  // (from the original)
}

}  // namespace d_005c1c7c
GUEST_EXPORT(0x005c1c7c, d_005c1c7c::main_player_to_state_6_or_f);

// f_005c2120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2120 {

struct __attribute__((packed)) Object_005c2120_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005c2120_0, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;

struct __attribute__((packed)) Frame_005c2120 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c2120, word_0, 0x0);
GUEST_OFFSET(Frame_005c2120, word_4, 0x4);
GUEST_OFFSET(Frame_005c2120, word_8, 0x8);
GUEST_OFFSET(Frame_005c2120, byte_c, 0xc);
GUEST_SIZE(Frame_005c2120, 0x10);

void f_005c2120(gptr<Object_005c2120_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c2120> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    u32 r1_1 = arg0->word_0;
    frame->byte_c = 6;
    frame->word_8 = r1_1;
    frame->word_0 = 1;
    frame->word_4 = 0;
    call_0066ac8c(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c2120
GUEST_EXPORT_FRAMED(0x005c2120, d_005c2120::f_005c2120, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c2188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2188 {

struct __attribute__((packed)) Object_005c2188_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005c2188_0, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;

struct __attribute__((packed)) Frame_005c2188 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c2188, word_0, 0x0);
GUEST_OFFSET(Frame_005c2188, word_4, 0x4);
GUEST_OFFSET(Frame_005c2188, word_8, 0x8);
GUEST_OFFSET(Frame_005c2188, byte_c, 0xc);
GUEST_SIZE(Frame_005c2188, 0x10);

void f_005c2188(gptr<Object_005c2188_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c2188> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    u32 r2_1 = arg0->word_0;
    frame->byte_c = 5;
    frame->word_8 = r2_1;
    frame->word_0 = 1;
    frame->word_4 = 0;
    call_0066ac8c(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c2188
GUEST_EXPORT_FRAMED(0x005c2188, d_005c2188::f_005c2188, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c21f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c21f0 {

inline constexpr guest::Function<0x005c2808, u32(u32, u32, u32, u32)> main_object_state_class_1_to_5;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x0065e0b8, u32(u32)> call_0065e0b8;

void f_005c21f0(u32 r0, u32 r1) {
    u32 r0_1 = main_object_state_class_1_to_5(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return;
    }
    u32 object = look_up_object(4u, 0u);
    if (object == 0) {
        return;
    }
    call_0065e0b8(object);
}

}  // namespace d_005c21f0
GUEST_EXPORT_FRAMED(0x005c21f0, d_005c21f0::f_005c21f0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c2224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2224 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

void main_player_to_state_cb(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    u32 r1_2 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;  // (from the original)
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    frame.release();
    AcPlayer_rec__change_state(object, 0xcbu, 0u, 0u);
    return;  // (from the original)
}

}  // namespace d_005c2224
GUEST_EXPORT(0x005c2224, d_005c2224::main_player_to_state_cb);

// f_005c2298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2298 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

void main_player_to_state_78(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    u32 r1_2 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;  // (from the original)
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    frame.release();
    AcPlayer_rec__change_state(object, 0x78u, 0u, 0u);
    return;  // (from the original)
}

}  // namespace d_005c2298
GUEST_EXPORT(0x005c2298, d_005c2298::main_player_to_state_78);

// f_005c22dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c22dc {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> call_006579a8;
inline constexpr guest::Function<0x006d96fc, u32(u32)> main_object_entry_set;

struct __attribute__((packed)) Frame_005c22dc {
    u32 word_0;
};
GUEST_OFFSET(Frame_005c22dc, word_0, 0x0);
GUEST_SIZE(Frame_005c22dc, 0x4);

u32 f_005c22dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c22dc> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object != 0) {
        u32 r0_2 = main_object_entry_set(object);
        frame->word_0 = r0_2;
        object = call_006579a8(object, r0, r1, r2);
    }
    return object;
}

}  // namespace d_005c22dc
GUEST_EXPORT_FRAMED(0x005c22dc, d_005c22dc::f_005c22dc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005c23c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c23c4 {

struct __attribute__((packed)) Local_005c23c4_r0_1 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x71b];  // (not used here)
    u8 byte_8c5;
};
GUEST_OFFSET(Local_005c23c4_r0_1, byte_1a9, 0x1a9);
GUEST_OFFSET(Local_005c23c4_r0_1, byte_8c5, 0x8c5);

inline constexpr u32 global_00ae5658_address = 0x00ae5658u;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x00305f44, u32(u32)> query_current_main_object;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006609bc, u32(u32, u32)> call_006609bc;
inline constexpr guest::Function<0x0068aa1c, u32(u32, u32, u32, u32)> call_0068aa1c;

struct __attribute__((packed)) Frame_005c23c4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c23c4, word_0, 0x0);
GUEST_OFFSET(Frame_005c23c4, word_4, 0x4);
GUEST_OFFSET(Frame_005c23c4, word_8, 0x8);
GUEST_SIZE(Frame_005c23c4, 0x10);

u32 f_005c23c4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c23c4> frame;  // the original's stack frame
    gptr<Local_005c23c4_r0_1> object = gptr<Local_005c23c4_r0_1>(look_up_object(4u, 0u, r2, r3));
    if (object.addr() != 0) {
        if ((u32(object->byte_8c5) >> 5u & 1u) == 0 && object->byte_1a9 == 0x92u) {  // (from the original)
            u32 r0_2 = frame.at(0xc).addr();  // (from the original)
            construct_empty_item(r0_2);
            u32 r1_2 = *gptr<u32>(object.addr() + 0x8cau);  // (from the original)
            *gptr<u32>(r0_2) = r1_2;
            u32 r0_3 = call_006609bc(object.addr(), r1_2);
            query_current_main_object(r0_3);
            frame->word_0 = 0x2b;  // (from the original)
            frame->word_4 = 2;
            frame->word_8 = 0xae5658;  // (from the original)
            call_0068aa1c(object.addr(), frame.at(0xc).addr(), 0u, r0);  // (from the original)
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_005c23c4
GUEST_EXPORT_FRAMED(0x005c23c4, d_005c23c4::f_005c23c4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c257c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the player the special star letter with an attached item picked at random from kind 9 (that the player can
// still get); true when it was sent.
namespace d_005c257c {

inline constexpr u32 global_00953f58_address = 0x00953f58u;
inline constexpr u32 global_00a84480_address = 0x00a84480u;
inline guest::global<u32, 0x00953f58> global_00953f58;
inline constexpr guest::Function<0x0024a5ec, u32(u32, u32, u32)> ItemBitSet__clear;
inline constexpr guest::Function<0x002f77e8, u32(u32, u32)> same_pointer;
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32)> call_24a5ec_returning_first;
inline constexpr guest::Function<0x002fc2a4, u32(u32, u32)> ItemSet__add_kind;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> claim_flag;
inline constexpr guest::Function<0x002fea2c, u32(u32, u32)> pick_random_item;
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> Letter__Letter;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;
inline constexpr guest::Function<0x006f073c, u32(u32, u32)> call_006f073c;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) Frame_005c257c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x288];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c257c, word_0, 0x0);
GUEST_OFFSET(Frame_005c257c, word_4, 0x4);
GUEST_OFFSET(Frame_005c257c, word_8, 0x8);
GUEST_SIZE(Frame_005c257c, 0x294);

u32 send_star_letter(u32 player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c257c> frame;  // the original's stack frame
    Letter__Letter(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
    u32 r0_2 = frame.at(0x290).addr();  // (from the original)
    construct_item(r0_2, 0x2278u);  // (from the original)
    u32 random = random_below(3u);
    frame->word_4 = 0x14;  // (from the original)
    frame->word_8 = 0;
    frame->word_0 = r0_2;
    u32 r0_5 = call_00306354(frame.at(0x10).addr(), 0x5c26f4u, random + 1u, player + 0x55a6u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    if ((r0_5 ^ 1u) == 0) {
        if ((*global_00953f58 & 1u) == 0) {
            u32 r0_6 = claim_flag(global_00953f58_address, r1_2, r2_4);
            r1_2 = guest::cpu()->r[1];
            r2_4 = guest::cpu()->r[2];
            if (r0_6 != 0) {
                call_24a5ec_returning_first(global_00a84480_address, r1_2, r2_4);
                r2_4 = 0x100000u;  // (from the original)
                r1_2 = 0x2fc8fcu;  // (from the original)
            }
        }
        ItemBitSet__clear(global_00a84480_address, r1_2, r2_4);
        ItemSet__add_kind(global_00a84480_address, 9u);
        u32 r0_7 = call_006f073c(global_00a84480_address, player);
        if (r0_7 == 0) {
            ItemBitSet__clear(global_00a84480_address, guest::cpu()->r[1], guest::cpu()->r[2]);
            ItemSet__add_kind(global_00a84480_address, 9u);
        }
        pick_random_item(frame.at(0xc).addr(), global_00a84480_address);  // (from the original)
        set_held_item(frame.at(0x10).addr(), frame.at(0xc).addr(), 0u);  // (from the original)
        r0_5 = call_002ff4d4(frame.at(0x10).addr(), 3u, 1u, 0u);  // (from the original)
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
namespace d_005c2718 {

inline constexpr u32 global_00aadad4_address = 0x00aadad4u;
inline guest::global<u8, 0x00aadad4> global_00aadad4;

u32 clear_flag_aadad4_10() {
    u32 r1_1 = u32(*global_00aadad4) & ~0x10u;  // (from the original)
    *global_00aadad4 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return global_00aadad4_address;
}

}  // namespace d_005c2718
GUEST_EXPORT(0x005c2718, d_005c2718::clear_flag_aadad4_10);

// f_005c2730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2730 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x0065472c, u32(u32, u32, u32, u32)> call_0065472c;

u32 f_005c2730(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_0065472c(frame.at(0).addr(), r2, r3, r3);
    u32 r0_2 = position_to_cell(r0, r1, frame.at(0).addr());
    return r0_2;
}

}  // namespace d_005c2730
GUEST_EXPORT_FRAMED(0x005c2730, d_005c2730::f_005c2730, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c2768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2768 {

inline constexpr u32 global_00953f50_address = 0x00953f50u;
inline constexpr u32 global_00a843c8_address = 0x00a843c8u;
inline guest::global<u32, 0x00953f50> global_00953f50;
inline guest::global<u32, 0x00a843c8> global_00a843c8;
inline guest::global<u32, 0x00a843cc> global_00a843cc;
inline guest::global<u32, 0x00a843d0> global_00a843d0;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> claim_flag;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x007634d0, u32(u32, u32)> call_007634d0;

struct __attribute__((packed)) Frame_005c2768 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_005c2768, word_0, 0x0);
GUEST_OFFSET(Frame_005c2768, word_4, 0x4);
GUEST_OFFSET(Frame_005c2768, word_8, 0x8);
GUEST_SIZE(Frame_005c2768, 0xc);

u32 f_005c2768() {
    guest::StackFrameOf<Frame_005c2768> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object == 0) {
        return object;
    }
    if ((*global_00953f50 & 1u) == 0) {
        claim_flag(global_00953f50_address);
    }
    call_007634d0(frame.at(0).addr(), object);
    *global_00a843c8 = frame->word_0;
    *global_00a843cc = frame->word_4;
    *global_00a843d0 = frame->word_8;
    return global_00a843c8_address;
}

}  // namespace d_005c2768
GUEST_EXPORT_FRAMED(0x005c2768, d_005c2768::f_005c2768, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c29f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c29f8 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0067bcf4, u32(u32, u32, u32, u32)> call_0067bcf4;

struct __attribute__((packed)) Frame_005c29f8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005c29f8, word_0, 0x0);
GUEST_SIZE(Frame_005c29f8, 0x4);

u32 f_005c29f8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c29f8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 object = look_up_object(*frame.at<u32>(0x18), 0u, r2, r3);  // (from the original)
    if (object != 0) {
        frame->word_0 = r3;
        object = call_0067bcf4(object, r0, r1, r2);
    }
    return object;
}

}  // namespace d_005c29f8
GUEST_EXPORT_FRAMED(0x005c29f8, d_005c29f8::f_005c29f8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005c2a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2a54 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> main_object_matches_action_mask;
inline constexpr guest::Function<0x0066fdc0, u32(u32, u32)> call_0066fdc0;

u32 main_player_in_states_17_to_18_or_ready() {
    u32 r0_1 = main_object_matches_action_mask(7u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 object = look_up_object(4u, 0u);
    if (object == 0) {
        return object;
    }
    u32 r1_3 = *gptr<u8>(object + 0x1a9u);  // (from the original)
    if (r1_3 == 0x17u || r1_3 == 0x18u) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    if (r1_3 == 0x19u) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r0_3 = call_0066fdc0(object, r1_3);
    return r0_3 == 0 ? r0_3 : 1u;
}

}  // namespace d_005c2a54
GUEST_EXPORT_FRAMED(0x005c2a54, d_005c2a54::main_player_in_states_17_to_18_or_ready, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c2b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2b00 {

inline guest::global<u8, 0x00aadad4> global_00aadad4;
inline guest::global<u8, 0x00aaef14> global_00aaef14;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> main_object_matches_action_mask;
inline constexpr guest::Function<0x00659e8c, u32(u32)> call_00659e8c;
inline constexpr guest::Function<0x0067a478, u32(u32)> return_float_constant_0x41000000_;

u32 f_005c2b00(u32 r0_unused, u32 r1) {
    if ((u32(*global_00aadad4) >> 4u & 1u) != 0) {
        return 0u;
    }
    if ((u32(*global_00aaef14) >> 5u & 1u) != 0) {
        return 0u;
    }
    u32 r0_1 = main_object_matches_action_mask(0x11u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_1 == 0) {
        return 0u;
    }
    u32 object = look_up_object(4u, 0u);
    u32 zf_1 = object == 0;
    u32 r4_1 = object;
    if (!zf_1) {
        object = *gptr<u8>(r4_1 + 0x1a9u);  // (from the original)
        zf_1 = object == 0x16u;  // (from the original)
    }
    if (zf_1) {
        return 0u;
    }
    return_float_constant_0x41000000_(object);
    u32 r0_3 = call_00659e8c(r4_1);
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_005c2b00
GUEST_EXPORT_FRAMED(0x005c2b00, d_005c2b00::f_005c2b00, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c2e40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2e40 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;

struct __attribute__((packed)) Frame_005c2e40 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not read or written by name)
    u32 word_10;
};
GUEST_OFFSET(Frame_005c2e40, word_0, 0x0);
GUEST_OFFSET(Frame_005c2e40, word_4, 0x4);
GUEST_OFFSET(Frame_005c2e40, word_8, 0x8);
GUEST_OFFSET(Frame_005c2e40, byte_c, 0xc);
GUEST_OFFSET(Frame_005c2e40, word_10, 0x10);
GUEST_SIZE(Frame_005c2e40, 0x14);

void f_005c2e40(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c2e40> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    copy_item_002fc934(frame.at(0x10).addr(), r0);  // (from the original)
    frame->word_8 = frame->word_10;
    frame->byte_c = 4;
    frame->word_0 = 1;
    frame->word_4 = 0;
    call_0066ac8c(object, frame.at(8).addr(), 1u, 0u);
}

}  // namespace d_005c2e40
GUEST_EXPORT_FRAMED(0x005c2e40, d_005c2e40::f_005c2e40, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c2f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c2f70 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;

void main_player_to_state_6_or_f_2(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    u32 r1_2 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;  // (from the original)
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
    return;  // (from the original)
}

}  // namespace d_005c2f70
GUEST_EXPORT(0x005c2f70, d_005c2f70::main_player_to_state_6_or_f_2);

// f_005c305c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c305c {

inline constexpr u32 global_00ae5658_address = 0x00ae5658u;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> call_006579a8;
inline constexpr guest::Function<0x006d96fc, u32(u32)> main_object_entry_set;

struct __attribute__((packed)) Frame_005c305c {
    u32 word_0;
};
GUEST_OFFSET(Frame_005c305c, word_0, 0x0);
GUEST_SIZE(Frame_005c305c, 0x4);

u32 f_005c305c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c305c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object != 0) {
        u32 r0_2 = main_object_entry_set(object);
        frame->word_0 = r0_2;
        object = call_006579a8(object, r0, global_00ae5658_address, r1);
    }
    return object;
}

}  // namespace d_005c305c
GUEST_EXPORT_FRAMED(0x005c305c, d_005c305c::f_005c305c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005c30a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c30a0 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32)> Item__category;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0065e2e0, u32(u32, u32, u32, u32)> call_0065e2e0;

struct __attribute__((packed)) Frame_005c30a0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005c30a0, word_0, 0x0);
GUEST_OFFSET(Frame_005c30a0, word_4, 0x4);
GUEST_SIZE(Frame_005c30a0, 0x8);

u32 f_005c30a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c30a0> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = 0u;
    if (object != 0) {
        r1_1 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;  // (from the original)
        if (r1_1 == 0) {
            u32 category = Item__category(r3, r1_1);
            frame->word_0 = 1;
            frame->word_4 = u32(category == 0x41u);  // (from the original)
            r0_2 = call_0065e2e0(object, r0, r1, r2);
            r1_1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_005c30a0
GUEST_EXPORT_FRAMED(0x005c30a0, d_005c30a0::f_005c30a0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005c311c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c311c {

struct __attribute__((packed)) Local_005c311c_r0_3 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0xe];  // (not used here)
    u16 half_2e;
};
GUEST_OFFSET(Local_005c311c_r0_3, word_14, 0x14);
GUEST_OFFSET(Local_005c311c_r0_3, word_18, 0x18);
GUEST_OFFSET(Local_005c311c_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_005c311c_r0_3, half_2e, 0x2e);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x006f8a58, u32(u32, u32, u32, u32)> call_006f8a58;

struct __attribute__((packed)) Frame_005c311c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c311c, word_0, 0x0);
GUEST_OFFSET(Frame_005c311c, word_4, 0x4);
GUEST_OFFSET(Frame_005c311c, word_8, 0x8);
GUEST_SIZE(Frame_005c311c, 0x10);

u32 f_005c311c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_005c311c> frame;  // the original's stack frame
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    u32 r0_2 = table_entry_has_all_bits(4u, r0_1);
    if (r0_2 == 0) {
        return r0_2;
    }
    gptr<Local_005c311c_r0_3> object = gptr<Local_005c311c_r0_3>(look_up_object(4u, 1u));
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
    u32 r0_4 = call_006f8a58(r0, frame.at(0).addr(), r2_3, 0x10u);  // (from the original)
    return r0_4 != 0;
}

}  // namespace d_005c311c
GUEST_EXPORT_FRAMED(0x005c311c, d_005c311c::f_005c311c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c31ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c31ac {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

void f_005c31ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = mode_above_1(r0, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u8>((r0 & 3u) + 0x881b94u);  // (from the original)
        frame.release();
        send_message(r0_2, 4u, r1, 0x26u);
        return;  // (from the original)
    }
}

}  // namespace d_005c31ac
GUEST_EXPORT(0x005c31ac, d_005c31ac::f_005c31ac);

// f_005c324c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c324c {

struct __attribute__((packed)) Object_005c324c_0 {
    float float_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005c324c_0, float_0, 0x0);
GUEST_OFFSET(Object_005c324c_0, word_4, 0x4);
GUEST_OFFSET(Object_005c324c_0, word_8, 0x8);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> call_0070ac68;

struct __attribute__((packed)) Frame_005c324c {
    float float_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c324c, float_0, 0x0);
GUEST_OFFSET(Frame_005c324c, word_4, 0x4);
GUEST_OFFSET(Frame_005c324c, word_8, 0x8);
GUEST_SIZE(Frame_005c324c, 0x10);

u32 f_005c324c(gptr<Object_005c324c_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_005c324c> frame;  // the original's stack frame
    if (arg0.addr() == 0) {
        return 0u;
    }
    u32 object = look_up_object(r1, 1u, r2, r3);
    u32 zf_1 = object == 0;
    if (!zf_1) {
        zf_1 = object + 0x1b4u == 0;  // (from the original)
        object = object + 0x1b4u;  // (from the original)
    }
    if (zf_1) {
        return 0u;
    }
    call_0070ac68(object, frame.at(0).addr(), *gptr<u32>(object + 0xa4u), 1u);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x005c324c, d_005c324c::f_005c324c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c354c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c354c {

inline constexpr guest::Function<0x005c40dc, u32(u32, u32, u32, u32)> call_005c40dc;

u32 f_005c354c() {
    return call_005c40dc(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c354c
GUEST_EXPORT(0x005c354c, d_005c354c::f_005c354c);

// f_005c3554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c3554 {

inline constexpr guest::Function<0x005c48c8, u32(u32, u32, u32, u32)> call_005c48c8;

u32 f_005c3554() {
    return call_005c48c8(9u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c3554
GUEST_EXPORT(0x005c3554, d_005c3554::f_005c3554);

// f_005c3560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c3e84, u32(u32, u32, u32, u32)> call_005c3e84;
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;

struct __attribute__((packed)) Frame_005c3560 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c3560, word_0, 0x0);
GUEST_SIZE(Frame_005c3560, 0x14);

u32 f_005c3560(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c3560> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 r4_1 = *frame.at<u32>(0x30);  // (from the original)
    u32 r5_1 = r2;
    u32 r6_1 = r3;
    if (r4_1 == 0) {
        r0_1 = call_005c3e84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            return r0_1;
        }
    }
    r0_1 = look_up_object(4u, 0u, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = read_global_byte_2(r0_1);
        u32 r2_2 = r0_2 == 0x5cu ? 0u : r1;  // (from the original)
        if (r4_1 == 0) {
            gptr<Local_005c3560_r4_2> r4_2 = gptr<Local_005c3560_r4_2>(frame.at(0xc).addr());  // (from the original)
            gptr<Local_005c3560_ea_1> ea_1 = gptr<Local_005c3560_ea_1>(frame.at(4).addr());
            ea_1->word_0 = 0;
            ea_1->word_4 = r6_1;
            frame->word_0 = 0;
            r4_2->word_0 = 1;
            r4_2->word_4 = r5_1;
            u32 r0_3 = call_006739b8(r0_1, r0, r2_2, 0u);
            return r0_3;
        }
        gptr<Local_005c3560_ea_2> ea_2 = gptr<Local_005c3560_ea_2>(frame.at(4).addr());
        ea_2->word_0 = 0;
        ea_2->word_4 = r6_1;
        gptr<Local_005c3560_ea_3> ea_3 = gptr<Local_005c3560_ea_3>(frame.at(0xc).addr());  // (from the original)
        ea_3->word_0 = 0;
        ea_3->word_4 = r5_1;
        frame->word_0 = 0;
        r0_1 = call_006739b8(r0_1, r0, r2_2, 0u);
    }
    return r0_1;
}

}  // namespace d_005c3560
GUEST_EXPORT_FRAMED(0x005c3560, d_005c3560::f_005c3560, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005c38c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c38c8 {

struct __attribute__((packed)) Local_005c38c8_r0_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_005c38c8_r0_1, byte_0, 0x0);

inline constexpr guest::Function<0x005c3620, u32(u32, u32, u32, u32)> call_005c3620;

u32 f_005c38c8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u16>(0) = 0;
    u32 r1_1 = frame.at(0).addr();
    if (r0 < 0xau) {  // (from the original)
        gptr<Local_005c38c8_r0_1> r0_1 = gptr<Local_005c38c8_r0_1>(r1_1 + (r0 >> 3));
        r3 = 1u;
        r1_1 = u32(r0_1->byte_0) | lsl_r(r3, (r0 & 7u) & 0xff);  // (from the original)
        r0_1->byte_0 = u8(r1_1);
    }
    u32 r0_3 = call_005c3620(frame.at(0).addr(), r1_1, guest::cpu()->r[2], r3);
    return r0_3;
}

}  // namespace d_005c38c8
GUEST_EXPORT_FRAMED(0x005c38c8, d_005c38c8::f_005c38c8, 0x4000);  // pushes {lr} first, as the original

// f_005c423c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c423c {

struct __attribute__((packed)) Local_005c423c_r0_1 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x71b];  // (not used here)
    u8 byte_8c5;
    u8 unknown_8c6[0x8];  // (not used here)
    u8 byte_8ce;
};
GUEST_OFFSET(Local_005c423c_r0_1, byte_1a9, 0x1a9);
GUEST_OFFSET(Local_005c423c_r0_1, byte_8c5, 0x8c5);
GUEST_OFFSET(Local_005c423c_r0_1, byte_8ce, 0x8ce);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00678300, u32(u32, u32, u32, u32)> call_00678300;

struct __attribute__((packed)) Frame_005c423c {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x12];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c423c, word_0, 0x0);
GUEST_OFFSET(Frame_005c423c, half_4, 0x4);
GUEST_SIZE(Frame_005c423c, 0x18);

void f_005c423c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c423c> frame;  // the original's stack frame
    gptr<Local_005c423c_r0_1> object = gptr<Local_005c423c_r0_1>(look_up_object(4u, 0u, r2, r3));
    u32 r1_1 = guest::cpu()->r[1];
    if (object.addr() != 0) {
        r1_1 = u32(object->byte_8c5) >> 5u & 1u;
        if (r1_1 == 0) {
            if (object->byte_1a9 != 0xe1u) {  // (from the original)
                frame.release();
                call_00678300(object.addr(), r0, r1, r2);
                return;
            }
            u32 r1_2 = u32(object->byte_8ce) << 8;
            frame->half_4 = u16(r1_2);
            frame->word_0 = uxth(r1_2);
            call_00678300(object.addr(), r0, frame.at(0).addr(), r2);
            r1_1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005c423c
GUEST_EXPORT(0x005c423c, d_005c423c::f_005c423c);

// f_005c4400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4400 {

struct __attribute__((packed)) Local_005c4400_r0_1 {
    u8 unknown_0[0x200];  // (not used here)
    u8 byte_200;
};
GUEST_OFFSET(Local_005c4400_r0_1, byte_200, 0x200);

inline constexpr u32 global_00a84790_address = 0x00a84790u;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0027a5dc, u32(u32)> index_of_remote_slot;
inline constexpr guest::Function<0x0027ab24, u32(u32, u32)> is_remote_slot;
inline constexpr guest::Function<0x002fdf00, u32(u32, u32)> is_below_8;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x006bd910, u32(u32, u32, u32, u32)> player_operation_c;

void f_005c4400(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r0 >= 4u) {
        return;
    }
    gptr<Local_005c4400_r0_1> r0_1 = gptr<Local_005c4400_r0_1>(r0 + global_00a84790_address + 0x29000u);  // (from the original)
    u32 r5_1 = r0_1->byte_200;
    r0_1->byte_200 = 8;
    u32 r0_2 = query_current_main_object(r0_1.addr(), 8u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 == r0) {
        u32 r0_3 = is_below_8(r5_1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            r1_1 = 0u;
            *current_player_data = r1_1;
        }
    }
    u32 r0_4 = is_remote_slot(r5_1, r1_1);
    if (r0_4 != 0) {
        u32 r0_5 = index_of_remote_slot(r5_1);
        if (r0_5 < 4u) {
            frame.release();
            player_operation_c(r0_5 * 0xa480u + global_00a84790_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            return;
        }
    }
}

}  // namespace d_005c4400
GUEST_EXPORT(0x005c4400, d_005c4400::f_005c4400);

// f_005c44a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c44a0 {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32)> record_2160_address_0020bf50;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x0071a7ec, u32(u32)> item_if_first_item_or_class_1;
inline constexpr guest::Function<0x0076aa40, u32(u32)> item_category_is_48;
inline constexpr guest::Function<0x0076abd4, u32(u32)> item_category_is_47;
inline constexpr guest::Function<0x0076bac4, u32(u32)> call_0076bac4;

struct __attribute__((packed)) Frame_005c44a0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005c44a0, word_0, 0x0);
GUEST_SIZE(Frame_005c44a0, 0x4);

u32 f_005c44a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c44a0> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player = player_for_slot(r0, r1, r2, r3);
    if (player == 0) {
        return player;
    }
    u32 r0_3 = item_if_first_item_or_class_1(player + 0xau);  // (from the original)
    copy_item_002fc934(frame.at(0).addr(), r0_3);
    u32 r0_6 = item_category_is_47(frame.at(0).addr());
    if (r0_6 == 0) {
        u32 r0_8 = item_category_is_48(frame.at(0).addr());
        if (r0_8 == 0) {
            return 0u;
        }
    }
    u32 r0_10 = call_0076bac4(frame.at(0).addr());
    u32 r0_12 = record_2160_address_0020bf50(player + 0x2cu, r0_10 + (0u - (u32(u64(0xcccccccdu) * r0_10 >> 0x20) >> 3)) * 0xau);  // (from the original)
    return r0_12;
}

}  // namespace d_005c44a0
GUEST_EXPORT_FRAMED(0x005c44a0, d_005c44a0::f_005c44a0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c4534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4534 {

inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x00536094, u32(u32, u32)> call_00536094;

u32 f_005c4534(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 is_item = Item__is_item(r0);
    if (is_item == 0) {
        return ~0u;
    }
    frame.release();
    return call_00536094(r0, guest::cpu()->r[1]);
}

}  // namespace d_005c4534
GUEST_EXPORT(0x005c4534, d_005c4534::f_005c4534);

// f_005c4840: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4840 {

struct __attribute__((packed)) Object_005c4840_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005c4840_0, word_0, 0x0);

struct __attribute__((packed)) Object_005c4840_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005c4840_1, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;

struct __attribute__((packed)) Frame_005c4840 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u32 word_d;
    u8 byte_11;
    u8 unknown_12[0xa];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c4840, word_0, 0x0);
GUEST_OFFSET(Frame_005c4840, word_4, 0x4);
GUEST_OFFSET(Frame_005c4840, word_8, 0x8);
GUEST_OFFSET(Frame_005c4840, byte_c, 0xc);
GUEST_OFFSET(Frame_005c4840, word_d, 0xd);
GUEST_OFFSET(Frame_005c4840, byte_11, 0x11);
GUEST_SIZE(Frame_005c4840, 0x1c);

void f_005c4840(gptr<Object_005c4840_0> arg0, gptr<Object_005c4840_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c4840> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    u32 r2_1 = arg0->word_0;
    frame->byte_c = 0;
    frame->word_8 = r2_1;
    frame->word_d = arg1->word_0;
    frame->byte_11 = 1;
    frame->word_0 = 1;
    frame->word_4 = 0;
    call_0066ac8c(object, frame.at(8).addr(), 2u, 0u);
}

}  // namespace d_005c4840
GUEST_EXPORT_FRAMED(0x005c4840, d_005c4840::f_005c4840, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c48c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c48c8 {

struct __attribute__((packed)) Local_005c48c8_r0_1 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Local_005c48c8_r0_1, byte_5, 0x5);

struct __attribute__((packed)) Local_005c48c8_r0_2 {
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
GUEST_OFFSET(Local_005c48c8_r0_2, byte_17b, 0x17b);
GUEST_OFFSET(Local_005c48c8_r0_2, byte_1a9, 0x1a9);
GUEST_OFFSET(Local_005c48c8_r0_2, word_884, 0x884);
GUEST_OFFSET(Local_005c48c8_r0_2, byte_8c5, 0x8c5);
GUEST_OFFSET(Local_005c48c8_r0_2, byte_8c7, 0x8c7);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> main_object_matches_action_mask;
inline constexpr guest::Function<0x006548ac, u32(u32, u32, u32, u32)> AcPlayer_rec__enter_state;
inline constexpr guest::Function<0x00763818, u32(u32, u32)> entry_for_byte_1a9;

u32 f_005c48c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_005c48c8_r0_1> r0_1 = gptr<Local_005c48c8_r0_1>(main_object_matches_action_mask(r0, r1, r2, r3));
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1.addr() != 0) {
        gptr<Local_005c48c8_r0_2> object = gptr<Local_005c48c8_r0_2>(look_up_object(4u, 0u));
        r1_1 = guest::cpu()->r[1];
        if (object.addr() == 0) {
            return 0u;
        }
        r0_1 = gptr<Local_005c48c8_r0_1>(entry_for_byte_1a9(object.addr(), r1_1));
        r1_1 = guest::cpu()->r[1];
        if (r0_1.addr() != 0) {
            u32 res_1 = u32(object->byte_17b) >> 2u & 1u;
            u32 r0_3 = r0 & 2u;
            if (res_1 != 0) {
                if (r0_3 != 0 && (u32(object->byte_8c7) & 1u) != 0) {
                    u32 r0_4 = AcPlayer_rec__enter_state(object.addr(), 0x10u, 0u, 0u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    if (r0_4 != 0) {
                        goto L_5c4b70;
                    }
                }
                if ((r0 & 4u) != 0) {
                    u32 object_2 = look_up_object(4u, 0u);
                    r1_1 = guest::cpu()->r[1];
                    if (object_2 != 0 && *gptr<u8>(object_2 + 0x1a9u) == 0x82u) {  // (from the original)
                        u32 r0_6 = AcPlayer_rec__enter_state(object.addr(), 0x11u, 0u, 0u);  // (from the original)
                        r1_1 = guest::cpu()->r[1];
                        if (r0_6 != 0) {
                            goto L_5c4b70;
                        }
                    }
                }
                if ((r0 & 8u) != 0) {
                    if ((u32(object->byte_8c5) >> 5u & 1u) != 0) {
                        u32 r0_7 = AcPlayer_rec__enter_state(object.addr(), 0x12u, 0u, 0u);  // (from the original)
                        r1_1 = guest::cpu()->r[1];
                        if (r0_7 != 0) {
                            goto L_5c4b70;
                        }
                    }
                }
                if ((r0 & 1u) == 0 || (u32(object->byte_8c7) & 1u) != 0) {
                    guest::cpu()->r[1] = r1_1;
                    return 0u;
                }
                if ((u32(object->byte_8c5) >> 5u & 1u) != 0) {
                    guest::cpu()->r[1] = r1_1;
                    return 0u;
                }
                u32 object_3 = look_up_object(4u, 0u);
                r1_1 = guest::cpu()->r[1];
                if (object_3 != 0 && *gptr<u8>(object_3 + 0x1a9u) == 0x82u) {  // (from the original)
                    return 0u;
                }
                u32 r0_9 = AcPlayer_rec__enter_state(object.addr(), 0xfu, 0u, 1u);  // (from the original)
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
                        u32 r0_10 = AcPlayer_rec__enter_state(object.addr(), 0x10u, 0u, 0u);  // (from the original)
                        r1_1 = guest::cpu()->r[1];
                        if (r0_10 != 0) {
                            goto L_5c4b70;
                        }
                    }
                }
                u32 r0_11 = r0 & 4u;
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
                        u32 r0_12 = AcPlayer_rec__enter_state(object.addr(), 0x11u, 0u, 0u);  // (from the original)
                        r1_1 = guest::cpu()->r[1];
                        if (r0_12 != 0) {
                            goto L_5c4b70;
                        }
                    }
                }
                u32 r0_13 = r0 & 8u;
                u32 zf_3 = r0_13 == 0u;
                u32 cf_3 = r0_13 >= 0u;
                if (!zf_3) {
                    r0_13 = r0_1->byte_5;
                    u32 b_3 = r0_13 >> 4;
                    zf_3 = 7u == b_3;
                    cf_3 = 7u >= b_3;
                }
                if (cf_3 && !zf_3 && 5u == r0_13 >> 4) {
                    u32 r0_14 = AcPlayer_rec__enter_state(object.addr(), 0x12u, 0u, 0u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    if (r0_14 != 0) {
                        goto L_5c4b70;
                    }
                }
                u32 r0_15 = r0 & 1u;
                u32 zf_4 = r0_15 == 0u;
                u32 cf_4 = r0_15 >= 0u;
                if (!zf_4) {
                    r0_15 = r0_1->byte_5;
                    u32 b_4 = r0_15 >> 4;
                    zf_4 = 7u == b_4;
                    cf_4 = 7u >= b_4;
                }
                if (cf_4 && !zf_4 && 2u == r0_15 >> 4) {
                    u32 r0_16 = AcPlayer_rec__enter_state(object.addr(), 0xfu, 0u, 1u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    if (r0_16 != 0) {
                        goto L_5c4b70;
                    }
                }
                if ((r0 & 0x20u) == 0 || object->byte_1a9 != 0x70u || object->word_884 != 0) {  // (from the original)
                    guest::cpu()->r[1] = r1_1;
                    return 0u;
                }
                u32 r0_17 = AcPlayer_rec__enter_state(object.addr(), 0xfu, 0u, 1u);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x005c48c8, d_005c48c8::f_005c48c8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005c4cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4cdc {

struct __attribute__((packed)) Local_005c4cdc_r0_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005c4cdc_r0_7, word_0, 0x0);
GUEST_OFFSET(Local_005c4cdc_r0_7, word_4, 0x4);
GUEST_OFFSET(Local_005c4cdc_r0_7, word_8, 0x8);

inline constexpr u32 global_00a84790_address = 0x00a84790u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf140> global_00aaf140;
inline guest::global<u32, 0x00aaf144> global_00aaf144;
inline guest::global<u32, 0x00aaf148> global_00aaf148;
inline constexpr guest::Function<0x0023d5ec, u32(u32, u32)> call_0023d5ec;
inline constexpr guest::Function<0x0027a5dc, u32(u32)> index_of_remote_slot;
inline constexpr guest::Function<0x0027ab24, u32(u32, u32, u32, u32)> is_remote_slot;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32)> player_for_slot;
inline constexpr guest::Function<0x00305f44, u32(u32)> query_current_main_object;
inline constexpr guest::Function<0x006bcdfc, u32(u32, u32)> copy_player_record;

void f_005c4cdc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 cf_1 = r0 >= 4u;
    u32 r5_1 = r1;
    if (!cf_1) {
        cf_1 = r5_1 >= 8u;
    }
    if (!cf_1) {
        *gptr<u8>(r0 + global_00a84790_address + 0x29200u) = u8(r5_1);  // (from the original)
        u32 r0_1 = is_remote_slot(r5_1, r1, r2, r3);
        if (r0_1 != 0 && r2 != 0) {
            r0_1 = index_of_remote_slot(r5_1);
            if (r0_1 < 4u) {
                r0_1 = copy_player_record(r0_1 * 0xa480u + global_00a84790_address, r2);  // (from the original)
            }
        }
        u32 r0_3 = query_current_main_object(r0_1);
        r1 = guest::cpu()->r[1];
        if (r0_3 == r0) {
            u32 player = player_for_slot(r5_1, r1);
            r1 = current_player_data_address;
            *gptr<u32>(r1) = player;
            u32 r0_5 = *gptr<u32>(r1);
            if (r0_5 != 0) {
                u32 r0_6 = call_0023d5ec(r0_5, r1);
                gptr<Local_005c4cdc_r0_7> r0_7 = gptr<Local_005c4cdc_r0_7>(return_constant_0xad56b0_(r0_6));
                r1 = r0_7->word_0;
                u32 r2_4 = r0_7->word_4;
                u32 r3_4 = r0_7->word_8;
                *global_00aaf140 = r1;
                *global_00aaf144 = r2_4;
                *global_00aaf148 = r3_4;
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005c4cdc
GUEST_EXPORT_FRAMED(0x005c4cdc, d_005c4cdc::f_005c4cdc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005c4e00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4e00 {

inline constexpr u32 global_00a84790_address = 0x00a84790u;
inline constexpr u32 global_00aad990_address = 0x00aad990u;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fdf00, u32(u32, u32)> is_below_8;
inline constexpr guest::Function<0x00305f44, u32(u32)> query_current_main_object;
inline constexpr guest::Function<0x00317ee0, u32(u32, u32)> record_4648_address;

u32 f_005c4e00(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = query_current_main_object(r0);
    u32 r4_1 = *gptr<u8>((r0_1 & 3u) + global_00aad990_address);
    u32 r0_2 = is_below_8(r4_1, global_00a84790_address);
    if (r0_2 == 0) {
        r4_1 = 8u;
    }
    u32 r0_3 = is_local_slot(r4_1);
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 data_base = get_data_base(r0_3);
    frame.release();
    return record_4648_address(data_base + 0x5d880u, r4_1);  // (from the original)
}

}  // namespace d_005c4e00
GUEST_EXPORT(0x005c4e00, d_005c4e00::f_005c4e00);

// f_005c4f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4f3c {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32)> record_2160_address_0020bf50;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x0076aa40, u32(u32)> item_category_is_48;
inline constexpr guest::Function<0x0076abd4, u32(u32)> item_category_is_47;
inline constexpr guest::Function<0x0076bac4, u32(u32)> call_0076bac4;

struct __attribute__((packed)) Frame_005c4f3c {
    u32 word_0;
};
GUEST_OFFSET(Frame_005c4f3c, word_0, 0x0);
GUEST_SIZE(Frame_005c4f3c, 0x4);

u32 f_005c4f3c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c4f3c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player = player_for_slot(r0, r1, r2, r3);
    if (player == 0) {
        return player;
    }
    u32 r0_3 = slot_7_if_class_7(player + 0xau);  // (from the original)
    copy_item_002fc934(frame.at(0).addr(), r0_3);
    u32 r0_6 = item_category_is_47(frame.at(0).addr());
    if (r0_6 == 0) {
        u32 r0_8 = item_category_is_48(frame.at(0).addr());
        if (r0_8 == 0) {
            return 0u;
        }
    }
    u32 r0_10 = call_0076bac4(frame.at(0).addr());
    u32 r0_12 = record_2160_address_0020bf50(player + 0x2cu, r0_10 + (0u - (u32(u64(0xcccccccdu) * r0_10 >> 0x20) >> 3)) * 0xau);  // (from the original)
    return r0_12;
}

}  // namespace d_005c4f3c
GUEST_EXPORT_FRAMED(0x005c4f3c, d_005c4f3c::f_005c4f3c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c4fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c4fd0 {

inline constexpr guest::Function<0x0020bf50, u32(u32, u32)> record_2160_address_0020bf50;
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> player_for_slot;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x0071a868, u32(u32)> slot_2_if_class_3_0071a868;
inline constexpr guest::Function<0x0076aa40, u32(u32)> item_category_is_48;
inline constexpr guest::Function<0x0076abd4, u32(u32)> item_category_is_47;
inline constexpr guest::Function<0x0076bac4, u32(u32)> call_0076bac4;

struct __attribute__((packed)) Frame_005c4fd0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005c4fd0, word_0, 0x0);
GUEST_SIZE(Frame_005c4fd0, 0x4);

u32 f_005c4fd0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c4fd0> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player = player_for_slot(r0, r1, r2, r3);
    if (player == 0) {
        return player;
    }
    u32 r0_3 = slot_2_if_class_3_0071a868(player + 0xau);  // (from the original)
    copy_item_002fc934(frame.at(0).addr(), r0_3);
    u32 r0_6 = item_category_is_47(frame.at(0).addr());
    if (r0_6 == 0) {
        u32 r0_8 = item_category_is_48(frame.at(0).addr());
        if (r0_8 == 0) {
            return 0u;
        }
    }
    u32 r0_10 = call_0076bac4(frame.at(0).addr());
    u32 r0_12 = record_2160_address_0020bf50(player + 0x2cu, r0_10 + (0u - (u32(u64(0xcccccccdu) * r0_10 >> 0x20) >> 3)) * 0xau);  // (from the original)
    return r0_12;
}

}  // namespace d_005c4fd0
GUEST_EXPORT_FRAMED(0x005c4fd0, d_005c4fd0::f_005c4fd0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c5328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5328 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c507c, u32(u32, u32, u32, u32)> main_object_matches_action_mask;
inline constexpr guest::Function<0x0067ee38, u32(u32, u32, u32, u32)> call_0067ee38;

struct __attribute__((packed)) Frame_005c5328 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005c5328, word_0, 0x0);
GUEST_SIZE(Frame_005c5328, 0x4);

void f_005c5328(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c5328> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = main_object_matches_action_mask(0x21u, 0u, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 object = look_up_object(4u, 0u);
        r1_1 = guest::cpu()->r[1];
        if (object != 0) {
            r1_1 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;  // (from the original)
            if (r1_1 == 0) {
                frame->word_0 = r3;
                call_0067ee38(object, r0, r1, r2);
                r1_1 = guest::cpu()->r[1];
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005c5328
GUEST_EXPORT_FRAMED(0x005c5328, d_005c5328::f_005c5328, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005c5390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5390 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;
inline constexpr guest::Function<0x006bb91c, u32(u32, u32)> call_006bb91c;
inline constexpr guest::Function<0x0070bd0c, u32(u32, u32)> call_0070bd0c;
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> record_address;

struct __attribute__((packed)) Frame_005c5390 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c5390, word_0, 0x0);
GUEST_OFFSET(Frame_005c5390, word_4, 0x4);
GUEST_OFFSET(Frame_005c5390, word_8, 0x8);
GUEST_OFFSET(Frame_005c5390, word_c, 0xc);
GUEST_OFFSET(Frame_005c5390, byte_10, 0x10);
GUEST_SIZE(Frame_005c5390, 0x18);

void f_005c5390(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c5390> frame;  // the original's stack frame
    u32 r1_2 = 0;
    u32 r6_1 = frame.at(8).addr();
    u32 r4_1 = r1;
    if (r0 < 0xau) {  // (from the original)
        u32 r0_1 = *current_player_data;
        if (r0_1 != 0) {
            u32 r0_3 = record_address(r0_1 + 0x2cu, r0, r2, r3);  // (from the original)
            if (r4_1 - 6u > 1u) {
                u32 r0_4 = call_0070bd0c(r0_3, r4_1 - 6u);
                r4_1 = r0_4;
            }
            u32 zf_1 = r4_1 == 6u;
            if (zf_1) {
                r1_2 = 0x33abu;  // (from the original)
            } else {
                r1_2 = 0x33adu;  // (from the original)
                zf_1 = r4_1 == 7u;
            }
            if (!zf_1 && r4_1 == 0xbu) {  // (from the original)
                r1_2 = 0x33acu;  // (from the original)
            }
            construct_item(frame.at(0).addr(), r1_2);
            call_006bb91c(frame.at(0).addr(), r0);
            copy_item_002fc934(r6_1, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
            goto L_5c543c;
        }
    }
    copy_item_002fc934(r6_1, empty_item_address, r2, r3);
L_5c543c:;
    u32 is_empty = Item__is_empty(frame.at(8).addr());
    if (is_empty != 0) {
        return;
    }
    u32 object = look_up_object(4u, 0u);
    if (object != 0) {
        if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) == 0) {  // (from the original)
            u32 r1_5 = frame->word_8;
            frame->byte_10 = 0;
            frame->word_c = r1_5;
            frame->word_0 = 1;
            frame->word_4 = 0;
            call_0066ac8c(object, frame.at(0xc).addr(), 1u, 0u);  // (from the original)
        }
    }
}

}  // namespace d_005c5390
GUEST_EXPORT_FRAMED(0x005c5390, d_005c5390::f_005c5390, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c5714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;

struct __attribute__((packed)) Frame_005c5714 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
    u16 half_14;
    u8 unknown_16[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c5714, word_0, 0x0);
GUEST_OFFSET(Frame_005c5714, word_c, 0xc);
GUEST_OFFSET(Frame_005c5714, word_10, 0x10);
GUEST_OFFSET(Frame_005c5714, half_14, 0x14);
GUEST_SIZE(Frame_005c5714, 0x1c);

void f_005c5714(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c5714> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    u32 r0_3 = angle_between_points(object + 0x14u, r0);  // (from the original)
    frame->half_14 = u16(r0_3);
    frame->word_c = 2;
    gptr<Local_005c5714_ea_3> ea_3 = gptr<Local_005c5714_ea_3>(frame.at(4).addr());
    ea_3->word_0 = 0;
    ea_3->word_4 = frame.at(0x14).addr();  // (from the original)
    frame->word_10 = 0;
    frame->word_0 = *global_00886ac0;
    call_006739b8(object, 0x12u, 1u, *global_00886abc);  // (from the original)
}

}  // namespace d_005c5714
GUEST_EXPORT_FRAMED(0x005c5714, d_005c5714::f_005c5714, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c591c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c591c {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x00607bdc, u32(u32, u32)> request_is_reserved;

struct __attribute__((packed)) Frame_005c591c {
    u8 unknown_0[0x20];  // (not read or written by name)
    u8 byte_20;
    u8 unknown_21[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c591c, byte_20, 0x20);
GUEST_SIZE(Frame_005c591c, 0x28);

u32 f_005c591c(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_005c591c> frame;  // the original's stack frame
    u32 r0_1 = request_is_reserved(r0, r1);
    if (r0_1 == 0) {
        u32 r6_1 = *current_player_data;
        if (r6_1 != 0) {
            u32 r0_2 = frame.at(0).addr();
            copy_item_002fc934(r0_2, r0);
            u32 r0_3 = r0_2 + 4u;
            copy_item_002fc934(r0_3, r0 + 4u);
            u32 r0_4 = r0_3 + 4u;
            copy_item_002fc934(r0_4, r0 + 8u);
            u32 r0_5 = r0_4 + 4u;
            copy_item_002fc934(r0_5, r0 + 0xcu);  // (from the original)
            u32 r0_6 = r0_5 + 4u;
            copy_item_002fc934(r0_6, r0 + 0x10u);  // (from the original)
            u32 r0_7 = r0_6 + 4u;
            copy_item_002fc934(r0_7, r0 + 0x14u);  // (from the original)
            u32 r0_8 = r0_7 + 4u;
            copy_item_002fc934(r0_8, r0 + 0x18u);  // (from the original)
            u32 r0_9 = r0_8 + 4u;
            copy_item_002fc934(r0_9, r0 + 0x1cu);  // (from the original)
            u32 r1_9 = *gptr<u8>(r0 + 0x20u);  // (from the original)
            u32 r5_1 = frame.at(0).addr();
            u32 r4_1 = r6_1 + 0xau;  // (from the original)
            *gptr<u8>(r0_9 + 4u) = u8(r1_9);
            u32 r0_10 = *gptr<u8>(r6_1 + 0x2au);  // (from the original)
            if (r0_10 != 0) {
                r0_10 = 1u;
            }
            frame->byte_20 = u8(r0_10);
            copy_item_002fc8e8(r4_1, r5_1);
            copy_item_002fc8e8(r4_1 + 4u, r5_1 + 4u);
            copy_item_002fc8e8(r4_1 + 8u, r5_1 + 8u);
            copy_item_002fc8e8(r4_1 + 0xcu, r5_1 + 0xcu);  // (from the original)
            copy_item_002fc8e8(r4_1 + 0x10u, r5_1 + 0x10u);  // (from the original)
            copy_item_002fc8e8(r4_1 + 0x14u, r5_1 + 0x14u);  // (from the original)
            copy_item_002fc8e8(r4_1 + 0x18u, r5_1 + 0x18u);  // (from the original)
            copy_item_002fc8e8(r4_1 + 0x1cu, r5_1 + 0x1cu);  // (from the original)
            *gptr<u8>(r4_1 + 0x20u) = frame->byte_20;  // (from the original)
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_005c591c
GUEST_EXPORT_FRAMED(0x005c591c, d_005c591c::f_005c591c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c5aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr guest::Function<0x0027b3a8, u32(u32, u32, u32, u32)> call_0027b3a8;
inline constexpr guest::Function<0x005c591c, u32(u32)> call_005c591c;

struct __attribute__((packed)) Frame_005c5aa8 {
    u32 word_0;
    u8 unknown_4[0x30];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c5aa8, word_0, 0x0);
GUEST_SIZE(Frame_005c5aa8, 0x34);

void f_005c5aa8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c5aa8> frame;  // the original's stack frame
    gptr<Local_005c5aa8_ea_1> ea_1 = gptr<Local_005c5aa8_ea_1>(frame.at(0x40).addr());  // (from the original)
    u32 r1_1 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    frame->word_0 = r3;
    gptr<Local_005c5aa8_ea_3> ea_3 = gptr<Local_005c5aa8_ea_3>(frame.at(4).addr());
    ea_3->word_0 = r1_1;
    ea_3->word_4 = r2_1;
    ea_3->word_8 = r12_1;
    call_0027b3a8(frame.at(0x10).addr(), r0, r1, r2);  // (from the original)
    call_005c591c(frame.at(0x10).addr());  // (from the original)
}

}  // namespace d_005c5aa8
GUEST_EXPORT_FRAMED(0x005c5aa8, d_005c5aa8::f_005c5aa8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c5bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5bb8 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline constexpr guest::Function<0x0027ac30, u32(u32, u32)> call_0027ac30;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> request_is_reserved;
inline constexpr guest::Function<0x0071a844, u32(u32, u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x0071a868, u32(u32)> slot_2_if_class_3_0071a868;
inline constexpr guest::Function<0x00768628, u32(u32)> Item__is_in_id_set_a;

u32 f_005c5bb8(u32 r0_unused, u32 r1) {
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r4 = 0u;
    u32 r6 = current_player_data_address;
    do {
        u32 r0_1 = r4 & 0xffu;  // (from the original)
        if (r0_1 < 4u) {
            r0_2 = player_of_slot_index(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                goto L_5c5cac;
            }
            r5_1 = r0_2 + 0xau;  // (from the original)
            u32 r0_3 = slot_7_if_class_7(r5_1, r1);
            u32 r0_4 = Item__is_in_id_set_a(r0_3);
            if (r0_4 != 0) {
                copy_item_002fc8e8(r5_1 + 0x1cu, empty_item_address);  // (from the original)
            }
            u32 r0_6 = slot_2_if_class_3_0071a868(r5_1);
            r0_2 = Item__is_in_id_set_a(r0_6);
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
            r5_1 = r0_2 + 0xau;  // (from the original)
            u32 r0_7 = slot_7_if_class_7(r5_1, r1);
            u32 r0_8 = Item__is_in_id_set_a(r0_7);
            if (r0_8 != 0) {
                copy_item_002fc8e8(r5_1 + 0x1cu, empty_item_address);  // (from the original)
            }
            u32 r0_10 = slot_2_if_class_3_0071a868(r5_1);
            r0_2 = Item__is_in_id_set_a(r0_10);
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                goto L_5c5cac;
            }
        }
        r0_2 = call_0027ac30(r5_1, r1);
        r1 = guest::cpu()->r[1];
L_5c5cac:;
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_005c5bb8
GUEST_EXPORT_FRAMED(0x005c5bb8, d_005c5bb8::f_005c5bb8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c5df8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5df8 {

struct __attribute__((packed)) Local_005c5df8_r0_1 {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
    u8 unknown_67[0x110];  // (not used here)
    u8 byte_177;
    u8 unknown_178[0x31];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Local_005c5df8_r0_1, byte_66, 0x66);
GUEST_OFFSET(Local_005c5df8_r0_1, byte_177, 0x177);
GUEST_OFFSET(Local_005c5df8_r0_1, byte_1a9, 0x1a9);

struct __attribute__((packed)) Local_005c5df8_r2_1 {
    u8 unknown_0[0xbc];  // (not used here)
    u16 half_bc;
    u16 half_be;
};
GUEST_OFFSET(Local_005c5df8_r2_1, half_bc, 0xbc);
GUEST_OFFSET(Local_005c5df8_r2_1, half_be, 0xbe);

inline guest::global<u8, 0x00aadad5> global_00aadad5;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 f_005c5df8(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    gptr<Local_005c5df8_r0_1> object = gptr<Local_005c5df8_r0_1>(look_up_object(4u, 1u, r2, r3));
    if (object.addr() == 0) {
        return 1u;
    }
    u32 r1_2 = u32(object->byte_66) >> 1u & 1u;
    if (r1_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = *global_00aadad5;
    if ((r1_3 >> 3u & 1u) != 0) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    if ((r1_3 >> 1u & 1u) != 0) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    gptr<Local_005c5df8_r2_1> r2_1 = gptr<Local_005c5df8_r2_1>(object.addr() + 0x500u);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x005c5df8, d_005c5df8::f_005c5df8, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c5efc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c5efc {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c7e48, u32(u32, u32, u32, u32)> call_005c7e48;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;

struct __attribute__((packed)) Frame_005c5efc {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not read or written by name)
    u32 word_14;
};
GUEST_OFFSET(Frame_005c5efc, word_0, 0x0);
GUEST_OFFSET(Frame_005c5efc, word_4, 0x4);
GUEST_OFFSET(Frame_005c5efc, word_c, 0xc);
GUEST_OFFSET(Frame_005c5efc, byte_10, 0x10);
GUEST_OFFSET(Frame_005c5efc, word_14, 0x14);
GUEST_SIZE(Frame_005c5efc, 0x18);

void f_005c5efc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_005c5efc> frame;  // the original's stack frame
    call_005c7e48(frame.at(8).addr(), r0, r1, r3);
    u32 is_empty = Item__is_empty(frame.at(8).addr());
    if (is_empty != 0) {
        return;
    }
    u32 object = look_up_object(4u, 0u);
    if (object != 0) {
        if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) == 0) {  // (from the original)
            copy_item_002fc934(frame.at(0x14).addr(), frame.at(8).addr());  // (from the original)
            u32 r0_6 = frame->word_14;
            frame->byte_10 = 2;
            frame->word_c = r0_6;
            frame->word_0 = 1;
            frame->word_4 = 0;
            call_0066ac8c(object, frame.at(0xc).addr(), 1u, 0u);  // (from the original)
        }
    }
}

}  // namespace d_005c5efc
GUEST_EXPORT_FRAMED(0x005c5efc, d_005c5efc::f_005c5efc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c6024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6024 {

struct __attribute__((packed)) Object_005c6024_0 {
    u8 unknown_0[0x5700];  // (not used here)
    u8 byte_5700;
};
GUEST_OFFSET(Object_005c6024_0, byte_5700, 0x5700);

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
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;
inline constexpr guest::Function<0x005cc3a4, u32(u32, u32, u32, u32)> namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc3a4;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) Frame_005c6024 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x288];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c6024, word_10, 0x10);
GUEST_SIZE(Frame_005c6024, 0x29c);

u32 f_005c6024(gptr<Object_005c6024_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c6024> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r5_1 = r0 + 0x5700u;  // (from the original)
    Letter__Letter(frame.at(0x18).addr(), r1, r2, r3);  // (from the original)
    u32 res_1 = u32(arg0->byte_5700) << 0x1b;  // (from the original)
    u32 r0_2 = frame.at(0x298).addr();  // (from the original)
    if (s32(res_1) < 0) {
        construct_item(r0_2, 0x2258u);  // (from the original)
        frame->word_10 = 0x184b78;  // (from the original)
        gptr<Local_005c6024_ea_2> ea_2 = gptr<Local_005c6024_ea_2>(frame.at(0).addr());
        ea_2->word_0 = 1;
        ea_2->word_4 = r0 + 0x55a6u;  // (from the original)
        gptr<Local_005c6024_ea_3> ea_3 = gptr<Local_005c6024_ea_3>(frame.at(8).addr());
        ea_3->word_0 = r0_2;
        ea_3->word_4 = 0x1d;  // (from the original)
        r0_4 = namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc3a4(frame.at(0x18).addr(), 0x5c6160u, 1u, 3u);  // (from the original)
        if ((r0_4 ^ 1u) != 0) {
            goto L_5c6144;
        }
    } else {
        construct_item(r0_2, 0x2258u);  // (from the original)
        frame->word_10 = 0x182b80;  // (from the original)
        gptr<Local_005c6024_ea_5> ea_5 = gptr<Local_005c6024_ea_5>(frame.at(0).addr());
        ea_5->word_0 = 2;
        ea_5->word_4 = r0 + 0x55a6u;  // (from the original)
        gptr<Local_005c6024_ea_6> ea_6 = gptr<Local_005c6024_ea_6>(frame.at(8).addr());
        ea_6->word_0 = r0_2;
        ea_6->word_4 = 0x1d;  // (from the original)
        r0_4 = namespace___SimpleFuncDelegate__SimpleFuncDelegate_005cc3a4(frame.at(0x18).addr(), 0x5c6160u, 2u, 4u);  // (from the original)
        if ((r0_4 ^ 1u) != 0) {
            goto L_5c6144;
        }
    }
    r0_6 = frame.at(0x14).addr();  // (from the original)
    construct_item(r0_6, 0x3042u);  // (from the original)
    r0_7 = frame.at(0x18).addr();  // (from the original)
    set_held_item(r0_7, r0_6, 0u);
    r0_8 = frame.at(0x18).addr();  // (from the original)
    r0_4 = call_002ff4d4(r0_8, 7u, 2u, 0u);
    if (r0_4 != 0) {
        same_pointer(r0_4);
        return 1u;
    }
L_5c6144:;
    same_pointer(r0_4);
    return 0u;
}

}  // namespace d_005c6024
GUEST_EXPORT_FRAMED(0x005c6024, d_005c6024::f_005c6024, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c617c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c617c {

inline constexpr u32 global_00aaef18_address = 0x00aaef18u;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> copy_item_002fc8e8;

void f_005c617c() {
    u32 r4 = 0u;
    u32 r5 = global_00aaef18_address;
    do {
        u32 r0_1 = r5 + (r4 << 2);
        copy_item_002fc8e8(r0_1 + 0x3cu, r0_1 + 0x1cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    u32 r6 = r5 + 0xecu;  // (from the original)
    r5 += 0x4cu;  // (from the original)
    r4 = 0u;
    do {
        copy_item_002fc8e8(r6 + (r4 << 2), r5 + (r4 << 2), guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    *gptr<u32>(r6 + 0x40u) = *gptr<u32>(r5 + 0x40u);  // (from the original)
    *gptr<u32>(r6 + 0x44u) = *gptr<u32>(r5 + 0x44u);  // (from the original)
    *gptr<u32>(r6 + 0x48u) = *gptr<u32>(r5 + 0x48u);  // (from the original)
    *gptr<u32>(r6 + 0x4cu) = *gptr<u32>(r5 + 0x4cu);  // (from the original)
}

}  // namespace d_005c617c
GUEST_EXPORT_FRAMED(0x005c617c, d_005c617c::f_005c617c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005c649c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c649c {

inline constexpr guest::Function<0x005c64a4, u32(u32, u32)> call_005c64a4;

void f_005c649c() {
    call_005c64a4(1u, guest::cpu()->r[1]);
}

}  // namespace d_005c649c
GUEST_EXPORT(0x005c649c, d_005c649c::f_005c649c);

// f_005c6654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6654 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x00659c08, u32(u32, u32, u32, u32)> call_00659c08;
inline constexpr guest::Function<0x0067a478, u32(u32)> return_float_constant_0x41000000_;

void f_005c6654(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object != 0) {
        if (r0 != 0) {
            frame.release();
            AcPlayer_rec__change_state(object, 0xfu, 0u, 0u);
            return;  // (from the original)
        }
        return_float_constant_0x41000000_(object);
        frame.release();
        call_00659c08(object, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_005c6654
GUEST_EXPORT(0x005c6654, d_005c6654::f_005c6654);

// f_005c6760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6760 {

struct __attribute__((packed)) Local_005c6760_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005c6760_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_005c6760_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_005c6760_r0_3, word_8, 0x8);

inline constexpr u32 global_00aaf140_address = 0x00aaf140u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf140> global_00aaf140;
inline guest::global<u32, 0x00aaf144> global_00aaf144;
inline guest::global<u32, 0x00aaf148> global_00aaf148;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0023d5ec, u32(u32, u32, u32, u32)> call_0023d5ec;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;

u32 f_005c6760(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = *current_player_data;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_0023d5ec(r0_1, r1, r2, r3);
    gptr<Local_005c6760_r0_3> r0_3 = gptr<Local_005c6760_r0_3>(return_constant_0xad56b0_(r0_2));
    u32 r1_1 = r0_3->word_0;
    u32 r2_1 = r0_3->word_4;
    u32 r3_1 = r0_3->word_8;
    *global_00aaf140 = r1_1;
    *global_00aaf144 = r2_1;
    *global_00aaf148 = r3_1;
    guest::cpu()->r[1] = r1_1;
    return global_00aaf140_address;
}

}  // namespace d_005c6760
GUEST_EXPORT_FRAMED(0x005c6760, d_005c6760::f_005c6760, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c67d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c67d8 {

inline guest::global<u32, 0x00aaf194> global_00aaf194;
inline guest::global<u32, 0x00aaf198> global_00aaf198;

void f_005c67d8() {
    float S0_1 = 0.0f;
    *global_00aaf194 = std::bit_cast<u32>(S0_1);
    *global_00aaf198 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005c67d8
GUEST_EXPORT(0x005c67d8, d_005c67d8::f_005c67d8);

// f_005c6878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6878 {

struct __attribute__((packed)) Object_005c6878_0 {
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
GUEST_OFFSET(Object_005c6878_0, byte_0, 0x0);
GUEST_OFFSET(Object_005c6878_0, byte_1, 0x1);
GUEST_OFFSET(Object_005c6878_0, half_2, 0x2);
GUEST_OFFSET(Object_005c6878_0, half_4, 0x4);
GUEST_OFFSET(Object_005c6878_0, half_6, 0x6);
GUEST_OFFSET(Object_005c6878_0, byte_8, 0x8);
GUEST_OFFSET(Object_005c6878_0, half_9, 0x9);
GUEST_OFFSET(Object_005c6878_0, byte_b, 0xb);
GUEST_OFFSET(Object_005c6878_0, byte_c, 0xc);

struct __attribute__((packed)) Local_005c6878_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c6878_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005c6878_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x005c330c, u32(u32, u32, u32, u32)> refresh_slot_record;

void f_005c6878(gptr<Object_005c6878_0> arg0, u32 r1, u32 r2, gptr<Float3> arg3, float S0, float S1) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = arg3.addr();
    gptr<Local_005c6878_ea_1> ea_1 = gptr<Local_005c6878_ea_1>(frame.at(0x20).addr());  // (from the original)
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    u32 r0_1 = refresh_slot_record(r1, r1, r2, arg3.addr());
    copy_bytes_at_any_alignment(arg0.addr(), r0_1, 0x26u);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x005c6878, d_005c6878::f_005c6878, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005c6900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6900 {

inline constexpr guest::Function<0x005c6908, u32(u32, u32, u32, u32)> call_005c6908;

u32 f_005c6900() {
    return call_005c6908(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005c6900
GUEST_EXPORT(0x005c6900, d_005c6900::f_005c6900);

// f_005c6a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6a20 {

struct __attribute__((packed)) Object_005c6a20_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005c6a20_0, word_0, 0x0);

struct __attribute__((packed)) Object_005c6a20_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005c6a20_1, word_0, 0x0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0066ac8c, u32(u32, u32, u32, u32)> call_0066ac8c;

struct __attribute__((packed)) Frame_005c6a20 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u32 word_d;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c6a20, word_0, 0x0);
GUEST_OFFSET(Frame_005c6a20, word_4, 0x4);
GUEST_OFFSET(Frame_005c6a20, word_8, 0x8);
GUEST_OFFSET(Frame_005c6a20, byte_c, 0xc);
GUEST_OFFSET(Frame_005c6a20, word_d, 0xd);
GUEST_OFFSET(Frame_005c6a20, byte_11, 0x11);
GUEST_SIZE(Frame_005c6a20, 0x14);

void f_005c6a20(gptr<Object_005c6a20_0> arg0, gptr<Object_005c6a20_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c6a20> frame;  // the original's stack frame
    u32 object = look_up_object(4u, 0u, r2, r3);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
        return;
    }
    u32 r12_1 = arg0->word_0;
    frame->byte_c = 2;
    frame->word_8 = r12_1;
    frame->word_d = arg1->word_0;
    frame->word_0 = 1;
    frame->word_4 = 0;
    frame->byte_11 = 4;
    call_0066ac8c(object, frame.at(8).addr(), 2u, 0u);
}

}  // namespace d_005c6a20
GUEST_EXPORT_FRAMED(0x005c6a20, d_005c6a20::f_005c6a20, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c6a98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6a98 {

inline constexpr u32 global_00aadad4_address = 0x00aadad4u;
inline guest::global<u8, 0x00aadad5> global_00aadad5;

u32 f_005c6a98() {
    u32 r1_1 = u32(*global_00aadad5) | 2u;
    *global_00aadad5 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return global_00aadad4_address;
}

}  // namespace d_005c6a98
GUEST_EXPORT(0x005c6a98, d_005c6a98::f_005c6a98);

// f_005c6b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6b24 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> slot_7_if_class_7;
inline constexpr guest::Function<0x007241b0, u32(u32)> Pockets__find_empty_slot;
inline constexpr guest::Function<0x00765e04, u32(u32, u32)> call_00765e04;
inline constexpr guest::Function<0x0076aa70, u32(u32)> Item__is_wear_class_7_in_mode_with_flag_4;

u32 f_005c6b24(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = *current_player_data;
    if (r4_1 == 0) {
        return 0u;
    }
    u32 r0_2 = slot_7_if_class_7(r4_1 + 0xau, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    copy_item_002fc934(frame.at(0).addr(), r0_2);
    u32 is_empty = Item__is_empty(frame.at(0).addr());
    if (is_empty != 0) {
        return 1u;
    }
    u32 slot = Pockets__find_empty_slot(r4_1 + 0x6bd0u);  // (from the original)
    if (s32(slot) < 0) {
        return 0u;
    }
    u32 r4_2 = frame.at(4).addr();
    u32 object = look_up_object(4u, 0u);
    if (object == 0) {
        copy_item_002fc934(r4_2, empty_item_address);
    } else {
        u32 r0_9 = call_00765e04(object, 0u);
        copy_item_002fc934(r4_2, r0_9);
    }
    u32 r0_11 = Item__is_wear_class_7_in_mode_with_flag_4(frame.at(4).addr());
    return r0_11 == 0 ? 2u : 3u;
}

}  // namespace d_005c6b24
GUEST_EXPORT_FRAMED(0x005c6b24, d_005c6b24::f_005c6b24, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c6e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6e18 {

struct __attribute__((packed)) Local_005c6e18_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c6e18_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005c6e18_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005c6e18_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005c6e18_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_005c6e18_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_005c6e18_r0_1, word_8, 0x8);

struct __attribute__((packed)) Local_005c6e18_r0_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005c6e18_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_005c6e18_r0_6, word_4, 0x4);
GUEST_OFFSET(Local_005c6e18_r0_6, word_8, 0x8);

inline constexpr u32 global_00aaf140_address = 0x00aaf140u;
inline constexpr u32 global_00aaf144_address = 0x00aaf144u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf140> global_00aaf140;
inline guest::global<u32, 0x00aaf144> global_00aaf144;
inline guest::global<u32, 0x00aaf148> global_00aaf148;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0023d5ec, u32(u32)> call_0023d5ec;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> word_and_byte_pairs_equal;

void f_005c6e18(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_005c6e18_r0_1> r0_1 = gptr<Local_005c6e18_r0_1>(return_constant_0xad56b0_(r0, r1, r2, r3));
    u32 r2_1 = *global_00aaf144;
    u32 r3_1 = *global_00aaf148;
    gptr<Local_005c6e18_ea_1> ea_1 = gptr<Local_005c6e18_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2_1;
    ea_1->word_4 = r3_1;
    u32 r0_3 = word_and_byte_pairs_equal(r0_1->word_0, r0_1->word_4, r0_1->word_8, *global_00aaf140);
    if (r0_3 != 0) {
        return;
    }
    u32 r0_4 = *current_player_data;
    if (r0_4 == 0) {
        return;
    }
    u32 r0_5 = call_0023d5ec(r0_4);
    gptr<Local_005c6e18_r0_6> r0_6 = gptr<Local_005c6e18_r0_6>(return_constant_0xad56b0_(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r1_3 = r0_6->word_0;
    u32 r2_4 = r0_6->word_4;
    u32 r3_4 = r0_6->word_8;
    *global_00aaf140 = r1_3;
    *global_00aaf144 = r2_4;
    *global_00aaf148 = r3_4;
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_005c6e18
GUEST_EXPORT_FRAMED(0x005c6e18, d_005c6e18::f_005c6e18, 0x4000);  // pushes {lr} first, as the original

// f_005c6f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6f7c {

inline guest::global<u8, 0x00aadad4> global_00aadad4;

u32 f_005c6f7c() {
    u32 r1_1 = *global_00aadad4;
    if ((r1_1 >> 3u & 1u) != 0) {
        r1_1 &= ~8u;
        *global_00aadad4 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_005c6f7c
GUEST_EXPORT(0x005c6f7c, d_005c6f7c::f_005c6f7c);

// f_005c6fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c6fa0 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x005c5eb8, u32(u32, u32, u32, u32)> slot_object_has_flag_171_and_state_ea;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> AcPlayer_rec__change_state;
inline constexpr guest::Function<0x0067c674, u32(u32, u32, u32, u32)> call_0067c674;

void f_005c6fa0(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = slot_object_has_flag_171_and_state_ea(4u, r1, r2, r3);
    if (r0_1 == 0) {
        return;
    }
    u32 object = look_up_object(4u, 1u);
    if (object == 0) {
        return;
    }
    if ((u32(*gptr<u8>(object + 0x171u)) >> 5u & 1u) == 0) {  // (from the original)
        return;
    }
    u32 r0_3 = AcPlayer_rec__change_state(object, 0xeau, 0u, 0u);  // (from the original)
    if (r0_3 == 0) {
        return;
    }
    float S0_4 = 6.0f;
    guest::cpu()->s[0] = S0_4;
    frame.release();
    call_0067c674(object, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005c6fa0
GUEST_EXPORT(0x005c6fa0, d_005c6fa0::f_005c6fa0);

// f_005c7010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7010 {

inline constexpr u32 global_00a84790_address = 0x00a84790u;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;

void f_005c7010(u32 r0, u32 r1) {
    u32 r0_1 = r0 & 3u;
    u32 r0_2 = *gptr<u8>((r1 & 3u) + 0x881b8cu);  // (from the original)
    apply_entry_template(r0_2, ((r0_1 * 3u + (r0_1 << 4)) << 1) + global_00a84790_address + 0x292acu, 0u);  // (from the original)
}

}  // namespace d_005c7010
GUEST_EXPORT(0x005c7010, d_005c7010::f_005c7010);

// f_005c7258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7258 {

inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32)> look_up_object;
inline constexpr guest::Function<0x00660d14, u32(u32, u32, u32)> call_00660d14;
inline constexpr guest::Function<0x006bb91c, u32(u32, u32)> call_006bb91c;

struct __attribute__((packed)) Frame_005c7258 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005c7258, word_0, 0x0);
GUEST_SIZE(Frame_005c7258, 0x4);

void f_005c7258(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c7258> frame;  // the original's stack frame
    frame->word_0 = r3;
    if (*current_player_data != 0) {
        construct_item(frame.at(0).addr(), 0x33aau, r2, r3);  // (from the original)
        call_006bb91c(frame.at(0).addr(), r0);
        u32 object = look_up_object(4u, 0u);
        if (object != 0) {
            if ((u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u) == 0) {  // (from the original)
                call_00660d14(object, frame.at(0).addr(), 0u);
            }
        }
    }
}

}  // namespace d_005c7258
GUEST_EXPORT_FRAMED(0x005c7258, d_005c7258::f_005c7258, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005c7a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7a8c {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 global_00aaef18_address = 0x00aaef18u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x005c7e48, u32(u32, u32, u32, u32)> call_005c7e48;
inline constexpr guest::Function<0x006bb91c, u32(u32, u32)> call_006bb91c;
inline constexpr guest::Function<0x0070bd0c, u32(u32)> call_0070bd0c;
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> record_address;

struct __attribute__((packed)) Frame_005c7a8c {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c7a8c, word_0, 0x0);
GUEST_SIZE(Frame_005c7a8c, 0x18);

void f_005c7a8c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c7a8c> frame;  // the original's stack frame
    u32 r1_2 = 0;
    frame->word_0 = r3;
    if (r1 < 0xau) {  // (from the original)
        u32 r0_1 = *current_player_data;
        if (r0_1 != 0) {
            u32 r0_3 = record_address(r0_1 + 0x2cu, r1, r2, r3);  // (from the original)
            u32 r0_4 = *gptr<u8>(r0_3 + 0x69u);  // (from the original)
            if (r0_4 - 6u <= 1u) {
                u32 r0_5 = *current_player_data;
                if (r0_5 == 0) {
                    frame.release();
                    copy_item_002fc934(r0, empty_item_address);
                    return;
                }
                u32 r0_7 = record_address(r0_5 + 0x2cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                u32 r0_8 = call_0070bd0c(r0_7);
                u32 zf_1 = r0_8 == 6u;
                if (zf_1) {
                    r1_2 = 0x33abu;  // (from the original)
                } else {
                    r1_2 = 0x33adu;  // (from the original)
                    zf_1 = r0_8 == 7u;
                }
                if (!zf_1 && r0_8 == 0xbu) {  // (from the original)
                    r1_2 = 0x33acu;  // (from the original)
                }
                construct_item(frame.at(0).addr(), r1_2);
                call_006bb91c(frame.at(0).addr(), r1);
                copy_item_002fc934(r0, frame.at(0).addr());
                return;
            }
            if (r0_4 <= 5u) {
                u32 r3_5 = frame->word_0;
                frame.release();
                call_005c7e48(r0, r1, 0xcu, r3_5);
                return;
            }
        }
    }
    frame.release();
    copy_item_002fc934(r0, empty_item_address);
    return;
}

}  // namespace d_005c7a8c
GUEST_EXPORT(0x005c7a8c, d_005c7a8c::f_005c7a8c);

// f_005c7d24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7d24 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0070ab24, u32(u32, u32)> slot_of_4_at_e0;

u32 f_005c7d24() {
    u32 object = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object == 0) {
        return object;
    }
    u32 r1_2 = *gptr<u8>(object + 0x1a9u);  // (from the original)
    if (r1_2 != 0x75u) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r0_3 = slot_of_4_at_e0(object + 0x1b4u, 0u);  // (from the original)
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_005c7d24
GUEST_EXPORT_FRAMED(0x005c7d24, d_005c7d24::f_005c7d24, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c7d64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c7d64 {

struct __attribute__((packed)) Local_005c7d64_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005c7d64_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005c7d64_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005c7d64_r0_1 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x71b];  // (not used here)
    u8 byte_8c5;
};
GUEST_OFFSET(Local_005c7d64_r0_1, byte_1a9, 0x1a9);
GUEST_OFFSET(Local_005c7d64_r0_1, byte_8c5, 0x8c5);

inline guest::global<u32, 0x00886cac> global_00886cac;
inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;

struct __attribute__((packed)) Frame_005c7d64 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
};
GUEST_OFFSET(Frame_005c7d64, word_0, 0x0);
GUEST_OFFSET(Frame_005c7d64, word_4, 0x4);
GUEST_OFFSET(Frame_005c7d64, word_10, 0x10);
GUEST_SIZE(Frame_005c7d64, 0x14);

void f_005c7d64(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c7d64> frame;  // the original's stack frame
    gptr<Local_005c7d64_r0_1> object = gptr<Local_005c7d64_r0_1>(look_up_object(4u, 0u, r2, r3));
    if (object.addr() == 0) {
        return;
    }
    u32 r1_2 = u32(object->byte_8c5) >> 5u & 1u;
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    u32 r1_3 = object->byte_1a9;
    if (r1_3 != 0xa4u) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return;
    }
    gptr<Local_005c7d64_ea_1> ea_1 = gptr<Local_005c7d64_ea_1>(frame.at(8).addr());
    ea_1->word_0 = 0;
    ea_1->word_4 = 2;
    frame->word_10 = 0;
    frame->word_0 = 5;
    frame->word_4 = 1;
    call_006739b8(object.addr(), 0x12u, 1u, *global_00886cac);  // (from the original)
}

}  // namespace d_005c7d64
GUEST_EXPORT_FRAMED(0x005c7d64, d_005c7d64::f_005c7d64, 0x4000);  // pushes {lr} first, as the original

// f_005c8170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8170 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00687fb4, u32(u32, u32)> call_00687fb4;

u32 f_005c8170(u32 r0) {
    u32 object = look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object == 0) {
        return object;
    }
    u32 r1_2 = u32(*gptr<u8>(object + 0x8c5u)) >> 5u & 1u;  // (from the original)
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r0_2 = call_00687fb4(object, r0);
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_005c8170
GUEST_EXPORT_FRAMED(0x005c8170, d_005c8170::f_005c8170, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c8244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8244 {

struct __attribute__((packed)) Local_005c8244_r0_1 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x726];  // (not used here)
    u8 byte_8d0;
};
GUEST_OFFSET(Local_005c8244_r0_1, byte_1a9, 0x1a9);
GUEST_OFFSET(Local_005c8244_r0_1, byte_8d0, 0x8d0);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 f_005c8244() {
    gptr<Local_005c8244_r0_1> object = gptr<Local_005c8244_r0_1>(look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]));
    if (object.addr() == 0) {
        return object.addr();
    }
    u32 r1_2 = object->byte_1a9;
    if (r1_2 != 0xafu || object->byte_8d0 != 1u) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 object_2 = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object_2 != 0 && (u32(*gptr<u8>(object_2 + 0x8c7u)) & 1u) != 0) {  // (from the original)
        return 0u;
    }
    u32 object_3 = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object_3 != 0) {
        if ((u32(*gptr<u8>(object_3 + 0x8c5u)) >> 5u & 1u) != 0) {  // (from the original)
            return 0u;
        }
    }
    u32 object_4 = look_up_object(4u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (object_4 == 0) {
        return 1u;
    }
    if ((u32(*gptr<u8>(object_4 + 0x8c7u)) >> 5u & 1u) != 0) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_005c8244
GUEST_EXPORT_FRAMED(0x005c8244, d_005c8244::f_005c8244, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c8460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8460 {

struct __attribute__((packed)) Local_005c8460_r0_1 {
    u8 unknown_0[0x8c5];  // (not used here)
    u8 byte_8c5;
    u8 unknown_8c6[0x1];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Local_005c8460_r0_1, byte_8c5, 0x8c5);
GUEST_OFFSET(Local_005c8460_r0_1, byte_8c7, 0x8c7);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006739b8, u32(u32, u32, u32, u32)> call_006739b8;

struct __attribute__((packed)) Frame_005c8460 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Frame_005c8460, word_0, 0x0);
GUEST_OFFSET(Frame_005c8460, word_4, 0x4);
GUEST_OFFSET(Frame_005c8460, word_8, 0x8);
GUEST_OFFSET(Frame_005c8460, word_c, 0xc);
GUEST_OFFSET(Frame_005c8460, word_10, 0x10);
GUEST_SIZE(Frame_005c8460, 0x14);

u32 f_005c8460(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005c8460> frame;  // the original's stack frame
    gptr<Local_005c8460_r0_1> object = gptr<Local_005c8460_r0_1>(look_up_object(4u, 0u, r2, r3));
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
            u32 r0_2 = call_006739b8(object.addr(), r0, r1, 0u);
            return r0_2;
        }
    }
    return 0u;
}

}  // namespace d_005c8460
GUEST_EXPORT_FRAMED(0x005c8460, d_005c8460::f_005c8460, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005c8694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8694 {

struct __attribute__((packed)) Local_005c8694_r0_1 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x416];  // (not used here)
    u16 half_5c0;
    u8 unknown_5c2[0x308];  // (not used here)
    u8 byte_8ca;
};
GUEST_OFFSET(Local_005c8694_r0_1, byte_1a9, 0x1a9);
GUEST_OFFSET(Local_005c8694_r0_1, half_5c0, 0x5c0);
GUEST_OFFSET(Local_005c8694_r0_1, byte_8ca, 0x8ca);

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;

u32 f_005c8694() {
    gptr<Local_005c8694_r0_1> object = gptr<Local_005c8694_r0_1>(look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]));
    if (object.addr() == 0) {
        return object.addr();
    }
    u32 r1_2 = object->byte_1a9;
    if (r1_2 != 0xafu) {  // (from the original)
        if (r1_2 == 0xe3u) {  // (from the original)
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
    u32 r1_3 = *gptr<u16>(object.addr() + 0x5c4u);  // (from the original)
    if (r1_3 != 0 || object->byte_8ca != 0x2eu) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_005c8694
GUEST_EXPORT_FRAMED(0x005c8694, d_005c8694::f_005c8694, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c8710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8710 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 global_00aad990_address = 0x00aad990u;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002fdf00, u32(u32)> is_below_8;
inline constexpr guest::Function<0x00305f44, u32(u32)> query_current_main_object;
inline constexpr guest::Function<0x005c7c24, u32(u32, u32, u32, u32)> call_005c7c24;

void f_005c8710(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = query_current_main_object(r0);
    u32 r4_1 = *gptr<u8>((r0_1 & 3u) + global_00aad990_address);
    u32 r0_2 = is_below_8(r4_1);
    if (r0_2 == 0) {
        r4_1 = 8u;
    }
    u32 r0_3 = is_local_slot(r4_1);
    frame.release();
    call_005c7c24(0u, r0_3 == 0 ? 9u : 8u, 0x1cu, empty_item_address);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_005c8710
GUEST_EXPORT(0x005c8710, d_005c8710::f_005c8710);

// f_005c87e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c87e4 {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u8, 0x00aadad4> global_00aadad4;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x005b6a10, u32(u32)> call_005b6a10;
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32, u32)> request_is_reserved;

u32 f_005c87e4(u32 r0, u32 r1) {
    u32 r0_1 = request_is_reserved(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        return 0u;
    }
    u32 r4_1 = *current_player_data;
    if (r4_1 == 0) {
        return 0u;
    }
    u32 r0_2 = read_global_byte_2(current_player_data_address);
    u32 r0_3 = call_005b6a10(r0_2);
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r0_4 = *gptr<u8>(r4_1 + 0x8f7fu);  // (from the original)
    u32 r1_4 = r0_4 >> 7;
    if (r1_4 != 0) {
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    *gptr<u8>(r4_1 + 0x8f7fu) = u8(r0_4 | 0x80u);  // (from the original)
    u32 r1_5 = u32(*global_00aadad4) | 4u;
    *global_00aadad4 = u8(r1_5);
    guest::cpu()->r[1] = r1_5;
    return 1u;
}

}  // namespace d_005c87e4
GUEST_EXPORT_FRAMED(0x005c87e4, d_005c87e4::f_005c87e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_005c886c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c886c {

inline guest::global<u8, 0x00aadad4> global_00aadad4;

u32 f_005c886c() {
    u32 r0_1 = 0;
    u32 r1_1 = *global_00aadad4;
    if ((r1_1 >> 6u & 1u) == 0) {
        r1_1 |= 0x40u;  // (from the original)
        *global_00aadad4 = u8(r1_1);
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005c886c
GUEST_EXPORT(0x005c886c, d_005c886c::f_005c886c);

// f_005c8f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c8f14 {

struct __attribute__((packed)) Object_005c8f14_0 {
    u8 unknown_0[0x180];  // (not used here)
    u8 byte_180;
    u8 unknown_181[0x1f];  // (not used here)
    u8 byte_1a0;
};
GUEST_OFFSET(Object_005c8f14_0, byte_180, 0x180);
GUEST_OFFSET(Object_005c8f14_0, byte_1a0, 0x1a0);

struct __attribute__((packed)) Local_005c8f14_r2_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005c8f14_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_005c8f14_r2_1, word_4, 0x4);
GUEST_OFFSET(Local_005c8f14_r2_1, word_8, 0x8);


u32 f_005c8f14(gptr<Object_005c8f14_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->byte_1a0 = 0;
    u32 r4 = 0u;
    u32 r2 = r0 + 0x180u;  // (from the original)
    if (arg0->byte_180 != 0) {
        r4 = 0x20u;  // (from the original)
    }
    u32 r1 = r0;
    u32 r3 = 0u;
    do {
        u32 r12_1 = *gptr<u8>(r2);
        if (r12_1 != 0) {
            u32 r12_2 = r12_1 - 1u & 0xffu;  // (from the original)
            *gptr<u8>(r2) = u8(r12_2);
            if (r4 != 0 && r12_2 == 0 && *gptr<u8>(r0 + 0x180u) == 0) {  // (from the original)
                gptr<Local_005c8f14_r2_1> r2_1 = gptr<Local_005c8f14_r2_1>(r0 + 0x1a4u);  // (from the original)
                *gptr<u8>(r0 + 0x1a0u) = 1;  // (from the original)
                r2_1->word_0 = *gptr<u32>(r1);
                r2_1->word_4 = *gptr<u32>(r1 + 4u);
                u32 r0_1 = *gptr<u32>(r1 + 8u);
                r2_1->word_8 = r0_1;
                guest::cpu()->r[1] = r1;
                return r0_1;
            }
        }
        r3 += 1u;
        r2 += 1u;
        r1 += 0xcu;  // (from the original)
        guest::preempt();
    } while (r3 < 0x20u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005c8f14
GUEST_EXPORT_FRAMED(0x005c8f14, d_005c8f14::f_005c8f14, 0x10);  // pushes {r4} first, as the original

// f_005c91a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c91a0 {


u32 f_005c91a0(u32 r0, u32 r1) {
    if (r0 >= 4u) {
        return 1u;
    }
    u32 r0_1 = *gptr<s8>(r0 + 0xa82000u);  // (from the original)
    if (s32(r0_1) >= 4) {
        r0_1 = ~0u;
    }
    guest::cpu()->r[1] = 0xa82000u;  // (from the original)
    return u32(s32(r0_1) >> 0x1f) + 1u;  // (from the original)
}

}  // namespace d_005c91a0
GUEST_EXPORT(0x005c91a0, d_005c91a0::f_005c91a0);

// f_005c91cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c91cc {

inline constexpr u32 global_00a84790_address = 0x00a84790u;
inline constexpr u32 global_00aad990_address = 0x00aad990u;
inline constexpr u32 global_00aaef18_address = 0x00aaef18u;
inline guest::global<u32, 0x00aad994> global_00aad994;
inline guest::global<u32, 0x00aad998> global_00aad998;
inline guest::global<u32, 0x00aad99c> global_00aad99c;
inline guest::global<u32, 0x00aad9a0> global_00aad9a0;
inline guest::global<u16, 0x00aaef14> global_00aaef14;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32)> clear;
inline constexpr guest::Function<0x005bf954, u32(u32, u32, u32)> call_005bf954;
inline constexpr guest::Function<0x005bfb94, u32(u32, u32, u32, u32)> call_005bfb94;

void f_005c91cc() {
    guest::StackFrame frame(0x18);  // the original's stack frame
    set_bytes(global_00aad990_address, 4u, 8u, guest::cpu()->r[3]);
    u32 r7 = 0u;
    *global_00aad994 = r7;
    *global_00aad998 = r7;
    *global_00aad99c = r7;
    *global_00aad9a0 = r7;
    clear_aligned(global_00a84790_address, 0x29200u);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r8 = global_00a84790_address;
    u32 r4 = 0u;
    do {
        u32 r6_1 = r8 + (r4 * 3u + (r4 << 4) << 1);
        u32 r5_1 = r6_1 + 0x29214u;  // (from the original)
        clear(r5_1, 0x26u, r2);  // (from the original)
        *gptr<u8>(r5_1) = 0xa5;  // (from the original)
        copy_bytes_at_any_alignment(r6_1 + 0x292acu, r5_1, 0x26u);  // (from the original)
        r2 = guest::cpu()->r[2];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    *global_00aaef14 = u16(r7);
    call_005bf954(global_00aaef18_address, guest::cpu()->r[1], r2);
    frame.release();
    call_005bfb94(global_00aaef18_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005c91cc
GUEST_EXPORT(0x005c91cc, d_005c91cc::f_005c91cc);

// f_005c9754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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


struct __attribute__((packed)) Frame_005c9754 {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005c9754, byte_1, 0x1);
GUEST_SIZE(Frame_005c9754, 0x4);

u32 f_005c9754(u32 r0) {
    guest::StackFrameOf<Frame_005c9754> frame;  // the original's stack frame
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0x12u;  // (from the original)
    }
    gptr<Local_005c9754_r0_1> r0_1 = gptr<Local_005c9754_r0_1>((r0 << 2) + 0x88b948u);  // (from the original)
    *frame.at<u8>(0) = u8(u32(r0_1->byte_2) - u32(r0_1->byte_0) + 1u);
    u32 r1_1 = r0_1->byte_3;
    frame->byte_1 = u8(r1_1 - u32(r0_1->byte_1) + 1u);
    u32 r0_2 = *frame.at<u16>(0);
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_005c9754
GUEST_EXPORT(0x005c9754, d_005c9754::f_005c9754);

// f_005c98a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005c98a8 {

inline constexpr u32 global_0095b6e4_address = 0x0095b6e4u;
inline constexpr u32 global_00ac3558_address = 0x00ac3558u;
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
inline guest::global<u32, 0x0095b6e4> global_0095b6e4;
inline guest::global<u16, 0x00ac3558> global_00ac3558;
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
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32)> claim_flag;

u32 f_005c98a8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0_1 = 0x887402u;  // (from the original)
    } else {
        if ((*global_0095b6e4 & 1u) == 0) {
            u32 r0_2 = claim_flag(global_0095b6e4_address, r1);
            r1 = guest::cpu()->r[1];
            if (r0_2 != 0) {
                *global_00ac3558 = *global_00886f02;
                u32 r14 = 0x886f20u;  // (from the original)
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
        r0_1 = (r0 << 1) + global_00ac3558_address;
    }
    u32 r0_3 = *gptr<u16>(r0_1);
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_005c98a8
GUEST_EXPORT_FRAMED(0x005c98a8, d_005c98a8::f_005c98a8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005ca1d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca1d4 {


u32 f_005ca1d4(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        return 0u;
    }
    u32 r1_1 = gptr<u16>(0x88bf34u)[r0];  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r1_1 * 0x64u;  // (from the original)
}

}  // namespace d_005ca1d4
GUEST_EXPORT(0x005ca1d4, d_005ca1d4::f_005ca1d4);

// f_005ca294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca294 {


u32 f_005ca294(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0_1 = 0u;
    } else {
        r1 = 0x88be36u;  // (from the original)
        r0_1 = *gptr<u8>(r1 + r0);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005ca294
GUEST_EXPORT(0x005ca294, d_005ca294::f_005ca294);

// f_005ca2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca2ac {

struct __attribute__((packed)) Object_005ca2ac_0 {
    u32 word_0;
    float float_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005ca2ac_0, word_0, 0x0);
GUEST_OFFSET(Object_005ca2ac_0, float_4, 0x4);
GUEST_OFFSET(Object_005ca2ac_0, word_8, 0x8);

struct __attribute__((packed)) Object_005ca2ac_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_005ca2ac_1, half_0, 0x0);

struct __attribute__((packed)) Object_005ca2ac_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_005ca2ac_2, word_0, 0x0);

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

void f_005ca2ac(gptr<Object_005ca2ac_0> arg0, gptr<Object_005ca2ac_1> arg1, gptr<Object_005ca2ac_2> arg2, u32 r3) {
    if (r3 >= 0xfcu) {  // (from the original)
        return;
    }
    gptr<Local_005ca2ac_r4_1> r4_1 = gptr<Local_005ca2ac_r4_1>((r3 << 4) + 0x88c724u);  // (from the original)
    arg0->word_0 = r4_1->word_0;
    u32 r0_1 = byte_88bd38_is_f(r3);
    float S1_1 = 182.0f;
    arg0->float_4 = r0_1 == 0 ? 0.0f : -488.0f;
    arg0->word_8 = r4_1->word_4;
    arg1->half_0 = u16(vcvt_sz_f(r4_1->float_8 * S1_1));
    arg2->word_0 = r4_1->word_c;
}

}  // namespace d_005ca2ac
GUEST_EXPORT_FRAMED(0x005ca2ac, d_005ca2ac::f_005ca2ac, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005ca328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca328 {


u32 f_005ca328(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0_1 = 0xa5u;  // (from the original)
    } else {
        r1 = 0x88b74cu;  // (from the original)
        r0_1 = *gptr<u8>(r1 + r0);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005ca328
GUEST_EXPORT(0x005ca328, d_005ca328::f_005ca328);

// f_005ca3c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca3c8 {

struct __attribute__((packed)) Object_005ca3c8_0 {
    u8 unknown_0[0x88d9de];  // (not used here)
    u8 byte_88d9de;
};
GUEST_OFFSET(Object_005ca3c8_0, byte_88d9de, 0x88d9de);


u32 f_005ca3c8(gptr<Object_005ca3c8_0> arg0) {
    if (arg0.addr() >= 0x67u) {  // (from the original)
        return ~0u;
    }
    return *gptr<s8>(u32(arg0->byte_88d9de) + 0x88d8e0u);  // (from the original)
}

}  // namespace d_005ca3c8
GUEST_EXPORT(0x005ca3c8, d_005ca3c8::f_005ca3c8);

// f_005ca3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca3ec {


u32 f_005ca3ec(u32 r0, u32 r1) {
    if (r1 >= 0xfcu || r0 >= 8u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return ~0u;
    }
    u32 r1_1 = (r1 << 3) + 0x88dbaau;  // (from the original)
    u32 r0_2 = *gptr<s8>(r1_1 + r0);
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_005ca3ec
GUEST_EXPORT(0x005ca3ec, d_005ca3ec::f_005ca3ec);

// f_005ca478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca478 {

inline constexpr u32 global_0095bae0_address = 0x0095bae0u;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 f_005ca478(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        return 0u;
    }
    u32 r0_1 = strcmp(0x5ca4acu, gptr<u32>(global_0095bae0_address)[r0]);  // (from the original)
    return r0_1 == 0;
}

}  // namespace d_005ca478
GUEST_EXPORT_FRAMED(0x005ca478, d_005ca478::f_005ca478, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca4b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether entry `index` of the object name table (252 entries) is "fobj".
namespace d_005ca4b4 {

inline constexpr u32 global_0095bae0_address = 0x0095bae0u;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 object_name_is_fobj(u32 index, u32 r1) {
    if (index >= 0xfcu) {  // (from the original)
        return 0u;
    }
    u32 r0_1 = strcmp(0x5ca4e8u, gptr<u32>(global_0095bae0_address)[index]);  // (from the original)
    return r0_1 == 0;
}

}  // namespace d_005ca4b4
GUEST_EXPORT_FRAMED(0x005ca4b4, d_005ca4b4::object_name_is_fobj, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca4f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca4f0 {

inline constexpr u32 global_0095bae0_address = 0x0095bae0u;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 f_005ca4f0(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        return 0u;
    }
    u32 r0_1 = strcmp(0x5ca524u, gptr<u32>(global_0095bae0_address)[r0]);  // (from the original)
    return r0_1 == 0;
}

}  // namespace d_005ca4f0
GUEST_EXPORT_FRAMED(0x005ca4f0, d_005ca4f0::f_005ca4f0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca530 {

inline constexpr u32 global_0095bae0_address = 0x0095bae0u;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 f_005ca530(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        return 0u;
    }
    u32 r0_1 = strcmp(0x5ca564u, gptr<u32>(global_0095bae0_address)[r0]);  // (from the original)
    return r0_1 == 0;
}

}  // namespace d_005ca530
GUEST_EXPORT_FRAMED(0x005ca530, d_005ca530::f_005ca530, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca56c {


u32 f_005ca56c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {  // (from the original)
        r0_1 = 0u;
    } else {
        r1 = 0x88c42au;  // (from the original)
        r0_1 = *gptr<s8>(r1 + r0);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005ca56c
GUEST_EXPORT(0x005ca56c, d_005ca56c::f_005ca56c);

// f_005ca584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca584 {

inline constexpr u32 global_0095bae0_address = 0x0095bae0u;
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> strcmp;

u32 f_005ca584(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        return 0u;
    }
    u32 r0_1 = strcmp(0x5ca5b8u, gptr<u32>(global_0095bae0_address)[r0]);  // (from the original)
    return r0_1 == 0;
}

}  // namespace d_005ca584
GUEST_EXPORT_FRAMED(0x005ca584, d_005ca584::f_005ca584, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca5d8 {

struct __attribute__((packed)) Object_005ca5d8_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_005ca5d8_2, word_0, 0x0);

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;

u32 f_005ca5d8(u32 r0, u32 r1, gptr<Object_005ca5d8_2> arg2, u32 r3) {
    u32 r5_1 = arg2->word_0;
    u32 r3_1 = ~0u;
    arg2->word_0 = 0;
    u32 crc = crc32(r1, r3 - (r1 - r0), r3_1, r3_1);
    arg2->word_0 = r5_1;
    return crc == r5_1;
}

}  // namespace d_005ca5d8
GUEST_EXPORT_FRAMED(0x005ca5d8, d_005ca5d8::f_005ca5d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ca62c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca62c {

struct __attribute__((packed)) Local_005ca62c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005ca62c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005ca62c_ea_1, word_4, 0x4);

inline constexpr u32 global_0095bf74_address = 0x0095bf74u;
inline guest::global<u32, 0x0095bf74> global_0095bf74;
inline constexpr guest::Function<0x003463bc, u32(u32, u32, u32, u32)> call_003463bc;

u32 f_005ca62c() {
    gptr<Local_005ca62c_ea_1> ea_1 = gptr<Local_005ca62c_ea_1>(*global_0095bf74);
    return call_003463bc(ea_1->word_0, ea_1->word_4, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ca62c
GUEST_EXPORT(0x005ca62c, d_005ca62c::f_005ca62c);

// f_005ca648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca648 {

struct __attribute__((packed)) Local_005ca648_r2_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005ca648_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_005ca648_r2_1, word_4, 0x4);

inline constexpr u32 global_0095bf74_address = 0x0095bf74u;
inline guest::global<u32, 0x0095bf74> global_0095bf74;

u32 f_005ca648() {
    gptr<Local_005ca648_r2_1> r2_1 = gptr<Local_005ca648_r2_1>(*global_0095bf74);
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
GUEST_EXPORT(0x005ca648, d_005ca648::f_005ca648);

// f_005ca688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca688 {

inline constexpr u32 global_0095bf74_address = 0x0095bf74u;
inline constexpr u32 global_0095bf78_address = 0x0095bf78u;
inline guest::global<u32, 0x0095bf78> global_0095bf78;
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;
inline constexpr guest::Function<0x0070ef54, u32(u32)> call_0070ef54;
inline constexpr guest::Function<0x00757f08, u32(u32)> call_00757f08;

u32 f_005ca688(u32 r0, u32 r1, u32 r2) {
    u32 res_1 = r1 + r2;
    if (u32((0ull + ~u32(0ull + u32(res_1 < r1)) + u32(0x89b00u >= res_1)) >> 0x20)) {  // (from the original)
        u32 r3_1 = *global_0095bf78;
        if (r3_1 != 0) {
            u32 r5_1 = r3_1 + r2;
            copy_bytes_small_sizes_first(r5_1, r0, r1, r3_1);
            u32 r4_1 = *global_0095bf78;
            call_00757f08(r4_1 + 0x80u);  // (from the original)
            call_0070ef54(r4_1 + 0x71900u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r0 = r5_1;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ca688
GUEST_EXPORT_FRAMED(0x005ca688, d_005ca688::f_005ca688, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ca6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca6fc {

inline guest::global<u8, 0x00952628> global_00952628;
inline guest::global<u32, 0x0095262c> global_0095262c;

u32 f_005ca6fc() {
    u32 r1_1 = *global_00952628;
    u32 r0_1 = r1_1 == 0 ? *global_0095262c : 0u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005ca6fc
GUEST_EXPORT(0x005ca6fc, d_005ca6fc::f_005ca6fc);

// f_005ca7a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline guest::global<u32, 0x0095bf74> global_0095bf74;
inline constexpr guest::Function<0x00116cdd, u32(u32, u32)> call_00116cdc;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x00607474, u32(u32)> request_matches_current_source;
inline constexpr guest::Function<0x00607bdc, u32(u32)> request_is_reserved;

void f_005ca7a4(u32 r0, u32 r1) {
    u32 player = get_current_player(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_005ca7a4_r0_2> r0_2 = gptr<Local_005ca7a4_r0_2>(player + 0x5700u);  // (from the original)
    r0_2->byte_a = u8(u32(r0_2->byte_a) & ~2u);
    *gptr<u32>(player + 0x8f38u) = 0;  // (from the original)
    call_00116cdc(0x8f38u, 0u);  // (from the original)
    u32 r0_3 = u32(*gptr<u8>(player + 0x8f7bu)) << 0x19;  // (from the original)
    if (s32(r0_3) >= 0) {
        return;
    }
    request_is_reserved(r0_3);
    request_matches_current_source(r0_3);
    gptr<Local_005ca7a4_r0_4> r0_4 = gptr<Local_005ca7a4_r0_4>(*global_0095bf74 + 0x621cfu);  // (from the original)
    u32 r1_2 = u32(r0_4->byte_1) | 0x20u;  // (from the original)
    r0_4->byte_1 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_005ca7a4
GUEST_EXPORT_FRAMED(0x005ca7a4, d_005ca7a4::f_005ca7a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ca9cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ca9cc {

inline guest::global<u32, 0x0095bf74> global_0095bf74;
inline constexpr guest::Function<0x00119289, u32(u32, u32, u32, u32)> call_00119288;

void f_005ca9cc() {
    call_00119288(*global_0095bf74 + 0x292a4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005ca9cc
GUEST_EXPORT(0x005ca9cc, d_005ca9cc::f_005ca9cc);

// f_005ca9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
inline constexpr u32 global_0095bf74_address = 0x0095bf74u;
inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 global_0095df64_address = 0x0095df64u;
inline constexpr u32 global_00aaef18_address = 0x00aaef18u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x0095bf74> global_0095bf74;
inline guest::global<u32, 0x0095df64> global_0095df64;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0013873c, u32(u32)> call_0013873c;
inline constexpr guest::Function<0x001bac9c, u32(u32, u32)> call_001bac9c;
inline constexpr guest::Function<0x001c1e54, u32(u32, u32)> sead__SafeStringBase_char___SafeStringBase_001c1e54;
inline constexpr guest::Function<0x00241d34, u32(u32)> call_00241d34;
inline constexpr guest::Function<0x00292d08, u32(u32)> call_00292d08;
inline constexpr guest::Function<0x002c2538, u32(u32, u32, u32, u32)> store_byte_constant_pack_0x30_002c2538;
inline constexpr guest::Function<0x002c2710, u32(u32)> call_002c2710;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fc814, u32(u32, u32)> CategorySlots__store;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00300634, u32(u32, u32)> store_mode_bytes;
inline constexpr guest::Function<0x00304530, u32(u32)> shared_load_splits;
inline constexpr guest::Function<0x0056b550, u32(u32)> call_0056b550;
inline constexpr guest::Function<0x00582464, u32(u32)> call_00582464;
inline constexpr guest::Function<0x0058d52c, u32(u32)> call_0058d52c;
inline constexpr guest::Function<0x0058f100, u32(u32, u32, u32, u32)> call_0058f100;
inline constexpr guest::Function<0x00607474, u32(u32, u32, u32)> request_matches_current_source;
inline constexpr guest::Function<0x00607bdc, u32(u32, u32, u32)> request_is_reserved;
inline constexpr guest::Function<0x006a6408, u32(u32)> call_006a6408;

struct __attribute__((packed)) Frame_005ca9e4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005ca9e4, word_0, 0x0);
GUEST_OFFSET(Frame_005ca9e4, word_4, 0x4);
GUEST_OFFSET(Frame_005ca9e4, word_8, 0x8);
GUEST_SIZE(Frame_005ca9e4, 0x1c);

u32 f_005ca9e4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005ca9e4> frame;  // the original's stack frame
    store_byte_constant_pack_0x30_002c2538(*global_0095df64, r1, r2, r3);
    u32 r0_3 = call_002c2710(*global_0095df64);
    call_00292d08(r0_3);
    u32 r0_4 = stage_heap_address;
    u32 r4_1 = *gptr<u32>(r0_4);
    if (r4_1 != 0) {
        u32 r0_5 = shared_load_splits(r0_4);
        r0_4 = sead__SafeStringBase_char___SafeStringBase_001c1e54(r0_5, r4_1);
    }
    u32 r0_6 = call_006a6408(r0_4);
    u32 r0_7 = call_00241d34(r0_6);
    u32 r0_8 = shared_load_splits(r0_7);
    u32 r0_9 = call_0013873c(r0_8);
    call_0056b550(r0_9);
    make_adjusted_words(frame.at(0xc).addr(), *global_0095bf74 + 0x62232u);  // (from the original)
    gptr<Local_005ca9e4_r3_10> r3_10 = gptr<Local_005ca9e4_r3_10>(frame.at(0xc).addr());  // (from the original)
    u32 r1_9 = r3_10->word_4;
    u32 r2_10 = r3_10->word_8;
    frame->word_0 = r3_10->word_0;
    frame->word_4 = r1_9;
    frame->word_8 = r2_10;
    u32 r0_12 = call_0058f100(frame.at(0).addr(), 0u, 0u, r3_10.addr());
    call_00582464(r0_12);
    store_mode_bytes(1u, 1u);
    u32 r4_2 = *current_player_data;
    u32 r0_13 = request_is_reserved(global_00aaef18_address, guest::cpu()->r[1], guest::cpu()->r[2]);
    request_matches_current_source(r0_13, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_15 = CategorySlots__store(*global_0095bf74 + 0x6acceu, r4_2 + 0x8f0au);  // (from the original)
    u32 player = get_current_player(r0_15);
    u32 r0_17 = player + 0x8f0au;  // (from the original)
    copy_item_002fc8e8(r0_17, empty_item_address);
    u32 r0_18 = call_0058d52c(r0_17);
    request_is_reserved(r0_18, guest::cpu()->r[1], guest::cpu()->r[2]);
    request_matches_current_source(r0_18, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r1_17 = *global_0095bf74;
    gptr<Local_005ca9e4_r0_19> r0_19 = gptr<Local_005ca9e4_r0_19>(r1_17 + 0x70ee2u);  // (from the original)
    u32 r2_20 = r0_19->byte_8;
    if (0xau > (r2_20 & 0xf0u) >> 4) {  // (from the original)
        r0_19->byte_8 = u8(r2_20 + 0x10u);  // (from the original)
    }
    gptr<Local_005ca9e4_r0_20> r0_20 = gptr<Local_005ca9e4_r0_20>(u32(*gptr<u8>(r1_17 + 0x6feb4u)));  // (from the original)
    if ((r0_20.addr() & 8u) != 0 && (r0_20.addr() & 0x40u) == 0) {  // (from the original)
        request_is_reserved(r0_20.addr(), r1_17, r2_20);
        request_matches_current_source(r0_20.addr(), r1_17, r2_20);
        r0_20 = gptr<Local_005ca9e4_r0_20>(*global_0095bf74 + 0x6feb4u);  // (from the original)
        r1_17 = u32(r0_20->byte_0) | 0x40u;  // (from the original)
        r0_20->byte_0 = u8(r1_17);
    }
    u32 r0_21 = call_001bac9c(r0_20.addr(), r1_17);
    return r0_21;
}

}  // namespace d_005ca9e4
GUEST_EXPORT_FRAMED(0x005ca9e4, d_005ca9e4::f_005ca9e4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005cabc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
inline constexpr u32 global_0095df64_address = 0x0095df64u;
inline guest::global<u32, 0x0095bf74> global_0095bf74;
inline guest::global<u32, 0x0095df64> global_0095df64;
inline constexpr guest::Function<0x0013873c, u32(u32)> call_0013873c;
inline constexpr guest::Function<0x001bac9c, u32(u32)> call_001bac9c;
inline constexpr guest::Function<0x001c1e54, u32(u32, u32)> sead__SafeStringBase_char___SafeStringBase_001c1e54;
inline constexpr guest::Function<0x00241d34, u32(u32)> call_00241d34;
inline constexpr guest::Function<0x00292d08, u32(u32, u32, u32, u32)> call_00292d08;
inline constexpr guest::Function<0x002c2510, u32(u32)> call_002c2510;
inline constexpr guest::Function<0x002c2544, u32(u32)> call_002c2544;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fc188, u32(u32)> return_constant_0xa84270_;
inline constexpr guest::Function<0x002fc194, u32(u32)> call_002fc194;
inline constexpr guest::Function<0x00304530, u32(u32)> shared_load_splits;
inline constexpr guest::Function<0x0058d52c, u32(u32)> call_0058d52c;
inline constexpr guest::Function<0x0058f100, u32(u32, u32, u32, u32)> call_0058f100;
inline constexpr guest::Function<0x006a6408, u32(u32)> call_006a6408;

struct __attribute__((packed)) Frame_005cabc0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005cabc0, word_0, 0x0);
GUEST_OFFSET(Frame_005cabc0, word_4, 0x4);
GUEST_OFFSET(Frame_005cabc0, word_8, 0x8);
GUEST_SIZE(Frame_005cabc0, 0x18);

void f_005cabc0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005cabc0> frame;  // the original's stack frame
    call_00292d08(r0, r1, r2, r3);
    u32 r0_1 = stage_heap_address;
    u32 r4_1 = *gptr<u32>(r0_1);
    if (r4_1 != 0) {
        u32 r0_2 = shared_load_splits(r0_1);
        r0_1 = sead__SafeStringBase_char___SafeStringBase_001c1e54(r0_2, r4_1);
    }
    u32 r0_3 = call_006a6408(r0_1);
    u32 r0_4 = call_00241d34(r0_3);
    u32 r0_5 = shared_load_splits(r0_4);
    call_0013873c(r0_5);
    make_adjusted_words(frame.at(0xc).addr(), *global_0095bf74 + 0x80u + 0x621b2u);  // (from the original)
    gptr<Local_005cabc0_r3_7> r3_7 = gptr<Local_005cabc0_r3_7>(frame.at(0xc).addr());  // (from the original)
    u32 r1_6 = r3_7->word_4;
    u32 r2_7 = r3_7->word_8;
    frame->word_0 = r3_7->word_0;
    frame->word_4 = r1_6;
    frame->word_8 = r2_7;
    u32 r0_8 = call_0058f100(frame.at(0).addr(), 0u, 0u, r3_7.addr());
    u32 r0_9 = call_00241d34(r0_8);
    u32 r0_10 = call_0058d52c(r0_9);
    u32 r0_11 = return_constant_0xa84270_(r0_10);
    call_002fc194(r0_11);
    call_002c2544(*global_0095df64);
    u32 r0_13 = *global_0095df64;
    call_002c2510(r0_13);
    call_001bac9c(r0_13);
}

}  // namespace d_005cabc0
GUEST_EXPORT_FRAMED(0x005cabc0, d_005cabc0::f_005cabc0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cacfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cacfc {

inline constexpr u32 global_0095df64_address = 0x0095df64u;
inline guest::global<u32, 0x0095df64> global_0095df64;
inline constexpr guest::Function<0x002c24dc, u32(u32, u32, u32, u32)> call_002c24dc;

u32 f_005cacfc() {
    return call_002c24dc(*global_0095df64, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cacfc
GUEST_EXPORT(0x005cacfc, d_005cacfc::f_005cacfc);

// f_005cad1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cad1c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

u32 f_005cad1c() {
    return clear_aligned(guest::cpu()->r[0], 0x89b00u);  // (from the original)
}

}  // namespace d_005cad1c
GUEST_EXPORT(0x005cad1c, d_005cad1c::f_005cad1c);

// f_005cad28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cad28 {

struct __attribute__((packed)) Object_005cad28_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005cad28_0, word_0, 0x0);
GUEST_OFFSET(Object_005cad28_0, word_4, 0x4);
GUEST_OFFSET(Object_005cad28_0, word_8, 0x8);

inline constexpr u32 global_009753c0_address = 0x009753c0u;
inline guest::global<u32, 0x009753c0> global_009753c0;
inline constexpr guest::Function<0x001df42c, u32(u32, u32, u32, u32)> call_001df42c;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x005cb26c, u32(u32, u32)> call_005cb26c;

u32 f_005cad28(gptr<Object_005cad28_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = Xorshift128__next_0055cb58(*global_009753c0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = Xorshift128__next_0055cb58(*global_009753c0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_8 = 0;
    arg0->word_0 = u32(u64(r0_4) * (~0u) >> 0x20) + 1u;  // (from the original)
    arg0->word_4 = r0_2;
    call_005cb26c(arg0.addr() + 0x80u, 0u);  // (from the original)
    frame.release();
    return call_001df42c(arg0.addr() + 0x71900u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005cad28
GUEST_EXPORT(0x005cad28, d_005cad28::f_005cad28);

// f_005caf64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005caf64 {

struct __attribute__((packed)) Object_005caf64_0 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 byte_6;
};
GUEST_OFFSET(Object_005caf64_0, half_4, 0x4);
GUEST_OFFSET(Object_005caf64_0, byte_6, 0x6);


void f_005caf64(gptr<Object_005caf64_0> arg0) {
    arg0->half_4 = 0x9e;  // (from the original)
    arg0->byte_6 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_005caf64
GUEST_EXPORT_FRAMED(0x005caf64, d_005caf64::f_005caf64, 0x4010);  // pushes {r4, lr} first, as the original

// f_005caf80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005caf80 {

struct __attribute__((packed)) Object_005caf80_0 {
    u8 unknown_0[0x62130];  // (not used here)
    u32 word_62130;
    u32 word_62134;
};
GUEST_OFFSET(Object_005caf80_0, word_62130, 0x62130);
GUEST_OFFSET(Object_005caf80_0, word_62134, 0x62134);


u32 f_005caf80(gptr<Object_005caf80_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = arg0->word_62130;
    u32 res_1 = r0_1 + r2;
    u32 cf_1 = res_1 < r0_1;
    u32 r1_1 = u64(arg0->word_62134) + r3 + cf_1;
    if (u32((u64(~0x80000000u) + ~r1_1 + u32(~0u >= res_1)) >> 0x20)) {  // (from the original)
        arg0->word_62130 = res_1;
        arg0->word_62134 = r1_1;
        guest::cpu()->r[1] = r1_1;
        return res_1;
    }
    u32 r0_2 = ~0u;
    u32 r1_2 = ~0x80000000u;  // (from the original)
    arg0->word_62130 = r0_2;
    arg0->word_62134 = r1_2;
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_005caf80
GUEST_EXPORT_FRAMED(0x005caf80, d_005caf80::f_005caf80, 0x30);  // pushes {r4, r5} first, as the original

// f_005cb1dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cb1dc {

inline constexpr guest::Function<0x0010a2cc, u32(u32)> call_0010a2cc;
inline constexpr guest::Function<0x00118a65, u32(u32)> call_00118a64;
inline constexpr guest::Function<0x001b1af8, u32(u32)> pick_random_letters;
inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> sead__FixedSafeString_30___FixedSafeString_001b3f24;
inline constexpr guest::Function<0x002ebd68, u32(u32)> call_002ebd68;
inline constexpr guest::Function<0x0052ab60, u32(u32)> call_0052ab60;
inline constexpr guest::Function<0x005caf64, u32(u32, u32, u32, u32)> call_005caf64;
inline constexpr guest::Function<0x005cdbb8, u32(u32)> call_005cdbb8;
inline constexpr guest::Function<0x006bc5a0, u32(u32)> call_006bc5a0;

u32 f_005cb1dc(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_005caf64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005cdbb8(r0 + 0x4be00u);  // (from the original)
    call_002ebd68(r0 + 0x5d880u);  // (from the original)
    call_0052ab60(r0 + 0x621b2u);  // (from the original)
    pick_random_letters(r0 + 0x621ccu);  // (from the original)
    call_0010a2cc(r0 + 0x621d0u);  // (from the original)
    call_006bc5a0(r0 + 0x6ae38u);  // (from the original)
    call_00118a64(r0 + 0x6fe28u);  // (from the original)
    frame.release();
    return sead__FixedSafeString_30___FixedSafeString_001b3f24(r0 + 0x70e9cu, 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005cb1dc
GUEST_EXPORT(0x005cb1dc, d_005cb1dc::f_005cb1dc);

// f_005cb26c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cb26c {

struct __attribute__((packed)) Object_005cb26c_0 {
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
GUEST_OFFSET(Object_005cb26c_0, word_62130, 0x62130);
GUEST_OFFSET(Object_005cb26c_0, word_62134, 0x62134);
GUEST_OFFSET(Object_005cb26c_0, byte_6fb68, 0x6fb68);
GUEST_OFFSET(Object_005cb26c_0, byte_6fcb2, 0x6fcb2);
GUEST_OFFSET(Object_005cb26c_0, byte_6fe34, 0x6fe34);
GUEST_OFFSET(Object_005cb26c_0, half_70e60, 0x70e60);
GUEST_OFFSET(Object_005cb26c_0, byte_70e6a, 0x70e6a);
GUEST_OFFSET(Object_005cb26c_0, byte_70e6b, 0x70e6b);
GUEST_OFFSET(Object_005cb26c_0, byte_70e6c, 0x70e6c);
GUEST_OFFSET(Object_005cb26c_0, half_717e8, 0x717e8);
GUEST_OFFSET(Object_005cb26c_0, byte_717ea, 0x717ea);
GUEST_OFFSET(Object_005cb26c_0, byte_717eb, 0x717eb);
GUEST_OFFSET(Object_005cb26c_0, word_71800, 0x71800);
GUEST_OFFSET(Object_005cb26c_0, word_71804, 0x71804);
GUEST_OFFSET(Object_005cb26c_0, word_71808, 0x71808);
GUEST_OFFSET(Object_005cb26c_0, word_7180c, 0x7180c);
GUEST_OFFSET(Object_005cb26c_0, word_71810, 0x71810);
GUEST_OFFSET(Object_005cb26c_0, word_71814, 0x71814);

inline constexpr guest::Function<0x001082c9, u32(u32)> clear_bbs_notices;
inline constexpr guest::Function<0x0011253d, u32(u32)> call_0011253c;
inline constexpr guest::Function<0x00118a75, u32(u32)> call_00118a74;
inline constexpr guest::Function<0x001b1b2c, u32(u32)> store_constants_1b1b2c;
inline constexpr guest::Function<0x001b2184, u32(u32)> clear_item_list;
inline constexpr guest::Function<0x0020bb20, u32(u32)> clear_number_pair_veneer;
inline constexpr guest::Function<0x0020d858, u32(u32)> reset_records;
inline constexpr guest::Function<0x0024a528, u32(u32)> call_0024a528;
inline constexpr guest::Function<0x0024e9fc, u32(u32)> call_0024e9fc;
inline constexpr guest::Function<0x0027aa88, u32(u32)> apply_operation_c;
inline constexpr guest::Function<0x002bf468, u32(u32)> call_002bf468;
inline constexpr guest::Function<0x002d453c, u32(u32)> call_002d453c;
inline constexpr guest::Function<0x002eaf8c, u32(u32, u32)> call_002eaf8c;
inline constexpr guest::Function<0x002eba90, u32(u32)> call_002eba90;
inline constexpr guest::Function<0x002ebd9c, u32(u32)> call_002ebd9c;
inline constexpr guest::Function<0x00302084, u32(u32, u32)> call_00302084;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x003059f8, u32(u32)> Pattern__clear;
inline constexpr guest::Function<0x0052abb4, u32(u32)> clear_timed_record;
inline constexpr guest::Function<0x005cd754, u32(u32)> call_005cd754;
inline constexpr guest::Function<0x005cdbf8, u32(u32)> call_005cdbf8;
inline constexpr guest::Function<0x00613620, u32(u32)> call_00613620;
inline constexpr guest::Function<0x006137d8, u32(u32, u32, u32, u32)> call_006137d8;
inline constexpr guest::Function<0x006bc04c, u32(u32)> call_006bc04c;
inline constexpr guest::Function<0x006bc5d8, u32(u32)> call_006bc5d8;
inline constexpr guest::Function<0x006f3d0c, u32(u32)> call_006f3d0c;
inline constexpr guest::Function<0x00779520, u32(u32)> call_00779520;

void f_005cb26c(gptr<Object_005cb26c_0> arg0, u32 r1, u32 r2, u32 r3) {
    call_006137d8(arg0.addr() + 0x53400u, r1, r2, r3);  // (from the original)
    call_005cdbf8(arg0.addr() + 0x4be00u);  // (from the original)
    apply_operation_c(arg0.addr() + 0x20u);  // (from the original)
    call_002ebd9c(arg0.addr() + 0x5d880u);  // (from the original)
    store_constants_1b1b2c(arg0.addr() + 0x621ccu);  // (from the original)
    call_005cd754(arg0.addr() + 0x621d0u);  // (from the original)
    call_006bc5d8(arg0.addr() + 0x6ae38u);  // (from the original)
    call_00118a74(arg0.addr() + 0x6fe28u);  // (from the original)
    call_0011253c(arg0.addr() + 0x29220u);  // (from the original)
    call_002bf468(arg0.addr() + 0x502bcu);  // (from the original)
    call_002d453c(arg0.addr() + 0x52bb0u);  // (from the original)
    clear_timed_record(arg0.addr() + 0x621b2u);  // (from the original)
    call_00613620(arg0.addr() + 0x6e1f4u);  // (from the original)
    clear_item_list(arg0.addr() + 0x62162u);  // (from the original)
    clear_inner(arg0.addr() + 0x6e212u);  // (from the original)
    call_006bc04c(arg0.addr() + 0x6e21au);  // (from the original)
    call_0024e9fc(arg0.addr() + 0x6e224u);  // (from the original)
    clear_number_pair_veneer(arg0.addr() + 0x6e234u);  // (from the original)
    clear_bbs_notices(arg0.addr() + 0x6e238u);  // (from the original)
    call_00779520(arg0.addr() + 0x6fb4cu);  // (from the original)
    call_00302084(arg0.addr() + 0x6fb68u, 1u);  // (from the original)
    arg0->byte_6fb68 = 0;
    call_002eaf8c(arg0.addr() + 0x6fcb2u, 1u);  // (from the original)
    arg0->byte_6fcb2 = 0;
    call_002eba90(arg0.addr() + 0x6fe36u);  // (from the original)
    reset_records(arg0.addr() + 0x6fdf8u);  // (from the original)
    arg0->byte_6fe34 = 0;
    arg0->half_70e60 = 0;
    clear_inner(arg0.addr() + 0x70e62u);  // (from the original)
    arg0->byte_70e6a = 0;
    clear_identity_with_flags(arg0.addr() + 0x70e6eu);  // (from the original)
    arg0->byte_70e6b = 0;
    arg0->byte_70e6c = 0;
    call_006f3d0c(arg0.addr() + 0x6214fu);  // (from the original)
    Pattern__clear(arg0.addr() + 0x70e9cu);  // (from the original)
    arg0->half_717e8 = 0;
    arg0->byte_717ea = 0;
    arg0->byte_717eb = 0;
    call_0024a528(arg0.addr() + 0x717ecu);  // (from the original)
    arg0->word_71800 = 0;
    arg0->word_71804 = 0;
    arg0->word_71808 = 0;
    arg0->word_7180c = 0;
    arg0->word_71810 = 0;
    arg0->word_71814 = 0;
    arg0->word_62130 = 0;
    arg0->word_62134 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_005cb26c
GUEST_EXPORT_FRAMED(0x005cb26c, d_005cb26c::f_005cb26c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cb49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
inline constexpr guest::Function<0x00112585, u32(u32)> call_00112584;
inline constexpr guest::Function<0x001b1a44, u32(u32, u32)> call_001b1a44;
inline constexpr guest::Function<0x001b1b2c, u32(u32, u32)> store_constants_1b1b2c;
inline constexpr guest::Function<0x001b23ac, u32(u32, u32)> call_001b23ac;
inline constexpr guest::Function<0x001b4980, u32(u32, u32)> call_001b4980;
inline constexpr guest::Function<0x001b6618, u32(u32, u32, u32)> init_entry_table_001b6618;
inline constexpr guest::Function<0x001e017c, u32(u32)> call_001e017c;
inline constexpr guest::Function<0x0020bb24, u32(u32)> call_0020bb24;
inline constexpr guest::Function<0x0024a548, u32(u32)> call_0024a548;
inline constexpr guest::Function<0x002bf574, u32(u32)> call_002bf574;
inline constexpr guest::Function<0x002d4594, u32(u32)> call_002d4594;
inline constexpr guest::Function<0x002eaf8c, u32(u32, u32)> call_002eaf8c;
inline constexpr guest::Function<0x002ebce4, u32(u32, u32)> construct_table_object;
inline constexpr guest::Function<0x002ebe0c, u32(u32)> call_002ebe0c;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00302084, u32(u32, u32)> call_00302084;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x005cdd70, u32(u32)> call_005cdd70;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;
inline constexpr guest::Function<0x00613658, u32(u32)> call_00613658;
inline constexpr guest::Function<0x00613764, u32(u32)> call_00613764;
inline constexpr guest::Function<0x006bc5d8, u32(u32)> call_006bc5d8;
inline constexpr guest::Function<0x006f3d0c, u32(u32, u32)> call_006f3d0c;

u32 f_005cb49c(u32 r0) {
    u32 r0_2 = for_each_element(r0 + 0x20u, 0x6be060u, 0xa480u, 4u);  // (from the original)
    u32 r0_5 = call_00112584((r0_2 + 0x20000u) + 0x9200u);  // (from the original)
    u32 r0_8 = call_005cdd70((r0_5 + 0x22000u) + 0xbe0u);  // (from the original)
    u32 r0_11 = call_002bf574((r0_8 + 0x4400u) + 0xbcu);  // (from the original)
    u32 r0_13 = (r0_11 + 0x2800u) + 0xf4u;  // (from the original)
    call_002d4594(r0_13);
    u32 r0_15 = call_00613764(r0_13 + 0x850u);  // (from the original)
    u32 r0_18 = call_002ebe0c((r0_15 + 0x8000u) + 0x2480u);  // (from the original)
    gptr<Local_005cb49c_r4_1> r4_1 = gptr<Local_005cb49c_r4_1>(((r0_18 - 0x5c000u) - 0x1880u) + 0x6214fu);  // (from the original)
    r4_1->word_0 = 0;
    r4_1->word_4 = 0;
    r4_1->word_8 = 0;
    r4_1->word_c = 0;
    r4_1->half_10 = 0;
    call_006f3d0c(r4_1.addr(), 0x6214fu);  // (from the original)
    u32 r0_23 = call_001b23ac((r4_1.addr() + 0xfff9deb1u) + 0x62162u, 0x62162u);  // (from the original)
    u32 r4_2 = (r0_23 + 0xfff9de9eu) + 0x621b2u;  // (from the original)
    game_time_set(r4_2, 0x621b2u, ~0u, ~0x80000000u);  // (from the original)
    u32 r0_25 = r4_2 + 8u;
    construct_empty_item(r0_25, guest::cpu()->r[1]);
    u32 r0_29 = (((r0_25 - 8u) + 0xfff9de4eu) + 0x62000u) + 0x1ccu;  // (from the original)
    store_constants_1b1b2c(r0_29, 0xfff9de4eu);  // (from the original)
    u32 r0_30 = r0_29 + 4u;
    game_time_set(r0_30, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    game_time_set(r0_30 + 8u, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    EncryptedInt__set(r0_30 + 0x18u, 0u);  // (from the original)
    u32 r0_34 = for_each_element(r0_30 + 0x20u, 0x2fc20cu, 4u, 0x18u);  // (from the original)
    u32 r0_36 = for_each_element(r0_34 + 0x7cu, 0x2fc20cu, 4u, 0xdu);  // (from the original)
    EncryptedInt__set(r0_36 + 0x34u, 0u);  // (from the original)
    u32 r0_39 = call_001e017c(r0_36 + 0x4cu);  // (from the original)
    u32 r0_42 = for_each_element((r0_39 + 0x4000u) + 0x380u, 0x2fc20cu, 4u, 7u);  // (from the original)
    EncryptedInt__set(r0_42 + 0x24u, 0u);  // (from the original)
    u32 r4_3 = r0_42 + 0x2cu;  // (from the original)
    EncryptedInt__set(r4_3 + 8u, 0u);
    u32 r0_46 = for_each_element(r4_3 + 0x12u, 0x2fc20cu, 4u, 0xbu);  // (from the original)
    u32 r0_48 = for_each_element(r0_46 + 0x3au, 0x2fc20cu, 4u, 4u);  // (from the original)
    u32 r0_50 = for_each_element(r0_48 + 0x14u, 0x1b4b7cu, 0x2eu, 4u);  // (from the original)
    u32 r0_52 = for_each_element(r0_50 + 0xb8u, 0x613dc0u, 8u, 4u);  // (from the original)
    EncryptedInt__set(r0_52 + 0x28u, 0u);  // (from the original)
    u32 r0_55 = for_each_element((r0_52 + 0x20u) + 0x12u, 0x2fc20cu, 4u, 6u);  // (from the original)
    u32 r0_57 = for_each_element(r0_55 + 0x1eu, 0x2fc20cu, 4u, 4u);  // (from the original)
    u32 r0_59 = for_each_element(r0_57 + 0x10u, 0x2fc20cu, 4u, 4u);  // (from the original)
    u32 r0_61 = for_each_element(r0_59 + 0x14u, 0x313414u, 8u, 4u);  // (from the original)
    u32 r0_63 = for_each_element(r0_61 + 0x30u, 0x2fc20cu, 4u, 5u);  // (from the original)
    u32 r0_65 = for_each_element(r0_63 + 0x14u, 0x2fc20cu, 4u, 8u);  // (from the original)
    u32 r0_67 = for_each_element(r0_65 + 0x28u, 0x613dc0u, 8u, 8u);  // (from the original)
    u32 r0_69 = for_each_element(r0_67 + 0x40u, 0x1b4980u, 0x870u, 8u);  // (from the original)
    u32 r0_72 = for_each_element((r0_69 + 0x4000u) + 0x380u, 0x613dc0u, 8u, 4u);  // (from the original)
    u32 r0_74 = for_each_element(r0_72 + 0x22u, 0x2fc20cu, 4u, 3u);  // (from the original)
    u32 r0_76 = for_each_element(r0_74 + 0x10u, 0x2fc20cu, 4u, 8u);  // (from the original)
    u32 r0_78 = for_each_element(r0_76 + 0x2au, 0x2fc20cu, 4u, 0x12u);  // (from the original)
    u32 r0_80 = for_each_element(r0_78 + 0x5au, 0x1df4c4u, 0x18u, 2u);  // (from the original)
    u32 r0_81 = r0_80 + 0x40u;  // (from the original)
    construct_empty_item(r0_81, guest::cpu()->r[1]);
    u32 r0_82 = r0_81 + 4u;
    construct_empty_item(r0_82, guest::cpu()->r[1]);
    u32 r0_83 = r0_82 + 4u;
    construct_empty_item(r0_83, guest::cpu()->r[1]);
    u32 r0_84 = r0_83 + 4u;
    construct_empty_item(r0_84, guest::cpu()->r[1]);
    u32 r0_86 = for_each_element(r0_84 + 0x1au, 0x2fc20cu, 4u, 4u);  // (from the original)
    u32 r4_5 = r0_86 + 0x10u;  // (from the original)
    EncryptedInt__set(r4_5, 0u);
    u32 r0_88 = for_each_element(r4_5 + 8u, 0x613dc0u, 8u, 0xeu);  // (from the original)
    u32 r0_89 = r0_88 + 0x78u;  // (from the original)
    construct_empty_item(r0_89, guest::cpu()->r[1]);
    u32 r0_91 = for_each_element(r0_89 + 4u, 0x2fc20cu, 4u, 2u);  // (from the original)
    u32 r0_93 = for_each_element(r0_91 + 8u, 0x2fc20cu, 4u, 2u);  // (from the original)
    gptr<Local_005cb49c_ea_1> ea_1 = gptr<Local_005cb49c_ea_1>(r0_93 + 0x18u);  // (from the original)
    ea_1->half_0 = 0;
    ea_1->byte_2 = 0;
    ea_1->byte_3 = 0;
    gptr<Local_005cb49c_r0_95> r0_95 = gptr<Local_005cb49c_r0_95>((r0_93 - 0xc04u) + 0xc20u);  // (from the original)
    r0_95->half_0 = 0;
    r0_95->byte_2 = 0;
    r0_95->byte_3 = 0;
    u32 r0_99 = for_each_element(((r0_93 + 0xfff953fcu) - 0x1d0u) - 0xfff951c8u, 0x301e94u, 4u, 0x43u);  // (from the original)
    u32 r0_101 = for_each_element(r0_99 + 0x10cu, 0x301e94u, 4u, 0x48u);  // (from the original)
    u32 r0_103 = for_each_element(r0_101 + 0x120u, 0x301e94u, 4u, 0x1eu);  // (from the original)
    u32 r0_105 = for_each_element(r0_103 + 0x78u, 0x301e94u, 4u, 0x48u);  // (from the original)
    u32 r0_107 = for_each_element(r0_105 + 0x120u, 0x301e94u, 4u, 0x19u);  // (from the original)
    u32 r0_109 = for_each_element(r0_107 + 0x64u, 0x301e94u, 4u, 8u);  // (from the original)
    u32 r0_111 = for_each_element(r0_109 + 0x134u, 0x1b6028u, 0xb98u, 4u);  // (from the original)
    u32 r4_7 = (r0_111 - 0x400u) - 0x15cu;  // (from the original)
    call_006bc5d8(r4_7);
    u32 r0_114 = ((r4_7 + 0xfff951c8u) + 0x6e000u) + 0x1f4u;  // (from the original)
    call_00613658(r0_114);
    u32 r4_8 = ((r0_114 - 0x6e000u) - 0x1f4u) + 0x6e212u;  // (from the original)
    game_time_set(r4_8, 0x6e212u, ~0u, ~0x80000000u);  // (from the original)
    u32 r0_121 = ((((r4_8 + 0xfff91deeu) + 0x6e21au) + 0xfff91de6u) + 0x6e000u) + 0x224u;  // (from the original)
    call_001b1a44(r0_121, 0xfff91de6u);  // (from the original)
    u32 r0_122 = r0_121 + 0x10u;  // (from the original)
    call_0020bb24(r0_122);
    u32 r0_124 = construct_bbs_notices(r0_122 + 4u);
    u32 r0_127 = ((r0_124 - 0x6e000u) - 0x238u) + 0x6fb4cu;  // (from the original)
    game_time_set(r0_127, 0x6fb4cu, ~0u, ~0x80000000u);  // (from the original)
    u32 r0_130 = ((r0_127 + 0xfff904b4u) + 0x6fb68u) + 2u;  // (from the original)
    construct_empty_item(r0_130, 0x6fb68u);  // (from the original)
    u32 r4_9 = r0_130 - 2u;
    game_time_set(r0_130 + 4u, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    game_time_set(r4_9 + 0xeu, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    game_time_set(r4_9 + 0x16u, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    u32 r0_135 = for_each_element(r4_9 + 0x1eu, 0x1b4b7cu, 0x2eu, 3u);  // (from the original)
    u32 r0_137 = for_each_element(r0_135 + 0x120u, 0x2fc20cu, 4u, 3u);  // (from the original)
    u32 r4_11 = (r0_137 - 0x100u) - 0x3eu;  // (from the original)
    call_00302084(r4_11, 1u);
    *gptr<u8>(r4_11) = 0;
    u32 r4_12 = ((r4_11 + 0xfff90498u) + 0x6fcb2u) + 1u;  // (from the original)
    game_time_set(r4_12, 0x6fcb2u, ~0u, ~0x80000000u);  // (from the original)
    u32 r4_13 = r4_12 + 8u;
    game_time_set(r4_13, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    u32 r4_14 = r4_13 - 9u;
    game_time_set(r4_14 + 0x11u, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    u32 r0_142 = for_each_element(r4_14 + 0x1au, 0x1b4b7cu, 0x2eu, 3u);  // (from the original)
    u32 r0_144 = for_each_element(r0_142 + 0x120u, 0x2fc20cu, 4u, 3u);  // (from the original)
    u32 r4_16 = (r0_144 - 0x100u) - 0x3au;  // (from the original)
    call_002eaf8c(r4_16, 1u);
    *gptr<u8>(r4_16) = 0;
    u32 r0_147 = for_each_element((r4_16 + 0xfff9034eu) - 0xfff90208u, 0x6f533cu, 0xcu, 4u);  // (from the original)
    u32 r4_17 = (r0_147 + 0xfff90208u) - 0xfff901d8u;  // (from the original)
    game_time_set(r4_17, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    u32 r0_151 = construct_table_object((r4_17 + 0xfff901d8u) + 0x6fe36u, 0x6fe36u);  // (from the original)
    u32 r1_28 = r0_151 + 0xfff901cau;  // (from the original)
    *gptr<u16>((r1_28 + 0x70000u) + 0xe60u) = 0;  // (from the original)
    u32 r4_18 = r1_28 + 0x70e62u;  // (from the original)
    game_time_set(r4_18, r1_28, ~0u, ~0x80000000u);  // (from the original)
    u32 r0_154 = r4_18 + 0xcu;  // (from the original)
    gptr<Local_005cb49c_r4_19> r4_19 = gptr<Local_005cb49c_r4_19>(r0_154 - 0xcu);  // (from the original)
    *gptr<u8>(r0_154 - 4u) = 0;
    clear_identity_with_flags(r0_154);
    r4_19->byte_9 = 0;
    u32 r0_156 = (r4_19.addr() + 0xfff8f19eu) + 0x70e9cu;  // (from the original)
    r4_19->byte_a = 0;
    call_001b4980(r0_156, 0x70e9cu);  // (from the original)
    u32 r0_159 = init_entry_table_001b6618((r0_156 + 0xfff8f164u) + 0x7170cu, 0x7170cu, 0xfff8f164u);  // (from the original)
    u32 r4_20 = r0_159 + 0xfff8e8f4u;  // (from the original)
    game_time_set((r4_20 + 0x71000u) + 0x7e0u, 0xfff8e8f4u, ~0u, ~0x80000000u);  // (from the original)
    gptr<Local_005cb49c_r0_162> r0_162 = gptr<Local_005cb49c_r0_162>(r4_20 + 0x717e8u);  // (from the original)
    r0_162->half_0 = 0;
    r0_162->byte_2 = 0;
    r0_162->byte_3 = 0;
    u32 r0_164 = (r0_162.addr() + 0xfff8e818u) + 0x717ecu;  // (from the original)
    call_0024a548(r0_164);
    guest::cpu()->r[1] = 0xfff8e814u;  // (from the original)
    return r0_164 + 0xfff8e814u;  // (from the original)
}

}  // namespace d_005cb49c
GUEST_EXPORT_FRAMED(0x005cb49c, d_005cb49c::f_005cb49c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cbc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbc3c {

struct __attribute__((packed)) Object_005cbc3c_0 {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Object_005cbc3c_0, byte_270, 0x270);


void f_005cbc3c(gptr<Object_005cbc3c_0> arg0, u32 r1) {
    arg0->byte_270 = u8(u32(arg0->byte_270) & ~7u | r1 & 7u);
}

}  // namespace d_005cbc3c
GUEST_EXPORT(0x005cbc3c, d_005cbc3c::f_005cbc3c);

// f_005cbc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbc54 {

struct __attribute__((packed)) Object_005cbc54_0 {
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
GUEST_OFFSET(Object_005cbc54_0, byte_30, 0x30);
GUEST_OFFSET(Object_005cbc54_0, byte_64, 0x64);
GUEST_OFFSET(Object_005cbc54_0, byte_26e, 0x26e);
GUEST_OFFSET(Object_005cbc54_0, byte_26f, 0x26f);
GUEST_OFFSET(Object_005cbc54_0, byte_270, 0x270);
GUEST_OFFSET(Object_005cbc54_0, byte_271, 0x271);

struct __attribute__((packed)) Local_005cbc54_r1_8 {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(Local_005cbc54_r1_8, byte_c6, 0xc6);
GUEST_OFFSET(Local_005cbc54_r1_8, byte_c7, 0xc7);

inline constexpr guest::Function<0x001b23f0, u32(u32)> script__WordFix_9u___WordFix_001b23f0;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> Letter__clear;
inline constexpr guest::Function<0x002ffad8, u32(u32, u32)> item_offset_in_category;

void f_005cbc54(gptr<Object_005cbc54_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_6 = 0;
    Letter__clear(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    u32 category = Item__category(r1);
    u32 r1_2 = guest::cpu()->r[1];
    if (category == 0x2au) {  // (from the original)
        r1_2 = u32(arg0->byte_270) | 0x20u;  // (from the original)
        arg0->byte_270 = u8(r1_2);
    }
    u32 offset = item_offset_in_category(r1, r1_2);
    u32 r1_3 = guest::cpu()->r[1];
    if (offset <= 0xffu) {  // (from the original)
        arg0->byte_26f = u8(offset);
    }
    if ((offset >= 0xffu) && offset != 0xffu) {  // (from the original)
        r1_3 = 0u;
        arg0->byte_26f = u8(r1_3);
    }
    arg0->byte_271 = 0;
    u32 player = get_current_player(0u, r1_3);
    if (player != 0) {
        arg0->byte_64 = 1;
        copy_46_bytes(arg0.addr() + 0x34u, player + 0x55a6u, 1u);  // (from the original)
        arg0->byte_270 = u8(u32(arg0->byte_270) & ~7u | 3u);
        u32 r4_1 = player + 0x8908u;  // (from the original)
        if (*gptr<u8>(r4_1 + 0xc7u) >= 0x20u) {  // (from the original)
            script__WordFix_9u___WordFix_001b23f0(r4_1);
        }
        copy_bytes_at_any_alignment(arg0.addr() + 0x22cu, r4_1 + 0x84u, 0x42u, guest::cpu()->r[3]);  // (from the original)
        gptr<Local_005cbc54_r1_8> r1_8 = gptr<Local_005cbc54_r1_8>(r4_1);
        if (arg0->byte_30 == 6u) {
            r0_6 = r1_8->byte_c7;
            r1_8 = gptr<Local_005cbc54_r1_8>(r4_1 + 0x42u);  // (from the original)
        } else {
            r0_6 = r1_8->byte_c6;
        }
        arg0->byte_26e = u8(r0_6);
        frame.release();
        copy_bytes_at_any_alignment(arg0.addr() + 0x68u, r1_8.addr(), 0x42u, guest::cpu()->r[3]);
        return;  // (from the original)
    }
}

}  // namespace d_005cbc54
GUEST_EXPORT(0x005cbc54, d_005cbc54::f_005cbc54);

// f_005cbd34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbd34 {

struct __attribute__((packed)) Object_005cbd34_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x23d];  // (not used here)
    u8 byte_26e;
};
GUEST_OFFSET(Object_005cbd34_0, byte_30, 0x30);
GUEST_OFFSET(Object_005cbd34_0, byte_26e, 0x26e);

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

void f_005cbd34(gptr<Object_005cbd34_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_5 = 0;
    u32 save_data = get_save_data(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = villager_record_at(save_data + 0x292a4u, r1);  // (from the original)
    u32 r5_1 = r0_3;
    if (r0_3 != 0) {
        r0_3 = is_villager_record(r0_3);
        if (r0_3 != 0) {
            arg0->byte_30 = 2;
            r0_3 = copy_48_bytes(arg0.addr(), r5_1, 2u);
        }
    }
    u32 player = get_current_player(r0_3);
    if (player != 0) {
        gptr<Local_005cbd34_r1_2> r1_2 = gptr<Local_005cbd34_r1_2>(player + 0x8908u);  // (from the original)
        if (arg0->byte_30 == 6u) {
            r0_5 = r1_2->byte_c7;
            r1_2 = gptr<Local_005cbd34_r1_2>(r1_2.addr() + 0x42u);  // (from the original)
        } else {
            r0_5 = r1_2->byte_c6;
        }
        arg0->byte_26e = u8(r0_5);
        frame.release();
        copy_bytes_at_any_alignment(arg0.addr() + 0x68u, r1_2.addr(), 0x42u);
        return;  // (from the original)
    }
}

}  // namespace d_005cbd34
GUEST_EXPORT(0x005cbd34, d_005cbd34::f_005cbd34);

// f_005cbdc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbdc4 {

struct __attribute__((packed)) Object_005cbdc4_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x23d];  // (not used here)
    u8 byte_26e;
};
GUEST_OFFSET(Object_005cbdc4_0, byte_30, 0x30);
GUEST_OFFSET(Object_005cbdc4_0, byte_26e, 0x26e);

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;

void f_005cbdc4(gptr<Object_005cbdc4_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 player = get_current_player(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    if (player != 0) {
        arg0->byte_30 = 1;
        copy_46_bytes(arg0.addr(), player + 0x55a6u, 1u);  // (from the original)
        arg0->byte_30 = 6;
        arg0->byte_26e = *gptr<u8>(player + 0x89cfu);  // (from the original)
        frame.release();
        copy_bytes_at_any_alignment(arg0.addr() + 0x68u, player + 0x894au, 0x42u);
        return;  // (from the original)
    }
}

}  // namespace d_005cbdc4
GUEST_EXPORT(0x005cbdc4, d_005cbdc4::f_005cbdc4);

// f_005cbe34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbe34 {

struct __attribute__((packed)) Object_005cbe34_0 {
    u8 unknown_0[0x64];  // (not used here)
    u8 byte_64;
};
GUEST_OFFSET(Object_005cbe34_0, byte_64, 0x64);

inline constexpr guest::Function<0x00613de4, u32(u32, u32)> copy_48_bytes;

void f_005cbe34(gptr<Object_005cbe34_0> arg0) {
    arg0->byte_64 = 2;
    copy_48_bytes(arg0.addr() + 0x34u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_005cbe34
GUEST_EXPORT(0x005cbe34, d_005cbe34::f_005cbe34);

// f_005cbe84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbe84 {

struct __attribute__((packed)) Object_005cbe84_0 {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Object_005cbe84_0, byte_270, 0x270);


void f_005cbe84(gptr<Object_005cbe84_0> arg0) {
    u32 r1_1 = arg0->byte_270;
    if ((r1_1 & 7u) != 1u) {
        return;
    }
    arg0->byte_270 = u8(r1_1 & ~7u | 2u);
}

}  // namespace d_005cbe84
GUEST_EXPORT(0x005cbe84, d_005cbe84::f_005cbe84);

// f_005cbee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbee4 {

struct __attribute__((packed)) Object_005cbee4_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x23d];  // (not used here)
    u8 byte_26e;
};
GUEST_OFFSET(Object_005cbee4_0, byte_30, 0x30);
GUEST_OFFSET(Object_005cbee4_0, byte_26e, 0x26e);

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

u32 f_005cbee4(gptr<Object_005cbee4_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r0_2 = player_record_for_slot(r1 & 0xffu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = r0_2 + 0x55a6u;  // (from the original)
        r0_2 = PersonalId__is_set(r0_3);
        if (r0_2 != 0) {
            arg0->byte_30 = 1;
            r0_2 = copy_46_bytes(arg0.addr(), r0_3, 1u);
        }
    }
    if (r2 == 0) {
        r0_2 = get_current_player(r0_2);
        if (r0_2 != 0) {
            gptr<Local_005cbee4_r1_2> r1_2 = gptr<Local_005cbee4_r1_2>(r0_2 + 0x8908u);  // (from the original)
            if (arg0->byte_30 == 6u) {
                r0_4 = r1_2->byte_c7;
                r1_2 = gptr<Local_005cbee4_r1_2>(r1_2.addr() + 0x42u);  // (from the original)
            } else {
                r0_4 = r1_2->byte_c6;
            }
            arg0->byte_26e = u8(r0_4);
            frame.release();
            return copy_bytes_at_any_alignment(arg0.addr() + 0x68u, r1_2.addr(), 0x42u);  // (from the original)
        }
    }
    return r0_2;
}

}  // namespace d_005cbee4
GUEST_EXPORT(0x005cbee4, d_005cbee4::f_005cbee4);

// f_005cbf78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cbf78 {

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056d828, u32(u32, u32, u32, u32)> call_0056d828;
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32)> call_target_with_two_0x8c_;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) Frame_005cbf78 {
    u32 word_0;
    u8 unknown_4[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005cbf78, word_0, 0x0);
GUEST_SIZE(Frame_005cbf78, 0x2c);

void script__WordFix_9u___WordFix_005cbf78(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005cbf78> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r7 = r1;
    u32 r6 = r2;
    u32 r0_1 = frame.at(0).addr();
    script__construct_word_ptr(r0_1, frame.at(0x18).addr(), 9u, r3);  // (from the original)
    u32 r5 = vtable_script__WordFix_9u_;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    u32 r4 = r0_2 - 0xcu;  // (from the original)
    clear_aligned(r0_2 + 0xcu, 0x12u);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    u32 r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = *gptr<u16>(r1);  // (from the original)
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
    call_0056d828(r4, r6, r2, r3_4);
    call_target_with_two_0x8c_(r7, frame.at(0).addr(), 0u);
    frame->word_0 = r5;
}

}  // namespace d_005cbf78
GUEST_EXPORT_FRAMED(0x005cbf78, d_005cbf78::script__WordFix_9u___WordFix_005cbf78, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005cc454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc454 {

struct __attribute__((packed)) Object_005cc454_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Object_005cc454_0, byte_30, 0x30);


void f_005cc454(gptr<Object_005cc454_0> arg0) {
    u32 r1_1 = arg0->byte_30;
    if (r1_1 == 1u) {
        arg0->byte_30 = 3;
        guest::cpu()->r[1] = 3u;
        return;
    }
    if (r1_1 == 2u) {
        arg0->byte_30 = 4;
        guest::cpu()->r[1] = 4u;
        return;
    }
    if (r1_1 == 3u) {
        arg0->byte_30 = 3;
        guest::cpu()->r[1] = 3u;
        return;
    }
    if (r1_1 != 4u) {
        arg0->byte_30 = 5;
        guest::cpu()->r[1] = 5u;
        return;
    }
    arg0->byte_30 = 4;
    guest::cpu()->r[1] = 4u;
}

}  // namespace d_005cc454
GUEST_EXPORT(0x005cc454, d_005cc454::f_005cc454);

// f_005cc524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc524 {

struct __attribute__((packed)) Object_005cc524_0 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Object_005cc524_0, byte_26e, 0x26e);
GUEST_OFFSET(Object_005cc524_0, byte_26f, 0x26f);
GUEST_OFFSET(Object_005cc524_0, byte_270, 0x270);
GUEST_OFFSET(Object_005cc524_0, byte_271, 0x271);
GUEST_OFFSET(Object_005cc524_0, byte_272, 0x272);

struct __attribute__((packed)) Object_005cc524_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Object_005cc524_1, byte_26e, 0x26e);
GUEST_OFFSET(Object_005cc524_1, byte_26f, 0x26f);
GUEST_OFFSET(Object_005cc524_1, byte_270, 0x270);
GUEST_OFFSET(Object_005cc524_1, byte_271, 0x271);
GUEST_OFFSET(Object_005cc524_1, byte_272, 0x272);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> copy_8_bytes_returning_destination;

void f_005cc524(gptr<Object_005cc524_0> arg0, gptr<Object_005cc524_1> arg1) {
    copy_aligned_bytes(arg0.addr(), arg1.addr(), 0x31u, guest::cpu()->r[3]);  // (from the original)
    copy_aligned_bytes(arg0.addr() + 0x34u, arg1.addr() + 0x34u, 0x31u, guest::cpu()->r[3]);  // (from the original)
    copy_aligned_bytes(arg0.addr() + 0x68u, arg1.addr() + 0x68u, 0x42u, guest::cpu()->r[3]);  // (from the original)
    copy_bytes_at_any_alignment(arg0.addr() + 0xaau, arg1.addr() + 0xaau, 0x182u);  // (from the original)
    copy_aligned_bytes(arg0.addr() + 0x22cu, arg1.addr() + 0x22cu, 0x42u, guest::cpu()->r[3]);  // (from the original)
    arg0->byte_26e = arg1->byte_26e;
    arg0->byte_26f = arg1->byte_26f;
    arg0->byte_270 = arg1->byte_270;
    arg0->byte_271 = arg1->byte_271;
    arg0->byte_272 = arg1->byte_272;
    copy_item_002fc8e8(arg0.addr() + 0x274u, arg1.addr() + 0x274u);  // (from the original)
    copy_8_bytes_returning_destination(arg0.addr() + 0x278u, arg1.addr() + 0x278u);  // (from the original)
}

}  // namespace d_005cc524
GUEST_EXPORT_FRAMED(0x005cc524, d_005cc524::f_005cc524, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cc82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc82c {

struct __attribute__((packed)) Object_005cc82c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005cc82c_0, word_4, 0x4);

inline constexpr guest::Function<0x0027d310, u32(u32, u32, u32, u32)> call_0027d310;

u32 f_005cc82c(gptr<Object_005cc82c_0> arg0) {
    call_0027d310(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = ~0u;
    arg0->word_4 = r0_1;
    return r0_1;
}

}  // namespace d_005cc82c
GUEST_EXPORT_FRAMED(0x005cc82c, d_005cc82c::f_005cc82c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cc844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cc844 {

struct __attribute__((packed)) Local_005cc844_r4_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_005cc844_r4_1, byte_0, 0x0);

inline constexpr u32 global_0094ddc4_address = 0x0094ddc4u;
inline constexpr u32 global_0095c350_address = 0x0095c350u;
inline guest::global<u32, 0x0088f2f0> global_0088f2f0;
inline guest::global<u32, 0x0088f2f4> global_0088f2f4;
inline guest::global<u32, 0x0088f2f8> global_0088f2f8;
inline guest::global<u32, 0x0088f2fc> global_0088f2fc;
inline guest::global<u32, 0x0088f300> global_0088f300;
inline guest::global<u8, 0x0094ddc4> global_0094ddc4;
inline guest::global<u8, 0x0094ddc5> global_0094ddc5;
inline guest::global<u8, 0x0094ddc6> global_0094ddc6;
inline constexpr guest::Function<0x0010f16d, u32(u32)> call_0010f16c;
inline constexpr guest::Function<0x00116cf5, u32(u32)> call_00116cf4;
inline constexpr guest::Function<0x001e02f0, u32(u32)> call_001e02f0;
inline constexpr guest::Function<0x0020d8a4, u32(u32)> call_0020d8a4;
inline constexpr guest::Function<0x002267e4, u32(u32)> call_002267e4;
inline constexpr guest::Function<0x00241d34, u32(u32)> call_00241d34;
inline constexpr guest::Function<0x0027c2c8, u32(u32, u32)> call_0027c2c8;
inline constexpr guest::Function<0x0027d310, u32(u32, u32, u32, u32)> call_0027d310;
inline constexpr guest::Function<0x00284f90, u32(u32)> set_default_remembered_numbers;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x00300634, u32(u32, u32)> store_mode_bytes;
inline constexpr guest::Function<0x0030444c, u32(u32)> call_0030444c;
inline constexpr guest::Function<0x0030ca59, u32(u32, u32, u32, u32)> call_0030ca58;
inline constexpr guest::Function<0x0051cd48, u32(u32)> call_0051cd48;
inline constexpr guest::Function<0x00582464, u32(u32)> call_00582464;
inline constexpr guest::Function<0x0058d52c, u32(u32)> call_0058d52c;
inline constexpr guest::Function<0x0058ecec, u32(u32)> set_byte_9524d8_to_1;
inline constexpr guest::Function<0x005bfbd4, u32(u32)> call_005bfbd4;
inline constexpr guest::Function<0x005cb1dc, u32(u32)> call_005cb1dc;
inline constexpr guest::Function<0x005cd05c, u32(u32)> call_005cd05c;
inline constexpr guest::Function<0x005d05b0, u32(u32)> call_005d05b0;
inline constexpr guest::Function<0x005d46dc, u32(u32, u32)> value_for_mode;
inline constexpr guest::Function<0x005d4788, u32(u32, u32, u32)> speed_for_index;
inline constexpr guest::Function<0x006a6408, u32(u32)> call_006a6408;
inline constexpr guest::Function<0x006bbeb8, u32(u32, u32, u32)> script__WordPtrSv__WordPtrSv_006bbeb8;

struct __attribute__((packed)) Frame_005cc844 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005cc844, word_0, 0x0);
GUEST_OFFSET(Frame_005cc844, word_4, 0x4);
GUEST_OFFSET(Frame_005cc844, word_8, 0x8);
GUEST_OFFSET(Frame_005cc844, word_c, 0xc);
GUEST_OFFSET(Frame_005cc844, word_10, 0x10);
GUEST_SIZE(Frame_005cc844, 0x20);

u32 f_005cc844(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005cc844> frame;  // the original's stack frame
    u32 r0_1 = call_0027d310(r0, r1, r2, r3);
    u32 data_base = get_data_base(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = call_0027c2c8(data_base + 0x53400u, 0u);  // (from the original)
    u32 r0_5 = call_006a6408(r0_4);
    u32 r0_6 = call_00241d34(r0_5);
    call_005bfbd4(r0_6);
    u32 r0_7 = call_0030444c(0xa82000u);  // (from the original)
    u32 data_base_2 = get_data_base(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_005cc844_r4_1> r4_1 = gptr<Local_005cc844_r4_1>(data_base_2 + 0x6214eu);  // (from the original)
    u32 r0_9 = value_for_mode(data_base_2, 0x6214eu);  // (from the original)
    u32 r2_9 = r0_9 & 0xfu;  // (from the original)
    u32 r1_7 = u32(r4_1->byte_0) & ~0xfu | r2_9;  // (from the original)
    r4_1->byte_0 = u8(r1_7);
    u32 r0_10 = speed_for_index(r0_9, r1_7, r2_9);
    r4_1->byte_0 = u8(0xf0u & r0_10 << 4 | u32(r4_1->byte_0) & ~0xf0u);  // (from the original)
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
    u32 r0_14 = value_for_mode(data_base_3, guest::cpu()->r[1]);
    u32 data_base_4 = get_data_base(r0_14, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_17 = script__WordPtrSv__WordPtrSv_006bbeb8(data_base_4 + 0x62138u, frame.at(0).addr(), r0_14);  // (from the original)
    u32 data_base_5 = get_data_base(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = call_0020d8a4(data_base_5 + 0x62120u);  // (from the original)
    u32 data_base_6 = get_data_base(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_22 = call_005cb1dc(data_base_6);
    u32 r0_23 = data_block_71900(r0_22);
    u32 r0_24 = call_001e02f0(r0_23);
    u32 r0_25 = call_0051cd48(r0_24);
    u32 r0_26 = call_005d05b0(r0_25);
    u32 r0_27 = set_default_remembered_numbers(r0_26);
    u32 r0_28 = call_0058d52c(r0_27);
    u32 r0_29 = call_002267e4(r0_28);
    call_00582464(r0_29);
    store_mode_bytes(1u, 1u);
    *global_0094ddc4 = 4;
    *global_0094ddc5 = 0;
    *global_0094ddc6 = 0;
    u32 data_base_7 = get_data_base(global_0094ddc4_address, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 records = slot_records_of(data_base_7);
    u32 r0_33 = call_0010f16c(records + 4u);
    u32 r0_34 = set_byte_9524d8_to_1(r0_33);
    call_00116cf4(r0_34);
    u32 r0_35 = call_005cd05c(global_0095c350_address);
    u32 data_base_8 = get_data_base(r0_35, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 records_2 = slot_records_of(data_base_8);
    frame.release();
    return call_0030ca58(records_2 + 4u, 0u, 0u, guest::cpu()->r[3]);
}

}  // namespace d_005cc844
GUEST_EXPORT(0x005cc844, d_005cc844::f_005cc844);

// f_005ccfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ccfc4 {

inline constexpr u32 vtable_SaveProcess = 0x008ebc9cu;
inline constexpr guest::Function<0x001d3720, u32(u32, u32, u32, u32)> call_001d3720;

struct __attribute__((packed)) Frame_005ccfc4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005ccfc4, word_0, 0x0);
GUEST_OFFSET(Frame_005ccfc4, word_4, 0x4);
GUEST_SIZE(Frame_005ccfc4, 0x8);

u32 SaveProcess__SaveProcess(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_005ccfc4> frame;  // the original's stack frame
    frame->word_4 = r0;
    frame->word_0 = vtable_SaveProcess;
    call_001d3720(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = frame->word_4;
    frame->word_0 = vtable_SaveProcess;
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
namespace d_005cd05c {

struct __attribute__((packed)) Local_005cd05c_r0_9 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_005cd05c_r0_9, byte_a, 0xa);

inline constexpr guest::Function<0x0010e9a9, u32(u32)> call_0010e9a8;
inline constexpr guest::Function<0x00114489, u32(u32, u32)> call_00114488;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;

u32 f_005cd05c(u32 r0, u32 r1) {
    u32 data_base = get_data_base(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_00114488(data_base + 0x621d0u, 0u);  // (from the original)
    u32 data_base_2 = get_data_base(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 records = slot_records_of(data_base_2);
    u32 r0_7 = call_0010e9a8(records + 4u);
    u32 player = get_current_player(r0_7);
    if (player == 0) {
        return player;
    }
    gptr<Local_005cd05c_r0_9> r0_9 = gptr<Local_005cd05c_r0_9>(player + 0x5700u);  // (from the original)
    u32 r1_6 = u32(r0_9->byte_a) | 2u;
    r0_9->byte_a = u8(r1_6);
    guest::cpu()->r[1] = r1_6;
    return r0_9.addr();
}

}  // namespace d_005cd05c
GUEST_EXPORT_FRAMED(0x005cd05c, d_005cd05c::f_005cd05c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cd0a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd0a4 {

inline constexpr u32 global_0095c33c_address = 0x0095c33cu;
inline guest::global<u8, 0x0095c33d> global_0095c33d;
inline constexpr guest::Function<0x0028ff00, u32(u32, u32, u32, u32)> call_0028ff00;
inline constexpr guest::Function<0x00304c68, u32(u32, u32, u32, u32)> call_00304c68;

struct __attribute__((packed)) Frame_005cd0a4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005cd0a4, word_0, 0x0);
GUEST_SIZE(Frame_005cd0a4, 0x4);

u32 f_005cd0a4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005cd0a4> frame;  // the original's stack frame
    frame->word_0 = r3;
    *global_0095c33d = 1;
    call_0028ff00(global_0095c33c_address, r1, r2, r3);
    frame->word_0 = 1;
    u32 r0_1 = call_00304c68(0x61u, 0u, 0u, 1u);  // (from the original)
    return r0_1;
}

}  // namespace d_005cd0a4
GUEST_EXPORT_FRAMED(0x005cd0a4, d_005cd0a4::f_005cd0a4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005cd270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd270 {

struct __attribute__((packed)) Object_005cd270_0 {
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
GUEST_OFFSET(Object_005cd270_0, word_0, 0x0);
GUEST_OFFSET(Object_005cd270_0, word_14, 0x14);
GUEST_OFFSET(Object_005cd270_0, word_18, 0x18);
GUEST_OFFSET(Object_005cd270_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005cd270_0, word_20, 0x20);
GUEST_OFFSET(Object_005cd270_0, word_24, 0x24);
GUEST_OFFSET(Object_005cd270_0, word_28, 0x28);
GUEST_OFFSET(Object_005cd270_0, word_2c, 0x2c);
GUEST_OFFSET(Object_005cd270_0, byte_30, 0x30);
GUEST_OFFSET(Object_005cd270_0, word_34, 0x34);

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

inline constexpr u32 global_00ad5638_address = 0x00ad5638u;
inline guest::global<u32, 0x00ad5638> global_00ad5638;
inline constexpr guest::Function<0x004dbc3c, u32(u32, u32, u32, u32)> call_004dbc3c;

u32 f_005cd270(gptr<Object_005cd270_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        u32 r0_2 = call_004dbc3c(r0_1, r1, r2, r3);
        if (r0_2 == 0) {
            gptr<Local_005cd270_r0_3> r0_3 = gptr<Local_005cd270_r0_3>(arg0->word_0);
            u32 r1_1 = r0_3->word_4;
            if (r1_1 != 0) {
                *gptr<u32>(r1_1) = 0;
            }
            *global_00ad5638 = r0_3.addr();
            r0_3->word_4 = 0xad5638;  // (from the original)
            arg0->word_0 = 0;
        }
    }
    gptr<Local_005cd270_ea_1> ea_1 = gptr<Local_005cd270_ea_1>(arg0.addr() + 8u);
    ea_1->word_0 = 0x800000;  // (from the original)
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
    return 0x800000u;  // (from the original)
}

}  // namespace d_005cd270
GUEST_EXPORT_FRAMED(0x005cd270, d_005cd270::f_005cd270, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cd2f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd2f4 {

inline constexpr u32 global_0095c33c_address = 0x0095c33cu;
inline constexpr u32 global_0095c348_address = 0x0095c348u;
inline guest::global<u8, 0x0095c33e> global_0095c33e;
inline guest::global<u32, 0x0095c348> global_0095c348;
inline constexpr guest::Function<0x001b979c, u32(u32)> call_001b979c;

u32 f_005cd2f4() {
    u32 r0_1 = *global_0095c348;
    if (r0_1 != 0) {
        return r0_1;
    }
    call_001b979c(r0_1);
    *global_0095c33e = 0;
    return 0u;
}

}  // namespace d_005cd2f4
GUEST_EXPORT_FRAMED(0x005cd2f4, d_005cd2f4::f_005cd2f4, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cd754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cd754 {

struct __attribute__((packed)) Object_005cd754_0 {
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
GUEST_OFFSET(Object_005cd754_0, half_8c20, 0x8c20);
GUEST_OFFSET(Object_005cd754_0, byte_8c22, 0x8c22);
GUEST_OFFSET(Object_005cd754_0, byte_8c23, 0x8c23);
GUEST_OFFSET(Object_005cd754_0, word_8c24, 0x8c24);
GUEST_OFFSET(Object_005cd754_0, word_8c28, 0x8c28);
GUEST_OFFSET(Object_005cd754_0, word_8c2c, 0x8c2c);
GUEST_OFFSET(Object_005cd754_0, word_8c30, 0x8c30);
GUEST_OFFSET(Object_005cd754_0, word_8c34, 0x8c34);
GUEST_OFFSET(Object_005cd754_0, word_8c38, 0x8c38);
GUEST_OFFSET(Object_005cd754_0, word_8c3c, 0x8c3c);
GUEST_OFFSET(Object_005cd754_0, word_8c40, 0x8c40);
GUEST_OFFSET(Object_005cd754_0, word_8c44, 0x8c44);
GUEST_OFFSET(Object_005cd754_0, word_8c48, 0x8c48);
GUEST_OFFSET(Object_005cd754_0, word_8c4c, 0x8c4c);
GUEST_OFFSET(Object_005cd754_0, word_8c50, 0x8c50);
GUEST_OFFSET(Object_005cd754_0, word_8c54, 0x8c54);
GUEST_OFFSET(Object_005cd754_0, word_8c58, 0x8c58);
GUEST_OFFSET(Object_005cd754_0, word_8c5c, 0x8c5c);
GUEST_OFFSET(Object_005cd754_0, word_8c60, 0x8c60);
GUEST_OFFSET(Object_005cd754_0, word_8c64, 0x8c64);

inline constexpr guest::Function<0x00106bb1, u32(u32)> call_00106bb0;
inline constexpr guest::Function<0x00108449, u32(u32)> call_00108448;
inline constexpr guest::Function<0x00108a9d, u32(u32)> call_00108a9c;
inline constexpr guest::Function<0x00108b59, u32(u32)> call_00108b58;
inline constexpr guest::Function<0x00109615, u32(u32, u32, u32, u32)> call_00109614;
inline constexpr guest::Function<0x00109ff9, u32(u32)> call_00109ff8;
inline constexpr guest::Function<0x0010a401, u32(u32)> call_0010a400;
inline constexpr guest::Function<0x0010a4a9, u32(u32)> call_0010a4a8;
inline constexpr guest::Function<0x0010a801, u32(u32)> call_0010a800;
inline constexpr guest::Function<0x0010ab2d, u32(u32)> call_0010ab2c;
inline constexpr guest::Function<0x0010af61, u32(u32)> call_0010af60;
inline constexpr guest::Function<0x0010b1e5, u32(u32)> call_0010b1e4;
inline constexpr guest::Function<0x0010b391, u32(u32)> call_0010b390;
inline constexpr guest::Function<0x0010b43d, u32(u32)> call_0010b43c;
inline constexpr guest::Function<0x0010b6d1, u32(u32)> call_0010b6d0;
inline constexpr guest::Function<0x0020d06c, u32(u32)> store_constants_20d06c_0020d06c;
inline constexpr guest::Function<0x0020d328, u32(u32)> call_0020d328;
inline constexpr guest::Function<0x002a7ad0, u32(u32)> clear_counter_block;
inline constexpr guest::Function<0x003142b8, u32(u32)> call_003142b8;

void f_005cd754(gptr<Object_005cd754_0> arg0, u32 r1) {
    call_00109614(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_003142b8(arg0.addr() + 0x8b78u);  // (from the original)
    call_00109ff8(arg0.addr() + 0x9cu);  // (from the original)
    clear_counter_block(arg0.addr() + 0x4468u);  // (from the original)
    call_0010b390(arg0.addr() + 0x4494u);  // (from the original)
    call_0010a800(arg0.addr() + 0x44e0u);  // (from the original)
    call_00108b58(arg0.addr() + 0x45ccu);  // (from the original)
    call_0020d328(arg0.addr() + 0x45fcu);  // (from the original)
    call_0010ab2c(arg0.addr() + 0x4650u);  // (from the original)
    call_0010af60(arg0.addr() + 0x8a6cu);  // (from the original)
    call_0010b6d0(arg0.addr() + 0x8a7eu);  // (from the original)
    call_00108a9c(arg0.addr() + 0x8aa6u);  // (from the original)
    call_0010a400(arg0.addr() + 0x8b32u);  // (from the original)
    call_00108448(arg0.addr() + 0x8b52u);  // (from the original)
    call_0010a4a8(arg0.addr() + 0x8b54u);  // (from the original)
    call_0010b43c(arg0.addr() + 0x8b60u);  // (from the original)
    store_constants_20d06c_0020d06c(arg0.addr() + 0x8b68u);  // (from the original)
    call_0010b1e4(arg0.addr() + 0x8bf8u);  // (from the original)
    call_00106bb0(arg0.addr() + 0x8c04u);  // (from the original)
    arg0->half_8c20 = 0;
    arg0->byte_8c22 = 0;
    arg0->byte_8c23 = 0;
    arg0->word_8c24 = 0;
    arg0->word_8c28 = 0;
    arg0->word_8c2c = 0;
    arg0->word_8c30 = 0;
    arg0->word_8c34 = 0;
    arg0->word_8c38 = 0;
    arg0->word_8c3c = 0;
    arg0->word_8c40 = 0;
    arg0->word_8c44 = 0;
    arg0->word_8c48 = 0;
    arg0->word_8c4c = 0;
    arg0->word_8c50 = 0;
    arg0->word_8c54 = 0;
    arg0->word_8c58 = 0;
    arg0->word_8c5c = 0;
    arg0->word_8c60 = 0;
    arg0->word_8c64 = 0;
    guest::cpu()->r[1] = arg0.addr() + 0x8c00u;  // (from the original)
}

}  // namespace d_005cd754
GUEST_EXPORT_FRAMED(0x005cd754, d_005cd754::f_005cd754, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cd8a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

void f_005cd8a0(u32 r0, u32 r1) {
    guest::StackFrame frame(0x28);  // the original's stack frame
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
    if (r1 >= 4u) {
        return;
    }
    gptr<Local_005cd8a0_ea_1> ea_1 = gptr<Local_005cd8a0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r11;
    ea_1->word_20 = r12;
    ea_1->word_24 = r14;
    r6 = r0;
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
    r4 = 0u;
    do {
        gptr<Local_005cd8a0_r7_1> r7_1 = gptr<Local_005cd8a0_r7_1>(r4 >= 0x38u ? r6 + 8u : r6 + (r4 << 2) + 8u);  // (from the original)
        u32 r0_1 = halfword_is_fc_or_more(r7_1.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            u32 r0_2 = low_byte_of_id(r7_1.addr(), r1);
            r1 = guest::cpu()->r[1];
            if (r0_2 == r5) {
                u32 r0_3 = low_byte_of_id(r7_1.addr(), r1);
                r1 = guest::cpu()->r[1];
                r8 = r0_3;
                r10 = r7_1->byte_2;
                r11 = r7_1->byte_3;
                r4 = 0u;
                do {
                    gptr<Local_005cd8a0_r5_1> r5_1 = gptr<Local_005cd8a0_r5_1>(r6 + (r4 << 2));
                    u32 r0_5 = halfword_is_fc_or_more(r5_1.addr() + 8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    if (r0_5 == 0) {
                        u32 r0_7 = low_byte_of_id(r5_1.addr() + 8u, r1);
                        r1 = guest::cpu()->r[1];
                        u32 r9_1 = r5_1->byte_a;
                        if (r0_7 == r8 && r9_1 == r10 && r5_1->byte_b == r11) {
                            clear_number_pair(r6 + (r4 << 2) + 8u);
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
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0x38u);  // (from the original)
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
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x38u);  // (from the original)
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
GUEST_EXPORT(0x005cd8a0, d_005cd8a0::f_005cd8a0);

// f_005cda08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cda08 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> clear_number_pair;

void f_005cda08(u32 r0) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        clear_number_pair(r5 + (r4 << 2) + 0xe8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    *gptr<u8>(r5 + 5u) = 0;
}

}  // namespace d_005cda08
GUEST_EXPORT_FRAMED(0x005cda08, d_005cda08::f_005cda08, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cda44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cda44 {

inline constexpr guest::Function<0x0024e9d8, u32(u32, u32, u32, u32)> replace_number_with_bytes;
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> halfword_is_fc_or_more;

u32 f_005cda44(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r7 = r2;
    u32 r8 = r3;
    u32 r4 = 0u;
    do {
        u32 r0_2 = halfword_is_fc_or_more(r5 + (r4 << 2) + 8u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            replace_number_with_bytes(r5 + (r4 << 2) + 8u, r6, r7, r8);
            *gptr<u8>(r5 + 4u) = u8(u32(*gptr<u8>(r5 + 4u)) + 1u);
            return r4;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x38u);  // (from the original)
    return 0u;
}

}  // namespace d_005cda44
GUEST_EXPORT_FRAMED(0x005cda44, d_005cda44::f_005cda44, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005cdab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdab4 {

inline constexpr guest::Function<0x0024e9d8, u32(u32, u32, u32, u32)> replace_number_with_bytes;
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> halfword_is_fc_or_more;

u32 f_005cdab4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r7 = r2;
    u32 r8 = r3;
    u32 r4 = 0u;
    do {
        u32 r0_2 = halfword_is_fc_or_more(r5 + (r4 << 2) + 0xe8u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            replace_number_with_bytes(r5 + (r4 << 2) + 0xe8u, r6, r7, r8);  // (from the original)
            *gptr<u8>(r5 + 5u) = u8(u32(*gptr<u8>(r5 + 5u)) + 1u);
            return r4;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005cdab4
GUEST_EXPORT_FRAMED(0x005cdab4, d_005cdab4::f_005cdab4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005cdb24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

u32 f_005cdb24(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r9 = r2;
    u32 r11 = r3;
    u32 r4 = 0u;
    do {
        gptr<Local_005cdb24_r5_1> r5_1 = gptr<Local_005cdb24_r5_1>(r6 + (r4 << 2));
        u32 r0_2 = halfword_is_fc_or_more(r5_1.addr() + 8u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            u32 r0_4 = low_byte_of_id(r5_1.addr() + 8u, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 r10_1 = r5_1->byte_a;
            if (r0_4 == r7 && r10_1 == r9 && r5_1->byte_b == r11) {
                clear_number_pair(r6 + (r4 << 2) + 8u, r1);
                *gptr<u8>(r6 + 4u) = u8(u32(*gptr<u8>(r6 + 4u)) - 1u);
                return 1u;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x38u);  // (from the original)
    return 0u;
}

}  // namespace d_005cdb24
GUEST_EXPORT_FRAMED(0x005cdb24, d_005cdb24::f_005cdb24, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005cdbb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdbb8 {

struct __attribute__((packed)) Object_005cdbb8_0 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
    u8 unknown_7[0x44a9];  // (not used here)
    u32 word_44b0;
    u32 word_44b4;
    u32 word_44b8;
};
GUEST_OFFSET(Object_005cdbb8_0, byte_6, 0x6);
GUEST_OFFSET(Object_005cdbb8_0, word_44b0, 0x44b0);
GUEST_OFFSET(Object_005cdbb8_0, word_44b4, 0x44b4);
GUEST_OFFSET(Object_005cdbb8_0, word_44b8, 0x44b8);

inline constexpr guest::Function<0x0027a060, u32(u32, u32, u32, u32)> call_0027a060;

void f_005cdbb8(gptr<Object_005cdbb8_0> arg0, u32 r1) {
    arg0->byte_6 = 0;
    call_0027a060(arg0.addr() + 0xf0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_44b0 = 0;
    arg0->word_44b4 = 0;
    arg0->word_44b8 = 0;
    guest::cpu()->r[1] = arg0.addr() + 0x44b4u;  // (from the original)
}

}  // namespace d_005cdbb8
GUEST_EXPORT_FRAMED(0x005cdbb8, d_005cdbb8::f_005cdbb8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cdbf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdbf8 {

struct __attribute__((packed)) Object_005cdbf8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Object_005cdbf8_0, byte_4, 0x4);
GUEST_OFFSET(Object_005cdbf8_0, byte_5, 0x5);

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> clear_number_pair;
inline constexpr guest::Function<0x0027a0a0, u32(u32, u32)> call_0027a0a0;

void f_005cdbf8(gptr<Object_005cdbf8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r6 = 0u;
    arg0->byte_4 = u8(r6);
    u32 r5 = r0;
    u32 r4 = r6;
    arg0->byte_5 = u8(r6);
    do {
        clear_number_pair(r5 + (r4 << 2) + 8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x38u);  // (from the original)
    r4 = 0u;
    do {
        clear_number_pair(r5 + (r4 << 2) + 0xe8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    *gptr<u8>(r5 + 6u) = u8(r6);
    call_0027a0a0(r5 + 0xf0u, r1);  // (from the original)
    u32 r1_1 = r5 + 0x44b4u;  // (from the original)
    *gptr<u32>(r5 + 0x44b0u) = r6;  // (from the original)
    *gptr<u32>(r1_1) = r6;
    *gptr<u32>(r5 + 0x44b8u) = r6;  // (from the original)
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005cdbf8
GUEST_EXPORT_FRAMED(0x005cdbf8, d_005cdbf8::f_005cdbf8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cdd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdd70 {

inline constexpr guest::Function<0x0027a31c, u32(u32)> call_0027a31c;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 f_005cdd70(u32 r0) {
    u32 r0_2 = for_each_element(r0 + 8u, 0x24ea34u, 4u, 0x38u);  // (from the original)
    u32 r0_4 = for_each_element(r0_2 + 0xe0u, 0x24ea34u, 4u, 2u);  // (from the original)
    u32 r0_6 = call_0027a31c(r0_4 + 8u);
    return r0_6 - 0xf0u;  // (from the original)
}

}  // namespace d_005cdd70
GUEST_EXPORT_FRAMED(0x005cdd70, d_005cdd70::f_005cdd70, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cdde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

struct __attribute__((packed)) Frame_005cdde8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005cdde8, word_0, 0x0);
GUEST_OFFSET(Frame_005cdde8, word_4, 0x4);
GUEST_SIZE(Frame_005cdde8, 0x14);

void f_005cdde8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005cdde8> frame;  // the original's stack frame
    u32 r0_1 = GameTime__nanoseconds_or_earliest(r0, r1, r2, r3);
    frame->word_0 = 0;
    frame->word_4 = 0;
    u32 r0_2 = game_time_advanced(r0_1, guest::cpu()->r[1], r1, 0u);
    gptr<Local_005cdde8_ea_1> ea_1 = gptr<Local_005cdde8_ea_1>(frame.at(8).addr());
    ea_1->word_0 = r0_2;
    ea_1->word_4 = guest::cpu()->r[1];
    store_constants_7795ac(r0);
    copy_8_bytes(r0, frame.at(8).addr());
}

}  // namespace d_005cdde8
GUEST_EXPORT_FRAMED(0x005cdde8, d_005cdde8::f_005cdde8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005cdfd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cdfd0 {


u32 f_005cdfd0(u32 r0) {
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    u32 r0_1 = *gptr<u8>(r0 + 0x890554u);  // (from the original)
    guest::cpu()->r[1] = 0x890554u;  // (from the original)
    return r0_1;
}

}  // namespace d_005cdfd0
GUEST_EXPORT(0x005cdfd0, d_005cdfd0::f_005cdfd0);

// f_005ce114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce114 {

inline constexpr u32 global_0095dc1b_address = 0x0095dc1bu;

u32 f_005ce114(u32 r0) {
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    u32 r0_1 = *gptr<u8>(r0 + global_0095dc1b_address);
    guest::cpu()->r[1] = global_0095dc1b_address;
    return r0_1;
}

}  // namespace d_005ce114
GUEST_EXPORT(0x005ce114, d_005ce114::f_005ce114);

// f_005ce2b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce2b8 {

inline constexpr u32 global_0095d81f_address = 0x0095d81fu;

u32 f_005ce2b8(u32 r0) {
    if (r0 >= 0xffu) {  // (from the original)
        r0 = 0u;
    }
    u32 r0_1 = *gptr<u8>(r0 + global_0095d81f_address);
    guest::cpu()->r[1] = global_0095d81f_address;
    return r0_1;
}

}  // namespace d_005ce2b8
GUEST_EXPORT(0x005ce2b8, d_005ce2b8::f_005ce2b8);

// f_005ce32c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce32c {

inline constexpr u32 global_0095d720_address = 0x0095d720u;
inline constexpr guest::Function<0x006c5a88, u32(u32, u32)> terrain_at_position;

u32 f_005ce32c(u32 r0, u32 r1) {
    u32 r0_1 = terrain_at_position(r0, r1);
    if (r0_1 >= 0xffu) {  // (from the original)
        r0_1 = 0u;
    }
    u32 r0_2 = *gptr<s8>(r0_1 + global_0095d720_address);
    guest::cpu()->r[1] = global_0095d720_address;
    return r0_2;
}

}  // namespace d_005ce32c
GUEST_EXPORT_FRAMED(0x005ce32c, d_005ce32c::f_005ce32c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ce368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce368 {

inline guest::global<u32, 0x0094e3c8> global_0094e3c8;

u32 f_005ce368() {
    return *gptr<s8>(*global_0094e3c8 + 0xfadu);  // (from the original)
}

}  // namespace d_005ce368
GUEST_EXPORT(0x005ce368, d_005ce368::f_005ce368);

// f_005ce568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ce568 {

inline constexpr u32 global_0094e3c8_address = 0x0094e3c8u;
inline guest::global<u32, 0x0094e3c8> global_0094e3c8;

u32 f_005ce568() {
    u32 r2_1 = *global_0094e3c8;
    u32 r1_1 = *gptr<u32>(r2_1 + 0x1cu);  // (from the original)
    u32 r0_1 = *gptr<u32>(*global_0094e3c8 + 0x20u);  // (from the original)
    if (r1_1 == 0 && ((r0_1 & 1u) == 0 || r0_1 == 0)) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    u32 r0_2 = r2_1 + u32(s32(r0_1) >> 1);
    if ((r0_1 & 1u) == 0) {
        // virtual function 7 of global_0094e3c8_address (if r2_1 points to a vtable)
        return guest::call_address<u32>(r1_1, r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    }
    u32 r2_2 = *gptr<u32>(r0_2);
    u32 r1_2 = *gptr<u32>(r2_2 + r1_1);
    return guest::call_address<u32>(r1_2, r0_2, r1_2, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_005ce568
GUEST_EXPORT(0x005ce568, d_005ce568::f_005ce568);

// f_005cebe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cebe4 {

inline constexpr u32 global_00ac1930_address = 0x00ac1930u;
inline constexpr guest::Function<0x0011edd8, u32(u32, u32, u32, u32)> call_0011edd8;

u32 f_005cebe4() {
    return call_0011edd8(global_00ac1930_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005cebe4
GUEST_EXPORT(0x005cebe4, d_005cebe4::f_005cebe4);

// f_005cec38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cec38 {

inline constexpr u32 global_00ac1930_address = 0x00ac1930u;
inline guest::global<u8, 0x0094e3ad> global_0094e3ad;
inline constexpr guest::Function<0x0011eafc, u32(u32)> call_0011eafc;
inline constexpr guest::Function<0x0011eb18, u32(u32)> read_u8_0x0094e3a8_;
inline constexpr guest::Function<0x0011edd8, u32(u32, u32, u32, u32)> call_0011edd8;
inline constexpr guest::Function<0x001242c8, u32(u32)> read_s8_0x00974ae1_;
inline constexpr guest::Function<0x00124c88, u32(u32, u32, u32, u32)> read_u8_0x00974ade_;
inline constexpr guest::Function<0x00127d1c, u32(u32, u32)> call_00127d1c;
inline constexpr guest::Function<0x0014f794, u32(u32, u32)> call_0014f794;
inline constexpr guest::Function<0x0014f79c, u32(u32, u32)> call_0014f79c;

void f_005cec38(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_u8_0x00974ade_(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        r0_1 = read_s8_0x00974ae1_(r0_1);
        if (r0_1 == 0) {
            return;
        }
    }
    u32 r0_2 = call_0011eafc(r0_1);
    if (r0_2 != 0) {
        r0 = read_u8_0x0094e3a8_(r0_2);
        r1 = guest::cpu()->r[1];
        if (r0 != 2u) {
L_5cec78:;
            r0 = call_0014f794(r0, r1);
            r1 = guest::cpu()->r[1];
            if (r0 == 0) {
                r0 = call_00127d1c(r0, r1);
                r1 = guest::cpu()->r[1];
                guest::preempt();
                goto L_5cec78;
            }
        }
        call_0014f79c(r0, r1);
    }
    if (*global_0094e3ad == 0) {
        *global_0094e3ad = 1;
    }
    frame.release();
    call_0011edd8(global_00ac1930_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005cec38
GUEST_EXPORT(0x005cec38, d_005cec38::f_005cec38);

// f_005cecfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cecfc {

inline guest::global<u8, 0x0094e3ac> global_0094e3ac;
inline guest::global<u8, 0x0094e3ad> global_0094e3ad;
inline guest::global<u8, 0x0094e3af> global_0094e3af;
inline constexpr guest::Function<0x007b1038, u32(u32, u32, u32, u32)> call_007b1038;
inline constexpr guest::Function<0x007b16b4, u32(u32, u32)> call_007b16b4;

u32 f_005cecfc() {
    u32 r1_1 = s8(*global_0094e3af);
    u32 r0_1 = u32(s8(*global_0094e3ad)) | r1_1;
    if (r0_1 == 0) {
        call_007b1038(0x3fffu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_007b16b4(0x3fffu, 1u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
        *global_0094e3ac = u8(r0_1);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005cecfc
GUEST_EXPORT_FRAMED(0x005cecfc, d_005cecfc::f_005cecfc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ced7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ced7c {

inline guest::global<u32, 0x0094e3b4> global_0094e3b4;

void f_005ced7c() {
    *global_0094e3b4 = *global_0094e3b4 + 1u;
}

}  // namespace d_005ced7c
GUEST_EXPORT(0x005ced7c, d_005ced7c::f_005ced7c);

// f_005cedec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cedec {

struct __attribute__((packed)) Local_005cedec_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005cedec_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005cedec_ea_2, word_4, 0x4);

inline constexpr u32 global_00974ac8_address = 0x00974ac8u;
inline constexpr u32 global_00ae563c_address = 0x00ae563cu;
inline guest::global<u8, 0x0094e3f0> global_0094e3f0;
inline guest::global<u32, 0x00974ac8> global_00974ac8;
inline guest::global<u32, 0x00974acc> global_00974acc;
inline guest::global<u8, 0x00975c30> global_00975c30;
inline constexpr guest::Function<0x0012a5a0, u32(u32, u32, u32, u32)> call_0012a5a0;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x0034ba38, u32(u32, u32, u32, u32)> call_0034ba38;
inline constexpr guest::Function<0x0047f274, u32(u32)> call_0047f274;
inline constexpr guest::Function<0x005cec38, u32(u32)> call_005cec38;
inline constexpr guest::Function<0x005cecfc, u32(u32, u32, u32, u32)> call_005cecfc;

struct __attribute__((packed)) Frame_005cedec {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005cedec, word_0, 0x0);
GUEST_SIZE(Frame_005cedec, 0x20);

void f_005cedec(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005cedec> frame;  // the original's stack frame
    if (*global_0094e3f0 == 0 || *global_00975c30 != 0) {
        return;
    }
    u32 r0_1 = call_0034ba38(global_00ae563c_address, r1, r2, r3);
    if (r0_1 == 0) {
        return;
    }
    call_0047f274(r0_1);
    u32 r0_2 = *global_00974ac8;
    u32 r1_2 = *global_00974acc;
    frame->word_0 = 0;
    gptr<Local_005cedec_ea_2> ea_2 = gptr<Local_005cedec_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r0_2;
    ea_2->word_4 = r1_2;
    call_0012a5a0(0u, 0u, 0u, 0u);
    u32 r0_3 = unlock_member_lock(global_00ae563c_address);
    call_005cec38(r0_3);
    *global_0094e3f0 = 0;
    frame.release();
    call_005cecfc(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005cedec
GUEST_EXPORT(0x005cedec, d_005cedec::f_005cedec);

// f_005cfa38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfa38 {

inline constexpr u32 global_009535e4_address = 0x009535e4u;
inline guest::global<u32, 0x009535e4> global_009535e4;
inline constexpr guest::Function<0x0050d698, u32(u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;
inline constexpr guest::Function<0x0050ddc0, u32(u32, u32)> call_0050ddc0;
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;

void f_005cfa38(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0071a084(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = script__WordFix_64u___WordFix_0050d698(0u);
    if (r0_2 != 0) {
        frame.release();
        call_0050d8f0(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    u32 r0_3 = *global_009535e4;
    call_0050ddc0(r0_3, 0u);
    frame.release();
    call_0050d8f0(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005cfa38
GUEST_EXPORT(0x005cfa38, d_005cfa38::f_005cfa38);

// f_005cfa78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfa78 {

inline guest::global<u8, 0x009514c4> global_009514c4;
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32)> call_0050d8f0;

u32 f_005cfa78() {
    if (u32(s8(*global_009514c4)) + 1u == 0) {
        u32 r0_1 = script__WordFix_64u___WordFix_0050d698(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *global_009514c4 = u8(u32(r0_1 == 0));
        call_0050d8f0(r0_1);
    }
    u32 r0_2 = *global_009514c4;
    if (r0_2 != 1u) {
        r0_2 = 0u;
    }
    return r0_2;
}

}  // namespace d_005cfa78
GUEST_EXPORT_FRAMED(0x005cfa78, d_005cfa78::f_005cfa78, 0x4010);  // pushes {r4, lr} first, as the original

// f_005cfaec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005cfaec_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_005cfaec_r4_2, word_4, 0x4);

inline constexpr u32 global_009514c4_address = 0x009514c4u;
inline constexpr u32 global_009535e4_address = 0x009535e4u;
inline constexpr guest::Function<0x001138dd, u32(u32, u32)> Villager__copy;
inline constexpr guest::Function<0x00114161, u32(u32, u32, u32, u32)> clear_villager_at;
inline constexpr guest::Function<0x0011b40d, u32(u32, u32, u32)> call_0011b40c;
inline constexpr guest::Function<0x0023bc64, u32(u32, u32)> call_0023bc64;
inline constexpr guest::Function<0x0023c65c, u32(u32, u32)> call_0023c65c;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x00301e20, u32(u32)> is_villager_record;
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x003505bc, u32(u32, u32)> call_003505bc;
inline constexpr guest::Function<0x0050d698, u32(u32, u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;
inline constexpr guest::Function<0x0050dd68, u32(u32, u32, u32, u32)> call_0050dd68;
inline constexpr guest::Function<0x005373bc, u32(u32, u32)> current_player_is_town_owner;
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;
inline constexpr guest::Function<0x00728128, u32(u32, u32, u32, u32)> call_00728128;
inline constexpr guest::Function<0x007283f4, u32(u32, u32, u32, u32)> call_007283f4;

void f_005cfaec(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_15 = 0;
    u32 r0_1 = call_0071a084(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = current_player_is_town_owner(r0_1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_3 = call_0023bc64(r0_2, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                u32 r0_4 = call_003505bc(r0_3, r1_1);
                r1_1 = guest::cpu()->r[1];
                if (r0_4 != 0) {
                    u32 r0_5 = call_0023c65c(r0_4, r1_1);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_5 != 0) {
                        u32 r8 = global_009514c4_address;
                        gptr<Local_005cfaec_r4_1> r4_1 = gptr<Local_005cfaec_r4_1>(*gptr<u32>(r8 + 4u));
                        if (r4_1.addr() != 0) {
                            u32 r7 = 0x251cu;  // (from the original)
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
                                call_0050d8f0(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                                return;
                            }
                            u32 r6 = global_009535e4_address;
                            u32 r4 = *gptr<u32>(*gptr<u32>(r6) + 0x3c0u);  // (from the original)
                            if (r4 != 0) {
                                do {
                                    r4 -= 1u;
                                    u32 r0_11 = call_007283f4(*gptr<u32>(r6), 1u, r4, r3);
                                    r3 = guest::cpu()->r[3];
                                    if (r0_11 == 0) {
                                        call_0050dd68(*gptr<u32>(r6), 1u, r4, r3);
                                        r3 = guest::cpu()->r[3];
                                    }
                                    guest::preempt();
                                } while (r4 != 0);
                            }
                            u32 r0_13 = *gptr<u32>(r6);
                            r4 = *gptr<u32>(r0_13 + 0x3c0u);  // (from the original)
                            if (r4 == 0) {
                                r5 = 1u;
                            } else {
                                do {
                                    r4 -= 1u;
                                    r0_13 = call_00728128(*gptr<u32>(r6), 1u, r4, r3);
                                    r3 = guest::cpu()->r[3];
                                    if (r0_13 == 2u) {
                                        goto L_5cfc34;
                                    }
                                    guest::preempt();
                                } while (r4 != 0);
                                r0_15 = call_0050d8f0(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                                r1_1 = guest::cpu()->r[1];
                                goto L_5cfc48;
                            }
L_5cfc34:;
                            r0_15 = call_0050d8f0(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                            r1_1 = guest::cpu()->r[1];
                            if (r5 == 0) {
                                return;
                            }
L_5cfc48:;
                            u32 save_data = get_save_data(r0_15, r1_1);
                            u32 r0_18 = call_0011b40c(save_data + 0x42a0cu, 0u, 1u);  // (from the original)
                            u32 is_villager = is_villager_record(r0_18);
                            r1_1 = guest::cpu()->r[1];
                            if (is_villager != 0) {
                                gptr<Local_005cfaec_r4_2> r4_2 = gptr<Local_005cfaec_r4_2>(*gptr<u32>(r8 + 4u));
                                Villager__copy(r4_2.addr() + 8u, r0_18);
                                u32 r3_11 = ~0u;
                                r4_2->word_4 = 2;
                                u32 crc_2 = crc32(r4_2.addr() + 4u, r7, r3_11, r3_11);
                                r4_2->word_0 = crc_2;
                                u32 data_base = get_data_base(crc_2);
                                u32 records = slot_records_of(data_base);
                                frame.release();
                                clear_villager_at(records + 0x1976cu, 0u, 1u, guest::cpu()->r[3]);  // (from the original)
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
GUEST_EXPORT(0x005cfaec, d_005cfaec::f_005cfaec);

// f_005cfcf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline guest::global<u8, 0x009514c5> global_009514c5;
inline guest::global<u8, 0x009514c6> global_009514c6;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;

u32 f_005cfcf0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    gptr<Local_005cfcf0_r0_1> r0_1 = gptr<Local_005cfcf0_r0_1>(u32(*global_009514c6));
    if (r0_1.addr() != 0) {
        u32 data_base = get_data_base(r0_1.addr(), r1, r2, r3);
        u32 r1_1 = *global_009514c5;
        gptr<Local_005cfcf0_r0_3> r0_3 = gptr<Local_005cfcf0_r0_3>(data_base + 0x6214fu);  // (from the original)
        u32 r0_4 = (u32(r0_3->byte_5) >> 3) + ((u32(r0_3->byte_6) & 1u) << 5);
        u32 r4_1 = r1_1 > r0_4 ? r1_1 - r0_4 : 0u;
        u32 data_base_2 = get_data_base(r0_4, r1_1, r2, r3);
        gptr<Local_005cfcf0_r1_2> r1_2 = gptr<Local_005cfcf0_r1_2>(data_base_2 + 0x6214fu);  // (from the original)
        u32 r2_1 = r1_2->byte_1;
        u32 r0_6 = (r2_1 >> 7) + ((u32(r1_2->byte_2) & 0xfu) << 1) + r4_1;  // (from the original)
        if (r0_6 > 0x14u) {  // (from the original)
            if (r4_1 != 0 && s32(r4_1) >= 0) {
                r0_6 = 0x14u;  // (from the original)
            }
            if (s32(r4_1) <= 0) {
                r0_6 = 0u;
            }
        }
        r1_2->byte_1 = u8(r2_1 & ~0x80u | r0_6 << 7);  // (from the original)
        u32 r0_7 = u32(r1_2->byte_2) & ~0xfu | (r0_6 & 0x1eu) >> 1;  // (from the original)
        r1_2->byte_2 = u8(r0_7);
        u32 data_base_3 = get_data_base(r0_7, r1_2.addr(), r2_1, r3);
        r0_1 = gptr<Local_005cfcf0_r0_1>(data_base_3 + 0x6214fu);  // (from the original)
        r0_1->byte_5 = u8(u32(r0_1->byte_5) & ~0xf8u);  // (from the original)
        r1 = 0u;
        r0_1->byte_6 = u8(u32(r0_1->byte_6) & ~1u);
        *global_009514c6 = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_005cfcf0
GUEST_EXPORT_FRAMED(0x005cfcf0, d_005cfcf0::f_005cfcf0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005cfef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfef0 {

inline constexpr guest::Function<0x0071a084, u32(u32, u32)> call_0071a084;

u32 f_005cfef0() {
    return call_0071a084(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_005cfef0
GUEST_EXPORT(0x005cfef0, d_005cfef0::f_005cfef0);

// f_005cfef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005cfef4 {

inline constexpr u32 global_009514c4_address = 0x009514c4u;
inline guest::global<u8, 0x009514c5> global_009514c5;
inline constexpr guest::Function<0x0020d848, u32(u32, u32, u32, u32)> store_half_and_bytes;
inline constexpr guest::Function<0x0024b8a8, u32(u32, u32, u32)> CounterTable__add;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x0030dc84, u32(u32, u32)> find_player_by_identity;
inline constexpr guest::Function<0x005373a4, u32(u32, u32)> town_identity;
inline constexpr guest::Function<0x005374f0, u32(u32, u32, u32)> call_005374f0;
inline constexpr guest::Function<0x006b5240, u32(u32, u32)> ClampedCounters__add_to_value_2bc;
inline constexpr guest::Function<0x00728af8, u32(u32)> call_00728af8;
inline constexpr guest::Function<0x00728c48, u32(u32, u32, u32, u32)> call_00728c48;
inline constexpr guest::Function<0x00728ca0, u32(u32)> call_00728ca0;

struct __attribute__((packed)) Frame_005cfef4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005cfef4, word_0, 0x0);
GUEST_SIZE(Frame_005cfef4, 0x4);

void f_005cfef4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005cfef4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = call_00728c48(r1, r1, r2, r3);
    u32 r0_2 = call_00728ca0(r1);
    u32 r0_3 = call_00728af8(r1);
    store_half_and_bytes(frame.at(0).addr(), uxth(r0_1), r0_2 & 0xffu, r0_3 & 0xffu);  // (from the original)
    u32 r0_4 = call_005374f0(r0, frame.at(0).addr(), 1u);
    if (r0_4 != 0) {
        u32 r1_5 = u32(*global_009514c5) + 1u;
        *global_009514c5 = u8(r1_5);
        u32 r0_5 = town_identity(global_009514c4_address, r1_5);
        u32 data_base = get_data_base(r0_5);
        u32 r0_8 = find_player_by_identity(data_base + 0x20u, r0_5);  // (from the original)
        if (r0_8 != 0) {
            r0_8 = CounterTable__add(r0_8 + 0x55dcu, 0xdu, 1u);  // (from the original)
        }
        u32 r0_10 = get_counter_block(r0_8);
        ClampedCounters__add_to_value_2bc(r0_10, 1u);
    }
}

}  // namespace d_005cfef4
GUEST_EXPORT_FRAMED(0x005cfef4, d_005cfef4::f_005cfef4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original
