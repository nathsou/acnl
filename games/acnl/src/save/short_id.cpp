// ShortId: the player and town ids of a PersonalId.
#include "guest/guest.hpp"
#include "save/personal_id.hpp"

namespace {

inline guest::global<u16, ShortId::NO_PLAYER_ADDRESS> no_player_id;

}  // namespace

void ShortId::clear() {
    player_id = *no_player_id;
    town_id = 0;
}
GUEST_EXPORT(0x006256dc, ShortId::clear);
GUEST_EXPORT(0x00625720, ShortId::clear);  // an identical copy

void ShortId::set(const PersonalId &id) {
    player_id = id.player.id;
    town_id = id.town.id;
}
GUEST_EXPORT(0x006256f8, ShortId::set);
