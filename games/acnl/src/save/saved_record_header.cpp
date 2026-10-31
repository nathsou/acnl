// The header of a saved record: clearing it and copying it.
#include <cstring>

#include "save/saved_record.hpp"

void SavedRecordHeader::clear() {
    std::memset(bytes, 0, SIZE);
}
GUEST_EXPORT(0x0027a48c, SavedRecordHeader::clear);

void SavedRecordHeader::copy_from(const SavedRecordHeader &other) {
    std::memcpy(bytes, other.bytes, SIZE);
}
GUEST_EXPORT(0x0027a42c, SavedRecordHeader::copy_from);
