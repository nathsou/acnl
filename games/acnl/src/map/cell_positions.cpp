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

constexpr u32 SPECIAL_ID_7F = 0x7f;
constexpr u32 SPECIAL_ID_80 = 0x80;
constexpr u32 SPECIAL_ID_85 = 0x85;
constexpr u32 SPECIAL_ID_69 = 0x69;
constexpr s32 FALLBACK_CELL_X = 0x3a;
constexpr s32 FALLBACK_CELL_Z = 0x10;
constexpr u32 WORD_95BF74_BLOCK_OFFSET = 0x62250;
constexpr u32 BYTE_OFFSET_IN_BLOCK = 0x14;
constexpr u32 SCALE_LITERAL_ADDRESS = 0x0030736c;  // a float in the code's literal pool

constexpr u32 CELL_SHIFT = 9;

inline guest::global<float, 0x0085f2d4> offset_x;
inline guest::global<float, 0x0085f2d8> offset_z;
inline guest::global<float, 0x0085f2cc> scale_x;
inline guest::global<u32, 0x0095bf74> word_95bf74;
inline guest::global<s32, 0x0085f2c4> negative_x_argument;
inline guest::global<s32, 0x0085f2c8> negative_z_argument;

inline constexpr guest::Function<0x00527528, bool(gptr<s32> x, gptr<s32> z, u32 id)> find_cell_of_id;
inline constexpr guest::Function<0x006a5f0c, void(Vec3 &out, s32 cell_x, s32 cell_z)> cell_corner;
inline constexpr guest::Function<0x006c7540, float(Vec3 &position, u32 zero)> height_at;
inline constexpr guest::Function<0x006c5fa0, float(Vec3 &position, u32 zero)> height_at_alternate;
inline constexpr guest::Function<0x002f9e1c, s32(s32 value, s32 argument)> round_negative_coordinate;

s32 cell_of(float coordinate, s32 negative_argument) {
    s32 truncated = arm::to_s32(coordinate);
    if (truncated >= 0) {
        return truncated >> CELL_SHIFT;
    }
    return round_negative_coordinate(truncated, negative_argument);
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
GUEST_FUZZ(0x00307374, 300, [](guest::Fuzz &f) {
    auto position = f.object<Vec3>();
    position->x = f.pick<float>({0.0f, -1.0f, 511.0f, 512.0f, -512.0f, 1e9f, -1e9f, f.real(), f.real()});
    position->z = f.pick<float>({0.0f, -1.0f, 511.0f, 512.0f, -512.0f, 1e9f, -1e9f, f.real(), f.real()});
    f.arguments(f.object<s32>(), f.object<s32>(), position);
});
