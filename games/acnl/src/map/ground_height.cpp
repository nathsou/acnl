// The height of the ground under a position: the map's block and tile there, then the tile's own height when it has one
// height, or else the height on the triangle of the tile under the position. Proved equal to the original: written in
// the C++ that tools/decomp reads back (docs/decomp.md, "Proved overrides"), and checked with
// `decomp prove-cpp games/acnl/src/map/ground_height.cpp`.
#include "guest/guest.hpp"

using guest::gptr;

namespace ground_height {

// A corner of the triangle under the position (tile_triangle_at writes three, triangle_height_at reads them).
struct __attribute__((packed)) Corner {
    float x;
    float y;
    float z;
};
GUEST_SIZE(Corner, 0xc);

// The original's stack frame. Two of the calls take a fifth argument, on the stack: the frame's first word.
struct __attribute__((packed)) GroundHeightFrame {
    u32 position;  // the fifth argument: the position's address
    s32 tile_x;
    s32 tile_z;
    s32 cell_x;
    s32 cell_z;
    Corner corners[3];
    u32 unknown_38;  // (not used here)
};
GUEST_OFFSET(GroundHeightFrame, tile_x, 0x4);
GUEST_OFFSET(GroundHeightFrame, cell_x, 0xc);
GUEST_OFFSET(GroundHeightFrame, corners, 0x14);
GUEST_SIZE(GroundHeightFrame, 0x3c);

// the map of a number (an entry of the table read_table_9b4a24 reads; 0 when there is none)
inline constexpr guest::Function<0x002fe7cc, u32(u32 number)> map_by_number;
// (and the position, the fifth argument)
inline constexpr guest::Function<0x006a69ec, u32(u32 cell_x, u32 cell_z, u32 tile_x, u32 tile_z)> cell_and_tile_of_position;
// (the last argument of these two: r3 as the original leaves it there, the address the coordinates were read from;
// the proof carries r3 through the call, so it stays)
inline constexpr guest::Function<0x0075291c, u32(u32 map, s32 x, s32 z, u32 left_in_r3)> large_cell_at;
// (set: the tile has one height, tile_height's)
inline constexpr guest::Function<0x0075d868, u32(u32 block, s32 x, s32 z, u32 left_in_r3)> tile_has_flag_6;
inline constexpr guest::Function<0x006a96d8, u32(u32 block, s32 x, s32 z)> tile_height;
// the corners of the tile's triangle under the position (the fifth argument)
inline constexpr guest::Function<0x006a930c, u32(u32 block, u32 first, u32 second, u32 third)> tile_triangle_at;
inline constexpr guest::Function<0x006f6810, u32(u32 position, u32 first, u32 second, u32 third)> triangle_height_at;

// The height (a float, in s0) of the ground of the map at the position (an address of x, y, z); 0 outside the map.
u32 ground_height_at(u32 position, u32 map_number) {
    guest::StackFrameOf<GroundHeightFrame> frame;  // the original's stack frame
    u32 map = map_by_number(map_number);
    if (map != 0u) {
        frame->cell_x = 0;
        frame->cell_z = 0;
        frame->tile_x = 0;
        frame->tile_z = 0;
        frame->position = position;
        cell_and_tile_of_position(guest::addr_of(frame->cell_x).addr(), guest::addr_of(frame->cell_z).addr(),
                                  guest::addr_of(frame->tile_x).addr(), guest::addr_of(frame->tile_z).addr());
        u32 block = large_cell_at(map, frame->cell_x, frame->cell_z, guest::addr_of(frame->cell_x).addr());
        if (block != 0u) {
            if (tile_has_flag_6(block, frame->tile_x, frame->tile_z, guest::addr_of(frame->tile_x).addr()) != 0) {
                return tile_height(block, frame->tile_x, frame->tile_z);
            }
            frame->position = position;
            u32 first = guest::addr_of(frame->corners[0]).addr();
            u32 second = guest::addr_of(frame->corners[1]).addr();
            u32 third = guest::addr_of(frame->corners[2]).addr();
            tile_triangle_at(block, first, second, third);
            return triangle_height_at(position, first, second, third);
        }
    }
    guest::cpu()->s[0] = 0.0f;  // no ground: height 0
    return 0u;
}
GUEST_EXPORT_FRAMED(0x006c5c60, ground_height_at, 0x4030);  // pushes {r4, r5, lr} first, as the original

}  // namespace ground_height
