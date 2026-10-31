#include "guest/guest.hpp"

namespace {

// A vector of three floats as the game keeps it in memory.
struct Vec3 {
    float x, y, z;
};
GUEST_SIZE(Vec3, 12);

}  // namespace

// Copies a 3-float vector.
static void copy_vec3(gptr<Vec3> dest, gptr<const Vec3> source) {
    float x = source->x;
    float y = source->y;
    float z = source->z;
    dest->x = x;
    dest->y = y;
    dest->z = z;
}
GUEST_EXPORT(0x402fda60, copy_vec3);

// Copies a 3-float vector with the x component negated, and negates x in the source too (it is modified in place).
// The second argument is unused.
static void copy_vec3_negate_x(gptr<Vec3> dest, u32 unused, gptr<Vec3> source) {
    (void)unused;
    float x = -source->x;
    source->x = x;
    float y = source->y;
    float z = source->z;
    dest->x = x;
    dest->y = y;
    dest->z = z;
}
GUEST_EXPORT(0x402fda6c, copy_vec3_negate_x);
