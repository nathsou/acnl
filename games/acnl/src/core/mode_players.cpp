// Which player a mode (a place in the game) belongs to.
#include "guest/guest.hpp"
#include "save/save_data.hpp"

using guest::gptr;

u32 owner_of_mode(u32 mode);
gptr<u8> page_address(gptr<u8> base, u32 index);

namespace {

inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fae84, gptr<void>()> get_data_base;
inline constexpr guest::Function<0x002fb7e8, gptr<SavePlayer>(gptr<SavePlayer> players, u32 index)> player_at;
inline constexpr guest::Function<0x002ff8b0, u32(u32 index)> slot_value;

constexpr u32 FLAG_OWNED = 0x80;         // the mode has an owner in the list of modes
constexpr u32 FLAG_PAGE_MODE = 0x2000;   // the mode has a page that says its player
constexpr u32 NO_MODE = 0xa5;            // (the tables have this many entries)
constexpr u32 FIRST_PAGE_MODE = 0x56;
constexpr u32 PAGE_MASK = 0xff;
constexpr u32 OWNER_COUNT = 4;
constexpr u32 PAGES_FROM_DATA_BASE = 0x6ae38;  // where the pages start, from what get_data_base gives
constexpr u32 MAIN_SLOT_INDEX = 4;

// The player slot of each owner of a mode.
inline guest::global<u8[OWNER_COUNT], 0x0085f7a0> owner_slots;

gptr<SavePlayer> players_of(gptr<void> base) {
    return guest::addr_of(save_data_of_base(base.addr())->players[0]);
}

// The signed byte of the mode's page (negative: none).
s32 page_byte_of_mode(gptr<void> base, u32 mode) {
    gptr<u8> pages(base.addr() + PAGES_FROM_DATA_BASE);
    return s8(*page_address(pages, (mode - FIRST_PAGE_MODE) & PAGE_MASK));
}

}  // namespace

// The player the mode belongs to: its owner's when the mode has an owner in the list, the one named on its page for page
// modes, none for the other modes.
gptr<SavePlayer> player_of_mode(u32 mode) {
    if (table_entry_has_all_bits(FLAG_OWNED, mode) != 0) {
        u32 owner = owner_of_mode(mode);
        u32 slot = owner < OWNER_COUNT ? owner_slots[owner] : 0;
        return player_at(players_of(get_data_base()), slot);
    }
    if (table_entry_has_all_bits(FLAG_PAGE_MODE, mode) != 0) {
        gptr<void> base = get_data_base();
        s32 slot = page_byte_of_mode(base, mode);
        if (slot >= 0) {
            return player_at(players_of(get_data_base()), u32(slot) & PAGE_MASK);
        }
    }
    return nullptr;
}
GUEST_EXPORT(0x006f86a4, player_of_mode);

// Whether the player of the mode's page is the one of the main slot (false for modes without such a page).
bool mode_page_player_is_main_slot(u32 mode) {
    if (mode == NO_MODE || table_entry_has_all_bits(FLAG_PAGE_MODE, mode) == 0) {
        return false;
    }
    s32 slot = page_byte_of_mode(get_data_base(), mode);
    return slot >= 0 && (u32(slot) & PAGE_MASK) == slot_value(MAIN_SLOT_INDEX);
}
GUEST_EXPORT(0x005b4018, mode_page_player_is_main_slot);
