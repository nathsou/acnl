// Small accessors of escape minigame objects.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// An object with a counter at 0xcc and a signed value at 0x160 (meaning not known yet).
struct EscapeCountedObject {
    u8 unknown_000[0xcc];
    s32 count;
    u8 unknown_d0[0x160 - 0xd0];
    s32 value_160;

    u32 classify() const;
};
GUEST_OFFSET(EscapeCountedObject, count, 0xcc);
GUEST_OFFSET(EscapeCountedObject, value_160, 0x160);

// A table of words reached from an object at 0x1074.
struct EscapeWordTable {
    static constexpr u32 ENTRY_COUNT = 9;  // indices used by the callers: 0-8

    u8 unknown_00[0x34];
    u32 words[ENTRY_COUNT];
};
GUEST_OFFSET(EscapeWordTable, words, 0x34);

struct EscapeTableOwner {
    u8 unknown_0000[0x1074];
    gptr<EscapeWordTable> table;

    u32 table_word(u32 index) const;
};
GUEST_OFFSET(EscapeTableOwner, table, 0x1074);

}  // namespace

// 0 without a positive count; else 2 when value_160 is negative, 1 otherwise.
u32 EscapeCountedObject::classify() const {
    if (count <= 0) {
        return 0;
    }
    return value_160 < 0 ? 2 : 1;
}
GUEST_EXPORT(0x402fc4d8, EscapeCountedObject::classify);

// A word of the owner's table.
u32 EscapeTableOwner::table_word(u32 index) const {
    return table.get()->words[index];
}
GUEST_EXPORT(0x402fc4fc, EscapeTableOwner::table_word);
