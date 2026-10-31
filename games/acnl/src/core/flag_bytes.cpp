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
