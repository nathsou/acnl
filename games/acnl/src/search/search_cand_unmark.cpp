#include "search/search_cand_core.hpp"

void SearchCandCore::unmark(s32 index) {
    u32 &word = bits[index >> 5];
    u32 mask = 1u << (u32(index) & 31);
    if (!(word & mask)) {
        return;
    }
    word &= ~mask;
    marked_count -= 1;
}
GUEST_EXPORT(0x0030716c, SearchCandCore::unmark);
