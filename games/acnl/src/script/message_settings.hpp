// The message settings block: flags and values with their defaults (0x88 bytes); the derived settings objects
// continue after it.
#pragma once

#include "guest/guest.hpp"

// A block of flags and values; only the bytes that are set to their defaults are named (meanings not known yet).
struct MessageSettings {
    static constexpr u8 INITIAL_BYTE_56 = 5;
    static constexpr u8 UNSET = 0xff;

    u8 byte_00;
    u8 byte_01;
    u8 byte_02;
    u8 byte_03;
    u8 byte_04;
    u8 byte_05;
    u8 byte_06;
    u8 unknown_07[0x30 - 7];
    u8 byte_30;
    u8 byte_31;
    u8 byte_32;
    u8 unknown_33[0x54 - 0x33];
    u8 byte_54;
    u8 byte_55;
    u8 byte_56;
    u8 unknown_57[0x5c - 0x57];
    u8 byte_5c;
    u8 byte_5d;
    u8 byte_5e;
    u8 unknown_5f[0x68 - 0x5f];
    u8 byte_68;
    u8 unknown_69[3];
    float float_6c;
    u8 unknown_70[0x80 - 0x70];
    u8 byte_80;
    u8 byte_81;
    u8 byte_82;
    u8 byte_83;
    u8 byte_84;
    u8 unknown_85[3];

    void reset();
};
GUEST_OFFSET(MessageSettings, byte_30, 0x30);
GUEST_OFFSET(MessageSettings, byte_54, 0x54);
GUEST_OFFSET(MessageSettings, byte_5c, 0x5c);
GUEST_OFFSET(MessageSettings, byte_68, 0x68);
GUEST_OFFSET(MessageSettings, float_6c, 0x6c);
GUEST_OFFSET(MessageSettings, byte_80, 0x80);
GUEST_SIZE(MessageSettings, 0x88);
