// Events that depend on the time of day for players who have a certain player flag: the new year countdown, and the
// night flag of the save data.
#include "core/random.hpp"
#include "core/time_stamp.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u32 PLAYER_FLAGS_OFFSET = 0x5701;   // a byte of the player; bit 1 enables both events
constexpr u8 PLAYER_FLAG_EVENTS = 1 << 1;
constexpr u32 SAVE_NIGHT_FLAG_OFFSET = 0x6ae74;  // a word of the save data (get_data_base plus 0x6adf4)

constexpr s32 DECEMBER = 12;
constexpr s32 JANUARY = 1;
constexpr s32 LAST_DAY_OF_YEAR = 31;
constexpr s32 LAST_HOUR = 23;
constexpr s32 COUNTDOWN_START_MINUTE = 30;  // the countdown runs from here ...
constexpr s32 COUNTDOWN_SURE_MINUTE = 50;   // ... certainly from here on in December ...
constexpr s32 COUNTDOWN_CHANCE = 60;        // ... and with this chance (percent) before
constexpr s32 PERCENT = 100;
constexpr s32 NIGHT_FIRST_HOUR_OFFSET = 7;  // hours are shifted by this: night is what lands in 15 and up
constexpr u32 NIGHT_HOURS = 15;

inline constexpr guest::Function<0x003091e0, gptr<void>(gptr<void> argument)> get_manager;
inline constexpr guest::Function<0x003091ec, gptr<SavePlayer>(gptr<void> manager)> get_player;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;

bool current_player_has_events_flag() {
    gptr<SavePlayer> player = get_player(get_manager(nullptr));
    return player && (*gptr<u8>(player.addr() + PLAYER_FLAGS_OFFSET) & PLAYER_FLAG_EVENTS) != 0;
}

}  // namespace

// Whether the new year countdown is on for the current player: from 23:30 on December 31st (at 23:50 for sure, in
// between with a chance of COUNTDOWN_CHANCE percent) and until 0:30 on January 1st.
bool is_new_year_countdown_time() {
    if (!current_player_has_events_flag()) {
        return false;
    }
    if (reference_time->month == DECEMBER) {
        if (reference_time->day != LAST_DAY_OF_YEAR || reference_time->hour != LAST_HOUR) {
            return false;
        }
        if (reference_time->minute < COUNTDOWN_START_MINUTE) {
            return false;
        }
        return reference_time->minute >= COUNTDOWN_SURE_MINUTE || random_below(PERCENT) < COUNTDOWN_CHANCE;
    }
    if (reference_time->month == JANUARY) {
        if (reference_time->day != 1 || reference_time->hour != 0) {
            return false;
        }
        return reference_time->minute < COUNTDOWN_START_MINUTE;
    }
    return false;
}
GUEST_EXPORT(0x0051d07c, is_new_year_countdown_time);
GUEST_FUZZ(0x0051d07c, 100, [](guest::Fuzz &f) { f.arguments(); });

// Stores in the save data whether it is night (from 22:00 to 6:59) for a player with the events flag; 0 otherwise.
void update_night_flag() {
    bool night = current_player_has_events_flag() && u32(reference_time->hour - NIGHT_FIRST_HOUR_OFFSET) >= NIGHT_HOURS;
    *gptr<u32>(get_save_data().addr() + SAVE_NIGHT_FLAG_OFFSET) = night ? 1 : 0;
}
GUEST_EXPORT(0x001cd934, update_night_flag);
GUEST_FUZZ(0x001cd934, 100, [](guest::Fuzz &f) { f.arguments(); });
