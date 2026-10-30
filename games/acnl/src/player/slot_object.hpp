// The object a player slot has while the slot is in use (the game's player object; only the fields the rewritten code
// reads are named).
#pragma once

#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"

struct SlotObject {
    static constexpr u8 FLAGS_66_BIT_1 = 1 << 1;  // meaning not known yet
    static constexpr u8 FLAGS_66_BIT_5 = 1 << 5;
    static constexpr u8 FLAGS_171_BIT_5 = 1 << 5;  // set: the record's mode is not compared (meaning not known yet)
    static constexpr u8 FLAGS_17C_BIT_1 = 1 << 1;  // meaning not known yet
    static constexpr u8 FLAGS_17C_BIT_2 = 1 << 2;

    u8 unknown_000[0x14];
    Float3 position;
    u8 unknown_20[0x2c - 0x20];
    u16 angles[3];  // the rotation about the three axes (as 16-bit angles); the second is the facing
    u8 unknown_32[0x66 - 0x32];
    u8 flags_66;
    u8 unknown_067[0x171 - 0x67];
    u8 flags_171;
    u8 unknown_172[0x17c - 0x172];
    u8 flags_17c;
    u8 unknown_17d[0x1a9 - 0x17d];
    u8 state_1a9;  // what the object is doing: an id the game has a table of entries for (0: none)
    u8 unknown_1aa;
    u8 byte_1ab;
};
GUEST_OFFSET(SlotObject, position, 0x14);
GUEST_OFFSET(SlotObject, angles, 0x2c);
GUEST_OFFSET(SlotObject, flags_66, 0x66);
GUEST_OFFSET(SlotObject, flags_171, 0x171);
GUEST_OFFSET(SlotObject, flags_17c, 0x17c);
GUEST_OFFSET(SlotObject, state_1a9, 0x1a9);
GUEST_OFFSET(SlotObject, byte_1ab, 0x1ab);

// The object of a slot (a number of 4 or more stands for the main object's slot), or null; see slot_values.cpp.
guest::gptr<SlotObject> look_up_object(u32 id, u32 include_idle);
