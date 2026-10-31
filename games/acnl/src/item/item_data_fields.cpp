// Questions about an item's data entry and flags: category tests, nibbles of the data bytes with a limit, and
// readings of the flags below the two top bits. Each is 0 (or the stated default) for items without data.
#include "item/item.hpp"

namespace {

constexpr u16 FLAGS_LOW_MASK = 0x3fff;  // the flags without the two top bits
constexpr u16 FLAGS_LOW_10_MASK = 0x03ff;
constexpr u16 FLAGS_BIT_11 = 0x0800;
constexpr u16 FLAGS_BIT_10 = 0x0400;
constexpr u32 TYPE_10 = 0xa;
constexpr u32 TYPE_17 = 0x17;
constexpr u8 CATEGORY_5A = 0x5a;
constexpr u8 CATEGORY_8D = 0x8d;
constexpr u8 CATEGORY_48 = 0x48;
constexpr u8 CATEGORY_47 = 0x47;
constexpr u8 CATEGORY_75 = 0x75;
constexpr u8 CATEGORY_76 = 0x76;
constexpr u8 CATEGORY_54 = 0x54;
constexpr u8 CATEGORY_55 = 0x55;
constexpr u8 CATEGORY_58 = 0x58;
constexpr u8 CATEGORY_59 = 0x59;
constexpr u8 WEAR_CLASS_INDEX_10 = 0x10;
constexpr u8 WEAR_CLASS_INDEX_1E = 0x1e;
constexpr u8 WEAR_CLASS_INDEX_LIMIT = 0x32;
constexpr u32 STACK_MAX_OFFSET = 7;
constexpr u32 STACK_FIRST = 2;
constexpr u32 VALUE_STEP_1 = 7;
constexpr u32 VALUE_STEP_2 = 0x2bc;
constexpr u32 VALUE_STEP_3 = 0x3d0;
constexpr u32 NIBBLE_SHIFT = 4;
constexpr u32 NIBBLE_MASK = 0xf;
constexpr u8 BIT_4 = 0x10;
constexpr u8 BIT_6 = 0x40;
constexpr u8 BIT_0 = 0x01;
constexpr u32 LIMIT_BYTE_12 = 0x1f;
constexpr u32 LIMIT_BYTE_16_HIGH = 0xf;
constexpr u32 LIMIT_BYTE_16_LOW = 0xa;
constexpr u32 LIMIT_BYTE_14_HIGH = 3;
constexpr u32 LIMIT_BYTE_17_HIGH = 0xd;
constexpr u32 LIMIT_BYTE_1A_BITS = 3;
constexpr u32 OFFSET_12 = 0x12;
constexpr u32 OFFSET_14 = 0x14;
constexpr u32 OFFSET_16 = 0x16;
constexpr u32 OFFSET_17 = 0x17;
constexpr u32 OFFSET_1A = 0x1a;
constexpr u32 OFFSET_1C = 0x1c;

inline constexpr guest::Function<0x002fccdc, u32(const Item &item)> indexed_item_type;
inline constexpr guest::Function<0x00535a1c, gptr<u8>(const Item &item)> item_table_entry;

// A byte of the item's data entry (0 without data).
u32 data_byte(const Item &item, u32 offset) {
    gptr<ItemData> data = item.data();
    return data ? data.cast<u8>()[offset] : 0;
}

}  // namespace

// Bits 2-3 of data byte 0x1a when they are below 3.
u32 item_data_1a_bits_2_3(const Item &item) {
    u32 value = (data_byte(item, OFFSET_1A) >> 2) & 3;
    return item.data() && value < LIMIT_BYTE_1A_BITS ? value : 0;
}
GUEST_EXPORT(0x00767fdc, item_data_1a_bits_2_3);

// Data byte 0x12 when below 0x1f, else 0.
u32 item_data_byte_12(const Item &item) {
    u32 value = data_byte(item, OFFSET_12);
    return value < LIMIT_BYTE_12 ? value : 0;
}
GUEST_EXPORT(0x00768b2c, item_data_byte_12);

// Whether the item's indexed type is 10 and its flags below the two top bits are zero.
bool item_type_10_with_clear_flags(const Item &item) {
    return indexed_item_type(item) == TYPE_10 && (item.flags & FLAGS_LOW_MASK) == 0;
}
GUEST_EXPORT(0x00768bfc, item_type_10_with_clear_flags);

// Bit 4 of the second byte of the item's category flags.
u32 item_category_flag_bit_4(const Item &item) {
    gptr<u8> flags = item.category_flags();
    return flags ? (flags[1] & BIT_4) != 0 : 0;
}
GUEST_EXPORT(0x00768cc8, item_category_flag_bit_4);

// The high nibble of data byte 0x16 when below 15, else 0.
u32 item_data_16_high_nibble(const Item &item) {
    u32 value = data_byte(item, OFFSET_16) >> NIBBLE_SHIFT;
    return value < LIMIT_BYTE_16_HIGH ? value : 0;
}
GUEST_EXPORT(0x00768d38, item_data_16_high_nibble);

// The two top bits of the flags for an item of kind 11, else 0.
u32 item_kind_11_top_bits(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data || !data->has_kind_11()) {
        return 0;
    }
    return item.flags >> Item::FLAGS_TOP_SHIFT;
}
GUEST_EXPORT(0x0076936c, item_kind_11_top_bits);

// Whether the low ten bits of the flags are non-zero, for items with a valid value 6.
bool item_low_10_bits_set(const Item &item) {
    return item.has_valid_value_06() && (item.flags & FLAGS_LOW_10_MASK) != 0;
}
GUEST_EXPORT(0x007694c4, item_low_10_bits_set);

bool item_category_is_5a(const Item &item) { return item.category() == CATEGORY_5A; }
bool item_category_is_8d(const Item &item) { return item.category() == CATEGORY_8D; }
bool item_category_is_48(const Item &item) { return item.category() == CATEGORY_48; }
bool item_category_is_47(const Item &item) { return item.category() == CATEGORY_47; }
GUEST_EXPORT(0x00769604, item_category_is_5a);
GUEST_EXPORT(0x0076a700, item_category_is_8d);
GUEST_EXPORT(0x0076aa40, item_category_is_48);
GUEST_EXPORT(0x0076abd4, item_category_is_47);

// Bit 7 of data byte 0x1c; 1 for an item without data.
u32 item_data_1c_bit_7(const Item &item) {
    return item.data() ? data_byte(item, OFFSET_1C) >> 7 : 1;
}
GUEST_EXPORT(0x00769634, item_data_1c_bit_7);

// Bit 4 of data byte 0x1c.
u32 item_data_1c_bit_4(const Item &item) {
    return (data_byte(item, OFFSET_1C) & BIT_4) != 0;
}
GUEST_EXPORT(0x00769650, item_data_1c_bit_4);

// True for items of kind 2; otherwise bit 0 of the second byte of the category flags.
u32 item_kind_2_or_category_flag_bit_0(const Item &item) {
    if ((item.id & Item::KIND_MASK) == (KIND_2 << Item::KIND_SHIFT)) {
        return 1;
    }
    gptr<u8> flags = item.category_flags();
    return flags ? flags[1] & BIT_0 : 0;
}
GUEST_EXPORT(0x007697f4, item_kind_2_or_category_flag_bit_0);

// Bit 6 of the third byte of the category flags; 1 without the category flags.
u32 item_category_flag_bit_6(const Item &item) {
    gptr<u8> flags = item.category_flags();
    return flags ? (flags[2] & BIT_6) != 0 : 1;
}
GUEST_EXPORT(0x00769820, item_category_flag_bit_6);

bool item_type_is_17(const Item &item) { return indexed_item_type(item) == TYPE_17; }
GUEST_EXPORT(0x007698a4, item_type_is_17);

// For items of indexed type 10 with flag bit 11: the flags' low two bits; otherwise -1.
u32 item_type_10_flag_bits(const Item &item) {
    if (indexed_item_type(item) == TYPE_10 && (item.flags & FLAGS_BIT_11) != 0) {
        return item.flags & 3;
    }
    return 0xffffffffu;
}
GUEST_EXPORT(0x00769a74, item_type_10_flag_bits);

// The low nibble of data byte 0x16 when below 10, else 0.
u32 item_data_16_low_nibble(const Item &item) {
    u32 value = data_byte(item, OFFSET_16) & NIBBLE_MASK;
    return value < LIMIT_BYTE_16_LOW ? value : 0;
}
GUEST_EXPORT(0x00769aa0, item_data_16_low_nibble);

// Whether the wear class index is 0x1e.
bool item_wear_class_index_1e(const Item &item) {
    gptr<ItemData> data = item.data();
    return data && data->wear_class_index < WEAR_CLASS_INDEX_LIMIT && data->wear_class_index == WEAR_CLASS_INDEX_1E;
}
GUEST_EXPORT(0x00769ff8, item_wear_class_index_1e);

// For items of indexed type 10 with flag bit 10: the flags' low three bits; otherwise 0.
u32 item_type_10_low_3_bits(const Item &item) {
    if (indexed_item_type(item) == TYPE_10 && (item.flags & FLAGS_BIT_10) != 0) {
        return item.flags & 7;
    }
    return 0;
}
GUEST_EXPORT(0x0076a24c, item_type_10_low_3_bits);

// The high nibble of data byte 0x14 when below 3, else 0.
u32 item_data_14_high_nibble(const Item &item) {
    u32 value = data_byte(item, OFFSET_14) >> NIBBLE_SHIFT;
    return value < LIMIT_BYTE_14_HIGH ? value : 0;
}
GUEST_EXPORT(0x0076a9dc, item_data_14_high_nibble);

// The first byte of the item's table entry when it is not negative, else 0 (also without an entry).
u32 item_table_byte(const Item &item) {
    gptr<u8> entry = item_table_entry(item);
    if (!entry || s8(entry[0]) < 0) {
        return 0;
    }
    return entry[0];
}
GUEST_EXPORT(0x0076ab04, item_table_byte);

// The low nibble of data byte 0x14.
u32 item_data_14_low_nibble(const Item &item) {
    return data_byte(item, OFFSET_14) & NIBBLE_MASK;
}
GUEST_EXPORT(0x0076af70, item_data_14_low_nibble);

// The high nibble of data byte 0x17 when below 13, else 0.
u32 item_data_17_high_nibble(const Item &item) {
    u32 value = data_byte(item, OFFSET_17) >> NIBBLE_SHIFT;
    return value < LIMIT_BYTE_17_HIGH ? value : 0;
}
GUEST_EXPORT(0x0076b24c, item_data_17_high_nibble);

// The flags below the two top bits of an item whose wear class index is 0x10, else 0.
u32 item_wear_class_16_flags(const Item &item) {
    gptr<ItemData> data = item.data();
    if (data && data->wear_class_index < WEAR_CLASS_INDEX_LIMIT && data->wear_class_index == WEAR_CLASS_INDEX_10) {
        return item.flags & FLAGS_LOW_MASK;
    }
    return 0;
}
GUEST_EXPORT(0x0076b94c, item_wear_class_16_flags);

// The flags plus one for the two stack categories when that stays within 2 to 9, else 0.
u32 item_stack_count(const Item &item) {
    u8 category = item.category();
    if (category != CATEGORY_75 && category != CATEGORY_76) {
        return 0;
    }
    u32 count = (item.flags & FLAGS_LOW_MASK) + 1;
    return count - STACK_FIRST <= STACK_MAX_OFFSET ? count : 0;
}
GUEST_EXPORT(0x0076b9b0, item_stack_count);

// A size class from the low ten bits of the flags: 0 for none, then 1, 2, 4 and 8.
u32 item_size_class(const Item &item) {
    if (!item.has_valid_value_06()) {
        return 0;
    }
    u32 value = item.flags & FLAGS_LOW_10_MASK;
    if (value == 0) {
        return 0;
    }
    if (value <= VALUE_STEP_1) {
        return 1;
    }
    if (value <= VALUE_STEP_2) {
        return 2;
    }
    return value < VALUE_STEP_3 ? 4 : 8;
}
GUEST_EXPORT(0x0076bb34, item_size_class);

// Whether the flags (without the two top bits) are non-zero, for the four categories 0x54, 0x55, 0x58 and 0x59.
bool item_stack_in_use(const Item &item) {
    u8 category = item.category();
    bool matches = category == CATEGORY_54 || category == CATEGORY_55 || category == CATEGORY_58 || category == CATEGORY_59;
    return matches && (item.flags & FLAGS_LOW_MASK) != 0;
}
GUEST_EXPORT(0x0076c380, item_stack_in_use);

// The flags below the two top bits for items of category 0x5a, else 0.
u32 item_category_5a_flags(const Item &item) {
    return item.category() == CATEGORY_5A ? item.flags & FLAGS_LOW_MASK : 0;
}
GUEST_EXPORT(0x0076c3d0, item_category_5a_flags);
