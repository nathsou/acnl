// Finding the item of a category that has the same variation value as a given one.
#include "core/fuzz_helpers.hpp"
#include "item/item.hpp"

namespace {

constexpr u8 CATEGORY_54 = 0x54;
constexpr u8 CATEGORY_55 = 0x55;
constexpr u8 CATEGORY_58 = 0x58;
constexpr u8 CATEGORY_59 = 0x59;
constexpr u16 FIRST_NUMBER_FOR_55 = 0x30d2;  // the items searched for category 55: this and the next 24
constexpr u16 LAST_NUMBER_FOR_55 = FIRST_NUMBER_FOR_55 + 0x18;
constexpr u16 FIRST_NUMBER_FOR_59 = 0x30eb;  // for category 59: this and the next 7
constexpr u16 LAST_NUMBER_FOR_59 = FIRST_NUMBER_FOR_59 + 7;
constexpr u8 VALUE_LIMIT = 0x22;  // byte 0x13 values at or above count as 0

// ItemData::byte_13 for items with data of a valid kind 11 (0 when it is VALUE_LIMIT or more, and without data).
u32 variation_value(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data || !data->has_kind_11() || data->byte_13 >= VALUE_LIMIT) {
        return 0;
    }
    return data->byte_13;
}

// The first item of the numbers (in order) that has the value, written to out; false when there is none.
bool find_with_value(Item &out, u16 first, u16 last, u32 value) {
    guest::StackObject<Item> candidate;
    for (u32 number = first; number <= last; number++) {
        construct_item(*candidate, u16(number));
        if (variation_value(*candidate) == value) {
            out.id = candidate->id;
            out.flags = candidate->flags;
            return true;
        }
    }
    return false;
}

}  // namespace

// The item of category 55 or 59's fixed number range whose variation value equals the item's (an item of category 54
// or 58 is its own partner); the empty item when there is none or for other categories.
void variation_partner(Item &out, const Item &item) {
    u8 category = item.category();
    bool found = false;
    if (category == CATEGORY_54 || category == CATEGORY_58) {
        out.id = item.id;
        out.flags = item.flags;
        return;
    }
    if (category == CATEGORY_55) {
        found = find_with_value(out, FIRST_NUMBER_FOR_55, LAST_NUMBER_FOR_55, variation_value(item));
    } else if (category == CATEGORY_59) {
        found = find_with_value(out, FIRST_NUMBER_FOR_59, LAST_NUMBER_FOR_59, variation_value(item));
    }
    if (!found) {
        out.id = empty_item->id;
        out.flags = empty_item->flags;
    }
}
GUEST_EXPORT(0x0076b630, variation_partner);
GUEST_FUZZ(0x0076b630, 300, [](guest::Fuzz &f) {
    constexpr u8 CATEGORIES[] = {CATEGORY_54, CATEGORY_55, CATEGORY_58, CATEGORY_59, 0x33};
    f.arguments(f.object<Item>(), fuzz::item_in_category(f, CATEGORIES[f.below(sizeof(CATEGORIES))]));
});
