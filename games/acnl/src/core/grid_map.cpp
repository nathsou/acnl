#include "core/grid_map.hpp"

namespace {

// Writes a point (unknown meaning of the source).
inline constexpr guest::Function<0x0052ee54, void(GridPoint &out)> get_reported_point;
// Produces a point and two more values from a query.
inline constexpr guest::Function<0x006a69ec, void(s32 &x, s32 &y, u32 &first, u32 &second, u32 query)>
    get_reported_cell;
inline constexpr guest::Function<0x0075281c, u32(gptr<GridCellSmall> cell, u32 a, u32 b, u32 c)> process_small_cell;

gptr<GridCellSmall> small_cell(GridMap &map, s32 x, s32 y) {
    GridPoint point{x, y};
    if (!map.rect.contains(point) || !map.cells_small) {
        return nullptr;
    }
    s32 index = s32(u32(y) * u32(map.rect.width()) + u32(x));
    return map.cells_small + index;
}

}  // namespace

gptr<GridCellLarge> GridMap::large_cell_at(s32 x, s32 y) {
    GridPoint point{x, y};
    if (!rect.contains(point) || !cells_large) {
        return nullptr;
    }
    s32 index = s32(u32(y) * u32(rect.width()) + u32(x));
    return cells_large + index;
}
GUEST_EXPORT(0x0075291c, GridMap::large_cell_at);

bool GridMap::reported_point_in_rect_10() {
    guest::StackObject<GridPoint> point;
    get_reported_point(*point);
    return rect_10.contains(*point);
}
GUEST_EXPORT(0x007529a0, GridMap::reported_point_in_rect_10);

bool GridMap::rect_10_contains(s32 x, s32 y) {
    GridPoint point{x, y};
    return rect_10.contains(point);
}
GUEST_EXPORT(0x007529d8, GridMap::rect_10_contains);

u32 GridMap::process_reported_cell(u32 query, u32 argument) {
    guest::StackObject<s32> x;
    guest::StackObject<s32> y;
    guest::StackObject<u32> first;
    guest::StackObject<u32> second;
    *x = 0;
    *y = 0;
    *first = 0;
    *second = 0;
    get_reported_cell(*x, *y, *first, *second, query);
    gptr<GridCellSmall> cell = small_cell(*this, *x, *y);
    if (!cell) {
        return 0;
    }
    return process_small_cell(cell, *first, *second, argument);
}
GUEST_EXPORT(0x00752a80, GridMap::process_reported_cell);

u32 GridMap::process_cell(s32 x, s32 y, u32 a, u32 b, u32 c) {
    gptr<GridCellSmall> cell = small_cell(*this, x, y);
    if (!cell) {
        return 0;
    }
    return process_small_cell(cell, a, b, c);
}
GUEST_EXPORT(0x00752b44, GridMap::process_cell);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<GridMap> some_map(guest::Fuzz &f) {
    auto map = f.object<GridMap>();
    s32 x0 = f.below(3), y0 = f.below(3);
    map->rect.min = {x0, y0};
    map->rect.max = {x0 + s32(f.below(4)), y0 + s32(f.below(4))};
    map->rect_10.min = {s32(f.below(3)), s32(f.below(3))};
    map->rect_10.max = {map->rect_10.min.x + s32(f.below(4)), map->rect_10.min.y + s32(f.below(4))};
    u32 cells = 64;
    auto small = f.allocate(cells * sizeof(GridCellSmall));
    memset(small.get(), 0, cells * sizeof(GridCellSmall));
    map->cells_small = f.below(5) ? small.cast<GridCellSmall>() : gptr<GridCellSmall>(nullptr);
    map->cells_large = f.below(5) ? f.allocate(16).cast<GridCellLarge>() : gptr<GridCellLarge>(nullptr);
    return map;
}

static s32 some_coordinate(guest::Fuzz &f) {
    return s32(f.below(8)) - 2;
}

GUEST_FUZZ(0x0075291c, 300, [](guest::Fuzz &f) { f.arguments(some_map(f), some_coordinate(f), some_coordinate(f)); });
GUEST_FUZZ(0x007529a0, 200, [](guest::Fuzz &f) { f.arguments(some_map(f)); });
GUEST_FUZZ(0x007529d8, 300, [](guest::Fuzz &f) { f.arguments(some_map(f), some_coordinate(f), some_coordinate(f)); });
GUEST_FUZZ(0x00752a80, 200, [](guest::Fuzz &f) { f.arguments(some_map(f), f.below(4), f.below(2)); });
GUEST_FUZZ(0x00752b44, 300, [](guest::Fuzz &f) {
    f.arguments(some_map(f), some_coordinate(f), some_coordinate(f), f.below(4), f.below(4), f.below(2));
});
