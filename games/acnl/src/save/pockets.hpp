// A player's pockets: 16 item slots and the wallet.
#pragma once

#include "core/encrypted_int.hpp"
#include "item/item.hpp"
#include "item/item_bit_set.hpp"

struct Pockets {
    static constexpr u32 SLOTS = 16;
    static constexpr u32 WALLET_MAX = 99'999;

    Item items[SLOTS];
    u8 slot_locked[SLOTS];      // a locked slot's bells are not counted (nor spent)
    ItemBitSet items_seen;      // the items that were in the pockets (for the catalog)
    EncryptedInt wallet;        // bells, up to WALLET_MAX

    // The item in a slot, or the empty item if the slot holds something pockets do not accept.
    const Item &item_at(u32 slot) const;
    s32 find_empty_slot() const;  // -1 when full
    u32 total_bells() const;      // the wallet and the bags of bells
    void pay(u32 bells);
    u32 free_slot_count() const;
    // The item of a slot (the empty item if pockets do not accept it); the slot's lock byte goes to locked_out if given.
    const Item &item_with_lock(s32 slot, gptr<u8> locked_out) const;
    u8 lock_of(u32 slot) const;  // 0 for slots out of range
    bool has_unlocked_item_of_category_98() const;

    // Puts a copy of the item (cleaned up with Item::sanitize) in a slot with the lock byte, writing the stored copy to
    // `stored_out` if given; false for slots out of range and items that do not pass.
    bool store_item(u32 slot, const Item &item, u32 lock, gptr<Item> stored_out);
    bool store_in_first_free(const Item &item, u32 lock, gptr<Item> stored_out);
    // The same for the first empty slot, and for a given slot; with `record` the items also go to the seen set. Both
    // check afterwards whether the current player's pockets now hold a category 0x98 item and count that.
    bool add(const Item &item, u32 lock, bool record);
    bool set_slot(u32 slot, const Item &item, u32 lock, bool record);
    // How many more bells fit: the room left in the wallet, in the bags of bells, in the free slots (as new bags), and
    // in `extra_bags` more bags.
    u32 bells_room(u32 extra_bags) const;
    // Adds bells (as many as fit): to the wallet, or when it would overflow, all bags are emptied into it and the
    // excess goes back out as bags.
    void add_bells(u32 bells);
    void merge_bell_bags();  // empties the bags into the wallet; what does not fit in it goes back as new bags
    // Adds an item; when the pockets have no room, merges the bags of bells first and tries again.
    bool add_item_merging_bags(const Item &item, u32 unknown);
};
GUEST_OFFSET(Pockets, items_seen, 0x50);
GUEST_OFFSET(Pockets, wallet, 0x338);

bool register_seen_item(ItemBitSet &set, const Item &item, u32 force);

// (the functions below are the members above, called by address)
// Still recompiled code:
inline constexpr guest::Function<0x002bf9cc, bool(Pockets &self, u32 slot, const Item &item, u32 unknown, u32 unknown_stack)>
    pockets_set_slot;
inline constexpr guest::Function<0x002bf814, bool(Pockets &self, const Item &item, u32 unknown, u32 unknown_r3)>
    pockets_add;
