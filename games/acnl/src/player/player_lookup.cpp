// Finding the player record of a slot (local players are in the save data, remote ones in their own array).
#include "guest/guest.hpp"
#include "save/save_data.hpp"

namespace {

inline constexpr guest::Function<0x0027ab40, bool(u32 slot)> is_local_slot;
inline constexpr guest::Function<0x0027ab24, bool(u32 slot)> is_remote_slot;
inline constexpr guest::Function<0x0027a5dc, u32(u32 slot)> remote_slot_index;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;

inline guest::global<SavePlayer[SaveData::PLAYER_COUNT], 0x00a84790> remote_players;

}  // namespace

// The index-th of the four player records starting at `players`; null for other indices.
gptr<SavePlayer> player_in_array(gptr<SavePlayer> players, u32 index) {
    if (index >= SaveData::PLAYER_COUNT) {
        return nullptr;
    }
    return guest::addr_of(players[index]);
}
GUEST_EXPORT(0x00301df4, player_in_array);
GUEST_FUZZ(0x00301df4, 100, [](guest::Fuzz &f) {
    f.arguments(f.allocate(SaveData::PLAYER_COUNT * SavePlayer::SIZE).cast<SavePlayer>(), f.pick<u32>({0, 1, 3, 4, f.number()}));
});

// The player record of a slot: null for a slot that is none of them.
gptr<SavePlayer> player_record_for_slot(u32 slot) {
    if (is_local_slot(slot)) {
        return player_in_array(guest::addr_of(get_save_data()->players[0]), slot);
    }
    if (!is_remote_slot(slot)) {
        return nullptr;
    }
    u32 index = remote_slot_index(slot);
    if (index >= SaveData::PLAYER_COUNT) {
        return nullptr;
    }
    return guest::addr_of(remote_players[index]);
}
GUEST_EXPORT(0x00303770, player_record_for_slot);
GUEST_FUZZ(0x00303770, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 5, 6, 7, 8, f.number()})); });
