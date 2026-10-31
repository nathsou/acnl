// More yes/no questions about an item, answered from its category, its data bytes, its number and its flags
// (the functions around 0x00768xxx-0x0076axxx).
#include "guest/guest.hpp"
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

u32 Item::data_byte_0b() const {
    gptr<ItemData> d = data();
    if (!d) {
        return 0;
    }
    return d->unknown_0b < BYTE_0B_LIMIT ? d->unknown_0b : 0;
}
GUEST_EXPORT(0x0076c628, Item::data_byte_0b);

bool Item::has_valid_value_06_and_flags_value() const {
    return has_valid_value_06() && flags_value() != 0;
}
GUEST_EXPORT(0x0076c648, Item::has_valid_value_06_and_flags_value);

bool Item::has_data_byte_17_low_nibble_2() const {
    gptr<ItemData> d = data();
    if (!d) {
        return false;
    }
    u32 value = d->byte_17 & BYTE_17_LOW_MASK;
    return value < BYTE_17_LOW_LIMIT && value == BYTE_17_LOW_WANTED;
}
GUEST_EXPORT(0x0076c5b0, Item::has_data_byte_17_low_nibble_2);

bool Item::is_wear_class_7_in_mode_with_flag_4() const {
    return is_wear_class_7() && table_entry_has_all_bits(MODE_FLAG_4, read_global_byte_2()) != 0;
}
GUEST_EXPORT(0x0076aa70, Item::is_wear_class_7_in_mode_with_flag_4);

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

namespace {

// The flag bits behind the tags 0-7: (the byte of ItemData, the bit).
struct TagBit {
    u32 byte_offset;
    u32 bit;
};
constexpr u32 FLAGS_1C = 0x1c, FLAGS_1D = 0x1d;
constexpr TagBit TAG_BITS[] = {{FLAGS_1C, 1}, {FLAGS_1D, 7}, {FLAGS_1C, 0}, {FLAGS_1D, 6},
                               {FLAGS_1D, 5}, {FLAGS_1D, 3}, {FLAGS_1D, 4}, {FLAGS_1D, 2}};

}  // namespace

u32 Item::data_tag(u32 index) const {
    gptr<ItemData> d = data();
    if (!d || index >= sizeof(TAG_BITS) / sizeof(TAG_BITS[0])) {
        return 0;
    }
    return (d.cast<u8>()[TAG_BITS[index].byte_offset] >> TAG_BITS[index].bit) & 1;
}
GUEST_EXPORT(0x001892f8, Item::data_tag);

// ---- more questions about the category and the variation of an item

namespace {

constexpr u8 CATEGORY_80 = 0x80, CATEGORY_29 = 0x29, CATEGORY_8D = 0x8d, CATEGORY_15 = 0x15;
constexpr u32 TABLE_80_COUNT = 5;
constexpr u32 TABLE_80_NUMBERS = 0x0088e658;  // u16 item numbers
constexpr u32 TABLE_80_VALUES = 0x0088e61c;   // the value for each
constexpr u32 TABLE_80_DEFAULT = 0x1d;
constexpr u8 WEAR_INDICES_GROUP_B[] = {7, 0xd, 0x11, 0x14};
constexpr u8 FLAGS_1C_BIT_4 = 1 << 4;
constexpr u32 CATEGORY_FLAGS_SECOND_BYTE = 1;
constexpr u32 CATEGORY_FLAG_BIT_5 = 5;

// The variation of an item with a valid value_06 is a nibble of its flags (bits 10-13): 1-7 stand for size 1, 8-9 for
// size 2 and 10-13 for size 4; the index inside the size is the nibble minus where the size starts.
constexpr u32 VARIANT_LAST = 13;
constexpr u32 SIZE_1_LAST = 7;
constexpr u32 SIZE_2_LAST = 9;
constexpr u32 SIZE_2_FIRST = 8;
constexpr u32 SIZE_4_FIRST = 10;
constexpr u32 SIZE_1 = 1, SIZE_2 = 2, SIZE_4 = 4;

// The nibble, or 0 when it does not name a variation.
u32 variant_nibble(const Item &item) {
    if (!item.has_valid_value_06()) {
        return 0;
    }
    u32 nibble = (item.flags >> FLAG_NIBBLE_SHIFT) & FLAG_NIBBLE_MASK;
    return nibble > VARIANT_LAST ? 0 : nibble;
}

}  // namespace

bool Item::has_category_in_set_c() const {
    return contains(SPECIAL_B_CATEGORIES, category());
}
GUEST_EXPORT(0x0076a684, Item::has_category_in_set_c);

bool Item::is_category_48_with_wear_index_in_group_a() const {
    return category() == CATEGORY_48 && contains(WEAR_INDICES_GROUP_A, wear_index(*this));
}
GUEST_EXPORT(0x0076ae94, Item::is_category_48_with_wear_index_in_group_a);

u32 Item::table_value_for_category_80() const {
    if (category() != CATEGORY_80) {
        return TABLE_80_DEFAULT;
    }
    for (u32 i = 0; i < TABLE_80_COUNT; i++) {
        if (number() == gptr<u16>(TABLE_80_NUMBERS)[i]) {
            return gptr<u8>(TABLE_80_VALUES)[i];
        }
    }
    return TABLE_80_DEFAULT;
}
GUEST_EXPORT(0x0076af00, Item::table_value_for_category_80);

u32 Item::count_if_category_29() const {
    return category() == CATEGORY_29 ? flags_value() + 1u : 0;
}
GUEST_EXPORT(0x0076b274, Item::count_if_category_29);

// False only for the items with flag 4 of ItemData::flags_1c that are neither flagged by flag_1c_bit3 nor have a valid
// value_06 with a variation count.
bool Item::is_not_catalog_flagged_or_exempt() const {
    gptr<ItemData> d = data();
    if (!d || d->flag_1c_bit3()) {
        return true;
    }
    if (has_valid_value_06() && flags_value() != 0) {
        return true;
    }
    return (d->flags_1c & FLAGS_1C_BIT_4) == 0;
}
GUEST_EXPORT(0x0076c318, Item::is_not_catalog_flagged_or_exempt);

u32 Item::value_if_category_8d() const {
    return category() == CATEGORY_8D ? flags_value() : 0;
}
GUEST_EXPORT(0x0076c408, Item::value_if_category_8d);

bool Item::has_wear_index_in_group_b() const {
    return contains(WEAR_INDICES_GROUP_B, wear_index(*this));
}
GUEST_EXPORT(0x0076c5e4, Item::has_wear_index_in_group_b);

bool Item::is_category_15() const {
    return category() == CATEGORY_15;
}
GUEST_EXPORT(0x0076c6a4, Item::is_category_15);

bool Item::has_category_flag_bit_1_5() const {
    gptr<u8> entry = category_flags();
    return entry && ((entry[CATEGORY_FLAGS_SECOND_BYTE] >> CATEGORY_FLAG_BIT_5) & 1) != 0;
}
GUEST_EXPORT(0x0076c590, Item::has_category_flag_bit_1_5);

// The size (1, 2 or 4) the variation nibble stands for, 0 without a variation.
u32 Item::variant_size() const {
    u32 nibble = variant_nibble(*this);
    if (nibble == 0) {
        return 0;
    }
    if (nibble <= SIZE_1_LAST) {
        return SIZE_1;
    }
    return nibble <= SIZE_2_LAST ? SIZE_2 : SIZE_4;
}
GUEST_EXPORT(0x0076b5dc, Item::variant_size);

// The variation's index inside its size.
u32 Item::variant_index_in_size() const {
    u32 nibble = variant_nibble(*this);
    if (nibble == 0) {
        return 0;
    }
    if (nibble <= SIZE_1_LAST) {
        return nibble;
    }
    return nibble <= SIZE_2_LAST ? nibble - SIZE_2_FIRST : nibble - SIZE_4_FIRST;
}
GUEST_EXPORT(0x0076bf68, Item::variant_index_in_size);

bool Item::passes_sanitize() const {
    Item copy = *this;
    return copy.sanitize();
}
GUEST_EXPORT(0x0076ad70, Item::passes_sanitize);

// Whether any of the eight items of the row has the same number as the item (Thumb entry).
bool row_has_same_number(gptr<const Item> row, const Item &item) {
    constexpr u32 ROW_SIZE = 8;
    for (u32 i = 0; i < ROW_SIZE; i++) {
        if (row[i].same_number_as(item)) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0011b469, row_has_same_number);

// ---- the item's special event, regular items and the item data checks

namespace {

inline constexpr guest::Function<0x0076bb34, u32(const Item &item)> item_size_class;
inline constexpr guest::Function<0x0030b654, bool(const Item &item)> item_has_valid_data;
inline constexpr guest::Function<0x0030b674, u32(const Item &item)> item_data_byte_19_value;

constexpr u32 LARGEST_SIZE_CLASS = 8;

// The categories regular items cannot have.
constexpr u8 NOT_REGULAR_CATEGORIES[] = {0x24, 0x27, 0x28, 0x39, 0x3a, 0x49, 0x6d, 0x8a, 0x7b, 0x95};
constexpr u32 CATEGORY_FLAG_BIT_4_IN_SECOND_BYTE = 4;
constexpr u32 CATEGORY_FLAG_BIT_1_IN_SECOND_BYTE = 1;

// The availability rules that start a special event, in the order of the event index (1-0x14).
struct RuleEvent {
    u8 rule;
    u8 index;
};
constexpr RuleEvent RULE_EVENTS[] = {
    {0x3f, 1},  // rule, event
    {0x7d, 2},  // rule, event
    {0x72, 3},  // rule, event
    {0x79, 4},  // rule, event
    {0x7a, 5},  // rule, event
    {0x7b, 6},  // rule, event
    {0x7c, 7},  // rule, event
    {0x75, 8},  // rule, event
    {0x76, 9},  // rule, event
    {0x77, 10},  // rule, event
    {0x78, 11},  // rule, event
    {0xaa, 12},  // rule, event
    {0x7f, 13},  // rule, event
    {0x80, 14},  // rule, event
    {0x81, 15},  // rule, event
    {0x82, 16},  // rule, event
    {0x83, 17},  // rule, event
    {0x73, 18},  // rule, event
    {0x85, 20},  // rule, event
};
constexpr u8 RULE_WITH_ITEM_CHECK = 0x84;  // its event (19) needs one of two items
constexpr u16 RULE_84_ITEMS[] = {0x2098, 0x209c};
constexpr u32 RULE_84_EVENT = 19;

constexpr u8 CATEGORIES_SET_D[] = {5, 6, 0xc, 0xd, 0x19, 0x24, 0x27, 0x2c, 0x2e, 0x33, 0x3c, 0x40, 0x54, 0x55, 0x58, 0x59};
constexpr u32 NOT_BYTE_19_VALUE = 0xd;  // the value item_data_byte_19_value gives when the data is not valid

}  // namespace

bool Item::has_variant_below_largest_size() const {
    return has_valid_value_06() && flags_value() != 0 && item_size_class(*this) != LARGEST_SIZE_CLASS;
}
GUEST_EXPORT(0x0076bd2c, Item::has_variant_below_largest_size);

// An item with data whose category flags have bit 4 and bit 1 set, whose category is not one of a few, that has no variation
// of the largest size and is not in id set a.
bool Item::is_regular_item() const {
    u8 item_category = category();
    if (!is_item()) {
        return false;
    }
    gptr<u8> entry = category_flags();
    if (!entry || ((entry[1] >> CATEGORY_FLAG_BIT_4_IN_SECOND_BYTE) & 1) == 0) {
        return false;
    }
    if (((entry[1] >> CATEGORY_FLAG_BIT_1_IN_SECOND_BYTE) & 1) == 0 || contains(NOT_REGULAR_CATEGORIES, item_category)) {
        return false;
    }
    if (has_valid_value_06() && flags_value() != 0 && item_size_class(*this) == LARGEST_SIZE_CLASS) {
        return false;
    }
    return !is_in_id_set_a();
}
GUEST_EXPORT(0x007691d0, Item::is_regular_item);

// The index (1-20) of the special event the item's availability rule starts, 0 for items without data and other rules.
u32 Item::event_index_of_rule() const {
    gptr<ItemData> d = data();
    if (!is_item() || !d || d->availability_rule >= ItemData::RULE_LIMIT) {
        return 0;
    }
    for (const RuleEvent &event : RULE_EVENTS) {
        if (event.rule == d->availability_rule) {
            return event.index;
        }
    }
    if (d->availability_rule == RULE_WITH_ITEM_CHECK && (has_number(RULE_84_ITEMS[0]) || has_number(RULE_84_ITEMS[1]))) {
        return RULE_84_EVENT;
    }
    return 0;
}
GUEST_EXPORT(0x006fb66c, Item::event_index_of_rule);

// Items that are not empty, have valid data and a category of a fixed set (Thumb entry).
bool Item::has_category_in_set_d() const {
    return !is_empty() && item_has_valid_data(*this) && contains(CATEGORIES_SET_D, category());
}
GUEST_EXPORT(0x0011268d, Item::has_category_in_set_d);

// Whether the item has valid data whose byte 0x19 value is the wanted one (the value 13 of invalid data never matches;
// Thumb entry).
bool item_data_byte_19_is(const Item &item, u32 wanted) {
    if (!item_has_valid_data(item)) {
        return false;
    }
    u32 value = item_data_byte_19_value(item);
    return value != NOT_BYTE_19_VALUE && value == wanted;
}
GUEST_EXPORT(0x00111f71, item_data_byte_19_is);

// Whether the two items have the same number (the flag in the id left out) and the same flags apart from their two top bits.
bool Item::equals_ignoring_marks(const Item &other) const {
    constexpr u16 FLAG_MARKS = 0xc000;  // the two top bits of the flags
    return (flags & ~FLAG_MARKS) == (other.flags & ~FLAG_MARKS) && (id & NUMBER_MASK) == (other.id & NUMBER_MASK);
}
GUEST_EXPORT(0x0076aa04, Item::equals_ignoring_marks);
