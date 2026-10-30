// Small questions about modes, kinds and angles in 0x005a0000-0x006f0000 whose users have not been named yet.
#include "core/fuzz_helpers.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 MODE_COUNT = 0xa5;           // the tables of modes have this many entries
constexpr u32 MODE_FLAG_2 = 2;
constexpr u32 ENTRY_COUNT_FC = 0xfc;
constexpr u32 ENTRY_COUNT_FF = 0xff;
constexpr u32 FALLBACK_ENTRY = 0x12;       // the entry past the end of table 0x0088b948
constexpr u32 SET_44B0_BIT_COUNT = 0x51;
constexpr u32 SET_44B0_WORD_BITS = 32;
constexpr u32 NIBBLE_SHIFT_16 = 12;
constexpr u32 NIBBLE_MASK = 0xf;
constexpr u32 NIBBLES_PER_DIRECTION = 4;   // 16 nibbles to a full turn: four per quarter
constexpr u32 DIRECTION_ROUNDING = 2;      // half a quarter
constexpr u32 DIRECTION_COUNT = 4;
constexpr u32 SMALL_SET_LAST = 3;
constexpr u32 BYTES_88D9DE_COUNT = 0x67;
constexpr u32 SEARCH_LIMIT_COUNT = 12;
constexpr u32 FUZZ_BOUND_PAD = 3;
constexpr u32 STATE_SLOT_KIND_F = 0xf;
constexpr u32 KIND_126 = 0x126;
constexpr u32 KIND_AE = 0xae;
constexpr u32 FIRST_OF_THREE = 0x1b;
constexpr u32 BLOCK_INDEX_LIMIT = 8;
constexpr u32 BLOCK_ROW_SIZE = 0x80;
constexpr u32 BLOCK_COLUMN_SIZE = 0x40;
constexpr u8 DEFAULT_BYTE_A5 = 0xa5;
constexpr u8 DEFAULT_BYTE_FC = 0xfc;

inline guest::global<u32[MODE_COUNT], 0x00889074> mode_flags;
inline guest::global<u32[ENTRY_COUNT_FC], 0x0088b948> entries_88b948;
inline guest::global<u8[ENTRY_COUNT_FC], 0x0088bd38> bytes_88bd38;
inline guest::global<u8[ENTRY_COUNT_FF], 0x0095d91e> bytes_95d91e;
inline guest::global<u32[MODE_COUNT], 0x00957344> values_957344;
inline guest::global<u8[ENTRY_COUNT_FC], 0x0088b84a> bytes_88b84a;
inline guest::global<s8[ENTRY_COUNT_FC], 0x0088d8e0> signed_bytes_88d8e0;
inline guest::global<s8[ENTRY_COUNT_FC], 0x0088c130> signed_bytes_88c130;
inline guest::global<u8[BYTES_88D9DE_COUNT], 0x0088d9de> bytes_88d9de;
inline guest::global<u32[ENTRY_COUNT_FF], 0x0095cf28> words_95cf28;
inline guest::global<u8[ENTRY_COUNT_FF], 0x0095db1c> bytes_95db1c;
inline guest::global<u8[ENTRY_COUNT_FF], 0x0095da1d> bytes_95da1d;
inline guest::global<u32[MODE_COUNT + 1], 0x009575d8> values_9575d8;
inline guest::global<s32[SEARCH_LIMIT_COUNT], 0x0088f364> limits_88f364;

// The object whose byte at 2 can stand in for the mode 0xa5.
struct ModeSubstitute {
    u8 unknown_00[2];
    u8 mode;
};
GUEST_OFFSET(ModeSubstitute, mode, 2);
inline guest::global<ModeSubstitute, 0x00957320> mode_substitute;

// An object with a pointer at 0x254 to something with flags at 0xb7.
struct FlaggedHolder {
    u8 unknown_000[0x254];
    gptr<u8> flagged;
};
GUEST_OFFSET(FlaggedHolder, flagged, 0x254);
constexpr u32 FLAGS_B7_OFFSET = 0xb7;
constexpr u32 FLAGGED_SIZE = 0x100;

// A bit set of 81 bits at 0x44b0.
struct BitSetOwner {
    u8 unknown_0000[0x44b0];
    u32 words[3];
};
GUEST_OFFSET(BitSetOwner, words, 0x44b0);

}  // namespace

// Whether the mode has flag 2 in the table of mode flags (modes from 0xa5 on have none).
bool mode_has_flag_2(u32 mode) {
    return mode < MODE_COUNT && (mode_flags[mode] & MODE_FLAG_2) == MODE_FLAG_2;
}
GUEST_EXPORT(0x005b4c94, mode_has_flag_2);
GUEST_FUZZ(0x005b4c94, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(MODE_COUNT + 2), 0xffffffffu})); });

// The value for the mode in the table at 0x00957344: the mode 0xa5 stands for the substitute mode; modes still past the table
// get the first value.
u32 mode_value_957344(u32 mode) {
    if (mode == MODE_COUNT) {
        mode = mode_substitute->mode;
    }
    return mode < MODE_COUNT ? values_957344[mode] : values_957344[0];
}
GUEST_EXPORT(0x005b4cc0, mode_value_957344);
GUEST_FUZZ(0x005b4cc0, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(MODE_COUNT + 2), 0xffffffffu})); });

// The address of the entry (a word) in the table at 0x0088b948; the entry 18 for indexes past the table.
gptr<u32> entry_address_88b948(u32 index) {
    return guest::addr_of(entries_88b948[index < ENTRY_COUNT_FC ? index : FALLBACK_ENTRY]);
}
GUEST_EXPORT(0x005ca234, entry_address_88b948);
GUEST_FUZZ(0x005ca234, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(ENTRY_COUNT_FC + 3), 0xffffffffu})); });

// The byte of the table at 0x0088bd38 (0 for indexes past it).
u32 byte_88bd38(u32 index) {
    return index < ENTRY_COUNT_FC ? bytes_88bd38[index] : 0;
}
GUEST_EXPORT(0x005ca27c, byte_88bd38);
GUEST_FUZZ(0x005ca27c, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(ENTRY_COUNT_FC + 3), 0xffffffffu})); });

// The byte of the table at 0x0095d91e (the first for indexes past it).
u32 byte_95d91e(u32 index) {
    return bytes_95d91e[index < ENTRY_COUNT_FF ? index : 0];
}
GUEST_EXPORT(0x005ce13c, byte_95d91e);
GUEST_FUZZ(0x005ce13c, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(ENTRY_COUNT_FF + 3), 0xffffffffu})); });

// Sets a bit (0-0x50) of the set at 0x44b0 of the object; other numbers do nothing.
void set_bit_44b0(BitSetOwner &owner, u32 bit) {
    if (bit < SET_44B0_BIT_COUNT) {
        owner.words[bit / SET_44B0_WORD_BITS] |= 1u << (bit % SET_44B0_WORD_BITS);
    }
}
GUEST_EXPORT(0x005cd9c4, set_bit_44b0);
GUEST_FUZZ(0x005cd9c4, 100, [](guest::Fuzz &f) {
    f.allocate(0x1000);  // (keeps the object clear of the stack the original works on)
    f.arguments(f.allocate(sizeof(BitSetOwner)).cast<BitSetOwner>(), f.pick<u32>({f.below(SET_44B0_BIT_COUNT + 3), 0xffffffffu}));
});

// The direction (0-3: the angle rounded to a quarter turn) of a 16-bit angle.
u32 direction_of_angle(const u16 &angle) {
    u32 nibble = (angle >> NIBBLE_SHIFT_16) & NIBBLE_MASK;
    return ((nibble + DIRECTION_ROUNDING) & NIBBLE_MASK) / NIBBLES_PER_DIRECTION;
}
GUEST_EXPORT(0x00691598, direction_of_angle);
GUEST_FUZZ(0x00691598, 200, [](guest::Fuzz &f) {
    auto angle = f.object<u16>();
    *angle = u16(f.number());
    f.arguments(angle);
});

// Whether the thing the object points to (at 0x254) has flag 0 of its byte 0xb7.
bool holder_flagged_has_flag_b7_bit_0(FlaggedHolder &holder) {
    return holder.flagged != nullptr && (holder.flagged[FLAGS_B7_OFFSET] & 1) != 0;
}
GUEST_EXPORT(0x006a923c, holder_flagged_has_flag_b7_bit_0);
GUEST_FUZZ(0x006a923c, 100, [](guest::Fuzz &f) {
    auto holder = f.object<FlaggedHolder>();
    holder->flagged = f.below(4) != 0 ? f.allocate(FLAGGED_SIZE).cast<u8>() : gptr<u8>(0u);
    f.arguments(holder);
});

// Kind sets (what the kinds are is not known yet).
bool value_is_0_to_3(s32 value) {
    return value >= 0 && u32(value) <= SMALL_SET_LAST;
}
GUEST_EXPORT(0x006cacdc, value_is_0_to_3);
GUEST_FUZZ(0x006cacdc, 100, [](guest::Fuzz &f) { f.arguments(f.pick<s32>({0, 1, 2, 3, 4, -1, s32(f.number())})); });

bool kind_is_50_to_53(u32 kind) {
    return kind >= 0x50 && kind <= 0x53;  // kinds 0x50-0x53 (what they are is not known yet)
}
GUEST_EXPORT(0x006cc958, kind_is_50_to_53);
GUEST_FUZZ(0x006cc958, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, f.number()})); });

bool kind_is_54_to_57(u32 kind) {
    return kind >= 0x54 && kind <= 0x57;  // kinds 0x54-0x57 (what they are is not known yet)
}
GUEST_EXPORT(0x006cc97c, kind_is_54_to_57);
GUEST_FUZZ(0x006cc97c, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0x53, 0x54, 0x55, 0x56, 0x57, 0x58, f.number()})); });

bool kind_is_6d_to_6f(u32 kind) {
    return kind >= 0x6d && kind <= 0x6f;  // kinds 0x6d-0x6f (what they are is not known yet)
}
GUEST_EXPORT(0x0065e098, kind_is_6d_to_6f);
GUEST_FUZZ(0x0065e098, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0x6c, 0x6d, 0x6e, 0x6f, 0x70, f.number()})); });

bool kind_is_c_or_6a(u32 kind) {
    return kind == 0xc || kind == 0x6a;  // kinds 0xc and 0x6a (what they are is not known yet)
}
GUEST_EXPORT(0x006e50dc, kind_is_c_or_6a);
GUEST_FUZZ(0x006e50dc, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0xb, 0xc, 0xd, 0x69, 0x6a, 0x6b, f.number()})); });

bool kind_is_d_to_10_or_12_or_6b(u32 kind) {
    return (kind >= 0xd && kind <= 0x10) || kind == 0x12 || kind == 0x6b;  // kinds 0xd-0x10, 0x12 and 0x6b (what they are is not known yet)
}
GUEST_EXPORT(0x006e50a8, kind_is_d_to_10_or_12_or_6b);
GUEST_FUZZ(0x006e50a8, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x6b, f.number()})); });

u32 byte_88bd38(u32 index);

// The byte of the table at 0x0088b84a (0xa5 for indexes past it).
u32 byte_88b84a(u32 index) {
    return index < ENTRY_COUNT_FC ? (*bytes_88b84a)[index] : DEFAULT_BYTE_A5;
}
GUEST_EXPORT(0x005ca398, byte_88b84a);
GUEST_FUZZ(0x005ca398, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(ENTRY_COUNT_FC + FUZZ_BOUND_PAD), 0xffffffffu})); });

// The signed byte of the table at 0x0088d8e0 (-1 for indexes past it).
s32 signed_byte_88d8e0(u32 index) {
    return index < ENTRY_COUNT_FC ? s32((*signed_bytes_88d8e0)[index]) : -1;
}
GUEST_EXPORT(0x005ca3b0, signed_byte_88d8e0);
GUEST_FUZZ(0x005ca3b0, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(ENTRY_COUNT_FC + FUZZ_BOUND_PAD), 0xffffffffu})); });

// The signed byte of the table at 0x0088c130 (0 for indexes past it).
s32 signed_byte_88c130(u32 index) {
    return index < ENTRY_COUNT_FC ? s32((*signed_bytes_88c130)[index]) : 0;
}
GUEST_EXPORT(0x005ca5c0, signed_byte_88c130);
GUEST_FUZZ(0x005ca5c0, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(ENTRY_COUNT_FC + FUZZ_BOUND_PAD), 0xffffffffu})); });

// The byte of the table at 0x0088d9de (0xfc for indexes past its 0x67 entries).
u32 byte_88d9de(u32 index) {
    return index < BYTES_88D9DE_COUNT ? (*bytes_88d9de)[index] : DEFAULT_BYTE_FC;
}
GUEST_EXPORT(0x005ca340, byte_88d9de);
GUEST_FUZZ(0x005ca340, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(BYTES_88D9DE_COUNT + FUZZ_BOUND_PAD), 0xffffffffu})); });

// The word of the table at 0x0095cf28 (the first for indexes past it).
u32 word_95cf28(u32 index) {
    return (*words_95cf28)[index < ENTRY_COUNT_FF ? index : 0];
}
GUEST_EXPORT(0x005ce2e8, word_95cf28);
GUEST_FUZZ(0x005ce2e8, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(ENTRY_COUNT_FF + FUZZ_BOUND_PAD), 0xffffffffu})); });

// The byte of the tables at 0x0095db1c and 0x0095da1d (the first for indexes past them).
u32 byte_95db1c(u32 index) {
    return (*bytes_95db1c)[index < ENTRY_COUNT_FF ? index : 0];
}
GUEST_EXPORT(0x005cdfb8, byte_95db1c);
GUEST_FUZZ(0x005cdfb8, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(ENTRY_COUNT_FF + FUZZ_BOUND_PAD), 0xffffffffu})); });

u32 byte_95da1d(u32 index) {
    return (*bytes_95da1d)[index < ENTRY_COUNT_FF ? index : 0];
}
GUEST_EXPORT(0x005ce154, byte_95da1d);
GUEST_FUZZ(0x005ce154, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(ENTRY_COUNT_FF + FUZZ_BOUND_PAD), 0xffffffffu})); });

// Whether the byte of the table at 0x0088bd38 for the index (below 0xfc) is 0xf.
bool byte_88bd38_is_f(u32 index) {
    return index < ENTRY_COUNT_FC && byte_88bd38(index) == STATE_SLOT_KIND_F;
}
GUEST_EXPORT(0x006cc934, byte_88bd38_is_f);
GUEST_FUZZ(0x006cc934, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(ENTRY_COUNT_FC + FUZZ_BOUND_PAD), 0xffffffffu})); });

bool value_is_ae_or_126(u32 value) {
    return value == KIND_AE || value == KIND_126;
}
GUEST_EXPORT(0x006e4dac, value_is_ae_or_126);
GUEST_FUZZ(0x006e4dac, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({KIND_AE, KIND_126, KIND_126 + 1, 0x26, f.number()})); });

// 1, 2 or 3 for the values 0x1b, 0x1c and 0x1d; 0 for all others.
u32 position_in_1b_to_1d(u32 value) {
    return value > FIRST_OF_THREE - 1 && value <= FIRST_OF_THREE + 2 ? value - (FIRST_OF_THREE - 1) : 0;
}
GUEST_EXPORT(0x006f9db4, position_in_1b_to_1d);
GUEST_FUZZ(0x006f9db4, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0x1a, 0x1b, 0x1c, 0x1d, 0x1e, f.number()})); });

// The value for the mode in the table at 0x009575d8: the mode 0xa5 stands for the substitute mode; modes past it get the first.
u32 mode_value_9575d8(u32 mode) {
    if (mode > MODE_COUNT) {
        mode = 0;
    } else if (mode == MODE_COUNT) {
        mode = mode_substitute->mode;
    }
    return (*values_9575d8)[mode];
}
GUEST_EXPORT(0x005b40fc, mode_value_9575d8);
GUEST_FUZZ(0x005b40fc, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(MODE_COUNT + FUZZ_BOUND_PAD), 0xffffffffu})); });

// The address of the block (two columns of 0x40 bytes, rows of 0x80) the index names; the base for indexes of 8 and more.
gptr<u8> block_address_of_index(gptr<u8> base, u32 index) {
    if (index >= BLOCK_INDEX_LIMIT) {
        return base;
    }
    return base + (index >> 1) * BLOCK_ROW_SIZE + (index & 1) * BLOCK_COLUMN_SIZE;
}
GUEST_EXPORT(0x005bb2a0, block_address_of_index);
GUEST_EXPORT(0x0031917c, block_address_of_index);
static void fuzz_block_address(guest::Fuzz &f) {
    f.arguments(f.allocate(8).cast<u8>(), f.pick<u32>({f.below(BLOCK_INDEX_LIMIT + FUZZ_BOUND_PAD), 0xffffffffu}));
}
GUEST_FUZZ(0x005bb2a0, 100, fuzz_block_address);
GUEST_FUZZ(0x0031917c, 100, fuzz_block_address);

// The first of the 12 limits (at 0x0088f364) the value is below; 12 when it is below none.
u32 limit_index_88f364(s32 value) {
    for (u32 index = 0; index < SEARCH_LIMIT_COUNT; index++) {
        if (value < (*limits_88f364)[index]) {
            return index;
        }
    }
    return SEARCH_LIMIT_COUNT;
}
GUEST_EXPORT(0x005bdb34, limit_index_88f364);
GUEST_FUZZ(0x005bdb34, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<s32>({0, 1, -1, 10, 100, 1000, (*limits_88f364)[f.below(SEARCH_LIMIT_COUNT)], s32(f.number())}));
});
