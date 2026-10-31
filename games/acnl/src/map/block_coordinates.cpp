// Conversions between positions in units and in blocks of 16 units.
#include "guest/guest.hpp"

namespace {

constexpr u32 BLOCK_SHIFT = 4;  // a block is 16 units wide

}  // namespace

// The block (counted from the origin, rounding down) each of the two positions is in.
static void blocks_of_position(s32 &x_block, s32 &y_block, s32 x, s32 y) {
    x_block = x >> BLOCK_SHIFT;
    y_block = y >> BLOCK_SHIFT;
}
GUEST_EXPORT(0x006a6c78, blocks_of_position);

// The position of the first unit of a block, relative to an origin.
static void position_of_block(s32 &x, s32 &y, s32 x_block, s32 y_block, s32 origin_x, s32 origin_y) {
    x = origin_x + (x_block << BLOCK_SHIFT);
    y = origin_y + (y_block << BLOCK_SHIFT);
}
GUEST_EXPORT(0x006a6e90, position_of_block);
