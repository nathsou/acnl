// The date the game keeps for the player who is the mayor (the first player with the mayor flag).
#include "core/date.hpp"
#include "core/time_stamp.hpp"
#include "save/save_data.hpp"

namespace {

constexpr u8 FEBRUARY = 2;
constexpr u8 LEAP_DAY = 29;
constexpr u8 LAST_DAY_OF_COMMON_FEBRUARY = 28;

inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline constexpr guest::Function<0x00302204, u32(gptr<SavePlayer> players)> first_player_index_with_flag;
inline constexpr guest::Function<0x002fb96c, gptr<SavePlayer>(u32 slot)> player_for_slot;

}  // namespace

// Writes the date of the first flagged player to `out` (normalised, as the time conversion does) and reports whether
// there is one set. With `no_leap_day` February 29th becomes the 28th.
bool get_flagged_player_date(gptr<Date> out, bool no_leap_day) {
    if (out == nullptr) {
        return false;
    }
    gptr<SavePlayer> player = player_for_slot(first_player_index_with_flag(guest::addr_of(get_save_data()->players[0])));
    if (player == nullptr) {
        return false;
    }
    Date stored = player->date_55d6;
    if (stored.year == 0 || stored.month == 0 || stored.day == 0) {
        return false;
    }
    TimeStamp midnight = TimeStamp::from_milliseconds_since_2000(
        TimeStamp{stored.year, s8(stored.month), s8(stored.day), 0, 0, 0, 0, 0}.milliseconds_since_2000());
    Date date{u16(midnight.year), u8(midnight.month), u8(midnight.day)};
    if (no_leap_day && date.day == LEAP_DAY && date.month == FEBRUARY) {
        date.day = LAST_DAY_OF_COMMON_FEBRUARY;
    }
    *out = date;
    return true;
}
GUEST_EXPORT(0x0058e6e8, get_flagged_player_date);
