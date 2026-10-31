#include "item/item.hpp"
#include "save/save_data.hpp"

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
    return table + category * CATEGORY_FLAGS_SIZE;
}
GUEST_EXPORT(0x00536214, Item::category_flags);

bool Item::has_category_flag_4() const {
    if ((id & KIND_MASK) == KIND_2 << KIND_SHIFT) {
        return true;
    }
    gptr<u8> flags = category_flags();
    return flags && (flags[1] >> 4 & 1);  // (what bit 4 of the second byte means is not known yet)
}
GUEST_EXPORT(0x00769840, Item::has_category_flag_4);

u32 ItemData_base_price(const ItemData &d) { return d.base_price(); }
GUEST_EXPORT(0x007486fc, ItemData_base_price);

constexpr u32 PRICE_DIVISOR_FOR_REFERENCE = 10;  // matching the reference item: a tenth of the price
constexpr u32 MIN_STACK = 2, MAX_STACK = 9;      // stack counts outside this range are worth nothing

static s32 offset_in_category(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data) {
        return -1;
    }
    u32 category = data->category < Item::NO_CATEGORY ? data->category : 0;
    return s32(item.number() - category_info(category)->first_item_number);
}

// The count of a stack: the flags below the top bits plus one. Counts outside 2-9 are worth nothing.
u32 Item::valid_stack_count() const {
    u32 count = (flags & ~FLAGS_TOP_BITS) + 1;  // stored minus one
    return count >= MIN_STACK && count <= MAX_STACK ? count : 0;
}

// The base price, with two rules for a few categories: a tenth of it when the item sits at the same position within
// its category as the reference item, and for stacks, times the stack's count.
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
    bool stack = category == CATEGORY_STACK_75 || category == CATEGORY_STACK_76;
    bool by_reference = category == CATEGORY_PRICED_BY_REFERENCE_33 || category == CATEGORY_PRICED_BY_REFERENCE_34;
    if (!by_reference && !stack) {
        return price;
    }

    const Item &reference = (*save_data)->reference_item;
    if (offset_in_category(*this) == offset_in_category(reference)) {
        price = s32(price) / PRICE_DIVISOR_FOR_REFERENCE;
    }
    if (!stack) {
        return price;
    }

    return valid_stack_count() * price;
}
GUEST_EXPORT(0x00305630, Item::price);

// Map objects (kind 0) and items (kind 1) get their default flags from their kind's initializer, called through a
// table of pointers to member functions in the game's data.
inline guest::global<guest::MemberFunctionPointer[2], 0x0088e648> kind_initializers;

Item &construct_item(Item &self, u16 id) {
    self.id = id & Item::NUMBER_MASK;
    self.flags = 0;
    ItemKind kind = self.kind();
    if (kind <= KIND_ITEM) {
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
