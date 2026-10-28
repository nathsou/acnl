// The destructors of ButtonActionControl (virtual 0 and virtual 1, the latter also destroying the list base).
#include "guest/guest.hpp"

namespace {

using guest::gptr;

constexpr u32 VTABLE = 0x008f3eb0;
constexpr u32 ANIMATION_COUNT = 4;
constexpr u32 ANIMATION_SIZE = 0x28;

struct ButtonActionControlLayout {
    u32 vtable;
    u8 unknown_04[0xc];
    u8 animations[ANIMATION_COUNT][ANIMATION_SIZE];
    u8 unknown_b0[0x38];
};
GUEST_OFFSET(ButtonActionControlLayout, animations, 0x10);

inline constexpr guest::Function<0x0056988c, void(gptr<void> animation)> destroy_animation;
inline constexpr guest::Function<0x002ffb64, gptr<void>(gptr<void> list)> destroy_list_node;

// Resets the vtable and destroys the animations, last to first.
void destroy_animations(ButtonActionControlLayout &self) {
    self.vtable = VTABLE;
    for (u32 i = ANIMATION_COUNT; i-- > 0;) {
        destroy_animation(guest::addr_of(self.animations[i]).cast<void>());
    }
}

void zero_object(gptr<ButtonActionControlLayout> p) {
    for (u32 i = 0; i < sizeof(ButtonActionControlLayout); i++) {
        p.cast<u8>()[i] = 0;
    }
}

}  // namespace

// Destructor: destroys the four animations. Returns the object.
ButtonActionControlLayout &destroy_button_action_control(ButtonActionControlLayout &self) {
    destroy_animations(self);
    return self;
}
GUEST_EXPORT(0x002f7710, destroy_button_action_control);

// Destructor that also destroys the list base part (returns what that destructor returns).
gptr<void> destroy_button_action_control_and_list(ButtonActionControlLayout &self) {
    destroy_animations(self);
    return destroy_list_node(guest::addr_of(self).cast<void>());
}
GUEST_EXPORT(0x002f76d0, destroy_button_action_control_and_list);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x002f7710, 100, [](guest::Fuzz &f) {
    auto object = f.object<ButtonActionControlLayout>();
    zero_object(object);
    f.arguments(object);
});
GUEST_FUZZ(0x002f76d0, 100, [](guest::Fuzz &f) {
    auto object = f.object<ButtonActionControlLayout>();
    zero_object(object);
    f.arguments(object);
});
