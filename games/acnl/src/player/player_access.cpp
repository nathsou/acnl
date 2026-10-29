// Small accessors for the players of the save data and for global player state.
#include "save/player.hpp"
#include "save/save_data.hpp"

namespace {


// Offset of a block inside the object the global at 0x0095bf74 points to (what it holds is not known yet).
constexpr u32 BLOCK_71900_OFFSET = 0x71900;

inline guest::global<gptr<void>, 0x0095bf74> data_95bf74;
inline guest::global<s8, 0x00953a8c> value_953a8c;
inline guest::global<gptr<SavePlayer>, 0x00aaf14c> current_player;

// Still recompiled code; both run with whatever registers the caller left.
inline constexpr guest::Function<0x00607bdc, u32()> query_00607bdc;  // 0 when the current player is available
inline constexpr guest::Function<0x00607474, void()> f_00607474;

}  // namespace

// The player at index in the array of players, or null for an index of SaveData::PLAYER_COUNT or more.
gptr<SavePlayer> player_at(gptr<SavePlayer> players, u32 index) {
    if (index >= SaveData::PLAYER_COUNT) {
        return nullptr;
    }
    return players + index;
}
GUEST_EXPORT(0x002fb7e8, player_at);

// Runs two checks of the player code, then returns the block at 0x71900 of the object at 0x0095bf74.
gptr<void> data_block_71900() {
    query_00607bdc();
    f_00607474();
    return *data_95bf74 + BLOCK_71900_OFFSET;
}
GUEST_EXPORT(0x002fb918, data_block_71900);

// The signed byte at 0x00953a8c (meaning not known yet).
s8 get_value_953a8c() {
    return *value_953a8c;
}
GUEST_EXPORT(0x002fb93c, get_value_953a8c);

// The current player, or null when f_00607bdc reports it is not available.
gptr<SavePlayer> get_current_player() {
    if (query_00607bdc() != 0) {
        return nullptr;
    }
    return *current_player;
}
GUEST_EXPORT(0x002fb94c, get_current_player);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x002fb7e8, 300, [](guest::Fuzz &f) {
    auto players = f.allocate(16).cast<SavePlayer>();
    f.arguments(players, f.pick<u32>({0, 1, 2, 3, 4, 5, 0xffffffff, 0x80000000, f.number()}));
});
GUEST_FUZZ(0x002fb918, 200, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x002fb93c, 200, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x002fb94c, 200, [](guest::Fuzz &f) { f.arguments(); });
