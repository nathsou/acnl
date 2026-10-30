// Who someone is in the save data: a player's id and name with their town's id and name. Players, villagers'
// memories of players and letters all store one.
#pragma once

#include "guest/guest.hpp"

struct PlayerRef {
    static constexpr u32 NAME_LENGTH = 10;  // UTF-16 code units (8 characters, then zeroes)
    static constexpr u16 LAST_UNIT_WHEN_CLEAR = 10;

    u16 id;
    u16 name[NAME_LENGTH];

    PlayerRef &operator=(const PlayerRef &other);
    void clear();  // no id, an empty name whose last unit is LAST_UNIT_WHEN_CLEAR
};
GUEST_SIZE(PlayerRef, 22);

struct TownRef {
    static constexpr u32 NAME_LENGTH = 10;
    static constexpr u16 LAST_UNIT_WHEN_CLEAR = 10;

    u16 id;
    u16 name[NAME_LENGTH];

    void clear();  // the same as PlayerRef::clear
};
GUEST_SIZE(TownRef, 22);

struct PersonalId {
    PlayerRef player;
    TownRef town;

    bool is_set() const;  // the player id is not zero and the town part passes a check
    bool equals(const PersonalId &other) const;  // same player (id, name) and same town (id, name)
};
GUEST_OFFSET(PersonalId, town, 0x16);
GUEST_SIZE(PersonalId, 44);

// The short form of a PersonalId: the two ids without the names.
struct ShortId {
    static constexpr u32 NO_PLAYER_ADDRESS = 0x0088f298;  // a constant u16 0xffff: "no player"

    u16 player_id;
    u16 town_id;

    void clear();  // no player, town 0
    void set(const PersonalId &id);
};
GUEST_OFFSET(ShortId, town_id, 2);
GUEST_SIZE(ShortId, 4);

// Whether two identities have the same player part: id, name and a flag bit (match_entry; PersonalId::equals checks the town as well).
inline constexpr guest::Function<0x00311a34, u32(const PersonalId &identity, const PersonalId &other)> identities_match;
