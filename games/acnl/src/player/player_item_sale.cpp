// Turning a player's belongings into bells in the bank.
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "item/item_slots.hpp"
#include "save/player.hpp"

using guest::gptr;

gptr<Item> slot_7_if_class_7(ItemSlots &self);

namespace {

constexpr u32 WORN_ITEMS_OFFSET = 0xa;  // the player's row of worn items (ItemSlots)
constexpr u32 SHOES_SLOT = 7;
constexpr u32 NO_LOCK = 0;

gptr<ItemSlots> worn_items(gptr<SavePlayer> player) {
    return (player.cast<u8>() + WORN_ITEMS_OFFSET).cast<ItemSlots>();
}

}  // namespace

// Empties the worn shoes slot and the pockets of the player, putting the reduced price of the shoes (unless they are in
// id set a) and of each pocket item that has category flag 4 into the bank (up to its maximum). The pocket items without
// the flag are cleared without payment. Returns the bells paid.
u32 sell_shoes_and_pockets_to_bank(SavePlayer &player) {
    u32 paid = 0;
    gptr<ItemSlots> worn = worn_items(guest::addr_of(player));
    gptr<Item> shoes = slot_7_if_class_7(*worn);
    if (!shoes->is_in_id_set_a()) {
        s32 price = s32(slot_7_if_class_7(*worn)->reduced_price());
        if (price > 0) {
            player.bank.add(u32(price), SavePlayer::BANK_MAX);
            paid = u32(price);
        }
    }
    worn->slots[SHOES_SLOT] = *empty_item;
    for (u32 slot = 0; slot < Pockets::SLOTS; slot++) {
        const Item &item = player.pockets.items[slot];
        if (!item.is_empty() && item.has_category_flag_4()) {
            s32 price = s32(item.reduced_price());
            if (price > 0) {
                player.bank.add(u32(price), SavePlayer::BANK_MAX);
                paid += u32(price);
            }
        }
        player.pockets.store_item(slot, *empty_item, NO_LOCK, gptr<Item>(0u));
    }
    return paid;
}
GUEST_EXPORT(0x006bced4, sell_shoes_and_pockets_to_bank);
