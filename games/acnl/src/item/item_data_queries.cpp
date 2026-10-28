#include "item/item.hpp"

namespace {

inline constexpr guest::Function<0x007486dc, u32(gptr<ItemData> data)> item_data_check;

// The unknown byte at 0x0f of an ItemData entry (the layout there is not split up yet).
constexpr u32 DATA_BYTE_0F_OFFSET = 0x0f;
constexpr u8 DATA_BYTE_0F_LIMIT = 0x32;  // values at or above read as 0 (meaning not known yet)

constexpr u32 TOP_BITS_SHIFT = 14;  // the two flag bits at the top of Item::flags
constexpr u32 TOP_BITS_VALUES = 4;  // values that fit in them

}  // namespace

// ItemData byte 0x0f of the item, or 0 when the item has no data or the byte is out of range.
u32 item_data_byte_0f(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data) {
        return 0;
    }
    u8 value = data.cast<u8>()[DATA_BYTE_0F_OFFSET];
    return value < DATA_BYTE_0F_LIMIT ? value : 0;
}
GUEST_EXPORT(0x003117bc, item_data_byte_0f);

// Copies src into out when src has data that passes the check, then clears the top two flag bits of out
// and sets them to `bits` when it fits.
void copy_item_with_top_bits(Item &out, const Item &src, u32 bits) {
    gptr<ItemData> data = src.data();
    if (!data) {
        return;
    }
    if (item_data_check(data) == 0) {
        return;
    }
    out.id = src.id;
    out.flags = src.flags;
    gptr<ItemData> out_data = out.data();
    if (out_data) {
        item_data_check(out_data);  // (result unused)
    }
    out.flags = u16(out.flags & ~Item::FLAGS_TOP_BITS);
    if (bits < TOP_BITS_VALUES) {
        out.flags = u16(out.flags | (bits << TOP_BITS_SHIFT));
    }
}
GUEST_EXPORT(0x003117dc, copy_item_with_top_bits);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<Item> valid_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (item_data_table->entries && f.below(4) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    } else {
        item->id = Item::EMPTY;
    }
    return item;
}

GUEST_FUZZ(0x003117bc, 300, [](guest::Fuzz &f) { f.arguments(valid_item(f)); });
GUEST_FUZZ(0x003117dc, 300, [](guest::Fuzz &f) {
    auto out = valid_item(f);
    auto src = valid_item(f);
    f.arguments(out, src, f.pick<u32>({0, 1, 2, 3, 4, 5, 0xffffffff}));
});
