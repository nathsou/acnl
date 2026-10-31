#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x005c507c, u32(u32 query, u32 flag)> query_5c507c;

// Query numbers given to query_5c507c (what each asks is not known yet).
enum Query : u32 {
    QUERY_11 = 0x11,
};

// The second argument of query_5c507c (meaning not known yet; the callers pass 0 or 1).
constexpr u32 QUERY_FLAG_ON = 1;

// Two global bytes whose flags block query 0x11 (what they are is not known yet).
constexpr u32 BLOCK_BYTE_A_ADDRESS = 0x00aadad4;
constexpr u8 BLOCK_BYTE_A_FLAG = 1 << 4;
constexpr u32 BLOCK_BYTE_B_ADDRESS = 0x00aaef14;
constexpr u8 BLOCK_BYTE_B_FLAG = 1 << 5;

guest::global<u8, BLOCK_BYTE_A_ADDRESS> block_byte_a;
guest::global<u8, BLOCK_BYTE_B_ADDRESS> block_byte_b;

}  // namespace

// Query 0x11, unless one of the two blocking flags is set (then 0).
static u32 query_11_unless_blocked() {
    if (*block_byte_a & BLOCK_BYTE_A_FLAG) {
        return 0;
    }
    if (*block_byte_b & BLOCK_BYTE_B_FLAG) {
        return 0;
    }
    return query_5c507c(QUERY_11, QUERY_FLAG_ON);
}
GUEST_EXPORT(0x005c2d5c, query_11_unless_blocked);
