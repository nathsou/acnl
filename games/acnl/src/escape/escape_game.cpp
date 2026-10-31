#include "escape/escape_game.hpp"

bool EscapeGame::has_word(u32 index, u32 respect_block) const {
    if (block_flag_11b8 != 0 && respect_block != 0) {
        return false;
    }
    return words_1078[index] != 0;
}
GUEST_EXPORT(0x40302c40, EscapeGame::has_word);

gptr<EscapeGamePart> EscapeGame::part() {
    return guest::addr_of(part_1a8cc);
}
GUEST_EXPORT(0x40302c74, EscapeGame::part);
