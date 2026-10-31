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
