// Properties of items of kind 11 (see ItemData::has_kind_11): each is 0 for items that have no data or are of another
// kind. Meanings not known yet.
#include "guest/guest.hpp"
#include "item/furniture_ref.hpp"
#include "item/item.hpp"

namespace {

constexpr u8 BYTE_13_LIMIT = 0x22;
constexpr u8 BYTE_17_MASK = 0x0f;
constexpr u8 BYTE_17_LIMIT = 5;
constexpr u32 FLAGS_VALUE_LIMIT = 4;  // the two top bits of Item::flags hold a value below this
constexpr u32 CLASS_1 = 1;
constexpr u32 CLASS_2 = 2;
constexpr u32 CLASS_3 = 3;

gptr<Item> fuzz_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(4) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    return item;
}

gptr<ItemData> kind_11_data(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data || !data->has_kind_11()) {
        return gptr<ItemData>(0u);
    }
    return item.data();
}

}  // namespace

// ItemData::byte_13 when it is below the limit, else 0.
u32 item_kind_11_byte_13(const Item &item) {
    gptr<ItemData> data = kind_11_data(item);
    if (!data || data->byte_13 >= BYTE_13_LIMIT) {
        return 0;
    }
    return data->byte_13;
}
GUEST_EXPORT(0x003053d0, item_kind_11_byte_13);
GUEST_FUZZ(0x003053d0, 300, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

// The low nibble of ItemData::byte_17 when it is below the limit, else 0.
u32 item_kind_11_byte_17(const Item &item) {
    gptr<ItemData> data = kind_11_data(item);
    if (!data) {
        return 0;
    }
    u8 property = data->byte_17 & BYTE_17_MASK;
    return property >= BYTE_17_LIMIT ? 0 : property;
}
GUEST_EXPORT(0x00305570, item_kind_11_byte_17);
GUEST_FUZZ(0x00305570, 300, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

// Stores a value in the two top bits of the flags (cleared first, even when the value is too large to store).
void set_kind_11_flags_value(Item &item, u32 value) {
    if (!kind_11_data(item)) {
        return;
    }
    item.flags &= ~Item::FLAGS_TOP_BITS;
    if (value < FLAGS_VALUE_LIMIT) {
        item.flags = u16((item.flags & ~Item::FLAGS_TOP_BITS) | (value << Item::FLAGS_TOP_SHIFT));
    }
}
GUEST_EXPORT(0x003055b4, set_kind_11_flags_value);
GUEST_FUZZ(0x003055b4, 300, [](guest::Fuzz &f) { f.arguments(fuzz_item(f), f.pick<u32>({0, 1, 2, 3, 4, f.number()})); });

// Of kind 11, in class 1, and not one of the kinds FurnitureRef::is_kind_in_group names.
bool item_is_class_1_outside_kind_group(const Item &item) {
    gptr<ItemData> data = kind_11_data(item);
    if (!data || data->class_19() != CLASS_1) {
        return false;
    }
    data = kind_11_data(item);
    return data && !data.cast<FurnitureRef>()->is_kind_in_group();
}
GUEST_EXPORT(0x00319650, item_is_class_1_outside_kind_group);
GUEST_FUZZ(0x00319650, 300, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

// True for an item without data; otherwise whether the data's flag 1d bit 0 is clear.
bool item_has_no_flag_1d_bit_0(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data) {
        return true;
    }
    return !data.cast<FurnitureRef>()->flag_1d_bit_0();
}
GUEST_EXPORT(0x00319a84, item_has_no_flag_1d_bit_0);
GUEST_FUZZ(0x00319a84, 300, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

// Of kind 11 and in class 2 or 3.
bool item_is_class_2_or_3(const Item &item) {
    gptr<ItemData> data = kind_11_data(item);
    if (!data) {
        return false;
    }
    u32 data_class = data->class_19();
    return data_class == CLASS_2 || data_class == CLASS_3;
}
GUEST_EXPORT(0x0031af3c, item_is_class_2_or_3);
GUEST_FUZZ(0x0031af3c, 300, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });
