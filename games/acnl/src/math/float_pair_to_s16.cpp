// Converts the x and z of a float vector to a pair of 16-bit fixed-point values.
#include "arm.hpp"
#include "graphics/hemisphere_light.hpp"

namespace {

struct Short2 {
    s16 x;
    s16 y;
};
GUEST_SIZE(Short2, 4);

// Literal-pool constants stored right after each function (values not shown in the disassembly).
inline guest::global<float, 0x005d41f8> scale_a;
inline guest::global<float, 0x005d423c> scale_b;

void convert(Short2 &out, const Float3 &in, float scale) {
    out.x = s16(arm::to_s32(in.v[0] * scale));
    out.y = s16(arm::to_s32(in.v[2] * scale));
}

}  // namespace

// out = (x, z) of the vector, scaled and truncated to 16 bits.
void float3_xz_to_short2_a(Short2 &out, const Float3 &in) {
    convert(out, in, *scale_a);
}
GUEST_EXPORT(0x005d41b8, float3_xz_to_short2_a);

// Same conversion with its own scale constant.
void float3_xz_to_short2_b(Short2 &out, const Float3 &in) {
    convert(out, in, *scale_b);
}
GUEST_EXPORT(0x005d41fc, float3_xz_to_short2_b);
