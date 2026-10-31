// Questions about stored game times (a GameTime is nanoseconds since the origin time; 0 and "none" mean not set).
#include <cstring>

#include "core/time_stamp.hpp"
#include "guest/guest.hpp"

using guest::gptr;

s64 seconds_between(const TimeStamp &later, const TimeStamp &earlier, bool adjust);

namespace {

inline constexpr guest::Function<0x0056b528, s64()> current_time;

// An 8-byte time value at any alignment.
s64 read_nanoseconds(gptr<const u8> value) {
    s64 nanoseconds;
    std::memcpy(&nanoseconds, value.get(), sizeof(nanoseconds));
    return nanoseconds;
}

s32 sign_of_difference(s64 time, s64 stored) {
    if (time < stored) {
        return -1;
    }
    return time != stored ? 1 : 0;
}

}  // namespace

// The weekday of the game time (0 is Sunday; the earliest time's when it is not set).
u32 weekday_of_game_time(const GameTime &time) {
    return time.to_time_stamp().weekday;
}
GUEST_EXPORT(0x007592f4, weekday_of_game_time);

// The whole seconds from the game time to the current time (with `adjust`, as seconds_between does).
s64 seconds_since_game_time(const GameTime &time, bool adjust) {
    return seconds_between(TimeStamp::from_nanoseconds_since_origin(current_time()), time.to_time_stamp(), adjust);
}
GUEST_EXPORT(0x00759564, seconds_since_game_time);

// -1 when the time stamp is before the stored time, 1 when it is after, 0 when they are the same moment.
s32 compare_time_stamp_to_stored(gptr<const u8> stored, const TimeStamp &time) {
    return sign_of_difference(time.nanoseconds_since_origin(), read_nanoseconds(stored));
}
GUEST_EXPORT(0x007595bc, compare_time_stamp_to_stored);

// The same for a game time (the earliest time's value when it is not set).
s32 compare_game_time_to_stored(gptr<const u8> stored, const GameTime &time) {
    return sign_of_difference(time.nanoseconds_or_earliest(), read_nanoseconds(stored));
}
GUEST_EXPORT(0x00759610, compare_game_time_to_stored);
