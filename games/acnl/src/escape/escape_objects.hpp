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

// An object holding a signed byte value at 0x30 (meaning not known yet).
struct EscapeValueHolder {
    u8 unknown_00[0x30];
    s8 value_30;
};
GUEST_OFFSET(EscapeValueHolder, value_30, 0x30);

struct EscapeSubObject {
    u8 unknown_00[0x98];
    guest::gptr<EscapeTarget> target;
    u8 unknown_9c[0xc0 - 0x9c];
    guest::gptr<EscapeValueHolder> value_holder;  // may be null
};
GUEST_OFFSET(EscapeSubObject, target, 0x98);
GUEST_OFFSET(EscapeSubObject, value_holder, 0xc0);

struct EscapeOwner {
    u8 unknown_000[0x380];
    guest::gptr<EscapeSubObject> sub;

    void set_target_flag();
    s8 held_value() const;  // sub->value_holder->value_30, or 0 without a holder
};
GUEST_OFFSET(EscapeOwner, sub, 0x380);
