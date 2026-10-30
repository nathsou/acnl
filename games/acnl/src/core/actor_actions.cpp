// Starting the actions of actors (see core/actor_object.hpp): each function starts one state with its usual parameters and
// remembers the values the caller gives. The state numbers are the game's; what each state makes the actor do is not known
// yet.
#include <bit>

#include "core/actor_object.hpp"

namespace {

constexpr float SPEED = 0.75f;
constexpr float SECOND_VALUE_6 = 6.0f;
constexpr float SCALE_FACTOR = 0.1f;  // the second word of the scaled pair is this fraction of the first

constexpr u32 FLAG_NONE = 0;

// The state numbers (what the states are is not known yet).
constexpr u32 STATE_0 = 0x00, STATE_4 = 0x04, STATE_0B = 0x0b, STATE_0C = 0x0c, STATE_10 = 0x10, STATE_15 = 0x15;
constexpr u32 STATE_16 = 0x16, STATE_17 = 0x17, STATE_18 = 0x18, STATE_19 = 0x19, STATE_1A = 0x1a, STATE_1B = 0x1b;
constexpr u32 STATE_11 = 0x11, STATE_12 = 0x12, STATE_13 = 0x13, STATE_14 = 0x14, STATE_1C = 0x1c;
constexpr u32 STATE_0D = 0x0d, STATE_0E = 0x0e;

// The vector and the pairs the plain actions are started with.
inline guest::global<Float3, 0x00ae5658> default_vector;
inline guest::global<WordPair, 0x008806bc> default_pair;
inline guest::global<WordPair, 0x008806c4> second_default_pair;
inline guest::global<WordPair, 0x009537c8> scaled_pair;  // written before each scaled action is started

// The plain action: the usual vector and speed, no angles, no flag.
bool begin_plain(ActorObject &self, u32 state, u32 priority, float second_value, const WordPair &pair) {
    const u16 angle = 0;
    return self.begin_action(state, priority, *default_vector, SPEED, second_value, angle, angle, FLAG_NONE, pair);
}

// The scaled action: its pair holds the actor's scale number `scale` and a tenth of it.
bool begin_scaled(ActorObject &self, u32 state, u32 priority, const Float3 &vector, float speed, const u16 &angle_a,
                  const u16 &angle_b, u32 flag, u32 scale) {
    float first = self.scales[scale];
    float second = first * SCALE_FACTOR;
    scaled_pair->first = std::bit_cast<u32>(first);
    scaled_pair->second = std::bit_cast<u32>(second);
    return self.begin_action(state, priority, vector, speed, SECOND_VALUE_6, angle_a, angle_b, flag, *scaled_pair);
}

}  // namespace

// ---- plain actions

bool begin_action_0(ActorObject &self, float second_value, u32 priority) {
    return begin_plain(self, STATE_0, priority, second_value, *default_pair);
}
GUEST_EXPORT(0x006e9c2c, begin_action_0);

bool begin_action_1b(ActorObject &self, u32 priority) {
    return begin_plain(self, STATE_1B, priority, 0.0f, *second_default_pair);
}
GUEST_EXPORT(0x00304224, begin_action_1b);

bool begin_action_18(ActorObject &self, u32 priority) {
    return begin_plain(self, STATE_18, priority, SECOND_VALUE_6, *default_pair);
}
GUEST_EXPORT(0x006ed2c4, begin_action_18);

bool begin_action_16(ActorObject &self, u32 priority) {
    return begin_plain(self, STATE_16, priority, SECOND_VALUE_6, *default_pair);
}
GUEST_EXPORT(0x006ed388, begin_action_16);

bool begin_action_17(ActorObject &self, u32 priority) {
    return begin_plain(self, STATE_17, priority, SECOND_VALUE_6, *default_pair);
}
GUEST_EXPORT(0x006ed9f4, begin_action_17);

// ---- plain actions that remember a value

// State 0xc remembers a byte at 0x49d.
bool begin_action_0c(ActorObject &self, float second_value, u32 priority, u32 value) {
    bool started = begin_plain(self, STATE_0C, priority, second_value, *default_pair);
    if (started) {
        self.parameters.byte_49d = u8(value);
    }
    return started;
}
GUEST_EXPORT(0x006eb990, begin_action_0c);

// States 0x13, 0x14 and 0x1c remember a byte at 0x4a6.
template <u32 STATE>
bool begin_action_with_byte_4a6(ActorObject &self, u32 priority, u32 value) {
    bool started = begin_plain(self, STATE, priority, SECOND_VALUE_6, *default_pair);
    if (started) {
        self.parameters.byte_4a6 = u8(value);
    }
    return started;
}
GUEST_EXPORT(0x006edcb0, begin_action_with_byte_4a6<STATE_13>);
GUEST_EXPORT(0x006edd28, begin_action_with_byte_4a6<STATE_14>);
GUEST_EXPORT(0x006edac4, begin_action_with_byte_4a6<STATE_1C>);

// State 0x15 remembers a byte at 0x4a7.
bool begin_action_15(ActorObject &self, u32 priority, u32 value) {
    bool started = begin_plain(self, STATE_15, priority, SECOND_VALUE_6, *default_pair);
    if (started) {
        self.parameters.byte_4a7 = u8(value);
    }
    return started;
}
GUEST_EXPORT(0x006eb898, begin_action_15);

// States 0x19 and 0x1a remember a halfword at 0x49e.
bool begin_action_19(ActorObject &self, u32 priority, u32 value) {
    bool started = begin_plain(self, STATE_19, priority, SECOND_VALUE_6, *second_default_pair);
    if (started) {
        self.parameters.half_49e = u16(value);
    }
    return started;
}
GUEST_EXPORT(0x006ed07c, begin_action_19);

bool begin_action_1a(ActorObject &self, u32 priority, u32 value) {
    bool started = begin_plain(self, STATE_1A, priority, 0.0f, *second_default_pair);
    if (started) {
        self.parameters.half_49e = u16(value);
    }
    return started;
}
GUEST_EXPORT(0x006eb910, begin_action_1a);

// States 0x11 and 0x12 remember an item.
template <u32 STATE>
bool begin_action_with_item(ActorObject &self, u32 priority, const Item &item) {
    bool started = begin_plain(self, STATE, priority, SECOND_VALUE_6, *default_pair);
    if (started) {
        copy_item(self.parameters.item_4a0, item);
    }
    return started;
}
GUEST_EXPORT(0x006ea7ac, begin_action_with_item<STATE_11>);
GUEST_EXPORT(0x006edc28, begin_action_with_item<STATE_12>);

// States 0xd and 0xe remember a float, a halfword and two bytes (the first one replaces the action marker).
template <u32 STATE>
bool begin_action_with_values(ActorObject &self, float value, float second_value, u32 priority, u32 half, u32 first_byte,
                              u32 second_byte) {
    bool started = begin_plain(self, STATE, priority, second_value, *default_pair);
    if (started) {
        self.parameters.half_49e = u16(half);
        self.parameters.value_494 = value;
        self.parameters.marker = u8(first_byte);
        self.parameters.byte_4a5 = u8(second_byte);
    }
    return started;
}
GUEST_EXPORT(0x006ea834, begin_action_with_values<STATE_0D>);
GUEST_EXPORT(0x006edb3c, begin_action_with_values<STATE_0E>);

// ---- other actions

// State 4.
bool begin_action_4(ActorObject &self, float second_value, u32 priority, const u16 &angle_a, const u16 &angle_b, u32 flag) {
    return self.begin_action(STATE_4, priority, *default_vector, SPEED, second_value, angle_a, angle_b, flag, *default_pair);
}
GUEST_EXPORT(0x006e9be8, begin_action_4);

// State 0x10 takes its own vector and speed.
bool begin_action_10(ActorObject &self, u32 priority, u32 half, const Float3 &vector, float speed, float value,
                     float second_value, const WordPair &pair, u32 byte) {
    const u16 angle = 0;
    bool started = self.begin_action(STATE_10, priority, vector, speed, second_value, angle, angle, FLAG_NONE, pair);
    if (started) {
        self.parameters.half_49e = u16(half);
        self.parameters.value_494 = value;
        self.parameters.marker = u8(byte);
    }
    return started;
}
GUEST_EXPORT(0x006ea37c, begin_action_10);

// State 0xb remembers a word of the actor.
bool begin_action_0b(ActorObject &self, u32 priority, u32 value, const Float3 &vector, float speed, const u16 &angle_b,
                     const WordPair &pair) {
    const u16 angle = 0;
    bool started = self.begin_action(STATE_0B, priority, vector, speed, SECOND_VALUE_6, angle, angle_b, FLAG_NONE, pair);
    if (started) {
        self.value_2c = value;
    }
    return started;
}
GUEST_EXPORT(0x006ed328, begin_action_0b);

// ---- scaled actions (see begin_scaled): the scale number is 0, 1 or 2

namespace {

// The scaled actions are numbered state * 16 + scale number.
constexpr u32 STATE_SHIFT = 4;
constexpr u32 SCALE_MASK = 0xf;

}  // namespace

template <u32 CODE>
bool begin_scaled_action(ActorObject &self, u32 priority, const Float3 &vector, const u16 &angle_b, float speed, u32 flag) {
    const u16 angle = 0;
    return begin_scaled(self, CODE >> STATE_SHIFT, priority, vector, speed, angle, angle_b, flag, CODE & SCALE_MASK);
}
GUEST_EXPORT(0x006e9c84, begin_scaled_action<0x10>);
GUEST_EXPORT(0x006e9648, begin_scaled_action<0x21>);
GUEST_EXPORT(0x006e9b7c, begin_scaled_action<0x32>);
GUEST_EXPORT(0x006eda58, begin_scaled_action<0x80>);
GUEST_EXPORT(0x006ed988, begin_scaled_action<0x91>);

template <u32 CODE>
bool begin_scaled_action_with_angles(ActorObject &self, u32 priority, const Float3 &vector, const u16 &angle_a, float speed,
                                     const u16 &angle_b, u32 flag) {
    return begin_scaled(self, CODE >> STATE_SHIFT, priority, vector, speed, angle_a, angle_b, flag, CODE & SCALE_MASK);
}
GUEST_EXPORT(0x006eba04, begin_scaled_action_with_angles<0x50>);
GUEST_EXPORT(0x006eb164, begin_scaled_action_with_angles<0x61>);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

constexpr u32 STACK_CLEARANCE = 0x1000;  // keeps the actor clear of the stack the original works on
constexpr u32 FUZZ_RUNS = 80;

gptr<ActorObject> some_actor(guest::Fuzz &f) {
    f.allocate(STACK_CLEARANCE);
    auto actor = f.allocate(sizeof(ActorObject)).cast<ActorObject>();
    actor->state = f.pick<u8>({0, 5, ActorObject::STATE_LIMIT - 1, ActorObject::STATE_LIMIT, ActorObject::STATE_LIMIT + 3});
    actor->priority = u8(f.below(4));
    actor->byte_554 = u8(f.number());
    for (float &scale : actor->scales) {
        scale = f.pick<float>({0.5f, 1.0f, 2.5f});
    }
    return actor;
}

u32 some_priority(guest::Fuzz &f) {
    return f.below(5);
}

float some_float(guest::Fuzz &f) {
    return f.pick<float>({-1.0f, 0.0f, 0.5f, 3.0f});
}


void fuzz_plain_with_float(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_float(f), some_priority(f));
}
void fuzz_priority(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_priority(f));
}
void fuzz_priority_value(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_priority(f), f.number());
}
void fuzz_float_priority_value(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_float(f), some_priority(f), f.number());
}
void fuzz_with_item(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_priority(f), f.object<Item>());
}
void fuzz_with_values(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_float(f), some_float(f), some_priority(f), f.number(), f.number(), f.number());
}
void fuzz_state_4(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_float(f), some_priority(f), f.object<u16>(), f.object<u16>(), f.number());
}
void fuzz_state_10(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_priority(f), f.number(), f.object<Float3>(), some_float(f), some_float(f),
                some_float(f), f.object<WordPair>(), f.number());
}
void fuzz_state_0b(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_priority(f), f.number(), f.object<Float3>(), some_float(f), f.object<u16>(),
                f.object<WordPair>());
}
void fuzz_scaled(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_priority(f), f.object<Float3>(), f.object<u16>(), some_float(f), f.number());
}
void fuzz_scaled_with_angles(guest::Fuzz &f) {
    f.arguments(some_actor(f), some_priority(f), f.object<Float3>(), f.object<u16>(), some_float(f), f.object<u16>(),
                f.number());
}

}  // namespace

GUEST_FUZZ(0x006e9c2c, FUZZ_RUNS, fuzz_plain_with_float);
GUEST_FUZZ(0x00304224, FUZZ_RUNS, fuzz_priority);
GUEST_FUZZ(0x006ed2c4, FUZZ_RUNS, fuzz_priority);
GUEST_FUZZ(0x006ed388, FUZZ_RUNS, fuzz_priority);
GUEST_FUZZ(0x006ed9f4, FUZZ_RUNS, fuzz_priority);
GUEST_FUZZ(0x006eb990, FUZZ_RUNS, fuzz_float_priority_value);
GUEST_FUZZ(0x006edcb0, FUZZ_RUNS, fuzz_priority_value);
GUEST_FUZZ(0x006edd28, FUZZ_RUNS, fuzz_priority_value);
GUEST_FUZZ(0x006edac4, FUZZ_RUNS, fuzz_priority_value);
GUEST_FUZZ(0x006eb898, FUZZ_RUNS, fuzz_priority_value);
GUEST_FUZZ(0x006ed07c, FUZZ_RUNS, fuzz_priority_value);
GUEST_FUZZ(0x006eb910, FUZZ_RUNS, fuzz_priority_value);
GUEST_FUZZ(0x006ea7ac, FUZZ_RUNS, fuzz_with_item);
GUEST_FUZZ(0x006edc28, FUZZ_RUNS, fuzz_with_item);
GUEST_FUZZ(0x006ea834, FUZZ_RUNS, fuzz_with_values);
GUEST_FUZZ(0x006edb3c, FUZZ_RUNS, fuzz_with_values);
GUEST_FUZZ(0x006e9be8, FUZZ_RUNS, fuzz_state_4);
GUEST_FUZZ(0x006ea37c, FUZZ_RUNS, fuzz_state_10);
GUEST_FUZZ(0x006ed328, FUZZ_RUNS, fuzz_state_0b);
GUEST_FUZZ(0x006e9c84, FUZZ_RUNS, fuzz_scaled);
GUEST_FUZZ(0x006e9648, FUZZ_RUNS, fuzz_scaled);
GUEST_FUZZ(0x006e9b7c, FUZZ_RUNS, fuzz_scaled);
GUEST_FUZZ(0x006eda58, FUZZ_RUNS, fuzz_scaled);
GUEST_FUZZ(0x006ed988, FUZZ_RUNS, fuzz_scaled);
GUEST_FUZZ(0x006eba04, FUZZ_RUNS, fuzz_scaled_with_angles);
GUEST_FUZZ(0x006eb164, FUZZ_RUNS, fuzz_scaled_with_angles);
