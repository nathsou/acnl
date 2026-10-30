// Where a mode of the game (the byte read_global_byte_2 returns) sits in the game's list of modes.
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;

constexpr u32 LIST_SIZE = 0x2a;
inline guest::global<u8[LIST_SIZE], 0x00952718> mode_list;  // the modes at positions 2-0x1d and 0x20-0x29

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
        return find_in_list(mode, 2, 0x1a);
    }
    if (table_entry_has_all_bits(FLAG_2000, mode) != 0) {
        return find_in_list(mode, 0x1a, 0x1e);
    }
    if (mode == SPECIAL_MODE) {
        return POSITION_SPECIAL_MODE;
    }
    if (table_entry_has_all_bits(FLAG_100000, mode) != 0) {
        return find_in_list(mode, 0x20, LIST_SIZE);
    }
    if (table_entry_has_all_bits(FLAG_80000, mode) != 0) {
        return POSITION_FLAG_80000;
    }
    return NOT_LISTED;
}
GUEST_EXPORT(0x006f9638, list_position_of_mode);
GUEST_FUZZ(0x006f9638, 300, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({f.below(0xa6), mode_list[f.below(LIST_SIZE)], mode_list[f.below(LIST_SIZE)], SPECIAL_MODE}));
});
