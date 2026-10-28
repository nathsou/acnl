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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x402e8418, 200, [](guest::Fuzz &f) {
    u32 count = 1 + f.below(4);
    auto array = f.allocate(4 * 4).cast<guest::gptr<EscapeEntry>>();
    for (u32 i = 0; i < count; i++) {
        auto entry = f.object<EscapeEntry>();
        if (f.below(3) == 0) {
            entry->flag_1d = 0;
        }
        array[i] = entry;
    }
    auto list = f.object<EscapeEntryList>();
    list->count = count;
    list->entries = array;
    f.arguments(list, f.below(count));
});

GUEST_FUZZ(0x402e85c8, 200, [](guest::Fuzz &f) {
    auto target = f.object<EscapeTarget>();
    auto sub = f.object<EscapeSubObject>();
    sub->target = target;
    auto owner = f.object<EscapeOwner>();
    owner->sub = sub;
    f.arguments(owner);
});
