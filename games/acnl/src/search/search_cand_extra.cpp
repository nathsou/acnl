#include "arm.hpp"
#include "search/search_cand_core.hpp"

namespace {

inline constexpr guest::Function<0x0013fac4, u32(gptr<u32> target, u32 size, u32 value)> update_field_13fac4;
// returns a random float in [0, 1) (the original passes the object in r0 and it is kept that way)
inline constexpr guest::Function<0x00565c00, float(gptr<void> object)> random_float_565c00;

constexpr u32 FILL_VALUE = 0xff;
constexpr u32 BITS_PER_WORD = 32;
constexpr u32 BIT_INDEX_MASK = BITS_PER_WORD - 1;
constexpr u32 WORD_SHIFT = 5;

}  // namespace

void SearchCandCore::mark_all() {
    update_field_13fac4(bits, u32(word_count) << 2, FILL_VALUE);
    marked_count = count;
}
GUEST_EXPORT(0x00306e7c, SearchCandCore::mark_all);

void SearchCandGrid::unmark_border() {
    for (s32 x = 0; x < width_14; x++) {
        for (s32 y = 0; y < height_18; y++) {
            bool on_border = x == 0 || y == 0 || x == width_14 - 1 || y == height_18 - 1;
            if (!on_border) {
                continue;
            }
            s32 index = s32(u32(y) * u32(width_14) + u32(x));
            u32 &word = core.bits[index >> WORD_SHIFT];
            u32 mask = 1u << (u32(index) & BIT_INDEX_MASK);
            if (word & mask) {
                word &= ~mask;
                core.marked_count = core.marked_count - 1;
            }
        }
    }
}
GUEST_EXPORT(0x00306ea4, SearchCandGrid::unmark_border);

s32 SearchCandCore::pick_random_marked() {
    float random = random_float_565c00(guest::addr_of(this));
    u32 skip = u32(arm::to_s32(random * float(marked_count)));
    for (s32 i = 0; i < count; i++) {
        u32 word = bits[i >> WORD_SHIFT];
        if (!(word & (1u << (u32(i) & BIT_INDEX_MASK)))) {
            continue;
        }
        if (skip == 0) {
            return i;
        }
        skip--;
    }
    return -1;
}
GUEST_EXPORT(0x00306f60, SearchCandCore::pick_random_marked);

// ---- a world position from block and cell coordinates

namespace {

// where a position's coordinates come from: two base values in the game's data
inline guest::global<s32, 0x0085f2e8> base_x;
inline guest::global<s32, 0x0085f2ec> base_z;
// the literal the code keeps right after the function (the middle coordinate)
constexpr u32 MIDDLE_LITERAL_ADDRESS = 0x00307150;

constexpr u32 CELLS_PER_BLOCK = 16;
constexpr u32 UNITS_PER_CELL = 32;

struct WorldPosition {
    float x;
    float y;
    float z;
};
GUEST_SIZE(WorldPosition, 12);

// Writes the position (in world units) of a cell inside a block; y is a constant of the code.
void make_world_position(WorldPosition &out, u32 block_x, u32 block_z, u32 cell_x, u32 cell_z) {
    u32 cells_x = cell_x + block_x * CELLS_PER_BLOCK;
    u32 cells_z = cell_z + block_z * CELLS_PER_BLOCK;
    s32 world_x = s32(u32(*base_x) + cells_x * UNITS_PER_CELL);
    s32 world_z = s32(u32(*base_z) + cells_z * UNITS_PER_CELL);
    u32 middle_bits = *gptr<u32>(MIDDLE_LITERAL_ADDRESS);
    out.x = float(world_x);
    memcpy(&out.y, &middle_bits, 4);
    out.z = float(world_z);
}

}  // namespace
GUEST_EXPORT(0x0030710c, make_world_position);

// ---- a timed record that is reset when stale

namespace {

struct Words12 {
    u32 word[3];
};
GUEST_SIZE(Words12, 12);

inline constexpr guest::Function<0x0056cf34, u32(gptr<void> record)> record_is_active;
inline constexpr guest::Function<0x002fb430, void(gptr<Words12> out, gptr<const u8> value)> make_adjusted_words;
inline constexpr guest::Function<0x002fb378, gptr<Words12>()> get_reference_value;
inline constexpr guest::Function<0x002fb4a0, bool(u32 a0, u32 a1, u32 a2, u32 b0, u32 b1, u32 b2)> words_not_less;

}  // namespace

struct TimedRecord {
    static constexpr u8 BYTE_8_LIMIT = 0x21;  // also the value a reset writes
    static constexpr u8 RESET_BYTE_9 = 0xff;
    static constexpr u8 RESET_BYTE_A = 9;
    static constexpr u8 RESET_BYTE_E = 6;
    static constexpr u8 RESET_BYTE_F = 0xff;

    u8 time[8];  // an 8-byte time value
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_0b;
    u16 halfword_c;
    u8 byte_e;
    u8 byte_f;

    void reset_if_stale(u32 force);
};
GUEST_OFFSET(TimedRecord, byte_8, 8);
GUEST_OFFSET(TimedRecord, halfword_c, 0xc);
GUEST_OFFSET(TimedRecord, byte_f, 0xf);
GUEST_SIZE(TimedRecord, 0x10);

namespace {
inline constexpr guest::Function<0x00303cdc, void(gptr<TimedRecord> record)> clear_inner;
}

// Resets the record when forced, or when it is active, in its first states, unused and not past the reference.
void TimedRecord::reset_if_stale(u32 force) {
    gptr<TimedRecord> self = guest::addr_of(this);
    if (force == 0) {
        if (record_is_active(self) == 0) {
            return;
        }
        if (byte_8 >= BYTE_8_LIMIT || byte_9 != 0) {
            return;
        }
        guest::StackObject<Words12> adjusted;
        make_adjusted_words(adjusted.ptr(), self.cast<const u8>());
        Words12 reference = *get_reference_value();
        if (words_not_less(reference.word[0], reference.word[1], reference.word[2], adjusted->word[0],
                           adjusted->word[1], adjusted->word[2])) {
            return;
        }
    }
    byte_8 = BYTE_8_LIMIT;
    clear_inner(self);
    byte_9 = RESET_BYTE_9;
    byte_a = RESET_BYTE_A;
    halfword_c = 0;
    byte_e = RESET_BYTE_E;
    byte_f = RESET_BYTE_F;
}
GUEST_EXPORT(0x0030715c, TimedRecord::reset_if_stale);
