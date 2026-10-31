// Two flags of the halfword at 0x22 of the save data's block at 0x71900.
#include "guest/guest.hpp"

namespace {

constexpr u32 BLOCK_OFFSET = 0x71900;
constexpr u16 FLAG_BIT_0 = 0x0001;
constexpr u16 FLAG_BIT_8 = 0x0100;

struct Block71900 {
    u8 unknown_00[0x22];
    u16 flags_22;
};
GUEST_OFFSET(Block71900, flags_22, 0x22);

inline constexpr guest::Function<0x002fb328, gptr<u8>()> get_save_data;

bool flag_22(u16 mask) {
    gptr<Block71900> block(get_save_data().addr() + BLOCK_OFFSET);
    return (block->flags_22 & mask) != 0;
}

}  // namespace

bool save_block_flag_bit_0() { return flag_22(FLAG_BIT_0); }
GUEST_EXPORT(0x0023bf20, save_block_flag_bit_0);

bool save_block_flag_bit_8() { return flag_22(FLAG_BIT_8); }
GUEST_EXPORT(0x0023c604, save_block_flag_bit_8);
