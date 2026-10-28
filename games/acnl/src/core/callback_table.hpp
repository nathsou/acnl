// An object with a table of registered callbacks (member function pointers), each with two keys. Dispatching
// picks the last entry matching a pair of keys, remembers the keys and calls the callback.
#pragma once

#include "guest/guest.hpp"

struct CallbackTableEntry {
    u32 unknown_00;
    guest::MemberFunctionPointer callback;  // null function and even adjust: none
    u32 key1;
    u32 key2;
};
GUEST_OFFSET(CallbackTableEntry, callback, 4);
GUEST_OFFSET(CallbackTableEntry, key1, 0xc);
GUEST_OFFSET(CallbackTableEntry, key2, 0x10);
GUEST_SIZE(CallbackTableEntry, 0x14);

struct CallbackTable {
    u8 unknown_00[0xc];
    u32 key1;  // the keys of the last dispatch
    u32 key2;
    u8 unknown_14[4];
    u8 busy;   // 1 while a callback runs
    u8 unknown_19[3];
    guest::gptr<CallbackTableEntry> entries;
    u32 count;
};
GUEST_OFFSET(CallbackTable, key1, 0xc);
GUEST_OFFSET(CallbackTable, key2, 0x10);
GUEST_OFFSET(CallbackTable, busy, 0x18);
GUEST_OFFSET(CallbackTable, entries, 0x1c);
GUEST_OFFSET(CallbackTable, count, 0x20);
