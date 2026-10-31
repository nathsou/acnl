// Looking a player up by an identity, and comparing a player entry with one.
#include <cstring>

#include "guest/guest.hpp"
#include "save/personal_id.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

namespace {

// A record that has a player reference at 0xc, followed by a halfword (probably the town id).
struct PlayerEntry {
    u8 unknown_00[0xc];
    PlayerRef player;
    u16 value_22;
};
GUEST_OFFSET(PlayerEntry, player, 0xc);
GUEST_OFFSET(PlayerEntry, value_22, 0x22);

// An identity followed by a halfword.
struct IdentityWithValue {
    PersonalId identity;
    u16 value_2c;
};
GUEST_OFFSET(IdentityWithValue, value_2c, 0x2c);

constexpr u32 LAST_NAME_UNIT = PlayerRef::NAME_LENGTH - 1;
constexpr u32 COMPARED_NAME_BYTES = 0x12;  // the name's first nine code units

}  // namespace

// The first of the four players whose identity matches the given one, or null.
gptr<SavePlayer> find_player_by_identity(gptr<SavePlayer> first, const PersonalId &identity) {
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        if (identities_match(first[i].identity, identity) != 0) {
            return guest::addr_of(first[i]);
        }
    }
    return gptr<SavePlayer>(0u);
}
GUEST_EXPORT(0x0030dc84, find_player_by_identity);

// Whether the entry's player has the identity's player id, name (the last code unit counts by its low byte only)
// and town id.
bool entry_matches_identity(const PlayerEntry &entry, const IdentityWithValue &other) {
    if (other.identity.player.id != entry.player.id) {
        return false;
    }
    if (u8(other.identity.player.name[LAST_NAME_UNIT]) != u8(entry.player.name[LAST_NAME_UNIT])) {
        return false;
    }
    if (memcmp(&other.identity.player.name[0], &entry.player.name[0], COMPARED_NAME_BYTES) != 0) {
        return false;
    }
    return other.value_2c == entry.value_22;
}
GUEST_EXPORT(0x0030e56c, entry_matches_identity);
