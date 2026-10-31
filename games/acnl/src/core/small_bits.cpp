// Two small helpers: clearing or forwarding a 16-bit field, and a 10-bit flag set.
#include "guest/guest.hpp"

namespace {
inline constexpr guest::Function<0x0013fac4, u32(gptr<u16> field, u32 two, u32 limit)> update_field;
constexpr u32 UPDATE_MODE = 2;
constexpr u32 UPDATE_LIMIT = 0xff;
}  // namespace

// Clears the 16-bit field when value is 0 (returning the field's address); otherwise hands the field to
// update_field and returns what it returns.
static u32 clear_field_or_update(gptr<u16> field, u32 value) {
    if (value == 0) {
        *field = 0;
        return field.addr();
    }
    return update_field(field, UPDATE_MODE, UPDATE_LIMIT);
}
GUEST_EXPORT(0x003074b8, clear_field_or_update);

// Ten flags in two bytes.
struct FlagBits10 {
    static constexpr u32 COUNT = 10;
    u8 bytes[2];

    // Sets a flag; indices from COUNT up are ignored.
    void set(u32 index);
};
GUEST_SIZE(FlagBits10, 2);

void FlagBits10::set(u32 index) {
    if (index >= COUNT) {
        return;
    }
    bytes[index / 8] |= u8(1u << (index & 7));
}
GUEST_EXPORT(0x0030755c, FlagBits10::set);
