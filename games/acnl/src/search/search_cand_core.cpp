#include "search/search_cand_core.hpp"

namespace {
constexpr u32 BITS_PER_WORD = 32;
constexpr u32 BIT_INDEX_MASK = BITS_PER_WORD - 1;
constexpr u32 WORD_SHIFT = 5;
}  // namespace

SearchCandCore &construct_search_cand_core(SearchCandCore &self, s32 count, guest::gptr<u32> bits) {
    self.count = count;
    self.vtable = SearchCandCore::VTABLE;
    self.word_count = count / s32(BITS_PER_WORD) + ((u32(count) & BIT_INDEX_MASK) != 0 ? 1 : 0);
    self.marked_count = -1;
    self.bits = bits;
    return self;
}
GUEST_EXPORT(0x00307040, construct_search_cand_core);

void SearchCandCore::mark_candidates() {
    for (s32 i = 0; i < count; i++) {
        u32 qualifies = *guest::gptr<u32>(vtable);
        if (guest::call_address<u32>(qualifies, guest::addr_of(this), i) == 0) {
            continue;
        }
        u32 &word = bits[i >> WORD_SHIFT];
        u32 mask = 1u << (u32(i) & BIT_INDEX_MASK);
        if (word & mask) {
            continue;
        }
        word |= mask;
        marked_count++;
    }
}
GUEST_EXPORT(0x0030707c, SearchCandCore::mark_candidates);
