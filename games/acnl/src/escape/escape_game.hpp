// An object of the escape minigame (ModuleMiniGame0) whose methods are called from many BsEscapeEvent classes.
// What it is exactly is not known yet; only the fields the rewritten code touches are named.
#pragma once

#include "guest/guest.hpp"

// A part of EscapeGame starting at 0x1a8cc (extent and contents not known yet).
struct EscapeGamePart {
    u8 unknown_00[4];
};

struct EscapeGame {
    static constexpr u32 WORD_COUNT = 12;  // indices 0-11 are used by the callers

    u8 unknown_0000[0x1078];
    u32 words_1078[WORD_COUNT];  // non-zero: the entry is set (meaning not known yet)
    u8 unknown_10a8[0x11b8 - 0x10a8];
    u8 block_flag_11b8;          // when set, has_word() fails if asked to respect it (meaning not known yet)
    u8 unknown_11b9[0x1a8cc - 0x11b9];
    EscapeGamePart part_1a8cc;

    // Whether words_1078[index] is non-zero; false when respect_block is set and block_flag_11b8 is too.
    bool has_word(u32 index, u32 respect_block) const;
    gptr<EscapeGamePart> part();
};
GUEST_OFFSET(EscapeGame, words_1078, 0x1078);
GUEST_OFFSET(EscapeGame, block_flag_11b8, 0x11b8);
GUEST_OFFSET(EscapeGame, part_1a8cc, 0x1a8cc);
