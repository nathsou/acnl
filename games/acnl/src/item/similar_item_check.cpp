// Whether a list of recently shown items already holds one like a given item.
#include <algorithm>

#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/save_data.hpp"

using guest::gptr;

u32 stack_unit_number(const Item &item);

namespace {

constexpr u32 MAX_ENTRIES = 5;         // the most entries of the list that are looked at
constexpr u32 LEVELS_PER_ENTRY = 5;    // one more entry per this many levels
constexpr u32 LEVEL_TOP_BIT_SHIFT = 7;
constexpr u8 LEVEL_NIBBLE_MASK = 0x0f;
constexpr u32 LEVEL_NIBBLE_WEIGHT = 2;
constexpr u32 LEVEL_FLAG_BONUS = 5;
constexpr u8 CATEGORY_42 = 0x42;
constexpr u8 CATEGORY_43 = 0x43;       // matches the items of category 42
constexpr u8 SAME_CATEGORY_MATCHES[] = {0x03, 0x04, 0x05, 0x06, 0x07, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x19, 0x2e, 0x2f, CATEGORY_42};

inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;

// How many entries of the list count: one plus the level (built from three bytes of the save data) over five, at most five.
u32 entries_to_check() {
    gptr<SaveData> save = get_save_data();
    u32 level = (save->byte_621d0 >> LEVEL_TOP_BIT_SHIFT) + (save->byte_621d1 & LEVEL_NIBBLE_MASK) * LEVEL_NIBBLE_WEIGHT;
    if ((save->flags_621cf & SaveData::FLAGS_621CF_BIT_3) != 0) {
        level += LEVEL_FLAG_BONUS;
    }
    return std::min(level / LEVELS_PER_ENTRY + 1, MAX_ENTRIES);
}

bool matches_by_category(u8 category) {
    return std::find(std::begin(SAME_CATEGORY_MATCHES), std::end(SAME_CATEGORY_MATCHES), category) != std::end(SAME_CATEGORY_MATCHES);
}

}  // namespace

// Whether the first entries of the list (see entries_to_check) hold something like the item: for the categories of
// SAME_CATEGORY_MATCHES a non-empty entry of the same category, for category 43 one of category 42, and for the others
// an entry with the same number (stacks count as their unit item).
bool list_has_similar_item(gptr<Item> list, const Item &item) {
    u32 count = entries_to_check();
    u8 category = item.category();
    if (category == CATEGORY_43 || matches_by_category(category)) {
        u8 wanted = category == CATEGORY_43 ? CATEGORY_42 : category;
        for (u32 index = 0; index < count; index++) {
            if (!list[index].is_empty() && list[index].category() == wanted) {
                return true;
            }
        }
        return false;
    }
    for (u32 index = 0; index < count; index++) {
        if (list[index].is_empty()) {
            continue;
        }
        u32 number = item.number();
        if (category == CATEGORY_STACK_75 || category == CATEGORY_STACK_76) {
            number = stack_unit_number(item);
        }
        if (list[index].has_number(u16(number))) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x00717af4, list_has_similar_item);
