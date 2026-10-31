// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_002f0c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f0c70 {

inline constexpr guest::Function<0x002efe0c, u32(u32, u32, u32, u32)> call_002efe0c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002f0c70(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x88u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    r8 = 0x94f768u;  // (from the original)
    r9 = r8 + 0x28u;  // (from the original)
    do {
L_2f0c88:;
        r1 = *gptr<u32>(r8 + (r4 << 2));
        r0 = r5 + 0x2e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00568a80(r0, r1, r2, r3);
        r7 = r5 + (r4 << 2);
        r6 = r7 + 0x1000u;  // (from the original)
        *gptr<u32>(r7 + 0x808u) = u32(r0);  // (from the original)
        r3 = *gptr<u32>(r6 + 0x1d8u);  // (from the original)
        r1 = r0;
        r2 = 0u;
        r0 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_005e2c98(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u8>(*gptr<u32>(r6 + 0x1d8u) + 0x38u) = u8(1u);  // (from the original)
        r1 = *gptr<u32>(r9 + (r4 << 2));
        r0 = r5 + 0x2e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00568a80(r0, r1, r2, r3);
        *gptr<u32>(r7 + 0x830u) = u32(r0);  // (from the original)
        r3 = *gptr<u32>(r6 + 0x200u);  // (from the original)
        r1 = r0;
        r2 = 0u;
        r0 = r3;
        guest::cpu()->r[13] = r13;
        r0 = call_005e2c98(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u8>(*gptr<u32>(r6 + 0x200u) + 0x38u) = u8(1u);  // (from the original)
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xau));  // (from the original)
    r11 = 0x94f748u;  // (from the original)
    r9 = 0x8906ecu;  // (from the original)
    r8 = 0x95deccu;  // (from the original)
    r7 = 0x909ee0u;  // (from the original)
    r4 = 0u;
    r10 = r4;
L_2f0d14:;
    r1 = *gptr<u32>(r11 + (r4 << 2));
    r0 = r5 + 0x198u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5 + (r4 << 2);
    r6 = r2 + 0x1000u;  // (from the original)
    *gptr<u32>(r2 + 0x858u) = u32(r0);  // (from the original)
    r1 = r0;
    r0 = *gptr<u32>(r6 + 0x228u);  // (from the original)
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2c98(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u8>(*gptr<u32>(r6 + 0x228u) + 0x38u) = u8(1u);  // (from the original)
    r0 = r13 + 8u;
    r2 = 0x20u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xcu;  // (from the original)
    r1 = 0x10u;  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x40u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x50u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x54u) = u32(r10);  // (from the original)
    r0 = r0 + 0x16u;  // (from the original)
    do {
L_2f0db0:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r10);
    r2 = 0x2f0e74u;  // (from the original)
    r1 = r13 + 8u;
    r3 = u32(*gptr<u16>(0x84884cu + (r4 << 1)));  // (from the original)
    r0 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r6 + 0x228u);  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r6 + 0x228u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r7);
    r4 = r4 + 1u;
    if (s32(r4) < s32(2u)) {
        guest::preempt();
        goto L_2f0d14;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002efe0c(r0, r1, r2, r3);
    r0 = 0x94fd58u;  // (from the original)
    r1 = *gptr<u32>(r0) & ~0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f0c70
GUEST_EXPORT(0x002f0c70, d_002f0c70::f_002f0c70);

// f_002f29ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f29ac {

struct __attribute__((packed)) Object_002f29ac_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x1d64];  // (not used here)
    u32 word_1d90;
    u8 unknown_1d94[0x394];  // (not used here)
    u32 word_2128;
    u8 unknown_212c[0xe0];  // (not used here)
    u32 word_220c;
};
GUEST_OFFSET(Object_002f29ac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f29ac_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002f29ac_0, word_1d90, 0x1d90);  // (from the original)
GUEST_OFFSET(Object_002f29ac_0, word_2128, 0x2128);  // (from the original)
GUEST_OFFSET(Object_002f29ac_0, word_220c, 0x220c);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002f29ac(gptr<Object_002f29ac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f3d68u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    arg0->word_0 = u32(r1);
    r4 = r0 + 0x2128u;  // (from the original)
    r3 = 1u;
    arg0->word_1d90 = u32(0x8ee218u);  // (from the original)
    r2 = 0x8ef22cu;  // (from the original)
    r0 = r0 + 0x2240u;  // (from the original)
    arg0->word_2128 = u32(r2);
    arg0->word_220c = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_002f770c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f18f4u;  // (from the original)
    *gptr<u32>(r0 - 0x398u) = u32(r1);  // (from the original)
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = 0x2cd9f4u;  // (from the original)
    r4 = r0 - 0x1d94u;  // (from the original)
    r3 = 5u;
    r2 = 0x314u;  // (from the original)
    r0 = r0 - 0xf7cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x1c81ccu;  // (from the original)
    r3 = 5u;
    r2 = 0x1cu;  // (from the original)
    r0 = r4 + 0xd8cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f0888u;  // (from the original)
    r0 = r4 + 0xbfcu;  // (from the original)
    *gptr<u32>(r4 + 0x5f4u) = u32(r1);  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x608u;  // (from the original)
    r3 = 2u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x1c0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x410u;  // (from the original)
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
    r0 = r0 - 0x2cu;  // (from the original)
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
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x4cu;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_002f29ac
GUEST_EXPORT(0x002f29ac, d_002f29ac::f_002f29ac);

// f_002f2b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f2b28 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32, u32, u32)> call_005d6cc0;  // (from the original)
inline constexpr guest::Function<0x005d6d28, u32(u32, u32, u32, u32)> call_005d6d28;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002f2b28(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x4e8u;  // (from the original)
    r4 = r0;
    r2 = 0x80u;  // (from the original)
    r11 = r13 + 0x3a0u;  // (from the original)
    r0 = r11;
    r1 = r13 + 0x3b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x9099d8u;  // (from the original)
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 - 0xcu;  // (from the original)
    r1 = 0x100u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r8 = 0x8906ecu;  // (from the original)
    r0 = r5 + 0x16u;  // (from the original)
    r1 = 0x40u;  // (from the original)
    do {
L_2f2b70:;
        res = r1 - 1u;
        r1 = res;
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r10 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r3 = *gptr<u32>(r4 + 0x630u);  // (from the original)
    r0 = *gptr<u32>(r10);
    r2 = 0x2f2cccu;  // (from the original)
    r1 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r10);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x41cu;  // (from the original)
    r1 = r11;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6d28(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r9 = r13 + 4u;
    r2 = 0x1c2u;  // (from the original)
    r0 = r9;
    r1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x90a0a0u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 - 0xcu;  // (from the original)
    r1 = 0x384u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x18u;  // (from the original)
    r5 = 0u;
    r0 = r0 - 2u;
    r1 = 0xe1u;  // (from the original)
    do {
L_2f2c20:;
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = *gptr<u32>(r10);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r5);
    r3 = *gptr<u32>(r4 + 0x630u);  // (from the original)
    r0 = *gptr<u32>(r10);
    r2 = 0x2f2cecu;  // (from the original)
    r1 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r10);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x51cu;  // (from the original)
    r1 = r9;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6d28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r6);
    *gptr<u32>(r13 + 0x3a0u) = u32(r7);  // (from the original)
    r0 = r11;
    r13 = r13 + 0x4e8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f2b28
GUEST_EXPORT(0x002f2b28, d_002f2b28::f_002f2b28);

// f_002f3398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f3398 {

inline constexpr guest::Function<0x001b95f8, u32(u32, u32, u32, u32)> call_001b95f8;  // (from the original)

u32 f_002f3398() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r1 = 1u;
    r0 = *gptr<u32>(0x981ff4u);  // (from the original)
    r0 = call_001b95f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = 0x9500e0u;  // (from the original)
    *gptr<u8>(r4) = u8(r0);
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 4u);
    r1 = 1u;
    r0 = call_001b95f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    *gptr<u8>(r4) = u8(r0);
    *gptr<u8>(r4 + 1u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f3398
GUEST_EXPORT(0x002f3398, d_002f3398::f_002f3398);

// f_002f33e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f33e8 {

inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32, u32)> call_001b8008;  // (from the original)

u32 f_002f33e8() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = *gptr<u32>(0x981ff4u);  // (from the original)
    r0 = call_001b8008(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = 0x9500e0u;  // (from the original)
    r0 = *gptr<u32>(r4 + 4u);
    r0 = call_001b8008(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4) = u8(r0);
    *gptr<u8>(r4 + 1u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002f33e8
GUEST_EXPORT(0x002f33e8, d_002f33e8::f_002f33e8);

// f_002f341c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f341c {

inline constexpr guest::Function<0x001b26c8, u32(u32, u32, u32, u32)> call_001b26c8;  // (from the original)
inline constexpr guest::Function<0x0027ab40, u32(u32, u32, u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)

u32 f_002f341c(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = 0xaf7618u;  // (from the original)
    if (*gptr<u32>(r5 + 0x2cu) == 1u) {  // (from the original)
        goto L_2f34b0;
    }
    if (u32(*gptr<u8>(0x981fecu)) != 0) {  // (from the original)
        goto L_2f34b0;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005cd270(r0, r1, r2, guest::cpu()->r[3]);
    ea = r5 + 8u;
    *gptr<u32>(ea) = u32(0xc0000cu);  // (from the original)
    *gptr<u32>(ea + 4) = u32(0u);
    r1 = r4;
    r4 = 0x981ff0u;  // (from the original)
    if (*gptr<u32>(r4) != 0) {
        goto L_2f34b0;
    }
    if (r1 == 0) {
        r1 = *gptr<u32>(0x952c3cu);  // (from the original)
    }
    r2 = *gptr<u32>(0x8c8ad8u);  // (from the original)
    r0 = 0xc8b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_001b26c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4) = u32(r0);
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff8b0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = 0x981fe0u;  // (from the original)
    *gptr<u32>(r4) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_0027ab40(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        *gptr<u32>(r4) = u32(0u);
    }
L_2f34b0:;
    r0 = u32(*gptr<u8>(0x9500e1u));  // (from the original)
    if (r0 != 0) {
        r0 = 0xe0000cu;  // (from the original)
        r1 = 0u;
        ea = r5 + 8u;
        *gptr<u32>(ea) = u32(r0);
        *gptr<u32>(ea + 4) = u32(r1);
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f341c
GUEST_EXPORT(0x002f341c, d_002f341c::f_002f341c);

// f_002f4158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4158 {


u32 f_002f4158(u32 r0, u32 r1) {
    r0 = r0 + 0x19d6u;  // (from the original)
    if (r1 == 0) {
        r1 = 0xbu;  // (from the original)
        *gptr<u8>(r0) = u8(r1);
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 == 1u) {
        r1 = 0xcu;  // (from the original)
        *gptr<u8>(r0) = u8(r1);
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 == 2u) {
        r1 = 8u;
        *gptr<u8>(r0) = u8(r1);
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 == 3u) {
        r1 = 9u;
    } else {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f4158
GUEST_EXPORT(0x002f4158, d_002f4158::f_002f4158);

// f_002f4ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4ab0 {

struct __attribute__((packed)) Object_002f4ab0_0 {
    u8 unknown_0[0x19d6];  // (not used here)
    u8 byte_19d6;
};
GUEST_OFFSET(Object_002f4ab0_0, byte_19d6, 0x19d6);  // (from the original)

inline constexpr guest::Function<0x004ee9a8, u32(u32, u32, u32, u32)> call_004ee9a8;  // (from the original)
inline constexpr guest::Function<0x004ee9cc, u32(u32, u32, u32, u32)> call_004ee9cc;  // (from the original)

u32 f_002f4ab0(gptr<Object_002f4ab0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    float S0 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 + 0x19d6u;  // (from the original)
    r4 = r0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x2f4af4u));  // (from the original)
    r0 = r4 + (u32(arg0->byte_19d6) << 5) + 0x1094u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004ee9cc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = std::bit_cast<float>(*gptr<u32>(0x2f4af8u));  // (from the original)
    r0 = r4 + (u32(*gptr<u8>(r5)) << 5);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0 = r0 + 0x1094u;  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_004ee9a8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002f4ab0
GUEST_EXPORT(0x002f4ab0, d_002f4ab0::f_002f4ab0);

// f_002f4d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4d2c {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x00317cc8, u32(u32, u32, u32, u32)> call_00317cc8;  // (from the original)
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_002f4d2c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r0 = r1;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r1 = 0u;
    r6 = r2;
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00317cc8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0xc0u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    r7 = 0u;
    r4 = 0x2f4db4u;  // (from the original)
    if (r1 == 0) {
        r0 = r7;
    } else {
        r0 = r0 + r1;
    }
    r5 = r13;
    *gptr<u32>(r13) = u32(r0);
    if (r0 == 0) {
        goto L_2f4d9c;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00736a1c(r0, r1, r2, r3);
    if (r0 == 0) {
        goto L_2f4d9c;
    }
    ea = r0 + 0xcu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 != 0) {
        r7 = r1 + r0;
    }
    goto L_2f4da0;
L_2f4d9c:;
    r7 = 0u;
L_2f4da0:;
    r0 = r7;
    r2 = r6;
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3 = *gptr<u32>(ea);
    r1 = 0x2f4dbcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_004f2ef0(r0, r1, r2, r3);
}

}  // namespace d_002f4d2c
GUEST_EXPORT(0x002f4d2c, d_002f4d2c::f_002f4d2c);

// f_002f4dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4dcc {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x00317cc8, u32(u32, u32, u32, u32)> call_00317cc8;  // (from the original)
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_002f4dcc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r0 = r1;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r1 = 0u;
    r6 = r2;
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00317cc8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0xc0u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    r7 = 0u;
    r4 = 0x2f4e54u;  // (from the original)
    if (r1 == 0) {
        r0 = r7;
    } else {
        r0 = r0 + r1;
    }
    r5 = r13;
    *gptr<u32>(r13) = u32(r0);
    if (r0 == 0) {
        goto L_2f4e3c;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00736a1c(r0, r1, r2, r3);
    if (r0 == 0) {
        goto L_2f4e3c;
    }
    ea = r0 + 0xcu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 != 0) {
        r7 = r1 + r0;
    }
    goto L_2f4e40;
L_2f4e3c:;
    r7 = 0u;
L_2f4e40:;
    r0 = r7;
    r2 = r6;
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3 = *gptr<u32>(ea);
    r1 = 0x2f4e54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_004f2ef0(r0, r1, r2, r3);
}

}  // namespace d_002f4dcc
GUEST_EXPORT(0x002f4dcc, d_002f4dcc::f_002f4dcc);

// f_002f6a30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6a30 {

struct __attribute__((packed)) Object_002f6a30_0 {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Object_002f6a30_0, word_d4, 0xd4);  // (from the original)

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_002f6a30(gptr<Object_002f6a30_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_d4;
    r5 = 0x950868u;  // (from the original)
    if (r1 == 0) {
        r0 = r0 & ~0x10u;  // (from the original)
    } else {
        r0 = r0 | 0x10u;  // (from the original)
    }
    arg0->word_d4 = u32(r0);
    if ((*gptr<u32>(r5 + 4u) & 1u) != 0) {
        goto L_2f6a88;
    }
    r0 = r5 + 4u;
    r0 = call_002fe7dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        goto L_2f6a88;
    }
    if ((*gptr<u32>(r4 + 0xc4u) & 0x1000u) == 0) {  // (from the original)
        r0 = 0x14000u;  // (from the original)
    } else {
        r0 = 0x60000u;  // (from the original)
    }
    *gptr<u32>(r5 + 8u) = u32(r0);
L_2f6a88:;
    r1 = *gptr<u32>(r5 + 8u);
    r0 = *gptr<u32>(r4 + 0xc4u);  // (from the original)
    if ((*gptr<u32>(r4 + 0xd4u) & 0x10u) == 0) {  // (from the original)
        r0 = r0 & ~r1;
    } else {
        r0 = r0 | r1;
    }
    *gptr<u32>(r4 + 0xc4u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f6a30
GUEST_EXPORT(0x002f6a30, d_002f6a30::f_002f6a30);

// f_002f6b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6b8c {

struct __attribute__((packed)) Object_002f6b8c_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
    u8 unknown_c8[0xc];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Object_002f6b8c_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_002f6b8c_0, word_d4, 0xd4);  // (from the original)

inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)

u32 f_002f6b8c(gptr<Object_002f6b8c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    arg0->word_d4 = u32(arg0->word_d4 & ~4u);
    r2 = 0xc04u;  // (from the original)
    arg0->word_c4 = u32(r2);
    return call_002f6a30(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_002f6b8c
GUEST_EXPORT(0x002f6b8c, d_002f6b8c::f_002f6b8c);

// f_002f6d18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6d18 {

inline constexpr guest::Function<0x001fa354, u32(u32, u32, u32, u32)> call_001fa354;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)

u32 f_002f6d18(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_006d1e64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u8>(r0 + 0x40u) = u8(r1);  // (from the original)
    r0 = call_006d1e64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r0 + 0x1f4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001fa354(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002f6d18
GUEST_EXPORT(0x002f6d18, d_002f6d18::f_002f6d18);

// f_002f7a2e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7a2e {

inline constexpr guest::Function<0x002f9235, u32(u32, u32, u32, u32)> call_002f9234;  // (from the original)

u32 f_002f7a2e(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r1);
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r13 + 0xcu) = u32(0x2f7a25u);  // (from the original)
    r1 = r2;
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002f9234(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f7a2e
GUEST_EXPORT(0x002f7a2f, d_002f7a2e::f_002f7a2e);

// f_002f7c90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7c90 {

struct __attribute__((packed)) Object_002f7c90_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002f7c90_1, word_0, 0x0);  // (from the original)


void f_002f7c90(u32 r0, gptr<Object_002f7c90_1> arg1) {
    u32 r2 = 0;
    r2 = arg1->word_0;
    *gptr<u8>(r2) = u8(r0);
    arg1->word_0 = u32(r2 + 1u);
    return;
}

}  // namespace d_002f7c90
GUEST_EXPORT(0x002f7c91, d_002f7c90::f_002f7c90);

// f_002f7ca6: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7ca6 {

inline constexpr guest::Function<0x002f9235, u32(u32, u32, u32, u32)> call_002f9234;  // (from the original)

u32 f_002f7ca6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x40u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r1);
    *gptr<u32>(r13 + 0x14u) = u32(1u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r13 + 0xcu) = u32(0x2f7c9du);  // (from the original)
    r1 = r2;
    *gptr<u32>(r13 + 0x10u) = u32(r0);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002f9234(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f7ca6
GUEST_EXPORT(0x002f7ca7, d_002f7ca6::f_002f7ca6);

// f_002f7ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7ccc {

struct __attribute__((packed)) Object_002f7ccc_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_002f7ccc_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f7ccc_1, word_4, 0x4);  // (from the original)


void f_002f7ccc(u32 r0, gptr<Object_002f7ccc_1> arg1) {
    u32 r2 = 0;
    r2 = arg1->word_0;
    if (r2 >= arg1->word_4) {
        return;
    }
    arg1->word_0 = u32(r2 + 2u);
    *gptr<u16>(r2) = u16(r0);
    return;
}

}  // namespace d_002f7ccc
GUEST_EXPORT(0x002f7ccd, d_002f7ccc::f_002f7ccc);

// f_002f7cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7cdc {

inline constexpr guest::Function<0x001032ef, u32(u32, u32, u32, u32)> call_001032ee;  // (from the original)
inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)

u32 f_002f7cdc(u32 r0, u32 r1) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r3 = 0x11c195u;  // (from the original)
    r0 = call_002f7a2e(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r4;
    r0 = call_001032ee(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = ~0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0;
    }
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_002f7cdc
GUEST_EXPORT(0x002f7cdd, d_002f7cdc::f_002f7cdc);

// f_002f7d52: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7d52 {

struct __attribute__((packed)) Object_002f7d52_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002f7d52_1, word_0, 0x0);  // (from the original)


u32 f_002f7d52(u32 r0, gptr<Object_002f7d52_1> arg1) {
    u32 res = 0;
    u32 r1 = arg1.addr();
    r1 = arg1->word_0;
    if (r1 & 0x400u) {  // (from the original)
        r0 = u32(s32(r0 << 0x18) >> 0x18);  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 << 0x17;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(s32(r0 << 0x10) >> 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f7d52
GUEST_EXPORT(0x002f7d53, d_002f7d52::f_002f7d52);

// f_002f7d68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7d68 {

struct __attribute__((packed)) Object_002f7d68_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002f7d68_1, word_0, 0x0);  // (from the original)


u32 f_002f7d68(u32 r0, gptr<Object_002f7d68_1> arg1) {
    u32 res = 0;
    u32 r1 = arg1.addr();
    r1 = arg1->word_0;
    if (r1 & 0x400u) {  // (from the original)
        r0 = r0 << 0x18 >> 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 << 0x17;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 << 0x10 >> 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f7d68
GUEST_EXPORT(0x002f7d69, d_002f7d68::f_002f7d68);

// f_002f7d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7d80 {


u32 f_002f7d80(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    r1 = r0 - 0xau;  // (from the original)
    r0 = r0 - (r0 >> 2);
    r0 = r0 + (r0 >> 4);
    r0 = r0 + (r0 >> 8);
    r0 = r0 + (r0 >> 0x10) >> 3;  // (from the original)
    res = r1 - (r0 + (r0 << 2) << 1);
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        r1 = r1 + 0xau;  // (from the original)
    } else {
        r0 = r0 + 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f7d80
GUEST_EXPORT(0x002f7d80, d_002f7d80::f_002f7d80);

// f_002f7e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7e5c {


u32 f_002f7e5c(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 cf = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r2 = r0 - 0xau;  // (from the original)
    r3 = u32(u64(r1) + ~0u + u32(r0 >= 0xau));  // (from the original)
    r14 = r0 >> 2 | r1 << 0x1e;  // (from the original)
    cf = r0 >= r14;
    r0 = r0 - r14;
    r1 = u32(u64(r1) + ~(r1 >> 2) + cf);
    res = r0 + (r0 >> 4 | r1 << 0x1c);  // (from the original)
    cf = res < r0;
    r0 = res;
    r1 = u32(u64(r1) + (r1 >> 4) + cf);
    res = r0 + (r0 >> 8 | r1 << 0x18);  // (from the original)
    cf = res < r0;
    r0 = res;
    r1 = u32(u64(r1) + (r1 >> 8) + cf);
    res = r0 + (r0 >> 0x10 | r1 << 0x10);  // (from the original)
    cf = res < r0;
    r0 = res;
    r1 = u32(u64(r1) + (r1 >> 0x10) + cf);  // (from the original)
    res = r0 + r1;
    r1 = u32(u64(r1) + u32(res < r0));
    r0 = res >> 3 | r1 << 0x1d;  // (from the original)
    r1 = r1 >> 3;
    res = r0 + (r0 << 2);
    r5 = res;
    r4 = u32(u64(r1 << 2 | r0 >> 0x1e) + r1 + u32(res < r0));  // (from the original)
    res = r5 + r5;
    res = u32(u64(r3) + ~u32(u64(r4) + r4 + u32(res < r5)) + u32(r2 >= res));
    if (res >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r0 + 1u;
    cf = res < r0;
    r0 = res;
    r1 = u32(u64(r1) + cf);
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f7e5c
GUEST_EXPORT(0x002f7e5c, d_002f7e5c::f_002f7e5c);

// f_002f7ef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7ef4 {

struct __attribute__((packed)) Object_002f7ef4_0 {
    u8 unknown_0[0x2434];  // (not used here)
    u32 word_2434;
};
GUEST_OFFSET(Object_002f7ef4_0, word_2434, 0x2434);  // (from the original)


u32 f_002f7ef4(gptr<Object_002f7ef4_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r12 = 0;
    r2 = arg0->word_2434;
    res = r2 - r1;
    if (!(!u32(res == 0) && res >> 0x1f == ((r2 ^ r1) & (r2 ^ res)) >> 0x1f)) {  // (from the original)
        r12 = r2 + 4u;
        r3 = r1;
        if (u32(r12 >= r1) && !u32(r12 == r1)) {
            r1 = r3 - r2;
            r2 = r1 + (r1 << 3);
            r0 = r0 + (r2 + (r1 << 5) << 4) + 0x18b4u;  // (from the original)
            r1 = *gptr<u32>(*gptr<u32>(r0) + 0x60u);  // (from the original)
            return guest::call_address<u32>(r1, r0, r1, r2, r3);
        }
    }
    r1 = ~0u;
    r2 = r1 + (r1 << 3);
    r0 = r0 + (r2 + (r1 << 5) << 4) + 0x18b4u;  // (from the original)
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0x60u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, r2, r3);
}

}  // namespace d_002f7ef4
GUEST_EXPORT(0x002f7ef4, d_002f7ef4::f_002f7ef4);

// f_002f7f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7f40 {


u32 f_002f7f40(u32 r0) {
    if (r0 - 0x30u >= 0xau) {  // (from the original)
        r0 = 0u;
        return r0;
    }
    r0 = 1u;
    return r0;
}

}  // namespace d_002f7f40
GUEST_EXPORT(0x002f7f41, d_002f7f40::f_002f7f40);

// f_002f80c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f80c8 {

struct __attribute__((packed)) Object_002f80c8_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x8];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_002f80c8_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002f80c8_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002f80c8_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002f80c8_2, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x0010284d, u32(u32, u32, u32, u32)> call_0010284c;  // (from the original)

u32 f_002f80c8(u32 r0_unused, u32 r1, gptr<Object_002f80c8_2> arg2) {
    u32 r2 = arg2.addr();
    u32 r3 = 0;
    r3 = r1;
    guest::cpu()->r[13] -= 8u;
    r1 = r2;
    arg2->word_c = u32(r3);
    arg2->word_14 = u32(0x2f80bdu);  // (from the original)
    arg2->word_20 = u32(0x1024edu);  // (from the original)
    r2 = 0u;
    arg2->word_10 = u32(r2);
    call_0010284c(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return guest::cpu()->r[0];
}

}  // namespace d_002f80c8
GUEST_EXPORT(0x002f80c9, d_002f80c8::f_002f80c8);

// f_002f81e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f81e4 {

struct __attribute__((packed)) Object_002f81e4_0 {
    u8 unknown_0[0x2434];  // (not used here)
    u32 word_2434;
};
GUEST_OFFSET(Object_002f81e4_0, word_2434, 0x2434);  // (from the original)

inline constexpr guest::Function<0x001df368, u32(u32, u32, u32, u32)> call_001df368;  // (from the original)
inline constexpr guest::Function<0x006cce5c, u32(u32, u32, u32, u32)> call_006cce5c;  // (from the original)

u32 f_002f81e4(gptr<Object_002f81e4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r2;
    r0 = arg0->word_2434;
    res = r0 - r1;
    if (!(!u32(res == 0) && res >> 0x1f == ((r0 ^ r1) & (r0 ^ res)) >> 0x1f)) {  // (from the original)
        r3 = r0 + 4u;
        r2 = r1;
        if (u32(r3 >= r1) && !u32(r3 == r1)) {
            r6 = r2 - r0;
            goto L_2f821c;
        }
    }
    r6 = ~0u;
L_2f821c:;
    guest::cpu()->r[13] = r13;
    r0 = call_001df368(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r5);
    r3 = r6;
    r1 = *gptr<u32>(0x185cu + r4);  // (from the original)
    r2 = *gptr<u32>(r4 + (r1 << 2) + 0x1860u) - 1u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006cce5c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f81e4
GUEST_EXPORT(0x002f81e4, d_002f81e4::f_002f81e4);

// f_002f83b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f83b0 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013e560, u32(u32, u32, u32, u32)> call_0013e560;  // (from the original)

u32 f_002f83b0(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r6 = *gptr<u32>(0x974f28u);  // (from the original)
    r4 = r6 + 0x58u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0013e560(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r14 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    return call_001357ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002f83b0
GUEST_EXPORT(0x002f83b0, d_002f83b0::f_002f83b0);

// f_002f83f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f83f0 {

inline constexpr guest::Function<0x0022c53c, u32(u32, u32, u32, u32)> call_0022c53c;  // (from the original)
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> call_002682ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_002f83f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002682ac(r0, r1, r2, r3);
    r1 = r0 + 0x1888u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r1 + 4u) = u32(r4);
    *gptr<u8>(r1 + 8u) = u8(r4);
    r3 = *gptr<u32>(0x87a2d8u + 4);  // (from the original)
    r5 = r0 + 0x1894u;  // (from the original)
    *gptr<u32>(r5) = u32(*gptr<u32>(0x87a2d8u));  // (from the original)
    *gptr<u32>(r5 + 4) = u32(r3);
    *gptr<u32>(r5 + 8) = u32(r4);
    r2 = 0x8f3ef4u;  // (from the original)
    *gptr<u8>(r1 + 0x18u) = u8(r4);  // (from the original)
    *gptr<u32>(r1 + 0x1cu) = u32(r4);  // (from the original)
    r3 = r2 + 0x2cu;  // (from the original)
    *gptr<u32>(r1 + 0x20u) = u32(r4);  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + 0xa40u) = u32(r3);  // (from the original)
    r0 = r0 + 0x18acu;  // (from the original)
    *gptr<u32>(r1) = u32(r3 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005673c8(r0, r1, r2, r3);
    r1 = 0x320a80u;  // (from the original)
    r3 = 4u;
    r2 = 0x290u;  // (from the original)
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xa40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c53c(r0, r1, r2, r3);
    r1 = 0x2434u;  // (from the original)
    r0 = r0 - 0x22f4u;  // (from the original)
    *gptr<u32>(r1 + r0) = u32(r4);
    *gptr<u8>(r1 + 4u + r0) = u8(r4);
    r1 = 0x9533c4u;  // (from the original)
    ea = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(0x2f84b8u);  // (from the original)
    ea = r0 + 0xa64u;  // (from the original)
    *gptr<u32>(ea) = u32(0x2f84c4u);  // (from the original)
    ea = r0 + 0xa68u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(0x2f84d0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f83f0
GUEST_EXPORT(0x002f83f0, d_002f83f0::f_002f83f0);

// f_002f860c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f860c {

struct __attribute__((packed)) Object_002f860c_0 {
    u32 word_0;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 word_a40;
    u8 unknown_a44[0xe44];  // (not used here)
    u32 word_1888;
    u8 unknown_188c[0xa68];  // (not used here)
    u32 word_22f4;
    u8 unknown_22f8[0x8];  // (not used here)
    u32 word_2300;
};
GUEST_OFFSET(Object_002f860c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f860c_0, word_a40, 0xa40);  // (from the original)
GUEST_OFFSET(Object_002f860c_0, word_1888, 0x1888);  // (from the original)
GUEST_OFFSET(Object_002f860c_0, word_22f4, 0x22f4);  // (from the original)
GUEST_OFFSET(Object_002f860c_0, word_2300, 0x2300);  // (from the original)

inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> call_002684c0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_002f860c(gptr<Object_002f860c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r3 = 0x8f3ef4u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_a40 = u32(r3 + 0x2cu);  // (from the original)
    arg0->word_0 = u32(r3);
    arg0->word_1888 = u32(r3 + 0x40u);  // (from the original)
    r2 = 0x8ee248u;  // (from the original)
    r1 = r2 + 0x10u;  // (from the original)
    arg0->word_22f4 = u32(r2);
    arg0->word_2300 = u32(r1);
    r0 = r0 + 0x2408u;  // (from the original)
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
    r0 = r0 - 0x2cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x320b0cu;  // (from the original)
    r4 = r0 - 0x2314u;  // (from the original)
    r3 = 4u;
    r2 = 0x290u;  // (from the original)
    r0 = r0 - 0xa60u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18acu;  // (from the original)
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x18acu;  // (from the original)
    return call_002684c0(r0, r1, r2, r3);
}

}  // namespace d_002f860c
GUEST_EXPORT(0x002f860c, d_002f860c::f_002f860c);

// f_002f86f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f86f0 {

struct __attribute__((packed)) Object_002f86f0_0 {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Object_002f86f0_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f86f0_0, byte_2, 0x2);  // (from the original)


u32 f_002f86f0(gptr<Object_002f86f0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = *gptr<u32>(0x95386cu);  // (from the original)
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(arg0->byte_2);
    r0 = u32(arg0->half_0);
    if (r2 < 4u) {
        r1 = r1 + (r2 << 1);
        *gptr<u16>(r1 + 0xa0u) = u16(r0);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f86f0
GUEST_EXPORT(0x002f86f0, d_002f86f0::f_002f86f0);

// f_002f8720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8720 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_002f8720(u32 r0) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r0);  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ea = r13;
    r13 = r13 + 8;
    r0 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f8720
GUEST_EXPORT(0x002f8720, d_002f8720::f_002f8720);

// f_002f872c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f872c {

struct __attribute__((packed)) Object_002f872c_0 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(Object_002f872c_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f872c_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_002f872c_0, half_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_002f872c(gptr<Object_002f872c_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r0;
    r6 = 0u;
    r8 = 1u;
    r0 = u32(arg0->half_0);
    arg0->half_2 = u16(r1);
    arg0->half_4 = u16(r8);
    if ((r0 & 0xffu) == 1u) {  // (from the original)
        r0 = 0x94d86cu;  // (from the original)
    } else {
        r0 = 0x94d7b0u;  // (from the original)
    }
    r4 = *gptr<u32>(r0 + (r1 << 2));
    if (r1 >= 0x2fu) {  // (from the original)
        goto L_2f881c;
    }
    if (r4 == 0) {
        goto L_2f881c;
    }
    r9 = u32(*gptr<u8>(r4));
    r0 = 0u;
    r2 = r9 - 1u;
    res = r2;
    if (u32(res == 0) || res >> 0x1f != (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2f87bc;
    }
    ea = r4 + 4u;
    r3 = 0u;
    r1 = *gptr<u32>(ea) - 1u;
    if ((r9 & 1u) == 0) {
        ea = r1 + 2u;
        r1 = ea;
        r0 = u32(*gptr<u8>(ea));
    }
    res = u32(s32(r2) >> 1);
    r2 = res;
    r12 = u32(*gptr<u8>(r1 + 2u));
    if (res == 0) {
        goto L_2f87b8;
    }
    do {
L_2f87a0:;
        ea = r1 + 4u;
        r1 = ea;
        r7 = u32(*gptr<u8>(ea));
        r0 = r0 + r12;
        r12 = u32(*gptr<u8>(r1 + 2u));
        res = r2 - 1u;
        r2 = res;
        r3 = r3 + r7;
        guest::preempt();
    } while (res != 0);
L_2f87b8:;
    r0 = r0 + r3;
L_2f87bc:;
    res = r9 - 1u;
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        r2 = *gptr<u32>(r4 + 4u);
        r1 = u32(*gptr<u8>(r2 + (r8 + (r1 << 1))));
        r0 = r0 + r1;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r12 = guest::cpu()->r[12];
    r3 = u32(*gptr<u8>(r4));
    r1 = r0;
    r0 = 0u;
    nf = r3 >> 0x1f;  // (from the original)
    zf = r3 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r12 = *gptr<u32>(r4 + 4u);
    }
    if (zf || nf != vf) {
        goto L_2f8820;
    }
L_2f87f4:;
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r12 + (r0 << 1))));
    r2 = u32(*gptr<u8>(r13 + 1u));
    if (s32(r1) >= s32(r2)) {
        goto L_2f882c;
    }
    r0 = u32(*gptr<u8>(r13));
    *gptr<u16>(r5 + 2u) = u16(r0);
    if (r0 != 0) {
        goto L_2f8820;
    }
L_2f881c:;
    *gptr<u16>(r5 + 4u) = u16(r6);
L_2f8820:;
    r0 = u32(*gptr<u16>(r5 + 4u)) & 0xffu;  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2f882c:;
    r0 = r0 + 1u;
    res = r0 - r3;
    r1 = r1 - r2;
    if (res >> 0x1f != ((r0 ^ r3) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_2f87f4;
    }
    guest::preempt();
    goto L_2f8820;
}

}  // namespace d_002f872c
GUEST_EXPORT(0x002f872c, d_002f872c::f_002f872c);

// f_002f8848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8848 {

inline constexpr guest::Function<0x00100dc5, u32(u32, u32, u32, u32)> call_00100dc4;  // (from the original)

u32 f_002f8848(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    if (u32(r0 >= 0x7fu) && !u32(r0 == 0x7fu)) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_00100dc4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002f8848
GUEST_EXPORT(0x002f8849, d_002f8848::f_002f8848);

// f_002f8b78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8b78 {

struct __attribute__((packed)) Object_002f8b78_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8b78_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f8b78_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f8b78_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_002f8b78_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8b78_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f8b78_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f8b78_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00150d2c, u32(u32, u32, u32, u32)> call_00150d2c;  // (from the original)
inline constexpr guest::Function<0x001510d0, u32(u32, u32, u32, u32)> call_001510d0;  // (from the original)

u32 f_002f8b78(gptr<Object_002f8b78_0> arg0, gptr<Object_002f8b78_1> arg1, u32 r2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 nf = 0;
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    *gptr<u32>(ea + 4) = u32(r7);
    *gptr<u32>(ea + 8) = u32(r11);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r11 = r2;
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    r13 = r13 - 8;
    r3 = arg1->word_0;
    r4 = arg1->word_4;
    r5 = arg1->word_8;
    r0 = arg0->word_0;
    r1 = arg0->word_4;
    r2 = arg0->word_8;
    nf = (r1 & ~(r0 << 1)) >> 0x1f;  // (from the original)
    if (nf) {
        nf = (r4 & ~(r3 << 1)) >> 0x1f;  // (from the original)
    }
    if (nf) {
        guest::cpu()->r[13] = r13;
        r0 = call_00150d2c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_001510d0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    ea = r13;
    r13 = r13 + 8;
    r11 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f8b78
GUEST_EXPORT(0x002f8b78, d_002f8b78::f_002f8b78);

// f_002f8ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8ba8 {

struct __attribute__((packed)) Object_002f8ba8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8ba8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f8ba8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f8ba8_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_002f8ba8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8ba8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f8ba8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f8ba8_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x001510d0, u32(u32, u32, u32, u32)> call_001510d0;  // (from the original)
inline constexpr guest::Function<0x0015120c, u32(u32, u32, u32, u32)> call_0015120c;  // (from the original)

u32 f_002f8ba8(gptr<Object_002f8ba8_0> arg0, gptr<Object_002f8ba8_1> arg1, u32 r2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    *gptr<u32>(ea + 4) = u32(r7);
    *gptr<u32>(ea + 8) = u32(r11);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r11 = r2;
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    r13 = r13 - 8;
    r3 = arg1->word_0;
    r4 = arg1->word_4;
    r5 = arg1->word_8;
    r0 = arg0->word_0;
    r1 = arg0->word_4;
    r2 = arg0->word_8;
    zf = (r0 & 0x40000000u) == 0;  // (from the original)
    if (zf) {
        zf = (r3 & 0x40000000u) == 0;  // (from the original)
    }
    if (zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_0015120c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_001510d0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    ea = r13;
    r13 = r13 + 8;
    r11 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f8ba8
GUEST_EXPORT(0x002f8ba8, d_002f8ba8::f_002f8ba8);

// f_002f8bd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8bd8 {


u32 f_002f8bd8(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r13 = r13 - 8;
    r1 = *gptr<u32>(r13 + 4u) << 1;
    r0 = *gptr<u32>(r13);
    r13 = r13 + 8u;
    res = r0 | r1 << 0xb;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = 4u;
    }
    if (r1 >> 0x15 != 0) {  // (from the original)
        r0 = r0 | 1u;
    }
    if (0x7ffu == r1 >> 0x15) {  // (from the original)
        r0 = r0 | 2u;
    }
    if (r0 == 1u) {
        r0 = 5u;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f8bd8
GUEST_EXPORT(0x002f8bd8, d_002f8bd8::f_002f8bd8);

// f_002f915c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f915c {

inline constexpr guest::Function<0x0022c53c, u32(u32, u32, u32, u32)> call_0022c53c;  // (from the original)

u32 f_002f915c(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0022c53c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x8f4008u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 0xcu) = u32(r1 + 0x10u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f915c
GUEST_EXPORT(0x002f915c, d_002f915c::f_002f915c);

// f_002f93bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f93bc {

inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x005c6f7c, u32(u32, u32, u32, u32)> call_005c6f7c;  // (from the original)
inline constexpr guest::Function<0x0069a91c, u32(u32, u32, u32, u32)> call_0069a91c;  // (from the original)
inline constexpr guest::Function<0x007d0d5c, u32(u32, u32, u32, u32)> call_007d0d5c;  // (from the original)

u32 f_002f93bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r0 = 0x95385cu;  // (from the original)
    r4 = *gptr<u32>(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_005c6f7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
    *gptr<u8>(r13) = u8(r6);
    *gptr<u8>(r13 + 1u) = u8(r6);
    *gptr<u8>(r13 + 2u) = u8(r6);
    r0 = *gptr<u32>(0x950148u);  // (from the original)
    if (r0 != 0) {
        r1 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0069a91c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = r5 & 0xf0u;  // (from the original)
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r13)) & ~0xfu | 3u);  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(r13 + 1u)) & ~0xf0u | r5 << 4);  // (from the original)
    r0 = u32(*gptr<u8>(r13 + 2u)) & ~0xfu | r1 >> 4;  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0 & 7u;
    *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r13 + 2u)) & ~0x70u | r2 << 4);  // (from the original)
    *gptr<u8>(r4 + 0x10u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x11u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x12u) = u8(4u);  // (from the original)
    *gptr<u8>(r4 + 0x13u) = u8(0x3fu);  // (from the original)
    r1 = r13;
    r0 = 4u;
    *gptr<u32>(r4 + 0x14u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007d0d5c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f93bc
GUEST_EXPORT(0x002f93bc, d_002f93bc::f_002f93bc);

// f_002f9888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9888 {


u32 f_002f9888(u32 r0, u32 r1) {
    u32 r2 = 0;
    if (r0 < 0x3au) {  // (from the original)
        r0 = r0 - 0x30u;  // (from the original)
    }
    r2 = r0 & ~0x20u;  // (from the original)
    if (r2 >= 0x41u) {  // (from the original)
        r0 = r2 - 0x37u;  // (from the original)
    }
    if (r0 < r1) {
        return r0;
    }
    r0 = ~0u;
    return r0;
}

}  // namespace d_002f9888
GUEST_EXPORT(0x002f9889, d_002f9888::f_002f9888);

// f_002f99b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f99b8 {

struct __attribute__((packed)) Object_002f99b8_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_002f99b8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f99b8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002f99b8_0, word_c, 0xc);  // (from the original)


void f_002f99b8(gptr<Object_002f99b8_0> arg0) {
    u32 r1 = 0;
    arg0->word_c = u32((arg0->word_c | 0x80u) & ~(0x80u << 0xe));  // (from the original)
    r1 = 0u;
    arg0->word_8 = u32(r1);
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002f99b8
GUEST_EXPORT(0x002f99b9, d_002f99b8::f_002f99b8);

// f_002f99cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f99cc {

struct __attribute__((packed)) Object_002f99cc_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_002f99cc_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002f99cc_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002f99cc_2, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x002f99b9, u32(u32, u32, u32, u32)> call_002f99b8;  // (from the original)
inline constexpr guest::Function<0x003fd604, u32(u32, u32, u32, u32)> call_003fd604;  // (from the original)
inline constexpr guest::Function<0x003fd608, u32(u32, u32, u32, u32)> call_003fd608;  // (from the original)

u32 f_002f99cc(u32 r0, u32 r1, gptr<Object_002f99cc_2> arg2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r13 = ea;
    r6 = r1;
    r4 = r2;
    r5 = arg2->word_c;
    r7 = arg2->word_14;
    if ((r5 & 0x20010u) != 0) {  // (from the original)
        r1 = arg2->word_18;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_003fd604(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        res = r0;
        if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            goto L_2f9a0c;
        }
        r5 = r5 & ~0x20010u;  // (from the original)
        *gptr<u32>(r4 + 0xcu) = u32(r5);  // (from the original)
    }
    r1 = *gptr<u32>(r13);
    r3 = r5;
    r2 = r6;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_003fd608(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r6 - (r0 << 1 >> 1);
    r1 = *gptr<u32>(r4 + 0x18u) + r2;  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(r1);  // (from the original)
    if (r0 == 0) {
        goto L_2f9a16;
    }
L_2f9a0c:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f99b8(r0, r1, r2, r3);
    r0 = ~0u;
L_2f9a16:;
    r1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002f99cc
GUEST_EXPORT(0x002f99cd, d_002f99cc::f_002f99cc);

// f_002f9a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9a18 {

struct __attribute__((packed)) Object_002f9a18_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x18];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_002f9a18_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f9a18_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002f9a18_0, word_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x002f99cd, u32(u32, u32, u32, u32)> call_002f99cc;  // (from the original)

u32 f_002f9a18(gptr<Object_002f9a18_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = arg0->word_10;
    r0 = arg0->word_2c;
    r1 = arg0->word_4;
    if (!(u32(r0 >= r1) && !u32(r0 == r1))) {
        r0 = r1;
    }
    res = 5u;
    r1 = *gptr<u32>(r4 + 0xcu) & ~(res << 0x13);  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
    res = r1 << 0xf;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_2f9a60;
    }
    if (r0 == r5) {
        goto L_2f9a4e;
    }
    r1 = r0 - r5;
    r2 = r4;
    r0 = r5;
    r0 = call_002f99cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_2f9a4e;
    }
    r0 = ~0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_2f9a4e:;
    *gptr<u32>(r4 + 0x2cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r5);
    *gptr<u32>(r4 + 8u) = u32(0u);
    r1 = 1u << 0x10;  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r4 + 0xcu) & ~r1);  // (from the original)
L_2f9a60:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f9a18
GUEST_EXPORT(0x002f9a19, d_002f9a18::f_002f9a18);

// f_002f9a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9a64 {

struct __attribute__((packed)) Object_002f9a64_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x8];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0xc];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_002f9a64_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002f9a64_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002f9a64_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x002f9a19, u32(u32, u32, u32, u32)> call_002f9a18;  // (from the original)

u32 f_002f9a64(gptr<Object_002f9a64_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_c = u32(arg0->word_c & ~0x20u);  // (from the original)
    r1 = arg0->word_28;
    if (arg0->word_18 != r1) {
        r0 = r4;
        r0 = call_002f9a18(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r4 + 0xcu) & ~(3u << 0xc) | 0x10u);  // (from the original)
        *gptr<u32>(r4 + 0x18u) = u32(*gptr<u32>(r4 + 0x28u));  // (from the original)
        r0 = *gptr<u32>(r4 + 0x10u);  // (from the original)
        *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
        *gptr<u32>(r4 + 4u) = u32(r0);
    }
    r1 = 0xffffbfbfu;  // (from the original)
    r0 = *gptr<u32>(r4 + 0xcu) & r1;  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f9a64
GUEST_EXPORT(0x002f9a65, d_002f9a64::f_002f9a64);

// f_002f9aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9aa8 {

struct __attribute__((packed)) Object_002f9aa8_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0x2a];  // (not used here)
    u8 byte_34;
    u8 byte_35;
    u8 byte_36;
    u8 byte_37;
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 byte_3b;
};
GUEST_OFFSET(Object_002f9aa8_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_35, 0x35);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_36, 0x36);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_37, 0x37);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_3a, 0x3a);  // (from the original)
GUEST_OFFSET(Object_002f9aa8_0, byte_3b, 0x3b);  // (from the original)

inline constexpr guest::Function<0x002e6a3c, u32(u32, u32, u32, u32)> call_002e6a3c;  // (from the original)

u32 f_002f9aa8(gptr<Object_002f9aa8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    arg0->byte_0 = u8(r4);
    arg0->byte_1 = u8(r4);
    arg0->byte_2 = u8(r4);
    arg0->byte_3 = u8(r4);
    arg0->byte_4 = u8(r4);
    arg0->byte_5 = u8(r4);
    arg0->byte_6 = u8(r4);
    arg0->byte_7 = u8(r4);
    arg0->byte_8 = u8(r4);
    arg0->byte_9 = u8(r4);
    arg0->byte_34 = u8(r4);
    arg0->byte_35 = u8(r4);
    arg0->byte_36 = u8(r4);
    arg0->byte_37 = u8(r4);
    arg0->byte_38 = u8(r4);
    arg0->byte_39 = u8(r4);
    arg0->byte_3a = u8(r4);
    arg0->byte_3b = u8(r4);
    r0 = r0 + 0x3cu;  // (from the original)
    r0 = call_002e6a3c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 - 0x3cu;  // (from the original)
    *gptr<u32>(r0 + 0x68u) = u32(r4);  // (from the original)
    *gptr<u16>(r0 + 0x98u) = u16(r4);  // (from the original)
    *gptr<u8>(r0 + 0x9au) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0x9bu) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0x9cu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x9du) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x9eu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x9fu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0xaau) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0xabu) = u8(r4);  // (from the original)
    r1 = 0x88f298u;  // (from the original)
    *gptr<u8>(r0 + 0xacu) = u8(r4);  // (from the original)
    *gptr<u16>(r0 + 0xaeu) = u16(r4);  // (from the original)
    *gptr<u16>(r0 + 0xb0u) = u16(r4);  // (from the original)
    *gptr<u8>(r0 + 0xb2u) = u8(r4);  // (from the original)
    *gptr<u16>(r0 + 0xa0u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xa2u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xa4u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    *gptr<u16>(r0 + 0xa6u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r1 = 0x7ffeu;  // (from the original)
    *gptr<u16>(r0 + 0xa8u) = u16(r1);  // (from the original)
    *gptr<u8>(r0 + 0x64u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x65u) = u8(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002f9aa8
GUEST_EXPORT(0x002f9aa8, d_002f9aa8::f_002f9aa8);

// f_002fa47c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fa47c {

struct __attribute__((packed)) Object_002fa47c_0 {
    u8 unknown_0[0x79];  // (not used here)
    u8 byte_79;
    u8 unknown_7a[0x6];  // (not used here)
    u32 word_80;
    u8 unknown_84[0x44];  // (not used here)
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
    u32 word_d8;
    u32 word_dc;
    u32 word_e0;
    u32 word_e4;
    u32 word_e8;
    u32 word_ec;
    u32 word_f0;
    u32 word_f4;
    u32 word_f8;
    u32 word_fc;
};
GUEST_OFFSET(Object_002fa47c_0, byte_79, 0x79);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_d4, 0xd4);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_d8, 0xd8);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_dc, 0xdc);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_e0, 0xe0);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_e4, 0xe4);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_e8, 0xe8);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_ec, 0xec);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_f0, 0xf0);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_f4, 0xf4);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_f8, 0xf8);  // (from the original)
GUEST_OFFSET(Object_002fa47c_0, word_fc, 0xfc);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_002fa47c(gptr<Object_002fa47c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0u;
    *gptr<u8>(arg0->word_80) = u8(u32(*gptr<u8>(0x8c9f1cu)));  // (from the original)
    r0 = ~0u;
    arg0->byte_79 = u8(r5);
    arg0->word_c8 = u32(r0);
    arg0->word_cc = u32(r0);
    arg0->word_d0 = u32(r0);
    arg0->word_e4 = u32(r0);
    arg0->word_e0 = u32(r0);
    arg0->word_dc = u32(r0);
    arg0->word_d8 = u32(r0);
    arg0->word_d4 = u32(r0);
    arg0->word_e8 = u32(r5);
    arg0->word_f0 = u32(r0);
    arg0->word_f4 = u32(r0);
    arg0->word_f8 = u32(r0);
    arg0->word_fc = u32(r0);
    arg0->word_ec = u32(r0);
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 0x100u;  // (from the original)
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x104u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002fa47c
GUEST_EXPORT(0x002fa47c, d_002fa47c::f_002fa47c);

// f_002fad7a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fad7a {

inline constexpr guest::Function<0x0011d7ec, u32(u32, u32, u32, u32)> call_0011d7ec;  // (from the original)
inline constexpr guest::Function<0x00142104, u32(u32, u32, u32, u32)> call_00142104;  // (from the original)
inline constexpr guest::Function<0x002f91d4, u32(u32, u32, u32, u32)> call_002f91d4;  // (from the original)
inline constexpr guest::Function<0x002fac79, u32(u32, u32, u32, u32)> call_002fac78;  // (from the original)
inline constexpr guest::Function<0x003fdfd8, u32(u32, u32, u32, u32)> call_003fdfd8;  // (from the original)

u32 f_002fad7a(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r13 = ea;
    r6 = r0;
    r4 = r1;
    r5 = r2;
    if (r1 & 2u) {
        r1 = r2;
        r0 = 0x944434u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00142104(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 = r0;
        if (r0 == 0) {
            goto L_2fae0c;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002f91d4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 = r7 + 1u;
        *gptr<u32>(r0 + 4u) = u32(r7);
    }
    if ((r4 & 1u) != 0u) {
        r1 = r5;
        r0 = 0x944434u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003fdfd8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 = r0;
        if (r0 == 0) {
            goto L_2fae0c;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002f91d4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r0) = u32(r7);
    }
    if (r4 & 4u) {
        r1 = r5;
        r0 = 0x944434u;  // (from the original)
        r7 = r0;
        if (r0 == 0) {
            goto L_2fae0c;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002f91d4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r0 + 8u) = u32(r7);
    }
    if (r4 & 8u) {
        r1 = r5;
        r0 = 0x944434u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0011d7ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 = r0;
        if (r0 == 0) {
            goto L_2fae0c;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002f91d4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r0 + 0xcu) = u32(r7);  // (from the original)
    }
    if (r4 & 0x10u) {  // (from the original)
        r1 = r5;
        r0 = 0x944434u;  // (from the original)
        r5 = r0;
        if (r0 == 0) {
            goto L_2fae0c;
        }
        guest::cpu()->r[13] = r13;
        r0 = call_002f91d4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r0 + 0x10u) = u32(r5);  // (from the original)
    }
    r1 = r4;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fac78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_2fae0c:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002fad7a
GUEST_EXPORT(0x002fad7b, d_002fad7a::f_002fad7a);

// f_002fae74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fae74 {

struct __attribute__((packed)) Object_002fae74_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002fae74_0, word_0, 0x0);  // (from the original)


void f_002fae74(gptr<Object_002fae74_0> arg0) {
    u32 r1 = 0;
    r1 = 0xaf7f3cu;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002fae74
GUEST_EXPORT(0x002fae75, d_002fae74::f_002fae74);

// f_002fb7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fb7b0 {

struct __attribute__((packed)) Object_002fb7b0_0 {
    u8 unknown_0[0x79];  // (not used here)
    u8 byte_79;
};
GUEST_OFFSET(Object_002fb7b0_0, byte_79, 0x79);  // (from the original)

inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32, u32, u32)> call_0058c5f0;  // (from the original)

u32 f_002fb7b0(gptr<Object_002fb7b0_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    res = u32(arg0->byte_79) << 0x1d >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_00584134(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x24u;  // (from the original)
    r0 = call_0058c5f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = u32(*gptr<u8>(r4 + 0x79u)) & ~4u & ~2u;  // (from the original)
    *gptr<u8>(r4 + 0x79u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002fb7b0
GUEST_EXPORT(0x002fb7b0, d_002fb7b0::f_002fb7b0);

// f_002fbf60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fbf60 {

inline constexpr guest::Function<0x001745f8, u32(u32, u32, u32, u32)> call_001745f8;  // (from the original)

u32 f_002fbf60(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    r2 = 1u;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r3 = r2;
    *gptr<u32>(r13) = u32(r2);
    r2 = 0x2fbf7cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001745f8(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_002fbf60
GUEST_EXPORT(0x002fbf60, d_002fbf60::f_002fbf60);

// f_002fc194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fc194 {

struct __attribute__((packed)) Object_002fc194_0 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 unknown_9[0x1];  // (not used here)
    u16 half_a;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
};
GUEST_OFFSET(Object_002fc194_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_f, 0xf);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_13, 0x13);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002fc194_0, byte_15, 0x15);  // (from the original)

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)

u32 f_002fc194(gptr<Object_002fc194_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = 0u;
    arg0->byte_1 = u8(r0);
    arg0->byte_2 = u8(r0);
    arg0->byte_3 = u8(r0);
    arg0->byte_4 = u8(r0);
    arg0->byte_5 = u8(r0);
    arg0->byte_6 = u8(r0);
    arg0->byte_7 = u8(r0);
    arg0->byte_8 = u8(r0);
    arg0->half_a = u16(r0);
    arg0->byte_c = u8(r0);
    arg0->byte_d = u8(r0);
    arg0->byte_e = u8(r0);
    arg0->byte_f = u8(r0);
    r5 = 0xffu;  // (from the original)
    arg0->byte_10 = u8(r0);
    arg0->byte_11 = u8(r5);
    arg0->byte_12 = u8(r0);
    arg0->byte_13 = u8(r0);
    arg0->byte_14 = u8(r0);
    arg0->byte_15 = u8(r0);
    r0 = r4 + 0x16u;  // (from the original)
    r0 = call_003052f0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = ~0u;
    *gptr<u8>(r4 + 0x44u) = u8(r5);  // (from the original)
    *gptr<u32>(r4 + 0x48u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x4cu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_002fc194
GUEST_EXPORT(0x002fc194, d_002fc194::f_002fc194);

// f_002fc2a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fc2a4 {

inline constexpr guest::Function<0x001b1b40, u32(u32, u32, u32, u32)> call_001b1b40;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;  // (from the original)
inline constexpr guest::Function<0x0070b49c, u32(u32, u32, u32, u32)> call_0070b49c;  // (from the original)
inline constexpr guest::Function<0x0070b510, u32(u32, u32, u32, u32)> call_0070b510;  // (from the original)
inline constexpr guest::Function<0x0070b574, u32(u32, u32, u32, u32)> call_0070b574;  // (from the original)
inline constexpr guest::Function<0x0070b5e8, u32(u32, u32, u32, u32)> call_0070b5e8;  // (from the original)

u32 f_002fc2a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x18;  // (from the original)
    zf = r1 == 4u;
    r13 = r13 - 0x10u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = 0u;
    if (zf) {
        goto L_2fc364;
    }
    zf = r6 == 3u;
    if (zf) {
        goto L_2fc440;
    }
    zf = r6 == 1u;
    if (!zf) {
        zf = r6 == 2u;
    }
    if (zf) {
        goto L_2fc554;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 + 0x62000u;  // (from the original)
    r1 = r1 + 0x1ccu;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_001b1b40(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r6 == 5u;
    if (zf) {
        goto L_2fc5a0;
    }
    zf = r6 == 6u;
    if (zf) {
        goto L_2fc628;
    }
    zf = r6 == 7u;
    if (zf) {
        goto L_2fc6ac;
    }
    zf = r6 == 8u;
    if (zf) {
        goto L_2fc734;
    }
    r1 = 0x2000u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = 0x6214eu;  // (from the original)
    r3 = 0x172bu;  // (from the original)
    r12 = 1u;
    r0 = u32(*gptr<u8>(r0 + r1));
    zf = r0 >> 4 == 0;
    if (zf) {
        r2 = 1u;
    } else {
        r2 = 0u;
    }
    r0 = 0u;
L_2fc344:;
    r1 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    cf = r1 >= 0xb9u;  // (from the original)
    if (cf) {
        r1 = 0u;
    }
    zf = r1 == r6;
    if (!zf) {
        goto L_2fc7e0;
    }
    zf = r2 == 0;
    if (!zf) {
        goto L_2fc7c4;
    }
    goto L_2fc7b8;
L_2fc364:;
    r3 = 0u;
    r2 = 5u;
    r1 = 3u;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 6u;
    r1 = 3u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 7u;
    r1 = 3u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 5u;
    r1 = 4u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 6u;
    r1 = 4u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 7u;
    r1 = 4u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r2 = 5u;
    r3 = 0u;
    r1 = r2;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 6u;
    r1 = 5u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 7u;
    r1 = 5u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_2fc438:;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2fc440:;
    r0 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        zf = r0 == 1u;
        if (zf) {
            goto L_2fc504;
        }
        zf = r0 == 2u;
        if (!zf) {
            guest::preempt();
            goto L_2fc438;
        }
        r3 = 0u;
        r2 = 7u;
        r1 = 3u;
        r0 = r5;
        *gptr<u32>(r13) = u32(r4);
        guest::cpu()->r[13] = r13;
        r0 = call_006f2908(r0, r1, r2, r3);
        r3 = 0u;
        r2 = 7u;
        r1 = 4u;
        r0 = r5;
        *gptr<u32>(r13) = u32(r4);
        guest::cpu()->r[13] = r13;
        r0 = call_006f2908(r0, r1, r2, r3);
        r3 = 0u;
        r2 = 7u;
        r1 = 5u;
        r0 = r5;
        *gptr<u32>(r13) = u32(r4);
        guest::cpu()->r[13] = r13;
        r0 = call_006f2908(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x10u;  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = 0u;
    r2 = 5u;
    r1 = 3u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 5u;
    r1 = 4u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r2 = 5u;
    r3 = 0u;
    r1 = r2;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2fc504:;
    r3 = 0u;
    r2 = 6u;
    r1 = 3u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 6u;
    r1 = 4u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 6u;
    r1 = 5u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2fc554:;
    r2 = r1;
    r3 = 0u;
    r1 = 3u;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r6;
    r1 = 4u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r6;
    r1 = 5u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2fc5a0:;
    r1 = 3u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b510(r0, r1, r2, r3);
    r2 = r0;
    r0 = 0u;
    r3 = r0;
    *gptr<u32>(r13) = u32(r0);
    r1 = 3u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 4u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b510(r0, r1, r2, r3);
    r2 = r0;
    r0 = 0u;
    r3 = r0;
    *gptr<u32>(r13) = u32(r0);
    r1 = 4u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 5u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b510(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r0;
    r1 = 5u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2fc628:;
    r1 = 3u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b5e8(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r0;
    r1 = 3u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 4u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b5e8(r0, r1, r2, r3);
    r2 = r0;
    r0 = 0u;
    r3 = r0;
    *gptr<u32>(r13) = u32(r0);
    r1 = 4u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 5u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b5e8(r0, r1, r2, r3);
    r2 = r0;
    r3 = 0u;
    r1 = 5u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2fc6ac:;
    r1 = 3u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b49c(r0, r1, r2, r3);
    r2 = r0;
    r0 = 0u;
    r3 = r0;
    *gptr<u32>(r13) = u32(r0);
    r1 = 3u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 4u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b49c(r0, r1, r2, r3);
    r2 = 0u;
    r3 = r2;
    *gptr<u32>(r13) = u32(r2);
    r2 = r0;
    r1 = 4u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 5u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b49c(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r0;
    r1 = 5u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2fc734:;
    r1 = 3u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b574(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r0;
    r1 = 3u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 4u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b574(r0, r1, r2, r3);
    r2 = r0;
    r3 = 0u;
    r1 = 4u;
    r0 = r5;
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 5u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b574(r0, r1, r2, r3);
    r2 = r0;
    r0 = 0u;
    r3 = r0;
    *gptr<u32>(r13) = u32(r0);
    r1 = 5u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006f2908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2fc7b8:;
    r1 = u32(*gptr<u8>(r4 + 0x1bu));  // (from the original)
    zf = (r1 & 1u) == 0;
    if (!zf) {
        goto L_2fc7e0;
    }
L_2fc7c4:;
    zf = r0 == r3;
    cf = r0 >= r3;
    if (cf && !zf) {
        goto L_2fc7e0;
    }
    r1 = r0 >> 5;
    r7 = r0 & 0x1fu;  // (from the original)
    r8 = *gptr<u32>(r5 + (r1 << 2));
    r8 = r8 | lsl_r(r12, r7 & 0xff);  // (from the original)
    *gptr<u32>(r5 + (r1 << 2)) = u32(r8);
L_2fc7e0:;
    r0 = r0 + 1u;
    cf = r0 >= r3;
    r4 = r4 + 0x1eu;  // (from the original)
    if (!cf) {
        guest::preempt();
        goto L_2fc344;
    }
    r0 = r13 + 4u;
    r13 = r13 + 0x10u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002fc2a4
GUEST_EXPORT(0x002fc2a4, d_002fc2a4::f_002fc2a4);

// f_002fc948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fc948 {

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32, u32)> call_002fe7f0;  // (from the original)
inline constexpr guest::Function<0x005819ec, u32(u32, u32, u32, u32)> call_005819ec;  // (from the original)

u32 f_002fc948(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x952b9cu;  // (from the original)
    r0 = *gptr<u8>(r4 + 1u);
    r0 = call_002fe7cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if ((*gptr<u32>(r4 + 0xcu) & 1u) != 0u) {  // (from the original)
        r0 = 0xa14860u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x952ba8u;  // (from the original)
    r0 = call_002fe7dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 0xa14860u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0xa14860u;  // (from the original)
    r0 = call_005819ec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x100000u;  // (from the original)
    r1 = 0x581a18u;  // (from the original)
    r0 = call_002fe7f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0xa14860u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002fc948
GUEST_EXPORT(0x002fc949, d_002fc948::f_002fc948);

// f_002fcc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fcc54 {

struct __attribute__((packed)) Object_002fcc54_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_002fcc54_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002fcc54_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x004a669c, u32(u32, u32, u32, u32)> call_004a669c;  // (from the original)
inline constexpr guest::Function<0x004ee904, u32(u32, u32, u32, u32)> call_004ee904;  // (from the original)
inline constexpr guest::Function<0x004f26a4, u32(u32, u32, u32, u32)> call_004f26a4;  // (from the original)

u32 f_002fcc54(gptr<Object_002fcc54_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 0x16u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = arg0->word_28;
    r5 = r1;
    if (r0 == r5) {
        goto L_2fccbc;
    }
    r2 = r4 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(0x953a94u + (r5 << 2));  // (from the original)
    r0 = *gptr<u32>(*gptr<u32>(arg0->word_0 - 0xcu) + r2) + 8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004a669c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_2fccbc;
    }
    r1 = r0;
    r0 = r4 + 0x10u;  // (from the original)
    *gptr<u32>(r4 + 0x28u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004f26a4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    ea = r4 + 0x2cu;  // (from the original)
    r1 = u32(*gptr<u8>(ea));
    r0 = r4 + 0x10u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r14 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    return call_004ee904(r0, r1, r2, guest::cpu()->r[3]);
L_2fccbc:;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002fcc54
GUEST_EXPORT(0x002fcc54, d_002fcc54::f_002fcc54);

// f_002fd11c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fd11c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002ffc18, u32(u32, u32, u32, u32)> call_002ffc18;  // (from the original)

u32 f_002fd11c(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r6 = 5u << 7;
    r7 = r0 + 0x44u;  // (from the original)
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r1 = r6;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r5 = 0u;
    *gptr<u32>(r7 + r6) = u32(r5);
    r1 = r6;
    r7 = r4 + (0x59u << 3);  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x54cu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + (0x7du << 4);  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0xa54u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0xcd8u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0xf5cu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + (0x8fu << 5);  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x1464u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x16e8u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x196cu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x1bf0u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x1e74u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x20f8u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x237cu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + (0x13u << 9);  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x2884u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x2b08u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x2d8cu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x3010u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x3294u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x3518u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x379cu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x3a20u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x3ca4u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x3f28u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x41acu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x4430u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x46b4u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x4938u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x4bbcu;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    *gptr<u32>(r7 + r6) = u32(r5);
    r7 = r4 + 0x4e40u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r7 + r6) = u32(r5);
    r0 = r4 + 0x5840u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r0 + 0x14u) = u32(r5);  // (from the original)
    *gptr<u32>(*gptr<u32>(r13) + 0x18u) = u32(r5);  // (from the original)
    *gptr<u32>(*gptr<u32>(r13) + 0x1cu) = u32(r5);  // (from the original)
    *gptr<u32>(*gptr<u32>(r13) + 0x20u) = u32(r5);  // (from the original)
    *gptr<u32>(*gptr<u32>(r13) + 0x24u) = u32(r5);  // (from the original)
    *gptr<u32>(*gptr<u32>(r13) + 0x28u) = u32(r5);  // (from the original)
    r0 = r4 + 0x58a0u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u8>(r0 + 0xau) = u8(r5);  // (from the original)
    r0 = r4 + 0x587cu;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r0) = u32(r5);
    *gptr<u8>(r0 + 4u) = u8(r5);
L_2fd35e:;
    r7 = 0u;
    do {
L_2fd360:;
        r2 = 1u;
        r1 = r6 + 1u;
        r0 = r7 + 1u;
        guest::cpu()->r[13] = r13;
        r0 = call_002ffc18(r0, r1, r2, guest::cpu()->r[3]);
        r1 = (r7 << 2) + r4 + r6 + (0xb1u << 7);  // (from the original)
        r7 = r7 + 1u;
        *gptr<u8>(r1 + 0x15u) = u8(r5);  // (from the original)
        *gptr<u8>(r1 + 1u) = u8(r0);
        guest::preempt();
    } while (r7 < 5u);
    r6 = r6 + 1u;
    if (r6 < 4u) {
        guest::preempt();
        goto L_2fd35e;
    }
    r1 = 1u;
    *gptr<u16>(*gptr<u32>(r13) + 0x10u) = u16(0x7ffeu);  // (from the original)
    *gptr<u8>(*gptr<u32>(r13 + 4u) + 0xbu) = u8(r5);  // (from the original)
    r0 = 0x952b9cu;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(r1);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002fd11c
GUEST_EXPORT(0x002fd11d, d_002fd11c::f_002fd11c);

// f_002fd41c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fd41c {


u32 f_002fd41c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    r2 = *gptr<u32>(r13);
    res = r0 - r3;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ r3) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (res == 0) {
        r0 = sxtb(r1);
        r3 = sxtb(r2);
        res = r0 - r3;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ r3) & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (res == 0) {
            r0 = u32(s32(r1 << 0x10) >> 0x18);  // (from the original)
            r1 = u32(s32(r2 << 0x10) >> 0x18);  // (from the original)
            if (s32(r0) >= s32(r1)) {
                r0 = 1u;
                guest::cpu()->r[1] = r1;
                return r0;
            }
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (nf == vf) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (nf != vf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002fd41c
GUEST_EXPORT(0x002fd41c, d_002fd41c::f_002fd41c);

// f_002fe7f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fe7f4 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056de54, u32(u32, u32, u32, u32)> call_0056de54;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002fe7f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = r1;
    r6 = r2;
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
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 0x10u;  // (from the original)
    do {
L_2fe83c:;
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        res = r2 - 1u;
        r2 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r2 = r6;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0056de54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002fe7f4
GUEST_EXPORT(0x002fe7f4, d_002fe7f4::f_002fe7f4);

// f_002fe9c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fe9c8 {

inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;  // (from the original)

u32 f_002fe9c8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(r3);
    r3 = 0u;
    guest::cpu()->r[13] = r13;
    call_006f2908(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_002fe9c8
GUEST_EXPORT(0x002fe9c8, d_002fe9c8::f_002fe9c8);

// f_002ff1cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff1cc {

struct __attribute__((packed)) Object_002ff1cc_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002ff1cc_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;  // (from the original)
inline constexpr guest::Function<0x00300ff8, u32(u32, u32, u32, u32)> call_00300ff8;  // (from the original)
inline constexpr guest::Function<0x00302084, u32(u32, u32, u32, u32)> call_00302084;  // (from the original)
inline constexpr guest::Function<0x003022e8, u32(u32, u32, u32, u32)> call_003022e8;  // (from the original)
inline constexpr guest::Function<0x00303274, u32(u32, u32, u32, u32)> call_00303274;  // (from the original)
inline constexpr guest::Function<0x003037e8, u32(u32, u32, u32, u32)> call_003037e8;  // (from the original)
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)

u32 f_002ff1cc(gptr<Object_002ff1cc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x60u;  // (from the original)
    r5 = 0u;
    r0 = u32(arg0->byte_0);
    if ((r0 & 1u) == 0) {
        goto L_2ff2e4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0;
    r8 = *gptr<u32>(ea);
    ea = r0 + 4u;
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    r1 = r4 + 0xeu;  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0x16u;  // (from the original)
    r0 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r3 = 0u;
    ea = r13 + 0x14u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r9 = r13 + 8u;
    *gptr<u32>(r13) = u32(r3);
    *gptr<u32>(r9) = u32(r0);
    *gptr<u32>(r9 + 4) = u32(r1);
    *gptr<u32>(r9 + 8) = u32(r2);
    r2 = 0x15u;  // (from the original)
    r1 = r3;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030a488(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r6);
    *gptr<u32>(r13 + 4) = u32(r7);
    r0 = *gptr<u32>(r9);
    r1 = *gptr<u32>(r9 + 4);
    r2 = *gptr<u32>(r9 + 8);
    r3 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb4a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2ff2e4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0x6e212u;  // (from the original)
    r0 = r0 + 0x80u + r9;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2ff2e4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 + 0x80u + r9;  // (from the original)
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    ea = r13 + 0x38u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = r8;
    *gptr<u32>(r13) = u32(r6);
    *gptr<u32>(r13 + 4) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb4a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_2ff340;
    }
    ea = r13 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = r7;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r3 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r1 = r6;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb4a0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        ea = r13 + 0x30u;  // (from the original)
        r1 = *gptr<u32>(ea + 4);
        r2 = r7;
        *gptr<u32>(r13) = u32(*gptr<u32>(ea));
        *gptr<u32>(r13 + 4) = u32(r1);
        r3 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
        r1 = r6;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002fb4a0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_2ff340;
        }
    }
    r5 = 1u;
L_2ff2e4:;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00302084(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_003022e8(r0, r1, r2, r3);
    r3 = 1u;
    r2 = 0u;
    r1 = r3;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00300ff8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00303274(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r4));
    if ((r0 & 1u) == 0) {
        goto L_2ff340;
    }
    if ((r0 & 0x80u) != 0) {  // (from the original)
        goto L_2ff340;
    }
    r0 = r4;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_003037e8(r0, r1, r2, r3);
L_2ff340:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ff1cc
GUEST_EXPORT(0x002ff1cc, d_002ff1cc::f_002ff1cc);

// f_002ff368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff368 {

struct __attribute__((packed)) Object_002ff368_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u8 byte_64;
};
GUEST_OFFSET(Object_002ff368_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_002ff368_0, byte_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)

u32 f_002ff368(gptr<Object_002ff368_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    r2 = 0u;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r2);
    arg0->word_c = u32(r2);
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r2);
    arg0->word_18 = u32(r2);
    arg0->word_1c = u32(r2);
    arg0->word_20 = u32(r2);
    arg0->word_24 = u32(r2);
    arg0->word_28 = u32(r2);
    arg0->word_2c = u32(r2);
    arg0->byte_30 = u8(r2);
    arg0->word_34 = u32(r2);
    arg0->word_38 = u32(r2);
    arg0->word_3c = u32(r2);
    arg0->word_40 = u32(r2);
    arg0->word_44 = u32(r2);
    arg0->word_48 = u32(r2);
    arg0->word_4c = u32(r2);
    arg0->word_50 = u32(r2);
    arg0->word_54 = u32(r2);
    arg0->word_58 = u32(r2);
    arg0->word_5c = u32(r2);
    arg0->word_60 = u32(r2);
    arg0->byte_64 = u8(r2);
    r0 = r0 + 0x274u;  // (from the original)
    r0 = call_002fc20c(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = r0 + 0xfffffd8cu;  // (from the original)
    r0 = r4;
    r0 = call_002ff408(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002ff368
GUEST_EXPORT(0x002ff368, d_002ff368::f_002ff368);

// f_002ff408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff408 {

struct __attribute__((packed)) Object_002ff408_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u8 byte_64;
};
GUEST_OFFSET(Object_002ff408_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_002ff408_0, byte_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x006bc04c, u32(u32, u32, u32, u32)> call_006bc04c;  // (from the original)

u32 f_002ff408(gptr<Object_002ff408_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0u;
    arg0->word_0 = u32(r5);
    arg0->word_4 = u32(r5);
    arg0->word_8 = u32(r5);
    arg0->word_c = u32(r5);
    arg0->word_10 = u32(r5);
    arg0->word_14 = u32(r5);
    arg0->word_18 = u32(r5);
    arg0->word_1c = u32(r5);
    arg0->word_20 = u32(r5);
    arg0->word_24 = u32(r5);
    arg0->word_28 = u32(r5);
    arg0->word_2c = u32(r5);
    r4 = r0;
    arg0->byte_30 = u8(r5);
    arg0->word_34 = u32(r5);
    r1 = 0x42u;  // (from the original)
    arg0->word_38 = u32(r5);
    arg0->word_3c = u32(r5);
    arg0->word_40 = u32(r5);
    arg0->word_44 = u32(r5);
    arg0->word_48 = u32(r5);
    arg0->word_4c = u32(r5);
    arg0->word_50 = u32(r5);
    arg0->word_54 = u32(r5);
    arg0->word_58 = u32(r5);
    arg0->word_5c = u32(r5);
    arg0->word_60 = u32(r5);
    arg0->byte_64 = u8(r5);
    r0 = r4 + 0x68u;  // (from the original)
    r0 = call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x182u;  // (from the original)
    r0 = r4 + 0xaau;  // (from the original)
    r0 = call_00301444(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x42u;  // (from the original)
    r0 = r4 + 0x22cu;  // (from the original)
    r0 = call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0x26eu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x26fu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x270u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x271u) = u8(r5);  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 0x274u;  // (from the original)
    *gptr<u8>(r4 + 0x272u) = u8(r5);  // (from the original)
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x278u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_006bc04c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002ff408
GUEST_EXPORT(0x002ff408, d_002ff408::f_002ff408);

// f_002ff724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff724 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002ff724(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r6 = r0 + 0x142u;  // (from the original)
    r7 = r0 + 0x146u;  // (from the original)
    r5 = r0 + 0x100u;  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_2ff78c;
        }
        if (r1 != 2u) {
            goto L_2ff7f8;
        }
        goto L_2ff7b8;
    }
    r1 = r4 + 0x4cu;  // (from the original)
    r0 = r4 + 0x1eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b4a8c(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0xd8u;  // (from the original)
    r0 = r4 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00613de4(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r6;
    *gptr<u16>(r5 + 0x38u) = u16(u32(*gptr<u16>(r5 + 0x3au)));  // (from the original)
    r0 = r4 + 0x13eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
L_2ff78c:;
    r1 = r4 + 0x7au;  // (from the original)
    r0 = r4 + 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b4a8c(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0x108u;  // (from the original)
    r0 = r4 + 0xd8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00613de4(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r7;
    *gptr<u16>(r5 + 0x3au) = u16(u32(*gptr<u16>(r5 + 0x3cu)));  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_2ff7b8:;
    r0 = r4 + 0x7au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003052f0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003084d0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    *gptr<u16>(r5 + 0x3cu) = u16(0u);  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
L_2ff7f8:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ff724
GUEST_EXPORT(0x002ff724, d_002ff724::f_002ff724);

// f_002ff864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff864 {

inline constexpr guest::Function<0x00300ff8, u32(u32, u32, u32, u32)> call_00300ff8;  // (from the original)
inline constexpr guest::Function<0x00303274, u32(u32, u32, u32, u32)> call_00303274;  // (from the original)
inline constexpr guest::Function<0x003037e8, u32(u32, u32, u32, u32)> call_003037e8;  // (from the original)

u32 f_002ff864(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r3 = 0u;
    r4 = r0;
    r2 = r3;
    r1 = 1u;
    r0 = call_00300ff8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4;
    r0 = call_00303274(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r4));
    if ((r0 & 1u) == 0) {
        goto L_2ff8ac;
    }
    if ((r0 & 0x80u) != 0) {  // (from the original)
        goto L_2ff8ac;
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_003037e8(r0, r1, r2, r3);
L_2ff8ac:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ff864
GUEST_EXPORT(0x002ff864, d_002ff864::f_002ff864);

// f_002ff950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff950 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002ff950(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4 = r0;
    r6 = r3;
    r10 = r1;
    r11 = r2;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2ffad4;
    }
    if (r6 >= 0x4000u) {  // (from the original)
        r0 = 0u;
        goto L_2ffad4;
    }
    r5 = r4 + 0x100u;  // (from the original)
    r7 = 1u;
    r2 = u32(*gptr<u16>(r5 + 0x38u));  // (from the original)
    zf = r2 == r6;
    if (!zf) {
        r0 = u32(*gptr<u16>(r5 + 0x3au));  // (from the original)
        zf = r0 == r6;
    }
    if (!zf) {
        r1 = u32(*gptr<u16>(r5 + 0x3cu));  // (from the original)
        zf = r1 == r6;
    }
    if (zf) {
        r7 = 0u;
        goto L_2ffad0;
    }
    r9 = r4 + 0x146u;  // (from the original)
    r8 = r4 + 0x142u;  // (from the original)
    if (!(!u32(r6 >= r2) || u32(r6 == r2))) {
        r1 = r4 + 0x4cu;  // (from the original)
        r0 = r4 + 0x7au;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x1eu;  // (from the original)
        r0 = r4 + 0x4cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x1eu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003052f0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xd8u;  // (from the original)
        r0 = r4 + 0x108u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xa8u;  // (from the original)
        r0 = r4 + 0xd8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r10;
        r0 = r4 + 0xa8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = u32(*gptr<u16>(r5 + 0x3au));  // (from the original)
        r1 = u32(*gptr<u16>(r5 + 0x38u));  // (from the original)
        *gptr<u16>(r5 + 0x38u) = u16(r6);  // (from the original)
        *gptr<u16>(r5 + 0x3cu) = u16(r0);  // (from the original)
        *gptr<u16>(r5 + 0x3au) = u16(r1);  // (from the original)
        r1 = r8;
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x13eu;  // (from the original)
        r4 = r1;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r11;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_2ffad0;
    }
    if (r0 < r6) {
        r1 = r4 + 0x4cu;  // (from the original)
        r0 = r4 + 0x7au;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x4cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003052f0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xd8u;  // (from the original)
        r0 = r4 + 0x108u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r10;
        r0 = r4 + 0xd8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = u32(*gptr<u16>(r5 + 0x3au));  // (from the original)
        *gptr<u16>(r5 + 0x3au) = u16(r6);  // (from the original)
        r1 = r8;
        *gptr<u16>(r5 + 0x3cu) = u16(r0);  // (from the original)
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r11;
        r0 = r8;
    } else {
        if (r1 >= r6) {
            goto L_2ffad0;
        }
        r0 = r4 + 0x7au;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003052f0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r10;
        r0 = r4 + 0x108u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r11;
        r0 = r9;
        *gptr<u16>(r5 + 0x3cu) = u16(r6);  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_2ffad0:;
    r0 = r7;
L_2ffad4:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ff950
GUEST_EXPORT(0x002ff950, d_002ff950::f_002ff950);

// f_002ffc08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ffc08 {

struct __attribute__((packed)) Object_002ffc08_0 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_002ffc08_0, byte_18, 0x18);  // (from the original)


void f_002ffc08(gptr<Object_002ffc08_0> arg0, u32 r1) {
    r1 = u32(arg0->byte_18) & ~r1;
    arg0->byte_18 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002ffc08
GUEST_EXPORT(0x002ffc08, d_002ffc08::f_002ffc08);

// f_002ffde0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ffde0 {


u32 f_002ffde0(u32 r0, u32 r1) {
    if (s32(r1) < s32(3u)) {
        r1 = r1 + (r1 << 1);
        r0 = r0 + (r1 << 4);
    }
    r0 = r0 + 0xa8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ffde0
GUEST_EXPORT(0x002ffde0, d_002ffde0::f_002ffde0);

// f_002ffdf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ffdf4 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002ffdf4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r4 = r0;
    r6 = r3;
    r10 = r2;
    r9 = r1;
    r0 = r1;
    r0 = call_002fbd54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2fff64;
    }
    if (r6 >= 0x4000u) {  // (from the original)
        goto L_2fff64;
    }
    r5 = r4 + 0x100u;  // (from the original)
    r8 = r4 + 0x146u;  // (from the original)
    r7 = r4 + 0x142u;  // (from the original)
    if (u32(*gptr<u16>(r5 + 0x38u)) < r6) {  // (from the original)
        r1 = r4 + 0x4cu;  // (from the original)
        r0 = r4 + 0x7au;  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x1eu;  // (from the original)
        r0 = r4 + 0x4cu;  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r9;
        r0 = r4 + 0x1eu;  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xd8u;  // (from the original)
        r0 = r4 + 0x108u;  // (from the original)
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xa8u;  // (from the original)
        r0 = r4 + 0xd8u;  // (from the original)
        r0 = call_00613de4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0xa8u;  // (from the original)
        r0 = call_003084d0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = u32(*gptr<u16>(r5 + 0x3au));  // (from the original)
        r1 = u32(*gptr<u16>(r5 + 0x38u));  // (from the original)
        *gptr<u16>(r5 + 0x38u) = u16(r6);  // (from the original)
        *gptr<u16>(r5 + 0x3cu) = u16(r0);  // (from the original)
        *gptr<u16>(r5 + 0x3au) = u16(r1);  // (from the original)
        r1 = r7;
        r0 = r8;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x13eu;  // (from the original)
        r4 = r1;
        r0 = r7;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r10;
        r0 = r4;
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        return call_002fc8e8(r0, r1, r2, r3);
    }
    if (u32(*gptr<u16>(r5 + 0x3au)) < r6) {  // (from the original)
        r1 = r4 + 0x4cu;  // (from the original)
        r0 = r4 + 0x7au;  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r9;
        r0 = r4 + 0x4cu;  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xd8u;  // (from the original)
        r0 = r4 + 0x108u;  // (from the original)
        r0 = call_00613de4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0xd8u;  // (from the original)
        r0 = call_003084d0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = u32(*gptr<u16>(r5 + 0x3au));  // (from the original)
        *gptr<u16>(r5 + 0x3au) = u16(r6);  // (from the original)
        r1 = r7;
        *gptr<u16>(r5 + 0x3cu) = u16(r0);  // (from the original)
        r0 = r8;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r10;
        r0 = r7;
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        return call_002fc8e8(r0, r1, r2, r3);
    }
    r0 = u32(*gptr<u16>(r5 + 0x3cu));  // (from the original)
    if (r0 >= r6) {
        goto L_2fff64;
    }
    r1 = r9;
    r0 = r4 + 0x7au;  // (from the original)
    r0 = call_001b4a8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x108u;  // (from the original)
    r0 = call_003084d0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r10;
    r0 = r8;
    *gptr<u16>(r5 + 0x3cu) = u16(r6);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    return call_002fc8e8(r0, r1, r2, r3);
L_2fff64:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ffdf4
GUEST_EXPORT(0x002ffdf4, d_002ffdf4::f_002ffdf4);

// f_002fff68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fff68 {


u32 f_002fff68(u32 r0, u32 r1) {
    if (s32(r1) >= s32(3u)) {
        r0 = r0 + 0x1eu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = (r1 << 3) - r1 + (r1 << 4);
    r0 = r0 + (r1 << 1) + 0x1eu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002fff68
GUEST_EXPORT(0x002fff68, d_002fff68::f_002fff68);
