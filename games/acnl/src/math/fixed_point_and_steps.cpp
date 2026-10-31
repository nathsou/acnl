// Conversion of a float to 20.12 fixed point (rounding half away from zero), the per-step offset between two points,
// and a few lookups.
#include "arm.hpp"
#include "guest/guest.hpp"

namespace {

constexpr float FIXED_ONE = 4096.0f;  // 1.0 in the fixed-point format (12 fractional bits)
constexpr float HALF = 0.5f;

struct Vector3 {
    float x;
    float y;
    float z;
};
GUEST_SIZE(Vector3, 12);

// What a step count of 0 gives (a vector kept in the game's data).
inline guest::global<Vector3, 0x00ae5658> zero_step_vector;

constexpr u32 SPEED_TABLE_COUNT = 10;
constexpr u8 DEFAULT_SPEED = 4;
inline guest::global<u8[SPEED_TABLE_COUNT], 0x008874dd> speed_table;

inline guest::global<u8, 0x0095356c> pending_bits;

}  // namespace

// Stores the value in fixed point, rounded half away from zero.
static void store_fixed_point(s32 &out, float value) {
    float scaled = value * FIXED_ONE;
    float rounded = value > 0.0f ? HALF + scaled : scaled - HALF;
    out = arm::to_s32(rounded);
}
GUEST_EXPORT(0x005d4180, store_fixed_point);

// The offset per step from `start` to `end` over `steps` steps (x and z; y is 0); a vector from the game's data for 0
// steps.
static void step_offset(Vector3 &out, const Vector3 &start, const Vector3 &end, u32 steps) {
    if (steps == 0) {
        out = *zero_step_vector;
        return;
    }
    float count = static_cast<float>(steps);
    float dx = end.x - start.x;
    float dz = end.z - start.z;
    out.x = dx / count;
    out.y = 0.0f;
    out.z = dz / count;
}
GUEST_EXPORT(0x005d4668, step_offset);

static u32 speed_for_index(u32 index) {
    return index < SPEED_TABLE_COUNT ? speed_table[index] : DEFAULT_SPEED;
}
GUEST_EXPORT(0x005d4788, speed_for_index);

// Sets bit (4 * first + second) mod 8 of the pending bits.
static void set_pending_bit(u32 first, u32 second) {
    u32 bit = (second + first * 4) & 7;
    *pending_bits = *pending_bits | u8(1u << bit);
}
GUEST_EXPORT(0x005d4104, set_pending_bit);
