// Yes/no questions and small values about an item, answered from its data entry, its id and its flags
// (the functions around 0x00768xxx).
#include "item/item.hpp"

namespace {

inline constexpr guest::Function<0x002fccdc, u32(const Item &item)> indexed_item_type;
inline constexpr guest::Function<0x007689a4, u32(const Item &item)> item_class_kind;

constexpr u32 TYPE_WITH_FLAG = 10;            // indexed_item_type of the items whose flags bit 10 counts
constexpr u16 FLAGS_BIT_10 = 1 << 10;
constexpr u32 FLAGS_BIT_10_SHIFT = 10;
constexpr u16 FLAGS_TOP_BITS_MASK = 0xc000;
constexpr s32 PRICE_DIVISOR = 4;

// For each kind item_class_kind reports (0-14): its group (meaning not known yet). Larger kinds have none.
constexpr u8 GROUP_FOR_KIND[] = {0, 1, 2, 3, 4, 5, 0, 0, 6, 7, 8, 0, 0, 9, 7};

constexpr u16 ID_SET_A[] = {0x334c, 0x3350, 0x3354, 0x3358, 0x335c, 0x3360, 0x3364, 0x26ed};
constexpr u16 ID_SET_B[] = {0x334e, 0x3352, 0x3356, 0x335a, 0x335e, 0x3362};

template <size_t N>
bool contains(const u16 (&set)[N], u16 number) {
    for (u16 member : set) {
        if (member == number) {
            return true;
        }
    }
    return false;
}

}  // namespace

bool ItemData::has_kind_11() const {
    return kind_11 != 0 && kind_11 <= KIND_11_LAST;
}
GUEST_EXPORT(0x007486dc, ItemData::has_kind_11);

u32 ItemData::class_19() const {
    u32 class_value = class_and_flags_19 >> CLASS_19_SHIFT;
    return class_value < CLASS_19_LIMIT ? class_value : 0;
}
GUEST_EXPORT(0x0074870c, ItemData::class_19);

bool Item::has_valid_value_06() const {
    gptr<ItemData> d = data();
    if (!d || !d->has_kind_11()) {
        return false;
    }
    return d->value_06 != 0 && d->value_06 < ItemData::VALUE_06_LIMIT;
}
GUEST_EXPORT(0x007684a4, Item::has_valid_value_06);

u32 Item::class_19_if_valid_kind() const {
    gptr<ItemData> d = data();
    if (!d || !d->has_kind_11()) {
        return 0;
    }
    return d->class_19();
}
GUEST_EXPORT(0x007684ec, Item::class_19_if_valid_kind);

u32 Item::group_for_class() const {
    u32 kind = item_class_kind(*this);
    return kind < sizeof(GROUP_FOR_KIND) ? GROUP_FOR_KIND[kind] : 0;
}
GUEST_EXPORT(0x00768524, Item::group_for_class);

bool Item::has_flag_bit_10_in_type_10() const {
    if (indexed_item_type(*this) != TYPE_WITH_FLAG) {
        return false;
    }
    return (flags & FLAGS_BIT_10) >> FLAGS_BIT_10_SHIFT != 0;
}
GUEST_EXPORT(0x007685c4, Item::has_flag_bit_10_in_type_10);

bool Item::is_in_id_set_a() const {
    return contains(ID_SET_A, number());
}
GUEST_EXPORT(0x00768628, Item::is_in_id_set_a);

bool Item::is_in_id_set_b() const {
    return contains(ID_SET_B, number());
}
GUEST_EXPORT(0x007686e8, Item::is_in_id_set_b);

u32 Item::quarter_price() const {
    s32 value = s32(price());
    return value > 0 ? u32(value / PRICE_DIVISOR) : 0;
}
GUEST_EXPORT(0x00768738, Item::quarter_price);

u16 Item::flags_value() const {
    return flags & ~FLAGS_TOP_BITS_MASK;
}
GUEST_EXPORT(0x00768800, Item::flags_value);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

// Items with data (when it is loaded), empty slots, and the ids of the two sets, with assorted flags.
gptr<Item> some_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    switch (f.below(6)) {
    case 0:
        item->id = Item::EMPTY;
        break;
    case 1:
        item->id = ID_SET_A[f.below(sizeof(ID_SET_A) / sizeof(ID_SET_A[0]))];
        break;
    case 2:
        item->id = ID_SET_B[f.below(sizeof(ID_SET_B) / sizeof(ID_SET_B[0]))];
        break;
    default:
        item->id = item_data_table->entries ? u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT)) : Item::EMPTY;
        break;
    }
    if (f.below(4) == 0) {
        item->id |= Item::ID_FLAG;
    }
    item->flags = u16(f.below(3) == 0 ? f.number() : f.below(16));
    return item;
}

}  // namespace

GUEST_FUZZ(0x007486dc, 300, [](guest::Fuzz &f) {
    gptr<ItemData> d = item_data_table->entries;
    f.arguments(d ? d + f.below(Item::ITEM_COUNT) : f.object<ItemData>());
});
GUEST_FUZZ(0x0074870c, 300, [](guest::Fuzz &f) {
    gptr<ItemData> d = item_data_table->entries;
    f.arguments(d ? d + f.below(Item::ITEM_COUNT) : f.object<ItemData>());
});
GUEST_FUZZ(0x007684a4, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x007684ec, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x00768524, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x007685c4, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x00768628, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x007686e8, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x00768738, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x00768800, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
