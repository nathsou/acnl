#include <cstring>

#include "arm.hpp"
#include "guest/guest.hpp"

namespace {

// Table of 16-bit angles for ratios in [0, 1], indexed by ratio * scale.
const guest::gptr<const u16> ANGLE_TABLE = guest::gptr<const u16>(0x009753ec);

// Float constants in the function's literal pool.
inline guest::global<float, 0x00565e70> pool_zero;   // the value compared against (zero)
inline guest::global<float, 0x00565e74> pool_scale;  // ratio to table index

constexpr s32 TINY_BITS = 0x34000000;  // magnitudes with bits at or below this count as zero

constexpr u32 QUARTER = 0x4000;
constexpr u32 HALF = 0x8000;
constexpr u32 THREE_QUARTERS = 0xc000;

s32 abs_bits(float v) {
    float a = std::fabs(v);
    u32 bits;
    memcpy(&bits, &a, 4);
    return s32(bits);
}

u32 lookup(float ratio) {
    float scaled = ratio * *pool_scale;
    return ANGLE_TABLE[arm::to_s32(scaled)];
}

}  // namespace

// The angle of the vector (x, y) in 1/65536 turns (0x4000 = 90 degrees), from a table over the smaller/larger ratio.
// The comparisons are written to behave like the original's for NaN.
s16 atan2_angle(float y, float x) {
    float zero = *pool_zero;
    if (abs_bits(y) <= TINY_BITS) {
        return x >= zero ? 0 : s16(HALF);
    }
    if (abs_bits(x) <= TINY_BITS) {
        return y >= zero ? s16(QUARTER) : s16(THREE_QUARTERS);
    }
    float neg_x = -x;
    u32 angle;
    if (!(zero <= y)) {
        float neg_y = -y;
        if (zero > x) {
            if (!(neg_y <= neg_x)) {
                angle = THREE_QUARTERS - lookup(neg_x / neg_y);
            } else {
                angle = HALF + lookup(neg_y / neg_x);
            }
        } else if (!(x < neg_y)) {
            angle = 0 - lookup(neg_y / x);
        } else {
            angle = THREE_QUARTERS + lookup(x / neg_y);
        }
    } else if (!(x >= zero)) {
        if (!(neg_x < y)) {
            angle = HALF - lookup(y / neg_x);
        } else {
            angle = QUARTER + lookup(neg_x / y);
        }
    } else if (!(x >= y)) {
        angle = QUARTER - lookup(x / y);
    } else {
        angle = lookup(y / x);
    }
    return s16(angle);
}
GUEST_EXPORT(0x00565cc0, atan2_angle);

static float some_coordinate(guest::Fuzz &f) {
    return f.pick<float>({0.0f, -0.0f, 1e-8f, -1e-8f, 1.0f, -1.0f, 100.0f, -100.0f, f.real(), f.real(), f.real()});
}

GUEST_FUZZ(0x00565cc0, 400, [](guest::Fuzz &f) { f.arguments(some_coordinate(f), some_coordinate(f)); });
