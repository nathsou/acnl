// Constructors of larger relatives of SavedRecordInner: the inner part is cleared, marked as holding no value, and
// followed by a few more fields that differ between the variants.
#include "item/item.hpp"
#include "save/saved_record.hpp"

namespace {

constexpr u8 STATE_NONE = 0xff;  // unknown_09 of a freshly cleared record
constexpr u8 BYTE_0A_DEFAULT = SavedRecordInner::RESET_BYTE_0A;
constexpr u8 BYTE_0F_DEFAULT = 0xff;
constexpr u8 VARIANT_A_BYTE_0E = 6;
constexpr u8 VARIANT_B_BYTE_0E = 4;
constexpr u8 VARIANT_C_BYTE_15 = 7;

inline constexpr guest::Function<0x00303cdc, void(gptr<void> inner)> clear_inner;

// The common start: the value is "none", the inner part is cleared, then the state bytes are set.
void reset_inner(SavedRecordInner &record) {
    record.value = SavedRecordInner::NONE_VALUE;
    clear_inner(guest::addr_of(record).cast<void>());
    record.unknown_09 = STATE_NONE;
    record.unknown_0a = BYTE_0A_DEFAULT;
}

struct RecordWithHalf : SavedRecordInner {
    u16 half_0c;
    u8 byte_0e;
    u8 byte_0f;
};
GUEST_OFFSET(RecordWithHalf, half_0c, 0x0c);
GUEST_OFFSET(RecordWithHalf, byte_0e, 0x0e);

struct RecordWithItems : SavedRecordInner {
    Item item_0c;
    Item item_10;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
};
GUEST_OFFSET(RecordWithItems, item_0c, 0x0c);
GUEST_OFFSET(RecordWithItems, item_10, 0x10);
GUEST_OFFSET(RecordWithItems, byte_14, 0x14);

}  // namespace

void construct_record_with_half_a(RecordWithHalf &record) {
    reset_inner(record);
    record.half_0c = 0;
    record.byte_0e = VARIANT_A_BYTE_0E;
    record.byte_0f = BYTE_0F_DEFAULT;
}
GUEST_EXPORT(0x005bd05c, construct_record_with_half_a);

void construct_record_with_half_b(RecordWithHalf &record) {
    reset_inner(record);
    record.half_0c = Item::EMPTY;
    record.byte_0e = VARIANT_B_BYTE_0E;
    record.byte_0f = BYTE_0F_DEFAULT;
}
GUEST_EXPORT(0x005bd2a0, construct_record_with_half_b);

void construct_record_with_items(RecordWithItems &record) {
    reset_inner(record);
    copy_item(record.item_10, *empty_item);
    copy_item(record.item_0c, record.item_10);
    record.byte_14 = BYTE_0F_DEFAULT;
    record.byte_15 = VARIANT_C_BYTE_15;
    record.byte_16 = BYTE_0F_DEFAULT;
}
GUEST_EXPORT(0x005bd864, construct_record_with_items);
