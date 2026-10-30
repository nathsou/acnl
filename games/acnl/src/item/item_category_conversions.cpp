// Turning an item into the one at the same position of another category, and other in-place changes of items by
// category. What the categories are is not known yet; they are named by number.
#include "core/fuzz_helpers.hpp"
#include "item/item.hpp"

namespace {

constexpr u8 CATEGORY_34 = 0x34;
constexpr u8 CATEGORY_35 = 0x35;
constexpr u8 CATEGORY_40 = 0x40;
constexpr u8 CATEGORY_29 = 0x29;
constexpr u16 FIRST_NUMBER_FOR_40 = 0x9f;  // the number category 40's flags are taken from, plus the position
constexpr u16 FLAGS_LOW_BYTE = 0x00ff;
constexpr u16 COUNTER_MAX = 4;            // category 29's counter counts down from at most this
constexpr u16 COUNTER_MASK = 0x3fff;      // the flags below the top two bits

// The item numbers (0x2001 to 0x2005) that count as category 34 for convert_numbers_2001_2005_to_35.
constexpr u16 FIRST_SPECIAL_NUMBER = 0x2001;
constexpr u16 LAST_SPECIAL_NUMBER = 0x2005;

// The item at the position the given one has in its own category, in `target`; EMPTY when that is past its end.
// The result replaces the id and the flags.
void replace_by_same_position_in(Item &item, u8 target) {
    s32 offset = item_offset_in_category(item);
    gptr<CategoryInfo> info = category_info(target);
    u16 number = info->item_count <= u32(offset) ? Item::EMPTY : u16(info->first_item_number + offset);
    guest::StackObject<Item> replacement;
    construct_item(*replacement, number);
    item.id = replacement->id;
    item.flags = replacement->flags;
}

// An item whose number is in the category, with flags that are zero half of the time.
gptr<Item> an_item_in_category(guest::Fuzz &f, u8 category) {
    gptr<Item> item = fuzz::item_in_category(f, category);
    item->flags = f.below(2) ? 0 : u16(f.number());
    return item;
}

}  // namespace

// An item of category 34 becomes the item at its position in category 35; false for other items.
bool convert_category_34_to_35(Item &item) {
    if (item.category() != CATEGORY_34) {
        return false;
    }
    replace_by_same_position_in(item, CATEGORY_35);
    return true;
}
GUEST_EXPORT(0x006ba888, convert_category_34_to_35);
GUEST_FUZZ(0x006ba888, 200, [](guest::Fuzz &f) {
    f.arguments(f.below(4) ? an_item_in_category(f, CATEGORY_34) : an_item_in_category(f, CATEGORY_35));
});

// An item of category 34 becomes the item at its position in category 33; false for other items.
bool convert_category_34_to_33(Item &item) {
    if (item.category() != CATEGORY_34) {
        return false;
    }
    replace_by_same_position_in(item, CATEGORY_PRICED_BY_REFERENCE_33);
    return true;
}
GUEST_EXPORT(0x006bacf0, convert_category_34_to_33);
GUEST_FUZZ(0x006bacf0, 200, [](guest::Fuzz &f) {
    f.arguments(f.below(4) ? an_item_in_category(f, CATEGORY_34) : an_item_in_category(f, CATEGORY_35));
});

// The items 0x2001 to 0x2005 become the item at their position in category 35 (as if they were of category 34);
// false for other items.
bool convert_numbers_2001_2005_to_35(Item &item) {
    u16 number = item.number();
    if (number < FIRST_SPECIAL_NUMBER || number > LAST_SPECIAL_NUMBER) {
        return false;
    }
    replace_by_same_position_in(item, CATEGORY_35);
    return true;
}
GUEST_EXPORT(0x006baadc, convert_numbers_2001_2005_to_35);
GUEST_FUZZ(0x006baadc, 200, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(f.pick<u32>({0x2000, 0x2001, 0x2003, 0x2005, 0x2006, 0xa001, f.number()}));
    f.arguments(item);
});

// A stack of category 75 or 76 becomes the item at its position in category 33 or 34 respectively (only the
// number changes, and the id's flag stays); nothing changes for other items or when the position is past the end.
// Always returns false.
bool convert_stack_to_single(Item &item) {
    gptr<ItemData> data = item.data();
    if (!data || data->category >= Item::NO_CATEGORY) {
        return false;
    }
    u8 target;
    if (data->category == CATEGORY_STACK_75) {
        target = CATEGORY_PRICED_BY_REFERENCE_33;
    } else if (data->category == CATEGORY_STACK_76) {
        target = CATEGORY_PRICED_BY_REFERENCE_34;
    } else {
        return false;
    }
    s32 offset = item_offset_in_category(item);
    gptr<CategoryInfo> info = category_info(target);
    if (info->item_count <= u32(offset)) {
        return false;
    }
    u16 number = u16(info->first_item_number + offset);
    if (number != Item::EMPTY) {
        item.id = u16((item.id & Item::ID_FLAG) | (number & Item::NUMBER_MASK));
    }
    return false;
}
GUEST_EXPORT(0x006bb4b0, convert_stack_to_single);
GUEST_FUZZ(0x006bb4b0, 200, [](guest::Fuzz &f) {
    f.arguments(an_item_in_category(f, f.below(2) ? CATEGORY_STACK_75 : CATEGORY_STACK_76));
});

// Resets the low byte of the flags of a category 40 item without flags to the default of the item number
// FIRST_NUMBER_FOR_40 plus its position in the category (the top two bits stay).
void reset_category_40_flags(Item &item) {
    if (item.category() != CATEGORY_40 || (item.flags & FLAGS_LOW_BYTE) != 0) {
        return;
    }
    guest::StackObject<Item> reference;
    construct_item(*reference, u16(FIRST_NUMBER_FOR_40 + item_offset_in_category(item)));
    item.flags = u16((reference->flags & FLAGS_LOW_BYTE) | (item.flags & Item::FLAGS_TOP_BITS));
}
GUEST_EXPORT(0x006bae68, reset_category_40_flags);
GUEST_FUZZ(0x006bae68, 200, [](guest::Fuzz &f) { f.arguments(an_item_in_category(f, CATEGORY_40)); });

// Uses up one count of a category 29 item (its flags below the top two bits hold the count, which goes from at most
// COUNTER_MAX down to 0): returns the count it had and lowers it. Returns 0, changing nothing, for other items, when
// the count is 0 and when it is above COUNTER_MAX.
u32 take_one_of_category_29(Item &item) {
    if (item.category() != CATEGORY_29) {
        return 0;
    }
    u32 count = item.flags & COUNTER_MASK;
    if (count == 0 || count > COUNTER_MAX) {
        return 0;
    }
    item.flags = u16(((count - 1) & COUNTER_MASK) | (item.flags & Item::FLAGS_TOP_BITS));
    return count;
}
GUEST_EXPORT(0x006bb76c, take_one_of_category_29);
GUEST_FUZZ(0x006bb76c, 200, [](guest::Fuzz &f) {
    auto item = an_item_in_category(f, f.below(4) ? CATEGORY_29 : CATEGORY_35);
    item->flags = u16(f.pick<u32>({0, 1, 2, 4, 5, 0x4001, 0xc003, 0x3fff, f.number()}));
    f.arguments(item);
});

// Takes one item from a stack of category 75 or 76 (the flags below the top two bits hold the count minus one, and
// the stack is looked at when that is 1 to 8): the count goes down by one, and a stack of two becomes a single item
// (convert_stack_to_single). Always returns false.
bool take_one_from_stack(Item &item) {
    constexpr u16 STACK_MIN = 1;
    constexpr u16 STACK_MAX = 8;
    u8 category = item.category();
    if (category != CATEGORY_STACK_75 && category != CATEGORY_STACK_76) {
        return false;
    }
    u16 stored = item.flags & COUNTER_MASK;
    if (stored < STACK_MIN || stored > STACK_MAX) {
        return false;
    }
    if (stored > STACK_MIN) {
        item.flags = u16(((stored - 1) & COUNTER_MASK) | (item.flags & Item::FLAGS_TOP_BITS));
    } else {
        convert_stack_to_single(item);
    }
    return false;
}
GUEST_EXPORT(0x006bb80c, take_one_from_stack);
GUEST_FUZZ(0x006bb80c, 200, [](guest::Fuzz &f) {
    auto item = an_item_in_category(f, f.below(2) ? CATEGORY_STACK_75 : CATEGORY_STACK_76);
    item->flags = u16(f.pick<u32>({0, 1, 2, 5, 8, 9, 0x4001, 0xc002, f.number()}));
    f.arguments(item);
});

namespace {

constexpr u32 FLAG_RESET_ITEM_COUNT = 14;

// An object whose items from byte 0x14 on get their category 40 flags reset (the rest of it is not known yet).
struct ItemsWithFlagsToReset {
    u8 unknown_00[0x14];
    Item items[FLAG_RESET_ITEM_COUNT];
};
GUEST_OFFSET(ItemsWithFlagsToReset, items, 0x14);

}  // namespace

// Resets the flags of the category 40 items among the object's fourteen items (reset_category_40_flags on each).
void reset_category_40_flags_of_all(ItemsWithFlagsToReset &object) {
    for (Item &item : object.items) {
        guest::StackObject<Item> copy;
        *copy = item;
        reset_category_40_flags(*copy);
        item = *copy;
    }
}
GUEST_EXPORT(0x002f9bdc, reset_category_40_flags_of_all);
GUEST_FUZZ(0x002f9bdc, 100, [](guest::Fuzz &f) {
    auto object = f.object<ItemsWithFlagsToReset>();
    for (Item &item : object->items) {
        item = *an_item_in_category(f, f.below(2) ? CATEGORY_40 : CATEGORY_35);
        item.flags = u16(f.below(2) ? 0 : f.number());
    }
    f.arguments(object);
});
