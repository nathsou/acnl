// Putting items into the pockets: into a given slot or the first free one. Everything that gives the player an item
// goes through these.
#include "core/random.hpp"
#include "save/player.hpp"
#include "save/pockets.hpp"

namespace {

constexpr u32 LOCK_SPECIAL = 2;           // the lock byte of items whose category flags ask for it
constexpr u8 CATEGORY_FLAG_BYTE_2_BIT_7 = 1 << 7;
constexpr u16 FLAGS_BIT_0 = 1;
constexpr u8 TIME_FROZEN = 3;
constexpr u32 COUNTER_KIND_CATEGORY_98 = 0x20;
constexpr s32 COUNTER_STEP = 1;

inline guest::global<gptr<SavePlayer>, 0x00aaf14c> current_player;

inline constexpr guest::Function<0x002fc20c, Item &(Item &self)> construct_empty_item;
inline constexpr guest::Function<0x002fb94c, gptr<SavePlayer>()> get_current_player;
inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;
inline constexpr guest::Function<0x002fd068, gptr<void>()> get_counter_block;
inline constexpr guest::Function<0x006b7380, void(gptr<void> counters, s32 amount)> add_to_current_counter_part;
inline constexpr guest::Function<0x005c6760, void()> f_005c6760;
inline constexpr guest::Function<0x0024b448, void(gptr<void> counters, u32 kind, s32 delta)> add_to_player_counter;

// What follows a successful store into the current player's pockets.
void note_store(Pockets &pockets, const Item &stored, const Item &requested, bool record) {
    if (record) {
        register_seen_item(pockets.items_seen, stored, 0);
        register_seen_item(pockets.items_seen, requested, 0);
    }
    gptr<SavePlayer> player = *current_player;
    if (player == nullptr || &player->pockets != &pockets) {
        return;
    }
    f_005c6760();
    if (read_global_object_byte() == TIME_FROZEN || !pockets.has_unlocked_item_of_category_98()) {
        return;
    }
    gptr<SavePlayer> current = get_current_player();
    if (current != nullptr) {
        add_to_player_counter(guest::addr_of(current->block_8ae0[0]).cast<void>(), COUNTER_KIND_CATEGORY_98, COUNTER_STEP);
    }
}

}  // namespace

bool Pockets::store_item(u32 slot, const Item &item, u32 lock, gptr<Item> stored_out) {
    if (slot >= SLOTS) {
        return false;
    }
    guest::StackObject<Item> copy_object;  // (guest functions need the item in guest memory)
    Item &copy = *copy_object;
    copy = item;
    if (copy.is_bell_bag()) {
        gptr<SavePlayer> player = *current_player;
        if (player != nullptr && &player->pockets == this && (copy.flags & FLAGS_BIT_0) != 0) {
            add_to_current_counter_part(get_counter_block(), s32(copy.price()));
        }
        copy.flags &= ~FLAGS_BIT_0;
    }
    if (!copy.sanitize()) {
        return false;
    }
    gptr<u8> category_entry = copy.category_flags();
    bool special = category_entry != nullptr && (category_entry[2] & CATEGORY_FLAG_BYTE_2_BIT_7) != 0;
    items[slot] = copy;
    slot_locked[slot] = special ? u8(LOCK_SPECIAL) : u8(lock);
    if (stored_out != nullptr) {
        *stored_out = copy;
    }
    return true;
}
GUEST_EXPORT(0x00322e98, Pockets::store_item);

bool Pockets::store_in_first_free(const Item &item, u32 lock, gptr<Item> stored_out) {
    for (u32 slot = 0; slot < SLOTS; slot++) {
        if (item_at(slot).is_empty()) {
            return store_item(slot, item, lock, stored_out);
        }
    }
    return false;
}
GUEST_EXPORT(0x00322db8, Pockets::store_in_first_free);

bool Pockets::add(const Item &item, u32 lock, bool record) {
    guest::StackObject<Item> stored;
    construct_empty_item(*stored);
    if (!store_in_first_free(item, lock, stored.ptr())) {
        return false;
    }
    note_store(*this, *stored, item, record);
    return true;
}
GUEST_EXPORT(0x002bf814, Pockets::add);

bool Pockets::set_slot(u32 slot, const Item &item, u32 lock, bool record) {
    guest::StackObject<Item> stored;
    construct_empty_item(*stored);
    if (!store_item(slot, item, lock, stored.ptr())) {
        return false;
    }
    note_store(*this, *stored, item, record);
    return true;
}
GUEST_EXPORT(0x002bf9cc, Pockets::set_slot);

// Puts a cleaned-up copy of the item in the place of a list of 40 items; false (and no change) when the index is out of
// range or the item does not pass Item::sanitize.
bool store_sanitized_item(gptr<Item> list, u32 index, const Item &item) {
    constexpr u32 LIST_SIZE = 40;
    if (index >= LIST_SIZE) {
        return false;
    }
    guest::StackObject<Item> copy;
    *copy = item;
    if (!copy->sanitize()) {
        return false;
    }
    list[index] = *copy;
    return true;
}
GUEST_EXPORT(0x002d49d8, store_sanitized_item);

// Whether the player's pockets hold an unlocked item of category 0x98.
bool player_has_unlocked_item_of_category_98(SavePlayer &player) {
    return player.pockets.has_unlocked_item_of_category_98();
}
GUEST_EXPORT(0x0023e1e0, player_has_unlocked_item_of_category_98);
