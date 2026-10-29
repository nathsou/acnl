// The button control base of the layout code: a list base, four layout animations and the default button settings
// (0xe4 bytes). Derived controls (ControlButtonBase) continue after it.
#pragma once

#include "guest/guest.hpp"

using guest::gptr;

struct LayoutAnimation {
    u8 data[0x28];
};

struct ButtonActionControl {
    static constexpr u32 ANIMATION_COUNT = 4;

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
GUEST_SIZE(ButtonActionControl, 0xe4);

// The constructor (0x002f7604): returns the object.
ButtonActionControl &construct_button_action_control(ButtonActionControl &self);
