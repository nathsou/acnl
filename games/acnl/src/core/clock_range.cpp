// Time-of-day checks against the reference clock (a 12-byte value the game keeps at 0x00ad56b0).
#include "guest/guest.hpp"

namespace {

constexpr u32 HOUR_SHIFT = 8;

struct ReferenceClock {
    u8 unknown_00[7];
    s8 value_07;
    u8 hour_08;
    s8 minute_09;
};
GUEST_OFFSET(ReferenceClock, value_07, 7);
GUEST_OFFSET(ReferenceClock, hour_08, 8);
GUEST_OFFSET(ReferenceClock, minute_09, 9);
inline guest::global<ReferenceClock, 0x00ad56b0> reference_clock;

}  // namespace

// Stores the clock's byte 7 in the byte; whether that changed it.
bool update_byte_from_clock_7(s8 &byte) {
    s8 previous = byte;
    byte = reference_clock->value_07;
    return byte != previous;
}
GUEST_EXPORT(0x00589458, update_byte_from_clock_7);
GUEST_FUZZ(0x00589458, 100, [](guest::Fuzz &f) { f.arguments(f.allocate(4).cast<s8>()); });

// Stores the clock's byte 9 in the byte; whether that changed it.
bool update_byte_from_clock_9(s8 &byte) {
    s8 previous = byte;
    byte = reference_clock->minute_09;
    return byte != previous;
}
GUEST_EXPORT(0x005894fc, update_byte_from_clock_9);
GUEST_FUZZ(0x005894fc, 100, [](guest::Fuzz &f) { f.arguments(f.allocate(4).cast<s8>()); });

// Whether the clock's hour and minute (as one 16-bit value; the minute is sign-extended, as the game does) are in
// [start, end), where the range may wrap around midnight (end before start).
bool clock_in_range(u32 start_hour, u32 start_minute, u32 end_hour, u32 end_minute) {
    u32 start = u16(start_minute | start_hour << HOUR_SHIFT);
    u32 end = u16(end_minute | end_hour << HOUR_SHIFT);
    u32 now = u16(u32(s32(reference_clock->minute_09)) | u32(reference_clock->hour_08) << HOUR_SHIFT);
    if (end >= start) {
        return now >= start && now < end;
    }
    return now < end || now >= start;
}
GUEST_EXPORT(0x00589480, clock_in_range);
GUEST_FUZZ(0x00589480, 200, [](guest::Fuzz &f) {
    reference_clock->hour_08 = u8(f.below(24));
    reference_clock->minute_09 = s8(f.below(60));
    f.arguments(f.below(24), f.below(60), f.below(24), f.below(60));
});
