// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002e01ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restarts the button's animation at +0x3ac from zero and resets its two timing words (+0x50c) from defaults.
namespace d_002e01ac {

struct __attribute__((packed)) LayoutButton {
    u8 unknown_0[0x50c];  // (not used here)
    u32 word_50c;
    u32 word_510;
};
GUEST_OFFSET(LayoutButton, word_50c, 0x50c);
GUEST_OFFSET(LayoutButton, word_510, 0x510);

inline guest::global<u32, 0x00857bac> global_00857bac;
inline guest::global<u32, 0x00857bb0> global_00857bb0;
inline constexpr guest::Function<0x004b9b64, u32(u32, u32)> Listener__notify;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

void LayoutButton__restart_animation_3ac(gptr<LayoutButton> layout_button, float S0) {
    Listener__notify(layout_button.addr() + 0x238u, layout_button.addr() + 0x3acu);
    float S0_1 = 0.0f;
    guest::cpu()->s[0] = S0_1;
    Animation__set_value(layout_button.addr() + 0x3acu);
    u32 r1_2 = *global_00857bb0;
    layout_button->word_50c = *global_00857bac;
    layout_button->word_510 = r1_2;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_002e01ac
GUEST_EXPORT_FRAMED(0x002e01ac, d_002e01ac::LayoutButton__restart_animation_3ac, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e0248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the enabled word (+0xc8) and picks the button's sound id to match; disabled also sets the +0xc4 mode to 8.
namespace d_002e0248 {

struct __attribute__((packed)) LayoutButton {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
};
GUEST_OFFSET(LayoutButton, word_c4, 0xc4);
GUEST_OFFSET(LayoutButton, word_c8, 0xc8);
GUEST_OFFSET(LayoutButton, word_cc, 0xcc);
GUEST_OFFSET(LayoutButton, byte_da, 0xda);


void LayoutButton__set_enabled(gptr<LayoutButton> layout_button, u32 r1) {
    layout_button->word_c8 = r1;
    if (r1 != 0) {
        layout_button->word_cc = 0x100038e;
        layout_button->byte_da = 1;
        guest::cpu()->r[1] = 0x100038eu;
        return;
    }
    layout_button->word_cc = 0x1000392;
    layout_button->word_c4 = 8;
    layout_button->byte_da = 1;
    guest::cpu()->r[1] = 0x1000392u;
}

}  // namespace d_002e0248
GUEST_EXPORT(0x002e0248, d_002e0248::LayoutButton__set_enabled);

// f_002e0288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flag at +0x508 and mirrors it in bit 0 of the owner's +0xb7 byte.
namespace d_002e0288 {

struct __attribute__((packed)) LayoutButton {
    u8 unknown_0[0x500];  // (not used here)
    u32 word_500;
    u8 unknown_504[0x4];  // (not used here)
    u8 byte_508;
};
GUEST_OFFSET(LayoutButton, word_500, 0x500);
GUEST_OFFSET(LayoutButton, byte_508, 0x508);

struct __attribute__((packed)) Local_002e0288_r2_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002e0288_r2_1, byte_b7, 0xb7);


void LayoutButton__set_flag_508(gptr<LayoutButton> layout_button, u32 r1) {
    gptr<Local_002e0288_r2_1> r2_1 = gptr<Local_002e0288_r2_1>(layout_button->word_500);
    layout_button->byte_508 = u8(r1);
    if (r2_1.addr() == 0) {
        return;
    }
    r2_1->byte_b7 = u8(u32(r2_1->byte_b7) & 0xfeu | r1);
}

}  // namespace d_002e0288
GUEST_EXPORT(0x002e0288, d_002e0288::LayoutButton__set_flag_508);

// f_002e0308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads message `id` of group `group` into the button's text (+0x404), unless the button has no text (+0x516); id -1
// leaves it.
namespace d_002e0308 {

struct __attribute__((packed)) LayoutButton {
    u8 unknown_0[0x516];  // (not used here)
    u8 byte_516;
};
GUEST_OFFSET(LayoutButton, byte_516, 0x516);

struct __attribute__((packed)) Local_002e0308_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_002e0308_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002e0308_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002e0308_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_002e0308_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_002e0308_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_002e0308_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_002e0308_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_002e0308_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_002e0308_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_002e0308_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_002e0308_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_002e0308_ea_2, word_14, 0x14);

struct __attribute__((packed)) Local_002e0308_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_002e0308_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_002e0308_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_002e0308_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_002e0308_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_002e0308_ea_3, word_14, 0x14);

inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;

struct __attribute__((packed)) LayoutButtonSetMessageFrame {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(LayoutButtonSetMessageFrame, word_0, 0x0);
GUEST_SIZE(LayoutButtonSetMessageFrame, 0x18);

u32 LayoutButton__set_message(gptr<LayoutButton> layout_button, u32 r1, u32 file, u32 r3) {
    guest::StackFrameOf<LayoutButtonSetMessageFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    if (r1 + 1u == 0) {
        guest::cpu()->r[1] = r1;
        return layout_button.addr();
    }
    gptr<Local_002e0308_ea_1> ea_1 = gptr<Local_002e0308_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_1 = layout_button->byte_516;
    if (r0_1 == 0) {
        MessageStore__attach_window(*message_store, 0u, file, r3);
        frame->word_0 = 0;
        load_message(*message_store, layout_button.addr() + 0x404u, file, r1);
        u32 r0_4 = *message_store;
        gptr<Local_002e0308_ea_2> ea_2 = gptr<Local_002e0308_ea_2>(frame.at(0).addr());
        u32 r4_1 = ea_2->word_4;
        u32 r5_1 = ea_2->word_8;
        u32 r6_1 = ea_2->word_c;
        u32 r7_1 = ea_2->word_10;
        r14 = ea_2->word_14;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7_1;
        frame.release();
        return LinkOwner__unlink(r0_4, 0u);
    }
    gptr<Local_002e0308_ea_3> ea_3 = gptr<Local_002e0308_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_4;
    u32 r5_2 = ea_3->word_8;
    u32 r6_2 = ea_3->word_c;
    u32 r7_2 = ea_3->word_10;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    return r0_1;
}

}  // namespace d_002e0308
GUEST_EXPORT(0x002e0308, d_002e0308::LayoutButton__set_message);

// f_002e037c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the button's drag icon (+0x258) out of its current list and into `list` (when not null), remembering the list
// at +0x500.
namespace d_002e037c {

struct __attribute__((packed)) LayoutButton {
    u8 unknown_0[0xd9];  // (not used here)
    u8 byte_d9;
    u8 unknown_da[0x17e];  // (not used here)
    u32 icon;
    u8 unknown_25c[0x2a4];  // (not used here)
    u32 word_500;
};
GUEST_OFFSET(LayoutButton, byte_d9, 0xd9);
GUEST_OFFSET(LayoutButton, icon, 0x258);
GUEST_OFFSET(LayoutButton, word_500, 0x500);

inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> DragIconList__add;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32)> DragIconList__remove;

u32 LayoutButton__move_drag_icon(gptr<LayoutButton> layout_button, u32 r1) {
    u32 r0 = layout_button.addr();
    u32 icon = layout_button->icon;
    if (icon != 0) {
        u32 list = *gptr<u32>(icon + 0xcu);
        if (list != 0) {
            DragIconList__remove(list, icon);
            icon = guest::cpu()->r[1];
        }
        r0 = 0u;
        layout_button->byte_d9 = u8(r0);
        if (r1 != 0) {
            DragIconList__add(r1, layout_button->icon);
            icon = guest::cpu()->r[1];
            r0 = 1u;
            layout_button->word_500 = r1;
            layout_button->byte_d9 = u8(r0);
        }
    }
    guest::cpu()->r[1] = icon;
    return r0;
}

}  // namespace d_002e037c
GUEST_EXPORT_FRAMED(0x002e037c, d_002e037c::LayoutButton__move_drag_icon, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e03cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading the common button layout archive with the layout allocator.
namespace d_002e03cc {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 global_009ab084_address = 0x009ab084u;
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> layout_allocator_8;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) LoadCommonButtonLayoutFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LoadCommonButtonLayoutFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadCommonButtonLayoutFrame, word_4, 0x4);
GUEST_SIZE(LoadCommonButtonLayoutFrame, 0xc);

u32 load_common_button_layout(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LoadCommonButtonLayoutFrame> frame;  // the original's stack frame
    u32 r0_1 = layout_allocator_8(r0, r1, r2, r3);
    frame->word_4 = 0x2e0404;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    return load_split_start(global_009ab084_address, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), 0x80u);
}

}  // namespace d_002e03cc
GUEST_EXPORT_FRAMED(0x002e03cc, d_002e03cc::load_common_button_layout, 0x4000);  // pushes {lr} first, as the original

// f_002e0428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the selected state (+0x517) changes, plays (selected) or finishes (not) the animation at +0x3d4 and updates the
// layout.
namespace d_002e0428 {

struct __attribute__((packed)) LayoutButton {
    u8 unknown_0[0xd9];  // (not used here)
    u8 byte_d9;
    u8 unknown_da[0x43d];  // (not used here)
    u8 byte_517;
};
GUEST_OFFSET(LayoutButton, byte_d9, 0xd9);
GUEST_OFFSET(LayoutButton, byte_517, 0x517);

inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> Listener__notify;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569420, u32(u32, u32)> Layout__refresh_pane;
inline constexpr guest::Function<0x00569508, u32(u32)> apply_value;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

u32 LayoutButton__set_selected(gptr<LayoutButton> layout_button, u32 r1, float S0) {
    u32 r5_1 = r1;
    u32 r0_1 = s8(layout_button->byte_517);
    if (r0_1 != r5_1) {
        layout_button->byte_517 = u8(r5_1);
        Listener__notify(layout_button.addr() + 0x238u, layout_button.addr() + 0x3d4u, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r5_1 != 0) {
            float S0_2 = 0.0f;
            guest::cpu()->s[0] = S0_2;
            Animation__set_value(layout_button.addr() + 0x3d4u);
        } else {
            apply_value(layout_button.addr() + 0x3d4u);
        }
        Layout__virtual_3(layout_button.addr() + 0x238u);
        Layout__refresh_pane(layout_button.addr() + 0x238u, layout_button.addr() + 0x3d4u);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0_1 = r5_1 ^ 1u;
        layout_button->byte_d9 = u8(r0_1);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_1;
}

}  // namespace d_002e0428
GUEST_EXPORT_FRAMED(0x002e0428, d_002e0428::LayoutButton__set_selected, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e086c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the animation at +0x3ac and updates the layout.
namespace d_002e086c {

inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> Listener__notify;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569420, u32(u32, u32)> Layout__refresh_pane;
inline constexpr guest::Function<0x00569508, u32(u32)> apply_value;

void LayoutButton__finish_animation_3ac(u32 layout_button) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Listener__notify(layout_button + 0x238u, layout_button + 0x3acu, guest::cpu()->r[2], guest::cpu()->r[3]);
    apply_value(layout_button + 0x3acu);
    Layout__virtual_3(layout_button + 0x238u);
    frame.release();
    Layout__refresh_pane(layout_button + 0x238u, layout_button + 0x3acu);
    return;
}

}  // namespace d_002e086c
GUEST_EXPORT(0x002e086c, d_002e086c::LayoutButton__finish_animation_3ac);

// f_002e08c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restarts the text (unless the button has none), then updates the layout.
namespace d_002e08c8 {

struct __attribute__((packed)) LayoutButton {
    u8 unknown_0[0x516];  // (not used here)
    u8 byte_516;
};
GUEST_OFFSET(LayoutButton, byte_516, 0x516);

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;

void LayoutButton__update_layout(gptr<LayoutButton> layout_button, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (layout_button->byte_516 == 0) {
        start_message(layout_button.addr() + 0x43cu, layout_button.addr() + 0x404u, guest::cpu()->r[2], guest::cpu()->r[3]);
        TextBox__layout_lines(layout_button.addr() + 0x43cu);
        r1 = guest::cpu()->r[1];
    }
    frame.release();
    Layout__virtual_3(layout_button.addr() + 0x238u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_002e08c8
GUEST_EXPORT(0x002e08c8, d_002e08c8::LayoutButton__update_layout);

// f_002e0908: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restarts the text and the animation at +0x384, stopping the button node when the list says so, and resets the timing
// words.
namespace d_002e0908 {

struct __attribute__((packed)) LayoutButton {
    u8 unknown_0[0x516];  // (not used here)
    u8 byte_516;
};
GUEST_OFFSET(LayoutButton, byte_516, 0x516);

struct __attribute__((packed)) Local_002e0908_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e0908_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002e0908_ea_1, word_4, 0x4);

inline guest::global<u32, 0x00857ba4> global_00857ba4;
inline guest::global<u32, 0x00857ba8> global_00857ba8;
inline constexpr guest::Function<0x002b6d20, u32(u32, u32, u32, u32)> start_or_stop_button_node;
inline constexpr guest::Function<0x004b9b64, u32(u32, u32)> Listener__notify;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;

void LayoutButton__restart_animation_384(gptr<LayoutButton> layout_button, float S0) {
    if (layout_button->byte_516 == 0) {
        start_message(layout_button.addr() + 0x43cu, layout_button.addr() + 0x404u, guest::cpu()->r[2], guest::cpu()->r[3]);
        TextBox__layout_lines(layout_button.addr() + 0x43cu);
        S0 = guest::cpu()->s[0];
    }
    if (*gptr<u8>((layout_button.addr() + 0x500u) + 0x17u) == 0) {
        guest::cpu()->s[0] = S0;
        start_or_stop_button_node(layout_button.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
    }
    guest::cpu()->s[0] = S0;
    Listener__notify(layout_button.addr() + 0x238u, layout_button.addr() + 0x384u);
    float S0_2 = 0.0f;
    guest::cpu()->s[0] = S0_2;
    Animation__set_value(layout_button.addr() + 0x384u);
    u32 r0_4 = *global_00857ba4;
    u32 r1_4 = *global_00857ba8;
    gptr<Local_002e0908_ea_1> ea_1 = gptr<Local_002e0908_ea_1>(layout_button.addr() + 0x50cu);
    ea_1->word_0 = r0_4;
    ea_1->word_4 = r1_4;
}

}  // namespace d_002e0908
GUEST_EXPORT_FRAMED(0x002e0908, d_002e0908::LayoutButton__restart_animation_384, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e0d04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the used slots (bit 0 set and kind not 4) in the 16 slots of each of the 3 records, into +0xa0.
namespace d_002e0d04 {

struct __attribute__((packed)) CountUsedSlotsArg0 {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
};
GUEST_OFFSET(CountUsedSlotsArg0, byte_a0, 0xa0);

inline constexpr guest::Function<0x002bedd8, u32(u32, u32)> record_fbb_address;
inline constexpr guest::Function<0x005ca6fc, u32(u32, u32, u32, u32)> exhibition_park_data_unless_set;
inline constexpr guest::Function<0x0071d648, u32(u32, u32)> slot_address_0071d648;

u32 count_used_slots(gptr<CountUsedSlotsArg0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r0_1 = exhibition_park_data_unless_set(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r7 = r0_1;
    if (r0_1 != 0) {
        u32 j = 0u;
        arg0->byte_a0 = 0;
        do {
            u32 r8 = record_fbb_address(r7, j & 0xffu);
            u32 i = 0u;
            do {
                r0_1 = slot_address_0071d648(r8, i);
                r1_1 = *gptr<u8>(r0_1 + 0x7dd6u);
                if ((r1_1 & 1u) != 0) {
                    r0_1 = *gptr<u8>(r0_1 + 0x7dd7u);
                    if (r0_1 != 4u) {
                        r0_1 = u32(*gptr<u8>(r5 + 0xa0u)) + 1u;
                        *gptr<u8>(r5 + 0xa0u) = u8(r0_1);
                    }
                }
                i += 1u;
                guest::preempt();
            } while (i < 0x10u);
            j += 1u;
            guest::preempt();
        } while (j < 3u);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002e0d04
GUEST_EXPORT_FRAMED(0x002e0d04, d_002e0d04::count_used_slots, 0x41f0);  // pushes {i, r5, j, r7, r8, lr} first, as the original

// f_002e173c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the first entry whose two bytes are (row, value) from the row's list (+0x10 + row * 0x24), else from the
// shared list at +0x7c.
namespace d_002e173c {


void remove_pair_entry(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r1_4 = 0;
    u32 r4 = r0 + r1 * 0x24u + 0x10u;
    u32 r3 = *gptr<u32>(r4);
    u32 r12 = *gptr<u32>(r4 + 4);
    if (r3 != r12) {
        do {
            if (*gptr<u8>(r3) == r1 && *gptr<u8>(r3 + 1u) == r2) {
                u32 r0_1 = r12 - 4u;
                *gptr<u32>(r4 + 4u) = r0_1;
                if (r0_1 == r3) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                do {
                    r1_1 = *gptr<u32>(r3 + 4u);
                    u32 r0_2 = r3;
                    r3 += 4u;
                    *gptr<u32>(r0_2) = r1_1;
                    guest::preempt();
                } while (*gptr<u32>(r4 + 4u) != r3);
                guest::cpu()->r[1] = r1_1;
                return;
            }
            r3 += 4u;
            guest::preempt();
        } while (r3 != r12);
    }
    r0 += 0x7cu;
    r3 = *gptr<u32>(r0);
    r12 = *gptr<u32>(r0 + 4);
    if (r3 == r12) {
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        if (*gptr<u8>(r3) == r1 && *gptr<u8>(r3 + 1u) == r2) {
            u32 r1_2 = r12 - 4u;
            *gptr<u32>(r0 + 4u) = r1_2;
            if (r1_2 == r3) {
                guest::cpu()->r[1] = r1_2;
                return;
            }
            do {
                u32 r1_3 = *gptr<u32>(r3 + 4u);
                u32 r2_1 = r3;
                r3 += 4u;
                *gptr<u32>(r2_1) = r1_3;
                r1_4 = *gptr<u32>(r0 + 4u);
                guest::preempt();
            } while (r1_4 != r3);
            guest::cpu()->r[1] = r1_4;
            return;
        }
        r3 += 4u;
        guest::preempt();
    } while (r3 != r12);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002e173c
GUEST_EXPORT_FRAMED(0x002e173c, d_002e173c::remove_pair_entry, 0x30);  // pushes {r4, r5} first, as the original

// f_002e1818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the candidate, counts the used slots into +0xa0 and marks the count done (+0xa1).
namespace d_002e1818 {

struct __attribute__((packed)) SearchCand {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
};
GUEST_OFFSET(SearchCand, byte_a0, 0xa0);

inline constexpr guest::Function<0x002bedd8, u32(u32, u32)> record_fbb_address;
inline constexpr guest::Function<0x002e0d94, u32(u32, u32, u32, u32)> SearchCand_8___SearchCand_002e0d94;
inline constexpr guest::Function<0x005ca6fc, u32(u32)> exhibition_park_data_unless_set;
inline constexpr guest::Function<0x0071d648, u32(u32, u32)> slot_address_0071d648;

void SearchCand__recount_used_slots(gptr<SearchCand> search_cand, u32 r1) {
    u32 r0 = search_cand.addr();
    u32 r5 = r0;
    u32 r0_2 = exhibition_park_data_unless_set(SearchCand_8___SearchCand_002e0d94(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r1_2 = guest::cpu()->r[1];
    u32 r7 = r0_2;
    if (r0_2 != 0) {
        u32 j = 0u;
        search_cand->byte_a0 = 0;
        do {
            u32 r8 = record_fbb_address(r7, j & 0xffu);
            u32 i = 0u;
            do {
                u32 r0_4 = slot_address_0071d648(r8, i);
                r1_2 = *gptr<u8>(r0_4 + 0x7dd6u);
                if ((r1_2 & 1u) != 0 && *gptr<u8>(r0_4 + 0x7dd7u) != 4u) {
                    *gptr<u8>(r5 + 0xa0u) = u8(u32(*gptr<u8>(r5 + 0xa0u)) + 1u);
                }
                i += 1u;
                guest::preempt();
            } while (i < 0x10u);
            j += 1u;
            guest::preempt();
        } while (j < 3u);
    }
    *gptr<u8>(r5 + 0xa1u) = 1;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_002e1818
GUEST_EXPORT_FRAMED(0x002e1818, d_002e1818::SearchCand__recount_used_slots, 0x41f0);  // pushes {i, r5, j, r7, r8, lr} first, as the original

// f_002e1ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows UI message 0xe2 with a value (arg 1) set in the message store, in the window's text view.
namespace d_002e1ba4 {

inline constexpr u32 vtable_script__WordFix_15u_ = 0x00909af0u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f1204, u32(u32, u32, u32)> call_target_with_two_0x64_;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) ShowUiMessageE2Frame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x38];  // (not read or written by name)
};
GUEST_OFFSET(ShowUiMessageE2Frame, word_0, 0x0);
GUEST_OFFSET(ShowUiMessageE2Frame, word_8, 0x8);
GUEST_SIZE(ShowUiMessageE2Frame, 0x44);

void show_ui_message_e2(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ShowUiMessageE2Frame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0xfu, r3);
    u32 r6 = vtable_script__WordFix_15u_;
    *gptr<u32>(r0_1) = r6;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    u32 r4_1 = r0_2 - 0xcu;
    clear_aligned(r0_2 + 0xcu, 0x1eu);
    r1 = 0x8906ecu;
    r0 = r4_1 + 0x18u;
    *gptr<u16>(r4_1 + 0x18u) = *gptr<u16>(r1);
    u32 r2 = 7u;
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
    MessageStore__attach_window(*message_store, 0u, r2, r3_4);
    call_target_with_two_0x64_(*gptr<u32>(*message_store + 0x14u), r7, 0u);
    frame->word_0 = 0;
    load_message(*message_store, frame.at(8).addr(), 0x848720u, 0xe2u);
    LinkOwner__unlink(*message_store, 0u);
    start_message(r5 + 0x6d0u, frame.at(8).addr());
    TextBox__layout_lines(r5 + 0x6d0u);
    frame->word_8 = r6;
}

}  // namespace d_002e1ba4
GUEST_EXPORT_FRAMED(0x002e1ba4, d_002e1ba4::show_ui_message_e2, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002e1ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows UI message 0xe1 with a value (arg 1) set in the message store, in the window's text view.
namespace d_002e1ca4 {

inline constexpr u32 vtable_script__WordFix_15u_ = 0x00909af0u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f1274, u32(u32, u32, u32)> call_target_with_two_0x68_;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) ShowUiMessageE1Frame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x38];  // (not read or written by name)
};
GUEST_OFFSET(ShowUiMessageE1Frame, word_0, 0x0);
GUEST_OFFSET(ShowUiMessageE1Frame, word_8, 0x8);
GUEST_SIZE(ShowUiMessageE1Frame, 0x44);

void show_ui_message_e1(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ShowUiMessageE1Frame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0xfu, r3);
    u32 r6 = vtable_script__WordFix_15u_;
    *gptr<u32>(r0_1) = r6;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    u32 r4_1 = r0_2 - 0xcu;
    clear_aligned(r0_2 + 0xcu, 0x1eu);
    r1 = 0x8906ecu;
    r0 = r4_1 + 0x18u;
    *gptr<u16>(r4_1 + 0x18u) = *gptr<u16>(r1);
    u32 r2 = 7u;
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
    MessageStore__attach_window(*message_store, 0u, r2, r3_4);
    call_target_with_two_0x68_(*gptr<u32>(*message_store + 0x14u), r7, 0u);
    frame->word_0 = 0;
    load_message(*message_store, frame.at(8).addr(), 0x848720u, 0xe1u);
    LinkOwner__unlink(*message_store, 0u);
    start_message(r5 + 0x6d0u, frame.at(8).addr());
    TextBox__layout_lines(r5 + 0x6d0u);
    frame->word_8 = r6;
}

}  // namespace d_002e1ca4
GUEST_EXPORT_FRAMED(0x002e1ca4, d_002e1ca4::show_ui_message_e1, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002e1da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e1da4 {

inline constexpr u32 vtable_script__WordFix_20u_ = 0x00909ce8u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002e18dc, u32(u32, u32)> script__WordFix_20u___WordFix_002e18dc;
inline constexpr guest::Function<0x002e1a00, u32(u32, u32)> script__WordFix_30u___WordFix_002e1a00;
inline constexpr guest::Function<0x002e1ba4, u32(u32, u32)> show_ui_message_e2;
inline constexpr guest::Function<0x002e1ca4, u32(u32, u32)> show_ui_message_e1;
inline constexpr guest::Function<0x002e21e8, u32(u32)> show_ui_message_dc;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x00615e30, u32(u32, u32, u32)> item_actor_kind_bytes;
inline constexpr guest::Function<0x00615f30, u32(u32)> Player__has_caught;
inline constexpr guest::Function<0x00615ffc, u32(u32, u32, u32)> sea_creature_spawn_range;
inline constexpr guest::Function<0x0061666c, u32(u32)> Player__record_new_sea_creature;
inline constexpr guest::Function<0x007010f8, u32(u32, u32, u32)> insect_spawn_params;
inline constexpr guest::Function<0x007011e8, u32(u32)> Player__record_new_insect;
inline constexpr guest::Function<0x0081d12c, u32(u32)> script__WordFix_20u___WordFix_0081d12c;

struct __attribute__((packed)) ShowUiMessageDeOrDfFrame {
    u32 word_0;
    u32 word_4;
    u32 object_8_vtable;
    u8 unknown_c[0x3c];  // (not read or written by name)
    u32 word_48;
    u8 unknown_4c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ShowUiMessageDeOrDfFrame, word_0, 0x0);
GUEST_OFFSET(ShowUiMessageDeOrDfFrame, word_4, 0x4);
GUEST_OFFSET(ShowUiMessageDeOrDfFrame, object_8_vtable, 0x8);
GUEST_OFFSET(ShowUiMessageDeOrDfFrame, word_48, 0x48);
GUEST_SIZE(ShowUiMessageDeOrDfFrame, 0x50);

void show_ui_message_de_or_df(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ShowUiMessageDeOrDfFrame> frame;  // the original's stack frame
    u32 player = r0 + 0x794u;
    u32 is_empty = Item__is_empty(player, r1, r2, r3);
    if (is_empty == 0) {
        show_ui_message_dc(r0);
        frame->word_4 = 0;
        frame->word_48 = 0;
        u32 category = Item__category(player);
        if (category == 0x24u) {
            script__WordFix_20u___WordFix_0081d12c(frame.at(8).addr());
            MessageStore__attach_window(*message_store, 0u);
            frame->word_0 = 0;
            load_message(*message_store, frame.at(8).addr(), 0x848720u, 0xdeu);
            LinkOwner__unlink(*message_store, 0u);
            start_message(r0 + 0x2fcu, frame.at(8).addr());
            TextBox__layout_lines(r0 + 0x2fcu);
            frame->object_8_vtable = vtable_script__WordFix_20u_;
            insect_spawn_params(frame.at(4).addr(), frame.at(0x48).addr(), player);
            script__WordFix_30u___WordFix_002e1a00(r0, frame->word_4);
            script__WordFix_20u___WordFix_002e18dc(r0, frame->word_48);
            show_ui_message_e1(r0, Player__record_new_insect(player));
            return;
        }
        u32 category_2 = Item__category(player);
        if (category_2 == 0x27u) {
            script__WordFix_20u___WordFix_0081d12c(frame.at(8).addr());
            MessageStore__attach_window(*message_store, 0u);
            frame->word_0 = 0;
            load_message(*message_store, frame.at(8).addr(), 0x848720u, 0xdfu);
            LinkOwner__unlink(*message_store, 0u);
            start_message(r0 + 0x2fcu, frame.at(8).addr());
            TextBox__layout_lines(r0 + 0x2fcu);
            frame->object_8_vtable = vtable_script__WordFix_20u_;
            item_actor_kind_bytes(frame.at(4).addr(), frame.at(0x48).addr(), player);
            script__WordFix_30u___WordFix_002e1a00(r0, frame->word_4);
            script__WordFix_20u___WordFix_002e18dc(r0, frame->word_48);
            show_ui_message_e2(r0, Player__has_caught(player));
            return;
        }
        u32 category_3 = Item__category(player);
        if (category_3 == 0x28u) {
            script__WordFix_20u___WordFix_0081d12c(frame.at(8).addr());
            MessageStore__attach_window(*message_store, 0u);
            frame->word_0 = 0;
            load_message(*message_store, frame.at(8).addr(), 0x848720u, 0xdeu);
            LinkOwner__unlink(*message_store, 0u);
            start_message(r0 + 0x2fcu, frame.at(8).addr());
            TextBox__layout_lines(r0 + 0x2fcu);
            frame->object_8_vtable = vtable_script__WordFix_20u_;
            sea_creature_spawn_range(frame.at(4).addr(), frame.at(0x48).addr(), player);
            script__WordFix_30u___WordFix_002e1a00(r0, frame->word_4);
            script__WordFix_20u___WordFix_002e18dc(r0, frame->word_48);
            show_ui_message_e2(r0, Player__record_new_sea_creature(player));
        }
    }
}

}  // namespace d_002e1da4
GUEST_EXPORT_FRAMED(0x002e1da4, d_002e1da4::show_ui_message_de_or_df, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002e21e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e21e8 {

inline constexpr u32 vtable_script__WordFix_21u__rec = 0x00909d20u;
inline constexpr u32 vtable_script__WordFix_33u__rec = 0x00909f18u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> construct_word_fix_33_into_text_box;
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32)> call_target_with_two_0x94_;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) ShowUiMessageDcFrame {
    u32 word_0;
    u32 object_4_vtable;
    u8 unknown_8[0x58];  // (not read or written by name)
    u32 word_60;
    u8 unknown_64[0x44];  // (not read or written by name)
};
GUEST_OFFSET(ShowUiMessageDcFrame, word_0, 0x0);
GUEST_OFFSET(ShowUiMessageDcFrame, object_4_vtable, 0x4);
GUEST_OFFSET(ShowUiMessageDcFrame, word_60, 0x60);
GUEST_SIZE(ShowUiMessageDcFrame, 0xa8);

void show_ui_message_dc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ShowUiMessageDcFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r0_1 = frame.at(0x60).addr();
    script__construct_word_ptr(r0_1, frame.at(0x78).addr(), 0x15u, r3);
    u32 r6 = vtable_script__WordFix_21u__rec;
    *gptr<u32>(r0_1) = r6;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    u32 r4_1 = r0_2 - 0xcu;
    clear_aligned(r0_2 + 0xcu, 0x2au);
    u32 r1 = 0x8906ecu;
    r0 = r4_1 + 0x18u;
    *gptr<u16>(r4_1 + 0x18u) = *gptr<u16>(r1);
    u32 r2 = 0xau;
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
    construct_word_fix_33_into_text_box(frame.at(4).addr(), r5 + 0x794u, 0u, r3_4);
    MessageStore__attach_window(*message_store, 0u);
    call_target_with_two_0x94_(*gptr<u32>(*message_store + 0x14u), frame.at(4).addr(), 0u);
    frame->word_0 = 0;
    load_message(*message_store, frame.at(0x60).addr(), 0x848720u, 0xdcu);
    LinkOwner__unlink(*message_store, 0u);
    u32 view = r5 + 0x484u;
    start_message(view, frame.at(0x60).addr());
    TextBox__layout_lines(view);
    frame->object_4_vtable = vtable_script__WordFix_33u__rec;
    frame->word_60 = r6;
    guest::cpu()->r[1] = vtable_script__WordFix_33u__rec;
}

}  // namespace d_002e21e8
GUEST_EXPORT_FRAMED(0x002e21e8, d_002e21e8::show_ui_message_dc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e2974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an explanation book's content: a layout with five animations, seven text renderers and an empty
// item.
namespace d_002e2974 {

inline constexpr u32 vtable_ExplainBookContent = 0x008f3674u;
inline guest::global<u32, 0x00848424> global_00848424;
inline guest::global<u32, 0x00848428> global_00848428;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x005e3128, u32(u32, u32)> script__RenderTrace__RenderTrace;

u32 ExplainBookContent__ExplainBookContent(gptr<ExplainBookContent> explain_book_content) {
    explain_book_content->word_4 = 0;
    explain_book_content->byte_8 = 0;
    u32 r2_1 = *global_00848428;
    explain_book_content->word_c = *global_00848424;
    explain_book_content->word_10 = r2_1;
    explain_book_content->word_14 = 0;
    explain_book_content->byte_18 = 0;
    explain_book_content->word_1c = 0;
    explain_book_content->vtable = vtable_ExplainBookContent;
    explain_book_content->word_20 = 0;
    u32 r0_3 = Layout__Layout(explain_book_content.addr() + 0x24u, vtable_ExplainBookContent, r2_1, explain_book_content.addr() + 0xcu) + 0x14cu;
    construct_layout_animation(r0_3);
    u32 r0_4 = r0_3 + 0x28u;
    construct_layout_animation(r0_4);
    u32 r0_5 = r0_4 + 0x28u;
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;
    construct_layout_animation(r0_7);
    u32 r0_13 = script__RenderTrace__RenderTrace(script__RenderTrace__RenderTrace(script__RenderTrace__RenderTrace(r0_7 + 0x28u, 0x14u) + 0xc4u, 0x14u) + 0xc4u, 0x14u);
    u32 r0_19 = script__RenderTrace__RenderTrace(script__RenderTrace__RenderTrace(script__RenderTrace__RenderTrace(r0_13 + 0xc4u, 0x15u) + 0xc4u, 0x1eu) + 0xc4u, 0x14u);
    u32 r0_22 = script__RenderTrace__RenderTrace(r0_19 + 0xc4u, 0xfu) + 0xc4u;
    construct_item(r0_22, 0x7ffeu);
    u32 r0_23 = r0_22 - 0x794u;
    *gptr<u8>(r0_23 + 0x798u) = 0;
    return r0_23;
}

}  // namespace d_002e2974
GUEST_EXPORT_FRAMED(0x002e2974, d_002e2974::ExplainBookContent__ExplainBookContent, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e2d24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Attaches the layouts at +0x4c4 (active) and +0x610 (inactive) to the layout system.
namespace d_002e2d24 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

void attach_two_layouts(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_3 = read_global_975c20(LayoutRenderer__draw_on_screen(read_global_975c20(r0), r0 + 0x4c4u, 1u));
    frame.release();
    LayoutRenderer__draw_on_screen(r0_3, r0 + 0x610u, 0u);
    return;
}

}  // namespace d_002e2d24
GUEST_EXPORT(0x002e2d24, d_002e2d24::attach_two_layouts);

// f_002e326c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the object, then its layouts at +0x4c4 and +0x610.
namespace d_002e326c {

inline constexpr guest::Function<0x002e2d54, u32(u32, u32, u32, u32)> MailView__update;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

void update_two_layouts(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    MailView__update(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    Layout__virtual_3(r0 + 0x4c4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    Layout__virtual_3(r0 + 0x610u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_002e326c
GUEST_EXPORT(0x002e326c, d_002e326c::update_two_layouts);

// f_002e35d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays (on) or finishes (off) the animation at +0x280 of the layout at +0x134 when it has one, and stores the inverse
// state at +0xd9 and +0x12d.
namespace d_002e35d0 {

struct __attribute__((packed)) SetStateAnimation280Arg0 {
    u8 unknown_0[0x298];  // (not used here)
    u32 word_298;
};
GUEST_OFFSET(SetStateAnimation280Arg0, word_298, 0x298);

inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> Listener__notify;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569420, u32(u32, u32)> Layout__refresh_pane;
inline constexpr guest::Function<0x00569508, u32(u32)> apply_value;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;

void set_state_animation_280(gptr<SetStateAnimation280Arg0> arg0, u32 r1, float S0) {
    if (arg0->word_298 != 0) {
        Listener__notify(arg0.addr() + 0x134u, arg0.addr() + 0x280u, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r1 != 0) {
            float S0_2 = 0.0f;
            guest::cpu()->s[0] = S0_2;
            Animation__set_value(arg0.addr() + 0x280u);
        } else {
            apply_value(arg0.addr() + 0x280u);
        }
        Layout__virtual_3(arg0.addr() + 0x134u);
        Layout__refresh_pane(arg0.addr() + 0x134u, arg0.addr() + 0x280u);
        S0 = guest::cpu()->s[0];
    }
    u32 r1_5 = r1 ^ 1u;
    *gptr<u8>(arg0.addr() + 0xd9u) = u8(r1 ^ 1u);
    *gptr<u8>(arg0.addr() + 0x12du) = u8(r1_5);
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_002e35d0
GUEST_EXPORT_FRAMED(0x002e35d0, d_002e35d0::set_state_animation_280, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e38b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scatters random items in the 2x2 blocks' cells.
namespace d_002e38b4 {

struct __attribute__((packed)) Local_002e38b4_ea_1 {
    u32 grid2x2;
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
};
GUEST_OFFSET(Local_002e38b4_ea_1, grid2x2, 0x0);
GUEST_OFFSET(Local_002e38b4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002e38b4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_002e38b4_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_002e38b4_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_002e38b4_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_002e38b4_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_002e38b4_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_002e38b4_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_002e38b4_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_002e38b4_ea_1, word_28, 0x28);

struct __attribute__((packed)) Local_002e38b4_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e38b4_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002e38b4_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_002e38b4_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e38b4_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_002e38b4_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_002e38b4_ea_5 {
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
GUEST_OFFSET(Local_002e38b4_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_002e38b4_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_002e38b4_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_002e38b4_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_002e38b4_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_002e38b4_ea_5, word_14, 0x14);
GUEST_OFFSET(Local_002e38b4_ea_5, word_18, 0x18);
GUEST_OFFSET(Local_002e38b4_ea_5, word_1c, 0x1c);
GUEST_OFFSET(Local_002e38b4_ea_5, word_20, 0x20);

struct __attribute__((packed)) Local_002e38b4_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e38b4_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_002e38b4_r0_1, word_4, 0x4);

struct __attribute__((packed)) Local_002e38b4_r0_25 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_002e38b4_r0_25, half_0, 0x0);
GUEST_OFFSET(Local_002e38b4_r0_25, byte_4, 0x4);
GUEST_OFFSET(Local_002e38b4_r0_25, byte_5, 0x5);

struct __attribute__((packed)) Local_002e38b4_r0_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e38b4_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_002e38b4_r0_6, word_4, 0x4);

struct __attribute__((packed)) Local_002e38b4_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e38b4_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_002e38b4_r5_1, word_4, 0x4);

inline constexpr guest::Function<0x00201ff4, u32(u32, u32)> Grid2x2__count_items;
inline constexpr guest::Function<0x0024e9d8, u32(u32, u32, u32, u32)> replace_number_with_bytes;
inline constexpr guest::Function<0x002eba64, u32(u32, u32, u32)> Grid2x2__block_at;
inline constexpr guest::Function<0x002eba7c, u32(u32, u32)> Grid2x2__pair_at;
inline constexpr guest::Function<0x002eba90, u32(u32)> Grid2x2__clear;
inline constexpr guest::Function<0x002ebc04, u32(u32, u32, u32, u32)> grid_entry_address;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002fcc14, u32(u32, u32, u32, u32)> set_cell_item;
inline constexpr guest::Function<0x0052eed0, u32(u32, u32, u32)> cell_of_block_and_position;
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> zero_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x0055cb58, u32(u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x006e4b30, u32(u32, u32, u32)> read_item_layout;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Grid2x2ScatterRandomFrame {
    u8 unknown_0[0x260];  // (not read or written by name)
    u32 word_260;
    u32 word_264;
    u8 unknown_268[0xc];  // (not read or written by name)
    u32 word_274;
    u8 unknown_278[0x54];  // (not read or written by name)
    u32 word_2cc;
    u8 unknown_2d0[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Grid2x2ScatterRandomFrame, word_260, 0x260);
GUEST_OFFSET(Grid2x2ScatterRandomFrame, word_264, 0x264);
GUEST_OFFSET(Grid2x2ScatterRandomFrame, word_274, 0x274);
GUEST_OFFSET(Grid2x2ScatterRandomFrame, word_2cc, 0x2cc);
GUEST_SIZE(Grid2x2ScatterRandomFrame, 0x2f8);

void Grid2x2__scatter_random(u32 grid2x2, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Grid2x2ScatterRandomFrame> frame;  // the original's stack frame
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 j = guest::cpu()->r[8];
    u32 k = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_18 = 0;
    gptr<Local_002e38b4_ea_1> ea_1 = gptr<Local_002e38b4_ea_1>(frame.at(0x2cc).addr());
    ea_1->grid2x2 = grid2x2;
    ea_1->word_4 = r1;
    ea_1->word_8 = i;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = j;
    ea_1->word_1c = k;
    ea_1->word_20 = r10;
    ea_1->word_24 = r11;
    ea_1->word_28 = r14;
    gptr<Local_002e38b4_r0_1> r0_1 = gptr<Local_002e38b4_r0_1>(frame.at(0x2b8).addr());
    r11 = r1;
    r0_1->word_0 = 3;
    r0_1->word_4 = 3;
    u32 r0_2 = zero_word_pair(r0_1.addr(), 3u, 3u, r3);
    construct_word_quad_from_pairs(frame.at(0x290).addr(), r0_2, r0_1.addr());
    make_end_grid_rect_iterator(frame.at(0x2a8).addr(), frame.at(0x290).addr());
    Grid2x2__clear(frame->word_2cc);
    r5 = frame->word_2cc;
    gptr<Local_002e38b4_r0_6> r0_6 = gptr<Local_002e38b4_r0_6>(frame.at(0x2c0).addr());
    r0_6->word_0 = 3;
    r0_6->word_4 = 3;
    u32 r0_7 = zero_word_pair(r0_6.addr(), 3u, 3u, guest::cpu()->r[3]);
    construct_word_quad_from_pairs(frame.at(0x268).addr(), r0_7, r0_6.addr());
    make_end_grid_rect_iterator(frame.at(0x280).addr(), frame.at(0x268).addr());
    construct_grid_rect_iterator(frame.at(0x258).addr(), frame.at(0x268).addr());
    u32 r0_12 = key_records_differ(frame.at(0x258).addr(), frame.at(0x280).addr());
    r3 = guest::cpu()->r[3];
    if (r0_12 != 0) {
        r6 = 0x879cccu;
        do {
            u32 r0_13 = grid_entry_address(r5, frame->word_260, frame->word_264, r3);
            u32 r0_14 = *gptr<u8>(frame->word_260 + (r6 + (frame->word_264 << 2)));
            u32 item_count_2 = Grid2x2__count_items(r0_14, r11);
            *gptr<u16>(r0_13) = u16(item_count_2);
            WrappingCursor__advance(frame.at(0x258).addr(), item_count_2);
            r0_18 = key_records_differ(frame.at(0x258).addr(), frame.at(0x280).addr());
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_18 != 0);
    }
    k = 0u;
    r10 = frame.at(0).addr();
    do {
        j = 0u;
        do {
            u32 r0_20 = grid_entry_address(frame->word_2cc, j + 1u, k + 1u, r3);
            u32 r4_2 = *gptr<u16>(r0_20);
            u32 block_2 = Grid2x2__block_at(frame->word_2cc, j, k);
            frame->word_274 = block_2;
            u32 r0_24 = read_item_layout(frame.at(0).addr(), 0x258u, r4_2);
            u32 r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r5 = r0_24;
            i = 0u;
            if (r0_24 >= 0u && r0_24 != 0) {
                do {
                    gptr<Local_002e38b4_r0_25> r0_25 = gptr<Local_002e38b4_r0_25>(r10 + i * 6u);
                    u32 r1_9 = r0_25->half_0;
                    u32 r6_1 = r0_25->byte_4;
                    u32 r7_2 = r0_25->byte_5;
                    construct_item(frame.at(0x270).addr(), r1_9, r2, r3);
                    set_cell_item(frame->word_274, frame.at(0x270).addr(), r6_1, r7_2);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    i += 1u;
                    guest::preempt();
                } while (r5 > i);
            }
            j += 1u;
            guest::preempt();
        } while (s32(j) < 2);
        k += 1u;
        guest::preempt();
    } while (s32(k) < 2);
    u32 r4_3 = frame->word_2cc;
    gptr<Local_002e38b4_ea_3> ea_3 = gptr<Local_002e38b4_ea_3>(frame.at(0x268).addr());
    ea_3->word_0 = 1;
    ea_3->word_4 = 1;
    gptr<Local_002e38b4_ea_4> ea_4 = gptr<Local_002e38b4_ea_4>(frame.at(0x268).addr());
    u32 r1_11 = ea_4->word_0;
    u32 r2_10 = ea_4->word_4;
    u32 r0_28 = grid_entry_address(r4_3, r1_11, r2_10, r3);
    u32 r0_29 = *gptr<u16>(r0_28);
    u32 r0_30 = zero_word_pair(r0_29, r1_11, r2_10, r3);
    cell_of_block_and_position(frame.at(0x260).addr(), frame.at(0x268).addr(), r0_30);
    frame->word_260 = frame->word_260 + 0xfu;
    frame->word_264 = frame->word_264 + 5u;
    u32 pair_3 = Grid2x2__pair_at(r4_3, 0u);
    gptr<Local_002e38b4_r5_1> r5_1 = gptr<Local_002e38b4_r5_1>(frame.at(0x260).addr());
    replace_number_with_bytes(pair_3, 0x69u, r5_1->word_0, r5_1->word_4);
    u32 pair_4 = Grid2x2__pair_at(r4_3, 1u);
    replace_number_with_bytes(pair_4, 0x6au, r5_1->word_0 - 2u, r5_1->word_4);
    u32 r0_34 = Xorshift128__next_0055cb58(r11);
    *gptr<u8>(frame->word_2cc) = u8(u32(u64(r0_34) * 3u >> 0x20) & 0xffu);
    u32 r0_35 = Xorshift128__next_0055cb58(r11);
    u32 r1_13 = u32(u64(r0_35) * 3u >> 0x20) & 0xffu;
    *gptr<u8>(frame->word_2cc + 1u) = u8(r1_13);
    gptr<Local_002e38b4_ea_5> ea_5 = gptr<Local_002e38b4_ea_5>(frame.at(0x2d4).addr());
    u32 r4_4 = ea_5->word_0;
    u32 r5_2 = ea_5->word_4;
    u32 r6_2 = ea_5->word_8;
    u32 r7_3 = ea_5->word_c;
    u32 r8_1 = ea_5->word_10;
    u32 r9_1 = ea_5->word_14;
    u32 r10_1 = ea_5->word_18;
    u32 r11_1 = ea_5->word_1c;
    guest::cpu()->r[1] = r1_13;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
}

}  // namespace d_002e38b4
GUEST_EXPORT(0x002e38b4, d_002e38b4::Grid2x2__scatter_random);

// f_002e43d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the handle at +0x30 once it is unlocked, then acquires a new one for the key at +0x10 from the manager at
// 0xa22020; true when it got one.
namespace d_002e43d0 {

struct __attribute__((packed)) RefreshResourceHandleArg0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 link_sub;
};
GUEST_OFFSET(RefreshResourceHandleArg0, link_sub, 0x30);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0051aa84, u32(u32, u32, u32, u32)> RequestPool__release;
inline constexpr guest::Function<0x0051ad60, u32(u32, u32, u32, u32)> RequestPool__acquire;
inline constexpr guest::Function<0x00746e90, u32(u32, u32, u32, u32)> RequestPool__is_local_identity;
inline constexpr guest::Function<0x007475e0, u32(u32, u32, u32, u32)> LinkSub__state_locked;

u32 refresh_resource_handle(gptr<RefreshResourceHandleArg0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_3 = 0;
    u32 link_sub = arg0->link_sub;
    u32 r6_1 = r2;
    if (link_sub != 0) {
        u32 r0_2 = LinkSub__state_locked(link_sub, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            RequestPool__release(request_pool_address, arg0->link_sub, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            arg0->link_sub = 0;
        } else if (arg0->link_sub != 0) {
            return 0u;
        }
    }
    r0_3 = RequestPool__is_local_identity(request_pool_address, arg0.addr() + 0x10u, r2, r3);
    if (r0_3 != 0) {
        r0_3 = RequestPool__acquire(request_pool_address, arg0.addr() + 0x10u, r1, r6_1);
    }
    arg0->link_sub = r0_3;
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_002e43d0
GUEST_EXPORT_FRAMED(0x002e43d0, d_002e43d0::refresh_resource_handle, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e5680: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5680 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x424];  // (not used here)
    u8 byte_424;
    u8 unknown_425[0x21];  // (not used here)
    u16 half_446;
    u8 unknown_448[0x34];  // (not used here)
    u32 word_47c;
    u8 unknown_480[0x4];  // (not used here)
    u32 word_484;
};
GUEST_OFFSET(sead__SafeStringBase_char_, byte_424, 0x424);
GUEST_OFFSET(sead__SafeStringBase_char_, half_446, 0x446);
GUEST_OFFSET(sead__SafeStringBase_char_, word_47c, 0x47c);
GUEST_OFFSET(sead__SafeStringBase_char_, word_484, 0x484);

struct __attribute__((packed)) Local_002e5680_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e5680_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002e5680_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_002e5680_r2_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e5680_r2_4, word_0, 0x0);
GUEST_OFFSET(Local_002e5680_r2_4, word_4, 0x4);

struct __attribute__((packed)) Local_002e5680_r5_1 {
    u8 unknown_0[0x46];  // (not used here)
    u16 half_46;
    u8 unknown_48[0x38];  // (not used here)
    u8 byte_80;
};
GUEST_OFFSET(Local_002e5680_r5_1, half_46, 0x46);
GUEST_OFFSET(Local_002e5680_r5_1, byte_80, 0x80);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 boot_resources_dirty_address = 0x009500e1u;
inline constexpr u32 save_process_state_address = 0x009535d8u;
inline guest::global<u8, 0x009500e0> boot_resources_loaded;
inline guest::global<u32, 0x009535d8> save_process_state;
inline constexpr guest::Function<0x002cf3b4, u32(u32, u32, u32, u32)> NetTransfer__start_15;
inline constexpr guest::Function<0x00304640, u32(u32, u32, u32)> request_result;
inline constexpr guest::Function<0x00304ca4, u32(u32, u32, u32, u32)> init_request_record;
inline constexpr guest::Function<0x00304ce4, u32(u32)> link_request_record_head;
inline constexpr guest::Function<0x003302c8, u32(u32, u32, u32)> SoundPlayer__start;
inline constexpr guest::Function<0x00545104, u32(u32, u32)> sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00545104;
inline constexpr guest::Function<0x005ccfc4, u32(u32, u32)> SaveProcess__SaveProcess;
inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> reset_request_record;
inline constexpr guest::Function<0x00810e14, u32(u32, u32, u32, u32)> sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00810e14;
inline constexpr guest::Function<0x00813c20, u32(u32, u32, u32)> set_flag_below_5;

struct __attribute__((packed)) StartSaveProcessFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 object_8_vtable;
    u32 word_c;
    u8 unknown_10[0x60];  // (not read or written by name)
};
GUEST_OFFSET(StartSaveProcessFrame, object_8_vtable, 0x8);
GUEST_OFFSET(StartSaveProcessFrame, word_c, 0xc);
GUEST_SIZE(StartSaveProcessFrame, 0x70);

u32 start_save_process(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StartSaveProcessFrame> frame;  // the original's stack frame
    u32 r0_6 = 0;
    gptr<Local_002e5680_r5_1> r5_1 = gptr<Local_002e5680_r5_1>(safe_string_base_char.addr() + 0x400u);
    u32 r0_1 = s16(safe_string_base_char->half_446);
    u32 r6_1 = 0u;
    if (r0_1 != 0) {
        if (r0_1 == 1u) {
            if (r5_1->byte_80 == 0) {
                return r6_1;
            }
            if ((safe_string_base_char->word_47c & 0xffu) != 2u) {
                if (safe_string_base_char->byte_424 != 0) {
                    NetTransfer__start_15(safe_string_base_char.addr() + 0x140u, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                }
                init_request_record(frame.at(0x18).addr(), r1, 0x800000u, 0u);
                gptr<Local_002e5680_ea_1> ea_1 = gptr<Local_002e5680_ea_1>(frame.at(0x20).addr());
                ea_1->word_0 = 0x20000;
                ea_1->word_4 = 0;
                SaveProcess__SaveProcess(frame.at(0x18).addr(), 0u);
                r5_1->half_46 = 3;
                link_request_record_head(frame.at(0x18).addr());
                r1 = guest::cpu()->r[1];
                return r6_1;
            }
            *boot_resources_loaded = 1;
            r1 = boot_resources_dirty_address;
            *gptr<u8>(r1) = 0;
            r0_6 = 2u;
            r5_1->half_46 = u16(r0_6);
            guest::cpu()->r[1] = r1;
            return r6_1;
        }
        if (r0_1 == 2u) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        if (r0_1 == 3u && safe_string_base_char->byte_424 == 0) {
            u32 r5_2 = safe_string_base_char->word_484;
            u32 r4_1 = *save_process_state;
            if (r5_2 + 1u != 0) {
                frame->word_c = 0x87aa70;
                frame->object_8_vtable = vtable_sead__SafeStringBase_char__rec;
                sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00810e14(frame.at(0x14).addr(), frame.at(8).addr(), vtable_sead__SafeStringBase_char__rec, r3);
                SoundPlayer__start(r4_1, sead__BufferedSafeStringBase_char___BufferedSafeStringBase_00545104(frame.at(0x40).addr(), frame.at(0x14).addr()), r5_2);
                set_flag_below_5(r4_1 + 0x139u, 4u, 1u);
                r1 = guest::cpu()->r[1];
            }
            guest::cpu()->r[1] = r1;
            return r6_1;
        }
        guest::cpu()->r[1] = r1;
        return r6_1;
    }
    reset_request_record(safe_string_base_char.addr() + 0x450u, r1, r2, r3);
    gptr<Local_002e5680_r2_4> r2_4 = gptr<Local_002e5680_r2_4>(safe_string_base_char.addr() + 0x458u);
    r2_4->word_0 = 0x40010000;
    r2_4->word_4 = 0;
    request_result(safe_string_base_char.addr() + 0x450u, 0u, r2_4.addr());
    r1 = guest::cpu()->r[1];
    r0_6 = u32(r5_1->half_46) + 1u;
    r5_1->half_46 = u16(r0_6);
    return r6_1;
}

}  // namespace d_002e5680
GUEST_EXPORT_FRAMED(0x002e5680, d_002e5680::start_save_process, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e58f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a player model as an ambient-camera NPC model: clears its parts' handles, then the human model.
namespace d_002e58f0 {

inline constexpr u32 vtable_HumanModel = 0x008eb174u;
inline constexpr u32 vtable_PlayerModel = 0x008ebc68u;
inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> HumanModel__reset_parts;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x004ef50c, u32(u32)> g3d__GroupSkeletalAnim__destructor;

u32 NpcAmbCamModelBase_PlayerModel___destructor(gptr<HumanModel> human_model) {
    human_model->vtable = vtable_PlayerModel;
    u32 r0_1 = human_model.addr() + 0x144u;
    u32 r2_1 = ~0u;
    human_model->word_1b4 = 0;
    human_model->word_1b8 = r2_1;
    human_model->word_1ac = 0;
    human_model->word_1b0 = r2_1;
    human_model->word_1a4 = 0;
    human_model->word_1a8 = r2_1;
    human_model->word_19c = 0;
    human_model->word_1a0 = r2_1;
    human_model->word_194 = 0;
    human_model->word_198 = r2_1;
    human_model->word_18c = 0;
    human_model->word_190 = r2_1;
    human_model->word_184 = 0;
    human_model->word_188 = r2_1;
    human_model->word_17c = 0;
    human_model->word_180 = r2_1;
    human_model->word_174 = 0;
    human_model->word_178 = r2_1;
    human_model->word_16c = 0;
    human_model->word_170 = r2_1;
    human_model->word_164 = 0;
    human_model->word_168 = r2_1;
    human_model->word_15c = 0;
    human_model->word_160 = r2_1;
    human_model->word_154 = 0;
    human_model->word_158 = r2_1;
    human_model->word_14c = 0;
    human_model->word_150 = r2_1;
    human_model->word_144 = 0;
    human_model->word_148 = r2_1;
    human_model->vtable = vtable_HumanModel;
    HumanModel__reset_parts(r0_1 - 0x144u, vtable_HumanModel, r2_1, r0_1 + 8u);
    g3d__GroupSkeletalAnim__destructor(r0_1 - 0x78u);
    set_base_vtable_004edd84(r0_1 - 0xccu);
    return r0_1 - 0x144u;
}

}  // namespace d_002e58f0
GUEST_EXPORT_FRAMED(0x002e58f0, d_002e58f0::NpcAmbCamModelBase_PlayerModel___destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e5a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the byte at (column, row) of a 112 x 96 grid; out-of-range coordinates fall back to row or column 0.
namespace d_002e5a4c {


void ByteGrid__set(u32 byte_grid, u32 r1, u32 r2, u32 r3) {
    if (r2 < 0x60u) {
        byte_grid += r2 * 0x70u;
    }
    if (r1 < 0x70u) {
        byte_grid += r1;
    }
    *gptr<u8>(byte_grid) = u8(r3);
}

}  // namespace d_002e5a4c
GUEST_EXPORT(0x002e5a4c, d_002e5a4c::ByteGrid__set);

// f_002e5a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the 112 x 96 grid with 0xff.
namespace d_002e5a68 {


void ByteGrid__fill_empty(u32 byte_grid) {
    u32 r1 = 0;
    u32 r12 = 0xffu;
    u32 i = 0u;
    do {
        u32 r2 = 0u;
        u32 r3 = byte_grid + i * 0x70u;
        r1 = r2;
        do {
            *gptr<u8>(r3 + r2) = u8(r12);
            u32 r2_1 = r2 + 1u;
            r1 += 2u;
            *gptr<u8>(r3 + r2_1) = u8(r12);
            r2 = r2_1 + 1u;
            guest::preempt();
        } while (s32(r1) < 0x70);
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0x60);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002e5a68
GUEST_EXPORT_FRAMED(0x002e5a68, d_002e5a68::ByteGrid__fill_empty, 0x10);  // pushes {i} first, as the original

// f_002e5ab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the 112 x 96 grid (0x2a00 bytes).
namespace d_002e5ab4 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

u32 ByteGrid__ByteGrid(u32 byte_grid) {
    clear(byte_grid, 0x2a00u);
    return byte_grid;
}

}  // namespace d_002e5ab4
GUEST_EXPORT_FRAMED(0x002e5ab4, d_002e5ab4::ByteGrid__ByteGrid, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e5af4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the object's first word in the global at 0x9525d0.
namespace d_002e5af4 {

struct __attribute__((packed)) StoreRandomSeedValueArg0 {
    u32 word_0;
};
GUEST_OFFSET(StoreRandomSeedValueArg0, word_0, 0x0);

inline constexpr u32 global_009525cc_address = 0x009525ccu;
inline guest::global<u32, 0x009525d0> random_seed_value;

u32 store_random_seed_value(gptr<StoreRandomSeedValueArg0> arg0) {
    u32 r0_1 = arg0->word_0;
    *random_seed_value = r0_1;
    guest::cpu()->r[1] = global_009525cc_address;
    return r0_1;
}

}  // namespace d_002e5af4
GUEST_EXPORT(0x002e5af4, d_002e5af4::store_random_seed_value);

// f_002e5b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the handle's effect (+0xc, still matching its id at +0x10): kills it when it is ready (+0x1ce), else marks
// it to die and queues the handle on the pending list at 0xabe0ac. True when the handle had an effect.
namespace d_002e5b08 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);
GUEST_OFFSET(EffectHandle, byte_14, 0x14);

struct __attribute__((packed)) Local_002e5b08_r0_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_002e5b08_r0_1, word_c, 0xc);

struct __attribute__((packed)) Local_002e5b08_r1_1 {
    u8 unknown_0[0x1cc];  // (not used here)
    u8 byte_1cc;
    u8 unknown_1cd[0x1];  // (not used here)
    u8 byte_1ce;
};
GUEST_OFFSET(Local_002e5b08_r1_1, byte_1cc, 0x1cc);
GUEST_OFFSET(Local_002e5b08_r1_1, byte_1ce, 0x1ce);

inline constexpr u32 pending_effect_handles_address = 0x00abe0acu;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;
inline constexpr guest::Function<0x0054da14, u32(u32, u32, u32, u32)> ResourceSet__find_by_id;

u32 EffectHandle__release(gptr<EffectHandle> effect_handle) {
    u32 r2 = 0;
    gptr<Local_002e5b08_r0_1> r0_1 = gptr<Local_002e5b08_r0_1>(effect_handle->word_c);
    gptr<Local_002e5b08_r1_1> r1_1 = gptr<Local_002e5b08_r1_1>(r0_1.addr() != 0 ? effect_handle->word_10 == r0_1->word_c ? r0_1.addr() : 0u : 0u);
    if (r1_1.addr() == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return 0u;
    }
    if (r1_1->byte_1ce != 0) {
        if (r0_1.addr() != 0) {
            r1_1 = gptr<Local_002e5b08_r1_1>(effect_handle->word_10);
            if (r1_1.addr() != r0_1->word_c) {
                r0_1 = gptr<Local_002e5b08_r0_1>(0u);
            }
        } else {
            r0_1 = gptr<Local_002e5b08_r0_1>(0u);
        }
        if (r0_1.addr() == 0) {
            guest::cpu()->r[1] = r1_1.addr();
            return 1u;
        }
        ResourceSet__find_by_id(r0_1.addr(), r1_1.addr(), r2, guest::cpu()->r[3]);
        u32 r1_2 = guest::cpu()->r[1];
        if ((u32(effect_handle->byte_14) & 1u) != 0) {
            unlink_from_ends(pending_effect_handles_address, effect_handle.addr());
            r1_2 = u32(effect_handle->byte_14) & ~1u;
            effect_handle->byte_14 = u8(r1_2);
        }
        effect_handle->word_c = 0;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r1_1->byte_1cc = 1;
    if ((u32(effect_handle->byte_14) & 1u) == 0) {
        queue_append(pending_effect_handles_address, effect_handle.addr());
        r1_1 = gptr<Local_002e5b08_r1_1>(u32(effect_handle->byte_14) | 1u);
        effect_handle->byte_14 = u8(r1_1.addr());
    }
    effect_handle->byte_14 = u8(u32(effect_handle->byte_14) | 2u);
    guest::cpu()->r[1] = r1_1.addr();
    return 1u;
}

}  // namespace d_002e5b08
GUEST_EXPORT_FRAMED(0x002e5b08, d_002e5b08::EffectHandle__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e5bec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the matrix into the effect (+0x12c and +0xfc), resets its scale bases (+0x15c) from defaults and recomputes
// its scaled size (+0x178).
namespace d_002e5bec {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) Local_002e5bec_r4_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x14c];  // (not used here)
    u32 word_15c;
    u32 word_160;
    u32 word_164;
    float float_168;
    float float_16c;
    u8 unknown_170[0x8];  // (not used here)
    float float_178;
    float float_17c;
};
GUEST_OFFSET(Local_002e5bec_r4_1, word_c, 0xc);
GUEST_OFFSET(Local_002e5bec_r4_1, word_15c, 0x15c);
GUEST_OFFSET(Local_002e5bec_r4_1, word_160, 0x160);
GUEST_OFFSET(Local_002e5bec_r4_1, word_164, 0x164);
GUEST_OFFSET(Local_002e5bec_r4_1, float_168, 0x168);
GUEST_OFFSET(Local_002e5bec_r4_1, float_16c, 0x16c);
GUEST_OFFSET(Local_002e5bec_r4_1, float_178, 0x178);
GUEST_OFFSET(Local_002e5bec_r4_1, float_17c, 0x17c);

inline constexpr u32 effect_default_rotation_x_address = 0x00af78e4u;
inline constexpr u32 effect_default_rotation_z_address = 0x00af78ecu;
inline guest::global<u32, 0x00af78e4> effect_default_rotation_x;
inline guest::global<u32, 0x00af78e8> effect_default_rotation_y;
inline guest::global<u32, 0x00af78ec> effect_default_rotation_z;
inline constexpr guest::Function<0x0014e910, u32(u32, u32)> Matrix34__copy;

u32 EffectHandle__set_matrix(gptr<EffectHandle> effect_handle, u32 r1, float S0, float S1) {
    u32 r0 = effect_handle.addr();
    u32 r2_1 = r1;
    gptr<Local_002e5bec_r4_1> r4_1 = gptr<Local_002e5bec_r4_1>(effect_handle->word_c);
    if (r4_1.addr() != 0) {
        r0 = effect_handle->word_10;
        r1 = r4_1->word_c;
        if (r0 == r1) {
            goto L_2e5c14;
        }
    }
    r4_1 = gptr<Local_002e5bec_r4_1>(0u);
L_2e5c14:;
    if (r4_1.addr() != 0) {
        u32 r5_1 = r4_1.addr() + 0x12cu;
        Matrix34__copy(r5_1, r2_1);
        r0 = Matrix34__copy(r4_1.addr() + 0xfcu, r5_1);
        r4_1->word_15c = *effect_default_rotation_x;
        r4_1->word_160 = *effect_default_rotation_y;
        r1 = *effect_default_rotation_z;
        r4_1->word_164 = r1;
        r4_1->float_178 = r4_1->float_168 * std::bit_cast<float>(r4_1->word_15c);
        S1 = std::bit_cast<float>(r4_1->word_160);
        S0 = r4_1->float_16c * S1;
        r4_1->float_17c = S0;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_002e5bec
GUEST_EXPORT_FRAMED(0x002e5bec, d_002e5bec::EffectHandle__set_matrix, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e5ed8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the handle's effect when it still has one; true when it did.
namespace d_002e5ed8 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

inline constexpr guest::Function<0x0054d964, u32(u32, u32, u32, u32)> EmitterSet__kill;

u32 EffectHandle__stop(gptr<EffectHandle> effect_handle, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = effect_handle->word_c;
    if (r2_1 != 0) {
        r3 = *gptr<u32>(r2_1 + 0xcu);
        r0_1 = effect_handle->word_10 == r3 ? r2_1 : 0u;
    } else {
        r0_1 = 0u;
    }
    if (r0_1 == 0) {
        return r0_1;
    }
    EmitterSet__kill(r0_1, guest::cpu()->r[1], r2_1, r3);
    return 1u;
}

}  // namespace d_002e5ed8
GUEST_EXPORT_FRAMED(0x002e5ed8, d_002e5ed8::EffectHandle__stop, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e5f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the handle off the pending list and forgets its effect.
namespace d_002e5f14 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, byte_14, 0x14);

inline constexpr u32 pending_effect_handles_address = 0x00abe0acu;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;

u32 EffectHandle__detach(gptr<EffectHandle> effect_handle, u32 r1) {
    if ((u32(effect_handle->byte_14) & 1u) != 0) {
        unlink_from_ends(pending_effect_handles_address, effect_handle.addr());
        r1 = u32(effect_handle->byte_14) & ~1u;
        effect_handle->byte_14 = u8(r1);
    }
    effect_handle->word_c = 0;
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002e5f14
GUEST_EXPORT_FRAMED(0x002e5f14, d_002e5f14::EffectHandle__detach, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e5f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the effect's target position (+0x1b4) and marks it moved (+0x1cd); true when the handle has an effect.
namespace d_002e5f84 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) EffectHandleSetTargetPositionArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(EffectHandleSetTargetPositionArg1, word_0, 0x0);
GUEST_OFFSET(EffectHandleSetTargetPositionArg1, word_4, 0x4);
GUEST_OFFSET(EffectHandleSetTargetPositionArg1, word_8, 0x8);

struct __attribute__((packed)) Local_002e5f84_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x1a4];  // (not used here)
    u32 word_1b4;
    u32 word_1b8;
    u32 word_1bc;
    u8 unknown_1c0[0xd];  // (not used here)
    u8 byte_1cd;
};
GUEST_OFFSET(Local_002e5f84_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_002e5f84_r2_1, word_1b4, 0x1b4);
GUEST_OFFSET(Local_002e5f84_r2_1, word_1b8, 0x1b8);
GUEST_OFFSET(Local_002e5f84_r2_1, word_1bc, 0x1bc);
GUEST_OFFSET(Local_002e5f84_r2_1, byte_1cd, 0x1cd);


u32 EffectHandle__set_target_position(gptr<EffectHandle> effect_handle, gptr<EffectHandleSetTargetPositionArg1> r1) {
    u32 r0 = effect_handle.addr();
    gptr<Local_002e5f84_r2_1> r2_1 = gptr<Local_002e5f84_r2_1>(effect_handle->word_c);
    if (r2_1.addr() != 0) {
        r0 = effect_handle->word_10;
        if (r0 != r2_1->word_c) {
            r2_1 = gptr<Local_002e5f84_r2_1>(0u);
        }
    } else {
        r2_1 = gptr<Local_002e5f84_r2_1>(0u);
    }
    if (r2_1.addr() == 0) {
        guest::cpu()->r[1] = r1.addr();
        return r0;
    }
    r2_1->word_1b4 = r1->word_0;
    r2_1->word_1b8 = r1->word_4;
    u32 r1_1 = r1->word_8;
    r2_1->word_1bc = r1_1;
    r2_1->byte_1cd = 1;
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_002e5f84
GUEST_EXPORT(0x002e5f84, d_002e5f84::EffectHandle__set_target_position);

// f_002e5fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the effect's vector at +0x180.
namespace d_002e5fd0 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) EffectHandleSetVelocityArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(EffectHandleSetVelocityArg1, word_0, 0x0);
GUEST_OFFSET(EffectHandleSetVelocityArg1, word_4, 0x4);
GUEST_OFFSET(EffectHandleSetVelocityArg1, word_8, 0x8);

struct __attribute__((packed)) Local_002e5fd0_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x170];  // (not used here)
    u32 word_180;
    u32 word_184;
    u32 word_188;
};
GUEST_OFFSET(Local_002e5fd0_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_002e5fd0_r2_1, word_180, 0x180);
GUEST_OFFSET(Local_002e5fd0_r2_1, word_184, 0x184);
GUEST_OFFSET(Local_002e5fd0_r2_1, word_188, 0x188);


u32 EffectHandle__set_velocity(gptr<EffectHandle> effect_handle, gptr<EffectHandleSetVelocityArg1> arg1) {
    u32 r0 = effect_handle.addr();
    gptr<Local_002e5fd0_r2_1> r2_1 = gptr<Local_002e5fd0_r2_1>(effect_handle->word_c);
    if (r2_1.addr() != 0) {
        r0 = effect_handle->word_10;
        if (r0 != r2_1->word_c) {
            r2_1 = gptr<Local_002e5fd0_r2_1>(0u);
        }
    } else {
        r2_1 = gptr<Local_002e5fd0_r2_1>(0u);
    }
    if (r2_1.addr() == 0) {
        return r0;
    }
    r2_1->word_180 = arg1->word_0;
    r2_1->word_184 = arg1->word_4;
    u32 r0_1 = arg1->word_8;
    r2_1->word_188 = r0_1;
    return r0_1;
}

}  // namespace d_002e5fd0
GUEST_EXPORT(0x002e5fd0, d_002e5fd0::EffectHandle__set_velocity);

// f_002e6014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the 8.8 fixed-point word at +0x30 of each of the effect's emitters (0x18 bytes each) from the float.
namespace d_002e6014 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);


u32 EffectHandle__set_emitter_rate(gptr<EffectHandle> effect_handle, float S0, float S1) {
    u32 i = effect_handle.addr();
    u32 r1 = effect_handle->word_c;
    if (r1 != 0) {
        i = effect_handle->word_10;
        if (i != *gptr<u32>(r1 + 0xcu)) {
            r1 = 0u;
        }
    } else {
        r1 = 0u;
    }
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return i;
    }
    u32 r3 = *gptr<u32>(r1 + 8u);
    S1 = 256.0f;
    i = 0u;
    S0 = std::bit_cast<float>(vcvt_sz_f(S0 * S1));
    if (s32(r3) <= 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return i;
    }
    do {
        u32 r2_1 = i * 3u;
        i += 1u;
        *gptr<u32>(r1 + (r2_1 << 3) + 0x30u) = std::bit_cast<u32>(S0);
        guest::preempt();
    } while (s32(r3) > s32(i));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return i;
}

}  // namespace d_002e6014
GUEST_EXPORT(0x002e6014, d_002e6014::EffectHandle__set_emitter_rate);

// f_002e6078: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets both scale factors (+0x168) and recomputes the scaled size from the bases (+0x15c).
namespace d_002e6078 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) Local_002e6078_r0_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002e6078_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_002e6078_r0_1, float_4, 0x4);

struct __attribute__((packed)) Local_002e6078_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x158];  // (not used here)
    float float_168;
    float float_16c;
    u8 unknown_170[0x8];  // (not used here)
    float float_178;
    float float_17c;
};
GUEST_OFFSET(Local_002e6078_r1_1, word_c, 0xc);
GUEST_OFFSET(Local_002e6078_r1_1, float_168, 0x168);
GUEST_OFFSET(Local_002e6078_r1_1, float_16c, 0x16c);
GUEST_OFFSET(Local_002e6078_r1_1, float_178, 0x178);
GUEST_OFFSET(Local_002e6078_r1_1, float_17c, 0x17c);


void EffectHandle__set_scale(gptr<EffectHandle> effect_handle, float S0, float S1) {
    gptr<Local_002e6078_r1_1> r1_1 = gptr<Local_002e6078_r1_1>(effect_handle->word_c);
    if (r1_1.addr() != 0 && effect_handle->word_10 == r1_1->word_c) {
        goto L_2e6098;
    }
    r1_1 = gptr<Local_002e6078_r1_1>(0u);
L_2e6098:;
    if (r1_1.addr() == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    r1_1->float_16c = S0;
    r1_1->float_168 = S0;
    gptr<Local_002e6078_r0_1> r0_1 = gptr<Local_002e6078_r0_1>(r1_1.addr() + 0x15cu);
    float S1_1 = S0 * r0_1->float_0;
    float S0_1 = S0 * r0_1->float_4;
    r1_1->float_178 = S1_1;
    r1_1->float_17c = S0_1;
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_002e6078
GUEST_EXPORT(0x002e6078, d_002e6078::EffectHandle__set_scale);

// f_002e60c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the two scale factors (+0x168) and recomputes the scaled size from the bases (+0x15c).
namespace d_002e60c4 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) Local_002e60c4_r0_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002e60c4_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_002e60c4_r0_1, float_4, 0x4);

struct __attribute__((packed)) Local_002e60c4_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002e60c4_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_002e60c4_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_002e60c4_r1_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002e60c4_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_002e60c4_r1_2, float_4, 0x4);


void EffectHandle__set_scale_xy(gptr<EffectHandle> effect_handle, float S0, float S1) {
    u32 r1_1 = effect_handle->word_c;
    if (r1_1 != 0 && effect_handle->word_10 == *gptr<u32>(r1_1 + 0xcu)) {
        goto L_2e60e4;
    }
    r1_1 = 0u;
L_2e60e4:;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    gptr<Local_002e60c4_r0_1> r0_1 = gptr<Local_002e60c4_r0_1>(r1_1 + 0x168u);
    r0_1->float_0 = S0;
    r0_1->float_4 = S1;
    gptr<Local_002e60c4_r0_2> r0_2 = gptr<Local_002e60c4_r0_2>(r1_1 + 0x15cu);
    gptr<Local_002e60c4_r1_2> r1_2 = gptr<Local_002e60c4_r1_2>(r1_1 + 0x178u);
    float S0_1 = S0 * r0_2->float_0;
    float S1_1 = S1 * r0_2->float_4;
    r1_2->float_0 = S0_1;
    r1_2->float_4 = S1_1;
    guest::cpu()->r[1] = r1_2.addr();
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_002e60c4
GUEST_EXPORT(0x002e60c4, d_002e60c4::EffectHandle__set_scale_xy);

// f_002e6110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the float at +0x1a0 of the effect.
namespace d_002e6110 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) Local_002e6110_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x190];  // (not used here)
    float float_1a0;
};
GUEST_OFFSET(Local_002e6110_r1_1, word_c, 0xc);
GUEST_OFFSET(Local_002e6110_r1_1, float_1a0, 0x1a0);


u32 EffectHandle__set_alpha(gptr<EffectHandle> effect_handle, float S0) {
    u32 r0 = effect_handle.addr();
    gptr<Local_002e6110_r1_1> r1_1 = gptr<Local_002e6110_r1_1>(effect_handle->word_c);
    if (r1_1.addr() != 0) {
        r0 = effect_handle->word_10;
        if (r0 != r1_1->word_c) {
            r1_1 = gptr<Local_002e6110_r1_1>(0u);
        }
    } else {
        r1_1 = gptr<Local_002e6110_r1_1>(0u);
    }
    if (r1_1.addr() != 0) {
        r1_1->float_1a0 = S0;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0;
}

}  // namespace d_002e6110
GUEST_EXPORT(0x002e6110, d_002e6110::EffectHandle__set_alpha);

// f_002e613c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the effect's ready flag (+0x1ce).
namespace d_002e613c {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) Local_002e613c_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x1be];  // (not used here)
    u8 byte_1ce;
};
GUEST_OFFSET(Local_002e613c_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_002e613c_r2_1, byte_1ce, 0x1ce);


u32 EffectHandle__set_ready(gptr<EffectHandle> effect_handle, u32 r1) {
    u32 r0 = effect_handle.addr();
    gptr<Local_002e613c_r2_1> r2_1 = gptr<Local_002e613c_r2_1>(effect_handle->word_c);
    if (r2_1.addr() != 0) {
        r0 = effect_handle->word_10;
        if (r0 != r2_1->word_c) {
            r2_1 = gptr<Local_002e613c_r2_1>(0u);
        }
    } else {
        r2_1 = gptr<Local_002e613c_r2_1>(0u);
    }
    if (r2_1.addr() != 0) {
        r2_1->byte_1ce = u8(r1);
    }
    return r0;
}

}  // namespace d_002e613c
GUEST_EXPORT(0x002e613c, d_002e613c::EffectHandle__set_ready);

// f_002e6168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the 8.8 fixed-point word at +0x34 of each of the effect's emitters from the float.
namespace d_002e6168 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);


u32 EffectHandle__set_emitter_rate_34(gptr<EffectHandle> effect_handle, float S0, float S1) {
    u32 i = effect_handle.addr();
    u32 r1 = effect_handle->word_c;
    if (r1 != 0) {
        i = effect_handle->word_10;
        if (i != *gptr<u32>(r1 + 0xcu)) {
            r1 = 0u;
        }
    } else {
        r1 = 0u;
    }
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return i;
    }
    u32 r3 = *gptr<u32>(r1 + 8u);
    S1 = 256.0f;
    i = 0u;
    S0 = std::bit_cast<float>(vcvt_sz_f(S0 * S1));
    if (s32(r3) <= 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return i;
    }
    do {
        u32 r2_1 = i * 3u;
        i += 1u;
        *gptr<u32>(r1 + (r2_1 << 3) + 0x34u) = std::bit_cast<u32>(S0);
        guest::preempt();
    } while (s32(r3) > s32(i));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return i;
}

}  // namespace d_002e6168
GUEST_EXPORT(0x002e6168, d_002e6168::EffectHandle__set_emitter_rate_34);

// f_002e61cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the angle to a rotation (+0x18c) of the effect, marks it rotated (bit 3 of +0x14) and queues the handle
// when it is not pending yet.
namespace d_002e61cc {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);
GUEST_OFFSET(EffectHandle, byte_14, 0x14);

struct __attribute__((packed)) Local_002e61cc_r4_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002e61cc_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_002e61cc_r4_2, word_4, 0x4);
GUEST_OFFSET(Local_002e61cc_r4_2, word_8, 0x8);

inline constexpr u32 pending_effect_handles_address = 0x00abe0acu;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;
inline constexpr guest::Function<0x001e58fc, u32(u32, u32, u32, u32)> SceneLight__color_of_kind;

struct __attribute__((packed)) EffectHandleSetRotationFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(EffectHandleSetRotationFrame, word_0, 0x0);
GUEST_OFFSET(EffectHandleSetRotationFrame, word_4, 0x4);
GUEST_OFFSET(EffectHandleSetRotationFrame, word_8, 0x8);
GUEST_SIZE(EffectHandleSetRotationFrame, 0x14);

void EffectHandle__set_rotation(gptr<EffectHandle> effect_handle, u32 r1, u32 r2) {
    guest::StackFrameOf<EffectHandleSetRotationFrame> frame;  // the original's stack frame
    u32 r0 = effect_handle.addr();
    u32 r4_1 = effect_handle->word_c;
    if (r4_1 != 0) {
        r1 = *gptr<u32>(r4_1 + 0xcu);
        if (effect_handle->word_10 == r1) {
            goto L_2e61f8;
        }
    }
    r4_1 = 0u;
L_2e61f8:;
    if (r4_1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    SceneLight__color_of_kind(frame.at(0).addr(), 0x1cu, r2, guest::cpu()->r[3]);
    u32 r1_1 = frame->word_4;
    u32 r2_1 = frame->word_8;
    gptr<Local_002e61cc_r4_2> r4_2 = gptr<Local_002e61cc_r4_2>(r4_1 + 0x18cu);
    r4_2->word_0 = frame->word_0;
    r4_2->word_4 = r1_1;
    r4_2->word_8 = r2_1;
    u32 r1_2 = u32(effect_handle->byte_14) | 8u;
    effect_handle->byte_14 = u8(r1_2);
    if ((r1_2 & 1u) != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    queue_append(pending_effect_handles_address, r0);
    effect_handle->byte_14 = u8(u32(effect_handle->byte_14) | 1u);
}

}  // namespace d_002e61cc
GUEST_EXPORT_FRAMED(0x002e61cc, d_002e61cc::EffectHandle__set_rotation, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002e6250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the float at +0x19c of the effect.
namespace d_002e6250 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) Local_002e6250_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x18c];  // (not used here)
    float float_19c;
};
GUEST_OFFSET(Local_002e6250_r1_1, word_c, 0xc);
GUEST_OFFSET(Local_002e6250_r1_1, float_19c, 0x19c);


u32 EffectHandle__set_float_19c(gptr<EffectHandle> effect_handle, float S0) {
    u32 r0 = effect_handle.addr();
    gptr<Local_002e6250_r1_1> r1_1 = gptr<Local_002e6250_r1_1>(effect_handle->word_c);
    if (r1_1.addr() != 0) {
        r0 = effect_handle->word_10;
        if (r0 != r1_1->word_c) {
            r1_1 = gptr<Local_002e6250_r1_1>(0u);
        }
    } else {
        r1_1 = gptr<Local_002e6250_r1_1>(0u);
    }
    if (r1_1.addr() != 0) {
        r1_1->float_19c = S0;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0;
}

}  // namespace d_002e6250
GUEST_EXPORT(0x002e6250, d_002e6250::EffectHandle__set_float_19c);

// f_002e627c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the effect's life (+0x1c0) to the maximum (on) or 0 (off).
namespace d_002e627c {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) Local_002e627c_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x1b0];  // (not used here)
    u32 word_1c0;
};
GUEST_OFFSET(Local_002e627c_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_002e627c_r2_1, word_1c0, 0x1c0);


u32 EffectHandle__set_endless(gptr<EffectHandle> effect_handle, u32 r1) {
    u32 r0 = effect_handle.addr();
    gptr<Local_002e627c_r2_1> r2_1 = gptr<Local_002e627c_r2_1>(effect_handle->word_c);
    if (r2_1.addr() != 0) {
        r0 = effect_handle->word_10;
        if (r0 != r2_1->word_c) {
            r2_1 = gptr<Local_002e627c_r2_1>(0u);
        }
    } else {
        r2_1 = gptr<Local_002e627c_r2_1>(0u);
    }
    if (r2_1.addr() == 0) {
        return r0;
    }
    u32 r0_1 = r1;
    if (r0_1 != 0) {
        r0_1 = ~0x80000000u;
    }
    r2_1->word_1c0 = r0_1;
    return r0_1;
}

}  // namespace d_002e627c
GUEST_EXPORT(0x002e627c, d_002e627c::EffectHandle__set_endless);

// f_002e62b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the word at +0x40 of emitter `index`, or of every emitter when the index is negative.
namespace d_002e62b4 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);


u32 EffectHandle__set_emitter_callback(gptr<EffectHandle> effect_handle, u32 r1, u32 r2) {
    u32 i = effect_handle.addr();
    u32 r3 = effect_handle->word_c;
    if (r3 != 0) {
        i = effect_handle->word_10;
        if (i != *gptr<u32>(r3 + 0xcu)) {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    if (r3 == 0) {
        return i;
    }
    if (s32(r2) >= 0) {
        u32 r0_1 = r3 + r2 * 0x18u;
        *gptr<u32>(r0_1 + 0x40u) = r1;
        return r0_1;
    }
    u32 r12 = *gptr<u32>(r3 + 8u);
    i = 0u;
    if (s32(r12) <= 0) {
        return i;
    }
    do {
        u32 r2_1 = i * 3u;
        i += 1u;
        *gptr<u32>(r3 + (r2_1 << 3) + 0x40u) = r1;
        guest::preempt();
    } while (s32(r12) > s32(i));
    return i;
}

}  // namespace d_002e62b4
GUEST_EXPORT(0x002e62b4, d_002e62b4::EffectHandle__set_emitter_callback);

// f_002e6368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Kills the handle's effect and takes the handle off the pending list.
namespace d_002e6368 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) Local_002e6368_r0_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_002e6368_r0_1, word_c, 0xc);

inline constexpr u32 pending_effect_handles_address = 0x00abe0acu;
inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> unlink_from_ends;
inline constexpr guest::Function<0x0054da14, u32(u32, u32, u32, u32)> ResourceSet__find_by_id;

u32 EffectHandle__kill(gptr<EffectHandle> effect_handle, u32 r1_unused, u32 r2) {
    u32 r0 = effect_handle.addr();
    u32 r1 = 0;
    u32 r4 = r0;
    gptr<Local_002e6368_r0_1> r0_1 = gptr<Local_002e6368_r0_1>(effect_handle->word_c);
    if (r0_1.addr() != 0) {
        r2 = r0_1->word_c;
        if (effect_handle->word_10 == r2) {
            r1 = r0_1.addr();
            goto L_2e6394;
        }
    }
    r1 = 0u;
L_2e6394:;
    u32 r5 = 0u;
    if (r1 != 0) {
        r2 = *gptr<u8>(r1 + 0x1ceu);
        if (r2 == 0) {
            goto L_2e6434;
        }
        if (r0_1.addr() != 0) {
            r1 = *gptr<u32>(r4 + 0x10u);
            if (r1 == r0_1->word_c) {
                goto L_2e63c8;
            }
        }
        r0_1 = gptr<Local_002e6368_r0_1>(0u);
L_2e63c8:;
        if (r0_1.addr() != 0) {
            ResourceSet__find_by_id(r0_1.addr(), r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) != 0) {
                unlink_from_ends(pending_effect_handles_address, r4, r2, guest::cpu()->r[3]);
                r1 = u32(*gptr<u8>(r4 + 0x14u)) & ~1u;
                *gptr<u8>(r4 + 0x14u) = u8(r1);
            }
            *gptr<u32>(r4 + 0xcu) = r5;
        }
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) == 0) {
        *gptr<u32>(r4 + 0xcu) = r5;
        guest::cpu()->r[1] = r1;
        return 1u;
    }
L_2e6410:;
    unlink_from_ends(pending_effect_handles_address, r4, r2, guest::cpu()->r[3]);
    r1 = u32(*gptr<u8>(r4 + 0x14u)) & ~1u;
    *gptr<u8>(r4 + 0x14u) = u8(r1);
    *gptr<u32>(r4 + 0xcu) = r5;
    guest::cpu()->r[1] = r1;
    return 1u;
L_2e6434:;
    *gptr<u8>(r1 + 0x1ccu) = 1;
    if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) != 0) {
        guest::preempt();
        goto L_2e6410;
    }
    *gptr<u32>(r4 + 0xcu) = r5;
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_002e6368
GUEST_EXPORT_FRAMED(0x002e6368, d_002e6368::EffectHandle__kill, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e6450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Kills the handle's effect, takes the handle off the pending list and forgets the effect; true when it had one.
namespace d_002e6450 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);
GUEST_OFFSET(EffectHandle, byte_14, 0x14);

inline constexpr u32 pending_effect_handles_address = 0x00abe0acu;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;
inline constexpr guest::Function<0x0054da14, u32(u32, u32, u32, u32)> ResourceSet__find_by_id;

u32 EffectHandle__kill_now(gptr<EffectHandle> effect_handle, u32 r1) {
    u32 r2 = 0;
    u32 r0_1 = effect_handle->word_c;
    if (r0_1 != 0) {
        r1 = effect_handle->word_10;
        if (r1 != *gptr<u32>(r0_1 + 0xcu)) {
            r0_1 = 0u;
        }
    } else {
        r0_1 = 0u;
    }
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    ResourceSet__find_by_id(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if ((u32(effect_handle->byte_14) & 1u) != 0) {
        unlink_from_ends(pending_effect_handles_address, effect_handle.addr());
        r1_1 = u32(effect_handle->byte_14) & ~1u;
        effect_handle->byte_14 = u8(r1_1);
    }
    effect_handle->word_c = 0;
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_002e6450
GUEST_EXPORT_FRAMED(0x002e6450, d_002e6450::EffectHandle__kill_now, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e64bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Kills the effect, clears the handle's flags and the effect's +0xf8 word.
namespace d_002e64bc {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);
GUEST_OFFSET(EffectHandle, byte_14, 0x14);

struct __attribute__((packed)) Local_002e64bc_r0_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0xe8];  // (not used here)
    u32 word_f8;
};
GUEST_OFFSET(Local_002e64bc_r0_1, word_c, 0xc);
GUEST_OFFSET(Local_002e64bc_r0_1, word_f8, 0xf8);

inline constexpr guest::Function<0x002e6368, u32(u32, u32, u32, u32)> EffectHandle__kill;

u32 EffectHandle__reset(gptr<EffectHandle> effect_handle, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    EffectHandle__kill(effect_handle.addr(), r1, r2, r3);
    effect_handle->byte_14 = 0;
    gptr<Local_002e64bc_r0_1> r0_1 = gptr<Local_002e64bc_r0_1>(effect_handle->word_c);
    if (r0_1.addr() != 0) {
        if (effect_handle->word_10 != r0_1->word_c) {
            r0_1 = gptr<Local_002e64bc_r0_1>(0u);
        }
    } else {
        r0_1 = gptr<Local_002e64bc_r0_1>(0u);
    }
    if (r0_1.addr() != 0) {
        r0_1->word_f8 = 0;
    }
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_002e64bc
GUEST_EXPORT_FRAMED(0x002e64bc, d_002e64bc::EffectHandle__reset, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e668c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the effect's position when the handle still has one.
namespace d_002e668c {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

inline constexpr guest::Function<0x0054da5c, u32(u32, u32, u32, u32)> EmitterSet__set_matrix;

u32 EffectHandle__get_position(gptr<EffectHandle> effect_handle, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = effect_handle->word_c;
    if (r2_1 != 0) {
        r3 = *gptr<u32>(r2_1 + 0xcu);
        r0_1 = effect_handle->word_10 == r3 ? r2_1 : 0u;
    } else {
        r0_1 = 0u;
    }
    if (r0_1 == 0) {
        return r0_1;
    }
    return EmitterSet__set_matrix(r0_1, guest::cpu()->r[1], r2_1, r3);
}

}  // namespace d_002e668c
GUEST_EXPORT(0x002e668c, d_002e668c::EffectHandle__get_position);

// f_002e6808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the float at +0x198 of the effect.
namespace d_002e6808 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);

struct __attribute__((packed)) Local_002e6808_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x188];  // (not used here)
    float float_198;
};
GUEST_OFFSET(Local_002e6808_r1_1, word_c, 0xc);
GUEST_OFFSET(Local_002e6808_r1_1, float_198, 0x198);


u32 EffectHandle__set_float_198(gptr<EffectHandle> effect_handle, float S0) {
    u32 r0 = effect_handle.addr();
    gptr<Local_002e6808_r1_1> r1_1 = gptr<Local_002e6808_r1_1>(effect_handle->word_c);
    if (r1_1.addr() != 0) {
        r0 = effect_handle->word_10;
        if (r0 != r1_1->word_c) {
            r1_1 = gptr<Local_002e6808_r1_1>(0u);
        }
    } else {
        r1_1 = gptr<Local_002e6808_r1_1>(0u);
    }
    if (r1_1.addr() != 0) {
        r1_1->float_198 = S0;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0;
}

}  // namespace d_002e6808
GUEST_EXPORT(0x002e6808, d_002e6808::EffectHandle__set_float_198);

// f_002e6878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the effect's rotation (+0x18c) and marks it rotated (bit 2 of +0x14).
namespace d_002e6878 {

struct __attribute__((packed)) EffectHandle {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(EffectHandle, word_c, 0xc);
GUEST_OFFSET(EffectHandle, word_10, 0x10);
GUEST_OFFSET(EffectHandle, byte_14, 0x14);

struct __attribute__((packed)) Local_002e6878_r1_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_002e6878_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_002e6878_r1_2, float_4, 0x4);
GUEST_OFFSET(Local_002e6878_r1_2, float_8, 0x8);


void EffectHandle__set_rotation_xyz(gptr<EffectHandle> effect_handle, float S0, float S1, float S2) {
    u32 r1_1 = effect_handle->word_c;
    if (r1_1 != 0 && effect_handle->word_10 == *gptr<u32>(r1_1 + 0xcu)) {
        goto L_2e6898;
    }
    r1_1 = 0u;
L_2e6898:;
    if (r1_1 == 0) {
        return;
    }
    gptr<Local_002e6878_r1_2> r1_2 = gptr<Local_002e6878_r1_2>(r1_1 + 0x18cu);
    r1_2->float_0 = S0;
    r1_2->float_4 = S1;
    r1_2->float_8 = S2;
    effect_handle->byte_14 = u8(u32(effect_handle->byte_14) | 4u);
}

}  // namespace d_002e6878
GUEST_EXPORT(0x002e6878, d_002e6878::EffectHandle__set_rotation_xyz);

// f_002e6944: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a particle handle: unlinks it from the pending effect handles if it was queued.
namespace d_002e6944 {

inline constexpr u32 vtable_SeadParticleHandle_rec = 0x008f39ecu;
inline constexpr u32 pending_effect_handles_address = 0x00abe0acu;
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> unlink_from_ends;

u32 SeadParticleHandle__destructor(gptr<SeadParticleHandle_rec> sead_particle_handle_rec) {
    u32 r1_1 = sead_particle_handle_rec->byte_14;
    sead_particle_handle_rec->vtable = vtable_SeadParticleHandle_rec;
    if ((r1_1 & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return sead_particle_handle_rec.addr();
    }
    unlink_from_ends(pending_effect_handles_address, sead_particle_handle_rec.addr());
    u32 r1_2 = u32(sead_particle_handle_rec->byte_14) & ~1u;
    sead_particle_handle_rec->byte_14 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return sead_particle_handle_rec.addr();
}

}  // namespace d_002e6944
GUEST_EXPORT_FRAMED(0x002e6944, d_002e6944::SeadParticleHandle__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e69cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the 30 bytes of a ring buffer (data +0, size +4, start +8, count +0xc) in order, padding with 0xff, plus its
// trailing word and two bytes.
namespace d_002e69cc {

struct __attribute__((packed)) ByteRing30 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u8 byte_24;
    u8 byte_25;
};
GUEST_OFFSET(ByteRing30, word_20, 0x20);
GUEST_OFFSET(ByteRing30, byte_24, 0x24);
GUEST_OFFSET(ByteRing30, byte_25, 0x25);

struct __attribute__((packed)) Local_002e69cc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e69cc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002e69cc_ea_1, word_4, 0x4);

struct __attribute__((packed)) ByteRing30CopyFromArg1 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x20];  // (not used here)
    u32 word_30;
    u8 byte_34;
    u8 byte_35;
};
GUEST_OFFSET(ByteRing30CopyFromArg1, word_0, 0x0);
GUEST_OFFSET(ByteRing30CopyFromArg1, word_c, 0xc);
GUEST_OFFSET(ByteRing30CopyFromArg1, word_30, 0x30);
GUEST_OFFSET(ByteRing30CopyFromArg1, byte_34, 0x34);
GUEST_OFFSET(ByteRing30CopyFromArg1, byte_35, 0x35);


void ByteRing30__copy_from(gptr<ByteRing30> byte_ring30, gptr<ByteRing30CopyFromArg1> r1) {
    u32 r0 = byte_ring30.addr();
    u32 r3_2 = 0;
    u32 i = 0u;
    u32 r12 = 0xffu;
    do {
        u32 r3_1 = r1->word_c;
        u32 zf_1 = r3_1 == i;
        if (zf_1 || s32(r3_1) < s32(i)) {
            *gptr<u8>(r0 + i) = u8(r12);
        } else {
            if (!(r3_1 >= i) || zf_1) {
                r3_2 = r1->word_0;
            } else {
                gptr<Local_002e69cc_ea_1> ea_1 = gptr<Local_002e69cc_ea_1>(r1.addr() + 4u);
                u32 r4_1 = ea_1->word_0;
                u32 r3_3 = ea_1->word_4 + i;
                if (s32(r4_1) <= s32(r3_3)) {
                    r3_3 -= r4_1;
                }
                r3_2 = r3_3 + r1->word_0;
            }
            *gptr<u8>(r0 + i) = *gptr<u8>(r3_2);
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0x1e);
    byte_ring30->word_20 = r1->word_30;
    byte_ring30->byte_24 = r1->byte_34;
    u32 r1_1 = r1->byte_35;
    byte_ring30->byte_25 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_002e69cc
GUEST_EXPORT_FRAMED(0x002e69cc, d_002e69cc::ByteRing30__copy_from, 0x30);  // pushes {r4, r5} first, as the original

// f_002e6a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the 30 bytes with 0xff and clears the trailing fields.
namespace d_002e6a3c {

struct __attribute__((packed)) ByteRing30 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u8 byte_24;
    u8 byte_25;
};
GUEST_OFFSET(ByteRing30, word_20, 0x20);
GUEST_OFFSET(ByteRing30, byte_24, 0x24);
GUEST_OFFSET(ByteRing30, byte_25, 0x25);

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> set_bytes;

u32 ByteRing30__clear(gptr<ByteRing30> byte_ring30) {
    byte_ring30->word_20 = 0;
    byte_ring30->byte_25 = 1;
    byte_ring30->byte_24 = 0;
    set_bytes(byte_ring30.addr(), 0x1eu, 0xffu);
    return byte_ring30.addr();
}

}  // namespace d_002e6a3c
GUEST_EXPORT_FRAMED(0x002e6a3c, d_002e6a3c::ByteRing30__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e764c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the sound at +0x18 when the object says it is playing (+0xf4).
namespace d_002e764c {

struct __attribute__((packed)) StopSoundWhenPlayingArg0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0xd8];  // (not used here)
    u8 byte_f4;
};
GUEST_OFFSET(StopSoundWhenPlayingArg0, word_18, 0x18);
GUEST_OFFSET(StopSoundWhenPlayingArg0, byte_f4, 0xf4);

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;

void stop_sound_when_playing(gptr<StopSoundWhenPlayingArg0> arg0) {
    if (arg0->byte_f4 == 0) {
        return;
    }
    u32 r0_1 = arg0->word_18;
    if (r0_1 == 0) {
        return;
    }
    BasicSound__stop(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002e764c
GUEST_EXPORT(0x002e764c, d_002e764c::stop_sound_when_playing);

// f_002e7e20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the tune player: picks the town tune (the 16 notes at +0x738 of the sound system) or, when it has fewer than
// 5 real notes (not 0xe or 0xf), a default tune, and resets the playback position.
namespace d_002e7e20 {

struct __attribute__((packed)) TownTunePlayer {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
    u8 unknown_a[0xe];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x1a];  // (not used here)
    u8 byte_36;
    u8 unknown_37[0x6];  // (not used here)
    u8 byte_3d;
};
GUEST_OFFSET(TownTunePlayer, byte_9, 0x9);
GUEST_OFFSET(TownTunePlayer, word_18, 0x18);
GUEST_OFFSET(TownTunePlayer, byte_36, 0x36);
GUEST_OFFSET(TownTunePlayer, byte_3d, 0x3d);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x002e7f04, u32(u32, u32, u32, u32)> TownTunePlayer__randomize;
inline constexpr guest::Function<0x0071a040, u32(u32, u32, u32, u32)> entry_16_83b146;

void TownTunePlayer__start(gptr<TownTunePlayer> town_tune_player) {
    u32 r0 = town_tune_player.addr();
    u32 r4 = r0;
    u32 r5 = 0u;
    if (town_tune_player->byte_3d != 0) {
        town_tune_player->byte_9 = u8(r5);
        town_tune_player->byte_36 = u8(r5);
    } else if (town_tune_player->byte_36 != 0) {
        town_tune_player->byte_36 = u8(r5);
    } else if (town_tune_player->word_18 == 0) {
        town_tune_player->byte_9 = u8(r5);
    } else {
        town_tune_player->byte_9 = u8(u32(town_tune_player->byte_9 == 0));
    }
    u32 r1 = 0u;
    u32 r2 = 0x10u;
    u32 r6 = *sound_system;
    u32 r3 = r6 + 0x738u;
    r0 = r3;
    do {
        u32 r12_1 = *gptr<u8>(r0);
        r0 += 1u;
        if (r12_1 != 0xeu && r12_1 != 0xfu) {
            r1 = r1 + 1u & 0xffu;
        }
        r2 -= 1u;
        guest::preempt();
    } while (r2 != 0);
    if (r1 < 5u) {
        u32 r0_2 = entry_16_83b146(r6 + 0x68cu, 2u, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = r0_2;
    }
    u32 r0_3 = *gptr<u8>(r4 + 9u);
    *gptr<u32>(r4 + 0x18u) = r3;
    if (r0_3 == 0) {
        TownTunePlayer__randomize(r4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    } else {
        *gptr<u8>(r4 + 0x15u) = 0x10;
    }
    *gptr<u32>(r4 + 0xcu) = r5;
    *gptr<u32>(r4 + 0x10u) = r5;
    *gptr<u8>(r4 + 0x14u) = 1;
    *gptr<u8>(r4 + 0x3cu) = u8(r5);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002e7e20
GUEST_EXPORT_FRAMED(0x002e7e20, d_002e7e20::TownTunePlayer__start, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e7f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the tune with random variations (when not repeating the plain tune).
namespace d_002e7f04 {

struct __attribute__((packed)) TownTunePlayer {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 byte_1c;
};
GUEST_OFFSET(TownTunePlayer, word_18, 0x18);
GUEST_OFFSET(TownTunePlayer, byte_1c, 0x1c);

struct __attribute__((packed)) Local_002e7f04_r0_13 {
    u8 unknown_0[0x2a];  // (not used here)
    u8 byte_2a;
    u8 byte_2b;
    u8 byte_2c;
    u8 byte_2d;
};
GUEST_OFFSET(Local_002e7f04_r0_13, byte_2a, 0x2a);
GUEST_OFFSET(Local_002e7f04_r0_13, byte_2b, 0x2b);
GUEST_OFFSET(Local_002e7f04_r0_13, byte_2c, 0x2c);
GUEST_OFFSET(Local_002e7f04_r0_13, byte_2d, 0x2d);

struct __attribute__((packed)) Local_002e7f04_r0_7 {
    u8 unknown_0[0x2a];  // (not used here)
    u8 byte_2a;
    u8 byte_2b;
};
GUEST_OFFSET(Local_002e7f04_r0_7, byte_2a, 0x2a);
GUEST_OFFSET(Local_002e7f04_r0_7, byte_2b, 0x2b);

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;

struct __attribute__((packed)) TownTunePlayerRandomizeFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(TownTunePlayerRandomizeFrame, word_0, 0x0);
GUEST_OFFSET(TownTunePlayerRandomizeFrame, word_4, 0x4);
GUEST_OFFSET(TownTunePlayerRandomizeFrame, word_8, 0x8);
GUEST_OFFSET(TownTunePlayerRandomizeFrame, word_c, 0xc);
GUEST_SIZE(TownTunePlayerRandomizeFrame, 0x14);

void TownTunePlayer__randomize(gptr<TownTunePlayer> town_tune_player) {
    guest::StackFrameOf<TownTunePlayerRandomizeFrame> frame;  // the original's stack frame
    u32 i = town_tune_player.addr();
    u32 res_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r3 = 0u;
    u32 r5 = i;
    town_tune_player->byte_1c = u8(r3);
    frame->word_0 = r3;
    frame->word_4 = r3;
    frame->word_8 = r3;
    frame->word_c = r3;
    i = town_tune_player->word_18;
    u32 r1 = 0x10u;
    u32 r12 = frame.at(0).addr();
    do {
        u32 r2_1 = *gptr<u8>(i);
        if (r2_1 < 0xdu) {
            *gptr<u8>(r12 + r2_1) = u8(u32(*gptr<u8>(r12 + r2_1)) + 1u);
        }
        res_1 = r1 - 1u;
        r1 = res_1;
        i += 1u;
        guest::preempt();
    } while (res_1 != 0);
    i = 0u;
    r1 = r5 + 0x1du;
    do {
        r2_2 = *gptr<u8>(r12 + i);
        if (r2_2 != 0) {
            *gptr<u8>(u32(*gptr<u8>(r5 + 0x1cu)) + r1) = u8(i);
            r2_2 = u32(*gptr<u8>(r5 + 0x1cu)) + 1u;
            *gptr<u8>(r5 + 0x1cu) = u8(r2_2);
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xd);
    u32 r1_1 = *gptr<u8>(r5 + 0x1cu);
    if (r1_1 == 0) {
        r1_1 = 1u;
        *gptr<u8>(r5 + 0x1cu) = u8(r1_1);
        *gptr<u8>(r5 + 0x1du) = 3;
    }
    *gptr<u8>(r5 + 0x15u) = u8(r3);
    u32 random = random_below(7u, r1_1, r2_2, r3);
    u32 r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xcu;
    if (s32(random) >= 3) {
        if (s32(random) < 6) {
            r0_2 = 8u;
        } else if (s32(random) < 7) {
            r0_2 = 4u;
        } else {
            if (*gptr<u8>(r5 + 0x15u) == 0) {
                goto L_2e7fc0;
            }
            goto L_2e7ff4;
        }
        *gptr<u8>(r5 + 0x15u) = u8(r0_2);
        goto L_2e7ff4;
    }
L_2e7fc0:;
    *gptr<u8>(r5 + 0x15u) = u8(r1);
L_2e7ff4:;
    u32 r0_3 = *gptr<u8>(r5 + 0x15u);
    u32 r6 = 0u;
    if (r0_3 >= 0u && r0_3 != 0) {
        u32 r9 = 0x83a954u;
        u32 r8 = 0xffu;
        u32 r7 = r9 + 3u;
        do {
            u32 random_2 = random_below(7u, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r1 = random_2;
            i = 0u;
            u32 j = i;
            do {
                r2 = *gptr<u8>(r9 + j);
                i = i + r2 & 0xffu;
                if (s32(r1) < s32(i)) {
                    r3 = *gptr<u8>(r5 + 0x15u);
                    r2 = u32(*gptr<u8>(r7 + j)) + r6;
                    if (r2 <= r3) {
                        if (r6 != 0 && *gptr<u8>(r5 + r6 + 0x29u) != 0xffu && j == 2u) {
                            break;
                        }
                        if (j != 0) {
                            if (j == 1u) {
                                u32 r0_5 = *gptr<u8>(r5 + 0x1cu);
                                u32 random_3 = random_below(r0_5, r1, r2, r3);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                r1 = *gptr<u8>(random_3 + r5 + 0x1du);
                                gptr<Local_002e7f04_r0_7> r0_7 = gptr<Local_002e7f04_r0_7>(r5 + r6);
                                r0_7->byte_2a = u8(r1);
                                r0_7->byte_2b = u8(r8);
                            } else if (j == 2u) {
                                u32 r0_8 = *gptr<u8>(r5 + 0x1cu);
                                u32 random_4 = random_below(r0_8, r1, r2, r3);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                r1 = r5 + r6;
                                u32 r0_10 = *gptr<u8>(random_4 + r5 + 0x1du);
                                *gptr<u8>(r1 + 0x2au) = u8(r0_10);
                                *gptr<u8>(r1 + 0x2bu) = u8(r0_10);
                            }
                        } else {
                            u32 r0_11 = *gptr<u8>(r5 + 0x1cu);
                            u32 random_5 = random_below(r0_11, r1, r2, r3);
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            r1 = *gptr<u8>(random_5 + r5 + 0x1du);
                            gptr<Local_002e7f04_r0_13> r0_13 = gptr<Local_002e7f04_r0_13>(r5 + r6);
                            r0_13->byte_2a = u8(r1);
                            r0_13->byte_2b = u8(r8);
                            r0_13->byte_2c = u8(r8);
                            r0_13->byte_2d = u8(r8);
                        }
                        r6 = u32(*gptr<u8>(r7 + j)) + r6 & 0xffu;
                        break;
                    }
                }
                j += 1u;
                guest::preempt();
            } while (s32(j) < 3);
            guest::preempt();
        } while (*gptr<u8>(r5 + 0x15u) > r6);
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002e7f04
GUEST_EXPORT_FRAMED(0x002e7f04, d_002e7f04::TownTunePlayer__randomize, 0x43f0);  // pushes {j, r5, r6, r7, r8, r9, lr} first, as the original

// f_002e8444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the tune player, with a 120 tempo and its 12 volumes at 100.
namespace d_002e8444 {

struct __attribute__((packed)) TownTunePlayer {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0x2];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u8 byte_1c;
    u32 word_1d;
    u32 word_21;
    u32 word_25;
    u8 byte_29;
    u8 unknown_2a[0xc];  // (not used here)
    u8 byte_36;
    u8 unknown_37[0x1];  // (not used here)
    u32 word_38;
    u8 byte_3c;
    u8 byte_3d;
    u8 unknown_3e[0x2];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(TownTunePlayer, word_0, 0x0);
GUEST_OFFSET(TownTunePlayer, word_4, 0x4);
GUEST_OFFSET(TownTunePlayer, byte_8, 0x8);
GUEST_OFFSET(TownTunePlayer, byte_9, 0x9);
GUEST_OFFSET(TownTunePlayer, word_c, 0xc);
GUEST_OFFSET(TownTunePlayer, word_10, 0x10);
GUEST_OFFSET(TownTunePlayer, byte_14, 0x14);
GUEST_OFFSET(TownTunePlayer, byte_15, 0x15);
GUEST_OFFSET(TownTunePlayer, word_18, 0x18);
GUEST_OFFSET(TownTunePlayer, byte_1c, 0x1c);
GUEST_OFFSET(TownTunePlayer, word_1d, 0x1d);
GUEST_OFFSET(TownTunePlayer, word_21, 0x21);
GUEST_OFFSET(TownTunePlayer, word_25, 0x25);
GUEST_OFFSET(TownTunePlayer, byte_29, 0x29);
GUEST_OFFSET(TownTunePlayer, byte_36, 0x36);
GUEST_OFFSET(TownTunePlayer, word_38, 0x38);
GUEST_OFFSET(TownTunePlayer, byte_3c, 0x3c);
GUEST_OFFSET(TownTunePlayer, byte_3d, 0x3d);
GUEST_OFFSET(TownTunePlayer, word_40, 0x40);

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> set_bytes;

u32 TownTunePlayer__TownTunePlayer(gptr<TownTunePlayer> town_tune_player) {
    town_tune_player->word_0 = 0;
    town_tune_player->word_4 = 0;
    town_tune_player->byte_8 = 0;
    town_tune_player->byte_9 = 0;
    town_tune_player->word_c = 0;
    town_tune_player->word_10 = 0;
    town_tune_player->byte_14 = 0;
    town_tune_player->byte_15 = 0;
    town_tune_player->word_18 = 0;
    town_tune_player->byte_1c = 0;
    town_tune_player->byte_36 = 0;
    town_tune_player->word_38 = 0x78;
    town_tune_player->byte_3c = 0;
    town_tune_player->byte_3d = 0;
    town_tune_player->word_40 = 0;
    town_tune_player->word_1d = 0;
    town_tune_player->word_21 = 0;
    town_tune_player->word_25 = 0;
    town_tune_player->byte_29 = 0;
    set_bytes(town_tune_player.addr() + 0x2au, 0xcu, 0x64u);
    return town_tune_player.addr();
}

}  // namespace d_002e8444
GUEST_EXPORT_FRAMED(0x002e8444, d_002e8444::TownTunePlayer__TownTunePlayer, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e8ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an insect or fish sound object: a sound object base with one sound slot, volume 1.
namespace d_002e8ce8 {

struct __attribute__((packed)) Local_002e8ce8_ea_1 {
    u32 vtable;
    u32 word_4;
    u8 unknown_8[0x54];  // (not used here)
    u16 half_5c;
    u8 unknown_5e[0x2];  // (not used here)
    float float_60;
    u8 byte_64;
};
GUEST_OFFSET(Local_002e8ce8_ea_1, vtable, 0x0);
GUEST_OFFSET(Local_002e8ce8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002e8ce8_ea_1, half_5c, 0x5c);
GUEST_OFFSET(Local_002e8ce8_ea_1, float_60, 0x60);
GUEST_OFFSET(Local_002e8ce8_ea_1, byte_64, 0x64);

inline constexpr u32 vtable_SoundObjInsectFish = 0x008f3a64u;
inline constexpr u32 vtable_SoundObj_1_ = 0x008f8d88u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> SoundObjBase__SoundObjBase;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundObjInsectFish__construct(gptr<SoundObj_1_> sound_obj, u32 r1, u32 r2, u32 r3, float S0) {
    SoundObjBase__SoundObjBase(sound_obj.addr(), r1, r2, r3);
    sound_obj->vtable = vtable_SoundObj_1_;
    u32 r0_4 = for_each_element(for_each_element(sound_obj.addr() + 0x44u, 0x131800u, 4u, 1u) + 4u, 0x1287a8u, 0x14u, 1u);
    float S0_3 = 1.0f;
    gptr<Local_002e8ce8_ea_1> ea_1 = gptr<Local_002e8ce8_ea_1>(r0_4 - 0x48u);
    ea_1->vtable = vtable_SoundObjInsectFish;
    ea_1->half_5c = 0;
    ea_1->float_60 = S0_3;
    ea_1->byte_64 = 0;
    ea_1->word_4 = 6;
    guest::cpu()->s[0] = S0_3;
    return ea_1.addr();
}

}  // namespace d_002e8ce8
GUEST_EXPORT_FRAMED(0x002e8ce8, d_002e8ce8::SoundObjInsectFish__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e8dfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the town tree's sound (kind 8): the sound for its size, or the default one.
namespace d_002e8dfc {

inline constexpr guest::Function<0x0020b0a4, u32(u32, u32, u32, u32)> SoundObjSymbolTree__play;

u32 SoundObjSymbolTree__start(gptr<SoundObjSymbolTree> sound_obj_symbol_tree) {
    sound_obj_symbol_tree->kind = 8;
    u32 r3_1 = s8(sound_obj_symbol_tree->byte_78);
    u32 r3_2 = s32(r3_1) >= 0 ? r3_1 + 0x1000789u : 0x100038bu;
    return SoundObjSymbolTree__play(sound_obj_symbol_tree.addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3_2);
}

}  // namespace d_002e8dfc
GUEST_EXPORT(0x002e8dfc, d_002e8dfc::SoundObjSymbolTree__start);

// f_002e9044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the town tree's sound object: a held-item sound object, no size yet.
namespace d_002e9044 {

struct __attribute__((packed)) Local_002e9044_r0_1 {
    u32 vtable;
    u8 unknown_4[0x6c];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0x3];  // (not used here)
    u32 word_74;
    u8 byte_78;
    u8 byte_79;
};
GUEST_OFFSET(Local_002e9044_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_002e9044_r0_1, byte_70, 0x70);
GUEST_OFFSET(Local_002e9044_r0_1, word_74, 0x74);
GUEST_OFFSET(Local_002e9044_r0_1, byte_78, 0x78);
GUEST_OFFSET(Local_002e9044_r0_1, byte_79, 0x79);

inline constexpr u32 vtable_SoundObjSymbolTree = 0x008f3aa4u;
inline constexpr guest::Function<0x0020b280, u32(u32, u32, u32, u32)> SoundObjHold__construct;

u32 SoundObjSymbolTree__SoundObjSymbolTree(u32 sound_obj_symbol_tree, u32 r1, u32 r2, u32 r3) {
    gptr<Local_002e9044_r0_1> r0_1 = gptr<Local_002e9044_r0_1>(SoundObjHold__construct(sound_obj_symbol_tree, r1, r2, r3));
    r0_1->vtable = vtable_SoundObjSymbolTree;
    r0_1->byte_70 = 0;
    r0_1->word_74 = 0;
    r0_1->byte_78 = 0xff;
    r0_1->byte_79 = 0;
    return r0_1.addr();
}

}  // namespace d_002e9044
GUEST_EXPORT_FRAMED(0x002e9044, d_002e9044::SoundObjSymbolTree__SoundObjSymbolTree, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e9118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a melody sound object (unless started): kind 10 in the scenes so flagged, then the base, and binds
// its melody players.
namespace d_002e9118 {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32)> SoundObjBase__virtual_2;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;

u32 SoundObjWithMelody__start(gptr<SoundObjWithMelody> sound_obj_with_melody, u32 r1, u32 r2) {
    u32 r0_1 = sound_obj_with_melody->started;
    if (r0_1 == 0) {
        u32 scene_2 = current_scene_id(r0_1, r1, r2, guest::cpu()->r[3]);
        u32 scene_flagged_2 = scene_has_flags(8u, scene_2);
        if (scene_flagged_2 != 0) {
            sound_obj_with_melody->kind = 0xa;
        }
        SoundObjBase__virtual_2(sound_obj_with_melody.addr(), r1, r2);
        r1 = guest::cpu()->r[1];
        sound_obj_with_melody->word_a8 = sound_obj_with_melody.addr();
        r0_1 = sound_obj_with_melody.addr() + 0xb8u;
        sound_obj_with_melody->word_cc = sound_obj_with_melody.addr();
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_002e9118
GUEST_EXPORT_FRAMED(0x002e9118, d_002e9118::SoundObjWithMelody__start, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e9268: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops a melody sound object (when started): its tune and melody players, its sound, then the base.
namespace d_002e9268 {

inline constexpr guest::Function<0x00136cc8, u32(u32)> detach_from_parent;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> SoundObjBase__stop;
inline constexpr guest::Function<0x0032c348, u32(u32, u32, u32, u32)> TunePlayer__stop_b;
inline constexpr guest::Function<0x00342ed0, u32(u32)> SoundObjMelody__stop;

u32 SoundObjWithMelody__stop(gptr<SoundObjWithMelody> sound_obj_with_melody) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = sound_obj_with_melody->started;
    if (r0_1 != 0) {
        sound_obj_with_melody->word_a8 = 0;
        TunePlayer__stop_b(sound_obj_with_melody.addr() + 0x5cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        sound_obj_with_melody->word_cc = 0;
        SoundObjMelody__stop(sound_obj_with_melody.addr() + 0xb8u);
        detach_from_parent(sound_obj_with_melody.addr() + 0x44u);
        frame.release();
        return SoundObjBase__stop(sound_obj_with_melody.addr(), guest::cpu()->r[1]);
    }
    return r0_1;
}

}  // namespace d_002e9268
GUEST_EXPORT(0x002e9268, d_002e9268::SoundObjWithMelody__stop);

// f_002e92b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a melody sound object: a sound object base with one sound slot and two positioned melody
// players.
namespace d_002e92b0 {

inline constexpr u32 vtable_SoundObjWithMelody = 0x008f3ae4u;
inline constexpr u32 vtable_SoundObj_1_ = 0x008f8d88u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> SoundObjBase__SoundObjBase;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00321c84, u32(u32)> SoundMelodyPlayerPos__SoundMelodyPlayerPos;
inline constexpr guest::Function<0x003425ec, u32(u32)> SoundMelodyPlayerOneSeqPos__SoundMelodyPlayerOneSeqPos;

u32 SoundObjWithMelody__construct(gptr<SoundObj_1_> sound_obj, u32 r1, u32 r2, u32 r3) {
    SoundObjBase__SoundObjBase(sound_obj.addr(), r1, r2, r3);
    sound_obj->vtable = vtable_SoundObj_1_;
    u32 r0_4 = for_each_element(for_each_element(sound_obj.addr() + 0x44u, 0x131800u, 4u, 1u) + 4u, 0x1287a8u, 0x14u, 1u);
    *gptr<u32>(r0_4 - 0x48u) = vtable_SoundObjWithMelody;
    u32 sound_melody_player_pos = r0_4 + 0x14u;
    SoundMelodyPlayerPos__SoundMelodyPlayerPos(sound_melody_player_pos);
    u32 r0_6 = sound_melody_player_pos + 0x5cu;
    SoundMelodyPlayerOneSeqPos__SoundMelodyPlayerOneSeqPos(r0_6);
    return r0_6 - 0xb8u;
}

}  // namespace d_002e92b0
GUEST_EXPORT_FRAMED(0x002e92b0, d_002e92b0::SoundObjWithMelody__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e9328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a melody sound object: stops it (as SoundObjWithMelody__stop), then its melody players and sound.
namespace d_002e9328 {

inline constexpr u32 vtable_SoundObjWithMelody = 0x008f3ae4u;
inline constexpr u32 vtable_SoundMelodyPlayerOneSeqBase = 0x008f701cu;
inline constexpr u32 vtable_SoundObj_1_ = 0x008f8d88u;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x0013d7cc, u32(u32)> SoundMelodyPlayerBase__destructor;
inline constexpr guest::Function<0x0020aedc, u32(u32)> SoundObjBase__stop;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x0032c348, u32(u32, u32, u32, u32)> TunePlayer__stop_b;
inline constexpr guest::Function<0x00342ed0, u32(u32)> SoundObjMelody__stop;

u32 SoundObjWithMelody__destructor(gptr<SoundObjWithMelody> sound_obj_with_melody, u32 r1, u32 r2, u32 r3) {
    sound_obj_with_melody->vtable = vtable_SoundObjWithMelody;
    if (sound_obj_with_melody->started != 0) {
        sound_obj_with_melody->word_a8 = 0;
        TunePlayer__stop_b(sound_obj_with_melody.addr() + 0x5cu, r1, r2, r3);
        sound_obj_with_melody->word_cc = 0;
        SoundObjMelody__stop(sound_obj_with_melody.addr() + 0xb8u);
        detach_from_parent(sound_obj_with_melody.addr() + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        SoundObjBase__stop(sound_obj_with_melody.addr());
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    sound_obj_with_melody->sound_melody_player_one_seq_base_vtable = vtable_SoundMelodyPlayerOneSeqBase;
    detach_from_parent(sound_obj_with_melody.addr() + 0xc0u, vtable_SoundMelodyPlayerOneSeqBase, r2, r3);
    SoundMelodyPlayerBase__destructor(sound_obj_with_melody.addr() + 0x5cu);
    u32 sound_obj_base = sound_obj_with_melody.addr() + 0u;
    *gptr<u32>(sound_obj_base) = vtable_SoundObj_1_;
    detach_from_parent(sound_obj_base + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    SoundObjBase__stop(sound_obj_base);
    u32 r0_7 = sound_obj_base + 0x44u;
    detach_from_parent(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_array_elements(r0_7, 0x137d74u, 4u, 1u);
    return sound_obj_base;
}

}  // namespace d_002e9328
GUEST_EXPORT_FRAMED(0x002e9328, d_002e9328::SoundObjWithMelody__destructor, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e9954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the slot's sound handle (index below 0x30) and marks the slot free (-1).
namespace d_002e9954 {

struct __attribute__((packed)) SoundObjSlot {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SoundObjSlot, word_0, 0x0);
GUEST_OFFSET(SoundObjSlot, word_4, 0x4);
GUEST_OFFSET(SoundObjSlot, word_8, 0x8);

inline constexpr guest::Function<0x002a4c30, u32(u32, u32)> SlotTable48__remove;

void SoundObjSlot__release(gptr<SoundObjSlot> sound_obj_slot) {
    u32 r1_1 = sound_obj_slot->word_0;
    if (r1_1 >= 0x30u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    SlotTable48__remove(sound_obj_slot->word_8, r1_1);
    u32 r1_2 = ~0u;
    sound_obj_slot->word_8 = 0;
    sound_obj_slot->word_0 = r1_2;
    sound_obj_slot->word_4 = 0;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_002e9954
GUEST_EXPORT_FRAMED(0x002e9954, d_002e9954::SoundObjSlot__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e99d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a free slot (-1).
namespace d_002e99d0 {

struct __attribute__((packed)) SoundObjSlot {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u8 byte_1e;
    u8 byte_1f;
    u16 half_20;
    u16 half_22;
};
GUEST_OFFSET(SoundObjSlot, word_0, 0x0);
GUEST_OFFSET(SoundObjSlot, word_4, 0x4);
GUEST_OFFSET(SoundObjSlot, word_8, 0x8);
GUEST_OFFSET(SoundObjSlot, word_c, 0xc);
GUEST_OFFSET(SoundObjSlot, byte_10, 0x10);
GUEST_OFFSET(SoundObjSlot, word_14, 0x14);
GUEST_OFFSET(SoundObjSlot, word_18, 0x18);
GUEST_OFFSET(SoundObjSlot, half_1c, 0x1c);
GUEST_OFFSET(SoundObjSlot, byte_1e, 0x1e);
GUEST_OFFSET(SoundObjSlot, byte_1f, 0x1f);
GUEST_OFFSET(SoundObjSlot, half_20, 0x20);
GUEST_OFFSET(SoundObjSlot, half_22, 0x22);


void SoundObjSlot__SoundObjSlot(gptr<SoundObjSlot> sound_obj_slot) {
    sound_obj_slot->word_4 = 0;
    sound_obj_slot->word_0 = ~0u;
    sound_obj_slot->word_8 = 0;
    sound_obj_slot->word_c = 0;
    sound_obj_slot->byte_10 = 0;
    sound_obj_slot->word_14 = 0;
    sound_obj_slot->word_18 = 0;
    sound_obj_slot->half_1c = 0;
    sound_obj_slot->byte_1e = 0;
    sound_obj_slot->byte_1f = 0;
    sound_obj_slot->half_20 = u16(~4u);
    sound_obj_slot->half_22 = 0x13;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_002e99d0
GUEST_EXPORT(0x002e99d0, d_002e99d0::SoundObjSlot__SoundObjSlot);

// f_002e9a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the slot's handle and detaches it from its parent.
namespace d_002e9a14 {

struct __attribute__((packed)) SoundObjSlot {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SoundObjSlot, word_0, 0x0);
GUEST_OFFSET(SoundObjSlot, word_4, 0x4);
GUEST_OFFSET(SoundObjSlot, word_8, 0x8);

inline constexpr guest::Function<0x00136cc8, u32(u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x002a4c30, u32(u32, u32)> SlotTable48__remove;

u32 SoundObjSlot__destroy(gptr<SoundObjSlot> sound_obj_slot) {
    u32 r1_1 = sound_obj_slot->word_0;
    if (r1_1 < 0x30u) {
        SlotTable48__remove(sound_obj_slot->word_8, r1_1);
        r1_1 = ~0u;
        sound_obj_slot->word_8 = 0;
        sound_obj_slot->word_0 = r1_1;
        sound_obj_slot->word_4 = 0;
    }
    detach_from_parent(sound_obj_slot.addr() + 0xcu, r1_1);
    return sound_obj_slot.addr();
}

}  // namespace d_002e9a14
GUEST_EXPORT_FRAMED(0x002e9a14, d_002e9a14::SoundObjSlot__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e9d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears entry `index` of the four 6-byte entries at +0xc90.
namespace d_002e9d08 {

struct __attribute__((packed)) Local_002e9d08_r0_1 {
    u16 half_0;
    u16 half_2;
    u8 byte_4;
};
GUEST_OFFSET(Local_002e9d08_r0_1, half_0, 0x0);
GUEST_OFFSET(Local_002e9d08_r0_1, half_2, 0x2);
GUEST_OFFSET(Local_002e9d08_r0_1, byte_4, 0x4);


u32 clear_6_byte_entry_c90(u32 r0, u32 r1) {
    gptr<Local_002e9d08_r0_1> r0_1 = gptr<Local_002e9d08_r0_1>(r0 + ((r1 * 3u) << 1) + 0xc90u);
    r0_1->half_0 = 0;
    r0_1->half_2 = 0;
    r0_1->byte_4 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_002e9d08
GUEST_EXPORT(0x002e9d08, d_002e9d08::clear_6_byte_entry_c90);

// f_002e9d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 50 0x30-byte records (+8), the four 6-byte entries (+0xc90), the 50 16-byte entries (+0x968) and the two
// counts (+0xc88).
namespace d_002e9d28 {

struct __attribute__((packed)) Local_002e9d28_r0_2 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_002e9d28_r0_2, half_0, 0x0);
GUEST_OFFSET(Local_002e9d28_r0_2, half_2, 0x2);

inline constexpr guest::Function<0x0061532c, u32(u32, u32, u32, u32)> Record30__clear;
inline constexpr guest::Function<0x00615508, u32(u32, u32, u32, u32)> store_constants_615508;

void Record30Table__clear(u32 record30_table, u32 r1, u32 r2, u32 r3) {
    u32 r5 = record30_table;
    u32 i = 0u;
    do {
        Record30__clear(r5 + i * 0x30u + 8u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (i < 0x32u);
    gptr<Local_002e9d28_r0_2> r0_2 = gptr<Local_002e9d28_r0_2>(r5 + 0xc90u);
    u32 r6 = 0u;
    r0_2->half_0 = u16(r6);
    r2 = r5 + 0xc96u;
    r0_2->half_2 = u16(r6);
    *gptr<u8>(r5 + 0xc94u) = u8(r6);
    *gptr<u16>(r2) = u16(r6);
    r1 = r5 + 0xc9cu;
    *gptr<u16>(r2 + 2u) = u16(r6);
    *gptr<u8>(r5 + 0xc9au) = u8(r6);
    *gptr<u16>(r1) = u16(r6);
    r3 = r5 + 0xca2u;
    *gptr<u16>(r1 + 2u) = u16(r6);
    *gptr<u8>(r5 + 0xca0u) = u8(r6);
    *gptr<u16>(r3) = u16(r6);
    *gptr<u16>(r3 + 2u) = u16(r6);
    i = 0u;
    *gptr<u8>(r5 + 0xca6u) = u8(r6);
    do {
        store_constants_615508(r5 + (i << 4) + 0x968u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (i < 0x32u);
    *gptr<u32>(r5 + 0xc88u) = r6;
    *gptr<u32>(r5 + 0xc8cu) = r6;
}

}  // namespace d_002e9d28
GUEST_EXPORT_FRAMED(0x002e9d28, d_002e9d28::Record30Table__clear, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_002e9dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 50 records, the 50 16-byte entries and the four 6-byte entries, then resets the 16-byte entries.
namespace d_002e9dcc {

struct __attribute__((packed)) Record30Table {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Record30Table, word_0, 0x0);
GUEST_OFFSET(Record30Table, word_4, 0x4);

struct __attribute__((packed)) Local_002e9dcc_r0_5 {
    u8 unknown_0[0xc88];  // (not used here)
    u32 word_c88;
    u32 word_c8c;
};
GUEST_OFFSET(Local_002e9dcc_r0_5, word_c88, 0xc88);
GUEST_OFFSET(Local_002e9dcc_r0_5, word_c8c, 0xc8c);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00615508, u32(u32, u32, u32, u32)> store_constants_615508;

u32 Record30Table__Record30Table(gptr<Record30Table> record30_table) {
    u32 r0 = record30_table.addr();
    record30_table->word_0 = 0;
    record30_table->word_4 = 0;
    u32 r0_4 = for_each_element(for_each_element(r0 + 8u, 0x61537cu, 0x30u, 0x32u) + 0x960u, 0x615520u, 0x10u, 0x32u);
    gptr<Local_002e9dcc_r0_5> r0_5 = gptr<Local_002e9dcc_r0_5>(r0_4 - 0x968u);
    r0_5->word_c88 = 0;
    r0_5->word_c8c = 0;
    u32 r0_7 = for_each_element(r0_5.addr() + 0xc90u, 0x2e9cf0u, 6u, 4u);
    u32 r1 = guest::cpu()->r[1];
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r5 = r0_7 - 0xc90u;
    u32 i = 0u;
    do {
        store_constants_615508(r5 + (i << 4) + 0x968u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (i < 0x32u);
    return r5;
}

}  // namespace d_002e9dcc
GUEST_EXPORT_FRAMED(0x002e9dcc, d_002e9dcc::Record30Table__Record30Table, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_002e9e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Daily update of the contest ranking: resets it for a new contest, updates the schedule and sends the prizes.
namespace d_002e9e64 {

struct __attribute__((packed)) ContestRanking {
    u8 byte_0;
};
GUEST_OFFSET(ContestRanking, byte_0, 0x0);

struct __attribute__((packed)) Local_002e9e64_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e9e64_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002e9e64_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_002e9e64_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002e9e64_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002e9e64_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_002e9e64_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_002e9e64_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002e9e64_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002e9e64_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_002e9e64_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_002e9e64_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e9e64_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_002e9e64_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_002e9e64_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e9e64_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_002e9e64_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_002e9e64_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002e9e64_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_002e9e64_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_002e9e64_r9_1, word_8, 0x8);

inline constexpr guest::Function<0x002eab00, u32(u32, u32, u32, u32)> VillagerHouse__update_state;
inline constexpr guest::Function<0x002eaf8c, u32(u32, u32, u32, u32)> ContestRanking__reset;
inline constexpr guest::Function<0x002eb0b4, u32(u32)> ContestRanking__update_schedule;
inline constexpr guest::Function<0x002eb5d0, u32(u32, u32)> ContestRanking__send_prizes;
inline constexpr guest::Function<0x002eb830, u32(u32, u32, u32, u32)> PlayerHouse__refresh_items;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb338, u32(u32)> is_not_sentinel;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> words_not_less;
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> TimeStamp__advance;

struct __attribute__((packed)) ContestRankingUpdateFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x14];  // (not read or written by name)
    u32 word_2c;
    u8 unknown_30[0x30];  // (not read or written by name)
};
GUEST_OFFSET(ContestRankingUpdateFrame, word_0, 0x0);
GUEST_OFFSET(ContestRankingUpdateFrame, word_4, 0x4);
GUEST_OFFSET(ContestRankingUpdateFrame, word_14, 0x14);
GUEST_OFFSET(ContestRankingUpdateFrame, word_2c, 0x2c);
GUEST_SIZE(ContestRankingUpdateFrame, 0x60);

u32 ContestRanking__update(gptr<ContestRanking> contest_ranking, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ContestRankingUpdateFrame> frame;  // the original's stack frame
    u32 r0_15 = 0;
    u32 r5_1 = 0u;
    u32 r0_1 = contest_ranking->byte_0;
    if ((r0_1 & 1u) != 0) {
        u32 now_2 = game_time_now(r0_1, r1, r2, r3);
        u32 r8_1 = *gptr<u32>(now_2);
        gptr<Local_002e9e64_ea_1> ea_1 = gptr<Local_002e9e64_ea_1>(now_2 + 4u);
        u32 r6_1 = ea_1->word_0;
        u32 r7_1 = ea_1->word_4;
        make_adjusted_words(frame.at(0x14).addr(), contest_ranking.addr() + 9u);
        make_adjusted_words(frame.at(0x2c).addr(), contest_ranking.addr() + 0x11u);
        gptr<Local_002e9e64_ea_2> ea_2 = gptr<Local_002e9e64_ea_2>(frame.at(0x14).addr());
        u32 r0_5 = ea_2->word_0;
        u32 r1_3 = ea_2->word_4;
        u32 r2_3 = ea_2->word_8;
        gptr<Local_002e9e64_r9_1> r9_1 = gptr<Local_002e9e64_r9_1>(frame.at(8).addr());
        frame->word_0 = 0;
        r9_1->word_0 = r0_5;
        r9_1->word_4 = r1_3;
        r9_1->word_8 = r2_3;
        TimeStamp__advance(frame.at(8).addr(), 0u, 0x15u, 0u);
        frame->word_0 = r6_1;
        frame->word_4 = r7_1;
        u32 r0_8 = words_not_less(r9_1->word_0, r9_1->word_4, r9_1->word_8, r8_1);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_8 != 0) {
            u32 save_data = get_save_data(r0_8, guest::cpu()->r[1], r2, r3);
            u32 r0_11 = is_not_sentinel(save_data + 0x6e292u);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_11 != 0) {
                u32 save_data_2 = get_save_data(r0_11, guest::cpu()->r[1], r2, r3);
                make_adjusted_words(frame.at(0x38).addr(), save_data_2 + 0x6e292u);
                gptr<Local_002e9e64_ea_3> ea_3 = gptr<Local_002e9e64_ea_3>(frame.at(0x38).addr());
                u32 r0_14 = ea_3->word_0;
                u32 r1_9 = ea_3->word_4;
                u32 r2_7 = ea_3->word_8;
                frame->word_0 = r6_1;
                frame->word_4 = r7_1;
                r0_15 = words_not_less(r0_14, r1_9, r2_7, r8_1);
                if (r0_15 == 0) {
                    return r0_15;
                }
                gptr<Local_002e9e64_ea_4> ea_4 = gptr<Local_002e9e64_ea_4>(frame.at(0x18).addr());
                u32 r1_11 = ea_4->word_4;
                frame->word_0 = ea_4->word_0;
                frame->word_4 = r1_11;
                u32 r0_16 = words_not_less(r8_1, r6_1, r7_1, frame->word_14);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_16 != 0) {
                    gptr<Local_002e9e64_ea_5> ea_5 = gptr<Local_002e9e64_ea_5>(frame.at(0x30).addr());
                    u32 r1_12 = ea_5->word_4;
                    frame->word_0 = ea_5->word_0;
                    frame->word_4 = r1_12;
                    r0_15 = words_not_less(r8_1, r6_1, r7_1, frame->word_2c);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_15 != 0) {
                        return r0_15;
                    }
                }
                r5_1 = 1u;
            }
        }
    }
    ContestRanking__reset(contest_ranking.addr(), r5_1, r2, r3);
    ContestRanking__update_schedule(contest_ranking.addr());
    VillagerHouse__update_state(contest_ranking.addr(), 1u, 0u, 1u);
    ContestRanking__send_prizes(contest_ranking.addr(), 0u);
    r0_15 = contest_ranking->byte_0;
    if ((r0_15 & 1u) != 0 && (r0_15 & 0x80u) == 0) {
        frame.release();
        return PlayerHouse__refresh_items(contest_ranking.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return r0_15;
}

}  // namespace d_002e9e64
GUEST_EXPORT(0x002e9e64, d_002e9e64::ContestRanking__update);

// f_002e9fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes place `index` (0 to 2) of the ranking (identities +0x1a, 0x30-byte records +0xa4, scores +0x134, prizes
// +0x13a): the later places move up and the last is cleared.
namespace d_002e9fe4 {

struct __attribute__((packed)) Local_002e9fe4_r5_1 {
    u8 unknown_0[0x34];  // (not used here)
    u16 half_34;
    u16 half_36;
    u16 half_38;
};
GUEST_OFFSET(Local_002e9fe4_r5_1, half_34, 0x34);
GUEST_OFFSET(Local_002e9fe4_r5_1, half_36, 0x36);
GUEST_OFFSET(Local_002e9fe4_r5_1, half_38, 0x38);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x003084d0, u32(u32)> clear_identity_with_value;
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> copy_48_bytes;

struct __attribute__((packed)) ContestRankingRemoveAtFrame {
    u32 word_0;
};
GUEST_OFFSET(ContestRankingRemoveAtFrame, word_0, 0x0);
GUEST_SIZE(ContestRankingRemoveAtFrame, 0x4);

u32 ContestRanking__remove_at(u32 contest_ranking, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ContestRankingRemoveAtFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6_1 = contest_ranking + 0x13eu;
    u32 r7_1 = contest_ranking + 0x142u;
    gptr<Local_002e9fe4_r5_1> r5_1 = gptr<Local_002e9fe4_r5_1>(contest_ranking + 0x100u);
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_2ea04c;
        }
        if (r1 != 2u) {
            guest::cpu()->r[1] = r1;
            return contest_ranking;
        }
        goto L_2ea078;
    }
    copy_46_bytes(contest_ranking + 0x1au, contest_ranking + 0x48u, guest::cpu()->r[2], r3);
    copy_48_bytes(contest_ranking + 0xa4u, contest_ranking + 0xd4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5_1->half_34 = r5_1->half_36;
    Item__copy(contest_ranking + 0x13au, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = guest::cpu()->r[3];
L_2ea04c:;
    copy_46_bytes(contest_ranking + 0x48u, contest_ranking + 0x76u, guest::cpu()->r[2], r3);
    copy_48_bytes(contest_ranking + 0xd4u, contest_ranking + 0x104u, guest::cpu()->r[2], r3);
    r5_1->half_36 = r5_1->half_38;
    Item__copy(r6_1, r7_1, guest::cpu()->r[2], r3);
L_2ea078:;
    clear_identity_with_flags(contest_ranking + 0x76u);
    clear_identity_with_value(contest_ranking + 0x104u);
    r5_1->half_38 = 0;
    u32 r0_8 = frame.at(0).addr();
    Item__copy_b(r0_8, empty_item_address);
    Item__copy(r7_1, r0_8, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    return frame.at(0).addr();
}

}  // namespace d_002e9fe4
GUEST_EXPORT_FRAMED(0x002e9fe4, d_002e9fe4::ContestRanking__remove_at, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002ea0c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recomputes the ranking, then finishes it when it is in use (bit 0) and not locked (bit 7).
namespace d_002ea0c0 {

struct __attribute__((packed)) ContestRanking {
    u8 byte_0;
};
GUEST_OFFSET(ContestRanking, byte_0, 0x0);

inline constexpr guest::Function<0x002eab00, u32(u32, u32, u32, u32)> VillagerHouse__update_state;
inline constexpr guest::Function<0x002eb5d0, u32(u32, u32)> ContestRanking__send_prizes;
inline constexpr guest::Function<0x002eb830, u32(u32, u32, u32, u32)> PlayerHouse__refresh_items;

void ContestRanking__refresh(gptr<ContestRanking> contest_ranking, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    VillagerHouse__update_state(contest_ranking.addr(), 1u, 0u, 0u);
    ContestRanking__send_prizes(contest_ranking.addr(), r1);
    u32 r0_1 = contest_ranking->byte_0;
    if ((r0_1 & 1u) != 0 && (r0_1 & 0x80u) == 0) {
        frame.release();
        PlayerHouse__refresh_items(contest_ranking.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_002ea0c0
GUEST_EXPORT(0x002ea0c0, d_002ea0c0::ContestRanking__refresh);

// f_002ea10c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the places whose players are no longer valid, moving the later ones up.
namespace d_002ea10c {

struct __attribute__((packed)) ContestRanking {
    u8 unknown_0[0x134];  // (not used here)
    u16 half_134;
    u16 half_136;
    u16 half_138;
};
GUEST_OFFSET(ContestRanking, half_134, 0x134);
GUEST_OFFSET(ContestRanking, half_136, 0x136);
GUEST_OFFSET(ContestRanking, half_138, 0x138);

struct __attribute__((packed)) Local_002ea10c_r5_1 {
    u8 unknown_0[0x36];  // (not used here)
    u16 half_36;
    u16 half_38;
};
GUEST_OFFSET(Local_002ea10c_r5_1, half_36, 0x36);
GUEST_OFFSET(Local_002ea10c_r5_1, half_38, 0x38);

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32)> copy_48_bytes;

u32 ContestRanking__prune(gptr<ContestRanking> contest_ranking, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = contest_ranking.addr();
    u32 r12 = guest::cpu()->r[12];
    u32 r1_12 = 0;
    u32 r0_14 = 0;
    *frame.at<u32>(0x20) = r12;
    u32 is_villager = is_villager_record(r1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (is_villager != 0) {
        if (r3 >= 0x400u) {
            is_villager = 0u;
        } else {
            gptr<Local_002ea10c_r5_1> r5_1 = gptr<Local_002ea10c_r5_1>(r0 + 0x100u);
            u32 r7_1 = 1u;
            u32 r2_1 = contest_ranking->half_134;
            u32 zf_1 = r2_1 == r3;
            if (!zf_1) {
                is_villager = contest_ranking->half_136;
                zf_1 = is_villager == r3;
            }
            if (!zf_1) {
                r1_1 = contest_ranking->half_138;
                zf_1 = r1_1 == r3;
            }
            if (zf_1) {
                r7_1 = 0u;
            } else {
                if (r3 > r2_1) {
                    copy_46_bytes(r0 + 0x76u, r0 + 0x48u, r2_1);
                    copy_46_bytes(r0 + 0x48u, r0 + 0x1au, guest::cpu()->r[2]);
                    clear_identity_with_flags(r0 + 0x1au, guest::cpu()->r[1], guest::cpu()->r[2]);
                    copy_48_bytes(r0 + 0x104u, r0 + 0xd4u, guest::cpu()->r[2]);
                    copy_48_bytes(r0 + 0xd4u, r0 + 0xa4u, guest::cpu()->r[2]);
                    copy_48_bytes(r0 + 0xa4u, r1, guest::cpu()->r[2]);
                    u32 r0_8 = contest_ranking->half_136;
                    u32 r1_7 = contest_ranking->half_134;
                    contest_ranking->half_134 = u16(r3);
                    contest_ranking->half_138 = u16(r0_8);
                    contest_ranking->half_136 = u16(r1_7);
                    Item__copy(r0 + 0x142u, r0 + 0x13eu);
                    Item__copy(r0 + 0x13eu, r0 + 0x13au);
                    Item__copy(r0 + 0x13au, r2);
                    r1_1 = guest::cpu()->r[1];
                } else {
                    if (is_villager < r3) {
                        copy_46_bytes(r0 + 0x76u, r0 + 0x48u, r2_1);
                        clear_identity_with_flags(r0 + 0x48u, guest::cpu()->r[1], guest::cpu()->r[2]);
                        copy_48_bytes(r0 + 0x104u, r0 + 0xd4u, guest::cpu()->r[2]);
                        copy_48_bytes(r0 + 0xd4u, r1, guest::cpu()->r[2]);
                        u32 r0_13 = r5_1->half_36;
                        r5_1->half_36 = u16(r3);
                        r5_1->half_38 = u16(r0_13);
                        Item__copy(r0 + 0x142u, r0 + 0x13eu);
                        r1_12 = r2;
                        r0_14 = r0 + 0x13eu;
                    } else {
                        if (r1_1 >= r3) {
                            goto L_2ea28c;
                        }
                        clear_identity_with_flags(r0 + 0x76u, r1_1, r2_1);
                        copy_48_bytes(r0 + 0x104u, r1, r2_1);
                        r1_12 = r2;
                        r0_14 = r0 + 0x142u;
                        r5_1->half_38 = u16(r3);
                    }
                    Item__copy(r0_14, r1_12);
                    r1_1 = guest::cpu()->r[1];
                }
            }
L_2ea28c:;
            is_villager = r7_1;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return is_villager;
}

}  // namespace d_002ea10c
GUEST_EXPORT_FRAMED(0x002ea10c, d_002ea10c::ContestRanking__prune, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002ea294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of the 0x30-byte record of place `index` (+0xa4); out-of-range indices give place 0.
namespace d_002ea294 {


u32 ContestRanking__record_at(u32 contest_ranking, u32 r1) {
    if (s32(r1) < 3) {
        r1 = r1 * 3u;
        contest_ranking += (r1 << 4);
    }
    guest::cpu()->r[1] = r1;
    return contest_ranking + 0xa4u;
}

}  // namespace d_002ea294
GUEST_EXPORT(0x002ea294, d_002ea294::ContestRanking__record_at);

// f_002ea2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts the player with `score` (below 0x400) and their prize item at the place the score earns, moving the lower
// places down.
namespace d_002ea2bc {

struct __attribute__((packed)) ContestRanking {
    u8 unknown_0[0x134];  // (not used here)
    u16 half_134;
    u16 half_136;
    u16 half_138;
};
GUEST_OFFSET(ContestRanking, half_134, 0x134);
GUEST_OFFSET(ContestRanking, half_136, 0x136);
GUEST_OFFSET(ContestRanking, half_138, 0x138);

struct __attribute__((packed)) Local_002ea2bc_r5_1 {
    u8 unknown_0[0x36];  // (not used here)
    u16 half_36;
    u16 half_38;
};
GUEST_OFFSET(Local_002ea2bc_r5_1, half_36, 0x36);
GUEST_OFFSET(Local_002ea2bc_r5_1, half_38, 0x38);

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x003084d0, u32(u32)> clear_identity_with_value;
inline constexpr guest::Function<0x00613de4, u32(u32, u32)> copy_48_bytes;

u32 ContestRanking__insert(gptr<ContestRanking> contest_ranking, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = PersonalId__is_set(r1, r1, r2, r3);
    if (r0_1 != 0 && r3 < 0x400u) {
        gptr<Local_002ea2bc_r5_1> r5_1 = gptr<Local_002ea2bc_r5_1>(contest_ranking.addr() + 0x100u);
        if (contest_ranking->half_134 < r3) {
            copy_46_bytes(contest_ranking.addr() + 0x76u, contest_ranking.addr() + 0x48u);
            copy_46_bytes(contest_ranking.addr() + 0x48u, contest_ranking.addr() + 0x1au);
            copy_46_bytes(contest_ranking.addr() + 0x1au, r1);
            copy_48_bytes(contest_ranking.addr() + 0x104u, contest_ranking.addr() + 0xd4u);
            copy_48_bytes(contest_ranking.addr() + 0xd4u, contest_ranking.addr() + 0xa4u);
            clear_identity_with_value(contest_ranking.addr() + 0xa4u);
            u32 r0_8 = contest_ranking->half_136;
            u32 r1_6 = contest_ranking->half_134;
            contest_ranking->half_134 = u16(r3);
            contest_ranking->half_138 = u16(r0_8);
            contest_ranking->half_136 = u16(r1_6);
            Item__copy(contest_ranking.addr() + 0x142u, contest_ranking.addr() + 0x13eu);
            Item__copy(contest_ranking.addr() + 0x13eu, contest_ranking.addr() + 0x13au);
            frame.release();
            return Item__copy(contest_ranking.addr() + 0x13au, r2);
        }
        if (r5_1->half_36 < r3) {
            copy_46_bytes(contest_ranking.addr() + 0x76u, contest_ranking.addr() + 0x48u);
            copy_46_bytes(contest_ranking.addr() + 0x48u, r1);
            copy_48_bytes(contest_ranking.addr() + 0x104u, contest_ranking.addr() + 0xd4u);
            clear_identity_with_value(contest_ranking.addr() + 0xd4u);
            u32 r0_13 = r5_1->half_36;
            r5_1->half_36 = u16(r3);
            r5_1->half_38 = u16(r0_13);
            Item__copy(contest_ranking.addr() + 0x142u, contest_ranking.addr() + 0x13eu);
            frame.release();
            return Item__copy(contest_ranking.addr() + 0x13eu, r2);
        }
        r0_1 = r5_1->half_38;
        if (r0_1 < r3) {
            copy_46_bytes(contest_ranking.addr() + 0x76u, r1);
            clear_identity_with_value(contest_ranking.addr() + 0x104u);
            r5_1->half_38 = u16(r3);
            frame.release();
            return Item__copy(contest_ranking.addr() + 0x142u, r2);
        }
    }
    return r0_1;
}

}  // namespace d_002ea2bc
GUEST_EXPORT(0x002ea2bc, d_002ea2bc::ContestRanking__insert);

// f_002ea430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of the identity of place `index` (+0x1a, 0x2e bytes each); out-of-range indices give place 0.
namespace d_002ea430 {


u32 ContestRanking__identity_at(u32 contest_ranking, u32 r1) {
    if (s32(r1) >= 3) {
        guest::cpu()->r[1] = r1;
        return contest_ranking + 0x1au;
    }
    u32 r1_1 = r1 * 7u + (r1 << 4);
    guest::cpu()->r[1] = r1_1;
    return contest_ranking + (r1_1 << 1) + 0x1au;
}

}  // namespace d_002ea430
GUEST_EXPORT(0x002ea430, d_002ea430::ContestRanking__identity_at);

// f_002eaec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first Saturday at or after the time stamp (skipping a week when today is already event 0xc) on which event 0xc
// is held.
namespace d_002eaec8 {

struct __attribute__((packed)) NextEventSaturdayArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(NextEventSaturdayArg1, word_0, 0x0);
GUEST_OFFSET(NextEventSaturdayArg1, word_4, 0x4);
GUEST_OFFSET(NextEventSaturdayArg1, word_8, 0x8);

struct __attribute__((packed)) Local_002eaec8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002eaec8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002eaec8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_002eaec8_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_002eaec8_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002eaec8_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_002eaec8_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_002eaec8_ea_4, word_8, 0x8);

struct __attribute__((packed)) Local_002eaec8_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002eaec8_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_002eaec8_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_002eaec8_ea_5, word_8, 0x8);

struct __attribute__((packed)) Local_002eaec8_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002eaec8_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_002eaec8_r3_1, word_4, 0x4);

inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> TimeStamp__add_days;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x0058dc80, u32(u32, u32, u32, u32)> check_words12;

struct __attribute__((packed)) NextEventSaturdayFrame {
    u32 word_0;
    u8 unknown_4[0x6];  // (not read or written by name)
    u8 byte_a;
    u8 unknown_b[0x1];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(NextEventSaturdayFrame, word_0, 0x0);
GUEST_OFFSET(NextEventSaturdayFrame, byte_a, 0xa);
GUEST_OFFSET(NextEventSaturdayFrame, word_c, 0xc);
GUEST_SIZE(NextEventSaturdayFrame, 0x14);

void next_event_saturday(u32 r0, gptr<NextEventSaturdayArg1> arg1) {
    guest::StackFrameOf<NextEventSaturdayFrame> frame;  // the original's stack frame
    u32 r4 = r0;
    u32 r0_1 = arg1->word_0;
    u32 r2_1 = arg1->word_4;
    u32 r1_1 = arg1->word_8;
    gptr<Local_002eaec8_r3_1> r3_1 = gptr<Local_002eaec8_r3_1>(frame.at(4).addr());
    frame->word_c = r1_1;
    r3_1->word_0 = r0_1;
    r3_1->word_4 = r2_1;
    TimeStamp__move_to_day_start(frame.at(4).addr(), r1_1, r2_1, r3_1.addr());
    u32 r5 = 1u;
    frame->word_0 = r5;
    gptr<Local_002eaec8_ea_2> ea_2 = gptr<Local_002eaec8_ea_2>(frame.at(4).addr());
    u32 r0_3 = check_words12(0xcu, ea_2->word_0, ea_2->word_4, ea_2->word_8);
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        TimeStamp__add_days(frame.at(4).addr(), 7u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (frame->byte_a != 6u) {
        do {
            TimeStamp__add_days(frame.at(4).addr(), 1u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (frame->byte_a != 6u);
    }
    do {
        frame->word_0 = r5;
        gptr<Local_002eaec8_ea_4> ea_4 = gptr<Local_002eaec8_ea_4>(frame.at(4).addr());
        if (check_words12(0xcu, ea_4->word_0, ea_4->word_4, ea_4->word_8) != 0) {
            gptr<Local_002eaec8_ea_5> ea_5 = gptr<Local_002eaec8_ea_5>(frame.at(4).addr());
            u32 r1_4 = ea_5->word_4;
            u32 r2_5 = ea_5->word_8;
            *gptr<u32>(r4) = ea_5->word_0;
            *gptr<u32>(r4 + 4) = r1_4;
            *gptr<u32>(r4 + 8) = r2_5;
            return;
        }
        TimeStamp__add_days(frame.at(4).addr(), 7u, guest::cpu()->r[2], guest::cpu()->r[3]);
        guest::preempt();
    } while (1);
}

}  // namespace d_002eaec8
GUEST_EXPORT_FRAMED(0x002eaec8, d_002eaec8::next_event_saturday, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002eaf8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the ranking, its places and prizes, and the contest flags of every player (and their entry bits too, when
// asked).
namespace d_002eaf8c {

struct __attribute__((packed)) ContestRanking {
    u8 byte_0;
    u8 unknown_1[0x133];  // (not used here)
    u16 half_134;
    u16 half_136;
    u16 half_138;
};
GUEST_OFFSET(ContestRanking, byte_0, 0x0);
GUEST_OFFSET(ContestRanking, half_134, 0x134);
GUEST_OFFSET(ContestRanking, half_136, 0x136);
GUEST_OFFSET(ContestRanking, half_138, 0x138);

struct __attribute__((packed)) Local_002eaf8c_r0_19 {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
};
GUEST_OFFSET(Local_002eaf8c_r0_19, byte_44, 0x44);

struct __attribute__((packed)) Local_002eaf8c_r1_15 {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
};
GUEST_OFFSET(Local_002eaf8c_r1_15, byte_44, 0x44);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x0010f48d, u32(u32)> clear_flag_bd_bit6_of_all_player_records;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32)> player_at;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x003084d0, u32(u32)> clear_identity_with_value;

void ContestRanking__reset(gptr<ContestRanking> contest_ranking, u32 r1, u32 r2) {
    u32 r0 = contest_ranking.addr();
    u32 r1_14 = 0;
    u32 r5 = r1;
    u32 r0_1 = u32(contest_ranking->byte_0) & 0x70u;
    contest_ranking->byte_0 = u8(r0_1);
    u32 data_base = get_data_base(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 records = slot_records_of(data_base);
    clear_flag_bd_bit6_of_all_player_records(records + 4u);
    clear_inner(r0 + 1u);
    clear_inner(r0 + 9u);
    clear_inner(r0 + 0x11u);
    clear_identity_with_flags(r0 + 0x1au);
    clear_identity_with_flags(r0 + 0x48u);
    clear_identity_with_flags(r0 + 0x76u);
    clear_identity_with_value(r0 + 0xa4u);
    clear_identity_with_value(r0 + 0xd4u);
    clear_identity_with_value(r0 + 0x104u);
    u32 r7 = 0u;
    contest_ranking->half_134 = u16(r7);
    contest_ranking->half_136 = u16(r7);
    contest_ranking->half_138 = u16(r7);
    Item__copy(r0 + 0x13au, empty_item_address);
    Item__copy(r0 + 0x13eu, empty_item_address);
    u32 r0_16 = r0 + 0x142u;
    Item__copy(r0_16, empty_item_address);
    u32 data_base_2 = get_data_base(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r6 = data_base_2 + 0x20u;
    u32 i = 0u;
    do {
        u32 player = player_at(r6, i & 0xffu, r2);
        r1_14 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (player != 0) {
            *gptr<u16>(player + 0x8a7eu) = u16(r7);
            if (r5 != 0) {
                gptr<Local_002eaf8c_r1_15> r1_15 = gptr<Local_002eaf8c_r1_15>(player + 0x8a3cu);
                r2 = u32(r1_15->byte_44) & ~7u;
                r1_15->byte_44 = u8(r2);
            }
            gptr<Local_002eaf8c_r0_19> r0_19 = gptr<Local_002eaf8c_r0_19>(player + 0x8a3cu);
            r1_14 = u32(r0_19->byte_44) & ~8u;
            r0_19->byte_44 = u8(r1_14);
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    guest::cpu()->r[1] = r1_14;
}

}  // namespace d_002eaf8c
GUEST_EXPORT_FRAMED(0x002eaf8c, d_002eaf8c::ContestRanking__reset, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_002eb0b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the contest's schedule and state from the time.
namespace d_002eb0b4 {

struct __attribute__((packed)) ContestRanking {
    u8 byte_0;
};
GUEST_OFFSET(ContestRanking, byte_0, 0x0);

inline constexpr guest::Function<0x00116e31, u32(u32, u32)> BitSet32__set;
inline constexpr guest::Function<0x00116e4f, u32(u32, u32, u32, u32)> BitSet32__clear;
inline constexpr guest::Function<0x00116e93, u32(u32, u32, u32, u32)> BitSet32__assign;
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32)> init_bit_mask;
inline constexpr guest::Function<0x00116f1b, u32(u32, u32, u32, u32)> copy_three_words;
inline constexpr guest::Function<0x00118e25, u32(u32, u32)> is_designated_villager;
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32, u32, u32)> SaveVillager__has_flag_2510_bit0;
inline constexpr guest::Function<0x002ea450, u32(u32, u32)> HouseRooms__refresh;
inline constexpr guest::Function<0x002eb3b0, u32(u32, u32, u32, u32)> namespace___KameyamaForeachFunction__KameyamaForeachFunction;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> is_in_registered_list;
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> pick_random_set_bit;
inline constexpr guest::Function<0x002ff6f8, u32(u32)> random_below;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> villager_record_at;
inline constexpr guest::Function<0x00301e20, u32(u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00309ccc, u32(u32, u32, u32, u32)> index_in_pair_a83370;
inline constexpr guest::Function<0x00312ab8, u32(u32, u32, u32, u32)> TimeStamp__advance_veneer;
inline constexpr guest::Function<0x00312af9, u32(u32, u32, u32, u32)> Villager__may_leave;
inline constexpr guest::Function<0x0058e2e4, u32(u32, u32)> call_event_handler_of_kind;
inline constexpr guest::Function<0x0058ec08, u32(u32, u32)> call_event_handler_of_kind_2;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

struct __attribute__((packed)) ContestRankingUpdateScheduleFrame {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(ContestRankingUpdateScheduleFrame, word_0, 0x0);
GUEST_OFFSET(ContestRankingUpdateScheduleFrame, word_18, 0x18);
GUEST_SIZE(ContestRankingUpdateScheduleFrame, 0x48);

void ContestRanking__update_schedule(gptr<ContestRanking> contest_ranking, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ContestRankingUpdateScheduleFrame> frame;  // the original's stack frame
    u32 r0 = contest_ranking.addr();
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 villager = 0;
    u32 r0_21 = 0;
    u32 r1_8 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_26 = 0;
    u32 r1_10 = 0;
    u32 r0_27 = 0;
    u32 r6 = r0;
    if (is_in_registered_list(0xcu, r1, r2, r3) == 0) {
        return;
    }
    contest_ranking->byte_0 = u8(u32(contest_ranking->byte_0) | 1u);
    call_event_handler_of_kind_2(0xcu, frame.at(0x1c).addr());
    call_event_handler_of_kind(0xcu, frame.at(0x34).addr());
    u32 r8 = 0u;
    frame->word_0 = r8;
    TimeStamp__advance_veneer(frame.at(0x1c).addr(), r8, 3u, r8);
    frame->word_0 = r8;
    TimeStamp__advance_veneer(frame.at(0x34).addr(), 0u, ~3u, 0u);
    GameTime__set_time_stamp(r6 + 1u, frame.at(0x1c).addr());
    GameTime__set_time_stamp(r6 + 9u, frame.at(0x1c).addr());
    GameTime__set_time_stamp(r6 + 0x11u, frame.at(0x34).addr());
    if ((u32(contest_ranking->byte_0) >> 4) == 0) {
        u32 random = random_below(2u);
        contest_ranking->byte_0 = u8(u32(contest_ranking->byte_0) & 0x8fu | 0x70u & random + 1u << 4);
    }
    init_bit_mask(frame.at(0x28).addr(), 0xau, 1u);
    u32 i = 0u;
    u32 is_villager = is_villager_record(r6 + 0x104u, guest::cpu()->r[1]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (is_villager != 0) {
        return;
    }
L_2eb1a4:;
    u32 r7 = frame.at(0x28).addr();
    u32 r5 = 0u;
    BitSet32__assign(frame.at(0x10).addr(), r7, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (i == 0) {
        do {
            frame->word_0 = r5;
            u32 r0_12 = namespace___KameyamaForeachFunction__KameyamaForeachFunction(r6, i, 0u, 0u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 == 0) {
                BitSet32__clear(frame.at(0x10).addr(), i, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 0xa);
    }
    if (frame->word_18 == 0) {
        copy_three_words(frame.at(0x10).addr(), r7, r2, r3);
        i = 0u;
        do {
            frame->word_0 = r8;
            u32 zf_1 = namespace___KameyamaForeachFunction__KameyamaForeachFunction(r6, i, 1u, 0u) == 0;
            u32 r0_16 = frame.at(0x10).addr();
            if (zf_1) {
                BitSet32__clear(r0_16, i, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            } else {
                BitSet32__set(r0_16, i);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 0xa);
        r0 = frame->word_18;
        if (r0 == 0) {
            i = 0u;
            goto L_2eb28c;
        }
    }
    r0_17 = frame.at(0x10).addr();
    r0_18 = pick_random_set_bit(r0_17, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    i = r0_18;
    goto L_2eb30c;
L_2eb28c:;
    r0_19 = get_save_data(r0, r1, r2, r3);
    r0 = villager_record_at(r0_19 + 0x292a4u, i);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    villager = r0;
    if (r0 == 0) {
        goto L_2eb370;
    }
    r0 = index_in_pair_a83370(i, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (s32(r0) >= 0) {
        goto L_2eb370;
    }
    r0 = Villager__may_leave(villager, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb370;
    }
    r0 = SaveVillager__has_flag_2510_bit0(villager, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_2eb370;
    }
    r0_21 = get_save_data(r0, r1, r2, r3);
    r0 = is_designated_villager(r0_21 + 0x292a4u, villager);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb370;
    }
L_2eb30c:;
    r1_8 = frame.at(0x10).addr();
    copy_three_words(r7, r1_8, r2, r3);
    if (i + 1u == 0) {
        return;
    }
    r0_23 = frame.at(0x28).addr();
    BitSet32__clear(r0_23, i, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_24 = get_save_data(r0_23, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_26 = villager_record_at(r0_24 + 0x292a4u, i);
    r1_10 = r0_26;
    if (r0_26 == 0) {
        goto L_2eb390;
    }
    r0_27 = HouseRooms__refresh(r6, r1_10);
    r1_10 = guest::cpu()->r[1];
    if (r0_27 == 0) {
        BitSet32__set(frame.at(0x28).addr(), i);
        r1_10 = guest::cpu()->r[1];
        goto L_2eb390;
    }
    goto L_2eb390;
L_2eb370:;
    i += 1u;
    if (s32(i) < 0xa) {
        guest::preempt();
        goto L_2eb28c;
    }
    return;
L_2eb390:;
    i = 1u;
    u32 is_villager_2 = is_villager_record(r6 + 0x104u, r1_10);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (is_villager_2 != 0) {
        return;
    }
    guest::preempt();
    goto L_2eb1a4;
}

}  // namespace d_002eb0b4
GUEST_EXPORT_FRAMED(0x002eb0b4, d_002eb0b4::ContestRanking__update_schedule, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_002eb5d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the prizes of the finished contest to the ranked players by letter.
namespace d_002eb5d0 {

struct __attribute__((packed)) Local_002eb5d0_ea_1 {
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
GUEST_OFFSET(Local_002eb5d0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002eb5d0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002eb5d0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_002eb5d0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_002eb5d0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_002eb5d0_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_002eb5d0_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_002eb5d0_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_002eb5d0_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_002eb5d0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002eb5d0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002eb5d0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_002eb5d0_ea_4 {
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
GUEST_OFFSET(Local_002eb5d0_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_002eb5d0_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_002eb5d0_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_002eb5d0_ea_4, word_c, 0xc);
GUEST_OFFSET(Local_002eb5d0_ea_4, word_10, 0x10);
GUEST_OFFSET(Local_002eb5d0_ea_4, word_14, 0x14);
GUEST_OFFSET(Local_002eb5d0_ea_4, word_18, 0x18);
GUEST_OFFSET(Local_002eb5d0_ea_4, word_1c, 0x1c);
GUEST_OFFSET(Local_002eb5d0_ea_4, word_20, 0x20);

struct __attribute__((packed)) Local_002eb5d0_r0_21 {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
};
GUEST_OFFSET(Local_002eb5d0_r0_21, byte_44, 0x44);

struct __attribute__((packed)) Local_002eb5d0_r0_3 {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
};
GUEST_OFFSET(Local_002eb5d0_r0_3, byte_44, 0x44);

struct __attribute__((packed)) Local_002eb5d0_r10_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002eb5d0_r10_1, word_0, 0x0);
GUEST_OFFSET(Local_002eb5d0_r10_1, word_4, 0x4);
GUEST_OFFSET(Local_002eb5d0_r10_1, word_8, 0x8);

inline constexpr guest::Function<0x002f77e8, u32(u32, u32)> same_pointer;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb338, u32(u32)> is_not_sentinel;
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> player_at;
inline constexpr guest::Function<0x002fb96c, u32(u32)> player_for_slot;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> Letter__Letter;
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> Item__check_property;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> load_mail_with_adapter;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> word_and_byte_pairs_equal;
inline constexpr guest::Function<0x0056c3ec, u32(u32, u32, u32, u32)> current_day_start;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32)> find_player_matching_entry;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> set_held_item;

struct __attribute__((packed)) ContestRankingSendPrizesFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x284];  // (not read or written by name)
    u32 word_290;
    u32 word_294;
    u32 word_298;
    u8 unknown_29c[0x24];  // (not read or written by name)
};
GUEST_OFFSET(ContestRankingSendPrizesFrame, word_0, 0x0);
GUEST_OFFSET(ContestRankingSendPrizesFrame, word_4, 0x4);
GUEST_OFFSET(ContestRankingSendPrizesFrame, word_8, 0x8);
GUEST_OFFSET(ContestRankingSendPrizesFrame, word_290, 0x290);
GUEST_OFFSET(ContestRankingSendPrizesFrame, word_294, 0x294);
GUEST_OFFSET(ContestRankingSendPrizesFrame, word_298, 0x298);
GUEST_SIZE(ContestRankingSendPrizesFrame, 0x2c0);

void ContestRanking__send_prizes(u32 contest_ranking, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ContestRankingSendPrizesFrame> frame;  // the original's stack frame
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 j = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_002eb5d0_ea_1> ea_1 = gptr<Local_002eb5d0_ea_1>(frame.at(0x29c).addr());
    ea_1->word_0 = i;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = j;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r11;
    ea_1->word_20 = r14;
    r5 = contest_ranking;
    r7 = r1;
    current_day_start(frame.at(0).addr(), r1, r2, r3);
    u32 r6_1 = frame->word_8;
    u32 r4_1 = frame->word_0;
    u32 r8_1 = frame->word_4;
    gptr<Local_002eb5d0_r0_3> r0_3 = gptr<Local_002eb5d0_r0_3>(is_not_sentinel(r5 + 9u));
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 1u;
    if (r0_3.addr() != 0) {
        make_adjusted_words(frame.at(8).addr(), r5 + 9u, r2, r3);
        gptr<Local_002eb5d0_r10_1> r10_1 = gptr<Local_002eb5d0_r10_1>(frame.at(8).addr());
        frame->word_4 = r6_1;
        frame->word_0 = r8_1;
        r0_3 = gptr<Local_002eb5d0_r0_3>(word_and_byte_pairs_equal(r10_1->word_0, r10_1->word_4, r10_1->word_8, r4_1));
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3.addr() == 0) {
            i = 0u;
            do {
                u32 r6_2 = r5 + (i * 7u + (i << 4) << 1);
                r0_3 = gptr<Local_002eb5d0_r0_3>(PersonalId__is_set(r6_2 + 0x1au, r1, r2, r3));
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_3.addr() != 0) {
                    u32 save_data = get_save_data(r0_3.addr(), r1, r2, r3);
                    u32 r6_3 = save_data + 0xa0u;
                    r0_3 = gptr<Local_002eb5d0_r0_3>(player_for_slot(player_index_in(r6_3, find_player_matching_entry(r6_3, r6_2 + 0x1au))));
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r1 = *gptr<u8>(r5);
                    if ((r1 & 2u) == 0 && r0_3.addr() != 0) {
                        r0_3 = gptr<Local_002eb5d0_r0_3>(r0_3.addr() + 0x8a3cu);
                        r1 = u32(r0_3->byte_44) | lsl_r(r9, i & 0xff);
                        r0_3->byte_44 = u8(r1);
                    }
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < 3);
        }
    }
    if (s32(r7) > 0) {
        u32 data_base = get_data_base(r0_3.addr(), r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r10 = 0x7ffeu;
        j = 0u;
        r11 = j;
        frame->word_290 = data_base + 0x20u;
        do {
            u32 player = player_at(frame->word_290, j & 0xffu, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (player != 0) {
                r1 = player + 0x55a6u;
                i = 0u;
                r6 = player + 0x8a80u;
                frame->word_298 = player + 0x8a3cu;
                frame->word_294 = r1;
                do {
                    u32 r5_1 = lsl_r(r9, i & 0xff);
                    if ((u32(*gptr<u8>(r6)) & r5_1) != 0) {
                        Letter__Letter(frame.at(0x10).addr(), r1, r2, r3);
                        Item__from_category_index(frame.at(0xc).addr(), 0x29u, 0x10u);
                        u32 r7_1 = r10;
                        if (i == 0) {
                            r7_1 = 0x2cdcu;
                        } else if (i == 1u) {
                            r7_1 = 0x2cddu;
                        } else if (i == 2u) {
                            r7_1 = 0x2cdeu;
                        }
                        frame->word_0 = frame.at(0xc).addr();
                        gptr<Local_002eb5d0_ea_3> ea_3 = gptr<Local_002eb5d0_ea_3>(frame.at(4).addr());
                        ea_3->word_0 = 0x11;
                        ea_3->word_4 = r11;
                        u32 r0_16 = load_mail_with_adapter(frame.at(0x10).addr(), 0x88e708u, i + 1u, frame->word_294);
                        u32 r1_7 = guest::cpu()->r[1];
                        if (r0_16 != 0) {
                            u32 r0_17 = frame.at(0).addr();
                            construct_item(r0_17, r7_1);
                            set_held_item(frame.at(0x10).addr(), r0_17, 0u);
                            u32 r0_20 = Item__check_property(frame.at(0x10).addr(), 1u, 1u, 0u);
                            r1_7 = guest::cpu()->r[1];
                            if (r0_20 != 0) {
                                gptr<Local_002eb5d0_r0_21> r0_21 = gptr<Local_002eb5d0_r0_21>(frame->word_298);
                                r1_7 = u32(r0_21->byte_44) & ~r5_1;
                                r0_21->byte_44 = u8(r1_7);
                            }
                        }
                        same_pointer(frame.at(0x10).addr(), r1_7);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    }
                    i += 1u;
                    guest::preempt();
                } while (i < 3u);
            }
            j += 1u;
            guest::preempt();
        } while (j < 4u);
    }
    gptr<Local_002eb5d0_ea_4> ea_4 = gptr<Local_002eb5d0_ea_4>(frame.at(0x29c).addr());
    u32 r4_2 = ea_4->word_0;
    u32 r5_2 = ea_4->word_4;
    u32 r6_4 = ea_4->word_8;
    u32 r7_2 = ea_4->word_c;
    u32 r8_2 = ea_4->word_10;
    u32 r9_1 = ea_4->word_14;
    u32 r10_2 = ea_4->word_18;
    u32 r11_1 = ea_4->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
}

}  // namespace d_002eb5d0
GUEST_EXPORT(0x002eb5d0, d_002eb5d0::ContestRanking__send_prizes);

// f_002eba64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of block (x, y) of the 2 x 2 blocks of 0x400 bytes (+0x22); out-of-range gives block 0.
namespace d_002eba64 {


u32 Grid2x2__block_at(u32 grid2x2, u32 r1, u32 r2) {
    u32 res_1 = r1 - 2u;
    u32 nf_1 = res_1 >> 0x1f;
    u32 vf_1 = ((r1 ^ 2u) & (r1 ^ res_1)) >> 0x1f;
    if (nf_1 != vf_1) {
        u32 res_2 = r2 - 2u;
        nf_1 = res_2 >> 0x1f;
        vf_1 = ((r2 ^ 2u) & (r2 ^ res_2)) >> 0x1f;
    }
    if (nf_1 != vf_1) {
        grid2x2 = grid2x2 + (r2 << 0xb) + (r1 << 0xa);
    }
    return grid2x2 + 0x22u;
}

}  // namespace d_002eba64
GUEST_EXPORT(0x002eba64, d_002eba64::Grid2x2__block_at);

// f_002eba7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of number pair `index` (0 or 1) at +0x1022.
namespace d_002eba7c {


u32 Grid2x2__pair_at(u32 grid2x2, u32 r1) {
    if (r1 < 2u) {
        grid2x2 += (r1 << 2);
    }
    return grid2x2 + 0x1022u;
}

}  // namespace d_002eba7c
GUEST_EXPORT(0x002eba7c, d_002eba7c::Grid2x2__pair_at);

// f_002eba90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the size to 3 x 3, resets the 3 x 3 halves, clears the four blocks and the two number pairs.
namespace d_002eba90 {

struct __attribute__((packed)) Grid2x2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Grid2x2, byte_0, 0x0);
GUEST_OFFSET(Grid2x2, byte_1, 0x1);

struct __attribute__((packed)) Local_002eba90_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002eba90_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_002eba90_r0_2, word_4, 0x4);

inline constexpr u32 grid_2x2_address = 0x00ad5384u;
inline guest::global<u32, 0x0095c000> global_0095c000;
inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32)> clear_number_pair;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32)> zero_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x00612cec, u32(u32, u32, u32)> set_half_109;
inline constexpr guest::Function<0x006efd40, u32(u32, u32, u32)> Block16x16__fill_default_items;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Grid2x2ClearFrame {
    u8 unknown_0[0x18];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Grid2x2ClearFrame, word_18, 0x18);
GUEST_OFFSET(Grid2x2ClearFrame, word_1c, 0x1c);
GUEST_SIZE(Grid2x2ClearFrame, 0x24);

void Grid2x2__clear(gptr<Grid2x2> grid2x2, u32 r1, u32 r2) {
    guest::StackFrameOf<Grid2x2ClearFrame> frame;  // the original's stack frame
    u32 r0 = grid2x2.addr();
    u32 i = 0;
    u32 r0_11 = 0;
    u32 r7 = r0;
    grid2x2->byte_0 = 3;
    grid2x2->byte_1 = 3;
    if ((*global_0095c000 & 1u) == 0) {
        u32 first_time_2 = static_guard_acquire(0x95c000u, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        if (first_time_2 != 0) {
            gptr<Local_002eba90_r0_2> r0_2 = gptr<Local_002eba90_r0_2>(frame.at(0x10).addr());
            r0_2->word_0 = 3;
            r0_2->word_4 = 3;
            u32 r0_3 = zero_word_pair(r0_2.addr(), 3u, 3u);
            construct_word_quad_from_pairs(grid_2x2_address, r0_3, r0_2.addr());
            r2 = 0x100000u;
        }
    }
    make_end_grid_rect_iterator(frame.at(0).addr(), grid_2x2_address, r2, guest::cpu()->r[3]);
    construct_grid_rect_iterator(frame.at(0x10).addr(), grid_2x2_address);
    u32 r0_7 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_7 != 0) {
        do {
            set_half_109((r7 + (frame->word_1c << 3)) + (frame->word_18 << 1) + 2u, r1, r2);
            WrappingCursor__advance(frame.at(0x10).addr());
            r0_11 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_11 != 0);
    }
    u32 j = 0u;
    do {
        i = 0u;
        u32 r5 = r7 + (j << 0xb);
        do {
            Block16x16__fill_default_items(r5 + (i << 0xa) + 0x22u, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            i += 1u;
            guest::preempt();
        } while (s32(i) < 2);
        j += 1u;
        guest::preempt();
    } while (s32(j) < 2);
    i = 0u;
    do {
        clear_number_pair(r7 + (i << 2) + 0x1022u, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        i += 1u;
        guest::preempt();
    } while (i < 2u);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002eba90
GUEST_EXPORT_FRAMED(0x002eba90, d_002eba90::Grid2x2__clear, 0x40f0);  // pushes {i, r5, j, r7, lr} first, as the original

// f_002ebd48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears entry `index` (0 to 3) of the four 0x1228-byte entries.
namespace d_002ebd48 {

inline constexpr guest::Function<0x0024dbc0, u32(u32, u32, u32, u32)> Block1228__reset;

void Block1228__clear_at(u32 block1228, u32 r1) {
    if (r1 >= 4u) {
        return;
    }
    u32 r2_1 = s16(r1) * s16(0x245u);
    Block1228__reset(block1228 + (r2_1 << 3), r1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_002ebd48
GUEST_EXPORT(0x002ebd48, d_002ebd48::Block1228__clear_at);

// f_002ebd68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the four 0x1228-byte entries.
namespace d_002ebd68 {

inline constexpr guest::Function<0x001de818, u32(u32, u32, u32, u32)> OptionRecord__reset;

void Block1228__clear_all(u32 block1228) {
    u32 r5 = block1228;
    u32 i = 0u;
    do {
        OptionRecord__reset(r5 + i * 0x1228u, i, guest::cpu()->r[2], guest::cpu()->r[3]);
        i += 1u;
        guest::preempt();
    } while (i < 4u);
}

}  // namespace d_002ebd68
GUEST_EXPORT_FRAMED(0x002ebd68, d_002ebd68::Block1228__clear_all, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_002ebd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets each of the four 0x1228-byte entries for its index.
namespace d_002ebd9c {

inline constexpr guest::Function<0x0024dbc0, u32(u32, u32, u32, u32)> Block1228__reset;

void Block1228__reset_all(u32 block1228) {
    u32 r5 = block1228;
    u32 i = 0u;
    do {
        Block1228__reset(r5 + i * 0x1228u, i, guest::cpu()->r[2], guest::cpu()->r[3]);
        i += 1u;
        guest::preempt();
    } while (i < 4u);
}

}  // namespace d_002ebd9c
GUEST_EXPORT_FRAMED(0x002ebd9c, d_002ebd9c::Block1228__reset_all, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_002ebdd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the entry function on each of the four 0x1228-byte entries with its index and the argument.
namespace d_002ebdd0 {

inline constexpr guest::Function<0x0010a1a5, u32(u32, u32, u32, u32)> ExhibitionEntries6__advance;

void Block1228__apply_all(u32 block1228, u32 r1) {
    u32 r5 = block1228;
    u32 r6 = r1;
    u32 i = 0u;
    do {
        ExhibitionEntries6__advance(r5 + i * 0x1228u, i, r6, guest::cpu()->r[3]);
        i += 1u;
        guest::preempt();
    } while (i < 4u);
}

}  // namespace d_002ebdd0
GUEST_EXPORT_FRAMED(0x002ebdd0, d_002ebdd0::Block1228__apply_all, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_002ed1ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless locked (+0xce5), stores the value at +0x3bc, refreshes from it and restarts with the default pair.
namespace d_002ed1ec {

struct __attribute__((packed)) SetWord3bcAndRefreshArg0 {
    u8 unknown_0[0x3bc];  // (not used here)
    u32 word_3bc;
    u8 unknown_3c0[0x925];  // (not used here)
    u8 byte_ce5;
};
GUEST_OFFSET(SetWord3bcAndRefreshArg0, word_3bc, 0x3bc);
GUEST_OFFSET(SetWord3bcAndRefreshArg0, byte_ce5, 0xce5);

inline guest::global<u32, 0x0084518c> global_0084518c;
inline guest::global<u32, 0x00845190> global_00845190;
inline constexpr guest::Function<0x002ed224, u32(u32, u32, u32, u32)> script__WordFix_21u___WordFix_002ed224;
inline constexpr guest::Function<0x008196f4, u32(u32, u32, u32)> LayoutAnimator__play_k;

void set_word_3bc_and_refresh(gptr<SetWord3bcAndRefreshArg0> arg0, u32 r1, u32 r2) {
    if (arg0->byte_ce5 != 0) {
        return;
    }
    arg0->word_3bc = r1;
    script__WordFix_21u___WordFix_002ed224(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    LayoutAnimator__play_k(arg0.addr(), *global_0084518c, *global_00845190);
}

}  // namespace d_002ed1ec
GUEST_EXPORT_FRAMED(0x002ed1ec, d_002ed1ec::set_word_3bc_and_refresh, 0x4010);  // pushes {r4, lr} first, as the original

// f_002edcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Attaches the layout at +0x270 to the layout system.
namespace d_002edcb0 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

void attach_layout_270(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(r0);
    frame.release();
    LayoutRenderer__draw_on_screen(r0_1, r0 + 0x270u, 1u);
    return;
}

}  // namespace d_002edcb0
GUEST_EXPORT(0x002edcb0, d_002edcb0::attach_layout_270);

// f_002edccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the word pair at +0xc equals the default pair (0x84517c).
namespace d_002edccc {

struct __attribute__((packed)) WordPairCIsDefaultArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(WordPairCIsDefaultArg0, word_c, 0xc);
GUEST_OFFSET(WordPairCIsDefaultArg0, word_10, 0x10);

inline guest::global<u32, 0x0084517c> global_0084517c;
inline guest::global<u32, 0x00845180> global_00845180;

u32 word_pair_c_is_default(gptr<WordPairCIsDefaultArg0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r2_1 = *global_0084517c;
    u32 r1_1 = *global_00845180;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (arg0->word_10 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_002edccc
GUEST_EXPORT(0x002edccc, d_002edccc::word_pair_c_is_default);

// f_002ee3a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the window's layout, its five part layouts (+0x4a4) and its extra one (+0x4b8), and resets the menu state
// flag.
namespace d_002ee3a8 {

struct __attribute__((packed)) ItemSelectWindowReleaseArg0 {
    u8 unknown_0[0xce4];  // (not used here)
    u8 byte_ce4;
};
GUEST_OFFSET(ItemSelectWindowReleaseArg0, byte_ce4, 0xce4);

struct __attribute__((packed)) Local_002ee3a8_r5_1 {
    u8 unknown_0[0x4a4];  // (not used here)
    u32 word_4a4;
};
GUEST_OFFSET(Local_002ee3a8_r5_1, word_4a4, 0x4a4);

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x001fa290, u32(u32)> TalkWindow__update_state;
inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x005e2e04, u32(u32, u32)> TextBox__unlock;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> script__RenderTrace__destructor_b;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32)> get_state_30;

void ItemSelectWindow__release(gptr<ItemSelectWindowReleaseArg0> item_select_window, u32 r1) {
    u32 r0 = item_select_window.addr();
    u32 r7 = r0;
    u32 r8 = r0 + 0xc00u;
    if (item_select_window->byte_ce4 == 1u) {
        release_layout_parts(r7 + 0x24u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    layout_at_10_virtual_8(r7 + 0x270u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 i = 0u;
    u32 r9 = i;
    do {
        gptr<Local_002ee3a8_r5_1> r5_1 = gptr<Local_002ee3a8_r5_1>(r7 + (i << 2));
        TextBox__unlock(r5_1->word_4a4, r1);
        r1 = guest::cpu()->r[1];
        u32 r0_4 = *gptr<u32>(r5_1.addr() + 0x4a4u);
        if (r0_4 != 0) {
            script__RenderTrace__destructor_b(r0_4, r1);
            free_memory(r0_4);
            r1 = guest::cpu()->r[1];
        }
        i += 1u;
        r5_1->word_4a4 = r9;
        guest::preempt();
    } while (s32(i) < 5);
    TextBox__unlock(*gptr<u32>(r7 + 0x4b8u), r1);
    u32 r0_6 = *gptr<u32>(r7 + 0x4b8u);
    if (r0_6 != 0) {
        script__RenderTrace__destructor_b(r0_6, guest::cpu()->r[1]);
        free_memory(r0_6);
    }
    *gptr<u32>(r7 + 0x4b8u) = r9;
    if (*gptr<u8>(r8 + 0xe6u) == 1u || *gptr<u8>(r8 + 0xe7u) == 1u) {
        u32 r0_7 = *gptr<u8>(r8 + 0xe9u);
        if (r0_7 == 1u) {
            u32 r0_8 = get_state_30(r0_7, guest::cpu()->r[1]);
            *gptr<u8>(r0_8 + 0x40u) = 1;
            u32 r0_9 = get_state_30(r0_8, 1u);
            TalkWindow__update_state(*gptr<u32>(r0_9 + 0x1f4u));
        } else {
            u32 r0_11 = get_state_30(r0_7, guest::cpu()->r[1]);
            *gptr<u8>(r0_11 + 0x40u) = u8(r9);
        }
    }
}

}  // namespace d_002ee3a8
GUEST_EXPORT_FRAMED(0x002ee3a8, d_002ee3a8::ItemSelectWindow__release, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_002ee564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the item selection window's layout archive; marks it loaded (+0xce4).
namespace d_002ee564 {

struct __attribute__((packed)) ItemSelectWindowLoadLayoutArg0 {
    u8 unknown_0[0xce4];  // (not used here)
    u8 byte_ce4;
};
GUEST_OFFSET(ItemSelectWindowLoadLayoutArg0, byte_ce4, 0xce4);

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> load_layout_archive;

u32 ItemSelectWindow__load_layout(gptr<ItemSelectWindowLoadLayoutArg0> item_select_window) {
    u32 r0_2 = load_layout_archive(item_select_window.addr() + 0x24u, 0x2ee588u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r1_1 = 1u;
        item_select_window->byte_ce4 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_002ee564
GUEST_EXPORT_FRAMED(0x002ee564, d_002ee564::ItemSelectWindow__load_layout, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ee5a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the address select window: a layout, archive accessor, buttons, choices and a renderer.
namespace d_002ee5a8 {

struct __attribute__((packed)) Local_002ee5a8_r0_17 {
    u8 unknown_0[0x1fc];  // (not used here)
    u8 byte_1fc;
    u8 byte_1fd;
    u8 byte_1fe;
    u8 byte_1ff;
    u8 byte_200;
    u8 byte_201;
    u8 unknown_202[0x2];  // (not used here)
    u32 word_204;
    u32 word_208;
    u32 word_20c;
    u32 word_210;
    u32 word_214;
    u32 word_218;
    u32 word_21c;
    u32 word_220;
};
GUEST_OFFSET(Local_002ee5a8_r0_17, byte_1fc, 0x1fc);
GUEST_OFFSET(Local_002ee5a8_r0_17, byte_1fd, 0x1fd);
GUEST_OFFSET(Local_002ee5a8_r0_17, byte_1fe, 0x1fe);
GUEST_OFFSET(Local_002ee5a8_r0_17, byte_1ff, 0x1ff);
GUEST_OFFSET(Local_002ee5a8_r0_17, byte_200, 0x200);
GUEST_OFFSET(Local_002ee5a8_r0_17, byte_201, 0x201);
GUEST_OFFSET(Local_002ee5a8_r0_17, word_204, 0x204);
GUEST_OFFSET(Local_002ee5a8_r0_17, word_208, 0x208);
GUEST_OFFSET(Local_002ee5a8_r0_17, word_20c, 0x20c);
GUEST_OFFSET(Local_002ee5a8_r0_17, word_210, 0x210);
GUEST_OFFSET(Local_002ee5a8_r0_17, word_214, 0x214);
GUEST_OFFSET(Local_002ee5a8_r0_17, word_218, 0x218);
GUEST_OFFSET(Local_002ee5a8_r0_17, word_21c, 0x21c);
GUEST_OFFSET(Local_002ee5a8_r0_17, word_220, 0x220);

inline constexpr u32 vtable_AddressSelectWindow = 0x008f3cc0u;
inline guest::global<u32, 0x0084519c> global_0084519c;
inline guest::global<u32, 0x008451a0> global_008451a0;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> allocate;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0033f0d8, u32(u32)> construct_button_action_control_choice;
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> script__RenderTrace__RenderTrace;

u32 AddressSelectWindow__AddressSelectWindow(gptr<AddressSelectWindow> address_select_window) {
    u32 r0 = address_select_window.addr();
    u32 r6 = 0u;
    address_select_window->word_4 = r6;
    address_select_window->byte_8 = u8(r6);
    u32 r2_1 = *global_008451a0;
    address_select_window->word_c = *global_0084519c;
    address_select_window->word_10 = r2_1;
    address_select_window->word_14 = r6;
    address_select_window->byte_18 = u8(r6);
    address_select_window->word_1c = r6;
    address_select_window->vtable = vtable_AddressSelectWindow;
    address_select_window->word_20 = r6;
    u32 ea_1 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0 + 0x24u, vtable_AddressSelectWindow, r2_1, r0 + 0xcu) + 0x248u;
    *gptr<u32>(ea_1) = r6;
    u32 r0_5 = Layout__Layout(ea_1 + 4u) - 0x270u;
    *gptr<u32>(r0_5 + 0x3bcu) = r6;
    u32 ea_3 = r0_5 + 0x3c0u;
    *gptr<u32>(ea_3) = r6;
    u32 r0_6 = ea_3 + 4u;
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 + 0x28u;
    construct_layout_animation(r0_8);
    u32 r0_11 = for_each_element(r0_8 + 0x28u, 0x125aecu, 0x28u, 2u) - 0x43cu;
    *gptr<u32>(r0_11 + 0x4a0u) = r6;
    u32 ea_5 = r0_11 + 0x4b8u;
    *gptr<u32>(ea_5) = r6;
    u32 r0_12 = ea_5 + 4u;
    construct_button_action_control_choice(r0_12);
    u32 r0_15 = for_each_element(r0_12 + 0xe8u, 0x2b6de0u, 0xe0u, 5u) + 0x460u;
    construct_button_action_control(r0_15);
    u32 r0_16 = r0_15 + 0xe4u;
    gptr<Local_002ee5a8_r0_17> r0_17 = gptr<Local_002ee5a8_r0_17>(for_each_element(r0_16, 0x2b6de0u, 0xe0u, 2u));
    u32 r1 = guest::cpu()->r[1];
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    r0_17->byte_1fc = u8(r6);
    r0_17->byte_1fd = u8(r6);
    r0_17->byte_1fe = u8(r6);
    r0_17->byte_1ff = u8(r6);
    r0_17->byte_200 = u8(r6);
    r0_17->byte_201 = u8(r6);
    r0_17->word_204 = r6;
    r0_17->word_208 = r6;
    r0_17->word_20c = r6;
    r0_17->word_210 = r6;
    r0_17->word_214 = r6;
    r0_17->word_218 = r6;
    r0_17->word_21c = r6;
    u32 r5 = r0_17.addr() - 0xae8u;
    u32 i = 0u;
    r0_17->word_220 = r6;
    do {
        u32 block = allocate(0xc4u, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (block != 0) {
            block = script__RenderTrace__RenderTrace(block, 0x15u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r1 = r5 + (i << 2);
        i += 1u;
        *gptr<u32>(r1 + 0x4a4u) = block;
        *gptr<u32>(r1 + 0x48cu) = r6;
        guest::preempt();
    } while (s32(i) < 5);
    return r5;
}

}  // namespace d_002ee5a8
GUEST_EXPORT_FRAMED(0x002ee5a8, d_002ee5a8::AddressSelectWindow__AddressSelectWindow, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_002ee898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading a split (path arg 1) unless one is loaded, and sets its count from the loaded size
// (size / 40).
namespace d_002ee898 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u32 word_d4;
    u8 unknown_d8[0x14];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_d0, 0xd0);
GUEST_OFFSET(sead__SafeStringBase_char_, word_d4, 0xd4);
GUEST_OFFSET(sead__SafeStringBase_char_, word_ec, 0xec);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr guest::Function<0x00138744, u32(u32)> destroy_load_split_base_part;
inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> LoadSplit__start;

struct __attribute__((packed)) SplitLoaderStartFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SplitLoaderStartFrame, object_0_vtable, 0x0);
GUEST_OFFSET(SplitLoaderStartFrame, word_4, 0x4);
GUEST_SIZE(SplitLoaderStartFrame, 0xc);

void SplitLoader__start(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1) {
    guest::StackFrameOf<SplitLoaderStartFrame> frame;  // the original's stack frame
    if (safe_string_base_char->word_d0 != 0) {
        return;
    }
    frame->word_4 = r1;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    if (LoadSplit__start(safe_string_base_char.addr(), frame.at(0).addr(), guest::cpu()->r[2], 4u) != 0) {
        safe_string_base_char->word_ec = u32(u64(0xcccccccdu) * safe_string_base_char->word_d4 >> 0x20) >> 5;
        return;
    }
    destroy_load_split_base_part(safe_string_base_char.addr());
    safe_string_base_char->word_ec = 0;
}

}  // namespace d_002ee898
GUEST_EXPORT_FRAMED(0x002ee898, d_002ee898::SplitLoader__start, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002ee91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the split load's part and clears its word (+0xec); true.
namespace d_002ee91c {

struct __attribute__((packed)) LoadSplitWord {
    u8 unknown_0[0xec];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(LoadSplitWord, word_ec, 0xec);

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> destroy_load_split_base_part;

u32 LoadSplitWord__release(gptr<LoadSplitWord> load_split_word) {
    destroy_load_split_base_part(load_split_word.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    load_split_word->word_ec = 0;
    return 1u;
}

}  // namespace d_002ee91c
GUEST_EXPORT_FRAMED(0x002ee91c, d_002ee91c::LoadSplitWord__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ee938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading a split (path arg 1) on a heap (arg 2), and sets its count from the loaded size (size / 40).
namespace d_002ee938 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
    u8 unknown_d8[0x14];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_d4, 0xd4);
GUEST_OFFSET(sead__SafeStringBase_char_, word_ec, 0xec);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) SeadSafeStringBaseCharSafeStringBase002ee938Frame {
    u32 object_0_vtable;
    u32 word_4;
};
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase002ee938Frame, object_0_vtable, 0x0);
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase002ee938Frame, word_4, 0x4);
GUEST_SIZE(SeadSafeStringBaseCharSafeStringBase002ee938Frame, 0x8);

u32 SplitLoader__start_on_heap(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1, u32 r2) {
    guest::StackFrameOf<SeadSafeStringBaseCharSafeStringBase002ee938Frame> frame;  // the original's stack frame
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    frame->word_4 = r1;
    u32 r0_1 = load_split_start(safe_string_base_char.addr(), frame.at(0).addr(), r2, 4u);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_3 = u32(u64(0xcccccccdu) * safe_string_base_char->word_d4 >> 0x20) >> 5;
    safe_string_base_char->word_ec = r1_3;
    guest::cpu()->r[1] = r1_3;
    return r0_1;
}

}  // namespace d_002ee938
GUEST_EXPORT_FRAMED(0x002ee938, d_002ee938::SplitLoader__start_on_heap, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ee990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the split load with a cleared word (+0xec).
namespace d_002ee990 {

struct __attribute__((packed)) LoadSplitWord {
    u8 unknown_0[0xec];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(LoadSplitWord, word_ec, 0xec);

inline constexpr guest::Function<0x0012ca7c, u32(u32)> construct_load_split;

u32 LoadSplitWord__LoadSplitWord(gptr<LoadSplitWord> load_split_word) {
    construct_load_split(load_split_word.addr());
    load_split_word->word_ec = 0;
    guest::cpu()->r[1] = 0u;
    return load_split_word.addr();
}

}  // namespace d_002ee990
GUEST_EXPORT_FRAMED(0x002ee990, d_002ee990::LoadSplitWord__LoadSplitWord, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ee9a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the part, clears the word and destroys the split load.
namespace d_002ee9a4 {

struct __attribute__((packed)) LoadSplitWord {
    u8 unknown_0[0xec];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(LoadSplitWord, word_ec, 0xec);

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> destroy_load_split_base_part;
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> destroy_load_split;

u32 LoadSplitWord__destroy(gptr<LoadSplitWord> load_split_word) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    destroy_load_split_base_part(load_split_word.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    load_split_word->word_ec = 0;
    frame.release();
    return destroy_load_split(load_split_word.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002ee9a4
GUEST_EXPORT(0x002ee9a4, d_002ee9a4::LoadSplitWord__destroy);

// f_002ee9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of 0x18-byte entry `index` at +0x6e8 of the table held by 0x94ed40.
namespace d_002ee9c4 {

inline guest::global<u32, 0x0094ed40> table_94ed40;

u32 table_94ed40_entry_6e8(u32 r0) {
    return r0 * 0x18u + 0x6e8u + *gptr<u32>(*table_94ed40 + 0x14u);
}

}  // namespace d_002ee9c4
GUEST_EXPORT(0x002ee9c4, d_002ee9c4::table_94ed40_entry_6e8);

// f_002ee9ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of 0x18-byte entry `index` at +0x10 of the table held by 0x94ed40.
namespace d_002ee9ec {

inline guest::global<u32, 0x0094ed40> table_94ed40;

u32 table_94ed40_entry_10(u32 r0) {
    return r0 * 0x18u + 0x10u + *gptr<u32>(*table_94ed40 + 0x14u);
}

}  // namespace d_002ee9ec
GUEST_EXPORT(0x002ee9ec, d_002ee9ec::table_94ed40_entry_10);

// f_002eea10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the insect and fish book parameters' access: binds the parameter file on the stage heap and
// registers itself.
namespace d_002eea10 {

inline constexpr u32 vtable_BookParameterAccess = 0x008f3cd4u;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u32, 0x0094ed40> table_94ed40;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x00125b3c, u32(u32, u32, u32, u32)> ObjectBinding__bind;
inline constexpr guest::Function<0x0012ca54, u32(u32, u32, u32, u32)> store_constants_12ca54_0012ca54;

u32 BookParameterAccess__BookParameterAccess(gptr<BookParameterAccess> book_parameter_access, u32 r1_unused, u32 r2, u32 r3) {
    book_parameter_access->vtable = vtable_BookParameterAccess;
    u32 r0_1 = book_parameter_access.addr() + 4u;
    store_constants_12ca54_0012ca54(r0_1, vtable_BookParameterAccess, r2, r3);
    ObjectBinding__bind(r0_1, 0x84605du, *stage_heap, 0u);
    book_parameter_access->word_14 = book_parameter_access->word_8;
    *table_94ed40 = r0_1 - 4u;
    return r0_1 - 4u;
}

}  // namespace d_002eea10
GUEST_EXPORT_FRAMED(0x002eea10, d_002eea10::BookParameterAccess__BookParameterAccess, 0x4010);  // pushes {r4, lr} first, as the original

// f_002eec34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts two panes of the layout at +0x2e4 at 0 and 350 and shows them, then updates the layout.
namespace d_002eec34 {

struct __attribute__((packed)) Child {
    u8 unknown_0[0x28];  // (not used here)
    float float_28;
    u8 unknown_2c[0x8b];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Child, float_28, 0x28);
GUEST_OFFSET(Child, byte_b7, 0xb7);

struct __attribute__((packed)) Local_002eec34_r0_4 {
    u8 unknown_0[0x28];  // (not used here)
    float float_28;
    u8 unknown_2c[0x8b];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002eec34_r0_4, float_28, 0x28);
GUEST_OFFSET(Local_002eec34_r0_4, byte_b7, 0xb7);

inline constexpr u32 pane_position_a_address = 0x0094f760u;
inline constexpr u32 pane_position_b_address = 0x0094f764u;
inline guest::global<u32, 0x0094f760> pane_position_a;
inline guest::global<u32, 0x0094f764> pane_position_b;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

void reset_two_pane_positions(u32 r0, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = r0 + 0x2e4u;
    u32 r1_1 = *pane_position_a;
    gptr<Child> child = gptr<Child>(LayoutObjectWithChild__forward_to_child(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]));
    float S0_1 = 0.0f;
    child->float_28 = S0_1;
    child->byte_b7 = u8(u32(child->byte_b7) & 0xcfu);
    u32 r1_2 = *pane_position_b;
    u32 r0_3 = r0 + 0x2e4u;
    guest::cpu()->s[0] = S0_1;
    gptr<Local_002eec34_r0_4> child_2 = gptr<Local_002eec34_r0_4>(LayoutObjectWithChild__forward_to_child(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]));
    float S0_2 = 350.0f;
    child_2->float_28 = S0_2;
    child_2->byte_b7 = u8(u32(child_2->byte_b7) & 0xcfu);
    guest::cpu()->s[0] = S0_2;
    frame.release();
    Layout__virtual_3(r0 + 0x2e4u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_002eec34
GUEST_EXPORT(0x002eec34, d_002eec34::reset_two_pane_positions);

// f_002ef1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the selected notice read when the player owns the slot, takes back the selection and plays the closing
// animation of the current tab.
namespace d_002ef1b8 {

struct __attribute__((packed)) NoticeBoard {
    u8 unknown_0[0x22e0];  // (not used here)
    u32 word_22e0;
    u32 word_22e4;
    u8 unknown_22e8[0x8];  // (not used here)
    u32 word_22f0;
};
GUEST_OFFSET(NoticeBoard, word_22e0, 0x22e0);
GUEST_OFFSET(NoticeBoard, word_22e4, 0x22e4);
GUEST_OFFSET(NoticeBoard, word_22f0, 0x22f0);

struct __attribute__((packed)) Local_002ef1b8_r4_1 {
    u8 unknown_0[0x2d5];  // (not used here)
    u8 byte_2d5;
    u8 byte_2d6;
    u8 unknown_2d7[0x9];  // (not used here)
    u32 word_2e0;
    u32 word_2e4;
    u8 unknown_2e8[0x4];  // (not used here)
    u32 word_2ec;
};
GUEST_OFFSET(Local_002ef1b8_r4_1, byte_2d5, 0x2d5);
GUEST_OFFSET(Local_002ef1b8_r4_1, byte_2d6, 0x2d6);
GUEST_OFFSET(Local_002ef1b8_r4_1, word_2e0, 0x2e0);
GUEST_OFFSET(Local_002ef1b8_r4_1, word_2e4, 0x2e4);
GUEST_OFFSET(Local_002ef1b8_r4_1, word_2ec, 0x2ec);

inline constexpr u32 global_0094f7cc_address = 0x0094f7ccu;
inline constexpr guest::Function<0x00108421, u32(u32, u32)> record_1ac_address;
inline constexpr guest::Function<0x00118771, u32(u32, u32)> set_flag_of_1aa;
inline constexpr guest::Function<0x002fae84, u32(u32, u32)> get_data_base;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> Animation__set_value;
inline constexpr guest::Function<0x005c2c80, u32(u32, u32, u32, u32)> main_slot_value_is_local;

void NoticeBoard__close_selection(gptr<NoticeBoard> notice_board, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = main_slot_value_is_local(notice_board.addr(), r1, r2, r3);
    gptr<Local_002ef1b8_r4_1> r4_1 = gptr<Local_002ef1b8_r4_1>(notice_board.addr() + 0x2000u);
    if (r0_1 != 0) {
        u32 r0_2 = notice_board->word_22e4;
        if (s32(r0_2) >= 0) {
            u32 r1_1 = notice_board->word_22e0;
            if (r0_2 != r1_1) {
                u32 data_base = get_data_base(r0_2, r1_1);
                u32 r0_5 = record_1ac_address(data_base + 0x6e238u, notice_board->word_22e4);
                set_flag_of_1aa(r0_5, notice_board->word_22f0);
            }
        }
    }
    r4_1->byte_2d5 = 0;
    r4_1->byte_2d6 = 1;
    r4_1->word_2e4 = r4_1->word_2e0;
    u32 pane = Layout__find_pane(notice_board.addr() + 0x2e4u, *gptr<u32>((r4_1->word_2ec << 2) + global_0094f7cc_address + 8u), 1u);
    notify_objects_of_list(pane, notice_board.addr() + r4_1->word_2ec * 0x28u + 0x790u, pane, 0u);
    float S0_5 = 0.0f;
    u32 r0_8 = notice_board.addr() + r4_1->word_2ec * 0x28u;
    guest::cpu()->s[0] = S0_5;
    frame.release();
    Animation__set_value(r0_8 + 0x790u, guest::cpu()->r[1]);
    return;
}

}  // namespace d_002ef1b8
GUEST_EXPORT(0x002ef1b8, d_002ef1b8::NoticeBoard__close_selection);

// f_002ef27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the new mark on each tab that has unread notices.
namespace d_002ef27c {

struct __attribute__((packed)) NoticeBoard {
    u8 unknown_0[0x22dc];  // (not used here)
    u32 word_22dc;
    u32 word_22e0;
};
GUEST_OFFSET(NoticeBoard, word_22dc, 0x22dc);
GUEST_OFFSET(NoticeBoard, word_22e0, 0x22e0);

struct __attribute__((packed)) Local_002ef27c_r0_21 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002ef27c_r0_21, byte_b7, 0xb7);

struct __attribute__((packed)) Local_002ef27c_r0_23 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002ef27c_r0_23, byte_b7, 0xb7);

struct __attribute__((packed)) Local_002ef27c_r1_13 {
    u8 unknown_0[0xfc];  // (not used here)
    u8 byte_fc;
    u8 unknown_fd[0x1];  // (not used here)
    u8 byte_fe;
};
GUEST_OFFSET(Local_002ef27c_r1_13, byte_fc, 0xfc);
GUEST_OFFSET(Local_002ef27c_r1_13, byte_fe, 0xfe);

struct __attribute__((packed)) Local_002ef27c_r1_14 {
    u8 unknown_0[0xfc];  // (not used here)
    u8 byte_fc;
    u8 unknown_fd[0x1];  // (not used here)
    u8 byte_fe;
};
GUEST_OFFSET(Local_002ef27c_r1_14, byte_fc, 0xfc);
GUEST_OFFSET(Local_002ef27c_r1_14, byte_fe, 0xfe);

struct __attribute__((packed)) Local_002ef27c_r6_1 {
    u8 unknown_0[0x1d8];  // (not used here)
    u32 view;
};
GUEST_OFFSET(Local_002ef27c_r6_1, view, 0x1d8);

struct __attribute__((packed)) Local_002ef27c_r6_2 {
    u8 unknown_0[0x200];  // (not used here)
    u32 word_200;
};
GUEST_OFFSET(Local_002ef27c_r6_2, word_200, 0x200);

inline constexpr guest::Function<0x00108421, u32(u32, u32)> record_1ac_address;
inline constexpr guest::Function<0x0011b53d, u32(u32, u32)> has_flag_of_1aa;
inline constexpr guest::Function<0x0011b56b, u32(u32, u32, u32, u32)> flag_20_of_1aa;
inline constexpr guest::Function<0x001ae738, u32(u32, u32, u32, u32)> NoticeWork__ReceptFoot__ReceptFoot;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x005c2c80, u32(u32, u32, u32, u32)> main_slot_value_is_local;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x0070b1a4, u32(u32, u32, u32, u32)> entry_12_at;

struct __attribute__((packed)) NoticeBoardUpdateNewMarksFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(NoticeBoardUpdateNewMarksFrame, word_0, 0x0);
GUEST_OFFSET(NoticeBoardUpdateNewMarksFrame, word_4, 0x4);
GUEST_SIZE(NoticeBoardUpdateNewMarksFrame, 0xc);

u32 NoticeBoard__update_new_marks(gptr<NoticeBoard> notice_board, u32 r1, u32 r2) {
    guest::StackFrameOf<NoticeBoardUpdateNewMarksFrame> frame;  // the original's stack frame
    u32 r0 = notice_board.addr();
    u32 r3 = 0;
    u32 i = 0;
    u32 entries = 0;
    u32 r12 = 0;
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r5_2 = 0;
    u32 r0_20 = 0;
    gptr<Local_002ef27c_r0_21> r0_21 = gptr<Local_002ef27c_r0_21>(0u);
    u32 r0_22 = 0;
    gptr<Local_002ef27c_r0_23> r0_23 = gptr<Local_002ef27c_r0_23>(0u);
    gptr<Local_002ef27c_r1_13> r1_13 = gptr<Local_002ef27c_r1_13>(0u);
    u32 r3_12 = 0;
    u32 r5_3 = 0;
    u32 r3_13 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r4 = r0;
    u32 r7 = r0 + 0x2000u;
    u32 r9 = r1;
    u32 r11 = 0x848958u;
    frame->word_0 = notice_board->word_22dc;
    frame->word_4 = 0;
    u32 r8 = r2;
    u32 r3_1 = notice_board->word_22e0 + 1u;
    if (r2 == 0) {
        NoticeWork__ReceptFoot__ReceptFoot(r4 + 0x860u, r9, r4 + 0x808u, r3_1);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i = 0u;
        do {
            u32 r1_1 = *gptr<u8>(r11 + i);
            u32 r0_3 = entry_12_at(r4 + 0x860u, r1_1, r2, r3);
            gptr<Local_002ef27c_r6_1> r6_1 = gptr<Local_002ef27c_r6_1>(r4 + (i << 2) + 0x1000u);
            u32 view = r6_1->view;
            start_message(view, r0_3, view);
            r0_5 = TextBox__layout_lines(r6_1->view);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (s32(i) < 0xa);
        u32 r0_6 = main_slot_value_is_local(r0_5, guest::cpu()->r[1], r2, r3);
        if (r0_6 != 0) {
            u32 data_base = get_data_base(r0_6);
            u32 r0_9 = record_1ac_address(data_base + 0x6e238u, *gptr<u32>(r7 + 0x2e0u));
            if (has_flag_of_1aa(r0_9, *gptr<u32>(r7 + 0x2f0u)) == 0) {
                r5_1 = 1u;
                goto L_2ef424;
            }
        }
        r5_1 = 0u;
        goto L_2ef424;
    }
    r0_11 = r4 + 0xd1cu;
    r2_7 = r4 + 0x830u;
    entries = r0_11;
    NoticeWork__ReceptFoot__ReceptFoot(r0_11, r9, r2_7, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    i = 0u;
    do {
        u32 r1_7 = *gptr<u8>(r11 + i);
        u32 source = entry_12_at(entries, r1_7, r2, r3);
        gptr<Local_002ef27c_r6_2> r6_2 = gptr<Local_002ef27c_r6_2>(r4 + (i << 2) + 0x1000u);
        u32 r2_8 = r6_2->word_200;
        start_message(r2_8, source, r2_8);
        r0_14 = TextBox__layout_lines(r6_2->word_200);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
    r0_15 = main_slot_value_is_local(r0_14, guest::cpu()->r[1], r2, r3);
    if (r0_15 != 0) {
        u32 data_base_2 = get_data_base(r0_15);
        u32 r0_18 = record_1ac_address(data_base_2 + 0x6e238u, *gptr<u32>(r7 + 0x2e0u));
        r5_2 = has_flag_of_1aa(r0_18, *gptr<u32>(r7 + 0x2f0u)) == 0;
    } else {
        r5_2 = 0u;
    }
    r0_20 = r4 + 0x2e4u;
    r0_21 = gptr<Local_002ef27c_r0_21>(LayoutObjectWithChild__forward_to_child(r0_20, 0x2ef528u));
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(r0_21->byte_b7) & 0xfeu | r5_2;
    r0_21->byte_b7 = u8(r1);
L_2ef36c:;
    r0 = flag_20_of_1aa(r9, r1, r2, r3);
    r12 = 0xaaaaaaabu;
    if (r0 != 0) {
        r0 = 1u;
    }
    r2 = 0u;
    if (r8 == 0) {
        goto L_2ef444;
    }
    goto L_2ef4b4;
L_2ef424:;
    r0_22 = r4 + 0x2e4u;
    r0_23 = gptr<Local_002ef27c_r0_23>(LayoutObjectWithChild__forward_to_child(r0_22, 0x2ef53cu));
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(r0_23->byte_b7) & 0xfeu | r5_1;
    r0_23->byte_b7 = u8(r1);
    guest::preempt();
    goto L_2ef36c;
L_2ef444:;
    r1_13 = gptr<Local_002ef27c_r1_13>(*gptr<u32>(r4 + (r2 << 2) + 0x808u));
    r3_12 = r1_13->byte_fc;
    r5_3 = u32(u64(r12) * r3_12 >> 0x20) >> 1;
    r3_13 = (r3_12 + (r5_3 - (r5_3 << 2)) & 0xffu) != r0;
    r1_13->byte_fe = u8(r3_13 | u32(r1_13->byte_fe));
    if (r3_13 != 0) {
        r1_13->byte_fc = u8((u32(s16(u32(r1_13->byte_fc)) * s16(0xabu)) >> 9) * 3u + r0);
    }
    r2 += 1u;
    if (s32(r2) < 6) {
        guest::preempt();
        goto L_2ef444;
    }
    guest::cpu()->r[1] = r1_13.addr();
    return r0;
L_2ef4b4:;
    gptr<Local_002ef27c_r1_14> r1_14 = gptr<Local_002ef27c_r1_14>(*gptr<u32>(r4 + (r2 << 2) + 0x830u));
    u32 r3_14 = r1_14->byte_fc;
    u32 r5_4 = u32(u64(r12) * r3_14 >> 0x20) >> 1;
    u32 r3_15 = (r3_14 + (r5_4 - (r5_4 << 2)) & 0xffu) != r0;
    r1_14->byte_fe = u8(r3_15 | u32(r1_14->byte_fe));
    if (r3_15 != 0) {
        r1_14->byte_fc = u8((u32(s16(u32(r1_14->byte_fc)) * s16(0xabu)) >> 9) * 3u + r0);
    }
    r2 += 1u;
    if (s32(r2) >= 6) {
        guest::cpu()->r[1] = r1_14.addr();
        return r0;
    }
    guest::preempt();
    goto L_2ef4b4;
}

}  // namespace d_002ef27c
GUEST_EXPORT_FRAMED(0x002ef27c, d_002ef27c::NoticeBoard__update_new_marks, 0x4ff0);  // pushes {r4, i, r6, r7, r8, r9, entries, r11, lr} first, as the original
