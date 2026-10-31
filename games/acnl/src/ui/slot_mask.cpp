// A 4-slot mask with a counter (used by UI code), the constructor of an object that holds one, a 32-entry table
// allocator and a check on the main state.
#include "guest/guest.hpp"
#include "net/station_mask.hpp"
#include "save/personal_id.hpp"

using guest::gptr;

namespace {

struct ByteFlags {
    u8 first;
    u8 second;
};

struct SlotObject {
    u8 byte_00;
    u8 unknown_01[5];
    u8 unknown_06[8];
    u8 unknown_0e[6];
    ByteFlags flags_14;
    u8 unknown_16[6];
    ByteFlags flags_1c;
    u8 unknown_1e[2];
    u8 value_20;
    ByteFlags flags_21;
    u8 byte_23;
};
GUEST_SIZE(SlotObject, 0x24);
GUEST_OFFSET(SlotObject, flags_14, 0x14);
GUEST_OFFSET(SlotObject, flags_1c, 0x1c);
GUEST_OFFSET(SlotObject, flags_21, 0x21);

// The value every slot is given by the constructor (meaning not known yet).
constexpr u32 SLOT_INITIAL_VALUE = 0xa5;
// The value_20 the constructor stores (meaning not known yet).
constexpr u8 INITIAL_VALUE_20 = 4;

constexpr u32 TABLE_ENTRIES = 32;
constexpr u32 TABLE_ENTRY_CONSTRUCTOR = 0x00625720;  // ShortId::clear

// The object the global at 0x0095362c points to (only the bytes read here are named).
struct WorldState {
    u8 unknown_0000[0x23c];
    u8 count_23c;
    u8 target_23d;
    u8 unknown_23e[0x27a0 - 0x23e];
    u8 count_27a0;
    u8 unknown_27a1[2];
    u8 target_27a3;
    u8 unknown_27a4[0x27e4 - 0x27a4];
    u8 mode_27e4;
    u8 unknown_27e5[0x1329d - 0x27e5];
    u8 mode_1329d;
    u8 unknown_1329e[0x132b2 - 0x1329e];
    u8 flag_132b2;
};
GUEST_OFFSET(WorldState, count_23c, 0x23c);
GUEST_OFFSET(WorldState, target_23d, 0x23d);
GUEST_OFFSET(WorldState, count_27a0, 0x27a0);
GUEST_OFFSET(WorldState, target_27a3, 0x27a3);
GUEST_OFFSET(WorldState, mode_27e4, 0x27e4);
GUEST_OFFSET(WorldState, mode_1329d, 0x1329d);
GUEST_OFFSET(WorldState, flag_132b2, 0x132b2);

inline guest::global<gptr<WorldState>, 0x0095362c> world_state;

constexpr u8 MODE_SECOND_SET = 2;  // mode_1329d value selecting the second set of fields (meaning not known yet)
constexpr u8 MODE_ONE = 1;         // mode_27e4 value (meaning not known yet)
constexpr u32 TARGET_LIMIT = 4;

// Count thresholds of world_state_check (what the counts measure is not known yet).
constexpr u32 FIRST_SET_MATCH_MIN = 3;          // with flag_132b2 set, the count must reach this
constexpr u32 FIRST_SET_MISMATCH_ABOVE = 0xb;   // the count must exceed this when the target does not match
constexpr u32 MODE_ONE_MATCH_MIN = 0x34;
constexpr u32 MODE_ONE_MISMATCH_MIN = 0x3a;
constexpr u32 OTHER_MODE_MATCH_MIN = 0x27;
constexpr u32 OTHER_MODE_MISMATCH_ABOVE = 0x2f;

inline constexpr guest::Function<0x00624c68, ByteFlags &(ByteFlags &self)> clear_flag_pair;
inline constexpr guest::Function<0x00625c40, void(gptr<void> part)> init_part_06;
inline constexpr guest::Function<0x00621f0c, void(gptr<void> self, u32 index, u32 value)> set_slot_value;
inline constexpr guest::Function<0x00621da4, void(gptr<void> self, u32 index, u32 value)> set_slot_state;
inline constexpr guest::Function<0x00625b50, void(gptr<void> part)> init_part_0e;
inline constexpr guest::Function<0x00301d0d, gptr<void>(gptr<void> memory, u32 constructor, u32 size, u32 count)>
    construct_array;
inline constexpr guest::Function<0x0075dfe8, u32(gptr<WorldState> object)> query_main_object;

}  // namespace

// Removes a slot's bit, and counts down, when the bit was set and the counter is not zero.
void StationMask::remove(u32 slot) {
    u8 bit = slot < STATION_COUNT ? u8(1u << slot) : 0;
    u8 updated = bits & ~bit;
    if (bits != updated && count != 0) {
        bits = updated;
        count = count - 1;
    }
}
GUEST_EXPORT(0x00624b24, StationMask::remove);

// Starts empty, then adds each slot in the mask that is new, while the counter is below MAX_COUNT.
void StationMask::set_from_mask(u32 mask) {
    bits = 0;
    count = 0;
    for (u32 slot = 0; slot < STATION_COUNT; slot++) {
        u8 bit = u8(1u << slot);
        if ((bit & mask) == 0) {
            continue;
        }
        u8 updated = bits | bit;
        if (bits != updated && count < MAX_COUNT) {
            bits = updated;
            count = count + 1;
        }
    }
}
GUEST_EXPORT(0x00624b60, StationMask::set_from_mask);

// Constructor. Ends in a tail call that clears the flag pair at 0x21 and returns it.
static ByteFlags &construct_slot_object(SlotObject &self) {
    self.byte_00 = 0;
    gptr<void> self_ptr = guest::addr_of(self).cast<void>();
    init_part_06(guest::addr_of(self.unknown_06).cast<void>());
    for (u32 slot = 0; slot < StationMask::STATION_COUNT; slot++) {
        set_slot_value(self_ptr, slot, SLOT_INITIAL_VALUE);
        set_slot_state(self_ptr, slot, 0);
    }
    init_part_0e(guest::addr_of(self.unknown_0e).cast<void>());
    clear_flag_pair(self.flags_14);
    clear_flag_pair(self.flags_1c);
    self.value_20 = INITIAL_VALUE_20;
    self.byte_23 = 0;
    return clear_flag_pair(self.flags_21);
}
GUEST_EXPORT(0x00624be4, construct_slot_object);

// Allocates and initialises a table of 32 entries; returns it.
static gptr<ShortId> construct_entry_table(gptr<void> memory) {
    gptr<ShortId> table =
        construct_array(memory, TABLE_ENTRY_CONSTRUCTOR, sizeof(ShortId), TABLE_ENTRIES).cast<ShortId>();
    for (u32 i = 0; i < TABLE_ENTRIES; i++) {
        table[i].clear();
    }
    return table;
}
GUEST_EXPORT(0x00624d48, construct_entry_table);

// A threshold check on the world state's counters, using what the main object answers.
static bool world_state_check() {
    gptr<WorldState> state = *world_state;
    if (state->mode_1329d != MODE_SECOND_SET) {
        u32 target = state->target_23d;
        if (target >= TARGET_LIMIT) {
            return false;
        }
        u32 count = state->count_23c;
        if (query_main_object(state) != target) {
            return count > FIRST_SET_MISMATCH_ABOVE;
        }
        if (count < FIRST_SET_MATCH_MIN) {
            return false;
        }
        return (*world_state)->flag_132b2 != 0;
    }

    u32 target = state->target_27a3;
    if (target >= TARGET_LIMIT) {
        return false;
    }
    u32 mode = state->mode_27e4;
    u32 count = state->count_27a0;
    bool matches = false;
    if (mode == MODE_ONE) {
        matches = query_main_object(state) == target;
        return count >= (matches ? MODE_ONE_MATCH_MIN : MODE_ONE_MISMATCH_MIN);
    }
    matches = query_main_object(state) == target;
    if (matches) {
        return count >= OTHER_MODE_MATCH_MIN;
    }
    return count > OTHER_MODE_MISMATCH_ABOVE;
}
GUEST_EXPORT(0x00624d84, world_state_check);

