// Narrowing a set of items to the ones a player has already had in their pockets (the catalog).
#include "core/random.hpp"
#include "item/item_bit_set.hpp"
#include "save/player.hpp"

using guest::gptr;

namespace {

constexpr u32 BITS_PER_WORD = 32;
constexpr u32 BIT_INDEX_MASK = BITS_PER_WORD - 1;
constexpr u32 BIT_WORD_SHIFT = 5;

inline constexpr guest::Function<0x002fb94c, gptr<SavePlayer>()> get_current_player;

}  // namespace

// Keeps in the set only the items the player has seen (the current player when `player` is null; the set stays as it is
// when there is none). A random member of the set is picked first: when no item of the set has been seen it becomes
// the only member. Returns whether any of the set's items had been seen.
bool keep_items_seen_by_player(ItemBitSet &set, gptr<SavePlayer> player) {
    s32 picked = set.index_of_nth_set_bit(u32(random_below(s32(set.count_all_bits()))));
    if (!player) {
        player = get_current_player();
        if (!player) {
            return false;
        }
    }
    for (u32 word = 0; word < ItemBitSet::WORDS; word++) {
        set.words[word] &= player->pockets.items_seen.words[word];
    }
    if (set.count_all_bits() != 0) {
        return true;
    }
    if (u32(picked) <= ItemBitSet::ITEM_BITS) {
        set.words[u32(picked) >> BIT_WORD_SHIFT] |= 1u << (u32(picked) & BIT_INDEX_MASK);
    }
    return false;
}
GUEST_EXPORT(0x006f0578, keep_items_seen_by_player);
GUEST_FUZZ(0x006f0578, 200, [](guest::Fuzz &f) {
    auto set = f.object<ItemBitSet>();
    auto player = f.object<SavePlayer>();
    for (u32 word = 0; word < ItemBitSet::WORDS; word++) {
        set->words[word] = f.below(40) == 0 ? u32(f.number()) : 0;
        player->pockets.items_seen.words[word] = f.below(2) ? u32(f.number()) : 0;
    }
    f.arguments(set, f.below(4) ? player : gptr<SavePlayer>(0u));
});
