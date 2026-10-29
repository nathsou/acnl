// Small questions about objects with state flags, and two numbers computed from floats and integers.
#include "core/fuzz_helpers.hpp"
#include "core/object_flags_171.hpp"

namespace {

// Tunable values in the game's data.
inline guest::global<float, 0x00886888> base_fraction;
inline guest::global<float, 0x00886884> lower_bound_unit;
inline guest::global<float, 0x00886878> upper_bound_unit;
inline guest::global<float, 0x00886880> output_scale;

constexpr float HALVING = 0.5f;
constexpr float LOWER_BOUND_UNITS = 2.0f;
constexpr float UPPER_BOUND_UNITS = 5.4f;
constexpr float FLOOR_VALUE = 0.01f;  // the result for inputs below the lower bound
constexpr float FULL = 1.0f;
constexpr float OFFSET = 16.0f;

}  // namespace

// True when bit 3 is set and bit 5 is clear.
static bool has_flag_bit_3_without_bit_5(const ObjectWithFlags171 &object) {
    if ((object.flags_171 & ObjectWithFlags171::FLAG_BIT_5) != 0) {
        return false;
    }
    return (object.flags_171 & ObjectWithFlags171::FLAG_BIT_3) != 0;
}
GUEST_EXPORT(0x00763830, has_flag_bit_3_without_bit_5);

// Maps `value` between a lower and an upper bound (in units of two tunable values) to a fraction, blends it with a base
// fraction (halved when `halve_base`) and scales the result. (The first argument is not used.)
static float blended_fraction(u32 /*unused*/, u32 halve_base, float value) {
    float base = *base_fraction;
    if (halve_base != 0) {
        base = base * HALVING;
    }
    float lower = *lower_bound_unit * LOWER_BOUND_UNITS;
    if (value < lower) {
        value = FLOOR_VALUE;
    } else {
        float upper = *upper_bound_unit * UPPER_BOUND_UNITS;
        value = (value - lower) / (upper - lower);
    }
    float rest = FULL - base;
    float blended = base + value * rest;
    return blended * *output_scale;
}
GUEST_EXPORT(0x00763a70, blended_fraction);

// The value minus 16, or 0 for a value that is not positive. (The first argument is not used.)
static float value_above_offset(u32 /*unused*/, s32 value) {
    if (value <= 0) {
        return 0.0f;
    }
    return static_cast<float>(value) - OFFSET;
}
GUEST_EXPORT(0x00763c1c, value_above_offset);

GUEST_FUZZ(0x00763830, 200, [](guest::Fuzz &f) {
    auto object = f.object<ObjectWithFlags171>();
    f.arguments(object);
});
GUEST_FUZZ(0x00763a70, 400, [](guest::Fuzz &f) {
    f.arguments(f.number(), f.below(2),
                f.pick<float>({0.0f, 0.01f, 0.02f, 0.03f, 1.0f, 5.0f, f.real() / 100, f.real()}));
});
GUEST_FUZZ(0x00763c1c, 300, [](guest::Fuzz &f) {
    f.arguments(f.number(), f.pick<s32>({0, 1, 16, 17, -1, 1000, INT32_MIN, INT32_MAX, static_cast<s32>(f.number())}));
});
