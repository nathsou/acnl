#include "guest/guest.hpp"

namespace {

constexpr u32 SLOT_TABLE_OFFSET = 0x18;
constexpr u32 FLAG_BYTE_OFFSET = 0x11b8;
constexpr u32 WORDS_BLOCK_OFFSET = 0x1000;
constexpr u32 WORD_OFFSETS[] = {0x78, 0x88, 0x98};

}  // namespace

// Reads word `index` of the table at offset 0x18 of an object.
u32 object_get_table_word(gptr<u8> self, u32 index) {
    return *(self + SLOT_TABLE_OFFSET + index * 4).cast<u32>();
}
GUEST_EXPORT(0x402fcac4, object_get_table_word);

// True when any of three words in the object's block at 0x1000 is set, unless a byte flag in the object and the
// `ignore_if_flagged` argument are both set (then false).
bool object_has_pending_entry(gptr<u8> self, u32 ignore_if_flagged) {
    if (self[FLAG_BYTE_OFFSET] != 0 && ignore_if_flagged != 0) {
        return false;
    }
    for (u32 offset : WORD_OFFSETS) {
        if (*(self + WORDS_BLOCK_OFFSET + offset).cast<u32>() != 0) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x402fcad0, object_has_pending_entry);

// Classifies a pair of signed bytes: 1 if the first is below 6 (unsigned compare, so negatives fall through),
// else 2 if the second is below 11, else 0.
u32 classify_byte_pair(gptr<s8> pair) {
    if (u32(s32(pair[0])) < 6) {
        return 1;
    }
    if (u32(s32(pair[1])) < 11) {
        return 2;
    }
    return 0;
}
GUEST_EXPORT(0x402fcbc4, classify_byte_pair);
