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

void Matrix34::set_rotation_y(u16 angle) {
    float cos = cosine_of_angle(angle);
    float sin = sine_of_angle(angle);
    m[0] = cos;
    m[1] = 0.0f;
    m[2] = sin;
    m[3] = 0.0f;
    m[4] = 0.0f;
    m[5] = 1.0f;
    m[6] = 0.0f;
    m[7] = 0.0f;
    m[8] = -sin;
    m[9] = 0.0f;
    m[10] = cos;
    m[11] = 0.0f;
}
GUEST_EXPORT(0x00567614, Matrix34::set_rotation_y);

void Matrix34::rotate_y(u16 angle) {
    if (angle == 0) {
        return;
    }
    guest::StackObject<Matrix34> rotation;
    rotation->set_rotation_y(angle);
    multiply(*this, *this, *rotation);
}
GUEST_EXPORT(0x00567580, Matrix34::rotate_y);

void Matrix34::rotate_z(u16 angle) {
    if (angle == 0) {
        return;
    }
    guest::StackObject<Matrix34> rotation;
    float cos = cosine_of_angle(angle);
    float sin = sine_of_angle(angle);
    rotation->m[0] = cos;
    rotation->m[1] = -sin;
    rotation->m[2] = 0.0f;
    rotation->m[3] = 0.0f;
    rotation->m[4] = sin;
    rotation->m[5] = cos;
    rotation->m[6] = 0.0f;
    rotation->m[7] = 0.0f;
    rotation->m[8] = 0.0f;
    rotation->m[9] = 0.0f;
    rotation->m[10] = 1.0f;
    rotation->m[11] = 0.0f;
    multiply(*this, *this, *rotation);
}
GUEST_EXPORT(0x005676b8, Matrix34::rotate_z);

void Matrix34::rotate_y_x_z(u16 x_angle, u16 y_angle, u16 z_angle) {
    rotate_y(y_angle);
    rotate_x(x_angle);
    rotate_z(z_angle);
}
GUEST_EXPORT(0x00567684, Matrix34::rotate_y_x_z);

void Matrix34::set_rotation_z_then_y_x(u16 x_angle, u16 y_angle, u16 z_angle) {
    float cos = cosine_of_angle(z_angle);
    float sin = sine_of_angle(z_angle);
    m[4] = sin;
    m[0] = cos;
    m[5] = cos;
    m[1] = -sin;
    m[8] = 0.0f;
    m[9] = 0.0f;
    m[10] = 1.0f;
    m[11] = 0.0f;
    m[2] = 0.0f;
    m[3] = 0.0f;
    m[6] = 0.0f;
    m[7] = 0.0f;
    rotate_y(y_angle);
    rotate_x(x_angle);
}
GUEST_EXPORT(0x005677bc, Matrix34::set_rotation_z_then_y_x);

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
GUEST_FUZZ(0x00567614, 300, [](guest::Fuzz &f) { f.arguments(some_matrix(f), some_angle(f)); });
GUEST_FUZZ(0x00567580, 300, [](guest::Fuzz &f) { f.arguments(some_matrix(f), some_angle(f)); });
GUEST_FUZZ(0x005676b8, 300, [](guest::Fuzz &f) { f.arguments(some_matrix(f), some_angle(f)); });
GUEST_FUZZ(0x00567684, 300, [](guest::Fuzz &f) { f.arguments(some_matrix(f), some_angle(f), some_angle(f), some_angle(f)); });
GUEST_FUZZ(0x005677bc, 300, [](guest::Fuzz &f) { f.arguments(some_matrix(f), some_angle(f), some_angle(f), some_angle(f)); });
