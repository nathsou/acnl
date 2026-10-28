#include "guest/guest.hpp"

namespace {

// Global object whose field at 0x234 points at a structure holding a table used by is_allowed_name.
struct NameContext {
    u8 unknown_0000[0x234];
    gptr<u8> table_owner;
};
GUEST_OFFSET(NameContext, table_owner, 0x234);
inline guest::global<gptr<NameContext>, 0x00aaef18> name_context_ptr;

inline constexpr guest::Function<0x00311a34, u32(gptr<void> a, gptr<void> b)> match_entry;
inline constexpr guest::Function<0x002fb378, u32()> get_reference_value;
inline constexpr guest::Function<0x00757620, u32(gptr<void> a, u32 b, s32 c)> compare_with_limit;

constexpr u32 TABLE_OFFSET = 0x55a6;
constexpr u32 ENTRY_BASE = 0x8ee;
constexpr u32 ENTRY_SIZE = 0xf2;
constexpr u32 ENTRY_COUNT = 16;
constexpr u32 NOT_FOUND = 4;
constexpr u32 BLOCK_OFFSETS[4] = {0, 0xa480, 0x14900, 0x1ed80};

}  // namespace

// True when the byte at offset 8 is below 0x21.
static bool byte_8_below_33(gptr<const u8> object) {
    return object[8] < 0x21;
}
GUEST_EXPORT(0x00309ef0, byte_8_below_33);

// Checks a value against the context's table, then against bounds around a reference value.
static bool passes_context_check(gptr<void> value) {
    gptr<NameContext> context = *name_context_ptr;
    if (!context->table_owner) {
        return false;
    }
    if (!match_entry(gptr<void>(context->table_owner.addr() + TABLE_OFFSET), value)) {
        return false;
    }
    u32 reference = get_reference_value();
    if (!compare_with_limit(value, reference, -15)) {
        return false;
    }
    return compare_with_limit(value, reference, 15) == 0;
}
GUEST_EXPORT(0x00309f04, passes_context_check);

// Finds the first of 16 consecutive entries (0xf2 bytes each) that match_entry accepts.
static gptr<void> find_matching_entry(gptr<void> base, gptr<void> key) {
    for (u32 i = 0; i < ENTRY_COUNT; i++) {
        gptr<void> entry = base + (ENTRY_BASE + i * ENTRY_SIZE);
        if (match_entry(entry, key)) {
            return entry;
        }
    }
    return nullptr;
}
GUEST_EXPORT(0x00309f85, find_matching_entry);

// Which of four blocks of a structure the pointer is the start of; 4 for null or none.
static u32 block_index_of(gptr<void> base, gptr<void> block) {
    if (!block) {
        return NOT_FOUND;
    }
    for (u32 i = 0; i < 4; i++) {
        if (base.addr() + BLOCK_OFFSETS[i] == block.addr()) {
            return i;
        }
    }
    return NOT_FOUND;
}
GUEST_EXPORT(0x00309fbc, block_index_of);

// Clears the byte at offset 0xe3 and returns the address of the field at 0xde.
static gptr<u8> clear_flag_and_get_field(gptr<u8> object) {
    object[0xe3] = 0;
    return object + 0xde;
}
GUEST_EXPORT(0x0030a014, clear_flag_and_get_field);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<void> some_string(guest::Fuzz &f) {
    gptr<void> s = f.allocate(64);
    f.bytes(s, 64);
    s.cast<u8>()[63] = 0;
    return s;
}

GUEST_FUZZ(0x00309ef0, 200, [](guest::Fuzz &f) {
    auto o = f.object<u8[16]>();
    (*o)[8] = f.pick<u32>({0, 0x20, 0x21, 0xff, f.number()});
    f.arguments(o);
});
GUEST_FUZZ(0x00309f04, 200, [](guest::Fuzz &f) { f.arguments(some_string(f)); });
GUEST_FUZZ(0x00309f85, 200, [](guest::Fuzz &f) {
    auto base = f.allocate(0x1800);
    f.bytes(base, 0x1800);
    f.arguments(base, some_string(f));
});
GUEST_FUZZ(0x00309fbc, 200, [](guest::Fuzz &f) {
    auto base = f.allocate(16);
    auto other = f.allocate(16);
    gptr<void> block = f.pick<gptr<void>>({gptr<void>(nullptr), base, other,
                                           gptr<void>(base.addr() + 0xa480), gptr<void>(base.addr() + 0x14900),
                                           gptr<void>(base.addr() + 0x1ed80)});
    f.arguments(base, block);
});
GUEST_FUZZ(0x0030a014, 200, [](guest::Fuzz &f) {
    auto o = f.allocate(0x100);
    f.bytes(o, 0x100);
    f.arguments(o);
});
