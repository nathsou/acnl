// Small accessors in 0x005a0000-0x006f0000: tables, little records and a few bytes of objects whose types are not known yet.
#include "core/fuzz_helpers.hpp"
#include "guest/guest.hpp"
#include "save/player.hpp"

using guest::gptr;

gptr<SavePlayer> player_of_slot_index(u32 index);

namespace {

constexpr u32 SEARCH_TABLE_SIZE = 0x67;
constexpr u32 SEARCH_VALUE_LIMIT = 0x51;
constexpr u32 LIST_VALUE_COUNT = 4;
constexpr u32 FLAGS_B7_KEPT_MASK = 0xfe;
constexpr float QUARTER_UNIT = 0.00625f;  // 1/160
constexpr u32 ANGLE_BITS_MASK = 0x3ffff;
constexpr u32 ANGLE_HALF_SHIFT = 18;
constexpr u32 SMALL_SET_BITS = 5;
constexpr u32 TABLE_A14380_ROW_SIZE = 96;
constexpr u32 TABLE_A14380_ENTRY_SIZE = 8;
constexpr u32 SELECT_VALUE_1 = 1;
constexpr u32 FUZZ_PAD = 0x1000;
constexpr u32 RESET_VALUE_A = 4, RESET_VALUE_B = 3;
constexpr u32 FOUR_WORD_LAST = 0x800000;

inline guest::global<u8[SEARCH_TABLE_SIZE + 1], 0x0088da45> search_table;
inline guest::global<u8[0x6000], 0x00a14380> table_a14380;

struct ListOwner {
    u8 unknown_00[4];
    gptr<u8> values;
};
GUEST_OFFSET(ListOwner, values, 4);

struct ResetRecord {
    u8 unknown_00[4];
    u32 word_04;
    u8 byte_08;
    u8 byte_09;
    u8 byte_0a;
};
GUEST_OFFSET(ResetRecord, word_04, 4);

struct FlaggedObject {
    u8 unknown_000[0x254];
    gptr<u8> flagged;
};
GUEST_OFFSET(FlaggedObject, flagged, 0x254);
constexpr u32 FLAGS_B7_OFFSET = 0xb7;

struct ScaledObject {
    u8 unknown_00[0x8c];
    float value_8c;
};
GUEST_OFFSET(ScaledObject, value_8c, 0x8c);

struct PackedAngle {
    u8 unknown_00[0xc];
    u16 half_0c;
    u8 unknown_0e[0x54 - 0xe];
    u32 packed_54;
};
GUEST_OFFSET(PackedAngle, half_0c, 0xc);
GUEST_OFFSET(PackedAngle, packed_54, 0x54);

struct TableRowOwner {
    u8 unknown_00[0x6c];
    u32 row;
};
GUEST_OFFSET(TableRowOwner, row, 0x6c);

struct FourWords {
    u32 words[4];
};

struct SmallSetOwner {
    u8 unknown_00[0x74];
    u8 bits;
};
GUEST_OFFSET(SmallSetOwner, bits, 0x74);

struct ValueSource {
    u32 state;
    u8 unknown_04[4];
    gptr<u32> pointer;
};
struct ValueSourceOwner {
    u8 unknown_0000[0x68a0];
    ValueSource source;
};
GUEST_OFFSET(ValueSourceOwner, source, 0x68a0);

}  // namespace

// The index of the value in the table of 0x67 bytes at 0x0088da45 (0x67 when it is not there or the value is 0x51 or more).
u32 index_in_search_table(u32 value) {
    if (value >= SEARCH_VALUE_LIMIT) {
        return SEARCH_TABLE_SIZE;
    }
    for (u32 index = 0; index < SEARCH_TABLE_SIZE; index++) {
        if ((*search_table)[index] == value) {
            return index;
        }
    }
    return SEARCH_TABLE_SIZE;
}
GUEST_EXPORT(0x005ca410, index_in_search_table);
GUEST_FUZZ(0x005ca410, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({f.below(SEARCH_VALUE_LIMIT + 3), (*search_table)[f.below(SEARCH_TABLE_SIZE)], f.number()}));
});

// The address of the value (1-3) in the owner's list; null for other numbers.
gptr<u8> list_value_address(ListOwner &owner, u32 number) {
    if (number >= LIST_VALUE_COUNT || number == 0) {
        return nullptr;
    }
    return owner.values + (number - 1);
}
GUEST_EXPORT(0x006253c4, list_value_address);
GUEST_FUZZ(0x006253c4, 100, [](guest::Fuzz &f) {
    auto owner = f.object<ListOwner>();
    owner->values = f.allocate(FUZZ_PAD).cast<u8>();
    f.arguments(owner, f.pick<u32>({0, 1, 2, 3, 4, f.number()}));
});

// Puts a record in its starting state.
void reset_record(ResetRecord &record) {
    record.word_04 = 0;
    record.byte_08 = RESET_VALUE_A;
    record.byte_09 = RESET_VALUE_A;
    record.byte_0a = RESET_VALUE_B;
}
GUEST_EXPORT(0x00629808, reset_record);
GUEST_FUZZ(0x00629808, 100, [](guest::Fuzz &f) { f.arguments(f.object<ResetRecord>()); });

// Sets the bits (all but bit 0 are replaced) of the byte at 0xb7 of what the holder points to.
void set_flagged_bits_b7(FlaggedObject &holder, u32 bits) {
    if (holder.flagged != nullptr) {
        gptr<u8> byte = holder.flagged + FLAGS_B7_OFFSET;
        *byte = u8(bits | (*byte & FLAGS_B7_KEPT_MASK));
    }
}
GUEST_EXPORT(0x006a8c1c, set_flagged_bits_b7);
GUEST_FUZZ(0x006a8c1c, 100, [](guest::Fuzz &f) {
    auto holder = f.object<FlaggedObject>();
    holder->flagged = f.below(4) != 0 ? f.allocate(FUZZ_PAD).cast<u8>() : gptr<u8>(0u);
    f.arguments(holder, f.number());
});

// The float at 0x8c scaled by 1/160 (0 without an object).
float scaled_value_8c(gptr<ScaledObject> object) {
    return object == nullptr ? 0.0f : object->value_8c * QUARTER_UNIT;
}
GUEST_EXPORT(0x006aa944, scaled_value_8c);
GUEST_FUZZ(0x006aa944, 100, [](guest::Fuzz &f) {
    auto object = f.object<ScaledObject>();
    object->value_8c = f.real();
    f.arguments(f.below(4) != 0 ? object : gptr<ScaledObject>(0u));
});

// Packs the halfword at 0xc (above) and the low 18 bits of the value (below) in the word at 0x54.
void pack_angle_54(PackedAngle &object, u32 value) {
    object.packed_54 = (value & ANGLE_BITS_MASK) | (u32(object.half_0c) << ANGLE_HALF_SHIFT);
}
GUEST_EXPORT(0x006e477c, pack_angle_54);
GUEST_FUZZ(0x006e477c, 100, [](guest::Fuzz &f) { f.arguments(f.object<PackedAngle>(), f.number()); });

// The address of the entry (8 bytes each) in the row (96 bytes) the owner names, in the table at 0x00a14380.
gptr<u8> row_entry_address(TableRowOwner &owner, u32 index) {
    return guest::addr_of((*table_a14380)[owner.row * TABLE_A14380_ROW_SIZE + index * TABLE_A14380_ENTRY_SIZE]);
}
GUEST_EXPORT(0x005a3704, row_entry_address);
GUEST_FUZZ(0x005a3704, 100, [](guest::Fuzz &f) {
    auto owner = f.object<TableRowOwner>();
    owner->row = f.below(4);
    f.arguments(owner, f.below(8));
});

// Four words: three zero and the last 0x800000.
void init_four_words(FourWords &words) {
    words.words[0] = 0;
    words.words[1] = 0;
    words.words[2] = 0;
    words.words[3] = FOUR_WORD_LAST;
}
GUEST_EXPORT(0x005aa720, init_four_words);
GUEST_FUZZ(0x005aa720, 100, [](guest::Fuzz &f) { f.arguments(f.object<FourWords>()); });

// Sets the bit (0-4) of the byte at 0x74.
void set_small_bit_74(SmallSetOwner &owner, u32 bit) {
    if (bit < SMALL_SET_BITS) {
        owner.bits = u8(owner.bits | (1u << bit));
    }
}
GUEST_EXPORT(0x005be164, set_small_bit_74);
GUEST_FUZZ(0x005be164, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    f.arguments(f.allocate(sizeof(SmallSetOwner)).cast<SmallSetOwner>(), f.pick<u32>({f.below(SMALL_SET_BITS + 3), 0xffffffffu}));
});

// What the value source at 0x68a0 points to when its state is 1, else 0.
u32 value_of_source(ValueSourceOwner &owner) {
    return owner.source.state == SELECT_VALUE_1 ? *owner.source.pointer : 0;
}
GUEST_EXPORT(0x006dfde8, value_of_source);
GUEST_FUZZ(0x006dfde8, 100, [](guest::Fuzz &f) {
    f.allocate(FUZZ_PAD);
    auto owner = f.allocate(sizeof(ValueSourceOwner)).cast<ValueSourceOwner>();
    owner->source.state = f.pick<u32>({0, 1, 1, 2});
    owner->source.pointer = f.object<u32>();
    f.arguments(owner);
});

// The counter block (at 0x8ae0) of the player of the slot; null without a player.
gptr<u8> counter_block_of_slot_player(u32 slot) {
    gptr<SavePlayer> player = player_of_slot_index(slot);
    return player == nullptr ? gptr<u8>(nullptr) : guest::addr_of(player->block_8ae0[0]);
}
GUEST_EXPORT(0x0065377c, counter_block_of_slot_player);
GUEST_FUZZ(0x0065377c, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 5, f.number()})); });

// Stores two halfwords (low, high) in a word; nothing without the word.
void store_halfword_pair(gptr<u32> destination, u32 low, u32 high) {
    if (destination != nullptr) {
        *destination = (low & 0xffff) | (high << 16);
    }
}
GUEST_EXPORT(0x0061836c, store_halfword_pair);
GUEST_FUZZ(0x0061836c, 100, [](guest::Fuzz &f) {
    f.arguments(f.below(4) != 0 ? f.object<u32>() : gptr<u32>(0u), f.number(), f.number());
});
