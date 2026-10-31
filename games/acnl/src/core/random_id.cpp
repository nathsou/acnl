// A random 16-bit identifier whose top bit is always set.
#include "guest/guest.hpp"

namespace {

constexpr s32 ID_RANGE = 0x8000;
constexpr u32 ID_TOP_BIT = 0x8000;

inline constexpr guest::Function<0x002ff6f8, s32(s32 max)> random_below;

}  // namespace

u32 random_id_with_top_bit() {
    return u16(random_below(ID_RANGE)) | ID_TOP_BIT;
}
GUEST_EXPORT(0x0027a460, random_id_with_top_bit);
