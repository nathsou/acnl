// A player's pockets: 16 item slots and the wallet.
#pragma once

#include "core/encrypted_int.hpp"
#include "item/item.hpp"

struct Pockets {
    static constexpr u32 SLOTS = 16;
    static constexpr u32 WALLET_MAX = 99'999;

    Item items[SLOTS];
    u8 slot_locked[SLOTS];      // a locked slot's bells are not counted (nor spent)
    u8 unknown_050[0x338 - 0x50];
    EncryptedInt wallet;        // bells, up to WALLET_MAX

    // The item in a slot, or the empty item if the slot holds something pockets do not accept.
    const Item &item_at(u32 slot) const;
    s32 find_empty_slot() const;  // -1 when full
    u32 total_bells() const;      // the wallet and the bags of bells
    void pay(u32 bells);
    u32 free_slot_count() const;
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
GUEST_OFFSET(Pockets, wallet, 0x338);

// Still recompiled code:
inline constexpr guest::Function<0x002bf9cc, bool(Pockets &self, u32 slot, const Item &item, u32 unknown, u32 unknown_stack)>
    pockets_set_slot;
inline constexpr guest::Function<0x002bf814, bool(Pockets &self, const Item &item, u32 unknown, u32 unknown_r3)>
    pockets_add;
