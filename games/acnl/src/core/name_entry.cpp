#include "guest/guest.hpp"

namespace {

// An entry of the tables match_entry compares: an id, a string and a flag byte (rest not known yet).
struct NameEntry {
    u16 id;
    u8 string[0x12];  // compared by the call at 0x00712c88
    u8 flags;         // bit 0 is compared
    u8 unknown_15[3];
};
GUEST_OFFSET(NameEntry, string, 0x02);
GUEST_OFFSET(NameEntry, flags, 0x14);
GUEST_SIZE(NameEntry, 0x18);

inline constexpr guest::Function<0x00712c88, u32(gptr<const u8> a, gptr<const u8> b)> compare_strings;

}  // namespace

// Whether two entries have the same id, the same bit 0 of the flags and strings the comparison accepts.
bool match_entry(const NameEntry &a, const NameEntry &b) {
    if (a.id != b.id) {
        return false;
    }
    if ((a.flags & 1) != (b.flags & 1)) {
        return false;
    }
    return compare_strings(guest::addr_of(&a.string[0]), guest::addr_of(&b.string[0])) != 0;
}
GUEST_EXPORT(0x00311a34, match_entry);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<NameEntry> some_entry(guest::Fuzz &f) {
    auto entry = f.object<NameEntry>();
    for (u32 i = 0; i < sizeof(entry->string); i++) {
        entry->string[i] = 0;
    }
    u32 length = f.below(6);
    for (u32 i = 0; i < length; i++) {
        entry->string[i] = u8('a' + f.below(3));
    }
    entry->id = u16(f.below(3));
    entry->flags = u8(f.below(4));
    return entry;
}

GUEST_FUZZ(0x00311a34, 300, [](guest::Fuzz &f) {
    auto a = some_entry(f);
    auto b = some_entry(f);
    switch (f.below(3)) {
    case 0:
        *b = *a;
        break;
    case 1:
        b->id = a->id;
        b->flags = a->flags;
        break;
    default:
        break;
    }
    f.arguments(a, b);
});
