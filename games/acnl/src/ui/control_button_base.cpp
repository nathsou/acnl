// ControlButtonBase: a button action control with a second base (vtable at 0xe4) and some settings of its own.
#include "ui/button_action_control.hpp"

using guest::gptr;

struct ControlButtonBase : ButtonActionControl {
    static constexpr u32 VTABLE = 0x008f2730;
    static constexpr u32 SECOND_VTABLE_OFFSET = 0x44;  // the second base's vtable follows the first in the same table
    static constexpr u32 DEFAULT_PAIR_ADDRESS = 0x00857d38;  // two words copied into unknown_f0

    u32 second_vtable;
    u32 unknown_e8;
    u8 unknown_ec;
    u8 unknown_ed[3];
    u32 unknown_f0[2];
    u32 unknown_f8;
    u8 unknown_fc;
    u8 unknown_fd[3];
    u32 unknown_100;
    u32 unknown_104;
    u32 unknown_108;  // the two constructor arguments
    u32 unknown_10c;
    u32 unknown_110;
    u8 unknown_114;
    u8 unknown_115[3];
};
GUEST_OFFSET(ControlButtonBase, second_vtable, 0xe4);
GUEST_OFFSET(ControlButtonBase, unknown_f0, 0xf0);
GUEST_OFFSET(ControlButtonBase, unknown_108, 0x108);
GUEST_OFFSET(ControlButtonBase, unknown_114, 0x114);
GUEST_SIZE(ControlButtonBase, 0x118);

// Constructor: the button action control, then the second vtable and zeroed settings.
ControlButtonBase &construct_control_button_base(ControlButtonBase &self, u32 unknown_108, u32 unknown_10c) {
    construct_button_action_control(self);
    self.unknown_e8 = 0;
    self.unknown_ec = 0;
    gptr<u32> pair(ControlButtonBase::DEFAULT_PAIR_ADDRESS);
    self.unknown_f0[0] = pair[0];
    self.unknown_f0[1] = pair[1];
    self.unknown_f8 = 0;
    self.unknown_fc = 0;
    self.unknown_100 = 0;
    self.vtable = gptr<void>(ControlButtonBase::VTABLE);
    self.unknown_104 = 0;
    self.second_vtable = ControlButtonBase::VTABLE + ControlButtonBase::SECOND_VTABLE_OFFSET;
    self.unknown_110 = 0;
    self.unknown_108 = unknown_108;
    self.unknown_10c = unknown_10c;
    self.unknown_114 = 0;
    return self;
}
GUEST_EXPORT(0x002cd444, construct_control_button_base);
GUEST_FUZZ(0x002cd444, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<ControlButtonBase>(), f.number(), f.pick<u32>({1, 2, 3, f.number()}));
});
