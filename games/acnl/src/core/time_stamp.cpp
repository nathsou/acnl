// A 12-byte point in time used by the calendar code, and the helpers around it: adding days, checking that a time
// falls in a range, and asking a table of handlers about each day of a range. The layout of the 12 bytes is not
// known yet. The game only converts it to a 64-bit count and back (the conversion helpers are still recompiled
// code). Adding days goes through nanoseconds divided by 1,000,000, so the count is probably in milliseconds.
#include <cstring>

#include "guest/guest.hpp"

namespace {

struct TimeStamp {
    u32 unknown_00;  // passed as a whole word to the day handlers
    s8 unknown_04;   // passed sign-extended to the day handlers
    s8 unknown_05;
    u8 unknown_06[6];

    static constexpr u64 NANOSECONDS_PER_DAY = 86'400'000'000'000ull;
    static constexpr u64 MILLION_RECIPROCAL = 0x431bde82d7b634dbull;  // x * this >> (64 + 18) == x / 1,000,000
    static constexpr u32 MILLION_SHIFT = 18;

    static TimeStamp from_words(u32 w0, u32 w1, u32 w2) {
        u32 words[3] = {w0, w1, w2};
        TimeStamp t;
        std::memcpy(&t, words, sizeof(t));
        return t;
    }

    void add_days(s32 days);
};
GUEST_OFFSET(TimeStamp, unknown_04, 4);
GUEST_OFFSET(TimeStamp, unknown_05, 5);
GUEST_SIZE(TimeStamp, 12);

// A handler of the table at 0x009524ec: asked through its second virtual function whether it accepts a day.
struct DayHandler {
    u32 vtable;
    u8 unknown_04[0x17];
    u8 kind;
};
GUEST_OFFSET(DayHandler, kind, 0x1b);

constexpr u32 DAY_HANDLER_COUNT = 56;
constexpr u32 ACCEPTS_DAY_VTABLE_SLOT = 1;
inline guest::global<guest::gptr<DayHandler>[DAY_HANDLER_COUNT], 0x009524ec> day_handlers;

// The global byte read by read_global_object_byte: 3 disables the day handlers (meaning not known yet).
constexpr u8 HANDLERS_DISABLED = 3;

inline guest::global<u8, 0x0095721c> mode_95721c;

// mode_95721c values and the index each maps to (meaning not known yet)
enum Mode95721c : u8 {
    MODE_0 = 0,
    MODE_1 = 1,
    MODE_2 = 2,
    MODE_5 = 5,
};

inline constexpr guest::Function<0x001240fc, void(gptr<s64> out, const TimeStamp &time)> time_stamp_to_count;
inline constexpr guest::Function<0x001264f0, void(gptr<TimeStamp> out, gptr<const s64> count)> count_to_time_stamp;
// value / divisor, with the divisor given as a reciprocal and a shift (the shift is passed twice)
inline constexpr guest::Function<0x0013305c, s64(gptr<const s64> value, u32 shift_r1, u64 reciprocal, u32 shift)>
    divide_by_reciprocal;
inline constexpr guest::Function<0x0056cb7c, void(TimeStamp &time)> time_stamp_after_change;
inline constexpr guest::Function<0x0056be20, s64(const TimeStamp &time)> words12_to_s64;
inline constexpr guest::Function<0x00308efc, void(TimeStamp &time)> adjust_time_stamp;
inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;

}  // namespace

// Maps the mode byte at 0x0095721c to a small index: 0, 1, 2 stay, 5 becomes 3, anything else 0.
u32 mode_95721c_index() {
    u8 mode = mode_95721c;
    switch (mode) {
    case MODE_0:
    case MODE_1:
    case MODE_2:
        return mode;
    case MODE_5:
        return 3;
    default:
        return 0;
    }
}
GUEST_EXPORT(0x00301484, mode_95721c_index);

// Moves the time by a number of days (any sign).
void TimeStamp::add_days(s32 days) {
    if (days == 0) {
        return;
    }
    guest::StackObject<s64> span;
    *span = s64(u64(s64(days)) * NANOSECONDS_PER_DAY);
    guest::StackObject<s64> count;
    time_stamp_to_count(count.ptr(), *this);
    s64 delta = divide_by_reciprocal(span.ptr(), MILLION_SHIFT, MILLION_RECIPROCAL, MILLION_SHIFT);
    guest::StackObject<s64> sum;
    *sum = s64(u64(*count) + u64(delta));
    guest::StackObject<TimeStamp> result;
    count_to_time_stamp(result.ptr(), sum.ptr());
    *this = *result;
    time_stamp_after_change(*this);
}
GUEST_EXPORT(0x003014b4, TimeStamp::add_days);

// Whether time is in [begin, end), where a range with begin >= end wraps around.
// The three times are passed by value (12 bytes each).
bool value12_in_range(u32 time0, u32 time1, u32 time2, u32 begin0, u32 begin1, u32 begin2, u32 end0, u32 end1,
                      u32 end2) {
    guest::StackObject<TimeStamp> time_copy, begin_copy, end_copy;
    *time_copy = TimeStamp::from_words(time0, time1, time2);
    *begin_copy = TimeStamp::from_words(begin0, begin1, begin2);
    *end_copy = TimeStamp::from_words(end0, end1, end2);
    s64 time = words12_to_s64(*time_copy);
    s64 begin = words12_to_s64(*begin_copy);
    s64 end = words12_to_s64(*end_copy);
    if (begin < end) {
        return time >= begin && time < end;
    }
    return time < end || time >= begin;
}
GUEST_EXPORT(0x00301564, value12_in_range);

// For each day from start + min(a, b) to start + max(a, b) days, asks every handler of the given kind whether it
// accepts that day; true as soon as one does. With `adjust` set each day goes through adjust_time_stamp first.
bool any_day_handler_accepts(u32 kind, u32 start0, u32 start1, u32 start2, s32 offset_a, s32 offset_b, u32 adjust) {
    if (read_global_object_byte() == HANDLERS_DISABLED) {
        return false;
    }
    s32 first = offset_a < offset_b ? offset_a : offset_b;
    s32 last = offset_a < offset_b ? offset_b : offset_a;

    guest::StackObject<TimeStamp> day;
    *day = TimeStamp::from_words(start0, start1, start2);
    day->add_days(first);
    guest::StackObject<TimeStamp> asked;
    for (s32 offset = first; offset <= last; offset++) {
        *asked = *day;
        if (read_global_object_byte() != HANDLERS_DISABLED) {
            if (adjust != 0) {
                adjust_time_stamp(*asked);
            }
            for (u32 i = 0; i < DAY_HANDLER_COUNT; i++) {
                gptr<DayHandler> handler = day_handlers[i];
                if (handler->kind != kind) {
                    continue;
                }
                u32 accepts = *gptr<u32>(handler->vtable + ACCEPTS_DAY_VTABLE_SLOT * 4);
                if (guest::call_address<u32>(accepts, handler, asked->unknown_00, s32(asked->unknown_04),
                                             s32(asked->unknown_05)) != 0) {
                    return true;
                }
            }
        }
        day->add_days(1);
    }
    return false;
}
GUEST_EXPORT(0x003015ec, any_day_handler_accepts);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// A plausible time: a year-like first half-word and small values in the other bytes
static TimeStamp some_time(guest::Fuzz &f) {
    u8 bytes[12];
    for (u8 &b : bytes) {
        b = u8(1 + f.below(12));
    }
    u16 year = u16(2000 + f.below(60));
    std::memcpy(bytes, &year, sizeof(year));
    TimeStamp t;
    std::memcpy(&t, bytes, sizeof(t));
    return t;
}

static void words_of(const TimeStamp &t, u32 (&w)[3]) { std::memcpy(w, &t, sizeof(t)); }

GUEST_FUZZ(0x00301484, 200, [](guest::Fuzz &f) { f.arguments(); });

GUEST_FUZZ(0x003014b4, 300, [](guest::Fuzz &f) {
    auto time = f.object<TimeStamp>();
    *time = some_time(f);
    f.arguments(time, f.pick<s32>({0, 1, -1, 7, -14, 3, s32(f.below(800)) - 400}));
});

GUEST_FUZZ(0x00301564, 300, [](guest::Fuzz &f) {
    TimeStamp t[3] = {some_time(f), some_time(f), some_time(f)};
    if (f.below(4) == 0) {
        t[f.below(3)] = t[f.below(3)];
    }
    u32 a[3], b[3], c[3];
    words_of(t[0], a);
    words_of(t[1], b);
    words_of(t[2], c);
    f.arguments(a[0], a[1], a[2], b[0], b[1], b[2], c[0], c[1], c[2]);
});

GUEST_FUZZ(0x003015ec, 200, [](guest::Fuzz &f) {
    u32 w[3];
    words_of(some_time(f), w);
    u32 kind = f.pick<u32>({5, 9, 0xb, 0xd, 0x23, 0x1000, f.below(0x40)});
    s32 a = s32(f.below(9)) - 2;
    s32 b = f.pick<s32>({-1, 0, 1, s32(f.below(9)) - 2});
    f.arguments(kind, w[0], w[1], w[2], a, b, f.below(2));
});
