// Station sets of the local-play session, player stamps (a value with a player's short id).
#include "guest/guest.hpp"
#include "net/net_session.hpp"
#include "net/station_mask.hpp"
#include "save/personal_id.hpp"
#include "save/player.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x002fb94c, gptr<SavePlayer>()> get_current_player;
inline constexpr guest::Function<0x0070ab10, u32(u32 object)> query_70ab10;
inline guest::global<u32, 0x009529cc> object_9529cc;  // the object query_70ab10 is asked about (not known yet)

}  // namespace

struct StationSet {
    u8 unknown_00[4];
    StationMask mask;

    void refresh(u32 station, u32 add);
};
GUEST_OFFSET(StationSet, mask, 4);

// Adds or removes `station`, and for every other station: removes it when the session counts it as present
// (signed value set and its bit in the session's mask), adds it otherwise.
void StationSet::refresh(u32 station, u32 add) {
    for (u32 other = 0; other < StationMask::STATION_COUNT; other++) {
        if (other == station) {
            if (add != 0) {
                mask.add(station);
            } else {
                mask.remove(station);
            }
        } else if ((*net_session)->signed_value() != 0 && (*net_session)->has_station_bit(other)) {
            mask.remove(other);
        } else {
            mask.add(other);
        }
    }
}
GUEST_EXPORT(0x00623e70, StationSet::refresh);

// A value together with the short id of a player.
struct PlayerStamp {
    u32 value;
    ShortId id;

    void stamp_current_player();
};
GUEST_OFFSET(PlayerStamp, id, 4);
GUEST_SIZE(PlayerStamp, 8);

// The current player's ids with query_70ab10's answer; nothing changes without a current player.
void PlayerStamp::stamp_current_player() {
    gptr<SavePlayer> player = get_current_player();
    if (!player) {
        return;
    }
    value = query_70ab10(*object_9529cc);
    id.player_id = player->identity.player.id;
    id.town_id = player->identity.town.id;
}
GUEST_EXPORT(0x00623f34, PlayerStamp::stamp_current_player);

PlayerStamp &construct_player_stamp(PlayerStamp &self, const PersonalId &player, const u32 &value) {
    self.value = value;
    self.id.set(player);
    return self;
}
GUEST_EXPORT(0x00623ff0, construct_player_stamp);

PlayerStamp &construct_empty_player_stamp(PlayerStamp &self) {
    self.value = 0;
    self.id.clear();
    return self;
}
GUEST_EXPORT(0x00624008, construct_empty_player_stamp);
