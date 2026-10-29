// Lookups of the 0x00752370 area on objects whose type is not known yet.
#include "arm.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 FIRST_MAPPED_ID = 0xc;
constexpr u32 MAPPED_ID_COUNT = 4;
constexpr u32 ROW_MASK = 0xf;
constexpr u32 COLUMN_MASK = 0xf;
constexpr u32 SET_COUNT = 2;
constexpr u32 ROWS_PER_SET = 16;
constexpr u8 ACTIVE_STATE = 1;
constexpr u8 SKIPPED_STATE = 1;

struct BitMatrices {
    u16 rows[SET_COUNT][ROWS_PER_SET];
};
GUEST_SIZE(BitMatrices, 64);

struct StateObject {
    u8 unknown_00[0xa8];
    u8 state_a8;
};
GUEST_OFFSET(StateObject, state_a8, 0xa8);

struct MatchEntry {
    u8 unknown_00[4];
    u8 skip_flag;
    u8 unknown_05[3];
    u32 key;
    u8 value;
};
GUEST_OFFSET(MatchEntry, skip_flag, 4);
GUEST_OFFSET(MatchEntry, key, 8);
GUEST_OFFSET(MatchEntry, value, 0xc);

struct FlagWord64Object {
    u8 unknown_00[0x18];
    u64 flags;
};
GUEST_OFFSET(FlagWord64Object, flags, 0x18);

}  // namespace

// The table's value for an id between 0xc and 0xf; any other id comes back unchanged.
u32 mapped_id(gptr<u16> table, u32 id) {
    if (id >= FIRST_MAPPED_ID && id < FIRST_MAPPED_ID + MAPPED_ID_COUNT) {
        return table[id - FIRST_MAPPED_ID];
    }
    return id;
}
GUEST_EXPORT(0x00752370, mapped_id);
GUEST_FUZZ(0x00752370, 200, [](guest::Fuzz &f) {
    auto table = f.allocate(8).cast<u16>();
    f.bytes(table, 8);
    f.arguments(table, f.pick<u32>({0, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0xffffffffu, f.number()}));
});

// One bit of two sets of sixteen 16-bit rows: the set, the row and the column are cut to their low bits.
u32 matrix_bit(const BitMatrices &matrices, u32 column, u32 row, u32 set) {
    u16 bits = matrices.rows[set & (SET_COUNT - 1)][row & ROW_MASK];
    return (bits >> (column & COLUMN_MASK)) & 1;
}
GUEST_EXPORT(0x00752bd0, matrix_bit);
GUEST_FUZZ(0x00752bd0, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<BitMatrices>(), f.number(), f.number(), f.pick<u32>({0, 1, 2, 3, f.number()}));
});

// The object's address while its state is 1, else 0 (the compiler left the pointer in r0 as the "true" value).
u32 address_if_state_1(StateObject &object) {
    return object.state_a8 == ACTIVE_STATE ? guest::addr_of(object).addr() : 0;
}
GUEST_EXPORT(0x00752c68, address_if_state_1);
GUEST_FUZZ(0x00752c68, 100, [](guest::Fuzz &f) {
    auto object = f.object<StateObject>();
    object->state_a8 = f.pick<u8>({0, 1, 2});
    f.arguments(object);
});

// Whether the entry is not skipped, has the key and holds the value.
bool entry_matches(const MatchEntry &entry, u32 value, u32 key) {
    if (entry.skip_flag == SKIPPED_STATE) {
        return false;
    }
    if (entry.key != key) {
        return false;
    }
    return entry.value == value;
}
GUEST_EXPORT(0x00753058, entry_matches);
GUEST_FUZZ(0x00753058, 200, [](guest::Fuzz &f) {
    auto entry = f.object<MatchEntry>();
    entry->skip_flag = f.pick<u8>({0, 1, 2});
    entry->key = f.pick<u32>({0, 5, f.number()});
    entry->value = f.pick<u8>({0, 1, 7});
    f.arguments(entry, f.pick<u32>({0, 1, 7, 0x107}), f.pick<u32>({0, 5, entry->key}));
});

// Whether the 64-bit flags have the bit (the shift behaves as the compiler runtime's 64-bit left shift).
bool flag_bit_set(const FlagWord64Object &object, u32 bit) {
    return (object.flags & arm::llsl(1, bit)) != 0;
}
GUEST_EXPORT(0x00753088, flag_bit_set);
GUEST_FUZZ(0x00753088, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<FlagWord64Object>(), f.pick<u32>({0, 1, 31, 32, 33, 63, 64, 100, f.number()}));
});
