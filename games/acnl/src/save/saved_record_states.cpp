// Four questions on the state byte (0x9) of a saved record's inner part; all are false while the record has no value.
#include "guest/guest.hpp"
#include "save/saved_record.hpp"

namespace {

constexpr u8 STATE_NONE = 0;
constexpr u8 STATE_3 = 3;
constexpr u8 STATE_LIMIT_2 = 2;
constexpr u8 STATE_LIMIT_3 = 3;

gptr<SavedRecordInner> fuzz_record(guest::Fuzz &f) {
    auto record = f.object<SavedRecordInner>();
    if (f.below(4) != 0) {
        record->value = u8(f.below(SavedRecordInner::NONE_VALUE));
    }
    record->unknown_09 = u8(f.pick<u32>({0, 1, 2, 3, f.number()}));
    return record;
}

}  // namespace

// Has a value and its state is not 3.
bool saved_record_state_is_not_3(const SavedRecordInner &record) {
    return record.has_value() && record.unknown_09 != STATE_3;
}
GUEST_EXPORT(0x0030988c, saved_record_state_is_not_3);
GUEST_FUZZ(0x0030988c, 200, [](guest::Fuzz &f) { f.arguments(fuzz_record(f)); });

// Has a value and its state is 0.
bool saved_record_state_is_none(const SavedRecordInner &record) {
    return record.has_value() && record.unknown_09 == STATE_NONE;
}
GUEST_EXPORT(0x0030e4e8, saved_record_state_is_none);
GUEST_FUZZ(0x0030e4e8, 200, [](guest::Fuzz &f) { f.arguments(fuzz_record(f)); });

// Has a value and its state is below 2.
bool saved_record_state_is_below_2(const SavedRecordInner &record) {
    return record.has_value() && record.unknown_09 < STATE_LIMIT_2;
}
GUEST_EXPORT(0x0030e514, saved_record_state_is_below_2);
GUEST_FUZZ(0x0030e514, 200, [](guest::Fuzz &f) { f.arguments(fuzz_record(f)); });

// Has a value and its state is below 3.
bool saved_record_state_is_below_3(const SavedRecordInner &record) {
    return record.has_value() && record.unknown_09 < STATE_LIMIT_3;
}
GUEST_EXPORT(0x0030e540, saved_record_state_is_below_3);
GUEST_FUZZ(0x0030e540, 200, [](guest::Fuzz &f) { f.arguments(fuzz_record(f)); });
