#include "item/item.hpp"

namespace {

// The object whose item at 0x274 is replaced by f_00768138 (what it is is not known yet).
struct ItemHolderObject {
    u8 unknown_000[0x270];
    u8 bits_270;  // bits 3-4 hold a small value set by the caller
    u8 unknown_271[3];
    Item item_274;
};
GUEST_OFFSET(ItemHolderObject, bits_270, 0x270);
GUEST_OFFSET(ItemHolderObject, item_274, 0x274);

constexpr u8 VALUE_SHIFT = 3;
constexpr u8 VALUE_MASK = 0x18;

// An entry returned by indexed_item_entry; only two bytes are known.
struct ItemEntry {
    u8 unknown_00[0x0a];
    u8 category;
    u8 unknown_0b[2];
    s8 value_0d;
};
GUEST_OFFSET(ItemEntry, category, 0x0a);
GUEST_OFFSET(ItemEntry, value_0d, 0x0d);

inline constexpr guest::Function<0x002fd010, gptr<ItemEntry>(const Item &item, u32 number)> indexed_item_entry;

constexpr u32 MAX_ENTRY_NUMBER = 0xfd;
constexpr u8 ENTRY_CATEGORY_LIMIT = 0x1d;
constexpr u32 WORD_LIMIT = 0x1fb;

// The entry categories item_entry_has_positive_value accepts (meaning not known yet).
constexpr u8 ENTRY_CATEGORY_A = 4;
constexpr u8 ENTRY_CATEGORY_B = 6;
constexpr u8 ENTRY_CATEGORY_C = 8;
constexpr u8 ENTRY_CATEGORY_D = 0x19;

// The data categories (a contiguous range) item_in_category_group_65_6a accepts (meaning not known yet).
constexpr u8 FIRST_GROUP_CATEGORY = 0x65;
constexpr u8 LAST_GROUP_CATEGORY = 0x6a;

// The item numbers (a contiguous range) item_number_in_6c_70 accepts (meaning not known yet).
constexpr u32 FIRST_RANGE_NUMBER = 0x6c;
constexpr u32 LAST_RANGE_NUMBER = 0x70;

}  // namespace

// Stores a copy of an item in the object and sets its 2-bit value. The code then continues into
// Item::is_kind_2 on the source item, so that is the result.
bool set_held_item(ItemHolderObject &self, const Item &item, u32 value) {
    copy_item(self.item_274, item);
    self.bits_270 = (self.bits_270 & ~VALUE_MASK) | ((value << VALUE_SHIFT) & VALUE_MASK);
    return item.is_kind_2();
}
GUEST_EXPORT(0x00768138, set_held_item);

// The first 16-bit word of the item's data when it is below WORD_LIMIT, else 0.
u16 item_data_first_word_if_small(const Item &item) {
    gptr<ItemData> d = item.data();
    if (!d) {
        return 0;
    }
    u16 word = *d.cast<u16>();  // (ItemData's first two bytes are not named yet)
    return word >= WORD_LIMIT ? 0 : word;
}
GUEST_EXPORT(0x0076828c, item_data_first_word_if_small);

// Items of a few entry categories whose entry byte 0xd is positive.
bool item_entry_has_positive_value(const Item &item) {
    if (item.number() > MAX_ENTRY_NUMBER) {
        return false;
    }
    gptr<ItemEntry> entry = indexed_item_entry(item, item.number());
    if (!entry) {
        return false;
    }
    u8 category = entry->category;
    if (category >= ENTRY_CATEGORY_LIMIT) {
        return false;
    }
    if (category != ENTRY_CATEGORY_A && category != ENTRY_CATEGORY_B && category != ENTRY_CATEGORY_C &&
        category != ENTRY_CATEGORY_D) {
        return false;
    }
    return entry->value_0d >= 1;
}
GUEST_EXPORT(0x007682b4, item_entry_has_positive_value);

// Items whose data category is in FIRST_GROUP_CATEGORY..LAST_GROUP_CATEGORY.
bool item_in_category_group_65_6a(const Item &item) {
    gptr<ItemData> d = item.data();
    if (!d) {
        return false;
    }
    u8 category = d->category;
    if (category >= Item::NO_CATEGORY) {
        return false;
    }
    return category >= FIRST_GROUP_CATEGORY && category <= LAST_GROUP_CATEGORY;
}
GUEST_EXPORT(0x00768310, item_in_category_group_65_6a);

// Items whose number is in FIRST_RANGE_NUMBER..LAST_RANGE_NUMBER.
bool item_number_in_6c_70(const Item &item) {
    u32 number = item.number();
    return number >= FIRST_RANGE_NUMBER && number <= LAST_RANGE_NUMBER;
}
GUEST_EXPORT(0x007683cc, item_number_in_6c_70);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

constexpr u32 FUZZ_ENTRY_NUMBER_LIMIT = 0x110;  // a bit above MAX_ENTRY_NUMBER
constexpr u32 FUZZ_RANGE_NUMBER_LIMIT = 0x80;   // covers the range and a little beyond

// Item with a random number below the limit and a random ID_FLAG.
static gptr<Item> small_number_item(guest::Fuzz &f, u32 limit) {
    auto item = f.object<Item>();
    item->id = u16(f.below(limit) | (f.below(2) ? Item::ID_FLAG : 0));
    return item;
}

static gptr<Item> fuzz_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    switch (f.below(4)) {
    case 0: item->id = Item::EMPTY; break;
    case 1: item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT)); break;
    case 2: item->id = u16(f.below(FUZZ_ENTRY_NUMBER_LIMIT) | (f.below(2) ? Item::ID_FLAG : 0)); break;
    default: break;
    }
    return item;
}

GUEST_FUZZ(0x00768138, 300, [](guest::Fuzz &f) {
    f.arguments(f.object<ItemHolderObject>(), fuzz_item(f), f.number());
});
GUEST_FUZZ(0x0076828c, 300, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });
GUEST_FUZZ(0x007682b4, 300, [](guest::Fuzz &f) { f.arguments(small_number_item(f, FUZZ_ENTRY_NUMBER_LIMIT)); });
GUEST_FUZZ(0x00768310, 300, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });
GUEST_FUZZ(0x007683cc, 300, [](guest::Fuzz &f) { f.arguments(small_number_item(f, FUZZ_RANGE_NUMBER_LIMIT)); });
