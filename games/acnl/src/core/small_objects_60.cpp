// Small functions on objects of the 0x00603500..0x0060de0c area: a grid of small cells, a few flag setters and
// copies. The object types are not known yet.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

using guest::gptr;

namespace {

constexpr u32 GRID_SIZE = 16;
constexpr u32 GRID_MASK = 0xf;
constexpr u32 LOW_BITS_MASK = 3;
constexpr u8 STATE_ACKNOWLEDGEABLE = 7;
constexpr s32 NO_VALUE = -1;

// A cell of the grid: four halfwords and two bytes.
struct Cell {
    u16 halves[4];
    u8 byte_08;
    u8 byte_09;

    void copy_from(const Cell &other);
    void clear();
    void set_low_bits_of_09(u32 value);
};
GUEST_OFFSET(Cell, byte_08, 8);
GUEST_OFFSET(Cell, byte_09, 9);
GUEST_SIZE(Cell, 10);

// An object with a 16 x 16 grid of cells at 0x1c (rows are selected by the second coordinate).
struct CellGrid {
    u8 unknown_00[0x1c];
    Cell cells[GRID_SIZE][GRID_SIZE];
};
GUEST_OFFSET(CellGrid, cells, 0x1c);

struct StateObject {
    u8 unknown_00[4];
    u8 state;
    u8 acknowledged;
};
GUEST_OFFSET(StateObject, state, 4);
GUEST_OFFSET(StateObject, acknowledged, 5);

struct SelectionObject {
    u8 unknown_00[0x14];
    u8 selected;
    u8 unknown_15[3];
    s32 value_18;
};
GUEST_OFFSET(SelectionObject, selected, 0x14);
GUEST_OFFSET(SelectionObject, value_18, 0x18);

struct FlagObject {
    u8 unknown_00[0x1c];
    u8 flag_1c;
};
GUEST_OFFSET(FlagObject, flag_1c, 0x1c);

struct PositionHolder {
    u8 unknown_00[0x28];
    Float3 position;
};
GUEST_OFFSET(PositionHolder, position, 0x28);

struct NodeOwner {
    u8 unknown_000[0x310];
    gptr<PositionHolder> node;
};
GUEST_OFFSET(NodeOwner, node, 0x310);

struct Global951670 {
    u32 unknown_00;
    u32 value_04;
};
inline guest::global<Global951670, 0x00951670> global_951670;

}  // namespace

void Cell::copy_from(const Cell &other) {
    for (u32 i = 0; i < 4; i++) {
        halves[i] = other.halves[i];
    }
    byte_08 = other.byte_08;
    byte_09 = other.byte_09;
}
GUEST_EXPORT(0x0060d20c, Cell::copy_from);

void Cell::clear() {
    for (u16 &half : halves) {
        half = 0;
    }
    byte_08 = 0;
    byte_09 = 0;
}
GUEST_EXPORT(0x0060d240, Cell::clear);

// Replaces the low two bits of byte 9.
void Cell::set_low_bits_of_09(u32 value) {
    byte_09 = u8((byte_09 & ~LOW_BITS_MASK) + (value & LOW_BITS_MASK));
}
GUEST_EXPORT(0x0060d114, Cell::set_low_bits_of_09);

// Sets byte 8 of the cell at the (column, row) position, both cut to 0-15.
void set_cell_byte_08(CellGrid &grid, u32 column, u32 row, u32 value) {
    grid.cells[row & GRID_MASK][column & GRID_MASK].byte_08 = u8(value);
}
GUEST_EXPORT(0x0060d0a4, set_cell_byte_08);

// Copies the position of the owner's node.
void copy_node_position(Float3 &out, NodeOwner &owner) {
    out = owner.node->position;
}
GUEST_EXPORT(0x0060de0c, copy_node_position);

void clear_global_951670_value() {
    global_951670->value_04 = 0;
}
GUEST_EXPORT(0x0060c54c, clear_global_951670_value);

// When the state is 7, acknowledges it (byte 5) and reports true.
bool acknowledge_state_7(StateObject &object) {
    if (object.state != STATE_ACKNOWLEDGEABLE) {
        return false;
    }
    object.acknowledged = 1;
    return true;
}
GUEST_EXPORT(0x00603500, acknowledge_state_7);

void select_entry(SelectionObject &object, u32 selected) {
    object.selected = u8(selected);
    object.value_18 = NO_VALUE;
}
GUEST_EXPORT(0x00603cf4, select_entry);

void set_flag_1c(FlagObject &object) {
    object.flag_1c = 1;
}
GUEST_EXPORT(0x00603e64, set_flag_1c);
