// Small helpers of the code around 0x00600000 and 0x00650000: setters, a bounded table, a smoothing step and forwarding
// calls to the world map and the object at 0x009506b4.
#include "core/fuzz_helpers.hpp"

namespace {

inline constexpr guest::Function<0x006a5e34, gptr<void>()> world_map_object;
inline constexpr guest::Function<0x002feb00, void(gptr<void> map, u32 first, u32 second, u32 third)> map_operation;
inline constexpr guest::Function<0x006dabd8, u32(gptr<void> object, u32 first, u32 second)> object_operation;

inline guest::global<u8, 0x009506b0> selection_state;
inline guest::global<gptr<void>, 0x009506b4> selected_object;
constexpr u8 NO_SELECTION = 0xff;

struct ObjectWithListener {
    u8 unknown_00[0x18];
    gptr<u8> listener;  // may be null
    u8 unknown_1c[0x64];
    u32 values_80[3];

    void set_values(u32 first, u32 second);
};
GUEST_OFFSET(ObjectWithListener, listener, 0x18);
GUEST_OFFSET(ObjectWithListener, values_80, 0x80);

struct Listener {
    u8 unknown_00[0x1c];
    u8 notified;
};
GUEST_OFFSET(Listener, notified, 0x1c);

}  // namespace

// With a listener: marks it notified and stores the two values and -1.
void ObjectWithListener::set_values(u32 first, u32 second) {
    if (!listener) {
        return;
    }
    listener.cast<Listener>()->notified = 1;
    values_80[0] = first;
    values_80[1] = second;
    values_80[2] = 0xffffffff;
}
GUEST_EXPORT(0x0060028c, ObjectWithListener::set_values);

// Four slots holding objects (a byte at 0x1e7 of each is set until the first empty slot).
struct SlotOwner {
    static constexpr u32 SLOT_COUNT = 4;
    static constexpr u32 MARKED_OFFSET = 0x1e7;

    u8 unknown_00[4];
    gptr<u8> slots[SLOT_COUNT];

    void mark_slots();
};
GUEST_OFFSET(SlotOwner, slots, 4);

void SlotOwner::mark_slots() {
    for (u32 i = 0; i < SLOT_COUNT; i++) {
        gptr<u8> slot = slots[i];
        if (!slot) {
            return;
        }
        slot[SlotOwner::MARKED_OFFSET] = 1;
    }
}
GUEST_EXPORT(0x006002b8, SlotOwner::mark_slots);

// The interface of the UI receivers: just its vtable and a zero.
struct UiReceptBase {
    static constexpr u32 VTABLE = 0x0090a9e8;
    u32 vtable;
    u32 word_04;
};

UiReceptBase &construct_ui_recept_base(UiReceptBase &self) {
    self.vtable = UiReceptBase::VTABLE;
    self.word_04 = 0;
    return self;
}
GUEST_EXPORT(0x00600430, construct_ui_recept_base);

// An object with a flag byte at 0x17a and two floats at 0x950 and 0x954 and one at 0x40.
struct ScrollState {
    static constexpr u8 FLAG_BIT_2 = 1 << 2;

    u8 unknown_000[0x40];
    float value_40;
    u8 unknown_44[0x17a - 0x44];
    u8 flags_17a;
    u8 unknown_17b[0x950 - 0x17b];
    float value_950;
    float value_954;

    void reset();
};
GUEST_OFFSET(ScrollState, value_40, 0x40);
GUEST_OFFSET(ScrollState, flags_17a, 0x17a);
GUEST_OFFSET(ScrollState, value_950, 0x950);
GUEST_OFFSET(ScrollState, value_954, 0x954);

void ScrollState::reset() {
    flags_17a = flags_17a & ~FLAG_BIT_2;
    value_950 = 0.0f;
    value_954 = 0.0f;
    value_40 = 0.0f;
}
GUEST_EXPORT(0x0064f368, ScrollState::reset);

// A table of 10-byte entries (in the game's data), null for an index past the end.
struct Entry10 {
    u8 unknown[10];
};
constexpr u32 ENTRY10_COUNT = 0xeb;
inline guest::global<Entry10[ENTRY10_COUNT], 0x00842c20> entries_10;

static gptr<Entry10> entry_10(u32 index) {
    return index < ENTRY10_COUNT ? guest::addr_of(entries_10[index]) : gptr<Entry10>();
}
GUEST_EXPORT(0x0064f390, entry_10);

// A smoothing state: the target is reached in `steps` steps, `value` closes the distance by one share of it per step.
struct Smoother {
    u8 unknown_00[0x18];
    float value;
    u8 unknown_1c[0x5b2 - 0x1c];
    u16 steps_left;

    bool step_towards(float target);
};
GUEST_OFFSET(Smoother, value, 0x18);
GUEST_OFFSET(Smoother, steps_left, 0x5b2);

// Without steps left: jumps to the target (true). Otherwise moves 1 / steps_left of the way and counts a step.
bool Smoother::step_towards(float target) {
    float current = value;
    float distance = target - current;
    if (steps_left == 0) {
        value = target;
        return true;
    }
    float share = distance / static_cast<float>(u32(steps_left));
    value = current + share;
    steps_left = steps_left - 1;
    return false;
}
GUEST_EXPORT(0x0064f5b8, Smoother::step_towards);

namespace {
inline guest::global<float, 0x00886878> tunable_886878;
constexpr float FOUR = 4.0f;
}  // namespace

static float four_times_tunable() {
    return *tunable_886878 * FOUR;
}
GUEST_EXPORT(0x0064fdcc, four_times_tunable);

// Passes the three arguments to the operation on the world map object, when there is one.
static void forward_to_world_map(u32 first, u32 second, u32 third) {
    gptr<void> map = world_map_object();
    if (map) {
        map_operation(map, first, second, third);
    }
}
GUEST_EXPORT(0x00650140, forward_to_world_map);

// When nothing is selected and an object is: the operation on that object.
static u32 operate_on_selected(u32 first, u32 second) {
    if (*selection_state != NO_SELECTION || !*selected_object) {
        return 0;
    }
    return object_operation(*selected_object, first, second);
}
GUEST_EXPORT(0x006501e4, operate_on_selected);

GUEST_FUZZ(0x0060028c, 200, [](guest::Fuzz &f) {
    auto object = f.object<ObjectWithListener>();
    object->listener = f.below(3) == 0 ? gptr<u8>() : f.allocate(0x40).cast<u8>();
    f.arguments(object, f.number(), f.number());
});
GUEST_FUZZ(0x006002b8, 200, [](guest::Fuzz &f) {
    auto owner = f.object<SlotOwner>();
    u32 filled = f.below(SlotOwner::SLOT_COUNT + 1);
    for (u32 i = 0; i < SlotOwner::SLOT_COUNT; i++) {
        owner->slots[i] = i < filled ? f.allocate(0x200).cast<u8>() : gptr<u8>();
    }
    f.arguments(owner);
});
GUEST_FUZZ(0x00600430, 100, [](guest::Fuzz &f) { f.arguments(f.object<UiReceptBase>()); });
GUEST_FUZZ(0x0064f368, 200, [](guest::Fuzz &f) { f.arguments(f.object<ScrollState>()); });
GUEST_FUZZ(0x0064f390, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, ENTRY10_COUNT - 1, ENTRY10_COUNT, 0xffffffffu, f.below(300)})); });
GUEST_FUZZ(0x0064f5b8, 400, [](guest::Fuzz &f) {
    auto smoother = f.allocate(sizeof(Smoother)).cast<Smoother>();
    f.bytes(smoother, 0x40);
    smoother->value = f.real();
    smoother->steps_left = f.pick<u16>({0, 1, 2, 10, 0xffff, u16(f.number())});
    f.arguments(smoother, f.real());
});
GUEST_FUZZ(0x0064fdcc, 100, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x00650140, 100, [](guest::Fuzz &f) { f.arguments(f.number(), f.number(), f.number()); });
GUEST_FUZZ(0x006501e4, 100, [](guest::Fuzz &f) { f.arguments(f.number(), f.number()); });
