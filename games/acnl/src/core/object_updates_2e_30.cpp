// Small functions of the 0x002e0000..0x00310000 area (their classes are not known yet): searches in the players and
// the item set, a record comparison and the constructor of a table object.
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "item/item_bit_set.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

using guest::gptr;

namespace {

constexpr u32 ONLY_BIT = 1;
constexpr u32 ID_SIZE = 0x12;
constexpr u32 FIRST_STATE = 3;
constexpr u32 SMALL_TABLE_COUNT = 0x10;
constexpr u32 SMALL_TABLE_STRIDE = 2;
constexpr u32 BIG_TABLE_OFFSET = 0x22;
constexpr u32 BIG_TABLE_STRIDE = 0x400;
constexpr u32 BIG_TABLE_COUNT = 4;
constexpr u32 LAST_TABLE_OFFSET = 0x1022;
constexpr u32 LAST_TABLE_STRIDE = 4;
constexpr u32 LAST_TABLE_COUNT = 2;
constexpr u32 SMALL_TABLE_OFFSET = 2;
constexpr u32 CONSTRUCT_SMALL_ENTRY = 0x00612cfc;
constexpr u32 CONSTRUCT_BIG_ENTRY = 0x006efd9c;
constexpr u32 CONSTRUCT_LAST_ENTRY = 0x0024ea34;

inline constexpr guest::Function<0x00100d2d, u32(gptr<const void> first, gptr<const void> second, u32 size)> memory_compare;
inline constexpr guest::Function<0x00301d0d, gptr<void>(gptr<void> base, u32 function, u32 stride, u32 count)>
    for_each_element;

struct PlayerArray {
    SavePlayer players[SaveData::PLAYER_COUNT];
};

// A 0x15-byte record: a 16-bit id, 0x12 more bytes compared as a block, and a byte.
struct IdRecord {
    u16 id;
    u8 block[ID_SIZE];
    u8 kind;
};
GUEST_OFFSET(IdRecord, kind, 0x14);

struct TableObject {
    u8 state_a;
    u8 state_b;
    u8 rest[0x1022 + 8 - 2];
};

}  // namespace

// Whether any of the four players has an identity matching the given one.
bool any_player_matches(PlayerArray &array, const PersonalId &identity) {
    for (SavePlayer &player : array.players) {
        if (identities_match(player.identity, identity) != 0) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x002ff8f0, any_player_matches);

// Whether two records have the same id, kind and block.
bool records_equal(const IdRecord &first, const IdRecord &second) {
    if (first.id != second.id || first.kind != second.kind) {
        return false;
    }
    return memory_compare(guest::addr_of(first.block[0]), guest::addr_of(second.block[0]), ID_SIZE) == 0;
}
GUEST_EXPORT(0x002ff81c, records_equal);

// Clears a bit of the item set unless that would leave it empty (it must keep at least one bit).
bool clear_bit_keeping_one(ItemBitSet &set, const Item &item) {
    if (set.count_all_bits() <= ONLY_BIT) {
        return false;
    }
    return set.clear_bit_of(item);
}
GUEST_EXPORT(0x002fe9dc, clear_bit_keeping_one);

// Builds the three tables of the object, which starts in state 3.
TableObject &construct_table_object(TableObject &object) {
    object.state_a = FIRST_STATE;
    object.state_b = FIRST_STATE;
    gptr<void> base = guest::addr_of(object).cast<void>();
    for_each_element(base + SMALL_TABLE_OFFSET, CONSTRUCT_SMALL_ENTRY, SMALL_TABLE_STRIDE, SMALL_TABLE_COUNT);
    for_each_element(base + BIG_TABLE_OFFSET, CONSTRUCT_BIG_ENTRY, BIG_TABLE_STRIDE, BIG_TABLE_COUNT);
    for_each_element(base + LAST_TABLE_OFFSET, CONSTRUCT_LAST_ENTRY, LAST_TABLE_STRIDE, LAST_TABLE_COUNT);
    return object;
}
GUEST_EXPORT(0x002ebce4, construct_table_object);
