// Moving items between categories. The item data groups the item numbers into categories (a first number, a last
// number and a count); several variants of one thing sit in different categories at the same position, and these
// functions translate an item to its counterpart, and mark whole categories in an item bit set.
#include "item/item_bit_set.hpp"
#include "item/item.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u16 NO_ITEM_NUMBER = Item::EMPTY;
constexpr u8 STACK_CATEGORY_75 = 0x75;
constexpr u8 STACK_CATEGORY_76 = 0x76;
constexpr u32 UNIT_CATEGORY_33 = 0x33;
constexpr u32 UNIT_CATEGORY_34 = 0x34;
constexpr u32 FIRST_STACKED_NUMBER_OFFSET = 1;
constexpr u32 LAST_STACKED_NUMBER_OFFSET = 5;
constexpr u32 WORD_BITS = 32;
constexpr u32 WORD_SHIFT = 5;
constexpr u32 CATEGORY_40 = 0x40;
constexpr u32 NUMBER_OFFSET_9F = 0x9f;
constexpr u32 NUMBER_C9 = 0xc9;
constexpr u32 SMALL_NUMBER_LIMIT = 0xfd;
constexpr u8 HIDDEN_ITEM_FLAG = 0x01;  // ItemData::flags_1b bit 0
constexpr u32 SAVE_FLAG_SHIFT = 4;
// The indexed item types that map to the small catalog (what the types stand for is not known yet).
constexpr u32 MAPPED_TYPES[] = {0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x14, 0x1b, 0x1c};

inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline constexpr guest::Function<0x002fccdc, u32(const Item &item)> indexed_item_type;

// The number of the item at the position in the category, or the empty number past the end.
u16 number_at(u32 category, s32 position) {
    gptr<CategoryInfo> info = category_info(category);
    if (u32(position) >= info->item_count) {
        return NO_ITEM_NUMBER;
    }
    return u16(info->first_item_number + position);
}

// The position of the item inside its own category, -1 for items without data.
s32 position_in_category(const Item &item) {
    return item.data() ? item_offset_in_category(item) : -1;
}

}  // namespace

// Marks every item of the category in the set (the bits from the category's first number to its last); unless the
// save data allows hidden items, the items the data flags as hidden are cleared again.
void mark_category_in_set(ItemBitSet &set, u32 category) {
    gptr<CategoryInfo> info = category_info(category);
    u32 first = info->first_item_number;
    u32 last = info->last_item_number;
    u32 count = info->item_count;
    u32 first_bit = first - Item::FIRST_ITEM;
    u32 last_bit = last - Item::FIRST_ITEM;
    u32 first_word = u32(s32(first_bit) >> WORD_SHIFT);
    u32 last_word = u32(s32(last_bit) >> WORD_SHIFT);
    set.words[first_word] |= ~0u << (first_bit & (WORD_BITS - 1));
    for (u32 word = first_word + 1; word < last_word; word++) {
        set.words[word] = ~0u;
    }
    u32 last_mask = ~0u >> (WORD_BITS - 1 - (last_bit & (WORD_BITS - 1)));
    if (first_word != last_word) {
        set.words[last_word] |= last_mask;
    } else {
        set.words[last_word] &= last_mask;
    }
    // (a flag byte of the save data: its high nibble says whether the hidden items are allowed)
    if ((get_save_data()->flags_621ce >> SAVE_FLAG_SHIFT) != 0) {
        return;
    }
    guest::StackObject<Item> start;
    construct_item(*start, u16(first));
    gptr<ItemData> data = start->data();
    for (u32 i = 0; i < count; i++) {
        u32 number = first + i;
        if ((data[i].flags_1b & HIDDEN_ITEM_FLAG) != 0 && number <= Item::FIRST_ITEM + Item::ITEM_COUNT - 1) {
            u32 bit = number - Item::FIRST_ITEM;
            set.words[bit >> WORD_SHIFT] &= ~(1u << (bit & (WORD_BITS - 1)));
        }
    }
}
GUEST_EXPORT(0x00302944, mark_category_in_set);

// Turns an item of the first category into the item at the same position of the second one (empty past its end),
// keeping the flag in the id; false for items of other categories.
bool convert_item_category(Item &item, u32 from, u32 to) {
    gptr<ItemData> data = item.data();
    if (!data) {
        return false;
    }
    u32 category = data->category < Item::NO_CATEGORY ? data->category : 0;
    if (category != from) {
        return false;
    }
    s32 position = position_in_category(item);
    u16 number = number_at(to, position);
    item.id = u16((item.id & Item::ID_FLAG) | (number & Item::NUMBER_MASK));
    return true;
}
GUEST_EXPORT(0x006b9858, convert_item_category);

// The number of the item at the position in the category, or the empty number past the end.
u16 item_number_in_category(u32 category, u32 position) {
    return number_at(category, s32(position));
}
GUEST_EXPORT(0x006b9b30, item_number_in_category);

namespace {

constexpr u32 CATEGORY_39 = 0x39;
constexpr u16 NUMBER_2283 = 0x2283;
constexpr u32 CATEGORY_NO_DATA = 0x9b;

// The pairs of categories an item is turned into the earlier one of, when it has the later one.
struct CategoryStep {
    u32 from;
    u32 to;
};
constexpr CategoryStep CATEGORY_STEPS[] = {{0x56, 0x54}, {0x57, 0x55}, {0x31, 0x2f}, {0x93, 6}, {0x94, 7}};
// Item numbers that move down by one (to the item before) when no category step applies.
constexpr u16 NUMBERS_STEPPED_DOWN[] = {0x3058, 0x305b, 0x3065, 0x3068};

}  // namespace

// Moves an item of category 0x39 (except number 0x2283) one place back in its category; false for other items and the
// first one.
bool step_back_in_category_39(Item &item) {
    gptr<ItemData> data = item.data();
    if (!data || data->category >= CATEGORY_NO_DATA || data->category != CATEGORY_39 || item.number() == NUMBER_2283) {
        return false;
    }
    s32 position = position_in_category(item);
    if (position <= 0) {
        return false;
    }
    u16 number = number_at(CATEGORY_39, position - 1);
    item.id = u16((item.id & Item::ID_FLAG) | (number & Item::NUMBER_MASK));
    return true;
}
GUEST_EXPORT(0x006b9b78, step_back_in_category_39);

// Turns the item into its earlier form: into the same position of the earlier category for the categories in
// CATEGORY_STEPS, and for four item numbers into the item before; false for other items.
bool convert_to_earlier_form(Item &item) {
    gptr<ItemData> data = item.data();
    u32 category = !data ? CATEGORY_NO_DATA : (data->category < CATEGORY_NO_DATA ? data->category : 0);
    for (const CategoryStep &step : CATEGORY_STEPS) {
        if (category == step.from && convert_item_category(item, step.from, step.to)) {
            return true;
        }
    }
    u16 number = item.id & Item::NUMBER_MASK;
    for (u16 stepped : NUMBERS_STEPPED_DOWN) {
        if (number == stepped) {
            item.id = u16((item.id & Item::ID_FLAG) | (number - 1));
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x006ba62c, convert_to_earlier_form);

// The unit item of a stack item (categories 0x75 and 0x76 stand for 0x33 and 0x34), the empty number otherwise.
u32 stack_unit_number(const Item &item) {
    u8 category = item.category();
    u32 unit_category;
    if (category == STACK_CATEGORY_75) {
        unit_category = UNIT_CATEGORY_33;
    } else if (category == STACK_CATEGORY_76) {
        unit_category = UNIT_CATEGORY_34;
    } else {
        return NO_ITEM_NUMBER;
    }
    return number_at(unit_category, position_in_category(item));
}
GUEST_EXPORT(0x007693d0, stack_unit_number);

// Turns the numbers 1 to 5 of the first item range into the matching item of category 0x34 (as a fresh item).
bool convert_low_numbers_to_unit(Item &item) {
    u32 offset = item.number() - Item::FIRST_ITEM;
    if (offset < FIRST_STACKED_NUMBER_OFFSET || offset > LAST_STACKED_NUMBER_OFFSET) {
        return false;
    }
    guest::StackObject<Item> converted;
    construct_item(*converted, number_at(UNIT_CATEGORY_34, position_in_category(item)));
    item.id = converted->id;
    item.flags = converted->flags;
    return true;
}
GUEST_EXPORT(0x006bada0, convert_low_numbers_to_unit);

// The counterpart of an item for the small catalog (numbers up to 0xfd): items of several indexed types map to
// category 0x40 by their number, any other item becomes the empty item; larger numbers are copied.
void catalog_counterpart(Item &out, const Item &item) {
    if (item.number() > SMALL_NUMBER_LIMIT) {
        out.id = item.id;
        out.flags = item.flags;
        return;
    }
    u32 type = indexed_item_type(item);
    bool mapped = item.number() == NUMBER_C9;
    for (u32 mapped_type : MAPPED_TYPES) {
        mapped = mapped || type == mapped_type;
    }
    if (!mapped) {
        out.id = empty_item->id;
        out.flags = empty_item->flags;
        return;
    }
    u16 number = number_at(CATEGORY_40, s32(item.number() - NUMBER_OFFSET_9F));
    out.id = u16((item.id & Item::ID_FLAG) | (number & Item::NUMBER_MASK));
    out.flags = item.flags;
}
GUEST_EXPORT(0x006b9a34, catalog_counterpart);
