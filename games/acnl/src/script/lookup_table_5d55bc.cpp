// A signed-byte lookup in one of six tables of 10-byte rows, chosen by a type number. What the tables hold is not
// known yet.
#include "guest/guest.hpp"

namespace {

constexpr u32 COLUMNS = 10;
constexpr s8 COLUMN_OUT_OF_RANGE = 1;
constexpr s8 NOT_FOUND = 0;

enum TableType : u32 {
    TYPE_4 = 4,
    TYPE_5 = 5,
    TYPE_7 = 7,
    TYPE_0x11 = 0x11,
    TYPE_0x12 = 0x12,
    TYPE_0x14 = 0x14,
};

// A table of rows of COLUMNS signed bytes in the game's read-only data.
struct Table {
    u32 address;
    u32 rows;
};

constexpr Table TABLE_TYPE_4{0x00890790, 0x15};
constexpr Table TABLE_TYPE_5{0x00890862, 0x26};
constexpr Table TABLE_TYPE_0x11{0x008909e8, 0x0b};
constexpr Table TABLE_TYPE_0x12{0x00890a56, 0x23};
constexpr Table TABLE_TYPE_0x14{0x00890bb4, 0x05};

// Type 7 has one row of data; only row 6 is accepted and it is read from the start of the table.
constexpr u32 TYPE_7_TABLE = 0x008909de;
constexpr u32 TYPE_7_ONLY_ROW = 6;

// Fuzzing bounds: the largest row count of any table, and a few columns past the end of a row.
constexpr u32 FUZZ_MAX_ROWS = 0x26 + 4;
constexpr u32 FUZZ_MAX_COLUMNS = COLUMNS + 2;
constexpr u32 FUZZ_MAX_TYPE = 0x20;

s8 read(u32 address, u32 column) {
    if (column >= COLUMNS) {
        return COLUMN_OUT_OF_RANGE;
    }
    return guest::gptr<const s8>(address)[column];
}

s8 read(const Table &table, u32 row, u32 column) {
    if (row >= table.rows) {
        return NOT_FOUND;
    }
    return read(table.address + row * COLUMNS, column);
}

}  // namespace

// The value at (row, column) of the table for the type; 0 for an unknown type or a row out of range, and 1 for a
// column out of range (when the row is valid).
s8 lookup_table_value(u32 type, u32 row, u32 column) {
    switch (type) {
    case TYPE_4:
        return read(TABLE_TYPE_4, row, column);
    case TYPE_5:
        return read(TABLE_TYPE_5, row, column);
    case TYPE_7:
        return row == TYPE_7_ONLY_ROW ? read(TYPE_7_TABLE, column) : NOT_FOUND;
    case TYPE_0x11:
        return read(TABLE_TYPE_0x11, row, column);
    case TYPE_0x12:
        return read(TABLE_TYPE_0x12, row, column);
    case TYPE_0x14:
        return read(TABLE_TYPE_0x14, row, column);
    default:
        return NOT_FOUND;
    }
}
GUEST_EXPORT(0x005d55bc, lookup_table_value);

GUEST_FUZZ(0x005d55bc, 400, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({TYPE_4, TYPE_5, TYPE_7, TYPE_0x11, TYPE_0x12, TYPE_0x14, f.below(FUZZ_MAX_TYPE)}),
                f.below(FUZZ_MAX_ROWS), f.below(FUZZ_MAX_COLUMNS));
});
