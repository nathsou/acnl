#include "core/grid_rect.hpp"

namespace {

// Selectors of the regions of a large object (what the object is, is not known yet).
enum RegionSelector : u32 {
    REGION_0 = 0,
    REGION_1 = 1,
    REGION_2 = 2,
    REGION_4 = 4,  // any other selector gets the last region
};
constexpr u32 REGION_0_OFFSET = 0x15c;
constexpr u32 REGION_1_OFFSET = 0x2f4;
constexpr u32 REGION_2_OFFSET = 0x48c;
constexpr u32 REGION_4_OFFSET = 0x7bc;
constexpr u32 REGION_DEFAULT_OFFSET = 0x624;

bool same_point(const GridPoint &a, const GridPoint &b) {
    return a.x == b.x && a.y == b.y;
}

}  // namespace

// The address of one of an object's regions, picked by selector.
u32 region_address(u32 base, u32 selector) {
    switch (selector) {
    case REGION_0: return base + REGION_0_OFFSET;
    case REGION_1: return base + REGION_1_OFFSET;
    case REGION_2: return base + REGION_2_OFFSET;
    case REGION_4: return base + REGION_4_OFFSET;
    default: return base + REGION_DEFAULT_OFFSET;
    }
}
GUEST_EXPORT(0x007480d0, region_address);

bool grid_points_equal(const GridPoint &a, const GridPoint &b) {
    return same_point(a, b);
}
GUEST_EXPORT(0x00748138, grid_points_equal);

// out = a - b, component-wise (wrapping). Returns out.
GridPoint &grid_point_subtract(GridPoint &out, const GridPoint &a, const GridPoint &b) {
    s32 x = s32(u32(a.x) - u32(b.x));
    s32 y = s32(u32(a.y) - u32(b.y));
    out.y = y;
    out.x = x;
    return out;
}
GUEST_EXPORT(0x00748164, grid_point_subtract);

bool grid_points_differ(const GridPoint &a, const GridPoint &b) {
    return !same_point(a, b);
}
GUEST_EXPORT(0x0074818c, grid_points_differ);

// out = a + b, component-wise (wrapping). Returns out.
GridPoint &grid_point_add(GridPoint &out, const GridPoint &a, const GridPoint &b) {
    s32 x = s32(u32(a.x) + u32(b.x));
    s32 y = s32(u32(a.y) + u32(b.y));
    out.y = y;
    out.x = x;
    return out;
}
GUEST_EXPORT(0x007481bc, grid_point_add);
