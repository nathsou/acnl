// Actor: the base of the game's actors (a subclass of oml::framework::Process). Only the touched fields are named.
#pragma once

#include "guest/guest.hpp"

struct ActorPosition {
    u32 x;
    u32 y;
    u32 z;
};
GUEST_SIZE(ActorPosition, 12);

struct ActorAngles {
    u16 x;
    u16 y;
    u16 z;
};
GUEST_SIZE(ActorAngles, 6);

// The global at 0x0094dfd8: initial values handed to every new actor (either pointer may be null).
struct ActorDefaults {
    guest::gptr<ActorPosition> position;
    guest::gptr<ActorAngles> angles;
};
inline guest::global<ActorDefaults, 0x0094dfd8> actor_defaults;

struct Actor {
    static constexpr u32 VTABLE = 0x008f7908;

    u32 vtable;
    u8 unknown_04[0x10];
    ActorPosition position_14;
    ActorPosition position_20;
    u16 angles_2c[9];  // three copies of the default angles (x, y, z)
    u16 unknown_3e;
    float float_40;
    u8 byte_44;
    u8 unknown_45[3];

    bool virtual_11();
    bool virtual_2();
    bool virtual_5();
};
GUEST_OFFSET(Actor, position_14, 0x14);
GUEST_OFFSET(Actor, position_20, 0x20);
GUEST_OFFSET(Actor, angles_2c, 0x2c);
GUEST_OFFSET(Actor, float_40, 0x40);
GUEST_OFFSET(Actor, byte_44, 0x44);

Actor &construct_actor(Actor &self);
