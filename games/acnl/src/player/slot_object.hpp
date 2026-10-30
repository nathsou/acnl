// The object a player slot has while the slot is in use (the game's player object; only the fields the rewritten code
// reads are named).
#pragma once

#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"

struct SlotObject {
    static constexpr u8 FLAGS_66_BIT_1 = 1 << 1;  // meaning not known yet
    static constexpr u8 FLAGS_66_BIT_5 = 1 << 5;
    static constexpr u8 FLAGS_171_BIT_5 = 1 << 5;  // set: the record's mode is not compared (meaning not known yet)
    static constexpr u8 FLAGS_177_BIT_3 = 1 << 3;  // meaning not known yet
    static constexpr u8 FLAGS_8C5_BIT_5 = 1 << 5;  // meaning not known yet
    static constexpr u8 FLAGS_8C5_BIT_6 = 1 << 6;
    static constexpr u8 FLAGS_8C7_BIT_5 = 1 << 5;
    static constexpr u8 FLAGS_8C7_BIT_0 = 1 << 0;
    static constexpr u8 FLAGS_17B_BIT_2 = 1 << 2;
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
    u8 unknown_172[0x177 - 0x172];
    u8 flags_177;
    u8 unknown_178[0x17b - 0x178];
    u8 flags_17b;
    u8 flags_17c;
    u8 unknown_17d[0x1a9 - 0x17d];
    u8 state_1a9;  // what the object is doing: an id the game has a table of entries for (0: none)
    u8 unknown_1aa;
    u8 byte_1ab;
    u8 unknown_1ac[0x224 - 0x1ac];
    u16 half_224;
    u8 unknown_226[0x47c - 0x226];
    u32 word_47c;
    u32 word_480;
    u8 unknown_484[0x5bc - 0x484];
    u16 half_5bc;
    u16 half_5be;
    u8 unknown_5c0[0x5e2 - 0x5c0];
    u16 half_5e2;
    u8 unknown_5e4[0x884 - 0x5e4];
    u32 word_884;
    u8 unknown_888[0x8c5 - 0x888];
    u8 flags_8c5;
    u8 unknown_8c6;
    u8 flags_8c7;
    u8 unknown_8c8[0x914 - 0x8c8];
    float value_914;
    u8 unknown_918[0x91f - 0x918];
    u8 flag_91f;
};
GUEST_OFFSET(SlotObject, position, 0x14);
GUEST_OFFSET(SlotObject, angles, 0x2c);
GUEST_OFFSET(SlotObject, flags_66, 0x66);
GUEST_OFFSET(SlotObject, flags_171, 0x171);
GUEST_OFFSET(SlotObject, flags_177, 0x177);
GUEST_OFFSET(SlotObject, flags_17b, 0x17b);
GUEST_OFFSET(SlotObject, flags_17c, 0x17c);
GUEST_OFFSET(SlotObject, state_1a9, 0x1a9);
GUEST_OFFSET(SlotObject, byte_1ab, 0x1ab);
GUEST_OFFSET(SlotObject, half_224, 0x224);
GUEST_OFFSET(SlotObject, word_47c, 0x47c);
GUEST_OFFSET(SlotObject, word_480, 0x480);
GUEST_OFFSET(SlotObject, half_5bc, 0x5bc);
GUEST_OFFSET(SlotObject, half_5be, 0x5be);
GUEST_OFFSET(SlotObject, half_5e2, 0x5e2);
GUEST_OFFSET(SlotObject, word_884, 0x884);
GUEST_OFFSET(SlotObject, value_914, 0x914);
GUEST_OFFSET(SlotObject, flag_91f, 0x91f);
GUEST_OFFSET(SlotObject, flags_8c5, 0x8c5);
GUEST_OFFSET(SlotObject, flags_8c7, 0x8c7);

// The object of a slot (a number of 4 or more stands for the main object's slot), or null; see slot_values.cpp.
guest::gptr<SlotObject> look_up_object(u32 id, u32 include_idle);
