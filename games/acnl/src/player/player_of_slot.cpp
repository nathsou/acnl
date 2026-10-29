// The player standing for a slot index, and a check of the table of kinds that goes with the current record.
#include "save/player.hpp"
#include "save/save_data.hpp"

u32 slot_value(u32 slot);
u32 query_current_main_object();
bool kind_has_flag_80000_or_100000();

namespace {

constexpr u32 LOCAL_SLOT_COUNT = 4;
constexpr u32 SLOT_MASK = 3;
constexpr u32 NO_VALUE = 8;  // what slot_value reports for an unusable slot
constexpr u32 NO_ENTRY = 0xa5;
constexpr u32 FLAG_100000 = 0x100000;
constexpr s32 RECORD_VALUE_WANTED = 0xb;

inline guest::global<gptr<SavePlayer>, 0x00aaf14c> current_player;

struct RecordHolder {
    u8 unknown_00[0x1c];
    s8 record_index;
};
GUEST_OFFSET(RecordHolder, record_index, 0x1c);
inline guest::global<gptr<RecordHolder>, 0x0095c6d0> current_record_holder;

inline constexpr guest::Function<0x00607bdc, u32()> request_is_reserved;
inline constexpr guest::Function<0x002fb96c, gptr<SavePlayer>(u32 slot)> player_for_slot;
inline constexpr guest::Function<0x00303770, gptr<SavePlayer>(u32 slot)> player_record_for_slot;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline constexpr guest::Function<0x006c4280, s32(s32 index)> record_value;

}  // namespace

// The player of a slot index (4 and more stand for the main object's slot); null when requests are reserved or the
// slot has no usable value.
gptr<SavePlayer> player_of_slot_index(u32 index) {
    if (request_is_reserved() != 0) {
        return nullptr;
    }
    u32 slot = index < LOCAL_SLOT_COUNT ? (index & SLOT_MASK) : query_current_main_object();
    if (query_current_main_object() == slot) {
        return *current_player;
    }
    u32 value = slot_value(slot);
    if (value == NO_VALUE) {
        return nullptr;
    }
    return player_for_slot(value);
}
GUEST_EXPORT(0x002fe8a8, player_of_slot_index);
GUEST_FUZZ(0x002fe8a8, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 5, 7, f.number()})); });

// The same without the check for reserved requests, and for the players of the slots as player_record_for_slot gives them.
gptr<SavePlayer> player_of_slot_index_unreserved(u32 index) {
    u32 slot = index < LOCAL_SLOT_COUNT ? (index & SLOT_MASK) : query_current_main_object();
    if (query_current_main_object() == slot) {
        return *current_player;
    }
    u32 value = slot_value(slot);
    if (value == NO_VALUE) {
        return nullptr;
    }
    return player_record_for_slot(value);
}
GUEST_EXPORT(0x005c4e5c, player_of_slot_index_unreserved);
GUEST_FUZZ(0x005c4e5c, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 5, 7, f.number()})); });

// The save data block of the main object's player; null if that slot is not a local player's.
gptr<PlayerBlock> block_of_main_player() {
    u32 value = slot_value(query_current_main_object());
    if (value >= SaveData::PLAYER_COUNT) {
        return nullptr;
    }
    return guest::addr_of(get_save_data()->player_blocks_5d900[value]);
}
GUEST_EXPORT(0x005c710c, block_of_main_player);
GUEST_FUZZ(0x005c710c, 50, [](guest::Fuzz &f) { f.arguments(); });

// The save data block of a local player (given as a player record); null for other pointers.
gptr<PlayerBlock> block_of_player(gptr<SavePlayer> player) {
    if (player == nullptr) {
        return nullptr;
    }
    for (u32 slot = 0; slot < SaveData::PLAYER_COUNT; slot++) {
        if (player_record_for_slot(slot) == player) {
            return guest::addr_of(get_save_data()->player_blocks_5d900[slot]);
        }
    }
    return nullptr;
}
GUEST_EXPORT(0x005c3db8, block_of_player);
GUEST_FUZZ(0x005c3db8, 100, [](guest::Fuzz &f) {
    gptr<SaveData> save = get_save_data();
    f.arguments(f.below(5) == 0 ? gptr<SavePlayer>(0u) : guest::addr_of(save->players[f.below(SaveData::PLAYER_COUNT)]));
});

// Whether the current kind has flag 0x80000 or 0x100000, there is a current record, the id has flag 0x100000 in the
// table and the record's value is 0xb.
bool record_value_is_11(u32 id) {
    if (!kind_has_flag_80000_or_100000()) {
        return false;
    }
    gptr<RecordHolder> holder = *current_record_holder;
    if (holder == nullptr || id == NO_ENTRY) {
        return false;
    }
    if (table_entry_has_all_bits(FLAG_100000, id) == 0) {
        return false;
    }
    return record_value(holder->record_index) == RECORD_VALUE_WANTED;
}
GUEST_EXPORT(0x005b4954, record_value_is_11);
GUEST_FUZZ(0x005b4954, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 0x20, 0xa4, 0xa5, f.below(0xa5)})); });
