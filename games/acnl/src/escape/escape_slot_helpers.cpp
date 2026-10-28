// Small helpers of the escape minigame code: slot tables, a speed computation and lookups.
#include "guest/guest.hpp"

using guest::gptr;

// An entry that keeps a list of words (the owner's word is appended to it).
struct EscapeSlotEntry {
    u8 unknown_00[8];
    u32 words[4];  // the list; its capacity is not known
    u32 count;
};
GUEST_OFFSET(EscapeSlotEntry, words, 8);
GUEST_OFFSET(EscapeSlotEntry, count, 0x18);

// An object with a table of 32 entry slots.
struct EscapeSlotOwner {
    static constexpr u32 SLOT_COUNT = 32;

    u8 unknown_00[0x18];
    gptr<EscapeSlotEntry> slots[SLOT_COUNT];  // null: free
    u32 word_98;

    // Puts the entry in the first free slot (nothing happens when the table is full). When append_word is set,
    // the entry also records word_98 in its list.
    void add_entry(gptr<EscapeSlotEntry> entry, u32 append_word);
};
GUEST_OFFSET(EscapeSlotOwner, slots, 0x18);
GUEST_OFFSET(EscapeSlotOwner, word_98, 0x98);

void EscapeSlotOwner::add_entry(gptr<EscapeSlotEntry> entry, u32 append_word) {
    if (!entry) {
        return;
    }
    for (u32 i = 0; i < SLOT_COUNT; i++) {
        if (slots[i]) {
            continue;
        }
        slots[i] = entry;
        if (append_word != 0) {
            (&entry->words[0])[entry->count] = word_98;
            entry->count = entry->count + 1;
        }
        return;
    }
}
GUEST_EXPORT(0x402fc2e4, EscapeSlotOwner::add_entry);
GUEST_FUZZ(0x402fc2e4, 300, [](guest::Fuzz &f) {
    auto owner = f.object<EscapeSlotOwner>();
    u32 used = f.below(34);
    for (u32 i = 0; i < EscapeSlotOwner::SLOT_COUNT; i++) {
        owner->slots[i] = i < used ? gptr<EscapeSlotEntry>(0x1000 + i * 4) : gptr<EscapeSlotEntry>();
    }
    gptr<EscapeSlotEntry> entry;
    if (f.below(8) != 0) {
        entry = f.object<EscapeSlotEntry>();
        entry->count = f.below(4);
    }
    f.arguments(owner, entry, f.pick<u32>({0, 1, f.number()}));
});

// Per-index factors of the movement speed (12 floats).
inline guest::global<float[12], 0x403699a0> speed_factors;

// An object that moves from one point to another; the speed is the distance scaled by a factor.
struct EscapeMover {
    u8 unknown_00[0x38];
    float start[3];
    float end[3];
    u8 unknown_50[4];
    float speed;
    u8 unknown_58[0xc];
    u8 factor_index;  // into speed_factors
    u8 unknown_65[0x74 - 0x65];
    float divisor;

    void update_speed();
};
GUEST_OFFSET(EscapeMover, start, 0x38);
GUEST_OFFSET(EscapeMover, end, 0x44);
GUEST_OFFSET(EscapeMover, speed, 0x54);
GUEST_OFFSET(EscapeMover, factor_index, 0x64);
GUEST_OFFSET(EscapeMover, divisor, 0x74);

// speed = distance(start, end) * factor / divisor
void EscapeMover::update_speed() {
    float dx = end[0] - start[0];
    float dy = end[1] - start[1];
    float dz = end[2] - start[2];
    float squared = dx * dx;
    squared = squared + dy * dy;
    squared = squared + dz * dz;
    float distance = std::sqrt(squared);
    float scaled = distance * (*speed_factors.get())[factor_index];
    speed = scaled / divisor;
}
GUEST_EXPORT(0x402fc340, EscapeMover::update_speed);
GUEST_FUZZ(0x402fc340, 300, [](guest::Fuzz &f) {
    auto mover = f.object<EscapeMover>();
    for (u32 i = 0; i < 3; i++) {
        mover->start[i] = f.real();
        mover->end[i] = f.real();
    }
    mover->factor_index = f.below(12);
    mover->divisor = f.pick<float>({0.0f, 1.0f, -1.0f, f.real()});
    f.arguments(mover);
});

// A part of an object that is notified (through a still recompiled function) once a word is set.
struct EscapeNotifyPart {
    u8 unknown_00[8];
    u32 flag_08;
};
GUEST_OFFSET(EscapeNotifyPart, flag_08, 8);

struct EscapeNotifier {
    u8 unknown_000[0x14c];
    EscapeNotifyPart part;

    u32 forward_if_set();
};
GUEST_OFFSET(EscapeNotifier, part, 0x14c);

namespace {
inline constexpr guest::Function<0x40290e98, u32(gptr<EscapeNotifyPart> part)> notify_part;
}

// Calls the part's function when its flag is set; otherwise leaves r0 as it was (the object).
u32 EscapeNotifier::forward_if_set() {
    if (part.flag_08 == 0) {
        return guest::addr_of(this).addr();
    }
    return notify_part(guest::addr_of(part));
}
GUEST_EXPORT(0x402fc548, EscapeNotifier::forward_if_set);
// Only the path that calls nothing: the other one runs game code on the object.
GUEST_FUZZ(0x402fc548, 200, [](guest::Fuzz &f) {
    auto object = f.object<EscapeNotifier>();
    object->part.flag_08 = 0;
    f.arguments(object);
});

namespace {

// Keys of the resources an index selects.
inline guest::global<u32[31], 0x403b3810> resource_keys;

struct EscapeResourceDirectory {
    u8 unknown_00[0x28];
    u32 relative_offset;  // offset of the directory data from this field; 0: none
};
GUEST_OFFSET(EscapeResourceDirectory, relative_offset, 0x28);

struct EscapeResourceHolder {
    u8 unknown_00[0x12c];
    gptr<EscapeResourceDirectory> directory;
};
GUEST_OFFSET(EscapeResourceHolder, directory, 0x12c);

inline guest::global<gptr<EscapeResourceHolder>, 0x403b2004> resource_holder;

struct ResourceReference {
    u32 relative_offset;  // from this field; 0: none
};

// (the first argument is the address of a word holding the directory data)
inline constexpr guest::Function<0x40290cb8, u32(u32 key)> hash_key;
inline constexpr guest::Function<0x40290d50, gptr<ResourceReference>(gptr<u32> directory_slot, u32 key, u32 hash)>
    find_resource;

}  // namespace

// Looks up the resource with the key an index selects (indices of 31 and more use the first key). Returns the
// address its relative offset points to, or 0 when there is none.
u32 lookup_resource_by_index(gptr<void> self, u32 index) {
    (void)self;
    u32 key = index < 31 ? (*resource_keys.get())[index] : (*resource_keys.get())[0];

    EscapeResourceDirectory &directory = *(*resource_holder)->directory;
    u32 data = 0;
    if (directory.relative_offset != 0) {
        data = guest::addr_of(directory.relative_offset).addr() + directory.relative_offset;
    }
    guest::StackObject<u32> slot;
    *slot = data;
    if (data == 0 || key == 0) {
        return 0;
    }
    u32 hash = hash_key(key);
    gptr<ResourceReference> found = find_resource(slot.ptr(), key, hash);
    if (!found) {
        return 0;
    }
    if (found->relative_offset == 0) {
        return 0;
    }
    return guest::addr_of(found->relative_offset).addr() + found->relative_offset;
}
GUEST_EXPORT(0x402fc560, lookup_resource_by_index);
GUEST_FUZZ(0x402fc560, 100, [](guest::Fuzz &f) {
    f.arguments(f.object<u32>(), f.pick<u32>({0, 24, 25, 26, 27, 28, 30, 31, 100}));
});

namespace {
inline constexpr guest::Function<0x40290f18, float(float range)> random_up_to;
}

// A value between two bounds (given in either order): the lower one plus random_up_to(upper - lower).
float sample_between(float a, float b) {
    float low = a;
    float high = b;
    if (a > b) {
        low = b;
        high = a;
    }
    return random_up_to(high - low) + low;
}
GUEST_EXPORT(0x402fc584, sample_between);
GUEST_FUZZ(0x402fc584, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<float>({0.0f, 1.0f, f.real()}), f.pick<float>({0.0f, 10.0f, f.real()}));
});
