// Where a mode of the game (the byte read_global_byte_2 returns) sits in the game's list of modes.
#include "guest/guest.hpp"

s32 flagged_mode_ordinal(u32 mode);

namespace {

inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fe450, gptr<u8>(u32 index)> table_a82b90_entry;
inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;

constexpr u32 LIST_SIZE = 0x2a;
inline guest::global<u8[LIST_SIZE], 0x00952718> mode_list;  // the modes at positions 2-0x1d and 0x20-0x29
// Two tables of the same size that follow it, indexed by position too.
inline guest::global<u8[LIST_SIZE], 0x00952742> room_list;   // 0-5 for the positions 2-0x19
inline guest::global<u8[LIST_SIZE], 0x0095276c> owner_list;  // 0-3 for the positions 2-0x19

// The flags of the mode table (the table of table_entry_has_all_bits) that decide which part of the list to search.
constexpr u32 FLAG_20 = 0x20;  // modes with it take position 1
constexpr u32 FLAG_80 = 0x80;
constexpr u32 FLAG_2000 = 0x2000;
constexpr u32 FLAG_80000 = 0x80000;
constexpr u32 FLAG_100000 = 0x100000;

constexpr u32 POSITION_FLAG_20 = 1;
constexpr u32 POSITION_FLAG_80000 = 0x1f;
constexpr u32 SPECIAL_MODE = 0x68;  // has a position of its own
constexpr u32 POSITION_SPECIAL_MODE = 0x1e;
constexpr u32 NOT_LISTED = 0;

// The positions of each flag's part of the list
constexpr u32 FLAG_80_FIRST = 2;  // positions 2-0x19: 4 owners with 6 rooms each, it seems
constexpr u32 FLAG_80_END = 0x1a;
constexpr u32 FLAG_2000_FIRST = 0x1a;
constexpr u32 FLAG_2000_END = 0x1e;
constexpr u32 FLAG_100000_FIRST = 0x20;
constexpr u32 OWNED_FIRST_POSITION = FLAG_80_FIRST;
constexpr u32 OWNED_POSITION_COUNT = FLAG_80_END - FLAG_80_FIRST;
constexpr u32 FLAG_4000_MODE_COUNT = 6;
constexpr u32 NO_OWNER = 4;
constexpr u32 FLAG_4000 = 0x4000;  // the modes 0x92-0x97 (six more rooms) have it
constexpr u32 FIRST_FLAG_4000_MODE = 0x92;
constexpr u32 NO_ROOM = 6;

// The position of the mode in the list between `first` and `end`, or NOT_LISTED.
u32 find_in_list(u32 mode, u32 first, u32 end) {
    for (u32 position = first; position < end; position++) {
        if (mode_list[position] == mode) {
            return position;
        }
    }
    return NOT_LISTED;
}

}  // namespace

// The position of the mode in the list of modes (1 for the modes with flag 0x20; 0 for modes that are not listed).
u32 list_position_of_mode(u32 mode) {
    if (table_entry_has_all_bits(FLAG_20, mode) != 0) {
        return POSITION_FLAG_20;
    }
    if (table_entry_has_all_bits(FLAG_80, mode) != 0) {
        return find_in_list(mode, FLAG_80_FIRST, FLAG_80_END);
    }
    if (table_entry_has_all_bits(FLAG_2000, mode) != 0) {
        return find_in_list(mode, FLAG_2000_FIRST, FLAG_2000_END);
    }
    if (mode == SPECIAL_MODE) {
        return POSITION_SPECIAL_MODE;
    }
    if (table_entry_has_all_bits(FLAG_100000, mode) != 0) {
        return find_in_list(mode, FLAG_100000_FIRST, LIST_SIZE);
    }
    if (table_entry_has_all_bits(FLAG_80000, mode) != 0) {
        return POSITION_FLAG_80000;
    }
    return NOT_LISTED;
}
GUEST_EXPORT(0x006f9638, list_position_of_mode);

// The owner (0-3) of the position the mode has in the list, NO_OWNER for modes without an owned position.
u32 owner_of_mode(u32 mode) {
    u32 position = list_position_of_mode(mode);
    if (position - OWNED_FIRST_POSITION < OWNED_POSITION_COUNT) {
        return owner_list[position];
    }
    return NO_OWNER;
}
GUEST_EXPORT(0x006fa40c, owner_of_mode);

// The room (0-5) of a mode: by its position when it is an owned one, by its number (from 0x92) for the six modes with flag 0x4000,
// NO_ROOM for all others.
u32 room_of_mode(u32 mode) {
    if (table_entry_has_all_bits(FLAG_80, mode) != 0) {
        return room_list[list_position_of_mode(mode)];
    }
    if (table_entry_has_all_bits(FLAG_4000, mode) != 0) {
        u32 room = mode - FIRST_FLAG_4000_MODE;
        if (room < FLAG_4000_MODE_COUNT) {
            return room;
        }
    }
    return NO_ROOM;
}
GUEST_EXPORT(0x006fb030, room_of_mode);

namespace {

constexpr u32 FLAG_40 = 0x40;
constexpr u32 FLAG_2000_MODE = 0x2000;
constexpr u32 ENTRY_FLAGS_OFFSET = 0x44;
constexpr u32 ENTRY_FLAG_20 = 0x20;

}  // namespace

// Whether the current mode has flag 0x80, 0x4000 or 0x2000 (the owned and the six more room modes), or has flag 0x40
// and its entry in the table at 0x00a82b90 (by the mode's ordinal among the flag 0x40 modes) has flag 0x20.
bool current_mode_is_room_like() {
    u32 mode = read_global_byte_2();
    gptr<u8> entry = table_a82b90_entry(flagged_mode_ordinal(mode));
    if (table_entry_has_all_bits(FLAG_80, mode) != 0 || table_entry_has_all_bits(FLAG_4000, mode) != 0 ||
        table_entry_has_all_bits(FLAG_2000_MODE, mode) != 0) {
        return true;
    }
    return table_entry_has_all_bits(FLAG_40, mode) != 0 && entry &&
           (*(entry + ENTRY_FLAGS_OFFSET).cast<u32>() & ENTRY_FLAG_20) != 0;
}
GUEST_EXPORT(0x00693410, current_mode_is_room_like);
