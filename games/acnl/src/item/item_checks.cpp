#include "item/item.hpp"

// Whether the item number is of kind 2.
bool Item::is_kind_2() const {
    return kind() == KIND_2;
}
GUEST_EXPORT(0x00768174, Item::is_kind_2);

// Kind 2 ids always pass; others need bit 1 of their category's second flag byte.
bool Item::has_category_flag_1() const {
    if (is_kind_2()) {
        return true;
    }
    gptr<u8> flags = category_flags();
    if (!flags) {
        return false;
    }
    return (flags[1] >> 1) & 1;
}
GUEST_EXPORT(0x00768214, Item::has_category_flag_1);

u8 Item::availability_rule() const {
    gptr<ItemData> d = data();
    if (!d) {
        return 0;
    }
    u8 value = d->availability_rule;
    return value >= ItemData::RULE_LIMIT ? 0 : value;
}
GUEST_EXPORT(0x00768248, Item::availability_rule);

u8 Item::data_unknown_15() const {
    gptr<ItemData> d = data();
    if (!d) {
        return 0;
    }
    u8 value = d->unknown_15 & ItemData::UNKNOWN_15_MASK;
    return value >= ItemData::UNKNOWN_15_LIMIT ? 0 : value;
}
GUEST_EXPORT(0x00768268, Item::data_unknown_15);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<Item> some_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    switch (f.below(4)) {
    case 0: item->id = Item::EMPTY; break;
    case 1: item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT)); break;
    case 2: item->id = u16(0x4000 + f.below(0x2000)); break;
    default: break;
    }
    return item;
}

GUEST_FUZZ(0x00768174, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x00768214, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x00768248, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x00768268, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
