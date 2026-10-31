#include "escape/escape_objects.hpp"

// Whether the entry at `index` has its flag byte set (a missing entry reads memory at address 0, like the game).
bool EscapeEntryList::entry_has_flag(u32 index) const {
    guest::gptr<EscapeEntry> entry = index < count ? entries[index] : guest::gptr<EscapeEntry>(nullptr);
    return entry->flag_1d != 0;
}
GUEST_EXPORT(0x402e8418, EscapeEntryList::entry_has_flag);

// Sets the flag at +0x34 of the owner's sub-object's target.
void EscapeOwner::set_target_flag() {
    sub->target->flag_34 = 1;
}
GUEST_EXPORT(0x402e85c8, EscapeOwner::set_target_flag);
