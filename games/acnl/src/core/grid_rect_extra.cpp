#include "core/grid_rect.hpp"

void make_end_grid_rect_iterator(GridRectIterator &out, const GridRect &rect) {
    GridPoint end{rect.min.x, rect.max.y + 1};
    out.min = guest::addr_of(rect.min);
    out.max = guest::addr_of(rect.max);
    out.current = end;
}
GUEST_EXPORT(0x0074824c, make_end_grid_rect_iterator);

GridRect &grid_rect_translated(GridRect &out, const GridRect &rect, const GridPoint &offset) {
    GridRect moved;
    moved.min.x = rect.min.x + offset.x;
    moved.min.y = rect.min.y + offset.y;
    moved.max.x = rect.max.x + offset.x;
    moved.max.y = rect.max.y + offset.y;
    out = moved;
    return out;
}
GUEST_EXPORT(0x0074836c, grid_rect_translated);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static s32 some_coordinate(guest::Fuzz &f) {
    if (f.below(4) == 0) {
        return s32(f.pick<u32>({0, 0xffffffff, 0x7fffffff, 0x80000000, f.number()}));
    }
    return s32(f.below(32)) - 4;
}

static gptr<GridRect> some_rect(guest::Fuzz &f) {
    auto rect = f.object<GridRect>();
    rect->min = {some_coordinate(f), some_coordinate(f)};
    rect->max = {some_coordinate(f), some_coordinate(f)};
    return rect;
}

static gptr<GridPoint> some_point(guest::Fuzz &f) {
    auto point = f.object<GridPoint>();
    *point = {some_coordinate(f), some_coordinate(f)};
    return point;
}

GUEST_FUZZ(0x0074824c, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<GridRectIterator>(), some_rect(f));
});
GUEST_FUZZ(0x0074836c, 300, [](guest::Fuzz &f) {
    auto rect = some_rect(f);
    auto point = some_point(f);
    auto out = f.below(4) == 0 ? rect : f.object<GridRect>();
    f.arguments(out, rect, point);
});
