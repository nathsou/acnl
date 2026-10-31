#include "search/search_cand_core.hpp"

void SearchCandCore::mark(s32 index) {
    u32 &word = bits[index >> 5];
    u32 mask = 1u << (index & 0x1f);
    if (word & mask) {
        return;
    }
    word |= mask;
    marked_count += 1;
}
GUEST_EXPORT(0x00275a58, SearchCandCore::mark);
