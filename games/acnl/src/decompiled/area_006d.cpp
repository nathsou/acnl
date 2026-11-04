// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006d12d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the ATM menu: its button, renderer, layout and menu base.
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
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__destructor;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> script__RenderTrace__destructor_b;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuAtm__destructor(gptr<BsMenuAtm> bs_menu_atm) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_atm->bs_menu_atm_vtable = vtable_BsMenuAtm_at_28;
    bs_menu_atm->vtable = vtable_BsMenuAtm;
    u32 r4_1 = bs_menu_atm.addr() + 0x27d0u;
    bs_menu_atm->vtable_2438 = vtable_ComButton2Lyt;
    bs_menu_atm->control2_button_vtable = vtable_Control2Button;
    bs_menu_atm->control2_button_vtable_28b4 = vtable_Control2Button_at_e4;
    destroy_array_elements(bs_menu_atm.addr() + 0x28e8u, 0x2e0b3cu, 0x518u, 2u);
    ControlButtonBase__destructor(r4_1);
    bs_menu_atm->vtable_2438 = vtable_ComButtonLytBase;
    u32 ea_1 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r4_1 - 0x248u, vtable_ComButtonLytBase) - 0x14cu) - 0x18c4u;
    *gptr<u32>(ea_1) = vtable_TenkeyPad;
    destroy_array_elements(ea_1 + 0xe40u, 0x2b6ef8u, 0xe0u, 0xcu);
    u32 r0_7 = ea_1 + 0xd5cu;
    destroy_button_action_control(r0_7);
    destroy_array_elements(r0_7 - 0x930u, 0x6eed5cu, 0xc4u, 0xcu);
    u32 r0_9 = r0_7 - 0x97cu;
    destroy_animation(r0_9);
    u32 r0_10 = r0_9 - 0x28u;
    destroy_animation(r0_10);
    u32 r0_13 = Layout__destructor(r0_10 - 0x14cu) - 0x248u;
    u32 r0_14 = ssys__ma__lyt__ArcResAccReader__destructor(r0_13, guest::cpu()->r[1]);
    *gptr<u32>(r0_14 - 0xb50u) = vtable_AtmWindow;
    u32 r0_15 = r0_14 - 0x100u;
    script__RenderTrace__destructor_b(r0_15, vtable_AtmWindow);
    u32 r0_16 = r0_15 - 0xc4u;
    script__RenderTrace__destructor_b(r0_16, guest::cpu()->r[1]);
    u32 r0_17 = r0_16 - 0xc4u;
    script__RenderTrace__destructor_b(r0_17, guest::cpu()->r[1]);
    u32 r0_18 = r0_17 - 0xc4u;
    script__RenderTrace__destructor_b(r0_18, guest::cpu()->r[1]);
    u32 r0_19 = r0_18 - 0xc4u;
    script__RenderTrace__destructor_b(r0_19, guest::cpu()->r[1]);
    u32 r0_20 = r0_19 - 0xc4u;
    script__RenderTrace__destructor_b(r0_20, guest::cpu()->r[1]);
    u32 r0_21 = r0_20 - 0xc4u;
    script__RenderTrace__destructor_b(r0_21, guest::cpu()->r[1]);
    u32 r0_22 = r0_21 - 0xc4u;
    script__RenderTrace__destructor_b(r0_22, guest::cpu()->r[1]);
    u32 r0_23 = r0_22 - 0xc4u;
    script__RenderTrace__destructor_b(r0_23, guest::cpu()->r[1]);
    u32 r0_24 = r0_23 - 0x28u;
    destroy_animation(r0_24);
    u32 r0_25 = r0_24 - 0x28u;
    destroy_animation(r0_25);
    u32 r0_26 = r0_25 - 0x28u;
    destroy_animation(r0_26);
    u32 r0_29 = Layout__destructor(r0_26 - 0x14cu) - 0x248u;
    u32 r0_31 = ssys__ma__lyt__ArcResAccReader__destructor(r0_29, guest::cpu()->r[1]) - 0x70u;
    frame.release();
    return MenuBase__destructor(r0_31, guest::cpu()->r[1]);
}

}  // namespace d_006d12d0
GUEST_EXPORT(0x006d12d0, d_006d12d0::BsMenuAtm__destructor);

// f_006d1bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True unless the menu is in state 2, then asks the menu object (0x94fc2c).
namespace d_006d1bc8 {

inline constexpr u32 item_menu_closable_address = 0x0094fc2cu;
inline guest::global<u32, 0x0014fe00> global_0014fe00;
inline guest::global<u32, 0x0094fc2c> item_menu_closable;

u32 ItemMenu__can_close(u32 item_menu) {
    if (*gptr<u8>(item_menu + 0x40u) != 2u) {
        return 1u;
    }
    u32 r0_1 = *item_menu_closable;
    if (r0_1 == 0) {
        return r0_1;
    }
    return guest::call_address<u32>(*global_0014fe00, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006d1bc8
GUEST_EXPORT(0x006d1bc8, d_006d1bc8::ItemMenu__can_close);

// f_006d1ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the menu's selection (0x94fd3c) accepts kind 8.
namespace d_006d1ce4 {

inline constexpr u32 menu_selection_address = 0x0094fd3cu;
inline guest::global<u32, 0x0094fd3c> menu_selection;
inline constexpr guest::Function<0x006d40d4, u32(u32, u32)> selection_accepts;

u32 ItemMenu__selection_accepts_8() {
    return selection_accepts(*menu_selection, 8u);
}

}  // namespace d_006d1ce4
GUEST_EXPORT(0x006d1ce4, d_006d1ce4::ItemMenu__selection_accepts_8);

// f_006d1cf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the window to the menu's window list (once) and wakes the menu from state 3.
namespace d_006d1cf8 {

inline constexpr u32 item_menu_windows_address = 0x0098c4fcu;
inline guest::global<u8, 0x0094fd0e> item_menu_window_count;
inline constexpr guest::Function<0x00138920, u32(u32, u32)> list_contains_node;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;

void ItemMenu__register_window(u32 item_menu) {
    if (list_contains_node(item_menu_windows_address, item_menu) != 0) {
        return;
    }
    queue_append(item_menu_windows_address, item_menu);
    u32 r1_2 = *item_menu_window_count;
    if (r1_2 == 3u) {
        r1_2 = 1u;
        *item_menu_window_count = u8(r1_2);
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_006d1cf8
GUEST_EXPORT_FRAMED(0x006d1cf8, d_006d1cf8::ItemMenu__register_window, 0x4010);  // pushes {r4, lr} first, as the original

// f_006d2528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Selects pocket slot `index` (below 20, marking it selected) and reads its item.
namespace d_006d2528 {

inline constexpr u32 item_menu_selected_address = 0x0094fd0cu;
inline constexpr u32 selected_pocket_slot_address = 0x0094fd50u;
inline guest::global<u8, 0x0094fd0d> item_menu_pocket;
inline guest::global<u32, 0x0094fd50> selected_pocket_slot;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> Pockets__item_with_lock;

struct __attribute__((packed)) ItemMenuSelectPocketFrame {
    u32 word_0;
};
GUEST_OFFSET(ItemMenuSelectPocketFrame, word_0, 0x0);
GUEST_SIZE(ItemMenuSelectPocketFrame, 0x4);

void ItemMenu__select_pocket(u32 item_menu, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemMenuSelectPocketFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    *selected_pocket_slot = item_menu;
    if (s32(item_menu) >= 0x14) {
        *item_menu_pocket = 0;
        return;
    }
    u32 player = get_current_player(item_menu, r1, r2, r3);
    u32 r0_3 = Pockets__item_with_lock(player + 0x6bd0u, *selected_pocket_slot, 0u);
    Item__copy_b(frame.at(0).addr(), r0_3);
    *item_menu_pocket = 1;
}

}  // namespace d_006d2528
GUEST_EXPORT_FRAMED(0x006d2528, d_006d2528::ItemMenu__select_pocket, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006d2584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the menu is not blocked and the talk is in one of the states that allow it.
namespace d_006d2584 {

inline guest::global<u32, 0x0094fd58> town_runtime_flags;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> talk_state_matches;

u32 ItemMenu__talk_allows_menu(u32 r0_unused, u32 r1) {
    if ((*town_runtime_flags & 0x400u) != 0) {
        return 0u;
    }
    if (talk_state_matches(5u, 0u) != 0) {
        return 1u;
    }
    if (talk_state_matches(6u, 0u) != 0) {
        return 1u;
    }
    if (talk_state_matches(0u, 0u) != 0) {
        return 1u;
    }
    if (talk_state_matches(3u, 0u) != 0) {
        return 1u;
    }
    if (talk_state_matches(4u, 0u) != 0) {
        return 1u;
    }
    if (talk_state_matches(9u, 0u) != 0) {
        return 1u;
    }
    if (talk_state_matches(0xau, 0u) != 0) {
        return 1u;
    }
    if (talk_state_matches(0xbu, 0u) != 0) {
        return 1u;
    }
    u32 r0_9 = talk_state_matches(0xcu, 0u);
    return r0_9 == 0 ? r0_9 : 1u;
}

}  // namespace d_006d2584
GUEST_EXPORT_FRAMED(0x006d2584, d_006d2584::ItemMenu__talk_allows_menu, 0x4010);  // pushes {r4, lr} first, as the original

// f_006d2750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the three menu ids (0x98c508) to 0x248 (none).
namespace d_006d2750 {

inline constexpr u32 item_menu_id_address = 0x0098c508u;
inline guest::global<u32, 0x0098c508> item_menu_id;
inline guest::global<u32, 0x0098c50c> item_menu_id_a;
inline guest::global<u32, 0x0098c510> item_menu_id_b;

u32 ItemMenu__reset_ids() {
    *item_menu_id = 0x248;
    *item_menu_id_a = 0x248;
    *item_menu_id_b = 0x248;
    guest::cpu()->r[1] = 0x248u;
    return item_menu_id_address;
}

}  // namespace d_006d2750
GUEST_EXPORT(0x006d2750, d_006d2750::ItemMenu__reset_ids);

// f_006d276c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The high half of the word at 0x94fd38.
namespace d_006d276c {

inline guest::global<u32, 0x0094fd38> item_menu_quantity;

u32 ItemMenu__quantity_high_half() {
    return s32(*item_menu_quantity) >> 0x10;
}

}  // namespace d_006d276c
GUEST_EXPORT(0x006d276c, d_006d276c::ItemMenu__quantity_high_half);

// f_006d2800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the window from the list and, when none is left, releases the menu's flags and clears the selection's flag.
namespace d_006d2800 {

inline constexpr u32 item_menu_selected_address = 0x0094fd0cu;
inline constexpr u32 menu_selection_address = 0x0094fd3cu;
inline constexpr u32 item_menu_windows_address = 0x0098c4fcu;
inline guest::global<u8, 0x0094fd10> global_0094fd10;
inline guest::global<u32, 0x0094fd3c> menu_selection;
inline guest::global<u32, 0x0098c500> item_menu_special_window;
inline constexpr guest::Function<0x00138920, u32(u32, u32)> list_contains_node;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;
inline constexpr guest::Function<0x00584134, u32(u32)> flag_manager;
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32)> FlagManager__release;

void ItemMenu__unregister_window(u32 item_menu) {
    if (list_contains_node(item_menu_windows_address, item_menu) == 0) {
        return;
    }
    unlink_from_ends(item_menu_windows_address, item_menu);
    if (*item_menu_special_window != 0) {
        return;
    }
    u32 r0_2 = *global_0094fd10;
    if (r0_2 == 0) {
        u32 r0_7 = flag_manager(FlagManager__release(flag_manager(FlagManager__release(flag_manager(r0_2), 0x21u)), 0x1fu));
        FlagManager__release(r0_7, 0x1eu);
    }
    u32 r0_8 = *menu_selection;
    if (r0_8 != 0) {
        *gptr<u8>(r0_8 + 0x208u) = 0;
    }
}

}  // namespace d_006d2800
GUEST_EXPORT_FRAMED(0x006d2800, d_006d2800::ItemMenu__unregister_window, 0x4010);  // pushes {r4, lr} first, as the original

// f_006d2e34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the menu's position (0x98c554).
namespace d_006d2e34 {

struct __attribute__((packed)) ItemMenu {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(ItemMenu, word_0, 0x0);
GUEST_OFFSET(ItemMenu, word_4, 0x4);
GUEST_OFFSET(ItemMenu, word_8, 0x8);

inline constexpr u32 item_menu_position_x_address = 0x0098c554u;
inline guest::global<u32, 0x0098c554> item_menu_position_x;
inline guest::global<u32, 0x0098c558> item_menu_position_y;
inline guest::global<u32, 0x0098c55c> item_menu_position_z;

void ItemMenu__get_position(gptr<ItemMenu> item_menu) {
    u32 r2_1 = *item_menu_position_x;
    u32 r3_1 = *item_menu_position_y;
    item_menu->word_8 = *item_menu_position_z;
    item_menu->word_0 = r2_1;
    item_menu->word_4 = r3_1;
}

}  // namespace d_006d2e34
GUEST_EXPORT(0x006d2e34, d_006d2e34::ItemMenu__get_position);

// f_006d2e98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the first menu id is set (not 0x248).
namespace d_006d2e98 {

inline guest::global<u32, 0x0098c508> item_menu_id;

u32 ItemMenu__has_id() {
    u32 r0_1 = 1u;
    if (*item_menu_id == 0x248u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_006d2e98
GUEST_EXPORT(0x006d2e98, d_006d2e98::ItemMenu__has_id);

// f_006d2f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When request 0x7b is granted, marks the menu closing and closes it.
namespace d_006d2f24 {

inline guest::global<u8, 0x0094fd2b> menu_resume_flag;
inline constexpr guest::Function<0x00195488, u32(u32, u32)> set_packed_display_value;
inline constexpr guest::Function<0x006d1ffc, u32(u32, u32)> try_request;

void ItemMenu__request_close(u32 item_menu, u32 r1) {
    if (try_request(0x7bu, 0u) != 0) {
        *menu_resume_flag = 2;
        set_packed_display_value(item_menu, r1);
    }
}

}  // namespace d_006d2f24
GUEST_EXPORT_FRAMED(0x006d2f24, d_006d2f24::ItemMenu__request_close, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006d3020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes one from the selected pocket item (category 0x29 counts), emptying the slot when it was the last.
namespace d_006d3020 {

inline constexpr u32 item_menu_selected_address = 0x0094fd0cu;
inline constexpr u32 selected_pocket_slot_address = 0x0094fd50u;
inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u32, 0x0094fd50> selected_pocket_slot;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x006bb230, u32(u32, u32)> set_category_29_count;
inline constexpr guest::Function<0x006bb76c, u32(u32)> take_one_of_category_29;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> Pockets__item_with_lock;

struct __attribute__((packed)) ItemMenuTakeOneFromSelectedFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ItemMenuTakeOneFromSelectedFrame, word_0, 0x0);
GUEST_SIZE(ItemMenuTakeOneFromSelectedFrame, 0x8);

void ItemMenu__take_one_from_selected(u32 item_menu, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemMenuTakeOneFromSelectedFrame> frame;  // the original's stack frame
    u32 player = get_current_player(item_menu, r1, r2, r3);
    u32 r0_2 = Pockets__item_with_lock(player + 0x6bd0u, *selected_pocket_slot, 0u);
    Item__copy_b(frame.at(4).addr(), r0_2);
    u32 r0_5 = take_one_of_category_29(frame.at(4).addr());
    if (r0_5 == 0) {
        u32 r1_3 = *selected_pocket_slot;
        frame->word_0 = 1;
        Pockets__set_slot(player + 0x6bd0u, r1_3, empty_item_address, 0u);
    } else {
        set_category_29_count(frame.at(4).addr(), r0_5);
        frame->word_0 = 1;
        Pockets__set_slot(player + 0x6bd0u, *selected_pocket_slot, frame.at(4).addr(), 0u);
    }
}

}  // namespace d_006d3020
GUEST_EXPORT_FRAMED(0x006d3020, d_006d3020::ItemMenu__take_one_from_selected, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006d30c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the menu's position (0x98c554).
namespace d_006d30c4 {

struct __attribute__((packed)) ItemMenu {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(ItemMenu, word_0, 0x0);
GUEST_OFFSET(ItemMenu, word_4, 0x4);
GUEST_OFFSET(ItemMenu, word_8, 0x8);

inline guest::global<u32, 0x0098c554> item_menu_position_x;
inline guest::global<u32, 0x0098c558> item_menu_position_y;
inline guest::global<u32, 0x0098c55c> item_menu_position_z;

void ItemMenu__set_position(gptr<ItemMenu> item_menu) {
    u32 r1_1 = item_menu->word_0;
    u32 r2_1 = item_menu->word_4;
    u32 r3_1 = item_menu->word_8;
    *item_menu_position_x = r1_1;
    *item_menu_position_y = r2_1;
    *item_menu_position_z = r3_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006d30c4
GUEST_EXPORT(0x006d30c4, d_006d30c4::ItemMenu__set_position);

// f_006d3340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The number of selected slots (set bits of the 16 at 0x94fd34).
namespace d_006d3340 {

inline guest::global<u16, 0x0094fd34> global_0094fd34;

u32 ItemMenu__selected_count() {
    u32 res_1 = 0;
    u32 r0 = 0u;
    u32 r1 = r0;
    u32 r3 = *global_0094fd34;
    u32 r2 = 0x10u;
    u32 r12 = 1u;
    do {
        if ((r3 & lsl_r(r12, r1 & 0xff)) != 0) {
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
GUEST_EXPORT_FRAMED(0x006d3340, d_006d3340::ItemMenu__selected_count, 0x10);  // pushes {r4} first, as the original

// f_006d337c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The selected quantity (low half of 0x94fd38), at least 1.
namespace d_006d337c {

inline constexpr u32 item_menu_quantity_address = 0x0094fd38u;
inline guest::global<u32, 0x0094fd38> item_menu_quantity;

u32 ItemMenu__quantity() {
    u32 r0_1 = *item_menu_quantity;
    return (r0_1 & 0xffffu) == 0 ? 1u : uxth(r0_1);
}

}  // namespace d_006d337c
GUEST_EXPORT(0x006d337c, d_006d337c::ItemMenu__quantity);

// f_006d37e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the sale of the flagged item in the badge counters by its category (0x36, or 0x37, 0x38 and 0x92).
namespace d_006d37e4 {

inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x006b6d6c, u32(u32, u32)> ClampedCounters__add_a;
inline constexpr guest::Function<0x006b73f4, u32(u32, u32)> ClampedCounters__add_c;
inline constexpr guest::Function<0x0076c590, u32(u32)> Item__has_category_flag_bit_1_5;

void count_item_sale(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = Item__has_category_flag_bit_1_5(r0);
    if (r0_1 != 0) {
        u32 counter_block = get_counter_block(r0_1);
        u32 category = Item__category(r0);
        if (category != 0x36u) {
            if (category != 0x37u && category != 0x38u && category != 0x92u) {
                return;
            }
            frame.release();
            ClampedCounters__add_c(counter_block, 1u);
            return;
        }
        frame.release();
        ClampedCounters__add_a(counter_block, 1u);
        return;
    }
}

}  // namespace d_006d37e4
GUEST_EXPORT(0x006d37e4, d_006d37e4::count_item_sale);

// f_006d39a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when a window in the menu's list is of the special id (0x88735a).
namespace d_006d39a8 {

inline constexpr u32 item_menu_special_window_address = 0x0098c500u;
inline guest::global<u32, 0x0098c500> item_menu_special_window;

u32 ItemMenu__has_special_window(u32 r0_unused, u32 r1) {
    u32 r5 = 0u;
    u32 r4 = *item_menu_special_window;
    if (r4 != 0) {
        u32 r6 = 0x88735au;
        do {
            r1 = *gptr<u16>(r6);
            if (*gptr<u16>(*gptr<u32>(r4 + 0xcu) + 0xcu) == r1) {
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
GUEST_EXPORT_FRAMED(0x006d39a8, d_006d39a8::ItemMenu__has_special_window, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006d40d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a selection accepts a mask (arg 1): never while the EULA manager is busy; the 8 bit also in the
// scenes so flagged (with the net session in slot state 4) or when the object's flag 0x208 is set; else by
// the object's accepted mask.
namespace d_006d40d4 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
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
            u32 scene_3 = current_scene_id(r0_1);
            u32 scene_flagged_3 = scene_has_flags(0x80000u, scene_3);
            if (scene_flagged_3 == 0) {
                u32 scene_4 = current_scene_id(scene_flagged_3);
                u32 scene_flagged_4 = scene_has_flags(0x100000u, scene_4);
                if (scene_flagged_4 == 0) {
                    goto L_6d4150;
                }
            }
            r0_7 = *net_session;
            if (r0_7 != 0) {
                if (SlotState__matches_slot(r0_7 + 0x1e4u, 4u) != 0) {
                    goto L_6d4168;
                }
            }
L_6d4150:;
            if (*gptr<u8>(r0 + 0x208u) != 0) {
                goto L_6d4168;
            }
        }
        r0_2 = *gptr<u32>(r0 + 0x48u) & r1;
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
// Splits the number into its thousands, hundreds, tens and units digits (0x94fd60).
namespace d_006d4724 {

inline guest::global<u8, 0x0094fd60> global_0094fd60;
inline guest::global<u8, 0x0094fd61> global_0094fd61;
inline guest::global<u8, 0x0094fd62> global_0094fd62;
inline guest::global<u8, 0x0094fd63> global_0094fd63;
inline constexpr guest::Function<0x002f86c0, u32(u32, u32)> udiv;

void split_decimal_digits_4(u32 r0) {
    u32 quotient_4 = udiv(r0, 0x3e8u);
    *global_0094fd60 = u8(quotient_4);
    u32 quotient_5 = udiv(guest::cpu()->r[1], 0x64u);
    *global_0094fd61 = u8(quotient_5);
    u32 quotient_6 = udiv(guest::cpu()->r[1], 0xau);
    *global_0094fd62 = u8(quotient_6);
    *global_0094fd63 = u8(guest::cpu()->r[1]);
}

}  // namespace d_006d4724
GUEST_EXPORT_FRAMED(0x006d4724, d_006d4724::split_decimal_digits_4, 0x4010);  // pushes {r4, lr} first, as the original

// f_006d5364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the active children of the two controls (+0x494, +0x618) when they have them.
namespace d_006d5364 {

struct __attribute__((packed)) ReleaseTwoActiveChildrenArg0 {
    u8 unknown_0[0x548];  // (not used here)
    u32 word_548;
    u8 unknown_54c[0x180];  // (not used here)
    u32 word_6cc;
};
GUEST_OFFSET(ReleaseTwoActiveChildrenArg0, word_548, 0x548);
GUEST_OFFSET(ReleaseTwoActiveChildrenArg0, word_6cc, 0x6cc);

inline constexpr guest::Function<0x002f67ac, u32(u32, u32, u32, u32)> release_active_child;

void release_two_active_children(gptr<ReleaseTwoActiveChildrenArg0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg0->word_548 != 0) {
        release_active_child(arg0.addr() + 0x494u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    if (arg0->word_6cc == 0) {
        return;
    }
    frame.release();
    release_active_child(arg0.addr() + 0x618u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_006d5364
GUEST_EXPORT(0x006d5364, d_006d5364::release_two_active_children);

// f_006d5df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When button `index` is animating (+0x19b2), advances it until its slot is done, then hides it and clears its bit;
// true when finished.
namespace d_006d5df4 {

struct __attribute__((packed)) ItemMenu {
    u8 unknown_0[0x19b0];  // (not used here)
    u16 half_19b0;
    u16 half_19b2;
};
GUEST_OFFSET(ItemMenu, half_19b0, 0x19b0);
GUEST_OFFSET(ItemMenu, half_19b2, 0x19b2);

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

u32 ItemMenu__finish_button(gptr<ItemMenu> item_menu, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = item_menu.addr() + 0x19b2u;
    u32 r1_1 = item_menu->half_19b2;
    u32 r8_1 = lsl_r(1u, r1 & 0xff);
    if ((r1_1 & r8_1) != 0) {
        if (button_slot_check(item_menu.addr() + 0x3f4u, r1_1, r2, r3) == 0) {
            FrameControl__advance(item_menu.addr() + 0x3f4u);
            Layout__virtual_3(item_menu.addr() + 0x280u);
            return 0u;
        }
        u32 r7_1 = item_menu.addr() + (r1 << 2);
        notify_list_objects(item_menu.addr() + 0x280u, item_menu.addr() + 0x3f4u, *gptr<u32>(r7_1 + 0x1920u), 0u);
        ButtonActionNodeEx__virtual_3(item_menu.addr() + (r1 * 0x21u + (r1 << 6) << 2) + 0x79cu);
        gptr<Local_006d5df4_r0_7> r0_7 = gptr<Local_006d5df4_r0_7>(*gptr<u32>(r7_1 + 0x194cu));
        r0_7->byte_b7 = u8(u32(r0_7->byte_b7) & 0xfeu);
        u32 r0_8 = u32(item_menu->half_19b2) & ~uxth(r8_1);
        item_menu->half_19b2 = u16(r0_8);
        u32 r1_6 = item_menu->half_19b0;
        r1_1 = ((r0_8 & 0x400u) == 0 ? 1u : 0u) == 0 ? r1_6 & ~2u : r1_6 | 2u;
        item_menu->half_19b0 = u16(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_006d5df4
GUEST_EXPORT_FRAMED(0x006d5df4, d_006d5df4::ItemMenu__finish_button, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006d6404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the first or second tab by the scene's flags (outside scenes 0x73 and 0x74), else disables the tab bit.
namespace d_006d6404 {

struct __attribute__((packed)) Child {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Child, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006d6404_r0_14 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006d6404_r0_14, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006d6404_r5_1 {
    u16 half_0;
};
GUEST_OFFSET(Local_006d6404_r5_1, half_0, 0x0);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

u32 ItemMenu__update_tabs(u32 item_menu, u32 r1, u32 r2) {
    u32 scene_7 = current_scene_id(item_menu, r1, r2, guest::cpu()->r[3]);
    if (scene_7 != 0x73u) {
        u32 scene_8 = current_scene_id(scene_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (scene_8 != 0x74u) {
            u32 r4_1 = 0u;
            u32 scene_9 = current_scene_id(scene_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 scene_flagged_5 = scene_has_flags(0x40000u, scene_9);
            if (scene_flagged_5 != 0) {
                r4_1 = 1u;
            }
            u32 scene_10 = current_scene_id(scene_flagged_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 scene_flagged_6 = scene_has_flags(0x100000u, scene_10);
            if (scene_flagged_6 != 0) {
                r4_1 = 1u;
            }
            u32 scene_11 = current_scene_id(scene_flagged_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 scene_flagged_7 = scene_has_flags(0x20000u, scene_11);
            if (scene_flagged_7 != 0) {
                r4_1 = 1u;
            }
            u32 scene_12 = current_scene_id(scene_flagged_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 scene_flagged_8 = scene_has_flags(0x80000u, scene_12);
            if (scene_flagged_8 != 0) {
                r4_1 = 1u;
            }
            gptr<Child> child = gptr<Child>(LayoutObjectWithChild__forward_to_child(item_menu + 0x280u, 0x853a90u));
            child->byte_b7 = u8(u32(child->byte_b7) & 0xfeu | r4_1);
            gptr<Local_006d6404_r0_14> child_2 = gptr<Local_006d6404_r0_14>(LayoutObjectWithChild__forward_to_child(item_menu + 0x280u, 0x853a84u));
            u32 r1_5 = r4_1 ^ 1u | u32(child_2->byte_b7) & 0xfeu;
            child_2->byte_b7 = u8(r1_5);
            guest::cpu()->r[1] = r1_5;
            return child_2.addr();
        }
    }
    gptr<Local_006d6404_r5_1> r5_1 = gptr<Local_006d6404_r5_1>(item_menu + 0x19b4u);
    u32 r0_15 = u32(r5_1->half_0) & ~1u;
    r5_1->half_0 = u16(r0_15);
    return r0_15;
}

}  // namespace d_006d6404
GUEST_EXPORT_FRAMED(0x006d6404, d_006d6404::ItemMenu__update_tabs, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006d7354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Enables the menu's buttons by what the network session allows.
namespace d_006d7354 {

inline constexpr u32 net_presence_state_address = 0x0094ddf8u;
inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> current_net_station;
inline constexpr guest::Function<0x006d6500, u32(u32, u32, u32, u32)> MuseumTank__refresh;
inline constexpr guest::Function<0x0075f020, u32(u32, u32, u32, u32)> NetPart__allows;

u32 ItemMenu__update_net_buttons(u32 item_menu) {
    u32 r1 = 0;
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 - 8u) = r12;
    r13 -= 0x28;
    u32 r4 = 0u;
    u32 r10 = 1u;
    u32 r11 = item_menu;
    u32 r9 = net_session_address;
    u32 r8 = net_presence_state_address;
    u32 r6 = item_menu + 0x1900u;
    u32 r7 = item_menu + 0x19b4u;
    goto L_6d738c;
L_6d737c:;
    if (r4 == 8u) {
        u32 net_part = *gptr<u32>(r9) + 0x7874u;
        guest::cpu()->r[13] = r13;
        u32 r0_1 = NetPart__allows(net_part, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            goto L_6d74a8;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_2 = NetPart__allows(net_part, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 != 0) {
            guest::cpu()->r[13] = r13;
            u32 r0_3 = mode_above_1(r0_2);
            r1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                goto L_6d74a8;
            }
        } else {
            guest::cpu()->r[13] = r13;
            u32 r0_4 = NetPart__allows(net_part, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_4 != 0) {
                goto L_6d74a8;
            }
        }
        u32 r0_5 = *gptr<s8>(r6 + 0x1bu);
        if (r0_5 != 0xau && r0_5 + 1u != 0 && r0_5 != 8u) {
            r4 = 9u;
            guest::preempt();
            goto L_6d737c;
        }
        *gptr<u16>(r7) = u16(u32(*gptr<u16>(r7)) | 0x100u);
        goto L_6d74a8;
    }
    if (r4 == 9u) {
        u32 r0_6 = *gptr<u32>(r9);
        guest::cpu()->r[13] = r13;
        u32 scene_2 = current_scene_id(r0_6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (scene_2 != 0x67u) {
            goto L_6d74a8;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_8 = NetPart__allows(r0_6 + 0x7874u, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_8 == 0) {
            goto L_6d74a8;
        }
        u32 r0_9 = *gptr<u8>(r8);
        if (r0_9 == 1u) {
            guest::cpu()->r[13] = r13;
            u32 station = current_net_station(r0_9, r1);
            r1 = *gptr<u8>(r8 + 2u);
            if (station == r1) {
                goto L_6d74a8;
            }
        }
        u32 r0_11 = *gptr<s8>(r6 + 0x1bu);
        if (r0_11 != 0xau && r0_11 + 1u != 0 && r0_11 != 5u && r0_11 != 9u) {
            r4 = 0xau;
            guest::preempt();
            goto L_6d737c;
        }
        item_menu = u32(*gptr<u16>(r7)) | 0x200u;
        goto L_6d74a4;
    }
L_6d738c:;
    r1 = *gptr<u16>(r7);
    item_menu = r1 | lsl_r(r10, r4 & 0xff);
L_6d74a4:;
    *gptr<u16>(r7) = u16(item_menu);
L_6d74a8:;
    r4 += 1u;
    if (s32(r4) >= 0xb) {
        *gptr<u16>(r7) = u16(u32(*gptr<u16>(r7)) & ~0x400u);
        r13 += 0x28;
        guest::cpu()->r[13] = r13;
        return MuseumTank__refresh(r11, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::preempt();
    goto L_6d737c;
}

}  // namespace d_006d7354
GUEST_EXPORT(0x006d7354, d_006d7354::ItemMenu__update_net_buttons);

// f_006d78bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Locks the two controls and enables the 11 buttons except the tenth, then refreshes the menu.
namespace d_006d78bc {

struct __attribute__((packed)) ItemMenu {
    u8 unknown_0[0x568];  // (not used here)
    u32 word_568;
    u8 unknown_56c[0x180];  // (not used here)
    u32 word_6ec;
};
GUEST_OFFSET(ItemMenu, word_568, 0x568);
GUEST_OFFSET(ItemMenu, word_6ec, 0x6ec);

inline constexpr guest::Function<0x006d6a8c, u32(u32, u32, u32, u32)> MuseumTank__update;

u32 ItemMenu__enable_all_buttons(gptr<ItemMenu> item_menu) {
    u32 r0 = item_menu.addr();
    u32 r3_2 = 0;
    u32 r4 = r0;
    u32 r2 = 1u;
    u32 i = 0u;
    item_menu->word_568 = item_menu->word_568 | 8u;
    item_menu->word_6ec = item_menu->word_6ec | 8u;
    r0 = r4 + 0x19b4u;
    do {
        u32 r3_1 = lsl_r(r2, i & 0xff);
        i += 1u;
        r3_2 = r3_1 | u32(*gptr<u16>(r0));
        *gptr<u16>(r0) = u16(r3_2);
        guest::preempt();
    } while (s32(i) < 0xb);
    u32 r1_1 = uxth(r3_2) & ~0x400u;
    *gptr<u16>(r0) = u16(r1_1);
    MuseumTank__update(r4, r1_1, r2, r3_2);
    *gptr<u8>(r4 + 0x1916u) = 0;
    return 0u;
}

}  // namespace d_006d78bc
GUEST_EXPORT_FRAMED(0x006d78bc, d_006d78bc::ItemMenu__enable_all_buttons, 0x4010);  // pushes {r4, lr} first, as the original

// f_006d860c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the peer button when the session part allows it and any of the 32 stations is connected, resetting its
// animation when it hides.
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
inline constexpr guest::Function<0x0075e650, u32(u32, u32, u32, u32)> NetSession__station_entry;
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> PartMask__allows;

void ItemMenu__update_peer_button(u32 item_menu, u32 r1_unused, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r5 = item_menu;
    u32 r6 = 1u;
    u32 r0_1 = *net_session + 0x7874u;
    u32 r0_2 = PartMask__allows(r0_1, 3u, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    u32 r0_3 = *net_session;
    u32 r4 = 0u;
    if (r0_2 == 0) {
        r6 = 0u;
    }
    u32 r7 = r0_3 + 0x3594u;
    u32 r8 = r4;
L_6d864c:;
    guest::cpu()->s[0] = S0;
    u32 station_2 = NetSession__station_entry(r7, r4, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (station_2 == 0) {
        r4 += 1u;
        if (r4 < 0x20u) {
            guest::preempt();
            goto L_6d864c;
        }
        r6 = 0u;
    }
    gptr<Local_006d860c_r4_1> r4_1 = gptr<Local_006d860c_r4_1>(r5 + 0x1980u);
    u32 r0_5 = u32(*gptr<u8>(r4_1->word_0 + 0xb7u)) & 1u;
    if (r0_5 != 0) {
        r0_5 = 1u;
    }
    if (r0_5 != r6) {
        if (r6 == 0 && *gptr<u8>(r5 + 0x460u) == 1u) {
            u32 r0_6 = r5 + 0x444u;
            float S0_1 = 0.0f;
            guest::cpu()->s[0] = S0_1;
            Animation__set_value(r0_6, r1_1, r2, r3);
            Layout__virtual_3(r5 + 0x280u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = r0_6;
            notify_list_objects(r5 + 0x280u, r1_1, *gptr<u32>(r5 + 0x1990u), 0u);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            *gptr<u8>(r5 + 0x1915u) = u8(r8);
            *gptr<u32>(r5 + 0x19a4u) = r8;
        }
        gptr<Local_006d860c_r0_9> r0_9 = gptr<Local_006d860c_r0_9>(r4_1->word_0);
        r0_9->byte_b7 = u8(u32(r0_9->byte_b7) & 0xfeu | r6);
        guest::cpu()->s[0] = S0;
        frame.release();
        Layout__virtual_3(r5 + 0x280u, r1_1, r2, r3);
        return;
    }
    guest::cpu()->s[0] = S0;
}

}  // namespace d_006d860c
GUEST_EXPORT(0x006d860c, d_006d860c::ItemMenu__update_peer_button);

// f_006d8d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets or clears the lock bit (3) of the two controls.
namespace d_006d8d48 {

struct __attribute__((packed)) ItemMenu {
    u8 unknown_0[0x568];  // (not used here)
    u32 word_568;
    u8 unknown_56c[0x180];  // (not used here)
    u32 word_6ec;
};
GUEST_OFFSET(ItemMenu, word_568, 0x568);
GUEST_OFFSET(ItemMenu, word_6ec, 0x6ec);


void ItemMenu__set_controls_locked(gptr<ItemMenu> item_menu, u32 r1) {
    u32 zf_1 = r1 == 0;
    u32 r1_1 = item_menu->word_568;
    u32 r2_1 = item_menu->word_6ec;
    item_menu->word_568 = zf_1 ? r1_1 & ~8u : r1_1 | 8u;
    item_menu->word_6ec = zf_1 ? r2_1 & ~8u : r2_1 | 8u;
}

}  // namespace d_006d8d48
GUEST_EXPORT(0x006d8d48, d_006d8d48::ItemMenu__set_controls_locked);

// f_006d8f68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the menu tab: its renderer, two button controls, layout and archive reader.
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
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> script__RenderTrace__destructor_b;

u32 BsMenuTab__destructor(gptr<BsMenuTab> bs_menu_tab, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    bs_menu_tab->vtable = vtable_BsMenuTab;
    bs_menu_tab->bs_menu_tab_vtable = vtable_BsMenuTab_at_14;
    u32 r0_1 = bs_menu_tab.addr() + 0x1848u;
    script__RenderTrace__destructor_b(r0_1, vtable_BsMenuTab, vtable_BsMenuTab_at_14, r3);
    destroy_array_elements(r0_1 - 0x10acu, 0x2e00e0u, 0x184u, 0xbu);
    bs_menu_tab->button_action_control_ex_vtable_618 = vtable_ButtonActionControlEx_rec;
    destroy_animation(r0_1 - 0x10d4u);
    destroy_animation(r0_1 - 0x10fcu);
    destroy_animation(r0_1 - 0x1124u);
    destroy_animation(r0_1 - 0x114cu);
    destroy_button_action_control(r0_1 - 0x1230u);
    bs_menu_tab->button_action_control_ex_vtable = vtable_ButtonActionControlEx_rec;
    destroy_animation(r0_1 - 0x1258u);
    destroy_animation(r0_1 - 0x1280u);
    destroy_animation(r0_1 - 0x12a8u);
    destroy_animation(r0_1 - 0x12d0u);
    destroy_button_action_control(r0_1 - 0x13b4u);
    destroy_animation(r0_1 - 0x13dcu);
    destroy_animation(r0_1 - 0x1404u);
    destroy_animation(r0_1 - 0x142cu);
    destroy_animation(r0_1 - 0x1454u);
    destroy_animation(r0_1 - 0x147cu);
    u32 r0_21 = ssys__ma__lyt__ArcResAccReader__destructor(Layout__destructor(r0_1 - 0x15c8u) - 0x248u);
    frame.release();
    return do_nothing_00521ae0(r0_21 - 0x38u, guest::cpu()->r[1]);
}

}  // namespace d_006d8f68
GUEST_EXPORT(0x006d8f68, d_006d8f68::BsMenuTab__destructor);

// f_006d926c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The catch state of the slot (1 to 3, 6 and up; 3 otherwise).
namespace d_006d926c {

struct __attribute__((packed)) Local_006d926c_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006d926c_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006d926c_r0_2, byte_1, 0x1);

inline constexpr u32 catch_manager_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> catch_manager;

u32 CatchMgr__catch_state(u32 r0_unused, u32 r1) {
    u32 r0_1 = *catch_manager;
    if (r0_1 == 0) {
        return 3u;
    }
    gptr<Local_006d926c_r0_2> r0_2 = gptr<Local_006d926c_r0_2>(r0_1 + 0x2cu);
    if (r0_2->byte_0 != r1) {
        return 3u;
    }
    u32 r0_3 = u32(r0_2->byte_1) & 0xfu;
    return r0_3 != 4u && r0_3 != 5u && r0_3 != 0 ? r0_3 : 3u;
}

}  // namespace d_006d926c
GUEST_EXPORT(0x006d926c, d_006d926c::CatchMgr__catch_state);

// f_006d96c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position of the slot's catch (its actor's, or its record's).
namespace d_006d96c0 {

inline constexpr u32 catch_manager_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> catch_manager;
inline constexpr guest::Function<0x001f5e5c, u32(u32, u32)> AcObjectShow__item_state;

u32 CatchMgr__catch_position(u32 catch_mgr) {
    u32 r3_1 = *catch_manager;
    if (r3_1 == 0) {
        return 0u;
    }
    u32 r2_1 = *gptr<u32>(r3_1 + (catch_mgr << 3) + 0x34u);
    if (r2_1 != 0) {
        return r2_1 + 0x14u;
    }
    return AcObjectShow__item_state(*gptr<u32>(r3_1 + (catch_mgr << 2) + 0x1cu), guest::cpu()->r[1]);
}

}  // namespace d_006d96c0
GUEST_EXPORT(0x006d96c0, d_006d96c0::CatchMgr__catch_position);

// f_006d9748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the catch for fish and sea creatures (categories 0x27 and 0x28).
namespace d_006d9748 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x006d9e38, u32(u32, u32, u32, u32)> CatchMgr__set_catch;

void CatchMgr__start_fish_catch(u32 catch_mgr, u32 r1, u32 r2, u32 r3) {
    u32 category = Item__category(r3, r1, r2, r3);
    if (category == 0x27u || category == 0x28u) {
        CatchMgr__set_catch(catch_mgr, r1, r2, r3);
    }
}

}  // namespace d_006d9748
GUEST_EXPORT_FRAMED(0x006d9748, d_006d9748::CatchMgr__start_fish_catch, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006d99fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the slot's catch state and, when it is the current main object's, sends message 0x3d.
namespace d_006d99fc {

struct __attribute__((packed)) Local_006d99fc_r0_2 {
    u8 unknown_0[0x248];  // (not used here)
    u8 byte_248;
};
GUEST_OFFSET(Local_006d99fc_r0_2, byte_248, 0x248);

inline constexpr u32 catch_manager_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> catch_manager;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) CatchMgrClearSlotStateFrame {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(CatchMgrClearSlotStateFrame, byte_1, 0x1);
GUEST_OFFSET(CatchMgrClearSlotStateFrame, byte_2, 0x2);
GUEST_OFFSET(CatchMgrClearSlotStateFrame, byte_3, 0x3);
GUEST_SIZE(CatchMgrClearSlotStateFrame, 0x4);

u32 CatchMgr__clear_slot_state(u32 catch_mgr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CatchMgrClearSlotStateFrame> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = *catch_manager;
    if (r0_1 == 0) {
        return r0_1;
    }
    gptr<Local_006d99fc_r0_2> r0_2 = gptr<Local_006d99fc_r0_2>(*gptr<u32>(r0_1 + (catch_mgr << 2) + 0x1cu));
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
    u32 r0_3 = current_net_signed_value(r0_2.addr(), r1, r2, r3);
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 station = current_net_station(r0_3);
    if (station != catch_mgr) {
        return station;
    }
    *frame.at<u8>(0) = 0;
    frame->byte_1 = 0;
    frame->byte_2 = 0;
    frame->byte_3 = 0;
    return send_message(0x3du, 4u, frame.at(0).addr(), 4u);
}

}  // namespace d_006d99fc
GUEST_EXPORT_FRAMED(0x006d99fc, d_006d99fc::CatchMgr__clear_slot_state, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006d9a78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the player's catch slot is in state 3.
namespace d_006d9a78 {

struct __attribute__((packed)) CatchMgr {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(CatchMgr, byte_1ac, 0x1ac);

inline constexpr u32 catch_manager_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> catch_manager;

u32 CatchMgr__player_is_holding(gptr<CatchMgr> catch_mgr) {
    u32 r0_1 = catch_mgr->byte_1ac;
    u32 r1_1 = *catch_manager;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_2 = *gptr<u32>(r1_1 + (r0_1 << 2) + 0x1cu);
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if (*gptr<u8>(r0_2 + 0x248u) == 3u) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_006d9a78
GUEST_EXPORT(0x006d9a78, d_006d9a78::CatchMgr__player_is_holding);

// f_006d9abc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the catch of the slot by the item's category (insects by their kind; fish by the held item).
namespace d_006d9abc {

inline constexpr u32 catch_manager_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> catch_manager;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x006d9058, u32(u32)> item_actor_kind_index;
inline constexpr guest::Function<0x006d9864, u32(u32, u32, u32, u32)> CatchMgr__update_for_main;

u32 CatchMgr__check_catch(u32 catch_mgr, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = 0;
    u32 r0_1 = *catch_manager;
    if (r0_1 != 0) {
        r0_1 = Item__category(catch_mgr, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_1 != 0x24u && r0_1 != 0x26u && r0_1 != 0x25u && r0_1 != 0x98u && r0_1 != 0x9au) {
            if (r0_1 != 0x27u && r0_1 != 0x28u && r0_1 != 0x66u && r0_1 != 0x65u) {
                return r0_1;
            }
            u32 zf_1 = current_net_signed_value(r0_1) == 0;
            r4_1 = *gptr<u32>(*catch_manager + (r1 << 2) + 0x1cu);
            if (zf_1) {
                r0_1 = Item__category(r4_1 + 0x20cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_1 == 0x27u) {
                    return r0_1;
                }
            } else {
                r0_1 = Item__category(r4_1 + 0x20cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_1 == 0x27u) {
                    return r0_1;
                }
            }
        } else {
            r0_1 = item_actor_kind_index(catch_mgr);
            if (r0_1 == 0x3fu) {
                return r0_1;
            }
            frame.release();
            return CatchMgr__update_for_main(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        frame.release();
        return Item__category(r4_1 + 0x20cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return r0_1;
}

}  // namespace d_006d9abc
GUEST_EXPORT(0x006d9abc, d_006d9abc::CatchMgr__check_catch);

// f_006d9b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the slot's catch from the packed network message (kind, position) with its table parameters.
namespace d_006d9b90 {

struct __attribute__((packed)) CatchMgrPlaceFromMessageArg1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(CatchMgrPlaceFromMessageArg1, byte_0, 0x0);
GUEST_OFFSET(CatchMgrPlaceFromMessageArg1, byte_1, 0x1);
GUEST_OFFSET(CatchMgrPlaceFromMessageArg1, byte_2, 0x2);
GUEST_OFFSET(CatchMgrPlaceFromMessageArg1, byte_3, 0x3);

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

inline constexpr u32 catch_manager_address = 0x0095063cu;
inline guest::global<u32, 0x0095063c> catch_manager;
inline guest::global<u32, 0x00950640> catch_manager_data;
inline constexpr guest::Function<0x001f6844, u32(u32, u32, u32, u32)> Actor__place_with_rotation;
inline constexpr guest::Function<0x006162e0, u32(u32, u32, u32, u32)> Item__from_catalog_index;
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32)> water_surface_at;

struct __attribute__((packed)) CatchMgrPlaceFromMessageFrame {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    u32 word_10;
    u8 unknown_14[0x10];  // (not read or written by name)
};
GUEST_OFFSET(CatchMgrPlaceFromMessageFrame, word_0, 0x0);
GUEST_OFFSET(CatchMgrPlaceFromMessageFrame, float_4, 0x4);
GUEST_OFFSET(CatchMgrPlaceFromMessageFrame, float_8, 0x8);
GUEST_OFFSET(CatchMgrPlaceFromMessageFrame, float_c, 0xc);
GUEST_OFFSET(CatchMgrPlaceFromMessageFrame, word_10, 0x10);
GUEST_SIZE(CatchMgrPlaceFromMessageFrame, 0x24);

u32 CatchMgr__place_from_message(u32 catch_mgr, gptr<CatchMgrPlaceFromMessageArg1> arg1, u32 r2_unused, u32 r3, float S0, float S1) {
    guest::StackFrameOf<CatchMgrPlaceFromMessageFrame> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r0_1 = *catch_manager;
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1 + (catch_mgr << 2) + 0x1cu);
        if (r0_1 != 0) {
            u32 r6_1 = (u32(arg1->byte_0) >> 2) + ((u32(arg1->byte_1) & 1u) << 6);
            Item__from_catalog_index(frame.at(0x1c).addr(), r6_1, 0u, r3);
            frame->float_4 = float((u32(arg1->byte_1) >> 1) + ((u32(arg1->byte_2) & 7u) << 7) << 2);
            float S0_1 = float((u32(arg1->byte_2) >> 3) + ((u32(arg1->byte_3) & 0x1fu) << 5) << 2);
            frame->float_c = S0_1;
            guest::cpu()->s[0] = S0_1;
            water_surface_at(frame.at(4).addr(), 0u);
            float S0_2 = guest::cpu()->s[0];
            frame->float_8 = S0_2;
            gptr<Local_006d9b90_r0_4> r0_4 = gptr<Local_006d9b90_r0_4>(r6_1 * 0x14u + 0x68cu + *gptr<u32>(*catch_manager_data + 0x14u));
            gptr<Local_006d9b90_r2_2> r2_2 = gptr<Local_006d9b90_r2_2>(r0_4.addr() + 4u);
            float S0_3 = r2_2->float_0;
            float S1_2 = r2_2->float_4;
            gptr<Local_006d9b90_r2_3> r2_3 = gptr<Local_006d9b90_r2_3>(frame.at(0x14).addr());
            frame->word_10 = r0_4->word_0;
            r2_3->float_0 = S0_3;
            r2_3->float_4 = S1_2;
            frame->word_0 = frame.at(0x10).addr();
            u32 r3_2 = s16(r0_4->half_10);
            float S0_4 = r0_4->float_c;
            u32 r0_5 = *gptr<u32>(*catch_manager + (catch_mgr << 2) + 0x1cu);
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S1_2;
            Actor__place_with_rotation(r0_5, frame.at(0x1c).addr(), frame.at(4).addr(), r3_2);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            r0_1 = frame.at(0x1c).addr();
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_006d9b90
GUEST_EXPORT_FRAMED(0x006d9b90, d_006d9b90::CatchMgr__place_from_message, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006d9cac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Packs the slot's catch (kind, position) and sends it to the other stations.
namespace d_006d9cac {

struct __attribute__((packed)) CatchMgrShareCatchArg1 {
    u32 word_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(CatchMgrShareCatchArg1, word_0, 0x0);
GUEST_OFFSET(CatchMgrShareCatchArg1, float_4, 0x4);
GUEST_OFFSET(CatchMgrShareCatchArg1, float_8, 0x8);

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

inline constexpr u32 catch_manager_address = 0x0095063cu;
inline constexpr u32 catch_manager_data_address = 0x00950640u;
inline guest::global<u32, 0x0095063c> catch_manager;
inline guest::global<u32, 0x00950640> catch_manager_data;
inline constexpr guest::Function<0x001f6844, u32(u32, u32, u32, u32)> Actor__place_with_rotation;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006d9058, u32(u32, u32)> item_actor_kind_index;

struct __attribute__((packed)) CatchMgrShareCatchFrame {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x18];  // (not read or written by name)
};
GUEST_OFFSET(CatchMgrShareCatchFrame, byte_1, 0x1);
GUEST_OFFSET(CatchMgrShareCatchFrame, byte_2, 0x2);
GUEST_OFFSET(CatchMgrShareCatchFrame, byte_3, 0x3);
GUEST_SIZE(CatchMgrShareCatchFrame, 0x1c);

void CatchMgr__share_catch(u32 catch_mgr, gptr<CatchMgrShareCatchArg1> arg1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<CatchMgrShareCatchFrame> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r0_1 = *catch_manager;
    if (r0_1 != 0) {
        u32 station = current_net_station(r0_1, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r1 = *catch_manager;
        if (*gptr<u32>(r1 + (station << 2) + 0x1cu) != 0) {
            u32 r0_3 = item_actor_kind_index(catch_mgr, r1);
            if (r0_3 >= 0x6bu) {
                r0_3 = 0u;
            }
            float S1_1 = arg1->float_4;
            float S2_2 = arg1->float_8;
            u32 r0_4 = r0_3 * 0x14u + 0x68cu;
            u32 r2_2 = *gptr<u32>(*catch_manager_data + 0x14u);
            gptr<Local_006d9cac_r1_1> r1_1 = gptr<Local_006d9cac_r1_1>(frame.at(4).addr());
            r1_1->word_0 = arg1->word_0;
            r1_1->float_4 = S1_1;
            r1_1->float_8 = S2_2;
            gptr<Local_006d9cac_r4_1> r4_1 = gptr<Local_006d9cac_r4_1>(r2_2 + r0_4);
            gptr<Local_006d9cac_r1_2> r1_2 = gptr<Local_006d9cac_r1_2>(frame.at(0x10).addr());
            float S0_1 = r4_1->float_0;
            float S1_2 = r4_1->float_4;
            float S2_3 = r4_1->float_8;
            r1_2->float_0 = S0_1;
            r1_2->float_4 = S1_2;
            r1_2->float_8 = S2_3;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_2;
            guest::cpu()->s[2] = S2_3;
            u32 station_2 = current_net_station(r0_4, r1_2.addr(), r2_2, guest::cpu()->r[3]);
            u32 r0_6 = *gptr<u32>(*catch_manager + (station_2 << 2) + 0x1cu);
            *frame.at<u32>(0) = frame.at(0x10).addr();
            u32 r3_3 = s16(r4_1->half_10);
            float S0_2 = r4_1->float_c;
            guest::cpu()->s[0] = S0_2;
            u32 r0_8 = current_net_signed_value(Actor__place_with_rotation(r0_6, catch_mgr, frame.at(4).addr(), r3_3));
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_8 != 0) {
                *frame.at<u8>(0) = 0;
                frame->byte_1 = 0;
                frame->byte_2 = 0;
                frame->byte_3 = 0;
                u32 r0_9 = item_actor_kind_index(catch_mgr, r1);
                *frame.at<u8>(0) = u8((u32(*frame.at<u8>(0)) & ~3u | 1u) & ~0xfcu | r0_9 << 2);
                u32 r0_10 = u32(frame->byte_1) & ~1u | (r0_9 & 0x40u) >> 6;
                frame->byte_1 = u8(r0_10);
                u32 r0_11 = vcvt_uz_f(std::bit_cast<float>(arg1->word_0));
                frame->byte_1 = u8((r0_10 & ~0xfeu) | 0xfeu & r0_11 >> 1);
                u32 r0_12 = u32(frame->byte_2) & ~7u | (0x380u & r0_11 >> 2) >> 7;
                frame->byte_2 = u8(r0_12);
                float S0_4 = std::bit_cast<float>(vcvt_uz_f(arg1->float_8));
                u32 r0_13 = std::bit_cast<u32>(S0_4);
                frame->byte_2 = u8((r0_12 & ~0xf8u) | 0xf8u & r0_13 << 1);
                frame->byte_3 = u8(u32(frame->byte_3) & ~0x1fu | (0x3e0u & r0_13 >> 2) >> 5);
                guest::cpu()->s[0] = S0_4;
                send_message(0x3du, 4u, frame.at(0).addr(), 4u);
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
GUEST_EXPORT_FRAMED(0x006d9cac, d_006d9cac::CatchMgr__share_catch, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006d9f38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies a received insect catch: hands the insect to the slot's catch when it exists, else marks the record missed;
// without a ready guest entry, answers 0x3b.
namespace d_006d9f38 {

struct __attribute__((packed)) Local_006d9f38_r4_2 {
    u8 unknown_0[0x2d];  // (not used here)
    u8 byte_2d;
};
GUEST_OFFSET(Local_006d9f38_r4_2, byte_2d, 0x2d);

inline constexpr u32 insect_manager_address = 0x0094f524u;
inline constexpr u32 catch_manager_address = 0x0095063cu;
inline guest::global<u32, 0x0094f524> insect_manager;
inline guest::global<u32, 0x0095063c> catch_manager;
inline constexpr guest::Function<0x002abf60, u32(u32, u32)> InsectMgr__find_by_id;
inline constexpr guest::Function<0x002c2d58, u32(u32, u32)> Actor__push_child;
inline constexpr guest::Function<0x002c2fd4, u32(u32, u32)> Actor__remove_child;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> current_net_station;
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> net_guest_entry_is_ready;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006da030, u32(u32, u32, u32, u32)> CatchMgr__start_show;

u32 CatchMgr__apply_insect_message(u32 catch_mgr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (net_guest_entry_is_ready(catch_mgr, r1, r2, r3) != 0) {
        u32 r1_1 = r2;
        u32 r4_1 = 0u;
        u32 insect_mgr = *insect_manager;
        if (insect_mgr != 0) {
            u32 by_id = InsectMgr__find_by_id(insect_mgr, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (by_id != 0) {
                u32 r6_1 = *gptr<u32>(by_id);
                u32 zf_1 = r6_1 == 0;
                if (!zf_1) {
                    by_id = *gptr<u8>(r6_1 + 0x1c8u);
                    zf_1 = by_id == 2u;
                }
                if (zf_1) {
                    goto L_6d9fd4;
                } else {
                    r4_1 = r6_1;
                }
            }
            if (r4_1 != 0) {
                u32 r6_2 = *catch_manager;
                u32 station = current_net_station(by_id, r1_1);
                u32 ea_1 = r6_2 + (station << 3) + 0x34u;
                u32 actor = *gptr<u32>(ea_1);
                if (actor != 0) {
                    Actor__remove_child(actor, ea_1);
                }
                Actor__push_child(r4_1, ea_1);
                u32 r0_6 = *catch_manager;
                frame.release();
                return CatchMgr__start_show(r0_6, r4_1, r1, guest::cpu()->r[3]);
            }
        }
L_6d9fd4:;
        gptr<Local_006d9f38_r4_2> r4_2 = gptr<Local_006d9f38_r4_2>(*catch_manager);
        u32 r0_7 = u32(*gptr<u8>(r1 + 1u)) & ~0xfu | 3u;
        *gptr<u8>(r1 + 1u) = u8(r0_7);
        u32 station_2 = current_net_station(r0_7, r1_1);
        u32 r1_2 = u32(*gptr<u8>(r1 + 1u)) << 0x1a;
        if (station_2 == r1_2 >> 0x1e) {
            r1_2 = u32(r4_2->byte_2d) & ~0xfu | 3u;
            r4_2->byte_2d = u8(r1_2);
        }
        guest::cpu()->r[1] = r1_2;
        return station_2;
    }
    frame.release();
    return send_message(0x3bu, 5u, r1, 2u);
}

}  // namespace d_006d9f38
GUEST_EXPORT(0x006d9f38, d_006d9f38::CatchMgr__apply_insect_message);

// f_006dab3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 39 of entry `index` of the list (+0x67d4, count +0x67cc).
namespace d_006dab3c {

struct __attribute__((packed)) CallVirtual39OfEntryArg0 {
    u8 unknown_0[0x67cc];  // (not used here)
    u32 word_67cc;
    u8 unknown_67d0[0x4];  // (not used here)
    u32 word_67d4;
};
GUEST_OFFSET(CallVirtual39OfEntryArg0, word_67cc, 0x67cc);
GUEST_OFFSET(CallVirtual39OfEntryArg0, word_67d4, 0x67d4);


void call_virtual_39_of_entry(gptr<CallVirtual39OfEntryArg0> arg0, u32 r1_unused, u32 r2) {
    u32 r3_1 = arg0->word_67cc;
    u32 r0_1 = r3_1 > r2 ? gptr<u32>(arg0->word_67d4)[r2] : 0u;
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x9cu);
    // virtual function 39 of r0_1
    guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, r3_1);
}

}  // namespace d_006dab3c
GUEST_EXPORT(0x006dab3c, d_006dab3c::call_virtual_39_of_entry);

// f_006dabd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The field object of a structure (arg 2 in list arg 1): first among the plain objects, then the kind-10
// ones, then (in the scenes so flagged) the special ones; null when none.
namespace d_006dabd8 {

struct __attribute__((packed)) ObjectOperationArg0 {
    u8 unknown_0[0x68c0];  // (not used here)
    u32 word_68c0;
    u8 unknown_68c4[0x4];  // (not used here)
    u32 word_68c8;
};
GUEST_OFFSET(ObjectOperationArg0, word_68c0, 0x68c0);
GUEST_OFFSET(ObjectOperationArg0, word_68c8, 0x68c8);

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

inline constexpr guest::Function<0x0014fafc, u32(u32, u32, u32)> thunk_0014fafc;
inline constexpr guest::Function<0x00240080, u32(u32, u32, u32)> StructureLists__call_on_list;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fca6c, u32(u32, u32, u32, u32)> is_special_terrain_at;
inline constexpr guest::Function<0x005ca27c, u32(u32)> byte_88bd38;
inline constexpr guest::Function<0x005ca4b4, u32(u32)> object_name_is_fobj;

u32 FieldObjects__find_structure_object(gptr<ObjectOperationArg0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1_3 = 0;
    u32 r0_11 = 0;
    u32 structure_lists = r1;
    u32 r7 = r0;
    u32 r0_1 = is_special_terrain_at(structure_lists, r2, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = StructureLists__call_on_list(structure_lists, r2, 0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 r4 = r0_2;
        if (r0_2 + 1u != 0) {
            u32 r5 = arg0->word_68c8;
            u32 r6 = r5 + (arg0->word_68c0 << 2);
            if (r5 != r6) {
                do {
                    u32 r0_3 = *gptr<u32>(r5);
                    u32 r1_1 = *gptr<u32>(r0_3 + 0x80u);
                    if (r1_1 == r4) {
                        u32 r0_5 = object_name_is_fobj(thunk_0014fafc(r0_3, r1_1, r2));
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
            u32 r0_6 = r7 + 0x67a8u;
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
                        r0_7 = gptr<Local_006dabd8_r0_7>(byte_88bd38(thunk_0014fafc(r0_7.addr(), r1_3, r2)));
                        r1_3 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_7.addr() == 0xau) {
                            return *gptr<u32>(r5);
                        }
                    }
                    r5 += 4u;
                    guest::preempt();
                } while (r5 != r6);
            }
            u32 scene_2 = current_scene_id(r0_7.addr(), r1_3, r2);
            u32 scene_flagged_2 = scene_has_flags(0x10000000u, scene_2);
            r1 = guest::cpu()->r[1];
            if (scene_flagged_2 == 0) {
                return 0u;
            }
            gptr<Local_006dabd8_r1_5> r1_5 = gptr<Local_006dabd8_r1_5>(r7 + 0x6a6cu);
            r0 = r1_5->word_8;
            r1 = r0 + (r1_5->word_0 << 2);
            if (r0 == r1) {
                guest::cpu()->r[1] = r1;
                return 0u;
            }
L_6dad00:;
            if (*gptr<u32>(*gptr<u32>(r0) + 0x80u) != r4) {
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
GUEST_EXPORT_FRAMED(0x006dabd8, d_006dabd8::FieldObjects__find_structure_object, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006dc224: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the function at 0x14fe38 on the object at +0x6b4c when it exists.
namespace d_006dc224 {

inline guest::global<u32, 0x0014fe38> global_0014fe38;

void call_14fe38_on_6b4c(u32 r0) {
    u32 r0_1 = *gptr<u32>(r0 + 0x6b4cu);
    if (r0_1 == 0) {
        return;
    }
    guest::call_address<u32>(*global_0014fe38, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dc224
GUEST_EXPORT(0x006dc224, d_006dc224::call_14fe38_on_6b4c);

// f_006dc8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The label chosen by the town's setting (low nibble of save +0x6214e) from the table of 10.
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

u32 label_by_town_setting_6214e() {
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
    gptr<Local_006dc8cc_ea_2> ea_2 = gptr<Local_006dc8cc_ea_2>(frame.at(0x20).addr());
    ea_2->word_0 = r0_1;
    ea_2->word_4 = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 data_base = get_data_base(r0_1);
    u32 r0_3 = gptr<u32>(frame.at(0).addr())[u32(*gptr<u8>(data_base + 0x6214eu)) & 0xfu];
    guest::cpu()->r[1] = 0x6214eu;
    return r0_3;
}

}  // namespace d_006dc8cc
GUEST_EXPORT_FRAMED(0x006dc8cc, d_006dc8cc::label_by_town_setting_6214e, 0x4000);  // pushes {lr} first, as the original

// f_006dcaf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low nibble of byte `index` of the table at 0x997c70.
namespace d_006dcaf8 {

inline constexpr u32 table_997c70_address = 0x00997c70u;

u32 nibble_of_table(u32 r0) {
    u32 r0_1 = u32(*gptr<u8>(r0 + table_997c70_address)) & 0xfu;
    guest::cpu()->r[1] = table_997c70_address;
    return r0_1;
}

}  // namespace d_006dcaf8
GUEST_EXPORT(0x006dcaf8, d_006dcaf8::nibble_of_table);

// f_006dcc94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the global block and clears the 0x12 bytes at 0x997c70.
namespace d_006dcc94 {

inline constexpr u32 table_997c70_address = 0x00997c70u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003082bc, u32(u32)> reset_global_block_b;

void reset_tables_997c70() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = 0;
    reset_global_block_b(r0);
    frame.release();
    clear_aligned(table_997c70_address, 0x12u);
    return;
}

}  // namespace d_006dcc94
GUEST_EXPORT(0x006dcc94, d_006dcc94::reset_tables_997c70);

// f_006dcd28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the function at 0x14fe40 on the object at +0x6b4c when it exists.
namespace d_006dcd28 {

inline guest::global<u32, 0x0014fe40> global_0014fe40;

void call_14fe40_on_6b4c(u32 r0) {
    u32 r0_1 = *gptr<u32>(r0 + 0x6b4cu);
    if (r0_1 == 0) {
        return;
    }
    guest::call_address<u32>(*global_0014fe40, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dcd28
GUEST_EXPORT(0x006dcd28, d_006dcd28::call_14fe40_on_6b4c);

// f_006dcd50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The label chosen by the daily record (save +0x62250): by its kind on other days, by its stage today.
namespace d_006dcd50 {

struct __attribute__((packed)) Stamp {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 byte_15;
};
GUEST_OFFSET(Stamp, byte_14, 0x14);
GUEST_OFFSET(Stamp, byte_15, 0x15);

inline guest::global<u32, 0x0085468c> global_0085468c;
inline guest::global<u32, 0x00854690> global_00854690;
inline guest::global<u32, 0x00854694> global_00854694;
inline guest::global<u32, 0x00854698> global_00854698;
inline guest::global<u32, 0x0085469c> global_0085469c;
inline guest::global<u32, 0x008546a0> global_008546a0;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x007111b4, u32(u32)> Stamp__is_today;

struct __attribute__((packed)) LabelByDailyRecord62250Frame {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LabelByDailyRecord62250Frame, float_0, 0x0);
GUEST_OFFSET(LabelByDailyRecord62250Frame, float_4, 0x4);
GUEST_OFFSET(LabelByDailyRecord62250Frame, float_8, 0x8);
GUEST_OFFSET(LabelByDailyRecord62250Frame, float_c, 0xc);
GUEST_OFFSET(LabelByDailyRecord62250Frame, float_10, 0x10);
GUEST_OFFSET(LabelByDailyRecord62250Frame, word_14, 0x14);
GUEST_OFFSET(LabelByDailyRecord62250Frame, word_18, 0x18);
GUEST_SIZE(LabelByDailyRecord62250Frame, 0x20);

u32 label_by_daily_record_62250() {
    guest::StackFrameOf<LabelByDailyRecord62250Frame> frame;  // the original's stack frame
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
    u32 save_data = get_save_data(0x854688u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Stamp> stamp = gptr<Stamp>(save_data + 0x62250u);
    u32 is_today_2 = Stamp__is_today(stamp.addr());
    if (is_today_2 == 0) {
        return gptr<u32>(frame.at(0).addr())[u32(stamp->byte_14)];
    }
    u32 r0_4 = stamp->byte_15;
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
GUEST_EXPORT_FRAMED(0x006dcd50, d_006dcd50::label_by_daily_record_62250, 0x4010);  // pushes {r4, lr} first, as the original

// f_006dd0c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the function at 0x14fe50 on the object at +0x6b4c when it exists.
namespace d_006dd0c8 {

inline guest::global<u32, 0x0014fe50> global_0014fe50;

void call_14fe50_on_6b4c(u32 r0) {
    u32 r0_1 = *gptr<u32>(r0 + 0x6b4cu);
    if (r0_1 == 0) {
        return;
    }
    guest::call_address<u32>(*global_0014fe50, r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006dd0c8
GUEST_EXPORT(0x006dd0c8, d_006dd0c8::call_14fe50_on_6b4c);

// f_006dd294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The label chosen by the town event record (save +0x666e4): by its kind on other days, by its stage today.
namespace d_006dd294 {

inline guest::global<u32, 0x008546b0> global_008546b0;
inline guest::global<u32, 0x008546b4> global_008546b4;
inline guest::global<u32, 0x008546b8> global_008546b8;
inline guest::global<u32, 0x008546bc> global_008546bc;
inline guest::global<u32, 0x008546c0> global_008546c0;
inline guest::global<u32, 0x008546c4> global_008546c4;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x0071c358, u32(u32)> town_event_done_today;

struct __attribute__((packed)) LabelByTownEvent666e4Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(LabelByTownEvent666e4Frame, word_0, 0x0);
GUEST_OFFSET(LabelByTownEvent666e4Frame, word_4, 0x4);
GUEST_OFFSET(LabelByTownEvent666e4Frame, word_8, 0x8);
GUEST_OFFSET(LabelByTownEvent666e4Frame, word_c, 0xc);
GUEST_OFFSET(LabelByTownEvent666e4Frame, word_10, 0x10);
GUEST_OFFSET(LabelByTownEvent666e4Frame, word_14, 0x14);
GUEST_SIZE(LabelByTownEvent666e4Frame, 0x18);

u32 label_by_town_event_666e4() {
    guest::StackFrameOf<LabelByTownEvent666e4Frame> frame;  // the original's stack frame
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
    u32 r4_2 = save_data + 0x666e4u;
    u32 zf_1 = town_event_done_today(r4_2) == 0;
    u32 r0_4 = *gptr<u8>(r4_2 + 0x10u);
    if (zf_1) {
        return gptr<u32>(frame.at(0).addr())[r0_4];
    }
    return r0_4 == 1u ? frame->word_4 : frame->word_14;
}

}  // namespace d_006dd294
GUEST_EXPORT_FRAMED(0x006dd294, d_006dd294::label_by_town_event_666e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_006dd2f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The label chosen by the save byte at +0x6682c from the table of 3.
namespace d_006dd2f8 {

inline guest::global<u32, 0x008546a4> global_008546a4;
inline guest::global<u32, 0x008546a8> global_008546a8;
inline guest::global<u32, 0x008546ac> global_008546ac;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;

struct __attribute__((packed)) LabelBySaveByte6682cFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(LabelBySaveByte6682cFrame, word_0, 0x0);
GUEST_OFFSET(LabelBySaveByte6682cFrame, word_4, 0x4);
GUEST_OFFSET(LabelBySaveByte6682cFrame, word_8, 0x8);
GUEST_SIZE(LabelBySaveByte6682cFrame, 0xc);

u32 label_by_save_byte_6682c() {
    guest::StackFrameOf<LabelBySaveByte6682cFrame> frame;  // the original's stack frame
    u32 r0_1 = *global_008546a4;
    u32 r1_1 = *global_008546a8;
    u32 r2_1 = *global_008546ac;
    frame->word_0 = r0_1;
    frame->word_4 = r1_1;
    frame->word_8 = r2_1;
    u32 save_data = get_save_data(r0_1);
    return gptr<u32>(frame.at(0).addr())[u32(*gptr<u8>(save_data + 0x6682cu))];
}

}  // namespace d_006dd2f8
GUEST_EXPORT_FRAMED(0x006dd2f8, d_006dd2f8::label_by_save_byte_6682c, 0x4000);  // pushes {lr} first, as the original

// f_006dd334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the constants at 0x997c70.
namespace d_006dd334 {

inline constexpr u32 table_997c70_address = 0x00997c70u;
inline constexpr guest::Function<0x00779548, u32(u32, u32)> store_constants_779548;

void reset_constants_997c70() {
    store_constants_779548(table_997c70_address, guest::cpu()->r[1]);
}

}  // namespace d_006dd334
GUEST_EXPORT(0x006dd334, d_006dd334::reset_constants_997c70);

// f_006dd7b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The label chosen by the save byte at +0x6adb4 from the table of 3.
namespace d_006dd7b4 {

inline guest::global<u32, 0x008546c8> global_008546c8;
inline guest::global<u32, 0x008546cc> global_008546cc;
inline guest::global<u32, 0x008546d0> global_008546d0;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;

struct __attribute__((packed)) LabelBySaveByte6adb4Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(LabelBySaveByte6adb4Frame, word_0, 0x0);
GUEST_OFFSET(LabelBySaveByte6adb4Frame, word_4, 0x4);
GUEST_OFFSET(LabelBySaveByte6adb4Frame, word_8, 0x8);
GUEST_SIZE(LabelBySaveByte6adb4Frame, 0xc);

u32 label_by_save_byte_6adb4() {
    guest::StackFrameOf<LabelBySaveByte6adb4Frame> frame;  // the original's stack frame
    u32 r0_1 = *global_008546c8;
    u32 r1_1 = *global_008546cc;
    u32 r2_1 = *global_008546d0;
    frame->word_0 = r0_1;
    frame->word_4 = r1_1;
    frame->word_8 = r2_1;
    u32 save_data = get_save_data(r0_1);
    return gptr<u32>(frame.at(0).addr())[u32(*gptr<u8>(save_data + 0x6adb4u))];
}

}  // namespace d_006dd7b4
GUEST_EXPORT_FRAMED(0x006dd7b4, d_006dd7b4::label_by_save_byte_6adb4, 0x4000);  // pushes {lr} first, as the original

// f_006dd7e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data (+0x6b64) of structure entry `index` (below 3, 0x10 bytes each) when its kind is of type 0xf; null
// otherwise.
namespace d_006dd7e8 {

inline constexpr guest::Function<0x006cc934, u32(u32, u32)> byte_88bd38_is_f;

u32 structure_entry_if_kind_f(u32 r0, u32 r1) {
    if (r1 >= 3u) {
        return 0u;
    }
    u32 r4_1 = r0 + (r1 << 4);
    u32 r0_1 = *gptr<u8>(r4_1 + 0x6b60u);
    u32 r0_2 = byte_88bd38_is_f(r0_1, r1);
    if (r0_2 != 0) {
        return r4_1 + 0x6b64u;
    }
    return 0u;
}

}  // namespace d_006dd7e8
GUEST_EXPORT_FRAMED(0x006dd7e8, d_006dd7e8::structure_entry_if_kind_f, 0x4010);  // pushes {r4, lr} first, as the original

// f_006de398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the free cell nearest to the position, searching outward.
namespace d_006de398 {

struct __attribute__((packed)) FindNearestFreeCellArg0 {
    u8 unknown_0[0x6758];  // (not used here)
    u32 word_6758;
    u8 unknown_675c[0x4];  // (not used here)
    u32 word_6760;
};
GUEST_OFFSET(FindNearestFreeCellArg0, word_6758, 0x6758);
GUEST_OFFSET(FindNearestFreeCellArg0, word_6760, 0x6760);

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

inline constexpr guest::Function<0x0014fe74, u32(u32, u32, u32)> thunk_0014fe74;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;

struct __attribute__((packed)) FindNearestFreeCellFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(FindNearestFreeCellFrame, word_0, 0x0);
GUEST_OFFSET(FindNearestFreeCellFrame, word_4, 0x4);
GUEST_OFFSET(FindNearestFreeCellFrame, word_8, 0x8);
GUEST_OFFSET(FindNearestFreeCellFrame, word_c, 0xc);
GUEST_SIZE(FindNearestFreeCellFrame, 0x10);

u32 find_nearest_free_cell(gptr<FindNearestFreeCellArg0> arg0, u32 r1, float S0, float S1) {
    guest::StackFrameOf<FindNearestFreeCellFrame> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r10 = r0;
    u32 r8 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    position_to_cell(frame.at(8).addr(), frame.at(0xc).addr(), r1, guest::cpu()->r[3]);
    u32 r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    frame->word_0 = 0;
    frame->word_4 = 0;
    r1 = arg0->word_6758;
    u32 r4 = 0x2710u;
    u32 r5 = arg0->word_6760;
    u32 r6 = 0u;
    u32 r7 = r5 + (r1 << 2);
    if (r5 != r7) {
        do {
            u32 r0_2 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_3 = thunk_0014fe74(r0_2, r1, r2);
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
    gptr<Local_006de398_r0_7> r0_7 = gptr<Local_006de398_r0_7>(r10 + 0x6774u);
    r1 = r0_7->word_0;
    r5 = r0_7->word_8;
    r7 = r5 + (r1 << 2);
    if (r5 != r7) {
        do {
            u32 r0_8 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_9 = thunk_0014fe74(r0_8, r1, r2);
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
    gptr<Local_006de398_r0_13> r0_13 = gptr<Local_006de398_r0_13>(r10 + 0x68c0u);
    r1 = r0_13->word_0;
    r5 = r0_13->word_8;
    u32 r9 = r5 + (r1 << 2);
    if (r5 != r9) {
        do {
            u32 r0_14 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_15 = thunk_0014fe74(r0_14, r1, r2);
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
            u32 r0_19 = thunk_0014fe74(*gptr<u32>(r5), r1_5, r2_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S1 = std::bit_cast<float>(*gptr<u32>(r0_19 + 4u));
            u32 res_1 = r7_1 - r4;
            u32 nf_1 = res_1 >> 0x1f;
            u32 vf_1 = ((r7_1 ^ r4) & (r7_1 ^ res_1)) >> 0x1f;
            S0 = fabsf(S1 - std::bit_cast<float>(*gptr<u32>(r8 + 4u)));
            if (nf_1 != vf_1) {
                u32 r0_20 = std::bit_cast<u32>(S0);
                nf_1 = r0_20 + 0xbe000000u >> 0x1f;
                vf_1 = ((r0_20 ^ 0x42000000u) & (r0_20 ^ r0_20 + 0xbe000000u)) >> 0x1f;
            }
            if (nf_1 != vf_1) {
                r6 = *gptr<u32>(r5);
                r4 = r7_1;
            }
            r5 += 4u;
            guest::preempt();
        } while (r5 != r9);
    }
    gptr<Local_006de398_r0_21> r0_21 = gptr<Local_006de398_r0_21>(r10 + 0x67ccu);
    r1 = r0_21->word_0;
    r5 = r0_21->word_8;
    r9 = r5 + (r1 << 2);
    if (r5 != r9) {
        do {
            u32 r0_22 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_23 = thunk_0014fe74(r0_22, r1, r2);
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
            u32 r0_27 = thunk_0014fe74(*gptr<u32>(r5), r1_7, r2_2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S1 = std::bit_cast<float>(*gptr<u32>(r8 + 4u));
            u32 res_3 = r7_2 - r4;
            u32 nf_2 = res_3 >> 0x1f;
            u32 vf_2 = ((r7_2 ^ r4) & (r7_2 ^ res_3)) >> 0x1f;
            S0 = fabsf(std::bit_cast<float>(*gptr<u32>(r0_27 + 4u)) - S1);
            if (nf_2 != vf_2) {
                u32 r0_28 = std::bit_cast<u32>(S0);
                nf_2 = r0_28 + 0xbe000000u >> 0x1f;
                vf_2 = ((r0_28 ^ 0x42000000u) & (r0_28 ^ r0_28 + 0xbe000000u)) >> 0x1f;
            }
            if (nf_2 != vf_2) {
                r6 = *gptr<u32>(r5);
                r4 = r7_2;
            }
            r5 += 4u;
            guest::preempt();
        } while (r5 != r9);
    }
    gptr<Local_006de398_r0_29> r0_29 = gptr<Local_006de398_r0_29>(r10 + 0x67a8u);
    r1 = r0_29->word_0;
    r5 = r0_29->word_8;
    r7 = r5 + (r1 << 2);
    if (r5 != r7) {
        do {
            u32 r0_30 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_31 = thunk_0014fe74(r0_30, r1, r2);
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
    u32 r10_1 = r10 + 0x6a6cu;
    r5 = *gptr<u32>(r10_1 + 8u);
    r7 = r5 + (*gptr<u32>(r10_1) << 2);
    if (r5 != r7) {
        do {
            u32 r0_35 = *gptr<u32>(r5);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_36 = thunk_0014fe74(r0_35, r1, r2);
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
GUEST_EXPORT_FRAMED(0x006de398, d_006de398::find_nearest_free_cell, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006dfe10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 0 on the days flagged at 0x9529d5 or 0x9529d6, or when the NPC manager's position callback finds
// something; else whether the scene kind's slot byte has at most one bit set.
namespace d_006dfe10 {

inline constexpr u32 vtable_BsNpcMgr__NpcPosGetCB = 0x0090af48u;
inline constexpr u32 npc_manager_address = 0x00950148u;
inline constexpr u32 table_997c70_address = 0x00997c70u;
inline guest::global<u32, 0x00950148> npc_manager;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x004e24e4, u32(u32, u32, u32, u32)> read_s8_0x009529d5_;
inline constexpr guest::Function<0x004e24f4, u32(u32)> read_s8_0x009529d6_;
inline constexpr guest::Function<0x005b4340, u32(u32)> byte_for_kind;

struct __attribute__((packed)) BsNpcMgrNpcPosGetCBNpcPosGetCB006dfe10Frame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x78];  // (not read or written by name)
    u32 word_80;
};
GUEST_OFFSET(BsNpcMgrNpcPosGetCBNpcPosGetCB006dfe10Frame, object_0_vtable, 0x0);
GUEST_OFFSET(BsNpcMgrNpcPosGetCBNpcPosGetCB006dfe10Frame, word_4, 0x4);
GUEST_OFFSET(BsNpcMgrNpcPosGetCBNpcPosGetCB006dfe10Frame, word_80, 0x80);
GUEST_SIZE(BsNpcMgrNpcPosGetCBNpcPosGetCB006dfe10Frame, 0x84);

u32 NpcPosGetCB__check(u32 npc_pos_get_cb, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BsNpcMgrNpcPosGetCBNpcPosGetCB006dfe10Frame> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r0_1 = read_s8_0x009529d5_(npc_pos_get_cb, r1, r2, r3);
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
        frame->object_0_vtable = vtable_BsNpcMgr__NpcPosGetCB;
        u32 r0_5 = for_each_element(frame.at(8).addr(), 0x3040fcu, 0xcu, 0xau);
        r1_2 = 0u;
        *gptr<u32>(r0_5 + 0x78u) = r1_2;
        r0_3 = frame->word_80;
        if (s32(r0_3) > 0) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
    }
    u32 scene_2 = current_scene_id(r0_3, r1_2);
    u32 byte = byte_for_kind(scene_2);
    if (byte - 2u == 0) {
        r0_8 = 0xcu;
    } else {
        if ((byte - 2u >> 0x1f) != (((byte ^ 2u) & (byte ^ byte - 2u)) >> 0x1f)) {
            if (byte == 0) {
                r0_8 = 0xau;
                goto L_6dfed0;
            }
            if (byte == 1u) {
                r0_8 = 0xbu;
                goto L_6dfed0;
            }
            return 1u;
        }
        if (byte == 3u) {
            r0_8 = 0xdu;
        } else if (byte == 0x84u) {
            r0_8 = 0xeu;
        } else {
            return 1u;
        }
    }
L_6dfed0:;
    r1 = 0u;
    npc_pos_get_cb = u32(*gptr<u8>(r0_8 + table_997c70_address)) >> 4;
    if (npc_pos_get_cb == 0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    do {
        if ((npc_pos_get_cb & 1u) != 0) {
            r1 += 1u;
        }
        npc_pos_get_cb >>= 1;
        guest::preempt();
    } while (npc_pos_get_cb != 0);
    if (r1 > 1u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_006dfe10
GUEST_EXPORT_FRAMED(0x006dfe10, d_006dfe10::NpcPosGetCB__check, 0x4000);  // pushes {lr} first, as the original
