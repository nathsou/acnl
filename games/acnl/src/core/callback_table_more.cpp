#include "core/callback_table.hpp"

using guest::gptr;

namespace {

bool is_odd_nonzero(u32 key) {
    return (key & 1) != 0 && key != 0;
}

bool entry_matches(const CallbackTableEntry &entry, u32 key1, u32 key2) {
    if (entry.key1 != key1) {
        return false;
    }
    if (entry.key1 == 0 && ((entry.key2 | key2) & 1) == 0) {
        return true;
    }
    return entry.key2 == key2;
}

// Finds the last entry matching the keys, remembers the keys and calls its callback on the object adjusted by the
// entry's adjustment minus this_offset.
void dispatch(CallbackTable &self, u32 key1, u32 key2, u32 this_offset) {
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

void dispatch_offset_a4(CallbackTable &self, u32 key1, u32 key2) { dispatch(self, key1, key2, 0xa4); }
void dispatch_offset_14(CallbackTable &self, u32 key1, u32 key2) { dispatch(self, key1, key2, 0x14); }
void dispatch_offset_0_first(CallbackTable &self, u32 key1, u32 key2) { dispatch(self, key1, key2, 0); }
void dispatch_offset_0_second(CallbackTable &self, u32 key1, u32 key2) { dispatch(self, key1, key2, 0); }
void dispatch_offset_28(CallbackTable &self, u32 key1, u32 key2) { dispatch(self, key1, key2, 0x28); }

}  // namespace

GUEST_EXPORT(0x008165e4, dispatch_offset_a4);
GUEST_EXPORT(0x008166f0, dispatch_offset_14);
GUEST_EXPORT(0x008167fc, dispatch_offset_0_first);
GUEST_EXPORT(0x00816904, dispatch_offset_0_second);
GUEST_EXPORT(0x00816a0c, dispatch_offset_28);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

// Entries without callbacks (null function, even adjust), so fuzzing never calls into the game.
gptr<CallbackTable> some_table(guest::Fuzz &f) {
    auto table = f.object<CallbackTable>();
    u32 count = f.below(6);
    auto entries = f.allocate(count * sizeof(CallbackTableEntry) + 4).cast<CallbackTableEntry>();
    for (u32 i = 0; i < count; i++) {
        CallbackTableEntry &entry = entries[i];
        entry.unknown_00 = f.number();
        entry.callback.function = 0;
        entry.callback.adjust = s32(f.below(4)) * 2;
        entry.key1 = f.pick<u32>({0, 1, 2});
        entry.key2 = f.pick<u32>({0, 1, 2, 3});
    }
    table->entries = entries;
    table->count = count;
    return table;
}

void fuzz_dispatch(guest::Fuzz &f) {
    f.arguments(some_table(f), f.pick<u32>({0, 1, 2}), f.pick<u32>({0, 1, 2, 3}));
}

}  // namespace

GUEST_FUZZ(0x008165e4, 300, fuzz_dispatch);
GUEST_FUZZ(0x008166f0, 300, fuzz_dispatch);
GUEST_FUZZ(0x008167fc, 300, fuzz_dispatch);
GUEST_FUZZ(0x00816904, 300, fuzz_dispatch);
GUEST_FUZZ(0x00816a0c, 300, fuzz_dispatch);
