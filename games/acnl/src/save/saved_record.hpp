// A small record of the save data (0x25 bytes; two of them follow the villagers in SaveData). It holds an inner
// part with a value, and an index; what it stands for is not known yet.
#pragma once

#include "guest/guest.hpp"

struct SavedRecordInner {
    static constexpr u8 NONE_VALUE = 0x21;      // value of an empty record
    static constexpr u8 RESET_BYTE_09 = 0xff;   // meaning not known yet
    static constexpr u8 RESET_BYTE_0A = 9;      // meaning not known yet

    u8 unknown_00[8];
    u8 value;
    u8 unknown_09;
    u8 unknown_0a;

    bool has_value() const;  // value below NONE_VALUE
};
GUEST_SIZE(SavedRecordInner, 0x0b);

// The first 0x16 bytes of a SavedRecord (meaning not known yet).
struct SavedRecordHeader {
    static constexpr u32 SIZE = 0x16;

    u8 bytes[SIZE];

    void clear();
    void copy_from(const SavedRecordHeader &other);
};
GUEST_SIZE(SavedRecordHeader, 0x16);

struct SavedRecord {
    static constexpr s8 NO_INDEX = -1;  // unknown_21 of an empty record

    u8 unknown_00[0x16];
    SavedRecordInner inner;
    s8 unknown_21;
    u8 unknown_22;
    u8 unknown_23;
    u8 unknown_24;
};
GUEST_OFFSET(SavedRecord, inner, 0x16);
GUEST_OFFSET(SavedRecord, unknown_21, 0x21);
GUEST_SIZE(SavedRecord, 0x25);
