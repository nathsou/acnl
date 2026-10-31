#include "item/furniture_ref.hpp"

namespace {

// Four words describing something that may be unset (the first two words zero); meaning not known yet.
struct KeyRecord {
    u32 first;
    u32 second;
    u32 third;
    u32 fourth;

    bool is_valid() const { return first != 0 && second != 0; }
};
GUEST_SIZE(KeyRecord, 16);

constexpr u8 PROPERTY_CLASS_SHIFT = 4;
constexpr u8 PROPERTY_CLASS_A = 4;
constexpr u8 PROPERTY_CLASS_B = 5;

inline guest::global<u16[FurnitureRef::KIND_COUNT], 0x00a184e4> kind_table;
inline guest::global<u16, 0x00887086> default_table_value;

}  // namespace

// True unless both records are valid and equal.
bool key_records_differ(const KeyRecord &a, const KeyRecord &b) {
    if (!a.is_valid() || !b.is_valid()) {
        return true;
    }
    return !(a.third == b.third && a.fourth == b.fourth);
}
GUEST_EXPORT(0x007481ec, key_records_differ);

bool FurnitureRef::is_kind_in_group() const {
    if (kind >= KIND_COUNT) {
        return false;
    }
    switch (kind) {
    case 0x0b: case 0x0c: case 0x0d: case 0x0e: case 0x0f: case 0x10:
    case 0x11: case 0x13: case 0x14: case 0x15:
        return true;
    default:
        return false;
    }
}
GUEST_EXPORT(0x007484dc, FurnitureRef::is_kind_in_group);

bool FurnitureRef::has_byte_19_class_4_or_5() const {
    if (kind >= KIND_COUNT || kind == 0) {
        return false;
    }
    u8 property_class = byte_19 >> PROPERTY_CLASS_SHIFT;
    return property_class == PROPERTY_CLASS_A || property_class == PROPERTY_CLASS_B;
}
GUEST_EXPORT(0x00748534, FurnitureRef::has_byte_19_class_4_or_5);

u16 FurnitureRef::table_value() const {
    if (kind >= KIND_COUNT || kind == 0) {
        return default_table_value;
    }
    return kind_table[kind];
}
GUEST_EXPORT(0x00748574, FurnitureRef::table_value);

bool FurnitureRef::flag_1d_bit_0() const {
    return (flags_1d & 1) != 0;
}
GUEST_EXPORT(0x007485a8, FurnitureRef::flag_1d_bit_0);
