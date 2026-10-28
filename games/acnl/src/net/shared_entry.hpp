// A table of 16-byte entries that the stations of a local multiplayer session keep in sync through messages: the
// global at 0x00953864 points to it. What the entries hold is not known yet; only the bytes the rewritten code
// touches are named.
#pragma once

#include "guest/guest.hpp"

struct SharedEntry {
    static constexpr u8 RESET_MARKER = 0xa5;   // written to unknown_04 by reset() (meaning not known yet)
    static constexpr u8 RESET_FLAGS = 0x24;    // station 4 in the low bits, plus an unknown bit 5

    static constexpr u8 STATION_MASK = 0x07;   // flags: the station the entry belongs to (compared to our own)
    static constexpr u8 TOP_BITS = 0xc0;       // flags: two unknown flags

    u8 unknown_00[4];
    u8 unknown_04;
    u8 flags;
    u8 counter;  // incremented on every reload from the template
    u8 unknown_07[9];

    void reset();         // marker, flags and counter to their initial values
    void reset_flags();   // flags and counter only
};
GUEST_OFFSET(SharedEntry, unknown_04, 4);
GUEST_OFFSET(SharedEntry, flags, 5);
GUEST_OFFSET(SharedEntry, counter, 6);
GUEST_SIZE(SharedEntry, 16);

struct SharedEntryTable {
    static constexpr u32 ENTRY_COUNT = 63;

    u8 unknown_000[0x10];
    SharedEntry entries[ENTRY_COUNT];
    u8 entry_bits[ENTRY_COUNT];  // bit 0: unknown flag, cleared on reload

    // ids out of range fall back to entry 0, as the game does
    static u32 slot_of(u32 id) { return id < ENTRY_COUNT ? id : 0; }
    SharedEntry &entry(u32 id) { return entries[slot_of(id)]; }
};
GUEST_OFFSET(SharedEntryTable, entries, 0x10);
GUEST_OFFSET(SharedEntryTable, entry_bits, 0x400);

inline guest::global<guest::gptr<SharedEntryTable>, 0x00953864> shared_entry_table;

// A 7-byte message about one entry. The 16-bit header holds a type (bits 0-4), the entry id (bits 5-12) and the
// sending station (bits 13-15).
struct SharedEntryMessage {
    u8 header[2];
    u8 counter;
    u8 unknown_03[4];

    u8 entry_id() const { return u8((header[0] >> 5) + (header[1] << 3)); }
    u8 sender() const { return header[1] >> 5; }
    void set_header(u32 type, u32 entry_id, u32 sender) {
        header[0] = u8(type | entry_id << 5);
        header[1] = u8((entry_id & 0xf8) >> 3 | sender << 5);
    }
};
GUEST_SIZE(SharedEntryMessage, 7);
