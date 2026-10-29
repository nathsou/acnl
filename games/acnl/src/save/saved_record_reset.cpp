// Empties a saved record.
#include "core/word_pair.hpp"
#include "save/saved_record.hpp"

using guest::gptr;

namespace {

constexpr u8 RESET_UNKNOWN_22 = 0xff;  // meaning not known yet
constexpr u32 NEVER_LOW = 0xffffffff;  // the largest signed 64-bit value, in two words
constexpr u32 NEVER_HIGH = 0x7fffffff;

}  // namespace

// Sets the first eight bytes of the inner part to the largest signed 64-bit value (the original clears them first).
void clear_inner(gptr<WordPair> inner) {
    inner->first = NEVER_LOW;
    inner->second = NEVER_HIGH;
}
GUEST_EXPORT(0x00303cdc, clear_inner);
GUEST_FUZZ(0x00303cdc, 100, [](guest::Fuzz &f) { f.arguments(f.object<WordPair>()); });

// Empties the record that `inner` is the inner part of: no value, no index, the reset bytes.
void reset_saved_record(gptr<SavedRecordInner> inner) {
    gptr<SavedRecord> record(inner.addr() - u32(offsetof(SavedRecord, inner)));
    record->inner.value = SavedRecordInner::NONE_VALUE;
    clear_inner(inner.cast<WordPair>());
    record->inner.unknown_09 = SavedRecordInner::RESET_BYTE_09;
    record->inner.unknown_0a = SavedRecordInner::RESET_BYTE_0A;
    record->unknown_21 = SavedRecord::NO_INDEX;
    record->unknown_22 = RESET_UNKNOWN_22;
}
GUEST_EXPORT(0x0030a7e0, reset_saved_record);
GUEST_FUZZ(0x0030a7e0, 200, [](guest::Fuzz &f) {
    auto record = f.object<SavedRecord>();
    f.arguments(guest::addr_of(record->inner));
});
