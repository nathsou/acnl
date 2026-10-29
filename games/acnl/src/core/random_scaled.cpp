// Random values scaled by a factor, an angle in radians, and queries on the game's pair of global fader objects.
#include "core/fuzz_helpers.hpp"
#include "core/random.hpp"
#include "hobj/house_object.hpp"

using hobj::VirtualObject;

namespace {

inline constexpr guest::Function<0x00565cc0, s32(float y, float x)> atan2_angle;

constexpr float CENTER = 0.5f;
constexpr float TWICE = 2.0f;
constexpr float RADIANS_PER_ANGLE_UNIT = 0x1.921fb8p-14f;  // 2 pi / 65536: angles are 16-bit fractions of a turn

// The two objects the queries below ask (either may be null).
struct ObjectPair {
    gptr<VirtualObject> first;
    gptr<VirtualObject> second;
};
inline guest::global<ObjectPair, 0x009753e0> object_pair;

constexpr u32 STATE_SLOT = 0xc / 4;    // virtual returning a state number
constexpr u32 NOTIFY_SLOT = 0x1c / 4;  // virtual with no result used

u32 state_of(gptr<VirtualObject> object) {
    return guest::call_address<u32>(object->vtable[STATE_SLOT], object);
}

}  // namespace

static u32 random_state() {
    return random_generator->state;
}
GUEST_EXPORT(0x00565bec, random_state);

// A random number in [0, scale).
static float random_up_to(float scale) {
    return random_generator->next_float() * scale;
}
GUEST_EXPORT(0x00565c10, random_up_to);

// A random number in [-scale, scale).
static float random_around_zero(float scale) {
    float centered = random_generator->next_float() - CENTER;
    return centered * scale * TWICE;
}
GUEST_EXPORT(0x00565c34, random_around_zero);

// The angle of the point in radians.
static float angle_radians(float y, float x) {
    return RADIANS_PER_ANGLE_UNIT * static_cast<float>(atan2_angle(y, x));
}
GUEST_EXPORT(0x00565c70, angle_radians);

// Whether every object that is present reports `state`.
static bool all_report(u32 state) {
    if (object_pair->first && state_of(object_pair->first) != state) {
        return false;
    }
    if (object_pair->second && state_of(object_pair->second) != state) {
        return false;
    }
    return true;
}

static bool all_report_one() { return all_report(1); }
GUEST_EXPORT(0x00565fe8, all_report_one);
GUEST_EXPORT(0x00566374, all_report_one);  // an identical copy

static bool all_report_zero() { return all_report(0); }
GUEST_EXPORT(0x00566044, all_report_zero);

// Calls the notify virtual of each object that is present.
static void notify_pair() {
    if (object_pair->first) {
        guest::call_address<void>(object_pair->first->vtable[NOTIFY_SLOT], object_pair->first);
    }
    if (object_pair->second) {
        guest::call_address<void>(object_pair->second->vtable[NOTIFY_SLOT], object_pair->second);
    }
}
GUEST_EXPORT(0x00566154, notify_pair);

GUEST_FUZZ(0x00565bec, 100, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x00565c10, 200, [](guest::Fuzz &f) { f.arguments(f.real()); });
GUEST_FUZZ(0x00565c34, 200, [](guest::Fuzz &f) { f.arguments(f.real()); });
GUEST_FUZZ(0x00565c70, 300, [](guest::Fuzz &f) { f.arguments(f.real(), f.real()); });
GUEST_FUZZ(0x00565fe8, 100, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x00566374, 100, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x00566044, 100, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x00566154, 100, [](guest::Fuzz &f) { f.arguments(); });
