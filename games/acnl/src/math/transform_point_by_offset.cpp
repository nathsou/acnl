// Two vector helpers: building a point from a translation through a matrix, and offsetting a point on a circle.
#include "graphics/hemisphere_light.hpp"
#include "math/matrix34.hpp"

namespace {

inline constexpr guest::Function<0x0047df5c, float(u32 angle)> sine_of_angle;
inline constexpr guest::Function<0x0047df24, float(u32 angle)> cosine_of_angle;

// Literal-pool constants after f_005d4350: the matrix diagonal and off-diagonal values.
inline guest::global<float, 0x005d43ec> matrix_diagonal;
inline guest::global<float, 0x005d43f0> matrix_off_diagonal;

// What the second arguments are is not known yet.
inline constexpr guest::Function<0x00567580, void(Matrix34 &matrix, gptr<void> argument)> set_matrix_from;
inline constexpr guest::Function<0x0014f3cc, void(Float3 &out, const Matrix34 &matrix, gptr<void> argument)>
    apply_matrix;

constexpr u32 ANGLE_MASK = 0xffff;  // angles are 16-bit

}  // namespace

// Builds a matrix with the given translation (identity otherwise), sets it from `second`, applies it with `third`
// and stores the resulting vector in out unless out is null.
void build_and_apply_matrix(gptr<Float3> out, const Float3 &translation, gptr<void> second, gptr<void> third) {
    guest::StackObject<Matrix34> matrix;
    guest::StackObject<Float3> result;
    float one = *matrix_diagonal;
    float zero = *matrix_off_diagonal;
    float *m = matrix->m;
    m[0] = one;
    m[1] = zero;
    m[2] = zero;
    std::memcpy(&m[3], &translation.v[0], 4);
    m[4] = zero;
    m[5] = one;
    m[6] = zero;
    std::memcpy(&m[7], &translation.v[1], 4);
    m[8] = zero;
    m[9] = zero;
    m[10] = one;
    std::memcpy(&m[11], &translation.v[2], 4);
    set_matrix_from(*matrix, second);
    apply_matrix(*result, *matrix, third);
    if (out) {
        std::memcpy(out.get(), result.ptr().get(), sizeof(Float3));
    }
}
GUEST_EXPORT(0x005d4350, build_and_apply_matrix);

// out = in offset by scale * sin(angle) in x and scale * cos(angle) in z (y is copied). Does nothing for null out.
void offset_on_circle(gptr<Float3> out, const Float3 &in, u32 angle, float scale) {
    if (!out) {
        return;
    }
    u32 angle16 = angle & ANGLE_MASK;
    float sine = sine_of_angle(angle16);
    out->v[0] = in.v[0] + scale * sine;
    std::memcpy(&out->v[1], &in.v[1], 4);
    float cosine = cosine_of_angle(angle16);
    out->v[2] = in.v[2] + scale * cosine;
}
GUEST_EXPORT(0x005d43f4, offset_on_circle);
