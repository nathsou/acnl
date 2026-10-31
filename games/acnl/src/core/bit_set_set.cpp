#include "core/bit_set.hpp"

#include "arm.hpp"

void BitSet32::set(u32 index) {
    if (limit <= index) {
        return;
    }
    u32 mask = arm::lsl(1, index);  // indices of 32 and more give no bit
    if ((bits & mask) != 0) {
        return;
    }
    bits |= mask;
    count += 1;
}
GUEST_EXPORT(0x00116e31, BitSet32::set);
