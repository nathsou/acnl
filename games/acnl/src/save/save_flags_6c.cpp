// Small questions on the save data's flags and on the players' flag bytes.
#include "guest/guest.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u16 FLAGS_621B8_LOW_MASK = 0x3;
constexpr u32 FLAGS_621B8_HIGH_SHIFT = 8;
constexpr u8 FLAG_BIT_0 = 0x01;
constexpr u8 PLAYER_FLAG_1 = 0x02;
constexpr u32 SMALL_VALUE_LIMIT = 2;
constexpr u32 SLOT_COUNT_FOR_LOCAL = 4;
constexpr u32 MODE_NOT_COUNTING = 3;
constexpr u32 MAIN_SLOT = 4;
constexpr u32 LOCAL_SLOT_LIMIT = 4;

inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline constexpr guest::Function<0x002fb94c, gptr<SavePlayer>()> get_current_player;
inline constexpr guest::Function<0x002fb96c, gptr<SavePlayer>(u32 index)> player_for_slot;
inline constexpr guest::Function<0x00302204, u32(gptr<SavePlayer> players)> first_player_index_with_flag;
inline constexpr guest::Function<0x00759260, u32(gptr<void> holder)> small_value_clamped;
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;
inline constexpr guest::Function<0x002ff8b0, u32(u32 index)> slot_value;
inline constexpr guest::Function<0x0027ab40, bool(u32 slot)> is_local_slot;

}  // namespace

u32 save_flags_621b8_low() {
    return get_save_data()->flags_621b8 & FLAGS_621B8_LOW_MASK;
}
GUEST_EXPORT(0x006caedc, save_flags_621b8_low);
GUEST_FUZZ(0x006caedc, 50, [](guest::Fuzz &f) { f.arguments(); });

u32 save_flags_621b8_high() {
    return (get_save_data()->flags_621b8 >> FLAGS_621B8_HIGH_SHIFT) & FLAGS_621B8_LOW_MASK;
}
GUEST_EXPORT(0x006caef8, save_flags_621b8_high);
GUEST_FUZZ(0x006caef8, 50, [](guest::Fuzz &f) { f.arguments(); });

u32 save_flags_621cf_bit_0() {
    return get_save_data()->flags_621cf & FLAG_BIT_0;
}
GUEST_EXPORT(0x006caf58, save_flags_621cf_bit_0);
GUEST_FUZZ(0x006caf58, 50, [](guest::Fuzz &f) { f.arguments(); });

// Bit 1 of the flags of the first player with the flag set; 0 without one.
u32 first_flagged_player_flag_1() {
    gptr<SavePlayer> player = player_for_slot(first_player_index_with_flag(guest::addr_of(get_save_data()->players[0])));
    if (player == nullptr) {
        return 0;
    }
    return (player->flags_5701 & PLAYER_FLAG_1) != 0;
}
GUEST_EXPORT(0x006cb75c, first_flagged_player_flag_1);
GUEST_FUZZ(0x006cb75c, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether the small value of the save data is above 2.
bool small_value_above_2() {
    return small_value_clamped(guest::addr_of(get_save_data()->small_values_4be80[0]).cast<void>()) > SMALL_VALUE_LIMIT;
}
GUEST_EXPORT(0x006cba0c, small_value_above_2);
GUEST_FUZZ(0x006cba0c, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether the slot is one of the four players' and the local main one.
bool slot_is_local_main(u32 slot) {
    if (slot >= LOCAL_SLOT_LIMIT) {
        return false;
    }
    u32 main = slot_value(MAIN_SLOT);
    return is_local_slot(main) && slot == main;
}
GUEST_EXPORT(0x006cbb94, slot_is_local_main);
GUEST_FUZZ(0x006cbb94, 50, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2, 3, 4, f.number()})); });

// True while the registry is disabled; otherwise whether the current player exists and has flag 1 clear.
bool current_player_without_flag_1() {
    if (read_global_object_byte() == MODE_NOT_COUNTING) {
        return true;
    }
    gptr<SavePlayer> player = get_current_player();
    if (player == nullptr) {
        return false;
    }
    return (player->flags_5701 & PLAYER_FLAG_1) == 0;
}
GUEST_EXPORT(0x006cbcbc, current_player_without_flag_1);
GUEST_FUZZ(0x006cbcbc, 50, [](guest::Fuzz &f) { f.arguments(); });
