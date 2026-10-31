// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "item/item.hpp"

#include <bit>

using guest::gptr;

// f_006b04f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b04f0 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_006b04f0(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x6b0524u;  // (from the original)
    r0 = r0 + 0x2cu;  // (from the original)
    r0 = call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x6b0540u;  // (from the original)
    r0 = r4 + 0x274u;  // (from the original)
    r0 = call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006b04f0
GUEST_EXPORT(0x006b04f0, d_006b04f0::f_006b04f0);

// f_006b0824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b0824 {

struct __attribute__((packed)) Object_006b0824_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_006b0824_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006b0824_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006b0824_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006b0824_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006b0824_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006b0824_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006b0824_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006b0824_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006b0824_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x0022c7c8, u32(u32, u32, u32, u32)> call_0022c7c8;  // (from the original)
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32, u32)> call_002b7c68;  // (from the original)
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> call_002bc928;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005245bc, u32(u32, u32, u32, u32)> call_005245bc;  // (from the original)
inline constexpr guest::Function<0x005d6fac, u32(u32, u32, u32, u32)> call_005d6fac;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_006b0824(gptr<Object_006b0824_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = 0u;
    arg0->word_4 = u32(r5);
    arg0->byte_8 = u8(r5);
    ea = 0x881828u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(ea));
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r5);
    r1 = 0x9081ecu;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->byte_18 = u8(r5);
    arg0->word_1c = u32(r5);
    ea = r0 + 0x20u;  // (from the original)
    arg0->word_20 = u32(r5);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002bc928(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x8f8c84u;  // (from the original)
    r2 = r1 + 0x34u;  // (from the original)
    *gptr<u32>(r0 - 0x24u) = u32(r1);  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c7c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0;
    *gptr<u32>(ea) = u32(0x8f2db4u);  // (from the original)
    ea = r0 + 0x204u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x208u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x20cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x210u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    r1 = 0x1eu;  // (from the original)
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0xau;  // (from the original)
    r1 = 0x6fu;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d6fac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b7c68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c7c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f428cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x204u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b6de0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7604(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x21u;  // (from the original)
    r0 = r0 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005245bc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x10u;  // (from the original)
    r2 = 0x21u;  // (from the original)
    r1 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x909f18u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x42u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    r1 = 0x10u;  // (from the original)
    do {
L_6b09c8:;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r1 = 1u;
    r3 = r1;
    *gptr<u8>(r4 + 0x5cu) = u8(r1);  // (from the original)
    r1 = 0x2b6de0u;  // (from the original)
    r2 = 0xe0u;  // (from the original)
    r0 = r4 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7604(r0, r1, r2, r3);
    r1 = 0x2b6de0u;  // (from the original)
    r3 = 1u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7604(r0, r1, r2, r3);
    r2 = 0x16b4u;  // (from the original)
    r0 = r0 - 0x15d0u;  // (from the original)
    r1 = 0x19u;  // (from the original)
    *gptr<u32>(r2 + r0) = u32(r1);
    r3 = r2 ^ u32(s32(r1) >> 1);
    r2 = 0x330u;  // (from the original)
    *gptr<u32>(r3 + r0) = u32(r1);
    r1 = 0x6ce60cu;  // (from the original)
    r3 = 0x18u;  // (from the original)
    r0 = r0 + 0x16bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x16bcu;  // (from the original)
    r1 = r0 + 0x6000u;  // (from the original)
    r2 = r0;
    *gptr<u32>(r1 + 0x33cu) = u32(r5);  // (from the original)
    *gptr<u32>(r1 + 0x340u) = u32(r5);  // (from the original)
    *gptr<u32>(r1 + 0x344u) = u32(r5);  // (from the original)
    *gptr<u32>(r1 + 0x348u) = u32(r5);  // (from the original)
    *gptr<u32>(r1 + 0x34cu) = u32(r5);  // (from the original)
    *gptr<u32>(r1 + 0x350u) = u32(r5);  // (from the original)
    *gptr<u32>(r1 + 0x354u) = u32(r5);  // (from the original)
    *gptr<u8>(r1 + 0x358u) = u8(r5);  // (from the original)
    *gptr<u8>(r1 + 0x359u) = u8(r5);  // (from the original)
    *gptr<u8>(r1 + 0x35au) = u8(r5);  // (from the original)
    *gptr<u8>(r1 + 0x35bu) = u8(r5);  // (from the original)
    *gptr<u32>(r0 + 0x635cu) = u32(r5);  // (from the original)
    r0 = r2 + 0x6360u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b7c68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b7c68(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x3cu;  // (from the original)
    r0 = r0 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x19u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x14u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x14u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x28u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x1eu;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x1eu;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x6a38u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006b0824
GUEST_EXPORT(0x006b0824, d_006b0824::f_006b0824);

// f_006b0b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b0b74 {

struct __attribute__((packed)) Object_006b0b74_0 {
    u32 word_0;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_006b0b74_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006b0b74_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x0022c87c, u32(u32, u32, u32, u32)> call_0022c87c;  // (from the original)
inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x002b7c94, u32(u32, u32, u32, u32)> call_002b7c94;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_006b0b74(gptr<Object_006b0b74_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f8c84u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r2 = r1 + 0x34u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_24 = u32(r2);
    r0 = r0 + 0x6a38u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x5cu;  // (from the original)
    r0 = call_002b7c94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x5cu;  // (from the original)
    r0 = call_002b7c94(r0, r1, r2, r3);
    r1 = 0x6ce65cu;  // (from the original)
    r4 = r0 - 0x6360u;  // (from the original)
    r3 = 0x18u;  // (from the original)
    r2 = 0x330u;  // (from the original)
    r0 = r0 - 0x4ca4u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x15d0u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x15d0u;  // (from the original)
    r3 = 1u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0xe0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x140cu;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x140cu;  // (from the original)
    r3 = 1u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0xe0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x12ccu;  // (from the original)
    *gptr<u32>(r4 + 0xe30u) = u32(0x8f428cu);  // (from the original)
    r1 = 0x909f18u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xffffff2cu;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe4u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe0u;  // (from the original)
    r0 = call_002b6ef8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x204u;  // (from the original)
    r0 = call_0022c87c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f2db4u;  // (from the original)
    *gptr<u32>(r0 - 0x434u) = u32(r1);  // (from the original)
    r0 = r0 - 0x5cu;  // (from the original)
    r0 = call_002b7c94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x100u;  // (from the original)
    r0 = call_005d703c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x214u;  // (from the original)
    r0 = call_0022c87c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006b0b74
GUEST_EXPORT(0x006b0b74, d_006b0b74::f_006b0b74);

// f_006b127c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b127c {

struct __attribute__((packed)) Object_006b127c_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_006b127c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006b127c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006b127c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006b127c_0, word_14, 0x14);  // (from the original)


void f_006b127c(gptr<Object_006b127c_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 res = 0;
    S0 = S0 * S0;
    arg0->word_14 = u32(r1);
    res = r3 - r2;
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    arg0->word_0 = u32(r2);
    if (res >> 0x1f == ((r3 ^ r2) & (r3 ^ res)) >> 0x1f) {  // (from the original)
        r2 = r3;
    }
    arg0->word_4 = u32(r2);
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_006b127c
GUEST_EXPORT(0x006b127c, d_006b127c::f_006b127c);

// f_006b1468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1468 {

struct __attribute__((packed)) Object_006b1468_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x1b];  // (not used here)
    u32 word_34;
    u8 byte_38;
    u8 byte_39;
    u8 unknown_3a[0x2];  // (not used here)
    u32 word_3c;
    u32 word_40;
};
GUEST_OFFSET(Object_006b1468_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_40, 0x40);  // (from the original)


void f_006b1468(gptr<Object_006b1468_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    float S0 = 0;
    r2 = ~0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x6b14b0u));  // (from the original)
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    arg0->word_c = u32(std::bit_cast<u32>(S0));
    r1 = 0u;
    arg0->byte_10 = u8(r1);
    arg0->byte_11 = u8(r1);
    S0 = std::bit_cast<float>(*gptr<u32>(0x6b14b4u));  // (from the original)
    arg0->word_14 = u32(r1);
    arg0->byte_18 = u8(r1);
    arg0->word_34 = u32(std::bit_cast<u32>(S0));
    arg0->byte_38 = u8(r1);
    arg0->byte_39 = u8(r1);
    arg0->word_3c = u32(r1);
    arg0->word_40 = u32(r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_006b1468
GUEST_EXPORT(0x006b1468, d_006b1468::f_006b1468);

// f_006b14b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b14b8 {

inline constexpr guest::Function<0x00825b04, u32(u32, u32, u32, u32)> call_00825b04;  // (from the original)

u32 f_006b14b8(u32 r0) {
    r0 = r0 + 0x3cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00825b04(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x3cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006b14b8
GUEST_EXPORT(0x006b14b8, d_006b14b8::f_006b14b8);

// f_006b17c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b17c4 {

inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;  // (from the original)

u32 f_006b17c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    r12 = r2;
    r2 = r3;
    if (r1 == 0) {
        r1 = r12;
        r0 = r0 + 0x198u;  // (from the original)
        return call_005e2c98(r0, r1, r2, r3);
    }
    if (r1 != 1u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r12;
    r0 = r0 + 0x25cu;  // (from the original)
    return call_005e2c98(r0, r1, r2, r3);
}

}  // namespace d_006b17c4
GUEST_EXPORT(0x006b17c4, d_006b17c4::f_006b17c4);

// f_006b19c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b19c0 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_006b19c0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 0u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006b19c0
GUEST_EXPORT(0x006b19c0, d_006b19c0::f_006b19c0);

// f_006b1a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1a64 {

inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_006b1a64(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r0 + 0x198u;  // (from the original)
    r0 = call_005e2e50(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x198u;  // (from the original)
    r0 = call_005e2f94(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r4 + 0x25cu;  // (from the original)
    r0 = call_005e2e50(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x25cu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_005e2f94(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006b1a64
GUEST_EXPORT(0x006b1a64, d_006b1a64::f_006b1a64);

// f_006b1a98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1a98 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)

u32 f_006b1a98(u32 r0) {
    r0 = r0 + 0x24u;  // (from the original)
    return call_001323b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006b1a98
GUEST_EXPORT(0x006b1a98, d_006b1a98::f_006b1a98);

// f_006b1aa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1aa0 {

struct __attribute__((packed)) Object_006b1aa0_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Object_006b1aa0_0, word_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_006b1aa0(gptr<Object_006b1aa0_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = arg0->word_44;
    r0 = r0 + 0x24u;  // (from the original)
    *gptr<u32>(r1 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r2 = u32(*gptr<u8>(r1 + 0xb7u)) & 0xcfu;  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(r2);  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_00568c10(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006b1aa0
GUEST_EXPORT(0x006b1aa0, d_006b1aa0::f_006b1aa0);

// f_006b1d88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1d88 {

struct __attribute__((packed)) Object_006b1d88_0 {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(Object_006b1d88_0, word_c0c, 0xc0c);  // (from the original)

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> call_004bfd70;  // (from the original)

u32 f_006b1d88(gptr<Object_006b1d88_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    r0 = arg0->word_c0c;
    if (r0 == 0) {
        return r0;
    }
    r0 = r0 + 4u;
    r3 = 0u;
    return call_004bfd70(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_006b1d88
GUEST_EXPORT(0x006b1d88, d_006b1d88::f_006b1d88);

// f_006b1da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1da4 {

struct __attribute__((packed)) Object_006b1da4_0 {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(Object_006b1da4_0, word_c0c, 0xc0c);  // (from the original)

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> call_004bfd70;  // (from the original)

u32 f_006b1da4(gptr<Object_006b1da4_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_c0c;
    if (r0 == 0) {
        return r0;
    }
    r0 = r0 + 4u;
    return call_004bfd70(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006b1da4
GUEST_EXPORT(0x006b1da4, d_006b1da4::f_006b1da4);

// f_006b2c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b2c68 {

inline constexpr guest::Function<0x007e666c, u32(u32, u32, u32, u32)> call_007e666c;  // (from the original)

u32 f_006b2c68(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res = r1 - 4u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r1 ^ 4u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    r4 = r0 + 0xc14u;  // (from the original)
    r5 = r0 + 0xc28u;  // (from the original)
    if (res == 0) {
        goto L_6b2cc4;
    }
    if (nf == vf) {
        goto L_6b2c98;
    }
    zf = r1 == 1u;
    if (!zf) {
        zf = r1 == 2u;
    }
    if (zf) {
        goto L_6b2cdc;
    }
L_6b2c94:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6b2c98:;
    if (r1 == 0x10u) {  // (from the original)
        goto L_6b2cdc;
    }
    if (r1 != 0x20u) {  // (from the original)
        guest::preempt();
        goto L_6b2c94;
    }
    r0 = *gptr<u32>(r5);
    if (r0 == 0) {
        guest::preempt();
        goto L_6b2c94;
    }
L_6b2cb4:;
    r1 = 0x6b3a9cu;  // (from the original)
    r2 = 0u;
    r0 = call_007e666c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6b2cc4:;
    r0 = *gptr<u32>(r4);
    if (r0 == 0) {
        goto L_6b2cdc;
    }
    r1 = 0x6b3a9cu;  // (from the original)
    r2 = 0u;
    r0 = call_007e666c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_6b2cdc:;
    r0 = *gptr<u32>(r5);
    if (r0 != 0) {
        r1 = 0x6b3a9cu;  // (from the original)
        r2 = 0u;
        r0 = call_007e666c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = *gptr<u32>(r4 + 0x2cu);  // (from the original)
    if (r0 != 0) {
        guest::preempt();
        goto L_6b2cb4;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006b2c68
GUEST_EXPORT(0x006b2c68, d_006b2c68::f_006b2c68);

// f_006b2f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b2f08 {

struct __attribute__((packed)) Object_006b2f08_0 {
    u8 unknown_0[0xc10];  // (not used here)
    u32 word_c10;
};
GUEST_OFFSET(Object_006b2f08_0, word_c10, 0xc10);  // (from the original)

inline constexpr guest::Function<0x0013c1e8, u32(u32, u32, u32, u32)> call_0013c1e8;  // (from the original)
inline constexpr guest::Function<0x0073df34, u32(u32, u32, u32, u32)> call_0073df34;  // (from the original)
inline constexpr guest::Function<0x0073df8c, u32(u32, u32, u32, u32)> call_0073df8c;  // (from the original)

u32 f_006b2f08(gptr<Object_006b2f08_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r7 = r2;
    r5 = r1;
    r0 = arg0->word_c10;
    r2 = r4 + 0xcd0u;  // (from the original)
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0013c1e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        *gptr<u32>(r5) = u32(r7);
        r6 = 0u;
        r1 = r7;
        *gptr<u32>(r5 + 4u) = u32(*gptr<u32>(r4 + 0xcd4u) & ~0xff000000u);  // (from the original)
        r3 = r13;
        r2 = r6;
        *gptr<u32>(r5 + 8u) = u32(*gptr<u32>(r4 + 0xcdcu));  // (from the original)
        *gptr<u32>(r13) = u32(r6);
        r0 = *gptr<u32>(r4 + 0xc10u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0073df8c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            r0 = r6;
        } else {
            r0 = *gptr<u32>(r13);
        }
        *gptr<u8>(r5 + 0xdu) = u8(r6);  // (from the original)
        *gptr<u8>(r5 + 0xcu) = u8(r0 & 3u);  // (from the original)
        r0 = *gptr<u32>(r4 + 0xc10u);  // (from the original)
        r6 = 0u;
        r2 = r4 + 0xce8u;  // (from the original)
        r1 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0073df34(r0, r1, r2, r3);
        if (r0 != 0) {
            r6 = *gptr<u32>(r4 + 0xce8u);  // (from the original)
        }
        r0 = (r6 & 4u) >> 2;
        r1 = (r6 & 8u) >> 3;
        *gptr<u8>(r5 + 0xeu) = u8(r0);  // (from the original)
        *gptr<u8>(r5 + 0xfu) = u8(r1);  // (from the original)
        *gptr<u8>(r5 + 0x10u) = u8((r6 & 2u) >> 1);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006b2f08
GUEST_EXPORT(0x006b2f08, d_006b2f08::f_006b2f08);

// f_006b3104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b3104 {


u32 f_006b3104(u32 r0_unused, u32 r1, float S0, float S1) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r2 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S2 = 0;
    r2 = 0x10003e9u;  // (from the original)
    res = r1 - r2;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r1 ^ r2) & (r1 ^ res)) >> 0x1f;  // (from the original)
    r0 = r1 - r2;
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if (!zf && nf == vf) {
        goto L_6b3194;
    }
    r2 = r2 - 0x56u;  // (from the original)
    res = r1 - r2;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r1 ^ r2) & (r1 ^ res)) >> 0x1f;  // (from the original)
    r0 = r1 - r2;
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if (!zf && nf == vf) {
        goto L_6b3178;
    }
    res = 0xfefffc72u + r1;  // (from the original)
    zf = res == 0;
    r0 = res;
    if (!zf) {
        zf = r0 == 1u;
    }
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    zf = r0 == 3u;
    if (!zf) {
        zf = r0 == 4u;
    }
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
L_6b3148:;
    S1 = std::bit_cast<float>(*gptr<u32>(0x6b31e4u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x6b31e8u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        S0 = S1;
        S1 = std::bit_cast<float>(*gptr<u32>(0x6b31ecu));  // (from the original)
        S0 = S0 * S1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S2;
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x6b31ecu));  // (from the original)
    S0 = S0 * S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_6b3178:;
    zf = r0 == 1u;
    if (!zf) {
        zf = r0 == 2u;
    }
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    zf = r0 == 0x33u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x55u;  // (from the original)
    }
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    guest::preempt();
    goto L_6b3148;
L_6b3194:;
    res = r0 - 0x52u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ 0x52u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if (!(!zf && nf == vf)) {
        zf = r0 == 6u;
        if (!zf) {
            zf = r0 == 7u;
        }
        if (zf) {
            S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        zf = r0 == 0x40u;  // (from the original)
        if (!zf) {
            zf = r0 == 0x42u;  // (from the original)
        }
        if (zf) {
            S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        guest::preempt();
        goto L_6b3148;
    }
    zf = r0 == 0x53u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x83u;  // (from the original)
    }
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    zf = r0 == 0xa4u;  // (from the original)
    if (!zf) {
        zf = r0 == 0xa6u;  // (from the original)
    }
    if (!zf) {
        guest::preempt();
        goto L_6b3148;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x6b31f0u));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006b3104
GUEST_EXPORT(0x006b3104, d_006b3104::f_006b3104);

// f_006b3384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b3384 {

inline constexpr guest::Function<0x007e666c, u32(u32, u32, u32, u32)> call_007e666c;  // (from the original)

u32 f_006b3384(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res = r1 - 4u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r1 ^ 4u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    r4 = r0 + 0xc14u;  // (from the original)
    r5 = r0 + 0xc28u;  // (from the original)
    if (res == 0) {
        goto L_6b33e0;
    }
    if (nf == vf) {
        goto L_6b33b4;
    }
    zf = r1 == 1u;
    if (!zf) {
        zf = r1 == 2u;
    }
    if (zf) {
        goto L_6b33f8;
    }
L_6b33b0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6b33b4:;
    if (r1 == 0x10u) {  // (from the original)
        goto L_6b33f8;
    }
    if (r1 != 0x20u) {  // (from the original)
        guest::preempt();
        goto L_6b33b0;
    }
    r0 = *gptr<u32>(r5);
    if (r0 == 0) {
        guest::preempt();
        goto L_6b33b0;
    }
L_6b33d0:;
    r1 = 0x6b3f8cu;  // (from the original)
    r2 = 0u;
    r0 = call_007e666c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6b33e0:;
    r0 = *gptr<u32>(r4);
    if (r0 == 0) {
        goto L_6b33f8;
    }
    r1 = 0x6b3f8cu;  // (from the original)
    r2 = 0u;
    r0 = call_007e666c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_6b33f8:;
    r0 = *gptr<u32>(r5);
    if (r0 != 0) {
        r1 = 0x6b3f8cu;  // (from the original)
        r2 = 0u;
        r0 = call_007e666c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = *gptr<u32>(r4 + 0x2cu);  // (from the original)
    if (r0 != 0) {
        guest::preempt();
        goto L_6b33d0;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006b3384
GUEST_EXPORT(0x006b3384, d_006b3384::f_006b3384);

// f_006b3d50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b3d50 {

struct __attribute__((packed)) Object_006b3d50_0 {
    u8 unknown_0[0xcff];  // (not used here)
    u8 byte_cff;
};
GUEST_OFFSET(Object_006b3d50_0, byte_cff, 0xcff);  // (from the original)

inline constexpr guest::Function<0x0071bfa0, u32(u32, u32, u32, u32)> call_0071bfa0;  // (from the original)
inline constexpr guest::Function<0x00825c64, u32(u32, u32, u32, u32)> call_00825c64;  // (from the original)

u32 f_006b3d50(gptr<Object_006b3d50_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    if (u32(arg0->byte_cff) == 0) {
        goto L_6b3d84;
    }
    res = 0xfefffc4au + r5;  // (from the original)
    zf = res == 0;
    r0 = res;
    if (!zf) {
        zf = r0 == 1u;
    }
    if (zf) {
        goto L_6b3d84;
    }
    zf = r0 == 0x1eu;  // (from the original)
    if (!zf) {
        zf = r0 == 0x1fu;  // (from the original)
    }
    if (!zf) {
        goto L_6b3f4c;
    }
L_6b3d84:;
    r1 = 0x10004b5u;  // (from the original)
    res = r5 - r1;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r5 ^ r1) & (r5 ^ res)) >> 0x1f;  // (from the original)
    r0 = r5 - r1;
    if (res == 0) {
        goto L_6b3f18;
    }
    if (nf != vf) {
        r0 = 0xfefffc43u;  // (from the original)
        r6 = r1 - u32(s32(r0) >> 0x15);  // (from the original)
        res = r0 + r5;
        r0 = res;
        if (res == 0) {
            goto L_6b3e34;
        }
        if (r0 == 1u) {
            goto L_6b3eb0;
        }
        if (r0 == 3u) {
            goto L_6b3efc;
        }
        if (r0 != 0xf7u) {  // (from the original)
            goto L_6b3f30;
        }
        goto L_6b3f18;
    }
    if (r0 == 5u) {
        goto L_6b3f18;
    }
    res = r0 - 0x2cau;  // (from the original)
    r0 = res;
    if (res != 0) {
        if (r0 != 1u) {
            goto L_6b3f30;
        }
    } else {
        if (*gptr<u32>(r4 + 0xb18u) != 1u) {  // (from the original)
            goto L_6b3f4c;
        }
        r1 = 0x100077fu;  // (from the original)
        r0 = r4 + 0x1cu;  // (from the original)
        r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            goto L_6b3f4c;
        }
        goto L_6b3f30;
    }
    if (*gptr<u32>(r4 + 0xb18u) != 2u) {  // (from the original)
        goto L_6b3f4c;
    }
    r1 = 0x1000780u;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
    goto L_6b3f30;
L_6b3e34:;
    r1 = 0x100038cu;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
    r1 = 0x100038fu;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
    r1 = r6;
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
    r1 = 0x10004bdu;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
    r1 = 0x100038du;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
    goto L_6b3f30;
L_6b3eb0:;
    r1 = r6;
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
    r1 = 0x10004bfu;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
    r1 = 0x10004c0u;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
    goto L_6b3f30;
L_6b3efc:;
    r1 = 0x10003b3u;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
    goto L_6b3f30;
L_6b3f18:;
    r1 = 0x10004bbu;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00825c64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6b3f4c;
    }
L_6b3f30:;
    r1 = r5;
    r0 = *gptr<u32>(0x94cffcu);  // (from the original)
    r0 = call_0071bfa0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 1u;
        goto L_6b3f50;
    }
L_6b3f4c:;
    r0 = 0u;
L_6b3f50:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006b3d50
GUEST_EXPORT(0x006b3d50, d_006b3d50::f_006b3d50);

// f_006b4170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b4170 {

struct __attribute__((packed)) Object_006b4170_0 {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(Object_006b4170_0, word_c0c, 0xc0c);  // (from the original)

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> call_004bfd70;  // (from the original)

u32 f_006b4170(gptr<Object_006b4170_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_c0c;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r0 + 4u;
    r3 = 0u;
    r0 = call_004bfd70(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    res = r0 & 0xffu;  // (from the original)
    *gptr<u8>(r4 + 0xcf4u) = u8(res);  // (from the original)
    if (res == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006b4170
GUEST_EXPORT(0x006b4170, d_006b4170::f_006b4170);

// f_006b41a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b41a4 {

struct __attribute__((packed)) Object_006b41a4_0 {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(Object_006b41a4_0, word_c0c, 0xc0c);  // (from the original)

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> call_004bfd70;  // (from the original)

u32 f_006b41a4(gptr<Object_006b41a4_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_c0c;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r0 + 4u;
    r0 = call_004bfd70(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    res = r0 & 0xffu;  // (from the original)
    *gptr<u8>(r4 + 0xcf4u) = u8(res);  // (from the original)
    if (res == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006b41a4
GUEST_EXPORT(0x006b41a4, d_006b41a4::f_006b41a4);

// f_006b4aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b4aa8 {


u32 f_006b4aa8(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    if (r1 == r2) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = r0 - r1;
    r1 = r2 - r1;
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0)))) * (S1 - S0) / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    S0 = S1 + S0;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006b4aa8
GUEST_EXPORT(0x006b4aa8, d_006b4aa8::f_006b4aa8);

// f_006b4adc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b4adc {


u32 f_006b4adc(u32 r0, u32 r1, float S0, float S1, float S2) {
    if (u32(S1 == S2)) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = r1 - r0;
    S2 = S2 - S1;
    S1 = (S0 - S1) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    S0 = std::bit_cast<float>(vcvt_sz_f(S1 / S2 + float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0))))));
    r0 = std::bit_cast<u32>(S0);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006b4adc
GUEST_EXPORT(0x006b4adc, d_006b4adc::f_006b4adc);

// f_006b4e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b4e18 {

struct __attribute__((packed)) Object_006b4e18_0 {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(Object_006b4e18_0, word_c0c, 0xc0c);  // (from the original)

inline constexpr guest::Function<0x004bfe1c, u32(u32, u32, u32, u32)> call_004bfe1c;  // (from the original)

u32 f_006b4e18(gptr<Object_006b4e18_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    r0 = arg0->word_c0c;
    if (r0 == 0) {
        return r0;
    }
    r0 = r0 + 4u;
    r3 = 0u;
    return call_004bfe1c(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_006b4e18
GUEST_EXPORT(0x006b4e18, d_006b4e18::f_006b4e18);

// f_006b9904: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9904 {


void f_006b9904(gptr<Item> arg0) {
    u32 r1 = 0;
    r1 = u32(u16(arg0->flags)) & 0xc000u;  // (from the original)
    arg0->flags = u16((r1));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006b9904
GUEST_EXPORT(0x006b9904, d_006b9904::f_006b9904);

// f_006b9934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9934 {

inline constexpr guest::Function<0x0076a36c, u32(u32, u32, u32, u32)> call_0076a36c;  // (from the original)

u32 f_006b9934(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    r1 = r0;
    guest::cpu()->r[13] -= 4u;
    r0 = call_0076a36c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u16>(r1));
    if ((r0 & ~0x8000u) == 0x70u) {  // (from the original)
        r0 = r0 & 0x8000u | 0x26u;  // (from the original)
        *gptr<u16>(r1) = u16(r0);
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(*gptr<u16>(r1 + 2u));
    r0 = r2 & ~0xc300u & ~0x87u | 3u | r2 & 0xc000u;  // (from the original)
    *gptr<u16>(r1 + 2u) = u16(r0);
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006b9934
GUEST_EXPORT(0x006b9934, d_006b9934::f_006b9934);

// f_006b9b5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9b5c {


void f_006b9b5c(gptr<Item> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = u32(u16(arg0->flags));
    r1 = r2 & ~0xc000u | (r2 >> 0xe & ~2u) << 0xe;  // (from the original)
    arg0->flags = u16((r1));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006b9b5c
GUEST_EXPORT(0x006b9b5c, d_006b9b5c::f_006b9b5c);

// f_006b9c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9c98 {

inline constexpr guest::Function<0x001acdc4, u32(u32, u32, u32, u32)> call_001acdc4;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x006f34b4, u32(u32, u32, u32, u32)> call_006f34b4;  // (from the original)

u32 f_006b9c98(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x2f8u;  // (from the original)
    r4 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r4 = ~0u;
        goto L_6b9cdc;
    }
    r0 = u32(*gptr<u8>(r0 + 0xau));  // (from the original)
    r1 = u32(*gptr<u16>(r4));
    r4 = r1 & ~0x8000u;  // (from the original)
    if (r0 >= 0x9bu) {  // (from the original)
        r0 = 0u;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005359fc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r4 - u32(*gptr<u16>(r0));
L_6b9cdc:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc288(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0xeu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006f34b4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r13;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001acdc4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006b9c98
GUEST_EXPORT(0x006b9c98, d_006b9c98::f_006b9c98);

// f_006b9d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9d30 {


void f_006b9d30(gptr<Item> arg0, u32 r1) {
    r1 = r1 & ~0xc000u | 0x400u | u32(u16(arg0->flags)) & 0xc000u;  // (from the original)
    arg0->flags = u16((r1));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006b9d30
GUEST_EXPORT(0x006b9d30, d_006b9d30::f_006b9d30);

// f_006b9d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9d78 {


u32 f_006b9d78(u32 r0) {
    u32 zf = 0;
    zf = r0 == 3u;
    if (!zf) {
        zf = r0 == 7u;
    }
    if (zf) {
        r0 = 1u;
        return r0;
    }
    zf = r0 == 5u;
    if (!zf) {
        zf = r0 == 0x16u;  // (from the original)
    }
    if (zf) {
        r0 = 1u;
        return r0;
    }
    if (r0 != 0x1au) {  // (from the original)
        r0 = 0u;
        return r0;
    }
    r0 = 1u;
    return r0;
}

}  // namespace d_006b9d78
GUEST_EXPORT(0x006b9d78, d_006b9d78::f_006b9d78);

// f_006b9de8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9de8 {


u32 f_006b9de8(u32 r0) {
    if (r0 == 0x17u) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_006b9de8
GUEST_EXPORT(0x006b9de8, d_006b9de8::f_006b9de8);

// f_006bacd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bacd8 {


void f_006bacd8(gptr<Item> arg0, u32 r1) {
    r1 = r1 & ~0xc000u | u32(u16(arg0->flags)) & 0xc000u;  // (from the original)
    arg0->flags = u16((r1));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006bacd8
GUEST_EXPORT(0x006bacd8, d_006bacd8::f_006bacd8);

// f_006bb1a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bb1a0 {


u32 f_006bb1a0(gptr<Item> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = u32(u16(arg0->id));
    res = (r1 & ~0x8000u) - 0x3057u;  // (from the original)
    r2 = res;
    if (res == 0) {
        r1 = r1 & 0x8000u | 0x3000u | 0x58u;  // (from the original)
        *gptr<u16>(r0) = u16(r1);
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r2 == 3u) {
        r1 = r1 & 0x8000u | 0x3000u | 0x5bu;  // (from the original)
        *gptr<u16>(r0) = u16(r1);
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r2 == 0xdu) {  // (from the original)
        r1 = r1 & 0x8000u | 0x3000u | 0x65u;  // (from the original)
        *gptr<u16>(r0) = u16(r1);
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r2 != 0x10u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 & 0x8000u | 0x3000u | 0x68u;  // (from the original)
    *gptr<u16>(r0) = u16(r1);
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006bb1a0
GUEST_EXPORT(0x006bb1a0, d_006bb1a0::f_006bb1a0);

// f_006bb3bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bb3bc {

inline constexpr guest::Function<0x006ba294, u32(u32, u32, u32, u32)> call_006ba294;  // (from the original)
inline constexpr guest::Function<0x007684a4, u32(u32, u32, u32, u32)> call_007684a4;  // (from the original)

u32 f_006bb3bc(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r1;
    r0 = call_006ba294(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 + 1u == 0) {
        r0 = 0u;
        goto L_6bb434;
    }
    r5 = r0;
    r0 = r4;
    r0 = call_007684a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r6 = u32(*gptr<u16>(r4 + 2u)) << 0x12 >> 0x1c;  // (from the original)
        if (!u32(r6 >= 0xdu) || u32(r6 == 0xdu)) {  // (from the original)
            goto L_6bb404;
        }
    }
    r6 = 0u;
L_6bb404:;
    r0 = r4;
    r0 = call_007684a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6bb434;
    }
    r1 = u32(*gptr<u16>(r4 + 2u)) & 0xc000u;  // (from the original)
    *gptr<u16>(r4 + 2u) = u16(r5 + (r6 << 0xa) & ~0xc000u | r1);  // (from the original)
    r0 = 1u;
L_6bb434:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006bb3bc
GUEST_EXPORT(0x006bb3bc, d_006bb3bc::f_006bb3bc);

// f_006bb5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bb5c4 {

struct __attribute__((packed)) Object_006bb5c4_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_006bb5c4_0, half_0, 0x0);  // (from the original)


u32 f_006bb5c4(gptr<Object_006bb5c4_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r1 = u32(arg0->half_0);
    r3 = 0x33b8u;  // (from the original)
    r2 = r1 & ~0x8000u;  // (from the original)
    res = r2 - r3;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r2 ^ r3) & (r2 ^ res)) >> 0x1f;  // (from the original)
    r12 = r2 - r3;
    if (zf) {
        r1 = r1 & 0x8000u | 0x3300u | 0xb1u;  // (from the original)
        *gptr<u16>(r0) = u16(r1);
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (!(!zf && nf == vf)) {
        res = r2 - 0x33a9u;  // (from the original)
        r2 = res;
        if (res == 0) {
            r1 = r1 & 0x8000u | 0x3000u | 0x3a8u;  // (from the original)
            *gptr<u16>(r0) = u16(r1);
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r2 == 0xcu) {  // (from the original)
            r1 = r1 & 0x8000u | 0x3300u | 0xaeu;  // (from the original)
            *gptr<u16>(r0) = u16(r1);
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r2 == 0xdu) {  // (from the original)
            r1 = r1 & 0x8000u | 0x3300u | 0xafu;  // (from the original)
            *gptr<u16>(r0) = u16(r1);
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r2 != 0xeu) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = r1 & 0x8000u | 0x3000u | 0x3b0u;  // (from the original)
        *gptr<u16>(r0) = u16(r1);
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r12 == 1u) {
        r1 = r1 & 0x8000u | 0x3300u | 0xb2u;  // (from the original)
        *gptr<u16>(r0) = u16(r1);
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r12 == 2u) {
        r1 = r1 & 0x8000u | 0x3300u | 0xb3u;  // (from the original)
        *gptr<u16>(r0) = u16(r1);
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r12 == 3u) {
        r1 = r1 & 0x8000u | 0x3000u | 0x3b4u;  // (from the original)
        *gptr<u16>(r0) = u16(r1);
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006bb5c4
GUEST_EXPORT(0x006bb5c4, d_006bb5c4::f_006bb5c4);

// f_006bb91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bb91c {

inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;  // (from the original)

u32 f_006bb91c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = 4u;
    r0 = call_002ff8b0(r0, r1, r2, r3);
    r2 = r0;
    r3 = r4;
    if (r0 < 8u) {
        r0 = r5;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r1 = 0u;
        return call_00304f30(r0, r1, r2, r3);
    }
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 0u;
    r1 = r2;
    return call_00304f30(r0, r1, r2, r3);
}

}  // namespace d_006bb91c
GUEST_EXPORT(0x006bb91c, d_006bb91c::f_006bb91c);

// f_006bbbd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bbbd8 {


void f_006bbbd8(gptr<Item> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = u32(u16(arg0->id)) & 0x8000u | 0x2000u;  // (from the original)
    arg0->id = u16((r3));
    r2 = u32(u16(arg0->flags)) & ~0xc000u;  // (from the original)
    arg0->flags = u16((r2));
    if ((r3 & ~0x8000u) != 0x2000u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = r1 & ~0xc000u | r2 & 0xc000u;  // (from the original)
    arg0->flags = u16((r1));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006bbbd8
GUEST_EXPORT(0x006bbbd8, d_006bbbd8::f_006bbbd8);

// f_006bc16c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc16c {

inline constexpr guest::Function<0x001b5e20, u32(u32, u32, u32, u32)> call_001b5e20;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x006bc4fc, u32(u32, u32, u32, u32)> call_006bc4fc;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_006bc16c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = 0u;
    r7 = r0;
    r6 = r1;
    r4 = (r1 & 3u) + 1u;
    do {
L_6bc184:;
        r2 = r5;
        r1 = 0x2cu;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006bbd54(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0076d668(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 != r4)) {
            r1 = r13;
            r0 = r7;
            guest::cpu()->r[13] = r13;
            r0 = call_006bc4fc(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x43u);  // (from the original)
    r5 = 0u;
    do {
L_6bc1d0:;
        r2 = r5;
        r1 = 0x27u;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006bbd54(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0076d668(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 != r4)) {
            r1 = r13;
            r0 = r7;
            guest::cpu()->r[13] = r13;
            r0 = call_006bc4fc(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x48u);  // (from the original)
    r5 = 0u;
    do {
L_6bc21c:;
        r2 = r5;
        r1 = 0x28u;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006bbd54(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0076d668(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 != r4)) {
            r1 = r13;
            r0 = r7;
            guest::cpu()->r[13] = r13;
            r0 = call_006bc4fc(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x1eu);  // (from the original)
    r5 = 0u;
    do {
L_6bc268:;
        r2 = r5;
        r1 = 0x24u;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006bbd54(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0076d668(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 != r4)) {
            r1 = r13;
            r0 = r7;
            guest::cpu()->r[13] = r13;
            r0 = call_006bc4fc(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x48u);  // (from the original)
    r5 = 0u;
    do {
L_6bc2b4:;
        r2 = r5;
        r1 = 0x54u;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006bbd54(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0076d668(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 != r4)) {
            r1 = r13;
            r0 = r7;
            guest::cpu()->r[13] = r13;
            r0 = call_006bc4fc(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0x19u);  // (from the original)
    r5 = 0u;
    do {
L_6bc300:;
        r2 = r5;
        r1 = 0x58u;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_006bbd54(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0076d668(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 != r4)) {
            r1 = r13;
            r0 = r7;
            guest::cpu()->r[13] = r13;
            r0 = call_006bc4fc(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 8u);
    r4 = 0u;
    do {
L_6bc34c:;
        r0 = r7 + (r4 * 0x173u << 3) + 0x55cu;  // (from the original)
        r5 = r0;
        r0 = u32(s32(s8(*gptr<u8>(r0))));
        if (r0 == r6) {
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_001b5e20(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006bc16c
GUEST_EXPORT(0x006bc16c, d_006bc16c::f_006bc16c);

// f_006bc4fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc4fc {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32, u32, u32, u32)> call_002ffad8;  // (from the original)
inline constexpr guest::Function<0x0076d714, u32(u32, u32, u32, u32)> call_0076d714;  // (from the original)

u32 f_006bc4fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r0 = r1;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r6;
    r0 = call_002ffad8(r0, r1, r2, r3);
    r3 = r0;
    r2 = r0;
    r1 = r5;
    r0 = r4;
    r0 = call_0076d714(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6bc57c;
    }
    res = r5 - 0x2cu;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r5 ^ 0x2cu) & (r5 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        r1 = r4 + r3;
    }
    r0 = 5u;
    if (zf) {
        *gptr<u8>(r1 + 0x448u) = u8(r0);  // (from the original)
        goto L_6bc57c;
    }
    if (!zf && nf == vf) {
        goto L_6bc580;
    }
    if (r5 == 0x24u) {  // (from the original)
        r1 = r4 + r3;
        *gptr<u8>(r1 + 0x4f1u) = u8(r0);  // (from the original)
        goto L_6bc57c;
    }
    if (r5 == 0x27u) {  // (from the original)
        r1 = r4 + r3;
        *gptr<u8>(r1 + 0x48bu) = u8(r0);  // (from the original)
        goto L_6bc57c;
    }
    if (r5 == 0x28u) {  // (from the original)
        r1 = r4 + r3;
        *gptr<u8>(r1 + 0x4d3u) = u8(r0);  // (from the original)
    }
L_6bc57c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6bc580:;
    if (r5 == 0x54u) {  // (from the original)
        r1 = r4 + r3;
        *gptr<u8>(r1 + 0x539u) = u8(r0);  // (from the original)
        guest::preempt();
        goto L_6bc57c;
    }
    if (r5 == 0x58u) {  // (from the original)
        r1 = r4 + r3;
        *gptr<u8>(r1 + 0x552u) = u8(r0);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006bc4fc
GUEST_EXPORT(0x006bc4fc, d_006bc4fc::f_006bc4fc);

// f_006bc9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc9b0 {

inline constexpr guest::Function<0x00582bc0, u32(u32, u32, u32, u32)> call_00582bc0;  // (from the original)

u32 f_006bc9b0() {
    return call_00582bc0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006bc9b0
GUEST_EXPORT(0x006bc9b0, d_006bc9b0::f_006bc9b0);

// f_006bc9b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc9b4 {

struct __attribute__((packed)) Object_006bc9b4_0 {
    u8 unknown_0[0x6bb0];  // (not used here)
    u32 word_6bb0;
    u32 word_6bb4;
};
GUEST_OFFSET(Object_006bc9b4_0, word_6bb0, 0x6bb0);  // (from the original)
GUEST_OFFSET(Object_006bc9b4_0, word_6bb4, 0x6bb4);  // (from the original)

inline constexpr guest::Function<0x0012e640, u32(u32, u32, u32, u32)> call_0012e640;  // (from the original)
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> call_006f0130;  // (from the original)

u32 f_006bc9b4(gptr<Object_006bc9b4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 res = 0;
    u64 t = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 cf = 0;
    r12 = r3;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1 = r2;
    r0 = arg0->word_6bb0;
    r5 = ~0x80000000u;  // (from the original)
    res = r0 + r1;
    cf = res < r0;
    r0 = res;
    r2 = u32(u64(arg0->word_6bb4) + r12 + cf);
    t = u64(r5) + ~r2 + u32(~0u >= r0);
    r4 = u32(t);
    if (u32(t >> 0x20)) {  // (from the original)
        arg0->word_6bb0 = u32(r0);
        arg0->word_6bb4 = u32(r2);
        goto L_6bc9f8;
    }
    arg0->word_6bb0 = u32(~0u);
    arg0->word_6bb4 = u32(~0x80000000u);  // (from the original)
L_6bc9f8:;
    r0 = r1;
    r2 = 0x3cu;  // (from the original)
    r3 = 0u;
    r1 = r12;
    r0 = call_0012e640(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r4 = r2;
    r0 = 0x10u;  // (from the original)
    r0 = call_006f0130(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r2 = r4;
    r4 = 0x95c2c0u;  // (from the original)
    r0 = *gptr<u32>(r4) + r2;
    *gptr<u32>(r4) = u32(r0);
    if (r0 >= 0x3cu) {  // (from the original)
        r1 = 1u;
        r0 = 0x10u;  // (from the original)
        r0 = call_006f0130(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = *gptr<u32>(r4) - 0x3cu;  // (from the original)
        *gptr<u32>(r4) = u32(r0);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006bc9b4
GUEST_EXPORT(0x006bc9b4, d_006bc9b4::f_006bc9b4);

// f_006bcdf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bcdf0 {

inline constexpr guest::Function<0x00582d34, u32(u32, u32, u32, u32)> call_00582d34;  // (from the original)

u32 f_006bcdf0() {
    return call_00582d34(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006bcdf0
GUEST_EXPORT(0x006bcdf0, d_006bcdf0::f_006bcdf0);

// f_006bd2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bd2c8 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00615964, u32(u32, u32, u32, u32)> call_00615964;  // (from the original)
inline constexpr guest::Function<0x00616c68, u32(u32, u32, u32, u32)> call_00616c68;  // (from the original)
inline constexpr guest::Function<0x00700adc, u32(u32, u32, u32, u32)> call_00700adc;  // (from the original)

u32 f_006bd2c8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r5 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r6 = r1;
    r4 = 0u;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0x24u) {  // (from the original)
        zf = r0 == 0x27u;  // (from the original)
        if (!zf) {
            zf = r0 == 0x28u;  // (from the original)
        }
        if (zf) {
            goto L_6bd314;
        }
        goto L_6bd3ac;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00700adc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 < 0x48u) {  // (from the original)
        goto L_6bd368;
    }
    goto L_6bd3a8;
L_6bd314:;
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0x27u);  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00615964(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00616c68(r0, r1, r2, guest::cpu()->r[3]);
    r0 = *gptr<u32>(r13);
    r1 = *gptr<u32>(r13 + 4) & 0xffu;  // (from the original)
    if (r1 != 0x24u) {  // (from the original)
        if (r1 == 0x27u) {  // (from the original)
            goto L_6bd378;
        }
        if (r1 != 0x28u) {  // (from the original)
            goto L_6bd3a8;
        }
        goto L_6bd390;
    }
    if (r0 >= 0x48u) {  // (from the original)
        goto L_6bd3a8;
    }
L_6bd368:;
    r4 = u32(*gptr<u16>(r5 + (r0 << 1) + 0xa288u));  // (from the original)
    goto L_6bd3ac;
L_6bd378:;
    if (r0 >= 0x48u) {  // (from the original)
        goto L_6bd3a8;
    }
    r4 = u32(*gptr<u16>(r5 + (r0 << 1) + 0xa318u));  // (from the original)
    goto L_6bd3ac;
L_6bd390:;
    if (r0 >= 0x1eu) {  // (from the original)
        goto L_6bd3a8;
    }
    r4 = u32(*gptr<u16>(r5 + (r0 << 1) + 0xa3a8u));  // (from the original)
    goto L_6bd3ac;
L_6bd3a8:;
    r4 = 0u;
L_6bd3ac:;
    r0 = r4;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006bd2c8
GUEST_EXPORT(0x006bd2c8, d_006bd2c8::f_006bd2c8);

// f_006bd550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bd550 {

inline constexpr guest::Function<0x0076de78, u32(u32, u32, u32, u32)> call_0076de78;  // (from the original)

u32 f_006bd550(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0076de78(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = r4 + 0x8d84u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006bd550
GUEST_EXPORT(0x006bd550, d_006bd550::f_006bd550);

// f_006bd910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bd910 {

struct __attribute__((packed)) Object_006bd910_0 {
    u8 unknown_0[0x8f2c];  // (not used here)
    u16 half_8f2c;
};
GUEST_OFFSET(Object_006bd910_0, half_8f2c, 0x8f2c);  // (from the original)

inline constexpr guest::Function<0x001b264c, u32(u32, u32, u32, u32)> call_001b264c;  // (from the original)
inline constexpr guest::Function<0x001b4bc8, u32(u32, u32, u32, u32)> call_001b4bc8;  // (from the original)
inline constexpr guest::Function<0x0020be1c, u32(u32, u32, u32, u32)> call_0020be1c;  // (from the original)
inline constexpr guest::Function<0x0020c500, u32(u32, u32, u32, u32)> call_0020c500;  // (from the original)
inline constexpr guest::Function<0x0024a848, u32(u32, u32, u32, u32)> call_0024a848;  // (from the original)
inline constexpr guest::Function<0x0024c8d4, u32(u32, u32, u32, u32)> call_0024c8d4;  // (from the original)
inline constexpr guest::Function<0x0024dd14, u32(u32, u32, u32, u32)> call_0024dd14;  // (from the original)
inline constexpr guest::Function<0x002beff0, u32(u32, u32, u32, u32)> call_002beff0;  // (from the original)
inline constexpr guest::Function<0x002c0048, u32(u32, u32, u32, u32)> call_002c0048;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)
inline constexpr guest::Function<0x0030a7e0, u32(u32, u32, u32, u32)> call_0030a7e0;  // (from the original)
inline constexpr guest::Function<0x005bcbfc, u32(u32, u32, u32, u32)> call_005bcbfc;  // (from the original)
inline constexpr guest::Function<0x005bd05c, u32(u32, u32, u32, u32)> call_005bd05c;  // (from the original)
inline constexpr guest::Function<0x005bd2a0, u32(u32, u32, u32, u32)> call_005bd2a0;  // (from the original)
inline constexpr guest::Function<0x005bd864, u32(u32, u32, u32, u32)> call_005bd864;  // (from the original)
inline constexpr guest::Function<0x005be0fc, u32(u32, u32, u32, u32)> call_005be0fc;  // (from the original)
inline constexpr guest::Function<0x005be87c, u32(u32, u32, u32, u32)> call_005be87c;  // (from the original)
inline constexpr guest::Function<0x005c6760, u32(u32, u32, u32, u32)> call_005c6760;  // (from the original)
inline constexpr guest::Function<0x006ccd54, u32(u32, u32, u32, u32)> call_006ccd54;  // (from the original)
inline constexpr guest::Function<0x006f0030, u32(u32, u32, u32, u32)> call_006f0030;  // (from the original)

u32 f_006bd910(gptr<Object_006bd910_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 0x2c;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u32>(ea + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r14);  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r9 = r0 + 0x8f00u;  // (from the original)
    r10 = u32(arg0->half_8f2c);
    r1 = 0xa480u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0020c500(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8ac4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006f0030(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r4 + 0x6bd0u;  // (from the original)
    r6 = r4 + 0x6c10u;  // (from the original)
    r7 = r6;
    r5 = r8;
    r11 = 0u;
    if (r8 >= r7) {
        goto L_6bd980;
    }
    do {
L_6bd964:;
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 4u;
        *gptr<u8>(r6) = u8(r11);
        r6 = r6 + 1u;
        guest::preempt();
    } while (r5 < r7);
L_6bd980:;
    r1 = 0u;
    r0 = r8 + 0x338u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 != 0) {
        r0 = r0 + 0x6bd0u;  // (from the original)
        if (r0 == r8) {
            guest::cpu()->r[13] = r13;
            r0 = call_005c6760(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
    }
    r1 = 0u;
    r0 = r4 + 0x6b8cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r4 + 0x6b94u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r4 + 0x6b9cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8d1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002beff0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r4 + 0x6ba4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00303534(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = 0u;
    r2 = r4 + 0x6bb0u;  // (from the original)
    *gptr<u32>(r2) = u32(r0);
    *gptr<u32>(r2 + 4) = u32(r0);
    r5 = r4 + 0x6f10u;  // (from the original)
    r8 = r5;
    if (r5 >= r4 + 0x6fb0u) {  // (from the original)
        goto L_6bda44;
    } else {
        r6 = r8 + 0xa0u;  // (from the original)
    }
    do {
L_6bda2c:;
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 4u;
        guest::preempt();
    } while (r5 < r6);
L_6bda44:;
    r5 = r8 + 0xa0u;  // (from the original)
    r6 = r8 + 0xe0u;  // (from the original)
    if (r5 >= r6) {
        goto L_6bda74;
    } else {
        r7 = r5 + 0x40u;  // (from the original)
    }
    do {
L_6bda58:;
        r1 = 0x95bfdcu;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 4u;
        *gptr<u8>(r6) = u8(r11);
        r6 = r6 + 1u;
        guest::preempt();
    } while (r5 < r7);
L_6bda74:;
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r8 + 0xf0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r8 + 0xf4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r4 + 0x7008u;  // (from the original)
    r5 = 0u;
    do {
L_6bda98:;
        r0 = r6 + (r5 + (r5 << 2) << 7);
        guest::cpu()->r[13] = r13;
        r0 = call_002ff408(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (r5 < 0xau);  // (from the original)
    r0 = r6 + 0x1900u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b264c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x89d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024dd14(r0, r1, r2, r3);
    r3 = 0xffffu;  // (from the original)
    r1 = 0u;
    r2 = r4 + 0x89fau;  // (from the original)
    r0 = r1;
    do {
L_6bdad8:;
        r12 = r2 + (r1 << 1);
        r1 = r1 + 1u;
        r0 = r0 + 2u;
        r5 = r2 + (r1 << 1);
        *gptr<u16>(r12) = u16(r3);
        res = r0 - 0x20u;  // (from the original)
        r1 = r1 + 1u;
        *gptr<u16>(r5) = u16(r3);
        guest::preempt();
    } while (res >> 0x1f != ((r0 ^ 0x20u) & (r0 ^ res)) >> 0x1f);  // (from the original)
    r0 = r4 + 0x8a3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024c8d4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 0x8f0au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 0x8f0eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8f12u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030589c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8d4cu;  // (from the original)
    *gptr<u16>(r9 + 0x28u) = u16(r11);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bd05c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8d5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bd2a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8d6cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bd864(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8d84u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005be0fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8dfau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030a7e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r4 + 0x8e08u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bcbfc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8ebeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005be87c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8ee0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0020be1c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x7dbu;  // (from the original)
    zf = *gptr<u32>(r13 + 8u) == 0;
    *gptr<u16>(r9 + 0x2au) = u16(r0);  // (from the original)
    if (zf) {
        *gptr<u16>(r9 + 0x2cu) = u16(r0);  // (from the original)
    } else {
        *gptr<u16>(r9 + 0x2cu) = u16(r10);  // (from the original)
    }
    r1 = 0x32u;  // (from the original)
    r0 = r4 + 0x8f3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x8f34u;  // (from the original)
    *gptr<u32>(r9 + 0x6eu) = u32(r11);  // (from the original)
    *gptr<u32>(r9 + 0x72u) = u32(r11);  // (from the original)
    *gptr<u8>(r9 + 0x76u) = u8(r11);  // (from the original)
    r1 = r0 + 4u;
    *gptr<u32>(r0 + r4) = u32(r11);
    r0 = r4 + 0x8f77u;  // (from the original)
    *gptr<u32>(r1 + r4) = u32(r11);
    guest::cpu()->r[13] = r13;
    r0 = call_002c0048(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8f9cu;  // (from the original)
    *gptr<u32>(r0) = u32(r11);
    *gptr<u32>(r0 + 4u) = u32(r11);
    *gptr<u32>(r0 + 8u) = u32(r11);
    r0 = r4 + 0x92f0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006ccd54(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x95c0u;  // (from the original)
    r1 = 0x42u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x90u;  // (from the original)
    r0 = r4 + 0xa288u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x90u;  // (from the original)
    r0 = r4 + 0xa318u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xa000u;  // (from the original)
    *gptr<u32>(r0 + 0x3a8u) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3acu) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3b0u) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3b4u) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3b8u) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3bcu) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3c0u) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3c4u) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3c8u) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3ccu) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3d0u) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3d4u) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3d8u) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3dcu) = u32(r11);  // (from the original)
    *gptr<u32>(r0 + 0x3e0u) = u32(r11);  // (from the original)
    r0 = r4 + 0x8fa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b4bc8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xa3e4u;  // (from the original)
    r1 = 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xa424u;  // (from the original)
    r1 = 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = ~0u;
    *gptr<u32>(0xa464u + r4) = u32(r1);  // (from the original)
    r0 = r4 + 0x8ae0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024a848(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x7ffeu;  // (from the original)
    r5 = 0u;
    do {
L_6bdcc8:;
        r6 = r4 + (r5 + (r5 << 1) << 1) + 0xa468u;  // (from the original)
        r1 = r7;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        res = r5 - 3u;
        *gptr<u16>(r6 + 4u) = u16(r11);
        guest::preempt();
    } while (res >> 0x1f != ((r5 ^ 3u) & (r5 ^ res)) >> 0x1f);  // (from the original)
    r13 = r13 + 0xcu;  // (from the original)
    r0 = r4 + 0xa400u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
    r14 = *gptr<u32>(ea + 0x20);  // (from the original)
    r0 = r0 + 0x7au;  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    return call_002fc8e8(r0, r1, r2, r3);
}

}  // namespace d_006bd910
GUEST_EXPORT(0x006bd910, d_006bd910::f_006bd910);

// f_006bddec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bddec {

struct __attribute__((packed)) Object_006bddec_0 {
    u8 unknown_0[0x570e];  // (not used here)
    u8 byte_570e;
    u8 unknown_570f[0x9];  // (not used here)
    u8 byte_5718;
    u8 unknown_5719[0x7];  // (not used here)
    u8 byte_5720;
};
GUEST_OFFSET(Object_006bddec_0, byte_570e, 0x570e);  // (from the original)
GUEST_OFFSET(Object_006bddec_0, byte_5718, 0x5718);  // (from the original)
GUEST_OFFSET(Object_006bddec_0, byte_5720, 0x5720);  // (from the original)

inline constexpr guest::Function<0x005c257c, u32(u32, u32, u32, u32)> call_005c257c;  // (from the original)
inline constexpr guest::Function<0x005c6024, u32(u32, u32, u32, u32)> call_005c6024;  // (from the original)

u32 f_006bddec(gptr<Object_006bddec_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = u32(arg0->byte_570e) & ~0x40u;  // (from the original)
    arg0->byte_570e = u8(r1);
    res = u32(arg0->byte_5720) << 0x1c;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_6bde54;
    }
    if (u32(arg0->byte_5718) & 8u) {
        r0 = r4;
        r0 = call_005c257c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_6bde54;
        }
        r0 = r4 + 0x5700u;  // (from the original)
        *gptr<u8>(r0 + 0x18u) = u8(u32(*gptr<u8>(r0 + 0x18u)) & ~8u);  // (from the original)
    }
    r0 = r4 + 0x5700u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0x20u)) & ~8u;  // (from the original)
    *gptr<u8>(r0 + 0x20u) = u8(r1);  // (from the original)
L_6bde54:;
    res = u32(*gptr<u8>(0x5726u + r4)) >> 7;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    r0 = call_005c6024(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 + 0x5700u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0x26u)) & ~0x80u;  // (from the original)
    *gptr<u8>(r0 + 0x26u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006bddec
GUEST_EXPORT(0x006bddec, d_006bddec::f_006bddec);

// f_006bead8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bead8 {

struct __attribute__((packed)) Object_006bead8_0 {
    u8 unknown_0[0x73c];  // (not used here)
    u32 word_73c;
    u32 word_740;
    u32 word_744;
};
GUEST_OFFSET(Object_006bead8_0, word_73c, 0x73c);  // (from the original)
GUEST_OFFSET(Object_006bead8_0, word_740, 0x740);  // (from the original)
GUEST_OFFSET(Object_006bead8_0, word_744, 0x744);  // (from the original)

struct __attribute__((packed)) Object_006bead8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006bead8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006bead8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006bead8_1, word_8, 0x8);  // (from the original)


void f_006bead8(gptr<Object_006bead8_0> arg0, gptr<Object_006bead8_1> arg1) {
    u32 r1 = arg1.addr();
    arg0->word_73c = u32(arg1->word_0);
    arg0->word_740 = u32(arg1->word_4);
    r1 = arg1->word_8;
    arg0->word_744 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006bead8
GUEST_EXPORT(0x006bead8, d_006bead8::f_006bead8);

// f_006beaf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006beaf4 {

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)
inline constexpr guest::Function<0x002400b0, u32(u32, u32, u32, u32)> call_002400b0;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)

u32 f_006beaf4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r2 = r0;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r3 = 1u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0023fc84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x10u) & 0xffu;  // (from the original)
    if (r0 >= 0xfcu) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002400b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 >= 6u) {
        r0 = 0u;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = r0 == 2u;
    }
    if (zf) {
        r0 = 1u;
    } else {
        r0 = 2u;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006beaf4
GUEST_EXPORT(0x006beaf4, d_006beaf4::f_006beaf4);

// f_006bf18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bf18c {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x0076adf4, u32(u32, u32, u32, u32)> call_0076adf4;  // (from the original)

u32 f_006bf18c(u32 r0, u32 r1, float S0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    guest::cpu()->s[0] = S0;
    r0 = call_002fcb34(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 != 0xeu) {  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x6bf1c8u));  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r0 = r4;
    guest::cpu()->s[0] = S0;
    r0 = call_0076adf4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = std::bit_cast<float>(*gptr<u32>(0x6bf1ccu));  // (from the original)
    if (r0 >= 8u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r1 = 0x890300u;  // (from the original)
    r0 = r1 + (r0 << 2);
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_006bf18c
GUEST_EXPORT(0x006bf18c, d_006bf18c::f_006bf18c);
