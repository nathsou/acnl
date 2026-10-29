// The table of actor kinds in the game's data (0x6b records of 0x4c bytes; only three bytes are known).
#pragma once

#include "item/item.hpp"

struct ActorKind {
    static constexpr u32 COUNT = 0x6b;
    static constexpr u32 UNKNOWN_KIND_VALUE = 2;  // what out-of-range kinds read as

    u8 unknown_00[0x19];
    u8 value_19;
    u8 unknown_1a[0x2e];
    u8 value_48;
    u8 value_49;
    u8 unknown_4a[2];
};
GUEST_OFFSET(ActorKind, value_19, 0x19);
GUEST_OFFSET(ActorKind, value_48, 0x48);
GUEST_OFFSET(ActorKind, value_49, 0x49);
GUEST_SIZE(ActorKind, 0x4c);

inline guest::global<ActorKind[ActorKind::COUNT], 0x0086a2c8> actor_kinds;
