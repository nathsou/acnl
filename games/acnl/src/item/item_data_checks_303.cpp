// Two checks on an item's data entry that start with "the item is of kind 11" (see ItemData::has_kind_11).
#include "guest/guest.hpp"
#include "item/furniture_ref.hpp"
#include "item/item.hpp"

namespace {

constexpr u8 FLAGS_1C_BIT_2 = 0x04;  // meaning not known yet

}  // namespace

// Whether the item is of kind 11 and its data has class 4 or 5 at byte 19 (as FurnitureRef sees the same data).
bool item_is_kind_11_with_class_4_or_5(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data || !data->has_kind_11()) {
        return false;
    }
    return item.data().cast<FurnitureRef>()->has_byte_19_class_4_or_5();
}
GUEST_EXPORT(0x00303acc, item_is_kind_11_with_class_4_or_5);

// True for anything that is not of kind 11; for those, bit 2 of the data's byte 0x1c.
bool item_not_kind_11_or_flag_1c_bit_2(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data || !data->has_kind_11()) {
        return true;
    }
    return (item.data()->flags_1c & FLAGS_1C_BIT_2) != 0;
}
GUEST_EXPORT(0x00303c98, item_not_kind_11_or_flag_1c_bit_2);
