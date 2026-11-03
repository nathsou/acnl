// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_0026451c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the global render settings (fog, lights and their colors) to their defaults.
namespace d_0026451c {

inline guest::global<u8, 0x00854188> global_00854188;
inline guest::global<u8, 0x00854189> global_00854189;
inline guest::global<u8, 0x0085418a> global_0085418a;
inline guest::global<u8, 0x00995339> global_00995339;
inline guest::global<u8, 0x0099533b> global_0099533b;
inline guest::global<u8, 0x0099533d> global_0099533d;
inline guest::global<u8, 0x00995438> global_00995438;
inline guest::global<u8, 0x00995439> global_00995439;
inline guest::global<u8, 0x0099543c> global_0099543c;
inline guest::global<u8, 0x00995441> global_00995441;
inline guest::global<u8, 0x00995442> global_00995442;
inline guest::global<u8, 0x00995445> global_00995445;
inline guest::global<u8, 0x0099544a> global_0099544a;
inline guest::global<u8, 0x0099544b> global_0099544b;
inline guest::global<u8, 0x0099544c> global_0099544c;
inline guest::global<u8, 0x0099544d> global_0099544d;
inline guest::global<u8, 0x00995450> global_00995450;
inline guest::global<u8, 0x00995451> global_00995451;
inline guest::global<u8, 0x00995454> global_00995454;
inline guest::global<u8, 0x009954e2> global_009954e2;
inline guest::global<u8, 0x009954e3> global_009954e3;
inline guest::global<u8, 0x009954e4> global_009954e4;
inline guest::global<u8, 0x009954e5> global_009954e5;

void RenderSettings__reset() {
    *global_009954e5 = 0xff;  // (from the original)
    *global_009954e4 = 0xff;  // (from the original)
    *global_009954e3 = 0xff;  // (from the original)
    *global_009954e2 = 0xff;  // (from the original)
    *global_00995438 = 0;
    *global_00995439 = 0;
    *global_0099543c = 0xe;  // (from the original)
    *global_00995450 = 0;
    *global_00995451 = 0;
    *global_00995454 = 0xf;  // (from the original)
    *global_00995441 = 0;
    *global_00995442 = 5;
    *global_00995445 = 3;
    *global_00995339 = 0;
    *global_0099533b = 6;
    *global_0099533d = 7;
    *global_0099544a = *global_00854188;
    *global_0099544b = *global_00854189;
    *global_0099544c = *global_0085418a;
    *global_0099544d = 0xff;  // (from the original)
}

}  // namespace d_0026451c
GUEST_EXPORT_FRAMED(0x0026451c, d_0026451c::RenderSettings__reset, 0x10);  // pushes {r4} first, as the original

// f_00264668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Ends the photo capture: restores the scene environment and the camera.
namespace d_00264668 {

struct __attribute__((packed)) PhotoCapture {
    u8 unknown_0[0x58];  // (not used here)
    u8 byte_58;
};
GUEST_OFFSET(PhotoCapture, byte_58, 0x58);

struct __attribute__((packed)) Object_00264668_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_00264668_1, word_14, 0x14);

inline guest::global<u32, 0x00950470> current_camera;
inline constexpr guest::Function<0x0011ef18, u32(u32)> Camera__make_current;
inline constexpr guest::Function<0x00495534, u32(u32, u32, u32, u32)> SceneEnv__reset;

void PhotoCapture__end(gptr<PhotoCapture> photo_capture, gptr<Object_00264668_1> arg1) {
    arg1->word_14 = 0;
    SceneEnv__reset(arg1.addr(), arg1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    Camera__make_current(*current_camera);
    photo_capture->byte_58 = 0;
}

}  // namespace d_00264668
GUEST_EXPORT_FRAMED(0x00264668, d_00264668::PhotoCapture__end, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00264698: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Begins the photo capture: sets up the scene environment, its camera and viewport.
namespace d_00264698 {

struct __attribute__((packed)) PhotoCapture {
    u8 unknown_0[0x58];  // (not used here)
    u8 byte_58;
    u8 unknown_59[0x2f];  // (not used here)
    u32 word_88;
};
GUEST_OFFSET(PhotoCapture, byte_58, 0x58);
GUEST_OFFSET(PhotoCapture, word_88, 0x88);

struct __attribute__((packed)) Object_00264698_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x8c];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(Object_00264698_1, word_14, 0x14);
GUEST_OFFSET(Object_00264698_1, word_a4, 0xa4);

inline constexpr u32 global_0095043c_address = 0x0095043cu;
inline guest::global<u32, 0x00950470> current_camera;
inline guest::global<u32, 0x00975320> current_frame_buffer;
inline constexpr guest::Function<0x0011ef18, u32(u32, u32)> Camera__make_current;
inline constexpr guest::Function<0x004957e4, u32(u32, u32)> SceneEnv__write_light_commands;
inline constexpr guest::Function<0x004959d4, u32(u32, u32, u32)> SceneEnv__set_camera;
inline constexpr guest::Function<0x0049b8f4, u32(u32, u32, u32, u32)> SceneEnv__update_lights;
inline constexpr guest::Function<0x004f0734, u32(u32)> PhotoMode__setup_scene;
inline constexpr guest::Function<0x00561310, u32(u32, u32)> sead__Viewport__Viewport_00561310;
inline constexpr guest::Function<0x0074f1c4, u32(u32, u32)> Viewport__apply;

void PhotoCapture__begin(gptr<PhotoCapture> photo_capture, gptr<Object_00264698_1> arg1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    photo_capture->byte_58 = 1;
    u32 r0_2 = SceneEnv__update_lights(arg1.addr() + 0x40u, arg1.addr(), r2, guest::cpu()->r[3]);  // (from the original)
    PhotoMode__setup_scene(r0_2);
    SceneEnv__set_camera(arg1.addr(), arg1->word_a4, 1u);
    SceneEnv__write_light_commands(arg1.addr(), 0u);
    arg1->word_14 = 1;
    *current_camera = *current_frame_buffer;
    Camera__make_current(photo_capture->word_88, global_0095043c_address);
    u32 r1_3 = photo_capture->word_88;
    sead__Viewport__Viewport_00561310(frame.at(0).addr(), r1_3);
    Viewport__apply(frame.at(0).addr(), r1_3);
}

}  // namespace d_00264698
GUEST_EXPORT_FRAMED(0x00264698, d_00264698::PhotoCapture__begin, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00265d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the paper shader on the weather heap.
namespace d_00265d54 {

inline constexpr u32 weather_heap_address = 0x00952c48u;
inline constexpr u32 global_009984ac_address = 0x009984acu;
inline guest::global<u32, 0x00952c48> weather_heap;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> FileLoader__load;

u32 PaperShader__load() {
    return FileLoader__load(global_009984ac_address, 0x265d70u, *weather_heap, 0x80u);  // (from the original)
}

}  // namespace d_00265d54
GUEST_EXPORT(0x00265d54, d_00265d54::PaperShader__load);

// f_00267188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the page and page count (up to 10 digits) and sets the previous and next pages, wrapping.
namespace d_00267188 {

struct __attribute__((packed)) PageCounter {
    u8 unknown_0[0x185c];  // (not used here)
    u32 word_185c;
    u8 unknown_1860[0x10];  // (not used here)
    u32 word_1870;
};
GUEST_OFFSET(PageCounter, word_185c, 0x185c);
GUEST_OFFSET(PageCounter, word_1870, 0x1870);

struct __attribute__((packed)) Local_00267188_r1_6 {
    u32 word_0;
};
GUEST_OFFSET(Local_00267188_r1_6, word_0, 0x0);

struct __attribute__((packed)) Local_00267188_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_00267188_r5_1, word_0, 0x0);

inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> construct_word_fix_19;
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> init_text_with_buffer;
inline constexpr guest::Function<0x00312cb0, u32(u32, u32)> set_word_num_digit_vtable;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> TextBox__layout_lines;

struct __attribute__((packed)) Frame_00267188 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00267188, word_0, 0x0);
GUEST_SIZE(Frame_00267188, 0x4c);

u32 PageCounter__show(gptr<PageCounter> page_counter, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00267188> frame;  // the original's stack frame
    construct_word_fix_19(frame.at(4).addr(), r1, r2, r3);
    u32 r6_1 = page_counter.addr() + 0x185cu;  // (from the original)
    frame->word_0 = 4;
    init_text_with_buffer(frame.at(4).addr(), *gptr<u32>(page_counter.addr() + (page_counter->word_185c << 2) + 0x1860u), 0xau, 0xau);  // (from the original)
    u32 view = page_counter.addr() + 0x1798u;  // (from the original)
    start_message(view, frame.at(4).addr());
    TextBox__layout_lines(view, guest::cpu()->r[1]);
    gptr<Local_00267188_r5_1> r5_1 = gptr<Local_00267188_r5_1>(page_counter.addr() + 0x1870u);  // (from the original)
    frame->word_0 = 4;
    init_text_with_buffer(frame.at(4).addr(), page_counter->word_1870, 0xau, 0xau);  // (from the original)
    u32 source = frame.at(4).addr();
    start_message(page_counter.addr() + 0x16d4u, source);  // (from the original)
    TextBox__layout_lines(page_counter.addr() + 0x16d4u, source);  // (from the original)
    gptr<Local_00267188_r1_6> r1_6 = gptr<Local_00267188_r1_6>(page_counter.addr() + (page_counter->word_185c << 2) + 0x1860u);  // (from the original)
    u32 r0_6 = r1_6->word_0;
    u32 r0_7 = r0_6 == 1u ? page_counter->word_1870 : r0_6 - 1u > page_counter->word_1870 ? 1u : r0_6 - 1u;
    *gptr<u16>(page_counter.addr() + 0x12c8u) = u16(r0_7 - 1u);  // (from the original)
    u32 r0_8 = r1_6->word_0;
    u32 r0_9 = r0_8 + 1u == 0 ? r5_1->word_0 : r0_8 + 1u > r5_1->word_0 ? 1u : r0_8 + 1u;
    *gptr<u16>(page_counter.addr() + 0x13f8u) = u16(r0_9 - 1u);  // (from the original)
    u32 r0_10 = frame.at(4).addr();
    set_word_num_digit_vtable(r0_10, 0x13f8u);  // (from the original)
    return r0_10;
}

}  // namespace d_00267188
GUEST_EXPORT_FRAMED(0x00267188, d_00267188::PageCounter__show, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00267758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00267758 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

u32 ChangeListBase__virtual_7(u32 change_list_base, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Layout__virtual_3(change_list_base + 0xa70u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = Layout__virtual_3(change_list_base + 0x270u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = read_global_975c20(r0_3);
    frame.release();
    return LayoutRenderer__draw_on_screen(r0_4, change_list_base + 0x270u, 1u);  // (from the original)
}

}  // namespace d_00267758
GUEST_EXPORT(0x00267758, d_00267758::ChangeListBase__virtual_7);

// f_002677cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002677cc {

inline constexpr guest::Function<0x00132364, u32(u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x002cd0e0, u32(u32)> ButtonList__update_all;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> DragIconList__remove;

u32 ChangeListBase__virtual_3(gptr<ChangeListBase> change_list_base) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    DragIconList__remove(change_list_base->word_d30, change_list_base->word_a90, guest::cpu()->r[2], guest::cpu()->r[3]);
    layout_at_10_virtual_8(change_list_base.addr() + 0xa70u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    release_layout_parts(change_list_base.addr() + 0x28u);  // (from the original)
    ButtonList__update_all(change_list_base.addr() + 0x40cu);  // (from the original)
    frame.release();
    return layout_at_10_virtual_8(change_list_base.addr() + 0x270u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002677cc
GUEST_EXPORT(0x002677cc, d_002677cc::ChangeListBase__virtual_3);

// f_00268270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268270 {


void ChangeListBase__virtual_8(u32 change_list_base) {
    u32 r1 = 0u;
    u32 r2 = change_list_base + 0x185cu;  // (from the original)
    do {
        u32 r3_1 = *gptr<u32>(r2) != r1;
        u32 r12_1 = change_list_base + (r1 * 3u + (r1 << 4) << 4);
        r1 += 1u;
        *gptr<u8>(r12_1 + 0xe0du) = u8(r3_1);  // (from the original)
        guest::preempt();
    } while (r1 < 4u);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00268270
GUEST_EXPORT(0x00268270, d_00268270::ChangeListBase__virtual_8);

// f_002682ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002682ac {

struct __attribute__((packed)) Local_002682ac_r0_7 {
    u32 vtable;
    u8 unknown_4[0xe0];  // (not used here)
    u32 control1_button_vtable;
};
GUEST_OFFSET(Local_002682ac_r0_7, vtable, 0x0);
GUEST_OFFSET(Local_002682ac_r0_7, control1_button_vtable, 0xe4);

struct __attribute__((packed)) Local_002682ac_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002682ac_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_002682ac_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_002682ac_r5_1, word_8, 0x8);

inline constexpr u32 vtable_ChangeListBase = 0x008ef1e0u;
inline constexpr u32 vtable_ChangeListBase_at_a40 = 0x008ef20cu;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ChangeRentalBase = 0x008f18d0u;
inline guest::global<u32, 0x0087a134> change_rental_handler;
inline guest::global<u32, 0x0087a138> change_rental_handler_adjust;
inline guest::global<u32, 0x0087a13c> global_0087a13c;
inline guest::global<u32, 0x0087a140> global_0087a140;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;
inline constexpr guest::Function<0x0022c53c, u32(u32)> DragIconGroup__DragIconGroup;
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32)> construct_control_button_base;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005e3128, u32(u32, u32)> script__RenderTrace__RenderTrace;

u32 ChangeRentalBase__ChangeRentalBase_002682ac(gptr<ChangeRentalBase> change_rental_base) {
    change_rental_base->word_4 = 0;
    change_rental_base->byte_8 = 0;
    u32 r2_1 = *change_rental_handler_adjust;
    change_rental_base->word_c = *change_rental_handler;
    change_rental_base->word_10 = r2_1;
    change_rental_base->word_14 = 0;
    change_rental_base->byte_18 = 0;
    change_rental_base->word_1c = 0;
    change_rental_base->vtable = vtable_ChangeRentalBase;
    change_rental_base->word_20 = 0;
    change_rental_base->word_24 = 0;
    u32 r0_2 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8((change_rental_base.addr() + 0x24u) + 4u, vtable_ChangeRentalBase, r2_1, change_rental_base.addr() + 0xcu);  // (from the original)
    u32 r0_4 = Layout__Layout(r0_2 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_5 = r0_4 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;  // (from the original)
    construct_layout_animation(r0_6);
    gptr<Local_002682ac_r0_7> r0_7 = gptr<Local_002682ac_r0_7>(r0_6 + 0x28u);  // (from the original)
    construct_control_button_base(r0_7.addr(), r0_7.addr() + 0x118u, 1u);  // (from the original)
    r0_7->vtable = vtable_Control1Button;
    r0_7->control1_button_vtable = vtable_Control1Button_at_e4;
    u32 r0_9 = for_each_element(r0_7.addr() + 0x118u, 0x2e0994u, 0x518u, 1u);  // (from the original)
    u32 r0_10 = r0_9 - 0x524u;  // (from the original)
    *gptr<u32>(r0_10 + 0xa3cu) = 0;  // (from the original)
    *gptr<u32>(r0_10 + 0xa44u) = 0;  // (from the original)
    *gptr<u8>(r0_10 + 0xa48u) = 0;  // (from the original)
    u32 r2_5 = *global_0087a13c;
    u32 r3_6 = *global_0087a140;
    gptr<Local_002682ac_r5_1> r5_1 = gptr<Local_002682ac_r5_1>(r0_10 + 0xa4cu);  // (from the original)
    r5_1->word_0 = r2_5;
    r5_1->word_4 = r3_6;
    r5_1->word_8 = 0;
    *gptr<u8>(r0_10 + 0xa58u) = 0;  // (from the original)
    *gptr<u32>(r0_10 + 0xa5cu) = 0;  // (from the original)
    *gptr<u32>(r0_10 + 0xa40u) = vtable_ChangeListBase_at_a40;  // (from the original)
    *gptr<u32>(r0_10) = vtable_ChangeListBase;
    *gptr<u32>(r0_10 + 0xa60u) = 0;  // (from the original)
    *gptr<u32>(r0_10 + 0xa64u) = 0;  // (from the original)
    *gptr<u32>(r0_10 + 0xa68u) = 0;  // (from the original)
    u32 ea_11 = r0_10 + 0xa6cu;  // (from the original)
    *gptr<u32>(ea_11) = 0;
    u32 r0_12 = Layout__Layout(ea_11 + 4u, vtable_ChangeListBase_at_a40, vtable_ChangeListBase, r3_6);
    u32 r0_13 = r0_12 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_13);
    u32 r0_14 = r0_13 + 0x28u;  // (from the original)
    construct_layout_animation(r0_14);
    u32 r0_15 = r0_14 + 0x28u;  // (from the original)
    construct_layout_animation(r0_15);
    u32 r0_16 = r0_15 + 0x28u;  // (from the original)
    construct_layout_animation(r0_16);
    u32 r0_17 = r0_16 + 0x28u;  // (from the original)
    construct_layout_animation(r0_17);
    u32 r0_18 = r0_17 + 0x28u;  // (from the original)
    construct_layout_animation(r0_18);
    u32 r0_19 = r0_18 + 0x28u;  // (from the original)
    construct_layout_animation(r0_19);
    u32 r0_20 = r0_19 + 0x28u;  // (from the original)
    construct_layout_animation(r0_20);
    u32 r0_21 = r0_20 + 0x28u;  // (from the original)
    construct_layout_animation(r0_21);
    u32 r0_22 = r0_21 - 0xcfcu;  // (from the original)
    *gptr<u32>(r0_22 + 0xd24u) = 0;  // (from the original)
    *gptr<u32>(r0_22 + 0xd28u) = 0;  // (from the original)
    *gptr<u32>(r0_22 + 0xd2cu) = 0;  // (from the original)
    u32 ea_15 = r0_22 + 0xd30u;  // (from the original)
    *gptr<u32>(ea_15) = 0;
    u32 r0_24 = for_each_element(ea_15 + 4u, 0x2d00bcu, 0x130u, 6u);  // (from the original)
    u32 drag_icon_group = r0_24 + 0x720u;  // (from the original)
    DragIconGroup__DragIconGroup(drag_icon_group);
    u32 r0_26 = drag_icon_group + 0x140u;  // (from the original)
    DragIconGroup__DragIconGroup(r0_26);
    u32 r0_28 = script__RenderTrace__RenderTrace(r0_26 + 0x140u, 2u);  // (from the original)
    u32 r0_30 = script__RenderTrace__RenderTrace(r0_28 + 0xc4u, 2u);  // (from the original)
    u32 r0_31 = r0_30 - 0x1798u;  // (from the original)
    *gptr<u32>(r0_31 + 0x185cu) = 0;  // (from the original)
    u32 r12_1 = 0x1870u | 1u << 2;  // (from the original)
    *gptr<u32>(r0_31 + 0x1870u) = 6;  // (from the original)
    u32 r6_1 = r12_1 + (1u << 2);
    *gptr<u32>(r12_1 + r0_31) = 0;
    *gptr<u32>(r6_1 + r0_31) = 0x1000466;  // (from the original)
    *gptr<u32>((r6_1 | 1u << 2) + r0_31) = 0;
    *gptr<u8>(r0_31 + 0x1880u) = 1;  // (from the original)
    *gptr<u32>((0x1880u | 1u << 2) + r0_31) = 0;  // (from the original)
    u32 r4_1 = 0x1880u - (1u << 5);  // (from the original)
    u32 r2_18 = r4_1 | 1u << 2;
    u32 r3_19 = r2_18 + (1u << 2);
    *gptr<u32>(r4_1 + r0_31) = 1;
    *gptr<u32>(r2_18 + r0_31) = 1;
    *gptr<u32>(r3_19 + r0_31) = 1;
    *gptr<u32>((r3_19 | 1u << 2) + r0_31) = 1;
    return r0_31;
}

}  // namespace d_002682ac
GUEST_EXPORT_FRAMED(0x002682ac, d_002682ac::ChangeRentalBase__ChangeRentalBase_002682ac, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002684c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002684c0 {

struct __attribute__((packed)) Local_002684c0_ea_1 {
    u32 vtable;
    u8 unknown_4[0x408];  // (not used here)
    u32 control1_button_vtable;
    u8 unknown_410[0xe0];  // (not used here)
    u32 control1_button_vtable_4f0;
};
GUEST_OFFSET(Local_002684c0_ea_1, vtable, 0x0);
GUEST_OFFSET(Local_002684c0_ea_1, control1_button_vtable, 0x40c);
GUEST_OFFSET(Local_002684c0_ea_1, control1_button_vtable_4f0, 0x4f0);

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_ChangeListBase = 0x008ef1e0u;
inline constexpr u32 vtable_ChangeListBase_at_a40 = 0x008ef20cu;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ChangeRentalBase = 0x008f18d0u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> script__RenderMain__RenderMain_005e3194;

u32 ChangeListBase__ChangeListBase(gptr<ChangeListBase> change_list_base, u32 r1_unused, u32 r2_unused, u32 r3) {
    change_list_base->vtable = vtable_ChangeListBase;
    change_list_base->change_list_base_vtable = vtable_ChangeListBase_at_a40;
    u32 r0_1 = change_list_base.addr() + 0x1798u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_1, vtable_ChangeListBase, vtable_ChangeListBase_at_a40, r3);
    u32 r0_2 = r0_1 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    change_list_base->drag_icon_group_vtable_15a0 = vtable_DragIconGroup_at_c;
    change_list_base->drag_icon_group_vtable_1594 = vtable_DragIconGroup;
    u32 r0_3 = r0_2 - 0x2cu;  // (from the original)
    destroy_animation(r0_3);
    u32 r0_4 = r0_3 - 0x28u;  // (from the original)
    destroy_animation(r0_4);
    u32 r0_5 = r0_4 - 0x28u;  // (from the original)
    destroy_animation(r0_5);
    u32 r0_6 = r0_5 - 0x28u;  // (from the original)
    destroy_animation(r0_6);
    u32 r0_7 = r0_6 - 0x28u;  // (from the original)
    destroy_animation(r0_7);
    u32 r0_8 = r0_7 - 0x28u;  // (from the original)
    destroy_animation(r0_8);
    u32 r0_9 = r0_8 - 0x2cu;  // (from the original)
    destroy_animation(r0_9);
    change_list_base->drag_icon_group_vtable_1460 = vtable_DragIconGroup_at_c;
    change_list_base->drag_icon_group_vtable = vtable_DragIconGroup;
    u32 r0_10 = r0_9 - 0x4cu;  // (from the original)
    destroy_animation(r0_10);
    u32 r0_11 = r0_10 - 0x28u;  // (from the original)
    destroy_animation(r0_11);
    u32 r0_12 = r0_11 - 0x28u;  // (from the original)
    destroy_animation(r0_12);
    u32 r0_13 = r0_12 - 0x28u;  // (from the original)
    destroy_animation(r0_13);
    u32 r0_14 = r0_13 - 0x28u;  // (from the original)
    destroy_animation(r0_14);
    u32 r0_15 = r0_14 - 0x28u;  // (from the original)
    destroy_animation(r0_15);
    u32 r0_16 = r0_15 - 0x2cu;  // (from the original)
    destroy_animation(r0_16);
    destroy_array_elements(r0_16 - 0x740u, 0x1ff9d4u, 0x130u, 6u);  // (from the original)
    u32 r0_18 = r0_16 - 0x778u;  // (from the original)
    destroy_animation(r0_18);
    u32 r0_19 = r0_18 - 0x28u;  // (from the original)
    destroy_animation(r0_19);
    u32 r0_20 = r0_19 - 0x28u;  // (from the original)
    destroy_animation(r0_20);
    u32 r0_21 = r0_20 - 0x28u;  // (from the original)
    destroy_animation(r0_21);
    u32 r0_22 = r0_21 - 0x28u;  // (from the original)
    destroy_animation(r0_22);
    u32 r0_23 = r0_22 - 0x28u;  // (from the original)
    destroy_animation(r0_23);
    u32 r0_24 = r0_23 - 0x28u;  // (from the original)
    destroy_animation(r0_24);
    u32 r0_25 = r0_24 - 0x28u;  // (from the original)
    destroy_animation(r0_25);
    u32 r0_26 = r0_25 - 0x28u;  // (from the original)
    destroy_animation(r0_26);
    u32 r0_28 = Layout__destructor(r0_26 - 0x14cu);  // (from the original)
    gptr<Local_002684c0_ea_1> ea_1 = gptr<Local_002684c0_ea_1>(r0_28 - 0xa70u);  // (from the original)
    ea_1->vtable = vtable_ChangeRentalBase;
    ea_1->control1_button_vtable = vtable_Control1Button;
    ea_1->control1_button_vtable_4f0 = vtable_Control1Button_at_e4;
    u32 r4_2 = ea_1.addr() + 0x40cu;  // (from the original)
    destroy_array_elements(ea_1.addr() + 0x524u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(r4_2);
    u32 r0_30 = r4_2 - 0x28u;  // (from the original)
    destroy_animation(r0_30);
    u32 r0_31 = r0_30 - 0x28u;  // (from the original)
    destroy_animation(r0_31);
    u32 r0_33 = Layout__destructor(r0_31 - 0x14cu);  // (from the original)
    u32 r0_35 = ssys__ma__lyt__ArcResAccReader__destructor(r0_33 - 0x248u);  // (from the original)
    return r0_35 - 0x28u;  // (from the original)
}

}  // namespace d_002684c0
GUEST_EXPORT_FRAMED(0x002684c0, d_002684c0::ChangeListBase__ChangeListBase, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002686d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the first button's value.
namespace d_002686d4 {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
};
GUEST_OFFSET(ButtonList, word_108, 0x108);


u32 ButtonList__set_first_value(gptr<ButtonList> button_list, u32 r1) {
    u32 r0_1 = button_list->word_108;
    *gptr<u32>(r0_1 + 0xc4u) = r1;  // (from the original)
    return r0_1;
}

}  // namespace d_002686d4
GUEST_EXPORT(0x002686d4, d_002686d4::ButtonList__set_first_value);

// f_0026876c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the messages of the buttons (up to 2) and marks them for update.
namespace d_0026876c {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(ButtonList, word_108, 0x108);
GUEST_OFFSET(ButtonList, word_10c, 0x10c);

struct __attribute__((packed)) Local_0026876c_r2_2 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
};
GUEST_OFFSET(Local_0026876c_r2_2, word_cc, 0xcc);
GUEST_OFFSET(Local_0026876c_r2_2, byte_da, 0xda);


struct __attribute__((packed)) Frame_0026876c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0026876c, word_0, 0x0);
GUEST_OFFSET(Frame_0026876c, word_4, 0x4);
GUEST_SIZE(Frame_0026876c, 0x8);

void ButtonList__set_messages_2(gptr<ButtonList> button_list, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0026876c> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r3 = frame.at(0).addr();
    frame->word_0 = r1;
    frame->word_4 = r2;
    u32 r1_1 = button_list->word_10c;
    r1 = 0u;
    if (r1_1 != 0 && r1_1 >> 0x1f == ((r1_1 & (r1_1 ^ r1_1)) >> 0x1f)) {  // (from the original)
        r4 = 1u;
    } else {
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        u32 r2_1 = r1 * 0xa3u;  // (from the original)
        u32 r12_1 = gptr<u32>(r3)[r1];
        r1 += 1u;
        gptr<Local_0026876c_r2_2> r2_2 = gptr<Local_0026876c_r2_2>(button_list->word_108 + (r2_1 << 3));
        r2_2->word_cc = r12_1;
        r2_2->byte_da = u8(r4);
        guest::preempt();
    } while (s32(button_list->word_10c) > s32(r1));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0026876c
GUEST_EXPORT_FRAMED(0x0026876c, d_0026876c::ButtonList__set_messages_2, 0x30);  // pushes {r4, r5} first, as the original

// f_00268818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the second messages of the buttons (up to 2) and marks them for update.
namespace d_00268818 {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(ButtonList, word_108, 0x108);
GUEST_OFFSET(ButtonList, word_10c, 0x10c);

struct __attribute__((packed)) Local_00268818_r2_1 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Local_00268818_r2_1, word_d0, 0xd0);
GUEST_OFFSET(Local_00268818_r2_1, byte_db, 0xdb);
GUEST_OFFSET(Local_00268818_r2_1, byte_dc, 0xdc);


struct __attribute__((packed)) Frame_00268818 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_00268818, word_0, 0x0);
GUEST_OFFSET(Frame_00268818, word_4, 0x4);
GUEST_SIZE(Frame_00268818, 0x8);

void ButtonList__set_sub_messages_2(gptr<ButtonList> button_list, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00268818> frame;  // the original's stack frame
    u32 r3 = 0;
    u32 r12 = frame.at(0).addr();
    frame->word_0 = r1;
    frame->word_4 = r2;
    u32 r1_1 = button_list->word_10c;
    r1 = 0u;
    if (r1_1 != 0 && r1_1 >> 0x1f == ((r1_1 & (r1_1 ^ r1_1)) >> 0x1f)) {  // (from the original)
        r3 = 1u;
    } else {
        return;
    }
    do {
        u32 r5_1 = r1 * 0xa3u;  // (from the original)
        u32 r4_1 = gptr<u32>(r12)[r1];
        r1 += 1u;
        gptr<Local_00268818_r2_1> r2_1 = gptr<Local_00268818_r2_1>(button_list->word_108 + (r5_1 << 3));
        r2_1->word_d0 = r4_1;
        r2_1->byte_db = u8(r3);
        r2_1->byte_dc = u8(r3);
        guest::preempt();
    } while (s32(button_list->word_10c) > s32(r1));
}

}  // namespace d_00268818
GUEST_EXPORT_FRAMED(0x00268818, d_00268818::ButtonList__set_sub_messages_2, 0x30);  // pushes {r4, r5} first, as the original

// f_00268878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the values of the buttons (up to 2).
namespace d_00268878 {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(ButtonList, word_108, 0x108);
GUEST_OFFSET(ButtonList, word_10c, 0x10c);


struct __attribute__((packed)) Frame_00268878 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00268878, word_0, 0x0);
GUEST_OFFSET(Frame_00268878, word_4, 0x4);
GUEST_SIZE(Frame_00268878, 0xc);

void ButtonList__set_values_2(gptr<ButtonList> button_list, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00268878> frame;  // the original's stack frame
    u32 r3 = frame.at(0).addr();
    frame->word_0 = r1;
    frame->word_4 = r2;
    u32 r1_1 = button_list->word_10c;
    r1 = 0u;
    if (r1_1 == 0 || r1_1 >> 0x1f != ((r1_1 & (r1_1 ^ r1_1)) >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        u32 r4_1 = r1 * 0xa3u;  // (from the original)
        u32 r12_1 = gptr<u32>(r3)[r1];
        r1 += 1u;
        *gptr<u32>(button_list->word_108 + (r4_1 << 3) + 0xc4u) = r12_1;  // (from the original)
        guest::preempt();
    } while (s32(button_list->word_10c) > s32(r1));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00268878
GUEST_EXPORT_FRAMED(0x00268878, d_00268878::ButtonList__set_values_2, 0x10);  // pushes {r4} first, as the original

// f_00268a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the messages of the buttons (up to 3) and marks them for update.
namespace d_00268a08 {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(ButtonList, word_108, 0x108);
GUEST_OFFSET(ButtonList, word_10c, 0x10c);

struct __attribute__((packed)) Local_00268a08_r2_3 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
};
GUEST_OFFSET(Local_00268a08_r2_3, word_cc, 0xcc);
GUEST_OFFSET(Local_00268a08_r2_3, byte_da, 0xda);


struct __attribute__((packed)) Frame_00268a08 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_00268a08, word_0, 0x0);
GUEST_OFFSET(Frame_00268a08, word_4, 0x4);
GUEST_OFFSET(Frame_00268a08, word_8, 0x8);
GUEST_SIZE(Frame_00268a08, 0xc);

void ButtonList__set_messages_3(gptr<ButtonList> button_list, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00268a08> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    frame->word_0 = r1;
    frame->word_4 = r2;
    frame->word_8 = r3;
    r3 = frame.at(0).addr();
    u32 r2_1 = button_list->word_10c;
    r1 = 0u;
    if (r2_1 != 0 && s32(r2_1) >= 0) {
        r4 = 1u;
    }
    if (s32(r2_1) <= 0) {
        return;
    }
    do {
        u32 r2_2 = r1 * 0xa3u;  // (from the original)
        u32 r12_1 = gptr<u32>(r3)[r1];
        r1 += 1u;
        gptr<Local_00268a08_r2_3> r2_3 = gptr<Local_00268a08_r2_3>(button_list->word_108 + (r2_2 << 3));
        r2_3->word_cc = r12_1;
        r2_3->byte_da = u8(r4);
        guest::preempt();
    } while (s32(button_list->word_10c) > s32(r1));
}

}  // namespace d_00268a08
GUEST_EXPORT_FRAMED(0x00268a08, d_00268a08::ButtonList__set_messages_3, 0x30);  // pushes {r4, r5} first, as the original

// f_00268ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the values of the buttons (up to 3).
namespace d_00268ab8 {

struct __attribute__((packed)) ButtonList {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(ButtonList, word_108, 0x108);
GUEST_OFFSET(ButtonList, word_10c, 0x10c);


struct __attribute__((packed)) Frame_00268ab8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_00268ab8, word_0, 0x0);
GUEST_OFFSET(Frame_00268ab8, word_4, 0x4);
GUEST_OFFSET(Frame_00268ab8, word_8, 0x8);
GUEST_SIZE(Frame_00268ab8, 0xc);

void ButtonList__set_values_3(gptr<ButtonList> button_list, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00268ab8> frame;  // the original's stack frame
    frame->word_0 = r1;
    frame->word_4 = r2;
    frame->word_8 = r3;
    r3 = frame.at(0).addr();
    r1 = 0u;
    if (s32(button_list->word_10c) <= 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        u32 r4_1 = r1 * 0xa3u;  // (from the original)
        u32 r12_1 = gptr<u32>(r3)[r1];
        r1 += 1u;
        *gptr<u32>(button_list->word_108 + (r4_1 << 3) + 0xc4u) = r12_1;  // (from the original)
        guest::preempt();
    } while (s32(button_list->word_10c) > s32(r1));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00268ab8
GUEST_EXPORT_FRAMED(0x00268ab8, d_00268ab8::ButtonList__set_values_3, 0x10);  // pushes {r4} first, as the original

// f_00268d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the action's target and its model.
namespace d_00268d94 {

struct __attribute__((packed)) Object_00268d94_0 {
    u8 unknown_0[0x3f4];  // (not used here)
    u32 word_3f4;
    u8 unknown_3f8[0x4];  // (not used here)
    u32 word_3fc;
};
GUEST_OFFSET(Object_00268d94_0, word_3f4, 0x3f4);
GUEST_OFFSET(Object_00268d94_0, word_3fc, 0x3fc);

inline constexpr guest::Function<0x004f1328, u32(u32, u32, u32, u32)> object_if_of_wanted_type;

void EmoticonAction__set_target(gptr<Object_00268d94_0> emoticon_action, u32 r1) {
    emoticon_action->word_3fc = r1;
    u32 r0_2 = object_if_of_wanted_type(r1 + 0x78u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    emoticon_action->word_3f4 = *gptr<u32>(r0_2 + 8u);
}

}  // namespace d_00268d94
GUEST_EXPORT_FRAMED(0x00268d94, d_00268d94::EmoticonAction__set_target, 0x4010);  // pushes {r4, lr} first, as the original

// f_00269478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00269478 {

struct __attribute__((packed)) Local_00269478_r0_3 {
    u8 unknown_0[0x3fc];  // (not used here)
    u32 word_3fc;
    u8 byte_400;
    u8 byte_401;
    u8 unknown_402[0x4];  // (not used here)
    u8 byte_406;
    u8 byte_407;
};
GUEST_OFFSET(Local_00269478_r0_3, word_3fc, 0x3fc);
GUEST_OFFSET(Local_00269478_r0_3, byte_400, 0x400);
GUEST_OFFSET(Local_00269478_r0_3, byte_401, 0x401);
GUEST_OFFSET(Local_00269478_r0_3, byte_406, 0x406);
GUEST_OFFSET(Local_00269478_r0_3, byte_407, 0x407);

struct __attribute__((packed)) Local_00269478_r2_1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(Local_00269478_r2_1, half_2, 0x2);
GUEST_OFFSET(Local_00269478_r2_1, half_4, 0x4);

inline constexpr u32 vtable_EmoticonAction = 0x008ef334u;
inline constexpr guest::Function<0x0026a66c, u32(u32)> EmoticonSlots__construct;

u32 EmoticonAction__EmoticonAction_00269478(gptr<EmoticonAction> emoticon_action) {
    emoticon_action->vtable = vtable_EmoticonAction;
    u32 r0_2 = EmoticonSlots__construct(emoticon_action.addr() + 4u);
    gptr<Local_00269478_r0_3> r0_3 = gptr<Local_00269478_r0_3>(r0_2 - 4u);
    r0_3->word_3fc = 0;
    gptr<Local_00269478_r2_1> r2_1 = gptr<Local_00269478_r2_1>(r0_3.addr() + 0x400u);  // (from the original)
    r0_3->byte_400 = 0;
    r0_3->byte_401 = 0;
    r2_1->half_2 = 0;
    r2_1->half_4 = 0;
    r0_3->byte_406 = 0;
    r0_3->byte_407 = 0;
    return r0_3.addr();
}

}  // namespace d_00269478
GUEST_EXPORT_FRAMED(0x00269478, d_00269478::EmoticonAction__EmoticonAction_00269478, 0x4010);  // pushes {r4, lr} first, as the original

// f_002694b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002694b8 {

inline constexpr u32 vtable_EmoticonAction = 0x008ef334u;
inline constexpr guest::Function<0x0026a694, u32(u32, u32)> EmoticonSlots__destroy;

u32 EmoticonAction__EmoticonAction_002694b8(gptr<EmoticonAction> emoticon_action) {
    emoticon_action->vtable = vtable_EmoticonAction;
    u32 emoticon_slots = emoticon_action.addr() + 4u;
    EmoticonSlots__destroy(emoticon_slots, vtable_EmoticonAction);
    return emoticon_slots - 4u;
}

}  // namespace d_002694b8
GUEST_EXPORT_FRAMED(0x002694b8, d_002694b8::EmoticonAction__EmoticonAction_002694b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026a5dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops each of the 4 slots' effects and marks them stopped (or idle when unused).
namespace d_0026a5dc {

inline constexpr guest::Function<0x002e6368, u32(u32, u32, u32, u32)> EffectHandle__kill;
inline constexpr guest::Function<0x004eb3e0, u32(u32, u32)> EffectSlotRef__stop;
inline constexpr guest::Function<0x00745970, u32(u32, u32, u32, u32)> free_keyed_slot;

u32 EmoticonSlots__stop_all(u32 emoticon_slots, u32 r1) {
    u32 r0_1 = 0;
    u32 r6 = emoticon_slots;
    u32 r7 = emoticon_slots + 0x3f0u;  // (from the original)
    u32 r8 = 3u;
    u32 r9 = 2u;
    do {
        r0_1 = *gptr<u32>(r6 + 0xecu);  // (from the original)
        if (r0_1 == 0) {
            *gptr<u32>(r6 + 0xecu) = r8;  // (from the original)
        } else if (r0_1 == 1u) {
            u32 effect_slot_ref = r6 + 0x34u;  // (from the original)
            u32 r5 = r6 + 0xe4u;  // (from the original)
            if (effect_slot_ref != r5) {
                do {
                    u32 r0_2 = *gptr<u32>(effect_slot_ref + 0x18u);  // (from the original)
                    if (r0_2 != 0) {
                        r1 = *gptr<u32>(effect_slot_ref + 0x1cu);  // (from the original)
                        if (r1 == *gptr<u32>(r0_2 + 0xcu)) {  // (from the original)
                            EffectHandle__kill(effect_slot_ref + 0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                            r1 = guest::cpu()->r[1];
                        }
                    }
                    r0_1 = free_keyed_slot(effect_slot_ref, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    if (r0_1 != 0) {
                        r0_1 = EffectSlotRef__stop(effect_slot_ref, r1);
                        r1 = guest::cpu()->r[1];
                    }
                    effect_slot_ref += 0x2cu;  // (from the original)
                    guest::preempt();
                } while (effect_slot_ref != r5);
            }
            *gptr<u32>(r6 + 0xecu) = r9;  // (from the original)
        }
        r6 += 0xfcu;  // (from the original)
        guest::preempt();
    } while (r6 != r7);
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0026a5dc
GUEST_EXPORT_FRAMED(0x0026a5dc, d_0026a5dc::EmoticonSlots__stop_all, 0x47f0);  // pushes {effect_slot_ref, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0026a66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 4 slots (0xfc bytes each) and clears the state.
namespace d_0026a66c {

struct __attribute__((packed)) Local_0026a66c_r0_1 {
    u8 unknown_0[0x3f0];  // (not used here)
    u32 word_3f0;
    u8 byte_3f4;
};
GUEST_OFFSET(Local_0026a66c_r0_1, word_3f0, 0x3f0);
GUEST_OFFSET(Local_0026a66c_r0_1, byte_3f4, 0x3f4);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 EmoticonSlots__construct(u32 emoticon_slots) {
    gptr<Local_0026a66c_r0_1> r0_1 = gptr<Local_0026a66c_r0_1>(for_each_element(emoticon_slots, 0x2699ecu, 0xfcu, 4u));  // (from the original)
    r0_1->word_3f0 = 0;
    r0_1->byte_3f4 = 0;
    return r0_1.addr();
}

}  // namespace d_0026a66c
GUEST_EXPORT_FRAMED(0x0026a66c, d_0026a66c::EmoticonSlots__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026a694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the 4 slots.
namespace d_0026a694 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 EmoticonSlots__destroy(u32 emoticon_slots) {
    destroy_array_elements(emoticon_slots, 0x269a48u, 0xfcu, 4u);  // (from the original)
    return emoticon_slots;
}

}  // namespace d_0026a694
GUEST_EXPORT_FRAMED(0x0026a694, d_0026a694::EmoticonSlots__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026adf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026adf8 {

struct __attribute__((packed)) nnmfolw__FollowerAStarForeachCB {
    u8 unknown_0[0x1250];  // (not used here)
    u32 word_1250;
    u32 word_1254;
    u32 word_1258;
};
GUEST_OFFSET(nnmfolw__FollowerAStarForeachCB, word_1250, 0x1250);
GUEST_OFFSET(nnmfolw__FollowerAStarForeachCB, word_1254, 0x1254);
GUEST_OFFSET(nnmfolw__FollowerAStarForeachCB, word_1258, 0x1258);

struct __attribute__((packed)) Object_0026adf8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0026adf8_1, word_0, 0x0);
GUEST_OFFSET(Object_0026adf8_1, word_4, 0x4);
GUEST_OFFSET(Object_0026adf8_1, word_8, 0x8);

inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline constexpr guest::Function<0x0026a824, u32(u32, u32, u32, u32)> Follower__find_path;

u32 nnmfolw__FollowerAStarForeachCB__FollowerAStarForeachCB_0026adf8(gptr<nnmfolw__FollowerAStarForeachCB> follower_a_star_foreach_cb, gptr<Object_0026adf8_1> arg1) {
    u32 r2_1 = follower_a_star_foreach_cb.addr() + 0x1250u;  // (from the original)
    follower_a_star_foreach_cb->word_1250 = arg1->word_0;
    u32 r3_1 = arg1->word_4;
    follower_a_star_foreach_cb->word_1254 = r3_1;
    follower_a_star_foreach_cb->word_1258 = arg1->word_8;
    u32 r1_1 = *event_npc_mode;
    if (r1_1 != 0xffu) {  // (from the original)
        return Follower__find_path(follower_a_star_foreach_cb.addr(), r1_1, r2_1, r3_1);
    }
    u32 r1_2 = *event_npc_source;
    if (r1_2 == 0) {
        return Follower__find_path(follower_a_star_foreach_cb.addr(), r1_2, r2_1, r3_1);
    }
    u32 r1_3 = r1_2 + 0x6aceu;  // (from the original)
    *gptr<u8>(r1_3) = 1;
    return Follower__find_path(follower_a_star_foreach_cb.addr(), r1_3, 1u, r3_1);
}

}  // namespace d_0026adf8
GUEST_EXPORT(0x0026adf8, d_0026adf8::nnmfolw__FollowerAStarForeachCB__FollowerAStarForeachCB_0026adf8);

// f_0026ae58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Begins the target's next action and clears the action.
namespace d_0026ae58 {

struct __attribute__((packed)) Object_0026ae58_0 {
    u8 unknown_0[0x121c];  // (not used here)
    u32 word_121c;
    u32 word_1220;
};
GUEST_OFFSET(Object_0026ae58_0, word_121c, 0x121c);
GUEST_OFFSET(Object_0026ae58_0, word_1220, 0x1220);

inline constexpr guest::Function<0x006e9c2c, u32(u32, u32)> begin_action_0;

u32 EmoticonAction__end(gptr<Object_0026ae58_0> emoticon_action) {
    u32 r4_1 = emoticon_action.addr() + 0x1000u;  // (from the original)
    float S0_1 = 6.0f;
    u32 r0_1 = emoticon_action->word_121c + 0x78u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    begin_action_0(r0_1, 0u);
    emoticon_action->word_1220 = 0;
    return 0u;
}

}  // namespace d_0026ae58
GUEST_EXPORT_FRAMED(0x0026ae58, d_0026ae58::EmoticonAction__end, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026b2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the candidate locator for the target with the default ranges.
namespace d_0026b2e0 {

struct __attribute__((packed)) Local_0026b2e0_r1_1 {
    u8 unknown_0[0x21c];  // (not used here)
    u32 word_21c;
    u8 unknown_220[0x4];  // (not used here)
    float float_224;
    u8 unknown_228[0x24];  // (not used here)
    u32 word_24c;
};
GUEST_OFFSET(Local_0026b2e0_r1_1, word_21c, 0x21c);
GUEST_OFFSET(Local_0026b2e0_r1_1, float_224, 0x224);
GUEST_OFFSET(Local_0026b2e0_r1_1, word_24c, 0x24c);

struct __attribute__((packed)) Local_0026b2e0_r3_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_0026b2e0_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_4, 0x4);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_8, 0x8);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_c, 0xc);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_10, 0x10);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_14, 0x14);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_18, 0x18);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_1c, 0x1c);

inline guest::global<u32, 0x009528e8> global_009528e8;
inline guest::global<u32, 0x009528ec> global_009528ec;
inline guest::global<u32, 0x009528f0> global_009528f0;
inline guest::global<u32, 0x009528f4> global_009528f4;
inline guest::global<u32, 0x009528f8> global_009528f8;
inline guest::global<u32, 0x009528fc> global_009528fc;
inline guest::global<u32, 0x00952900> global_00952900;
inline guest::global<u32, 0x00952904> global_00952904;
inline guest::global<u32, 0x00952908> global_00952908;
inline constexpr guest::Function<0x006a8280, u32(u32)> IRootLocateRelative___Cand__Cand_006a8280;

u32 CandLocator__construct(u32 cand_locator, u32 r1, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 r0_1 = IRootLocateRelative___Cand__Cand_006a8280(cand_locator);
    gptr<Local_0026b2e0_r1_1> r1_1 = gptr<Local_0026b2e0_r1_1>(r0_1 + 0x1000u);  // (from the original)
    float S0_1 = 1.0f;
    r1_1->word_21c = r1;
    r1_1->float_224 = S0_1;
    float S0_2 = std::bit_cast<float>(*global_009528e8);
    float S1_1 = std::bit_cast<float>(*global_009528ec);
    float S2_1 = std::bit_cast<float>(*global_009528f0);
    float S3_1 = std::bit_cast<float>(*global_009528f4);
    float S4_1 = std::bit_cast<float>(*global_009528f8);
    float S5_1 = std::bit_cast<float>(*global_009528fc);
    float S6_1 = std::bit_cast<float>(*global_00952900);
    float S7_1 = std::bit_cast<float>(*global_00952904);
    gptr<Local_0026b2e0_r3_1> r3_1 = gptr<Local_0026b2e0_r3_1>(r0_1 + 0x122cu);  // (from the original)
    r3_1->float_0 = S0_2;
    r3_1->float_4 = S1_1;
    r3_1->float_8 = S2_1;
    r3_1->float_c = S3_1;
    r3_1->float_10 = S4_1;
    r3_1->float_14 = S5_1;
    r3_1->float_18 = S6_1;
    r3_1->float_1c = S7_1;
    r1_1->word_24c = *global_00952908;
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0026b2e0
GUEST_EXPORT_FRAMED(0x0026b2e0, d_0026b2e0::CandLocator__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026b3a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the edit switch layout, binds its button and its eight animations, and shows its first side.
namespace d_0026b3a0 {

struct __attribute__((packed)) EditSwitch {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
    u8 unknown_dd[0x1];  // (not used here)
    u8 byte_de;
    u8 unknown_df[0x161];  // (not used here)
    u32 word_240;
    u8 unknown_244[0xc8];  // (not used here)
    u32 word_30c;
};
GUEST_OFFSET(EditSwitch, word_d0, 0xd0);
GUEST_OFFSET(EditSwitch, byte_db, 0xdb);
GUEST_OFFSET(EditSwitch, byte_dc, 0xdc);
GUEST_OFFSET(EditSwitch, byte_de, 0xde);
GUEST_OFFSET(EditSwitch, word_240, 0x240);
GUEST_OFFSET(EditSwitch, word_30c, 0x30c);

struct __attribute__((packed)) Object_0026b3a0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0026b3a0_1, word_0, 0x0);
GUEST_OFFSET(Object_0026b3a0_1, word_4, 0x4);

inline guest::global<u32, 0x0084975c> global_0084975c;
inline guest::global<u32, 0x00849760> global_00849760;
inline guest::global<u32, 0x00849764> global_00849764;
inline guest::global<u32, 0x00849768> global_00849768;
inline guest::global<u32, 0x0084976c> global_0084976c;
inline guest::global<u32, 0x00849770> global_00849770;
inline constexpr guest::Function<0x0026b500, u32(u32)> EditSwitch__flip;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> DragIconList__add;
inline constexpr guest::Function<0x00568adc, u32(u32, u32)> Layout__find_button;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> Layout__virtual_4;
inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32)> construct_dummy_layout;

struct __attribute__((packed)) Frame_0026b3a0 {
    u32 button;
    u32 pane;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
};
GUEST_OFFSET(Frame_0026b3a0, button, 0x0);
GUEST_OFFSET(Frame_0026b3a0, pane, 0x4);
GUEST_OFFSET(Frame_0026b3a0, float_8, 0x8);
GUEST_OFFSET(Frame_0026b3a0, float_c, 0xc);
GUEST_OFFSET(Frame_0026b3a0, float_10, 0x10);
GUEST_OFFSET(Frame_0026b3a0, float_14, 0x14);
GUEST_OFFSET(Frame_0026b3a0, float_18, 0x18);
GUEST_SIZE(Frame_0026b3a0, 0x1c);

void EditSwitch__setup(gptr<EditSwitch> edit_switch, gptr<Object_0026b3a0_1> arg1, float S0, float S1, float S2, float S3, float S4, float S5, float S6) {
    guest::StackFrameOf<Frame_0026b3a0> frame;  // the original's stack frame
    edit_switch->word_30c = arg1->word_0;
    Layout__virtual_4(edit_switch.addr() + 0x220u, 0x84a010u, 0u, 4u);  // (from the original)
    float S0_1 = 0.0f;
    float S1_1 = std::bit_cast<float>(*global_0084975c);
    float S2_1 = std::bit_cast<float>(*global_00849760);
    float S3_1 = std::bit_cast<float>(*global_00849764);
    float S4_1 = std::bit_cast<float>(*global_00849768);
    float S5_1 = std::bit_cast<float>(*global_0084976c);
    float S6_1 = std::bit_cast<float>(*global_00849770);
    frame->button = std::bit_cast<u32>(S0_1);
    frame->pane = std::bit_cast<u32>(S1_1);
    frame->float_8 = S2_1;
    frame->float_c = S3_1;
    frame->float_10 = S4_1;
    frame->float_14 = S5_1;
    frame->float_18 = S6_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    u32 button = Layout__find_button(edit_switch.addr() + 0x220u, 0x84a004u);  // (from the original)
    frame->button = button;
    u32 pane_2 = Layout__find_pane(edit_switch.addr() + 0x220u, 0x849ff8u, 1u);  // (from the original)
    float S0_3 = 0.0f;
    frame->pane = pane_2;
    frame->float_8 = S0_3;
    frame->float_c = S0_3;
    guest::cpu()->s[0] = S0_3;
    set_node_values(edit_switch.addr(), frame.at(0).addr());
    DragIconList__add(arg1->word_4, edit_switch->word_240);
    construct_dummy_layout(edit_switch.addr() + 0xe0u, 0x849fdcu, arg1->word_0);  // (from the original)
    construct_dummy_layout(edit_switch.addr() + 0x108u, 0x849fc0u, arg1->word_0);  // (from the original)
    construct_dummy_layout(edit_switch.addr() + 0x130u, 0x849fa4u, arg1->word_0);  // (from the original)
    construct_dummy_layout(edit_switch.addr() + 0x158u, 0x849f84u, arg1->word_0);  // (from the original)
    construct_dummy_layout(edit_switch.addr() + 0x180u, 0x849f68u, arg1->word_0);  // (from the original)
    construct_dummy_layout(edit_switch.addr() + 0x1a8u, 0x849f4cu, arg1->word_0);  // (from the original)
    construct_dummy_layout(edit_switch.addr() + 0x1d0u, 0x849f30u, arg1->word_0);  // (from the original)
    construct_dummy_layout(edit_switch.addr() + 0x1f8u, 0x849f10u, arg1->word_0);  // (from the original)
    edit_switch->byte_de = 1;
    EditSwitch__flip(edit_switch.addr());
    edit_switch->word_d0 = 0x100043f;  // (from the original)
    edit_switch->byte_db = 1;
    edit_switch->byte_dc = 1;
}

}  // namespace d_0026b3a0
GUEST_EXPORT_FRAMED(0x0026b3a0, d_0026b3a0::EditSwitch__setup, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0026b500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Flips the switch to its other side: its animations and its message.
namespace d_0026b500 {

struct __attribute__((packed)) EditSwitch {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
    u8 unknown_db[0x3];  // (not used here)
    u8 byte_de;
    u8 unknown_df[0x19];  // (not used here)
    u32 word_f8;
    u8 unknown_fc[0x24];  // (not used here)
    u32 word_120;
    u8 unknown_124[0x24];  // (not used here)
    u32 word_148;
    u8 unknown_14c[0x24];  // (not used here)
    u32 word_170;
    u8 unknown_174[0x24];  // (not used here)
    u32 word_198;
    u8 unknown_19c[0x24];  // (not used here)
    u32 word_1c0;
    u8 unknown_1c4[0x24];  // (not used here)
    u32 word_1e8;
    u8 unknown_1ec[0x24];  // (not used here)
    u32 word_210;
};
GUEST_OFFSET(EditSwitch, word_cc, 0xcc);
GUEST_OFFSET(EditSwitch, byte_da, 0xda);
GUEST_OFFSET(EditSwitch, byte_de, 0xde);
GUEST_OFFSET(EditSwitch, word_f8, 0xf8);
GUEST_OFFSET(EditSwitch, word_120, 0x120);
GUEST_OFFSET(EditSwitch, word_148, 0x148);
GUEST_OFFSET(EditSwitch, word_170, 0x170);
GUEST_OFFSET(EditSwitch, word_198, 0x198);
GUEST_OFFSET(EditSwitch, word_1c0, 0x1c0);
GUEST_OFFSET(EditSwitch, word_1e8, 0x1e8);
GUEST_OFFSET(EditSwitch, word_210, 0x210);

inline constexpr guest::Function<0x00569774, u32(u32, u32)> copy_animation_target;

void EditSwitch__flip(gptr<EditSwitch> edit_switch) {
    u32 r0_1 = edit_switch->byte_de == 0;
    edit_switch->byte_de = u8(r0_1);
    if (r0_1 != 0) {
        copy_animation_target(edit_switch.addr() + 0x20u, edit_switch->word_f8);  // (from the original)
        copy_animation_target(edit_switch.addr() + 0x48u, edit_switch->word_120);  // (from the original)
        copy_animation_target(edit_switch.addr() + 0x70u, edit_switch->word_148);  // (from the original)
        copy_animation_target(edit_switch.addr() + 0x98u, edit_switch->word_170);  // (from the original)
        edit_switch->word_cc = 0x1000445;  // (from the original)
        edit_switch->byte_da = 1;
        return;
    }
    copy_animation_target(edit_switch.addr() + 0x20u, edit_switch->word_198);  // (from the original)
    copy_animation_target(edit_switch.addr() + 0x48u, edit_switch->word_1c0);  // (from the original)
    copy_animation_target(edit_switch.addr() + 0x70u, edit_switch->word_1e8);  // (from the original)
    copy_animation_target(edit_switch.addr() + 0x98u, edit_switch->word_210);  // (from the original)
    edit_switch->word_cc = 0x1000444;  // (from the original)
    edit_switch->byte_da = 1;
}

}  // namespace d_0026b500
GUEST_EXPORT_FRAMED(0x0026b500, d_0026b500::EditSwitch__flip, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0026d328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the 16 pocket buttons from the current player's pockets.
namespace d_0026d328 {

inline constexpr guest::Function<0x002b8958, u32(u32, u32)> LayoutButton__set_visible;
inline constexpr guest::Function<0x002b89ec, u32(u32, u32, u32)> sead__FixedSafeString_32___FixedSafeString_002b89ec;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> Pockets__item_with_lock;
inline constexpr guest::Function<0x00724578, u32(u32, u32)> Pockets__lock_of;

void PocketsGrid__refresh(u32 pockets_grid, u32 r1_unused, u32 r2) {
    u32 r4 = 0u;
    u32 r6 = pockets_grid;
    u32 r10 = r4;
    u32 r7 = pockets_grid + 0x8400u;  // (from the original)
    do {
        u32 r0_1 = *gptr<u8>(r7 + 0x31u);  // (from the original)
        u32 zf_1 = r0_1 == 0;
        u32 r1_1 = r4 * (r0_1 == 0 ? 0xdbu : 0xe5u);  // (from the original)
        u32 r0_2 = r6 + (r1_1 << 2);
        u32 r5_1 = zf_1 ? r0_2 + 0x890u : r0_2 + 0x4410u;  // (from the original)
        u32 player_3 = get_current_player(r0_2, r1_1, r2, guest::cpu()->r[3]);
        u32 r0_5 = Pockets__item_with_lock(player_3 + 0x6bd0u, r4, 0u);  // (from the original)
        u32 is_empty_2 = Item__is_empty(r0_5);
        if (is_empty_2 != 0) {
            LayoutButton__set_visible(r5_1, 0u);
            r2 = guest::cpu()->r[2];
            *gptr<u8>(r5_1 + 0xd9u) = u8(r10);  // (from the original)
        } else {
            u32 player_4 = get_current_player(is_empty_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 lock_2 = Pockets__lock_of(player_4 + 0x6bd0u, r4);  // (from the original)
            sead__FixedSafeString_32___FixedSafeString_002b89ec(r5_1, r0_5, lock_2);
            r2 = guest::cpu()->r[2];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
}

}  // namespace d_0026d328
GUEST_EXPORT_FRAMED(0x0026d328, d_0026d328::PocketsGrid__refresh, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0026d644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The label at slot `slot` (two layouts, by the page flag at +0x8431) shows the current player's pocket item there
// with its lock, or is cleared when the slot is empty.
namespace d_0026d644 {

struct __attribute__((packed)) Object_0026d644_0 {
    u8 unknown_0[0x8431];  // (not used here)
    u8 byte_8431;
};
GUEST_OFFSET(Object_0026d644_0, byte_8431, 0x8431);

inline constexpr guest::Function<0x002b8958, u32(u32, u32)> LayoutButton__set_visible;
inline constexpr guest::Function<0x002b89ec, u32(u32, u32, u32, u32)> sead__FixedSafeString_32___FixedSafeString_002b89ec;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> Pockets__item_with_lock;
inline constexpr guest::Function<0x00724578, u32(u32, u32)> Pockets__lock_of;

u32 set_pocket_slot_label(gptr<Object_0026d644_0> arg0, u32 slot) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_1 = arg0->byte_8431;
    u32 zf_1 = r1_1 == 0;
    u32 r2_1 = r1_1 == 0 ? 0xdbu : 0xe5u;  // (from the original)
    u32 r1_2 = slot * r2_1;
    u32 r0_1 = arg0.addr() + (r1_2 << 2);
    u32 label = zf_1 ? r0_1 + 0x890u : r0_1 + 0x4410u;  // (from the original)
    u32 player_3 = get_current_player(r0_1, r1_2, r2_1, guest::cpu()->r[3]);
    u32 item = Pockets__item_with_lock(player_3 + 0x6bd0u, slot, 0u);  // (from the original)
    u32 is_empty_2 = Item__is_empty(item);
    if (is_empty_2 != 0) {
        LayoutButton__set_visible(label, 0u);
        *gptr<u8>(label + 0xd9u) = 0;  // (from the original)
        return 0u;
    }
    u32 player_4 = get_current_player(is_empty_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 lock_2 = Pockets__lock_of(player_4 + 0x6bd0u, slot);  // (from the original)
    frame.release();
    return sead__FixedSafeString_32___FixedSafeString_002b89ec(label, item, lock_2, guest::cpu()->r[3]);
}

}  // namespace d_0026d644
GUEST_EXPORT(0x0026d644, d_0026d644::set_pocket_slot_label);

// f_0026e250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual function 24 of the pocket button (of the layout in use).
namespace d_0026e250 {

struct __attribute__((packed)) PocketsGrid {
    u8 unknown_0[0x8431];  // (not used here)
    u8 byte_8431;
};
GUEST_OFFSET(PocketsGrid, byte_8431, 0x8431);


u32 PocketsGrid__button_virtual_24(gptr<PocketsGrid> pockets_grid, u32 r1) {
    if (pockets_grid->byte_8431 != 0) {
        u32 r0_1 = pockets_grid.addr() + r1 * 0x394u + 0x4410u;  // (from the original)
        u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x60u);  // (from the original)
        // virtual function 24 of r0_1
        return guest::call_address<u32>(r1_1, r0_1, r1_1, 0xe5u, guest::cpu()->r[3]);  // (from the original)
    }
    u32 r1_2 = pockets_grid.addr() + r1 * 0x36cu;  // (from the original)
    u32 r1_3 = *gptr<u32>(*gptr<u32>(r1_2 + 0x890u) + 0x60u);  // (from the original)
    // virtual function 24 of r1_2 + 0x890u
    return guest::call_address<u32>(r1_3, r1_2 + 0x890u, r1_3, 0xdbu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0026e250
GUEST_EXPORT(0x0026e250, d_0026e250::PocketsGrid__button_virtual_24);

// f_0026e2d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the scene allows giving and the item is of the giftable set.
namespace d_0026e2d8 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x0076a280, u32(u32)> Item__is_in_special_set_b;

u32 item_can_be_given_here(u32 r0, u32 r1) {
    u32 r4_1 = 0u;
    u32 scene = current_scene_id(r0);
    u32 scene_flagged = scene_has_flags(8u, scene);
    if (scene_flagged != 0) {
        u32 r0_3 = item_has_valid_data(r1);
        if (r0_3 != 0) {
            u32 r0_4 = Item__is_in_special_set_b(r1);
            r4_1 = r0_4;
        }
    }
    return r4_1;
}

}  // namespace d_0026e2d8
GUEST_EXPORT_FRAMED(0x0026e2d8, d_0026e2d8::item_can_be_given_here, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0026e410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts closing the grid, clears its flags and hides its cursor.
namespace d_0026e410 {

struct __attribute__((packed)) PocketsGrid {
    u8 unknown_0[0x4029];  // (not used here)
    u8 byte_4029;
    u8 unknown_402a[0x53];  // (not used here)
    u8 byte_407d;
    u8 unknown_407e[0x12f];  // (not used here)
    u8 byte_41ad;
    u8 unknown_41ae[0xdb];  // (not used here)
    u8 byte_4289;
    u8 unknown_428a[0x53];  // (not used here)
    u8 byte_42dd;
    u8 unknown_42de[0xdb];  // (not used here)
    u8 byte_43b9;
    u8 unknown_43ba[0x4052];  // (not used here)
    u32 word_840c;
    u8 unknown_8410[0x24];  // (not used here)
    u8 byte_8434;
};
GUEST_OFFSET(PocketsGrid, byte_4029, 0x4029);
GUEST_OFFSET(PocketsGrid, byte_407d, 0x407d);
GUEST_OFFSET(PocketsGrid, byte_41ad, 0x41ad);
GUEST_OFFSET(PocketsGrid, byte_4289, 0x4289);
GUEST_OFFSET(PocketsGrid, byte_42dd, 0x42dd);
GUEST_OFFSET(PocketsGrid, byte_43b9, 0x43b9);
GUEST_OFFSET(PocketsGrid, word_840c, 0x840c);
GUEST_OFFSET(PocketsGrid, byte_8434, 0x8434);

struct __attribute__((packed)) Local_0026e410_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0026e410_r0_1, byte_b7, 0xb7);

inline guest::global<u32, 0x008791b4> pockets_close_handler_a;
inline guest::global<u32, 0x008791b8> pockets_close_handler_b;
inline constexpr guest::Function<0x00817bd0, u32(u32, u32, u32)> dispatch_offset_0_00817bd0;

void PocketsGrid__close(gptr<PocketsGrid> pockets_grid) {
    dispatch_offset_0_00817bd0(pockets_grid.addr(), *pockets_close_handler_a, *pockets_close_handler_b);
    pockets_grid->byte_407d = 0;
    pockets_grid->byte_4029 = 0;
    pockets_grid->byte_41ad = 0;
    pockets_grid->byte_43b9 = 0;
    pockets_grid->byte_42dd = 0;
    pockets_grid->byte_4289 = 0;
    pockets_grid->byte_8434 = 1;
    gptr<Local_0026e410_r0_1> r0_1 = gptr<Local_0026e410_r0_1>(pockets_grid->word_840c);
    u32 r1_2 = u32(r0_1->byte_b7) & 0xfeu;  // (from the original)
    r0_1->byte_b7 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0026e410
GUEST_EXPORT_FRAMED(0x0026e410, d_0026e410::PocketsGrid__close, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0026eadc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the dragged icon (dropping it when ready) and clears the drag flag.
namespace d_0026eadc {

struct __attribute__((packed)) PocketsGrid {
    u8 unknown_0[0x83a8];  // (not used here)
    u32 word_83a8;
    u32 word_83ac;
};
GUEST_OFFSET(PocketsGrid, word_83a8, 0x83a8);
GUEST_OFFSET(PocketsGrid, word_83ac, 0x83ac);

struct __attribute__((packed)) Local_0026eadc_r4_1 {
    u8 unknown_0[0xbc];  // (not used here)
    u32 word_bc;
    u8 unknown_c0[0x14];  // (not used here)
    u32 word_d4;
    u8 unknown_d8[0x2c];  // (not used here)
    u32 word_104;
};
GUEST_OFFSET(Local_0026eadc_r4_1, word_bc, 0xbc);
GUEST_OFFSET(Local_0026eadc_r4_1, word_d4, 0xd4);
GUEST_OFFSET(Local_0026eadc_r4_1, word_104, 0x104);

inline constexpr guest::Function<0x0029aeac, u32(u32, u32, u32)> DragIconControl__drop;
inline constexpr guest::Function<0x0029b5fc, u32(u32)> DragIconControl__virtual_3;
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> sub_is_ready;

u32 PocketsGrid__update_drag(gptr<PocketsGrid> pockets_grid, u32 r1_unused, u32 r2) {
    u32 r0_2 = 0;
    gptr<Local_0026eadc_r4_1> r4_1 = gptr<Local_0026eadc_r4_1>(pockets_grid.addr() + 0x82f0u);  // (from the original)
    u32 r1_1 = pockets_grid->word_83a8;
    if (r1_1 == 0x2f5bb0u) {  // (from the original)
        if (0) {
            if ((pockets_grid->word_83ac & 1u) == 0) {
                r0_2 = r4_1->word_d4 & ~8u;
                r4_1->word_d4 = r0_2;
                guest::cpu()->r[1] = r1_1;
                return r0_2;
            }
        }
        if (r4_1->word_bc == 0) {
            r0_2 = r4_1->word_d4 & ~8u;
            r4_1->word_d4 = r0_2;
            guest::cpu()->r[1] = r1_1;
            return r0_2;
        }
    }
    u32 r0_1 = sub_is_ready(r4_1.addr(), r1_1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0 && r4_1->word_104 != 0) {
        DragIconControl__drop(r4_1.addr(), 1u, 0x1000402u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    } else {
        DragIconControl__virtual_3(r4_1.addr());
        r1_1 = guest::cpu()->r[1];
    }
    r0_2 = r4_1->word_d4 & ~8u;
    r4_1->word_d4 = r0_2;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0026eadc
GUEST_EXPORT_FRAMED(0x0026eadc, d_0026eadc::PocketsGrid__update_drag, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026eb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the pocket button accepts it: selects it with the value.
namespace d_0026eb6c {

struct __attribute__((packed)) PocketsGrid {
    u8 unknown_0[0x8431];  // (not used here)
    u8 byte_8431;
};
GUEST_OFFSET(PocketsGrid, byte_8431, 0x8431);

inline constexpr guest::Function<0x002b8fb0, u32(u32, u32, u32, u32)> LayoutButton__set_state;
inline constexpr guest::Function<0x0071d090, u32(u32, u32, u32, u32)> Button__is_visible_b;

u32 PocketsGrid__select_button(gptr<PocketsGrid> pockets_grid, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r6_1 = pockets_grid.addr() + 0x8400u;  // (from the original)
    u32 r1_1 = r1 * 0xdbu;  // (from the original)
    u32 r2_2 = pockets_grid.addr() + ((r1 * 0xe5u) << 2);  // (from the original)
    u32 r5_1 = pockets_grid.addr() + (r1_1 << 2);
    u32 r0_2 = Button__is_visible_b(pockets_grid->byte_8431 == 0 ? r5_1 + 0x890u : r2_2 + 0x4410u, r1_1, r2_2, 0xdbu);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = pockets_grid->byte_8431 == 0 ? r5_1 + 0x890u : r2_2 + 0x4410u;  // (from the original)
        frame.release();
        return LayoutButton__set_state(r0_3, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return r0_2;
}

}  // namespace d_0026eb6c
GUEST_EXPORT(0x0026eb6c, d_0026eb6c::PocketsGrid__select_button);

// f_0026f6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the grid's drag icon and releases its layouts and parts; true.
namespace d_0026f6fc {

struct __attribute__((packed)) PocketsGrid {
    u8 unknown_0[0x190];  // (not used here)
    u32 word_190;
    u8 unknown_194[0x8278];  // (not used here)
    u32 list;
};
GUEST_OFFSET(PocketsGrid, word_190, 0x190);
GUEST_OFFSET(PocketsGrid, list, 0x840c);

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x002f6c78, u32(u32)> NodeTree__release_all;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> DragIconList__remove;

u32 PocketsGrid__release(gptr<PocketsGrid> pockets_grid, u32 r1) {
    u32 list = pockets_grid->list;
    if (list != 0) {
        DragIconList__remove(list, pockets_grid->word_190, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    release_layout_parts(pockets_grid.addr() + 0x2bcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    release_layout_parts(pockets_grid.addr() + 0x504u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    layout_at_10_virtual_8(pockets_grid.addr() + 0x24u);  // (from the original)
    layout_at_10_virtual_8(pockets_grid.addr() + 0x170u);  // (from the original)
    NodeTree__release_all(pockets_grid.addr() + 0x82f0u);  // (from the original)
    return 1u;
}

}  // namespace d_0026f6fc
GUEST_EXPORT_FRAMED(0x0026f6fc, d_0026f6fc::PocketsGrid__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026f8a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item is set, the scene allows it, and its category is flagged.
namespace d_0026f8a8 {

inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x005b48b4, u32(u32)> current_scene_has_kind_flags;
inline constexpr guest::Function<0x0076c590, u32(u32)> Item__has_category_flag_bit_1_5;

u32 item_can_be_shown_here(u32 r0_unused, u32 r1) {
    u32 is_empty_2 = Item__is_empty(r1, r1);
    if (is_empty_2 != 0) {
        return 0u;
    }
    u32 r0_2 = current_scene_has_kind_flags(is_empty_2);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = Item__has_category_flag_bit_1_5(r1);
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_0026f8a8
GUEST_EXPORT_FRAMED(0x0026f8a8, d_0026f8a8::item_can_be_shown_here, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026f9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the item window's layouts (the plain or the selection screen, and the icons); whether both loaded.
namespace d_0026f9c4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> load_layout_archive;

u32 ItemWindow__load_layouts(u32 item_window, u32 r1) {
    u32 r5_1 = 0;
    u32 zf_1 = r1 == 0;
    if (!zf_1) {
        zf_1 = r1 == 1u;
    }
    if (zf_1 || r1 == 6u || r1 == 7u || r1 == 9u) {
        u32 r0_2 = load_layout_archive(item_window + 0x2bcu, 0x26fa6cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5_1 = r0_2;
    } else {
        u32 r0_4 = load_layout_archive(item_window + 0x2bcu, 0x26fa28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5_1 = r0_4;
    }
    u32 r0_6 = load_layout_archive(item_window + 0x504u, 0x26fa4cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_6 & r5_1;
}

}  // namespace d_0026f9c4
GUEST_EXPORT_FRAMED(0x0026f9c4, d_0026f9c4::ItemWindow__load_layouts, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0026fa8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the current player's pocket slot to the item.
namespace d_0026fa8c {

inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;

struct __attribute__((packed)) Frame_0026fa8c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0026fa8c, word_0, 0x0);
GUEST_SIZE(Frame_0026fa8c, 0x4);

void Pockets__set_current_slot(u32 pockets, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0026fa8c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player_2 = get_current_player(pockets, r1, r2, r3);
    frame->word_0 = 1;
    Pockets__set_slot(player_2 + 0x6bd0u, r1, r2, r3);  // (from the original)
}

}  // namespace d_0026fa8c
GUEST_EXPORT_FRAMED(0x0026fa8c, d_0026fa8c::Pockets__set_current_slot, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0026fc4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026fc4c {

inline constexpr u32 vtable_ItemDragWindow = 0x008ef3acu;
inline guest::global<u32, 0x008791dc> global_008791dc;
inline guest::global<u32, 0x008791e0> global_008791e0;
inline constexpr guest::Function<0x001207d8, u32(u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;
inline constexpr guest::Function<0x0022c53c, u32(u32)> DragIconGroup__DragIconGroup;
inline constexpr guest::Function<0x0029b7c0, u32(u32)> construct_drag_icon_control;
inline constexpr guest::Function<0x002cdcb0, u32(u32)> ItemDragIconGroup__ItemDragIconGroup;
inline constexpr guest::Function<0x002d00bc, u32(u32)> PartsDragIconNode__PartsDragIconNode;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0032fd1c, u32(u32)> ItemMultiDragIconGroup__ItemMultiDragIconGroup;

u32 ItemDragWindow__ItemDragWindow(gptr<ItemDragWindow> item_drag_window) {
    item_drag_window->word_4 = 0;
    item_drag_window->byte_8 = 0;
    u32 r2_1 = *global_008791e0;
    item_drag_window->word_c = *global_008791dc;
    item_drag_window->word_10 = r2_1;
    item_drag_window->word_14 = 0;
    item_drag_window->byte_18 = 0;
    item_drag_window->word_1c = 0;
    item_drag_window->vtable = vtable_ItemDragWindow;
    item_drag_window->word_20 = 0;
    u32 r0_2 = Layout__Layout(item_drag_window.addr() + 0x24u, vtable_ItemDragWindow, r2_1, item_drag_window.addr() + 0xcu);  // (from the original)
    u32 r0_4 = Layout__Layout(r0_2 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_4 + 0x14cu);  // (from the original)
    u32 r0_8 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_6 + 0x248u);  // (from the original)
    u32 r0_9 = r0_8 + 0x248u;  // (from the original)
    construct_layout_animation(r0_9);
    u32 r0_10 = r0_9 + 0x28u;  // (from the original)
    construct_layout_animation(r0_10);
    u32 r0_11 = r0_10 + 0x28u;  // (from the original)
    construct_layout_animation(r0_11);
    u32 ea_1 = r0_11 + 0x28u;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_12 = ea_1 + 4u;
    construct_layout_animation(r0_12);
    u32 r0_13 = r0_12 + 0x28u;  // (from the original)
    construct_layout_animation(r0_13);
    u32 r0_14 = r0_13 + 0x28u;  // (from the original)
    construct_layout_animation(r0_14);
    u32 r0_15 = r0_14 + 0x28u;  // (from the original)
    construct_layout_animation(r0_15);
    u32 r0_16 = r0_15 + 0x28u;  // (from the original)
    construct_layout_animation(r0_16);
    u32 r0_18 = for_each_element(r0_16 + 0x28u, 0x2b9440u, 0x36cu, 0x10u);  // (from the original)
    u32 r0_20 = for_each_element(r0_18 + 0x36c0u, 0x2d00bcu, 0x130u, 3u);  // (from the original)
    u32 parts_drag_icon_node = r0_20 + 0x390u;  // (from the original)
    PartsDragIconNode__PartsDragIconNode(parts_drag_icon_node);
    u32 r0_23 = for_each_element(parts_drag_icon_node + 0x130u, 0x3283e4u, 0x394u, 0x10u);  // (from the original)
    u32 item_drag_icon_group = r0_23 + 0x3940u;  // (from the original)
    ItemDragIconGroup__ItemDragIconGroup(item_drag_icon_group);
    u32 item_multi_drag_icon_group = item_drag_icon_group + 0x1e0u;  // (from the original)
    ItemMultiDragIconGroup__ItemMultiDragIconGroup(item_multi_drag_icon_group);
    u32 drag_icon_group = item_multi_drag_icon_group + 0x140u;  // (from the original)
    DragIconGroup__DragIconGroup(drag_icon_group);
    u32 r0_27 = drag_icon_group + 0x140u;  // (from the original)
    DragIconGroup__DragIconGroup(r0_27);
    u32 r0_28 = r0_27 + 0x140u;  // (from the original)
    construct_drag_icon_control(r0_28);
    u32 r0_29 = r0_28 - 0x82f0u;  // (from the original)
    u32 r7_1 = 0x8408u | u32(s32(0x8408u) >> 0xd);  // (from the original)
    *gptr<u32>(r0_29 + 0x8408u) = 0;  // (from the original)
    u32 r1_13 = r7_1 + 4u | u32(s32(r7_1 + 4u) >> 0xd);  // (from the original)
    *gptr<u32>(r7_1 + r0_29) = 0;
    *gptr<u32>(r7_1 + 4u + r0_29) = 0;
    *gptr<u32>(r1_13 + r0_29) = 0;
    *gptr<u8>(r1_13 + 4u + r0_29) = 0xa;  // (from the original)
    *gptr<u8>(r1_13 + 5u + r0_29) = 0;
    *gptr<u32>((r1_13 | u32(s32(r1_13) >> 0xc)) + r0_29) = 0;  // (from the original)
    *gptr<u32>(r0_29 + 0x8420u) = ~0u;  // (from the original)
    *gptr<u32>(r0_29 + 0x8424u) = 0;  // (from the original)
    *gptr<u32>(r1_13 + 0x14u + r0_29) = 0;  // (from the original)
    *gptr<u32>(r1_13 + 0x18u + r0_29) = 0;  // (from the original)
    *gptr<u8>(r1_13 + 0x1cu + r0_29) = 0;  // (from the original)
    *gptr<u8>((r1_13 + 0x1cu | u32(s32(r1_13 + 0x1cu) >> 5)) + r0_29) = 0;  // (from the original)
    *gptr<u8>((r1_13 + 0x1cu | u32(s32(r1_13 + 0x1cu) >> 0xe)) + r0_29) = 0;  // (from the original)
    *gptr<u8>(r1_13 + 0x1fu + r0_29) = 1;  // (from the original)
    *gptr<u8>((r1_13 + 0x1cu | u32(s32(r1_13 + 0x1cu) >> 0xd)) + r0_29) = 0;  // (from the original)
    u32 r0_30 = r0_29 + 0x845cu;  // (from the original)
    script__construct_word_ptr(r0_30, r0_29 + 0x8436u, 0x13u);  // (from the original)
    return r0_30 - 0x845cu;  // (from the original)
}

}  // namespace d_0026fc4c
GUEST_EXPORT_FRAMED(0x0026fc4c, d_0026fc4c::ItemDragWindow__ItemDragWindow, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0026fe3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026fe3c {

inline constexpr u32 vtable_ItemDragWindow = 0x008ef3acu;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_ItemDragIconGroup = 0x008f2a0cu;
inline constexpr u32 vtable_ItemDragIconGroup_at_c = 0x008f2a1cu;
inline constexpr guest::Function<0x001ff9d8, u32(u32)> DragIconNode__destructor;
inline constexpr guest::Function<0x0022c5d8, u32(u32)> DragIconGroup__virtual_0_0022c5d8;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 ItemDragWindow__destructor(gptr<ItemDragWindow> item_drag_window, u32 r1_unused, u32 r2, u32 r3) {
    item_drag_window->vtable = vtable_ItemDragWindow;
    u32 ea_1 = item_drag_window.addr() + 0x82f0u;  // (from the original)
    item_drag_window->drag_icon_control_vtable = vtable_DragIconControl_rec;
    destroy_button_action_control(ea_1, vtable_DragIconControl_rec, r2, r3);
    DragIconGroup__virtual_0_0022c5d8(ea_1 - 0x140u);  // (from the original)
    DragIconGroup__virtual_0_0022c5d8(ea_1 - 0x280u);  // (from the original)
    DragIconGroup__virtual_0_0022c5d8(ea_1 - 0x3c0u);  // (from the original)
    item_drag_window->item_drag_icon_group_vtable_7d5c = vtable_ItemDragIconGroup_at_c;
    item_drag_window->item_drag_icon_group_vtable = vtable_ItemDragIconGroup;
    destroy_animation(ea_1 - 0x3e8u, vtable_ItemDragIconGroup, vtable_ItemDragIconGroup_at_c);  // (from the original)
    destroy_animation(ea_1 - 0x410u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    destroy_animation(ea_1 - 0x438u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    destroy_animation(ea_1 - 0x460u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    DragIconGroup__virtual_0_0022c5d8(ea_1 - 0x5a0u);  // (from the original)
    destroy_array_elements(ea_1 - 0x3ee0u, 0x3284d8u, 0x394u, 0x10u);  // (from the original)
    DragIconNode__destructor(ea_1 - 0x4010u);  // (from the original)
    destroy_array_elements(ea_1 - 0x43a0u, 0x1ff9d4u, 0x130u, 3u);  // (from the original)
    destroy_array_elements(ea_1 - 0x7a60u, 0x2b950cu, 0x36cu, 0x10u);  // (from the original)
    destroy_animation(ea_1 - 0x7a88u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    destroy_animation(ea_1 - 0x7ab0u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    destroy_animation(ea_1 - 0x7ad8u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    destroy_animation(ea_1 - 0x7b00u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    destroy_animation(ea_1 - 0x7b28u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    destroy_animation(ea_1 - 0x7b54u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    destroy_animation(ea_1 - 0x7b7cu, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    destroy_animation(ea_1 - 0x7ba4u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_22 = ssys__ma__lyt__ArcResAccReader__destructor(ea_1 - 0x7decu);  // (from the original)
    u32 r0_24 = ssys__ma__lyt__ArcResAccReader__destructor(r0_22 - 0x248u);  // (from the original)
    u32 r0_26 = Layout__destructor(r0_24 - 0x14cu);  // (from the original)
    u32 r0_28 = Layout__destructor(r0_26 - 0x14cu);  // (from the original)
    return r0_28 - 0x24u;  // (from the original)
}

}  // namespace d_0026fe3c
GUEST_EXPORT_FRAMED(0x0026fe3c, d_0026fe3c::ItemDragWindow__destructor, 0x4010);  // pushes {r4, lr} first, as the original
