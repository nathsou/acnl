// Questions about a set of items (an ItemBitSet) and the categories: counts and the value of what is in the set.
#include "core/entry18.hpp"
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "item/item_bit_set.hpp"

namespace {

inline constexpr guest::Function<0x006e5718, gptr<Entry18>(u32 index)> entry_18;
inline constexpr guest::Function<0x006c91d0, gptr<u8>()> catalog_state;

constexpr u32 GROUP_SHIFT = 4;
constexpr u32 GROUP_LIMIT = 0xe;       // groups at or above read as 0
constexpr u8 FLAG_1C_BIT_4 = 1 << 4;   // ItemData::flags_1c: unknown flag

// The categories counted by the total value, one byte each (a table in the game's data).
constexpr u32 VALUE_CATEGORY_COUNT = 0x11;
inline guest::global<u8[VALUE_CATEGORY_COUNT], 0x0088e530> value_categories;
constexpr u8 FIXED_VALUE_CATEGORY = 0x84;
constexpr s32 FIXED_VALUE = 10000;  // what each item of that category is worth, whatever its price

}  // namespace

// The sets of 16-byte records for each of the 0x276 entries, followed by one bit per group.
struct GroupedRecords {
    u8 unknown_0000[0xe80];
    u8 records[Entry18::COUNT][16];
    u8 group_bits[2];  // one bit per group (0-13)

    gptr<u8> record_for(u32 entry_index);
};
GUEST_OFFSET(GroupedRecords, records, 0xe80);
GUEST_OFFSET(GroupedRecords, group_bits, 0x35e0);

// The record of the entry when its group's bit is set; else the record at 0xf40 (12 records past the first one).
gptr<u8> GroupedRecords::record_for(u32 entry_index) {
    constexpr u32 DEFAULT_RECORD = 12;
    gptr<u8> fallback = guest::addr_of(records[DEFAULT_RECORD][0]);
    if (entry_index >= Entry18::COUNT) {
        return fallback;
    }
    u32 group = entry_18(entry_index)->byte_0f >> GROUP_SHIFT;
    if (group >= GROUP_LIMIT) {
        group = 0;
    }
    if ((group_bits[group / 8] >> (group % 8) & 1) == 0) {
        return fallback;
    }
    return guest::addr_of(records[entry_index][0]);
}
GUEST_EXPORT(0x0076f954, GroupedRecords::record_for);

// How many items of the category are in the set (only items with the flag when `only_flagged`).
static u32 count_in_category(const ItemBitSet &set, u32 category, bool only_flagged) {
    gptr<CategoryInfo> info = category_info(category);
    u32 first = info->first_item_number;
    u32 last = info->last_item_number;
    Item item;
    construct_item(item, u16(first));
    gptr<ItemData> data = item.data();
    if (!data) {
        return 0;
    }
    u32 count = 0;
    for (u32 number = first; number <= last; number++, data = data + 1) {
        if (only_flagged && (data->flags_1c & FLAG_1C_BIT_4) == 0) {
            continue;
        }
        Item member;
        construct_item(member, u16(number));
        if (set.contains(member)) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x0076fe68, count_in_category);

// The total value of the items in the set over the value categories (remembered in the catalog state too).
static s32 total_value(const ItemBitSet &set) {
    s32 total = 0;
    for (u32 k = 0; k < VALUE_CATEGORY_COUNT; k++) {
        u8 category = value_categories[k];
        gptr<CategoryInfo> info = category_info(category);
        s32 sum = 0;
        for (u32 number = info->first_item_number; number <= info->last_item_number; number++) {
            Item item;
            construct_item(item, u16(number));
            bool in_set = set.contains(item);
            s32 price = s32(item.price());
            if (!in_set) {
                continue;
            }
            if (category == FIXED_VALUE_CATEGORY) {
                sum += FIXED_VALUE;
            } else if (price > 0) {
                sum += price;
            }
        }
        total += sum;
    }
    *gptr<s32>(catalog_state().addr() + 8) = total;
    return total;
}
GUEST_EXPORT(0x0076fd80, total_value);
