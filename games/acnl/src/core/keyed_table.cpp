#include "core/keyed_table.hpp"

namespace {

gptr<KeyedEntry> table() {
    return gptr<KeyedEntry>(KeyedTable::ADDRESS);
}

// Given an index inside the run of entries of the key's page, scans to the run's start and then forward.
gptr<KeyedEntry> find_in_run(u32 key, u32 variant, s32 inside) {
    gptr<KeyedEntry> entries = table();
    u32 page = key & KeyedTable::PAGE_MASK;

    s32 first = inside;
    for (s32 i = inside; i > -1; i--) {
        if ((entries[i].key & KeyedTable::PAGE_MASK) != page) {
            break;
        }
        first = i;
    }

    s32 zero_variant = first;
    for (u32 i = u32(first); i < KeyedTable::COUNT; i++) {
        const KeyedEntry &entry = entries[i];
        if (entry.key == key) {
            if (entry.variant == 0) {
                zero_variant = s32(i);
            }
            if (entry.variant == variant) {
                return entries + s32(i);
            }
        } else if (entry.key > key) {
            break;
        }
    }

    const KeyedEntry &head = entries[first];
    if (head.key != 0 && head.key == key) {
        return entries + first;
    }
    if (head.key == page) {
        return entries + zero_variant;
    }
    return nullptr;
}

}  // namespace

gptr<KeyedEntry> find_keyed_entry(u32 key, u32, u32 variant) {
    if (key - KeyedTable::KEY_BASE >= KeyedTable::KEY_RANGE) {
        return nullptr;
    }
    gptr<KeyedEntry> entries = table();
    u32 page = key & KeyedTable::PAGE_MASK;

    s32 low = 0;
    s32 high = KeyedTable::COUNT - 1;
    for (;;) {
        s32 mid = (low + high) >> 1;
        u32 mid_key = entries[mid].key;
        if ((mid_key & KeyedTable::PAGE_MASK) == page) {
            return find_in_run(key, variant, mid);
        }
        if (mid_key < page) {
            low = mid + 1 < high ? mid + 1 : high;
        } else {
            high = mid - 1;
            if (low > high) {
                high = low;
            }
        }
        if (low == high) {
            break;
        }
    }
    if ((entries[low].key & KeyedTable::PAGE_MASK) != page) {
        return nullptr;
    }
    return find_in_run(key, variant, low);
}
GUEST_EXPORT(0x0051b110, find_keyed_entry);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static void keyed_lookup_inputs(guest::Fuzz &f) {
    gptr<KeyedEntry> entries(KeyedTable::ADDRESS);
    const KeyedEntry &entry = entries[f.below(KeyedTable::COUNT)];
    u32 key;
    switch (f.below(4)) {
    case 0: key = entry.key; break;
    case 1: key = entry.key + f.below(256); break;
    case 2: key = (entry.key & KeyedTable::PAGE_MASK) | f.below(256); break;
    default: key = KeyedTable::KEY_BASE + f.below(KeyedTable::KEY_RANGE + 0x100); break;
    }
    f.arguments(key, f.number(), f.pick<u32>({0, entry.variant, f.below(8), f.number()}));
}
GUEST_FUZZ(0x0051b110, 400, keyed_lookup_inputs);
