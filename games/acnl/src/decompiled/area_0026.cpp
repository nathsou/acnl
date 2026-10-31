// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_0026451c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026451c {

inline guest::global<u8, 0x00854188> global_00854188;  // (from the original)
inline guest::global<u8, 0x00854189> global_00854189;  // (from the original)
inline guest::global<u8, 0x0085418a> global_0085418a;  // (from the original)

u32 f_0026451c() {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r0_1 = 0x9954ccu - 0x94u;  // (from the original)
    *gptr<u8>(0x9954ccu + 0x19u) = u8(0xffu);  // (from the original)
    *gptr<u8>(0x9954ccu + 0x18u) = u8(0xffu);  // (from the original)
    *gptr<u8>(0x9954ccu + 0x17u) = u8(0xffu);  // (from the original)
    *gptr<u8>(0x9954ccu + 0x16u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0_1) = u8(0u);
    *gptr<u8>(r0_1 + 1u) = u8(0u);
    *gptr<u8>(r0_1 + 4u) = u8(0xeu);  // (from the original)
    *gptr<u8>(r0_1 + 0x18u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x19u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x1cu) = u8(0xfu);  // (from the original)
    *gptr<u8>(r0_1 + 9u) = u8(0u);
    *gptr<u8>(r0_1 + 0xau) = u8(5u);  // (from the original)
    r2_1 = r0_1 - 0x1acu;  // (from the original)
    *gptr<u8>(r0_1 + 0xdu) = u8(3u);  // (from the original)
    *gptr<u8>(r2_1 + 0xadu) = u8(0u);  // (from the original)
    *gptr<u8>(r2_1 + 0xafu) = u8(6u);  // (from the original)
    *gptr<u8>(r2_1 + 0xb1u) = u8(7u);  // (from the original)
    *gptr<u8>(r0_1 + 0x12u) = u8(u32(*global_00854188));  // (from the original)
    *gptr<u8>(r0_1 + 0x13u) = u8(u32(*global_00854189));  // (from the original)
    r1_1 = u32(*global_0085418a);
    *gptr<u8>(r0_1 + 0x14u) = u8(r1_1);  // (from the original)
    *gptr<u8>(r0_1 + 0x15u) = u8(0xffu);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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

inline guest::global<u32, 0x00950470> global_00950470;  // (from the original)
inline constexpr guest::Function<0x0011ef18, u32(u32, u32, u32, u32)> call_0011ef18;  // (from the original)
inline constexpr guest::Function<0x00495534, u32(u32, u32, u32, u32)> call_00495534;  // (from the original)

u32 f_00264668(u32 r0, gptr<Object_00264668_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg1->word_14 = u32(0u);
    call_00495534(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_1 = *global_00950470;
    r0_2 = call_0011ef18(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x58u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_2;
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

inline guest::global<u32, 0x00975320> global_00975320;  // (from the original)
inline constexpr guest::Function<0x0011ef18, u32(u32, u32, u32, u32)> call_0011ef18;  // (from the original)
inline constexpr guest::Function<0x004957e4, u32(u32, u32, u32, u32)> call_004957e4;  // (from the original)
inline constexpr guest::Function<0x004959d4, u32(u32, u32, u32, u32)> call_004959d4;  // (from the original)
inline constexpr guest::Function<0x0049b8f4, u32(u32, u32, u32, u32)> call_0049b8f4;  // (from the original)
inline constexpr guest::Function<0x004f0734, u32(u32, u32, u32, u32)> call_004f0734;  // (from the original)
inline constexpr guest::Function<0x00561310, u32(u32, u32, u32, u32)> call_00561310;  // (from the original)
inline constexpr guest::Function<0x0074f1c4, u32(u32, u32, u32, u32)> call_0074f1c4;  // (from the original)

u32 f_00264698(gptr<Object_00264698_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = r1 + 0x40u;  // (from the original)
    arg0->byte_58 = u8(1u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0049b8f4(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_004f0734(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = *gptr<u32>(r1 + 0xa4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_004959d4(r1, r1_2, 1u, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_004957e4(r1, 0u, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    *gptr<u32>(r1 + 0x14u) = u32(1u);  // (from the original)
    *gptr<u32>(0x95043cu + 0x34u) = u32(*global_00975320);  // (from the original)
    r0_3 = *gptr<u32>(r0 + 0x88u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0011ef18(r0_3, 0x95043cu, r2_3, guest::cpu()->r[3]);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r1_3 = *gptr<u32>(r0 + 0x88u);  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_00561310(r0_4, r1_3, r2_4, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0074f1c4(r0_5, r1_4, r2_5, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_00264698
GUEST_EXPORT(0x00264698, d_00264698::f_00264698);

// f_00265d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00265d54 {

inline guest::global<u32, 0x00952c48> global_00952c48;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)

u32 f_00265d54() {
    u32 r2_1 = 0;
    r2_1 = *global_00952c48;
    return call_00125b38(0x9984acu, 0x265d70u, r2_1, 0x80u);  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 r1_7 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r2_6 = 0;
    u32 r0_7 = 0;
    u32 r1_8 = 0;
    u32 zf_2 = 0;
    u32 cf_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    r13 = r13 - 0x60u;  // (from the original)
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312bd0(r0_1, r1, r2, r3);
    r6_1 = r0 + 0x185cu;  // (from the original)
    *gptr<u32>(r13) = u32(4u);
    r1_1 = *gptr<u32>(r0 + (*gptr<u32>(r6_1) << 2) + 0x1860u);  // (from the original)
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312c4c(r0_2, r1_1, 0xau, 0xau);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0 + 0x1798u;  // (from the original)
    r1_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_3, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_3, r1_3, r2_2, r3_2);
    r5_1 = r0 + 0x1870u;  // (from the original)
    *gptr<u32>(r13) = u32(4u);
    r1_4 = *gptr<u32>(r5_1);
    r0_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_00312c4c(r0_4, r1_4, 0xau, 0xau);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0 + 0x16d4u;  // (from the original)
    r1_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_5, r1_5, r2_3, r3_3);
    r1_6 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_5, r1_6, r2_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    r1_7 = r0 + (*gptr<u32>(r6_1) << 2) + 0x1860u;  // (from the original)
    r0_6 = *gptr<u32>(r1_7);
    if (r0_6 == 1u) {
        r0_6 = *gptr<u32>(r5_1);
        goto L_26725c;
    }
    r2_5 = *gptr<u32>(r5_1);
    r3_5 = r0_6 - 1u;
    zf_1 = r3_5 == r2_5;
    cf_1 = r3_5 >= r2_5;
    if (cf_1 && !zf_1) {
        r0_6 = 1u;
    }
    if (!cf_1 || zf_1) {
        r0_6 = r0_6 - 1u;
    }
L_26725c:;
    r2_6 = 0x12c8u;  // (from the original)
    *gptr<u16>(r2_6 + r0) = u16(r0_6 - 1u);
    r0_7 = *gptr<u32>(r1_7);
    if (r0_7 + 1u == 0) {
        r0_7 = *gptr<u32>(r5_1);
        goto L_26728c;
    }
    r1_8 = *gptr<u32>(r5_1);
    r2_6 = r0_7 + 1u;
    zf_2 = r2_6 == r1_8;
    cf_2 = r2_6 >= r1_8;
    if (cf_2 && !zf_2) {
        r0_7 = 1u;
    }
    if (!cf_2 || zf_2) {
        r0_7 = r0_7 + 1u;
    }
L_26728c:;
    *gptr<u16>(0x13f8u + r0) = u16(r0_7 - 1u);  // (from the original)
    r0_8 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_00312cb0(r0_8, 0x13f8u, r2_6, r3_5);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_00267188
GUEST_EXPORT(0x00267188, d_00267188::f_00267188);

// f_00267758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00267758 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_00267758(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0xa70u;  // (from the original)
    call_00568c10(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0 + 0x270u;  // (from the original)
    r0_3 = call_00568c10(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_4 = call_001323bc(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = r0 + 0x270u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_4, r1_3, 1u, guest::cpu()->r[3]);
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
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = arg0->word_a90;
    r0_1 = arg0->word_d30;
    call_004b6dc8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_2 = r0 + 0xa70u;  // (from the original)
    call_001323b4(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_3 = r0 + 0x28u;  // (from the original)
    call_00132364(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_4 = r0 + 0x40cu;  // (from the original)
    call_002cd0e0(r0_4, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_5 = r0 + 0x270u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001323b4(r0_5, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002677cc
GUEST_EXPORT(0x002677cc, d_002677cc::f_002677cc);

// f_00268270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268270 {


void f_00268270(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    r1 = 0u;
    r2 = r0 + 0x185cu;  // (from the original)
    do {
L_26827c:;
        if (*gptr<u32>(r2) == r1) {
            r3_1 = 0u;
        } else {
            r3_1 = 1u;
        }
        r12_1 = r0 + (r1 + (r1 << 1) + (r1 << 4) << 4);
        r1 = r1 + 1u;
        *gptr<u8>(r12_1 + 0xe0du) = u8(r3_1);  // (from the original)
        guest::preempt();
    } while (r1 < 4u);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00268270
GUEST_EXPORT(0x00268270, d_00268270::f_00268270);

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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r5_1 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 r1_5 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 ea_11 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_11 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_13 = 0;
    u32 r2_13 = 0;
    u32 r3_14 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_14 = 0;
    u32 r2_14 = 0;
    u32 r3_15 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 ea_14 = 0;
    u32 ea_15 = 0;
    u32 ea_16 = 0;
    u32 ea_17 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_15 = 0;
    u32 r2_15 = 0;
    u32 r3_16 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_16 = 0;
    u32 r2_16 = 0;
    u32 r3_17 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r2_17 = 0;
    u32 r3_18 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r2_18 = 0;
    u32 r3_19 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r5_2 = 0;
    u32 r12_1 = 0;
    u32 r6_1 = 0;
    u32 r4_1 = 0;
    u32 r2_19 = 0;
    u32 r3_20 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r3_1 = r0 + 0xcu;  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    ea_1 = 0x87a104u + 0x30u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1 + 4);
    arg0->word_c = u32(*gptr<u32>(ea_1));
    arg0->word_10 = u32(r2_1);
    arg0->word_14 = u32(0u);
    arg0->byte_18 = u8(0u);
    arg0->word_1c = u32(0u);
    arg0->word_0 = u32(0x8f18d0u);  // (from the original)
    arg0->word_20 = u32(0u);
    ea_2 = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(0u);
    r0_1 = ea_2 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_001207d8(r0_1, 0x8f18d0u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00125e3c(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00125aec(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00125aec(r0_7, r1_3, r2_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0x28u;  // (from the original)
    r1_4 = r0_9 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_002cd444(r0_9, r1_4, 1u, r3_5);
    *gptr<u32>(r0_10) = u32(0x8ef22cu);  // (from the original)
    *gptr<u32>(r0_10 + 0xe4u) = u32(0x8ef22cu + 0x44u);  // (from the original)
    r0_11 = r0_10 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00301d0c(r0_11, 0x2e0994u, 0x518u, 1u);  // (from the original)
    r0_13 = r0_12 - 0x524u;  // (from the original)
    ea_3 = r0_13 + 0xa3cu;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r0_13 + 0xa44u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r0_13 + 0xa48u;  // (from the original)
    *gptr<u8>(ea_5) = u8(0u);
    ea_6 = 0x87a104u + 0x38u;  // (from the original)
    r2_5 = *gptr<u32>(ea_6);
    r3_6 = *gptr<u32>(ea_6 + 4);
    r5_1 = r0_13 + 0xa4cu;  // (from the original)
    *gptr<u32>(r5_1) = u32(r2_5);
    *gptr<u32>(r5_1 + 4) = u32(r3_6);
    *gptr<u32>(r5_1 + 8) = u32(0u);
    ea_7 = r0_13 + 0xa58u;  // (from the original)
    *gptr<u8>(ea_7) = u8(0u);
    ea_8 = r0_13 + 0xa5cu;  // (from the original)
    *gptr<u32>(ea_8) = u32(0u);
    r1_5 = 0x8ef1e0u + 0x2cu;  // (from the original)
    ea_9 = r0_13 + 0xa40u;  // (from the original)
    *gptr<u32>(ea_9) = u32(r1_5);
    *gptr<u32>(r0_13) = u32(0x8ef1e0u);  // (from the original)
    ea_10 = r0_13 + 0xa60u;  // (from the original)
    *gptr<u32>(ea_10) = u32(0u);
    ea_11 = r0_13 + 0xa64u;  // (from the original)
    *gptr<u32>(ea_11) = u32(0u);
    ea_12 = r0_13 + 0xa68u;  // (from the original)
    *gptr<u32>(ea_12) = u32(0u);
    ea_13 = r0_13 + 0xa6cu;  // (from the original)
    *gptr<u32>(ea_13) = u32(0u);
    r0_14 = ea_13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_15 = call_00125e3c(r0_14, r1_5, 0x8ef1e0u, r3_6);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r0_15 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_00125aec(r0_16, r1_6, r2_6, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_18 = r0_17 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_00125aec(r0_18, r1_7, r2_7, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_00125aec(r0_20, r1_8, r2_8, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_22 = r0_21 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_00125aec(r0_22, r1_9, r2_9, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_24 = r0_23 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_25 = call_00125aec(r0_24, r1_10, r2_10, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_26 = r0_25 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_27 = call_00125aec(r0_26, r1_11, r2_11, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_28 = r0_27 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_29 = call_00125aec(r0_28, r1_12, r2_12, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_30 = r0_29 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_31 = call_00125aec(r0_30, r1_13, r2_13, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_32 = r0_31 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_33 = call_00125aec(r0_32, r1_14, r2_14, r3_15);
    r0_34 = r0_33 - 0xcfcu;  // (from the original)
    ea_14 = r0_34 + 0xd24u;  // (from the original)
    *gptr<u32>(ea_14) = u32(0u);
    ea_15 = r0_34 + 0xd28u;  // (from the original)
    *gptr<u32>(ea_15) = u32(0u);
    ea_16 = r0_34 + 0xd2cu;  // (from the original)
    *gptr<u32>(ea_16) = u32(0u);
    ea_17 = r0_34 + 0xd30u;  // (from the original)
    *gptr<u32>(ea_17) = u32(0u);
    r0_35 = ea_17 + 4u;
    guest::cpu()->r[13] = r13;
    r0_36 = call_00301d0c(r0_35, 0x2d00bcu, 0x130u, 6u);  // (from the original)
    r1_15 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_37 = r0_36 + 0x720u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_38 = call_0022c53c(r0_37, r1_15, r2_15, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_39 = r0_38 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_40 = call_0022c53c(r0_39, r1_16, r2_16, r3_17);
    r2_17 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_41 = r0_40 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_42 = call_005e3128(r0_41, 2u, r2_17, r3_18);
    r2_18 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_43 = r0_42 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_44 = call_005e3128(r0_43, 2u, r2_18, r3_19);
    r0_45 = r0_44 - 0x1798u;  // (from the original)
    r5_2 = 0x185cu + 0x14u;  // (from the original)
    *gptr<u32>(0x185cu + r0_45) = u32(0u);  // (from the original)
    r12_1 = r5_2 | 1u << 2;
    *gptr<u32>(r5_2 + r0_45) = u32(6u);
    r6_1 = r12_1 + (1u << 2);
    *gptr<u32>(r12_1 + r0_45) = u32(0u);
    *gptr<u32>(r6_1 + r0_45) = u32(0x1000466u);  // (from the original)
    *gptr<u32>((r6_1 | 1u << 2) + r0_45) = u32(0u);
    *gptr<u8>(0x1880u + r0_45) = u8(1u);  // (from the original)
    *gptr<u32>((0x1880u | 1u << 2) + r0_45) = u32(0u);  // (from the original)
    r4_1 = 0x1880u - (1u << 5);  // (from the original)
    r2_19 = r4_1 | 1u << 2;
    r3_20 = r2_19 + (1u << 2);
    *gptr<u32>(r4_1 + r0_45) = u32(1u);
    *gptr<u32>(r2_19 + r0_45) = u32(1u);
    *gptr<u32>(r3_20 + r0_45) = u32(1u);
    *gptr<u32>((r3_20 | 1u << 2) + r0_45) = u32(1u);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = 1u;
    guest::cpu()->r[13] = r13;
    return r0_45;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_15 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r4_1 = 0;
    u32 r0_33 = 0;
    u32 r1_16 = 0;
    u32 r2_17 = 0;
    u32 r3_16 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_17 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r1_18 = 0;
    u32 r2_19 = 0;
    u32 r3_18 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r1_19 = 0;
    u32 r2_20 = 0;
    u32 r3_19 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r1_20 = 0;
    u32 r2_21 = 0;
    u32 r3_20 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_21 = 0;
    u32 r2_22 = 0;
    u32 r3_21 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r1_22 = 0;
    u32 r2_23 = 0;
    u32 r3_22 = 0;
    u32 r0_46 = 0;
    u32 r0_47 = 0;
    u32 r1_23 = 0;
    u32 r2_24 = 0;
    u32 r3_23 = 0;
    u32 r0_48 = 0;
    u32 r0_49 = 0;
    u32 r1_24 = 0;
    u32 r2_25 = 0;
    u32 r3_24 = 0;
    u32 r0_50 = 0;
    u32 r0_51 = 0;
    u32 r1_25 = 0;
    u32 r2_26 = 0;
    u32 r3_25 = 0;
    u32 r0_52 = 0;
    u32 r0_53 = 0;
    u32 ea_1 = 0;
    u32 r4_2 = 0;
    u32 r0_54 = 0;
    u32 r1_26 = 0;
    u32 r2_27 = 0;
    u32 r3_26 = 0;
    u32 r0_55 = 0;
    u32 r1_27 = 0;
    u32 r2_28 = 0;
    u32 r3_27 = 0;
    u32 r0_56 = 0;
    u32 r0_57 = 0;
    u32 r1_28 = 0;
    u32 r2_29 = 0;
    u32 r3_28 = 0;
    u32 r0_58 = 0;
    u32 r0_59 = 0;
    u32 r1_29 = 0;
    u32 r2_30 = 0;
    u32 r3_29 = 0;
    u32 r0_60 = 0;
    u32 r0_61 = 0;
    u32 r1_30 = 0;
    u32 r2_31 = 0;
    u32 r3_30 = 0;
    u32 r0_62 = 0;
    u32 r0_63 = 0;
    u32 r1_31 = 0;
    u32 r0_64 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r2_1 = 0x8ef1e0u + 0x2cu;  // (from the original)
    arg0->word_0 = u32(0x8ef1e0u);  // (from the original)
    arg0->word_a40 = u32(r2_1);
    r0_1 = r0 + 0x1798u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_005e3194(r0_1, 0x8ef1e0u, r2_1, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005e3194(r0_3, r1_1, r2_2, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5_1 = 0x8ee248u + 0x10u;  // (from the original)
    *gptr<u32>(r0_4 - 0x134u) = u32(r5_1);  // (from the original)
    *gptr<u32>(r0_4 - 0x140u) = u32(0x8ee248u);  // (from the original)
    r0_5 = r0_4 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056988c(r0_5, r1_2, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0056988c(r0_7, r1_3, r2_4, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_0056988c(r0_9, r1_4, r2_5, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0056988c(r0_11, r1_5, r2_6, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_0056988c(r0_13, r1_6, r2_7, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_0056988c(r0_15, r1_7, r2_8, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_0056988c(r0_17, r1_8, r2_9, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    *gptr<u32>(r0_18 - 0x154u) = u32(r5_1);  // (from the original)
    *gptr<u32>(r0_18 - 0x160u) = u32(0x8ee248u);  // (from the original)
    r0_19 = r0_18 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_0056988c(r0_19, r1_9, r2_10, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_0056988c(r0_21, r1_10, r2_11, r3_10);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_23 = r0_22 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_0056988c(r0_23, r1_11, r2_12, r3_11);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_0056988c(r0_25, r1_12, r2_13, r3_12);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_0056988c(r0_27, r1_13, r2_14, r3_13);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_30 = call_0056988c(r0_29, r1_14, r2_15, r3_14);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_32 = call_0056988c(r0_31, r1_15, r2_16, r3_15);
    r4_1 = r0_32 - 0x1474u;  // (from the original)
    r0_33 = r0_32 - 0x740u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_33, 0x1ff9d4u, 0x130u, 6u);  // (from the original)
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_34 = r4_1 + 0xcfcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_35 = call_0056988c(r0_34, r1_16, r2_17, r3_16);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_36 = r0_35 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_37 = call_0056988c(r0_36, r1_17, r2_18, r3_17);
    r1_18 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_38 = r0_37 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_39 = call_0056988c(r0_38, r1_18, r2_19, r3_18);
    r1_19 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_40 = r0_39 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_41 = call_0056988c(r0_40, r1_19, r2_20, r3_19);
    r1_20 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_42 = r0_41 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_43 = call_0056988c(r0_42, r1_20, r2_21, r3_20);
    r1_21 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_44 = r0_43 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_45 = call_0056988c(r0_44, r1_21, r2_22, r3_21);
    r1_22 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_46 = r0_45 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_47 = call_0056988c(r0_46, r1_22, r2_23, r3_22);
    r1_23 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_48 = r0_47 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_49 = call_0056988c(r0_48, r1_23, r2_24, r3_23);
    r1_24 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_50 = r0_49 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_51 = call_0056988c(r0_50, r1_24, r2_25, r3_24);
    r1_25 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_52 = r0_51 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_53 = call_005bf744(r0_52, r1_25, r2_26, r3_25);
    ea_1 = r0_53 - 0xa70u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8f18d0u);  // (from the original)
    *gptr<u32>(ea_1 + 0x40cu) = u32(0x8ef22cu);  // (from the original)
    *gptr<u32>(ea_1 + 0x4f0u) = u32(0x8ef22cu + 0x44u);  // (from the original)
    r4_2 = ea_1 + 0x40cu;  // (from the original)
    r0_54 = ea_1 + 0x524u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_54, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    r1_26 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_55 = call_002f770c(r4_2, r1_26, r2_27, r3_26);
    r1_27 = guest::cpu()->r[1];
    r2_28 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r0_56 = r0_55 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_57 = call_0056988c(r0_56, r1_27, r2_28, r3_27);
    r1_28 = guest::cpu()->r[1];
    r2_29 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    r0_58 = r0_57 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_59 = call_0056988c(r0_58, r1_28, r2_29, r3_28);
    r1_29 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_60 = r0_59 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_61 = call_005bf744(r0_60, r1_29, r2_30, r3_29);
    r1_30 = guest::cpu()->r[1];
    r2_31 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    r0_62 = r0_61 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_63 = call_00567ef0(r0_62, r1_30, r2_31, r3_30);
    r1_31 = guest::cpu()->r[1];
    r0_64 = r0_63 - 0x28u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_31;
    guest::cpu()->r[13] = r13;
    return r0_64;
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
    u32 r0_1 = 0;
    r0_1 = arg0->word_108;
    *gptr<u32>(r0_1 + 0xc4u) = u32(r1);  // (from the original)
    return r0_1;
}

}  // namespace d_002686d4
GUEST_EXPORT(0x002686d4, d_002686d4::f_002686d4);

// f_0026876c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026876c {

struct __attribute__((packed)) Object_0026876c_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Object_0026876c_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_0026876c_0, word_10c, 0x10c);  // (from the original)


void f_0026876c(gptr<Object_0026876c_0> arg0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 r2_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r3 = r13;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    r1_1 = arg0->word_10c;
    nf_1 = r1_1 >> 0x1f;  // (from the original)
    zf_1 = r1_1 == 0;
    r1 = 0u;
    if (!zf_1 && nf_1 == 0u) {
        r4 = 1u;
    }
    if (zf_1 || nf_1 != 0u) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return;
    }
    do {
L_268790:;
        r2_1 = r1 * 0xa3u;  // (from the original)
        r12_1 = *gptr<u32>(r3 + (r1 << 2));
        r1 = r1 + 1u;
        r2_2 = arg0->word_108 + (r2_1 << 3);
        *gptr<u32>(r2_2 + 0xccu) = u32(r12_1);  // (from the original)
        *gptr<u8>(r2_2 + 0xdau) = u8(r4);  // (from the original)
        guest::preempt();
    } while (s32(arg0->word_10c) > s32(r1));
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_0026876c
GUEST_EXPORT(0x0026876c, d_0026876c::f_0026876c);

// f_00268818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268818 {

struct __attribute__((packed)) Object_00268818_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Object_00268818_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_00268818_0, word_10c, 0x10c);  // (from the original)


void f_00268818(gptr<Object_00268818_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12 = r13;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    r1_1 = arg0->word_10c;
    nf_1 = r1_1 >> 0x1f;  // (from the original)
    zf_1 = r1_1 == 0;
    r1 = 0u;
    if (!zf_1 && nf_1 == 0u) {
        r3 = 1u;
    }
    if (zf_1 || nf_1 != 0u) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return;
    }
    do {
L_26883c:;
        r5_1 = r1 * 0xa3u;  // (from the original)
        r4_1 = *gptr<u32>(r12 + (r1 << 2));
        r1 = r1 + 1u;
        r2_1 = arg0->word_108 + (r5_1 << 3);
        *gptr<u32>(r2_1 + 0xd0u) = u32(r4_1);  // (from the original)
        *gptr<u8>(r2_1 + 0xdbu) = u8(r3);  // (from the original)
        *gptr<u8>(r2_1 + 0xdcu) = u8(r3);  // (from the original)
        guest::preempt();
    } while (s32(arg0->word_10c) > s32(r1));
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_00268818
GUEST_EXPORT(0x00268818, d_00268818::f_00268818);

// f_00268878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268878 {

struct __attribute__((packed)) Object_00268878_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Object_00268878_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_00268878_0, word_10c, 0x10c);  // (from the original)


void f_00268878(gptr<Object_00268878_0> arg0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 vf_1 = 0;
    u32 r4_1 = 0;
    u32 r12_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r3 = r13;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    r1_1 = arg0->word_10c;
    vf_1 = (r1_1 & (r1_1 ^ r1_1)) >> 0x1f;  // (from the original)
    r1 = 0u;
    if (r1_1 == 0 || r1_1 >> 0x1f != vf_1) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return;
    }
    do {
L_268898:;
        r4_1 = r1 * 0xa3u;  // (from the original)
        r12_1 = *gptr<u32>(r3 + (r1 << 2));
        r1 = r1 + 1u;
        *gptr<u32>(arg0->word_108 + (r4_1 << 3) + 0xc4u) = u32(r12_1);  // (from the original)
        guest::preempt();
    } while (s32(arg0->word_10c) > s32(r1));
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_00268878
GUEST_EXPORT(0x00268878, d_00268878::f_00268878);

// f_00268a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268a08 {

struct __attribute__((packed)) Object_00268a08_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Object_00268a08_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_00268a08_0, word_10c, 0x10c);  // (from the original)


void f_00268a08(gptr<Object_00268a08_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r2_2 = 0;
    u32 r12_1 = 0;
    u32 r2_3 = 0;
    r13 = r13 - 0x14u;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    *gptr<u32>(r13 + 8) = u32(r3);
    r3 = r13;
    r2_1 = arg0->word_10c;
    r1 = 0u;
    nf_1 = r2_1 >> 0x1f;  // (from the original)
    zf_1 = r2_1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r4 = 1u;
    }
    if (zf_1 || nf_1 != 0u) {
        r13 = r13 + 0x14u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return;
    }
    do {
L_268a2c:;
        r2_2 = r1 * 0xa3u;  // (from the original)
        r12_1 = *gptr<u32>(r3 + (r1 << 2));
        r1 = r1 + 1u;
        r2_3 = arg0->word_108 + (r2_2 << 3);
        *gptr<u32>(r2_3 + 0xccu) = u32(r12_1);  // (from the original)
        *gptr<u8>(r2_3 + 0xdau) = u8(r4);  // (from the original)
        guest::preempt();
    } while (s32(arg0->word_10c) > s32(r1));
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_00268a08
GUEST_EXPORT(0x00268a08, d_00268a08::f_00268a08);

// f_00268ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268ab8 {

struct __attribute__((packed)) Object_00268ab8_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Object_00268ab8_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_00268ab8_0, word_10c, 0x10c);  // (from the original)


void f_00268ab8(gptr<Object_00268ab8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r12_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4) = u32(r2);
    *gptr<u32>(r13 + 8) = u32(r3);
    r3 = r13;
    r2_1 = arg0->word_10c;
    r1 = 0u;
    if (r2_1 == 0 || r2_1 >> 0x1f != (r2_1 & (r2_1 ^ r2_1)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return;
    }
    do {
L_268ad8:;
        r4_1 = r1 * 0xa3u;  // (from the original)
        r12_1 = *gptr<u32>(r3 + (r1 << 2));
        r1 = r1 + 1u;
        *gptr<u32>(arg0->word_108 + (r4_1 << 3) + 0xc4u) = u32(r12_1);  // (from the original)
        guest::preempt();
    } while (s32(arg0->word_10c) > s32(r1));
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_00268ab8
GUEST_EXPORT(0x00268ab8, d_00268ab8::f_00268ab8);

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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_3fc = u32(r1);
    r0_1 = r1 + 0x78u;  // (from the original)
    r0_2 = call_004f1328(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(r0_2 + 8u);
    *gptr<u32>(r0 + 0x3f4u) = u32(r0_3);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_3;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ef334u);  // (from the original)
    r0_1 = r0 + 4u;
    r0_2 = call_0026a66c(r0_1, 0x8ef334u, r2, guest::cpu()->r[3]);  // (from the original)
    r0_3 = r0_2 - 4u;
    *gptr<u32>(r0_3 + 0x3fcu) = u32(0u);  // (from the original)
    r2_1 = r0_3 + 0x400u;  // (from the original)
    *gptr<u8>(r0_3 + 0x400u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x401u) = u8(0u);  // (from the original)
    *gptr<u16>(r2_1 + 2u) = u16(0u);
    *gptr<u16>(r2_1 + 4u) = u16(0u);
    *gptr<u8>(r0_3 + 0x406u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x407u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_3;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ef334u);  // (from the original)
    r0_1 = r0 + 4u;
    r0_2 = call_0026a694(r0_1, 0x8ef334u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 - 4u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_002694b8
GUEST_EXPORT(0x002694b8, d_002694b8::f_002694b8);

// f_0026a5dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026a5dc {

inline constexpr guest::Function<0x002e6368, u32(u32, u32, u32, u32)> call_002e6368;  // (from the original)
inline constexpr guest::Function<0x004eb3e0, u32(u32, u32, u32, u32)> call_004eb3e0;  // (from the original)
inline constexpr guest::Function<0x00745970, u32(u32, u32, u32, u32)> call_00745970;  // (from the original)

u32 f_0026a5dc(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r7 = r0 + 0x3f0u;  // (from the original)
    r8 = 3u;
    r9 = 2u;
L_26a5f0:;
    r0_1 = *gptr<u32>(r6 + 0xecu);  // (from the original)
    if (r0_1 == 0) {
        *gptr<u32>(r6 + 0xecu) = u32(r8);  // (from the original)
        goto L_26a65c;
    }
    if (r0_1 != 1u) {
        goto L_26a65c;
    }
    r4 = r6 + 0x34u;  // (from the original)
    r5 = r6 + 0xe4u;  // (from the original)
    if (r4 == r5) {
        goto L_26a658;
    }
    do {
L_26a618:;
        r0_2 = *gptr<u32>(r4 + 0x18u);  // (from the original)
        if (!(r0_2 == 0)) {
            r1 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
            if (r1 == *gptr<u32>(r0_2 + 0xcu)) {  // (from the original)
                r0_3 = r4 + 0xcu;  // (from the original)
                call_002e6368(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
            }
        }
        r0_1 = call_00745970(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            r0_1 = call_004eb3e0(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        r4 = r4 + 0x2cu;  // (from the original)
        guest::preempt();
    } while (r4 != r5);
L_26a658:;
    *gptr<u32>(r6 + 0xecu) = u32(r9);  // (from the original)
L_26a65c:;
    r6 = r6 + 0xfcu;  // (from the original)
    if (r6 != r7) {
        guest::preempt();
        goto L_26a5f0;
    }
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0026a5dc
GUEST_EXPORT(0x0026a5dc, d_0026a5dc::f_0026a5dc);

// f_0026a66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026a66c {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0026a66c(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00301d0c(r0, 0x2699ecu, 0xfcu, 4u);  // (from the original)
    *gptr<u32>(r0_1 + 0x3f0u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x3f4u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_0026a66c
GUEST_EXPORT(0x0026a66c, d_0026a66c::f_0026a66c);

// f_0026a694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026a694 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0026a694(u32 r0) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_002f76ac(r0, 0x269a48u, 0xfcu, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
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

inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline constexpr guest::Function<0x0026a824, u32(u32, u32, u32, u32)> call_0026a824;  // (from the original)

u32 f_0026adf8(gptr<Object_0026adf8_0> arg0, gptr<Object_0026adf8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    r2_1 = r0 + 0x1250u;  // (from the original)
    arg0->word_1250 = u32(arg1->word_0);
    r3_1 = arg1->word_4;
    arg0->word_1254 = u32(r3_1);
    arg0->word_1258 = u32(arg1->word_8);
    r1_1 = u32(*global_009506b0);
    if (r1_1 != 0xffu) {  // (from the original)
        return call_0026a824(r0, r1_1, r2_1, r3_1);
    }
    r1_2 = *global_009506b4;
    if (r1_2 == 0) {
        return call_0026a824(r0, r1_2, r2_1, r3_1);
    }
    r1_3 = r1_2 + 0x6aceu;  // (from the original)
    *gptr<u8>(r1_3) = u8(1u);
    return call_0026a824(r0, r1_3, 1u, r3_1);
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

inline guest::global<u32, 0x0088069c> global_0088069c;  // (from the original)
inline constexpr guest::Function<0x006e9c2c, u32(u32, u32, u32, u32)> call_006e9c2c;  // (from the original)

u32 f_0026ae58(gptr<Object_0026ae58_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = r0 + 0x1000u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_0088069c);
    r0_1 = arg0->word_121c + 0x78u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_006e9c2c(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    *gptr<u32>(r4_1 + 0x220u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    return 0u;
}

}  // namespace d_0026ae58
GUEST_EXPORT(0x0026ae58, d_0026ae58::f_0026ae58);

// f_0026b2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026b2e0 {

inline guest::global<u32, 0x0026b320> global_0026b320;  // (from the original)
inline constexpr guest::Function<0x006a8280, u32(u32, u32, u32, u32)> call_006a8280;  // (from the original)

u32 f_0026b2e0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r3_2 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0_1 = call_006a8280(r0, r1, r2, r3);
    r1_1 = r0_1 + 0x1000u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_0026b320);
    *gptr<u32>(r1_1 + 0x21cu) = u32(r1);  // (from the original)
    *gptr<u32>(r1_1 + 0x224u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r3_1 = 0x9528dcu + 0xcu;  // (from the original)
    S0_2 = std::bit_cast<float>(*gptr<u32>(r3_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r3_1 + 0x1c));  // (from the original)
    r3_2 = r0_1 + 0x122cu;  // (from the original)
    *gptr<u32>(r3_2) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r3_2 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r3_2 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r3_2 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r3_2 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r3_2 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r3_2 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    *gptr<u32>(r3_2 + 0x1c) = u32(std::bit_cast<u32>(S7_1));  // (from the original)
    *gptr<u32>(r1_1 + 0x24cu) = u32(*gptr<u32>(0x9528dcu + 0x2cu));  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
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

inline guest::global<u32, 0x0026b4d8> global_0026b4d8;  // (from the original)
inline guest::global<u32, 0x00849758> global_00849758;  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    float S0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    float S4_4 = 0;
    float S5_4 = 0;
    float S6_4 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    float S3_5 = 0;
    float S4_5 = 0;
    float S5_5 = 0;
    float S6_5 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    float S3_6 = 0;
    float S4_6 = 0;
    float S5_6 = 0;
    float S6_6 = 0;
    u32 r2_5 = 0;
    u32 r0_8 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    float S2_7 = 0;
    float S3_7 = 0;
    float S4_7 = 0;
    float S5_7 = 0;
    float S6_7 = 0;
    u32 r2_6 = 0;
    u32 r0_9 = 0;
    u32 r3_8 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    float S2_8 = 0;
    float S3_8 = 0;
    float S4_8 = 0;
    float S5_8 = 0;
    float S6_8 = 0;
    u32 r2_7 = 0;
    u32 r0_10 = 0;
    u32 r3_9 = 0;
    float S0_9 = 0;
    float S1_9 = 0;
    float S2_9 = 0;
    float S3_9 = 0;
    float S4_9 = 0;
    float S5_9 = 0;
    float S6_9 = 0;
    u32 r2_8 = 0;
    u32 r0_11 = 0;
    u32 r3_10 = 0;
    float S0_10 = 0;
    float S1_10 = 0;
    float S2_10 = 0;
    float S3_10 = 0;
    float S4_10 = 0;
    float S5_10 = 0;
    float S6_10 = 0;
    u32 r2_9 = 0;
    u32 r0_12 = 0;
    u32 r3_11 = 0;
    float S0_11 = 0;
    float S1_11 = 0;
    float S2_11 = 0;
    float S3_11 = 0;
    float S4_11 = 0;
    float S5_11 = 0;
    float S6_11 = 0;
    u32 r2_10 = 0;
    u32 r0_13 = 0;
    u32 r3_12 = 0;
    float S0_12 = 0;
    float S1_12 = 0;
    float S2_12 = 0;
    float S3_12 = 0;
    float S4_12 = 0;
    float S5_12 = 0;
    float S6_12 = 0;
    u32 r2_11 = 0;
    u32 r0_14 = 0;
    u32 r1_3 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    float S0_13 = 0;
    float S1_13 = 0;
    float S2_13 = 0;
    float S3_13 = 0;
    float S4_13 = 0;
    float S5_13 = 0;
    float S6_13 = 0;
    u32 r1_4 = 0;
    float S0_14 = 0;
    float S1_14 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    arg0->word_30c = u32(arg1->word_0);
    r0_1 = r0 + 0x220u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    call_00569184(r0_1, 0x84a010u, 0u, 4u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = std::bit_cast<float>(*global_00849758);
    S1_1 = std::bit_cast<float>(*gptr<u32>(0x849758u + 4));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(0x849758u + 8));  // (from the original)
    S3_1 = std::bit_cast<float>(*gptr<u32>(0x849758u + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(0x849758u + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(0x849758u + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(0x849758u + 0x18));  // (from the original)
    r0_2 = r0 + 0x220u;  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r13 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r13 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r13 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    r0_3 = call_00568adc(r0_2, 0x84a004u, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    *gptr<u32>(r13) = u32(r0_3);
    r0_4 = r0 + 0x220u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    r0_5 = call_004b4fc0(r0_4, 0x849ff8u, 1u, r3_2);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    S6_3 = guest::cpu()->s[6];
    S0_3 = std::bit_cast<float>(*global_0026b4d8);
    *gptr<u32>(r13 + 4u) = u32(r0_5);
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    guest::cpu()->s[6] = S6_3;
    call_002b6a00(r0, r1_1, r2_2, r3_3);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    S4_4 = guest::cpu()->s[4];
    S5_4 = guest::cpu()->s[5];
    S6_4 = guest::cpu()->s[6];
    r1_2 = *gptr<u32>(r0 + 0x240u);  // (from the original)
    r0_6 = *gptr<u32>(r1 + 4u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    guest::cpu()->s[4] = S4_4;
    guest::cpu()->s[5] = S5_4;
    guest::cpu()->s[6] = S6_4;
    call_004b6d74(r0_6, r1_2, r2_3, r3_4);
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    S4_5 = guest::cpu()->s[4];
    S5_5 = guest::cpu()->s[5];
    S6_5 = guest::cpu()->s[6];
    r2_4 = *gptr<u32>(r1);
    r0_7 = r0 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    guest::cpu()->s[6] = S6_5;
    call_005695e4(r0_7, 0x849fdcu, r2_4, r3_5);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    S3_6 = guest::cpu()->s[3];
    S4_6 = guest::cpu()->s[4];
    S5_6 = guest::cpu()->s[5];
    S6_6 = guest::cpu()->s[6];
    r2_5 = *gptr<u32>(r1);
    r0_8 = r0 + 0x108u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_6;
    guest::cpu()->s[3] = S3_6;
    guest::cpu()->s[4] = S4_6;
    guest::cpu()->s[5] = S5_6;
    guest::cpu()->s[6] = S6_6;
    call_005695e4(r0_8, 0x849fc0u, r2_5, r3_6);  // (from the original)
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    S3_7 = guest::cpu()->s[3];
    S4_7 = guest::cpu()->s[4];
    S5_7 = guest::cpu()->s[5];
    S6_7 = guest::cpu()->s[6];
    r2_6 = *gptr<u32>(r1);
    r0_9 = r0 + 0x130u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    guest::cpu()->s[2] = S2_7;
    guest::cpu()->s[3] = S3_7;
    guest::cpu()->s[4] = S4_7;
    guest::cpu()->s[5] = S5_7;
    guest::cpu()->s[6] = S6_7;
    call_005695e4(r0_9, 0x849fa4u, r2_6, r3_7);  // (from the original)
    r3_8 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    S2_8 = guest::cpu()->s[2];
    S3_8 = guest::cpu()->s[3];
    S4_8 = guest::cpu()->s[4];
    S5_8 = guest::cpu()->s[5];
    S6_8 = guest::cpu()->s[6];
    r2_7 = *gptr<u32>(r1);
    r0_10 = r0 + 0x158u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    guest::cpu()->s[2] = S2_8;
    guest::cpu()->s[3] = S3_8;
    guest::cpu()->s[4] = S4_8;
    guest::cpu()->s[5] = S5_8;
    guest::cpu()->s[6] = S6_8;
    call_005695e4(r0_10, 0x849f84u, r2_7, r3_8);  // (from the original)
    r3_9 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    S1_9 = guest::cpu()->s[1];
    S2_9 = guest::cpu()->s[2];
    S3_9 = guest::cpu()->s[3];
    S4_9 = guest::cpu()->s[4];
    S5_9 = guest::cpu()->s[5];
    S6_9 = guest::cpu()->s[6];
    r2_8 = *gptr<u32>(r1);
    r0_11 = r0 + 0x180u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    guest::cpu()->s[1] = S1_9;
    guest::cpu()->s[2] = S2_9;
    guest::cpu()->s[3] = S3_9;
    guest::cpu()->s[4] = S4_9;
    guest::cpu()->s[5] = S5_9;
    guest::cpu()->s[6] = S6_9;
    call_005695e4(r0_11, 0x849f68u, r2_8, r3_9);  // (from the original)
    r3_10 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
    S1_10 = guest::cpu()->s[1];
    S2_10 = guest::cpu()->s[2];
    S3_10 = guest::cpu()->s[3];
    S4_10 = guest::cpu()->s[4];
    S5_10 = guest::cpu()->s[5];
    S6_10 = guest::cpu()->s[6];
    r2_9 = *gptr<u32>(r1);
    r0_12 = r0 + 0x1a8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    guest::cpu()->s[1] = S1_10;
    guest::cpu()->s[2] = S2_10;
    guest::cpu()->s[3] = S3_10;
    guest::cpu()->s[4] = S4_10;
    guest::cpu()->s[5] = S5_10;
    guest::cpu()->s[6] = S6_10;
    call_005695e4(r0_12, 0x849f4cu, r2_9, r3_10);  // (from the original)
    r3_11 = guest::cpu()->r[3];
    S0_11 = guest::cpu()->s[0];
    S1_11 = guest::cpu()->s[1];
    S2_11 = guest::cpu()->s[2];
    S3_11 = guest::cpu()->s[3];
    S4_11 = guest::cpu()->s[4];
    S5_11 = guest::cpu()->s[5];
    S6_11 = guest::cpu()->s[6];
    r2_10 = *gptr<u32>(r1);
    r0_13 = r0 + 0x1d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    guest::cpu()->s[1] = S1_11;
    guest::cpu()->s[2] = S2_11;
    guest::cpu()->s[3] = S3_11;
    guest::cpu()->s[4] = S4_11;
    guest::cpu()->s[5] = S5_11;
    guest::cpu()->s[6] = S6_11;
    call_005695e4(r0_13, 0x849f30u, r2_10, r3_11);  // (from the original)
    r3_12 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    S1_12 = guest::cpu()->s[1];
    S2_12 = guest::cpu()->s[2];
    S3_12 = guest::cpu()->s[3];
    S4_12 = guest::cpu()->s[4];
    S5_12 = guest::cpu()->s[5];
    S6_12 = guest::cpu()->s[6];
    r2_11 = *gptr<u32>(r1);
    r0_14 = r0 + 0x1f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    guest::cpu()->s[1] = S1_12;
    guest::cpu()->s[2] = S2_12;
    guest::cpu()->s[3] = S3_12;
    guest::cpu()->s[4] = S4_12;
    guest::cpu()->s[5] = S5_12;
    guest::cpu()->s[6] = S6_12;
    call_005695e4(r0_14, 0x849f10u, r2_11, r3_12);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    S0_13 = guest::cpu()->s[0];
    S1_13 = guest::cpu()->s[1];
    S2_13 = guest::cpu()->s[2];
    S3_13 = guest::cpu()->s[3];
    S4_13 = guest::cpu()->s[4];
    S5_13 = guest::cpu()->s[5];
    S6_13 = guest::cpu()->s[6];
    *gptr<u8>(r0 + 0xdeu) = u8(1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_13;
    guest::cpu()->s[1] = S1_13;
    guest::cpu()->s[2] = S2_13;
    guest::cpu()->s[3] = S3_13;
    guest::cpu()->s[4] = S4_13;
    guest::cpu()->s[5] = S5_13;
    guest::cpu()->s[6] = S6_13;
    call_0026b500(r0, r1_3, r2_12, r3_13);
    r1_4 = guest::cpu()->r[1];
    S0_14 = guest::cpu()->s[0];
    S1_14 = guest::cpu()->s[1];
    *gptr<u32>(r0 + 0xd0u) = u32(0x100043fu);  // (from the original)
    *gptr<u8>(r0 + 0xdbu) = u8(1u);  // (from the original)
    *gptr<u8>(r0 + 0xdcu) = u8(1u);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_14;
    guest::cpu()->s[1] = S1_14;
    return 0x100043fu;  // (from the original)
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u32 r1_7 = 0;
    u32 r0_7 = 0;
    u32 r1_8 = 0;
    u32 r0_8 = 0;
    u32 r1_9 = 0;
    u32 r0_9 = 0;
    u32 r1_10 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (u32(arg0->byte_de) == 0) {
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    arg0->byte_de = u8(r0_1);
    if (r0_1 != 0) {
        r1_1 = arg0->word_f8;
        r0_2 = r0 + 0x20u;  // (from the original)
        call_00569774(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r0 + 0x120u);  // (from the original)
        r0_3 = r0 + 0x48u;  // (from the original)
        call_00569774(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = *gptr<u32>(r0 + 0x148u);  // (from the original)
        r0_4 = r0 + 0x70u;  // (from the original)
        call_00569774(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = *gptr<u32>(r0 + 0x170u);  // (from the original)
        r0_5 = r0 + 0x98u;  // (from the original)
        call_00569774(r0_5, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        *gptr<u32>(r0 + 0xccu) = u32(0x1000445u);  // (from the original)
        *gptr<u8>(r0 + 0xdau) = u8(1u);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        return 0x1000445u;  // (from the original)
    }
    r1_6 = *gptr<u32>(r0 + 0x198u);  // (from the original)
    r0_6 = r0 + 0x20u;  // (from the original)
    call_00569774(r0_6, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = *gptr<u32>(r0 + 0x1c0u);  // (from the original)
    r0_7 = r0 + 0x48u;  // (from the original)
    call_00569774(r0_7, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = *gptr<u32>(r0 + 0x1e8u);  // (from the original)
    r0_8 = r0 + 0x70u;  // (from the original)
    call_00569774(r0_8, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_9 = *gptr<u32>(r0 + 0x210u);  // (from the original)
    r0_9 = r0 + 0x98u;  // (from the original)
    call_00569774(r0_9, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0xccu) = u32(0x1000444u);  // (from the original)
    *gptr<u8>(r0 + 0xdau) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    return 0x1000444u;  // (from the original)
}

}  // namespace d_0026b500
GUEST_EXPORT(0x0026b500, d_0026b500::f_0026b500);

// f_0026d328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026d328 {

inline constexpr guest::Function<0x002b8958, u32(u32, u32, u32, u32)> call_002b8958;  // (from the original)
inline constexpr guest::Function<0x002b89ec, u32(u32, u32, u32, u32)> call_002b89ec;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;  // (from the original)
inline constexpr guest::Function<0x00724578, u32(u32, u32, u32, u32)> call_00724578;  // (from the original)

u32 f_0026d328(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r10 = guest::cpu()->r[10];
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_1 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r4 = 0u;
    r6 = r0;
    r10 = r4;
    r7 = r0 + 0x8400u;  // (from the original)
    do {
L_26d33c:;
        zf_1 = u32(*gptr<u8>(r7 + 0x31u)) == 0;  // (from the original)
        if (zf_1) {
            r1_1 = 0xdbu;  // (from the original)
        } else {
            r1_1 = 0xe5u;  // (from the original)
        }
        r1_2 = r4 * r1_1;
        r0_1 = r6 + (r1_2 << 2);
        if (zf_1) {
            r5_1 = r0_1 + 0x890u;  // (from the original)
        } else {
            r5_1 = r0_1 + 0x4410u;  // (from the original)
        }
        r0_2 = call_002fb94c(r0_1, r1_2, r2, guest::cpu()->r[3]);
        r0_3 = r0_2 + 0x6bd0u;  // (from the original)
        r0_4 = call_00724424(r0_3, r4, 0u, guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r0_5 = call_002fcaf4(r0_4, r1_3, r2_1, guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        if (!(r0_5 == 0)) {
            r0_6 = call_002b8958(r5_1, 0u, r2_2, guest::cpu()->r[3]);
            r1_5 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            *gptr<u8>(r5_1 + 0xd9u) = u8(r10);  // (from the original)
        } else {
            r0_7 = call_002fb94c(r0_5, r1_4, r2_2, guest::cpu()->r[3]);
            r2_3 = guest::cpu()->r[2];
            r0_8 = r0_7 + 0x6bd0u;  // (from the original)
            r0_9 = call_00724578(r0_8, r4, r2_3, guest::cpu()->r[3]);
            r0_6 = call_002b89ec(r5_1, r0_4, r0_9, guest::cpu()->r[3]);
            r1_5 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    return r0_6;
}

}  // namespace d_0026d328
GUEST_EXPORT(0x0026d328, d_0026d328::f_0026d328);

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
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    zf_1 = u32(arg0->byte_8431) == 0;
    if (zf_1) {
        r2_1 = 0xdbu;  // (from the original)
    } else {
        r2_1 = 0xe5u;  // (from the original)
    }
    r1_1 = r1 * r2_1;
    r0_1 = r0 + (r1_1 << 2);
    if (zf_1) {
        r5_1 = r0_1 + 0x890u;  // (from the original)
    } else {
        r5_1 = r0_1 + 0x4410u;  // (from the original)
    }
    r0_2 = call_002fb94c(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r0_3 = r0_2 + 0x6bd0u;  // (from the original)
    r0_4 = call_00724424(r0_3, r1, 0u, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_5 = call_002fcaf4(r0_4, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_5 != 0) {
        call_002b8958(r5_1, 0u, r2_3, guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        *gptr<u8>(r5_1 + 0xd9u) = u8(0u);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    r0_6 = call_002fb94c(r0_5, r1_3, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r0_7 = r0_6 + 0x6bd0u;  // (from the original)
    r0_8 = call_00724578(r0_7, r1, r2_4, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002b89ec(r5_1, r0_4, r0_8, guest::cpu()->r[3]);
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    if (u32(arg0->byte_8431) != 0) {
        r0_1 = r0 + (r1 * 0xe5u << 2) + 0x4410u;  // (from the original)
        r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x60u);  // (from the original)
        return guest::call_address<u32>(r1_1, r0_1, r1_1, 0xe5u, guest::cpu()->r[3]);  // (from the original)
    }
    r1_2 = r0 + (r1 * 0xdbu << 2);  // (from the original)
    r0_2 = r1_2 + 0x890u;  // (from the original)
    r1_3 = *gptr<u32>(*gptr<u32>(r1_2 + 0x890u) + 0x60u);  // (from the original)
    return guest::call_address<u32>(r1_3, r0_2, r1_3, 0xdbu, guest::cpu()->r[3]);  // (from the original)
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
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = 0u;
    r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_002f74e0(8u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r4_1;
    }
    r0_3 = call_0030b654(r1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r4_1;
    }
    r0_4 = call_0076a280(r1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r4_1 = r0_4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_0026e2d8
GUEST_EXPORT(0x0026e2d8, d_0026e2d8::f_0026e2d8);

// f_0026e410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026e410 {

inline guest::global<u32, 0x008791b4> global_008791b4;  // (from the original)
inline constexpr guest::Function<0x00817bd0, u32(u32, u32, u32, u32)> call_00817bd0;  // (from the original)

u32 f_0026e410(u32 r0) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r1_1 = *global_008791b4;
    r2_1 = *gptr<u32>(0x8791b4u + 4);  // (from the original)
    call_00817bd0(r0, r1_1, r2_1, guest::cpu()->r[3]);
    r0_1 = r0 + 0x4000u;  // (from the original)
    *gptr<u8>(r0_1 + 0x7du) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x29u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x1adu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x3b9u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x2ddu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x289u) = u8(0u);  // (from the original)
    *gptr<u8>(0x8434u + r0) = u8(1u);  // (from the original)
    r0_2 = *gptr<u32>(r0 + 0x840cu);  // (from the original)
    r1_2 = u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_2 + 0xb7u) = u8(r1_2);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_2;
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
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = r0 + 0x82f0u;  // (from the original)
    r1_1 = arg0->word_83a8;
    if (r1_1 == 0x2f5bb0u) {  // (from the original)
        if (0x2f5bb0u == 0) {  // (from the original)
            res_1 = arg0->word_83ac & 1u;
            if (res_1 == 0) {
                r0_2 = *gptr<u32>(r4_1 + 0xd4u) & ~8u;  // (from the original)
                *gptr<u32>(r4_1 + 0xd4u) = u32(r0_2);  // (from the original)
                guest::cpu()->r[13] += 8u;
                guest::cpu()->r[1] = r1_1;
                return r0_2;
            }
        }
        res_2 = *gptr<u32>(r4_1 + 0xbcu);  // (from the original)
        if (res_2 == 0) {
            r0_2 = *gptr<u32>(r4_1 + 0xd4u) & ~8u;  // (from the original)
            *gptr<u32>(r4_1 + 0xd4u) = u32(r0_2);  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            return r0_2;
        }
    }
    r0_1 = call_007237e0(r4_1, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = *gptr<u32>(r4_1 + 0x104u) == 0;  // (from the original)
    }
    if (!zf_1) {
        call_0029aeac(r4_1, 1u, 0x1000402u, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r0_2 = *gptr<u32>(r4_1 + 0xd4u) & ~8u;  // (from the original)
        *gptr<u32>(r4_1 + 0xd4u) = u32(r0_2);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    call_0029b5fc(r4_1, r1_2, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = *gptr<u32>(r4_1 + 0xd4u) & ~8u;  // (from the original)
    *gptr<u32>(r4_1 + 0xd4u) = u32(r0_2);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
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
    u32 r6_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6_1 = r0 + 0x8400u;  // (from the original)
    r2_1 = r1 * 0xe5u;  // (from the original)
    r1_1 = r1 * 0xdbu;  // (from the original)
    r2_2 = r0 + (r2_1 << 2);
    r5_1 = r0 + (r1_1 << 2);
    r4_1 = r2_2 + 0x4410u;  // (from the original)
    if (u32(arg0->byte_8431) == 0) {
        r0_1 = r5_1 + 0x890u;  // (from the original)
    } else {
        r0_1 = r4_1;
    }
    r0_2 = call_0071d090(r0_1, r1_1, r2_2, 0xdbu);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        if (u32(*gptr<u8>(r6_1 + 0x31u)) == 0) {  // (from the original)
            r0_3 = r5_1 + 0x890u;  // (from the original)
        } else {
            r0_3 = r4_1;
        }
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return call_002b8fb0(r0_3, r2, r2_3, r3_1);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_2;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_840c;
    if (r0_1 != 0) {
        r1_1 = arg0->word_190;
        call_004b6dc8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0_2 = r0 + 0x2bcu;  // (from the original)
    call_00132364(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = r0 + 0x504u;  // (from the original)
    call_00132364(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_4 = r0 + 0x24u;  // (from the original)
    call_001323b4(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_5 = r0 + 0x170u;  // (from the original)
    call_001323b4(r0_5, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_6 = r0 + 0x82f0u;  // (from the original)
    call_002f6c78(r0_6, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_6;
    return 1u;
}

}  // namespace d_0026f6fc
GUEST_EXPORT(0x0026f6fc, d_0026f6fc::f_0026f6fc);

// f_0026f8a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026f8a8 {

inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x005b48b4, u32(u32, u32, u32, u32)> call_005b48b4;  // (from the original)
inline constexpr guest::Function<0x0076c590, u32(u32, u32, u32, u32)> call_0076c590;  // (from the original)

u32 f_0026f8a8(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fcaf4(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    r0_2 = call_005b48b4(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    r0_3 = call_0076c590(r1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_0026f8a8
GUEST_EXPORT(0x0026f8a8, d_0026f8a8::f_0026f8a8);

// f_0026f9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026f9c4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_0026f9c4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    zf_1 = r1 == 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (!zf_1) {
        zf_1 = r1 == 1u;
    }
    r4 = r0;
    if (zf_1) {
        goto L_26fa10;
    }
    zf_2 = r1 == 6u;
    if (!zf_2) {
        zf_2 = r1 == 7u;
    }
    if (!zf_2) {
        zf_2 = r1 == 9u;
    }
    if (zf_2) {
        goto L_26fa10;
    }
    r0_1 = r4 + 0x2bcu;  // (from the original)
    r0_2 = call_00567e24(r0_1, 0x26fa28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r5 = r0_2;
L_26f9f8:;
    r0_3 = r4 + 0x504u;  // (from the original)
    r0_4 = call_00567e24(r0_3, 0x26fa4cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_5 = r0_4 & r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_5;
L_26fa10:;
    r0_6 = r4 + 0x2bcu;  // (from the original)
    r0_7 = call_00567e24(r0_6, 0x26fa6cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r5 = r0_7;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(1u);
    r0_2 = r0_1 + 0x6bd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002bf9cc(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
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

inline guest::global<u32, 0x008791dc> global_008791dc;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 ea_1 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_16 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r7_1 = 0;
    u32 r6_1 = 0;
    u32 r1_18 = 0;
    u32 r7_2 = 0;
    u32 r6_2 = 0;
    u32 r9_1 = 0;
    u32 r8_1 = 0;
    u32 r1_19 = 0;
    u32 r3_19 = 0;
    u32 r5_1 = 0;
    u32 r1_20 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r1_21 = 0;
    u32 r0_46 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r3_1 = r0 + 0xcu;  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    r2_1 = *gptr<u32>(0x8791dcu + 4);  // (from the original)
    arg0->word_c = u32(*global_008791dc);
    arg0->word_10 = u32(r2_1);
    arg0->word_14 = u32(0u);
    arg0->byte_18 = u8(0u);
    arg0->word_1c = u32(0u);
    arg0->word_0 = u32(0x8ef3acu);  // (from the original)
    arg0->word_20 = u32(0u);
    r0_1 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00125e3c(r0_1, 0x8ef3acu, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00125e3c(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_001207d8(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_001207d8(r0_7, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00125aec(r0_9, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = r0_10 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00125aec(r0_11, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_13 = r0_12 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_00125aec(r0_13, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    ea_1 = r0_14 + 0x28u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    r0_15 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_16 = call_00125aec(r0_15, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_17 = r0_16 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_00125aec(r0_17, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_19 = r0_18 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_00125aec(r0_19, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_21 = r0_20 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_00125aec(r0_21, r1_10, r2_11, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_23 = r0_22 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_00125aec(r0_23, r1_11, r2_12, r3_12);
    r0_25 = r0_24 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_00301d0c(r0_25, 0x2b9440u, 0x36cu, 0x10u);  // (from the original)
    r0_27 = r0_26 + 0x36c0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_00301d0c(r0_27, 0x2d00bcu, 0x130u, 3u);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_29 = r0_28 + 0x390u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_30 = call_002d00bc(r0_29, r1_12, r2_13, r3_13);
    r0_31 = r0_30 + 0x130u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_32 = call_00301d0c(r0_31, 0x3283e4u, 0x394u, 0x10u);  // (from the original)
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_33 = r0_32 + 0x3940u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_34 = call_002cdcb0(r0_33, r1_13, r2_14, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_35 = r0_34 + 0x1e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_36 = call_0032fd1c(r0_35, r1_14, r2_15, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_37 = r0_36 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_38 = call_0022c53c(r0_37, r1_15, r2_16, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_39 = r0_38 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_40 = call_0022c53c(r0_39, r1_16, r2_17, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_41 = r0_40 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_42 = call_0029b7c0(r0_41, r1_17, r2_18, r3_18);
    r0_43 = r0_42 - 0x82f0u;  // (from the original)
    r7_1 = 0x8408u | u32(s32(0x8408u) >> 0xd);  // (from the original)
    r6_1 = r7_1 + 4u;
    *gptr<u32>(0x8408u + r0_43) = u32(0u);  // (from the original)
    r1_18 = r6_1 | u32(s32(r6_1) >> 0xd);  // (from the original)
    *gptr<u32>(r7_1 + r0_43) = u32(0u);
    *gptr<u32>(r6_1 + r0_43) = u32(0u);
    *gptr<u32>(r1_18 + r0_43) = u32(0u);
    *gptr<u8>(r1_18 + 4u + r0_43) = u8(0xau);  // (from the original)
    *gptr<u8>(r1_18 + 5u + r0_43) = u8(0u);
    r7_2 = r1_18 + 0x14u;  // (from the original)
    r6_2 = r1_18 + 0x18u;  // (from the original)
    *gptr<u32>((r1_18 | u32(s32(r1_18) >> 0xc)) + r0_43) = u32(0u);  // (from the original)
    r9_1 = ~0u;
    r8_1 = r0_43 + 0x8424u;  // (from the original)
    *gptr<u32>(r0_43 + 0x8420u) = u32(r9_1);  // (from the original)
    r1_19 = r1_18 + 0x1cu;  // (from the original)
    *gptr<u32>(r8_1) = u32(0u);
    *gptr<u32>(r7_2 + r0_43) = u32(0u);
    *gptr<u32>(r6_2 + r0_43) = u32(0u);
    *gptr<u8>(r1_19 + r0_43) = u8(0u);
    r3_19 = r1_19 | u32(s32(r1_19) >> 0xe);  // (from the original)
    *gptr<u8>((r1_19 | u32(s32(r1_19) >> 5)) + r0_43) = u8(0u);
    r5_1 = r1_19 | u32(s32(r1_19) >> 0xd);  // (from the original)
    *gptr<u8>(r3_19 + r0_43) = u8(0u);
    *gptr<u8>(r1_19 + 3u + r0_43) = u8(1u);
    *gptr<u8>(r5_1 + r0_43) = u8(0u);
    r1_20 = r0_43 + 0x8436u;  // (from the original)
    r0_44 = r0_43 + 0x845cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_45 = call_003083bc(r0_44, r1_20, 0x13u, r3_19);  // (from the original)
    r1_21 = guest::cpu()->r[1];
    r0_46 = r0_45 - 0x845cu;  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_21;
    guest::cpu()->r[13] = r13;
    return r0_46;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r4_1 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_16 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_18 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_19 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_20 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_21 = 0;
    u32 r0_47 = 0;
    r13 = r13 - 8;
    arg0->word_0 = u32(0x8ef3acu);  // (from the original)
    ea_1 = r0 + 0x82f0u;  // (from the original)
    arg0->word_82f0 = u32(0x8f08acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f7710(ea_1, 0x8f08acu, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0022c5d8(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r0_3 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0022c5d8(r0_4, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r0_5 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_0022c5d8(r0_6, r1_3, r2_3, r3_3);
    r3_4 = guest::cpu()->r[3];
    r2_4 = 0x8f2a0cu + 0x10u;  // (from the original)
    *gptr<u32>(r0_7 - 0x1d4u) = u32(r2_4);  // (from the original)
    *gptr<u32>(r0_7 - 0x1e0u) = u32(0x8f2a0cu);  // (from the original)
    r0_8 = r0_7 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_0056988c(r0_8, 0x8f2a0cu, r2_4, r3_4);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = r0_9 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_0056988c(r0_10, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0056988c(r0_12, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_14 = r0_13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_0056988c(r0_14, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_0022c5d8(r0_16, r1_7, r2_8, r3_8);
    r0_18 = r0_17 - 0x3940u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_18, 0x3284d8u, 0x394u, 0x10u);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_19 = r0_17 - 0x3a70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_001ff9d8(r0_19, r1_8, r2_9, r3_9);
    r4_1 = r0_20 - 0x42e0u;  // (from the original)
    r0_21 = r0_20 - 0x390u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_21, 0x1ff9d4u, 0x130u, 3u);  // (from the original)
    r0_22 = r4_1 + 0x890u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_22, 0x2b950cu, 0x36cu, 0x10u);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_23 = r4_1 + 0x868u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_0056988c(r0_23, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_0056988c(r0_25, r1_10, r2_11, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_0056988c(r0_27, r1_11, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_30 = call_0056988c(r0_29, r1_12, r2_13, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_31 = r0_30 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_32 = call_0056988c(r0_31, r1_13, r2_14, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_33 = r0_32 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_34 = call_0056988c(r0_33, r1_14, r2_15, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_35 = r0_34 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_36 = call_0056988c(r0_35, r1_15, r2_16, r3_16);
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_37 = r0_36 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_38 = call_0056988c(r0_37, r1_16, r2_17, r3_17);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_39 = r0_38 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_40 = call_00567ef0(r0_39, r1_17, r2_18, r3_18);
    r1_18 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_41 = r0_40 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_42 = call_00567ef0(r0_41, r1_18, r2_19, r3_19);
    r1_19 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_43 = r0_42 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_44 = call_005bf744(r0_43, r1_19, r2_20, r3_20);
    r1_20 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_45 = r0_44 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_46 = call_005bf744(r0_45, r1_20, r2_21, r3_21);
    r1_21 = guest::cpu()->r[1];
    r0_47 = r0_46 - 0x24u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_21;
    guest::cpu()->r[13] = r13;
    return r0_47;
}

}  // namespace d_0026fe3c
GUEST_EXPORT(0x0026fe3c, d_0026fe3c::f_0026fe3c);
