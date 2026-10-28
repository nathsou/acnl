// Rectangles of grid cells (inclusive bounds) and the helpers the field/map builders use on them.
#pragma once

#include "guest/guest.hpp"

struct GridPoint {
    s32 x;
    s32 y;
};
GUEST_SIZE(GridPoint, 8);

// A rectangle of cells; both corners are inside it.
struct GridRect {
    GridPoint min;
    GridPoint max;

    s32 width() const;                           // cells per row
    s32 height() const;                          // cells per column
    bool contains(const GridPoint &point) const;
};
GUEST_OFFSET(GridRect, min, 0);
GUEST_OFFSET(GridRect, max, 8);
GUEST_SIZE(GridRect, 16);

// Walks the cells of a rectangle: points at its corners and keeps the current cell, starting at the min corner.
struct GridRectIterator {
    gptr<const GridPoint> min;
    gptr<const GridPoint> max;
    GridPoint current;
};
GUEST_OFFSET(GridRectIterator, min, 0);
GUEST_OFFSET(GridRectIterator, max, 4);
GUEST_OFFSET(GridRectIterator, current, 8);
GUEST_SIZE(GridRectIterator, 16);

GridRectIterator &construct_grid_rect_iterator(GridRectIterator &self, const GridRect &rect);

// The rectangle moved so that origin becomes (0, 0). Returns out.
GridRect &grid_rect_relative_to(GridRect &out, const GridRect &rect, const GridPoint &origin);
