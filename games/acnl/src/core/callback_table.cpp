#include "core/callback_table.hpp"

using guest::gptr;

static bool is_odd_nonzero(u32 key) {
    return (key & 1) != 0 && key != 0;
}

static bool entry_matches(const CallbackTableEntry &entry, u32 key1, u32 key2) {
    if (entry.key1 != key1) {
        return false;
    }
    if (entry.key1 == 0 && ((entry.key2 | key2) & 1) == 0) {
        return true;
    }
    return entry.key2 == key2;
}

// Finds the last entry matching the keys, stores the keys and calls its callback on the object adjusted by the
// entry's adjustment minus this_offset (the base-class offset of the caller's view).
static void dispatch(CallbackTable &self, u32 key1, u32 key2, u32 this_offset) {
    u32 chosen_key1 = 0;
    u32 chosen_key2 = 0;
    u32 function = 0;
    u32 adjust = 0;
    for (u32 i = 0; i < self.count; i++) {
        const CallbackTableEntry &entry = self.entries[i];
        if (!entry_matches(entry, key1, key2)) {
            continue;
        }
        if (entry.callback.function != 0 || is_odd_nonzero(u32(entry.callback.adjust))) {
            function = entry.callback.function;
            adjust = u32(entry.callback.adjust);
        }
        chosen_key1 = key1;
        chosen_key2 = key2;
    }
    if (chosen_key1 == 0 && !is_odd_nonzero(chosen_key2)) {
        return;
    }
    self.key2 = chosen_key2;
    self.key1 = chosen_key1;
    if (function == 0 && !is_odd_nonzero(adjust)) {
        return;
    }
    self.busy = 1;
    gptr<void> object(guest::addr_of(self).addr() + u32(s32(adjust) >> 1) - this_offset);
    u32 target = function;
    if (adjust & 1) {
        target = *gptr<u32>(*object.cast<u32>() + function);  // through the vtable
    }
    guest::call_address<void>(target, object);
    self.busy = 0;
}

static void dispatch_offset_a4(CallbackTable &self, u32 key1, u32 key2) { dispatch(self, key1, key2, 0xa4); }
static void dispatch_offset_28_first(CallbackTable &self, u32 key1, u32 key2) { dispatch(self, key1, key2, 0x28); }
static void dispatch_offset_28_second(CallbackTable &self, u32 key1, u32 key2) { dispatch(self, key1, key2, 0x28); }
static void dispatch_offset_a40(CallbackTable &self, u32 key1, u32 key2) { dispatch(self, key1, key2, 0xa40); }
static void dispatch_offset_0(CallbackTable &self, u32 key1, u32 key2) { dispatch(self, key1, key2, 0); }

GUEST_EXPORT(0x008177a0, dispatch_offset_a4);
GUEST_EXPORT(0x008178ac, dispatch_offset_28_first);
GUEST_EXPORT(0x008179b8, dispatch_offset_28_second);
GUEST_EXPORT(0x00817ac4, dispatch_offset_a40);
GUEST_EXPORT(0x00817bd0, dispatch_offset_0);
