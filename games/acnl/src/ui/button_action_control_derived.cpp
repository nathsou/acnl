// Two controls derived from ButtonActionControl.
#include "ui/button_action_control.hpp"

namespace {

inline constexpr guest::Function<0x00125aec, void(gptr<void> self)> construct_animation;

// A button control with four more layout animations after the base.
struct ButtonActionControlEx : ButtonActionControl {
    static constexpr u32 VTABLE = 0x008f5084;

    LayoutAnimation extra_animations[ButtonActionControl::ANIMATION_COUNT];
};
GUEST_OFFSET(ButtonActionControlEx, extra_animations, 0xe4);
GUEST_SIZE(ButtonActionControlEx, 0x184);

// A button control that chooses between options (two flag bytes after the base).
struct ButtonActionControlChoice : ButtonActionControl {
    static constexpr u32 VTABLE = 0x008f6bd8;

    u8 choice_e4;
    u8 choice_e5;
};
GUEST_OFFSET(ButtonActionControlChoice, choice_e4, 0xe4);
GUEST_OFFSET(ButtonActionControlChoice, choice_e5, 0xe5);

}  // namespace

ButtonActionControlEx &construct_button_action_control_ex(ButtonActionControlEx &self) {
    construct_button_action_control(self);
    self.vtable = gptr<void>(ButtonActionControlEx::VTABLE);
    for (LayoutAnimation &animation : self.extra_animations) {
        construct_animation(guest::addr_of(animation).cast<void>());
    }
    return self;
}
GUEST_EXPORT(0x00327d4c, construct_button_action_control_ex);
GUEST_FUZZ(0x00327d4c, 100, [](guest::Fuzz &f) { f.arguments(f.object<ButtonActionControlEx>()); });

ButtonActionControlChoice &construct_button_action_control_choice(ButtonActionControlChoice &self) {
    construct_button_action_control(self);
    self.vtable = gptr<void>(ButtonActionControlChoice::VTABLE);
    self.choice_e4 = 0;
    self.choice_e5 = 0;
    return self;
}
GUEST_EXPORT(0x0033f0d8, construct_button_action_control_choice);
GUEST_FUZZ(0x0033f0d8, 100, [](guest::Fuzz &f) { f.arguments(f.object<ButtonActionControlChoice>()); });
