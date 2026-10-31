// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_0027041c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027041c {

struct __attribute__((packed)) Object_0027041c_0 {
    u8 unknown_0[0x100];  // (not used here)
    u32 word_100;
    u32 word_104;
    u32 word_108;
    u8 byte_10c;
    u8 unknown_10d[0x1];  // (not used here)
    u8 byte_10e;
};
GUEST_OFFSET(Object_0027041c_0, word_100, 0x100);  // (from the original)
GUEST_OFFSET(Object_0027041c_0, word_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_0027041c_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_0027041c_0, byte_10c, 0x10c);  // (from the original)
GUEST_OFFSET(Object_0027041c_0, byte_10e, 0x10e);  // (from the original)


void f_0027041c(gptr<Object_0027041c_0> arg0) {
    arg0->word_108 = u32(~0u);
    arg0->word_100 = u32(0u);
    arg0->word_104 = u32(2u);
    arg0->byte_10c = u8(0u);
    arg0->byte_10e = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0027041c
GUEST_EXPORT(0x0027041c, d_0027041c::f_0027041c);

// f_00270550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00270550 {

struct __attribute__((packed)) Object_00270550_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00270550_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> call_001abcd4;  // (from the original)
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;  // (from the original)
inline constexpr guest::Function<0x0031e204, u32(u32, u32, u32, u32)> call_0031e204;  // (from the original)
inline constexpr guest::Function<0x004edd6c, u32(u32, u32, u32, u32)> call_004edd6c;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ef50c, u32(u32, u32, u32, u32)> call_004ef50c;  // (from the original)

u32 f_00270550(gptr<Object_00270550_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 ea_3 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r0_13 = 0;
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_0 = u32(0x8f8c1cu);  // (from the original)
    r0_1 = r0 + 0x384u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_004edd6c(r0_1, 0x8f8c1cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 - 0x384u) = u32(0x8ed6acu);  // (from the original)
    r0_3 = r0_2 - 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0031e204(r0_3, 0x8ed6acu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_5 = r0_4 - 0x2b0u;  // (from the original)
    r5_1 = ~0u;
    ea_1 = r0_5 + 0x274u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r5_1);
    ea_2 = r0_5 + 0x26cu;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    *gptr<u32>(ea_2 + 4) = u32(r5_1);
    r1_1 = r0_5 + 0x264u;  // (from the original)
    r0_6 = r0_5 + 0x15cu;  // (from the original)
    *gptr<u32>(r1_1) = u32(0u);
    *gptr<u32>(r1_1 + 4) = u32(r5_1);
    guest::cpu()->r[13] = r13;
    r0_7 = call_00317e2c(r0_6, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = r0_7 - 0x18u;  // (from the original)
    ea_3 = r0_8 + 0x10u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(ea_3 + 4) = u32(r5_1);
    r1_2 = r0_8 + 8u;
    *gptr<u32>(r1_2) = u32(0u);
    *gptr<u32>(r1_2 + 4) = u32(r5_1);
    *gptr<u32>(r0_8) = u32(0u);
    *gptr<u32>(r0_8 + 4) = u32(r5_1);
    r4_1 = r0_8 - 0x144u;  // (from the original)
    *gptr<u32>(r4_1) = u32(0x8eb174u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001abcd4(r4_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_9 = r4_1 + 0xccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_004ef50c(r0_9, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_11 = r0_10 - 0x54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_004edd84(r0_11, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_13 = r0_12 - 0x78u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_13;
}

}  // namespace d_00270550
GUEST_EXPORT(0x00270550, d_00270550::f_00270550);

// f_002706ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002706ec {

struct __attribute__((packed)) Object_002706ec_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_002706ec_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002706ec_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)

u32 f_002706ec(gptr<Object_002706ec_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ef578u);  // (from the original)
    if (arg0->word_8 != 0) {
        r0_1 = r0 + 4u;
        call_002f747c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_2 = r0 + 4u;
    r0_3 = call_00317dec(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = r0_3 - 4u;
    guest::cpu()->r[13] += 8u;
    return r0_4;
}

}  // namespace d_002706ec
GUEST_EXPORT(0x002706ec, d_002706ec::f_002706ec);

// f_00270ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00270ce0 {

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)

u32 f_00270ce0(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x14u;  // (from the original)
    return call_002f73b8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00270ce0
GUEST_EXPORT(0x00270ce0, d_00270ce0::f_00270ce0);

// f_00270ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00270ce8 {

struct __attribute__((packed)) Object_00270ce8_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_00270ce8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00270ce8_0, word_20, 0x20);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> call_00317a50;  // (from the original)
inline constexpr guest::Function<0x00317a88, u32(u32, u32, u32, u32)> call_00317a88;  // (from the original)
inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32, u32)> call_00544a20;  // (from the original)
inline constexpr guest::Function<0x00544d8c, u32(u32, u32, u32, u32)> call_00544d8c;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x00712c08, u32(u32, u32, u32, u32)> call_00712c08;  // (from the original)

u32 f_00270ce8(gptr<Object_00270ce8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r10_1 = 0;
    u32 r8_1 = 0;
    u32 ea_1 = 0;
    u32 r9_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r2_7 = 0;
    u32 r1_2 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_8 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    r5_1 = r0 + 0x14u;  // (from the original)
    r13 = r13 - 0xc8u;  // (from the original)
    zf_1 = arg0->word_20 + 1u == 0;
    if (!zf_1) {
        zf_1 = arg0->word_1c == 0;
    }
    if (!zf_1) {
        r0_1 = 1u;
        goto L_270e2c;
    }
    r10_1 = *gptr<u32>(r0 + 8u);
    r8_1 = r0 + 4u;
    ea_1 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r13 + 0x2cu);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0x40u);  // (from the original)
    r9_1 = r13 + 0x20u;  // (from the original)
    r2_1 = *gptr<u32>(r13 + 0x24u) - 1u;  // (from the original)
    *gptr<u8>(0x40u + r2_1) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u8>(r13 + 0x2cu) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(0x904950u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00712c08(r1, r1, r2_1, 0x40u);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r2 == 0) {
        r4_1 = 0x881ba8u;  // (from the original)
    } else {
        r4_1 = 0x881ba4u;  // (from the original)
    }
    if (r3 == 0) {
        r7_1 = 0x881bb4u;  // (from the original)
    } else {
        r7_1 = 0x881bb0u;  // (from the original)
    }
    r0_3 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0054a644(r0_3, r9_1, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00544fec(r0_4, 0x881bb8u, r2_3, r3_2);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_00544fec(r0_5, r4_1, r2_4, r3_3);
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x9cu) = u32(r0_2);  // (from the original)
    r6_1 = r13 + 0x9cu;  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_00544a20(r0_6, r1_1, r2_5, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        r2_7 = *gptr<u32>(r0_6 + 4u);
        if (u32(*gptr<u8>(r13)) == 0) {
            r1_2 = 0u;
        } else {
            r1_2 = r13;
        }
        guest::cpu()->r[13] = r13;
        call_00544d8c(r6_1, r1_2, r2_7, r3_5);
        r2_6 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_00544fec(r0_6, r7_1, r2_6, r3_5);
    r1_3 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_8, r1_3, r2_8, r3_6);
    r1_4 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00317a50(r5_1, r1_4, r10_1, 0x80u);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_270e2c;
    }
    guest::cpu()->r[13] = r13;
    call_00317a88(r5_1, r8_1, 0u, 1u);
    r1 = guest::cpu()->r[1];
    r0_1 = 1u;
L_270e2c:;
    r13 = r13 + 0xc8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00270ce8
GUEST_EXPORT(0x00270ce8, d_00270ce8::f_00270ce8);

// f_00271290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00271290 {

struct __attribute__((packed)) Object_00271290_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x27f];  // (not used here)
    u32 word_2a4;
};
GUEST_OFFSET(Object_00271290_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00271290_0, word_2a4, 0x2a4);  // (from the original)

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> call_001ce934;  // (from the original)

u32 f_00271290(gptr<Object_00271290_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 zf_1 = 0;
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r2_3 = 0;
    u32 ea_2 = 0;
    u32 r4_2 = 0;
    u32 r3_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r2_4 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = arg0->word_2a4;
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r3_1 = u32(arg0->byte_24);
    r0_2 = 0u;
    r2_1 = r3_1 & 1u;
    if (r2_1 >= 2u) {
        r2_2 = r0 + 0x6cu;  // (from the original)
    } else {
        r2_2 = r0 + (r2_1 + (r2_1 << 5) << 3) + 0x6cu;  // (from the original)
    }
    zf_1 = *gptr<u32>(r2_2 + 0xcu) + 1u == 0;  // (from the original)
    if (!zf_1) {
        r2_2 = *gptr<u32>(r2_2 + 8u);
        zf_1 = r2_2 == 0;
    }
    if (!zf_1) {
        zf_1 = *gptr<u32>(r2_2 + 0x1cu) == 0;  // (from the original)
    }
    if (zf_1) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    ea_1 = r2_2 + 0x20u;  // (from the original)
    r4_1 = *gptr<u32>(ea_1);
    if (r4_1 == 0) {
        r2_3 = r0_2;
    } else {
        r2_3 = ea_1 + r4_1;
    }
    if (r2_3 == 0) {
        r0_2 = 0u;
        goto L_27130c;
    }
    ea_2 = r2_3 + 0x28u;  // (from the original)
    r4_2 = *gptr<u32>(ea_2);
    if (r4_2 != 0) {
        r0_2 = r4_2 + ea_2;
    }
L_27130c:;
    r3_2 = r3_1 & 1u;
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(7u);
    ea_4 = r0 + (r3_2 + (r3_2 << 2) << 2) + 0x44u;  // (from the original)
    r2_4 = *gptr<u32>(ea_4 + 4u);
    r1_1 = *gptr<u32>(ea_4);
    guest::cpu()->r[13] = r13;
    call_001ce934(r0_2, r1_1, r2_4, r1);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00271290
GUEST_EXPORT(0x00271290, d_00271290::f_00271290);

// f_00271c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00271c78 {

struct __attribute__((packed)) Object_00271c78_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_00271c78_0, byte_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x0013451c, u32(u32, u32, u32, u32)> call_0013451c;  // (from the original)
inline constexpr guest::Function<0x003280e0, u32(u32, u32, u32, u32)> call_003280e0;  // (from the original)
inline constexpr guest::Function<0x004df3e4, u32(u32, u32, u32, u32)> call_004df3e4;  // (from the original)
inline constexpr guest::Function<0x005676b8, u32(u32, u32, u32, u32)> call_005676b8;  // (from the original)
inline constexpr guest::Function<0x00724bf8, u32(u32, u32, u32, u32)> call_00724bf8;  // (from the original)

u32 f_00271c78(gptr<Object_00271c78_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8, float S9, float S10, float S11) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 res_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r3_3 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    float S8_1 = 0;
    float S9_1 = 0;
    float S10_1 = 0;
    float S11_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    float S8_2 = 0;
    float S9_2 = 0;
    float S10_2 = 0;
    float S11_2 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    float S7_3 = 0;
    float S8_3 = 0;
    float S9_3 = 0;
    float S10_3 = 0;
    float S11_3 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    r13 = r13 - 0x70u;  // (from the original)
    r3_1 = u32(arg0->byte_24) & 1u;
    r3_2 = r0 + (r3_1 + (r3_1 << 2) + (r3_1 << 5) << 2);
    res_1 = u32(*gptr<u8>(r3_2 + 0x2a8u));  // (from the original)
    zf_1 = res_1 == 0;
    if (!zf_1) {
        res_2 = r3_2 + 0x2acu;  // (from the original)
        zf_1 = res_2 == 0;
        r4 = res_2;
    }
    if (zf_1) {
        r0_1 = r0 + 0x27cu;  // (from the original)
        r13 = r13 + 0x70u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        guest::cpu()->s[7] = S7;
        guest::cpu()->s[8] = S8;
        guest::cpu()->s[9] = S9;
        guest::cpu()->s[10] = S10;
        guest::cpu()->s[11] = S11;
        return call_003280e0(r0_1, r1, r2, r3_2);
    }
    r0_2 = r0 + 0x27cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    guest::cpu()->s[8] = S8;
    guest::cpu()->s[9] = S9;
    guest::cpu()->s[10] = S10;
    guest::cpu()->s[11] = S11;
    r0_3 = call_00724bf8(r0_2, r1, r2, 0u);
    r1_1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_3 == 0) {
        r13 = r13 + 0x70u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_3;
    }
    S0_2 = std::bit_cast<float>(*gptr<u32>(r0_3));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r0_3 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x1c));  // (from the original)
    S8_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x20));  // (from the original)
    S9_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x24));  // (from the original)
    S10_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x28));  // (from the original)
    S11_1 = std::bit_cast<float>(*gptr<u32>(r0_3 + 0x2c));  // (from the original)
    r2_1 = r13 + 0x30u;  // (from the original)
    r1_2 = r13 + 0x30u;  // (from the original)
    r0_4 = r13;
    *gptr<u32>(r2_1) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r2_1 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r2_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r2_1 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r2_1 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r2_1 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r2_1 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    *gptr<u32>(r2_1 + 0x1c) = u32(std::bit_cast<u32>(S7_1));  // (from the original)
    *gptr<u32>(r2_1 + 0x20) = u32(std::bit_cast<u32>(S8_1));  // (from the original)
    *gptr<u32>(r2_1 + 0x24) = u32(std::bit_cast<u32>(S9_1));  // (from the original)
    *gptr<u32>(r2_1 + 0x28) = u32(std::bit_cast<u32>(S10_1));  // (from the original)
    *gptr<u32>(r2_1 + 0x2c) = u32(std::bit_cast<u32>(S11_1));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    guest::cpu()->s[8] = S8_1;
    guest::cpu()->s[9] = S9_1;
    guest::cpu()->s[10] = S10_1;
    guest::cpu()->s[11] = S11_1;
    call_0013451c(r0_4, r1_2, r2_1, r3_3);
    r2_2 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    S8_2 = guest::cpu()->s[8];
    S9_2 = guest::cpu()->s[9];
    S10_2 = guest::cpu()->s[10];
    S11_2 = guest::cpu()->s[11];
    *gptr<u16>(r13 + 0x60u) = u16(0xffffc000u);  // (from the original)
    r1_3 = *gptr<u32>(r13 + 0x60u);  // (from the original)
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    guest::cpu()->s[8] = S8_2;
    guest::cpu()->s[9] = S9_2;
    guest::cpu()->s[10] = S10_2;
    guest::cpu()->s[11] = S11_2;
    call_005676b8(r0_5, r1_3, r2_2, r3_4);
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    S6_3 = guest::cpu()->s[6];
    S7_3 = guest::cpu()->s[7];
    S8_3 = guest::cpu()->s[8];
    S9_3 = guest::cpu()->s[9];
    S10_3 = guest::cpu()->s[10];
    S11_3 = guest::cpu()->s[11];
    r1_4 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    guest::cpu()->s[6] = S6_3;
    guest::cpu()->s[7] = S7_3;
    guest::cpu()->s[8] = S8_3;
    guest::cpu()->s[9] = S9_3;
    guest::cpu()->s[10] = S10_3;
    guest::cpu()->s[11] = S11_3;
    r0_6 = call_004df3e4(r4, r1_4, r2_3, r3_5);
    r1_5 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    return r0_6;
}

}  // namespace d_00271c78
GUEST_EXPORT(0x00271c78, d_00271c78::f_00271c78);

// f_00271d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00271d0c {

struct __attribute__((packed)) Object_00271d0c_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_00271d0c_0, byte_24, 0x24);  // (from the original)

inline guest::global<u32, 0x00271d5c> global_00271d5c;  // (from the original)
inline constexpr guest::Function<0x0032821c, u32(u32, u32, u32, u32)> call_0032821c;  // (from the original)
inline constexpr guest::Function<0x004df2c8, u32(u32, u32, u32, u32)> call_004df2c8;  // (from the original)

u32 f_00271d0c(gptr<Object_00271d0c_0> arg0, float S0, float S1, float S2, float S3) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    float S3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = u32(arg0->byte_24) & 1u;
    r2_2 = r0 + (r2_1 + (r2_1 << 2) + (r2_1 << 5) << 2);
    r3_1 = u32(*gptr<u8>(r2_2 + 0x2a8u));  // (from the original)
    zf_1 = r3_1 == 0;
    if (!zf_1) {
        res_1 = r2_2 + 0x2acu;  // (from the original)
        zf_1 = res_1 == 0;
        r2_2 = res_1;
    }
    if (zf_1) {
        guest::cpu()->r[13] += 8u;
        r0_1 = r0 + 0x27cu;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        return call_0032821c(r0_1, guest::cpu()->r[1], r2_2, r3_1);
    }
    S3_1 = std::bit_cast<float>(*global_00271d5c);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S0;
    guest::cpu()->s[2] = S0;
    guest::cpu()->s[3] = S3_1;
    call_004df2c8(r2_2, guest::cpu()->r[1], r2_2, r3_1);
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[1] = S1_1;
    return 1u;
}

}  // namespace d_00271d0c
GUEST_EXPORT(0x00271d0c, d_00271d0c::f_00271d0c);

// f_00271e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00271e30 {

struct __attribute__((packed)) Object_00271e30_0 {
    u8 unknown_0[0x29c];  // (not used here)
    u32 word_29c;
    u32 word_2a0;
    u32 word_2a4;
    u8 unknown_2a8[0x128];  // (not used here)
    u32 word_3d0;
    u32 word_3d4;
    u32 word_3d8;
    u32 word_3dc;
};
GUEST_OFFSET(Object_00271e30_0, word_29c, 0x29c);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_2a0, 0x2a0);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_2a4, 0x2a4);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_3d0, 0x3d0);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_3d4, 0x3d4);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_3d8, 0x3d8);  // (from the original)
GUEST_OFFSET(Object_00271e30_0, word_3dc, 0x3dc);  // (from the original)


u32 f_00271e30(gptr<Object_00271e30_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r0_1 = 0;
    S0_1 = std::bit_cast<float>(*gptr<u32>(r13));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r13 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r13 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r13 + 0xc));  // (from the original)
    r0_1 = r0 + 0x3d0u;  // (from the original)
    arg0->word_29c = u32(r1);
    arg0->word_2a0 = u32(r2);
    arg0->word_2a4 = u32(r3);
    arg0->word_3d0 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_3d4 = u32(std::bit_cast<u32>(S1_1));
    arg0->word_3d8 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_3dc = u32(std::bit_cast<u32>(S3_1));
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_00271e30
GUEST_EXPORT(0x00271e30, d_00271e30::f_00271e30);

// f_00272300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00272300 {

struct __attribute__((packed)) Object_00272300_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x4ab];  // (not used here)
    u32 word_4d0;
};
GUEST_OFFSET(Object_00272300_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00272300_0, word_4d0, 0x4d0);  // (from the original)

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> call_001ce934;  // (from the original)
inline constexpr guest::Function<0x00712c28, u32(u32, u32, u32, u32)> call_00712c28;  // (from the original)
inline constexpr guest::Function<0x00712c38, u32(u32, u32, u32, u32)> call_00712c38;  // (from the original)

u32 f_00272300(gptr<Object_00272300_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4_1 = r0 + 0x4d0u;  // (from the original)
    r1_1 = arg0->word_4d0;
    if (r1_1 == 0) {
        goto L_2723bc;
    }
    r5_1 = 0u;
    r2_1 = u32(arg0->byte_24) & 1u;
    if (r2_1 >= 2u) {
        r0_1 = r0 + 0x60u;  // (from the original)
        goto L_272340;
    }
    r3 = r2_1 + (r2_1 << 2);
    r0_1 = r0 + (r3 + (r2_1 << 6) << 2) + 0x60u;  // (from the original)
L_272340:;
    zf_1 = *gptr<u32>(r0_1 + 0xcu) + 1u == 0;  // (from the original)
    if (!zf_1) {
        r0_1 = *gptr<u32>(r0_1 + 8u);
        zf_1 = r0_1 == 0;
    }
    if (!zf_1) {
        zf_1 = *gptr<u32>(r0_1 + 0x1cu) == 0;  // (from the original)
    }
    if (zf_1) {
        goto L_2723bc;
    }
    ea_1 = r0_1 + 0x20u;  // (from the original)
    r2_2 = *gptr<u32>(ea_1);
    if (r2_2 == 0) {
        r0_2 = r5_1;
    } else {
        r0_2 = ea_1 + r2_2;
    }
    if (r0_2 == 0) {
        r5_1 = 0u;
        goto L_272384;
    }
    ea_2 = r0_2 + 0x28u;  // (from the original)
    r2_2 = *gptr<u32>(ea_2);
    if (r2_2 != 0) {
        r5_1 = r2_2 + ea_2;
    }
L_272384:;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00712c28(r1_1, r1_1, r2_2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_4 = *gptr<u32>(r4_1);
    guest::cpu()->r[13] = r13;
    r0_5 = call_00712c38(r0_4, r1_2, r2_3, r3_1);
    *gptr<u32>(r13) = u32(0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001ce934(r5_1, r0_5, r0_3, r1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 1u;
L_2723bc:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00272300
GUEST_EXPORT(0x00272300, d_00272300::f_00272300);

// f_002738b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002738b8 {

inline guest::global<u32, 0x00886d68> global_00886d68;  // (from the original)
inline constexpr guest::Function<0x00817cd8, u32(u32, u32, u32, u32)> call_00817cd8;  // (from the original)

u32 f_002738b8() {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = *global_00886d68;
    r2_1 = *gptr<u32>(0x886d68u + 4);  // (from the original)
    call_00817cd8(guest::cpu()->r[0], r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_002738b8
GUEST_EXPORT(0x002738b8, d_002738b8::f_002738b8);

// f_00273a9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00273a9c {

struct __attribute__((packed)) Object_00273a9c_0 {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(Object_00273a9c_0, word_2be8, 0x2be8);  // (from the original)


u32 f_00273a9c(gptr<Object_00273a9c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    ea_1 = r0 + ((r1 - arg0->word_2be8) * 0xadu << 2) + 0xfa0u;  // (from the original)
    r1_1 = *gptr<u32>(*gptr<u32>(ea_1) + 0x60u);  // (from the original)
    return guest::call_address<u32>(r1_1, ea_1, r1_1, 0xadu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00273a9c
GUEST_EXPORT(0x00273a9c, d_00273a9c::f_00273a9c);

// f_00273b30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00273b30 {

struct __attribute__((packed)) Object_00273b30_0 {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(Object_00273b30_0, word_2be8, 0x2be8);  // (from the original)

inline constexpr guest::Function<0x001df3d4, u32(u32, u32, u32, u32)> call_001df3d4;  // (from the original)
inline constexpr guest::Function<0x002e3568, u32(u32, u32, u32, u32)> call_002e3568;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x006f51f8, u32(u32, u32, u32, u32)> call_006f51f8;  // (from the original)

u32 f_00273b30(gptr<Object_00273b30_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r3_1 = 0x2bf1u;  // (from the original)
    r2_1 = arg0->word_2be8;
    r0_1 = u32(*gptr<u8>(r3_1 + r0));
    r5_1 = r1 - r2_1;
    if (r0_1 == 0) {
        goto L_273b8c;
    }
    r0_2 = call_002fb918(r0_1, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = call_001df3d4(r0_2, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_273b8c;
    }
    r0_4 = call_006f51f8(r0_3, r5_1, r2_1, r3_1);
    r3_1 = guest::cpu()->r[3];
    r2_1 = r0 + (r5_1 * 0xadu << 2) + 0xfa0u;  // (from the original)
    r1 = r0_4;
    *gptr<u32>(r2_1 + 0x2b0u) = u32(r1);  // (from the original)
L_273b8c:;
    r0_5 = r0 + (r5_1 * 0xadu << 2);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_6 = r0_5 + 0xfa0u;  // (from the original)
    return call_002e3568(r0_6, r1, r2_1, r3_1);
}

}  // namespace d_00273b30
GUEST_EXPORT(0x00273b30, d_00273b30::f_00273b30);

// f_00273ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00273ba8 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_00273ba8(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x26cu;  // (from the original)
    r0_2 = call_00568c10(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_3 = call_001323bc(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = r0 + 0x26cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_3, r1_2, 1u, guest::cpu()->r[3]);
}

}  // namespace d_00273ba8
GUEST_EXPORT(0x00273ba8, d_00273ba8::f_00273ba8);

// f_0027430c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027430c {

struct __attribute__((packed)) Object_0027430c_0 {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(Object_0027430c_0, word_2be8, 0x2be8);  // (from the original)


u32 f_0027430c(gptr<Object_0027430c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    r2_1 = arg0->word_2be8;
    if (s32(r2_1) > s32(r1)) {
        r0_1 = r0 + 0xfa0u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r2_1 + 0xau <= r1) {  // (from the original)
        r0_2 = r0 + 0xfa0u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    r1_1 = (r1 - r2_1) * 0xadu;  // (from the original)
    r0_3 = r0 + (r1_1 << 2) + 0xfa0u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_0027430c
GUEST_EXPORT(0x0027430c, d_0027430c::f_0027430c);

// f_00274384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274384 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_00274384(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x24u;  // (from the original)
    return call_00567e24(r0_1, 0x886e00u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00274384
GUEST_EXPORT(0x00274384, d_00274384::f_00274384);

// f_00274394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274394 {

struct __attribute__((packed)) Object_00274394_0 {
    u8 unknown_0[0x2be8];  // (not used here)
    u32 word_2be8;
};
GUEST_OFFSET(Object_00274394_0, word_2be8, 0x2be8);  // (from the original)


u32 f_00274394(gptr<Object_00274394_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = (r1 - arg0->word_2be8) * 0xadu;  // (from the original)
    r0_1 = *gptr<u32>(r0 + (r1_1 << 2) + 0x1250u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00274394
GUEST_EXPORT(0x00274394, d_00274394::f_00274394);

// f_00274478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274478 {

inline guest::global<u32, 0x002744fc> global_002744fc;  // (from the original)
inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x006dce18, u32(u32, u32, u32, u32)> call_006dce18;  // (from the original)

u32 f_00274478(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    float S0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(*global_009506b0);
    if (r0_1 != 0xffu) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0_1;
    }
    r0_1 = *global_009506b4;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0_1;
    }
    guest::cpu()->s[0] = S0;
    r0_2 = call_002ff8b0(4u, r1, r2, guest::cpu()->r[3]);
    S0_1 = guest::cpu()->s[0];
    if (u32(*global_009506b0) == 0xffu) {  // (from the original)
        r2_1 = *global_009506b4;
    } else {
        r2_1 = 0u;
    }
    guest::cpu()->s[0] = S0_1;
    call_006dce18(r2_1, r0_2, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    res_1 = std::bit_cast<u32>(S0_2) + 0x40800000u;  // (from the original)
    if (res_1 != 0) {
        r0_3 = r0 + 0x430u;  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        return call_005697e0(r0_3, res_1, r2_2, guest::cpu()->r[3]);
    }
    r0_4 = r0 + 0x430u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    S0_3 = std::bit_cast<float>(*global_002744fc);
    guest::cpu()->s[0] = S0_3;
    return call_005697e0(r0_4, res_1, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_00274478
GUEST_EXPORT(0x00274478, d_00274478::f_00274478);

// f_00274500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274500 {

struct __attribute__((packed)) Object_00274500_0 {
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
GUEST_OFFSET(Object_00274500_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00274500_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00274500_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00274500_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00274500_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00274500_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00274500_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00274500_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00274500_0, word_20, 0x20);  // (from the original)

inline guest::global<u32, 0x00886d80> global_00886d80;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32, u32)> call_002cd444;  // (from the original)
inline constexpr guest::Function<0x002f915c, u32(u32, u32, u32, u32)> call_002f915c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00274500(gptr<Object_00274500_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r3_1 = 0;
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
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    r2_1 = *gptr<u32>(0x886d80u + 4);  // (from the original)
    r3_1 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*global_00886d80);
    arg0->word_10 = u32(r2_1);
    arg0->word_14 = u32(0u);
    arg0->byte_18 = u8(0u);
    arg0->word_1c = u32(0u);
    arg0->word_0 = u32(0x8ef6e0u);  // (from the original)
    arg0->word_20 = u32(0u);
    r0_1 = r0 + 0x24u;  // (from the original)
    r0_2 = call_001207d8(r0_1, 0x8ef6e0u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x248u;  // (from the original)
    r0_4 = call_00125e3c(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x14cu;  // (from the original)
    r0_6 = call_00125aec(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x28u;  // (from the original)
    r0_8 = call_00125aec(r0_7, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0x28u;  // (from the original)
    r0_10 = call_00125aec(r0_9, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = r0_10 + 0x28u;  // (from the original)
    r0_12 = call_00125aec(r0_11, r1_5, r2_6, r3_6);
    r3_7 = guest::cpu()->r[3];
    r0_13 = r0_12 + 0x28u;  // (from the original)
    r1_6 = r0_13 + 0x118u;  // (from the original)
    r0_14 = call_002cd444(r0_13, r1_6, 2u, r3_7);
    *gptr<u32>(r0_14) = u32(0x8ef284u);  // (from the original)
    *gptr<u32>(r0_14 + 0xe4u) = u32(0x8ef284u + 0x44u);  // (from the original)
    r0_15 = r0_14 + 0x118u;  // (from the original)
    r0_16 = call_00301d0c(r0_15, 0x2e0994u, 0x518u, 2u);  // (from the original)
    r0_17 = r0_16 + 0xa30u;  // (from the original)
    r0_18 = call_00301d0c(r0_17, 0x2e37acu, 0x2b4u, 0xau);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_19 = r0_18 + 0x1b08u;  // (from the original)
    r0_20 = call_002f915c(r0_19, r1_7, r2_7, r3_8);
    r0_21 = r0_20 - 0x2aa8u;  // (from the original)
    *gptr<u32>(0x2be8u + r0_21) = u32(0u);  // (from the original)
    *gptr<u32>(0x2be8u + 4u + r0_21) = u32(0u);  // (from the original)
    *gptr<u8>(0x2be8u + 8u + r0_21) = u8(0u);  // (from the original)
    *gptr<u8>(0x2be8u + 9u + r0_21) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x2be8u;  // (from the original)
    return r0_21;
}

}  // namespace d_00274500
GUEST_EXPORT(0x00274500, d_00274500::f_00274500);

// f_0027460c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027460c {

struct __attribute__((packed)) Object_0027460c_0 {
    u32 word_0;
    u8 unknown_4[0x2aa4];  // (not used here)
    u32 word_2aa8;
    u8 unknown_2aac[0x8];  // (not used here)
    u32 word_2ab4;
};
GUEST_OFFSET(Object_0027460c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0027460c_0, word_2aa8, 0x2aa8);  // (from the original)
GUEST_OFFSET(Object_0027460c_0, word_2ab4, 0x2ab4);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_0027460c(gptr<Object_0027460c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r4_1 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 ea_1 = 0;
    u32 r0_16 = 0;
    u32 r1_9 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_17 = 0;
    u32 r1_10 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_11 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_12 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_13 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_14 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_15 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_16 = 0;
    u32 r0_30 = 0;
    r13 = r13 - 8;
    arg0->word_0 = u32(0x8ef6e0u);  // (from the original)
    r1_1 = 0x8ee248u + 0x10u;  // (from the original)
    arg0->word_2aa8 = u32(0x8ee248u);  // (from the original)
    arg0->word_2ab4 = u32(r1_1);
    r0_1 = r0 + 0x2bbcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056988c(r0_1, r1_1, 0x8ee248u, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0056988c(r0_3, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056988c(r0_5, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0056988c(r0_7, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_0056988c(r0_9, r1_5, r2_4, r3_4);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0056988c(r0_11, r1_6, r2_5, r3_5);
    r1_7 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_0056988c(r0_13, r1_7, r2_6, r3_6);
    r4_1 = r0_14 - 0x2ac8u;  // (from the original)
    r0_15 = r0_14 - 0x1b28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_15, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    r1_8 = 0x8ef284u + 0x44u;  // (from the original)
    ea_1 = r4_1 + 0x458u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8ef284u);  // (from the original)
    r0_16 = ea_1 + 0x118u;  // (from the original)
    *gptr<u32>(ea_1 + 0xe4u) = u32(r1_8);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_16, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_17 = call_002f770c(ea_1, r1_9, r2_7, r3_7);
    r1_10 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_0056988c(r0_18, r1_10, r2_8, r3_8);
    r1_11 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_0056988c(r0_20, r1_11, r2_9, r3_9);
    r1_12 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_0056988c(r0_22, r1_12, r2_10, r3_10);
    r1_13 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_25 = call_0056988c(r0_24, r1_13, r2_11, r3_11);
    r1_14 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_27 = call_005bf744(r0_26, r1_14, r2_12, r3_12);
    r1_15 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_29 = call_00567ef0(r0_28, r1_15, r2_13, r3_13);
    r1_16 = guest::cpu()->r[1];
    r0_30 = r0_29 - 0x24u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_16;
    guest::cpu()->r[13] = r13;
    return r0_30;
}

}  // namespace d_0027460c
GUEST_EXPORT(0x0027460c, d_0027460c::f_0027460c);

// f_00274754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00274754 {

inline guest::global<u32, 0x0094fd4c> global_0094fd4c;  // (from the original)
inline constexpr guest::Function<0x0031ec78, u32(u32, u32, u32, u32)> call_0031ec78;  // (from the original)
inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_00274754(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0_1 = r0 + 0x2788u;  // (from the original)
    call_0031ec78(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r4 + 0x2ca5u;  // (from the original)
    r1_1 = *global_0094fd4c;
    if (r1_1 == 0) {
        goto L_27479c;
    }
    r2 = 1u;
    *gptr<u8>(r0_2) = u8(r2);
    *gptr<u32>(r4 + 0x654u) = u32(r1_1);  // (from the original)
    r0_3 = r4 + 0x170u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00567e24(r0_3, 0x2747c4u, r2, guest::cpu()->r[3]);  // (from the original)
L_27479c:;
    *gptr<u8>(r0_2) = u8(0u);
    r0_4 = r4 + 0x40cu;  // (from the original)
    call_00567e24(r0_4, 0x2747e4u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r0_3 = r4 + 0x170u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00567e24(r0_3, 0x2747c4u, r2, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00274754
GUEST_EXPORT(0x00274754, d_00274754::f_00274754);

// f_0027480c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027480c {


void f_0027480c(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r12_1 = 0;
    u32 r12_2 = 0;
    u32 res_1 = 0;
    r2 = 0u;
    do {
L_274810:;
        r3_1 = (r2 << 4) - r2;
        r2 = r2 + 1u;
        r3_2 = r0 + ((r3_1 << 3) - r3_1 << 3) + 0x8e0u;  // (from the original)
        r12_1 = *gptr<u32>(r3_2 + 0xd4u);  // (from the original)
        if (r1 == 0) {
            r12_2 = r12_1 & ~8u;
        } else {
            r12_2 = r12_1 | 8u;
        }
        res_1 = r2 - 0xau;  // (from the original)
        *gptr<u32>(r3_2 + 0xd4u) = u32(r12_2);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ 0xau) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    return;
}

}  // namespace d_0027480c
GUEST_EXPORT(0x0027480c, d_0027480c::f_0027480c);

// f_00275798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00275798 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x002f6d18, u32(u32, u32, u32, u32)> call_002f6d18;  // (from the original)
inline constexpr guest::Function<0x0031eb20, u32(u32, u32, u32, u32)> call_0031eb20;  // (from the original)

u32 f_00275798(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0_1 = r0 + 0x170u;  // (from the original)
    call_00132364(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (u32(*gptr<u8>(0x2ca5u + r5)) == 0) {  // (from the original)
        r0_2 = r5 + 0x40cu;  // (from the original)
        call_00132364(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_3 = r5 + 0x24u;  // (from the original)
    r0_4 = call_001323b4(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f6d18(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = 0u;
    do {
L_2757d0:;
        r0_5 = (r4 << 4) - r4;
        r0_6 = r5 + ((r0_5 << 3) - r0_5 << 3) + 0x684u;  // (from the original)
        call_001323b4(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xau));  // (from the original)
    r0_7 = r5 + 0x2400u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_8 = r0_7 + 0x388u;  // (from the original)
    return call_0031eb20(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00275798
GUEST_EXPORT(0x00275798, d_00275798::f_00275798);

// f_00275808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00275808 {

struct __attribute__((packed)) Object_00275808_0 {
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
GUEST_OFFSET(Object_00275808_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00275808_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00275808_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00275808_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00275808_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00275808_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00275808_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00275808_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00275808_0, word_20, 0x20);  // (from the original)

inline guest::global<u32, 0x008874f8> global_008874f8;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0031ecbc, u32(u32, u32, u32, u32)> call_0031ecbc;  // (from the original)

u32 f_00275808(gptr<Object_00275808_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
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
    u32 ea_1 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 ea_2 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r0_15 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    r13 = r13 - 8;
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    r2_1 = *gptr<u32>(0x8874f8u + 4);  // (from the original)
    r3_1 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*global_008874f8);
    arg0->word_10 = u32(r2_1);
    arg0->word_14 = u32(0u);
    arg0->byte_18 = u8(0u);
    arg0->word_1c = u32(0u);
    arg0->word_0 = u32(0x8ef6f4u);  // (from the original)
    arg0->word_20 = u32(0u);
    r0_1 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00125e3c(r0_1, 0x8ef6f4u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_001207d8(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00125aec(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00125aec(r0_7, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    ea_1 = r0_8 + 0x28u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    r0_9 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_001207d8(r0_9, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    ea_2 = r0_10 + 0x248u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    r0_11 = ea_2 + 4u;
    guest::cpu()->r[13] = r13;
    r0_12 = call_00125aec(r0_11, r1_5, r2_6, r3_6);
    r0_13 = r0_12 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_00301d0c(r0_13, 0x20708cu, 0x348u, 0xau);  // (from the original)
    r1_6 = ~0u;
    r0_15 = r0_14 - 0x680u;  // (from the original)
    r3_7 = 0x2780u - (r1_6 << 2);  // (from the original)
    *gptr<u32>(0x2780u + r0_15) = u32(r1_6);  // (from the original)
    *gptr<u32>(r3_7 + r0_15) = u32(r1_6);
    r0_16 = r0_15 + 0x2788u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_0031ecbc(r0_16, r1_6, 0x2780u, r3_7);  // (from the original)
    r0_18 = r0_17 - 0x2788u;  // (from the original)
    *gptr<u8>(0x2c78u + r0_18) = u8(0u);  // (from the original)
    *gptr<u8>(0x2c78u + 0x2cu + r0_18) = u8(0u);  // (from the original)
    *gptr<u8>(0x2c78u + 0x2du + r0_18) = u8(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0x2c78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_18;
}

}  // namespace d_00275808
GUEST_EXPORT(0x00275808, d_00275808::f_00275808);

// f_002762c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002762c4 {

struct __attribute__((packed)) Object_002762c4_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u16 half_34;
    u16 half_36;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u8 byte_44;
    u8 unknown_45[0x3];  // (not used here)
    u32 word_48;
    u32 word_4c;
};
GUEST_OFFSET(Object_002762c4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, half_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, half_36, 0x36);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, byte_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_002762c4_0, word_4c, 0x4c);  // (from the original)

inline guest::global<u32, 0x00276338> global_00276338;  // (from the original)
inline guest::global<u32, 0x0027633c> global_0027633c;  // (from the original)

void f_002762c4(gptr<Object_002762c4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r12_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_1 = 0;
    r12_1 = ~0u;
    arg0->word_0 = u32(0x8ef714u);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    arg0->word_10 = u32(0u);
    arg0->word_c = u32(r12_1);
    arg0->word_14 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_18 = u32(0x8f3a54u);  // (from the original)
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(0u);
    S0_1 = std::bit_cast<float>(*global_00276338);
    S1_1 = std::bit_cast<float>(*global_0027633c);
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(std::bit_cast<u32>(S0_1));
    arg0->word_30 = u32(std::bit_cast<u32>(S1_1));
    r1_1 = r0 + 0x3cu;  // (from the original)
    arg0->half_34 = u16(r12_1);
    arg0->half_36 = u16(r12_1);
    arg0->word_38 = u32(0u);
    arg0->word_3c = u32(0u);
    arg0->word_40 = u32(r12_1);
    arg0->byte_44 = u8(0u);
    arg0->word_48 = u32(0u);
    arg0->word_4c = u32(0u);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_002762c4
GUEST_EXPORT(0x002762c4, d_002762c4::f_002762c4);

// f_002763bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002763bc {

struct __attribute__((packed)) Object_002763bc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x104];  // (not used here)
    u32 word_118;
    u32 word_11c;
    u8 unknown_120[0x4];  // (not used here)
    u8 byte_124;
};
GUEST_OFFSET(Object_002763bc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002763bc_0, word_118, 0x118);  // (from the original)
GUEST_OFFSET(Object_002763bc_0, word_11c, 0x11c);  // (from the original)
GUEST_OFFSET(Object_002763bc_0, byte_124, 0x124);  // (from the original)

inline guest::global<u32, 0x0094d548> global_0094d548;  // (from the original)

void f_002763bc(gptr<Object_002763bc_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = 0;
    if (r1 != 0) {
        if (r1 == 1u) {
            arg0->word_118 = u32(r2);
            arg0->byte_124 = u8(3u);
            arg0->word_10 = u32(r1);
            return;
        }
        arg0->word_10 = u32(r1);
        return;
    }
    r3_1 = *global_0094d548;
    if (r3_1 == 0) {
        arg0->word_10 = u32(r1);
        return;
    }
    arg0->word_118 = u32(r2);
    arg0->word_11c = u32(r3_1 + 0x244u);  // (from the original)
    arg0->word_10 = u32(r1);
    return;
}

}  // namespace d_002763bc
GUEST_EXPORT(0x002763bc, d_002763bc::f_002763bc);

// f_0027643c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027643c {

struct __attribute__((packed)) Object_0027643c_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_0027643c_0, word_114, 0x114);  // (from the original)


void f_0027643c(gptr<Object_0027643c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    if (r1 >= 0x40u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r1_1 = r0 + (r1 << 2);
    if (*gptr<u32>(r1_1 + 0x14u) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    *gptr<u32>(r1_1 + 0x14u) = u32(0u);  // (from the original)
    r1_2 = arg0->word_114 - 1u;
    arg0->word_114 = u32(r1_2);
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_0027643c
GUEST_EXPORT(0x0027643c, d_0027643c::f_0027643c);

// f_0027646c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027646c {

inline guest::global<u32, 0x00276534> global_00276534;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_0027646c(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = 0x94cff4u;  // (from the original)
    if (*gptr<u32>(r6) != 0) {
        r0_4 = *gptr<u32>(r6);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0_4;
    }
    guest::cpu()->s[0] = S0;
    r0_1 = call_00131280(0x1c4u, r0, 4u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r0_1;
    if (r0_1 == 0) {
        *gptr<u32>(r6 + 4u) = u32(r4);
        r4 = 0u;
        goto L_276520;
    }
    guest::cpu()->s[0] = S0;
    r0_2 = call_001320cc(r0_1, r0, 3u, r3_1);
    S0 = std::bit_cast<float>(*global_00276534);
    *gptr<u32>(r0_2) = u32(0x8fa3e4u);  // (from the original)
    *gptr<u32>(r6 + 4u) = u32(r0_2);
    r0 = 0u;
    *gptr<u32>(r4 + 0x120u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x114u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x118u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x11cu) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x124u) = u8(r0);  // (from the original)
    *gptr<u32>(r4 + 0x1bcu) = u32(r0);  // (from the original)
    r2 = r0;
    r1 = r0;
    *gptr<u32>(r4 + 0x1c0u) = u32(r0);  // (from the original)
    do {
L_2764ec:;
        r3_2 = r4 + (r2 << 2);
        r2_1 = r2 + 1u;
        r1 = r1 + 2u;
        r12_1 = r4 + (r2_1 << 2);
        *gptr<u32>(r3_2 + 0x14u) = u32(r0);  // (from the original)
        r2 = r2_1 + 1u;
        *gptr<u32>(r12_1 + 0x14u) = u32(r0);  // (from the original)
        guest::preempt();
    } while (r1 < 0x40u);  // (from the original)
    r0_3 = r4 + 0x125u;  // (from the original)
    guest::cpu()->s[0] = S0;
    call_00301444(r0_3, 0x96u, r2, r3_2);  // (from the original)
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
L_276520:;
    *gptr<u32>(r6) = u32(r4);
    r0_4 = *gptr<u32>(r6);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_4;
}

}  // namespace d_0027646c
GUEST_EXPORT(0x0027646c, d_0027646c::f_0027646c);

// f_002767bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002767bc {

struct __attribute__((packed)) Object_002767bc_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_002767bc_0, word_114, 0x114);  // (from the original)


u32 f_002767bc(gptr<Object_002767bc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r1_1 = 0;
    r2 = r0;
    r0 = arg0->word_114;
    zf_1 = r0 == 0x40u;  // (from the original)
    cf_1 = r0 >= 0x40u;  // (from the original)
    if (!cf_1 || zf_1) {
        r0 = 0u;
    }
    if (cf_1 && !zf_1) {
        guest::cpu()->r[1] = r1;
        return 0x41u;  // (from the original)
    }
    do {
L_2767d0:;
        if (*gptr<u32>(r2 + (r0 << 2) + 0x14u) == 0) {  // (from the original)
            *gptr<u32>(r2 + (r0 << 2) + 0x14u) = u32(r1);  // (from the original)
            r1_1 = *gptr<u32>(r2 + 0x114u) + 1u;  // (from the original)
            *gptr<u32>(r2 + 0x114u) = u32(r1_1);  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 0x40u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0x41u;  // (from the original)
}

}  // namespace d_002767bc
GUEST_EXPORT(0x002767bc, d_002767bc::f_002767bc);

// f_0027680c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027680c {

struct __attribute__((packed)) Object_0027680c_0 {
    u8 unknown_0[0xc0];  // (not used here)
    u32 word_c0;
    u32 word_c4;
};
GUEST_OFFSET(Object_0027680c_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_0027680c_0, word_c4, 0xc4);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x0032ba1c, u32(u32, u32, u32, u32)> call_0032ba1c;  // (from the original)
inline constexpr guest::Function<0x00342ce4, u32(u32, u32, u32, u32)> call_00342ce4;  // (from the original)

u32 f_0027680c(gptr<Object_0027680c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r3_1 = 0x1000f83u;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (r1 != r3_1) {
        goto L_27682c;
    }
    r0 = r0 + 0xc0u;  // (from the original)
    r1 = 0xcu;  // (from the original)
    arg0->word_c0 = u32(r1);
    arg0->word_c4 = u32(r2);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_27682c:;
    r4_1 = r0;
    r0 = 0u;
    if (u32(*gptr<u8>(r4_1 + 0x68u)) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u8>(r4_1 + 0x54u) = u8(r0);  // (from the original)
    if (r1 == 0x1000f23u) {  // (from the original)
        r0_1 = call_002f74c8(r0, r1, 0x1000f23u, r3_1);  // (from the original)
        r3_1 = guest::cpu()->r[3];
        if (r0_1 == 0x2bu) {  // (from the original)
            goto L_27687c;
        }
    }
    r0_2 = r4_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0032ba1c(r0_2, r1, r2, r3_1);
L_27687c:;
    r0_3 = r4_1 + 0x58u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00342ce4(r0_3, 0x1000f24u, r2, r3_1);  // (from the original)
}

}  // namespace d_0027680c
GUEST_EXPORT(0x0027680c, d_0027680c::f_0027680c);

// f_0027689c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027689c {

struct __attribute__((packed)) Object_0027689c_0 {
    u8 unknown_0[0xbc];  // (not used here)
    u32 word_bc;
};
GUEST_OFFSET(Object_0027689c_0, word_bc, 0xbc);  // (from the original)

struct __attribute__((packed)) Object_0027689c_2 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0027689c_2, byte_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00130ed8, u32(u32, u32, u32, u32)> call_00130ed8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> call_004c331c;  // (from the original)
inline constexpr guest::Function<0x004c7500, u32(u32, u32, u32, u32)> call_004c7500;  // (from the original)
inline constexpr guest::Function<0x006b1d88, u32(u32, u32, u32, u32)> call_006b1d88;  // (from the original)

u32 f_0027689c(gptr<Object_0027689c_0> arg0, u32 r1, gptr<Object_0027689c_2> arg2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2 = arg2.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 ea_1 = 0;
    u32 r3_3 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = u32(arg2->byte_0);
    if (r0_1 <= 0xdu) {  // (from the original)
        r0_2 = arg0->word_bc;
        if (r0_2 != 0) {
            guest::cpu()->r[13] = r13;
            call_00136e58(r0_2, 0u, r2, r3);
        }
        if (u32(*gptr<u8>(r2)) == 0xdu) {  // (from the original)
            goto L_27692c;
        }
        r2_1 = r1;
        r1_1 = r0 + 0xbcu;  // (from the original)
        if (r1 != 0x1000475u) {  // (from the original)
            r2_1 = 0x1000475u;  // (from the original)
        }
        r0_3 = *global_0094d080;
        guest::cpu()->r[13] = r13;
        call_006b1d88(r0_3, r1_1, r2_1, 0x94d080u);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r1_2 = r0 + 0xbcu;  // (from the original)
        r0_4 = r13;
        guest::cpu()->r[13] = r13;
        call_004c331c(r0_4, r1_2, r2_2, r3_1);
        r3_2 = 0x83b196u;  // (from the original)
        r0_5 = *gptr<u32>(r13);
        r1_3 = 0u;
        r2_3 = u32(s32(s16(*gptr<u16>(r3_2 + (u32(*gptr<u8>(r2)) << 1)))));
        if (r0_5 != 0) {
            guest::cpu()->r[13] = r13;
            call_004c7500(r0_5, r1_3, r2_3, r3_2);
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
        }
        r0_6 = r13;
        guest::cpu()->r[13] = r13;
        r0_1 = call_00130ed8(r0_6, r1_3, r2_3, r3_2);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_27692c:;
    r0_7 = *global_0094d080;
    r1_4 = r0 + 0xbcu;  // (from the original)
    ea_1 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3_3 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    return call_006b1d88(r0_7, r1_4, 0x1000476u, r3_3);  // (from the original)
}

}  // namespace d_0027689c
GUEST_EXPORT(0x0027689c, d_0027689c::f_0027689c);

// f_00276c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00276c98 {

struct __attribute__((packed)) Object_00276c98_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x3f];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Object_00276c98_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00276c98_0, word_74, 0x74);  // (from the original)

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)

u32 f_00276c98(gptr<Object_00276c98_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_34) != 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 >= 0x83u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    arg0->word_74 = u32(r1 + 0x1000a96u);  // (from the original)
    return call_0020a4cc(r0, r2, r3, r3);
}

}  // namespace d_00276c98
GUEST_EXPORT(0x00276c98, d_00276c98::f_00276c98);

// f_00276cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00276cdc {

struct __attribute__((packed)) Object_00276cdc_0 {
    u8 unknown_0[0x74];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Object_00276cdc_0, word_74, 0x74);  // (from the original)

inline constexpr guest::Function<0x00130ed8, u32(u32, u32, u32, u32)> call_00130ed8;  // (from the original)
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> call_004c331c;  // (from the original)
inline constexpr guest::Function<0x004c74b0, u32(u32, u32, u32, u32)> call_004c74b0;  // (from the original)

u32 f_00276cdc(gptr<Object_00276cdc_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    float S0_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r3 = arg0->word_74;
    r1 = r0 + 0x44u;  // (from the original)
    r2 = 0u;
    do {
L_276cf0:;
        if (r2 >= 2u) {
            r0_1 = r1;
        } else {
            r0_1 = r1 + (r2 << 2);
        }
        r0_2 = *gptr<u32>(r0_1);
        if (r0_2 == 0) {
            r0_3 = ~0u;
        } else {
            r0_3 = *gptr<u32>(r0_2 + 0xb0u);  // (from the original)
        }
        if (!(r0_3 != r3)) {
            if (r2 < 2u) {
                r1 = r1 + (r2 << 2);
            }
            if (r1 == 0) {
                r13 = r13 + 0x10;  // (from the original)
                guest::cpu()->r[1] = r1;
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0;
                return r0_3;
            }
            r0_4 = r13;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            call_004c331c(r0_4, r1, r2, r3);
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            r1_1 = *gptr<u32>(r4 + 0x7cu);  // (from the original)
            r0_5 = *gptr<u32>(r13);
            S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x120u));  // (from the original)
            if (r0_5 != 0) {
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0_1;
                call_004c74b0(r0_5, r1_1, r2_1, r3_1);
                r1_1 = guest::cpu()->r[1];
                r2_1 = guest::cpu()->r[2];
                r3_1 = guest::cpu()->r[3];
                S0_1 = guest::cpu()->s[0];
            }
            r0_6 = r13;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_1;
            r0_7 = call_00130ed8(r0_6, r1_1, r2_1, r3_1);
            r1_2 = guest::cpu()->r[1];
            S0_2 = guest::cpu()->s[0];
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_2;
            return r0_7;
        }
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r2) < s32(2u));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0_3;
}

}  // namespace d_00276cdc
GUEST_EXPORT(0x00276cdc, d_00276cdc::f_00276cdc);

// f_00277b4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277b4c {

inline guest::global<u32, 0x00277c04> global_00277c04;  // (from the original)
inline guest::global<u32, 0x00277c08> global_00277c08;  // (from the original)
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00277b4c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_0020af18(r0, r1, r2, r3);
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    *gptr<u32>(r0_1) = u32(0x8f8dc8u);  // (from the original)
    r0_2 = r0_1 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_3 = call_00301d0c(r0_2, 0x131800u, 4u, 2u);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r0_4 = r0_3 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_5 = call_00301d0c(r0_4, 0x1287a8u, 0x14u, 2u);  // (from the original)
    r2_1 = ~0u;
    ea_1 = r0_5 + 0x28u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r2_1);
    ea_2 = r0_5 - 0x4cu;  // (from the original)
    *gptr<u32>(ea_2) = u32(0x8ef798u);  // (from the original)
    *gptr<u32>(ea_2 + 0x7cu) = u32(0u);  // (from the original)
    *gptr<u32>(ea_2 + 0x78u) = u32(r2_1);  // (from the original)
    *gptr<u32>(ea_2 + 0x80u) = u32(0u);  // (from the original)
    *gptr<u8>(ea_2 + 0x84u) = u8(0u);  // (from the original)
    *gptr<u16>(ea_2 + 0x86u) = u16(r2_1);  // (from the original)
    *gptr<u16>(ea_2 + 0x88u) = u16(r2_1);  // (from the original)
    *gptr<u16>(ea_2 + 0x8au) = u16(0u);  // (from the original)
    *gptr<u16>(ea_2 + 0x8cu) = u16(r2_1);  // (from the original)
    S0_3 = std::bit_cast<float>(*global_00277c04);
    *gptr<u16>(ea_2 + 0x8eu) = u16(r2_1);  // (from the original)
    *gptr<u16>(ea_2 + 0x90u) = u16(0u);  // (from the original)
    S1_3 = std::bit_cast<float>(*global_00277c08);
    *gptr<u32>(ea_2 + 0x94u) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
    *gptr<u8>(ea_2 + 0x98u) = u8(0u);  // (from the original)
    *gptr<u32>(ea_2 + 0x9cu) = u32(std::bit_cast<u32>(S1_3));  // (from the original)
    *gptr<u16>(ea_2 + 0xa8u) = u16(7u);  // (from the original)
    *gptr<u16>(ea_2 + 0xa0u) = u16(r2_1);  // (from the original)
    *gptr<u16>(ea_2 + 0xa2u) = u16(r2_1);  // (from the original)
    *gptr<u16>(ea_2 + 0xa4u) = u16(0u);  // (from the original)
    *gptr<u16>(ea_2 + 0xa6u) = u16(0u);  // (from the original)
    *gptr<u32>(ea_2 + 4u) = u32(3u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return ea_2;
}

}  // namespace d_00277b4c
GUEST_EXPORT(0x00277b4c, d_00277b4c::f_00277b4c);

// f_00277c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277c1c {

struct __attribute__((packed)) Object_00277c1c_0 {
    u32 word_0;
    u8 unknown_4[0x70];  // (not used here)
    u32 word_74;
    u32 word_78;
};
GUEST_OFFSET(Object_00277c1c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00277c1c_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_00277c1c_0, word_78, 0x78);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x0027643c, u32(u32, u32, u32, u32)> call_0027643c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_00277c1c(gptr<Object_00277c1c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 cf = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_5 = 0;
    u32 res_3 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r4 = r6;
    r7 = ~0u;
    arg0->word_0 = u32(0x8ef798u);  // (from the original)
    if (arg0->word_78 >= 0x40u) {  // (from the original)
        goto L_277cb0;
    }
    r1 = 0u;
    r2 = arg0->word_74;
    r3 = r4 + 0x44u;  // (from the original)
    r5 = r1;
    goto L_277c5c;
L_277c54:;
    if (cf) {
        goto L_277c60;
    }
L_277c5c:;
    r0 = r3 + (r1 << 2);
L_277c60:;
    r0_1 = *gptr<u32>(r0);
    if (r0_1 == 0) {
        r0_2 = ~0u;
    } else {
        r0_2 = *gptr<u32>(r0_1 + 0xb0u);  // (from the original)
    }
    if (r0_2 != r2) {
        goto L_277cd0;
    }
    if (r1 < 2u) {
        r3 = r3 + (r1 << 2);
    }
    if (r3 == 0) {
        goto L_277c98;
    }
    r0_3 = *gptr<u32>(r3);
    if (r0_3 != 0) {
        call_00136e58(r0_3, 0u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
L_277c98:;
    *gptr<u32>(r4 + 0x80u) = u32(r5);  // (from the original)
    r0_4 = *gptr<u32>(r4 + 0x7cu);  // (from the original)
    r1_1 = *gptr<u32>(r4 + 0x78u);  // (from the original)
    call_0027643c(r0_4, r1_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x7cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x78u) = u32(r7);  // (from the original)
L_277cb0:;
    if (u32(*gptr<u8>(r4 + 0x34u)) == 0) {  // (from the original)
        goto L_277d0c;
    }
    *gptr<u32>(r4 + 0x74u) = u32(r7);  // (from the original)
    r7 = r4;
    r5 = r4 + 0x44u;  // (from the original)
    r4 = 0u;
    goto L_277cec;
L_277cd0:;
    r1 = r1 + 1u;
    res_1 = r1 - 2u;
    cf = r1 >= 2u;
    if (res_1 >> 0x1f != ((r1 ^ 2u) & (r1 ^ res_1)) >> 0x1f) {  // (from the original)
        r0 = r3;
        guest::preempt();
        goto L_277c54;
    }
    guest::preempt();
    goto L_277c98;
L_277ce4:;
    if (cf) {
        r0 = r5;
        goto L_277cf0;
    }
L_277cec:;
    r0 = r5 + (r4 << 2);
L_277cf0:;
    call_00136cc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
    res_2 = r4 - 2u;
    cf = r4 >= 2u;
    if (res_2 >> 0x1f != ((r4 ^ 2u) & (r4 ^ res_2)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_277ce4;
    }
    call_0020aedc(r7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_277d0c:;
    r5 = r6 + 0x44u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r6) = u32(0x8f8dc8u);  // (from the original)
    do {
L_277d1c:;
        r0_5 = r5;
        if (r4 < 2u) {
            r0_5 = r5 + (r4 << 2);
        }
        call_00136cc8(r0_5, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    call_0020aedc(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r6 + 0x44u;  // (from the original)
    r4 = 0u;
    r0 = r5;
    goto L_277d58;
L_277d50:;
    if (cf) {
        goto L_277d5c;
    }
L_277d58:;
    r0 = r0 + (r4 << 2);
L_277d5c:;
    call_00136cc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
    res_3 = r4 - 2u;
    cf = r4 >= 2u;
    r0 = r5;
    if (res_3 >> 0x1f != ((r4 ^ 2u) & (r4 ^ res_3)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_277d50;
    }
    call_002f76ac(r0, 0x137d74u, 4u, 2u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_6 = r5 - 0x44u;  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_6;
}

}  // namespace d_00277c1c
GUEST_EXPORT(0x00277c1c, d_00277c1c::f_00277c1c);

// f_00277d98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277d98 {

struct __attribute__((packed)) Object_00277d98_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_00277d98_0, byte_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)
inline constexpr guest::Function<0x002a5fa8, u32(u32, u32, u32, u32)> call_002a5fa8;  // (from the original)

u32 f_00277d98(gptr<Object_00277d98_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_34);
    if (r0_1 == 0) {
        r0_2 = r0 + 0xa4u;  // (from the original)
        call_002a5fa8(r0_2, r0, r2, guest::cpu()->r[3]);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0020a4cc(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00277d98
GUEST_EXPORT(0x00277d98, d_00277d98::f_00277d98);

// f_00277f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277f80 {

struct __attribute__((packed)) Object_00277f80_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_00277f80_0, byte_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002a6594, u32(u32, u32, u32, u32)> call_002a6594;  // (from the original)

u32 f_00277f80(gptr<Object_00277f80_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 cf = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_34);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_1;
    }
    r0_2 = r0 + 0xa4u;  // (from the original)
    call_002a6594(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r0 + 0x44u;  // (from the original)
    r6 = r0;
    r4 = 0u;
    r0 = r5;
    goto L_277fb8;
L_277fb0:;
    if (cf) {
        goto L_277fbc;
    }
L_277fb8:;
    r0 = r0 + (r4 << 2);
L_277fbc:;
    call_00136cc8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r4 + 1u;
    res_1 = r4 - 4u;
    cf = r4 >= 4u;
    if (res_1 >> 0x1f != ((r4 ^ 4u) & (r4 ^ res_1)) >> 0x1f) {  // (from the original)
        r0 = r5;
        guest::preempt();
        goto L_277fb0;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0020aedc(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00277f80
GUEST_EXPORT(0x00277f80, d_00277f80::f_00277f80);

// f_00277fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00277fe4 {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x002a65d0, u32(u32, u32, u32, u32)> call_002a65d0;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00277fe4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0020af18(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = u32(0x8f8e48u);  // (from the original)
    r0_2 = r0_1 + 0x44u;  // (from the original)
    r0_3 = call_00301d0c(r0_2, 0x131800u, 4u, 4u);  // (from the original)
    r0_4 = r0_3 + 0x10u;  // (from the original)
    r0_5 = call_00301d0c(r0_4, 0x1287a8u, 0x14u, 4u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_5 - 0x54u) = u32(0x8ef7d8u);  // (from the original)
    r0_6 = r0_5 + 0x50u;  // (from the original)
    r0_7 = call_002a65d0(r0_6, 0x8ef7d8u, r2_1, r3_1);  // (from the original)
    r0_8 = r0_7 - 0xa4u;  // (from the original)
    *gptr<u8>(r0_8 + 0xbcu) = u8(0u);  // (from the original)
    *gptr<u32>(r0_8 + 4u) = u32(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_8;
}

}  // namespace d_00277fe4
GUEST_EXPORT(0x00277fe4, d_00277fe4::f_00277fe4);

// f_002783c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002783c4 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x0013c1e8, u32(u32, u32, u32, u32)> call_0013c1e8;  // (from the original)
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> call_0013c240;  // (from the original)
inline constexpr guest::Function<0x004c9310, u32(u32, u32, u32, u32)> call_004c9310;  // (from the original)
inline constexpr guest::Function<0x0073e1c0, u32(u32, u32, u32, u32)> call_0073e1c0;  // (from the original)

u32 f_002783c4(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r6_1 = *gptr<u32>(*gptr<u32>(*global_0094d080 + 0xc0cu) + 0x144u);  // (from the original)
    r7_1 = *gptr<u32>(*global_0094d080 + 0xc10u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u8>(r13 + 0x30u) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u8>(r13 + 0x31u) = u8(0u);  // (from the original)
    r0_1 = ~0u;
    *gptr<u32>(r13 + 0x1cu) = u32(r0_1);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r0_1);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r0_1);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r0_1);  // (from the original)
    r2_1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0013c240(r7_1, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x58u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r2_2 = r13;
    *gptr<u32>(r0 + 0x14u) = u32(*gptr<u32>(r13 + 0x18u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0013c1e8(r7_1, r1, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        r13 = r13 + 0x58u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_2 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0073e1c0(r6_1, r1_2, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r0_4 = r13 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_004c9310(r0_4, r0_3, r2_4, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = *gptr<u32>(r13 + 0x38u);  // (from the original)
    ea_1 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1);
    *gptr<u32>(ea_1 + 8u) = u32(r0_2);
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_002783c4
GUEST_EXPORT(0x002783c4, d_002783c4::f_002783c4);

// f_00278484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00278484 {

struct __attribute__((packed)) Object_00278484_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_00278484_0, byte_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002782dc, u32(u32, u32, u32, u32)> call_002782dc;  // (from the original)

u32 f_00278484(gptr<Object_00278484_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r12_1 = *gptr<u32>(r13 + 8u);
    arg0->byte_1c = u8(r3);
    *gptr<u32>(r13) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002782dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], 3u);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00278484
GUEST_EXPORT(0x00278484, d_00278484::f_00278484);

// f_002796a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002796a0 {

struct __attribute__((packed)) Object_002796a0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002796a0_1, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x002796ec> global_002796ec;  // (from the original)
inline constexpr guest::Function<0x0012e8e8, u32(u32, u32, u32, u32)> call_0012e8e8;  // (from the original)
inline constexpr guest::Function<0x0020a474, u32(u32, u32, u32, u32)> call_0020a474;  // (from the original)

u32 f_002796a0(u32 r0, gptr<Object_002796a0_1> arg1, u32 r2, float S0) {
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r1_1 = arg1->word_0;
    r3_1 = r0 + ((r1_1 << 3) - r1_1 << 2);
    r12_1 = *gptr<u32>(r3_1 + 0x24u);  // (from the original)
    zf_1 = r12_1 == 4u;
    if (!zf_1) {
        zf_1 = r12_1 == 5u;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    S0_1 = std::bit_cast<float>(*global_002796ec);
    if (r2 == 0) {
        r0_1 = r0 + (r1_1 + (r1_1 << 1) << 2);
        r2_1 = u32(*gptr<u8>(r0_1 + 0x146u));  // (from the original)
        r1_2 = u32(*gptr<u8>(r0_1 + 0x147u));  // (from the original)
        r0_2 = r3_1 + 0xcu;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        return call_0020a474(r0_2, r1_2, r2_1, r3_1);
    }
    r0_3 = r3_1 + 0xcu;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return call_0012e8e8(r0_3, r1_1, r2, r3_1);
}

}  // namespace d_002796a0
GUEST_EXPORT(0x002796a0, d_002796a0::f_002796a0);

// f_00279984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279984 {

struct __attribute__((packed)) Object_00279984_1 {
    u8 unknown_0[0x83de92];  // (not used here)
    u8 byte_83de92;
};
GUEST_OFFSET(Object_00279984_1, byte_83de92, 0x83de92);  // (from the original)

inline guest::global<u32, 0x00279a04> global_00279a04;  // (from the original)
inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x002bcd40, u32(u32, u32, u32, u32)> call_002bcd40;  // (from the original)
inline constexpr guest::Function<0x004bf06c, u32(u32, u32, u32, u32)> call_004bf06c;  // (from the original)
inline constexpr guest::Function<0x00766f04, u32(u32, u32, u32, u32)> call_00766f04;  // (from the original)

u32 f_00279984(u32 r0, gptr<Object_00279984_1> arg1, float S0) {
    u32 r1 = arg1.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    u32 r4_1 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    float S0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 0x12u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r2_1 = u32(arg1->byte_83de92);
    if (r2_1 != 1u) {
        r0_1 = *global_0094d080;
        guest::cpu()->s[0] = S0;
        r0_2 = call_00766f04(r0_1, r1, r2_1, guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        guest::cpu()->r[13] += 8u;
        guest::cpu()->s[0] = S0_1;
        return call_004bf06c(r0_2, 1u, 0u, guest::cpu()->r[3]);
    }
    r4_1 = r0 + r1;
    if (u32(*gptr<u8>(r4_1 + 0x434u)) == 1u) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r2_2 = (r1 << 3) - r1;
    r1_1 = r0 + (r1 << 2);
    r0_3 = r0 + (r2_2 << 2);
    S0_2 = std::bit_cast<float>(*global_00279a04);
    r2_3 = *gptr<u32>(r0_3 + 0x1fcu);  // (from the original)
    r0_4 = r0_3 + 0x1f4u;  // (from the original)
    *gptr<u32>(r1_1 + 0x3ecu) = u32(r2_3);  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_002bcd40(r0_4, 0u, r2_3, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    *gptr<u8>(r4_1 + 0x434u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_3;
    return 1u;
}

}  // namespace d_00279984
GUEST_EXPORT(0x00279984, d_00279984::f_00279984);

// f_00279a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279a08 {

struct __attribute__((packed)) Object_00279a08_1 {
    u8 unknown_0[0x83de92];  // (not used here)
    u8 byte_83de92;
};
GUEST_OFFSET(Object_00279a08_1, byte_83de92, 0x83de92);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x002bcd40, u32(u32, u32, u32, u32)> call_002bcd40;  // (from the original)
inline constexpr guest::Function<0x004bf06c, u32(u32, u32, u32, u32)> call_004bf06c;  // (from the original)
inline constexpr guest::Function<0x00766f04, u32(u32, u32, u32, u32)> call_00766f04;  // (from the original)

u32 f_00279a08(u32 r0, gptr<Object_00279a08_1> arg1, u32 r2, float S0) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    float S0_3 = 0;
    u32 r1_1 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    if (r1 >= 0x12u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    if (u32(arg1->byte_83de92) != 1u) {
        r0_1 = *global_0094d080;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0_2 = call_00766f04(r0_1, r1, r2, guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        ea_2 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_1 = *gptr<u32>(ea_2);
        r5_1 = *gptr<u32>(ea_2 + 4);
        r6_1 = *gptr<u32>(ea_2 + 8);
        r14 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        return call_004bf06c(r0_2, 0u, r2, guest::cpu()->r[3]);
    }
    S0_2 = std::bit_cast<float>(*gptr<u32>(r0 + (r1 << 2) + 0x3ecu));  // (from the original)
    r0_3 = r0 + ((r1 << 3) - r1 << 2) + 0x1f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    call_002bcd40(r0_3, r2, r2, guest::cpu()->r[3]);
    S0_3 = guest::cpu()->s[0];
    r1_1 = r0 + r1;
    ea_3 = r1_1 + 0x434u;  // (from the original)
    *gptr<u8>(ea_3) = u8(0u);
    ea_4 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_2 = *gptr<u32>(ea_4);
    r5_2 = *gptr<u32>(ea_4 + 4);
    r6_2 = *gptr<u32>(ea_4 + 8);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return 0u;
}

}  // namespace d_00279a08
GUEST_EXPORT(0x00279a08, d_00279a08::f_00279a08);

// f_00279e9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279e9c {

inline constexpr guest::Function<0x002e9d28, u32(u32, u32, u32, u32)> call_002e9d28;  // (from the original)
inline constexpr guest::Function<0x00615508, u32(u32, u32, u32, u32)> call_00615508;  // (from the original)
inline constexpr guest::Function<0x00615534, u32(u32, u32, u32, u32)> call_00615534;  // (from the original)

u32 f_00279e9c(u32 r0, u32 r1) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    call_002e9d28(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = 0u;
    r7 = r5;
    do {
L_279eb0:;
        r1_1 = r5 + (r5 << 1) + (r5 << 3);
        r4_1 = r6 + (r1_1 << 2) + 0xca8u;  // (from the original)
        call_00615508(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_1 = r4_1 + 0x10u;  // (from the original)
        r0_2 = call_00615534(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        *gptr<u8>(r4_1 + 0x26u) = u8(r7);  // (from the original)
        r5 = r5 + 1u;
        *gptr<u8>(r4_1 + 0x27u) = u8(r7);  // (from the original)
        *gptr<u32>(r4_1 + 0x28u) = u32(r7);  // (from the original)
        guest::preempt();
    } while (r5 < 4u);
    *gptr<u32>(r6 + 0xd58u) = u32(r7);  // (from the original)
    *gptr<u32>(r6 + 0xd5cu) = u32(r7);  // (from the original)
    *gptr<u32>(r6 + 0xd60u) = u32(r7);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_2;
}

}  // namespace d_00279e9c
GUEST_EXPORT(0x00279e9c, d_00279e9c::f_00279e9c);

// f_00279f00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279f00 {

inline constexpr guest::Function<0x002e9dcc, u32(u32, u32, u32, u32)> call_002e9dcc;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00279f00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002e9dcc(r0, r1, r2, r3);
    r0_2 = r0_1 + 0xca8u;  // (from the original)
    r0_3 = call_00301d0c(r0_2, 0x2a7044u, 0x2cu, 4u);  // (from the original)
    r0_4 = r0_3 - 0xca8u;  // (from the original)
    *gptr<u32>(r0_4 + 0xd5cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0xd60u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0xd58u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_4;
}

}  // namespace d_00279f00
GUEST_EXPORT(0x00279f00, d_00279f00::f_00279f00);

// f_00279f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00279f40 {

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)

u32 f_00279f40(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r8 = r2;
    r4 = 0u;
    r9 = ~0u;
    do {
L_279f58:;
        r5_1 = r6 + ((r4 << 4) - r4 + (r4 << 8) << 3);
        r0_1 = *gptr<u32>(r5_1 + 0x870u);  // (from the original)
        zf_1 = r0_1 == r7;
        if (zf_1) {
            r0_1 = *gptr<u32>(r5_1 + 0x874u);  // (from the original)
            zf_1 = r0_1 == r8;
        }
        if (zf_1) {
            r0_1 = call_001b3f24(r5_1, 0x16u, r2, guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            *gptr<u32>(r5_1 + 0x870u) = u32(r9);  // (from the original)
            *gptr<u32>(r5_1 + 0x874u) = u32(r9);  // (from the original)
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00279f40
GUEST_EXPORT(0x00279f40, d_00279f40::f_00279f40);

// f_0027a004: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a004 {


u32 f_0027a004(u32 r0) {
    u32 r2 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 zf_2 = 0;
    u32 r0_1 = 0;
    r2 = r0;
    r0 = 0u;
    do {
L_27a00c:;
        r1_1 = r2 + ((r0 << 4) - r0 + (r0 << 8) << 3);
        zf_1 = *gptr<u32>(r1_1 + 0x870u) + 1u == 0;  // (from the original)
        if (zf_1) {
            zf_1 = *gptr<u32>(r1_1 + 0x874u) + 1u == 0;  // (from the original)
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1_1;
            return r0;
        }
        r1_2 = r1_1 + 0x1000u;  // (from the original)
        zf_2 = *gptr<u32>(r1_2 + 0xe8u) + 1u == 0;  // (from the original)
        if (zf_2) {
            r1_2 = *gptr<u32>(r1_2 + 0xecu);  // (from the original)
            zf_2 = r1_2 + 1u == 0;
        }
        if (zf_2) {
            r0_1 = r0 + 1u;
            guest::cpu()->r[1] = r1_2;
            return r0_1;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(8u));
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0027a004
GUEST_EXPORT(0x0027a004, d_0027a004::f_0027a004);

// f_0027a060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a060 {

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)

u32 f_0027a060(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r4 = 0u;
    r7 = ~0u;
    do {
L_27a070:;
        r5_1 = r6 + ((r4 << 4) - r4 + (r4 << 8) << 3);
        r0_1 = call_001b3f24(r5_1, 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        *gptr<u32>(r5_1 + 0x870u) = u32(r7);  // (from the original)
        *gptr<u32>(r5_1 + 0x874u) = u32(r7);  // (from the original)
        guest::preempt();
    } while (r4 < 8u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0027a060
GUEST_EXPORT(0x0027a060, d_0027a060::f_0027a060);

// f_0027a0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a0a0 {

inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)

u32 f_0027a0a0(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r4 = 0u;
    r7 = ~0u;
    do {
L_27a0b0:;
        r5_1 = r6 + ((r4 << 4) - r4 + (r4 << 8) << 3);
        r0_1 = call_003059f8(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = r4 + 1u;
        *gptr<u32>(r5_1 + 0x870u) = u32(r7);  // (from the original)
        *gptr<u32>(r5_1 + 0x874u) = u32(r7);  // (from the original)
        guest::preempt();
    } while (r4 < 8u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return r0_1;
}

}  // namespace d_0027a0a0
GUEST_EXPORT(0x0027a0a0, d_0027a0a0::f_0027a0a0);

// f_0027a2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a2bc {


u32 f_0027a2bc(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    r3 = 0u;
    guest::cpu()->r[13] -= 4u;
L_27a2c4:;
    r12_1 = r0 + ((r3 << 4) - r3 + (r3 << 8) << 3);
    zf_1 = *gptr<u32>(r12_1 + 0x870u) + 1u == 0;  // (from the original)
    if (zf_1) {
        zf_1 = *gptr<u32>(r12_1 + 0x874u) + 1u == 0;  // (from the original)
    }
    if (!zf_1) {
        r3 = r3 + 1u;
        if (s32(r3) < s32(8u)) {
            guest::preempt();
            goto L_27a2c4;
        }
        guest::cpu()->r[13] += 4u;
        return 0u;
    }
    *gptr<u32>(r0 + ((r3 << 4) - r3 + (r3 << 8) << 3) + 0x870u) = u32(r1);  // (from the original)
    *gptr<u32>(r12_1 + 0x874u) = u32(r2);  // (from the original)
    guest::cpu()->r[13] += 4u;
    return 1u;
}

}  // namespace d_0027a2bc
GUEST_EXPORT(0x0027a2bc, d_0027a2bc::f_0027a2bc);

// f_0027a31c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a31c {

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0027a31c(u32 r0) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r2_1 = 8u + 0x870u;  // (from the original)
    r0_1 = call_00301d0c(r0, 0x1b497cu, r2_1, 8u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0_1;
    r4 = 0u;
    r7 = ~0u;
    do {
L_27a33c:;
        r5_1 = r6 + ((r4 << 4) - r4 + (r4 << 8) << 3);
        call_001b3f24(r5_1, 0x16u, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        *gptr<u32>(r5_1 + 0x870u) = u32(r7);  // (from the original)
        *gptr<u32>(r5_1 + 0x874u) = u32(r7);  // (from the original)
        guest::preempt();
    } while (r4 < 8u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r6;
}

}  // namespace d_0027a31c
GUEST_EXPORT(0x0027a31c, d_0027a31c::f_0027a31c);

// f_0027a4f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a4f4 {

inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x005c6760, u32(u32, u32, u32, u32)> call_005c6760;  // (from the original)
inline constexpr guest::Function<0x006bca58, u32(u32, u32, u32, u32)> call_006bca58;  // (from the original)

u32 f_0027a4f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r8 = r2;
    call_005c6760(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_27a50c:;
        r5_1 = r6 + (r4 * 0x149u << 7);  // (from the original)
        r0_1 = r5_1 + 0x55a6u;  // (from the original)
        r0_2 = call_002fbd54(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_2 == 0)) {
            r3_1 = r4 & 0xffu;  // (from the original)
            r0_2 = call_006bca58(r5_1, r7, r8, r3_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_0027a4f4
GUEST_EXPORT(0x0027a4f4, d_0027a4f4::f_0027a4f4);

// f_0027a6c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a6c4 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0030e56c, u32(u32, u32, u32, u32)> call_0030e56c;  // (from the original)

u32 f_0027a6c4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r8 = r1;
    r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_27a764;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a6e8:;
    r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
        goto L_27a704;
    }
    r1 = r0_2 * 0x149u;  // (from the original)
    r5_1 = r6 + (r1 << 7);
L_27a704:;
    if (r5_1 == 0) {
        goto L_27a768;
    }
    r0_3 = call_00301e20(r8, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a768;
    }
    r7_1 = r5_1 + 0x8e08u;  // (from the original)
    r0_4 = call_00309ef0(r7_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_27a768;
    }
    if (u32(*gptr<u8>(r7_1 + 9u)) >= 3u) {
        goto L_27a768;
    }
    r0_5 = call_0030e56c(r7_1, r8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf_1 = r0_5 == 0;
    if (!zf_1) {
        zf_1 = r7_1 == 0;
    }
    if (zf_1) {
        goto L_27a768;
    }
    r0_1 = r5_1;
L_27a764:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_27a768:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_27a6e8;
    }
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0027a6c4
GUEST_EXPORT(0x0027a6c4, d_0027a6c4::f_0027a6c4);

// f_0027a780: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a780 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32, u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)

u32 f_0027a780(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_27a838;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a7a4:;
    r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
        goto L_27a7c0;
    }
    r1 = r0_2 * 0x149u;  // (from the original)
    r5_1 = r6 + (r1 << 7);
L_27a7c0:;
    if (r5_1 == 0) {
        goto L_27a83c;
    }
    r0_3 = call_00301e20(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a83c;
    }
    r0_4 = call_002fb328(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = r0_4 + 0x292a4u;  // (from the original)
    r0_6 = call_00118c9c(r0_5, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r8_1 = r5_1 + 0x8d4cu;  // (from the original)
    r0_7 = call_00309ef0(r8_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        goto L_27a83c;
    }
    if (u32(*gptr<u8>(r8_1 + 9u)) != 0) {
        goto L_27a83c;
    }
    if (u32(s32(s8(*gptr<u8>(0x8d5bu + r5_1)))) != r0_6) {  // (from the original)
        goto L_27a83c;
    }
    if (r8_1 == 0) {
        goto L_27a83c;
    }
    r0_1 = r5_1;
L_27a838:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_27a83c:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_27a7a4;
    }
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0027a780
GUEST_EXPORT(0x0027a780, d_0027a780::f_0027a780);

// f_0027a858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a858 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32, u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)

u32 f_0027a858(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_27a910;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a87c:;
    r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
        goto L_27a898;
    }
    r1 = r0_2 * 0x149u;  // (from the original)
    r5_1 = r6 + (r1 << 7);
L_27a898:;
    if (r5_1 == 0) {
        goto L_27a914;
    }
    r0_3 = call_00301e20(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a914;
    }
    r0_4 = call_002fb328(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = r0_4 + 0x292a4u;  // (from the original)
    r0_6 = call_00118c9c(r0_5, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r8_1 = r5_1 + 0x8d5cu;  // (from the original)
    r0_7 = call_00309ef0(r8_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        goto L_27a914;
    }
    if (u32(*gptr<u8>(r8_1 + 9u)) >= 2u) {
        goto L_27a914;
    }
    if (u32(s32(s8(*gptr<u8>(0x8d6bu + r5_1)))) != r0_6) {  // (from the original)
        goto L_27a914;
    }
    if (r8_1 == 0) {
        goto L_27a914;
    }
    r0_1 = r5_1;
L_27a910:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_27a914:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_27a87c;
    }
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0027a858
GUEST_EXPORT(0x0027a858, d_0027a858::f_0027a858);

// f_0027a930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a930 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32, u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)

u32 f_0027a930(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_27a9dc;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27a954:;
    r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
        goto L_27a970;
    }
    r1 = r0_2 * 0x149u;  // (from the original)
    r5_1 = r6 + (r1 << 7);
L_27a970:;
    if (r5_1 == 0) {
        goto L_27a9e0;
    }
    r0_3 = call_00301e20(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_27a9e0;
    }
    r0_4 = call_002fb328(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = r0_4 + 0x292a4u;  // (from the original)
    r0_6 = call_00118c9c(r0_5, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r8_1 = r5_1 + 0x8d6cu;  // (from the original)
    call_00309ef0(r8_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (u32(*gptr<u8>(r8_1 + 9u)) == 1u) {
        goto L_27a9e0;
    }
    if (u32(s32(s8(*gptr<u8>(0x8d80u + r5_1)))) != r0_6) {  // (from the original)
        goto L_27a9e0;
    }
    if (r8_1 == 0) {
        goto L_27a9e0;
    }
    r0_1 = r5_1;
L_27a9dc:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_27a9e0:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_27a954;
    }
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0027a930
GUEST_EXPORT(0x0027a930, d_0027a930::f_0027a930);

// f_0027a9fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027a9fc {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0076de78, u32(u32, u32, u32, u32)> call_0076de78;  // (from the original)

u32 f_0027a9fc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r8 = r2;
    r7 = r1;
    r0_1 = call_00301e20(r1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_27aa6c;
    } else {
        r4 = 0u;
        r9 = r4;
    }
L_27aa24:;
    r0_2 = r4 & 0xffu;  // (from the original)
    if (r0_2 >= 4u) {
        r5_1 = r9;
        goto L_27aa40;
    }
    r1 = r0_2 * 0x149u;  // (from the original)
    r5_1 = r6 + (r1 << 7);
L_27aa40:;
    if (r5_1 == 0) {
        goto L_27aa70;
    }
    r0_3 = call_0076de78(r5_1, r7, r8, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf_1 = r0_3 == 0;
    if (!zf_1) {
        zf_1 = r5_1 + 0x8d84u == 0;  // (from the original)
    }
    if (zf_1) {
        goto L_27aa70;
    }
    r0_1 = r5_1;
L_27aa6c:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_27aa70:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_27aa24;
    }
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0027a9fc
GUEST_EXPORT(0x0027a9fc, d_0027a9fc::f_0027a9fc);

// f_0027aac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027aac0 {

inline constexpr guest::Function<0x001187cd, u32(u32, u32, u32, u32)> call_001187cc;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x005c6760, u32(u32, u32, u32, u32)> call_005c6760;  // (from the original)

u32 f_0027aac0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r8 = r2;
    call_005c6760(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_27aad8:;
        r5_1 = r6 + (r4 * 0x149u << 7);  // (from the original)
        r0_1 = r5_1 + 0x55a6u;  // (from the original)
        r0_2 = call_002fbd54(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_2 == 0)) {
            r3_1 = r4 & 0xffu;  // (from the original)
            r0_2 = call_001187cc(r5_1, r7, r8, r3_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_0027aac0
GUEST_EXPORT(0x0027aac0, d_0027aac0::f_0027aac0);

// f_0027b3a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027b3a8 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)

u32 f_0027b3a8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r2_1 = r13 + 0x20u;  // (from the original)
    r4_1 = *gptr<u32>(r2_1);
    r5_1 = *gptr<u32>(r2_1 + 4);
    r6_1 = *gptr<u32>(r2_1 + 8);
    r7_1 = *gptr<u32>(r2_1 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fc934(r0, r1, r2_1, r3);
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fc934(r0_2, r2, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r0_3 + 4u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fc934(r0_4, r3, r2_3, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r0_5 + 4u;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fc934(r0_6, 0x95bfdcu, r2_4, r3_3);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r0_7 + 4u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fc934(r0_8, r4_1, r2_5, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = r0_9 + 4u;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fc934(r0_10, r5_1, r2_6, r3_5);
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r0_11 + 4u;
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fc934(r0_12, r6_1, r2_7, r3_6);
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_14 = r0_13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fc934(r0_14, r7_1, r2_8, r3_7);
    r0_16 = r0_15 - 0x1cu;  // (from the original)
    *gptr<u8>(r0_16 + 0x20u) = u8(1u);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = 1u;
    guest::cpu()->r[13] = r13;
    return r0_16;
}

}  // namespace d_0027b3a8
GUEST_EXPORT(0x0027b3a8, d_0027b3a8::f_0027b3a8);

// f_0027b528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027b528 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_0027b528(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 ea_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    if (r2 >= 3u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r4_1 = r0 + r2;
    ea_2 = r13 + 0x28u;  // (from the original)
    r6_1 = *gptr<u32>(ea_2);
    r7_1 = *gptr<u32>(ea_2 + 4);
    r3_1 = r13 + 4u;
    if (u32(*gptr<u8>(r4_1 + 0xeu)) != 0) {  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fcbb0(r3_1, 0x2083u, r2, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else {
        r1_2 = r0 + (r2 << 2) + 2u;
        guest::cpu()->r[13] = r13;
        call_002fc934(r3_1, r1_2, r2, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    if (u32(*gptr<u8>(r4_1 + 0xeu)) == 0) {  // (from the original)
        *gptr<u8>(r4_1 + 0xeu) = u8(1u);  // (from the original)
    } else {
        goto L_27b630;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(1u, r1_1, r2_1, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 != r1) {
        goto L_27b630;
    }
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030b654(r0_2, r1_1, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        guest::cpu()->r[13] = r13;
        call_004e9a78(r3, r6_1, 1u, r7_1);
        r1_1 = guest::cpu()->r[1];
        goto L_27b630;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_006a5e34(r0_3, r1_3, r2_3, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_27b630;
    }
    r0_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcbb0(r0_5, 0x2083u, r2_4, r3_5);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_4, r0_6, r3, r6_1);
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0059e65c(r3, r6_1, 1u, r3_6);
    r1_1 = guest::cpu()->r[1];
L_27b630:;
    r0_7 = r13 + 4u;
    r13 = r13 + 0xcu;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4_2 = *gptr<u32>(ea_3);
    r5_1 = *gptr<u32>(ea_3 + 4);
    r6_2 = *gptr<u32>(ea_3 + 8);
    r7_2 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_0027b528
GUEST_EXPORT(0x0027b528, d_0027b528::f_0027b528);

// f_0027c060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027c060 {

inline guest::global<u32, 0x0027c13c> global_0027c13c;  // (from the original)
inline guest::global<u32, 0x008490c8> global_008490c8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x004ba6c8, u32(u32, u32, u32, u32)> call_004ba6c8;  // (from the original)

u32 f_0027c060(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    float S0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    float S0_7 = 0;
    u32 r0_15 = 0;
    u32 r1_6 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_002b6de0(r0, r1, r2, r3);
    S0_1 = guest::cpu()->s[0];
    ea_1 = r0_1 + 0xe4u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_1 + 0xe8u;  // (from the original)
    *gptr<u8>(ea_2) = u8(0u);
    r2_1 = *global_008490c8;
    r3_1 = *gptr<u32>(0x8490c8u + 4);  // (from the original)
    ea_3 = r0_1 + 0xecu;  // (from the original)
    *gptr<u32>(ea_3) = u32(r2_1);
    *gptr<u32>(ea_3 + 4) = u32(r3_1);
    *gptr<u32>(ea_3 + 8) = u32(0u);
    ea_4 = r0_1 + 0xf8u;  // (from the original)
    *gptr<u8>(ea_4) = u8(0u);
    ea_5 = r0_1 + 0xfcu;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r0_1 + 0xe0u;  // (from the original)
    *gptr<u32>(ea_6) = u32(0x8ef958u + 0x48u);  // (from the original)
    *gptr<u32>(r0_1) = u32(0x8ef958u);  // (from the original)
    ea_7 = r0_1 + 0x100u;  // (from the original)
    *gptr<u32>(ea_7) = u32(0u);
    r0_2 = ea_7 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_00301d0c(r0_2, 0x2b6de0u, 0xe0u, 0xcu);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_4 = r0_3 + 0xa80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_5 = call_002f7604(r0_4, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_6 = r0_5 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_7 = call_00125e3c(r0_6, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_8 = r0_7 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    r0_9 = call_00125aec(r0_8, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    r0_10 = r0_9 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    r0_11 = call_00125aec(r0_10, r1_4, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0xddcu;  // (from the original)
    *gptr<u32>(r0_12 + 0xe04u) = u32(0u);  // (from the original)
    S0_6 = std::bit_cast<float>(*global_0027c13c);
    r1_5 = r0_12 + 0xe0cu;  // (from the original)
    *gptr<u32>(r0_12 + 0xe08u) = u32(0u);  // (from the original)
    *gptr<u32>(r1_5) = u32(std::bit_cast<u32>(S0_6));
    *gptr<u32>(r1_5 + 4u) = u32(std::bit_cast<u32>(S0_6));
    r0_13 = r0_12 + 0xe20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    r0_14 = call_004ba6c8(r0_13, r1_5, r2_6, r3_6);
    S0_7 = guest::cpu()->s[0];
    r0_15 = r0_14 - 0xe20u;  // (from the original)
    *gptr<u32>(r0_15 + 0xe54u) = u32(~0u);  // (from the original)
    *gptr<u32>(r0_15 + 0xe58u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_15 + 0xe5cu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_15 + 0xe5du) = u8(0u);  // (from the original)
    *gptr<u8>(r0_15 + 0xe5eu) = u8(0u);  // (from the original)
    r1_6 = r0_15 + 0xc68u;  // (from the original)
    *gptr<u8>(r0_15 + 0xe5fu) = u8(0u);  // (from the original)
    *gptr<u32>(r0_15 + 0x1cu) = u32(r1_6);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    return r0_15;
}

}  // namespace d_0027c060
GUEST_EXPORT(0x0027c060, d_0027c060::f_0027c060);

// f_0027c2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027c2c8 {

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline guest::global<u32, 0x00ad5ba4> global_00ad5ba4;  // (from the original)
inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> call_00132478;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x0027c8f8, u32(u32, u32, u32, u32)> call_0027c8f8;  // (from the original)
inline constexpr guest::Function<0x002ee898, u32(u32, u32, u32, u32)> call_002ee898;  // (from the original)
inline constexpr guest::Function<0x002ee91c, u32(u32, u32, u32, u32)> call_002ee91c;  // (from the original)
inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> call_005b19f8;  // (from the original)
inline constexpr guest::Function<0x005b1a2c, u32(u32, u32, u32, u32)> call_005b1a2c;  // (from the original)
inline constexpr guest::Function<0x00755ac4, u32(u32, u32, u32, u32)> call_00755ac4;  // (from the original)
inline constexpr guest::Function<0x0081533c, u32(u32, u32, u32, u32)> call_0081533c;  // (from the original)
inline constexpr guest::Function<0x00815500, u32(u32, u32, u32, u32)> call_00815500;  // (from the original)

u32 f_0027c2c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_6 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r3_10 = 0;
    u32 r1_7 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_11 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r3_12 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_13 = 0;
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = r1;
    r0_1 = *global_00975338;
    guest::cpu()->r[13] = r13;
    r0_2 = call_003045a8(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    if (*global_00ad5ba4 == 0) {
        guest::cpu()->r[13] = r13;
        call_00815500(0xad5ba0u, r0_2, 0x32000u, r3_1);  // (from the original)
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_0081533c(r0_3, 0xad5ba0u, 0x894fc4u, 0u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_005b1a2c(0x95df58u, r1_1, r2_1, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00755ac4(0x95df58u, r1_2, r2_2, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002ee898(0xad5ce8u, 0x894f9cu, r0_2, r3_4);  // (from the original)
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002ee898(0xad5dd8u, 0x894f74u, r0_2, r3_5);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    do {
L_27c360:;
        guest::cpu()->r[13] = r13;
        r0_4 = call_0027c8f8(r4, r5, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_4 == 0);
    r5 = 0xad5ba0u;  // (from the original)
    r4 = *gptr<u32>(r5 + 0x128u);  // (from the original)
    if (r4 == 0) {
        goto L_27c3a8;
    }
    do {
L_27c388:;
        r0_5 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_5, r1, r2, r3);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_6 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f73b8(r0_6, r1_3, r2_3, r3_6);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
L_27c3a8:;
    r4 = *gptr<u32>(r5 + 0x140u);  // (from the original)
    if (r4 == 0) {
        goto L_27c3d4;
    }
    do {
L_27c3b4:;
        r0_7 = r4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005b19f8(r0_7, r1, r2, r3);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r0_8 = r4 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f73b8(r0_8, r1_4, r2_4, r3_7);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
L_27c3d4:;
    r0_9 = r5 + 0x124u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_9, r1, r2, r3);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_10 = r5 + 0x130u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_10, r1_5, r2_5, r3_8);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_11 = r5 + 0x13cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00132478(r0_11, r1_6, r2_6, r3_9);
    r2_7 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r1_7 = r5 + 8u;
    r0_12 = r5 + 0x130u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0013f134(r0_12, r1_7, r2_7, r3_10);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002f747c(r5, r1_8, r2_8, r3_11);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002ee91c(0xad5ce8u, r1_9, r2_9, r3_12);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002ee91c(0xad5dd8u, r1_10, r2_10, r3_13);  // (from the original)
}

}  // namespace d_0027c2c8
GUEST_EXPORT(0x0027c2c8, d_0027c2c8::f_0027c2c8);

// f_0027c554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027c554 {

inline guest::global<u32, 0x0095df50> global_0095df50;  // (from the original)

u32 f_0027c554() {
    *global_0095df50 = u32(0u);
    guest::cpu()->r[1] = 0x95df50u;  // (from the original)
    return 0u;
}

}  // namespace d_0027c554
GUEST_EXPORT(0x0027c554, d_0027c554::f_0027c554);

// f_0027d310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d310 {

inline guest::global<u8, 0x0095df54> global_0095df54;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0027d310(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r6 = 0xad5b90u;  // (from the original)
    do {
L_27d31c:;
        if (r4 >= 4u) {
            r5_1 = 0xad5b90u;  // (from the original)
        } else {
            r5_1 = r6 + (r4 << 2);
        }
        r0_1 = ~0x80000000u;  // (from the original)
        r0_2 = call_002ff6f8(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        *gptr<u32>(r5_1) = u32(r0_2);
        guest::preempt();
    } while (r4 < 4u);
    r0_3 = call_002ff6f8(0x64u, r1, r2, r3);  // (from the original)
    res_1 = r0_3 - 0x32u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r0_3 ^ 0x32u) & (r0_3 ^ res_1)) >> 0x1f;  // (from the original)
    r2_1 = 0x95df54u + 1u;  // (from the original)
    r3_1 = 0x95df54u + 2u;  // (from the original)
    if (!zf_1 && nf_1 == vf_1) {
        *global_0095df54 = u8(0u);
    }
    r12_1 = 0x95df54u + 3u;  // (from the original)
    if (!zf_1 && nf_1 == vf_1) {
        *gptr<u8>(r2_1) = u8(1u);
        *gptr<u8>(r3_1) = u8(0u);
        *gptr<u8>(r12_1) = u8(1u);
    }
    if (zf_1 || nf_1 != vf_1) {
        *global_0095df54 = u8(1u);
        *gptr<u8>(r2_1) = u8(0u);
        *gptr<u8>(r3_1) = u8(1u);
        *gptr<u8>(r12_1) = u8(0u);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 1u;
}

}  // namespace d_0027d310
GUEST_EXPORT(0x0027d310, d_0027d310::f_0027d310);

// f_0027d394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d394 {

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> call_00251c24;  // (from the original)
inline constexpr guest::Function<0x00300900, u32(u32, u32, u32, u32)> call_00300900;  // (from the original)

u32 f_0027d394(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00300900(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r1_2 = u32(*gptr<u8>(r0 + 0x116u));  // (from the original)
    r0_2 = *global_0094f268;
    r0_3 = call_00251c24(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return r0_3;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_0027d394
GUEST_EXPORT(0x0027d394, d_0027d394::f_0027d394);

// f_0027d44c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d44c {

struct __attribute__((packed)) Object_0027d44c_0 {
    u8 unknown_0[0xc9];  // (not used here)
    u8 byte_c9;
};
GUEST_OFFSET(Object_0027d44c_0, byte_c9, 0xc9);  // (from the original)

inline constexpr guest::Function<0x00599c6c, u32(u32, u32, u32, u32)> call_00599c6c;  // (from the original)

u32 f_0027d44c(gptr<Object_0027d44c_0> arg0) {
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_c9);
    zf_1 = r0_1 == 0x48u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_1 == 0x49u;  // (from the original)
    }
    if (!zf_1) {
        zf_1 = r0_1 == 0x4au;  // (from the original)
    }
    if (!zf_1) {
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    r0_2 = call_00599c6c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_0027d44c
GUEST_EXPORT(0x0027d44c, d_0027d44c::f_0027d44c);

// f_0027d490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d490 {

struct __attribute__((packed)) Object_0027d490_0 {
    u8 unknown_0[0x119];  // (not used here)
    u8 byte_119;
};
GUEST_OFFSET(Object_0027d490_0, byte_119, 0x119);  // (from the original)

inline constexpr guest::Function<0x002d0998, u32(u32, u32, u32, u32)> call_002d0998;  // (from the original)

u32 f_0027d490(gptr<Object_0027d490_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    r1_1 = u32(arg0->byte_119);
    if (r1_1 >= 4u) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u8>(r13) = u8(r1_1);
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002d0998(r0_1, r1_1, guest::cpu()->r[2], r3);
    r1_2 = guest::cpu()->r[1];
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1_2 = *gptr<u32>(r0_2);
        zf_1 = r1_2 == 0;
    }
    if (!zf_1) {
        if (r1_2 == r0) {
            r1_2 = 0u;
            *gptr<u32>(r0_2) = u32(r1_2);
        }
    }
    ea_2 = r0 + 0x119u;  // (from the original)
    *gptr<u8>(ea_2) = u8(4u);
    ea_3 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_3 + 4);
    r5_1 = *gptr<u32>(ea_3 + 8);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return 4u;
}

}  // namespace d_0027d490
GUEST_EXPORT(0x0027d490, d_0027d490::f_0027d490);

// f_0027d790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d790 {

struct __attribute__((packed)) Object_0027d790_0 {
    u8 unknown_0[0x116];  // (not used here)
    u8 byte_116;
};
GUEST_OFFSET(Object_0027d790_0, byte_116, 0x116);  // (from the original)

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> call_00251c24;  // (from the original)
inline constexpr guest::Function<0x00255968, u32(u32, u32, u32, u32)> call_00255968;  // (from the original)

u32 f_0027d790(gptr<Object_0027d790_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r2_2 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = u32(arg0->byte_116);
    r0_1 = *global_0094f268;
    guest::cpu()->s[0] = S0;
    r0_2 = call_00251c24(r0_1, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (r0_2 != 0) {
        r0_3 = *gptr<u32>(r0 + 0x188u);  // (from the original)
        if (r0_3 == 0) {
            r0_4 = *global_0094f268;
            r1_3 = u32(*gptr<u8>(r0 + 0x116u));  // (from the original)
            guest::cpu()->s[0] = S0_1;
            r0_3 = call_00255968(r0_4, r1_3, r2_1, r3_1);
            *gptr<u32>(r0 + 0x188u) = u32(r0_3);  // (from the original)
        }
        r1_4 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(*gptr<u32>(r0 + 0x48u)))));  // (from the original)
        *gptr<u8>(r0_3 + 1u) = u8(u32(*gptr<u8>(r0_3 + 1u)) & ~0xf8u | 0xf8u & r1_4 << 1);  // (from the original)
        r1_5 = u32(*gptr<u8>(r0_3 + 2u)) & ~0x1fu | (0x3e0u & r1_4 >> 2) >> 5;  // (from the original)
        *gptr<u8>(r0_3 + 2u) = u8(r1_5);
        r2_2 = r1_5 & ~0xe0u;  // (from the original)
        S0_1 = std::bit_cast<float>(vcvt_uz_f(std::bit_cast<float>(*gptr<u32>(r0 + 0x50u))));  // (from the original)
        r1_6 = std::bit_cast<u32>(S0_1);
        *gptr<u8>(r0_3 + 2u) = u8(r2_2 | 0xe0u & r1_6 << 3);  // (from the original)
        *gptr<u8>(r0_3 + 3u) = u8(u32(*gptr<u8>(r0_3 + 3u)) & ~0x7fu | (0x3f8u & r1_6 >> 2) >> 3);  // (from the original)
        *gptr<u8>(r0_3) = u8(u32(*gptr<u8>(r0_3)) & ~0x80u | r1 << 7);  // (from the original)
        *gptr<u8>(r0_3 + 1u) = u8(u32(*gptr<u8>(r0_3 + 1u)) & ~7u | (r1 & 0xeu) >> 1);  // (from the original)
        r1_2 = u32(*gptr<u8>(r0_3 + 5u)) & ~0x3cu | (u32(*gptr<u8>(r0 + 0x117u)) & 0xfu) << 2;  // (from the original)
        *gptr<u8>(r0_3 + 5u) = u8(r1_2);
        r0_2 = 1u;
        *gptr<u8>(r0 + 0x118u) = u8(r0_2);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    return r0_2;
}

}  // namespace d_0027d790
GUEST_EXPORT(0x0027d790, d_0027d790::f_0027d790);

// f_0027d8a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d8a8 {


u32 f_0027d8a8(u32 r0) {
    u32 r0_1 = 0;
    if (r0 >= 8u) {
        r0_1 = 0x9841ecu + 0x18u;  // (from the original)
    } else {
        r0_1 = 0x9841ecu + (r0 + (r0 << 1) << 2);  // (from the original)
    }
    guest::cpu()->r[1] = 0x9841ecu;  // (from the original)
    return r0_1;
}

}  // namespace d_0027d8a8
GUEST_EXPORT(0x0027d8a8, d_0027d8a8::f_0027d8a8);

// f_0027d93c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d93c {


u32 f_0027d93c(u32 r0) {
    float S0_1 = 0;
    u32 r0_1 = 0;
    float S0_2 = 0;
    if (r0 >= 8u) {
        S0_1 = std::bit_cast<float>(*gptr<u32>(0x9841ecu + 0x20u));  // (from the original)
        guest::cpu()->r[1] = 0x9841ecu;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        return r0;
    }
    r0_1 = 0x9841ecu + (r0 + (r0 << 1) << 2);  // (from the original)
    S0_2 = std::bit_cast<float>(*gptr<u32>(r0_1 + 8u));
    guest::cpu()->r[1] = 0x9841ecu;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    return r0_1;
}

}  // namespace d_0027d93c
GUEST_EXPORT(0x0027d93c, d_0027d93c::f_0027d93c);

// f_0027d9a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d9a8 {

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> call_00251c24;  // (from the original)
inline constexpr guest::Function<0x0025222c, u32(u32, u32, u32, u32)> call_0025222c;  // (from the original)

u32 f_0027d9a8(u32 r0_unused, u32 r1, u32 r2) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = *global_0094f268;
    r0_1 = call_00251c24(r4_1, r2, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0025222c(r4_1, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0027d9a8
GUEST_EXPORT(0x0027d9a8, d_0027d9a8::f_0027d9a8);

// f_0027d9ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027d9ec {

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x00251c24, u32(u32, u32, u32, u32)> call_00251c24;  // (from the original)
inline constexpr guest::Function<0x00252338, u32(u32, u32, u32, u32)> call_00252338;  // (from the original)

u32 f_0027d9ec(u32 r0_unused, u32 r1) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = *global_0094f268;
    r0_1 = call_00251c24(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00252338(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0027d9ec
GUEST_EXPORT(0x0027d9ec, d_0027d9ec::f_0027d9ec);

// f_0027da24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027da24 {

struct __attribute__((packed)) Object_0027da24_0 {
    u8 unknown_0[0x116];  // (not used here)
    u8 byte_116;
};
GUEST_OFFSET(Object_0027da24_0, byte_116, 0x116);  // (from the original)

inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x0025286c, u32(u32, u32, u32, u32)> call_0025286c;  // (from the original)

u32 f_0027da24(gptr<Object_0027da24_0> arg0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = u32(arg0->byte_116);
    r0_1 = *global_0094f268;
    return call_0025286c(r0_1, r1_1, 0u, guest::cpu()->r[3]);
}

}  // namespace d_0027da24
GUEST_EXPORT(0x0027da24, d_0027da24::f_0027da24);

// f_0027da40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027da40 {

inline constexpr guest::Function<0x002d0998, u32(u32, u32, u32, u32)> call_002d0998;  // (from the original)

u32 f_0027da40(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u8>(r13) = u8(r1);
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002d0998(r0_1, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1_1 = *gptr<u32>(r0_2);
        zf_1 = r1_1 == 0;
    }
    if (!zf_1) {
        if (r1_1 == r0) {
            r1_1 = 0u;
            *gptr<u32>(r0_2) = u32(r1_1);
        }
    }
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2 + 4);
    r5_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0027da40
GUEST_EXPORT(0x0027da40, d_0027da40::f_0027da40);

// f_0027da80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027da80 {

struct __attribute__((packed)) Object_0027da80_0 {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(Object_0027da80_0, word_40, 0x40);  // (from the original)

inline guest::global<u32, 0x0027dafc> global_0027dafc;  // (from the original)
inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x00255968, u32(u32, u32, u32, u32)> call_00255968;  // (from the original)
inline constexpr guest::Function<0x00300900, u32(u32, u32, u32, u32)> call_00300900;  // (from the original)
inline constexpr guest::Function<0x005210a8, u32(u32, u32, u32, u32)> call_005210a8;  // (from the original)
inline constexpr guest::Function<0x0061a79c, u32(u32, u32, u32, u32)> call_0061a79c;  // (from the original)

u32 f_0027da80(gptr<Object_0027da80_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    float S0_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    float S0_3 = 0;
    S0_1 = std::bit_cast<float>(*global_0027dafc);
    guest::cpu()->r[13] -= 8u;
    arg0->word_40 = u32(std::bit_cast<u32>(S0_1));
    guest::cpu()->s[0] = S0_1;
    r0_1 = call_00300900(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0_2 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->s[0] = S0_2;
        return call_005210a8(r0, r1_1, r2_1, guest::cpu()->r[3]);
    }
    r0_2 = *gptr<u32>(r0 + 0x188u);  // (from the original)
    if (r0_2 == 0) {
        r1_2 = u32(*gptr<u8>(r0 + 0x116u));  // (from the original)
        r0_3 = *global_0094f268;
        guest::cpu()->s[0] = S0_2;
        r0_2 = call_00255968(r0_3, r1_2, r2_1, guest::cpu()->r[3]);
        S0_2 = guest::cpu()->s[0];
        *gptr<u32>(r0 + 0x188u) = u32(r0_2);  // (from the original)
    }
    r2_2 = u32(*gptr<u8>(r0_2 + 4u));
    r1_3 = r2_2 & 3u;
    r0_4 = (u32(*gptr<u8>(r0_2 + 3u)) >> 7) + (r1_3 << 1);
    if (r0_4 != 4u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->s[0] = S0_2;
        return r0_4;
    }
    guest::cpu()->s[0] = S0_2;
    r0_5 = call_0061a79c(r0, r1_3, r2_2, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    S0_3 = guest::cpu()->s[0];
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0_3;
        return r0_5;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0_3;
    return call_005210a8(r0, r1_4, r2_3, guest::cpu()->r[3]);
}

}  // namespace d_0027da80
GUEST_EXPORT(0x0027da80, d_0027da80::f_0027da80);

// f_0027dc10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc10 {


u32 f_0027dc10(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r1 + (r1 << 2);
    r0_2 = u32(s32(s16(*gptr<u16>(0x83e168u + (r0_1 << 3) + (r2 << 3) - 4u))));  // (from the original)
    guest::cpu()->r[1] = 0x83e168u;  // (from the original)
    return r0_2;
}

}  // namespace d_0027dc10
GUEST_EXPORT(0x0027dc10, d_0027dc10::f_0027dc10);

// f_0027dc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc2c {


u32 f_0027dc2c(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    r0_1 = r1 + (r1 << 2);
    r0_2 = 0x83e168u + (r0_1 << 3) + (r2 << 3);  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_2 - 8u));
    guest::cpu()->r[1] = 0x83e168u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_2;
}

}  // namespace d_0027dc2c
GUEST_EXPORT(0x0027dc2c, d_0027dc2c::f_0027dc2c);

// f_0027dc48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc48 {


u32 f_0027dc48(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = r1 + (r1 << 2);
    r0_2 = u32(*gptr<u16>(0x83e168u + (r0_1 << 3) + (r2 << 3) + 6u));  // (from the original)
    guest::cpu()->r[1] = 0x83e168u;  // (from the original)
    return r0_2;
}

}  // namespace d_0027dc48
GUEST_EXPORT(0x0027dc48, d_0027dc48::f_0027dc48);

// f_0027dc64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc64 {

struct __attribute__((packed)) Object_0027dc64_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0027dc64_0, word_0, 0x0);  // (from the original)


u32 f_0027dc64(gptr<Object_0027dc64_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x9cu);  // (from the original)
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0027dc64
GUEST_EXPORT(0x0027dc64, d_0027dc64::f_0027dc64);

// f_0027dc88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dc88 {

inline constexpr guest::Function<0x001e90e4, u32(u32, u32, u32, u32)> call_001e90e4;  // (from the original)
inline constexpr guest::Function<0x002d59d4, u32(u32, u32, u32, u32)> call_002d59d4;  // (from the original)
inline constexpr guest::Function<0x002fd0c4, u32(u32, u32, u32, u32)> call_002fd0c4;  // (from the original)

u32 f_0027dc88(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 8;
    r1_1 = r1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_001e90e4(r0, r1_1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r1_2 = r1 + 0x14u;  // (from the original)
    r0_2 = r0_1 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fd0c4(r0_2, r1_2, r2_1, guest::cpu()->r[3]);
    r1_3 = *gptr<u32>(r1);
    ea_1 = r0_3 - 0xd0u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1_3);
    r2_2 = *gptr<u32>(r1 + 0x1cu);  // (from the original)
    *gptr<u32>(ea_1 + *gptr<u32>(r1_3 - 0xcu)) = u32(r2_2);  // (from the original)
    r1_4 = *gptr<u32>(r1 + 0x20u);  // (from the original)
    *gptr<u32>(ea_1 + 0xd0u) = u32(r1_4);  // (from the original)
    *gptr<u8>(ea_1 + 0x118u) = u8(0u);  // (from the original)
    r0_4 = ea_1 + 0x11cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_002d59d4(r0_4, r1_4, r2_2, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_6 = r0_5 - 0x11cu;  // (from the original)
    *gptr<u32>(r0_6 + 0x188u) = u32(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_0027dc88
GUEST_EXPORT(0x0027dc88, d_0027dc88::f_0027dc88);

// f_0027dd00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027dd00 {

struct __attribute__((packed)) Object_0027dd00_0 {
    u32 word_0;
    u8 unknown_4[0xcc];  // (not used here)
    u32 word_d0;
};
GUEST_OFFSET(Object_0027dd00_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0027dd00_0, word_d0, 0xd0);  // (from the original)

inline constexpr guest::Function<0x002d59e8, u32(u32, u32, u32, u32)> call_002d59e8;  // (from the original)
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32, u32)> call_004ecf70;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x0057bb6c, u32(u32, u32, u32, u32)> call_0057bb6c;  // (from the original)

u32 f_0027dd00(gptr<Object_0027dd00_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 8;
    r4_1 = r1;
    if (r1 == 0) {
        r4_1 = 0x8efb34u;  // (from the original)
    }
    r1_1 = *gptr<u32>(r4_1);
    arg0->word_0 = u32(r1_1);
    ea_1 = r4_1 + 0x1cu;  // (from the original)
    r2_1 = *gptr<u32>(ea_1);
    *gptr<u32>(r0 + *gptr<u32>(r1_1 - 0xcu)) = u32(r2_1);  // (from the original)
    ea_2 = r4_1 + 0x20u;  // (from the original)
    r1_2 = *gptr<u32>(ea_2);
    ea_3 = r0 + 0xd0u;  // (from the original)
    arg0->word_d0 = u32(r1_2);
    r0_1 = ea_3 + 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002d59e8(r0_1, r1_2, r2_1, guest::cpu()->r[3]);
    res_1 = r4_1 + 0x14u;  // (from the original)
    r1_3 = res_1;
    if (res_1 == 0) {
        r1_3 = 0x8f427cu;  // (from the original)
    }
    r0_3 = r0_2 - 0x4cu;  // (from the original)
    r2_2 = *gptr<u32>(r1_3);
    *gptr<u32>(r0_3) = u32(r2_2);
    r2_3 = *gptr<u32>(r2_2 - 0xcu);  // (from the original)
    r1_4 = *gptr<u32>(r1_3 + 4u);
    *gptr<u32>(r0_3 + r2_3) = u32(r1_4);
    r0_4 = r0_3 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_004ecf70(r0_4, r1_4, r2_3, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_6 = r0_5 - 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_004edd84(r0_6, r1_5, r2_4, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r13 = r13 + 8;
    r0_8 = r0_7 - 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0057bb6c(r0_8, r1_6, r2_5, guest::cpu()->r[3]);
}

}  // namespace d_0027dd00
GUEST_EXPORT(0x0027dd00, d_0027dd00::f_0027dd00);

// f_0027e08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e08c {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_0027e08c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 nf_1 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_1, 0x2242u, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_2, 0x2e59u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002ff6f8(3u, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    nf_1 = u32(*gptr<u8>(0x5700u + r1)) << 0x1b >> 0x1f;  // (from the original)
    if (nf_1 != 0u) {
        r2_3 = r0_3 + 1u;
    }
    if (nf_1 == 0u) {
        r2_3 = r0_3 + 4u;
    }
    *gptr<u32>(r13) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(5u);
    *gptr<u32>(r13 + 8) = u32(0u);
    r3_3 = r1 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00306354(r0, 0x27e128u, r2_3, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r1_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00768138(r0, r1_2, 0u, r3_4);
    r1_3 = guest::cpu()->r[1];
    r0_4 = r13 + 0xcu;  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0027e08c
GUEST_EXPORT(0x0027e08c, d_0027e08c::f_0027e08c);

// f_0027e13c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e13c {

inline guest::global<u16, 0x00887290> global_00887290;  // (from the original)
inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline constexpr guest::Function<0x0056b5a4, u32(u32, u32, u32, u32)> call_0056b5a4;  // (from the original)
inline constexpr guest::Function<0x0056c7b0, u32(u32, u32, u32, u32)> call_0056c7b0;  // (from the original)
inline constexpr guest::Function<0x0056d230, u32(u32, u32, u32, u32)> call_0056d230;  // (from the original)
inline constexpr guest::Function<0x00695ed8, u32(u32, u32, u32, u32)> call_00695ed8;  // (from the original)
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> call_006f0130;  // (from the original)

u32 f_0027e13c(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    u32 r4_2 = 0;
    u32 r0_4 = 0;
    u32 ea_4 = 0;
    u32 r4_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 ea_5 = 0;
    u32 r4_4 = 0;
    r0_1 = *global_00950148;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00695ed8(r0_1, 0x27e1b0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        ea_2 = r13;
        r13 = r13 + 8;
        r4_1 = *gptr<u32>(ea_2);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_3 = u32(*gptr<u16>(r0_2 + 0xcu));  // (from the original)
    r1_2 = u32(*global_00887290);
    if (r0_3 != r1_2) {
        ea_3 = r13;
        r13 = r13 + 8;
        r4_2 = *gptr<u32>(ea_3);
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_4 = u32(*gptr<u8>(0x2885u + r0_2));  // (from the original)
    if (r0_4 == 0) {
        ea_4 = r13;
        r13 = r13 + 8;
        r4_3 = *gptr<u32>(ea_4);
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r0_5 = r0_2 + 0x2870u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056d230(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0_7 = call_0056b5a4(r0_6, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_0056c7b0(r0_7, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    ea_5 = r13;
    r13 = r13 + 8;
    r4_4 = *gptr<u32>(ea_5);
    r14 = *gptr<u32>(ea_5 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_4;
    return call_006f0130(0xeu, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0027e13c
GUEST_EXPORT(0x0027e13c, d_0027e13c::f_0027e13c);

// f_0027e634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e634 {

inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)

u32 f_0027e634(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    call_005cd270(r0, r1, r2, r3);
    ea_1 = r0 + 0x20u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0 + 8u;
    *gptr<u32>(ea_2) = u32(0x1800181u);  // (from the original)
    ea_3 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r0 + 0x24u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    *gptr<u32>(ea_4 + 4) = u32(0x5264c0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0027e634
GUEST_EXPORT(0x0027e634, d_0027e634::f_0027e634);

// f_0027e670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027e670 {

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline constexpr guest::Function<0x002f98a8, u32(u32, u32, u32, u32)> call_002f98a8;  // (from the original)
inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)

u32 f_0027e670(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    goto L_27e670;
L_27e670:;
    r13 = r13 - 8;
    r0_1 = *global_0095386c;
    guest::cpu()->r[13] = r13;
    call_002f98a8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_005cd270(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    ea_1 = r0 + 8u;
    *gptr<u32>(ea_1) = u32(0x24000942u);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0u);
    *gptr<u32>(r0 + 0x20u) = u32(0x5264e0u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0x526474u);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(0x526484u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(0x10f9fdu, 0x526484u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0027e670
GUEST_EXPORT(0x0027e670, d_0027e670::f_0027e670);

// f_0027eeac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0027eeac {

inline constexpr guest::Function<0x0027ec34, u32(u32, u32, u32, u32)> call_0027ec34;  // (from the original)
inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)
inline constexpr guest::Function<0x00306f60, u32(u32, u32, u32, u32)> call_00306f60;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x007ceb80, u32(u32, u32, u32, u32)> call_007ceb80;  // (from the original)
inline constexpr guest::Function<0x007d1fd4, u32(u32, u32, u32, u32)> call_007d1fd4;  // (from the original)

u32 f_0027eeac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r1_5 = 0;
    u32 r0_4 = 0;
    u32 r1_6 = 0;
    u32 r3_4 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r0_5 = 0;
    u32 r1_7 = 0;
    u32 r2_5 = 0;
    u32 r1_8 = 0;
    u32 r3_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0027ec34(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r2_1 = r0 + 0x14u;  // (from the original)
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003171b4(r0_1, r1_1, r2_1, r3_1);
    r0_2 = r0 + 0x2520u;  // (from the original)
    r1_2 = *gptr<u32>(r13);
    r2_2 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    call_007d1fd4(r0_2, r1_2, r2_2, 0u);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5_1 = *gptr<u32>(r0_2 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00306f60(r5_1, r1_3, r2_3, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 >> 0x1f != (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r1_5 = *gptr<u32>(r5_1 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f9e1c(r0_3, r1_5, r2_4, r3_3);
    r1_6 = guest::cpu()->r[1];
    r3_4 = u32(*gptr<u8>(r0_2 + 1u));
    r1_4 = r1_6 + u32(*gptr<u8>(r0_2));
    r0_3 = r0_4 + r3_4;
    if (1u == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r5_2 = r0_3 << 8;
    r6_1 = r3_4 & ~0xffu;  // (from the original)
    r0_5 = r6_1 | r1_4 & 0xffu;  // (from the original)
    r1_7 = 1u & ~0xffu | *gptr<u32>(r13) & 0xffu;  // (from the original)
    r2_5 = r5_2 & 0xff00u | r0_5 & ~0xff00u;  // (from the original)
    r1_8 = r1_7 & ~0xff00u | *gptr<u32>(r13 + 4u) << 8 & 0xff00u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x8f5b94u);  // (from the original)
    r3_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_007ceb80(r0_2, r1_8, r2_5, r3_5);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0027eeac
GUEST_EXPORT(0x0027eeac, d_0027eeac::f_0027eeac);
