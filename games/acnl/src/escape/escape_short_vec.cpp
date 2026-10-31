// Conversions between float vectors and the 16-bit fixed-point vector kept in escape objects at 0x2c.
#include "arm.hpp"
#include "guest/guest.hpp"

namespace {

// Three signed 16-bit components (the scale is a global float; what the vector means is not known yet).
struct ShortVec3 {
    s16 x, y, z;
};
GUEST_SIZE(ShortVec3, 6);

struct EscapeShortVecObject {
    u8 unknown_00[0x2c];
    ShortVec3 vec;
};
GUEST_OFFSET(EscapeShortVecObject, vec, 0x2c);

struct FloatVec3 {
    float x, y, z;
};
GUEST_SIZE(FloatVec3, 12);

inline guest::global<float, 0x008ae144> to_short_scale;
inline guest::global<float, 0x008ae138> from_short_scale;

}  // namespace

// Stores a float vector, each component multiplied by a scale and truncated to 16 bits, into the object.
static void store_scaled_vec(EscapeShortVecObject &self, const FloatVec3 &source) {
    float scale = *to_short_scale;
    s32 x = arm::to_s32(source.x * scale);
    s32 y = arm::to_s32(source.y * scale);
    s32 z = arm::to_s32(source.z * scale);
    self.vec.x = s16(x);
    self.vec.y = s16(y);
    self.vec.z = s16(z);
}
GUEST_EXPORT(0x402fe794, store_scaled_vec);

// Writes the object's 16-bit vector as floats, each multiplied by a scale.
static void load_scaled_vec(FloatVec3 &out, const EscapeShortVecObject &source) {
    float scale = *from_short_scale;
    float z = float(s32(source.vec.z));
    float y = float(s32(source.vec.y));
    float x = float(s32(source.vec.x));
    out.x = x * scale;
    out.y = y * scale;
    out.z = z * scale;
}
GUEST_EXPORT(0x402fe800, load_scaled_vec);
