// Small objects and accessors from 0x0052c000 to 0x00582000: talk-state setters, tables indexed by item, the town
// identity, a resource loader for items, and flag switches of AcNpc.
#include "g3d/resource_loader.hpp"
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/personal_id.hpp"
#include "save/player.hpp"

using guest::gptr;

namespace {

constexpr u32 TALK_STATE_0 = 0;
constexpr u32 TALK_STATE_1 = 1;
constexpr u32 TALK_STATE_2 = 2;
constexpr u32 TALK_STATE_3 = 3;
constexpr u32 TALK_STATE_7 = 7;
constexpr u32 TALK_STATE_8 = 8;
constexpr u32 TALK_STATE_A = 0xa;
constexpr u32 TALK_STATE_B = 0xb;
constexpr u32 TALK_STATE_D = 0xd;
constexpr u8 FLAG_SET = 1;
constexpr u8 FLAG_TO_RESET = 5;
constexpr u32 TOWN_BLOCK_OFFSET = 0x71900;
constexpr u32 ITEM_TABLE_OFFSET = 0xc74;
constexpr u32 ITEM_ENTRY_SIZE = 5;
constexpr u32 FLAG_BIT_10 = 0x10;
constexpr u32 FLAG_BIT_11 = 0x11;
constexpr u32 FLAGS_BLOCK_OFFSET = 0xb06;
constexpr u32 ALLOCATION_LINK_OFFSET = 8;
constexpr u32 RES_LOADER_FUZZ_SIZE = 0x400;  // the load-split part's size is not known: be generous

inline constexpr guest::Function<0x003170f8, bool(u32 kind, u32 strict)> talk_state_matches;
inline constexpr guest::Function<0x005b3ec4, gptr<u8>()> item_tables;
inline constexpr guest::Function<0x002fb328, gptr<u8>()> get_save_data;
inline constexpr guest::Function<0x00303fb4, void(gptr<u8> bits, u32 index, u32 value)> set_bit;
inline constexpr guest::Function<0x005380a8, u32(gptr<void> block)> allocation_owner;
inline constexpr guest::Function<0x0053814c, u32(gptr<void> address)> free_in_containing_heap;
inline constexpr guest::Function<0x00311a34, u32(gptr<void> identity, gptr<void> other)> match_entry;

struct TalkObject {
    u8 unknown_00[0x1a];
    u8 byte_1a;
    u8 byte_1b;
};
GUEST_OFFSET(TalkObject, byte_1a, 0x1a);
GUEST_OFFSET(TalkObject, byte_1b, 0x1b);
struct TalkGlobal {
    u8 unknown_00[0xc];
    gptr<TalkObject> current;
};
GUEST_OFFSET(TalkGlobal, current, 0xc);
inline guest::global<TalkGlobal, 0x009516a0> talk_global;

// The block at 0x71900 of the save data, which starts with something and has the town's identity at 0xc.
struct TownBlock {
    u8 unknown_00[0xc];
    PersonalId town_identity;
};
GUEST_OFFSET(TownBlock, town_identity, 0xc);

struct ItemTables {
    u8 unknown_000[ITEM_TABLE_OFFSET];
    gptr<u8> entries;
};
GUEST_OFFSET(ItemTables, entries, ITEM_TABLE_OFFSET);

struct PlayerContext {
    u8 unknown_000[0x234];
    gptr<SavePlayer> player;
};
GUEST_OFFSET(PlayerContext, player, 0x234);
inline guest::global<PlayerContext, 0x00aaef18> player_context;

inline guest::global<gptr<u8>, 0x00957328> item_tables_global;
inline guest::global<u32[0x172b], 0x00871ac4> default_values_by_item;
inline guest::global<u32[12], 0x00953238> value_block_953238;

struct ResLoader : g3d::ResourceLoader {
    static constexpr u32 VTABLE = 0x009038f8;

    u8 unknown_1c_block[0x108 - sizeof(g3d::ResourceLoader)];
    u32 value_108;
    u32 value_10c;
    u32 value_110;
};
GUEST_OFFSET(ResLoader, value_108, 0x108);

// An object with a flags area at 0xb06 for AcNpc.
struct NpcFlags {
    u8 unknown_000[FLAGS_BLOCK_OFFSET];
    u8 bits[8];
};
GUEST_OFFSET(NpcFlags, bits, FLAGS_BLOCK_OFFSET);

// An object that owns an allocation (pointer at 8) and forgets it when freed.
struct OwnerOfAllocation {
    u32 value_00;
    u32 value_04;
    gptr<void> allocation;
};
GUEST_OFFSET(OwnerOfAllocation, allocation, ALLOCATION_LINK_OFFSET);

}  // namespace

static bool set_talk_flag_if_state(u32 state) {
    if (!talk_state_matches(state, 0)) {
        return false;
    }
    talk_global->current->byte_1a = FLAG_SET;
    return true;
}

bool set_talk_flag_in_state_d() { return set_talk_flag_if_state(TALK_STATE_D); }
bool set_talk_flag_in_state_7() { return set_talk_flag_if_state(TALK_STATE_7); }
bool set_talk_flag_in_state_a() { return set_talk_flag_if_state(TALK_STATE_A); }
bool set_talk_flag_in_state_b() { return set_talk_flag_if_state(TALK_STATE_B); }
GUEST_EXPORT(0x0052c664, set_talk_flag_in_state_d);
GUEST_EXPORT(0x0052c698, set_talk_flag_in_state_7);
GUEST_EXPORT(0x0052c75c, set_talk_flag_in_state_a);
GUEST_EXPORT(0x0052c940, set_talk_flag_in_state_b);

static void fuzz_talk(guest::Fuzz &f) {
    auto talk = f.object<TalkObject>();
    talk->byte_1a = u8(f.below(7));
    talk_global->current = talk;
}
GUEST_FUZZ(0x0052c664, 100, [](guest::Fuzz &f) {
    fuzz_talk(f);
    f.arguments();
});
GUEST_FUZZ(0x0052c698, 100, [](guest::Fuzz &f) {
    fuzz_talk(f);
    f.arguments();
});
GUEST_FUZZ(0x0052c75c, 100, [](guest::Fuzz &f) {
    fuzz_talk(f);
    f.arguments();
});
GUEST_FUZZ(0x0052c940, 100, [](guest::Fuzz &f) {
    fuzz_talk(f);
    f.arguments();
});

// In state 0 or 3: turns byte 0x1a from 5 to 1 (and says whether it was 5).
bool reset_talk_flag_5() {
    if (!talk_state_matches(TALK_STATE_0, 0) && !talk_state_matches(TALK_STATE_3, 0)) {
        return false;
    }
    gptr<TalkObject> talk = talk_global->current;
    if (talk->byte_1a != FLAG_TO_RESET) {
        return false;
    }
    talk->byte_1a = FLAG_SET;
    return true;
}
GUEST_EXPORT(0x0052c9fc, reset_talk_flag_5);
GUEST_FUZZ(0x0052c9fc, 100, [](guest::Fuzz &f) {
    fuzz_talk(f);
    f.arguments();
});

// In state 8: sets byte 0x1a and stores the value in byte 0x1b.
bool set_talk_flag_and_value_in_state_8(u32 value) {
    if (!talk_state_matches(TALK_STATE_8, 0)) {
        return false;
    }
    gptr<TalkObject> talk = talk_global->current;
    talk->byte_1a = FLAG_SET;
    talk->byte_1b = u8(value);
    return true;
}
GUEST_EXPORT(0x0052cd1c, set_talk_flag_and_value_in_state_8);
GUEST_FUZZ(0x0052cd1c, 100, [](guest::Fuzz &f) {
    fuzz_talk(f);
    f.arguments(f.number());
});

// Whether the talk state is 1 or 2.
bool talk_state_is_1_or_2() {
    return talk_state_matches(TALK_STATE_1, 0) || talk_state_matches(TALK_STATE_2, 0);
}
GUEST_EXPORT(0x0052dad0, talk_state_is_1_or_2);
GUEST_FUZZ(0x0052dad0, 50, [](guest::Fuzz &f) { f.arguments(); });

// The five-byte entry of the item's index in the item tables (null without tables or for a bad index).
gptr<u8> item_table_entry(const Item &item) {
    gptr<ItemTables> tables = item_tables().cast<ItemTables>();
    if (tables == nullptr) {
        return gptr<u8>(0u);
    }
    s32 index = item.index();
    if (index < 0) {
        return gptr<u8>(0u);
    }
    gptr<u8> entries = tables->entries;
    if (entries == nullptr || Item::ITEM_COUNT <= u32(index)) {
        return gptr<u8>(0u);
    }
    return entries + u32(index) * ITEM_ENTRY_SIZE;
}
GUEST_EXPORT(0x00535a1c, item_table_entry);
GUEST_FUZZ(0x00535a1c, 200, [](guest::Fuzz &f) {
    auto tables = f.object<ItemTables>();
    tables->entries = f.below(4) != 0 ? f.allocate(ITEM_ENTRY_SIZE * 8).cast<u8>() : gptr<u8>(0u);
    *item_tables_global = f.below(5) != 0 ? tables.cast<u8>() : gptr<u8>(0u);
    auto item = f.object<Item>();
    if (f.below(4) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    f.arguments(item);
});

// The default value of the item (a word of the block at 0x00953238 for items without a valid index).
u32 item_default_value(const Item &item) {
    s32 index = item.index();
    if (index == -1 || u32(index) >= Item::ITEM_COUNT) {
        return value_block_953238[11];
    }
    return default_values_by_item[u32(index)];
}
GUEST_EXPORT(0x00536060, item_default_value);
GUEST_FUZZ(0x00536060, 200, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(4) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    f.arguments(item);
});

ResLoader &construct_res_loader(ResLoader &self) {
    g3d::construct_resource_loader(self);
    self.vtable = gptr<u32>(ResLoader::VTABLE);
    self.value_108 = 0;
    self.value_10c = 0;
    self.value_110 = 0;
    return self;
}
GUEST_EXPORT(0x005371e0, construct_res_loader);
GUEST_FUZZ(0x005371e0, 100, [](guest::Fuzz &f) { f.arguments(f.allocate(RES_LOADER_FUZZ_SIZE).cast<ResLoader>()); });

// The identity of the town in the save data.
gptr<PersonalId> town_identity() {
    gptr<TownBlock> block(get_save_data().addr() + TOWN_BLOCK_OFFSET);
    return guest::addr_of(block->town_identity);
}
GUEST_EXPORT(0x005373a4, town_identity);
GUEST_FUZZ(0x005373a4, 20, [](guest::Fuzz &f) { f.arguments(); });

// Whether the current player is the town's owner.
bool current_player_is_town_owner() {
    gptr<SavePlayer> player = player_context->player;
    if (player == nullptr) {
        return false;
    }
    return match_entry(guest::addr_of(player->identity).cast<void>(), town_identity().cast<void>()) != 0;
}
GUEST_EXPORT(0x005373bc, current_player_is_town_owner);
GUEST_FUZZ(0x005373bc, 50, [](guest::Fuzz &f) { f.arguments(); });

// Frees the allocation and forgets it.
void free_owned_allocation(OwnerOfAllocation &self) {
    gptr<void> allocation = self.allocation;
    if (allocation == nullptr) {
        return;
    }
    allocation_owner(allocation);
    free_in_containing_heap(allocation);
    self.allocation = nullptr;
    self.value_00 = 0;
    self.value_04 = 0;
}
GUEST_EXPORT(0x00537e60, free_owned_allocation);
GUEST_FUZZ(0x00537e60, 50, [](guest::Fuzz &f) {
    auto owner = f.object<OwnerOfAllocation>();
    owner->allocation = nullptr;  // nothing to free
    f.arguments(owner);
});

// Sets flags 0x10 and 0x11 of the NPC (AcNpc::virtual_48).
bool set_npc_flags_10_11(NpcFlags &self) {
    set_bit(guest::addr_of(self.bits[0]), FLAG_BIT_10, 1);
    set_bit(guest::addr_of(self.bits[0]), FLAG_BIT_11, 1);
    return true;
}
GUEST_EXPORT(0x005782c4, set_npc_flags_10_11);
GUEST_FUZZ(0x005782c4, 100, [](guest::Fuzz &f) { f.arguments(f.object<NpcFlags>()); });

// Clears flags 0x10 and 0x11 of the NPC (AcNpc::virtual_49).
bool clear_npc_flags_10_11(NpcFlags &self) {
    set_bit(guest::addr_of(self.bits[0]), FLAG_BIT_10, 0);
    set_bit(guest::addr_of(self.bits[0]), FLAG_BIT_11, 0);
    return true;
}
GUEST_EXPORT(0x00578b04, clear_npc_flags_10_11);
GUEST_FUZZ(0x00578b04, 100, [](guest::Fuzz &f) { f.arguments(f.object<NpcFlags>()); });
