#include "guest/guest.hpp"

namespace {
// Still recompiled; takes 4 at the only call site and returns a signed index.
inline constexpr guest::Function<0x002ff8b0, s32(u32 argument)> query_index;
}  // namespace

// True if the byte at (index + 8) in the object is at least `minimum`, where the index comes from a query; false
// when the index is above 3.
static bool byte_at_index_at_least(gptr<u8> self, u32 minimum) {
    constexpr u32 FIRST_BYTE_OFFSET = 8;
    s32 index = query_index(4);
    if (index > 3) {
        return false;
    }
    return self[index + FIRST_BYTE_OFFSET] >= minimum;
}
GUEST_EXPORT(0x00300f64, byte_at_index_at_least);
