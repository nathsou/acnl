// How a villager stands with the players: the friendship tiers, and the rating the game gives a player for a villager
// (the guesses about what the values mean are marked "probably").
#include "core/random.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

using guest::gptr;

namespace {

constexpr u32 TIERS_ADDRESS = 0x0088ec60;  // FRIENDSHIP_TIERS bytes, from the highest threshold down
constexpr u32 FRIENDSHIP_BASE = 256;       // added to the friendship before it is scaled
constexpr s32 RATING_ROLLS = 10;           // the rating is scaled by a roll of 1 to this
constexpr u32 RATING_SCALE_SHIFT = 7;      // the scaled value is divided by 128 (and rounded)
constexpr u32 RATING_ROUNDING = 1u << (RATING_SCALE_SHIFT - 1);
constexpr s32 RATING_MAX = 32;

inline constexpr guest::Function<0x003091e0, gptr<void>(gptr<void> argument)> get_manager;
inline constexpr guest::Function<0x003091ec, gptr<SavePlayer>(gptr<void> manager)> get_player;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline constexpr guest::Function<0x00301e20, bool(gptr<SaveVillager> villager)> is_villager_record;
inline constexpr guest::Function<0x002ff8f0, bool(gptr<void> players, gptr<const PersonalId> identity)> any_player_matches;
inline constexpr guest::Function<0x0011af89, bool(gptr<SaveVillager> villager, gptr<const PersonalId> identity)>
    villager_matches_identity;
inline constexpr guest::Function<0x0011abc9, gptr<VillagerPlayerRecord>(gptr<SaveVillager> villager, gptr<const PersonalId> identity)>
    find_record_for_identity;

// One of the villagers and one of the players of the save data (the fuzzers only read them).
gptr<SaveVillager> some_saved_villager(guest::Fuzz &f) {
    return guest::addr_of(get_save_data()->villagers[f.below(SaveData::VILLAGER_COUNT)]);
}

}  // namespace

u32 VillagerPlayerRecord::friendship_tier() const {
    gptr<const u8> thresholds(TIERS_ADDRESS);
    u32 value = friendship();
    u32 tier = 0;
    while (tier < FRIENDSHIP_TIERS && thresholds[tier] > value) {
        tier++;
    }
    return tier;
}

// Whether any of the four players has a record of this villager with a close friendship.
bool villager_is_close_to_a_player(gptr<SaveVillager> villager) {
    gptr<SaveData> save = get_save_data();
    for (u32 index = 0; index < SaveData::PLAYER_COUNT; index++) {
        gptr<SavePlayer> player = guest::addr_of(save->players[index]);
        gptr<VillagerPlayerRecord> record = villager->find_player_record(player->identity);
        if (record && record->is_close()) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0030aa59, villager_is_close_to_a_player);
GUEST_FUZZ(0x0030aa59, 200, [](guest::Fuzz &f) { f.arguments(some_saved_villager(f)); });

// A rating of the player (the current player when `player` is null) for the villager, from 0 to RATING_MAX, written
// to `rating`: when the villager has a record for the player (a record in use with its flag bit 7 set) it is the
// friendship plus FRIENDSHIP_BASE, times a roll of 1 to RATING_ROLLS, over 128, rounded; the rating is the maximum
// when the villager is the one the save data designates for the player or knows the player in the way
// find_record_for_identity checks.
void rate_player_for_villager(gptr<u8> rating, gptr<SaveVillager> villager, gptr<SavePlayer> player) {
    if (!player) {
        player = get_player(get_manager(nullptr));
    }
    *rating = 0;
    s32 earned = 0;
    bool knows_player = is_villager_record(villager) && player;
    if (knows_player && any_player_matches(guest::addr_of(get_save_data()->players[0]).cast<void>(), guest::addr_of(player->identity))) {
        gptr<VillagerPlayerRecord> record = villager->find_player_record(player->identity);
        if (record && record->identity.is_set() && (record->flags_bc & VillagerPlayerRecord::FLAGS_BC_BIT7) != 0) {
            u32 roll = u32(random_below(RATING_ROLLS)) + 1;
            earned = s32(((record->friendship() + FRIENDSHIP_BASE) * roll + RATING_ROUNDING) >> RATING_SCALE_SHIFT);
        }
    }
    s32 total = s32(*rating) + earned;
    *rating = u8(total < 0 ? 0 : (total >= RATING_MAX ? RATING_MAX : total));
    knows_player = is_villager_record(villager) && player;
    if (knows_player && (villager_matches_identity(villager, guest::addr_of(player->identity)) ||
                         find_record_for_identity(villager, guest::addr_of(player->identity)))) {
        *rating = RATING_MAX;
    }
}
GUEST_EXPORT(0x0030c868, rate_player_for_villager);
GUEST_FUZZ(0x0030c868, 300, [](guest::Fuzz &f) {
    gptr<SavePlayer> player = f.below(3) == 0 ? gptr<SavePlayer>(0u) : guest::addr_of(get_save_data()->players[f.below(SaveData::PLAYER_COUNT)]);
    f.arguments(f.allocate(1).cast<u8>(), some_saved_villager(f), player);
});
