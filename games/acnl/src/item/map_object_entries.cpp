// The entries the game keeps for the map objects (item numbers below 0xfe: trees, weeds, rocks...).
#include "item/item.hpp"

namespace {

inline constexpr guest::Function<0x002fe7a0, bool(const Item &item)> item_has_type_4_6_8_or_25;

constexpr u32 MAP_OBJECT_COUNT = 0xfe;
constexpr u32 NO_ENTRY_INDEX = 0xffffffff;
constexpr u32 ENTRY_SIZE = 16;
constexpr u32 VALUE_08_OFFSET = 8;   // a halfword (meaning not known yet)
constexpr u32 TYPE_OFFSET = 0xa;     // see indexed_item_type
constexpr u32 TYPE_LIMIT = 0x1d;     // types at or above are not valid
constexpr u32 BYTE_0D_OFFSET = 0xd;  // a signed byte (meaning not known yet)
constexpr s32 BYTE_0D_MINIMUM_A = 4;
constexpr s32 BYTE_0D_MINIMUM_B = 2;
constexpr u8 TYPE_4 = 4, TYPE_6 = 6, TYPE_8 = 8, TYPE_25 = 0x19;

// The loaded table: only the pointer to the entries is known.
struct MapObjectTable {
    u32 unknown_00;
    gptr<u8> entries;  // MAP_OBJECT_COUNT entries of ENTRY_SIZE bytes
};
GUEST_OFFSET(MapObjectTable, entries, 4);

inline guest::global<gptr<MapObjectTable>, 0x009526e0> map_object_table;

}  // namespace

// The index of the item's map object entry (the item number), or all ones for numbers above 0xfd.
u32 map_object_index(const Item &item) {
    u32 number = item.number();
    return number > MAP_OBJECT_COUNT - 1 ? NO_ENTRY_INDEX : number;
}
GUEST_EXPORT(0x0076939c, map_object_index);
GUEST_FUZZ(0x0076939c, 200, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(f.pick<u32>({0, 1, MAP_OBJECT_COUNT - 2, MAP_OBJECT_COUNT - 1, MAP_OBJECT_COUNT, 0x2000, f.number()}));
    f.arguments(item);
});

// The item's map object entry, or null for numbers of 0xfe and more and while the table is not loaded.
gptr<u8> map_object_entry(const Item &item) {
    gptr<MapObjectTable> table = *map_object_table;
    if (!table) {
        return gptr<u8>(0u);
    }
    u32 index = map_object_index(item);
    gptr<u8> entries = table->entries;
    if (!entries || index >= MAP_OBJECT_COUNT) {
        return gptr<u8>(0u);
    }
    return entries + index * ENTRY_SIZE;
}
GUEST_EXPORT(0x002fd010, map_object_entry);
GUEST_FUZZ(0x002fd010, 200, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(f.pick<u32>({0, 1, MAP_OBJECT_COUNT - 1, MAP_OBJECT_COUNT, 0x2000, f.below(0x100), f.number()}));
    f.arguments(item);
});

// The halfword at 8 of the item's map object entry (the item must have one).
u16 map_object_value_08(const Item &item) {
    return *(map_object_entry(item) + VALUE_08_OFFSET).cast<u16>();
}
GUEST_EXPORT(0x007692e0, map_object_value_08);
GUEST_FUZZ(0x007692e0, 100, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(f.below(MAP_OBJECT_COUNT));
    f.arguments(item);
});

// Whether the item is a map object whose type is 4, 6, 8 or 25 and whose signed byte at 0xd is at least 4.
bool map_object_of_type_4_6_8_25_with_byte_0d_at_least_4(const Item &item) {
    if (item.number() >= MAP_OBJECT_COUNT) {
        return false;
    }
    gptr<u8> entry = map_object_entry(item);
    if (!entry) {
        return false;
    }
    u8 type = entry[TYPE_OFFSET];
    bool listed = type == TYPE_4 || type == TYPE_6 || type == TYPE_8 || type == TYPE_25;
    return type < TYPE_LIMIT && listed && s8(entry[BYTE_0D_OFFSET]) >= BYTE_0D_MINIMUM_A;
}
GUEST_EXPORT(0x007698bc, map_object_of_type_4_6_8_25_with_byte_0d_at_least_4);
GUEST_FUZZ(0x007698bc, 300, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(f.pick<u32>({f.below(MAP_OBJECT_COUNT + 2), f.below(MAP_OBJECT_COUNT), f.number()}));
    f.arguments(item);
});

// The same for the items the indexed type check accepts, with the byte at 0xd at least 2.
bool map_object_of_type_4_6_8_25_with_byte_0d_at_least_2(const Item &item) {
    if (item.number() >= MAP_OBJECT_COUNT) {
        return false;
    }
    gptr<u8> entry = map_object_entry(item);
    return item_has_type_4_6_8_or_25(item) && s8(entry[BYTE_0D_OFFSET]) >= BYTE_0D_MINIMUM_B;
}
GUEST_EXPORT(0x00599e68, map_object_of_type_4_6_8_25_with_byte_0d_at_least_2);
GUEST_FUZZ(0x00599e68, 300, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(f.pick<u32>({f.below(MAP_OBJECT_COUNT + 2), f.below(MAP_OBJECT_COUNT), f.number()}));
    f.arguments(item);
});
