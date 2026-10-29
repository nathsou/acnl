// Turning an item into its kind-2 form (apparently the wrapped form of a present: kind 2 items always pass the
// pockets' checks), for the items whose category allows it.
#include "item/item.hpp"

u32 item_size_class(const Item &item);

namespace {

constexpr u8 CATEGORY_FLAG_BIT_1 = 1 << 1;
constexpr u8 CATEGORY_FLAG_BIT_4 = 1 << 4;
constexpr u16 FLAGS_KIND_BITS = 0xc000;  // the two top bits of the flags
constexpr u32 LARGEST_SIZE_CLASS = 8;
constexpr u8 NOT_ALLOWED_CATEGORIES[] = {0x24, 0x27, 0x28, 0x39, 0x3a, 0x49, 0x6d, 0x8a, 0x7b, 0x95};

}  // namespace

// Sets the kind of the item to 2; false (and no change) for items out of the item range, of categories that do not allow
// it, for large items with a non-zero count in the flags, and for the items of the first id set.
bool Item::try_make_kind_2() {
    gptr<ItemData> item_data = data();
    u8 item_category = !item_data ? NO_CATEGORY : (item_data->category < NO_CATEGORY ? item_data->category : 0);
    if (u32(number() - FIRST_ITEM) >= ITEM_COUNT) {
        return false;
    }
    gptr<u8> category_entry = category_flags();
    if (!category_entry || (category_entry[1] & CATEGORY_FLAG_BIT_4) == 0) {
        return false;
    }
    category_entry = category_flags();
    if (!category_entry || (category_entry[1] & CATEGORY_FLAG_BIT_1) == 0) {
        return false;
    }
    for (u8 refused : NOT_ALLOWED_CATEGORIES) {
        if (item_category == refused) {
            return false;
        }
    }
    if (has_valid_value_06() && (flags & ~FLAGS_KIND_BITS) != 0 && item_size_class(*this) == LARGEST_SIZE_CLASS) {
        return false;
    }
    if (is_in_id_set_a()) {
        return false;
    }
    id = u16((id & ~KIND_MASK) | (KIND_2 << KIND_SHIFT));
    return true;
}
GUEST_EXPORT(0x006ba938, Item::try_make_kind_2);
GUEST_FUZZ(0x006ba938, 400, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    item->flags = f.below(2) ? 0 : u16(f.number());
    f.arguments(item);
});
