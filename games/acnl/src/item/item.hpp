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

// What kind of thing an item is worn/held as (0: none). Which class is which is not known yet; ItemSlots holds one
// item per class.
enum WearClass : u32 {
    WEAR_CLASS_NONE = 0,
    WEAR_CLASS_1 = 1,
    WEAR_CLASS_2 = 2,
    WEAR_CLASS_3 = 3,
    WEAR_CLASS_4 = 4,
    WEAR_CLASS_5 = 5,
    WEAR_CLASS_6 = 6,
    WEAR_CLASS_7 = 7,
    WEAR_CLASS_LIMIT = 8,  // the entry's nibble must be below this
};

// An entry of the wear class table (14 bytes).
struct WearClassEntry {
    static constexpr u32 TABLE_SIZE = 50;  // ItemData::wear_class_index values at or above read as 0
    static constexpr u32 CLASS_SHIFT = 4;

    u8 unknown_00[13];
    u8 class_and_flags;  // the high nibble is the WearClass
};
GUEST_OFFSET(WearClassEntry, class_and_flags, 0x0d);
GUEST_SIZE(WearClassEntry, 14);

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
    gptr<WearClassEntry> wear_class_entry() const;  // from the wear class table; null without data or table
    WearClass wear_class() const;               // the high nibble of the entry's byte 0xd, NONE without one
    bool is_wear_class_7() const;               // wear_class() == CLASS_7
    bool data_flag_1c_bit3() const;             // true without data; else ItemData::flag_1c_bit3()
    bool has_valid_value_06() const;            // data with a valid kind_11 and a non-zero value_06 below the limit
    u32 class_19_if_valid_kind() const;         // ItemData::class_19 for data with a valid kind_11, else 0
    u32 group_for_class() const;                // a group 0-9 for each kind f_007689a4 reports (0: none)
    bool has_flag_bit_10_in_type_10() const;    // flags bit 10, for items whose indexed type is 10
    bool set_flags_value_if_category_54_59(u32 value);  // sets the flags below the top bits when the category is 0x54, 0x55, 0x58 or 0x59
    bool is_in_id_set_a() const;                // the number is one of 0x334c, 0x3350...0x3364 (step 4) or 0x26ed
    bool is_in_id_set_b() const;                // the number is one of 0x334e, 0x3352...0x3362 (step 4)
    u32 quarter_price() const;                  // a quarter of the price when it is positive, else 0
    u16 flags_value() const;                    // flags without the two top bits
    bool is_first_item() const;                 // the number is FIRST_ITEM (the flag in the id is ignored)
    bool has_data_flag_1b_bit1() const;         // bit 1 of ItemData::flags_1b (meaning not known yet)
    bool has_category_flag_bit_1_6() const;     // see item_predicates.cpp
    bool has_category_flag_bit_2_5() const;     // see item_predicates.cpp
    bool is_in_category_group_24_27_28() const; // the category is 0x24, 0x27 or 0x28
};
GUEST_SIZE(Item, 4);

// A category's entry (12 bytes): the numbers of its first and last items are what is known.
struct CategoryInfo {
    u16 first_item_number;
    u16 last_item_number;  // the category holds the numbers from the first to this one
    u8 unknown_04[8];
};
GUEST_SIZE(CategoryInfo, 12);
gptr<CategoryInfo> category_info(u32 category);  // categories >= NO_CATEGORY get a shared default entry

Item &construct_item(Item &self, u16 id);       // the constructor Item(u16)
Item &copy_item(Item &self, const Item &other);

// An entry of the item data table (30 bytes). Only the price and the category are known so far.
struct ItemData {
    static constexpr u8 KIND_11_LAST = 0x55;
    static constexpr u8 CLASS_19_LIMIT = 6;
    static constexpr u32 CLASS_19_SHIFT = 4;
    static constexpr u16 VALUE_06_LIMIT = 0x260;  // values at or above are not valid
    static constexpr u8 UNKNOWN_0D_LIMIT = 0xb9;   // values at or above read as 0 (meaning not known yet)
    static constexpr u8 UNKNOWN_15_MASK = 0x0f;    // only the low 4 bits are read
    static constexpr u8 UNKNOWN_15_LIMIT = 11;     // masked values at or above read as 0

    u8 unknown_00[2];
    u16 price_unit;
    u8 unknown_04[2];
    u16 value_06;      // see Item::has_valid_value_06
    u8 unknown_08[2];
    u8 category;
    u8 unknown_0b[2];
    u8 unknown_0d;
    s8 price_multiplier;  // the base price is price_unit * price_multiplier
    u8 wear_class_index;  // into the wear class table (Item::wear_class_entry)
    u8 unknown_10;
    u8 kind_11;           // see ItemData::has_kind_11
    u8 unknown_12[3];
    u8 unknown_15;
    u8 unknown_16[3];
    u8 class_and_flags_19;  // the high nibble is a class below 6; see ItemData::class_19
    u8 unknown_1a;
    u8 flags_1b;  // bit 1: see Item::has_data_flag_1b_bit1
    u8 flags_1c;  // bit 3: see ItemData::flag_1c_bit3
    u8 unknown_1d;

    u32 base_price() const { return u32(price_unit) * u32(s32(price_multiplier)); }
    // True without the category flag table; otherwise bit 3 of flags_1c when bit 7 of the category's second flag byte
    // is set, else false (meaning not known yet).
    bool flag_1c_bit3() const;
    bool has_kind_11() const;  // kind_11 is between 1 and KIND_11_LAST
    u32 class_19() const;      // the high nibble of class_and_flags_19 when it is below CLASS_19_LIMIT, else 0
};
GUEST_OFFSET(ItemData, value_06, 0x06);
GUEST_OFFSET(ItemData, category, 0x0a);
GUEST_OFFSET(ItemData, unknown_0d, 0x0d);
GUEST_OFFSET(ItemData, price_multiplier, 0x0e);
GUEST_OFFSET(ItemData, wear_class_index, 0x0f);
GUEST_OFFSET(ItemData, kind_11, 0x11);
GUEST_OFFSET(ItemData, unknown_15, 0x15);
GUEST_OFFSET(ItemData, class_and_flags_19, 0x19);
GUEST_OFFSET(ItemData, flags_1b, 0x1b);
GUEST_OFFSET(ItemData, flags_1c, 0x1c);
GUEST_SIZE(ItemData, 30);

// The loaded item data table (from the RomFS)
struct ItemDataTable {
    u32 unknown_00;
    gptr<ItemData> entries;  // ITEM_COUNT of them, once loaded
};
inline guest::global<ItemDataTable, 0x00a1838c> item_data_table;

// The wear class table
struct WearClassTable {
    u32 unknown_00;
    gptr<WearClassEntry> entries;  // WearClassEntry::TABLE_SIZE of them, once loaded
};
inline guest::global<WearClassTable, 0x00a183ac> wear_class_table;

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
