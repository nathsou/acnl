// Small functions from 0x005c0000 to 0x006a6000: a fill, the angle of an object towards another, property bytes
// set from items, and a lookup of save-data flags by index.
#include <bit>
#include <cmath>

#include "graphics/hemisphere_light.hpp"
#include "item/item.hpp"
#include "net/net_session.hpp"
#include "save/save_data.hpp"

using guest::gptr;

s16 atan2_angle(float y, float x);

namespace {

constexpr u32 FILL_BYTE = 0xff;
constexpr u32 TINY_BITS = 0x34000000;  // magnitudes whose bits are at or below this count as zero
constexpr u32 CATEGORY_2A = 0x2a;
constexpr u8 FLAG_BIT_5 = 0x20;
constexpr u32 OFFSET_LIMIT = 0xff;
constexpr u8 LOW_BITS_MASK = 7;
constexpr u8 LOW_BITS_CASE = 3;
constexpr u8 LOW_BITS_REPLACEMENT = 1;
constexpr u8 BITS_3_4_MASK = 0x18;
constexpr u8 BIT_3 = 0x08;
constexpr u32 FLAG_INDEX_LIMIT = 0x67;

inline constexpr guest::Function<0x00779638, void(gptr<u32> destination, u32 value)> fill_4_bytes;
inline constexpr guest::Function<0x00566374, bool()> all_report_one;
inline constexpr guest::Function<0x0075915c, bool(gptr<void> section, u32 index)> section_has_flag;
inline guest::global<s8, 0x00952640> value_952640;
inline guest::global<u8[FLAG_INDEX_LIMIT], 0x0088da45> flag_indices;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline constexpr guest::Function<0x0062478c, void(gptr<void> holder)> reset_pair_holder;

struct FloatPoint {
    u8 unknown_00[4];
    float x_04;
    u8 unknown_08[4];
    float z_0c;
    u8 unknown_10[0x20 - 0x10];
    u16 angle_20;
};
GUEST_OFFSET(FloatPoint, x_04, 4);
GUEST_OFFSET(FloatPoint, z_0c, 0xc);
GUEST_OFFSET(FloatPoint, angle_20, 0x20);

struct TargetPoint {
    u8 unknown_00[0x14];
    float x_14;
    u8 unknown_18[4];
    float z_1c;
};
GUEST_OFFSET(TargetPoint, x_14, 0x14);
GUEST_OFFSET(TargetPoint, z_1c, 0x1c);

struct ItemProperties {
    u8 unknown_000[0x26f];
    u8 offset_26f;
    u8 flags_270;
    u8 unknown_271[3];
    Item item_274;
};
GUEST_OFFSET(ItemProperties, offset_26f, 0x26f);
GUEST_OFFSET(ItemProperties, item_274, 0x274);

bool nonzero_magnitude(float value) {
    return s32(std::bit_cast<u32>(std::fabs(value))) > s32(TINY_BITS);
}

}  // namespace

gptr<u32> fill_ones(gptr<u32> destination) {
    fill_4_bytes(destination, FILL_BYTE);
    return destination;
}
GUEST_EXPORT(0x005c0204, fill_ones);
GUEST_FUZZ(0x005c0204, 50, [](guest::Fuzz &f) { f.arguments(f.allocate(8).cast<u32>()); });

// Reset of the pair holder at 0x22c of the session.
void reset_session_pair_holder() {
    reset_pair_holder(guest::addr_of((*net_session)->state_22c).cast<void>());
}
GUEST_EXPORT(0x006258d4, reset_session_pair_holder);
GUEST_FUZZ(0x006258d4, 50, [](guest::Fuzz &f) { f.arguments(); });

// 0 unless all report one; then the global signed byte.
s32 value_when_all_report_one() {
    return all_report_one() ? 0 : *value_952640;
}
GUEST_EXPORT(0x006a5b68, value_when_all_report_one);
GUEST_FUZZ(0x006a5b68, 50, [](guest::Fuzz &f) { f.arguments(); });

// Turns the point towards the other when they are not at the same place.
void face_target(FloatPoint &point, TargetPoint &target) {
    float dx = point.x_04 - target.x_14;
    float dz = point.z_0c - target.z_1c;
    if (nonzero_magnitude(dx) || nonzero_magnitude(dz)) {
        point.angle_20 = u16(atan2_angle(dx, dz));
    }
}
GUEST_EXPORT(0x0060e9fc, face_target);
GUEST_FUZZ(0x0060e9fc, 100, [](guest::Fuzz &f) {
    auto point = f.object<FloatPoint>();
    auto target = f.object<TargetPoint>();
    point->x_04 = f.real();
    point->z_0c = f.real();
    target->x_14 = f.below(3) == 0 ? point->x_04 : f.real();
    target->z_1c = f.below(3) == 0 ? point->z_0c : f.real();
    f.arguments(point, target);
});

// Notes a category-0x2a item in the flags and the item's offset in its category (0 when it does not fit a byte).
void note_item_offset(ItemProperties &object, const Item &item) {
    if (item.category() == CATEGORY_2A) {
        object.flags_270 |= FLAG_BIT_5;
    }
    u32 offset = u32(item_offset_in_category(item));
    object.offset_26f = offset > OFFSET_LIMIT ? 0 : u8(offset);
}
GUEST_EXPORT(0x005cbea4, note_item_offset);
GUEST_FUZZ(0x005cbea4, 100, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(2) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    f.arguments(f.object<ItemProperties>(), item);
});

// The flags' low three bits 3 become 1; and unless the item at 0x274 is of kind 2 bits 3-4 become 1 (bit 3).
void normalize_flags_270(ItemProperties &object) {
    if ((object.flags_270 & LOW_BITS_MASK) == LOW_BITS_CASE) {
        object.flags_270 = u8((object.flags_270 & ~LOW_BITS_MASK) | LOW_BITS_REPLACEMENT);
    }
    if (!object.item_274.is_kind_2()) {
        object.flags_270 = u8((object.flags_270 & ~BITS_3_4_MASK) | BIT_3);
    }
}
GUEST_EXPORT(0x005cc024, normalize_flags_270);
GUEST_FUZZ(0x005cc024, 100, [](guest::Fuzz &f) {
    auto object = f.object<ItemProperties>();
    object->flags_270 = u8(f.number());
    object->item_274.id = f.below(2) != 0 ? Item::EMPTY : u16(0x4000 + f.below(8));
    f.arguments(object);
});

// Whether the save-data flag listed for the index is set (false for indices from 0x67 on).
bool save_flag_for_index(u32 index) {
    if (index >= FLAG_INDEX_LIMIT) {
        return false;
    }
    return section_has_flag(guest::addr_of(get_save_data()->small_values_4be80[0]).cast<void>(), (*flag_indices)[index]);
}
GUEST_EXPORT(0x005ca1fc, save_flag_for_index);
GUEST_FUZZ(0x005ca1fc, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 5, 0x66, 0x67, f.number()})); });
