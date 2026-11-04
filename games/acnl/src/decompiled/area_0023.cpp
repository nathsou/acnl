// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002306c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's word slot to the number with its digits; whether there was a talk to set.
namespace d_002306c4 {

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> construct_word_fix_19;
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> init_text_with_buffer;
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32)> forward_to_target_virtual_19;
inline constexpr guest::Function<0x00312cb0, u32(u32)> set_word_num_digit_vtable;

struct __attribute__((packed)) NpcSpTalkReceptSetNumberWordFrame {
    u32 word_0;
    u8 unknown_4[0x44];  // (not read or written by name)
};
GUEST_OFFSET(NpcSpTalkReceptSetNumberWordFrame, word_0, 0x0);
GUEST_SIZE(NpcSpTalkReceptSetNumberWordFrame, 0x48);

u32 NpcSpTalkRecept__set_number_word(gptr<NpcSpTalkRecept> npc_sp_talk_recept, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NpcSpTalkReceptSetNumberWordFrame> frame;  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x60);
    u32 r0_1 = npc_sp_talk_recept->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        u32 zf_1 = r0_2 == 0;
        u32 r0_3 = *word_resources;
        if (!zf_1) {
            zf_1 = r0_3 == 0;
        }
        if (!zf_1) {
            construct_word_fix_19(frame.at(4).addr(), r1, r2, r3);
            frame->word_0 = 4;
            init_text_with_buffer(frame.at(4).addr(), r1, r3, r5_1);
            forward_to_target_virtual_19(r0_2, frame.at(4).addr(), r2);
            set_word_num_digit_vtable(frame.at(4).addr());
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002306c4
GUEST_EXPORT_FRAMED(0x002306c4, d_002306c4::NpcSpTalkRecept__set_number_word, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00231ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the gift item and its flag, and tells the gift manager for the main player and the NPC.
namespace d_00231ad4 {

struct __attribute__((packed)) TalkGift {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(TalkGift, byte_20, 0x20);

struct __attribute__((packed)) TalkGiftSetItemArg1 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(TalkGiftSetItemArg1, word_f0, 0xf0);

inline constexpr u32 gift_manager_address = 0x0094f3bcu;
inline guest::global<u32, 0x0094f3bc> gift_manager;
inline constexpr guest::Function<0x0018fb98, u32(u32, u32, u32, u32)> GiftMgr__set_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;

struct __attribute__((packed)) TalkGiftSetItemFrame {
    u32 word_0;
};
GUEST_OFFSET(TalkGiftSetItemFrame, word_0, 0x0);
GUEST_SIZE(TalkGiftSetItemFrame, 0x4);

void TalkGift__set_item(gptr<TalkGift> talk_gift, gptr<TalkGiftSetItemArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<TalkGiftSetItemFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6_1 = arg1->word_f0;
    u32 r0_1 = talk_gift.addr() + 0x18u;
    Item__copy(r0_1, r2);
    talk_gift->byte_20 = u8(r3);
    u32 station = current_net_station(r0_1);
    frame->word_0 = r3;
    GiftMgr__set_item(*gift_manager, station, r6_1, r2);
}

}  // namespace d_00231ad4
GUEST_EXPORT_FRAMED(0x00231ad4, d_00231ad4::TalkGift__set_item, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00236ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the talk receptor's pending member-function handler (and clears it).
namespace d_00236ca4 {

struct __attribute__((packed)) Local_00236ca4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00236ca4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00236ca4_ea_2, word_4, 0x4);

inline guest::global<u32, 0x008812e4> global_008812e4;
inline guest::global<u32, 0x008812e8> global_008812e8;

u32 NpcTalkRecept__call_handler(gptr<NpcTalkRecept> npc_talk_recept, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r3_1 = npc_talk_recept->word_1fc;
    if (r3_1 == 0) {
        u32 r0_1 = npc_talk_recept->word_200;
        if ((r0_1 & 1u) == 0 || r0_1 == 0) {
            return r0_1;
        }
    }
    u32 r2_1 = *global_008812e4;
    u32 r12_1 = *global_008812e8;
    u32 r0_2 = *gptr<u32>(npc_talk_recept.addr() + 0x200u);
    gptr<Local_00236ca4_ea_2> ea_2 = gptr<Local_00236ca4_ea_2>(npc_talk_recept.addr() + 0x1fcu);
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r12_1;
    u32 r0_3 = npc_talk_recept.addr() + u32(s32(r0_2) >> 1);
    if ((r0_2 & 1u) != 0) {
        r3_1 = *gptr<u32>(*gptr<u32>(r0_3) + r3_1);
    }
    frame.release();
    return guest::call_address<u32>(r3_1, r0_3, r1, r2, r3_1);
}

}  // namespace d_00236ca4
GUEST_EXPORT(0x00236ca4, d_00236ca4::NpcTalkRecept__call_handler);

// f_00236d18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00236d18 {

struct __attribute__((packed)) Local_00236d18_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00236d18_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00236d18_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00236d18_ea_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_00236d18_ea_2, word_0, 0x0);

struct __attribute__((packed)) Local_00236d18_r0_2 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xa0];  // (not used here)
    u8 byte_a8;
    u8 unknown_a9[0x47];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x460];  // (not used here)
    u8 byte_554;
};
GUEST_OFFSET(Local_00236d18_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_00236d18_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_00236d18_r0_2, byte_a8, 0xa8);
GUEST_OFFSET(Local_00236d18_r0_2, word_f0, 0xf0);
GUEST_OFFSET(Local_00236d18_r0_2, byte_554, 0x554);

struct __attribute__((packed)) Local_00236d18_r0_4 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
    u8 unknown_a9[0x4ab];  // (not used here)
    u8 byte_554;
};
GUEST_OFFSET(Local_00236d18_r0_4, byte_a8, 0xa8);
GUEST_OFFSET(Local_00236d18_r0_4, byte_554, 0x554);

inline constexpr guest::Function<0x0023a440, u32(u32, u32, u32, u32)> TalkRecept__end_listeners_idle;
inline constexpr guest::Function<0x006eb990, u32(u32, u32, u32)> begin_action_0c;
inline constexpr guest::Function<0x00813b30, u32(u32, u32, u32, u32)> set_flag_below_19;

u32 AcNpcPlayerGhost__TalkRecept__virtual_43(gptr<NpcTalkRecept> npc_talk_recept, u32 r1, u32 r2, float S0) {
    u32 r0 = npc_talk_recept.addr();
    gptr<Local_00236d18_r0_2> r0_2 = gptr<Local_00236d18_r0_2>(0u);
    if ((u32(npc_talk_recept->byte_226) >> 2u & 1u) == 0) {
        r0_2 = gptr<Local_00236d18_r0_2>(TalkRecept__end_listeners_idle(r0 + 0xf4u, r1, r2, guest::cpu()->r[3]));
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    } else {
        guest::cpu()->s[0] = S0;
        r0_2 = gptr<Local_00236d18_r0_2>(set_flag_below_19(r0 + 0x224u, 0x12u, 0u, guest::cpu()->r[3]));
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    gptr<Local_00236d18_ea_1> ea_1 = gptr<Local_00236d18_ea_1>(r0 + 0x228u);
    u32 r6 = ea_1->word_0;
    u32 r7 = ea_1->word_4;
    if (r6 != r7) {
        u32 r8 = 0x88069cu;
        do {
            gptr<Local_00236d18_ea_2> ea_2 = gptr<Local_00236d18_ea_2>(*gptr<u32>(r6) + 0xf4u);
            gptr<Local_00236d18_r0_4> r0_4 = gptr<Local_00236d18_r0_4>(*gptr<u32>(ea_2->word_0 + 0xf0u));
            r1 = r0_4->byte_a8;
            u32 zf_1 = r1 == 0xcu;
            if (zf_1) {
                r1 = r0_4->byte_554;
                zf_1 = r1 == 0;
            }
            if (zf_1) {
                float S0_1 = std::bit_cast<float>(*gptr<u32>(r8));
                guest::cpu()->s[0] = S0_1;
                begin_action_0c(r0_4.addr() + 0x78u, 0u, 0u);
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
            }
            r0_2 = gptr<Local_00236d18_r0_2>(ea_2->word_0 + 0x228u);
            u32 r4 = r0_2->word_0;
            u32 r5 = r0_2->word_4;
            if (r4 != r5) {
                do {
                    r0_2 = gptr<Local_00236d18_r0_2>(*gptr<u32>(r4));
                    if (r0_2.addr() != 0) {
                        r0_2 = gptr<Local_00236d18_r0_2>(r0_2->word_f0);
                        r1 = r0_2->byte_a8;
                        if (r1 == 0xcu) {
                            r1 = r0_2->byte_554;
                            if (r1 == 0) {
                                float S0_2 = std::bit_cast<float>(*gptr<u32>(r8));
                                guest::cpu()->s[0] = S0_2;
                                r0_2 = gptr<Local_00236d18_r0_2>(begin_action_0c(r0_2.addr() + 0x78u, 0u, 0u));
                                r1 = guest::cpu()->r[1];
                                S0 = guest::cpu()->s[0];
                            }
                        }
                    }
                    r4 += 4u;
                    guest::preempt();
                } while (r4 != r5);
            }
            r6 += 4u;
            guest::preempt();
        } while (r6 != r7);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_2.addr();
}

}  // namespace d_00236d18
GUEST_EXPORT_FRAMED(0x00236d18, d_00236d18::AcNpcPlayerGhost__TalkRecept__virtual_43, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00236f78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pays or charges the player the talk's pending bells (positive adds, negative pays), counted in the
// player's counters.
namespace d_00236f78 {

inline constexpr guest::Function<0x002bfadc, u32(u32, u32)> Pockets__add_bells;
inline constexpr guest::Function<0x002bfcfc, u32(u32, u32)> Pockets__pay;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x006b7380, u32(u32, u32)> ClampedCounters__add_to_current_split_0_;
inline constexpr guest::Function<0x006b8918, u32(u32, u32)> ClampedCounters__add_to_current_split_2_;

u32 NpcTalkRecept__apply_bells(gptr<NpcTalkRecept> npc_talk_recept, u32 r1) {
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = npc_talk_recept->half_220;
    if (r0_1 == 1u) {
        u32 player = get_current_player(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 nf_1 = player >> 0x1f;
        u32 zf_1 = player == 0;
        if (!zf_1) {
            r6 = npc_talk_recept->word_21c;
            nf_1 = r6 >> 0x1f;
            zf_1 = r6 == 0;
        }
        if (!zf_1) {
            if (!zf_1 && nf_1 == 0u) {
                u32 counter_block = get_counter_block(Pockets__add_bells(player + 0x6bd0u, r6));
                ClampedCounters__add_to_current_split_0_(counter_block, r6);
            } else {
                u32 r6_1 = 0u - r6;
                u32 counter_block_2 = get_counter_block(Pockets__pay(player + 0x6bd0u, r6_1));
                ClampedCounters__add_to_current_split_2_(counter_block_2, r6_1);
            }
        }
        r1 = 0u;
        r0_1 = 2u;
        npc_talk_recept->word_21c = r1;
        *gptr<u16>((npc_talk_recept.addr() + 0x200u) + 0x20u) = u16(r0_1);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00236f78
GUEST_EXPORT_FRAMED(0x00236f78, d_00236f78::NpcTalkRecept__apply_bells, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00237008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's mode and marks each listener NPC as in a talk.
namespace d_00237008 {


u32 NpcTalkRecept__set_mode_and_mark(gptr<NpcTalkRecept> npc_talk_recept, u32 r1) {
    u32 r0 = npc_talk_recept.addr();
    u32 r0_2 = 0;
    npc_talk_recept->word_214 = r1;
    r1 = npc_talk_recept->word_228;
    u32 r2 = npc_talk_recept->word_22c;
    if (r1 == r2) {
        guest::cpu()->r[1] = r1;
        return (r0 + 0x214u) + 0x14u;
    }
    do {
        r0_2 = *gptr<u32>(*gptr<u32>(r1) + 0xf0u);
        if (r0_2 != 0) {
            u32 ea_2 = r0_2 + 0xb06u;
            r0_2 = ea_2;
            *gptr<u8>(r0_2) = u8(u32(*gptr<u8>(ea_2)) | 0x80u);
        }
        r1 += 4u;
        guest::preempt();
    } while (r1 != r2);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00237008
GUEST_EXPORT(0x00237008, d_00237008::NpcTalkRecept__set_mode_and_mark);

// f_00237a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Pays or charges the player the talk's pending bells (as NpcTalkRecept__apply_bells), at the talk's first
// step.
namespace d_00237a1c {

inline constexpr guest::Function<0x002bfadc, u32(u32, u32)> Pockets__add_bells;
inline constexpr guest::Function<0x002bfcfc, u32(u32, u32)> Pockets__pay;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x006b7380, u32(u32, u32)> ClampedCounters__add_to_current_split_0_;
inline constexpr guest::Function<0x006b8918, u32(u32, u32)> ClampedCounters__add_to_current_split_2_;

u32 NpcTalkRecept__apply_bells_first(gptr<NpcTalkRecept> npc_talk_recept, u32 r1) {
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = npc_talk_recept->half_220;
    if (r0_1 == 0) {
        u32 player = get_current_player(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 nf_1 = player >> 0x1f;
        u32 zf_1 = player == 0;
        if (!zf_1) {
            r6 = npc_talk_recept->word_21c;
            nf_1 = r6 >> 0x1f;
            zf_1 = r6 == 0;
        }
        if (!zf_1) {
            if (!zf_1 && nf_1 == 0u) {
                u32 counter_block = get_counter_block(Pockets__add_bells(player + 0x6bd0u, r6));
                ClampedCounters__add_to_current_split_0_(counter_block, r6);
            } else {
                u32 r6_1 = 0u - r6;
                u32 counter_block_2 = get_counter_block(Pockets__pay(player + 0x6bd0u, r6_1));
                ClampedCounters__add_to_current_split_2_(counter_block_2, r6_1);
            }
        }
        r1 = 0u;
        r0_1 = 2u;
        npc_talk_recept->word_21c = r1;
        *gptr<u16>((npc_talk_recept.addr() + 0x200u) + 0x20u) = u16(r0_1);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00237a1c
GUEST_EXPORT_FRAMED(0x00237a1c, d_00237a1c::NpcTalkRecept__apply_bells_first, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00237d58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the pending text and its value when none is pending; whether it was stored.
namespace d_00237d58 {

struct __attribute__((packed)) NpcTalkReceptSetPendingTextArg0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u32 word_1ac;
    u8 unknown_1b0[0x5f];  // (not used here)
    u8 byte_20f;
};
GUEST_OFFSET(NpcTalkReceptSetPendingTextArg0, word_1ac, 0x1ac);
GUEST_OFFSET(NpcTalkReceptSetPendingTextArg0, byte_20f, 0x20f);

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> SafeString__copy;

u32 NpcTalkRecept__set_pending_text(gptr<NpcTalkReceptSetPendingTextArg0> npc_talk_recept, u32 r1_unused, u32 r2) {
    u32 r0_1 = 0;
    if (npc_talk_recept->byte_20f != 0) {
        r0_1 = 0u;
    } else {
        npc_talk_recept->byte_20f = 1;
        SafeString__copy(npc_talk_recept.addr() + 0x180u, guest::cpu()->r[1], ~0u, guest::cpu()->r[3]);
        r0_1 = 1u;
        npc_talk_recept->word_1ac = r2;
    }
    return r0_1;
}

}  // namespace d_00237d58
GUEST_EXPORT_FRAMED(0x00237d58, d_00237d58::NpcTalkRecept__set_pending_text, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00237dd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a 21-character text word (arg 1) into a talk's target window; 1 when it has one (and the word
// resources are loaded).
namespace d_00237dd0 {

struct __attribute__((packed)) script__WordFix_9u_ {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(script__WordFix_9u_, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_21u__rec = 0x00909d20u;
inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x0056d5dc, u32(u32, u32, u32, u32)> script__WordFix_21u___WordFix_0056d5dc;
inline constexpr guest::Function<0x005f1344, u32(u32, u32)> TalkTarget__set_text;

struct __attribute__((packed)) TalkReceptSetTextWordFrame {
    u32 object_0_vtable;
    u8 unknown_4[0x40];  // (not read or written by name)
    u32 object_44_vtable;
    u8 unknown_48[0x28];  // (not read or written by name)
    u32 object_70_vtable;
    u8 unknown_74[0x28];  // (not read or written by name)
};
GUEST_OFFSET(TalkReceptSetTextWordFrame, object_0_vtable, 0x0);
GUEST_OFFSET(TalkReceptSetTextWordFrame, object_44_vtable, 0x44);
GUEST_OFFSET(TalkReceptSetTextWordFrame, object_70_vtable, 0x70);
GUEST_SIZE(TalkReceptSetTextWordFrame, 0x9c);

u32 TalkRecept__set_text_word(gptr<script__WordFix_9u_> word_fix_9u, u32 r1) {
    guest::StackFrameOf<TalkReceptSetTextWordFrame> frame;  // the original's stack frame
    u32 r0_1 = word_fix_9u->word_4;
    if (r0_1 != 0) {
        u32 talk_target = *gptr<u32>(r0_1 + 0x354u);
        u32 zf_1 = talk_target == 0;
        u32 r0_3 = *word_resources;
        if (!zf_1) {
            zf_1 = r0_3 == 0;
        }
        if (!zf_1) {
            script__WordFix_21u___WordFix_0056d5dc(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            TalkTarget__set_text(talk_target, frame.at(0).addr());
            frame->object_70_vtable = vtable_script__WordFix_9u__rec;
            frame->object_44_vtable = vtable_script__WordFix_9u__rec;
            frame->object_0_vtable = vtable_script__WordFix_21u__rec;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00237dd0
GUEST_EXPORT_FRAMED(0x00237dd0, d_00237dd0::TalkRecept__set_text_word, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002383c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the word fix at the position, numbering it on first use.
namespace d_002383c0 {

struct __attribute__((packed)) NpcTalkReceptStartWordFixArg0 {
    u8 unknown_0[0xe0];  // (not used here)
    u32 word_e0;
    u8 unknown_e4[0x88];  // (not used here)
    u32 word_16c;
    u32 word_170;
    u8 unknown_174[0x8];  // (not used here)
    u32 word_17c;
    u8 unknown_180[0xcc];  // (not used here)
    u32 word_24c;
};
GUEST_OFFSET(NpcTalkReceptStartWordFixArg0, word_e0, 0xe0);
GUEST_OFFSET(NpcTalkReceptStartWordFixArg0, word_16c, 0x16c);
GUEST_OFFSET(NpcTalkReceptStartWordFixArg0, word_170, 0x170);
GUEST_OFFSET(NpcTalkReceptStartWordFixArg0, word_17c, 0x17c);
GUEST_OFFSET(NpcTalkReceptStartWordFixArg0, word_24c, 0x24c);

struct __attribute__((packed)) Local_002383c0_r12_1 {
    u8 unknown_0[0xe0];  // (not used here)
    u32 word_e0;
};
GUEST_OFFSET(Local_002383c0_r12_1, word_e0, 0xe0);

struct __attribute__((packed)) Local_002383c0_r4_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002383c0_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_002383c0_r4_1, float_4, 0x4);

inline constexpr guest::Function<0x00236644, u32(u32, u32, u32, u32)> script__WordFix_9u___WordFix_00236644;

struct __attribute__((packed)) NpcTalkReceptStartWordFixFrame {
    float float_0;
    float float_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(NpcTalkReceptStartWordFixFrame, float_0, 0x0);
GUEST_OFFSET(NpcTalkReceptStartWordFixFrame, float_4, 0x4);
GUEST_OFFSET(NpcTalkReceptStartWordFixFrame, word_8, 0x8);
GUEST_SIZE(NpcTalkReceptStartWordFixFrame, 0x10);

u32 NpcTalkRecept__start_word_fix(gptr<NpcTalkReceptStartWordFixArg0> npc_talk_recept, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<NpcTalkReceptStartWordFixFrame> frame;  // the original's stack frame
    gptr<Local_002383c0_r12_1> r12_1 = gptr<Local_002383c0_r12_1>(npc_talk_recept->word_24c);
    gptr<Local_002383c0_r4_1> r4_1 = gptr<Local_002383c0_r4_1>(frame.at(0x18).addr());
    float S0_1 = r4_1->float_0;
    float S1_1 = r4_1->float_4;
    if ((r12_1.addr() == 0 ? npc_talk_recept->word_e0 : r12_1->word_e0) == 0) {
        npc_talk_recept->word_16c = r3;
        npc_talk_recept->word_17c = 0;
        npc_talk_recept->word_170 = npc_talk_recept.addr();
        u32 r3_1 = (r12_1.addr() == 0 ? npc_talk_recept->word_e0 : r12_1->word_e0) + 1u;
        if (r12_1.addr() == 0) {
            npc_talk_recept->word_e0 = r3_1;
        } else {
            r12_1->word_e0 = r3_1;
        }
    }
    frame->float_0 = S0_1;
    frame->float_4 = S1_1;
    frame->word_8 = 1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return script__WordFix_9u___WordFix_00236644(npc_talk_recept.addr(), guest::cpu()->r[1], guest::cpu()->r[2], npc_talk_recept.addr() + 0x168u);
}

}  // namespace d_002383c0
GUEST_EXPORT_FRAMED(0x002383c0, d_002383c0::NpcTalkRecept__start_word_fix, 0x4010);  // pushes {r4, lr} first, as the original

// f_002389f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's word slot to the fashion word of the index (1 to 10); 0 leaves it.
namespace d_002389f8 {

struct __attribute__((packed)) TalkRecept {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(TalkRecept, word_4, 0x4);

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x005f12b4, u32(u32, u32, u32)> call_target_with_one_0x78_;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> construct_word_res;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> MessageArchive__message;

u32 TalkRecept__set_fashion_word(gptr<TalkRecept> talk_recept, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r1 == 0) {
    } else {
        if (r1 >= 0xbu) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        u32 r0_1 = talk_recept->word_4;
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        u32 zf_1 = r0_2 == 0;
        u32 message_archive = *word_resources;
        if (!zf_1) {
            zf_1 = message_archive == 0;
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        construct_word_res(frame.at(0).addr(), r1, r2, r3);
        MessageArchive__message(message_archive, frame.at(0).addr(), 0x238a84u, r1 - 1u);
        call_target_with_one_0x78_(r0_2, frame.at(0).addr(), 0x238a84u);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_002389f8
GUEST_EXPORT_FRAMED(0x002389f8, d_002389f8::TalkRecept__set_fashion_word, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00238e10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's word slot to the name of the object kind.
namespace d_00238e10 {

struct __attribute__((packed)) TalkRecept {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(TalkRecept, word_4, 0x4);

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x005ca3b0, u32(u32)> signed_byte_88d8e0;
inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32)> call_virtual_28_5f12e4;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> construct_word_res;
inline constexpr guest::Function<0x0075c400, u32(u32, u32, u32, u32)> MessageArchive__message_with_number;

void TalkRecept__set_object_name(gptr<TalkRecept> talk_recept, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = talk_recept->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        u32 zf_1 = r0_2 == 0;
        u32 r4_1 = *word_resources;
        if (!zf_1) {
            zf_1 = r4_1 == 0;
        }
        if (!zf_1) {
            construct_word_res(frame.at(0).addr(), r1, r2, r3);
            u32 r0_4 = signed_byte_88d8e0(r1);
            MessageArchive__message_with_number(r4_1, frame.at(0).addr(), 0x238e9cu, r0_4);
            call_virtual_28_5f12e4(r0_2, frame.at(0).addr(), r2);
            return;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00238e10
GUEST_EXPORT_FRAMED(0x00238e10, d_00238e10::TalkRecept__set_object_name, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00238eac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00238eac {

struct __attribute__((packed)) script__WordFix_9u_ {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(script__WordFix_9u_, word_4, 0x4);

struct __attribute__((packed)) TalkReceptSetVillagerWordArg1 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(TalkReceptSetVillagerWordArg1, half_2c, 0x2c);

inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr u32 item_list_400_address = 0x00a83af0u;
inline guest::global<u32, 0x00a83af0> item_list_400;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x0056d874, u32(u32, u32)> set_villager_entry_word;
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32)> call_target_with_two_0x8c_;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32)> script__construct_word_fix_9;

struct __attribute__((packed)) TalkReceptSetVillagerWordFrame {
    u32 word_0;
    u8 unknown_4[0x28];  // (not read or written by name)
    u16 half_2c;
    u8 unknown_2e[0x2];  // (not read or written by name)
};
GUEST_OFFSET(TalkReceptSetVillagerWordFrame, word_0, 0x0);
GUEST_OFFSET(TalkReceptSetVillagerWordFrame, half_2c, 0x2c);
GUEST_SIZE(TalkReceptSetVillagerWordFrame, 0x30);

u32 TalkRecept__set_villager_word(gptr<script__WordFix_9u_> word_fix_9u, gptr<TalkReceptSetVillagerWordArg1> arg1, u32 r2) {
    guest::StackFrameOf<TalkReceptSetVillagerWordFrame> frame;  // the original's stack frame
    u32 is_villager = is_villager_record(arg1.addr(), arg1.addr(), r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (is_villager != 0) {
        u32 r1_2 = arg1->half_2c;
        frame->half_2c = u16(r1_2);
        u32 r0_2 = word_fix_9u->word_4;
        if (r0_2 == 0) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        u32 r0_3 = *gptr<u32>(r0_2 + 0x354u);
        if (r0_3 == 0) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        u32 r0_4 = frame->half_2c;
        r1_2 = *item_list_400;
        u32 zf_1 = r1_2 == 0;
        u32 cf_1 = r1_2 >= 0u;
        if (!zf_1) {
            r2_1 = 0x18fu;
            zf_1 = r2_1 == r0_4;
            cf_1 = r2_1 >= r0_4;
        }
        if (!cf_1 || zf_1) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        if ((r1_2 + r0_4 * 0x22u) == 0) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        u32 r0_6 = script__construct_word_fix_9(frame.at(0).addr(), r1_2, r2_1);
        set_villager_entry_word(r0_6, frame.at(0x2c).addr());
        call_target_with_two_0x8c_(r0_3, frame.at(0).addr(), r2);
        r1_1 = vtable_script__WordFix_9u__rec;
        frame->word_0 = r1_1;
        is_villager = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return is_villager;
}

}  // namespace d_00238eac
GUEST_EXPORT_FRAMED(0x00238eac, d_00238eac::TalkRecept__set_villager_word, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00238f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's word slot to the name of the map structure's group.
namespace d_00238f7c {

struct __attribute__((packed)) TalkRecept {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(TalkRecept, word_4, 0x4);

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x005ca3c8, u32(u32)> map_structure_group;
inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32)> call_virtual_28_5f12e4;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> construct_word_res;
inline constexpr guest::Function<0x0075c400, u32(u32, u32, u32, u32)> MessageArchive__message_with_number;

void TalkRecept__set_structure_name(gptr<TalkRecept> talk_recept, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = talk_recept->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        u32 zf_1 = r0_2 == 0;
        u32 r4_1 = *word_resources;
        if (!zf_1) {
            zf_1 = r4_1 == 0;
        }
        if (!zf_1) {
            construct_word_res(frame.at(0).addr(), r1, r2, r3);
            u32 r0_4 = map_structure_group(r1);
            MessageArchive__message_with_number(r4_1, frame.at(0).addr(), 0x239008u, r0_4);
            call_virtual_28_5f12e4(r0_2, frame.at(0).addr(), r2);
            return;
        }
    }
}

}  // namespace d_00238f7c
GUEST_EXPORT_FRAMED(0x00238f7c, d_00238f7c::TalkRecept__set_structure_name, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002390f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a 33-character word (arg 1) into a shop NPC's talk window; 1 when it has one.
namespace d_002390f8 {

inline constexpr u32 vtable_script__WordFix_33u__rec = 0x00909f18u;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> construct_word_fix_33_into_text_box;
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32)> call_target_with_two_0x94_;

struct __attribute__((packed)) ShopNpcTalkReceptSetWordFrame {
    u32 object_0_vtable;
    u8 unknown_4[0x5c];  // (not read or written by name)
};
GUEST_OFFSET(ShopNpcTalkReceptSetWordFrame, object_0_vtable, 0x0);
GUEST_SIZE(ShopNpcTalkReceptSetWordFrame, 0x60);

u32 ShopNpcTalkRecept__set_word(gptr<AcNpcSpShop__ShopNpcTalkRecept> shop_npc_talk_recept, u32 r1, u32 r2) {
    guest::StackFrameOf<ShopNpcTalkReceptSetWordFrame> frame;  // the original's stack frame
    u32 r0_1 = shop_npc_talk_recept->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        if (r0_2 != 0) {
            call_target_with_two_0x94_(r0_2, construct_word_fix_33_into_text_box(frame.at(0).addr(), r1, 0u, guest::cpu()->r[3]), r2);
            frame->object_0_vtable = vtable_script__WordFix_33u__rec;
            guest::cpu()->r[1] = vtable_script__WordFix_33u__rec;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002390f8
GUEST_EXPORT_FRAMED(0x002390f8, d_002390f8::ShopNpcTalkRecept__set_word, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00239174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00239174 {

struct __attribute__((packed)) script__WordFix_9u_ {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(script__WordFix_9u_, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr u32 item_list_400_address = 0x00a83af0u;
inline guest::global<u32, 0x00a83af0> item_list_400;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> villager_record_at;
inline constexpr guest::Function<0x00301e20, u32(u32, u32)> is_villager_record;
inline constexpr guest::Function<0x0056d874, u32(u32, u32)> set_villager_entry_word;
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32)> call_target_with_two_0x8c_;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32)> script__construct_word_fix_9;

struct __attribute__((packed)) TalkReceptSetVillagerWordAtFrame {
    u32 word_0;
    u8 unknown_4[0x28];  // (not read or written by name)
    u16 half_2c;
    u8 unknown_2e[0x2];  // (not read or written by name)
};
GUEST_OFFSET(TalkReceptSetVillagerWordAtFrame, word_0, 0x0);
GUEST_OFFSET(TalkReceptSetVillagerWordAtFrame, half_2c, 0x2c);
GUEST_SIZE(TalkReceptSetVillagerWordAtFrame, 0x30);

u32 TalkRecept__set_villager_word_at(gptr<script__WordFix_9u_> word_fix_9u, u32 r1, u32 r2) {
    guest::StackFrameOf<TalkReceptSetVillagerWordAtFrame> frame;  // the original's stack frame
    u32 save_data = get_save_data(word_fix_9u.addr(), r1, r2, guest::cpu()->r[3]);
    u32 villager_record = villager_record_at(save_data + 0x292a4u, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (villager_record != 0) {
        u32 r4_1 = villager_record;
        villager_record = is_villager_record(villager_record, r1_1);
        r1_1 = guest::cpu()->r[1];
        u32 r2_3 = guest::cpu()->r[2];
        if (villager_record != 0) {
            u32 r1_2 = *gptr<u16>(r4_1 + 0x2cu);
            frame->half_2c = u16(r1_2);
            u32 r0_4 = word_fix_9u->word_4;
            if (r0_4 == 0) {
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            u32 r0_5 = *gptr<u32>(r0_4 + 0x354u);
            if (r0_5 == 0) {
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            u32 r0_6 = frame->half_2c;
            r1_2 = *item_list_400;
            u32 zf_1 = r1_2 == 0;
            u32 cf_1 = r1_2 >= 0u;
            if (!zf_1) {
                r2_3 = 0x18fu;
                zf_1 = r2_3 == r0_6;
                cf_1 = r2_3 >= r0_6;
            }
            if (!cf_1 || zf_1) {
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            if ((r1_2 + r0_6 * 0x22u) == 0) {
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            u32 r0_8 = script__construct_word_fix_9(frame.at(0).addr(), r1_2, r2_3);
            set_villager_entry_word(r0_8, frame.at(0x2c).addr());
            call_target_with_two_0x8c_(r0_5, frame.at(0).addr(), r2);
            r1_1 = vtable_script__WordFix_9u__rec;
            frame->word_0 = r1_1;
            villager_record = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return villager_record;
}

}  // namespace d_00239174
GUEST_EXPORT_FRAMED(0x00239174, d_00239174::TalkRecept__set_villager_word_at, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00239260: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00239260 {

struct __attribute__((packed)) script__WordFix_9u_ {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(script__WordFix_9u_, word_4, 0x4);

struct __attribute__((packed)) Local_00239260_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00239260_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00239260_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00239260_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00239260_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00239260_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00239260_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00239260_ea_1, word_18, 0x18);

struct __attribute__((packed)) Local_00239260_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00239260_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00239260_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00239260_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00239260_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_00239260_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00239260_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00239260_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00239260_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_00239260_ea_3, word_c, 0xc);

inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr u32 item_list_400_address = 0x00a83af0u;
inline guest::global<u32, 0x00a83af0> item_list_400;
inline constexpr guest::Function<0x0056d874, u32(u32, u32)> set_villager_entry_word;
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32)> call_target_with_two_0x8c_;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> script__construct_word_fix_9;

struct __attribute__((packed)) ScriptWordFix9uWordFix00239260Frame {
    u32 object_0_vtable;
    u8 unknown_4[0x2c];  // (not read or written by name)
    u16 half_30;
    u8 unknown_32[0x16];  // (not read or written by name)
};
GUEST_OFFSET(ScriptWordFix9uWordFix00239260Frame, object_0_vtable, 0x0);
GUEST_OFFSET(ScriptWordFix9uWordFix00239260Frame, half_30, 0x30);
GUEST_SIZE(ScriptWordFix9uWordFix00239260Frame, 0x48);

u32 script__WordFix_9u___WordFix_00239260(gptr<script__WordFix_9u_> word_fix_9u, u32 r1, u32 r2) {
    guest::StackFrameOf<ScriptWordFix9uWordFix00239260Frame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00239260_ea_1> ea_1 = gptr<Local_00239260_ea_1>(frame.at(0x2c).addr());
    ea_1->word_0 = word_fix_9u.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r14;
    u32 r6_1 = r2;
    u32 r0_1 = word_fix_9u->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        if (r0_2 != 0) {
            u32 r0_3 = frame->half_30;
            r1 = *item_list_400;
            u32 zf_1 = r1 == 0;
            u32 cf_1 = r1 >= 0u;
            if (!zf_1) {
                r2 = 0x18fu;
                zf_1 = r2 == r0_3;
                cf_1 = r2 >= r0_3;
            }
            if (cf_1 && !zf_1) {
                if ((r1 + r0_3 * 0x22u) != 0) {
                    u32 r0_5 = script__construct_word_fix_9(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
                    set_villager_entry_word(r0_5, frame.at(0x30).addr());
                    call_target_with_two_0x8c_(r0_2, frame.at(0).addr(), r6_1);
                    frame->object_0_vtable = vtable_script__WordFix_9u__rec;
                    gptr<Local_00239260_ea_2> ea_2 = gptr<Local_00239260_ea_2>(frame.at(0x38).addr());
                    u32 r4_1 = ea_2->word_0;
                    u32 r5_2 = ea_2->word_4;
                    u32 r6_2 = ea_2->word_8;
                    guest::cpu()->r[1] = vtable_script__WordFix_9u__rec;
                    guest::cpu()->r[4] = r4_1;
                    guest::cpu()->r[5] = r5_2;
                    guest::cpu()->r[6] = r6_2;
                    return 1u;
                }
            }
        }
    }
    gptr<Local_00239260_ea_3> ea_3 = gptr<Local_00239260_ea_3>(frame.at(0x38).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_3 = ea_3->word_4;
    u32 r6_3 = ea_3->word_8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    return 0u;
}

}  // namespace d_00239260
GUEST_EXPORT(0x00239260, d_00239260::script__WordFix_9u___WordFix_00239260);

// f_0023930c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a nine-character word (arg 1) into an NPC's talk window; 1 when it has one.
namespace d_0023930c {

inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr guest::Function<0x0056e04c, u32(u32, u32)> script__WordCPtrSv__WordCPtrSv_0056e04c;
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32)> call_virtual_24_5f12f4;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> script__construct_word_fix_9;

struct __attribute__((packed)) NpcTalkReceptSetWordFrame {
    u32 object_0_vtable;
    u8 unknown_4[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(NpcTalkReceptSetWordFrame, object_0_vtable, 0x0);
GUEST_SIZE(NpcTalkReceptSetWordFrame, 0x30);

u32 NpcTalkRecept__set_word(gptr<NpcTalkRecept> npc_talk_recept, u32 r1, u32 r2) {
    guest::StackFrameOf<NpcTalkReceptSetWordFrame> frame;  // the original's stack frame
    u32 r0_1 = npc_talk_recept->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        if (r0_2 != 0) {
            script__WordCPtrSv__WordCPtrSv_0056e04c(script__construct_word_fix_9(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]), r1);
            call_virtual_24_5f12f4(r0_2, frame.at(0).addr(), r2);
            frame->object_0_vtable = vtable_script__WordFix_9u__rec;
            guest::cpu()->r[1] = vtable_script__WordFix_9u__rec;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0023930c
GUEST_EXPORT_FRAMED(0x0023930c, d_0023930c::NpcTalkRecept__set_word, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00239738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's word slot to the impression word for the person's gender; whether there was a talk to set.
namespace d_00239738 {

struct __attribute__((packed)) TalkRecept {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(TalkRecept, word_4, 0x4);

struct __attribute__((packed)) TalkReceptSetImpressionWordArg1 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(TalkReceptSetImpressionWordArg1, byte_14, 0x14);

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x005f1324, u32(u32, u32, u32)> call_virtual_26_5f1324;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> construct_word_res;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> MessageArchive__message;

u32 TalkRecept__set_impression_word(gptr<TalkRecept> talk_recept, gptr<TalkReceptSetImpressionWordArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = talk_recept->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        u32 zf_1 = r0_2 == 0;
        u32 message_archive = *word_resources;
        if (!zf_1) {
            zf_1 = message_archive == 0;
        }
        if (!zf_1) {
            construct_word_res(frame.at(0).addr(), arg1.addr(), r2, r3);
            MessageArchive__message(message_archive, frame.at(0).addr(), (u32(arg1->byte_14) & 1u) == 0 ? 0x2397ccu : 0x2397dcu, r2);
            call_virtual_26_5f1324(r0_2, frame.at(0).addr(), r3);
            return 1u;
        }
    }
    guest::cpu()->r[1] = arg1.addr();
    return 0u;
}

}  // namespace d_00239738
GUEST_EXPORT_FRAMED(0x00239738, d_00239738::TalkRecept__set_impression_word, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002397ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's word slot to the player's impression word for their gender.
namespace d_002397ec {

struct __attribute__((packed)) TalkRecept {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(TalkRecept, word_4, 0x4);

struct __attribute__((packed)) TalkReceptSetPlayerImpressionWordArg1 {
    u8 unknown_0[0x55ba];  // (not used here)
    u8 byte_55ba;
};
GUEST_OFFSET(TalkReceptSetPlayerImpressionWordArg1, byte_55ba, 0x55ba);

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x005f1324, u32(u32, u32, u32)> call_virtual_26_5f1324;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> construct_word_res;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> MessageArchive__message;
inline constexpr guest::Function<0x007703ac, u32(u32)> Player__impression_value;

void TalkRecept__set_player_impression_word(gptr<TalkRecept> talk_recept, gptr<TalkReceptSetPlayerImpressionWordArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = talk_recept->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        u32 zf_1 = r0_2 == 0;
        u32 message_archive = *word_resources;
        if (!zf_1) {
            zf_1 = message_archive == 0;
        }
        if (!zf_1) {
            construct_word_res(frame.at(0).addr(), arg1.addr(), r2, r3);
            u32 r0_4 = Player__impression_value(arg1.addr());
            u32 r5_1 = arg1.addr() + 0x55bau;
            MessageArchive__message(message_archive, frame.at(0).addr(), (u32(arg1->byte_55ba) & 1u) == 0 ? 0x23988cu : 0x23989cu, r0_4);
            call_virtual_26_5f1324(r0_2, frame.at(0).addr(), r2);
            return;
        }
    }
    guest::cpu()->r[1] = arg1.addr();
}

}  // namespace d_002397ec
GUEST_EXPORT_FRAMED(0x002397ec, d_002397ec::TalkRecept__set_player_impression_word, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002398ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a nine-character name word (from a name record, arg 1) into a special NPC's talk window; 1 when it
// has one.
namespace d_002398ac {

struct __attribute__((packed)) NpcSpTalkReceptSetWordArg1 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(NpcSpTalkReceptSetWordArg1, byte_14, 0x14);

inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32)> Object__virtual_34;
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32)> TextBox__set_word_9;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> script__construct_word_fix_9;

struct __attribute__((packed)) NpcSpTalkReceptSetWordFrame {
    u32 object_0_vtable;
    u8 unknown_4[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(NpcSpTalkReceptSetWordFrame, object_0_vtable, 0x0);
GUEST_SIZE(NpcSpTalkReceptSetWordFrame, 0x30);

u32 NpcSpTalkRecept__set_word(gptr<NpcSpTalkRecept> npc_sp_talk_recept, gptr<NpcSpTalkReceptSetWordArg1> arg1, u32 r2) {
    guest::StackFrameOf<NpcSpTalkReceptSetWordFrame> frame;  // the original's stack frame
    u32 r0_1 = npc_sp_talk_recept->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        if (r0_2 != 0) {
            u32 r0_4 = script__construct_word_fix_9(frame.at(0).addr(), arg1.addr(), r2, guest::cpu()->r[3]);
            TextBox__set_word_9(r0_4, arg1.addr() + 2u, u32(arg1->byte_14) & 1u);
            Object__virtual_34(r0_2, frame.at(0).addr(), r2);
            frame->object_0_vtable = vtable_script__WordFix_9u__rec;
            guest::cpu()->r[1] = vtable_script__WordFix_9u__rec;
            return 1u;
        }
    }
    guest::cpu()->r[1] = arg1.addr();
    return 0u;
}

}  // namespace d_002398ac
GUEST_EXPORT_FRAMED(0x002398ac, d_002398ac::NpcSpTalkRecept__set_word, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00239cd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When idle (4): starts turning (mode 3) toward the player, with the flag.
namespace d_00239cd0 {

struct __attribute__((packed)) TalkTurn {
    u32 word_0;
    u8 unknown_4[0xa];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x3];  // (not used here)
    u8 byte_17;
};
GUEST_OFFSET(TalkTurn, word_0, 0x0);
GUEST_OFFSET(TalkTurn, byte_e, 0xe);
GUEST_OFFSET(TalkTurn, half_10, 0x10);
GUEST_OFFSET(TalkTurn, half_12, 0x12);
GUEST_OFFSET(TalkTurn, byte_17, 0x17);

inline guest::global<u16, 0x009537c2> player_angle_y;
inline constexpr guest::Function<0x0023a680, u32(u32, u32, u32, u32)> TalkTurn__update;

u32 TalkTurn__start_mode_3(gptr<TalkTurn> talk_turn, u32 r1) {
    u32 r0_1 = 0;
    TalkTurn__update(talk_turn.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (talk_turn->byte_e != 4u) {
        r0_1 = 0u;
    } else {
        talk_turn->byte_e = 3;
        talk_turn->half_12 = *player_angle_y;
        talk_turn->half_10 = *gptr<u16>(*gptr<u32>(talk_turn->word_0 + 0xf0u) + 0x2eu);
        r0_1 = 1u;
        talk_turn->byte_17 = u8(r1);
    }
    return r0_1;
}

}  // namespace d_00239cd0
GUEST_EXPORT_FRAMED(0x00239cd0, d_00239cd0::TalkTurn__start_mode_3, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023a200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When idle (4): starts turning (mode 1) toward the player, with the flag.
namespace d_0023a200 {

struct __attribute__((packed)) TalkTurn {
    u32 word_0;
    u8 unknown_4[0xa];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x3];  // (not used here)
    u8 byte_17;
};
GUEST_OFFSET(TalkTurn, word_0, 0x0);
GUEST_OFFSET(TalkTurn, byte_e, 0xe);
GUEST_OFFSET(TalkTurn, half_10, 0x10);
GUEST_OFFSET(TalkTurn, half_12, 0x12);
GUEST_OFFSET(TalkTurn, byte_17, 0x17);

inline guest::global<u16, 0x009537c2> player_angle_y;
inline constexpr guest::Function<0x0023a680, u32(u32, u32, u32, u32)> TalkTurn__update;

u32 TalkTurn__start_mode_1(gptr<TalkTurn> talk_turn, u32 r1) {
    u32 r0_1 = 0;
    TalkTurn__update(talk_turn.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (talk_turn->byte_e != 4u) {
        r0_1 = 0u;
    } else {
        talk_turn->byte_e = 1;
        talk_turn->half_12 = *player_angle_y;
        talk_turn->half_10 = *gptr<u16>(*gptr<u32>(talk_turn->word_0 + 0xf0u) + 0x2eu);
        r0_1 = 1u;
        talk_turn->byte_17 = u8(r1);
    }
    return r0_1;
}

}  // namespace d_0023a200
GUEST_EXPORT_FRAMED(0x0023a200, d_0023a200::TalkTurn__start_mode_1, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023a254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When idle (4): starts turning (mode 0) toward the object at the speed.
namespace d_0023a254 {

struct __attribute__((packed)) TalkTurn {
    u32 word_0;
    u8 unknown_4[0xa];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x3];  // (not used here)
    u8 byte_17;
};
GUEST_OFFSET(TalkTurn, word_0, 0x0);
GUEST_OFFSET(TalkTurn, byte_e, 0xe);
GUEST_OFFSET(TalkTurn, half_10, 0x10);
GUEST_OFFSET(TalkTurn, half_12, 0x12);
GUEST_OFFSET(TalkTurn, byte_17, 0x17);

inline constexpr guest::Function<0x0023a680, u32(u32, u32, u32, u32)> TalkTurn__update;
inline constexpr guest::Function<0x007521a4, u32(u32, u32, u32)> angle_to_object;

u32 TalkTurn__start_toward(gptr<TalkTurn> talk_turn, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    TalkTurn__update(talk_turn.addr(), r1, r2, r3);
    u32 r0_1 = 0u;
    if (talk_turn->byte_e == 4u) {
        talk_turn->byte_e = u8(r0_1);
        talk_turn->half_12 = u16(r2);
        *frame.at<u32>(0) = angle_to_object(*gptr<u32>(talk_turn->word_0 + 0xf0u), r1, r2);
        talk_turn->half_10 = *frame.at<u16>(0);
        r0_1 = 1u;
        talk_turn->byte_17 = u8(r0_1);
    }
    return r0_1;
}

}  // namespace d_0023a254
GUEST_EXPORT_FRAMED(0x0023a254, d_0023a254::TalkTurn__start_toward, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0023a440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Begins the end action of the talking NPC and of each listener still in their talk idle (action 0xc); whether any
// began.
namespace d_0023a440 {

struct __attribute__((packed)) TalkRecept {
    u32 word_0;
};
GUEST_OFFSET(TalkRecept, word_0, 0x0);

struct __attribute__((packed)) Local_0023a440_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a440_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0023a440_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0023a440_r0_1 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
    u8 unknown_a9[0x4ab];  // (not used here)
    u8 byte_554;
};
GUEST_OFFSET(Local_0023a440_r0_1, byte_a8, 0xa8);
GUEST_OFFSET(Local_0023a440_r0_1, byte_554, 0x554);

struct __attribute__((packed)) Local_0023a440_r0_4 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
    u8 unknown_a9[0x4ab];  // (not used here)
    u8 byte_554;
};
GUEST_OFFSET(Local_0023a440_r0_4, byte_a8, 0xa8);
GUEST_OFFSET(Local_0023a440_r0_4, byte_554, 0x554);

inline constexpr guest::Function<0x006eb990, u32(u32, u32, u32, u32)> begin_action_0c;

u32 TalkRecept__end_listeners_idle(gptr<TalkRecept> talk_recept, float S0) {
    u32 r0 = talk_recept.addr();
    u32 r6 = 0x88069cu;
    u32 r1 = 0u;
    gptr<Local_0023a440_r0_1> r0_1 = gptr<Local_0023a440_r0_1>(*gptr<u32>(talk_recept->word_0 + 0xf0u));
    if (r0_1->byte_a8 == 0xcu && r0_1->byte_554 == 0) {
        float S0_1 = std::bit_cast<float>(*gptr<u32>(r6));
        guest::cpu()->s[0] = S0_1;
        begin_action_0c(r0_1.addr() + 0x78u, 0u, 0u, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        r1 = 1u;
    }
    gptr<Local_0023a440_ea_1> ea_1 = gptr<Local_0023a440_ea_1>(*gptr<u32>(r0) + 0x228u);
    u32 r4 = ea_1->word_0;
    u32 r5 = ea_1->word_4;
    if (r4 != r5) {
        do {
            u32 r0_3 = *gptr<u32>(r4);
            if (r0_3 != 0) {
                gptr<Local_0023a440_r0_4> r0_4 = gptr<Local_0023a440_r0_4>(*gptr<u32>(r0_3 + 0xf0u));
                if (r0_4->byte_a8 == 0xcu && r0_4->byte_554 == 0) {
                    float S0_2 = std::bit_cast<float>(*gptr<u32>(r6));
                    guest::cpu()->s[0] = S0_2;
                    begin_action_0c(r0_4.addr() + 0x78u, 0u, 0u, guest::cpu()->r[3]);
                    S0 = guest::cpu()->s[0];
                    r1 = 1u;
                }
            }
            r4 += 4u;
            guest::preempt();
        } while (r4 != r5);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r1;
}

}  // namespace d_0023a440
GUEST_EXPORT_FRAMED(0x0023a440, d_0023a440::TalkRecept__end_listeners_idle, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023a9dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an NPC talk receptor: a talk receptor with a flow receptor, a particle handle, its save hook
// and label, and its flags.
namespace d_0023a9dc {

struct __attribute__((packed)) Local_0023a9dc_ea_18 {
    u32 vtable;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_ea_18, vtable, 0x0);
GUEST_OFFSET(Local_0023a9dc_ea_18, word_4, 0x4);

struct __attribute__((packed)) Local_0023a9dc_ea_35 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_ea_35, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_ea_35, word_4, 0x4);

struct __attribute__((packed)) Local_0023a9dc_ea_36 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_ea_36, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_ea_36, word_4, 0x4);

struct __attribute__((packed)) Local_0023a9dc_ea_37 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_ea_37, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_ea_37, word_4, 0x4);

struct __attribute__((packed)) Local_0023a9dc_ea_44 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_ea_44, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_ea_44, word_4, 0x4);

struct __attribute__((packed)) Local_0023a9dc_r0_12 {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Local_0023a9dc_r0_12, half_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_r0_12, byte_2, 0x2);

struct __attribute__((packed)) Local_0023a9dc_r0_13 {
    u32 word_0;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Local_0023a9dc_r0_13, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_r0_13, word_24, 0x24);
GUEST_OFFSET(Local_0023a9dc_r0_13, word_28, 0x28);
GUEST_OFFSET(Local_0023a9dc_r0_13, word_2c, 0x2c);
GUEST_OFFSET(Local_0023a9dc_r0_13, byte_30, 0x30);
GUEST_OFFSET(Local_0023a9dc_r0_13, word_34, 0x34);

struct __attribute__((packed)) Local_0023a9dc_r0_15 {
    u8 unknown_0[0xec];  // (not used here)
    u16 half_ec;
    u16 half_ee;
};
GUEST_OFFSET(Local_0023a9dc_r0_15, half_ec, 0xec);
GUEST_OFFSET(Local_0023a9dc_r0_15, half_ee, 0xee);

struct __attribute__((packed)) Local_0023a9dc_r0_3 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
    u8 byte_1b;
    u8 byte_1c;
    u8 byte_1d;
    u8 unknown_1e[0x2];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Local_0023a9dc_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_18, 0x18);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_19, 0x19);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_1a, 0x1a);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_1b, 0x1b);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_1c, 0x1c);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_1d, 0x1d);
GUEST_OFFSET(Local_0023a9dc_r0_3, word_20, 0x20);

struct __attribute__((packed)) Local_0023a9dc_r0_9 {
    u32 vtable;
};
GUEST_OFFSET(Local_0023a9dc_r0_9, vtable, 0x0);

struct __attribute__((packed)) Local_0023a9dc_r1_1 {
    u32 vtable;
    u8 unknown_4[0x78];  // (not used here)
    u32 npc_talk_recept_vtable;
    u8 unknown_80[0x70];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x8];  // (not used here)
    u32 word_fc;
    u8 byte_100;
    u8 byte_101;
    u8 byte_102;
    u8 unknown_103[0x5];  // (not used here)
    u8 byte_108;
    u8 byte_109;
    u8 byte_10a;
    u8 byte_10b;
};
GUEST_OFFSET(Local_0023a9dc_r1_1, vtable, 0x0);
GUEST_OFFSET(Local_0023a9dc_r1_1, npc_talk_recept_vtable, 0x7c);
GUEST_OFFSET(Local_0023a9dc_r1_1, word_f0, 0xf0);
GUEST_OFFSET(Local_0023a9dc_r1_1, word_fc, 0xfc);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_100, 0x100);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_101, 0x101);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_102, 0x102);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_108, 0x108);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_109, 0x109);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_10a, 0x10a);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_10b, 0x10b);

struct __attribute__((packed)) Local_0023a9dc_r4_1 {
    u8 unknown_0[0x1c4];  // (not used here)
    u32 word_1c4;
    u8 unknown_1c8[0x28];  // (not used here)
    u8 byte_1f0;
    u8 byte_1f1;
    u8 byte_1f2;
    u8 unknown_1f3[0x2f];  // (not used here)
    u16 half_222;
    u16 half_224;
    u8 byte_226;
};
GUEST_OFFSET(Local_0023a9dc_r4_1, word_1c4, 0x1c4);
GUEST_OFFSET(Local_0023a9dc_r4_1, byte_1f0, 0x1f0);
GUEST_OFFSET(Local_0023a9dc_r4_1, byte_1f1, 0x1f1);
GUEST_OFFSET(Local_0023a9dc_r4_1, byte_1f2, 0x1f2);
GUEST_OFFSET(Local_0023a9dc_r4_1, half_222, 0x222);
GUEST_OFFSET(Local_0023a9dc_r4_1, half_224, 0x224);
GUEST_OFFSET(Local_0023a9dc_r4_1, byte_226, 0x226);

struct __attribute__((packed)) Local_0023a9dc_r8_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_r8_3, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_r8_3, word_4, 0x4);

inline constexpr u32 vtable_NpcTalkRecept = 0x008ee3a0u;
inline constexpr u32 vtable_NpcTalkRecept_at_7c = 0x008ee4e8u;
inline constexpr u32 vtable_NpcTalkRecept__AsyncSaveHandleHook = 0x008fa34cu;
inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__32_ = 0x00905120u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u32, 0x0088069c> global_0088069c;
inline guest::global<u32, 0x00881374> global_00881374;
inline guest::global<u32, 0x00881378> global_00881378;
inline guest::global<u32, 0x0088137c> global_0088137c;
inline guest::global<u32, 0x00881380> global_00881380;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x003166a8, u32(u32, u32, u32, u32)> construct_sead_particle_handle;
inline constexpr guest::Function<0x005dd230, u32(u32, u32)> construct_flow_recept;
inline constexpr guest::Function<0x005dd69c, u32(u32, u32, u32, u32)> construct_talk_recept;
inline constexpr guest::Function<0x00813b30, u32(u32, u32, u32)> set_flag_below_19;

u32 NpcTalkRecept__NpcTalkRecept(u32 npc_talk_recept, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = construct_talk_recept(npc_talk_recept, r1, r2, r3);
    u32 r0_2 = r0_1 + 0x7cu;
    construct_flow_recept(r0_2, r0_1);
    gptr<Local_0023a9dc_r1_1> r1_1 = gptr<Local_0023a9dc_r1_1>(r0_2 - 0x7cu);
    r1_1->npc_talk_recept_vtable = vtable_NpcTalkRecept_at_7c;
    r1_1->vtable = vtable_NpcTalkRecept;
    gptr<Local_0023a9dc_r0_3> r0_3 = gptr<Local_0023a9dc_r0_3>(r1_1.addr() + 0xf4u);
    r1_1->word_f0 = r1;
    r0_3->word_0 = r1_1.addr();
    r0_3->word_4 = 0;
    r1_1->word_fc = 0;
    r1_1->byte_100 = 0;
    r1_1->byte_101 = 4;
    r1_1->byte_102 = 4;
    *gptr<u16>(r1_1.addr() + 0x104u) = 0;
    *gptr<u16>((0x104u | u32(s32(0x104u) >> 7)) + r1_1.addr()) = 0;
    r1_1->byte_108 = 0;
    r1_1->byte_109 = 0;
    r1_1->byte_10a = 0;
    r1_1->byte_10b = 1;
    r0_3->byte_18 = 0;
    r0_3->byte_19 = 0;
    r0_3->byte_1a = 0;
    r0_3->byte_1b = 0;
    r0_3->byte_1c = 5;
    r0_3->byte_1d = 2;
    u32 r2_2 = *global_0088069c;
    r0_3->word_20 = r2_2;
    u32 r0_4 = r1_1.addr() + 0x118u;
    construct_sead_particle_handle(r0_4, r1_1.addr(), r2_2, 5u);
    u32 r0_5 = r0_4 + 0x18u;
    Item__copy_b(r0_5, empty_item_address);
    u32 r0_6 = r0_5 + 4u;
    Item__copy_b(r0_6, empty_item_address);
    u32 r0_7 = r0_6 - 0x1cu;
    *gptr<u8>(r0_7 + 0x20u) = 0;
    *gptr<u8>(r0_7 + 0x21u) = 0;
    *gptr<u32>(r0_7 + 0x24u) = 0x67;
    *gptr<u16>(r0_7 + 0x28u) = 0x1a;
    *gptr<u16>(r0_7 + 0x2au) = 0;
    *gptr<u16>(r0_7 + 0x2cu) = 0;
    *gptr<u16>(r0_7 + 0x2eu) = 0;
    *gptr<u16>(r0_7 + 0x30u) = 0;
    *gptr<u8>(r0_7 + 0x32u) = 0;
    *gptr<u8>(r0_7 + 0x33u) = 0;
    u32 r1_2 = r0_7 - 0x118u;
    *gptr<u32>(r0_7 + 0x34u) = 0;
    u32 ea_12 = r0_7 + 0x38u;
    *gptr<u8>(ea_12) = 0x17;
    *gptr<u32>(ea_12 + 4u) = 0;
    *gptr<u32>(r1_2 + 0x158u) = 0;
    *gptr<u32>(r1_2 + 0x15cu) = 0;
    *gptr<u32>(r1_2 + 0x160u) = 0;
    *gptr<u32>(r1_2 + 0x164u) = 0;
    gptr<Local_0023a9dc_ea_18> ea_18 = gptr<Local_0023a9dc_ea_18>(r1_2 + 0x168u);
    ea_18->vtable = vtable_NpcTalkRecept__AsyncSaveHandleHook;
    ea_18->word_4 = 0;
    *gptr<u32>(r1_2 + 0x170u) = 0;
    *gptr<u8>(r1_2 + 0x174u) = 0;
    *gptr<u32>(r1_2 + 0x178u) = 0;
    *gptr<u32>(r1_2 + 0x17cu) = 0;
    *gptr<u32>(r1_2 + 0x184u) = r1_2 + 0x18cu;
    *gptr<u32>(r1_2 + 0x188u) = 0x20;
    *gptr<u32>(r1_2 + 0x180u) = vtable_sead__BufferedSafeStringBase_char_;
    u32 r14 = *gptr<u32>(r1_2 + 0x184u);
    u32 r0_8 = r1_2 + 0x180u;
    *gptr<u8>(r14 + 0x1fu) = *empty_string;
    r14 = vtable_sead__FixedSafeStringBase_char__32_;
    *gptr<u32>(r1_2 + 0x180u) = r14;
    *gptr<u8>(*gptr<u32>(r1_2 + 0x184u)) = *empty_string;
    u32 r3_4 = ~0u;
    *gptr<u32>(r0_8) = vtable_sead__FixedSafeString_32_;
    gptr<Local_0023a9dc_r0_9> r0_9 = gptr<Local_0023a9dc_r0_9>(r0_8 + 0x40u);
    *gptr<u32>(r1_2 + 0x1acu) = r3_4;
    *gptr<u32>(r0_9.addr() + 4u) = r0_9.addr() + 0xcu;
    r0_9->vtable = vtable_sead__BufferedSafeStringBase_char_;
    *gptr<u32>(r0_9.addr() + 8u) = 0x20;
    u32 r8_2 = *empty_string;
    *gptr<u8>(r0_9.addr() + 0xbu + 0x20u) = u8(r8_2);
    r0_9->vtable = r14;
    r14 = *gptr<u32>(r0_9.addr() + 4u);
    u32 r12_1 = *empty_string;
    *gptr<u8>(r14) = u8(r12_1);
    r0_9->vtable = vtable_sead__FixedSafeString_32_;
    u32 r0_10 = r0_9.addr() - 0x1c0u;
    u32 r12_2 = *global_00881374;
    r14 = *global_00881378;
    gptr<Local_0023a9dc_ea_35> ea_35 = gptr<Local_0023a9dc_ea_35>(r0_10 + 0x1f4u);
    ea_35->word_0 = r12_2;
    ea_35->word_4 = r14;
    u32 r12_3 = *global_0088137c;
    r14 = *global_00881380;
    u32 r1_3 = r0_10 + 0x200u;
    gptr<Local_0023a9dc_ea_36> ea_36 = gptr<Local_0023a9dc_ea_36>(r0_10 + 0x204u);
    ea_36->word_0 = r3_4;
    ea_36->word_4 = 0;
    gptr<Local_0023a9dc_ea_37> ea_37 = gptr<Local_0023a9dc_ea_37>(r0_10 + 0x1fcu);
    ea_37->word_0 = r12_3;
    ea_37->word_4 = r14;
    gptr<Local_0023a9dc_r8_3> r8_3 = gptr<Local_0023a9dc_r8_3>(r0_10 + 0x214u);
    *gptr<u8>(r0_10 + 0x20cu) = 0;
    *gptr<u8>(r0_10 + 0x20du) = 0;
    *gptr<u8>(r0_10 + 0x20eu) = 0;
    *gptr<u8>(r0_10 + 0x20fu) = 0;
    *gptr<u8>(r0_10 + 0x210u) = 0;
    *gptr<u16>(r1_3 + 0x12u) = 0;
    *gptr<u32>(r0_10 + 0x21cu) = 0;
    r14 = 6u;
    r8_3->word_0 = 8;
    r8_3->word_4 = r14;
    u32 r0_11 = r0_10 + 0x222u;
    *gptr<u16>(r1_3 + 0x20u) = 2;
    *gptr<u16>(r0_11) = 0;
    gptr<Local_0023a9dc_r0_12> r0_12 = gptr<Local_0023a9dc_r0_12>(r0_11 + 2u);
    r0_12->half_0 = 0;
    r0_12->byte_2 = 0;
    gptr<Local_0023a9dc_r0_13> r0_13 = gptr<Local_0023a9dc_r0_13>(r0_12.addr() + 4u);
    u32 r1_4 = r0_13.addr() + 0xcu;
    r0_13->word_0 = r1_4;
    gptr<Local_0023a9dc_ea_44> ea_44 = gptr<Local_0023a9dc_ea_44>(r0_13.addr() + 4u);
    ea_44->word_0 = r1_4;
    ea_44->word_4 = r14;
    gptr<Local_0023a9dc_r4_1> r4_1 = gptr<Local_0023a9dc_r4_1>(r0_13.addr() - 0x228u);
    r0_13->word_24 = 0;
    r0_13->word_28 = 0;
    r0_13->word_2c = 0;
    r0_13->byte_30 = 4;
    r0_13->word_34 = 0;
    *gptr<u32>(r0_13.addr() - 0x78u) = 0;
    *gptr<u32>(r0_13.addr() - 0x70u) = r3_4;
    *gptr<u32>(r0_13.addr() - 0x74u) = 0;
    *gptr<u32>(r0_13.addr() - 0x6cu) = r3_4;
    u32 r0_14 = *empty_string;
    *gptr<u8>(r4_1->word_1c4) = u8(r0_14);
    gptr<Local_0023a9dc_r0_15> r0_15 = gptr<Local_0023a9dc_r0_15>(r4_1.addr() + 0x100u);
    r0_15->half_ee = 0;
    r0_15->half_ec = 0;
    r4_1->byte_1f0 = 0;
    r4_1->byte_1f1 = 0;
    r4_1->byte_1f2 = 0;
    r4_1->half_224 = 0;
    r4_1->byte_226 = 0;
    set_flag_below_19(r4_1.addr() + 0x224u, 0u, 0u);
    set_flag_below_19(r4_1.addr() + 0x224u, 1u, 1u);
    set_flag_below_19(r4_1.addr() + 0x224u, 2u, 1u);
    set_flag_below_19(r4_1.addr() + 0x224u, 3u, 0u);
    set_flag_below_19(r4_1.addr() + 0x224u, 0xau, 1u);
    r4_1->half_222 = 0;
    return r4_1.addr();
}

}  // namespace d_0023a9dc
GUEST_EXPORT_FRAMED(0x0023a9dc, d_0023a9dc::NpcTalkRecept__NpcTalkRecept, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0023ad1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys an NPC talk receptor: gives back its pending flags, its particle handle, then the talk receptor.
namespace d_0023ad1c {

inline constexpr u32 vtable_NpcTalkRecept = 0x008ee3a0u;
inline constexpr u32 vtable_NpcTalkRecept_at_7c = 0x008ee4e8u;
inline constexpr guest::Function<0x00292ca8, u32(u32)> take_pending_flag_95070a;
inline constexpr guest::Function<0x002e6944, u32(u32, u32)> SeadParticleHandle__destructor;
inline constexpr guest::Function<0x003170d0, u32(u32, u32)> destroy_ITalkRecept;
inline constexpr guest::Function<0x005dd284, u32(u32)> store_word_0x00908cf0_;
inline constexpr guest::Function<0x00813b30, u32(u32, u32, u32)> set_flag_below_19;

u32 NpcTalkRecept__destructor(gptr<NpcTalkRecept> npc_talk_recept) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = vtable_NpcTalkRecept_at_7c;
    npc_talk_recept->vtable = vtable_NpcTalkRecept;
    npc_talk_recept->word_7c = r1_1;
    if ((u32(npc_talk_recept->byte_224) >> 7) != 0) {
        set_flag_below_19(npc_talk_recept.addr() + 0x224u, 7u, 0u);
        take_pending_flag_95070a(npc_talk_recept.addr() + 0x224u);
        r1_1 = guest::cpu()->r[1];
    }
    if ((u32(npc_talk_recept->byte_225) & 1u) != 0) {
        set_flag_below_19(npc_talk_recept.addr() + 0x224u, 8u, 0u);
        take_pending_flag_95070a(npc_talk_recept.addr() + 0x224u);
        r1_1 = guest::cpu()->r[1];
    }
    SeadParticleHandle__destructor(npc_talk_recept.addr() + 0x118u, r1_1);
    store_word_0x00908cf0_(npc_talk_recept.addr() + 0x7cu);
    frame.release();
    return destroy_ITalkRecept(npc_talk_recept.addr(), guest::cpu()->r[1]);
}

}  // namespace d_0023ad1c
GUEST_EXPORT(0x0023ad1c, d_0023ad1c::NpcTalkRecept__destructor);

// f_0023adbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Handles a talk event at the camp sign: the move handler first, then for id 0x13 takes the pending flag or
// begins a request.
namespace d_0023adbc {

inline constexpr guest::Function<0x00290cfc, u32(u32)> begin_request;
inline constexpr guest::Function<0x00292bac, u32(u32, u32)> request_owner_state;
inline constexpr guest::Function<0x00292ca8, u32(u32)> take_pending_flag_95070a;
inline constexpr guest::Function<0x005d908c, u32(u32, u32, u32, u32)> MoveFromTalkReceptBase__virtual_4;
inline constexpr guest::Function<0x0075596c, u32(u32, u32)> TripleHolder__id_0a;
inline constexpr guest::Function<0x00755a98, u32(u32, u32)> handle_value;
inline constexpr guest::Function<0x00813b80, u32(u32, u32, u32)> set_flag_below_4;

u32 AcAutoCampEntrySignboard__handle_talk(gptr<ObjTalkRecept> obj_talk_recept, u32 r1, u32 r2) {
    u32 r0 = obj_talk_recept.addr();
    u32 res_1 = 0;
    u32 r0_2 = MoveFromTalkReceptBase__virtual_4(r0 + 0x7cu, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 r5_1 = r0_2;
    if (r0_2 != 0) {
        return r0_2;
    }
    u32 r0_3 = TripleHolder__id_0a(r2, r1);
    r1 = guest::cpu()->r[1];
    if (r0_3 != 0x13u) {
        return r5_1;
    }
    u32 r0_4 = handle_value(r2, r1);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_23ae28;
    }
    res_1 = u32(obj_talk_recept->byte_100) >> 2u & 1u;
    if (res_1 != 0) {
        take_pending_flag_95070a(set_flag_below_4(r0 + 0x100u, 2u, 0u));
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_23ae28:;
    u32 r0_7 = request_owner_state(r0_4, r1);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        set_flag_below_4(r0 + 0x100u, 2u, 1u);
        begin_request(1u);
        r1 = guest::cpu()->r[1];
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0023adbc
GUEST_EXPORT_FRAMED(0x0023adbc, d_0023adbc::AcAutoCampEntrySignboard__handle_talk, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023ae64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the talk: with no script, attaches it to the talk window and asks it to close; else runs the script. Then
// calls its virtual function 71.
namespace d_0023ae64 {

struct __attribute__((packed)) TalkRecept {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x7c];  // (not used here)
    u32 word_84;
    u8 unknown_88[0x4];  // (not used here)
    u32 word_8c;
};
GUEST_OFFSET(TalkRecept, word_0, 0x0);
GUEST_OFFSET(TalkRecept, word_4, 0x4);
GUEST_OFFSET(TalkRecept, word_84, 0x84);
GUEST_OFFSET(TalkRecept, word_8c, 0x8c);

struct __attribute__((packed)) Local_0023ae64_r5_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0023ae64_r5_1, word_14, 0x14);
GUEST_OFFSET(Local_0023ae64_r5_1, word_18, 0x18);

inline constexpr u32 talk_window_holder_address = 0x0095deacu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u32, 0x0095deac> talk_window_holder;
inline constexpr guest::Function<0x005ffd94, u32(u32, u32, u32, u32)> TalkScript__attach_window;
inline constexpr guest::Function<0x006001f0, u32(u32, u32, u32)> TalkScript__set_option;
inline constexpr guest::Function<0x00602144, u32(u32, u32, u32, u32)> TalkWindow__attach;
inline constexpr guest::Function<0x00602938, u32(u32, u32)> TalkWindow__request_close;
inline constexpr guest::Function<0x00813b80, u32(u32, u32, u32)> set_flag_below_4;

u32 TalkRecept__start_script(gptr<TalkRecept> talk_recept, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_0023ae64_r5_1> r5_1 = gptr<Local_0023ae64_r5_1>(*talk_window_holder);
    if (u32(*gptr<s8>(talk_recept->word_8c)) == u32(s8(*empty_string))) {
        TalkWindow__attach(r5_1->word_14, talk_recept.addr(), r2, guest::cpu()->r[3]);
        TalkWindow__request_close(talk_recept->word_4, 1u);
        set_flag_below_4(talk_recept.addr() + 0x100u, 1u, 1u);
    } else {
        TalkScript__attach_window(r5_1->word_18, talk_recept.addr() + 0x7cu, r5_1->word_14, guest::cpu()->r[3]);
        TalkScript__set_option(talk_recept->word_84, 0u, 0u);
    }
    u32 r1_2 = *gptr<u32>(talk_recept->word_0 + 0x11cu);
    // virtual function 71 of talk_recept.addr()
    frame.release();
    return guest::call_address<u32>(r1_2, talk_recept.addr(), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0023ae64
GUEST_EXPORT(0x0023ae64, d_0023ae64::TalkRecept__start_script);

// f_0023b0d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's word slot to the message of the archive; whether there was a talk to set.
namespace d_0023b0d4 {

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> TalkTarget__set_word;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> construct_word_res;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> MessageArchive__message;

u32 PosterTalkRecept__set_message_word(gptr<PosterTalkRecept> poster_talk_recept, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r6_1 = *frame.at<u32>(0x28);
    u32 talk_owner = poster_talk_recept->talk_owner;
    if (talk_owner != 0) {
        u32 talk_target = *gptr<u32>(talk_owner + 0x354u);
        u32 zf_1 = talk_target == 0;
        u32 message_archive = *word_resources;
        if (!zf_1) {
            zf_1 = message_archive == 0;
        }
        if (!zf_1) {
            construct_word_res(frame.at(0).addr(), r1, r2, r3);
            MessageArchive__message(message_archive, frame.at(0).addr(), r1, r2);
            TalkTarget__set_word(talk_target, frame.at(0).addr(), r3, r6_1);
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0023b0d4
GUEST_EXPORT_FRAMED(0x0023b0d4, d_0023b0d4::PosterTalkRecept__set_message_word, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0023b164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's word slot to the word.
namespace d_0023b164 {

inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> TalkTarget__set_word;

void PosterTalkRecept__set_word(gptr<PosterTalkRecept> poster_talk_recept, u32 r1, u32 r2, u32 r3) {
    u32 talk_owner = poster_talk_recept->talk_owner;
    if (talk_owner != 0) {
        u32 talk_target = *gptr<u32>(talk_owner + 0x354u);
        if (talk_target != 0) {
            TalkTarget__set_word(talk_target, r1, r2, r3);
            return;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0023b164
GUEST_EXPORT_FRAMED(0x0023b164, d_0023b164::PosterTalkRecept__set_word, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023b1b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the talk still has a script running, a pending close, or a window not idle.
namespace d_0023b1b4 {

struct __attribute__((packed)) TalkRecept {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x7c];  // (not used here)
    u32 word_84;
    u8 unknown_88[0x78];  // (not used here)
    u8 byte_100;
};
GUEST_OFFSET(TalkRecept, word_4, 0x4);
GUEST_OFFSET(TalkRecept, word_84, 0x84);
GUEST_OFFSET(TalkRecept, byte_100, 0x100);

inline constexpr guest::Function<0x0075cd14, u32(u32, u32, u32, u32)> empty_check_is_clear;
inline constexpr guest::Function<0x0075d0f0, u32(u32)> StateObject360__check_pointer_when_state_0;

u32 TalkRecept__is_busy(gptr<TalkRecept> talk_recept) {
    u32 r0_1 = talk_recept->word_84;
    if (r0_1 != 0) {
        if (empty_check_is_clear(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
            return 1u;
        }
    }
    if ((u32(talk_recept->byte_100) >> 1u & 1u) != 0) {
        return 1u;
    }
    u32 r0_3 = talk_recept->word_4;
    if (r0_3 == 0) {
        return r0_3;
    }
    return StateObject360__check_pointer_when_state_0(r0_3) == 0;
}

}  // namespace d_0023b1b4
GUEST_EXPORT_FRAMED(0x0023b1b4, d_0023b1b4::TalkRecept__is_busy, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023b248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the string to the message of the archive.
namespace d_0023b248 {

inline constexpr u32 word_resources_address = 0x0095debcu;
inline constexpr guest::Function<0x005dd570, u32(u32, u32, u32)> SafeString__assign_message;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> construct_word_res;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> MessageArchive__message;

u32 SafeString__set_message(u32 safe_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = word_resources_address;
    u32 message_archive = *gptr<u32>(r0_1);
    if (message_archive != 0) {
        construct_word_res(frame.at(0).addr(), r1, r2, r3);
        MessageArchive__message(message_archive, frame.at(0).addr(), r1, r2);
        SafeString__assign_message(safe_string, frame.at(0).addr(), r3);
        r1 = guest::cpu()->r[1];
        r0_1 = frame.at(0).addr();
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0023b248
GUEST_EXPORT_FRAMED(0x0023b248, d_0023b248::SafeString__set_message, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0023b480: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's word slot to the amount; whether there was a talk to set.
namespace d_0023b480 {

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> construct_word_fix_19;
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32)> forward_to_target_virtual_19;
inline constexpr guest::Function<0x00312cb0, u32(u32)> set_word_num_digit_vtable;
inline constexpr guest::Function<0x005e32a0, u32(u32, u32, u32)> WordNumber__set_amount;

u32 DonationBoxTalkRecept__set_amount_word(gptr<DonationBoxTalkRecept> donation_box_talk_recept, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    u32 r0_1 = donation_box_talk_recept->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        u32 zf_1 = r0_2 == 0;
        u32 r0_3 = *word_resources;
        if (!zf_1) {
            zf_1 = r0_3 == 0;
        }
        if (!zf_1) {
            construct_word_fix_19(frame.at(0).addr(), r1, r2, r3);
            WordNumber__set_amount(frame.at(0).addr(), r1, r3);
            forward_to_target_virtual_19(r0_2, frame.at(0).addr(), r2);
            set_word_num_digit_vtable(frame.at(0).addr());
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0023b480
GUEST_EXPORT_FRAMED(0x0023b480, d_0023b480::DonationBoxTalkRecept__set_amount_word, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0023b50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b50c {

inline constexpr u32 vtable_script__WordFix_38u_ = 0x00909fc0u;
inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056d9cc, u32(u32, u32, u32, u32)> Message__set_field_object_name;
inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32)> call_virtual_28_5f12e4;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) ScriptWordFix38uWordFix0023b50cFrame {
    u32 word_0;
    u8 unknown_4[0x64];  // (not read or written by name)
};
GUEST_OFFSET(ScriptWordFix38uWordFix0023b50cFrame, word_0, 0x0);
GUEST_SIZE(ScriptWordFix38uWordFix0023b50cFrame, 0x68);

void script__WordFix_38u___WordFix_0023b50c(gptr<DonationBoxTalkRecept> donation_box_talk_recept, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ScriptWordFix38uWordFix0023b50cFrame> frame;  // the original's stack frame
    u32 r0 = donation_box_talk_recept.addr();
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r8 = r2;
    u32 r0_1 = donation_box_talk_recept->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        u32 zf_1 = r0_2 == 0;
        u32 r7 = r0_2;
        u32 r0_3 = *word_resources;
        if (!zf_1) {
            zf_1 = r0_3 == 0;
        }
        if (!zf_1) {
            u32 r0_4 = frame.at(0).addr();
            u32 r6 = r1;
            script__construct_word_ptr(r0_4, frame.at(0x18).addr(), 0x26u, r3);
            u32 r5 = vtable_script__WordFix_38u_;
            *gptr<u32>(r0_4) = r5;
            u32 r0_5 = r0_4 + 0xcu;
            construct_script_word(r0_5);
            u32 message = r0_5 - 0xcu;
            clear_aligned(r0_5 + 0xcu, 0x4cu);
            r2 = 0x8906ecu;
            r0 = message + 0x16u;
            r1 = 0x13u;
            do {
                res_1 = r1 - 1u;
                r1 = res_1;
                u32 r3_3 = *gptr<u16>(r2);
                *gptr<u16>(r0 + 2u) = u16(r3_3);
                r3_4 = *gptr<u16>(r2);
                u32 ea_2 = r0 + 4u;
                *gptr<u16>(ea_2) = u16(r3_4);
                r0 = ea_2;
                guest::preempt();
            } while (res_1 != 0);
            Message__set_field_object_name(message, r6, r2, r3_4);
            call_virtual_28_5f12e4(r7, frame.at(0).addr(), r8);
            frame->word_0 = r5;
            return;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0023b50c
GUEST_EXPORT_FRAMED(0x0023b50c, d_0023b50c::script__WordFix_38u___WordFix_0023b50c, 0x41f0);  // pushes {message, r5, r6, r7, r8, lr} first, as the original

// f_0023b5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a 33-character word (arg 1) into a talk's window; 1 when it has one.
namespace d_0023b5ec {

struct __attribute__((packed)) script__WordFix_33u_ {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(script__WordFix_33u_, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_33u__rec = 0x00909f18u;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> construct_word_fix_33_into_text_box;
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32)> call_target_with_two_0x94_;

struct __attribute__((packed)) ScriptWordFix33uWordFix0023b5ecFrame {
    u32 object_0_vtable;
    u8 unknown_4[0x5c];  // (not read or written by name)
};
GUEST_OFFSET(ScriptWordFix33uWordFix0023b5ecFrame, object_0_vtable, 0x0);
GUEST_SIZE(ScriptWordFix33uWordFix0023b5ecFrame, 0x60);

u32 TalkRecept__set_word_33(gptr<script__WordFix_33u_> word_fix_33u, u32 r1, u32 r2) {
    guest::StackFrameOf<ScriptWordFix33uWordFix0023b5ecFrame> frame;  // the original's stack frame
    u32 r0_1 = word_fix_33u->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        if (r0_2 != 0) {
            call_target_with_two_0x94_(r0_2, construct_word_fix_33_into_text_box(frame.at(0).addr(), r1, 0u, guest::cpu()->r[3]), r2);
            frame->object_0_vtable = vtable_script__WordFix_33u__rec;
            guest::cpu()->r[1] = vtable_script__WordFix_33u__rec;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0023b5ec
GUEST_EXPORT_FRAMED(0x0023b5ec, d_0023b5ec::TalkRecept__set_word_33, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023b87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a nine-character name word (from a name record, arg 1) into a poster's talk window; 1 when it has one.
namespace d_0023b87c {

struct __attribute__((packed)) PosterTalkReceptSetVillagerWordArg1 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(PosterTalkReceptSetVillagerWordArg1, byte_14, 0x14);

inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32)> Object__virtual_34;
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32)> TextBox__set_word_9;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> script__construct_word_fix_9;

struct __attribute__((packed)) PosterTalkReceptSetVillagerWordFrame {
    u32 object_0_vtable;
    u8 unknown_4[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(PosterTalkReceptSetVillagerWordFrame, object_0_vtable, 0x0);
GUEST_SIZE(PosterTalkReceptSetVillagerWordFrame, 0x30);

u32 PosterTalkRecept__set_villager_word(gptr<PosterTalkRecept> poster_talk_recept, gptr<PosterTalkReceptSetVillagerWordArg1> arg1, u32 r2) {
    guest::StackFrameOf<PosterTalkReceptSetVillagerWordFrame> frame;  // the original's stack frame
    u32 talk_owner = poster_talk_recept->talk_owner;
    if (talk_owner != 0) {
        u32 r0_2 = *gptr<u32>(talk_owner + 0x354u);
        if (r0_2 != 0) {
            u32 r0_4 = script__construct_word_fix_9(frame.at(0).addr(), arg1.addr(), r2, guest::cpu()->r[3]);
            TextBox__set_word_9(r0_4, arg1.addr() + 2u, u32(arg1->byte_14) & 1u);
            Object__virtual_34(r0_2, frame.at(0).addr(), r2);
            frame->object_0_vtable = vtable_script__WordFix_9u__rec;
            guest::cpu()->r[1] = vtable_script__WordFix_9u__rec;
            return 1u;
        }
    }
    guest::cpu()->r[1] = arg1.addr();
    return 0u;
}

}  // namespace d_0023b87c
GUEST_EXPORT_FRAMED(0x0023b87c, d_0023b87c::PosterTalkRecept__set_villager_word, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023b900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a 33-character word (arg 1) into a talk's window, with the scene's owner in the scenes so flagged.
namespace d_0023b900 {

struct __attribute__((packed)) script__WordFix_33u_ {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(script__WordFix_33u_, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_33u__rec = 0x00909f18u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32)> construct_word_fix_33_into_text_box;
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32)> call_target_with_two_0x94_;
inline constexpr guest::Function<0x006fad7c, u32(u32)> owner_of_scene;

struct __attribute__((packed)) ScriptWordFix33uWordFix0023b900Frame {
    u32 object_0_vtable;
    u8 unknown_4[0x58];  // (not read or written by name)
    u32 object_5c_vtable;
    u8 unknown_60[0x5c];  // (not read or written by name)
};
GUEST_OFFSET(ScriptWordFix33uWordFix0023b900Frame, object_0_vtable, 0x0);
GUEST_OFFSET(ScriptWordFix33uWordFix0023b900Frame, object_5c_vtable, 0x5c);
GUEST_SIZE(ScriptWordFix33uWordFix0023b900Frame, 0xbc);

void TalkRecept__set_word_33_for_scene(gptr<script__WordFix_33u_> word_fix_33u, u32 r1, u32 r2) {
    guest::StackFrameOf<ScriptWordFix33uWordFix0023b900Frame> frame;  // the original's stack frame
    u32 r0_1 = word_fix_33u->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);
        if (r0_2 != 0) {
            u32 scene_2 = current_scene_id(r0_2, r1, r2, guest::cpu()->r[3]);
            u32 scene_flagged_2 = scene_has_flags(0x4000u, scene_2);
            if (scene_flagged_2 != 0) {
                u32 owner = owner_of_scene(scene_flagged_2);
                call_target_with_two_0x94_(r0_2, construct_word_fix_33_into_text_box(frame.at(0x5c).addr(), r1, owner), r2);
                frame->object_5c_vtable = vtable_script__WordFix_33u__rec;
                return;
            }
            call_target_with_two_0x94_(r0_2, construct_word_fix_33_into_text_box(frame.at(0).addr(), r1, 0u), r2);
            frame->object_0_vtable = vtable_script__WordFix_33u__rec;
            return;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0023b900
GUEST_EXPORT_FRAMED(0x0023b900, d_0023b900::TalkRecept__set_word_33_for_scene, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0023bbe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an object talk receptor: a talk receptor with a flow receptor, for an object (arg 1).
namespace d_0023bbe4 {

struct __attribute__((packed)) Local_0023bbe4_r0_2 {
    u32 vtable;
    u8 unknown_4[0x70];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Local_0023bbe4_r0_2, vtable, 0x0);
GUEST_OFFSET(Local_0023bbe4_r0_2, word_74, 0x74);

struct __attribute__((packed)) Local_0023bbe4_r0_3 {
    u32 vtable;
    u8 unknown_4[0xf0];  // (not used here)
    u32 word_f4;
    u32 word_f8;
    u32 word_fc;
    u8 byte_100;
};
GUEST_OFFSET(Local_0023bbe4_r0_3, vtable, 0x0);
GUEST_OFFSET(Local_0023bbe4_r0_3, word_f4, 0xf4);
GUEST_OFFSET(Local_0023bbe4_r0_3, word_f8, 0xf8);
GUEST_OFFSET(Local_0023bbe4_r0_3, word_fc, 0xfc);
GUEST_OFFSET(Local_0023bbe4_r0_3, byte_100, 0x100);

inline constexpr u32 vtable_ObjTalkRecept = 0x008ee528u;
inline constexpr u32 vtable_ObjTalkRecept_at_7c = 0x008ee650u;
inline constexpr guest::Function<0x005dd230, u32(u32, u32)> construct_flow_recept;
inline constexpr guest::Function<0x005dd69c, u32(u32, u32, u32, u32)> construct_talk_recept;

u32 ObjTalkRecept__ObjTalkRecept(u32 obj_talk_recept, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = construct_talk_recept(obj_talk_recept, r1, r2, r3);
    gptr<Local_0023bbe4_r0_2> r0_2 = gptr<Local_0023bbe4_r0_2>(r0_1 + 0x7cu);
    construct_flow_recept(r0_2.addr(), r0_1);
    r0_2->word_74 = 0;
    r0_2->vtable = vtable_ObjTalkRecept_at_7c;
    gptr<Local_0023bbe4_r0_3> r0_3 = gptr<Local_0023bbe4_r0_3>(r0_2.addr() - 0x7cu);
    r0_3->vtable = vtable_ObjTalkRecept;
    r0_3->word_f4 = 0;
    r0_3->word_fc = 0;
    r0_3->word_f8 = r1;
    r0_3->byte_100 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_3.addr();
}

}  // namespace d_0023bbe4
GUEST_EXPORT_FRAMED(0x0023bbe4, d_0023bbe4::ObjTalkRecept__ObjTalkRecept, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023bf10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The negation of the wireless check A.
namespace d_0023bf10 {

inline constexpr guest::Function<0x0035084c, u32(u32, u32, u32, u32)> Ac__get_wifi_state;

u32 WirelessCheck__not_a(u32 wireless_check) {
    u32 wifi_state = Ac__get_wifi_state(wireless_check, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return wifi_state ^ 1u;
}

}  // namespace d_0023bf10
GUEST_EXPORT_FRAMED(0x0023bf10, d_0023bf10::WirelessCheck__not_a, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the wireless state is 1.
namespace d_0023c544 {

inline constexpr guest::Function<0x003507b0, u32(u32, u32, u32, u32)> Ac__get_status;

u32 WirelessCheck__is_state_1(u32 wireless_check) {
    u32 status = Ac__get_status(wireless_check, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (status != 1u) {
        status = 0u;
    }
    return status;
}

}  // namespace d_0023c544
GUEST_EXPORT_FRAMED(0x0023c544, d_0023c544::WirelessCheck__is_state_1, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c5e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The negation of the wireless check B.
namespace d_0023c5e4 {

inline constexpr guest::Function<0x00350778, u32(u32, u32, u32, u32)> Ac__get_status_b;

u32 WirelessCheck__not_b(u32 wireless_check) {
    u32 status_b = Ac__get_status_b(wireless_check, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return status_b ^ 1u;
}

}  // namespace d_0023c5e4
GUEST_EXPORT_FRAMED(0x0023c5e4, d_0023c5e4::WirelessCheck__not_b, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the wireless state is 0.
namespace d_0023c634 {

inline constexpr guest::Function<0x003507b0, u32(u32, u32, u32, u32)> Ac__get_status;

u32 WirelessCheck__is_state_0(u32 wireless_check) {
    u32 status = Ac__get_status(wireless_check, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return status == 0;
}

}  // namespace d_0023c634
GUEST_EXPORT_FRAMED(0x0023c634, d_0023c634::WirelessCheck__is_state_0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether going online is blocked: by the system, a pending error, or the save's restriction.
namespace d_0023c65c {

inline guest::global<u8, 0x00953b14> global_00953b14;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x003508ac, u32(u32, u32, u32, u32)> query_003508ac;
inline constexpr guest::Function<0x0070f56c, u32(u32)> BossBlock__matches;

u32 online_is_blocked(u32 r0) {
    if ((query_003508ac(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) ^ 1u) != 0) {
        return 1u;
    }
    u32 r0_2 = *global_00953b14;
    if (r0_2 != 0) {
        return 1u;
    }
    u32 save_data = get_save_data(r0_2);
    u32 r0_4 = *gptr<u16>(save_data + 0x71922u);
    if ((r0_4 & 1u) == 0) {
        return 0u;
    }
    u32 save_data_2 = get_save_data(r0_4);
    if (BossBlock__matches(save_data_2 + 0x71900u) == 0) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_0023c65c
GUEST_EXPORT_FRAMED(0x0023c65c, d_0023c65c::online_is_blocked, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c6c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The negation of the wireless check C.
namespace d_0023c6c0 {

inline constexpr guest::Function<0x0048a1b4, u32(u32, u32, u32, u32)> Ac__is_connected;

u32 WirelessCheck__not_c(u32 wireless_check) {
    return Ac__is_connected(wireless_check, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) ^ 1u;
}

}  // namespace d_0023c6c0
GUEST_EXPORT_FRAMED(0x0023c6c0, d_0023c6c0::WirelessCheck__not_c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Steps back one of the three pages and plays its animation.
namespace d_0023c730 {

struct __attribute__((packed)) LayoutStepBackPageArg0 {
    u8 unknown_0[0x3e0];  // (not used here)
    u8 byte_3e0;
};
GUEST_OFFSET(LayoutStepBackPageArg0, byte_3e0, 0x3e0);

inline constexpr u32 layout_page_state_address = 0x00953f0cu;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

void Layout__step_back_page(gptr<LayoutStepBackPageArg0> layout, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = u32(layout->byte_3e0) - 1u;
    if (r0_1 <= 2u) {
        u32 r0_2 = r0_1 & 0xffu;
        layout->byte_3e0 = u8(r0_2);
        u32 r1_1 = gptr<u32>(layout_page_state_address)[r0_2];
        u32 pane = Layout__find_pane(layout.addr() + 0x24u, r1_1, 1u, r3);
        notify_objects_of_list(layout.addr() + 0x24u, layout.addr() + 0x3b8u, pane, 0u);
        float S0_2 = 1.0f;
        guest::cpu()->s[0] = S0_2;
        Animation__set_value(layout.addr() + 0x3b8u);
        Layout__virtual_3(layout.addr() + 0x24u);
        u32 r1_5 = gptr<u32>(layout_page_state_address)[u32(layout->byte_3e0)];
        u32 pane_2 = Layout__find_pane(layout.addr() + 0x24u, r1_5, 1u, guest::cpu()->r[3]);
        frame.release();
        notify_list_objects(pane_2, layout.addr() + 0x3b8u, pane_2, 0u);
        return;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_0023c730
GUEST_EXPORT(0x0023c730, d_0023c730::Layout__step_back_page);

// f_0023c860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Draws the screen's layout.
namespace d_0023c860 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

void LayoutScreen__draw(u32 layout_screen) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(layout_screen);
    frame.release();
    LayoutRenderer__draw_on_screen(r0_1, layout_screen + 0x24u, 0u);
    return;
}

}  // namespace d_0023c860
GUEST_EXPORT(0x0023c860, d_0023c860::LayoutScreen__draw);

// f_0023c9c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the screen's layout and its parts.
namespace d_0023c9c8 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;

void LayoutScreen__release(u32 layout_screen) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    layout_at_10_virtual_8(layout_screen + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    release_layout_parts(layout_screen + 0x170u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0023c9c8
GUEST_EXPORT(0x0023c9c8, d_0023c9c8::LayoutScreen__release);

// f_0023c9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the screen's layout and its animations.
namespace d_0023c9e4 {

inline constexpr guest::Function<0x00568690, u32(u32, u32, u32, u32)> Layout__update_animations;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

void LayoutScreen__update(u32 layout_screen) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Layout__virtual_3(layout_screen + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    Layout__update_animations(layout_screen + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0023c9e4
GUEST_EXPORT(0x0023c9e4, d_0023c9e4::LayoutScreen__update);

// f_0023cb48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the cloth colors of the slot's model when it is loaded; whether it was.
namespace d_0023cb48 {

struct __attribute__((packed)) ModelSlot {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x4b7];  // (not used here)
    u32 word_4dc;
};
GUEST_OFFSET(ModelSlot, byte_24, 0x24);
GUEST_OFFSET(ModelSlot, word_4dc, 0x4dc);

struct __attribute__((packed)) Local_0023cb48_r2_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0023cb48_r2_2, word_8, 0x8);
GUEST_OFFSET(Local_0023cb48_r2_2, word_c, 0xc);
GUEST_OFFSET(Local_0023cb48_r2_2, word_1c, 0x1c);

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> ModelSlot__set_cloth_colors;
inline constexpr guest::Function<0x00712c28, u32(u32, u32, u32, u32)> byte_3_below_6;

struct __attribute__((packed)) ModelSlotApplyClothColorsFrame {
    u32 word_0;
};
GUEST_OFFSET(ModelSlotApplyClothColorsFrame, word_0, 0x0);
GUEST_SIZE(ModelSlotApplyClothColorsFrame, 0x4);

u32 ModelSlot__apply_cloth_colors(gptr<ModelSlot> model_slot, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ModelSlotApplyClothColorsFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r1_1 = model_slot->word_4dc;
    if (r1_1 != 0) {
        u32 r3_1 = model_slot->byte_24;
        u32 r5_1 = 0u;
        u32 r2_1 = r3_1 & 1u;
        gptr<Local_0023cb48_r2_2> r2_2 = gptr<Local_0023cb48_r2_2>(r2_1 >= 2u ? model_slot.addr() + 0x6cu : model_slot.addr() + (r2_1 * 5u + (r2_1 << 6) << 2) + 0x6cu);
        u32 zf_1 = r2_2->word_c + 1u == 0;
        if (!zf_1) {
            r2_2 = gptr<Local_0023cb48_r2_2>(r2_2->word_8);
            zf_1 = r2_2.addr() == 0;
        }
        if (!zf_1) {
            zf_1 = r2_2->word_1c == 0;
        }
        if (!zf_1) {
            u32 r3_2 = (r3_1 & 1u) * 5u;
            u32 ea_1 = r2_2.addr() + 0x20u;
            u32 r2_3 = ea_1;
            u32 r0_1 = *gptr<u32>(ea_1);
            u32 r0_2 = r0_1 == 0 ? r5_1 : r0_1 + r2_3;
            if (r0_2 == 0) {
                r5_1 = 0u;
            } else {
                u32 ea_2 = r0_2 + 0x28u;
                r2_3 = *gptr<u32>(ea_2);
                if (r2_3 != 0) {
                    r5_1 = r2_3 + ea_2;
                }
            }
            u32 r0_3 = byte_3_below_6(r1_1, r1_1, r2_3, r3_2);
            frame->word_0 = 2;
            ModelSlot__set_cloth_colors(r5_1, *gptr<u32>((model_slot.addr() + (r3_2 << 2) + 0x40u) + 0x10u), r0_3, r1);
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0023cb48
GUEST_EXPORT_FRAMED(0x0023cb48, d_0023cb48::ModelSlot__apply_cloth_colors, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0023d5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the pockets hold an item the NPC may be given (by kind and the event's rules).
namespace d_0023d5ec {

inline constexpr u32 tourney_kind_address = 0x00953f68u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0023d74c, u32(u32, u32, u32, u32)> Player__badge_progress;
inline constexpr guest::Function<0x0023d99c, u32(u32, u32, u32, u32)> Player__has_badge_progress;
inline constexpr guest::Function<0x0023e254, u32(u32, u32)> holder_has_item_with_special_rule;
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> Item__is_item;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> Pockets__item_with_lock;

u32 Pockets__has_giftable_item(u32 pockets, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = pockets;
    u32 i = 0u;
    u32 r8 = tourney_kind_address;
    u32 r0_1 = *current_player_data;
    if (r0_1 != 0 && (u32(*gptr<u8>(r0_1 + 0x5712u)) & 1u) != 0) {
        u32 r0_2 = Player__badge_progress(r5, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r8 + 1u) = u8(r0_2);
        *gptr<u8>(r8) = u8(r0_2);
        u32 r6 = r5 + 0x6bd0u;
        *gptr<u8>(r8 + 2u) = u8(i);
        do {
            u32 r0_3 = Pockets__item_with_lock(r6, i, frame.at(0).addr(), r3);
            r3 = guest::cpu()->r[3];
            if (*frame.at<u8>(0) == 0) {
                u32 is_item = Item__is_item(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                r3 = guest::cpu()->r[3];
                if (is_item != 0) {
                    u32 category = Item__category(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                    r3 = guest::cpu()->r[3];
                    if (category == 0x98u) {
                        r0_6 = *gptr<u8>(r8);
                        r1_2 = 1u;
                        if (r0_6 >= 0xau) {
                            guest::cpu()->r[1] = r1_2;
                            return r0_6;
                        }
                        if ((r0_6 & 1u) != 0) {
                            r0_6 -= 1u;
                        }
                        *gptr<u8>(r8) = u8(r0_6);
                        *gptr<u8>(r8 + 2u) = u8(r1_2);
                        guest::cpu()->r[1] = r1_2;
                        return r0_6;
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (i < 0x10u);
        u32 r0_7 = Player__has_badge_progress(r5, guest::cpu()->r[1], guest::cpu()->r[2], r3);
        r1_2 = guest::cpu()->r[1];
        if (r0_7 == 0) {
            u32 r0_8 = holder_has_item_with_special_rule(r5, r1_2);
            r1_2 = guest::cpu()->r[1];
            r0_6 = *gptr<u8>(r8);
            if (r0_8 == 0) {
                if ((r0_6 & 1u) == 0) {
                    r0_6 = 0xau;
                }
                *gptr<u8>(r8) = u8(r0_6);
                return r0_6;
            }
            if (r0_6 < 0xau) {
                if ((r0_6 & 1u) != 0) {
                    r0_6 -= 1u;
                }
                *gptr<u8>(r8) = u8(r0_6);
                *gptr<u8>(r8 + 2u) = 3;
                guest::cpu()->r[1] = 3u;
                return r0_6;
            }
        } else {
            r0_6 = *gptr<u8>(r8);
            if (r0_6 < 0xau) {
                if ((r0_6 & 1u) != 0) {
                    r0_6 -= 1u;
                }
                r1_2 = 2u;
                *gptr<u8>(r8) = u8(r0_6);
                *gptr<u8>(r8 + 2u) = u8(r1_2);
            }
        }
        guest::cpu()->r[1] = r1_2;
        return r0_6;
    }
    *gptr<u8>(r8) = 0xa;
    *gptr<u8>(r8 + 1u) = 0xa;
    *gptr<u8>(r8 + 2u) = u8(i);
    guest::cpu()->r[1] = r1;
    return 0xau;
}

}  // namespace d_0023d5ec
GUEST_EXPORT_FRAMED(0x0023d5ec, d_0023d5ec::Pockets__has_giftable_item, 0x43f0);  // pushes {i, r5, r6, r7, r8, r9, lr} first, as the original

// f_0023f704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies one pattern image (64x32) into another, filling where the source is smaller with the background color, and
// imports it.
namespace d_0023f704 {

struct __attribute__((packed)) Local_0023f704_r0_4 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0023f704_r0_4, word_18, 0x18);
GUEST_OFFSET(Local_0023f704_r0_4, word_1c, 0x1c);

struct __attribute__((packed)) Local_0023f704_r0_6 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0023f704_r0_6, word_18, 0x18);
GUEST_OFFSET(Local_0023f704_r0_6, word_1c, 0x1c);

inline constexpr u32 pattern_image_buffer_address = 0x0098b2b8u;
inline constexpr guest::Function<0x001b3300, u32(u32, u32, u32, u32)> Pattern__import_image;
inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> set_u16_cell;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32)> TextureView__from_resource_wrapper;
inline constexpr guest::Function<0x0070bcdc, u32(u32, u32, u32, u32)> Pattern__color_value;
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> get_u16_cell;

void PatternImages__copy_image(u32 pattern_images, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r8 = r1;
    u32 r9 = Pattern__color_value(pattern_image_buffer_address, 0u, r2, r3);
    u32 ea_1 = pattern_images + r8 * 0x21u * 0x14u + 0x7f4u;
    u32 r6 = ea_1;
    TextureView__from_resource_wrapper(frame.at(0).addr(), *gptr<u32>(ea_1));
    u32 ea_2 = pattern_images + r2 * 0x21u * 0x14u + 0x7f4u;
    u32 r7 = ea_2;
    TextureView__from_resource_wrapper(frame.at(0xc).addr(), *gptr<u32>(ea_2));
    r3 = guest::cpu()->r[3];
    u32 j = 0u;
    do {
        u32 i = 0u;
        do {
            gptr<Local_0023f704_r0_4> r0_4 = gptr<Local_0023f704_r0_4>(*gptr<u32>(r6));
            u32 r1_3 = r0_4->word_1c;
            u32 zf_1 = r1_3 == j;
            u32 cf_1 = r1_3 >= j;
            if (cf_1 && !zf_1) {
                u32 r0_5 = r0_4->word_18;
                zf_1 = r0_5 == i;
                cf_1 = r0_5 >= i;
            }
            if (cf_1 && !zf_1) {
                gptr<Local_0023f704_r0_6> r0_6 = gptr<Local_0023f704_r0_6>(*gptr<u32>(r7));
                u32 r1_4 = r0_6->word_1c;
                u32 zf_2 = r1_4 == j;
                u32 cf_2 = r1_4 >= j;
                if (cf_2 && !zf_2) {
                    u32 r0_7 = r0_6->word_18;
                    zf_2 = r0_7 == i;
                    cf_2 = r0_7 >= i;
                }
                if (cf_2 && !zf_2) {
                    u32 cell_value_2 = get_u16_cell(frame.at(0xc).addr(), j, i, r3);
                    set_u16_cell(frame.at(0).addr(), j, i, cell_value_2);
                    r3 = guest::cpu()->r[3];
                } else {
                    set_u16_cell(frame.at(0).addr(), j, i, r9);
                    r3 = guest::cpu()->r[3];
                }
            }
            i += 1u;
            guest::preempt();
        } while (i < 0x40u);
        j += 1u;
        guest::preempt();
    } while (j < 0x20u);
    Pattern__import_image(pattern_image_buffer_address, *gptr<u32>(r6), r8 & 0xffu, r3);
}

}  // namespace d_0023f704
GUEST_EXPORT_FRAMED(0x0023f704, d_0023f704::PatternImages__copy_image, 0x43f0);  // pushes {i, j, r6, r7, r8, r9, lr} first, as the original

// f_0023f820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies one pattern image into another (the second layout), filling outside the source with the background color, and
// imports it.
namespace d_0023f820 {

struct __attribute__((packed)) Local_0023f820_r0_4 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0023f820_r0_4, word_18, 0x18);
GUEST_OFFSET(Local_0023f820_r0_4, word_1c, 0x1c);

struct __attribute__((packed)) Local_0023f820_r0_6 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0023f820_r0_6, word_18, 0x18);
GUEST_OFFSET(Local_0023f820_r0_6, word_1c, 0x1c);

inline constexpr u32 pattern_image_buffer_address = 0x0098b2b8u;
inline constexpr guest::Function<0x001b3300, u32(u32, u32, u32, u32)> Pattern__import_image;
inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> set_u16_cell;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32)> TextureView__from_resource_wrapper;
inline constexpr guest::Function<0x0070bcdc, u32(u32, u32, u32, u32)> Pattern__color_value;
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> get_u16_cell;

void PatternImages__copy_image_b(u32 pattern_images, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r3_4 = 0;
    u32 r2_3 = 0;
    u32 r1_5 = 0;
    u32 array = 0;
    u32 r8 = r1;
    u32 r9 = r2;
    u32 r11 = Pattern__color_value(pattern_image_buffer_address, 0u, r2, r3);
    u32 ea_1 = pattern_images + r8 * 0x21u * 0x14u + 0x7f4u;
    u32 r7 = ea_1;
    TextureView__from_resource_wrapper(frame.at(0).addr(), *gptr<u32>(ea_1));
    u32 ea_2 = pattern_images + r9 * 0x21u * 0x14u + 0x7f4u;
    u32 r6 = ea_2;
    TextureView__from_resource_wrapper(frame.at(0xc).addr(), *gptr<u32>(ea_2));
    r3 = guest::cpu()->r[3];
    u32 j = 0u;
    do {
        u32 i = 0u;
        do {
            gptr<Local_0023f820_r0_4> r0_4 = gptr<Local_0023f820_r0_4>(*gptr<u32>(r7));
            u32 r1_3 = r0_4->word_1c;
            u32 zf_1 = r1_3 == j;
            u32 cf_1 = r1_3 >= j;
            if (cf_1 && !zf_1) {
                u32 r0_5 = r0_4->word_18;
                zf_1 = r0_5 == i;
                cf_1 = r0_5 >= i;
            }
            gptr<Local_0023f820_r0_6> r0_6 = gptr<Local_0023f820_r0_6>(*gptr<u32>(r6));
            u32 r1_4 = r0_6->word_1c;
            if (cf_1 && !zf_1) {
                u32 zf_2 = r1_4 == j;
                u32 cf_2 = r1_4 >= j;
                if (cf_2 && !zf_2) {
                    u32 r0_7 = r0_6->word_18;
                    zf_2 = r0_7 == i;
                    cf_2 = r0_7 >= i;
                }
                if (cf_2 && !zf_2) {
                    u32 cell_value_3 = get_u16_cell(frame.at(0).addr(), j, i, r3);
                    u32 cell_value_4 = get_u16_cell(frame.at(0xc).addr(), j, i, guest::cpu()->r[3]);
                    set_u16_cell(frame.at(0).addr(), j, i, cell_value_4);
                    set_u16_cell(frame.at(0xc).addr(), j, i, cell_value_3);
                    r3 = guest::cpu()->r[3];
                    goto L_23f93c;
                }
                r3_4 = r11;
                r2_3 = i;
                r1_5 = j;
                array = frame.at(0).addr();
            } else {
                u32 zf_3 = r1_4 == j;
                u32 cf_3 = r1_4 >= j;
                if (cf_3 && !zf_3) {
                    u32 r0_15 = r0_6->word_18;
                    zf_3 = r0_15 == i;
                    cf_3 = r0_15 >= i;
                }
                if (!cf_3 || zf_3) {
                    goto L_23f93c;
                }
                r3_4 = r11;
                r2_3 = i;
                r1_5 = j;
                array = frame.at(0xc).addr();
            }
            set_u16_cell(array, r1_5, r2_3, r3_4);
            r3 = guest::cpu()->r[3];
L_23f93c:;
            i += 1u;
            guest::preempt();
        } while (i < 0x40u);
        j += 1u;
        guest::preempt();
    } while (j < 0x20u);
    Pattern__import_image(pattern_image_buffer_address, *gptr<u32>(r7), r8 & 0xffu, r3);
    Pattern__import_image(pattern_image_buffer_address, *gptr<u32>(r6), r9 & 0xffu, guest::cpu()->r[3]);
}

}  // namespace d_0023f820
GUEST_EXPORT_FRAMED(0x0023f820, d_0023f820::PatternImages__copy_image_b, 0x4ff0);  // pushes {i, j, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0023fa30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a pro design button node: its layout, drag icons, heap and choice.
namespace d_0023fa30 {

struct __attribute__((packed)) Local_0023fa30_r0_13 {
    u8 unknown_0[0xfc8];  // (not used here)
    u32 word_fc8;
    u32 word_fcc;
    u8 unknown_fd0[0x10];  // (not used here)
    u32 word_fe0;
    u32 word_fe4;
    u32 word_fe8;
    u32 word_fec;
    u32 word_ff0;
    u32 word_ff4;
    u32 word_ff8;
    u32 word_ffc;
};
GUEST_OFFSET(Local_0023fa30_r0_13, word_fc8, 0xfc8);
GUEST_OFFSET(Local_0023fa30_r0_13, word_fcc, 0xfcc);
GUEST_OFFSET(Local_0023fa30_r0_13, word_fe0, 0xfe0);
GUEST_OFFSET(Local_0023fa30_r0_13, word_fe4, 0xfe4);
GUEST_OFFSET(Local_0023fa30_r0_13, word_fe8, 0xfe8);
GUEST_OFFSET(Local_0023fa30_r0_13, word_fec, 0xfec);
GUEST_OFFSET(Local_0023fa30_r0_13, word_ff0, 0xff0);
GUEST_OFFSET(Local_0023fa30_r0_13, word_ff4, 0xff4);
GUEST_OFFSET(Local_0023fa30_r0_13, word_ff8, 0xff8);
GUEST_OFFSET(Local_0023fa30_r0_13, word_ffc, 0xffc);

struct __attribute__((packed)) Local_0023fa30_r1_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
};
GUEST_OFFSET(Local_0023fa30_r1_9, word_0, 0x0);
GUEST_OFFSET(Local_0023fa30_r1_9, word_4, 0x4);
GUEST_OFFSET(Local_0023fa30_r1_9, word_8, 0x8);
GUEST_OFFSET(Local_0023fa30_r1_9, byte_c, 0xc);
GUEST_OFFSET(Local_0023fa30_r1_9, byte_d, 0xd);
GUEST_OFFSET(Local_0023fa30_r1_9, byte_e, 0xe);
GUEST_OFFSET(Local_0023fa30_r1_9, byte_f, 0xf);
GUEST_OFFSET(Local_0023fa30_r1_9, byte_10, 0x10);

inline constexpr u32 vtable_ProButtonNode_rec = 0x008ee6ecu;
inline constexpr u32 vtable_ProButtonNode_rec_at_e0 = 0x008ee738u;
inline guest::global<u32, 0x008490d8> global_008490d8;
inline guest::global<u32, 0x008490dc> global_008490dc;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x0022c53c, u32(u32)> DragIconGroup__DragIconGroup;
inline constexpr guest::Function<0x0029b7c0, u32(u32)> construct_drag_icon_control;
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> construct_button_node;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> construct_heap_allocator;
inline constexpr guest::Function<0x005e8934, u32(u32, u32, u32)> script__ChoiceStandardItem__ChoiceStandardItem;

u32 ProButtonNode__ProButtonNode(gptr<ProButtonNode_rec> pro_button_node_rec, u32 r1, u32 r2, u32 r3) {
    construct_button_node(pro_button_node_rec.addr(), r1, r2, r3);
    pro_button_node_rec->word_e4 = 0;
    pro_button_node_rec->byte_e8 = 0;
    u32 r3_1 = *global_008490dc;
    pro_button_node_rec->word_ec = *global_008490d8;
    pro_button_node_rec->word_f0 = r3_1;
    pro_button_node_rec->word_f4 = 0;
    pro_button_node_rec->byte_f8 = 0;
    pro_button_node_rec->word_fc = 0;
    pro_button_node_rec->vtable = vtable_ProButtonNode_rec;
    pro_button_node_rec->pro_button_node_rec_vtable = vtable_ProButtonNode_rec_at_e0;
    pro_button_node_rec->word_100 = 0;
    u32 r0_1 = pro_button_node_rec.addr() + 0x104u;
    construct_heap_allocator(r0_1, vtable_ProButtonNode_rec, vtable_ProButtonNode_rec_at_e0, r3_1);
    u32 r0_4 = Layout__Layout(r0_1 + 8u) + 0x14cu;
    construct_layout_animation(r0_4);
    u32 r0_5 = r0_4 + 0x28u;
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 + 0x28u;
    construct_layout_animation(r0_8);
    u32 r0_9 = r0_8 + 0x28u;
    construct_drag_icon_control(r0_9);
    u32 drag_icon_group = r0_9 + 0x118u;
    DragIconGroup__DragIconGroup(drag_icon_group);
    u32 r0_12 = for_each_element(drag_icon_group + 0x140u, 0x335154u, 0x294u, 4u);
    gptr<Local_0023fa30_r0_13> r0_13 = gptr<Local_0023fa30_r0_13>(r0_12 - 0x578u);
    gptr<Local_0023fa30_r1_9> r1_9 = gptr<Local_0023fa30_r1_9>(r0_13.addr() + 0x1000u);
    r0_13->word_fc8 = 0;
    r0_13->word_fcc = 0;
    r0_13->word_fe0 = 0;
    r0_13->word_fe4 = 0;
    r0_13->word_fe8 = 0;
    r0_13->word_fec = 0;
    r0_13->word_ff0 = 0;
    r0_13->word_ff4 = 0;
    r0_13->word_ff8 = 0;
    r0_13->word_ffc = 0;
    u32 r2_9 = ~0u;
    r1_9->word_0 = 0;
    r1_9->word_8 = r2_9;
    r1_9->word_4 = 0;
    r1_9->byte_c = 0;
    r1_9->byte_d = 0;
    r1_9->byte_e = 0;
    r1_9->byte_f = 0;
    r1_9->byte_10 = 0;
    u32 r0_16 = script__ChoiceStandardItem__ChoiceStandardItem(r0_13.addr() + 0x1014u, r1_9.addr(), r2_9) - 0x1014u;
    *gptr<u32>(r0_16 + 0x1cu) = r0_16 + 0x10cu;
    return r0_16;
}

}  // namespace d_0023fa30
GUEST_EXPORT_FRAMED(0x0023fa30, d_0023fa30::ProButtonNode__ProButtonNode, 0x4010);  // pushes {r4, lr} first, as the original
