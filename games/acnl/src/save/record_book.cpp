// A book of records: a time, a list of three and a list of four entries that name a player (a SavedRecordHeader each, the
// first bytes being an identity) and a few state bytes. What it keeps is not known yet.
#include <cstring>

#include "core/time_stamp.hpp"
#include "save/saved_record.hpp"

namespace {

inline constexpr guest::Function<0x00311a34, u32(gptr<const void> a, gptr<const void> b)> match_entry;

constexpr u32 FIRST_COUNT = 3;
constexpr u32 SECOND_COUNT = 4;
constexpr u8 BYTE_A6_NONE = 0xff;
constexpr u8 BYTE_AA_RESET = 2;
constexpr u8 BYTE_AB_RESET = 3;
constexpr u8 BYTE_A8_NONE = 0xfc;
constexpr u32 MATCH_FLAG_FIRST_BIT = 4;  // byte 0xaa: bit 4 + n says entry n of the first list matched

}  // namespace

struct RecordBook {
    u8 time[sizeof(GameTime)];  // a GameTime (not aligned)
    SavedRecordHeader first[FIRST_COUNT];
    SavedRecordHeader second[SECOND_COUNT];
    u16 half_a2;
    u8 byte_a4;
    u8 byte_a5;
    u8 byte_a6;
    u8 byte_a7;
    u8 byte_a8;
    u8 byte_a9;
    u8 byte_aa;
    u8 byte_ab;

    void clear_entries_and_bytes();
    void set_time(const TimeStamp &stamp);
    void set_time_none();
};
GUEST_OFFSET(RecordBook, first, 8);
GUEST_OFFSET(RecordBook, second, 0x4a);
GUEST_OFFSET(RecordBook, half_a2, 0xa2);
GUEST_OFFSET(RecordBook, byte_a4, 0xa4);
GUEST_SIZE(RecordBook, 0xac);

void RecordBook::set_time(const TimeStamp &stamp) {
    GameTime game_time;
    game_time.set_time_stamp(stamp);
    std::memcpy(time, &game_time, sizeof(game_time));
}

void RecordBook::set_time_none() {
    GameTime game_time{GameTime::NONE};
    std::memcpy(time, &game_time, sizeof(game_time));
}

// Empties both lists.
void RecordBook::clear_entries_and_bytes() {
    for (SavedRecordHeader &entry : first) {
        entry.clear();
    }
    for (SavedRecordHeader &entry : second) {
        entry.clear();
    }
}

// Resets the book to the given time, with empty lists.
void reset_record_book_at(RecordBook &book, const TimeStamp &stamp) {
    book.set_time(stamp);
    book.clear_entries_and_bytes();
    book.half_a2 = 0;
    book.byte_a4 = 0;
    book.byte_a5 = 0;
    book.byte_a6 = BYTE_A6_NONE;
    book.byte_a7 = 0;
    book.byte_a8 = 0;
    book.byte_a9 = 0;
    book.byte_aa = BYTE_AA_RESET;
    book.byte_ab = BYTE_AB_RESET;
}
GUEST_EXPORT(0x0030a2b4, reset_record_book_at);

// Resets the book with no time (and 0xfc in byte 0xa8).
void reset_record_book(RecordBook &book) {
    book.set_time_none();
    book.clear_entries_and_bytes();
    book.half_a2 = 0;
    book.byte_a4 = 0;
    book.byte_a5 = 0;
    book.byte_a6 = BYTE_A6_NONE;
    book.byte_a7 = 0;
    book.byte_a8 = BYTE_A8_NONE;
    book.byte_a9 = 0;
    book.byte_aa = BYTE_AA_RESET;
    book.byte_ab = BYTE_AB_RESET;
}
GUEST_EXPORT(0x0030c428, reset_record_book);

// Resets the book to the reference time with the given byte at 0xa6.
void reset_record_book_now(RecordBook &book, u32 byte_a6) {
    book.clear_entries_and_bytes();
    book.half_a2 = 0;
    book.byte_a4 = 0;
    book.byte_a5 = 0;
    book.byte_a7 = 0;
    book.set_time(*reference_time);
    book.byte_a8 = 0;
    book.byte_aa = 0;
    book.byte_a6 = u8(byte_a6);
    book.byte_ab = BYTE_AA_RESET;
}
GUEST_EXPORT(0x005bca18, reset_record_book_now);

// Empties the entries of the first list that name the player.
void clear_first_entries_of(RecordBook &book, gptr<const void> player) {
    for (SavedRecordHeader &entry : book.first) {
        if (match_entry(guest::addr_of(entry), player) != 0) {
            entry.clear();
        }
    }
}
GUEST_EXPORT(0x005bc900, clear_first_entries_of);

// Sets the bit of byte 0xaa for each entry of the first list that names the player.
void mark_first_entries_of(RecordBook &book, gptr<const void> player) {
    for (u32 index = 0; index < FIRST_COUNT; index++) {
        if (match_entry(guest::addr_of(book.first[index]), player) != 0) {
            book.byte_aa = u8(book.byte_aa | (1u << (MATCH_FLAG_FIRST_BIT + index)));
        }
    }
}
GUEST_EXPORT(0x005bc944, mark_first_entries_of);

// Removes the first entry of the second list that names the player: the entries after it move up (the three after the
// first three only) and the fourth entry is emptied.
void remove_second_entry_of(RecordBook &book, gptr<const void> player) {
    for (u32 index = 0; index < SECOND_COUNT; index++) {
        if (match_entry(guest::addr_of(book.second[index]), player) == 0) {
            continue;
        }
        for (u32 moved = index; moved < FIRST_COUNT; moved++) {
            book.second[moved].copy_from(book.second[moved + 1]);
        }
        book.second[SECOND_COUNT - 1].clear();
        return;
    }
}
GUEST_EXPORT(0x005bc99c, remove_second_entry_of);

namespace {

}  // namespace
