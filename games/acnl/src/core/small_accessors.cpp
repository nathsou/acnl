// Small accessors whose objects are not identified yet.
#include "guest/guest.hpp"

namespace {

// An object (65 callers) with a small index at 0x2e; nothing else about it is known.
struct IndexedObject {
    u8 unknown_00[0x2e];
    u8 index_2e;  // valid values are below INDEX_LIMIT
};
GUEST_OFFSET(IndexedObject, index_2e, 0x2e);

constexpr u8 INDEX_LIMIT = 8;

// A word in the block at 0x00a82b90 (offset 0x7f8), meaning not known yet.
inline guest::global<u32, 0x00a83388> value_a83388;

}  // namespace

// The index at 0x2e, or 0 when it is out of range.
u8 indexed_object_index(const IndexedObject &object) {
    return object.index_2e < INDEX_LIMIT ? object.index_2e : 0;
}
GUEST_EXPORT(0x002fe4c0, indexed_object_index);

void set_value_a83388(u32 value) {
    value_a83388 = value;
}
GUEST_EXPORT(0x002fe4d0, set_value_a83388);
