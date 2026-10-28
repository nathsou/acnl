// Small queries on an item's data entry.
#include "guest/guest.hpp"
#include "item/item.hpp"

namespace {

inline constexpr guest::Function<0x007486dc, u32(gptr<ItemData> data)> item_data_check;

constexpr u32 INVALID_RESULT = 13;    // returned when the item has no data or the check fails
constexpr u32 BYTE_19_OFFSET = 0x19;  // a byte of the ItemData entry (meaning not known yet)
constexpr u8 BYTE_19_MASK = 0x0f;
constexpr u8 BYTE_19_LIMIT = 0x0e;    // masked values at or above read as 0

gptr<Item> fuzz_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(4) != 0) {
        item->id = Item::FIRST_ITEM + f.below(Item::ITEM_COUNT);
    }
    return item;
}

}  // namespace

// Whether the item has a data entry that passes the data check.
static bool item_has_valid_data(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data) {
        return false;
    }
    return item_data_check(data) != 0;
}
GUEST_EXPORT(0x0030b654, item_has_valid_data);
GUEST_FUZZ(0x0030b654, 300, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

// A value from the item data entry's byte 0x19 (low 4 bits, 0 when too large); 13 without valid data.
static u32 item_data_byte_19_value(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data) {
        return INVALID_RESULT;
    }
    if (!item_data_check(data)) {
        return INVALID_RESULT;
    }
    u8 value = item.data().cast<u8>()[BYTE_19_OFFSET] & BYTE_19_MASK;
    if (value >= BYTE_19_LIMIT) {
        return 0;
    }
    return value;
}
GUEST_EXPORT(0x0030b674, item_data_byte_19_value);
GUEST_FUZZ(0x0030b674, 300, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });
