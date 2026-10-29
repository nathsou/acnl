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

gptr<Item> fuzz_rows(guest::Fuzz &f, u32 rows) {
    auto items = f.allocate(rows * ROW_SIZE * sizeof(Item)).cast<Item>();
    for (u32 i = 0; i < rows * ROW_SIZE; i++) {
        items[i].id = f.below(3) == 0 ? Item::EMPTY : u16(Item::FIRST_ITEM + f.below(16));
    }
    return items;
}

}  // namespace

// The first empty slot of the row 6 * first + second, or -1.
s32 first_empty_in_row_6(gptr<Item> rows, u32 first, u32 second) {
    return first_empty_in_row(rows, first * FIRST_ROW_STRIDE + second);
}
GUEST_EXPORT(0x0076ee74, first_empty_in_row_6);
GUEST_FUZZ(0x0076ee74, 100, [](guest::Fuzz &f) { f.arguments(fuzz_rows(f, 12), f.below(2), f.below(6)); });

// The first empty slot of the row 9 * first + second, or -1.
s32 first_empty_in_row_9(gptr<Item> rows, u32 first, u32 second) {
    return first_empty_in_row(rows, first * SECOND_ROW_STRIDE + second);
}
GUEST_EXPORT(0x0076efc8, first_empty_in_row_9);
GUEST_FUZZ(0x0076efc8, 100, [](guest::Fuzz &f) { f.arguments(fuzz_rows(f, 18), f.below(2), f.below(9)); });

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
GUEST_FUZZ(0x00770438, 100, [](guest::Fuzz &f) {
    auto bits = f.object<IndexBitSet>();
    auto item = f.object<Item>();
    if (f.below(4) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    f.arguments(bits, item);
});

// The player's counter at 0x6b94 unless one of two flags is set (then 0).
u32 player_counter_unless_flagged(SavePlayer &player) {
    if ((player.flags_8f83 & FLAGS_8F83_BIT_4) != 0 || (player.flags_570b & FLAGS_570B_BIT_7) != 0) {
        return 0;
    }
    return player.counter_6b94.get();
}
GUEST_EXPORT(0x0076e0cc, player_counter_unless_flagged);
GUEST_FUZZ(0x0076e0cc, 100, [](guest::Fuzz &f) {
    auto player = f.object<SavePlayer>();
    player->flags_8f83 = u8(f.number());
    player->flags_570b = u8(f.number());
    player->counter_6b94.set(f.below(100));
    f.arguments(player);
});
