// The hours the shops are open: 9:00 to 22:59 normally, from 6:00 with the first town flag, and from 9:00 to 1:59
// with the second (these are probably the Early Bird and Night Owl ordinances).
#include "core/time_stamp.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

namespace {

constexpr s32 NORMAL_FIRST_HOUR = 9;
constexpr s32 NORMAL_END_HOUR = 23;       // the first hour that is closed
constexpr s32 EARLY_FIRST_HOUR = 6;
constexpr s32 LATE_FIRST_CLOSED_HOUR = 2;  // the shops stay open until 2:00
constexpr u8 TIME_FROZEN = 3;
constexpr u8 PLAYER_FLAG_BIT_1 = 1 << 1;  // (meaning not known yet)

inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline guest::global<gptr<SavePlayer>, 0x00aaf14c> current_player;

bool shops_open_at(s32 hour) {
    u8 flags = get_save_data()->flags_621cf;
    if ((flags & SaveData::FLAGS_621CF_BIT_1) != 0) {
        return hour >= EARLY_FIRST_HOUR && hour < NORMAL_END_HOUR;
    }
    if ((flags & SaveData::FLAGS_621CF_BIT_2) != 0) {
        return hour < LATE_FIRST_CLOSED_HOUR || hour >= NORMAL_FIRST_HOUR;
    }
    return hour >= NORMAL_FIRST_HOUR && hour < NORMAL_END_HOUR;
}

// Fuzzing: sets the two flags to one of their combinations (the other bits stay).
void set_ordinance_flags(guest::Fuzz &f) {
    constexpr u8 BOTH = SaveData::FLAGS_621CF_BIT_1 | SaveData::FLAGS_621CF_BIT_2;
    u8 &flags = get_save_data()->flags_621cf;
    flags = u8((flags & ~BOTH) | (f.below(4) << 1));
}

}  // namespace

// Whether the shops are open at the hour of the reference time.
bool shops_are_open() {
    return shops_open_at(reference_time->hour);
}
GUEST_EXPORT(0x0030946c, shops_are_open);
GUEST_FUZZ(0x0030946c, 100, [](guest::Fuzz &f) {
    set_ordinance_flags(f);
    f.arguments();
});

// The same, false while the time is frozen or when the current player does not have the player flag.
bool shops_are_open_for_player() {
    if (read_global_object_byte() == TIME_FROZEN) {
        return false;
    }
    gptr<SavePlayer> player = *current_player;
    if (player != nullptr && (player->flags_5701 & PLAYER_FLAG_BIT_1) == 0) {
        return false;
    }
    return shops_open_at(reference_time->hour);
}
GUEST_EXPORT(0x00309384, shops_are_open_for_player);
GUEST_FUZZ(0x00309384, 100, [](guest::Fuzz &f) {
    set_ordinance_flags(f);
    f.arguments();
});
