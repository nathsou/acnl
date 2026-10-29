#include "ui/button_action_control.hpp"

namespace {

inline constexpr guest::Function<0x00125e08, void(gptr<void> self)> construct_list;
inline constexpr guest::Function<0x00125aec, void(gptr<void> self)> construct_animation;

constexpr u32 VTABLE = 0x008f3eb0;
constexpr u32 DEFAULT_PAIR_ADDRESS = 0x0085726c;  // two words copied into unknown_b8

}  // namespace

// Constructor: the list base, four layout animations, then default button settings.
ButtonActionControl &construct_button_action_control(ButtonActionControl &self) {
    gptr<void> base = guest::addr_of(self);
    construct_list(base);
    self.vtable = gptr<void>(VTABLE);
    self.unknown_0c = 0;
    for (u32 i = 0; i < ButtonActionControl::ANIMATION_COUNT; i++) {
        construct_animation(guest::addr_of(self.animations[i]));
    }
    self.unknown_b0 = 0;
    self.unknown_b4 = 0;
    gptr<u32> pair(DEFAULT_PAIR_ADDRESS);
    self.unknown_b8[0] = pair[0];
    self.unknown_b8[1] = pair[1];
    self.unknown_c4 = 4;
    self.unknown_c0 = 0;
    self.unknown_c8 = 8;
    self.unknown_cc = 0;
    self.unknown_d0 = 0x1f;
    self.unknown_d2 = 0;
    self.unknown_d3 = 0;
    self.unknown_d4 = 0;
    self.unknown_d8 = -1;
    self.unknown_dc = 0xb;
    self.unknown_e0 = 1;
    return self;
}
GUEST_EXPORT(0x002f7604, construct_button_action_control);
GUEST_FUZZ(0x002f7604, 200, [](guest::Fuzz &f) { f.arguments(f.object<ButtonActionControl>()); });
