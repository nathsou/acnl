// Small helpers of the script engines: they reach a shared table object through the pointer at 0x34c of the object
// they are called on (what the objects are exactly is not known yet).
#include "guest/guest.hpp"

namespace {

// The object at 0x340 of an engine (meaning not known yet).
struct EngineInner {
    u8 unknown_00[0xe];
    u8 byte_0e;
};
GUEST_OFFSET(EngineInner, byte_0e, 0xe);

// A 172-byte entry of the shared table (contents not known yet).
struct EngineEntry {
    u8 unknown_00[0x2b * 4];
};
GUEST_SIZE(EngineEntry, 0xac);

constexpr u8 SLOT_STATE_CLEARED = 0;
constexpr u8 SLOT_STATE_SET = 2;

struct EngineTable {
    u8 unknown_00[4];
    u8 byte_04;
    u8 unknown_05[3];
    s32 value_08;
    gptr<EngineEntry> entries;
    s32 entry_count;
    u8 unknown_14[0xc0 - 0x14];
    s32 value_c0;
    u8 state_c4;
};
GUEST_OFFSET(EngineTable, byte_04, 4);
GUEST_OFFSET(EngineTable, value_08, 8);
GUEST_OFFSET(EngineTable, entries, 0xc);
GUEST_OFFSET(EngineTable, entry_count, 0x10);
GUEST_OFFSET(EngineTable, value_c0, 0xc0);
GUEST_OFFSET(EngineTable, state_c4, 0xc4);

struct Engine {
    u8 unknown_000[0x340];
    gptr<EngineInner> inner;
    u8 unknown_344[8];
    gptr<EngineTable> table;
};
GUEST_OFFSET(Engine, inner, 0x340);
GUEST_OFFSET(Engine, table, 0x34c);

// An object with a state byte at 4 and three bytes set by f_0060393c.
struct TalkState {
    u8 unknown_00[4];
    u8 state;
    u8 unknown_05;
    u8 byte_06;
    u8 byte_07;
    u8 byte_08;
    u8 unknown_09[3];
    u32 word_0c;
};
GUEST_OFFSET(TalkState, byte_06, 6);
GUEST_OFFSET(TalkState, byte_08, 8);
GUEST_OFFSET(TalkState, word_0c, 0xc);

// StateObject::state_check (rewritten)
inline constexpr guest::Function<0x0075cf88, bool(TalkState &self, u32 strict)> talk_state_check;

}  // namespace

// Stores three bytes when the state check passes.
void set_talk_bytes(TalkState &self, u8 first, u32 second, u8 third) {
    if (talk_state_check(self, second)) {
        self.byte_06 = first;
        self.byte_07 = u8(second);
        self.byte_08 = third;
    }
}
GUEST_EXPORT(0x0060393c, set_talk_bytes);

void set_inner_byte(Engine &self, u8 value) {
    self.inner->byte_0e = value;
}
GUEST_EXPORT(0x0060396c, set_inner_byte);

// Records `first`, and marks the slot as set with `second` only when second is non-negative and first >= second.
void set_table_range(Engine &self, s32 first, s32 second) {
    EngineTable &table = *self.table;
    table.byte_04 = 0;
    table.value_08 = first;
    if (second >= 0 && first >= second) {
        table.value_c0 = second;
        table.state_c4 = SLOT_STATE_SET;
    } else {
        table.state_c4 = SLOT_STATE_CLEARED;
    }
}
GUEST_EXPORT(0x006039ec, set_table_range);

void clear_table_byte(Engine &self) {
    self.table->byte_04 = 0;
}
GUEST_EXPORT(0x00603a18, clear_table_byte);
