// Questions about the players an object knows (0x00751000-0x00757200): whether a stored player is the one at hand, who is
// in a list of players, and which pocket of the current player holds a category 0x4e item.
#include "core/fuzz_helpers.hpp"
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
constexpr u32 STACK_CLEARANCE = 0x1000;                  // keeps big fuzz objects clear of the stack the original works on
constexpr u32 MAX_KIND_COUNT = 0x30;                     // capped_count_for_kind never returns more
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

void fill_player(PlayerRef &player, guest::Fuzz &f) {
    player.id = u16(f.below(3));
    for (u32 i = 0; i < PlayerRef::NAME_LENGTH; i++) {
        player.name[i] = u16(f.below(3));
    }
}

// A linked player and a holder of a stored one that is the same player in half of the cases.
void fuzz_linked_and_stored(guest::Fuzz &f, gptr<LinkedPlayer> &linked, gptr<StoredPlayerHolder> &holder) {
    f.allocate(STACK_CLEARANCE);
    holder = f.allocate(sizeof(StoredPlayerHolder)).cast<StoredPlayerHolder>();
    auto stored = f.object<StoredPlayer>();
    linked = f.object<LinkedPlayer>();
    fill_player(stored->identity.player, f);
    linked->player = stored->identity.player;
    stored->value_2c = u16(f.below(3));
    linked->value_22 = f.below(2) != 0 ? stored->value_2c : u16(f.below(3));
    if (f.below(3) == 0) {
        fill_player(linked->player, f);
    }
    holder->stored = f.below(6) != 0 ? stored : gptr<StoredPlayer>(0u);
}

// Lists of players with small ids and names, so that entries match now and then.
gptr<PlayerLists> fuzz_player_lists(guest::Fuzz &f) {
    auto lists = f.object<PlayerLists>();
    for (PlayerRef &entry : lists->first) {
        fill_player(entry, f);
    }
    for (PlayerRef &entry : lists->second) {
        fill_player(entry, f);
    }
    lists->skip_bits = u8(f.number());
    return lists;
}

gptr<PlayerRef> fuzz_other_player(guest::Fuzz &f) {
    auto other = f.object<PlayerRef>();
    fill_player(*other, f);
    return other;
}

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
GUEST_FUZZ(0x007516a4, 100, [](guest::Fuzz &f) { f.arguments(); });

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
GUEST_FUZZ(0x00756cb4, 200, [](guest::Fuzz &f) {
    f.allocate(STACK_CLEARANCE);
    auto player = f.object<SavePlayer>();
    player->identity.player.id = u16(f.below(2));
    for (u32 slot = 0; slot < Pockets::SLOTS; slot++) {
        player->pockets.items[slot] = *fuzz::assorted_item(f, {PICKED_CATEGORY, 0x20});
    }
    current_player_holder->player = f.below(8) != 0 ? player : gptr<SavePlayer>(0u);
    f.arguments();
});

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
GUEST_FUZZ(0x00756d30, 300, [](guest::Fuzz &f) { f.arguments(fuzz_player_lists(f), fuzz_other_player(f)); });

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
GUEST_FUZZ(0x00756e9c, 300, [](guest::Fuzz &f) { f.arguments(fuzz_player_lists(f), fuzz_other_player(f)); });

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
GUEST_FUZZ(0x007570b0, 100, [](guest::Fuzz &f) {
    auto object = f.object<HalfwordBlocks>();
    for (HalfwordBlock &block : object->blocks) {
        block.first_halfword = u16(f.below(2) == 0 ? 0 : f.number());
    }
    f.arguments(object);
});

// Whether the linked player is the stored player (the same id, name and value), or when no player is stored.
bool linked_player_is_stored_or_none_stored(const LinkedPlayer &linked, const StoredPlayerHolder &holder) {
    gptr<StoredPlayer> stored = holder.stored;
    if (stored == nullptr) {
        return true;
    }
    return same_player(linked.player, stored->identity.player);
}
GUEST_EXPORT(0x00757028, linked_player_is_stored_or_none_stored);
GUEST_FUZZ(0x00757028, 300, [](guest::Fuzz &f) {
    gptr<LinkedPlayer> linked;
    gptr<StoredPlayerHolder> holder;
    fuzz_linked_and_stored(f, linked, holder);
    f.arguments(linked, holder);
});

// Whether the linked player is the stored player, with the same value after it (false when nothing is stored).
bool linked_player_is_stored(const LinkedPlayer &linked, gptr<StoredPlayerHolder> holder) {
    if (holder == nullptr || holder->stored == nullptr) {
        return false;
    }
    gptr<StoredPlayer> stored = holder->stored;
    return same_player(linked.player, stored->identity.player) && stored->value_2c == linked.value_22;
}
GUEST_EXPORT(0x007570ec, linked_player_is_stored);
GUEST_FUZZ(0x007570ec, 300, [](guest::Fuzz &f) {
    gptr<LinkedPlayer> linked;
    gptr<StoredPlayerHolder> holder;
    fuzz_linked_and_stored(f, linked, holder);
    f.arguments(linked, f.below(8) != 0 ? holder : gptr<StoredPlayerHolder>(0u));
});

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
GUEST_FUZZ(0x0074557c, 100, [](guest::Fuzz &f) {
    auto list = f.allocate(MAX_KIND_COUNT * sizeof(u32)).cast<u32>();
    for (u32 i = 0; i < MAX_KIND_COUNT; i++) {
        list[i] = f.below(3) == 0 ? 0 : f.below(6);
    }
    f.arguments(list);
});

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
GUEST_FUZZ(0x0071d374, 200, [](guest::Fuzz &f) {
    f.allocate(STACK_CLEARANCE);
    auto records = f.allocate(sizeof(IdentityRecords)).cast<IdentityRecords>();
    auto identity = f.object<PersonalId>();
    u32 used = f.below(RECORD_COUNT + 1);
    for (u32 i = 0; i < RECORD_COUNT; i++) {
        PersonalId &record = records->records[i].identity;
        record = *identity;  // (record fields are plain, so this copies the ids and names)
        record.player.id = i < used ? u16(1 + f.below(2)) : u16(0);
        record.town.id = u16(f.below(2));
    }
    identity->player.id = u16(1 + f.below(2));
    identity->town.id = u16(f.below(2));
    f.arguments(records, identity);
});

// The item of the first two (the index) in the pair, or the empty item for other indexes, copied to the destination.
Item &copy_item_of_pair_or_empty(Item &destination, const ItemPair &pair, u32 index) {
    return copy_item(destination, index < 2 ? pair.items[index] : *empty_item);
}
GUEST_EXPORT(0x0071c170, copy_item_of_pair_or_empty);
GUEST_FUZZ(0x0071c170, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), f.object<ItemPair>(), f.below(4)); });
