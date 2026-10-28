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
    if (i < 0 || !entries || i >= ITEM_COUNT) {
        return nullptr;
    }
    return entries + i;
}
GUEST_EXPORT(0x005361a8, Item::data);

u8 Item::category() const {
    gptr<ItemData> d = data();
    if (!d) {
        return NO_CATEGORY;
    }
    return d->category < NO_CATEGORY ? d->category : 0;  // (an out-of-range category reads as 0)
}
GUEST_EXPORT(0x002fcb34, Item::category);

// The category tables: 12-byte entries, and a default for categories out of range
inline guest::global<CategoryInfo[Item::NO_CATEGORY], 0x00877770> category_infos;
inline guest::global<CategoryInfo, 0x0087917c> default_category_info;

gptr<CategoryInfo> category_info(u32 category) {
    if (category < Item::NO_CATEGORY) {
        return category_infos.ptr().cast<CategoryInfo>() + category;
    }
    return default_category_info.ptr();
}
GUEST_EXPORT(0x005359fc, category_info);

gptr<u8> Item::category_flags() const {
    gptr<ItemData> d = data();
    if (!d) {
        return nullptr;
    }
    u32 category = d->category < NO_CATEGORY ? d->category : 0;
    gptr<u8> table = category_flag_table->entries;
    if (!table) {
        return nullptr;
    }
    return table + category * 3;
}
GUEST_EXPORT(0x00536214, Item::category_flags);

bool Item::has_category_flag_4() const {
    if ((id & 0x6000) == 0x4000) {
        return true;
    }
    gptr<u8> flags = category_flags();
    return flags && (flags[1] >> 4 & 1);
}
GUEST_EXPORT(0x00769840, Item::has_category_flag_4);

u32 ItemData_base_price(const ItemData &d) { return d.base_price(); }
GUEST_EXPORT(0x007486fc, ItemData_base_price);

// The item (at an unknown spot of the game manager) the price rule below compares against
inline guest::global<gptr<u8>, 0x0095bf74> game_manager;  // the game manager object (a global pointer)

// Prices: the base price; a tenth of it for categories 0x33/0x34/0x75/0x76 when the item sits at the same position
// within its category as the reference item; and for categories 0x75/0x76 (flowers-like stackables) multiplied by
// the count in the item's flags (n + 1 if that is 2-9, else 0).
static s32 offset_in_category(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data) {
        return -1;
    }
    u32 category = data->category < Item::NO_CATEGORY ? data->category : 0;
    return s32(item.number() - category_info(category)->first_item_number);
}

u32 Item::price() const {
    gptr<ItemData> d = data();
    if (!d) {
        return 0;
    }
    u32 price = d->base_price();
    u8 category = d->category;
    if (category >= NO_CATEGORY) {
        return price;
    }
    bool stackable = category == 0x75 || category == 0x76;
    if (category != 0x33 && category != 0x34 && !stackable) {
        return price;
    }

    const Item &reference = *gptr<Item>(game_manager->addr() + 0x6223a);
    if (offset_in_category(*this) == offset_in_category(reference)) {
        price = s32(price) / 10;
    }
    if (!stackable) {
        return price;
    }

    u32 count = (flags & ~0xc000) + 1;
    return (count - 2 <= 7 ? count : 0) * price;
}
GUEST_EXPORT(0x00305630, Item::price);

// Map objects (kind 0) and items (kind 1) get their default flags from their kind's initializer, called through a
// table of pointers to member functions in the game's data.
inline guest::global<guest::MemberFunctionPointer[2], 0x0088e648> kind_initializers;

Item &construct_item(Item &self, u16 id) {
    self.id = id & 0x7fff;
    self.flags = 0;
    u32 kind = self.id >> 13;
    if (kind < 2) {
        guest::call_member<void>(kind_initializers[kind], guest::addr_of(self).cast<void>());
    }
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

GUEST_FUZZ(0x005359fc, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 0x9a, 0x9b, 0x9c, f.number(), f.below(0xa0)})); });
GUEST_FUZZ(0x00536214, 300, [](guest::Fuzz &f) { f.arguments(some_item(f)); });
GUEST_FUZZ(0x00769840, 300, [](guest::Fuzz &f) {
    auto item = some_item(f);
    if (f.below(4) == 0) {
        item->id = 0x4000 | f.below(0x2000);
    }
    f.arguments(item);
});
GUEST_FUZZ(0x007486fc, 200, [](guest::Fuzz &f) { f.arguments(f.object<ItemData>()); });
GUEST_FUZZ(0x00305630, 600, [](guest::Fuzz &f) {
    auto item = some_item(f);
    item->flags = f.below(2) ? f.below(12) : item->flags;
    f.arguments(item);
});
