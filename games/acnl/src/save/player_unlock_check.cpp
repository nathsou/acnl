// A check of the current player's state that several parts of the game ask (what it stands for is not known yet).
#include "item/item_bit_set.hpp"
#include "save/player.hpp"

namespace {

inline constexpr guest::Function<0x00300904, u32()> main_object_value;
inline constexpr guest::Function<0x002fb94c, gptr<SavePlayer>()> get_current_player;
inline constexpr guest::Function<0x0076fe68, u32(const ItemBitSet &set, u32 category, bool only_flagged)> count_in_category;

constexpr u8 FLAGS_5701_BIT_1 = 1 << 1;
constexpr u8 FLAGS_570B_BIT_0 = 1 << 0;
constexpr u8 FLAGS_5703_BIT_7 = 1 << 7;
constexpr u32 BYTE_5717_BIT_SHIFT = 7;             // the low bit of the 4-bit value
constexpr u8 BYTE_5718_LOW_BITS = 7;               // the other three bits
constexpr u32 BYTE_5718_SHIFT = 1;
constexpr u32 VALUE_MINIMUM = 7;
constexpr u32 COUNTER_MINIMUM = 100'000;
constexpr u32 FIRST_CATEGORY = 6;                  // items of this category the player has had in the pockets...
constexpr u32 FIRST_CATEGORY_MINIMUM = 10;
constexpr u32 SECOND_CATEGORY = 5;                 // ...and of this one
constexpr u32 SECOND_CATEGORY_MINIMUM = 50;

}  // namespace

// Whether the current player meets all the conditions: some flags are set, a 4-bit value is at least 7, a counter is at
// least 100,000, and the player has had at least 10 items of category 6 and 50 of category 5 in the pockets (the items
// seen set). False while the main object has a value, and without a current player.
bool current_player_meets_unlock_conditions() {
    if (main_object_value() != 0) {
        return false;
    }
    gptr<SavePlayer> player = get_current_player();
    if (!player || (player->flags_5701 & FLAGS_5701_BIT_1) == 0 || (player->flags_570b & FLAGS_570B_BIT_0) == 0 ||
        (player->flags_5703 & FLAGS_5703_BIT_7) == 0) {
        return false;
    }
    u32 value = (player->byte_5717 >> BYTE_5717_BIT_SHIFT) + ((player->byte_5718 & BYTE_5718_LOW_BITS) << BYTE_5718_SHIFT);
    if (value < VALUE_MINIMUM || player->counter_6ba4.get() < COUNTER_MINIMUM) {
        return false;
    }
    const ItemBitSet &seen = player->pockets.items_seen;
    return count_in_category(seen, FIRST_CATEGORY, true) >= FIRST_CATEGORY_MINIMUM &&
           count_in_category(seen, SECOND_CATEGORY, true) >= SECOND_CATEGORY_MINIMUM;
}
GUEST_EXPORT(0x00712e34, current_player_meets_unlock_conditions);
