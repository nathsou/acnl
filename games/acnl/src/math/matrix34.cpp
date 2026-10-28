#include "math/matrix34.hpp"

namespace {
// Still recompiled code:
inline constexpr guest::Function<0x0047df24, float(u32 angle)> cosine_of_angle;
inline constexpr guest::Function<0x0047df5c, float(u32 angle)> sine_of_angle;
// dst = a * b
inline constexpr guest::Function<0x0014ef20, void(Matrix34 &dst, const Matrix34 &a, const Matrix34 &b)> multiply;
}  // namespace

void Matrix34::set_rotation_x(u16 angle) {
    float cos = cosine_of_angle(angle);
    float sin = sine_of_angle(angle);
    m[0] = 1.0f;
    m[1] = 0.0f;
    m[2] = 0.0f;
    m[3] = 0.0f;
    m[4] = 0.0f;
    m[5] = cos;
    m[6] = -sin;
    m[7] = 0.0f;
    m[8] = 0.0f;
    m[9] = sin;
    m[10] = cos;
    m[11] = 0.0f;
}
GUEST_EXPORT(0x00567510, Matrix34::set_rotation_x);

void Matrix34::rotate_x(u16 angle) {
    if (angle == 0) {
        return;
    }
    guest::StackObject<Matrix34> rotation;
    float cos = cosine_of_angle(angle);
    float sin = sine_of_angle(angle);
    rotation->m[0] = 1.0f;
    rotation->m[1] = 0.0f;
    rotation->m[2] = 0.0f;
    rotation->m[3] = 0.0f;
    rotation->m[4] = 0.0f;
    rotation->m[5] = cos;
    rotation->m[6] = -sin;
    rotation->m[7] = 0.0f;
    rotation->m[8] = 0.0f;
    rotation->m[9] = sin;
    rotation->m[10] = cos;
    rotation->m[11] = 0.0f;
    multiply(*this, *this, *rotation);
}
GUEST_EXPORT(0x0056747c, Matrix34::rotate_x);

static gptr<Matrix34> some_matrix(guest::Fuzz &f) {
    auto matrix = f.object<Matrix34>();
    for (float &value : matrix->m) {
        value = f.real();
    }
    return matrix;
}

static u32 some_angle(guest::Fuzz &f) {
    return f.pick<u32>({0, 0x10000, 1, 0x4000, 0x8000, 0xffff, f.number(), f.number() & 0xffff});
}

GUEST_FUZZ(0x00567510, 300, [](guest::Fuzz &f) { f.arguments(some_matrix(f), some_angle(f)); });
GUEST_FUZZ(0x0056747c, 300, [](guest::Fuzz &f) { f.arguments(some_matrix(f), some_angle(f)); });
