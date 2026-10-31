// Searches in rows of ten items kept in a table of rows, and a bit test on the item index.
#include "item/item.hpp"
#include "save/player.hpp"

namespace {

constexpr u32 ROW_SIZE = 10;
constexpr s32 NOT_FOUND = -1;
constexpr u32 FIRST_ROW_STRIDE = 6;
constexpr u32 SECOND_ROW_STRIDE = 9;
constexpr u32 BITS_PER_WORD = 32;
constexpr u32 WORD_SHIFT = 5;
constexpr u32 WORD_COUNT = 0xba;
constexpr u8 FLAGS_8F83_BIT_4 = 0x10;
constexpr u8 FLAGS_570B_BIT_7 = 0x80;

struct IndexBitSet {
    u32 words[WORD_COUNT];
};

s32 first_empty_in_row(gptr<Item> rows, u32 row) {
    for (u32 i = 0; i < ROW_SIZE; i++) {
        if ((rows + (row * ROW_SIZE + i))->is_empty()) {
            return s32(i);
        }
    }
    return NOT_FOUND;
}

}  // namespace

// The first empty slot of the row 6 * first + second, or -1.
s32 first_empty_in_row_6(gptr<Item> rows, u32 first, u32 second) {
    return first_empty_in_row(rows, first * FIRST_ROW_STRIDE + second);
}
GUEST_EXPORT(0x0076ee74, first_empty_in_row_6);

// The first empty slot of the row 9 * first + second, or -1.
s32 first_empty_in_row_9(gptr<Item> rows, u32 first, u32 second) {
    return first_empty_in_row(rows, first * SECOND_ROW_STRIDE + second);
}
GUEST_EXPORT(0x0076efc8, first_empty_in_row_9);

// Whether the item's index is a set bit of the bit set (false for items without an index or beyond it).
bool index_bit_set(const IndexBitSet &bits, const Item &item) {
    s32 index = item.index();
    if (index < 0) {
        return false;
    }
    u32 word = u32(index) >> WORD_SHIFT;
    if (word >= WORD_COUNT) {
        return false;
    }
    return ((bits.words[word] >> (u32(index) & (BITS_PER_WORD - 1))) & 1) != 0;
}
GUEST_EXPORT(0x00770438, index_bit_set);

// The player's counter at 0x6b94 unless one of two flags is set (then 0).
u32 player_counter_unless_flagged(SavePlayer &player) {
    if ((player.flags_8f83 & FLAGS_8F83_BIT_4) != 0 || (player.flags_570b & FLAGS_570B_BIT_7) != 0) {
        return 0;
    }
    return player.counter_6b94.get();
}
GUEST_EXPORT(0x0076e0cc, player_counter_unless_flagged);
