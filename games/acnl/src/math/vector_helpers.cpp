// Small float-vector helpers: rotation of vector components, triangle normals, normalization, copying.
#include <bit>
#include <cmath>

#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x0047df24, float(u32 angle)> cosine_of_angle;
inline constexpr guest::Function<0x0047df5c, float(u32 angle)> sine_of_angle;

// The literal the normalization divides by the length (read from the code's literal pool).
inline guest::global<float, 0x0056a3c8> normalize_numerator;

// bit pattern of |length| above which a vector is normalized (a tiny threshold, as an integer compare)
constexpr s32 MIN_LENGTH_BITS = 0x34000000;

// A triangle of three points and its normal.
struct Triangle {
    u8 unknown_00[8];
    Float3 points[3];
    Float3 normal;
};
GUEST_OFFSET(Triangle, points, 0x08);
GUEST_OFFSET(Triangle, normal, 0x2c);
GUEST_SIZE(Triangle, 0x38);

}  // namespace

// Rotates the x and z components by an angle in the game's 16-bit units.
static void rotate_xz(Float3 &vec, u32 angle) {
    float c = cosine_of_angle(angle & 0xffff);
    float s = sine_of_angle(angle & 0xffff);
    float x = vec.v[0];
    float z = vec.v[2];
    float new_x = c * x;
    float new_z = c * z;
    new_x = new_x + s * z;
    new_z = new_z - s * x;
    vec.v[0] = new_x;
    vec.v[2] = new_z;
}
GUEST_EXPORT(0x0056a224, rotate_xz);

// Rotates the x and y components by an angle in the game's 16-bit units.
static void rotate_xy(Float3 &vec, u32 angle) {
    float c = cosine_of_angle(angle & 0xffff);
    float s = sine_of_angle(angle & 0xffff);
    float x = vec.v[0];
    float y = vec.v[1];
    float new_x = c * x;
    float new_y = s * x;
    new_x = new_x - s * y;
    new_y = new_y + c * y;
    vec.v[0] = new_x;
    vec.v[1] = new_y;
}
GUEST_EXPORT(0x0056a274, rotate_xy);

// Stores the three points and computes the (unnormalized) normal (p1 - p0) x (p2 - p1). Returns the normal.
static gptr<Float3> set_triangle(Triangle &self, const Float3 &p0, const Float3 &p1, const Float3 &p2) {
    self.points[0] = p0;
    self.points[1] = p1;
    self.points[2] = p2;
    float ax = self.points[1].v[0] - self.points[0].v[0];
    float ay = self.points[1].v[1] - self.points[0].v[1];
    float az = self.points[1].v[2] - self.points[0].v[2];
    float bx = self.points[2].v[0] - self.points[1].v[0];
    float by = self.points[2].v[1] - self.points[1].v[1];
    float bz = self.points[2].v[2] - self.points[1].v[2];
    float nx = ay * bz;
    float ny = az * bx;
    float nz = ax * by;
    nx = nx - az * by;
    ny = ny - ax * bz;
    nz = nz - ay * bx;
    self.normal.v[0] = nx;
    self.normal.v[1] = ny;
    self.normal.v[2] = nz;
    return guest::addr_of(self.normal);
}
GUEST_EXPORT(0x0056a2c0, set_triangle);

// Scales the vector to unit length, unless it is (nearly) zero.
static void normalize(Float3 &vec) {
    float x = vec.v[0];
    float y = vec.v[1];
    float z = vec.v[2];
    float sum = x * x;
    sum = sum + y * y;
    sum = sum + z * z;
    float length = std::sqrt(sum);
    if (s32(std::bit_cast<u32>(std::fabs(length))) <= MIN_LENGTH_BITS) {
        return;
    }
    float inverse = *normalize_numerator / length;
    vec.v[0] = x * inverse;
    vec.v[1] = y * inverse;
    vec.v[2] = z * inverse;
}
GUEST_EXPORT(0x0056a378, normalize);

// Copies three floats.
static void copy_float3(Float3 &dest, const Float3 &source) {
    dest.v[0] = source.v[0];
    dest.v[1] = source.v[1];
    dest.v[2] = source.v[2];
}
GUEST_EXPORT(0x0056a3cc, copy_float3);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<Float3> some_float3(guest::Fuzz &f) {
    auto v = f.object<Float3>();
    for (u32 i = 0; i < 3; i++) {
        v->v[i] = f.pick<float>({0.0f, 1.0f, -1.0f, 1e-10f, f.real(), f.real()});
    }
    return v;
}

GUEST_FUZZ(0x0056a224, 300, [](guest::Fuzz &f) { f.arguments(some_float3(f), f.number()); });
GUEST_FUZZ(0x0056a274, 300, [](guest::Fuzz &f) { f.arguments(some_float3(f), f.number()); });
GUEST_FUZZ(0x0056a2c0, 300, [](guest::Fuzz &f) {
    f.arguments(f.object<Triangle>(), some_float3(f), some_float3(f), some_float3(f));
});
GUEST_FUZZ(0x0056a378, 300, [](guest::Fuzz &f) { f.arguments(some_float3(f)); });
GUEST_FUZZ(0x0056a3cc, 200, [](guest::Fuzz &f) { f.arguments(some_float3(f), some_float3(f)); });
