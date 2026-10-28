// The object at 0x00a22020 (every caller of these helpers passes it) and the state object it points to at 0xb8.
// What they are is not known yet; only the fields the rewritten code reads are named.
#pragma once

#include "guest/guest.hpp"

struct UnknownSubStateB8 {
    static constexpr u8 MODE_3 = 3;  // modes with a meaning to the checks below (not known yet)
    static constexpr u8 MODE_5 = 5;

    u8 unknown_000[0x28];
    u8 mode;
    u8 unknown_029[0x30 - 0x29];
    u8 flag_30;
    u8 unknown_031[0x118 - 0x31];
    u32 value_118[2];  // compared with value_120 (two words, maybe one 64-bit value)
    u32 value_120[2];
    u8 unknown_128[0x144 - 0x128];
    u8 flag_144;
    u8 unknown_145[0x154 - 0x145];
    u8 flag_154;
    u8 flag_155;
};
GUEST_OFFSET(UnknownSubStateB8, mode, 0x28);
GUEST_OFFSET(UnknownSubStateB8, flag_30, 0x30);
GUEST_OFFSET(UnknownSubStateB8, value_118, 0x118);
GUEST_OFFSET(UnknownSubStateB8, value_120, 0x120);
GUEST_OFFSET(UnknownSubStateB8, flag_144, 0x144);
GUEST_OFFSET(UnknownSubStateB8, flag_154, 0x154);
GUEST_OFFSET(UnknownSubStateB8, flag_155, 0x155);

struct UnknownStateA22020 {
    u8 unknown_00[0x14];
    u32 unknown_14;
    u8 unknown_18[0xb8 - 0x18];
    guest::gptr<UnknownSubStateB8> sub;  // may be null

    bool flag_144_without_flag_30() const;      // false without sub
    u32 check_747548(u32 argument) const;       // 0 without sub
    bool mode_3_or_matching_values() const;     // false without sub
    bool flag_154_in_active_mode(u32 argument) const;  // false without sub
    bool has_unknown_14() const;
};
GUEST_OFFSET(UnknownStateA22020, unknown_14, 0x14);
GUEST_OFFSET(UnknownStateA22020, sub, 0xb8);

inline guest::global<UnknownStateA22020, 0x00a22020> state_a22020;
