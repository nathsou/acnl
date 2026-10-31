// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_0026451c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026451c {


u32 f_0026451c() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r12 = 0;
    r1 = 0x9954ccu;  // (from the original)
    r12 = 0xffu;  // (from the original)
    r0 = r1 - 0x94u;  // (from the original)
    *gptr<u8>(r1 + 0x19u) = u8(r12);  // (from the original)
    *gptr<u8>(r1 + 0x18u) = u8(r12);  // (from the original)
    *gptr<u8>(r1 + 0x17u) = u8(r12);  // (from the original)
    *gptr<u8>(r1 + 0x16u) = u8(r12);  // (from the original)
    r1 = 0u;
    *gptr<u8>(r0) = u8(r1);
    *gptr<u8>(r0 + 1u) = u8(r1);
    *gptr<u8>(r0 + 4u) = u8(0xeu);  // (from the original)
    *gptr<u8>(r0 + 0x18u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x19u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x1cu) = u8(0xfu);  // (from the original)
    *gptr<u8>(r0 + 9u) = u8(r1);
    *gptr<u8>(r0 + 0xau) = u8(5u);  // (from the original)
    r2 = r0 - 0x1acu;  // (from the original)
    *gptr<u8>(r0 + 0xdu) = u8(3u);  // (from the original)
    *gptr<u8>(r2 + 0xadu) = u8(0u);  // (from the original)
    *gptr<u8>(r2 + 0xafu) = u8(6u);  // (from the original)
    *gptr<u8>(r2 + 0xb1u) = u8(7u);  // (from the original)
    *gptr<u8>(r0 + 0x12u) = u8(u32(*gptr<u8>(0x854188u)));  // (from the original)
    *gptr<u8>(r0 + 0x13u) = u8(u32(*gptr<u8>(0x854189u)));  // (from the original)
    r1 = u32(*gptr<u8>(0x85418au));  // (from the original)
    *gptr<u8>(r0 + 0x14u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x15u) = u8(r12);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0026451c
GUEST_EXPORT(0x0026451c, d_0026451c::f_0026451c);

// f_00264668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00264668 {

struct __attribute__((packed)) Object_00264668_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_00264668_1, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0011ef18, u32(u32, u32, u32, u32)> call_0011ef18;  // (from the original)
inline constexpr guest::Function<0x00495534, u32(u32, u32, u32, u32)> call_00495534;  // (from the original)

u32 f_00264668(u32 r0, gptr<Object_00264668_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0u;
    r0 = r1;
    arg1->word_14 = u32(r5);
    r0 = call_00495534(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(0x950470u);  // (from the original)
    r0 = call_0011ef18(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x58u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_00264668
GUEST_EXPORT(0x00264668, d_00264668::f_00264668);

// f_00264698: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00264698 {

struct __attribute__((packed)) Object_00264698_0 {
    u8 unknown_0[0x58];  // (not used here)
    u8 byte_58;
};
GUEST_OFFSET(Object_00264698_0, byte_58, 0x58);  // (from the original)

inline constexpr guest::Function<0x0011ef18, u32(u32, u32, u32, u32)> call_0011ef18;  // (from the original)
inline constexpr guest::Function<0x004957e4, u32(u32, u32, u32, u32)> call_004957e4;  // (from the original)
inline constexpr guest::Function<0x004959d4, u32(u32, u32, u32, u32)> call_004959d4;  // (from the original)
inline constexpr guest::Function<0x0049b8f4, u32(u32, u32, u32, u32)> call_0049b8f4;  // (from the original)
inline constexpr guest::Function<0x004f0734, u32(u32, u32, u32, u32)> call_004f0734;  // (from the original)
inline constexpr guest::Function<0x00561310, u32(u32, u32, u32, u32)> call_00561310;  // (from the original)
inline constexpr guest::Function<0x0074f1c4, u32(u32, u32, u32, u32)> call_0074f1c4;  // (from the original)

u32 f_00264698(gptr<Object_00264698_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r6 = 1u;
    r4 = r1;
    r0 = r1 + 0x40u;  // (from the original)
    arg0->byte_58 = u8(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_0049b8f4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_004f0734(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4 + 0xa4u);  // (from the original)
    r2 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_004959d4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_004957e4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x95043cu;  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(r6);  // (from the original)
    *gptr<u32>(r1 + 0x34u) = u32(*gptr<u32>(0x975320u));  // (from the original)
    r0 = *gptr<u32>(r5 + 0x88u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0011ef18(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r5 + 0x88u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00561310(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0074f1c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00264698
GUEST_EXPORT(0x00264698, d_00264698::f_00264698);

// f_00265d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00265d54 {

inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)

u32 f_00265d54() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = 0x80u;  // (from the original)
    r1 = 0x265d70u;  // (from the original)
    r2 = *gptr<u32>(0x952c48u);  // (from the original)
    r0 = 0x9984acu;  // (from the original)
    return call_00125b38(r0, r1, r2, r3);
}

}  // namespace d_00265d54
GUEST_EXPORT(0x00265d54, d_00265d54::f_00265d54);

// f_00267188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00267188 {

inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_00267188(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x60u;  // (from the original)
    r4 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    r7 = 4u;
    r6 = r4 + 0x185cu;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    r3 = 0xau;  // (from the original)
    r2 = r3;
    r1 = *gptr<u32>(r4 + (*gptr<u32>(r6) << 2) + 0x1860u);  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312c4c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x1798u;  // (from the original)
    r1 = r13 + 4u;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r5 = r4 + 0x1870u;  // (from the original)
    r3 = 0xau;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    r1 = *gptr<u32>(r5);
    r2 = r3;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312c4c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x16d4u;  // (from the original)
    r1 = r13 + 4u;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r4 + (*gptr<u32>(r6) << 2) + 0x1860u;  // (from the original)
    r0 = *gptr<u32>(r1);
    if (r0 == 1u) {
        r0 = *gptr<u32>(r5);
        goto L_26725c;
    }
    r2 = *gptr<u32>(r5);
    r3 = r0 - 1u;
    zf = r3 == r2;
    cf = r3 >= r2;
    if (cf && !zf) {
        r0 = 1u;
    }
    if (!cf || zf) {
        r0 = r0 - 1u;
    }
L_26725c:;
    r2 = 0x12c8u;  // (from the original)
    *gptr<u16>(r2 + r4) = u16(r0 - 1u);
    r0 = *gptr<u32>(r1);
    if (r0 + 1u == 0) {
        r0 = *gptr<u32>(r5);
        goto L_26728c;
    }
    r1 = *gptr<u32>(r5);
    r2 = r0 + 1u;
    zf = r2 == r1;
    cf = r2 >= r1;
    if (cf && !zf) {
        r0 = 1u;
    }
    if (!cf || zf) {
        r0 = r0 + 1u;
    }
L_26728c:;
    r1 = 0x13f8u;  // (from the original)
    *gptr<u16>(r1 + r4) = u16(r0 - 1u);
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312cb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00267188
GUEST_EXPORT(0x00267188, d_00267188::f_00267188);

// f_00267758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00267758 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_00267758(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0xa70u;  // (from the original)
    r0 = call_00568c10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4 + 0x270u;  // (from the original)
    r0 = call_00568c10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x270u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00267758
GUEST_EXPORT(0x00267758, d_00267758::f_00267758);

// f_002677cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002677cc {

struct __attribute__((packed)) Object_002677cc_0 {
    u8 unknown_0[0xa90];  // (not used here)
    u32 word_a90;
    u8 unknown_a94[0x29c];  // (not used here)
    u32 word_d30;
};
GUEST_OFFSET(Object_002677cc_0, word_a90, 0xa90);  // (from the original)
GUEST_OFFSET(Object_002677cc_0, word_d30, 0xd30);  // (from the original)

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)

u32 f_002677cc(gptr<Object_002677cc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r1 = arg0->word_a90;
    r4 = r0;
    r0 = arg0->word_d30;
    r0 = call_004b6dc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0xa70u;  // (from the original)
    r0 = call_001323b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x28u;  // (from the original)
    r0 = call_00132364(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x40cu;  // (from the original)
    r0 = call_002cd0e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x270u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001323b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002677cc
GUEST_EXPORT(0x002677cc, d_002677cc::f_002677cc);

// f_002682ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002682ac {

struct __attribute__((packed)) Object_002682ac_0 {
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
    u32 word_24;
};
GUEST_OFFSET(Object_002682ac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002682ac_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002682ac_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002682ac_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002682ac_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002682ac_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002682ac_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002682ac_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002682ac_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002682ac_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x0022c53c, u32(u32, u32, u32, u32)> call_0022c53c;  // (from the original)
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32, u32)> call_002cd444;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_002682ac(gptr<Object_002682ac_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = 0u;
    r3 = r0 + 0xcu;  // (from the original)
    r5 = 0x87a104u;  // (from the original)
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    ea = r5 + 0x30u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    arg0->word_c = u32(*gptr<u32>(ea));
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x8f18d0u;  // (from the original)
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r4);
    ea = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(r4);
    r0 = ea + 4u;
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
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    r2 = 1u;
    r1 = r0 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002cd444(r0, r1, r2, r3);
    r2 = 0x8ef22cu;  // (from the original)
    r3 = 1u;
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + 0xe4u) = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0994u;  // (from the original)
    r0 = r0 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 - 0x524u;  // (from the original)
    ea = r0 + 0xa3cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0xa44u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0xa48u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r5 + 0x38u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    r5 = r0 + 0xa4cu;  // (from the original)
    ea = r5;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    *gptr<u32>(ea + 8) = u32(r4);
    r2 = 0x8ef1e0u;  // (from the original)
    ea = r0 + 0xa58u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0xa5cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r1 = r2 + 0x2cu;  // (from the original)
    ea = r0 + 0xa40u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0;
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0xa60u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0xa64u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0xa68u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0xa6cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
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
    r0 = r0 - 0xcfcu;  // (from the original)
    r1 = 0x2d00bcu;  // (from the original)
    ea = r0 + 0xd24u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0xd28u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0xd2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0xd30u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r3 = 6u;
    r2 = 0x130u;  // (from the original)
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x720u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c53c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c53c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 2u;
    r0 = r0 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 2u;
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r6 = 0x185cu;  // (from the original)
    r0 = r0 - 0x1798u;  // (from the original)
    r5 = r6 + 0x14u;  // (from the original)
    r1 = 1u;
    *gptr<u32>(r6 + r0) = u32(r4);
    r12 = r5 | r1 << 2;
    *gptr<u32>(r5 + r0) = u32(6u);
    r6 = r12 + (r1 << 2);
    *gptr<u32>(r12 + r0) = u32(r4);
    r3 = 0x1880u;  // (from the original)
    *gptr<u32>(r6 + r0) = u32(0x1000466u);  // (from the original)
    *gptr<u32>((r6 | r1 << 2) + r0) = u32(r4);
    *gptr<u8>(r3 + r0) = u8(r1);
    *gptr<u32>((r3 | r1 << 2) + r0) = u32(r4);
    r4 = r3 - (r1 << 5);
    r2 = r4 | r1 << 2;
    r3 = r2 + (r1 << 2);
    *gptr<u32>(r4 + r0) = u32(r1);
    *gptr<u32>(r2 + r0) = u32(r1);
    *gptr<u32>(r3 + r0) = u32(r1);
    *gptr<u32>((r3 | r1 << 2) + r0) = u32(r1);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002682ac
GUEST_EXPORT(0x002682ac, d_002682ac::f_002682ac);

// f_002684c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002684c0 {

struct __attribute__((packed)) Object_002684c0_0 {
    u32 word_0;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 word_a40;
};
GUEST_OFFSET(Object_002684c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002684c0_0, word_a40, 0xa40);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_002684c0(gptr<Object_002684c0_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8ef1e0u;  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r2 = r1 + 0x2cu;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_a40 = u32(r2);
    r0 = r0 + 0x1798u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0x8ee248u;  // (from the original)
    r5 = r4 + 0x10u;  // (from the original)
    *gptr<u32>(r0 - 0x134u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 - 0x140u) = u32(r4);  // (from the original)
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 - 0x154u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 - 0x160u) = u32(r4);  // (from the original)
    r0 = r0 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x1ff9d4u;  // (from the original)
    r4 = r0 - 0x1474u;  // (from the original)
    r3 = 6u;
    r2 = 0x130u;  // (from the original)
    r0 = r0 - 0x740u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xcfcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r2 = 0x8ef22cu;  // (from the original)
    r3 = 1u;
    ea = r0 - 0xa70u;  // (from the original)
    *gptr<u32>(ea) = u32(0x8f18d0u);  // (from the original)
    r0 = ea;
    *gptr<u32>(r0 + 0x40cu) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x4f0u) = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    r4 = r0 + 0x40cu;  // (from the original)
    r0 = r0 + 0x524u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f770c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002684c0
GUEST_EXPORT(0x002684c0, d_002684c0::f_002684c0);

// f_002686d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002686d4 {

struct __attribute__((packed)) Object_002686d4_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
};
GUEST_OFFSET(Object_002686d4_0, word_108, 0x108);  // (from the original)


u32 f_002686d4(gptr<Object_002686d4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_108;
    *gptr<u32>(r0 + 0xc4u) = u32(r1);  // (from the original)
    return r0;
}

}  // namespace d_002686d4
GUEST_EXPORT(0x002686d4, d_002686d4::f_002686d4);

// f_00268d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268d94 {

struct __attribute__((packed)) Object_00268d94_0 {
    u8 unknown_0[0x3fc];  // (not used here)
    u32 word_3fc;
};
GUEST_OFFSET(Object_00268d94_0, word_3fc, 0x3fc);  // (from the original)

inline constexpr guest::Function<0x004f1328, u32(u32, u32, u32, u32)> call_004f1328;  // (from the original)

u32 f_00268d94(gptr<Object_00268d94_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_3fc = u32(r1);
    r0 = r1 + 0x78u;  // (from the original)
    r0 = call_004f1328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r0 + 8u);
    *gptr<u32>(r4 + 0x3f4u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00268d94
GUEST_EXPORT(0x00268d94, d_00268d94::f_00268d94);

// f_00269478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00269478 {

struct __attribute__((packed)) Object_00269478_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00269478_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0026a66c, u32(u32, u32, u32, u32)> call_0026a66c;  // (from the original)

u32 f_00269478(gptr<Object_00269478_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x8ef334u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 4u;
    r0 = call_0026a66c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 - 4u;
    r1 = 0u;
    *gptr<u32>(r0 + 0x3fcu) = u32(r1);  // (from the original)
    r2 = r0 + 0x400u;  // (from the original)
    *gptr<u8>(r0 + 0x400u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x401u) = u8(r1);  // (from the original)
    *gptr<u16>(r2 + 2u) = u16(r1);
    *gptr<u16>(r2 + 4u) = u16(r1);
    *gptr<u8>(r0 + 0x406u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x407u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00269478
GUEST_EXPORT(0x00269478, d_00269478::f_00269478);

// f_002694b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002694b8 {

struct __attribute__((packed)) Object_002694b8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002694b8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0026a694, u32(u32, u32, u32, u32)> call_0026a694;  // (from the original)

u32 f_002694b8(gptr<Object_002694b8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x8ef334u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 4u;
    r0 = call_0026a694(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 4u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002694b8
GUEST_EXPORT(0x002694b8, d_002694b8::f_002694b8);

// f_0026a66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026a66c {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0026a66c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x2699ecu;  // (from the original)
    r3 = 4u;
    r2 = 0xfcu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u32>(r0 + 0x3f0u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0x3f4u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0026a66c
GUEST_EXPORT(0x0026a66c, d_0026a66c::f_0026a66c);

// f_0026a694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026a694 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0026a694(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r1 = 0x269a48u;  // (from the original)
    r4 = r0;
    r3 = 4u;
    r2 = 0xfcu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0026a694
GUEST_EXPORT(0x0026a694, d_0026a694::f_0026a694);

// f_0026adf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026adf8 {

struct __attribute__((packed)) Object_0026adf8_0 {
    u8 unknown_0[0x1250];  // (not used here)
    u32 word_1250;
    u32 word_1254;
    u32 word_1258;
};
GUEST_OFFSET(Object_0026adf8_0, word_1250, 0x1250);  // (from the original)
GUEST_OFFSET(Object_0026adf8_0, word_1254, 0x1254);  // (from the original)
GUEST_OFFSET(Object_0026adf8_0, word_1258, 0x1258);  // (from the original)

struct __attribute__((packed)) Object_0026adf8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0026adf8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0026adf8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0026adf8_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0026a824, u32(u32, u32, u32, u32)> call_0026a824;  // (from the original)

u32 f_0026adf8(gptr<Object_0026adf8_0> arg0, gptr<Object_0026adf8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = r0 + 0x1250u;  // (from the original)
    arg0->word_1250 = u32(arg1->word_0);
    r3 = arg1->word_4;
    arg0->word_1254 = u32(r3);
    arg0->word_1258 = u32(arg1->word_8);
    r1 = u32(*gptr<u8>(0x9506b0u));  // (from the original)
    if (r1 != 0xffu) {  // (from the original)
        return call_0026a824(r0, r1, r2, r3);
    }
    r1 = *gptr<u32>(0x9506b4u);  // (from the original)
    if (r1 == 0) {
        return call_0026a824(r0, r1, r2, r3);
    }
    r1 = r1 + 0x6aceu;  // (from the original)
    r2 = 1u;
    *gptr<u8>(r1) = u8(r2);
    return call_0026a824(r0, r1, r2, r3);
}

}  // namespace d_0026adf8
GUEST_EXPORT(0x0026adf8, d_0026adf8::f_0026adf8);

// f_0026ae58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026ae58 {

struct __attribute__((packed)) Object_0026ae58_0 {
    u8 unknown_0[0x121c];  // (not used here)
    u32 word_121c;
};
GUEST_OFFSET(Object_0026ae58_0, word_121c, 0x121c);  // (from the original)

inline constexpr guest::Function<0x006e9c2c, u32(u32, u32, u32, u32)> call_006e9c2c;  // (from the original)

u32 f_0026ae58(gptr<Object_0026ae58_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    float S0 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x1000u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x88069cu));  // (from the original)
    r1 = 0u;
    r0 = arg0->word_121c + 0x78u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_006e9c2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = 0u;
    *gptr<u32>(r4 + 0x220u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0026ae58
GUEST_EXPORT(0x0026ae58, d_0026ae58::f_0026ae58);

// f_0026b2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026b2e0 {

inline constexpr guest::Function<0x006a8280, u32(u32, u32, u32, u32)> call_006a8280;  // (from the original)

u32 f_0026b2e0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_006a8280(r0, r1, r2, r3);
    r2 = 0x9528dcu;  // (from the original)
    r1 = r0 + 0x1000u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x26b320u));  // (from the original)
    *gptr<u32>(r1 + 0x21cu) = u32(r4);  // (from the original)
    *gptr<u32>(r1 + 0x224u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r3 = r2 + 0xcu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r3));
    S1 = std::bit_cast<float>(*gptr<u32>(r3 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r3 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r3 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r3 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r3 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r3 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r3 + 0x1c));  // (from the original)
    r3 = r0 + 0x122cu;  // (from the original)
    *gptr<u32>(r3) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r3 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r3 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r3 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r3 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r3 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r3 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r3 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    *gptr<u32>(r1 + 0x24cu) = u32(*gptr<u32>(r2 + 0x2cu));  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0026b2e0
GUEST_EXPORT(0x0026b2e0, d_0026b2e0::f_0026b2e0);

// f_0026b3a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026b3a0 {

struct __attribute__((packed)) Object_0026b3a0_0 {
    u8 unknown_0[0x30c];  // (not used here)
    u32 word_30c;
};
GUEST_OFFSET(Object_0026b3a0_0, word_30c, 0x30c);  // (from the original)

struct __attribute__((packed)) Object_0026b3a0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0026b3a0_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0026b500, u32(u32, u32, u32, u32)> call_0026b500;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> call_004b6d74;  // (from the original)
inline constexpr guest::Function<0x00568adc, u32(u32, u32, u32, u32)> call_00568adc;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)
inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32, u32)> call_005695e4;  // (from the original)

u32 f_0026b3a0(gptr<Object_0026b3a0_0> arg0, gptr<Object_0026b3a0_1> arg1, float S0, float S1, float S2, float S3, float S4, float S5, float S6) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r1;
    arg0->word_30c = u32(arg1->word_0);
    r1 = 0x84a010u;  // (from the original)
    r3 = 4u;
    r2 = 0u;
    r0 = r4 + 0x220u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_00569184(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x849758u;  // (from the original)
    r1 = 0x84a004u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18));  // (from the original)
    r0 = r4 + 0x220u;  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r13 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_00568adc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    *gptr<u32>(r13) = u32(r0);
    r1 = 0x849ff8u;  // (from the original)
    r2 = 1u;
    r0 = r4 + 0x220u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S0 = std::bit_cast<float>(*gptr<u32>(0x26b4d8u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_002b6a00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r1 = *gptr<u32>(r4 + 0x240u);  // (from the original)
    r0 = *gptr<u32>(r5 + 4u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_004b6d74(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r1 = 0x849fdcu;  // (from the original)
    r2 = *gptr<u32>(r5);
    r0 = r4 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_005695e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r1 = 0x849fc0u;  // (from the original)
    r2 = *gptr<u32>(r5);
    r0 = r4 + 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_005695e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r1 = 0x849fa4u;  // (from the original)
    r2 = *gptr<u32>(r5);
    r0 = r4 + 0x130u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_005695e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r1 = 0x849f84u;  // (from the original)
    r2 = *gptr<u32>(r5);
    r0 = r4 + 0x158u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_005695e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r1 = 0x849f68u;  // (from the original)
    r2 = *gptr<u32>(r5);
    r0 = r4 + 0x180u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_005695e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r1 = 0x849f4cu;  // (from the original)
    r2 = *gptr<u32>(r5);
    r0 = r4 + 0x1a8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_005695e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r1 = 0x849f30u;  // (from the original)
    r2 = *gptr<u32>(r5);
    r0 = r4 + 0x1d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_005695e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r1 = 0x849f10u;  // (from the original)
    r2 = *gptr<u32>(r5);
    r0 = r4 + 0x1f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_005695e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    r5 = 1u;
    r0 = r4;
    *gptr<u8>(r4 + 0xdeu) = u8(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    r0 = call_0026b500(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = 0x100043fu;  // (from the original)
    *gptr<u32>(r4 + 0xd0u) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0xdbu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0xdcu) = u8(r5);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0026b3a0
GUEST_EXPORT(0x0026b3a0, d_0026b3a0::f_0026b3a0);

// f_0026b500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026b500 {

struct __attribute__((packed)) Object_0026b500_0 {
    u8 unknown_0[0xde];  // (not used here)
    u8 byte_de;
    u8 unknown_df[0x19];  // (not used here)
    u32 word_f8;
};
GUEST_OFFSET(Object_0026b500_0, byte_de, 0xde);  // (from the original)
GUEST_OFFSET(Object_0026b500_0, word_f8, 0xf8);  // (from the original)

inline constexpr guest::Function<0x00569774, u32(u32, u32, u32, u32)> call_00569774;  // (from the original)

u32 f_0026b500(gptr<Object_0026b500_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 1u;
    if (u32(arg0->byte_de) == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    arg0->byte_de = u8(r0);
    if (r0 != 0) {
        r1 = arg0->word_f8;
        r0 = r4 + 0x20u;  // (from the original)
        r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r4 + 0x120u);  // (from the original)
        r0 = r4 + 0x48u;  // (from the original)
        r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r4 + 0x148u);  // (from the original)
        r0 = r4 + 0x70u;  // (from the original)
        r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r4 + 0x170u);  // (from the original)
        r0 = r4 + 0x98u;  // (from the original)
        r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = 0x1000445u;  // (from the original)
        *gptr<u32>(r4 + 0xccu) = u32(r0);  // (from the original)
        *gptr<u8>(r4 + 0xdau) = u8(r5);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r4 + 0x198u);  // (from the original)
    r0 = r4 + 0x20u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4 + 0x1c0u);  // (from the original)
    r0 = r4 + 0x48u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4 + 0x1e8u);  // (from the original)
    r0 = r4 + 0x70u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4 + 0x210u);  // (from the original)
    r0 = r4 + 0x98u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x1000444u;  // (from the original)
    *gptr<u32>(r4 + 0xccu) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0xdau) = u8(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0026b500
GUEST_EXPORT(0x0026b500, d_0026b500::f_0026b500);

// f_0026d644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026d644 {

struct __attribute__((packed)) Object_0026d644_0 {
    u8 unknown_0[0x8431];  // (not used here)
    u8 byte_8431;
};
GUEST_OFFSET(Object_0026d644_0, byte_8431, 0x8431);  // (from the original)

inline constexpr guest::Function<0x002b8958, u32(u32, u32, u32, u32)> call_002b8958;  // (from the original)
inline constexpr guest::Function<0x002b89ec, u32(u32, u32, u32, u32)> call_002b89ec;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)
inline constexpr guest::Function<0x00724578, u32(u32, u32, u32, u32)> call_00724578;  // (from the original)

u32 f_0026d644(gptr<Object_0026d644_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    zf = u32(arg0->byte_8431) == 0;
    if (zf) {
        r2 = 0xdbu;  // (from the original)
    } else {
        r2 = 0xe5u;  // (from the original)
    }
    r1 = r4 * r2;
    r0 = r0 + (r1 << 2);
    if (zf) {
        r5 = r0 + 0x890u;  // (from the original)
    } else {
        r5 = r0 + 0x4410u;  // (from the original)
    }
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 + 0x6bd0u;  // (from the original)
    r2 = 0u;
    r1 = r4;
    r0 = call_00724424(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    r0 = call_002fcaf4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = 0u;
        r0 = r5;
        r0 = call_002b8958(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = 0u;
        *gptr<u8>(r5 + 0xd9u) = u8(r0);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x6bd0u;  // (from the original)
    r1 = r4;
    r0 = call_00724578(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0;
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002b89ec(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0026d644
GUEST_EXPORT(0x0026d644, d_0026d644::f_0026d644);

// f_0026e250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026e250 {

struct __attribute__((packed)) Object_0026e250_0 {
    u8 unknown_0[0x8431];  // (not used here)
    u8 byte_8431;
};
GUEST_OFFSET(Object_0026e250_0, byte_8431, 0x8431);  // (from the original)


u32 f_0026e250(gptr<Object_0026e250_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    if (u32(arg0->byte_8431) != 0) {
        r2 = 0xe5u;  // (from the original)
        r0 = r0 + (r1 * r2 << 2) + 0x4410u;  // (from the original)
        r1 = *gptr<u32>(*gptr<u32>(r0) + 0x60u);  // (from the original)
        return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
    }
    r2 = 0xdbu;  // (from the original)
    r1 = r0 + (r1 * r2 << 2);
    r0 = r1 + 0x890u;  // (from the original)
    r1 = *gptr<u32>(*gptr<u32>(r1 + 0x890u) + 0x60u);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0026e250
GUEST_EXPORT(0x0026e250, d_0026e250::f_0026e250);

// f_0026e2d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026e2d8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x0076a280, u32(u32, u32, u32, u32)> call_0076a280;  // (from the original)

u32 f_0026e2d8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r4 = 0u;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 8u;
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_26e318;
    }
    r0 = r5;
    r0 = call_0030b654(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_26e318;
    }
    r0 = r5;
    r0 = call_0076a280(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
L_26e318:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0026e2d8
GUEST_EXPORT(0x0026e2d8, d_0026e2d8::f_0026e2d8);

// f_0026e410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026e410 {

inline constexpr guest::Function<0x00817bd0, u32(u32, u32, u32, u32)> call_00817bd0;  // (from the original)

u32 f_0026e410(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r1 = *gptr<u32>(0x8791b4u);  // (from the original)
    r2 = *gptr<u32>(0x8791b4u + 4);  // (from the original)
    r0 = r4;
    r0 = call_00817bd0(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + 0x4000u;  // (from the original)
    r7 = 0u;
    *gptr<u8>(r0 + 0x7du) = u8(r7);  // (from the original)
    *gptr<u8>(r0 + 0x29u) = u8(r7);  // (from the original)
    *gptr<u8>(r0 + 0x1adu) = u8(r7);  // (from the original)
    *gptr<u8>(r0 + 0x3b9u) = u8(r7);  // (from the original)
    *gptr<u8>(r0 + 0x2ddu) = u8(r7);  // (from the original)
    *gptr<u8>(r0 + 0x289u) = u8(r7);  // (from the original)
    *gptr<u8>(0x8434u + r4) = u8(1u);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x840cu);  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0026e410
GUEST_EXPORT(0x0026e410, d_0026e410::f_0026e410);

// f_0026eadc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026eadc {

struct __attribute__((packed)) Object_0026eadc_0 {
    u8 unknown_0[0x83a8];  // (not used here)
    u32 word_83a8;
    u32 word_83ac;
};
GUEST_OFFSET(Object_0026eadc_0, word_83a8, 0x83a8);  // (from the original)
GUEST_OFFSET(Object_0026eadc_0, word_83ac, 0x83ac);  // (from the original)

inline constexpr guest::Function<0x0029aeac, u32(u32, u32, u32, u32)> call_0029aeac;  // (from the original)
inline constexpr guest::Function<0x0029b5fc, u32(u32, u32, u32, u32)> call_0029b5fc;  // (from the original)
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;  // (from the original)

u32 f_0026eadc(gptr<Object_0026eadc_0> arg0, u32 r1_unused, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x82f0u;  // (from the original)
    r0 = 0x2f5bb0u;  // (from the original)
    r1 = arg0->word_83a8;
    if (r1 == r0) {
        res = r0;
        if (res == 0) {
            res = arg0->word_83ac & 1u;
            if (res == 0) {
                goto L_26eb54;
            }
        }
        res = *gptr<u32>(r4 + 0xbcu);  // (from the original)
        if (res == 0) {
            goto L_26eb54;
        }
    }
    r0 = r4;
    r0 = call_007237e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 0;
    if (!zf) {
        zf = *gptr<u32>(r4 + 0x104u) == 0;  // (from the original)
    }
    if (!zf) {
        r2 = 0x1000402u;  // (from the original)
        r1 = 1u;
        r0 = r4;
        r0 = call_0029aeac(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        goto L_26eb54;
    }
    r0 = r4;
    r0 = call_0029b5fc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_26eb54:;
    r0 = *gptr<u32>(r4 + 0xd4u) & ~8u;  // (from the original)
    *gptr<u32>(r4 + 0xd4u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0026eadc
GUEST_EXPORT(0x0026eadc, d_0026eadc::f_0026eadc);

// f_0026eb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026eb6c {

struct __attribute__((packed)) Object_0026eb6c_0 {
    u8 unknown_0[0x8431];  // (not used here)
    u8 byte_8431;
};
GUEST_OFFSET(Object_0026eb6c_0, byte_8431, 0x8431);  // (from the original)

inline constexpr guest::Function<0x002b8fb0, u32(u32, u32, u32, u32)> call_002b8fb0;  // (from the original)
inline constexpr guest::Function<0x0071d090, u32(u32, u32, u32, u32)> call_0071d090;  // (from the original)

u32 f_0026eb6c(gptr<Object_0026eb6c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r3 = 0xdbu;  // (from the original)
    r7 = r2;
    r6 = r0 + 0x8400u;  // (from the original)
    r2 = r1 * 0xe5u;  // (from the original)
    r1 = r1 * r3;
    r2 = r0 + (r2 << 2);
    r5 = r0 + (r1 << 2);
    r4 = r2 + 0x4410u;  // (from the original)
    if (u32(arg0->byte_8431) == 0) {
        r0 = r5 + 0x890u;  // (from the original)
    } else {
        r0 = r4;
    }
    r0 = call_0071d090(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r7;
        if (u32(*gptr<u8>(r6 + 0x31u)) == 0) {  // (from the original)
            r0 = r5 + 0x890u;  // (from the original)
        } else {
            r0 = r4;
        }
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return call_002b8fb0(r0, r1, r2, r3);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0026eb6c
GUEST_EXPORT(0x0026eb6c, d_0026eb6c::f_0026eb6c);

// f_0026f6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026f6fc {

struct __attribute__((packed)) Object_0026f6fc_0 {
    u8 unknown_0[0x190];  // (not used here)
    u32 word_190;
    u8 unknown_194[0x8278];  // (not used here)
    u32 word_840c;
};
GUEST_OFFSET(Object_0026f6fc_0, word_190, 0x190);  // (from the original)
GUEST_OFFSET(Object_0026f6fc_0, word_840c, 0x840c);  // (from the original)

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x002f6c78, u32(u32, u32, u32, u32)> call_002f6c78;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)

u32 f_0026f6fc(gptr<Object_0026f6fc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_840c;
    if (r0 != 0) {
        r1 = arg0->word_190;
        r0 = call_004b6dc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4 + 0x2bcu;  // (from the original)
    r0 = call_00132364(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x504u;  // (from the original)
    r0 = call_00132364(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x24u;  // (from the original)
    r0 = call_001323b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x170u;  // (from the original)
    r0 = call_001323b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x82f0u;  // (from the original)
    r0 = call_002f6c78(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0026f6fc
GUEST_EXPORT(0x0026f6fc, d_0026f6fc::f_0026f6fc);

// f_0026f8a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026f8a8 {

inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x005b48b4, u32(u32, u32, u32, u32)> call_005b48b4;  // (from the original)
inline constexpr guest::Function<0x0076c590, u32(u32, u32, u32, u32)> call_0076c590;  // (from the original)

u32 f_0026f8a8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r0 = r1;
    r0 = call_002fcaf4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_005b48b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    r0 = call_0076c590(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0026f8a8
GUEST_EXPORT(0x0026f8a8, d_0026f8a8::f_0026f8a8);

// f_0026f9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026f9c4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_0026f9c4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    zf = r1 == 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (!zf) {
        zf = r1 == 1u;
    }
    r4 = r0;
    if (zf) {
        goto L_26fa10;
    }
    zf = r1 == 6u;
    if (!zf) {
        zf = r1 == 7u;
    }
    if (!zf) {
        zf = r1 == 9u;
    }
    if (zf) {
        goto L_26fa10;
    }
    r1 = 0x26fa28u;  // (from the original)
    r0 = r4 + 0x2bcu;  // (from the original)
    r0 = call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r0;
L_26f9f8:;
    r1 = 0x26fa4cu;  // (from the original)
    r0 = r4 + 0x504u;  // (from the original)
    r0 = call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 & r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_26fa10:;
    r1 = 0x26fa6cu;  // (from the original)
    r0 = r4 + 0x2bcu;  // (from the original)
    r0 = call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r0;
    guest::preempt();
    goto L_26f9f8;
}

}  // namespace d_0026f9c4
GUEST_EXPORT(0x0026f9c4, d_0026f9c4::f_0026f9c4);

// f_0026fa8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026fa8c {

inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_0026fa8c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r5 = r2;
    r6 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(1u);
    r0 = r0 + 0x6bd0u;  // (from the original)
    r3 = r6;
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002bf9cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0026fa8c
GUEST_EXPORT(0x0026fa8c, d_0026fa8c::f_0026fa8c);

// f_0026fc4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026fc4c {

struct __attribute__((packed)) Object_0026fc4c_0 {
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
GUEST_OFFSET(Object_0026fc4c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0026fc4c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0026fc4c_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0026fc4c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0026fc4c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0026fc4c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0026fc4c_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0026fc4c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0026fc4c_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x0022c53c, u32(u32, u32, u32, u32)> call_0022c53c;  // (from the original)
inline constexpr guest::Function<0x0029b7c0, u32(u32, u32, u32, u32)> call_0029b7c0;  // (from the original)
inline constexpr guest::Function<0x002cdcb0, u32(u32, u32, u32, u32)> call_002cdcb0;  // (from the original)
inline constexpr guest::Function<0x002d00bc, u32(u32, u32, u32, u32)> call_002d00bc;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0032fd1c, u32(u32, u32, u32, u32)> call_0032fd1c;  // (from the original)

u32 f_0026fc4c(gptr<Object_0026fc4c_0> arg0) {
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
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r4 = 0u;
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    r2 = *gptr<u32>(0x8791dcu + 4);  // (from the original)
    arg0->word_c = u32(*gptr<u32>(0x8791dcu));  // (from the original)
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x8ef3acu;  // (from the original)
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r4);
    r0 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
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
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
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
    r1 = 0x2b9440u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 0x36cu;  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x2d00bcu;  // (from the original)
    r3 = 3u;
    r2 = 0x130u;  // (from the original)
    r0 = r0 + 0x36c0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x390u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d00bc(r0, r1, r2, r3);
    r1 = 0x3283e4u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 0x394u;  // (from the original)
    r0 = r0 + 0x130u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x3940u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002cdcb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x1e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0032fd1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c53c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c53c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0029b7c0(r0, r1, r2, r3);
    r8 = 0x8408u;  // (from the original)
    r0 = r0 - 0x82f0u;  // (from the original)
    r7 = r8 | u32(s32(r8) >> 0xd);  // (from the original)
    r6 = r7 + 4u;
    *gptr<u32>(r8 + r0) = u32(r4);
    r1 = r6 | u32(s32(r6) >> 0xd);  // (from the original)
    *gptr<u32>(r7 + r0) = u32(r4);
    *gptr<u32>(r6 + r0) = u32(r4);
    *gptr<u32>(r1 + r0) = u32(r4);
    *gptr<u8>(r1 + 4u + r0) = u8(0xau);  // (from the original)
    *gptr<u8>(r1 + 5u + r0) = u8(r4);
    r7 = r1 + 0x14u;  // (from the original)
    r6 = r1 + 0x18u;  // (from the original)
    *gptr<u32>((r1 | u32(s32(r1) >> 0xc)) + r0) = u32(r4);  // (from the original)
    r9 = ~0u;
    r8 = r0 + 0x8424u;  // (from the original)
    *gptr<u32>(r0 + 0x8420u) = u32(r9);  // (from the original)
    r1 = r1 + 0x1cu;  // (from the original)
    *gptr<u32>(r8) = u32(r4);
    *gptr<u32>(r7 + r0) = u32(r4);
    *gptr<u32>(r6 + r0) = u32(r4);
    *gptr<u8>(r1 + r0) = u8(r4);
    r3 = r1 | u32(s32(r1) >> 0xe);  // (from the original)
    *gptr<u8>((r1 | u32(s32(r1) >> 5)) + r0) = u8(r4);
    r5 = r1 | u32(s32(r1) >> 0xd);  // (from the original)
    r6 = 1u;
    *gptr<u8>(r3 + r0) = u8(r4);
    *gptr<u8>(r1 + 3u + r0) = u8(r6);
    *gptr<u8>(r5 + r0) = u8(r4);
    r2 = 0x13u;  // (from the original)
    r1 = r0 + 0x8436u;  // (from the original)
    r0 = r0 + 0x845cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x845cu;  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0026fc4c
GUEST_EXPORT(0x0026fc4c, d_0026fc4c::f_0026fc4c);

// f_0026fe3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026fe3c {

struct __attribute__((packed)) Object_0026fe3c_0 {
    u32 word_0;
    u8 unknown_4[0x82ec];  // (not used here)
    u32 word_82f0;
};
GUEST_OFFSET(Object_0026fe3c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0026fe3c_0, word_82f0, 0x82f0);  // (from the original)

inline constexpr guest::Function<0x001ff9d8, u32(u32, u32, u32, u32)> call_001ff9d8;  // (from the original)
inline constexpr guest::Function<0x0022c5d8, u32(u32, u32, u32, u32)> call_0022c5d8;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_0026fe3c(gptr<Object_0026fe3c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    arg0->word_0 = u32(0x8ef3acu);  // (from the original)
    r1 = 0x8f08acu;  // (from the original)
    ea = r0 + 0x82f0u;  // (from the original)
    arg0->word_82f0 = u32(r1);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c5d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c5d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c5d8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x8f2a0cu;  // (from the original)
    r2 = r1 + 0x10u;  // (from the original)
    *gptr<u32>(r0 - 0x1d4u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 - 0x1e0u) = u32(r1);  // (from the original)
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0022c5d8(r0, r1, r2, r3);
    r4 = r0;
    r1 = 0x3284d8u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 0x394u;  // (from the original)
    r0 = r0 - 0x3940u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 - 0x3a70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001ff9d8(r0, r1, r2, r3);
    r1 = 0x1ff9d4u;  // (from the original)
    r4 = r0 - 0x42e0u;  // (from the original)
    r3 = 3u;
    r2 = 0x130u;  // (from the original)
    r0 = r0 - 0x390u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x2b950cu;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 0x36cu;  // (from the original)
    r0 = r4 + 0x890u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x868u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x24u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0026fe3c
GUEST_EXPORT(0x0026fe3c, d_0026fe3c::f_0026fe3c);
