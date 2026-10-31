// Conversions between grid cells and world positions (32 world units per cell).
#include "arm.hpp"
#include "guest/guest.hpp"

namespace {

struct Vec3 {
    float x, y, z;
};
GUEST_SIZE(Vec3, 12);

// Where the cell grid starts, in world units, on each axis.
inline guest::global<s32, 0x0085f2e8> origin_x;
inline guest::global<s32, 0x0085f2ec> origin_z;
// Second arguments of the rounding helper for negative coordinates (meaning not known yet).
inline guest::global<s32, 0x0085f2e0> negative_x_argument;
inline guest::global<s32, 0x0085f2e4> negative_z_argument;

inline guest::global<u32, 0x009b4a24> object_009b4a24;

constexpr u32 CELL_SHIFT = 5;  // 32 world units per cell
constexpr float GROUND_Y = 0.0f;

// not known yet: called with a negative truncated coordinate
inline constexpr guest::Function<0x002f9e1c, s32(s32 value, s32 argument)> round_negative_coordinate;

s32 cell_of(float coordinate, s32 negative_argument) {
    s32 truncated = arm::to_s32(coordinate);
    if (truncated >= 0) {
        return truncated >> CELL_SHIFT;
    }
    return round_negative_coordinate(truncated, negative_argument);
}

float cell_to_world(s32 origin, s32 cell) {
    return float(s32(u32(origin) + (u32(cell) << CELL_SHIFT)));
}

}  // namespace

// The value of a global object pointer at 0x009b4a24.
static u32 get_object_009b4a24() {
    return *object_009b4a24;
}
GUEST_EXPORT(0x006a5e34, get_object_009b4a24);

// Writes the world position of the corner of the cell that contains the x/z of `in` (y is 0).
static void cell_corner_of_position(gptr<Vec3> out, gptr<Vec3> in) {
    float x = in->x;
    s32 cell_x = cell_of(x, *negative_x_argument);
    float z = in->z;
    s32 cell_z = cell_of(z, *negative_z_argument);
    if (x < 0.0f) {
        cell_x -= 1;
    }
    if (z < 0.0f) {
        cell_z -= 1;
    }
    out->x = cell_to_world(*origin_x, cell_x);
    out->y = GROUND_Y;
    out->z = cell_to_world(*origin_z, cell_z);
}
GUEST_EXPORT(0x006a5e44, cell_corner_of_position);

// Writes the world position of the corner of cell (cell_x, cell_z) (y is 0).
static void cell_corner(gptr<Vec3> out, s32 cell_x, s32 cell_z) {
    out->x = cell_to_world(*origin_x, cell_x);
    out->y = GROUND_Y;
    out->z = cell_to_world(*origin_z, cell_z);
}
GUEST_EXPORT(0x006a5f0c, cell_corner);
