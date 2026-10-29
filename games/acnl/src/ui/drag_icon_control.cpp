// DragIconControl: a button action control with a layout list at 0xe4 and some drag settings of its own.
#include "ui/button_action_control.hpp"

using guest::gptr;

namespace {

constexpr u32 VTABLE = 0x008f08ac;
inline constexpr guest::Function<0x00125e08, void(gptr<void> self)> construct_layout_list;

}  // namespace

struct DragIconControl : ButtonActionControl {
    u8 layout_list[12];
    u32 unknown_f0;
    float value_f4;
    u8 flag_f8;
    u8 unknown_f9[11];
    u32 unknown_104;
    u32 unknown_108;
    u8 flag_10c;
    u8 flag_10d;
    u8 unknown_10e[2];
    u32 unknown_110;
    u32 unknown_114;
};
GUEST_OFFSET(DragIconControl, layout_list, 0xe4);
GUEST_OFFSET(DragIconControl, unknown_f0, 0xf0);
GUEST_OFFSET(DragIconControl, value_f4, 0xf4);
GUEST_OFFSET(DragIconControl, flag_f8, 0xf8);
GUEST_OFFSET(DragIconControl, unknown_104, 0x104);
GUEST_OFFSET(DragIconControl, flag_10c, 0x10c);
GUEST_OFFSET(DragIconControl, unknown_110, 0x110);
GUEST_SIZE(DragIconControl, 0x118);

DragIconControl &construct_drag_icon_control(DragIconControl &self) {
    construct_button_action_control(self);
    self.vtable = gptr<void>(VTABLE);
    construct_layout_list(guest::addr_of(self).cast<void>() + offsetof(DragIconControl, layout_list));
    self.unknown_f0 = 0;
    self.value_f4 = 0.0f;
    self.flag_f8 = 0;
    self.unknown_104 = 0;
    self.unknown_108 = 0;
    self.flag_10c = 1;
    self.flag_10d = 1;
    self.unknown_110 = 0;
    self.unknown_114 = 0;
    return self;
}
GUEST_EXPORT(0x0029b7c0, construct_drag_icon_control);
GUEST_FUZZ(0x0029b7c0, 200, [](guest::Fuzz &f) { f.arguments(f.object<DragIconControl>()); });
