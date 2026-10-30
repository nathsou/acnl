// More yes/no questions about an item, answered from its category, its data bytes, its number and its flags
// (the functions around 0x00768xxx-0x0076axxx).
#include "core/fuzz_helpers.hpp"
#include "item/furniture_ref.hpp"
#include "item/item.hpp"

namespace {

inline constexpr guest::Function<0x002fccdc, u32(const Item &item)> indexed_item_type;
inline constexpr guest::Function<0x00535a1c, gptr<u8>(const Item &item)> item_table_entry;
inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;

constexpr u16 MARKER_NUMBER = 0x7ffc;  // meaning not known yet
constexpr u8 NO_GROUP = 0x65;          // Item::group of items without data
constexpr u32 FLAG_NIBBLE_SHIFT = 10;  // the nibble in the flags that has_nonzero_flag_nibble looks at
constexpr u32 FLAG_NIBBLE_MASK = 0xf;
constexpr u32 FLAG_NIBBLE_LAST = 0xd;

constexpr u8 CATEGORIES_LIST_A[] = {0x3d, 0x70, 0x4d, 0x4f, 0x51, 0x79, 0x35, 0x3a};
constexpr u16 SPECIAL_NUMBERS[] = {0x208e, 0x20a1, 0x3727, 0x3728};
constexpr u8 CATEGORY_2C = 0x2c, CATEGORY_2F = 0x2f;  // meaning not known yet
constexpr u8 RULE_FOR_CATEGORY_2C = 0x69;

constexpr u32 TABLE_VALUE_3_OFFSET = 3;
constexpr u32 TABLE_FLAGS_OFFSET = 4;
constexpr u8 TABLE_FLAG_BIT_2 = 1 << 2;
constexpr u32 TABLE_VALUE_3_DEFAULT = 0x10;

constexpr u32 TYPES_SET_A[] = {0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x14, 0x1b, 0x1c};
constexpr u32 TYPE_ONLY_IN_SET_B = 0x13;

constexpr u8 WEAR_INDICES_GROUP_A[] = {0x1b, 0x1c, 0x1d, 0x1f};
constexpr u8 WEAR_INDEX_1E = 0x1e;
constexpr u8 WEAR_INDICES_LIST_B[] = {0x2a, 0x30};

constexpr u8 CATEGORY_0C = 0x0c;  // meaning not known yet

constexpr u32 BYTE_0B_LIMIT = 0xaa;  // ItemData byte 0x0b values at or above read as 0
constexpr u32 BYTE_17_LOW_MASK = 0xf;
constexpr u32 BYTE_17_LOW_LIMIT = 5;
constexpr u32 BYTE_17_LOW_WANTED = 2;
constexpr u32 MODE_FLAG_4 = 4;
constexpr u8 CATEGORY_48 = 0x48;
constexpr u16 NUMBER_9D = 0x9d;
constexpr u16 CONVERTED_NUMBER = 0x33a7;

// Category 0x27 is split by position: the first 0x2a items, the next 0x1e and the rest
constexpr u8 CATEGORY_27 = 0x27;
constexpr s32 SECTION_1_START = 0x2a;
constexpr s32 SECTION_2_START = 0x48;
constexpr u32 SECTION_OTHER = 2;

constexpr u16 SPECIAL_B_NUMBER = 0x3064;  // special set b contains it and the numbers at these offsets from it
constexpr u16 SPECIAL_B_AFTER[] = {1, 3, 4};
constexpr u16 SPECIAL_B_BLOCK = 0x3000;   // ...and these numbers' offsets from this block
constexpr u16 SPECIAL_B_BEFORE[] = {0x57, 0x58, 0x5a, 0x5b};
constexpr u8 SPECIAL_B_CATEGORIES[] = {0x06, 0x07, 0x2f, 0x31, 0x54, 0x55, 0x56, 0x57, 0x93, 0x94};

template <typename T, size_t N>
bool contains(const T (&list)[N], T value) {
    for (T member : list) {
        if (member == value) {
            return true;
        }
    }
    return false;
}

// The wear class index of the item's data, 0xff without data or past the table (matches none of the groups).
constexpr u8 NO_WEAR_INDEX = 0xff;
u8 wear_index(const Item &item) {
    gptr<ItemData> d = item.data();
    return d && d->wear_class_index < WearClassEntry::TABLE_SIZE ? d->wear_class_index : NO_WEAR_INDEX;
}

}  // namespace

u16 Item::top_flag_bits_if_kind_11() const {
    gptr<ItemData> d = data();
    return d && d->has_kind_11() ? u16(flags & FLAGS_TOP_BITS) : 0;
}
GUEST_EXPORT(0x00768008, Item::top_flag_bits_if_kind_11);

bool Item::is_in_category_list_a() const {
    gptr<ItemData> d = data();
    return d && d->category < NO_CATEGORY && contains(CATEGORIES_LIST_A, d->category);
}
GUEST_EXPORT(0x00768044, Item::is_in_category_list_a);

// Item numbers (not map objects) whose data has no valid kind_11.
bool Item::is_item_without_kind_11() const {
    if (!is_item()) {
        return false;
    }
    gptr<ItemData> d = data();
    return !d || !d->has_kind_11();
}
GUEST_EXPORT(0x007680f0, Item::is_item_without_kind_11);

// Items with a valid value_06, items of category 0x2f, items of category 0x2c with availability rule 0x69 and four
// individual item numbers.
bool Item::is_in_special_set() const {
    if (has_valid_value_06()) {
        return true;
    }
    gptr<ItemData> d = data();
    if (d && d->category < NO_CATEGORY) {
        if (d->category == CATEGORY_2F) {
            return true;
        }
        if (d->category == CATEGORY_2C) {
            return d->availability_rule == RULE_FOR_CATEGORY_2C;
        }
    }
    return contains(SPECIAL_NUMBERS, number());
}
GUEST_EXPORT(0x00768758, Item::is_in_special_set);

u8 Item::group() const {
    gptr<ItemData> d = data();
    return d ? d->group() : NO_GROUP;
}
GUEST_EXPORT(0x00768b4c, Item::group);

bool Item::has_nonzero_flag_nibble() const {
    if (!has_valid_value_06()) {
        return false;
    }
    u32 nibble = (flags >> FLAG_NIBBLE_SHIFT) & FLAG_NIBBLE_MASK;
    return nibble != 0 && nibble <= FLAG_NIBBLE_LAST;
}
GUEST_EXPORT(0x00768b6c, Item::has_nonzero_flag_nibble);

bool Item::has_type_in_set_a() const {
    return contains(TYPES_SET_A, indexed_item_type(*this));
}
GUEST_EXPORT(0x00768ba8, Item::has_type_in_set_a);

bool Item::has_type_in_set_b() const {
    u32 type = indexed_item_type(*this);
    return contains(TYPES_SET_A, type) || type == TYPE_ONLY_IN_SET_B;
}
GUEST_EXPORT(0x0076991c, Item::has_type_in_set_b);

// For furniture-like kinds with a table entry: the entry's byte 3, or 0x10 when that is not positive. 0 for the rest.
u32 Item::table_value_3() const {
    gptr<ItemData> d = data();
    gptr<u8> entry = item_table_entry(*this);
    if (!d || !entry || !d.cast<FurnitureRef>()->is_kind_in_group()) {
        return 0;
    }
    s32 value = s8(entry[TABLE_VALUE_3_OFFSET]);
    return value > 0 ? u32(value) : TABLE_VALUE_3_DEFAULT;
}
GUEST_EXPORT(0x00768ce8, Item::table_value_3);

bool Item::table_flag_bit_2_unless_no_kind_11() const {
    gptr<ItemData> d = data();
    if (!d || !d->has_kind_11()) {
        return true;
    }
    return (item_table_entry(*this)[TABLE_FLAGS_OFFSET] & TABLE_FLAG_BIT_2) != 0;
}
GUEST_EXPORT(0x00768d60, Item::table_flag_bit_2_unless_no_kind_11);

bool Item::has_wear_index_in_group_a() const {
    return contains(WEAR_INDICES_GROUP_A, wear_index(*this));
}
GUEST_EXPORT(0x00769670, Item::has_wear_index_in_group_a);

bool Item::is_wear_class_3_outside_groups() const {
    u8 index = wear_index(*this);
    if (contains(WEAR_INDICES_GROUP_A, index) || index == WEAR_INDEX_1E) {
        return false;
    }
    return wear_class() == WEAR_CLASS_3;
}
GUEST_EXPORT(0x0076a4bc, Item::is_wear_class_3_outside_groups);

// The empty item, and the items of category 0x0c with wear index 0x2a or 0x30 (except the first item).
bool Item::is_empty_or_in_list_b() const {
    if (is_empty()) {
        return true;
    }
    if (is_first_item()) {
        return false;
    }
    gptr<ItemData> d = data();
    return d && d->category == CATEGORY_0C && contains(WEAR_INDICES_LIST_B, wear_index(*this));
}
GUEST_EXPORT(0x007694fc, Item::is_empty_or_in_list_b);

bool Item::is_marker_or_has_kind_11() const {
    if (number() == MARKER_NUMBER) {
        return true;
    }
    gptr<ItemData> d = data();
    return d && d->has_kind_11();
}
GUEST_EXPORT(0x0076a028, Item::is_marker_or_has_kind_11);

// Items with a valid kind_11 that are in one of a few categories, or have one of a few numbers.
bool Item::is_in_special_set_b() const {
    gptr<ItemData> d = data();
    if (!d || !d->has_kind_11()) {
        return false;
    }
    if (d->category < NO_CATEGORY && contains(SPECIAL_B_CATEGORIES, d->category)) {
        return true;
    }
    u16 n = number();
    if (n == SPECIAL_B_NUMBER) {
        return true;
    }
    if (n > SPECIAL_B_NUMBER) {
        return contains(SPECIAL_B_AFTER, u16(n - SPECIAL_B_NUMBER));
    }
    return contains(SPECIAL_B_BEFORE, u16(n - SPECIAL_B_BLOCK));
}
GUEST_EXPORT(0x0076a280, Item::is_in_special_set_b);

// For the items of category 0x27: 0 for its first 0x2a, 1 up to the 0x48th, 2 after. 2 for all other items.
u32 Item::section_in_category_27() const {
    gptr<ItemData> d = data();
    if (!d || d->category != CATEGORY_27) {
        return SECTION_OTHER;
    }
    s32 offset = item_offset_in_category(*this);
    if (offset < SECTION_1_START) {
        return 0;
    }
    return offset < SECTION_2_START ? 1 : SECTION_OTHER;
}
GUEST_EXPORT(0x007692f0, Item::section_in_category_27);

GUEST_FUZZ(0x00768008, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x00768044, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f, {0x3d, 0x70, 0x4d, 0x4f, 0x51, 0x79, 0x35, 0x3a})); });
GUEST_FUZZ(0x007680f0, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x00768758, 400, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f, {0x2f, 0x2c})); });
GUEST_FUZZ(0x00768b4c, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x00768b6c, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x00768ba8, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x0076991c, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x00768ce8, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x00768d60, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x00769670, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x0076a4bc, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });
GUEST_FUZZ(0x007694fc, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f, {0x0c})); });
GUEST_FUZZ(0x0076a028, 300, [](guest::Fuzz &f) {
    auto item = fuzz::assorted_item(f);
    if (f.below(8) == 0) {
        item->id = u16(MARKER_NUMBER | (item->id & Item::ID_FLAG));
    }
    f.arguments(item);
});
GUEST_FUZZ(0x0076a280, 400, [](guest::Fuzz &f) {
    auto item = fuzz::assorted_item(f, {0x06, 0x07, 0x2f, 0x31, 0x54, 0x55, 0x56, 0x57, 0x93, 0x94});
    if (f.below(4) == 0) {
        item->id = u16(SPECIAL_B_BLOCK + f.below(0x70));
    }
    f.arguments(item);
});
GUEST_FUZZ(0x007692f0, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f, {CATEGORY_27})); });

u32 Item::data_byte_0b() const {
    gptr<ItemData> d = data();
    if (!d) {
        return 0;
    }
    return d->unknown_0b < BYTE_0B_LIMIT ? d->unknown_0b : 0;
}
GUEST_EXPORT(0x0076c628, Item::data_byte_0b);
GUEST_FUZZ(0x0076c628, 200, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });

bool Item::has_valid_value_06_and_flags_value() const {
    return has_valid_value_06() && flags_value() != 0;
}
GUEST_EXPORT(0x0076c648, Item::has_valid_value_06_and_flags_value);
GUEST_FUZZ(0x0076c648, 200, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });

bool Item::has_data_byte_17_low_nibble_2() const {
    gptr<ItemData> d = data();
    if (!d) {
        return false;
    }
    u32 value = d->byte_17 & BYTE_17_LOW_MASK;
    return value < BYTE_17_LOW_LIMIT && value == BYTE_17_LOW_WANTED;
}
GUEST_EXPORT(0x0076c5b0, Item::has_data_byte_17_low_nibble_2);
GUEST_FUZZ(0x0076c5b0, 200, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });

bool Item::is_wear_class_7_in_mode_with_flag_4() const {
    return is_wear_class_7() && table_entry_has_all_bits(MODE_FLAG_4, read_global_byte_2()) != 0;
}
GUEST_EXPORT(0x0076aa70, Item::is_wear_class_7_in_mode_with_flag_4);
GUEST_FUZZ(0x0076aa70, 300, [](guest::Fuzz &f) { f.arguments(fuzz::assorted_item(f)); });

// Items of category 0x48 and the object with number 0x9d become item number 0x33a7 (keeping the flags and the flag of the
// id); every other item becomes the empty item.
void item_for_category_48_or_number_9d(Item &out, const Item &item) {
    gptr<ItemData> d = item.data();
    bool converts = (d && d->category < Item::NO_CATEGORY && d->category == CATEGORY_48) || item.number() == NUMBER_9D;
    if (!converts) {
        out = *empty_item;
        return;
    }
    out.id = u16((item.id & Item::ID_FLAG) | CONVERTED_NUMBER);
    out.flags = item.flags;
}
GUEST_EXPORT(0x0076b8c4, item_for_category_48_or_number_9d);
GUEST_FUZZ(0x0076b8c4, 300, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), fuzz::assorted_item(f, {CATEGORY_48})); });
