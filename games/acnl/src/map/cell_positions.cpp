// Positions of map cells looked up by id, and the cell (512 world units wide) containing a position.
#include "arm.hpp"
#include "guest/guest.hpp"

namespace {

struct Vec3 {
    float x, y, z;
};
GUEST_SIZE(Vec3, 12);

struct CellCoordinates {
    s32 x;
    s32 z;
};
GUEST_SIZE(CellCoordinates, 8);

constexpr u32 CELL_SHIFT = 9;
constexpr u32 TILE_SHIFT = 5;   // a tile is 32 world units wide
constexpr s32 TILE_MASK = 15;   // 16 tiles to a cell

inline guest::global<s32, 0x0085f2c4> negative_x_argument;
inline guest::global<s32, 0x0085f2c8> negative_z_argument;
inline guest::global<s32, 0x0085f2e0> negative_tile_x_argument;
inline guest::global<s32, 0x0085f2e4> negative_tile_z_argument;

inline constexpr guest::Function<0x002f9e1c, s32(s32 value, s32 argument)> round_negative_coordinate;

s32 units_of(float coordinate, u32 shift, s32 negative_argument) {
    s32 truncated = arm::to_s32(coordinate);
    if (truncated >= 0) {
        return truncated >> shift;
    }
    return round_negative_coordinate(truncated, negative_argument);
}

s32 cell_of(float coordinate, s32 negative_argument) {
    return units_of(coordinate, CELL_SHIFT, negative_argument);
}

// The unit (cell or tile) the coordinate is in, rounded down also for negative coordinates.
s32 floored_units_of(float coordinate, u32 shift, s32 negative_argument) {
    s32 units = units_of(coordinate, shift, negative_argument);
    return coordinate < 0.0f ? units - 1 : units;
}

}  // namespace

// Writes the cell (x, z) that contains the x/z of a position (rounded down, also for negative coordinates).
static void cell_of_position(gptr<s32> out_x, gptr<s32> out_z, gptr<Vec3> position) {
    float x = position->x;
    s32 cell_x = cell_of(x, *negative_x_argument);
    float z = position->z;
    s32 cell_z = cell_of(z, *negative_z_argument);
    if (x < 0.0f) {
        cell_x -= 1;
    }
    *out_x = cell_x;
    if (z < 0.0f) {
        cell_z -= 1;
    }
    *out_z = cell_z;
}
GUEST_EXPORT(0x00307374, cell_of_position);

// The cell (512 units wide) and the tile inside it (16 to a cell, counted from the cell's corner) that contain the x/z of
// a position: the cell to the first two outputs, the tile to the next two.
void cell_and_tile_of_position(gptr<s32> cell_x, gptr<s32> cell_z, gptr<s32> tile_x, gptr<s32> tile_z, Vec3 &position) {
    *cell_x = floored_units_of(position.x, CELL_SHIFT, *negative_x_argument);
    *cell_z = floored_units_of(position.z, CELL_SHIFT, *negative_z_argument);
    s32 x_tiles = floored_units_of(position.x, TILE_SHIFT, *negative_tile_x_argument);
    s32 z_tiles = floored_units_of(position.z, TILE_SHIFT, *negative_tile_z_argument);
    *tile_x = x_tiles & TILE_MASK;
    *tile_z = z_tiles & TILE_MASK;
}
GUEST_EXPORT(0x006a69ec, cell_and_tile_of_position);
