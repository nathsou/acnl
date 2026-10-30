// Countdowns: a deadline on the game's clock that is pushed back in steps counted in frames, tagged with a kind from 1
// to 6.
#include "core/time_stamp.hpp"

namespace {

inline constexpr guest::Function<0x002fc900, u32()> mode_above_1;

constexpr u32 KIND_COUNT = 7;  // kinds 1 to 6; 0 means no countdown
// frames * RECIPROCAL >> RECIPROCAL_SHIFT is frames / 30, the game running at 30 frames per second
constexpr u32 FRAMES_RECIPROCAL = 0x8889;
constexpr u32 RECIPROCAL_SHIFT = 20;

}  // namespace

// What a countdown is asked to be: the kind, the step in frames and a flag that keeps the countdown from expiring.
struct CountdownRequest {
    u8 unknown_00[8];
    u8 kind;
    u8 unknown_09;
    u16 frames;
    s8 keep;
};
GUEST_OFFSET(CountdownRequest, kind, 8);
GUEST_OFFSET(CountdownRequest, frames, 0xa);
GUEST_OFFSET(CountdownRequest, keep, 0xc);

struct Countdown {
    s64 deadline;  // nanoseconds since the origin; 0 while there is none
    u8 kind;
    u8 unknown_09;
    u16 frames;
    s8 keep;

    void extend(u32 new_kind, u32 step_frames, s32 new_keep);
    void extend_from_request(gptr<CountdownRequest> request);
    void expire_if_due();
};
GUEST_OFFSET(Countdown, kind, 8);
GUEST_OFFSET(Countdown, frames, 0xa);
GUEST_OFFSET(Countdown, keep, 0xc);

namespace {

// The countdown's kind when it is not in a mode that ignores kinds.
u32 kind_in_effect(const Countdown &countdown) {
    return mode_above_1() != 0 ? 0 : countdown.kind;
}

}  // namespace

// Sets the kind (0, or 7 and above, clears the countdown) and the keep flag. A new kind clears the deadline; then the
// deadline moves back by `step_frames` / 30 seconds, counted from the old deadline or, when there is none, from now.
void Countdown::extend(u32 new_kind, u32 step_frames, s32 new_keep) {
    keep = s8(new_keep);
    if (new_kind == 0 || new_kind >= KIND_COUNT) {
        kind = 0;
        frames = 0;
        deadline = 0;
        return;
    }
    if (new_kind != kind_in_effect(*this)) {
        kind = u8(new_kind);
        deadline = 0;
    }
    frames = u16(step_frames);
    TimeStamp from = deadline == 0 ? *reference_time : TimeStamp::from_nanoseconds_since_origin(deadline);
    from.add_seconds(s32((step_frames * FRAMES_RECIPROCAL) >> RECIPROCAL_SHIFT));
    deadline = from.nanoseconds_since_origin();
}

void Countdown::extend_from_request(gptr<CountdownRequest> request) {
    u32 new_kind = mode_above_1() != 0 ? 0 : request->kind;
    u32 step_frames = request->frames;
    s32 new_keep = request->keep;
    extend(new_kind, step_frames, new_keep);
}

// Clears the countdown once its deadline has passed, unless it is flagged to be kept.
void Countdown::expire_if_due() {
    s64 now = reference_time->nanoseconds_since_origin();
    if (now >= deadline && kind != 0 && keep == 0) {
        kind = 0;
        deadline = 0;
    }
}

GUEST_EXPORT(0x0051ddb8, Countdown::extend);
GUEST_EXPORT(0x0051de84, Countdown::extend_from_request);
GUEST_EXPORT(0x0051df60, Countdown::expire_if_due);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

s64 some_deadline(guest::Fuzz &f) {
    s64 now = reference_time->nanoseconds_since_origin();
    constexpr u32 SPAN_SECONDS = 100'000;
    constexpr s64 NANOSECONDS_PER_SECOND = 1'000'000'000;
    switch (f.below(5)) {
    case 0:
        return 0;
    case 1:
        return now;
    case 2:
        return now - 1;
    case 3:
        return now + s64(f.below(SPAN_SECONDS)) * NANOSECONDS_PER_SECOND;
    default:
        return now - s64(f.below(SPAN_SECONDS)) * NANOSECONDS_PER_SECOND;
    }
}

gptr<Countdown> some_countdown(guest::Fuzz &f) {
    auto countdown = f.object<Countdown>();
    countdown->deadline = some_deadline(f);
    countdown->kind = u8(f.pick<u32>({0, 1, 2, 3, 4, 5, 6, 7, f.number()}));
    return countdown;
}

}  // namespace

GUEST_FUZZ(0x0051ddb8, 300, [](guest::Fuzz &f) {
    f.arguments(some_countdown(f), f.pick<u32>({0, 1, 2, 3, 4, 5, 6, 7, 8, f.number()}),
                f.pick<u32>({0, 1, 29, 30, 31, 90, 1000, f.number()}), f.pick<u32>({0, 1, 0xffffffff, f.number()}));
});
GUEST_FUZZ(0x0051de84, 300, [](guest::Fuzz &f) {
    auto request = f.object<CountdownRequest>();
    request->kind = u8(f.pick<u32>({0, 1, 2, 3, 4, 5, 6, 7, f.number()}));
    request->frames = u16(f.pick<u32>({0, 1, 29, 30, 31, 90, 1000, f.number()}));
    f.arguments(some_countdown(f), request);
});
GUEST_FUZZ(0x0051df60, 300, [](guest::Fuzz &f) {
    auto countdown = some_countdown(f);
    countdown->keep = s8(f.pick<u32>({0, 0, 1, f.number()}));
    f.arguments(countdown);
});
