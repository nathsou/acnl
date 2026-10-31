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
