#include "guest/guest.hpp"

namespace {

// Two bytes cleared by the constructors below.
struct ByteFlagPair {
    u8 first;
    u8 second;
};

// A table entry: two 16-bit values (meaning not known yet).
struct TableEntry {
    u16 first;
    u16 second;
};
GUEST_SIZE(TableEntry, 4);

constexpr u32 TABLE_ENTRIES = 32;

inline constexpr guest::Function<0x006256dc, void(guest::gptr<TableEntry> entry)> init_table_entry;

}  // namespace

using guest::gptr;

// Clears two flag bytes; returns the object.
static ByteFlagPair &clear_flag_pair(ByteFlagPair &self) {
    self.first = 0;
    self.second = 0;
    return self;
}
GUEST_EXPORT(0x00624c68, clear_flag_pair);

// Same as above (a second copy in the binary).
static ByteFlagPair &clear_flag_pair_b(ByteFlagPair &self) {
    self.first = 0;
    self.second = 0;
    return self;
}
GUEST_EXPORT(0x00624c90, clear_flag_pair_b);

// One-hot bit mask for an index below 4, else 0.
static u32 bit_for_index(u32 index) {
    if (index < 4) {
        return (1u << index) & 0xff;
    }
    return 0;
}
GUEST_EXPORT(0x00624c78, bit_for_index);

// Initialises all 32 entries.
static void init_entry_table(gptr<TableEntry> table) {
    for (u32 i = 0; i < TABLE_ENTRIES; i++) {
        init_table_entry(table + i);
    }
}
GUEST_EXPORT(0x00624d24, init_entry_table);

GUEST_FUZZ(0x00624c68, 200, [](guest::Fuzz &f) { f.arguments(f.object<ByteFlagPair>()); });
GUEST_FUZZ(0x00624c90, 200, [](guest::Fuzz &f) { f.arguments(f.object<ByteFlagPair>()); });
GUEST_FUZZ(0x00624c78, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 5, 0xffffffff, f.number()}));
});
GUEST_FUZZ(0x00624d24, 200, [](guest::Fuzz &f) { f.arguments(f.allocate(TABLE_ENTRIES * 4).cast<TableEntry>()); });
