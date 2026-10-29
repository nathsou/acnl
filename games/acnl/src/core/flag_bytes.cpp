// The sets of flags the game keeps in bytes, by size.
#include "core/flag_bytes.hpp"


// Test functions, one per size (the game has a copy of the code for each).
static bool test_8(const FlagBytes<8> &flags, u32 index) { return flags.test(index); }
static bool test_29(const FlagBytes<29> &flags, u32 index) { return flags.test(index); }
static bool test_33(const FlagBytes<33> &flags, u32 index) { return flags.test(index); }
static void set_33(FlagBytes<33> &flags, u32 index) { flags.set(index); }
static void assign_11(FlagBytes<11> &flags, u32 index, bool value) { flags.assign(index, value); }
static u32 count_equal_33(const FlagBytes<33> &flags, u32 value) { return flags.count_equal_to(value); }

GUEST_EXPORT(0x0031756c, test_8);
GUEST_EXPORT(0x0030e5cc, test_29);
GUEST_EXPORT(0x0030ead0, test_33);
GUEST_EXPORT(0x0030ebc4, set_33);
GUEST_EXPORT(0x00316f4c, assign_11);
GUEST_EXPORT(0x0030fbd0, count_equal_33);

namespace {

u32 some_index(guest::Fuzz &f, u32 bits) {
    return f.pick<u32>({0, 1, 7, 8, bits - 1, bits, bits + 1, 0xffffffffu, f.below(bits + 8)});
}

template <u32 BITS>
gptr<FlagBytes<BITS>> some_flags(guest::Fuzz &f) {
    return f.object<FlagBytes<BITS>>();
}

}  // namespace

GUEST_FUZZ(0x0031756c, 300, [](guest::Fuzz &f) { f.arguments(some_flags<8>(f), some_index(f, 8)); });
GUEST_FUZZ(0x0030e5cc, 300, [](guest::Fuzz &f) { f.arguments(some_flags<29>(f), some_index(f, 29)); });
GUEST_FUZZ(0x0030ead0, 300, [](guest::Fuzz &f) { f.arguments(some_flags<33>(f), some_index(f, 33)); });
GUEST_FUZZ(0x0030ebc4, 300, [](guest::Fuzz &f) { f.arguments(some_flags<33>(f), some_index(f, 33)); });
GUEST_FUZZ(0x00316f4c, 300, [](guest::Fuzz &f) { f.arguments(some_flags<11>(f), some_index(f, 11), f.below(2)); });
GUEST_FUZZ(0x0030fbd0, 300, [](guest::Fuzz &f) {
    f.arguments(some_flags<33>(f), f.pick<u32>({0, 1, 2, f.number()}));
});
