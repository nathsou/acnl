// A counter that steps up to a limit and then falls back to a reset value, counting the wraps.
#include "guest/guest.hpp"

using guest::gptr;

struct WrappingCursor {
    gptr<s32> reset_value;  // what current becomes when the limit is reached (null: the cursor is inactive)
    gptr<s32> limit;        // null: the cursor is inactive
    s32 current;
    u32 wrap_count;

    // Steps to current + 1 while the limit is above current; otherwise wraps to the reset value.
    void advance();
};
GUEST_SIZE(WrappingCursor, 16);

void WrappingCursor::advance() {
    if (!reset_value || !limit) {
        return;
    }
    if (*limit > current) {
        current = current + 1;
        return;
    }
    current = *reset_value;
    wrap_count = wrap_count + 1;
}
GUEST_EXPORT(0x0052f144, WrappingCursor::advance);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x0052f144, 300, [](guest::Fuzz &f) {
    auto cursor = f.object<WrappingCursor>();
    auto reset = f.object<s32>();
    auto limit = f.object<s32>();
    cursor->reset_value = f.below(5) == 0 ? gptr<s32>() : reset;
    cursor->limit = f.below(5) == 0 ? gptr<s32>() : limit;
    switch (f.below(3)) {
    case 0: cursor->current = *limit; break;
    case 1: cursor->current = *limit - 1; break;
    default: break;
    }
    f.arguments(cursor);
});
