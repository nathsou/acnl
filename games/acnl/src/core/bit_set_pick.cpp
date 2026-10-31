// Picking a random member of a BitSet32.
#include "arm.hpp"
#include "core/bit_set.hpp"

namespace {

// Rolls a random number from the set's count (the callee's exact meaning is not known yet).
inline constexpr guest::Function<0x002ff6f4, u32(u32 count)> roll_2ff6f4;

constexpr s32 NOT_FOUND = -1;

// The index of a randomly chosen set flag: rolls a number from the count and returns the flag at that position among
// the set flags (below the limit). -1 when the count is 0 or no flag is at that position.
s32 pick_random_set_bit(const BitSet32 &set) {
    if (set.count == 0) {
        return NOT_FOUND;
    }
    u32 skip = roll_2ff6f4(set.count);
    for (s32 index = 0; set.limit > u32(0) && index < s32(set.limit); index++) {
        if (arm::lsl(1, index) & set.bits) {
            if (skip == 0) {
                return index;
            }
            skip--;
        }
    }
    return NOT_FOUND;
}

}  // namespace

GUEST_EXPORT(0x002fe419, pick_random_set_bit);
