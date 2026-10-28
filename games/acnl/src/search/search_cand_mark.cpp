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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00275a58, 300, [](guest::Fuzz &f) {
    constexpr u32 WORDS = 4;
    auto core = f.object<SearchCandCore>();
    core->bits = f.allocate(WORDS * sizeof(u32)).cast<u32>();
    f.bytes(core->bits.cast<void>(), WORDS * sizeof(u32));
    core->marked_count = s32(f.below(10)) - 1;
    f.arguments(core, s32(f.below(WORDS * 32)));
});
