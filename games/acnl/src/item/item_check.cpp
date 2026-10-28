#include "item/item.hpp"

namespace {
inline constexpr guest::Function<0x007684a4, u32(const Item &item)> item_check_a;
inline constexpr guest::Function<0x0076bb34, u32(const Item &item)> item_check_b;
constexpr u32 EXPECTED_CHECK_B_RESULT = 8;  // meaning not known yet
}  // namespace

// True when the item passes the first check, has some flag bits besides the top two, and the second check
// returns 8.
bool item_has_flags_and_check_b(const Item &item) {
    if (item_check_a(item) == 0) {
        return false;
    }
    if ((item.flags & ~Item::FLAGS_TOP_BITS) == 0) {
        return false;
    }
    return item_check_b(item) == EXPECTED_CHECK_B_RESULT;
}
GUEST_EXPORT(0x00313124, item_has_flags_and_check_b);

GUEST_FUZZ(0x00313124, 300, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    bool data_loaded = bool(item_data_table->entries);
    if (data_loaded && f.below(3) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    } else {
        item->id = Item::EMPTY;
    }
    if (f.below(3) == 0) {
        item->flags = f.pick<u16>({0, 0xc000, 1, 0x4000});
    }
    f.arguments(item);
});
