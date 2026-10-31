// Whole-player operations on the four players of the save data.
#include "guest/guest.hpp"
#include "save/player.hpp"

namespace {

constexpr u32 PLAYER_COUNT = 4;
constexpr u32 CRC_START = 0xffffffff;
constexpr u32 CRC_FINAL_XOR = 0xffffffff;
constexpr u32 FIRST_CRC_OFFSET = 0;            // covers the bytes up to the second CRC
constexpr u32 SECOND_CRC_OFFSET = 0x6b88;      // covers the bytes after it, up to the end of the player
constexpr u32 CRC_SIZE = 4;

inline constexpr guest::Function<0x003193e8, u32(guest::gptr<const u8> data, u32 size, u32 start, u32 final_xor)> crc32;

}  // namespace

// How many of the four players have an identity.
u32 count_players_with_identity(guest::gptr<SavePlayer> players) {
    u32 count = 0;
    for (u32 i = 0; i < PLAYER_COUNT; i++) {
        if (players[i].identity.is_set()) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x0071a108, count_players_with_identity);

// Stores the two CRC-32s of every player: the first at its start (over the bytes up to the second CRC), the second at
// 0x6b88 (over the bytes after it).
void seal_players(guest::gptr<SavePlayer> players) {
    for (u32 i = 0; i < PLAYER_COUNT; i++) {
        guest::gptr<u8> start = players.cast<u8>() + i * SavePlayer::SIZE;
        *(start + FIRST_CRC_OFFSET).cast<u32>() =
            crc32(start + FIRST_CRC_OFFSET + CRC_SIZE, SECOND_CRC_OFFSET - CRC_SIZE, CRC_START, CRC_FINAL_XOR);
        *(start + SECOND_CRC_OFFSET).cast<u32>() = crc32(start + SECOND_CRC_OFFSET + CRC_SIZE,
                                                         SavePlayer::SIZE - SECOND_CRC_OFFSET - CRC_SIZE, CRC_START,
                                                         CRC_FINAL_XOR);
    }
}
GUEST_EXPORT(0x0071a2b0, seal_players);
