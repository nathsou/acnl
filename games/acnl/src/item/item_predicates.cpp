// Yes/no questions about an item, answered from its id, its data entry and the flags of its category.
#include "core/fuzz_helpers.hpp"
#include "item/item.hpp"

namespace {

inline constexpr guest::Function<0x007684a4, u32(const Item &item)> item_check_a;
inline constexpr guest::Function<0x0076bb34, u32(const Item &item)> item_check_b;
inline constexpr guest::Function<0x00768628, u32(const Item &item)> item_check_c;

constexpr u32 EXPECTED_CHECK_B_RESULT = 8;  // meaning not known yet

// Bits of the category flag bytes these questions read (what they mean is not known yet).
constexpr u8 FLAGS_1_BIT_6 = 1 << 6;
constexpr u8 FLAGS_2_BIT_5 = 1 << 5;
constexpr u8 DATA_FLAG_1B_BIT_1 = 1 << 1;

// The data categories this group of items is made of (meaning not known yet).
constexpr u8 CATEGORY_GROUP_A = 0x24;
constexpr u8 CATEGORY_GROUP_B = 0x27;
constexpr u8 CATEGORY_GROUP_C = 0x28;

}  // namespace

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
    if (item_check_a(*this) != 0 && (flags & ~FLAGS_TOP_BITS) != 0 && item_check_b(*this) == EXPECTED_CHECK_B_RESULT) {
        return false;
    }
    gptr<u8> category = category_flags();
    return category && (category[1] & FLAGS_1_BIT_6) != 0;
}
GUEST_EXPORT(0x0076c480, Item::has_category_flag_bit_1_6);

// False for kind 2 ids and when check c passes; else bit 5 of the third category flag byte.
bool Item::has_category_flag_bit_2_5() const {
    if ((id & KIND_MASK) == KIND_2 << KIND_SHIFT || item_check_c(*this) != 0) {
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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

// Items with data (when it is loaded), empty slots, map objects and kind 2 ids, with assorted flags.
gptr<Item> some_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    switch (f.below(8)) {
    case 0:
        item->id = Item::EMPTY;
        break;
    case 1:
        item->id = u16(f.below(Item::FIRST_ITEM));
        break;
    case 2:
        item->id = Item::FIRST_ITEM;
        break;
    default:
        item->id = item_data_table->entries ? u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT)) : Item::EMPTY;
        break;
    }
    if (f.below(4) == 0) {
        item->id |= Item::ID_FLAG;
    }
    if (f.below(3) == 0) {
        item->flags = f.pick<u16>({0, 0xc000, 1, 0x4000, 0x8001});
    }
    return item;
}

}  // namespace

GUEST_FUZZ(0x0076c440, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x0076c458, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x0076c480, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x0076c4d8, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x0076c52c, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
