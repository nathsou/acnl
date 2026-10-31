// A grid of 16-bit cells whose four nibbles each add a weight from a table; the sum is kept in the object.
#include "guest/guest.hpp"

namespace {

struct WeightedCells {
    static constexpr u32 CELLS = 0x140;
    static constexpr u32 CELLS_PER_ROW = 0x50;
    static constexpr u32 SCANNED = 16;       // cells visited
    static constexpr u32 STRIDE_CELLS = 5;   // 10 bytes between the visited cells

    u16 cells[CELLS];
    u32 total;  // the running sum, updated in memory as it is built

    u32 sum_weights(u32 column, u32 row);
};
GUEST_OFFSET(WeightedCells, total, 0x280);

inline guest::global<u8[16], 0x008657ec> nibble_weights;

u32 WeightedCells::sum_weights(u32 column, u32 row) {
    gptr<u16> cell = guest::addr_of(cells[0]) + (CELLS_PER_ROW * row + column);
    total = 0;
    for (u32 i = 0; i < SCANNED; i++, cell += STRIDE_CELLS) {
        if (*cell == 0) {
            continue;
        }
        total += nibble_weights[*cell & 0xf];
        total += nibble_weights[*cell >> 4 & 0xf];
        total += nibble_weights[*cell >> 8 & 0xf];
        total += nibble_weights[*cell >> 12];
    }
    return total;
}

}  // namespace

GUEST_EXPORT(0x002fe055, WeightedCells::sum_weights);
