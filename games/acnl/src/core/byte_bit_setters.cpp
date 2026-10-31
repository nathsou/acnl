// Setters of one bit of a byte in objects whose type is not known yet: the bit is set when the flag is non-zero and
// cleared when it is zero.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u8 BIT_0 = 0x01;
constexpr u8 BIT_1 = 0x02;
constexpr u8 BIT_2 = 0x04;
constexpr u8 BIT_3 = 0x08;
constexpr u8 BIT_4 = 0x10;
constexpr u8 BIT_7 = 0x80;
constexpr u32 BYTE_00 = 0x00;
constexpr u32 BYTE_0D = 0x0d;
constexpr u32 BYTE_0E = 0x0e;
constexpr u32 BYTE_0F = 0x0f;

template <u32 Offset, u8 Mask>
void assign_byte_bit(gptr<u8> object, u32 on) {
    u8 byte = object[Offset];
    if (on != 0) {
        byte = byte | Mask;
    } else {
        byte = byte & ~Mask;
    }
    object[Offset] = byte;
}

}  // namespace

void assign_bit_7_of_byte_0d(gptr<u8> object, u32 on) { assign_byte_bit<BYTE_0D, BIT_7>(object, on); }
GUEST_EXPORT(0x002fbfc8, assign_bit_7_of_byte_0d);
void assign_bit_0_of_byte_0e(gptr<u8> object, u32 on) { assign_byte_bit<BYTE_0E, BIT_0>(object, on); }
GUEST_EXPORT(0x002fbfe0, assign_bit_0_of_byte_0e);
void assign_bit_7_of_byte_0f(gptr<u8> object, u32 on) { assign_byte_bit<BYTE_0F, BIT_7>(object, on); }
GUEST_EXPORT(0x002faf74, assign_bit_7_of_byte_0f);
void assign_bit_1_of_byte_00(gptr<u8> object, u32 on) { assign_byte_bit<BYTE_00, BIT_1>(object, on); }
GUEST_EXPORT(0x002fb750, assign_bit_1_of_byte_00);
void assign_bit_2_of_byte_00(gptr<u8> object, u32 on) { assign_byte_bit<BYTE_00, BIT_2>(object, on); }
GUEST_EXPORT(0x002fb768, assign_bit_2_of_byte_00);
void assign_bit_3_of_byte_00(gptr<u8> object, u32 on) { assign_byte_bit<BYTE_00, BIT_3>(object, on); }
GUEST_EXPORT(0x002fb780, assign_bit_3_of_byte_00);
void assign_bit_4_of_byte_00(gptr<u8> object, u32 on) { assign_byte_bit<BYTE_00, BIT_4>(object, on); }
GUEST_EXPORT(0x002fb798, assign_bit_4_of_byte_00);
