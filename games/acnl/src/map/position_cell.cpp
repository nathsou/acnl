// From a world position (x, y, z floats) to the cell coordinates it lies in.
#include "arm.hpp"
#include "guest/guest.hpp"

namespace {

struct WorldPosition {
    float x;
    float y;
    float z;
};
GUEST_SIZE(WorldPosition, 12);

constexpr u32 CELL_SHIFT = 5;  // non-negative coordinates divide by 32

inline guest::global<s32, 0x0085f2e0> cell_unit_x;  // passed to round_negative_coordinate for x
inline guest::global<s32, 0x0085f2e4> cell_unit_z;  // and for z
// a float threshold in this function's literal pool: positions below it move one cell down (value not shown in
// the disassembly, so it is read from the code)
inline guest::global<float, 0x00317248> cell_threshold;

inline constexpr guest::Function<0x002f9e1c, s32(s32 value, s32 unit)> round_negative_coordinate;

s32 coordinate_to_cell(s32 value, s32 unit) {
    if (value >= 0) {
        return value >> CELL_SHIFT;
    }
    return round_negative_coordinate(value, unit);
}

}  // namespace

// Writes the cell coordinates of a position's x and z.
void position_to_cell(gptr<s32> cell_x, gptr<s32> cell_z, const WorldPosition &position) {
    float x = position.x;
    s32 column = coordinate_to_cell(arm::to_s32(x), *cell_unit_x);
    float z = position.z;
    s32 row = coordinate_to_cell(arm::to_s32(z), *cell_unit_z);
    float threshold = *cell_threshold;
    if (x < threshold) {
        column -= 1;
    }
    *cell_x = column;
    if (z < threshold) {
        row -= 1;
    }
    *cell_z = row;
}
GUEST_EXPORT(0x003171b4, position_to_cell);

GUEST_FUZZ(0x003171b4, 300, [](guest::Fuzz &f) {
    auto out_x = f.object<s32>();
    auto out_z = f.object<s32>();
    auto position = f.object<WorldPosition>();
    position->x = f.pick<float>({0.0f, -0.5f, 0.5f, -32.0f, 31.9f, f.real(), f.real() * 10.0f});
    position->y = f.real();
    position->z = f.pick<float>({0.0f, -0.5f, 0.5f, -32.0f, 31.9f, f.real(), f.real() * 10.0f});
    f.arguments(out_x, out_z, position);
});
