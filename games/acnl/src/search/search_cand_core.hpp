// SearchCandCore: the core of the game's SearchCand<N> helpers (road, field and NPC searches). It holds a count of
// candidates and a bit array (one bit per candidate) of the ones that were marked.
#pragma once

#include "guest/guest.hpp"

struct SearchCandCore {
    static constexpr u32 VTABLE = 0x008ef708;

    u32 vtable;              // virtual 0: whether candidate i qualifies (nonzero: yes)
    s32 count;               // candidates
    s32 word_count;          // 32-bit words of the bit array: count / 32 rounded up
    guest::gptr<u32> bits;   // one bit per candidate (owned by the derived SearchCand<N>)
    s32 marked_count;        // starts at -1, incremented for each newly marked candidate

    // Marks (sets the bit of) every candidate the virtual check accepts that was not marked yet.
    void mark_candidates();
    // Marks one candidate; does nothing if it is already marked.
    void mark(s32 index);
    // Unmarks one candidate; does nothing if it is not marked.
    void unmark(s32 index);
    // Sets every bit of the array and sets marked_count to count.
    void mark_all();
    // The index of a randomly chosen marked candidate (the n-th, n = random float * marked_count), or -1.
    s32 pick_random_marked();
};
GUEST_OFFSET(SearchCandCore, vtable, 0x00);
GUEST_OFFSET(SearchCandCore, count, 0x04);
GUEST_OFFSET(SearchCandCore, word_count, 0x08);
GUEST_OFFSET(SearchCandCore, bits, 0x0c);
GUEST_OFFSET(SearchCandCore, marked_count, 0x10);
GUEST_SIZE(SearchCandCore, 0x14);

// A SearchCandCore whose candidates form a grid, row after row.
struct SearchCandGrid {
    SearchCandCore core;
    s32 width_14;   // candidates per row
    s32 height_18;  // rows

    // Unmarks every candidate on the border of the grid.
    void unmark_border();
};
GUEST_OFFSET(SearchCandGrid, width_14, 0x14);
GUEST_OFFSET(SearchCandGrid, height_18, 0x18);

SearchCandCore &construct_search_cand_core(SearchCandCore &self, s32 count, guest::gptr<u32> bits);
