// Small helpers of the code around 0x0076f000 and 0x00770000.
#include <cstring>

#include "core/actor_object.hpp"
#include "guest/guest.hpp"
#include "item/item.hpp"

namespace {

inline constexpr guest::Function<0x0057bc2c, u32(u32 column, u32 row)> cell_is_valid;

constexpr u32 CELLS_PER_ROW = 16;
constexpr u32 STACK_CLEARANCE = 0x1000;
constexpr u32 DEFAULT_CELL_ADDRESS = 0x0095bfd2;  // what an invalid cell reads as

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

bool ActorObject::is_in_state(u32 wanted) const {
    return state == wanted;
}
GUEST_EXPORT(0x0076fbdc, ActorObject::is_in_state);

bool ActorObject::state_below_limit() const {
    return state < ActorObject::STATE_LIMIT;
}
GUEST_EXPORT(0x0076fbf0, ActorObject::state_below_limit);

bool ActorObject::begin_action(u32 new_state, u32 new_priority, const Float3 &new_vector, float new_speed,
                               float new_second_value, const u16 &new_angle_a, const u16 &new_angle_b, u32 new_flag_byte,
                               const WordPair &new_pair) {
    if (new_priority < priority && state < STATE_LIMIT) {
        return false;
    }
    state = u8(new_state);
    priority = u8(new_priority);
    byte_4a8 = byte_554;
    parameters = ActionParameters{};
    parameters.pair = new_pair;
    parameters.speed = new_speed > 0.0f ? new_speed : MINIMUM_SPEED;
    parameters.vector = new_vector;
    parameters.second_value = new_second_value;
    parameters.angle_a = new_angle_a;
    parameters.angle_b = new_angle_b;
    parameters.flag_byte = u8(new_flag_byte);
    parameters.marker = ACTION_MARKER;
    return true;
}
GUEST_EXPORT(0x006e7204, ActorObject::begin_action);

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
    auto object = f.allocate(sizeof(ActorObject)).cast<ActorObject>();
    object->state = u8(f.number());
    f.arguments(object, f.pick<u32>({object->state, object->state + 1u, 0, 0x1d, f.number()}));
});
GUEST_FUZZ(0x0076fbf0, 200, [](guest::Fuzz &f) {
    auto object = f.allocate(sizeof(ActorObject)).cast<ActorObject>();
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

// Whether the halfword the pointer addresses is not zero (the game "checks a block" by its first halfword).
bool halfword_is_nonzero(const u16 &value) {
    return value != 0;
}
GUEST_EXPORT(0x0076c6d4, halfword_is_nonzero);
GUEST_EXPORT(0x0071a0a0, halfword_is_nonzero);
static void fuzz_76c6d4(guest::Fuzz &f) {
    auto value = f.object<u16>();
    *value = u16(f.below(2) == 0 ? 0 : f.number());
    f.arguments(value);
}
GUEST_FUZZ(0x0076c6d4, 100, fuzz_76c6d4);
GUEST_FUZZ(0x0071a0a0, 100, fuzz_76c6d4);
GUEST_FUZZ(0x006e7204, 200, [](guest::Fuzz &f) {
    f.allocate(STACK_CLEARANCE);  // (keeps the object clear of the stack the original works on)
    auto object = f.allocate(sizeof(ActorObject)).cast<ActorObject>();
    object->state = f.pick<u8>({0, 5, 0x1c, 0x1d, 0x20});
    object->priority = u8(f.below(4));
    object->byte_554 = u8(f.number());
    f.arguments(object, f.below(0x30), f.below(5), f.object<Float3>(), f.pick<float>({-1.0f, 0.0f, 0.5f, 3.0f}),
                f.pick<float>({0.25f, 7.0f}), f.object<u16>(), f.object<u16>(), f.below(256), f.object<WordPair>());
});
