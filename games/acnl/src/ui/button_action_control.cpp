#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x00125e08, void(gptr<void> self)> construct_list;
inline constexpr guest::Function<0x00125aec, void(gptr<void> self)> construct_animation;

constexpr u32 VTABLE = 0x008f3eb0;
constexpr u32 DEFAULT_PAIR_ADDRESS = 0x0085726c;  // two words copied into unknown_b8
constexpr u32 ANIMATION_COUNT = 4;

}  // namespace

struct LayoutAnimation {
    u8 data[0x28];
};

struct ButtonActionControl {
    gptr<void> vtable;
    u8 unknown_04[8];
    u32 unknown_0c;
    LayoutAnimation animations[ANIMATION_COUNT];
    u32 unknown_b0;
    u32 unknown_b4;
    u32 unknown_b8[2];
    u32 unknown_c0;
    u32 unknown_c4;
    u32 unknown_c8;
    u32 unknown_cc;
    u16 unknown_d0;
    u8 unknown_d2;
    u8 unknown_d3;
    u32 unknown_d4;
    s32 unknown_d8;
    u32 unknown_dc;
    u8 unknown_e0;
    u8 unknown_e1[3];
};
GUEST_OFFSET(ButtonActionControl, animations, 0x10);
GUEST_OFFSET(ButtonActionControl, unknown_b0, 0xb0);
GUEST_OFFSET(ButtonActionControl, unknown_d0, 0xd0);
GUEST_OFFSET(ButtonActionControl, unknown_e0, 0xe0);

// Constructor: the list base, four layout animations, then default button settings.
ButtonActionControl &construct_button_action_control(ButtonActionControl &self) {
    gptr<void> base = guest::addr_of(self);
    construct_list(base);
    self.vtable = gptr<void>(VTABLE);
    self.unknown_0c = 0;
    for (u32 i = 0; i < ANIMATION_COUNT; i++) {
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
