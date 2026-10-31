// Offsets inside the save data that the player code asks for (the game computes them as differences of addresses,
// so they are constants), and checks of a pending request against them.
#include "guest/guest.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u32 SLOT_TABLE_OFFSET = 0x292a0;  // the data base (0x80) plus 0x29220
constexpr u32 TOWN_BLOCK_OFFSET = 0x71900;
constexpr u32 PENDING_VALUE_MATCH = 0x00022bcc;
constexpr u32 RESERVED_VALUE = 0x00089a60;

// A request kept in three globals: whether one is pending, where it points (0x0095148c) and what it holds.
inline guest::global<s8, 0x00951484> request_active;
inline guest::global<u32, 0x0095148c> request_offset;
inline guest::global<u32, 0x00951490> request_value;
inline guest::global<u32, 0x0088e5bc> current_value_source;

inline constexpr guest::Function<0x00305f44, u32()> query_current_main_object;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline constexpr guest::Function<0x002ff8b0, u32(u32 index)> slot_value;

struct Settings {
    u8 unknown_00;
    u8 slot_value_01;
    u8 unknown_02[0x24 - 2];
    u32 words_24[2];
};
GUEST_OFFSET(Settings, slot_value_01, 1);
GUEST_OFFSET(Settings, words_24, 0x24);
inline guest::global<Settings, 0x009506bc> settings;
inline guest::global<u32[2], 0x008549b4> default_words;

struct ClockCopy {
    u32 words[2];
    float value_08;
};
GUEST_SIZE(ClockCopy, 12);
inline guest::global<ClockCopy, 0x00ad56b0> reference_clock;
inline guest::global<ClockCopy, 0x00997de8> clock_copy;
inline guest::global<u8[2], 0x009506f0> pair_9506f0;
constexpr u8 PAIR_VALUE = 0x28;
constexpr u32 SLOT_MAIN = 4;

}  // namespace

gptr<SavePlayer> player_in_array(gptr<SavePlayer> players, u32 index);

u32 save_data_base_offset() { return SaveData::BASE_OFFSET; }
GUEST_EXPORT(0x00607198, save_data_base_offset);

u32 save_slot_table_offset() { return SLOT_TABLE_OFFSET; }
GUEST_EXPORT(0x006073cc, save_slot_table_offset);

u32 save_town_block_offset() { return TOWN_BLOCK_OFFSET; }
GUEST_EXPORT(0x006075ec, save_town_block_offset);
GUEST_EXPORT(0x00607690, save_town_block_offset);

// A request is pending with offset 0 and the value the current source holds.
bool request_matches_current_source() {
    return *request_active != 0 && *request_offset == 0 && *request_value == *current_value_source;
}
GUEST_EXPORT(0x00607474, request_matches_current_source);

// A request is pending at the slot table with the given value.
bool request_matches_slot_table() {
    return *request_active != 0 && *request_offset == SLOT_TABLE_OFFSET && *request_value == PENDING_VALUE_MATCH;
}
GUEST_EXPORT(0x006074b4, request_matches_slot_table);

// A request is pending with offset 0 and the reserved value.
bool request_is_reserved() {
    return *request_active != 0 && *request_offset == 0 && *request_value == RESERVED_VALUE;
}
GUEST_EXPORT(0x00607bdc, request_is_reserved);

// Records the main slot's value and the default words in the settings.
void reset_settings() {
    query_current_main_object();
    settings->slot_value_01 = u8(slot_value(SLOT_MAIN));
    settings->words_24[0] = default_words[0];
    settings->words_24[1] = default_words[1];
}
GUEST_EXPORT(0x00607f9c, reset_settings);

// Copies the reference clock to a global, and sets two bytes to 0x28.
void copy_reference_clock() {
    clock_copy->words[0] = reference_clock->words[0];
    clock_copy->words[1] = reference_clock->words[1];
    clock_copy->value_08 = reference_clock->value_08;
    (*pair_9506f0)[0] = PAIR_VALUE;
    (*pair_9506f0)[1] = PAIR_VALUE;
}
GUEST_EXPORT(0x0060b0b8, copy_reference_clock);

// How far the player record of the slot lies from the start of the save data (wrong for a slot past the fourth, whose
// record is null).
u32 player_offset_in_save(u32 slot) {
    gptr<SaveData> save = get_save_data();
    return player_in_array(guest::addr_of(save->players[0]), slot).addr() - save.addr();
}
GUEST_EXPORT(0x00607588, player_offset_in_save);

// A request is pending for the whole player record of the slot (its offset is the player's and it covers SavePlayer::SIZE).
bool request_is_for_player(u32 slot) {
    u32 offset = player_offset_in_save(slot);
    return *request_active != 0 && *request_offset == offset && *request_value == SavePlayer::SIZE;
}
GUEST_EXPORT(0x006077c0, request_is_for_player);
