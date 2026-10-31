// A list of dated entries (a date, a kind and a value) kept in a byte-counted array, and the removal of an entry
// from it: the entries after it move up and the freed last entry is cleared.
#include "core/date.hpp"

namespace {

constexpr u32 LIST_CAPACITY = 35;      // entries that fit before the count (at 0xd2)
constexpr u8 FREE_BYTE = 0xff;         // the kind and the value of a cleared entry
constexpr s32 PLAYER_KIND = 0;         // entries of this kind carry a player slot
constexpr s32 PLAYER_SLOTS = 4;
constexpr s32 OTHER_KIND = 1;          // entries of this kind carry a number below OTHER_LIMIT
constexpr s32 OTHER_LIMIT = 10;
constexpr u32 KIND_TABLE_ADDRESS = 0x0088f984;  // pairs (id, kind), the first with the id wins
constexpr u32 KIND_TABLE_PAIRS = 18;
constexpr s32 NO_KIND = 0x16;          // what the table gives for ids it does not hold
constexpr u32 ID_LIMIT = 0xfc;         // ids from here on are not looked up

struct DatedEntry {
    Date date;
    u8 kind;
    s8 value;
};
GUEST_SIZE(DatedEntry, 6);

struct DatedEntryList {
    DatedEntry entries[LIST_CAPACITY];
    u8 unknown_d2_pad[0xd2 - LIST_CAPACITY * sizeof(DatedEntry)];
    u8 count;
};
GUEST_OFFSET(DatedEntryList, count, 0xd2);

// Removes the first entry the predicate accepts.
template <typename Match>
void remove_first_matching(DatedEntryList &list, Match matches) {
    bool found = false;
    for (u32 index = 0; index < list.count; index++) {
        if (found) {
            list.entries[index - 1] = list.entries[index];
        } else if (matches(list.entries[index])) {
            found = true;
        }
    }
    if (!found) {
        return;
    }
    list.count--;
    DatedEntry &freed = list.entries[list.count];
    freed.date.year = 0;
    freed.date.month = 0;
    freed.date.day = 0;
    freed.kind = FREE_BYTE;
    freed.value = s8(FREE_BYTE);
}

}  // namespace

// Removes the first entry of the player kind that has the slot (nothing for slots from PLAYER_SLOTS up).
void remove_player_entry(DatedEntryList &list, s32 slot) {
    if (slot >= PLAYER_SLOTS) {
        return;
    }
    remove_first_matching(list, [slot](const DatedEntry &entry) { return entry.kind == PLAYER_KIND && entry.value == slot; });
}
GUEST_EXPORT(0x001b60fc, remove_player_entry);

// Removes the first entry of the other kind with the number (nothing for numbers from OTHER_LIMIT up).
void remove_numbered_entry(DatedEntryList &list, s32 number) {
    if (number >= OTHER_LIMIT) {
        return;
    }
    remove_first_matching(list, [number](const DatedEntry &entry) { return entry.kind == OTHER_KIND && entry.value == number; });
}
GUEST_EXPORT(0x001b63b4, remove_numbered_entry);

// Removes the first entry whose kind is the one the game's table gives for the id (nothing for ids it does not hold).
void remove_entry_of_id(DatedEntryList &list, u32 id) {
    gptr<const u8> table(KIND_TABLE_ADDRESS);
    s32 kind = NO_KIND;
    for (u32 pair = 0; pair < KIND_TABLE_PAIRS; pair++) {
        if (table[pair * 2] == id) {
            kind = s8(table[pair * 2 + 1]);
            break;
        }
    }
    if (id >= ID_LIMIT || kind == NO_KIND) {
        return;
    }
    remove_first_matching(list, [kind](const DatedEntry &entry) { return s8(entry.kind) == kind; });
}
GUEST_EXPORT(0x001b64a8, remove_entry_of_id);
