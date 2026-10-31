// Questions about the players an object knows (0x00751000-0x00757200): whether a stored player is the one at hand, who is
// in a list of players, and which pocket of the current player holds a category 0x4e item.
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/personal_id.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline constexpr guest::Function<0x00100d2d, s32(gptr<const u8> a, gptr<const u8> b, u32 length)> memory_compare;
inline constexpr guest::Function<0x005b42fc, u32(u32 kind)> capped_count_for_kind;
inline constexpr guest::Function<0x00311a34, u32(const PlayerRef &a, const PlayerRef &b)> player_refs_match;

constexpr u32 KIND_MASKS[] = {0x20, 0x200, 0x40000000};  // the global byte's kinds (meaning not known yet)
constexpr u32 FIRST_LIST_SKIP_BIT = 4;                   // the bit of the first entry in skip_bits
constexpr u32 NAME_BYTES_COMPARED = 0x12;                // the first nine name units
constexpr u32 RECORD_COUNT = 32;
constexpr u8 PICKED_CATEGORY = 0x4e;                     // the category the pocket search looks for (meaning not known yet)

// An object with a player (id and name) at 0xc and a value after it.
struct LinkedPlayer {
    u8 unknown_00[0xc];
    PlayerRef player;
    u16 value_22;
};
GUEST_OFFSET(LinkedPlayer, player, 0xc);
GUEST_OFFSET(LinkedPlayer, value_22, 0x22);

// A stored player: its identity and a value after it.
struct StoredPlayer {
    PersonalId identity;
    u16 value_2c;
};
GUEST_OFFSET(StoredPlayer, value_2c, 0x2c);

struct StoredPlayerHolder {
    u8 unknown_0000[0x1028];
    gptr<StoredPlayer> stored;  // may be null
};
GUEST_OFFSET(StoredPlayerHolder, stored, 0x1028);

// Players in two lists (3 at 8, 4 at 0x4a) and, at 0xaa, a byte whose bits 4-6 mark the entries of the first list that
// are skipped.
struct PlayerLists {
    u8 unknown_00[8];
    PlayerRef first[3];
    PlayerRef second[4];
    u8 unknown_a2[8];
    u8 skip_bits;

    bool first_list_has_match(const PlayerRef &other) const;
    bool second_list_has_match(const PlayerRef &other) const;
};
GUEST_OFFSET(PlayerLists, first, 8);
GUEST_OFFSET(PlayerLists, second, 0x4a);
GUEST_OFFSET(PlayerLists, skip_bits, 0xaa);

struct HalfwordBlock {
    u16 first_halfword;
    u8 unknown_02[22];
};
GUEST_SIZE(HalfwordBlock, 24);

struct HalfwordBlocks {
    u8 unknown_00[0x24];
    HalfwordBlock blocks[6];
};
GUEST_OFFSET(HalfwordBlocks, blocks, 0x24);

// A table of records that start with an identity (the table starts at 0x1428 of the object).
struct IdentityRecord {
    PersonalId identity;
    u8 unknown_2c[0x14b0 - sizeof(PersonalId)];
};
GUEST_SIZE(IdentityRecord, 0x14b0);

struct IdentityRecords {
    u8 unknown_0000[0x1428];
    IdentityRecord records[RECORD_COUNT];
};
GUEST_OFFSET(IdentityRecords, records, 0x1428);

struct CurrentPlayerHolder {
    u8 unknown_000[0x234];
    gptr<SavePlayer> player;
};
GUEST_OFFSET(CurrentPlayerHolder, player, 0x234);
inline guest::global<CurrentPlayerHolder, 0x00aaef18> current_player_holder;

// The id and the first eight characters (and the low byte of the ninth unit) of two names are the same.
bool same_player(const PlayerRef &a, const PlayerRef &b) {
    return a.id == b.id && (a.name[PlayerRef::NAME_LENGTH - 1] & 0xff) == (b.name[PlayerRef::NAME_LENGTH - 1] & 0xff) &&
           memory_compare(guest::addr_of(&a.name[0]).cast<const u8>(), guest::addr_of(&b.name[0]).cast<const u8>(), NAME_BYTES_COMPARED) == 0;
}

// A linked player and a holder of a stored one that is the same player in half of the cases.

}  // namespace

// Whether the global byte is none of the kinds 0x20, 0x200 and 0x40000000.
bool global_byte_is_unlisted_kind() {
    u8 byte = read_global_byte_2();
    for (u32 mask : KIND_MASKS) {
        if (table_entry_has_all_bits(mask, byte) != 0) {
            return false;
        }
    }
    return true;
}
GUEST_EXPORT(0x007516a4, global_byte_is_unlisted_kind);

// The index of the first pocket of the current player that holds a category 0x4e item, or -1 (also when there is no
// current player or its identity is not set).
s32 current_player_pocket_with_category_4e() {
    gptr<SavePlayer> player = current_player_holder->player;
    if (player == nullptr || !player->identity.is_set()) {
        return -1;
    }
    for (u32 slot = 0; slot < Pockets::SLOTS; slot++) {
        if (player->pockets.item_with_lock(s32(slot), gptr<u8>(0u)).category() == PICKED_CATEGORY) {
            return s32(slot);
        }
    }
    return -1;
}
GUEST_EXPORT(0x00756cb4, current_player_pocket_with_category_4e);

// Whether an entry of the first list that is not marked in skip_bits matches the player.
bool PlayerLists::first_list_has_match(const PlayerRef &other) const {
    for (u32 i = 0; i < 3; i++) {
        bool skipped = ((skip_bits >> (FIRST_LIST_SKIP_BIT + i)) & 1) != 0;
        if (!skipped && player_refs_match(first[i], other) != 0) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x00756d30, PlayerLists::first_list_has_match);

// Whether an entry of the second list matches the player.
bool PlayerLists::second_list_has_match(const PlayerRef &other) const {
    for (const PlayerRef &entry : second) {
        if (player_refs_match(entry, other) != 0) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x00756e9c, PlayerLists::second_list_has_match);

// How many of the six blocks start with a halfword that is not zero.
u32 count_blocks_in_use(HalfwordBlocks &object) {
    u32 count = 0;
    for (const HalfwordBlock &block : object.blocks) {
        if (block.first_halfword != 0) {
            count++;
        }
    }
    return count;
}
GUEST_EXPORT(0x007570b0, count_blocks_in_use);

// Whether the linked player is the stored player (the same id, name and value), or when no player is stored.
bool linked_player_is_stored_or_none_stored(const LinkedPlayer &linked, const StoredPlayerHolder &holder) {
    gptr<StoredPlayer> stored = holder.stored;
    if (stored == nullptr) {
        return true;
    }
    return same_player(linked.player, stored->identity.player);
}
GUEST_EXPORT(0x00757028, linked_player_is_stored_or_none_stored);

// Whether the linked player is the stored player, with the same value after it (false when nothing is stored).
bool linked_player_is_stored(const LinkedPlayer &linked, gptr<StoredPlayerHolder> holder) {
    if (holder == nullptr || holder->stored == nullptr) {
        return false;
    }
    gptr<StoredPlayer> stored = holder->stored;
    return same_player(linked.player, stored->identity.player) && stored->value_2c == linked.value_22;
}
GUEST_EXPORT(0x007570ec, linked_player_is_stored);

// How many of the first elements of the list (as many as the kind has) are zero.
u32 free_elements_in_list(gptr<const u32> list) {
    u32 count = capped_count_for_kind(read_global_byte_2());
    u32 used = 0;
    for (u32 i = 0; i < count; i++) {
        if (list[i] != 0) {
            used++;
        }
    }
    return count - used;
}
GUEST_EXPORT(0x0074557c, free_elements_in_list);

// Whether one of the records (until the first without an identity) has the identity.
bool has_record_with_identity(const IdentityRecords &records, const PersonalId &identity) {
    for (const IdentityRecord &record : records.records) {
        if (!record.identity.is_set()) {
            return false;
        }
        if (record.identity.equals(identity)) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x0071d374, has_record_with_identity);

// The item of the first two (the index) in the pair, or the empty item for other indexes, copied to the destination.
Item &copy_item_of_pair_or_empty(Item &destination, const ItemPair &pair, u32 index) {
    return copy_item(destination, index < 2 ? pair.items[index] : *empty_item);
}
GUEST_EXPORT(0x0071c170, copy_item_of_pair_or_empty);
