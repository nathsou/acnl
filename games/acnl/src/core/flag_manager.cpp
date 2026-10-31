#include "core/flag_manager.hpp"

namespace {

constexpr u32 WORD_BITS = 32;
constexpr u32 SHIFT_BYTE_MASK = 0xff;  // shifts by a register use only its low byte

// The ARM shifts by a register: amounts of 32 and more (of the low byte) give 0.
u32 shift_left(u32 value, u32 amount) {
    amount &= SHIFT_BYTE_MASK;
    return amount >= WORD_BITS ? 0 : value << amount;
}
u32 shift_right(u32 value, u32 amount) {
    amount &= SHIFT_BYTE_MASK;
    return amount >= WORD_BITS ? 0 : value >> amount;
}

}  // namespace

// value << amount for a 64-bit value in two registers, computed the way the game does (so that amounts of 64 and more
// give what its register shifts give).
u64 shift_left_64(u64 value, u32 amount) {
    u32 low = u32(value);
    u32 high = u32(value >> WORD_BITS);
    s32 beyond_word = s32(amount - WORD_BITS);
    if (beyond_word >= 0) {
        return u64(shift_left(low, u32(beyond_word))) << WORD_BITS;
    }
    u32 new_high = shift_left(high, amount) | shift_right(low, WORD_BITS - amount);
    return u64(new_high) << WORD_BITS | shift_left(low, amount);
}
GUEST_EXPORT(0x002faa30, shift_left_64);

// Requests the flag, unless it was withdrawn: then the withdrawal is undone.
void FlagManager::request(u32 index) {
    u64 mask = shift_left_64(1, index);
    if ((withdrawn & mask) != 0) {
        withdrawn &= ~mask;
        return;
    }
    requested |= mask;
}
GUEST_EXPORT(0x0058c514, FlagManager::request);

void FlagManager::release(u32 index) {
    requested &= ~shift_left_64(1, index);
}
GUEST_EXPORT(0x0058c5f0, FlagManager::release);
