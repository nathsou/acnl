// Narrowing a set of items: to the ones a player has already had in their pockets (the catalog), or to one group.
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

// Keeps in the set only the items of the group (ItemData::group). A random member of the set is picked first: when
// no item of the set is in the group it becomes the only member. Returns whether any item of the set was in the group.
bool keep_items_of_group(ItemBitSet &set, u32 group) {
    s32 picked = set.index_of_nth_set_bit(u32(random_below(s32(set.count_all_bits()))));
    guest::StackObject<Item> first;
    construct_item(*first, Item::FIRST_ITEM);
    gptr<ItemData> data = first->data();
    for (u32 bit = 0; bit < ItemBitSet::ITEM_BITS; bit++) {
        if (data[bit].group() != group) {
            set.words[bit >> BIT_WORD_SHIFT] &= ~(1u << (bit & BIT_INDEX_MASK));
        }
    }
    if (set.count_all_bits() != 0) {
        return true;
    }
    if (u32(picked) <= ItemBitSet::ITEM_BITS) {
        set.words[u32(picked) >> BIT_WORD_SHIFT] |= 1u << (u32(picked) & BIT_INDEX_MASK);
    }
    return false;
}
GUEST_EXPORT(0x006f3698, keep_items_of_group);
