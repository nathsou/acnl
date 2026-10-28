#include "item/item.hpp"

bool Item::is_empty() const { return number() == EMPTY; }
GUEST_EXPORT(0x002fcaf4, Item::is_empty);

bool Item::is_item() const { return u16(number() - FIRST_ITEM) < ITEM_COUNT; }
GUEST_EXPORT(0x002fcb10, Item::is_item);

bool Item::has_number(u16 n) const { return number() == n; }
GUEST_EXPORT(0x002fcb84, Item::has_number);

s32 Item::index() const { return is_item() ? number() - FIRST_ITEM : -1; }
GUEST_EXPORT(0x00768da0, Item::index);

gptr<ItemData> Item::data() const {
    s32 i = index();
    gptr<ItemData> entries = item_data_table->entries;
    if (i < 0 || !entries || i >= ITEM_COUNT) return nullptr;
    return entries + i;
}
GUEST_EXPORT(0x005361a8, Item::data);

u8 Item::category() const {
    gptr<ItemData> d = data();
    if (!d) return NO_CATEGORY;
    return d->category < NO_CATEGORY ? d->category : 0;  // (an out-of-range category reads as 0)
}
GUEST_EXPORT(0x002fcb34, Item::category);

// Map objects (kind 0) and items (kind 1) get their default flags from their kind's initializer, called through a
// table of pointers to member functions in the game's data.
inline guest::global<guest::MemberFunctionPointer[2], 0x0088e648> kind_initializers;

Item &construct_item(Item &self, u16 id) {
    self.id = id & 0x7fff;
    self.flags = 0;
    u32 kind = self.id >> 13;
    if (kind < 2) guest::call_member<void>(kind_initializers[kind], guest::addr_of(self).cast<void>());
    return self;
}
GUEST_EXPORT(0x002fcbb0, construct_item);

// The compiler made two identical functions: the copy constructor and the assignment operator.
Item &copy_item(Item &self, const Item &other) {
    self.id = other.id;
    self.flags = other.flags;
    return self;
}
GUEST_EXPORT(0x002fc8e8, copy_item);
GUEST_EXPORT(0x002fc934, copy_item);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<Item> some_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    switch (f.below(4)) {  // ids in each interesting range
    case 0: item->id = Item::FIRST_ITEM + f.below(Item::ITEM_COUNT + 16); break;
    case 1: item->id = f.pick<u16>({Item::EMPTY, Item::EMPTY | 0x8000, 0x1fff, 0x2000, 0x372a, 0x372b}); break;
    default: break;
    }
    return item;
}

GUEST_FUZZ(0x002fcaf4, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x002fcb10, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x002fcb84, 300, [](guest::Fuzz &f) {
    auto item = some_item(f);
    f.arguments(item, u16(f.below(2) ? item->number() : f.number()));
});
GUEST_FUZZ(0x00768da0, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x005361a8, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x002fcb34, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x002fcbb0, 300, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    f.arguments(item, u16(f.below(2) ? Item::FIRST_ITEM + f.below(Item::ITEM_COUNT) : f.number()));
});
GUEST_FUZZ(0x002fc8e8, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), f.object<Item>()); });
