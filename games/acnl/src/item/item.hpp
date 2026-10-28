// Items: everything a player can hold, plant, place or wear, and the objects on the map. An item is 4 bytes
// (pockets, storage, the town map, mail attachments all hold them).
//
// The id's bit 15 is a flag; the rest, the item number, has a kind in bits 13-14:
//   0x0000-0x1FFF  map objects (trees, weeds, rocks...)
//   0x2000-0x372A  items (each with an ItemData entry)
//   0x7FFE         empty
#pragma once

#include "guest/guest.hpp"

struct ItemData;

// Item categories (ItemData::category). Only the ones the code relies on are named; the meaning of the others,
// and the exact meaning of these beyond their effect, is not known yet.
enum ItemCategory : u8 {
    CATEGORY_BELLS = 0x02,                 // bags of bells: their price is the bells inside
    CATEGORY_PRICED_BY_REFERENCE_33 = 0x33,  // a tenth of the price when matching the reference item (Item::price)
    CATEGORY_PRICED_BY_REFERENCE_34 = 0x34,
    CATEGORY_STACK_75 = 0x75,              // stacks (the count is in the flags), also priced by reference
    CATEGORY_STACK_76 = 0x76,
    CATEGORY_COUNT = 0x9b,                 // also used as "no category"
};

// The kind of an item number (bits 13-14)
enum ItemKind : u32 {
    KIND_MAP_OBJECT = 0,
    KIND_ITEM = 1,
    KIND_2 = 2,  // (unknown; always passes has_category_flag_4)
    KIND_3 = 3,
};

struct Item {
    u16 id;
    u16 flags;

    static constexpr u16 ID_FLAG = 0x8000;      // a flag kept in the id, not part of the item number
    static constexpr u16 NUMBER_MASK = 0x7fff;
    static constexpr u32 KIND_SHIFT = 13;
    static constexpr u16 KIND_MASK = 0x6000;
    static constexpr u16 EMPTY = 0x7ffe;
    static constexpr u16 FIRST_ITEM = 0x2000;
    static constexpr u16 ITEM_COUNT = 0x172b;   // items with data: 0x2000-0x372A
    static constexpr u8 NO_CATEGORY = CATEGORY_COUNT;

    // flags: the top two bits are flags; for stacks, the rest is the count minus one
    static constexpr u16 FLAGS_TOP_BITS = 0xc000;

    u16 number() const { return id & NUMBER_MASK; }
    ItemKind kind() const { return ItemKind(number() >> KIND_SHIFT); }
    bool is_empty() const;
    bool is_item() const;                       // in the range with ItemData
    bool has_number(u16 number) const;
    bool same_number_as(const Item &other) const;  // the ids match, ignoring ID_FLAG
    bool is_bell_bag() const;                   // has data, in CATEGORY_BELLS
    s32 index() const;                          // into the item data table, or -1
    gptr<ItemData> data() const;                // null for map objects and empty slots
    u8 category() const;                        // NO_CATEGORY without data
    gptr<u8> category_flags() const;            // the 3-byte entry of the item's category (null: not loaded)
    bool has_category_flag_4() const;           // true for kind 2 ids, else bit 4 of category_flags()[1]
    bool has_category_flag_1() const;           // true for kind 2 ids, else bit 1 of category_flags()[1]
    bool is_kind_2() const;                     // kind() == KIND_2
    u8 data_unknown_0d() const;                 // ItemData::unknown_0d if valid, else 0
    u8 data_unknown_15() const;                 // the low 4 bits of ItemData::unknown_15 if valid, else 0
    u32 price() const;                          // for a bag of bells, the bells in it
};
GUEST_SIZE(Item, 4);

// A category's entry (12 bytes): the item number of its first item is the one thing known.
struct CategoryInfo {
    u16 first_item_number;
    u8 unknown_02[10];
};
GUEST_SIZE(CategoryInfo, 12);
gptr<CategoryInfo> category_info(u32 category);  // categories >= NO_CATEGORY get a shared default entry

Item &construct_item(Item &self, u16 id);       // the constructor Item(u16)
Item &copy_item(Item &self, const Item &other);

// An entry of the item data table (30 bytes). Only the price and the category are known so far.
struct ItemData {
    static constexpr u8 UNKNOWN_0D_LIMIT = 0xb9;   // values at or above read as 0 (meaning not known yet)
    static constexpr u8 UNKNOWN_15_MASK = 0x0f;    // only the low 4 bits are read
    static constexpr u8 UNKNOWN_15_LIMIT = 11;     // masked values at or above read as 0

    u8 unknown_00[2];
    u16 price_unit;
    u8 unknown_04[6];
    u8 category;
    u8 unknown_0b[2];
    u8 unknown_0d;
    s8 price_multiplier;  // the base price is price_unit * price_multiplier
    u8 unknown_0f[6];
    u8 unknown_15;
    u8 unknown_16[8];

    u32 base_price() const { return u32(price_unit) * u32(s32(price_multiplier)); }
};
GUEST_OFFSET(ItemData, category, 0x0a);
GUEST_OFFSET(ItemData, unknown_0d, 0x0d);
GUEST_OFFSET(ItemData, price_multiplier, 0x0e);
GUEST_OFFSET(ItemData, unknown_15, 0x15);
GUEST_SIZE(ItemData, 30);

// The loaded item data table (from the RomFS)
struct ItemDataTable {
    u32 unknown_00;
    gptr<ItemData> entries;  // ITEM_COUNT of them, once loaded
};
inline guest::global<ItemDataTable, 0x00a1838c> item_data_table;

// the per-category flag table
constexpr u32 CATEGORY_FLAGS_SIZE = 3;  // bytes per category
struct CategoryFlagTable {
    u32 unknown_00;
    gptr<u8> entries;
};
inline guest::global<CategoryFlagTable, 0x00a1839c> category_flag_table;

// Bags of bells: 0x20AC-0x20B4 hold 100-900 bells, 0x20B5-0x2117 1,000-99,000.
constexpr u16 BELL_BAG_100 = 0x20ac;
constexpr u16 BELL_BAG_99000 = 0x2117;

// An empty item, for slots that hold nothing usable
inline guest::global<Item, 0x0095bfdc> empty_item;
