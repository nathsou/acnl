#include "guest/guest.hpp"

namespace {
inline constexpr guest::Function<0x002ff8b0, s32(u32 value)> query_index;

constexpr u32 FLAG_TABLE_OFFSET = 0x7ec;
constexpr u32 MAX_INDEX = 0xf;
constexpr s32 LAST_VALID_QUERY_RESULT = 3;
constexpr u32 QUERY_ARGUMENT = 4;
}  // namespace

// Tests bit `index` (below 15) of a halfword in a table inside the object; which halfword depends on query_index(4).
static bool has_flag_bit(gptr<void> self, u32 index) {
    if (index >= MAX_INDEX) {
        return false;
    }
    s32 slot = query_index(QUERY_ARGUMENT);
    if (slot > LAST_VALID_QUERY_RESULT) {
        return false;
    }
    u16 bits = *gptr<u16>(self.addr() + u32(slot) * 2 + (index >> 4) * 2 + FLAG_TABLE_OFFSET);
    return (u16(1u << (index & 0xf)) & bits) != 0;
}
GUEST_EXPORT(0x00300f9c, has_flag_bit);
