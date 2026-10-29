#include "core/callback_table.hpp"

namespace {

bool is_null_callback(const guest::MemberFunctionPointer &callback) {
    return callback.function == 0 && (callback.adjust & 1) == 0;
}

// Key 1 of 0 is a wildcard on key 2 when both key 2 values are even.
bool entry_matches(const CallbackTableEntry &entry, u32 key1, u32 key2) {
    if (entry.key1 != key1) {
        return false;
    }
    if (key1 == 0 && ((entry.key2 | key2) & 1) == 0) {
        return true;
    }
    return entry.key2 == key2;
}

}  // namespace

void CallbackTable::dispatch(u32 wanted_key1, u32 wanted_key2) {
    u32 matched_key1 = 0;
    u32 matched_key2 = 0;
    guest::MemberFunctionPointer callback{0, 0};

    for (u32 i = 0; i < count; i++) {
        const CallbackTableEntry &entry = entries[i];
        if (!entry_matches(entry, wanted_key1, wanted_key2)) {
            continue;
        }
        if (!is_null_callback(entry.callback)) {
            callback = entry.callback;
        }
        matched_key1 = wanted_key1;
        matched_key2 = wanted_key2;
    }

    if (matched_key1 == 0 && (matched_key2 & 1) == 0) {
        return;
    }
    key1 = matched_key1;
    key2 = matched_key2;
    if (is_null_callback(callback)) {
        return;
    }
    busy = 1;
    guest::call_member<void>(callback, guest::addr_of(this));
    busy = 0;
}
GUEST_EXPORT(0x0081bc80, CallbackTable::dispatch);
GUEST_EXPORT(0x0081bd88, CallbackTable::dispatch);
GUEST_EXPORT(0x0081be90, CallbackTable::dispatch);
GUEST_EXPORT(0x0081bf98, CallbackTable::dispatch);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// Entries never carry callbacks, so the fuzzer cannot jump to garbage.
static void fuzz_dispatch(guest::Fuzz &f) {
    auto table = f.object<CallbackTable>();
    u32 count = f.below(7);
    auto entries = f.allocate(sizeof(CallbackTableEntry) * (count ? count : 1)).cast<CallbackTableEntry>();
    for (u32 i = 0; i < count; i++) {
        CallbackTableEntry &e = entries[i];
        e.unknown_00 = f.number();
        e.callback = guest::MemberFunctionPointer{0, 0};
        e.key1 = f.pick<u32>({0, 1, 2});
        e.key2 = f.pick<u32>({0, 1, 2, 3});
    }
    table->entries = entries;
    table->count = count;
    f.arguments(table, f.pick<u32>({0, 1, 2}), f.pick<u32>({0, 1, 2, 3}));
}

GUEST_FUZZ(0x0081bc80, 300, fuzz_dispatch);
GUEST_FUZZ(0x0081bd88, 300, fuzz_dispatch);
GUEST_FUZZ(0x0081be90, 300, fuzz_dispatch);
GUEST_FUZZ(0x0081bf98, 300, fuzz_dispatch);
