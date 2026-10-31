#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// A button slot's state: kind at 0x14 selects which float is tested.
struct ButtonSlotState {
    static constexpr u8 KIND_RANGE_START = 1;
    static constexpr u8 KIND_UPPER_LIMIT = 3;

    u8 unknown_00[4];
    float value_4;
    float value_8;
    u8 unknown_0c[8];
    u8 kind;
};
GUEST_OFFSET(ButtonSlotState, value_4, 4);
GUEST_OFFSET(ButtonSlotState, value_8, 8);
GUEST_OFFSET(ButtonSlotState, kind, 0x14);

// Float constants stored in the literal pool after f_0074fdd0 (read from the code image).
inline guest::global<float, 0x0074fe2c> range_start_margin;
inline guest::global<float, 0x0074fe30> upper_limit;

}  // namespace

// Whether a slot's value is within its limit: kind 1 compares value_8 with value_4 minus a margin, kind 3 checks
// value_8 against an upper limit; other kinds fail. NaN fails both tests.
bool button_slot_check(ButtonSlotState &slot) {
    if (slot.kind == ButtonSlotState::KIND_RANGE_START) {
        float threshold = slot.value_4 - *range_start_margin;
        return slot.value_8 >= threshold;
    }
    if (slot.kind == ButtonSlotState::KIND_UPPER_LIMIT) {
        return slot.value_8 <= *upper_limit;
    }
    return false;
}
GUEST_EXPORT(0x0074fdd0, button_slot_check);

// The squared distance between two points on the X/Z plane.
float distance_squared_xz(const Float3 &a, const Float3 &b) {
    float dx = b.v[0] - a.v[0];
    float dz = b.v[2] - a.v[2];
    float result = dx * dx;
    return result + dz * dz;
}
GUEST_EXPORT(0x0074fe34, distance_squared_xz);
GUEST_EXPORT(0x40206398, distance_squared_xz);
GUEST_EXPORT(0x404e3b14, distance_squared_xz);

// out = a - b
void float3_subtract(Float3 &out, const Float3 &a, const Float3 &b) {
    float x = a.v[0] - b.v[0];
    float y = a.v[1] - b.v[1];
    float z = a.v[2] - b.v[2];
    out.v[0] = x;
    out.v[1] = y;
    out.v[2] = z;
}
GUEST_EXPORT(0x0074fe58, float3_subtract);
GUEST_EXPORT(0x40538c6c, float3_subtract);

// out = a * scale
void float3_scale(Float3 &out, const Float3 &a, float scale) {
    float x = a.v[0] * scale;
    float y = a.v[1] * scale;
    float z = a.v[2] * scale;
    out.v[0] = x;
    out.v[1] = y;
    out.v[2] = z;
}
GUEST_EXPORT(0x0074fe88, float3_scale);

// out = a + b
void float3_add(Float3 &out, const Float3 &a, const Float3 &b) {
    float x = a.v[0] + b.v[0];
    float y = a.v[1] + b.v[1];
    float z = a.v[2] + b.v[2];
    out.v[0] = x;
    out.v[1] = y;
    out.v[2] = z;
}
GUEST_EXPORT(0x0074feb0, float3_add);
