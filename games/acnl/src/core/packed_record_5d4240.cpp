// A packed record (unaligned fields) filled in by one function with many arguments. What it is is not known yet.
#include "item/item.hpp"

namespace {

// A 16-bit field at an unaligned offset.
struct Packed16 {
    u8 b[2];
    u16 get() const { return u16(b[0] | b[1] << 8); }
    void set(u16 v) {
        b[0] = u8(v);
        b[1] = u8(v >> 8);
    }
};

struct PackedRecord {
    u8 byte_00;
    u8 unknown_01;
    u8 byte_02;
    Packed16 half_03;
    u8 unknown_05;
    Packed16 half_06;  // bit 0 replaced
    u8 byte_08;
    Packed16 half_09;
    u8 unknown_0b;
    Packed16 half_0c;  // bit 0 replaced
    u8 byte_0e;
    u8 item_0f[4];  // an Item, unaligned
    u8 byte_13;
    u8 byte_14;
    u8 unknown_15;
    Packed16 flags_16;
};
GUEST_OFFSET(PackedRecord, byte_02, 2);
GUEST_OFFSET(PackedRecord, half_03, 3);
GUEST_OFFSET(PackedRecord, half_06, 6);
GUEST_OFFSET(PackedRecord, byte_08, 8);
GUEST_OFFSET(PackedRecord, half_09, 9);
GUEST_OFFSET(PackedRecord, half_0c, 0xc);
GUEST_OFFSET(PackedRecord, byte_0e, 0xe);
GUEST_OFFSET(PackedRecord, item_0f, 0xf);
GUEST_OFFSET(PackedRecord, byte_13, 0x13);
GUEST_OFFSET(PackedRecord, byte_14, 0x14);
GUEST_OFFSET(PackedRecord, flags_16, 0x16);
GUEST_SIZE(PackedRecord, 0x18);

constexpr u32 BIT_0 = 1;
constexpr u32 FLAGS_16_KEEP_MASK = ~0x1fu;  // bits 0-4 of the old value are dropped
constexpr u32 FLAGS_16_FIELD_MASK = 0xe;    // a 3-bit field in bits 1-3
constexpr u32 FLAGS_16_BIT_4 = 0x10;

}  // namespace

// Fills in the record; the arguments are stored as they are (truncated to the field widths). Returns the record.
PackedRecord &fill_packed_record(PackedRecord &self, u32 byte_0, u32 byte_2, u32 half_3, u32 bit_6, const Item &item,
                                 u32 byte_8, u32 half_9, u32 bit_c, u32 byte_14, u32 flags_16_bits,
                                 u32 field_value, u32 byte_13) {
    self.byte_00 = u8(byte_0);
    self.byte_02 = u8(byte_2);
    self.half_03.set(u16(half_3));
    self.half_06.set(u16((self.half_06.get() & ~BIT_0) | bit_6));
    self.byte_08 = u8(byte_8);
    self.half_09.set(u16(half_9));
    self.half_0c.set(u16((self.half_0c.get() & ~BIT_0) | bit_c));
    self.byte_0e = 0;
    std::memcpy(self.item_0f, &item, sizeof(Item));

    u32 old = self.flags_16.get() & FLAGS_16_KEEP_MASK;
    u32 value = flags_16_bits | (old & ~BIT_0);
    value &= ~FLAGS_16_FIELD_MASK;
    value |= (field_value << 1) & FLAGS_16_FIELD_MASK;
    value &= ~FLAGS_16_BIT_4;
    self.flags_16.set(u16(value));

    self.byte_14 = u8(byte_14);
    self.byte_13 = u8(byte_13);
    return self;
}
GUEST_EXPORT(0x005d4240, fill_packed_record);
