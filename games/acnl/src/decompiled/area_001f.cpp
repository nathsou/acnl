// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001f4e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// An object actor's pre-draw step (as the actor's): 1 when it should draw.
namespace d_001f4e30 {

inline constexpr guest::Function<0x0057ba2c, u32(u32)> Actor__pre_draw;

u32 AcObjectBase__pre_draw(u32 ac_object_base) {
    u32 r0_1 = Actor__pre_draw(ac_object_base);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_001f4e30
GUEST_EXPORT_FRAMED(0x001f4e30, d_001f4e30::AcObjectBase__pre_draw, 0x4010);  // pushes {r4, lr} first, as the original

// f_001f4fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the actor with the class's vtables and zeroes its motion, rotation and scale.
namespace d_001f4fec {

struct __attribute__((packed)) ActorBase {
    u32 word_0;
    u8 unknown_4[0x44];  // (not used here)
    float float_48;
    float float_4c;
    float float_50;
    u8 unknown_54[0xc];  // (not used here)
    float float_60;
    float float_64;
    float float_68;
    u8 unknown_6c[0xc];  // (not used here)
    float float_78;
    float float_7c;
    float float_80;
    u16 half_84;
    u16 half_86;
    u16 half_88;
    u16 half_8a;
    float float_8c;
    float float_90;
    float float_94;
    u16 half_98;
    u8 unknown_9a[0x2];  // (not used here)
    float float_9c;
    float float_a0;
    float float_a4;
    u8 byte_a8;
    u8 unknown_a9[0x13];  // (not used here)
    float float_bc;
    float float_c0;
    u16 half_c4;
    u8 byte_c6;
    u8 byte_c7;
    u8 byte_c8;
};
GUEST_OFFSET(ActorBase, word_0, 0x0);
GUEST_OFFSET(ActorBase, float_48, 0x48);
GUEST_OFFSET(ActorBase, float_4c, 0x4c);
GUEST_OFFSET(ActorBase, float_50, 0x50);
GUEST_OFFSET(ActorBase, float_60, 0x60);
GUEST_OFFSET(ActorBase, float_64, 0x64);
GUEST_OFFSET(ActorBase, float_68, 0x68);
GUEST_OFFSET(ActorBase, float_78, 0x78);
GUEST_OFFSET(ActorBase, float_7c, 0x7c);
GUEST_OFFSET(ActorBase, float_80, 0x80);
GUEST_OFFSET(ActorBase, half_84, 0x84);
GUEST_OFFSET(ActorBase, half_86, 0x86);
GUEST_OFFSET(ActorBase, half_88, 0x88);
GUEST_OFFSET(ActorBase, half_8a, 0x8a);
GUEST_OFFSET(ActorBase, float_8c, 0x8c);
GUEST_OFFSET(ActorBase, float_90, 0x90);
GUEST_OFFSET(ActorBase, float_94, 0x94);
GUEST_OFFSET(ActorBase, half_98, 0x98);
GUEST_OFFSET(ActorBase, float_9c, 0x9c);
GUEST_OFFSET(ActorBase, float_a0, 0xa0);
GUEST_OFFSET(ActorBase, float_a4, 0xa4);
GUEST_OFFSET(ActorBase, byte_a8, 0xa8);
GUEST_OFFSET(ActorBase, float_bc, 0xbc);
GUEST_OFFSET(ActorBase, float_c0, 0xc0);
GUEST_OFFSET(ActorBase, half_c4, 0xc4);
GUEST_OFFSET(ActorBase, byte_c6, 0xc6);
GUEST_OFFSET(ActorBase, byte_c7, 0xc7);
GUEST_OFFSET(ActorBase, byte_c8, 0xc8);

struct __attribute__((packed)) ActorBaseConstructArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ActorBaseConstructArg1, word_0, 0x0);
GUEST_OFFSET(ActorBaseConstructArg1, word_4, 0x4);

inline constexpr guest::Function<0x0057ba68, u32(u32, u32, u32, u32)> construct_actor;

u32 ActorBase__construct(gptr<ActorBase> actor_base, gptr<ActorBaseConstructArg1> arg1, u32 r2, u32 r3, float S0, float S1) {
    construct_actor(actor_base.addr(), arg1.addr(), r2, r3);
    u32 r1_1 = arg1->word_0;
    float S0_1 = 0.0f;
    actor_base->word_0 = r1_1;
    float S1_1 = 1.0f;
    *gptr<u32>(actor_base.addr() + *gptr<u32>(r1_1 - 0xcu)) = arg1->word_4;
    actor_base->float_48 = S0_1;
    actor_base->float_4c = S0_1;
    actor_base->float_50 = S0_1;
    actor_base->float_60 = S0_1;
    actor_base->float_64 = S0_1;
    actor_base->float_68 = S0_1;
    actor_base->float_78 = S0_1;
    actor_base->float_7c = S0_1;
    actor_base->float_80 = S0_1;
    actor_base->half_84 = 0;
    actor_base->half_86 = 0;
    actor_base->half_88 = 0;
    actor_base->half_8a = 0;
    actor_base->float_8c = S0_1;
    actor_base->float_90 = S0_1;
    actor_base->float_94 = S1_1;
    actor_base->half_98 = 0;
    actor_base->float_9c = S0_1;
    actor_base->float_a0 = S0_1;
    actor_base->float_a4 = S0_1;
    actor_base->byte_a8 = 1;
    actor_base->float_bc = S0_1;
    actor_base->float_c0 = S0_1;
    actor_base->half_c4 = 0;
    actor_base->byte_c6 = 0;
    actor_base->byte_c7 = 1;
    actor_base->byte_c8 = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return actor_base.addr();
}

}  // namespace d_001f4fec
GUEST_EXPORT_FRAMED(0x001f4fec, d_001f4fec::ActorBase__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_001f581c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scales the shown insect or fish by its size, starts its sound (local when it is the main player's) and takes its
// item.
namespace d_001f581c {

inline constexpr guest::Function<0x002d58b0, u32(u32, u32, u32)> SoundObjInsectFish__start;
inline constexpr guest::Function<0x002d595c, u32(u32, u32)> change_mode_002d595c;
inline constexpr guest::Function<0x002e8cc8, u32(u32, u32, u32)> SoundObj__play_id;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32)> Item__category;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x00615b2c, u32(u32, u32)> creature_size_scale;
inline constexpr guest::Function<0x00615e8c, u32(u32, u32, u32, u32)> Fish__info;
inline constexpr guest::Function<0x00700558, u32(u32, u32)> Insect__size_scale;
inline constexpr guest::Function<0x00701150, u32(u32, u32, u32, u32)> Insect__info;

void AcObjectShow__setup_creature(gptr<AcObjectShow> ac_object_show, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 is_insect = ac_object_show->is_insect;
    u32 creature_size = ac_object_show->creature_size;
    if (is_insect != 0) {
        u32 insect_info_2 = Insect__info(creature_size, is_insect, r2, guest::cpu()->r[3]);
        Insect__size_scale(insect_info_2, ac_object_show->creature_size);
    } else {
        u32 fish_info_2 = Fish__info(creature_size, is_insect, r2, guest::cpu()->r[3]);
        creature_size_scale(fish_info_2, ac_object_show->creature_size);
    }
    u32 r0_5 = SoundObjInsectFish__start(ac_object_show.addr() + 0x260u, ac_object_show.addr() + 0x14u, uxth(*gptr<u8>(ac_object_show.addr() + 0x200u) == 0 ? 0x53u : ac_object_show->creature_size));
    u32 station = current_net_station(r0_5);
    u32 r1_6 = station == ac_object_show->owner_slot;
    change_mode_002d595c(ac_object_show.addr() + 0x260u, r1_6);
    Item__copy(ac_object_show.addr() + 0x20cu, ac_object_show.addr() + 0x208u);
    u32 r1_8 = 0x350u;
    *gptr<u16>(r1_8 + ac_object_show.addr()) = 0;
    if (ac_object_show->show_kind == 4u) {
        u32 category = Item__category(ac_object_show.addr() + 0x20cu, r1_8);
        r1_8 = guest::cpu()->r[1];
        if (category == 0x27u || category == 0x28u) {
            frame.release();
            SoundObj__play_id(ac_object_show.addr() + 0x260u, 0x1000613u, guest::cpu()->r[2]);
            return;
        }
    }
    guest::cpu()->r[1] = r1_8;
}

}  // namespace d_001f581c
GUEST_EXPORT(0x001f581c, d_001f581c::AcObjectShow__setup_creature);

// f_001f6cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the shown item changed or ended: stops its sound, clears it and, when asked, sets up the new one.
namespace d_001f6cc8 {

inline constexpr guest::Function<0x001f581c, u32(u32, u32, u32, u32)> AcObjectShow__setup_creature;
inline constexpr guest::Function<0x002d59a4, u32(u32, u32, u32, u32)> SoundObjInsectFish__stop;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> Item__same_number_as;

struct __attribute__((packed)) AcObjectShowUpdateItemFrame {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(AcObjectShowUpdateItemFrame, word_0, 0x0);
GUEST_SIZE(AcObjectShowUpdateItemFrame, 0x18);

void AcObjectShow__update_item(gptr<AcObjectShow> ac_object_show, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<AcObjectShowUpdateItemFrame> frame;  // the original's stack frame
    u32 r0 = ac_object_show.addr();
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 sound_obj_insect_fish = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    frame->word_0 = r3;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 is_empty = Item__is_empty(r0 + 0x20cu, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    if (is_empty == 0) {
        u32 state_b = ac_object_show->state_b;
        u32 r7 = 0x7ffeu;
        u32 r6 = 0u;
        u32 state_a = ac_object_show->state_a;
        if (state_b == 1u || state_b == 2u) {
            goto L_1f6d6c;
        }
        if (state_a != 1u && state_a != 2u) {
            return;
        }
L_1f6d0c:;
        r1_2 = r4 + 0x208u;
        r0_5 = r4 + 0x20cu;
        r0_6 = Item__same_number_as(r0_5, r1_2, guest::cpu()->r[2], r3);
        if (r0_6 != 0) {
            return;
        }
        sound_obj_insect_fish = r4 + 0x260u;
        *gptr<u8>(r4 + 0x254u) = u8(r6);
        SoundObjInsectFish__stop(sound_obj_insect_fish, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_8 = frame.at(0).addr();
        construct_item(r0_8, r7);
        r0_9 = r4 + 0x20cu;
        Item__copy(r0_9, r0_8);
        if (r5 == 0) {
            return;
        }
        ea_1 = frame.at(0).addr();
        r3_4 = *gptr<u32>(ea_1);
        frame.release();
        AcObjectShow__setup_creature(r4, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
        return;
L_1f6d6c:;
        if (state_a == 1u || state_a == 2u) {
            guest::preempt();
            goto L_1f6d0c;
        }
        *gptr<u8>(r4 + 0x254u) = u8(r6);
        SoundObjInsectFish__stop(r4 + 0x260u, guest::cpu()->r[1], guest::cpu()->r[2], r3);
        u32 r0_11 = frame.at(0).addr();
        construct_item(r0_11, r7);
        Item__copy(r4 + 0x20cu, r0_11);
    }
}

}  // namespace d_001f6cc8
GUEST_EXPORT(0x001f6cc8, d_001f6cc8::AcObjectShow__update_item);

// f_001f815c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the auto-camp book: clears its five entries (no item, kind 0xfc).
namespace d_001f815c {

inline constexpr u32 vtable_AutoCampBook = 0x008ecf74u;
inline guest::global<u32, 0x00986a10> auto_camp_book_entries;
inline guest::global<u32, 0x00986a14> auto_camp_entry_0_word_4;
inline guest::global<u8, 0x00986a18> auto_camp_entry_0_kind;
inline guest::global<u32, 0x00986a1c> auto_camp_entry_0_value;
inline guest::global<u32, 0x00986a20> auto_camp_entry_1_item;
inline guest::global<u32, 0x00986a24> auto_camp_entry_1_word_4;
inline guest::global<u8, 0x00986a28> auto_camp_entry_1_kind;
inline guest::global<u32, 0x00986a2c> auto_camp_entry_1_value;
inline guest::global<u32, 0x00986a30> auto_camp_entry_2_item;
inline guest::global<u32, 0x00986a34> auto_camp_entry_2_word_4;
inline guest::global<u8, 0x00986a38> auto_camp_entry_2_kind;
inline guest::global<u32, 0x00986a3c> auto_camp_entry_2_value;
inline guest::global<u32, 0x00986a40> auto_camp_entry_3_item;
inline guest::global<u32, 0x00986a44> auto_camp_entry_3_word_4;
inline guest::global<u8, 0x00986a48> auto_camp_entry_3_kind;
inline guest::global<u32, 0x00986a4c> auto_camp_entry_3_value;
inline guest::global<u32, 0x00986a50> auto_camp_entry_4_item;
inline guest::global<u32, 0x00986a54> auto_camp_entry_4_word_4;
inline guest::global<u8, 0x00986a58> auto_camp_entry_4_kind;
inline guest::global<u32, 0x00986a5c> auto_camp_entry_4_value;

void AutoCampBook__AutoCampBook(gptr<AutoCampBook> auto_camp_book) {
    auto_camp_book->vtable = vtable_AutoCampBook;
    u32 r12_1 = ~0u;
    *auto_camp_book_entries = 0;
    *auto_camp_entry_0_word_4 = 0;
    *auto_camp_entry_0_kind = 0xfc;
    *auto_camp_entry_1_item = 0;
    *auto_camp_entry_0_value = r12_1;
    *auto_camp_entry_1_word_4 = 0;
    *auto_camp_entry_1_kind = 0xfc;
    *auto_camp_entry_2_item = 0;
    *auto_camp_entry_1_value = r12_1;
    *auto_camp_entry_2_word_4 = 0;
    *auto_camp_entry_2_kind = 0xfc;
    *auto_camp_entry_3_item = 0;
    *auto_camp_entry_2_value = r12_1;
    *auto_camp_entry_3_word_4 = 0;
    *auto_camp_entry_3_kind = 0xfc;
    *auto_camp_entry_4_item = 0;
    *auto_camp_entry_3_value = r12_1;
    *auto_camp_entry_4_word_4 = 0;
    *auto_camp_entry_4_kind = 0xfc;
    *auto_camp_entry_4_value = r12_1;
}

}  // namespace d_001f815c
GUEST_EXPORT(0x001f815c, d_001f815c::AutoCampBook__AutoCampBook);

// f_001f8798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the icon button's actions, its node values and messages.
namespace d_001f8798 {

struct __attribute__((packed)) IconButton {
    u8 unknown_0[0x1c4];  // (not used here)
    u32 word_1c4;
    u8 unknown_1c8[0x38];  // (not used here)
    u32 word_200;
    u8 unknown_204[0xcc];  // (not used here)
    u32 word_2d0;
    u32 word_2d4;
    u8 unknown_2d8[0x6];  // (not used here)
    u8 byte_2de;
    u8 byte_2df;
    u8 byte_2e0;
    u8 unknown_2e1[0xd3];  // (not used here)
    u16 half_3b4;
    u8 unknown_3b6[0x2];  // (not used here)
    u32 word_3b8;
};
GUEST_OFFSET(IconButton, word_1c4, 0x1c4);
GUEST_OFFSET(IconButton, word_200, 0x200);
GUEST_OFFSET(IconButton, word_2d0, 0x2d0);
GUEST_OFFSET(IconButton, word_2d4, 0x2d4);
GUEST_OFFSET(IconButton, byte_2de, 0x2de);
GUEST_OFFSET(IconButton, byte_2df, 0x2df);
GUEST_OFFSET(IconButton, byte_2e0, 0x2e0);
GUEST_OFFSET(IconButton, half_3b4, 0x3b4);
GUEST_OFFSET(IconButton, word_3b8, 0x3b8);

struct __attribute__((packed)) Local_001f8798_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001f8798_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_001f8798_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_001f8798_r3_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Local_001f8798_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_001f8798_r3_1, float_4, 0x4);
GUEST_OFFSET(Local_001f8798_r3_1, float_8, 0x8);
GUEST_OFFSET(Local_001f8798_r3_1, float_c, 0xc);
GUEST_OFFSET(Local_001f8798_r3_1, float_10, 0x10);
GUEST_OFFSET(Local_001f8798_r3_1, float_14, 0x14);

inline guest::global<u32, 0x00848490> global_00848490;
inline guest::global<u32, 0x00848494> global_00848494;
inline guest::global<u32, 0x00848498> global_00848498;
inline guest::global<u32, 0x0084849c> global_0084849c;
inline guest::global<u32, 0x008484a0> global_008484a0;
inline guest::global<u32, 0x008484a4> global_008484a4;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> Model__set_flag_10;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> copy_four_animation_targets;

struct __attribute__((packed)) IconButtonSetupFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x18];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
};
GUEST_OFFSET(IconButtonSetupFrame, word_0, 0x0);
GUEST_OFFSET(IconButtonSetupFrame, word_4, 0x4);
GUEST_OFFSET(IconButtonSetupFrame, word_8, 0x8);
GUEST_OFFSET(IconButtonSetupFrame, word_c, 0xc);
GUEST_OFFSET(IconButtonSetupFrame, word_10, 0x10);
GUEST_OFFSET(IconButtonSetupFrame, word_14, 0x14);
GUEST_OFFSET(IconButtonSetupFrame, word_18, 0x18);
GUEST_OFFSET(IconButtonSetupFrame, word_1c, 0x1c);
GUEST_OFFSET(IconButtonSetupFrame, word_20, 0x20);
GUEST_OFFSET(IconButtonSetupFrame, word_3c, 0x3c);
GUEST_SIZE(IconButtonSetupFrame, 0x44);

void IconButton__setup(gptr<IconButton> icon_button, u32 r1) {
    guest::StackFrameOf<IconButtonSetupFrame> frame;  // the original's stack frame
    float S0_1 = 0.0f;
    float S1_1 = std::bit_cast<float>(*global_00848490);
    float S2_1 = std::bit_cast<float>(*global_00848494);
    float S3_1 = std::bit_cast<float>(*global_00848498);
    float S4_1 = std::bit_cast<float>(*global_0084849c);
    float S5_1 = std::bit_cast<float>(*global_008484a0);
    gptr<Local_001f8798_r3_1> r3_1 = gptr<Local_001f8798_r3_1>(frame.at(0x24).addr());
    r3_1->float_0 = S0_1;
    r3_1->float_4 = S1_1;
    r3_1->float_8 = S2_1;
    r3_1->float_c = S3_1;
    r3_1->float_10 = S4_1;
    r3_1->float_14 = S5_1;
    u32 r2_1 = *global_008484a4;
    frame->word_20 = icon_button.addr() + 0x24u;
    frame->word_1c = r1;
    frame->word_3c = r2_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    ButtonActionControl__setup(icon_button.addr() + 0x2e4u, frame.at(0x1c).addr(), 0u, r3_1.addr());
    float S0_2 = 0.0f;
    float S1_2 = -60.0f;
    icon_button->word_3b8 = icon_button->word_3b8 | 0x40u;
    frame->word_0 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    gptr<Local_001f8798_r0_2> r0_2 = gptr<Local_001f8798_r0_2>(frame.at(8).addr());
    r0_2->float_0 = S0_2;
    r0_2->float_4 = S1_2;
    frame->word_0 = icon_button->word_1c4;
    frame->word_4 = icon_button->word_200;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    set_node_values(icon_button.addr() + 0x204u, frame.at(0).addr());
    copy_four_animation_targets(icon_button.addr() + 0x2e4u, icon_button.addr() + 0x204u, 1u);
    icon_button->word_2d0 = 0x1000413;
    icon_button->byte_2de = 1;
    icon_button->word_2d4 = 0x1000399;
    icon_button->byte_2df = 1;
    icon_button->byte_2e0 = 1;
    Model__set_flag_10(icon_button.addr() + 0x2e4u, 0u);
    icon_button->half_3b4 = 3;
}

}  // namespace d_001f8798
GUEST_EXPORT_FRAMED(0x001f8798, d_001f8798::IconButton__setup, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001f891c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the icon button's node values.
namespace d_001f891c {

struct __attribute__((packed)) IconButton {
    u8 unknown_0[0x1c4];  // (not used here)
    u32 word_1c4;
    u32 word_1c8;
    u32 word_1cc;
    u32 word_1d0;
    u32 word_1d4;
    u32 word_1d8;
    u32 word_1dc;
    u32 word_1e0;
    u32 word_1e4;
    u32 word_1e8;
    u32 word_1ec;
    u32 word_1f0;
    u32 word_1f4;
    u32 word_1f8;
    u32 word_1fc;
    u32 word_200;
};
GUEST_OFFSET(IconButton, word_1c4, 0x1c4);
GUEST_OFFSET(IconButton, word_1c8, 0x1c8);
GUEST_OFFSET(IconButton, word_1cc, 0x1cc);
GUEST_OFFSET(IconButton, word_1d0, 0x1d0);
GUEST_OFFSET(IconButton, word_1d4, 0x1d4);
GUEST_OFFSET(IconButton, word_1d8, 0x1d8);
GUEST_OFFSET(IconButton, word_1dc, 0x1dc);
GUEST_OFFSET(IconButton, word_1e0, 0x1e0);
GUEST_OFFSET(IconButton, word_1e4, 0x1e4);
GUEST_OFFSET(IconButton, word_1e8, 0x1e8);
GUEST_OFFSET(IconButton, word_1ec, 0x1ec);
GUEST_OFFSET(IconButton, word_1f0, 0x1f0);
GUEST_OFFSET(IconButton, word_1f4, 0x1f4);
GUEST_OFFSET(IconButton, word_1f8, 0x1f8);
GUEST_OFFSET(IconButton, word_1fc, 0x1fc);
GUEST_OFFSET(IconButton, word_200, 0x200);

struct __attribute__((packed)) Local_001f891c_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_10 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_10, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_3, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_5 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_5, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_6 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_6, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_7 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_7, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_8 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_8, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r1_9 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_9, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f891c_r2_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001f891c_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_001f891c_r2_1, float_4, 0x4);

inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;

struct __attribute__((packed)) IconButtonSetNodeValuesFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(IconButtonSetNodeValuesFrame, word_0, 0x0);
GUEST_OFFSET(IconButtonSetNodeValuesFrame, word_4, 0x4);
GUEST_OFFSET(IconButtonSetNodeValuesFrame, word_8, 0x8);
GUEST_OFFSET(IconButtonSetNodeValuesFrame, word_c, 0xc);
GUEST_OFFSET(IconButtonSetNodeValuesFrame, word_10, 0x10);
GUEST_OFFSET(IconButtonSetNodeValuesFrame, word_14, 0x14);
GUEST_OFFSET(IconButtonSetNodeValuesFrame, word_18, 0x18);
GUEST_SIZE(IconButtonSetNodeValuesFrame, 0x1c);

void IconButton__set_node_values(gptr<IconButton> icon_button, u32 r1) {
    guest::StackFrameOf<IconButtonSetNodeValuesFrame> frame;  // the original's stack frame
    u32 r1_4 = 0;
    gptr<Local_001f891c_r1_8> r1_8 = gptr<Local_001f891c_r1_8>(0u);
    gptr<Local_001f891c_r1_9> r1_9 = gptr<Local_001f891c_r1_9>(0u);
    gptr<Local_001f891c_r1_10> r1_10 = gptr<Local_001f891c_r1_10>(0u);
    if (r1 != 0) {
        if (r1 == 1u) {
            gptr<Local_001f891c_r1_1> r1_1 = gptr<Local_001f891c_r1_1>(icon_button->word_1c8);
            r1_1->byte_b7 = u8(u32(r1_1->byte_b7) & 0xfeu);
            gptr<Local_001f891c_r1_2> r1_2 = gptr<Local_001f891c_r1_2>(icon_button->word_1cc);
            r1_2->byte_b7 = u8(u32(r1_2->byte_b7) & 0xfeu | 1u);
            gptr<Local_001f891c_r1_3> r1_3 = gptr<Local_001f891c_r1_3>(icon_button->word_1d0);
            r1_3->byte_b7 = u8(u32(r1_3->byte_b7) & 0xfeu);
            icon_button->word_1f8 = icon_button->word_1e8;
            icon_button->word_1fc = icon_button->word_1ec;
            r1_4 = icon_button->word_1d8;
            goto L_1f89d8;
        }
        if (r1 != 2u) {
            goto L_1f8a2c;
        }
        gptr<Local_001f891c_r1_5> r1_5 = gptr<Local_001f891c_r1_5>(icon_button->word_1c8);
        r1_5->byte_b7 = u8(u32(r1_5->byte_b7) & 0xfeu);
        gptr<Local_001f891c_r1_6> r1_6 = gptr<Local_001f891c_r1_6>(icon_button->word_1cc);
        r1_6->byte_b7 = u8(u32(r1_6->byte_b7) & 0xfeu);
        gptr<Local_001f891c_r1_7> r1_7 = gptr<Local_001f891c_r1_7>(icon_button->word_1d0);
        r1_7->byte_b7 = u8(u32(r1_7->byte_b7) & 0xfeu | 1u);
        icon_button->word_1f8 = icon_button->word_1f0;
        icon_button->word_1fc = icon_button->word_1f4;
        icon_button->word_200 = icon_button->word_1dc;
        goto L_1f8a2c;
    }
    r1_8 = gptr<Local_001f891c_r1_8>(icon_button->word_1c8);
    r1_8->byte_b7 = u8(u32(r1_8->byte_b7) & 0xfeu | 1u);
    r1_9 = gptr<Local_001f891c_r1_9>(icon_button->word_1cc);
    r1_9->byte_b7 = u8(u32(r1_9->byte_b7) & 0xfeu);
    r1_10 = gptr<Local_001f891c_r1_10>(icon_button->word_1d0);
    r1_10->byte_b7 = u8(u32(r1_10->byte_b7) & 0xfeu);
    icon_button->word_1f8 = icon_button->word_1e0;
    icon_button->word_1fc = icon_button->word_1e4;
    r1_4 = icon_button->word_1d4;
L_1f89d8:;
    icon_button->word_200 = r1_4;
L_1f8a2c:;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    float S0_1 = 0.0f;
    float S1_1 = -60.0f;
    frame->word_0 = icon_button->word_1c4;
    u32 r1_11 = icon_button->word_200;
    gptr<Local_001f891c_r2_1> r2_1 = gptr<Local_001f891c_r2_1>(frame.at(8).addr());
    frame->word_4 = r1_11;
    r2_1->float_0 = S0_1;
    r2_1->float_4 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    set_node_values(icon_button.addr() + 0x204u, frame.at(0).addr());
}

}  // namespace d_001f891c
GUEST_EXPORT_FRAMED(0x001f891c, d_001f891c::IconButton__set_node_values, 0x4000);  // pushes {lr} first, as the original

// f_001f8bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Notifies the scene's NPC manager (in the special scene, or for the first 3 outdoors).
namespace d_001f8bac {

inline constexpr u32 scene_npc_notify_a_address = 0x0094edc4u;
inline constexpr u32 scene_npc_notify_b_address = 0x0094edc8u;
inline guest::global<u32, 0x0014f898> global_0014f898;
inline guest::global<u32, 0x0094edc4> scene_npc_notify_a;
inline guest::global<u32, 0x0094edc8> scene_npc_notify_b;
inline constexpr guest::Function<0x0014f89c, u32(u32, u32, u32, u32)> import_thunk_14f89c;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;

u32 SceneNpc__notify(u32 scene_npc, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 scene_3 = current_scene_id(scene_npc, r1, r2, guest::cpu()->r[3]);
    if (scene_3 != 0) {
        u32 scene_4 = current_scene_id(scene_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (scene_4 == 0x71u) {
            u32 r0_3 = *scene_npc_notify_b;
            if (r0_3 != 0) {
                frame.release();
                return import_thunk_14f89c(r0_3, scene_npc, r1, guest::cpu()->r[3]);
            }
        }
    } else {
        u32 r0_4 = *scene_npc_notify_a;
        if (r0_4 != 0 && s32(scene_npc) < 3) {
            frame.release();
            return guest::call_address<u32>(*global_0014f898, r0_4, scene_npc, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    return 0u;
}

}  // namespace d_001f8bac
GUEST_EXPORT(0x001f8bac, d_001f8bac::SceneNpc__notify);

// f_001f9290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records the talk's arguments and shows the message; when shown, sets its flag.
namespace d_001f9290 {

struct __attribute__((packed)) TalkStartMessageOnceArg1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(TalkStartMessageOnceArg1, word_8, 0x8);

inline guest::global<u16, 0x00887314> global_00887314;
inline guest::global<u32, 0x0094f344> global_0094f344;
inline guest::global<u32, 0x0094f348> global_0094f348;
inline guest::global<u32, 0x0094f34c> global_0094f34c;
inline constexpr guest::Function<0x002b7f74, u32(u32)> set_global_flag;
inline constexpr guest::Function<0x00529c80, u32(u32, u32, u32, u32)> StringPool__find_message;

u32 Talk__start_message_once(u32 talk, gptr<TalkStartMessageOnceArg1> arg1, u32 r2, u32 r3) {
    *global_0094f344 = r2;
    *global_0094f348 = r3;
    *global_0094f34c = arg1.addr();
    u32 r2_1 = arg1->word_8;
    u32 string_pool = *global_00887314;
    u32 message = StringPool__find_message(string_pool, talk, r2_1, 0u);
    if (message != 0) {
        set_global_flag(arg1->word_8);
    }
    return message;
}

}  // namespace d_001f9290
GUEST_EXPORT_FRAMED(0x001f9290, d_001f9290::Talk__start_message_once, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001f9660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Appends the pointer while the array has room.
namespace d_001f9660 {

struct __attribute__((packed)) PtrArray {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u32 word_f4;
    u32 word_f8;
};
GUEST_OFFSET(PtrArray, word_f0, 0xf0);
GUEST_OFFSET(PtrArray, word_f4, 0xf4);
GUEST_OFFSET(PtrArray, word_f8, 0xf8);


void PtrArray__push(gptr<PtrArray> ptr_array, u32 r1) {
    u32 r2_1 = ptr_array->word_f0;
    if (s32(r2_1) >= s32(ptr_array->word_f4)) {
        return;
    }
    *gptr<u32>(ptr_array->word_f8 + (r2_1 << 2)) = r1;
    u32 r1_1 = ptr_array->word_f0 + 1u;
    ptr_array->word_f0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001f9660
GUEST_EXPORT(0x001f9660, d_001f9660::PtrArray__push);

// f_001f9884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the window's open or close animation ends: rewinds or completes it and starts the next one.
namespace d_001f9884 {

struct __attribute__((packed)) LayoutWindow {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(LayoutWindow, word_20, 0x20);
GUEST_OFFSET(LayoutWindow, word_24, 0x24);

inline guest::global<u32, 0x00846f00> window_anim_c;
inline guest::global<u32, 0x00846f04> window_anim_d;
inline guest::global<u32, 0x00846f08> window_anim_a;
inline guest::global<u32, 0x00846f0c> window_anim_b;
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> Listener__notify;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569420, u32(u32, u32)> Layout__refresh_pane;
inline constexpr guest::Function<0x00569508, u32(u32)> apply_value;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> LayoutAnimator__play;

void LayoutWindow__finish_animation(gptr<LayoutWindow> layout_window, u32 r1, float S0) {
    u32 r0 = layout_window.addr();
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = layout_window->word_20;
    u32 r0_1 = *window_anim_d;
    if (r3_1 == *window_anim_c) {
        if (r3_1 == 0) {
            r2_1 = layout_window->word_24 | r0_1;
            if ((r2_1 & 1u) == 0) {
                goto L_1f98fc;
            }
        }
        r2_1 = layout_window->word_24;
        if (r2_1 == r0_1) {
            goto L_1f98fc;
        }
    }
    r0_2 = *window_anim_b;
    if (r3_1 != *window_anim_a) {
        return;
    }
    if (r3_1 == 0) {
        r2_1 = layout_window->word_24 | r0_2;
        if ((r2_1 & 1u) == 0) {
            goto L_1f98fc;
        }
    }
    r2_1 = layout_window->word_24;
    if (r2_1 != r0_2) {
        return;
    }
L_1f98fc:;
    if (r1 == 0) {
        guest::cpu()->s[0] = S0;
        Listener__notify(r0 + 0x38u, r0 + 0x494u, r2_1, r3_1);
        float S0_1 = 0.0f;
        guest::cpu()->s[0] = S0_1;
        Animation__set_value(r0 + 0x494u);
        Layout__virtual_3(r0 + 0x38u);
        Layout__refresh_pane(r0 + 0x38u, r0 + 0x494u);
        LayoutAnimator__play(r0 + 0x14u, *window_anim_c, *window_anim_d);
    } else {
        guest::cpu()->s[0] = S0;
        Listener__notify(r0 + 0x38u, r0 + 0x494u, r2_1, r3_1);
        apply_value(r0 + 0x494u);
        Layout__virtual_3(r0 + 0x38u);
        Layout__refresh_pane(r0 + 0x38u, r0 + 0x494u);
        LayoutAnimator__play(r0 + 0x14u, *window_anim_a, *window_anim_b);
    }
}

}  // namespace d_001f9884
GUEST_EXPORT_FRAMED(0x001f9884, d_001f9884::LayoutWindow__finish_animation, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001f99b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the window's pane to the point (on its plane) and updates the layout.
namespace d_001f99b4 {

struct __attribute__((packed)) LayoutWindow {
    u8 unknown_0[0x4bc];  // (not used here)
    u32 word_4bc;
};
GUEST_OFFSET(LayoutWindow, word_4bc, 0x4bc);

struct __attribute__((packed)) LayoutWindowSetPaneXyArg1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(LayoutWindowSetPaneXyArg1, float_0, 0x0);
GUEST_OFFSET(LayoutWindowSetPaneXyArg1, float_4, 0x4);

struct __attribute__((packed)) Local_001f99b4_r2_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f99b4_r2_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_001f99b4_r3_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_001f99b4_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_001f99b4_r3_1, float_4, 0x4);
GUEST_OFFSET(Local_001f99b4_r3_1, float_8, 0x8);

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

void LayoutWindow__set_pane_xy(gptr<LayoutWindow> layout_window, gptr<LayoutWindowSetPaneXyArg1> arg1) {
    gptr<Local_001f99b4_r2_1> r2_1 = gptr<Local_001f99b4_r2_1>(layout_window->word_4bc);
    float S2_1 = 0.0f;
    float S0_1 = arg1->float_0;
    float S1_1 = arg1->float_4;
    gptr<Local_001f99b4_r3_1> r3_1 = gptr<Local_001f99b4_r3_1>(r2_1.addr() + 0x28u);
    r3_1->float_0 = S0_1;
    r3_1->float_4 = S1_1;
    r3_1->float_8 = S2_1;
    u32 r1_1 = u32(r2_1->byte_b7) & 0xcfu;
    r2_1->byte_b7 = u8(r1_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    Layout__virtual_3(layout_window.addr() + 0x38u, r1_1, r2_1.addr(), r3_1.addr());
}

}  // namespace d_001f99b4
GUEST_EXPORT(0x001f99b4, d_001f99b4::LayoutWindow__set_pane_xy);

// f_001f99e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the window's pane to the position and updates the layout.
namespace d_001f99e4 {

struct __attribute__((packed)) LayoutWindow {
    u8 unknown_0[0x4bc];  // (not used here)
    u32 word_4bc;
};
GUEST_OFFSET(LayoutWindow, word_4bc, 0x4bc);

struct __attribute__((packed)) LayoutWindowSetPanePositionArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(LayoutWindowSetPanePositionArg1, word_0, 0x0);
GUEST_OFFSET(LayoutWindowSetPanePositionArg1, word_4, 0x4);
GUEST_OFFSET(LayoutWindowSetPanePositionArg1, word_8, 0x8);

struct __attribute__((packed)) Local_001f99e4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001f99e4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001f99e4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_001f99e4_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f99e4_r1_1, byte_b7, 0xb7);

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

u32 LayoutWindow__set_pane_position(gptr<LayoutWindow> layout_window, gptr<LayoutWindowSetPanePositionArg1> arg1) {
    u32 r2_1 = arg1->word_0;
    u32 r3_1 = arg1->word_4;
    gptr<Local_001f99e4_r1_1> r1_1 = gptr<Local_001f99e4_r1_1>(layout_window->word_4bc);
    *gptr<u32>(r1_1.addr() + 0x30u) = arg1->word_8;
    gptr<Local_001f99e4_ea_2> ea_2 = gptr<Local_001f99e4_ea_2>(r1_1.addr() + 0x28u);
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r3_1;
    u32 r2_2 = u32(r1_1->byte_b7) & 0xcfu;
    r1_1->byte_b7 = u8(r2_2);
    return Layout__virtual_3(layout_window.addr() + 0x38u, r1_1.addr(), r2_2, r3_1);
}

}  // namespace d_001f99e4
GUEST_EXPORT(0x001f99e4, d_001f99e4::LayoutWindow__set_pane_position);

// f_001f9a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Notifies the window's active animations and starts the close animation.
namespace d_001f9a08 {

inline guest::global<u32, 0x00846f10> global_00846f10;
inline guest::global<u32, 0x00846f14> global_00846f14;
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> Layout__refresh_pane;
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> LayoutAnimator__play;

struct __attribute__((packed)) LayoutWindowStartCloseFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(LayoutWindowStartCloseFrame, word_0, 0x0);
GUEST_OFFSET(LayoutWindowStartCloseFrame, word_4, 0x4);
GUEST_OFFSET(LayoutWindowStartCloseFrame, word_8, 0x8);
GUEST_OFFSET(LayoutWindowStartCloseFrame, word_c, 0xc);
GUEST_OFFSET(LayoutWindowStartCloseFrame, word_10, 0x10);
GUEST_OFFSET(LayoutWindowStartCloseFrame, word_14, 0x14);
GUEST_SIZE(LayoutWindowStartCloseFrame, 0x18);

u32 LayoutWindow__start_close(u32 layout_window) {
    guest::StackFrameOf<LayoutWindowStartCloseFrame> frame;  // the original's stack frame
    u32 r5 = layout_window;
    u32 r2 = r5 + 0x41cu;
    u32 r3 = r5 + 0x444u;
    frame->word_0 = layout_window + 0x3ccu;
    frame->word_4 = r5 + 0x3f4u;
    frame->word_8 = r2;
    frame->word_c = r3;
    frame->word_10 = r5 + 0x46cu;
    frame->word_14 = r5 + 0x494u;
    u32 r6 = frame.at(0).addr();
    u32 i = 0u;
    do {
        u32 r1_1 = gptr<u32>(r6)[i];
        if (*gptr<u8>(r1_1 + 0x1cu) != 0) {
            Layout__refresh_pane(r5 + 0x38u, r1_1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (i < 6u);
    return LayoutAnimator__play(r5 + 0x14u, *global_00846f10, *global_00846f14);
}

}  // namespace d_001f9a08
GUEST_EXPORT_FRAMED(0x001f9a08, d_001f9a08::LayoutWindow__start_close, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_001f9a84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the window is in its open or close animation.
namespace d_001f9a84 {

struct __attribute__((packed)) LayoutWindow {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(LayoutWindow, word_20, 0x20);
GUEST_OFFSET(LayoutWindow, word_24, 0x24);

inline guest::global<u32, 0x00846f00> window_anim_c;
inline guest::global<u32, 0x00846f04> window_anim_d;
inline guest::global<u32, 0x00846f08> window_anim_a;
inline guest::global<u32, 0x00846f0c> window_anim_b;

u32 LayoutWindow__is_animating(gptr<LayoutWindow> layout_window) {
    u32 r3_1 = layout_window->word_20;
    u32 r1_1 = *window_anim_d;
    if (r3_1 == *window_anim_c && (r3_1 == 0 && ((layout_window->word_24 | r1_1) & 1u) == 0 || layout_window->word_24 == r1_1)) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r1_2 = *window_anim_b;
    if (r3_1 != *window_anim_a) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r3_1 == 0 && ((layout_window->word_24 | r1_2) & 1u) == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (layout_window->word_24 != r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_001f9a84
GUEST_EXPORT(0x001f9a84, d_001f9a84::LayoutWindow__is_animating);

// f_001f9b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Notifies the window's active animations, records the flag and starts the hide animation.
namespace d_001f9b08 {

inline guest::global<u32, 0x00846f18> global_00846f18;
inline guest::global<u32, 0x00846f1c> global_00846f1c;
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> Layout__refresh_pane;
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> LayoutAnimator__play;

struct __attribute__((packed)) LayoutWindowStartHideFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LayoutWindowStartHideFrame, word_0, 0x0);
GUEST_OFFSET(LayoutWindowStartHideFrame, word_4, 0x4);
GUEST_OFFSET(LayoutWindowStartHideFrame, word_8, 0x8);
GUEST_OFFSET(LayoutWindowStartHideFrame, word_c, 0xc);
GUEST_OFFSET(LayoutWindowStartHideFrame, word_10, 0x10);
GUEST_OFFSET(LayoutWindowStartHideFrame, word_14, 0x14);
GUEST_SIZE(LayoutWindowStartHideFrame, 0x1c);

u32 LayoutWindow__start_hide(u32 layout_window, u32 r1) {
    guest::StackFrameOf<LayoutWindowStartHideFrame> frame;  // the original's stack frame
    u32 r5 = layout_window;
    u32 r6 = r1;
    u32 r2 = r5 + 0x41cu;
    u32 r3 = r5 + 0x444u;
    frame->word_0 = layout_window + 0x3ccu;
    frame->word_4 = r5 + 0x3f4u;
    frame->word_8 = r2;
    frame->word_c = r3;
    frame->word_10 = r5 + 0x46cu;
    frame->word_14 = r5 + 0x494u;
    u32 r7 = frame.at(0).addr();
    u32 i = 0u;
    do {
        u32 r1_1 = gptr<u32>(r7)[i];
        if (*gptr<u8>(r1_1 + 0x1cu) != 0) {
            Layout__refresh_pane(r5 + 0x38u, r1_1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (i < 6u);
    *gptr<u8>(r5 + 0x4d3u) = u8(r6);
    return LayoutAnimator__play(r5 + 0x14u, *global_00846f18, *global_00846f1c);
}

}  // namespace d_001f9b08
GUEST_EXPORT_FRAMED(0x001f9b08, d_001f9b08::LayoutWindow__start_hide, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_001fa354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the window at once: stops its animations, completes the open one and enters the shown state.
namespace d_001fa354 {

struct __attribute__((packed)) LayoutWindow {
    u8 unknown_0[0x4d0];  // (not used here)
    u8 byte_4d0;
    u8 byte_4d1;
};
GUEST_OFFSET(LayoutWindow, byte_4d0, 0x4d0);
GUEST_OFFSET(LayoutWindow, byte_4d1, 0x4d1);

struct __attribute__((packed)) Local_001fa354_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001fa354_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001fa354_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001fa354_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001fa354_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_001fa354_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001fa354_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001fa354_ea_2, word_4, 0x4);

inline guest::global<u32, 0x00846f08> window_anim_a;
inline guest::global<u32, 0x00846f0c> window_anim_b;
inline constexpr guest::Function<0x004b9b64, u32(u32, u32)> Listener__notify;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> Layout__refresh_pane;
inline constexpr guest::Function<0x00569508, u32(u32)> apply_value;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> get_state_30;
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> LayoutAnimator__play;

u32 LayoutWindow__show_now(gptr<LayoutWindow> layout_window) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = layout_window.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r5 = r0;
    u32 r7 = 0u;
    layout_window->byte_4d1 = u8(r7);
    layout_window->byte_4d0 = u8(r7);
    u32 r2 = r5 + 0x41cu;
    u32 r6 = r5 + 0x444u;
    gptr<Local_001fa354_ea_1> ea_1 = gptr<Local_001fa354_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0 + 0x3ccu;
    ea_1->word_4 = r5 + 0x3f4u;
    ea_1->word_8 = r2;
    ea_1->word_c = r6;
    u32 r3 = r5 + 0x46cu;
    gptr<Local_001fa354_ea_2> ea_2 = gptr<Local_001fa354_ea_2>(frame.at(0x10).addr());
    ea_2->word_0 = r3;
    ea_2->word_4 = r5 + 0x494u;
    u32 i = r7;
    u32 r8 = frame.at(0).addr();
    do {
        r1_1 = gptr<u32>(r8)[i];
        r0_1 = *gptr<u8>(r1_1 + 0x1cu);
        if (r0_1 != 0) {
            r0_1 = Layout__refresh_pane(r5 + 0x38u, r1_1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (i < 6u);
    u32 r0_3 = get_state_30(r0_1, r1_1, r2, r3);
    *gptr<u8>(r0_3 + 0x40u) = u8(r7);
    Listener__notify(r5 + 0x38u, r6);
    apply_value(r6);
    Layout__virtual_3(r5 + 0x38u);
    Layout__refresh_pane(r5 + 0x38u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
    return LayoutAnimator__play(r5 + 0x14u, *window_anim_a, *window_anim_b);
}

}  // namespace d_001fa354
GUEST_EXPORT_FRAMED(0x001fa354, d_001fa354::LayoutWindow__show_now, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_001fa744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the player's profile (0x81) or the request for one (0x82) to the session.
namespace d_001fa744 {

struct __attribute__((packed)) Local_001fa744_ea_1 {
    u32 net_chat;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001fa744_ea_1, net_chat, 0x0);
GUEST_OFFSET(Local_001fa744_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001fa744_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001fa744_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_001fa744_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_001fa744_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_001fa744_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001fa744_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001fa744_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_001fa744_ea_2, word_8, 0x8);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00108421, u32(u32, u32)> record_1ac_address;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x0075dfe8, u32(u32)> NetSession__station;

struct __attribute__((packed)) NetChatSendProfileFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(NetChatSendProfileFrame, word_8, 0x8);
GUEST_SIZE(NetChatSendProfileFrame, 0x18);

void NetChat__send_profile(u32 net_chat, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetChatSendProfileFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    gptr<Local_001fa744_ea_1> ea_1 = gptr<Local_001fa744_ea_1>(frame.at(0).addr());
    ea_1->net_chat = net_chat;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r14;
    u32 r0_1 = current_net_signed_value(net_chat, r1, r2, r3);
    if (r0_1 != 0) {
        if (r1 != 0) {
            u32 data_base = get_data_base(r0_1);
            u32 r0_4 = record_1ac_address(data_base + 0x6e238u, frame->word_8);
            u32 r0_6 = NetSession__station(*net_session);
            r3_4 = 0x1acu;
            r2_4 = r0_4;
            r1_4 = r0_6 == 0 ? 4u : 0u;
            r0_7 = 0x81u;
        } else {
            u32 r0_9 = NetSession__station(*net_session);
            r2_4 = frame.at(8).addr();
            if (r0_9 == 0) {
                r3_4 = 4u;
                r1_4 = 4u;
            } else {
                r3_4 = 0x1acu;
                r1_4 = 0u;
            }
            r0_7 = 0x82u;
        }
        send_message(r0_7, r1_4, r2_4, r3_4);
    }
    gptr<Local_001fa744_ea_2> ea_2 = gptr<Local_001fa744_ea_2>(frame.at(0xc).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_001fa744
GUEST_EXPORT(0x001fa744, d_001fa744::NetChat__send_profile);

// f_001fad34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the id the object points to (+0x60) to the default.
namespace d_001fad34 {

struct __attribute__((packed)) ObjectResetId60Arg0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(ObjectResetId60Arg0, word_60, 0x60);

inline guest::global<u16, 0x008c9f1e> default_object_id;

void Object__reset_id_60(gptr<ObjectResetId60Arg0> object) {
    *gptr<u16>(object->word_60) = *default_object_id;
}

}  // namespace d_001fad34
GUEST_EXPORT(0x001fad34, d_001fad34::Object__reset_id_60);

// f_001fbec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the menu's eight panes, binds their texts and shows the current page.
namespace d_001fbec8 {

inline constexpr u32 global_0094fba0_address = 0x0094fba0u;
inline constexpr u32 menu_selection_address = 0x0094fd3cu;
inline guest::global<u32, 0x0094fd3c> menu_selection;
inline guest::global<u32, 0x0094fd58> town_runtime_flags;
inline constexpr guest::Function<0x001fc044, u32(u32, u32)> MenuList__show_page;
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32)> TextBox__bind_pane;

void MenuList__bind_panes(u32 menu_list, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;
    u32 r5 = menu_list;
    u32 i = 0u;
    u32 r6 = global_0094fba0_address;
    do {
        u32 r0_2 = find_of_type_b(r5 + 0x4cu, gptr<u32>(r6)[i], r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        u32 r1_2 = r5 + (i << 2);
        i += 1u;
        *gptr<u32>(r1_2 + 0x61cu) = r0_2;
        guest::preempt();
    } while (s32(i) < 8);
    u32 r0_3 = r5 + 0xbd4u;
    TextBox__bind_pane(r0_3, *gptr<u32>(r5 + 0x61cu), 0u);
    u32 r0_4 = r5 + 0xc98u;
    TextBox__bind_pane(r0_4, *gptr<u32>(r5 + 0x620u), 0u);
    u32 r0_5 = r5 + 0xd5cu;
    TextBox__bind_pane(r0_5, *gptr<u32>(r5 + 0x624u), 0u);
    TextBox__bind_pane(r5 + 0xe20u, *gptr<u32>(r5 + 0x628u), 0u);
    u32 r0_7 = r5 + 0xee4u;
    TextBox__bind_pane(r0_7, *gptr<u32>(r5 + 0x62cu), 0u);
    u32 r0_8 = r5 + 0xfa8u;
    TextBox__bind_pane(r0_8, *gptr<u32>(r5 + 0x630u), 0u);
    u32 r0_9 = r5 + 0x106cu;
    TextBox__bind_pane(r0_9, *gptr<u32>(r5 + 0x634u), 0u);
    u32 r0_10 = r5 + 0x1130u;
    TextBox__bind_pane(r0_10, *gptr<u32>(r5 + 0x638u), 0u);
    *gptr<u8>(r0_3 + 0x38u) = 1;
    *gptr<u8>(r0_4 + 0x38u) = 1;
    *gptr<u8>(r0_5 + 0x38u) = 1;
    *gptr<u8>(r5 + 0xe58u) = 1;
    *gptr<u8>(r0_7 + 0x38u) = 1;
    *gptr<u8>(r0_8 + 0x38u) = 1;
    *gptr<u8>(r0_9 + 0x38u) = 1;
    *gptr<u8>(r0_10 + 0x38u) = 1;
    MenuList__show_page(r5, *gptr<u32>(*menu_selection + 0x200u));
    *town_runtime_flags = *town_runtime_flags & ~0x10u;
}

}  // namespace d_001fbec8
GUEST_EXPORT_FRAMED(0x001fbec8, d_001fbec8::MenuList__bind_panes, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001fc5a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the letter menu: its resource loader, button, renderers, animations, layouts and menu base.
namespace d_001fc5a8 {

inline constexpr u32 vtable_BsMenuLetter = 0x008ed158u;
inline constexpr u32 vtable_BsMenuLetter_at_28 = 0x008ed1c4u;
inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr guest::Function<0x002b6ef8, u32(u32)> ButtonActionNode__destructor;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__destructor;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x0053721c, u32(u32, u32, u32, u32)> item__ResLoader__destructor;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32)> script__RenderTrace__destructor_b;
inline constexpr guest::Function<0x006aa8a0, u32(u32)> destroy_array_owner_c;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuLetter__destructor(gptr<BsMenuLetter> bs_menu_letter, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_letter->vtable = vtable_BsMenuLetter;
    bs_menu_letter->bs_menu_letter_vtable = vtable_BsMenuLetter_at_28;
    u32 r0_1 = bs_menu_letter.addr() + 0x1bbcu;
    item__ResLoader__destructor(r0_1, vtable_BsMenuLetter, vtable_BsMenuLetter_at_28, r3);
    bs_menu_letter->vtable_11f4 = vtable_ComButton1Lyt;
    bs_menu_letter->control1_button_vtable_1670 = vtable_Control1Button_at_e4;
    bs_menu_letter->control1_button_vtable = vtable_Control1Button;
    destroy_array_elements(r0_1 - 0x518u, 0x2e0b3cu, 0x518u, 1u);
    ControlButtonBase__destructor(r0_1 - 0x630u);
    bs_menu_letter->vtable_11f4 = vtable_ComButtonLytBase;
    u32 r0_6 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r0_1 - 0x878u, vtable_ComButtonLytBase) - 0x14cu);
    script__RenderTrace__destructor_b(r0_6 - 0xc8u);
    script__RenderTrace__destructor_b(r0_6 - 0x18cu);
    script__RenderTrace__destructor_b(r0_6 - 0x250u);
    script__RenderTrace__destructor_b(r0_6 - 0x314u);
    script__RenderTrace__destructor_b(r0_6 - 0x3d8u);
    script__RenderTrace__destructor_b(r0_6 - 0x49cu);
    script__RenderTrace__destructor_b(r0_6 - 0x560u);
    script__RenderTrace__destructor_b(r0_6 - 0x624u);
    ButtonActionNode__destructor(r0_6 - 0x704u);
    destroy_button_action_control(r0_6 - 0x7e8u);
    destroy_array_owner_c(r0_6 - 0xbbcu);
    destroy_animation(r0_6 - 0xc04u);
    destroy_animation(r0_6 - 0xc2cu);
    destroy_animation(r0_6 - 0xc54u);
    destroy_animation(r0_6 - 0xc7cu);
    destroy_animation(r0_6 - 0xca4u);
    destroy_animation(r0_6 - 0xcccu);
    u32 r0_29 = Layout__destructor(Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r0_6 - 0xf14u, guest::cpu()->r[1]) - 0x14cu) - 0x14cu);
    frame.release();
    return MenuBase__destructor(r0_29 - 0x4cu, guest::cpu()->r[1]);
}

}  // namespace d_001fc5a8
GUEST_EXPORT(0x001fc5a8, d_001fc5a8::BsMenuLetter__destructor);

// f_001fdc84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the melody menu: its notes, buttons, animations, layouts and menu base.
namespace d_001fdc84 {

inline constexpr u32 vtable_BsMenuMelody = 0x008ed1d8u;
inline constexpr u32 vtable_BsMenuMelody_at_28 = 0x008ed244u;
inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__destructor;
inline constexpr guest::Function<0x0031c92c, u32(u32)> ButtonActionCstmNode__destructor;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuMelody__destructor(gptr<BsMenuMelody> bs_menu_melody) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_melody->vtable = vtable_BsMenuMelody;
    bs_menu_melody->bs_menu_melody_vtable = vtable_BsMenuMelody_at_28;
    destroy_array_elements(bs_menu_melody.addr() + 0x5400u, 0x81dfb4u, 0x20u, 0x10u);
    bs_menu_melody->vtable_4510 = vtable_ComButton2Lyt;
    bs_menu_melody->control2_button_vtable_498c = vtable_Control2Button_at_e4;
    bs_menu_melody->control2_button_vtable = vtable_Control2Button;
    destroy_array_elements(bs_menu_melody.addr() + 0x49c0u, 0x2e0b3cu, 0x518u, 2u);
    ControlButtonBase__destructor(bs_menu_melody.addr() + 0x48a8u);
    bs_menu_melody->vtable_4510 = vtable_ComButtonLytBase;
    u32 r0_6 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(bs_menu_melody.addr() + 0x4660u, vtable_ComButtonLytBase) - 0x14cu);
    ButtonActionCstmNode__destructor(r0_6 - 0xe4u);
    destroy_animation(r0_6 - 0x10cu);
    destroy_animation(r0_6 - 0x134u);
    destroy_animation(r0_6 - 0x15cu);
    destroy_animation(r0_6 - 0x184u);
    destroy_animation(r0_6 - 0x1acu);
    destroy_animation(r0_6 - 0x1d4u);
    destroy_animation(r0_6 - 0x1fcu);
    destroy_animation(r0_6 - 0x224u);
    destroy_array_elements(r0_6 - 0x3fe8u, 0x1ad16cu, 0x3dcu, 0x10u);
    u32 r0_20 = Layout__destructor(Layout__destructor(r0_6 - 0x4134u) - 0x14cu);
    u32 r0_22 = ssys__ma__lyt__ArcResAccReader__destructor(r0_20 - 0x248u, guest::cpu()->r[1]);
    frame.release();
    return MenuBase__destructor(r0_22 - 0x4cu, guest::cpu()->r[1]);
}

}  // namespace d_001fdc84
GUEST_EXPORT(0x001fdc84, d_001fdc84::BsMenuMelody__destructor);

// f_001fde44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the notice's message and stores its handle.
namespace d_001fde44 {

inline constexpr u32 notice_state_address = 0x00950124u;
inline guest::global<u16, 0x00887330> global_00887330;
inline guest::global<u32, 0x00950128> notice_message_handle;
inline constexpr guest::Function<0x00529d08, u32(u32, u32, u32, u32)> StringPool__find_message_2;

void Notice__show_message(u32 notice) {
    u32 string_pool = *global_00887330;
    *notice_message_handle = StringPool__find_message_2(string_pool, notice, 0u, guest::cpu()->r[3]);
    guest::cpu()->r[1] = notice_state_address;
}

}  // namespace d_001fde44
GUEST_EXPORT_FRAMED(0x001fde44, d_001fde44::Notice__show_message, 0x4010);  // pushes {r4, lr} first, as the original

// f_001fde7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the id at 0x993068 to the default.
namespace d_001fde7c {

inline constexpr u32 global_id_address = 0x00993068u;
inline guest::global<u16, 0x008c9f1e> default_object_id;
inline guest::global<u32, 0x00993068> global_id;

u32 reset_global_id_993068() {
    u32 r1_1 = *global_id;
    u32 r0_1 = *default_object_id;
    *gptr<u16>(r1_1) = u16(r0_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001fde7c
GUEST_EXPORT(0x001fde7c, d_001fde7c::reset_global_id_993068);

// f_001fde9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Closes the notice's message and forgets its handle.
namespace d_001fde9c {

inline constexpr u32 notice_state_address = 0x00950124u;
inline constexpr u32 notice_message_handle_address = 0x00950128u;
inline guest::global<u32, 0x00950128> notice_message_handle;
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> MessageHandle__close;

u32 Notice__close_message() {
    MessageHandle__close(*notice_message_handle, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *notice_message_handle = 0;
    return 0u;
}

}  // namespace d_001fde9c
GUEST_EXPORT_FRAMED(0x001fde9c, d_001fde9c::Notice__close_message, 0x4010);  // pushes {r4, lr} first, as the original

// f_001fdf44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the notice's message is closed; asks it to close once otherwise.
namespace d_001fdf44 {

inline constexpr u32 notice_state_address = 0x00950124u;
inline constexpr u32 notice_message_handle_address = 0x00950128u;
inline constexpr u32 notice_close_requested_address = 0x0095012cu;
inline guest::global<u32, 0x00950128> notice_message_handle;
inline guest::global<u32, 0x0095012c> notice_close_requested;
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> MessageHandle__close;

u32 Notice__is_closed(u32 r0_unused, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_1 = *notice_message_handle;
    if (r0_1 == 0) {
        r0_2 = 1u;
    } else {
        r1 = *notice_close_requested;
        if (r1 == 0) {
            MessageHandle__close(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            *notice_close_requested = *notice_close_requested + 1u;
        }
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001fdf44
GUEST_EXPORT_FRAMED(0x001fdf44, d_001fdf44::Notice__is_closed, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001fefa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the census window: an in-and-out window with its background, content list and renderers.
namespace d_001fefa4 {

struct __attribute__((packed)) Local_001fefa4_r1_5 {
    u8 unknown_0[0x244];  // (not used here)
    float float_244;
    float float_248;
};
GUEST_OFFSET(Local_001fefa4_r1_5, float_244, 0x244);
GUEST_OFFSET(Local_001fefa4_r1_5, float_248, 0x248);

inline constexpr u32 vtable_CensusWindow = 0x008ed2e8u;
inline constexpr u32 vtable_CensusWindow_at_24 = 0x008ed31cu;
inline constexpr u32 vtable_CensusContentList = 0x008f2638u;
inline constexpr u32 vtable_CensusBG = 0x008f8b10u;
inline constexpr u32 vtable_state__Mode_CensusWindow_ = 0x009081c4u;
inline guest::global<u32, 0x00879db8> global_00879db8;
inline guest::global<u32, 0x00879dbc> global_00879dbc;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x001cb884, u32(u32)> InOutWindow__construct;
inline constexpr guest::Function<0x00299b30, u32(u32, u32)> CommonScrollBar__CommonScrollBar;
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32, u32)> construct_animation_pair;
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> SoPaCaWindowBase__SoPaCaWindowBase;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005e3128, u32(u32, u32)> script__RenderTrace__RenderTrace;

u32 CensusWindow__construct(gptr<CensusWindow> census_window, float S0) {
    census_window->word_4 = 0;
    census_window->byte_8 = 0;
    u32 r2_1 = *global_00879dbc;
    census_window->word_c = *global_00879db8;
    census_window->word_10 = r2_1;
    census_window->word_14 = 0;
    census_window->vtable = vtable_state__Mode_CensusWindow_;
    census_window->byte_18 = 0;
    census_window->word_1c = 0;
    census_window->word_20 = 0;
    u32 so_pa_ca_window_base = (census_window.addr() + 0x20u) + 4u;
    SoPaCaWindowBase__SoPaCaWindowBase(so_pa_ca_window_base, vtable_state__Mode_CensusWindow_, r2_1, census_window.addr() + 0xcu);
    census_window->vtable = vtable_CensusWindow;
    census_window->census_window_vtable = vtable_CensusWindow_at_24;
    u32 r0_5 = InOutWindow__construct(ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(so_pa_ca_window_base + 8u, vtable_CensusWindow, vtable_CensusWindow_at_24) + 0x248u);
    *gptr<u32>(r0_5) = vtable_CensusBG;
    u32 r0_6 = r0_5 + 0x1b0u;
    construct_animation_pair(r0_6, vtable_CensusBG, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = InOutWindow__construct(r0_6 + 0x5cu);
    *gptr<u32>(r0_8) = vtable_CensusContentList;
    u32 r0_11 = for_each_element(r0_8 + 0x1b0u, 0x2caec8u, 0x198u, 7u) + 0xb28u;
    construct_layout_animation(r0_11);
    u32 r0_12 = r0_11 - 0xcd8u;
    *gptr<u32>(r0_12 + 0xd00u) = 0;
    u32 ea_3 = r0_12 + 0xd04u;
    *gptr<u32>(ea_3) = 0;
    u32 r0_14 = script__RenderTrace__RenderTrace(ea_3 + 0x20u, 0x40u);
    u32 r0_18 = for_each_element(CommonScrollBar__CommonScrollBar(r0_14 + 0xc4u, r0_14 - 0xd24u) + 0x798u, 0x1c81a8u, 0x1cu, 7u);
    u32 r0_19 = r0_18 - 0x1580u;
    float S0_10 = 0.0f;
    gptr<Local_001fefa4_r1_5> r1_5 = gptr<Local_001fefa4_r1_5>(r0_19 + 0x1400u);
    r1_5->float_244 = S0_10;
    r1_5->float_248 = S0_10;
    *gptr<u32>(r0_19 + 0x164cu) = 0;
    u32 r0_20 = r0_19 + 0x1650u;
    guest::cpu()->s[0] = S0_10;
    construct_animation_pair(r0_20, r1_5.addr(), 0x1cu, 7u);
    return r0_20 - 0x1ad0u;
}

}  // namespace d_001fefa4
GUEST_EXPORT_FRAMED(0x001fefa4, d_001fefa4::CensusWindow__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ff124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a census window: its content list, background animations, window and archive reader.
namespace d_001ff124 {

inline constexpr u32 vtable_CensusWindow = 0x008ed2e8u;
inline constexpr u32 vtable_CensusWindow_at_24 = 0x008ed31cu;
inline constexpr u32 vtable_CensusBG = 0x008f8b10u;
inline constexpr guest::Function<0x001cb8fc, u32(u32)> InOutWindow__destructor;
inline constexpr guest::Function<0x002b7c94, u32(u32, u32)> destroy_animation_pair;
inline constexpr guest::Function<0x002cbad8, u32(u32, u32, u32, u32)> CensusContentList__destructor;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;

u32 CensusWindow__destructor(gptr<CensusWindow> census_window) {
    census_window->vtable = vtable_CensusWindow;
    census_window->census_window_vtable = vtable_CensusWindow_at_24;
    u32 r0_2 = CensusContentList__destructor(census_window.addr() + 0x480u, vtable_CensusWindow, vtable_CensusWindow_at_24, guest::cpu()->r[3]);
    *gptr<u32>(r0_2 - 0x20cu) = vtable_CensusBG;
    u32 r0_3 = r0_2 - 0x5cu;
    destroy_animation_pair(r0_3, vtable_CensusBG);
    return ssys__ma__lyt__ArcResAccReader__destructor(InOutWindow__destructor(r0_3 - 0x1b0u) - 0x248u) - 0x2cu;
}

}  // namespace d_001ff124
GUEST_EXPORT_FRAMED(0x001ff124, d_001ff124::CensusWindow__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ff5c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the bone's movement since the last frame to the actor's motion and records its new position.
namespace d_001ff5c0 {

struct __attribute__((packed)) Actor {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    float float_10c;
    float float_110;
    float float_114;
    float float_118;
    float float_11c;
    float float_120;
};
GUEST_OFFSET(Actor, word_108, 0x108);
GUEST_OFFSET(Actor, float_10c, 0x10c);
GUEST_OFFSET(Actor, float_110, 0x110);
GUEST_OFFSET(Actor, float_114, 0x114);
GUEST_OFFSET(Actor, float_118, 0x118);
GUEST_OFFSET(Actor, float_11c, 0x11c);
GUEST_OFFSET(Actor, float_120, 0x120);

struct __attribute__((packed)) Local_001ff5c0_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    float float_c;
    u8 unknown_10[0xc];  // (not used here)
    float float_1c;
    u8 unknown_20[0xc];  // (not used here)
    float float_2c;
};
GUEST_OFFSET(Local_001ff5c0_r1_1, float_c, 0xc);
GUEST_OFFSET(Local_001ff5c0_r1_1, float_1c, 0x1c);
GUEST_OFFSET(Local_001ff5c0_r1_1, float_2c, 0x2c);


void Actor__accumulate_root_motion(gptr<Actor> actor) {
    gptr<Local_001ff5c0_r1_1> r1_1 = gptr<Local_001ff5c0_r1_1>(actor->word_108 + 0x80u);
    float S1_1 = r1_1->float_c;
    float S0_1 = r1_1->float_1c;
    float S2_1 = r1_1->float_2c;
    float S3_1 = actor->float_11c - S0_1;
    float S4_1 = actor->float_120 - S2_1;
    actor->float_10c = actor->float_10c + (actor->float_118 - S1_1);
    actor->float_110 = actor->float_110 + S3_1;
    actor->float_114 = actor->float_114 + S4_1;
    actor->float_118 = S1_1;
    actor->float_11c = S0_1;
    actor->float_120 = S2_1;
}

}  // namespace d_001ff5c0
GUEST_EXPORT(0x001ff5c0, d_001ff5c0::Actor__accumulate_root_motion);

// f_001ff92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a drag icon node: a button node with an icon animation, enabled, at no offset.
namespace d_001ff92c {

inline constexpr u32 vtable_DragIconNode = 0x008ed374u;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> construct_button_node;

u32 DragIconNode__DragIconNode(gptr<DragIconNode> drag_icon_node, u32 r1, u32 r2, u32 r3, float S0) {
    construct_button_node(drag_icon_node.addr(), r1, r2, r3);
    drag_icon_node->vtable = vtable_DragIconNode;
    construct_layout_animation(drag_icon_node.addr() + 0xe0u);
    drag_icon_node->word_108 = 0;
    drag_icon_node->word_124 = 0;
    drag_icon_node->half_128 = 0;
    drag_icon_node->half_12a = 0;
    drag_icon_node->byte_12c = 0;
    float S0_1 = 0.0f;
    drag_icon_node->byte_12d = 1;
    drag_icon_node->float_10c = S0_1;
    drag_icon_node->float_110 = S0_1;
    drag_icon_node->float_114 = S0_1;
    drag_icon_node->float_118 = S0_1;
    drag_icon_node->float_11c = S0_1;
    drag_icon_node->float_120 = S0_1;
    drag_icon_node->word_cc = 0x100038e;
    drag_icon_node->byte_da = 1;
    guest::cpu()->s[0] = S0_1;
    return drag_icon_node.addr();
}

}  // namespace d_001ff92c
GUEST_EXPORT_FRAMED(0x001ff92c, d_001ff92c::DragIconNode__DragIconNode, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ff9d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a drag icon node: unbinds and destroys its icon animation, then the button action node.
namespace d_001ff9d8 {

inline constexpr u32 vtable_DragIconNode = 0x008ed374u;
inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> ButtonActionNode__destructor;
inline constexpr guest::Function<0x00569774, u32(u32, u32, u32, u32)> TextureAnim__bind_texture;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;

u32 DragIconNode__destructor(gptr<DragIconNode> drag_icon_node) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    drag_icon_node->vtable = vtable_DragIconNode;
    TextureAnim__bind_texture(drag_icon_node.addr() + 0xe0u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(drag_icon_node.addr() + 0xe0u);
    frame.release();
    return ButtonActionNode__destructor(drag_icon_node.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001ff9d8
GUEST_EXPORT(0x001ff9d8, d_001ff9d8::DragIconNode__destructor);
