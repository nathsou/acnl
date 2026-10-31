// Yes/no questions about an item, answered from its id, its data entry and the flags of its category.
#include "guest/guest.hpp"
#include "item/item.hpp"

namespace {

inline constexpr guest::Function<0x0076bb34, u32(const Item &item)> item_check_b;

constexpr u32 EXPECTED_CHECK_B_RESULT = 8;  // meaning not known yet

// Bits of the category flag bytes these questions read (what they mean is not known yet).
constexpr u8 FLAGS_1_BIT_6 = 1 << 6;
constexpr u8 FLAGS_2_BIT_5 = 1 << 5;
constexpr u8 DATA_FLAG_1B_BIT_1 = 1 << 1;
constexpr u8 FLAGS_1C_BIT_3 = 1 << 3;
constexpr u8 CATEGORY_FLAG_BIT_7 = 1 << 7;

// The data categories this group of items is made of (meaning not known yet).
constexpr u8 CATEGORY_GROUP_A = 0x24;
constexpr u8 CATEGORY_GROUP_B = 0x27;
constexpr u8 CATEGORY_GROUP_C = 0x28;

}  // namespace

bool ItemData::flag_1c_bit3() const {
    gptr<u8> table = category_flag_table->entries;
    if (!table) {
        return true;
    }
    u8 category_index = category < Item::NO_CATEGORY ? category : 0;
    gptr<u8> flags = table + category_index * CATEGORY_FLAGS_SIZE;
    if ((flags[1] & CATEGORY_FLAG_BIT_7) == 0) {
        return false;
    }
    return (flags_1c & FLAGS_1C_BIT_3) != 0;
}
GUEST_EXPORT(0x007485d0, ItemData::flag_1c_bit3);

bool Item::data_flag_1c_bit3() const {
    gptr<ItemData> d = data();
    return !d || d->flag_1c_bit3();
}
GUEST_EXPORT(0x0031079c, Item::data_flag_1c_bit3);

bool Item::is_first_item() const {
    return number() == FIRST_ITEM;
}
GUEST_EXPORT(0x0076c440, Item::is_first_item);

bool Item::has_data_flag_1b_bit1() const {
    gptr<ItemData> d = data();
    return d && (d->flags_1b & DATA_FLAG_1B_BIT_1) != 0;
}
GUEST_EXPORT(0x0076c458, Item::has_data_flag_1b_bit1);

// False when the item has flag bits besides the top two and check b says 8; else bit 6 of the second category flag
// byte (false without category flags).
bool Item::has_category_flag_bit_1_6() const {
    if (has_valid_value_06() && (flags & ~FLAGS_TOP_BITS) != 0 && item_check_b(*this) == EXPECTED_CHECK_B_RESULT) {
        return false;
    }
    gptr<u8> category = category_flags();
    return category && (category[1] & FLAGS_1_BIT_6) != 0;
}
GUEST_EXPORT(0x0076c480, Item::has_category_flag_bit_1_6);

// False for kind 2 ids and when check c passes; else bit 5 of the third category flag byte.
bool Item::has_category_flag_bit_2_5() const {
    if ((id & KIND_MASK) == KIND_2 << KIND_SHIFT || is_in_id_set_a()) {
        return false;
    }
    gptr<u8> category = category_flags();
    return category && (category[2] & FLAGS_2_BIT_5) != 0;
}
GUEST_EXPORT(0x0076c4d8, Item::has_category_flag_bit_2_5);

bool Item::is_in_category_group_24_27_28() const {
    gptr<ItemData> d = data();
    if (!d || d->category >= NO_CATEGORY) {
        return false;
    }
    return d->category == CATEGORY_GROUP_A || d->category == CATEGORY_GROUP_B || d->category == CATEGORY_GROUP_C;
}
GUEST_EXPORT(0x0076c52c, Item::is_in_category_group_24_27_28);

namespace {

}  // namespace
