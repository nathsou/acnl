// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00120364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00120364 {

struct __attribute__((packed)) Object_00120364_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00120364_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00120364_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)

u32 f_00120364(gptr<Object_00120364_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x904840u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r4);
    r0 = r0 + 8;
    r0 = call_0012bfec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 8u;
    *gptr<u32>(r0 + 0x24u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00120364
GUEST_EXPORT(0x00120364, d_00120364::f_00120364);

// f_0012038c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012038c {

struct __attribute__((packed)) Object_0012038c_0 {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u8 byte_3c;
    u8 unknown_3d[0x3];  // (not used here)
    u32 word_40;
    u32 word_44;
    u8 byte_48;
    u8 byte_49;
    u8 byte_4a;
    u8 byte_4b;
    u8 byte_4c;
    u8 unknown_4d[0x3];  // (not used here)
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
};
GUEST_OFFSET(Object_0012038c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, byte_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, byte_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, byte_49, 0x49);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, byte_4a, 0x4a);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, byte_4b, 0x4b);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, byte_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_0012038c_0, word_64, 0x64);  // (from the original)

inline constexpr guest::Function<0x00123678, u32(u32, u32, u32, u32)> call_00123678;  // (from the original)

u32 f_0012038c(gptr<Object_0012038c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5 = 1u;
    r7 = 5u;
    r6 = 6u;
    r1 = 7u;
    arg0->word_0 = u32(0x9049c8u);  // (from the original)
    arg0->byte_4 = u8(r5);
    arg0->byte_5 = u8(r5);
    arg0->word_c = u32(r5);
    arg0->word_8 = u32(r7);
    arg0->byte_10 = u8(r5);
    arg0->word_14 = u32(r6);
    r2 = r0 + 0x20u;  // (from the original)
    arg0->word_1c = u32(r1);
    r4 = 0u;
    arg0->word_18 = u32(r6);
    arg0->word_20 = u32(r1);
    arg0->word_24 = u32(r4);
    r1 = r0 + 0x54u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x12045cu));  // (from the original)
    arg0->word_28 = u32(r4);
    arg0->word_2c = u32(std::bit_cast<u32>(S0));
    arg0->word_30 = u32(std::bit_cast<u32>(S0));
    arg0->word_34 = u32(std::bit_cast<u32>(S0));
    arg0->word_38 = u32(std::bit_cast<u32>(S0));
    S0 = std::bit_cast<float>(*gptr<u32>(0x120460u));  // (from the original)
    arg0->byte_3c = u8(r4);
    arg0->word_40 = u32(r6);
    arg0->word_44 = u32(std::bit_cast<u32>(S0));
    arg0->byte_48 = u8(r5);
    arg0->byte_49 = u8(r5);
    arg0->byte_4a = u8(r5);
    arg0->byte_4b = u8(r5);
    arg0->byte_4c = u8(r4);
    r8 = ~0u;
    arg0->word_50 = u32(r4);
    arg0->word_54 = u32(r4);
    arg0->word_58 = u32(r8);
    arg0->word_5c = u32(r4);
    arg0->word_60 = u32(r4);
    ea = r0 + 0x64u;  // (from the original)
    arg0->word_64 = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00123678(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r0 = r0 - 0x68u;  // (from the original)
    r1 = 0xfu;  // (from the original)
    *gptr<u8>(r0 + 0xbeu) = u8(r7);  // (from the original)
    *gptr<u8>(r0 + 0x68u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x9au) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0xb8u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0xa4u) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0xacu) = u32(r8);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0012038c
GUEST_EXPORT(0x0012038c, d_0012038c::f_0012038c);

// f_0012051c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012051c {

inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)

u32 f_0012051c(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_00132174(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r0) = u32(0x905c10u);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012051c
GUEST_EXPORT(0x0012051c, d_0012051c::f_0012051c);

// f_0012089c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012089c {

inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)

u32 f_0012089c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r0;
    r4 = 0x9047f8u;  // (from the original)
    r8 = 1u;
    *gptr<u32>(r13 + 0xcu) = u32(0x120988u);  // (from the original)
    r1 = r13 + 8u;
    r3 = r8;
    r2 = r5;
    r0 = 0x400u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    *gptr<u32>(r13 + 8u) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002f6e78(r0, r1, r2, r3);
    r6 = 0x95deacu;  // (from the original)
    r7 = 0u;
    r1 = r13 + 8u;
    r3 = 1u;
    *gptr<u32>(r6 + 0x28u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x1209a0u);  // (from the original)
    r0 = 0x107c00u;  // (from the original)
    r2 = r5;
    *gptr<u32>(r13 + 8u) = u32(r4);
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_002f6e78(r0, r1, r2, r3);
    *gptr<u32>(r6 + 0x2cu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x1209b8u);  // (from the original)
    r0 = 0x6b800u;  // (from the original)
    r1 = r13 + 8u;
    r3 = 1u;
    r2 = r5;
    *gptr<u32>(r13 + 8u) = u32(r4);
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_002f6e78(r0, r1, r2, r3);
    *gptr<u32>(r6 + 0x30u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x1209ccu);  // (from the original)
    r1 = r13 + 8u;
    r3 = 1u;
    r2 = r5;
    r0 = 0x25800u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r4);
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_002f6e78(r0, r1, r2, r3);
    *gptr<u32>(r6 + 0x34u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x1209dcu);  // (from the original)
    r1 = r13 + 8u;
    r3 = 1u;
    r2 = r5;
    r0 = 0xa000u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r4);
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_002f6e78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r6 + 0x38u) = u32(r0);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012089c
GUEST_EXPORT(0x0012089c, d_0012089c::f_0012089c);

// f_001209f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001209f8 {

struct __attribute__((packed)) Object_001209f8_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_001209f8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001209f8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001209f8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001209f8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001209f8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001209f8_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)

u32 f_001209f8(gptr<Object_001209f8_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r13 = r13 - 0x10;  // (from the original)
    r2 = r0 + 0x10u;  // (from the original)
    r4 = 0u;
    arg0->word_14 = u32(r2);
    arg0->word_18 = u32(r4);
    r5 = 0xau;  // (from the original)
    arg0->word_10 = u32(r2);
    arg0->word_1c = u32(r4);
    arg0->word_20 = u32(r4);
    res = r2 + 0x18u;  // (from the original)
    r0 = res;
    arg0->word_24 = u32(r4);
    if (res == 0) {
        goto L_120a6c;
    }
    r3 = 0x4bu;  // (from the original)
    r1 = 0u;
    r12 = 9u;
    arg0->word_1c = u32(r0);
    do {
L_120a38:;
        res = r12 - 1u;
        r12 = res;
        *gptr<u32>(r0 + (r1 << 2)) = u32(r0 + (r3 + r1 << 2));
        r14 = r0;
        r1 = r1 + r3;
        guest::preempt();
    } while (res != 0);
    r3 = r3 * (r5 - 1u);
    ea = r0 + (r3 << 2);
    *gptr<u32>(ea) = u32(r4);
    ea = r2 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r14);
    *gptr<u32>(ea + 4) = u32(r5);
L_120a6c:;
    r1 = r2 + 0xbd0u;  // (from the original)
    ea = r2 + 0xbd4u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(r2 + 0xbd0u) = u32(r1);  // (from the original)
    *gptr<u32>(r2 + 0xbdcu) = u32(r4);  // (from the original)
    *gptr<u32>(r2 + 0xbe0u) = u32(r4);  // (from the original)
    res = r2 + 0xbe8u;  // (from the original)
    r0 = res;
    r6 = 0xau;  // (from the original)
    *gptr<u32>(r2 + 0xbe4u) = u32(r4);  // (from the original)
    if (res == 0) {
        goto L_120ae0;
    }
    r3 = 0xdu;  // (from the original)
    r2 = 0u;
    r12 = 9u;
    *gptr<u32>(r1 + 0xcu) = u32(r0);  // (from the original)
    do {
L_120aac:;
        res = r12 - 1u;
        r12 = res;
        *gptr<u32>(r0 + (r2 << 2)) = u32(r0 + (r3 + r2 << 2));
        r14 = r0;
        r2 = r2 + r3;
        guest::preempt();
    } while (res != 0);
    r5 = r1 + 0x10u;  // (from the original)
    r3 = r3 * (r6 - 1u);
    r2 = r14;
    *gptr<u32>(r0 + (r3 << 2)) = u32(r4);
    *gptr<u32>(r5) = u32(r2);
    *gptr<u32>(r5 + 4) = u32(r6);
L_120ae0:;
    r0 = r1 + 0x220u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012ca50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012ca50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xe10u;  // (from the original)
    *gptr<u32>(r0 + 0xe20u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0xe24u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0xe25u) = u8(r4);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001209f8
GUEST_EXPORT(0x001209f8, d_001209f8::f_001209f8);

// f_001210d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001210d4 {

inline constexpr guest::Function<0x001262dc, u32(u32, u32, u32, u32)> call_001262dc;  // (from the original)
inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> call_001277dc;  // (from the original)
inline constexpr guest::Function<0x001279b4, u32(u32, u32, u32, u32)> call_001279b4;  // (from the original)

u32 f_001210d4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r1 = r13;
    r0 = 0x208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001277dc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13);
    r2 = 1u;
    r0 = r5 + 0x68u;  // (from the original)
    r4 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_001262dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0);
    r0 = r0 - r4 & ~3u;
    guest::cpu()->r[13] = r13;
    r0 = call_001279b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001210d4
GUEST_EXPORT(0x001210d4, d_001210d4::f_001210d4);

// f_00121110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00121110 {


u32 f_00121110(u32 r0, u32 r1_unused, u32 r2) {
    u32 res = 0;
    u32 r1 = 0;
    u32 zf = 0;
    res = r0 - 0x400u;  // (from the original)
    zf = res == 0;
    r1 = 0xadf8c0u;  // (from the original)
    if (!zf) {
        res = r0 - 0x401u;  // (from the original)
        zf = res == 0;
        r2 = res;
    }
    if (zf) {
        r0 = r0 - 0x400u;  // (from the original)
        *gptr<u32>(r1 + 0x124u) = u32(r0);  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r2 == 0xfu) {  // (from the original)
        r0 = 2u;
    } else {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u32>(r1 + 0x124u) = u32(r0);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00121110
GUEST_EXPORT(0x00121110, d_00121110::f_00121110);

// f_00122554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00122554 {


void f_00122554(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0xadf8c0u;  // (from the original)
    if (*gptr<u32>(r1 + 0x164u) == r0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r2 = 0x190u;  // (from the original)
    if (r0 == 0x700u) {  // (from the original)
        *gptr<u32>(r1 + 8u) = u32(r2);
        *gptr<u32>(r1 + 0x164u) = u32(r0);  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    res = r0 - 0x701u;  // (from the original)
    r3 = res;
    if (res == 0) {
        *gptr<u32>(r1 + 8u) = u32(0x320u);  // (from the original)
        *gptr<u32>(r1 + 0x164u) = u32(r0);  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r3 != 1u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u32>(r1 + 8u) = u32(r2);
    *gptr<u32>(r1 + 0x164u) = u32(r0);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00122554
GUEST_EXPORT(0x00122554, d_00122554::f_00122554);

// f_00122620: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00122620 {

struct __attribute__((packed)) Object_00122620_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00122620_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00122620_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00122620_0, word_8, 0x8);  // (from the original)


void f_00122620(gptr<Object_00122620_0> arg0, u32 r1) {
    u32 r2 = 0;
    r2 = arg0->word_0;
    if (s32(r2) >= s32(arg0->word_4)) {
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u32>(arg0->word_8 + (r2 << 2)) = u32(r1);
    r1 = arg0->word_0 + 1u;
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00122620
GUEST_EXPORT(0x00122620, d_00122620::f_00122620);

// f_00122ca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00122ca8 {


u32 f_00122ca8() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x953384u);  // (from the original)
    if (r0 == 0) {
        r0 = 0u;
        return r0;
    }
    r0 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    if (r0 == 0) {
        r0 = 0u;
        return r0;
    }
    r0 = *gptr<u32>(r0 + 0x94u);  // (from the original)
    return r0;
}

}  // namespace d_00122ca8
GUEST_EXPORT(0x00122ca8, d_00122ca8::f_00122ca8);

// f_00122d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00122d60 {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_00122d60(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x94d004u;  // (from the original)
    if (*gptr<u32>(r6) == 0) {
        r2 = 4u;
        r1 = r5;
        r0 = 0x10u;  // (from the original)
        r0 = call_00131280(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r0;
        if (r0 != 0) {
            r1 = r5;
            r2 = 3u;
            r0 = call_001320cc(r0, r1, r2, guest::cpu()->r[3]);
            r1 = 0x8f9d64u;  // (from the original)
            *gptr<u32>(r0) = u32(r1);
        }
        *gptr<u32>(r6 + 4u) = u32(r0);
        *gptr<u32>(r6) = u32(r4);
    }
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00122d60
GUEST_EXPORT(0x00122d60, d_00122d60::f_00122d60);

// f_00122dbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00122dbc {

struct __attribute__((packed)) Object_00122dbc_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_00122dbc_0, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x001297c4, u32(u32, u32, u32, u32)> call_001297c4;  // (from the original)
inline constexpr guest::Function<0x00129870, u32(u32, u32, u32, u32)> call_00129870;  // (from the original)
inline constexpr guest::Function<0x00129898, u32(u32, u32, u32, u32)> call_00129898;  // (from the original)
inline constexpr guest::Function<0x0012fa28, u32(u32, u32, u32, u32)> call_0012fa28;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)

u32 f_00122dbc(gptr<Object_00122dbc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_14);
    r5 = r1;
    if (r0 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_001297c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    r0 = res;
    if (res >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x983000u;  // (from the original)
    r1 = 0x1000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00129898(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    r0 = res;
    if (res >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r4 + 0x1cu) = u32(0x983000u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00129870(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    r0 = res;
    if (res >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r4 + 0x18u) = u32(*gptr<u32>(r13));  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012fa28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    r0 = res;
    if (res >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(r4 + 0x18u);  // (from the original)
    r2 = 4u;
    r1 = r5;
    *gptr<u32>(r4 + 0x30u) = u32(r0);  // (from the original)
    r0 = r0 & ~1u;
    guest::cpu()->r[13] = r13;
    r0 = call_00131280(r0, r1, r2, r3);
    *gptr<u32>(r4 + 0x28u) = u32(r0);  // (from the original)
    r1 = 1u;
    *gptr<u8>(r4 + 0x15u) = u8(2u);  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(r1);  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r5);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00122dbc
GUEST_EXPORT(0x00122dbc, d_00122dbc::f_00122dbc);

// f_00122f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00122f14 {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_00122f14(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x94d0d0u;  // (from the original)
    if (*gptr<u32>(r6) == 0) {
        r2 = 4u;
        r1 = r5;
        r0 = 0x10u;  // (from the original)
        r0 = call_00131280(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r0;
        if (r0 != 0) {
            r1 = r5;
            r2 = 3u;
            r0 = call_001320cc(r0, r1, r2, guest::cpu()->r[3]);
            r1 = 0x8f9d84u;  // (from the original)
            *gptr<u32>(r0) = u32(r1);
        }
        *gptr<u32>(r6 + 4u) = u32(r0);
        *gptr<u32>(r6) = u32(r4);
    }
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00122f14
GUEST_EXPORT(0x00122f14, d_00122f14::f_00122f14);

// f_00123074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123074 {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_00123074(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x94d560u;  // (from the original)
    if (*gptr<u32>(r6) != 0) {
        goto L_1230e0;
    }
    r2 = 4u;
    r1 = r5;
    r0 = 0x20u;  // (from the original)
    r0 = call_00131280(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        *gptr<u32>(r6 + 4u) = u32(r4);
        r4 = 0u;
        goto L_1230dc;
    }
    r1 = r5;
    r2 = 3u;
    r0 = call_001320cc(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0) = u32(0x8fa3f4u);  // (from the original)
    *gptr<u32>(r6 + 4u) = u32(r0);
    r0 = 0u;
    r1 = ~0u;
    *gptr<u32>(r4 + 0x14u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x1cu) = u8(r0);  // (from the original)
L_1230dc:;
    *gptr<u32>(r6) = u32(r4);
L_1230e0:;
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00123074
GUEST_EXPORT(0x00123074, d_00123074::f_00123074);

// f_00123600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123600 {

struct __attribute__((packed)) Object_00123600_0 {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[0x3];  // (not used here)
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u8 byte_38;
    u8 unknown_39[0x3];  // (not used here)
    u32 word_3c;
    u32 word_40;
    u32 word_44;
};
GUEST_OFFSET(Object_00123600_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00123600_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00123600_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00123600_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00123600_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_00123600_0, word_44, 0x44);  // (from the original)


void f_00123600(gptr<Object_00123600_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    float S0 = 0;
    r3 = 0u;
    arg0->word_0 = u32(r3);
    arg0->byte_4 = u8(r3);
    r4 = 0xf0u;  // (from the original)
    arg0->byte_5 = u8(r3);
    r12 = 0x190u;  // (from the original)
    arg0->word_8 = u32(r4);
    S0 = std::bit_cast<float>(*gptr<u32>(0x123670u));  // (from the original)
    arg0->word_c = u32(r12);
    arg0->word_20 = u32(r0);
    arg0->word_10 = u32(std::bit_cast<u32>(S0));
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    arg0->word_18 = u32(std::bit_cast<u32>(S0));
    arg0->word_1c = u32(std::bit_cast<u32>(S0));
    arg0->word_24 = u32(r3);
    arg0->byte_28 = u8(3u);
    S0 = std::bit_cast<float>(*gptr<u32>(0x123674u));  // (from the original)
    arg0->word_2c = u32(r4);
    arg0->word_30 = u32(r12);
    arg0->word_34 = u32(std::bit_cast<u32>(S0));
    r1 = r0 + 0x40u;  // (from the original)
    arg0->byte_38 = u8(r3);
    arg0->word_3c = u32(r0);
    arg0->word_40 = u32(r4);
    arg0->word_44 = u32(r12);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_00123600
GUEST_EXPORT(0x00123600, d_00123600::f_00123600);

// f_00123678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123678 {

struct __attribute__((packed)) Object_00123678_0 {
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
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x2];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 byte_31;
    u8 byte_32;
    u8 unknown_33[0x1];  // (not used here)
    u32 word_34;
    u8 byte_38;
    u8 byte_39;
    u8 unknown_3a[0x2];  // (not used here)
    u8 byte_3c;
    u8 unknown_3d[0x3];  // (not used here)
    u32 word_40;
    u32 word_44;
    u8 byte_48;
    u8 byte_49;
    u8 byte_4a;
    u8 unknown_4b[0x1];  // (not used here)
    u32 word_4c;
    u8 byte_50;
    u8 unknown_51[0x3];  // (not used here)
    u8 byte_54;
    u8 byte_55;
    u8 byte_56;
    u8 unknown_57[0x1];  // (not used here)
    u32 word_58;
    u8 byte_5c;
    u8 byte_5d;
    u8 byte_5e;
    u8 unknown_5f[0x1];  // (not used here)
    u32 word_60;
    u32 word_64;
    u8 byte_68;
    u8 unknown_69[0x3];  // (not used here)
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u8 byte_78;
    u8 unknown_79[0x3];  // (not used here)
    u32 word_7c;
};
GUEST_OFFSET(Object_00123678_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_19, 0x19);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_31, 0x31);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_32, 0x32);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_49, 0x49);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_4a, 0x4a);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_55, 0x55);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_56, 0x56);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_5d, 0x5d);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_5e, 0x5e);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_00123678_0, byte_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_00123678_0, word_7c, 0x7c);  // (from the original)


void f_00123678(gptr<Object_00123678_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    float S0 = 0;
    float S1 = 0;
    r3 = 0u;
    arg0->byte_0 = u8(r3);
    r1 = 6u;
    arg0->byte_1 = u8(r3);
    arg0->byte_2 = u8(r3);
    arg0->byte_3 = u8(r1);
    arg0->byte_4 = u8(r1);
    r2 = 7u;
    arg0->byte_5 = u8(r2);
    arg0->byte_6 = u8(r2);
    r12 = 0xffu;  // (from the original)
    arg0->byte_7 = u8(r12);
    arg0->byte_8 = u8(r12);
    arg0->byte_9 = u8(r12);
    arg0->byte_a = u8(r12);
    arg0->word_c = u32(r0);
    arg0->byte_10 = u8(r3);
    arg0->byte_11 = u8(r1);
    arg0->word_14 = u32(r0);
    r4 = 1u;
    arg0->byte_18 = u8(r3);
    S0 = std::bit_cast<float>(*gptr<u32>(0x123780u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x123784u));  // (from the original)
    arg0->byte_19 = u8(r4);
    arg0->word_1c = u32(std::bit_cast<u32>(S0));
    arg0->word_20 = u32(std::bit_cast<u32>(S1));
    r1 = r0;
    arg0->word_24 = u32(std::bit_cast<u32>(S0));
    arg0->word_28 = u32(std::bit_cast<u32>(S1));
    arg0->word_2c = u32(r0);
    arg0->byte_30 = u8(r3);
    arg0->byte_31 = u8(r3);
    arg0->byte_32 = u8(r3);
    arg0->word_34 = u32(r0);
    arg0->byte_38 = u8(r3);
    arg0->byte_39 = u8(r12);
    arg0->byte_3c = u8(r4);
    arg0->word_40 = u32(r3);
    arg0->word_44 = u32(r12);
    arg0->byte_48 = u8(r3);
    arg0->byte_49 = u8(r3);
    arg0->byte_4a = u8(r3);
    arg0->word_4c = u32(r0);
    arg0->byte_50 = u8(0xfu);  // (from the original)
    arg0->byte_54 = u8(r4);
    arg0->byte_55 = u8(r4);
    arg0->byte_56 = u8(4u);
    arg0->word_58 = u32(r1);
    arg0->byte_5c = u8(r4);
    arg0->byte_5d = u8(r4);
    arg0->byte_5e = u8(r4);
    arg0->word_60 = u32(r0);
    arg0->word_64 = u32(std::bit_cast<u32>(S0));
    arg0->byte_68 = u8(r3);
    arg0->word_6c = u32(std::bit_cast<u32>(S0));
    arg0->word_70 = u32(std::bit_cast<u32>(S0));
    arg0->word_74 = u32(std::bit_cast<u32>(S1));
    arg0->byte_78 = u8(0x18u);  // (from the original)
    arg0->word_7c = u32(r0);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_00123678
GUEST_EXPORT(0x00123678, d_00123678::f_00123678);

// f_00123788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123788 {


u32 f_00123788() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = guest::cpu()->tls;
    r1 = 0u;
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u32>(r0 + 8u) = u32(r1);
    *gptr<u32>(r0 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00123788
GUEST_EXPORT(0x00123788, d_00123788::f_00123788);

// f_001237d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001237d4 {

inline constexpr guest::Function<0x00100848, u32(u32, u32, u32, u32)> call_00100848;  // (from the original)

u32 f_001237d4() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = guest::cpu()->tls;
    r2 = r0 + 0x60u;  // (from the original)
    *gptr<u32>(r0 + 0x5cu) = u32(r2);  // (from the original)
    r1 = 0u;
    r4 = r2;
    zf = 0u == 0;
    *gptr<u32>(r2 + 4u) = u32(0x100798u);  // (from the original)
    r0 = 0x123834u;  // (from the original)
    *gptr<u32>(r2 + 8u) = u32(r0);
    *gptr<u32>(r2) = u32(r1);
    *gptr<u8>(r2 + 0xcu) = u8(r1);  // (from the original)
    *gptr<u32>(r2 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r2 + 0x14u) = u32(r1);  // (from the original)
    if (zf) {
        r0 = 0u;
    }
    *gptr<u32>(r2 + 0x18u) = u32(r1);  // (from the original)
    if (!zf) {
        r0 = call_00100848(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r4 + 0x1cu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001237d4
GUEST_EXPORT(0x001237d4, d_001237d4::f_001237d4);

// f_00123838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123838 {

inline constexpr guest::Function<0x00129be4, u32(u32, u32, u32, u32)> call_00129be4;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)

u32 f_00123838(u32 r0) {
    u32 res = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_00129be4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    res = r0 >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_00134250(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00123838
GUEST_EXPORT(0x00123838, d_00123838::f_00123838);

// f_00123854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123854 {

inline constexpr guest::Function<0x00129c30, u32(u32, u32, u32, u32)> call_00129c30;  // (from the original)

u32 f_00123854(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(0u);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00129c30(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r0 = *gptr<u32>(r13);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00123854
GUEST_EXPORT(0x00123854, d_00123854::f_00123854);

// f_00123ae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123ae8 {

inline constexpr guest::Function<0x00123838, u32(u32, u32, u32, u32)> call_00123838;  // (from the original)
inline constexpr guest::Function<0x00123854, u32(u32, u32, u32, u32)> call_00123854;  // (from the original)
inline constexpr guest::Function<0x00123870, u32(u32, u32, u32, u32)> call_00123870;  // (from the original)
inline constexpr guest::Function<0x001239e8, u32(u32, u32, u32, u32)> call_001239e8;  // (from the original)
inline constexpr guest::Function<0x001240fc, u32(u32, u32, u32, u32)> call_001240fc;  // (from the original)
inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> call_00124130;  // (from the original)
inline constexpr guest::Function<0x001264f0, u32(u32, u32, u32, u32)> call_001264f0;  // (from the original)
inline constexpr guest::Function<0x00129270, u32(u32, u32, u32, u32)> call_00129270;  // (from the original)
inline constexpr guest::Function<0x0012ede8, u32(u32, u32, u32, u32)> call_0012ede8;  // (from the original)
inline constexpr guest::Function<0x0012ee90, u32(u32, u32, u32, u32)> call_0012ee90;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x00135308, u32(u32, u32, u32, u32)> call_00135308;  // (from the original)

u32 f_00123ae8(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r0 = 0x97dffcu;  // (from the original)
    r13 = r13 - 0xa8u;  // (from the original)
    r4 = *gptr<u32>(r0 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_0012ee90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = 0x14u;  // (from the original)
    r3 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00135308(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        goto L_123c60;
    }
    r6 = r13 + 0x78u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00124130(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r13;
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    ea = r13 + 0x90u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r1 = r13 + 0x90u;  // (from the original)
    r0 = r13 + 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001264f0(r0, r1, r2, r3);
    r5 = 0u;
    ea = r13 + 0x3cu;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    r1 = r13 + 0x30u;  // (from the original)
    *gptr<u8>(r13 + 0x38u) = u8(r5);  // (from the original)
    *gptr<u8>(r13 + 0x39u) = u8(r5);  // (from the original)
    r0 = r13 + 0x70u;  // (from the original)
    *gptr<u8>(r13 + 0x37u) = u8(r5);  // (from the original)
    *gptr<u16>(r13 + 0x3au) = u16(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001240fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00123854(r0, r1, r2, r3);
    ea = r13 + 0x80u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    r1 = 0x18u;  // (from the original)
    ea = r13 + 0x70u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    r0 = r13 + 0x40u;  // (from the original)
    *gptr<u16>(r13 + 0x7eu) = u16(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00123838(r0, r1, r2, r3);
    r1 = u32(*gptr<u16>(r13 + 0x40u));  // (from the original)
    r3 = u32(*gptr<u16>(r13 + 0x42u));  // (from the original)
    r0 = r13 + 0x40u;  // (from the original)
    r2 = 0u;
    r12 = 0xbu;  // (from the original)
    do {
L_123b94:;
        ea = r0 + 4u;
        r0 = ea;
        r4 = u32(*gptr<u16>(ea));
        r1 = r1 + r3;
        r3 = u32(*gptr<u16>(r0 + 2u));
        res = r12 - 1u;
        r12 = res;
        r2 = r2 + r4;
        guest::preempt();
    } while (res != 0);
    *gptr<u32>(r13 + 0x84u) = u32(r1 + r2 + u32(*gptr<u16>(r13 + 0x6eu)));  // (from the original)
    r1 = r13 + 0x10u;  // (from the original)
    *gptr<u16>(r6 + 0x10u) = u16(*gptr<u32>(r13 + 0x30u));  // (from the original)
    *gptr<u8>(r6 + 0x12u) = u8(u32(*gptr<u8>(r13 + 0x34u)));  // (from the original)
    *gptr<u8>(r6 + 0x13u) = u8(u32(*gptr<u8>(r13 + 0x35u)));  // (from the original)
    *gptr<u32>(r13 + 0x78u) = u32(0x4f00u);  // (from the original)
    r0 = 0x8fab74u;  // (from the original)
    *gptr<u16>(r13 + 0x7cu) = u16(r5);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r5);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r5);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r5);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r5);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r5);  // (from the original)
    r2 = *gptr<u32>(r0);
    *gptr<u32>(r13 + 0x10u) = u32(r2);  // (from the original)
    r3 = *gptr<u32>(r2 - 0x30u);  // (from the original)
    r2 = *gptr<u32>(r0 + 0x20u);  // (from the original)
    *gptr<u32>(r1 + r3) = u32(r2);
    *gptr<u32>(r13 + 0x14u) = u32(*gptr<u32>(r0 + 0x24u));  // (from the original)
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00123870(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x78u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001239e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = *gptr<u32>(r13 + 0x18u) & ~1u;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_123c58;
    }
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    if ((r0 & 1u) != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_00134250(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = *gptr<u32>(r13 + 0x18u) & ~1u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012ede8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 0x18u) = u32(r5);  // (from the original)
L_123c58:;
    r13 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_123c60:;
    if ((r0 & 0x3fc00u) >> 0xa != 0x11u) {  // (from the original)
        goto L_123c88;
    }
    r1 = r0 << 0x16 >> 0x16;  // (from the original)
    if (s32(r1) < s32(0xb4u)) {  // (from the original)
        goto L_123c88;
    }
    if (s32(r1) <= s32(0xc7u)) {  // (from the original)
        guest::preempt();
        goto L_123c58;
    }
L_123c88:;
    r1 = 0x123c90u;  // (from the original)
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res == 0) {
        guest::preempt();
        goto L_123c58;
    }
    r13 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00129270(r0, r1, r2, r3);
}

}  // namespace d_00123ae8
GUEST_EXPORT(0x00123ae8, d_00123ae8::f_00123ae8);

// f_00123e40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123e40 {

inline constexpr guest::Function<0x00129094, u32(u32, u32, u32, u32)> call_00129094;  // (from the original)
inline constexpr guest::Function<0x001290f0, u32(u32, u32, u32, u32)> call_001290f0;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_00123e40(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_001290f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = call_00135748(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = 0x97ea2cu;  // (from the original)
    if (*gptr<u32>(r5 + 4u) != 0) {
        goto L_123eb4;
    }
    r1 = *gptr<u32>(0x8c13dcu);  // (from the original)
    r0 = 0x981e98u;  // (from the original)
    r0 = call_00129094(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = r0;
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        *gptr<u8>(r5) = u8(1u);
        r1 = *gptr<u32>(0x981e98u);  // (from the original)
        *gptr<u32>(0x97d81cu) = u32(r1);  // (from the original)
        goto L_123eb4;
    }
    if (r6 != 0xd92103fbu) {  // (from the original)
        goto L_123eb4;
    }
    r0 = r4;
    r0 = call_001357ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r6;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_123eb4:;
    *gptr<u32>(r5 + 4u) = u32(*gptr<u32>(r5 + 4u) + 1u);
    r5 = 0u;
    r0 = r4;
    r0 = call_001357ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00123e40
GUEST_EXPORT(0x00123e40, d_00123e40::f_00123e40);

// f_00123ee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123ee8 {

inline constexpr guest::Function<0x00129094, u32(u32, u32, u32, u32)> call_00129094;  // (from the original)
inline constexpr guest::Function<0x001290f0, u32(u32, u32, u32, u32)> call_001290f0;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_00123ee8(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_001290f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = call_00135748(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = 0x97ea28u;  // (from the original)
    if (*gptr<u32>(r5) != 0) {
        goto L_123f5c;
    }
    r1 = *gptr<u32>(0x8c13d4u);  // (from the original)
    r0 = 0x981e94u;  // (from the original)
    r0 = call_00129094(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = r0;
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = *gptr<u32>(0x981e94u);  // (from the original)
        *gptr<u32>(0x981e98u) = u32(r0);  // (from the original)
        r1 = 0x97d81cu;  // (from the original)
        *gptr<u32>(r1) = u32(r0);
        goto L_123f5c;
    }
    if (r6 != 0xd92103fbu) {  // (from the original)
        goto L_123f5c;
    }
    r0 = r4;
    r0 = call_001357ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r6;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_123f5c:;
    *gptr<u32>(r5) = u32(*gptr<u32>(r5) + 1u);
    r5 = 0u;
    r0 = r4;
    r0 = call_001357ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00123ee8
GUEST_EXPORT(0x00123ee8, d_00123ee8::f_00123ee8);

// f_00124244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00124244 {

inline constexpr guest::Function<0x0012ff0c, u32(u32, u32, u32, u32)> call_0012ff0c;  // (from the original)

u32 f_00124244(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(0x97d8a0u));  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x97d8b4u;  // (from the original)
    r1 = 0u;
    return call_0012ff0c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00124244
GUEST_EXPORT(0x00124244, d_00124244::f_00124244);

// f_00124270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00124270 {


u32 f_00124270() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x974af0u) & 7u;  // (from the original)
    return r0;
}

}  // namespace d_00124270
GUEST_EXPORT(0x00124270, d_00124270::f_00124270);

// f_001242a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001242a0 {


void f_001242a0(u32 r0, u32 r1) {
    *gptr<u32>(0x974b2cu) = u32(r0);  // (from the original)
    *gptr<u32>(0x974b6cu) = u32(r1);  // (from the original)
    return;
}

}  // namespace d_001242a0
GUEST_EXPORT(0x001242a0, d_001242a0::f_001242a0);

// f_001242b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001242b4 {


void f_001242b4(u32 r0, u32 r1) {
    *gptr<u32>(0x974b20u) = u32(r0);  // (from the original)
    *gptr<u32>(0x974b60u) = u32(r1);  // (from the original)
    return;
}

}  // namespace d_001242b4
GUEST_EXPORT(0x001242b4, d_001242b4::f_001242b4);

// f_00124304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00124304 {


void f_00124304(u32 r0, u32 r1) {
    *gptr<u32>(0x974b24u) = u32(r0);  // (from the original)
    *gptr<u32>(0x974b64u) = u32(r1);  // (from the original)
    return;
}

}  // namespace d_00124304
GUEST_EXPORT(0x00124304, d_00124304::f_00124304);

// f_00124b4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00124b4c {

inline constexpr guest::Function<0x0012a370, u32(u32, u32, u32, u32)> call_0012a370;  // (from the original)

u32 f_00124b4c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r3 = 0u;
    *gptr<u32>(r13 + 8u) = u32(r0);
    *gptr<u8>(r13 + 0xcu) = u8(r1);  // (from the original)
    r1 = r13 + 8u;
    r0 = 5u;
    r2 = 8u;
    *gptr<u32>(r13) = u32(r3);
    *gptr<u32>(r13 + 4u) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_0012a370(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00124b4c
GUEST_EXPORT(0x00124b4c, d_00124b4c::f_00124b4c);

// f_00124b80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00124b80 {

inline constexpr guest::Function<0x0012a370, u32(u32, u32, u32, u32)> call_0012a370;  // (from the original)

u32 f_00124b80(u32 r0) {
    u32 ea = 0;
    u32 v = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 0x10u;  // (from the original)
    r3 = 0u;
    r1 = r13 + 8u;
    r0 = 7u;
    r2 = 4u;
    *gptr<u32>(r13) = u32(r3);
    *gptr<u32>(r13 + 4u) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_0012a370(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0xcu;  // (from the original)
    v = *gptr<u32>(r13);
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00124b80
GUEST_EXPORT(0x00124b80, d_00124b80::f_00124b80);

// f_00124c20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00124c20 {


void f_00124c20(u32 r0, u32 r1) {
    *gptr<u32>(0x97d7d0u) = u32(r0);  // (from the original)
    *gptr<u32>(0x97d7d0u + 4) = u32(r1);  // (from the original)
    return;
}

}  // namespace d_00124c20
GUEST_EXPORT(0x00124c20, d_00124c20::f_00124c20);

// f_00124c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00124c4c {

inline constexpr guest::Function<0x0012a370, u32(u32, u32, u32, u32)> call_0012a370;  // (from the original)

u32 f_00124c4c() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = 0u;
    r13 = r13 - 0x10u;  // (from the original)
    r0 = 4u;
    r3 = r1;
    r2 = r1;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4u) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_0012a370(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00124c4c
GUEST_EXPORT(0x00124c4c, d_00124c4c::f_00124c4c);

// f_00124f94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00124f94 {

inline constexpr guest::Function<0x00129c7c, u32(u32, u32, u32, u32)> call_00129c7c;  // (from the original)
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> call_00129da0;  // (from the original)
inline constexpr guest::Function<0x0012b228, u32(u32, u32, u32, u32)> call_0012b228;  // (from the original)
inline constexpr guest::Function<0x0012b264, u32(u32, u32, u32, u32)> call_0012b264;  // (from the original)
inline constexpr guest::Function<0x0012b31c, u32(u32, u32, u32, u32)> call_0012b31c;  // (from the original)
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_00124f94(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x148u;  // (from the original)
    r4 = 0xae0b5cu;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0012b228(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r5 = 0xd8a0c7f9u;  // (from the original)
        goto L_1250d4;
    }
    r5 = 0xae0b5cu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x974ee8u;  // (from the original)
    if (*gptr<u32>(r6 + 4u) == 0) {
        r7 = 0u;
    } else {
        r7 = 1u;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r7 != 0) {
        r5 = 0u;
        *gptr<u32>(r6 + 4u) = u32(*gptr<u32>(r6 + 4u) + 1u);
        goto L_1250d4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00129c7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_125018;
    }
L_125010:;
    r5 = r0;
    goto L_1250d4;
L_125018:;
    r5 = 0x1250f4u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r2 = r0;
    r0 = 0x97d89cu;  // (from the original)
    r3 = 0u;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00129da0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::preempt();
        goto L_125010;
    }
    *gptr<u32>(r6 + 4u) = u32(*gptr<u32>(r6 + 4u) + 1u);
    r0 = 0xb0500c8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012b31c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0xae0b44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012f154(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r6) = u8(0u);
    r0 = 0xae0b50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012f154(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0xae0b5cu;  // (from the original)
    r7 = r13;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (*gptr<u32>(r6 + 4u) == 0) {
        r8 = 0u;
    } else {
        r8 = 1u;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r8 == 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0012b228(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            r0 = 0xd8a0c7f8u;  // (from the original)
            goto L_1250c0;
        }
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0012b264(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1250c0:;
    r5 = r0;
    if ((r0 & 0x80000000u) >> 0x1f == 0u) {  // (from the original)
        *gptr<u32>(r6 + 8u) = u32(*gptr<u32>(r13 + 8u));
    }
L_1250d4:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r13 = r13 + 0x148u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00124f94
GUEST_EXPORT(0x00124f94, d_00124f94::f_00124f94);

// f_0012564c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012564c {

struct __attribute__((packed)) Object_0012564c_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_0012564c_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x00138560, u32(u32, u32, u32, u32)> call_00138560;  // (from the original)

u32 f_0012564c(gptr<Object_0012564c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x14u;  // (from the original)
    r1 = r1 + arg0->word_20;
    r0 = r4;
    r0 = call_00138560(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4 + 8u) + 1u;
    *gptr<u32>(r4 + 8u) = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012564c
GUEST_EXPORT(0x0012564c, d_0012564c::f_0012564c);

// f_00125674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00125674 {

struct __attribute__((packed)) Object_00125674_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x1f];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_00125674_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00125674_0, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Object_00125674_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00125674_1, word_4, 0x4);  // (from the original)


void f_00125674(gptr<Object_00125674_0> arg0, gptr<Object_00125674_1> arg1) {
    u32 r1 = arg1.addr();
    r1 = 1u;
    arg0->word_24 = u32(arg1->word_4);
    arg0->byte_4 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00125674
GUEST_EXPORT(0x00125674, d_00125674::f_00125674);

// f_001257fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001257fc {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_001257fc(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x9752b8u;  // (from the original)
    if (*gptr<u32>(r6) == 0) {
        r2 = 4u;
        r1 = r5;
        r0 = 0x3cu;  // (from the original)
        r0 = call_00131280(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r0;
        res = r0 + 4u;
        r0 = res;
        if (res != 0) {
            r1 = r5;
            r2 = 3u;
            r0 = call_001320cc(r0, r1, r2, guest::cpu()->r[3]);
            r1 = 0x905b7cu;  // (from the original)
            *gptr<u32>(r0) = u32(r1);
        }
        *gptr<u32>(r6 + 4u) = u32(r0);
        if (r4 != 0) {
            r0 = 0u;
            *gptr<u32>(r4 + 0x14u) = u32(r0);  // (from the original)
            *gptr<u32>(r4) = u32(0x905b8cu);  // (from the original)
            *gptr<u32>(r4 + 0x18u) = u32(r0);  // (from the original)
            *gptr<u32>(r4 + 0x1cu) = u32(r0);  // (from the original)
            *gptr<u32>(r4 + 0x20u) = u32(r0);  // (from the original)
            r1 = r4 + 0x24u;  // (from the original)
            *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
            *gptr<u32>(r4 + 0x28u) = u32(r1);  // (from the original)
            *gptr<u32>(r4 + 0x34u) = u32(r0);  // (from the original)
            *gptr<u32>(r4 + 0x24u) = u32(r1);  // (from the original)
            *gptr<u8>(r4 + 0x38u) = u8(r0);  // (from the original)
            *gptr<u8>(r4 + 0x39u) = u8(r0);  // (from the original)
            *gptr<u8>(r4 + 0x3au) = u8(r0);  // (from the original)
            *gptr<u8>(r4 + 0x3bu) = u8(r0);  // (from the original)
            *gptr<u32>(r4 + 0x30u) = u32(4u);  // (from the original)
        }
        *gptr<u32>(r6) = u32(r4);
    }
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001257fc
GUEST_EXPORT(0x001257fc, d_001257fc::f_001257fc);

// f_00125acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00125acc {

inline constexpr guest::Function<0x0012c65c, u32(u32, u32, u32, u32)> call_0012c65c;  // (from the original)

u32 f_00125acc() {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12 = r13 + 0x10u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r12));
    S1 = std::bit_cast<float>(*gptr<u32>(r12 + 4));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_0012c65c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return guest::cpu()->r[0];
}

}  // namespace d_00125acc
GUEST_EXPORT(0x00125acc, d_00125acc::f_00125acc);

// f_001266a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001266a4 {

inline constexpr guest::Function<0x0012db70, u32(u32, u32, u32, u32)> call_0012db70;  // (from the original)

u32 f_001266a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = 0x97d46cu;  // (from the original)
    *gptr<u32>(r4) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_0012db70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r3 = ~0u;
        r0 = r3;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0u;
    ea = r0 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r4;
    r2 = *gptr<u32>(ea);
    r3 = r1;
    ea = r2;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    ea = r2 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r0 = r3;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001266a4
GUEST_EXPORT(0x001266a4, d_001266a4::f_001266a4);

// f_001266e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001266e8 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_001266e8(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
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
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 nf = 0;
    u32 zf = 0;
    u32 cf = 0;
    u32 vf = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4 = 0x97d470u;  // (from the original)
    r1 = 0x1774u;  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r0 = 0u;
    *gptr<u32>(r13) = u32(r0);
    r3 = 0x8b0990u;  // (from the original)
    r8 = 1u;
    r0 = ~0u;
    *gptr<u32>(r4 + 4u) = u32(r8);
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u32>(r4) = u32(r8);
    r1 = *gptr<u32>(r3);
    r0 = 0u;
    zf = r1 + 1u == 0;
    if (zf) {
        goto L_126764;
    } else {
        r12 = 0xae711cu;  // (from the original)
    }
    do {
L_126730:;
        r1 = r3 + (r0 << 4);
        r0 = r0 + 1u;
        r2 = *gptr<u32>(r1);
        r5 = *gptr<u32>(r1 + 4);
        r2 = r2 + (r2 << 1);
        *gptr<u32>(r12 + (r2 << 2)) = u32(r5);
        r5 = *gptr<u32>(r1 + 8u);
        r2 = r12 + (r2 << 2);
        *gptr<u32>(r2 + 4u) = u32(r5);
        r1 = *gptr<u32>(r1 + 0xcu);  // (from the original)
        *gptr<u32>(r2 + 8u) = u32(r1);
        r1 = *gptr<u32>(r3 + (r0 << 4));
        zf = r1 + 1u == 0;
        guest::preempt();
    } while (!zf);
L_126764:;
    r0 = 0x8b1c30u;  // (from the original)
    r1 = 0u;
    r2 = *gptr<u32>(r0);
    zf = r2 + 1u == 0;
    if (zf) {
        goto L_126798;
    } else {
        r3 = 0xae7f08u;  // (from the original)
    }
    do {
L_12677c:;
        r2 = r0 + (r1 << 3);
        r1 = r1 + 1u;
        ea = r2;
        r2 = *gptr<u32>(ea);
        r12 = *gptr<u32>(ea + 4);
        *gptr<u32>(r3 + (r2 << 2)) = u32(r12);
        r2 = *gptr<u32>(r0 + (r1 << 3));
        zf = r2 + 1u == 0;
        guest::preempt();
    } while (!zf);
L_126798:;
    r0 = *gptr<u32>(r4 + 8u);
    r12 = 0x16dau;  // (from the original)
    r1 = 0xfu;  // (from the original)
    r2 = r0 + 0x1000u;  // (from the original)
    r5 = 0x1000u;  // (from the original)
    *gptr<u32>(r2 + 0x3a4u) = u32(r5);  // (from the original)
    r14 = r12 | u32(s32(r1) >> 2);
    r6 = 2u;
    *gptr<u8>(r12 + r0) = u8(r6);
    r3 = 0u;
    r7 = r14 ^ u32(s32(r1) >> 1);
    *gptr<u32>(r2 + 0x3a8u) = u32(r3);  // (from the original)
    *gptr<u8>(r14 + r0) = u8(r1);
    r12 = r12 ^ u32(s32(r1) >> 1);
    *gptr<u32>(r2 + 0x3acu) = u32(r3);  // (from the original)
    *gptr<u8>(r7 + r0) = u8(r1);
    r4 = 9u;
    *gptr<u32>(r2 + 0x3b0u) = u32(r4);  // (from the original)
    r14 = r12 ^ u32(s32(r1) >> 2);
    *gptr<u8>(r12 + r0) = u8(r1);
    r5 = r7 | r1;
    *gptr<u32>(r2 + 0x3b4u) = u32(r3);  // (from the original)
    *gptr<u8>(r14 + r0) = u8(r1);
    r6 = r12 + u32(s32(r1) >> 2);
    *gptr<u32>(r2 + 0x3b8u) = u32(r3);  // (from the original)
    *gptr<u8>(r5 + r0) = u8(r1);
    *gptr<u32>(r2 + 0x3bcu) = u32(r3);  // (from the original)
    r10 = 0x1c00301u;  // (from the original)
    *gptr<u8>(r6 + r0) = u8(r1);
    r7 = r14 + u32(s32(r1) >> 2);
    *gptr<u32>(r2 + 0x3c0u) = u32(r10);  // (from the original)
    r12 = 0xe0c08000u;  // (from the original)
    *gptr<u8>(r7 + r0) = u8(r1);
    r9 = r5 + u32(s32(r1) >> 2);
    *gptr<u32>(r2 + 0x3c4u) = u32(r12);  // (from the original)
    r11 = r6 - 0x274u;  // (from the original)
    *gptr<u8>(r9 + r0) = u8(r1);
    r12 = 0x3c00u;  // (from the original)
    r14 = r5 + 0x2du;  // (from the original)
    *gptr<u32>(r11 + r0) = u32(r12);
    r10 = r5 - 0x15u;  // (from the original)
    *gptr<u8>(r14 + r0) = u8(r1);
    r14 = 0x1f1f1f1fu;  // (from the original)
    *gptr<u32>(r2 + 0x364u) = u32(r3);  // (from the original)
    r4 = r10 | u32(s32(r1) >> 2);
    *gptr<u8>(r10 + r0) = u8(r1);
    *gptr<u32>(r2 + 0x368u) = u32(r14);  // (from the original)
    *gptr<u8>(r4 + r0) = u8(r1);
    r5 = r4 ^ u32(s32(r1) >> 1);
    *gptr<u32>(r2 + 0x36cu) = u32(r14);  // (from the original)
    *gptr<u8>(r5 + r0) = u8(r1);
    r6 = r0 + 0x1600u;  // (from the original)
    r6 = r6 + 0xcdu;  // (from the original)
    *gptr<u32>(r2 + 0x370u) = u32(r14);  // (from the original)
    *gptr<u8>(r6) = u8(r1);
    r7 = r0 + 0x1600u;  // (from the original)
    r7 = r7 + 0xceu;  // (from the original)
    *gptr<u32>(r2 + 0x374u) = u32(r14);  // (from the original)
    *gptr<u8>(r7) = u8(r1);
    r9 = r0 + 0x1600u;  // (from the original)
    r9 = r9 + 0xcfu;  // (from the original)
    r10 = r4 + 5u;
    *gptr<u32>(r2 + 0x378u) = u32(r14);  // (from the original)
    *gptr<u8>(r9) = u8(r1);
    r4 = r0 + 0x1600u;  // (from the original)
    r5 = r0 + 0x1400u;  // (from the original)
    r6 = r0 + 0x1400u;  // (from the original)
    r7 = r0 + 0x1600u;  // (from the original)
    r12 = 0x5cu;  // (from the original)
    r4 = r4 + 0xd1u;  // (from the original)
    r5 = r5 + 0x2d8u;  // (from the original)
    r6 = r6 + 0x2c8u;  // (from the original)
    r7 = r7 + 0xc9u;  // (from the original)
    r9 = r10 | u32(s32(r10) >> 0xb);  // (from the original)
    *gptr<u32>(r2 + 0x37cu) = u32(r14);  // (from the original)
    *gptr<u8>(r10 + r0) = u8(r1);
    *gptr<u32>(r2 + 0x380u) = u32(r14);  // (from the original)
    *gptr<u8>(r4) = u8(r1);
    *gptr<u32>(r2 + 0x39cu) = u32(r8);  // (from the original)
    *gptr<u8>(r5) = u8(r1);
    r5 = 0xbf0000u;  // (from the original)
    *gptr<u32>(r2 + 0x35cu) = u32(r5);  // (from the original)
    *gptr<u8>(r6) = u8(r1);
    *gptr<u32>(r2 + 0x360u) = u32(r3);  // (from the original)
    *gptr<u8>(r7) = u8(r1);
    *gptr<u32>(r2 + 0x384u) = u32(r3);  // (from the original)
    r10 = r9 | u32(s32(r1) >> 2);
    *gptr<u8>(r9 + r0) = u8(r1);
    *gptr<u32>(r2 + 0x388u) = u32(r3);  // (from the original)
    r14 = r10 ^ u32(s32(r1) >> 1);
    *gptr<u8>(r10 + r0) = u8(r1);
    *gptr<u32>(r2 + 0x38cu) = u32(r3);  // (from the original)
    r4 = r9 ^ u32(s32(r1) >> 1);
    *gptr<u8>(r14 + r0) = u8(r1);
    *gptr<u32>(r2 + 0x390u) = u32(r3);  // (from the original)
    r5 = r4 ^ u32(s32(r1) >> 2);
    *gptr<u8>(r4 + r0) = u8(r1);
    *gptr<u32>(r2 + 0x394u) = u32(r3);  // (from the original)
    *gptr<u8>(r5 + r0) = u8(r1);
L_126924:;
    res = r12 - 0x8du;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r12 ^ 0x8du) & (r12 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        goto L_126c88;
    }
    if (!(!zf && nf == vf)) {
        res = r12 - 0x77u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r12 ^ 0x77u) & (r12 ^ res)) >> 0x1f;  // (from the original)
        if (zf) {
            goto L_126c88;
        }
        if (!(!zf && nf == vf)) {
            res = r12 - 0x6cu;  // (from the original)
            nf = res >> 0x1f;  // (from the original)
            zf = res == 0;
            vf = ((r12 ^ 0x6cu) & (r12 ^ res)) >> 0x1f;  // (from the original)
            if (zf) {
                goto L_126c88;
            }
            if (!(!zf && nf == vf)) {
                zf = r12 == 0x61u;  // (from the original)
                if (zf) {
                    goto L_126c88;
                }
                zf = r12 == 0x63u;  // (from the original)
                if (zf) {
                    goto L_126cac;
                }
                zf = r12 == 0x64u;  // (from the original)
                if (zf) {
                    goto L_126cb4;
                }
                zf = r12 == 0x66u;  // (from the original)
                if (!zf) {
                    goto L_126a5c;
                }
                goto L_126c64;
            }
            zf = r12 == 0x6eu;  // (from the original)
            if (zf) {
                goto L_126cac;
            }
            zf = r12 == 0x6fu;  // (from the original)
            if (zf) {
                goto L_126cb4;
            }
            zf = r12 == 0x71u;  // (from the original)
            if (!zf) {
                goto L_126a5c;
            }
            goto L_126c64;
        }
        res = r12 - 0x82u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r12 ^ 0x82u) & (r12 ^ res)) >> 0x1f;  // (from the original)
        if (zf) {
            goto L_126c88;
        }
        if (!(!zf && nf == vf)) {
            zf = r12 == 0x79u;  // (from the original)
            if (zf) {
                goto L_126cac;
            }
            zf = r12 == 0x7au;  // (from the original)
            if (zf) {
                goto L_126cb4;
            }
            zf = r12 == 0x7cu;  // (from the original)
            if (!zf) {
                goto L_126a5c;
            }
            goto L_126c64;
        }
        zf = r12 == 0x84u;  // (from the original)
        if (zf) {
            goto L_126cac;
        }
        zf = r12 == 0x85u;  // (from the original)
        if (zf) {
            goto L_126cb4;
        }
        zf = r12 == 0x87u;  // (from the original)
        if (!zf) {
            goto L_126a5c;
        }
        goto L_126c64;
    }
    res = r12 - 0xa3u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r12 ^ 0xa3u) & (r12 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        goto L_126c88;
    }
    if (!(!zf && nf == vf)) {
        res = r12 - 0x98u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r12 ^ 0x98u) & (r12 ^ res)) >> 0x1f;  // (from the original)
        if (zf) {
            goto L_126c88;
        }
        if (!(!zf && nf == vf)) {
            zf = r12 == 0x8fu;  // (from the original)
            if (zf) {
                goto L_126cac;
            }
            zf = r12 == 0x90u;  // (from the original)
            if (zf) {
                goto L_126cb4;
            }
            zf = r12 == 0x92u;  // (from the original)
            if (!zf) {
                goto L_126a5c;
            }
            goto L_126c64;
        }
        zf = r12 == 0x9au;  // (from the original)
        if (zf) {
            goto L_126cac;
        }
        zf = r12 == 0x9bu;  // (from the original)
        if (zf) {
            goto L_126cb4;
        }
        zf = r12 == 0x9du;  // (from the original)
        if (!zf) {
            goto L_126a5c;
        }
        goto L_126c64;
    }
    res = r12 - 0xaeu;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r12 ^ 0xaeu) & (r12 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        goto L_126c88;
    }
    if (!(!zf && nf == vf)) {
        zf = r12 == 0xa5u;  // (from the original)
        if (zf) {
            goto L_126cac;
        }
        zf = r12 == 0xa6u;  // (from the original)
        if (zf) {
            goto L_126cb4;
        }
        zf = r12 == 0xa8u;  // (from the original)
        if (!zf) {
            goto L_126a5c;
        }
        goto L_126c64;
    }
    zf = r12 == 0xb0u;  // (from the original)
    if (zf) {
        goto L_126cac;
    }
    zf = r12 == 0xb1u;  // (from the original)
    if (zf) {
        goto L_126cb4;
    }
    zf = r12 == 0xb3u;  // (from the original)
    if (zf) {
        goto L_126c64;
    }
L_126a5c:;
    r14 = r0 + (r12 << 2);
    r3 = r0 + r12;
    r14 = r14 + 0x1000u;  // (from the original)
    r3 = r3 + 0x1600u;  // (from the original)
    r2 = 0u;
    r3 = r3 + 0xb1u;  // (from the original)
    *gptr<u32>(r14 + 0x300u) = u32(r2);  // (from the original)
    *gptr<u8>(r3) = u8(r1);
L_126a7c:;
    r12 = r12 + 1u;
    zf = r12 == 0xb3u;  // (from the original)
    cf = r12 >= 0xb3u;  // (from the original)
    if (!cf || zf) {
        guest::preempt();
        goto L_126924;
    }
    r6 = 0x1478u;  // (from the original)
    r11 = 0xcc330ccu;  // (from the original)
    r3 = 0x170fu;  // (from the original)
    r12 = r6 + 0x158u;  // (from the original)
    *gptr<u32>(r6 + r0) = u32(r11);
    r14 = r6 + 0x15cu;  // (from the original)
    r6 = 0xa0280au;  // (from the original)
    *gptr<u8>(r3 + r0) = u8(r1);
    r4 = r3 + 0x56u;  // (from the original)
    *gptr<u32>(r12 + r0) = u32(r6);
    *gptr<u8>(r4 + r0) = u8(r1);
    r4 = 0u;
    r5 = r0 + 0x1700u;  // (from the original)
    *gptr<u32>(r14 + r0) = u32(r4);
    r5 = r5 + 0x66u;  // (from the original)
    r7 = r0 + 0x1000u;  // (from the original)
    r7 = r7 + 0x5e0u;  // (from the original)
    *gptr<u8>(r5) = u8(r1);
    r5 = 1u;
    r8 = r0 + 0x1700u;  // (from the original)
    *gptr<u32>(r7) = u32(r5);
    r8 = r8 + 0x69u;  // (from the original)
    r11 = 0x88000400u;  // (from the original)
    r9 = r0 + 0x1400u;  // (from the original)
    *gptr<u8>(r8) = u8(r1);
    r9 = r9 + 0x1d8u;  // (from the original)
    r10 = r0 + 0x1700u;  // (from the original)
    *gptr<u32>(r9) = u32(r11);
    r10 = r10 + 0x67u;  // (from the original)
    r2 = r0 + 0x1400u;  // (from the original)
    *gptr<u8>(r10) = u8(r1);
    r2 = r2 + 0x1dcu;  // (from the original)
    r11 = ~0u;
    r3 = r0 + 0x1400u;  // (from the original)
    *gptr<u32>(r2) = u32(r11);
    r3 = r3 + 0x368u;  // (from the original)
    r12 = r0 + 0x1400u;  // (from the original)
    r12 = r12 + 0x1e8u;  // (from the original)
    *gptr<u8>(r3) = u8(r1);
    r14 = r0 + 0x1700u;  // (from the original)
    r14 = r14 + 0x6bu;  // (from the original)
    r6 = r0 + 0x1400u;  // (from the original)
    *gptr<u32>(r12) = u32(r4);
    r6 = r6 + 0x1ecu;  // (from the original)
    r7 = r0 + 0x1400u;  // (from the original)
    r7 = r7 + 0x36cu;  // (from the original)
    *gptr<u8>(r14) = u8(r1);
    *gptr<u32>(r6) = u32(r4);
    *gptr<u8>(r7) = u8(r1);
    r7 = 0x2222222u;  // (from the original)
    r8 = r0 + 0x1400u;  // (from the original)
    r8 = r8 + 0x1e4u;  // (from the original)
    r2 = 0x176du;  // (from the original)
    r9 = r0 + 0x1700u;  // (from the original)
    r9 = r9 + 0x6au;  // (from the original)
    r10 = r0 + 0x1000u;  // (from the original)
    *gptr<u32>(r8) = u32(r7);
    r10 = r10 + 0x5f0u;  // (from the original)
    *gptr<u8>(r9) = u8(r1);
    r3 = 0x1440u;  // (from the original)
    *gptr<u32>(r10) = u32(r4);
    *gptr<u8>(r2 + r0) = u8(r1);
    r12 = r2 - 0x6cu;  // (from the original)
    *gptr<u32>(r3 + r0) = u32(r4);
    r14 = r3 + 4u;
    *gptr<u8>(r12 + r0) = u8(r1);
    *gptr<u32>(r14 + r0) = u32(r4);
    r11 = 0x97d470u;  // (from the original)
    r6 = r2 - 0x6bu;  // (from the original)
    r12 = r14 + (r5 << 2);
    r14 = r2 - 0x6au;  // (from the original)
    r3 = 0x3c00u;  // (from the original)
    r7 = 0x100u;  // (from the original)
    r2 = r12 + 0xcu;  // (from the original)
    *gptr<u8>(r6 + r0) = u8(r1);
    *gptr<u32>(r12 + r0) = u32(r3);
    *gptr<u8>(r14 + r0) = u8(r1);
    r3 = r14 ^ u32(s32(r2) >> 0xa);  // (from the original)
    *gptr<u32>(r2 + r0) = u32(r4);
    r12 = r2 + 4u;
    *gptr<u8>(r3 + r0) = u8(r1);
    r14 = r3 | u32(s32(r2) >> 0xa);  // (from the original)
    *gptr<u32>(r12 + r0) = u32(r4);
    r6 = r2 + 8u;
    r2 = r2 + 0x2b4u;  // (from the original)
    *gptr<u8>(r14 + r0) = u8(r1);
    *gptr<u32>(r6 + r0) = u32(r7);
    *gptr<u8>(r2 + r0) = u8(r1);
    r2 = 0xa00u;  // (from the original)
    r3 = r2 + 0xa60u;  // (from the original)
    r12 = 0x1709u;  // (from the original)
    *gptr<u32>(r3 + r0) = u32(r2);
    r14 = 7u;
    r3 = r3 - 0x14u;  // (from the original)
    *gptr<u8>(r12 + r0) = u8(r14);
    r2 = 0x3c00u;  // (from the original)
    r12 = r3 + 0x2b8u;  // (from the original)
    r8 = r7 + 0xe40000u;  // (from the original)
    *gptr<u32>(r3 + r0) = u32(r2);
    r14 = r3 + 0x18u;  // (from the original)
    *gptr<u8>(r12 + r0) = u8(r1);
    r6 = r12 ^ u32(s32(r8) >> 0x14);  // (from the original)
    r9 = 0xdu;  // (from the original)
    r7 = r3 + 0x1cu;  // (from the original)
    *gptr<u32>(r14 + r0) = u32(r8);
    r10 = 0x10u;  // (from the original)
    *gptr<u8>(r6 + r0) = u8(r9);
    *gptr<u32>(r7 + r0) = u32(r10);
    r7 = 0xeee0eeeu;  // (from the original)
    r2 = r12 ^ u32(s32(r2) >> 0xa);  // (from the original)
    r3 = r0 + 0x1000u;  // (from the original)
    r12 = r0 + 0x1600u;  // (from the original)
    *gptr<u8>(r2 + r0) = u8(r1);
    r2 = 0u;
    r14 = 0x1eu;  // (from the original)
    r3 = r3 + 0x3c8u;  // (from the original)
    r12 = r12 + 0xe3u;  // (from the original)
    r6 = r7 | u32(s32(r7) >> 1);
    goto L_126eac;
L_126c64:;
    r2 = 0x3f000u;  // (from the original)
L_126c68:;
    r14 = r0 + (r12 << 2);
    r3 = r0 + r12;
    r14 = r14 + 0x1000u;  // (from the original)
    r3 = r3 + 0x1600u;  // (from the original)
    r3 = r3 + 0xb1u;  // (from the original)
    *gptr<u32>(r14 + 0x300u) = u32(r2);  // (from the original)
    *gptr<u8>(r3) = u8(r1);
    guest::preempt();
    goto L_126a7c;
L_126c88:;
    r3 = r0 + (r12 << 2);
    r14 = r0 + r12;
    r3 = r3 + 0x1000u;  // (from the original)
    r14 = r14 + 0x1600u;  // (from the original)
    r2 = 0x3c00u;  // (from the original)
    r14 = r14 + 0xb1u;  // (from the original)
    *gptr<u32>(r3 + 0x300u) = u32(r2);  // (from the original)
    *gptr<u8>(r14) = u8(r1);
    guest::preempt();
    goto L_126a7c;
L_126cac:;
    r2 = 0x800u;  // (from the original)
    guest::preempt();
    goto L_126c68;
L_126cb4:;
    r14 = r0 + (r12 << 2);
    r3 = r0 + r12;
    r14 = r14 + 0x1000u;  // (from the original)
    r3 = r3 + 0x1600u;  // (from the original)
    r2 = 1u;
    r3 = r3 + 0xb1u;  // (from the original)
    *gptr<u32>(r14 + 0x300u) = u32(r2);  // (from the original)
    *gptr<u8>(r3) = u8(r1);
    guest::preempt();
    goto L_126a7c;
L_126cd8:;
    zf = r2 == 0;
    if (zf) {
        goto L_126eac;
    }
    zf = r2 == 5u;
    if (!zf) {
        zf = r2 == 0xau;  // (from the original)
    }
    if (zf) {
        goto L_126eb4;
    }
    zf = r2 == 0xfu;  // (from the original)
    if (!zf) {
        zf = r2 == 0x14u;  // (from the original)
    }
    if (zf) {
        goto L_126eb4;
    }
    zf = r2 == 0x19u;  // (from the original)
    if (zf) {
        goto L_126eb4;
    } else {
        *gptr<u32>(r3) = u32(r4);
        *gptr<u8>(r12) = u8(r1);
    }
L_126d08:;
    res = r14 - 1u;
    zf = res == 0;
    r14 = res;
    r3 = r3 + 4u;
    r12 = r12 + 1u;
    r2 = r2 + 1u;
    if (!zf) {
        guest::preempt();
        goto L_126cd8;
    }
    r2 = 0x1450u;  // (from the original)
    r3 = 0x1705u;  // (from the original)
    *gptr<u32>(r2 + r0) = u32(r4);
    *gptr<u8>(r3 + r0) = u8(r1);
    r1 = r0 + 0x1300u;  // (from the original)
    r0 = r0 + 0x1000u;  // (from the original)
    r2 = 0x2f4u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r11 + 8u);
    r2 = 0xbdu;  // (from the original)
    r1 = r0 + 0x1600u;  // (from the original)
    r0 = r0 + 0x1400u;  // (from the original)
    r1 = r1 + 0xb1u;  // (from the original)
    r0 = r0 + 0x1f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f8574(r0, r1, r2, r3);
    r14 = 0xae80f8u;  // (from the original)
    r2 = 0x97d480u;  // (from the original)
    r0 = 0u;
    *gptr<u32>(r14 + 0x104u) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x108u) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x10cu) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x110u) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x114u) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x118u) = u32(r4);  // (from the original)
    r1 = *gptr<u32>(r2);
    zf = r1 == 0xbdu;  // (from the original)
    if (zf) {
        goto L_126db8;
    } else {
        r3 = r14 + 0x104u;  // (from the original)
    }
    do {
L_126d90:;
        r12 = *gptr<u32>(r2 + (r0 << 2));
        r0 = r0 + 1u;
        r1 = u32(s32(r12) >> 5);
        r12 = r12 & 0x1fu;  // (from the original)
        r6 = *gptr<u32>(r3 + (r1 << 2));
        r12 = r6 | lsl_r(r5, r12 & 0xff);  // (from the original)
        *gptr<u32>(r3 + (r1 << 2)) = u32(r12);
        r1 = *gptr<u32>(r2 + (r0 << 2));
        zf = r1 == 0xbdu;  // (from the original)
        guest::preempt();
    } while (!zf);
L_126db8:;
    *gptr<u32>(r14 + 0x11cu) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x120u) = u32(r4);  // (from the original)
    r12 = 0x97d4e0u;  // (from the original)
    *gptr<u32>(r14 + 0x124u) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x128u) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x12cu) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x130u) = u32(r4);  // (from the original)
    r2 = *gptr<u32>(r12);
    r0 = 0xae8214u;  // (from the original)
    r1 = 0u;
    zf = r2 == 0xbdu;  // (from the original)
    if (zf) {
        goto L_126e10;
    }
    do {
L_126de8:;
        r3 = *gptr<u32>(r12 + (r1 << 2));
        r1 = r1 + 1u;
        r2 = u32(s32(r3) >> 5);
        r3 = r3 & 0x1fu;  // (from the original)
        r6 = *gptr<u32>(r0 + (r2 << 2));
        r3 = r6 | lsl_r(r5, r3 & 0xff);  // (from the original)
        *gptr<u32>(r0 + (r2 << 2)) = u32(r3);
        r2 = *gptr<u32>(r12 + (r1 << 2));
        zf = r2 == 0xbdu;  // (from the original)
        guest::preempt();
    } while (!zf);
L_126e10:;
    r2 = 0x97d4f8u;  // (from the original)
    r1 = 0u;
    r3 = *gptr<u32>(r2);
    zf = r3 == 0xbdu;  // (from the original)
    if (zf) {
        goto L_126e4c;
    }
    do {
L_126e24:;
        r12 = *gptr<u32>(r2 + (r1 << 2));
        r1 = r1 + 1u;
        r6 = r12 & 0x1fu;  // (from the original)
        r3 = u32(s32(r12) >> 5);
        r12 = *gptr<u32>(r0 + (r3 << 2));
        r12 = r12 | lsl_r(r5, r6 & 0xff);  // (from the original)
        *gptr<u32>(r0 + (r3 << 2)) = u32(r12);
        r3 = *gptr<u32>(r2 + (r1 << 2));
        zf = r3 == 0xbdu;  // (from the original)
        guest::preempt();
    } while (!zf);
L_126e4c:;
    *gptr<u32>(r14 + 0x134u) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x138u) = u32(r4);  // (from the original)
    r1 = 0x97d510u;  // (from the original)
    *gptr<u32>(r14 + 0x13cu) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x140u) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x144u) = u32(r4);  // (from the original)
    *gptr<u32>(r14 + 0x148u) = u32(r4);  // (from the original)
    r2 = *gptr<u32>(r1);
    r0 = 0u;
    zf = r2 == 0xbdu;  // (from the original)
    if (zf) {
        goto L_126ea4;
    } else {
        r2 = 0xae822cu;  // (from the original)
    }
    do {
L_126e7c:;
        r3 = *gptr<u32>(r1 + (r0 << 2));
        r0 = r0 + 1u;
        r12 = u32(s32(r3) >> 5);
        r3 = r3 & 0x1fu;  // (from the original)
        r14 = *gptr<u32>(r2 + (r12 << 2));
        r3 = r14 | lsl_r(r5, r3 & 0xff);  // (from the original)
        *gptr<u32>(r2 + (r12 << 2)) = u32(r3);
        r3 = *gptr<u32>(r1 + (r0 << 2));
        zf = r3 == 0xbdu;  // (from the original)
        guest::preempt();
    } while (!zf);
L_126ea4:;
    r0 = *gptr<u32>(r13);
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_126eac:;
    *gptr<u32>(r3) = u32(r7);
    goto L_126eb8;
L_126eb4:;
    *gptr<u32>(r3) = u32(r6);
L_126eb8:;
    *gptr<u8>(r12) = u8(r1);
    guest::preempt();
    goto L_126d08;
}

}  // namespace d_001266e8
GUEST_EXPORT(0x001266e8, d_001266e8::f_001266e8);

// f_001275f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001275f0 {

inline constexpr guest::Function<0x0012da60, u32(u32, u32, u32, u32)> call_0012da60;  // (from the original)
inline constexpr guest::Function<0x0012da6c, u32(u32, u32, u32, u32)> call_0012da6c;  // (from the original)
inline constexpr guest::Function<0x0012db48, u32(u32, u32, u32, u32)> call_0012db48;  // (from the original)
inline constexpr guest::Function<0x00134024, u32(u32, u32, u32, u32)> call_00134024;  // (from the original)

u32 f_001275f0(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x974a88u;  // (from the original)
    *gptr<u32>(r4) = u32(r0);
    r0 = call_0012db48(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r4) + 4u;
    r0 = call_0012da60(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r4) + 8u;
    r0 = call_00134024(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r4) + 0xcu;  // (from the original)
    r0 = call_0012da6c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001275f0
GUEST_EXPORT(0x001275f0, d_001275f0::f_001275f0);

// f_00127c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00127c70 {


u32 f_00127c70() {
    u32 r0 = 0;
    r0 = 0x3000000u;  // (from the original)
    return r0;
}

}  // namespace d_00127c70
GUEST_EXPORT(0x00127c70, d_00127c70::f_00127c70);

// f_00127db8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00127db8 {

struct __attribute__((packed)) Object_00127db8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00127db8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00127db8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00127db8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00127db8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00127db8_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00131b3c, u32(u32, u32, u32, u32)> call_00131b3c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00127db8(gptr<Object_00127db8_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = 0u;
    r5 = ~0u;
    r1 = 0x8eb490u;  // (from the original)
    arg0->word_4 = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_8 = u32(r4);
    arg0->word_c = u32(r4);
    arg0->word_10 = u32(r5);
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00131b3c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = 0x131694u;  // (from the original)
    ea = r0 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r3 = 0xau;  // (from the original)
    r2 = 0x20u;  // (from the original)
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 - 0x44u;  // (from the original)
    r6 = 0x64u;  // (from the original)
    ea = r0 + 0x184u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    r3 = 0x3cu;  // (from the original)
    r12 = 0xfa0u;  // (from the original)
    ea = r0 + 0x1b8u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r0 + 0x1b0u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r12);
    S1 = std::bit_cast<float>(*gptr<u32>(0x127f70u));  // (from the original)
    r2 = 0xae0fd4u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x127f74u));  // (from the original)
    *gptr<u32>(r0 + 0x1bcu) = u32(std::bit_cast<u32>(S1));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x127f78u));  // (from the original)
    *gptr<u32>(r0 + 0x1c0u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r0 + 0x1c4u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(r0 + 0x1c8u) = u32(std::bit_cast<u32>(S2));  // (from the original)
    *gptr<u32>(r0 + 0x1ccu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r0 + 0x1d0u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x1dcu;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r0 + 0x1d4u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r12);
    *gptr<u32>(r0 + 0x1e0u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r0 + 0x1e4u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r0 + 0x1e8u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(r0 + 0x1ecu) = u32(std::bit_cast<u32>(S2));  // (from the original)
    *gptr<u32>(r0 + 0x1f0u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r0 + 0x1f4u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x200u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r0 + 0x1f8u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r12);
    r3 = r0 + 0x220u;  // (from the original)
    *gptr<u32>(r0 + 0x204u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r0 + 0x208u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r0 + 0x20cu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(r0 + 0x210u) = u32(std::bit_cast<u32>(S2));  // (from the original)
    *gptr<u32>(r0 + 0x214u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r2 = 0xfau;  // (from the original)
    ea = r0 + 0x218u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x21cu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(r3) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S1));
    r3 = r0 + 0x230u;  // (from the original)
    ea = r0 + 0x228u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x22cu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(r3) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S1));
    r3 = r0 + 0x240u;  // (from the original)
    ea = r0 + 0x238u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x23cu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(r3) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S1));
    ea = r0 + 0x248u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x24cu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x250u;  // (from the original)
    *gptr<u32>(ea) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea + 4) = u32(std::bit_cast<u32>(S1));
    ea = r0 + 0x258u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x25cu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    r2 = r0 + 0x260u;  // (from the original)
    *gptr<u32>(r2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2 + 4) = u32(std::bit_cast<u32>(S1));
    r2 = 0x8eb474u;  // (from the original)
    ea = r0 + 0x268u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x270u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x26cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    S0 = std::bit_cast<float>(*gptr<u32>(0x127f80u));  // (from the original)
    ea = r0 + 0x278u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x274u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(r0 + 0x27cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x280u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x284u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r0 + 0x28cu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x288u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(r0 + 0x290u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x294u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x298u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r0 + 0x29cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    r2 = r0 + 0x21cu;  // (from the original)
    ea = r0 + 0x194u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x190u;  // (from the original)
    *gptr<u32>(ea) = u32(r0 + 0x1f8u);  // (from the original)
    ea = r0 + 0x18cu;  // (from the original)
    *gptr<u32>(ea) = u32(r0 + 0x1d4u);  // (from the original)
    ea = r0 + 0x188u;  // (from the original)
    *gptr<u32>(ea) = u32(r0 + 0x1b0u);  // (from the original)
    ea = r0 + 0x198u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r0 + 0x22cu);  // (from the original)
    ea = r0 + 0x1a0u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r0 + 0x23cu);  // (from the original)
    r1 = r0 + 0x1a8u;  // (from the original)
    *gptr<u32>(r1) = u32(r0 + 0x24cu);  // (from the original)
    *gptr<u32>(r1 + 4) = u32(r0 + 0x25cu);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00127db8
GUEST_EXPORT(0x00127db8, d_00127db8::f_00127db8);

// f_001282dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001282dc {

struct __attribute__((packed)) Object_001282dc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001282dc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001282dc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001282dc_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0012ec48, u32(u32, u32, u32, u32)> call_0012ec48;  // (from the original)
inline constexpr guest::Function<0x0013121c, u32(u32, u32, u32, u32)> call_0013121c;  // (from the original)
inline constexpr guest::Function<0x00135134, u32(u32, u32, u32, u32)> call_00135134;  // (from the original)

u32 f_001282dc(gptr<Object_001282dc_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8ef740u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_8 = u32(r4);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_0012ec48(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x4cu;  // (from the original)
    r0 = call_00135134(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x14u;  // (from the original)
    r0 = call_0013121c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 - 0x6cu;  // (from the original)
    r1 = 0x83b146u;  // (from the original)
    *gptr<u32>(r0 + 0xbcu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xc0u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xc4u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xacu) = u32(*gptr<u32>(r1));  // (from the original)
    *gptr<u32>(r0 + 0xb0u) = u32(*gptr<u32>(r1 + 4u));  // (from the original)
    *gptr<u32>(r0 + 0xb4u) = u32(*gptr<u32>(r1 + 8u));  // (from the original)
    r1 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    *gptr<u32>(r0 + 0xb8u) = u32(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001282dc
GUEST_EXPORT(0x001282dc, d_001282dc::f_001282dc);

// f_001285a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001285a4 {

struct __attribute__((packed)) Object_001285a4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Object_001285a4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001285a4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001285a4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001285a4_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001285a4_0, byte_d, 0xd);  // (from the original)


void f_001285a4(gptr<Object_001285a4_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_0 = u32(0x8f2d14u);  // (from the original)
    arg0->byte_c = u8(r1);
    arg0->byte_d = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001285a4
GUEST_EXPORT(0x001285a4, d_001285a4::f_001285a4);

// f_00128608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00128608 {

struct __attribute__((packed)) Object_00128608_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00128608_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00128608_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00128608_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0012ea28, u32(u32, u32, u32, u32)> call_0012ea28;  // (from the original)
inline constexpr guest::Function<0x0013366c, u32(u32, u32, u32, u32)> call_0013366c;  // (from the original)
inline constexpr guest::Function<0x002f86c0, u32(u32, u32, u32, u32)> call_002f86c0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00128608(gptr<Object_00128608_0> arg0, float S0, float S1, float S2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = 0u;
    arg0->word_4 = u32(r5);
    arg0->word_0 = u32(0x8f39fcu);  // (from the original)
    r1 = 0x131800u;  // (from the original)
    r3 = 3u;
    r2 = 4u;
    arg0->word_8 = u32(r5);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00301d0c(r0, r1, r2, r3);
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r0 = r0 - 0xcu;  // (from the original)
    ea = r0 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(5u);
    *gptr<u32>(ea + 4) = u32(2u);
    r6 = 1u;
    ea = r0 + 0x30u;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    ea = r0 + 0x58u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    *gptr<u32>(r0 + 0x60u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x64u) = u32(r5);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x12879cu));  // (from the original)
    *gptr<u32>(r0 + 0x68u) = u32(r5);  // (from the original)
    *gptr<u8>(r0 + 0x6cu) = u8(r5);  // (from the original)
    *gptr<u32>(r0 + 0x78u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x84u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x8cu) = u32(r5);  // (from the original)
    *gptr<u8>(r0 + 0x90u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x91u) = u8(r5);  // (from the original)
    *gptr<u32>(r0 + 0x98u) = u32(0x14u);  // (from the original)
    *gptr<u32>(r0 + 0x94u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xa8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xacu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0xb0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xb4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xb8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xbcu) = u32(r5);  // (from the original)
    res = r0 + 0xc4u;  // (from the original)
    r2 = res;
    r1 = r0 + 0xb4u;  // (from the original)
    *gptr<u32>(r0 + 0xc0u) = u32(r5);  // (from the original)
    r3 = 3u;
    if (res != 0) {
        *gptr<u32>(r1) = u32(r2);
        *gptr<u32>(r1 + 4) = u32(r3);
    }
    r1 = 0x131800u;  // (from the original)
    r3 = 9u;
    r2 = 4u;
    r0 = r0 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    *gptr<u8>(r0 + 0x24u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x25u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x26u) = u8(r5);  // (from the original)
    r4 = r0 - 0xd0u;  // (from the original)
    *gptr<u8>(r0 + 0x27u) = u8(r5);  // (from the original)
    r0 = r0 - 0x9eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0013366c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    ea = r4 + 0x40u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4 + 0x44u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4 + 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4 + 0x4cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4 + 0x50u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4 + 0x54u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4 + 0x9cu;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    ea = r4 + 0x9du;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    ea = r4 + 0x9eu;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    ea = r4 + 0x9fu;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    ea = r4 + 0xa0u;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    ea = r4 + 0xa1u;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    ea = r4 + 0xa2u;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    ea = r4 + 0xa3u;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    ea = r4 + 0xa4u;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    ea = r4 + 0x24u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = 0x94cd34u;  // (from the original)
    r5 = *gptr<u32>(r2 + (r1 + (r1 << 1) << 3) + (*gptr<u32>(ea) << 2));
    *gptr<u32>(r4 + 0x70u) = u32(r5);  // (from the original)
    r1 = u32(*gptr<u8>(r5 + 0x21u)) + 1u;  // (from the original)
    r0 = 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002f86c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x88u) = u32(r0);  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 0x21u));  // (from the original)
    S2 = float(std::bit_cast<u32>(std::bit_cast<float>(r0)));
    S0 = std::bit_cast<float>(r0 + 1u);
    r0 = r4;
    S0 = float(std::bit_cast<u32>(S0));
    S1 = S2 * std::bit_cast<float>(*gptr<u32>(0x1287a4u));  // (from the original)
    S2 = S0 / S1;
    *gptr<u32>(r4 + 0x80u) = u32(std::bit_cast<u32>(S2));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0012ea28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00128608
GUEST_EXPORT(0x00128608, d_00128608::f_00128608);

// f_00128804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00128804 {

struct __attribute__((packed)) Object_00128804_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_00128804_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00128804_0, byte_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x0012e904, u32(u32, u32, u32, u32)> call_0012e904;  // (from the original)
inline constexpr guest::Function<0x0012e968, u32(u32, u32, u32, u32)> call_0012e968;  // (from the original)
inline constexpr guest::Function<0x0012ebf4, u32(u32, u32, u32, u32)> call_0012ebf4;  // (from the original)
inline constexpr guest::Function<0x00130ed8, u32(u32, u32, u32, u32)> call_00130ed8;  // (from the original)
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)

u32 f_00128804(gptr<Object_00128804_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r0;
    if (u32(arg0->byte_18) == 0) {
        goto L_128864;
    }
    r0 = arg0->word_10;
    r6 = 0u;
    if (r0 == 0) {
        goto L_128838;
    } else {
        r1 = 0u;
    }
    r0 = call_00136e58(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0x19u) = u8(r6);  // (from the original)
L_128838:;
    r1 = 1u;
    r0 = r4;
    r0 = call_0012ebf4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x1f4u;  // (from the original)
    r0 = call_0012e904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_0012e968(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x54u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x18u) = u8(r6);  // (from the original)
L_128864:;
    r4 = r5 + 0x20cu;  // (from the original)
    *gptr<u32>(r5 + 0x1f4u) = u32(0x8ef714u);  // (from the original)
    *gptr<u32>(r5 + 0x20cu) = u32(0x8f3a54u);  // (from the original)
    r0 = r5 + 0x214u;  // (from the original)
    r0 = call_00130ed8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 4u;
    r0 = call_00136cc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5 + 0x10u;  // (from the original)
    r0 = call_00136cc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00128804
GUEST_EXPORT(0x00128804, d_00128804::f_00128804);

// f_00128924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00128924 {

struct __attribute__((packed)) Object_00128924_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00128924_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00128924_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00128924_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00128924(gptr<Object_00128924_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = 0u;
    arg0->byte_0 = u8(r4);
    arg0->word_4 = u32(r4);
    ea = r0 + 8u;
    arg0->word_8 = u32(r4);
    r1 = 0x12e8b0u;  // (from the original)
    r3 = 6u;
    r2 = 0xecu;  // (from the original)
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 - 0xcu;  // (from the original)
    *gptr<u32>(r0 + 0x594u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x5e0u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x5e4u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x5e8u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x5ecu) = u8(1u);  // (from the original)
    r2 = 0u;
    r1 = r2;
    r3 = ~0u;
    *gptr<u32>(r0 + 0x5f0u) = u32(r4);  // (from the original)
    do {
L_128978:;
        r12 = r0 + (r2 << 1);
        r2 = r2 + 1u;
        r4 = r0 + (r2 << 1) + 0x500u;  // (from the original)
        r1 = r1 + 2u;
        *gptr<u16>(r12 + 0x5f4u) = u16(r3);  // (from the original)
        res = r1 - 0xau;  // (from the original)
        r2 = r2 + 1u;
        *gptr<u16>(r4 + 0xf4u) = u16(r3);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r1 ^ 0xau) & (r1 ^ res)) >> 0x1f);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00128924
GUEST_EXPORT(0x00128924, d_00128924::f_00128924);

// f_001289ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001289ac {

struct __attribute__((packed)) Object_001289ac_0 {
    u8 byte_0;
    u8 byte_1;
    u16 half_2;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001289ac_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001289ac_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_001289ac_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_001289ac_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001289ac_0, word_8, 0x8);  // (from the original)


void f_001289ac(gptr<Object_001289ac_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    r12 = 0u;
    arg0->half_2 = u16(r12);
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r12);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r3);
    return;
}

}  // namespace d_001289ac
GUEST_EXPORT(0x001289ac, d_001289ac::f_001289ac);

// f_00128a30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00128a30 {

inline constexpr guest::Function<0x0012ee00, u32(u32, u32, u32, u32)> call_0012ee00;  // (from the original)
inline constexpr guest::Function<0x0012ee60, u32(u32, u32, u32, u32)> call_0012ee60;  // (from the original)
inline constexpr guest::Function<0x0013cc9c, u32(u32, u32, u32, u32)> call_0013cc9c;  // (from the original)

u32 f_00128a30(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r5 = 0x974f00u;  // (from the original)
    r3 = 2u;
    r2 = *gptr<u32>(r5 + 0x10u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0xcu);  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 0x10u) = u32(r2);  // (from the original)
    r2 = 7u;
    r1 = r13 + 8u;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012ee00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        goto L_128acc;
    }
    r8 = r4;
    ea = r13 + 8u;
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    r0 = 0xae0c04u;  // (from the original)
    r4 = *gptr<u32>(r5 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0013cc9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = 0x8fae8cu;  // (from the original)
        ea = r0;
        *gptr<u32>(ea) = u32(r1);
        ea = r0 + 8u;
        *gptr<u32>(ea) = u32(r6);
        *gptr<u32>(ea + 4) = u32(r7);
        *gptr<u32>(r0 + 4u) = u32(r4);
    }
    if (r0 == 0) {
        r4 = 0xd8604659u;  // (from the original)
    } else {
        r4 = 0u;
    }
    *gptr<u32>(r8) = u32(r0);
    res = r4 >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_128acc;
    }
    ea = r5 + 0x10u;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r13 + 8u;
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    *gptr<u32>(r13) = u32(r0);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0012ee60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
L_128acc:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00128a30
GUEST_EXPORT(0x00128a30, d_00128a30::f_00128a30);

// f_00129094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00129094 {

inline constexpr guest::Function<0x00129c7c, u32(u32, u32, u32, u32)> call_00129c7c;  // (from the original)
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> call_00129da0;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_00129094(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_00129c7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = call_00134250(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (*gptr<u32>(r4) != 0) {
        r0 = 0xd8a103f9u;  // (from the original)
        goto L_1290e4;
    }
    r0 = r5;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r2 = r0;
    r3 = 0u;
    r1 = r5;
    r0 = r4;
    r0 = call_00129da0(r0, r1, r2, r3);
    r1 = r0 & 0x80000000u;  // (from the original)
    if (r1 >> 0x1f != 0u) {  // (from the original)
        r0 = 0xd92103fbu;  // (from the original)
    }
L_1290e4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00129094
GUEST_EXPORT(0x00129094, d_00129094::f_00129094);

// f_001292b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001292b0 {

inline constexpr guest::Function<0x00129330, u32(u32, u32, u32, u32)> call_00129330;  // (from the original)

u32 f_001292b0(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    r3 = r0;
    r0 = 0xae0ab8u;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(0u);
    *gptr<u8>(r0) = u8(r1);
    *gptr<u16>(r0 + 2u) = u16(0xf22cu);  // (from the original)
    *gptr<u32>(r0 + 8u) = u32(r2);
    *gptr<u32>(r0 + 4u) = u32(r3);
    return call_00129330(r0, r1, r2, r3);
}

}  // namespace d_001292b0
GUEST_EXPORT(0x001292b0, d_001292b0::f_001292b0);

// f_001292e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001292e8 {

inline constexpr guest::Function<0x00129330, u32(u32, u32, u32, u32)> call_00129330;  // (from the original)

u32 f_001292e8(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 zf = 0;
    r2 = r0 >> 0x1b;  // (from the original)
    if ((r0 & 0x80000000u) != 0) {  // (from the original)
        r2 = r2 - 0x20u;  // (from the original)
    }
    zf = r2 == 1u;
    if (!zf) {
        zf = r2 + 7u == 0;
    }
    if (zf) {
        return r0;
    }
    r2 = 0xae0ab8u;  // (from the original)
    r3 = 0u;
    ea = r2 + 1u;
    *gptr<u8>(ea) = u8(r3);
    ea = r2 + 2u;
    *gptr<u16>(ea) = u16(0xf22cu);  // (from the original)
    ea = r2;
    *gptr<u8>(ea) = u8(r3);
    ea = r2 + 4u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r0 = r2;
    return call_00129330(r0, r1, r2, r3);
}

}  // namespace d_001292e8
GUEST_EXPORT(0x001292e8, d_001292e8::f_001292e8);

// f_001297c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001297c4 {

inline constexpr guest::Function<0x00129c7c, u32(u32, u32, u32, u32)> call_00129c7c;  // (from the original)
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> call_00129da0;  // (from the original)
inline constexpr guest::Function<0x0012f9f0, u32(u32, u32, u32, u32)> call_0012f9f0;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)

u32 f_001297c4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0x974f30u;  // (from the original)
    r6 = 0x97d8c4u;  // (from the original)
    r4 = 0x8a23d0u;  // (from the original)
    r0 = u32(*gptr<u8>(r5));
    if (r0 != 0) {
        r0 = 0xd8208ff9u;  // (from the original)
        goto L_12984c;
    }
    r0 = call_00129c7c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xfe400000u;  // (from the original)
    res = r1 - (r0 << 0x16);  // (from the original)
    zf = res == 0;
    if (!zf) {
        res = r0 >> 0x1f;  // (from the original)
        zf = res == 0;
        r0 = res;
    }
    if (!zf) {
        r0 = call_00134250(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r4;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r2 = r0;
    r3 = 1u;
    r1 = r4;
    r0 = r6;
    r0 = call_00129da0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        if (r4 == 0xd0401834u) {  // (from the original)
            r0 = 0xc8a08ff9u;  // (from the original)
            goto L_12984c;
        }
        res = r4 >> 0x1f;  // (from the original)
        r0 = res;
        if (res != 0) {
            r0 = call_00134250(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
    }
    r0 = 0xb0500c8u;  // (from the original)
    r0 = call_0012f9f0(r0, r1, r2, r3);
    r1 = 1u;
    r0 = r4;
    *gptr<u8>(r5) = u8(r1);
L_12984c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001297c4
GUEST_EXPORT(0x001297c4, d_001297c4::f_001297c4);

// f_00129870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00129870 {

struct __attribute__((packed)) Object_00129870_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00129870_0, word_0, 0x0);  // (from the original)


u32 f_00129870(gptr<Object_00129870_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x974f30u;  // (from the original)
    if (u32(*gptr<u8>(r1 + 1u)) == 0) {
        r0 = 0xd8208ff8u;  // (from the original)
    } else {
        r1 = *gptr<u32>(r1 + 4u);
        arg0->word_0 = u32(r1);
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00129870
GUEST_EXPORT(0x00129870, d_00129870::f_00129870);

// f_00129898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00129898 {

inline constexpr guest::Function<0x0012f170, u32(u32, u32, u32, u32)> call_0012f170;  // (from the original)
inline constexpr guest::Function<0x0012f9ac, u32(u32, u32, u32, u32)> call_0012f9ac;  // (from the original)

u32 f_00129898(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r1;
    r5 = 0x974f30u;  // (from the original)
    r1 = u32(*gptr<u8>(r5 + 1u));
    if (r1 != 0) {
        r0 = 0xd8208ff9u;  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = r4 << 0x14;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0xe0e08ff2u;  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res = r0 << 0x14;  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0xe0e08ff1u;  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 3u;
    r3 = r1;
    *gptr<u32>(r13) = u32(r1);
    r1 = r0;
    r0 = 0xae0f18u;  // (from the original)
    r2 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0012f170(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = *gptr<u32>(0xae0f2cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012f9ac(r0, r1, r2, r3);
    r1 = r4 - 4u;
    *gptr<u32>(r5 + 4u) = u32(r1);
    if ((r0 & 0x80000000u) >> 0x1f == 0u) {  // (from the original)
        r1 = 1u;
        *gptr<u8>(r5 + 1u) = u8(r1);
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00129898
GUEST_EXPORT(0x00129898, d_00129898::f_00129898);

// f_00129fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00129fa0 {

inline constexpr guest::Function<0x0012a130, u32(u32, u32, u32, u32)> call_0012a130;  // (from the original)
inline constexpr guest::Function<0x0012fb3c, u32(u32, u32, u32, u32)> call_0012fb3c;  // (from the original)
inline constexpr guest::Function<0x0012fe1c, u32(u32, u32, u32, u32)> call_0012fe1c;  // (from the original)
inline constexpr guest::Function<0x0012fea0, u32(u32, u32, u32, u32)> call_0012fea0;  // (from the original)
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> call_00136464;  // (from the original)
inline constexpr guest::Function<0x00136474, u32(u32, u32, u32, u32)> call_00136474;  // (from the original)

u32 f_00129fa0(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_0012fb3c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r0 = 0x202bf8u;  // (from the original)
        goto L_129ffc;
    }
    r0 = 0x8b2f4cu;  // (from the original)
    r4 = *gptr<u32>(r0);
    r0 = call_00136474(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0u;
    r1 = r4;
    r0 = call_0012fea0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    res = r0 >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        goto L_129ff8;
    }
    r0 = call_0012a130(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_129ff8;
    }
    r4 = 0u;
    r0 = call_00136464(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    r0 = r0 + 0x30u;  // (from the original)
    r0 = call_0012fe1c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_129ff8:;
    r0 = r5;
L_129ffc:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00129fa0
GUEST_EXPORT(0x00129fa0, d_00129fa0::f_00129fa0);

// f_0012a008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012a008 {

inline constexpr guest::Function<0x0012a130, u32(u32, u32, u32, u32)> call_0012a130;  // (from the original)
inline constexpr guest::Function<0x0012fb3c, u32(u32, u32, u32, u32)> call_0012fb3c;  // (from the original)
inline constexpr guest::Function<0x0012fe1c, u32(u32, u32, u32, u32)> call_0012fe1c;  // (from the original)
inline constexpr guest::Function<0x0012fee4, u32(u32, u32, u32, u32)> call_0012fee4;  // (from the original)
inline constexpr guest::Function<0x00136464, u32(u32, u32, u32, u32)> call_00136464;  // (from the original)
inline constexpr guest::Function<0x00136474, u32(u32, u32, u32, u32)> call_00136474;  // (from the original)

u32 f_0012a008(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_0012fb3c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 0x202bf8u;  // (from the original)
        goto L_12a054;
    }
    r0 = call_00136474(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_0012fee4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    res = r0 >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        goto L_12a050;
    }
    r0 = call_0012a130(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_12a050;
    }
    r4 = 1u;
    r0 = call_00136464(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    r0 = r0 + 0x30u;  // (from the original)
    r0 = call_0012fe1c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_12a050:;
    r0 = r5;
L_12a054:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012a008
GUEST_EXPORT(0x0012a008, d_0012a008::f_0012a008);

// f_0012a084: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012a084 {

inline constexpr guest::Function<0x0012ff6c, u32(u32, u32, u32, u32)> call_0012ff6c;  // (from the original)
inline constexpr guest::Function<0x00136474, u32(u32, u32, u32, u32)> call_00136474;  // (from the original)

u32 f_0012a084(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r4 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00136474(r0, r1, r2, r3);
    r3 = r7;
    r2 = r6;
    r1 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0012ff6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012a084
GUEST_EXPORT(0x0012a084, d_0012a084::f_0012a084);

// f_0012a0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012a0b8 {


u32 f_0012a0b8() {
    u32 r0 = 0;
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(0x97d8bcu) + 0x75u))));  // (from the original)
    return r0;
}

}  // namespace d_0012a0b8
GUEST_EXPORT(0x0012a0b8, d_0012a0b8::f_0012a0b8);

// f_0012a0d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012a0d0 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_0012a0d0(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = *gptr<u32>(0x97d8bcu);  // (from the original)
    r0 = 0u;
    if (r1 < 7u) {
        r0 = r6;
        r0 = call_00135748(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r6 + (r5 << 2);
        r0 = r6;
        r5 = *gptr<u32>(r1 + 0x10u);  // (from the original)
        *gptr<u32>(r1 + 0x10u) = u32(r4);  // (from the original)
        r0 = call_001357ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r5;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012a0d0
GUEST_EXPORT(0x0012a0d0, d_0012a0d0::f_0012a0d0);

// f_0012a11c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012a11c {


u32 f_0012a11c() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x97d8acu);  // (from the original)
    return r0;
}

}  // namespace d_0012a11c
GUEST_EXPORT(0x0012a11c, d_0012a11c::f_0012a11c);

// f_0012a370: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012a370 {

inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32, u32)> call_001292e8;  // (from the original)
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> call_0012a518;  // (from the original)
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> call_0012ab78;  // (from the original)
inline constexpr guest::Function<0x0013028c, u32(u32, u32, u32, u32)> call_0013028c;  // (from the original)

u32 f_0012a370(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r4 = 0u;
    r10 = r0;
    r8 = r1;
    r9 = r2;
    r5 = r3;
    ea = r13 + 0x38u;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    *gptr<u32>(r13 + 8u) = u32(r4);
    *gptr<u32>(r13 + 0xcu) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012a518(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x10u;  // (from the original)
    if (r5 == 0) {
        goto L_12a42c;
    }
    zf = r6 == 0;
    if (zf) {
        r1 = 1u;
    } else {
        r1 = r6;
        r3 = r5;
    }
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13) = u32(r1);
    if (!zf) {
        goto L_12a3c8;
    }
L_12a3c4:;
    r3 = r13 + 0xcu;  // (from the original)
L_12a3c8:;
    if (r8 == 0) {
        r2 = 1u;
        goto L_12a3e8;
    }
    zf = r9 == 0;
    if (zf) {
        r9 = 1u;
    }
    r2 = r9;
    if (!zf) {
        r1 = r8;
        goto L_12a3ec;
    }
L_12a3e8:;
    r1 = r13 + 8u;
L_12a3ec:;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0013028c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r1 = 0x12a400u;  // (from the original)
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_001292e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    zf = r5 == 0;
    if (!zf) {
        zf = r6 == 0;
    }
    if (zf) {
        *gptr<u32>(r13 + 0x10u) = u32(r4);  // (from the original)
    }
    if (r7 != 0) {
        r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        *gptr<u32>(r7) = u32(r0);
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0012ab78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r8;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_12a42c:;
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13) = u32(1u);
    guest::preempt();
    goto L_12a3c4;
}

}  // namespace d_0012a370
GUEST_EXPORT(0x0012a370, d_0012a370::f_0012a370);

// f_0012a450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012a450 {

inline constexpr guest::Function<0x0012f374, u32(u32, u32, u32, u32)> call_0012f374;  // (from the original)
inline constexpr guest::Function<0x0012f474, u32(u32, u32, u32, u32)> call_0012f474;  // (from the original)
inline constexpr guest::Function<0x0012f518, u32(u32, u32, u32, u32)> call_0012f518;  // (from the original)

u32 f_0012a450(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x974ab0u;  // (from the original)
    if (r0 != 0) {
        r0 = u32(*gptr<u8>(r4 + 4u));
        if (r0 == 0) {
            guest::cpu()->r[13] += 8u;
            return r0;
        }
        r0 = call_0012f518(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0u;
        *gptr<u8>(r4 + 4u) = u8(r0);
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0012f374(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0012f474(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    *gptr<u8>(r4 + 4u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0012a450
GUEST_EXPORT(0x0012a450, d_0012a450::f_0012a450);

// f_0012a4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012a4a0 {

inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32, u32)> call_001292e8;  // (from the original)
inline constexpr guest::Function<0x00129fa0, u32(u32, u32, u32, u32)> call_00129fa0;  // (from the original)
inline constexpr guest::Function<0x0012a008, u32(u32, u32, u32, u32)> call_0012a008;  // (from the original)

u32 f_0012a4a0(u32 r0, u32 r1_unused, u32 r2) {
    u32 res = 0;
    u32 r1 = 0;
    u32 zf = 0;
    r1 = 0x974ab0u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    if (r0 != 0) {
        r0 = 1u;
        *gptr<u8>(r1 + 3u) = u8(r0);
        r0 = call_00129fa0(r0, r1, r2, guest::cpu()->r[3]);
        r1 = 0x12a4c4u;  // (from the original)
        res = r0 >> 0x1f;  // (from the original)
        r2 = res;
        if (res != 0) {
            guest::cpu()->r[13] += 8u;
            return call_001292e8(r0, r1, r2, guest::cpu()->r[3]);
        }
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r1 + 3u));
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    *gptr<u8>(r1 + 3u) = u8(r0);
    r0 = call_0012a008(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0xd8a02a05u;  // (from the original)
    zf = r0 == r1;
    if (!zf) {
        r1 = 0xd9001bf7u;  // (from the original)
        zf = r0 == r1;
    }
    if (zf) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x12a500u;  // (from the original)
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_001292e8(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0012a4a0
GUEST_EXPORT(0x0012a4a0, d_0012a4a0::f_0012a4a0);

// f_0012a54c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012a54c {

inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32, u32)> call_001292e8;  // (from the original)
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> call_0012a518;  // (from the original)
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> call_0012ab78;  // (from the original)
inline constexpr guest::Function<0x00130360, u32(u32, u32, u32, u32)> call_00130360;  // (from the original)

u32 f_0012a54c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r7 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_0012a518(r0, r1, r2, r3);
    r3 = r7;
    r2 = r6;
    r1 = r5;
    r0 = r4;
    *gptr<u32>(r13) = u32(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_00130360(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x12a58cu;  // (from the original)
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_001292e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0012ab78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = u32(s32(s8(*gptr<u8>(r13 + 4u))));
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012a54c
GUEST_EXPORT(0x0012a54c, d_0012a54c::f_0012a54c);

// f_0012ae20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ae20 {

inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32, u32)> call_001292e8;  // (from the original)
inline constexpr guest::Function<0x0012a22c, u32(u32, u32, u32, u32)> call_0012a22c;  // (from the original)
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> call_0012a518;  // (from the original)
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> call_0012ab78;  // (from the original)
inline constexpr guest::Function<0x00130448, u32(u32, u32, u32, u32)> call_00130448;  // (from the original)

u32 f_0012ae20(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0012a518(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_0012a22c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    r0 = call_00130448(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x12ae40u;  // (from the original)
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res != 0) {
        r0 = call_001292e8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    guest::cpu()->r[13] += 8u;
    return call_0012ab78(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0012ae20
GUEST_EXPORT(0x0012ae20, d_0012ae20::f_0012ae20);

// f_0012ae80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ae80 {

inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32, u32)> call_001292e8;  // (from the original)
inline constexpr guest::Function<0x0012a22c, u32(u32, u32, u32, u32)> call_0012a22c;  // (from the original)
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> call_0012a518;  // (from the original)
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> call_0012ab78;  // (from the original)
inline constexpr guest::Function<0x00130658, u32(u32, u32, u32, u32)> call_00130658;  // (from the original)

u32 f_0012ae80(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0012a518(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_0012a22c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_00130658(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x12ae98u;  // (from the original)
    res = r0 >> 0x1f;  // (from the original)
    r2 = res;
    if (res != 0) {
        r0 = call_001292e8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    guest::cpu()->r[13] += 8u;
    return call_0012ab78(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0012ae80
GUEST_EXPORT(0x0012ae80, d_0012ae80::f_0012ae80);

// f_0012b228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012b228 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_0012b228() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0xae0b5cu;  // (from the original)
    r0 = r4;
    r0 = call_00135748(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (*gptr<u32>(0x97d898u) == 0) {  // (from the original)
        r5 = 0u;
    } else {
        r5 = 1u;
    }
    r0 = r4;
    r0 = call_001357ec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0012b228
GUEST_EXPORT(0x0012b228, d_0012b228::f_0012b228);

// f_0012b394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012b394 {

inline constexpr guest::Function<0x00130c60, u32(u32, u32, u32, u32)> call_00130c60;  // (from the original)

u32 f_0012b394(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_00130c60(r0, r1, r2, r3);
    r2 = r0;
    r1 = 0u;
    *gptr<u32>(r0) = u32(0x901accu);  // (from the original)
    r0 = r0 + 0x20u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 4u;
    r3 = r0 + 4u;
    ea = r2 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r3);
    *gptr<u32>(r0 + 8u) = u32(r3);
    r3 = r2 + 0x34u;  // (from the original)
    ea = r2 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r3);
    r0 = r2;
    *gptr<u32>(r2 + 0x38u) = u32(r3);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012b394
GUEST_EXPORT(0x0012b394, d_0012b394::f_0012b394);

// f_0012b3dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012b3dc {

inline constexpr guest::Function<0x00131154, u32(u32, u32, u32, u32)> call_00131154;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_0012b3dc(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r0 + 4u;
    r0 = r5;
    r0 = call_00135748(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x10u;  // (from the original)
    r0 = call_00131154(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    r0 = r5;
    r0 = call_001357ec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0012b3dc
GUEST_EXPORT(0x0012b3dc, d_0012b3dc::f_0012b3dc);

// f_0012b40c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012b40c {

inline constexpr guest::Function<0x001008e9, u32(u32, u32, u32, u32)> call_001008e8;  // (from the original)
inline constexpr guest::Function<0x00100901, u32(u32, u32, u32, u32)> call_00100900;  // (from the original)
inline constexpr guest::Function<0x00100919, u32(u32, u32, u32, u32)> call_00100918;  // (from the original)
inline constexpr guest::Function<0x00100931, u32(u32, u32, u32, u32)> call_00100930;  // (from the original)
inline constexpr guest::Function<0x00100949, u32(u32, u32, u32, u32)> call_00100948;  // (from the original)
inline constexpr guest::Function<0x00100961, u32(u32, u32, u32, u32)> call_00100960;  // (from the original)
inline constexpr guest::Function<0x00100979, u32(u32, u32, u32, u32)> call_00100978;  // (from the original)
inline constexpr guest::Function<0x001009b1, u32(u32, u32, u32, u32)> call_001009b0;  // (from the original)
inline constexpr guest::Function<0x001009c9, u32(u32, u32, u32, u32)> call_001009c8;  // (from the original)
inline constexpr guest::Function<0x001009e5, u32(u32, u32, u32, u32)> call_001009e4;  // (from the original)
inline constexpr guest::Function<0x001009fd, u32(u32, u32, u32, u32)> call_001009fc;  // (from the original)
inline constexpr guest::Function<0x00100a15, u32(u32, u32, u32, u32)> call_00100a14;  // (from the original)
inline constexpr guest::Function<0x00100a2d, u32(u32, u32, u32, u32)> call_00100a2c;  // (from the original)
inline constexpr guest::Function<0x00100a45, u32(u32, u32, u32, u32)> call_00100a44;  // (from the original)
inline constexpr guest::Function<0x00100a5d, u32(u32, u32, u32, u32)> call_00100a5c;  // (from the original)
inline constexpr guest::Function<0x00100a75, u32(u32, u32, u32, u32)> call_00100a74;  // (from the original)
inline constexpr guest::Function<0x00132558, u32(u32, u32, u32, u32)> call_00132558;  // (from the original)

u32 f_0012b40c(u32 r0) {
    goto L_12b40c;
L_12b40c:;
    guest::cpu()->r[13] -= 8u;
    r0 = call_00100948(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00100978(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_001009fc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00100a44(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_001009e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00100a74(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00100a2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00100a14(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00100a5c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00100960(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00100900(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_001009c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00100918(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_001009b0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00100930(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00132558(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(*gptr<u8>(0xac1933u));  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return guest::call_address<u32>(0x100999u, r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    r0 = call_001008e8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(0x100999u, r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0012b40c
GUEST_EXPORT(0x0012b40c, d_0012b40c::f_0012b40c);

// f_0012bd24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bd24 {

inline constexpr guest::Function<0x0013208c, u32(u32, u32, u32, u32)> call_0013208c;  // (from the original)

u32 f_0012bd24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_0013208c(r0, r1, r2, r3);
    r2 = 0u;
    r12 = 0x8a3ba0u;  // (from the original)
    *gptr<u32>(r0) = u32(0x904458u);  // (from the original)
    r3 = 0x9047f8u;  // (from the original)
    r1 = r0;
    *gptr<u8>(r0 + 0x28u) = u8(r2);  // (from the original)
    ea = r0 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r12);
    ea = r1 + 0x34u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r12);
    ea = r1 + 0x3cu;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r12);
    r0 = r1;
    *gptr<u32>(r1 + 0x44u) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x4cu) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x48u) = u32(0x131560u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012bd24
GUEST_EXPORT(0x0012bd24, d_0012bd24::f_0012bd24);

// f_0012bd88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bd88 {

inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x00130d6c, u32(u32, u32, u32, u32)> call_00130d6c;  // (from the original)
inline constexpr guest::Function<0x00131be0, u32(u32, u32, u32, u32)> call_00131be0;  // (from the original)
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)

u32 f_0012bd88(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = r0 + 4u;
    r0 = call_00130d6c(r0, r1, r2, r3);
    r2 = 0x904554u;  // (from the original)
    r6 = 0u;
    r1 = r2 + 0x44u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 - 4u;
    r4 = r0 + 0x11cu;  // (from the original)
    r3 = r2 + 0x5cu;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r4) = u32(r3);
    *gptr<u32>(r4 + 4) = u32(r6);
    *gptr<u32>(r0 + 0x124u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x128u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x12cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x130u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x134u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x138u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x13cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x140u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x144u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x148u) = u32(r6);  // (from the original)
    *gptr<u8>(r0 + 0x14cu) = u8(r6);  // (from the original)
    r0 = r0 + 0x150u;  // (from the original)
    r0 = call_0012bfec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x150u;  // (from the original)
    *gptr<u8>(r0 + 0x1cu) = u8(r6);  // (from the original)
    r1 = r5;
    r0 = 0x230u;  // (from the original)
    r0 = call_001391d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = call_00131be0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r4 + 0x144u) = u32(r0);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012bd88
GUEST_EXPORT(0x0012bd88, d_0012bd88::f_0012bd88);

// f_0012be14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012be14 {

struct __attribute__((packed)) Object_0012be14_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
    u8 unknown_27[0x1];  // (not used here)
    u32 word_28;
    u8 byte_2c;
    u8 unknown_2d[0x3];  // (not used here)
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u8 byte_4c;
    u8 byte_4d;
    u8 byte_4e;
    u8 unknown_4f[0x1];  // (not used here)
    u32 word_50;
    u8 byte_54;
    u8 unknown_55[0x3];  // (not used here)
    u32 word_58;
    u8 byte_5c;
    u8 byte_5d;
    u8 unknown_5e[0x2];  // (not used here)
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
};
GUEST_OFFSET(Object_0012be14_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, byte_25, 0x25);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, byte_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, byte_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, byte_4d, 0x4d);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, byte_4e, 0x4e);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, byte_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, byte_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, byte_5d, 0x5d);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_0012be14_0, word_6c, 0x6c);  // (from the original)

inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)

u32 f_0012be14(gptr<Object_0012be14_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r13 = r13 - 0x18;  // (from the original)
    r4 = 4u;
    r5 = 3u;
    r12 = 0x4000u;  // (from the original)
    arg0->word_8 = u32(r4);
    arg0->word_c = u32(r5);
    arg0->word_10 = u32(r12);
    r2 = 0u;
    r1 = 0x9045bcu;  // (from the original)
    arg0->word_18 = u32(r2);
    arg0->word_14 = u32(r12);
    arg0->word_1c = u32(r2);
    arg0->word_20 = u32(r2);
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1 + 0x4cu);  // (from the original)
    r14 = 1u;
    arg0->byte_24 = u8(r2);
    arg0->byte_25 = u8(r14);
    r3 = ~0u;
    arg0->byte_26 = u8(r2);
    arg0->word_28 = u32(r3);
    arg0->byte_2c = u8(r14);
    r6 = 0x20000u;  // (from the original)
    arg0->word_30 = u32(r4);
    arg0->word_3c = u32(r6);
    arg0->word_34 = u32(r2);
    arg0->word_38 = u32(r12);
    r7 = 0x2000u;  // (from the original)
    r8 = r0 + 0x40u;  // (from the original)
    arg0->word_48 = u32(r7);
    arg0->word_40 = u32(r5);
    arg0->word_44 = u32(r12);
    r5 = r0 + 0x64u;  // (from the original)
    arg0->byte_4c = u8(r14);
    arg0->byte_4d = u8(r2);
    arg0->byte_4e = u8(r14);
    arg0->word_50 = u32(r3);
    arg0->byte_54 = u8(r2);
    arg0->word_58 = u32(r2);
    arg0->byte_5c = u8(r2);
    r1 = r0 + 0x60u;  // (from the original)
    arg0->byte_5d = u8(r2);
    arg0->word_64 = u32(r1);
    arg0->word_68 = u32(r2);
    ea = r0 + 0x60u;  // (from the original)
    arg0->word_60 = u32(r1);
    ea = ea + 0xcu;  // (from the original)
    arg0->word_6c = u32(r3);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0012bfec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x70u;  // (from the original)
    *gptr<u32>(r0 + 0x6cu) = u32(r4);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012be14
GUEST_EXPORT(0x0012be14, d_0012be14::f_0012be14);

// f_0012bed8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bed8 {

struct __attribute__((packed)) Object_0012bed8_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0012bed8_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)

u32 f_0012bed8(gptr<Object_0012bed8_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_3c;
    if (r0 == 0) {
        return r0;
    }
    return call_00135740(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012bed8
GUEST_EXPORT(0x0012bed8, d_0012bed8::f_0012bed8);

// f_0012bf54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bf54 {

struct __attribute__((packed)) Object_0012bf54_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0012bf54_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)

u32 f_0012bf54(gptr<Object_0012bf54_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_3c;
    if (r0 == 0) {
        return r0;
    }
    return call_00137e84(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012bf54
GUEST_EXPORT(0x0012bf54, d_0012bf54::f_0012bf54);

// f_0012bf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bf68 {

inline constexpr guest::Function<0x0012c528, u32(u32, u32, u32, u32)> call_0012c528;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)

u32 f_0012bf68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012c528(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x9047f8u;  // (from the original)
    r1 = 0x12bfd8u;  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r4);  // (from the original)
    r0 = r0 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00132174(r0, r1, r2, r3);
    r2 = 0u;
    *gptr<u32>(r0) = u32(0x9047b0u);  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r2);  // (from the original)
    res = r0 + 0x2cu;  // (from the original)
    r1 = res;
    *gptr<u32>(r0 + 0x4cu) = u32(r2);  // (from the original)
    if (res != 0) {
        ea = r1 + 4u;
        *gptr<u32>(ea) = u32(r2);
        ea = 0x8a3b78u;  // (from the original)
        r2 = *gptr<u32>(ea);
        r3 = *gptr<u32>(ea + 4);
        ea = r1 + 8u;
        *gptr<u32>(ea) = u32(r2);
        *gptr<u32>(ea + 4) = u32(r3);
        *gptr<u32>(r1) = u32(0x905bf0u);  // (from the original)
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012bf68
GUEST_EXPORT(0x0012bf68, d_0012bf68::f_0012bf68);

// f_0012bfec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bfec {

inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)

u32 f_0012bfec(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_00132174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    *gptr<u32>(r0) = u32(0x904830u);  // (from the original)
    r0 = r0 + 0x10u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0) = u32(r1);
    r0 = call_0012f154(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012bfec
GUEST_EXPORT(0x0012bfec, d_0012bfec::f_0012bfec);

// f_0012c018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c018 {

inline constexpr guest::Function<0x001318c0, u32(u32, u32, u32, u32)> call_001318c0;  // (from the original)

u32 f_0012c018(u32 r0, u32 r1, u32 r2, float S0) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_001318c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x12c040u));  // (from the original)
    *gptr<u32>(r0) = u32(0x904cf0u);  // (from the original)
    *gptr<u8>(r0 + 8u) = u8(r1);
    *gptr<u8>(r0 + 9u) = u8(r1);
    *gptr<u32>(r0 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0012c018
GUEST_EXPORT(0x0012c018, d_0012c018::f_0012c018);

// f_0012c0e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c0e8 {

struct __attribute__((packed)) Object_0012c0e8_0 {
    u8 unknown_0[0x228];  // (not used here)
    u32 word_228;
};
GUEST_OFFSET(Object_0012c0e8_0, word_228, 0x228);  // (from the original)

inline constexpr guest::Function<0x00130f0c, u32(u32, u32, u32, u32)> call_00130f0c;  // (from the original)
inline constexpr guest::Function<0x001330fc, u32(u32, u32, u32, u32)> call_001330fc;  // (from the original)

u32 f_0012c0e8(gptr<Object_0012c0e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r0;
    r7 = r2;
    r8 = r1;
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r6 = r3;
    zf = r4 == 0;
    if (zf) {
        r4 = arg0->word_228;
        zf = r4 == 0;
    }
    if (zf) {
        goto L_12c13c;
    }
    r0 = r5 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001330fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_12c13c;
    }
    r3 = r7;
    r2 = r4;
    r1 = r8;
    r0 = r5 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_00130f0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_12c13c:;
    r0 = 0u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012c0e8
GUEST_EXPORT(0x0012c0e8, d_0012c0e8::f_0012c0e8);

// f_0012c144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c144 {

struct __attribute__((packed)) Object_0012c144_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0012c144_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0012c144_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0012c144_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0012c144_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0012c144_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0012c144_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0012c144_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0012c144_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0012c144_0, word_20, 0x20);  // (from the original)


void f_0012c144(gptr<Object_0012c144_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = 0u;
    arg0->word_0 = u32(0x9053f8u);  // (from the original)
    arg0->word_4 = u32(r2);
    r1 = r0 + 0x14u;  // (from the original)
    arg0->word_8 = u32(r2);
    arg0->word_c = u32(r2);
    arg0->word_10 = u32(r2);
    arg0->word_18 = u32(r1);
    arg0->word_1c = u32(r2);
    arg0->word_14 = u32(r1);
    r1 = 4u;
    arg0->word_20 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0012c144
GUEST_EXPORT(0x0012c144, d_0012c144::f_0012c144);

// f_0012c17c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c17c {

struct __attribute__((packed)) Object_0012c17c_0 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
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
};
GUEST_OFFSET(Object_0012c17c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0012c17c_0, word_2c, 0x2c);  // (from the original)


void f_0012c17c(gptr<Object_0012c17c_0> arg0) {
    u32 r1 = 0;
    float S0 = 0;
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x12c1c4u));  // (from the original)
    arg0->word_0 = u32(0x905568u);  // (from the original)
    arg0->byte_4 = u8(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(std::bit_cast<u32>(S0));
    arg0->word_18 = u32(r1);
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(0x9047f8u);  // (from the original)
    arg0->word_28 = u32(r1);
    arg0->word_24 = u32(0x8c9f1cu);  // (from the original)
    arg0->word_2c = u32(r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_0012c17c
GUEST_EXPORT(0x0012c17c, d_0012c17c::f_0012c17c);

// f_0012c40c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c40c {

inline constexpr guest::Function<0x00138c78, u32(u32, u32, u32, u32)> call_00138c78;  // (from the original)

u32 f_0012c40c(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r0 = *gptr<u32>(0x9753d0u) + 0x40u;  // (from the original)
    r0 = call_00138c78(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r0 + 0x68u);  // (from the original)
    *gptr<u32>(r0 + 0x68u) = u32(r4);  // (from the original)
    r0 = r1;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012c40c
GUEST_EXPORT(0x0012c40c, d_0012c40c::f_0012c40c);

// f_0012c48c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c48c {

inline constexpr guest::Function<0x0012c528, u32(u32, u32, u32, u32)> call_0012c528;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)

u32 f_0012c48c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r4 = r1;
    r6 = r2;
    r0 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0012c528(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    *gptr<u32>(r0 + 0x10u) = u32(r5);  // (from the original)
    r0 = r0 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00132174(r0, r1, r2, r3);
    ea = r0;
    *gptr<u32>(ea) = u32(0x905c88u);  // (from the original)
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(0x8a3ba4u);  // (from the original)
    ea = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(0x9047f8u);  // (from the original)
    ea = r4 + 8u;
    r1 = *gptr<u32>(ea);
    r2 = 0u;
    ea = r0 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x30u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x34u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x3cu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r2);
    r1 = *gptr<u32>(r4);
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 0x14));  // (from the original)
    r1 = r0 + 0x44u;  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r1 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r1 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r1 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r0 + 0x5cu) = u32(*gptr<u32>(r4 + 4u));  // (from the original)
    *gptr<u8>(r0 + 0x64u) = u8(r2);  // (from the original)
    *gptr<u32>(r0 + 0x68u) = u32(r2);  // (from the original)
    r1 = 1u;
    *gptr<u8>(r0 + 0x60u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x61u) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r6);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0012c48c
GUEST_EXPORT(0x0012c48c, d_0012c48c::f_0012c48c);

// f_0012c984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c984 {

inline constexpr guest::Function<0x00130c70, u32(u32, u32, u32, u32)> call_00130c70;  // (from the original)
inline constexpr guest::Function<0x00130cac, u32(u32, u32, u32, u32)> call_00130cac;  // (from the original)
inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x001324a8, u32(u32, u32, u32, u32)> call_001324a8;  // (from the original)

u32 f_0012c984(u32 r0, u32 r1, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_001324a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u8>(r0 + 0xcu) = u8(0x80u);  // (from the original)
    r1 = 0x9061ecu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00130c70(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0x90615cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00130cac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r4 = r0 - 0x30u;  // (from the original)
    ea = r0 + 0xbcu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    S0 = std::bit_cast<float>(*gptr<u32>(0x12ca48u));  // (from the original)
    r0 = ea + 4u;
    S1 = std::bit_cast<float>(*gptr<u32>(0x12ca4cu));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 0xf8u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r4 + 0xfcu) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x100u) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x104u) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x108u) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x10cu) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x110u) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x114u) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x118u) = u32(r1);  // (from the original)
    *gptr<u8>(r4 + 0x11cu) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0x11du) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0x11eu) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0x11fu) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0x120u) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0x121u) = u8(r1);  // (from the original)
    *gptr<u8>(r4 + 0x122u) = u8(r1);  // (from the original)
    *gptr<u32>(r4 + 0x124u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x128u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x12cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x130u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x134u) = u32(r1);  // (from the original)
    *gptr<u8>(r4 + 0x138u) = u8(r1);  // (from the original)
    *gptr<u32>(r4 + 0x144u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x148u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_001323bc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r4 + 0xb0u) = u32(r0 + 0x1cu);  // (from the original)
    r0 = r4;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0012c984
GUEST_EXPORT(0x0012c984, d_0012c984::f_0012c984);

// f_0012ca6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ca6c {

struct __attribute__((packed)) Object_0012ca6c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0012ca6c_0, word_4, 0x4);  // (from the original)


u32 f_0012ca6c(gptr<Object_0012ca6c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    arg0->word_4 = u32(r1);
    r0 = 1u;
    return r0;
}

}  // namespace d_0012ca6c
GUEST_EXPORT(0x0012ca6c, d_0012ca6c::f_0012ca6c);

// f_0012ca7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ca7c {

inline constexpr guest::Function<0x001323cc, u32(u32, u32, u32, u32)> call_001323cc;  // (from the original)
inline constexpr guest::Function<0x001324a8, u32(u32, u32, u32, u32)> call_001324a8;  // (from the original)

u32 f_0012ca7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_001324a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x9062a0u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_001323cc(r0, r1, r2, r3);
    r0 = r0 - 0xcu;  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r0 + 0x4cu);  // (from the original)
    r12 = 0x8c9f1cu;  // (from the original)
    r3 = 0x80u;  // (from the original)
    *gptr<u32>(r0 + 0x40u) = u32(0x90558cu);  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r3);  // (from the original)
    *gptr<u8>(r3 + (*gptr<u32>(r0 + 0x44u) - 1u)) = u8(u32(*gptr<u8>(r12)));  // (from the original)
    *gptr<u32>(r0 + 0x40u) = u32(0x9050bcu);  // (from the original)
    *gptr<u8>(*gptr<u32>(r0 + 0x44u)) = u8(u32(*gptr<u8>(r12)));  // (from the original)
    *gptr<u32>(r0 + 0x40u) = u32(0x904860u);  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0xccu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xd0u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xd4u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xd8u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xdcu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xe0u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xe4u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0xe8u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0xe9u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0xeau) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012ca7c
GUEST_EXPORT(0x0012ca7c, d_0012ca7c::f_0012ca7c);

// f_0012cb24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012cb24 {


u32 f_0012cb24() {
    u32 r0 = 0;
    r0 = (u32(*gptr<u8>(0x95c4d2u)) & 2u) >> 1;  // (from the original)
    return r0;
}

}  // namespace d_0012cb24
GUEST_EXPORT(0x0012cb24, d_0012cb24::f_0012cb24);

// f_0012cb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012cb3c {


u32 f_0012cb3c() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x95c4d2u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) & ~2u;
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012cb3c
GUEST_EXPORT(0x0012cb3c, d_0012cb3c::f_0012cb3c);

// f_0012d3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012d3ec {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)

u32 f_0012d3ec(u32 r0) {
    r0 = r0 + 0x27cu;  // (from the original)
    return call_001323b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012d3ec
GUEST_EXPORT(0x0012d3ec, d_0012d3ec::f_0012d3ec);

// f_0012d3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012d3f4 {

struct __attribute__((packed)) Object_0012d3f4_0 {
    u8 unknown_0[0xeb18];  // (not used here)
    u32 word_eb18;
};
GUEST_OFFSET(Object_0012d3f4_0, word_eb18, 0xeb18);  // (from the original)

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x00317a00, u32(u32, u32, u32, u32)> call_00317a00;  // (from the original)

u32 f_0012d3f4(gptr<Object_0012d3f4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (arg0->word_eb18 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 + 0xea0cu;  // (from the original)
    r0 = call_002f73b8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4 + 0xeb14u;  // (from the original)
    r0 = call_002f747c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0u;
    r1 = 4u;
    r0 = r4 + 0xf126u;  // (from the original)
    r0 = call_00317a00(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012d3f4
GUEST_EXPORT(0x0012d3f4, d_0012d3f4::f_0012d3f4);

// f_0012d4ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012d4ac {

inline constexpr guest::Function<0x0012d4bc, u32(u32, u32, u32, u32)> call_0012d4bc;  // (from the original)
inline constexpr guest::Function<0x0012d4e8, u32(u32, u32, u32, u32)> call_0012d4e8;  // (from the original)

u32 f_0012d4ac(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0012d4e8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return call_0012d4bc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012d4ac
GUEST_EXPORT(0x0012d4ac, d_0012d4ac::f_0012d4ac);

// f_0012d89c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012d89c {

struct __attribute__((packed)) Object_0012d89c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0012d89c_0, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0012d89c_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0012d89c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0012d89c_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0012d89c_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0012d89c_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0012d89c_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0012d89c_1, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x00132ea8, u32(u32, u32, u32, u32)> call_00132ea8;  // (from the original)

u32 f_0012d89c(gptr<Object_0012d89c_0> arg0, gptr<Object_0012d89c_1> arg1, u32 r2, u32 r3, float S0, float S1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r12 = 0;
    u32 r14 = guest::cpu()->r[14];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    u32 fpsr = guest::cpu()->fpscr;
    r12 = r0;
    guest::cpu()->r[13] -= 8u;
    if (u32(arg0->byte_0) == 0) {
        goto L_12d9e8;
    }
    arg1->word_0 = u32(0xe40103u);  // (from the original)
    arg1->word_4 = u32(0x10100u);  // (from the original)
    r1 = r1 + 8u;
    r0 = 0u;
    if (r3 != 0) {
        arg1->word_8 = u32(r0);
        arg1->word_c = u32(0x200080u);  // (from the original)
        arg1->word_10 = u32(r0);
        arg1->word_14 = u32(r0);
        r1 = r1 + 0x10u;  // (from the original)
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r12 + 4u));
    r3 = std::bit_cast<u32>(S0);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, std::bit_cast<float>(*gptr<u32>(0x12da18u)));  // (from the original)
    if (!(fpsr >> 0x1d & 1) || fpsr >> 0x1e & 1) {  // (from the original)
        goto L_12d924;
    }
    if (0xffu == r3 << 1 >> 0x18) {  // (from the original)
        goto L_12d924;
    }
    r3 = 0x4b800000u;  // (from the original)
    S0 = S0 * std::bit_cast<float>(*gptr<u32>(0x12da1cu));  // (from the original)
    r0 = std::bit_cast<u32>(S0);
    res = r3 - r0;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r3 ^ r0) & (r3 ^ res)) >> 0x1f;  // (from the original)
    if (!zf && nf == vf) {
        S0 = std::bit_cast<float>(vcvt_uz_f(S0));
    }
    if (zf || nf != vf) {
        r0 = ~0xff000000u;  // (from the original)
    }
    if (!zf && nf == vf) {
        r0 = std::bit_cast<u32>(S0);
    }
L_12d924:;
    if (u32(*gptr<u8>(r12 + 1u)) == 0) {
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    *gptr<u32>(r1) = u32(r3 | r0 >> 1 << 1);
    r1 = r1 + 4u;
    *gptr<u32>(r1) = u32(0xf008bu);  // (from the original)
    r1 = r1 + 4u;
    S1 = std::bit_cast<float>(*gptr<u32>(r12 + 0xcu));  // (from the original)
    r0 = std::bit_cast<u32>(S1 + std::bit_cast<float>(*gptr<u32>(r12 + 0x10u)));  // (from the original)
    res = r0 & ~0x80000000u;  // (from the original)
    r3 = res;
    if (res != 0) {
        r3 = (r0 << 1 >> 0x18) - 0x70u;  // (from the original)
        res = r3;
        if (res >> 0x1f != (r3 & (r3 ^ res)) >> 0x1f) {  // (from the original)
            r14 = r0 >> 0x1f << 0xf;  // (from the original)
            goto L_12d994;
        }
    }
    r14 = uxth((r0 & ~0x1f800000u) >> 0xd | r3 << 0xa | r0 >> 0x1f << 0xf);  // (from the original)
L_12d994:;
    S0 = -S1;
    r0 = std::bit_cast<u32>(S0);
    res = r0 & ~0x80000000u;  // (from the original)
    r3 = res;
    if (res != 0) {
        r3 = (r0 << 1 >> 0x18) - 0x70u;  // (from the original)
        res = r3;
        if (res >> 0x1f != (r3 & (r3 ^ res)) >> 0x1f) {  // (from the original)
            r0 = r0 >> 0x1f << 0xf;  // (from the original)
            goto L_12d9d8;
        }
    }
    r0 = uxth((r0 & ~0x1f800000u) >> 0xd | r3 << 0xa | r0 >> 0x1f << 0xf);  // (from the original)
L_12d9d8:;
    r3 = r14 | r0 << 0x10;  // (from the original)
    *gptr<u32>(r1) = u32(r3);
    r1 = r1 + 4u;
    *gptr<u32>(r1) = u32(0xf0130u);  // (from the original)
    r1 = r1 + 4u;
L_12d9e8:;
    if (r2 == 0) {
        r0 = r1;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    r0 = *gptr<u32>(r12 + 0x14u) + 0x7cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return call_00132ea8(r0, r1, r2, r3);
}

}  // namespace d_0012d89c
GUEST_EXPORT(0x0012d89c, d_0012d89c::f_0012d89c);

// f_0012de20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012de20 {

struct __attribute__((packed)) Object_0012de20_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Object_0012de20_0, word_34, 0x34);  // (from the original)

struct __attribute__((packed)) Object_0012de20_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0012de20_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0012de20_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00136084, u32(u32, u32, u32, u32)> call_00136084;  // (from the original)

u32 f_0012de20(gptr<Object_0012de20_0> arg0, gptr<Object_0012de20_1> arg1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r1;
    r5 = r0;
    r2 = arg1->word_8;
    r0 = arg0->word_34;
    ea = r0 + 8u;
    *gptr<u32>(ea) = u32(arg1->word_4 + r2 - r0 - 0x18u >> 3);  // (from the original)
    r0 = arg1->word_4;
    r1 = arg1->word_8;
    guest::cpu()->r[13] = r13;
    r0 = call_00136084(r0, r1, r2, guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r4 + 0xcu) | 4u);  // (from the original)
    r1 = *gptr<u32>(r5 + 0x30u);  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(r1);
    *gptr<u32>(r5 + 0x34u) = u32(r0);  // (from the original)
    *gptr<u32>(r5 + 0x30u) = u32(r0);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012de20
GUEST_EXPORT(0x0012de20, d_0012de20::f_0012de20);

// f_0012e640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012e640 {

inline constexpr guest::Function<0x0012e350, u32(u32, u32, u32, u32)> call_0012e350;  // (from the original)

u32 f_0012e640(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 b = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 cf = 0;
    guest::cpu()->r[13] -= 8u;
    b = u32(s32(r1) >> 1);
    r4 = b ^ r3 >> 1;
    if (b >> 0x1f) {  // (from the original)
        cf = 0u >= r0;
        r0 = 0u - r0;
        r1 = u32(u64(0u) + ~r1 + cf);
    }
    if ((r3 & r3) >> 0x1f) {  // (from the original)
        cf = 0u >= r2;
        r2 = 0u - r2;
        r3 = u32(u64(0u) + ~r3 + cf);
    }
    r0 = call_0012e350(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if ((r4 & 0x40000000u) != 0) {  // (from the original)
        cf = 0u >= r0;
        r0 = 0u - r0;
        r1 = u32(u64(0u) + ~r1 + cf);
    }
    if ((r4 & 0x80000000u) == 0) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012e640
GUEST_EXPORT(0x0012e640, d_0012e640::f_0012e640);

// f_0012e8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012e8e8 {

struct __attribute__((packed)) Object_0012e8e8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0012e8e8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0012e8e8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0012e8e8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0012e8e8_0, word_14, 0x14);  // (from the original)


void f_0012e8e8(gptr<Object_0012e8e8_0> arg0, float S0) {
    u32 r1 = 0;
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    arg0->word_10 = u32(~0u);
    r1 = 0u;
    arg0->word_14 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0012e8e8
GUEST_EXPORT(0x0012e8e8, d_0012e8e8::f_0012e8e8);

// f_0012e904: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012e904 {

struct __attribute__((packed)) Object_0012e904_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0012e904_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00136e4c, u32(u32, u32, u32, u32)> call_00136e4c;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)

u32 f_0012e904(gptr<Object_0012e904_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0x94cd06u;  // (from the original)
    r1 = u32(*gptr<u8>(r0));
    if (r1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    arg0->word_4 = u32(r1);
    *gptr<u8>(r0) = u8(r1);
    r2 = 0u;
    r0 = *gptr<u32>(*gptr<u32>(0x94d080u) + 0xc0cu) + 4u;  // (from the original)
    r1 = r2;
    r0 = call_00136e4c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    r1 = 0u;
    return call_00136e58(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0012e904
GUEST_EXPORT(0x0012e904, d_0012e904::f_0012e904);

// f_0012eacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012eacc {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0012eacc(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x134fe8u;  // (from the original)
    r3 = 2u;
    r2 = 4u;
    r0 = r0 + 0x1022u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x138b98u;  // (from the original)
    r3 = 4u;
    r2 = 0x400u;  // (from the original)
    r0 = r4 + 0x22u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x138ab0u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 2u;
    r0 = r4 + 2u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012eacc
GUEST_EXPORT(0x0012eacc, d_0012eacc::f_0012eacc);

// f_0012eb28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012eb28 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0012eb28(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r2 = 0x1228u;  // (from the original)
    r1 = 0x134fa4u;  // (from the original)
    r4 = r0;
    r3 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012eb28
GUEST_EXPORT(0x0012eb28, d_0012eb28::f_0012eb28);

// f_0012ebf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ebf4 {

inline constexpr guest::Function<0x00135010, u32(u32, u32, u32, u32)> call_00135010;  // (from the original)
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32, u32)> call_0013d4f0;  // (from the original)

u32 f_0012ebf4(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = *gptr<u32>(0x94cd20u);  // (from the original)
    if (r0 == 0) {
        goto L_12ec40;
    }
    r5 = ~0u;
    if (r1 != 0) {
        r2 = 1u;
        r1 = 0u;
        r0 = call_0013d4f0(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    } else {
        r1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        if (r1 + 1u == 0) {
            goto L_12ec40;
        }
        r2 = 1u;
        r0 = call_00135010(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r4 + 0x14u) = u32(r5);  // (from the original)
L_12ec40:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012ebf4
GUEST_EXPORT(0x0012ebf4, d_0012ebf4::f_0012ebf4);

// f_0012ec48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ec48 {

struct __attribute__((packed)) Object_0012ec48_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u16 half_22;
    u8 byte_24;
    u8 unknown_25[0x3];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u8 byte_40;
    u8 byte_41;
    u8 unknown_42[0x2];  // (not used here)
    u32 word_44;
    u8 byte_48;
    u8 byte_49;
};
GUEST_OFFSET(Object_0012ec48_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, half_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, half_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, half_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, half_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, byte_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, byte_41, 0x41);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, byte_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0012ec48_0, byte_49, 0x49);  // (from the original)


void f_0012ec48(gptr<Object_0012ec48_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    float S0 = 0;
    float S1 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x12ecc8u));  // (from the original)
    r2 = ~0u;
    arg0->word_0 = u32(0x8f54d0u);  // (from the original)
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->byte_24 = u8(r1);
    arg0->word_44 = u32(r2);
    S1 = std::bit_cast<float>(*gptr<u32>(0x12ecccu));  // (from the original)
    arg0->byte_48 = u8(r1);
    arg0->byte_49 = u8(r1);
    arg0->word_14 = u32(std::bit_cast<u32>(S1));
    arg0->word_18 = u32(std::bit_cast<u32>(S1));
    arg0->half_1c = u16(r2);
    arg0->half_1e = u16(r2);
    arg0->half_20 = u16(r2);
    arg0->half_22 = u16(~0x63u);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x12ecd0u));  // (from the original)
    arg0->word_28 = u32(r2);
    arg0->word_2c = u32(r2);
    arg0->word_30 = u32(std::bit_cast<u32>(S0));
    arg0->word_34 = u32(r1);
    arg0->word_38 = u32(std::bit_cast<u32>(S0));
    arg0->word_3c = u32(std::bit_cast<u32>(S0));
    arg0->byte_40 = u8(r1);
    arg0->byte_41 = u8(r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0012ec48
GUEST_EXPORT(0x0012ec48, d_0012ec48::f_0012ec48);

// f_0012ecd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ecd4 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_0012ecd4() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x95e304u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 8u) = u32(r1);
    r0 = 0xad6670u;  // (from the original)
    r1 = 0x3000u;  // (from the original)
    return call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012ecd4
GUEST_EXPORT(0x0012ecd4, d_0012ecd4::f_0012ecd4);

// f_0012edc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012edc0 {

inline constexpr guest::Function<0x00135158, u32(u32, u32, u32, u32)> call_00135158;  // (from the original)

u32 f_0012edc0() {
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r3 = 0u;
    *gptr<u32>(r13) = u32(r3);
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r13 + 8u) = u32(r3);
    r3 = r13;
    guest::cpu()->r[13] = r13;
    call_00135158(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_0012edc0
GUEST_EXPORT(0x0012edc0, d_0012edc0::f_0012edc0);

// f_0012ede8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ede8 {

struct __attribute__((packed)) Object_0012ede8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0012ede8_0, word_0, 0x0);  // (from the original)


u32 f_0012ede8(gptr<Object_0012ede8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(arg0->word_0 + 0x30u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012ede8
GUEST_EXPORT(0x0012ede8, d_0012ede8::f_0012ede8);

// f_0012ee90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ee90 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)

u32 f_0012ee90() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x974f20u;  // (from the original)
    r0 = *gptr<u32>(r4);
    if (r0 == 0) {
        r0 = call_00134250(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0012ee90
GUEST_EXPORT(0x0012ee90, d_0012ee90::f_0012ee90);

// f_0012eeb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012eeb0 {

inline constexpr guest::Function<0x00135680, u32(u32, u32, u32, u32)> call_00135680;  // (from the original)

u32 f_0012eeb0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r12 = r1;
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13) = u32(r3);
    r3 = r2;
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1 = r0;
    r2 = r12;
    r0 = 0x12eee4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00135680(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012eeb0
GUEST_EXPORT(0x0012eeb0, d_0012eeb0::f_0012eeb0);

// f_0012ef20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ef20 {

inline constexpr guest::Function<0x00134c68, u32(u32, u32, u32, u32)> call_00134c68;  // (from the original)

u32 f_0012ef20(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r6 = r0;
    r5 = 0x97dff8u;  // (from the original)
L_12ef30:;
    r0 = *gptr<u32>(r6);
    if (r0 + 2u == 0) {
        goto L_12ef5c;
    }
    if (r0 + 1u == 0) {
        goto L_12efb8;
    }
    if (r0 == 0) {
        goto L_12ef84;
    }
    if (r0 != 1u) {
        goto L_12efb8;
    }
L_12ef54:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_12ef5c:;
    r3 = 0u;
    r0 = *gptr<u32>(r5);
    r4 = r3;
    r1 = r6;
    r2 = 1u;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_00134c68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_12ef84:;
    r0 = r6;
    r2 = 0u;
    r4 = ~0u;
L_12ef90:;
    r3 = *gptr<u32>(r0);
    if (r3 == r2) {
        *gptr<u32>(r0) = u32(r4);
        r7 = 0;
        if (r7 != 0) {
            guest::preempt();
            goto L_12ef90;
        }
    }
    if (r3 == 0) {
        guest::preempt();
        goto L_12ef54;
    }
L_12efb8:;
    r3 = 0u;
    r0 = *gptr<u32>(r5);
    r4 = r3;
    r1 = r6;
    r2 = 1u;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_00134c68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_12ef30;
}

}  // namespace d_0012ef20
GUEST_EXPORT(0x0012ef20, d_0012ef20::f_0012ef20);

// f_0012f154: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f154 {

inline constexpr guest::Function<0x0012f038, u32(u32, u32, u32, u32)> call_0012f038;  // (from the original)

u32 f_0012f154(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0012f038(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u32>(r4 + 4u) = u32(r0);
    *gptr<u32>(r4 + 8u) = u32(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0012f154
GUEST_EXPORT(0x0012f154, d_0012f154::f_0012f154);

// f_0012f170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f170 {

struct __attribute__((packed)) Object_0012f170_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0012f170_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x00134c98, u32(u32, u32, u32, u32)> call_00134c98;  // (from the original)

u32 f_0012f170(gptr<Object_0012f170_0> arg0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r0 = arg0->word_8;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r1;
    zf = r0 == 0;
    r12 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    if (!zf) {
        r0 = 0x8a01bf9u;  // (from the original)
    }
    r6 = r2;
    if (!zf) {
        goto L_12f1dc;
    }
    if ((r5 & 0xfffu) != 0u) {  // (from the original)
        r0 = 0xe0e01bf1u;  // (from the original)
        goto L_12f1dc;
    }
    if ((r6 & 0xfffu) != 0u) {  // (from the original)
        r0 = 0xe0e01bf2u;  // (from the original)
        goto L_12f1dc;
    }
    *gptr<u32>(r13 + 4u) = u32(0u);
    r0 = r13 + 4u;
    *gptr<u32>(r13) = u32(r12);
    guest::cpu()->r[13] = r13;
    r0 = call_00134c98(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    res = r0 >> 0x1f;  // (from the original)
    if (res != 0) {
        goto L_12f1dc;
    }
    ea = r13 + 4u;
    r2 = *gptr<u32>(ea);
    *gptr<u32>(r4 + 0x14u) = u32(r2);  // (from the original)
    ea = r4 + 8u;
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
L_12f1dc:;
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_0012f204(r0, r1, r2, guest::cpu()->r[3]);
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012f170
GUEST_EXPORT(0x0012f170, d_0012f170::f_0012f170);

// f_0012f204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f204 {

inline constexpr guest::Function<0x001292b0, u32(u32, u32, u32, u32)> call_001292b0;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)

u32 f_0012f204(u32 r0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r3 = u32(s32(s8(*gptr<u8>(0x974f50u))));  // (from the original)
    r1 = r0 >> 0x1b;  // (from the original)
    if ((r0 & 0x80000000u) != 0) {  // (from the original)
        r1 = r1 - 0x20u;  // (from the original)
    }
    res = u32(*gptr<u8>(0x1ff80014u)) & 1u | r3;  // (from the original)
    r2 = res;
    if (res != 0) {
        zf = r1 + 7u == 0;
        if (!zf) {
            zf = r1 == 1u;
        }
        if (zf) {
            ea = r13;
            r13 = r13 + 8;
            r4 = *gptr<u32>(ea);
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[4] = r4;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        ea = r13 + 4u;
        r2 = *gptr<u32>(ea);
        ea = r13;
        r13 = r13 + 8;
        r4 = *gptr<u32>(ea);
        r14 = *gptr<u32>(ea + 4);
        r1 = 0u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->r[4] = r4;
        return call_001292b0(r0, r1, r2, r3);
    }
    if (r1 + 1u != 0) {
        ea = r13;
        r13 = r13 + 8;
        r4 = *gptr<u32>(ea);
        r14 = *gptr<u32>(ea + 4);
        guest::cpu()->r[13] = r13;
        guest::cpu()->r[4] = r4;
        return call_00134250(r0, r1, r2, r3);
    }
    r2 = *gptr<u32>(r13 + 4u);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_001292b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    r14 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    return call_00134250(r0, r1, r2, r3);
}

}  // namespace d_0012f204
GUEST_EXPORT(0x0012f204, d_0012f204::f_0012f204);

// f_0012f278: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f278 {

inline constexpr guest::Function<0x001358c0, u32(u32, u32, u32, u32)> call_001358c0;  // (from the original)

u32 f_0012f278() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x974f76u;  // (from the original)
    r0 = u32(*gptr<u8>(r4));
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_001358c0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0012f278
GUEST_EXPORT(0x0012f278, d_0012f278::f_0012f278);

// f_0012f384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f384 {

inline constexpr guest::Function<0x0012f274, u32(u32, u32, u32, u32)> call_0012f274;  // (from the original)
inline constexpr guest::Function<0x0013580c, u32(u32, u32, u32, u32)> call_0013580c;  // (from the original)
inline constexpr guest::Function<0x00135858, u32(u32, u32, u32, u32)> call_00135858;  // (from the original)
inline constexpr guest::Function<0x00135b30, u32(u32, u32, u32, u32)> call_00135b30;  // (from the original)

u32 f_0012f384(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r6 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = 0x97d874u;  // (from the original)
    r7 = r1;
    r8 = r2;
    r5 = r3;
    if (*gptr<u32>(r4 + 8u) != 0) {
        if (u32(*gptr<u8>(r4 + 1u)) == 0) {
            goto L_12f3c4;
        }
    }
    r0 = 0xc8a0a7fcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_12f3c4:;
    r0 = 0x97d884u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00135858(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        *gptr<u32>(r13) = u32(r5);
        r3 = r8;
        *gptr<u32>(r13 + 4u) = u32(0x97d875u);  // (from the original)
        r0 = *gptr<u32>(r4 + 8u);
        r2 = r7;
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_00135b30(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r0 = 0x97d884u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0013580c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = r4;
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0xf4240u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0012f274(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_12f3c4;
}

}  // namespace d_0012f384
GUEST_EXPORT(0x0012f384, d_0012f384::f_0012f384);

// f_0012f598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f598 {

inline constexpr guest::Function<0x00129330, u32(u32, u32, u32, u32)> call_00129330;  // (from the original)

u32 f_0012f598(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = r0;
    r0 = 0xae0ab8u;  // (from the original)
    r3 = 0u;
    *gptr<u8>(r0 + 1u) = u8(r3);
    *gptr<u16>(r0 + 2u) = u16(0xf22cu);  // (from the original)
    *gptr<u8>(r0) = u8(r3);
    *gptr<u32>(r0 + 8u) = u32(r1);
    *gptr<u32>(r0 + 4u) = u32(r2);
    return call_00129330(r0, r1, r2, r3);
}

}  // namespace d_0012f598
GUEST_EXPORT(0x0012f598, d_0012f598::f_0012f598);

// f_0012f600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f600 {

inline constexpr guest::Function<0x0012f664, u32(u32, u32, u32, u32)> call_0012f664;  // (from the original)
inline constexpr guest::Function<0x0012f814, u32(u32, u32, u32, u32)> call_0012f814;  // (from the original)
inline constexpr guest::Function<0x0012f824, u32(u32, u32, u32, u32)> call_0012f824;  // (from the original)
inline constexpr guest::Function<0x0012f844, u32(u32, u32, u32, u32)> call_0012f844;  // (from the original)

u32 f_0012f600(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r1;
    ea = r13 + 0x18u;  // (from the original)
    r7 = *gptr<u32>(ea);
    r8 = *gptr<u32>(ea + 4);
    r6 = r2;
    r1 = r3;
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012f814(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r7;
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012f824(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r8;
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012f844(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r6;
    r1 = r5;
    r0 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012f664(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = *gptr<u32>(r4 + 0x54u) + 1u;  // (from the original)
        *gptr<u32>(r4 + 0x54u) = u32(r1);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0012f600
GUEST_EXPORT(0x0012f600, d_0012f600::f_0012f600);

// f_0012f814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f814 {

struct __attribute__((packed)) Object_0012f814_0 {
    u8 unknown_0[0x34];  // (not used here)
    u16 half_34;
};
GUEST_OFFSET(Object_0012f814_0, half_34, 0x34);  // (from the original)


u32 f_0012f814(gptr<Object_0012f814_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = u32(arg0->half_34);
    arg0->half_34 = u16(r1);
    return r0;
}

}  // namespace d_0012f814
GUEST_EXPORT(0x0012f814, d_0012f814::f_0012f814);

// f_0012f824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f824 {

struct __attribute__((packed)) Object_0012f824_0 {
    u8 unknown_0[0x36];  // (not used here)
    u16 half_36;
};
GUEST_OFFSET(Object_0012f824_0, half_36, 0x36);  // (from the original)


u32 f_0012f824(gptr<Object_0012f824_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    r3 = u32(arg0->half_36);
    r0 = r3 & 1u;
    r1 = r1 & 1u | r3 & ~1u;
    arg0->half_36 = u16(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012f824
GUEST_EXPORT(0x0012f824, d_0012f824::f_0012f824);

// f_0012f844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f844 {

struct __attribute__((packed)) Object_0012f844_0 {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
};
GUEST_OFFSET(Object_0012f844_0, byte_38, 0x38);  // (from the original)


u32 f_0012f844(gptr<Object_0012f844_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = u32(s32(s8(arg0->byte_38)));
    arg0->byte_38 = u8(r1);
    return r0;
}

}  // namespace d_0012f844
GUEST_EXPORT(0x0012f844, d_0012f844::f_0012f844);

// f_0012f854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f854 {

struct __attribute__((packed)) Object_0012f854_0 {
    u32 word_0;
    u32 word_4;
    u16 half_8;
    u16 half_a;
};
GUEST_OFFSET(Object_0012f854_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0012f854_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0012f854_0, half_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0012f854_0, half_a, 0xa);  // (from the original)


void f_0012f854(gptr<Object_0012f854_0> arg0, u32 r1) {
    u32 r2 = 0;
    r2 = 0u;
    arg0->half_a = u16(r1);
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r2);
    arg0->half_8 = u16(r2);
    return;
}

}  // namespace d_0012f854
GUEST_EXPORT(0x0012f854, d_0012f854::f_0012f854);

// f_0012fa68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012fa68 {

struct __attribute__((packed)) Object_0012fa68_0 {
    u8 unknown_0[0x19];  // (not used here)
    u8 byte_19;
};
GUEST_OFFSET(Object_0012fa68_0, byte_19, 0x19);  // (from the original)

inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> call_00135520;  // (from the original)
inline constexpr guest::Function<0x00135720, u32(u32, u32, u32, u32)> call_00135720;  // (from the original)

u32 f_0012fa68(gptr<Object_0012fa68_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (u32(arg0->byte_19) != 0) {
        r0 = 0x8a24c8u;  // (from the original)
        r0 = call_00135520(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    if (u32(*gptr<u8>(r4 + 0x18u)) != 0) {  // (from the original)
        r0 = r4 + 4u;
        r0 = call_00135720(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = 0u;
    *gptr<u8>(r4 + 0x18u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x19u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x1au) = u8(r0);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x28u) = u32(r0);  // (from the original)
    r1 = 1u;
    *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x30u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0012fa68
GUEST_EXPORT(0x0012fa68, d_0012fa68::f_0012fa68);

// f_0012ffcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ffcc {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)

u32 f_0012ffcc() {
    u32 r0 = 0;
    r0 = 0xae83c4u;  // (from the original)
    return call_00135748(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012ffcc
GUEST_EXPORT(0x0012ffcc, d_0012ffcc::f_0012ffcc);

// f_0012ffdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ffdc {

inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_0012ffdc() {
    u32 r0 = 0;
    r0 = 0xae83c4u;  // (from the original)
    return call_001357ec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012ffdc
GUEST_EXPORT(0x0012ffdc, d_0012ffdc::f_0012ffdc);
