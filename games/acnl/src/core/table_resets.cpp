// Functions that put tables and blocks of state back to their initial contents. What most of these tables hold is
// not known yet; their fields are named after their offsets.
#include "core/word_pair.hpp"
#include "guest/guest.hpp"
#include "net/shared_entry.hpp"

namespace {

// ---- the block of global state at 0x009ab588

// A 7-byte record of the block at 0x009ab588 (contents not known yet).
struct ResetRecord {
    u8 unknown_00[6];
    u8 unknown_06;  // cleared before the record's reset hook runs
};
GUEST_OFFSET(ResetRecord, unknown_06, 6);
GUEST_SIZE(ResetRecord, 7);

struct UnknownState9ab588 {
    static constexpr u32 PAIR_COUNT = 6;
    static constexpr u32 RECORD_COUNT = 4;

    u32 head[4];
    WordPair pairs_10[PAIR_COUNT];
    WordPair pairs_40[PAIR_COUNT];
    ResetRecord records[RECORD_COUNT];
};
GUEST_OFFSET(UnknownState9ab588, head, 0x00);
GUEST_OFFSET(UnknownState9ab588, pairs_10, 0x10);
GUEST_OFFSET(UnknownState9ab588, pairs_40, 0x40);
GUEST_OFFSET(UnknownState9ab588, records, 0x70);
GUEST_SIZE(UnknownState9ab588, 0x8c);

inline guest::global<UnknownState9ab588, 0x009ab588> state_9ab588;
inline guest::global<u8, 0x009516b8> flag_9516b8;  // cleared with the block (meaning not known yet)

// ---- the block of global state at 0x009b41c4

// A 5-byte entry (contents not known yet).
struct MarkedEntry {
    static constexpr u8 RESET_MARKER = 0xa5;  // the value a reset entry gets (meaning not known yet)

    u8 unknown_00[2];
    u8 marker;
    u8 unknown_03[2];
};
GUEST_OFFSET(MarkedEntry, marker, 2);
GUEST_SIZE(MarkedEntry, 5);

// A 22-byte entry (contents not known yet).
struct Entry22 {
    u8 unknown_00[0x10];
    u8 unknown_10;
    u8 unknown_11;
    u8 unknown_12[4];
};
GUEST_OFFSET(Entry22, unknown_10, 0x10);
GUEST_OFFSET(Entry22, unknown_11, 0x11);
GUEST_SIZE(Entry22, 22);

struct UnknownState9b41c4 {
    static constexpr u32 ENTRY_COUNT = 32;

    MarkedEntry marked_entries[ENTRY_COUNT];
    Entry22 entries[ENTRY_COUNT];
    u8 buffer[0x500];
};
GUEST_OFFSET(UnknownState9b41c4, marked_entries, 0x000);
GUEST_OFFSET(UnknownState9b41c4, entries, 0x0a0);
GUEST_OFFSET(UnknownState9b41c4, buffer, 0x360);
GUEST_SIZE(UnknownState9b41c4, 0x860);

inline guest::global<UnknownState9b41c4, 0x009b41c4> state_9b41c4;

// The two indices reset with the block at 0x009b41c4 (what they index is not known yet).
struct UnknownState952694 {
    static constexpr s32 NO_INDEX = -1;

    u8 unknown_00[0x10];
    s32 index_10;
    s32 index_14;
};
GUEST_OFFSET(UnknownState952694, index_10, 0x10);
GUEST_OFFSET(UnknownState952694, index_14, 0x14);

inline guest::global<UnknownState952694, 0x00952694> state_952694;

// ---- the object init_object_with_sub_objects sets up

struct SubObject {
    u8 unknown_00[0xf2];
};
GUEST_SIZE(SubObject, 0xf2);

// Its full size is not known; the region at 0xf66 is the last part the code reaches.
struct ObjectWithSubObjects {
    static constexpr u32 SUB_OBJECT_COUNT = 16;

    u8 unknown_000[0x30];
    SubObject sub_objects[SUB_OBJECT_COUNT];
    u8 unknown_f50[0xf66 - 0xf50];
    u8 region;  // the start of a region of unknown extent
};
GUEST_OFFSET(ObjectWithSubObjects, sub_objects, 0x30);
GUEST_OFFSET(ObjectWithSubObjects, region, 0xf66);

// The 16 bytes the original pushes before its calls (r4-r6 and lr). Its callees read stack they have not written
// (uninitialized locals), so they must run with their frames exactly where the original puts them.
struct CalleeFrameOffset {
    u32 words[4];
};
GUEST_SIZE(CalleeFrameOffset, 16);

inline constexpr guest::Function<0x0077956c, void(gptr<ResetRecord> record)> reset_record_hook;
inline constexpr guest::Function<0x002f825c, void(gptr<u8> buffer, u32 size)> clear_buffer;
inline constexpr guest::Function<0x003084d0, void(gptr<ObjectWithSubObjects> object)> prepare_object;
inline constexpr guest::Function<0x003084f9, void(gptr<SubObject> sub_object)> init_sub_object;
inline constexpr guest::Function<0x0027a48c, void(gptr<u8> region)> init_region;

}  // namespace

/// Copies an 8-byte value (both words are read before either is written).
static void copy_8_bytes(gptr<WordPair> dest, gptr<WordPair> source) {
    WordPair value = *source;
    *dest = value;
}
GUEST_EXPORT(0x003081b4, copy_8_bytes);

/// Resets every entry of a shared entry table (marker, flags, counter) and clears bit 0 of every entry's bits.
static void reset_shared_entry_table(SharedEntryTable &table) {
    for (SharedEntry &entry : table.entries) {
        entry.flags = SharedEntry::RESET_FLAGS;
        entry.counter = 0;
        entry.unknown_04 = SharedEntry::RESET_MARKER;
    }
    for (u8 &bits : table.entry_bits) {
        bits &= ~1;
    }
}
GUEST_EXPORT(0x003081c8, reset_shared_entry_table);
GUEST_EXPORT(0x0029ce10, reset_shared_entry_table);

/// Clears the global block at 0x009ab588, runs the reset hook of each of its records, and clears a global flag.
static void reset_global_block_a() {
    UnknownState9ab588 &block = state_9ab588;
    for (u32 &word : block.head) {
        word = 0;
    }
    for (u32 i = 0; i < UnknownState9ab588::PAIR_COUNT; i++) {
        block.pairs_10[i] = {0, 0};
        block.pairs_40[i] = {0, 0};
    }
    for (ResetRecord &record : block.records) {
        record.unknown_06 = 0;
        reset_record_hook(guest::addr_of(record));
    }
    flag_9516b8 = 0;
}
GUEST_EXPORT(0x00308238, reset_global_block_a);

/// Resets the two tables of the global block at 0x009b41c4, clears its buffer and sets two indices to -1.
static void reset_global_block_b() {
    UnknownState9b41c4 &block = state_9b41c4;
    for (MarkedEntry &entry : block.marked_entries) {
        entry.marker = MarkedEntry::RESET_MARKER;
    }
    for (Entry22 &entry : block.entries) {
        entry.unknown_10 = 0;
        entry.unknown_11 = 0;
    }
    clear_buffer(guest::addr_of(&block.buffer[0]), sizeof(block.buffer));
    state_952694->index_10 = UnknownState952694::NO_INDEX;
    state_952694->index_14 = UnknownState952694::NO_INDEX;
}
GUEST_EXPORT(0x003082bc, reset_global_block_b);

/// Prepares an object and its 16 sub-objects, then the region at its end.
static void init_object_with_sub_objects(gptr<ObjectWithSubObjects> object) {
    guest::StackObject<CalleeFrameOffset> frame;
    prepare_object(object);
    for (SubObject &sub_object : object->sub_objects) {
        init_sub_object(guest::addr_of(sub_object));
    }
    init_region(guest::addr_of(object->region));
}
GUEST_EXPORT(0x00308355, init_object_with_sub_objects);
