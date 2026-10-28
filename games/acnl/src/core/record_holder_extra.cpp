#include "guest/guest.hpp"

using guest::gptr;

// The record at offset 4 of a holder object: three 16-bit ids (0xffff means "none").
struct IdTripleRecord {
    u8 unknown_00[8];
    u16 id_08;
    u16 id_0a;
    u16 id_0c;
    u8 unknown_0e[2];
};
GUEST_OFFSET(IdTripleRecord, id_08, 0x8);
GUEST_OFFSET(IdTripleRecord, id_0a, 0xa);
GUEST_OFFSET(IdTripleRecord, id_0c, 0xc);

// Any object whose field at offset 4 points to an IdTripleRecord.
struct TripleHolder {
    static constexpr u16 NO_ID = 0xffff;

    u32 unknown_00;
    gptr<IdTripleRecord> record;

    u16 id_0a() const { return record->id_0a; }
    bool has_id_08() const { return record->id_08 != NO_ID; }
    u16 id_08() const { return record->id_08; }
    u16 id_0c() const { return record->id_0c; }
    bool has_id_08_again() const { return record->id_08 != NO_ID; }
};
GUEST_OFFSET(TripleHolder, record, 4);

GUEST_EXPORT(0x0075596c, TripleHolder::id_0a);
GUEST_EXPORT(0x00755978, TripleHolder::has_id_08);
GUEST_EXPORT(0x00755994, TripleHolder::id_08);
GUEST_EXPORT(0x007559a0, TripleHolder::id_0c);
GUEST_EXPORT(0x00755a08, TripleHolder::has_id_08_again);

static gptr<TripleHolder> some_triple_holder(guest::Fuzz &f) {
    auto holder = f.object<TripleHolder>();
    auto record = f.object<IdTripleRecord>();
    record->id_08 = f.pick<u16>({0, 0xffff, 1, u16(f.number())});
    holder->record = record;
    return holder;
}

GUEST_FUZZ(0x0075596c, 200, [](guest::Fuzz &f) { f.arguments(some_triple_holder(f)); });
GUEST_FUZZ(0x00755978, 200, [](guest::Fuzz &f) { f.arguments(some_triple_holder(f)); });
GUEST_FUZZ(0x00755994, 200, [](guest::Fuzz &f) { f.arguments(some_triple_holder(f)); });
GUEST_FUZZ(0x007559a0, 200, [](guest::Fuzz &f) { f.arguments(some_triple_holder(f)); });
GUEST_FUZZ(0x00755a08, 200, [](guest::Fuzz &f) { f.arguments(some_triple_holder(f)); });
