// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006d12d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d12d0 {

inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_AtmWindow = 0x008f8ee4u;
inline constexpr u32 vtable_BsMenuAtm = 0x008f924cu;
inline constexpr u32 vtable_BsMenuAtm_at_28 = 0x008f92b8u;
inline constexpr u32 vtable_TenkeyPad = 0x008f978cu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> script__RenderMain__RenderMain_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuAtm__virtual_0_006d12d0(gptr<BsMenuAtm> bs_menu_atm) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_atm->word_28 = vtable_BsMenuAtm_at_28;
    bs_menu_atm->word_0 = vtable_BsMenuAtm;
    u32 r4_1 = bs_menu_atm.addr() + 0x27d0u;  // (from the original)
    bs_menu_atm->word_2438 = vtable_ComButton2Lyt;
    bs_menu_atm->word_27d0 = vtable_Control2Button;
    bs_menu_atm->word_28b4 = vtable_Control2Button_at_e4;
    destroy_array_elements(bs_menu_atm.addr() + 0x28e8u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(r4_1);
    bs_menu_atm->word_2438 = vtable_ComButtonLytBase;
    u32 r0_3 = ssys__ma__lyt__ArcResAccReader__destructor(r4_1 - 0x248u, vtable_ComButtonLytBase);  // (from the original)
    u32 r0_5 = Layout__destructor(r0_3 - 0x14cu);  // (from the original)
    u32 ea_1 = r0_5 - 0x18c4u;  // (from the original)
    *gptr<u32>(ea_1) = vtable_TenkeyPad;
    destroy_array_elements(ea_1 + 0xe40u, 0x2b6ef8u, 0xe0u, 0xcu);  // (from the original)
    u32 r0_7 = ea_1 + 0xd5cu;  // (from the original)
    destroy_button_action_control(r0_7);
    destroy_array_elements(r0_7 - 0x930u, 0x6eed5cu, 0xc4u, 0xcu);  // (from the original)
    u32 r0_9 = r0_7 - 0x97cu;  // (from the original)
    destroy_animation(r0_9);
    u32 r0_10 = r0_9 - 0x28u;  // (from the original)
    destroy_animation(r0_10);
    u32 r0_12 = Layout__destructor(r0_10 - 0x14cu);  // (from the original)
    u32 r0_14 = ssys__ma__lyt__ArcResAccReader__destructor(r0_12 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    *gptr<u32>(r0_14 - 0xb50u) = vtable_AtmWindow;  // (from the original)
    u32 r0_15 = r0_14 - 0x100u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_15, vtable_AtmWindow);
    u32 r0_16 = r0_15 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_16, guest::cpu()->r[1]);
    u32 r0_17 = r0_16 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_17, guest::cpu()->r[1]);
    u32 r0_18 = r0_17 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_18, guest::cpu()->r[1]);
    u32 r0_19 = r0_18 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_19, guest::cpu()->r[1]);
    u32 r0_20 = r0_19 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_20, guest::cpu()->r[1]);
    u32 r0_21 = r0_20 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_21, guest::cpu()->r[1]);
    u32 r0_22 = r0_21 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_22, guest::cpu()->r[1]);
    u32 r0_23 = r0_22 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_23, guest::cpu()->r[1]);
    u32 r0_24 = r0_23 - 0x28u;  // (from the original)
    destroy_animation(r0_24);
    u32 r0_25 = r0_24 - 0x28u;  // (from the original)
    destroy_animation(r0_25);
    u32 r0_26 = r0_25 - 0x28u;  // (from the original)
    destroy_animation(r0_26);
    u32 r0_28 = Layout__destructor(r0_26 - 0x14cu);  // (from the original)
    u32 r0_30 = ssys__ma__lyt__ArcResAccReader__destructor(r0_28 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    return MenuBase__destructor(r0_30 - 0x70u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_006d12d0
GUEST_EXPORT(0x006d12d0, d_006d12d0::BsMenuAtm__virtual_0_006d12d0);

// f_006d1bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d1bc8 {

inline constexpr u32 global_0094fc2c_address = 0x0094fc2cu;
inline guest::global<u32, 0x0014fe00> global_0014fe00;
inline guest::global<u32, 0x0094fc2c> global_0094fc2c;

u32 f_006d1bc8(u32 r0) {
    if (*gptr<u8>(r0 + 0x40u) != 2u) {  // (from the original)
        return 1u;
    }
    u32 r0_1 = *global_0094fc2c;
    if (r0_1 == 0) {
        return r0_1;
    }
    return guest::call_address<u32>(*global_0014fe00, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d1bc8
GUEST_EXPORT(0x006d1bc8, d_006d1bc8::f_006d1bc8);

// f_006d1ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d1ce4 {

inline constexpr u32 global_0094fd3c_address = 0x0094fd3cu;
inline guest::global<u32, 0x0094fd3c> global_0094fd3c;
inline constexpr guest::Function<0x006d40d4, u32(u32, u32)> selection_accepts;

u32 f_006d1ce4() {
    return selection_accepts(*global_0094fd3c, 8u);
}

}  // namespace d_006d1ce4
GUEST_EXPORT(0x006d1ce4, d_006d1ce4::f_006d1ce4);

// f_006d1cf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d1cf8 {

inline constexpr u32 global_0098c4fc_address = 0x0098c4fcu;
inline guest::global<u8, 0x0094fd0e> global_0094fd0e;
inline constexpr guest::Function<0x00138920, u32(u32, u32)> list_contains_node;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;

void f_006d1cf8(u32 r0) {
    u32 r0_1 = list_contains_node(global_0098c4fc_address, r0);
    if (r0_1 != 0) {
        return;
    }
    queue_append(global_0098c4fc_address, r0);
    u32 r1_2 = *global_0094fd0e;
    if (r1_2 == 3u) {
        r1_2 = 1u;
        *global_0094fd0e = u8(r1_2);
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_006d1cf8
GUEST_EXPORT_FRAMED(0x006d1cf8, d_006d1cf8::f_006d1cf8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006d2528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2528 {

inline constexpr u32 global_0094fd0c_address = 0x0094fd0cu;
inline constexpr u32 global_0094fd50_address = 0x0094fd50u;
inline guest::global<u8, 0x0094fd0d> global_0094fd0d;
inline guest::global<u32, 0x0094fd50> global_0094fd50;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> Pockets__item_with_lock;

struct __attribute__((packed)) Frame_006d2528 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006d2528, word_0, 0x0);
GUEST_SIZE(Frame_006d2528, 0x4);

void f_006d2528(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006d2528> frame;  // the original's stack frame
    frame->word_0 = r3;
    *global_0094fd50 = r0;
    if (s32(r0) >= 0x14) {  // (from the original)
        *global_0094fd0d = 0;
        return;
    }
    u32 player = get_current_player(r0, r1, r2, r3);
    u32 r0_3 = Pockets__item_with_lock(player + 0x6bd0u, *global_0094fd50, 0u);  // (from the original)
    copy_item_002fc934(frame.at(0).addr(), r0_3);
    *global_0094fd0d = 1;
}

}  // namespace d_006d2528
GUEST_EXPORT_FRAMED(0x006d2528, d_006d2528::f_006d2528, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006d2584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2584 {

inline guest::global<u32, 0x0094fd58> global_0094fd58;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> talk_state_matches;

u32 f_006d2584(u32 r0_unused, u32 r1) {
    if ((*global_0094fd58 & 0x400u) != 0) {  // (from the original)
        return 0u;
    }
    u32 r0_1 = talk_state_matches(5u, 0u);
    if (r0_1 != 0) {
        return 1u;
    }
    u32 r0_2 = talk_state_matches(6u, 0u);
    if (r0_2 != 0) {
        return 1u;
    }
    u32 r0_3 = talk_state_matches(0u, 0u);
    if (r0_3 != 0) {
        return 1u;
    }
    u32 r0_4 = talk_state_matches(3u, 0u);
    if (r0_4 != 0) {
        return 1u;
    }
    u32 r0_5 = talk_state_matches(4u, 0u);
    if (r0_5 != 0) {
        return 1u;
    }
    u32 r0_6 = talk_state_matches(9u, 0u);
    if (r0_6 != 0) {
        return 1u;
    }
    u32 r0_7 = talk_state_matches(0xau, 0u);  // (from the original)
    if (r0_7 != 0) {
        return 1u;
    }
    u32 r0_8 = talk_state_matches(0xbu, 0u);  // (from the original)
    if (r0_8 != 0) {
        return 1u;
    }
    u32 r0_9 = talk_state_matches(0xcu, 0u);  // (from the original)
    return r0_9 == 0 ? r0_9 : 1u;
}

}  // namespace d_006d2584
GUEST_EXPORT_FRAMED(0x006d2584, d_006d2584::f_006d2584, 0x4010);  // pushes {r4, lr} first, as the original

// f_006d2750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2750 {

inline constexpr u32 global_0098c508_address = 0x0098c508u;
inline guest::global<u32, 0x0098c508> global_0098c508;
inline guest::global<u32, 0x0098c50c> global_0098c50c;
inline guest::global<u32, 0x0098c510> global_0098c510;

u32 f_006d2750() {
    *global_0098c508 = 0x248;  // (from the original)
    *global_0098c50c = 0x248;  // (from the original)
    *global_0098c510 = 0x248;  // (from the original)
    guest::cpu()->r[1] = 0x248u;  // (from the original)
    return global_0098c508_address;
}

}  // namespace d_006d2750
GUEST_EXPORT(0x006d2750, d_006d2750::f_006d2750);

// f_006d276c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d276c {

inline guest::global<u32, 0x0094fd38> global_0094fd38;

u32 f_006d276c() {
    return s32(*global_0094fd38) >> 0x10;  // (from the original)
}

}  // namespace d_006d276c
GUEST_EXPORT(0x006d276c, d_006d276c::f_006d276c);

// f_006d2800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2800 {

inline constexpr u32 global_0094fd0c_address = 0x0094fd0cu;
inline constexpr u32 global_0094fd3c_address = 0x0094fd3cu;
inline constexpr u32 global_0098c4fc_address = 0x0098c4fcu;
inline guest::global<u8, 0x0094fd10> global_0094fd10;
inline guest::global<u32, 0x0094fd3c> global_0094fd3c;
inline guest::global<u32, 0x0098c500> global_0098c500;
inline constexpr guest::Function<0x00138920, u32(u32, u32)> list_contains_node;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;
inline constexpr guest::Function<0x00584134, u32(u32)> return_constant_0x98a030_;
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32)> FlagManager__release;

void f_006d2800(u32 r0) {
    u32 r0_1 = list_contains_node(global_0098c4fc_address, r0);
    if (r0_1 == 0) {
        return;
    }
    unlink_from_ends(global_0098c4fc_address, r0);
    if (*global_0098c500 != 0) {
        return;
    }
    u32 r0_2 = *global_0094fd10;
    if (r0_2 == 0) {
        u32 r0_3 = return_constant_0x98a030_(r0_2);
        u32 r0_4 = FlagManager__release(r0_3, 0x21u);  // (from the original)
        u32 r0_5 = return_constant_0x98a030_(r0_4);
        u32 r0_6 = FlagManager__release(r0_5, 0x1fu);  // (from the original)
        u32 r0_7 = return_constant_0x98a030_(r0_6);
        FlagManager__release(r0_7, 0x1eu);  // (from the original)
    }
    u32 r0_8 = *global_0094fd3c;
    if (r0_8 != 0) {
        *gptr<u8>(r0_8 + 0x208u) = 0;  // (from the original)
    }
}

}  // namespace d_006d2800
GUEST_EXPORT_FRAMED(0x006d2800, d_006d2800::f_006d2800, 0x4010);  // pushes {r4, lr} first, as the original

// f_006d2e34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2e34 {

struct __attribute__((packed)) Object_006d2e34_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006d2e34_0, word_0, 0x0);
GUEST_OFFSET(Object_006d2e34_0, word_4, 0x4);
GUEST_OFFSET(Object_006d2e34_0, word_8, 0x8);

inline constexpr u32 global_0098c554_address = 0x0098c554u;
inline guest::global<u32, 0x0098c554> global_0098c554;
inline guest::global<u32, 0x0098c558> global_0098c558;
inline guest::global<u32, 0x0098c55c> global_0098c55c;

void f_006d2e34(gptr<Object_006d2e34_0> arg0) {
    u32 r2_1 = *global_0098c554;
    u32 r3_1 = *global_0098c558;
    arg0->word_8 = *global_0098c55c;
    arg0->word_0 = r2_1;
    arg0->word_4 = r3_1;
}

}  // namespace d_006d2e34
GUEST_EXPORT(0x006d2e34, d_006d2e34::f_006d2e34);

// f_006d2e98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2e98 {

inline guest::global<u32, 0x0098c508> global_0098c508;

u32 f_006d2e98() {
    u32 r0_1 = 1u;
    if (*global_0098c508 == 0x248u) {  // (from the original)
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_006d2e98
GUEST_EXPORT(0x006d2e98, d_006d2e98::f_006d2e98);

// f_006d2f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d2f24 {

inline guest::global<u8, 0x0094fd2b> global_0094fd2b;
inline constexpr guest::Function<0x00195488, u32(u32, u32)> call_00195488;
inline constexpr guest::Function<0x006d1ffc, u32(u32, u32)> try_request;

void f_006d2f24(u32 r0, u32 r1) {
    u32 r0_1 = try_request(0x7bu, 0u);  // (from the original)
    if (r0_1 != 0) {
        *global_0094fd2b = 2;
        call_00195488(r0, r1);
    }
}

}  // namespace d_006d2f24
GUEST_EXPORT_FRAMED(0x006d2f24, d_006d2f24::f_006d2f24, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006d3020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d3020 {

inline constexpr u32 global_0094fd0c_address = 0x0094fd0cu;
inline constexpr u32 global_0094fd50_address = 0x0094fd50u;
inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u32, 0x0094fd50> global_0094fd50;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x006bb230, u32(u32, u32)> set_category_29_count;
inline constexpr guest::Function<0x006bb76c, u32(u32)> take_one_of_category_29;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> Pockets__item_with_lock;

struct __attribute__((packed)) Frame_006d3020 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006d3020, word_0, 0x0);
GUEST_SIZE(Frame_006d3020, 0x8);

void f_006d3020(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006d3020> frame;  // the original's stack frame
    u32 player = get_current_player(r0, r1, r2, r3);
    u32 r0_2 = Pockets__item_with_lock(player + 0x6bd0u, *global_0094fd50, 0u);  // (from the original)
    copy_item_002fc934(frame.at(4).addr(), r0_2);
    u32 r0_5 = take_one_of_category_29(frame.at(4).addr());
    if (r0_5 == 0) {
        u32 r1_3 = *global_0094fd50;
        frame->word_0 = 1;
        Pockets__set_slot(player + 0x6bd0u, r1_3, empty_item_address, 0u);  // (from the original)
    } else {
        set_category_29_count(frame.at(4).addr(), r0_5);
        frame->word_0 = 1;
        Pockets__set_slot(player + 0x6bd0u, *global_0094fd50, frame.at(4).addr(), 0u);  // (from the original)
    }
}

}  // namespace d_006d3020
GUEST_EXPORT_FRAMED(0x006d3020, d_006d3020::f_006d3020, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006d30c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d30c4 {

struct __attribute__((packed)) Object_006d30c4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006d30c4_0, word_0, 0x0);
GUEST_OFFSET(Object_006d30c4_0, word_4, 0x4);
GUEST_OFFSET(Object_006d30c4_0, word_8, 0x8);

inline guest::global<u32, 0x0098c554> global_0098c554;
inline guest::global<u32, 0x0098c558> global_0098c558;
inline guest::global<u32, 0x0098c55c> global_0098c55c;

void f_006d30c4(gptr<Object_006d30c4_0> arg0) {
    u32 r1_1 = arg0->word_0;
    u32 r2_1 = arg0->word_4;
    u32 r3_1 = arg0->word_8;
    *global_0098c554 = r1_1;
    *global_0098c558 = r2_1;
    *global_0098c55c = r3_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006d30c4
GUEST_EXPORT(0x006d30c4, d_006d30c4::f_006d30c4);

// f_006d3340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d3340 {

inline guest::global<u16, 0x0094fd34> global_0094fd34;

u32 f_006d3340() {
    u32 res_1 = 0;
    u32 r0 = 0u;
    u32 r1 = r0;
    u32 r3 = *global_0094fd34;
    u32 r2 = 0x10u;  // (from the original)
    u32 r12 = 1u;
    do {
        if ((r3 & lsl_r(r12, r1 & 0xff)) != 0) {  // (from the original)
            r0 += 1u;
        }
        res_1 = r2 - 1u;
        r2 = res_1;
        r1 += 1u;
        guest::preempt();
    } while (res_1 != 0);
    return r0;
}

}  // namespace d_006d3340
GUEST_EXPORT_FRAMED(0x006d3340, d_006d3340::f_006d3340, 0x10);  // pushes {r4} first, as the original

// f_006d337c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d337c {

inline constexpr u32 global_0094fd38_address = 0x0094fd38u;
inline guest::global<u32, 0x0094fd38> global_0094fd38;

u32 f_006d337c() {
    u32 r0_1 = *global_0094fd38;
    return (r0_1 & 0xffffu) == 0 ? 1u : uxth(r0_1);  // (from the original)
}

}  // namespace d_006d337c
GUEST_EXPORT(0x006d337c, d_006d337c::f_006d337c);

// f_006d37e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d37e4 {

inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x006b6d6c, u32(u32, u32)> call_006b6d6c;
inline constexpr guest::Function<0x006b73f4, u32(u32, u32)> call_006b73f4;
inline constexpr guest::Function<0x0076c590, u32(u32)> Item__has_category_flag_bit_1_5;

void f_006d37e4(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = Item__has_category_flag_bit_1_5(r0);
    if (r0_1 != 0) {
        u32 r0_2 = get_counter_block(r0_1);
        u32 category = Item__category(r0);
        if (category != 0x36u) {  // (from the original)
            if (category != 0x37u && category != 0x38u && category != 0x92u) {  // (from the original)
                return;
            }
            frame.release();
            call_006b73f4(r0_2, 1u);
            return;
        }
        frame.release();
        call_006b6d6c(r0_2, 1u);
        return;
    }
}

}  // namespace d_006d37e4
GUEST_EXPORT(0x006d37e4, d_006d37e4::f_006d37e4);

// f_006d39a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d39a8 {

inline constexpr u32 global_0098c500_address = 0x0098c500u;
inline guest::global<u32, 0x0098c500> global_0098c500;

u32 f_006d39a8(u32 r0_unused, u32 r1) {
    u32 r5 = 0u;
    u32 r4 = *global_0098c500;
    if (r4 != 0) {
        u32 r6 = 0x88735au;  // (from the original)
        do {
            r1 = *gptr<u16>(r6);
            if (*gptr<u16>(*gptr<u32>(r4 + 0xcu) + 0xcu) == r1) {  // (from the original)
                r5 = 1u;
                break;
            }
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_006d39a8
GUEST_EXPORT_FRAMED(0x006d39a8, d_006d39a8::f_006d39a8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006d40d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d40d4 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x0075e058, u32(u32, u32)> SlotState__matches_slot;

u32 selection_accepts(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_7 = 0;
    u32 r0_1 = err_eula_is_idle_with_byte_fac(r0, r1);
    if (r0_1 != 0) {
        r0_2 = 0u;
    } else {
        if ((r1 & 8u) != 0) {
            u32 r0_3 = read_global_byte_2(r0_1);
            u32 r0_4 = table_entry_has_all_bits(0x80000u, r0_3);  // (from the original)
            if (r0_4 == 0) {
                u32 r0_5 = read_global_byte_2(r0_4);
                u32 r0_6 = table_entry_has_all_bits(0x100000u, r0_5);  // (from the original)
                if (r0_6 == 0) {
                    goto L_6d4150;
                }
            }
            r0_7 = *net_session;
            if (r0_7 != 0) {
                u32 r0_9 = SlotState__matches_slot(r0_7 + 0x1e4u, 4u);  // (from the original)
                if (r0_9 != 0) {
                    goto L_6d4168;
                }
            }
L_6d4150:;
            if (*gptr<u8>(r0 + 0x208u) != 0) {  // (from the original)
                goto L_6d4168;
            }
        }
        r0_2 = *gptr<u32>(r0 + 0x48u) & r1;  // (from the original)
        if (r0_2 == 0) {
            return r0_2;
        }
L_6d4168:;
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_006d40d4
GUEST_EXPORT_FRAMED(0x006d40d4, d_006d40d4::selection_accepts, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006d4724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d4724 {

inline guest::global<u8, 0x0094fd60> global_0094fd60;
inline guest::global<u8, 0x0094fd61> global_0094fd61;
inline guest::global<u8, 0x0094fd62> global_0094fd62;
inline guest::global<u8, 0x0094fd63> global_0094fd63;
inline constexpr guest::Function<0x002f86c0, u32(u32, u32)> call_002f86c0;

void f_006d4724(u32 r0) {
    u32 r0_1 = call_002f86c0(r0, 0x3e8u);  // (from the original)
    *global_0094fd60 = u8(r0_1);
    u32 r0_2 = call_002f86c0(guest::cpu()->r[1], 0x64u);  // (from the original)
    *global_0094fd61 = u8(r0_2);
    u32 r0_3 = call_002f86c0(guest::cpu()->r[1], 0xau);  // (from the original)
    *global_0094fd62 = u8(r0_3);
    *global_0094fd63 = u8(guest::cpu()->r[1]);
}

}  // namespace d_006d4724
GUEST_EXPORT_FRAMED(0x006d4724, d_006d4724::f_006d4724, 0x4010);  // pushes {r4, lr} first, as the original

// f_006d5364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d5364 {

struct __attribute__((packed)) Object_006d5364_0 {
    u8 unknown_0[0x548];  // (not used here)
    u32 word_548;
    u8 unknown_54c[0x180];  // (not used here)
    u32 word_6cc;
};
GUEST_OFFSET(Object_006d5364_0, word_548, 0x548);
GUEST_OFFSET(Object_006d5364_0, word_6cc, 0x6cc);

inline constexpr guest::Function<0x002f67ac, u32(u32, u32, u32, u32)> release_active_child;

void f_006d5364(gptr<Object_006d5364_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg0->word_548 != 0) {
        release_active_child(arg0.addr() + 0x494u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    if (arg0->word_6cc == 0) {
        return;
    }
    frame.release();
    release_active_child(arg0.addr() + 0x618u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_006d5364
GUEST_EXPORT(0x006d5364, d_006d5364::f_006d5364);

// f_006d5df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d5df4 {

struct __attribute__((packed)) Object_006d5df4_0 {
    u8 unknown_0[0x19b0];  // (not used here)
    u16 half_19b0;
    u16 half_19b2;
};
GUEST_OFFSET(Object_006d5df4_0, half_19b0, 0x19b0);
GUEST_OFFSET(Object_006d5df4_0, half_19b2, 0x19b2);

struct __attribute__((packed)) Local_006d5df4_r0_7 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006d5df4_r0_7, byte_b7, 0xb7);

inline constexpr guest::Function<0x002dfbf0, u32(u32)> ButtonActionNodeEx__virtual_3;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569544, u32(u32)> FrameControl__advance;
inline constexpr guest::Function<0x0074fdd0, u32(u32, u32, u32, u32)> button_slot_check;

u32 f_006d5df4(gptr<Object_006d5df4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = arg0.addr() + 0x19b2u;  // (from the original)
    u32 r1_1 = arg0->half_19b2;
    u32 r8_1 = lsl_r(1u, r1 & 0xff);  // (from the original)
    if ((r1_1 & r8_1) != 0) {
        u32 r0_2 = button_slot_check(arg0.addr() + 0x3f4u, r1_1, r2, r3);  // (from the original)
        if (r0_2 == 0) {
            FrameControl__advance(arg0.addr() + 0x3f4u);  // (from the original)
            Layout__virtual_3(arg0.addr() + 0x280u);  // (from the original)
            return 0u;
        }
        u32 r7_1 = arg0.addr() + (r1 << 2);
        notify_list_objects(arg0.addr() + 0x280u, arg0.addr() + 0x3f4u, *gptr<u32>(r7_1 + 0x1920u), 0u);  // (from the original)
        ButtonActionNodeEx__virtual_3(arg0.addr() + (r1 * 0x21u + (r1 << 6) << 2) + 0x79cu);  // (from the original)
        gptr<Local_006d5df4_r0_7> r0_7 = gptr<Local_006d5df4_r0_7>(*gptr<u32>(r7_1 + 0x194cu));  // (from the original)
        r0_7->byte_b7 = u8(u32(r0_7->byte_b7) & 0xfeu);  // (from the original)
        u32 r0_8 = u32(arg0->half_19b2) & ~uxth(r8_1);
        arg0->half_19b2 = u16(r0_8);
        u32 r1_6 = arg0->half_19b0;
        r1_1 = ((r0_8 & 0x400u) == 0 ? 1u : 0u) == 0 ? r1_6 & ~2u : r1_6 | 2u;  // (from the original)
        arg0->half_19b0 = u16(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_006d5df4
GUEST_EXPORT_FRAMED(0x006d5df4, d_006d5df4::f_006d5df4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006d6404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d6404 {

struct __attribute__((packed)) Local_006d6404_r0_12 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006d6404_r0_12, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006d6404_r0_14 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006d6404_r0_14, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006d6404_r5_1 {
    u16 half_0;
};
GUEST_OFFSET(Local_006d6404_r5_1, half_0, 0x0);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

u32 f_006d6404(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = read_global_byte_2(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0x73u) {  // (from the original)
        u32 r0_2 = read_global_byte_2(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 != 0x74u) {  // (from the original)
            u32 r4_1 = 0u;
            u32 r0_3 = read_global_byte_2(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_4 = table_entry_has_all_bits(0x40000u, r0_3);  // (from the original)
            if (r0_4 != 0) {
                r4_1 = 1u;
            }
            u32 r0_5 = read_global_byte_2(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_6 = table_entry_has_all_bits(0x100000u, r0_5);  // (from the original)
            if (r0_6 != 0) {
                r4_1 = 1u;
            }
            u32 r0_7 = read_global_byte_2(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_8 = table_entry_has_all_bits(0x20000u, r0_7);  // (from the original)
            if (r0_8 != 0) {
                r4_1 = 1u;
            }
            u32 r0_9 = read_global_byte_2(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_10 = table_entry_has_all_bits(0x80000u, r0_9);  // (from the original)
            if (r0_10 != 0) {
                r4_1 = 1u;
            }
            gptr<Local_006d6404_r0_12> child = gptr<Local_006d6404_r0_12>(LayoutObjectWithChild__forward_to_child(r0 + 0x280u, 0x853a90u));  // (from the original)
            child->byte_b7 = u8(u32(child->byte_b7) & 0xfeu | r4_1);  // (from the original)
            gptr<Local_006d6404_r0_14> child_2 = gptr<Local_006d6404_r0_14>(LayoutObjectWithChild__forward_to_child(r0 + 0x280u, 0x853a84u));  // (from the original)
            u32 r1_5 = r4_1 ^ 1u | u32(child_2->byte_b7) & 0xfeu;  // (from the original)
            child_2->byte_b7 = u8(r1_5);
            guest::cpu()->r[1] = r1_5;
            return child_2.addr();
        }
    }
    gptr<Local_006d6404_r5_1> r5_1 = gptr<Local_006d6404_r5_1>(r0 + 0x19b4u);  // (from the original)
    u32 r0_15 = u32(r5_1->half_0) & ~1u;
    r5_1->half_0 = u16(r0_15);
    return r0_15;
}

}  // namespace d_006d6404
GUEST_EXPORT_FRAMED(0x006d6404, d_006d6404::f_006d6404, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006d7354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d7354 {

inline constexpr u32 global_0094ddf8_address = 0x0094ddf8u;
inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x006d6500, u32(u32, u32, u32, u32)> call_006d6500;
inline constexpr guest::Function<0x0075f020, u32(u32, u32, u32, u32)> call_0075f020;

u32 f_006d7354(u32 r0) {
    u32 r1 = 0;
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 - 8u) = r12;
    r13 -= 0x28;  // (from the original)
    u32 r4 = 0u;
    u32 r10 = 1u;
    u32 r11 = r0;
    u32 r9 = net_session_address;
    u32 r8 = global_0094ddf8_address;
    u32 r6 = r0 + 0x1900u;  // (from the original)
    u32 r7 = r0 + 0x19b4u;  // (from the original)
    goto L_6d738c;
L_6d737c:;
    if (r4 == 8u) {
        u32 r5_1 = *gptr<u32>(r9) + 0x7874u;  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_1 = call_0075f020(r5_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            goto L_6d74a8;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_2 = call_0075f020(r5_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 != 0) {
            guest::cpu()->r[13] = r13;
            u32 r0_3 = mode_above_1(r0_2);
            r1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                goto L_6d74a8;
            }
        } else {
            guest::cpu()->r[13] = r13;
            u32 r0_4 = call_0075f020(r5_1, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_4 != 0) {
                goto L_6d74a8;
            }
        }
        u32 r0_5 = *gptr<s8>(r6 + 0x1bu);  // (from the original)
        if (r0_5 != 0xau && r0_5 + 1u != 0 && r0_5 != 8u) {  // (from the original)
            r4 = 9u;
            guest::preempt();
            goto L_6d737c;
        }
        *gptr<u16>(r7) = u16(u32(*gptr<u16>(r7)) | 0x100u);  // (from the original)
        goto L_6d74a8;
    }
    if (r4 == 9u) {
        u32 r0_6 = *gptr<u32>(r9);
        guest::cpu()->r[13] = r13;
        u32 r0_7 = read_global_byte_2(r0_6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_7 != 0x67u) {  // (from the original)
            goto L_6d74a8;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_8 = call_0075f020(r0_6 + 0x7874u, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_8 == 0) {
            goto L_6d74a8;
        }
        u32 r0_9 = *gptr<u8>(r8);
        if (r0_9 == 1u) {
            guest::cpu()->r[13] = r13;
            u32 r0_10 = query_current_main_object(r0_9, r1);
            r1 = *gptr<u8>(r8 + 2u);
            if (r0_10 == r1) {
                goto L_6d74a8;
            }
        }
        u32 r0_11 = *gptr<s8>(r6 + 0x1bu);  // (from the original)
        if (r0_11 != 0xau && r0_11 + 1u != 0 && r0_11 != 5u && r0_11 != 9u) {  // (from the original)
            r4 = 0xau;  // (from the original)
            guest::preempt();
            goto L_6d737c;
        }
        r0 = u32(*gptr<u16>(r7)) | 0x200u;  // (from the original)
        goto L_6d74a4;
    }
L_6d738c:;
    r1 = *gptr<u16>(r7);
    r0 = r1 | lsl_r(r10, r4 & 0xff);  // (from the original)
L_6d74a4:;
    *gptr<u16>(r7) = u16(r0);
L_6d74a8:;
    r4 += 1u;
    if (s32(r4) >= 0xb) {  // (from the original)
        *gptr<u16>(r7) = u16(u32(*gptr<u16>(r7)) & ~0x400u);  // (from the original)
        r13 += 0x28;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_006d6500(r11, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::preempt();
    goto L_6d737c;
}

}  // namespace d_006d7354
GUEST_EXPORT(0x006d7354, d_006d7354::f_006d7354);

// f_006d78bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d78bc {

struct __attribute__((packed)) Object_006d78bc_0 {
    u8 unknown_0[0x568];  // (not used here)
    u32 word_568;
    u8 unknown_56c[0x180];  // (not used here)
    u32 word_6ec;
};
GUEST_OFFSET(Object_006d78bc_0, word_568, 0x568);
GUEST_OFFSET(Object_006d78bc_0, word_6ec, 0x6ec);

inline constexpr guest::Function<0x006d6a8c, u32(u32, u32, u32, u32)> call_006d6a8c;

u32 f_006d78bc(gptr<Object_006d78bc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_2 = 0;
    u32 r4 = r0;
    u32 r2 = 1u;
    u32 r1 = 0u;
    arg0->word_568 = arg0->word_568 | 8u;
    arg0->word_6ec = arg0->word_6ec | 8u;
    r0 = r4 + 0x19b4u;  // (from the original)
    do {
        u32 r3_1 = lsl_r(r2, r1 & 0xff);  // (from the original)
        r1 += 1u;
        r3_2 = r3_1 | u32(*gptr<u16>(r0));
        *gptr<u16>(r0) = u16(r3_2);
        guest::preempt();
    } while (s32(r1) < 0xb);  // (from the original)
    u32 r1_1 = uxth(r3_2) & ~0x400u;  // (from the original)
    *gptr<u16>(r0) = u16(r1_1);
    call_006d6a8c(r4, r1_1, r2, r3_2);
    *gptr<u8>(r4 + 0x1916u) = 0;  // (from the original)
    return 0u;
}

}  // namespace d_006d78bc
GUEST_EXPORT_FRAMED(0x006d78bc, d_006d78bc::f_006d78bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_006d860c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d860c {

struct __attribute__((packed)) Local_006d860c_r0_9 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006d860c_r0_9, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006d860c_r4_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_006d860c_r4_1, word_0, 0x0);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> Animation__set_value;
inline constexpr guest::Function<0x0075e650, u32(u32, u32, u32, u32)> call_0075e650;
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> part_check_f0b0;

void f_006d860c(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r5 = r0;
    u32 r6 = 1u;
    u32 r0_1 = *net_session + 0x7874u;  // (from the original)
    u32 r0_2 = part_check_f0b0(r0_1, 3u, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    u32 r0_3 = *net_session;
    u32 r4 = 0u;
    if (r0_2 == 0) {
        r6 = 0u;
    }
    u32 r7 = r0_3 + 0x3594u;  // (from the original)
    u32 r8 = r4;
L_6d864c:;
    guest::cpu()->s[0] = S0;
    u32 r0_4 = call_0075e650(r7, r4, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0_4 == 0) {
        r4 += 1u;
        if (r4 < 0x20u) {  // (from the original)
            guest::preempt();
            goto L_6d864c;
        }
        r6 = 0u;
    }
    gptr<Local_006d860c_r4_1> r4_1 = gptr<Local_006d860c_r4_1>(r5 + 0x1980u);  // (from the original)
    u32 r0_5 = u32(*gptr<u8>(r4_1->word_0 + 0xb7u)) & 1u;  // (from the original)
    if (r0_5 != 0) {
        r0_5 = 1u;
    }
    if (r0_5 != r6) {
        if (r6 == 0 && *gptr<u8>(r5 + 0x460u) == 1u) {  // (from the original)
            u32 r0_6 = r5 + 0x444u;  // (from the original)
            float S0_1 = 0.0f;
            guest::cpu()->s[0] = S0_1;
            Animation__set_value(r0_6, r1_1, r2, r3);
            Layout__virtual_3(r5 + 0x280u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_1 = r0_6;
            notify_list_objects(r5 + 0x280u, r1_1, *gptr<u32>(r5 + 0x1990u), 0u);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            *gptr<u8>(r5 + 0x1915u) = u8(r8);  // (from the original)
            *gptr<u32>(r5 + 0x19a4u) = r8;  // (from the original)
        }
        gptr<Local_006d860c_r0_9> r0_9 = gptr<Local_006d860c_r0_9>(r4_1->word_0);
        r0_9->byte_b7 = u8(u32(r0_9->byte_b7) & 0xfeu | r6);  // (from the original)
        guest::cpu()->s[0] = S0;
        frame.release();
        Layout__virtual_3(r5 + 0x280u, r1_1, r2, r3);  // (from the original)
        return;
    }
    guest::cpu()->s[0] = S0;
}

}  // namespace d_006d860c
GUEST_EXPORT(0x006d860c, d_006d860c::f_006d860c);

// f_006d8d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d8d48 {

struct __attribute__((packed)) Object_006d8d48_0 {
    u8 unknown_0[0x568];  // (not used here)
    u32 word_568;
    u8 unknown_56c[0x180];  // (not used here)
    u32 word_6ec;
};
GUEST_OFFSET(Object_006d8d48_0, word_568, 0x568);
GUEST_OFFSET(Object_006d8d48_0, word_6ec, 0x6ec);


void f_006d8d48(gptr<Object_006d8d48_0> arg0, u32 r1) {
    u32 zf_1 = r1 == 0;
    u32 r1_1 = arg0->word_568;
    u32 r2_1 = arg0->word_6ec;
    arg0->word_568 = zf_1 ? r1_1 & ~8u : r1_1 | 8u;
    arg0->word_6ec = zf_1 ? r2_1 & ~8u : r2_1 | 8u;
}

}  // namespace d_006d8d48
GUEST_EXPORT(0x006d8d48, d_006d8d48::f_006d8d48);

// f_006d8f68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d8f68 {

inline constexpr u32 vtable_ButtonActionControlEx_rec = 0x008f5084u;
inline constexpr u32 vtable_BsMenuTab = 0x008f9384u;
inline constexpr u32 vtable_BsMenuTab_at_14 = 0x008f93ccu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> do_nothing_00521ae0;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> script__RenderMain__RenderMain_005e3194;

u32 BsMenuTab__virtual_0_006d8f68(gptr<BsMenuTab> bs_menu_tab, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    bs_menu_tab->word_0 = vtable_BsMenuTab;
    bs_menu_tab->word_14 = vtable_BsMenuTab_at_14;
    u32 r0_1 = bs_menu_tab.addr() + 0x1848u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_1, vtable_BsMenuTab, vtable_BsMenuTab_at_14, r3);
    destroy_array_elements(r0_1 - 0x10acu, 0x2e00e0u, 0x184u, 0xbu);  // (from the original)
    bs_menu_tab->word_618 = vtable_ButtonActionControlEx_rec;
    destroy_animation(r0_1 - 0x10d4u);  // (from the original)
    destroy_animation(r0_1 - 0x10fcu);  // (from the original)
    destroy_animation(r0_1 - 0x1124u);  // (from the original)
    destroy_animation(r0_1 - 0x114cu);  // (from the original)
    destroy_button_action_control(r0_1 - 0x1230u);  // (from the original)
    bs_menu_tab->word_494 = vtable_ButtonActionControlEx_rec;
    destroy_animation(r0_1 - 0x1258u);  // (from the original)
    destroy_animation(r0_1 - 0x1280u);  // (from the original)
    destroy_animation(r0_1 - 0x12a8u);  // (from the original)
    destroy_animation(r0_1 - 0x12d0u);  // (from the original)
    destroy_button_action_control(r0_1 - 0x13b4u);  // (from the original)
    destroy_animation(r0_1 - 0x13dcu);  // (from the original)
    destroy_animation(r0_1 - 0x1404u);  // (from the original)
    destroy_animation(r0_1 - 0x142cu);  // (from the original)
    destroy_animation(r0_1 - 0x1454u);  // (from the original)
    destroy_animation(r0_1 - 0x147cu);  // (from the original)
    u32 r0_19 = Layout__destructor(r0_1 - 0x15c8u);  // (from the original)
    u32 r0_21 = ssys__ma__lyt__ArcResAccReader__destructor(r0_19 - 0x248u);  // (from the original)
    frame.release();
    return do_nothing_00521ae0(r0_21 - 0x38u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_006d8f68
GUEST_EXPORT(0x006d8f68, d_006d8f68::BsMenuTab__virtual_0_006d8f68);

// f_006d926c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d926c {

struct __attribute__((packed)) Local_006d926c_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006d926c_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006d926c_r0_2, byte_1, 0x1);

inline constexpr u32 global_0095063c_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> global_0095063c;

u32 f_006d926c(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_0095063c;
    if (r0_1 == 0) {
        return 3u;
    }
    gptr<Local_006d926c_r0_2> r0_2 = gptr<Local_006d926c_r0_2>(r0_1 + 0x2cu);  // (from the original)
    if (r0_2->byte_0 != r1) {
        return 3u;
    }
    u32 r0_3 = u32(r0_2->byte_1) & 0xfu;  // (from the original)
    return r0_3 != 4u && r0_3 != 5u && r0_3 != 0 ? r0_3 : 3u;
}

}  // namespace d_006d926c
GUEST_EXPORT(0x006d926c, d_006d926c::f_006d926c);

// f_006d96c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d96c0 {

inline constexpr u32 global_0095063c_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> global_0095063c;
inline constexpr guest::Function<0x001f5e5c, u32(u32, u32)> call_001f5e5c;

u32 f_006d96c0(u32 r0) {
    u32 r3_1 = *global_0095063c;
    if (r3_1 == 0) {
        return 0u;
    }
    u32 r2_1 = *gptr<u32>(r3_1 + (r0 << 3) + 0x34u);  // (from the original)
    if (r2_1 != 0) {
        return r2_1 + 0x14u;  // (from the original)
    }
    return call_001f5e5c(*gptr<u32>(r3_1 + (r0 << 2) + 0x1cu), guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_006d96c0
GUEST_EXPORT(0x006d96c0, d_006d96c0::f_006d96c0);

// f_006d9748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9748 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x006d9e38, u32(u32, u32, u32, u32)> call_006d9e38;

void f_006d9748(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 category = Item__category(r3, r1, r2, r3);
    if (category == 0x27u || category == 0x28u) {  // (from the original)
        call_006d9e38(r0, r1, r2, r3);
    }
}

}  // namespace d_006d9748
GUEST_EXPORT_FRAMED(0x006d9748, d_006d9748::f_006d9748, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006d99fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d99fc {

struct __attribute__((packed)) Local_006d99fc_r0_2 {
    u8 unknown_0[0x248];  // (not used here)
    u8 byte_248;
};
GUEST_OFFSET(Local_006d99fc_r0_2, byte_248, 0x248);

inline constexpr u32 global_0095063c_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> global_0095063c;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> main_object_value;
inline constexpr guest::Function<0x00305f44, u32(u32)> query_current_main_object;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) Frame_006d99fc {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Frame_006d99fc, byte_1, 0x1);
GUEST_OFFSET(Frame_006d99fc, byte_2, 0x2);
GUEST_OFFSET(Frame_006d99fc, byte_3, 0x3);
GUEST_SIZE(Frame_006d99fc, 0x4);

u32 f_006d99fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006d99fc> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = *global_0095063c;
    if (r0_1 == 0) {
        return r0_1;
    }
    gptr<Local_006d99fc_r0_2> r0_2 = gptr<Local_006d99fc_r0_2>(*gptr<u32>(r0_1 + (r0 << 2) + 0x1cu));  // (from the original)
    u32 zf_1 = r0_2.addr() == 0;
    if (!zf_1) {
        r1 = r0_2->byte_248;
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return r0_2.addr();
    }
    r0_2->byte_248 = 0;
    u32 r0_3 = main_object_value(r0_2.addr(), r1, r2, r3);
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r0_4 = query_current_main_object(r0_3);
    if (r0_4 != r0) {
        return r0_4;
    }
    *frame.at<u8>(0) = 0;
    frame->byte_1 = 0;
    frame->byte_2 = 0;
    frame->byte_3 = 0;
    u32 r0_5 = send_message(0x3du, 4u, frame.at(0).addr(), 4u);  // (from the original)
    return r0_5;
}

}  // namespace d_006d99fc
GUEST_EXPORT_FRAMED(0x006d99fc, d_006d99fc::f_006d99fc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006d9a78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9a78 {

struct __attribute__((packed)) Object_006d9a78_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_006d9a78_0, byte_1ac, 0x1ac);

inline constexpr u32 global_0095063c_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> global_0095063c;

u32 f_006d9a78(gptr<Object_006d9a78_0> arg0) {
    u32 r0_1 = arg0->byte_1ac;
    u32 r1_1 = *global_0095063c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_2 = *gptr<u32>(r1_1 + (r0_1 << 2) + 0x1cu);  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if (*gptr<u8>(r0_2 + 0x248u) == 3u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_006d9a78
GUEST_EXPORT(0x006d9a78, d_006d9a78::f_006d9a78);

// f_006d9abc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9abc {

inline constexpr u32 global_0095063c_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> global_0095063c;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x00300904, u32(u32)> main_object_value;
inline constexpr guest::Function<0x006d9058, u32(u32)> item_actor_kind_index;
inline constexpr guest::Function<0x006d9864, u32(u32, u32, u32, u32)> call_006d9864;

u32 f_006d9abc(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = 0;
    u32 r0_1 = *global_0095063c;
    if (r0_1 != 0) {
        r0_1 = Item__category(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_1 != 0x24u && r0_1 != 0x26u && r0_1 != 0x25u && r0_1 != 0x98u && r0_1 != 0x9au) {  // (from the original)
            if (r0_1 != 0x27u && r0_1 != 0x28u && r0_1 != 0x66u && r0_1 != 0x65u) {  // (from the original)
                return r0_1;
            }
            u32 r0_2 = main_object_value(r0_1);
            r4_1 = *gptr<u32>(*global_0095063c + (r1 << 2) + 0x1cu);  // (from the original)
            if (r0_2 == 0) {
                r0_1 = Item__category(r4_1 + 0x20cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                if (r0_1 == 0x27u) {  // (from the original)
                    return r0_1;
                }
            } else {
                r0_1 = Item__category(r4_1 + 0x20cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                if (r0_1 == 0x27u) {  // (from the original)
                    return r0_1;
                }
            }
        } else {
            r0_1 = item_actor_kind_index(r0);
            if (r0_1 == 0x3fu) {  // (from the original)
                return r0_1;
            }
            frame.release();
            return call_006d9864(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        frame.release();
        return Item__category(r4_1 + 0x20cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006d9abc
GUEST_EXPORT(0x006d9abc, d_006d9abc::f_006d9abc);

// f_006d9b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9b90 {

struct __attribute__((packed)) Object_006d9b90_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_006d9b90_1, byte_0, 0x0);
GUEST_OFFSET(Object_006d9b90_1, byte_1, 0x1);
GUEST_OFFSET(Object_006d9b90_1, byte_2, 0x2);
GUEST_OFFSET(Object_006d9b90_1, byte_3, 0x3);

struct __attribute__((packed)) Local_006d9b90_r0_4 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    float float_c;
    u16 half_10;
};
GUEST_OFFSET(Local_006d9b90_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_006d9b90_r0_4, float_c, 0xc);
GUEST_OFFSET(Local_006d9b90_r0_4, half_10, 0x10);

struct __attribute__((packed)) Local_006d9b90_r2_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006d9b90_r2_2, float_0, 0x0);
GUEST_OFFSET(Local_006d9b90_r2_2, float_4, 0x4);

struct __attribute__((packed)) Local_006d9b90_r2_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006d9b90_r2_3, float_0, 0x0);
GUEST_OFFSET(Local_006d9b90_r2_3, float_4, 0x4);

inline constexpr u32 global_0095063c_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> global_0095063c;
inline guest::global<u32, 0x00950640> global_00950640;
inline constexpr guest::Function<0x001f6844, u32(u32, u32, u32, u32)> call_001f6844;
inline constexpr guest::Function<0x006162e0, u32(u32, u32, u32, u32)> call_006162e0;
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32)> call_006c5ef8;

struct __attribute__((packed)) Frame_006d9b90 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    u32 word_10;
    u8 unknown_14[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006d9b90, word_0, 0x0);
GUEST_OFFSET(Frame_006d9b90, float_4, 0x4);
GUEST_OFFSET(Frame_006d9b90, float_8, 0x8);
GUEST_OFFSET(Frame_006d9b90, float_c, 0xc);
GUEST_OFFSET(Frame_006d9b90, word_10, 0x10);
GUEST_SIZE(Frame_006d9b90, 0x24);

u32 f_006d9b90(u32 r0, gptr<Object_006d9b90_1> arg1, u32 r2_unused, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_006d9b90> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r0_1 = *global_0095063c;
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1 + (r0 << 2) + 0x1cu);  // (from the original)
        if (r0_1 != 0) {
            u32 r6_1 = (u32(arg1->byte_0) >> 2) + ((u32(arg1->byte_1) & 1u) << 6);
            call_006162e0(frame.at(0x1c).addr(), r6_1, 0u, r3);  // (from the original)
            frame->float_4 = float((u32(arg1->byte_1) >> 1) + ((u32(arg1->byte_2) & 7u) << 7) << 2);
            float S0_1 = float((u32(arg1->byte_2) >> 3) + ((u32(arg1->byte_3) & 0x1fu) << 5) << 2);  // (from the original)
            frame->float_c = S0_1;
            guest::cpu()->s[0] = S0_1;
            call_006c5ef8(frame.at(4).addr(), 0u);
            float S0_2 = guest::cpu()->s[0];
            frame->float_8 = S0_2;
            gptr<Local_006d9b90_r0_4> r0_4 = gptr<Local_006d9b90_r0_4>(r6_1 * 0x14u + 0x68cu + *gptr<u32>(*global_00950640 + 0x14u));  // (from the original)
            gptr<Local_006d9b90_r2_2> r2_2 = gptr<Local_006d9b90_r2_2>(r0_4.addr() + 4u);
            float S0_3 = r2_2->float_0;
            float S1_2 = r2_2->float_4;
            gptr<Local_006d9b90_r2_3> r2_3 = gptr<Local_006d9b90_r2_3>(frame.at(0x14).addr());  // (from the original)
            frame->word_10 = r0_4->word_0;
            r2_3->float_0 = S0_3;
            r2_3->float_4 = S1_2;
            frame->word_0 = frame.at(0x10).addr();  // (from the original)
            u32 r3_2 = s16(r0_4->half_10);
            float S0_4 = r0_4->float_c;
            u32 r0_5 = *gptr<u32>(*global_0095063c + (r0 << 2) + 0x1cu);  // (from the original)
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S1_2;
            call_001f6844(r0_5, frame.at(0x1c).addr(), frame.at(4).addr(), r3_2);  // (from the original)
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            r0_1 = frame.at(0x1c).addr();  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_006d9b90
GUEST_EXPORT_FRAMED(0x006d9b90, d_006d9b90::f_006d9b90, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006d9cac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9cac {

struct __attribute__((packed)) Object_006d9cac_1 {
    u32 word_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_006d9cac_1, word_0, 0x0);
GUEST_OFFSET(Object_006d9cac_1, float_4, 0x4);
GUEST_OFFSET(Object_006d9cac_1, float_8, 0x8);

struct __attribute__((packed)) Local_006d9cac_r1_1 {
    u32 word_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006d9cac_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_006d9cac_r1_1, float_4, 0x4);
GUEST_OFFSET(Local_006d9cac_r1_1, float_8, 0x8);

struct __attribute__((packed)) Local_006d9cac_r1_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006d9cac_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_006d9cac_r1_2, float_4, 0x4);
GUEST_OFFSET(Local_006d9cac_r1_2, float_8, 0x8);

struct __attribute__((packed)) Local_006d9cac_r4_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    u16 half_10;
};
GUEST_OFFSET(Local_006d9cac_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_006d9cac_r4_1, float_4, 0x4);
GUEST_OFFSET(Local_006d9cac_r4_1, float_8, 0x8);
GUEST_OFFSET(Local_006d9cac_r4_1, float_c, 0xc);
GUEST_OFFSET(Local_006d9cac_r4_1, half_10, 0x10);

inline constexpr u32 global_0095063c_address = 0x0095063cu;
inline constexpr u32 global_00950640_address = 0x00950640u;
inline guest::global<u32, 0x0095063c> global_0095063c;
inline guest::global<u32, 0x00950640> global_00950640;
inline constexpr guest::Function<0x001f6844, u32(u32, u32, u32, u32)> call_001f6844;
inline constexpr guest::Function<0x00300904, u32(u32)> main_object_value;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006d9058, u32(u32, u32)> item_actor_kind_index;

struct __attribute__((packed)) Frame_006d9cac {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006d9cac, byte_1, 0x1);
GUEST_OFFSET(Frame_006d9cac, byte_2, 0x2);
GUEST_OFFSET(Frame_006d9cac, byte_3, 0x3);
GUEST_SIZE(Frame_006d9cac, 0x1c);

void f_006d9cac(u32 r0, gptr<Object_006d9cac_1> arg1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_006d9cac> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r0_1 = *global_0095063c;
    if (r0_1 != 0) {
        u32 r0_2 = query_current_main_object(r0_1, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r1 = *global_0095063c;
        if (*gptr<u32>(r1 + (r0_2 << 2) + 0x1cu) != 0) {  // (from the original)
            u32 r0_3 = item_actor_kind_index(r0, r1);
            if (r0_3 >= 0x6bu) {  // (from the original)
                r0_3 = 0u;
            }
            float S1_1 = arg1->float_4;
            float S2_2 = arg1->float_8;
            u32 r0_4 = r0_3 * 0x14u + 0x68cu;  // (from the original)
            u32 r2_2 = *gptr<u32>(*global_00950640 + 0x14u);  // (from the original)
            gptr<Local_006d9cac_r1_1> r1_1 = gptr<Local_006d9cac_r1_1>(frame.at(4).addr());
            r1_1->word_0 = arg1->word_0;
            r1_1->float_4 = S1_1;
            r1_1->float_8 = S2_2;
            gptr<Local_006d9cac_r4_1> r4_1 = gptr<Local_006d9cac_r4_1>(r2_2 + r0_4);
            gptr<Local_006d9cac_r1_2> r1_2 = gptr<Local_006d9cac_r1_2>(frame.at(0x10).addr());  // (from the original)
            float S0_1 = r4_1->float_0;
            float S1_2 = r4_1->float_4;
            float S2_3 = r4_1->float_8;
            r1_2->float_0 = S0_1;
            r1_2->float_4 = S1_2;
            r1_2->float_8 = S2_3;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_2;
            guest::cpu()->s[2] = S2_3;
            u32 r0_5 = query_current_main_object(r0_4, r1_2.addr(), r2_2, guest::cpu()->r[3]);
            u32 r0_6 = *gptr<u32>(*global_0095063c + (r0_5 << 2) + 0x1cu);  // (from the original)
            *frame.at<u32>(0) = frame.at(0x10).addr();  // (from the original)
            u32 r3_3 = s16(r4_1->half_10);
            float S0_2 = r4_1->float_c;
            guest::cpu()->s[0] = S0_2;
            u32 r0_7 = call_001f6844(r0_6, r0, frame.at(4).addr(), r3_3);
            u32 r0_8 = main_object_value(r0_7);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_8 != 0) {
                *frame.at<u8>(0) = 0;
                frame->byte_1 = 0;
                frame->byte_2 = 0;
                frame->byte_3 = 0;
                u32 r0_9 = item_actor_kind_index(r0, r1);
                *frame.at<u8>(0) = u8((u32(*frame.at<u8>(0)) & ~3u | 1u) & ~0xfcu | r0_9 << 2);  // (from the original)
                u32 r0_10 = u32(frame->byte_1) & ~1u | (r0_9 & 0x40u) >> 6;  // (from the original)
                frame->byte_1 = u8(r0_10);
                u32 r0_11 = vcvt_uz_f(std::bit_cast<float>(arg1->word_0));
                frame->byte_1 = u8((r0_10 & ~0xfeu) | 0xfeu & r0_11 >> 1);  // (from the original)
                u32 r0_12 = u32(frame->byte_2) & ~7u | (0x380u & r0_11 >> 2) >> 7;  // (from the original)
                frame->byte_2 = u8(r0_12);
                float S0_4 = std::bit_cast<float>(vcvt_uz_f(arg1->float_8));
                u32 r0_13 = std::bit_cast<u32>(S0_4);
                frame->byte_2 = u8((r0_12 & ~0xf8u) | 0xf8u & r0_13 << 1);  // (from the original)
                frame->byte_3 = u8(u32(frame->byte_3) & ~0x1fu | (0x3e0u & r0_13 >> 2) >> 5);  // (from the original)
                guest::cpu()->s[0] = S0_4;
                send_message(0x3du, 4u, frame.at(0).addr(), 4u);  // (from the original)
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_006d9cac
GUEST_EXPORT_FRAMED(0x006d9cac, d_006d9cac::f_006d9cac, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006d9f38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006d9f38 {

struct __attribute__((packed)) Local_006d9f38_r4_2 {
    u8 unknown_0[0x2d];  // (not used here)
    u8 byte_2d;
};
GUEST_OFFSET(Local_006d9f38_r4_2, byte_2d, 0x2d);

inline constexpr u32 global_0094f524_address = 0x0094f524u;
inline constexpr u32 global_0095063c_address = 0x0095063cu;
inline guest::global<u32, 0x0094f524> global_0094f524;
inline guest::global<u32, 0x0095063c> global_0095063c;
inline constexpr guest::Function<0x002abf60, u32(u32, u32)> call_002abf60;
inline constexpr guest::Function<0x002c2d58, u32(u32, u32)> call_002c2d58;
inline constexpr guest::Function<0x002c2fd4, u32(u32, u32)> call_002c2fd4;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006da030, u32(u32, u32, u32, u32)> call_006da030;

u32 f_006d9f38(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = call_0061a7a0(r0, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r1_1 = r2;
        u32 r4_1 = 0u;
        u32 r0_2 = *global_0094f524;
        if (r0_2 != 0) {
            u32 r0_3 = call_002abf60(r0_2, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                u32 r6_1 = *gptr<u32>(r0_3);
                u32 zf_1 = r6_1 == 0;
                if (!zf_1) {
                    r0_3 = *gptr<u8>(r6_1 + 0x1c8u);  // (from the original)
                    zf_1 = r0_3 == 2u;
                }
                if (zf_1) {
                    goto L_6d9fd4;
                } else {
                    r4_1 = r6_1;
                }
            }
            if (r4_1 != 0) {
                u32 r6_2 = *global_0095063c;
                u32 r0_4 = query_current_main_object(r0_3, r1_1);
                u32 ea_1 = r6_2 + (r0_4 << 3) + 0x34u;  // (from the original)
                u32 r0_5 = *gptr<u32>(ea_1);
                if (r0_5 != 0) {
                    call_002c2fd4(r0_5, ea_1);
                }
                call_002c2d58(r4_1, ea_1);
                u32 r0_6 = *global_0095063c;
                frame.release();
                return call_006da030(r0_6, r4_1, r1, guest::cpu()->r[3]);
            }
        }
L_6d9fd4:;
        gptr<Local_006d9f38_r4_2> r4_2 = gptr<Local_006d9f38_r4_2>(*global_0095063c);
        u32 r0_7 = u32(*gptr<u8>(r1 + 1u)) & ~0xfu | 3u;  // (from the original)
        *gptr<u8>(r1 + 1u) = u8(r0_7);
        u32 r0_8 = query_current_main_object(r0_7, r1_1);
        u32 r1_2 = u32(*gptr<u8>(r1 + 1u)) << 0x1a;  // (from the original)
        if (r0_8 == r1_2 >> 0x1e) {  // (from the original)
            r1_2 = u32(r4_2->byte_2d) & ~0xfu | 3u;  // (from the original)
            r4_2->byte_2d = u8(r1_2);
        }
        guest::cpu()->r[1] = r1_2;
        return r0_8;
    }
    frame.release();
    return send_message(0x3bu, 5u, r1, 2u);  // (from the original)
}

}  // namespace d_006d9f38
GUEST_EXPORT(0x006d9f38, d_006d9f38::f_006d9f38);

// f_006dab3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dab3c {

struct __attribute__((packed)) Object_006dab3c_0 {
    u8 unknown_0[0x67cc];  // (not used here)
    u32 word_67cc;
    u8 unknown_67d0[0x4];  // (not used here)
    u32 word_67d4;
};
GUEST_OFFSET(Object_006dab3c_0, word_67cc, 0x67cc);
GUEST_OFFSET(Object_006dab3c_0, word_67d4, 0x67d4);


void f_006dab3c(gptr<Object_006dab3c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r3_1 = arg0->word_67cc;
    u32 r0_1 = r3_1 > r2 ? gptr<u32>(arg0->word_67d4)[r2] : 0u;
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x9cu);  // (from the original)
    // virtual function 39 of r0_1
    guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, r3_1);
}

}  // namespace d_006dab3c
GUEST_EXPORT(0x006dab3c, d_006dab3c::f_006dab3c);

// f_006dabd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dabd8 {

struct __attribute__((packed)) Object_006dabd8_0 {
    u8 unknown_0[0x68c0];  // (not used here)
    u32 word_68c0;
    u8 unknown_68c4[0x4];  // (not used here)
    u32 word_68c8;
};
GUEST_OFFSET(Object_006dabd8_0, word_68c0, 0x68c0);
GUEST_OFFSET(Object_006dabd8_0, word_68c8, 0x68c8);

struct __attribute__((packed)) Local_006dabd8_r0_7 {
    u32 word_0;
    u8 unknown_4[0x7c];  // (not used here)
    u32 word_80;
};
GUEST_OFFSET(Local_006dabd8_r0_7, word_0, 0x0);
GUEST_OFFSET(Local_006dabd8_r0_7, word_80, 0x80);

struct __attribute__((packed)) Local_006dabd8_r1_5 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_006dabd8_r1_5, word_0, 0x0);
GUEST_OFFSET(Local_006dabd8_r1_5, word_8, 0x8);

inline constexpr guest::Function<0x0014fafc, u32(u32, u32, u32)> call_0014fafc;
inline constexpr guest::Function<0x00240080, u32(u32, u32, u32)> call_00240080;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fca6c, u32(u32, u32, u32, u32)> is_special_terrain_at;
inline constexpr guest::Function<0x005ca27c, u32(u32)> byte_88bd38;
inline constexpr guest::Function<0x005ca4b4, u32(u32)> object_name_is_fobj;

u32 object_operation(gptr<Object_006dabd8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1_3 = 0;
    u32 r0_11 = 0;
    u32 r4_1 = r1;
    u32 r7 = r0;
    u32 r0_1 = is_special_terrain_at(r4_1, r2, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_00240080(r4_1, r2, 0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 r4 = r0_2;
        if (r0_2 + 1u != 0) {
            u32 r5 = arg0->word_68c8;
            u32 r6 = r5 + (arg0->word_68c0 << 2);
            if (r5 != r6) {
                do {
                    u32 r0_3 = *gptr<u32>(r5);
                    u32 r1_1 = *gptr<u32>(r0_3 + 0x80u);  // (from the original)
                    if (r1_1 == r4) {
                        u32 r0_4 = call_0014fafc(r0_3, r1_1, r2);
                        u32 r0_5 = object_name_is_fobj(r0_4);
                        r1_3 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_5 != 0) {
                            return *gptr<u32>(r5);
                        }
                    }
                    r5 += 4u;
                    guest::preempt();
                } while (r5 != r6);
            }
            u32 r0_6 = r7 + 0x67a8u;  // (from the original)
            u32 v_1 = *gptr<u32>(r0_6);
            gptr<Local_006dabd8_r0_7> r0_7 = gptr<Local_006dabd8_r0_7>(r0_6 + 8u);
            r1_3 = v_1;
            r5 = r0_7->word_0;
            r6 = r5 + (r1_3 << 2);
            if (r5 != r6) {
                do {
                    r0_7 = gptr<Local_006dabd8_r0_7>(*gptr<u32>(r5));
                    r1_3 = r0_7->word_80;
                    if (r1_3 == r4) {
                        u32 r0_8 = call_0014fafc(r0_7.addr(), r1_3, r2);
                        r0_7 = gptr<Local_006dabd8_r0_7>(byte_88bd38(r0_8));
                        r1_3 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_7.addr() == 0xau) {  // (from the original)
                            return *gptr<u32>(r5);
                        }
                    }
                    r5 += 4u;
                    guest::preempt();
                } while (r5 != r6);
            }
            u32 r0_9 = read_global_byte_2(r0_7.addr(), r1_3, r2);
            u32 r0_10 = table_entry_has_all_bits(0x10000000u, r0_9);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_10 == 0) {
                return 0u;
            }
            gptr<Local_006dabd8_r1_5> r1_5 = gptr<Local_006dabd8_r1_5>(r7 + 0x6a6cu);  // (from the original)
            r0 = r1_5->word_8;
            r1 = r0 + (r1_5->word_0 << 2);
            if (r0 == r1) {
                guest::cpu()->r[1] = r1;
                return 0u;
            }
L_6dad00:;
            if (*gptr<u32>(*gptr<u32>(r0) + 0x80u) != r4) {  // (from the original)
                goto L_6dad20;
            }
            r0_11 = *gptr<u32>(r0);
            guest::cpu()->r[1] = r1;
            return r0_11;
L_6dad20:;
            r0 += 4u;
            if (r0 != r1) {
                guest::preempt();
                goto L_6dad00;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006dabd8
GUEST_EXPORT_FRAMED(0x006dabd8, d_006dabd8::object_operation, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006dc224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dc224 {

inline guest::global<u32, 0x0014fe38> global_0014fe38;

void f_006dc224(u32 r0) {
    u32 r0_1 = *gptr<u32>(r0 + 0x6b4cu);  // (from the original)
    if (r0_1 == 0) {
        return;
    }
    guest::call_address<u32>(*global_0014fe38, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dc224
GUEST_EXPORT(0x006dc224, d_006dc224::f_006dc224);

// f_006dc8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dc8cc {

struct __attribute__((packed)) Local_006dc8cc_ea_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_006dc8cc_ea_1, float_0, 0x0);
GUEST_OFFSET(Local_006dc8cc_ea_1, float_4, 0x4);
GUEST_OFFSET(Local_006dc8cc_ea_1, float_8, 0x8);
GUEST_OFFSET(Local_006dc8cc_ea_1, float_c, 0xc);
GUEST_OFFSET(Local_006dc8cc_ea_1, float_10, 0x10);
GUEST_OFFSET(Local_006dc8cc_ea_1, float_14, 0x14);
GUEST_OFFSET(Local_006dc8cc_ea_1, float_18, 0x18);
GUEST_OFFSET(Local_006dc8cc_ea_1, float_1c, 0x1c);

struct __attribute__((packed)) Local_006dc8cc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006dc8cc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006dc8cc_ea_2, word_4, 0x4);

inline guest::global<u32, 0x00854664> global_00854664;
inline guest::global<u32, 0x00854668> global_00854668;
inline guest::global<u32, 0x0085466c> global_0085466c;
inline guest::global<u32, 0x00854670> global_00854670;
inline guest::global<u32, 0x00854674> global_00854674;
inline guest::global<u32, 0x00854678> global_00854678;
inline guest::global<u32, 0x0085467c> global_0085467c;
inline guest::global<u32, 0x00854680> global_00854680;
inline guest::global<u32, 0x00854684> global_00854684;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;

u32 f_006dc8cc() {
    guest::StackFrame frame(0x2c);  // the original's stack frame
    float S0_1 = 1.3305689e-38f;
    float S1_1 = std::bit_cast<float>(*global_00854664);
    float S2_1 = std::bit_cast<float>(*global_00854668);
    float S3_1 = std::bit_cast<float>(*global_0085466c);
    float S4_1 = std::bit_cast<float>(*global_00854670);
    float S5_1 = std::bit_cast<float>(*global_00854674);
    float S6_1 = std::bit_cast<float>(*global_00854678);
    float S7_1 = std::bit_cast<float>(*global_0085467c);
    gptr<Local_006dc8cc_ea_1> ea_1 = gptr<Local_006dc8cc_ea_1>(frame.at(0).addr());
    ea_1->float_0 = S0_1;
    ea_1->float_4 = S1_1;
    ea_1->float_8 = S2_1;
    ea_1->float_c = S3_1;
    ea_1->float_10 = S4_1;
    ea_1->float_14 = S5_1;
    ea_1->float_18 = S6_1;
    ea_1->float_1c = S7_1;
    u32 r0_1 = *global_00854680;
    u32 r1_1 = *global_00854684;
    gptr<Local_006dc8cc_ea_2> ea_2 = gptr<Local_006dc8cc_ea_2>(frame.at(0x20).addr());  // (from the original)
    ea_2->word_0 = r0_1;
    ea_2->word_4 = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 data_base = get_data_base(r0_1);
    u32 r0_3 = gptr<u32>(frame.at(0).addr())[u32(*gptr<u8>(data_base + 0x6214eu)) & 0xfu];  // (from the original)
    guest::cpu()->r[1] = 0x6214eu;  // (from the original)
    return r0_3;
}

}  // namespace d_006dc8cc
GUEST_EXPORT_FRAMED(0x006dc8cc, d_006dc8cc::f_006dc8cc, 0x4000);  // pushes {lr} first, as the original

// f_006dcaf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcaf8 {

inline constexpr u32 global_00997c70_address = 0x00997c70u;

u32 f_006dcaf8(u32 r0) {
    u32 r0_1 = u32(*gptr<u8>(r0 + global_00997c70_address)) & 0xfu;  // (from the original)
    guest::cpu()->r[1] = global_00997c70_address;
    return r0_1;
}

}  // namespace d_006dcaf8
GUEST_EXPORT(0x006dcaf8, d_006dcaf8::f_006dcaf8);

// f_006dcc94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcc94 {

inline constexpr u32 global_00997c70_address = 0x00997c70u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003082bc, u32(u32)> reset_global_block_b;

void f_006dcc94() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = 0;
    reset_global_block_b(r0);
    frame.release();
    clear_aligned(global_00997c70_address, 0x12u);
    return;  // (from the original)
}

}  // namespace d_006dcc94
GUEST_EXPORT(0x006dcc94, d_006dcc94::f_006dcc94);

// f_006dcd28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcd28 {

inline guest::global<u32, 0x0014fe40> global_0014fe40;

void f_006dcd28(u32 r0) {
    u32 r0_1 = *gptr<u32>(r0 + 0x6b4cu);  // (from the original)
    if (r0_1 == 0) {
        return;
    }
    guest::call_address<u32>(*global_0014fe40, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dcd28
GUEST_EXPORT(0x006dcd28, d_006dcd28::f_006dcd28);

// f_006dcd50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dcd50 {

struct __attribute__((packed)) Local_006dcd50_r4_1 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 byte_15;
};
GUEST_OFFSET(Local_006dcd50_r4_1, byte_14, 0x14);
GUEST_OFFSET(Local_006dcd50_r4_1, byte_15, 0x15);

inline guest::global<u32, 0x0085468c> global_0085468c;
inline guest::global<u32, 0x00854690> global_00854690;
inline guest::global<u32, 0x00854694> global_00854694;
inline guest::global<u32, 0x00854698> global_00854698;
inline guest::global<u32, 0x0085469c> global_0085469c;
inline guest::global<u32, 0x008546a0> global_008546a0;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x007111b4, u32(u32)> Stamp__is_today;

struct __attribute__((packed)) Frame_006dcd50 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006dcd50, float_0, 0x0);
GUEST_OFFSET(Frame_006dcd50, float_4, 0x4);
GUEST_OFFSET(Frame_006dcd50, float_8, 0x8);
GUEST_OFFSET(Frame_006dcd50, float_c, 0xc);
GUEST_OFFSET(Frame_006dcd50, float_10, 0x10);
GUEST_OFFSET(Frame_006dcd50, word_14, 0x14);
GUEST_OFFSET(Frame_006dcd50, word_18, 0x18);
GUEST_SIZE(Frame_006dcd50, 0x20);

u32 f_006dcd50() {
    guest::StackFrameOf<Frame_006dcd50> frame;  // the original's stack frame
    float S0_1 = 1.344982e-38f;
    float S1_1 = std::bit_cast<float>(*global_0085468c);
    float S2_1 = std::bit_cast<float>(*global_00854690);
    float S3_1 = std::bit_cast<float>(*global_00854694);
    float S4_1 = std::bit_cast<float>(*global_00854698);
    float S5_1 = std::bit_cast<float>(*global_0085469c);
    float S6_1 = std::bit_cast<float>(*global_008546a0);
    frame->float_0 = S0_1;
    frame->float_4 = S1_1;
    frame->float_8 = S2_1;
    frame->float_c = S3_1;
    frame->float_10 = S4_1;
    frame->word_14 = std::bit_cast<u32>(S5_1);
    frame->word_18 = std::bit_cast<u32>(S6_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    u32 save_data = get_save_data(0x854688u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_006dcd50_r4_1> r4_1 = gptr<Local_006dcd50_r4_1>(save_data + 0x62250u);  // (from the original)
    u32 r0_2 = Stamp__is_today(r4_1.addr());
    if (r0_2 == 0) {
        return gptr<u32>(frame.at(0).addr())[u32(r4_1->byte_14)];
    }
    u32 r0_4 = r4_1->byte_15;
    u32 zf_1 = r0_4 == 2u;
    u32 cf_1 = r0_4 >= 2u;
    if (r0_4 <= 2u) {
        r0_4 = frame->word_14;
    }
    if (cf_1 && !zf_1) {
        r0_4 = frame->word_18;
    }
    return r0_4;
}

}  // namespace d_006dcd50
GUEST_EXPORT_FRAMED(0x006dcd50, d_006dcd50::f_006dcd50, 0x4010);  // pushes {r4, lr} first, as the original

// f_006dd0c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd0c8 {

inline guest::global<u32, 0x0014fe50> global_0014fe50;

void f_006dd0c8(u32 r0) {
    u32 r0_1 = *gptr<u32>(r0 + 0x6b4cu);  // (from the original)
    if (r0_1 == 0) {
        return;
    }
    guest::call_address<u32>(*global_0014fe50, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dd0c8
GUEST_EXPORT(0x006dd0c8, d_006dd0c8::f_006dd0c8);

// f_006dd294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd294 {

inline guest::global<u32, 0x008546b0> global_008546b0;
inline guest::global<u32, 0x008546b4> global_008546b4;
inline guest::global<u32, 0x008546b8> global_008546b8;
inline guest::global<u32, 0x008546bc> global_008546bc;
inline guest::global<u32, 0x008546c0> global_008546c0;
inline guest::global<u32, 0x008546c4> global_008546c4;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x0071c358, u32(u32)> call_0071c358;

struct __attribute__((packed)) Frame_006dd294 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Frame_006dd294, word_0, 0x0);
GUEST_OFFSET(Frame_006dd294, word_4, 0x4);
GUEST_OFFSET(Frame_006dd294, word_8, 0x8);
GUEST_OFFSET(Frame_006dd294, word_c, 0xc);
GUEST_OFFSET(Frame_006dd294, word_10, 0x10);
GUEST_OFFSET(Frame_006dd294, word_14, 0x14);
GUEST_SIZE(Frame_006dd294, 0x18);

u32 f_006dd294() {
    guest::StackFrameOf<Frame_006dd294> frame;  // the original's stack frame
    u32 r4_1 = *global_008546c4;
    u32 r0_1 = *global_008546b0;
    u32 r1_1 = *global_008546b4;
    u32 r2_1 = *global_008546b8;
    u32 r3_1 = *global_008546bc;
    u32 r12_1 = *global_008546c0;
    frame->word_14 = r4_1;
    frame->word_0 = r0_1;
    frame->word_4 = r1_1;
    frame->word_8 = r2_1;
    frame->word_c = r3_1;
    frame->word_10 = r12_1;
    u32 save_data = get_save_data(r0_1, r1_1, r2_1, r3_1);
    u32 r4_2 = save_data + 0x666e4u;  // (from the original)
    u32 r0_3 = call_0071c358(r4_2);
    u32 r0_4 = *gptr<u8>(r4_2 + 0x10u);  // (from the original)
    if (r0_3 == 0) {
        return gptr<u32>(frame.at(0).addr())[r0_4];
    }
    return r0_4 == 1u ? frame->word_4 : frame->word_14;
}

}  // namespace d_006dd294
GUEST_EXPORT_FRAMED(0x006dd294, d_006dd294::f_006dd294, 0x4010);  // pushes {r4, lr} first, as the original

// f_006dd2f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd2f8 {

inline guest::global<u32, 0x008546a4> global_008546a4;
inline guest::global<u32, 0x008546a8> global_008546a8;
inline guest::global<u32, 0x008546ac> global_008546ac;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;

struct __attribute__((packed)) Frame_006dd2f8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_006dd2f8, word_0, 0x0);
GUEST_OFFSET(Frame_006dd2f8, word_4, 0x4);
GUEST_OFFSET(Frame_006dd2f8, word_8, 0x8);
GUEST_SIZE(Frame_006dd2f8, 0xc);

u32 f_006dd2f8() {
    guest::StackFrameOf<Frame_006dd2f8> frame;  // the original's stack frame
    u32 r0_1 = *global_008546a4;
    u32 r1_1 = *global_008546a8;
    u32 r2_1 = *global_008546ac;
    frame->word_0 = r0_1;
    frame->word_4 = r1_1;
    frame->word_8 = r2_1;
    u32 save_data = get_save_data(r0_1);
    return gptr<u32>(frame.at(0).addr())[u32(*gptr<u8>(save_data + 0x6682cu))];  // (from the original)
}

}  // namespace d_006dd2f8
GUEST_EXPORT_FRAMED(0x006dd2f8, d_006dd2f8::f_006dd2f8, 0x4000);  // pushes {lr} first, as the original

// f_006dd334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd334 {

inline constexpr u32 global_00997c70_address = 0x00997c70u;
inline constexpr guest::Function<0x00779548, u32(u32, u32)> store_constants_779548;

void f_006dd334() {
    store_constants_779548(global_00997c70_address, guest::cpu()->r[1]);
}

}  // namespace d_006dd334
GUEST_EXPORT(0x006dd334, d_006dd334::f_006dd334);

// f_006dd7b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd7b4 {

inline guest::global<u32, 0x008546c8> global_008546c8;
inline guest::global<u32, 0x008546cc> global_008546cc;
inline guest::global<u32, 0x008546d0> global_008546d0;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;

struct __attribute__((packed)) Frame_006dd7b4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_006dd7b4, word_0, 0x0);
GUEST_OFFSET(Frame_006dd7b4, word_4, 0x4);
GUEST_OFFSET(Frame_006dd7b4, word_8, 0x8);
GUEST_SIZE(Frame_006dd7b4, 0xc);

u32 f_006dd7b4() {
    guest::StackFrameOf<Frame_006dd7b4> frame;  // the original's stack frame
    u32 r0_1 = *global_008546c8;
    u32 r1_1 = *global_008546cc;
    u32 r2_1 = *global_008546d0;
    frame->word_0 = r0_1;
    frame->word_4 = r1_1;
    frame->word_8 = r2_1;
    u32 save_data = get_save_data(r0_1);
    return gptr<u32>(frame.at(0).addr())[u32(*gptr<u8>(save_data + 0x6adb4u))];  // (from the original)
}

}  // namespace d_006dd7b4
GUEST_EXPORT_FRAMED(0x006dd7b4, d_006dd7b4::f_006dd7b4, 0x4000);  // pushes {lr} first, as the original

// f_006dd7e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dd7e8 {

inline constexpr guest::Function<0x006cc934, u32(u32, u32)> byte_88bd38_is_f;

u32 f_006dd7e8(u32 r0, u32 r1) {
    if (r1 >= 3u) {
        return 0u;
    }
    u32 r4_1 = r0 + (r1 << 4);
    u32 r0_1 = *gptr<u8>(r4_1 + 0x6b60u);  // (from the original)
    u32 r0_2 = byte_88bd38_is_f(r0_1, r1);
    if (r0_2 != 0) {
        return r4_1 + 0x6b64u;  // (from the original)
    }
    return 0u;
}

}  // namespace d_006dd7e8
GUEST_EXPORT_FRAMED(0x006dd7e8, d_006dd7e8::f_006dd7e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006de398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006de398 {

struct __attribute__((packed)) Object_006de398_0 {
    u8 unknown_0[0x6758];  // (not used here)
    u32 word_6758;
    u8 unknown_675c[0x4];  // (not used here)
    u32 word_6760;
};
GUEST_OFFSET(Object_006de398_0, word_6758, 0x6758);
GUEST_OFFSET(Object_006de398_0, word_6760, 0x6760);

struct __attribute__((packed)) Local_006de398_r0_13 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_006de398_r0_13, word_0, 0x0);
GUEST_OFFSET(Local_006de398_r0_13, word_8, 0x8);

struct __attribute__((packed)) Local_006de398_r0_21 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_006de398_r0_21, word_0, 0x0);
GUEST_OFFSET(Local_006de398_r0_21, word_8, 0x8);

struct __attribute__((packed)) Local_006de398_r0_29 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_006de398_r0_29, word_0, 0x0);
GUEST_OFFSET(Local_006de398_r0_29, word_8, 0x8);

struct __attribute__((packed)) Local_006de398_r0_7 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_006de398_r0_7, word_0, 0x0);
GUEST_OFFSET(Local_006de398_r0_7, word_8, 0x8);

inline constexpr guest::Function<0x0014fe74, u32(u32, u32, u32)> call_0014fe74;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;

struct __attribute__((packed)) Frame_006de398 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_006de398, word_0, 0x0);
GUEST_OFFSET(Frame_006de398, word_4, 0x4);
GUEST_OFFSET(Frame_006de398, word_8, 0x8);
GUEST_OFFSET(Frame_006de398, word_c, 0xc);
GUEST_SIZE(Frame_006de398, 0x10);

u32 f_006de398(gptr<Object_006de398_0> arg0, u32 r1, float S0, float S1) {
    guest::StackFrameOf<Frame_006de398> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r10 = r0;
    u32 r8 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    position_to_cell(frame.at(8).addr(), frame.at(0xc).addr(), r1, guest::cpu()->r[3]);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    frame->word_0 = 0;
    frame->word_4 = 0;
    r1 = arg0->word_6758;
    u32 r4 = 0x2710u;  // (from the original)
    u32 r5 = arg0->word_6760;
    u32 r6 = 0u;
    u32 r7 = r5 + (r1 << 2);
    if (r5 != r7) {
        do {
            u32 r0_2 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_3 = call_0014fe74(r0_2, r1, r2);
            position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0_3, guest::cpu()->r[3]);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            r2 = frame->word_c;
            u32 r0_5 = frame->word_8 - frame->word_0;
            if (s32(r0_5) < 0) {
                r0_5 = 0u - r0_5;
            }
            r1 = r2 - frame->word_4;
            if (s32(r1) < 0) {
                r1 = 0u - r1;
            }
            u32 r0_6 = r0_5 + r1;
            if (s32(r0_6) < s32(r4)) {
                r6 = *gptr<u32>(r5);
                r4 = r0_6;
            }
            r5 += 4u;
            guest::preempt();
        } while (r5 != r7);
    }
    gptr<Local_006de398_r0_7> r0_7 = gptr<Local_006de398_r0_7>(r10 + 0x6774u);  // (from the original)
    r1 = r0_7->word_0;
    r5 = r0_7->word_8;
    r7 = r5 + (r1 << 2);
    if (r5 != r7) {
        do {
            u32 r0_8 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_9 = call_0014fe74(r0_8, r1, r2);
            position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0_9, guest::cpu()->r[3]);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            r2 = frame->word_4;
            u32 r0_11 = frame->word_8 - frame->word_0;
            if (s32(r0_11) < 0) {
                r0_11 = 0u - r0_11;
            }
            r1 = frame->word_c - r2;
            if (s32(r1) < 0) {
                r1 = 0u - r1;
            }
            u32 r0_12 = r0_11 + r1;
            if (s32(r0_12) < s32(r4)) {
                r6 = *gptr<u32>(r5);
                r4 = r0_12;
            }
            r5 += 4u;
            guest::preempt();
        } while (r5 != r7);
    }
    gptr<Local_006de398_r0_13> r0_13 = gptr<Local_006de398_r0_13>(r10 + 0x68c0u);  // (from the original)
    r1 = r0_13->word_0;
    r5 = r0_13->word_8;
    u32 r9 = r5 + (r1 << 2);
    if (r5 != r9) {
        do {
            u32 r0_14 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_15 = call_0014fe74(r0_14, r1, r2);
            position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0_15, guest::cpu()->r[3]);
            u32 r2_1 = frame->word_4;
            u32 r0_17 = frame->word_8 - frame->word_0;
            if (s32(r0_17) < 0) {
                r0_17 = 0u - r0_17;
            }
            u32 r1_5 = frame->word_c - r2_1;
            if (s32(r1_5) < 0) {
                r1_5 = 0u - r1_5;
            }
            u32 r7_1 = r0_17 + r1_5;
            u32 r0_19 = call_0014fe74(*gptr<u32>(r5), r1_5, r2_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S1 = std::bit_cast<float>(*gptr<u32>(r0_19 + 4u));
            u32 res_1 = r7_1 - r4;
            u32 nf_1 = res_1 >> 0x1f;  // (from the original)
            u32 vf_1 = ((r7_1 ^ r4) & (r7_1 ^ res_1)) >> 0x1f;  // (from the original)
            S0 = fabsf(S1 - std::bit_cast<float>(*gptr<u32>(r8 + 4u)));
            if (nf_1 != vf_1) {
                u32 r0_20 = std::bit_cast<u32>(S0);
                nf_1 = r0_20 + 0xbe000000u >> 0x1f;  // (from the original)
                vf_1 = ((r0_20 ^ 0x42000000u) & (r0_20 ^ r0_20 + 0xbe000000u)) >> 0x1f;  // (from the original)
            }
            if (nf_1 != vf_1) {
                r6 = *gptr<u32>(r5);
                r4 = r7_1;
            }
            r5 += 4u;
            guest::preempt();
        } while (r5 != r9);
    }
    gptr<Local_006de398_r0_21> r0_21 = gptr<Local_006de398_r0_21>(r10 + 0x67ccu);  // (from the original)
    r1 = r0_21->word_0;
    r5 = r0_21->word_8;
    r9 = r5 + (r1 << 2);
    if (r5 != r9) {
        do {
            u32 r0_22 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_23 = call_0014fe74(r0_22, r1, r2);
            position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0_23, guest::cpu()->r[3]);
            u32 r2_2 = frame->word_4;
            u32 r0_25 = frame->word_8 - frame->word_0;
            if (s32(r0_25) < 0) {
                r0_25 = 0u - r0_25;
            }
            u32 r1_7 = frame->word_c - r2_2;
            if (s32(r1_7) < 0) {
                r1_7 = 0u - r1_7;
            }
            u32 r7_2 = r0_25 + r1_7;
            u32 r0_27 = call_0014fe74(*gptr<u32>(r5), r1_7, r2_2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S1 = std::bit_cast<float>(*gptr<u32>(r8 + 4u));
            u32 res_3 = r7_2 - r4;
            u32 nf_2 = res_3 >> 0x1f;  // (from the original)
            u32 vf_2 = ((r7_2 ^ r4) & (r7_2 ^ res_3)) >> 0x1f;  // (from the original)
            S0 = fabsf(std::bit_cast<float>(*gptr<u32>(r0_27 + 4u)) - S1);
            if (nf_2 != vf_2) {
                u32 r0_28 = std::bit_cast<u32>(S0);
                nf_2 = r0_28 + 0xbe000000u >> 0x1f;  // (from the original)
                vf_2 = ((r0_28 ^ 0x42000000u) & (r0_28 ^ r0_28 + 0xbe000000u)) >> 0x1f;  // (from the original)
            }
            if (nf_2 != vf_2) {
                r6 = *gptr<u32>(r5);
                r4 = r7_2;
            }
            r5 += 4u;
            guest::preempt();
        } while (r5 != r9);
    }
    gptr<Local_006de398_r0_29> r0_29 = gptr<Local_006de398_r0_29>(r10 + 0x67a8u);  // (from the original)
    r1 = r0_29->word_0;
    r5 = r0_29->word_8;
    r7 = r5 + (r1 << 2);
    if (r5 != r7) {
        do {
            u32 r0_30 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_31 = call_0014fe74(r0_30, r1, r2);
            position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0_31, guest::cpu()->r[3]);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            r2 = frame->word_4;
            u32 r0_33 = frame->word_8 - frame->word_0;
            if (s32(r0_33) < 0) {
                r0_33 = 0u - r0_33;
            }
            r1 = frame->word_c - r2;
            if (s32(r1) < 0) {
                r1 = 0u - r1;
            }
            u32 r0_34 = r0_33 + r1;
            if (s32(r0_34) < s32(r4)) {
                r6 = *gptr<u32>(r5);
                r4 = r0_34;
            }
            r5 += 4u;
            guest::preempt();
        } while (r5 != r7);
    }
    u32 r10_1 = r10 + 0x6a6cu;  // (from the original)
    r5 = *gptr<u32>(r10_1 + 8u);
    r7 = r5 + (*gptr<u32>(r10_1) << 2);
    if (r5 != r7) {
        do {
            u32 r0_35 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_36 = call_0014fe74(r0_35, r1, r2);
            position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0_36, guest::cpu()->r[3]);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            r2 = frame->word_4;
            u32 r0_38 = frame->word_8 - frame->word_0;
            if (s32(r0_38) < 0) {
                r0_38 = 0u - r0_38;
            }
            r1 = frame->word_c - r2;
            if (s32(r1) < 0) {
                r1 = 0u - r1;
            }
            u32 r0_39 = r0_38 + r1;
            if (s32(r0_39) < s32(r4)) {
                r6 = *gptr<u32>(r5);
                r4 = r0_39;
            }
            r5 += 4u;
            guest::preempt();
        } while (r5 != r7);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r6;
}

}  // namespace d_006de398
GUEST_EXPORT_FRAMED(0x006de398, d_006de398::f_006de398, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006dfe10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006dfe10 {

inline constexpr u32 vtable_BsNpcMgr__NpcPosGetCB = 0x0090af48u;
inline constexpr u32 npc_manager_address = 0x00950148u;
inline constexpr u32 global_00997c70_address = 0x00997c70u;
inline guest::global<u32, 0x00950148> npc_manager;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x004e24e4, u32(u32, u32, u32, u32)> read_s8_0x009529d5_;
inline constexpr guest::Function<0x004e24f4, u32(u32)> read_s8_0x009529d6_;
inline constexpr guest::Function<0x005b4340, u32(u32)> byte_for_kind;

struct __attribute__((packed)) Frame_006dfe10 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x78];  // (not read or written by name)
    u32 word_80;
};
GUEST_OFFSET(Frame_006dfe10, word_0, 0x0);
GUEST_OFFSET(Frame_006dfe10, word_4, 0x4);
GUEST_OFFSET(Frame_006dfe10, word_80, 0x80);
GUEST_SIZE(Frame_006dfe10, 0x84);

u32 BsNpcMgr__NpcPosGetCB__NpcPosGetCB_006dfe10(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006dfe10> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r0_1 = read_s8_0x009529d5_(r0, r1, r2, r3);
    if (r0_1 != 0) {
        return 0u;
    }
    u32 r0_2 = read_s8_0x009529d6_(r0_1);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        return 0u;
    }
    u32 r0_3 = *npc_manager;
    if (r0_3 != 0) {
        frame->word_4 = 0;
        frame->word_0 = vtable_BsNpcMgr__NpcPosGetCB;
        u32 r0_5 = for_each_element(frame.at(8).addr(), 0x3040fcu, 0xcu, 0xau);  // (from the original)
        r1_2 = 0u;
        *gptr<u32>(r0_5 + 0x78u) = r1_2;  // (from the original)
        r0_3 = frame->word_80;
        if (s32(r0_3) > 0) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
    }
    u32 r0_6 = read_global_byte_2(r0_3, r1_2);
    u32 r0_7 = byte_for_kind(r0_6);
    if (r0_7 - 2u == 0) {
        r0_8 = 0xcu;  // (from the original)
    } else {
        if ((r0_7 - 2u >> 0x1f) != (((r0_7 ^ 2u) & (r0_7 ^ r0_7 - 2u)) >> 0x1f)) {  // (from the original)
            if (r0_7 == 0) {
                r0_8 = 0xau;  // (from the original)
                goto L_6dfed0;
            }
            if (r0_7 == 1u) {
                r0_8 = 0xbu;  // (from the original)
                goto L_6dfed0;
            }
            return 1u;
        }
        if (r0_7 == 3u) {
            r0_8 = 0xdu;  // (from the original)
        } else if (r0_7 == 0x84u) {  // (from the original)
            r0_8 = 0xeu;  // (from the original)
        } else {
            return 1u;
        }
    }
L_6dfed0:;
    r1 = 0u;
    r0 = u32(*gptr<u8>(r0_8 + global_00997c70_address)) >> 4;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    do {
        if ((r0 & 1u) != 0) {
            r1 += 1u;
        }
        r0 >>= 1;
        guest::preempt();
    } while (r0 != 0);
    if (r1 > 1u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_006dfe10
GUEST_EXPORT_FRAMED(0x006dfe10, d_006dfe10::BsNpcMgr__NpcPosGetCB__NpcPosGetCB_006dfe10, 0x4000);  // pushes {lr} first, as the original
