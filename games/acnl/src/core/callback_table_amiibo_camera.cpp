#include "core/callback_table.hpp"

// ModuleAmiiboCamera's copy of CallbackTable::dispatch.
GUEST_EXPORT(0x40009c84, CallbackTable::dispatch);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// Entries never have a callback to run, so only the matching and key bookkeeping are exercised.
GUEST_FUZZ(0x40009c84, 300, [](guest::Fuzz &f) {
    auto table = f.object<CallbackTable>();
    u32 count = f.below(6);
    auto entries = f.allocate(count * sizeof(CallbackTableEntry) + 4).cast<CallbackTableEntry>();
    for (u32 i = 0; i < count; i++) {
        CallbackTableEntry &entry = entries[i];
        entry.unknown_00 = f.number();
        entry.callback.function = 0;
        entry.callback.adjust = s32(f.number() & ~1u);
        entry.key1 = f.below(3);
        entry.key2 = f.pick<u32>({0, 1, 2, 3});
    }
    table->entries = entries;
    table->count = count;
    f.arguments(table, f.below(3), f.pick<u32>({0, 1, 2, 3}));
});
