// An object (seen from AcFtr code) with a kind byte at 0x11 and a few property bytes. Only the touched bytes are
// named; the real size is not known yet.
#pragma once

#include "guest/guest.hpp"

struct FurnitureRef {
    static constexpr u8 KIND_COUNT = 0x56;  // kinds at or above this are invalid

    u8 unknown_00[8];
    u16 value_08;
    u8 unknown_0a[7];
    u8 kind;
    u8 unknown_12[5];
    u8 byte_17;
    u8 unknown_18;
    u8 byte_19;
    u8 unknown_1a[3];
    u8 flags_1d;
    u8 unknown_1e[2];

    bool is_kind_in_group() const;      // one of a fixed set of kinds
    bool has_byte_19_class_4_or_5() const;
    u16 table_value() const;            // from a per-kind table
    bool flag_1d_bit_0() const;
};
GUEST_OFFSET(FurnitureRef, value_08, 8);
GUEST_OFFSET(FurnitureRef, kind, 0x11);
GUEST_OFFSET(FurnitureRef, byte_17, 0x17);
GUEST_OFFSET(FurnitureRef, byte_19, 0x19);
GUEST_OFFSET(FurnitureRef, flags_1d, 0x1d);
GUEST_SIZE(FurnitureRef, 0x20);
