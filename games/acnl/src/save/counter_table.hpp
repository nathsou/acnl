// A table of 24 scrambled counters of a player (see EncryptedInt), followed by some words and two more counters.
#pragma once

#include "core/encrypted_int.hpp"

struct CounterTable {
    static constexpr u32 COUNT = 24;
    static constexpr u32 WORDS = 6;

    EncryptedInt counters[COUNT];
    u32 words_c0[WORDS];
    EncryptedInt extra_d8;
    EncryptedInt extra_e0;

    void clear();
    void add(u32 index, u32 amount);  // up to the largest number; indices past the table are ignored
};
GUEST_OFFSET(CounterTable, words_c0, 0xc0);
GUEST_OFFSET(CounterTable, extra_d8, 0xd8);
GUEST_OFFSET(CounterTable, extra_e0, 0xe0);
GUEST_SIZE(CounterTable, 0xe8);
