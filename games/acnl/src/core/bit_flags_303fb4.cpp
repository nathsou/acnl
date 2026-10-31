// Small bit-array accessors and two checks of a pair of 8-byte stamps (meaning not known yet).
#include "guest/guest.hpp"

namespace {

// Three 32-bit words, passed around as one value (meaning not known yet).
struct Words12 {
    u32 word[3];
};
GUEST_SIZE(Words12, 12);

constexpr u32 SET_BIT_LIMIT = 0x28;  // set_bit ignores indices at or above this
constexpr u32 GET_BIT_LIMIT = 0x1c;  // get_bit reads 0 for indices at or above this

// Subject of the two checks: two 8-byte stamps at 0x09 and 0x0e (they overlap; the struct only provides addresses).
struct StampSubject {
    u8 unknown_00[9];
    u8 stamp_09[5];
    u8 stamp_0e[8];
};
GUEST_OFFSET(StampSubject, stamp_09, 9);
GUEST_OFFSET(StampSubject, stamp_0e, 0x0e);

inline constexpr guest::Function<0x0030a488, void(Words12 &value, s32 delta, u32 unknown_r2, u32 unknown_r3,
                                                  u32 unknown_stack)>
    advance_words12;
inline constexpr guest::Function<0x0058dc80, u32(u32 kind, u32 w0, u32 w1, u32 w2, u32 unknown_stack)> check_words12;
inline constexpr guest::Function<0x002fb338, bool(gptr<const u8> stamp)> stamp_is_set;
inline constexpr guest::Function<0x003036dc, s32(gptr<const u8> stamp, Words12 &value, u32 unknown_r2, u32 unknown_r3)>
    compare_stamp;

// Shared body of the two checks; only the kind and the stamp differ.
bool check_stamp(u32 kind, gptr<const u8> stamp, const Words12 &source) {
    guest::StackObject<Words12> value;
    *value = source;
    advance_words12(*value, -1, 0, 0, 0);
    if (check_words12(kind, value->word[0], value->word[1], value->word[2], 1) != 0) {
        return false;
    }
    if (!stamp_is_set(stamp)) {
        return true;
    }
    return compare_stamp(stamp, *value, 1, 1) > 0;
}

struct FlagsHolder {
    u8 unknown_000[0xb09];
    u8 flags;
};
GUEST_OFFSET(FlagsHolder, flags, 0xb09);

constexpr u8 FLAG_ALWAYS_SET = 0x02;  // meaning not known yet
constexpr u8 FLAG_ENABLED = 0x08;     // meaning not known yet

}  // namespace

// Sets or clears a bit of a bit array (bit i is bit i % 8 of byte i / 8); indices of 40 and above do nothing.
static void set_bit(gptr<u8> bits, u32 index, u32 value) {
    if (index >= SET_BIT_LIMIT) {
        return;
    }
    u8 mask = u8(1u << (index & 7));
    if (value != 0) {
        bits[index >> 3] |= mask;
    } else {
        bits[index >> 3] &= ~mask;
    }
}
GUEST_EXPORT(0x00303fb4, set_bit);
GUEST_EXPORT(0x4000a79c, set_bit);
GUEST_EXPORT(0x40037690, set_bit);
GUEST_EXPORT(0x40056e70, set_bit);
GUEST_EXPORT(0x40073e50, set_bit);
GUEST_EXPORT(0x4008bc44, set_bit);
GUEST_EXPORT(0x400c1478, set_bit);
GUEST_EXPORT(0x400d5e08, set_bit);
GUEST_EXPORT(0x40142ac8, set_bit);
GUEST_EXPORT(0x401ac2b4, set_bit);
GUEST_EXPORT(0x40271660, set_bit);
GUEST_EXPORT(0x40281c7c, set_bit);
GUEST_EXPORT(0x40301bec, set_bit);
GUEST_EXPORT(0x403ead8c, set_bit);
GUEST_EXPORT(0x404e40fc, set_bit);
GUEST_EXPORT(0x405e2670, set_bit);
GUEST_EXPORT(0x405f144c, set_bit);
GUEST_EXPORT(0x40601420, set_bit);
GUEST_EXPORT(0x40613cd4, set_bit);
GUEST_EXPORT(0x406332c0, set_bit);
GUEST_EXPORT(0x40649230, set_bit);
GUEST_EXPORT(0x40684000, set_bit);
GUEST_EXPORT(0x406c5b20, set_bit);
GUEST_EXPORT(0x406e2420, set_bit);
GUEST_EXPORT(0x406f7d64, set_bit);
GUEST_EXPORT(0x40727564, set_bit);
GUEST_EXPORT(0x40779ccc, set_bit);

// Reads a bit of a bit array; indices of 28 and above read as 0.
static bool get_bit(gptr<const u8> bits, u32 index) {
    if (index >= GET_BIT_LIMIT) {
        return false;
    }
    return (bits[index >> 3] >> (index & 7)) & 1;
}
GUEST_EXPORT(0x00304004, get_bit);

static bool check_stamp_0e(StampSubject &self, const Words12 &source) {
    return check_stamp(0, guest::addr_of(self.stamp_0e[0]), source);
}
GUEST_EXPORT(0x0030400c, check_stamp_0e);

static bool check_stamp_09(StampSubject &self, const Words12 &source) {
    return check_stamp(0xc, guest::addr_of(self.stamp_09[0]), source);
}
GUEST_EXPORT(0x00304010, check_stamp_09);

// Always sets bit 1 of the flags byte, and sets or clears bit 3 according to `enable`.
static void set_flags(FlagsHolder &self, u32 enable) {
    u8 value = self.flags | FLAG_ALWAYS_SET;
    self.flags = enable != 0 ? (value | FLAG_ENABLED) : (value & ~FLAG_ENABLED);
}
GUEST_EXPORT(0x00304014, set_flags);
GUEST_EXPORT(0x400d8a34, set_flags);
GUEST_EXPORT(0x40649280, set_flags);
GUEST_EXPORT(0x406e3890, set_flags);
