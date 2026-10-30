// The table of seven places the save data keeps, one for each weekday (from Sunday): which place is the one of the day.
#include <cstring>

#include "core/day_start.hpp"
#include "save/save_data.hpp"

namespace {

inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;
inline constexpr guest::Function<0x0058dd08, bool(u32 place)> place_is_open;

constexpr u8 TIME_FROZEN = 3;
constexpr u32 NO_PLACE = 7;                    // the answer while the time is frozen
constexpr u32 TABLE_OWNER_OFFSET = 0x6e1f4;    // from the data base: where value_for_weekday's table owner is
constexpr u32 WORD_COUNT = 3;

gptr<u8> table_owner() {
    return gptr<u8>((*save_data).addr() + SaveData::BASE_OFFSET + TABLE_OWNER_OFFSET);
}

}  // namespace

// The place of the weekday the time falls on (NO_PLACE while the time is frozen).
u32 scheduled_place_at(const TimeStamp &time) {
    if (read_global_object_byte() == TIME_FROZEN) {
        return NO_PLACE;
    }
    u32 words[WORD_COUNT];
    std::memcpy(words, &time, sizeof(words));
    return value_for_weekday(table_owner(), words[0], words[1], words[2]);
}
GUEST_EXPORT(0x0058e348, scheduled_place_at);
GUEST_FUZZ(0x0058e348, 100, [](guest::Fuzz &f) {
    auto time = f.object<TimeStamp>();
    *time = *reference_time;
    time->add_days(s32(f.below(14)));
    f.arguments(time);
});

// The place of today (the game day the clock reports).
u32 scheduled_place_today() {
    TimeStamp day;
    day_start_by_clock_mode(day);
    return scheduled_place_at(day);
}
GUEST_EXPORT(0x0058e380, scheduled_place_today);
GUEST_FUZZ(0x0058e380, 100, [](guest::Fuzz &f) { f.arguments(); });

// Whether the place is today's and is open now.
bool is_todays_place_open(u32 place) {
    if (read_global_object_byte() == TIME_FROZEN) {
        return false;
    }
    return scheduled_place_today() == place && place_is_open(place);
}
GUEST_EXPORT(0x0058ec6c, is_todays_place_open);
GUEST_FUZZ(0x0058ec6c, 100, [](guest::Fuzz &f) { f.arguments(f.below(8)); });
