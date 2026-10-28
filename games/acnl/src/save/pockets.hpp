// A player's pockets: 16 item slots and the wallet.
#pragma once

#include "core/encrypted_int.hpp"
#include "item/item.hpp"

struct Pockets {
    static constexpr u32 SLOTS = 16;

    Item items[SLOTS];
    u8 slot_locked[SLOTS];      // a locked slot's bells are not counted (nor spent)
    u8 unknown_050[0x338 - 0x50];
    EncryptedInt wallet;        // bells, up to 99,999

    // The item in a slot, or the empty item if the slot holds something pockets do not accept.
    const Item &item_at(u32 slot) const;
    s32 find_empty_slot() const;  // -1 when full
    u32 total_bells() const;      // the wallet and the bags of bells
    void pay(u32 bells);
};
GUEST_OFFSET(Pockets, wallet, 0x338);

// Still recompiled code:
inline constexpr guest::Function<0x002bf9cc, bool(Pockets &self, u32 slot, const Item &item, u32 unknown, u32 unknown_stack)>
    pockets_set_slot;
inline constexpr guest::Function<0x002bf814, bool(Pockets &self, const Item &item, u32 unknown, u32 unknown_r3)>
    pockets_add;
