#include "guest/guest.hpp"

// The record an object points to at offset 4: two 16-bit ids, where 0xffff means "none".
struct IdRecord {
    u8 unknown_00[0xa];
    u16 first_id;
    u16 second_id;
    u8 unknown_0e[2];
};
GUEST_OFFSET(IdRecord, first_id, 0xa);
GUEST_OFFSET(IdRecord, second_id, 0xc);

// Any object whose field at offset 4 points to an IdRecord.
struct RecordHolder {
    u32 unknown_00;
    guest::gptr<IdRecord> record;

    static constexpr u16 NO_ID = 0xffff;

    u16 first_id() const { return record->first_id; }
    bool has_second_id() const { return record->second_id != NO_ID; }
    u16 first_id_again() const { return record->first_id; }
    u16 second_id() const { return record->second_id; }
    bool has_first_id() const { return record->first_id != NO_ID; }
};
GUEST_OFFSET(RecordHolder, record, 4);

using guest::gptr;

GUEST_EXPORT(0x007559ac, RecordHolder::first_id);
GUEST_EXPORT(0x007559b8, RecordHolder::has_second_id);
GUEST_EXPORT(0x007559d4, RecordHolder::first_id_again);
GUEST_EXPORT(0x007559e0, RecordHolder::second_id);
GUEST_EXPORT(0x007559ec, RecordHolder::has_first_id);

static gptr<RecordHolder> some_holder(guest::Fuzz &f) {
    auto holder = f.object<RecordHolder>();
    auto record = f.object<IdRecord>();
    record->first_id = f.pick<u16>({0, 0xffff, 1, u16(f.number())});
    record->second_id = f.pick<u16>({0, 0xffff, 1, u16(f.number())});
    holder->record = record;
    return holder;
}

GUEST_FUZZ(0x007559ac, 200, [](guest::Fuzz &f) { f.arguments(some_holder(f)); });
GUEST_FUZZ(0x007559b8, 200, [](guest::Fuzz &f) { f.arguments(some_holder(f)); });
GUEST_FUZZ(0x007559d4, 200, [](guest::Fuzz &f) { f.arguments(some_holder(f)); });
GUEST_FUZZ(0x007559e0, 200, [](guest::Fuzz &f) { f.arguments(some_holder(f)); });
GUEST_FUZZ(0x007559ec, 200, [](guest::Fuzz &f) { f.arguments(some_holder(f)); });
