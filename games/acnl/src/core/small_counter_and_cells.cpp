// A clamped counter at 0x154 and two checks on the indexed item table.
#include "guest/guest.hpp"
#include "item/item.hpp"

namespace {

// An object with a counter at 0x154 kept in [0, COUNTER_MAX] (meaning not known yet).
struct CounterObject154 {
    static constexpr s64 COUNTER_MAX = 9999;

    u8 unknown_000[0x154];
    s32 counter_154;

    void add_counter(s32 delta);
};
GUEST_OFFSET(CounterObject154, counter_154, 0x154);

// An entry of the indexed item table; only the bytes read here are known.
struct IndexedEntry {
    u8 unknown_00[0x0f];
    u8 flags_0f;  // bit 3 is read by item_entry_flag_3
};
GUEST_OFFSET(IndexedEntry, flags_0f, 0x0f);

constexpr u16 LAST_INDEXED_NUMBER = 0xfd;
constexpr u32 TYPE_WITH_FLAG_9 = 10;
constexpr u8 ENTRY_FLAG_3 = 1 << 3;
constexpr u16 ITEM_FLAG_9 = 1 << 9;
constexpr u32 FROZEN_COUNTERS = 3;  // read_global_object_byte's value that freezes the counter

// Still recompiled code:
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;
inline constexpr guest::Function<0x002fd010, gptr<IndexedEntry>(const Item &item)> indexed_item_entry;
inline constexpr guest::Function<0x002fccdc, u32(const Item &item)> indexed_item_type;

void CounterObject154::add_counter(s32 delta) {
    if (read_global_object_byte() == FROZEN_COUNTERS) {
        return;
    }
    s64 sum = s64(counter_154) + s64(delta);
    if (sum < 0) {
        counter_154 = 0;
    } else if (sum > COUNTER_MAX) {
        counter_154 = s32(COUNTER_MAX);
    } else {
        counter_154 = s32(sum);
    }
}

// Bit 3 of the item's entry in the indexed table; false past the table or without an entry.
bool item_entry_flag_3(const Item &item) {
    if (item.number() > LAST_INDEXED_NUMBER) {
        return false;
    }
    gptr<IndexedEntry> entry = indexed_item_entry(item);
    if (!entry) {
        return false;
    }
    return (entry->flags_0f & ENTRY_FLAG_3) != 0;
}

// Bit 9 of the item's flags, for items whose indexed type is 10.
bool item_flag_9_for_type_10(const Item &item) {
    if (indexed_item_type(item) != TYPE_WITH_FLAG_9) {
        return false;
    }
    return (item.flags & ITEM_FLAG_9) != 0;
}

}  // namespace

GUEST_EXPORT(0x002fe668, CounterObject154::add_counter);
GUEST_EXPORT(0x002fe748, item_entry_flag_3);
GUEST_EXPORT(0x002fe77c, item_flag_9_for_type_10);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x002fe668, 300, [](guest::Fuzz &f) {
    auto object = f.object<CounterObject154>();
    u32 choices[] = {0, 9999, 5000, 0x7fffffff, 0x80000000, f.number()};
    object->counter_154 = s32(choices[f.below(6)]);
    f.arguments(object, f.pick<u32>({0, 1, 0xffffffff, 9999, 10000, 0x7fffffff, 0x80000000, f.number()}));
});

static gptr<Item> some_indexed_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    u16 number = f.below(4) != 0 ? u16(f.below(LAST_INDEXED_NUMBER + 1))
                                 : f.pick<u16>({0, LAST_INDEXED_NUMBER, LAST_INDEXED_NUMBER + 1, Item::EMPTY});
    item->id = u16(number | (f.below(2) != 0 ? Item::ID_FLAG : 0));
    return item;
}

GUEST_FUZZ(0x002fe748, 300, [](guest::Fuzz &f) { f.arguments(some_indexed_item(f)); });
GUEST_FUZZ(0x002fe77c, 300, [](guest::Fuzz &f) {
    auto item = some_indexed_item(f);
    if (f.below(2) == 0) {
        item->flags |= ITEM_FLAG_9;
    }
    f.arguments(item);
});
