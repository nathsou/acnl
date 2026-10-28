#include "item/item.hpp"

namespace {

// The entry f_002fd010 returns for an index: the item id at offset 2 is the one thing known.
struct IndexedItemEntry {
    u16 unknown_00;
    u16 item_id;
};
GUEST_OFFSET(IndexedItemEntry, item_id, 2);

// Still recompiled code. The check is called with the output item in r1, passed along as the caller does.
inline constexpr guest::Function<0x0076a36c, u32(u32 index, gptr<Item> passed_r1)> is_index_valid;
inline constexpr guest::Function<0x002fd010, gptr<IndexedItemEntry>(u32 index)> indexed_item_entry;

}  // namespace

// Writes the item of an entry to out when the index is valid and the entry holds an item with data.
bool get_indexed_item(u32 index, Item &out) {
    if (is_index_valid(index, guest::addr_of(out)) == 0) {
        return false;
    }
    u16 id = indexed_item_entry(index)->item_id;
    guest::StackObject<Item> item;
    construct_item(*item, id);
    if (u32(item->number()) - Item::FIRST_ITEM >= Item::ITEM_COUNT) {
        return false;
    }
    out.id = item->id;
    out.flags = item->flags;
    return true;
}
GUEST_EXPORT(0x002fe4e0, get_indexed_item);

bool Item::is_bell_bag() const {
    gptr<ItemData> entry = data();
    if (!entry) {
        return false;
    }
    u8 item_category = entry->category;
    if (item_category >= CATEGORY_COUNT) {
        return false;
    }
    return item_category == CATEGORY_BELLS;
}
GUEST_EXPORT(0x002fe53c, Item::is_bell_bag);

bool Item::same_number_as(const Item &other) const {
    return number() == other.number();
}
GUEST_EXPORT(0x002fe574, Item::same_number_as);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<Item> some_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    switch (f.below(5)) {
    case 0: item->id = Item::EMPTY; break;
    case 1: item->id = Item::FIRST_ITEM + f.below(Item::ITEM_COUNT); break;
    case 2: item->id = BELL_BAG_100 + f.below(BELL_BAG_99000 - BELL_BAG_100 + 1); break;
    case 3: item->id = (Item::FIRST_ITEM + f.below(Item::ITEM_COUNT)) | Item::ID_FLAG; break;
    default: break;
    }
    return item;
}

GUEST_FUZZ(0x002fe4e0, 200, [](guest::Fuzz &f) {
    f.arguments(f.below(16), f.object<Item>());
});
GUEST_FUZZ(0x002fe53c, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x002fe574, 300, [](guest::Fuzz &f) {
    auto a = some_item(f);
    auto b = some_item(f);
    if (f.below(2) == 0) {
        b->id = a->id ^ (f.below(2) ? Item::ID_FLAG : 0);
    }
    f.arguments(a, b);
});
