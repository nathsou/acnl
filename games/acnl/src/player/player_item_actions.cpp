// Small actions on the players' items: adding to the catalog of seen items, taking off the shoes (worn slot 7).
#include "item/item_slots.hpp"
#include "save/player.hpp"

gptr<SavePlayer> player_of_slot_index(u32 index);
gptr<SavePlayer> player_of_slot_index_unreserved(u32 index);
gptr<SavePlayer> get_current_player();
gptr<Item> slot_7_if_class_7(ItemSlots &self);
u32 item_data_byte_0f(const Item &item);

namespace {

constexpr u32 WORN_ITEMS_OFFSET = 0xa;  // the player's row of worn items (ItemSlots)
constexpr u32 SHOES_SLOT = 7;
constexpr u32 SEEN_FORCED = 1;

inline constexpr guest::Function<0x002fc900, u32()> mode_above_1;

// An object that belongs to a player slot (0 to 3 for the local players).
struct PlayerSlotOwner {
    u8 unknown_000[0x1ac];
    u8 player_slot;
};
GUEST_OFFSET(PlayerSlotOwner, player_slot, 0x1ac);

gptr<ItemSlots> worn_items(gptr<SavePlayer> player) {
    return (player.cast<u8>() + WORN_ITEMS_OFFSET).cast<ItemSlots>();
}

}  // namespace

// Adds the item to the catalog of items the owner's player has seen (with force, so that every category counts).
void register_item_for_owner(gptr<PlayerSlotOwner> owner, const Item &item) {
    gptr<SavePlayer> player = player_of_slot_index(owner->player_slot);
    if (player == nullptr) {
        return;
    }
    register_seen_item(player->pockets.items_seen, item, SEEN_FORCED);
}
GUEST_EXPORT(0x0065037c, register_item_for_owner);
GUEST_EXPORT(0x00653854, register_item_for_owner);
GUEST_EXPORT(0x00657824, register_item_for_owner);

// The worn item of the owner's player in the shoes slot when it has the shoes' class, else the empty item.
gptr<Item> worn_shoes_of_owner(PlayerSlotOwner &owner) {
    gptr<SavePlayer> player = player_of_slot_index(owner.player_slot);
    if (player == nullptr) {
        return empty_item.ptr();
    }
    return slot_7_if_class_7(*worn_items(player));
}
GUEST_EXPORT(0x00762370, worn_shoes_of_owner);

// Whether the owner's player has no room in the pockets (false without a player).
bool owner_pockets_are_full(PlayerSlotOwner &owner) {
    gptr<SavePlayer> player = player_of_slot_index(owner.player_slot);
    return player != nullptr && player->pockets.find_empty_slot() < 0;
}
GUEST_EXPORT(0x007621d0, owner_pockets_are_full);

// Whether the item is in the catalog of items the owner's player has had in the pockets (false without a player).
bool owner_has_seen_item(PlayerSlotOwner &owner, const Item &item) {
    gptr<SavePlayer> player = player_of_slot_index(owner.player_slot);
    return player != nullptr && player->pockets.items_seen.contains(item);
}
GUEST_EXPORT(0x00762324, owner_has_seen_item);

// Takes off the shoes when their wear class index (ItemData byte 0x0f) is the one given.
template <u32 WEAR_INDEX>
void take_off_shoes_with_index(u32 player_slot) {
    gptr<SavePlayer> player = player_of_slot_index(player_slot);
    if (player == nullptr) {
        return;
    }
    gptr<ItemSlots> worn = worn_items(player);
    if (item_data_byte_0f(*slot_7_if_class_7(*worn)) == WEAR_INDEX) {
        worn->slots[SHOES_SLOT] = *empty_item;
    }
}
GUEST_EXPORT(0x006576f8, take_off_shoes_with_index<0x10>);
GUEST_EXPORT(0x0065e058, take_off_shoes_with_index<0xe>);

// Whether the current player (the first local player when the mode is above 1) has bit 7 of its byte at 0x5712 set.
bool current_player_flag_5712_bit7() {
    gptr<SavePlayer> player = mode_above_1() != 0 ? player_of_slot_index_unreserved(0) : get_current_player();
    if (player == nullptr) {
        return false;
    }
    return (player->flags_5712 >> 7) != 0;
}
GUEST_EXPORT(0x00695880, current_player_flag_5712_bit7);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static void fuzz_register(guest::Fuzz &f) {
    auto owner = f.object<PlayerSlotOwner>();
    owner->player_slot = u8(f.pick<u32>({0, 1, 2, 3, 4, f.number()}));
    auto item = f.object<Item>();
    item->id = u16(f.pick<u32>({Item::EMPTY, Item::FIRST_ITEM, Item::FIRST_ITEM + f.below(Item::ITEM_COUNT), f.number()}));
    f.arguments(owner, item);
}
GUEST_FUZZ(0x0065037c, 100, fuzz_register);
GUEST_FUZZ(0x00653854, 100, fuzz_register);
GUEST_FUZZ(0x00657824, 100, fuzz_register);

static void fuzz_player_slot(guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 5, f.number()}));
}
GUEST_FUZZ(0x00762370, 100, [](guest::Fuzz &f) {
    auto owner = f.object<PlayerSlotOwner>();
    owner->player_slot = u8(f.pick<u32>({0, 1, 2, 3, 4, 7}));
    f.arguments(owner);
});
GUEST_FUZZ(0x007621d0, 100, [](guest::Fuzz &f) {
    auto owner = f.object<PlayerSlotOwner>();
    owner->player_slot = u8(f.pick<u32>({0, 1, 2, 3, 4, 7}));
    f.arguments(owner);
});
GUEST_FUZZ(0x00762324, 150, fuzz_register);
GUEST_FUZZ(0x006576f8, 100, fuzz_player_slot);
GUEST_FUZZ(0x0065e058, 100, fuzz_player_slot);
GUEST_FUZZ(0x00695880, 100, [](guest::Fuzz &f) { f.arguments(); });
