// Sorting items the way the game's menus do: by a table that gives each item its place in the order.
#include "item/item.hpp"

namespace {

// The global at 0x00a18690 points to tables the menus use; one of them orders the items.
struct MenuTables {
    u8 unknown_000[0xd0];
    gptr<u16> item_order;  // one entry per item number from the first item, lower entries come first
};
GUEST_OFFSET(MenuTables, item_order, 0xd0);
inline guest::global<MenuTables, 0x00a18690> menu_tables;

}  // namespace

// Sorts the items by their entry in the order table (a selection sort that swaps the items of a pair when the later
// one comes first; items with equal entries keep their places).
void sort_items_by_menu_order(gptr<Item> items, s32 count) {
    gptr<u16> order = menu_tables->item_order;
    for (s32 i = 0; i < count - 1; i++) {
        u16 key = order[items[i].number() - Item::FIRST_ITEM];
        for (s32 j = i + 1; j < count; j++) {
            if (order[items[j].number() - Item::FIRST_ITEM] >= key) {
                continue;
            }
            guest::StackObject<Item> held;
            *held = items[i];
            items[i] = items[j];
            items[j] = *held;
            key = order[items[i].number() - Item::FIRST_ITEM];
        }
    }
}
GUEST_EXPORT(0x001afb58, sort_items_by_menu_order);
