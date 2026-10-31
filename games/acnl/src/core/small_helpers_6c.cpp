// Small helpers of the code around 0x006c0000 and 0x006e0000: counters, tables of rows and records.
#include "core/entry18.hpp"
#include "core/fuzz_helpers.hpp"
#include "item/item.hpp"
#include "net/net_session.hpp"

namespace {

// ---- a table of twelve entries (the pointers are in the game's data)
struct EntryFlags {
    static constexpr u32 COUNT = 12;

    u8 unknown_00[0x14];
    u8 byte_14;
    u8 byte_15;
};
GUEST_OFFSET(EntryFlags, byte_14, 0x14);
GUEST_OFFSET(EntryFlags, byte_15, 0x15);

inline guest::global<gptr<EntryFlags>[EntryFlags::COUNT], 0x0095c6e4> entry_table;

gptr<EntryFlags> entry_or_first(u32 index) {
    return entry_table[index < EntryFlags::COUNT ? index : 0];
}

// ---- records of 20 bytes after a header of 0x14, found through the first global getter
struct Record20 {
    s8 value;
    u8 unknown_01[19];
};
GUEST_SIZE(Record20, 20);

struct RecordTable {
    u8 unknown_00[0x14];
    Record20 records[1];  // indexed without a bound check
};
GUEST_OFFSET(RecordTable, records, 0x14);

constexpr s32 NO_RECORD = -1;
constexpr s32 RECORD_LIMIT = 0x40;
inline constexpr guest::Function<0x006158c4, gptr<RecordTable>()> record_table;

constexpr u32 ITEM_COUNT_PER_ROW = 10;

struct ItemNumberRows {
    u8 unknown_00[0x14];
    u16 numbers[1][ITEM_COUNT_PER_ROW];  // rows of ITEM_COUNT_PER_ROW numbers, indexed without a bound check
};
GUEST_OFFSET(ItemNumberRows, numbers, 0x14);

struct TargetStation {
    u8 unknown_000[0x58c];
    u32 station;
    u8 is_current;

    void set(u32 new_station);
};
GUEST_OFFSET(TargetStation, station, 0x58c);
GUEST_OFFSET(TargetStation, is_current, 0x590);

// A state of 0x13 bytes: an empty item, a few bytes at fixed initial values.
struct ItemState {
    static constexpr u8 INITIAL_BYTE_0C = 0xff;

    u32 word_00;
    Item item_04;
    u32 word_08;
    u8 byte_0c;
    u8 byte_0d;
    u8 byte_0e;
    u8 byte_0f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
};
GUEST_OFFSET(ItemState, item_04, 4);
GUEST_OFFSET(ItemState, word_08, 8);
GUEST_OFFSET(ItemState, byte_0c, 0xc);
GUEST_OFFSET(ItemState, byte_12, 0x12);

constexpr u32 NUMBER_RANGE_FIRST = 0x30;
constexpr u32 NUMBER_RANGE_COUNT = 12;
constexpr u32 SPECIAL_NUMBER = 0xe;

// ---- 18-byte entries of a table that is loaded later
constexpr u32 ENTRY18_COUNT = Entry18::COUNT;

struct EntryTable18 {
    u8 unknown_000[0xe74];
    gptr<Entry18> entries;  // null until the table is loaded
};
GUEST_OFFSET(EntryTable18, entries, 0xe74);
inline guest::global<EntryTable18, 0x00a14b5c - 0> table_18_holder;

// What the lookup returns while the table is not loaded: a record that is cleared every time.
struct DefaultEntry18 {
    u32 word_00;
    u32 word_04;
    u32 word_08;
    u32 word_0c;
    u16 half_10;
};
inline guest::global<DefaultEntry18, 0x00a14b48> default_entry_18;
inline guest::global<u32, 0x00952cc8> global_word_952cc8;

}  // namespace

void TargetStation::set(u32 new_station) {
    station = new_station;
    is_current = (*net_session)->station() == new_station;
}
GUEST_EXPORT(0x006c32c8, TargetStation::set);

static u8 entry_byte_14(u32 index) { return entry_or_first(index)->byte_14; }
static u8 entry_byte_15(u32 index) { return entry_or_first(index)->byte_15; }
GUEST_EXPORT(0x006c39c4, entry_byte_14);
GUEST_EXPORT(0x006c3be4, entry_byte_15);

// The signed byte of a record (index -1 gives -1, 0x40 and more give 0).
static s32 record_value(s32 index) {
    if (index == NO_RECORD) {
        return NO_RECORD;
    }
    if (index >= RECORD_LIMIT) {
        return 0;
    }
    return record_table()->records[index].value;
}
GUEST_EXPORT(0x006c4280, record_value);

// When the main object reports nothing: stores the item's number in the first empty place of the row.
static void store_number_in_free_place(ItemNumberRows &rows, const Item &item, u32 row) {
    if ((*net_session)->station() != 0) {
        return;
    }
    for (u32 i = 0; i < ITEM_COUNT_PER_ROW; i++) {
        if (rows.numbers[row][i] == Item::EMPTY) {
            rows.numbers[row][i] = item.number();
            return;
        }
    }
}
GUEST_EXPORT(0x006c4e6c, store_number_in_free_place);

// A state with an empty item and the initial bytes.
static ItemState &construct_item_state(ItemState &self) {
    self.word_00 = 0;
    copy_item(self.item_04, *empty_item);
    self.word_08 = 0;
    self.byte_0c = ItemState::INITIAL_BYTE_0C;
    self.byte_0d = 0;
    self.byte_0e = 0;
    self.byte_0f = 0;
    self.byte_10 = 1;
    self.byte_11 = 2;
    self.byte_12 = 3;
    return self;
}
GUEST_EXPORT(0x006c5180, construct_item_state);

// A constructor with nothing to do: it hands the object back.
static ItemState &construct_nothing(ItemState &self) {
    return self;
}
GUEST_EXPORT(0x006c51d0, construct_nothing);
GUEST_EXPORT(0x00624024, construct_nothing);
GUEST_EXPORT(0x00691b20, construct_nothing);

static bool number_in_range(u32 number) {
    return number - NUMBER_RANGE_FIRST < NUMBER_RANGE_COUNT;
}
GUEST_EXPORT(0x006e56f4, number_in_range);

static u32 get_global_word_952cc8() {
    return *global_word_952cc8;
}
GUEST_EXPORT(0x006e5708, get_global_word_952cc8);

// The entry at the index of the loaded table, or the first one for an index past the end. While there is no table the
// default entry is cleared and returned.
static gptr<Entry18> entry18(u32 index) {
    gptr<Entry18> entries = table_18_holder->entries;
    if (!entries) {
        default_entry_18->word_00 = 0;
        default_entry_18->word_04 = 0;
        default_entry_18->word_08 = 0;
        default_entry_18->word_0c = 0;
        default_entry_18->half_10 = 0;
        return guest::addr_of(*default_entry_18).cast<Entry18>();
    }
    return index < ENTRY18_COUNT ? entries + index : entries;
}
GUEST_EXPORT(0x006e5718, entry18);

static bool is_special_number(u32 number) {
    return number == SPECIAL_NUMBER;
}
GUEST_EXPORT(0x006e5774, is_special_number);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x006c32c8, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<TargetStation>(), f.pick<u32>({0, 1, 2, 3, 4, f.number()}));
});
GUEST_FUZZ(0x006c39c4, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, 11, 12, 13, 0xffffffffu, f.below(14)}));
});
GUEST_FUZZ(0x006c3be4, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, 11, 12, 13, 0xffffffffu, f.below(14)}));
});
GUEST_FUZZ(0x006c4280, 300, [](guest::Fuzz &f) {
    f.arguments(f.pick<s32>({-1, 0, 1, 0x3f, 0x40, 0x41, 100, static_cast<s32>(f.below(0x50))}));
});
GUEST_FUZZ(0x006c4e6c, 300, [](guest::Fuzz &f) {
    auto rows = f.allocate(sizeof(ItemNumberRows) + 4 * ITEM_COUNT_PER_ROW * sizeof(u16)).cast<ItemNumberRows>();
    f.bytes(rows, 4 * ITEM_COUNT_PER_ROW * sizeof(u16) + 0x14);
    for (u32 i = 0; i < ITEM_COUNT_PER_ROW; i++) {
        if (f.below(2) != 0) {
            rows->numbers[1][i] = Item::EMPTY;
        }
    }
    auto item = f.object<Item>();
    f.arguments(rows, item, f.below(3));
});
GUEST_FUZZ(0x006c5180, 200, [](guest::Fuzz &f) { f.arguments(f.object<ItemState>()); });
GUEST_FUZZ(0x006c51d0, 100, [](guest::Fuzz &f) { f.arguments(f.object<ItemState>()); });
GUEST_FUZZ(0x00624024, 100, [](guest::Fuzz &f) { f.arguments(f.object<ItemState>()); });
GUEST_FUZZ(0x00691b20, 100, [](guest::Fuzz &f) { f.arguments(f.object<ItemState>()); });
GUEST_FUZZ(0x006e56f4, 300, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 0x2f, 0x30, 0x3b, 0x3c, 0xffffffffu, f.below(0x50)}));
});
GUEST_FUZZ(0x006e5708, 100, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x006e5718, 300, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, ENTRY18_COUNT - 1, ENTRY18_COUNT, 0xffffffffu, f.below(0x300)}));
});
GUEST_FUZZ(0x006e5774, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 0xd, 0xe, 0xf, f.number()})); });
