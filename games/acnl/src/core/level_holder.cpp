#include "core/level_holder.hpp"

namespace {
inline constexpr guest::Function<0x0030b250, u32(gptr<LevelHolder> self, u32 value_4e)> update_with_value_4e;
}  // namespace

// Adds a positive delta to the level (clamped), then runs the update. The update's result is returned; without
// the update r0 still holds this, which the function then returns.
u32 LevelHolder::add_to_level(s32 delta) {
    if (delta == 0) {
        if (unknown_4e < VALUE_4E_LIMIT && unknown_4f < VALUE_4F_LIMIT) {
            return update_with_value_4e(guest::addr_of(this), unknown_4e);
        }
        return guest::addr_of(this).addr();
    }
    if (delta > 0) {
        s32 value = s32(u32(delta) + u32(s32(level)));
        if (value < LEVEL_MIN) {
            value = LEVEL_MIN;
        } else if (value > LEVEL_MAX) {
            value = LEVEL_MAX;
        }
        level = s8(value);
    }
    if (unknown_4e < VALUE_4E_LIMIT) {
        return update_with_value_4e(guest::addr_of(this), unknown_4e);
    }
    return guest::addr_of(this).addr();
}
GUEST_EXPORT(0x00307104, LevelHolder::add_to_level);

// Only inputs that do not reach the (unknown) update are generated.
GUEST_FUZZ(0x00307104, 300, [](guest::Fuzz &f) {
    auto self = f.object<LevelHolder>();
    s32 delta;
    if (f.below(3) == 0) {
        delta = 0;
        if (f.below(2)) {
            self->unknown_4e = u8(LevelHolder::VALUE_4E_LIMIT + f.below(0x100 - LevelHolder::VALUE_4E_LIMIT));
        } else {
            self->unknown_4e = u8(f.below(LevelHolder::VALUE_4E_LIMIT));
            self->unknown_4f = u8(LevelHolder::VALUE_4F_LIMIT + f.below(0x100 - LevelHolder::VALUE_4F_LIMIT));
        }
    } else {
        delta = f.pick<s32>({1, 2, 5, 12, 0x7fffffff, 0x7ffffffe, -1, s32(0x80000000), s32(f.number()),
                             s32(f.below(20))});
        self->unknown_4e = u8(LevelHolder::VALUE_4E_LIMIT + f.below(0x100 - LevelHolder::VALUE_4E_LIMIT));
    }
    f.arguments(self, delta);
});
