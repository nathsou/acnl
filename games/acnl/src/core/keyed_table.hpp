// A sorted table of 28-byte entries in the game's read-only data, searched by a key whose low byte is a sub-index.
#pragma once

#include "guest/guest.hpp"

struct KeyedEntry {
    u32 key;
    u8 unknown_04[2];
    u16 variant;
    u8 unknown_08[20];
};
GUEST_OFFSET(KeyedEntry, variant, 6);
GUEST_SIZE(KeyedEntry, 28);

struct KeyedTable {
    static constexpr u32 ADDRESS = 0x0087c394;
    static constexpr u32 COUNT = 499;
    static constexpr u32 KEY_BASE = 0x10000;     // keys below this are never found
    static constexpr u32 KEY_RANGE = 0x340402;   // keys from KEY_BASE up to this far are searched
    static constexpr u32 PAGE_MASK = ~0xffu;     // the key without its low byte
};

// Finds the entry with the given key and variant; else the entry of that key with variant 0; else, if the first entry
// of the key's page has exactly the page as its key, the page's variant-0 entry (or that first entry). Null if none.
gptr<KeyedEntry> find_keyed_entry(u32 key, u32 unused, u32 variant);
