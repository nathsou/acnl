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

GUEST_FUZZ(0x0030716c, 300, [](guest::Fuzz &f) {
    auto self = f.object<SearchCandCore>();
    auto bits = f.allocate(16).cast<u32>();
    f.bytes(bits, 16);
    self->bits = bits;
    f.arguments(self, f.pick<s32>({0, 1, 31, 32, 63, 64, 127, s32(f.below(128))}));
});
