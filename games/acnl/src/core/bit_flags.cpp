// Small sets of flags kept in a few bytes, and the flags of a few game objects.
#include "core/object_flags_171.hpp"
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x00584134, gptr<void>()> get_flag_manager;
inline constexpr guest::Function<0x0058c5f0, void(gptr<void> manager, u32 index)> release_flag;

}  // namespace

// A set of 11 flags in two bytes.
struct FlagSet11 {
    static constexpr u32 FLAG_COUNT = 11;

    u8 bytes[2];

    void assign(u32 index, bool value);
};

// Sets or clears the flag; an index past the last one changes nothing.
void FlagSet11::assign(u32 index, bool value) {
    if (index >= FLAG_COUNT) {
        return;
    }
    u8 mask = u8(1u << (index % 8));
    if (value) {
        bytes[index / 8] = bytes[index / 8] | mask;
    } else {
        bytes[index / 8] = bytes[index / 8] & ~mask;
    }
}
GUEST_EXPORT(0x00316f4c, FlagSet11::assign);

// A set of 8 flags in one byte.
struct FlagSet8 {
    static constexpr u32 FLAG_COUNT = 8;

    u8 bits;

    bool test(u32 index) const;
};

bool FlagSet8::test(u32 index) const {
    return index < FLAG_COUNT && (bits >> index & 1) != 0;
}
GUEST_EXPORT(0x0031756c, FlagSet8::test);

// An object with pending releases: a flag says they are on, and a set of 50 flags says which are.
struct PendingReleases : ObjectWithFlags171 {
    static constexpr u32 COUNT = 0x32;
    static constexpr u8 ENABLED_BIT = FLAG_BIT_5;  // in flags_171

    u8 unknown_172[0x17d - 0x172];
    u8 pending[(COUNT + 7) / 8];

    void release(u32 index);
};
GUEST_OFFSET(PendingReleases, pending, 0x17d);

// Hands the flag to the manager, then clears it, when releases are on and the flag is set.
void PendingReleases::release(u32 index) {
    if ((flags_171 & ENABLED_BIT) == 0 || index >= COUNT) {
        return;
    }
    u8 mask = u8(1u << (index % 8));
    if ((pending[index / 8] & mask) == 0) {
        return;
    }
    release_flag(get_flag_manager(), index);
    pending[index / 8] = pending[index / 8] & ~mask;
}
GUEST_EXPORT(0x00316f9c, PendingReleases::release);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00316f4c, 300, [](guest::Fuzz &f) {
    f.arguments(f.object<FlagSet11>(), f.pick<u32>({0, 1, 7, 8, 10, 11, 12, 0xffffffffu, f.below(16)}), f.below(2));
});
GUEST_FUZZ(0x0031756c, 300, [](guest::Fuzz &f) {
    f.arguments(f.object<FlagSet8>(), f.pick<u32>({0, 1, 7, 8, 9, 0xffffffffu, f.below(16)}));
});
GUEST_FUZZ(0x00316f9c, 200, [](guest::Fuzz &f) {
    auto object = f.object<PendingReleases>();
    object->flags_171 = f.pick<u8>({0, PendingReleases::ENABLED_BIT, 0xff});
    f.arguments(object, f.pick<u32>({0, 1, 0x31, 0x32, 0xffffffffu, f.below(0x40)}));
});
