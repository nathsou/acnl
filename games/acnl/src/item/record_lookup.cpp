#include "guest/guest.hpp"
#include "item/item.hpp"

namespace {

// Still recompiled code:
inline constexpr guest::Function<0x0075dfe8, u32(gptr<void> object)> query_main_object;
inline constexpr guest::Function<0x00301e20, u32(u32 id)> is_valid_id;
inline constexpr guest::Function<0x00308971, u32(u32 id, gptr<void> base, u32 limit)> expected_index_for;
inline constexpr guest::Function<0x00309ef0, u32(gptr<void> inner)> inner_check_a;
inline constexpr guest::Function<0x003098b0, u32(gptr<void> record)> record_check_b;
inline constexpr guest::Function<0x00318960, u32(gptr<void> inner)> inner_kind;
inline constexpr guest::Function<0x00303cdc, void(gptr<void> inner)> clear_inner;
inline constexpr guest::Function<0x0027a48c, void(gptr<void> record)> reset_record_extra;

constexpr u32 NONE_VALUE = 0x21;

// A small record found inside a larger object; `inner` starts at 0x16.
struct RecordInner {
    u8 unknown_00[8];
    u8 value;
    u8 unknown_09;
    u8 unknown_0a;
};
GUEST_SIZE(RecordInner, 0x0b);

struct Record {
    u8 unknown_00[0x16];
    RecordInner inner;
    s8 unknown_21;
    u8 unknown_22;
    u8 unknown_23;
    u8 unknown_24;
};
GUEST_OFFSET(Record, inner, 0x16);
GUEST_OFFSET(Record, unknown_21, 0x21);

constexpr u32 RECORD_A_OFFSET = 0x173c6;
constexpr u32 RECORD_B_OFFSET = 0x173a0;
constexpr u32 RECORD_A_KIND = 8;
constexpr u32 RECORD_B_KIND = 7;
constexpr u32 INDEX_LIMIT = 10;

bool record_matches(Record &record, u32 kind, u32 expected_index) {
    gptr<Record> self = guest::addr_of(record);
    if (!inner_check_a(guest::addr_of(record.inner))) {
        return false;
    }
    if (record_check_b(self) != 0) {
        return false;
    }
    if (inner_kind(guest::addr_of(record.inner)) != kind) {
        return false;
    }
    u32 index = u32(s32(record.unknown_21));
    return index < INDEX_LIMIT && index == expected_index;
}

}  // namespace

// Reads the item number: the id without its flag bit.
GUEST_EXPORT(0x0030b6b8, Item::number);
GUEST_FUZZ(0x0030b6b8, 200, [](guest::Fuzz &f) { f.arguments(f.object<Item>()); });

// Whether the main object reports nothing (its query returns 0).
static bool main_object_idle() {
    gptr<void> object = *gptr<gptr<void>>(0x0095362c);
    return query_main_object(object) == 0;
}
GUEST_EXPORT(0x0030b6c4, main_object_idle);
GUEST_FUZZ(0x0030b6c4, 200, [](guest::Fuzz &f) { f.arguments(); });

// Finds the value stored in one of the two records of `base` that matches the id; NONE_VALUE when neither does.
static u32 lookup_record_value(gptr<u8> base, u32 id) {
    if (!is_valid_id(id)) {
        return NONE_VALUE;
    }
    u32 expected_index = expected_index_for(id, base, 10);
    Record &a = *gptr<Record>(base.addr() + RECORD_A_OFFSET);
    if (record_matches(a, RECORD_A_KIND, expected_index)) {
        return a.inner.value;
    }
    Record &b = *gptr<Record>(base.addr() + RECORD_B_OFFSET);
    if (record_matches(b, RECORD_B_KIND, expected_index)) {
        return b.inner.value;
    }
    return NONE_VALUE;
}
GUEST_EXPORT(0x0030b829, lookup_record_value);
GUEST_FUZZ(0x0030b829, 200, [](guest::Fuzz &f) {
    auto base = f.allocate(0x17500).cast<u8>();
    f.bytes(base, 0x17500);
    f.arguments(base, f.below(24));
});

// Puts a record back to its "none" state.
static void reset_record(Record &self) {
    self.inner.value = NONE_VALUE;
    clear_inner(guest::addr_of(self.inner));
    self.inner.unknown_09 = 0xff;
    self.inner.unknown_0a = 9;
    reset_record_extra(guest::addr_of(self));
    self.unknown_21 = s8(0xff);
    self.unknown_22 = 0;
    self.unknown_23 = 0;
    self.unknown_24 = 0;
}
GUEST_EXPORT(0x0030b8bc, reset_record);
GUEST_FUZZ(0x0030b8bc, 200, [](guest::Fuzz &f) {
    auto p = f.allocate(0x200);
    f.bytes(p, 0x200);
    f.arguments(p.cast<Record>());
});
