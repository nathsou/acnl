// Emptying the records that hold a pair of identities (a player's and a town's) with a few bytes after them.
#include "save/personal_id.hpp"

namespace {

constexpr u16 NO_VALUE = 0xffff;
constexpr u8 RESET_MODE = 8;  // meaning not known yet

// A pair of identities and a trailing flag pair.
struct IdentityWithFlags {
    PersonalId identity;
    u8 byte_2c;
    u8 byte_2d;
};
GUEST_OFFSET(IdentityWithFlags, byte_2c, 0x2c);
GUEST_SIZE(IdentityWithFlags, 0x2e);

// A pair of identities followed by a halfword and a byte.
struct IdentityWithValue {
    PersonalId identity;
    u16 value_2c;
    u8 byte_2e;
};
GUEST_OFFSET(IdentityWithValue, value_2c, 0x2c);

}  // namespace

// Empties the player part (all zeros), the town part (like PlayerRef::clear) and the two bytes.
void clear_identity_with_flags(IdentityWithFlags &record) {
    record.identity.player.id = 0;
    for (u16 &unit : record.identity.player.name) {
        unit = 0;
    }
    record.identity.town.clear();
    record.byte_2c = 0;
    record.byte_2d = 0;
}
GUEST_EXPORT(0x003052f0, clear_identity_with_flags);

// Empties both parts like PlayerRef::clear, and sets the value to "none" and the byte to the reset mode.
void clear_identity_with_value(IdentityWithValue &record) {
    record.identity.player.clear();
    record.identity.town.clear();
    record.value_2c = NO_VALUE;
    record.byte_2e = RESET_MODE;
}
GUEST_EXPORT(0x003084d0, clear_identity_with_value);
