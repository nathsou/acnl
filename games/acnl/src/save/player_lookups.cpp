// Looking up one of the four players by what the game knows about them.
#include "save/player.hpp"
#include "save/save_data.hpp"

// The first of the four players whose identity matches the entry (as identities_match compares them), or null.
gptr<SavePlayer> find_player_matching_entry(gptr<SavePlayer> players, const PersonalId &entry) {
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        if (identities_match(players[i].identity, entry) != 0) {
            return guest::addr_of(players[i]);
        }
    }
    return gptr<SavePlayer>(0u);
}
GUEST_EXPORT(0x0071a0b0, find_player_matching_entry);

// The first of the four players that has an identity and flag bit 4 of byte 0x5700 set, or null.
gptr<SavePlayer> first_player_with_flag_5700_bit_4(gptr<SavePlayer> players) {
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        if (players[i].identity.is_set() && (players[i].flags_5700 & SavePlayer::FLAGS_5700_BIT_4) != 0) {
            return guest::addr_of(players[i]);
        }
    }
    return gptr<SavePlayer>(0u);
}
GUEST_EXPORT(0x0071a23c, first_player_with_flag_5700_bit_4);
