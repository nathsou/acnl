// A 32-bit value made of a byte and a 24-bit number, and two 16-bit values stored together: assigning, copying and
// clearing them.
#include "guest/guest.hpp"

namespace {

constexpr u32 BYTE_MASK = 0xff;
constexpr u32 NUMBER_SHIFT = 8;

struct PackedValue {
    u32 raw;  // the byte in bits 0-7, the number in bits 8-31
};
GUEST_SIZE(PackedValue, 4);

struct HalfPair {
    u16 first;
    u16 second;
};
GUEST_SIZE(HalfPair, 4);

}  // namespace

void assign_packed_a(PackedValue &value, u32 byte, u32 number) {
    value.raw = (byte & BYTE_MASK) | (number << NUMBER_SHIFT);
}
GUEST_EXPORT(0x0062575c, assign_packed_a);
GUEST_EXPORT(0x00625924, assign_packed_a);
GUEST_EXPORT(0x00626100, assign_packed_a);

void assign_packed_b(PackedValue &value, u32 byte, u32 number) {
    value.raw = (byte & BYTE_MASK) | (number << NUMBER_SHIFT);
}
GUEST_EXPORT(0x006258e8, assign_packed_b);

void copy_packed_a(PackedValue &value, const PackedValue &other) {
    value.raw = other.raw;
}
GUEST_EXPORT(0x00625774, copy_packed_a);

void copy_packed_b(PackedValue &value, const PackedValue &other) {
    value.raw = other.raw;
}
GUEST_EXPORT(0x00625900, copy_packed_b);

void clear_packed_a(PackedValue &value) {
    value.raw = 0;
}
GUEST_EXPORT(0x00625780, clear_packed_a);
GUEST_EXPORT(0x00625948, clear_packed_a);
GUEST_EXPORT(0x00625f90, clear_packed_a);
GUEST_EXPORT(0x00626124, clear_packed_a);

void clear_packed_b(PackedValue &value) {
    value.raw = 0;
}
GUEST_EXPORT(0x0062590c, clear_packed_b);

// Stores the two 16-bit values read through the pointers.
void set_half_pair(HalfPair &pair, const u16 &first, const u16 &second) {
    pair.first = first;
    pair.second = second;
}
GUEST_EXPORT(0x0062570c, set_half_pair);
