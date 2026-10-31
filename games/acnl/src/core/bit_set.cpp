#include "core/bit_set.hpp"

#include "arm.hpp"

void BitSet32::clear(u32 index) {
    if (index >= limit) {
        return;
    }
    u32 mask = arm::lsl(1, index);  // indices of 32 and more give no bit
    if ((bits & mask) == 0) {
        return;
    }
    bits &= ~mask;
    count -= 1;
}
GUEST_EXPORT(0x00116e4f, BitSet32::clear);

gptr<BitSet32> BitSet32::assign(const BitSet32 &other) {
    if (&other != this) {
        limit = other.limit;
        bits = other.bits;
        count = other.count;
    }
    return guest::addr_of(this);
}
GUEST_EXPORT(0x00116e93, BitSet32::assign);
