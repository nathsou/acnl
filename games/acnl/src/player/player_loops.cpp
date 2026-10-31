// Functions that go over the four players of the save data, and the mapping of a slot number to a player.
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "save/save_data.hpp"

namespace {

// Per-player operations that are still recompiled.
inline constexpr guest::Function<0x00582bc0, void(gptr<SavePlayer> player)> player_operation_a;
inline constexpr guest::Function<0x00582d34, void(gptr<SavePlayer> player)> player_operation_b;
inline constexpr guest::Function<0x006bd910, void(gptr<SavePlayer> player, u32 argument)> player_operation_c;
inline constexpr guest::Function<0x001187b5, void(gptr<SavePlayer> player, u32 argument, u32 index)>
    player_operation_d;  // Thumb
inline constexpr guest::Function<0x0035072c, void(gptr<u32> out)> current_stamp;

constexpr u32 STAMP_BYTE_0_SHIFT = 24;
constexpr u32 STAMP_BYTE_1_SHIFT = 16;
constexpr u32 FIRST_REMOTE_SLOT = 4;
constexpr u32 NO_PLAYER_INDEX = 0xffffffff;

// The players of a save, from the "data base" the game passes around (SaveData::BASE_OFFSET into the save data):
// the players start 0x20 bytes after it.
gptr<SavePlayer> players_of_base(gptr<void> base) {
    return guest::addr_of(save_data_of_base(base.addr())->players[0]);
}

}  // namespace

static void apply_operation_a(gptr<void> base) {
    gptr<SavePlayer> players = players_of_base(base);
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        player_operation_a(players + i);
    }
}
GUEST_EXPORT(0x0027a4b8, apply_operation_a);

static void apply_operation_b(gptr<void> base) {
    gptr<SavePlayer> players = players_of_base(base);
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        player_operation_b(players + i);
    }
}
GUEST_EXPORT(0x0027a558, apply_operation_b);

// Stores the two high bytes of the current stamp. (The original, at 0x0027ab50, makes system calls through the stamp, so
// it cannot be checked on its own and stays recompiled.)
static void write_stamp_bytes(gptr<u8> out) {
    guest::StackObject<u32> stamp;
    current_stamp(stamp.ptr());
    out[0] = u8(*stamp >> STAMP_BYTE_0_SHIFT);
    out[1] = u8(*stamp >> STAMP_BYTE_1_SHIFT);
}

// Takes the stamp for every player that is set.
static void update_stamps(gptr<SavePlayer> players) {
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        gptr<SavePlayer> player = players + i;
        if (player->identity.is_set()) {
            write_stamp_bytes(guest::addr_of(player->stamp_55d2[0]));
        }
    }
}
GUEST_EXPORT(0x0027a594, update_stamps);

// Runs operation d for every player that is set, with the player's index.
static void apply_operation_d(gptr<SavePlayer> players, u32 argument) {
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        gptr<SavePlayer> player = players + i;
        if (player->identity.is_set()) {
            player_operation_d(player, argument, i & 0xff);
        }
    }
}
GUEST_EXPORT(0x0027a5f8, apply_operation_d);

static void apply_operation_c(gptr<SavePlayer> players) {
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        player_operation_c(players + i, 0);
    }
}
GUEST_EXPORT(0x0027aa88, apply_operation_c);

// A remote slot (4-7) as a player index (0-3); NO_PLAYER_INDEX for other slots.
static u32 index_of_remote_slot(u32 slot) {
    u32 index = slot - FIRST_REMOTE_SLOT;
    return index < SaveData::PLAYER_COUNT ? index : NO_PLAYER_INDEX;
}
GUEST_EXPORT(0x0027a5dc, index_of_remote_slot);

// A local slot (0-3) as a player index; NO_PLAYER_INDEX for other slots.
static u32 index_of_local_slot(u32 slot) {
    return slot < SaveData::PLAYER_COUNT ? slot : NO_PLAYER_INDEX;
}
GUEST_EXPORT(0x0027a5ec, index_of_local_slot);

static bool is_remote_slot(u32 slot) {
    return slot - FIRST_REMOTE_SLOT < SaveData::PLAYER_COUNT;
}
GUEST_EXPORT(0x0027ab24, is_remote_slot);

static bool is_local_slot(u32 slot) {
    return slot < SaveData::PLAYER_COUNT;
}
GUEST_EXPORT(0x0027ab40, is_local_slot);

namespace {

inline constexpr guest::Function<0x003117bc, u32(const Item &item)> item_wear_class_index;
constexpr u32 CLEARING_INDEX = 7;  // wear class index of the items that make the second item go (meaning not known yet)

}  // namespace

// Two items held side by side (what holds them is not known yet).
struct HeldItems {
    u8 unknown_00[8];
    Item first;
    u8 unknown_0c[4];
    Item second;

    void clear_second_if_first_clears_it();
};
GUEST_OFFSET(HeldItems, first, 8);
GUEST_OFFSET(HeldItems, second, 0x10);

// Empties the second item when the first one (if it has wear class 3, else the empty item) has wear class index 7.
void HeldItems::clear_second_if_first_clears_it() {
    gptr<Item> held = first.wear_class() == WEAR_CLASS_3 ? guest::addr_of(first) : empty_item.ptr();
    if (item_wear_class_index(*held) == CLEARING_INDEX) {
        copy_item(second, *empty_item);
    }
}
GUEST_EXPORT(0x0027abf0, HeldItems::clear_second_if_first_clears_it);
