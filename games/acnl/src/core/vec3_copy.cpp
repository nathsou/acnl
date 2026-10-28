#include "guest/guest.hpp"

namespace {

// A vector of three floats as the game keeps it in memory.
struct Vec3 {
    float x, y, z;
};
GUEST_SIZE(Vec3, 12);

Vec3 some_vec3(guest::Fuzz &f) {
    return Vec3{f.real(), f.real(), f.pick<float>({0.0f, -0.0f, 1.0f, f.real()})};
}

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

GUEST_FUZZ(0x402fda60, 200, [](guest::Fuzz &f) {
    auto dest = f.object<Vec3>();
    auto source = f.object<Vec3>();
    *source = some_vec3(f);
    f.arguments(dest, gptr<const Vec3>(source));
});
GUEST_FUZZ(0x402fda6c, 200, [](guest::Fuzz &f) {
    auto dest = f.object<Vec3>();
    auto source = f.object<Vec3>();
    *source = some_vec3(f);
    f.arguments(dest, f.number(), source);
});
