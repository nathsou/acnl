// The rectangle of cells inside a map block (0-15 in both directions), made the first time it is asked for.
#pragma once

#include "core/grid_rect.hpp"

gptr<GridRect> block_cell_rect();
