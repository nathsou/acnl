// More edits of an item's flags (the two top bits and the 4-bit group in bits 10-13 next to them), and a few rows
// of items of the player.
#include "item/item.hpp"
#include "save/player.hpp"

namespace {

constexpr u32 GROUP_SHIFT = 10;
constexpr u32 GROUP_MASK = 0xf;
constexpr u32 GROUP_LIMIT = 0xd;
constexpr u32 TOP_VALUE_LIMIT = 4;
constexpr u8 CATEGORY_29 = 0x29;
constexpr u32 STACK_LIMIT = 4;
constexpr u8 WEAR_CLASS_INDEX_10 = 0x10;
constexpr u8 WEAR_CLASS_INDEX_LIMIT = 0x32;
constexpr u32 ROW_B4_COUNT = 0xb4;
constexpr u32 ROW_168_COUNT = 0x168;

gptr<Item> fuzz_item(guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(4) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    return item;
}

// Stores the low 14 bits and keeps the two top bits of the flags.
void store_low_flags(Item &item, u32 value) {
    item.flags = u16((value & ~u32(Item::FLAGS_TOP_BITS)) | (item.flags & Item::FLAGS_TOP_BITS));
}

}  // namespace

// Stores a value in the two top bits of the flags (cleared first, even when the value is too large); nothing for a
// null item.
void set_item_flags_top_value(gptr<Item> item, u32 value) {
    if (item == nullptr) {
        return;
    }
    item->flags = u16(item->flags & ~Item::FLAGS_TOP_BITS);
    if (value < TOP_VALUE_LIMIT) {
        item->flags = u16(item->flags | (value << Item::FLAGS_TOP_SHIFT));
    }
}
GUEST_EXPORT(0x006b9da4, set_item_flags_top_value);
GUEST_FUZZ(0x006b9da4, 100, [](guest::Fuzz &f) {
    f.arguments(f.below(5) != 0 ? fuzz_item(f) : gptr<Item>(0u), f.pick<u32>({0, 1, 3, 4, f.number()}));
});

// Clears the two top bits of the flags of an item of kind 11.
void clear_kind_11_flags_top(Item &item) {
    gptr<ItemData> data = item.data();
    if (data && data->has_kind_11()) {
        item.flags = u16(item.flags & ~Item::FLAGS_TOP_BITS);
    }
}
GUEST_EXPORT(0x006b9df8, clear_kind_11_flags_top);
GUEST_FUZZ(0x006b9df8, 100, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

// Stores group * 1024 + value in the low flags of an item with a valid value 6.
bool set_item_group_and_value(Item &item, u32 group, u32 value) {
    if (!item.has_valid_value_06()) {
        return false;
    }
    store_low_flags(item, value + (group << GROUP_SHIFT));
    return true;
}
GUEST_EXPORT(0x006ba0cc, set_item_group_and_value);
GUEST_FUZZ(0x006ba0cc, 100, [](guest::Fuzz &f) { f.arguments(fuzz_item(f), f.below(16), f.number()); });

// For an item of category 0x29: stores count - 1 (at most 4) in the low flags.
bool set_category_29_count(Item &item, u32 count) {
    gptr<ItemData> data = item.data();
    if (!data || data->category != CATEGORY_29 || count > STACK_LIMIT) {
        return false;
    }
    store_low_flags(item, count - 1);
    return true;
}
GUEST_EXPORT(0x006bb230, set_category_29_count);
GUEST_FUZZ(0x006bb230, 100, [](guest::Fuzz &f) { f.arguments(fuzz_item(f), f.pick<u32>({0, 1, 4, 5, f.number()})); });

// Keeps the item's group (when it is at most 13) and stores a new value with it.
bool set_item_value_keeping_group(Item &item, u32 value) {
    u32 group = 0;
    if (item.has_valid_value_06()) {
        group = (item.flags >> GROUP_SHIFT) & GROUP_MASK;
        if (group > GROUP_LIMIT) {
            group = 0;
        }
    }
    if (!item.has_valid_value_06()) {
        return false;
    }
    store_low_flags(item, value + (group << GROUP_SHIFT));
    return true;
}
GUEST_EXPORT(0x006bb358, set_item_value_keeping_group);
GUEST_FUZZ(0x006bb358, 100, [](guest::Fuzz &f) { f.arguments(fuzz_item(f), f.number()); });

// For an item whose wear class index is 0x10: adds one to the low flags (counting from zero when it is any other
// item); returns the new value, 0 for items without data or of another class.
u32 increment_item_stack(Item &item) {
    gptr<ItemData> data = item.data();
    if (!data || data->wear_class_index >= WEAR_CLASS_INDEX_LIMIT || data->wear_class_index != WEAR_CLASS_INDEX_10) {
        return 0;
    }
    u32 next = (item.flags & ~Item::FLAGS_TOP_BITS) + 1;
    store_low_flags(item, next);
    return next;
}
GUEST_EXPORT(0x006bb6ec, increment_item_stack);
GUEST_FUZZ(0x006bb6ec, 100, [](guest::Fuzz &f) { f.arguments(fuzz_item(f)); });

// Puts the item and the value in the first free listed slot of the player; nothing when all three are taken.
void add_listed_item(SavePlayer &player, const Item &item, u32 value) {
    for (u32 i = 0; i < SavePlayer::LISTED_ITEM_COUNT; i++) {
        if (!player.listed_items[i].item.is_item()) {
            copy_item(player.listed_items[i].item, item);
            player.listed_items[i].value = u16(value);
            return;
        }
    }
}
GUEST_EXPORT(0x006bd3e4, add_listed_item);
GUEST_FUZZ(0x006bd3e4, 100, [](guest::Fuzz &f) {
    auto player = f.object<SavePlayer>();
    for (u32 i = 0; i < SavePlayer::LISTED_ITEM_COUNT; i++) {
        player->listed_items[i].item.id = f.below(2) != 0 ? Item::EMPTY : u16(Item::FIRST_ITEM + f.below(16));
    }
    f.arguments(player, f.object<Item>(), f.number());
});

// Puts an empty item in the first free listed slot of the player and clears its value; whether there was one.
bool reserve_listed_item(SavePlayer &player) {
    for (u32 i = 0; i < SavePlayer::LISTED_ITEM_COUNT; i++) {
        if (!player.listed_items[i].item.is_item()) {
            guest::StackObject<Item> empty;
            construct_item(*empty, Item::EMPTY);
            copy_item(player.listed_items[i].item, *empty);
            player.listed_items[i].value = 0;
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x006bd450, reserve_listed_item);
GUEST_FUZZ(0x006bd450, 100, [](guest::Fuzz &f) {
    auto player = f.object<SavePlayer>();
    for (u32 i = 0; i < SavePlayer::LISTED_ITEM_COUNT; i++) {
        player->listed_items[i].item.id = f.below(2) != 0 ? Item::EMPTY : u16(Item::FIRST_ITEM + f.below(16));
    }
    f.arguments(player);
});

// Takes the amount off the player's counter at 0x6b94; the counter becomes 0 when it holds less.
void subtract_from_counter_6b94(SavePlayer &player, u32 amount) {
    if (player.counter_6b94.get() < amount) {
        player.counter_6b94.set(0);
        return;
    }
    player.counter_6b94.subtract(amount);
}
GUEST_EXPORT(0x006bdd98, subtract_from_counter_6b94);
GUEST_FUZZ(0x006bdd98, 100, [](guest::Fuzz &f) {
    auto player = f.object<SavePlayer>();
    player->counter_6b94.set(f.below(100));
    f.arguments(player, f.below(120));
});

// Empties a row of items.
void clear_items_b4(gptr<Item> items) {
    for (u32 i = 0; i < ROW_B4_COUNT; i++) {
        copy_item(items[i], *empty_item);
    }
}
GUEST_EXPORT(0x006ccd54, clear_items_b4);
GUEST_FUZZ(0x006ccd54, 50, [](guest::Fuzz &f) { f.arguments(f.allocate(ROW_B4_COUNT * sizeof(Item)).cast<Item>()); });

void clear_items_168(gptr<Item> items) {
    for (u32 i = 0; i < ROW_168_COUNT; i++) {
        copy_item(items[i], *empty_item);
    }
}
GUEST_EXPORT(0x006ccfb0, clear_items_168);
GUEST_FUZZ(0x006ccfb0, 50, [](guest::Fuzz &f) { f.arguments(f.allocate(ROW_168_COUNT * sizeof(Item)).cast<Item>()); });
