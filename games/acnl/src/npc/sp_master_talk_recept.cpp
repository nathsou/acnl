#include "guest/guest.hpp"

namespace {

// The block f_40050560 returns; only these bytes are known (meaning not known yet).
struct SpMasterState {
    static constexpr u8 MODE_MASK = 0x0f;   // flags_8a92: a mode
    static constexpr u8 FLAG_VALID = 0x10;  // flags_8a92: set when the mode is meaningful
    static constexpr u8 MODE_3 = 3;         // modes with a meaning to virtual_82 (not known yet)
    static constexpr u8 MODE_7 = 7;
    static constexpr u8 MODE_15 = 0xf;

    // packed_8a94: four 2-bit fields, from the top
    static constexpr u8 FIELD0_MASK = 0xc0;
    static constexpr u32 FIELD0_SHIFT = 6;
    static constexpr u8 FIELD1_MASK = 0x30;
    static constexpr u32 FIELD1_SHIFT = 4;
    static constexpr u8 FIELD2_MASK = 0x0c;
    static constexpr u32 FIELD2_SHIFT = 2;
    static constexpr u8 FIELD3_MASK = 0x03;

    u8 unknown_0000[0x8a92];
    u8 flags_8a92;
    u8 unknown_8a93;
    u8 packed_8a94;
};
GUEST_OFFSET(SpMasterState, flags_8a92, 0x8a92);
GUEST_OFFSET(SpMasterState, packed_8a94, 0x8a94);

// A block of unknown meaning whose byte at 0x13 is a level.
struct InfoBlock {
    static constexpr u8 LEVEL_LOW_MAX = 4;   // levels up to this give answer 0
    static constexpr u8 LEVEL_MID_MAX = 8;   // levels up to this give answer 1, above it answer 2

    u8 unknown_00[0x13];
    u8 level;
};
GUEST_OFFSET(InfoBlock, level, 0x13);

// A type test descriptor handed to f_40056ec0: a type id and an unknown pointer.
struct TypeQuery {
    u32 type;
    u32 data;
};

// The object handed to f_400506b8 (extent not known).
struct SubObject2a0 {
    u8 unknown_00[0x20];
};

// ids handed to f_400506b8, one per answer of the level check (meaning not known yet)
constexpr u32 ID_LEVEL_LOW = 0x33a3;
constexpr u32 ID_LEVEL_MID = 0x33a4;
constexpr u32 ID_LEVEL_HIGH = 0x33a5;

inline constexpr guest::Function<0x40050560, gptr<SpMasterState>()> get_sp_master_state;
inline constexpr guest::Function<0x40050628, u32(u32 argument)> pick_value;
inline constexpr guest::Function<0x40050688, gptr<void>()> get_object;
inline constexpr guest::Function<0x400506b0, gptr<InfoBlock>()> get_info_block;
inline constexpr guest::Function<0x400506b8, void(SubObject2a0 &target, u32 id)> apply_id;
inline constexpr guest::Function<0x40056ec0, u32(gptr<void> object, gptr<TypeQuery> query)> type_query;

constexpr u32 TYPE_ID = 0x4005df18;
constexpr u32 FIRST_TYPE_DATA = 0x40054218;
constexpr u32 SECOND_TYPE_DATA = 0x40054230;

// the selector (second argument)
constexpr u32 QUERY_BY_OBJECT = 0;
constexpr u32 QUERY_STATE = 1;
constexpr u32 QUERY_PICK = 2;

constexpr u32 FIELD_BASE = 0xd;  // value_27c is FIELD_BASE plus a choice of 0-3

bool object_is(gptr<void> object, u32 data) {
    guest::StackObject<TypeQuery> query;
    query->type = TYPE_ID;
    query->data = data;
    return type_query(object, query.ptr()) == 0;
}

}  // namespace

struct AcNpcSpMasterTalkRecept {
    u8 unknown_000[0x278];
    u32 value_278;
    u32 value_27c;
    u32 values_280[3];
    u8 unknown_28c[0x2a0 - 0x28c];
    SubObject2a0 sub_2a0;

    u32 virtual_82(gptr<u32> out, u32 mode);
};
GUEST_OFFSET(AcNpcSpMasterTalkRecept, value_278, 0x278);
GUEST_OFFSET(AcNpcSpMasterTalkRecept, value_27c, 0x27c);
GUEST_OFFSET(AcNpcSpMasterTalkRecept, values_280, 0x280);
GUEST_OFFSET(AcNpcSpMasterTalkRecept, sub_2a0, 0x2a0);
GUEST_SIZE(AcNpcSpMasterTalkRecept, 0x2c0);

namespace {

u32 report_state_mode(gptr<u32> out) {
    *out = get_sp_master_state()->flags_8a92 & SpMasterState::MODE_MASK;
    return 1;
}

}  // namespace

// Answers a query about the special master's state: out receives a small number, the result is 1 (0 for an
// unknown selector).
u32 AcNpcSpMasterTalkRecept::virtual_82(gptr<u32> out, u32 mode) {
    if (mode == QUERY_BY_OBJECT) {
        gptr<void> object = get_object();
        if (!object) {
            return report_state_mode(out);
        }
        if (object_is(object, FIRST_TYPE_DATA)) {
            u8 flags = get_sp_master_state()->flags_8a92;
            *out = 2;
            if (flags & SpMasterState::FLAG_VALID) {
                u32 state_mode = flags & SpMasterState::MODE_MASK;
                if (state_mode == SpMasterState::MODE_3) {
                    *out = 0;
                } else if (state_mode == SpMasterState::MODE_7) {
                    *out = 1;
                }
            }
            return 1;
        }
        if (object_is(object, SECOND_TYPE_DATA)) {
            u8 level = get_info_block()->level;
            if (level <= InfoBlock::LEVEL_LOW_MAX) {
                *out = 0;
                apply_id(sub_2a0, ID_LEVEL_LOW);
            } else if (level <= InfoBlock::LEVEL_MID_MAX) {
                *out = 1;
                apply_id(sub_2a0, ID_LEVEL_MID);
            } else {
                *out = 2;
                apply_id(sub_2a0, ID_LEVEL_HIGH);
            }
            return 1;
        }
        return report_state_mode(out);
    }
    if (mode == QUERY_STATE) {
        return report_state_mode(out);
    }
    if (mode != QUERY_PICK) {
        return 0;
    }

    gptr<SpMasterState> state = get_sp_master_state();
    u32 state_mode = state->flags_8a92 & SpMasterState::MODE_MASK;
    if (state_mode < SpMasterState::MODE_7) {
        value_27c = pick_value(3) + FIELD_BASE;
        u32 picked = pick_value(4);
        value_278 = picked;
        if (value_27c == FIELD_BASE) {
            values_280[0] = picked;
        } else if (value_27c == FIELD_BASE + 1) {
            values_280[1] = picked;
        } else if (value_27c == FIELD_BASE + 2) {
            values_280[2] = picked;
        }
        *out = 0;
    } else if (state_mode < SpMasterState::MODE_15) {
        *out = 1;
    } else {
        u8 packed = state->packed_8a94;
        value_27c = FIELD_BASE + ((packed & SpMasterState::FIELD0_MASK) >> SpMasterState::FIELD0_SHIFT);
        values_280[0] = (packed & SpMasterState::FIELD1_MASK) >> SpMasterState::FIELD1_SHIFT;
        values_280[1] = (packed & SpMasterState::FIELD2_MASK) >> SpMasterState::FIELD2_SHIFT;
        values_280[2] = packed & SpMasterState::FIELD3_MASK;
        *out = 2;
    }
    return 1;
}
GUEST_EXPORT(0x40053fd8, AcNpcSpMasterTalkRecept::virtual_82);
