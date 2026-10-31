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
