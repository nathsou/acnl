// Small helpers of the code around 0x0076f000 and 0x00770000.
#include "guest/guest.hpp"
#include "item/item.hpp"

namespace {

inline constexpr guest::Function<0x0057bc2c, u32(u32 column, u32 row)> cell_is_valid;

constexpr u8 STATE_LIMIT = 0x1d;
constexpr u32 CELLS_PER_ROW = 16;
constexpr u32 DEFAULT_CELL_ADDRESS = 0x0095bfd2;  // what an invalid cell reads as

struct StatefulObject {
    u8 unknown_000[0x474];
    u8 state;

    bool is_in_state(u32 wanted) const;
    bool state_below_limit() const;
};
GUEST_OFFSET(StatefulObject, state, 0x474);

struct CellRow {
    union {
        u32 cells[CELLS_PER_ROW];
        Item items[CELLS_PER_ROW];
    };
};
GUEST_SIZE(CellRow, 64);

// A 64-bit value (low then high word) with a "present" flag.
struct OptionalWord64 {
    u32 low;
    u32 high;
    u8 flags;

    bool is_present_and_nonzero() const;
};
GUEST_OFFSET(OptionalWord64, flags, 8);

}  // namespace

bool StatefulObject::is_in_state(u32 wanted) const {
    return state == wanted;
}
GUEST_EXPORT(0x0076fbdc, StatefulObject::is_in_state);

bool StatefulObject::state_below_limit() const {
    return state < STATE_LIMIT;
}
GUEST_EXPORT(0x0076fbf0, StatefulObject::state_below_limit);

bool OptionalWord64::is_present_and_nonzero() const {
    return (flags & 1) != 0 && (low | high) != 0;
}
GUEST_EXPORT(0x0077033c, OptionalWord64::is_present_and_nonzero);

// The cell at (column, row) of a table of rows, or the default cell when the position is not valid.
static gptr<u32> cell_at(gptr<CellRow> rows, u32 column, u32 row) {
    if (!cell_is_valid(column, row)) {
        return gptr<u32>(DEFAULT_CELL_ADDRESS);
    }
    return guest::addr_of(rows[row].cells[column]);
}
GUEST_EXPORT(0x00770364, cell_at);

GUEST_FUZZ(0x0076fbdc, 200, [](guest::Fuzz &f) {
    auto object = f.allocate(sizeof(StatefulObject)).cast<StatefulObject>();
    object->state = u8(f.number());
    f.arguments(object, f.pick<u32>({object->state, object->state + 1u, 0, 0x1d, f.number()}));
});
GUEST_FUZZ(0x0076fbf0, 200, [](guest::Fuzz &f) {
    auto object = f.allocate(sizeof(StatefulObject)).cast<StatefulObject>();
    object->state = f.pick<u8>({0, 0x1c, 0x1d, 0x1e, 0xff, u8(f.number())});
    f.arguments(object);
});
GUEST_FUZZ(0x0077033c, 300, [](guest::Fuzz &f) {
    auto value = f.object<OptionalWord64>();
    if (f.below(3) == 0) {
        value->low = 0;
    }
    if (f.below(3) == 0) {
        value->high = 0;
    }
    f.arguments(value);
});
GUEST_FUZZ(0x00770364, 200, [](guest::Fuzz &f) {
    f.arguments(f.allocate(64 * 8).cast<CellRow>(), f.below(20), f.below(8));
});

// Puts a copy of the item in the cell at (column, row) of a table of 16 rows of 16 items; nothing happens when the
// position is not valid.
void set_cell_item(gptr<CellRow> rows, const Item &item, u32 column, u32 row) {
    if (!cell_is_valid(column, row)) {
        return;
    }
    copy_item(rows[row].items[column], item);
}
GUEST_EXPORT(0x002fcc14, set_cell_item);
GUEST_FUZZ(0x002fcc14, 200, [](guest::Fuzz &f) {
    f.arguments(f.allocate(CELLS_PER_ROW * sizeof(CellRow)).cast<CellRow>(), f.object<Item>(), f.pick<u32>({0, 5, 15, 16, 20, f.number()}),
                f.pick<u32>({0, 5, 15, 16, 20, f.number()}));
});
