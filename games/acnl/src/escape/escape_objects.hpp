// Objects of the escape minigame code. Only the fields the rewritten code touches are named.
#pragma once

#include "guest/guest.hpp"

struct EscapeEntry {
    u8 unknown_00[0x1d];
    u8 flag_1d;
};
GUEST_OFFSET(EscapeEntry, flag_1d, 0x1d);

// A container holding a list of entry pointers.
struct EscapeEntryList {
    u8 unknown_00[0x24];
    u32 count;
    u8 unknown_28[4];
    guest::gptr<guest::gptr<EscapeEntry>> entries;

    bool entry_has_flag(u32 index) const;
};
GUEST_OFFSET(EscapeEntryList, count, 0x24);
GUEST_OFFSET(EscapeEntryList, entries, 0x2c);

struct EscapeTarget {
    u8 unknown_00[0x34];
    u32 flag_34;
};
GUEST_OFFSET(EscapeTarget, flag_34, 0x34);

struct EscapeSubObject {
    u8 unknown_00[0x98];
    guest::gptr<EscapeTarget> target;
};
GUEST_OFFSET(EscapeSubObject, target, 0x98);

struct EscapeOwner {
    u8 unknown_000[0x380];
    guest::gptr<EscapeSubObject> sub;

    void set_target_flag();
};
GUEST_OFFSET(EscapeOwner, sub, 0x380);
