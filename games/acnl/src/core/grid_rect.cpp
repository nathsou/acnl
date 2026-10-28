#include "core/grid_rect.hpp"

GridRectIterator &construct_grid_rect_iterator(GridRectIterator &self, const GridRect &rect) {
    // the current cell is cleared first, then set: kept in this order in case the objects overlap
    self.current.x = 0;
    self.current.y = 0;
    self.min = guest::addr_of(rect.min);
    self.max = guest::addr_of(rect.max);
    self.current.x = rect.min.x;
    self.current.y = rect.min.y;
    return self;
}
GUEST_EXPORT(0x00748284, construct_grid_rect_iterator);

s32 GridRect::width() const {
    return max.x - min.x + 1;
}
GUEST_EXPORT(0x007482bc, GridRect::width);

bool GridRect::contains(const GridPoint &point) const {
    if (min.x > point.x || point.x > max.x) {
        return false;
    }
    return min.y <= point.y && point.y <= max.y;
}
GUEST_EXPORT(0x007482d0, GridRect::contains);

s32 GridRect::height() const {
    return max.y - min.y + 1;
}
GUEST_EXPORT(0x00748310, GridRect::height);

GridRect &grid_rect_relative_to(GridRect &out, const GridRect &rect, const GridPoint &origin) {
    GridRect moved;
    moved.min.x = rect.min.x - origin.x;
    moved.min.y = rect.min.y - origin.y;
    moved.max.x = rect.max.x - origin.x;
    moved.max.y = rect.max.y - origin.y;
    out = moved;
    return out;
}
GUEST_EXPORT(0x00748324, grid_rect_relative_to);

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

GUEST_FUZZ(0x00748284, 200, [](guest::Fuzz &f) { f.arguments(f.object<GridRectIterator>(), some_rect(f)); });
GUEST_FUZZ(0x007482bc, 200, [](guest::Fuzz &f) { f.arguments(some_rect(f)); });
GUEST_FUZZ(0x007482d0, 400, [](guest::Fuzz &f) { f.arguments(some_rect(f), some_point(f)); });
GUEST_FUZZ(0x00748310, 200, [](guest::Fuzz &f) { f.arguments(some_rect(f)); });
GUEST_FUZZ(0x00748324, 300, [](guest::Fuzz &f) {
    auto rect = some_rect(f);
    auto out = f.below(4) == 0 ? rect : f.object<GridRect>();
    f.arguments(out, rect, some_point(f));
});
