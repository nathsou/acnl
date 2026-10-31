#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"

// Squared distance between two points in the X/Z plane (Y is ignored).
static float distance_squared_xz(const Float3 &from, const Float3 &to) {
    float dx = to.v[0] - from.v[0];
    float dz = to.v[2] - from.v[2];
    float result = dx * dx;
    result = result + dz * dz;
    return result;
}
GUEST_EXPORT(0x4053c380, distance_squared_xz);

// A set of 40 flags, one bit each.
struct FlagBytes40 {
    static constexpr u32 FLAG_COUNT = 40;

    u8 bytes[FLAG_COUNT / 8];

    // Sets or clears one flag; indices out of range do nothing.
    void set(u32 index, u32 enable);
};

void FlagBytes40::set(u32 index, u32 enable) {
    if (index >= FLAG_COUNT) {
        return;
    }
    u8 mask = u8(1u << (index & 7));
    u8 &byte = bytes[index >> 3];
    if (enable != 0) {
        byte = byte | mask;
    } else {
        byte = byte & ~mask;
    }
}
GUEST_EXPORT(0x4053c3e4, FlagBytes40::set);
