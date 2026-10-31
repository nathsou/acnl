// Small objects that keep a few items in a row.
#include "item/item.hpp"

namespace {

constexpr u32 ROW_SIZE = 8;
constexpr u32 CATEGORY_FILED = 0x2f;  // (what the category stands for is not known yet)
// The categories whose items are put at the front of a row (the rest of the row moves back).
constexpr u8 FRONT_CATEGORIES[] = {3, 4, 5, 6, 0xc, 0xd, 0x19, 0x24, 0x27, 0x2c, 0x2e, 0x36, 0x37, 0x38, 0x40, 0x54, 0x55, 0x58, 0x59};

bool in_front_categories(u32 category) {
    for (u8 candidate : FRONT_CATEGORIES) {
        if (category == candidate) {
            return true;
        }
    }
    return false;
}

}  // namespace

// A row of eight items; an item of one of the categories above is put first and moves the others one place back
// (the last one drops out).
struct ItemRow {
    Item items[ROW_SIZE];

    void push_front(const Item &item);
};
GUEST_SIZE(ItemRow, 32);

void ItemRow::push_front(const Item &item) {
    if (!in_front_categories(item.category())) {
        return;
    }
    for (u32 i = ROW_SIZE - 1; i > 0; i--) {
        items[i] = items[i - 1];
    }
    items[0] = item;
}
GUEST_EXPORT(0x00114375, ItemRow::push_front);

// An object with two item places: the pair is stored as it is, except that an empty first item with a second one of
// another kind than category 0x2f clears both.
struct ItemPairPlaces {
    u8 unknown_000[0x2fa];
    Item first;
    Item second;

    void store(const Item &first_item, const Item &second_item);
};
GUEST_OFFSET(ItemPairPlaces, first, 0x2fa);
GUEST_OFFSET(ItemPairPlaces, second, 0x2fe);

void ItemPairPlaces::store(const Item &first_item, const Item &second_item) {
    if (first_item.is_empty() && !second_item.is_empty() && second_item.category() != CATEGORY_FILED) {
        first = *empty_item;
        second = *empty_item;
        return;
    }
    first = first_item;
    second = second_item;
}
GUEST_EXPORT(0x002d50b8, ItemPairPlaces::store);

// A row of eight empty items followed by a flag that starts set.
struct ItemRowWithFlag {
    static constexpr u32 SIZE = 8;

    Item items[SIZE];
    u8 flag;

    ItemRowWithFlag &construct();
};
GUEST_OFFSET(ItemRowWithFlag, flag, 0x20);

ItemRowWithFlag &ItemRowWithFlag::construct() {
    for (Item &item : items) {
        item = *empty_item;
    }
    flag = 1;
    return *this;
}
GUEST_EXPORT(0x0027b428, ItemRowWithFlag::construct);

namespace {

constexpr u16 NUMBER_C9 = 0xc9;
constexpr u16 REPLACEMENT_NUMBER = 0x2959;

}  // namespace

// Turns the item with number 0xc9 into item 0x2959; false for any other item.
bool replace_number_c9(Item &item) {
    if (!item.has_number(NUMBER_C9)) {
        return false;
    }
    construct_item(item, REPLACEMENT_NUMBER);
    return true;
}
GUEST_EXPORT(0x00596ab0, replace_number_c9);
