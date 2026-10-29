// Calls into the global BGM parameter list: each sets some parameters of the nodes of one kind and id, or asks whether
// the list has one. The kinds and ids are the game's own; what they stand for is not known yet.
#include "audio/bgm_param_list.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 KIND_2 = 2;
constexpr u32 KIND_3 = 3;
constexpr u32 KIND_6 = 6;
constexpr u32 KIND_13 = 0x13;
constexpr u32 KIND_14 = 0x14;
constexpr u32 KIND_1A = 0x1a;
constexpr u32 ID_26A = 0x0100026a;
constexpr u32 ID_9E = 0x0100009e;
constexpr u32 ID_9C = 0x0100009c;
constexpr u32 ID_98 = 0x01000098;
constexpr u32 ID_100 = 0x100;
constexpr u32 ID_NONE = 0;
constexpr u32 FLOAT_BITS_ZERO = 0;
constexpr u32 FLOAT_BITS_MINUS_ONE = 0xffffffff;
constexpr u32 NO_VALUE_10 = 0;
constexpr u32 VALUE_14_5 = 5;
constexpr u8 STATE_2 = 2;
constexpr u8 STATE_3 = 3;
constexpr u8 CURRENT_STATE_MASK = 6;
constexpr u32 MATCH_VALUE = 1;
constexpr u32 FLAG_MANAGER_BYTE = 0x31;
constexpr u32 ROW_WORDS = 4;
constexpr u32 FUZZ_ID_COUNT = 3;
constexpr u32 FUZZ_ID_BASE = 0x1000000;

inline guest::global<BgmParamList, 0x00989bd8> bgm_list;
inline guest::global<s8[2], 0x0094e4a9> flags_94e4a9;
inline guest::global<u32[16], 0x008458dc> id_table;
inline constexpr guest::Function<0x00753058, u32(gptr<void> entry, u32 value, u32 key)> entry_matches;

struct FlagManager {
    u8 unknown_00[FLAG_MANAGER_BYTE];
    u8 byte_31;
};
GUEST_OFFSET(FlagManager, byte_31, FLAG_MANAGER_BYTE);
inline guest::global<FlagManager, 0x0098a030> flag_manager;

// A track whose state byte (0x14) the calls below set.
struct StateTrack {
    u8 unknown_00[0x14];
    u8 state_14;
};
GUEST_OFFSET(StateTrack, state_14, 0x14);

// A selector: a flag at 1, a row at 4 and a column at 0xc into the id table.
struct IdSelector {
    u8 unknown_00;
    u8 flag_01;
    u8 unknown_02[2];
    u32 row;
    u8 unknown_08[4];
    u32 column;
};
GUEST_OFFSET(IdSelector, row, 4);
GUEST_OFFSET(IdSelector, column, 0xc);

// An object with an id at 0x10.
struct IdHolder {
    u8 unknown_00[0x10];
    u32 id;
};
GUEST_OFFSET(IdHolder, id, 0x10);

void fuzz_list(guest::Fuzz &f) {
    bgm_list->head = nullptr;
    gptr<BgmParamNode> next = nullptr;
    u32 count = f.below(4);
    for (u32 i = 0; i < count; i++) {
        auto node = f.object<BgmParamNode>();
        node->next = next;
        node->kind = u8(f.pick<u32>({KIND_2, KIND_3, KIND_6, KIND_13, KIND_14}));
        node->id = f.pick<u32>({ID_26A, ID_9E, ID_9C, ID_98, FUZZ_ID_BASE + f.below(FUZZ_ID_COUNT)});
        next = node;
    }
    bgm_list->head = next;
}

}  // namespace

void bgm_set_kind_3_and_state_3(StateTrack &track, u32 value, u32 float_bits) {
    bgm_list->update_nodes(KIND_3, ID_26A, value, float_bits, NO_VALUE_10);
    track.state_14 = STATE_3;
}
GUEST_EXPORT(0x00589e9c, bgm_set_kind_3_and_state_3);
GUEST_FUZZ(0x00589e9c, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    f.arguments(f.object<StateTrack>(), f.number(), f.number());
});

void bgm_set_kind_2(gptr<void> unused_object, u32 value, u32 float_bits) {
    bgm_list->update_nodes(KIND_2, ID_9E, value, float_bits, NO_VALUE_10);
}
GUEST_EXPORT(0x0058a078, bgm_set_kind_2);
GUEST_FUZZ(0x0058a078, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    f.arguments(f.allocate(16), f.number(), f.number());
});

void bgm_set_kind_3_and_state_2(StateTrack &track, u32 value) {
    bgm_list->update_nodes(KIND_3, ID_26A, value, FLOAT_BITS_MINUS_ONE, NO_VALUE_10);
    track.state_14 = STATE_2;
}
GUEST_EXPORT(0x0058a138, bgm_set_kind_3_and_state_2);
GUEST_FUZZ(0x0058a138, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    f.arguments(f.object<StateTrack>(), f.number());
});

// Sets the parameters of the node the selector picks from the id table; then clears the flag manager's byte 0x31.
void bgm_set_selected(IdSelector &selector) {
    u32 kind = selector.flag_01 != 0 ? KIND_14 : KIND_13;
    u32 id = id_table[selector.row * ROW_WORDS + selector.column];
    bgm_list->update_nodes(kind, id, VALUE_14_5, FLOAT_BITS_ZERO, NO_VALUE_10);
    flag_manager->byte_31 = 0;
}
GUEST_EXPORT(0x0058a17c, bgm_set_selected);
GUEST_FUZZ(0x0058a17c, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    auto selector = f.object<IdSelector>();
    selector->row = f.below(2);
    selector->column = f.below(ROW_WORDS);
    f.arguments(selector);
});

void bgm_set_current_kind_6(gptr<void> unused_object, u32 value) {
    bgm_list->set_current_value(KIND_6, ID_98, value);
}
GUEST_EXPORT(0x0058a270, bgm_set_current_kind_6);
GUEST_FUZZ(0x0058a270, 100, [](guest::Fuzz &f) {
    fuzz_list(f);  // the value (1 or 2) is never a node id, which would make the original loop forever
    bgm_list->current.kind = KIND_6;
    bgm_list->current.id = ID_98;
    bgm_list->current.state = BgmCurrentRecord::STATE_8;
    f.arguments(f.allocate(16), f.pick<u32>({1, 2}));
});

// Two copies.
void bgm_set_kind_6_of_holder(IdHolder &holder) {
    bgm_list->update_nodes(KIND_6, holder.id, VALUE_14_5, FLOAT_BITS_MINUS_ONE, NO_VALUE_10);
}
GUEST_EXPORT(0x0058a2dc, bgm_set_kind_6_of_holder);
GUEST_EXPORT(0x0058a500, bgm_set_kind_6_of_holder);
GUEST_FUZZ(0x0058a2dc, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    auto holder = f.object<IdHolder>();
    holder->id = f.pick<u32>({ID_98, FUZZ_ID_BASE + f.below(FUZZ_ID_COUNT)});
    f.arguments(holder);
});
GUEST_FUZZ(0x0058a500, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    auto holder = f.object<IdHolder>();
    holder->id = f.pick<u32>({ID_98, FUZZ_ID_BASE + f.below(FUZZ_ID_COUNT)});
    f.arguments(holder);
});

void bgm_set_kind_6(gptr<void> unused_object, u32 value) {
    bgm_list->update_nodes(KIND_6, ID_98, value, FLOAT_BITS_ZERO, NO_VALUE_10);
}
GUEST_EXPORT(0x0058a8e0, bgm_set_kind_6);
GUEST_FUZZ(0x0058a8e0, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    f.arguments(f.allocate(16), f.number());
});

void bgm_set_kind_3_id_9c(gptr<void> unused_object, u32 value, u32 float_bits) {
    bgm_list->update_nodes(KIND_3, ID_9C, value, float_bits, NO_VALUE_10);
}
GUEST_EXPORT(0x0058aaac, bgm_set_kind_3_id_9c);
GUEST_FUZZ(0x0058aaac, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    f.arguments(f.allocate(16), f.number(), f.number());
});

// Whether the list has no node of kind 0x1a with id 0x100.
bool bgm_lacks_100() {
    return !bgm_list->contains(KIND_1A, ID_100);
}
GUEST_EXPORT(0x005896a8, bgm_lacks_100);
GUEST_FUZZ(0x005896a8, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    f.arguments();
});

// Clears the first flag when the list has no node of kind 0x1a without an id.
void bgm_clear_flag_without_node() {
    if (!bgm_list->contains(KIND_1A, ID_NONE)) {
        flags_94e4a9[0] = 0;
    }
}
GUEST_EXPORT(0x00589780, bgm_clear_flag_without_node);
GUEST_FUZZ(0x00589780, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    flags_94e4a9[0] = s8(f.below(3));
    f.arguments();
});

// True while the first flag is clear; otherwise whether the current record does not match (value 1, key 0).
bool bgm_current_record_ok() {
    if (flags_94e4a9[0] == 0) {
        return true;
    }
    return entry_matches(guest::addr_of(bgm_list->current).cast<void>(), MATCH_VALUE, 0) == 0;
}
GUEST_EXPORT(0x00589854, bgm_current_record_ok);
GUEST_FUZZ(0x00589854, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    flags_94e4a9[0] = s8(f.below(2));
    f.arguments();
});

// Both flags share a bit and the current record's state has bit 1 or 2.
bool bgm_flags_and_state() {
    if ((flags_94e4a9[0] & flags_94e4a9[1]) == 0) {
        return false;
    }
    return (bgm_list->current.state & CURRENT_STATE_MASK) != 0;
}
GUEST_EXPORT(0x00589a9c, bgm_flags_and_state);
GUEST_FUZZ(0x00589a9c, 100, [](guest::Fuzz &f) {
    fuzz_list(f);
    flags_94e4a9[0] = s8(f.below(4));
    flags_94e4a9[1] = s8(f.below(4));
    bgm_list->current.state = u8(f.below(8));
    f.arguments();
});
