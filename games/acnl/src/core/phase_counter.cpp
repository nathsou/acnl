// A counter that counts up to a limit and then starts a new phase.
#include "guest/guest.hpp"

struct PhaseCounter {
    static constexpr s32 NOT_COUNTING = -1;
    static constexpr s32 IDLE_LIMIT = 0xb;    // the limit while idle (meaning not known yet)
    static constexpr s32 RESTART_LIMIT = 3;   // the limit after a restart
    static constexpr u8 IDLE = 1;
    static constexpr u8 COUNTING = 0;

    s32 count;
    s32 limit;
    u8 state;  // IDLE or COUNTING

    void reset();
    void advance(bool running);
};
GUEST_OFFSET(PhaseCounter, limit, 4);
GUEST_OFFSET(PhaseCounter, state, 8);

// Back to idle.
void PhaseCounter::reset() {
    count = NOT_COUNTING;
    limit = IDLE_LIMIT;
    state = IDLE;
}
GUEST_EXPORT(0x006e5860, PhaseCounter::reset);

// When running, counts one more; at the limit it restarts counting with a new limit. When not running, goes idle.
void PhaseCounter::advance(bool running) {
    if (!running) {
        reset();
        return;
    }
    count = count + 1;
    if (limit > count) {
        return;
    }
    count = 0;
    limit = RESTART_LIMIT;
    state = COUNTING;
}
GUEST_EXPORT(0x006e581c, PhaseCounter::advance);

GUEST_FUZZ(0x006e5860, 100, [](guest::Fuzz &f) { f.arguments(f.object<PhaseCounter>()); });
GUEST_FUZZ(0x006e581c, 300, [](guest::Fuzz &f) {
    auto counter = f.object<PhaseCounter>();
    counter->count = f.pick<s32>({-1, 0, 1, 2, 10, 0xa, INT32_MAX, static_cast<s32>(f.number())});
    counter->limit = f.pick<s32>({0, 1, 3, 0xb, INT32_MAX, INT32_MIN, static_cast<s32>(f.number())});
    f.arguments(counter, f.below(2));
});
