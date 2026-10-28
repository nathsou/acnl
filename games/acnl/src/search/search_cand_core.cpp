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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00307040, 300, [](guest::Fuzz &f) {
    auto self = f.object<SearchCandCore>();
    auto bits = f.allocate(16).cast<u32>();
    s32 count = f.pick<s32>({0, 1, 8, 31, 32, 33, 0x100, -1, -32, -33, s32(0x80000000), s32(f.number())});
    f.arguments(self, count, bits);
});

GUEST_FUZZ(0x0030707c, 300, [](guest::Fuzz &f) {
    // The object sits at the start of a large scratch buffer: the first possible check (0x00307078) writes at
    // +0x2510 and always answers yes; the second (EncryptedInt::get, 0x00303660) only reads 8 bytes.
    constexpr u32 BUFFER = 0x2600;
    constexpr u32 MAX_COUNT = 16 * 32;
    auto self = f.allocate(BUFFER).cast<SearchCandCore>();
    f.bytes(self, BUFFER);
    auto vtable = f.allocate(4).cast<u32>();
    *vtable = f.pick<u32>({0x00307078, 0x00303660});
    self->vtable = vtable.addr();
    auto bits = f.allocate(16 * 4).cast<u32>();
    f.bytes(bits, 16 * 4);
    if (f.below(3) == 0) {
        for (u32 w = 0; w < 16; w++) {
            bits[w] = 0;
        }
    }
    self->bits = bits;
    self->count = f.pick<s32>({0, 1, 31, 32, 33, s32(MAX_COUNT), -1, s32(f.below(MAX_COUNT + 1))});
    f.arguments(self);
});
