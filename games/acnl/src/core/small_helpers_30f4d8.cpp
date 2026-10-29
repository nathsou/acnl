// Small helpers around 0x0030f4d8: a bit set of 33 flags, a block picker, a lookup in the table of active entries,
// and copies of small structures.
#include "core/fuzz_helpers.hpp"
#include "core/date.hpp"
#include "guest/guest.hpp"
#include "save/villager.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x002fb378, gptr<Value12>()> get_reference_value;

// The reference value is kept in the table singleton (bss) at this offset.
inline guest::global<Value12, 0x00a83378> stored_reference_value;

// The singleton's table of entries: ENTRY_COUNT entries of ENTRY_SIZE bytes, each with a flag word.
struct ActiveEntry {
    static constexpr u32 ENTRY_COUNT = 10;
    static constexpr u32 FLAG_ACTIVE = 0x20;  // unknown flag

    u8 unknown_00[0x44];
    u32 flags;
    u8 unknown_48[8];
};
GUEST_OFFSET(ActiveEntry, flags, 0x44);
GUEST_SIZE(ActiveEntry, 0x50);

inline guest::global<ActiveEntry[ActiveEntry::ENTRY_COUNT], 0x00a82c58> active_entries;

}  // namespace

// Runs virtual 2, then returns the object's word at 4.
struct VirtualWithWord {
    gptr<u32> vtable;
    u32 word_04;

    u32 refresh_and_get_word();
};
GUEST_OFFSET(VirtualWithWord, word_04, 4);

u32 VirtualWithWord::refresh_and_get_word() {
    guest::call_address<void>(vtable[2], guest::addr_of(this));
    return word_04;
}
GUEST_EXPORT(0x0030f4d8, VirtualWithWord::refresh_and_get_word);

void narrow_date(Date &out, const WideDate &date) {
    out.year = date.year;
    out.month = date.month;
    out.day = date.day;
}
GUEST_EXPORT(0x0030f56c, narrow_date);

// Blocks of 0x1228 bytes: the block at the index, or the first for an index of 4 and more.
struct Block1228 {
    static constexpr u32 COUNT = 4;
    u8 unknown[0x1228];
};

gptr<Block1228> block_or_first(gptr<Block1228> blocks, u32 index) {
    return index < Block1228::COUNT ? blocks + index : blocks;
}
GUEST_EXPORT(0x0030fbb4, block_or_first);

// The index of the first active entry, or -1.
s32 first_active_entry() {
    for (u32 i = 0; i < ActiveEntry::ENTRY_COUNT; i++) {
        if ((active_entries[i].flags & ActiveEntry::FLAG_ACTIVE) != 0) {
            return s32(i);
        }
    }
    return -1;
}
GUEST_EXPORT(0x0030fca0, first_active_entry);

// Remembers the reference value.
void store_reference_value() {
    *stored_reference_value = *get_reference_value();
}
GUEST_EXPORT(0x0031014c, store_reference_value);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x0030f4d8, 200, [](guest::Fuzz &f) {
    auto object = f.object<VirtualWithWord>();
    object->vtable = fuzz::harmless_vtable(f);
    f.arguments(object);
});
GUEST_FUZZ(0x0030f56c, 200, [](guest::Fuzz &f) { f.arguments(f.object<Date>(), f.object<WideDate>()); });
GUEST_FUZZ(0x0030fbb4, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<Block1228>(), f.pick<u32>({0, 1, 2, 3, 4, 5, 0xffffffffu, f.below(10)}));
});
GUEST_FUZZ(0x0030fca0, 100, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x0031014c, 100, [](guest::Fuzz &f) { f.arguments(); });
