#include "guest/guest.hpp"

using guest::gptr;

namespace {

struct SubValueBlock {
    u8 unknown_00[0xc8];
    u8 value_c8;
};
GUEST_OFFSET(SubValueBlock, value_c8, 0xc8);

// An object with a pointer to a sub block at 0xb4 (class not known yet).
struct SubValueOwner {
    static constexpr u8 NO_VALUE = 2;

    u8 unknown_00[0xb4];
    gptr<SubValueBlock> sub;  // may be null

    u8 query_value(u32 unknown_r1);
};
GUEST_OFFSET(SubValueOwner, sub, 0xb4);

// (the caller's r1 passes through to it untouched)
inline constexpr guest::Function<0x007237e0, u32(SubValueOwner &self, u32 unknown_r1)> sub_is_ready;

}  // namespace

// The sub block's byte at 0xc8 when it exists and the readiness check passes, else NO_VALUE.
u8 SubValueOwner::query_value(u32 unknown_r1) {
    if (!sub) {
        return NO_VALUE;
    }
    if (sub_is_ready(*this, unknown_r1) == 0) {
        return NO_VALUE;
    }
    return sub->value_c8;
}
GUEST_EXPORT(0x0071ef10, SubValueOwner::query_value);
