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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// Only the start of the object (up to block_flag_11b8) is allocated: the whole object is too big for scratch memory.
static constexpr u32 FUZZ_PREFIX_SIZE = 0x11c0;

GUEST_FUZZ(0x40302c40, 300, [](guest::Fuzz &f) {
    auto memory = f.allocate(FUZZ_PREFIX_SIZE);
    f.bytes(memory, FUZZ_PREFIX_SIZE);
    auto game = memory.cast<EscapeGame>();
    if (f.below(2) == 0) {
        game->block_flag_11b8 = 0;
    }
    if (f.below(3) == 0) {
        game->words_1078[f.below(EscapeGame::WORD_COUNT)] = 0;
    }
    f.arguments(game, f.below(EscapeGame::WORD_COUNT), f.pick<u32>({0, 1, f.number()}));
});
// part() only computes an address: the object is never read
GUEST_FUZZ(0x40302c74, 200, [](guest::Fuzz &f) { f.arguments(f.allocate(16).cast<EscapeGame>()); });
