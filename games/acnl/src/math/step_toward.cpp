// Stepping a stored value towards a target without passing it, and range tests, as the game's animation code uses
// them. The step is added (towards the target, whichever side the value is on); reaching or passing the target stores
// the target and answers true.
#include <cmath>

#include "guest/guest.hpp"

namespace {

constexpr u32 NO_STEP = 0;

s32 narrow(s32 value) { return s32(s16(value)); }

// The fuzz inputs: values and targets close to each other, with steps of both signs.
void fuzz_step(guest::Fuzz &f, gptr<void> value, u32 target_limit) {
    f.arguments(value, f.below(target_limit), f.pick<u32>({0, 1, 2, 5, 10, 0xffffffff, 0xfffffffe, 0xfffffff6, 0x10000, 0x1fff0}));
}

}  // namespace

// Moves the signed halfword towards the target by the step; true once the target is reached (the first form computes
// the overshoot from the signed product of the remaining distance and the step).
bool step_half_towards_a(s16 &value, s32 target, u32 step) {
    s32 current = value;
    if (current == target) {
        return true;
    }
    if (step == NO_STEP) {
        return false;
    }
    s32 signed_step = s32(step);
    if (narrow(current - target) > 0) {
        signed_step = narrow(-s32(step));
    }
    s32 next = current + signed_step;
    s32 remaining = narrow(next - target);
    value = s16(next);
    if (remaining * narrow(signed_step) >= 0) {
        value = s16(target);
        return true;
    }
    return false;
}
GUEST_EXPORT(0x0056ade4, step_half_towards_a);
GUEST_FUZZ(0x0056ade4, 300, [](guest::Fuzz &f) {
    auto value = f.allocate(4).cast<s16>();
    *value = s16(f.below(40));
    fuzz_step(f, value, 40);
});

// The same for an unsigned byte.
bool step_byte_towards(u8 &value, s32 target, u32 step) {
    s32 current = value;
    if (step == NO_STEP) {
        return current == target;
    }
    s32 signed_step = s32(step);
    if (current > target) {
        signed_step = narrow(-s32(step));
    }
    s32 next = narrow(current + signed_step);
    if (next == target) {
        value = u8(target);
        return true;
    }
    bool above = target < next;
    bool moving_up = signed_step >= 0;
    if (above != moving_up) {
        value = u8(next);
        return false;
    }
    value = u8(target);
    return true;
}
GUEST_EXPORT(0x0056b148, step_byte_towards);
GUEST_FUZZ(0x0056b148, 300, [](guest::Fuzz &f) {
    auto value = f.allocate(4).cast<u8>();
    *value = u8(f.below(40));
    fuzz_step(f, value, 40);
});

// The same for a 32-bit value.
bool step_word_towards(s32 &value, s32 target, u32 step) {
    s32 current = value;
    if (current == target) {
        return true;
    }
    if (step == NO_STEP) {
        return false;
    }
    s32 signed_step = s32(step);
    if (current > target) {
        signed_step = -s32(step);
    }
    current += signed_step;
    value = current;
    if (current == target) {
        value = target;
        return true;
    }
    bool above = current > target;
    bool moving_up = signed_step > 0;
    if (above != moving_up) {
        return false;
    }
    value = target;
    return true;
}
GUEST_EXPORT(0x0056b1b8, step_word_towards);
GUEST_FUZZ(0x0056b1b8, 300, [](guest::Fuzz &f) {
    auto value = f.allocate(4).cast<s32>();
    *value = s32(f.below(40));
    fuzz_step(f, value, 40);
});

// The same for a signed halfword (second form).
bool step_half_towards_b(s16 &value, s32 target, u32 step) {
    s32 current = value;
    if (current == target) {
        return true;
    }
    if (step == NO_STEP) {
        return false;
    }
    s32 signed_step = s32(step);
    if (current > target) {
        signed_step = narrow(-s32(step));
    }
    current = narrow(current + signed_step);
    value = s16(current);
    if (current == target) {
        value = s16(target);
        return true;
    }
    bool above = current > target;
    bool moving_up = signed_step > 0;
    if (above != moving_up) {
        return false;
    }
    value = s16(target);
    return true;
}
GUEST_EXPORT(0x0056b21c, step_half_towards_b);
GUEST_FUZZ(0x0056b21c, 300, [](guest::Fuzz &f) {
    auto value = f.allocate(4).cast<s16>();
    *value = s16(f.below(40));
    fuzz_step(f, value, 40);
});

// The distance between two values as signed halfwords.
s32 half_distance(s32 a, s32 b) {
    s32 difference = narrow(a - b);
    return difference < 0 ? -difference : difference;
}
GUEST_EXPORT(0x0056b06c, half_distance);
GUEST_FUZZ(0x0056b06c, 200, [](guest::Fuzz &f) { f.arguments(f.number(), f.number()); });

// Whether the value lies between the two bounds (in either order), inclusive.
bool between_ints(s32 value, s32 first, s32 second) {
    if (first < second) {
        return value >= first && value <= second;
    }
    return value >= second && value <= first;
}
GUEST_EXPORT(0x0056b038, between_ints);
GUEST_FUZZ(0x0056b038, 300, [](guest::Fuzz &f) { f.arguments(f.number(), f.number(), f.number()); });

// The same for floats; false when any of them is not a number.
bool between_floats(float value, float first, float second) {
    if (std::isnan(value) || std::isnan(first) || std::isnan(second)) {
        return false;
    }
    if (first < second) {
        return value >= first && value <= second;
    }
    return value >= second && value <= first;
}
GUEST_EXPORT(0x0056afe8, between_floats);
GUEST_FUZZ(0x0056afe8, 300, [](guest::Fuzz &f) { f.arguments(f.real(), f.real(), f.real()); });

namespace {

constexpr float ZERO = 0.0f;
constexpr u32 LEAP_CYCLE = 4;
constexpr s32 CENTURY = 100;
constexpr u32 SIXTEEN_MASK = 0xf;
constexpr u32 FEBRUARY = 2;
constexpr u32 LEAP_FEBRUARY_DAYS = 29;
constexpr u32 DAY_GROUP_MODE = 5;
constexpr u32 DAY_GROUP_FIRST = 5;

inline guest::global<u8[13], 0x0089026f> days_per_month;  // indexed by the month, 1-12
inline guest::global<u64, 0x0095c4d8> current_time_value;
inline guest::global<u64, 0x0095c4e0> second_time_value;
inline constexpr guest::Function<0x005d46dc, u32()> value_for_mode;

}  // namespace

// Moves the float towards the target by the step; true once reached or passed.
bool step_float_towards(float &value, float target, float step) {
    float current = value;
    if (current == target) {
        return true;
    }
    if (step == ZERO) {
        return false;
    }
    if (current > target) {
        step = -step;
    }
    current = current + step;
    value = current;
    if (current == target) {
        value = target;
        return true;
    }
    bool above = current > target;
    bool moving_up = step > ZERO;
    if (above != moving_up) {
        return false;
    }
    value = target;
    return true;
}
GUEST_EXPORT(0x0056b0c0, step_float_towards);
GUEST_FUZZ(0x0056b0c0, 300, [](guest::Fuzz &f) {
    auto value = f.allocate(4).cast<float>();
    *value = f.real();
    f.arguments(value, f.real(), f.real());
});

// Moves the float towards the target by the remaining distance times the gain, limited to plus or minus the limit.
void ease_float_towards(float &value, float target, float gain, float limit) {
    float current = value;
    if (current == target) {
        return;
    }
    float delta = (target - current) * gain;
    if (delta > limit) {
        delta = limit;
    } else if (delta < -limit) {
        delta = -limit;
    }
    value = current + delta;
}
GUEST_EXPORT(0x0056b394, ease_float_towards);
GUEST_FUZZ(0x0056b394, 300, [](guest::Fuzz &f) {
    auto value = f.allocate(4).cast<float>();
    *value = f.real();
    f.arguments(value, f.real(), f.real(), std::fabs(f.real()));
});

// The days of the month (1-12) of the year, with the game's leap year rule (every fourth year, except centuries that
// are not multiples of sixteen).
u32 days_in_month(s32 year, u32 month) {
    bool leap = false;
    if ((year & (LEAP_CYCLE - 1)) == 0) {
        s32 remainder = year - CENTURY * (year / CENTURY);
        leap = remainder != 0 || (year & SIXTEEN_MASK) == 0;
    }
    if (leap && month == FEBRUARY) {
        return LEAP_FEBRUARY_DAYS;
    }
    return (*days_per_month)[month];
}
GUEST_EXPORT(0x0056b4d4, days_in_month);
GUEST_FUZZ(0x0056b4d4, 300, [](guest::Fuzz &f) {
    f.arguments(f.pick<s32>({2000, 1900, 2100, 2024, 2023, 2200, 1600, s32(f.below(400))}), f.pick<u32>({1, 2, 3, 12}));
});

// Two 64-bit times kept in the game's clock block.
u64 current_time() { return *current_time_value; }
u64 second_time() { return *second_time_value; }
GUEST_EXPORT(0x0056b528, current_time);
GUEST_EXPORT(0x0056b960, second_time);
GUEST_FUZZ(0x0056b528, 20, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x0056b960, 20, [](guest::Fuzz &f) { f.arguments(); });

// An object with a signed value at 7.
struct ValueHolder {
    u8 unknown_00[7];
    s8 value;
};
GUEST_OFFSET(ValueHolder, value, 7);

// Groups the value into 0-5: below 5 is group 5, then limits that differ between mode 5 and the other modes.
u32 value_group(const ValueHolder &holder) {
    bool mode_5 = value_for_mode() == DAY_GROUP_MODE;
    s32 value = holder.value;
    if (value < s32(DAY_GROUP_FIRST)) {
        return DAY_GROUP_FIRST;
    }
    if (value < 8) {
        return 0;
    }
    if (value < 0xc) {
        return 1;
    }
    if (value < (mode_5 ? 0x11 : 0x10)) {
        return 2;
    }
    if (value < (mode_5 ? 0x15 : 0x13)) {
        return 3;
    }
    return 4;
}
GUEST_EXPORT(0x0056b970, value_group);
GUEST_FUZZ(0x0056b970, 200, [](guest::Fuzz &f) {
    auto holder = f.object<ValueHolder>();
    holder->value = f.pick<s8>({0, 4, 5, 7, 8, 11, 12, 15, 16, 17, 18, 19, 20, 21, 30, -3});
    f.arguments(holder);
});
